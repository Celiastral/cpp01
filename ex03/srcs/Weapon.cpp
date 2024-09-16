/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre <eandre@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 17:14:59 by eandre            #+#    #+#             */
/*   Updated: 2024/09/16 17:41:23 by eandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Weapon.hpp"

Weapon::Weapon(const std::string &_type) : type(_type)
{}

Weapon::Weapon()
{}

Weapon::~Weapon()
{}

std::string	const	&Weapon::getType(void) const
{
	return (type);
}

void	Weapon::setType(const std::string &_type)
{
	type = _type;
}