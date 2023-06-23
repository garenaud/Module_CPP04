/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grenaud- <grenaud-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 14:30:47 by grenaud-          #+#    #+#             */
/*   Updated: 2023/06/22 12:37:44 by grenaud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP

# define BRAIN_HPP

# include <iostream>

class Brain
{
	protected:
		std::string	ideas[100];
	
	public:
		Brain(void);
		virtual ~Brain(void);
		Brain(std::string const &type);
		Brain(Brain const &rhs);
		Brain	&operator=(Brain const &rhs);

		virtual void	makeSound() const;
		std::string		getType(void) const;
		void			setType(std::string const type);	
};

#endif
