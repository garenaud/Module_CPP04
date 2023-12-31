/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grenaud- <grenaud-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 15:43:22 by grenaud-          #+#    #+#             */
/*   Updated: 2023/07/06 13:07:12 by grenaud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	protected:
		const std::string	_type;

	public:
		AMateria();
		AMateria(std::string const &type);
		virtual ~AMateria();
		AMateria(AMateria const & ref);
		//AMateria			&operator=(AMateria const &rhs);
		virtual std::string const	&getType() const; //Returns the materia type
		virtual 			AMateria *clone() const = 0;
		virtual void 		use(ICharacter& target);
};

#endif
