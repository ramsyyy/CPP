/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergMe.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaga <raaga@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 17:29:44 by raaga             #+#    #+#             */
/*   Updated: 2023/03/23 20:30:09 by raaga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGME_HPP
# define PMERGME_HPP

# include <iostream>
# include <string>
# include <vector>
# include <deque> 
# include <stdlib.h>

class PmergMe{
    private :

        std::vector<int>vec;
        std::deque<int>deq;
            
    public :
        PmergMe( void ) ;
        ~PmergMe( void ) ;
        PmergMe	&operator=( PmergMe const &copy );
        PmergMe( PmergMe const &copy );
        
        void    fill_container(int ac, char **av);
        void    show_container();
        void    trie_vec(void);
        void    tire_deq(void);

};



#endif