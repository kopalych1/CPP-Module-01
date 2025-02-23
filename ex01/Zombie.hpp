/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostian <akostian@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 16:22:16 by akostian          #+#    #+#             */
/*   Updated: 2025/02/23 23:55:28 by akostian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>
# include <string>

class Zombie {
	private:
		std::string name;

	public:
		Zombie();
		Zombie(std::string name);
		Zombie(const Zombie& other);
		Zombie& operator=(const Zombie& other);
		~Zombie();
		
		std::string	getName();
		void		setName(std::string value);

		void	announce(void);
};

Zombie*	zombieHorde( int N, std::string name );

#endif // ZOMBIE_H