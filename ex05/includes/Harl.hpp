/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszikora <bszikora@student.42helbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 13:53:22 by bszikora          #+#    #+#             */
/*   Updated: 2025/03/26 13:56:53 by bszikora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef HARL_HPP
# define HARL_HPP

#include <iostream>

class Harl
{
private:
	void debug( void );
	void info ( void );
	void warning(void);
	void error( void );

public:
	Harl();
	~Harl();
	void complain( std::string level );
};

# endif