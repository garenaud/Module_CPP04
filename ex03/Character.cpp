/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grenaud- <grenaud-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 17:47:47 by grenaud-          #+#    #+#             */
/*   Updated: 2023/06/28 14:19:06 by grenaud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "ICharacter.hpp"

Character::Character(std::string name): _name(name)
{
	std::cout << "🧙‍♂️ Character [" << this->_name << "] created" << std::endl;
}

const std::string	&Character::getName(void) const
{
	return (_name);
}

Character	&Character::operator=(Character const &rhs)
{
	std::cout << "🧙‍♂️ Assignment operator for Character called." << std::endl;
	this->_name = rhs.getName();
	return (*this);
}

Character::Character(Character const &rhs)
{
	this->_name = rhs.getName();
	std::cout << "🧙‍♂️ Character [" << this->_name << "] copied." << std::endl;
}