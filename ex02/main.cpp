/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grenaud- <grenaud-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 15:20:06 by grenaud-          #+#    #+#             */
/*   Updated: 2023/06/23 16:47:28 by grenaud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int		main()
{
	Dog *test = new Dog;
	Cat *suzie = new Cat;
	test->makeSound();
	suzie->makeSound();
	delete suzie;
	delete test;
	return 0;
}
