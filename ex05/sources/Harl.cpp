/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszikora <bszikora@student.42helbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 13:54:37 by bszikora          #+#    #+#             */
/*   Updated: 2025/03/26 14:22:02 by bszikora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {}

Harl::~Harl() {}

void Harl::debug( void ) {std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\n";}
void Harl::info ( void ) {std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldnt be asking for more!\n";}
void Harl::warning(void) {std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years, whereas you started working here just last month.\n";}
void Harl::error( void ) {std::cout << "This is unacceptable! I want to speak to the manager now.\n";}
void Harl::complain( std::string level )
{
    void (Harl::*funcs[])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    for (int i = 0; i < 4; i++)
    {
        if (levels[i] == level)
        {
            (this->*funcs[i])();
            return;
        }
    }
    std::cout << "Invalid complaint level\n";
}