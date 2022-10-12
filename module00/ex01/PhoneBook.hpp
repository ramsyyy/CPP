/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaga <raaga@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 13:12:29 by raaga             #+#    #+#             */
/*   Updated: 2022/10/12 17:51:42 by raaga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_H
# define PHONE_BOOK_H



class PhoneBook {

public:
    
    Contact tab_contact[8];
    
    PhoneBook( void );
    ~PhoneBook( void );
    
    void    bar( void );    
};

#endif