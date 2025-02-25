/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostian <akostian@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 05:41:48 by akostian          #+#    #+#             */
/*   Updated: 2025/02/24 20:08:19 by akostian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
	this->weapon = NULL;
}

HumanB::HumanB(const HumanB& other) :
	name(other.name),
	weapon(other.weapon)
{
}

HumanB& HumanB::operator=(const HumanB& other)
{
	if (this != &other) {
		this->name = other.name;
		this->weapon = other.weapon;
	}
	return *this;
}

HumanB::~HumanB()
{
	// delete this->weapon;
}


void	HumanB::attack()
{
	std::cout << this->name << " attacks with their " << this->weapon->getType() << '\n';
}


std::string	HumanB::getName()
{
	return this->name;
}

void	HumanB::setName(std::string value)
{
	this->name = value;
}

Weapon	*HumanB::getWeapon()
{
	return this->weapon;
}

void	HumanB::setWeapon(Weapon	*value)
{
	this->weapon = value;
}
