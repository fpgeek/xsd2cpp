#include "xsdtype.h"
#include <sstream>

namespace XSD {
    
    using namespace std;
    
    string XMLBooleanStr(const bool& _val)
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
    

    // Type
    Type::Type()
    {
        
    }
    
    Type::~Type()
    {
        
    }
    

    // ComplexType
    ComplexType::ComplexType()
    {

    }

    ComplexType::~ComplexType()
    {

    }

    std::string ComplexType::toXmlElem(const string& _elementName) const
    {
        stringstream xmlStr;
        toXmlElem(_elementName, "", xmlStr);
        return xmlStr.str();
    }


    // SimpleType
    SimpleType::SimpleType()
    {
        
    }
    
    SimpleType::~SimpleType()
    {
        
    }
    
    std::string SimpleType::toXmlAttr(const string& _attrName) const
    {
        stringstream xmlStr;
        toXmlAttr(_attrName, xmlStr);
        return xmlStr.str();
    }
    
    
    // Element
    Element::Element()
    {

    }

    Element::~Element()
    {

    }

    std::string Element::toXml() const
    {
        stringstream xmlStr;
        toXml(xmlStr);
        return xmlStr.str();
    }


    // Attribute
    Attribute::Attribute()
    {

    }

    Attribute::~Attribute()
    {

    }

    std::string Attribute::toXml() const
    {
        stringstream xmlStr;
        toXml(xmlStr);
        return xmlStr.str();
    }
}