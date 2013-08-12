#include "dcterms_xsd.h"
#include <stdlib.h>
#include <sstream>
#include <algorithm>
#include <functional>
#include <assert.h>
namespace ns_dcterms {
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

// elementOrRefinementContainer
elementOrRefinementContainer::elementOrRefinementContainer()

{
}
elementOrRefinementContainer::~elementOrRefinementContainer()
{
    clear();
}
ns_dc::SimpleLiteral* elementOrRefinementContainer::add_dc_any()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_dc::SimpleLiteral* pNewChild = pChildGroup->mutable_dc_any();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

void elementOrRefinementContainer::clear()
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

void elementOrRefinementContainer::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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
            if ((*iter)->has_dc_any())
            {
                (*iter)->get_dc_any().toXmlElem("dc:any", "", _outStream);
            }


        }
    }

    _outStream << "</" << _elemName << ">";
}

const elementOrRefinementContainer& elementOrRefinementContainer::default_instance()
{
    if (!elementOrRefinementContainer::default_instance_)
    {
        elementOrRefinementContainer::default_instance_ = new elementOrRefinementContainer();
    }
    return *elementOrRefinementContainer::default_instance_;
}


// elementOrRefinementContainer::ChildGroup_1
elementOrRefinementContainer::ChildGroup_1::ChildGroup_1()
    :m_has_dc_any(false),
     m_dc_any(NULL)
{
}
bool elementOrRefinementContainer::ChildGroup_1::has_dc_any() const
{
    return m_has_dc_any;
}

ns_dc::SimpleLiteral* elementOrRefinementContainer::ChildGroup_1::mutable_dc_any()
{

    m_has_dc_any = true;
    if (!m_dc_any)
    {
        m_dc_any = new ns_dc::SimpleLiteral();
    }
    return m_dc_any;
}

const ns_dc::SimpleLiteral& elementOrRefinementContainer::ChildGroup_1::get_dc_any() const
{
    if (m_dc_any)
    {
        return *m_dc_any;
    }
    return ns_dc::SimpleLiteral::default_instance();
}

elementOrRefinementContainer* elementOrRefinementContainer::default_instance_ = NULL;

// alternative_element
alternative_element::alternative_element()
    :m_has__attr(false),
     m__attr("")
{
}
alternative_element::~alternative_element()
{
    clear();
}
void alternative_element::clear()
{
    m_has__attr = false;
    m__attr.clear();
    ST_String::clear();
}

void alternative_element::toXml(std::ostream& _outStream) const
{
    _outStream << "<dcterms:alternative";

    _outStream << " " << "xmlns:dcterms=\"http://purl.org/dc/terms/\"";
    _outStream << " " << "xmlns:dcmitype=\"http://purl.org/dc/dcmitype/\"";
    _outStream << " " << "xmlns:dc=\"http://purl.org/dc/elements/1.1/\"";


    if (m_has__attr)
    {
        _outStream << " " << "" << "=\"" << m__attr << "\"";
    }

    _outStream << ">";

    _outStream << "</dcterms:alternative>";
}

const alternative_element& alternative_element::default_instance()
{
    if (!alternative_element::default_instance_)
    {
        alternative_element::default_instance_ = new alternative_element();
    }
    return *alternative_element::default_instance_;
}

bool alternative_element::has__attr() const
{
    return m_has__attr;
}

void alternative_element::set__attr(const XSD::ENTITIES_& __attr)
{
    m_has__attr = true;
    m__attr = __attr;
}

const XSD::ENTITIES_& alternative_element::get__attr() const
{
    return m__attr;
}

alternative_element* alternative_element::default_instance_ = NULL;

// tableOfContents_element
tableOfContents_element::tableOfContents_element()
    :m_has__attr(false),
     m__attr("")
{
}
tableOfContents_element::~tableOfContents_element()
{
    clear();
}
void tableOfContents_element::clear()
{
    m_has__attr = false;
    m__attr.clear();
    ST_String::clear();
}

void tableOfContents_element::toXml(std::ostream& _outStream) const
{
    _outStream << "<dcterms:tableOfContents";

    _outStream << " " << "xmlns:dcterms=\"http://purl.org/dc/terms/\"";
    _outStream << " " << "xmlns:dcmitype=\"http://purl.org/dc/dcmitype/\"";
    _outStream << " " << "xmlns:dc=\"http://purl.org/dc/elements/1.1/\"";


    if (m_has__attr)
    {
        _outStream << " " << "" << "=\"" << m__attr << "\"";
    }

    _outStream << ">";

    _outStream << "</dcterms:tableOfContents>";
}

const tableOfContents_element& tableOfContents_element::default_instance()
{
    if (!tableOfContents_element::default_instance_)
    {
        tableOfContents_element::default_instance_ = new tableOfContents_element();
    }
    return *tableOfContents_element::default_instance_;
}

bool tableOfContents_element::has__attr() const
{
    return m_has__attr;
}

void tableOfContents_element::set__attr(const XSD::ENTITIES_& __attr)
{
    m_has__attr = true;
    m__attr = __attr;
}

const XSD::ENTITIES_& tableOfContents_element::get__attr() const
{
    return m__attr;
}

tableOfContents_element* tableOfContents_element::default_instance_ = NULL;

// abstract_element
abstract_element::abstract_element()
    :m_has__attr(false),
     m__attr("")
{
}
abstract_element::~abstract_element()
{
    clear();
}
void abstract_element::clear()
{
    m_has__attr = false;
    m__attr.clear();
    ST_String::clear();
}

void abstract_element::toXml(std::ostream& _outStream) const
{
    _outStream << "<dcterms:abstract";

    _outStream << " " << "xmlns:dcterms=\"http://purl.org/dc/terms/\"";
    _outStream << " " << "xmlns:dcmitype=\"http://purl.org/dc/dcmitype/\"";
    _outStream << " " << "xmlns:dc=\"http://purl.org/dc/elements/1.1/\"";


    if (m_has__attr)
    {
        _outStream << " " << "" << "=\"" << m__attr << "\"";
    }

    _outStream << ">";

    _outStream << "</dcterms:abstract>";
}

const abstract_element& abstract_element::default_instance()
{
    if (!abstract_element::default_instance_)
    {
        abstract_element::default_instance_ = new abstract_element();
    }
    return *abstract_element::default_instance_;
}

bool abstract_element::has__attr() const
{
    return m_has__attr;
}

void abstract_element::set__attr(const XSD::ENTITIES_& __attr)
{
    m_has__attr = true;
    m__attr = __attr;
}

