#include "person.h"
#include <iostream>

int main()
{
	Person::Person p(std::string("Edo"),std::string("Felici"));
	std::cout << p.get_name()
		  << " "
		  << p.get_surname()
		  << std::endl;
	return 0;
}
