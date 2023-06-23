/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grenaud- <grenaud-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 18:29:03 by grenaud-          #+#    #+#             */
/*   Updated: 2023/06/23 13:51:11 by grenaud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void): type("Dog")
{
	std::cout << "\033[104mDog [" << this->type << "] created with default constructor.\033[0m" << std::endl;
}

Dog::Dog(std::string const &_type): type(_type)
{
	std::cout << "\033[104mDog [" << this->type << "] created.\033[0m" << std::endl;
}

Dog::~Dog(void)
{
	std::cout << "\033[104mDog [" << this->type << "] destroyed.\033[0m" << std::endl;
}

Dog::Dog(Dog const &rhs)
{
	std::cout << "\033[104mDog [" << this->type << "] copied.\033[0m" << std::endl;
	*this = rhs;
}

Dog	&Dog::operator=(Dog const &rhs)
{
	std::cout << "\033[104mAssignment operator For Dog called.\033[0m" << std::endl;
	this->type = rhs.getType();
	return (*this);
}

std::string	Dog::getType(void) const
{
	return (this->type);
}

void	Dog::setType(std::string const _type)
{
	this->type = _type;
}

void	Dog::makeSound(void) const
{
	std::cout << "Wouaf Wouaf" << std::endl;
}
