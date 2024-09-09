/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre <eandre@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 18:49:50 by eandre            #+#    #+#             */
/*   Updated: 2024/09/09 20:43:54 by eandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Harl.hpp"
#include <iostream>

void	Harl::complain(std::string level)
{
	int	i;
	std::string	level_str[4];
	void (Harl::*harl_funcs[4])();
	harl_funcs[0] = &Harl::debug;
	level_str[0] = "DEBUG";
	harl_funcs[1] = &Harl::info;
	level_str[1] = "INFO";
	harl_funcs[2] = &Harl::warning;
	level_str[2] = "WARNING";
	harl_funcs[3] = &Harl::error;
	level_str[3] = "ERROR";
	i = 0;
	while (i < 4)
	{
		if (level_str[i] == level)
			break ;
		i++;
	}
	switch (i)
	{
		case DEBUG:
			(this->*harl_funcs[i])();
			break;
		case INFO:
			(this->*harl_funcs[i])();
			break;
		case WARNING:
			(this->*harl_funcs[i])();
			break;
		case ERROR:
			(this->*harl_funcs[i])();
			break;
		default :
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}
}

void	Harl::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger.\nI really do!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money.\nYou didn’t put enough bacon in my burger!\nIf you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free.\nI’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}