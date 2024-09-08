/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre <eandre@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 17:14:59 by eandre            #+#    #+#             */
/*   Updated: 2024/09/08 19:03:46 by eandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Weapon.hpp"

Weapon::Weapon(std::string _type) : type(_type)
{}

Weapon::Weapon()
{}

Weapon::~Weapon()
{}

std::string	Weapon::getType(void)
{
	return (type);
}

void	Weapon::setType(std::string _type)
{
	type = _type;
}