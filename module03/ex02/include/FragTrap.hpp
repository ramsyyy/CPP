/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaga <raaga@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 21:38:50 by raaga             #+#    #+#             */
/*   Updated: 2022/11/11 22:03:46 by raaga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
  public :
    FragTrap( void );
    FragTrap( std::string const name );
    FragTrap &operator=( FragTrap const &copy );
    FragTrap( FragTrap const &copy );
    ~FragTrap ( void );

    void highFivesGuys( void );
};

#endif