#ifndef SERVICE_AREA_HPP
#define SERVICE_AREA_HPP

#include <string>
#include <vector>
#include <memory>
#include "network_component.hpp"
#include "application.hpp"

class ServiceArea{
    private: 
        std::string m_name; //e.g. nIMS
        std::string m_location_long; //e.g. Berlin 500
        std::string m_location_short; //ber500
        std::vector<std::unique_ptr<NetworkComponent>> m_main_network; //CE-Router, Firewall, Main-Switche
        //Availability-Zones within ServiceArea
        std::vector<std::unique_ptr<NetworkComponent>> m_avail_zone_1; //Zone1 Switche, Server...
        std::vector<std::unique_ptr<NetworkComponent>> m_avail_zone_2;
        //... 
        std::vector<std::unique_ptr<ApplicationInstance>> m_hosted_apps;

    public: 
        ServiceArea() = default; 
        ServiceArea(std::string location_long, std::string location_short); 
        void add_network_component(std::unique_ptr<NetworkComponent> component, const std::string& kind);
        void add_application(std::unique_ptr<ApplicationInstance> application); 
        const std::string& get_location_long(); 
        const std::string& get_location_short(); 
};

#endif