/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaga <raaga@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 17:51:56 by raaga             #+#    #+#             */
/*   Updated: 2022/12/01 18:13:12 by raaga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP


template <typename T>
    void swap (T &a, T &b) {
    T tmp = a;
    a = b;
    b = tmp;
}

template <typename T>
    T min (T a, T b) {
        return (a<b?a:b);
}

template <typename T>
    T max (T a, T b) {
        return (a>b?a:b);
}

#endif 