const XSD::ENTITIES_& abstract_element::get__attr() const
{
    return m__attr;
}

abstract_element* abstract_element::default_instance_ = NULL;

// created_element
created_element::created_element()
    :m_has__attr(false),
     m__attr("")
{
}
created_element::~created_element()
{
    clear();
}
void created_element::clear()
{
    m_has__attr = false;
    m__attr.clear();
    ST_String::clear();
}

void created_element::toXml(std::ostream& _outStream) const
{
    _outStream << "<dcterms:created";

    _outStream << " " << "xmlns:dcterms=\"http://purl.org/dc/terms/\"";
    _outStream << " " << "xmlns:dcmitype=\"http://purl.org/dc/dcmitype/\"";
    _outStream << " " << "xmlns:dc=\"http://purl.org/dc/elements/1.1/\"";


    if (m_has__attr)
    {
        _outStream << " " << "" << "=\"" << m__attr << "\"";
    }

    _outStream << ">";

    _outStream << "</dcterms:created>";
}

const created_element& created_element::default_instance()
{
    if (!created_element::default_instance_)
    {
        created_element::default_instance_ = new created_element();
    }
    return *created_element::default_instance_;
}

bool created_element::has__attr() const
{
    return m_has__attr;
}

void created_element::set__attr(const XSD::ENTITIES_& __attr)
{
    m_has__attr = true;
    m__attr = __attr;
}

const XSD::ENTITIES_& created_element::get__attr() const
{
    return m__attr;
}

created_element* created_element::default_instance_ = NULL;

// valid_element
valid_element::valid_element()
    :m_has__attr(false),
     m__attr("")
{
}
valid_element::~valid_element()
{
    clear();
}
void valid_element::clear()
{
    m_has__attr = false;
    m__attr.clear();
    ST_String::clear();
}

void valid_element::toXml(std::ostream& _outStream) const
{
    _outStream << "<dcterms:valid";

    _outStream << " " << "xmlns:dcterms=\"http://purl.org/dc/terms/\"";
    _outStream << " " << "xmlns:dcmitype=\"http://purl.org/dc/dcmitype/\"";
    _outStream << " " << "xmlns:dc=\"http://purl.org/dc/elements/1.1/\"";


    if (m_has__attr)
    {
        _outStream << " " << "" << "=\"" << m__attr << "\"";
    }

    _outStream << ">";

    _outStream << "</dcterms:valid>";
}

const valid_element& valid_element::default_instance()
{
    if (!valid_element::default_instance_)
    {
        valid_element::default_instance_ = new valid_element();
    }
    return *valid_element::default_instance_;
}

bool valid_element::has__attr() const
{
    return m_has__attr;
}

void valid_element::set__attr(const XSD::ENTITIES_& __attr)
{
    m_has__attr = true;
    m__attr = __attr;
}

const XSD::ENTITIES_& valid_element::get__attr() const
{
    return m__attr;
}

valid_element* valid_element::default_instance_ = NULL;

// available_element
available_element::available_element()
    :m_has__attr(false),
     m__attr("")
{
}
available_element::~available_element()
{
    clear();
}
void available_element::clear()
{
    m_has__attr = false;
    m__attr.clear();
    ST_String::clear();
}

void available_element::toXml(std::ostream& _outStream) const
{
    _outStream << "<dcterms:available";

    _outStream << " " << "xmlns:dcterms=\"http://purl.org/dc/terms/\"";
    _outStream << " " << "xmlns:dcmitype=\"http://purl.org/dc/dcmitype/\"";
    _outStream << " " << "xmlns:dc=\"http://purl.org/dc/elements/1.1/\"";


    if (m_has__attr)
    {
        _outStream << " " << "" << "=\"" << m__attr << "\"";
    }

    _outStream << ">";

    _outStream << "</dcterms:available>";
}

const available_element& available_element::default_instance()
{
    if (!available_element::default_instance_)
    {
        available_element::default_instance_ = new available_element();
    }
    return *available_element::default_instance_;
}

bool available_element::has__attr() const
{
    return m_has__attr;
}

void available_element::set__attr(const XSD::ENTITIES_& __attr)
{
    m_has__attr = true;
    m__attr = __attr;
}

const XSD::ENTITIES_& available_element::get__attr() const
{
    return m__attr;
}

available_element* available_element::default_instance_ = NULL;

// issued_element
issued_element::issued_element()
    :m_has__attr(false),
     m__attr("")
{
}
issued_element::~issued_element()
{
    clear();
}
void issued_element::clear()
{
    m_has__attr = false;
    m__attr.clear();
    ST_String::clear();
}

void issued_element::toXml(std::ostream& _outStream) const
{
    _outStream << "<dcterms:issued";

    _outStream << " " << "xmlns:dcterms=\"http://purl.org/dc/terms/\"";
    _outStream << " " << "xmlns:dcmitype=\"http://purl.org/dc/dcmitype/\"";
    _outStream << " " << "xmlns:dc=\"http://purl.org/dc/elements/1.1/\"";


    if (m_has__attr)
    {
        _outStream << " " << "" << "=\"" << m__attr << "\"";
    }

    _outStream << ">";

    _outStream << "</dcterms:issued>";
}

const issued_element& issued_element::default_instance()
{
    if (!issued_element::default_instance_)
    {
        issued_element::default_instance_ = new issued_element();
    }
    return *issued_element::default_instance_;
}

bool issued_element::has__attr() const
{
    return m_has__attr;
}

void issued_element::set__attr(const XSD::ENTITIES_& __attr)
{
    m_has__attr = true;
    m__attr = __attr;
}

const XSD::ENTITIES_& issued_element::get__attr() const
{
    return m__attr;
}

issued_element* issued_element::default_instance_ = NULL;

// modified_element
modified_element::modified_element()
    :m_has__attr(false),
     m__attr("")
{
}
modified_element::~modified_element()
{
    clear();
}
void modified_element::clear()
{
    m_has__attr = false;
    m__attr.clear();
    ST_String::clear();
}

void modified_element::toXml(std::ostream& _outStream) const
{
    _outStream << "<dcterms:modified";

    _outStream << " " << "xmlns:dcterms=\"http://purl.org/dc/terms/\"";
    _outStream << " " << "xmlns:dcmitype=\"http://purl.org/dc/dcmitype/\"";
    _outStream << " " << "xmlns:dc=\"http://purl.org/dc/elements/1.1/\"";


    if (m_has__attr)
    {
        _outStream << " " << "" << "=\"" << m__attr << "\"";
    }

    _outStream << ">";

    _outStream << "</dcterms:modified>";
}

