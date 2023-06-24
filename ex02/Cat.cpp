/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grenaud- <grenaud-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 18:29:03 by grenaud-          #+#    #+#             */
/*   Updated: 2023/06/23 15:04:38 by grenaud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	this->type = "Cat";
	this->brain = new Brain;
	std::cout << "\033[103mCat [" << this->type << "] created with default constructor whith his new Brain.\033[0m" << std::endl;
}

Cat::Cat(std::string const &_type)
{
	this->type = _type;
	this->brain = new Brain;
	std::cout << "\033[103mCat [" << this->type << "] created with his new Brain.\033[0m" << std::endl;
}

Cat::~Cat(void)
{
	if (this->brain)
		delete brain;
	std::cout << "\033[103mCat [" << this->type << "] destroyed.\033[0m" << std::endl;
}

Cat::Cat(Cat const &rhs)
{
	this->brain = new Brain;
	std::cout << "\033[103mCat [" << this->type << "] copied.\033[0m" << std::endl;
	*this = rhs;
}

Cat	&Cat::operator=(Cat const &rhs)
{
	std::cout << "\033[103mAssignment operator For Cat called.\033[0m" << std::endl;
	this->type = rhs.getType();
	if (this->brain)
		delete brain;
	this->brain = new Brain(*(rhs.getBrain()));
	return (*this);
}

std::string	Cat::getType(void) const
{
	return (this->type);
}

void	Cat::setType(std::string const _type)
{
	this->type = _type;
}

void	Cat::makeSound(void) const
{
	std::cout << "Meow Meow" << std::endl;
}

Brain	*Cat::getBrain(void) const
{
	return (this->brain);
}
