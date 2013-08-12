#include "dc_xsd.h"
#include <stdlib.h>
#include <sstream>
#include <algorithm>
#include <functional>
#include <assert.h>
namespace ns_dc {
using namespace std;

// Element

// Attribute

// ST_String
ST_String::ST_String()
    :m_has_value(false),
     m_value("")
{
}
ST_String::ST_String(const XSD::string_& _value)
    :m_has_value(true)
{

    set_value(_value);
}
ST_String::~ST_String()
{
    clear();
}
bool ST_String::has_value() const
{
    return m_has_value;
}

void ST_String::set_value(const XSD::string_& _value)
{
    m_has_value = true;
    m_value = _value;
}

const XSD::string_& ST_String::get_value() const
{
    return m_value;
}

void ST_String::clear()
{
    m_has_value = false;
    m_value.clear();;
}

void ST_String::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_value)
    {
        _outStream << " " << _attrName << "=\"" << m_value << "\"";;
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
    strStream << get_value();
    return strStream.str();
}

ST_String* ST_String::default_instance_ = NULL;

// SimpleLiteral
SimpleLiteral::SimpleLiteral()
    :m_has__attr(false),
     m__attr("")
{
}
SimpleLiteral::~SimpleLiteral()
{
    clear();
}
void SimpleLiteral::clear()
{
    m_has__attr = false;
    m__attr.clear();
    ST_String::clear();
}

void SimpleLiteral::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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

const SimpleLiteral& SimpleLiteral::default_instance()
{
    if (!SimpleLiteral::default_instance_)
    {
        SimpleLiteral::default_instance_ = new SimpleLiteral();
    }
    return *SimpleLiteral::default_instance_;
}

bool SimpleLiteral::has__attr() const
{
    return m_has__attr;
}

void SimpleLiteral::set__attr(const XSD::ENTITIES_& __attr)
{
    m_has__attr = true;
    m__attr = __attr;
}

const XSD::ENTITIES_& SimpleLiteral::get__attr() const
{
    return m__attr;
}

SimpleLiteral* SimpleLiteral::default_instance_ = NULL;

// elementContainer
elementContainer::elementContainer()

{
}
elementContainer::~elementContainer()
{
    clear();
}
SimpleLiteral* elementContainer::add_any()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    SimpleLiteral* pNewChild = pChildGroup->mutable_any();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

void elementContainer::clear()
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

void elementContainer::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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
            if ((*iter)->has_any())
            {
                (*iter)->get_any().toXmlElem("dc:any", "", _outStream);
            }


        }
    }

    _outStream << "</" << _elemName << ">";
}

const elementContainer& elementContainer::default_instance()
{
    if (!elementContainer::default_instance_)
    {
        elementContainer::default_instance_ = new elementContainer();
    }
    return *elementContainer::default_instance_;
}


// elementContainer::ChildGroup_1
elementContainer::ChildGroup_1::ChildGroup_1()
    :m_has_any(false),
     m_any(NULL)
{
}
bool elementContainer::ChildGroup_1::has_any() const
{
    return m_has_any;
}

SimpleLiteral* elementContainer::ChildGroup_1::mutable_any()
{

    m_has_any = true;
    if (!m_any)
    {
        m_any = new SimpleLiteral();
    }
    return m_any;
}

const SimpleLiteral& elementContainer::ChildGroup_1::get_any() const
{
    if (m_any)
    {
        return *m_any;
    }
    return SimpleLiteral::default_instance();
}

elementContainer* elementContainer::default_instance_ = NULL;

// any_element
any_element::any_element()
    :m_has__attr(false),
     m__attr("")
{
}
any_element::~any_element()
{
    clear();
}
void any_element::clear()
{
    m_has__attr = false;
    m__attr.clear();
    ST_String::clear();
}

void any_element::toXml(std::ostream& _outStream) const
{
    _outStream << "<dc:any";

    _outStream << " " << "xmlns:dc=\"http://purl.org/dc/elements/1.1/\"";


    if (m_has__attr)
    {
        _outStream << " " << "" << "=\"" << m__attr << "\"";
    }

    _outStream << ">";

    _outStream << "</dc:any>";
}

const any_element& any_element::default_instance()
{
    if (!any_element::default_instance_)
    {
        any_element::default_instance_ = new any_element();
    }
    return *any_element::default_instance_;
}

bool any_element::has__attr() const
{
    return m_has__attr;
}

void any_element::set__attr(const XSD::ENTITIES_& __attr)
{
    m_has__attr = true;
    m__attr = __attr;
}

