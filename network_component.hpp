#ifndef NETWORK_COMPONENT_HPP
#define NETWORK_COMPONENT_HPP

#include <string>
#include <fstream>
#include <iostream>
#include <unordered_map>
#include <memory>
#include <vector>

class NetworkComponent {
    private: 
        std::string m_name; 
        std::string m_vendor; 
        std::string m_type; 
        //... more attributes to be defined

        bool m_backup_availabel; 
        //Int-Name (ETH1), Line-ID(99P/123...)
        std::unordered_map<std::string, std::string> m_interfaces;
        //Pointer auf anderes NetworkComponent-Element
        std::vector<std::shared_ptr<NetworkComponent>> m_backup_component;
    
    public: 
        NetworkComponent() = default; 
        NetworkComponent(const std::string& m_name, const std::string& m_vendor, const std::string& m_type);
        const std::string& get_name() const; 
        const std::string& get_vendor() const; 
        const std::string& get_type() const; 
};  

#endif