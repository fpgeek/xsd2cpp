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
    :m_has_category(false),
     m_category(""),
     m_has_contentStatus(false),
     m_contentStatus(""),
     m_has_dcterms_created(false),
     m_dcterms_created(NULL),
     m_has_dc_creator(false),
     m_dc_creator(NULL),
     m_has_dc_description(false),
     m_dc_description(NULL),
     m_has_dc_identifier(false),
     m_dc_identifier(NULL),
     m_has_keywords(false),
     m_keywords(NULL),
     m_has_dc_language(false),
     m_dc_language(NULL),
     m_has_lastModifiedBy(false),
     m_lastModifiedBy(""),
     m_has_lastPrinted(false),
     m_lastPrinted(""),
     m_has_dcterms_modified(false),
     m_dcterms_modified(NULL),
     m_has_revision(false),
     m_revision(""),
     m_has_dc_subject(false),
     m_dc_subject(NULL),
     m_has_dc_title(false),
     m_dc_title(NULL),
     m_has_version(false),
     m_version("")
{
}
CT_CoreProperties::~CT_CoreProperties()
{
    clear();
}
bool CT_CoreProperties::has_category() const
{
    return m_has_category;
}

void CT_CoreProperties::set_category(const XSD::string_& _category)
{
    m_has_category = true;
    m_category = _category;
}

const XSD::string_& CT_CoreProperties::get_category() const
{
    return m_category;
}

bool CT_CoreProperties::has_contentStatus() const
{
    return m_has_contentStatus;
}

void CT_CoreProperties::set_contentStatus(const XSD::string_& _contentStatus)
{
    m_has_contentStatus = true;
    m_contentStatus = _contentStatus;
}

const XSD::string_& CT_CoreProperties::get_contentStatus() const
{
    return m_contentStatus;
}

bool CT_CoreProperties::has_dcterms_created() const
{
    return m_has_dcterms_created;
}

ns_dcterms::SimpleLiteral* CT_CoreProperties::mutable_dcterms_created()
{
    m_has_dcterms_created = true;
    if (!m_dcterms_created)
    {
        m_dcterms_created = new ns_dcterms::SimpleLiteral();
    }
    return m_dcterms_created;
}

const ns_dcterms::SimpleLiteral& CT_CoreProperties::get_dcterms_created() const
{
    if (m_dcterms_created)
    {
        return *m_dcterms_created;
    }
    return ns_dcterms::SimpleLiteral::default_instance();
}

bool CT_CoreProperties::has_dc_creator() const
{
    return m_has_dc_creator;
}

ns_dc::SimpleLiteral* CT_CoreProperties::mutable_dc_creator()
{
    m_has_dc_creator = true;
    if (!m_dc_creator)
    {
        m_dc_creator = new ns_dc::SimpleLiteral();
    }
    return m_dc_creator;
}

const ns_dc::SimpleLiteral& CT_CoreProperties::get_dc_creator() const
{
    if (m_dc_creator)
    {
        return *m_dc_creator;
    }
    return ns_dc::SimpleLiteral::default_instance();
}

bool CT_CoreProperties::has_dc_description() const
{
    return m_has_dc_description;
}

ns_dc::SimpleLiteral* CT_CoreProperties::mutable_dc_description()
{
    m_has_dc_description = true;
    if (!m_dc_description)
    {
        m_dc_description = new ns_dc::SimpleLiteral();
    }
    return m_dc_description;
}

const ns_dc::SimpleLiteral& CT_CoreProperties::get_dc_description() const
{
    if (m_dc_description)
    {
        return *m_dc_description;
    }
    return ns_dc::SimpleLiteral::default_instance();
}

bool CT_CoreProperties::has_dc_identifier() const
{
    return m_has_dc_identifier;
}

ns_dc::SimpleLiteral* CT_CoreProperties::mutable_dc_identifier()
{
    m_has_dc_identifier = true;
    if (!m_dc_identifier)
    {
        m_dc_identifier = new ns_dc::SimpleLiteral();
    }
    return m_dc_identifier;
}

const ns_dc::SimpleLiteral& CT_CoreProperties::get_dc_identifier() const
{
    if (m_dc_identifier)
    {
        return *m_dc_identifier;
    }
    return ns_dc::SimpleLiteral::default_instance();
}

