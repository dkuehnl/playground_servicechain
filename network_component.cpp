#include "network_component.hpp"

NetworkComponent::NetworkComponent(
    const std::string& name, 
    const std::string& vendor, 
    const std::string& type)
    : m_name(name), m_vendor(vendor), m_type(type) {};

const std::string& NetworkComponent::get_name() const{
    return m_name; 
}

const std::string& NetworkComponent::get_vendor() const{
    return m_vendor; 
}

const std::string& NetworkComponent::get_type() const{
    return m_type; 
}