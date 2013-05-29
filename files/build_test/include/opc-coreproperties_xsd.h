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
    bool has_category() const;
    void set_category(const XSD::string_& _category);
    const XSD::string_& get_category() const;
    bool has_contentStatus() const;
    void set_contentStatus(const XSD::string_& _contentStatus);
    const XSD::string_& get_contentStatus() const;
    bool has_dcterms_created() const;
    ns_dcterms::SimpleLiteral* mutable_dcterms_created();
    const ns_dcterms::SimpleLiteral& get_dcterms_created() const;
    bool has_dc_creator() const;
    ns_dc::SimpleLiteral* mutable_dc_creator();
    const ns_dc::SimpleLiteral& get_dc_creator() const;
    bool has_dc_description() const;
    ns_dc::SimpleLiteral* mutable_dc_description();
    const ns_dc::SimpleLiteral& get_dc_description() const;
    bool has_dc_identifier() const;
    ns_dc::SimpleLiteral* mutable_dc_identifier();
    const ns_dc::SimpleLiteral& get_dc_identifier() const;
    bool has_keywords() const;
    CT_Keywords* mutable_keywords();
    const CT_Keywords& get_keywords() const;
    bool has_dc_language() const;
    ns_dc::SimpleLiteral* mutable_dc_language();
    const ns_dc::SimpleLiteral& get_dc_language() const;
    bool has_lastModifiedBy() const;
    void set_lastModifiedBy(const XSD::string_& _lastModifiedBy);
    const XSD::string_& get_lastModifiedBy() const;
    bool has_lastPrinted() const;
    void set_lastPrinted(const XSD::dateTime_& _lastPrinted);
    const XSD::dateTime_& get_lastPrinted() const;
    bool has_dcterms_modified() const;
    ns_dcterms::SimpleLiteral* mutable_dcterms_modified();
    const ns_dcterms::SimpleLiteral& get_dcterms_modified() const;
    bool has_revision() const;
    void set_revision(const XSD::string_& _revision);
    const XSD::string_& get_revision() const;
    bool has_dc_subject() const;
    ns_dc::SimpleLiteral* mutable_dc_subject();
    const ns_dc::SimpleLiteral& get_dc_subject() const;
    bool has_dc_title() const;
    ns_dc::SimpleLiteral* mutable_dc_title();
    const ns_dc::SimpleLiteral& get_dc_title() const;
    bool has_version() const;
    void set_version(const XSD::string_& _version);
    const XSD::string_& get_version() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_CoreProperties& default_instance();
