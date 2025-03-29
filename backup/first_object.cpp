#include "first_object.hpp"
#include <iostream>

Person::Person(std::string vorname, int alter) : name(vorname), age(alter) {}

void Person::introduce() const {
    std::cout << "Guten Abend " << name << "(" << age << ")\n";
}