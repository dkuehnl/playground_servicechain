#include <iostream>
#include "./service.hpp"
#include "./service_area.hpp"
#include <vector>
#include <string>
#include <memory>

int main() {
    std::vector<std::unique_ptr<NetworkComponent>> network_components; 
    std::string name, vendor, type; 
    char create_new = 'Y'; 

    while (create_new == 'y' || create_new == 'Y') {
        std::cout << "Please create a new object: " << std::endl; 

        std::cout << "Name: "; 
        std::getline(std::cin, name); 
        std::cout << "Vendor: "; 
        std::getline(std::cin, vendor); 
        std::cout << "Type: "; 
        std::getline(std::cin, type); 

        network_components.push_back(std::make_unique<NetworkComponent>(name, vendor, type));

        std::cout << "Create another Object? (Y/N):"; 
        std::cin >> create_new; 
        std::cin.ignore();
    }

    std::cout << "Created Objects: " << std::endl; 
    for (const auto& element : network_components) {
        std::cout   << "Name: " << element->get_name() << std::endl
                    << "Vendor: " << element->get_vendor() << std::endl
                    << "Type: " << element->get_type() << std::endl; 
    }



    
    return 0; 
}