const modified_element& modified_element::default_instance()
{
    if (!modified_element::default_instance_)
    {
        modified_element::default_instance_ = new modified_element();
    }
    return *modified_element::default_instance_;
}

bool modified_element::has__attr() const
{
    return m_has__attr;
}

void modified_element::set__attr(const XSD::ENTITIES_& __attr)
{
    m_has__attr = true;
    m__attr = __attr;
}

const XSD::ENTITIES_& modified_element::get__attr() const
{
    return m__attr;
}

modified_element* modified_element::default_instance_ = NULL;

// dateAccepted_element
dateAccepted_element::dateAccepted_element()
    :m_has__attr(false),
     m__attr("")
{
}
dateAccepted_element::~dateAccepted_element()
{
    clear();
}
void dateAccepted_element::clear()
{
    m_has__attr = false;
    m__attr.clear();
    ST_String::clear();
}

void dateAccepted_element::toXml(std::ostream& _outStream) const
{
    _outStream << "<dcterms:dateAccepted";

    _outStream << " " << "xmlns:dcterms=\"http://purl.org/dc/terms/\"";
    _outStream << " " << "xmlns:dcmitype=\"http://purl.org/dc/dcmitype/\"";
    _outStream << " " << "xmlns:dc=\"http://purl.org/dc/elements/1.1/\"";


    if (m_has__attr)
    {
        _outStream << " " << "" << "=\"" << m__attr << "\"";
    }

    _outStream << ">";

    _outStream << "</dcterms:dateAccepted>";
}

const dateAccepted_element& dateAccepted_element::default_instance()
{
    if (!dateAccepted_element::default_instance_)
    {
        dateAccepted_element::default_instance_ = new dateAccepted_element();
    }
    return *dateAccepted_element::default_instance_;
}

bool dateAccepted_element::has__attr() const
{
    return m_has__attr;
}

void dateAccepted_element::set__attr(const XSD::ENTITIES_& __attr)
{
    m_has__attr = true;
    m__attr = __attr;
}

const XSD::ENTITIES_& dateAccepted_element::get__attr() const
{
    return m__attr;
}

dateAccepted_element* dateAccepted_element::default_instance_ = NULL;

// dateCopyrighted_element
dateCopyrighted_element::dateCopyrighted_element()
    :m_has__attr(false),
     m__attr("")
{
}
dateCopyrighted_element::~dateCopyrighted_element()
{
    clear();
}
void dateCopyrighted_element::clear()
{
    m_has__attr = false;
    m__attr.clear();
    ST_String::clear();
}

void dateCopyrighted_element::toXml(std::ostream& _outStream) const
{
    _outStream << "<dcterms:dateCopyrighted";

    _outStream << " " << "xmlns:dcterms=\"http://purl.org/dc/terms/\"";
    _outStream << " " << "xmlns:dcmitype=\"http://purl.org/dc/dcmitype/\"";
    _outStream << " " << "xmlns:dc=\"http://purl.org/dc/elements/1.1/\"";


    if (m_has__attr)
    {
        _outStream << " " << "" << "=\"" << m__attr << "\"";
    }

    _outStream << ">";

    _outStream << "</dcterms:dateCopyrighted>";
}

const dateCopyrighted_element& dateCopyrighted_element::default_instance()
{
    if (!dateCopyrighted_element::default_instance_)
    {
        dateCopyrighted_element::default_instance_ = new dateCopyrighted_element();
    }
    return *dateCopyrighted_element::default_instance_;
}

bool dateCopyrighted_element::has__attr() const
{
    return m_has__attr;
}

void dateCopyrighted_element::set__attr(const XSD::ENTITIES_& __attr)
{
    m_has__attr = true;
    m__attr = __attr;
}

const XSD::ENTITIES_& dateCopyrighted_element::get__attr() const
{
    return m__attr;
}

dateCopyrighted_element* dateCopyrighted_element::default_instance_ = NULL;

// dateSubmitted_element
dateSubmitted_element::dateSubmitted_element()
    :m_has__attr(false),
     m__attr("")
{
}
dateSubmitted_element::~dateSubmitted_element()
{
    clear();
}
void dateSubmitted_element::clear()
{
    m_has__attr = false;
    m__attr.clear();
    ST_String::clear();
}

void dateSubmitted_element::toXml(std::ostream& _outStream) const
{
    _outStream << "<dcterms:dateSubmitted";

    _outStream << " " << "xmlns:dcterms=\"http://purl.org/dc/terms/\"";
    _outStream << " " << "xmlns:dcmitype=\"http://purl.org/dc/dcmitype/\"";
    _outStream << " " << "xmlns:dc=\"http://purl.org/dc/elements/1.1/\"";


    if (m_has__attr)
    {
        _outStream << " " << "" << "=\"" << m__attr << "\"";
    }

    _outStream << ">";

    _outStream << "</dcterms:dateSubmitted>";
}

const dateSubmitted_element& dateSubmitted_element::default_instance()
{
    if (!dateSubmitted_element::default_instance_)
    {
        dateSubmitted_element::default_instance_ = new dateSubmitted_element();
    }
    return *dateSubmitted_element::default_instance_;
}

bool dateSubmitted_element::has__attr() const
{
    return m_has__attr;
}

void dateSubmitted_element::set__attr(const XSD::ENTITIES_& __attr)
{
    m_has__attr = true;
    m__attr = __attr;
}

const XSD::ENTITIES_& dateSubmitted_element::get__attr() const
{
    return m__attr;
}

dateSubmitted_element* dateSubmitted_element::default_instance_ = NULL;

// extent_element
extent_element::extent_element()
    :m_has__attr(false),
     m__attr("")
{
}
extent_element::~extent_element()
{
    clear();
}
void extent_element::clear()
{
    m_has__attr = false;
    m__attr.clear();
    ST_String::clear();
}

void extent_element::toXml(std::ostream& _outStream) const
{
    _outStream << "<dcterms:extent";

    _outStream << " " << "xmlns:dcterms=\"http://purl.org/dc/terms/\"";
    _outStream << " " << "xmlns:dcmitype=\"http://purl.org/dc/dcmitype/\"";
    _outStream << " " << "xmlns:dc=\"http://purl.org/dc/elements/1.1/\"";


    if (m_has__attr)
    {
        _outStream << " " << "" << "=\"" << m__attr << "\"";
    }

    _outStream << ">";

    _outStream << "</dcterms:extent>";
}

const extent_element& extent_element::default_instance()
{
    if (!extent_element::default_instance_)
    {
        extent_element::default_instance_ = new extent_element();
    }
    return *extent_element::default_instance_;
}

