/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhovhann <vhovhann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 21:46:48 by vhovhann          #+#    #+#             */
/*   Updated: 2024/02/09 15:47:24 by vhovhann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
// #include <string>

class Weapon
{
private:
	std::string type;

public:
	Weapon(std::string type);
	std::string getType();
	void		setType(std::string type);
};

#endif