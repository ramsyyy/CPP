/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaga <raaga@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:58:52 by raaga             #+#    #+#             */
/*   Updated: 2022/10/27 19:02:47 by raaga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <string>
#include "Weapon.hpp"

class HumanA {
    private:
        std::string const _name;
        Weapon &_weapon; 

    public:
        HumanA( Weapon &weapon );
        HumanA( std::string const name, Weapon &weapon );
        ~HumanA( void );
        void    attack( void ) const ;
};

#endif