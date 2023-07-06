/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grenaud- <grenaud-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 13:09:10 by grenaud-          #+#    #+#             */
/*   Updated: 2023/06/30 16:57:18 by grenaud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void): _type("cure")
{
	std::cout << "💊 Cure [" << this->_type << "] created with default constructor" << std::endl;
}

Cure::~Cure(void)
{
	std::cout << "💊 Cure [" << this->_type << "] destroyed." << std::endl;
}

Cure::Cure(Cure const &rhs)
{
	this->_type = rhs.getType();
	std::cout << "💊 Cure [" << this->_type << "] copied." << std::endl;
}

Cure	&Cure::operator=(Cure const &rhs)
{
	std::cout << "💊 Assigned from " << rhs.getType() << std::endl;
	return (*this);
}

const std::string	&Cure::getType(void) const
{
	return (this->_type);
}

Cure	*Cure::clone() const
{
	Cure	*cpy = new Cure;
	return (cpy);
}

void	Cure::use(ICharacter &target)
{
	std::string	targetName = target.getName();
	std::cout << " heals " << targetName << "\'s wounds" << std::endl;
}
