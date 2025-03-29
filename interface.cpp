#include "interface.hpp"
#include "application.hpp"
#include <memory>

LogicalInterface::LogicalInterface(std::string l4_proto, std::string l7_proto, std::shared_ptr<ApplicationDefinition> src_app)
    :   m_l4_protocol(l4_proto), m_l7_protocol(l7_proto), m_src_application(src_app) {}

