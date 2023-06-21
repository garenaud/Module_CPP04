/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grenaud- <grenaud-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 18:28:45 by grenaud-          #+#    #+#             */
/*   Updated: 2023/06/21 18:42:50 by grenaud-         ###   ########.fr       */
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
		Cat(std::string const &type);
		Cat(Cat const &copy);
		Cat	&operator=(Cat const &copy);

		virtual void	makeSound() const;
		std::string		getType(void) const;
		void			setType(std::string const type);	
};

#endif
