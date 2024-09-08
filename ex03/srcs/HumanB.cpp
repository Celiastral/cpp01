/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre <eandre@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 17:14:55 by eandre            #+#    #+#             */
/*   Updated: 2024/09/08 18:36:35 by eandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name, Weapon &weapon) : weapon(&weapon), name(name)
{
	std::cout << "Constructor called for HumanB " << HumanB::name << " with " << HumanB::weapon->getType() << " as his weapon" << std::endl;
}

HumanB::HumanB(std::string name) : name(name)
{
	std::cout << "Constructor called for HumanB " << HumanB::name << " with no weapon" << std::endl;
}

HumanB::~HumanB()
{
	if (weapon)
		std::cout << "Destructor called for HumanB " << name << " with " << weapon->getType() << " as his weapon" << std::endl;
	else
		std::cout << "Destructor called for HumanB " << name << std::endl;
}

void	HumanB::attack(void)
{
	if (weapon)
 		std::cout << name << " attacks with their " << weapon->getType() << std::endl;
	else
		std::cout << name << " has no weapon" << std::endl;
}