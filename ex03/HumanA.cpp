/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostian <akostian@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 05:41:48 by akostian          #+#    #+#             */
/*   Updated: 2025/02/24 20:08:17 by akostian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) :
	name(name),
	weapon(weapon)
{
}

HumanA::HumanA(const HumanA& other) :
	name(other.name),
	weapon(other.weapon)
{
}

HumanA& HumanA::operator=(const HumanA& other)
{
	if (this != &other) {
		this->name = other.name;
		this->weapon = other.weapon;
	}
	return *this;
}

HumanA::~HumanA()
{
	// delete &this->weapon;
}


void	HumanA::attack()
{
	std::cout << this->name << " attacks with their " << this->weapon.getType() << '\n';
}


std::string	HumanA::getName()
{
	return this->name;
}

void	HumanA::setName(std::string value)
{
	this->name = value;
}

Weapon	&HumanA::getWeapon()
{
	return this->weapon;
}

void	HumanA::setWeapon(Weapon	&value)
{
	this->weapon = value;
}
