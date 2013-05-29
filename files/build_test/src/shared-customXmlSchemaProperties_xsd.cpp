#include "shared-customXmlSchemaProperties_xsd.h"
#include <stdlib.h>
#include <sstream>
#include <algorithm>
#include <functional>
#include <assert.h>
namespace ns_sl {
 using namespace std;

    // Element

    // Attribute

    // CT_Schema
    CT_Schema::CT_Schema()
    :m_has_uri_attr(false),
    m_uri_attr(""),
    m_has_manifestLocation_attr(false),
    m_manifestLocation_attr(""),
    m_has_schemaLocation_attr(false),
    m_schemaLocation_attr(""),
    m_has_schemaLanguage_attr(false),
    m_schemaLanguage_attr("")
    {
    }
    CT_Schema::~CT_Schema()
{
    clear();    }
    void CT_Schema::clear()
    {    
    m_has_uri_attr = false;
    m_uri_attr.clear();
    
    m_has_manifestLocation_attr = false;
    m_manifestLocation_attr.clear();
    
    m_has_schemaLocation_attr = false;
    m_schemaLocation_attr.clear();
    
    m_has_schemaLanguage_attr = false;
    m_schemaLanguage_attr.clear();
    }

    void CT_Schema::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
    
    if (m_has_uri_attr)
    {
        _outStream << " " << "sl:uri" << "=\"" << m_uri_attr << "\"";
    }
    
    
    
    if (m_has_manifestLocation_attr)
    {
        _outStream << " " << "sl:manifestLocation" << "=\"" << m_manifestLocation_attr << "\"";
    }
    
    
    
    if (m_has_schemaLocation_attr)
    {
        _outStream << " " << "sl:schemaLocation" << "=\"" << m_schemaLocation_attr << "\"";
    }
    
    
    
    if (m_has_schemaLanguage_attr)
    {
        _outStream << " " << "sl:schemaLanguage" << "=\"" << m_schemaLanguage_attr << "\"";
    }
    
            _outStream << ">";
            
            _outStream << "</" << _elemName << ">";
                }

    const CT_Schema& CT_Schema::default_instance()
    {    
    if (!CT_Schema::default_instance_)
    {
        CT_Schema::default_instance_ = new CT_Schema();
    }
    return *CT_Schema::default_instance_;
    }

    bool CT_Schema::has_uri_attr() const
    {    
    return m_has_uri_attr;
    }

    void CT_Schema::set_uri_attr(const XSD::string_& _uri_attr)
    {    
    m_has_uri_attr = true;
    m_uri_attr = _uri_attr;
    }

    const XSD::string_& CT_Schema::get_uri_attr() const
    {    
    return m_uri_attr;
    }

    bool CT_Schema::has_manifestLocation_attr() const
    {    
    return m_has_manifestLocation_attr;
    }

    void CT_Schema::set_manifestLocation_attr(const XSD::string_& _manifestLocation_attr)
    {    
    m_has_manifestLocation_attr = true;
    m_manifestLocation_attr = _manifestLocation_attr;
    }

    const XSD::string_& CT_Schema::get_manifestLocation_attr() const
    {    
    return m_manifestLocation_attr;
    }

    bool CT_Schema::has_schemaLocation_attr() const
    {    
    return m_has_schemaLocation_attr;
    }

    void CT_Schema::set_schemaLocation_attr(const XSD::string_& _schemaLocation_attr)
    {    
    m_has_schemaLocation_attr = true;
    m_schemaLocation_attr = _schemaLocation_attr;
    }

    const XSD::string_& CT_Schema::get_schemaLocation_attr() const
    {    
    return m_schemaLocation_attr;
    }

    bool CT_Schema::has_schemaLanguage_attr() const
    {    
    return m_has_schemaLanguage_attr;
    }

    void CT_Schema::set_schemaLanguage_attr(const XSD::token_& _schemaLanguage_attr)
    {    
    m_has_schemaLanguage_attr = true;
    m_schemaLanguage_attr = _schemaLanguage_attr;
    }

    const XSD::token_& CT_Schema::get_schemaLanguage_attr() const
    {    
    return m_schemaLanguage_attr;
    }

