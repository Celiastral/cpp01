/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre <eandre@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 14:41:48 by eandre            #+#    #+#             */
/*   Updated: 2024/09/16 17:29:05 by eandre           ###   ########.fr       */
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
		i++;
	}
	return (zombie_horde);
}