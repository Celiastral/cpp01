/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre <eandre@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 17:14:59 by eandre            #+#    #+#             */
/*   Updated: 2024/09/08 18:28:00 by eandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Weapon.hpp"

Weapon::Weapon(std::string type) : type(type)
{}

Weapon::Weapon()
{}

Weapon::~Weapon()
{}

std::string	Weapon::getType(void)
{
	return (Weapon::type);
}

void	Weapon::setType(std::string type)
{
	Weapon::type = type;
}