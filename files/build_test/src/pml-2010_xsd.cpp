#include "pml-2010_xsd.h"
#include <stdlib.h>
#include <sstream>
#include <algorithm>
#include <functional>
#include <assert.h>
namespace ns_p14 {
using namespace std;

// Element

// Attribute

// ST_UniversalTimeOffset
ST_UniversalTimeOffset::ST_UniversalTimeOffset()
    :m_has_value(false),
     m_value("")
{
}
ST_UniversalTimeOffset::ST_UniversalTimeOffset(const XSD::string_& _value)
    :m_has_value(true)
{

    set_value(_value);
}
ST_UniversalTimeOffset::~ST_UniversalTimeOffset()
{
    clear();
}
bool ST_UniversalTimeOffset::has_value() const
{
    return m_has_value;
}

void ST_UniversalTimeOffset::set_value(const XSD::string_& _value)
{
    m_has_value = true;
    m_value = _value;
}

const XSD::string_& ST_UniversalTimeOffset::get_value() const
{
    return m_value;
}

void ST_UniversalTimeOffset::clear()
{
    m_has_value = false;
    m_value.clear();;
}

void ST_UniversalTimeOffset::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_value)
    {
        _outStream << " " << _attrName << "=\"" << m_value << "\"";;
    }
}

const ST_UniversalTimeOffset& ST_UniversalTimeOffset::default_instance()
{
    if (!ST_UniversalTimeOffset::default_instance_)
    {
        ST_UniversalTimeOffset::default_instance_ = new ST_UniversalTimeOffset();
    }
    return *ST_UniversalTimeOffset::default_instance_;
}

std::string ST_UniversalTimeOffset::toString() const
{
    std::stringstream strStream;
    strStream << get_value();
    return strStream.str();
}

ST_UniversalTimeOffset* ST_UniversalTimeOffset::default_instance_ = NULL;

// ST_TransitionPattern
ST_TransitionPattern::ST_TransitionPattern()
    :m_has_value(false)
{
}
ST_TransitionPattern::ST_TransitionPattern(const ST_TransitionPattern::Type& _value)
    :m_has_value(true),
     m_value(_value)
{
}
ST_TransitionPattern::~ST_TransitionPattern()
{
    clear();
}
bool ST_TransitionPattern::has_value() const
{
    return m_has_value;
}

void ST_TransitionPattern::set_value(const ST_TransitionPattern::Type& _value)
{
    m_has_value = true;
    m_value = _value;
}

const ST_TransitionPattern::Type& ST_TransitionPattern::get_value() const
{
    return m_value;
}

std::string ST_TransitionPattern::toString() const
{
    return ST_TransitionPattern::TypeStrList[m_value];
}

void ST_TransitionPattern::clear()
{
    m_has_value = false;
}

void ST_TransitionPattern::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_value)
    {
        _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
}

const ST_TransitionPattern& ST_TransitionPattern::default_instance()
{
    if (!ST_TransitionPattern::default_instance_)
    {
        ST_TransitionPattern::default_instance_ = new ST_TransitionPattern();
    }
    return *ST_TransitionPattern::default_instance_;
}

const std::string ST_TransitionPattern::TypeStrList[] =
{
    "diamond",
    "hexagon"
};
ST_TransitionPattern* ST_TransitionPattern::default_instance_ = NULL;

// ST_TransitionCenterDirectionType
ST_TransitionCenterDirectionType::ST_TransitionCenterDirectionType()
    :m_has_value(false)
{
}
ST_TransitionCenterDirectionType::ST_TransitionCenterDirectionType(const ST_TransitionCenterDirectionType::Type& _value)
    :m_has_value(true),
     m_value(_value)
{
}
ST_TransitionCenterDirectionType::~ST_TransitionCenterDirectionType()
{
    clear();
}
bool ST_TransitionCenterDirectionType::has_value() const
{
    return m_has_value;
}

void ST_TransitionCenterDirectionType::set_value(const ST_TransitionCenterDirectionType::Type& _value)
{
    m_has_value = true;
    m_value = _value;
}

const ST_TransitionCenterDirectionType::Type& ST_TransitionCenterDirectionType::get_value() const
{
    return m_value;
}

std::string ST_TransitionCenterDirectionType::toString() const
{
    return ST_TransitionCenterDirectionType::TypeStrList[m_value];
}

void ST_TransitionCenterDirectionType::clear()
{
    m_has_value = false;
}

void ST_TransitionCenterDirectionType::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_value)
    {
        _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
}

const ST_TransitionCenterDirectionType& ST_TransitionCenterDirectionType::default_instance()
{
    if (!ST_TransitionCenterDirectionType::default_instance_)
    {
        ST_TransitionCenterDirectionType::default_instance_ = new ST_TransitionCenterDirectionType();
    }
    return *ST_TransitionCenterDirectionType::default_instance_;
}

const std::string ST_TransitionCenterDirectionType::TypeStrList[] =
{
    "center"
};
ST_TransitionCenterDirectionType* ST_TransitionCenterDirectionType::default_instance_ = NULL;

// ST_TransitionShredPattern
ST_TransitionShredPattern::ST_TransitionShredPattern()
    :m_has_value(false)
{
}
ST_TransitionShredPattern::ST_TransitionShredPattern(const ST_TransitionShredPattern::Type& _value)
    :m_has_value(true),
     m_value(_value)
{
}
ST_TransitionShredPattern::~ST_TransitionShredPattern()
{
    clear();
}
bool ST_TransitionShredPattern::has_value() const
{
    return m_has_value;
}

void ST_TransitionShredPattern::set_value(const ST_TransitionShredPattern::Type& _value)
{
    m_has_value = true;
    m_value = _value;
}

const ST_TransitionShredPattern::Type& ST_TransitionShredPattern::get_value() const
{
    return m_value;
}

std::string ST_TransitionShredPattern::toString() const
{
    return ST_TransitionShredPattern::TypeStrList[m_value];
}

void ST_TransitionShredPattern::clear()
{
    m_has_value = false;
}

void ST_TransitionShredPattern::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_value)
    {
        _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
}

const ST_TransitionShredPattern& ST_TransitionShredPattern::default_instance()
{
    if (!ST_TransitionShredPattern::default_instance_)
    {
        ST_TransitionShredPattern::default_instance_ = new ST_TransitionShredPattern();
    }
    return *ST_TransitionShredPattern::default_instance_;
}

const std::string ST_TransitionShredPattern::TypeStrList[] =
{
    "strip",
    "rectangle"
};
ST_TransitionShredPattern* ST_TransitionShredPattern::default_instance_ = NULL;

// ST_TransitionCornerAndCenterDirectionType
ST_TransitionCornerAndCenterDirectionType::ST_TransitionCornerAndCenterDirectionType()
    :m_has_ST_TransitionCornerDirectionType(false),
     m_ST_TransitionCornerDirectionType(NULL),
     m_has_ST_TransitionCenterDirectionType(false),
     m_ST_TransitionCenterDirectionType(NULL)
{
}
ST_TransitionCornerAndCenterDirectionType::ST_TransitionCornerAndCenterDirectionType(const ST_TransitionCornerAndCenterDirectionType& _ST_TransitionCornerAndCenterDirectionType)
    :m_has_ST_TransitionCornerDirectionType(false),
     m_ST_TransitionCornerDirectionType(NULL),
     m_has_ST_TransitionCenterDirectionType(false),
     m_ST_TransitionCenterDirectionType(NULL)
{

    m_has_ST_TransitionCornerDirectionType = _ST_TransitionCornerAndCenterDirectionType.has_ST_TransitionCornerDirectionType();
    if (_ST_TransitionCornerAndCenterDirectionType.has_ST_TransitionCornerDirectionType())
    {
        m_ST_TransitionCornerDirectionType = new ns_p::ST_TransitionCornerDirectionType(_ST_TransitionCornerAndCenterDirectionType.get_ST_TransitionCornerDirectionType());
    }


    m_has_ST_TransitionCenterDirectionType = _ST_TransitionCornerAndCenterDirectionType.has_ST_TransitionCenterDirectionType();
    if (_ST_TransitionCornerAndCenterDirectionType.has_ST_TransitionCenterDirectionType())
    {
        m_ST_TransitionCenterDirectionType = new ST_TransitionCenterDirectionType(_ST_TransitionCornerAndCenterDirectionType.get_ST_TransitionCenterDirectionType());
    }
}
ST_TransitionCornerAndCenterDirectionType::~ST_TransitionCornerAndCenterDirectionType()
{
    clear();
}
bool ST_TransitionCornerAndCenterDirectionType::has_ST_TransitionCornerDirectionType() const
{
    return m_has_ST_TransitionCornerDirectionType;
}

ns_p::ST_TransitionCornerDirectionType* ST_TransitionCornerAndCenterDirectionType::mutable_ST_TransitionCornerDirectionType()
{
    clear_ST_TransitionCenterDirectionType();
    m_has_ST_TransitionCornerDirectionType = true;
    if (!m_ST_TransitionCornerDirectionType)
    {
        m_ST_TransitionCornerDirectionType = new ns_p::ST_TransitionCornerDirectionType();
    }
    return m_ST_TransitionCornerDirectionType;
}

const ns_p::ST_TransitionCornerDirectionType& ST_TransitionCornerAndCenterDirectionType::get_ST_TransitionCornerDirectionType() const
{
    if (m_ST_TransitionCornerDirectionType)
    {
        return *m_ST_TransitionCornerDirectionType;
    }
    return ns_p::ST_TransitionCornerDirectionType::default_instance();
}

void ST_TransitionCornerAndCenterDirectionType::clear_ST_TransitionCornerDirectionType()
{
    m_has_ST_TransitionCornerDirectionType = false;
    if (m_ST_TransitionCornerDirectionType)
    {
        delete m_ST_TransitionCornerDirectionType;
        m_ST_TransitionCornerDirectionType = NULL;
    }
}

bool ST_TransitionCornerAndCenterDirectionType::has_ST_TransitionCenterDirectionType() const
{
    return m_has_ST_TransitionCenterDirectionType;
}

ST_TransitionCenterDirectionType* ST_TransitionCornerAndCenterDirectionType::mutable_ST_TransitionCenterDirectionType()
{
    clear_ST_TransitionCornerDirectionType();
    m_has_ST_TransitionCenterDirectionType = true;
    if (!m_ST_TransitionCenterDirectionType)
    {
        m_ST_TransitionCenterDirectionType = new ST_TransitionCenterDirectionType();
    }
    return m_ST_TransitionCenterDirectionType;
}

const ST_TransitionCenterDirectionType& ST_TransitionCornerAndCenterDirectionType::get_ST_TransitionCenterDirectionType() const
{
    if (m_ST_TransitionCenterDirectionType)
    {
        return *m_ST_TransitionCenterDirectionType;
    }
    return ST_TransitionCenterDirectionType::default_instance();
}

void ST_TransitionCornerAndCenterDirectionType::clear_ST_TransitionCenterDirectionType()
{
    m_has_ST_TransitionCenterDirectionType = false;
    if (m_ST_TransitionCenterDirectionType)
    {
        delete m_ST_TransitionCenterDirectionType;
        m_ST_TransitionCenterDirectionType = NULL;
    }
}

std::string ST_TransitionCornerAndCenterDirectionType::toString() const
{
    if (m_has_ST_TransitionCornerDirectionType)
    {
        return m_ST_TransitionCornerDirectionType->toString();
    }

    if (m_has_ST_TransitionCenterDirectionType)
    {
        return m_ST_TransitionCenterDirectionType->toString();
    }

    return string();
}

void ST_TransitionCornerAndCenterDirectionType::clear()
{   clear_ST_TransitionCornerDirectionType();
    clear_ST_TransitionCenterDirectionType();
}

void ST_TransitionCornerAndCenterDirectionType::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_ST_TransitionCornerDirectionType)
    {
        m_ST_TransitionCornerDirectionType->toXmlAttr(_attrName, _outStream);
        return;
    }

    if (m_has_ST_TransitionCenterDirectionType)
    {
        m_ST_TransitionCenterDirectionType->toXmlAttr(_attrName, _outStream);
        return;
    }
}

const ST_TransitionCornerAndCenterDirectionType& ST_TransitionCornerAndCenterDirectionType::default_instance()
{
    if (!ST_TransitionCornerAndCenterDirectionType::default_instance_)
    {
        ST_TransitionCornerAndCenterDirectionType::default_instance_ = new ST_TransitionCornerAndCenterDirectionType();
    }
    return *ST_TransitionCornerAndCenterDirectionType::default_instance_;
}

ST_TransitionCornerAndCenterDirectionType* ST_TransitionCornerAndCenterDirectionType::default_instance_ = NULL;

// ST_TransitionLeftRightDirectionType
ST_TransitionLeftRightDirectionType::ST_TransitionLeftRightDirectionType()
    :m_has_value(false)
{
}
ST_TransitionLeftRightDirectionType::ST_TransitionLeftRightDirectionType(const ST_TransitionLeftRightDirectionType::Type& _value)
    :m_has_value(true),
     m_value(_value)
{
}
ST_TransitionLeftRightDirectionType::~ST_TransitionLeftRightDirectionType()
{
    clear();
}
bool ST_TransitionLeftRightDirectionType::has_value() const
{
    return m_has_value;
}

void ST_TransitionLeftRightDirectionType::set_value(const ST_TransitionLeftRightDirectionType::Type& _value)
{
    m_has_value = true;
    m_value = _value;
}

const ST_TransitionLeftRightDirectionType::Type& ST_TransitionLeftRightDirectionType::get_value() const
{
    return m_value;
}

std::string ST_TransitionLeftRightDirectionType::toString() const
{
    return ST_TransitionLeftRightDirectionType::TypeStrList[m_value];
}

void ST_TransitionLeftRightDirectionType::clear()
{
    m_has_value = false;
}

void ST_TransitionLeftRightDirectionType::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_value)
    {
        _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
}

const ST_TransitionLeftRightDirectionType& ST_TransitionLeftRightDirectionType::default_instance()
{
    if (!ST_TransitionLeftRightDirectionType::default_instance_)
    {
        ST_TransitionLeftRightDirectionType::default_instance_ = new ST_TransitionLeftRightDirectionType();
    }
    return *ST_TransitionLeftRightDirectionType::default_instance_;
}

const std::string ST_TransitionLeftRightDirectionType::TypeStrList[] =
{
    "l",
    "r"
};
ST_TransitionLeftRightDirectionType* ST_TransitionLeftRightDirectionType::default_instance_ = NULL;

// CT_LeftRightDirectionTransition
CT_LeftRightDirectionTransition::CT_LeftRightDirectionTransition()
    :m_has_dir_attr(false),
     m_dir_attr(NULL)
{
}
CT_LeftRightDirectionTransition::~CT_LeftRightDirectionTransition()
{
    clear();
}
void CT_LeftRightDirectionTransition::clear()
{
    m_has_dir_attr = false;

    if (m_dir_attr)
    {
        delete m_dir_attr;
        m_dir_attr = NULL;
    }

}

