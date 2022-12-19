/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaga <raaga@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 19:35:45 by raaga             #+#    #+#             */
/*   Updated: 2022/12/19 17:53:15 by raaga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdint.h>
#include "../include/Data.hpp"

uintptr_t serialize(Data* ptr) {
    return (reinterpret_cast<uintptr_t &>(ptr));
}

Data* deserialize(uintptr_t raw) {
    return (reinterpret_cast<Data *>(raw));
}

int main() {

    Data ptr;
    uintptr_t s;
    
    s = serialize(&ptr);
    std::cout << &ptr << std::endl;
    std::cout << s << std::endl;
    std::cout << deserialize(s) << std::endl;
    return (0);
}