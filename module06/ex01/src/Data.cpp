#include "../include/Data.hpp"

Data::Data( void ) : _i(5){
	std::cout << "Data Default Constructor called" << std::endl;
	(void)_i;
}

Data::~Data( void ) {
	std::cout << "Data Destructor called " << std::endl;
}
