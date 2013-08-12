namespace ns_r {
class Element;
class Attribute;
class ST_RelationshipId;
class id_attr;
class embed_attr;
class link_attr;
class dm_attr;
class lo_attr;
class qs_attr;
class cs_attr;
class blip_attr;
class pict_attr;
class href_attr;
class topLeft_attr;
class topRight_attr;
class bottomLeft_attr;
class bottomRight_attr;
}
#ifndef __shared_relationshipReference_xsd_
#define __shared_relationshipReference_xsd_ 0

#include "xsdtype.h"
#include <vector>
#include <string>
#include <iostream>
namespace ns_r {
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

class ST_RelationshipId: public XSD::SimpleType
{
public:
    ST_RelationshipId();
    ST_RelationshipId(const XSD::string_& _value);
    ~ST_RelationshipId();
    bool has_value() const;
    void set_value(const XSD::string_& _value);
    const XSD::string_& get_value() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_RelationshipId& default_instance();
    std::string toString() const;
protected:
private:
    static ST_RelationshipId* default_instance_;
    bool m_has_value;
    XSD::string_ m_value;
};

class id_attr: public Attribute
{
public:
    void toXml(std::ostream& _outStream) const;
protected:
private:
};

class embed_attr: public Attribute
{
public:
    void toXml(std::ostream& _outStream) const;
protected:
private:
};

class link_attr: public Attribute
{
public:
    void toXml(std::ostream& _outStream) const;
protected:
private:
};

class dm_attr: public Attribute
{
public:
    void toXml(std::ostream& _outStream) const;
protected:
private:
};

class lo_attr: public Attribute
{
public:
    void toXml(std::ostream& _outStream) const;
protected:
private:
};

class qs_attr: public Attribute
{
public:
    void toXml(std::ostream& _outStream) const;
protected:
private:
};

class cs_attr: public Attribute
{
public:
    void toXml(std::ostream& _outStream) const;
protected:
private:
};

class blip_attr: public Attribute
{
public:
    void toXml(std::ostream& _outStream) const;
protected:
private:
};

class pict_attr: public Attribute
{
public:
    void toXml(std::ostream& _outStream) const;
protected:
private:
};

class href_attr: public Attribute
{
public:
    void toXml(std::ostream& _outStream) const;
protected:
private:
};

class topLeft_attr: public Attribute
{
public:
    void toXml(std::ostream& _outStream) const;
protected:
private:
};

class topRight_attr: public Attribute
{
public:
    void toXml(std::ostream& _outStream) const;
protected:
private:
};

class bottomLeft_attr: public Attribute
{
public:
    void toXml(std::ostream& _outStream) const;
protected:
private:
};

class bottomRight_attr: public Attribute
{
public:
    void toXml(std::ostream& _outStream) const;
protected:
private:
};

}
#endif