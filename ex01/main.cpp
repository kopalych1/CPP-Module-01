/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostian <akostian@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 23:36:13 by akostian          #+#    #+#             */
/*   Updated: 2025/02/24 00:11:25 by akostian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie*	horde = zombieHorde(5, "HordeZombie");

	for (int i = 0; i < 5; i++)
		horde[i].announce();
	delete[] horde;

	horde = zombieHorde(3, "HordeZombie2");
	for (int i = 0; i < 3; i++)
		horde[i].announce();
	delete[] horde;

	return (0);
}
