#ifndef APPLICATION_HPP
#define APPLICATION_HPP

#include "interface.hpp"
#include <string>
#include <vector>
#include <memory>

class LogicalInterface;

class ApplicationDefinition {
    public: 
        std::string p_application_name; 
        std::string p_application_vendor; 
        std::string p_dev_team; 
        std::string p_ops_team; 
        std::vector<std::shared_ptr<LogicalInterface>> p_logical_interfaces; 
        //... more attributes to implement 

        ApplicationDefinition() = default; 
        ApplicationDefinition(std::string application_name, std::string application_vendor);
};

class ApplicationInstance {
    private: 
        std::shared_ptr<ApplicationDefinition> m_definition; 
        std::string m_instance_name; //explicit name: ber500-l01-mav-pc-rt
        std::string m_instance_location; //ber500
        std::vector<std::shared_ptr<ApplicationInstance>> m_backup_application; //Backup-Instance for application
        //... more attributes to implement
    
    public: 
        ApplicationInstance() = default; 
        ApplicationInstance(std::shared_ptr<ApplicationDefinition> application_type, std::string instance_name, std::string instance_location);

};

#endif