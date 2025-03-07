/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostian <akostian@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 05:08:53 by akostian          #+#    #+#             */
/*   Updated: 2025/03/07 11:52:34 by akostian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

#ifndef DO_PRINT
# define DO_PRINT 0
#endif

// Regular Bold Red text
# define BRED "\033[1;31m"
//Regular Background Red text
# define REDB "\033[41m"
//Color reset
# define CRESET "\033[0m"


bool	is_found(std::string &haystack, const std::string &needle)
{
	return (haystack.find(needle) != std::string::npos);
}

void	replace_in_file(std::ifstream &infile, const std::string needle, const std::string replace_with, std::ofstream &outfile)
{
	std::string	line, first_part, second_part;

	while (std::getline(infile, line))
	{
		if (!is_found(line, needle))
		{
			if (DO_PRINT)
				std::cout << line << "\n";

			outfile << line;
			if (!infile.eof())
				outfile << '\n';
		}
		while (is_found(line, needle))
		{
			first_part = line.substr(0, line.find(needle));
			second_part = line.substr(line.find(needle) + needle.length(), line.length() + 1);

			if (DO_PRINT)
			{
				if (replace_with != "")
					std::cout << first_part << BRED + replace_with + CRESET;
				else
					std::cout << first_part << REDB + std::string(needle.length(), ' ') + CRESET;
			}

			outfile << first_part << replace_with;
			if (!is_found(second_part, needle))
			{
				if (DO_PRINT)
					std::cout << second_part << "\n";

				outfile << second_part;
				if (!infile.eof())
					outfile << '\n';
			}
			line = second_part;
		}
	}
}

int	main(int argc, char const **argv)
{
	if (argc != 4)
	{
		std::cerr << "Usage: ./ft_sed <file> <to_replace> <replace_with>\n";
		return (1);
	}

	const std::string		infile_name(argv[1]);
	const std::string		needle(argv[2]);
	const std::string		replace_with(argv[3]);

	if (needle == "")
		return (std::cerr << "Error: <to_replace> must not be empty\n", 1);

	std::ifstream	infile(infile_name.c_str());
	std::ofstream	outfile((infile_name + ".replace").c_str(), std::ios::trunc);

	if (!infile.is_open())
		return (std::cerr << "Error: infile is not open\n", 1);
	if (!outfile.is_open())
		return (std::cerr << "Error: outfile is not open\n", 1);

	replace_in_file(infile, needle, replace_with, outfile);

	infile.close();
	outfile.close();

	return (0);
}