void CT_LeftRightDirectionTransition::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_dir_attr)
    {
        m_dir_attr->toXmlAttr("dir", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_LeftRightDirectionTransition& CT_LeftRightDirectionTransition::default_instance()
{
    if (!CT_LeftRightDirectionTransition::default_instance_)
    {
        CT_LeftRightDirectionTransition::default_instance_ = new CT_LeftRightDirectionTransition();
    }
    return *CT_LeftRightDirectionTransition::default_instance_;
}

bool CT_LeftRightDirectionTransition::has_dir_attr() const
{
    return m_has_dir_attr;
}

void CT_LeftRightDirectionTransition::set_dir_attr(const ST_TransitionLeftRightDirectionType& _dir_attr)
{
    m_has_dir_attr = true;
    m_dir_attr = new ST_TransitionLeftRightDirectionType(_dir_attr);
}

const ST_TransitionLeftRightDirectionType& CT_LeftRightDirectionTransition::get_dir_attr() const
{
    if (m_dir_attr)
    {
        return *m_dir_attr;
    }
    return ST_TransitionLeftRightDirectionType::default_instance();
}

CT_LeftRightDirectionTransition* CT_LeftRightDirectionTransition::default_instance_ = NULL;

// CT_RippleTransition
CT_RippleTransition::CT_RippleTransition()
    :m_has_dir_attr(false),
     m_dir_attr(NULL)
{
}
CT_RippleTransition::~CT_RippleTransition()
{
    clear();
}
void CT_RippleTransition::clear()
{
    m_has_dir_attr = false;

    if (m_dir_attr)
    {
        delete m_dir_attr;
        m_dir_attr = NULL;
    }

}

void CT_RippleTransition::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_dir_attr)
    {
        m_dir_attr->toXmlAttr("dir", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_RippleTransition& CT_RippleTransition::default_instance()
{
    if (!CT_RippleTransition::default_instance_)
    {
        CT_RippleTransition::default_instance_ = new CT_RippleTransition();
    }
    return *CT_RippleTransition::default_instance_;
}

bool CT_RippleTransition::has_dir_attr() const
{
    return m_has_dir_attr;
}

void CT_RippleTransition::set_dir_attr(const ST_TransitionCornerAndCenterDirectionType& _dir_attr)
{
    m_has_dir_attr = true;
    m_dir_attr = new ST_TransitionCornerAndCenterDirectionType(_dir_attr);
}

const ST_TransitionCornerAndCenterDirectionType& CT_RippleTransition::get_dir_attr() const
{
    if (m_dir_attr)
    {
        return *m_dir_attr;
    }
    return ST_TransitionCornerAndCenterDirectionType::default_instance();
}

CT_RippleTransition* CT_RippleTransition::default_instance_ = NULL;

// CT_PrismTransition
CT_PrismTransition::CT_PrismTransition()
    :m_has_dir_attr(false),
     m_dir_attr(NULL),
     m_has_isContent_attr(false),
     m_isContent_attr(false),
     m_has_isInverted_attr(false),
     m_isInverted_attr(false)
{
}
CT_PrismTransition::~CT_PrismTransition()
{
    clear();
}
void CT_PrismTransition::clear()
{
    m_has_dir_attr = false;

    if (m_dir_attr)
    {
        delete m_dir_attr;
        m_dir_attr = NULL;
    }


    m_has_isContent_attr = false;
    m_isContent_attr = false;

    m_has_isInverted_attr = false;
    m_isInverted_attr = false;
}

void CT_PrismTransition::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_dir_attr)
    {
        m_dir_attr->toXmlAttr("dir", _outStream);
    }



    if (m_has_isContent_attr)
    {
        _outStream << " " << "isContent" << "=\"" << XSD::XMLBooleanStr(m_isContent_attr) << "\"";
    }



    if (m_has_isInverted_attr)
    {
        _outStream << " " << "isInverted" << "=\"" << XSD::XMLBooleanStr(m_isInverted_attr) << "\"";
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_PrismTransition& CT_PrismTransition::default_instance()
{
    if (!CT_PrismTransition::default_instance_)
    {
        CT_PrismTransition::default_instance_ = new CT_PrismTransition();
    }
    return *CT_PrismTransition::default_instance_;
}

bool CT_PrismTransition::has_dir_attr() const
{
    return m_has_dir_attr;
}

void CT_PrismTransition::set_dir_attr(const ns_p::ST_TransitionSideDirectionType& _dir_attr)
{
    m_has_dir_attr = true;
    m_dir_attr = new ns_p::ST_TransitionSideDirectionType(_dir_attr);
}

const ns_p::ST_TransitionSideDirectionType& CT_PrismTransition::get_dir_attr() const
{
    if (m_dir_attr)
    {
        return *m_dir_attr;
    }
    return ns_p::ST_TransitionSideDirectionType::default_instance();
}

bool CT_PrismTransition::has_isContent_attr() const
{
    return m_has_isContent_attr;
}

void CT_PrismTransition::set_isContent_attr(const XSD::boolean_& _isContent_attr)
{
    m_has_isContent_attr = true;
    m_isContent_attr = _isContent_attr;
}

const XSD::boolean_& CT_PrismTransition::get_isContent_attr() const
{
    return m_isContent_attr;
}

bool CT_PrismTransition::has_isInverted_attr() const
{
    return m_has_isInverted_attr;
}

void CT_PrismTransition::set_isInverted_attr(const XSD::boolean_& _isInverted_attr)
{
    m_has_isInverted_attr = true;
    m_isInverted_attr = _isInverted_attr;
}

const XSD::boolean_& CT_PrismTransition::get_isInverted_attr() const
{
    return m_isInverted_attr;
}

CT_PrismTransition* CT_PrismTransition::default_instance_ = NULL;

// CT_GlitterTransition
CT_GlitterTransition::CT_GlitterTransition()
    :m_has_dir_attr(false),
     m_dir_attr(NULL),
     m_has_pattern_attr(false),
     m_pattern_attr(NULL)
{
}
CT_GlitterTransition::~CT_GlitterTransition()
{
    clear();
}
void CT_GlitterTransition::clear()
{
    m_has_dir_attr = false;

    if (m_dir_attr)
    {
        delete m_dir_attr;
        m_dir_attr = NULL;
    }


    m_has_pattern_attr = false;

    if (m_pattern_attr)
    {
        delete m_pattern_attr;
        m_pattern_attr = NULL;
    }

}

void CT_GlitterTransition::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_dir_attr)
    {
        m_dir_attr->toXmlAttr("dir", _outStream);
    }



    if (m_has_pattern_attr)
    {
        m_pattern_attr->toXmlAttr("pattern", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_GlitterTransition& CT_GlitterTransition::default_instance()
{
    if (!CT_GlitterTransition::default_instance_)
    {
        CT_GlitterTransition::default_instance_ = new CT_GlitterTransition();
    }
    return *CT_GlitterTransition::default_instance_;
}

bool CT_GlitterTransition::has_dir_attr() const
{
    return m_has_dir_attr;
}

void CT_GlitterTransition::set_dir_attr(const ns_p::ST_TransitionSideDirectionType& _dir_attr)
{
    m_has_dir_attr = true;
    m_dir_attr = new ns_p::ST_TransitionSideDirectionType(_dir_attr);
}

const ns_p::ST_TransitionSideDirectionType& CT_GlitterTransition::get_dir_attr() const
{
    if (m_dir_attr)
    {
        return *m_dir_attr;
    }
    return ns_p::ST_TransitionSideDirectionType::default_instance();
}

bool CT_GlitterTransition::has_pattern_attr() const
{
    return m_has_pattern_attr;
}

void CT_GlitterTransition::set_pattern_attr(const ST_TransitionPattern& _pattern_attr)
{
    m_has_pattern_attr = true;
    m_pattern_attr = new ST_TransitionPattern(_pattern_attr);
}

const ST_TransitionPattern& CT_GlitterTransition::get_pattern_attr() const
{
    if (m_pattern_attr)
    {
        return *m_pattern_attr;
    }
    return ST_TransitionPattern::default_instance();
}

CT_GlitterTransition* CT_GlitterTransition::default_instance_ = NULL;

// CT_FlyThroughTransition
CT_FlyThroughTransition::CT_FlyThroughTransition()
    :m_has_dir_attr(false),
     m_dir_attr(NULL),
     m_has_hasBounce_attr(false),
     m_hasBounce_attr(false)
{
}
CT_FlyThroughTransition::~CT_FlyThroughTransition()
{
    clear();
}
void CT_FlyThroughTransition::clear()
{
    m_has_dir_attr = false;

    if (m_dir_attr)
    {
        delete m_dir_attr;
        m_dir_attr = NULL;
    }


    m_has_hasBounce_attr = false;
    m_hasBounce_attr = false;
}

void CT_FlyThroughTransition::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_dir_attr)
    {
        m_dir_attr->toXmlAttr("dir", _outStream);
    }



    if (m_has_hasBounce_attr)
    {
        _outStream << " " << "hasBounce" << "=\"" << XSD::XMLBooleanStr(m_hasBounce_attr) << "\"";
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_FlyThroughTransition& CT_FlyThroughTransition::default_instance()
{
    if (!CT_FlyThroughTransition::default_instance_)
    {
        CT_FlyThroughTransition::default_instance_ = new CT_FlyThroughTransition();
    }
    return *CT_FlyThroughTransition::default_instance_;
}

bool CT_FlyThroughTransition::has_dir_attr() const
{
    return m_has_dir_attr;
}

void CT_FlyThroughTransition::set_dir_attr(const ns_p::ST_TransitionInOutDirectionType& _dir_attr)
{
    m_has_dir_attr = true;
    m_dir_attr = new ns_p::ST_TransitionInOutDirectionType(_dir_attr);
}

const ns_p::ST_TransitionInOutDirectionType& CT_FlyThroughTransition::get_dir_attr() const
{
    if (m_dir_attr)
    {
        return *m_dir_attr;
    }
    return ns_p::ST_TransitionInOutDirectionType::default_instance();
}

bool CT_FlyThroughTransition::has_hasBounce_attr() const
{
    return m_has_hasBounce_attr;
}

void CT_FlyThroughTransition::set_hasBounce_attr(const XSD::boolean_& _hasBounce_attr)
{
    m_has_hasBounce_attr = true;
    m_hasBounce_attr = _hasBounce_attr;
}

const XSD::boolean_& CT_FlyThroughTransition::get_hasBounce_attr() const
{
    return m_hasBounce_attr;
}

CT_FlyThroughTransition* CT_FlyThroughTransition::default_instance_ = NULL;

// CT_ShredTransition
CT_ShredTransition::CT_ShredTransition()
    :m_has_pattern_attr(false),
     m_pattern_attr(NULL),
     m_has_dir_attr(false),
     m_dir_attr(NULL)
{
}
CT_ShredTransition::~CT_ShredTransition()
{
    clear();
}
void CT_ShredTransition::clear()
{
    m_has_pattern_attr = false;

    if (m_pattern_attr)
    {
        delete m_pattern_attr;
        m_pattern_attr = NULL;
    }


    m_has_dir_attr = false;

    if (m_dir_attr)
    {
        delete m_dir_attr;
        m_dir_attr = NULL;
    }

}

void CT_ShredTransition::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_pattern_attr)
    {
        m_pattern_attr->toXmlAttr("pattern", _outStream);
    }



    if (m_has_dir_attr)
    {
        m_dir_attr->toXmlAttr("dir", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_ShredTransition& CT_ShredTransition::default_instance()
{
    if (!CT_ShredTransition::default_instance_)
    {
        CT_ShredTransition::default_instance_ = new CT_ShredTransition();
    }
    return *CT_ShredTransition::default_instance_;
}

bool CT_ShredTransition::has_pattern_attr() const
{
    return m_has_pattern_attr;
}

void CT_ShredTransition::set_pattern_attr(const ST_TransitionShredPattern& _pattern_attr)
{
    m_has_pattern_attr = true;
    m_pattern_attr = new ST_TransitionShredPattern(_pattern_attr);
}

const ST_TransitionShredPattern& CT_ShredTransition::get_pattern_attr() const
{
    if (m_pattern_attr)
    {
        return *m_pattern_attr;
    }
    return ST_TransitionShredPattern::default_instance();
}

bool CT_ShredTransition::has_dir_attr() const
{
    return m_has_dir_attr;
}

void CT_ShredTransition::set_dir_attr(const ns_p::ST_TransitionInOutDirectionType& _dir_attr)
{
    m_has_dir_attr = true;
    m_dir_attr = new ns_p::ST_TransitionInOutDirectionType(_dir_attr);
}

const ns_p::ST_TransitionInOutDirectionType& CT_ShredTransition::get_dir_attr() const
{
    if (m_dir_attr)
    {
        return *m_dir_attr;
    }
    return ns_p::ST_TransitionInOutDirectionType::default_instance();
}

CT_ShredTransition* CT_ShredTransition::default_instance_ = NULL;

// CT_RevealTransition
CT_RevealTransition::CT_RevealTransition()
    :m_has_thruBlk_attr(false),
     m_thruBlk_attr(false),
     m_has_dir_attr(false),
     m_dir_attr(NULL)
{
}
CT_RevealTransition::~CT_RevealTransition()
{
    clear();
}
void CT_RevealTransition::clear()
{
    m_has_thruBlk_attr = false;
    m_thruBlk_attr = false;

    m_has_dir_attr = false;

    if (m_dir_attr)
    {
        delete m_dir_attr;
        m_dir_attr = NULL;
    }

}

void CT_RevealTransition::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_thruBlk_attr)
    {
        _outStream << " " << "thruBlk" << "=\"" << XSD::XMLBooleanStr(m_thruBlk_attr) << "\"";
    }



    if (m_has_dir_attr)
    {
        m_dir_attr->toXmlAttr("dir", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_RevealTransition& CT_RevealTransition::default_instance()
{
    if (!CT_RevealTransition::default_instance_)
    {
        CT_RevealTransition::default_instance_ = new CT_RevealTransition();
    }
    return *CT_RevealTransition::default_instance_;
}

bool CT_RevealTransition::has_thruBlk_attr() const
{
    return m_has_thruBlk_attr;
}

void CT_RevealTransition::set_thruBlk_attr(const XSD::boolean_& _thruBlk_attr)
{
    m_has_thruBlk_attr = true;
    m_thruBlk_attr = _thruBlk_attr;
}

const XSD::boolean_& CT_RevealTransition::get_thruBlk_attr() const
{
    return m_thruBlk_attr;
}

bool CT_RevealTransition::has_dir_attr() const
{
    return m_has_dir_attr;
}

void CT_RevealTransition::set_dir_attr(const ST_TransitionLeftRightDirectionType& _dir_attr)
{
    m_has_dir_attr = true;
    m_dir_attr = new ST_TransitionLeftRightDirectionType(_dir_attr);
}

const ST_TransitionLeftRightDirectionType& CT_RevealTransition::get_dir_attr() const
{
    if (m_dir_attr)
    {
        return *m_dir_attr;
    }
    return ST_TransitionLeftRightDirectionType::default_instance();
}

CT_RevealTransition* CT_RevealTransition::default_instance_ = NULL;

// CT_MediaBookmarkTarget
CT_MediaBookmarkTarget::CT_MediaBookmarkTarget()
    :m_has_spid_attr(false),
     m_spid_attr(NULL),
     m_has_bmkName_attr(false),
     m_bmkName_attr("")
{
}
CT_MediaBookmarkTarget::~CT_MediaBookmarkTarget()
{
    clear();
}
void CT_MediaBookmarkTarget::clear()
{
    m_has_spid_attr = false;

    if (m_spid_attr)
    {
        delete m_spid_attr;
        m_spid_attr = NULL;
    }


    m_has_bmkName_attr = false;
    m_bmkName_attr.clear();
}

void CT_MediaBookmarkTarget::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    assert(m_has_spid_attr);
    if (m_has_spid_attr)
    {
        m_spid_attr->toXmlAttr("spid", _outStream);
    }


    assert(m_has_bmkName_attr);
    if (m_has_bmkName_attr)
    {
        _outStream << " " << "bmkName" << "=\"" << m_bmkName_attr << "\"";
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_MediaBookmarkTarget& CT_MediaBookmarkTarget::default_instance()
{
    if (!CT_MediaBookmarkTarget::default_instance_)
    {
        CT_MediaBookmarkTarget::default_instance_ = new CT_MediaBookmarkTarget();
    }
    return *CT_MediaBookmarkTarget::default_instance_;
}

bool CT_MediaBookmarkTarget::has_spid_attr() const
{
    return m_has_spid_attr;
}

void CT_MediaBookmarkTarget::set_spid_attr(const ns_a::ST_DrawingElementId& _spid_attr)
{
    m_has_spid_attr = true;
    m_spid_attr = new ns_a::ST_DrawingElementId(_spid_attr);
}

const ns_a::ST_DrawingElementId& CT_MediaBookmarkTarget::get_spid_attr() const
{
    if (m_spid_attr)
    {
        return *m_spid_attr;
    }
    return ns_a::ST_DrawingElementId::default_instance();
}

bool CT_MediaBookmarkTarget::has_bmkName_attr() const
{
    return m_has_bmkName_attr;
}

void CT_MediaBookmarkTarget::set_bmkName_attr(const XSD::string_& _bmkName_attr)
{
    m_has_bmkName_attr = true;
    m_bmkName_attr = _bmkName_attr;
}

const XSD::string_& CT_MediaBookmarkTarget::get_bmkName_attr() const
{
    return m_bmkName_attr;
}

CT_MediaBookmarkTarget* CT_MediaBookmarkTarget::default_instance_ = NULL;

// CT_ContentPartNonVisual
CT_ContentPartNonVisual::CT_ContentPartNonVisual()
    :m_has_cNvPr(false),
     m_cNvPr(NULL),
     m_has_cNvContentPartPr(false),
     m_cNvContentPartPr(NULL),
     m_has_nvPr(false),
     m_nvPr(NULL)
{
}
CT_ContentPartNonVisual::~CT_ContentPartNonVisual()
{
    clear();
}
bool CT_ContentPartNonVisual::has_cNvPr() const
{
    return m_has_cNvPr;
}

ns_a::CT_NonVisualDrawingProps* CT_ContentPartNonVisual::mutable_cNvPr()
{
    m_has_cNvPr = true;
    if (!m_cNvPr)
    {
        m_cNvPr = new ns_a::CT_NonVisualDrawingProps();
    }
    return m_cNvPr;
}

const ns_a::CT_NonVisualDrawingProps& CT_ContentPartNonVisual::get_cNvPr() const
{
    if (m_cNvPr)
    {
        return *m_cNvPr;
    }
    return ns_a::CT_NonVisualDrawingProps::default_instance();
}

bool CT_ContentPartNonVisual::has_cNvContentPartPr() const
{
    return m_has_cNvContentPartPr;
}

ns_a14::CT_NonVisualInkContentPartProperties* CT_ContentPartNonVisual::mutable_cNvContentPartPr()
{
    m_has_cNvContentPartPr = true;
    if (!m_cNvContentPartPr)
    {
        m_cNvContentPartPr = new ns_a14::CT_NonVisualInkContentPartProperties();
    }
    return m_cNvContentPartPr;
}

const ns_a14::CT_NonVisualInkContentPartProperties& CT_ContentPartNonVisual::get_cNvContentPartPr() const
{
    if (m_cNvContentPartPr)
    {
        return *m_cNvContentPartPr;
    }
    return ns_a14::CT_NonVisualInkContentPartProperties::default_instance();
}

bool CT_ContentPartNonVisual::has_nvPr() const
{
    return m_has_nvPr;
}

ns_p::CT_ApplicationNonVisualDrawingProps* CT_ContentPartNonVisual::mutable_nvPr()
{
    m_has_nvPr = true;
    if (!m_nvPr)
    {
        m_nvPr = new ns_p::CT_ApplicationNonVisualDrawingProps();
    }
    return m_nvPr;
}

const ns_p::CT_ApplicationNonVisualDrawingProps& CT_ContentPartNonVisual::get_nvPr() const
{
    if (m_nvPr)
    {
        return *m_nvPr;
    }
    return ns_p::CT_ApplicationNonVisualDrawingProps::default_instance();
}

void CT_ContentPartNonVisual::clear()
{
    m_has_cNvPr = false;

    if (m_cNvPr)
    {
        delete m_cNvPr;
        m_cNvPr = NULL;
    }


    m_has_cNvContentPartPr = false;

    if (m_cNvContentPartPr)
    {
        delete m_cNvContentPartPr;
        m_cNvContentPartPr = NULL;
    }


    m_has_nvPr = false;

    if (m_nvPr)
    {
        delete m_nvPr;
        m_nvPr = NULL;
    }

}

void CT_ContentPartNonVisual::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";

    assert(m_has_cNvPr);


    assert(m_has_nvPr);


    if (m_has_cNvPr)
    {
        m_cNvPr->toXmlElem("p14:cNvPr", "", _outStream);
    }


    if (m_has_cNvContentPartPr)
    {
        m_cNvContentPartPr->toXmlElem("p14:cNvContentPartPr", "", _outStream);
    }


    if (m_has_nvPr)
    {
        m_nvPr->toXmlElem("p14:nvPr", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_ContentPartNonVisual& CT_ContentPartNonVisual::default_instance()
{
    if (!CT_ContentPartNonVisual::default_instance_)
    {
        CT_ContentPartNonVisual::default_instance_ = new CT_ContentPartNonVisual();
    }
    return *CT_ContentPartNonVisual::default_instance_;
}

CT_ContentPartNonVisual* CT_ContentPartNonVisual::default_instance_ = NULL;

// CT_MediaTrim
CT_MediaTrim::CT_MediaTrim()
    :m_has_st_attr(false),
     m_st_attr(NULL),
     m_has_end_attr(false),
     m_end_attr(NULL)
{
}
CT_MediaTrim::~CT_MediaTrim()
{
    clear();
}
void CT_MediaTrim::clear()
{
    m_has_st_attr = false;

    if (m_st_attr)
    {
        delete m_st_attr;
        m_st_attr = NULL;
    }


    m_has_end_attr = false;

    if (m_end_attr)
    {
        delete m_end_attr;
        m_end_attr = NULL;
    }

}

void CT_MediaTrim::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_st_attr)
    {
        m_st_attr->toXmlAttr("st", _outStream);
    }



    if (m_has_end_attr)
    {
        m_end_attr->toXmlAttr("end", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_MediaTrim& CT_MediaTrim::default_instance()
{
    if (!CT_MediaTrim::default_instance_)
    {
        CT_MediaTrim::default_instance_ = new CT_MediaTrim();
    }
    return *CT_MediaTrim::default_instance_;
}

bool CT_MediaTrim::has_st_attr() const
{
    return m_has_st_attr;
}

void CT_MediaTrim::set_st_attr(const ST_UniversalTimeOffset& _st_attr)
{
    m_has_st_attr = true;
    m_st_attr = new ST_UniversalTimeOffset(_st_attr);
}

const ST_UniversalTimeOffset& CT_MediaTrim::get_st_attr() const
{
    if (m_st_attr)
    {
        return *m_st_attr;
    }
    return ST_UniversalTimeOffset::default_instance();
}

bool CT_MediaTrim::has_end_attr() const
{
    return m_has_end_attr;
}

void CT_MediaTrim::set_end_attr(const ST_UniversalTimeOffset& _end_attr)
{
    m_has_end_attr = true;
    m_end_attr = new ST_UniversalTimeOffset(_end_attr);
}

const ST_UniversalTimeOffset& CT_MediaTrim::get_end_attr() const
{
    if (m_end_attr)
    {
        return *m_end_attr;
    }
    return ST_UniversalTimeOffset::default_instance();
}

CT_MediaTrim* CT_MediaTrim::default_instance_ = NULL;

// CT_MediaFade
CT_MediaFade::CT_MediaFade()
    :m_has_in_attr(false),
     m_in_attr(NULL),
     m_has_out_attr(false),
     m_out_attr(NULL)
{
}
CT_MediaFade::~CT_MediaFade()
{
    clear();
}
void CT_MediaFade::clear()
{
    m_has_in_attr = false;

    if (m_in_attr)
    {
        delete m_in_attr;
        m_in_attr = NULL;
    }


    m_has_out_attr = false;

    if (m_out_attr)
    {
        delete m_out_attr;
        m_out_attr = NULL;
    }

}

void CT_MediaFade::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_in_attr)
    {
        m_in_attr->toXmlAttr("in", _outStream);
    }



    if (m_has_out_attr)
    {
        m_out_attr->toXmlAttr("out", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_MediaFade& CT_MediaFade::default_instance()
{
    if (!CT_MediaFade::default_instance_)
    {
        CT_MediaFade::default_instance_ = new CT_MediaFade();
    }
    return *CT_MediaFade::default_instance_;
}

bool CT_MediaFade::has_in_attr() const
{
    return m_has_in_attr;
}

void CT_MediaFade::set_in_attr(const ST_UniversalTimeOffset& _in_attr)
{
    m_has_in_attr = true;
    m_in_attr = new ST_UniversalTimeOffset(_in_attr);
}

const ST_UniversalTimeOffset& CT_MediaFade::get_in_attr() const
{
    if (m_in_attr)
    {
        return *m_in_attr;
    }
    return ST_UniversalTimeOffset::default_instance();
}

bool CT_MediaFade::has_out_attr() const
{
    return m_has_out_attr;
}

void CT_MediaFade::set_out_attr(const ST_UniversalTimeOffset& _out_attr)
{
    m_has_out_attr = true;
    m_out_attr = new ST_UniversalTimeOffset(_out_attr);
}

const ST_UniversalTimeOffset& CT_MediaFade::get_out_attr() const
{
    if (m_out_attr)
    {
        return *m_out_attr;
    }
    return ST_UniversalTimeOffset::default_instance();
}

CT_MediaFade* CT_MediaFade::default_instance_ = NULL;

// CT_MediaBookmark
CT_MediaBookmark::CT_MediaBookmark()
    :m_has_name_attr(false),
     m_name_attr(""),
     m_has_time_attr(false),
     m_time_attr(NULL)
{
}
CT_MediaBookmark::~CT_MediaBookmark()
{
    clear();
}
void CT_MediaBookmark::clear()
{
    m_has_name_attr = false;
    m_name_attr.clear();

    m_has_time_attr = false;

    if (m_time_attr)
    {
        delete m_time_attr;
        m_time_attr = NULL;
    }

}

void CT_MediaBookmark::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_name_attr)
    {
        _outStream << " " << "name" << "=\"" << m_name_attr << "\"";
    }



    if (m_has_time_attr)
    {
        m_time_attr->toXmlAttr("time", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_MediaBookmark& CT_MediaBookmark::default_instance()
{
    if (!CT_MediaBookmark::default_instance_)
    {
        CT_MediaBookmark::default_instance_ = new CT_MediaBookmark();
    }
    return *CT_MediaBookmark::default_instance_;
}

bool CT_MediaBookmark::has_name_attr() const
{
    return m_has_name_attr;
}

void CT_MediaBookmark::set_name_attr(const XSD::string_& _name_attr)
{
    m_has_name_attr = true;
    m_name_attr = _name_attr;
}

const XSD::string_& CT_MediaBookmark::get_name_attr() const
{
    return m_name_attr;
}

bool CT_MediaBookmark::has_time_attr() const
{
    return m_has_time_attr;
}

void CT_MediaBookmark::set_time_attr(const ST_UniversalTimeOffset& _time_attr)
{
    m_has_time_attr = true;
    m_time_attr = new ST_UniversalTimeOffset(_time_attr);
}

const ST_UniversalTimeOffset& CT_MediaBookmark::get_time_attr() const
{
    if (m_time_attr)
    {
        return *m_time_attr;
    }
    return ST_UniversalTimeOffset::default_instance();
}

CT_MediaBookmark* CT_MediaBookmark::default_instance_ = NULL;

// CT_MediaBookmarkList
CT_MediaBookmarkList::CT_MediaBookmarkList()

{
}
CT_MediaBookmarkList::~CT_MediaBookmarkList()
{
    clear();
}
CT_MediaBookmark* CT_MediaBookmarkList::add_bmk()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_MediaBookmark* pNewChild = pChildGroup->mutable_bmk();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

void CT_MediaBookmarkList::clear()
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

void CT_MediaBookmarkList::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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
            if ((*iter)->has_bmk())
            {
                (*iter)->get_bmk().toXmlElem("p14:bmk", "", _outStream);
            }


        }
    }

    _outStream << "</" << _elemName << ">";
}

const CT_MediaBookmarkList& CT_MediaBookmarkList::default_instance()
{
    if (!CT_MediaBookmarkList::default_instance_)
    {
        CT_MediaBookmarkList::default_instance_ = new CT_MediaBookmarkList();
    }
    return *CT_MediaBookmarkList::default_instance_;
}


// CT_MediaBookmarkList::ChildGroup_1
CT_MediaBookmarkList::ChildGroup_1::ChildGroup_1()
    :m_has_bmk(false),
     m_bmk(NULL)
{
}
bool CT_MediaBookmarkList::ChildGroup_1::has_bmk() const
{
    return m_has_bmk;
}

CT_MediaBookmark* CT_MediaBookmarkList::ChildGroup_1::mutable_bmk()
{

    m_has_bmk = true;
    if (!m_bmk)
    {
        m_bmk = new CT_MediaBookmark();
    }
    return m_bmk;
}

const CT_MediaBookmark& CT_MediaBookmarkList::ChildGroup_1::get_bmk() const
{
    if (m_bmk)
    {
        return *m_bmk;
    }
    return CT_MediaBookmark::default_instance();
}

CT_MediaBookmarkList* CT_MediaBookmarkList::default_instance_ = NULL;

// CT_Media
CT_Media::CT_Media()
    :m_has_trim(false),
     m_trim(NULL),
     m_has_fade(false),
     m_fade(NULL),
     m_has_bmkLst(false),
     m_bmkLst(NULL),
     m_has_extLst(false),
     m_extLst(NULL),
     m_has_r_embed_attr(false),
     m_r_embed_attr(NULL),
     m_has_r_link_attr(false),
     m_r_link_attr(NULL)
{
}
CT_Media::~CT_Media()
{
    clear();
}
bool CT_Media::has_trim() const
{
    return m_has_trim;
}

CT_MediaTrim* CT_Media::mutable_trim()
{
    m_has_trim = true;
    if (!m_trim)
    {
        m_trim = new CT_MediaTrim();
    }
    return m_trim;
}

const CT_MediaTrim& CT_Media::get_trim() const
{
    if (m_trim)
    {
        return *m_trim;
    }
    return CT_MediaTrim::default_instance();
}

bool CT_Media::has_fade() const
{
    return m_has_fade;
}

CT_MediaFade* CT_Media::mutable_fade()
{
    m_has_fade = true;
    if (!m_fade)
    {
        m_fade = new CT_MediaFade();
    }
    return m_fade;
}

const CT_MediaFade& CT_Media::get_fade() const
{
    if (m_fade)
    {
        return *m_fade;
    }
    return CT_MediaFade::default_instance();
}

bool CT_Media::has_bmkLst() const
{
    return m_has_bmkLst;
}

CT_MediaBookmarkList* CT_Media::mutable_bmkLst()
{
    m_has_bmkLst = true;
    if (!m_bmkLst)
    {
        m_bmkLst = new CT_MediaBookmarkList();
    }
    return m_bmkLst;
}

const CT_MediaBookmarkList& CT_Media::get_bmkLst() const
{
    if (m_bmkLst)
    {
        return *m_bmkLst;
    }
    return CT_MediaBookmarkList::default_instance();
}

bool CT_Media::has_extLst() const
{
    return m_has_extLst;
}

ns_p::CT_ExtensionList* CT_Media::mutable_extLst()
{
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new ns_p::CT_ExtensionList();
    }
    return m_extLst;
}

const ns_p::CT_ExtensionList& CT_Media::get_extLst() const
{
    if (m_extLst)
    {
        return *m_extLst;
    }
    return ns_p::CT_ExtensionList::default_instance();
}

void CT_Media::clear()
{
    m_has_r_embed_attr = false;

    if (m_r_embed_attr)
    {
        delete m_r_embed_attr;
        m_r_embed_attr = NULL;
    }


    m_has_r_link_attr = false;

    if (m_r_link_attr)
    {
        delete m_r_link_attr;
        m_r_link_attr = NULL;
    }


    m_has_trim = false;

    if (m_trim)
    {
        delete m_trim;
        m_trim = NULL;
    }


    m_has_fade = false;

    if (m_fade)
    {
        delete m_fade;
        m_fade = NULL;
    }


    m_has_bmkLst = false;

    if (m_bmkLst)
    {
        delete m_bmkLst;
        m_bmkLst = NULL;
    }


    m_has_extLst = false;

    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }

}

void CT_Media::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_r_embed_attr)
    {
        m_r_embed_attr->toXmlAttr("r:embed", _outStream);
    }



    if (m_has_r_link_attr)
    {
        m_r_link_attr->toXmlAttr("r:link", _outStream);
    }

    _outStream << ">";


    if (m_has_trim)
    {
        m_trim->toXmlElem("p14:trim", "", _outStream);
    }


    if (m_has_fade)
    {
        m_fade->toXmlElem("p14:fade", "", _outStream);
    }


    if (m_has_bmkLst)
    {
        m_bmkLst->toXmlElem("p14:bmkLst", "", _outStream);
    }


    if (m_has_extLst)
    {
        m_extLst->toXmlElem("p14:extLst", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_Media& CT_Media::default_instance()
{
    if (!CT_Media::default_instance_)
    {
        CT_Media::default_instance_ = new CT_Media();
    }
    return *CT_Media::default_instance_;
}

bool CT_Media::has_r_embed_attr() const
{
    return m_has_r_embed_attr;
}

void CT_Media::set_r_embed_attr(const ns_r::ST_RelationshipId& _r_embed_attr)
{
    m_has_r_embed_attr = true;
    m_r_embed_attr = new ns_r::ST_RelationshipId(_r_embed_attr);
}

const ns_r::ST_RelationshipId& CT_Media::get_r_embed_attr() const
{
    if (m_r_embed_attr)
    {
        return *m_r_embed_attr;
    }
    return ns_r::ST_RelationshipId::default_instance();
}

bool CT_Media::has_r_link_attr() const
{
    return m_has_r_link_attr;
}

void CT_Media::set_r_link_attr(const ns_r::ST_RelationshipId& _r_link_attr)
{
    m_has_r_link_attr = true;
    m_r_link_attr = new ns_r::ST_RelationshipId(_r_link_attr);
}

const ns_r::ST_RelationshipId& CT_Media::get_r_link_attr() const
{
    if (m_r_link_attr)
    {
        return *m_r_link_attr;
    }
    return ns_r::ST_RelationshipId::default_instance();
}

CT_Media* CT_Media::default_instance_ = NULL;

// CT_SectionSlideIdListEntry
CT_SectionSlideIdListEntry::CT_SectionSlideIdListEntry()
    :m_has_id_attr(false),
     m_id_attr(NULL)
{
}
CT_SectionSlideIdListEntry::~CT_SectionSlideIdListEntry()
{
    clear();
}
void CT_SectionSlideIdListEntry::clear()
{
    m_has_id_attr = false;

    if (m_id_attr)
    {
        delete m_id_attr;
        m_id_attr = NULL;
    }

}

void CT_SectionSlideIdListEntry::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    assert(m_has_id_attr);
    if (m_has_id_attr)
    {
        m_id_attr->toXmlAttr("id", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_SectionSlideIdListEntry& CT_SectionSlideIdListEntry::default_instance()
{
    if (!CT_SectionSlideIdListEntry::default_instance_)
    {
        CT_SectionSlideIdListEntry::default_instance_ = new CT_SectionSlideIdListEntry();
    }
    return *CT_SectionSlideIdListEntry::default_instance_;
}

bool CT_SectionSlideIdListEntry::has_id_attr() const
{
    return m_has_id_attr;
}

void CT_SectionSlideIdListEntry::set_id_attr(const ns_p::ST_SlideId& _id_attr)
{
    m_has_id_attr = true;
    m_id_attr = new ns_p::ST_SlideId(_id_attr);
}

const ns_p::ST_SlideId& CT_SectionSlideIdListEntry::get_id_attr() const
{
    if (m_id_attr)
    {
        return *m_id_attr;
    }
    return ns_p::ST_SlideId::default_instance();
}

CT_SectionSlideIdListEntry* CT_SectionSlideIdListEntry::default_instance_ = NULL;

// CT_SectionSlideIdList
CT_SectionSlideIdList::CT_SectionSlideIdList()

{
}
CT_SectionSlideIdList::~CT_SectionSlideIdList()
{
    clear();
}
CT_SectionSlideIdListEntry* CT_SectionSlideIdList::add_sldId()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_SectionSlideIdListEntry* pNewChild = pChildGroup->mutable_sldId();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

void CT_SectionSlideIdList::clear()
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

void CT_SectionSlideIdList::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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
            if ((*iter)->has_sldId())
            {
                (*iter)->get_sldId().toXmlElem("p14:sldId", "", _outStream);
            }


        }
    }

    _outStream << "</" << _elemName << ">";
}

const CT_SectionSlideIdList& CT_SectionSlideIdList::default_instance()
{
    if (!CT_SectionSlideIdList::default_instance_)
    {
        CT_SectionSlideIdList::default_instance_ = new CT_SectionSlideIdList();
    }
    return *CT_SectionSlideIdList::default_instance_;
}


// CT_SectionSlideIdList::ChildGroup_1
CT_SectionSlideIdList::ChildGroup_1::ChildGroup_1()
    :m_has_sldId(false),
     m_sldId(NULL)
{
}
bool CT_SectionSlideIdList::ChildGroup_1::has_sldId() const
{
    return m_has_sldId;
}

CT_SectionSlideIdListEntry* CT_SectionSlideIdList::ChildGroup_1::mutable_sldId()
{

    m_has_sldId = true;
    if (!m_sldId)
    {
        m_sldId = new CT_SectionSlideIdListEntry();
    }
    return m_sldId;
}

const CT_SectionSlideIdListEntry& CT_SectionSlideIdList::ChildGroup_1::get_sldId() const
{
    if (m_sldId)
    {
        return *m_sldId;
    }
    return CT_SectionSlideIdListEntry::default_instance();
}

CT_SectionSlideIdList* CT_SectionSlideIdList::default_instance_ = NULL;

// CT_Section
CT_Section::CT_Section()
    :m_has_sldIdLst(false),
     m_sldIdLst(NULL),
     m_has_extLst(false),
     m_extLst(NULL),
     m_has_name_attr(false),
     m_name_attr(""),
     m_has_id_attr(false),
     m_id_attr(NULL)
{
}
CT_Section::~CT_Section()
{
    clear();
}
bool CT_Section::has_sldIdLst() const
{
    return m_has_sldIdLst;
}

CT_SectionSlideIdList* CT_Section::mutable_sldIdLst()
{
    m_has_sldIdLst = true;
    if (!m_sldIdLst)
    {
        m_sldIdLst = new CT_SectionSlideIdList();
    }
    return m_sldIdLst;
}

const CT_SectionSlideIdList& CT_Section::get_sldIdLst() const
{
    if (m_sldIdLst)
    {
        return *m_sldIdLst;
    }
    return CT_SectionSlideIdList::default_instance();
}

bool CT_Section::has_extLst() const
{
    return m_has_extLst;
}

ns_p::CT_ExtensionList* CT_Section::mutable_extLst()
{
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new ns_p::CT_ExtensionList();
    }
    return m_extLst;
}

const ns_p::CT_ExtensionList& CT_Section::get_extLst() const
{
    if (m_extLst)
    {
        return *m_extLst;
    }
    return ns_p::CT_ExtensionList::default_instance();
}

void CT_Section::clear()
{
    m_has_name_attr = false;
    m_name_attr.clear();

    m_has_id_attr = false;

    if (m_id_attr)
    {
        delete m_id_attr;
        m_id_attr = NULL;
    }


    m_has_sldIdLst = false;

    if (m_sldIdLst)
    {
        delete m_sldIdLst;
        m_sldIdLst = NULL;
    }


    m_has_extLst = false;

    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }

}

void CT_Section::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_name_attr)
    {
        _outStream << " " << "name" << "=\"" << m_name_attr << "\"";
    }



    if (m_has_id_attr)
    {
        m_id_attr->toXmlAttr("id", _outStream);
    }

    _outStream << ">";

    assert(m_has_sldIdLst);


    if (m_has_sldIdLst)
    {
        m_sldIdLst->toXmlElem("p14:sldIdLst", "", _outStream);
    }


    if (m_has_extLst)
    {
        m_extLst->toXmlElem("p14:extLst", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_Section& CT_Section::default_instance()
{
    if (!CT_Section::default_instance_)
    {
        CT_Section::default_instance_ = new CT_Section();
    }
    return *CT_Section::default_instance_;
}

bool CT_Section::has_name_attr() const
{
    return m_has_name_attr;
}

void CT_Section::set_name_attr(const XSD::string_& _name_attr)
{
    m_has_name_attr = true;
    m_name_attr = _name_attr;
}

const XSD::string_& CT_Section::get_name_attr() const
{
    return m_name_attr;
}

bool CT_Section::has_id_attr() const
{
    return m_has_id_attr;
}

void CT_Section::set_id_attr(const ns_s::ST_Guid& _id_attr)
{
    m_has_id_attr = true;
    m_id_attr = new ns_s::ST_Guid(_id_attr);
}

const ns_s::ST_Guid& CT_Section::get_id_attr() const
{
    if (m_id_attr)
    {
        return *m_id_attr;
    }
    return ns_s::ST_Guid::default_instance();
}

CT_Section* CT_Section::default_instance_ = NULL;

// CT_SectionList
CT_SectionList::CT_SectionList()

{
}
CT_SectionList::~CT_SectionList()
{
    clear();
}
CT_Section* CT_SectionList::add_section()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Section* pNewChild = pChildGroup->mutable_section();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

void CT_SectionList::clear()
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

void CT_SectionList::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";

    {
        int childSize = count_if(m_childGroupList_1.begin(), m_childGroupList_1.end(), mem_fun(&ChildGroup_1::has_section));
        assert(1 <= childSize);
    }

    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_section())
            {
                (*iter)->get_section().toXmlElem("p14:section", "", _outStream);
            }


        }
    }

    _outStream << "</" << _elemName << ">";
}

const CT_SectionList& CT_SectionList::default_instance()
{
    if (!CT_SectionList::default_instance_)
    {
        CT_SectionList::default_instance_ = new CT_SectionList();
    }
    return *CT_SectionList::default_instance_;
}


// CT_SectionList::ChildGroup_1
CT_SectionList::ChildGroup_1::ChildGroup_1()
    :m_has_section(false),
     m_section(NULL)
{
}
bool CT_SectionList::ChildGroup_1::has_section() const
{
    return m_has_section;
}

CT_Section* CT_SectionList::ChildGroup_1::mutable_section()
{

    m_has_section = true;
    if (!m_section)
    {
        m_section = new CT_Section();
    }
    return m_section;
}

const CT_Section& CT_SectionList::ChildGroup_1::get_section() const
{
    if (m_section)
    {
        return *m_section;
    }
    return CT_Section::default_instance();
}

CT_SectionList* CT_SectionList::default_instance_ = NULL;

// CT_BrowseMode
CT_BrowseMode::CT_BrowseMode()
    :m_has_showStatus_attr(false),
     m_showStatus_attr(false)
{
}
CT_BrowseMode::~CT_BrowseMode()
{
    clear();
}
void CT_BrowseMode::clear()
{
    m_has_showStatus_attr = false;
    m_showStatus_attr = false;
}

void CT_BrowseMode::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_showStatus_attr)
    {
        _outStream << " " << "showStatus" << "=\"" << XSD::XMLBooleanStr(m_showStatus_attr) << "\"";
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_BrowseMode& CT_BrowseMode::default_instance()
{
    if (!CT_BrowseMode::default_instance_)
    {
        CT_BrowseMode::default_instance_ = new CT_BrowseMode();
    }
    return *CT_BrowseMode::default_instance_;
}

bool CT_BrowseMode::has_showStatus_attr() const
{
    return m_has_showStatus_attr;
}

void CT_BrowseMode::set_showStatus_attr(const XSD::boolean_& _showStatus_attr)
{
    m_has_showStatus_attr = true;
    m_showStatus_attr = _showStatus_attr;
}

const XSD::boolean_& CT_BrowseMode::get_showStatus_attr() const
{
    return m_showStatus_attr;
}

CT_BrowseMode* CT_BrowseMode::default_instance_ = NULL;

// CT_DefaultImageDpi
CT_DefaultImageDpi::CT_DefaultImageDpi()
    :m_has_val_attr(false),
     m_val_attr(0)
{
}
CT_DefaultImageDpi::~CT_DefaultImageDpi()
{
    clear();
}
void CT_DefaultImageDpi::clear()
{
    m_has_val_attr = false;
    m_val_attr = 0;
}

void CT_DefaultImageDpi::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    assert(m_has_val_attr);
    if (m_has_val_attr)
    {
        _outStream << " " << "val" << "=\"" << m_val_attr << "\"";
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_DefaultImageDpi& CT_DefaultImageDpi::default_instance()
{
    if (!CT_DefaultImageDpi::default_instance_)
    {
        CT_DefaultImageDpi::default_instance_ = new CT_DefaultImageDpi();
    }
    return *CT_DefaultImageDpi::default_instance_;
}

bool CT_DefaultImageDpi::has_val_attr() const
{
    return m_has_val_attr;
}

void CT_DefaultImageDpi::set_val_attr(const XSD::unsignedInt_& _val_attr)
{
    m_has_val_attr = true;
    m_val_attr = _val_attr;
}

const XSD::unsignedInt_& CT_DefaultImageDpi::get_val_attr() const
{
    return m_val_attr;
}

CT_DefaultImageDpi* CT_DefaultImageDpi::default_instance_ = NULL;

// CT_DiscardImageEditData
CT_DiscardImageEditData::CT_DiscardImageEditData()
    :m_has_val_attr(false),
     m_val_attr(false)
{
}
CT_DiscardImageEditData::~CT_DiscardImageEditData()
{
    clear();
}
void CT_DiscardImageEditData::clear()
{
    m_has_val_attr = false;
    m_val_attr = false;
}

void CT_DiscardImageEditData::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    assert(m_has_val_attr);
    if (m_has_val_attr)
    {
        _outStream << " " << "val" << "=\"" << XSD::XMLBooleanStr(m_val_attr) << "\"";
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_DiscardImageEditData& CT_DiscardImageEditData::default_instance()
{
    if (!CT_DiscardImageEditData::default_instance_)
    {
        CT_DiscardImageEditData::default_instance_ = new CT_DiscardImageEditData();
    }
    return *CT_DiscardImageEditData::default_instance_;
}

bool CT_DiscardImageEditData::has_val_attr() const
{
    return m_has_val_attr;
}

void CT_DiscardImageEditData::set_val_attr(const XSD::boolean_& _val_attr)
{
    m_has_val_attr = true;
    m_val_attr = _val_attr;
}

const XSD::boolean_& CT_DiscardImageEditData::get_val_attr() const
{
    return m_val_attr;
}

CT_DiscardImageEditData* CT_DiscardImageEditData::default_instance_ = NULL;

// CT_ShowMediaControls
CT_ShowMediaControls::CT_ShowMediaControls()
    :m_has_val_attr(false),
     m_val_attr(false)
{
}
CT_ShowMediaControls::~CT_ShowMediaControls()
{
    clear();
}
void CT_ShowMediaControls::clear()
{
    m_has_val_attr = false;
    m_val_attr = false;
}

void CT_ShowMediaControls::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    assert(m_has_val_attr);
    if (m_has_val_attr)
    {
        _outStream << " " << "val" << "=\"" << XSD::XMLBooleanStr(m_val_attr) << "\"";
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_ShowMediaControls& CT_ShowMediaControls::default_instance()
{
    if (!CT_ShowMediaControls::default_instance_)
    {
        CT_ShowMediaControls::default_instance_ = new CT_ShowMediaControls();
    }
    return *CT_ShowMediaControls::default_instance_;
}

bool CT_ShowMediaControls::has_val_attr() const
{
    return m_has_val_attr;
}

void CT_ShowMediaControls::set_val_attr(const XSD::boolean_& _val_attr)
{
    m_has_val_attr = true;
    m_val_attr = _val_attr;
}

const XSD::boolean_& CT_ShowMediaControls::get_val_attr() const
{
    return m_val_attr;
}

CT_ShowMediaControls* CT_ShowMediaControls::default_instance_ = NULL;

// CT_LaserTracePoint
CT_LaserTracePoint::CT_LaserTracePoint()
    :m_has_t_attr(false),
     m_t_attr(NULL),
     m_has_x_attr(false),
     m_x_attr(NULL),
     m_has_y_attr(false),
     m_y_attr(NULL)
{
}
CT_LaserTracePoint::~CT_LaserTracePoint()
{
    clear();
}
void CT_LaserTracePoint::clear()
{
    m_has_t_attr = false;

    if (m_t_attr)
    {
        delete m_t_attr;
        m_t_attr = NULL;
    }


    m_has_x_attr = false;

    if (m_x_attr)
    {
        delete m_x_attr;
        m_x_attr = NULL;
    }


    m_has_y_attr = false;

    if (m_y_attr)
    {
        delete m_y_attr;
        m_y_attr = NULL;
    }

}

void CT_LaserTracePoint::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    assert(m_has_t_attr);
    if (m_has_t_attr)
    {
        m_t_attr->toXmlAttr("t", _outStream);
    }


    assert(m_has_x_attr);
    if (m_has_x_attr)
    {
        m_x_attr->toXmlAttr("x", _outStream);
    }


    assert(m_has_y_attr);
    if (m_has_y_attr)
    {
        m_y_attr->toXmlAttr("y", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_LaserTracePoint& CT_LaserTracePoint::default_instance()
{
    if (!CT_LaserTracePoint::default_instance_)
    {
        CT_LaserTracePoint::default_instance_ = new CT_LaserTracePoint();
    }
    return *CT_LaserTracePoint::default_instance_;
}

bool CT_LaserTracePoint::has_t_attr() const
{
    return m_has_t_attr;
}

void CT_LaserTracePoint::set_t_attr(const ST_UniversalTimeOffset& _t_attr)
{
    m_has_t_attr = true;
    m_t_attr = new ST_UniversalTimeOffset(_t_attr);
}

const ST_UniversalTimeOffset& CT_LaserTracePoint::get_t_attr() const
{
    if (m_t_attr)
    {
        return *m_t_attr;
    }
    return ST_UniversalTimeOffset::default_instance();
}

bool CT_LaserTracePoint::has_x_attr() const
{
    return m_has_x_attr;
}

void CT_LaserTracePoint::set_x_attr(const ns_a::ST_Coordinate& _x_attr)
{
    m_has_x_attr = true;
    m_x_attr = new ns_a::ST_Coordinate(_x_attr);
}

const ns_a::ST_Coordinate& CT_LaserTracePoint::get_x_attr() const
{
    if (m_x_attr)
    {
        return *m_x_attr;
    }
    return ns_a::ST_Coordinate::default_instance();
}

bool CT_LaserTracePoint::has_y_attr() const
{
    return m_has_y_attr;
}

void CT_LaserTracePoint::set_y_attr(const ns_a::ST_Coordinate& _y_attr)
{
    m_has_y_attr = true;
    m_y_attr = new ns_a::ST_Coordinate(_y_attr);
}

const ns_a::ST_Coordinate& CT_LaserTracePoint::get_y_attr() const
{
    if (m_y_attr)
    {
        return *m_y_attr;
    }
    return ns_a::ST_Coordinate::default_instance();
}

CT_LaserTracePoint* CT_LaserTracePoint::default_instance_ = NULL;

// CT_LaserTrace
CT_LaserTrace::CT_LaserTrace()

{
}
CT_LaserTrace::~CT_LaserTrace()
{
    clear();
}
CT_LaserTracePoint* CT_LaserTrace::add_tracePt()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_LaserTracePoint* pNewChild = pChildGroup->mutable_tracePt();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

void CT_LaserTrace::clear()
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

void CT_LaserTrace::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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
            if ((*iter)->has_tracePt())
            {
                (*iter)->get_tracePt().toXmlElem("p14:tracePt", "", _outStream);
            }


        }
    }

    _outStream << "</" << _elemName << ">";
}

const CT_LaserTrace& CT_LaserTrace::default_instance()
{
    if (!CT_LaserTrace::default_instance_)
    {
        CT_LaserTrace::default_instance_ = new CT_LaserTrace();
    }
    return *CT_LaserTrace::default_instance_;
}


// CT_LaserTrace::ChildGroup_1
CT_LaserTrace::ChildGroup_1::ChildGroup_1()
    :m_has_tracePt(false),
     m_tracePt(NULL)
{
}
bool CT_LaserTrace::ChildGroup_1::has_tracePt() const
{
    return m_has_tracePt;
}

CT_LaserTracePoint* CT_LaserTrace::ChildGroup_1::mutable_tracePt()
{

    m_has_tracePt = true;
    if (!m_tracePt)
    {
        m_tracePt = new CT_LaserTracePoint();
    }
    return m_tracePt;
}

const CT_LaserTracePoint& CT_LaserTrace::ChildGroup_1::get_tracePt() const
{
    if (m_tracePt)
    {
        return *m_tracePt;
    }
    return CT_LaserTracePoint::default_instance();
}

CT_LaserTrace* CT_LaserTrace::default_instance_ = NULL;

// CT_LaserTraceList
CT_LaserTraceList::CT_LaserTraceList()

{
}
CT_LaserTraceList::~CT_LaserTraceList()
{
    clear();
}
CT_LaserTrace* CT_LaserTraceList::add_tracePtLst()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_LaserTrace* pNewChild = pChildGroup->mutable_tracePtLst();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

void CT_LaserTraceList::clear()
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

void CT_LaserTraceList::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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
            if ((*iter)->has_tracePtLst())
            {
                (*iter)->get_tracePtLst().toXmlElem("p14:tracePtLst", "", _outStream);
            }


        }
    }

    _outStream << "</" << _elemName << ">";
}

const CT_LaserTraceList& CT_LaserTraceList::default_instance()
{
    if (!CT_LaserTraceList::default_instance_)
    {
        CT_LaserTraceList::default_instance_ = new CT_LaserTraceList();
    }
    return *CT_LaserTraceList::default_instance_;
}


// CT_LaserTraceList::ChildGroup_1
CT_LaserTraceList::ChildGroup_1::ChildGroup_1()
    :m_has_tracePtLst(false),
     m_tracePtLst(NULL)
{
}
bool CT_LaserTraceList::ChildGroup_1::has_tracePtLst() const
{
    return m_has_tracePtLst;
}

CT_LaserTrace* CT_LaserTraceList::ChildGroup_1::mutable_tracePtLst()
{

    m_has_tracePtLst = true;
    if (!m_tracePtLst)
    {
        m_tracePtLst = new CT_LaserTrace();
    }
    return m_tracePtLst;
}

const CT_LaserTrace& CT_LaserTraceList::ChildGroup_1::get_tracePtLst() const
{
    if (m_tracePtLst)
    {
        return *m_tracePtLst;
    }
    return CT_LaserTrace::default_instance();
}

CT_LaserTraceList* CT_LaserTraceList::default_instance_ = NULL;

// CT_RandomId
CT_RandomId::CT_RandomId()
    :m_has_val_attr(false),
     m_val_attr(0)
{
}
CT_RandomId::~CT_RandomId()
{
    clear();
}
void CT_RandomId::clear()
{
    m_has_val_attr = false;
    m_val_attr = 0;
}

void CT_RandomId::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    assert(m_has_val_attr);
    if (m_has_val_attr)
    {
        _outStream << " " << "val" << "=\"" << m_val_attr << "\"";
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_RandomId& CT_RandomId::default_instance()
{
    if (!CT_RandomId::default_instance_)
    {
        CT_RandomId::default_instance_ = new CT_RandomId();
    }
    return *CT_RandomId::default_instance_;
}

bool CT_RandomId::has_val_attr() const
{
    return m_has_val_attr;
}

void CT_RandomId::set_val_attr(const XSD::unsignedInt_& _val_attr)
{
    m_has_val_attr = true;
    m_val_attr = _val_attr;
}

const XSD::unsignedInt_& CT_RandomId::get_val_attr() const
{
    return m_val_attr;
}

CT_RandomId* CT_RandomId::default_instance_ = NULL;

// CT_TriggerEventRecord
CT_TriggerEventRecord::CT_TriggerEventRecord()
    :m_has_type_attr(false),
     m_type_attr(NULL),
     m_has_time_attr(false),
     m_time_attr(NULL),
     m_has_objId_attr(false),
     m_objId_attr(NULL)
{
}
CT_TriggerEventRecord::~CT_TriggerEventRecord()
{
    clear();
}
void CT_TriggerEventRecord::clear()
{
    m_has_type_attr = false;

    if (m_type_attr)
    {
        delete m_type_attr;
        m_type_attr = NULL;
    }


    m_has_time_attr = false;

    if (m_time_attr)
    {
        delete m_time_attr;
        m_time_attr = NULL;
    }


    m_has_objId_attr = false;

    if (m_objId_attr)
    {
        delete m_objId_attr;
        m_objId_attr = NULL;
    }

}

void CT_TriggerEventRecord::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    assert(m_has_type_attr);
    if (m_has_type_attr)
    {
        m_type_attr->toXmlAttr("type", _outStream);
    }


    assert(m_has_time_attr);
    if (m_has_time_attr)
    {
        m_time_attr->toXmlAttr("time", _outStream);
    }


    assert(m_has_objId_attr);
    if (m_has_objId_attr)
    {
        m_objId_attr->toXmlAttr("objId", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_TriggerEventRecord& CT_TriggerEventRecord::default_instance()
{
    if (!CT_TriggerEventRecord::default_instance_)
    {
        CT_TriggerEventRecord::default_instance_ = new CT_TriggerEventRecord();
    }
    return *CT_TriggerEventRecord::default_instance_;
}

bool CT_TriggerEventRecord::has_type_attr() const
{
    return m_has_type_attr;
}

void CT_TriggerEventRecord::set_type_attr(const ns_p::ST_TLTriggerEvent& _type_attr)
{
    m_has_type_attr = true;
    m_type_attr = new ns_p::ST_TLTriggerEvent(_type_attr);
}

const ns_p::ST_TLTriggerEvent& CT_TriggerEventRecord::get_type_attr() const
{
    if (m_type_attr)
    {
        return *m_type_attr;
    }
    return ns_p::ST_TLTriggerEvent::default_instance();
}

bool CT_TriggerEventRecord::has_time_attr() const
{
    return m_has_time_attr;
}

void CT_TriggerEventRecord::set_time_attr(const ST_UniversalTimeOffset& _time_attr)
{
    m_has_time_attr = true;
    m_time_attr = new ST_UniversalTimeOffset(_time_attr);
}

const ST_UniversalTimeOffset& CT_TriggerEventRecord::get_time_attr() const
{
    if (m_time_attr)
    {
        return *m_time_attr;
    }
    return ST_UniversalTimeOffset::default_instance();
}

bool CT_TriggerEventRecord::has_objId_attr() const
{
    return m_has_objId_attr;
}

void CT_TriggerEventRecord::set_objId_attr(const ns_a::ST_DrawingElementId& _objId_attr)
{
    m_has_objId_attr = true;
    m_objId_attr = new ns_a::ST_DrawingElementId(_objId_attr);
}

const ns_a::ST_DrawingElementId& CT_TriggerEventRecord::get_objId_attr() const
{
    if (m_objId_attr)
    {
        return *m_objId_attr;
    }
    return ns_a::ST_DrawingElementId::default_instance();
}

CT_TriggerEventRecord* CT_TriggerEventRecord::default_instance_ = NULL;

// CT_NullEventRecord
CT_NullEventRecord::CT_NullEventRecord()
    :m_has_time_attr(false),
     m_time_attr(NULL),
     m_has_objId_attr(false),
     m_objId_attr(NULL)
{
}
CT_NullEventRecord::~CT_NullEventRecord()
{
    clear();
}
void CT_NullEventRecord::clear()
{
    m_has_time_attr = false;

    if (m_time_attr)
    {
        delete m_time_attr;
        m_time_attr = NULL;
    }


    m_has_objId_attr = false;

    if (m_objId_attr)
    {
        delete m_objId_attr;
        m_objId_attr = NULL;
    }

}

void CT_NullEventRecord::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    assert(m_has_time_attr);
    if (m_has_time_attr)
    {
        m_time_attr->toXmlAttr("time", _outStream);
    }


    assert(m_has_objId_attr);
    if (m_has_objId_attr)
    {
        m_objId_attr->toXmlAttr("objId", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_NullEventRecord& CT_NullEventRecord::default_instance()
{
    if (!CT_NullEventRecord::default_instance_)
    {
        CT_NullEventRecord::default_instance_ = new CT_NullEventRecord();
    }
    return *CT_NullEventRecord::default_instance_;
}

bool CT_NullEventRecord::has_time_attr() const
{
    return m_has_time_attr;
}

void CT_NullEventRecord::set_time_attr(const ST_UniversalTimeOffset& _time_attr)
{
    m_has_time_attr = true;
    m_time_attr = new ST_UniversalTimeOffset(_time_attr);
}

const ST_UniversalTimeOffset& CT_NullEventRecord::get_time_attr() const
{
    if (m_time_attr)
    {
        return *m_time_attr;
    }
    return ST_UniversalTimeOffset::default_instance();
}

bool CT_NullEventRecord::has_objId_attr() const
{
    return m_has_objId_attr;
}

void CT_NullEventRecord::set_objId_attr(const ns_a::ST_DrawingElementId& _objId_attr)
{
    m_has_objId_attr = true;
    m_objId_attr = new ns_a::ST_DrawingElementId(_objId_attr);
}

const ns_a::ST_DrawingElementId& CT_NullEventRecord::get_objId_attr() const
{
    if (m_objId_attr)
    {
        return *m_objId_attr;
    }
    return ns_a::ST_DrawingElementId::default_instance();
}

CT_NullEventRecord* CT_NullEventRecord::default_instance_ = NULL;

// CT_MediaPlaybackEventRecord
CT_MediaPlaybackEventRecord::CT_MediaPlaybackEventRecord()
    :m_has_time_attr(false),
     m_time_attr(NULL),
     m_has_objId_attr(false),
     m_objId_attr(NULL)
{
}
CT_MediaPlaybackEventRecord::~CT_MediaPlaybackEventRecord()
{
    clear();
}
void CT_MediaPlaybackEventRecord::clear()
{
    m_has_time_attr = false;

    if (m_time_attr)
    {
        delete m_time_attr;
        m_time_attr = NULL;
    }


    m_has_objId_attr = false;

    if (m_objId_attr)
    {
        delete m_objId_attr;
        m_objId_attr = NULL;
    }

}

void CT_MediaPlaybackEventRecord::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    assert(m_has_time_attr);
    if (m_has_time_attr)
    {
        m_time_attr->toXmlAttr("time", _outStream);
    }


    assert(m_has_objId_attr);
    if (m_has_objId_attr)
    {
        m_objId_attr->toXmlAttr("objId", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_MediaPlaybackEventRecord& CT_MediaPlaybackEventRecord::default_instance()
{
    if (!CT_MediaPlaybackEventRecord::default_instance_)
    {
        CT_MediaPlaybackEventRecord::default_instance_ = new CT_MediaPlaybackEventRecord();
    }
    return *CT_MediaPlaybackEventRecord::default_instance_;
}

bool CT_MediaPlaybackEventRecord::has_time_attr() const
{
    return m_has_time_attr;
}

void CT_MediaPlaybackEventRecord::set_time_attr(const ST_UniversalTimeOffset& _time_attr)
{
    m_has_time_attr = true;
    m_time_attr = new ST_UniversalTimeOffset(_time_attr);
}

const ST_UniversalTimeOffset& CT_MediaPlaybackEventRecord::get_time_attr() const
{
    if (m_time_attr)
    {
        return *m_time_attr;
    }
    return ST_UniversalTimeOffset::default_instance();
}

bool CT_MediaPlaybackEventRecord::has_objId_attr() const
{
    return m_has_objId_attr;
}

void CT_MediaPlaybackEventRecord::set_objId_attr(const ns_a::ST_DrawingElementId& _objId_attr)
{
    m_has_objId_attr = true;
    m_objId_attr = new ns_a::ST_DrawingElementId(_objId_attr);
}

const ns_a::ST_DrawingElementId& CT_MediaPlaybackEventRecord::get_objId_attr() const
{
    if (m_objId_attr)
    {
        return *m_objId_attr;
    }
    return ns_a::ST_DrawingElementId::default_instance();
}

CT_MediaPlaybackEventRecord* CT_MediaPlaybackEventRecord::default_instance_ = NULL;

// CT_MediaSeekEventRecord
CT_MediaSeekEventRecord::CT_MediaSeekEventRecord()
    :m_has_time_attr(false),
     m_time_attr(NULL),
     m_has_objId_attr(false),
     m_objId_attr(NULL),
     m_has_seek_attr(false),
     m_seek_attr(NULL)
{
}
CT_MediaSeekEventRecord::~CT_MediaSeekEventRecord()
{
    clear();
}
void CT_MediaSeekEventRecord::clear()
{
    m_has_time_attr = false;

    if (m_time_attr)
    {
        delete m_time_attr;
        m_time_attr = NULL;
    }


    m_has_objId_attr = false;

    if (m_objId_attr)
    {
        delete m_objId_attr;
        m_objId_attr = NULL;
    }


    m_has_seek_attr = false;

    if (m_seek_attr)
    {
        delete m_seek_attr;
        m_seek_attr = NULL;
    }

}

void CT_MediaSeekEventRecord::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    assert(m_has_time_attr);
    if (m_has_time_attr)
    {
        m_time_attr->toXmlAttr("time", _outStream);
    }


    assert(m_has_objId_attr);
    if (m_has_objId_attr)
    {
        m_objId_attr->toXmlAttr("objId", _outStream);
    }


    assert(m_has_seek_attr);
    if (m_has_seek_attr)
    {
        m_seek_attr->toXmlAttr("seek", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_MediaSeekEventRecord& CT_MediaSeekEventRecord::default_instance()
{
    if (!CT_MediaSeekEventRecord::default_instance_)
    {
        CT_MediaSeekEventRecord::default_instance_ = new CT_MediaSeekEventRecord();
    }
    return *CT_MediaSeekEventRecord::default_instance_;
}

bool CT_MediaSeekEventRecord::has_time_attr() const
{
    return m_has_time_attr;
}

void CT_MediaSeekEventRecord::set_time_attr(const ST_UniversalTimeOffset& _time_attr)
{
    m_has_time_attr = true;
    m_time_attr = new ST_UniversalTimeOffset(_time_attr);
}

const ST_UniversalTimeOffset& CT_MediaSeekEventRecord::get_time_attr() const
{
    if (m_time_attr)
    {
        return *m_time_attr;
    }
    return ST_UniversalTimeOffset::default_instance();
}

bool CT_MediaSeekEventRecord::has_objId_attr() const
{
    return m_has_objId_attr;
}

void CT_MediaSeekEventRecord::set_objId_attr(const ns_a::ST_DrawingElementId& _objId_attr)
{
    m_has_objId_attr = true;
    m_objId_attr = new ns_a::ST_DrawingElementId(_objId_attr);
}

const ns_a::ST_DrawingElementId& CT_MediaSeekEventRecord::get_objId_attr() const
{
    if (m_objId_attr)
    {
        return *m_objId_attr;
    }
    return ns_a::ST_DrawingElementId::default_instance();
}

bool CT_MediaSeekEventRecord::has_seek_attr() const
{
    return m_has_seek_attr;
}

void CT_MediaSeekEventRecord::set_seek_attr(const ST_UniversalTimeOffset& _seek_attr)
{
    m_has_seek_attr = true;
    m_seek_attr = new ST_UniversalTimeOffset(_seek_attr);
}

const ST_UniversalTimeOffset& CT_MediaSeekEventRecord::get_seek_attr() const
{
    if (m_seek_attr)
    {
        return *m_seek_attr;
    }
    return ST_UniversalTimeOffset::default_instance();
}

CT_MediaSeekEventRecord* CT_MediaSeekEventRecord::default_instance_ = NULL;

// CT_ShowEventRecordList
CT_ShowEventRecordList::CT_ShowEventRecordList()

{
}
CT_ShowEventRecordList::~CT_ShowEventRecordList()
{
    clear();
}
CT_TriggerEventRecord* CT_ShowEventRecordList::add_triggerEvt()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_TriggerEventRecord* pNewChild = pChildGroup->mutable_triggerEvt();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

CT_MediaPlaybackEventRecord* CT_ShowEventRecordList::add_playEvt()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_MediaPlaybackEventRecord* pNewChild = pChildGroup->mutable_playEvt();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

CT_MediaPlaybackEventRecord* CT_ShowEventRecordList::add_stopEvt()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_MediaPlaybackEventRecord* pNewChild = pChildGroup->mutable_stopEvt();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

CT_MediaPlaybackEventRecord* CT_ShowEventRecordList::add_pauseEvt()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_MediaPlaybackEventRecord* pNewChild = pChildGroup->mutable_pauseEvt();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

CT_MediaPlaybackEventRecord* CT_ShowEventRecordList::add_resumeEvt()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_MediaPlaybackEventRecord* pNewChild = pChildGroup->mutable_resumeEvt();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

CT_MediaSeekEventRecord* CT_ShowEventRecordList::add_seekEvt()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_MediaSeekEventRecord* pNewChild = pChildGroup->mutable_seekEvt();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

CT_NullEventRecord* CT_ShowEventRecordList::add_nullEvt()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_NullEventRecord* pNewChild = pChildGroup->mutable_nullEvt();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

void CT_ShowEventRecordList::clear()
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

void CT_ShowEventRecordList::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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
            if ((*iter)->has_triggerEvt())
            {
                (*iter)->get_triggerEvt().toXmlElem("p14:triggerEvt", "", _outStream);
            }


            else if ((*iter)->has_playEvt())
            {
                (*iter)->get_playEvt().toXmlElem("p14:playEvt", "", _outStream);
            }


            else if ((*iter)->has_stopEvt())
            {
                (*iter)->get_stopEvt().toXmlElem("p14:stopEvt", "", _outStream);
            }


            else if ((*iter)->has_pauseEvt())
            {
                (*iter)->get_pauseEvt().toXmlElem("p14:pauseEvt", "", _outStream);
            }


            else if ((*iter)->has_resumeEvt())
            {
                (*iter)->get_resumeEvt().toXmlElem("p14:resumeEvt", "", _outStream);
            }


            else if ((*iter)->has_seekEvt())
            {
                (*iter)->get_seekEvt().toXmlElem("p14:seekEvt", "", _outStream);
            }


            else if ((*iter)->has_nullEvt())
            {
                (*iter)->get_nullEvt().toXmlElem("p14:nullEvt", "", _outStream);
            }


        }
    }

    _outStream << "</" << _elemName << ">";
}

const CT_ShowEventRecordList& CT_ShowEventRecordList::default_instance()
{
    if (!CT_ShowEventRecordList::default_instance_)
    {
        CT_ShowEventRecordList::default_instance_ = new CT_ShowEventRecordList();
    }
    return *CT_ShowEventRecordList::default_instance_;
}


// CT_ShowEventRecordList::ChildGroup_1
CT_ShowEventRecordList::ChildGroup_1::ChildGroup_1()
    :m_has_triggerEvt(false),
     m_triggerEvt(NULL),
     m_has_playEvt(false),
     m_playEvt(NULL),
     m_has_stopEvt(false),
     m_stopEvt(NULL),
     m_has_pauseEvt(false),
     m_pauseEvt(NULL),
     m_has_resumeEvt(false),
     m_resumeEvt(NULL),
     m_has_seekEvt(false),
     m_seekEvt(NULL),
     m_has_nullEvt(false),
     m_nullEvt(NULL)
{
}
bool CT_ShowEventRecordList::ChildGroup_1::has_triggerEvt() const
{
    return m_has_triggerEvt;
}

CT_TriggerEventRecord* CT_ShowEventRecordList::ChildGroup_1::mutable_triggerEvt()
{

    m_has_playEvt = false;

    if (m_playEvt)
    {
        delete m_playEvt;
        m_playEvt = NULL;
    }
    ;

    m_has_stopEvt = false;

    if (m_stopEvt)
    {
        delete m_stopEvt;
        m_stopEvt = NULL;
    }
    ;

    m_has_pauseEvt = false;

    if (m_pauseEvt)
    {
        delete m_pauseEvt;
        m_pauseEvt = NULL;
    }
    ;

    m_has_resumeEvt = false;

    if (m_resumeEvt)
    {
        delete m_resumeEvt;
        m_resumeEvt = NULL;
    }
    ;

    m_has_seekEvt = false;

    if (m_seekEvt)
    {
        delete m_seekEvt;
        m_seekEvt = NULL;
    }
    ;

    m_has_nullEvt = false;

    if (m_nullEvt)
    {
        delete m_nullEvt;
        m_nullEvt = NULL;
    }
    ;

    m_has_triggerEvt = true;
    if (!m_triggerEvt)
    {
        m_triggerEvt = new CT_TriggerEventRecord();
    }
    return m_triggerEvt;
}

const CT_TriggerEventRecord& CT_ShowEventRecordList::ChildGroup_1::get_triggerEvt() const
{
    if (m_triggerEvt)
    {
        return *m_triggerEvt;
    }
    return CT_TriggerEventRecord::default_instance();
}

bool CT_ShowEventRecordList::ChildGroup_1::has_playEvt() const
{
    return m_has_playEvt;
}

CT_MediaPlaybackEventRecord* CT_ShowEventRecordList::ChildGroup_1::mutable_playEvt()
{

    m_has_triggerEvt = false;

    if (m_triggerEvt)
    {
        delete m_triggerEvt;
        m_triggerEvt = NULL;
    }
    ;

    m_has_stopEvt = false;

    if (m_stopEvt)
    {
        delete m_stopEvt;
        m_stopEvt = NULL;
    }
    ;

    m_has_pauseEvt = false;

    if (m_pauseEvt)
    {
        delete m_pauseEvt;
        m_pauseEvt = NULL;
    }
    ;

    m_has_resumeEvt = false;

    if (m_resumeEvt)
    {
        delete m_resumeEvt;
        m_resumeEvt = NULL;
    }
    ;

    m_has_seekEvt = false;

    if (m_seekEvt)
    {
        delete m_seekEvt;
        m_seekEvt = NULL;
    }
    ;

    m_has_nullEvt = false;

    if (m_nullEvt)
    {
        delete m_nullEvt;
        m_nullEvt = NULL;
    }
    ;

    m_has_playEvt = true;
    if (!m_playEvt)
    {
        m_playEvt = new CT_MediaPlaybackEventRecord();
    }
    return m_playEvt;
}

const CT_MediaPlaybackEventRecord& CT_ShowEventRecordList::ChildGroup_1::get_playEvt() const
{
    if (m_playEvt)
    {
        return *m_playEvt;
    }
    return CT_MediaPlaybackEventRecord::default_instance();
}

bool CT_ShowEventRecordList::ChildGroup_1::has_stopEvt() const
{
    return m_has_stopEvt;
}

CT_MediaPlaybackEventRecord* CT_ShowEventRecordList::ChildGroup_1::mutable_stopEvt()
{

    m_has_triggerEvt = false;

    if (m_triggerEvt)
    {
        delete m_triggerEvt;
        m_triggerEvt = NULL;
    }
    ;

    m_has_playEvt = false;

    if (m_playEvt)
    {
        delete m_playEvt;
        m_playEvt = NULL;
    }
    ;

    m_has_pauseEvt = false;

    if (m_pauseEvt)
    {
        delete m_pauseEvt;
        m_pauseEvt = NULL;
    }
    ;

    m_has_resumeEvt = false;

    if (m_resumeEvt)
    {
        delete m_resumeEvt;
        m_resumeEvt = NULL;
    }
    ;

    m_has_seekEvt = false;

    if (m_seekEvt)
    {
        delete m_seekEvt;
        m_seekEvt = NULL;
    }
    ;

    m_has_nullEvt = false;

    if (m_nullEvt)
    {
        delete m_nullEvt;
        m_nullEvt = NULL;
    }
    ;

    m_has_stopEvt = true;
    if (!m_stopEvt)
    {
        m_stopEvt = new CT_MediaPlaybackEventRecord();
    }
    return m_stopEvt;
}

const CT_MediaPlaybackEventRecord& CT_ShowEventRecordList::ChildGroup_1::get_stopEvt() const
{
    if (m_stopEvt)
    {
        return *m_stopEvt;
    }
    return CT_MediaPlaybackEventRecord::default_instance();
}

bool CT_ShowEventRecordList::ChildGroup_1::has_pauseEvt() const
{
    return m_has_pauseEvt;
}

CT_MediaPlaybackEventRecord* CT_ShowEventRecordList::ChildGroup_1::mutable_pauseEvt()
{

    m_has_triggerEvt = false;

    if (m_triggerEvt)
    {
        delete m_triggerEvt;
        m_triggerEvt = NULL;
    }
    ;

    m_has_playEvt = false;

    if (m_playEvt)
    {
        delete m_playEvt;
        m_playEvt = NULL;
    }
    ;

    m_has_stopEvt = false;

    if (m_stopEvt)
    {
        delete m_stopEvt;
        m_stopEvt = NULL;
    }
    ;

    m_has_resumeEvt = false;

    if (m_resumeEvt)
    {
        delete m_resumeEvt;
        m_resumeEvt = NULL;
    }
    ;

    m_has_seekEvt = false;

    if (m_seekEvt)
    {
        delete m_seekEvt;
        m_seekEvt = NULL;
    }
    ;

    m_has_nullEvt = false;

    if (m_nullEvt)
    {
        delete m_nullEvt;
        m_nullEvt = NULL;
    }
    ;

    m_has_pauseEvt = true;
    if (!m_pauseEvt)
    {
        m_pauseEvt = new CT_MediaPlaybackEventRecord();
    }
    return m_pauseEvt;
}

const CT_MediaPlaybackEventRecord& CT_ShowEventRecordList::ChildGroup_1::get_pauseEvt() const
{
    if (m_pauseEvt)
    {
        return *m_pauseEvt;
    }
    return CT_MediaPlaybackEventRecord::default_instance();
}

bool CT_ShowEventRecordList::ChildGroup_1::has_resumeEvt() const
{
    return m_has_resumeEvt;
}

CT_MediaPlaybackEventRecord* CT_ShowEventRecordList::ChildGroup_1::mutable_resumeEvt()
{

    m_has_triggerEvt = false;

    if (m_triggerEvt)
    {
        delete m_triggerEvt;
        m_triggerEvt = NULL;
    }
    ;

    m_has_playEvt = false;

    if (m_playEvt)
    {
        delete m_playEvt;
        m_playEvt = NULL;
    }
    ;

    m_has_stopEvt = false;

    if (m_stopEvt)
    {
        delete m_stopEvt;
        m_stopEvt = NULL;
    }
    ;

    m_has_pauseEvt = false;

    if (m_pauseEvt)
    {
        delete m_pauseEvt;
        m_pauseEvt = NULL;
    }
    ;

    m_has_seekEvt = false;

    if (m_seekEvt)
    {
        delete m_seekEvt;
        m_seekEvt = NULL;
    }
    ;

    m_has_nullEvt = false;

    if (m_nullEvt)
    {
        delete m_nullEvt;
        m_nullEvt = NULL;
    }
    ;

    m_has_resumeEvt = true;
    if (!m_resumeEvt)
    {
        m_resumeEvt = new CT_MediaPlaybackEventRecord();
    }
    return m_resumeEvt;
}

const CT_MediaPlaybackEventRecord& CT_ShowEventRecordList::ChildGroup_1::get_resumeEvt() const
{
    if (m_resumeEvt)
    {
        return *m_resumeEvt;
    }
    return CT_MediaPlaybackEventRecord::default_instance();
}

bool CT_ShowEventRecordList::ChildGroup_1::has_seekEvt() const
{
    return m_has_seekEvt;
}

CT_MediaSeekEventRecord* CT_ShowEventRecordList::ChildGroup_1::mutable_seekEvt()
{

    m_has_triggerEvt = false;

    if (m_triggerEvt)
    {
        delete m_triggerEvt;
        m_triggerEvt = NULL;
    }
    ;

    m_has_playEvt = false;

    if (m_playEvt)
    {
        delete m_playEvt;
        m_playEvt = NULL;
    }
    ;

    m_has_stopEvt = false;

    if (m_stopEvt)
    {
        delete m_stopEvt;
        m_stopEvt = NULL;
    }
    ;

    m_has_pauseEvt = false;

    if (m_pauseEvt)
    {
        delete m_pauseEvt;
        m_pauseEvt = NULL;
    }
    ;

    m_has_resumeEvt = false;

    if (m_resumeEvt)
    {
        delete m_resumeEvt;
        m_resumeEvt = NULL;
    }
    ;

    m_has_nullEvt = false;

    if (m_nullEvt)
    {
        delete m_nullEvt;
        m_nullEvt = NULL;
    }
    ;

    m_has_seekEvt = true;
    if (!m_seekEvt)
    {
        m_seekEvt = new CT_MediaSeekEventRecord();
    }
    return m_seekEvt;
}

const CT_MediaSeekEventRecord& CT_ShowEventRecordList::ChildGroup_1::get_seekEvt() const
{
    if (m_seekEvt)
    {
        return *m_seekEvt;
    }
    return CT_MediaSeekEventRecord::default_instance();
}

bool CT_ShowEventRecordList::ChildGroup_1::has_nullEvt() const
{
    return m_has_nullEvt;
}

CT_NullEventRecord* CT_ShowEventRecordList::ChildGroup_1::mutable_nullEvt()
{

    m_has_triggerEvt = false;

    if (m_triggerEvt)
    {
        delete m_triggerEvt;
        m_triggerEvt = NULL;
    }
    ;

    m_has_playEvt = false;

    if (m_playEvt)
    {
        delete m_playEvt;
        m_playEvt = NULL;
    }
    ;

    m_has_stopEvt = false;

    if (m_stopEvt)
    {
        delete m_stopEvt;
        m_stopEvt = NULL;
    }
    ;

    m_has_pauseEvt = false;

    if (m_pauseEvt)
    {
        delete m_pauseEvt;
        m_pauseEvt = NULL;
    }
    ;

    m_has_resumeEvt = false;

    if (m_resumeEvt)
    {
        delete m_resumeEvt;
        m_resumeEvt = NULL;
    }
    ;

    m_has_seekEvt = false;

    if (m_seekEvt)
    {
        delete m_seekEvt;
        m_seekEvt = NULL;
    }
    ;

    m_has_nullEvt = true;
    if (!m_nullEvt)
    {
        m_nullEvt = new CT_NullEventRecord();
    }
    return m_nullEvt;
}

const CT_NullEventRecord& CT_ShowEventRecordList::ChildGroup_1::get_nullEvt() const
{
    if (m_nullEvt)
    {
        return *m_nullEvt;
    }
    return CT_NullEventRecord::default_instance();
}

CT_ShowEventRecordList* CT_ShowEventRecordList::default_instance_ = NULL;

// vortex_element

// switch_element
switch_element::switch_element()
    :m_has_dir_attr(false),
     m_dir_attr(NULL)
{
}
switch_element::~switch_element()
{
    clear();
}
void switch_element::clear()
{
    m_has_dir_attr = false;

    if (m_dir_attr)
    {
        delete m_dir_attr;
        m_dir_attr = NULL;
    }

}

void switch_element::toXml(std::ostream& _outStream) const
{
    _outStream << "<p14:switch";

    _outStream << " " << "xmlns:p14=\"http://schemas.microsoft.com/office/powerpoint/2010/main\"";
    _outStream << " " << "xmlns:s=\"http://schemas.openxmlformats.org/officeDocument/2006/sharedTypes\"";
    _outStream << " " << "xmlns:r=\"http://schemas.openxmlformats.org/officeDocument/2006/relationships\"";
    _outStream << " " << "xmlns:p=\"http://schemas.openxmlformats.org/presentationml/2006/main\"";
    _outStream << " " << "xmlns:a14=\"http://schemas.microsoft.com/office/drawing/2010/main\"";
    _outStream << " " << "xmlns:a=\"http://schemas.openxmlformats.org/drawingml/2006/main\"";


    if (m_has_dir_attr)
    {
        m_dir_attr->toXmlAttr("dir", _outStream);
    }

    _outStream << ">";

    _outStream << "</p14:switch>";
}

const switch_element& switch_element::default_instance()
{
    if (!switch_element::default_instance_)
    {
        switch_element::default_instance_ = new switch_element();
    }
    return *switch_element::default_instance_;
}

bool switch_element::has_dir_attr() const
{
    return m_has_dir_attr;
}

void switch_element::set_dir_attr(const ST_TransitionLeftRightDirectionType& _dir_attr)
{
    m_has_dir_attr = true;
    m_dir_attr = new ST_TransitionLeftRightDirectionType(_dir_attr);
}

const ST_TransitionLeftRightDirectionType& switch_element::get_dir_attr() const
{
    if (m_dir_attr)
    {
        return *m_dir_attr;
    }
    return ST_TransitionLeftRightDirectionType::default_instance();
}

switch_element* switch_element::default_instance_ = NULL;

// flip_element
flip_element::flip_element()
    :m_has_dir_attr(false),
     m_dir_attr(NULL)
{
}
flip_element::~flip_element()
{
    clear();
}
void flip_element::clear()
{
    m_has_dir_attr = false;

    if (m_dir_attr)
    {
        delete m_dir_attr;
        m_dir_attr = NULL;
    }

}

void flip_element::toXml(std::ostream& _outStream) const
{
    _outStream << "<p14:flip";

    _outStream << " " << "xmlns:p14=\"http://schemas.microsoft.com/office/powerpoint/2010/main\"";
    _outStream << " " << "xmlns:s=\"http://schemas.openxmlformats.org/officeDocument/2006/sharedTypes\"";
    _outStream << " " << "xmlns:r=\"http://schemas.openxmlformats.org/officeDocument/2006/relationships\"";
    _outStream << " " << "xmlns:p=\"http://schemas.openxmlformats.org/presentationml/2006/main\"";
    _outStream << " " << "xmlns:a14=\"http://schemas.microsoft.com/office/drawing/2010/main\"";
    _outStream << " " << "xmlns:a=\"http://schemas.openxmlformats.org/drawingml/2006/main\"";


    if (m_has_dir_attr)
    {
        m_dir_attr->toXmlAttr("dir", _outStream);
    }

    _outStream << ">";

    _outStream << "</p14:flip>";
}

const flip_element& flip_element::default_instance()
{
    if (!flip_element::default_instance_)
    {
        flip_element::default_instance_ = new flip_element();
    }
    return *flip_element::default_instance_;
}

bool flip_element::has_dir_attr() const
{
    return m_has_dir_attr;
}

void flip_element::set_dir_attr(const ST_TransitionLeftRightDirectionType& _dir_attr)
{
    m_has_dir_attr = true;
    m_dir_attr = new ST_TransitionLeftRightDirectionType(_dir_attr);
}

const ST_TransitionLeftRightDirectionType& flip_element::get_dir_attr() const
{
    if (m_dir_attr)
    {
        return *m_dir_attr;
    }
    return ST_TransitionLeftRightDirectionType::default_instance();
}

flip_element* flip_element::default_instance_ = NULL;

// ripple_element
ripple_element::ripple_element()
    :m_has_dir_attr(false),
     m_dir_attr(NULL)
{
}
ripple_element::~ripple_element()
{
    clear();
}
void ripple_element::clear()
{
    m_has_dir_attr = false;

    if (m_dir_attr)
    {
        delete m_dir_attr;
        m_dir_attr = NULL;
    }

}

void ripple_element::toXml(std::ostream& _outStream) const
{
    _outStream << "<p14:ripple";

    _outStream << " " << "xmlns:p14=\"http://schemas.microsoft.com/office/powerpoint/2010/main\"";
    _outStream << " " << "xmlns:s=\"http://schemas.openxmlformats.org/officeDocument/2006/sharedTypes\"";
    _outStream << " " << "xmlns:r=\"http://schemas.openxmlformats.org/officeDocument/2006/relationships\"";
    _outStream << " " << "xmlns:p=\"http://schemas.openxmlformats.org/presentationml/2006/main\"";
    _outStream << " " << "xmlns:a14=\"http://schemas.microsoft.com/office/drawing/2010/main\"";
    _outStream << " " << "xmlns:a=\"http://schemas.openxmlformats.org/drawingml/2006/main\"";


    if (m_has_dir_attr)
    {
        m_dir_attr->toXmlAttr("dir", _outStream);
    }

    _outStream << ">";

    _outStream << "</p14:ripple>";
}

const ripple_element& ripple_element::default_instance()
{
    if (!ripple_element::default_instance_)
    {
        ripple_element::default_instance_ = new ripple_element();
    }
    return *ripple_element::default_instance_;
}

bool ripple_element::has_dir_attr() const
{
    return m_has_dir_attr;
}

void ripple_element::set_dir_attr(const ST_TransitionCornerAndCenterDirectionType& _dir_attr)
{
    m_has_dir_attr = true;
    m_dir_attr = new ST_TransitionCornerAndCenterDirectionType(_dir_attr);
}

const ST_TransitionCornerAndCenterDirectionType& ripple_element::get_dir_attr() const
{
    if (m_dir_attr)
    {
        return *m_dir_attr;
    }
    return ST_TransitionCornerAndCenterDirectionType::default_instance();
}

ripple_element* ripple_element::default_instance_ = NULL;

// honeycomb_element

// prism_element
prism_element::prism_element()
    :m_has_dir_attr(false),
     m_dir_attr(NULL),
     m_has_isContent_attr(false),
     m_isContent_attr(false),
     m_has_isInverted_attr(false),
     m_isInverted_attr(false)
{
}
prism_element::~prism_element()
{
    clear();
}
void prism_element::clear()
{
    m_has_dir_attr = false;

    if (m_dir_attr)
    {
        delete m_dir_attr;
        m_dir_attr = NULL;
    }


    m_has_isContent_attr = false;
    m_isContent_attr = false;

    m_has_isInverted_attr = false;
    m_isInverted_attr = false;
}

void prism_element::toXml(std::ostream& _outStream) const
{
    _outStream << "<p14:prism";

    _outStream << " " << "xmlns:p14=\"http://schemas.microsoft.com/office/powerpoint/2010/main\"";
    _outStream << " " << "xmlns:s=\"http://schemas.openxmlformats.org/officeDocument/2006/sharedTypes\"";
    _outStream << " " << "xmlns:r=\"http://schemas.openxmlformats.org/officeDocument/2006/relationships\"";
    _outStream << " " << "xmlns:p=\"http://schemas.openxmlformats.org/presentationml/2006/main\"";
    _outStream << " " << "xmlns:a14=\"http://schemas.microsoft.com/office/drawing/2010/main\"";
    _outStream << " " << "xmlns:a=\"http://schemas.openxmlformats.org/drawingml/2006/main\"";


    if (m_has_dir_attr)
    {
        m_dir_attr->toXmlAttr("dir", _outStream);
    }



    if (m_has_isContent_attr)
    {
        _outStream << " " << "isContent" << "=\"" << XSD::XMLBooleanStr(m_isContent_attr) << "\"";
    }



    if (m_has_isInverted_attr)
    {
        _outStream << " " << "isInverted" << "=\"" << XSD::XMLBooleanStr(m_isInverted_attr) << "\"";
    }

    _outStream << ">";

    _outStream << "</p14:prism>";
}

const prism_element& prism_element::default_instance()
{
    if (!prism_element::default_instance_)
    {
        prism_element::default_instance_ = new prism_element();
    }
    return *prism_element::default_instance_;
}

bool prism_element::has_dir_attr() const
{
    return m_has_dir_attr;
}

void prism_element::set_dir_attr(const ns_p::ST_TransitionSideDirectionType& _dir_attr)
{
    m_has_dir_attr = true;
    m_dir_attr = new ns_p::ST_TransitionSideDirectionType(_dir_attr);
}

const ns_p::ST_TransitionSideDirectionType& prism_element::get_dir_attr() const
{
    if (m_dir_attr)
    {
        return *m_dir_attr;
    }
    return ns_p::ST_TransitionSideDirectionType::default_instance();
}

bool prism_element::has_isContent_attr() const
{
    return m_has_isContent_attr;
}

void prism_element::set_isContent_attr(const XSD::boolean_& _isContent_attr)
{
    m_has_isContent_attr = true;
    m_isContent_attr = _isContent_attr;
}

const XSD::boolean_& prism_element::get_isContent_attr() const
{
    return m_isContent_attr;
}

bool prism_element::has_isInverted_attr() const
{
    return m_has_isInverted_attr;
}

void prism_element::set_isInverted_attr(const XSD::boolean_& _isInverted_attr)
{
    m_has_isInverted_attr = true;
    m_isInverted_attr = _isInverted_attr;
}

const XSD::boolean_& prism_element::get_isInverted_attr() const
{
    return m_isInverted_attr;
}

prism_element* prism_element::default_instance_ = NULL;

// doors_element

// window_element

// ferris_element
ferris_element::ferris_element()
    :m_has_dir_attr(false),
     m_dir_attr(NULL)
{
}
ferris_element::~ferris_element()
{
    clear();
}
void ferris_element::clear()
{
    m_has_dir_attr = false;

    if (m_dir_attr)
    {
        delete m_dir_attr;
        m_dir_attr = NULL;
    }

}

void ferris_element::toXml(std::ostream& _outStream) const
{
    _outStream << "<p14:ferris";

    _outStream << " " << "xmlns:p14=\"http://schemas.microsoft.com/office/powerpoint/2010/main\"";
    _outStream << " " << "xmlns:s=\"http://schemas.openxmlformats.org/officeDocument/2006/sharedTypes\"";
    _outStream << " " << "xmlns:r=\"http://schemas.openxmlformats.org/officeDocument/2006/relationships\"";
    _outStream << " " << "xmlns:p=\"http://schemas.openxmlformats.org/presentationml/2006/main\"";
    _outStream << " " << "xmlns:a14=\"http://schemas.microsoft.com/office/drawing/2010/main\"";
    _outStream << " " << "xmlns:a=\"http://schemas.openxmlformats.org/drawingml/2006/main\"";


    if (m_has_dir_attr)
    {
        m_dir_attr->toXmlAttr("dir", _outStream);
    }

    _outStream << ">";

    _outStream << "</p14:ferris>";
}

const ferris_element& ferris_element::default_instance()
{
    if (!ferris_element::default_instance_)
    {
        ferris_element::default_instance_ = new ferris_element();
    }
    return *ferris_element::default_instance_;
}

bool ferris_element::has_dir_attr() const
{
    return m_has_dir_attr;
}

void ferris_element::set_dir_attr(const ST_TransitionLeftRightDirectionType& _dir_attr)
{
    m_has_dir_attr = true;
    m_dir_attr = new ST_TransitionLeftRightDirectionType(_dir_attr);
}

const ST_TransitionLeftRightDirectionType& ferris_element::get_dir_attr() const
{
    if (m_dir_attr)
    {
        return *m_dir_attr;
    }
    return ST_TransitionLeftRightDirectionType::default_instance();
}

ferris_element* ferris_element::default_instance_ = NULL;

// gallery_element
gallery_element::gallery_element()
    :m_has_dir_attr(false),
     m_dir_attr(NULL)
{
}
gallery_element::~gallery_element()
{
    clear();
}
void gallery_element::clear()
{
    m_has_dir_attr = false;

    if (m_dir_attr)
    {
        delete m_dir_attr;
        m_dir_attr = NULL;
    }

}

void gallery_element::toXml(std::ostream& _outStream) const
{
    _outStream << "<p14:gallery";

    _outStream << " " << "xmlns:p14=\"http://schemas.microsoft.com/office/powerpoint/2010/main\"";
    _outStream << " " << "xmlns:s=\"http://schemas.openxmlformats.org/officeDocument/2006/sharedTypes\"";
    _outStream << " " << "xmlns:r=\"http://schemas.openxmlformats.org/officeDocument/2006/relationships\"";
    _outStream << " " << "xmlns:p=\"http://schemas.openxmlformats.org/presentationml/2006/main\"";
    _outStream << " " << "xmlns:a14=\"http://schemas.microsoft.com/office/drawing/2010/main\"";
    _outStream << " " << "xmlns:a=\"http://schemas.openxmlformats.org/drawingml/2006/main\"";


    if (m_has_dir_attr)
    {
        m_dir_attr->toXmlAttr("dir", _outStream);
    }

    _outStream << ">";

    _outStream << "</p14:gallery>";
}

const gallery_element& gallery_element::default_instance()
{
    if (!gallery_element::default_instance_)
    {
        gallery_element::default_instance_ = new gallery_element();
    }
    return *gallery_element::default_instance_;
}

bool gallery_element::has_dir_attr() const
{
    return m_has_dir_attr;
}

void gallery_element::set_dir_attr(const ST_TransitionLeftRightDirectionType& _dir_attr)
{
    m_has_dir_attr = true;
    m_dir_attr = new ST_TransitionLeftRightDirectionType(_dir_attr);
}

const ST_TransitionLeftRightDirectionType& gallery_element::get_dir_attr() const
{
    if (m_dir_attr)
    {
        return *m_dir_attr;
    }
    return ST_TransitionLeftRightDirectionType::default_instance();
}

gallery_element* gallery_element::default_instance_ = NULL;

// conveyor_element
conveyor_element::conveyor_element()
    :m_has_dir_attr(false),
     m_dir_attr(NULL)
{
}
conveyor_element::~conveyor_element()
{
    clear();
}
void conveyor_element::clear()
{
    m_has_dir_attr = false;

    if (m_dir_attr)
    {
        delete m_dir_attr;
        m_dir_attr = NULL;
    }

}

void conveyor_element::toXml(std::ostream& _outStream) const
{
    _outStream << "<p14:conveyor";

    _outStream << " " << "xmlns:p14=\"http://schemas.microsoft.com/office/powerpoint/2010/main\"";
    _outStream << " " << "xmlns:s=\"http://schemas.openxmlformats.org/officeDocument/2006/sharedTypes\"";
    _outStream << " " << "xmlns:r=\"http://schemas.openxmlformats.org/officeDocument/2006/relationships\"";
    _outStream << " " << "xmlns:p=\"http://schemas.openxmlformats.org/presentationml/2006/main\"";
    _outStream << " " << "xmlns:a14=\"http://schemas.microsoft.com/office/drawing/2010/main\"";
    _outStream << " " << "xmlns:a=\"http://schemas.openxmlformats.org/drawingml/2006/main\"";


    if (m_has_dir_attr)
    {
        m_dir_attr->toXmlAttr("dir", _outStream);
    }

    _outStream << ">";

    _outStream << "</p14:conveyor>";
}

const conveyor_element& conveyor_element::default_instance()
{
    if (!conveyor_element::default_instance_)
    {
        conveyor_element::default_instance_ = new conveyor_element();
    }
    return *conveyor_element::default_instance_;
}

bool conveyor_element::has_dir_attr() const
{
    return m_has_dir_attr;
}

void conveyor_element::set_dir_attr(const ST_TransitionLeftRightDirectionType& _dir_attr)
{
    m_has_dir_attr = true;
    m_dir_attr = new ST_TransitionLeftRightDirectionType(_dir_attr);
}

const ST_TransitionLeftRightDirectionType& conveyor_element::get_dir_attr() const
{
    if (m_dir_attr)
    {
        return *m_dir_attr;
    }
    return ST_TransitionLeftRightDirectionType::default_instance();
}

conveyor_element* conveyor_element::default_instance_ = NULL;

// pan_element

// glitter_element
glitter_element::glitter_element()
    :m_has_dir_attr(false),
     m_dir_attr(NULL),
     m_has_pattern_attr(false),
     m_pattern_attr(NULL)
{
}
glitter_element::~glitter_element()
{
    clear();
}
void glitter_element::clear()
{
    m_has_dir_attr = false;

    if (m_dir_attr)
    {
        delete m_dir_attr;
        m_dir_attr = NULL;
    }


    m_has_pattern_attr = false;

    if (m_pattern_attr)
    {
        delete m_pattern_attr;
        m_pattern_attr = NULL;
    }

}

void glitter_element::toXml(std::ostream& _outStream) const
{
    _outStream << "<p14:glitter";

    _outStream << " " << "xmlns:p14=\"http://schemas.microsoft.com/office/powerpoint/2010/main\"";
    _outStream << " " << "xmlns:s=\"http://schemas.openxmlformats.org/officeDocument/2006/sharedTypes\"";
    _outStream << " " << "xmlns:r=\"http://schemas.openxmlformats.org/officeDocument/2006/relationships\"";
    _outStream << " " << "xmlns:p=\"http://schemas.openxmlformats.org/presentationml/2006/main\"";
    _outStream << " " << "xmlns:a14=\"http://schemas.microsoft.com/office/drawing/2010/main\"";
    _outStream << " " << "xmlns:a=\"http://schemas.openxmlformats.org/drawingml/2006/main\"";


    if (m_has_dir_attr)
    {
        m_dir_attr->toXmlAttr("dir", _outStream);
    }



    if (m_has_pattern_attr)
    {
        m_pattern_attr->toXmlAttr("pattern", _outStream);
    }

    _outStream << ">";

    _outStream << "</p14:glitter>";
}

const glitter_element& glitter_element::default_instance()
{
    if (!glitter_element::default_instance_)
    {
        glitter_element::default_instance_ = new glitter_element();
    }
    return *glitter_element::default_instance_;
}

bool glitter_element::has_dir_attr() const
{
    return m_has_dir_attr;
}

void glitter_element::set_dir_attr(const ns_p::ST_TransitionSideDirectionType& _dir_attr)
{
    m_has_dir_attr = true;
    m_dir_attr = new ns_p::ST_TransitionSideDirectionType(_dir_attr);
}

const ns_p::ST_TransitionSideDirectionType& glitter_element::get_dir_attr() const
{
    if (m_dir_attr)
    {
        return *m_dir_attr;
    }
    return ns_p::ST_TransitionSideDirectionType::default_instance();
}

bool glitter_element::has_pattern_attr() const
{
    return m_has_pattern_attr;
}

void glitter_element::set_pattern_attr(const ST_TransitionPattern& _pattern_attr)
{
    m_has_pattern_attr = true;
    m_pattern_attr = new ST_TransitionPattern(_pattern_attr);
}

const ST_TransitionPattern& glitter_element::get_pattern_attr() const
{
    if (m_pattern_attr)
    {
        return *m_pattern_attr;
    }
    return ST_TransitionPattern::default_instance();
}

glitter_element* glitter_element::default_instance_ = NULL;

// warp_element

// flythrough_element
flythrough_element::flythrough_element()
    :m_has_dir_attr(false),
     m_dir_attr(NULL),
     m_has_hasBounce_attr(false),
     m_hasBounce_attr(false)
{
}
flythrough_element::~flythrough_element()
{
    clear();
}
void flythrough_element::clear()
{
    m_has_dir_attr = false;

    if (m_dir_attr)
    {
        delete m_dir_attr;
        m_dir_attr = NULL;
    }


    m_has_hasBounce_attr = false;
    m_hasBounce_attr = false;
}

void flythrough_element::toXml(std::ostream& _outStream) const
{
    _outStream << "<p14:flythrough";

    _outStream << " " << "xmlns:p14=\"http://schemas.microsoft.com/office/powerpoint/2010/main\"";
    _outStream << " " << "xmlns:s=\"http://schemas.openxmlformats.org/officeDocument/2006/sharedTypes\"";
    _outStream << " " << "xmlns:r=\"http://schemas.openxmlformats.org/officeDocument/2006/relationships\"";
    _outStream << " " << "xmlns:p=\"http://schemas.openxmlformats.org/presentationml/2006/main\"";
    _outStream << " " << "xmlns:a14=\"http://schemas.microsoft.com/office/drawing/2010/main\"";
    _outStream << " " << "xmlns:a=\"http://schemas.openxmlformats.org/drawingml/2006/main\"";


    if (m_has_dir_attr)
    {
        m_dir_attr->toXmlAttr("dir", _outStream);
    }



    if (m_has_hasBounce_attr)
    {
        _outStream << " " << "hasBounce" << "=\"" << XSD::XMLBooleanStr(m_hasBounce_attr) << "\"";
    }

    _outStream << ">";

    _outStream << "</p14:flythrough>";
}

const flythrough_element& flythrough_element::default_instance()
{
    if (!flythrough_element::default_instance_)
    {
        flythrough_element::default_instance_ = new flythrough_element();
    }
    return *flythrough_element::default_instance_;
}

bool flythrough_element::has_dir_attr() const
{
    return m_has_dir_attr;
}

void flythrough_element::set_dir_attr(const ns_p::ST_TransitionInOutDirectionType& _dir_attr)
{
    m_has_dir_attr = true;
    m_dir_attr = new ns_p::ST_TransitionInOutDirectionType(_dir_attr);
}

const ns_p::ST_TransitionInOutDirectionType& flythrough_element::get_dir_attr() const
{
    if (m_dir_attr)
    {
        return *m_dir_attr;
    }
    return ns_p::ST_TransitionInOutDirectionType::default_instance();
}

bool flythrough_element::has_hasBounce_attr() const
{
    return m_has_hasBounce_attr;
}

void flythrough_element::set_hasBounce_attr(const XSD::boolean_& _hasBounce_attr)
{
    m_has_hasBounce_attr = true;
    m_hasBounce_attr = _hasBounce_attr;
}

const XSD::boolean_& flythrough_element::get_hasBounce_attr() const
{
    return m_hasBounce_attr;
}

flythrough_element* flythrough_element::default_instance_ = NULL;

// flash_element

// shred_element
shred_element::shred_element()
    :m_has_pattern_attr(false),
     m_pattern_attr(NULL),
     m_has_dir_attr(false),
     m_dir_attr(NULL)
{
}
shred_element::~shred_element()
{
    clear();
}
void shred_element::clear()
{
    m_has_pattern_attr = false;

    if (m_pattern_attr)
    {
        delete m_pattern_attr;
        m_pattern_attr = NULL;
    }


    m_has_dir_attr = false;

    if (m_dir_attr)
    {
        delete m_dir_attr;
        m_dir_attr = NULL;
    }

}

void shred_element::toXml(std::ostream& _outStream) const
{
    _outStream << "<p14:shred";

    _outStream << " " << "xmlns:p14=\"http://schemas.microsoft.com/office/powerpoint/2010/main\"";
    _outStream << " " << "xmlns:s=\"http://schemas.openxmlformats.org/officeDocument/2006/sharedTypes\"";
    _outStream << " " << "xmlns:r=\"http://schemas.openxmlformats.org/officeDocument/2006/relationships\"";
    _outStream << " " << "xmlns:p=\"http://schemas.openxmlformats.org/presentationml/2006/main\"";
    _outStream << " " << "xmlns:a14=\"http://schemas.microsoft.com/office/drawing/2010/main\"";
    _outStream << " " << "xmlns:a=\"http://schemas.openxmlformats.org/drawingml/2006/main\"";


    if (m_has_pattern_attr)
    {
        m_pattern_attr->toXmlAttr("pattern", _outStream);
    }



    if (m_has_dir_attr)
    {
        m_dir_attr->toXmlAttr("dir", _outStream);
    }

    _outStream << ">";

    _outStream << "</p14:shred>";
}

const shred_element& shred_element::default_instance()
{
    if (!shred_element::default_instance_)
    {
        shred_element::default_instance_ = new shred_element();
    }
    return *shred_element::default_instance_;
}

bool shred_element::has_pattern_attr() const
{
    return m_has_pattern_attr;
}

void shred_element::set_pattern_attr(const ST_TransitionShredPattern& _pattern_attr)
{
    m_has_pattern_attr = true;
    m_pattern_attr = new ST_TransitionShredPattern(_pattern_attr);
}

const ST_TransitionShredPattern& shred_element::get_pattern_attr() const
{
    if (m_pattern_attr)
    {
        return *m_pattern_attr;
    }
    return ST_TransitionShredPattern::default_instance();
}

bool shred_element::has_dir_attr() const
{
    return m_has_dir_attr;
}

void shred_element::set_dir_attr(const ns_p::ST_TransitionInOutDirectionType& _dir_attr)
{
    m_has_dir_attr = true;
    m_dir_attr = new ns_p::ST_TransitionInOutDirectionType(_dir_attr);
}

const ns_p::ST_TransitionInOutDirectionType& shred_element::get_dir_attr() const
{
    if (m_dir_attr)
    {
        return *m_dir_attr;
    }
    return ns_p::ST_TransitionInOutDirectionType::default_instance();
}

shred_element* shred_element::default_instance_ = NULL;

// reveal_element
reveal_element::reveal_element()
    :m_has_thruBlk_attr(false),
     m_thruBlk_attr(false),
     m_has_dir_attr(false),
     m_dir_attr(NULL)
{
}
reveal_element::~reveal_element()
{
    clear();
}
void reveal_element::clear()
{
    m_has_thruBlk_attr = false;
    m_thruBlk_attr = false;

    m_has_dir_attr = false;

    if (m_dir_attr)
    {
        delete m_dir_attr;
        m_dir_attr = NULL;
    }

}

void reveal_element::toXml(std::ostream& _outStream) const
{
    _outStream << "<p14:reveal";

    _outStream << " " << "xmlns:p14=\"http://schemas.microsoft.com/office/powerpoint/2010/main\"";
    _outStream << " " << "xmlns:s=\"http://schemas.openxmlformats.org/officeDocument/2006/sharedTypes\"";
    _outStream << " " << "xmlns:r=\"http://schemas.openxmlformats.org/officeDocument/2006/relationships\"";
    _outStream << " " << "xmlns:p=\"http://schemas.openxmlformats.org/presentationml/2006/main\"";
    _outStream << " " << "xmlns:a14=\"http://schemas.microsoft.com/office/drawing/2010/main\"";
    _outStream << " " << "xmlns:a=\"http://schemas.openxmlformats.org/drawingml/2006/main\"";


    if (m_has_thruBlk_attr)
    {
        _outStream << " " << "thruBlk" << "=\"" << XSD::XMLBooleanStr(m_thruBlk_attr) << "\"";
    }



    if (m_has_dir_attr)
    {
        m_dir_attr->toXmlAttr("dir", _outStream);
    }

    _outStream << ">";

    _outStream << "</p14:reveal>";
}

const reveal_element& reveal_element::default_instance()
{
    if (!reveal_element::default_instance_)
    {
        reveal_element::default_instance_ = new reveal_element();
    }
    return *reveal_element::default_instance_;
}

bool reveal_element::has_thruBlk_attr() const
{
    return m_has_thruBlk_attr;
}

void reveal_element::set_thruBlk_attr(const XSD::boolean_& _thruBlk_attr)
{
    m_has_thruBlk_attr = true;
    m_thruBlk_attr = _thruBlk_attr;
}

const XSD::boolean_& reveal_element::get_thruBlk_attr() const
{
    return m_thruBlk_attr;
}

bool reveal_element::has_dir_attr() const
{
    return m_has_dir_attr;
}

void reveal_element::set_dir_attr(const ST_TransitionLeftRightDirectionType& _dir_attr)
{
    m_has_dir_attr = true;
    m_dir_attr = new ST_TransitionLeftRightDirectionType(_dir_attr);
}

const ST_TransitionLeftRightDirectionType& reveal_element::get_dir_attr() const
{
    if (m_dir_attr)
    {
        return *m_dir_attr;
    }
    return ST_TransitionLeftRightDirectionType::default_instance();
}

reveal_element* reveal_element::default_instance_ = NULL;

// wheelReverse_element

// bmkTgt_element
bmkTgt_element::bmkTgt_element()
    :m_has_spid_attr(false),
     m_spid_attr(NULL),
     m_has_bmkName_attr(false),
     m_bmkName_attr("")
{
}
bmkTgt_element::~bmkTgt_element()
{
    clear();
}
void bmkTgt_element::clear()
{
    m_has_spid_attr = false;

    if (m_spid_attr)
    {
        delete m_spid_attr;
        m_spid_attr = NULL;
    }


    m_has_bmkName_attr = false;
    m_bmkName_attr.clear();
}

void bmkTgt_element::toXml(std::ostream& _outStream) const
{
    _outStream << "<p14:bmkTgt";

    _outStream << " " << "xmlns:p14=\"http://schemas.microsoft.com/office/powerpoint/2010/main\"";
    _outStream << " " << "xmlns:s=\"http://schemas.openxmlformats.org/officeDocument/2006/sharedTypes\"";
    _outStream << " " << "xmlns:r=\"http://schemas.openxmlformats.org/officeDocument/2006/relationships\"";
    _outStream << " " << "xmlns:p=\"http://schemas.openxmlformats.org/presentationml/2006/main\"";
    _outStream << " " << "xmlns:a14=\"http://schemas.microsoft.com/office/drawing/2010/main\"";
    _outStream << " " << "xmlns:a=\"http://schemas.openxmlformats.org/drawingml/2006/main\"";

    assert(m_has_spid_attr);
    if (m_has_spid_attr)
    {
        m_spid_attr->toXmlAttr("spid", _outStream);
    }


    assert(m_has_bmkName_attr);
    if (m_has_bmkName_attr)
    {
        _outStream << " " << "bmkName" << "=\"" << m_bmkName_attr << "\"";
    }

    _outStream << ">";

    _outStream << "</p14:bmkTgt>";
}

const bmkTgt_element& bmkTgt_element::default_instance()
{
    if (!bmkTgt_element::default_instance_)
    {
        bmkTgt_element::default_instance_ = new bmkTgt_element();
    }
    return *bmkTgt_element::default_instance_;
}

bool bmkTgt_element::has_spid_attr() const
{
    return m_has_spid_attr;
}

void bmkTgt_element::set_spid_attr(const ns_a::ST_DrawingElementId& _spid_attr)
{
    m_has_spid_attr = true;
    m_spid_attr = new ns_a::ST_DrawingElementId(_spid_attr);
}

const ns_a::ST_DrawingElementId& bmkTgt_element::get_spid_attr() const
{
    if (m_spid_attr)
    {
        return *m_spid_attr;
    }
    return ns_a::ST_DrawingElementId::default_instance();
}

bool bmkTgt_element::has_bmkName_attr() const
{
    return m_has_bmkName_attr;
}

void bmkTgt_element::set_bmkName_attr(const XSD::string_& _bmkName_attr)
{
    m_has_bmkName_attr = true;
    m_bmkName_attr = _bmkName_attr;
}

const XSD::string_& bmkTgt_element::get_bmkName_attr() const
{
    return m_bmkName_attr;
}

bmkTgt_element* bmkTgt_element::default_instance_ = NULL;

// nvContentPartPr_element
nvContentPartPr_element::nvContentPartPr_element()
    :m_has_cNvPr(false),
     m_cNvPr(NULL),
     m_has_cNvContentPartPr(false),
     m_cNvContentPartPr(NULL),
     m_has_nvPr(false),
     m_nvPr(NULL)
{
}
nvContentPartPr_element::~nvContentPartPr_element()
{
    clear();
}
bool nvContentPartPr_element::has_cNvPr() const
{
    return m_has_cNvPr;
}

ns_a::CT_NonVisualDrawingProps* nvContentPartPr_element::mutable_cNvPr()
{
    m_has_cNvPr = true;
    if (!m_cNvPr)
    {
        m_cNvPr = new ns_a::CT_NonVisualDrawingProps();
    }
    return m_cNvPr;
}

const ns_a::CT_NonVisualDrawingProps& nvContentPartPr_element::get_cNvPr() const
{
    if (m_cNvPr)
    {
        return *m_cNvPr;
    }
    return ns_a::CT_NonVisualDrawingProps::default_instance();
}

bool nvContentPartPr_element::has_cNvContentPartPr() const
{
    return m_has_cNvContentPartPr;
}

ns_a14::CT_NonVisualInkContentPartProperties* nvContentPartPr_element::mutable_cNvContentPartPr()
{
    m_has_cNvContentPartPr = true;
    if (!m_cNvContentPartPr)
    {
        m_cNvContentPartPr = new ns_a14::CT_NonVisualInkContentPartProperties();
    }
    return m_cNvContentPartPr;
}

const ns_a14::CT_NonVisualInkContentPartProperties& nvContentPartPr_element::get_cNvContentPartPr() const
{
    if (m_cNvContentPartPr)
    {
        return *m_cNvContentPartPr;
    }
    return ns_a14::CT_NonVisualInkContentPartProperties::default_instance();
}

bool nvContentPartPr_element::has_nvPr() const
{
    return m_has_nvPr;
}

ns_p::CT_ApplicationNonVisualDrawingProps* nvContentPartPr_element::mutable_nvPr()
{
    m_has_nvPr = true;
    if (!m_nvPr)
    {
        m_nvPr = new ns_p::CT_ApplicationNonVisualDrawingProps();
    }
    return m_nvPr;
}

const ns_p::CT_ApplicationNonVisualDrawingProps& nvContentPartPr_element::get_nvPr() const
{
    if (m_nvPr)
    {
        return *m_nvPr;
    }
    return ns_p::CT_ApplicationNonVisualDrawingProps::default_instance();
}

void nvContentPartPr_element::clear()
{
    m_has_cNvPr = false;

    if (m_cNvPr)
    {
        delete m_cNvPr;
        m_cNvPr = NULL;
    }


    m_has_cNvContentPartPr = false;

    if (m_cNvContentPartPr)
    {
        delete m_cNvContentPartPr;
        m_cNvContentPartPr = NULL;
    }


    m_has_nvPr = false;

    if (m_nvPr)
    {
        delete m_nvPr;
        m_nvPr = NULL;
    }

}

void nvContentPartPr_element::toXml(std::ostream& _outStream) const
{
    _outStream << "<p14:nvContentPartPr";

    _outStream << " " << "xmlns:p14=\"http://schemas.microsoft.com/office/powerpoint/2010/main\"";
    _outStream << " " << "xmlns:s=\"http://schemas.openxmlformats.org/officeDocument/2006/sharedTypes\"";
    _outStream << " " << "xmlns:r=\"http://schemas.openxmlformats.org/officeDocument/2006/relationships\"";
    _outStream << " " << "xmlns:p=\"http://schemas.openxmlformats.org/presentationml/2006/main\"";
    _outStream << " " << "xmlns:a14=\"http://schemas.microsoft.com/office/drawing/2010/main\"";
    _outStream << " " << "xmlns:a=\"http://schemas.openxmlformats.org/drawingml/2006/main\"";

    _outStream << ">";

    assert(m_has_cNvPr);


    assert(m_has_nvPr);


    if (m_has_cNvPr)
    {
        m_cNvPr->toXmlElem("p14:cNvPr", "", _outStream);
    }


    if (m_has_cNvContentPartPr)
    {
        m_cNvContentPartPr->toXmlElem("p14:cNvContentPartPr", "", _outStream);
    }


    if (m_has_nvPr)
    {
        m_nvPr->toXmlElem("p14:nvPr", "", _outStream);
    }

    _outStream << "</p14:nvContentPartPr>";
}

const nvContentPartPr_element& nvContentPartPr_element::default_instance()
{
    if (!nvContentPartPr_element::default_instance_)
    {
        nvContentPartPr_element::default_instance_ = new nvContentPartPr_element();
    }
    return *nvContentPartPr_element::default_instance_;
}

nvContentPartPr_element* nvContentPartPr_element::default_instance_ = NULL;

// xfrm_element

// extLst_element

// media_element
media_element::media_element()
    :m_has_trim(false),
     m_trim(NULL),
     m_has_fade(false),
     m_fade(NULL),
     m_has_bmkLst(false),
     m_bmkLst(NULL),
     m_has_extLst(false),
     m_extLst(NULL),
     m_has_r_embed_attr(false),
     m_r_embed_attr(NULL),
     m_has_r_link_attr(false),
     m_r_link_attr(NULL)
{
}
media_element::~media_element()
{
    clear();
}
bool media_element::has_trim() const
{
    return m_has_trim;
}

CT_MediaTrim* media_element::mutable_trim()
{
    m_has_trim = true;
    if (!m_trim)
    {
        m_trim = new CT_MediaTrim();
    }
    return m_trim;
}

const CT_MediaTrim& media_element::get_trim() const
{
    if (m_trim)
    {
        return *m_trim;
    }
    return CT_MediaTrim::default_instance();
}

bool media_element::has_fade() const
{
    return m_has_fade;
}

CT_MediaFade* media_element::mutable_fade()
{
    m_has_fade = true;
    if (!m_fade)
    {
        m_fade = new CT_MediaFade();
    }
    return m_fade;
}

const CT_MediaFade& media_element::get_fade() const
{
    if (m_fade)
    {
        return *m_fade;
    }
    return CT_MediaFade::default_instance();
}

bool media_element::has_bmkLst() const
{
    return m_has_bmkLst;
}

CT_MediaBookmarkList* media_element::mutable_bmkLst()
{
    m_has_bmkLst = true;
    if (!m_bmkLst)
    {
        m_bmkLst = new CT_MediaBookmarkList();
    }
    return m_bmkLst;
}

const CT_MediaBookmarkList& media_element::get_bmkLst() const
{
    if (m_bmkLst)
    {
        return *m_bmkLst;
    }
    return CT_MediaBookmarkList::default_instance();
}

bool media_element::has_extLst() const
{
    return m_has_extLst;
}

ns_p::CT_ExtensionList* media_element::mutable_extLst()
{
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new ns_p::CT_ExtensionList();
    }
    return m_extLst;
}

const ns_p::CT_ExtensionList& media_element::get_extLst() const
{
    if (m_extLst)
    {
        return *m_extLst;
    }
    return ns_p::CT_ExtensionList::default_instance();
}

void media_element::clear()
{
    m_has_r_embed_attr = false;

    if (m_r_embed_attr)
    {
        delete m_r_embed_attr;
        m_r_embed_attr = NULL;
    }


    m_has_r_link_attr = false;

    if (m_r_link_attr)
    {
        delete m_r_link_attr;
        m_r_link_attr = NULL;
    }


    m_has_trim = false;

    if (m_trim)
    {
        delete m_trim;
        m_trim = NULL;
    }


    m_has_fade = false;

    if (m_fade)
    {
        delete m_fade;
        m_fade = NULL;
    }


    m_has_bmkLst = false;

    if (m_bmkLst)
    {
        delete m_bmkLst;
        m_bmkLst = NULL;
    }


    m_has_extLst = false;

    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }

}

void media_element::toXml(std::ostream& _outStream) const
{
    _outStream << "<p14:media";

    _outStream << " " << "xmlns:p14=\"http://schemas.microsoft.com/office/powerpoint/2010/main\"";
    _outStream << " " << "xmlns:s=\"http://schemas.openxmlformats.org/officeDocument/2006/sharedTypes\"";
    _outStream << " " << "xmlns:r=\"http://schemas.openxmlformats.org/officeDocument/2006/relationships\"";
    _outStream << " " << "xmlns:p=\"http://schemas.openxmlformats.org/presentationml/2006/main\"";
    _outStream << " " << "xmlns:a14=\"http://schemas.microsoft.com/office/drawing/2010/main\"";
    _outStream << " " << "xmlns:a=\"http://schemas.openxmlformats.org/drawingml/2006/main\"";


    if (m_has_r_embed_attr)
    {
        m_r_embed_attr->toXmlAttr("r:embed", _outStream);
    }



    if (m_has_r_link_attr)
    {
        m_r_link_attr->toXmlAttr("r:link", _outStream);
    }

    _outStream << ">";


    if (m_has_trim)
    {
        m_trim->toXmlElem("p14:trim", "", _outStream);
    }


    if (m_has_fade)
    {
        m_fade->toXmlElem("p14:fade", "", _outStream);
    }


    if (m_has_bmkLst)
    {
        m_bmkLst->toXmlElem("p14:bmkLst", "", _outStream);
    }


    if (m_has_extLst)
    {
        m_extLst->toXmlElem("p14:extLst", "", _outStream);
    }

    _outStream << "</p14:media>";
}

const media_element& media_element::default_instance()
{
    if (!media_element::default_instance_)
    {
        media_element::default_instance_ = new media_element();
    }
    return *media_element::default_instance_;
}

bool media_element::has_r_embed_attr() const
{
    return m_has_r_embed_attr;
}

void media_element::set_r_embed_attr(const ns_r::ST_RelationshipId& _r_embed_attr)
{
    m_has_r_embed_attr = true;
    m_r_embed_attr = new ns_r::ST_RelationshipId(_r_embed_attr);
}

const ns_r::ST_RelationshipId& media_element::get_r_embed_attr() const
{
    if (m_r_embed_attr)
    {
        return *m_r_embed_attr;
    }
    return ns_r::ST_RelationshipId::default_instance();
}

bool media_element::has_r_link_attr() const
{
    return m_has_r_link_attr;
}

void media_element::set_r_link_attr(const ns_r::ST_RelationshipId& _r_link_attr)
{
    m_has_r_link_attr = true;
    m_r_link_attr = new ns_r::ST_RelationshipId(_r_link_attr);
}

const ns_r::ST_RelationshipId& media_element::get_r_link_attr() const
{
    if (m_r_link_attr)
    {
        return *m_r_link_attr;
    }
    return ns_r::ST_RelationshipId::default_instance();
}

media_element* media_element::default_instance_ = NULL;

// sectionLst_element
sectionLst_element::sectionLst_element()

{
}
sectionLst_element::~sectionLst_element()
{
    clear();
}
CT_Section* sectionLst_element::add_section()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Section* pNewChild = pChildGroup->mutable_section();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

void sectionLst_element::clear()
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

void sectionLst_element::toXml(std::ostream& _outStream) const
{
    _outStream << "<p14:sectionLst";

    _outStream << " " << "xmlns:p14=\"http://schemas.microsoft.com/office/powerpoint/2010/main\"";
    _outStream << " " << "xmlns:s=\"http://schemas.openxmlformats.org/officeDocument/2006/sharedTypes\"";
    _outStream << " " << "xmlns:r=\"http://schemas.openxmlformats.org/officeDocument/2006/relationships\"";
    _outStream << " " << "xmlns:p=\"http://schemas.openxmlformats.org/presentationml/2006/main\"";
    _outStream << " " << "xmlns:a14=\"http://schemas.microsoft.com/office/drawing/2010/main\"";
    _outStream << " " << "xmlns:a=\"http://schemas.openxmlformats.org/drawingml/2006/main\"";

    _outStream << ">";

    {
        int childSize = count_if(m_childGroupList_1.begin(), m_childGroupList_1.end(), mem_fun(&ChildGroup_1::has_section));
        assert(1 <= childSize);
    }

    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_section())
            {
                (*iter)->get_section().toXmlElem("p14:section", "", _outStream);
            }


        }
    }

    _outStream << "</p14:sectionLst>";
}

const sectionLst_element& sectionLst_element::default_instance()
{
    if (!sectionLst_element::default_instance_)
    {
        sectionLst_element::default_instance_ = new sectionLst_element();
    }
    return *sectionLst_element::default_instance_;
}


// sectionLst_element::ChildGroup_1
sectionLst_element::ChildGroup_1::ChildGroup_1()
    :m_has_section(false),
     m_section(NULL)
{
}
bool sectionLst_element::ChildGroup_1::has_section() const
{
    return m_has_section;
}

CT_Section* sectionLst_element::ChildGroup_1::mutable_section()
{

    m_has_section = true;
    if (!m_section)
    {
        m_section = new CT_Section();
    }
    return m_section;
}

const CT_Section& sectionLst_element::ChildGroup_1::get_section() const
{
    if (m_section)
    {
        return *m_section;
    }
    return CT_Section::default_instance();
}

sectionLst_element* sectionLst_element::default_instance_ = NULL;

// browseMode_element
browseMode_element::browseMode_element()
    :m_has_showStatus_attr(false),
     m_showStatus_attr(false)
{
}
browseMode_element::~browseMode_element()
{
    clear();
}
void browseMode_element::clear()
{
    m_has_showStatus_attr = false;
    m_showStatus_attr = false;
}

void browseMode_element::toXml(std::ostream& _outStream) const
{
    _outStream << "<p14:browseMode";

    _outStream << " " << "xmlns:p14=\"http://schemas.microsoft.com/office/powerpoint/2010/main\"";
    _outStream << " " << "xmlns:s=\"http://schemas.openxmlformats.org/officeDocument/2006/sharedTypes\"";
    _outStream << " " << "xmlns:r=\"http://schemas.openxmlformats.org/officeDocument/2006/relationships\"";
    _outStream << " " << "xmlns:p=\"http://schemas.openxmlformats.org/presentationml/2006/main\"";
    _outStream << " " << "xmlns:a14=\"http://schemas.microsoft.com/office/drawing/2010/main\"";
    _outStream << " " << "xmlns:a=\"http://schemas.openxmlformats.org/drawingml/2006/main\"";


    if (m_has_showStatus_attr)
    {
        _outStream << " " << "showStatus" << "=\"" << XSD::XMLBooleanStr(m_showStatus_attr) << "\"";
    }

    _outStream << ">";

    _outStream << "</p14:browseMode>";
}

const browseMode_element& browseMode_element::default_instance()
{
    if (!browseMode_element::default_instance_)
    {
        browseMode_element::default_instance_ = new browseMode_element();
    }
    return *browseMode_element::default_instance_;
}

bool browseMode_element::has_showStatus_attr() const
{
    return m_has_showStatus_attr;
}

void browseMode_element::set_showStatus_attr(const XSD::boolean_& _showStatus_attr)
{
    m_has_showStatus_attr = true;
    m_showStatus_attr = _showStatus_attr;
}

const XSD::boolean_& browseMode_element::get_showStatus_attr() const
{
    return m_showStatus_attr;
}

browseMode_element* browseMode_element::default_instance_ = NULL;

// laserClr_element

// defaultImageDpi_element
defaultImageDpi_element::defaultImageDpi_element()
    :m_has_val_attr(false),
     m_val_attr(0)
{
}
defaultImageDpi_element::~defaultImageDpi_element()
{
    clear();
}
void defaultImageDpi_element::clear()
{
    m_has_val_attr = false;
    m_val_attr = 0;
}

void defaultImageDpi_element::toXml(std::ostream& _outStream) const
{
    _outStream << "<p14:defaultImageDpi";

    _outStream << " " << "xmlns:p14=\"http://schemas.microsoft.com/office/powerpoint/2010/main\"";
    _outStream << " " << "xmlns:s=\"http://schemas.openxmlformats.org/officeDocument/2006/sharedTypes\"";
    _outStream << " " << "xmlns:r=\"http://schemas.openxmlformats.org/officeDocument/2006/relationships\"";
    _outStream << " " << "xmlns:p=\"http://schemas.openxmlformats.org/presentationml/2006/main\"";
    _outStream << " " << "xmlns:a14=\"http://schemas.microsoft.com/office/drawing/2010/main\"";
    _outStream << " " << "xmlns:a=\"http://schemas.openxmlformats.org/drawingml/2006/main\"";

    assert(m_has_val_attr);
    if (m_has_val_attr)
    {
        _outStream << " " << "val" << "=\"" << m_val_attr << "\"";
    }

    _outStream << ">";

    _outStream << "</p14:defaultImageDpi>";
}

const defaultImageDpi_element& defaultImageDpi_element::default_instance()
{
    if (!defaultImageDpi_element::default_instance_)
    {
        defaultImageDpi_element::default_instance_ = new defaultImageDpi_element();
    }
    return *defaultImageDpi_element::default_instance_;
}

bool defaultImageDpi_element::has_val_attr() const
{
    return m_has_val_attr;
}

void defaultImageDpi_element::set_val_attr(const XSD::unsignedInt_& _val_attr)
{
    m_has_val_attr = true;
    m_val_attr = _val_attr;
}

const XSD::unsignedInt_& defaultImageDpi_element::get_val_attr() const
{
    return m_val_attr;
}

defaultImageDpi_element* defaultImageDpi_element::default_instance_ = NULL;

// discardImageEditData_element
discardImageEditData_element::discardImageEditData_element()
    :m_has_val_attr(false),
     m_val_attr(false)
{
}
discardImageEditData_element::~discardImageEditData_element()
{
    clear();
}
void discardImageEditData_element::clear()
{
    m_has_val_attr = false;
    m_val_attr = false;
}

void discardImageEditData_element::toXml(std::ostream& _outStream) const
{
    _outStream << "<p14:discardImageEditData";

    _outStream << " " << "xmlns:p14=\"http://schemas.microsoft.com/office/powerpoint/2010/main\"";
    _outStream << " " << "xmlns:s=\"http://schemas.openxmlformats.org/officeDocument/2006/sharedTypes\"";
    _outStream << " " << "xmlns:r=\"http://schemas.openxmlformats.org/officeDocument/2006/relationships\"";
    _outStream << " " << "xmlns:p=\"http://schemas.openxmlformats.org/presentationml/2006/main\"";
    _outStream << " " << "xmlns:a14=\"http://schemas.microsoft.com/office/drawing/2010/main\"";
    _outStream << " " << "xmlns:a=\"http://schemas.openxmlformats.org/drawingml/2006/main\"";

    assert(m_has_val_attr);
    if (m_has_val_attr)
    {
        _outStream << " " << "val" << "=\"" << XSD::XMLBooleanStr(m_val_attr) << "\"";
    }

    _outStream << ">";

    _outStream << "</p14:discardImageEditData>";
}

const discardImageEditData_element& discardImageEditData_element::default_instance()
{
    if (!discardImageEditData_element::default_instance_)
    {
        discardImageEditData_element::default_instance_ = new discardImageEditData_element();
    }
    return *discardImageEditData_element::default_instance_;
}

bool discardImageEditData_element::has_val_attr() const
{
    return m_has_val_attr;
}

void discardImageEditData_element::set_val_attr(const XSD::boolean_& _val_attr)
{
    m_has_val_attr = true;
    m_val_attr = _val_attr;
}

const XSD::boolean_& discardImageEditData_element::get_val_attr() const
{
    return m_val_attr;
}

discardImageEditData_element* discardImageEditData_element::default_instance_ = NULL;

// showMediaCtrls_element
showMediaCtrls_element::showMediaCtrls_element()
    :m_has_val_attr(false),
     m_val_attr(false)
{
}
showMediaCtrls_element::~showMediaCtrls_element()
{
    clear();
}
void showMediaCtrls_element::clear()
{
    m_has_val_attr = false;
    m_val_attr = false;
}

void showMediaCtrls_element::toXml(std::ostream& _outStream) const
{
    _outStream << "<p14:showMediaCtrls";

    _outStream << " " << "xmlns:p14=\"http://schemas.microsoft.com/office/powerpoint/2010/main\"";
    _outStream << " " << "xmlns:s=\"http://schemas.openxmlformats.org/officeDocument/2006/sharedTypes\"";
    _outStream << " " << "xmlns:r=\"http://schemas.openxmlformats.org/officeDocument/2006/relationships\"";
    _outStream << " " << "xmlns:p=\"http://schemas.openxmlformats.org/presentationml/2006/main\"";
    _outStream << " " << "xmlns:a14=\"http://schemas.microsoft.com/office/drawing/2010/main\"";
    _outStream << " " << "xmlns:a=\"http://schemas.openxmlformats.org/drawingml/2006/main\"";

    assert(m_has_val_attr);
    if (m_has_val_attr)
    {
        _outStream << " " << "val" << "=\"" << XSD::XMLBooleanStr(m_val_attr) << "\"";
    }

    _outStream << ">";

    _outStream << "</p14:showMediaCtrls>";
}

const showMediaCtrls_element& showMediaCtrls_element::default_instance()
{
    if (!showMediaCtrls_element::default_instance_)
    {
        showMediaCtrls_element::default_instance_ = new showMediaCtrls_element();
    }
    return *showMediaCtrls_element::default_instance_;
}

bool showMediaCtrls_element::has_val_attr() const
{
    return m_has_val_attr;
}

void showMediaCtrls_element::set_val_attr(const XSD::boolean_& _val_attr)
{
    m_has_val_attr = true;
    m_val_attr = _val_attr;
}

const XSD::boolean_& showMediaCtrls_element::get_val_attr() const
{
    return m_val_attr;
}

showMediaCtrls_element* showMediaCtrls_element::default_instance_ = NULL;

// laserTraceLst_element
laserTraceLst_element::laserTraceLst_element()

{
}
laserTraceLst_element::~laserTraceLst_element()
{
    clear();
}
CT_LaserTrace* laserTraceLst_element::add_tracePtLst()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_LaserTrace* pNewChild = pChildGroup->mutable_tracePtLst();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

void laserTraceLst_element::clear()
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

void laserTraceLst_element::toXml(std::ostream& _outStream) const
{
    _outStream << "<p14:laserTraceLst";

    _outStream << " " << "xmlns:p14=\"http://schemas.microsoft.com/office/powerpoint/2010/main\"";
    _outStream << " " << "xmlns:s=\"http://schemas.openxmlformats.org/officeDocument/2006/sharedTypes\"";
    _outStream << " " << "xmlns:r=\"http://schemas.openxmlformats.org/officeDocument/2006/relationships\"";
    _outStream << " " << "xmlns:p=\"http://schemas.openxmlformats.org/presentationml/2006/main\"";
    _outStream << " " << "xmlns:a14=\"http://schemas.microsoft.com/office/drawing/2010/main\"";
    _outStream << " " << "xmlns:a=\"http://schemas.openxmlformats.org/drawingml/2006/main\"";

    _outStream << ">";

    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_tracePtLst())
            {
                (*iter)->get_tracePtLst().toXmlElem("p14:tracePtLst", "", _outStream);
            }


        }
    }

    _outStream << "</p14:laserTraceLst>";
}

