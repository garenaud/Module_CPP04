/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grenaud- <grenaud-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 14:14:48 by aperez-b          #+#    #+#             */
/*   Updated: 2023/06/23 13:51:31 by grenaud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(void): type("default")
{
	std::cout << "\033[102mAAnimal [" << this->type << "] created with default constructor.\033[0m" << std::endl;
}

AAnimal::AAnimal(std::string const &_type): type(_type)
{
	std::cout << "\033[102mAAnimal [" << this->type << "] created.\033[0m" << std::endl;
}

AAnimal::~AAnimal(void)
{
	std::cout << "\033[102mAAnimal [" << this->type << "] destroyed.\033[0m" << std::endl;
}

AAnimal::AAnimal(AAnimal const &rhs)
{
	std::cout << "\033[102mAAnimal [" << this->type << "] copied.\033[0m" << std::endl;
	*this = rhs;
}

AAnimal	&AAnimal::operator=(AAnimal const &rhs)
{
	std::cout << "\033[102mAssignment operator For AAnimal called.\033[0m" << std::endl;
	this->type = rhs.getType();
	return (*this);
}

std::string	AAnimal::getType(void) const
{
	return (this->type);
}

void	AAnimal::setType(std::string const _type)
{
	this->type = _type;
}

void	AAnimal::makeSound(void) const
{
	std::cout << "Default AAnimal Sound" << std::endl;
}
