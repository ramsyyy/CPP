/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaga <raaga@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 14:47:55 by raaga             #+#    #+#             */
/*   Updated: 2022/11/07 16:22:03 by raaga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>
# include <string>

class Zombie {
    public :
        Zombie( void );
        ~Zombie( void );
        
        static int index;
        int nb;
        void        set_name( std::string name );
        void        announce( void );
    private :
        std::string _name;
};

Zombie      *zombieHorde( int N, std::string name );

#endif