const laserTraceLst_element& laserTraceLst_element::default_instance()
{
    if (!laserTraceLst_element::default_instance_)
    {
        laserTraceLst_element::default_instance_ = new laserTraceLst_element();
    }
    return *laserTraceLst_element::default_instance_;
}


// laserTraceLst_element::ChildGroup_1
laserTraceLst_element::ChildGroup_1::ChildGroup_1()
    :m_has_tracePtLst(false),
     m_tracePtLst(NULL)
{
}
bool laserTraceLst_element::ChildGroup_1::has_tracePtLst() const
{
    return m_has_tracePtLst;
}

CT_LaserTrace* laserTraceLst_element::ChildGroup_1::mutable_tracePtLst()
{

    m_has_tracePtLst = true;
    if (!m_tracePtLst)
    {
        m_tracePtLst = new CT_LaserTrace();
    }
    return m_tracePtLst;
}

const CT_LaserTrace& laserTraceLst_element::ChildGroup_1::get_tracePtLst() const
{
    if (m_tracePtLst)
    {
        return *m_tracePtLst;
    }
    return CT_LaserTrace::default_instance();
}

laserTraceLst_element* laserTraceLst_element::default_instance_ = NULL;

// creationId_element
creationId_element::creationId_element()
    :m_has_val_attr(false),
     m_val_attr(0)
{
}
creationId_element::~creationId_element()
{
    clear();
}
void creationId_element::clear()
{
    m_has_val_attr = false;
    m_val_attr = 0;
}

