/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grenaud- <grenaud-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 18:28:45 by grenaud-          #+#    #+#             */
/*   Updated: 2023/07/06 18:13:53 by grenaud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP

# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"
# include <iostream>

class Dog: public Animal
{
	protected:
		std::string	type;
		Brain	*brain;
	
	public:
		Dog(void);
		~Dog(void);
		Dog(std::string const &_type);
		Dog(Dog const &rhs);
		Dog	&operator=(Dog const &rhs);

		virtual void	makeSound() const;
		Brain			*getBrain(void) const;
		std::string		getType(void) const;
		void			setType(std::string const _type);
		void 			compareTo(Dog const & other_dog) const;
};

#endif
