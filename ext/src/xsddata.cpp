#include "xsddata.h"
#include <sstream>

namespace XSD {
    
    using namespace std;
    
    std::string XMLBooleanStr(const bool& _val)
    {
        if (_val)
        {
            return "true";
        }
        else
        {
            return "false";
        }
    }
    
    Type::Type()
    {
        
    }
    
    Type::~Type()
    {
        
    }
    
    std::string ComplexType::toXml(const std::string& _elementName) const
    {
        stringstream xmlStr;
        toXml(_elementName, xmlStr);
        return xmlStr.str();
    }
    
    SimpleType::SimpleType()
    {
        
    }
    
    SimpleType::~SimpleType()
    {
        
    }
    
    std::string SimpleType::toXml(const std::string& _attrName) const
    {
        stringstream xmlStr;
        toXml(_attrName, xmlStr);
        return xmlStr.str();
    }
    
    ComplexType::ComplexType()
    {
        
    }
    
    ComplexType::~ComplexType()
    {
        
    }
    
    std::string Element::toXml() const
    {
        stringstream xmlStr;
        toXml(xmlStr);
        return xmlStr.str();
    }
    
    const std::string& Element::name() const
    {
        return m_name;
    }
    
    std::string Attribute::toXml() const
    {
        stringstream xmlStr;
        toXml(xmlStr);
        return xmlStr.str();
    }
}