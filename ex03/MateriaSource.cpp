/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grenaud- <grenaud-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 14:26:55 by grenaud-          #+#    #+#             */
/*   Updated: 2023/06/28 15:03:30 by grenaud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	std::cout << "MateriaSource is created" << std::endl;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = 0;
}

MateriaSource::MateriaSource(MateriaSource const &rhs)
{
	for (int i = 0; i < 4; i++)
	{
		if (rhs._inventory[i])
			this->_inventory[i] = (rhs._inventory[i])->clone();
	}
	std::cout << "MateriaSource copied" << std::endl;
}

MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
	}
	std::cout << "MateriaSource destroyed." << std::endl;
}

MateriaSource	&MateriaSource::operator=(MateriaSource const &rhs)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
		if (rhs._inventory[i])
			this->_inventory[i] = (rhs._inventory[i])->clone();
	}
	return (*this);
}

void	MateriaSource::learnMateria(AMateria *m)
{
	int i = 0;
	while ((this->_inventory)[i] != 0 && i < 4)
		i++;
	if (i >= 4)
	{
		std::cout << "you can't have more than 4 MateriaSource" << std::endl;
		return ;
	}
	(this->_inventory)[i] = m;
	std::cout << "MateriaSource " << m->getType() << " learned." << std::endl;
}

AMateria	*MateriaSource::createMateria(std::string const &type)
{
	int i = 0;

	while ((this->_inventory)[i] && ((this->_inventory)[i])->getType() != type && i < 4)
		i++;
	if (i >= 4 || !(this->_inventory)[i])
	{
		std::cout << type << " materia does not exit\n";
		return (NULL);
	}
	std::cout << "Materia " << type << " created\n";
	return (((this->_inventory)[i])->clone());
}