bool extent_element::has__attr() const
{
    return m_has__attr;
}

void extent_element::set__attr(const XSD::ENTITIES_& __attr)
{
    m_has__attr = true;
    m__attr = __attr;
}

const XSD::ENTITIES_& extent_element::get__attr() const
{
    return m__attr;
}

extent_element* extent_element::default_instance_ = NULL;

// medium_element
medium_element::medium_element()
    :m_has__attr(false),
     m__attr("")
{
}
medium_element::~medium_element()
{
    clear();
}
void medium_element::clear()
{
    m_has__attr = false;
    m__attr.clear();
    ST_String::clear();
}

void medium_element::toXml(std::ostream& _outStream) const
{
    _outStream << "<dcterms:medium";

    _outStream << " " << "xmlns:dcterms=\"http://purl.org/dc/terms/\"";
    _outStream << " " << "xmlns:dcmitype=\"http://purl.org/dc/dcmitype/\"";
    _outStream << " " << "xmlns:dc=\"http://purl.org/dc/elements/1.1/\"";


    if (m_has__attr)
    {
        _outStream << " " << "" << "=\"" << m__attr << "\"";
    }

    _outStream << ">";

    _outStream << "</dcterms:medium>";
}

const medium_element& medium_element::default_instance()
{
    if (!medium_element::default_instance_)
    {
        medium_element::default_instance_ = new medium_element();
    }
    return *medium_element::default_instance_;
}

bool medium_element::has__attr() const
{
    return m_has__attr;
}

void medium_element::set__attr(const XSD::ENTITIES_& __attr)
{
    m_has__attr = true;
    m__attr = __attr;
}

const XSD::ENTITIES_& medium_element::get__attr() const
{
    return m__attr;
}

medium_element* medium_element::default_instance_ = NULL;

// isVersionOf_element
isVersionOf_element::isVersionOf_element()
    :m_has__attr(false),
     m__attr("")
{
}
isVersionOf_element::~isVersionOf_element()
{
    clear();
}
void isVersionOf_element::clear()
{
    m_has__attr = false;
    m__attr.clear();
    ST_String::clear();
}

void isVersionOf_element::toXml(std::ostream& _outStream) const
{
    _outStream << "<dcterms:isVersionOf";

    _outStream << " " << "xmlns:dcterms=\"http://purl.org/dc/terms/\"";
    _outStream << " " << "xmlns:dcmitype=\"http://purl.org/dc/dcmitype/\"";
    _outStream << " " << "xmlns:dc=\"http://purl.org/dc/elements/1.1/\"";


    if (m_has__attr)
    {
        _outStream << " " << "" << "=\"" << m__attr << "\"";
    }

    _outStream << ">";

    _outStream << "</dcterms:isVersionOf>";
}

const isVersionOf_element& isVersionOf_element::default_instance()
{
    if (!isVersionOf_element::default_instance_)
    {
        isVersionOf_element::default_instance_ = new isVersionOf_element();
    }
    return *isVersionOf_element::default_instance_;
}

bool isVersionOf_element::has__attr() const
{
    return m_has__attr;
}

void isVersionOf_element::set__attr(const XSD::ENTITIES_& __attr)
{
    m_has__attr = true;
    m__attr = __attr;
}

const XSD::ENTITIES_& isVersionOf_element::get__attr() const
{
    return m__attr;
}

isVersionOf_element* isVersionOf_element::default_instance_ = NULL;

// hasVersion_element
hasVersion_element::hasVersion_element()
    :m_has__attr(false),
     m__attr("")
{
}
hasVersion_element::~hasVersion_element()
{
    clear();
}
void hasVersion_element::clear()
{
    m_has__attr = false;
    m__attr.clear();
    ST_String::clear();
}

void hasVersion_element::toXml(std::ostream& _outStream) const
{
    _outStream << "<dcterms:hasVersion";

    _outStream << " " << "xmlns:dcterms=\"http://purl.org/dc/terms/\"";
    _outStream << " " << "xmlns:dcmitype=\"http://purl.org/dc/dcmitype/\"";
    _outStream << " " << "xmlns:dc=\"http://purl.org/dc/elements/1.1/\"";


    if (m_has__attr)
    {
        _outStream << " " << "" << "=\"" << m__attr << "\"";
    }

    _outStream << ">";

    _outStream << "</dcterms:hasVersion>";
}

const hasVersion_element& hasVersion_element::default_instance()
{
    if (!hasVersion_element::default_instance_)
    {
        hasVersion_element::default_instance_ = new hasVersion_element();
    }
    return *hasVersion_element::default_instance_;
}

bool hasVersion_element::has__attr() const
{
    return m_has__attr;
}

void hasVersion_element::set__attr(const XSD::ENTITIES_& __attr)
{
    m_has__attr = true;
    m__attr = __attr;
}

const XSD::ENTITIES_& hasVersion_element::get__attr() const
{
    return m__attr;
}

hasVersion_element* hasVersion_element::default_instance_ = NULL;

// isReplacedBy_element
isReplacedBy_element::isReplacedBy_element()
    :m_has__attr(false),
     m__attr("")
{
}
isReplacedBy_element::~isReplacedBy_element()
{
    clear();
}
void isReplacedBy_element::clear()
{
    m_has__attr = false;
    m__attr.clear();
    ST_String::clear();
}

void isReplacedBy_element::toXml(std::ostream& _outStream) const
{
    _outStream << "<dcterms:isReplacedBy";

    _outStream << " " << "xmlns:dcterms=\"http://purl.org/dc/terms/\"";
    _outStream << " " << "xmlns:dcmitype=\"http://purl.org/dc/dcmitype/\"";
    _outStream << " " << "xmlns:dc=\"http://purl.org/dc/elements/1.1/\"";


    if (m_has__attr)
    {
        _outStream << " " << "" << "=\"" << m__attr << "\"";
    }

    _outStream << ">";

    _outStream << "</dcterms:isReplacedBy>";
}

const isReplacedBy_element& isReplacedBy_element::default_instance()
{
    if (!isReplacedBy_element::default_instance_)
    {
        isReplacedBy_element::default_instance_ = new isReplacedBy_element();
    }
    return *isReplacedBy_element::default_instance_;
}

bool isReplacedBy_element::has__attr() const
{
    return m_has__attr;
}

void isReplacedBy_element::set__attr(const XSD::ENTITIES_& __attr)
{
    m_has__attr = true;
    m__attr = __attr;
}

