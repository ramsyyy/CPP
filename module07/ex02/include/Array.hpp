/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaga <raaga@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 19:01:12 by raaga             #+#    #+#             */
/*   Updated: 2022/12/07 16:06:43 by raaga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template<typename T>
class Array {
    
    public :
        Array<T>( void ) : _size(0), _array(NULL){
            std::cout << "Default constructor called" << std::endl;
        }
        ~Array<T>( void ) {
            std::cout << "Destructor called" << std::endl;
            delete [] this->_array;
        }
        Array<T>(unsigned int i) : _size(i) {
            std::cout << "initing Array constructor" << std::endl;
            _array = new T[i];
            
        }
        Array<T> &operator=(Array<T> const &copy) {
            this->_size = copy._size;
            this->_array = new T[copy._size];
            for( unsigned int i = 0; i < copy._size; i++) {
                this->_array[i] = copy._array[i];
            }
            return (*this);
        }
        T   &operator[](unsigned int const i) const{
            if (i < 0 || i >= this->_size) {
                throw ErrorTabException();
            }
            return (this->_array[i]);
        }
        Array<T>(Array<T> const &copy) {
            *this = copy;
        }
        class ErrorTabException : public std::exception {
            public :
                virtual const char * what() const throw() {
                    return ("this grade of tab is fault");
                }
        };
        unsigned int size( void ) const{
            return (this->_size);
        }
        void affiche(void) {
            for(int i = 0; i < static_cast<int>(this->_size); i++) {
                std::cout << this->_array[i] << std::endl ;
            }
        }
        void    modif(void (*ptr_fct)(T &i)) {
            for (int i = 0; i < 15; i++) {
                ptr_fct(this->_array[i]);
            }
        }
            
        
    private :
        unsigned int   _size;
        T   *_array;
};

template<typename T>
void    incr(T &i) {
   i += 1;
}

#endif