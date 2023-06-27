/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Amateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grenaud- <grenaud-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 15:43:22 by grenaud-          #+#    #+#             */
/*   Updated: 2023/06/27 17:30:07 by grenaud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA.HPP
# define AMATERIA.HPP
#include <iostream>

class AMateria
{
	protected:
		std::string	_type;

	public:
		AMateria();
		~AMateria();
		AMateria(std::string const &type);
		AMateria			&operator=(AMateria const &rhs);
		std::string const 	&getType() const; //Returns the materia type
		virtual 			AMateria *clone() const = 0;
		virtual void 		use(ICharacter& target);
};

#endif
