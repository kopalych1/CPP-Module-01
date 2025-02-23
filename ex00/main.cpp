/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostian <akostian@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 18:05:37 by akostian          #+#    #+#             */
/*   Updated: 2025/02/23 22:48:30 by akostian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie zombie("Zombie");
	zombie.announce();

	randomChump("StackZombie");
	
	Zombie *zomb1 = newZombie("HeapZombie");
	zomb1->announce();
	delete zomb1;

	return (0);
}
