#include "xsdtype.h"
#include <sstream>
#include <algorithm>
#include <assert.h>

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

    std::string ComplexType::toXmlElemStr(const string& _elementName) const
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
    
    std::string SimpleType::toXmlAttrStr(const string& _attrName) const
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

    std::string Element::toXmlStr() const
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

    std::string Attribute::toXmlStr() const
    {
        stringstream xmlStr;
        toXml(xmlStr);
        return xmlStr.str();
}
}

namespace ns_xml
{
    // space
    space::space()
    :m_has_type(false)
    {
    }
    
    space::space(const space::Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
    }
    
    space::~space()
    {
        clear();
    }
    
    bool space::has_type() const
    {
        return m_has_type;
    }
    
    void space::set_type(const space::Type& _type)
    {
        m_has_type = true;
        m_type = _type;
    }
    
    const space::Type& space::get_type() const
    {
        return m_type;
    }
    
    std::string space::toString() const
    {
        return space::TypeStrList[m_type];
    }
    
    void space::clear()
    {
        m_has_type = false;
    }
    
    void space::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {
        if (m_has_type)
        {
            _outStream << " " << _attrName << "=\"" << toString() << "\"";
        }
    }
    
    const space& space::default_instance()
    {
        if (!space::default_instance_)
        {
            space::default_instance_ = new space();
        }
        return *space::default_instance_;
    }
    
    const std::string space::TypeStrList[] =
    {
        "default",
        "preserve"
    };
    space* space::default_instance_ = NULL;
}

namespace ns_xsdtype
{
    XML_Text::XML_Text()
    :m_has_value(false),
    m_value()
    {

    }

    XML_Text::~XML_Text()
    {

    }

    void XML_Text::clear()
    {

    }

    void XML_Text::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {
        _outStream << m_value;
    }

    const XML_Text& XML_Text::default_instance()
    {
        if (!XML_Text::default_instance_)
        {
            XML_Text::default_instance_ = new XML_Text();
        }
        return *XML_Text::default_instance_;
    }

    bool XML_Text::has_value() const
    {
        return m_has_value;
    }

    void XML_Text::set_value(const std::string& _value)
    {
        m_has_value = true;
        m_value = _value;
    }

    const std::string& XML_Text::get_value() const
    {
        return m_value;
    }

    XML_Text* XML_Text::default_instance_ = NULL;
}