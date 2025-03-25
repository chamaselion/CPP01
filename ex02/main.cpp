/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszikora <bszikora@student.42helbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 14:51:09 by bszikora          #+#    #+#             */
/*   Updated: 2025/03/25 15:19:30 by bszikora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
		std::cout  << std::endl;
	std::string brain = "HI THIS IS BRAIN";
	std::string* stringPTR = &brain;
	std::string& stringREF = brain;
	
		std::cout << "Adress\n------------------------------------------------------\n";

	std::cout << "| " << &brain <<" is the memory address of the string.|\n";
	std::cout << "| " << stringPTR << " is the memory address of stringPTR  |\n";
	std::cout << "| " << &stringREF << " is the memory address of stringREF  |\n";

		std::cout << "------------------------------------------------------\n";
		std::cout  << std::endl;
		std::cout << "Value\n-----------------------------------------------\n";

	std::cout << "| " << brain <<" is the value of the string.|\n";
	std::cout << "| " << *stringPTR << " is the value of stringPTR  |\n";
	std::cout << "| " << stringREF << " is the value of stringREF  |\n";
	
		std::cout << "-----------------------------------------------\n";	
		std::cout  << std::endl;
}