/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaga <raaga@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 17:36:24 by raaga             #+#    #+#             */
/*   Updated: 2022/11/09 18:07:02 by raaga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>
# include <string>

class Zombie {
    public :
        Zombie( void );
        Zombie( std::string name );
        ~Zombie( void );

        void        announce( void );
    private :
        std::string _name;
};

Zombie		*newZombie( std::string name );
void		randomChup( std::string name );

#endif