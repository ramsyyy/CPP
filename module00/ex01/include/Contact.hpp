/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaga <raaga@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 17:40:31 by raaga             #+#    #+#             */
/*   Updated: 2022/10/20 19:03:19 by raaga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

# include <string>
# include <stdlib.h>
# include <sstream>
# include <iostream>

class Contact {

public:
	Contact(void);
	~Contact(void);
	void	set_first_name(std::string input);
	void	get_first_name( void );
	void	set_last_name(std::string input);
	void	get_last_name( void );
	void	set_nick_name(std::string input);
	void	get_nick_name( void );
	void	set_phone_number(std::string input);
	void	get_phone_number( void );
	void	set_darkest_secret(std::string input);
	void	get_darkest_secret( void );
	void	set_index(int i);
	void	get_index( void );
	void	get_contact(std::string str);
	void	get_all( void );
	
private:
	
	std::string _last_name;
	std::string _first_name;
	std::string _nick_name;
	std::string _phone_number;
	std::string _darkest_secret;
	int			_index;
};

#endif