CT_Schema* CT_Schema::default_instance_ = NULL;

    // CT_SchemaLibrary
    CT_SchemaLibrary::CT_SchemaLibrary()

    {
    }
    CT_SchemaLibrary::~CT_SchemaLibrary()
{
    clear();    }
    CT_Schema* CT_SchemaLibrary::add_schema()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Schema* pNewChild = pChildGroup->mutable_schema();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    void CT_SchemaLibrary::clear()
    {    
    {
        vector<ChildGroup_1*>::iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_1.clear();
    }
    }

    void CT_SchemaLibrary::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
            _outStream << ">";
            
    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
    if ((*iter)->has_schema())
    {
        (*iter)->get_schema().toXmlElem("sl:schema", "", _outStream);
    }
    
    
        }
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_SchemaLibrary& CT_SchemaLibrary::default_instance()
    {    
    if (!CT_SchemaLibrary::default_instance_)
    {
        CT_SchemaLibrary::default_instance_ = new CT_SchemaLibrary();
    }
    return *CT_SchemaLibrary::default_instance_;
    }


    // CT_SchemaLibrary::ChildGroup_1
    CT_SchemaLibrary::ChildGroup_1::ChildGroup_1()
    :m_has_schema(false),
    m_schema(NULL)
    {
    }
    bool CT_SchemaLibrary::ChildGroup_1::has_schema() const
    {    
    return m_has_schema;
    }

    CT_Schema* CT_SchemaLibrary::ChildGroup_1::mutable_schema()
    {    
    
    m_has_schema = true;
    if (!m_schema)
    {
        m_schema = new CT_Schema();
    }
    return m_schema;
    }

    const CT_Schema& CT_SchemaLibrary::ChildGroup_1::get_schema() const
    {    
    if (m_schema)
    {
        return *m_schema;
    }
    return CT_Schema::default_instance();
    }

CT_SchemaLibrary* CT_SchemaLibrary::default_instance_ = NULL;

    // schemaLibrary_element
    schemaLibrary_element::schemaLibrary_element()

    {
    }
    schemaLibrary_element::~schemaLibrary_element()
{
    clear();    }
    CT_Schema* schemaLibrary_element::add_schema()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Schema* pNewChild = pChildGroup->mutable_schema();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    void schemaLibrary_element::clear()
    {    
    {
        vector<ChildGroup_1*>::iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_1.clear();
    }
    }

    void schemaLibrary_element::toXml(std::ostream& _outStream) const
    {    
    _outStream << "<sl:schemaLibrary";
    
    _outStream << " " << "xmlns:sl=\"http://schemas.openxmlformats.org/schemaLibrary/2006/main\"";
    
    _outStream << ">";
    
    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
    if ((*iter)->has_schema())
    {
        (*iter)->get_schema().toXmlElem("sl:schema", "", _outStream);
    }
    
    
        }
    }
    
    _outStream << "</sl:schemaLibrary>";
    }

    const schemaLibrary_element& schemaLibrary_element::default_instance()
    {    
    if (!schemaLibrary_element::default_instance_)
    {
        schemaLibrary_element::default_instance_ = new schemaLibrary_element();
    }
    return *schemaLibrary_element::default_instance_;
    }


    // schemaLibrary_element::ChildGroup_1
    schemaLibrary_element::ChildGroup_1::ChildGroup_1()
    :m_has_schema(false),
    m_schema(NULL)
    {
    }
    bool schemaLibrary_element::ChildGroup_1::has_schema() const
    {    
    return m_has_schema;
    }

    CT_Schema* schemaLibrary_element::ChildGroup_1::mutable_schema()
    {    
    
    m_has_schema = true;
    if (!m_schema)
    {
        m_schema = new CT_Schema();
    }
    return m_schema;
    }

    const CT_Schema& schemaLibrary_element::ChildGroup_1::get_schema() const
    {    
    if (m_schema)
    {
        return *m_schema;
    }
    return CT_Schema::default_instance();
    }

schemaLibrary_element* schemaLibrary_element::default_instance_ = NULL;
}