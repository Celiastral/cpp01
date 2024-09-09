/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre <eandre@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 21:28:02 by eandre            #+#    #+#             */
/*   Updated: 2024/09/09 17:20:49 by eandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include <iostream>
#include <fstream>

int	main(int argc, char **argv)
{
	std::string	s1;
	std::string	s2;
	std::string	outfile_name;

	if (argc != 4)
		return (std::cerr << "\033[0;31mThree paramaters are needed !\033[0m" << std::endl, 1);
	s1 = argv[2];
	s2 = argv[3];
	if (argv[1][0] == '\0' || s1.empty() || s2.empty())
		return (std::cerr << "\033[0;31mNull parameters are not accepted !\033[0m" << std::endl, 1);
	std::ifstream	infile(argv[1]);
	if (!infile)
		return (std::cerr << "\033[0;31mFailed opening infile\033[0m" << std::endl, 1);
	outfile_name = argv[1];
	outfile_name.append(".replace");
	std::ofstream	outfile(outfile_name.c_str());
	if (!outfile)
		return (std::cerr << "\033[0;31mFailed opening outfile\033[0m" << std::endl, 1);
	if (infile.is_open() && outfile.is_open())
	{
		std::string	line;
		while(std::getline(infile, line))
		{
			size_t cur_pos = 0;
			size_t string_replace_pos = line.find(s1, cur_pos);
			while(string_replace_pos != std::string::npos)
			{
				line.erase(string_replace_pos, s1.length());
				line.insert(string_replace_pos, s2);
				cur_pos = string_replace_pos + s1.length();
				string_replace_pos = line.find(s1, cur_pos);
			}
			outfile << line << std ::endl;
		}
	}
	else
		return (std::cerr << "\033[0;31mFailed opening file\033[0m" << std::endl, 1);
}
