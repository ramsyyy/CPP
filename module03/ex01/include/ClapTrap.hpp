/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaga <raaga@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 14:40:45 by raaga             #+#    #+#             */
/*   Updated: 2022/11/10 18:39:49 by raaga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>
# include <iostream>

class ClapTrap {
	private :
		std::string _name;
		int        	_hitPoints;
		int			_energyPoints;
		int 		_attackDamage;       
	  
	public :
	
		ClapTrap( void ) ;
		ClapTrap( std::string const name );
		ClapTrap &operator=( ClapTrap const &copy);
		ClapTrap( ClapTrap const &copy );
		~ClapTrap( void );
		std::string const		getName( void ) const;
		
		int		getHitPoints( void ) const;
		int		getEnergyPoints( void ) const;
		int		getAttackDamage( void ) const;

		void	takeDamage( unsigned int amount );
		void	beRepaired( unsigned int amount );
		void	attack( const std::string &target );
		
	
};


#endif