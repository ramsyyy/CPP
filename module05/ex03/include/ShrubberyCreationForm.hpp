/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaga <raaga@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 13:21:55 by raaga             #+#    #+#             */
/*   Updated: 2022/11/24 13:54:51 by raaga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

class Form ;

class ShrubberyCreationForm : public Form {
public :
	ShrubberyCreationForm( std::string target );
	~ShrubberyCreationForm( void );
	ShrubberyCreationForm	&operator=( ShrubberyCreationForm const &copy );
	ShrubberyCreationForm( ShrubberyCreationForm const &copy );

	void execute(Bureaucrat const & executor) const ;
	
private : 
};

#endif