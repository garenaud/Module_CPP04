/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grenaud- <grenaud-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 14:30:47 by grenaud-          #+#    #+#             */
/*   Updated: 2023/06/24 13:43:02 by grenaud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP

# define ANIMAL_HPP

# include <iostream>

class Animal
{
	protected:
		std::string	type;
	
	public:
		Animal(void);
		virtual ~Animal(void);
		Animal(std::string const &type);
		Animal(Animal const &rhs);
		Animal	&operator=(Animal const &rhs);

		virtual void	makeSound() const = 0;
		std::string		getType(void) const;
		void			setType(std::string const type);	
};

#endif