bool CT_CoreProperties::has_keywords() const
{
    return m_has_keywords;
}

CT_Keywords* CT_CoreProperties::mutable_keywords()
{
    m_has_keywords = true;
    if (!m_keywords)
    {
        m_keywords = new CT_Keywords();
    }
    return m_keywords;
}

const CT_Keywords& CT_CoreProperties::get_keywords() const
{
    if (m_keywords)
    {
        return *m_keywords;
    }
    return CT_Keywords::default_instance();
}

bool CT_CoreProperties::has_dc_language() const
{
    return m_has_dc_language;
}

ns_dc::SimpleLiteral* CT_CoreProperties::mutable_dc_language()
{
    m_has_dc_language = true;
    if (!m_dc_language)
    {
        m_dc_language = new ns_dc::SimpleLiteral();
    }
    return m_dc_language;
}

const ns_dc::SimpleLiteral& CT_CoreProperties::get_dc_language() const
{
    if (m_dc_language)
    {
        return *m_dc_language;
    }
    return ns_dc::SimpleLiteral::default_instance();
}

bool CT_CoreProperties::has_lastModifiedBy() const
{
    return m_has_lastModifiedBy;
}

void CT_CoreProperties::set_lastModifiedBy(const XSD::string_& _lastModifiedBy)
{
    m_has_lastModifiedBy = true;
    m_lastModifiedBy = _lastModifiedBy;
}

const XSD::string_& CT_CoreProperties::get_lastModifiedBy() const
{
    return m_lastModifiedBy;
}

bool CT_CoreProperties::has_lastPrinted() const
{
    return m_has_lastPrinted;
}

void CT_CoreProperties::set_lastPrinted(const XSD::dateTime_& _lastPrinted)
{
    m_has_lastPrinted = true;
    m_lastPrinted = _lastPrinted;
}

const XSD::dateTime_& CT_CoreProperties::get_lastPrinted() const
{
    return m_lastPrinted;
}

bool CT_CoreProperties::has_dcterms_modified() const
{
    return m_has_dcterms_modified;
}

ns_dcterms::SimpleLiteral* CT_CoreProperties::mutable_dcterms_modified()
{
    m_has_dcterms_modified = true;
    if (!m_dcterms_modified)
    {
        m_dcterms_modified = new ns_dcterms::SimpleLiteral();
    }
    return m_dcterms_modified;
}

const ns_dcterms::SimpleLiteral& CT_CoreProperties::get_dcterms_modified() const
{
    if (m_dcterms_modified)
    {
        return *m_dcterms_modified;
    }
    return ns_dcterms::SimpleLiteral::default_instance();
}

bool CT_CoreProperties::has_revision() const
{
    return m_has_revision;
}

void CT_CoreProperties::set_revision(const XSD::string_& _revision)
{
    m_has_revision = true;
    m_revision = _revision;
}

const XSD::string_& CT_CoreProperties::get_revision() const
{
    return m_revision;
}

bool CT_CoreProperties::has_dc_subject() const
{
    return m_has_dc_subject;
}

ns_dc::SimpleLiteral* CT_CoreProperties::mutable_dc_subject()
{
    m_has_dc_subject = true;
    if (!m_dc_subject)
    {
        m_dc_subject = new ns_dc::SimpleLiteral();
    }
    return m_dc_subject;
}

const ns_dc::SimpleLiteral& CT_CoreProperties::get_dc_subject() const
{
    if (m_dc_subject)
    {
        return *m_dc_subject;
    }
    return ns_dc::SimpleLiteral::default_instance();
}

bool CT_CoreProperties::has_dc_title() const
{
    return m_has_dc_title;
}

ns_dc::SimpleLiteral* CT_CoreProperties::mutable_dc_title()
{
    m_has_dc_title = true;
    if (!m_dc_title)
    {
        m_dc_title = new ns_dc::SimpleLiteral();
    }
    return m_dc_title;
}

const ns_dc::SimpleLiteral& CT_CoreProperties::get_dc_title() const
{
    if (m_dc_title)
    {
        return *m_dc_title;
    }
    return ns_dc::SimpleLiteral::default_instance();
}

