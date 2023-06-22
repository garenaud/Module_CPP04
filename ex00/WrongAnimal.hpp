/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grenaud- <grenaud-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 14:30:47 by grenaud-          #+#    #+#             */
/*   Updated: 2023/06/22 12:37:44 by grenaud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WrongANIMAL_HPP

# define WrongANIMAL_HPP

# include <iostream>

class WrongAnimal
{
	protected:
		std::string	type;
	
	public:
		WrongAnimal(void);
		virtual ~WrongAnimal(void);
		WrongAnimal(std::string const &type);
		WrongAnimal(WrongAnimal const &copy);
		WrongAnimal	&operator=(WrongAnimal const &copy);

		virtual void	makeSound() const;
		std::string		getType(void) const;
		void			setType(std::string const type);	
};

#endif
