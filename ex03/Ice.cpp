/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grenaud- <grenaud-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 15:19:35 by grenaud-          #+#    #+#             */
/*   Updated: 2023/06/29 15:31:39 by grenaud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "ICharacter.hpp"

Ice::Ice(void)
{
	this->_type = "Ice";
	std::cout << "❄️ Ice [" << this->_type << "] created with default constructor" << std::endl;
}

Ice::~Ice(void)
{
	std::cout << "❄️ Ice [" << this->_type << "] destroyed." << std::endl;
}

Ice::Ice(Ice const &rhs)
{
	this->_type = rhs.getType();
	std::cout << "❄️ Ice [" << this->_type << "] copied." << std::endl;
}

Ice	&Ice::operator=(Ice const &rhs)
{
	std::cout << "Assigned from " << rhs.getType() << std::endl;
	return (*this);
}

const std::string	&Ice::getType(void) const
{
	return (this->_type);
}

Ice	*Ice::clone() const
{
	Ice	*cpy = new Ice;
	return (cpy);
}

void	Ice::use(ICharacter &target)
{
	std::string	targetName = target.getName();
	std::cout << "shoots an ice bolt at " << targetName << std::endl;
}