bool CT_CoreProperties::has_version() const
{
    return m_has_version;
}

void CT_CoreProperties::set_version(const XSD::string_& _version)
{
    m_has_version = true;
    m_version = _version;
}

const XSD::string_& CT_CoreProperties::get_version() const
{
    return m_version;
}

void CT_CoreProperties::clear()
{
    m_has_category = false;
    m_category.clear();

    m_has_contentStatus = false;
    m_contentStatus.clear();

    m_has_dcterms_created = false;

    if (m_dcterms_created)
    {
        delete m_dcterms_created;
        m_dcterms_created = NULL;
    }


    m_has_dc_creator = false;

    if (m_dc_creator)
    {
        delete m_dc_creator;
        m_dc_creator = NULL;
    }


    m_has_dc_description = false;

    if (m_dc_description)
    {
        delete m_dc_description;
        m_dc_description = NULL;
    }


    m_has_dc_identifier = false;

    if (m_dc_identifier)
    {
        delete m_dc_identifier;
        m_dc_identifier = NULL;
    }


    m_has_keywords = false;

    if (m_keywords)
    {
        delete m_keywords;
        m_keywords = NULL;
    }


    m_has_dc_language = false;

    if (m_dc_language)
    {
        delete m_dc_language;
        m_dc_language = NULL;
    }


    m_has_lastModifiedBy = false;
    m_lastModifiedBy.clear();

    m_has_lastPrinted = false;
    m_lastPrinted.clear();

    m_has_dcterms_modified = false;

    if (m_dcterms_modified)
    {
        delete m_dcterms_modified;
        m_dcterms_modified = NULL;
    }


    m_has_revision = false;
    m_revision.clear();

    m_has_dc_subject = false;

    if (m_dc_subject)
    {
        delete m_dc_subject;
        m_dc_subject = NULL;
    }


    m_has_dc_title = false;

    if (m_dc_title)
    {
        delete m_dc_title;
        m_dc_title = NULL;
    }


    m_has_version = false;
    m_version.clear();
}

void CT_CoreProperties::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";


    if (m_has_category)
    {
        _outStream << "<cp:category>" << m_category << "</cp:category>";
    }


    if (m_has_contentStatus)
    {
        _outStream << "<cp:contentStatus>" << m_contentStatus << "</cp:contentStatus>";
    }


    if (m_has_dcterms_created)
    {
        m_dcterms_created->toXmlElem("dcterms:created", "", _outStream);
    }


    if (m_has_dc_creator)
    {
        m_dc_creator->toXmlElem("dc:creator", "", _outStream);
    }


    if (m_has_dc_description)
    {
        m_dc_description->toXmlElem("dc:description", "", _outStream);
    }


    if (m_has_dc_identifier)
    {
        m_dc_identifier->toXmlElem("dc:identifier", "", _outStream);
    }


    if (m_has_keywords)
    {
        m_keywords->toXmlElem("cp:keywords", "", _outStream);
    }


    if (m_has_dc_language)
    {
        m_dc_language->toXmlElem("dc:language", "", _outStream);
    }


    if (m_has_lastModifiedBy)
    {
        _outStream << "<cp:lastModifiedBy>" << m_lastModifiedBy << "</cp:lastModifiedBy>";
    }


    if (m_has_lastPrinted)
    {
        _outStream << "<cp:lastPrinted>" << m_lastPrinted << "</cp:lastPrinted>";
    }


    if (m_has_dcterms_modified)
    {
        m_dcterms_modified->toXmlElem("dcterms:modified", "", _outStream);
    }


    if (m_has_revision)
    {
        _outStream << "<cp:revision>" << m_revision << "</cp:revision>";
    }


    if (m_has_dc_subject)
    {
        m_dc_subject->toXmlElem("dc:subject", "", _outStream);
    }


    if (m_has_dc_title)
    {
        m_dc_title->toXmlElem("dc:title", "", _outStream);
    }


    if (m_has_version)
    {
        _outStream << "<cp:version>" << m_version << "</cp:version>";
    }

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
        const size_t childSize = m_childGroupList_1.size();
        assert(1 <= childSize && childSize <= 1);
    }

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
    :m_has_category(false),
     m_category(""),
     m_has_contentStatus(false),
     m_contentStatus(""),
     m_has_dcterms_created(false),
     m_dcterms_created(NULL),
     m_has_dc_creator(false),
     m_dc_creator(NULL),
     m_has_dc_description(false),
     m_dc_description(NULL),
     m_has_dc_identifier(false),
     m_dc_identifier(NULL),
     m_has_keywords(false),
     m_keywords(NULL),
     m_has_dc_language(false),
     m_dc_language(NULL),
     m_has_lastModifiedBy(false),
     m_lastModifiedBy(""),
     m_has_lastPrinted(false),
     m_lastPrinted(""),
     m_has_dcterms_modified(false),
     m_dcterms_modified(NULL),
     m_has_revision(false),
     m_revision(""),
     m_has_dc_subject(false),
     m_dc_subject(NULL),
     m_has_dc_title(false),
     m_dc_title(NULL),
     m_has_version(false),
     m_version("")
{
}
coreProperties_element::~coreProperties_element()
{
    clear();
}
bool coreProperties_element::has_category() const
{
    return m_has_category;
}

