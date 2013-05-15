#include "opc-coreproperties_xsd.h"
#include <stdlib.h>
#include <sstream>
#include <algorithm>
#include <functional>
#include <assert.h>
#include "dc_xsd.h"
#include "dcterms_xsd.h"
namespace ns_cp {
using namespace std;

// Element

// Attribute

// ST_String
ST_String::ST_String()
    :m_has_string(false),
     m_string("")
{
}
ST_String::ST_String(const XSD::string_& _string)
    :m_has_string(true)
{

    set_string(_string);
}
ST_String::~ST_String()
{
    clear();
}
bool ST_String::has_string() const
{
    return m_has_string;
}

void ST_String::set_string(const XSD::string_& _string)
{
    m_has_string = true;
    m_string = _string;
}

const XSD::string_& ST_String::get_string() const
{
    return m_string;
}

void ST_String::clear()
{
    m_has_string = false;
    m_string.clear();;
}

void ST_String::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_string)
    {
        _outStream << " " << _attrName << "=\"" << m_string << "\"";;
    }
}

const ST_String& ST_String::default_instance()
{
    if (!ST_String::default_instance_)
    {
        ST_String::default_instance_ = new ST_String();
    }
    return *ST_String::default_instance_;
}

std::string ST_String::toString() const
{
    std::stringstream strStream;
    strStream << get_string();
    return strStream.str();
}

ST_String* ST_String::default_instance_ = NULL;

// CT_CoreProperties
CT_CoreProperties::CT_CoreProperties()

{
}
CT_CoreProperties::~CT_CoreProperties()
{
    clear();
}
void CT_CoreProperties::clear()
{    }

void CT_CoreProperties::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_CoreProperties& CT_CoreProperties::default_instance()
{
    if (!CT_CoreProperties::default_instance_)
    {
        CT_CoreProperties::default_instance_ = new CT_CoreProperties();
    }
    return *CT_CoreProperties::default_instance_;
}

CT_CoreProperties* CT_CoreProperties::default_instance_ = NULL;

// CT_Keywords
CT_Keywords::CT_Keywords()
    :m_has__attr(false),
     m__attr("")
{
}
CT_Keywords::~CT_Keywords()
{
    clear();
}
CT_Keyword* CT_Keywords::add_value()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Keyword* pNewChild = pChildGroup->mutable_value();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

void CT_Keywords::clear()
{
    m_has__attr = false;
    m__attr.clear();

    {
        vector<ChildGroup_1*>::iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_1.clear();
    }
}

void CT_Keywords::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has__attr)
    {
        _outStream << " " << "" << "=\"" << m__attr << "\"";
    }

    _outStream << ">";

    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_value())
            {
                (*iter)->get_value().toXmlElem("cp:value", "", _outStream);
            }


        }
    }

    _outStream << "</" << _elemName << ">";
}

const CT_Keywords& CT_Keywords::default_instance()
{
    if (!CT_Keywords::default_instance_)
    {
        CT_Keywords::default_instance_ = new CT_Keywords();
    }
    return *CT_Keywords::default_instance_;
}

bool CT_Keywords::has__attr() const
{
    return m_has__attr;
}

void CT_Keywords::set__attr(const XSD::ENTITIES_& __attr)
{
    m_has__attr = true;
    m__attr = __attr;
}

const XSD::ENTITIES_& CT_Keywords::get__attr() const
{
    return m__attr;
}


// CT_Keywords::ChildGroup_1
CT_Keywords::ChildGroup_1::ChildGroup_1()
    :m_has_value(false),
     m_value(NULL)
{
}
bool CT_Keywords::ChildGroup_1::has_value() const
{
    return m_has_value;
}

CT_Keyword* CT_Keywords::ChildGroup_1::mutable_value()
{

    m_has_value = true;
    if (!m_value)
    {
        m_value = new CT_Keyword();
    }
    return m_value;
}

const CT_Keyword& CT_Keywords::ChildGroup_1::get_value() const
{
    if (m_value)
    {
        return *m_value;
    }
    return CT_Keyword::default_instance();
}

CT_Keywords* CT_Keywords::default_instance_ = NULL;

// CT_Keyword
CT_Keyword::CT_Keyword()
    :m_has__attr(false),
     m__attr("")
{
}
CT_Keyword::~CT_Keyword()
{
    clear();
}
void CT_Keyword::clear()
{
    m_has__attr = false;
    m__attr.clear();
    ST_String::clear();
}

void CT_Keyword::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has__attr)
    {
        _outStream << " " << "" << "=\"" << m__attr << "\"";
    }

    _outStream << ">";
    _outStream << toString();
    _outStream << "</" << _elemName << ">";
}

const CT_Keyword& CT_Keyword::default_instance()
{
    if (!CT_Keyword::default_instance_)
    {
        CT_Keyword::default_instance_ = new CT_Keyword();
    }
    return *CT_Keyword::default_instance_;
}

bool CT_Keyword::has__attr() const
{
    return m_has__attr;
}

void CT_Keyword::set__attr(const XSD::ENTITIES_& __attr)
{
    m_has__attr = true;
    m__attr = __attr;
}

const XSD::ENTITIES_& CT_Keyword::get__attr() const
{
    return m__attr;
}

CT_Keyword* CT_Keyword::default_instance_ = NULL;

// coreProperties_element
coreProperties_element::coreProperties_element()

{
}
coreProperties_element::~coreProperties_element()
{
    clear();
}
void coreProperties_element::clear()
{    }

void coreProperties_element::toXml(std::ostream& _outStream) const
{
    _outStream << "<cp:coreProperties";

    _outStream << " " << "xmlns:cp=\"http://schemas.openxmlformats.org/package/2006/metadata/core-properties\"";
    _outStream << " " << "xmlns:dcterms=\"http://purl.org/dc/terms/\"";
    _outStream << " " << "xmlns:dc=\"http://purl.org/dc/elements/1.1/\"";

    _outStream << ">";

    _outStream << "</cp:coreProperties>";
}

const coreProperties_element& coreProperties_element::default_instance()
{
    if (!coreProperties_element::default_instance_)
    {
        coreProperties_element::default_instance_ = new coreProperties_element();
    }
    return *coreProperties_element::default_instance_;
}

coreProperties_element* coreProperties_element::default_instance_ = NULL;
}