void creationId_element::toXml(std::ostream& _outStream) const
{
    _outStream << "<p14:creationId";

    _outStream << " " << "xmlns:p14=\"http://schemas.microsoft.com/office/powerpoint/2010/main\"";
    _outStream << " " << "xmlns:s=\"http://schemas.openxmlformats.org/officeDocument/2006/sharedTypes\"";
    _outStream << " " << "xmlns:r=\"http://schemas.openxmlformats.org/officeDocument/2006/relationships\"";
    _outStream << " " << "xmlns:p=\"http://schemas.openxmlformats.org/presentationml/2006/main\"";
    _outStream << " " << "xmlns:a14=\"http://schemas.microsoft.com/office/drawing/2010/main\"";
    _outStream << " " << "xmlns:a=\"http://schemas.openxmlformats.org/drawingml/2006/main\"";

    assert(m_has_val_attr);
    if (m_has_val_attr)
    {
        _outStream << " " << "val" << "=\"" << m_val_attr << "\"";
    }

    _outStream << ">";

    _outStream << "</p14:creationId>";
}

const creationId_element& creationId_element::default_instance()
{
    if (!creationId_element::default_instance_)
    {
        creationId_element::default_instance_ = new creationId_element();
    }
    return *creationId_element::default_instance_;
}

