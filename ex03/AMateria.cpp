/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grenaud- <grenaud-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 15:43:34 by grenaud-          #+#    #+#             */
/*   Updated: 2023/06/29 15:37:27 by grenaud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void): _type("default")
{
	//this->_type = "default";
	std::cout << "AMateria [" << this->_type << "] created with default constructor" << std::endl;
}

AMateria::AMateria(std::string const &type): _type(type)
{
	//this->_type = type;
	std::cout << "AMateria [" << this->_type << "] created" << std::endl;
}

AMateria::~AMateria(void)
{
	std::cout << "Abstract AMateria destroyed." << std::endl;
}

/* AMateria &AMateria::operator=(AMateria const &rhs): _type(rhs._type)
{
	std::cout << "Assignment operator For AMateria called." << std::endl;
	//this->_type = rhs.getType();
	return (*this);
} */

AMateria::AMateria(AMateria const &ref) : _type(ref._type)
{
	std::cout << "Abstract materia has beed constructed from a copy\n";
}

const std::string	&AMateria::getType(void) const
{
	return (this->_type);
}

void AMateria::use(ICharacter& target)
{
	std::cout << "AMateria abstractly used on " << target.getName() << std::endl;
}
