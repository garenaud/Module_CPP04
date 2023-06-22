/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grenaud- <grenaud-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 18:29:03 by grenaud-          #+#    #+#             */
/*   Updated: 2023/06/22 12:33:57 by grenaud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void): type("default")
{
	std::cout << "\033[43mWrongCat [" << this->type << "] created with default constructor.\033[0m" << std::endl;
}

WrongCat::WrongCat(std::string const &_type): type(_type)
{
	std::cout << "\033[43mWrongCat [" << this->type << "] created.\033[0m" << std::endl;
}

WrongCat::~WrongCat(void)
{
	std::cout << "\033[43mWrongCat [" << this->type << "] destroyed.\033[0m" << std::endl;
}

WrongCat::WrongCat(WrongCat const &copy)
{
	std::cout << "\033[43mWrongCat [" << this->type << "] copied.\033[0m" << std::endl;
	*this = copy;
}

WrongCat	&WrongCat::operator=(WrongCat const &copy)
{
	std::cout << "\033[43mAssignment operator For WrongCat called.\033[0m" << std::endl;
	this->type = copy.getType();
	return (*this);
}

std::string	WrongCat::getType(void) const
{
	return (this->type);
}

void	WrongCat::setType(std::string const _type)
{
	this->type = _type;
}

void	WrongCat::makeSound(void) const
{
	std::cout << "Wrong Meow Wrong Meow" << std::endl;
}
