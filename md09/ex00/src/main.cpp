/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaga <raaga@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 17:11:56 by raaga             #+#    #+#             */
/*   Updated: 2023/03/23 16:09:30 by raaga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../include/date.hpp"
#include "../include/BitcoinExchange.hpp"


int main(int ac, char **av) {
    if (ac < 2) return (0);
    BitcoinExchange   btc(av[1]);
    btc.fill_data();
    btc.exchange();
    return (0);
}