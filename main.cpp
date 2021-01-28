//#includes are ALWAYS at top of file
#include "myfunc.h"	// references myfunc.h so that the program knows how to find it
#include <iostream>	//iostream is where std::cout and std::endl are defined

int main()
{
	std::cout<<func()<<std::endl;		// include myfunc.h so knows what to do with this 
	return 0;
}
