/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grenaud- <grenaud-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 20:37:07 by grenaud-          #+#    #+#             */
/*   Updated: 2023/07/06 20:37:09 by grenaud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void): type("default")
{
	std::cout << "\033[102mAnimal [" << this->type << "] created with default constructor.\033[0m" << std::endl;
}

Animal::Animal(std::string const &_type): type(_type)
{
	std::cout << "\033[102mAnimal [" << this->type << "] created.\033[0m" << std::endl;
}

Animal::~Animal(void)
{
	std::cout << "\033[102mAnimal [" << this->type << "] destroyed.\033[0m" << std::endl;
}

Animal::Animal(Animal const &rhs)
{
	std::cout << "\033[102mAnimal [" << this->type << "] copied.\033[0m" << std::endl;
	*this = rhs;
}

Animal	&Animal::operator=(Animal const &rhs)
{
	std::cout << "\033[102mAssignment operator For Animal called.\033[0m" << std::endl;
	this->type = rhs.getType();
	return (*this);
}

std::string	Animal::getType(void) const
{
	return (this->type);
}

void	Animal::setType(std::string const _type)
{
	this->type = _type;
}

void	Animal::makeSound(void) const
{
	std::cout << "Default Animal Sound" << std::endl;
}
