/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhovhann <vhovhann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 20:24:08 by vhovhann          #+#    #+#             */
/*   Updated: 2024/02/08 21:21:19 by vhovhann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

int main()
{
	Zombie *Z1;
	Z1 = zombieHorde(5, "A");
	// for (int i = 0; i < 5; ++i)
		// Z1->announce();
	delete[] Z1;
	return 0;
}