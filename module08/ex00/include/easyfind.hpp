/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaga <raaga@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 15:54:11 by raaga             #+#    #+#             */
/*   Updated: 2022/12/07 18:34:46 by raaga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>
# include <iterator>
# include <algorithm>
# include <iostream>

template <typename T>
    typename T::iterator easyfind(T &a, int b) {
        typename T::iterator it;
        it = std::find(a.begin(), a.end(), b);
        return (it);
}

template <typename T>
void    printIt(T it, T end) {
    if (it != end) {
        std::cout << *it << std::endl;
    }
    else
        std::cout << "aucune valeur identique" << std::endl;
}

#endif