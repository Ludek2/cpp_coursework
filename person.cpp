#include "person.h"
namespace Person{
Person::Person(const std::string &name, const std::string &surname):
	_name{name}, _surname{surname} {}

const std::string &Person::get_name() const {return _name;}

const std::string &Person::get_surname() const{return _surname;}
}
