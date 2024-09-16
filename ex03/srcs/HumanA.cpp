/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre <eandre@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 17:14:53 by eandre            #+#    #+#             */
/*   Updated: 2024/09/16 17:44:02 by eandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/HumanA.hpp"
#include <iostream>

HumanA::HumanA(const std::string &_name, Weapon &_weapon) : weapon(_weapon), name(_name)
{
	std::cout << "Constructor called for HumanA " << name << " with " << weapon.getType() << " as his weapon" << std::endl;
}

HumanA::~HumanA()
{
	std::cout << "Destructor called for HumanA " << name << " with " << weapon.getType() << " as his weapon" << std::endl;
}

void	HumanA::attack(void)
{
 	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}