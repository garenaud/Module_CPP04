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

Brain::Brain(void)
{
	//this->ideas = new std::string[100];
	for (int i = 0; i < 100; i++)
		this->ideas[i] = "FOOOOOOOOOOD";
	std::cout << "\033[102mBrain is created with default constructor and a filled brain.\033[0m" << std::endl;
}

Brain::Brain(std::string const &_ideas)
{
	//this->ideas = new std::string[100];
	for (int i = 0; i < 100; i++)
		this->ideas[i] = _ideas;
	std::cout << "\033[102mBrain created.\033[0m" << std::endl;
}

Brain::~Brain(void)
{
	std::cout << "\033[102mBrain destroyed.\033[0m" << std::endl;
}

Brain::Brain(Brain const &rhs)
{
	std::cout << "\033[102mBrain copied.\033[0m" << std::endl;
	*this = rhs;
}

Brain	&Brain::operator=(Brain const &rhs)
{
	std::cout << "\033[102mAssignment operator For Brain called.\033[0m" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = rhs.ideas[i];
	return (*this);
}
/* 
std::string	Brain::getIdeas(void) const
{
	return (this->ideas[100]);
} */
