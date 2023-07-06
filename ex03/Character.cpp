/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grenaud- <grenaud-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 17:47:47 by grenaud-          #+#    #+#             */
/*   Updated: 2023/07/06 18:23:26 by grenaud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "ICharacter.hpp"
#include <iostream>
#include <string>

Character::Character(std::string name): _name(name)
{
	std::cout << "\U0001F9D9 Character [" << this->_name << "] created" << std::endl;
	for(int i = 0; i < 4; i++)
	{
		this->_inventory[i] = 0;
		//std::cout << this->_inventory[i] << std::endl;
	}
}

const std::string	&Character::getName(void) const
{
	return (_name);
}

Character	&Character::operator=(Character const &rhs)
{
	//this->_name = rhs.getName();
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
		if (rhs._inventory[i])
			this->_inventory[i] = (rhs._inventory[i])->clone();
	}
	std::cout << "\U0001F9D9 Assignment operator for Character called." << std::endl;
	return (*this);
}

Character::Character(Character const &rhs): _name(rhs.getName() + "_copy")
{
	//this->_name = rhs.getName() + "_copy";
	for(int i = 0; i < 4; i++)
	{
		if (rhs._inventory[i])
			this->_inventory[i] = (rhs._inventory[i])->clone();
	}
	std::cout << "\U0001F9D9 Character [" << this->_name << "] copied." << std::endl;
}

Character::~Character()
{
	for(int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
	}
	std::cout << "\U0001F9D9 Character [" << this->_name << "] destroyed" << std::endl;
}

void	Character::equip(AMateria *m)
{
	int i = 0;

	if (!m)
	{
		std::cout << this->_name << " you need to choose a materia if you expect something..." << std::endl;
		return ;
	}
	while ((this->_inventory)[i] != 0 && i < 4)
		i++;
	if (i >= 4)
	{
		std::cout << this->_name << " can't equip more than 4 Materia";
		return ;
	}
	//std::cout << "\033[102m" << this->_inventory[i] << "\033[0m" << std::endl;
	(this->_inventory)[i] = m;
	std::cout << "\U0001F9D9 " << this->_name << " equipped materia 🔮 " << m->getType() << " in slot " << i << " 📥"<< "\n";
}

void	Character::unequip(int idx)
{
	if (idx < 0 || idx >= 4)
	std::cout << this->_name << " tried to unequip nothing at slot " << idx << " and it did nothing" << std::endl;
	else if (!(this->_inventory)[idx])
		std::cout << this->_name << " has nothing equipped at slot " << idx << " so he can't unequip it\n";
	else
	{
		AMateria *ptr = (this->_inventory)[idx];
		std::cout << "\U0001F9D9 " << this->_name << " unequipped " << ptr->getType() << " at slot "<< idx << " 📤" << std::endl;
		(this->_inventory)[idx] = 0;
	}
}

void	Character::use(int idx, ICharacter &target)
{
	std::string	name = this->getName();

	if (idx < 0 || idx >= 4 || !(this->_inventory)[idx])
	{
		std::cout << "Nothing found to use at index " << idx << std::endl;
		return ;
	}
	//std::cout << name;
	((this->_inventory)[idx])->use(target);
}

AMateria	*Character::getMateriaFromInventory(int idx)
{
	return (this->_inventory)[idx];
}
