namespace ns_ac {
class Element;
class Attribute;
class ST_Relation;
class CT_AdditionalCharacteristics;
class CT_Characteristic;
class additionalCharacteristics_element;
}
#ifndef __shared_additionalCharacteristics_xsd_
#define __shared_additionalCharacteristics_xsd_ 0

#include "xsdtype.h"
#include <vector>
#include <string>
#include <iostream>
namespace ns_ac {
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

class ST_Relation: public XSD::SimpleType
{
public:
    enum  Type
    {
        _ge_ = 0,
        _le_,
        _gt_,
        _lt_,
        _eq_
    };
    ST_Relation();
    ST_Relation(const ST_Relation::Type& _value);
    ~ST_Relation();
    bool has_value() const;
    void set_value(const ST_Relation::Type& _value);
    const ST_Relation::Type& get_value() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_Relation& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_Relation* default_instance_;
    bool m_has_value;
    ST_Relation::Type m_value;
};

class CT_AdditionalCharacteristics: public XSD::ComplexType
{
public:
    CT_AdditionalCharacteristics();
    ~CT_AdditionalCharacteristics();
    CT_Characteristic* add_characteristic();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_AdditionalCharacteristics& default_instance();
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_characteristic() const;
        CT_Characteristic* mutable_characteristic();
        const CT_Characteristic& get_characteristic() const;
    protected:
    private:
        bool m_has_characteristic;
        CT_Characteristic* m_characteristic;
    };
    vector<ChildGroup_1*> m_childGroupList_1;
    static CT_AdditionalCharacteristics* default_instance_;
};

class CT_Characteristic: public XSD::ComplexType
{
public:
    CT_Characteristic();
    ~CT_Characteristic();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_Characteristic& default_instance();
    bool has_name_attr() const;
    void set_name_attr(const XSD::string_& _name_attr);
    const XSD::string_& get_name_attr() const;
    bool has_relation_attr() const;
    void set_relation_attr(const ST_Relation& _relation_attr);
    const ST_Relation& get_relation_attr() const;
    bool has_val_attr() const;
    void set_val_attr(const XSD::string_& _val_attr);
    const XSD::string_& get_val_attr() const;
    bool has_vocabulary_attr() const;
    void set_vocabulary_attr(const XSD::anyURI_& _vocabulary_attr);
    const XSD::anyURI_& get_vocabulary_attr() const;
protected:
private:
    static CT_Characteristic* default_instance_;
    bool m_has_name_attr;
    XSD::string_ m_name_attr;
    bool m_has_relation_attr;
    ST_Relation* m_relation_attr;
    bool m_has_val_attr;
    XSD::string_ m_val_attr;
    bool m_has_vocabulary_attr;
    XSD::anyURI_ m_vocabulary_attr;
};

class additionalCharacteristics_element: public Element
{
public:
    additionalCharacteristics_element();
    ~additionalCharacteristics_element();
    CT_Characteristic* add_characteristic();
    void clear();
    void toXml(std::ostream& _outStream) const;
    static const additionalCharacteristics_element& default_instance();
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_characteristic() const;
        CT_Characteristic* mutable_characteristic();
        const CT_Characteristic& get_characteristic() const;
    protected:
    private:
        bool m_has_characteristic;
        CT_Characteristic* m_characteristic;
    };
    vector<ChildGroup_1*> m_childGroupList_1;
    static additionalCharacteristics_element* default_instance_;
};

}
#endif