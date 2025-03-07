/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostian <akostian@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 12:33:45 by akostian          #+#    #+#             */
/*   Updated: 2025/03/07 20:33:25 by akostian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <string>
#include <iostream>

// Regular Black text
# define BLK "\033[0;30m"
// Regular Red text
# define RED "\033[0;31m"
// Regular Yellow text
# define YEL "\033[0;33m"
// Regular Cyan text
# define CYN "\033[0;36m"
// Regular Magenta text
# define MAG "\033[0;35m"

// Regular Bold Black text
# define BBLK "\033[1;30m"
//Color reset
# define CRESET "\033[0m"


class Harl {
	private:
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );

	public:
		Harl();
		Harl(const Harl& other);
		Harl& operator=(const Harl& other);
		~Harl();

		void complain( std::string level );
};

struct dict_item
{
	std::string	key;
	void		(Harl::*func)(void);
};

#endif