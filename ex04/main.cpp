/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszikora <bszikora@student.42helbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 12:48:07 by bszikora          #+#    #+#             */
/*   Updated: 2025/05/04 14:26:02 by bszikora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

void replace_in_file(const std::string& input_file, const std::string& output_file, const std::string& s1, const std::string& s2)
{
	std::string	line;
    std::string	modified_line;
    size_t		start_pos;
    size_t		found_pos;

	if (s1.empty())
	{
		std::cerr << "Error: search string cannot be empty\n";
		return;
	}
    std::ifstream infile(input_file.c_str());
	if (!infile)
	{
		std::cerr << "Error opening input file!\n";
		return;
	}
	std::ofstream outfile(output_file.c_str());
	if (!outfile)
	{
		std::cerr << "Error creating output file!\n";
		return;
	}
	while (std::getline(infile, line))
	{
		modified_line.clear();
		start_pos = 0;
		while ((found_pos = line.find(s1, start_pos)) != std::string::npos)
		{
			modified_line.append(line, start_pos, found_pos - start_pos);
			modified_line.append(s2);
			start_pos = found_pos + s1.length();
		}
        modified_line.append(line, start_pos, line.length() - start_pos);
        outfile << modified_line << '\n';
    }

    std::cout << "Replacement complete! Output written to " << output_file << '\n';
}

int main(int argc, char* argv[])
{
    if (argc != 4) {
        std::cerr << "Usage: <program> <input_file> <string1> <string2>\n";
        return 1;
    }

    std::string input_file = argv[1];
    std::string output_file = input_file + ".replace";
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    replace_in_file(input_file, output_file, s1, s2);

    return 0;
}
