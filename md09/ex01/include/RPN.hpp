/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaga <raaga@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 16:27:20 by raaga             #+#    #+#             */
/*   Updated: 2023/03/23 16:43:49 by raaga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

#include <iostream>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <stack>

class rpn {
    private :
        std::stack<int> pile;
        std::string str;
    
    public :
        rpn();
        rpn(std::string str);
        ~rpn();
        rpn &operator=(rpn const &copy);
        rpn(rpn const &copy);

        int pars_string();
        void    calcul();
        std::stack<int> get_pile();
        std::string get_str() ;
};

#endif