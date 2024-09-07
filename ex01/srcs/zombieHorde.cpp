/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre <eandre@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 14:41:48 by eandre            #+#    #+#             */
/*   Updated: 2024/09/07 15:00:00 by eandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	Zombie	*zombie_horde = new Zombie[N];
	int		i;

	i = 0;
	while (i < N)
	{
		zombie_horde[i].set_name(name);
		zombie_horde[i].announce();
		i++;
	}
	return (zombie_horde);
}