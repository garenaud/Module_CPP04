/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grenaud- <grenaud-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 14:30:47 by grenaud-          #+#    #+#             */
/*   Updated: 2023/06/27 15:26:25 by grenaud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP

# define AANIMAL_HPP

# include <iostream>

class AAnimal
{
	protected:
		std::string	type;
	
	public:
		AAnimal(void);
		virtual ~AAnimal(void);
		AAnimal(std::string const &type);
		AAnimal(AAnimal const &rhs);
		AAnimal	&operator=(AAnimal const &rhs);

		virtual void	makeSound() const = 0;
		std::string		getType(void) const;
		void			setType(std::string const type);	
};

#endif
