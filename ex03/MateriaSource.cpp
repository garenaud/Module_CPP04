/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grenaud- <grenaud-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 14:26:55 by grenaud-          #+#    #+#             */
/*   Updated: 2023/07/06 13:05:40 by grenaud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "AMateria.hpp"
#include "IMateriaSource.hpp"

MateriaSource::MateriaSource()
{
	std::cout << "🧞 MateriaSource was created\n";
	for(int i = 0; i < 4; i++)
	{
		this->_inventory[i] = 0;
	}
}

MateriaSource::MateriaSource(MateriaSource const &rhs)
{
	for (int i = 0; i < 4; i++)
	{
		if (rhs._inventory[i])
			this->_inventory[i] = (rhs._inventory[i])->clone();
	}
	std::cout << "🧞 MateriaSource copied" << std::endl;
}

MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
	}
	std::cout << "🧞 MateriaSource destroyed." << std::endl;
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
	{
		//std::cout << (this->_inventory)[i] << std::endl;
		i++;
	}
	if (i >= 4)
	{
		std::cout << "Can't learn more than 4 Materia";
		return ;
	}
	(this->_inventory)[i] = m;
	std::cout << "Materia " << m->getType() << " learned\n";
}

AMateria	*MateriaSource::createMateria(std::string const &type)
{
	int i = 0;

	//std::cout << ((this->_inventory)[0])->getType() << std::endl << std::endl;
	while ((this->_inventory)[i] && ((this->_inventory)[i])->getType() != type && i < 4)
	{
		//std::cout << "\033[102m" << this->_inventory[i] << "\033[0m" << std::endl << std::endl;
		i++;
	}
	if (i >= 4 || !(this->_inventory)[i])
	{
		std::cout << type << " materia does not exit\n";
		return (NULL);
	}
	std::cout << "🧞 Materia " << type << " created\n";
	return (((this->_inventory)[i])->clone());
}
