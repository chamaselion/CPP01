/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszikora <bszikora@student.42helbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 11:35:15 by bszikora          #+#    #+#             */
/*   Updated: 2025/05/04 13:15:31 by bszikora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA() : name("Unnamed survivor"), weapon(*(new Weapon("some sort of crafted weapon"))) {}
HumanA::HumanA(std::string name, Weapon &weapon) : name(name), weapon(weapon) {} 
HumanA::~HumanA() {}
void HumanA::attack(void) { std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;}