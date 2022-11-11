/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaga <raaga@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 19:46:22 by raaga             #+#    #+#             */
/*   Updated: 2022/11/11 21:35:00 by raaga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>
# include <string>

class ScavTrap : public ClapTrap {
    public :
        ScavTrap( void );
        ScavTrap &operator=( ScavTrap const &copy ) ;
        ScavTrap( std::string const name ); 
        ScavTrap( ScavTrap const &copy );
        ~ScavTrap( void );
        
        void attack(std::string const &target );
        void gateKeeper( void );     
};

#endif