const XSD::ENTITIES_& isReplacedBy_element::get__attr() const
{
    return m__attr;
}

isReplacedBy_element* isReplacedBy_element::default_instance_ = NULL;

// replaces_element
replaces_element::replaces_element()
    :m_has__attr(false),
     m__attr("")
{
}
replaces_element::~replaces_element()
{
    clear();
}
void replaces_element::clear()
{
    m_has__attr = false;
    m__attr.clear();
    ST_String::clear();
}

void replaces_element::toXml(std::ostream& _outStream) const
{
    _outStream << "<dcterms:replaces";

    _outStream << " " << "xmlns:dcterms=\"http://purl.org/dc/terms/\"";
    _outStream << " " << "xmlns:dcmitype=\"http://purl.org/dc/dcmitype/\"";
    _outStream << " " << "xmlns:dc=\"http://purl.org/dc/elements/1.1/\"";


    if (m_has__attr)
    {
        _outStream << " " << "" << "=\"" << m__attr << "\"";
    }

    _outStream << ">";

    _outStream << "</dcterms:replaces>";
}

const replaces_element& replaces_element::default_instance()
{
    if (!replaces_element::default_instance_)
    {
        replaces_element::default_instance_ = new replaces_element();
    }
    return *replaces_element::default_instance_;
}

bool replaces_element::has__attr() const
{
    return m_has__attr;
}

void replaces_element::set__attr(const XSD::ENTITIES_& __attr)
{
    m_has__attr = true;
    m__attr = __attr;
}

const XSD::ENTITIES_& replaces_element::get__attr() const
{
    return m__attr;
}

replaces_element* replaces_element::default_instance_ = NULL;

// isRequiredBy_element
isRequiredBy_element::isRequiredBy_element()
    :m_has__attr(false),
     m__attr("")
{
}
isRequiredBy_element::~isRequiredBy_element()
{
    clear();
}
void isRequiredBy_element::clear()
{
    m_has__attr = false;
    m__attr.clear();
    ST_String::clear();
}

void isRequiredBy_element::toXml(std::ostream& _outStream) const
{
    _outStream << "<dcterms:isRequiredBy";

    _outStream << " " << "xmlns:dcterms=\"http://purl.org/dc/terms/\"";
    _outStream << " " << "xmlns:dcmitype=\"http://purl.org/dc/dcmitype/\"";
    _outStream << " " << "xmlns:dc=\"http://purl.org/dc/elements/1.1/\"";


    if (m_has__attr)
    {
        _outStream << " " << "" << "=\"" << m__attr << "\"";
    }

    _outStream << ">";

    _outStream << "</dcterms:isRequiredBy>";
}

const isRequiredBy_element& isRequiredBy_element::default_instance()
{
    if (!isRequiredBy_element::default_instance_)
    {
        isRequiredBy_element::default_instance_ = new isRequiredBy_element();
    }
    return *isRequiredBy_element::default_instance_;
}

bool isRequiredBy_element::has__attr() const
{
    return m_has__attr;
}

void isRequiredBy_element::set__attr(const XSD::ENTITIES_& __attr)
{
    m_has__attr = true;
    m__attr = __attr;
}

const XSD::ENTITIES_& isRequiredBy_element::get__attr() const
{
    return m__attr;
}

isRequiredBy_element* isRequiredBy_element::default_instance_ = NULL;

// requires_element
requires_element::requires_element()
    :m_has__attr(false),
     m__attr("")
{
}
requires_element::~requires_element()
{
    clear();
}
void requires_element::clear()
{
    m_has__attr = false;
    m__attr.clear();
    ST_String::clear();
}

void requires_element::toXml(std::ostream& _outStream) const
{
    _outStream << "<dcterms:requires";

    _outStream << " " << "xmlns:dcterms=\"http://purl.org/dc/terms/\"";
    _outStream << " " << "xmlns:dcmitype=\"http://purl.org/dc/dcmitype/\"";
    _outStream << " " << "xmlns:dc=\"http://purl.org/dc/elements/1.1/\"";


    if (m_has__attr)
    {
        _outStream << " " << "" << "=\"" << m__attr << "\"";
    }

    _outStream << ">";

    _outStream << "</dcterms:requires>";
}

const requires_element& requires_element::default_instance()
{
    if (!requires_element::default_instance_)
    {
        requires_element::default_instance_ = new requires_element();
    }
    return *requires_element::default_instance_;
}

bool requires_element::has__attr() const
{
    return m_has__attr;
}

void requires_element::set__attr(const XSD::ENTITIES_& __attr)
{
    m_has__attr = true;
    m__attr = __attr;
}

const XSD::ENTITIES_& requires_element::get__attr() const
{
    return m__attr;
}

requires_element* requires_element::default_instance_ = NULL;

// isPartOf_element
isPartOf_element::isPartOf_element()
    :m_has__attr(false),
     m__attr("")
{
}
isPartOf_element::~isPartOf_element()
{
    clear();
}
void isPartOf_element::clear()
{
    m_has__attr = false;
    m__attr.clear();
    ST_String::clear();
}

void isPartOf_element::toXml(std::ostream& _outStream) const
{
    _outStream << "<dcterms:isPartOf";

    _outStream << " " << "xmlns:dcterms=\"http://purl.org/dc/terms/\"";
    _outStream << " " << "xmlns:dcmitype=\"http://purl.org/dc/dcmitype/\"";
    _outStream << " " << "xmlns:dc=\"http://purl.org/dc/elements/1.1/\"";


    if (m_has__attr)
    {
        _outStream << " " << "" << "=\"" << m__attr << "\"";
    }

    _outStream << ">";

    _outStream << "</dcterms:isPartOf>";
}

const isPartOf_element& isPartOf_element::default_instance()
{
    if (!isPartOf_element::default_instance_)
    {
        isPartOf_element::default_instance_ = new isPartOf_element();
    }
    return *isPartOf_element::default_instance_;
}

bool isPartOf_element::has__attr() const
{
    return m_has__attr;
}

void isPartOf_element::set__attr(const XSD::ENTITIES_& __attr)
{
    m_has__attr = true;
    m__attr = __attr;
}

const XSD::ENTITIES_& isPartOf_element::get__attr() const
{
    return m__attr;
}

isPartOf_element* isPartOf_element::default_instance_ = NULL;

// hasPart_element
hasPart_element::hasPart_element()
    :m_has__attr(false),
     m__attr("")
{
}
hasPart_element::~hasPart_element()
{
    clear();
}
void hasPart_element::clear()
{
    m_has__attr = false;
    m__attr.clear();
    ST_String::clear();
}

