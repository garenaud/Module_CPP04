/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grenaud- <grenaud-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 15:43:34 by grenaud-          #+#    #+#             */
/*   Updated: 2023/06/28 13:16:20 by grenaud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void)
{
	this->_type = "default";
	std::cout << "AMateria [" << this->_type << "] created with default constructor" << std::endl;
}

AMateria::AMateria(std::string const &type)
{
	this->_type = type;
	std::cout << "AMateria [" << this->_type << "] created" << std::endl;
}

AMateria::~AMateria(void)
{
	std::cout << "AMateria [" << this->_type << "] destroyed." << std::endl;
}

AMateria &AMateria::operator=(AMateria const &rhs)
{
	std::cout << "Assignment operator For AMateria called." << std::endl;
	this->_type = rhs.getType();
	return (*this);
}

const std::string	&AMateria::getType(void) const
{
	return (this->_type);
}

