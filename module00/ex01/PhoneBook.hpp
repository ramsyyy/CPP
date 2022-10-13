/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaga <raaga@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 13:12:29 by raaga             #+#    #+#             */
/*   Updated: 2022/10/13 18:13:36 by raaga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_H
# define PHONE_BOOK_H

# include "Contact.hpp"

class PhoneBook {

public:
    
    int foo = 10;
    Contact tab_contact[8] ;
    
    PhoneBook(void);
    ~PhoneBook(void);

    void    add_new(Contact *new_contact);
};

#endif