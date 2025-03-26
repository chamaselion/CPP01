/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszikora <bszikora@student.42helbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 15:26:14 by bszikora          #+#    #+#             */
/*   Updated: 2025/03/26 11:14:42 by bszikora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon
{
	private:
	std::string type;
		
	public:
		Weapon();
		Weapon(std::string type);
		~Weapon();

	std::string			setType(std::string type);
	const std::string&	getType() const;
};

# endif