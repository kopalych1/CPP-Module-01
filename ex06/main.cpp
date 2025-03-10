/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostian <akostian@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 20:38:37 by akostian          #+#    #+#             */
/*   Updated: 2025/03/10 15:39:02 by akostian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	get_error_lvl(std::string level)
{
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (size_t i = 0; i < 4; i++)
	{
		if (levels[i] != level)
			continue;
		return (i);
	}
	return (-1);
}

int main(int argc, char const *argv[])
{
	Harl	harl;

	if (argc != 2)
		return (std::cerr << "Usage: ./harlFilter <level>\n", 1);
	switch (get_error_lvl(argv[1])) {
		case 0:
			std::cout << "[ DEBUG ]" << std::endl;
			harl.complain("DEBUG");
			/* fall through */
		case 1:
			std::cout << "[ INFO ]" << std::endl;
			harl.complain("INFO");
			/* fall through */
		case 2:
			std::cout << "[ WARNING ]" << std::endl;
			harl.complain("WARNING");
			/* fall through */
		case 3:
			std::cout << "[ ERROR ]" << std::endl;
			harl.complain("ERROR");
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;

	}
	return 0;
}