void hasPart_element::toXml(std::ostream& _outStream) const
{
    _outStream << "<dcterms:hasPart";

    _outStream << " " << "xmlns:dcterms=\"http://purl.org/dc/terms/\"";
    _outStream << " " << "xmlns:dcmitype=\"http://purl.org/dc/dcmitype/\"";
    _outStream << " " << "xmlns:dc=\"http://purl.org/dc/elements/1.1/\"";


    if (m_has__attr)
    {
        _outStream << " " << "" << "=\"" << m__attr << "\"";
    }

    _outStream << ">";

    _outStream << "</dcterms:hasPart>";
}

const hasPart_element& hasPart_element::default_instance()
{
    if (!hasPart_element::default_instance_)
    {
        hasPart_element::default_instance_ = new hasPart_element();
    }
    return *hasPart_element::default_instance_;
}

bool hasPart_element::has__attr() const
{
    return m_has__attr;
}

void hasPart_element::set__attr(const XSD::ENTITIES_& __attr)
{
    m_has__attr = true;
    m__attr = __attr;
}

const XSD::ENTITIES_& hasPart_element::get__attr() const
{
    return m__attr;
}

hasPart_element* hasPart_element::default_instance_ = NULL;

// isReferencedBy_element
isReferencedBy_element::isReferencedBy_element()
    :m_has__attr(false),
     m__attr("")
{
}
isReferencedBy_element::~isReferencedBy_element()
{
    clear();
}
void isReferencedBy_element::clear()
{
    m_has__attr = false;
    m__attr.clear();
    ST_String::clear();
}

void isReferencedBy_element::toXml(std::ostream& _outStream) const
{
    _outStream << "<dcterms:isReferencedBy";

    _outStream << " " << "xmlns:dcterms=\"http://purl.org/dc/terms/\"";
    _outStream << " " << "xmlns:dcmitype=\"http://purl.org/dc/dcmitype/\"";
    _outStream << " " << "xmlns:dc=\"http://purl.org/dc/elements/1.1/\"";


    if (m_has__attr)
    {
        _outStream << " " << "" << "=\"" << m__attr << "\"";
    }

    _outStream << ">";

    _outStream << "</dcterms:isReferencedBy>";
}

const isReferencedBy_element& isReferencedBy_element::default_instance()
{
    if (!isReferencedBy_element::default_instance_)
    {
        isReferencedBy_element::default_instance_ = new isReferencedBy_element();
    }
    return *isReferencedBy_element::default_instance_;
}

bool isReferencedBy_element::has__attr() const
{
    return m_has__attr;
}

void isReferencedBy_element::set__attr(const XSD::ENTITIES_& __attr)
{
    m_has__attr = true;
    m__attr = __attr;
}

const XSD::ENTITIES_& isReferencedBy_element::get__attr() const
{
    return m__attr;
}

isReferencedBy_element* isReferencedBy_element::default_instance_ = NULL;

// references_element
references_element::references_element()
    :m_has__attr(false),
     m__attr("")
{
}
references_element::~references_element()
{
    clear();
}
void references_element::clear()
{
    m_has__attr = false;
    m__attr.clear();
    ST_String::clear();
}

void references_element::toXml(std::ostream& _outStream) const
{
    _outStream << "<dcterms:references";

    _outStream << " " << "xmlns:dcterms=\"http://purl.org/dc/terms/\"";
    _outStream << " " << "xmlns:dcmitype=\"http://purl.org/dc/dcmitype/\"";
    _outStream << " " << "xmlns:dc=\"http://purl.org/dc/elements/1.1/\"";


    if (m_has__attr)
    {
        _outStream << " " << "" << "=\"" << m__attr << "\"";
    }

    _outStream << ">";

    _outStream << "</dcterms:references>";
}

const references_element& references_element::default_instance()
{
    if (!references_element::default_instance_)
    {
        references_element::default_instance_ = new references_element();
    }
    return *references_element::default_instance_;
}

bool references_element::has__attr() const
{
    return m_has__attr;
}

void references_element::set__attr(const XSD::ENTITIES_& __attr)
{
    m_has__attr = true;
    m__attr = __attr;
}

const XSD::ENTITIES_& references_element::get__attr() const
{
    return m__attr;
}

references_element* references_element::default_instance_ = NULL;

// isFormatOf_element
isFormatOf_element::isFormatOf_element()
    :m_has__attr(false),
     m__attr("")
{
}
isFormatOf_element::~isFormatOf_element()
{
    clear();
}
void isFormatOf_element::clear()
{
    m_has__attr = false;
    m__attr.clear();
    ST_String::clear();
}

void isFormatOf_element::toXml(std::ostream& _outStream) const
{
    _outStream << "<dcterms:isFormatOf";

    _outStream << " " << "xmlns:dcterms=\"http://purl.org/dc/terms/\"";
    _outStream << " " << "xmlns:dcmitype=\"http://purl.org/dc/dcmitype/\"";
    _outStream << " " << "xmlns:dc=\"http://purl.org/dc/elements/1.1/\"";


    if (m_has__attr)
    {
        _outStream << " " << "" << "=\"" << m__attr << "\"";
    }

    _outStream << ">";

    _outStream << "</dcterms:isFormatOf>";
}

const isFormatOf_element& isFormatOf_element::default_instance()
{
    if (!isFormatOf_element::default_instance_)
    {
        isFormatOf_element::default_instance_ = new isFormatOf_element();
    }
    return *isFormatOf_element::default_instance_;
}

bool isFormatOf_element::has__attr() const
{
    return m_has__attr;
}

void isFormatOf_element::set__attr(const XSD::ENTITIES_& __attr)
{
    m_has__attr = true;
    m__attr = __attr;
}

const XSD::ENTITIES_& isFormatOf_element::get__attr() const
{
    return m__attr;
}

isFormatOf_element* isFormatOf_element::default_instance_ = NULL;

// hasFormat_element
hasFormat_element::hasFormat_element()
    :m_has__attr(false),
     m__attr("")
{
}
hasFormat_element::~hasFormat_element()
{
    clear();
}
void hasFormat_element::clear()
{
    m_has__attr = false;
    m__attr.clear();
    ST_String::clear();
}

void hasFormat_element::toXml(std::ostream& _outStream) const
{
    _outStream << "<dcterms:hasFormat";

    _outStream << " " << "xmlns:dcterms=\"http://purl.org/dc/terms/\"";
    _outStream << " " << "xmlns:dcmitype=\"http://purl.org/dc/dcmitype/\"";
    _outStream << " " << "xmlns:dc=\"http://purl.org/dc/elements/1.1/\"";


    if (m_has__attr)
    {
        _outStream << " " << "" << "=\"" << m__attr << "\"";
    }

    _outStream << ">";

    _outStream << "</dcterms:hasFormat>";
}

