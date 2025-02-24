/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostian <akostian@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 05:13:31 by akostian          #+#    #+#             */
/*   Updated: 2025/02/24 05:29:09 by akostian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void)
{
	std::string		str = "HI THIS IS BRAIN";
	std::string*	stringPTR = &str;
	std::string&	stringREF = str;

	std::cout << &str		<< '\n';
	std::cout << stringPTR	<< '\n';
	std::cout << &stringREF	<< '\n';

	std::cout << '\n';

	std::cout << str		<< '\n';
	std::cout << *stringPTR	<< '\n';
	std::cout << stringREF	<< '\n';
	return 0;
}
