#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <string>

class MutantStack{
public :
	MutantStack( void );
	~MutantStack( void );
	MutantStack	&operator=( MutantStack const &copy );
	MutantStack( MutantStack const &copy );

private : 

};

#endif