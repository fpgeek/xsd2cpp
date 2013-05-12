namespace ns_ep {
class Element;
class Attribute;
class CT_Properties;
class CT_VectorVariant;
class CT_VectorLpstr;
class CT_DigSigBlob;
class Properties_element;
}
#ifndef __shared_documentPropertiesExtended_xsd_
#define __shared_documentPropertiesExtended_xsd_ 0

#include "xsdtype.h"
#include <vector>
#include <string>
#include <iostream>
#include "shared-documentPropertiesVariantTypes_xsd.h"
namespace ns_ep {
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

class CT_Properties: public XSD::ComplexType
{
public:
    CT_Properties();
    ~CT_Properties();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_Properties& default_instance();
protected:
private:
    static CT_Properties* default_instance_;
};

class CT_VectorVariant: public XSD::ComplexType
{
public:
    CT_VectorVariant();
    ~CT_VectorVariant();
    bool has_vt_vector() const;
    ns_vt::CT_Vector* mutable_vt_vector();
    const ns_vt::CT_Vector& get_vt_vector() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_VectorVariant& default_instance();
protected:
private:
    bool m_has_vt_vector;
    ns_vt::CT_Vector* m_vt_vector;
    static CT_VectorVariant* default_instance_;
};

class CT_VectorLpstr: public XSD::ComplexType
{
public:
    CT_VectorLpstr();
    ~CT_VectorLpstr();
    bool has_vt_vector() const;
    ns_vt::CT_Vector* mutable_vt_vector();
    const ns_vt::CT_Vector& get_vt_vector() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_VectorLpstr& default_instance();
protected:
private:
    bool m_has_vt_vector;
    ns_vt::CT_Vector* m_vt_vector;
    static CT_VectorLpstr* default_instance_;
};

class CT_DigSigBlob: public XSD::ComplexType
{
public:
    CT_DigSigBlob();
    ~CT_DigSigBlob();
    bool has_vt_blob() const;
    void set_vt_blob(const XSD::base64Binary_& _vt_blob);
    const XSD::base64Binary_& get_vt_blob() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_DigSigBlob& default_instance();
protected:
private:
    bool m_has_vt_blob;
    XSD::base64Binary_ m_vt_blob;
    static CT_DigSigBlob* default_instance_;
};

class Properties_element: public Element
{
public:
    Properties_element();
    ~Properties_element();
    void clear();
    void toXml(std::ostream& _outStream) const;
    static const Properties_element& default_instance();
protected:
private:
    static Properties_element* default_instance_;
};

}
#endif