namespace ns_cp {
class Element;
class Attribute;
class ST_String;
class CT_CoreProperties;
class CT_Keywords;
class CT_Keyword;
class coreProperties_element;
}
#ifndef __opc_coreproperties_xsd_
#define __opc_coreproperties_xsd_ 0

#include "xsdtype.h"
#include <vector>
#include <string>
#include <iostream>
#include "dc_xsd.h"
#include "dcterms_xsd.h"
namespace ns_cp {
using namespace std;
class Element: public XSD::Element
{
public:
protected:
private:
};

class Attribute: public XSD::Attribute
{
public:
protected:
private:
};

class ST_String: public XSD::SimpleType
{
public:
    ST_String();
    ST_String(const XSD::string_& _string);
    ~ST_String();
    bool has_string() const;
    void set_string(const XSD::string_& _string);
    const XSD::string_& get_string() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_String& default_instance();
    std::string toString() const;
protected:
private:
    static ST_String* default_instance_;
    bool m_has_string;
    XSD::string_ m_string;
};

class CT_CoreProperties: public XSD::ComplexType
{
public:
    CT_CoreProperties();
    ~CT_CoreProperties();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_CoreProperties& default_instance();
protected:
private:
    static CT_CoreProperties* default_instance_;
};

class CT_Keywords: public XSD::ComplexType
{
public:
    CT_Keywords();
    ~CT_Keywords();
    CT_Keyword* add_value();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_Keywords& default_instance();
    bool has__attr() const;
    void set__attr(const XSD::ENTITIES_& __attr);
    const XSD::ENTITIES_& get__attr() const;
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_value() const;
        CT_Keyword* mutable_value();
        const CT_Keyword& get_value() const;
    protected:
    private:
        bool m_has_value;
        CT_Keyword* m_value;
    };
    vector<ChildGroup_1*> m_childGroupList_1;
    static CT_Keywords* default_instance_;
    bool m_has__attr;
    XSD::ENTITIES_ m__attr;
};

class CT_Keyword: public XSD::ComplexType, public ST_String
{
public:
    CT_Keyword();
    ~CT_Keyword();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_Keyword& default_instance();
    bool has__attr() const;
    void set__attr(const XSD::ENTITIES_& __attr);
    const XSD::ENTITIES_& get__attr() const;
protected:
private:
    static CT_Keyword* default_instance_;
    bool m_has__attr;
    XSD::ENTITIES_ m__attr;
};

class coreProperties_element: public Element
{
public:
    coreProperties_element();
    ~coreProperties_element();
    void clear();
    void toXml(std::ostream& _outStream) const;
    static const coreProperties_element& default_instance();
protected:
private:
    static coreProperties_element* default_instance_;
};

}
#endif