/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaga <raaga@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 18:44:48 by raaga             #+#    #+#             */
/*   Updated: 2022/11/30 18:55:49 by raaga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

class Brain{
public :
	Brain( void );
	~Brain( void );
	Brain	&operator=( Brain const &copy );
	Brain( Brain const &copy );

private : 
	std::string _ideas[100];
}; 

#endif