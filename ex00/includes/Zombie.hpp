/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszikora <bszikora@student.42helbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 12:24:36 by bszikora          #+#    #+#             */
/*   Updated: 2025/03/25 13:16:15 by bszikora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ZOMBIES_HPP
# define ZOMBIES_HPP

#include <iostream>

class Zombie
{
private:
	std::string name;
	
public:
	Zombie();
	Zombie(std::string name);
	~Zombie();
	void	announce( void );
};

Zombie*	newZombie( std::string name );
void 	randomChump( std::string name );

# endif