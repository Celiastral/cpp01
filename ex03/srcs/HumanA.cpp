/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre <eandre@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 17:14:53 by eandre            #+#    #+#             */
/*   Updated: 2024/09/08 18:23:19 by eandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon &weapon) : weapon(weapon), name(name)
{
	std::cout << "Constructor called for HumanA " << HumanA::name << " with " << HumanA::weapon.getType() << " as his weapon" << std::endl;
}

HumanA::~HumanA()
{
	std::cout << "Destructor called for HumanA " << HumanA::name << " with " << HumanA::weapon.getType() << " as his weapon" << std::endl;
}

void	HumanA::attack(void)
{
 	std::cout << HumanA::name << " attacks with their " << HumanA::weapon.getType() << std::endl;
}