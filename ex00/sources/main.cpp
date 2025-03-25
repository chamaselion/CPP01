/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszikora <bszikora@student.42helbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 13:18:45 by bszikora          #+#    #+#             */
/*   Updated: 2025/03/25 13:38:05 by bszikora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


int main(void)
{
	//////////heap//////////
	std::cout << "Zombos natural habitat is set to heap\n" << "----------\n";
	Zombie *testZombo =  newZombie("heapzombo");
	testZombo->announce();
	delete testZombo;
	//////////stack//////////
	std::cout << "Zombos natural habitat is set to stack\n" << "----------\n";
	Zombie anothertest1("stackzombo1");
	Zombie anothertest2;
	anothertest1.announce();
	anothertest2.announce();
	randomChump("randomstackzombo");
}
