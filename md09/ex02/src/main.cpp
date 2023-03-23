/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaga <raaga@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 17:27:08 by raaga             #+#    #+#             */
/*   Updated: 2023/03/24 00:01:51 by raaga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# include <iostream>
# include <sys/time.h>
# include "../include/PmergMe.hpp"

int main(int ac, char **av) {
    PmergMe tri;
    struct timeval begin, end;


    tri.fill_container(ac, av);
    std::cout << "before : ";
  //  tri.show_container();
    gettimeofday(&begin, 0);
    tri.trie_vec();
    gettimeofday(&end, 0);
    long seconds = end.tv_sec - begin.tv_sec;
    long useconds = end.tv_usec - begin.tv_usec;
    double total = seconds + useconds*1e-6;
    std::cout << "\ntime exec : " << total << std::endl;
    std::cout << std::endl;
    std::cout << "after : ";
    gettimeofday(&begin, 0);
    tri.tire_deq();
    gettimeofday(&end, 0);
     seconds = end.tv_sec - begin.tv_sec;
     useconds = end.tv_usec - begin.tv_usec;
     total = seconds + useconds*1e-6;
    std::cout << "\ntime exec : " << total << std::endl;
    //tri.show_container();
    
    return (0);
}