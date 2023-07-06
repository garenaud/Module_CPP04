/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grenaud- <grenaud-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 15:18:21 by grenaud-          #+#    #+#             */
/*   Updated: 2023/07/06 18:19:54 by grenaud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"
#include "IMateriaSource.hpp"
#include "ICharacter.hpp"

/* int	main()
{
	IMateriaSource *sort = new MateriaSource;
	sort->learnMateria(new Ice());
	sort->learnMateria(new Cure());
	ICharacter *Joe = new Character("Joe");
	ICharacter *Bil = new Character("Bil");
	AMateria	*tmp;
 	AMateria	*tmp1;
	AMateria	*tmp2;
	AMateria	*tmp3;
	AMateria	*tmp4;
	tmp = sort->createMateria("Ice");
	tmp1 = sort->createMateria("Cure");
	Joe->equip(tmp);
	Joe->use(0, *Bil);
	Bil->equip(tmp1);
	Bil->use(1, *Bil);
	return (0);
} */
void	subj_tests()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;
}

 void ft_tests()
{
	// Constructors
	std::cout << std::endl;
	std::cout << "\033[42mCONSTRUCTORS:" << std::endl;
	std::cout << "-----------------------\033[0m" << std::endl;
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	std::cout << std::endl;

	// Create Materia
	std::cout << "\033[42mCREATE MATERIA:" << std::endl;
	std::cout << "-----------------------\033[0m" << std::endl;
	AMateria	*tmp;
	
	AMateria	*tmp1;
	AMateria	*tmp2;
	AMateria	*tmp3;
	AMateria	*tmp4;

	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp1 = src->createMateria("cure");
	me->equip(tmp1);
	tmp = src->createMateria("fire"); // null
	me->equip(tmp);
	std::cout << std::endl;

	// Use on a new character
	std::cout << "\033[42mUSE ON A NEW CHARACTER:" << std::endl;
	std::cout << "-----------------------\033[0m" << std::endl;
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	std::cout << std::endl;
	me->use(2, *bob); // Use an empty / non existing slot in inventory
	me->use(-4, *bob);
	me->use(18, *bob);
	std::cout << std::endl;

	// Deep copy character
	std::cout << "\033[42mDEEP COPY CHARACTER:" << std::endl;
	std::cout << "-----------------------\033[0m" << std::endl;
	Character	*charles = new Character("Charles");
	tmp2 = src->createMateria("cure");
	charles->equip(tmp2);
	tmp3 = src->createMateria("ice");
	charles->equip(tmp3);
	tmp = src->createMateria("earth");
	charles->equip(tmp);
	Character	*charles_copy = new Character(*charles);
	std::cout << std::endl;

	// Deep copy vs its source character
	std::cout << "\033[42mDEEP COPY VS SOURCE:" << std::endl;
	std::cout << "-----------------------\033[0m" << std::endl;
	charles->unequip(0); // this shows that they have different materia pointers equipped
	tmp4 = charles_copy->getMateriaFromInventory(1);
	charles_copy->unequip(1); //this will produce a leak if we don't store the address somewhere else before
	delete tmp4;
	tmp = src->createMateria("cure");
	charles_copy->equip(tmp);
	tmp = src->createMateria("ice");
	charles_copy->equip(tmp);
	std::cout << std::endl;

	charles->use(0, *bob);
	charles->use(1, *bob);
	charles->use(2, *bob);
	charles->use(3, *bob);
	std::cout << std::endl;
	charles_copy->use(0, *bob);
	charles_copy->use(1, *bob);
	charles_copy->use(2, *bob);
	charles_copy->use(3, *bob);
	std::cout << std::endl;

	// Unequip tests:
	std::cout << "\033[42mUNEQUIP:" << std::endl;
	std::cout << "-----------------------\033[0m" << std::endl;
	me->unequip(-1); // unequip an empty / non existing slot in inventory
	me->unequip(18);
	me->unequip(3);
	std::cout << std::endl;
	me->use(1, *charles);
	me->unequip(1); // Unequip a valid slot in inventory (cure unequipped)
	me->use(1, *charles); // try to use it
	std::cout << std::endl;

	// Destructors
	std::cout << "\033[42mDESTRUCTORS:" << std::endl;
	std::cout << "-----------------------\033[0m" << std::endl;
	delete bob;
	delete me;
	delete src;
	delete charles;
	delete charles_copy;
	delete tmp1;
	delete tmp2;
	std::cout << std::endl;
	//system("leaks ex03");
}

int main()
{
	//ft_tests();
	subj_tests();
	// Leaks check
	std::cout << "\033[47mLEAKS:" << std::endl;
	std::cout << "-----------------------\033[0m" << std::endl;
	system("leaks AMateria");
	return (0);
}
