/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramsy <ramsy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 13:12:29 by raaga             #+#    #+#             */
/*   Updated: 2022/10/18 20:48:37 by ramsy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_H
# define PHONE_BOOK_H

# include "Contact.hpp"

class PhoneBook {

private:

    Contact _contact[8];
    int _index;
    int _nb_contact;
public:

    PhoneBook(void);
    ~PhoneBook(void);

    void    add_new();
    void    get_nb_contact( void );
    void    search();
};

#endif