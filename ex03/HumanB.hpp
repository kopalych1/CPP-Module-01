/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostian <akostian@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 05:42:31 by akostian          #+#    #+#             */
/*   Updated: 2025/02/25 04:25:52 by akostian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Violence.hpp"

class Weapon;

class HumanB {
	private:
		std::string	name;
		Weapon*		weapon;
	
	public:
		HumanB(std::string name);
		HumanB(const HumanB& other);
		HumanB& operator=(const HumanB& other);
		~HumanB();

		void		attack();

		Weapon		*getWeapon();
		void		setWeapon(Weapon* value);
		std::string	getName();
		void		setName(std::string value);
};

#endif // HUMANB_HPP