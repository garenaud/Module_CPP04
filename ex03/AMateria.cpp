/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grenaud- <grenaud-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 15:43:34 by grenaud-          #+#    #+#             */
/*   Updated: 2023/06/30 16:59:44 by grenaud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void)
{
	std::cout << "🔮 Abstract materia has been created" << std::endl;
}

AMateria::AMateria(std::string const &type): _type(type)
{
	std::cout << "🔮 Abstract materia has been created" << std::endl;
}

AMateria::~AMateria(void)
{
	std::cout << "🔮 Abstract AMateria destroyed." << std::endl;
}

/* AMateria &AMateria::operator=(AMateria const &rhs): _type(rhs._type)
{
	std::cout << "Assignment operator For AMateria called." << std::endl;
	//this->_type = rhs.getType();
	return (*this);
} */

AMateria::AMateria(AMateria const &ref) : _type(ref._type)
{
	std::cout << "🔮 Abstract materia has been constructed from a copy\n";
}

const std::string	&AMateria::getType(void) const
{
	return (this->_type);
}

void AMateria::use(ICharacter& target)
{
	std::cout << "AMateria abstractly used on " << target.getName() << std::endl;
}
