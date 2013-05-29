namespace ns_ct {
class Element;
class Attribute;
class CT_Default;
class CT_Override;
class CT_Types;
class Types_element;
}
#ifndef __shared_contentTypes_xsd_
#define __shared_contentTypes_xsd_ 0

#include "xsdtype.h"
#include <vector>
#include <string>
#include <iostream>
namespace ns_ct {
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

class CT_Default: public XSD::ComplexType
{
public:
    CT_Default();
    ~CT_Default();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_Default& default_instance();
    bool has_Extension_attr() const;
    void set_Extension_attr(const XSD::string_& _Extension_attr);
    const XSD::string_& get_Extension_attr() const;
    bool has_ContentType_attr() const;
    void set_ContentType_attr(const XSD::string_& _ContentType_attr);
    const XSD::string_& get_ContentType_attr() const;
protected:
private:
    static CT_Default* default_instance_;
    bool m_has_Extension_attr;
    XSD::string_ m_Extension_attr;
    bool m_has_ContentType_attr;
    XSD::string_ m_ContentType_attr;
};

class CT_Override: public XSD::ComplexType
{
public:
    CT_Override();
    ~CT_Override();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_Override& default_instance();
    bool has_PartName_attr() const;
    void set_PartName_attr(const XSD::string_& _PartName_attr);
    const XSD::string_& get_PartName_attr() const;
    bool has_ContentType_attr() const;
    void set_ContentType_attr(const XSD::string_& _ContentType_attr);
    const XSD::string_& get_ContentType_attr() const;
protected:
private:
    static CT_Override* default_instance_;
    bool m_has_PartName_attr;
    XSD::string_ m_PartName_attr;
    bool m_has_ContentType_attr;
    XSD::string_ m_ContentType_attr;
};

class CT_Types: public XSD::ComplexType
{
public:
    CT_Types();
    ~CT_Types();
    CT_Default* add_Default();
    CT_Override* add_Override();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_Types& default_instance();
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_Default() const;
        CT_Default* mutable_Default();
        const CT_Default& get_Default() const;
        bool has_Override() const;
        CT_Override* mutable_Override();
        const CT_Override& get_Override() const;
    protected:
    private:
        bool m_has_Default;
        CT_Default* m_Default;
        bool m_has_Override;
        CT_Override* m_Override;
    };
    vector<ChildGroup_1*> m_childGroupList_1;
    static CT_Types* default_instance_;
};

class Types_element: public Element
{
public:
    Types_element();
    ~Types_element();
    CT_Default* add_Default();
    CT_Override* add_Override();
    void clear();
    void toXml(std::ostream& _outStream) const;
    static const Types_element& default_instance();
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_Default() const;
        CT_Default* mutable_Default();
        const CT_Default& get_Default() const;
        bool has_Override() const;
        CT_Override* mutable_Override();
        const CT_Override& get_Override() const;
    protected:
    private:
        bool m_has_Default;
        CT_Default* m_Default;
        bool m_has_Override;
        CT_Override* m_Override;
    };
    vector<ChildGroup_1*> m_childGroupList_1;
    static Types_element* default_instance_;
};

}
#endif