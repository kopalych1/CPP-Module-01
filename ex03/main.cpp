/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostian <akostian@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 05:45:31 by akostian          #+#    #+#             */
/*   Updated: 2025/02/25 04:25:45 by akostian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Violence.hpp"

int main()
{
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);

		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");

		jim.setWeapon(&club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
	{
		Weapon	*club = new Weapon("heap club");
		HumanA	jim("Jim", *club);
		HumanB	bob("Bob");
		
		jim.attack();
		bob.setWeapon(club);
		bob.attack();
		club->setType("some other type of club");
		jim.attack();

		Weapon	*spear = new Weapon("Heap Spear");

		jim.setWeapon(*spear);
		jim.attack();

		delete	club;
		delete	spear;
	}
	return 0;
}
