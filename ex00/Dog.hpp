/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grenaud- <grenaud-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 18:28:45 by grenaud-          #+#    #+#             */
/*   Updated: 2023/06/22 12:38:33 by grenaud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP

# define DOG_HPP

# include "Animal.hpp"
# include <iostream>

class Dog: public Animal
{
	protected:
		std::string	type;
	
	public:
		Dog(void);
		~Dog(void);
		Dog(std::string const &_type);
		Dog(Dog const &copy);
		Dog	&operator=(Dog const &copy);

		virtual void	makeSound() const;
		std::string		getType(void) const;
		void			setType(std::string const _type);	
};

#endif
