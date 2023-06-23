/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grenaud- <grenaud-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 18:28:45 by grenaud-          #+#    #+#             */
/*   Updated: 2023/06/23 13:54:06 by grenaud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP

# define CAT_HPP

# include "Animal.hpp"
# include <iostream>

class Cat: public Animal
{
	protected:
		std::string	type;
	
	public:
		Cat(void);
		~Cat(void);
		Cat(std::string const &_type);
		Cat(Cat const &rhs);
		Cat	&operator=(Cat const &rhs);

		void	makeSound() const;
		std::string		getType(void) const;
		void			setType(std::string const _type);	
};

#endif