const hasFormat_element& hasFormat_element::default_instance()
{
    if (!hasFormat_element::default_instance_)
    {
        hasFormat_element::default_instance_ = new hasFormat_element();
    }
    return *hasFormat_element::default_instance_;
}

bool hasFormat_element::has__attr() const
{
    return m_has__attr;
}

void hasFormat_element::set__attr(const XSD::ENTITIES_& __attr)
{
    m_has__attr = true;
    m__attr = __attr;
}

const XSD::ENTITIES_& hasFormat_element::get__attr() const
{
    return m__attr;
}

hasFormat_element* hasFormat_element::default_instance_ = NULL;

// conformsTo_element
conformsTo_element::conformsTo_element()
    :m_has__attr(false),
     m__attr("")
{
}
conformsTo_element::~conformsTo_element()
{
    clear();
}
void conformsTo_element::clear()
{
    m_has__attr = false;
    m__attr.clear();
    ST_String::clear();
}

void conformsTo_element::toXml(std::ostream& _outStream) const
{
    _outStream << "<dcterms:conformsTo";

    _outStream << " " << "xmlns:dcterms=\"http://purl.org/dc/terms/\"";
    _outStream << " " << "xmlns:dcmitype=\"http://purl.org/dc/dcmitype/\"";
    _outStream << " " << "xmlns:dc=\"http://purl.org/dc/elements/1.1/\"";


    if (m_has__attr)
    {
        _outStream << " " << "" << "=\"" << m__attr << "\"";
    }

    _outStream << ">";

    _outStream << "</dcterms:conformsTo>";
}

const conformsTo_element& conformsTo_element::default_instance()
{
    if (!conformsTo_element::default_instance_)
    {
        conformsTo_element::default_instance_ = new conformsTo_element();
    }
    return *conformsTo_element::default_instance_;
}

bool conformsTo_element::has__attr() const
{
    return m_has__attr;
}

void conformsTo_element::set__attr(const XSD::ENTITIES_& __attr)
{
    m_has__attr = true;
    m__attr = __attr;
}

const XSD::ENTITIES_& conformsTo_element::get__attr() const
{
    return m__attr;
}

conformsTo_element* conformsTo_element::default_instance_ = NULL;

// spatial_element
spatial_element::spatial_element()
    :m_has__attr(false),
     m__attr("")
{
}
spatial_element::~spatial_element()
{
    clear();
}
void spatial_element::clear()
{
    m_has__attr = false;
    m__attr.clear();
    ST_String::clear();
}

void spatial_element::toXml(std::ostream& _outStream) const
{
    _outStream << "<dcterms:spatial";

    _outStream << " " << "xmlns:dcterms=\"http://purl.org/dc/terms/\"";
    _outStream << " " << "xmlns:dcmitype=\"http://purl.org/dc/dcmitype/\"";
    _outStream << " " << "xmlns:dc=\"http://purl.org/dc/elements/1.1/\"";


    if (m_has__attr)
    {
        _outStream << " " << "" << "=\"" << m__attr << "\"";
    }

    _outStream << ">";

    _outStream << "</dcterms:spatial>";
}

const spatial_element& spatial_element::default_instance()
{
    if (!spatial_element::default_instance_)
    {
        spatial_element::default_instance_ = new spatial_element();
    }
    return *spatial_element::default_instance_;
}

bool spatial_element::has__attr() const
{
    return m_has__attr;
}

void spatial_element::set__attr(const XSD::ENTITIES_& __attr)
{
    m_has__attr = true;
    m__attr = __attr;
}

const XSD::ENTITIES_& spatial_element::get__attr() const
{
    return m__attr;
}

spatial_element* spatial_element::default_instance_ = NULL;

// temporal_element
temporal_element::temporal_element()
    :m_has__attr(false),
     m__attr("")
{
}
temporal_element::~temporal_element()
{
    clear();
}
void temporal_element::clear()
{
    m_has__attr = false;
    m__attr.clear();
    ST_String::clear();
}

void temporal_element::toXml(std::ostream& _outStream) const
{
    _outStream << "<dcterms:temporal";

    _outStream << " " << "xmlns:dcterms=\"http://purl.org/dc/terms/\"";
    _outStream << " " << "xmlns:dcmitype=\"http://purl.org/dc/dcmitype/\"";
    _outStream << " " << "xmlns:dc=\"http://purl.org/dc/elements/1.1/\"";


    if (m_has__attr)
    {
        _outStream << " " << "" << "=\"" << m__attr << "\"";
    }

    _outStream << ">";

    _outStream << "</dcterms:temporal>";
}

const temporal_element& temporal_element::default_instance()
{
    if (!temporal_element::default_instance_)
    {
        temporal_element::default_instance_ = new temporal_element();
    }
    return *temporal_element::default_instance_;
}

bool temporal_element::has__attr() const
{
    return m_has__attr;
}

void temporal_element::set__attr(const XSD::ENTITIES_& __attr)
{
    m_has__attr = true;
    m__attr = __attr;
}

const XSD::ENTITIES_& temporal_element::get__attr() const
{
    return m__attr;
}

temporal_element* temporal_element::default_instance_ = NULL;

// audience_element
audience_element::audience_element()
    :m_has__attr(false),
     m__attr("")
{
}
audience_element::~audience_element()
{
    clear();
}
void audience_element::clear()
{
    m_has__attr = false;
    m__attr.clear();
    ST_String::clear();
}

void audience_element::toXml(std::ostream& _outStream) const
{
    _outStream << "<dcterms:audience";

    _outStream << " " << "xmlns:dcterms=\"http://purl.org/dc/terms/\"";
    _outStream << " " << "xmlns:dcmitype=\"http://purl.org/dc/dcmitype/\"";
    _outStream << " " << "xmlns:dc=\"http://purl.org/dc/elements/1.1/\"";


    if (m_has__attr)
    {
        _outStream << " " << "" << "=\"" << m__attr << "\"";
    }

    _outStream << ">";

    _outStream << "</dcterms:audience>";
}

const audience_element& audience_element::default_instance()
{
    if (!audience_element::default_instance_)
    {
        audience_element::default_instance_ = new audience_element();
    }
    return *audience_element::default_instance_;
}

bool audience_element::has__attr() const
{
    return m_has__attr;
}

