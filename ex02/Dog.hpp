/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grenaud- <grenaud-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 18:28:45 by grenaud-          #+#    #+#             */
/*   Updated: 2023/06/27 15:27:14 by grenaud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP

# define DOG_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"
# include <iostream>

class Dog: public AAnimal
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
};

#endif
