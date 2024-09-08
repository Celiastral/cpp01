/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre <eandre@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 21:28:02 by eandre            #+#    #+#             */
/*   Updated: 2024/09/08 21:58:08 by eandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// REMINDER << std::string::replace >> FORBIDDEN

#include <iomanip>
#include <iostream>
#include <fstream>

int	main(int argc, char **argv)
{
	char		*file_name;
	std::string	s1;
	std::string	s2;
	if (argc != 4)
	{
		std::cerr << "\033[0;31mThree paramaters are needed !\033[0m" << std::endl;
		return (1);
	}
	file_name = argv[1];
	s1 = argv[2];
	s2 = argv[3];
	if (file_name[0] == '\0' || s1.empty() || s2.empty())
	{
		std::cerr << "\033[0;31mNull parameters are not accepted !\033[0m" << std::endl;
		return (1);
	}
	std::ifstream file(file_name);
	if (file.is_open())
	{
		
	}
	else
		return (1);
}