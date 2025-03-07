/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostian <akostian@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 12:29:43 by akostian          #+#    #+#             */
/*   Updated: 2025/03/07 20:27:15 by akostian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char const *argv[])
{
	Harl	harl;

	harl.complain("123");
	harl.complain("ERROR");
	harl.complain("INFO");
	harl.complain("123");
	harl.complain("DEBUG");
	harl.complain("WARN");
	harl.complain("WARN");
	harl.complain("INFO");
	harl.complain("INFO");
	harl.complain("HELL0");

	(void)argc;
	(void)argv;
	return (0);
}
