/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre <eandre@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 17:15:04 by eandre            #+#    #+#             */
/*   Updated: 2024/09/08 18:14:20 by eandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
	public :
		HumanB(std::string name, Weapon &weapon);
		HumanB(std::string name);
		~HumanB();
		void	attack(void);
	private :
		Weapon		*weapon;
		std::string	name;
};

#endif