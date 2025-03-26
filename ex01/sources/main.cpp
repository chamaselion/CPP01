/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszikora <bszikora@student.42helbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 13:47:22 by bszikora          #+#    #+#             */
/*   Updated: 2025/03/26 11:09:57 by bszikora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <cstdlib>

int	main(int argc, char **argv)
{
	if (argc != 3)
	{
		std::cout << "Usage: " << argv[0] << " <number_of_zombies> <zombie_name>\n";
		return 1;
	}

	int N = std::atoi(argv[1]);
	if (N <= 0)
	{
		std::cout << "Error: Number of zombies must be a positive integer.\n";
		return 1;
	}

	std::string name = argv[2];
	Zombie* horde = zombieHorde(N, name);

	for (int i = 0; i < N; i++)
	{
		horde[i].announce();
	}

	delete[] horde;
	return 0;
}
