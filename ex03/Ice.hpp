/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grenaud- <grenaud-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 15:14:26 by grenaud-          #+#    #+#             */
/*   Updated: 2023/06/28 15:23:29 by grenaud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"
# include <iostream>

class Ice : public AMateria
{
	private:
		std::string _type;
	public:
		Ice();
		~Ice();
		Ice(Ice const &rhs);
		Ice &operator=(Ice const &rhs);
		std::string const &getType() const;
		Ice *clone() const;
		void use(ICharacter &target);
};

#endif
