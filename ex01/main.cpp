/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grenaud- <grenaud-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 15:20:06 by grenaud-          #+#    #+#             */
/*   Updated: 2023/06/23 15:06:04 by grenaud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int		main()
{
	const int size = 10;
	Animal	*tabAnimal[size];
	Cat *Joe = new Cat();
	Cat *Suzie = new Cat(Joe);
	for (int i = 0; i < size; i++)
	{
		if (i < size / 2)
			tabAnimal[i] = new Cat;
		else
			tabAnimal[i] = new Dog;
	}
	for (int i = 0; i < size; i++)
		delete tabAnimal[i];
	//delete[] tabAnimal;
	return 0;
}
