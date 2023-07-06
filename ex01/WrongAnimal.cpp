/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grenaud- <grenaud-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 20:36:26 by grenaud-          #+#    #+#             */
/*   Updated: 2023/07/06 20:36:29 by grenaud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void): type("default")
{
	std::cout << "\033[44mWrongAnimal [" << this->type << "] created with default constructor.\033[0m" << std::endl;
}

WrongAnimal::WrongAnimal(std::string const &_type): type(_type)
{
	std::cout << "\033[44mWrongAnimal [" << this->type << "] created.\033[0m" << std::endl;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "\033[44mWrongAnimal [" << this->type << "] destroyed.\033[0m" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &rhs)
{
	std::cout << "\033[44mWrongAnimal [" << this->type << "] copied.\033[0m" << std::endl;
	*this = rhs;
}

WrongAnimal	&WrongAnimal::operator=(WrongAnimal const &rhs)
{
	std::cout << "\033[44mAssignment operator For WrongAnimal called.\033[0m" << std::endl;
	this->type = rhs.getType();
	return (*this);
}

std::string	WrongAnimal::getType(void) const
{
	return (this->type);
}

void	WrongAnimal::setType(std::string const _type)
{
	this->type = _type;
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "Default WrongAnimal Sound" << std::endl;
}