protected:
private:
    bool m_has_category;
    XSD::string_ m_category;
    bool m_has_contentStatus;
    XSD::string_ m_contentStatus;
    bool m_has_dcterms_created;
    ns_dcterms::SimpleLiteral* m_dcterms_created;
    bool m_has_dc_creator;
    ns_dc::SimpleLiteral* m_dc_creator;
    bool m_has_dc_description;
    ns_dc::SimpleLiteral* m_dc_description;
    bool m_has_dc_identifier;
    ns_dc::SimpleLiteral* m_dc_identifier;
    bool m_has_keywords;
    CT_Keywords* m_keywords;
    bool m_has_dc_language;
    ns_dc::SimpleLiteral* m_dc_language;
    bool m_has_lastModifiedBy;
    XSD::string_ m_lastModifiedBy;
    bool m_has_lastPrinted;
    XSD::dateTime_ m_lastPrinted;
    bool m_has_dcterms_modified;
    ns_dcterms::SimpleLiteral* m_dcterms_modified;
    bool m_has_revision;
    XSD::string_ m_revision;
    bool m_has_dc_subject;
    ns_dc::SimpleLiteral* m_dc_subject;
    bool m_has_dc_title;
    ns_dc::SimpleLiteral* m_dc_title;
    bool m_has_version;
    XSD::string_ m_version;
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
    bool has_category() const;
    void set_category(const XSD::string_& _category);
    const XSD::string_& get_category() const;
    bool has_contentStatus() const;
    void set_contentStatus(const XSD::string_& _contentStatus);
    const XSD::string_& get_contentStatus() const;
    bool has_dcterms_created() const;
    ns_dcterms::SimpleLiteral* mutable_dcterms_created();
    const ns_dcterms::SimpleLiteral& get_dcterms_created() const;
    bool has_dc_creator() const;
    ns_dc::SimpleLiteral* mutable_dc_creator();
    const ns_dc::SimpleLiteral& get_dc_creator() const;
    bool has_dc_description() const;
    ns_dc::SimpleLiteral* mutable_dc_description();
    const ns_dc::SimpleLiteral& get_dc_description() const;
    bool has_dc_identifier() const;
    ns_dc::SimpleLiteral* mutable_dc_identifier();
    const ns_dc::SimpleLiteral& get_dc_identifier() const;
    bool has_keywords() const;
    CT_Keywords* mutable_keywords();
    const CT_Keywords& get_keywords() const;
    bool has_dc_language() const;
    ns_dc::SimpleLiteral* mutable_dc_language();
    const ns_dc::SimpleLiteral& get_dc_language() const;
    bool has_lastModifiedBy() const;
    void set_lastModifiedBy(const XSD::string_& _lastModifiedBy);
    const XSD::string_& get_lastModifiedBy() const;
    bool has_lastPrinted() const;
    void set_lastPrinted(const XSD::dateTime_& _lastPrinted);
    const XSD::dateTime_& get_lastPrinted() const;
    bool has_dcterms_modified() const;
    ns_dcterms::SimpleLiteral* mutable_dcterms_modified();
    const ns_dcterms::SimpleLiteral& get_dcterms_modified() const;
    bool has_revision() const;
    void set_revision(const XSD::string_& _revision);
    const XSD::string_& get_revision() const;
    bool has_dc_subject() const;
    ns_dc::SimpleLiteral* mutable_dc_subject();
    const ns_dc::SimpleLiteral& get_dc_subject() const;
    bool has_dc_title() const;
    ns_dc::SimpleLiteral* mutable_dc_title();
    const ns_dc::SimpleLiteral& get_dc_title() const;
    bool has_version() const;
    void set_version(const XSD::string_& _version);
    const XSD::string_& get_version() const;
    void clear();
    void toXml(std::ostream& _outStream) const;
    static const coreProperties_element& default_instance();
protected:
private:
    bool m_has_category;
    XSD::string_ m_category;
    bool m_has_contentStatus;
    XSD::string_ m_contentStatus;
    bool m_has_dcterms_created;
    ns_dcterms::SimpleLiteral* m_dcterms_created;
    bool m_has_dc_creator;
    ns_dc::SimpleLiteral* m_dc_creator;
    bool m_has_dc_description;
    ns_dc::SimpleLiteral* m_dc_description;
    bool m_has_dc_identifier;
    ns_dc::SimpleLiteral* m_dc_identifier;
    bool m_has_keywords;
    CT_Keywords* m_keywords;
    bool m_has_dc_language;
    ns_dc::SimpleLiteral* m_dc_language;
    bool m_has_lastModifiedBy;
    XSD::string_ m_lastModifiedBy;
    bool m_has_lastPrinted;
    XSD::dateTime_ m_lastPrinted;
    bool m_has_dcterms_modified;
    ns_dcterms::SimpleLiteral* m_dcterms_modified;
    bool m_has_revision;
    XSD::string_ m_revision;
    bool m_has_dc_subject;
    ns_dc::SimpleLiteral* m_dc_subject;
    bool m_has_dc_title;
    ns_dc::SimpleLiteral* m_dc_title;
    bool m_has_version;
    XSD::string_ m_version;
    static coreProperties_element* default_instance_;
};

}
#endif