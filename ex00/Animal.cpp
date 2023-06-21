/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grenaud- <grenaud-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 14:14:48 by aperez-b          #+#    #+#             */
/*   Updated: 2023/06/21 15:26:17 by grenaud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void): type("default")
{
	std::cout << "Animal " << this->type << " created with default constructor." << std::endl;
}

Animal::Animal(std::string const &_type): type(_type)
{
	std::cout << "Animal " << this->type << " created." << std::endl;
}

Animal::~Animal(void)
{
	std::cout << "Animal " << this->type << " destroyed." << std::endl;
}

Animal::Animal(Animal const &copy)
{
	std::cout << "Animal " << this->type << " copied." << std::endl;
	*this = copy;
}

Animal	&Animal::operator=(Animal const &copy)
{
	std::cout << "Assignment operator For Animal called." << std::endl;
	this->type = copy.getType();
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
	std::cout << "Hello World" << std::endl;
}
