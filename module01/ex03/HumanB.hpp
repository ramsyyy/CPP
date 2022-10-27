/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaga <raaga@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 17:20:58 by raaga             #+#    #+#             */
/*   Updated: 2022/10/27 19:19:12 by raaga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <string>
#include "Weapon.hpp"

class HumanB {
    private:
        std::string const _name;
        Weapon *_weapon; 

    public:
        HumanB( std::string  const name );
        ~HumanB( void );
        void    attack( void ) const ;
        void    setWeapon(Weapon &weapon);
};

#endif