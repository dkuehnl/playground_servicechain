#ifndef FIRST_OBJECT_HPP
#define FIRST_OBJECT_HPP

#include <string>

class Person {
    private:
        std::string name; 
        int age; 

    public: 
        Person(std::string name, int age);
        void introduce() const;
};

#endif