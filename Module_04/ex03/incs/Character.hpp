/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhovhann <vhovhann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 19:39:37 by vhovhann          #+#    #+#             */
/*   Updated: 2024/02/22 21:10:03 by vhovhann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
private:
	std::string name;
	AMateria *slot[4];
public:
	Character();
	Character(const std::string name);
	Character(const Character &other);
	Character& operator =(const Character &other);
	~Character();
	std::string const & getName() const;
	void equip(AMateria*);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
};

#endif