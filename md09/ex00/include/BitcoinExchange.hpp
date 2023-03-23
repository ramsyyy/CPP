/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaga <raaga@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 15:22:48 by raaga             #+#    #+#             */
/*   Updated: 2023/03/23 16:09:28 by raaga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <map>
# include "date.hpp"
# include <fstream>
# include <sstream>


class BitcoinExchange {
    
    private :
        std::map<Date, float> data_base;
        std::string file;
    public :
    BitcoinExchange(std::string file);
    ~BitcoinExchange() ;
    BitcoinExchange &operator=(BitcoinExchange const &copy) ;
    BitcoinExchange(BitcoinExchange const &copy) ;
    void    fill_data(void) ;
    void    exchange() ;
};


#endif