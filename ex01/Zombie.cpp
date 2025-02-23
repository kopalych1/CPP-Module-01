/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostian <akostian@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 16:26:04 by akostian          #+#    #+#             */
/*   Updated: 2025/02/23 23:54:07 by akostian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) : name(name)
{
}

Zombie::Zombie()
{
}

Zombie::Zombie(const Zombie& other)
{
	*this = other;
}

Zombie& Zombie::operator=(const Zombie& other)
{
	if (this != &other) {
		this->name = other.name;
	}
	return *this;
}

Zombie::~Zombie()
{
	std::cout << name << ": deleted\n";
}

void	Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}

std::string	Zombie::getName()
{
	return this->name;
}

void	Zombie::setName(std::string value)
{
	this->name = value;
}
