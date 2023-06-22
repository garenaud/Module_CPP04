/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grenaud- <grenaud-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 14:14:48 by aperez-b          #+#    #+#             */
/*   Updated: 2023/06/22 12:22:39 by grenaud-         ###   ########.fr       */
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

WrongAnimal::WrongAnimal(WrongAnimal const &copy)
{
	std::cout << "\033[44mWrongAnimal [" << this->type << "] copied.\033[0m" << std::endl;
	*this = copy;
}

WrongAnimal	&WrongAnimal::operator=(WrongAnimal const &copy)
{
	std::cout << "\033[44mAssignment operator For WrongAnimal called.\033[0m" << std::endl;
	this->type = copy.getType();
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
