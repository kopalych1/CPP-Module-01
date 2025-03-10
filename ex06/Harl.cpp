/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostian <akostian@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 12:29:39 by akostian          #+#    #+#             */
/*   Updated: 2025/03/10 15:31:33 by akostian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
}

Harl::Harl(const Harl& other)
{
	(void)other;
}

Harl& Harl::operator=(const Harl& other)
{
	if (this != &other) {
		(void)other;
	}
	return *this;
}

Harl::~Harl()
{
}

void	Harl::debug( void )
{
	std::cout << "[" BLK "DEBUG" CRESET "]: " << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n";
}

void	Harl::info( void )
{
	std::cout << "[" CYN "INFO" CRESET "]: " << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
}

void	Harl::warning( void )
{
	std::cout << "[" YEL "WARN" CRESET "]: " << "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month.\n";
}

void	Harl::error( void )
{
	std::cout << "[" RED "ERROR" CRESET "]: " << "This is unacceptable! I want to speak to the manager now.\n";
}

void	Harl::complain( std::string level )
{
	dict_item	funcs[4] = {
		{"DEBUG",	&Harl::debug},
		{"INFO",	&Harl::info},
		{"WARNING",	&Harl::warning},
		{"ERROR",	&Harl::error}
	};

	for (size_t i = 0; i < 4; i++)
	{
		if (funcs[i].key != level)
			continue;
		(this->*funcs[i].func)();
		return;
	}
	std::cout << "[" MAG "NOT IMPORTANT" CRESET "]\n";
}
