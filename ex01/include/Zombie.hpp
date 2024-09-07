/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre <eandre@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 13:20:29 by eandre            #+#    #+#             */
/*   Updated: 2024/09/07 14:52:49 by eandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iomanip>

class Zombie
{
	public :
		Zombie(std::string name);
		Zombie(void);
		~Zombie(void);
		void	announce(void);
		void	set_name(std::string name);
	private :
		std::string	name;
};

Zombie* zombieHorde(int N, std::string name);

#endif