void audience_element::set__attr(const XSD::ENTITIES_& __attr)
{
    m_has__attr = true;
    m__attr = __attr;
}

const XSD::ENTITIES_& audience_element::get__attr() const
{
    return m__attr;
}

audience_element* audience_element::default_instance_ = NULL;

// mediator_element
mediator_element::mediator_element()
    :m_has__attr(false),
     m__attr("")
{
}
mediator_element::~mediator_element()
{
    clear();
}
void mediator_element::clear()
{
    m_has__attr = false;
    m__attr.clear();
    ST_String::clear();
}

void mediator_element::toXml(std::ostream& _outStream) const
{
    _outStream << "<dcterms:mediator";

    _outStream << " " << "xmlns:dcterms=\"http://purl.org/dc/terms/\"";
    _outStream << " " << "xmlns:dcmitype=\"http://purl.org/dc/dcmitype/\"";
    _outStream << " " << "xmlns:dc=\"http://purl.org/dc/elements/1.1/\"";


    if (m_has__attr)
    {
        _outStream << " " << "" << "=\"" << m__attr << "\"";
    }

    _outStream << ">";

    _outStream << "</dcterms:mediator>";
}

const mediator_element& mediator_element::default_instance()
{
    if (!mediator_element::default_instance_)
    {
        mediator_element::default_instance_ = new mediator_element();
    }
    return *mediator_element::default_instance_;
}

bool mediator_element::has__attr() const
{
    return m_has__attr;
}

void mediator_element::set__attr(const XSD::ENTITIES_& __attr)
{
    m_has__attr = true;
    m__attr = __attr;
}

const XSD::ENTITIES_& mediator_element::get__attr() const
{
    return m__attr;
}

mediator_element* mediator_element::default_instance_ = NULL;

// educationLevel_element
educationLevel_element::educationLevel_element()
    :m_has__attr(false),
     m__attr("")
{
}
educationLevel_element::~educationLevel_element()
{
    clear();
}
void educationLevel_element::clear()
{
    m_has__attr = false;
    m__attr.clear();
    ST_String::clear();
}

void educationLevel_element::toXml(std::ostream& _outStream) const
{
    _outStream << "<dcterms:educationLevel";

    _outStream << " " << "xmlns:dcterms=\"http://purl.org/dc/terms/\"";
    _outStream << " " << "xmlns:dcmitype=\"http://purl.org/dc/dcmitype/\"";
    _outStream << " " << "xmlns:dc=\"http://purl.org/dc/elements/1.1/\"";


    if (m_has__attr)
    {
        _outStream << " " << "" << "=\"" << m__attr << "\"";
    }

    _outStream << ">";

    _outStream << "</dcterms:educationLevel>";
}

const educationLevel_element& educationLevel_element::default_instance()
{
    if (!educationLevel_element::default_instance_)
    {
        educationLevel_element::default_instance_ = new educationLevel_element();
    }
    return *educationLevel_element::default_instance_;
}

bool educationLevel_element::has__attr() const
{
    return m_has__attr;
}

void educationLevel_element::set__attr(const XSD::ENTITIES_& __attr)
{
    m_has__attr = true;
    m__attr = __attr;
}

const XSD::ENTITIES_& educationLevel_element::get__attr() const
{
    return m__attr;
}

educationLevel_element* educationLevel_element::default_instance_ = NULL;

// accessRights_element
accessRights_element::accessRights_element()
    :m_has__attr(false),
     m__attr("")
{
}
accessRights_element::~accessRights_element()
{
    clear();
}
void accessRights_element::clear()
{
    m_has__attr = false;
    m__attr.clear();
    ST_String::clear();
}

void accessRights_element::toXml(std::ostream& _outStream) const
{
    _outStream << "<dcterms:accessRights";

    _outStream << " " << "xmlns:dcterms=\"http://purl.org/dc/terms/\"";
    _outStream << " " << "xmlns:dcmitype=\"http://purl.org/dc/dcmitype/\"";
    _outStream << " " << "xmlns:dc=\"http://purl.org/dc/elements/1.1/\"";


    if (m_has__attr)
    {
        _outStream << " " << "" << "=\"" << m__attr << "\"";
    }

    _outStream << ">";

    _outStream << "</dcterms:accessRights>";
}

const accessRights_element& accessRights_element::default_instance()
{
    if (!accessRights_element::default_instance_)
    {
        accessRights_element::default_instance_ = new accessRights_element();
    }
    return *accessRights_element::default_instance_;
}

bool accessRights_element::has__attr() const
{
    return m_has__attr;
}

void accessRights_element::set__attr(const XSD::ENTITIES_& __attr)
{
    m_has__attr = true;
    m__attr = __attr;
}

const XSD::ENTITIES_& accessRights_element::get__attr() const
{
    return m__attr;
}

accessRights_element* accessRights_element::default_instance_ = NULL;

// bibliographicCitation_element
bibliographicCitation_element::bibliographicCitation_element()
    :m_has__attr(false),
     m__attr("")
{
}
bibliographicCitation_element::~bibliographicCitation_element()
{
    clear();
}
void bibliographicCitation_element::clear()
{
    m_has__attr = false;
    m__attr.clear();
    ST_String::clear();
}

void bibliographicCitation_element::toXml(std::ostream& _outStream) const
{
    _outStream << "<dcterms:bibliographicCitation";

    _outStream << " " << "xmlns:dcterms=\"http://purl.org/dc/terms/\"";
    _outStream << " " << "xmlns:dcmitype=\"http://purl.org/dc/dcmitype/\"";
    _outStream << " " << "xmlns:dc=\"http://purl.org/dc/elements/1.1/\"";


    if (m_has__attr)
    {
        _outStream << " " << "" << "=\"" << m__attr << "\"";
    }

    _outStream << ">";

    _outStream << "</dcterms:bibliographicCitation>";
}

const bibliographicCitation_element& bibliographicCitation_element::default_instance()
{
    if (!bibliographicCitation_element::default_instance_)
    {
        bibliographicCitation_element::default_instance_ = new bibliographicCitation_element();
    }
    return *bibliographicCitation_element::default_instance_;
}

bool bibliographicCitation_element::has__attr() const
{
    return m_has__attr;
}

void bibliographicCitation_element::set__attr(const XSD::ENTITIES_& __attr)
{
    m_has__attr = true;
    m__attr = __attr;
}

const XSD::ENTITIES_& bibliographicCitation_element::get__attr() const
{
    return m__attr;
}

bibliographicCitation_element* bibliographicCitation_element::default_instance_ = NULL;
}