const XSD::ENTITIES_& any_element::get__attr() const
{
    return m__attr;
}

any_element* any_element::default_instance_ = NULL;

// title_element
title_element::title_element()
    :m_has__attr(false),
     m__attr("")
{
}
title_element::~title_element()
{
    clear();
}
void title_element::clear()
{
    m_has__attr = false;
    m__attr.clear();
    ST_String::clear();
}

void title_element::toXml(std::ostream& _outStream) const
{
    _outStream << "<dc:title";

    _outStream << " " << "xmlns:dc=\"http://purl.org/dc/elements/1.1/\"";


    if (m_has__attr)
    {
        _outStream << " " << "" << "=\"" << m__attr << "\"";
    }

    _outStream << ">";

    _outStream << "</dc:title>";
}

const title_element& title_element::default_instance()
{
    if (!title_element::default_instance_)
    {
        title_element::default_instance_ = new title_element();
    }
    return *title_element::default_instance_;
}

bool title_element::has__attr() const
{
    return m_has__attr;
}

void title_element::set__attr(const XSD::ENTITIES_& __attr)
{
    m_has__attr = true;
    m__attr = __attr;
}

const XSD::ENTITIES_& title_element::get__attr() const
{
    return m__attr;
}

title_element* title_element::default_instance_ = NULL;

// creator_element
creator_element::creator_element()
    :m_has__attr(false),
     m__attr("")
{
}
creator_element::~creator_element()
{
    clear();
}
void creator_element::clear()
{
    m_has__attr = false;
    m__attr.clear();
    ST_String::clear();
}

void creator_element::toXml(std::ostream& _outStream) const
{
    _outStream << "<dc:creator";

    _outStream << " " << "xmlns:dc=\"http://purl.org/dc/elements/1.1/\"";


    if (m_has__attr)
    {
        _outStream << " " << "" << "=\"" << m__attr << "\"";
    }

    _outStream << ">";

    _outStream << "</dc:creator>";
}

const creator_element& creator_element::default_instance()
{
    if (!creator_element::default_instance_)
    {
        creator_element::default_instance_ = new creator_element();
    }
    return *creator_element::default_instance_;
}

bool creator_element::has__attr() const
{
    return m_has__attr;
}

void creator_element::set__attr(const XSD::ENTITIES_& __attr)
{
    m_has__attr = true;
    m__attr = __attr;
}

const XSD::ENTITIES_& creator_element::get__attr() const
{
    return m__attr;
}

creator_element* creator_element::default_instance_ = NULL;

// subject_element
subject_element::subject_element()
    :m_has__attr(false),
     m__attr("")
{
}
subject_element::~subject_element()
{
    clear();
}
void subject_element::clear()
{
    m_has__attr = false;
    m__attr.clear();
    ST_String::clear();
}

void subject_element::toXml(std::ostream& _outStream) const
{
    _outStream << "<dc:subject";

    _outStream << " " << "xmlns:dc=\"http://purl.org/dc/elements/1.1/\"";


    if (m_has__attr)
    {
        _outStream << " " << "" << "=\"" << m__attr << "\"";
    }

    _outStream << ">";

    _outStream << "</dc:subject>";
}

const subject_element& subject_element::default_instance()
{
    if (!subject_element::default_instance_)
    {
        subject_element::default_instance_ = new subject_element();
    }
    return *subject_element::default_instance_;
}

bool subject_element::has__attr() const
{
    return m_has__attr;
}

void subject_element::set__attr(const XSD::ENTITIES_& __attr)
{
    m_has__attr = true;
    m__attr = __attr;
}

const XSD::ENTITIES_& subject_element::get__attr() const
{
    return m__attr;
}

subject_element* subject_element::default_instance_ = NULL;

// description_element
description_element::description_element()
    :m_has__attr(false),
     m__attr("")
{
}
description_element::~description_element()
{
    clear();
}
void description_element::clear()
{
    m_has__attr = false;
    m__attr.clear();
    ST_String::clear();
}

void description_element::toXml(std::ostream& _outStream) const
{
    _outStream << "<dc:description";

    _outStream << " " << "xmlns:dc=\"http://purl.org/dc/elements/1.1/\"";


    if (m_has__attr)
    {
        _outStream << " " << "" << "=\"" << m__attr << "\"";
    }

    _outStream << ">";

    _outStream << "</dc:description>";
}

const description_element& description_element::default_instance()
{
    if (!description_element::default_instance_)
    {
        description_element::default_instance_ = new description_element();
    }
    return *description_element::default_instance_;
}

