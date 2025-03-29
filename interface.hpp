#ifndef INTERFACE_HPP
#define INTERFACE_HPP

#include "application.hpp"
#include <string>
#include <memory>

class ApplicationDefinition;

class LogicalInterface {
    private: 
        std::string m_full_name; //automatically build 
        std::string m_l4_protocol; //e.g. TCP, UDP...
        std::string m_l7_protocol; //e.g SIP, RTP, LDAP, Diameter...
        std::string m_rfc_name; //e.g. Gm, Mw, Mh...
        std::shared_ptr<ApplicationDefinition> m_src_application; //e.g. PCSCF
        std::shared_ptr<ApplicationDefinition> m_dst_application; //e.g. SCSCF
    
    public: 
        LogicalInterface() = default; 
        LogicalInterface(std::string l4_proto, std::string l7_proto, std::shared_ptr<ApplicationDefinition> src_app);
};

#endif 