void coreProperties_element::set_category(const XSD::string_& _category)
{
    m_has_category = true;
    m_category = _category;
}

const XSD::string_& coreProperties_element::get_category() const
{
    return m_category;
}

bool coreProperties_element::has_contentStatus() const
{
    return m_has_contentStatus;
}

void coreProperties_element::set_contentStatus(const XSD::string_& _contentStatus)
{
    m_has_contentStatus = true;
    m_contentStatus = _contentStatus;
}

const XSD::string_& coreProperties_element::get_contentStatus() const
{
    return m_contentStatus;
}

bool coreProperties_element::has_dcterms_created() const
{
    return m_has_dcterms_created;
}

ns_dcterms::SimpleLiteral* coreProperties_element::mutable_dcterms_created()
{
    m_has_dcterms_created = true;
    if (!m_dcterms_created)
    {
        m_dcterms_created = new ns_dcterms::SimpleLiteral();
    }
    return m_dcterms_created;
}

const ns_dcterms::SimpleLiteral& coreProperties_element::get_dcterms_created() const
{
    if (m_dcterms_created)
    {
        return *m_dcterms_created;
    }
    return ns_dcterms::SimpleLiteral::default_instance();
}

bool coreProperties_element::has_dc_creator() const
{
    return m_has_dc_creator;
}

ns_dc::SimpleLiteral* coreProperties_element::mutable_dc_creator()
{
    m_has_dc_creator = true;
    if (!m_dc_creator)
    {
        m_dc_creator = new ns_dc::SimpleLiteral();
    }
    return m_dc_creator;
}

const ns_dc::SimpleLiteral& coreProperties_element::get_dc_creator() const
{
    if (m_dc_creator)
    {
        return *m_dc_creator;
    }
    return ns_dc::SimpleLiteral::default_instance();
}

bool coreProperties_element::has_dc_description() const
{
    return m_has_dc_description;
}

ns_dc::SimpleLiteral* coreProperties_element::mutable_dc_description()
{
    m_has_dc_description = true;
    if (!m_dc_description)
    {
        m_dc_description = new ns_dc::SimpleLiteral();
    }
    return m_dc_description;
}

const ns_dc::SimpleLiteral& coreProperties_element::get_dc_description() const
{
    if (m_dc_description)
    {
        return *m_dc_description;
    }
    return ns_dc::SimpleLiteral::default_instance();
}

bool coreProperties_element::has_dc_identifier() const
{
    return m_has_dc_identifier;
}

ns_dc::SimpleLiteral* coreProperties_element::mutable_dc_identifier()
{
    m_has_dc_identifier = true;
    if (!m_dc_identifier)
    {
        m_dc_identifier = new ns_dc::SimpleLiteral();
    }
    return m_dc_identifier;
}

const ns_dc::SimpleLiteral& coreProperties_element::get_dc_identifier() const
{
    if (m_dc_identifier)
    {
        return *m_dc_identifier;
    }
    return ns_dc::SimpleLiteral::default_instance();
}

bool coreProperties_element::has_keywords() const
{
    return m_has_keywords;
}