bool creationId_element::has_val_attr() const
{
    return m_has_val_attr;
}

void creationId_element::set_val_attr(const XSD::unsignedInt_& _val_attr)
{
    m_has_val_attr = true;
    m_val_attr = _val_attr;
}

const XSD::unsignedInt_& creationId_element::get_val_attr() const
{
    return m_val_attr;
}

creationId_element* creationId_element::default_instance_ = NULL;

// modId_element
modId_element::modId_element()
    :m_has_val_attr(false),
     m_val_attr(0)
{
}
modId_element::~modId_element()
{
    clear();
}
void modId_element::clear()
{
    m_has_val_attr = false;
    m_val_attr = 0;
}

void modId_element::toXml(std::ostream& _outStream) const
{
    _outStream << "<p14:modId";

    _outStream << " " << "xmlns:p14=\"http://schemas.microsoft.com/office/powerpoint/2010/main\"";
    _outStream << " " << "xmlns:s=\"http://schemas.openxmlformats.org/officeDocument/2006/sharedTypes\"";
    _outStream << " " << "xmlns:r=\"http://schemas.openxmlformats.org/officeDocument/2006/relationships\"";
    _outStream << " " << "xmlns:p=\"http://schemas.openxmlformats.org/presentationml/2006/main\"";
    _outStream << " " << "xmlns:a14=\"http://schemas.microsoft.com/office/drawing/2010/main\"";
    _outStream << " " << "xmlns:a=\"http://schemas.openxmlformats.org/drawingml/2006/main\"";

    assert(m_has_val_attr);
    if (m_has_val_attr)
    {
        _outStream << " " << "val" << "=\"" << m_val_attr << "\"";
    }

    _outStream << ">";

    _outStream << "</p14:modId>";
}

