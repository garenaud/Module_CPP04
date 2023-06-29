/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grenaud- <grenaud-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 17:28:18 by grenaud-          #+#    #+#             */
/*   Updated: 2023/06/29 15:28:00 by grenaud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
//class ICharacter;

class Character : public ICharacter
{
	private:
		AMateria			*(_inventory[4]);
		std::string	const	_name;
		
	public:
		Character(std::string name);
		Character(Character const &rhs);
		~Character();
		Character &operator=(Character const &rhs);
		const std::string &getName() const;
		void equip(AMateria *m);
		void unequip(int idx);
		void use(int idx, ICharacter &target);
		AMateria	*getMateriaFromInventory(int idx);
};

#endif
