/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre <eandre@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 13:51:23 by eandre            #+#    #+#             */
/*   Updated: 2024/09/08 17:39:33 by eandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"
#include <iostream>

Zombie::Zombie(void)
{}

void	Zombie::set_name(std::string name)
{
	Zombie::name = name;
}

Zombie::Zombie (std::string name)
{
	Zombie::name = name;
}

Zombie::~Zombie(void)
{
	std::cout << "Destructor called on: " << Zombie::name << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << Zombie::name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
