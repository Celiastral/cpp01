/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre <eandre@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 23:01:00 by eandre            #+#    #+#             */
/*   Updated: 2024/09/08 17:38:26 by eandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iomanip>

class Weapon
{
	public :
		Weapon(std::string type);
		Weapon();
		~Weapon();
		std::string	getType(void);
		void		setType(std::string type);
	private :
		std::string	type;
};

#endif