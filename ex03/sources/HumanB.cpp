/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszikora <bszikora@student.42helbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 11:19:09 by bszikora          #+#    #+#             */
/*   Updated: 2025/03/26 12:07:08 by bszikora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB() : name(""), weapon(NULL) {}
HumanB::HumanB(std::string nameit) : name(nameit), weapon(NULL) {} 
HumanB::~HumanB() {}

void HumanB::setWeapon(Weapon &weapon) { this->weapon = &weapon; }
void HumanB::attack(void) 
{ 
    if (this->weapon)
        std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl; 
    else
        std::cout << this->name << " has no weapon to attack with\n";
}