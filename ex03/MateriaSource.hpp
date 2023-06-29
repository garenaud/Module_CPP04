/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grenaud- <grenaud-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 17:44:01 by grenaud-          #+#    #+#             */
/*   Updated: 2023/06/28 15:01:39 by grenaud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP

# define MATERIASOURCE_HPP

# include <iostream>
# include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
	private:
		AMateria	*(_inventory[4]);
	public:
		MateriaSource();
		MateriaSource(MateriaSource const &rhs);
		~MateriaSource();
		MateriaSource & operator=(MateriaSource const &rhs);
		void learnMateria(AMateria *m);
		AMateria *createMateria(std::string const &type);
};

#endif
