/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre <eandre@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 13:20:29 by eandre            #+#    #+#             */
/*   Updated: 2024/09/07 15:00:32 by eandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iomanip>

class Zombie
{
	public :
		Zombie(std::string name);
		~Zombie(void);
		void	announce(void);
	private :
		std::string	name;
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

#endif