/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre <eandre@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 17:14:59 by eandre            #+#    #+#             */
/*   Updated: 2024/09/15 17:04:45 by eandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Weapon.hpp"

Weapon::Weapon(std::string _type) : type(_type)
{}

Weapon::Weapon()
{}

Weapon::~Weapon()
{}

std::string	const	&Weapon::getType(void) const
{
	return (type);
}

void	Weapon::setType(std::string _type)
{
	type = _type;
}