namespace ns_dcmitype {
class Element;
class Attribute;
class DCMIType;
}
#ifndef __dcmitype_xsd_
#define __dcmitype_xsd_ 0

#include "xsdtype.h"
#include <vector>
#include <string>
#include <iostream>
namespace ns_dcmitype {
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

class DCMIType: public XSD::SimpleType
{
public:
    DCMIType();
    DCMIType(const DCMIType& _DCMIType);
    ~DCMIType();
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const DCMIType& default_instance();
protected:
private:
    static DCMIType* default_instance_;
};

}
#endif