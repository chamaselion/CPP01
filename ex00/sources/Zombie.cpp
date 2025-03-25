/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszikora <bszikora@student.42helbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 12:33:09 by bszikora          #+#    #+#             */
/*   Updated: 2025/03/25 13:09:58 by bszikora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Zombie.hpp>

Zombie::Zombie() { };
Zombie::~Zombie() { std::cout << this->name << " has been evaporated" << std::endl; }
Zombie::Zombie(std::string name) { this->name = name; }
void Zombie::announce( void ) {std::cout << this->name << ":  BraiiiiiiinnnzzzZ...\n";}