bool description_element::has__attr() const
{
    return m_has__attr;
}

void description_element::set__attr(const XSD::ENTITIES_& __attr)
{
    m_has__attr = true;
    m__attr = __attr;
}

const XSD::ENTITIES_& description_element::get__attr() const
{
    return m__attr;
}

description_element* description_element::default_instance_ = NULL;

// publisher_element
publisher_element::publisher_element()
    :m_has__attr(false),
     m__attr("")
{
}
publisher_element::~publisher_element()
{
    clear();
}
void publisher_element::clear()
{
    m_has__attr = false;
    m__attr.clear();
    ST_String::clear();
}

void publisher_element::toXml(std::ostream& _outStream) const
{
    _outStream << "<dc:publisher";

    _outStream << " " << "xmlns:dc=\"http://purl.org/dc/elements/1.1/\"";


    if (m_has__attr)
    {
        _outStream << " " << "" << "=\"" << m__attr << "\"";
    }

    _outStream << ">";

    _outStream << "</dc:publisher>";
}

const publisher_element& publisher_element::default_instance()
{
    if (!publisher_element::default_instance_)
    {
        publisher_element::default_instance_ = new publisher_element();
    }
    return *publisher_element::default_instance_;
}

bool publisher_element::has__attr() const
{
    return m_has__attr;
}

void publisher_element::set__attr(const XSD::ENTITIES_& __attr)
{
    m_has__attr = true;
    m__attr = __attr;
}

const XSD::ENTITIES_& publisher_element::get__attr() const
{
    return m__attr;
}

publisher_element* publisher_element::default_instance_ = NULL;

// contributor_element
contributor_element::contributor_element()
    :m_has__attr(false),
     m__attr("")
{
}
contributor_element::~contributor_element()
{
    clear();
}
void contributor_element::clear()
{
    m_has__attr = false;
    m__attr.clear();
    ST_String::clear();
}

void contributor_element::toXml(std::ostream& _outStream) const
{
    _outStream << "<dc:contributor";

    _outStream << " " << "xmlns:dc=\"http://purl.org/dc/elements/1.1/\"";


    if (m_has__attr)
    {
        _outStream << " " << "" << "=\"" << m__attr << "\"";
    }

    _outStream << ">";

    _outStream << "</dc:contributor>";
}

const contributor_element& contributor_element::default_instance()
{
    if (!contributor_element::default_instance_)
    {
        contributor_element::default_instance_ = new contributor_element();
    }
    return *contributor_element::default_instance_;
}

bool contributor_element::has__attr() const
{
    return m_has__attr;
}

void contributor_element::set__attr(const XSD::ENTITIES_& __attr)
{
    m_has__attr = true;
    m__attr = __attr;
}

const XSD::ENTITIES_& contributor_element::get__attr() const
{
    return m__attr;
}

contributor_element* contributor_element::default_instance_ = NULL;

// date_element
date_element::date_element()
    :m_has__attr(false),
     m__attr("")
{
}
date_element::~date_element()
{
    clear();
}
void date_element::clear()
{
    m_has__attr = false;
    m__attr.clear();
    ST_String::clear();
}

void date_element::toXml(std::ostream& _outStream) const
{
    _outStream << "<dc:date";

    _outStream << " " << "xmlns:dc=\"http://purl.org/dc/elements/1.1/\"";


    if (m_has__attr)
    {
        _outStream << " " << "" << "=\"" << m__attr << "\"";
    }

    _outStream << ">";

    _outStream << "</dc:date>";
}

const date_element& date_element::default_instance()
{
    if (!date_element::default_instance_)
    {
        date_element::default_instance_ = new date_element();
    }
    return *date_element::default_instance_;
}

bool date_element::has__attr() const
{
    return m_has__attr;
}

void date_element::set__attr(const XSD::ENTITIES_& __attr)
{
    m_has__attr = true;
    m__attr = __attr;
}

const XSD::ENTITIES_& date_element::get__attr() const
{
    return m__attr;
}

date_element* date_element::default_instance_ = NULL;

// type_element
type_element::type_element()
    :m_has__attr(false),
     m__attr("")
{
}
type_element::~type_element()
{
    clear();
}
void type_element::clear()
{
    m_has__attr = false;
    m__attr.clear();
    ST_String::clear();
}

void type_element::toXml(std::ostream& _outStream) const
{
    _outStream << "<dc:type";

    _outStream << " " << "xmlns:dc=\"http://purl.org/dc/elements/1.1/\"";


    if (m_has__attr)
    {
        _outStream << " " << "" << "=\"" << m__attr << "\"";
    }

    _outStream << ">";

    _outStream << "</dc:type>";
}

