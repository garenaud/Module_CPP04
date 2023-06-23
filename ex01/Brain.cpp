/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grenaud- <grenaud-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 14:14:48 by aperez-b          #+#    #+#             */
/*   Updated: 2023/06/22 12:22:39 by grenaud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void): type("default")
{
	std::cout << "\033[102mBrain [" << this->type << "] created with default constructor.\033[0m" << std::endl;
}

Brain::Brain(std::string const &_type): type(_type)
{
	std::cout << "\033[102mBrain [" << this->type << "] created.\033[0m" << std::endl;
}

Brain::~Brain(void)
{
	std::cout << "\033[102mBrain [" << this->type << "] destroyed.\033[0m" << std::endl;
}

Brain::Brain(Brain const &rhs)
{
	std::cout << "\033[102mBrain [" << this->type << "] copied.\033[0m" << std::endl;
	*this = rhs;
}

Brain	&Brain::operator=(Brain const &rhs)
{
	std::cout << "\033[102mAssignment operator For Brain called.\033[0m" << std::endl;
	this->type = rhs.getType();
	return (*this);
}

std::string	Brain::getType(void) const
{
	return (this->type);
}

void	Brain::setType(std::string const _type)
{
	this->type = _type;
}

void	Brain::makeSound(void) const
{
	std::cout << "Default Brain Sound" << std::endl;
}
