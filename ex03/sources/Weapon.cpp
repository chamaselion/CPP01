/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszikora <bszikora@student.42helbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 15:37:51 by bszikora          #+#    #+#             */
/*   Updated: 2025/03/26 12:01:38 by bszikora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() : type("") {}
Weapon::Weapon(std::string type) : type(type) {}
Weapon::~Weapon() {}

void Weapon::setType(std::string type) { this->type = type; }
const std::string& Weapon::getType() const { return type; }