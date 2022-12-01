/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaga <raaga@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 19:01:13 by raaga             #+#    #+#             */
/*   Updated: 2022/12/01 20:13:33 by raaga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Array.hpp"
#include <iostream>

int main() {
    
    Array<int>a(15);
    Array<int>b;
    
    b = a;
    a.affiche();
    b.affiche();
    b.modif(&incr);
    b.affiche();
    a.affiche();
    a.modif(&incr);
    a.modif(&incr);
    a.affiche();
    b.affiche();
    b = a;
    b.affiche();
    
    return (0);
}