const modId_element& modId_element::default_instance()
{
    if (!modId_element::default_instance_)
    {
        modId_element::default_instance_ = new modId_element();
    }
    return *modId_element::default_instance_;
}

bool modId_element::has_val_attr() const
{
    return m_has_val_attr;
}

void modId_element::set_val_attr(const XSD::unsignedInt_& _val_attr)
{
    m_has_val_attr = true;
    m_val_attr = _val_attr;
}

const XSD::unsignedInt_& modId_element::get_val_attr() const
{
    return m_val_attr;
}

modId_element* modId_element::default_instance_ = NULL;

// showEvtLst_element
showEvtLst_element::showEvtLst_element()

{
}
showEvtLst_element::~showEvtLst_element()
{
    clear();
}
CT_TriggerEventRecord* showEvtLst_element::add_triggerEvt()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_TriggerEventRecord* pNewChild = pChildGroup->mutable_triggerEvt();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

CT_MediaPlaybackEventRecord* showEvtLst_element::add_playEvt()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_MediaPlaybackEventRecord* pNewChild = pChildGroup->mutable_playEvt();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

CT_MediaPlaybackEventRecord* showEvtLst_element::add_stopEvt()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_MediaPlaybackEventRecord* pNewChild = pChildGroup->mutable_stopEvt();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

