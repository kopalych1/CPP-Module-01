/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostian <akostian@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 05:34:15 by akostian          #+#    #+#             */
/*   Updated: 2025/02/24 18:51:32 by akostian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include "Violence.hpp"

class Weapon {
	private:
		std::string	type;
	
	public:
		Weapon();
		Weapon(std::string type);
		Weapon(const Weapon& other);
		Weapon& operator=(const Weapon& other);
		~Weapon();

		std::string	getType();
		void		setType(std::string value);
};

#endif // WEAPON_HPP