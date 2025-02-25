/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostian <akostian@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 05:33:56 by akostian          #+#    #+#             */
/*   Updated: 2025/02/25 04:25:41 by akostian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
}

Weapon::Weapon(std::string type) :
	type(type)
{
}

Weapon::Weapon(const Weapon& other)
{
	this->type = other.type;
}

Weapon& Weapon::operator=(const Weapon& other)
{
	if (this != &other) {
		this->type = other.type;
	}
	return *this;
}

Weapon::~Weapon()
{
}

std::string	Weapon::getType()
{
	return this->type;
}

void	Weapon::setType(std::string value)
{
	this->type = value;
}
