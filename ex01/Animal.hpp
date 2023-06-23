/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grenaud- <grenaud-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 14:30:47 by grenaud-          #+#    #+#             */
/*   Updated: 2023/06/23 13:50:46 by grenaud-         ###   ########.fr       */
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

		virtual void	makeSound() const;
		std::string		getType(void) const;
		void			setType(std::string const type);	
};

#endif
