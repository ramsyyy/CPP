/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaga <raaga@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 18:17:42 by raaga             #+#    #+#             */
/*   Updated: 2022/12/01 18:57:36 by raaga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>



template<typename T>
    void ft_print(T &i){
        std::cout << "valeur: "<< i << std::endl;
}

template <typename T> 
    void    iter (T a[], T sizeTab, void (*ptr_fct)(T &i)) {
        for (int i = 0; i < sizeTab; i++) {
            ptr_fct(a[i]);
        }
}

#endif