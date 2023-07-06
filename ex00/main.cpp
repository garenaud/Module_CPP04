/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grenaud- <grenaud-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 15:20:06 by grenaud-          #+#    #+#             */
/*   Updated: 2023/06/23 15:07:01 by grenaud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int		main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog("gus");
	const WrongAnimal* i = new WrongCat("Rafia");
	const WrongCat* suzie = new WrongCat("Suzie");
	const Animal* h = new Cat("Tiki");
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	h->makeSound();
	suzie->makeSound();
	meta->makeSound();
	delete meta;
	delete j;
	delete i;
	delete h;
	return 0;
}