CT_Keywords* coreProperties_element::mutable_keywords()
{
    m_has_keywords = true;
    if (!m_keywords)
    {
        m_keywords = new CT_Keywords();
    }
    return m_keywords;
}

const CT_Keywords& coreProperties_element::get_keywords() const
{
    if (m_keywords)
    {
        return *m_keywords;
    }
    return CT_Keywords::default_instance();
}

bool coreProperties_element::has_dc_language() const
{
    return m_has_dc_language;
}

ns_dc::SimpleLiteral* coreProperties_element::mutable_dc_language()
{
    m_has_dc_language = true;
    if (!m_dc_language)
    {
        m_dc_language = new ns_dc::SimpleLiteral();
    }
    return m_dc_language;
}

const ns_dc::SimpleLiteral& coreProperties_element::get_dc_language() const
{
    if (m_dc_language)
    {
        return *m_dc_language;
    }
    return ns_dc::SimpleLiteral::default_instance();
}

bool coreProperties_element::has_lastModifiedBy() const
{
    return m_has_lastModifiedBy;
}

void coreProperties_element::set_lastModifiedBy(const XSD::string_& _lastModifiedBy)
{
    m_has_lastModifiedBy = true;
    m_lastModifiedBy = _lastModifiedBy;
}

const XSD::string_& coreProperties_element::get_lastModifiedBy() const
{
    return m_lastModifiedBy;
}

bool coreProperties_element::has_lastPrinted() const
{
    return m_has_lastPrinted;
}

void coreProperties_element::set_lastPrinted(const XSD::dateTime_& _lastPrinted)
{
    m_has_lastPrinted = true;
    m_lastPrinted = _lastPrinted;
}

const XSD::dateTime_& coreProperties_element::get_lastPrinted() const
{
    return m_lastPrinted;
}

bool coreProperties_element::has_dcterms_modified() const
{
    return m_has_dcterms_modified;
}

ns_dcterms::SimpleLiteral* coreProperties_element::mutable_dcterms_modified()
{
    m_has_dcterms_modified = true;
    if (!m_dcterms_modified)
    {
        m_dcterms_modified = new ns_dcterms::SimpleLiteral();
    }
    return m_dcterms_modified;
}

const ns_dcterms::SimpleLiteral& coreProperties_element::get_dcterms_modified() const
{
    if (m_dcterms_modified)
    {
        return *m_dcterms_modified;
    }
    return ns_dcterms::SimpleLiteral::default_instance();
}

bool coreProperties_element::has_revision() const
{
    return m_has_revision;
}

void coreProperties_element::set_revision(const XSD::string_& _revision)
{
    m_has_revision = true;
    m_revision = _revision;
}

const XSD::string_& coreProperties_element::get_revision() const
{
    return m_revision;
}

bool coreProperties_element::has_dc_subject() const
{
    return m_has_dc_subject;
}

ns_dc::SimpleLiteral* coreProperties_element::mutable_dc_subject()
{
    m_has_dc_subject = true;
    if (!m_dc_subject)
    {
        m_dc_subject = new ns_dc::SimpleLiteral();
    }
    return m_dc_subject;
}

const ns_dc::SimpleLiteral& coreProperties_element::get_dc_subject() const
{
    if (m_dc_subject)
    {
        return *m_dc_subject;
    }
    return ns_dc::SimpleLiteral::default_instance();
}

bool coreProperties_element::has_dc_title() const
{
    return m_has_dc_title;
}

ns_dc::SimpleLiteral* coreProperties_element::mutable_dc_title()
{
    m_has_dc_title = true;
    if (!m_dc_title)
    {
        m_dc_title = new ns_dc::SimpleLiteral();
    }
    return m_dc_title;
}

const ns_dc::SimpleLiteral& coreProperties_element::get_dc_title() const
{
    if (m_dc_title)
    {
        return *m_dc_title;
    }
    return ns_dc::SimpleLiteral::default_instance();
}

bool coreProperties_element::has_version() const
{
    return m_has_version;
}

void coreProperties_element::set_version(const XSD::string_& _version)
{
    m_has_version = true;
    m_version = _version;
}

const XSD::string_& coreProperties_element::get_version() const
{
    return m_version;
}