CT_MediaPlaybackEventRecord* showEvtLst_element::add_pauseEvt()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_MediaPlaybackEventRecord* pNewChild = pChildGroup->mutable_pauseEvt();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

CT_MediaPlaybackEventRecord* showEvtLst_element::add_resumeEvt()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_MediaPlaybackEventRecord* pNewChild = pChildGroup->mutable_resumeEvt();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

CT_MediaSeekEventRecord* showEvtLst_element::add_seekEvt()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_MediaSeekEventRecord* pNewChild = pChildGroup->mutable_seekEvt();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

CT_NullEventRecord* showEvtLst_element::add_nullEvt()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_NullEventRecord* pNewChild = pChildGroup->mutable_nullEvt();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

void showEvtLst_element::clear()
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

void showEvtLst_element::toXml(std::ostream& _outStream) const
{
    _outStream << "<p14:showEvtLst";

    _outStream << " " << "xmlns:p14=\"http://schemas.microsoft.com/office/powerpoint/2010/main\"";
    _outStream << " " << "xmlns:s=\"http://schemas.openxmlformats.org/officeDocument/2006/sharedTypes\"";
    _outStream << " " << "xmlns:r=\"http://schemas.openxmlformats.org/officeDocument/2006/relationships\"";
    _outStream << " " << "xmlns:p=\"http://schemas.openxmlformats.org/presentationml/2006/main\"";
    _outStream << " " << "xmlns:a14=\"http://schemas.microsoft.com/office/drawing/2010/main\"";
    _outStream << " " << "xmlns:a=\"http://schemas.openxmlformats.org/drawingml/2006/main\"";

    _outStream << ">";

    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_triggerEvt())
            {
                (*iter)->get_triggerEvt().toXmlElem("p14:triggerEvt", "", _outStream);
            }


            else if ((*iter)->has_playEvt())
            {
                (*iter)->get_playEvt().toXmlElem("p14:playEvt", "", _outStream);
            }


            else if ((*iter)->has_stopEvt())
            {
                (*iter)->get_stopEvt().toXmlElem("p14:stopEvt", "", _outStream);
            }


            else if ((*iter)->has_pauseEvt())
            {
                (*iter)->get_pauseEvt().toXmlElem("p14:pauseEvt", "", _outStream);
            }


            else if ((*iter)->has_resumeEvt())
            {
                (*iter)->get_resumeEvt().toXmlElem("p14:resumeEvt", "", _outStream);
            }


            else if ((*iter)->has_seekEvt())
            {
                (*iter)->get_seekEvt().toXmlElem("p14:seekEvt", "", _outStream);
            }


            else if ((*iter)->has_nullEvt())
            {
                (*iter)->get_nullEvt().toXmlElem("p14:nullEvt", "", _outStream);
            }


        }
    }

    _outStream << "</p14:showEvtLst>";
}

