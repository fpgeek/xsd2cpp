namespace ns_rs {
class Element;
class Attribute;
class CT_Relationship;
class CT_Relationships;
class Relationships_element;
}
#ifndef __shared_relationships_xsd_
#define __shared_relationships_xsd_ 0

#include "xsdtype.h"
#include <vector>
#include <string>
#include <iostream>
namespace ns_rs {
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

class CT_Relationship: public XSD::ComplexType
{
public:
    CT_Relationship();
    ~CT_Relationship();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_Relationship& default_instance();
    bool has_Id_attr() const;
    void set_Id_attr(const XSD::string_& _Id_attr);
    const XSD::string_& get_Id_attr() const;
    bool has_Type_attr() const;
    void set_Type_attr(const XSD::string_& _Type_attr);
    const XSD::string_& get_Type_attr() const;
    bool has_Target_attr() const;
    void set_Target_attr(const XSD::string_& _Target_attr);
    const XSD::string_& get_Target_attr() const;
    bool has_TargetMode_attr() const;
    void set_TargetMode_attr(const XSD::string_& _TargetMode_attr);
    const XSD::string_& get_TargetMode_attr() const;
protected:
private:
    static CT_Relationship* default_instance_;
    bool m_has_Id_attr;
    XSD::string_ m_Id_attr;
    bool m_has_Type_attr;
    XSD::string_ m_Type_attr;
    bool m_has_Target_attr;
    XSD::string_ m_Target_attr;
    bool m_has_TargetMode_attr;
    XSD::string_ m_TargetMode_attr;
};

class CT_Relationships: public XSD::ComplexType
{
public:
    CT_Relationships();
    ~CT_Relationships();
    CT_Relationship* add_Relationship();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_Relationships& default_instance();
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_Relationship() const;
        CT_Relationship* mutable_Relationship();
        const CT_Relationship& get_Relationship() const;
    protected:
    private:
        bool m_has_Relationship;
        CT_Relationship* m_Relationship;
    };
    vector<ChildGroup_1*> m_childGroupList_1;
    static CT_Relationships* default_instance_;
};

class Relationships_element: public Element
{
public:
    Relationships_element();
    ~Relationships_element();
    CT_Relationship* add_Relationship();
    void clear();
    void toXml(std::ostream& _outStream) const;
    static const Relationships_element& default_instance();
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_Relationship() const;
        CT_Relationship* mutable_Relationship();
        const CT_Relationship& get_Relationship() const;
    protected:
    private:
        bool m_has_Relationship;
        CT_Relationship* m_Relationship;
    };
    vector<ChildGroup_1*> m_childGroupList_1;
    static Relationships_element* default_instance_;
};

}
#endif