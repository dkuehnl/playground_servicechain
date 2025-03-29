#include "service_area.hpp"
#include "network_component.hpp"
#include <memory>

ServiceArea::ServiceArea(std::string loc_long, std::string loc_short)
    : m_location_long(loc_long), m_location_short(loc_short) {};

void ServiceArea::add_network_component(std::unique_ptr<NetworkComponent> component, const std::string& kind) {
    if (kind == "main") {
        m_main_network.push_back(std::move(component)); 
    } else if (kind == "avail1") {
        m_avail_zone_1.push_back(std::move(component)); 
    } else if (kind == "avail2") {
        m_avail_zone_2.push_back(std::move(component)); 
    } else {
        std::cerr << "No valid List for " << kind << " found." << std::endl; 
    }
}

void ServiceArea::add_application(std::unique_ptr<ApplicationInstance> application) {
    m_hosted_apps.push_back(std::move(application)); 
}

const std::string& ServiceArea::get_location_long() {
    return m_location_long; 
}

const std::string& ServiceArea::get_location_short() {
    return m_location_short; 
}

//const std::vector<std::unique_ptr<Application>> ServiceArea::get_applications() {
//    return m_hosted_apps;
//}