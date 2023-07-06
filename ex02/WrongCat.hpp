/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grenaud- <grenaud-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 20:35:14 by grenaud-          #+#    #+#             */
/*   Updated: 2023/07/06 20:35:19 by grenaud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP

# define WRONGCAT_HPP

# include "WrongAnimal.hpp"
# include <iostream>

class WrongCat: public WrongAnimal
{
	protected:
		std::string	type;
	
	public:
		WrongCat(void);
		~WrongCat(void);
		WrongCat(std::string const &_type);
		WrongCat(WrongCat const &rhs);
		WrongCat	&operator=(WrongCat const &rhs);

		void	makeSound() const;
		std::string		getType(void) const;
		void			setType(std::string const _type);	
};

#endif
