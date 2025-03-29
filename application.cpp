#include "application.hpp"
#include <string>
#include <memory>

ApplicationDefinition::ApplicationDefinition(std::string application_name, std::string application_vendor) 
    :   p_application_name(application_name), p_application_vendor(application_vendor) {}

ApplicationInstance::ApplicationInstance(std::shared_ptr<ApplicationDefinition> application_type, std::string instance_name, std::string instance_location)
    :   m_definition(application_type), m_instance_name(instance_name), m_instance_location(instance_location) {}
    

