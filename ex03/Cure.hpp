/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grenaud- <grenaud-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 13:07:51 by grenaud-          #+#    #+#             */
/*   Updated: 2023/06/28 13:28:28 by grenaud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
	private:
		std::string _type;
	public:
		Cure();
		~Cure();
		Cure(Cure const &rhs);
		Cure & operator=(Cure const &rhs);
		std::string const &getType() const;
		Cure *clone() const;
		void use(ICharacter &target);
};

#endif