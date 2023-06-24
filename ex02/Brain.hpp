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
		Brain(std::string const &_ideas);
		Brain(Brain const &rhs);
		Brain	&operator=(Brain const &rhs);

		//std::string	getIdeas(void) const;
};

#endif