const type_element& type_element::default_instance()
{
    if (!type_element::default_instance_)
    {
        type_element::default_instance_ = new type_element();
    }
    return *type_element::default_instance_;
}

bool type_element::has__attr() const
{
    return m_has__attr;
}

void type_element::set__attr(const XSD::ENTITIES_& __attr)
{
    m_has__attr = true;
    m__attr = __attr;
}

const XSD::ENTITIES_& type_element::get__attr() const
{
    return m__attr;
}

type_element* type_element::default_instance_ = NULL;

// format_element
format_element::format_element()
    :m_has__attr(false),
     m__attr("")
{
}
format_element::~format_element()
{
    clear();
}
void format_element::clear()
{
    m_has__attr = false;
    m__attr.clear();
    ST_String::clear();
}

void format_element::toXml(std::ostream& _outStream) const
{
    _outStream << "<dc:format";

    _outStream << " " << "xmlns:dc=\"http://purl.org/dc/elements/1.1/\"";


    if (m_has__attr)
    {
        _outStream << " " << "" << "=\"" << m__attr << "\"";
    }

    _outStream << ">";

    _outStream << "</dc:format>";
}

const format_element& format_element::default_instance()
{
    if (!format_element::default_instance_)
    {
        format_element::default_instance_ = new format_element();
    }
    return *format_element::default_instance_;
}

bool format_element::has__attr() const
{
    return m_has__attr;
}

void format_element::set__attr(const XSD::ENTITIES_& __attr)
{
    m_has__attr = true;
    m__attr = __attr;
}

const XSD::ENTITIES_& format_element::get__attr() const
{
    return m__attr;
}

format_element* format_element::default_instance_ = NULL;

// identifier_element
identifier_element::identifier_element()
    :m_has__attr(false),
     m__attr("")
{
}
identifier_element::~identifier_element()
{
    clear();
}
void identifier_element::clear()
{
    m_has__attr = false;
    m__attr.clear();
    ST_String::clear();
}

void identifier_element::toXml(std::ostream& _outStream) const
{
    _outStream << "<dc:identifier";

    _outStream << " " << "xmlns:dc=\"http://purl.org/dc/elements/1.1/\"";


    if (m_has__attr)
    {
        _outStream << " " << "" << "=\"" << m__attr << "\"";
    }

    _outStream << ">";

    _outStream << "</dc:identifier>";
}

const identifier_element& identifier_element::default_instance()
{
    if (!identifier_element::default_instance_)
    {
        identifier_element::default_instance_ = new identifier_element();
    }
    return *identifier_element::default_instance_;
}

bool identifier_element::has__attr() const
{
    return m_has__attr;
}

void identifier_element::set__attr(const XSD::ENTITIES_& __attr)
{
    m_has__attr = true;
    m__attr = __attr;
}

const XSD::ENTITIES_& identifier_element::get__attr() const
{
    return m__attr;
}

identifier_element* identifier_element::default_instance_ = NULL;

// source_element
source_element::source_element()
    :m_has__attr(false),
     m__attr("")
{
}
source_element::~source_element()
{
    clear();
}
void source_element::clear()
{
    m_has__attr = false;
    m__attr.clear();
    ST_String::clear();
}

void source_element::toXml(std::ostream& _outStream) const
{
    _outStream << "<dc:source";

    _outStream << " " << "xmlns:dc=\"http://purl.org/dc/elements/1.1/\"";


    if (m_has__attr)
    {
        _outStream << " " << "" << "=\"" << m__attr << "\"";
    }

    _outStream << ">";

    _outStream << "</dc:source>";
}

const source_element& source_element::default_instance()
{
    if (!source_element::default_instance_)
    {
        source_element::default_instance_ = new source_element();
    }
    return *source_element::default_instance_;
}

bool source_element::has__attr() const
{
    return m_has__attr;
}

void source_element::set__attr(const XSD::ENTITIES_& __attr)
{
    m_has__attr = true;
    m__attr = __attr;
}

const XSD::ENTITIES_& source_element::get__attr() const
{
    return m__attr;
}

source_element* source_element::default_instance_ = NULL;

// language_element
language_element::language_element()
    :m_has__attr(false),
     m__attr("")
{
}
language_element::~language_element()
{
    clear();
}
void language_element::clear()
{
    m_has__attr = false;
    m__attr.clear();
    ST_String::clear();
}

