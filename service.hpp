#ifndef SERVICE_HPP
#define SERVICE_HPP

#include <string>
#include <vector>
#include <memory>
#include "application.hpp"

class Service{
    private: 
        std::string m_name; 
        std::vector<std::shared_ptr<ApplicationDefinition>> m_applications; 
    
    public: 
        Service() = default; 
        Service(std::string name);
};

#endif