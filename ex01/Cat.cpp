/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grenaud- <grenaud-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 18:29:03 by grenaud-          #+#    #+#             */
/*   Updated: 2023/07/06 18:14:37 by grenaud-         ###   ########.fr       */
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

void Cat::compareTo(Cat const & other_cat) const
{
	std::cout << std::endl;
	std::cout << "Now comparing two cats\n";
	std::cout << "My brain's heap address: " << static_cast<void*>(this->brain) << std::endl;
	std::cout << "Other's heap address: " << static_cast<void*>(other_cat.getBrain()) << std::endl;
	std::cout << std::endl;
	std::cout << "My brain's ideas \t\t | \t\t\t Other brain's ideas\n";
	for (int i = 0; i < 100; i++)
		std::cout << "-";
	std::cout << std::endl;
	for (int i = 0; i < 100; i++)
		std::cout << ((this->brain)->getIdeas())[i] << "\t\t\t | \t\t\t" << ((other_cat.getBrain())->getIdeas())[i] << std::endl;
	std::cout << std::endl;
}