void coreProperties_element::clear()
{
    m_has_category = false;
    m_category.clear();

    m_has_contentStatus = false;
    m_contentStatus.clear();

    m_has_dcterms_created = false;

    if (m_dcterms_created)
    {
        delete m_dcterms_created;
        m_dcterms_created = NULL;
    }


    m_has_dc_creator = false;

    if (m_dc_creator)
    {
        delete m_dc_creator;
        m_dc_creator = NULL;
    }


    m_has_dc_description = false;

    if (m_dc_description)
    {
        delete m_dc_description;
        m_dc_description = NULL;
    }


    m_has_dc_identifier = false;

    if (m_dc_identifier)
    {
        delete m_dc_identifier;
        m_dc_identifier = NULL;
    }


    m_has_keywords = false;

    if (m_keywords)
    {
        delete m_keywords;
        m_keywords = NULL;
    }


    m_has_dc_language = false;

    if (m_dc_language)
    {
        delete m_dc_language;
        m_dc_language = NULL;
    }


    m_has_lastModifiedBy = false;
    m_lastModifiedBy.clear();

    m_has_lastPrinted = false;
    m_lastPrinted.clear();

    m_has_dcterms_modified = false;

    if (m_dcterms_modified)
    {
        delete m_dcterms_modified;
        m_dcterms_modified = NULL;
    }


    m_has_revision = false;
    m_revision.clear();

    m_has_dc_subject = false;

    if (m_dc_subject)
    {
        delete m_dc_subject;
        m_dc_subject = NULL;
    }


    m_has_dc_title = false;

    if (m_dc_title)
    {
        delete m_dc_title;
        m_dc_title = NULL;
    }


    m_has_version = false;
    m_version.clear();
}

void coreProperties_element::toXml(std::ostream& _outStream) const
{
    _outStream << "<cp:coreProperties";

    _outStream << " " << "xmlns:cp=\"http://schemas.openxmlformats.org/package/2006/metadata/core-properties\"";
    _outStream << " " << "xmlns:dcterms=\"http://purl.org/dc/terms/\"";
    _outStream << " " << "xmlns:dc=\"http://purl.org/dc/elements/1.1/\"";

    _outStream << ">";


    if (m_has_category)
    {
        _outStream << "<cp:category>" << m_category << "</cp:category>";
    }


    if (m_has_contentStatus)
    {
        _outStream << "<cp:contentStatus>" << m_contentStatus << "</cp:contentStatus>";
    }


    if (m_has_dcterms_created)
    {
        m_dcterms_created->toXmlElem("dcterms:created", "", _outStream);
    }


    if (m_has_dc_creator)
    {
        m_dc_creator->toXmlElem("dc:creator", "", _outStream);
    }


    if (m_has_dc_description)
    {
        m_dc_description->toXmlElem("dc:description", "", _outStream);
    }


    if (m_has_dc_identifier)
    {
        m_dc_identifier->toXmlElem("dc:identifier", "", _outStream);
    }


    if (m_has_keywords)
    {
        m_keywords->toXmlElem("cp:keywords", "", _outStream);
    }


    if (m_has_dc_language)
    {
        m_dc_language->toXmlElem("dc:language", "", _outStream);
    }


    if (m_has_lastModifiedBy)
    {
        _outStream << "<cp:lastModifiedBy>" << m_lastModifiedBy << "</cp:lastModifiedBy>";
    }


    if (m_has_lastPrinted)
    {
        _outStream << "<cp:lastPrinted>" << m_lastPrinted << "</cp:lastPrinted>";
    }


    if (m_has_dcterms_modified)
    {
        m_dcterms_modified->toXmlElem("dcterms:modified", "", _outStream);
    }


    if (m_has_revision)
    {
        _outStream << "<cp:revision>" << m_revision << "</cp:revision>";
    }


    if (m_has_dc_subject)
    {
        m_dc_subject->toXmlElem("dc:subject", "", _outStream);
    }


    if (m_has_dc_title)
    {
        m_dc_title->toXmlElem("dc:title", "", _outStream);
    }


    if (m_has_version)
    {
        _outStream << "<cp:version>" << m_version << "</cp:version>";
    }

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