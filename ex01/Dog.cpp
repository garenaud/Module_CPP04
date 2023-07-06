/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grenaud- <grenaud-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 18:29:03 by grenaud-          #+#    #+#             */
/*   Updated: 2023/07/06 18:13:26 by grenaud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	this->type = "Dog";
	this->brain = new Brain;
	std::cout << "\033[104mDog [" << this->type << "] created with default constructor with his new Brain.\033[0m" << std::endl;
}

Dog::Dog(std::string const &_type)
{
	this->type = _type;
	this->brain = new Brain;
	std::cout << "\033[104mDog [" << this->type << "] created with his new Brain.\033[0m" << std::endl;
}

Dog::~Dog(void)
{
	if (this->brain)
		delete brain;
	std::cout << "\033[104mDog [" << this->type << "] destroyed.\033[0m" << std::endl;
}

Dog::Dog(Dog const &rhs)
{
	this->brain = new Brain;
	std::cout << "\033[104mDog [" << this->type << "] copied.\033[0m" << std::endl;
	*this = rhs;
}

Dog	&Dog::operator=(Dog const &rhs)
{
	std::cout << "\033[104mAssignment operator For Dog called.\033[0m" << std::endl;
	if (this->brain)
		delete brain;
	this->brain = new Brain(*(rhs.getBrain()));
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

Brain	*Dog::getBrain(void) const
{
	return (this->brain);
}

void Dog::compareTo(Dog const & other_dog) const
{
	std::cout << std::endl;
	std::cout << "Now comparing two dogs\n";
	std::cout << "My brain's heap address: " << static_cast<void*>(this->brain) << std::endl;
	std::cout << "Other's heap address: " << static_cast<void*>(other_dog.getBrain()) << std::endl;
	std::cout << std::endl;
	std::cout << "My brain's ideas \t\t | \t\t\t Other brain's ideas\n";
	for (int i = 0; i < 100; i++)
		std::cout << "-";
	std::cout << std::endl;
	for (int i = 0; i < 100; i++)
		std::cout << ((this->brain)->getIdeas())[i] << "\t\t\t | \t\t\t" << ((other_dog.getBrain())->getIdeas())[i] << std::endl;
	std::cout << std::endl;
}
