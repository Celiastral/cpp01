/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre <eandre@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 17:14:55 by eandre            #+#    #+#             */
/*   Updated: 2024/09/08 19:29:54 by eandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name, Weapon &_weapon) : weapon(&_weapon), name(name)
{
	std::cout << "Constructor called for HumanB " << name << " with " << weapon->getType() << " as his weapon" << std::endl;
}

HumanB::HumanB(std::string _name) : weapon(NULL), name(_name)
{
	std::cout << "Constructor called for HumanB " << name << " with no weapon" << std::endl;
}

HumanB::~HumanB()
{
	if (weapon)
		std::cout << "Destructor called for HumanB " << name << " with " << weapon->getType() << " as his weapon" << std::endl;
	else
		std::cout << "Destructor called for HumanB " << name << std::endl;
}

void	HumanB::setWeapon(Weapon &_weapon)
{
	weapon = &_weapon;
}

void	HumanB::attack(void)
{
	if (weapon)
 		std::cout << name << " attacks with their " << weapon->getType() << std::endl;
	else
		std::cout << name << " has no weapon" << std::endl;
}