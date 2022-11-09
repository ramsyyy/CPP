/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaga <raaga@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 15:51:19 by raaga             #+#    #+#             */
/*   Updated: 2022/11/01 16:00:30 by raaga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

class Harl {
    public:
    Harl( void );
    ~Harl( void );
    void complain( std::string level );

    private:
        void debug( void );
        void info( void );
        void warning( void );
        void error( void );
};

#endif 