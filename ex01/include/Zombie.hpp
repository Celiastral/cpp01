/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre <eandre@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 13:20:29 by eandre            #+#    #+#             */
/*   Updated: 2024/09/16 17:31:40 by eandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iomanip>

class Zombie
{
	public :
		Zombie(const std::string &name);
		Zombie(void);
		~Zombie();
		void	announce(void);
		void	set_name(const std::string &name);
	private :
		std::string	name;
};

Zombie* zombieHorde(int N, std::string name);

#endif