const showEvtLst_element& showEvtLst_element::default_instance()
{
    if (!showEvtLst_element::default_instance_)
    {
        showEvtLst_element::default_instance_ = new showEvtLst_element();
    }
    return *showEvtLst_element::default_instance_;
}


// showEvtLst_element::ChildGroup_1
showEvtLst_element::ChildGroup_1::ChildGroup_1()
    :m_has_triggerEvt(false),
     m_triggerEvt(NULL),
     m_has_playEvt(false),
     m_playEvt(NULL),
     m_has_stopEvt(false),
     m_stopEvt(NULL),
     m_has_pauseEvt(false),
     m_pauseEvt(NULL),
     m_has_resumeEvt(false),
     m_resumeEvt(NULL),
     m_has_seekEvt(false),
     m_seekEvt(NULL),
     m_has_nullEvt(false),
     m_nullEvt(NULL)
{
}
bool showEvtLst_element::ChildGroup_1::has_triggerEvt() const
{
    return m_has_triggerEvt;
}

CT_TriggerEventRecord* showEvtLst_element::ChildGroup_1::mutable_triggerEvt()
{

    m_has_playEvt = false;

    if (m_playEvt)
    {
        delete m_playEvt;
        m_playEvt = NULL;
    }
    ;

    m_has_stopEvt = false;

    if (m_stopEvt)
    {
        delete m_stopEvt;
        m_stopEvt = NULL;
    }
    ;

    m_has_pauseEvt = false;

    if (m_pauseEvt)
    {
        delete m_pauseEvt;
        m_pauseEvt = NULL;
    }
    ;

    m_has_resumeEvt = false;

    if (m_resumeEvt)
    {
        delete m_resumeEvt;
        m_resumeEvt = NULL;
    }
    ;

    m_has_seekEvt = false;

    if (m_seekEvt)
    {
        delete m_seekEvt;
        m_seekEvt = NULL;
    }
    ;

    m_has_nullEvt = false;

    if (m_nullEvt)
    {
        delete m_nullEvt;
        m_nullEvt = NULL;
    }
    ;

    m_has_triggerEvt = true;
    if (!m_triggerEvt)
    {
        m_triggerEvt = new CT_TriggerEventRecord();
    }
    return m_triggerEvt;
}

const CT_TriggerEventRecord& showEvtLst_element::ChildGroup_1::get_triggerEvt() const
{
    if (m_triggerEvt)
    {
        return *m_triggerEvt;
    }
    return CT_TriggerEventRecord::default_instance();
}

bool showEvtLst_element::ChildGroup_1::has_playEvt() const
{
    return m_has_playEvt;
}

CT_MediaPlaybackEventRecord* showEvtLst_element::ChildGroup_1::mutable_playEvt()
{

    m_has_triggerEvt = false;

    if (m_triggerEvt)
    {
        delete m_triggerEvt;
        m_triggerEvt = NULL;
    }
    ;

    m_has_stopEvt = false;

    if (m_stopEvt)
    {
        delete m_stopEvt;
        m_stopEvt = NULL;
    }
    ;

    m_has_pauseEvt = false;

    if (m_pauseEvt)
    {
        delete m_pauseEvt;
        m_pauseEvt = NULL;
    }
    ;

    m_has_resumeEvt = false;

    if (m_resumeEvt)
    {
        delete m_resumeEvt;
        m_resumeEvt = NULL;
    }
    ;

    m_has_seekEvt = false;

    if (m_seekEvt)
    {
        delete m_seekEvt;
        m_seekEvt = NULL;
    }
    ;

    m_has_nullEvt = false;

    if (m_nullEvt)
    {
        delete m_nullEvt;
        m_nullEvt = NULL;
    }
    ;

    m_has_playEvt = true;
    if (!m_playEvt)
    {
        m_playEvt = new CT_MediaPlaybackEventRecord();
    }
    return m_playEvt;
}

const CT_MediaPlaybackEventRecord& showEvtLst_element::ChildGroup_1::get_playEvt() const
{
    if (m_playEvt)
    {
        return *m_playEvt;
    }
    return CT_MediaPlaybackEventRecord::default_instance();
}

bool showEvtLst_element::ChildGroup_1::has_stopEvt() const
{
    return m_has_stopEvt;
}

CT_MediaPlaybackEventRecord* showEvtLst_element::ChildGroup_1::mutable_stopEvt()
{

    m_has_triggerEvt = false;

    if (m_triggerEvt)
    {
        delete m_triggerEvt;
        m_triggerEvt = NULL;
    }
    ;

    m_has_playEvt = false;

    if (m_playEvt)
    {
        delete m_playEvt;
        m_playEvt = NULL;
    }
    ;

    m_has_pauseEvt = false;

    if (m_pauseEvt)
    {
        delete m_pauseEvt;
        m_pauseEvt = NULL;
    }
    ;

    m_has_resumeEvt = false;

    if (m_resumeEvt)
    {
        delete m_resumeEvt;
        m_resumeEvt = NULL;
    }
    ;

    m_has_seekEvt = false;

    if (m_seekEvt)
    {
        delete m_seekEvt;
        m_seekEvt = NULL;
    }
    ;

    m_has_nullEvt = false;

    if (m_nullEvt)
    {
        delete m_nullEvt;
        m_nullEvt = NULL;
    }
    ;

    m_has_stopEvt = true;
    if (!m_stopEvt)
    {
        m_stopEvt = new CT_MediaPlaybackEventRecord();
    }
    return m_stopEvt;
}

const CT_MediaPlaybackEventRecord& showEvtLst_element::ChildGroup_1::get_stopEvt() const
{
    if (m_stopEvt)
    {
        return *m_stopEvt;
    }
    return CT_MediaPlaybackEventRecord::default_instance();
}

bool showEvtLst_element::ChildGroup_1::has_pauseEvt() const
{
    return m_has_pauseEvt;
}

CT_MediaPlaybackEventRecord* showEvtLst_element::ChildGroup_1::mutable_pauseEvt()
{

    m_has_triggerEvt = false;

    if (m_triggerEvt)
    {
        delete m_triggerEvt;
        m_triggerEvt = NULL;
    }
    ;

    m_has_playEvt = false;

    if (m_playEvt)
    {
        delete m_playEvt;
        m_playEvt = NULL;
    }
    ;

    m_has_stopEvt = false;

    if (m_stopEvt)
    {
        delete m_stopEvt;
        m_stopEvt = NULL;
    }
    ;

    m_has_resumeEvt = false;

    if (m_resumeEvt)
    {
        delete m_resumeEvt;
        m_resumeEvt = NULL;
    }
    ;

    m_has_seekEvt = false;

    if (m_seekEvt)
    {
        delete m_seekEvt;
        m_seekEvt = NULL;
    }
    ;

    m_has_nullEvt = false;

    if (m_nullEvt)
    {
        delete m_nullEvt;
        m_nullEvt = NULL;
    }
    ;

    m_has_pauseEvt = true;
    if (!m_pauseEvt)
    {
        m_pauseEvt = new CT_MediaPlaybackEventRecord();
    }
    return m_pauseEvt;
}

const CT_MediaPlaybackEventRecord& showEvtLst_element::ChildGroup_1::get_pauseEvt() const
{
    if (m_pauseEvt)
    {
        return *m_pauseEvt;
    }
    return CT_MediaPlaybackEventRecord::default_instance();
}

bool showEvtLst_element::ChildGroup_1::has_resumeEvt() const
{
    return m_has_resumeEvt;
}

CT_MediaPlaybackEventRecord* showEvtLst_element::ChildGroup_1::mutable_resumeEvt()
{

    m_has_triggerEvt = false;

    if (m_triggerEvt)
    {
        delete m_triggerEvt;
        m_triggerEvt = NULL;
    }
    ;

    m_has_playEvt = false;

    if (m_playEvt)
    {
        delete m_playEvt;
        m_playEvt = NULL;
    }
    ;

    m_has_stopEvt = false;

    if (m_stopEvt)
    {
        delete m_stopEvt;
        m_stopEvt = NULL;
    }
    ;

    m_has_pauseEvt = false;

    if (m_pauseEvt)
    {
        delete m_pauseEvt;
        m_pauseEvt = NULL;
    }
    ;

    m_has_seekEvt = false;

    if (m_seekEvt)
    {
        delete m_seekEvt;
        m_seekEvt = NULL;
    }
    ;

    m_has_nullEvt = false;

    if (m_nullEvt)
    {
        delete m_nullEvt;
        m_nullEvt = NULL;
    }
    ;

    m_has_resumeEvt = true;
    if (!m_resumeEvt)
    {
        m_resumeEvt = new CT_MediaPlaybackEventRecord();
    }
    return m_resumeEvt;
}

const CT_MediaPlaybackEventRecord& showEvtLst_element::ChildGroup_1::get_resumeEvt() const
{
    if (m_resumeEvt)
    {
        return *m_resumeEvt;
    }
    return CT_MediaPlaybackEventRecord::default_instance();
}

bool showEvtLst_element::ChildGroup_1::has_seekEvt() const
{
    return m_has_seekEvt;
}

CT_MediaSeekEventRecord* showEvtLst_element::ChildGroup_1::mutable_seekEvt()
{

    m_has_triggerEvt = false;

    if (m_triggerEvt)
    {
        delete m_triggerEvt;
        m_triggerEvt = NULL;
    }
    ;

    m_has_playEvt = false;

    if (m_playEvt)
    {
        delete m_playEvt;
        m_playEvt = NULL;
    }
    ;

    m_has_stopEvt = false;

    if (m_stopEvt)
    {
        delete m_stopEvt;
        m_stopEvt = NULL;
    }
    ;

    m_has_pauseEvt = false;

    if (m_pauseEvt)
    {
        delete m_pauseEvt;
        m_pauseEvt = NULL;
    }
    ;

    m_has_resumeEvt = false;

    if (m_resumeEvt)
    {
        delete m_resumeEvt;
        m_resumeEvt = NULL;
    }
    ;

    m_has_nullEvt = false;

    if (m_nullEvt)
    {
        delete m_nullEvt;
        m_nullEvt = NULL;
    }
    ;

    m_has_seekEvt = true;
    if (!m_seekEvt)
    {
        m_seekEvt = new CT_MediaSeekEventRecord();
    }
    return m_seekEvt;
}

const CT_MediaSeekEventRecord& showEvtLst_element::ChildGroup_1::get_seekEvt() const
{
    if (m_seekEvt)
    {
        return *m_seekEvt;
    }
    return CT_MediaSeekEventRecord::default_instance();
}

bool showEvtLst_element::ChildGroup_1::has_nullEvt() const
{
    return m_has_nullEvt;
}

CT_NullEventRecord* showEvtLst_element::ChildGroup_1::mutable_nullEvt()
{

    m_has_triggerEvt = false;

    if (m_triggerEvt)
    {
        delete m_triggerEvt;
        m_triggerEvt = NULL;
    }
    ;

    m_has_playEvt = false;

    if (m_playEvt)
    {
        delete m_playEvt;
        m_playEvt = NULL;
    }
    ;

    m_has_stopEvt = false;

    if (m_stopEvt)
    {
        delete m_stopEvt;
        m_stopEvt = NULL;
    }
    ;

    m_has_pauseEvt = false;

    if (m_pauseEvt)
    {
        delete m_pauseEvt;
        m_pauseEvt = NULL;
    }
    ;

    m_has_resumeEvt = false;

    if (m_resumeEvt)
    {
        delete m_resumeEvt;
        m_resumeEvt = NULL;
    }
    ;

    m_has_seekEvt = false;

    if (m_seekEvt)
    {
        delete m_seekEvt;
        m_seekEvt = NULL;
    }
    ;

    m_has_nullEvt = true;
    if (!m_nullEvt)
    {
        m_nullEvt = new CT_NullEventRecord();
    }
    return m_nullEvt;
}

const CT_NullEventRecord& showEvtLst_element::ChildGroup_1::get_nullEvt() const
{
    if (m_nullEvt)
    {
        return *m_nullEvt;
    }
    return CT_NullEventRecord::default_instance();
}

showEvtLst_element* showEvtLst_element::default_instance_ = NULL;

// dur_attr
void dur_attr::toXml(std::ostream& _outStream) const
{    }


// presetBounceEnd_attr
void presetBounceEnd_attr::toXml(std::ostream& _outStream) const
{    }


// bounceEnd_attr
void bounceEnd_attr::toXml(std::ostream& _outStream) const
{    }


// bwMode_attr
void bwMode_attr::toXml(std::ostream& _outStream) const
{    }

}