void language_element::toXml(std::ostream& _outStream) const
{
    _outStream << "<dc:language";

    _outStream << " " << "xmlns:dc=\"http://purl.org/dc/elements/1.1/\"";


    if (m_has__attr)
    {
        _outStream << " " << "" << "=\"" << m__attr << "\"";
    }

    _outStream << ">";

    _outStream << "</dc:language>";
}

const language_element& language_element::default_instance()
{
    if (!language_element::default_instance_)
    {
        language_element::default_instance_ = new language_element();
    }
    return *language_element::default_instance_;
}

bool language_element::has__attr() const
{
    return m_has__attr;
}

void language_element::set__attr(const XSD::ENTITIES_& __attr)
{
    m_has__attr = true;
    m__attr = __attr;
}

const XSD::ENTITIES_& language_element::get__attr() const
{
    return m__attr;
}

language_element* language_element::default_instance_ = NULL;

// relation_element
relation_element::relation_element()
    :m_has__attr(false),
     m__attr("")
{
}
relation_element::~relation_element()
{
    clear();
}
void relation_element::clear()
{
    m_has__attr = false;
    m__attr.clear();
    ST_String::clear();
}

void relation_element::toXml(std::ostream& _outStream) const
{
    _outStream << "<dc:relation";

    _outStream << " " << "xmlns:dc=\"http://purl.org/dc/elements/1.1/\"";


    if (m_has__attr)
    {
        _outStream << " " << "" << "=\"" << m__attr << "\"";
    }

    _outStream << ">";

    _outStream << "</dc:relation>";
}

const relation_element& relation_element::default_instance()
{
    if (!relation_element::default_instance_)
    {
        relation_element::default_instance_ = new relation_element();
    }
    return *relation_element::default_instance_;
}

bool relation_element::has__attr() const
{
    return m_has__attr;
}

void relation_element::set__attr(const XSD::ENTITIES_& __attr)
{
    m_has__attr = true;
    m__attr = __attr;
}

const XSD::ENTITIES_& relation_element::get__attr() const
{
    return m__attr;
}

relation_element* relation_element::default_instance_ = NULL;

// coverage_element
coverage_element::coverage_element()
    :m_has__attr(false),
     m__attr("")
{
}
coverage_element::~coverage_element()
{
    clear();
}
void coverage_element::clear()
{
    m_has__attr = false;
    m__attr.clear();
    ST_String::clear();
}

void coverage_element::toXml(std::ostream& _outStream) const
{
    _outStream << "<dc:coverage";

    _outStream << " " << "xmlns:dc=\"http://purl.org/dc/elements/1.1/\"";


    if (m_has__attr)
    {
        _outStream << " " << "" << "=\"" << m__attr << "\"";
    }

    _outStream << ">";

    _outStream << "</dc:coverage>";
}

const coverage_element& coverage_element::default_instance()
{
    if (!coverage_element::default_instance_)
    {
        coverage_element::default_instance_ = new coverage_element();
    }
    return *coverage_element::default_instance_;
}

bool coverage_element::has__attr() const
{
    return m_has__attr;
}

void coverage_element::set__attr(const XSD::ENTITIES_& __attr)
{
    m_has__attr = true;
    m__attr = __attr;
}

const XSD::ENTITIES_& coverage_element::get__attr() const
{
    return m__attr;
}

coverage_element* coverage_element::default_instance_ = NULL;

// rights_element
rights_element::rights_element()
    :m_has__attr(false),
     m__attr("")
{
}
rights_element::~rights_element()
{
    clear();
}
void rights_element::clear()
{
    m_has__attr = false;
    m__attr.clear();
    ST_String::clear();
}

void rights_element::toXml(std::ostream& _outStream) const
{
    _outStream << "<dc:rights";

    _outStream << " " << "xmlns:dc=\"http://purl.org/dc/elements/1.1/\"";


    if (m_has__attr)
    {
        _outStream << " " << "" << "=\"" << m__attr << "\"";
    }

    _outStream << ">";

    _outStream << "</dc:rights>";
}

const rights_element& rights_element::default_instance()
{
    if (!rights_element::default_instance_)
    {
        rights_element::default_instance_ = new rights_element();
    }
    return *rights_element::default_instance_;
}

bool rights_element::has__attr() const
{
    return m_has__attr;
}

void rights_element::set__attr(const XSD::ENTITIES_& __attr)
{
    m_has__attr = true;
    m__attr = __attr;
}

const XSD::ENTITIES_& rights_element::get__attr() const
{
    return m__attr;
}

rights_element* rights_element::default_instance_ = NULL;
}