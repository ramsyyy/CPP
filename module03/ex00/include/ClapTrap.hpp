/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaga <raaga@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 14:40:45 by raaga             #+#    #+#             */
/*   Updated: 2022/11/09 14:59:34 by raaga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>

class ClapTrap {
	private :
		std::string _name;
		int        	_hitPoints;
		int			_energyPoints;
		int 		_attackDamage;       
	  
	public :
		ClapTrap( void ) ;
		ClapTrap( std::string name );
		~ClapTrap( void ) ;

		void attack( const std::string &target );
	
};


#endif