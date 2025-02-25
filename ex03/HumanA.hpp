/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostian <akostian@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 05:42:31 by akostian          #+#    #+#             */
/*   Updated: 2025/02/24 19:57:45 by akostian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Violence.hpp"

class Weapon;

class HumanA {
	private:
		std::string	name;
		Weapon		&weapon;

	public:
		HumanA(std::string name, Weapon &weapon);
		HumanA(const HumanA& other);
		HumanA& operator=(const HumanA& other);
		~HumanA();

		void		attack();

		Weapon		&getWeapon();
		void		setWeapon(Weapon &value);
		std::string	getName();
		void		setName(std::string value);
};

#endif // HUMANA_HPP