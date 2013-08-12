#include "shared-math_xsd.h"
#include <stdlib.h>
#include <sstream>
#include <algorithm>
#include <functional>
#include <assert.h>
#include "wml_xsd.h"
#include "shared-commonSimpleTypes_xsd.h"
#include "dml-wordprocessingDrawing_xsd.h"
#include "shared-math_xsd.h"
#include "shared-relationshipReference_xsd.h"
#include "shared-customXmlSchemaProperties_xsd.h"
#include "vml-main_xsd.h"
#include "vml-officeDrawing_xsd.h"
#include "dml-main_xsd.h"
#include "dml-picture_xsd.h"
#include "dml-diagram_xsd.h"
#include "dml-chart_xsd.h"
#include "dml-lockedCanvas_xsd.h"
#include "dml-chartDrawing_xsd.h"
#include "vml-wordprocessingDrawing_xsd.h"
#include "vml-spreadsheetDrawing_xsd.h"
#include "vml-presentationDrawing_xsd.h"
namespace ns_m {
using namespace std;

// Element

// Attribute

// ST_Integer255
ST_Integer255::ST_Integer255()
    :m_has_value(false),
     m_value(0)
{
}
ST_Integer255::ST_Integer255(const XSD::integer_& _value)
    :m_has_value(true)
{

    set_value(_value);
}
ST_Integer255::~ST_Integer255()
{
    clear();
}
bool ST_Integer255::has_value() const
{
    return m_has_value;
}

void ST_Integer255::set_value(const XSD::integer_& _value)
{   assert(1 <= _value);
    assert(_value <= 255);

    m_has_value = true;
    m_value = _value;
}

const XSD::integer_& ST_Integer255::get_value() const
{
    return m_value;
}

void ST_Integer255::clear()
{
    m_has_value = false;
    m_value = 0;;
}

void ST_Integer255::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_value)
    {
        _outStream << " " << _attrName << "=\"" << m_value << "\"";;
    }
}

const ST_Integer255& ST_Integer255::default_instance()
{
    if (!ST_Integer255::default_instance_)
    {
        ST_Integer255::default_instance_ = new ST_Integer255();
    }
    return *ST_Integer255::default_instance_;
}

std::string ST_Integer255::toString() const
{
    std::stringstream strStream;
    strStream << get_value();
    return strStream.str();
}

ST_Integer255* ST_Integer255::default_instance_ = NULL;

// ST_Integer2
ST_Integer2::ST_Integer2()
    :m_has_value(false),
     m_value(0)
{
}
ST_Integer2::ST_Integer2(const XSD::integer_& _value)
    :m_has_value(true)
{

    set_value(_value);
}
ST_Integer2::~ST_Integer2()
{
    clear();
}
bool ST_Integer2::has_value() const
{
    return m_has_value;
}

void ST_Integer2::set_value(const XSD::integer_& _value)
{   assert(-2 <= _value);
    assert(_value <= 2);

    m_has_value = true;
    m_value = _value;
}

const XSD::integer_& ST_Integer2::get_value() const
{
    return m_value;
}

void ST_Integer2::clear()
{
    m_has_value = false;
    m_value = 0;;
}

void ST_Integer2::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_value)
    {
        _outStream << " " << _attrName << "=\"" << m_value << "\"";;
    }
}

const ST_Integer2& ST_Integer2::default_instance()
{
    if (!ST_Integer2::default_instance_)
    {
        ST_Integer2::default_instance_ = new ST_Integer2();
    }
    return *ST_Integer2::default_instance_;
}

std::string ST_Integer2::toString() const
{
    std::stringstream strStream;
    strStream << get_value();
    return strStream.str();
}

ST_Integer2* ST_Integer2::default_instance_ = NULL;

// ST_SpacingRule
ST_SpacingRule::ST_SpacingRule()
    :m_has_value(false),
     m_value(0)
{
}
ST_SpacingRule::ST_SpacingRule(const XSD::integer_& _value)
    :m_has_value(true)
{

    set_value(_value);
}
ST_SpacingRule::~ST_SpacingRule()
{
    clear();
}
bool ST_SpacingRule::has_value() const
{
    return m_has_value;
}

void ST_SpacingRule::set_value(const XSD::integer_& _value)
{   assert(0 <= _value);
    assert(_value <= 4);

    m_has_value = true;
    m_value = _value;
}

const XSD::integer_& ST_SpacingRule::get_value() const
{
    return m_value;
}

void ST_SpacingRule::clear()
{
    m_has_value = false;
    m_value = 0;;
}

void ST_SpacingRule::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_value)
    {
        _outStream << " " << _attrName << "=\"" << m_value << "\"";;
    }
}

const ST_SpacingRule& ST_SpacingRule::default_instance()
{
    if (!ST_SpacingRule::default_instance_)
    {
        ST_SpacingRule::default_instance_ = new ST_SpacingRule();
    }
    return *ST_SpacingRule::default_instance_;
}

std::string ST_SpacingRule::toString() const
{
    std::stringstream strStream;
    strStream << get_value();
    return strStream.str();
}

ST_SpacingRule* ST_SpacingRule::default_instance_ = NULL;

// ST_UnSignedInteger
ST_UnSignedInteger::ST_UnSignedInteger()
    :m_has_value(false),
     m_value(0)
{
}
ST_UnSignedInteger::ST_UnSignedInteger(const XSD::unsignedInt_& _value)
    :m_has_value(true)
{

    set_value(_value);
}
ST_UnSignedInteger::~ST_UnSignedInteger()
{
    clear();
}
bool ST_UnSignedInteger::has_value() const
{
    return m_has_value;
}

void ST_UnSignedInteger::set_value(const XSD::unsignedInt_& _value)
{
    m_has_value = true;
    m_value = _value;
}

const XSD::unsignedInt_& ST_UnSignedInteger::get_value() const
{
    return m_value;
}

void ST_UnSignedInteger::clear()
{
    m_has_value = false;
    m_value = 0;;
}

void ST_UnSignedInteger::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_value)
    {
        _outStream << " " << _attrName << "=\"" << m_value << "\"";;
    }
}

const ST_UnSignedInteger& ST_UnSignedInteger::default_instance()
{
    if (!ST_UnSignedInteger::default_instance_)
    {
        ST_UnSignedInteger::default_instance_ = new ST_UnSignedInteger();
    }
    return *ST_UnSignedInteger::default_instance_;
}

std::string ST_UnSignedInteger::toString() const
{
    std::stringstream strStream;
    strStream << get_value();
    return strStream.str();
}

ST_UnSignedInteger* ST_UnSignedInteger::default_instance_ = NULL;

// ST_Char
ST_Char::ST_Char()
    :m_has_value(false),
     m_value("")
{
}
ST_Char::ST_Char(const XSD::string_& _value)
    :m_has_value(true)
{

    set_value(_value);
}
ST_Char::~ST_Char()
{
    clear();
}
bool ST_Char::has_value() const
{
    return m_has_value;
}

void ST_Char::set_value(const XSD::string_& _value)
{   assert(_value.size() <= 1);

    m_has_value = true;
    m_value = _value;
}

const XSD::string_& ST_Char::get_value() const
{
    return m_value;
}

void ST_Char::clear()
{
    m_has_value = false;
    m_value.clear();;
}

void ST_Char::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_value)
    {
        _outStream << " " << _attrName << "=\"" << m_value << "\"";;
    }
}

const ST_Char& ST_Char::default_instance()
{
    if (!ST_Char::default_instance_)
    {
        ST_Char::default_instance_ = new ST_Char();
    }
    return *ST_Char::default_instance_;
}

std::string ST_Char::toString() const
{
    std::stringstream strStream;
    strStream << get_value();
    return strStream.str();
}

ST_Char* ST_Char::default_instance_ = NULL;

// ST_Shp
ST_Shp::ST_Shp()
    :m_has_value(false)
{
}
ST_Shp::ST_Shp(const ST_Shp::Type& _value)
    :m_has_value(true),
     m_value(_value)
{
}
ST_Shp::~ST_Shp()
{
    clear();
}
bool ST_Shp::has_value() const
{
    return m_has_value;
}

void ST_Shp::set_value(const ST_Shp::Type& _value)
{
    m_has_value = true;
    m_value = _value;
}

const ST_Shp::Type& ST_Shp::get_value() const
{
    return m_value;
}

std::string ST_Shp::toString() const
{
    return ST_Shp::TypeStrList[m_value];
}

void ST_Shp::clear()
{
    m_has_value = false;
}

void ST_Shp::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_value)
    {
        _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
}

const ST_Shp& ST_Shp::default_instance()
{
    if (!ST_Shp::default_instance_)
    {
        ST_Shp::default_instance_ = new ST_Shp();
    }
    return *ST_Shp::default_instance_;
}

const std::string ST_Shp::TypeStrList[] =
{
    "centered",
    "match"
};
ST_Shp* ST_Shp::default_instance_ = NULL;

// ST_FType
ST_FType::ST_FType()
    :m_has_value(false)
{
}
ST_FType::ST_FType(const ST_FType::Type& _value)
    :m_has_value(true),
     m_value(_value)
{
}
ST_FType::~ST_FType()
{
    clear();
}
bool ST_FType::has_value() const
{
    return m_has_value;
}

void ST_FType::set_value(const ST_FType::Type& _value)
{
    m_has_value = true;
    m_value = _value;
}

const ST_FType::Type& ST_FType::get_value() const
{
    return m_value;
}

std::string ST_FType::toString() const
{
    return ST_FType::TypeStrList[m_value];
}

void ST_FType::clear()
{
    m_has_value = false;
}

void ST_FType::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_value)
    {
        _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
}

const ST_FType& ST_FType::default_instance()
{
    if (!ST_FType::default_instance_)
    {
        ST_FType::default_instance_ = new ST_FType();
    }
    return *ST_FType::default_instance_;
}

const std::string ST_FType::TypeStrList[] =
{
    "bar",
    "skw",
    "lin",
    "noBar"
};
ST_FType* ST_FType::default_instance_ = NULL;

// ST_LimLoc
ST_LimLoc::ST_LimLoc()
    :m_has_value(false)
{
}
ST_LimLoc::ST_LimLoc(const ST_LimLoc::Type& _value)
    :m_has_value(true),
     m_value(_value)
{
}
ST_LimLoc::~ST_LimLoc()
{
    clear();
}
bool ST_LimLoc::has_value() const
{
    return m_has_value;
}

void ST_LimLoc::set_value(const ST_LimLoc::Type& _value)
{
    m_has_value = true;
    m_value = _value;
}

const ST_LimLoc::Type& ST_LimLoc::get_value() const
{
    return m_value;
}

std::string ST_LimLoc::toString() const
{
    return ST_LimLoc::TypeStrList[m_value];
}

void ST_LimLoc::clear()
{
    m_has_value = false;
}

void ST_LimLoc::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_value)
    {
        _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
}

const ST_LimLoc& ST_LimLoc::default_instance()
{
    if (!ST_LimLoc::default_instance_)
    {
        ST_LimLoc::default_instance_ = new ST_LimLoc();
    }
    return *ST_LimLoc::default_instance_;
}

const std::string ST_LimLoc::TypeStrList[] =
{
    "undOvr",
    "subSup"
};
ST_LimLoc* ST_LimLoc::default_instance_ = NULL;

// ST_TopBot
ST_TopBot::ST_TopBot()
    :m_has_value(false)
{
}
ST_TopBot::ST_TopBot(const ST_TopBot::Type& _value)
    :m_has_value(true),
     m_value(_value)
{
}
ST_TopBot::~ST_TopBot()
{
    clear();
}
bool ST_TopBot::has_value() const
{
    return m_has_value;
}

void ST_TopBot::set_value(const ST_TopBot::Type& _value)
{
    m_has_value = true;
    m_value = _value;
}

const ST_TopBot::Type& ST_TopBot::get_value() const
{
    return m_value;
}

std::string ST_TopBot::toString() const
{
    return ST_TopBot::TypeStrList[m_value];
}

void ST_TopBot::clear()
{
    m_has_value = false;
}

void ST_TopBot::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_value)
    {
        _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
}

const ST_TopBot& ST_TopBot::default_instance()
{
    if (!ST_TopBot::default_instance_)
    {
        ST_TopBot::default_instance_ = new ST_TopBot();
    }
    return *ST_TopBot::default_instance_;
}

const std::string ST_TopBot::TypeStrList[] =
{
    "top",
    "bot"
};
ST_TopBot* ST_TopBot::default_instance_ = NULL;

// ST_Script
ST_Script::ST_Script()
    :m_has_value(false)
{
}
ST_Script::ST_Script(const ST_Script::Type& _value)
    :m_has_value(true),
     m_value(_value)
{
}
ST_Script::~ST_Script()
{
    clear();
}
bool ST_Script::has_value() const
{
    return m_has_value;
}

void ST_Script::set_value(const ST_Script::Type& _value)
{
    m_has_value = true;
    m_value = _value;
}

const ST_Script::Type& ST_Script::get_value() const
{
    return m_value;
}

std::string ST_Script::toString() const
{
    return ST_Script::TypeStrList[m_value];
}

void ST_Script::clear()
{
    m_has_value = false;
}

void ST_Script::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_value)
    {
        _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
}

const ST_Script& ST_Script::default_instance()
{
    if (!ST_Script::default_instance_)
    {
        ST_Script::default_instance_ = new ST_Script();
    }
    return *ST_Script::default_instance_;
}

const std::string ST_Script::TypeStrList[] =
{
    "roman",
    "script",
    "fraktur",
    "double-struck",
    "sans-serif",
    "monospace"
};
ST_Script* ST_Script::default_instance_ = NULL;

// ST_Style
ST_Style::ST_Style()
    :m_has_value(false)
{
}
ST_Style::ST_Style(const ST_Style::Type& _value)
    :m_has_value(true),
     m_value(_value)
{
}
ST_Style::~ST_Style()
{
    clear();
}
bool ST_Style::has_value() const
{
    return m_has_value;
}

void ST_Style::set_value(const ST_Style::Type& _value)
{
    m_has_value = true;
    m_value = _value;
}

const ST_Style::Type& ST_Style::get_value() const
{
    return m_value;
}

std::string ST_Style::toString() const
{
    return ST_Style::TypeStrList[m_value];
}

void ST_Style::clear()
{
    m_has_value = false;
}

void ST_Style::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_value)
    {
        _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
}

const ST_Style& ST_Style::default_instance()
{
    if (!ST_Style::default_instance_)
    {
        ST_Style::default_instance_ = new ST_Style();
    }
    return *ST_Style::default_instance_;
}

const std::string ST_Style::TypeStrList[] =
{
    "p",
    "b",
    "i",
    "bi"
};
ST_Style* ST_Style::default_instance_ = NULL;

// ST_Jc
ST_Jc::ST_Jc()
    :m_has_value(false)
{
}
ST_Jc::ST_Jc(const ST_Jc::Type& _value)
    :m_has_value(true),
     m_value(_value)
{
}
ST_Jc::~ST_Jc()
{
    clear();
}
bool ST_Jc::has_value() const
{
    return m_has_value;
}

void ST_Jc::set_value(const ST_Jc::Type& _value)
{
    m_has_value = true;
    m_value = _value;
}

const ST_Jc::Type& ST_Jc::get_value() const
{
    return m_value;
}

std::string ST_Jc::toString() const
{
    return ST_Jc::TypeStrList[m_value];
}

void ST_Jc::clear()
{
    m_has_value = false;
}

void ST_Jc::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_value)
    {
        _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
}

const ST_Jc& ST_Jc::default_instance()
{
    if (!ST_Jc::default_instance_)
    {
        ST_Jc::default_instance_ = new ST_Jc();
    }
    return *ST_Jc::default_instance_;
}

const std::string ST_Jc::TypeStrList[] =
{
    "left",
    "right",
    "center",
    "centerGroup"
};
ST_Jc* ST_Jc::default_instance_ = NULL;

// ST_BreakBin
ST_BreakBin::ST_BreakBin()
    :m_has_value(false)
{
}
ST_BreakBin::ST_BreakBin(const ST_BreakBin::Type& _value)
    :m_has_value(true),
     m_value(_value)
{
}
ST_BreakBin::~ST_BreakBin()
{
    clear();
}
bool ST_BreakBin::has_value() const
{
    return m_has_value;
}

void ST_BreakBin::set_value(const ST_BreakBin::Type& _value)
{
    m_has_value = true;
    m_value = _value;
}

const ST_BreakBin::Type& ST_BreakBin::get_value() const
{
    return m_value;
}

std::string ST_BreakBin::toString() const
{
    return ST_BreakBin::TypeStrList[m_value];
}

void ST_BreakBin::clear()
{
    m_has_value = false;
}

void ST_BreakBin::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_value)
    {
        _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
}

const ST_BreakBin& ST_BreakBin::default_instance()
{
    if (!ST_BreakBin::default_instance_)
    {
        ST_BreakBin::default_instance_ = new ST_BreakBin();
    }
    return *ST_BreakBin::default_instance_;
}

const std::string ST_BreakBin::TypeStrList[] =
{
    "before",
    "after",
    "repeat"
};
ST_BreakBin* ST_BreakBin::default_instance_ = NULL;

// ST_BreakBinSub
ST_BreakBinSub::ST_BreakBinSub()
    :m_has_value(false)
{
}
ST_BreakBinSub::ST_BreakBinSub(const ST_BreakBinSub::Type& _value)
    :m_has_value(true),
     m_value(_value)
{
}
ST_BreakBinSub::~ST_BreakBinSub()
{
    clear();
}
bool ST_BreakBinSub::has_value() const
{
    return m_has_value;
}

void ST_BreakBinSub::set_value(const ST_BreakBinSub::Type& _value)
{
    m_has_value = true;
    m_value = _value;
}

const ST_BreakBinSub::Type& ST_BreakBinSub::get_value() const
{
    return m_value;
}

std::string ST_BreakBinSub::toString() const
{
    return ST_BreakBinSub::TypeStrList[m_value];
}

void ST_BreakBinSub::clear()
{
    m_has_value = false;
}

void ST_BreakBinSub::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_value)
    {
        _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
}

const ST_BreakBinSub& ST_BreakBinSub::default_instance()
{
    if (!ST_BreakBinSub::default_instance_)
    {
        ST_BreakBinSub::default_instance_ = new ST_BreakBinSub();
    }
    return *ST_BreakBinSub::default_instance_;
}

const std::string ST_BreakBinSub::TypeStrList[] =
{
    "--",
    "-+",
    "+-"
};
ST_BreakBinSub* ST_BreakBinSub::default_instance_ = NULL;

// CT_Integer255
CT_Integer255::CT_Integer255()
    :m_has_val_attr(false),
     m_val_attr(NULL)
{
}
CT_Integer255::~CT_Integer255()
{
    clear();
}
void CT_Integer255::clear()
{
    m_has_val_attr = false;

    if (m_val_attr)
    {
        delete m_val_attr;
        m_val_attr = NULL;
    }

}

void CT_Integer255::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    assert(m_has_val_attr);
    if (m_has_val_attr)
    {
        m_val_attr->toXmlAttr("m:val", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_Integer255& CT_Integer255::default_instance()
{
    if (!CT_Integer255::default_instance_)
    {
        CT_Integer255::default_instance_ = new CT_Integer255();
    }
    return *CT_Integer255::default_instance_;
}

bool CT_Integer255::has_val_attr() const
{
    return m_has_val_attr;
}

void CT_Integer255::set_val_attr(const ST_Integer255& _val_attr)
{
    m_has_val_attr = true;
    m_val_attr = new ST_Integer255(_val_attr);
}

const ST_Integer255& CT_Integer255::get_val_attr() const
{
    if (m_val_attr)
    {
        return *m_val_attr;
    }
    return ST_Integer255::default_instance();
}

CT_Integer255* CT_Integer255::default_instance_ = NULL;

// CT_Integer2
CT_Integer2::CT_Integer2()
    :m_has_val_attr(false),
     m_val_attr(NULL)
{
}
CT_Integer2::~CT_Integer2()
{
    clear();
}
void CT_Integer2::clear()
{
    m_has_val_attr = false;

    if (m_val_attr)
    {
        delete m_val_attr;
        m_val_attr = NULL;
    }

}

void CT_Integer2::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    assert(m_has_val_attr);
    if (m_has_val_attr)
    {
        m_val_attr->toXmlAttr("m:val", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_Integer2& CT_Integer2::default_instance()
{
    if (!CT_Integer2::default_instance_)
    {
        CT_Integer2::default_instance_ = new CT_Integer2();
    }
    return *CT_Integer2::default_instance_;
}

bool CT_Integer2::has_val_attr() const
{
    return m_has_val_attr;
}

void CT_Integer2::set_val_attr(const ST_Integer2& _val_attr)
{
    m_has_val_attr = true;
    m_val_attr = new ST_Integer2(_val_attr);
}

const ST_Integer2& CT_Integer2::get_val_attr() const
{
    if (m_val_attr)
    {
        return *m_val_attr;
    }
    return ST_Integer2::default_instance();
}

CT_Integer2* CT_Integer2::default_instance_ = NULL;

// CT_SpacingRule
CT_SpacingRule::CT_SpacingRule()
    :m_has_val_attr(false),
     m_val_attr(NULL)
{
}
CT_SpacingRule::~CT_SpacingRule()
{
    clear();
}
void CT_SpacingRule::clear()
{
    m_has_val_attr = false;

    if (m_val_attr)
    {
        delete m_val_attr;
        m_val_attr = NULL;
    }

}

void CT_SpacingRule::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    assert(m_has_val_attr);
    if (m_has_val_attr)
    {
        m_val_attr->toXmlAttr("m:val", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_SpacingRule& CT_SpacingRule::default_instance()
{
    if (!CT_SpacingRule::default_instance_)
    {
        CT_SpacingRule::default_instance_ = new CT_SpacingRule();
    }
    return *CT_SpacingRule::default_instance_;
}

bool CT_SpacingRule::has_val_attr() const
{
    return m_has_val_attr;
}

void CT_SpacingRule::set_val_attr(const ST_SpacingRule& _val_attr)
{
    m_has_val_attr = true;
    m_val_attr = new ST_SpacingRule(_val_attr);
}

const ST_SpacingRule& CT_SpacingRule::get_val_attr() const
{
    if (m_val_attr)
    {
        return *m_val_attr;
    }
    return ST_SpacingRule::default_instance();
}

CT_SpacingRule* CT_SpacingRule::default_instance_ = NULL;

// CT_UnSignedInteger
CT_UnSignedInteger::CT_UnSignedInteger()
    :m_has_val_attr(false),
     m_val_attr(NULL)
{
}
CT_UnSignedInteger::~CT_UnSignedInteger()
{
    clear();
}
void CT_UnSignedInteger::clear()
{
    m_has_val_attr = false;

    if (m_val_attr)
    {
        delete m_val_attr;
        m_val_attr = NULL;
    }

}

void CT_UnSignedInteger::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    assert(m_has_val_attr);
    if (m_has_val_attr)
    {
        m_val_attr->toXmlAttr("m:val", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_UnSignedInteger& CT_UnSignedInteger::default_instance()
{
    if (!CT_UnSignedInteger::default_instance_)
    {
        CT_UnSignedInteger::default_instance_ = new CT_UnSignedInteger();
    }
    return *CT_UnSignedInteger::default_instance_;
}

bool CT_UnSignedInteger::has_val_attr() const
{
    return m_has_val_attr;
}

void CT_UnSignedInteger::set_val_attr(const ST_UnSignedInteger& _val_attr)
{
    m_has_val_attr = true;
    m_val_attr = new ST_UnSignedInteger(_val_attr);
}

const ST_UnSignedInteger& CT_UnSignedInteger::get_val_attr() const
{
    if (m_val_attr)
    {
        return *m_val_attr;
    }
    return ST_UnSignedInteger::default_instance();
}

CT_UnSignedInteger* CT_UnSignedInteger::default_instance_ = NULL;

// CT_Char
CT_Char::CT_Char()
    :m_has_val_attr(false),
     m_val_attr(NULL)
{
}
CT_Char::~CT_Char()
{
    clear();
}
void CT_Char::clear()
{
    m_has_val_attr = false;

    if (m_val_attr)
    {
        delete m_val_attr;
        m_val_attr = NULL;
    }

}

void CT_Char::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    assert(m_has_val_attr);
    if (m_has_val_attr)
    {
        m_val_attr->toXmlAttr("m:val", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_Char& CT_Char::default_instance()
{
    if (!CT_Char::default_instance_)
    {
        CT_Char::default_instance_ = new CT_Char();
    }
    return *CT_Char::default_instance_;
}

bool CT_Char::has_val_attr() const
{
    return m_has_val_attr;
}

void CT_Char::set_val_attr(const ST_Char& _val_attr)
{
    m_has_val_attr = true;
    m_val_attr = new ST_Char(_val_attr);
}

const ST_Char& CT_Char::get_val_attr() const
{
    if (m_val_attr)
    {
        return *m_val_attr;
    }
    return ST_Char::default_instance();
}

CT_Char* CT_Char::default_instance_ = NULL;

// CT_OnOff
CT_OnOff::CT_OnOff()
    :m_has_val_attr(false),
     m_val_attr(NULL)
{
}
CT_OnOff::~CT_OnOff()
{
    clear();
}
void CT_OnOff::clear()
{
    m_has_val_attr = false;

    if (m_val_attr)
    {
        delete m_val_attr;
        m_val_attr = NULL;
    }

}

void CT_OnOff::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_val_attr)
    {
        m_val_attr->toXmlAttr("m:val", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_OnOff& CT_OnOff::default_instance()
{
    if (!CT_OnOff::default_instance_)
    {
        CT_OnOff::default_instance_ = new CT_OnOff();
    }
    return *CT_OnOff::default_instance_;
}

bool CT_OnOff::has_val_attr() const
{
    return m_has_val_attr;
}

void CT_OnOff::set_val_attr(const ns_s::ST_OnOff& _val_attr)
{
    m_has_val_attr = true;
    m_val_attr = new ns_s::ST_OnOff(_val_attr);
}

const ns_s::ST_OnOff& CT_OnOff::get_val_attr() const
{
    if (m_val_attr)
    {
        return *m_val_attr;
    }
    return ns_s::ST_OnOff::default_instance();
}

CT_OnOff* CT_OnOff::default_instance_ = NULL;

// CT_String
CT_String::CT_String()
    :m_has_val_attr(false),
     m_val_attr(NULL)
{
}
CT_String::~CT_String()
{
    clear();
}
void CT_String::clear()
{
    m_has_val_attr = false;

    if (m_val_attr)
    {
        delete m_val_attr;
        m_val_attr = NULL;
    }

}

void CT_String::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_val_attr)
    {
        m_val_attr->toXmlAttr("m:val", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_String& CT_String::default_instance()
{
    if (!CT_String::default_instance_)
    {
        CT_String::default_instance_ = new CT_String();
    }
    return *CT_String::default_instance_;
}

bool CT_String::has_val_attr() const
{
    return m_has_val_attr;
}

void CT_String::set_val_attr(const ns_s::ST_String& _val_attr)
{
    m_has_val_attr = true;
    m_val_attr = new ns_s::ST_String(_val_attr);
}

const ns_s::ST_String& CT_String::get_val_attr() const
{
    if (m_val_attr)
    {
        return *m_val_attr;
    }
    return ns_s::ST_String::default_instance();
}

CT_String* CT_String::default_instance_ = NULL;

// CT_XAlign
CT_XAlign::CT_XAlign()
    :m_has_val_attr(false),
     m_val_attr(NULL)
{
}
CT_XAlign::~CT_XAlign()
{
    clear();
}
void CT_XAlign::clear()
{
    m_has_val_attr = false;

    if (m_val_attr)
    {
        delete m_val_attr;
        m_val_attr = NULL;
    }

}

void CT_XAlign::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    assert(m_has_val_attr);
    if (m_has_val_attr)
    {
        m_val_attr->toXmlAttr("m:val", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_XAlign& CT_XAlign::default_instance()
{
    if (!CT_XAlign::default_instance_)
    {
        CT_XAlign::default_instance_ = new CT_XAlign();
    }
    return *CT_XAlign::default_instance_;
}

bool CT_XAlign::has_val_attr() const
{
    return m_has_val_attr;
}

void CT_XAlign::set_val_attr(const ns_s::ST_XAlign& _val_attr)
{
    m_has_val_attr = true;
    m_val_attr = new ns_s::ST_XAlign(_val_attr);
}

const ns_s::ST_XAlign& CT_XAlign::get_val_attr() const
{
    if (m_val_attr)
    {
        return *m_val_attr;
    }
    return ns_s::ST_XAlign::default_instance();
}

CT_XAlign* CT_XAlign::default_instance_ = NULL;

// CT_YAlign
CT_YAlign::CT_YAlign()
    :m_has_val_attr(false),
     m_val_attr(NULL)
{
}
CT_YAlign::~CT_YAlign()
{
    clear();
}
void CT_YAlign::clear()
{
    m_has_val_attr = false;

    if (m_val_attr)
    {
        delete m_val_attr;
        m_val_attr = NULL;
    }

}

void CT_YAlign::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    assert(m_has_val_attr);
    if (m_has_val_attr)
    {
        m_val_attr->toXmlAttr("m:val", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_YAlign& CT_YAlign::default_instance()
{
    if (!CT_YAlign::default_instance_)
    {
        CT_YAlign::default_instance_ = new CT_YAlign();
    }
    return *CT_YAlign::default_instance_;
}

bool CT_YAlign::has_val_attr() const
{
    return m_has_val_attr;
}

void CT_YAlign::set_val_attr(const ns_s::ST_YAlign& _val_attr)
{
    m_has_val_attr = true;
    m_val_attr = new ns_s::ST_YAlign(_val_attr);
}

const ns_s::ST_YAlign& CT_YAlign::get_val_attr() const
{
    if (m_val_attr)
    {
        return *m_val_attr;
    }
    return ns_s::ST_YAlign::default_instance();
}

CT_YAlign* CT_YAlign::default_instance_ = NULL;

// CT_Shp
CT_Shp::CT_Shp()
    :m_has_val_attr(false),
     m_val_attr(NULL)
{
}
CT_Shp::~CT_Shp()
{
    clear();
}
void CT_Shp::clear()
{
    m_has_val_attr = false;

    if (m_val_attr)
    {
        delete m_val_attr;
        m_val_attr = NULL;
    }

}

void CT_Shp::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    assert(m_has_val_attr);
    if (m_has_val_attr)
    {
        m_val_attr->toXmlAttr("m:val", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_Shp& CT_Shp::default_instance()
{
    if (!CT_Shp::default_instance_)
    {
        CT_Shp::default_instance_ = new CT_Shp();
    }
    return *CT_Shp::default_instance_;
}

bool CT_Shp::has_val_attr() const
{
    return m_has_val_attr;
}

void CT_Shp::set_val_attr(const ST_Shp& _val_attr)
{
    m_has_val_attr = true;
    m_val_attr = new ST_Shp(_val_attr);
}

const ST_Shp& CT_Shp::get_val_attr() const
{
    if (m_val_attr)
    {
        return *m_val_attr;
    }
    return ST_Shp::default_instance();
}

CT_Shp* CT_Shp::default_instance_ = NULL;

// CT_FType
CT_FType::CT_FType()
    :m_has_val_attr(false),
     m_val_attr(NULL)
{
}
CT_FType::~CT_FType()
{
    clear();
}
void CT_FType::clear()
{
    m_has_val_attr = false;

    if (m_val_attr)
    {
        delete m_val_attr;
        m_val_attr = NULL;
    }

}

void CT_FType::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    assert(m_has_val_attr);
    if (m_has_val_attr)
    {
        m_val_attr->toXmlAttr("m:val", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_FType& CT_FType::default_instance()
{
    if (!CT_FType::default_instance_)
    {
        CT_FType::default_instance_ = new CT_FType();
    }
    return *CT_FType::default_instance_;
}

bool CT_FType::has_val_attr() const
{
    return m_has_val_attr;
}

void CT_FType::set_val_attr(const ST_FType& _val_attr)
{
    m_has_val_attr = true;
    m_val_attr = new ST_FType(_val_attr);
}

const ST_FType& CT_FType::get_val_attr() const
{
    if (m_val_attr)
    {
        return *m_val_attr;
    }
    return ST_FType::default_instance();
}

CT_FType* CT_FType::default_instance_ = NULL;

// CT_LimLoc
CT_LimLoc::CT_LimLoc()
    :m_has_val_attr(false),
     m_val_attr(NULL)
{
}
CT_LimLoc::~CT_LimLoc()
{
    clear();
}
void CT_LimLoc::clear()
{
    m_has_val_attr = false;

    if (m_val_attr)
    {
        delete m_val_attr;
        m_val_attr = NULL;
    }

}

void CT_LimLoc::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    assert(m_has_val_attr);
    if (m_has_val_attr)
    {
        m_val_attr->toXmlAttr("m:val", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_LimLoc& CT_LimLoc::default_instance()
{
    if (!CT_LimLoc::default_instance_)
    {
        CT_LimLoc::default_instance_ = new CT_LimLoc();
    }
    return *CT_LimLoc::default_instance_;
}

bool CT_LimLoc::has_val_attr() const
{
    return m_has_val_attr;
}

void CT_LimLoc::set_val_attr(const ST_LimLoc& _val_attr)
{
    m_has_val_attr = true;
    m_val_attr = new ST_LimLoc(_val_attr);
}

const ST_LimLoc& CT_LimLoc::get_val_attr() const
{
    if (m_val_attr)
    {
        return *m_val_attr;
    }
    return ST_LimLoc::default_instance();
}

CT_LimLoc* CT_LimLoc::default_instance_ = NULL;

// CT_TopBot
CT_TopBot::CT_TopBot()
    :m_has_val_attr(false),
     m_val_attr(NULL)
{
}
CT_TopBot::~CT_TopBot()
{
    clear();
}
void CT_TopBot::clear()
{
    m_has_val_attr = false;

    if (m_val_attr)
    {
        delete m_val_attr;
        m_val_attr = NULL;
    }

}

void CT_TopBot::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    assert(m_has_val_attr);
    if (m_has_val_attr)
    {
        m_val_attr->toXmlAttr("m:val", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_TopBot& CT_TopBot::default_instance()
{
    if (!CT_TopBot::default_instance_)
    {
        CT_TopBot::default_instance_ = new CT_TopBot();
    }
    return *CT_TopBot::default_instance_;
}

bool CT_TopBot::has_val_attr() const
{
    return m_has_val_attr;
}

void CT_TopBot::set_val_attr(const ST_TopBot& _val_attr)
{
    m_has_val_attr = true;
    m_val_attr = new ST_TopBot(_val_attr);
}

const ST_TopBot& CT_TopBot::get_val_attr() const
{
    if (m_val_attr)
    {
        return *m_val_attr;
    }
    return ST_TopBot::default_instance();
}

CT_TopBot* CT_TopBot::default_instance_ = NULL;

// CT_Script
CT_Script::CT_Script()
    :m_has_val_attr(false),
     m_val_attr(NULL)
{
}
CT_Script::~CT_Script()
{
    clear();
}
void CT_Script::clear()
{
    m_has_val_attr = false;

    if (m_val_attr)
    {
        delete m_val_attr;
        m_val_attr = NULL;
    }

}

void CT_Script::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_val_attr)
    {
        m_val_attr->toXmlAttr("m:val", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_Script& CT_Script::default_instance()
{
    if (!CT_Script::default_instance_)
    {
        CT_Script::default_instance_ = new CT_Script();
    }
    return *CT_Script::default_instance_;
}

bool CT_Script::has_val_attr() const
{
    return m_has_val_attr;
}

void CT_Script::set_val_attr(const ST_Script& _val_attr)
{
    m_has_val_attr = true;
    m_val_attr = new ST_Script(_val_attr);
}

const ST_Script& CT_Script::get_val_attr() const
{
    if (m_val_attr)
    {
        return *m_val_attr;
    }
    return ST_Script::default_instance();
}

CT_Script* CT_Script::default_instance_ = NULL;

// CT_Style
CT_Style::CT_Style()
    :m_has_val_attr(false),
     m_val_attr(NULL)
{
}
CT_Style::~CT_Style()
{
    clear();
}
void CT_Style::clear()
{
    m_has_val_attr = false;

    if (m_val_attr)
    {
        delete m_val_attr;
        m_val_attr = NULL;
    }

}

void CT_Style::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_val_attr)
    {
        m_val_attr->toXmlAttr("m:val", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_Style& CT_Style::default_instance()
{
    if (!CT_Style::default_instance_)
    {
        CT_Style::default_instance_ = new CT_Style();
    }
    return *CT_Style::default_instance_;
}

bool CT_Style::has_val_attr() const
{
    return m_has_val_attr;
}

void CT_Style::set_val_attr(const ST_Style& _val_attr)
{
    m_has_val_attr = true;
    m_val_attr = new ST_Style(_val_attr);
}

const ST_Style& CT_Style::get_val_attr() const
{
    if (m_val_attr)
    {
        return *m_val_attr;
    }
    return ST_Style::default_instance();
}

CT_Style* CT_Style::default_instance_ = NULL;

// CT_ManualBreak
CT_ManualBreak::CT_ManualBreak()
    :m_has_alnAt_attr(false),
     m_alnAt_attr(NULL)
{
}
CT_ManualBreak::~CT_ManualBreak()
{
    clear();
}
void CT_ManualBreak::clear()
{
    m_has_alnAt_attr = false;

    if (m_alnAt_attr)
    {
        delete m_alnAt_attr;
        m_alnAt_attr = NULL;
    }

}

void CT_ManualBreak::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_alnAt_attr)
    {
        m_alnAt_attr->toXmlAttr("m:alnAt", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_ManualBreak& CT_ManualBreak::default_instance()
{
    if (!CT_ManualBreak::default_instance_)
    {
        CT_ManualBreak::default_instance_ = new CT_ManualBreak();
    }
    return *CT_ManualBreak::default_instance_;
}

bool CT_ManualBreak::has_alnAt_attr() const
{
    return m_has_alnAt_attr;
}

void CT_ManualBreak::set_alnAt_attr(const ST_Integer255& _alnAt_attr)
{
    m_has_alnAt_attr = true;
    m_alnAt_attr = new ST_Integer255(_alnAt_attr);
}

const ST_Integer255& CT_ManualBreak::get_alnAt_attr() const
{
    if (m_alnAt_attr)
    {
        return *m_alnAt_attr;
    }
    return ST_Integer255::default_instance();
}

CT_ManualBreak* CT_ManualBreak::default_instance_ = NULL;

// CT_RPR
CT_RPR::CT_RPR()
    :m_has_lit(false),
     m_lit(NULL),
     m_has_nor(false),
     m_nor(NULL),
     m_has_scr(false),
     m_scr(NULL),
     m_has_sty(false),
     m_sty(NULL),
     m_has_brk(false),
     m_brk(NULL),
     m_has_aln(false),
     m_aln(NULL)
{
}
CT_RPR::~CT_RPR()
{
    clear();
}
bool CT_RPR::has_lit() const
{
    return m_has_lit;
}

CT_OnOff* CT_RPR::mutable_lit()
{
    m_has_lit = true;
    if (!m_lit)
    {
        m_lit = new CT_OnOff();
    }
    return m_lit;
}

const CT_OnOff& CT_RPR::get_lit() const
{
    if (m_lit)
    {
        return *m_lit;
    }
    return CT_OnOff::default_instance();
}

bool CT_RPR::has_nor() const
{
    return m_has_nor;
}

CT_OnOff* CT_RPR::mutable_nor()
{

    m_has_scr = false;

    if (m_scr)
    {
        delete m_scr;
        m_scr = NULL;
    }
    ;

    m_has_sty = false;

    if (m_sty)
    {
        delete m_sty;
        m_sty = NULL;
    }
    ;

    m_has_nor = true;
    if (!m_nor)
    {
        m_nor = new CT_OnOff();
    }
    return m_nor;
}

const CT_OnOff& CT_RPR::get_nor() const
{
    if (m_nor)
    {
        return *m_nor;
    }
    return CT_OnOff::default_instance();
}

bool CT_RPR::has_scr() const
{
    return m_has_scr;
}

CT_Script* CT_RPR::mutable_scr()
{

    m_has_nor = false;

    if (m_nor)
    {
        delete m_nor;
        m_nor = NULL;
    }
    ;

    m_has_sty = false;

    if (m_sty)
    {
        delete m_sty;
        m_sty = NULL;
    }
    ;

    m_has_scr = true;
    if (!m_scr)
    {
        m_scr = new CT_Script();
    }
    return m_scr;
}

const CT_Script& CT_RPR::get_scr() const
{
    if (m_scr)
    {
        return *m_scr;
    }
    return CT_Script::default_instance();
}

bool CT_RPR::has_sty() const
{
    return m_has_sty;
}

CT_Style* CT_RPR::mutable_sty()
{

    m_has_nor = false;

    if (m_nor)
    {
        delete m_nor;
        m_nor = NULL;
    }
    ;

    m_has_scr = false;

    if (m_scr)
    {
        delete m_scr;
        m_scr = NULL;
    }
    ;

    m_has_sty = true;
    if (!m_sty)
    {
        m_sty = new CT_Style();
    }
    return m_sty;
}

const CT_Style& CT_RPR::get_sty() const
{
    if (m_sty)
    {
        return *m_sty;
    }
    return CT_Style::default_instance();
}

bool CT_RPR::has_brk() const
{
    return m_has_brk;
}

CT_ManualBreak* CT_RPR::mutable_brk()
{
    m_has_brk = true;
    if (!m_brk)
    {
        m_brk = new CT_ManualBreak();
    }
    return m_brk;
}

const CT_ManualBreak& CT_RPR::get_brk() const
{
    if (m_brk)
    {
        return *m_brk;
    }
    return CT_ManualBreak::default_instance();
}

bool CT_RPR::has_aln() const
{
    return m_has_aln;
}

CT_OnOff* CT_RPR::mutable_aln()
{
    m_has_aln = true;
    if (!m_aln)
    {
        m_aln = new CT_OnOff();
    }
    return m_aln;
}

const CT_OnOff& CT_RPR::get_aln() const
{
    if (m_aln)
    {
        return *m_aln;
    }
    return CT_OnOff::default_instance();
}

void CT_RPR::clear()
{
    m_has_lit = false;

    if (m_lit)
    {
        delete m_lit;
        m_lit = NULL;
    }


    m_has_nor = false;

    if (m_nor)
    {
        delete m_nor;
        m_nor = NULL;
    }


    m_has_scr = false;

    if (m_scr)
    {
        delete m_scr;
        m_scr = NULL;
    }


    m_has_sty = false;

    if (m_sty)
    {
        delete m_sty;
        m_sty = NULL;
    }


    m_has_brk = false;

    if (m_brk)
    {
        delete m_brk;
        m_brk = NULL;
    }


    m_has_aln = false;

    if (m_aln)
    {
        delete m_aln;
        m_aln = NULL;
    }

}

void CT_RPR::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";


    if (m_has_lit)
    {
        m_lit->toXmlElem("m:lit", "", _outStream);
    }

    {
        bool elemHasValueList[3] = {m_has_nor, m_has_scr, m_has_sty};
        int cnt = count(elemHasValueList, elemHasValueList + 3, true);
        assert(cnt == 1);
    }


    if (m_has_nor)
    {
        m_nor->toXmlElem("m:nor", "", _outStream);
    }


    if (m_has_scr)
    {
        m_scr->toXmlElem("m:scr", "", _outStream);
    }


    if (m_has_sty)
    {
        m_sty->toXmlElem("m:sty", "", _outStream);
    }


    if (m_has_brk)
    {
        m_brk->toXmlElem("m:brk", "", _outStream);
    }


    if (m_has_aln)
    {
        m_aln->toXmlElem("m:aln", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_RPR& CT_RPR::default_instance()
{
    if (!CT_RPR::default_instance_)
    {
        CT_RPR::default_instance_ = new CT_RPR();
    }
    return *CT_RPR::default_instance_;
}

CT_RPR* CT_RPR::default_instance_ = NULL;

// CT_Text
CT_Text::CT_Text()
    :m_has_xml_space_attr(false),
     m_xml_space_attr(NULL)
{
}
CT_Text::~CT_Text()
{
    clear();
}
void CT_Text::clear()
{
    m_has_xml_space_attr = false;

    if (m_xml_space_attr)
    {
        delete m_xml_space_attr;
        m_xml_space_attr = NULL;
    }

    ns_s::ST_String::clear();
}

void CT_Text::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_xml_space_attr)
    {
        m_xml_space_attr->toXmlAttr("xml:space", _outStream);
    }

    _outStream << ">";
    _outStream << toString();
    _outStream << "</" << _elemName << ">";
}

const CT_Text& CT_Text::default_instance()
{
    if (!CT_Text::default_instance_)
    {
        CT_Text::default_instance_ = new CT_Text();
    }
    return *CT_Text::default_instance_;
}

bool CT_Text::has_xml_space_attr() const
{
    return m_has_xml_space_attr;
}

void CT_Text::set_xml_space_attr(const ns_xml::space& _xml_space_attr)
{
    m_has_xml_space_attr = true;
    m_xml_space_attr = new ns_xml::space(_xml_space_attr);
}

const ns_xml::space& CT_Text::get_xml_space_attr() const
{
    if (m_xml_space_attr)
    {
        return *m_xml_space_attr;
    }
    return ns_xml::space::default_instance();
}

CT_Text* CT_Text::default_instance_ = NULL;

// CT_R
CT_R::CT_R()
    :m_has_rPr(false),
     m_rPr(NULL),
     m_has_w_rPr(false),
     m_w_rPr(NULL)
{
}
CT_R::~CT_R()
{
    clear();
}
bool CT_R::has_rPr() const
{
    return m_has_rPr;
}

CT_RPR* CT_R::mutable_rPr()
{
    m_has_rPr = true;
    if (!m_rPr)
    {
        m_rPr = new CT_RPR();
    }
    return m_rPr;
}

const CT_RPR& CT_R::get_rPr() const
{
    if (m_rPr)
    {
        return *m_rPr;
    }
    return CT_RPR::default_instance();
}

bool CT_R::has_w_rPr() const
{
    return m_has_w_rPr;
}

ns_w::CT_RPr* CT_R::mutable_w_rPr()
{
    m_has_w_rPr = true;
    if (!m_w_rPr)
    {
        m_w_rPr = new ns_w::CT_RPr();
    }
    return m_w_rPr;
}

const ns_w::CT_RPr& CT_R::get_w_rPr() const
{
    if (m_w_rPr)
    {
        return *m_w_rPr;
    }
    return ns_w::CT_RPr::default_instance();
}

ns_w::CT_Br* CT_R::add_w_br()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_Br* pNewChild = pChildGroup->mutable_w_br();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

ns_w::CT_Text* CT_R::add_w_t()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_Text* pNewChild = pChildGroup->mutable_w_t();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

ns_w::CT_Rel* CT_R::add_w_contentPart()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_Rel* pNewChild = pChildGroup->mutable_w_contentPart();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

ns_w::CT_Text* CT_R::add_w_delText()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_Text* pNewChild = pChildGroup->mutable_w_delText();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

ns_w::CT_Text* CT_R::add_w_instrText()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_Text* pNewChild = pChildGroup->mutable_w_instrText();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

ns_w::CT_Text* CT_R::add_w_delInstrText()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_Text* pNewChild = pChildGroup->mutable_w_delInstrText();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

ns_w::CT_Empty* CT_R::add_w_noBreakHyphen()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_Empty* pNewChild = pChildGroup->mutable_w_noBreakHyphen();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

ns_w::CT_Empty* CT_R::add_w_softHyphen()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_Empty* pNewChild = pChildGroup->mutable_w_softHyphen();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

ns_w::CT_Empty* CT_R::add_w_dayShort()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_Empty* pNewChild = pChildGroup->mutable_w_dayShort();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

ns_w::CT_Empty* CT_R::add_w_monthShort()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_Empty* pNewChild = pChildGroup->mutable_w_monthShort();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

ns_w::CT_Empty* CT_R::add_w_yearShort()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_Empty* pNewChild = pChildGroup->mutable_w_yearShort();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

ns_w::CT_Empty* CT_R::add_w_dayLong()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_Empty* pNewChild = pChildGroup->mutable_w_dayLong();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

ns_w::CT_Empty* CT_R::add_w_monthLong()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_Empty* pNewChild = pChildGroup->mutable_w_monthLong();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

ns_w::CT_Empty* CT_R::add_w_yearLong()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_Empty* pNewChild = pChildGroup->mutable_w_yearLong();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

ns_w::CT_Empty* CT_R::add_w_annotationRef()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_Empty* pNewChild = pChildGroup->mutable_w_annotationRef();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

ns_w::CT_Empty* CT_R::add_w_footnoteRef()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_Empty* pNewChild = pChildGroup->mutable_w_footnoteRef();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

ns_w::CT_Empty* CT_R::add_w_endnoteRef()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_Empty* pNewChild = pChildGroup->mutable_w_endnoteRef();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

ns_w::CT_Empty* CT_R::add_w_separator()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_Empty* pNewChild = pChildGroup->mutable_w_separator();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

ns_w::CT_Empty* CT_R::add_w_continuationSeparator()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_Empty* pNewChild = pChildGroup->mutable_w_continuationSeparator();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

ns_w::CT_Sym* CT_R::add_w_sym()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_Sym* pNewChild = pChildGroup->mutable_w_sym();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

ns_w::CT_Empty* CT_R::add_w_pgNum()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_Empty* pNewChild = pChildGroup->mutable_w_pgNum();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

ns_w::CT_Empty* CT_R::add_w_cr()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_Empty* pNewChild = pChildGroup->mutable_w_cr();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

ns_w::CT_Empty* CT_R::add_w_tab()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_Empty* pNewChild = pChildGroup->mutable_w_tab();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

ns_w::CT_Object* CT_R::add_w_object()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_Object* pNewChild = pChildGroup->mutable_w_object();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

ns_w::CT_Picture* CT_R::add_w_pict()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_Picture* pNewChild = pChildGroup->mutable_w_pict();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

ns_w::CT_FldChar* CT_R::add_w_fldChar()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_FldChar* pNewChild = pChildGroup->mutable_w_fldChar();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

ns_w::CT_Ruby* CT_R::add_w_ruby()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_Ruby* pNewChild = pChildGroup->mutable_w_ruby();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

ns_w::CT_FtnEdnRef* CT_R::add_w_footnoteReference()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_FtnEdnRef* pNewChild = pChildGroup->mutable_w_footnoteReference();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

ns_w::CT_FtnEdnRef* CT_R::add_w_endnoteReference()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_FtnEdnRef* pNewChild = pChildGroup->mutable_w_endnoteReference();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

ns_w::CT_Markup* CT_R::add_w_commentReference()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_Markup* pNewChild = pChildGroup->mutable_w_commentReference();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

ns_w::CT_Drawing* CT_R::add_w_drawing()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_Drawing* pNewChild = pChildGroup->mutable_w_drawing();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

ns_w::CT_PTab* CT_R::add_w_ptab()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_PTab* pNewChild = pChildGroup->mutable_w_ptab();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

ns_w::CT_Empty* CT_R::add_w_lastRenderedPageBreak()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_Empty* pNewChild = pChildGroup->mutable_w_lastRenderedPageBreak();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

CT_Text* CT_R::add_t()
{
    ChildGroup_2 *pChildGroup = new ChildGroup_2();
    CT_Text* pNewChild = pChildGroup->mutable_t();
    m_childGroupList_2.push_back(pChildGroup);
    return pNewChild;
}

void CT_R::clear()
{
    m_has_rPr = false;

    if (m_rPr)
    {
        delete m_rPr;
        m_rPr = NULL;
    }


    m_has_w_rPr = false;

    if (m_w_rPr)
    {
        delete m_w_rPr;
        m_w_rPr = NULL;
    }


    {
        vector<ChildGroup_1*>::iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_1.clear();
    }

    {
        vector<ChildGroup_2*>::iterator iter;
        for (iter = m_childGroupList_2.begin(); iter != m_childGroupList_2.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_2.clear();
    }
}

void CT_R::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";


    if (m_has_rPr)
    {
        m_rPr->toXmlElem("m:rPr", "", _outStream);
    }


    if (m_has_w_rPr)
    {
        m_w_rPr->toXmlElem("w:rPr", "", _outStream);
    }

    {
        const size_t childSize = m_childGroupList_1.size();
        assert(1 <= childSize);
    }

    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_w_br())
            {
                (*iter)->get_w_br().toXmlElem("w:br", "", _outStream);
            }


            else if ((*iter)->has_w_t())
            {
                (*iter)->get_w_t().toXmlElem("w:t", "", _outStream);
            }


            else if ((*iter)->has_w_contentPart())
            {
                (*iter)->get_w_contentPart().toXmlElem("w:contentPart", "", _outStream);
            }


            else if ((*iter)->has_w_delText())
            {
                (*iter)->get_w_delText().toXmlElem("w:delText", "", _outStream);
            }


            else if ((*iter)->has_w_instrText())
            {
                (*iter)->get_w_instrText().toXmlElem("w:instrText", "", _outStream);
            }


            else if ((*iter)->has_w_delInstrText())
            {
                (*iter)->get_w_delInstrText().toXmlElem("w:delInstrText", "", _outStream);
            }


            else if ((*iter)->has_w_noBreakHyphen())
            {
                (*iter)->get_w_noBreakHyphen().toXmlElem("w:noBreakHyphen", "", _outStream);
            }


            else if ((*iter)->has_w_softHyphen())
            {
                (*iter)->get_w_softHyphen().toXmlElem("w:softHyphen", "", _outStream);
            }


            else if ((*iter)->has_w_dayShort())
            {
                (*iter)->get_w_dayShort().toXmlElem("w:dayShort", "", _outStream);
            }


            else if ((*iter)->has_w_monthShort())
            {
                (*iter)->get_w_monthShort().toXmlElem("w:monthShort", "", _outStream);
            }


            else if ((*iter)->has_w_yearShort())
            {
                (*iter)->get_w_yearShort().toXmlElem("w:yearShort", "", _outStream);
            }


            else if ((*iter)->has_w_dayLong())
            {
                (*iter)->get_w_dayLong().toXmlElem("w:dayLong", "", _outStream);
            }


            else if ((*iter)->has_w_monthLong())
            {
                (*iter)->get_w_monthLong().toXmlElem("w:monthLong", "", _outStream);
            }


            else if ((*iter)->has_w_yearLong())
            {
                (*iter)->get_w_yearLong().toXmlElem("w:yearLong", "", _outStream);
            }


            else if ((*iter)->has_w_annotationRef())
            {
                (*iter)->get_w_annotationRef().toXmlElem("w:annotationRef", "", _outStream);
            }


            else if ((*iter)->has_w_footnoteRef())
            {
                (*iter)->get_w_footnoteRef().toXmlElem("w:footnoteRef", "", _outStream);
            }


            else if ((*iter)->has_w_endnoteRef())
            {
                (*iter)->get_w_endnoteRef().toXmlElem("w:endnoteRef", "", _outStream);
            }


            else if ((*iter)->has_w_separator())
            {
                (*iter)->get_w_separator().toXmlElem("w:separator", "", _outStream);
            }


            else if ((*iter)->has_w_continuationSeparator())
            {
                (*iter)->get_w_continuationSeparator().toXmlElem("w:continuationSeparator", "", _outStream);
            }


            else if ((*iter)->has_w_sym())
            {
                (*iter)->get_w_sym().toXmlElem("w:sym", "", _outStream);
            }


            else if ((*iter)->has_w_pgNum())
            {
                (*iter)->get_w_pgNum().toXmlElem("w:pgNum", "", _outStream);
            }


            else if ((*iter)->has_w_cr())
            {
                (*iter)->get_w_cr().toXmlElem("w:cr", "", _outStream);
            }


            else if ((*iter)->has_w_tab())
            {
                (*iter)->get_w_tab().toXmlElem("w:tab", "", _outStream);
            }


            else if ((*iter)->has_w_object())
            {
                (*iter)->get_w_object().toXmlElem("w:object", "", _outStream);
            }


            else if ((*iter)->has_w_pict())
            {
                (*iter)->get_w_pict().toXmlElem("w:pict", "", _outStream);
            }


            else if ((*iter)->has_w_fldChar())
            {
                (*iter)->get_w_fldChar().toXmlElem("w:fldChar", "", _outStream);
            }


            else if ((*iter)->has_w_ruby())
            {
                (*iter)->get_w_ruby().toXmlElem("w:ruby", "", _outStream);
            }


            else if ((*iter)->has_w_footnoteReference())
            {
                (*iter)->get_w_footnoteReference().toXmlElem("w:footnoteReference", "", _outStream);
            }


            else if ((*iter)->has_w_endnoteReference())
            {
                (*iter)->get_w_endnoteReference().toXmlElem("w:endnoteReference", "", _outStream);
            }


            else if ((*iter)->has_w_commentReference())
            {
                (*iter)->get_w_commentReference().toXmlElem("w:commentReference", "", _outStream);
            }


            else if ((*iter)->has_w_drawing())
            {
                (*iter)->get_w_drawing().toXmlElem("w:drawing", "", _outStream);
            }


            else if ((*iter)->has_w_ptab())
            {
                (*iter)->get_w_ptab().toXmlElem("w:ptab", "", _outStream);
            }


            else if ((*iter)->has_w_lastRenderedPageBreak())
            {
                (*iter)->get_w_lastRenderedPageBreak().toXmlElem("w:lastRenderedPageBreak", "", _outStream);
            }


        }
    }

    {
        const size_t childSize = m_childGroupList_2.size();
        assert(1 <= childSize);
    }

    {
        vector<ChildGroup_2*>::const_iterator iter;
        for (iter = m_childGroupList_2.begin(); iter != m_childGroupList_2.end(); ++iter)
        {
            if ((*iter)->has_t())
            {
                (*iter)->get_t().toXmlElem("m:t", "", _outStream);
            }


        }
    }

    _outStream << "</" << _elemName << ">";
}

const CT_R& CT_R::default_instance()
{
    if (!CT_R::default_instance_)
    {
        CT_R::default_instance_ = new CT_R();
    }
    return *CT_R::default_instance_;
}


// CT_R::ChildGroup_1
CT_R::ChildGroup_1::ChildGroup_1()
    :m_has_w_br(false),
     m_w_br(NULL),
     m_has_w_t(false),
     m_w_t(NULL),
     m_has_w_contentPart(false),
     m_w_contentPart(NULL),
     m_has_w_delText(false),
     m_w_delText(NULL),
     m_has_w_instrText(false),
     m_w_instrText(NULL),
     m_has_w_delInstrText(false),
     m_w_delInstrText(NULL),
     m_has_w_noBreakHyphen(false),
     m_w_noBreakHyphen(NULL),
     m_has_w_softHyphen(false),
     m_w_softHyphen(NULL),
     m_has_w_dayShort(false),
     m_w_dayShort(NULL),
     m_has_w_monthShort(false),
     m_w_monthShort(NULL),
     m_has_w_yearShort(false),
     m_w_yearShort(NULL),
     m_has_w_dayLong(false),
     m_w_dayLong(NULL),
     m_has_w_monthLong(false),
     m_w_monthLong(NULL),
     m_has_w_yearLong(false),
     m_w_yearLong(NULL),
     m_has_w_annotationRef(false),
     m_w_annotationRef(NULL),
     m_has_w_footnoteRef(false),
     m_w_footnoteRef(NULL),
     m_has_w_endnoteRef(false),
     m_w_endnoteRef(NULL),
     m_has_w_separator(false),
     m_w_separator(NULL),
     m_has_w_continuationSeparator(false),
     m_w_continuationSeparator(NULL),
     m_has_w_sym(false),
     m_w_sym(NULL),
     m_has_w_pgNum(false),
     m_w_pgNum(NULL),
     m_has_w_cr(false),
     m_w_cr(NULL),
     m_has_w_tab(false),
     m_w_tab(NULL),
     m_has_w_object(false),
     m_w_object(NULL),
     m_has_w_pict(false),
     m_w_pict(NULL),
     m_has_w_fldChar(false),
     m_w_fldChar(NULL),
     m_has_w_ruby(false),
     m_w_ruby(NULL),
     m_has_w_footnoteReference(false),
     m_w_footnoteReference(NULL),
     m_has_w_endnoteReference(false),
     m_w_endnoteReference(NULL),
     m_has_w_commentReference(false),
     m_w_commentReference(NULL),
     m_has_w_drawing(false),
     m_w_drawing(NULL),
     m_has_w_ptab(false),
     m_w_ptab(NULL),
     m_has_w_lastRenderedPageBreak(false),
     m_w_lastRenderedPageBreak(NULL)
{
}
bool CT_R::ChildGroup_1::has_w_br() const
{
    return m_has_w_br;
}

ns_w::CT_Br* CT_R::ChildGroup_1::mutable_w_br()
{

    m_has_w_t = false;

    if (m_w_t)
    {
        delete m_w_t;
        m_w_t = NULL;
    }
    ;

    m_has_w_contentPart = false;

    if (m_w_contentPart)
    {
        delete m_w_contentPart;
        m_w_contentPart = NULL;
    }
    ;

    m_has_w_delText = false;

    if (m_w_delText)
    {
        delete m_w_delText;
        m_w_delText = NULL;
    }
    ;

    m_has_w_instrText = false;

    if (m_w_instrText)
    {
        delete m_w_instrText;
        m_w_instrText = NULL;
    }
    ;

    m_has_w_delInstrText = false;

    if (m_w_delInstrText)
    {
        delete m_w_delInstrText;
        m_w_delInstrText = NULL;
    }
    ;

    m_has_w_noBreakHyphen = false;

    if (m_w_noBreakHyphen)
    {
        delete m_w_noBreakHyphen;
        m_w_noBreakHyphen = NULL;
    }
    ;

    m_has_w_softHyphen = false;

    if (m_w_softHyphen)
    {
        delete m_w_softHyphen;
        m_w_softHyphen = NULL;
    }
    ;

    m_has_w_dayShort = false;

    if (m_w_dayShort)
    {
        delete m_w_dayShort;
        m_w_dayShort = NULL;
    }
    ;

    m_has_w_monthShort = false;

    if (m_w_monthShort)
    {
        delete m_w_monthShort;
        m_w_monthShort = NULL;
    }
    ;

    m_has_w_yearShort = false;

    if (m_w_yearShort)
    {
        delete m_w_yearShort;
        m_w_yearShort = NULL;
    }
    ;

    m_has_w_dayLong = false;

    if (m_w_dayLong)
    {
        delete m_w_dayLong;
        m_w_dayLong = NULL;
    }
    ;

    m_has_w_monthLong = false;

    if (m_w_monthLong)
    {
        delete m_w_monthLong;
        m_w_monthLong = NULL;
    }
    ;

    m_has_w_yearLong = false;

    if (m_w_yearLong)
    {
        delete m_w_yearLong;
        m_w_yearLong = NULL;
    }
    ;

    m_has_w_annotationRef = false;

    if (m_w_annotationRef)
    {
        delete m_w_annotationRef;
        m_w_annotationRef = NULL;
    }
    ;

    m_has_w_footnoteRef = false;

    if (m_w_footnoteRef)
    {
        delete m_w_footnoteRef;
        m_w_footnoteRef = NULL;
    }
    ;

    m_has_w_endnoteRef = false;

    if (m_w_endnoteRef)
    {
        delete m_w_endnoteRef;
        m_w_endnoteRef = NULL;
    }
    ;

    m_has_w_separator = false;

    if (m_w_separator)
    {
        delete m_w_separator;
        m_w_separator = NULL;
    }
    ;

    m_has_w_continuationSeparator = false;

    if (m_w_continuationSeparator)
    {
        delete m_w_continuationSeparator;
        m_w_continuationSeparator = NULL;
    }
    ;

    m_has_w_sym = false;

    if (m_w_sym)
    {
        delete m_w_sym;
        m_w_sym = NULL;
    }
    ;

    m_has_w_pgNum = false;

    if (m_w_pgNum)
    {
        delete m_w_pgNum;
        m_w_pgNum = NULL;
    }
    ;

    m_has_w_cr = false;

    if (m_w_cr)
    {
        delete m_w_cr;
        m_w_cr = NULL;
    }
    ;

    m_has_w_tab = false;

    if (m_w_tab)
    {
        delete m_w_tab;
        m_w_tab = NULL;
    }
    ;

    m_has_w_object = false;

    if (m_w_object)
    {
        delete m_w_object;
        m_w_object = NULL;
    }
    ;

    m_has_w_pict = false;

    if (m_w_pict)
    {
        delete m_w_pict;
        m_w_pict = NULL;
    }
    ;

    m_has_w_fldChar = false;

    if (m_w_fldChar)
    {
        delete m_w_fldChar;
        m_w_fldChar = NULL;
    }
    ;

    m_has_w_ruby = false;

    if (m_w_ruby)
    {
        delete m_w_ruby;
        m_w_ruby = NULL;
    }
    ;

    m_has_w_footnoteReference = false;

    if (m_w_footnoteReference)
    {
        delete m_w_footnoteReference;
        m_w_footnoteReference = NULL;
    }
    ;

    m_has_w_endnoteReference = false;

    if (m_w_endnoteReference)
    {
        delete m_w_endnoteReference;
        m_w_endnoteReference = NULL;
    }
    ;

    m_has_w_commentReference = false;

    if (m_w_commentReference)
    {
        delete m_w_commentReference;
        m_w_commentReference = NULL;
    }
    ;

    m_has_w_drawing = false;

    if (m_w_drawing)
    {
        delete m_w_drawing;
        m_w_drawing = NULL;
    }
    ;

    m_has_w_ptab = false;

    if (m_w_ptab)
    {
        delete m_w_ptab;
        m_w_ptab = NULL;
    }
    ;

    m_has_w_lastRenderedPageBreak = false;

    if (m_w_lastRenderedPageBreak)
    {
        delete m_w_lastRenderedPageBreak;
        m_w_lastRenderedPageBreak = NULL;
    }
    ;

    m_has_w_br = true;
    if (!m_w_br)
    {
        m_w_br = new ns_w::CT_Br();
    }
    return m_w_br;
}

const ns_w::CT_Br& CT_R::ChildGroup_1::get_w_br() const
{
    if (m_w_br)
    {
        return *m_w_br;
    }
    return ns_w::CT_Br::default_instance();
}

bool CT_R::ChildGroup_1::has_w_t() const
{
    return m_has_w_t;
}

ns_w::CT_Text* CT_R::ChildGroup_1::mutable_w_t()
{

    m_has_w_br = false;

    if (m_w_br)
    {
        delete m_w_br;
        m_w_br = NULL;
    }
    ;

    m_has_w_contentPart = false;

    if (m_w_contentPart)
    {
        delete m_w_contentPart;
        m_w_contentPart = NULL;
    }
    ;

    m_has_w_delText = false;

    if (m_w_delText)
    {
        delete m_w_delText;
        m_w_delText = NULL;
    }
    ;

    m_has_w_instrText = false;

    if (m_w_instrText)
    {
        delete m_w_instrText;
        m_w_instrText = NULL;
    }
    ;

    m_has_w_delInstrText = false;

    if (m_w_delInstrText)
    {
        delete m_w_delInstrText;
        m_w_delInstrText = NULL;
    }
    ;

    m_has_w_noBreakHyphen = false;

    if (m_w_noBreakHyphen)
    {
        delete m_w_noBreakHyphen;
        m_w_noBreakHyphen = NULL;
    }
    ;

    m_has_w_softHyphen = false;

    if (m_w_softHyphen)
    {
        delete m_w_softHyphen;
        m_w_softHyphen = NULL;
    }
    ;

    m_has_w_dayShort = false;

    if (m_w_dayShort)
    {
        delete m_w_dayShort;
        m_w_dayShort = NULL;
    }
    ;

    m_has_w_monthShort = false;

    if (m_w_monthShort)
    {
        delete m_w_monthShort;
        m_w_monthShort = NULL;
    }
    ;

    m_has_w_yearShort = false;

    if (m_w_yearShort)
    {
        delete m_w_yearShort;
        m_w_yearShort = NULL;
    }
    ;

    m_has_w_dayLong = false;

    if (m_w_dayLong)
    {
        delete m_w_dayLong;
        m_w_dayLong = NULL;
    }
    ;

    m_has_w_monthLong = false;

    if (m_w_monthLong)
    {
        delete m_w_monthLong;
        m_w_monthLong = NULL;
    }
    ;

    m_has_w_yearLong = false;

    if (m_w_yearLong)
    {
        delete m_w_yearLong;
        m_w_yearLong = NULL;
    }
    ;

    m_has_w_annotationRef = false;

    if (m_w_annotationRef)
    {
        delete m_w_annotationRef;
        m_w_annotationRef = NULL;
    }
    ;

    m_has_w_footnoteRef = false;

    if (m_w_footnoteRef)
    {
        delete m_w_footnoteRef;
        m_w_footnoteRef = NULL;
    }
    ;

    m_has_w_endnoteRef = false;

    if (m_w_endnoteRef)
    {
        delete m_w_endnoteRef;
        m_w_endnoteRef = NULL;
    }
    ;

    m_has_w_separator = false;

    if (m_w_separator)
    {
        delete m_w_separator;
        m_w_separator = NULL;
    }
    ;

    m_has_w_continuationSeparator = false;

    if (m_w_continuationSeparator)
    {
        delete m_w_continuationSeparator;
        m_w_continuationSeparator = NULL;
    }
    ;

    m_has_w_sym = false;

    if (m_w_sym)
    {
        delete m_w_sym;
        m_w_sym = NULL;
    }
    ;

    m_has_w_pgNum = false;

    if (m_w_pgNum)
    {
        delete m_w_pgNum;
        m_w_pgNum = NULL;
    }
    ;

    m_has_w_cr = false;

    if (m_w_cr)
    {
        delete m_w_cr;
        m_w_cr = NULL;
    }
    ;

    m_has_w_tab = false;

    if (m_w_tab)
    {
        delete m_w_tab;
        m_w_tab = NULL;
    }
    ;

    m_has_w_object = false;

    if (m_w_object)
    {
        delete m_w_object;
        m_w_object = NULL;
    }
    ;

    m_has_w_pict = false;

    if (m_w_pict)
    {
        delete m_w_pict;
        m_w_pict = NULL;
    }
    ;

    m_has_w_fldChar = false;

    if (m_w_fldChar)
    {
        delete m_w_fldChar;
        m_w_fldChar = NULL;
    }
    ;

    m_has_w_ruby = false;

    if (m_w_ruby)
    {
        delete m_w_ruby;
        m_w_ruby = NULL;
    }
    ;

    m_has_w_footnoteReference = false;

    if (m_w_footnoteReference)
    {
        delete m_w_footnoteReference;
        m_w_footnoteReference = NULL;
    }
    ;

    m_has_w_endnoteReference = false;

    if (m_w_endnoteReference)
    {
        delete m_w_endnoteReference;
        m_w_endnoteReference = NULL;
    }
    ;

    m_has_w_commentReference = false;

    if (m_w_commentReference)
    {
        delete m_w_commentReference;
        m_w_commentReference = NULL;
    }
    ;

    m_has_w_drawing = false;

    if (m_w_drawing)
    {
        delete m_w_drawing;
        m_w_drawing = NULL;
    }
    ;

    m_has_w_ptab = false;

    if (m_w_ptab)
    {
        delete m_w_ptab;
        m_w_ptab = NULL;
    }
    ;

    m_has_w_lastRenderedPageBreak = false;

    if (m_w_lastRenderedPageBreak)
    {
        delete m_w_lastRenderedPageBreak;
        m_w_lastRenderedPageBreak = NULL;
    }
    ;

    m_has_w_t = true;
    if (!m_w_t)
    {
        m_w_t = new ns_w::CT_Text();
    }
    return m_w_t;
}

const ns_w::CT_Text& CT_R::ChildGroup_1::get_w_t() const
{
    if (m_w_t)
    {
        return *m_w_t;
    }
    return ns_w::CT_Text::default_instance();
}

bool CT_R::ChildGroup_1::has_w_contentPart() const
{
    return m_has_w_contentPart;
}

ns_w::CT_Rel* CT_R::ChildGroup_1::mutable_w_contentPart()
{

    m_has_w_br = false;

    if (m_w_br)
    {
        delete m_w_br;
        m_w_br = NULL;
    }
    ;

    m_has_w_t = false;

    if (m_w_t)
    {
        delete m_w_t;
        m_w_t = NULL;
    }
    ;

    m_has_w_delText = false;

    if (m_w_delText)
    {
        delete m_w_delText;
        m_w_delText = NULL;
    }
    ;

    m_has_w_instrText = false;

    if (m_w_instrText)
    {
        delete m_w_instrText;
        m_w_instrText = NULL;
    }
    ;

    m_has_w_delInstrText = false;

    if (m_w_delInstrText)
    {
        delete m_w_delInstrText;
        m_w_delInstrText = NULL;
    }
    ;

    m_has_w_noBreakHyphen = false;

    if (m_w_noBreakHyphen)
    {
        delete m_w_noBreakHyphen;
        m_w_noBreakHyphen = NULL;
    }
    ;

    m_has_w_softHyphen = false;

    if (m_w_softHyphen)
    {
        delete m_w_softHyphen;
        m_w_softHyphen = NULL;
    }
    ;

    m_has_w_dayShort = false;

    if (m_w_dayShort)
    {
        delete m_w_dayShort;
        m_w_dayShort = NULL;
    }
    ;

    m_has_w_monthShort = false;

    if (m_w_monthShort)
    {
        delete m_w_monthShort;
        m_w_monthShort = NULL;
    }
    ;

    m_has_w_yearShort = false;

    if (m_w_yearShort)
    {
        delete m_w_yearShort;
        m_w_yearShort = NULL;
    }
    ;

    m_has_w_dayLong = false;

    if (m_w_dayLong)
    {
        delete m_w_dayLong;
        m_w_dayLong = NULL;
    }
    ;

    m_has_w_monthLong = false;

    if (m_w_monthLong)
    {
        delete m_w_monthLong;
        m_w_monthLong = NULL;
    }
    ;

    m_has_w_yearLong = false;

    if (m_w_yearLong)
    {
        delete m_w_yearLong;
        m_w_yearLong = NULL;
    }
    ;

    m_has_w_annotationRef = false;

    if (m_w_annotationRef)
    {
        delete m_w_annotationRef;
        m_w_annotationRef = NULL;
    }
    ;

    m_has_w_footnoteRef = false;

    if (m_w_footnoteRef)
    {
        delete m_w_footnoteRef;
        m_w_footnoteRef = NULL;
    }
    ;

    m_has_w_endnoteRef = false;

    if (m_w_endnoteRef)
    {
        delete m_w_endnoteRef;
        m_w_endnoteRef = NULL;
    }
    ;

    m_has_w_separator = false;

    if (m_w_separator)
    {
        delete m_w_separator;
        m_w_separator = NULL;
    }
    ;

    m_has_w_continuationSeparator = false;

    if (m_w_continuationSeparator)
    {
        delete m_w_continuationSeparator;
        m_w_continuationSeparator = NULL;
    }
    ;

    m_has_w_sym = false;

    if (m_w_sym)
    {
        delete m_w_sym;
        m_w_sym = NULL;
    }
    ;

    m_has_w_pgNum = false;

    if (m_w_pgNum)
    {
        delete m_w_pgNum;
        m_w_pgNum = NULL;
    }
    ;

    m_has_w_cr = false;

    if (m_w_cr)
    {
        delete m_w_cr;
        m_w_cr = NULL;
    }
    ;

    m_has_w_tab = false;

    if (m_w_tab)
    {
        delete m_w_tab;
        m_w_tab = NULL;
    }
    ;

    m_has_w_object = false;

    if (m_w_object)
    {
        delete m_w_object;
        m_w_object = NULL;
    }
    ;

    m_has_w_pict = false;

    if (m_w_pict)
    {
        delete m_w_pict;
        m_w_pict = NULL;
    }
    ;

    m_has_w_fldChar = false;

    if (m_w_fldChar)
    {
        delete m_w_fldChar;
        m_w_fldChar = NULL;
    }
    ;

    m_has_w_ruby = false;

    if (m_w_ruby)
    {
        delete m_w_ruby;
        m_w_ruby = NULL;
    }
    ;

    m_has_w_footnoteReference = false;

    if (m_w_footnoteReference)
    {
        delete m_w_footnoteReference;
        m_w_footnoteReference = NULL;
    }
    ;

    m_has_w_endnoteReference = false;

    if (m_w_endnoteReference)
    {
        delete m_w_endnoteReference;
        m_w_endnoteReference = NULL;
    }
    ;

    m_has_w_commentReference = false;

    if (m_w_commentReference)
    {
        delete m_w_commentReference;
        m_w_commentReference = NULL;
    }
    ;

    m_has_w_drawing = false;

    if (m_w_drawing)
    {
        delete m_w_drawing;
        m_w_drawing = NULL;
    }
    ;

    m_has_w_ptab = false;

    if (m_w_ptab)
    {
        delete m_w_ptab;
        m_w_ptab = NULL;
    }
    ;

    m_has_w_lastRenderedPageBreak = false;

    if (m_w_lastRenderedPageBreak)
    {
        delete m_w_lastRenderedPageBreak;
        m_w_lastRenderedPageBreak = NULL;
    }
    ;

    m_has_w_contentPart = true;
    if (!m_w_contentPart)
    {
        m_w_contentPart = new ns_w::CT_Rel();
    }
    return m_w_contentPart;
}

const ns_w::CT_Rel& CT_R::ChildGroup_1::get_w_contentPart() const
{
    if (m_w_contentPart)
    {
        return *m_w_contentPart;
    }
    return ns_w::CT_Rel::default_instance();
}

bool CT_R::ChildGroup_1::has_w_delText() const
{
    return m_has_w_delText;
}

ns_w::CT_Text* CT_R::ChildGroup_1::mutable_w_delText()
{

    m_has_w_br = false;

    if (m_w_br)
    {
        delete m_w_br;
        m_w_br = NULL;
    }
    ;

    m_has_w_t = false;

    if (m_w_t)
    {
        delete m_w_t;
        m_w_t = NULL;
    }
    ;

    m_has_w_contentPart = false;

    if (m_w_contentPart)
    {
        delete m_w_contentPart;
        m_w_contentPart = NULL;
    }
    ;

    m_has_w_instrText = false;

    if (m_w_instrText)
    {
        delete m_w_instrText;
        m_w_instrText = NULL;
    }
    ;

    m_has_w_delInstrText = false;

    if (m_w_delInstrText)
    {
        delete m_w_delInstrText;
        m_w_delInstrText = NULL;
    }
    ;

    m_has_w_noBreakHyphen = false;

    if (m_w_noBreakHyphen)
    {
        delete m_w_noBreakHyphen;
        m_w_noBreakHyphen = NULL;
    }
    ;

    m_has_w_softHyphen = false;

    if (m_w_softHyphen)
    {
        delete m_w_softHyphen;
        m_w_softHyphen = NULL;
    }
    ;

    m_has_w_dayShort = false;

    if (m_w_dayShort)
    {
        delete m_w_dayShort;
        m_w_dayShort = NULL;
    }
    ;

    m_has_w_monthShort = false;

    if (m_w_monthShort)
    {
        delete m_w_monthShort;
        m_w_monthShort = NULL;
    }
    ;

    m_has_w_yearShort = false;

    if (m_w_yearShort)
    {
        delete m_w_yearShort;
        m_w_yearShort = NULL;
    }
    ;

    m_has_w_dayLong = false;

    if (m_w_dayLong)
    {
        delete m_w_dayLong;
        m_w_dayLong = NULL;
    }
    ;

    m_has_w_monthLong = false;

    if (m_w_monthLong)
    {
        delete m_w_monthLong;
        m_w_monthLong = NULL;
    }
    ;

    m_has_w_yearLong = false;

    if (m_w_yearLong)
    {
        delete m_w_yearLong;
        m_w_yearLong = NULL;
    }
    ;

    m_has_w_annotationRef = false;

    if (m_w_annotationRef)
    {
        delete m_w_annotationRef;
        m_w_annotationRef = NULL;
    }
    ;

    m_has_w_footnoteRef = false;

    if (m_w_footnoteRef)
    {
        delete m_w_footnoteRef;
        m_w_footnoteRef = NULL;
    }
    ;

    m_has_w_endnoteRef = false;

    if (m_w_endnoteRef)
    {
        delete m_w_endnoteRef;
        m_w_endnoteRef = NULL;
    }
    ;

    m_has_w_separator = false;

    if (m_w_separator)
    {
        delete m_w_separator;
        m_w_separator = NULL;
    }
    ;

    m_has_w_continuationSeparator = false;

    if (m_w_continuationSeparator)
    {
        delete m_w_continuationSeparator;
        m_w_continuationSeparator = NULL;
    }
    ;

    m_has_w_sym = false;

    if (m_w_sym)
    {
        delete m_w_sym;
        m_w_sym = NULL;
    }
    ;

    m_has_w_pgNum = false;

    if (m_w_pgNum)
    {
        delete m_w_pgNum;
        m_w_pgNum = NULL;
    }
    ;

    m_has_w_cr = false;

    if (m_w_cr)
    {
        delete m_w_cr;
        m_w_cr = NULL;
    }
    ;

    m_has_w_tab = false;

    if (m_w_tab)
    {
        delete m_w_tab;
        m_w_tab = NULL;
    }
    ;

    m_has_w_object = false;

    if (m_w_object)
    {
        delete m_w_object;
        m_w_object = NULL;
    }
    ;

    m_has_w_pict = false;

    if (m_w_pict)
    {
        delete m_w_pict;
        m_w_pict = NULL;
    }
    ;

    m_has_w_fldChar = false;

    if (m_w_fldChar)
    {
        delete m_w_fldChar;
        m_w_fldChar = NULL;
    }
    ;

    m_has_w_ruby = false;

    if (m_w_ruby)
    {
        delete m_w_ruby;
        m_w_ruby = NULL;
    }
    ;

    m_has_w_footnoteReference = false;

    if (m_w_footnoteReference)
    {
        delete m_w_footnoteReference;
        m_w_footnoteReference = NULL;
    }
    ;

    m_has_w_endnoteReference = false;

    if (m_w_endnoteReference)
    {
        delete m_w_endnoteReference;
        m_w_endnoteReference = NULL;
    }
    ;

    m_has_w_commentReference = false;

    if (m_w_commentReference)
    {
        delete m_w_commentReference;
        m_w_commentReference = NULL;
    }
    ;

    m_has_w_drawing = false;

    if (m_w_drawing)
    {
        delete m_w_drawing;
        m_w_drawing = NULL;
    }
    ;

    m_has_w_ptab = false;

    if (m_w_ptab)
    {
        delete m_w_ptab;
        m_w_ptab = NULL;
    }
    ;

    m_has_w_lastRenderedPageBreak = false;

    if (m_w_lastRenderedPageBreak)
    {
        delete m_w_lastRenderedPageBreak;
        m_w_lastRenderedPageBreak = NULL;
    }
    ;

    m_has_w_delText = true;
    if (!m_w_delText)
    {
        m_w_delText = new ns_w::CT_Text();
    }
    return m_w_delText;
}

const ns_w::CT_Text& CT_R::ChildGroup_1::get_w_delText() const
{
    if (m_w_delText)
    {
        return *m_w_delText;
    }
    return ns_w::CT_Text::default_instance();
}

bool CT_R::ChildGroup_1::has_w_instrText() const
{
    return m_has_w_instrText;
}

ns_w::CT_Text* CT_R::ChildGroup_1::mutable_w_instrText()
{

    m_has_w_br = false;

    if (m_w_br)
    {
        delete m_w_br;
        m_w_br = NULL;
    }
    ;

    m_has_w_t = false;

    if (m_w_t)
    {
        delete m_w_t;
        m_w_t = NULL;
    }
    ;

    m_has_w_contentPart = false;

    if (m_w_contentPart)
    {
        delete m_w_contentPart;
        m_w_contentPart = NULL;
    }
    ;

    m_has_w_delText = false;

    if (m_w_delText)
    {
        delete m_w_delText;
        m_w_delText = NULL;
    }
    ;

    m_has_w_delInstrText = false;

    if (m_w_delInstrText)
    {
        delete m_w_delInstrText;
        m_w_delInstrText = NULL;
    }
    ;

    m_has_w_noBreakHyphen = false;

    if (m_w_noBreakHyphen)
    {
        delete m_w_noBreakHyphen;
        m_w_noBreakHyphen = NULL;
    }
    ;

    m_has_w_softHyphen = false;

    if (m_w_softHyphen)
    {
        delete m_w_softHyphen;
        m_w_softHyphen = NULL;
    }
    ;

    m_has_w_dayShort = false;

    if (m_w_dayShort)
    {
        delete m_w_dayShort;
        m_w_dayShort = NULL;
    }
    ;

    m_has_w_monthShort = false;

    if (m_w_monthShort)
    {
        delete m_w_monthShort;
        m_w_monthShort = NULL;
    }
    ;

    m_has_w_yearShort = false;

    if (m_w_yearShort)
    {
        delete m_w_yearShort;
        m_w_yearShort = NULL;
    }
    ;

    m_has_w_dayLong = false;

    if (m_w_dayLong)
    {
        delete m_w_dayLong;
        m_w_dayLong = NULL;
    }
    ;

    m_has_w_monthLong = false;

    if (m_w_monthLong)
    {
        delete m_w_monthLong;
        m_w_monthLong = NULL;
    }
    ;

    m_has_w_yearLong = false;

    if (m_w_yearLong)
    {
        delete m_w_yearLong;
        m_w_yearLong = NULL;
    }
    ;

    m_has_w_annotationRef = false;

    if (m_w_annotationRef)
    {
        delete m_w_annotationRef;
        m_w_annotationRef = NULL;
    }
    ;

    m_has_w_footnoteRef = false;

    if (m_w_footnoteRef)
    {
        delete m_w_footnoteRef;
        m_w_footnoteRef = NULL;
    }
    ;

    m_has_w_endnoteRef = false;

    if (m_w_endnoteRef)
    {
        delete m_w_endnoteRef;
        m_w_endnoteRef = NULL;
    }
    ;

    m_has_w_separator = false;

    if (m_w_separator)
    {
        delete m_w_separator;
        m_w_separator = NULL;
    }
    ;

    m_has_w_continuationSeparator = false;

    if (m_w_continuationSeparator)
    {
        delete m_w_continuationSeparator;
        m_w_continuationSeparator = NULL;
    }
    ;

    m_has_w_sym = false;

    if (m_w_sym)
    {
        delete m_w_sym;
        m_w_sym = NULL;
    }
    ;

    m_has_w_pgNum = false;

    if (m_w_pgNum)
    {
        delete m_w_pgNum;
        m_w_pgNum = NULL;
    }
    ;

    m_has_w_cr = false;

    if (m_w_cr)
    {
        delete m_w_cr;
        m_w_cr = NULL;
    }
    ;

    m_has_w_tab = false;

    if (m_w_tab)
    {
        delete m_w_tab;
        m_w_tab = NULL;
    }
    ;

    m_has_w_object = false;

    if (m_w_object)
    {
        delete m_w_object;
        m_w_object = NULL;
    }
    ;

    m_has_w_pict = false;

    if (m_w_pict)
    {
        delete m_w_pict;
        m_w_pict = NULL;
    }
    ;

    m_has_w_fldChar = false;

    if (m_w_fldChar)
    {
        delete m_w_fldChar;
        m_w_fldChar = NULL;
    }
    ;

    m_has_w_ruby = false;

    if (m_w_ruby)
    {
        delete m_w_ruby;
        m_w_ruby = NULL;
    }
    ;

    m_has_w_footnoteReference = false;

    if (m_w_footnoteReference)
    {
        delete m_w_footnoteReference;
        m_w_footnoteReference = NULL;
    }
    ;

    m_has_w_endnoteReference = false;

    if (m_w_endnoteReference)
    {
        delete m_w_endnoteReference;
        m_w_endnoteReference = NULL;
    }
    ;

    m_has_w_commentReference = false;

    if (m_w_commentReference)
    {
        delete m_w_commentReference;
        m_w_commentReference = NULL;
    }
    ;

    m_has_w_drawing = false;

    if (m_w_drawing)
    {
        delete m_w_drawing;
        m_w_drawing = NULL;
    }
    ;

    m_has_w_ptab = false;

    if (m_w_ptab)
    {
        delete m_w_ptab;
        m_w_ptab = NULL;
    }
    ;

    m_has_w_lastRenderedPageBreak = false;

    if (m_w_lastRenderedPageBreak)
    {
        delete m_w_lastRenderedPageBreak;
        m_w_lastRenderedPageBreak = NULL;
    }
    ;

    m_has_w_instrText = true;
    if (!m_w_instrText)
    {
        m_w_instrText = new ns_w::CT_Text();
    }
    return m_w_instrText;
}

const ns_w::CT_Text& CT_R::ChildGroup_1::get_w_instrText() const
{
    if (m_w_instrText)
    {
        return *m_w_instrText;
    }
    return ns_w::CT_Text::default_instance();
}

bool CT_R::ChildGroup_1::has_w_delInstrText() const
{
    return m_has_w_delInstrText;
}

ns_w::CT_Text* CT_R::ChildGroup_1::mutable_w_delInstrText()
{

    m_has_w_br = false;

    if (m_w_br)
    {
        delete m_w_br;
        m_w_br = NULL;
    }
    ;

    m_has_w_t = false;

    if (m_w_t)
    {
        delete m_w_t;
        m_w_t = NULL;
    }
    ;

    m_has_w_contentPart = false;

    if (m_w_contentPart)
    {
        delete m_w_contentPart;
        m_w_contentPart = NULL;
    }
    ;

    m_has_w_delText = false;

    if (m_w_delText)
    {
        delete m_w_delText;
        m_w_delText = NULL;
    }
    ;

    m_has_w_instrText = false;

    if (m_w_instrText)
    {
        delete m_w_instrText;
        m_w_instrText = NULL;
    }
    ;

    m_has_w_noBreakHyphen = false;

    if (m_w_noBreakHyphen)
    {
        delete m_w_noBreakHyphen;
        m_w_noBreakHyphen = NULL;
    }
    ;

    m_has_w_softHyphen = false;

    if (m_w_softHyphen)
    {
        delete m_w_softHyphen;
        m_w_softHyphen = NULL;
    }
    ;

    m_has_w_dayShort = false;

    if (m_w_dayShort)
    {
        delete m_w_dayShort;
        m_w_dayShort = NULL;
    }
    ;

    m_has_w_monthShort = false;

    if (m_w_monthShort)
    {
        delete m_w_monthShort;
        m_w_monthShort = NULL;
    }
    ;

    m_has_w_yearShort = false;

    if (m_w_yearShort)
    {
        delete m_w_yearShort;
        m_w_yearShort = NULL;
    }
    ;

    m_has_w_dayLong = false;

    if (m_w_dayLong)
    {
        delete m_w_dayLong;
        m_w_dayLong = NULL;
    }
    ;

    m_has_w_monthLong = false;

    if (m_w_monthLong)
    {
        delete m_w_monthLong;
        m_w_monthLong = NULL;
    }
    ;

    m_has_w_yearLong = false;

    if (m_w_yearLong)
    {
        delete m_w_yearLong;
        m_w_yearLong = NULL;
    }
    ;

    m_has_w_annotationRef = false;

    if (m_w_annotationRef)
    {
        delete m_w_annotationRef;
        m_w_annotationRef = NULL;
    }
    ;

    m_has_w_footnoteRef = false;

    if (m_w_footnoteRef)
    {
        delete m_w_footnoteRef;
        m_w_footnoteRef = NULL;
    }
    ;

    m_has_w_endnoteRef = false;

    if (m_w_endnoteRef)
    {
        delete m_w_endnoteRef;
        m_w_endnoteRef = NULL;
    }
    ;

    m_has_w_separator = false;

    if (m_w_separator)
    {
        delete m_w_separator;
        m_w_separator = NULL;
    }
    ;

    m_has_w_continuationSeparator = false;

    if (m_w_continuationSeparator)
    {
        delete m_w_continuationSeparator;
        m_w_continuationSeparator = NULL;
    }
    ;

    m_has_w_sym = false;

    if (m_w_sym)
    {
        delete m_w_sym;
        m_w_sym = NULL;
    }
    ;

    m_has_w_pgNum = false;

    if (m_w_pgNum)
    {
        delete m_w_pgNum;
        m_w_pgNum = NULL;
    }
    ;

    m_has_w_cr = false;

    if (m_w_cr)
    {
        delete m_w_cr;
        m_w_cr = NULL;
    }
    ;

    m_has_w_tab = false;

    if (m_w_tab)
    {
        delete m_w_tab;
        m_w_tab = NULL;
    }
    ;

    m_has_w_object = false;

    if (m_w_object)
    {
        delete m_w_object;
        m_w_object = NULL;
    }
    ;

    m_has_w_pict = false;

    if (m_w_pict)
    {
        delete m_w_pict;
        m_w_pict = NULL;
    }
    ;

    m_has_w_fldChar = false;

    if (m_w_fldChar)
    {
        delete m_w_fldChar;
        m_w_fldChar = NULL;
    }
    ;

    m_has_w_ruby = false;

    if (m_w_ruby)
    {
        delete m_w_ruby;
        m_w_ruby = NULL;
    }
    ;

    m_has_w_footnoteReference = false;

    if (m_w_footnoteReference)
    {
        delete m_w_footnoteReference;
        m_w_footnoteReference = NULL;
    }
    ;

    m_has_w_endnoteReference = false;

    if (m_w_endnoteReference)
    {
        delete m_w_endnoteReference;
        m_w_endnoteReference = NULL;
    }
    ;

    m_has_w_commentReference = false;

    if (m_w_commentReference)
    {
        delete m_w_commentReference;
        m_w_commentReference = NULL;
    }
    ;

    m_has_w_drawing = false;

    if (m_w_drawing)
    {
        delete m_w_drawing;
        m_w_drawing = NULL;
    }
    ;

    m_has_w_ptab = false;

    if (m_w_ptab)
    {
        delete m_w_ptab;
        m_w_ptab = NULL;
    }
    ;

    m_has_w_lastRenderedPageBreak = false;

    if (m_w_lastRenderedPageBreak)
    {
        delete m_w_lastRenderedPageBreak;
        m_w_lastRenderedPageBreak = NULL;
    }
    ;

    m_has_w_delInstrText = true;
    if (!m_w_delInstrText)
    {
        m_w_delInstrText = new ns_w::CT_Text();
    }
    return m_w_delInstrText;
}

const ns_w::CT_Text& CT_R::ChildGroup_1::get_w_delInstrText() const
{
    if (m_w_delInstrText)
    {
        return *m_w_delInstrText;
    }
    return ns_w::CT_Text::default_instance();
}

bool CT_R::ChildGroup_1::has_w_noBreakHyphen() const
{
    return m_has_w_noBreakHyphen;
}

ns_w::CT_Empty* CT_R::ChildGroup_1::mutable_w_noBreakHyphen()
{

    m_has_w_br = false;

    if (m_w_br)
    {
        delete m_w_br;
        m_w_br = NULL;
    }
    ;

    m_has_w_t = false;

    if (m_w_t)
    {
        delete m_w_t;
        m_w_t = NULL;
    }
    ;

    m_has_w_contentPart = false;

    if (m_w_contentPart)
    {
        delete m_w_contentPart;
        m_w_contentPart = NULL;
    }
    ;

    m_has_w_delText = false;

    if (m_w_delText)
    {
        delete m_w_delText;
        m_w_delText = NULL;
    }
    ;

    m_has_w_instrText = false;

    if (m_w_instrText)
    {
        delete m_w_instrText;
        m_w_instrText = NULL;
    }
    ;

    m_has_w_delInstrText = false;

    if (m_w_delInstrText)
    {
        delete m_w_delInstrText;
        m_w_delInstrText = NULL;
    }
    ;

    m_has_w_softHyphen = false;

    if (m_w_softHyphen)
    {
        delete m_w_softHyphen;
        m_w_softHyphen = NULL;
    }
    ;

    m_has_w_dayShort = false;

    if (m_w_dayShort)
    {
        delete m_w_dayShort;
        m_w_dayShort = NULL;
    }
    ;

    m_has_w_monthShort = false;

    if (m_w_monthShort)
    {
        delete m_w_monthShort;
        m_w_monthShort = NULL;
    }
    ;

    m_has_w_yearShort = false;

    if (m_w_yearShort)
    {
        delete m_w_yearShort;
        m_w_yearShort = NULL;
    }
    ;

    m_has_w_dayLong = false;

    if (m_w_dayLong)
    {
        delete m_w_dayLong;
        m_w_dayLong = NULL;
    }
    ;

    m_has_w_monthLong = false;

    if (m_w_monthLong)
    {
        delete m_w_monthLong;
        m_w_monthLong = NULL;
    }
    ;

    m_has_w_yearLong = false;

    if (m_w_yearLong)
    {
        delete m_w_yearLong;
        m_w_yearLong = NULL;
    }
    ;

    m_has_w_annotationRef = false;

    if (m_w_annotationRef)
    {
        delete m_w_annotationRef;
        m_w_annotationRef = NULL;
    }
    ;

    m_has_w_footnoteRef = false;

    if (m_w_footnoteRef)
    {
        delete m_w_footnoteRef;
        m_w_footnoteRef = NULL;
    }
    ;

    m_has_w_endnoteRef = false;

    if (m_w_endnoteRef)
    {
        delete m_w_endnoteRef;
        m_w_endnoteRef = NULL;
    }
    ;

    m_has_w_separator = false;

    if (m_w_separator)
    {
        delete m_w_separator;
        m_w_separator = NULL;
    }
    ;

    m_has_w_continuationSeparator = false;

    if (m_w_continuationSeparator)
    {
        delete m_w_continuationSeparator;
        m_w_continuationSeparator = NULL;
    }
    ;

    m_has_w_sym = false;

    if (m_w_sym)
    {
        delete m_w_sym;
        m_w_sym = NULL;
    }
    ;

    m_has_w_pgNum = false;

    if (m_w_pgNum)
    {
        delete m_w_pgNum;
        m_w_pgNum = NULL;
    }
    ;

    m_has_w_cr = false;

    if (m_w_cr)
    {
        delete m_w_cr;
        m_w_cr = NULL;
    }
    ;

    m_has_w_tab = false;

    if (m_w_tab)
    {
        delete m_w_tab;
        m_w_tab = NULL;
    }
    ;

    m_has_w_object = false;

    if (m_w_object)
    {
        delete m_w_object;
        m_w_object = NULL;
    }
    ;

    m_has_w_pict = false;

    if (m_w_pict)
    {
        delete m_w_pict;
        m_w_pict = NULL;
    }
    ;

    m_has_w_fldChar = false;

    if (m_w_fldChar)
    {
        delete m_w_fldChar;
        m_w_fldChar = NULL;
    }
    ;

    m_has_w_ruby = false;

    if (m_w_ruby)
    {
        delete m_w_ruby;
        m_w_ruby = NULL;
    }
    ;

    m_has_w_footnoteReference = false;

    if (m_w_footnoteReference)
    {
        delete m_w_footnoteReference;
        m_w_footnoteReference = NULL;
    }
    ;

    m_has_w_endnoteReference = false;

    if (m_w_endnoteReference)
    {
        delete m_w_endnoteReference;
        m_w_endnoteReference = NULL;
    }
    ;

    m_has_w_commentReference = false;

    if (m_w_commentReference)
    {
        delete m_w_commentReference;
        m_w_commentReference = NULL;
    }
    ;

    m_has_w_drawing = false;

    if (m_w_drawing)
    {
        delete m_w_drawing;
        m_w_drawing = NULL;
    }
    ;

    m_has_w_ptab = false;

    if (m_w_ptab)
    {
        delete m_w_ptab;
        m_w_ptab = NULL;
    }
    ;

    m_has_w_lastRenderedPageBreak = false;

    if (m_w_lastRenderedPageBreak)
    {
        delete m_w_lastRenderedPageBreak;
        m_w_lastRenderedPageBreak = NULL;
    }
    ;

    m_has_w_noBreakHyphen = true;
    if (!m_w_noBreakHyphen)
    {
        m_w_noBreakHyphen = new ns_w::CT_Empty();
    }
    return m_w_noBreakHyphen;
}

const ns_w::CT_Empty& CT_R::ChildGroup_1::get_w_noBreakHyphen() const
{
    if (m_w_noBreakHyphen)
    {
        return *m_w_noBreakHyphen;
    }
    return ns_w::CT_Empty::default_instance();
}

bool CT_R::ChildGroup_1::has_w_softHyphen() const
{
    return m_has_w_softHyphen;
}

ns_w::CT_Empty* CT_R::ChildGroup_1::mutable_w_softHyphen()
{

    m_has_w_br = false;

    if (m_w_br)
    {
        delete m_w_br;
        m_w_br = NULL;
    }
    ;

    m_has_w_t = false;

    if (m_w_t)
    {
        delete m_w_t;
        m_w_t = NULL;
    }
    ;

    m_has_w_contentPart = false;

    if (m_w_contentPart)
    {
        delete m_w_contentPart;
        m_w_contentPart = NULL;
    }
    ;

    m_has_w_delText = false;

    if (m_w_delText)
    {
        delete m_w_delText;
        m_w_delText = NULL;
    }
    ;

    m_has_w_instrText = false;

    if (m_w_instrText)
    {
        delete m_w_instrText;
        m_w_instrText = NULL;
    }
    ;

    m_has_w_delInstrText = false;

    if (m_w_delInstrText)
    {
        delete m_w_delInstrText;
        m_w_delInstrText = NULL;
    }
    ;

    m_has_w_noBreakHyphen = false;

    if (m_w_noBreakHyphen)
    {
        delete m_w_noBreakHyphen;
        m_w_noBreakHyphen = NULL;
    }
    ;

    m_has_w_dayShort = false;

    if (m_w_dayShort)
    {
        delete m_w_dayShort;
        m_w_dayShort = NULL;
    }
    ;

    m_has_w_monthShort = false;

    if (m_w_monthShort)
    {
        delete m_w_monthShort;
        m_w_monthShort = NULL;
    }
    ;

    m_has_w_yearShort = false;

    if (m_w_yearShort)
    {
        delete m_w_yearShort;
        m_w_yearShort = NULL;
    }
    ;

    m_has_w_dayLong = false;

    if (m_w_dayLong)
    {
        delete m_w_dayLong;
        m_w_dayLong = NULL;
    }
    ;

    m_has_w_monthLong = false;

    if (m_w_monthLong)
    {
        delete m_w_monthLong;
        m_w_monthLong = NULL;
    }
    ;

    m_has_w_yearLong = false;

    if (m_w_yearLong)
    {
        delete m_w_yearLong;
        m_w_yearLong = NULL;
    }
    ;

    m_has_w_annotationRef = false;

    if (m_w_annotationRef)
    {
        delete m_w_annotationRef;
        m_w_annotationRef = NULL;
    }
    ;

    m_has_w_footnoteRef = false;

    if (m_w_footnoteRef)
    {
        delete m_w_footnoteRef;
        m_w_footnoteRef = NULL;
    }
    ;

    m_has_w_endnoteRef = false;

    if (m_w_endnoteRef)
    {
        delete m_w_endnoteRef;
        m_w_endnoteRef = NULL;
    }
    ;

    m_has_w_separator = false;

    if (m_w_separator)
    {
        delete m_w_separator;
        m_w_separator = NULL;
    }
    ;

    m_has_w_continuationSeparator = false;

    if (m_w_continuationSeparator)
    {
        delete m_w_continuationSeparator;
        m_w_continuationSeparator = NULL;
    }
    ;

    m_has_w_sym = false;

    if (m_w_sym)
    {
        delete m_w_sym;
        m_w_sym = NULL;
    }
    ;

    m_has_w_pgNum = false;

    if (m_w_pgNum)
    {
        delete m_w_pgNum;
        m_w_pgNum = NULL;
    }
    ;

    m_has_w_cr = false;

    if (m_w_cr)
    {
        delete m_w_cr;
        m_w_cr = NULL;
    }
    ;

    m_has_w_tab = false;

    if (m_w_tab)
    {
        delete m_w_tab;
        m_w_tab = NULL;
    }
    ;

    m_has_w_object = false;

    if (m_w_object)
    {
        delete m_w_object;
        m_w_object = NULL;
    }
    ;

    m_has_w_pict = false;

    if (m_w_pict)
    {
        delete m_w_pict;
        m_w_pict = NULL;
    }
    ;

    m_has_w_fldChar = false;

    if (m_w_fldChar)
    {
        delete m_w_fldChar;
        m_w_fldChar = NULL;
    }
    ;

    m_has_w_ruby = false;

    if (m_w_ruby)
    {
        delete m_w_ruby;
        m_w_ruby = NULL;
    }
    ;

    m_has_w_footnoteReference = false;

    if (m_w_footnoteReference)
    {
        delete m_w_footnoteReference;
        m_w_footnoteReference = NULL;
    }
    ;

    m_has_w_endnoteReference = false;

    if (m_w_endnoteReference)
    {
        delete m_w_endnoteReference;
        m_w_endnoteReference = NULL;
    }
    ;

    m_has_w_commentReference = false;

    if (m_w_commentReference)
    {
        delete m_w_commentReference;
        m_w_commentReference = NULL;
    }
    ;

    m_has_w_drawing = false;

    if (m_w_drawing)
    {
        delete m_w_drawing;
        m_w_drawing = NULL;
    }
    ;

    m_has_w_ptab = false;

    if (m_w_ptab)
    {
        delete m_w_ptab;
        m_w_ptab = NULL;
    }
    ;

    m_has_w_lastRenderedPageBreak = false;

    if (m_w_lastRenderedPageBreak)
    {
        delete m_w_lastRenderedPageBreak;
        m_w_lastRenderedPageBreak = NULL;
    }
    ;

    m_has_w_softHyphen = true;
    if (!m_w_softHyphen)
    {
        m_w_softHyphen = new ns_w::CT_Empty();
    }
    return m_w_softHyphen;
}

const ns_w::CT_Empty& CT_R::ChildGroup_1::get_w_softHyphen() const
{
    if (m_w_softHyphen)
    {
        return *m_w_softHyphen;
    }
    return ns_w::CT_Empty::default_instance();
}

bool CT_R::ChildGroup_1::has_w_dayShort() const
{
    return m_has_w_dayShort;
}

ns_w::CT_Empty* CT_R::ChildGroup_1::mutable_w_dayShort()
{

    m_has_w_br = false;

    if (m_w_br)
    {
        delete m_w_br;
        m_w_br = NULL;
    }
    ;

    m_has_w_t = false;

    if (m_w_t)
    {
        delete m_w_t;
        m_w_t = NULL;
    }
    ;

    m_has_w_contentPart = false;

    if (m_w_contentPart)
    {
        delete m_w_contentPart;
        m_w_contentPart = NULL;
    }
    ;

    m_has_w_delText = false;

    if (m_w_delText)
    {
        delete m_w_delText;
        m_w_delText = NULL;
    }
    ;

    m_has_w_instrText = false;

    if (m_w_instrText)
    {
        delete m_w_instrText;
        m_w_instrText = NULL;
    }
    ;

    m_has_w_delInstrText = false;

    if (m_w_delInstrText)
    {
        delete m_w_delInstrText;
        m_w_delInstrText = NULL;
    }
    ;

    m_has_w_noBreakHyphen = false;

    if (m_w_noBreakHyphen)
    {
        delete m_w_noBreakHyphen;
        m_w_noBreakHyphen = NULL;
    }
    ;

    m_has_w_softHyphen = false;

    if (m_w_softHyphen)
    {
        delete m_w_softHyphen;
        m_w_softHyphen = NULL;
    }
    ;

    m_has_w_monthShort = false;

    if (m_w_monthShort)
    {
        delete m_w_monthShort;
        m_w_monthShort = NULL;
    }
    ;

    m_has_w_yearShort = false;

    if (m_w_yearShort)
    {
        delete m_w_yearShort;
        m_w_yearShort = NULL;
    }
    ;

    m_has_w_dayLong = false;

    if (m_w_dayLong)
    {
        delete m_w_dayLong;
        m_w_dayLong = NULL;
    }
    ;

    m_has_w_monthLong = false;

    if (m_w_monthLong)
    {
        delete m_w_monthLong;
        m_w_monthLong = NULL;
    }
    ;

    m_has_w_yearLong = false;

    if (m_w_yearLong)
    {
        delete m_w_yearLong;
        m_w_yearLong = NULL;
    }
    ;

    m_has_w_annotationRef = false;

    if (m_w_annotationRef)
    {
        delete m_w_annotationRef;
        m_w_annotationRef = NULL;
    }
    ;

    m_has_w_footnoteRef = false;

    if (m_w_footnoteRef)
    {
        delete m_w_footnoteRef;
        m_w_footnoteRef = NULL;
    }
    ;

    m_has_w_endnoteRef = false;

    if (m_w_endnoteRef)
    {
        delete m_w_endnoteRef;
        m_w_endnoteRef = NULL;
    }
    ;

    m_has_w_separator = false;

    if (m_w_separator)
    {
        delete m_w_separator;
        m_w_separator = NULL;
    }
    ;

    m_has_w_continuationSeparator = false;

    if (m_w_continuationSeparator)
    {
        delete m_w_continuationSeparator;
        m_w_continuationSeparator = NULL;
    }
    ;

    m_has_w_sym = false;

    if (m_w_sym)
    {
        delete m_w_sym;
        m_w_sym = NULL;
    }
    ;

    m_has_w_pgNum = false;

    if (m_w_pgNum)
    {
        delete m_w_pgNum;
        m_w_pgNum = NULL;
    }
    ;

    m_has_w_cr = false;

    if (m_w_cr)
    {
        delete m_w_cr;
        m_w_cr = NULL;
    }
    ;

    m_has_w_tab = false;

    if (m_w_tab)
    {
        delete m_w_tab;
        m_w_tab = NULL;
    }
    ;

    m_has_w_object = false;

    if (m_w_object)
    {
        delete m_w_object;
        m_w_object = NULL;
    }
    ;

    m_has_w_pict = false;

    if (m_w_pict)
    {
        delete m_w_pict;
        m_w_pict = NULL;
    }
    ;

    m_has_w_fldChar = false;

    if (m_w_fldChar)
    {
        delete m_w_fldChar;
        m_w_fldChar = NULL;
    }
    ;

    m_has_w_ruby = false;

    if (m_w_ruby)
    {
        delete m_w_ruby;
        m_w_ruby = NULL;
    }
    ;

    m_has_w_footnoteReference = false;

    if (m_w_footnoteReference)
    {
        delete m_w_footnoteReference;
        m_w_footnoteReference = NULL;
    }
    ;

    m_has_w_endnoteReference = false;

    if (m_w_endnoteReference)
    {
        delete m_w_endnoteReference;
        m_w_endnoteReference = NULL;
    }
    ;

    m_has_w_commentReference = false;

    if (m_w_commentReference)
    {
        delete m_w_commentReference;
        m_w_commentReference = NULL;
    }
    ;

    m_has_w_drawing = false;

    if (m_w_drawing)
    {
        delete m_w_drawing;
        m_w_drawing = NULL;
    }
    ;

    m_has_w_ptab = false;

    if (m_w_ptab)
    {
        delete m_w_ptab;
        m_w_ptab = NULL;
    }
    ;

    m_has_w_lastRenderedPageBreak = false;

    if (m_w_lastRenderedPageBreak)
    {
        delete m_w_lastRenderedPageBreak;
        m_w_lastRenderedPageBreak = NULL;
    }
    ;

    m_has_w_dayShort = true;
    if (!m_w_dayShort)
    {
        m_w_dayShort = new ns_w::CT_Empty();
    }
    return m_w_dayShort;
}

const ns_w::CT_Empty& CT_R::ChildGroup_1::get_w_dayShort() const
{
    if (m_w_dayShort)
    {
        return *m_w_dayShort;
    }
    return ns_w::CT_Empty::default_instance();
}

bool CT_R::ChildGroup_1::has_w_monthShort() const
{
    return m_has_w_monthShort;
}

ns_w::CT_Empty* CT_R::ChildGroup_1::mutable_w_monthShort()
{

    m_has_w_br = false;

    if (m_w_br)
    {
        delete m_w_br;
        m_w_br = NULL;
    }
    ;

    m_has_w_t = false;

    if (m_w_t)
    {
        delete m_w_t;
        m_w_t = NULL;
    }
    ;

    m_has_w_contentPart = false;

    if (m_w_contentPart)
    {
        delete m_w_contentPart;
        m_w_contentPart = NULL;
    }
    ;

    m_has_w_delText = false;

    if (m_w_delText)
    {
        delete m_w_delText;
        m_w_delText = NULL;
    }
    ;

    m_has_w_instrText = false;

    if (m_w_instrText)
    {
        delete m_w_instrText;
        m_w_instrText = NULL;
    }
    ;

    m_has_w_delInstrText = false;

    if (m_w_delInstrText)
    {
        delete m_w_delInstrText;
        m_w_delInstrText = NULL;
    }
    ;

    m_has_w_noBreakHyphen = false;

    if (m_w_noBreakHyphen)
    {
        delete m_w_noBreakHyphen;
        m_w_noBreakHyphen = NULL;
    }
    ;

    m_has_w_softHyphen = false;

    if (m_w_softHyphen)
    {
        delete m_w_softHyphen;
        m_w_softHyphen = NULL;
    }
    ;

    m_has_w_dayShort = false;

    if (m_w_dayShort)
    {
        delete m_w_dayShort;
        m_w_dayShort = NULL;
    }
    ;

    m_has_w_yearShort = false;

    if (m_w_yearShort)
    {
        delete m_w_yearShort;
        m_w_yearShort = NULL;
    }
    ;

    m_has_w_dayLong = false;

    if (m_w_dayLong)
    {
        delete m_w_dayLong;
        m_w_dayLong = NULL;
    }
    ;

    m_has_w_monthLong = false;

    if (m_w_monthLong)
    {
        delete m_w_monthLong;
        m_w_monthLong = NULL;
    }
    ;

    m_has_w_yearLong = false;

    if (m_w_yearLong)
    {
        delete m_w_yearLong;
        m_w_yearLong = NULL;
    }
    ;

    m_has_w_annotationRef = false;

    if (m_w_annotationRef)
    {
        delete m_w_annotationRef;
        m_w_annotationRef = NULL;
    }
    ;

    m_has_w_footnoteRef = false;

    if (m_w_footnoteRef)
    {
        delete m_w_footnoteRef;
        m_w_footnoteRef = NULL;
    }
    ;

    m_has_w_endnoteRef = false;

    if (m_w_endnoteRef)
    {
        delete m_w_endnoteRef;
        m_w_endnoteRef = NULL;
    }
    ;

    m_has_w_separator = false;

    if (m_w_separator)
    {
        delete m_w_separator;
        m_w_separator = NULL;
    }
    ;

    m_has_w_continuationSeparator = false;

    if (m_w_continuationSeparator)
    {
        delete m_w_continuationSeparator;
        m_w_continuationSeparator = NULL;
    }
    ;

    m_has_w_sym = false;

    if (m_w_sym)
    {
        delete m_w_sym;
        m_w_sym = NULL;
    }
    ;

    m_has_w_pgNum = false;

    if (m_w_pgNum)
    {
        delete m_w_pgNum;
        m_w_pgNum = NULL;
    }
    ;

    m_has_w_cr = false;

    if (m_w_cr)
    {
        delete m_w_cr;
        m_w_cr = NULL;
    }
    ;

    m_has_w_tab = false;

    if (m_w_tab)
    {
        delete m_w_tab;
        m_w_tab = NULL;
    }
    ;

    m_has_w_object = false;

    if (m_w_object)
    {
        delete m_w_object;
        m_w_object = NULL;
    }
    ;

    m_has_w_pict = false;

    if (m_w_pict)
    {
        delete m_w_pict;
        m_w_pict = NULL;
    }
    ;

    m_has_w_fldChar = false;

    if (m_w_fldChar)
    {
        delete m_w_fldChar;
        m_w_fldChar = NULL;
    }
    ;

    m_has_w_ruby = false;

    if (m_w_ruby)
    {
        delete m_w_ruby;
        m_w_ruby = NULL;
    }
    ;

    m_has_w_footnoteReference = false;

    if (m_w_footnoteReference)
    {
        delete m_w_footnoteReference;
        m_w_footnoteReference = NULL;
    }
    ;

    m_has_w_endnoteReference = false;

    if (m_w_endnoteReference)
    {
        delete m_w_endnoteReference;
        m_w_endnoteReference = NULL;
    }
    ;

    m_has_w_commentReference = false;

    if (m_w_commentReference)
    {
        delete m_w_commentReference;
        m_w_commentReference = NULL;
    }
    ;

    m_has_w_drawing = false;

    if (m_w_drawing)
    {
        delete m_w_drawing;
        m_w_drawing = NULL;
    }
    ;

    m_has_w_ptab = false;

    if (m_w_ptab)
    {
        delete m_w_ptab;
        m_w_ptab = NULL;
    }
    ;

    m_has_w_lastRenderedPageBreak = false;

    if (m_w_lastRenderedPageBreak)
    {
        delete m_w_lastRenderedPageBreak;
        m_w_lastRenderedPageBreak = NULL;
    }
    ;

    m_has_w_monthShort = true;
    if (!m_w_monthShort)
    {
        m_w_monthShort = new ns_w::CT_Empty();
    }
    return m_w_monthShort;
}

const ns_w::CT_Empty& CT_R::ChildGroup_1::get_w_monthShort() const
{
    if (m_w_monthShort)
    {
        return *m_w_monthShort;
    }
    return ns_w::CT_Empty::default_instance();
}

bool CT_R::ChildGroup_1::has_w_yearShort() const
{
    return m_has_w_yearShort;
}

ns_w::CT_Empty* CT_R::ChildGroup_1::mutable_w_yearShort()
{

    m_has_w_br = false;

    if (m_w_br)
    {
        delete m_w_br;
        m_w_br = NULL;
    }
    ;

    m_has_w_t = false;

    if (m_w_t)
    {
        delete m_w_t;
        m_w_t = NULL;
    }
    ;

    m_has_w_contentPart = false;

    if (m_w_contentPart)
    {
        delete m_w_contentPart;
        m_w_contentPart = NULL;
    }
    ;

    m_has_w_delText = false;

    if (m_w_delText)
    {
        delete m_w_delText;
        m_w_delText = NULL;
    }
    ;

    m_has_w_instrText = false;

    if (m_w_instrText)
    {
        delete m_w_instrText;
        m_w_instrText = NULL;
    }
    ;

    m_has_w_delInstrText = false;

    if (m_w_delInstrText)
    {
        delete m_w_delInstrText;
        m_w_delInstrText = NULL;
    }
    ;

    m_has_w_noBreakHyphen = false;

    if (m_w_noBreakHyphen)
    {
        delete m_w_noBreakHyphen;
        m_w_noBreakHyphen = NULL;
    }
    ;

    m_has_w_softHyphen = false;

    if (m_w_softHyphen)
    {
        delete m_w_softHyphen;
        m_w_softHyphen = NULL;
    }
    ;

    m_has_w_dayShort = false;

    if (m_w_dayShort)
    {
        delete m_w_dayShort;
        m_w_dayShort = NULL;
    }
    ;

    m_has_w_monthShort = false;

    if (m_w_monthShort)
    {
        delete m_w_monthShort;
        m_w_monthShort = NULL;
    }
    ;

    m_has_w_dayLong = false;

    if (m_w_dayLong)
    {
        delete m_w_dayLong;
        m_w_dayLong = NULL;
    }
    ;

    m_has_w_monthLong = false;

    if (m_w_monthLong)
    {
        delete m_w_monthLong;
        m_w_monthLong = NULL;
    }
    ;

    m_has_w_yearLong = false;

    if (m_w_yearLong)
    {
        delete m_w_yearLong;
        m_w_yearLong = NULL;
    }
    ;

    m_has_w_annotationRef = false;

    if (m_w_annotationRef)
    {
        delete m_w_annotationRef;
        m_w_annotationRef = NULL;
    }
    ;

    m_has_w_footnoteRef = false;

    if (m_w_footnoteRef)
    {
        delete m_w_footnoteRef;
        m_w_footnoteRef = NULL;
    }
    ;

    m_has_w_endnoteRef = false;

    if (m_w_endnoteRef)
    {
        delete m_w_endnoteRef;
        m_w_endnoteRef = NULL;
    }
    ;

    m_has_w_separator = false;

    if (m_w_separator)
    {
        delete m_w_separator;
        m_w_separator = NULL;
    }
    ;

    m_has_w_continuationSeparator = false;

    if (m_w_continuationSeparator)
    {
        delete m_w_continuationSeparator;
        m_w_continuationSeparator = NULL;
    }
    ;

    m_has_w_sym = false;

    if (m_w_sym)
    {
        delete m_w_sym;
        m_w_sym = NULL;
    }
    ;

    m_has_w_pgNum = false;

    if (m_w_pgNum)
    {
        delete m_w_pgNum;
        m_w_pgNum = NULL;
    }
    ;

    m_has_w_cr = false;

    if (m_w_cr)
    {
        delete m_w_cr;
        m_w_cr = NULL;
    }
    ;

    m_has_w_tab = false;

    if (m_w_tab)
    {
        delete m_w_tab;
        m_w_tab = NULL;
    }
    ;

    m_has_w_object = false;

    if (m_w_object)
    {
        delete m_w_object;
        m_w_object = NULL;
    }
    ;

    m_has_w_pict = false;

    if (m_w_pict)
    {
        delete m_w_pict;
        m_w_pict = NULL;
    }
    ;

    m_has_w_fldChar = false;

    if (m_w_fldChar)
    {
        delete m_w_fldChar;
        m_w_fldChar = NULL;
    }
    ;

    m_has_w_ruby = false;

    if (m_w_ruby)
    {
        delete m_w_ruby;
        m_w_ruby = NULL;
    }
    ;

    m_has_w_footnoteReference = false;

    if (m_w_footnoteReference)
    {
        delete m_w_footnoteReference;
        m_w_footnoteReference = NULL;
    }
    ;

    m_has_w_endnoteReference = false;

    if (m_w_endnoteReference)
    {
        delete m_w_endnoteReference;
        m_w_endnoteReference = NULL;
    }
    ;

    m_has_w_commentReference = false;

    if (m_w_commentReference)
    {
        delete m_w_commentReference;
        m_w_commentReference = NULL;
    }
    ;

    m_has_w_drawing = false;

    if (m_w_drawing)
    {
        delete m_w_drawing;
        m_w_drawing = NULL;
    }
    ;

    m_has_w_ptab = false;

    if (m_w_ptab)
    {
        delete m_w_ptab;
        m_w_ptab = NULL;
    }
    ;

    m_has_w_lastRenderedPageBreak = false;

    if (m_w_lastRenderedPageBreak)
    {
        delete m_w_lastRenderedPageBreak;
        m_w_lastRenderedPageBreak = NULL;
    }
    ;

    m_has_w_yearShort = true;
    if (!m_w_yearShort)
    {
        m_w_yearShort = new ns_w::CT_Empty();
    }
    return m_w_yearShort;
}

const ns_w::CT_Empty& CT_R::ChildGroup_1::get_w_yearShort() const
{
    if (m_w_yearShort)
    {
        return *m_w_yearShort;
    }
    return ns_w::CT_Empty::default_instance();
}

bool CT_R::ChildGroup_1::has_w_dayLong() const
{
    return m_has_w_dayLong;
}

ns_w::CT_Empty* CT_R::ChildGroup_1::mutable_w_dayLong()
{

    m_has_w_br = false;

    if (m_w_br)
    {
        delete m_w_br;
        m_w_br = NULL;
    }
    ;

    m_has_w_t = false;

    if (m_w_t)
    {
        delete m_w_t;
        m_w_t = NULL;
    }
    ;

    m_has_w_contentPart = false;

    if (m_w_contentPart)
    {
        delete m_w_contentPart;
        m_w_contentPart = NULL;
    }
    ;

    m_has_w_delText = false;

    if (m_w_delText)
    {
        delete m_w_delText;
        m_w_delText = NULL;
    }
    ;

    m_has_w_instrText = false;

    if (m_w_instrText)
    {
        delete m_w_instrText;
        m_w_instrText = NULL;
    }
    ;

    m_has_w_delInstrText = false;

    if (m_w_delInstrText)
    {
        delete m_w_delInstrText;
        m_w_delInstrText = NULL;
    }
    ;

    m_has_w_noBreakHyphen = false;

    if (m_w_noBreakHyphen)
    {
        delete m_w_noBreakHyphen;
        m_w_noBreakHyphen = NULL;
    }
    ;

    m_has_w_softHyphen = false;

    if (m_w_softHyphen)
    {
        delete m_w_softHyphen;
        m_w_softHyphen = NULL;
    }
    ;

    m_has_w_dayShort = false;

    if (m_w_dayShort)
    {
        delete m_w_dayShort;
        m_w_dayShort = NULL;
    }
    ;

    m_has_w_monthShort = false;

    if (m_w_monthShort)
    {
        delete m_w_monthShort;
        m_w_monthShort = NULL;
    }
    ;

    m_has_w_yearShort = false;

    if (m_w_yearShort)
    {
        delete m_w_yearShort;
        m_w_yearShort = NULL;
    }
    ;

    m_has_w_monthLong = false;

    if (m_w_monthLong)
    {
        delete m_w_monthLong;
        m_w_monthLong = NULL;
    }
    ;

    m_has_w_yearLong = false;

    if (m_w_yearLong)
    {
        delete m_w_yearLong;
        m_w_yearLong = NULL;
    }
    ;

    m_has_w_annotationRef = false;

    if (m_w_annotationRef)
    {
        delete m_w_annotationRef;
        m_w_annotationRef = NULL;
    }
    ;

    m_has_w_footnoteRef = false;

    if (m_w_footnoteRef)
    {
        delete m_w_footnoteRef;
        m_w_footnoteRef = NULL;
    }
    ;

    m_has_w_endnoteRef = false;

    if (m_w_endnoteRef)
    {
        delete m_w_endnoteRef;
        m_w_endnoteRef = NULL;
    }
    ;

    m_has_w_separator = false;

    if (m_w_separator)
    {
        delete m_w_separator;
        m_w_separator = NULL;
    }
    ;

    m_has_w_continuationSeparator = false;

    if (m_w_continuationSeparator)
    {
        delete m_w_continuationSeparator;
        m_w_continuationSeparator = NULL;
    }
    ;

    m_has_w_sym = false;

    if (m_w_sym)
    {
        delete m_w_sym;
        m_w_sym = NULL;
    }
    ;

    m_has_w_pgNum = false;

    if (m_w_pgNum)
    {
        delete m_w_pgNum;
        m_w_pgNum = NULL;
    }
    ;

    m_has_w_cr = false;

    if (m_w_cr)
    {
        delete m_w_cr;
        m_w_cr = NULL;
    }
    ;

    m_has_w_tab = false;

    if (m_w_tab)
    {
        delete m_w_tab;
        m_w_tab = NULL;
    }
    ;

    m_has_w_object = false;

    if (m_w_object)
    {
        delete m_w_object;
        m_w_object = NULL;
    }
    ;

    m_has_w_pict = false;

    if (m_w_pict)
    {
        delete m_w_pict;
        m_w_pict = NULL;
    }
    ;

    m_has_w_fldChar = false;

    if (m_w_fldChar)
    {
        delete m_w_fldChar;
        m_w_fldChar = NULL;
    }
    ;

    m_has_w_ruby = false;

    if (m_w_ruby)
    {
        delete m_w_ruby;
        m_w_ruby = NULL;
    }
    ;

    m_has_w_footnoteReference = false;

    if (m_w_footnoteReference)
    {
        delete m_w_footnoteReference;
        m_w_footnoteReference = NULL;
    }
    ;

    m_has_w_endnoteReference = false;

    if (m_w_endnoteReference)
    {
        delete m_w_endnoteReference;
        m_w_endnoteReference = NULL;
    }
    ;

    m_has_w_commentReference = false;

    if (m_w_commentReference)
    {
        delete m_w_commentReference;
        m_w_commentReference = NULL;
    }
    ;

    m_has_w_drawing = false;

    if (m_w_drawing)
    {
        delete m_w_drawing;
        m_w_drawing = NULL;
    }
    ;

    m_has_w_ptab = false;

    if (m_w_ptab)
    {
        delete m_w_ptab;
        m_w_ptab = NULL;
    }
    ;

    m_has_w_lastRenderedPageBreak = false;

    if (m_w_lastRenderedPageBreak)
    {
        delete m_w_lastRenderedPageBreak;
        m_w_lastRenderedPageBreak = NULL;
    }
    ;

    m_has_w_dayLong = true;
    if (!m_w_dayLong)
    {
        m_w_dayLong = new ns_w::CT_Empty();
    }
    return m_w_dayLong;
}

const ns_w::CT_Empty& CT_R::ChildGroup_1::get_w_dayLong() const
{
    if (m_w_dayLong)
    {
        return *m_w_dayLong;
    }
    return ns_w::CT_Empty::default_instance();
}

bool CT_R::ChildGroup_1::has_w_monthLong() const
{
    return m_has_w_monthLong;
}

ns_w::CT_Empty* CT_R::ChildGroup_1::mutable_w_monthLong()
{

    m_has_w_br = false;

    if (m_w_br)
    {
        delete m_w_br;
        m_w_br = NULL;
    }
    ;

    m_has_w_t = false;

    if (m_w_t)
    {
        delete m_w_t;
        m_w_t = NULL;
    }
    ;

    m_has_w_contentPart = false;

    if (m_w_contentPart)
    {
        delete m_w_contentPart;
        m_w_contentPart = NULL;
    }
    ;

    m_has_w_delText = false;

    if (m_w_delText)
    {
        delete m_w_delText;
        m_w_delText = NULL;
    }
    ;

    m_has_w_instrText = false;

    if (m_w_instrText)
    {
        delete m_w_instrText;
        m_w_instrText = NULL;
    }
    ;

    m_has_w_delInstrText = false;

    if (m_w_delInstrText)
    {
        delete m_w_delInstrText;
        m_w_delInstrText = NULL;
    }
    ;

    m_has_w_noBreakHyphen = false;

    if (m_w_noBreakHyphen)
    {
        delete m_w_noBreakHyphen;
        m_w_noBreakHyphen = NULL;
    }
    ;

    m_has_w_softHyphen = false;

    if (m_w_softHyphen)
    {
        delete m_w_softHyphen;
        m_w_softHyphen = NULL;
    }
    ;

    m_has_w_dayShort = false;

    if (m_w_dayShort)
    {
        delete m_w_dayShort;
        m_w_dayShort = NULL;
    }
    ;

    m_has_w_monthShort = false;

    if (m_w_monthShort)
    {
        delete m_w_monthShort;
        m_w_monthShort = NULL;
    }
    ;

    m_has_w_yearShort = false;

    if (m_w_yearShort)
    {
        delete m_w_yearShort;
        m_w_yearShort = NULL;
    }
    ;

    m_has_w_dayLong = false;

    if (m_w_dayLong)
    {
        delete m_w_dayLong;
        m_w_dayLong = NULL;
    }
    ;

    m_has_w_yearLong = false;

    if (m_w_yearLong)
    {
        delete m_w_yearLong;
        m_w_yearLong = NULL;
    }
    ;

    m_has_w_annotationRef = false;

    if (m_w_annotationRef)
    {
        delete m_w_annotationRef;
        m_w_annotationRef = NULL;
    }
    ;

    m_has_w_footnoteRef = false;

    if (m_w_footnoteRef)
    {
        delete m_w_footnoteRef;
        m_w_footnoteRef = NULL;
    }
    ;

    m_has_w_endnoteRef = false;

    if (m_w_endnoteRef)
    {
        delete m_w_endnoteRef;
        m_w_endnoteRef = NULL;
    }
    ;

    m_has_w_separator = false;

    if (m_w_separator)
    {
        delete m_w_separator;
        m_w_separator = NULL;
    }
    ;

    m_has_w_continuationSeparator = false;

    if (m_w_continuationSeparator)
    {
        delete m_w_continuationSeparator;
        m_w_continuationSeparator = NULL;
    }
    ;

    m_has_w_sym = false;

    if (m_w_sym)
    {
        delete m_w_sym;
        m_w_sym = NULL;
    }
    ;

    m_has_w_pgNum = false;

    if (m_w_pgNum)
    {
        delete m_w_pgNum;
        m_w_pgNum = NULL;
    }
    ;

    m_has_w_cr = false;

    if (m_w_cr)
    {
        delete m_w_cr;
        m_w_cr = NULL;
    }
    ;

    m_has_w_tab = false;

    if (m_w_tab)
    {
        delete m_w_tab;
        m_w_tab = NULL;
    }
    ;

    m_has_w_object = false;

    if (m_w_object)
    {
        delete m_w_object;
        m_w_object = NULL;
    }
    ;

    m_has_w_pict = false;

    if (m_w_pict)
    {
        delete m_w_pict;
        m_w_pict = NULL;
    }
    ;

    m_has_w_fldChar = false;

    if (m_w_fldChar)
    {
        delete m_w_fldChar;
        m_w_fldChar = NULL;
    }
    ;

    m_has_w_ruby = false;

    if (m_w_ruby)
    {
        delete m_w_ruby;
        m_w_ruby = NULL;
    }
    ;

    m_has_w_footnoteReference = false;

    if (m_w_footnoteReference)
    {
        delete m_w_footnoteReference;
        m_w_footnoteReference = NULL;
    }
    ;

    m_has_w_endnoteReference = false;

    if (m_w_endnoteReference)
    {
        delete m_w_endnoteReference;
        m_w_endnoteReference = NULL;
    }
    ;

    m_has_w_commentReference = false;

    if (m_w_commentReference)
    {
        delete m_w_commentReference;
        m_w_commentReference = NULL;
    }
    ;

    m_has_w_drawing = false;

    if (m_w_drawing)
    {
        delete m_w_drawing;
        m_w_drawing = NULL;
    }
    ;

    m_has_w_ptab = false;

    if (m_w_ptab)
    {
        delete m_w_ptab;
        m_w_ptab = NULL;
    }
    ;

    m_has_w_lastRenderedPageBreak = false;

    if (m_w_lastRenderedPageBreak)
    {
        delete m_w_lastRenderedPageBreak;
        m_w_lastRenderedPageBreak = NULL;
    }
    ;

    m_has_w_monthLong = true;
    if (!m_w_monthLong)
    {
        m_w_monthLong = new ns_w::CT_Empty();
    }
    return m_w_monthLong;
}

const ns_w::CT_Empty& CT_R::ChildGroup_1::get_w_monthLong() const
{
    if (m_w_monthLong)
    {
        return *m_w_monthLong;
    }
    return ns_w::CT_Empty::default_instance();
}

bool CT_R::ChildGroup_1::has_w_yearLong() const
{
    return m_has_w_yearLong;
}

ns_w::CT_Empty* CT_R::ChildGroup_1::mutable_w_yearLong()
{

    m_has_w_br = false;

    if (m_w_br)
    {
        delete m_w_br;
        m_w_br = NULL;
    }
    ;

    m_has_w_t = false;

    if (m_w_t)
    {
        delete m_w_t;
        m_w_t = NULL;
    }
    ;

    m_has_w_contentPart = false;

    if (m_w_contentPart)
    {
        delete m_w_contentPart;
        m_w_contentPart = NULL;
    }
    ;

    m_has_w_delText = false;

    if (m_w_delText)
    {
        delete m_w_delText;
        m_w_delText = NULL;
    }
    ;

    m_has_w_instrText = false;

    if (m_w_instrText)
    {
        delete m_w_instrText;
        m_w_instrText = NULL;
    }
    ;

    m_has_w_delInstrText = false;

    if (m_w_delInstrText)
    {
        delete m_w_delInstrText;
        m_w_delInstrText = NULL;
    }
    ;

    m_has_w_noBreakHyphen = false;

    if (m_w_noBreakHyphen)
    {
        delete m_w_noBreakHyphen;
        m_w_noBreakHyphen = NULL;
    }
    ;

    m_has_w_softHyphen = false;

    if (m_w_softHyphen)
    {
        delete m_w_softHyphen;
        m_w_softHyphen = NULL;
    }
    ;

    m_has_w_dayShort = false;

    if (m_w_dayShort)
    {
        delete m_w_dayShort;
        m_w_dayShort = NULL;
    }
    ;

    m_has_w_monthShort = false;

    if (m_w_monthShort)
    {
        delete m_w_monthShort;
        m_w_monthShort = NULL;
    }
    ;

    m_has_w_yearShort = false;

    if (m_w_yearShort)
    {
        delete m_w_yearShort;
        m_w_yearShort = NULL;
    }
    ;

    m_has_w_dayLong = false;

    if (m_w_dayLong)
    {
        delete m_w_dayLong;
        m_w_dayLong = NULL;
    }
    ;

    m_has_w_monthLong = false;

    if (m_w_monthLong)
    {
        delete m_w_monthLong;
        m_w_monthLong = NULL;
    }
    ;

    m_has_w_annotationRef = false;

    if (m_w_annotationRef)
    {
        delete m_w_annotationRef;
        m_w_annotationRef = NULL;
    }
    ;

    m_has_w_footnoteRef = false;

    if (m_w_footnoteRef)
    {
        delete m_w_footnoteRef;
        m_w_footnoteRef = NULL;
    }
    ;

    m_has_w_endnoteRef = false;

    if (m_w_endnoteRef)
    {
        delete m_w_endnoteRef;
        m_w_endnoteRef = NULL;
    }
    ;

    m_has_w_separator = false;

    if (m_w_separator)
    {
        delete m_w_separator;
        m_w_separator = NULL;
    }
    ;

    m_has_w_continuationSeparator = false;

    if (m_w_continuationSeparator)
    {
        delete m_w_continuationSeparator;
        m_w_continuationSeparator = NULL;
    }
    ;

    m_has_w_sym = false;

    if (m_w_sym)
    {
        delete m_w_sym;
        m_w_sym = NULL;
    }
    ;

    m_has_w_pgNum = false;

    if (m_w_pgNum)
    {
        delete m_w_pgNum;
        m_w_pgNum = NULL;
    }
    ;

    m_has_w_cr = false;

    if (m_w_cr)
    {
        delete m_w_cr;
        m_w_cr = NULL;
    }
    ;

    m_has_w_tab = false;

    if (m_w_tab)
    {
        delete m_w_tab;
        m_w_tab = NULL;
    }
    ;

    m_has_w_object = false;

    if (m_w_object)
    {
        delete m_w_object;
        m_w_object = NULL;
    }
    ;

    m_has_w_pict = false;

    if (m_w_pict)
    {
        delete m_w_pict;
        m_w_pict = NULL;
    }
    ;

    m_has_w_fldChar = false;

    if (m_w_fldChar)
    {
        delete m_w_fldChar;
        m_w_fldChar = NULL;
    }
    ;

    m_has_w_ruby = false;

    if (m_w_ruby)
    {
        delete m_w_ruby;
        m_w_ruby = NULL;
    }
    ;

    m_has_w_footnoteReference = false;

    if (m_w_footnoteReference)
    {
        delete m_w_footnoteReference;
        m_w_footnoteReference = NULL;
    }
    ;

    m_has_w_endnoteReference = false;

    if (m_w_endnoteReference)
    {
        delete m_w_endnoteReference;
        m_w_endnoteReference = NULL;
    }
    ;

    m_has_w_commentReference = false;

    if (m_w_commentReference)
    {
        delete m_w_commentReference;
        m_w_commentReference = NULL;
    }
    ;

    m_has_w_drawing = false;

    if (m_w_drawing)
    {
        delete m_w_drawing;
        m_w_drawing = NULL;
    }
    ;

    m_has_w_ptab = false;

    if (m_w_ptab)
    {
        delete m_w_ptab;
        m_w_ptab = NULL;
    }
    ;

    m_has_w_lastRenderedPageBreak = false;

    if (m_w_lastRenderedPageBreak)
    {
        delete m_w_lastRenderedPageBreak;
        m_w_lastRenderedPageBreak = NULL;
    }
    ;

    m_has_w_yearLong = true;
    if (!m_w_yearLong)
    {
        m_w_yearLong = new ns_w::CT_Empty();
    }
    return m_w_yearLong;
}

const ns_w::CT_Empty& CT_R::ChildGroup_1::get_w_yearLong() const
{
    if (m_w_yearLong)
    {
        return *m_w_yearLong;
    }
    return ns_w::CT_Empty::default_instance();
}

bool CT_R::ChildGroup_1::has_w_annotationRef() const
{
    return m_has_w_annotationRef;
}

ns_w::CT_Empty* CT_R::ChildGroup_1::mutable_w_annotationRef()
{

    m_has_w_br = false;

    if (m_w_br)
    {
        delete m_w_br;
        m_w_br = NULL;
    }
    ;

    m_has_w_t = false;

    if (m_w_t)
    {
        delete m_w_t;
        m_w_t = NULL;
    }
    ;

    m_has_w_contentPart = false;

    if (m_w_contentPart)
    {
        delete m_w_contentPart;
        m_w_contentPart = NULL;
    }
    ;

    m_has_w_delText = false;

    if (m_w_delText)
    {
        delete m_w_delText;
        m_w_delText = NULL;
    }
    ;

    m_has_w_instrText = false;

    if (m_w_instrText)
    {
        delete m_w_instrText;
        m_w_instrText = NULL;
    }
    ;

    m_has_w_delInstrText = false;

    if (m_w_delInstrText)
    {
        delete m_w_delInstrText;
        m_w_delInstrText = NULL;
    }
    ;

    m_has_w_noBreakHyphen = false;

    if (m_w_noBreakHyphen)
    {
        delete m_w_noBreakHyphen;
        m_w_noBreakHyphen = NULL;
    }
    ;

    m_has_w_softHyphen = false;

    if (m_w_softHyphen)
    {
        delete m_w_softHyphen;
        m_w_softHyphen = NULL;
    }
    ;

    m_has_w_dayShort = false;

    if (m_w_dayShort)
    {
        delete m_w_dayShort;
        m_w_dayShort = NULL;
    }
    ;

    m_has_w_monthShort = false;

    if (m_w_monthShort)
    {
        delete m_w_monthShort;
        m_w_monthShort = NULL;
    }
    ;

    m_has_w_yearShort = false;

    if (m_w_yearShort)
    {
        delete m_w_yearShort;
        m_w_yearShort = NULL;
    }
    ;

    m_has_w_dayLong = false;

    if (m_w_dayLong)
    {
        delete m_w_dayLong;
        m_w_dayLong = NULL;
    }
    ;

    m_has_w_monthLong = false;

    if (m_w_monthLong)
    {
        delete m_w_monthLong;
        m_w_monthLong = NULL;
    }
    ;

    m_has_w_yearLong = false;

    if (m_w_yearLong)
    {
        delete m_w_yearLong;
        m_w_yearLong = NULL;
    }
    ;

    m_has_w_footnoteRef = false;

    if (m_w_footnoteRef)
    {
        delete m_w_footnoteRef;
        m_w_footnoteRef = NULL;
    }
    ;

    m_has_w_endnoteRef = false;

    if (m_w_endnoteRef)
    {
        delete m_w_endnoteRef;
        m_w_endnoteRef = NULL;
    }
    ;

    m_has_w_separator = false;

    if (m_w_separator)
    {
        delete m_w_separator;
        m_w_separator = NULL;
    }
    ;

    m_has_w_continuationSeparator = false;

    if (m_w_continuationSeparator)
    {
        delete m_w_continuationSeparator;
        m_w_continuationSeparator = NULL;
    }
    ;

    m_has_w_sym = false;

    if (m_w_sym)
    {
        delete m_w_sym;
        m_w_sym = NULL;
    }
    ;

    m_has_w_pgNum = false;

    if (m_w_pgNum)
    {
        delete m_w_pgNum;
        m_w_pgNum = NULL;
    }
    ;

    m_has_w_cr = false;

    if (m_w_cr)
    {
        delete m_w_cr;
        m_w_cr = NULL;
    }
    ;

    m_has_w_tab = false;

    if (m_w_tab)
    {
        delete m_w_tab;
        m_w_tab = NULL;
    }
    ;

    m_has_w_object = false;

    if (m_w_object)
    {
        delete m_w_object;
        m_w_object = NULL;
    }
    ;

    m_has_w_pict = false;

    if (m_w_pict)
    {
        delete m_w_pict;
        m_w_pict = NULL;
    }
    ;

    m_has_w_fldChar = false;

    if (m_w_fldChar)
    {
        delete m_w_fldChar;
        m_w_fldChar = NULL;
    }
    ;

    m_has_w_ruby = false;

    if (m_w_ruby)
    {
        delete m_w_ruby;
        m_w_ruby = NULL;
    }
    ;

    m_has_w_footnoteReference = false;

    if (m_w_footnoteReference)
    {
        delete m_w_footnoteReference;
        m_w_footnoteReference = NULL;
    }
    ;

    m_has_w_endnoteReference = false;

    if (m_w_endnoteReference)
    {
        delete m_w_endnoteReference;
        m_w_endnoteReference = NULL;
    }
    ;

    m_has_w_commentReference = false;

    if (m_w_commentReference)
    {
        delete m_w_commentReference;
        m_w_commentReference = NULL;
    }
    ;

    m_has_w_drawing = false;

    if (m_w_drawing)
    {
        delete m_w_drawing;
        m_w_drawing = NULL;
    }
    ;

    m_has_w_ptab = false;

    if (m_w_ptab)
    {
        delete m_w_ptab;
        m_w_ptab = NULL;
    }
    ;

    m_has_w_lastRenderedPageBreak = false;

    if (m_w_lastRenderedPageBreak)
    {
        delete m_w_lastRenderedPageBreak;
        m_w_lastRenderedPageBreak = NULL;
    }
    ;

    m_has_w_annotationRef = true;
    if (!m_w_annotationRef)
    {
        m_w_annotationRef = new ns_w::CT_Empty();
    }
    return m_w_annotationRef;
}

const ns_w::CT_Empty& CT_R::ChildGroup_1::get_w_annotationRef() const
{
    if (m_w_annotationRef)
    {
        return *m_w_annotationRef;
    }
    return ns_w::CT_Empty::default_instance();
}

bool CT_R::ChildGroup_1::has_w_footnoteRef() const
{
    return m_has_w_footnoteRef;
}

ns_w::CT_Empty* CT_R::ChildGroup_1::mutable_w_footnoteRef()
{

    m_has_w_br = false;

    if (m_w_br)
    {
        delete m_w_br;
        m_w_br = NULL;
    }
    ;

    m_has_w_t = false;

    if (m_w_t)
    {
        delete m_w_t;
        m_w_t = NULL;
    }
    ;

    m_has_w_contentPart = false;

    if (m_w_contentPart)
    {
        delete m_w_contentPart;
        m_w_contentPart = NULL;
    }
    ;

    m_has_w_delText = false;

    if (m_w_delText)
    {
        delete m_w_delText;
        m_w_delText = NULL;
    }
    ;

    m_has_w_instrText = false;

    if (m_w_instrText)
    {
        delete m_w_instrText;
        m_w_instrText = NULL;
    }
    ;

    m_has_w_delInstrText = false;

    if (m_w_delInstrText)
    {
        delete m_w_delInstrText;
        m_w_delInstrText = NULL;
    }
    ;

    m_has_w_noBreakHyphen = false;

    if (m_w_noBreakHyphen)
    {
        delete m_w_noBreakHyphen;
        m_w_noBreakHyphen = NULL;
    }
    ;

    m_has_w_softHyphen = false;

    if (m_w_softHyphen)
    {
        delete m_w_softHyphen;
        m_w_softHyphen = NULL;
    }
    ;

    m_has_w_dayShort = false;

    if (m_w_dayShort)
    {
        delete m_w_dayShort;
        m_w_dayShort = NULL;
    }
    ;

    m_has_w_monthShort = false;

    if (m_w_monthShort)
    {
        delete m_w_monthShort;
        m_w_monthShort = NULL;
    }
    ;

    m_has_w_yearShort = false;

    if (m_w_yearShort)
    {
        delete m_w_yearShort;
        m_w_yearShort = NULL;
    }
    ;

    m_has_w_dayLong = false;

    if (m_w_dayLong)
    {
        delete m_w_dayLong;
        m_w_dayLong = NULL;
    }
    ;

    m_has_w_monthLong = false;

    if (m_w_monthLong)
    {
        delete m_w_monthLong;
        m_w_monthLong = NULL;
    }
    ;

    m_has_w_yearLong = false;

    if (m_w_yearLong)
    {
        delete m_w_yearLong;
        m_w_yearLong = NULL;
    }
    ;

    m_has_w_annotationRef = false;

    if (m_w_annotationRef)
    {
        delete m_w_annotationRef;
        m_w_annotationRef = NULL;
    }
    ;

    m_has_w_endnoteRef = false;

    if (m_w_endnoteRef)
    {
        delete m_w_endnoteRef;
        m_w_endnoteRef = NULL;
    }
    ;

    m_has_w_separator = false;

    if (m_w_separator)
    {
        delete m_w_separator;
        m_w_separator = NULL;
    }
    ;

    m_has_w_continuationSeparator = false;

    if (m_w_continuationSeparator)
    {
        delete m_w_continuationSeparator;
        m_w_continuationSeparator = NULL;
    }
    ;

    m_has_w_sym = false;

    if (m_w_sym)
    {
        delete m_w_sym;
        m_w_sym = NULL;
    }
    ;

    m_has_w_pgNum = false;

    if (m_w_pgNum)
    {
        delete m_w_pgNum;
        m_w_pgNum = NULL;
    }
    ;

    m_has_w_cr = false;

    if (m_w_cr)
    {
        delete m_w_cr;
        m_w_cr = NULL;
    }
    ;

    m_has_w_tab = false;

    if (m_w_tab)
    {
        delete m_w_tab;
        m_w_tab = NULL;
    }
    ;

    m_has_w_object = false;

    if (m_w_object)
    {
        delete m_w_object;
        m_w_object = NULL;
    }
    ;

    m_has_w_pict = false;

    if (m_w_pict)
    {
        delete m_w_pict;
        m_w_pict = NULL;
    }
    ;

    m_has_w_fldChar = false;

    if (m_w_fldChar)
    {
        delete m_w_fldChar;
        m_w_fldChar = NULL;
    }
    ;

    m_has_w_ruby = false;

    if (m_w_ruby)
    {
        delete m_w_ruby;
        m_w_ruby = NULL;
    }
    ;

    m_has_w_footnoteReference = false;

    if (m_w_footnoteReference)
    {
        delete m_w_footnoteReference;
        m_w_footnoteReference = NULL;
    }
    ;

    m_has_w_endnoteReference = false;

    if (m_w_endnoteReference)
    {
        delete m_w_endnoteReference;
        m_w_endnoteReference = NULL;
    }
    ;

    m_has_w_commentReference = false;

    if (m_w_commentReference)
    {
        delete m_w_commentReference;
        m_w_commentReference = NULL;
    }
    ;

    m_has_w_drawing = false;

    if (m_w_drawing)
    {
        delete m_w_drawing;
        m_w_drawing = NULL;
    }
    ;

    m_has_w_ptab = false;

    if (m_w_ptab)
    {
        delete m_w_ptab;
        m_w_ptab = NULL;
    }
    ;

    m_has_w_lastRenderedPageBreak = false;

    if (m_w_lastRenderedPageBreak)
    {
        delete m_w_lastRenderedPageBreak;
        m_w_lastRenderedPageBreak = NULL;
    }
    ;

    m_has_w_footnoteRef = true;
    if (!m_w_footnoteRef)
    {
        m_w_footnoteRef = new ns_w::CT_Empty();
    }
    return m_w_footnoteRef;
}

const ns_w::CT_Empty& CT_R::ChildGroup_1::get_w_footnoteRef() const
{
    if (m_w_footnoteRef)
    {
        return *m_w_footnoteRef;
    }
    return ns_w::CT_Empty::default_instance();
}

bool CT_R::ChildGroup_1::has_w_endnoteRef() const
{
    return m_has_w_endnoteRef;
}

ns_w::CT_Empty* CT_R::ChildGroup_1::mutable_w_endnoteRef()
{

    m_has_w_br = false;

    if (m_w_br)
    {
        delete m_w_br;
        m_w_br = NULL;
    }
    ;

    m_has_w_t = false;

    if (m_w_t)
    {
        delete m_w_t;
        m_w_t = NULL;
    }
    ;

    m_has_w_contentPart = false;

    if (m_w_contentPart)
    {
        delete m_w_contentPart;
        m_w_contentPart = NULL;
    }
    ;

    m_has_w_delText = false;

    if (m_w_delText)
    {
        delete m_w_delText;
        m_w_delText = NULL;
    }
    ;

    m_has_w_instrText = false;

    if (m_w_instrText)
    {
        delete m_w_instrText;
        m_w_instrText = NULL;
    }
    ;

    m_has_w_delInstrText = false;

    if (m_w_delInstrText)
    {
        delete m_w_delInstrText;
        m_w_delInstrText = NULL;
    }
    ;

    m_has_w_noBreakHyphen = false;

    if (m_w_noBreakHyphen)
    {
        delete m_w_noBreakHyphen;
        m_w_noBreakHyphen = NULL;
    }
    ;

    m_has_w_softHyphen = false;

    if (m_w_softHyphen)
    {
        delete m_w_softHyphen;
        m_w_softHyphen = NULL;
    }
    ;

    m_has_w_dayShort = false;

    if (m_w_dayShort)
    {
        delete m_w_dayShort;
        m_w_dayShort = NULL;
    }
    ;

    m_has_w_monthShort = false;

    if (m_w_monthShort)
    {
        delete m_w_monthShort;
        m_w_monthShort = NULL;
    }
    ;

    m_has_w_yearShort = false;

    if (m_w_yearShort)
    {
        delete m_w_yearShort;
        m_w_yearShort = NULL;
    }
    ;

    m_has_w_dayLong = false;

    if (m_w_dayLong)
    {
        delete m_w_dayLong;
        m_w_dayLong = NULL;
    }
    ;

    m_has_w_monthLong = false;

    if (m_w_monthLong)
    {
        delete m_w_monthLong;
        m_w_monthLong = NULL;
    }
    ;

    m_has_w_yearLong = false;

    if (m_w_yearLong)
    {
        delete m_w_yearLong;
        m_w_yearLong = NULL;
    }
    ;

    m_has_w_annotationRef = false;

    if (m_w_annotationRef)
    {
        delete m_w_annotationRef;
        m_w_annotationRef = NULL;
    }
    ;

    m_has_w_footnoteRef = false;

    if (m_w_footnoteRef)
    {
        delete m_w_footnoteRef;
        m_w_footnoteRef = NULL;
    }
    ;

    m_has_w_separator = false;

    if (m_w_separator)
    {
        delete m_w_separator;
        m_w_separator = NULL;
    }
    ;

    m_has_w_continuationSeparator = false;

    if (m_w_continuationSeparator)
    {
        delete m_w_continuationSeparator;
        m_w_continuationSeparator = NULL;
    }
    ;

    m_has_w_sym = false;

    if (m_w_sym)
    {
        delete m_w_sym;
        m_w_sym = NULL;
    }
    ;

    m_has_w_pgNum = false;

    if (m_w_pgNum)
    {
        delete m_w_pgNum;
        m_w_pgNum = NULL;
    }
    ;

    m_has_w_cr = false;

    if (m_w_cr)
    {
        delete m_w_cr;
        m_w_cr = NULL;
    }
    ;

    m_has_w_tab = false;

    if (m_w_tab)
    {
        delete m_w_tab;
        m_w_tab = NULL;
    }
    ;

    m_has_w_object = false;

    if (m_w_object)
    {
        delete m_w_object;
        m_w_object = NULL;
    }
    ;

    m_has_w_pict = false;

    if (m_w_pict)
    {
        delete m_w_pict;
        m_w_pict = NULL;
    }
    ;

    m_has_w_fldChar = false;

    if (m_w_fldChar)
    {
        delete m_w_fldChar;
        m_w_fldChar = NULL;
    }
    ;

    m_has_w_ruby = false;

    if (m_w_ruby)
    {
        delete m_w_ruby;
        m_w_ruby = NULL;
    }
    ;

    m_has_w_footnoteReference = false;

    if (m_w_footnoteReference)
    {
        delete m_w_footnoteReference;
        m_w_footnoteReference = NULL;
    }
    ;

    m_has_w_endnoteReference = false;

    if (m_w_endnoteReference)
    {
        delete m_w_endnoteReference;
        m_w_endnoteReference = NULL;
    }
    ;

    m_has_w_commentReference = false;

    if (m_w_commentReference)
    {
        delete m_w_commentReference;
        m_w_commentReference = NULL;
    }
    ;

    m_has_w_drawing = false;

    if (m_w_drawing)
    {
        delete m_w_drawing;
        m_w_drawing = NULL;
    }
    ;

    m_has_w_ptab = false;

    if (m_w_ptab)
    {
        delete m_w_ptab;
        m_w_ptab = NULL;
    }
    ;

    m_has_w_lastRenderedPageBreak = false;

    if (m_w_lastRenderedPageBreak)
    {
        delete m_w_lastRenderedPageBreak;
        m_w_lastRenderedPageBreak = NULL;
    }
    ;

    m_has_w_endnoteRef = true;
    if (!m_w_endnoteRef)
    {
        m_w_endnoteRef = new ns_w::CT_Empty();
    }
    return m_w_endnoteRef;
}

const ns_w::CT_Empty& CT_R::ChildGroup_1::get_w_endnoteRef() const
{
    if (m_w_endnoteRef)
    {
        return *m_w_endnoteRef;
    }
    return ns_w::CT_Empty::default_instance();
}

bool CT_R::ChildGroup_1::has_w_separator() const
{
    return m_has_w_separator;
}

ns_w::CT_Empty* CT_R::ChildGroup_1::mutable_w_separator()
{

    m_has_w_br = false;

    if (m_w_br)
    {
        delete m_w_br;
        m_w_br = NULL;
    }
    ;

    m_has_w_t = false;

    if (m_w_t)
    {
        delete m_w_t;
        m_w_t = NULL;
    }
    ;

    m_has_w_contentPart = false;

    if (m_w_contentPart)
    {
        delete m_w_contentPart;
        m_w_contentPart = NULL;
    }
    ;

    m_has_w_delText = false;

    if (m_w_delText)
    {
        delete m_w_delText;
        m_w_delText = NULL;
    }
    ;

    m_has_w_instrText = false;

    if (m_w_instrText)
    {
        delete m_w_instrText;
        m_w_instrText = NULL;
    }
    ;

    m_has_w_delInstrText = false;

    if (m_w_delInstrText)
    {
        delete m_w_delInstrText;
        m_w_delInstrText = NULL;
    }
    ;

    m_has_w_noBreakHyphen = false;

    if (m_w_noBreakHyphen)
    {
        delete m_w_noBreakHyphen;
        m_w_noBreakHyphen = NULL;
    }
    ;

    m_has_w_softHyphen = false;

    if (m_w_softHyphen)
    {
        delete m_w_softHyphen;
        m_w_softHyphen = NULL;
    }
    ;

    m_has_w_dayShort = false;

    if (m_w_dayShort)
    {
        delete m_w_dayShort;
        m_w_dayShort = NULL;
    }
    ;

    m_has_w_monthShort = false;

    if (m_w_monthShort)
    {
        delete m_w_monthShort;
        m_w_monthShort = NULL;
    }
    ;

    m_has_w_yearShort = false;

    if (m_w_yearShort)
    {
        delete m_w_yearShort;
        m_w_yearShort = NULL;
    }
    ;

    m_has_w_dayLong = false;

    if (m_w_dayLong)
    {
        delete m_w_dayLong;
        m_w_dayLong = NULL;
    }
    ;

    m_has_w_monthLong = false;

    if (m_w_monthLong)
    {
        delete m_w_monthLong;
        m_w_monthLong = NULL;
    }
    ;

    m_has_w_yearLong = false;

    if (m_w_yearLong)
    {
        delete m_w_yearLong;
        m_w_yearLong = NULL;
    }
    ;

    m_has_w_annotationRef = false;

    if (m_w_annotationRef)
    {
        delete m_w_annotationRef;
        m_w_annotationRef = NULL;
    }
    ;

    m_has_w_footnoteRef = false;

    if (m_w_footnoteRef)
    {
        delete m_w_footnoteRef;
        m_w_footnoteRef = NULL;
    }
    ;

    m_has_w_endnoteRef = false;

    if (m_w_endnoteRef)
    {
        delete m_w_endnoteRef;
        m_w_endnoteRef = NULL;
    }
    ;

    m_has_w_continuationSeparator = false;

    if (m_w_continuationSeparator)
    {
        delete m_w_continuationSeparator;
        m_w_continuationSeparator = NULL;
    }
    ;

    m_has_w_sym = false;

    if (m_w_sym)
    {
        delete m_w_sym;
        m_w_sym = NULL;
    }
    ;

    m_has_w_pgNum = false;

    if (m_w_pgNum)
    {
        delete m_w_pgNum;
        m_w_pgNum = NULL;
    }
    ;

    m_has_w_cr = false;

    if (m_w_cr)
    {
        delete m_w_cr;
        m_w_cr = NULL;
    }
    ;

    m_has_w_tab = false;

    if (m_w_tab)
    {
        delete m_w_tab;
        m_w_tab = NULL;
    }
    ;

    m_has_w_object = false;

    if (m_w_object)
    {
        delete m_w_object;
        m_w_object = NULL;
    }
    ;

    m_has_w_pict = false;

    if (m_w_pict)
    {
        delete m_w_pict;
        m_w_pict = NULL;
    }
    ;

    m_has_w_fldChar = false;

    if (m_w_fldChar)
    {
        delete m_w_fldChar;
        m_w_fldChar = NULL;
    }
    ;

    m_has_w_ruby = false;

    if (m_w_ruby)
    {
        delete m_w_ruby;
        m_w_ruby = NULL;
    }
    ;

    m_has_w_footnoteReference = false;

    if (m_w_footnoteReference)
    {
        delete m_w_footnoteReference;
        m_w_footnoteReference = NULL;
    }
    ;

    m_has_w_endnoteReference = false;

    if (m_w_endnoteReference)
    {
        delete m_w_endnoteReference;
        m_w_endnoteReference = NULL;
    }
    ;

    m_has_w_commentReference = false;

    if (m_w_commentReference)
    {
        delete m_w_commentReference;
        m_w_commentReference = NULL;
    }
    ;

    m_has_w_drawing = false;

    if (m_w_drawing)
    {
        delete m_w_drawing;
        m_w_drawing = NULL;
    }
    ;

    m_has_w_ptab = false;

    if (m_w_ptab)
    {
        delete m_w_ptab;
        m_w_ptab = NULL;
    }
    ;

    m_has_w_lastRenderedPageBreak = false;

    if (m_w_lastRenderedPageBreak)
    {
        delete m_w_lastRenderedPageBreak;
        m_w_lastRenderedPageBreak = NULL;
    }
    ;

    m_has_w_separator = true;
    if (!m_w_separator)
    {
        m_w_separator = new ns_w::CT_Empty();
    }
    return m_w_separator;
}

const ns_w::CT_Empty& CT_R::ChildGroup_1::get_w_separator() const
{
    if (m_w_separator)
    {
        return *m_w_separator;
    }
    return ns_w::CT_Empty::default_instance();
}

bool CT_R::ChildGroup_1::has_w_continuationSeparator() const
{
    return m_has_w_continuationSeparator;
}

ns_w::CT_Empty* CT_R::ChildGroup_1::mutable_w_continuationSeparator()
{

    m_has_w_br = false;

    if (m_w_br)
    {
        delete m_w_br;
        m_w_br = NULL;
    }
    ;

    m_has_w_t = false;

    if (m_w_t)
    {
        delete m_w_t;
        m_w_t = NULL;
    }
    ;

    m_has_w_contentPart = false;

    if (m_w_contentPart)
    {
        delete m_w_contentPart;
        m_w_contentPart = NULL;
    }
    ;

    m_has_w_delText = false;

    if (m_w_delText)
    {
        delete m_w_delText;
        m_w_delText = NULL;
    }
    ;

    m_has_w_instrText = false;

    if (m_w_instrText)
    {
        delete m_w_instrText;
        m_w_instrText = NULL;
    }
    ;

    m_has_w_delInstrText = false;

    if (m_w_delInstrText)
    {
        delete m_w_delInstrText;
        m_w_delInstrText = NULL;
    }
    ;

    m_has_w_noBreakHyphen = false;

    if (m_w_noBreakHyphen)
    {
        delete m_w_noBreakHyphen;
        m_w_noBreakHyphen = NULL;
    }
    ;

    m_has_w_softHyphen = false;

    if (m_w_softHyphen)
    {
        delete m_w_softHyphen;
        m_w_softHyphen = NULL;
    }
    ;

    m_has_w_dayShort = false;

    if (m_w_dayShort)
    {
        delete m_w_dayShort;
        m_w_dayShort = NULL;
    }
    ;

    m_has_w_monthShort = false;

    if (m_w_monthShort)
    {
        delete m_w_monthShort;
        m_w_monthShort = NULL;
    }
    ;

    m_has_w_yearShort = false;

    if (m_w_yearShort)
    {
        delete m_w_yearShort;
        m_w_yearShort = NULL;
    }
    ;

    m_has_w_dayLong = false;

    if (m_w_dayLong)
    {
        delete m_w_dayLong;
        m_w_dayLong = NULL;
    }
    ;

    m_has_w_monthLong = false;

    if (m_w_monthLong)
    {
        delete m_w_monthLong;
        m_w_monthLong = NULL;
    }
    ;

    m_has_w_yearLong = false;

    if (m_w_yearLong)
    {
        delete m_w_yearLong;
        m_w_yearLong = NULL;
    }
    ;

    m_has_w_annotationRef = false;

    if (m_w_annotationRef)
    {
        delete m_w_annotationRef;
        m_w_annotationRef = NULL;
    }
    ;

    m_has_w_footnoteRef = false;

    if (m_w_footnoteRef)
    {
        delete m_w_footnoteRef;
        m_w_footnoteRef = NULL;
    }
    ;

    m_has_w_endnoteRef = false;

    if (m_w_endnoteRef)
    {
        delete m_w_endnoteRef;
        m_w_endnoteRef = NULL;
    }
    ;

    m_has_w_separator = false;

    if (m_w_separator)
    {
        delete m_w_separator;
        m_w_separator = NULL;
    }
    ;

    m_has_w_sym = false;

    if (m_w_sym)
    {
        delete m_w_sym;
        m_w_sym = NULL;
    }
    ;

    m_has_w_pgNum = false;

    if (m_w_pgNum)
    {
        delete m_w_pgNum;
        m_w_pgNum = NULL;
    }
    ;

    m_has_w_cr = false;

    if (m_w_cr)
    {
        delete m_w_cr;
        m_w_cr = NULL;
    }
    ;

    m_has_w_tab = false;

    if (m_w_tab)
    {
        delete m_w_tab;
        m_w_tab = NULL;
    }
    ;

    m_has_w_object = false;

    if (m_w_object)
    {
        delete m_w_object;
        m_w_object = NULL;
    }
    ;

    m_has_w_pict = false;

    if (m_w_pict)
    {
        delete m_w_pict;
        m_w_pict = NULL;
    }
    ;

    m_has_w_fldChar = false;

    if (m_w_fldChar)
    {
        delete m_w_fldChar;
        m_w_fldChar = NULL;
    }
    ;

    m_has_w_ruby = false;

    if (m_w_ruby)
    {
        delete m_w_ruby;
        m_w_ruby = NULL;
    }
    ;

    m_has_w_footnoteReference = false;

    if (m_w_footnoteReference)
    {
        delete m_w_footnoteReference;
        m_w_footnoteReference = NULL;
    }
    ;

    m_has_w_endnoteReference = false;

    if (m_w_endnoteReference)
    {
        delete m_w_endnoteReference;
        m_w_endnoteReference = NULL;
    }
    ;

    m_has_w_commentReference = false;

    if (m_w_commentReference)
    {
        delete m_w_commentReference;
        m_w_commentReference = NULL;
    }
    ;

    m_has_w_drawing = false;

    if (m_w_drawing)
    {
        delete m_w_drawing;
        m_w_drawing = NULL;
    }
    ;

    m_has_w_ptab = false;

    if (m_w_ptab)
    {
        delete m_w_ptab;
        m_w_ptab = NULL;
    }
    ;

    m_has_w_lastRenderedPageBreak = false;

    if (m_w_lastRenderedPageBreak)
    {
        delete m_w_lastRenderedPageBreak;
        m_w_lastRenderedPageBreak = NULL;
    }
    ;

    m_has_w_continuationSeparator = true;
    if (!m_w_continuationSeparator)
    {
        m_w_continuationSeparator = new ns_w::CT_Empty();
    }
    return m_w_continuationSeparator;
}

const ns_w::CT_Empty& CT_R::ChildGroup_1::get_w_continuationSeparator() const
{
    if (m_w_continuationSeparator)
    {
        return *m_w_continuationSeparator;
    }
    return ns_w::CT_Empty::default_instance();
}

bool CT_R::ChildGroup_1::has_w_sym() const
{
    return m_has_w_sym;
}

ns_w::CT_Sym* CT_R::ChildGroup_1::mutable_w_sym()
{

    m_has_w_br = false;

    if (m_w_br)
    {
        delete m_w_br;
        m_w_br = NULL;
    }
    ;

    m_has_w_t = false;

    if (m_w_t)
    {
        delete m_w_t;
        m_w_t = NULL;
    }
    ;

    m_has_w_contentPart = false;

    if (m_w_contentPart)
    {
        delete m_w_contentPart;
        m_w_contentPart = NULL;
    }
    ;

    m_has_w_delText = false;

    if (m_w_delText)
    {
        delete m_w_delText;
        m_w_delText = NULL;
    }
    ;

    m_has_w_instrText = false;

    if (m_w_instrText)
    {
        delete m_w_instrText;
        m_w_instrText = NULL;
    }
    ;

    m_has_w_delInstrText = false;

    if (m_w_delInstrText)
    {
        delete m_w_delInstrText;
        m_w_delInstrText = NULL;
    }
    ;

    m_has_w_noBreakHyphen = false;

    if (m_w_noBreakHyphen)
    {
        delete m_w_noBreakHyphen;
        m_w_noBreakHyphen = NULL;
    }
    ;

    m_has_w_softHyphen = false;

    if (m_w_softHyphen)
    {
        delete m_w_softHyphen;
        m_w_softHyphen = NULL;
    }
    ;

    m_has_w_dayShort = false;

    if (m_w_dayShort)
    {
        delete m_w_dayShort;
        m_w_dayShort = NULL;
    }
    ;

    m_has_w_monthShort = false;

    if (m_w_monthShort)
    {
        delete m_w_monthShort;
        m_w_monthShort = NULL;
    }
    ;

    m_has_w_yearShort = false;

    if (m_w_yearShort)
    {
        delete m_w_yearShort;
        m_w_yearShort = NULL;
    }
    ;

    m_has_w_dayLong = false;

    if (m_w_dayLong)
    {
        delete m_w_dayLong;
        m_w_dayLong = NULL;
    }
    ;

    m_has_w_monthLong = false;

    if (m_w_monthLong)
    {
        delete m_w_monthLong;
        m_w_monthLong = NULL;
    }
    ;

    m_has_w_yearLong = false;

    if (m_w_yearLong)
    {
        delete m_w_yearLong;
        m_w_yearLong = NULL;
    }
    ;

    m_has_w_annotationRef = false;

    if (m_w_annotationRef)
    {
        delete m_w_annotationRef;
        m_w_annotationRef = NULL;
    }
    ;

    m_has_w_footnoteRef = false;

    if (m_w_footnoteRef)
    {
        delete m_w_footnoteRef;
        m_w_footnoteRef = NULL;
    }
    ;

    m_has_w_endnoteRef = false;

    if (m_w_endnoteRef)
    {
        delete m_w_endnoteRef;
        m_w_endnoteRef = NULL;
    }
    ;

    m_has_w_separator = false;

    if (m_w_separator)
    {
        delete m_w_separator;
        m_w_separator = NULL;
    }
    ;

    m_has_w_continuationSeparator = false;

    if (m_w_continuationSeparator)
    {
        delete m_w_continuationSeparator;
        m_w_continuationSeparator = NULL;
    }
    ;

    m_has_w_pgNum = false;

    if (m_w_pgNum)
    {
        delete m_w_pgNum;
        m_w_pgNum = NULL;
    }
    ;

    m_has_w_cr = false;

    if (m_w_cr)
    {
        delete m_w_cr;
        m_w_cr = NULL;
    }
    ;

    m_has_w_tab = false;

    if (m_w_tab)
    {
        delete m_w_tab;
        m_w_tab = NULL;
    }
    ;

    m_has_w_object = false;

    if (m_w_object)
    {
        delete m_w_object;
        m_w_object = NULL;
    }
    ;

    m_has_w_pict = false;

    if (m_w_pict)
    {
        delete m_w_pict;
        m_w_pict = NULL;
    }
    ;

    m_has_w_fldChar = false;

    if (m_w_fldChar)
    {
        delete m_w_fldChar;
        m_w_fldChar = NULL;
    }
    ;

    m_has_w_ruby = false;

    if (m_w_ruby)
    {
        delete m_w_ruby;
        m_w_ruby = NULL;
    }
    ;

    m_has_w_footnoteReference = false;

    if (m_w_footnoteReference)
    {
        delete m_w_footnoteReference;
        m_w_footnoteReference = NULL;
    }
    ;

    m_has_w_endnoteReference = false;

    if (m_w_endnoteReference)
    {
        delete m_w_endnoteReference;
        m_w_endnoteReference = NULL;
    }
    ;

    m_has_w_commentReference = false;

    if (m_w_commentReference)
    {
        delete m_w_commentReference;
        m_w_commentReference = NULL;
    }
    ;

    m_has_w_drawing = false;

    if (m_w_drawing)
    {
        delete m_w_drawing;
        m_w_drawing = NULL;
    }
    ;

    m_has_w_ptab = false;

    if (m_w_ptab)
    {
        delete m_w_ptab;
        m_w_ptab = NULL;
    }
    ;

    m_has_w_lastRenderedPageBreak = false;

    if (m_w_lastRenderedPageBreak)
    {
        delete m_w_lastRenderedPageBreak;
        m_w_lastRenderedPageBreak = NULL;
    }
    ;

    m_has_w_sym = true;
    if (!m_w_sym)
    {
        m_w_sym = new ns_w::CT_Sym();
    }
    return m_w_sym;
}

const ns_w::CT_Sym& CT_R::ChildGroup_1::get_w_sym() const
{
    if (m_w_sym)
    {
        return *m_w_sym;
    }
    return ns_w::CT_Sym::default_instance();
}

bool CT_R::ChildGroup_1::has_w_pgNum() const
{
    return m_has_w_pgNum;
}

ns_w::CT_Empty* CT_R::ChildGroup_1::mutable_w_pgNum()
{

    m_has_w_br = false;

    if (m_w_br)
    {
        delete m_w_br;
        m_w_br = NULL;
    }
    ;

    m_has_w_t = false;

    if (m_w_t)
    {
        delete m_w_t;
        m_w_t = NULL;
    }
    ;

    m_has_w_contentPart = false;

    if (m_w_contentPart)
    {
        delete m_w_contentPart;
        m_w_contentPart = NULL;
    }
    ;

    m_has_w_delText = false;

    if (m_w_delText)
    {
        delete m_w_delText;
        m_w_delText = NULL;
    }
    ;

    m_has_w_instrText = false;

    if (m_w_instrText)
    {
        delete m_w_instrText;
        m_w_instrText = NULL;
    }
    ;

    m_has_w_delInstrText = false;

    if (m_w_delInstrText)
    {
        delete m_w_delInstrText;
        m_w_delInstrText = NULL;
    }
    ;

    m_has_w_noBreakHyphen = false;

    if (m_w_noBreakHyphen)
    {
        delete m_w_noBreakHyphen;
        m_w_noBreakHyphen = NULL;
    }
    ;

    m_has_w_softHyphen = false;

    if (m_w_softHyphen)
    {
        delete m_w_softHyphen;
        m_w_softHyphen = NULL;
    }
    ;

    m_has_w_dayShort = false;

    if (m_w_dayShort)
    {
        delete m_w_dayShort;
        m_w_dayShort = NULL;
    }
    ;

    m_has_w_monthShort = false;

    if (m_w_monthShort)
    {
        delete m_w_monthShort;
        m_w_monthShort = NULL;
    }
    ;

    m_has_w_yearShort = false;

    if (m_w_yearShort)
    {
        delete m_w_yearShort;
        m_w_yearShort = NULL;
    }
    ;

    m_has_w_dayLong = false;

    if (m_w_dayLong)
    {
        delete m_w_dayLong;
        m_w_dayLong = NULL;
    }
    ;

    m_has_w_monthLong = false;

    if (m_w_monthLong)
    {
        delete m_w_monthLong;
        m_w_monthLong = NULL;
    }
    ;

    m_has_w_yearLong = false;

    if (m_w_yearLong)
    {
        delete m_w_yearLong;
        m_w_yearLong = NULL;
    }
    ;

    m_has_w_annotationRef = false;

    if (m_w_annotationRef)
    {
        delete m_w_annotationRef;
        m_w_annotationRef = NULL;
    }
    ;

    m_has_w_footnoteRef = false;

    if (m_w_footnoteRef)
    {
        delete m_w_footnoteRef;
        m_w_footnoteRef = NULL;
    }
    ;

    m_has_w_endnoteRef = false;

    if (m_w_endnoteRef)
    {
        delete m_w_endnoteRef;
        m_w_endnoteRef = NULL;
    }
    ;

    m_has_w_separator = false;

    if (m_w_separator)
    {
        delete m_w_separator;
        m_w_separator = NULL;
    }
    ;

    m_has_w_continuationSeparator = false;

    if (m_w_continuationSeparator)
    {
        delete m_w_continuationSeparator;
        m_w_continuationSeparator = NULL;
    }
    ;

    m_has_w_sym = false;

    if (m_w_sym)
    {
        delete m_w_sym;
        m_w_sym = NULL;
    }
    ;

    m_has_w_cr = false;

    if (m_w_cr)
    {
        delete m_w_cr;
        m_w_cr = NULL;
    }
    ;

    m_has_w_tab = false;

    if (m_w_tab)
    {
        delete m_w_tab;
        m_w_tab = NULL;
    }
    ;

    m_has_w_object = false;

    if (m_w_object)
    {
        delete m_w_object;
        m_w_object = NULL;
    }
    ;

    m_has_w_pict = false;

    if (m_w_pict)
    {
        delete m_w_pict;
        m_w_pict = NULL;
    }
    ;

    m_has_w_fldChar = false;

    if (m_w_fldChar)
    {
        delete m_w_fldChar;
        m_w_fldChar = NULL;
    }
    ;

    m_has_w_ruby = false;

    if (m_w_ruby)
    {
        delete m_w_ruby;
        m_w_ruby = NULL;
    }
    ;

    m_has_w_footnoteReference = false;

    if (m_w_footnoteReference)
    {
        delete m_w_footnoteReference;
        m_w_footnoteReference = NULL;
    }
    ;

    m_has_w_endnoteReference = false;

    if (m_w_endnoteReference)
    {
        delete m_w_endnoteReference;
        m_w_endnoteReference = NULL;
    }
    ;

    m_has_w_commentReference = false;

    if (m_w_commentReference)
    {
        delete m_w_commentReference;
        m_w_commentReference = NULL;
    }
    ;

    m_has_w_drawing = false;

    if (m_w_drawing)
    {
        delete m_w_drawing;
        m_w_drawing = NULL;
    }
    ;

    m_has_w_ptab = false;

    if (m_w_ptab)
    {
        delete m_w_ptab;
        m_w_ptab = NULL;
    }
    ;

    m_has_w_lastRenderedPageBreak = false;

    if (m_w_lastRenderedPageBreak)
    {
        delete m_w_lastRenderedPageBreak;
        m_w_lastRenderedPageBreak = NULL;
    }
    ;

    m_has_w_pgNum = true;
    if (!m_w_pgNum)
    {
        m_w_pgNum = new ns_w::CT_Empty();
    }
    return m_w_pgNum;
}

const ns_w::CT_Empty& CT_R::ChildGroup_1::get_w_pgNum() const
{
    if (m_w_pgNum)
    {
        return *m_w_pgNum;
    }
    return ns_w::CT_Empty::default_instance();
}

bool CT_R::ChildGroup_1::has_w_cr() const
{
    return m_has_w_cr;
}

ns_w::CT_Empty* CT_R::ChildGroup_1::mutable_w_cr()
{

    m_has_w_br = false;

    if (m_w_br)
    {
        delete m_w_br;
        m_w_br = NULL;
    }
    ;

    m_has_w_t = false;

    if (m_w_t)
    {
        delete m_w_t;
        m_w_t = NULL;
    }
    ;

    m_has_w_contentPart = false;

    if (m_w_contentPart)
    {
        delete m_w_contentPart;
        m_w_contentPart = NULL;
    }
    ;

    m_has_w_delText = false;

    if (m_w_delText)
    {
        delete m_w_delText;
        m_w_delText = NULL;
    }
    ;

    m_has_w_instrText = false;

    if (m_w_instrText)
    {
        delete m_w_instrText;
        m_w_instrText = NULL;
    }
    ;

    m_has_w_delInstrText = false;

    if (m_w_delInstrText)
    {
        delete m_w_delInstrText;
        m_w_delInstrText = NULL;
    }
    ;

    m_has_w_noBreakHyphen = false;

    if (m_w_noBreakHyphen)
    {
        delete m_w_noBreakHyphen;
        m_w_noBreakHyphen = NULL;
    }
    ;

    m_has_w_softHyphen = false;

    if (m_w_softHyphen)
    {
        delete m_w_softHyphen;
        m_w_softHyphen = NULL;
    }
    ;

    m_has_w_dayShort = false;

    if (m_w_dayShort)
    {
        delete m_w_dayShort;
        m_w_dayShort = NULL;
    }
    ;

    m_has_w_monthShort = false;

    if (m_w_monthShort)
    {
        delete m_w_monthShort;
        m_w_monthShort = NULL;
    }
    ;

    m_has_w_yearShort = false;

    if (m_w_yearShort)
    {
        delete m_w_yearShort;
        m_w_yearShort = NULL;
    }
    ;

    m_has_w_dayLong = false;

    if (m_w_dayLong)
    {
        delete m_w_dayLong;
        m_w_dayLong = NULL;
    }
    ;

    m_has_w_monthLong = false;

    if (m_w_monthLong)
    {
        delete m_w_monthLong;
        m_w_monthLong = NULL;
    }
    ;

    m_has_w_yearLong = false;

    if (m_w_yearLong)
    {
        delete m_w_yearLong;
        m_w_yearLong = NULL;
    }
    ;

    m_has_w_annotationRef = false;

    if (m_w_annotationRef)
    {
        delete m_w_annotationRef;
        m_w_annotationRef = NULL;
    }
    ;

    m_has_w_footnoteRef = false;

    if (m_w_footnoteRef)
    {
        delete m_w_footnoteRef;
        m_w_footnoteRef = NULL;
    }
    ;

    m_has_w_endnoteRef = false;

    if (m_w_endnoteRef)
    {
        delete m_w_endnoteRef;
        m_w_endnoteRef = NULL;
    }
    ;

    m_has_w_separator = false;

    if (m_w_separator)
    {
        delete m_w_separator;
        m_w_separator = NULL;
    }
    ;

    m_has_w_continuationSeparator = false;

    if (m_w_continuationSeparator)
    {
        delete m_w_continuationSeparator;
        m_w_continuationSeparator = NULL;
    }
    ;

    m_has_w_sym = false;

    if (m_w_sym)
    {
        delete m_w_sym;
        m_w_sym = NULL;
    }
    ;

    m_has_w_pgNum = false;

    if (m_w_pgNum)
    {
        delete m_w_pgNum;
        m_w_pgNum = NULL;
    }
    ;

    m_has_w_tab = false;

    if (m_w_tab)
    {
        delete m_w_tab;
        m_w_tab = NULL;
    }
    ;

    m_has_w_object = false;

    if (m_w_object)
    {
        delete m_w_object;
        m_w_object = NULL;
    }
    ;

    m_has_w_pict = false;

    if (m_w_pict)
    {
        delete m_w_pict;
        m_w_pict = NULL;
    }
    ;

    m_has_w_fldChar = false;

    if (m_w_fldChar)
    {
        delete m_w_fldChar;
        m_w_fldChar = NULL;
    }
    ;

    m_has_w_ruby = false;

    if (m_w_ruby)
    {
        delete m_w_ruby;
        m_w_ruby = NULL;
    }
    ;

    m_has_w_footnoteReference = false;

    if (m_w_footnoteReference)
    {
        delete m_w_footnoteReference;
        m_w_footnoteReference = NULL;
    }
    ;

    m_has_w_endnoteReference = false;

    if (m_w_endnoteReference)
    {
        delete m_w_endnoteReference;
        m_w_endnoteReference = NULL;
    }
    ;

    m_has_w_commentReference = false;

    if (m_w_commentReference)
    {
        delete m_w_commentReference;
        m_w_commentReference = NULL;
    }
    ;

    m_has_w_drawing = false;

    if (m_w_drawing)
    {
        delete m_w_drawing;
        m_w_drawing = NULL;
    }
    ;

    m_has_w_ptab = false;

    if (m_w_ptab)
    {
        delete m_w_ptab;
        m_w_ptab = NULL;
    }
    ;

    m_has_w_lastRenderedPageBreak = false;

    if (m_w_lastRenderedPageBreak)
    {
        delete m_w_lastRenderedPageBreak;
        m_w_lastRenderedPageBreak = NULL;
    }
    ;

    m_has_w_cr = true;
    if (!m_w_cr)
    {
        m_w_cr = new ns_w::CT_Empty();
    }
    return m_w_cr;
}

const ns_w::CT_Empty& CT_R::ChildGroup_1::get_w_cr() const
{
    if (m_w_cr)
    {
        return *m_w_cr;
    }
    return ns_w::CT_Empty::default_instance();
}

bool CT_R::ChildGroup_1::has_w_tab() const
{
    return m_has_w_tab;
}

ns_w::CT_Empty* CT_R::ChildGroup_1::mutable_w_tab()
{

    m_has_w_br = false;

    if (m_w_br)
    {
        delete m_w_br;
        m_w_br = NULL;
    }
    ;

    m_has_w_t = false;

    if (m_w_t)
    {
        delete m_w_t;
        m_w_t = NULL;
    }
    ;

    m_has_w_contentPart = false;

    if (m_w_contentPart)
    {
        delete m_w_contentPart;
        m_w_contentPart = NULL;
    }
    ;

    m_has_w_delText = false;

    if (m_w_delText)
    {
        delete m_w_delText;
        m_w_delText = NULL;
    }
    ;

    m_has_w_instrText = false;

    if (m_w_instrText)
    {
        delete m_w_instrText;
        m_w_instrText = NULL;
    }
    ;

    m_has_w_delInstrText = false;

    if (m_w_delInstrText)
    {
        delete m_w_delInstrText;
        m_w_delInstrText = NULL;
    }
    ;

    m_has_w_noBreakHyphen = false;

    if (m_w_noBreakHyphen)
    {
        delete m_w_noBreakHyphen;
        m_w_noBreakHyphen = NULL;
    }
    ;

    m_has_w_softHyphen = false;

    if (m_w_softHyphen)
    {
        delete m_w_softHyphen;
        m_w_softHyphen = NULL;
    }
    ;

    m_has_w_dayShort = false;

    if (m_w_dayShort)
    {
        delete m_w_dayShort;
        m_w_dayShort = NULL;
    }
    ;

    m_has_w_monthShort = false;

    if (m_w_monthShort)
    {
        delete m_w_monthShort;
        m_w_monthShort = NULL;
    }
    ;

    m_has_w_yearShort = false;

    if (m_w_yearShort)
    {
        delete m_w_yearShort;
        m_w_yearShort = NULL;
    }
    ;

    m_has_w_dayLong = false;

    if (m_w_dayLong)
    {
        delete m_w_dayLong;
        m_w_dayLong = NULL;
    }
    ;

    m_has_w_monthLong = false;

    if (m_w_monthLong)
    {
        delete m_w_monthLong;
        m_w_monthLong = NULL;
    }
    ;

    m_has_w_yearLong = false;

    if (m_w_yearLong)
    {
        delete m_w_yearLong;
        m_w_yearLong = NULL;
    }
    ;

    m_has_w_annotationRef = false;

    if (m_w_annotationRef)
    {
        delete m_w_annotationRef;
        m_w_annotationRef = NULL;
    }
    ;

    m_has_w_footnoteRef = false;

    if (m_w_footnoteRef)
    {
        delete m_w_footnoteRef;
        m_w_footnoteRef = NULL;
    }
    ;

    m_has_w_endnoteRef = false;

    if (m_w_endnoteRef)
    {
        delete m_w_endnoteRef;
        m_w_endnoteRef = NULL;
    }
    ;

    m_has_w_separator = false;

    if (m_w_separator)
    {
        delete m_w_separator;
        m_w_separator = NULL;
    }
    ;

    m_has_w_continuationSeparator = false;

    if (m_w_continuationSeparator)
    {
        delete m_w_continuationSeparator;
        m_w_continuationSeparator = NULL;
    }
    ;

    m_has_w_sym = false;

    if (m_w_sym)
    {
        delete m_w_sym;
        m_w_sym = NULL;
    }
    ;

    m_has_w_pgNum = false;

    if (m_w_pgNum)
    {
        delete m_w_pgNum;
        m_w_pgNum = NULL;
    }
    ;

    m_has_w_cr = false;

    if (m_w_cr)
    {
        delete m_w_cr;
        m_w_cr = NULL;
    }
    ;

    m_has_w_object = false;

    if (m_w_object)
    {
        delete m_w_object;
        m_w_object = NULL;
    }
    ;

    m_has_w_pict = false;

    if (m_w_pict)
    {
        delete m_w_pict;
        m_w_pict = NULL;
    }
    ;

    m_has_w_fldChar = false;

    if (m_w_fldChar)
    {
        delete m_w_fldChar;
        m_w_fldChar = NULL;
    }
    ;

    m_has_w_ruby = false;

    if (m_w_ruby)
    {
        delete m_w_ruby;
        m_w_ruby = NULL;
    }
    ;

    m_has_w_footnoteReference = false;

    if (m_w_footnoteReference)
    {
        delete m_w_footnoteReference;
        m_w_footnoteReference = NULL;
    }
    ;

    m_has_w_endnoteReference = false;

    if (m_w_endnoteReference)
    {
        delete m_w_endnoteReference;
        m_w_endnoteReference = NULL;
    }
    ;

    m_has_w_commentReference = false;

    if (m_w_commentReference)
    {
        delete m_w_commentReference;
        m_w_commentReference = NULL;
    }
    ;

    m_has_w_drawing = false;

    if (m_w_drawing)
    {
        delete m_w_drawing;
        m_w_drawing = NULL;
    }
    ;

    m_has_w_ptab = false;

    if (m_w_ptab)
    {
        delete m_w_ptab;
        m_w_ptab = NULL;
    }
    ;

    m_has_w_lastRenderedPageBreak = false;

    if (m_w_lastRenderedPageBreak)
    {
        delete m_w_lastRenderedPageBreak;
        m_w_lastRenderedPageBreak = NULL;
    }
    ;

    m_has_w_tab = true;
    if (!m_w_tab)
    {
        m_w_tab = new ns_w::CT_Empty();
    }
    return m_w_tab;
}

const ns_w::CT_Empty& CT_R::ChildGroup_1::get_w_tab() const
{
    if (m_w_tab)
    {
        return *m_w_tab;
    }
    return ns_w::CT_Empty::default_instance();
}

bool CT_R::ChildGroup_1::has_w_object() const
{
    return m_has_w_object;
}

ns_w::CT_Object* CT_R::ChildGroup_1::mutable_w_object()
{

    m_has_w_br = false;

    if (m_w_br)
    {
        delete m_w_br;
        m_w_br = NULL;
    }
    ;

    m_has_w_t = false;

    if (m_w_t)
    {
        delete m_w_t;
        m_w_t = NULL;
    }
    ;

    m_has_w_contentPart = false;

    if (m_w_contentPart)
    {
        delete m_w_contentPart;
        m_w_contentPart = NULL;
    }
    ;

    m_has_w_delText = false;

    if (m_w_delText)
    {
        delete m_w_delText;
        m_w_delText = NULL;
    }
    ;

    m_has_w_instrText = false;

    if (m_w_instrText)
    {
        delete m_w_instrText;
        m_w_instrText = NULL;
    }
    ;

    m_has_w_delInstrText = false;

    if (m_w_delInstrText)
    {
        delete m_w_delInstrText;
        m_w_delInstrText = NULL;
    }
    ;

    m_has_w_noBreakHyphen = false;

    if (m_w_noBreakHyphen)
    {
        delete m_w_noBreakHyphen;
        m_w_noBreakHyphen = NULL;
    }
    ;

    m_has_w_softHyphen = false;

    if (m_w_softHyphen)
    {
        delete m_w_softHyphen;
        m_w_softHyphen = NULL;
    }
    ;

    m_has_w_dayShort = false;

    if (m_w_dayShort)
    {
        delete m_w_dayShort;
        m_w_dayShort = NULL;
    }
    ;

    m_has_w_monthShort = false;

    if (m_w_monthShort)
    {
        delete m_w_monthShort;
        m_w_monthShort = NULL;
    }
    ;

    m_has_w_yearShort = false;

    if (m_w_yearShort)
    {
        delete m_w_yearShort;
        m_w_yearShort = NULL;
    }
    ;

    m_has_w_dayLong = false;

    if (m_w_dayLong)
    {
        delete m_w_dayLong;
        m_w_dayLong = NULL;
    }
    ;

    m_has_w_monthLong = false;

    if (m_w_monthLong)
    {
        delete m_w_monthLong;
        m_w_monthLong = NULL;
    }
    ;

    m_has_w_yearLong = false;

    if (m_w_yearLong)
    {
        delete m_w_yearLong;
        m_w_yearLong = NULL;
    }
    ;

    m_has_w_annotationRef = false;

    if (m_w_annotationRef)
    {
        delete m_w_annotationRef;
        m_w_annotationRef = NULL;
    }
    ;

    m_has_w_footnoteRef = false;

    if (m_w_footnoteRef)
    {
        delete m_w_footnoteRef;
        m_w_footnoteRef = NULL;
    }
    ;

    m_has_w_endnoteRef = false;

    if (m_w_endnoteRef)
    {
        delete m_w_endnoteRef;
        m_w_endnoteRef = NULL;
    }
    ;

    m_has_w_separator = false;

    if (m_w_separator)
    {
        delete m_w_separator;
        m_w_separator = NULL;
    }
    ;

    m_has_w_continuationSeparator = false;

    if (m_w_continuationSeparator)
    {
        delete m_w_continuationSeparator;
        m_w_continuationSeparator = NULL;
    }
    ;

    m_has_w_sym = false;

    if (m_w_sym)
    {
        delete m_w_sym;
        m_w_sym = NULL;
    }
    ;

    m_has_w_pgNum = false;

    if (m_w_pgNum)
    {
        delete m_w_pgNum;
        m_w_pgNum = NULL;
    }
    ;

    m_has_w_cr = false;

    if (m_w_cr)
    {
        delete m_w_cr;
        m_w_cr = NULL;
    }
    ;

    m_has_w_tab = false;

    if (m_w_tab)
    {
        delete m_w_tab;
        m_w_tab = NULL;
    }
    ;

    m_has_w_pict = false;

    if (m_w_pict)
    {
        delete m_w_pict;
        m_w_pict = NULL;
    }
    ;

    m_has_w_fldChar = false;

    if (m_w_fldChar)
    {
        delete m_w_fldChar;
        m_w_fldChar = NULL;
    }
    ;

    m_has_w_ruby = false;

    if (m_w_ruby)
    {
        delete m_w_ruby;
        m_w_ruby = NULL;
    }
    ;

    m_has_w_footnoteReference = false;

    if (m_w_footnoteReference)
    {
        delete m_w_footnoteReference;
        m_w_footnoteReference = NULL;
    }
    ;

    m_has_w_endnoteReference = false;

    if (m_w_endnoteReference)
    {
        delete m_w_endnoteReference;
        m_w_endnoteReference = NULL;
    }
    ;

    m_has_w_commentReference = false;

    if (m_w_commentReference)
    {
        delete m_w_commentReference;
        m_w_commentReference = NULL;
    }
    ;

    m_has_w_drawing = false;

    if (m_w_drawing)
    {
        delete m_w_drawing;
        m_w_drawing = NULL;
    }
    ;

    m_has_w_ptab = false;

    if (m_w_ptab)
    {
        delete m_w_ptab;
        m_w_ptab = NULL;
    }
    ;

    m_has_w_lastRenderedPageBreak = false;

    if (m_w_lastRenderedPageBreak)
    {
        delete m_w_lastRenderedPageBreak;
        m_w_lastRenderedPageBreak = NULL;
    }
    ;

    m_has_w_object = true;
    if (!m_w_object)
    {
        m_w_object = new ns_w::CT_Object();
    }
    return m_w_object;
}

const ns_w::CT_Object& CT_R::ChildGroup_1::get_w_object() const
{
    if (m_w_object)
    {
        return *m_w_object;
    }
    return ns_w::CT_Object::default_instance();
}

bool CT_R::ChildGroup_1::has_w_pict() const
{
    return m_has_w_pict;
}

ns_w::CT_Picture* CT_R::ChildGroup_1::mutable_w_pict()
{

    m_has_w_br = false;

    if (m_w_br)
    {
        delete m_w_br;
        m_w_br = NULL;
    }
    ;

    m_has_w_t = false;

    if (m_w_t)
    {
        delete m_w_t;
        m_w_t = NULL;
    }
    ;

    m_has_w_contentPart = false;

    if (m_w_contentPart)
    {
        delete m_w_contentPart;
        m_w_contentPart = NULL;
    }
    ;

    m_has_w_delText = false;

    if (m_w_delText)
    {
        delete m_w_delText;
        m_w_delText = NULL;
    }
    ;

    m_has_w_instrText = false;

    if (m_w_instrText)
    {
        delete m_w_instrText;
        m_w_instrText = NULL;
    }
    ;

    m_has_w_delInstrText = false;

    if (m_w_delInstrText)
    {
        delete m_w_delInstrText;
        m_w_delInstrText = NULL;
    }
    ;

    m_has_w_noBreakHyphen = false;

    if (m_w_noBreakHyphen)
    {
        delete m_w_noBreakHyphen;
        m_w_noBreakHyphen = NULL;
    }
    ;

    m_has_w_softHyphen = false;

    if (m_w_softHyphen)
    {
        delete m_w_softHyphen;
        m_w_softHyphen = NULL;
    }
    ;

    m_has_w_dayShort = false;

    if (m_w_dayShort)
    {
        delete m_w_dayShort;
        m_w_dayShort = NULL;
    }
    ;

    m_has_w_monthShort = false;

    if (m_w_monthShort)
    {
        delete m_w_monthShort;
        m_w_monthShort = NULL;
    }
    ;

    m_has_w_yearShort = false;

    if (m_w_yearShort)
    {
        delete m_w_yearShort;
        m_w_yearShort = NULL;
    }
    ;

    m_has_w_dayLong = false;

    if (m_w_dayLong)
    {
        delete m_w_dayLong;
        m_w_dayLong = NULL;
    }
    ;

    m_has_w_monthLong = false;

    if (m_w_monthLong)
    {
        delete m_w_monthLong;
        m_w_monthLong = NULL;
    }
    ;

    m_has_w_yearLong = false;

    if (m_w_yearLong)
    {
        delete m_w_yearLong;
        m_w_yearLong = NULL;
    }
    ;

    m_has_w_annotationRef = false;

    if (m_w_annotationRef)
    {
        delete m_w_annotationRef;
        m_w_annotationRef = NULL;
    }
    ;

    m_has_w_footnoteRef = false;

    if (m_w_footnoteRef)
    {
        delete m_w_footnoteRef;
        m_w_footnoteRef = NULL;
    }
    ;

    m_has_w_endnoteRef = false;

    if (m_w_endnoteRef)
    {
        delete m_w_endnoteRef;
        m_w_endnoteRef = NULL;
    }
    ;

    m_has_w_separator = false;

    if (m_w_separator)
    {
        delete m_w_separator;
        m_w_separator = NULL;
    }
    ;

    m_has_w_continuationSeparator = false;

    if (m_w_continuationSeparator)
    {
        delete m_w_continuationSeparator;
        m_w_continuationSeparator = NULL;
    }
    ;

    m_has_w_sym = false;

    if (m_w_sym)
    {
        delete m_w_sym;
        m_w_sym = NULL;
    }
    ;

    m_has_w_pgNum = false;

    if (m_w_pgNum)
    {
        delete m_w_pgNum;
        m_w_pgNum = NULL;
    }
    ;

    m_has_w_cr = false;

    if (m_w_cr)
    {
        delete m_w_cr;
        m_w_cr = NULL;
    }
    ;

    m_has_w_tab = false;

    if (m_w_tab)
    {
        delete m_w_tab;
        m_w_tab = NULL;
    }
    ;

    m_has_w_object = false;

    if (m_w_object)
    {
        delete m_w_object;
        m_w_object = NULL;
    }
    ;

    m_has_w_fldChar = false;

    if (m_w_fldChar)
    {
        delete m_w_fldChar;
        m_w_fldChar = NULL;
    }
    ;

    m_has_w_ruby = false;

    if (m_w_ruby)
    {
        delete m_w_ruby;
        m_w_ruby = NULL;
    }
    ;

    m_has_w_footnoteReference = false;

    if (m_w_footnoteReference)
    {
        delete m_w_footnoteReference;
        m_w_footnoteReference = NULL;
    }
    ;

    m_has_w_endnoteReference = false;

    if (m_w_endnoteReference)
    {
        delete m_w_endnoteReference;
        m_w_endnoteReference = NULL;
    }
    ;

    m_has_w_commentReference = false;

    if (m_w_commentReference)
    {
        delete m_w_commentReference;
        m_w_commentReference = NULL;
    }
    ;

    m_has_w_drawing = false;

    if (m_w_drawing)
    {
        delete m_w_drawing;
        m_w_drawing = NULL;
    }
    ;

    m_has_w_ptab = false;

    if (m_w_ptab)
    {
        delete m_w_ptab;
        m_w_ptab = NULL;
    }
    ;

    m_has_w_lastRenderedPageBreak = false;

    if (m_w_lastRenderedPageBreak)
    {
        delete m_w_lastRenderedPageBreak;
        m_w_lastRenderedPageBreak = NULL;
    }
    ;

    m_has_w_pict = true;
    if (!m_w_pict)
    {
        m_w_pict = new ns_w::CT_Picture();
    }
    return m_w_pict;
}

const ns_w::CT_Picture& CT_R::ChildGroup_1::get_w_pict() const
{
    if (m_w_pict)
    {
        return *m_w_pict;
    }
    return ns_w::CT_Picture::default_instance();
}

bool CT_R::ChildGroup_1::has_w_fldChar() const
{
    return m_has_w_fldChar;
}

ns_w::CT_FldChar* CT_R::ChildGroup_1::mutable_w_fldChar()
{

    m_has_w_br = false;

    if (m_w_br)
    {
        delete m_w_br;
        m_w_br = NULL;
    }
    ;

    m_has_w_t = false;

    if (m_w_t)
    {
        delete m_w_t;
        m_w_t = NULL;
    }
    ;

    m_has_w_contentPart = false;

    if (m_w_contentPart)
    {
        delete m_w_contentPart;
        m_w_contentPart = NULL;
    }
    ;

    m_has_w_delText = false;

    if (m_w_delText)
    {
        delete m_w_delText;
        m_w_delText = NULL;
    }
    ;

    m_has_w_instrText = false;

    if (m_w_instrText)
    {
        delete m_w_instrText;
        m_w_instrText = NULL;
    }
    ;

    m_has_w_delInstrText = false;

    if (m_w_delInstrText)
    {
        delete m_w_delInstrText;
        m_w_delInstrText = NULL;
    }
    ;

    m_has_w_noBreakHyphen = false;

    if (m_w_noBreakHyphen)
    {
        delete m_w_noBreakHyphen;
        m_w_noBreakHyphen = NULL;
    }
    ;

    m_has_w_softHyphen = false;

    if (m_w_softHyphen)
    {
        delete m_w_softHyphen;
        m_w_softHyphen = NULL;
    }
    ;

    m_has_w_dayShort = false;

    if (m_w_dayShort)
    {
        delete m_w_dayShort;
        m_w_dayShort = NULL;
    }
    ;

    m_has_w_monthShort = false;

    if (m_w_monthShort)
    {
        delete m_w_monthShort;
        m_w_monthShort = NULL;
    }
    ;

    m_has_w_yearShort = false;

    if (m_w_yearShort)
    {
        delete m_w_yearShort;
        m_w_yearShort = NULL;
    }
    ;

    m_has_w_dayLong = false;

    if (m_w_dayLong)
    {
        delete m_w_dayLong;
        m_w_dayLong = NULL;
    }
    ;

    m_has_w_monthLong = false;

    if (m_w_monthLong)
    {
        delete m_w_monthLong;
        m_w_monthLong = NULL;
    }
    ;

    m_has_w_yearLong = false;

    if (m_w_yearLong)
    {
        delete m_w_yearLong;
        m_w_yearLong = NULL;
    }
    ;

    m_has_w_annotationRef = false;

    if (m_w_annotationRef)
    {
        delete m_w_annotationRef;
        m_w_annotationRef = NULL;
    }
    ;

    m_has_w_footnoteRef = false;

    if (m_w_footnoteRef)
    {
        delete m_w_footnoteRef;
        m_w_footnoteRef = NULL;
    }
    ;

    m_has_w_endnoteRef = false;

    if (m_w_endnoteRef)
    {
        delete m_w_endnoteRef;
        m_w_endnoteRef = NULL;
    }
    ;

    m_has_w_separator = false;

    if (m_w_separator)
    {
        delete m_w_separator;
        m_w_separator = NULL;
    }
    ;

    m_has_w_continuationSeparator = false;

    if (m_w_continuationSeparator)
    {
        delete m_w_continuationSeparator;
        m_w_continuationSeparator = NULL;
    }
    ;

    m_has_w_sym = false;

    if (m_w_sym)
    {
        delete m_w_sym;
        m_w_sym = NULL;
    }
    ;

    m_has_w_pgNum = false;

    if (m_w_pgNum)
    {
        delete m_w_pgNum;
        m_w_pgNum = NULL;
    }
    ;

    m_has_w_cr = false;

    if (m_w_cr)
    {
        delete m_w_cr;
        m_w_cr = NULL;
    }
    ;

    m_has_w_tab = false;

    if (m_w_tab)
    {
        delete m_w_tab;
        m_w_tab = NULL;
    }
    ;

    m_has_w_object = false;

    if (m_w_object)
    {
        delete m_w_object;
        m_w_object = NULL;
    }
    ;

    m_has_w_pict = false;

    if (m_w_pict)
    {
        delete m_w_pict;
        m_w_pict = NULL;
    }
    ;

    m_has_w_ruby = false;

    if (m_w_ruby)
    {
        delete m_w_ruby;
        m_w_ruby = NULL;
    }
    ;

    m_has_w_footnoteReference = false;

    if (m_w_footnoteReference)
    {
        delete m_w_footnoteReference;
        m_w_footnoteReference = NULL;
    }
    ;

    m_has_w_endnoteReference = false;

    if (m_w_endnoteReference)
    {
        delete m_w_endnoteReference;
        m_w_endnoteReference = NULL;
    }
    ;

    m_has_w_commentReference = false;

    if (m_w_commentReference)
    {
        delete m_w_commentReference;
        m_w_commentReference = NULL;
    }
    ;

    m_has_w_drawing = false;

    if (m_w_drawing)
    {
        delete m_w_drawing;
        m_w_drawing = NULL;
    }
    ;

    m_has_w_ptab = false;

    if (m_w_ptab)
    {
        delete m_w_ptab;
        m_w_ptab = NULL;
    }
    ;

    m_has_w_lastRenderedPageBreak = false;

    if (m_w_lastRenderedPageBreak)
    {
        delete m_w_lastRenderedPageBreak;
        m_w_lastRenderedPageBreak = NULL;
    }
    ;

    m_has_w_fldChar = true;
    if (!m_w_fldChar)
    {
        m_w_fldChar = new ns_w::CT_FldChar();
    }
    return m_w_fldChar;
}

const ns_w::CT_FldChar& CT_R::ChildGroup_1::get_w_fldChar() const
{
    if (m_w_fldChar)
    {
        return *m_w_fldChar;
    }
    return ns_w::CT_FldChar::default_instance();
}

bool CT_R::ChildGroup_1::has_w_ruby() const
{
    return m_has_w_ruby;
}

ns_w::CT_Ruby* CT_R::ChildGroup_1::mutable_w_ruby()
{

    m_has_w_br = false;

    if (m_w_br)
    {
        delete m_w_br;
        m_w_br = NULL;
    }
    ;

    m_has_w_t = false;

    if (m_w_t)
    {
        delete m_w_t;
        m_w_t = NULL;
    }
    ;

    m_has_w_contentPart = false;

    if (m_w_contentPart)
    {
        delete m_w_contentPart;
        m_w_contentPart = NULL;
    }
    ;

    m_has_w_delText = false;

    if (m_w_delText)
    {
        delete m_w_delText;
        m_w_delText = NULL;
    }
    ;

    m_has_w_instrText = false;

    if (m_w_instrText)
    {
        delete m_w_instrText;
        m_w_instrText = NULL;
    }
    ;

    m_has_w_delInstrText = false;

    if (m_w_delInstrText)
    {
        delete m_w_delInstrText;
        m_w_delInstrText = NULL;
    }
    ;

    m_has_w_noBreakHyphen = false;

    if (m_w_noBreakHyphen)
    {
        delete m_w_noBreakHyphen;
        m_w_noBreakHyphen = NULL;
    }
    ;

    m_has_w_softHyphen = false;

    if (m_w_softHyphen)
    {
        delete m_w_softHyphen;
        m_w_softHyphen = NULL;
    }
    ;

    m_has_w_dayShort = false;

    if (m_w_dayShort)
    {
        delete m_w_dayShort;
        m_w_dayShort = NULL;
    }
    ;

    m_has_w_monthShort = false;

    if (m_w_monthShort)
    {
        delete m_w_monthShort;
        m_w_monthShort = NULL;
    }
    ;

    m_has_w_yearShort = false;

    if (m_w_yearShort)
    {
        delete m_w_yearShort;
        m_w_yearShort = NULL;
    }
    ;

    m_has_w_dayLong = false;

    if (m_w_dayLong)
    {
        delete m_w_dayLong;
        m_w_dayLong = NULL;
    }
    ;

    m_has_w_monthLong = false;

    if (m_w_monthLong)
    {
        delete m_w_monthLong;
        m_w_monthLong = NULL;
    }
    ;

    m_has_w_yearLong = false;

    if (m_w_yearLong)
    {
        delete m_w_yearLong;
        m_w_yearLong = NULL;
    }
    ;

    m_has_w_annotationRef = false;

    if (m_w_annotationRef)
    {
        delete m_w_annotationRef;
        m_w_annotationRef = NULL;
    }
    ;

    m_has_w_footnoteRef = false;

    if (m_w_footnoteRef)
    {
        delete m_w_footnoteRef;
        m_w_footnoteRef = NULL;
    }
    ;

    m_has_w_endnoteRef = false;

    if (m_w_endnoteRef)
    {
        delete m_w_endnoteRef;
        m_w_endnoteRef = NULL;
    }
    ;

    m_has_w_separator = false;

    if (m_w_separator)
    {
        delete m_w_separator;
        m_w_separator = NULL;
    }
    ;

    m_has_w_continuationSeparator = false;

    if (m_w_continuationSeparator)
    {
        delete m_w_continuationSeparator;
        m_w_continuationSeparator = NULL;
    }
    ;

    m_has_w_sym = false;

    if (m_w_sym)
    {
        delete m_w_sym;
        m_w_sym = NULL;
    }
    ;

    m_has_w_pgNum = false;

    if (m_w_pgNum)
    {
        delete m_w_pgNum;
        m_w_pgNum = NULL;
    }
    ;

    m_has_w_cr = false;

    if (m_w_cr)
    {
        delete m_w_cr;
        m_w_cr = NULL;
    }
    ;

    m_has_w_tab = false;

    if (m_w_tab)
    {
        delete m_w_tab;
        m_w_tab = NULL;
    }
    ;

    m_has_w_object = false;

    if (m_w_object)
    {
        delete m_w_object;
        m_w_object = NULL;
    }
    ;

    m_has_w_pict = false;

    if (m_w_pict)
    {
        delete m_w_pict;
        m_w_pict = NULL;
    }
    ;

    m_has_w_fldChar = false;

    if (m_w_fldChar)
    {
        delete m_w_fldChar;
        m_w_fldChar = NULL;
    }
    ;

    m_has_w_footnoteReference = false;

    if (m_w_footnoteReference)
    {
        delete m_w_footnoteReference;
        m_w_footnoteReference = NULL;
    }
    ;

    m_has_w_endnoteReference = false;

    if (m_w_endnoteReference)
    {
        delete m_w_endnoteReference;
        m_w_endnoteReference = NULL;
    }
    ;

    m_has_w_commentReference = false;

    if (m_w_commentReference)
    {
        delete m_w_commentReference;
        m_w_commentReference = NULL;
    }
    ;

    m_has_w_drawing = false;

    if (m_w_drawing)
    {
        delete m_w_drawing;
        m_w_drawing = NULL;
    }
    ;

    m_has_w_ptab = false;

    if (m_w_ptab)
    {
        delete m_w_ptab;
        m_w_ptab = NULL;
    }
    ;

    m_has_w_lastRenderedPageBreak = false;

    if (m_w_lastRenderedPageBreak)
    {
        delete m_w_lastRenderedPageBreak;
        m_w_lastRenderedPageBreak = NULL;
    }
    ;

    m_has_w_ruby = true;
    if (!m_w_ruby)
    {
        m_w_ruby = new ns_w::CT_Ruby();
    }
    return m_w_ruby;
}

const ns_w::CT_Ruby& CT_R::ChildGroup_1::get_w_ruby() const
{
    if (m_w_ruby)
    {
        return *m_w_ruby;
    }
    return ns_w::CT_Ruby::default_instance();
}

bool CT_R::ChildGroup_1::has_w_footnoteReference() const
{
    return m_has_w_footnoteReference;
}

ns_w::CT_FtnEdnRef* CT_R::ChildGroup_1::mutable_w_footnoteReference()
{

    m_has_w_br = false;

    if (m_w_br)
    {
        delete m_w_br;
        m_w_br = NULL;
    }
    ;

    m_has_w_t = false;

    if (m_w_t)
    {
        delete m_w_t;
        m_w_t = NULL;
    }
    ;

    m_has_w_contentPart = false;

    if (m_w_contentPart)
    {
        delete m_w_contentPart;
        m_w_contentPart = NULL;
    }
    ;

    m_has_w_delText = false;

    if (m_w_delText)
    {
        delete m_w_delText;
        m_w_delText = NULL;
    }
    ;

    m_has_w_instrText = false;

    if (m_w_instrText)
    {
        delete m_w_instrText;
        m_w_instrText = NULL;
    }
    ;

    m_has_w_delInstrText = false;

    if (m_w_delInstrText)
    {
        delete m_w_delInstrText;
        m_w_delInstrText = NULL;
    }
    ;

    m_has_w_noBreakHyphen = false;

    if (m_w_noBreakHyphen)
    {
        delete m_w_noBreakHyphen;
        m_w_noBreakHyphen = NULL;
    }
    ;

    m_has_w_softHyphen = false;

    if (m_w_softHyphen)
    {
        delete m_w_softHyphen;
        m_w_softHyphen = NULL;
    }
    ;

    m_has_w_dayShort = false;

    if (m_w_dayShort)
    {
        delete m_w_dayShort;
        m_w_dayShort = NULL;
    }
    ;

    m_has_w_monthShort = false;

    if (m_w_monthShort)
    {
        delete m_w_monthShort;
        m_w_monthShort = NULL;
    }
    ;

    m_has_w_yearShort = false;

    if (m_w_yearShort)
    {
        delete m_w_yearShort;
        m_w_yearShort = NULL;
    }
    ;

    m_has_w_dayLong = false;

    if (m_w_dayLong)
    {
        delete m_w_dayLong;
        m_w_dayLong = NULL;
    }
    ;

    m_has_w_monthLong = false;

    if (m_w_monthLong)
    {
        delete m_w_monthLong;
        m_w_monthLong = NULL;
    }
    ;

    m_has_w_yearLong = false;

    if (m_w_yearLong)
    {
        delete m_w_yearLong;
        m_w_yearLong = NULL;
    }
    ;

    m_has_w_annotationRef = false;

    if (m_w_annotationRef)
    {
        delete m_w_annotationRef;
        m_w_annotationRef = NULL;
    }
    ;

    m_has_w_footnoteRef = false;

    if (m_w_footnoteRef)
    {
        delete m_w_footnoteRef;
        m_w_footnoteRef = NULL;
    }
    ;

    m_has_w_endnoteRef = false;

    if (m_w_endnoteRef)
    {
        delete m_w_endnoteRef;
        m_w_endnoteRef = NULL;
    }
    ;

    m_has_w_separator = false;

    if (m_w_separator)
    {
        delete m_w_separator;
        m_w_separator = NULL;
    }
    ;

    m_has_w_continuationSeparator = false;

    if (m_w_continuationSeparator)
    {
        delete m_w_continuationSeparator;
        m_w_continuationSeparator = NULL;
    }
    ;

    m_has_w_sym = false;

    if (m_w_sym)
    {
        delete m_w_sym;
        m_w_sym = NULL;
    }
    ;

    m_has_w_pgNum = false;

    if (m_w_pgNum)
    {
        delete m_w_pgNum;
        m_w_pgNum = NULL;
    }
    ;

    m_has_w_cr = false;

    if (m_w_cr)
    {
        delete m_w_cr;
        m_w_cr = NULL;
    }
    ;

    m_has_w_tab = false;

    if (m_w_tab)
    {
        delete m_w_tab;
        m_w_tab = NULL;
    }
    ;

    m_has_w_object = false;

    if (m_w_object)
    {
        delete m_w_object;
        m_w_object = NULL;
    }
    ;

    m_has_w_pict = false;

    if (m_w_pict)
    {
        delete m_w_pict;
        m_w_pict = NULL;
    }
    ;

    m_has_w_fldChar = false;

    if (m_w_fldChar)
    {
        delete m_w_fldChar;
        m_w_fldChar = NULL;
    }
    ;

    m_has_w_ruby = false;

    if (m_w_ruby)
    {
        delete m_w_ruby;
        m_w_ruby = NULL;
    }
    ;

    m_has_w_endnoteReference = false;

    if (m_w_endnoteReference)
    {
        delete m_w_endnoteReference;
        m_w_endnoteReference = NULL;
    }
    ;

    m_has_w_commentReference = false;

    if (m_w_commentReference)
    {
        delete m_w_commentReference;
        m_w_commentReference = NULL;
    }
    ;

    m_has_w_drawing = false;

    if (m_w_drawing)
    {
        delete m_w_drawing;
        m_w_drawing = NULL;
    }
    ;

    m_has_w_ptab = false;

    if (m_w_ptab)
    {
        delete m_w_ptab;
        m_w_ptab = NULL;
    }
    ;

    m_has_w_lastRenderedPageBreak = false;

    if (m_w_lastRenderedPageBreak)
    {
        delete m_w_lastRenderedPageBreak;
        m_w_lastRenderedPageBreak = NULL;
    }
    ;

    m_has_w_footnoteReference = true;
    if (!m_w_footnoteReference)
    {
        m_w_footnoteReference = new ns_w::CT_FtnEdnRef();
    }
    return m_w_footnoteReference;
}

const ns_w::CT_FtnEdnRef& CT_R::ChildGroup_1::get_w_footnoteReference() const
{
    if (m_w_footnoteReference)
    {
        return *m_w_footnoteReference;
    }
    return ns_w::CT_FtnEdnRef::default_instance();
}

bool CT_R::ChildGroup_1::has_w_endnoteReference() const
{
    return m_has_w_endnoteReference;
}

ns_w::CT_FtnEdnRef* CT_R::ChildGroup_1::mutable_w_endnoteReference()
{

    m_has_w_br = false;

    if (m_w_br)
    {
        delete m_w_br;
        m_w_br = NULL;
    }
    ;

    m_has_w_t = false;

    if (m_w_t)
    {
        delete m_w_t;
        m_w_t = NULL;
    }
    ;

    m_has_w_contentPart = false;

    if (m_w_contentPart)
    {
        delete m_w_contentPart;
        m_w_contentPart = NULL;
    }
    ;

    m_has_w_delText = false;

    if (m_w_delText)
    {
        delete m_w_delText;
        m_w_delText = NULL;
    }
    ;

    m_has_w_instrText = false;

    if (m_w_instrText)
    {
        delete m_w_instrText;
        m_w_instrText = NULL;
    }
    ;

    m_has_w_delInstrText = false;

    if (m_w_delInstrText)
    {
        delete m_w_delInstrText;
        m_w_delInstrText = NULL;
    }
    ;

    m_has_w_noBreakHyphen = false;

    if (m_w_noBreakHyphen)
    {
        delete m_w_noBreakHyphen;
        m_w_noBreakHyphen = NULL;
    }
    ;

    m_has_w_softHyphen = false;

    if (m_w_softHyphen)
    {
        delete m_w_softHyphen;
        m_w_softHyphen = NULL;
    }
    ;

    m_has_w_dayShort = false;

    if (m_w_dayShort)
    {
        delete m_w_dayShort;
        m_w_dayShort = NULL;
    }
    ;

    m_has_w_monthShort = false;

    if (m_w_monthShort)
    {
        delete m_w_monthShort;
        m_w_monthShort = NULL;
    }
    ;

    m_has_w_yearShort = false;

    if (m_w_yearShort)
    {
        delete m_w_yearShort;
        m_w_yearShort = NULL;
    }
    ;

    m_has_w_dayLong = false;

    if (m_w_dayLong)
    {
        delete m_w_dayLong;
        m_w_dayLong = NULL;
    }
    ;

    m_has_w_monthLong = false;

    if (m_w_monthLong)
    {
        delete m_w_monthLong;
        m_w_monthLong = NULL;
    }
    ;

    m_has_w_yearLong = false;

    if (m_w_yearLong)
    {
        delete m_w_yearLong;
        m_w_yearLong = NULL;
    }
    ;

    m_has_w_annotationRef = false;

    if (m_w_annotationRef)
    {
        delete m_w_annotationRef;
        m_w_annotationRef = NULL;
    }
    ;

    m_has_w_footnoteRef = false;

    if (m_w_footnoteRef)
    {
        delete m_w_footnoteRef;
        m_w_footnoteRef = NULL;
    }
    ;

    m_has_w_endnoteRef = false;

    if (m_w_endnoteRef)
    {
        delete m_w_endnoteRef;
        m_w_endnoteRef = NULL;
    }
    ;

    m_has_w_separator = false;

    if (m_w_separator)
    {
        delete m_w_separator;
        m_w_separator = NULL;
    }
    ;

    m_has_w_continuationSeparator = false;

    if (m_w_continuationSeparator)
    {
        delete m_w_continuationSeparator;
        m_w_continuationSeparator = NULL;
    }
    ;

    m_has_w_sym = false;

    if (m_w_sym)
    {
        delete m_w_sym;
        m_w_sym = NULL;
    }
    ;

    m_has_w_pgNum = false;

    if (m_w_pgNum)
    {
        delete m_w_pgNum;
        m_w_pgNum = NULL;
    }
    ;

    m_has_w_cr = false;

    if (m_w_cr)
    {
        delete m_w_cr;
        m_w_cr = NULL;
    }
    ;

    m_has_w_tab = false;

    if (m_w_tab)
    {
        delete m_w_tab;
        m_w_tab = NULL;
    }
    ;

    m_has_w_object = false;

    if (m_w_object)
    {
        delete m_w_object;
        m_w_object = NULL;
    }
    ;

    m_has_w_pict = false;

    if (m_w_pict)
    {
        delete m_w_pict;
        m_w_pict = NULL;
    }
    ;

    m_has_w_fldChar = false;

    if (m_w_fldChar)
    {
        delete m_w_fldChar;
        m_w_fldChar = NULL;
    }
    ;

    m_has_w_ruby = false;

    if (m_w_ruby)
    {
        delete m_w_ruby;
        m_w_ruby = NULL;
    }
    ;

    m_has_w_footnoteReference = false;

    if (m_w_footnoteReference)
    {
        delete m_w_footnoteReference;
        m_w_footnoteReference = NULL;
    }
    ;

    m_has_w_commentReference = false;

    if (m_w_commentReference)
    {
        delete m_w_commentReference;
        m_w_commentReference = NULL;
    }
    ;

    m_has_w_drawing = false;

    if (m_w_drawing)
    {
        delete m_w_drawing;
        m_w_drawing = NULL;
    }
    ;

    m_has_w_ptab = false;

    if (m_w_ptab)
    {
        delete m_w_ptab;
        m_w_ptab = NULL;
    }
    ;

    m_has_w_lastRenderedPageBreak = false;

    if (m_w_lastRenderedPageBreak)
    {
        delete m_w_lastRenderedPageBreak;
        m_w_lastRenderedPageBreak = NULL;
    }
    ;

    m_has_w_endnoteReference = true;
    if (!m_w_endnoteReference)
    {
        m_w_endnoteReference = new ns_w::CT_FtnEdnRef();
    }
    return m_w_endnoteReference;
}

const ns_w::CT_FtnEdnRef& CT_R::ChildGroup_1::get_w_endnoteReference() const
{
    if (m_w_endnoteReference)
    {
        return *m_w_endnoteReference;
    }
    return ns_w::CT_FtnEdnRef::default_instance();
}

bool CT_R::ChildGroup_1::has_w_commentReference() const
{
    return m_has_w_commentReference;
}

ns_w::CT_Markup* CT_R::ChildGroup_1::mutable_w_commentReference()
{

    m_has_w_br = false;

    if (m_w_br)
    {
        delete m_w_br;
        m_w_br = NULL;
    }
    ;

    m_has_w_t = false;

    if (m_w_t)
    {
        delete m_w_t;
        m_w_t = NULL;
    }
    ;

    m_has_w_contentPart = false;

    if (m_w_contentPart)
    {
        delete m_w_contentPart;
        m_w_contentPart = NULL;
    }
    ;

    m_has_w_delText = false;

    if (m_w_delText)
    {
        delete m_w_delText;
        m_w_delText = NULL;
    }
    ;

    m_has_w_instrText = false;

    if (m_w_instrText)
    {
        delete m_w_instrText;
        m_w_instrText = NULL;
    }
    ;

    m_has_w_delInstrText = false;

    if (m_w_delInstrText)
    {
        delete m_w_delInstrText;
        m_w_delInstrText = NULL;
    }
    ;

    m_has_w_noBreakHyphen = false;

    if (m_w_noBreakHyphen)
    {
        delete m_w_noBreakHyphen;
        m_w_noBreakHyphen = NULL;
    }
    ;

    m_has_w_softHyphen = false;

    if (m_w_softHyphen)
    {
        delete m_w_softHyphen;
        m_w_softHyphen = NULL;
    }
    ;

    m_has_w_dayShort = false;

    if (m_w_dayShort)
    {
        delete m_w_dayShort;
        m_w_dayShort = NULL;
    }
    ;

    m_has_w_monthShort = false;

    if (m_w_monthShort)
    {
        delete m_w_monthShort;
        m_w_monthShort = NULL;
    }
    ;

    m_has_w_yearShort = false;

    if (m_w_yearShort)
    {
        delete m_w_yearShort;
        m_w_yearShort = NULL;
    }
    ;

    m_has_w_dayLong = false;

    if (m_w_dayLong)
    {
        delete m_w_dayLong;
        m_w_dayLong = NULL;
    }
    ;

    m_has_w_monthLong = false;

    if (m_w_monthLong)
    {
        delete m_w_monthLong;
        m_w_monthLong = NULL;
    }
    ;

    m_has_w_yearLong = false;

    if (m_w_yearLong)
    {
        delete m_w_yearLong;
        m_w_yearLong = NULL;
    }
    ;

    m_has_w_annotationRef = false;

    if (m_w_annotationRef)
    {
        delete m_w_annotationRef;
        m_w_annotationRef = NULL;
    }
    ;

    m_has_w_footnoteRef = false;

    if (m_w_footnoteRef)
    {
        delete m_w_footnoteRef;
        m_w_footnoteRef = NULL;
    }
    ;

    m_has_w_endnoteRef = false;

    if (m_w_endnoteRef)
    {
        delete m_w_endnoteRef;
        m_w_endnoteRef = NULL;
    }
    ;

    m_has_w_separator = false;

    if (m_w_separator)
    {
        delete m_w_separator;
        m_w_separator = NULL;
    }
    ;

    m_has_w_continuationSeparator = false;

    if (m_w_continuationSeparator)
    {
        delete m_w_continuationSeparator;
        m_w_continuationSeparator = NULL;
    }
    ;

    m_has_w_sym = false;

    if (m_w_sym)
    {
        delete m_w_sym;
        m_w_sym = NULL;
    }
    ;

    m_has_w_pgNum = false;

    if (m_w_pgNum)
    {
        delete m_w_pgNum;
        m_w_pgNum = NULL;
    }
    ;

    m_has_w_cr = false;

    if (m_w_cr)
    {
        delete m_w_cr;
        m_w_cr = NULL;
    }
    ;

    m_has_w_tab = false;

    if (m_w_tab)
    {
        delete m_w_tab;
        m_w_tab = NULL;
    }
    ;

    m_has_w_object = false;

    if (m_w_object)
    {
        delete m_w_object;
        m_w_object = NULL;
    }
    ;

    m_has_w_pict = false;

    if (m_w_pict)
    {
        delete m_w_pict;
        m_w_pict = NULL;
    }
    ;

    m_has_w_fldChar = false;

    if (m_w_fldChar)
    {
        delete m_w_fldChar;
        m_w_fldChar = NULL;
    }
    ;

    m_has_w_ruby = false;

    if (m_w_ruby)
    {
        delete m_w_ruby;
        m_w_ruby = NULL;
    }
    ;

    m_has_w_footnoteReference = false;

    if (m_w_footnoteReference)
    {
        delete m_w_footnoteReference;
        m_w_footnoteReference = NULL;
    }
    ;

    m_has_w_endnoteReference = false;

    if (m_w_endnoteReference)
    {
        delete m_w_endnoteReference;
        m_w_endnoteReference = NULL;
    }
    ;

    m_has_w_drawing = false;

    if (m_w_drawing)
    {
        delete m_w_drawing;
        m_w_drawing = NULL;
    }
    ;

    m_has_w_ptab = false;

    if (m_w_ptab)
    {
        delete m_w_ptab;
        m_w_ptab = NULL;
    }
    ;

    m_has_w_lastRenderedPageBreak = false;

    if (m_w_lastRenderedPageBreak)
    {
        delete m_w_lastRenderedPageBreak;
        m_w_lastRenderedPageBreak = NULL;
    }
    ;

    m_has_w_commentReference = true;
    if (!m_w_commentReference)
    {
        m_w_commentReference = new ns_w::CT_Markup();
    }
    return m_w_commentReference;
}

const ns_w::CT_Markup& CT_R::ChildGroup_1::get_w_commentReference() const
{
    if (m_w_commentReference)
    {
        return *m_w_commentReference;
    }
    return ns_w::CT_Markup::default_instance();
}

bool CT_R::ChildGroup_1::has_w_drawing() const
{
    return m_has_w_drawing;
}

ns_w::CT_Drawing* CT_R::ChildGroup_1::mutable_w_drawing()
{

    m_has_w_br = false;

    if (m_w_br)
    {
        delete m_w_br;
        m_w_br = NULL;
    }
    ;

    m_has_w_t = false;

    if (m_w_t)
    {
        delete m_w_t;
        m_w_t = NULL;
    }
    ;

    m_has_w_contentPart = false;

    if (m_w_contentPart)
    {
        delete m_w_contentPart;
        m_w_contentPart = NULL;
    }
    ;

    m_has_w_delText = false;

    if (m_w_delText)
    {
        delete m_w_delText;
        m_w_delText = NULL;
    }
    ;

    m_has_w_instrText = false;

    if (m_w_instrText)
    {
        delete m_w_instrText;
        m_w_instrText = NULL;
    }
    ;

    m_has_w_delInstrText = false;

    if (m_w_delInstrText)
    {
        delete m_w_delInstrText;
        m_w_delInstrText = NULL;
    }
    ;

    m_has_w_noBreakHyphen = false;

    if (m_w_noBreakHyphen)
    {
        delete m_w_noBreakHyphen;
        m_w_noBreakHyphen = NULL;
    }
    ;

    m_has_w_softHyphen = false;

    if (m_w_softHyphen)
    {
        delete m_w_softHyphen;
        m_w_softHyphen = NULL;
    }
    ;

    m_has_w_dayShort = false;

    if (m_w_dayShort)
    {
        delete m_w_dayShort;
        m_w_dayShort = NULL;
    }
    ;

    m_has_w_monthShort = false;

    if (m_w_monthShort)
    {
        delete m_w_monthShort;
        m_w_monthShort = NULL;
    }
    ;

    m_has_w_yearShort = false;

    if (m_w_yearShort)
    {
        delete m_w_yearShort;
        m_w_yearShort = NULL;
    }
    ;

    m_has_w_dayLong = false;

    if (m_w_dayLong)
    {
        delete m_w_dayLong;
        m_w_dayLong = NULL;
    }
    ;

    m_has_w_monthLong = false;

    if (m_w_monthLong)
    {
        delete m_w_monthLong;
        m_w_monthLong = NULL;
    }
    ;

    m_has_w_yearLong = false;

    if (m_w_yearLong)
    {
        delete m_w_yearLong;
        m_w_yearLong = NULL;
    }
    ;

    m_has_w_annotationRef = false;

    if (m_w_annotationRef)
    {
        delete m_w_annotationRef;
        m_w_annotationRef = NULL;
    }
    ;

    m_has_w_footnoteRef = false;

    if (m_w_footnoteRef)
    {
        delete m_w_footnoteRef;
        m_w_footnoteRef = NULL;
    }
    ;

    m_has_w_endnoteRef = false;

    if (m_w_endnoteRef)
    {
        delete m_w_endnoteRef;
        m_w_endnoteRef = NULL;
    }
    ;

    m_has_w_separator = false;

    if (m_w_separator)
    {
        delete m_w_separator;
        m_w_separator = NULL;
    }
    ;

    m_has_w_continuationSeparator = false;

    if (m_w_continuationSeparator)
    {
        delete m_w_continuationSeparator;
        m_w_continuationSeparator = NULL;
    }
    ;

    m_has_w_sym = false;

    if (m_w_sym)
    {
        delete m_w_sym;
        m_w_sym = NULL;
    }
    ;

    m_has_w_pgNum = false;

    if (m_w_pgNum)
    {
        delete m_w_pgNum;
        m_w_pgNum = NULL;
    }
    ;

    m_has_w_cr = false;

    if (m_w_cr)
    {
        delete m_w_cr;
        m_w_cr = NULL;
    }
    ;

    m_has_w_tab = false;

    if (m_w_tab)
    {
        delete m_w_tab;
        m_w_tab = NULL;
    }
    ;

    m_has_w_object = false;

    if (m_w_object)
    {
        delete m_w_object;
        m_w_object = NULL;
    }
    ;

    m_has_w_pict = false;

    if (m_w_pict)
    {
        delete m_w_pict;
        m_w_pict = NULL;
    }
    ;

    m_has_w_fldChar = false;

    if (m_w_fldChar)
    {
        delete m_w_fldChar;
        m_w_fldChar = NULL;
    }
    ;

    m_has_w_ruby = false;

    if (m_w_ruby)
    {
        delete m_w_ruby;
        m_w_ruby = NULL;
    }
    ;

    m_has_w_footnoteReference = false;

    if (m_w_footnoteReference)
    {
        delete m_w_footnoteReference;
        m_w_footnoteReference = NULL;
    }
    ;

    m_has_w_endnoteReference = false;

    if (m_w_endnoteReference)
    {
        delete m_w_endnoteReference;
        m_w_endnoteReference = NULL;
    }
    ;

    m_has_w_commentReference = false;

    if (m_w_commentReference)
    {
        delete m_w_commentReference;
        m_w_commentReference = NULL;
    }
    ;

    m_has_w_ptab = false;

    if (m_w_ptab)
    {
        delete m_w_ptab;
        m_w_ptab = NULL;
    }
    ;

    m_has_w_lastRenderedPageBreak = false;

    if (m_w_lastRenderedPageBreak)
    {
        delete m_w_lastRenderedPageBreak;
        m_w_lastRenderedPageBreak = NULL;
    }
    ;

    m_has_w_drawing = true;
    if (!m_w_drawing)
    {
        m_w_drawing = new ns_w::CT_Drawing();
    }
    return m_w_drawing;
}

const ns_w::CT_Drawing& CT_R::ChildGroup_1::get_w_drawing() const
{
    if (m_w_drawing)
    {
        return *m_w_drawing;
    }
    return ns_w::CT_Drawing::default_instance();
}

bool CT_R::ChildGroup_1::has_w_ptab() const
{
    return m_has_w_ptab;
}

ns_w::CT_PTab* CT_R::ChildGroup_1::mutable_w_ptab()
{

    m_has_w_br = false;

    if (m_w_br)
    {
        delete m_w_br;
        m_w_br = NULL;
    }
    ;

    m_has_w_t = false;

    if (m_w_t)
    {
        delete m_w_t;
        m_w_t = NULL;
    }
    ;

    m_has_w_contentPart = false;

    if (m_w_contentPart)
    {
        delete m_w_contentPart;
        m_w_contentPart = NULL;
    }
    ;

    m_has_w_delText = false;

    if (m_w_delText)
    {
        delete m_w_delText;
        m_w_delText = NULL;
    }
    ;

    m_has_w_instrText = false;

    if (m_w_instrText)
    {
        delete m_w_instrText;
        m_w_instrText = NULL;
    }
    ;

    m_has_w_delInstrText = false;

    if (m_w_delInstrText)
    {
        delete m_w_delInstrText;
        m_w_delInstrText = NULL;
    }
    ;

    m_has_w_noBreakHyphen = false;

    if (m_w_noBreakHyphen)
    {
        delete m_w_noBreakHyphen;
        m_w_noBreakHyphen = NULL;
    }
    ;

    m_has_w_softHyphen = false;

    if (m_w_softHyphen)
    {
        delete m_w_softHyphen;
        m_w_softHyphen = NULL;
    }
    ;

    m_has_w_dayShort = false;

    if (m_w_dayShort)
    {
        delete m_w_dayShort;
        m_w_dayShort = NULL;
    }
    ;

    m_has_w_monthShort = false;

    if (m_w_monthShort)
    {
        delete m_w_monthShort;
        m_w_monthShort = NULL;
    }
    ;

    m_has_w_yearShort = false;

    if (m_w_yearShort)
    {
        delete m_w_yearShort;
        m_w_yearShort = NULL;
    }
    ;

    m_has_w_dayLong = false;

    if (m_w_dayLong)
    {
        delete m_w_dayLong;
        m_w_dayLong = NULL;
    }
    ;

    m_has_w_monthLong = false;

    if (m_w_monthLong)
    {
        delete m_w_monthLong;
        m_w_monthLong = NULL;
    }
    ;

    m_has_w_yearLong = false;

    if (m_w_yearLong)
    {
        delete m_w_yearLong;
        m_w_yearLong = NULL;
    }
    ;

    m_has_w_annotationRef = false;

    if (m_w_annotationRef)
    {
        delete m_w_annotationRef;
        m_w_annotationRef = NULL;
    }
    ;

    m_has_w_footnoteRef = false;

    if (m_w_footnoteRef)
    {
        delete m_w_footnoteRef;
        m_w_footnoteRef = NULL;
    }
    ;

    m_has_w_endnoteRef = false;

    if (m_w_endnoteRef)
    {
        delete m_w_endnoteRef;
        m_w_endnoteRef = NULL;
    }
    ;

    m_has_w_separator = false;

    if (m_w_separator)
    {
        delete m_w_separator;
        m_w_separator = NULL;
    }
    ;

    m_has_w_continuationSeparator = false;

    if (m_w_continuationSeparator)
    {
        delete m_w_continuationSeparator;
        m_w_continuationSeparator = NULL;
    }
    ;

    m_has_w_sym = false;

    if (m_w_sym)
    {
        delete m_w_sym;
        m_w_sym = NULL;
    }
    ;

    m_has_w_pgNum = false;

    if (m_w_pgNum)
    {
        delete m_w_pgNum;
        m_w_pgNum = NULL;
    }
    ;

    m_has_w_cr = false;

    if (m_w_cr)
    {
        delete m_w_cr;
        m_w_cr = NULL;
    }
    ;

    m_has_w_tab = false;

    if (m_w_tab)
    {
        delete m_w_tab;
        m_w_tab = NULL;
    }
    ;

    m_has_w_object = false;

    if (m_w_object)
    {
        delete m_w_object;
        m_w_object = NULL;
    }
    ;

    m_has_w_pict = false;

    if (m_w_pict)
    {
        delete m_w_pict;
        m_w_pict = NULL;
    }
    ;

    m_has_w_fldChar = false;

    if (m_w_fldChar)
    {
        delete m_w_fldChar;
        m_w_fldChar = NULL;
    }
    ;

    m_has_w_ruby = false;

    if (m_w_ruby)
    {
        delete m_w_ruby;
        m_w_ruby = NULL;
    }
    ;

    m_has_w_footnoteReference = false;

    if (m_w_footnoteReference)
    {
        delete m_w_footnoteReference;
        m_w_footnoteReference = NULL;
    }
    ;

    m_has_w_endnoteReference = false;

    if (m_w_endnoteReference)
    {
        delete m_w_endnoteReference;
        m_w_endnoteReference = NULL;
    }
    ;

    m_has_w_commentReference = false;

    if (m_w_commentReference)
    {
        delete m_w_commentReference;
        m_w_commentReference = NULL;
    }
    ;

    m_has_w_drawing = false;

    if (m_w_drawing)
    {
        delete m_w_drawing;
        m_w_drawing = NULL;
    }
    ;

    m_has_w_lastRenderedPageBreak = false;

    if (m_w_lastRenderedPageBreak)
    {
        delete m_w_lastRenderedPageBreak;
        m_w_lastRenderedPageBreak = NULL;
    }
    ;

    m_has_w_ptab = true;
    if (!m_w_ptab)
    {
        m_w_ptab = new ns_w::CT_PTab();
    }
    return m_w_ptab;
}

const ns_w::CT_PTab& CT_R::ChildGroup_1::get_w_ptab() const
{
    if (m_w_ptab)
    {
        return *m_w_ptab;
    }
    return ns_w::CT_PTab::default_instance();
}

bool CT_R::ChildGroup_1::has_w_lastRenderedPageBreak() const
{
    return m_has_w_lastRenderedPageBreak;
}

ns_w::CT_Empty* CT_R::ChildGroup_1::mutable_w_lastRenderedPageBreak()
{

    m_has_w_br = false;

    if (m_w_br)
    {
        delete m_w_br;
        m_w_br = NULL;
    }
    ;

    m_has_w_t = false;

    if (m_w_t)
    {
        delete m_w_t;
        m_w_t = NULL;
    }
    ;

    m_has_w_contentPart = false;

    if (m_w_contentPart)
    {
        delete m_w_contentPart;
        m_w_contentPart = NULL;
    }
    ;

    m_has_w_delText = false;

    if (m_w_delText)
    {
        delete m_w_delText;
        m_w_delText = NULL;
    }
    ;

    m_has_w_instrText = false;

    if (m_w_instrText)
    {
        delete m_w_instrText;
        m_w_instrText = NULL;
    }
    ;

    m_has_w_delInstrText = false;

    if (m_w_delInstrText)
    {
        delete m_w_delInstrText;
        m_w_delInstrText = NULL;
    }
    ;

    m_has_w_noBreakHyphen = false;

    if (m_w_noBreakHyphen)
    {
        delete m_w_noBreakHyphen;
        m_w_noBreakHyphen = NULL;
    }
    ;

    m_has_w_softHyphen = false;

    if (m_w_softHyphen)
    {
        delete m_w_softHyphen;
        m_w_softHyphen = NULL;
    }
    ;

    m_has_w_dayShort = false;

    if (m_w_dayShort)
    {
        delete m_w_dayShort;
        m_w_dayShort = NULL;
    }
    ;

    m_has_w_monthShort = false;

    if (m_w_monthShort)
    {
        delete m_w_monthShort;
        m_w_monthShort = NULL;
    }
    ;

    m_has_w_yearShort = false;

    if (m_w_yearShort)
    {
        delete m_w_yearShort;
        m_w_yearShort = NULL;
    }
    ;

    m_has_w_dayLong = false;

    if (m_w_dayLong)
    {
        delete m_w_dayLong;
        m_w_dayLong = NULL;
    }
    ;

    m_has_w_monthLong = false;

    if (m_w_monthLong)
    {
        delete m_w_monthLong;
        m_w_monthLong = NULL;
    }
    ;

    m_has_w_yearLong = false;

    if (m_w_yearLong)
    {
        delete m_w_yearLong;
        m_w_yearLong = NULL;
    }
    ;

    m_has_w_annotationRef = false;

    if (m_w_annotationRef)
    {
        delete m_w_annotationRef;
        m_w_annotationRef = NULL;
    }
    ;

    m_has_w_footnoteRef = false;

    if (m_w_footnoteRef)
    {
        delete m_w_footnoteRef;
        m_w_footnoteRef = NULL;
    }
    ;

    m_has_w_endnoteRef = false;

    if (m_w_endnoteRef)
    {
        delete m_w_endnoteRef;
        m_w_endnoteRef = NULL;
    }
    ;

    m_has_w_separator = false;

    if (m_w_separator)
    {
        delete m_w_separator;
        m_w_separator = NULL;
    }
    ;

    m_has_w_continuationSeparator = false;

    if (m_w_continuationSeparator)
    {
        delete m_w_continuationSeparator;
        m_w_continuationSeparator = NULL;
    }
    ;

    m_has_w_sym = false;

    if (m_w_sym)
    {
        delete m_w_sym;
        m_w_sym = NULL;
    }
    ;

    m_has_w_pgNum = false;

    if (m_w_pgNum)
    {
        delete m_w_pgNum;
        m_w_pgNum = NULL;
    }
    ;

    m_has_w_cr = false;

    if (m_w_cr)
    {
        delete m_w_cr;
        m_w_cr = NULL;
    }
    ;

    m_has_w_tab = false;

    if (m_w_tab)
    {
        delete m_w_tab;
        m_w_tab = NULL;
    }
    ;

    m_has_w_object = false;

    if (m_w_object)
    {
        delete m_w_object;
        m_w_object = NULL;
    }
    ;

    m_has_w_pict = false;

    if (m_w_pict)
    {
        delete m_w_pict;
        m_w_pict = NULL;
    }
    ;

    m_has_w_fldChar = false;

    if (m_w_fldChar)
    {
        delete m_w_fldChar;
        m_w_fldChar = NULL;
    }
    ;

    m_has_w_ruby = false;

    if (m_w_ruby)
    {
        delete m_w_ruby;
        m_w_ruby = NULL;
    }
    ;

    m_has_w_footnoteReference = false;

    if (m_w_footnoteReference)
    {
        delete m_w_footnoteReference;
        m_w_footnoteReference = NULL;
    }
    ;

    m_has_w_endnoteReference = false;

    if (m_w_endnoteReference)
    {
        delete m_w_endnoteReference;
        m_w_endnoteReference = NULL;
    }
    ;

    m_has_w_commentReference = false;

    if (m_w_commentReference)
    {
        delete m_w_commentReference;
        m_w_commentReference = NULL;
    }
    ;

    m_has_w_drawing = false;

    if (m_w_drawing)
    {
        delete m_w_drawing;
        m_w_drawing = NULL;
    }
    ;

    m_has_w_ptab = false;

    if (m_w_ptab)
    {
        delete m_w_ptab;
        m_w_ptab = NULL;
    }
    ;

    m_has_w_lastRenderedPageBreak = true;
    if (!m_w_lastRenderedPageBreak)
    {
        m_w_lastRenderedPageBreak = new ns_w::CT_Empty();
    }
    return m_w_lastRenderedPageBreak;
}

const ns_w::CT_Empty& CT_R::ChildGroup_1::get_w_lastRenderedPageBreak() const
{
    if (m_w_lastRenderedPageBreak)
    {
        return *m_w_lastRenderedPageBreak;
    }
    return ns_w::CT_Empty::default_instance();
}


// CT_R::ChildGroup_2
CT_R::ChildGroup_2::ChildGroup_2()
    :m_has_t(false),
     m_t(NULL)
{
}
bool CT_R::ChildGroup_2::has_t() const
{
    return m_has_t;
}

CT_Text* CT_R::ChildGroup_2::mutable_t()
{

    m_has_t = true;
    if (!m_t)
    {
        m_t = new CT_Text();
    }
    return m_t;
}

const CT_Text& CT_R::ChildGroup_2::get_t() const
{
    if (m_t)
    {
        return *m_t;
    }
    return CT_Text::default_instance();
}

CT_R* CT_R::default_instance_ = NULL;

// CT_CtrlPr
CT_CtrlPr::CT_CtrlPr()
    :m_has_w_rPr(false),
     m_w_rPr(NULL),
     m_has_w_ins(false),
     m_w_ins(NULL),
     m_has_w_del(false),
     m_w_del(NULL)
{
}
CT_CtrlPr::~CT_CtrlPr()
{
    clear();
}
bool CT_CtrlPr::has_w_rPr() const
{
    return m_has_w_rPr;
}

ns_w::CT_RPr* CT_CtrlPr::mutable_w_rPr()
{

    m_has_w_ins = false;

    if (m_w_ins)
    {
        delete m_w_ins;
        m_w_ins = NULL;
    }
    ;

    m_has_w_del = false;

    if (m_w_del)
    {
        delete m_w_del;
        m_w_del = NULL;
    }
    ;

    m_has_w_rPr = true;
    if (!m_w_rPr)
    {
        m_w_rPr = new ns_w::CT_RPr();
    }
    return m_w_rPr;
}

const ns_w::CT_RPr& CT_CtrlPr::get_w_rPr() const
{
    if (m_w_rPr)
    {
        return *m_w_rPr;
    }
    return ns_w::CT_RPr::default_instance();
}

bool CT_CtrlPr::has_w_ins() const
{
    return m_has_w_ins;
}

ns_w::CT_MathCtrlIns* CT_CtrlPr::mutable_w_ins()
{

    m_has_w_rPr = false;

    if (m_w_rPr)
    {
        delete m_w_rPr;
        m_w_rPr = NULL;
    }
    ;

    m_has_w_del = false;

    if (m_w_del)
    {
        delete m_w_del;
        m_w_del = NULL;
    }
    ;

    m_has_w_ins = true;
    if (!m_w_ins)
    {
        m_w_ins = new ns_w::CT_MathCtrlIns();
    }
    return m_w_ins;
}

const ns_w::CT_MathCtrlIns& CT_CtrlPr::get_w_ins() const
{
    if (m_w_ins)
    {
        return *m_w_ins;
    }
    return ns_w::CT_MathCtrlIns::default_instance();
}

bool CT_CtrlPr::has_w_del() const
{
    return m_has_w_del;
}

ns_w::CT_MathCtrlDel* CT_CtrlPr::mutable_w_del()
{

    m_has_w_rPr = false;

    if (m_w_rPr)
    {
        delete m_w_rPr;
        m_w_rPr = NULL;
    }
    ;

    m_has_w_ins = false;

    if (m_w_ins)
    {
        delete m_w_ins;
        m_w_ins = NULL;
    }
    ;

    m_has_w_del = true;
    if (!m_w_del)
    {
        m_w_del = new ns_w::CT_MathCtrlDel();
    }
    return m_w_del;
}

const ns_w::CT_MathCtrlDel& CT_CtrlPr::get_w_del() const
{
    if (m_w_del)
    {
        return *m_w_del;
    }
    return ns_w::CT_MathCtrlDel::default_instance();
}

void CT_CtrlPr::clear()
{
    m_has_w_rPr = false;

    if (m_w_rPr)
    {
        delete m_w_rPr;
        m_w_rPr = NULL;
    }


    m_has_w_ins = false;

    if (m_w_ins)
    {
        delete m_w_ins;
        m_w_ins = NULL;
    }


    m_has_w_del = false;

    if (m_w_del)
    {
        delete m_w_del;
        m_w_del = NULL;
    }

}

void CT_CtrlPr::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";

    {
        bool elemHasValueList[3] = {m_has_w_rPr, m_has_w_ins, m_has_w_del};
        int cnt = count(elemHasValueList, elemHasValueList + 3, true);
        assert(cnt == 1);
    }


    if (m_has_w_rPr)
    {
        m_w_rPr->toXmlElem("w:rPr", "", _outStream);
    }


    if (m_has_w_ins)
    {
        m_w_ins->toXmlElem("w:ins", "", _outStream);
    }


    if (m_has_w_del)
    {
        m_w_del->toXmlElem("w:del", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_CtrlPr& CT_CtrlPr::default_instance()
{
    if (!CT_CtrlPr::default_instance_)
    {
        CT_CtrlPr::default_instance_ = new CT_CtrlPr();
    }
    return *CT_CtrlPr::default_instance_;
}

CT_CtrlPr* CT_CtrlPr::default_instance_ = NULL;

// CT_AccPr
CT_AccPr::CT_AccPr()
    :m_has_chr(false),
     m_chr(NULL),
     m_has_ctrlPr(false),
     m_ctrlPr(NULL)
{
}
CT_AccPr::~CT_AccPr()
{
    clear();
}
bool CT_AccPr::has_chr() const
{
    return m_has_chr;
}

CT_Char* CT_AccPr::mutable_chr()
{
    m_has_chr = true;
    if (!m_chr)
    {
        m_chr = new CT_Char();
    }
    return m_chr;
}

const CT_Char& CT_AccPr::get_chr() const
{
    if (m_chr)
    {
        return *m_chr;
    }
    return CT_Char::default_instance();
}

bool CT_AccPr::has_ctrlPr() const
{
    return m_has_ctrlPr;
}

CT_CtrlPr* CT_AccPr::mutable_ctrlPr()
{
    m_has_ctrlPr = true;
    if (!m_ctrlPr)
    {
        m_ctrlPr = new CT_CtrlPr();
    }
    return m_ctrlPr;
}

const CT_CtrlPr& CT_AccPr::get_ctrlPr() const
{
    if (m_ctrlPr)
    {
        return *m_ctrlPr;
    }
    return CT_CtrlPr::default_instance();
}

void CT_AccPr::clear()
{
    m_has_chr = false;

    if (m_chr)
    {
        delete m_chr;
        m_chr = NULL;
    }


    m_has_ctrlPr = false;

    if (m_ctrlPr)
    {
        delete m_ctrlPr;
        m_ctrlPr = NULL;
    }

}

void CT_AccPr::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";


    if (m_has_chr)
    {
        m_chr->toXmlElem("m:chr", "", _outStream);
    }


    if (m_has_ctrlPr)
    {
        m_ctrlPr->toXmlElem("m:ctrlPr", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_AccPr& CT_AccPr::default_instance()
{
    if (!CT_AccPr::default_instance_)
    {
        CT_AccPr::default_instance_ = new CT_AccPr();
    }
    return *CT_AccPr::default_instance_;
}

CT_AccPr* CT_AccPr::default_instance_ = NULL;

// CT_Acc
CT_Acc::CT_Acc()
    :m_has_accPr(false),
     m_accPr(NULL),
     m_has_e(false),
     m_e(NULL)
{
}
CT_Acc::~CT_Acc()
{
    clear();
}
bool CT_Acc::has_accPr() const
{
    return m_has_accPr;
}

CT_AccPr* CT_Acc::mutable_accPr()
{
    m_has_accPr = true;
    if (!m_accPr)
    {
        m_accPr = new CT_AccPr();
    }
    return m_accPr;
}

const CT_AccPr& CT_Acc::get_accPr() const
{
    if (m_accPr)
    {
        return *m_accPr;
    }
    return CT_AccPr::default_instance();
}

bool CT_Acc::has_e() const
{
    return m_has_e;
}

CT_OMathArg* CT_Acc::mutable_e()
{
    m_has_e = true;
    if (!m_e)
    {
        m_e = new CT_OMathArg();
    }
    return m_e;
}

const CT_OMathArg& CT_Acc::get_e() const
{
    if (m_e)
    {
        return *m_e;
    }
    return CT_OMathArg::default_instance();
}

void CT_Acc::clear()
{
    m_has_accPr = false;

    if (m_accPr)
    {
        delete m_accPr;
        m_accPr = NULL;
    }


    m_has_e = false;

    if (m_e)
    {
        delete m_e;
        m_e = NULL;
    }

}

void CT_Acc::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";

    assert(m_has_e);


    if (m_has_accPr)
    {
        m_accPr->toXmlElem("m:accPr", "", _outStream);
    }


    if (m_has_e)
    {
        m_e->toXmlElem("m:e", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_Acc& CT_Acc::default_instance()
{
    if (!CT_Acc::default_instance_)
    {
        CT_Acc::default_instance_ = new CT_Acc();
    }
    return *CT_Acc::default_instance_;
}

CT_Acc* CT_Acc::default_instance_ = NULL;

// CT_BarPr
CT_BarPr::CT_BarPr()
    :m_has_pos(false),
     m_pos(NULL),
     m_has_ctrlPr(false),
     m_ctrlPr(NULL)
{
}
CT_BarPr::~CT_BarPr()
{
    clear();
}
bool CT_BarPr::has_pos() const
{
    return m_has_pos;
}

CT_TopBot* CT_BarPr::mutable_pos()
{
    m_has_pos = true;
    if (!m_pos)
    {
        m_pos = new CT_TopBot();
    }
    return m_pos;
}

const CT_TopBot& CT_BarPr::get_pos() const
{
    if (m_pos)
    {
        return *m_pos;
    }
    return CT_TopBot::default_instance();
}

bool CT_BarPr::has_ctrlPr() const
{
    return m_has_ctrlPr;
}

CT_CtrlPr* CT_BarPr::mutable_ctrlPr()
{
    m_has_ctrlPr = true;
    if (!m_ctrlPr)
    {
        m_ctrlPr = new CT_CtrlPr();
    }
    return m_ctrlPr;
}

const CT_CtrlPr& CT_BarPr::get_ctrlPr() const
{
    if (m_ctrlPr)
    {
        return *m_ctrlPr;
    }
    return CT_CtrlPr::default_instance();
}

void CT_BarPr::clear()
{
    m_has_pos = false;

    if (m_pos)
    {
        delete m_pos;
        m_pos = NULL;
    }


    m_has_ctrlPr = false;

    if (m_ctrlPr)
    {
        delete m_ctrlPr;
        m_ctrlPr = NULL;
    }

}

void CT_BarPr::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";


    if (m_has_pos)
    {
        m_pos->toXmlElem("m:pos", "", _outStream);
    }


    if (m_has_ctrlPr)
    {
        m_ctrlPr->toXmlElem("m:ctrlPr", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_BarPr& CT_BarPr::default_instance()
{
    if (!CT_BarPr::default_instance_)
    {
        CT_BarPr::default_instance_ = new CT_BarPr();
    }
    return *CT_BarPr::default_instance_;
}

CT_BarPr* CT_BarPr::default_instance_ = NULL;

// CT_Bar
CT_Bar::CT_Bar()
    :m_has_barPr(false),
     m_barPr(NULL),
     m_has_e(false),
     m_e(NULL)
{
}
CT_Bar::~CT_Bar()
{
    clear();
}
bool CT_Bar::has_barPr() const
{
    return m_has_barPr;
}

CT_BarPr* CT_Bar::mutable_barPr()
{
    m_has_barPr = true;
    if (!m_barPr)
    {
        m_barPr = new CT_BarPr();
    }
    return m_barPr;
}

const CT_BarPr& CT_Bar::get_barPr() const
{
    if (m_barPr)
    {
        return *m_barPr;
    }
    return CT_BarPr::default_instance();
}

bool CT_Bar::has_e() const
{
    return m_has_e;
}

CT_OMathArg* CT_Bar::mutable_e()
{
    m_has_e = true;
    if (!m_e)
    {
        m_e = new CT_OMathArg();
    }
    return m_e;
}

const CT_OMathArg& CT_Bar::get_e() const
{
    if (m_e)
    {
        return *m_e;
    }
    return CT_OMathArg::default_instance();
}

void CT_Bar::clear()
{
    m_has_barPr = false;

    if (m_barPr)
    {
        delete m_barPr;
        m_barPr = NULL;
    }


    m_has_e = false;

    if (m_e)
    {
        delete m_e;
        m_e = NULL;
    }

}

void CT_Bar::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";

    assert(m_has_e);


    if (m_has_barPr)
    {
        m_barPr->toXmlElem("m:barPr", "", _outStream);
    }


    if (m_has_e)
    {
        m_e->toXmlElem("m:e", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_Bar& CT_Bar::default_instance()
{
    if (!CT_Bar::default_instance_)
    {
        CT_Bar::default_instance_ = new CT_Bar();
    }
    return *CT_Bar::default_instance_;
}

CT_Bar* CT_Bar::default_instance_ = NULL;

// CT_BoxPr
CT_BoxPr::CT_BoxPr()
    :m_has_opEmu(false),
     m_opEmu(NULL),
     m_has_noBreak(false),
     m_noBreak(NULL),
     m_has_diff(false),
     m_diff(NULL),
     m_has_brk(false),
     m_brk(NULL),
     m_has_aln(false),
     m_aln(NULL),
     m_has_ctrlPr(false),
     m_ctrlPr(NULL)
{
}
CT_BoxPr::~CT_BoxPr()
{
    clear();
}
bool CT_BoxPr::has_opEmu() const
{
    return m_has_opEmu;
}

CT_OnOff* CT_BoxPr::mutable_opEmu()
{
    m_has_opEmu = true;
    if (!m_opEmu)
    {
        m_opEmu = new CT_OnOff();
    }
    return m_opEmu;
}

const CT_OnOff& CT_BoxPr::get_opEmu() const
{
    if (m_opEmu)
    {
        return *m_opEmu;
    }
    return CT_OnOff::default_instance();
}

bool CT_BoxPr::has_noBreak() const
{
    return m_has_noBreak;
}

CT_OnOff* CT_BoxPr::mutable_noBreak()
{
    m_has_noBreak = true;
    if (!m_noBreak)
    {
        m_noBreak = new CT_OnOff();
    }
    return m_noBreak;
}

const CT_OnOff& CT_BoxPr::get_noBreak() const
{
    if (m_noBreak)
    {
        return *m_noBreak;
    }
    return CT_OnOff::default_instance();
}

bool CT_BoxPr::has_diff() const
{
    return m_has_diff;
}

CT_OnOff* CT_BoxPr::mutable_diff()
{
    m_has_diff = true;
    if (!m_diff)
    {
        m_diff = new CT_OnOff();
    }
    return m_diff;
}

const CT_OnOff& CT_BoxPr::get_diff() const
{
    if (m_diff)
    {
        return *m_diff;
    }
    return CT_OnOff::default_instance();
}

bool CT_BoxPr::has_brk() const
{
    return m_has_brk;
}

CT_ManualBreak* CT_BoxPr::mutable_brk()
{
    m_has_brk = true;
    if (!m_brk)
    {
        m_brk = new CT_ManualBreak();
    }
    return m_brk;
}

const CT_ManualBreak& CT_BoxPr::get_brk() const
{
    if (m_brk)
    {
        return *m_brk;
    }
    return CT_ManualBreak::default_instance();
}

bool CT_BoxPr::has_aln() const
{
    return m_has_aln;
}

CT_OnOff* CT_BoxPr::mutable_aln()
{
    m_has_aln = true;
    if (!m_aln)
    {
        m_aln = new CT_OnOff();
    }
    return m_aln;
}

const CT_OnOff& CT_BoxPr::get_aln() const
{
    if (m_aln)
    {
        return *m_aln;
    }
    return CT_OnOff::default_instance();
}

bool CT_BoxPr::has_ctrlPr() const
{
    return m_has_ctrlPr;
}

CT_CtrlPr* CT_BoxPr::mutable_ctrlPr()
{
    m_has_ctrlPr = true;
    if (!m_ctrlPr)
    {
        m_ctrlPr = new CT_CtrlPr();
    }
    return m_ctrlPr;
}

const CT_CtrlPr& CT_BoxPr::get_ctrlPr() const
{
    if (m_ctrlPr)
    {
        return *m_ctrlPr;
    }
    return CT_CtrlPr::default_instance();
}

void CT_BoxPr::clear()
{
    m_has_opEmu = false;

    if (m_opEmu)
    {
        delete m_opEmu;
        m_opEmu = NULL;
    }


    m_has_noBreak = false;

    if (m_noBreak)
    {
        delete m_noBreak;
        m_noBreak = NULL;
    }


    m_has_diff = false;

    if (m_diff)
    {
        delete m_diff;
        m_diff = NULL;
    }


    m_has_brk = false;

    if (m_brk)
    {
        delete m_brk;
        m_brk = NULL;
    }


    m_has_aln = false;

    if (m_aln)
    {
        delete m_aln;
        m_aln = NULL;
    }


    m_has_ctrlPr = false;

    if (m_ctrlPr)
    {
        delete m_ctrlPr;
        m_ctrlPr = NULL;
    }

}

void CT_BoxPr::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";


    if (m_has_opEmu)
    {
        m_opEmu->toXmlElem("m:opEmu", "", _outStream);
    }


    if (m_has_noBreak)
    {
        m_noBreak->toXmlElem("m:noBreak", "", _outStream);
    }


    if (m_has_diff)
    {
        m_diff->toXmlElem("m:diff", "", _outStream);
    }


    if (m_has_brk)
    {
        m_brk->toXmlElem("m:brk", "", _outStream);
    }


    if (m_has_aln)
    {
        m_aln->toXmlElem("m:aln", "", _outStream);
    }


    if (m_has_ctrlPr)
    {
        m_ctrlPr->toXmlElem("m:ctrlPr", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_BoxPr& CT_BoxPr::default_instance()
{
    if (!CT_BoxPr::default_instance_)
    {
        CT_BoxPr::default_instance_ = new CT_BoxPr();
    }
    return *CT_BoxPr::default_instance_;
}

CT_BoxPr* CT_BoxPr::default_instance_ = NULL;

// CT_Box
CT_Box::CT_Box()
    :m_has_boxPr(false),
     m_boxPr(NULL),
     m_has_e(false),
     m_e(NULL)
{
}
CT_Box::~CT_Box()
{
    clear();
}
bool CT_Box::has_boxPr() const
{
    return m_has_boxPr;
}

CT_BoxPr* CT_Box::mutable_boxPr()
{
    m_has_boxPr = true;
    if (!m_boxPr)
    {
        m_boxPr = new CT_BoxPr();
    }
    return m_boxPr;
}

const CT_BoxPr& CT_Box::get_boxPr() const
{
    if (m_boxPr)
    {
        return *m_boxPr;
    }
    return CT_BoxPr::default_instance();
}

bool CT_Box::has_e() const
{
    return m_has_e;
}

CT_OMathArg* CT_Box::mutable_e()
{
    m_has_e = true;
    if (!m_e)
    {
        m_e = new CT_OMathArg();
    }
    return m_e;
}

const CT_OMathArg& CT_Box::get_e() const
{
    if (m_e)
    {
        return *m_e;
    }
    return CT_OMathArg::default_instance();
}

void CT_Box::clear()
{
    m_has_boxPr = false;

    if (m_boxPr)
    {
        delete m_boxPr;
        m_boxPr = NULL;
    }


    m_has_e = false;

    if (m_e)
    {
        delete m_e;
        m_e = NULL;
    }

}

void CT_Box::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";

    assert(m_has_e);


    if (m_has_boxPr)
    {
        m_boxPr->toXmlElem("m:boxPr", "", _outStream);
    }


    if (m_has_e)
    {
        m_e->toXmlElem("m:e", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_Box& CT_Box::default_instance()
{
    if (!CT_Box::default_instance_)
    {
        CT_Box::default_instance_ = new CT_Box();
    }
    return *CT_Box::default_instance_;
}

CT_Box* CT_Box::default_instance_ = NULL;

// CT_BorderBoxPr
CT_BorderBoxPr::CT_BorderBoxPr()
    :m_has_hideTop(false),
     m_hideTop(NULL),
     m_has_hideBot(false),
     m_hideBot(NULL),
     m_has_hideLeft(false),
     m_hideLeft(NULL),
     m_has_hideRight(false),
     m_hideRight(NULL),
     m_has_strikeH(false),
     m_strikeH(NULL),
     m_has_strikeV(false),
     m_strikeV(NULL),
     m_has_strikeBLTR(false),
     m_strikeBLTR(NULL),
     m_has_strikeTLBR(false),
     m_strikeTLBR(NULL),
     m_has_ctrlPr(false),
     m_ctrlPr(NULL)
{
}
CT_BorderBoxPr::~CT_BorderBoxPr()
{
    clear();
}
bool CT_BorderBoxPr::has_hideTop() const
{
    return m_has_hideTop;
}

CT_OnOff* CT_BorderBoxPr::mutable_hideTop()
{
    m_has_hideTop = true;
    if (!m_hideTop)
    {
        m_hideTop = new CT_OnOff();
    }
    return m_hideTop;
}

const CT_OnOff& CT_BorderBoxPr::get_hideTop() const
{
    if (m_hideTop)
    {
        return *m_hideTop;
    }
    return CT_OnOff::default_instance();
}

bool CT_BorderBoxPr::has_hideBot() const
{
    return m_has_hideBot;
}

CT_OnOff* CT_BorderBoxPr::mutable_hideBot()
{
    m_has_hideBot = true;
    if (!m_hideBot)
    {
        m_hideBot = new CT_OnOff();
    }
    return m_hideBot;
}

const CT_OnOff& CT_BorderBoxPr::get_hideBot() const
{
    if (m_hideBot)
    {
        return *m_hideBot;
    }
    return CT_OnOff::default_instance();
}

bool CT_BorderBoxPr::has_hideLeft() const
{
    return m_has_hideLeft;
}

CT_OnOff* CT_BorderBoxPr::mutable_hideLeft()
{
    m_has_hideLeft = true;
    if (!m_hideLeft)
    {
        m_hideLeft = new CT_OnOff();
    }
    return m_hideLeft;
}

const CT_OnOff& CT_BorderBoxPr::get_hideLeft() const
{
    if (m_hideLeft)
    {
        return *m_hideLeft;
    }
    return CT_OnOff::default_instance();
}

bool CT_BorderBoxPr::has_hideRight() const
{
    return m_has_hideRight;
}

CT_OnOff* CT_BorderBoxPr::mutable_hideRight()
{
    m_has_hideRight = true;
    if (!m_hideRight)
    {
        m_hideRight = new CT_OnOff();
    }
    return m_hideRight;
}

const CT_OnOff& CT_BorderBoxPr::get_hideRight() const
{
    if (m_hideRight)
    {
        return *m_hideRight;
    }
    return CT_OnOff::default_instance();
}

bool CT_BorderBoxPr::has_strikeH() const
{
    return m_has_strikeH;
}

CT_OnOff* CT_BorderBoxPr::mutable_strikeH()
{
    m_has_strikeH = true;
    if (!m_strikeH)
    {
        m_strikeH = new CT_OnOff();
    }
    return m_strikeH;
}

const CT_OnOff& CT_BorderBoxPr::get_strikeH() const
{
    if (m_strikeH)
    {
        return *m_strikeH;
    }
    return CT_OnOff::default_instance();
}

bool CT_BorderBoxPr::has_strikeV() const
{
    return m_has_strikeV;
}

CT_OnOff* CT_BorderBoxPr::mutable_strikeV()
{
    m_has_strikeV = true;
    if (!m_strikeV)
    {
        m_strikeV = new CT_OnOff();
    }
    return m_strikeV;
}

const CT_OnOff& CT_BorderBoxPr::get_strikeV() const
{
    if (m_strikeV)
    {
        return *m_strikeV;
    }
    return CT_OnOff::default_instance();
}

bool CT_BorderBoxPr::has_strikeBLTR() const
{
    return m_has_strikeBLTR;
}

CT_OnOff* CT_BorderBoxPr::mutable_strikeBLTR()
{
    m_has_strikeBLTR = true;
    if (!m_strikeBLTR)
    {
        m_strikeBLTR = new CT_OnOff();
    }
    return m_strikeBLTR;
}

const CT_OnOff& CT_BorderBoxPr::get_strikeBLTR() const
{
    if (m_strikeBLTR)
    {
        return *m_strikeBLTR;
    }
    return CT_OnOff::default_instance();
}

bool CT_BorderBoxPr::has_strikeTLBR() const
{
    return m_has_strikeTLBR;
}

CT_OnOff* CT_BorderBoxPr::mutable_strikeTLBR()
{
    m_has_strikeTLBR = true;
    if (!m_strikeTLBR)
    {
        m_strikeTLBR = new CT_OnOff();
    }
    return m_strikeTLBR;
}

const CT_OnOff& CT_BorderBoxPr::get_strikeTLBR() const
{
    if (m_strikeTLBR)
    {
        return *m_strikeTLBR;
    }
    return CT_OnOff::default_instance();
}

bool CT_BorderBoxPr::has_ctrlPr() const
{
    return m_has_ctrlPr;
}

CT_CtrlPr* CT_BorderBoxPr::mutable_ctrlPr()
{
    m_has_ctrlPr = true;
    if (!m_ctrlPr)
    {
        m_ctrlPr = new CT_CtrlPr();
    }
    return m_ctrlPr;
}

const CT_CtrlPr& CT_BorderBoxPr::get_ctrlPr() const
{
    if (m_ctrlPr)
    {
        return *m_ctrlPr;
    }
    return CT_CtrlPr::default_instance();
}

void CT_BorderBoxPr::clear()
{
    m_has_hideTop = false;

    if (m_hideTop)
    {
        delete m_hideTop;
        m_hideTop = NULL;
    }


    m_has_hideBot = false;

    if (m_hideBot)
    {
        delete m_hideBot;
        m_hideBot = NULL;
    }


    m_has_hideLeft = false;

    if (m_hideLeft)
    {
        delete m_hideLeft;
        m_hideLeft = NULL;
    }


    m_has_hideRight = false;

    if (m_hideRight)
    {
        delete m_hideRight;
        m_hideRight = NULL;
    }


    m_has_strikeH = false;

    if (m_strikeH)
    {
        delete m_strikeH;
        m_strikeH = NULL;
    }


    m_has_strikeV = false;

    if (m_strikeV)
    {
        delete m_strikeV;
        m_strikeV = NULL;
    }


    m_has_strikeBLTR = false;

    if (m_strikeBLTR)
    {
        delete m_strikeBLTR;
        m_strikeBLTR = NULL;
    }


    m_has_strikeTLBR = false;

    if (m_strikeTLBR)
    {
        delete m_strikeTLBR;
        m_strikeTLBR = NULL;
    }


    m_has_ctrlPr = false;

    if (m_ctrlPr)
    {
        delete m_ctrlPr;
        m_ctrlPr = NULL;
    }

}

void CT_BorderBoxPr::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";


    if (m_has_hideTop)
    {
        m_hideTop->toXmlElem("m:hideTop", "", _outStream);
    }


    if (m_has_hideBot)
    {
        m_hideBot->toXmlElem("m:hideBot", "", _outStream);
    }


    if (m_has_hideLeft)
    {
        m_hideLeft->toXmlElem("m:hideLeft", "", _outStream);
    }


    if (m_has_hideRight)
    {
        m_hideRight->toXmlElem("m:hideRight", "", _outStream);
    }


    if (m_has_strikeH)
    {
        m_strikeH->toXmlElem("m:strikeH", "", _outStream);
    }


    if (m_has_strikeV)
    {
        m_strikeV->toXmlElem("m:strikeV", "", _outStream);
    }


    if (m_has_strikeBLTR)
    {
        m_strikeBLTR->toXmlElem("m:strikeBLTR", "", _outStream);
    }


    if (m_has_strikeTLBR)
    {
        m_strikeTLBR->toXmlElem("m:strikeTLBR", "", _outStream);
    }


    if (m_has_ctrlPr)
    {
        m_ctrlPr->toXmlElem("m:ctrlPr", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_BorderBoxPr& CT_BorderBoxPr::default_instance()
{
    if (!CT_BorderBoxPr::default_instance_)
    {
        CT_BorderBoxPr::default_instance_ = new CT_BorderBoxPr();
    }
    return *CT_BorderBoxPr::default_instance_;
}

CT_BorderBoxPr* CT_BorderBoxPr::default_instance_ = NULL;

// CT_BorderBox
CT_BorderBox::CT_BorderBox()
    :m_has_borderBoxPr(false),
     m_borderBoxPr(NULL),
     m_has_e(false),
     m_e(NULL)
{
}
CT_BorderBox::~CT_BorderBox()
{
    clear();
}
bool CT_BorderBox::has_borderBoxPr() const
{
    return m_has_borderBoxPr;
}

CT_BorderBoxPr* CT_BorderBox::mutable_borderBoxPr()
{
    m_has_borderBoxPr = true;
    if (!m_borderBoxPr)
    {
        m_borderBoxPr = new CT_BorderBoxPr();
    }
    return m_borderBoxPr;
}

const CT_BorderBoxPr& CT_BorderBox::get_borderBoxPr() const
{
    if (m_borderBoxPr)
    {
        return *m_borderBoxPr;
    }
    return CT_BorderBoxPr::default_instance();
}

bool CT_BorderBox::has_e() const
{
    return m_has_e;
}

CT_OMathArg* CT_BorderBox::mutable_e()
{
    m_has_e = true;
    if (!m_e)
    {
        m_e = new CT_OMathArg();
    }
    return m_e;
}

const CT_OMathArg& CT_BorderBox::get_e() const
{
    if (m_e)
    {
        return *m_e;
    }
    return CT_OMathArg::default_instance();
}

void CT_BorderBox::clear()
{
    m_has_borderBoxPr = false;

    if (m_borderBoxPr)
    {
        delete m_borderBoxPr;
        m_borderBoxPr = NULL;
    }


    m_has_e = false;

    if (m_e)
    {
        delete m_e;
        m_e = NULL;
    }

}

void CT_BorderBox::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";

    assert(m_has_e);


    if (m_has_borderBoxPr)
    {
        m_borderBoxPr->toXmlElem("m:borderBoxPr", "", _outStream);
    }


    if (m_has_e)
    {
        m_e->toXmlElem("m:e", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_BorderBox& CT_BorderBox::default_instance()
{
    if (!CT_BorderBox::default_instance_)
    {
        CT_BorderBox::default_instance_ = new CT_BorderBox();
    }
    return *CT_BorderBox::default_instance_;
}

CT_BorderBox* CT_BorderBox::default_instance_ = NULL;

// CT_DPr
CT_DPr::CT_DPr()
    :m_has_begChr(false),
     m_begChr(NULL),
     m_has_sepChr(false),
     m_sepChr(NULL),
     m_has_endChr(false),
     m_endChr(NULL),
     m_has_grow(false),
     m_grow(NULL),
     m_has_shp(false),
     m_shp(NULL),
     m_has_ctrlPr(false),
     m_ctrlPr(NULL)
{
}
CT_DPr::~CT_DPr()
{
    clear();
}
bool CT_DPr::has_begChr() const
{
    return m_has_begChr;
}

CT_Char* CT_DPr::mutable_begChr()
{
    m_has_begChr = true;
    if (!m_begChr)
    {
        m_begChr = new CT_Char();
    }
    return m_begChr;
}

const CT_Char& CT_DPr::get_begChr() const
{
    if (m_begChr)
    {
        return *m_begChr;
    }
    return CT_Char::default_instance();
}

bool CT_DPr::has_sepChr() const
{
    return m_has_sepChr;
}

CT_Char* CT_DPr::mutable_sepChr()
{
    m_has_sepChr = true;
    if (!m_sepChr)
    {
        m_sepChr = new CT_Char();
    }
    return m_sepChr;
}

const CT_Char& CT_DPr::get_sepChr() const
{
    if (m_sepChr)
    {
        return *m_sepChr;
    }
    return CT_Char::default_instance();
}

bool CT_DPr::has_endChr() const
{
    return m_has_endChr;
}

CT_Char* CT_DPr::mutable_endChr()
{
    m_has_endChr = true;
    if (!m_endChr)
    {
        m_endChr = new CT_Char();
    }
    return m_endChr;
}

const CT_Char& CT_DPr::get_endChr() const
{
    if (m_endChr)
    {
        return *m_endChr;
    }
    return CT_Char::default_instance();
}

bool CT_DPr::has_grow() const
{
    return m_has_grow;
}

CT_OnOff* CT_DPr::mutable_grow()
{
    m_has_grow = true;
    if (!m_grow)
    {
        m_grow = new CT_OnOff();
    }
    return m_grow;
}

const CT_OnOff& CT_DPr::get_grow() const
{
    if (m_grow)
    {
        return *m_grow;
    }
    return CT_OnOff::default_instance();
}

bool CT_DPr::has_shp() const
{
    return m_has_shp;
}

CT_Shp* CT_DPr::mutable_shp()
{
    m_has_shp = true;
    if (!m_shp)
    {
        m_shp = new CT_Shp();
    }
    return m_shp;
}

const CT_Shp& CT_DPr::get_shp() const
{
    if (m_shp)
    {
        return *m_shp;
    }
    return CT_Shp::default_instance();
}

bool CT_DPr::has_ctrlPr() const
{
    return m_has_ctrlPr;
}

CT_CtrlPr* CT_DPr::mutable_ctrlPr()
{
    m_has_ctrlPr = true;
    if (!m_ctrlPr)
    {
        m_ctrlPr = new CT_CtrlPr();
    }
    return m_ctrlPr;
}

const CT_CtrlPr& CT_DPr::get_ctrlPr() const
{
    if (m_ctrlPr)
    {
        return *m_ctrlPr;
    }
    return CT_CtrlPr::default_instance();
}

void CT_DPr::clear()
{
    m_has_begChr = false;

    if (m_begChr)
    {
        delete m_begChr;
        m_begChr = NULL;
    }


    m_has_sepChr = false;

    if (m_sepChr)
    {
        delete m_sepChr;
        m_sepChr = NULL;
    }


    m_has_endChr = false;

    if (m_endChr)
    {
        delete m_endChr;
        m_endChr = NULL;
    }


    m_has_grow = false;

    if (m_grow)
    {
        delete m_grow;
        m_grow = NULL;
    }


    m_has_shp = false;

    if (m_shp)
    {
        delete m_shp;
        m_shp = NULL;
    }


    m_has_ctrlPr = false;

    if (m_ctrlPr)
    {
        delete m_ctrlPr;
        m_ctrlPr = NULL;
    }

}

void CT_DPr::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";


    if (m_has_begChr)
    {
        m_begChr->toXmlElem("m:begChr", "", _outStream);
    }


    if (m_has_sepChr)
    {
        m_sepChr->toXmlElem("m:sepChr", "", _outStream);
    }


    if (m_has_endChr)
    {
        m_endChr->toXmlElem("m:endChr", "", _outStream);
    }


    if (m_has_grow)
    {
        m_grow->toXmlElem("m:grow", "", _outStream);
    }


    if (m_has_shp)
    {
        m_shp->toXmlElem("m:shp", "", _outStream);
    }


    if (m_has_ctrlPr)
    {
        m_ctrlPr->toXmlElem("m:ctrlPr", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_DPr& CT_DPr::default_instance()
{
    if (!CT_DPr::default_instance_)
    {
        CT_DPr::default_instance_ = new CT_DPr();
    }
    return *CT_DPr::default_instance_;
}

CT_DPr* CT_DPr::default_instance_ = NULL;

// CT_D
CT_D::CT_D()
    :m_has_dPr(false),
     m_dPr(NULL)
{
}
CT_D::~CT_D()
{
    clear();
}
bool CT_D::has_dPr() const
{
    return m_has_dPr;
}

CT_DPr* CT_D::mutable_dPr()
{
    m_has_dPr = true;
    if (!m_dPr)
    {
        m_dPr = new CT_DPr();
    }
    return m_dPr;
}

const CT_DPr& CT_D::get_dPr() const
{
    if (m_dPr)
    {
        return *m_dPr;
    }
    return CT_DPr::default_instance();
}

CT_OMathArg* CT_D::add_e()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_OMathArg* pNewChild = pChildGroup->mutable_e();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

void CT_D::clear()
{
    m_has_dPr = false;

    if (m_dPr)
    {
        delete m_dPr;
        m_dPr = NULL;
    }


    {
        vector<ChildGroup_1*>::iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_1.clear();
    }
}

void CT_D::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";


    if (m_has_dPr)
    {
        m_dPr->toXmlElem("m:dPr", "", _outStream);
    }

    {
        int childSize = count_if(m_childGroupList_1.begin(), m_childGroupList_1.end(), mem_fun(&ChildGroup_1::has_e));
        assert(1 <= childSize);
    }

    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_e())
            {
                (*iter)->get_e().toXmlElem("m:e", "", _outStream);
            }


        }
    }

    _outStream << "</" << _elemName << ">";
}

const CT_D& CT_D::default_instance()
{
    if (!CT_D::default_instance_)
    {
        CT_D::default_instance_ = new CT_D();
    }
    return *CT_D::default_instance_;
}


// CT_D::ChildGroup_1
CT_D::ChildGroup_1::ChildGroup_1()
    :m_has_e(false),
     m_e(NULL)
{
}
bool CT_D::ChildGroup_1::has_e() const
{
    return m_has_e;
}

CT_OMathArg* CT_D::ChildGroup_1::mutable_e()
{

    m_has_e = true;
    if (!m_e)
    {
        m_e = new CT_OMathArg();
    }
    return m_e;
}

const CT_OMathArg& CT_D::ChildGroup_1::get_e() const
{
    if (m_e)
    {
        return *m_e;
    }
    return CT_OMathArg::default_instance();
}

CT_D* CT_D::default_instance_ = NULL;

// CT_EqArrPr
CT_EqArrPr::CT_EqArrPr()
    :m_has_baseJc(false),
     m_baseJc(NULL),
     m_has_maxDist(false),
     m_maxDist(NULL),
     m_has_objDist(false),
     m_objDist(NULL),
     m_has_rSpRule(false),
     m_rSpRule(NULL),
     m_has_rSp(false),
     m_rSp(NULL),
     m_has_ctrlPr(false),
     m_ctrlPr(NULL)
{
}
CT_EqArrPr::~CT_EqArrPr()
{
    clear();
}
bool CT_EqArrPr::has_baseJc() const
{
    return m_has_baseJc;
}

CT_YAlign* CT_EqArrPr::mutable_baseJc()
{
    m_has_baseJc = true;
    if (!m_baseJc)
    {
        m_baseJc = new CT_YAlign();
    }
    return m_baseJc;
}

const CT_YAlign& CT_EqArrPr::get_baseJc() const
{
    if (m_baseJc)
    {
        return *m_baseJc;
    }
    return CT_YAlign::default_instance();
}

bool CT_EqArrPr::has_maxDist() const
{
    return m_has_maxDist;
}

CT_OnOff* CT_EqArrPr::mutable_maxDist()
{
    m_has_maxDist = true;
    if (!m_maxDist)
    {
        m_maxDist = new CT_OnOff();
    }
    return m_maxDist;
}

const CT_OnOff& CT_EqArrPr::get_maxDist() const
{
    if (m_maxDist)
    {
        return *m_maxDist;
    }
    return CT_OnOff::default_instance();
}

bool CT_EqArrPr::has_objDist() const
{
    return m_has_objDist;
}

CT_OnOff* CT_EqArrPr::mutable_objDist()
{
    m_has_objDist = true;
    if (!m_objDist)
    {
        m_objDist = new CT_OnOff();
    }
    return m_objDist;
}

const CT_OnOff& CT_EqArrPr::get_objDist() const
{
    if (m_objDist)
    {
        return *m_objDist;
    }
    return CT_OnOff::default_instance();
}

bool CT_EqArrPr::has_rSpRule() const
{
    return m_has_rSpRule;
}

CT_SpacingRule* CT_EqArrPr::mutable_rSpRule()
{
    m_has_rSpRule = true;
    if (!m_rSpRule)
    {
        m_rSpRule = new CT_SpacingRule();
    }
    return m_rSpRule;
}

const CT_SpacingRule& CT_EqArrPr::get_rSpRule() const
{
    if (m_rSpRule)
    {
        return *m_rSpRule;
    }
    return CT_SpacingRule::default_instance();
}

bool CT_EqArrPr::has_rSp() const
{
    return m_has_rSp;
}

CT_UnSignedInteger* CT_EqArrPr::mutable_rSp()
{
    m_has_rSp = true;
    if (!m_rSp)
    {
        m_rSp = new CT_UnSignedInteger();
    }
    return m_rSp;
}

const CT_UnSignedInteger& CT_EqArrPr::get_rSp() const
{
    if (m_rSp)
    {
        return *m_rSp;
    }
    return CT_UnSignedInteger::default_instance();
}

bool CT_EqArrPr::has_ctrlPr() const
{
    return m_has_ctrlPr;
}

CT_CtrlPr* CT_EqArrPr::mutable_ctrlPr()
{
    m_has_ctrlPr = true;
    if (!m_ctrlPr)
    {
        m_ctrlPr = new CT_CtrlPr();
    }
    return m_ctrlPr;
}

const CT_CtrlPr& CT_EqArrPr::get_ctrlPr() const
{
    if (m_ctrlPr)
    {
        return *m_ctrlPr;
    }
    return CT_CtrlPr::default_instance();
}

void CT_EqArrPr::clear()
{
    m_has_baseJc = false;

    if (m_baseJc)
    {
        delete m_baseJc;
        m_baseJc = NULL;
    }


    m_has_maxDist = false;

    if (m_maxDist)
    {
        delete m_maxDist;
        m_maxDist = NULL;
    }


    m_has_objDist = false;

    if (m_objDist)
    {
        delete m_objDist;
        m_objDist = NULL;
    }


    m_has_rSpRule = false;

    if (m_rSpRule)
    {
        delete m_rSpRule;
        m_rSpRule = NULL;
    }


    m_has_rSp = false;

    if (m_rSp)
    {
        delete m_rSp;
        m_rSp = NULL;
    }


    m_has_ctrlPr = false;

    if (m_ctrlPr)
    {
        delete m_ctrlPr;
        m_ctrlPr = NULL;
    }

}

void CT_EqArrPr::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";


    if (m_has_baseJc)
    {
        m_baseJc->toXmlElem("m:baseJc", "", _outStream);
    }


    if (m_has_maxDist)
    {
        m_maxDist->toXmlElem("m:maxDist", "", _outStream);
    }


    if (m_has_objDist)
    {
        m_objDist->toXmlElem("m:objDist", "", _outStream);
    }


    if (m_has_rSpRule)
    {
        m_rSpRule->toXmlElem("m:rSpRule", "", _outStream);
    }


    if (m_has_rSp)
    {
        m_rSp->toXmlElem("m:rSp", "", _outStream);
    }


    if (m_has_ctrlPr)
    {
        m_ctrlPr->toXmlElem("m:ctrlPr", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_EqArrPr& CT_EqArrPr::default_instance()
{
    if (!CT_EqArrPr::default_instance_)
    {
        CT_EqArrPr::default_instance_ = new CT_EqArrPr();
    }
    return *CT_EqArrPr::default_instance_;
}

CT_EqArrPr* CT_EqArrPr::default_instance_ = NULL;

// CT_EqArr
CT_EqArr::CT_EqArr()
    :m_has_eqArrPr(false),
     m_eqArrPr(NULL)
{
}
CT_EqArr::~CT_EqArr()
{
    clear();
}
bool CT_EqArr::has_eqArrPr() const
{
    return m_has_eqArrPr;
}

CT_EqArrPr* CT_EqArr::mutable_eqArrPr()
{
    m_has_eqArrPr = true;
    if (!m_eqArrPr)
    {
        m_eqArrPr = new CT_EqArrPr();
    }
    return m_eqArrPr;
}

const CT_EqArrPr& CT_EqArr::get_eqArrPr() const
{
    if (m_eqArrPr)
    {
        return *m_eqArrPr;
    }
    return CT_EqArrPr::default_instance();
}

CT_OMathArg* CT_EqArr::add_e()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_OMathArg* pNewChild = pChildGroup->mutable_e();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

void CT_EqArr::clear()
{
    m_has_eqArrPr = false;

    if (m_eqArrPr)
    {
        delete m_eqArrPr;
        m_eqArrPr = NULL;
    }


    {
        vector<ChildGroup_1*>::iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_1.clear();
    }
}

void CT_EqArr::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";


    if (m_has_eqArrPr)
    {
        m_eqArrPr->toXmlElem("m:eqArrPr", "", _outStream);
    }

    {
        int childSize = count_if(m_childGroupList_1.begin(), m_childGroupList_1.end(), mem_fun(&ChildGroup_1::has_e));
        assert(1 <= childSize);
    }

    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_e())
            {
                (*iter)->get_e().toXmlElem("m:e", "", _outStream);
            }


        }
    }

    _outStream << "</" << _elemName << ">";
}

const CT_EqArr& CT_EqArr::default_instance()
{
    if (!CT_EqArr::default_instance_)
    {
        CT_EqArr::default_instance_ = new CT_EqArr();
    }
    return *CT_EqArr::default_instance_;
}


// CT_EqArr::ChildGroup_1
CT_EqArr::ChildGroup_1::ChildGroup_1()
    :m_has_e(false),
     m_e(NULL)
{
}
bool CT_EqArr::ChildGroup_1::has_e() const
{
    return m_has_e;
}

CT_OMathArg* CT_EqArr::ChildGroup_1::mutable_e()
{

    m_has_e = true;
    if (!m_e)
    {
        m_e = new CT_OMathArg();
    }
    return m_e;
}

const CT_OMathArg& CT_EqArr::ChildGroup_1::get_e() const
{
    if (m_e)
    {
        return *m_e;
    }
    return CT_OMathArg::default_instance();
}

CT_EqArr* CT_EqArr::default_instance_ = NULL;

// CT_FPr
CT_FPr::CT_FPr()
    :m_has_type(false),
     m_type(NULL),
     m_has_ctrlPr(false),
     m_ctrlPr(NULL)
{
}
CT_FPr::~CT_FPr()
{
    clear();
}
bool CT_FPr::has_type() const
{
    return m_has_type;
}

CT_FType* CT_FPr::mutable_type()
{
    m_has_type = true;
    if (!m_type)
    {
        m_type = new CT_FType();
    }
    return m_type;
}

const CT_FType& CT_FPr::get_type() const
{
    if (m_type)
    {
        return *m_type;
    }
    return CT_FType::default_instance();
}

bool CT_FPr::has_ctrlPr() const
{
    return m_has_ctrlPr;
}

CT_CtrlPr* CT_FPr::mutable_ctrlPr()
{
    m_has_ctrlPr = true;
    if (!m_ctrlPr)
    {
        m_ctrlPr = new CT_CtrlPr();
    }
    return m_ctrlPr;
}

const CT_CtrlPr& CT_FPr::get_ctrlPr() const
{
    if (m_ctrlPr)
    {
        return *m_ctrlPr;
    }
    return CT_CtrlPr::default_instance();
}

void CT_FPr::clear()
{
    m_has_type = false;

    if (m_type)
    {
        delete m_type;
        m_type = NULL;
    }


    m_has_ctrlPr = false;

    if (m_ctrlPr)
    {
        delete m_ctrlPr;
        m_ctrlPr = NULL;
    }

}

void CT_FPr::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";


    if (m_has_type)
    {
        m_type->toXmlElem("m:type", "", _outStream);
    }


    if (m_has_ctrlPr)
    {
        m_ctrlPr->toXmlElem("m:ctrlPr", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_FPr& CT_FPr::default_instance()
{
    if (!CT_FPr::default_instance_)
    {
        CT_FPr::default_instance_ = new CT_FPr();
    }
    return *CT_FPr::default_instance_;
}

CT_FPr* CT_FPr::default_instance_ = NULL;

// CT_F
CT_F::CT_F()
    :m_has_fPr(false),
     m_fPr(NULL),
     m_has_num(false),
     m_num(NULL),
     m_has_den(false),
     m_den(NULL)
{
}
CT_F::~CT_F()
{
    clear();
}
bool CT_F::has_fPr() const
{
    return m_has_fPr;
}

CT_FPr* CT_F::mutable_fPr()
{
    m_has_fPr = true;
    if (!m_fPr)
    {
        m_fPr = new CT_FPr();
    }
    return m_fPr;
}

const CT_FPr& CT_F::get_fPr() const
{
    if (m_fPr)
    {
        return *m_fPr;
    }
    return CT_FPr::default_instance();
}

bool CT_F::has_num() const
{
    return m_has_num;
}

CT_OMathArg* CT_F::mutable_num()
{
    m_has_num = true;
    if (!m_num)
    {
        m_num = new CT_OMathArg();
    }
    return m_num;
}

const CT_OMathArg& CT_F::get_num() const
{
    if (m_num)
    {
        return *m_num;
    }
    return CT_OMathArg::default_instance();
}

bool CT_F::has_den() const
{
    return m_has_den;
}

CT_OMathArg* CT_F::mutable_den()
{
    m_has_den = true;
    if (!m_den)
    {
        m_den = new CT_OMathArg();
    }
    return m_den;
}

const CT_OMathArg& CT_F::get_den() const
{
    if (m_den)
    {
        return *m_den;
    }
    return CT_OMathArg::default_instance();
}

void CT_F::clear()
{
    m_has_fPr = false;

    if (m_fPr)
    {
        delete m_fPr;
        m_fPr = NULL;
    }


    m_has_num = false;

    if (m_num)
    {
        delete m_num;
        m_num = NULL;
    }


    m_has_den = false;

    if (m_den)
    {
        delete m_den;
        m_den = NULL;
    }

}

void CT_F::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";

    assert(m_has_num);


    assert(m_has_den);


    if (m_has_fPr)
    {
        m_fPr->toXmlElem("m:fPr", "", _outStream);
    }


    if (m_has_num)
    {
        m_num->toXmlElem("m:num", "", _outStream);
    }


    if (m_has_den)
    {
        m_den->toXmlElem("m:den", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_F& CT_F::default_instance()
{
    if (!CT_F::default_instance_)
    {
        CT_F::default_instance_ = new CT_F();
    }
    return *CT_F::default_instance_;
}

CT_F* CT_F::default_instance_ = NULL;

// CT_FuncPr
CT_FuncPr::CT_FuncPr()
    :m_has_ctrlPr(false),
     m_ctrlPr(NULL)
{
}
CT_FuncPr::~CT_FuncPr()
{
    clear();
}
bool CT_FuncPr::has_ctrlPr() const
{
    return m_has_ctrlPr;
}

CT_CtrlPr* CT_FuncPr::mutable_ctrlPr()
{
    m_has_ctrlPr = true;
    if (!m_ctrlPr)
    {
        m_ctrlPr = new CT_CtrlPr();
    }
    return m_ctrlPr;
}

const CT_CtrlPr& CT_FuncPr::get_ctrlPr() const
{
    if (m_ctrlPr)
    {
        return *m_ctrlPr;
    }
    return CT_CtrlPr::default_instance();
}

void CT_FuncPr::clear()
{
    m_has_ctrlPr = false;

    if (m_ctrlPr)
    {
        delete m_ctrlPr;
        m_ctrlPr = NULL;
    }

}

void CT_FuncPr::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";


    if (m_has_ctrlPr)
    {
        m_ctrlPr->toXmlElem("m:ctrlPr", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_FuncPr& CT_FuncPr::default_instance()
{
    if (!CT_FuncPr::default_instance_)
    {
        CT_FuncPr::default_instance_ = new CT_FuncPr();
    }
    return *CT_FuncPr::default_instance_;
}

CT_FuncPr* CT_FuncPr::default_instance_ = NULL;

// CT_Func
CT_Func::CT_Func()
    :m_has_funcPr(false),
     m_funcPr(NULL),
     m_has_fName(false),
     m_fName(NULL),
     m_has_e(false),
     m_e(NULL)
{
}
CT_Func::~CT_Func()
{
    clear();
}
bool CT_Func::has_funcPr() const
{
    return m_has_funcPr;
}

CT_FuncPr* CT_Func::mutable_funcPr()
{
    m_has_funcPr = true;
    if (!m_funcPr)
    {
        m_funcPr = new CT_FuncPr();
    }
    return m_funcPr;
}

const CT_FuncPr& CT_Func::get_funcPr() const
{
    if (m_funcPr)
    {
        return *m_funcPr;
    }
    return CT_FuncPr::default_instance();
}

bool CT_Func::has_fName() const
{
    return m_has_fName;
}

CT_OMathArg* CT_Func::mutable_fName()
{
    m_has_fName = true;
    if (!m_fName)
    {
        m_fName = new CT_OMathArg();
    }
    return m_fName;
}

const CT_OMathArg& CT_Func::get_fName() const
{
    if (m_fName)
    {
        return *m_fName;
    }
    return CT_OMathArg::default_instance();
}

bool CT_Func::has_e() const
{
    return m_has_e;
}

CT_OMathArg* CT_Func::mutable_e()
{
    m_has_e = true;
    if (!m_e)
    {
        m_e = new CT_OMathArg();
    }
    return m_e;
}

const CT_OMathArg& CT_Func::get_e() const
{
    if (m_e)
    {
        return *m_e;
    }
    return CT_OMathArg::default_instance();
}

void CT_Func::clear()
{
    m_has_funcPr = false;

    if (m_funcPr)
    {
        delete m_funcPr;
        m_funcPr = NULL;
    }


    m_has_fName = false;

    if (m_fName)
    {
        delete m_fName;
        m_fName = NULL;
    }


    m_has_e = false;

    if (m_e)
    {
        delete m_e;
        m_e = NULL;
    }

}

void CT_Func::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";

    assert(m_has_fName);


    assert(m_has_e);


    if (m_has_funcPr)
    {
        m_funcPr->toXmlElem("m:funcPr", "", _outStream);
    }


    if (m_has_fName)
    {
        m_fName->toXmlElem("m:fName", "", _outStream);
    }


    if (m_has_e)
    {
        m_e->toXmlElem("m:e", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_Func& CT_Func::default_instance()
{
    if (!CT_Func::default_instance_)
    {
        CT_Func::default_instance_ = new CT_Func();
    }
    return *CT_Func::default_instance_;
}

CT_Func* CT_Func::default_instance_ = NULL;

// CT_GroupChrPr
CT_GroupChrPr::CT_GroupChrPr()
    :m_has_chr(false),
     m_chr(NULL),
     m_has_pos(false),
     m_pos(NULL),
     m_has_vertJc(false),
     m_vertJc(NULL),
     m_has_ctrlPr(false),
     m_ctrlPr(NULL)
{
}
CT_GroupChrPr::~CT_GroupChrPr()
{
    clear();
}
bool CT_GroupChrPr::has_chr() const
{
    return m_has_chr;
}

CT_Char* CT_GroupChrPr::mutable_chr()
{
    m_has_chr = true;
    if (!m_chr)
    {
        m_chr = new CT_Char();
    }
    return m_chr;
}

const CT_Char& CT_GroupChrPr::get_chr() const
{
    if (m_chr)
    {
        return *m_chr;
    }
    return CT_Char::default_instance();
}

bool CT_GroupChrPr::has_pos() const
{
    return m_has_pos;
}

CT_TopBot* CT_GroupChrPr::mutable_pos()
{
    m_has_pos = true;
    if (!m_pos)
    {
        m_pos = new CT_TopBot();
    }
    return m_pos;
}

const CT_TopBot& CT_GroupChrPr::get_pos() const
{
    if (m_pos)
    {
        return *m_pos;
    }
    return CT_TopBot::default_instance();
}

bool CT_GroupChrPr::has_vertJc() const
{
    return m_has_vertJc;
}

CT_TopBot* CT_GroupChrPr::mutable_vertJc()
{
    m_has_vertJc = true;
    if (!m_vertJc)
    {
        m_vertJc = new CT_TopBot();
    }
    return m_vertJc;
}

const CT_TopBot& CT_GroupChrPr::get_vertJc() const
{
    if (m_vertJc)
    {
        return *m_vertJc;
    }
    return CT_TopBot::default_instance();
}

bool CT_GroupChrPr::has_ctrlPr() const
{
    return m_has_ctrlPr;
}

CT_CtrlPr* CT_GroupChrPr::mutable_ctrlPr()
{
    m_has_ctrlPr = true;
    if (!m_ctrlPr)
    {
        m_ctrlPr = new CT_CtrlPr();
    }
    return m_ctrlPr;
}

const CT_CtrlPr& CT_GroupChrPr::get_ctrlPr() const
{
    if (m_ctrlPr)
    {
        return *m_ctrlPr;
    }
    return CT_CtrlPr::default_instance();
}

void CT_GroupChrPr::clear()
{
    m_has_chr = false;

    if (m_chr)
    {
        delete m_chr;
        m_chr = NULL;
    }


    m_has_pos = false;

    if (m_pos)
    {
        delete m_pos;
        m_pos = NULL;
    }


    m_has_vertJc = false;

    if (m_vertJc)
    {
        delete m_vertJc;
        m_vertJc = NULL;
    }


    m_has_ctrlPr = false;

    if (m_ctrlPr)
    {
        delete m_ctrlPr;
        m_ctrlPr = NULL;
    }

}

void CT_GroupChrPr::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";


    if (m_has_chr)
    {
        m_chr->toXmlElem("m:chr", "", _outStream);
    }


    if (m_has_pos)
    {
        m_pos->toXmlElem("m:pos", "", _outStream);
    }


    if (m_has_vertJc)
    {
        m_vertJc->toXmlElem("m:vertJc", "", _outStream);
    }


    if (m_has_ctrlPr)
    {
        m_ctrlPr->toXmlElem("m:ctrlPr", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_GroupChrPr& CT_GroupChrPr::default_instance()
{
    if (!CT_GroupChrPr::default_instance_)
    {
        CT_GroupChrPr::default_instance_ = new CT_GroupChrPr();
    }
    return *CT_GroupChrPr::default_instance_;
}

CT_GroupChrPr* CT_GroupChrPr::default_instance_ = NULL;

// CT_GroupChr
CT_GroupChr::CT_GroupChr()
    :m_has_groupChrPr(false),
     m_groupChrPr(NULL),
     m_has_e(false),
     m_e(NULL)
{
}
CT_GroupChr::~CT_GroupChr()
{
    clear();
}
bool CT_GroupChr::has_groupChrPr() const
{
    return m_has_groupChrPr;
}

CT_GroupChrPr* CT_GroupChr::mutable_groupChrPr()
{
    m_has_groupChrPr = true;
    if (!m_groupChrPr)
    {
        m_groupChrPr = new CT_GroupChrPr();
    }
    return m_groupChrPr;
}

const CT_GroupChrPr& CT_GroupChr::get_groupChrPr() const
{
    if (m_groupChrPr)
    {
        return *m_groupChrPr;
    }
    return CT_GroupChrPr::default_instance();
}

bool CT_GroupChr::has_e() const
{
    return m_has_e;
}

CT_OMathArg* CT_GroupChr::mutable_e()
{
    m_has_e = true;
    if (!m_e)
    {
        m_e = new CT_OMathArg();
    }
    return m_e;
}

const CT_OMathArg& CT_GroupChr::get_e() const
{
    if (m_e)
    {
        return *m_e;
    }
    return CT_OMathArg::default_instance();
}

void CT_GroupChr::clear()
{
    m_has_groupChrPr = false;

    if (m_groupChrPr)
    {
        delete m_groupChrPr;
        m_groupChrPr = NULL;
    }


    m_has_e = false;

    if (m_e)
    {
        delete m_e;
        m_e = NULL;
    }

}

void CT_GroupChr::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";

    assert(m_has_e);


    if (m_has_groupChrPr)
    {
        m_groupChrPr->toXmlElem("m:groupChrPr", "", _outStream);
    }


    if (m_has_e)
    {
        m_e->toXmlElem("m:e", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_GroupChr& CT_GroupChr::default_instance()
{
    if (!CT_GroupChr::default_instance_)
    {
        CT_GroupChr::default_instance_ = new CT_GroupChr();
    }
    return *CT_GroupChr::default_instance_;
}

CT_GroupChr* CT_GroupChr::default_instance_ = NULL;

// CT_LimLowPr
CT_LimLowPr::CT_LimLowPr()
    :m_has_ctrlPr(false),
     m_ctrlPr(NULL)
{
}
CT_LimLowPr::~CT_LimLowPr()
{
    clear();
}
bool CT_LimLowPr::has_ctrlPr() const
{
    return m_has_ctrlPr;
}

CT_CtrlPr* CT_LimLowPr::mutable_ctrlPr()
{
    m_has_ctrlPr = true;
    if (!m_ctrlPr)
    {
        m_ctrlPr = new CT_CtrlPr();
    }
    return m_ctrlPr;
}

const CT_CtrlPr& CT_LimLowPr::get_ctrlPr() const
{
    if (m_ctrlPr)
    {
        return *m_ctrlPr;
    }
    return CT_CtrlPr::default_instance();
}

void CT_LimLowPr::clear()
{
    m_has_ctrlPr = false;

    if (m_ctrlPr)
    {
        delete m_ctrlPr;
        m_ctrlPr = NULL;
    }

}

void CT_LimLowPr::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";


    if (m_has_ctrlPr)
    {
        m_ctrlPr->toXmlElem("m:ctrlPr", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_LimLowPr& CT_LimLowPr::default_instance()
{
    if (!CT_LimLowPr::default_instance_)
    {
        CT_LimLowPr::default_instance_ = new CT_LimLowPr();
    }
    return *CT_LimLowPr::default_instance_;
}

CT_LimLowPr* CT_LimLowPr::default_instance_ = NULL;

// CT_LimLow
CT_LimLow::CT_LimLow()
    :m_has_limLowPr(false),
     m_limLowPr(NULL),
     m_has_e(false),
     m_e(NULL),
     m_has_lim(false),
     m_lim(NULL)
{
}
CT_LimLow::~CT_LimLow()
{
    clear();
}
bool CT_LimLow::has_limLowPr() const
{
    return m_has_limLowPr;
}

CT_LimLowPr* CT_LimLow::mutable_limLowPr()
{
    m_has_limLowPr = true;
    if (!m_limLowPr)
    {
        m_limLowPr = new CT_LimLowPr();
    }
    return m_limLowPr;
}

const CT_LimLowPr& CT_LimLow::get_limLowPr() const
{
    if (m_limLowPr)
    {
        return *m_limLowPr;
    }
    return CT_LimLowPr::default_instance();
}

bool CT_LimLow::has_e() const
{
    return m_has_e;
}

CT_OMathArg* CT_LimLow::mutable_e()
{
    m_has_e = true;
    if (!m_e)
    {
        m_e = new CT_OMathArg();
    }
    return m_e;
}

const CT_OMathArg& CT_LimLow::get_e() const
{
    if (m_e)
    {
        return *m_e;
    }
    return CT_OMathArg::default_instance();
}

bool CT_LimLow::has_lim() const
{
    return m_has_lim;
}

CT_OMathArg* CT_LimLow::mutable_lim()
{
    m_has_lim = true;
    if (!m_lim)
    {
        m_lim = new CT_OMathArg();
    }
    return m_lim;
}

const CT_OMathArg& CT_LimLow::get_lim() const
{
    if (m_lim)
    {
        return *m_lim;
    }
    return CT_OMathArg::default_instance();
}

void CT_LimLow::clear()
{
    m_has_limLowPr = false;

    if (m_limLowPr)
    {
        delete m_limLowPr;
        m_limLowPr = NULL;
    }


    m_has_e = false;

    if (m_e)
    {
        delete m_e;
        m_e = NULL;
    }


    m_has_lim = false;

    if (m_lim)
    {
        delete m_lim;
        m_lim = NULL;
    }

}

void CT_LimLow::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";

    assert(m_has_e);


    assert(m_has_lim);


    if (m_has_limLowPr)
    {
        m_limLowPr->toXmlElem("m:limLowPr", "", _outStream);
    }


    if (m_has_e)
    {
        m_e->toXmlElem("m:e", "", _outStream);
    }


    if (m_has_lim)
    {
        m_lim->toXmlElem("m:lim", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_LimLow& CT_LimLow::default_instance()
{
    if (!CT_LimLow::default_instance_)
    {
        CT_LimLow::default_instance_ = new CT_LimLow();
    }
    return *CT_LimLow::default_instance_;
}

CT_LimLow* CT_LimLow::default_instance_ = NULL;

// CT_LimUppPr
CT_LimUppPr::CT_LimUppPr()
    :m_has_ctrlPr(false),
     m_ctrlPr(NULL)
{
}
CT_LimUppPr::~CT_LimUppPr()
{
    clear();
}
bool CT_LimUppPr::has_ctrlPr() const
{
    return m_has_ctrlPr;
}

CT_CtrlPr* CT_LimUppPr::mutable_ctrlPr()
{
    m_has_ctrlPr = true;
    if (!m_ctrlPr)
    {
        m_ctrlPr = new CT_CtrlPr();
    }
    return m_ctrlPr;
}

const CT_CtrlPr& CT_LimUppPr::get_ctrlPr() const
{
    if (m_ctrlPr)
    {
        return *m_ctrlPr;
    }
    return CT_CtrlPr::default_instance();
}

void CT_LimUppPr::clear()
{
    m_has_ctrlPr = false;

    if (m_ctrlPr)
    {
        delete m_ctrlPr;
        m_ctrlPr = NULL;
    }

}

void CT_LimUppPr::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";


    if (m_has_ctrlPr)
    {
        m_ctrlPr->toXmlElem("m:ctrlPr", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_LimUppPr& CT_LimUppPr::default_instance()
{
    if (!CT_LimUppPr::default_instance_)
    {
        CT_LimUppPr::default_instance_ = new CT_LimUppPr();
    }
    return *CT_LimUppPr::default_instance_;
}

CT_LimUppPr* CT_LimUppPr::default_instance_ = NULL;

// CT_LimUpp
CT_LimUpp::CT_LimUpp()
    :m_has_limUppPr(false),
     m_limUppPr(NULL),
     m_has_e(false),
     m_e(NULL),
     m_has_lim(false),
     m_lim(NULL)
{
}
CT_LimUpp::~CT_LimUpp()
{
    clear();
}
bool CT_LimUpp::has_limUppPr() const
{
    return m_has_limUppPr;
}

CT_LimUppPr* CT_LimUpp::mutable_limUppPr()
{
    m_has_limUppPr = true;
    if (!m_limUppPr)
    {
        m_limUppPr = new CT_LimUppPr();
    }
    return m_limUppPr;
}

const CT_LimUppPr& CT_LimUpp::get_limUppPr() const
{
    if (m_limUppPr)
    {
        return *m_limUppPr;
    }
    return CT_LimUppPr::default_instance();
}

bool CT_LimUpp::has_e() const
{
    return m_has_e;
}

CT_OMathArg* CT_LimUpp::mutable_e()
{
    m_has_e = true;
    if (!m_e)
    {
        m_e = new CT_OMathArg();
    }
    return m_e;
}

const CT_OMathArg& CT_LimUpp::get_e() const
{
    if (m_e)
    {
        return *m_e;
    }
    return CT_OMathArg::default_instance();
}

bool CT_LimUpp::has_lim() const
{
    return m_has_lim;
}

CT_OMathArg* CT_LimUpp::mutable_lim()
{
    m_has_lim = true;
    if (!m_lim)
    {
        m_lim = new CT_OMathArg();
    }
    return m_lim;
}

const CT_OMathArg& CT_LimUpp::get_lim() const
{
    if (m_lim)
    {
        return *m_lim;
    }
    return CT_OMathArg::default_instance();
}

void CT_LimUpp::clear()
{
    m_has_limUppPr = false;

    if (m_limUppPr)
    {
        delete m_limUppPr;
        m_limUppPr = NULL;
    }


    m_has_e = false;

    if (m_e)
    {
        delete m_e;
        m_e = NULL;
    }


    m_has_lim = false;

    if (m_lim)
    {
        delete m_lim;
        m_lim = NULL;
    }

}

void CT_LimUpp::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";

    assert(m_has_e);


    assert(m_has_lim);


    if (m_has_limUppPr)
    {
        m_limUppPr->toXmlElem("m:limUppPr", "", _outStream);
    }


    if (m_has_e)
    {
        m_e->toXmlElem("m:e", "", _outStream);
    }


    if (m_has_lim)
    {
        m_lim->toXmlElem("m:lim", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_LimUpp& CT_LimUpp::default_instance()
{
    if (!CT_LimUpp::default_instance_)
    {
        CT_LimUpp::default_instance_ = new CT_LimUpp();
    }
    return *CT_LimUpp::default_instance_;
}

CT_LimUpp* CT_LimUpp::default_instance_ = NULL;

// CT_MCPr
CT_MCPr::CT_MCPr()
    :m_has_count(false),
     m_count(NULL),
     m_has_mcJc(false),
     m_mcJc(NULL)
{
}
CT_MCPr::~CT_MCPr()
{
    clear();
}
bool CT_MCPr::has_count() const
{
    return m_has_count;
}

CT_Integer255* CT_MCPr::mutable_count()
{
    m_has_count = true;
    if (!m_count)
    {
        m_count = new CT_Integer255();
    }
    return m_count;
}

const CT_Integer255& CT_MCPr::get_count() const
{
    if (m_count)
    {
        return *m_count;
    }
    return CT_Integer255::default_instance();
}

bool CT_MCPr::has_mcJc() const
{
    return m_has_mcJc;
}

CT_XAlign* CT_MCPr::mutable_mcJc()
{
    m_has_mcJc = true;
    if (!m_mcJc)
    {
        m_mcJc = new CT_XAlign();
    }
    return m_mcJc;
}

const CT_XAlign& CT_MCPr::get_mcJc() const
{
    if (m_mcJc)
    {
        return *m_mcJc;
    }
    return CT_XAlign::default_instance();
}

void CT_MCPr::clear()
{
    m_has_count = false;

    if (m_count)
    {
        delete m_count;
        m_count = NULL;
    }


    m_has_mcJc = false;

    if (m_mcJc)
    {
        delete m_mcJc;
        m_mcJc = NULL;
    }

}

void CT_MCPr::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";


    if (m_has_count)
    {
        m_count->toXmlElem("m:count", "", _outStream);
    }


    if (m_has_mcJc)
    {
        m_mcJc->toXmlElem("m:mcJc", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_MCPr& CT_MCPr::default_instance()
{
    if (!CT_MCPr::default_instance_)
    {
        CT_MCPr::default_instance_ = new CT_MCPr();
    }
    return *CT_MCPr::default_instance_;
}

CT_MCPr* CT_MCPr::default_instance_ = NULL;

// CT_MC
CT_MC::CT_MC()
    :m_has_mcPr(false),
     m_mcPr(NULL)
{
}
CT_MC::~CT_MC()
{
    clear();
}
bool CT_MC::has_mcPr() const
{
    return m_has_mcPr;
}

CT_MCPr* CT_MC::mutable_mcPr()
{
    m_has_mcPr = true;
    if (!m_mcPr)
    {
        m_mcPr = new CT_MCPr();
    }
    return m_mcPr;
}

const CT_MCPr& CT_MC::get_mcPr() const
{
    if (m_mcPr)
    {
        return *m_mcPr;
    }
    return CT_MCPr::default_instance();
}

void CT_MC::clear()
{
    m_has_mcPr = false;

    if (m_mcPr)
    {
        delete m_mcPr;
        m_mcPr = NULL;
    }

}

void CT_MC::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";


    if (m_has_mcPr)
    {
        m_mcPr->toXmlElem("m:mcPr", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_MC& CT_MC::default_instance()
{
    if (!CT_MC::default_instance_)
    {
        CT_MC::default_instance_ = new CT_MC();
    }
    return *CT_MC::default_instance_;
}

CT_MC* CT_MC::default_instance_ = NULL;

// CT_MCS
CT_MCS::CT_MCS()

{
}
CT_MCS::~CT_MCS()
{
    clear();
}
CT_MC* CT_MCS::add_mc()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_MC* pNewChild = pChildGroup->mutable_mc();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

void CT_MCS::clear()
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

void CT_MCS::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";

    {
        int childSize = count_if(m_childGroupList_1.begin(), m_childGroupList_1.end(), mem_fun(&ChildGroup_1::has_mc));
        assert(1 <= childSize);
    }

    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_mc())
            {
                (*iter)->get_mc().toXmlElem("m:mc", "", _outStream);
            }


        }
    }

    _outStream << "</" << _elemName << ">";
}

const CT_MCS& CT_MCS::default_instance()
{
    if (!CT_MCS::default_instance_)
    {
        CT_MCS::default_instance_ = new CT_MCS();
    }
    return *CT_MCS::default_instance_;
}


// CT_MCS::ChildGroup_1
CT_MCS::ChildGroup_1::ChildGroup_1()
    :m_has_mc(false),
     m_mc(NULL)
{
}
bool CT_MCS::ChildGroup_1::has_mc() const
{
    return m_has_mc;
}

CT_MC* CT_MCS::ChildGroup_1::mutable_mc()
{

    m_has_mc = true;
    if (!m_mc)
    {
        m_mc = new CT_MC();
    }
    return m_mc;
}

const CT_MC& CT_MCS::ChildGroup_1::get_mc() const
{
    if (m_mc)
    {
        return *m_mc;
    }
    return CT_MC::default_instance();
}

CT_MCS* CT_MCS::default_instance_ = NULL;

// CT_MPr
CT_MPr::CT_MPr()
    :m_has_baseJc(false),
     m_baseJc(NULL),
     m_has_plcHide(false),
     m_plcHide(NULL),
     m_has_rSpRule(false),
     m_rSpRule(NULL),
     m_has_cGpRule(false),
     m_cGpRule(NULL),
     m_has_rSp(false),
     m_rSp(NULL),
     m_has_cSp(false),
     m_cSp(NULL),
     m_has_cGp(false),
     m_cGp(NULL),
     m_has_mcs(false),
     m_mcs(NULL),
     m_has_ctrlPr(false),
     m_ctrlPr(NULL)
{
}
CT_MPr::~CT_MPr()
{
    clear();
}
bool CT_MPr::has_baseJc() const
{
    return m_has_baseJc;
}

CT_YAlign* CT_MPr::mutable_baseJc()
{
    m_has_baseJc = true;
    if (!m_baseJc)
    {
        m_baseJc = new CT_YAlign();
    }
    return m_baseJc;
}

const CT_YAlign& CT_MPr::get_baseJc() const
{
    if (m_baseJc)
    {
        return *m_baseJc;
    }
    return CT_YAlign::default_instance();
}

bool CT_MPr::has_plcHide() const
{
    return m_has_plcHide;
}

CT_OnOff* CT_MPr::mutable_plcHide()
{
    m_has_plcHide = true;
    if (!m_plcHide)
    {
        m_plcHide = new CT_OnOff();
    }
    return m_plcHide;
}

const CT_OnOff& CT_MPr::get_plcHide() const
{
    if (m_plcHide)
    {
        return *m_plcHide;
    }
    return CT_OnOff::default_instance();
}

bool CT_MPr::has_rSpRule() const
{
    return m_has_rSpRule;
}

CT_SpacingRule* CT_MPr::mutable_rSpRule()
{
    m_has_rSpRule = true;
    if (!m_rSpRule)
    {
        m_rSpRule = new CT_SpacingRule();
    }
    return m_rSpRule;
}

const CT_SpacingRule& CT_MPr::get_rSpRule() const
{
    if (m_rSpRule)
    {
        return *m_rSpRule;
    }
    return CT_SpacingRule::default_instance();
}

bool CT_MPr::has_cGpRule() const
{
    return m_has_cGpRule;
}

CT_SpacingRule* CT_MPr::mutable_cGpRule()
{
    m_has_cGpRule = true;
    if (!m_cGpRule)
    {
        m_cGpRule = new CT_SpacingRule();
    }
    return m_cGpRule;
}

const CT_SpacingRule& CT_MPr::get_cGpRule() const
{
    if (m_cGpRule)
    {
        return *m_cGpRule;
    }
    return CT_SpacingRule::default_instance();
}

bool CT_MPr::has_rSp() const
{
    return m_has_rSp;
}

CT_UnSignedInteger* CT_MPr::mutable_rSp()
{
    m_has_rSp = true;
    if (!m_rSp)
    {
        m_rSp = new CT_UnSignedInteger();
    }
    return m_rSp;
}

const CT_UnSignedInteger& CT_MPr::get_rSp() const
{
    if (m_rSp)
    {
        return *m_rSp;
    }
    return CT_UnSignedInteger::default_instance();
}

bool CT_MPr::has_cSp() const
{
    return m_has_cSp;
}

CT_UnSignedInteger* CT_MPr::mutable_cSp()
{
    m_has_cSp = true;
    if (!m_cSp)
    {
        m_cSp = new CT_UnSignedInteger();
    }
    return m_cSp;
}

const CT_UnSignedInteger& CT_MPr::get_cSp() const
{
    if (m_cSp)
    {
        return *m_cSp;
    }
    return CT_UnSignedInteger::default_instance();
}

bool CT_MPr::has_cGp() const
{
    return m_has_cGp;
}

CT_UnSignedInteger* CT_MPr::mutable_cGp()
{
    m_has_cGp = true;
    if (!m_cGp)
    {
        m_cGp = new CT_UnSignedInteger();
    }
    return m_cGp;
}

const CT_UnSignedInteger& CT_MPr::get_cGp() const
{
    if (m_cGp)
    {
        return *m_cGp;
    }
    return CT_UnSignedInteger::default_instance();
}

bool CT_MPr::has_mcs() const
{
    return m_has_mcs;
}

CT_MCS* CT_MPr::mutable_mcs()
{
    m_has_mcs = true;
    if (!m_mcs)
    {
        m_mcs = new CT_MCS();
    }
    return m_mcs;
}

const CT_MCS& CT_MPr::get_mcs() const
{
    if (m_mcs)
    {
        return *m_mcs;
    }
    return CT_MCS::default_instance();
}

bool CT_MPr::has_ctrlPr() const
{
    return m_has_ctrlPr;
}

CT_CtrlPr* CT_MPr::mutable_ctrlPr()
{
    m_has_ctrlPr = true;
    if (!m_ctrlPr)
    {
        m_ctrlPr = new CT_CtrlPr();
    }
    return m_ctrlPr;
}

const CT_CtrlPr& CT_MPr::get_ctrlPr() const
{
    if (m_ctrlPr)
    {
        return *m_ctrlPr;
    }
    return CT_CtrlPr::default_instance();
}

void CT_MPr::clear()
{
    m_has_baseJc = false;

    if (m_baseJc)
    {
        delete m_baseJc;
        m_baseJc = NULL;
    }


    m_has_plcHide = false;

    if (m_plcHide)
    {
        delete m_plcHide;
        m_plcHide = NULL;
    }


    m_has_rSpRule = false;

    if (m_rSpRule)
    {
        delete m_rSpRule;
        m_rSpRule = NULL;
    }


    m_has_cGpRule = false;

    if (m_cGpRule)
    {
        delete m_cGpRule;
        m_cGpRule = NULL;
    }


    m_has_rSp = false;

    if (m_rSp)
    {
        delete m_rSp;
        m_rSp = NULL;
    }


    m_has_cSp = false;

    if (m_cSp)
    {
        delete m_cSp;
        m_cSp = NULL;
    }


    m_has_cGp = false;

    if (m_cGp)
    {
        delete m_cGp;
        m_cGp = NULL;
    }


    m_has_mcs = false;

    if (m_mcs)
    {
        delete m_mcs;
        m_mcs = NULL;
    }


    m_has_ctrlPr = false;

    if (m_ctrlPr)
    {
        delete m_ctrlPr;
        m_ctrlPr = NULL;
    }

}

void CT_MPr::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";


    if (m_has_baseJc)
    {
        m_baseJc->toXmlElem("m:baseJc", "", _outStream);
    }


    if (m_has_plcHide)
    {
        m_plcHide->toXmlElem("m:plcHide", "", _outStream);
    }


    if (m_has_rSpRule)
    {
        m_rSpRule->toXmlElem("m:rSpRule", "", _outStream);
    }


    if (m_has_cGpRule)
    {
        m_cGpRule->toXmlElem("m:cGpRule", "", _outStream);
    }


    if (m_has_rSp)
    {
        m_rSp->toXmlElem("m:rSp", "", _outStream);
    }


    if (m_has_cSp)
    {
        m_cSp->toXmlElem("m:cSp", "", _outStream);
    }


    if (m_has_cGp)
    {
        m_cGp->toXmlElem("m:cGp", "", _outStream);
    }


    if (m_has_mcs)
    {
        m_mcs->toXmlElem("m:mcs", "", _outStream);
    }


    if (m_has_ctrlPr)
    {
        m_ctrlPr->toXmlElem("m:ctrlPr", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_MPr& CT_MPr::default_instance()
{
    if (!CT_MPr::default_instance_)
    {
        CT_MPr::default_instance_ = new CT_MPr();
    }
    return *CT_MPr::default_instance_;
}

CT_MPr* CT_MPr::default_instance_ = NULL;

// CT_MR
CT_MR::CT_MR()

{
}
CT_MR::~CT_MR()
{
    clear();
}
CT_OMathArg* CT_MR::add_e()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_OMathArg* pNewChild = pChildGroup->mutable_e();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

void CT_MR::clear()
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

void CT_MR::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";

    {
        int childSize = count_if(m_childGroupList_1.begin(), m_childGroupList_1.end(), mem_fun(&ChildGroup_1::has_e));
        assert(1 <= childSize);
    }

    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_e())
            {
                (*iter)->get_e().toXmlElem("m:e", "", _outStream);
            }


        }
    }

    _outStream << "</" << _elemName << ">";
}

const CT_MR& CT_MR::default_instance()
{
    if (!CT_MR::default_instance_)
    {
        CT_MR::default_instance_ = new CT_MR();
    }
    return *CT_MR::default_instance_;
}


// CT_MR::ChildGroup_1
CT_MR::ChildGroup_1::ChildGroup_1()
    :m_has_e(false),
     m_e(NULL)
{
}
bool CT_MR::ChildGroup_1::has_e() const
{
    return m_has_e;
}

CT_OMathArg* CT_MR::ChildGroup_1::mutable_e()
{

    m_has_e = true;
    if (!m_e)
    {
        m_e = new CT_OMathArg();
    }
    return m_e;
}

const CT_OMathArg& CT_MR::ChildGroup_1::get_e() const
{
    if (m_e)
    {
        return *m_e;
    }
    return CT_OMathArg::default_instance();
}

CT_MR* CT_MR::default_instance_ = NULL;

// CT_M
CT_M::CT_M()
    :m_has_mPr(false),
     m_mPr(NULL)
{
}
CT_M::~CT_M()
{
    clear();
}
bool CT_M::has_mPr() const
{
    return m_has_mPr;
}

CT_MPr* CT_M::mutable_mPr()
{
    m_has_mPr = true;
    if (!m_mPr)
    {
        m_mPr = new CT_MPr();
    }
    return m_mPr;
}

const CT_MPr& CT_M::get_mPr() const
{
    if (m_mPr)
    {
        return *m_mPr;
    }
    return CT_MPr::default_instance();
}

CT_MR* CT_M::add_mr()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_MR* pNewChild = pChildGroup->mutable_mr();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

void CT_M::clear()
{
    m_has_mPr = false;

    if (m_mPr)
    {
        delete m_mPr;
        m_mPr = NULL;
    }


    {
        vector<ChildGroup_1*>::iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_1.clear();
    }
}

void CT_M::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";


    if (m_has_mPr)
    {
        m_mPr->toXmlElem("m:mPr", "", _outStream);
    }

    {
        int childSize = count_if(m_childGroupList_1.begin(), m_childGroupList_1.end(), mem_fun(&ChildGroup_1::has_mr));
        assert(1 <= childSize);
    }

    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_mr())
            {
                (*iter)->get_mr().toXmlElem("m:mr", "", _outStream);
            }


        }
    }

    _outStream << "</" << _elemName << ">";
}

const CT_M& CT_M::default_instance()
{
    if (!CT_M::default_instance_)
    {
        CT_M::default_instance_ = new CT_M();
    }
    return *CT_M::default_instance_;
}


// CT_M::ChildGroup_1
CT_M::ChildGroup_1::ChildGroup_1()
    :m_has_mr(false),
     m_mr(NULL)
{
}
bool CT_M::ChildGroup_1::has_mr() const
{
    return m_has_mr;
}

CT_MR* CT_M::ChildGroup_1::mutable_mr()
{

    m_has_mr = true;
    if (!m_mr)
    {
        m_mr = new CT_MR();
    }
    return m_mr;
}

const CT_MR& CT_M::ChildGroup_1::get_mr() const
{
    if (m_mr)
    {
        return *m_mr;
    }
    return CT_MR::default_instance();
}

CT_M* CT_M::default_instance_ = NULL;

// CT_NaryPr
CT_NaryPr::CT_NaryPr()
    :m_has_chr(false),
     m_chr(NULL),
     m_has_limLoc(false),
     m_limLoc(NULL),
     m_has_grow(false),
     m_grow(NULL),
     m_has_subHide(false),
     m_subHide(NULL),
     m_has_supHide(false),
     m_supHide(NULL),
     m_has_ctrlPr(false),
     m_ctrlPr(NULL)
{
}
CT_NaryPr::~CT_NaryPr()
{
    clear();
}
bool CT_NaryPr::has_chr() const
{
    return m_has_chr;
}

CT_Char* CT_NaryPr::mutable_chr()
{
    m_has_chr = true;
    if (!m_chr)
    {
        m_chr = new CT_Char();
    }
    return m_chr;
}

const CT_Char& CT_NaryPr::get_chr() const
{
    if (m_chr)
    {
        return *m_chr;
    }
    return CT_Char::default_instance();
}

bool CT_NaryPr::has_limLoc() const
{
    return m_has_limLoc;
}

CT_LimLoc* CT_NaryPr::mutable_limLoc()
{
    m_has_limLoc = true;
    if (!m_limLoc)
    {
        m_limLoc = new CT_LimLoc();
    }
    return m_limLoc;
}

const CT_LimLoc& CT_NaryPr::get_limLoc() const
{
    if (m_limLoc)
    {
        return *m_limLoc;
    }
    return CT_LimLoc::default_instance();
}

bool CT_NaryPr::has_grow() const
{
    return m_has_grow;
}

CT_OnOff* CT_NaryPr::mutable_grow()
{
    m_has_grow = true;
    if (!m_grow)
    {
        m_grow = new CT_OnOff();
    }
    return m_grow;
}

const CT_OnOff& CT_NaryPr::get_grow() const
{
    if (m_grow)
    {
        return *m_grow;
    }
    return CT_OnOff::default_instance();
}

bool CT_NaryPr::has_subHide() const
{
    return m_has_subHide;
}

CT_OnOff* CT_NaryPr::mutable_subHide()
{
    m_has_subHide = true;
    if (!m_subHide)
    {
        m_subHide = new CT_OnOff();
    }
    return m_subHide;
}

const CT_OnOff& CT_NaryPr::get_subHide() const
{
    if (m_subHide)
    {
        return *m_subHide;
    }
    return CT_OnOff::default_instance();
}

bool CT_NaryPr::has_supHide() const
{
    return m_has_supHide;
}

CT_OnOff* CT_NaryPr::mutable_supHide()
{
    m_has_supHide = true;
    if (!m_supHide)
    {
        m_supHide = new CT_OnOff();
    }
    return m_supHide;
}

const CT_OnOff& CT_NaryPr::get_supHide() const
{
    if (m_supHide)
    {
        return *m_supHide;
    }
    return CT_OnOff::default_instance();
}

bool CT_NaryPr::has_ctrlPr() const
{
    return m_has_ctrlPr;
}

CT_CtrlPr* CT_NaryPr::mutable_ctrlPr()
{
    m_has_ctrlPr = true;
    if (!m_ctrlPr)
    {
        m_ctrlPr = new CT_CtrlPr();
    }
    return m_ctrlPr;
}

const CT_CtrlPr& CT_NaryPr::get_ctrlPr() const
{
    if (m_ctrlPr)
    {
        return *m_ctrlPr;
    }
    return CT_CtrlPr::default_instance();
}

void CT_NaryPr::clear()
{
    m_has_chr = false;

    if (m_chr)
    {
        delete m_chr;
        m_chr = NULL;
    }


    m_has_limLoc = false;

    if (m_limLoc)
    {
        delete m_limLoc;
        m_limLoc = NULL;
    }


    m_has_grow = false;

    if (m_grow)
    {
        delete m_grow;
        m_grow = NULL;
    }


    m_has_subHide = false;

    if (m_subHide)
    {
        delete m_subHide;
        m_subHide = NULL;
    }


    m_has_supHide = false;

    if (m_supHide)
    {
        delete m_supHide;
        m_supHide = NULL;
    }


    m_has_ctrlPr = false;

    if (m_ctrlPr)
    {
        delete m_ctrlPr;
        m_ctrlPr = NULL;
    }

}

void CT_NaryPr::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";


    if (m_has_chr)
    {
        m_chr->toXmlElem("m:chr", "", _outStream);
    }


    if (m_has_limLoc)
    {
        m_limLoc->toXmlElem("m:limLoc", "", _outStream);
    }


    if (m_has_grow)
    {
        m_grow->toXmlElem("m:grow", "", _outStream);
    }


    if (m_has_subHide)
    {
        m_subHide->toXmlElem("m:subHide", "", _outStream);
    }


    if (m_has_supHide)
    {
        m_supHide->toXmlElem("m:supHide", "", _outStream);
    }


    if (m_has_ctrlPr)
    {
        m_ctrlPr->toXmlElem("m:ctrlPr", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_NaryPr& CT_NaryPr::default_instance()
{
    if (!CT_NaryPr::default_instance_)
    {
        CT_NaryPr::default_instance_ = new CT_NaryPr();
    }
    return *CT_NaryPr::default_instance_;
}

CT_NaryPr* CT_NaryPr::default_instance_ = NULL;

// CT_Nary
CT_Nary::CT_Nary()
    :m_has_naryPr(false),
     m_naryPr(NULL),
     m_has_sub(false),
     m_sub(NULL),
     m_has_sup(false),
     m_sup(NULL),
     m_has_e(false),
     m_e(NULL)
{
}
CT_Nary::~CT_Nary()
{
    clear();
}
bool CT_Nary::has_naryPr() const
{
    return m_has_naryPr;
}

CT_NaryPr* CT_Nary::mutable_naryPr()
{
    m_has_naryPr = true;
    if (!m_naryPr)
    {
        m_naryPr = new CT_NaryPr();
    }
    return m_naryPr;
}

const CT_NaryPr& CT_Nary::get_naryPr() const
{
    if (m_naryPr)
    {
        return *m_naryPr;
    }
    return CT_NaryPr::default_instance();
}

bool CT_Nary::has_sub() const
{
    return m_has_sub;
}

CT_OMathArg* CT_Nary::mutable_sub()
{
    m_has_sub = true;
    if (!m_sub)
    {
        m_sub = new CT_OMathArg();
    }
    return m_sub;
}

const CT_OMathArg& CT_Nary::get_sub() const
{
    if (m_sub)
    {
        return *m_sub;
    }
    return CT_OMathArg::default_instance();
}

bool CT_Nary::has_sup() const
{
    return m_has_sup;
}

CT_OMathArg* CT_Nary::mutable_sup()
{
    m_has_sup = true;
    if (!m_sup)
    {
        m_sup = new CT_OMathArg();
    }
    return m_sup;
}

const CT_OMathArg& CT_Nary::get_sup() const
{
    if (m_sup)
    {
        return *m_sup;
    }
    return CT_OMathArg::default_instance();
}

bool CT_Nary::has_e() const
{
    return m_has_e;
}

CT_OMathArg* CT_Nary::mutable_e()
{
    m_has_e = true;
    if (!m_e)
    {
        m_e = new CT_OMathArg();
    }
    return m_e;
}

const CT_OMathArg& CT_Nary::get_e() const
{
    if (m_e)
    {
        return *m_e;
    }
    return CT_OMathArg::default_instance();
}

void CT_Nary::clear()
{
    m_has_naryPr = false;

    if (m_naryPr)
    {
        delete m_naryPr;
        m_naryPr = NULL;
    }


    m_has_sub = false;

    if (m_sub)
    {
        delete m_sub;
        m_sub = NULL;
    }


    m_has_sup = false;

    if (m_sup)
    {
        delete m_sup;
        m_sup = NULL;
    }


    m_has_e = false;

    if (m_e)
    {
        delete m_e;
        m_e = NULL;
    }

}

void CT_Nary::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";

    assert(m_has_sub);


    assert(m_has_sup);


    assert(m_has_e);


    if (m_has_naryPr)
    {
        m_naryPr->toXmlElem("m:naryPr", "", _outStream);
    }


    if (m_has_sub)
    {
        m_sub->toXmlElem("m:sub", "", _outStream);
    }


    if (m_has_sup)
    {
        m_sup->toXmlElem("m:sup", "", _outStream);
    }


    if (m_has_e)
    {
        m_e->toXmlElem("m:e", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_Nary& CT_Nary::default_instance()
{
    if (!CT_Nary::default_instance_)
    {
        CT_Nary::default_instance_ = new CT_Nary();
    }
    return *CT_Nary::default_instance_;
}

CT_Nary* CT_Nary::default_instance_ = NULL;

// CT_PhantPr
CT_PhantPr::CT_PhantPr()
    :m_has_show(false),
     m_show(NULL),
     m_has_zeroWid(false),
     m_zeroWid(NULL),
     m_has_zeroAsc(false),
     m_zeroAsc(NULL),
     m_has_zeroDesc(false),
     m_zeroDesc(NULL),
     m_has_transp(false),
     m_transp(NULL),
     m_has_ctrlPr(false),
     m_ctrlPr(NULL)
{
}
CT_PhantPr::~CT_PhantPr()
{
    clear();
}
bool CT_PhantPr::has_show() const
{
    return m_has_show;
}

CT_OnOff* CT_PhantPr::mutable_show()
{
    m_has_show = true;
    if (!m_show)
    {
        m_show = new CT_OnOff();
    }
    return m_show;
}

const CT_OnOff& CT_PhantPr::get_show() const
{
    if (m_show)
    {
        return *m_show;
    }
    return CT_OnOff::default_instance();
}

bool CT_PhantPr::has_zeroWid() const
{
    return m_has_zeroWid;
}

CT_OnOff* CT_PhantPr::mutable_zeroWid()
{
    m_has_zeroWid = true;
    if (!m_zeroWid)
    {
        m_zeroWid = new CT_OnOff();
    }
    return m_zeroWid;
}

const CT_OnOff& CT_PhantPr::get_zeroWid() const
{
    if (m_zeroWid)
    {
        return *m_zeroWid;
    }
    return CT_OnOff::default_instance();
}

bool CT_PhantPr::has_zeroAsc() const
{
    return m_has_zeroAsc;
}

CT_OnOff* CT_PhantPr::mutable_zeroAsc()
{
    m_has_zeroAsc = true;
    if (!m_zeroAsc)
    {
        m_zeroAsc = new CT_OnOff();
    }
    return m_zeroAsc;
}

const CT_OnOff& CT_PhantPr::get_zeroAsc() const
{
    if (m_zeroAsc)
    {
        return *m_zeroAsc;
    }
    return CT_OnOff::default_instance();
}

bool CT_PhantPr::has_zeroDesc() const
{
    return m_has_zeroDesc;
}

CT_OnOff* CT_PhantPr::mutable_zeroDesc()
{
    m_has_zeroDesc = true;
    if (!m_zeroDesc)
    {
        m_zeroDesc = new CT_OnOff();
    }
    return m_zeroDesc;
}

const CT_OnOff& CT_PhantPr::get_zeroDesc() const
{
    if (m_zeroDesc)
    {
        return *m_zeroDesc;
    }
    return CT_OnOff::default_instance();
}

bool CT_PhantPr::has_transp() const
{
    return m_has_transp;
}

CT_OnOff* CT_PhantPr::mutable_transp()
{
    m_has_transp = true;
    if (!m_transp)
    {
        m_transp = new CT_OnOff();
    }
    return m_transp;
}

const CT_OnOff& CT_PhantPr::get_transp() const
{
    if (m_transp)
    {
        return *m_transp;
    }
    return CT_OnOff::default_instance();
}

bool CT_PhantPr::has_ctrlPr() const
{
    return m_has_ctrlPr;
}

CT_CtrlPr* CT_PhantPr::mutable_ctrlPr()
{
    m_has_ctrlPr = true;
    if (!m_ctrlPr)
    {
        m_ctrlPr = new CT_CtrlPr();
    }
    return m_ctrlPr;
}

const CT_CtrlPr& CT_PhantPr::get_ctrlPr() const
{
    if (m_ctrlPr)
    {
        return *m_ctrlPr;
    }
    return CT_CtrlPr::default_instance();
}

void CT_PhantPr::clear()
{
    m_has_show = false;

    if (m_show)
    {
        delete m_show;
        m_show = NULL;
    }


    m_has_zeroWid = false;

    if (m_zeroWid)
    {
        delete m_zeroWid;
        m_zeroWid = NULL;
    }


    m_has_zeroAsc = false;

    if (m_zeroAsc)
    {
        delete m_zeroAsc;
        m_zeroAsc = NULL;
    }


    m_has_zeroDesc = false;

    if (m_zeroDesc)
    {
        delete m_zeroDesc;
        m_zeroDesc = NULL;
    }


    m_has_transp = false;

    if (m_transp)
    {
        delete m_transp;
        m_transp = NULL;
    }


    m_has_ctrlPr = false;

    if (m_ctrlPr)
    {
        delete m_ctrlPr;
        m_ctrlPr = NULL;
    }

}

void CT_PhantPr::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";


    if (m_has_show)
    {
        m_show->toXmlElem("m:show", "", _outStream);
    }


    if (m_has_zeroWid)
    {
        m_zeroWid->toXmlElem("m:zeroWid", "", _outStream);
    }


    if (m_has_zeroAsc)
    {
        m_zeroAsc->toXmlElem("m:zeroAsc", "", _outStream);
    }


    if (m_has_zeroDesc)
    {
        m_zeroDesc->toXmlElem("m:zeroDesc", "", _outStream);
    }


    if (m_has_transp)
    {
        m_transp->toXmlElem("m:transp", "", _outStream);
    }


    if (m_has_ctrlPr)
    {
        m_ctrlPr->toXmlElem("m:ctrlPr", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_PhantPr& CT_PhantPr::default_instance()
{
    if (!CT_PhantPr::default_instance_)
    {
        CT_PhantPr::default_instance_ = new CT_PhantPr();
    }
    return *CT_PhantPr::default_instance_;
}

CT_PhantPr* CT_PhantPr::default_instance_ = NULL;

// CT_Phant
CT_Phant::CT_Phant()
    :m_has_phantPr(false),
     m_phantPr(NULL),
     m_has_e(false),
     m_e(NULL)
{
}
CT_Phant::~CT_Phant()
{
    clear();
}
bool CT_Phant::has_phantPr() const
{
    return m_has_phantPr;
}

CT_PhantPr* CT_Phant::mutable_phantPr()
{
    m_has_phantPr = true;
    if (!m_phantPr)
    {
        m_phantPr = new CT_PhantPr();
    }
    return m_phantPr;
}

const CT_PhantPr& CT_Phant::get_phantPr() const
{
    if (m_phantPr)
    {
        return *m_phantPr;
    }
    return CT_PhantPr::default_instance();
}

bool CT_Phant::has_e() const
{
    return m_has_e;
}

CT_OMathArg* CT_Phant::mutable_e()
{
    m_has_e = true;
    if (!m_e)
    {
        m_e = new CT_OMathArg();
    }
    return m_e;
}

const CT_OMathArg& CT_Phant::get_e() const
{
    if (m_e)
    {
        return *m_e;
    }
    return CT_OMathArg::default_instance();
}

void CT_Phant::clear()
{
    m_has_phantPr = false;

    if (m_phantPr)
    {
        delete m_phantPr;
        m_phantPr = NULL;
    }


    m_has_e = false;

    if (m_e)
    {
        delete m_e;
        m_e = NULL;
    }

}

void CT_Phant::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";

    assert(m_has_e);


    if (m_has_phantPr)
    {
        m_phantPr->toXmlElem("m:phantPr", "", _outStream);
    }


    if (m_has_e)
    {
        m_e->toXmlElem("m:e", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_Phant& CT_Phant::default_instance()
{
    if (!CT_Phant::default_instance_)
    {
        CT_Phant::default_instance_ = new CT_Phant();
    }
    return *CT_Phant::default_instance_;
}

CT_Phant* CT_Phant::default_instance_ = NULL;

// CT_RadPr
CT_RadPr::CT_RadPr()
    :m_has_degHide(false),
     m_degHide(NULL),
     m_has_ctrlPr(false),
     m_ctrlPr(NULL)
{
}
CT_RadPr::~CT_RadPr()
{
    clear();
}
bool CT_RadPr::has_degHide() const
{
    return m_has_degHide;
}

CT_OnOff* CT_RadPr::mutable_degHide()
{
    m_has_degHide = true;
    if (!m_degHide)
    {
        m_degHide = new CT_OnOff();
    }
    return m_degHide;
}

const CT_OnOff& CT_RadPr::get_degHide() const
{
    if (m_degHide)
    {
        return *m_degHide;
    }
    return CT_OnOff::default_instance();
}

bool CT_RadPr::has_ctrlPr() const
{
    return m_has_ctrlPr;
}

CT_CtrlPr* CT_RadPr::mutable_ctrlPr()
{
    m_has_ctrlPr = true;
    if (!m_ctrlPr)
    {
        m_ctrlPr = new CT_CtrlPr();
    }
    return m_ctrlPr;
}

const CT_CtrlPr& CT_RadPr::get_ctrlPr() const
{
    if (m_ctrlPr)
    {
        return *m_ctrlPr;
    }
    return CT_CtrlPr::default_instance();
}

void CT_RadPr::clear()
{
    m_has_degHide = false;

    if (m_degHide)
    {
        delete m_degHide;
        m_degHide = NULL;
    }


    m_has_ctrlPr = false;

    if (m_ctrlPr)
    {
        delete m_ctrlPr;
        m_ctrlPr = NULL;
    }

}

void CT_RadPr::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";


    if (m_has_degHide)
    {
        m_degHide->toXmlElem("m:degHide", "", _outStream);
    }


    if (m_has_ctrlPr)
    {
        m_ctrlPr->toXmlElem("m:ctrlPr", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_RadPr& CT_RadPr::default_instance()
{
    if (!CT_RadPr::default_instance_)
    {
        CT_RadPr::default_instance_ = new CT_RadPr();
    }
    return *CT_RadPr::default_instance_;
}

CT_RadPr* CT_RadPr::default_instance_ = NULL;

// CT_Rad
CT_Rad::CT_Rad()
    :m_has_radPr(false),
     m_radPr(NULL),
     m_has_deg(false),
     m_deg(NULL),
     m_has_e(false),
     m_e(NULL)
{
}
CT_Rad::~CT_Rad()
{
    clear();
}
bool CT_Rad::has_radPr() const
{
    return m_has_radPr;
}

CT_RadPr* CT_Rad::mutable_radPr()
{
    m_has_radPr = true;
    if (!m_radPr)
    {
        m_radPr = new CT_RadPr();
    }
    return m_radPr;
}

const CT_RadPr& CT_Rad::get_radPr() const
{
    if (m_radPr)
    {
        return *m_radPr;
    }
    return CT_RadPr::default_instance();
}

bool CT_Rad::has_deg() const
{
    return m_has_deg;
}

CT_OMathArg* CT_Rad::mutable_deg()
{
    m_has_deg = true;
    if (!m_deg)
    {
        m_deg = new CT_OMathArg();
    }
    return m_deg;
}

const CT_OMathArg& CT_Rad::get_deg() const
{
    if (m_deg)
    {
        return *m_deg;
    }
    return CT_OMathArg::default_instance();
}

bool CT_Rad::has_e() const
{
    return m_has_e;
}

CT_OMathArg* CT_Rad::mutable_e()
{
    m_has_e = true;
    if (!m_e)
    {
        m_e = new CT_OMathArg();
    }
    return m_e;
}

const CT_OMathArg& CT_Rad::get_e() const
{
    if (m_e)
    {
        return *m_e;
    }
    return CT_OMathArg::default_instance();
}

void CT_Rad::clear()
{
    m_has_radPr = false;

    if (m_radPr)
    {
        delete m_radPr;
        m_radPr = NULL;
    }


    m_has_deg = false;

    if (m_deg)
    {
        delete m_deg;
        m_deg = NULL;
    }


    m_has_e = false;

    if (m_e)
    {
        delete m_e;
        m_e = NULL;
    }

}

void CT_Rad::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";

    assert(m_has_deg);


    assert(m_has_e);


    if (m_has_radPr)
    {
        m_radPr->toXmlElem("m:radPr", "", _outStream);
    }


    if (m_has_deg)
    {
        m_deg->toXmlElem("m:deg", "", _outStream);
    }


    if (m_has_e)
    {
        m_e->toXmlElem("m:e", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_Rad& CT_Rad::default_instance()
{
    if (!CT_Rad::default_instance_)
    {
        CT_Rad::default_instance_ = new CT_Rad();
    }
    return *CT_Rad::default_instance_;
}

CT_Rad* CT_Rad::default_instance_ = NULL;

// CT_SPrePr
CT_SPrePr::CT_SPrePr()
    :m_has_ctrlPr(false),
     m_ctrlPr(NULL)
{
}
CT_SPrePr::~CT_SPrePr()
{
    clear();
}
bool CT_SPrePr::has_ctrlPr() const
{
    return m_has_ctrlPr;
}

CT_CtrlPr* CT_SPrePr::mutable_ctrlPr()
{
    m_has_ctrlPr = true;
    if (!m_ctrlPr)
    {
        m_ctrlPr = new CT_CtrlPr();
    }
    return m_ctrlPr;
}

const CT_CtrlPr& CT_SPrePr::get_ctrlPr() const
{
    if (m_ctrlPr)
    {
        return *m_ctrlPr;
    }
    return CT_CtrlPr::default_instance();
}

void CT_SPrePr::clear()
{
    m_has_ctrlPr = false;

    if (m_ctrlPr)
    {
        delete m_ctrlPr;
        m_ctrlPr = NULL;
    }

}

void CT_SPrePr::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";


    if (m_has_ctrlPr)
    {
        m_ctrlPr->toXmlElem("m:ctrlPr", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_SPrePr& CT_SPrePr::default_instance()
{
    if (!CT_SPrePr::default_instance_)
    {
        CT_SPrePr::default_instance_ = new CT_SPrePr();
    }
    return *CT_SPrePr::default_instance_;
}

CT_SPrePr* CT_SPrePr::default_instance_ = NULL;

// CT_SPre
CT_SPre::CT_SPre()
    :m_has_sPrePr(false),
     m_sPrePr(NULL),
     m_has_sub(false),
     m_sub(NULL),
     m_has_sup(false),
     m_sup(NULL),
     m_has_e(false),
     m_e(NULL)
{
}
CT_SPre::~CT_SPre()
{
    clear();
}
bool CT_SPre::has_sPrePr() const
{
    return m_has_sPrePr;
}

CT_SPrePr* CT_SPre::mutable_sPrePr()
{
    m_has_sPrePr = true;
    if (!m_sPrePr)
    {
        m_sPrePr = new CT_SPrePr();
    }
    return m_sPrePr;
}

const CT_SPrePr& CT_SPre::get_sPrePr() const
{
    if (m_sPrePr)
    {
        return *m_sPrePr;
    }
    return CT_SPrePr::default_instance();
}

bool CT_SPre::has_sub() const
{
    return m_has_sub;
}

CT_OMathArg* CT_SPre::mutable_sub()
{
    m_has_sub = true;
    if (!m_sub)
    {
        m_sub = new CT_OMathArg();
    }
    return m_sub;
}

const CT_OMathArg& CT_SPre::get_sub() const
{
    if (m_sub)
    {
        return *m_sub;
    }
    return CT_OMathArg::default_instance();
}

bool CT_SPre::has_sup() const
{
    return m_has_sup;
}

CT_OMathArg* CT_SPre::mutable_sup()
{
    m_has_sup = true;
    if (!m_sup)
    {
        m_sup = new CT_OMathArg();
    }
    return m_sup;
}

const CT_OMathArg& CT_SPre::get_sup() const
{
    if (m_sup)
    {
        return *m_sup;
    }
    return CT_OMathArg::default_instance();
}

bool CT_SPre::has_e() const
{
    return m_has_e;
}

CT_OMathArg* CT_SPre::mutable_e()
{
    m_has_e = true;
    if (!m_e)
    {
        m_e = new CT_OMathArg();
    }
    return m_e;
}

const CT_OMathArg& CT_SPre::get_e() const
{
    if (m_e)
    {
        return *m_e;
    }
    return CT_OMathArg::default_instance();
}

void CT_SPre::clear()
{
    m_has_sPrePr = false;

    if (m_sPrePr)
    {
        delete m_sPrePr;
        m_sPrePr = NULL;
    }


    m_has_sub = false;

    if (m_sub)
    {
        delete m_sub;
        m_sub = NULL;
    }


    m_has_sup = false;

    if (m_sup)
    {
        delete m_sup;
        m_sup = NULL;
    }


    m_has_e = false;

    if (m_e)
    {
        delete m_e;
        m_e = NULL;
    }

}

void CT_SPre::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";

    assert(m_has_sub);


    assert(m_has_sup);


    assert(m_has_e);


    if (m_has_sPrePr)
    {
        m_sPrePr->toXmlElem("m:sPrePr", "", _outStream);
    }


    if (m_has_sub)
    {
        m_sub->toXmlElem("m:sub", "", _outStream);
    }


    if (m_has_sup)
    {
        m_sup->toXmlElem("m:sup", "", _outStream);
    }


    if (m_has_e)
    {
        m_e->toXmlElem("m:e", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_SPre& CT_SPre::default_instance()
{
    if (!CT_SPre::default_instance_)
    {
        CT_SPre::default_instance_ = new CT_SPre();
    }
    return *CT_SPre::default_instance_;
}

CT_SPre* CT_SPre::default_instance_ = NULL;

// CT_SSubPr
CT_SSubPr::CT_SSubPr()
    :m_has_ctrlPr(false),
     m_ctrlPr(NULL)
{
}
CT_SSubPr::~CT_SSubPr()
{
    clear();
}
bool CT_SSubPr::has_ctrlPr() const
{
    return m_has_ctrlPr;
}

CT_CtrlPr* CT_SSubPr::mutable_ctrlPr()
{
    m_has_ctrlPr = true;
    if (!m_ctrlPr)
    {
        m_ctrlPr = new CT_CtrlPr();
    }
    return m_ctrlPr;
}

const CT_CtrlPr& CT_SSubPr::get_ctrlPr() const
{
    if (m_ctrlPr)
    {
        return *m_ctrlPr;
    }
    return CT_CtrlPr::default_instance();
}

void CT_SSubPr::clear()
{
    m_has_ctrlPr = false;

    if (m_ctrlPr)
    {
        delete m_ctrlPr;
        m_ctrlPr = NULL;
    }

}

void CT_SSubPr::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";


    if (m_has_ctrlPr)
    {
        m_ctrlPr->toXmlElem("m:ctrlPr", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_SSubPr& CT_SSubPr::default_instance()
{
    if (!CT_SSubPr::default_instance_)
    {
        CT_SSubPr::default_instance_ = new CT_SSubPr();
    }
    return *CT_SSubPr::default_instance_;
}

CT_SSubPr* CT_SSubPr::default_instance_ = NULL;

// CT_SSub
CT_SSub::CT_SSub()
    :m_has_sSubPr(false),
     m_sSubPr(NULL),
     m_has_e(false),
     m_e(NULL),
     m_has_sub(false),
     m_sub(NULL)
{
}
CT_SSub::~CT_SSub()
{
    clear();
}
bool CT_SSub::has_sSubPr() const
{
    return m_has_sSubPr;
}

CT_SSubPr* CT_SSub::mutable_sSubPr()
{
    m_has_sSubPr = true;
    if (!m_sSubPr)
    {
        m_sSubPr = new CT_SSubPr();
    }
    return m_sSubPr;
}

const CT_SSubPr& CT_SSub::get_sSubPr() const
{
    if (m_sSubPr)
    {
        return *m_sSubPr;
    }
    return CT_SSubPr::default_instance();
}

bool CT_SSub::has_e() const
{
    return m_has_e;
}

CT_OMathArg* CT_SSub::mutable_e()
{
    m_has_e = true;
    if (!m_e)
    {
        m_e = new CT_OMathArg();
    }
    return m_e;
}

const CT_OMathArg& CT_SSub::get_e() const
{
    if (m_e)
    {
        return *m_e;
    }
    return CT_OMathArg::default_instance();
}

bool CT_SSub::has_sub() const
{
    return m_has_sub;
}

CT_OMathArg* CT_SSub::mutable_sub()
{
    m_has_sub = true;
    if (!m_sub)
    {
        m_sub = new CT_OMathArg();
    }
    return m_sub;
}

const CT_OMathArg& CT_SSub::get_sub() const
{
    if (m_sub)
    {
        return *m_sub;
    }
    return CT_OMathArg::default_instance();
}

void CT_SSub::clear()
{
    m_has_sSubPr = false;

    if (m_sSubPr)
    {
        delete m_sSubPr;
        m_sSubPr = NULL;
    }


    m_has_e = false;

    if (m_e)
    {
        delete m_e;
        m_e = NULL;
    }


    m_has_sub = false;

    if (m_sub)
    {
        delete m_sub;
        m_sub = NULL;
    }

}

void CT_SSub::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";

    assert(m_has_e);


    assert(m_has_sub);


    if (m_has_sSubPr)
    {
        m_sSubPr->toXmlElem("m:sSubPr", "", _outStream);
    }


    if (m_has_e)
    {
        m_e->toXmlElem("m:e", "", _outStream);
    }


    if (m_has_sub)
    {
        m_sub->toXmlElem("m:sub", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_SSub& CT_SSub::default_instance()
{
    if (!CT_SSub::default_instance_)
    {
        CT_SSub::default_instance_ = new CT_SSub();
    }
    return *CT_SSub::default_instance_;
}

CT_SSub* CT_SSub::default_instance_ = NULL;

// CT_SSubSupPr
CT_SSubSupPr::CT_SSubSupPr()
    :m_has_alnScr(false),
     m_alnScr(NULL),
     m_has_ctrlPr(false),
     m_ctrlPr(NULL)
{
}
CT_SSubSupPr::~CT_SSubSupPr()
{
    clear();
}
bool CT_SSubSupPr::has_alnScr() const
{
    return m_has_alnScr;
}

CT_OnOff* CT_SSubSupPr::mutable_alnScr()
{
    m_has_alnScr = true;
    if (!m_alnScr)
    {
        m_alnScr = new CT_OnOff();
    }
    return m_alnScr;
}

const CT_OnOff& CT_SSubSupPr::get_alnScr() const
{
    if (m_alnScr)
    {
        return *m_alnScr;
    }
    return CT_OnOff::default_instance();
}

bool CT_SSubSupPr::has_ctrlPr() const
{
    return m_has_ctrlPr;
}

CT_CtrlPr* CT_SSubSupPr::mutable_ctrlPr()
{
    m_has_ctrlPr = true;
    if (!m_ctrlPr)
    {
        m_ctrlPr = new CT_CtrlPr();
    }
    return m_ctrlPr;
}

const CT_CtrlPr& CT_SSubSupPr::get_ctrlPr() const
{
    if (m_ctrlPr)
    {
        return *m_ctrlPr;
    }
    return CT_CtrlPr::default_instance();
}

void CT_SSubSupPr::clear()
{
    m_has_alnScr = false;

    if (m_alnScr)
    {
        delete m_alnScr;
        m_alnScr = NULL;
    }


    m_has_ctrlPr = false;

    if (m_ctrlPr)
    {
        delete m_ctrlPr;
        m_ctrlPr = NULL;
    }

}

void CT_SSubSupPr::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";


    if (m_has_alnScr)
    {
        m_alnScr->toXmlElem("m:alnScr", "", _outStream);
    }


    if (m_has_ctrlPr)
    {
        m_ctrlPr->toXmlElem("m:ctrlPr", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_SSubSupPr& CT_SSubSupPr::default_instance()
{
    if (!CT_SSubSupPr::default_instance_)
    {
        CT_SSubSupPr::default_instance_ = new CT_SSubSupPr();
    }
    return *CT_SSubSupPr::default_instance_;
}

CT_SSubSupPr* CT_SSubSupPr::default_instance_ = NULL;

// CT_SSubSup
CT_SSubSup::CT_SSubSup()
    :m_has_sSubSupPr(false),
     m_sSubSupPr(NULL),
     m_has_e(false),
     m_e(NULL),
     m_has_sub(false),
     m_sub(NULL),
     m_has_sup(false),
     m_sup(NULL)
{
}
CT_SSubSup::~CT_SSubSup()
{
    clear();
}
bool CT_SSubSup::has_sSubSupPr() const
{
    return m_has_sSubSupPr;
}

CT_SSubSupPr* CT_SSubSup::mutable_sSubSupPr()
{
    m_has_sSubSupPr = true;
    if (!m_sSubSupPr)
    {
        m_sSubSupPr = new CT_SSubSupPr();
    }
    return m_sSubSupPr;
}

const CT_SSubSupPr& CT_SSubSup::get_sSubSupPr() const
{
    if (m_sSubSupPr)
    {
        return *m_sSubSupPr;
    }
    return CT_SSubSupPr::default_instance();
}

bool CT_SSubSup::has_e() const
{
    return m_has_e;
}

CT_OMathArg* CT_SSubSup::mutable_e()
{
    m_has_e = true;
    if (!m_e)
    {
        m_e = new CT_OMathArg();
    }
    return m_e;
}

const CT_OMathArg& CT_SSubSup::get_e() const
{
    if (m_e)
    {
        return *m_e;
    }
    return CT_OMathArg::default_instance();
}

bool CT_SSubSup::has_sub() const
{
    return m_has_sub;
}

CT_OMathArg* CT_SSubSup::mutable_sub()
{
    m_has_sub = true;
    if (!m_sub)
    {
        m_sub = new CT_OMathArg();
    }
    return m_sub;
}

const CT_OMathArg& CT_SSubSup::get_sub() const
{
    if (m_sub)
    {
        return *m_sub;
    }
    return CT_OMathArg::default_instance();
}

bool CT_SSubSup::has_sup() const
{
    return m_has_sup;
}

CT_OMathArg* CT_SSubSup::mutable_sup()
{
    m_has_sup = true;
    if (!m_sup)
    {
        m_sup = new CT_OMathArg();
    }
    return m_sup;
}

const CT_OMathArg& CT_SSubSup::get_sup() const
{
    if (m_sup)
    {
        return *m_sup;
    }
    return CT_OMathArg::default_instance();
}

void CT_SSubSup::clear()
{
    m_has_sSubSupPr = false;

    if (m_sSubSupPr)
    {
        delete m_sSubSupPr;
        m_sSubSupPr = NULL;
    }


    m_has_e = false;

    if (m_e)
    {
        delete m_e;
        m_e = NULL;
    }


    m_has_sub = false;

    if (m_sub)
    {
        delete m_sub;
        m_sub = NULL;
    }


    m_has_sup = false;

    if (m_sup)
    {
        delete m_sup;
        m_sup = NULL;
    }

}

void CT_SSubSup::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";

    assert(m_has_e);


    assert(m_has_sub);


    assert(m_has_sup);


    if (m_has_sSubSupPr)
    {
        m_sSubSupPr->toXmlElem("m:sSubSupPr", "", _outStream);
    }


    if (m_has_e)
    {
        m_e->toXmlElem("m:e", "", _outStream);
    }


    if (m_has_sub)
    {
        m_sub->toXmlElem("m:sub", "", _outStream);
    }


    if (m_has_sup)
    {
        m_sup->toXmlElem("m:sup", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_SSubSup& CT_SSubSup::default_instance()
{
    if (!CT_SSubSup::default_instance_)
    {
        CT_SSubSup::default_instance_ = new CT_SSubSup();
    }
    return *CT_SSubSup::default_instance_;
}

CT_SSubSup* CT_SSubSup::default_instance_ = NULL;

// CT_SSupPr
CT_SSupPr::CT_SSupPr()
    :m_has_ctrlPr(false),
     m_ctrlPr(NULL)
{
}
CT_SSupPr::~CT_SSupPr()
{
    clear();
}
bool CT_SSupPr::has_ctrlPr() const
{
    return m_has_ctrlPr;
}

CT_CtrlPr* CT_SSupPr::mutable_ctrlPr()
{
    m_has_ctrlPr = true;
    if (!m_ctrlPr)
    {
        m_ctrlPr = new CT_CtrlPr();
    }
    return m_ctrlPr;
}

const CT_CtrlPr& CT_SSupPr::get_ctrlPr() const
{
    if (m_ctrlPr)
    {
        return *m_ctrlPr;
    }
    return CT_CtrlPr::default_instance();
}

void CT_SSupPr::clear()
{
    m_has_ctrlPr = false;

    if (m_ctrlPr)
    {
        delete m_ctrlPr;
        m_ctrlPr = NULL;
    }

}

void CT_SSupPr::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";


    if (m_has_ctrlPr)
    {
        m_ctrlPr->toXmlElem("m:ctrlPr", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_SSupPr& CT_SSupPr::default_instance()
{
    if (!CT_SSupPr::default_instance_)
    {
        CT_SSupPr::default_instance_ = new CT_SSupPr();
    }
    return *CT_SSupPr::default_instance_;
}

CT_SSupPr* CT_SSupPr::default_instance_ = NULL;

// CT_SSup
CT_SSup::CT_SSup()
    :m_has_sSupPr(false),
     m_sSupPr(NULL),
     m_has_e(false),
     m_e(NULL),
     m_has_sup(false),
     m_sup(NULL)
{
}
CT_SSup::~CT_SSup()
{
    clear();
}
bool CT_SSup::has_sSupPr() const
{
    return m_has_sSupPr;
}

CT_SSupPr* CT_SSup::mutable_sSupPr()
{
    m_has_sSupPr = true;
    if (!m_sSupPr)
    {
        m_sSupPr = new CT_SSupPr();
    }
    return m_sSupPr;
}

const CT_SSupPr& CT_SSup::get_sSupPr() const
{
    if (m_sSupPr)
    {
        return *m_sSupPr;
    }
    return CT_SSupPr::default_instance();
}

bool CT_SSup::has_e() const
{
    return m_has_e;
}

CT_OMathArg* CT_SSup::mutable_e()
{
    m_has_e = true;
    if (!m_e)
    {
        m_e = new CT_OMathArg();
    }
    return m_e;
}

const CT_OMathArg& CT_SSup::get_e() const
{
    if (m_e)
    {
        return *m_e;
    }
    return CT_OMathArg::default_instance();
}

bool CT_SSup::has_sup() const
{
    return m_has_sup;
}

CT_OMathArg* CT_SSup::mutable_sup()
{
    m_has_sup = true;
    if (!m_sup)
    {
        m_sup = new CT_OMathArg();
    }
    return m_sup;
}

const CT_OMathArg& CT_SSup::get_sup() const
{
    if (m_sup)
    {
        return *m_sup;
    }
    return CT_OMathArg::default_instance();
}

void CT_SSup::clear()
{
    m_has_sSupPr = false;

    if (m_sSupPr)
    {
        delete m_sSupPr;
        m_sSupPr = NULL;
    }


    m_has_e = false;

    if (m_e)
    {
        delete m_e;
        m_e = NULL;
    }


    m_has_sup = false;

    if (m_sup)
    {
        delete m_sup;
        m_sup = NULL;
    }

}

void CT_SSup::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";

    assert(m_has_e);


    assert(m_has_sup);


    if (m_has_sSupPr)
    {
        m_sSupPr->toXmlElem("m:sSupPr", "", _outStream);
    }


    if (m_has_e)
    {
        m_e->toXmlElem("m:e", "", _outStream);
    }


    if (m_has_sup)
    {
        m_sup->toXmlElem("m:sup", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_SSup& CT_SSup::default_instance()
{
    if (!CT_SSup::default_instance_)
    {
        CT_SSup::default_instance_ = new CT_SSup();
    }
    return *CT_SSup::default_instance_;
}

CT_SSup* CT_SSup::default_instance_ = NULL;

// CT_OMathArgPr
CT_OMathArgPr::CT_OMathArgPr()
    :m_has_argSz(false),
     m_argSz(NULL)
{
}
CT_OMathArgPr::~CT_OMathArgPr()
{
    clear();
}
bool CT_OMathArgPr::has_argSz() const
{
    return m_has_argSz;
}

CT_Integer2* CT_OMathArgPr::mutable_argSz()
{
    m_has_argSz = true;
    if (!m_argSz)
    {
        m_argSz = new CT_Integer2();
    }
    return m_argSz;
}

const CT_Integer2& CT_OMathArgPr::get_argSz() const
{
    if (m_argSz)
    {
        return *m_argSz;
    }
    return CT_Integer2::default_instance();
}

void CT_OMathArgPr::clear()
{
    m_has_argSz = false;

    if (m_argSz)
    {
        delete m_argSz;
        m_argSz = NULL;
    }

}

void CT_OMathArgPr::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";


    if (m_has_argSz)
    {
        m_argSz->toXmlElem("m:argSz", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_OMathArgPr& CT_OMathArgPr::default_instance()
{
    if (!CT_OMathArgPr::default_instance_)
    {
        CT_OMathArgPr::default_instance_ = new CT_OMathArgPr();
    }
    return *CT_OMathArgPr::default_instance_;
}

CT_OMathArgPr* CT_OMathArgPr::default_instance_ = NULL;

// CT_OMathArg
CT_OMathArg::CT_OMathArg()
    :m_has_argPr(false),
     m_argPr(NULL),
     m_has_ctrlPr(false),
     m_ctrlPr(NULL)
{
}
CT_OMathArg::~CT_OMathArg()
{
    clear();
}
bool CT_OMathArg::has_argPr() const
{
    return m_has_argPr;
}

CT_OMathArgPr* CT_OMathArg::mutable_argPr()
{
    m_has_argPr = true;
    if (!m_argPr)
    {
        m_argPr = new CT_OMathArgPr();
    }
    return m_argPr;
}

const CT_OMathArgPr& CT_OMathArg::get_argPr() const
{
    if (m_argPr)
    {
        return *m_argPr;
    }
    return CT_OMathArgPr::default_instance();
}

CT_Acc* CT_OMathArg::add_acc()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Acc* pNewChild = pChildGroup->mutable_acc();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

CT_Bar* CT_OMathArg::add_bar()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Bar* pNewChild = pChildGroup->mutable_bar();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

CT_Box* CT_OMathArg::add_box()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Box* pNewChild = pChildGroup->mutable_box();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

CT_BorderBox* CT_OMathArg::add_borderBox()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_BorderBox* pNewChild = pChildGroup->mutable_borderBox();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

CT_D* CT_OMathArg::add_d()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_D* pNewChild = pChildGroup->mutable_d();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

CT_EqArr* CT_OMathArg::add_eqArr()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_EqArr* pNewChild = pChildGroup->mutable_eqArr();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

CT_F* CT_OMathArg::add_f()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_F* pNewChild = pChildGroup->mutable_f();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

CT_Func* CT_OMathArg::add_func()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Func* pNewChild = pChildGroup->mutable_func();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

CT_GroupChr* CT_OMathArg::add_groupChr()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_GroupChr* pNewChild = pChildGroup->mutable_groupChr();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

CT_LimLow* CT_OMathArg::add_limLow()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_LimLow* pNewChild = pChildGroup->mutable_limLow();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

CT_LimUpp* CT_OMathArg::add_limUpp()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_LimUpp* pNewChild = pChildGroup->mutable_limUpp();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

CT_M* CT_OMathArg::add_m()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_M* pNewChild = pChildGroup->mutable_m();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

CT_Nary* CT_OMathArg::add_nary()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Nary* pNewChild = pChildGroup->mutable_nary();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

CT_Phant* CT_OMathArg::add_phant()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Phant* pNewChild = pChildGroup->mutable_phant();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

CT_Rad* CT_OMathArg::add_rad()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Rad* pNewChild = pChildGroup->mutable_rad();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

CT_SPre* CT_OMathArg::add_sPre()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_SPre* pNewChild = pChildGroup->mutable_sPre();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

CT_SSub* CT_OMathArg::add_sSub()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_SSub* pNewChild = pChildGroup->mutable_sSub();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

CT_SSubSup* CT_OMathArg::add_sSubSup()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_SSubSup* pNewChild = pChildGroup->mutable_sSubSup();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

CT_SSup* CT_OMathArg::add_sSup()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_SSup* pNewChild = pChildGroup->mutable_sSup();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

CT_R* CT_OMathArg::add_r()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_R* pNewChild = pChildGroup->mutable_r();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

ns_w::CT_CustomXmlRun* CT_OMathArg::add_w_customXml()
{
    ChildGroup_2 *pChildGroup = new ChildGroup_2();
    ns_w::CT_CustomXmlRun* pNewChild = pChildGroup->mutable_w_customXml();
    m_childGroupList_2.push_back(pChildGroup);
    return pNewChild;
}

ns_w::CT_SimpleField* CT_OMathArg::add_w_fldSimple()
{
    ChildGroup_2 *pChildGroup = new ChildGroup_2();
    ns_w::CT_SimpleField* pNewChild = pChildGroup->mutable_w_fldSimple();
    m_childGroupList_2.push_back(pChildGroup);
    return pNewChild;
}

ns_w::CT_Hyperlink* CT_OMathArg::add_w_hyperlink()
{
    ChildGroup_2 *pChildGroup = new ChildGroup_2();
    ns_w::CT_Hyperlink* pNewChild = pChildGroup->mutable_w_hyperlink();
    m_childGroupList_2.push_back(pChildGroup);
    return pNewChild;
}

ns_w::CT_SmartTagRun* CT_OMathArg::add_w_smartTag()
{
    ChildGroup_3 *pChildGroup = new ChildGroup_3();
    ns_w::CT_SmartTagRun* pNewChild = pChildGroup->mutable_w_smartTag();
    m_childGroupList_3.push_back(pChildGroup);
    return pNewChild;
}

ns_w::CT_SdtRun* CT_OMathArg::add_w_sdt()
{
    ChildGroup_3 *pChildGroup = new ChildGroup_3();
    ns_w::CT_SdtRun* pNewChild = pChildGroup->mutable_w_sdt();
    m_childGroupList_3.push_back(pChildGroup);
    return pNewChild;
}

ns_w::CT_ProofErr* CT_OMathArg::add_w_proofErr()
{
    ChildGroup_4 *pChildGroup = new ChildGroup_4();
    ns_w::CT_ProofErr* pNewChild = pChildGroup->mutable_w_proofErr();
    m_childGroupList_4.push_back(pChildGroup);
    return pNewChild;
}

ns_w::CT_PermStart* CT_OMathArg::add_w_permStart()
{
    ChildGroup_4 *pChildGroup = new ChildGroup_4();
    ns_w::CT_PermStart* pNewChild = pChildGroup->mutable_w_permStart();
    m_childGroupList_4.push_back(pChildGroup);
    return pNewChild;
}

ns_w::CT_Perm* CT_OMathArg::add_w_permEnd()
{
    ChildGroup_4 *pChildGroup = new ChildGroup_4();
    ns_w::CT_Perm* pNewChild = pChildGroup->mutable_w_permEnd();
    m_childGroupList_4.push_back(pChildGroup);
    return pNewChild;
}

ns_w::CT_Bookmark* CT_OMathArg::add_w_bookmarkStart()
{
    ChildGroup_5 *pChildGroup = new ChildGroup_5();
    ns_w::CT_Bookmark* pNewChild = pChildGroup->mutable_w_bookmarkStart();
    m_childGroupList_5.push_back(pChildGroup);
    return pNewChild;
}

ns_w::CT_MarkupRange* CT_OMathArg::add_w_bookmarkEnd()
{
    ChildGroup_5 *pChildGroup = new ChildGroup_5();
    ns_w::CT_MarkupRange* pNewChild = pChildGroup->mutable_w_bookmarkEnd();
    m_childGroupList_5.push_back(pChildGroup);
    return pNewChild;
}

ns_w::CT_MoveBookmark* CT_OMathArg::add_w_moveFromRangeStart()
{
    ChildGroup_5 *pChildGroup = new ChildGroup_5();
    ns_w::CT_MoveBookmark* pNewChild = pChildGroup->mutable_w_moveFromRangeStart();
    m_childGroupList_5.push_back(pChildGroup);
    return pNewChild;
}

ns_w::CT_MarkupRange* CT_OMathArg::add_w_moveFromRangeEnd()
{
    ChildGroup_5 *pChildGroup = new ChildGroup_5();
    ns_w::CT_MarkupRange* pNewChild = pChildGroup->mutable_w_moveFromRangeEnd();
    m_childGroupList_5.push_back(pChildGroup);
    return pNewChild;
}

ns_w::CT_MoveBookmark* CT_OMathArg::add_w_moveToRangeStart()
{
    ChildGroup_5 *pChildGroup = new ChildGroup_5();
    ns_w::CT_MoveBookmark* pNewChild = pChildGroup->mutable_w_moveToRangeStart();
    m_childGroupList_5.push_back(pChildGroup);
    return pNewChild;
}

ns_w::CT_MarkupRange* CT_OMathArg::add_w_moveToRangeEnd()
{
    ChildGroup_5 *pChildGroup = new ChildGroup_5();
    ns_w::CT_MarkupRange* pNewChild = pChildGroup->mutable_w_moveToRangeEnd();
    m_childGroupList_5.push_back(pChildGroup);
    return pNewChild;
}

ns_w::CT_MarkupRange* CT_OMathArg::add_w_commentRangeStart()
{
    ChildGroup_5 *pChildGroup = new ChildGroup_5();
    ns_w::CT_MarkupRange* pNewChild = pChildGroup->mutable_w_commentRangeStart();
    m_childGroupList_5.push_back(pChildGroup);
    return pNewChild;
}

ns_w::CT_MarkupRange* CT_OMathArg::add_w_commentRangeEnd()
{
    ChildGroup_5 *pChildGroup = new ChildGroup_5();
    ns_w::CT_MarkupRange* pNewChild = pChildGroup->mutable_w_commentRangeEnd();
    m_childGroupList_5.push_back(pChildGroup);
    return pNewChild;
}

ns_w::CT_TrackChange* CT_OMathArg::add_w_customXmlInsRangeStart()
{
    ChildGroup_5 *pChildGroup = new ChildGroup_5();
    ns_w::CT_TrackChange* pNewChild = pChildGroup->mutable_w_customXmlInsRangeStart();
    m_childGroupList_5.push_back(pChildGroup);
    return pNewChild;
}

ns_w::CT_Markup* CT_OMathArg::add_w_customXmlInsRangeEnd()
{
    ChildGroup_5 *pChildGroup = new ChildGroup_5();
    ns_w::CT_Markup* pNewChild = pChildGroup->mutable_w_customXmlInsRangeEnd();
    m_childGroupList_5.push_back(pChildGroup);
    return pNewChild;
}

ns_w::CT_TrackChange* CT_OMathArg::add_w_customXmlDelRangeStart()
{
    ChildGroup_5 *pChildGroup = new ChildGroup_5();
    ns_w::CT_TrackChange* pNewChild = pChildGroup->mutable_w_customXmlDelRangeStart();
    m_childGroupList_5.push_back(pChildGroup);
    return pNewChild;
}

ns_w::CT_Markup* CT_OMathArg::add_w_customXmlDelRangeEnd()
{
    ChildGroup_5 *pChildGroup = new ChildGroup_5();
    ns_w::CT_Markup* pNewChild = pChildGroup->mutable_w_customXmlDelRangeEnd();
    m_childGroupList_5.push_back(pChildGroup);
    return pNewChild;
}

ns_w::CT_TrackChange* CT_OMathArg::add_w_customXmlMoveFromRangeStart()
{
    ChildGroup_5 *pChildGroup = new ChildGroup_5();
    ns_w::CT_TrackChange* pNewChild = pChildGroup->mutable_w_customXmlMoveFromRangeStart();
    m_childGroupList_5.push_back(pChildGroup);
    return pNewChild;
}

ns_w::CT_Markup* CT_OMathArg::add_w_customXmlMoveFromRangeEnd()
{
    ChildGroup_5 *pChildGroup = new ChildGroup_5();
    ns_w::CT_Markup* pNewChild = pChildGroup->mutable_w_customXmlMoveFromRangeEnd();
    m_childGroupList_5.push_back(pChildGroup);
    return pNewChild;
}

ns_w::CT_TrackChange* CT_OMathArg::add_w_customXmlMoveToRangeStart()
{
    ChildGroup_5 *pChildGroup = new ChildGroup_5();
    ns_w::CT_TrackChange* pNewChild = pChildGroup->mutable_w_customXmlMoveToRangeStart();
    m_childGroupList_5.push_back(pChildGroup);
    return pNewChild;
}

ns_w::CT_Markup* CT_OMathArg::add_w_customXmlMoveToRangeEnd()
{
    ChildGroup_5 *pChildGroup = new ChildGroup_5();
    ns_w::CT_Markup* pNewChild = pChildGroup->mutable_w_customXmlMoveToRangeEnd();
    m_childGroupList_5.push_back(pChildGroup);
    return pNewChild;
}

ns_w::CT_RunTrackChange* CT_OMathArg::add_w_ins()
{
    ChildGroup_6 *pChildGroup = new ChildGroup_6();
    ns_w::CT_RunTrackChange* pNewChild = pChildGroup->mutable_w_ins();
    m_childGroupList_6.push_back(pChildGroup);
    return pNewChild;
}

ns_w::CT_RunTrackChange* CT_OMathArg::add_w_del()
{
    ChildGroup_6 *pChildGroup = new ChildGroup_6();
    ns_w::CT_RunTrackChange* pNewChild = pChildGroup->mutable_w_del();
    m_childGroupList_6.push_back(pChildGroup);
    return pNewChild;
}

ns_w::CT_RunTrackChange* CT_OMathArg::add_w_moveFrom()
{
    ChildGroup_6 *pChildGroup = new ChildGroup_6();
    ns_w::CT_RunTrackChange* pNewChild = pChildGroup->mutable_w_moveFrom();
    m_childGroupList_6.push_back(pChildGroup);
    return pNewChild;
}

ns_w::CT_RunTrackChange* CT_OMathArg::add_w_moveTo()
{
    ChildGroup_6 *pChildGroup = new ChildGroup_6();
    ns_w::CT_RunTrackChange* pNewChild = pChildGroup->mutable_w_moveTo();
    m_childGroupList_6.push_back(pChildGroup);
    return pNewChild;
}

ns_m::CT_OMathPara* CT_OMathArg::add_m_oMathPara()
{
    ChildGroup_7 *pChildGroup = new ChildGroup_7();
    ns_m::CT_OMathPara* pNewChild = pChildGroup->mutable_m_oMathPara();
    m_childGroupList_7.push_back(pChildGroup);
    return pNewChild;
}

ns_m::CT_OMath* CT_OMathArg::add_m_oMath()
{
    ChildGroup_7 *pChildGroup = new ChildGroup_7();
    ns_m::CT_OMath* pNewChild = pChildGroup->mutable_m_oMath();
    m_childGroupList_7.push_back(pChildGroup);
    return pNewChild;
}

bool CT_OMathArg::has_ctrlPr() const
{
    return m_has_ctrlPr;
}

CT_CtrlPr* CT_OMathArg::mutable_ctrlPr()
{
    m_has_ctrlPr = true;
    if (!m_ctrlPr)
    {
        m_ctrlPr = new CT_CtrlPr();
    }
    return m_ctrlPr;
}

const CT_CtrlPr& CT_OMathArg::get_ctrlPr() const
{
    if (m_ctrlPr)
    {
        return *m_ctrlPr;
    }
    return CT_CtrlPr::default_instance();
}

void CT_OMathArg::clear()
{
    m_has_argPr = false;

    if (m_argPr)
    {
        delete m_argPr;
        m_argPr = NULL;
    }


    {
        vector<ChildGroup_1*>::iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_1.clear();
    }

    {
        vector<ChildGroup_2*>::iterator iter;
        for (iter = m_childGroupList_2.begin(); iter != m_childGroupList_2.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_2.clear();
    }

    {
        vector<ChildGroup_3*>::iterator iter;
        for (iter = m_childGroupList_3.begin(); iter != m_childGroupList_3.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_3.clear();
    }

    {
        vector<ChildGroup_4*>::iterator iter;
        for (iter = m_childGroupList_4.begin(); iter != m_childGroupList_4.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_4.clear();
    }

    {
        vector<ChildGroup_5*>::iterator iter;
        for (iter = m_childGroupList_5.begin(); iter != m_childGroupList_5.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_5.clear();
    }

    {
        vector<ChildGroup_6*>::iterator iter;
        for (iter = m_childGroupList_6.begin(); iter != m_childGroupList_6.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_6.clear();
    }

    {
        vector<ChildGroup_7*>::iterator iter;
        for (iter = m_childGroupList_7.begin(); iter != m_childGroupList_7.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_7.clear();
    }

    m_has_ctrlPr = false;

    if (m_ctrlPr)
    {
        delete m_ctrlPr;
        m_ctrlPr = NULL;
    }

}

void CT_OMathArg::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";


    if (m_has_argPr)
    {
        m_argPr->toXmlElem("m:argPr", "", _outStream);
    }

    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_acc())
            {
                (*iter)->get_acc().toXmlElem("m:acc", "", _outStream);
            }


            else if ((*iter)->has_bar())
            {
                (*iter)->get_bar().toXmlElem("m:bar", "", _outStream);
            }


            else if ((*iter)->has_box())
            {
                (*iter)->get_box().toXmlElem("m:box", "", _outStream);
            }


            else if ((*iter)->has_borderBox())
            {
                (*iter)->get_borderBox().toXmlElem("m:borderBox", "", _outStream);
            }


            else if ((*iter)->has_d())
            {
                (*iter)->get_d().toXmlElem("m:d", "", _outStream);
            }


            else if ((*iter)->has_eqArr())
            {
                (*iter)->get_eqArr().toXmlElem("m:eqArr", "", _outStream);
            }


            else if ((*iter)->has_f())
            {
                (*iter)->get_f().toXmlElem("m:f", "", _outStream);
            }


            else if ((*iter)->has_func())
            {
                (*iter)->get_func().toXmlElem("m:func", "", _outStream);
            }


            else if ((*iter)->has_groupChr())
            {
                (*iter)->get_groupChr().toXmlElem("m:groupChr", "", _outStream);
            }


            else if ((*iter)->has_limLow())
            {
                (*iter)->get_limLow().toXmlElem("m:limLow", "", _outStream);
            }


            else if ((*iter)->has_limUpp())
            {
                (*iter)->get_limUpp().toXmlElem("m:limUpp", "", _outStream);
            }


            else if ((*iter)->has_m())
            {
                (*iter)->get_m().toXmlElem("m:m", "", _outStream);
            }


            else if ((*iter)->has_nary())
            {
                (*iter)->get_nary().toXmlElem("m:nary", "", _outStream);
            }


            else if ((*iter)->has_phant())
            {
                (*iter)->get_phant().toXmlElem("m:phant", "", _outStream);
            }


            else if ((*iter)->has_rad())
            {
                (*iter)->get_rad().toXmlElem("m:rad", "", _outStream);
            }


            else if ((*iter)->has_sPre())
            {
                (*iter)->get_sPre().toXmlElem("m:sPre", "", _outStream);
            }


            else if ((*iter)->has_sSub())
            {
                (*iter)->get_sSub().toXmlElem("m:sSub", "", _outStream);
            }


            else if ((*iter)->has_sSubSup())
            {
                (*iter)->get_sSubSup().toXmlElem("m:sSubSup", "", _outStream);
            }


            else if ((*iter)->has_sSup())
            {
                (*iter)->get_sSup().toXmlElem("m:sSup", "", _outStream);
            }


            else if ((*iter)->has_r())
            {
                (*iter)->get_r().toXmlElem("m:r", "", _outStream);
            }


        }
    }

    {
        vector<ChildGroup_2*>::const_iterator iter;
        for (iter = m_childGroupList_2.begin(); iter != m_childGroupList_2.end(); ++iter)
        {
            if ((*iter)->has_w_customXml())
            {
                (*iter)->get_w_customXml().toXmlElem("w:customXml", "", _outStream);
            }


            else if ((*iter)->has_w_fldSimple())
            {
                (*iter)->get_w_fldSimple().toXmlElem("w:fldSimple", "", _outStream);
            }


            else if ((*iter)->has_w_hyperlink())
            {
                (*iter)->get_w_hyperlink().toXmlElem("w:hyperlink", "", _outStream);
            }


        }
    }

    {
        vector<ChildGroup_3*>::const_iterator iter;
        for (iter = m_childGroupList_3.begin(); iter != m_childGroupList_3.end(); ++iter)
        {
            if ((*iter)->has_w_smartTag())
            {
                (*iter)->get_w_smartTag().toXmlElem("w:smartTag", "", _outStream);
            }


            else if ((*iter)->has_w_sdt())
            {
                (*iter)->get_w_sdt().toXmlElem("w:sdt", "", _outStream);
            }


        }
    }

    {
        const size_t childSize = m_childGroupList_4.size();
        assert(0 <= childSize && childSize <= 1);
    }

    {
        vector<ChildGroup_4*>::const_iterator iter;
        for (iter = m_childGroupList_4.begin(); iter != m_childGroupList_4.end(); ++iter)
        {
            if ((*iter)->has_w_proofErr())
            {
                (*iter)->get_w_proofErr().toXmlElem("w:proofErr", "", _outStream);
            }


            else if ((*iter)->has_w_permStart())
            {
                (*iter)->get_w_permStart().toXmlElem("w:permStart", "", _outStream);
            }


            else if ((*iter)->has_w_permEnd())
            {
                (*iter)->get_w_permEnd().toXmlElem("w:permEnd", "", _outStream);
            }


        }
    }

    {
        vector<ChildGroup_5*>::const_iterator iter;
        for (iter = m_childGroupList_5.begin(); iter != m_childGroupList_5.end(); ++iter)
        {
            if ((*iter)->has_w_bookmarkStart())
            {
                (*iter)->get_w_bookmarkStart().toXmlElem("w:bookmarkStart", "", _outStream);
            }


            else if ((*iter)->has_w_bookmarkEnd())
            {
                (*iter)->get_w_bookmarkEnd().toXmlElem("w:bookmarkEnd", "", _outStream);
            }


            else if ((*iter)->has_w_moveFromRangeStart())
            {
                (*iter)->get_w_moveFromRangeStart().toXmlElem("w:moveFromRangeStart", "", _outStream);
            }


            else if ((*iter)->has_w_moveFromRangeEnd())
            {
                (*iter)->get_w_moveFromRangeEnd().toXmlElem("w:moveFromRangeEnd", "", _outStream);
            }


            else if ((*iter)->has_w_moveToRangeStart())
            {
                (*iter)->get_w_moveToRangeStart().toXmlElem("w:moveToRangeStart", "", _outStream);
            }


            else if ((*iter)->has_w_moveToRangeEnd())
            {
                (*iter)->get_w_moveToRangeEnd().toXmlElem("w:moveToRangeEnd", "", _outStream);
            }


            else if ((*iter)->has_w_commentRangeStart())
            {
                (*iter)->get_w_commentRangeStart().toXmlElem("w:commentRangeStart", "", _outStream);
            }


            else if ((*iter)->has_w_commentRangeEnd())
            {
                (*iter)->get_w_commentRangeEnd().toXmlElem("w:commentRangeEnd", "", _outStream);
            }


            else if ((*iter)->has_w_customXmlInsRangeStart())
            {
                (*iter)->get_w_customXmlInsRangeStart().toXmlElem("w:customXmlInsRangeStart", "", _outStream);
            }


            else if ((*iter)->has_w_customXmlInsRangeEnd())
            {
                (*iter)->get_w_customXmlInsRangeEnd().toXmlElem("w:customXmlInsRangeEnd", "", _outStream);
            }


            else if ((*iter)->has_w_customXmlDelRangeStart())
            {
                (*iter)->get_w_customXmlDelRangeStart().toXmlElem("w:customXmlDelRangeStart", "", _outStream);
            }


            else if ((*iter)->has_w_customXmlDelRangeEnd())
            {
                (*iter)->get_w_customXmlDelRangeEnd().toXmlElem("w:customXmlDelRangeEnd", "", _outStream);
            }


            else if ((*iter)->has_w_customXmlMoveFromRangeStart())
            {
                (*iter)->get_w_customXmlMoveFromRangeStart().toXmlElem("w:customXmlMoveFromRangeStart", "", _outStream);
            }


            else if ((*iter)->has_w_customXmlMoveFromRangeEnd())
            {
                (*iter)->get_w_customXmlMoveFromRangeEnd().toXmlElem("w:customXmlMoveFromRangeEnd", "", _outStream);
            }


            else if ((*iter)->has_w_customXmlMoveToRangeStart())
            {
                (*iter)->get_w_customXmlMoveToRangeStart().toXmlElem("w:customXmlMoveToRangeStart", "", _outStream);
            }


            else if ((*iter)->has_w_customXmlMoveToRangeEnd())
            {
                (*iter)->get_w_customXmlMoveToRangeEnd().toXmlElem("w:customXmlMoveToRangeEnd", "", _outStream);
            }


        }
    }

    {
        vector<ChildGroup_6*>::const_iterator iter;
        for (iter = m_childGroupList_6.begin(); iter != m_childGroupList_6.end(); ++iter)
        {
            if ((*iter)->has_w_ins())
            {
                (*iter)->get_w_ins().toXmlElem("w:ins", "", _outStream);
            }


            else if ((*iter)->has_w_del())
            {
                (*iter)->get_w_del().toXmlElem("w:del", "", _outStream);
            }


            else if ((*iter)->has_w_moveFrom())
            {
                (*iter)->get_w_moveFrom().toXmlElem("w:moveFrom", "", _outStream);
            }


            else if ((*iter)->has_w_moveTo())
            {
                (*iter)->get_w_moveTo().toXmlElem("w:moveTo", "", _outStream);
            }


        }
    }

    {
        vector<ChildGroup_7*>::const_iterator iter;
        for (iter = m_childGroupList_7.begin(); iter != m_childGroupList_7.end(); ++iter)
        {
            if ((*iter)->has_m_oMathPara())
            {
                (*iter)->get_m_oMathPara().toXmlElem("m:oMathPara", "", _outStream);
            }


            else if ((*iter)->has_m_oMath())
            {
                (*iter)->get_m_oMath().toXmlElem("m:oMath", "", _outStream);
            }


        }
    }


    if (m_has_ctrlPr)
    {
        m_ctrlPr->toXmlElem("m:ctrlPr", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_OMathArg& CT_OMathArg::default_instance()
{
    if (!CT_OMathArg::default_instance_)
    {
        CT_OMathArg::default_instance_ = new CT_OMathArg();
    }
    return *CT_OMathArg::default_instance_;
}


// CT_OMathArg::ChildGroup_1
CT_OMathArg::ChildGroup_1::ChildGroup_1()
    :m_has_acc(false),
     m_acc(NULL),
     m_has_bar(false),
     m_bar(NULL),
     m_has_box(false),
     m_box(NULL),
     m_has_borderBox(false),
     m_borderBox(NULL),
     m_has_d(false),
     m_d(NULL),
     m_has_eqArr(false),
     m_eqArr(NULL),
     m_has_f(false),
     m_f(NULL),
     m_has_func(false),
     m_func(NULL),
     m_has_groupChr(false),
     m_groupChr(NULL),
     m_has_limLow(false),
     m_limLow(NULL),
     m_has_limUpp(false),
     m_limUpp(NULL),
     m_has_m(false),
     m_m(NULL),
     m_has_nary(false),
     m_nary(NULL),
     m_has_phant(false),
     m_phant(NULL),
     m_has_rad(false),
     m_rad(NULL),
     m_has_sPre(false),
     m_sPre(NULL),
     m_has_sSub(false),
     m_sSub(NULL),
     m_has_sSubSup(false),
     m_sSubSup(NULL),
     m_has_sSup(false),
     m_sSup(NULL),
     m_has_r(false),
     m_r(NULL)
{
}
bool CT_OMathArg::ChildGroup_1::has_acc() const
{
    return m_has_acc;
}

CT_Acc* CT_OMathArg::ChildGroup_1::mutable_acc()
{

    m_has_bar = false;

    if (m_bar)
    {
        delete m_bar;
        m_bar = NULL;
    }
    ;

    m_has_box = false;

    if (m_box)
    {
        delete m_box;
        m_box = NULL;
    }
    ;

    m_has_borderBox = false;

    if (m_borderBox)
    {
        delete m_borderBox;
        m_borderBox = NULL;
    }
    ;

    m_has_d = false;

    if (m_d)
    {
        delete m_d;
        m_d = NULL;
    }
    ;

    m_has_eqArr = false;

    if (m_eqArr)
    {
        delete m_eqArr;
        m_eqArr = NULL;
    }
    ;

    m_has_f = false;

    if (m_f)
    {
        delete m_f;
        m_f = NULL;
    }
    ;

    m_has_func = false;

    if (m_func)
    {
        delete m_func;
        m_func = NULL;
    }
    ;

    m_has_groupChr = false;

    if (m_groupChr)
    {
        delete m_groupChr;
        m_groupChr = NULL;
    }
    ;

    m_has_limLow = false;

    if (m_limLow)
    {
        delete m_limLow;
        m_limLow = NULL;
    }
    ;

    m_has_limUpp = false;

    if (m_limUpp)
    {
        delete m_limUpp;
        m_limUpp = NULL;
    }
    ;

    m_has_m = false;

    if (m_m)
    {
        delete m_m;
        m_m = NULL;
    }
    ;

    m_has_nary = false;

    if (m_nary)
    {
        delete m_nary;
        m_nary = NULL;
    }
    ;

    m_has_phant = false;

    if (m_phant)
    {
        delete m_phant;
        m_phant = NULL;
    }
    ;

    m_has_rad = false;

    if (m_rad)
    {
        delete m_rad;
        m_rad = NULL;
    }
    ;

    m_has_sPre = false;

    if (m_sPre)
    {
        delete m_sPre;
        m_sPre = NULL;
    }
    ;

    m_has_sSub = false;

    if (m_sSub)
    {
        delete m_sSub;
        m_sSub = NULL;
    }
    ;

    m_has_sSubSup = false;

    if (m_sSubSup)
    {
        delete m_sSubSup;
        m_sSubSup = NULL;
    }
    ;

    m_has_sSup = false;

    if (m_sSup)
    {
        delete m_sSup;
        m_sSup = NULL;
    }
    ;

    m_has_r = false;

    if (m_r)
    {
        delete m_r;
        m_r = NULL;
    }
    ;

    m_has_acc = true;
    if (!m_acc)
    {
        m_acc = new CT_Acc();
    }
    return m_acc;
}

const CT_Acc& CT_OMathArg::ChildGroup_1::get_acc() const
{
    if (m_acc)
    {
        return *m_acc;
    }
    return CT_Acc::default_instance();
}

bool CT_OMathArg::ChildGroup_1::has_bar() const
{
    return m_has_bar;
}

CT_Bar* CT_OMathArg::ChildGroup_1::mutable_bar()
{

    m_has_acc = false;

    if (m_acc)
    {
        delete m_acc;
        m_acc = NULL;
    }
    ;

    m_has_box = false;

    if (m_box)
    {
        delete m_box;
        m_box = NULL;
    }
    ;

    m_has_borderBox = false;

    if (m_borderBox)
    {
        delete m_borderBox;
        m_borderBox = NULL;
    }
    ;

    m_has_d = false;

    if (m_d)
    {
        delete m_d;
        m_d = NULL;
    }
    ;

    m_has_eqArr = false;

    if (m_eqArr)
    {
        delete m_eqArr;
        m_eqArr = NULL;
    }
    ;

    m_has_f = false;

    if (m_f)
    {
        delete m_f;
        m_f = NULL;
    }
    ;

    m_has_func = false;

    if (m_func)
    {
        delete m_func;
        m_func = NULL;
    }
    ;

    m_has_groupChr = false;

    if (m_groupChr)
    {
        delete m_groupChr;
        m_groupChr = NULL;
    }
    ;

    m_has_limLow = false;

    if (m_limLow)
    {
        delete m_limLow;
        m_limLow = NULL;
    }
    ;

    m_has_limUpp = false;

    if (m_limUpp)
    {
        delete m_limUpp;
        m_limUpp = NULL;
    }
    ;

    m_has_m = false;

    if (m_m)
    {
        delete m_m;
        m_m = NULL;
    }
    ;

    m_has_nary = false;

    if (m_nary)
    {
        delete m_nary;
        m_nary = NULL;
    }
    ;

    m_has_phant = false;

    if (m_phant)
    {
        delete m_phant;
        m_phant = NULL;
    }
    ;

    m_has_rad = false;

    if (m_rad)
    {
        delete m_rad;
        m_rad = NULL;
    }
    ;

    m_has_sPre = false;

    if (m_sPre)
    {
        delete m_sPre;
        m_sPre = NULL;
    }
    ;

    m_has_sSub = false;

    if (m_sSub)
    {
        delete m_sSub;
        m_sSub = NULL;
    }
    ;

    m_has_sSubSup = false;

    if (m_sSubSup)
    {
        delete m_sSubSup;
        m_sSubSup = NULL;
    }
    ;

    m_has_sSup = false;

    if (m_sSup)
    {
        delete m_sSup;
        m_sSup = NULL;
    }
    ;

    m_has_r = false;

    if (m_r)
    {
        delete m_r;
        m_r = NULL;
    }
    ;

    m_has_bar = true;
    if (!m_bar)
    {
        m_bar = new CT_Bar();
    }
    return m_bar;
}

const CT_Bar& CT_OMathArg::ChildGroup_1::get_bar() const
{
    if (m_bar)
    {
        return *m_bar;
    }
    return CT_Bar::default_instance();
}

bool CT_OMathArg::ChildGroup_1::has_box() const
{
    return m_has_box;
}

CT_Box* CT_OMathArg::ChildGroup_1::mutable_box()
{

    m_has_acc = false;

    if (m_acc)
    {
        delete m_acc;
        m_acc = NULL;
    }
    ;

    m_has_bar = false;

    if (m_bar)
    {
        delete m_bar;
        m_bar = NULL;
    }
    ;

    m_has_borderBox = false;

    if (m_borderBox)
    {
        delete m_borderBox;
        m_borderBox = NULL;
    }
    ;

    m_has_d = false;

    if (m_d)
    {
        delete m_d;
        m_d = NULL;
    }
    ;

    m_has_eqArr = false;

    if (m_eqArr)
    {
        delete m_eqArr;
        m_eqArr = NULL;
    }
    ;

    m_has_f = false;

    if (m_f)
    {
        delete m_f;
        m_f = NULL;
    }
    ;

    m_has_func = false;

    if (m_func)
    {
        delete m_func;
        m_func = NULL;
    }
    ;

    m_has_groupChr = false;

    if (m_groupChr)
    {
        delete m_groupChr;
        m_groupChr = NULL;
    }
    ;

    m_has_limLow = false;

    if (m_limLow)
    {
        delete m_limLow;
        m_limLow = NULL;
    }
    ;

    m_has_limUpp = false;

    if (m_limUpp)
    {
        delete m_limUpp;
        m_limUpp = NULL;
    }
    ;

    m_has_m = false;

    if (m_m)
    {
        delete m_m;
        m_m = NULL;
    }
    ;

    m_has_nary = false;

    if (m_nary)
    {
        delete m_nary;
        m_nary = NULL;
    }
    ;

    m_has_phant = false;

    if (m_phant)
    {
        delete m_phant;
        m_phant = NULL;
    }
    ;

    m_has_rad = false;

    if (m_rad)
    {
        delete m_rad;
        m_rad = NULL;
    }
    ;

    m_has_sPre = false;

    if (m_sPre)
    {
        delete m_sPre;
        m_sPre = NULL;
    }
    ;

    m_has_sSub = false;

    if (m_sSub)
    {
        delete m_sSub;
        m_sSub = NULL;
    }
    ;

    m_has_sSubSup = false;

    if (m_sSubSup)
    {
        delete m_sSubSup;
        m_sSubSup = NULL;
    }
    ;

    m_has_sSup = false;

    if (m_sSup)
    {
        delete m_sSup;
        m_sSup = NULL;
    }
    ;

    m_has_r = false;

    if (m_r)
    {
        delete m_r;
        m_r = NULL;
    }
    ;

    m_has_box = true;
    if (!m_box)
    {
        m_box = new CT_Box();
    }
    return m_box;
}

const CT_Box& CT_OMathArg::ChildGroup_1::get_box() const
{
    if (m_box)
    {
        return *m_box;
    }
    return CT_Box::default_instance();
}

bool CT_OMathArg::ChildGroup_1::has_borderBox() const
{
    return m_has_borderBox;
}

CT_BorderBox* CT_OMathArg::ChildGroup_1::mutable_borderBox()
{

    m_has_acc = false;

    if (m_acc)
    {
        delete m_acc;
        m_acc = NULL;
    }
    ;

    m_has_bar = false;

    if (m_bar)
    {
        delete m_bar;
        m_bar = NULL;
    }
    ;

    m_has_box = false;

    if (m_box)
    {
        delete m_box;
        m_box = NULL;
    }
    ;

    m_has_d = false;

    if (m_d)
    {
        delete m_d;
        m_d = NULL;
    }
    ;

    m_has_eqArr = false;

    if (m_eqArr)
    {
        delete m_eqArr;
        m_eqArr = NULL;
    }
    ;

    m_has_f = false;

    if (m_f)
    {
        delete m_f;
        m_f = NULL;
    }
    ;

    m_has_func = false;

    if (m_func)
    {
        delete m_func;
        m_func = NULL;
    }
    ;

    m_has_groupChr = false;

    if (m_groupChr)
    {
        delete m_groupChr;
        m_groupChr = NULL;
    }
    ;

    m_has_limLow = false;

    if (m_limLow)
    {
        delete m_limLow;
        m_limLow = NULL;
    }
    ;

    m_has_limUpp = false;

    if (m_limUpp)
    {
        delete m_limUpp;
        m_limUpp = NULL;
    }
    ;

    m_has_m = false;

    if (m_m)
    {
        delete m_m;
        m_m = NULL;
    }
    ;

    m_has_nary = false;

    if (m_nary)
    {
        delete m_nary;
        m_nary = NULL;
    }
    ;

    m_has_phant = false;

    if (m_phant)
    {
        delete m_phant;
        m_phant = NULL;
    }
    ;

    m_has_rad = false;

    if (m_rad)
    {
        delete m_rad;
        m_rad = NULL;
    }
    ;

    m_has_sPre = false;

    if (m_sPre)
    {
        delete m_sPre;
        m_sPre = NULL;
    }
    ;

    m_has_sSub = false;

    if (m_sSub)
    {
        delete m_sSub;
        m_sSub = NULL;
    }
    ;

    m_has_sSubSup = false;

    if (m_sSubSup)
    {
        delete m_sSubSup;
        m_sSubSup = NULL;
    }
    ;

    m_has_sSup = false;

    if (m_sSup)
    {
        delete m_sSup;
        m_sSup = NULL;
    }
    ;

    m_has_r = false;

    if (m_r)
    {
        delete m_r;
        m_r = NULL;
    }
    ;

    m_has_borderBox = true;
    if (!m_borderBox)
    {
        m_borderBox = new CT_BorderBox();
    }
    return m_borderBox;
}

const CT_BorderBox& CT_OMathArg::ChildGroup_1::get_borderBox() const
{
    if (m_borderBox)
    {
        return *m_borderBox;
    }
    return CT_BorderBox::default_instance();
}

bool CT_OMathArg::ChildGroup_1::has_d() const
{
    return m_has_d;
}

CT_D* CT_OMathArg::ChildGroup_1::mutable_d()
{

    m_has_acc = false;

    if (m_acc)
    {
        delete m_acc;
        m_acc = NULL;
    }
    ;

    m_has_bar = false;

    if (m_bar)
    {
        delete m_bar;
        m_bar = NULL;
    }
    ;

    m_has_box = false;

    if (m_box)
    {
        delete m_box;
        m_box = NULL;
    }
    ;

    m_has_borderBox = false;

    if (m_borderBox)
    {
        delete m_borderBox;
        m_borderBox = NULL;
    }
    ;

    m_has_eqArr = false;

    if (m_eqArr)
    {
        delete m_eqArr;
        m_eqArr = NULL;
    }
    ;

    m_has_f = false;

    if (m_f)
    {
        delete m_f;
        m_f = NULL;
    }
    ;

    m_has_func = false;

    if (m_func)
    {
        delete m_func;
        m_func = NULL;
    }
    ;

    m_has_groupChr = false;

    if (m_groupChr)
    {
        delete m_groupChr;
        m_groupChr = NULL;
    }
    ;

    m_has_limLow = false;

    if (m_limLow)
    {
        delete m_limLow;
        m_limLow = NULL;
    }
    ;

    m_has_limUpp = false;

    if (m_limUpp)
    {
        delete m_limUpp;
        m_limUpp = NULL;
    }
    ;

    m_has_m = false;

    if (m_m)
    {
        delete m_m;
        m_m = NULL;
    }
    ;

    m_has_nary = false;

    if (m_nary)
    {
        delete m_nary;
        m_nary = NULL;
    }
    ;

    m_has_phant = false;

    if (m_phant)
    {
        delete m_phant;
        m_phant = NULL;
    }
    ;

    m_has_rad = false;

    if (m_rad)
    {
        delete m_rad;
        m_rad = NULL;
    }
    ;

    m_has_sPre = false;

    if (m_sPre)
    {
        delete m_sPre;
        m_sPre = NULL;
    }
    ;

    m_has_sSub = false;

    if (m_sSub)
    {
        delete m_sSub;
        m_sSub = NULL;
    }
    ;

    m_has_sSubSup = false;

    if (m_sSubSup)
    {
        delete m_sSubSup;
        m_sSubSup = NULL;
    }
    ;

    m_has_sSup = false;

    if (m_sSup)
    {
        delete m_sSup;
        m_sSup = NULL;
    }
    ;

    m_has_r = false;

    if (m_r)
    {
        delete m_r;
        m_r = NULL;
    }
    ;

    m_has_d = true;
    if (!m_d)
    {
        m_d = new CT_D();
    }
    return m_d;
}

const CT_D& CT_OMathArg::ChildGroup_1::get_d() const
{
    if (m_d)
    {
        return *m_d;
    }
    return CT_D::default_instance();
}

bool CT_OMathArg::ChildGroup_1::has_eqArr() const
{
    return m_has_eqArr;
}

CT_EqArr* CT_OMathArg::ChildGroup_1::mutable_eqArr()
{

    m_has_acc = false;

    if (m_acc)
    {
        delete m_acc;
        m_acc = NULL;
    }
    ;

    m_has_bar = false;

    if (m_bar)
    {
        delete m_bar;
        m_bar = NULL;
    }
    ;

    m_has_box = false;

    if (m_box)
    {
        delete m_box;
        m_box = NULL;
    }
    ;

    m_has_borderBox = false;

    if (m_borderBox)
    {
        delete m_borderBox;
        m_borderBox = NULL;
    }
    ;

    m_has_d = false;

    if (m_d)
    {
        delete m_d;
        m_d = NULL;
    }
    ;

    m_has_f = false;

    if (m_f)
    {
        delete m_f;
        m_f = NULL;
    }
    ;

    m_has_func = false;

    if (m_func)
    {
        delete m_func;
        m_func = NULL;
    }
    ;

    m_has_groupChr = false;

    if (m_groupChr)
    {
        delete m_groupChr;
        m_groupChr = NULL;
    }
    ;

    m_has_limLow = false;

    if (m_limLow)
    {
        delete m_limLow;
        m_limLow = NULL;
    }
    ;

    m_has_limUpp = false;

    if (m_limUpp)
    {
        delete m_limUpp;
        m_limUpp = NULL;
    }
    ;

    m_has_m = false;

    if (m_m)
    {
        delete m_m;
        m_m = NULL;
    }
    ;

    m_has_nary = false;

    if (m_nary)
    {
        delete m_nary;
        m_nary = NULL;
    }
    ;

    m_has_phant = false;

    if (m_phant)
    {
        delete m_phant;
        m_phant = NULL;
    }
    ;

    m_has_rad = false;

    if (m_rad)
    {
        delete m_rad;
        m_rad = NULL;
    }
    ;

    m_has_sPre = false;

    if (m_sPre)
    {
        delete m_sPre;
        m_sPre = NULL;
    }
    ;

    m_has_sSub = false;

    if (m_sSub)
    {
        delete m_sSub;
        m_sSub = NULL;
    }
    ;

    m_has_sSubSup = false;

    if (m_sSubSup)
    {
        delete m_sSubSup;
        m_sSubSup = NULL;
    }
    ;

    m_has_sSup = false;

    if (m_sSup)
    {
        delete m_sSup;
        m_sSup = NULL;
    }
    ;

    m_has_r = false;

    if (m_r)
    {
        delete m_r;
        m_r = NULL;
    }
    ;

    m_has_eqArr = true;
    if (!m_eqArr)
    {
        m_eqArr = new CT_EqArr();
    }
    return m_eqArr;
}

const CT_EqArr& CT_OMathArg::ChildGroup_1::get_eqArr() const
{
    if (m_eqArr)
    {
        return *m_eqArr;
    }
    return CT_EqArr::default_instance();
}

bool CT_OMathArg::ChildGroup_1::has_f() const
{
    return m_has_f;
}

CT_F* CT_OMathArg::ChildGroup_1::mutable_f()
{

    m_has_acc = false;

    if (m_acc)
    {
        delete m_acc;
        m_acc = NULL;
    }
    ;

    m_has_bar = false;

    if (m_bar)
    {
        delete m_bar;
        m_bar = NULL;
    }
    ;

    m_has_box = false;

    if (m_box)
    {
        delete m_box;
        m_box = NULL;
    }
    ;

    m_has_borderBox = false;

    if (m_borderBox)
    {
        delete m_borderBox;
        m_borderBox = NULL;
    }
    ;

    m_has_d = false;

    if (m_d)
    {
        delete m_d;
        m_d = NULL;
    }
    ;

    m_has_eqArr = false;

    if (m_eqArr)
    {
        delete m_eqArr;
        m_eqArr = NULL;
    }
    ;

    m_has_func = false;

    if (m_func)
    {
        delete m_func;
        m_func = NULL;
    }
    ;

    m_has_groupChr = false;

    if (m_groupChr)
    {
        delete m_groupChr;
        m_groupChr = NULL;
    }
    ;

    m_has_limLow = false;

    if (m_limLow)
    {
        delete m_limLow;
        m_limLow = NULL;
    }
    ;

    m_has_limUpp = false;

    if (m_limUpp)
    {
        delete m_limUpp;
        m_limUpp = NULL;
    }
    ;

    m_has_m = false;

    if (m_m)
    {
        delete m_m;
        m_m = NULL;
    }
    ;

    m_has_nary = false;

    if (m_nary)
    {
        delete m_nary;
        m_nary = NULL;
    }
    ;

    m_has_phant = false;

    if (m_phant)
    {
        delete m_phant;
        m_phant = NULL;
    }
    ;

    m_has_rad = false;

    if (m_rad)
    {
        delete m_rad;
        m_rad = NULL;
    }
    ;

    m_has_sPre = false;

    if (m_sPre)
    {
        delete m_sPre;
        m_sPre = NULL;
    }
    ;

    m_has_sSub = false;

    if (m_sSub)
    {
        delete m_sSub;
        m_sSub = NULL;
    }
    ;

    m_has_sSubSup = false;

    if (m_sSubSup)
    {
        delete m_sSubSup;
        m_sSubSup = NULL;
    }
    ;

    m_has_sSup = false;

    if (m_sSup)
    {
        delete m_sSup;
        m_sSup = NULL;
    }
    ;

    m_has_r = false;

    if (m_r)
    {
        delete m_r;
        m_r = NULL;
    }
    ;

    m_has_f = true;
    if (!m_f)
    {
        m_f = new CT_F();
    }
    return m_f;
}

const CT_F& CT_OMathArg::ChildGroup_1::get_f() const
{
    if (m_f)
    {
        return *m_f;
    }
    return CT_F::default_instance();
}

bool CT_OMathArg::ChildGroup_1::has_func() const
{
    return m_has_func;
}

CT_Func* CT_OMathArg::ChildGroup_1::mutable_func()
{

    m_has_acc = false;

    if (m_acc)
    {
        delete m_acc;
        m_acc = NULL;
    }
    ;

    m_has_bar = false;

    if (m_bar)
    {
        delete m_bar;
        m_bar = NULL;
    }
    ;

    m_has_box = false;

    if (m_box)
    {
        delete m_box;
        m_box = NULL;
    }
    ;

    m_has_borderBox = false;

    if (m_borderBox)
    {
        delete m_borderBox;
        m_borderBox = NULL;
    }
    ;

    m_has_d = false;

    if (m_d)
    {
        delete m_d;
        m_d = NULL;
    }
    ;

    m_has_eqArr = false;

    if (m_eqArr)
    {
        delete m_eqArr;
        m_eqArr = NULL;
    }
    ;

    m_has_f = false;

    if (m_f)
    {
        delete m_f;
        m_f = NULL;
    }
    ;

    m_has_groupChr = false;

    if (m_groupChr)
    {
        delete m_groupChr;
        m_groupChr = NULL;
    }
    ;

    m_has_limLow = false;

    if (m_limLow)
    {
        delete m_limLow;
        m_limLow = NULL;
    }
    ;

    m_has_limUpp = false;

    if (m_limUpp)
    {
        delete m_limUpp;
        m_limUpp = NULL;
    }
    ;

    m_has_m = false;

    if (m_m)
    {
        delete m_m;
        m_m = NULL;
    }
    ;

    m_has_nary = false;

    if (m_nary)
    {
        delete m_nary;
        m_nary = NULL;
    }
    ;

    m_has_phant = false;

    if (m_phant)
    {
        delete m_phant;
        m_phant = NULL;
    }
    ;

    m_has_rad = false;

    if (m_rad)
    {
        delete m_rad;
        m_rad = NULL;
    }
    ;

    m_has_sPre = false;

    if (m_sPre)
    {
        delete m_sPre;
        m_sPre = NULL;
    }
    ;

    m_has_sSub = false;

    if (m_sSub)
    {
        delete m_sSub;
        m_sSub = NULL;
    }
    ;

    m_has_sSubSup = false;

    if (m_sSubSup)
    {
        delete m_sSubSup;
        m_sSubSup = NULL;
    }
    ;

    m_has_sSup = false;

    if (m_sSup)
    {
        delete m_sSup;
        m_sSup = NULL;
    }
    ;

    m_has_r = false;

    if (m_r)
    {
        delete m_r;
        m_r = NULL;
    }
    ;

    m_has_func = true;
    if (!m_func)
    {
        m_func = new CT_Func();
    }
    return m_func;
}

const CT_Func& CT_OMathArg::ChildGroup_1::get_func() const
{
    if (m_func)
    {
        return *m_func;
    }
    return CT_Func::default_instance();
}

bool CT_OMathArg::ChildGroup_1::has_groupChr() const
{
    return m_has_groupChr;
}

CT_GroupChr* CT_OMathArg::ChildGroup_1::mutable_groupChr()
{

    m_has_acc = false;

    if (m_acc)
    {
        delete m_acc;
        m_acc = NULL;
    }
    ;

    m_has_bar = false;

    if (m_bar)
    {
        delete m_bar;
        m_bar = NULL;
    }
    ;

    m_has_box = false;

    if (m_box)
    {
        delete m_box;
        m_box = NULL;
    }
    ;

    m_has_borderBox = false;

    if (m_borderBox)
    {
        delete m_borderBox;
        m_borderBox = NULL;
    }
    ;

    m_has_d = false;

    if (m_d)
    {
        delete m_d;
        m_d = NULL;
    }
    ;

    m_has_eqArr = false;

    if (m_eqArr)
    {
        delete m_eqArr;
        m_eqArr = NULL;
    }
    ;

    m_has_f = false;

    if (m_f)
    {
        delete m_f;
        m_f = NULL;
    }
    ;

    m_has_func = false;

    if (m_func)
    {
        delete m_func;
        m_func = NULL;
    }
    ;

    m_has_limLow = false;

    if (m_limLow)
    {
        delete m_limLow;
        m_limLow = NULL;
    }
    ;

    m_has_limUpp = false;

    if (m_limUpp)
    {
        delete m_limUpp;
        m_limUpp = NULL;
    }
    ;

    m_has_m = false;

    if (m_m)
    {
        delete m_m;
        m_m = NULL;
    }
    ;

    m_has_nary = false;

    if (m_nary)
    {
        delete m_nary;
        m_nary = NULL;
    }
    ;

    m_has_phant = false;

    if (m_phant)
    {
        delete m_phant;
        m_phant = NULL;
    }
    ;

    m_has_rad = false;

    if (m_rad)
    {
        delete m_rad;
        m_rad = NULL;
    }
    ;

    m_has_sPre = false;

    if (m_sPre)
    {
        delete m_sPre;
        m_sPre = NULL;
    }
    ;

    m_has_sSub = false;

    if (m_sSub)
    {
        delete m_sSub;
        m_sSub = NULL;
    }
    ;

    m_has_sSubSup = false;

    if (m_sSubSup)
    {
        delete m_sSubSup;
        m_sSubSup = NULL;
    }
    ;

    m_has_sSup = false;

    if (m_sSup)
    {
        delete m_sSup;
        m_sSup = NULL;
    }
    ;

    m_has_r = false;

    if (m_r)
    {
        delete m_r;
        m_r = NULL;
    }
    ;

    m_has_groupChr = true;
    if (!m_groupChr)
    {
        m_groupChr = new CT_GroupChr();
    }
    return m_groupChr;
}

const CT_GroupChr& CT_OMathArg::ChildGroup_1::get_groupChr() const
{
    if (m_groupChr)
    {
        return *m_groupChr;
    }
    return CT_GroupChr::default_instance();
}

bool CT_OMathArg::ChildGroup_1::has_limLow() const
{
    return m_has_limLow;
}

CT_LimLow* CT_OMathArg::ChildGroup_1::mutable_limLow()
{

    m_has_acc = false;

    if (m_acc)
    {
        delete m_acc;
        m_acc = NULL;
    }
    ;

    m_has_bar = false;

    if (m_bar)
    {
        delete m_bar;
        m_bar = NULL;
    }
    ;

    m_has_box = false;

    if (m_box)
    {
        delete m_box;
        m_box = NULL;
    }
    ;

    m_has_borderBox = false;

    if (m_borderBox)
    {
        delete m_borderBox;
        m_borderBox = NULL;
    }
    ;

    m_has_d = false;

    if (m_d)
    {
        delete m_d;
        m_d = NULL;
    }
    ;

    m_has_eqArr = false;

    if (m_eqArr)
    {
        delete m_eqArr;
        m_eqArr = NULL;
    }
    ;

    m_has_f = false;

    if (m_f)
    {
        delete m_f;
        m_f = NULL;
    }
    ;

    m_has_func = false;

    if (m_func)
    {
        delete m_func;
        m_func = NULL;
    }
    ;

    m_has_groupChr = false;

    if (m_groupChr)
    {
        delete m_groupChr;
        m_groupChr = NULL;
    }
    ;

    m_has_limUpp = false;

    if (m_limUpp)
    {
        delete m_limUpp;
        m_limUpp = NULL;
    }
    ;

    m_has_m = false;

    if (m_m)
    {
        delete m_m;
        m_m = NULL;
    }
    ;

    m_has_nary = false;

    if (m_nary)
    {
        delete m_nary;
        m_nary = NULL;
    }
    ;

    m_has_phant = false;

    if (m_phant)
    {
        delete m_phant;
        m_phant = NULL;
    }
    ;

    m_has_rad = false;

    if (m_rad)
    {
        delete m_rad;
        m_rad = NULL;
    }
    ;

    m_has_sPre = false;

    if (m_sPre)
    {
        delete m_sPre;
        m_sPre = NULL;
    }
    ;

    m_has_sSub = false;

    if (m_sSub)
    {
        delete m_sSub;
        m_sSub = NULL;
    }
    ;

    m_has_sSubSup = false;

    if (m_sSubSup)
    {
        delete m_sSubSup;
        m_sSubSup = NULL;
    }
    ;

    m_has_sSup = false;

    if (m_sSup)
    {
        delete m_sSup;
        m_sSup = NULL;
    }
    ;

    m_has_r = false;

    if (m_r)
    {
        delete m_r;
        m_r = NULL;
    }
    ;

    m_has_limLow = true;
    if (!m_limLow)
    {
        m_limLow = new CT_LimLow();
    }
    return m_limLow;
}

const CT_LimLow& CT_OMathArg::ChildGroup_1::get_limLow() const
{
    if (m_limLow)
    {
        return *m_limLow;
    }
    return CT_LimLow::default_instance();
}

bool CT_OMathArg::ChildGroup_1::has_limUpp() const
{
    return m_has_limUpp;
}

CT_LimUpp* CT_OMathArg::ChildGroup_1::mutable_limUpp()
{

    m_has_acc = false;

    if (m_acc)
    {
        delete m_acc;
        m_acc = NULL;
    }
    ;

    m_has_bar = false;

    if (m_bar)
    {
        delete m_bar;
        m_bar = NULL;
    }
    ;

    m_has_box = false;

    if (m_box)
    {
        delete m_box;
        m_box = NULL;
    }
    ;

    m_has_borderBox = false;

    if (m_borderBox)
    {
        delete m_borderBox;
        m_borderBox = NULL;
    }
    ;

    m_has_d = false;

    if (m_d)
    {
        delete m_d;
        m_d = NULL;
    }
    ;

    m_has_eqArr = false;

    if (m_eqArr)
    {
        delete m_eqArr;
        m_eqArr = NULL;
    }
    ;

    m_has_f = false;

    if (m_f)
    {
        delete m_f;
        m_f = NULL;
    }
    ;

    m_has_func = false;

    if (m_func)
    {
        delete m_func;
        m_func = NULL;
    }
    ;

    m_has_groupChr = false;

    if (m_groupChr)
    {
        delete m_groupChr;
        m_groupChr = NULL;
    }
    ;

    m_has_limLow = false;

    if (m_limLow)
    {
        delete m_limLow;
        m_limLow = NULL;
    }
    ;

    m_has_m = false;

    if (m_m)
    {
        delete m_m;
        m_m = NULL;
    }
    ;

    m_has_nary = false;

    if (m_nary)
    {
        delete m_nary;
        m_nary = NULL;
    }
    ;

    m_has_phant = false;

    if (m_phant)
    {
        delete m_phant;
        m_phant = NULL;
    }
    ;

    m_has_rad = false;

    if (m_rad)
    {
        delete m_rad;
        m_rad = NULL;
    }
    ;

    m_has_sPre = false;

    if (m_sPre)
    {
        delete m_sPre;
        m_sPre = NULL;
    }
    ;

    m_has_sSub = false;

    if (m_sSub)
    {
        delete m_sSub;
        m_sSub = NULL;
    }
    ;

    m_has_sSubSup = false;

    if (m_sSubSup)
    {
        delete m_sSubSup;
        m_sSubSup = NULL;
    }
    ;

    m_has_sSup = false;

    if (m_sSup)
    {
        delete m_sSup;
        m_sSup = NULL;
    }
    ;

    m_has_r = false;

    if (m_r)
    {
        delete m_r;
        m_r = NULL;
    }
    ;

    m_has_limUpp = true;
    if (!m_limUpp)
    {
        m_limUpp = new CT_LimUpp();
    }
    return m_limUpp;
}

const CT_LimUpp& CT_OMathArg::ChildGroup_1::get_limUpp() const
{
    if (m_limUpp)
    {
        return *m_limUpp;
    }
    return CT_LimUpp::default_instance();
}

bool CT_OMathArg::ChildGroup_1::has_m() const
{
    return m_has_m;
}

CT_M* CT_OMathArg::ChildGroup_1::mutable_m()
{

    m_has_acc = false;

    if (m_acc)
    {
        delete m_acc;
        m_acc = NULL;
    }
    ;

    m_has_bar = false;

    if (m_bar)
    {
        delete m_bar;
        m_bar = NULL;
    }
    ;

    m_has_box = false;

    if (m_box)
    {
        delete m_box;
        m_box = NULL;
    }
    ;

    m_has_borderBox = false;

    if (m_borderBox)
    {
        delete m_borderBox;
        m_borderBox = NULL;
    }
    ;

    m_has_d = false;

    if (m_d)
    {
        delete m_d;
        m_d = NULL;
    }
    ;

    m_has_eqArr = false;

    if (m_eqArr)
    {
        delete m_eqArr;
        m_eqArr = NULL;
    }
    ;

    m_has_f = false;

    if (m_f)
    {
        delete m_f;
        m_f = NULL;
    }
    ;

    m_has_func = false;

    if (m_func)
    {
        delete m_func;
        m_func = NULL;
    }
    ;

    m_has_groupChr = false;

    if (m_groupChr)
    {
        delete m_groupChr;
        m_groupChr = NULL;
    }
    ;

    m_has_limLow = false;

    if (m_limLow)
    {
        delete m_limLow;
        m_limLow = NULL;
    }
    ;

    m_has_limUpp = false;

    if (m_limUpp)
    {
        delete m_limUpp;
        m_limUpp = NULL;
    }
    ;

    m_has_nary = false;

    if (m_nary)
    {
        delete m_nary;
        m_nary = NULL;
    }
    ;

    m_has_phant = false;

    if (m_phant)
    {
        delete m_phant;
        m_phant = NULL;
    }
    ;

    m_has_rad = false;

    if (m_rad)
    {
        delete m_rad;
        m_rad = NULL;
    }
    ;

    m_has_sPre = false;

    if (m_sPre)
    {
        delete m_sPre;
        m_sPre = NULL;
    }
    ;

    m_has_sSub = false;

    if (m_sSub)
    {
        delete m_sSub;
        m_sSub = NULL;
    }
    ;

    m_has_sSubSup = false;

    if (m_sSubSup)
    {
        delete m_sSubSup;
        m_sSubSup = NULL;
    }
    ;

    m_has_sSup = false;

    if (m_sSup)
    {
        delete m_sSup;
        m_sSup = NULL;
    }
    ;

    m_has_r = false;

    if (m_r)
    {
        delete m_r;
        m_r = NULL;
    }
    ;

    m_has_m = true;
    if (!m_m)
    {
        m_m = new CT_M();
    }
    return m_m;
}

const CT_M& CT_OMathArg::ChildGroup_1::get_m() const
{
    if (m_m)
    {
        return *m_m;
    }
    return CT_M::default_instance();
}

bool CT_OMathArg::ChildGroup_1::has_nary() const
{
    return m_has_nary;
}

CT_Nary* CT_OMathArg::ChildGroup_1::mutable_nary()
{

    m_has_acc = false;

    if (m_acc)
    {
        delete m_acc;
        m_acc = NULL;
    }
    ;

    m_has_bar = false;

    if (m_bar)
    {
        delete m_bar;
        m_bar = NULL;
    }
    ;

    m_has_box = false;

    if (m_box)
    {
        delete m_box;
        m_box = NULL;
    }
    ;

    m_has_borderBox = false;

    if (m_borderBox)
    {
        delete m_borderBox;
        m_borderBox = NULL;
    }
    ;

    m_has_d = false;

    if (m_d)
    {
        delete m_d;
        m_d = NULL;
    }
    ;

    m_has_eqArr = false;

    if (m_eqArr)
    {
        delete m_eqArr;
        m_eqArr = NULL;
    }
    ;

    m_has_f = false;

    if (m_f)
    {
        delete m_f;
        m_f = NULL;
    }
    ;

    m_has_func = false;

    if (m_func)
    {
        delete m_func;
        m_func = NULL;
    }
    ;

    m_has_groupChr = false;

    if (m_groupChr)
    {
        delete m_groupChr;
        m_groupChr = NULL;
    }
    ;

    m_has_limLow = false;

    if (m_limLow)
    {
        delete m_limLow;
        m_limLow = NULL;
    }
    ;

    m_has_limUpp = false;

    if (m_limUpp)
    {
        delete m_limUpp;
        m_limUpp = NULL;
    }
    ;

    m_has_m = false;

    if (m_m)
    {
        delete m_m;
        m_m = NULL;
    }
    ;

    m_has_phant = false;

    if (m_phant)
    {
        delete m_phant;
        m_phant = NULL;
    }
    ;

    m_has_rad = false;

    if (m_rad)
    {
        delete m_rad;
        m_rad = NULL;
    }
    ;

    m_has_sPre = false;

    if (m_sPre)
    {
        delete m_sPre;
        m_sPre = NULL;
    }
    ;

    m_has_sSub = false;

    if (m_sSub)
    {
        delete m_sSub;
        m_sSub = NULL;
    }
    ;

    m_has_sSubSup = false;

    if (m_sSubSup)
    {
        delete m_sSubSup;
        m_sSubSup = NULL;
    }
    ;

    m_has_sSup = false;

    if (m_sSup)
    {
        delete m_sSup;
        m_sSup = NULL;
    }
    ;

    m_has_r = false;

    if (m_r)
    {
        delete m_r;
        m_r = NULL;
    }
    ;

    m_has_nary = true;
    if (!m_nary)
    {
        m_nary = new CT_Nary();
    }
    return m_nary;
}

const CT_Nary& CT_OMathArg::ChildGroup_1::get_nary() const
{
    if (m_nary)
    {
        return *m_nary;
    }
    return CT_Nary::default_instance();
}

bool CT_OMathArg::ChildGroup_1::has_phant() const
{
    return m_has_phant;
}

CT_Phant* CT_OMathArg::ChildGroup_1::mutable_phant()
{

    m_has_acc = false;

    if (m_acc)
    {
        delete m_acc;
        m_acc = NULL;
    }
    ;

    m_has_bar = false;

    if (m_bar)
    {
        delete m_bar;
        m_bar = NULL;
    }
    ;

    m_has_box = false;

    if (m_box)
    {
        delete m_box;
        m_box = NULL;
    }
    ;

    m_has_borderBox = false;

    if (m_borderBox)
    {
        delete m_borderBox;
        m_borderBox = NULL;
    }
    ;

    m_has_d = false;

    if (m_d)
    {
        delete m_d;
        m_d = NULL;
    }
    ;

    m_has_eqArr = false;

    if (m_eqArr)
    {
        delete m_eqArr;
        m_eqArr = NULL;
    }
    ;

    m_has_f = false;

    if (m_f)
    {
        delete m_f;
        m_f = NULL;
    }
    ;

    m_has_func = false;

    if (m_func)
    {
        delete m_func;
        m_func = NULL;
    }
    ;

    m_has_groupChr = false;

    if (m_groupChr)
    {
        delete m_groupChr;
        m_groupChr = NULL;
    }
    ;

    m_has_limLow = false;

    if (m_limLow)
    {
        delete m_limLow;
        m_limLow = NULL;
    }
    ;

    m_has_limUpp = false;

    if (m_limUpp)
    {
        delete m_limUpp;
        m_limUpp = NULL;
    }
    ;

    m_has_m = false;

    if (m_m)
    {
        delete m_m;
        m_m = NULL;
    }
    ;

    m_has_nary = false;

    if (m_nary)
    {
        delete m_nary;
        m_nary = NULL;
    }
    ;

    m_has_rad = false;

    if (m_rad)
    {
        delete m_rad;
        m_rad = NULL;
    }
    ;

    m_has_sPre = false;

    if (m_sPre)
    {
        delete m_sPre;
        m_sPre = NULL;
    }
    ;

    m_has_sSub = false;

    if (m_sSub)
    {
        delete m_sSub;
        m_sSub = NULL;
    }
    ;

    m_has_sSubSup = false;

    if (m_sSubSup)
    {
        delete m_sSubSup;
        m_sSubSup = NULL;
    }
    ;

    m_has_sSup = false;

    if (m_sSup)
    {
        delete m_sSup;
        m_sSup = NULL;
    }
    ;

    m_has_r = false;

    if (m_r)
    {
        delete m_r;
        m_r = NULL;
    }
    ;

    m_has_phant = true;
    if (!m_phant)
    {
        m_phant = new CT_Phant();
    }
    return m_phant;
}

const CT_Phant& CT_OMathArg::ChildGroup_1::get_phant() const
{
    if (m_phant)
    {
        return *m_phant;
    }
    return CT_Phant::default_instance();
}

bool CT_OMathArg::ChildGroup_1::has_rad() const
{
    return m_has_rad;
}

CT_Rad* CT_OMathArg::ChildGroup_1::mutable_rad()
{

    m_has_acc = false;

    if (m_acc)
    {
        delete m_acc;
        m_acc = NULL;
    }
    ;

    m_has_bar = false;

    if (m_bar)
    {
        delete m_bar;
        m_bar = NULL;
    }
    ;

    m_has_box = false;

    if (m_box)
    {
        delete m_box;
        m_box = NULL;
    }
    ;

    m_has_borderBox = false;

    if (m_borderBox)
    {
        delete m_borderBox;
        m_borderBox = NULL;
    }
    ;

    m_has_d = false;

    if (m_d)
    {
        delete m_d;
        m_d = NULL;
    }
    ;

    m_has_eqArr = false;

    if (m_eqArr)
    {
        delete m_eqArr;
        m_eqArr = NULL;
    }
    ;

    m_has_f = false;

    if (m_f)
    {
        delete m_f;
        m_f = NULL;
    }
    ;

    m_has_func = false;

    if (m_func)
    {
        delete m_func;
        m_func = NULL;
    }
    ;

    m_has_groupChr = false;

    if (m_groupChr)
    {
        delete m_groupChr;
        m_groupChr = NULL;
    }
    ;

    m_has_limLow = false;

    if (m_limLow)
    {
        delete m_limLow;
        m_limLow = NULL;
    }
    ;

    m_has_limUpp = false;

    if (m_limUpp)
    {
        delete m_limUpp;
        m_limUpp = NULL;
    }
    ;

    m_has_m = false;

    if (m_m)
    {
        delete m_m;
        m_m = NULL;
    }
    ;

    m_has_nary = false;

    if (m_nary)
    {
        delete m_nary;
        m_nary = NULL;
    }
    ;

    m_has_phant = false;

    if (m_phant)
    {
        delete m_phant;
        m_phant = NULL;
    }
    ;

    m_has_sPre = false;

    if (m_sPre)
    {
        delete m_sPre;
        m_sPre = NULL;
    }
    ;

    m_has_sSub = false;

    if (m_sSub)
    {
        delete m_sSub;
        m_sSub = NULL;
    }
    ;

    m_has_sSubSup = false;

    if (m_sSubSup)
    {
        delete m_sSubSup;
        m_sSubSup = NULL;
    }
    ;

    m_has_sSup = false;

    if (m_sSup)
    {
        delete m_sSup;
        m_sSup = NULL;
    }
    ;

    m_has_r = false;

    if (m_r)
    {
        delete m_r;
        m_r = NULL;
    }
    ;

    m_has_rad = true;
    if (!m_rad)
    {
        m_rad = new CT_Rad();
    }
    return m_rad;
}

const CT_Rad& CT_OMathArg::ChildGroup_1::get_rad() const
{
    if (m_rad)
    {
        return *m_rad;
    }
    return CT_Rad::default_instance();
}

bool CT_OMathArg::ChildGroup_1::has_sPre() const
{
    return m_has_sPre;
}

CT_SPre* CT_OMathArg::ChildGroup_1::mutable_sPre()
{

    m_has_acc = false;

    if (m_acc)
    {
        delete m_acc;
        m_acc = NULL;
    }
    ;

    m_has_bar = false;

    if (m_bar)
    {
        delete m_bar;
        m_bar = NULL;
    }
    ;

    m_has_box = false;

    if (m_box)
    {
        delete m_box;
        m_box = NULL;
    }
    ;

    m_has_borderBox = false;

    if (m_borderBox)
    {
        delete m_borderBox;
        m_borderBox = NULL;
    }
    ;

    m_has_d = false;

    if (m_d)
    {
        delete m_d;
        m_d = NULL;
    }
    ;

    m_has_eqArr = false;

    if (m_eqArr)
    {
        delete m_eqArr;
        m_eqArr = NULL;
    }
    ;

    m_has_f = false;

    if (m_f)
    {
        delete m_f;
        m_f = NULL;
    }
    ;

    m_has_func = false;

    if (m_func)
    {
        delete m_func;
        m_func = NULL;
    }
    ;

    m_has_groupChr = false;

    if (m_groupChr)
    {
        delete m_groupChr;
        m_groupChr = NULL;
    }
    ;

    m_has_limLow = false;

    if (m_limLow)
    {
        delete m_limLow;
        m_limLow = NULL;
    }
    ;

    m_has_limUpp = false;

    if (m_limUpp)
    {
        delete m_limUpp;
        m_limUpp = NULL;
    }
    ;

    m_has_m = false;

    if (m_m)
    {
        delete m_m;
        m_m = NULL;
    }
    ;

    m_has_nary = false;

    if (m_nary)
    {
        delete m_nary;
        m_nary = NULL;
    }
    ;

    m_has_phant = false;

    if (m_phant)
    {
        delete m_phant;
        m_phant = NULL;
    }
    ;

    m_has_rad = false;

    if (m_rad)
    {
        delete m_rad;
        m_rad = NULL;
    }
    ;

    m_has_sSub = false;

    if (m_sSub)
    {
        delete m_sSub;
        m_sSub = NULL;
    }
    ;

    m_has_sSubSup = false;

    if (m_sSubSup)
    {
        delete m_sSubSup;
        m_sSubSup = NULL;
    }
    ;

    m_has_sSup = false;

    if (m_sSup)
    {
        delete m_sSup;
        m_sSup = NULL;
    }
    ;

    m_has_r = false;

    if (m_r)
    {
        delete m_r;
        m_r = NULL;
    }
    ;

    m_has_sPre = true;
    if (!m_sPre)
    {
        m_sPre = new CT_SPre();
    }
    return m_sPre;
}

const CT_SPre& CT_OMathArg::ChildGroup_1::get_sPre() const
{
    if (m_sPre)
    {
        return *m_sPre;
    }
    return CT_SPre::default_instance();
}

bool CT_OMathArg::ChildGroup_1::has_sSub() const
{
    return m_has_sSub;
}

CT_SSub* CT_OMathArg::ChildGroup_1::mutable_sSub()
{

    m_has_acc = false;

    if (m_acc)
    {
        delete m_acc;
        m_acc = NULL;
    }
    ;

    m_has_bar = false;

    if (m_bar)
    {
        delete m_bar;
        m_bar = NULL;
    }
    ;

    m_has_box = false;

    if (m_box)
    {
        delete m_box;
        m_box = NULL;
    }
    ;

    m_has_borderBox = false;

    if (m_borderBox)
    {
        delete m_borderBox;
        m_borderBox = NULL;
    }
    ;

    m_has_d = false;

    if (m_d)
    {
        delete m_d;
        m_d = NULL;
    }
    ;

    m_has_eqArr = false;

    if (m_eqArr)
    {
        delete m_eqArr;
        m_eqArr = NULL;
    }
    ;

    m_has_f = false;

    if (m_f)
    {
        delete m_f;
        m_f = NULL;
    }
    ;

    m_has_func = false;

    if (m_func)
    {
        delete m_func;
        m_func = NULL;
    }
    ;

    m_has_groupChr = false;

    if (m_groupChr)
    {
        delete m_groupChr;
        m_groupChr = NULL;
    }
    ;

    m_has_limLow = false;

    if (m_limLow)
    {
        delete m_limLow;
        m_limLow = NULL;
    }
    ;

    m_has_limUpp = false;

    if (m_limUpp)
    {
        delete m_limUpp;
        m_limUpp = NULL;
    }
    ;

    m_has_m = false;

    if (m_m)
    {
        delete m_m;
        m_m = NULL;
    }
    ;

    m_has_nary = false;

    if (m_nary)
    {
        delete m_nary;
        m_nary = NULL;
    }
    ;

    m_has_phant = false;

    if (m_phant)
    {
        delete m_phant;
        m_phant = NULL;
    }
    ;

    m_has_rad = false;

    if (m_rad)
    {
        delete m_rad;
        m_rad = NULL;
    }
    ;

    m_has_sPre = false;

    if (m_sPre)
    {
        delete m_sPre;
        m_sPre = NULL;
    }
    ;

    m_has_sSubSup = false;

    if (m_sSubSup)
    {
        delete m_sSubSup;
        m_sSubSup = NULL;
    }
    ;

    m_has_sSup = false;

    if (m_sSup)
    {
        delete m_sSup;
        m_sSup = NULL;
    }
    ;

    m_has_r = false;

    if (m_r)
    {
        delete m_r;
        m_r = NULL;
    }
    ;

    m_has_sSub = true;
    if (!m_sSub)
    {
        m_sSub = new CT_SSub();
    }
    return m_sSub;
}

const CT_SSub& CT_OMathArg::ChildGroup_1::get_sSub() const
{
    if (m_sSub)
    {
        return *m_sSub;
    }
    return CT_SSub::default_instance();
}

bool CT_OMathArg::ChildGroup_1::has_sSubSup() const
{
    return m_has_sSubSup;
}

CT_SSubSup* CT_OMathArg::ChildGroup_1::mutable_sSubSup()
{

    m_has_acc = false;

    if (m_acc)
    {
        delete m_acc;
        m_acc = NULL;
    }
    ;

    m_has_bar = false;

    if (m_bar)
    {
        delete m_bar;
        m_bar = NULL;
    }
    ;

    m_has_box = false;

    if (m_box)
    {
        delete m_box;
        m_box = NULL;
    }
    ;

    m_has_borderBox = false;

    if (m_borderBox)
    {
        delete m_borderBox;
        m_borderBox = NULL;
    }
    ;

    m_has_d = false;

    if (m_d)
    {
        delete m_d;
        m_d = NULL;
    }
    ;

    m_has_eqArr = false;

    if (m_eqArr)
    {
        delete m_eqArr;
        m_eqArr = NULL;
    }
    ;

    m_has_f = false;

    if (m_f)
    {
        delete m_f;
        m_f = NULL;
    }
    ;

    m_has_func = false;

    if (m_func)
    {
        delete m_func;
        m_func = NULL;
    }
    ;

    m_has_groupChr = false;

    if (m_groupChr)
    {
        delete m_groupChr;
        m_groupChr = NULL;
    }
    ;

    m_has_limLow = false;

    if (m_limLow)
    {
        delete m_limLow;
        m_limLow = NULL;
    }
    ;

    m_has_limUpp = false;

    if (m_limUpp)
    {
        delete m_limUpp;
        m_limUpp = NULL;
    }
    ;

    m_has_m = false;

    if (m_m)
    {
        delete m_m;
        m_m = NULL;
    }
    ;

    m_has_nary = false;

    if (m_nary)
    {
        delete m_nary;
        m_nary = NULL;
    }
    ;

    m_has_phant = false;

    if (m_phant)
    {
        delete m_phant;
        m_phant = NULL;
    }
    ;

    m_has_rad = false;

    if (m_rad)
    {
        delete m_rad;
        m_rad = NULL;
    }
    ;

    m_has_sPre = false;

    if (m_sPre)
    {
        delete m_sPre;
        m_sPre = NULL;
    }
    ;

    m_has_sSub = false;

    if (m_sSub)
    {
        delete m_sSub;
        m_sSub = NULL;
    }
    ;

    m_has_sSup = false;

    if (m_sSup)
    {
        delete m_sSup;
        m_sSup = NULL;
    }
    ;

    m_has_r = false;

    if (m_r)
    {
        delete m_r;
        m_r = NULL;
    }
    ;

    m_has_sSubSup = true;
    if (!m_sSubSup)
    {
        m_sSubSup = new CT_SSubSup();
    }
    return m_sSubSup;
}

const CT_SSubSup& CT_OMathArg::ChildGroup_1::get_sSubSup() const
{
    if (m_sSubSup)
    {
        return *m_sSubSup;
    }
    return CT_SSubSup::default_instance();
}

bool CT_OMathArg::ChildGroup_1::has_sSup() const
{
    return m_has_sSup;
}

CT_SSup* CT_OMathArg::ChildGroup_1::mutable_sSup()
{

    m_has_acc = false;

    if (m_acc)
    {
        delete m_acc;
        m_acc = NULL;
    }
    ;

    m_has_bar = false;

    if (m_bar)
    {
        delete m_bar;
        m_bar = NULL;
    }
    ;

    m_has_box = false;

    if (m_box)
    {
        delete m_box;
        m_box = NULL;
    }
    ;

    m_has_borderBox = false;

    if (m_borderBox)
    {
        delete m_borderBox;
        m_borderBox = NULL;
    }
    ;

    m_has_d = false;

    if (m_d)
    {
        delete m_d;
        m_d = NULL;
    }
    ;

    m_has_eqArr = false;

    if (m_eqArr)
    {
        delete m_eqArr;
        m_eqArr = NULL;
    }
    ;

    m_has_f = false;

    if (m_f)
    {
        delete m_f;
        m_f = NULL;
    }
    ;

    m_has_func = false;

    if (m_func)
    {
        delete m_func;
        m_func = NULL;
    }
    ;

    m_has_groupChr = false;

    if (m_groupChr)
    {
        delete m_groupChr;
        m_groupChr = NULL;
    }
    ;

    m_has_limLow = false;

    if (m_limLow)
    {
        delete m_limLow;
        m_limLow = NULL;
    }
    ;

    m_has_limUpp = false;

    if (m_limUpp)
    {
        delete m_limUpp;
        m_limUpp = NULL;
    }
    ;

    m_has_m = false;

    if (m_m)
    {
        delete m_m;
        m_m = NULL;
    }
    ;

    m_has_nary = false;

    if (m_nary)
    {
        delete m_nary;
        m_nary = NULL;
    }
    ;

    m_has_phant = false;

    if (m_phant)
    {
        delete m_phant;
        m_phant = NULL;
    }
    ;

    m_has_rad = false;

    if (m_rad)
    {
        delete m_rad;
        m_rad = NULL;
    }
    ;

    m_has_sPre = false;

    if (m_sPre)
    {
        delete m_sPre;
        m_sPre = NULL;
    }
    ;

    m_has_sSub = false;

    if (m_sSub)
    {
        delete m_sSub;
        m_sSub = NULL;
    }
    ;

    m_has_sSubSup = false;

    if (m_sSubSup)
    {
        delete m_sSubSup;
        m_sSubSup = NULL;
    }
    ;

    m_has_r = false;

    if (m_r)
    {
        delete m_r;
        m_r = NULL;
    }
    ;

    m_has_sSup = true;
    if (!m_sSup)
    {
        m_sSup = new CT_SSup();
    }
    return m_sSup;
}

const CT_SSup& CT_OMathArg::ChildGroup_1::get_sSup() const
{
    if (m_sSup)
    {
        return *m_sSup;
    }
    return CT_SSup::default_instance();
}

bool CT_OMathArg::ChildGroup_1::has_r() const
{
    return m_has_r;
}

CT_R* CT_OMathArg::ChildGroup_1::mutable_r()
{

    m_has_acc = false;

    if (m_acc)
    {
        delete m_acc;
        m_acc = NULL;
    }
    ;

    m_has_bar = false;

    if (m_bar)
    {
        delete m_bar;
        m_bar = NULL;
    }
    ;

    m_has_box = false;

    if (m_box)
    {
        delete m_box;
        m_box = NULL;
    }
    ;

    m_has_borderBox = false;

    if (m_borderBox)
    {
        delete m_borderBox;
        m_borderBox = NULL;
    }
    ;

    m_has_d = false;

    if (m_d)
    {
        delete m_d;
        m_d = NULL;
    }
    ;

    m_has_eqArr = false;

    if (m_eqArr)
    {
        delete m_eqArr;
        m_eqArr = NULL;
    }
    ;

    m_has_f = false;

    if (m_f)
    {
        delete m_f;
        m_f = NULL;
    }
    ;

    m_has_func = false;

    if (m_func)
    {
        delete m_func;
        m_func = NULL;
    }
    ;

    m_has_groupChr = false;

    if (m_groupChr)
    {
        delete m_groupChr;
        m_groupChr = NULL;
    }
    ;

    m_has_limLow = false;

    if (m_limLow)
    {
        delete m_limLow;
        m_limLow = NULL;
    }
    ;

    m_has_limUpp = false;

    if (m_limUpp)
    {
        delete m_limUpp;
        m_limUpp = NULL;
    }
    ;

    m_has_m = false;

    if (m_m)
    {
        delete m_m;
        m_m = NULL;
    }
    ;

    m_has_nary = false;

    if (m_nary)
    {
        delete m_nary;
        m_nary = NULL;
    }
    ;

    m_has_phant = false;

    if (m_phant)
    {
        delete m_phant;
        m_phant = NULL;
    }
    ;

    m_has_rad = false;

    if (m_rad)
    {
        delete m_rad;
        m_rad = NULL;
    }
    ;

    m_has_sPre = false;

    if (m_sPre)
    {
        delete m_sPre;
        m_sPre = NULL;
    }
    ;

    m_has_sSub = false;

    if (m_sSub)
    {
        delete m_sSub;
        m_sSub = NULL;
    }
    ;

    m_has_sSubSup = false;

    if (m_sSubSup)
    {
        delete m_sSubSup;
        m_sSubSup = NULL;
    }
    ;

    m_has_sSup = false;

    if (m_sSup)
    {
        delete m_sSup;
        m_sSup = NULL;
    }
    ;

    m_has_r = true;
    if (!m_r)
    {
        m_r = new CT_R();
    }
    return m_r;
}

const CT_R& CT_OMathArg::ChildGroup_1::get_r() const
{
    if (m_r)
    {
        return *m_r;
    }
    return CT_R::default_instance();
}


// CT_OMathArg::ChildGroup_2
CT_OMathArg::ChildGroup_2::ChildGroup_2()
    :m_has_w_customXml(false),
     m_w_customXml(NULL),
     m_has_w_fldSimple(false),
     m_w_fldSimple(NULL),
     m_has_w_hyperlink(false),
     m_w_hyperlink(NULL)
{
}
bool CT_OMathArg::ChildGroup_2::has_w_customXml() const
{
    return m_has_w_customXml;
}

ns_w::CT_CustomXmlRun* CT_OMathArg::ChildGroup_2::mutable_w_customXml()
{

    m_has_w_fldSimple = false;

    if (m_w_fldSimple)
    {
        delete m_w_fldSimple;
        m_w_fldSimple = NULL;
    }
    ;

    m_has_w_hyperlink = false;

    if (m_w_hyperlink)
    {
        delete m_w_hyperlink;
        m_w_hyperlink = NULL;
    }
    ;

    m_has_w_customXml = true;
    if (!m_w_customXml)
    {
        m_w_customXml = new ns_w::CT_CustomXmlRun();
    }
    return m_w_customXml;
}

const ns_w::CT_CustomXmlRun& CT_OMathArg::ChildGroup_2::get_w_customXml() const
{
    if (m_w_customXml)
    {
        return *m_w_customXml;
    }
    return ns_w::CT_CustomXmlRun::default_instance();
}

bool CT_OMathArg::ChildGroup_2::has_w_fldSimple() const
{
    return m_has_w_fldSimple;
}

ns_w::CT_SimpleField* CT_OMathArg::ChildGroup_2::mutable_w_fldSimple()
{

    m_has_w_customXml = false;

    if (m_w_customXml)
    {
        delete m_w_customXml;
        m_w_customXml = NULL;
    }
    ;

    m_has_w_hyperlink = false;

    if (m_w_hyperlink)
    {
        delete m_w_hyperlink;
        m_w_hyperlink = NULL;
    }
    ;

    m_has_w_fldSimple = true;
    if (!m_w_fldSimple)
    {
        m_w_fldSimple = new ns_w::CT_SimpleField();
    }
    return m_w_fldSimple;
}

const ns_w::CT_SimpleField& CT_OMathArg::ChildGroup_2::get_w_fldSimple() const
{
    if (m_w_fldSimple)
    {
        return *m_w_fldSimple;
    }
    return ns_w::CT_SimpleField::default_instance();
}

bool CT_OMathArg::ChildGroup_2::has_w_hyperlink() const
{
    return m_has_w_hyperlink;
}

ns_w::CT_Hyperlink* CT_OMathArg::ChildGroup_2::mutable_w_hyperlink()
{

    m_has_w_customXml = false;

    if (m_w_customXml)
    {
        delete m_w_customXml;
        m_w_customXml = NULL;
    }
    ;

    m_has_w_fldSimple = false;

    if (m_w_fldSimple)
    {
        delete m_w_fldSimple;
        m_w_fldSimple = NULL;
    }
    ;

    m_has_w_hyperlink = true;
    if (!m_w_hyperlink)
    {
        m_w_hyperlink = new ns_w::CT_Hyperlink();
    }
    return m_w_hyperlink;
}

const ns_w::CT_Hyperlink& CT_OMathArg::ChildGroup_2::get_w_hyperlink() const
{
    if (m_w_hyperlink)
    {
        return *m_w_hyperlink;
    }
    return ns_w::CT_Hyperlink::default_instance();
}


// CT_OMathArg::ChildGroup_3
CT_OMathArg::ChildGroup_3::ChildGroup_3()
    :m_has_w_smartTag(false),
     m_w_smartTag(NULL),
     m_has_w_sdt(false),
     m_w_sdt(NULL)
{
}
bool CT_OMathArg::ChildGroup_3::has_w_smartTag() const
{
    return m_has_w_smartTag;
}

ns_w::CT_SmartTagRun* CT_OMathArg::ChildGroup_3::mutable_w_smartTag()
{

    m_has_w_sdt = false;

    if (m_w_sdt)
    {
        delete m_w_sdt;
        m_w_sdt = NULL;
    }
    ;

    m_has_w_smartTag = true;
    if (!m_w_smartTag)
    {
        m_w_smartTag = new ns_w::CT_SmartTagRun();
    }
    return m_w_smartTag;
}

const ns_w::CT_SmartTagRun& CT_OMathArg::ChildGroup_3::get_w_smartTag() const
{
    if (m_w_smartTag)
    {
        return *m_w_smartTag;
    }
    return ns_w::CT_SmartTagRun::default_instance();
}

bool CT_OMathArg::ChildGroup_3::has_w_sdt() const
{
    return m_has_w_sdt;
}

ns_w::CT_SdtRun* CT_OMathArg::ChildGroup_3::mutable_w_sdt()
{

    m_has_w_smartTag = false;

    if (m_w_smartTag)
    {
        delete m_w_smartTag;
        m_w_smartTag = NULL;
    }
    ;

    m_has_w_sdt = true;
    if (!m_w_sdt)
    {
        m_w_sdt = new ns_w::CT_SdtRun();
    }
    return m_w_sdt;
}

const ns_w::CT_SdtRun& CT_OMathArg::ChildGroup_3::get_w_sdt() const
{
    if (m_w_sdt)
    {
        return *m_w_sdt;
    }
    return ns_w::CT_SdtRun::default_instance();
}


// CT_OMathArg::ChildGroup_4
CT_OMathArg::ChildGroup_4::ChildGroup_4()
    :m_has_w_proofErr(false),
     m_w_proofErr(NULL),
     m_has_w_permStart(false),
     m_w_permStart(NULL),
     m_has_w_permEnd(false),
     m_w_permEnd(NULL)
{
}
bool CT_OMathArg::ChildGroup_4::has_w_proofErr() const
{
    return m_has_w_proofErr;
}

ns_w::CT_ProofErr* CT_OMathArg::ChildGroup_4::mutable_w_proofErr()
{

    m_has_w_permStart = false;

    if (m_w_permStart)
    {
        delete m_w_permStart;
        m_w_permStart = NULL;
    }
    ;

    m_has_w_permEnd = false;

    if (m_w_permEnd)
    {
        delete m_w_permEnd;
        m_w_permEnd = NULL;
    }
    ;

    m_has_w_proofErr = true;
    if (!m_w_proofErr)
    {
        m_w_proofErr = new ns_w::CT_ProofErr();
    }
    return m_w_proofErr;
}

const ns_w::CT_ProofErr& CT_OMathArg::ChildGroup_4::get_w_proofErr() const
{
    if (m_w_proofErr)
    {
        return *m_w_proofErr;
    }
    return ns_w::CT_ProofErr::default_instance();
}

bool CT_OMathArg::ChildGroup_4::has_w_permStart() const
{
    return m_has_w_permStart;
}

ns_w::CT_PermStart* CT_OMathArg::ChildGroup_4::mutable_w_permStart()
{

    m_has_w_proofErr = false;

    if (m_w_proofErr)
    {
        delete m_w_proofErr;
        m_w_proofErr = NULL;
    }
    ;

    m_has_w_permEnd = false;

    if (m_w_permEnd)
    {
        delete m_w_permEnd;
        m_w_permEnd = NULL;
    }
    ;

    m_has_w_permStart = true;
    if (!m_w_permStart)
    {
        m_w_permStart = new ns_w::CT_PermStart();
    }
    return m_w_permStart;
}

const ns_w::CT_PermStart& CT_OMathArg::ChildGroup_4::get_w_permStart() const
{
    if (m_w_permStart)
    {
        return *m_w_permStart;
    }
    return ns_w::CT_PermStart::default_instance();
}

bool CT_OMathArg::ChildGroup_4::has_w_permEnd() const
{
    return m_has_w_permEnd;
}

ns_w::CT_Perm* CT_OMathArg::ChildGroup_4::mutable_w_permEnd()
{

    m_has_w_proofErr = false;

    if (m_w_proofErr)
    {
        delete m_w_proofErr;
        m_w_proofErr = NULL;
    }
    ;

    m_has_w_permStart = false;

    if (m_w_permStart)
    {
        delete m_w_permStart;
        m_w_permStart = NULL;
    }
    ;

    m_has_w_permEnd = true;
    if (!m_w_permEnd)
    {
        m_w_permEnd = new ns_w::CT_Perm();
    }
    return m_w_permEnd;
}

const ns_w::CT_Perm& CT_OMathArg::ChildGroup_4::get_w_permEnd() const
{
    if (m_w_permEnd)
    {
        return *m_w_permEnd;
    }
    return ns_w::CT_Perm::default_instance();
}


// CT_OMathArg::ChildGroup_5
CT_OMathArg::ChildGroup_5::ChildGroup_5()
    :m_has_w_bookmarkStart(false),
     m_w_bookmarkStart(NULL),
     m_has_w_bookmarkEnd(false),
     m_w_bookmarkEnd(NULL),
     m_has_w_moveFromRangeStart(false),
     m_w_moveFromRangeStart(NULL),
     m_has_w_moveFromRangeEnd(false),
     m_w_moveFromRangeEnd(NULL),
     m_has_w_moveToRangeStart(false),
     m_w_moveToRangeStart(NULL),
     m_has_w_moveToRangeEnd(false),
     m_w_moveToRangeEnd(NULL),
     m_has_w_commentRangeStart(false),
     m_w_commentRangeStart(NULL),
     m_has_w_commentRangeEnd(false),
     m_w_commentRangeEnd(NULL),
     m_has_w_customXmlInsRangeStart(false),
     m_w_customXmlInsRangeStart(NULL),
     m_has_w_customXmlInsRangeEnd(false),
     m_w_customXmlInsRangeEnd(NULL),
     m_has_w_customXmlDelRangeStart(false),
     m_w_customXmlDelRangeStart(NULL),
     m_has_w_customXmlDelRangeEnd(false),
     m_w_customXmlDelRangeEnd(NULL),
     m_has_w_customXmlMoveFromRangeStart(false),
     m_w_customXmlMoveFromRangeStart(NULL),
     m_has_w_customXmlMoveFromRangeEnd(false),
     m_w_customXmlMoveFromRangeEnd(NULL),
     m_has_w_customXmlMoveToRangeStart(false),
     m_w_customXmlMoveToRangeStart(NULL),
     m_has_w_customXmlMoveToRangeEnd(false),
     m_w_customXmlMoveToRangeEnd(NULL)
{
}
bool CT_OMathArg::ChildGroup_5::has_w_bookmarkStart() const
{
    return m_has_w_bookmarkStart;
}

ns_w::CT_Bookmark* CT_OMathArg::ChildGroup_5::mutable_w_bookmarkStart()
{

    m_has_w_bookmarkEnd = false;

    if (m_w_bookmarkEnd)
    {
        delete m_w_bookmarkEnd;
        m_w_bookmarkEnd = NULL;
    }
    ;

    m_has_w_moveFromRangeStart = false;

    if (m_w_moveFromRangeStart)
    {
        delete m_w_moveFromRangeStart;
        m_w_moveFromRangeStart = NULL;
    }
    ;

    m_has_w_moveFromRangeEnd = false;

    if (m_w_moveFromRangeEnd)
    {
        delete m_w_moveFromRangeEnd;
        m_w_moveFromRangeEnd = NULL;
    }
    ;

    m_has_w_moveToRangeStart = false;

    if (m_w_moveToRangeStart)
    {
        delete m_w_moveToRangeStart;
        m_w_moveToRangeStart = NULL;
    }
    ;

    m_has_w_moveToRangeEnd = false;

    if (m_w_moveToRangeEnd)
    {
        delete m_w_moveToRangeEnd;
        m_w_moveToRangeEnd = NULL;
    }
    ;

    m_has_w_commentRangeStart = false;

    if (m_w_commentRangeStart)
    {
        delete m_w_commentRangeStart;
        m_w_commentRangeStart = NULL;
    }
    ;

    m_has_w_commentRangeEnd = false;

    if (m_w_commentRangeEnd)
    {
        delete m_w_commentRangeEnd;
        m_w_commentRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlInsRangeStart = false;

    if (m_w_customXmlInsRangeStart)
    {
        delete m_w_customXmlInsRangeStart;
        m_w_customXmlInsRangeStart = NULL;
    }
    ;

    m_has_w_customXmlInsRangeEnd = false;

    if (m_w_customXmlInsRangeEnd)
    {
        delete m_w_customXmlInsRangeEnd;
        m_w_customXmlInsRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlDelRangeStart = false;

    if (m_w_customXmlDelRangeStart)
    {
        delete m_w_customXmlDelRangeStart;
        m_w_customXmlDelRangeStart = NULL;
    }
    ;

    m_has_w_customXmlDelRangeEnd = false;

    if (m_w_customXmlDelRangeEnd)
    {
        delete m_w_customXmlDelRangeEnd;
        m_w_customXmlDelRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlMoveFromRangeStart = false;

    if (m_w_customXmlMoveFromRangeStart)
    {
        delete m_w_customXmlMoveFromRangeStart;
        m_w_customXmlMoveFromRangeStart = NULL;
    }
    ;

    m_has_w_customXmlMoveFromRangeEnd = false;

    if (m_w_customXmlMoveFromRangeEnd)
    {
        delete m_w_customXmlMoveFromRangeEnd;
        m_w_customXmlMoveFromRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlMoveToRangeStart = false;

    if (m_w_customXmlMoveToRangeStart)
    {
        delete m_w_customXmlMoveToRangeStart;
        m_w_customXmlMoveToRangeStart = NULL;
    }
    ;

    m_has_w_customXmlMoveToRangeEnd = false;

    if (m_w_customXmlMoveToRangeEnd)
    {
        delete m_w_customXmlMoveToRangeEnd;
        m_w_customXmlMoveToRangeEnd = NULL;
    }
    ;

    m_has_w_bookmarkStart = true;
    if (!m_w_bookmarkStart)
    {
        m_w_bookmarkStart = new ns_w::CT_Bookmark();
    }
    return m_w_bookmarkStart;
}

const ns_w::CT_Bookmark& CT_OMathArg::ChildGroup_5::get_w_bookmarkStart() const
{
    if (m_w_bookmarkStart)
    {
        return *m_w_bookmarkStart;
    }
    return ns_w::CT_Bookmark::default_instance();
}

bool CT_OMathArg::ChildGroup_5::has_w_bookmarkEnd() const
{
    return m_has_w_bookmarkEnd;
}

ns_w::CT_MarkupRange* CT_OMathArg::ChildGroup_5::mutable_w_bookmarkEnd()
{

    m_has_w_bookmarkStart = false;

    if (m_w_bookmarkStart)
    {
        delete m_w_bookmarkStart;
        m_w_bookmarkStart = NULL;
    }
    ;

    m_has_w_moveFromRangeStart = false;

    if (m_w_moveFromRangeStart)
    {
        delete m_w_moveFromRangeStart;
        m_w_moveFromRangeStart = NULL;
    }
    ;

    m_has_w_moveFromRangeEnd = false;

    if (m_w_moveFromRangeEnd)
    {
        delete m_w_moveFromRangeEnd;
        m_w_moveFromRangeEnd = NULL;
    }
    ;

    m_has_w_moveToRangeStart = false;

    if (m_w_moveToRangeStart)
    {
        delete m_w_moveToRangeStart;
        m_w_moveToRangeStart = NULL;
    }
    ;

    m_has_w_moveToRangeEnd = false;

    if (m_w_moveToRangeEnd)
    {
        delete m_w_moveToRangeEnd;
        m_w_moveToRangeEnd = NULL;
    }
    ;

    m_has_w_commentRangeStart = false;

    if (m_w_commentRangeStart)
    {
        delete m_w_commentRangeStart;
        m_w_commentRangeStart = NULL;
    }
    ;

    m_has_w_commentRangeEnd = false;

    if (m_w_commentRangeEnd)
    {
        delete m_w_commentRangeEnd;
        m_w_commentRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlInsRangeStart = false;

    if (m_w_customXmlInsRangeStart)
    {
        delete m_w_customXmlInsRangeStart;
        m_w_customXmlInsRangeStart = NULL;
    }
    ;

    m_has_w_customXmlInsRangeEnd = false;

    if (m_w_customXmlInsRangeEnd)
    {
        delete m_w_customXmlInsRangeEnd;
        m_w_customXmlInsRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlDelRangeStart = false;

    if (m_w_customXmlDelRangeStart)
    {
        delete m_w_customXmlDelRangeStart;
        m_w_customXmlDelRangeStart = NULL;
    }
    ;

    m_has_w_customXmlDelRangeEnd = false;

    if (m_w_customXmlDelRangeEnd)
    {
        delete m_w_customXmlDelRangeEnd;
        m_w_customXmlDelRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlMoveFromRangeStart = false;

    if (m_w_customXmlMoveFromRangeStart)
    {
        delete m_w_customXmlMoveFromRangeStart;
        m_w_customXmlMoveFromRangeStart = NULL;
    }
    ;

    m_has_w_customXmlMoveFromRangeEnd = false;

    if (m_w_customXmlMoveFromRangeEnd)
    {
        delete m_w_customXmlMoveFromRangeEnd;
        m_w_customXmlMoveFromRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlMoveToRangeStart = false;

    if (m_w_customXmlMoveToRangeStart)
    {
        delete m_w_customXmlMoveToRangeStart;
        m_w_customXmlMoveToRangeStart = NULL;
    }
    ;

    m_has_w_customXmlMoveToRangeEnd = false;

    if (m_w_customXmlMoveToRangeEnd)
    {
        delete m_w_customXmlMoveToRangeEnd;
        m_w_customXmlMoveToRangeEnd = NULL;
    }
    ;

    m_has_w_bookmarkEnd = true;
    if (!m_w_bookmarkEnd)
    {
        m_w_bookmarkEnd = new ns_w::CT_MarkupRange();
    }
    return m_w_bookmarkEnd;
}

const ns_w::CT_MarkupRange& CT_OMathArg::ChildGroup_5::get_w_bookmarkEnd() const
{
    if (m_w_bookmarkEnd)
    {
        return *m_w_bookmarkEnd;
    }
    return ns_w::CT_MarkupRange::default_instance();
}

bool CT_OMathArg::ChildGroup_5::has_w_moveFromRangeStart() const
{
    return m_has_w_moveFromRangeStart;
}

ns_w::CT_MoveBookmark* CT_OMathArg::ChildGroup_5::mutable_w_moveFromRangeStart()
{

    m_has_w_bookmarkStart = false;

    if (m_w_bookmarkStart)
    {
        delete m_w_bookmarkStart;
        m_w_bookmarkStart = NULL;
    }
    ;

    m_has_w_bookmarkEnd = false;

    if (m_w_bookmarkEnd)
    {
        delete m_w_bookmarkEnd;
        m_w_bookmarkEnd = NULL;
    }
    ;

    m_has_w_moveFromRangeEnd = false;

    if (m_w_moveFromRangeEnd)
    {
        delete m_w_moveFromRangeEnd;
        m_w_moveFromRangeEnd = NULL;
    }
    ;

    m_has_w_moveToRangeStart = false;

    if (m_w_moveToRangeStart)
    {
        delete m_w_moveToRangeStart;
        m_w_moveToRangeStart = NULL;
    }
    ;

    m_has_w_moveToRangeEnd = false;

    if (m_w_moveToRangeEnd)
    {
        delete m_w_moveToRangeEnd;
        m_w_moveToRangeEnd = NULL;
    }
    ;

    m_has_w_commentRangeStart = false;

    if (m_w_commentRangeStart)
    {
        delete m_w_commentRangeStart;
        m_w_commentRangeStart = NULL;
    }
    ;

    m_has_w_commentRangeEnd = false;

    if (m_w_commentRangeEnd)
    {
        delete m_w_commentRangeEnd;
        m_w_commentRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlInsRangeStart = false;

    if (m_w_customXmlInsRangeStart)
    {
        delete m_w_customXmlInsRangeStart;
        m_w_customXmlInsRangeStart = NULL;
    }
    ;

    m_has_w_customXmlInsRangeEnd = false;

    if (m_w_customXmlInsRangeEnd)
    {
        delete m_w_customXmlInsRangeEnd;
        m_w_customXmlInsRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlDelRangeStart = false;

    if (m_w_customXmlDelRangeStart)
    {
        delete m_w_customXmlDelRangeStart;
        m_w_customXmlDelRangeStart = NULL;
    }
    ;

    m_has_w_customXmlDelRangeEnd = false;

    if (m_w_customXmlDelRangeEnd)
    {
        delete m_w_customXmlDelRangeEnd;
        m_w_customXmlDelRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlMoveFromRangeStart = false;

    if (m_w_customXmlMoveFromRangeStart)
    {
        delete m_w_customXmlMoveFromRangeStart;
        m_w_customXmlMoveFromRangeStart = NULL;
    }
    ;

    m_has_w_customXmlMoveFromRangeEnd = false;

    if (m_w_customXmlMoveFromRangeEnd)
    {
        delete m_w_customXmlMoveFromRangeEnd;
        m_w_customXmlMoveFromRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlMoveToRangeStart = false;

    if (m_w_customXmlMoveToRangeStart)
    {
        delete m_w_customXmlMoveToRangeStart;
        m_w_customXmlMoveToRangeStart = NULL;
    }
    ;

    m_has_w_customXmlMoveToRangeEnd = false;

    if (m_w_customXmlMoveToRangeEnd)
    {
        delete m_w_customXmlMoveToRangeEnd;
        m_w_customXmlMoveToRangeEnd = NULL;
    }
    ;

    m_has_w_moveFromRangeStart = true;
    if (!m_w_moveFromRangeStart)
    {
        m_w_moveFromRangeStart = new ns_w::CT_MoveBookmark();
    }
    return m_w_moveFromRangeStart;
}

const ns_w::CT_MoveBookmark& CT_OMathArg::ChildGroup_5::get_w_moveFromRangeStart() const
{
    if (m_w_moveFromRangeStart)
    {
        return *m_w_moveFromRangeStart;
    }
    return ns_w::CT_MoveBookmark::default_instance();
}

bool CT_OMathArg::ChildGroup_5::has_w_moveFromRangeEnd() const
{
    return m_has_w_moveFromRangeEnd;
}

ns_w::CT_MarkupRange* CT_OMathArg::ChildGroup_5::mutable_w_moveFromRangeEnd()
{

    m_has_w_bookmarkStart = false;

    if (m_w_bookmarkStart)
    {
        delete m_w_bookmarkStart;
        m_w_bookmarkStart = NULL;
    }
    ;

    m_has_w_bookmarkEnd = false;

    if (m_w_bookmarkEnd)
    {
        delete m_w_bookmarkEnd;
        m_w_bookmarkEnd = NULL;
    }
    ;

    m_has_w_moveFromRangeStart = false;

    if (m_w_moveFromRangeStart)
    {
        delete m_w_moveFromRangeStart;
        m_w_moveFromRangeStart = NULL;
    }
    ;

    m_has_w_moveToRangeStart = false;

    if (m_w_moveToRangeStart)
    {
        delete m_w_moveToRangeStart;
        m_w_moveToRangeStart = NULL;
    }
    ;

    m_has_w_moveToRangeEnd = false;

    if (m_w_moveToRangeEnd)
    {
        delete m_w_moveToRangeEnd;
        m_w_moveToRangeEnd = NULL;
    }
    ;

    m_has_w_commentRangeStart = false;

    if (m_w_commentRangeStart)
    {
        delete m_w_commentRangeStart;
        m_w_commentRangeStart = NULL;
    }
    ;

    m_has_w_commentRangeEnd = false;

    if (m_w_commentRangeEnd)
    {
        delete m_w_commentRangeEnd;
        m_w_commentRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlInsRangeStart = false;

    if (m_w_customXmlInsRangeStart)
    {
        delete m_w_customXmlInsRangeStart;
        m_w_customXmlInsRangeStart = NULL;
    }
    ;

    m_has_w_customXmlInsRangeEnd = false;

    if (m_w_customXmlInsRangeEnd)
    {
        delete m_w_customXmlInsRangeEnd;
        m_w_customXmlInsRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlDelRangeStart = false;

    if (m_w_customXmlDelRangeStart)
    {
        delete m_w_customXmlDelRangeStart;
        m_w_customXmlDelRangeStart = NULL;
    }
    ;

    m_has_w_customXmlDelRangeEnd = false;

    if (m_w_customXmlDelRangeEnd)
    {
        delete m_w_customXmlDelRangeEnd;
        m_w_customXmlDelRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlMoveFromRangeStart = false;

    if (m_w_customXmlMoveFromRangeStart)
    {
        delete m_w_customXmlMoveFromRangeStart;
        m_w_customXmlMoveFromRangeStart = NULL;
    }
    ;

    m_has_w_customXmlMoveFromRangeEnd = false;

    if (m_w_customXmlMoveFromRangeEnd)
    {
        delete m_w_customXmlMoveFromRangeEnd;
        m_w_customXmlMoveFromRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlMoveToRangeStart = false;

    if (m_w_customXmlMoveToRangeStart)
    {
        delete m_w_customXmlMoveToRangeStart;
        m_w_customXmlMoveToRangeStart = NULL;
    }
    ;

    m_has_w_customXmlMoveToRangeEnd = false;

    if (m_w_customXmlMoveToRangeEnd)
    {
        delete m_w_customXmlMoveToRangeEnd;
        m_w_customXmlMoveToRangeEnd = NULL;
    }
    ;

    m_has_w_moveFromRangeEnd = true;
    if (!m_w_moveFromRangeEnd)
    {
        m_w_moveFromRangeEnd = new ns_w::CT_MarkupRange();
    }
    return m_w_moveFromRangeEnd;
}

const ns_w::CT_MarkupRange& CT_OMathArg::ChildGroup_5::get_w_moveFromRangeEnd() const
{
    if (m_w_moveFromRangeEnd)
    {
        return *m_w_moveFromRangeEnd;
    }
    return ns_w::CT_MarkupRange::default_instance();
}

bool CT_OMathArg::ChildGroup_5::has_w_moveToRangeStart() const
{
    return m_has_w_moveToRangeStart;
}

ns_w::CT_MoveBookmark* CT_OMathArg::ChildGroup_5::mutable_w_moveToRangeStart()
{

    m_has_w_bookmarkStart = false;

    if (m_w_bookmarkStart)
    {
        delete m_w_bookmarkStart;
        m_w_bookmarkStart = NULL;
    }
    ;

    m_has_w_bookmarkEnd = false;

    if (m_w_bookmarkEnd)
    {
        delete m_w_bookmarkEnd;
        m_w_bookmarkEnd = NULL;
    }
    ;

    m_has_w_moveFromRangeStart = false;

    if (m_w_moveFromRangeStart)
    {
        delete m_w_moveFromRangeStart;
        m_w_moveFromRangeStart = NULL;
    }
    ;

    m_has_w_moveFromRangeEnd = false;

    if (m_w_moveFromRangeEnd)
    {
        delete m_w_moveFromRangeEnd;
        m_w_moveFromRangeEnd = NULL;
    }
    ;

    m_has_w_moveToRangeEnd = false;

    if (m_w_moveToRangeEnd)
    {
        delete m_w_moveToRangeEnd;
        m_w_moveToRangeEnd = NULL;
    }
    ;

    m_has_w_commentRangeStart = false;

    if (m_w_commentRangeStart)
    {
        delete m_w_commentRangeStart;
        m_w_commentRangeStart = NULL;
    }
    ;

    m_has_w_commentRangeEnd = false;

    if (m_w_commentRangeEnd)
    {
        delete m_w_commentRangeEnd;
        m_w_commentRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlInsRangeStart = false;

    if (m_w_customXmlInsRangeStart)
    {
        delete m_w_customXmlInsRangeStart;
        m_w_customXmlInsRangeStart = NULL;
    }
    ;

    m_has_w_customXmlInsRangeEnd = false;

    if (m_w_customXmlInsRangeEnd)
    {
        delete m_w_customXmlInsRangeEnd;
        m_w_customXmlInsRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlDelRangeStart = false;

    if (m_w_customXmlDelRangeStart)
    {
        delete m_w_customXmlDelRangeStart;
        m_w_customXmlDelRangeStart = NULL;
    }
    ;

    m_has_w_customXmlDelRangeEnd = false;

    if (m_w_customXmlDelRangeEnd)
    {
        delete m_w_customXmlDelRangeEnd;
        m_w_customXmlDelRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlMoveFromRangeStart = false;

    if (m_w_customXmlMoveFromRangeStart)
    {
        delete m_w_customXmlMoveFromRangeStart;
        m_w_customXmlMoveFromRangeStart = NULL;
    }
    ;

    m_has_w_customXmlMoveFromRangeEnd = false;

    if (m_w_customXmlMoveFromRangeEnd)
    {
        delete m_w_customXmlMoveFromRangeEnd;
        m_w_customXmlMoveFromRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlMoveToRangeStart = false;

    if (m_w_customXmlMoveToRangeStart)
    {
        delete m_w_customXmlMoveToRangeStart;
        m_w_customXmlMoveToRangeStart = NULL;
    }
    ;

    m_has_w_customXmlMoveToRangeEnd = false;

    if (m_w_customXmlMoveToRangeEnd)
    {
        delete m_w_customXmlMoveToRangeEnd;
        m_w_customXmlMoveToRangeEnd = NULL;
    }
    ;

    m_has_w_moveToRangeStart = true;
    if (!m_w_moveToRangeStart)
    {
        m_w_moveToRangeStart = new ns_w::CT_MoveBookmark();
    }
    return m_w_moveToRangeStart;
}

const ns_w::CT_MoveBookmark& CT_OMathArg::ChildGroup_5::get_w_moveToRangeStart() const
{
    if (m_w_moveToRangeStart)
    {
        return *m_w_moveToRangeStart;
    }
    return ns_w::CT_MoveBookmark::default_instance();
}

bool CT_OMathArg::ChildGroup_5::has_w_moveToRangeEnd() const
{
    return m_has_w_moveToRangeEnd;
}

ns_w::CT_MarkupRange* CT_OMathArg::ChildGroup_5::mutable_w_moveToRangeEnd()
{

    m_has_w_bookmarkStart = false;

    if (m_w_bookmarkStart)
    {
        delete m_w_bookmarkStart;
        m_w_bookmarkStart = NULL;
    }
    ;

    m_has_w_bookmarkEnd = false;

    if (m_w_bookmarkEnd)
    {
        delete m_w_bookmarkEnd;
        m_w_bookmarkEnd = NULL;
    }
    ;

    m_has_w_moveFromRangeStart = false;

    if (m_w_moveFromRangeStart)
    {
        delete m_w_moveFromRangeStart;
        m_w_moveFromRangeStart = NULL;
    }
    ;

    m_has_w_moveFromRangeEnd = false;

    if (m_w_moveFromRangeEnd)
    {
        delete m_w_moveFromRangeEnd;
        m_w_moveFromRangeEnd = NULL;
    }
    ;

    m_has_w_moveToRangeStart = false;

    if (m_w_moveToRangeStart)
    {
        delete m_w_moveToRangeStart;
        m_w_moveToRangeStart = NULL;
    }
    ;

    m_has_w_commentRangeStart = false;

    if (m_w_commentRangeStart)
    {
        delete m_w_commentRangeStart;
        m_w_commentRangeStart = NULL;
    }
    ;

    m_has_w_commentRangeEnd = false;

    if (m_w_commentRangeEnd)
    {
        delete m_w_commentRangeEnd;
        m_w_commentRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlInsRangeStart = false;

    if (m_w_customXmlInsRangeStart)
    {
        delete m_w_customXmlInsRangeStart;
        m_w_customXmlInsRangeStart = NULL;
    }
    ;

    m_has_w_customXmlInsRangeEnd = false;

    if (m_w_customXmlInsRangeEnd)
    {
        delete m_w_customXmlInsRangeEnd;
        m_w_customXmlInsRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlDelRangeStart = false;

    if (m_w_customXmlDelRangeStart)
    {
        delete m_w_customXmlDelRangeStart;
        m_w_customXmlDelRangeStart = NULL;
    }
    ;

    m_has_w_customXmlDelRangeEnd = false;

    if (m_w_customXmlDelRangeEnd)
    {
        delete m_w_customXmlDelRangeEnd;
        m_w_customXmlDelRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlMoveFromRangeStart = false;

    if (m_w_customXmlMoveFromRangeStart)
    {
        delete m_w_customXmlMoveFromRangeStart;
        m_w_customXmlMoveFromRangeStart = NULL;
    }
    ;

    m_has_w_customXmlMoveFromRangeEnd = false;

    if (m_w_customXmlMoveFromRangeEnd)
    {
        delete m_w_customXmlMoveFromRangeEnd;
        m_w_customXmlMoveFromRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlMoveToRangeStart = false;

    if (m_w_customXmlMoveToRangeStart)
    {
        delete m_w_customXmlMoveToRangeStart;
        m_w_customXmlMoveToRangeStart = NULL;
    }
    ;

    m_has_w_customXmlMoveToRangeEnd = false;

    if (m_w_customXmlMoveToRangeEnd)
    {
        delete m_w_customXmlMoveToRangeEnd;
        m_w_customXmlMoveToRangeEnd = NULL;
    }
    ;

    m_has_w_moveToRangeEnd = true;
    if (!m_w_moveToRangeEnd)
    {
        m_w_moveToRangeEnd = new ns_w::CT_MarkupRange();
    }
    return m_w_moveToRangeEnd;
}

const ns_w::CT_MarkupRange& CT_OMathArg::ChildGroup_5::get_w_moveToRangeEnd() const
{
    if (m_w_moveToRangeEnd)
    {
        return *m_w_moveToRangeEnd;
    }
    return ns_w::CT_MarkupRange::default_instance();
}

bool CT_OMathArg::ChildGroup_5::has_w_commentRangeStart() const
{
    return m_has_w_commentRangeStart;
}

ns_w::CT_MarkupRange* CT_OMathArg::ChildGroup_5::mutable_w_commentRangeStart()
{

    m_has_w_bookmarkStart = false;

    if (m_w_bookmarkStart)
    {
        delete m_w_bookmarkStart;
        m_w_bookmarkStart = NULL;
    }
    ;

    m_has_w_bookmarkEnd = false;

    if (m_w_bookmarkEnd)
    {
        delete m_w_bookmarkEnd;
        m_w_bookmarkEnd = NULL;
    }
    ;

    m_has_w_moveFromRangeStart = false;

    if (m_w_moveFromRangeStart)
    {
        delete m_w_moveFromRangeStart;
        m_w_moveFromRangeStart = NULL;
    }
    ;

    m_has_w_moveFromRangeEnd = false;

    if (m_w_moveFromRangeEnd)
    {
        delete m_w_moveFromRangeEnd;
        m_w_moveFromRangeEnd = NULL;
    }
    ;

    m_has_w_moveToRangeStart = false;

    if (m_w_moveToRangeStart)
    {
        delete m_w_moveToRangeStart;
        m_w_moveToRangeStart = NULL;
    }
    ;

    m_has_w_moveToRangeEnd = false;

    if (m_w_moveToRangeEnd)
    {
        delete m_w_moveToRangeEnd;
        m_w_moveToRangeEnd = NULL;
    }
    ;

    m_has_w_commentRangeEnd = false;

    if (m_w_commentRangeEnd)
    {
        delete m_w_commentRangeEnd;
        m_w_commentRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlInsRangeStart = false;

    if (m_w_customXmlInsRangeStart)
    {
        delete m_w_customXmlInsRangeStart;
        m_w_customXmlInsRangeStart = NULL;
    }
    ;

    m_has_w_customXmlInsRangeEnd = false;

    if (m_w_customXmlInsRangeEnd)
    {
        delete m_w_customXmlInsRangeEnd;
        m_w_customXmlInsRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlDelRangeStart = false;

    if (m_w_customXmlDelRangeStart)
    {
        delete m_w_customXmlDelRangeStart;
        m_w_customXmlDelRangeStart = NULL;
    }
    ;

    m_has_w_customXmlDelRangeEnd = false;

    if (m_w_customXmlDelRangeEnd)
    {
        delete m_w_customXmlDelRangeEnd;
        m_w_customXmlDelRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlMoveFromRangeStart = false;

    if (m_w_customXmlMoveFromRangeStart)
    {
        delete m_w_customXmlMoveFromRangeStart;
        m_w_customXmlMoveFromRangeStart = NULL;
    }
    ;

    m_has_w_customXmlMoveFromRangeEnd = false;

    if (m_w_customXmlMoveFromRangeEnd)
    {
        delete m_w_customXmlMoveFromRangeEnd;
        m_w_customXmlMoveFromRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlMoveToRangeStart = false;

    if (m_w_customXmlMoveToRangeStart)
    {
        delete m_w_customXmlMoveToRangeStart;
        m_w_customXmlMoveToRangeStart = NULL;
    }
    ;

    m_has_w_customXmlMoveToRangeEnd = false;

    if (m_w_customXmlMoveToRangeEnd)
    {
        delete m_w_customXmlMoveToRangeEnd;
        m_w_customXmlMoveToRangeEnd = NULL;
    }
    ;

    m_has_w_commentRangeStart = true;
    if (!m_w_commentRangeStart)
    {
        m_w_commentRangeStart = new ns_w::CT_MarkupRange();
    }
    return m_w_commentRangeStart;
}

const ns_w::CT_MarkupRange& CT_OMathArg::ChildGroup_5::get_w_commentRangeStart() const
{
    if (m_w_commentRangeStart)
    {
        return *m_w_commentRangeStart;
    }
    return ns_w::CT_MarkupRange::default_instance();
}

bool CT_OMathArg::ChildGroup_5::has_w_commentRangeEnd() const
{
    return m_has_w_commentRangeEnd;
}

ns_w::CT_MarkupRange* CT_OMathArg::ChildGroup_5::mutable_w_commentRangeEnd()
{

    m_has_w_bookmarkStart = false;

    if (m_w_bookmarkStart)
    {
        delete m_w_bookmarkStart;
        m_w_bookmarkStart = NULL;
    }
    ;

    m_has_w_bookmarkEnd = false;

    if (m_w_bookmarkEnd)
    {
        delete m_w_bookmarkEnd;
        m_w_bookmarkEnd = NULL;
    }
    ;

    m_has_w_moveFromRangeStart = false;

    if (m_w_moveFromRangeStart)
    {
        delete m_w_moveFromRangeStart;
        m_w_moveFromRangeStart = NULL;
    }
    ;

    m_has_w_moveFromRangeEnd = false;

    if (m_w_moveFromRangeEnd)
    {
        delete m_w_moveFromRangeEnd;
        m_w_moveFromRangeEnd = NULL;
    }
    ;

    m_has_w_moveToRangeStart = false;

    if (m_w_moveToRangeStart)
    {
        delete m_w_moveToRangeStart;
        m_w_moveToRangeStart = NULL;
    }
    ;

    m_has_w_moveToRangeEnd = false;

    if (m_w_moveToRangeEnd)
    {
        delete m_w_moveToRangeEnd;
        m_w_moveToRangeEnd = NULL;
    }
    ;

    m_has_w_commentRangeStart = false;

    if (m_w_commentRangeStart)
    {
        delete m_w_commentRangeStart;
        m_w_commentRangeStart = NULL;
    }
    ;

    m_has_w_customXmlInsRangeStart = false;

    if (m_w_customXmlInsRangeStart)
    {
        delete m_w_customXmlInsRangeStart;
        m_w_customXmlInsRangeStart = NULL;
    }
    ;

    m_has_w_customXmlInsRangeEnd = false;

    if (m_w_customXmlInsRangeEnd)
    {
        delete m_w_customXmlInsRangeEnd;
        m_w_customXmlInsRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlDelRangeStart = false;

    if (m_w_customXmlDelRangeStart)
    {
        delete m_w_customXmlDelRangeStart;
        m_w_customXmlDelRangeStart = NULL;
    }
    ;

    m_has_w_customXmlDelRangeEnd = false;

    if (m_w_customXmlDelRangeEnd)
    {
        delete m_w_customXmlDelRangeEnd;
        m_w_customXmlDelRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlMoveFromRangeStart = false;

    if (m_w_customXmlMoveFromRangeStart)
    {
        delete m_w_customXmlMoveFromRangeStart;
        m_w_customXmlMoveFromRangeStart = NULL;
    }
    ;

    m_has_w_customXmlMoveFromRangeEnd = false;

    if (m_w_customXmlMoveFromRangeEnd)
    {
        delete m_w_customXmlMoveFromRangeEnd;
        m_w_customXmlMoveFromRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlMoveToRangeStart = false;

    if (m_w_customXmlMoveToRangeStart)
    {
        delete m_w_customXmlMoveToRangeStart;
        m_w_customXmlMoveToRangeStart = NULL;
    }
    ;

    m_has_w_customXmlMoveToRangeEnd = false;

    if (m_w_customXmlMoveToRangeEnd)
    {
        delete m_w_customXmlMoveToRangeEnd;
        m_w_customXmlMoveToRangeEnd = NULL;
    }
    ;

    m_has_w_commentRangeEnd = true;
    if (!m_w_commentRangeEnd)
    {
        m_w_commentRangeEnd = new ns_w::CT_MarkupRange();
    }
    return m_w_commentRangeEnd;
}

const ns_w::CT_MarkupRange& CT_OMathArg::ChildGroup_5::get_w_commentRangeEnd() const
{
    if (m_w_commentRangeEnd)
    {
        return *m_w_commentRangeEnd;
    }
    return ns_w::CT_MarkupRange::default_instance();
}

bool CT_OMathArg::ChildGroup_5::has_w_customXmlInsRangeStart() const
{
    return m_has_w_customXmlInsRangeStart;
}

ns_w::CT_TrackChange* CT_OMathArg::ChildGroup_5::mutable_w_customXmlInsRangeStart()
{

    m_has_w_bookmarkStart = false;

    if (m_w_bookmarkStart)
    {
        delete m_w_bookmarkStart;
        m_w_bookmarkStart = NULL;
    }
    ;

    m_has_w_bookmarkEnd = false;

    if (m_w_bookmarkEnd)
    {
        delete m_w_bookmarkEnd;
        m_w_bookmarkEnd = NULL;
    }
    ;

    m_has_w_moveFromRangeStart = false;

    if (m_w_moveFromRangeStart)
    {
        delete m_w_moveFromRangeStart;
        m_w_moveFromRangeStart = NULL;
    }
    ;

    m_has_w_moveFromRangeEnd = false;

    if (m_w_moveFromRangeEnd)
    {
        delete m_w_moveFromRangeEnd;
        m_w_moveFromRangeEnd = NULL;
    }
    ;

    m_has_w_moveToRangeStart = false;

    if (m_w_moveToRangeStart)
    {
        delete m_w_moveToRangeStart;
        m_w_moveToRangeStart = NULL;
    }
    ;

    m_has_w_moveToRangeEnd = false;

    if (m_w_moveToRangeEnd)
    {
        delete m_w_moveToRangeEnd;
        m_w_moveToRangeEnd = NULL;
    }
    ;

    m_has_w_commentRangeStart = false;

    if (m_w_commentRangeStart)
    {
        delete m_w_commentRangeStart;
        m_w_commentRangeStart = NULL;
    }
    ;

    m_has_w_commentRangeEnd = false;

    if (m_w_commentRangeEnd)
    {
        delete m_w_commentRangeEnd;
        m_w_commentRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlInsRangeEnd = false;

    if (m_w_customXmlInsRangeEnd)
    {
        delete m_w_customXmlInsRangeEnd;
        m_w_customXmlInsRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlDelRangeStart = false;

    if (m_w_customXmlDelRangeStart)
    {
        delete m_w_customXmlDelRangeStart;
        m_w_customXmlDelRangeStart = NULL;
    }
    ;

    m_has_w_customXmlDelRangeEnd = false;

    if (m_w_customXmlDelRangeEnd)
    {
        delete m_w_customXmlDelRangeEnd;
        m_w_customXmlDelRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlMoveFromRangeStart = false;

    if (m_w_customXmlMoveFromRangeStart)
    {
        delete m_w_customXmlMoveFromRangeStart;
        m_w_customXmlMoveFromRangeStart = NULL;
    }
    ;

    m_has_w_customXmlMoveFromRangeEnd = false;

    if (m_w_customXmlMoveFromRangeEnd)
    {
        delete m_w_customXmlMoveFromRangeEnd;
        m_w_customXmlMoveFromRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlMoveToRangeStart = false;

    if (m_w_customXmlMoveToRangeStart)
    {
        delete m_w_customXmlMoveToRangeStart;
        m_w_customXmlMoveToRangeStart = NULL;
    }
    ;

    m_has_w_customXmlMoveToRangeEnd = false;

    if (m_w_customXmlMoveToRangeEnd)
    {
        delete m_w_customXmlMoveToRangeEnd;
        m_w_customXmlMoveToRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlInsRangeStart = true;
    if (!m_w_customXmlInsRangeStart)
    {
        m_w_customXmlInsRangeStart = new ns_w::CT_TrackChange();
    }
    return m_w_customXmlInsRangeStart;
}

const ns_w::CT_TrackChange& CT_OMathArg::ChildGroup_5::get_w_customXmlInsRangeStart() const
{
    if (m_w_customXmlInsRangeStart)
    {
        return *m_w_customXmlInsRangeStart;
    }
    return ns_w::CT_TrackChange::default_instance();
}

bool CT_OMathArg::ChildGroup_5::has_w_customXmlInsRangeEnd() const
{
    return m_has_w_customXmlInsRangeEnd;
}

ns_w::CT_Markup* CT_OMathArg::ChildGroup_5::mutable_w_customXmlInsRangeEnd()
{

    m_has_w_bookmarkStart = false;

    if (m_w_bookmarkStart)
    {
        delete m_w_bookmarkStart;
        m_w_bookmarkStart = NULL;
    }
    ;

    m_has_w_bookmarkEnd = false;

    if (m_w_bookmarkEnd)
    {
        delete m_w_bookmarkEnd;
        m_w_bookmarkEnd = NULL;
    }
    ;

    m_has_w_moveFromRangeStart = false;

    if (m_w_moveFromRangeStart)
    {
        delete m_w_moveFromRangeStart;
        m_w_moveFromRangeStart = NULL;
    }
    ;

    m_has_w_moveFromRangeEnd = false;

    if (m_w_moveFromRangeEnd)
    {
        delete m_w_moveFromRangeEnd;
        m_w_moveFromRangeEnd = NULL;
    }
    ;

    m_has_w_moveToRangeStart = false;

    if (m_w_moveToRangeStart)
    {
        delete m_w_moveToRangeStart;
        m_w_moveToRangeStart = NULL;
    }
    ;

    m_has_w_moveToRangeEnd = false;

    if (m_w_moveToRangeEnd)
    {
        delete m_w_moveToRangeEnd;
        m_w_moveToRangeEnd = NULL;
    }
    ;

    m_has_w_commentRangeStart = false;

    if (m_w_commentRangeStart)
    {
        delete m_w_commentRangeStart;
        m_w_commentRangeStart = NULL;
    }
    ;

    m_has_w_commentRangeEnd = false;

    if (m_w_commentRangeEnd)
    {
        delete m_w_commentRangeEnd;
        m_w_commentRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlInsRangeStart = false;

    if (m_w_customXmlInsRangeStart)
    {
        delete m_w_customXmlInsRangeStart;
        m_w_customXmlInsRangeStart = NULL;
    }
    ;

    m_has_w_customXmlDelRangeStart = false;

    if (m_w_customXmlDelRangeStart)
    {
        delete m_w_customXmlDelRangeStart;
        m_w_customXmlDelRangeStart = NULL;
    }
    ;

    m_has_w_customXmlDelRangeEnd = false;

    if (m_w_customXmlDelRangeEnd)
    {
        delete m_w_customXmlDelRangeEnd;
        m_w_customXmlDelRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlMoveFromRangeStart = false;

    if (m_w_customXmlMoveFromRangeStart)
    {
        delete m_w_customXmlMoveFromRangeStart;
        m_w_customXmlMoveFromRangeStart = NULL;
    }
    ;

    m_has_w_customXmlMoveFromRangeEnd = false;

    if (m_w_customXmlMoveFromRangeEnd)
    {
        delete m_w_customXmlMoveFromRangeEnd;
        m_w_customXmlMoveFromRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlMoveToRangeStart = false;

    if (m_w_customXmlMoveToRangeStart)
    {
        delete m_w_customXmlMoveToRangeStart;
        m_w_customXmlMoveToRangeStart = NULL;
    }
    ;

    m_has_w_customXmlMoveToRangeEnd = false;

    if (m_w_customXmlMoveToRangeEnd)
    {
        delete m_w_customXmlMoveToRangeEnd;
        m_w_customXmlMoveToRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlInsRangeEnd = true;
    if (!m_w_customXmlInsRangeEnd)
    {
        m_w_customXmlInsRangeEnd = new ns_w::CT_Markup();
    }
    return m_w_customXmlInsRangeEnd;
}

const ns_w::CT_Markup& CT_OMathArg::ChildGroup_5::get_w_customXmlInsRangeEnd() const
{
    if (m_w_customXmlInsRangeEnd)
    {
        return *m_w_customXmlInsRangeEnd;
    }
    return ns_w::CT_Markup::default_instance();
}

bool CT_OMathArg::ChildGroup_5::has_w_customXmlDelRangeStart() const
{
    return m_has_w_customXmlDelRangeStart;
}

ns_w::CT_TrackChange* CT_OMathArg::ChildGroup_5::mutable_w_customXmlDelRangeStart()
{

    m_has_w_bookmarkStart = false;

    if (m_w_bookmarkStart)
    {
        delete m_w_bookmarkStart;
        m_w_bookmarkStart = NULL;
    }
    ;

    m_has_w_bookmarkEnd = false;

    if (m_w_bookmarkEnd)
    {
        delete m_w_bookmarkEnd;
        m_w_bookmarkEnd = NULL;
    }
    ;

    m_has_w_moveFromRangeStart = false;

    if (m_w_moveFromRangeStart)
    {
        delete m_w_moveFromRangeStart;
        m_w_moveFromRangeStart = NULL;
    }
    ;

    m_has_w_moveFromRangeEnd = false;

    if (m_w_moveFromRangeEnd)
    {
        delete m_w_moveFromRangeEnd;
        m_w_moveFromRangeEnd = NULL;
    }
    ;

    m_has_w_moveToRangeStart = false;

    if (m_w_moveToRangeStart)
    {
        delete m_w_moveToRangeStart;
        m_w_moveToRangeStart = NULL;
    }
    ;

    m_has_w_moveToRangeEnd = false;

    if (m_w_moveToRangeEnd)
    {
        delete m_w_moveToRangeEnd;
        m_w_moveToRangeEnd = NULL;
    }
    ;

    m_has_w_commentRangeStart = false;

    if (m_w_commentRangeStart)
    {
        delete m_w_commentRangeStart;
        m_w_commentRangeStart = NULL;
    }
    ;

    m_has_w_commentRangeEnd = false;

    if (m_w_commentRangeEnd)
    {
        delete m_w_commentRangeEnd;
        m_w_commentRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlInsRangeStart = false;

    if (m_w_customXmlInsRangeStart)
    {
        delete m_w_customXmlInsRangeStart;
        m_w_customXmlInsRangeStart = NULL;
    }
    ;

    m_has_w_customXmlInsRangeEnd = false;

    if (m_w_customXmlInsRangeEnd)
    {
        delete m_w_customXmlInsRangeEnd;
        m_w_customXmlInsRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlDelRangeEnd = false;

    if (m_w_customXmlDelRangeEnd)
    {
        delete m_w_customXmlDelRangeEnd;
        m_w_customXmlDelRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlMoveFromRangeStart = false;

    if (m_w_customXmlMoveFromRangeStart)
    {
        delete m_w_customXmlMoveFromRangeStart;
        m_w_customXmlMoveFromRangeStart = NULL;
    }
    ;

    m_has_w_customXmlMoveFromRangeEnd = false;

    if (m_w_customXmlMoveFromRangeEnd)
    {
        delete m_w_customXmlMoveFromRangeEnd;
        m_w_customXmlMoveFromRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlMoveToRangeStart = false;

    if (m_w_customXmlMoveToRangeStart)
    {
        delete m_w_customXmlMoveToRangeStart;
        m_w_customXmlMoveToRangeStart = NULL;
    }
    ;

    m_has_w_customXmlMoveToRangeEnd = false;

    if (m_w_customXmlMoveToRangeEnd)
    {
        delete m_w_customXmlMoveToRangeEnd;
        m_w_customXmlMoveToRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlDelRangeStart = true;
    if (!m_w_customXmlDelRangeStart)
    {
        m_w_customXmlDelRangeStart = new ns_w::CT_TrackChange();
    }
    return m_w_customXmlDelRangeStart;
}

const ns_w::CT_TrackChange& CT_OMathArg::ChildGroup_5::get_w_customXmlDelRangeStart() const
{
    if (m_w_customXmlDelRangeStart)
    {
        return *m_w_customXmlDelRangeStart;
    }
    return ns_w::CT_TrackChange::default_instance();
}

bool CT_OMathArg::ChildGroup_5::has_w_customXmlDelRangeEnd() const
{
    return m_has_w_customXmlDelRangeEnd;
}

ns_w::CT_Markup* CT_OMathArg::ChildGroup_5::mutable_w_customXmlDelRangeEnd()
{

    m_has_w_bookmarkStart = false;

    if (m_w_bookmarkStart)
    {
        delete m_w_bookmarkStart;
        m_w_bookmarkStart = NULL;
    }
    ;

    m_has_w_bookmarkEnd = false;

    if (m_w_bookmarkEnd)
    {
        delete m_w_bookmarkEnd;
        m_w_bookmarkEnd = NULL;
    }
    ;

    m_has_w_moveFromRangeStart = false;

    if (m_w_moveFromRangeStart)
    {
        delete m_w_moveFromRangeStart;
        m_w_moveFromRangeStart = NULL;
    }
    ;

    m_has_w_moveFromRangeEnd = false;

    if (m_w_moveFromRangeEnd)
    {
        delete m_w_moveFromRangeEnd;
        m_w_moveFromRangeEnd = NULL;
    }
    ;

    m_has_w_moveToRangeStart = false;

    if (m_w_moveToRangeStart)
    {
        delete m_w_moveToRangeStart;
        m_w_moveToRangeStart = NULL;
    }
    ;

    m_has_w_moveToRangeEnd = false;

    if (m_w_moveToRangeEnd)
    {
        delete m_w_moveToRangeEnd;
        m_w_moveToRangeEnd = NULL;
    }
    ;

    m_has_w_commentRangeStart = false;

    if (m_w_commentRangeStart)
    {
        delete m_w_commentRangeStart;
        m_w_commentRangeStart = NULL;
    }
    ;

    m_has_w_commentRangeEnd = false;

    if (m_w_commentRangeEnd)
    {
        delete m_w_commentRangeEnd;
        m_w_commentRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlInsRangeStart = false;

    if (m_w_customXmlInsRangeStart)
    {
        delete m_w_customXmlInsRangeStart;
        m_w_customXmlInsRangeStart = NULL;
    }
    ;

    m_has_w_customXmlInsRangeEnd = false;

    if (m_w_customXmlInsRangeEnd)
    {
        delete m_w_customXmlInsRangeEnd;
        m_w_customXmlInsRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlDelRangeStart = false;

    if (m_w_customXmlDelRangeStart)
    {
        delete m_w_customXmlDelRangeStart;
        m_w_customXmlDelRangeStart = NULL;
    }
    ;

    m_has_w_customXmlMoveFromRangeStart = false;

    if (m_w_customXmlMoveFromRangeStart)
    {
        delete m_w_customXmlMoveFromRangeStart;
        m_w_customXmlMoveFromRangeStart = NULL;
    }
    ;

    m_has_w_customXmlMoveFromRangeEnd = false;

    if (m_w_customXmlMoveFromRangeEnd)
    {
        delete m_w_customXmlMoveFromRangeEnd;
        m_w_customXmlMoveFromRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlMoveToRangeStart = false;

    if (m_w_customXmlMoveToRangeStart)
    {
        delete m_w_customXmlMoveToRangeStart;
        m_w_customXmlMoveToRangeStart = NULL;
    }
    ;

    m_has_w_customXmlMoveToRangeEnd = false;

    if (m_w_customXmlMoveToRangeEnd)
    {
        delete m_w_customXmlMoveToRangeEnd;
        m_w_customXmlMoveToRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlDelRangeEnd = true;
    if (!m_w_customXmlDelRangeEnd)
    {
        m_w_customXmlDelRangeEnd = new ns_w::CT_Markup();
    }
    return m_w_customXmlDelRangeEnd;
}

const ns_w::CT_Markup& CT_OMathArg::ChildGroup_5::get_w_customXmlDelRangeEnd() const
{
    if (m_w_customXmlDelRangeEnd)
    {
        return *m_w_customXmlDelRangeEnd;
    }
    return ns_w::CT_Markup::default_instance();
}

bool CT_OMathArg::ChildGroup_5::has_w_customXmlMoveFromRangeStart() const
{
    return m_has_w_customXmlMoveFromRangeStart;
}

ns_w::CT_TrackChange* CT_OMathArg::ChildGroup_5::mutable_w_customXmlMoveFromRangeStart()
{

    m_has_w_bookmarkStart = false;

    if (m_w_bookmarkStart)
    {
        delete m_w_bookmarkStart;
        m_w_bookmarkStart = NULL;
    }
    ;

    m_has_w_bookmarkEnd = false;

    if (m_w_bookmarkEnd)
    {
        delete m_w_bookmarkEnd;
        m_w_bookmarkEnd = NULL;
    }
    ;

    m_has_w_moveFromRangeStart = false;

    if (m_w_moveFromRangeStart)
    {
        delete m_w_moveFromRangeStart;
        m_w_moveFromRangeStart = NULL;
    }
    ;

    m_has_w_moveFromRangeEnd = false;

    if (m_w_moveFromRangeEnd)
    {
        delete m_w_moveFromRangeEnd;
        m_w_moveFromRangeEnd = NULL;
    }
    ;

    m_has_w_moveToRangeStart = false;

    if (m_w_moveToRangeStart)
    {
        delete m_w_moveToRangeStart;
        m_w_moveToRangeStart = NULL;
    }
    ;

    m_has_w_moveToRangeEnd = false;

    if (m_w_moveToRangeEnd)
    {
        delete m_w_moveToRangeEnd;
        m_w_moveToRangeEnd = NULL;
    }
    ;

    m_has_w_commentRangeStart = false;

    if (m_w_commentRangeStart)
    {
        delete m_w_commentRangeStart;
        m_w_commentRangeStart = NULL;
    }
    ;

    m_has_w_commentRangeEnd = false;

    if (m_w_commentRangeEnd)
    {
        delete m_w_commentRangeEnd;
        m_w_commentRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlInsRangeStart = false;

    if (m_w_customXmlInsRangeStart)
    {
        delete m_w_customXmlInsRangeStart;
        m_w_customXmlInsRangeStart = NULL;
    }
    ;

    m_has_w_customXmlInsRangeEnd = false;

    if (m_w_customXmlInsRangeEnd)
    {
        delete m_w_customXmlInsRangeEnd;
        m_w_customXmlInsRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlDelRangeStart = false;

    if (m_w_customXmlDelRangeStart)
    {
        delete m_w_customXmlDelRangeStart;
        m_w_customXmlDelRangeStart = NULL;
    }
    ;

    m_has_w_customXmlDelRangeEnd = false;

    if (m_w_customXmlDelRangeEnd)
    {
        delete m_w_customXmlDelRangeEnd;
        m_w_customXmlDelRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlMoveFromRangeEnd = false;

    if (m_w_customXmlMoveFromRangeEnd)
    {
        delete m_w_customXmlMoveFromRangeEnd;
        m_w_customXmlMoveFromRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlMoveToRangeStart = false;

    if (m_w_customXmlMoveToRangeStart)
    {
        delete m_w_customXmlMoveToRangeStart;
        m_w_customXmlMoveToRangeStart = NULL;
    }
    ;

    m_has_w_customXmlMoveToRangeEnd = false;

    if (m_w_customXmlMoveToRangeEnd)
    {
        delete m_w_customXmlMoveToRangeEnd;
        m_w_customXmlMoveToRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlMoveFromRangeStart = true;
    if (!m_w_customXmlMoveFromRangeStart)
    {
        m_w_customXmlMoveFromRangeStart = new ns_w::CT_TrackChange();
    }
    return m_w_customXmlMoveFromRangeStart;
}

const ns_w::CT_TrackChange& CT_OMathArg::ChildGroup_5::get_w_customXmlMoveFromRangeStart() const
{
    if (m_w_customXmlMoveFromRangeStart)
    {
        return *m_w_customXmlMoveFromRangeStart;
    }
    return ns_w::CT_TrackChange::default_instance();
}

bool CT_OMathArg::ChildGroup_5::has_w_customXmlMoveFromRangeEnd() const
{
    return m_has_w_customXmlMoveFromRangeEnd;
}

ns_w::CT_Markup* CT_OMathArg::ChildGroup_5::mutable_w_customXmlMoveFromRangeEnd()
{

    m_has_w_bookmarkStart = false;

    if (m_w_bookmarkStart)
    {
        delete m_w_bookmarkStart;
        m_w_bookmarkStart = NULL;
    }
    ;

    m_has_w_bookmarkEnd = false;

    if (m_w_bookmarkEnd)
    {
        delete m_w_bookmarkEnd;
        m_w_bookmarkEnd = NULL;
    }
    ;

    m_has_w_moveFromRangeStart = false;

    if (m_w_moveFromRangeStart)
    {
        delete m_w_moveFromRangeStart;
        m_w_moveFromRangeStart = NULL;
    }
    ;

    m_has_w_moveFromRangeEnd = false;

    if (m_w_moveFromRangeEnd)
    {
        delete m_w_moveFromRangeEnd;
        m_w_moveFromRangeEnd = NULL;
    }
    ;

    m_has_w_moveToRangeStart = false;

    if (m_w_moveToRangeStart)
    {
        delete m_w_moveToRangeStart;
        m_w_moveToRangeStart = NULL;
    }
    ;

    m_has_w_moveToRangeEnd = false;

    if (m_w_moveToRangeEnd)
    {
        delete m_w_moveToRangeEnd;
        m_w_moveToRangeEnd = NULL;
    }
    ;

    m_has_w_commentRangeStart = false;

    if (m_w_commentRangeStart)
    {
        delete m_w_commentRangeStart;
        m_w_commentRangeStart = NULL;
    }
    ;

    m_has_w_commentRangeEnd = false;

    if (m_w_commentRangeEnd)
    {
        delete m_w_commentRangeEnd;
        m_w_commentRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlInsRangeStart = false;

    if (m_w_customXmlInsRangeStart)
    {
        delete m_w_customXmlInsRangeStart;
        m_w_customXmlInsRangeStart = NULL;
    }
    ;

    m_has_w_customXmlInsRangeEnd = false;

    if (m_w_customXmlInsRangeEnd)
    {
        delete m_w_customXmlInsRangeEnd;
        m_w_customXmlInsRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlDelRangeStart = false;

    if (m_w_customXmlDelRangeStart)
    {
        delete m_w_customXmlDelRangeStart;
        m_w_customXmlDelRangeStart = NULL;
    }
    ;

    m_has_w_customXmlDelRangeEnd = false;

    if (m_w_customXmlDelRangeEnd)
    {
        delete m_w_customXmlDelRangeEnd;
        m_w_customXmlDelRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlMoveFromRangeStart = false;

    if (m_w_customXmlMoveFromRangeStart)
    {
        delete m_w_customXmlMoveFromRangeStart;
        m_w_customXmlMoveFromRangeStart = NULL;
    }
    ;

    m_has_w_customXmlMoveToRangeStart = false;

    if (m_w_customXmlMoveToRangeStart)
    {
        delete m_w_customXmlMoveToRangeStart;
        m_w_customXmlMoveToRangeStart = NULL;
    }
    ;

    m_has_w_customXmlMoveToRangeEnd = false;

    if (m_w_customXmlMoveToRangeEnd)
    {
        delete m_w_customXmlMoveToRangeEnd;
        m_w_customXmlMoveToRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlMoveFromRangeEnd = true;
    if (!m_w_customXmlMoveFromRangeEnd)
    {
        m_w_customXmlMoveFromRangeEnd = new ns_w::CT_Markup();
    }
    return m_w_customXmlMoveFromRangeEnd;
}

const ns_w::CT_Markup& CT_OMathArg::ChildGroup_5::get_w_customXmlMoveFromRangeEnd() const
{
    if (m_w_customXmlMoveFromRangeEnd)
    {
        return *m_w_customXmlMoveFromRangeEnd;
    }
    return ns_w::CT_Markup::default_instance();
}

bool CT_OMathArg::ChildGroup_5::has_w_customXmlMoveToRangeStart() const
{
    return m_has_w_customXmlMoveToRangeStart;
}

ns_w::CT_TrackChange* CT_OMathArg::ChildGroup_5::mutable_w_customXmlMoveToRangeStart()
{

    m_has_w_bookmarkStart = false;

    if (m_w_bookmarkStart)
    {
        delete m_w_bookmarkStart;
        m_w_bookmarkStart = NULL;
    }
    ;

    m_has_w_bookmarkEnd = false;

    if (m_w_bookmarkEnd)
    {
        delete m_w_bookmarkEnd;
        m_w_bookmarkEnd = NULL;
    }
    ;

    m_has_w_moveFromRangeStart = false;

    if (m_w_moveFromRangeStart)
    {
        delete m_w_moveFromRangeStart;
        m_w_moveFromRangeStart = NULL;
    }
    ;

    m_has_w_moveFromRangeEnd = false;

    if (m_w_moveFromRangeEnd)
    {
        delete m_w_moveFromRangeEnd;
        m_w_moveFromRangeEnd = NULL;
    }
    ;

    m_has_w_moveToRangeStart = false;

    if (m_w_moveToRangeStart)
    {
        delete m_w_moveToRangeStart;
        m_w_moveToRangeStart = NULL;
    }
    ;

    m_has_w_moveToRangeEnd = false;

    if (m_w_moveToRangeEnd)
    {
        delete m_w_moveToRangeEnd;
        m_w_moveToRangeEnd = NULL;
    }
    ;

    m_has_w_commentRangeStart = false;

    if (m_w_commentRangeStart)
    {
        delete m_w_commentRangeStart;
        m_w_commentRangeStart = NULL;
    }
    ;

    m_has_w_commentRangeEnd = false;

    if (m_w_commentRangeEnd)
    {
        delete m_w_commentRangeEnd;
        m_w_commentRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlInsRangeStart = false;

    if (m_w_customXmlInsRangeStart)
    {
        delete m_w_customXmlInsRangeStart;
        m_w_customXmlInsRangeStart = NULL;
    }
    ;

    m_has_w_customXmlInsRangeEnd = false;

    if (m_w_customXmlInsRangeEnd)
    {
        delete m_w_customXmlInsRangeEnd;
        m_w_customXmlInsRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlDelRangeStart = false;

    if (m_w_customXmlDelRangeStart)
    {
        delete m_w_customXmlDelRangeStart;
        m_w_customXmlDelRangeStart = NULL;
    }
    ;

    m_has_w_customXmlDelRangeEnd = false;

    if (m_w_customXmlDelRangeEnd)
    {
        delete m_w_customXmlDelRangeEnd;
        m_w_customXmlDelRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlMoveFromRangeStart = false;

    if (m_w_customXmlMoveFromRangeStart)
    {
        delete m_w_customXmlMoveFromRangeStart;
        m_w_customXmlMoveFromRangeStart = NULL;
    }
    ;

    m_has_w_customXmlMoveFromRangeEnd = false;

    if (m_w_customXmlMoveFromRangeEnd)
    {
        delete m_w_customXmlMoveFromRangeEnd;
        m_w_customXmlMoveFromRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlMoveToRangeEnd = false;

    if (m_w_customXmlMoveToRangeEnd)
    {
        delete m_w_customXmlMoveToRangeEnd;
        m_w_customXmlMoveToRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlMoveToRangeStart = true;
    if (!m_w_customXmlMoveToRangeStart)
    {
        m_w_customXmlMoveToRangeStart = new ns_w::CT_TrackChange();
    }
    return m_w_customXmlMoveToRangeStart;
}

const ns_w::CT_TrackChange& CT_OMathArg::ChildGroup_5::get_w_customXmlMoveToRangeStart() const
{
    if (m_w_customXmlMoveToRangeStart)
    {
        return *m_w_customXmlMoveToRangeStart;
    }
    return ns_w::CT_TrackChange::default_instance();
}

bool CT_OMathArg::ChildGroup_5::has_w_customXmlMoveToRangeEnd() const
{
    return m_has_w_customXmlMoveToRangeEnd;
}

ns_w::CT_Markup* CT_OMathArg::ChildGroup_5::mutable_w_customXmlMoveToRangeEnd()
{

    m_has_w_bookmarkStart = false;

    if (m_w_bookmarkStart)
    {
        delete m_w_bookmarkStart;
        m_w_bookmarkStart = NULL;
    }
    ;

    m_has_w_bookmarkEnd = false;

    if (m_w_bookmarkEnd)
    {
        delete m_w_bookmarkEnd;
        m_w_bookmarkEnd = NULL;
    }
    ;

    m_has_w_moveFromRangeStart = false;

    if (m_w_moveFromRangeStart)
    {
        delete m_w_moveFromRangeStart;
        m_w_moveFromRangeStart = NULL;
    }
    ;

    m_has_w_moveFromRangeEnd = false;

    if (m_w_moveFromRangeEnd)
    {
        delete m_w_moveFromRangeEnd;
        m_w_moveFromRangeEnd = NULL;
    }
    ;

    m_has_w_moveToRangeStart = false;

    if (m_w_moveToRangeStart)
    {
        delete m_w_moveToRangeStart;
        m_w_moveToRangeStart = NULL;
    }
    ;

    m_has_w_moveToRangeEnd = false;

    if (m_w_moveToRangeEnd)
    {
        delete m_w_moveToRangeEnd;
        m_w_moveToRangeEnd = NULL;
    }
    ;

    m_has_w_commentRangeStart = false;

    if (m_w_commentRangeStart)
    {
        delete m_w_commentRangeStart;
        m_w_commentRangeStart = NULL;
    }
    ;

    m_has_w_commentRangeEnd = false;

    if (m_w_commentRangeEnd)
    {
        delete m_w_commentRangeEnd;
        m_w_commentRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlInsRangeStart = false;

    if (m_w_customXmlInsRangeStart)
    {
        delete m_w_customXmlInsRangeStart;
        m_w_customXmlInsRangeStart = NULL;
    }
    ;

    m_has_w_customXmlInsRangeEnd = false;

    if (m_w_customXmlInsRangeEnd)
    {
        delete m_w_customXmlInsRangeEnd;
        m_w_customXmlInsRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlDelRangeStart = false;

    if (m_w_customXmlDelRangeStart)
    {
        delete m_w_customXmlDelRangeStart;
        m_w_customXmlDelRangeStart = NULL;
    }
    ;

    m_has_w_customXmlDelRangeEnd = false;

    if (m_w_customXmlDelRangeEnd)
    {
        delete m_w_customXmlDelRangeEnd;
        m_w_customXmlDelRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlMoveFromRangeStart = false;

    if (m_w_customXmlMoveFromRangeStart)
    {
        delete m_w_customXmlMoveFromRangeStart;
        m_w_customXmlMoveFromRangeStart = NULL;
    }
    ;

    m_has_w_customXmlMoveFromRangeEnd = false;

    if (m_w_customXmlMoveFromRangeEnd)
    {
        delete m_w_customXmlMoveFromRangeEnd;
        m_w_customXmlMoveFromRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlMoveToRangeStart = false;

    if (m_w_customXmlMoveToRangeStart)
    {
        delete m_w_customXmlMoveToRangeStart;
        m_w_customXmlMoveToRangeStart = NULL;
    }
    ;

    m_has_w_customXmlMoveToRangeEnd = true;
    if (!m_w_customXmlMoveToRangeEnd)
    {
        m_w_customXmlMoveToRangeEnd = new ns_w::CT_Markup();
    }
    return m_w_customXmlMoveToRangeEnd;
}

const ns_w::CT_Markup& CT_OMathArg::ChildGroup_5::get_w_customXmlMoveToRangeEnd() const
{
    if (m_w_customXmlMoveToRangeEnd)
    {
        return *m_w_customXmlMoveToRangeEnd;
    }
    return ns_w::CT_Markup::default_instance();
}


// CT_OMathArg::ChildGroup_6
CT_OMathArg::ChildGroup_6::ChildGroup_6()
    :m_has_w_ins(false),
     m_w_ins(NULL),
     m_has_w_del(false),
     m_w_del(NULL),
     m_has_w_moveFrom(false),
     m_w_moveFrom(NULL),
     m_has_w_moveTo(false),
     m_w_moveTo(NULL)
{
}
bool CT_OMathArg::ChildGroup_6::has_w_ins() const
{
    return m_has_w_ins;
}

ns_w::CT_RunTrackChange* CT_OMathArg::ChildGroup_6::mutable_w_ins()
{

    m_has_w_del = false;

    if (m_w_del)
    {
        delete m_w_del;
        m_w_del = NULL;
    }
    ;

    m_has_w_moveFrom = false;

    if (m_w_moveFrom)
    {
        delete m_w_moveFrom;
        m_w_moveFrom = NULL;
    }
    ;

    m_has_w_moveTo = false;

    if (m_w_moveTo)
    {
        delete m_w_moveTo;
        m_w_moveTo = NULL;
    }
    ;

    m_has_w_ins = true;
    if (!m_w_ins)
    {
        m_w_ins = new ns_w::CT_RunTrackChange();
    }
    return m_w_ins;
}

const ns_w::CT_RunTrackChange& CT_OMathArg::ChildGroup_6::get_w_ins() const
{
    if (m_w_ins)
    {
        return *m_w_ins;
    }
    return ns_w::CT_RunTrackChange::default_instance();
}

bool CT_OMathArg::ChildGroup_6::has_w_del() const
{
    return m_has_w_del;
}

ns_w::CT_RunTrackChange* CT_OMathArg::ChildGroup_6::mutable_w_del()
{

    m_has_w_ins = false;

    if (m_w_ins)
    {
        delete m_w_ins;
        m_w_ins = NULL;
    }
    ;

    m_has_w_moveFrom = false;

    if (m_w_moveFrom)
    {
        delete m_w_moveFrom;
        m_w_moveFrom = NULL;
    }
    ;

    m_has_w_moveTo = false;

    if (m_w_moveTo)
    {
        delete m_w_moveTo;
        m_w_moveTo = NULL;
    }
    ;

    m_has_w_del = true;
    if (!m_w_del)
    {
        m_w_del = new ns_w::CT_RunTrackChange();
    }
    return m_w_del;
}

const ns_w::CT_RunTrackChange& CT_OMathArg::ChildGroup_6::get_w_del() const
{
    if (m_w_del)
    {
        return *m_w_del;
    }
    return ns_w::CT_RunTrackChange::default_instance();
}

bool CT_OMathArg::ChildGroup_6::has_w_moveFrom() const
{
    return m_has_w_moveFrom;
}

ns_w::CT_RunTrackChange* CT_OMathArg::ChildGroup_6::mutable_w_moveFrom()
{

    m_has_w_ins = false;

    if (m_w_ins)
    {
        delete m_w_ins;
        m_w_ins = NULL;
    }
    ;

    m_has_w_del = false;

    if (m_w_del)
    {
        delete m_w_del;
        m_w_del = NULL;
    }
    ;

    m_has_w_moveTo = false;

    if (m_w_moveTo)
    {
        delete m_w_moveTo;
        m_w_moveTo = NULL;
    }
    ;

    m_has_w_moveFrom = true;
    if (!m_w_moveFrom)
    {
        m_w_moveFrom = new ns_w::CT_RunTrackChange();
    }
    return m_w_moveFrom;
}

const ns_w::CT_RunTrackChange& CT_OMathArg::ChildGroup_6::get_w_moveFrom() const
{
    if (m_w_moveFrom)
    {
        return *m_w_moveFrom;
    }
    return ns_w::CT_RunTrackChange::default_instance();
}

bool CT_OMathArg::ChildGroup_6::has_w_moveTo() const
{
    return m_has_w_moveTo;
}

ns_w::CT_RunTrackChange* CT_OMathArg::ChildGroup_6::mutable_w_moveTo()
{

    m_has_w_ins = false;

    if (m_w_ins)
    {
        delete m_w_ins;
        m_w_ins = NULL;
    }
    ;

    m_has_w_del = false;

    if (m_w_del)
    {
        delete m_w_del;
        m_w_del = NULL;
    }
    ;

    m_has_w_moveFrom = false;

    if (m_w_moveFrom)
    {
        delete m_w_moveFrom;
        m_w_moveFrom = NULL;
    }
    ;

    m_has_w_moveTo = true;
    if (!m_w_moveTo)
    {
        m_w_moveTo = new ns_w::CT_RunTrackChange();
    }
    return m_w_moveTo;
}

const ns_w::CT_RunTrackChange& CT_OMathArg::ChildGroup_6::get_w_moveTo() const
{
    if (m_w_moveTo)
    {
        return *m_w_moveTo;
    }
    return ns_w::CT_RunTrackChange::default_instance();
}


// CT_OMathArg::ChildGroup_7
CT_OMathArg::ChildGroup_7::ChildGroup_7()
    :m_has_m_oMathPara(false),
     m_m_oMathPara(NULL),
     m_has_m_oMath(false),
     m_m_oMath(NULL)
{
}
bool CT_OMathArg::ChildGroup_7::has_m_oMathPara() const
{
    return m_has_m_oMathPara;
}

ns_m::CT_OMathPara* CT_OMathArg::ChildGroup_7::mutable_m_oMathPara()
{

    m_has_m_oMath = false;

    if (m_m_oMath)
    {
        delete m_m_oMath;
        m_m_oMath = NULL;
    }
    ;

    m_has_m_oMathPara = true;
    if (!m_m_oMathPara)
    {
        m_m_oMathPara = new ns_m::CT_OMathPara();
    }
    return m_m_oMathPara;
}

const ns_m::CT_OMathPara& CT_OMathArg::ChildGroup_7::get_m_oMathPara() const
{
    if (m_m_oMathPara)
    {
        return *m_m_oMathPara;
    }
    return ns_m::CT_OMathPara::default_instance();
}

bool CT_OMathArg::ChildGroup_7::has_m_oMath() const
{
    return m_has_m_oMath;
}

ns_m::CT_OMath* CT_OMathArg::ChildGroup_7::mutable_m_oMath()
{

    m_has_m_oMathPara = false;

    if (m_m_oMathPara)
    {
        delete m_m_oMathPara;
        m_m_oMathPara = NULL;
    }
    ;

    m_has_m_oMath = true;
    if (!m_m_oMath)
    {
        m_m_oMath = new ns_m::CT_OMath();
    }
    return m_m_oMath;
}

const ns_m::CT_OMath& CT_OMathArg::ChildGroup_7::get_m_oMath() const
{
    if (m_m_oMath)
    {
        return *m_m_oMath;
    }
    return ns_m::CT_OMath::default_instance();
}

CT_OMathArg* CT_OMathArg::default_instance_ = NULL;

// CT_OMathJc
CT_OMathJc::CT_OMathJc()
    :m_has_val_attr(false),
     m_val_attr(NULL)
{
}
CT_OMathJc::~CT_OMathJc()
{
    clear();
}
void CT_OMathJc::clear()
{
    m_has_val_attr = false;

    if (m_val_attr)
    {
        delete m_val_attr;
        m_val_attr = NULL;
    }

}

void CT_OMathJc::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_val_attr)
    {
        m_val_attr->toXmlAttr("m:val", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_OMathJc& CT_OMathJc::default_instance()
{
    if (!CT_OMathJc::default_instance_)
    {
        CT_OMathJc::default_instance_ = new CT_OMathJc();
    }
    return *CT_OMathJc::default_instance_;
}

bool CT_OMathJc::has_val_attr() const
{
    return m_has_val_attr;
}

void CT_OMathJc::set_val_attr(const ST_Jc& _val_attr)
{
    m_has_val_attr = true;
    m_val_attr = new ST_Jc(_val_attr);
}

const ST_Jc& CT_OMathJc::get_val_attr() const
{
    if (m_val_attr)
    {
        return *m_val_attr;
    }
    return ST_Jc::default_instance();
}

CT_OMathJc* CT_OMathJc::default_instance_ = NULL;

// CT_OMathParaPr
CT_OMathParaPr::CT_OMathParaPr()
    :m_has_jc(false),
     m_jc(NULL)
{
}
CT_OMathParaPr::~CT_OMathParaPr()
{
    clear();
}
bool CT_OMathParaPr::has_jc() const
{
    return m_has_jc;
}

CT_OMathJc* CT_OMathParaPr::mutable_jc()
{
    m_has_jc = true;
    if (!m_jc)
    {
        m_jc = new CT_OMathJc();
    }
    return m_jc;
}

const CT_OMathJc& CT_OMathParaPr::get_jc() const
{
    if (m_jc)
    {
        return *m_jc;
    }
    return CT_OMathJc::default_instance();
}

void CT_OMathParaPr::clear()
{
    m_has_jc = false;

    if (m_jc)
    {
        delete m_jc;
        m_jc = NULL;
    }

}

void CT_OMathParaPr::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";


    if (m_has_jc)
    {
        m_jc->toXmlElem("m:jc", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_OMathParaPr& CT_OMathParaPr::default_instance()
{
    if (!CT_OMathParaPr::default_instance_)
    {
        CT_OMathParaPr::default_instance_ = new CT_OMathParaPr();
    }
    return *CT_OMathParaPr::default_instance_;
}

CT_OMathParaPr* CT_OMathParaPr::default_instance_ = NULL;

// CT_TwipsMeasure
CT_TwipsMeasure::CT_TwipsMeasure()
    :m_has_val_attr(false),
     m_val_attr(NULL)
{
}
CT_TwipsMeasure::~CT_TwipsMeasure()
{
    clear();
}
void CT_TwipsMeasure::clear()
{
    m_has_val_attr = false;

    if (m_val_attr)
    {
        delete m_val_attr;
        m_val_attr = NULL;
    }

}

void CT_TwipsMeasure::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    assert(m_has_val_attr);
    if (m_has_val_attr)
    {
        m_val_attr->toXmlAttr("m:val", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_TwipsMeasure& CT_TwipsMeasure::default_instance()
{
    if (!CT_TwipsMeasure::default_instance_)
    {
        CT_TwipsMeasure::default_instance_ = new CT_TwipsMeasure();
    }
    return *CT_TwipsMeasure::default_instance_;
}

bool CT_TwipsMeasure::has_val_attr() const
{
    return m_has_val_attr;
}

void CT_TwipsMeasure::set_val_attr(const ns_s::ST_TwipsMeasure& _val_attr)
{
    m_has_val_attr = true;
    m_val_attr = new ns_s::ST_TwipsMeasure(_val_attr);
}

const ns_s::ST_TwipsMeasure& CT_TwipsMeasure::get_val_attr() const
{
    if (m_val_attr)
    {
        return *m_val_attr;
    }
    return ns_s::ST_TwipsMeasure::default_instance();
}

CT_TwipsMeasure* CT_TwipsMeasure::default_instance_ = NULL;

// CT_BreakBin
CT_BreakBin::CT_BreakBin()
    :m_has_val_attr(false),
     m_val_attr(NULL)
{
}
CT_BreakBin::~CT_BreakBin()
{
    clear();
}
void CT_BreakBin::clear()
{
    m_has_val_attr = false;

    if (m_val_attr)
    {
        delete m_val_attr;
        m_val_attr = NULL;
    }

}

void CT_BreakBin::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_val_attr)
    {
        m_val_attr->toXmlAttr("m:val", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_BreakBin& CT_BreakBin::default_instance()
{
    if (!CT_BreakBin::default_instance_)
    {
        CT_BreakBin::default_instance_ = new CT_BreakBin();
    }
    return *CT_BreakBin::default_instance_;
}

bool CT_BreakBin::has_val_attr() const
{
    return m_has_val_attr;
}

void CT_BreakBin::set_val_attr(const ST_BreakBin& _val_attr)
{
    m_has_val_attr = true;
    m_val_attr = new ST_BreakBin(_val_attr);
}

const ST_BreakBin& CT_BreakBin::get_val_attr() const
{
    if (m_val_attr)
    {
        return *m_val_attr;
    }
    return ST_BreakBin::default_instance();
}

CT_BreakBin* CT_BreakBin::default_instance_ = NULL;

// CT_BreakBinSub
CT_BreakBinSub::CT_BreakBinSub()
    :m_has_val_attr(false),
     m_val_attr(NULL)
{
}
CT_BreakBinSub::~CT_BreakBinSub()
{
    clear();
}
void CT_BreakBinSub::clear()
{
    m_has_val_attr = false;

    if (m_val_attr)
    {
        delete m_val_attr;
        m_val_attr = NULL;
    }

}

void CT_BreakBinSub::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_val_attr)
    {
        m_val_attr->toXmlAttr("m:val", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_BreakBinSub& CT_BreakBinSub::default_instance()
{
    if (!CT_BreakBinSub::default_instance_)
    {
        CT_BreakBinSub::default_instance_ = new CT_BreakBinSub();
    }
    return *CT_BreakBinSub::default_instance_;
}

bool CT_BreakBinSub::has_val_attr() const
{
    return m_has_val_attr;
}

void CT_BreakBinSub::set_val_attr(const ST_BreakBinSub& _val_attr)
{
    m_has_val_attr = true;
    m_val_attr = new ST_BreakBinSub(_val_attr);
}

const ST_BreakBinSub& CT_BreakBinSub::get_val_attr() const
{
    if (m_val_attr)
    {
        return *m_val_attr;
    }
    return ST_BreakBinSub::default_instance();
}

CT_BreakBinSub* CT_BreakBinSub::default_instance_ = NULL;

// CT_MathPr
CT_MathPr::CT_MathPr()
    :m_has_mathFont(false),
     m_mathFont(NULL),
     m_has_brkBin(false),
     m_brkBin(NULL),
     m_has_brkBinSub(false),
     m_brkBinSub(NULL),
     m_has_smallFrac(false),
     m_smallFrac(NULL),
     m_has_dispDef(false),
     m_dispDef(NULL),
     m_has_lMargin(false),
     m_lMargin(NULL),
     m_has_rMargin(false),
     m_rMargin(NULL),
     m_has_defJc(false),
     m_defJc(NULL),
     m_has_preSp(false),
     m_preSp(NULL),
     m_has_postSp(false),
     m_postSp(NULL),
     m_has_interSp(false),
     m_interSp(NULL),
     m_has_intraSp(false),
     m_intraSp(NULL),
     m_has_wrapIndent(false),
     m_wrapIndent(NULL),
     m_has_wrapRight(false),
     m_wrapRight(NULL),
     m_has_intLim(false),
     m_intLim(NULL),
     m_has_naryLim(false),
     m_naryLim(NULL)
{
}
CT_MathPr::~CT_MathPr()
{
    clear();
}
bool CT_MathPr::has_mathFont() const
{
    return m_has_mathFont;
}

CT_String* CT_MathPr::mutable_mathFont()
{
    m_has_mathFont = true;
    if (!m_mathFont)
    {
        m_mathFont = new CT_String();
    }
    return m_mathFont;
}

const CT_String& CT_MathPr::get_mathFont() const
{
    if (m_mathFont)
    {
        return *m_mathFont;
    }
    return CT_String::default_instance();
}

bool CT_MathPr::has_brkBin() const
{
    return m_has_brkBin;
}

CT_BreakBin* CT_MathPr::mutable_brkBin()
{
    m_has_brkBin = true;
    if (!m_brkBin)
    {
        m_brkBin = new CT_BreakBin();
    }
    return m_brkBin;
}

const CT_BreakBin& CT_MathPr::get_brkBin() const
{
    if (m_brkBin)
    {
        return *m_brkBin;
    }
    return CT_BreakBin::default_instance();
}

bool CT_MathPr::has_brkBinSub() const
{
    return m_has_brkBinSub;
}

CT_BreakBinSub* CT_MathPr::mutable_brkBinSub()
{
    m_has_brkBinSub = true;
    if (!m_brkBinSub)
    {
        m_brkBinSub = new CT_BreakBinSub();
    }
    return m_brkBinSub;
}

const CT_BreakBinSub& CT_MathPr::get_brkBinSub() const
{
    if (m_brkBinSub)
    {
        return *m_brkBinSub;
    }
    return CT_BreakBinSub::default_instance();
}

bool CT_MathPr::has_smallFrac() const
{
    return m_has_smallFrac;
}

CT_OnOff* CT_MathPr::mutable_smallFrac()
{
    m_has_smallFrac = true;
    if (!m_smallFrac)
    {
        m_smallFrac = new CT_OnOff();
    }
    return m_smallFrac;
}

const CT_OnOff& CT_MathPr::get_smallFrac() const
{
    if (m_smallFrac)
    {
        return *m_smallFrac;
    }
    return CT_OnOff::default_instance();
}

bool CT_MathPr::has_dispDef() const
{
    return m_has_dispDef;
}

CT_OnOff* CT_MathPr::mutable_dispDef()
{
    m_has_dispDef = true;
    if (!m_dispDef)
    {
        m_dispDef = new CT_OnOff();
    }
    return m_dispDef;
}

const CT_OnOff& CT_MathPr::get_dispDef() const
{
    if (m_dispDef)
    {
        return *m_dispDef;
    }
    return CT_OnOff::default_instance();
}

bool CT_MathPr::has_lMargin() const
{
    return m_has_lMargin;
}

CT_TwipsMeasure* CT_MathPr::mutable_lMargin()
{
    m_has_lMargin = true;
    if (!m_lMargin)
    {
        m_lMargin = new CT_TwipsMeasure();
    }
    return m_lMargin;
}

const CT_TwipsMeasure& CT_MathPr::get_lMargin() const
{
    if (m_lMargin)
    {
        return *m_lMargin;
    }
    return CT_TwipsMeasure::default_instance();
}

bool CT_MathPr::has_rMargin() const
{
    return m_has_rMargin;
}

CT_TwipsMeasure* CT_MathPr::mutable_rMargin()
{
    m_has_rMargin = true;
    if (!m_rMargin)
    {
        m_rMargin = new CT_TwipsMeasure();
    }
    return m_rMargin;
}

const CT_TwipsMeasure& CT_MathPr::get_rMargin() const
{
    if (m_rMargin)
    {
        return *m_rMargin;
    }
    return CT_TwipsMeasure::default_instance();
}

bool CT_MathPr::has_defJc() const
{
    return m_has_defJc;
}

CT_OMathJc* CT_MathPr::mutable_defJc()
{
    m_has_defJc = true;
    if (!m_defJc)
    {
        m_defJc = new CT_OMathJc();
    }
    return m_defJc;
}

const CT_OMathJc& CT_MathPr::get_defJc() const
{
    if (m_defJc)
    {
        return *m_defJc;
    }
    return CT_OMathJc::default_instance();
}

bool CT_MathPr::has_preSp() const
{
    return m_has_preSp;
}

CT_TwipsMeasure* CT_MathPr::mutable_preSp()
{
    m_has_preSp = true;
    if (!m_preSp)
    {
        m_preSp = new CT_TwipsMeasure();
    }
    return m_preSp;
}

const CT_TwipsMeasure& CT_MathPr::get_preSp() const
{
    if (m_preSp)
    {
        return *m_preSp;
    }
    return CT_TwipsMeasure::default_instance();
}

bool CT_MathPr::has_postSp() const
{
    return m_has_postSp;
}

CT_TwipsMeasure* CT_MathPr::mutable_postSp()
{
    m_has_postSp = true;
    if (!m_postSp)
    {
        m_postSp = new CT_TwipsMeasure();
    }
    return m_postSp;
}

const CT_TwipsMeasure& CT_MathPr::get_postSp() const
{
    if (m_postSp)
    {
        return *m_postSp;
    }
    return CT_TwipsMeasure::default_instance();
}

bool CT_MathPr::has_interSp() const
{
    return m_has_interSp;
}

CT_TwipsMeasure* CT_MathPr::mutable_interSp()
{
    m_has_interSp = true;
    if (!m_interSp)
    {
        m_interSp = new CT_TwipsMeasure();
    }
    return m_interSp;
}

const CT_TwipsMeasure& CT_MathPr::get_interSp() const
{
    if (m_interSp)
    {
        return *m_interSp;
    }
    return CT_TwipsMeasure::default_instance();
}

bool CT_MathPr::has_intraSp() const
{
    return m_has_intraSp;
}

CT_TwipsMeasure* CT_MathPr::mutable_intraSp()
{
    m_has_intraSp = true;
    if (!m_intraSp)
    {
        m_intraSp = new CT_TwipsMeasure();
    }
    return m_intraSp;
}

const CT_TwipsMeasure& CT_MathPr::get_intraSp() const
{
    if (m_intraSp)
    {
        return *m_intraSp;
    }
    return CT_TwipsMeasure::default_instance();
}

bool CT_MathPr::has_wrapIndent() const
{
    return m_has_wrapIndent;
}

CT_TwipsMeasure* CT_MathPr::mutable_wrapIndent()
{

    m_has_wrapRight = false;

    if (m_wrapRight)
    {
        delete m_wrapRight;
        m_wrapRight = NULL;
    }
    ;

    m_has_wrapIndent = true;
    if (!m_wrapIndent)
    {
        m_wrapIndent = new CT_TwipsMeasure();
    }
    return m_wrapIndent;
}

const CT_TwipsMeasure& CT_MathPr::get_wrapIndent() const
{
    if (m_wrapIndent)
    {
        return *m_wrapIndent;
    }
    return CT_TwipsMeasure::default_instance();
}

bool CT_MathPr::has_wrapRight() const
{
    return m_has_wrapRight;
}

CT_OnOff* CT_MathPr::mutable_wrapRight()
{

    m_has_wrapIndent = false;

    if (m_wrapIndent)
    {
        delete m_wrapIndent;
        m_wrapIndent = NULL;
    }
    ;

    m_has_wrapRight = true;
    if (!m_wrapRight)
    {
        m_wrapRight = new CT_OnOff();
    }
    return m_wrapRight;
}

const CT_OnOff& CT_MathPr::get_wrapRight() const
{
    if (m_wrapRight)
    {
        return *m_wrapRight;
    }
    return CT_OnOff::default_instance();
}

bool CT_MathPr::has_intLim() const
{
    return m_has_intLim;
}

CT_LimLoc* CT_MathPr::mutable_intLim()
{
    m_has_intLim = true;
    if (!m_intLim)
    {
        m_intLim = new CT_LimLoc();
    }
    return m_intLim;
}

const CT_LimLoc& CT_MathPr::get_intLim() const
{
    if (m_intLim)
    {
        return *m_intLim;
    }
    return CT_LimLoc::default_instance();
}

bool CT_MathPr::has_naryLim() const
{
    return m_has_naryLim;
}

CT_LimLoc* CT_MathPr::mutable_naryLim()
{
    m_has_naryLim = true;
    if (!m_naryLim)
    {
        m_naryLim = new CT_LimLoc();
    }
    return m_naryLim;
}

const CT_LimLoc& CT_MathPr::get_naryLim() const
{
    if (m_naryLim)
    {
        return *m_naryLim;
    }
    return CT_LimLoc::default_instance();
}

void CT_MathPr::clear()
{
    m_has_mathFont = false;

    if (m_mathFont)
    {
        delete m_mathFont;
        m_mathFont = NULL;
    }


    m_has_brkBin = false;

    if (m_brkBin)
    {
        delete m_brkBin;
        m_brkBin = NULL;
    }


    m_has_brkBinSub = false;

    if (m_brkBinSub)
    {
        delete m_brkBinSub;
        m_brkBinSub = NULL;
    }


    m_has_smallFrac = false;

    if (m_smallFrac)
    {
        delete m_smallFrac;
        m_smallFrac = NULL;
    }


    m_has_dispDef = false;

    if (m_dispDef)
    {
        delete m_dispDef;
        m_dispDef = NULL;
    }


    m_has_lMargin = false;

    if (m_lMargin)
    {
        delete m_lMargin;
        m_lMargin = NULL;
    }


    m_has_rMargin = false;

    if (m_rMargin)
    {
        delete m_rMargin;
        m_rMargin = NULL;
    }


    m_has_defJc = false;

    if (m_defJc)
    {
        delete m_defJc;
        m_defJc = NULL;
    }


    m_has_preSp = false;

    if (m_preSp)
    {
        delete m_preSp;
        m_preSp = NULL;
    }


    m_has_postSp = false;

    if (m_postSp)
    {
        delete m_postSp;
        m_postSp = NULL;
    }


    m_has_interSp = false;

    if (m_interSp)
    {
        delete m_interSp;
        m_interSp = NULL;
    }


    m_has_intraSp = false;

    if (m_intraSp)
    {
        delete m_intraSp;
        m_intraSp = NULL;
    }


    m_has_wrapIndent = false;

    if (m_wrapIndent)
    {
        delete m_wrapIndent;
        m_wrapIndent = NULL;
    }


    m_has_wrapRight = false;

    if (m_wrapRight)
    {
        delete m_wrapRight;
        m_wrapRight = NULL;
    }


    m_has_intLim = false;

    if (m_intLim)
    {
        delete m_intLim;
        m_intLim = NULL;
    }


    m_has_naryLim = false;

    if (m_naryLim)
    {
        delete m_naryLim;
        m_naryLim = NULL;
    }

}

void CT_MathPr::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";


    if (m_has_mathFont)
    {
        m_mathFont->toXmlElem("m:mathFont", "", _outStream);
    }


    if (m_has_brkBin)
    {
        m_brkBin->toXmlElem("m:brkBin", "", _outStream);
    }


    if (m_has_brkBinSub)
    {
        m_brkBinSub->toXmlElem("m:brkBinSub", "", _outStream);
    }


    if (m_has_smallFrac)
    {
        m_smallFrac->toXmlElem("m:smallFrac", "", _outStream);
    }


    if (m_has_dispDef)
    {
        m_dispDef->toXmlElem("m:dispDef", "", _outStream);
    }


    if (m_has_lMargin)
    {
        m_lMargin->toXmlElem("m:lMargin", "", _outStream);
    }


    if (m_has_rMargin)
    {
        m_rMargin->toXmlElem("m:rMargin", "", _outStream);
    }


    if (m_has_defJc)
    {
        m_defJc->toXmlElem("m:defJc", "", _outStream);
    }


    if (m_has_preSp)
    {
        m_preSp->toXmlElem("m:preSp", "", _outStream);
    }


    if (m_has_postSp)
    {
        m_postSp->toXmlElem("m:postSp", "", _outStream);
    }


    if (m_has_interSp)
    {
        m_interSp->toXmlElem("m:interSp", "", _outStream);
    }


    if (m_has_intraSp)
    {
        m_intraSp->toXmlElem("m:intraSp", "", _outStream);
    }

    {
        bool elemHasValueList[2] = {m_has_wrapIndent, m_has_wrapRight};
        int cnt = count(elemHasValueList, elemHasValueList + 2, true);
        assert(cnt == 0 || cnt == 1);
    }


    if (m_has_wrapIndent)
    {
        m_wrapIndent->toXmlElem("m:wrapIndent", "", _outStream);
    }


    if (m_has_wrapRight)
    {
        m_wrapRight->toXmlElem("m:wrapRight", "", _outStream);
    }


    if (m_has_intLim)
    {
        m_intLim->toXmlElem("m:intLim", "", _outStream);
    }


    if (m_has_naryLim)
    {
        m_naryLim->toXmlElem("m:naryLim", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_MathPr& CT_MathPr::default_instance()
{
    if (!CT_MathPr::default_instance_)
    {
        CT_MathPr::default_instance_ = new CT_MathPr();
    }
    return *CT_MathPr::default_instance_;
}

CT_MathPr* CT_MathPr::default_instance_ = NULL;

// CT_OMathPara
CT_OMathPara::CT_OMathPara()
    :m_has_oMathParaPr(false),
     m_oMathParaPr(NULL)
{
}
CT_OMathPara::~CT_OMathPara()
{
    clear();
}
bool CT_OMathPara::has_oMathParaPr() const
{
    return m_has_oMathParaPr;
}

CT_OMathParaPr* CT_OMathPara::mutable_oMathParaPr()
{
    m_has_oMathParaPr = true;
    if (!m_oMathParaPr)
    {
        m_oMathParaPr = new CT_OMathParaPr();
    }
    return m_oMathParaPr;
}

const CT_OMathParaPr& CT_OMathPara::get_oMathParaPr() const
{
    if (m_oMathParaPr)
    {
        return *m_oMathParaPr;
    }
    return CT_OMathParaPr::default_instance();
}

CT_OMath* CT_OMathPara::add_oMath()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_OMath* pNewChild = pChildGroup->mutable_oMath();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

void CT_OMathPara::clear()
{
    m_has_oMathParaPr = false;

    if (m_oMathParaPr)
    {
        delete m_oMathParaPr;
        m_oMathParaPr = NULL;
    }


    {
        vector<ChildGroup_1*>::iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_1.clear();
    }
}

void CT_OMathPara::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";


    if (m_has_oMathParaPr)
    {
        m_oMathParaPr->toXmlElem("m:oMathParaPr", "", _outStream);
    }

    {
        int childSize = count_if(m_childGroupList_1.begin(), m_childGroupList_1.end(), mem_fun(&ChildGroup_1::has_oMath));
        assert(1 <= childSize);
    }

    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_oMath())
            {
                (*iter)->get_oMath().toXmlElem("m:oMath", "", _outStream);
            }


        }
    }

    _outStream << "</" << _elemName << ">";
}

const CT_OMathPara& CT_OMathPara::default_instance()
{
    if (!CT_OMathPara::default_instance_)
    {
        CT_OMathPara::default_instance_ = new CT_OMathPara();
    }
    return *CT_OMathPara::default_instance_;
}


// CT_OMathPara::ChildGroup_1
CT_OMathPara::ChildGroup_1::ChildGroup_1()
    :m_has_oMath(false),
     m_oMath(NULL)
{
}
bool CT_OMathPara::ChildGroup_1::has_oMath() const
{
    return m_has_oMath;
}

CT_OMath* CT_OMathPara::ChildGroup_1::mutable_oMath()
{

    m_has_oMath = true;
    if (!m_oMath)
    {
        m_oMath = new CT_OMath();
    }
    return m_oMath;
}

const CT_OMath& CT_OMathPara::ChildGroup_1::get_oMath() const
{
    if (m_oMath)
    {
        return *m_oMath;
    }
    return CT_OMath::default_instance();
}

CT_OMathPara* CT_OMathPara::default_instance_ = NULL;

// CT_OMath
CT_OMath::CT_OMath()

{
}
CT_OMath::~CT_OMath()
{
    clear();
}
CT_Acc* CT_OMath::add_acc()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Acc* pNewChild = pChildGroup->mutable_acc();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

CT_Bar* CT_OMath::add_bar()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Bar* pNewChild = pChildGroup->mutable_bar();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

CT_Box* CT_OMath::add_box()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Box* pNewChild = pChildGroup->mutable_box();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

CT_BorderBox* CT_OMath::add_borderBox()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_BorderBox* pNewChild = pChildGroup->mutable_borderBox();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

CT_D* CT_OMath::add_d()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_D* pNewChild = pChildGroup->mutable_d();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

CT_EqArr* CT_OMath::add_eqArr()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_EqArr* pNewChild = pChildGroup->mutable_eqArr();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

CT_F* CT_OMath::add_f()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_F* pNewChild = pChildGroup->mutable_f();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

CT_Func* CT_OMath::add_func()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Func* pNewChild = pChildGroup->mutable_func();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

CT_GroupChr* CT_OMath::add_groupChr()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_GroupChr* pNewChild = pChildGroup->mutable_groupChr();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

CT_LimLow* CT_OMath::add_limLow()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_LimLow* pNewChild = pChildGroup->mutable_limLow();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

CT_LimUpp* CT_OMath::add_limUpp()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_LimUpp* pNewChild = pChildGroup->mutable_limUpp();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

CT_M* CT_OMath::add_m()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_M* pNewChild = pChildGroup->mutable_m();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

CT_Nary* CT_OMath::add_nary()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Nary* pNewChild = pChildGroup->mutable_nary();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

CT_Phant* CT_OMath::add_phant()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Phant* pNewChild = pChildGroup->mutable_phant();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

CT_Rad* CT_OMath::add_rad()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Rad* pNewChild = pChildGroup->mutable_rad();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

CT_SPre* CT_OMath::add_sPre()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_SPre* pNewChild = pChildGroup->mutable_sPre();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

CT_SSub* CT_OMath::add_sSub()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_SSub* pNewChild = pChildGroup->mutable_sSub();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

CT_SSubSup* CT_OMath::add_sSubSup()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_SSubSup* pNewChild = pChildGroup->mutable_sSubSup();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

CT_SSup* CT_OMath::add_sSup()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_SSup* pNewChild = pChildGroup->mutable_sSup();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

CT_R* CT_OMath::add_r()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_R* pNewChild = pChildGroup->mutable_r();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

ns_w::CT_CustomXmlRun* CT_OMath::add_w_customXml()
{
    ChildGroup_2 *pChildGroup = new ChildGroup_2();
    ns_w::CT_CustomXmlRun* pNewChild = pChildGroup->mutable_w_customXml();
    m_childGroupList_2.push_back(pChildGroup);
    return pNewChild;
}

ns_w::CT_SimpleField* CT_OMath::add_w_fldSimple()
{
    ChildGroup_2 *pChildGroup = new ChildGroup_2();
    ns_w::CT_SimpleField* pNewChild = pChildGroup->mutable_w_fldSimple();
    m_childGroupList_2.push_back(pChildGroup);
    return pNewChild;
}

ns_w::CT_Hyperlink* CT_OMath::add_w_hyperlink()
{
    ChildGroup_2 *pChildGroup = new ChildGroup_2();
    ns_w::CT_Hyperlink* pNewChild = pChildGroup->mutable_w_hyperlink();
    m_childGroupList_2.push_back(pChildGroup);
    return pNewChild;
}

ns_w::CT_SmartTagRun* CT_OMath::add_w_smartTag()
{
    ChildGroup_3 *pChildGroup = new ChildGroup_3();
    ns_w::CT_SmartTagRun* pNewChild = pChildGroup->mutable_w_smartTag();
    m_childGroupList_3.push_back(pChildGroup);
    return pNewChild;
}

ns_w::CT_SdtRun* CT_OMath::add_w_sdt()
{
    ChildGroup_3 *pChildGroup = new ChildGroup_3();
    ns_w::CT_SdtRun* pNewChild = pChildGroup->mutable_w_sdt();
    m_childGroupList_3.push_back(pChildGroup);
    return pNewChild;
}

ns_w::CT_ProofErr* CT_OMath::add_w_proofErr()
{
    ChildGroup_4 *pChildGroup = new ChildGroup_4();
    ns_w::CT_ProofErr* pNewChild = pChildGroup->mutable_w_proofErr();
    m_childGroupList_4.push_back(pChildGroup);
    return pNewChild;
}

ns_w::CT_PermStart* CT_OMath::add_w_permStart()
{
    ChildGroup_4 *pChildGroup = new ChildGroup_4();
    ns_w::CT_PermStart* pNewChild = pChildGroup->mutable_w_permStart();
    m_childGroupList_4.push_back(pChildGroup);
    return pNewChild;
}

ns_w::CT_Perm* CT_OMath::add_w_permEnd()
{
    ChildGroup_4 *pChildGroup = new ChildGroup_4();
    ns_w::CT_Perm* pNewChild = pChildGroup->mutable_w_permEnd();
    m_childGroupList_4.push_back(pChildGroup);
    return pNewChild;
}

ns_w::CT_Bookmark* CT_OMath::add_w_bookmarkStart()
{
    ChildGroup_5 *pChildGroup = new ChildGroup_5();
    ns_w::CT_Bookmark* pNewChild = pChildGroup->mutable_w_bookmarkStart();
    m_childGroupList_5.push_back(pChildGroup);
    return pNewChild;
}

ns_w::CT_MarkupRange* CT_OMath::add_w_bookmarkEnd()
{
    ChildGroup_5 *pChildGroup = new ChildGroup_5();
    ns_w::CT_MarkupRange* pNewChild = pChildGroup->mutable_w_bookmarkEnd();
    m_childGroupList_5.push_back(pChildGroup);
    return pNewChild;
}

ns_w::CT_MoveBookmark* CT_OMath::add_w_moveFromRangeStart()
{
    ChildGroup_5 *pChildGroup = new ChildGroup_5();
    ns_w::CT_MoveBookmark* pNewChild = pChildGroup->mutable_w_moveFromRangeStart();
    m_childGroupList_5.push_back(pChildGroup);
    return pNewChild;
}

ns_w::CT_MarkupRange* CT_OMath::add_w_moveFromRangeEnd()
{
    ChildGroup_5 *pChildGroup = new ChildGroup_5();
    ns_w::CT_MarkupRange* pNewChild = pChildGroup->mutable_w_moveFromRangeEnd();
    m_childGroupList_5.push_back(pChildGroup);
    return pNewChild;
}

ns_w::CT_MoveBookmark* CT_OMath::add_w_moveToRangeStart()
{
    ChildGroup_5 *pChildGroup = new ChildGroup_5();
    ns_w::CT_MoveBookmark* pNewChild = pChildGroup->mutable_w_moveToRangeStart();
    m_childGroupList_5.push_back(pChildGroup);
    return pNewChild;
}

ns_w::CT_MarkupRange* CT_OMath::add_w_moveToRangeEnd()
{
    ChildGroup_5 *pChildGroup = new ChildGroup_5();
    ns_w::CT_MarkupRange* pNewChild = pChildGroup->mutable_w_moveToRangeEnd();
    m_childGroupList_5.push_back(pChildGroup);
    return pNewChild;
}

ns_w::CT_MarkupRange* CT_OMath::add_w_commentRangeStart()
{
    ChildGroup_5 *pChildGroup = new ChildGroup_5();
    ns_w::CT_MarkupRange* pNewChild = pChildGroup->mutable_w_commentRangeStart();
    m_childGroupList_5.push_back(pChildGroup);
    return pNewChild;
}

ns_w::CT_MarkupRange* CT_OMath::add_w_commentRangeEnd()
{
    ChildGroup_5 *pChildGroup = new ChildGroup_5();
    ns_w::CT_MarkupRange* pNewChild = pChildGroup->mutable_w_commentRangeEnd();
    m_childGroupList_5.push_back(pChildGroup);
    return pNewChild;
}

ns_w::CT_TrackChange* CT_OMath::add_w_customXmlInsRangeStart()
{
    ChildGroup_5 *pChildGroup = new ChildGroup_5();
    ns_w::CT_TrackChange* pNewChild = pChildGroup->mutable_w_customXmlInsRangeStart();
    m_childGroupList_5.push_back(pChildGroup);
    return pNewChild;
}

ns_w::CT_Markup* CT_OMath::add_w_customXmlInsRangeEnd()
{
    ChildGroup_5 *pChildGroup = new ChildGroup_5();
    ns_w::CT_Markup* pNewChild = pChildGroup->mutable_w_customXmlInsRangeEnd();
    m_childGroupList_5.push_back(pChildGroup);
    return pNewChild;
}

ns_w::CT_TrackChange* CT_OMath::add_w_customXmlDelRangeStart()
{
    ChildGroup_5 *pChildGroup = new ChildGroup_5();
    ns_w::CT_TrackChange* pNewChild = pChildGroup->mutable_w_customXmlDelRangeStart();
    m_childGroupList_5.push_back(pChildGroup);
    return pNewChild;
}

ns_w::CT_Markup* CT_OMath::add_w_customXmlDelRangeEnd()
{
    ChildGroup_5 *pChildGroup = new ChildGroup_5();
    ns_w::CT_Markup* pNewChild = pChildGroup->mutable_w_customXmlDelRangeEnd();
    m_childGroupList_5.push_back(pChildGroup);
    return pNewChild;
}

ns_w::CT_TrackChange* CT_OMath::add_w_customXmlMoveFromRangeStart()
{
    ChildGroup_5 *pChildGroup = new ChildGroup_5();
    ns_w::CT_TrackChange* pNewChild = pChildGroup->mutable_w_customXmlMoveFromRangeStart();
    m_childGroupList_5.push_back(pChildGroup);
    return pNewChild;
}

ns_w::CT_Markup* CT_OMath::add_w_customXmlMoveFromRangeEnd()
{
    ChildGroup_5 *pChildGroup = new ChildGroup_5();
    ns_w::CT_Markup* pNewChild = pChildGroup->mutable_w_customXmlMoveFromRangeEnd();
    m_childGroupList_5.push_back(pChildGroup);
    return pNewChild;
}

ns_w::CT_TrackChange* CT_OMath::add_w_customXmlMoveToRangeStart()
{
    ChildGroup_5 *pChildGroup = new ChildGroup_5();
    ns_w::CT_TrackChange* pNewChild = pChildGroup->mutable_w_customXmlMoveToRangeStart();
    m_childGroupList_5.push_back(pChildGroup);
    return pNewChild;
}

ns_w::CT_Markup* CT_OMath::add_w_customXmlMoveToRangeEnd()
{
    ChildGroup_5 *pChildGroup = new ChildGroup_5();
    ns_w::CT_Markup* pNewChild = pChildGroup->mutable_w_customXmlMoveToRangeEnd();
    m_childGroupList_5.push_back(pChildGroup);
    return pNewChild;
}

ns_w::CT_RunTrackChange* CT_OMath::add_w_ins()
{
    ChildGroup_6 *pChildGroup = new ChildGroup_6();
    ns_w::CT_RunTrackChange* pNewChild = pChildGroup->mutable_w_ins();
    m_childGroupList_6.push_back(pChildGroup);
    return pNewChild;
}

ns_w::CT_RunTrackChange* CT_OMath::add_w_del()
{
    ChildGroup_6 *pChildGroup = new ChildGroup_6();
    ns_w::CT_RunTrackChange* pNewChild = pChildGroup->mutable_w_del();
    m_childGroupList_6.push_back(pChildGroup);
    return pNewChild;
}

ns_w::CT_RunTrackChange* CT_OMath::add_w_moveFrom()
{
    ChildGroup_6 *pChildGroup = new ChildGroup_6();
    ns_w::CT_RunTrackChange* pNewChild = pChildGroup->mutable_w_moveFrom();
    m_childGroupList_6.push_back(pChildGroup);
    return pNewChild;
}

ns_w::CT_RunTrackChange* CT_OMath::add_w_moveTo()
{
    ChildGroup_6 *pChildGroup = new ChildGroup_6();
    ns_w::CT_RunTrackChange* pNewChild = pChildGroup->mutable_w_moveTo();
    m_childGroupList_6.push_back(pChildGroup);
    return pNewChild;
}

ns_m::CT_OMathPara* CT_OMath::add_m_oMathPara()
{
    ChildGroup_7 *pChildGroup = new ChildGroup_7();
    ns_m::CT_OMathPara* pNewChild = pChildGroup->mutable_m_oMathPara();
    m_childGroupList_7.push_back(pChildGroup);
    return pNewChild;
}

ns_m::CT_OMath* CT_OMath::add_m_oMath()
{
    ChildGroup_7 *pChildGroup = new ChildGroup_7();
    ns_m::CT_OMath* pNewChild = pChildGroup->mutable_m_oMath();
    m_childGroupList_7.push_back(pChildGroup);
    return pNewChild;
}

void CT_OMath::clear()
{
    {
        vector<ChildGroup_1*>::iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_1.clear();
    }

    {
        vector<ChildGroup_2*>::iterator iter;
        for (iter = m_childGroupList_2.begin(); iter != m_childGroupList_2.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_2.clear();
    }

    {
        vector<ChildGroup_3*>::iterator iter;
        for (iter = m_childGroupList_3.begin(); iter != m_childGroupList_3.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_3.clear();
    }

    {
        vector<ChildGroup_4*>::iterator iter;
        for (iter = m_childGroupList_4.begin(); iter != m_childGroupList_4.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_4.clear();
    }

    {
        vector<ChildGroup_5*>::iterator iter;
        for (iter = m_childGroupList_5.begin(); iter != m_childGroupList_5.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_5.clear();
    }

    {
        vector<ChildGroup_6*>::iterator iter;
        for (iter = m_childGroupList_6.begin(); iter != m_childGroupList_6.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_6.clear();
    }

    {
        vector<ChildGroup_7*>::iterator iter;
        for (iter = m_childGroupList_7.begin(); iter != m_childGroupList_7.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_7.clear();
    }
}

void CT_OMath::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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
            if ((*iter)->has_acc())
            {
                (*iter)->get_acc().toXmlElem("m:acc", "", _outStream);
            }


            else if ((*iter)->has_bar())
            {
                (*iter)->get_bar().toXmlElem("m:bar", "", _outStream);
            }


            else if ((*iter)->has_box())
            {
                (*iter)->get_box().toXmlElem("m:box", "", _outStream);
            }


            else if ((*iter)->has_borderBox())
            {
                (*iter)->get_borderBox().toXmlElem("m:borderBox", "", _outStream);
            }


            else if ((*iter)->has_d())
            {
                (*iter)->get_d().toXmlElem("m:d", "", _outStream);
            }


            else if ((*iter)->has_eqArr())
            {
                (*iter)->get_eqArr().toXmlElem("m:eqArr", "", _outStream);
            }


            else if ((*iter)->has_f())
            {
                (*iter)->get_f().toXmlElem("m:f", "", _outStream);
            }


            else if ((*iter)->has_func())
            {
                (*iter)->get_func().toXmlElem("m:func", "", _outStream);
            }


            else if ((*iter)->has_groupChr())
            {
                (*iter)->get_groupChr().toXmlElem("m:groupChr", "", _outStream);
            }


            else if ((*iter)->has_limLow())
            {
                (*iter)->get_limLow().toXmlElem("m:limLow", "", _outStream);
            }


            else if ((*iter)->has_limUpp())
            {
                (*iter)->get_limUpp().toXmlElem("m:limUpp", "", _outStream);
            }


            else if ((*iter)->has_m())
            {
                (*iter)->get_m().toXmlElem("m:m", "", _outStream);
            }


            else if ((*iter)->has_nary())
            {
                (*iter)->get_nary().toXmlElem("m:nary", "", _outStream);
            }


            else if ((*iter)->has_phant())
            {
                (*iter)->get_phant().toXmlElem("m:phant", "", _outStream);
            }


            else if ((*iter)->has_rad())
            {
                (*iter)->get_rad().toXmlElem("m:rad", "", _outStream);
            }


            else if ((*iter)->has_sPre())
            {
                (*iter)->get_sPre().toXmlElem("m:sPre", "", _outStream);
            }


            else if ((*iter)->has_sSub())
            {
                (*iter)->get_sSub().toXmlElem("m:sSub", "", _outStream);
            }


            else if ((*iter)->has_sSubSup())
            {
                (*iter)->get_sSubSup().toXmlElem("m:sSubSup", "", _outStream);
            }


            else if ((*iter)->has_sSup())
            {
                (*iter)->get_sSup().toXmlElem("m:sSup", "", _outStream);
            }


            else if ((*iter)->has_r())
            {
                (*iter)->get_r().toXmlElem("m:r", "", _outStream);
            }


        }
    }

    {
        vector<ChildGroup_2*>::const_iterator iter;
        for (iter = m_childGroupList_2.begin(); iter != m_childGroupList_2.end(); ++iter)
        {
            if ((*iter)->has_w_customXml())
            {
                (*iter)->get_w_customXml().toXmlElem("w:customXml", "", _outStream);
            }


            else if ((*iter)->has_w_fldSimple())
            {
                (*iter)->get_w_fldSimple().toXmlElem("w:fldSimple", "", _outStream);
            }


            else if ((*iter)->has_w_hyperlink())
            {
                (*iter)->get_w_hyperlink().toXmlElem("w:hyperlink", "", _outStream);
            }


        }
    }

    {
        vector<ChildGroup_3*>::const_iterator iter;
        for (iter = m_childGroupList_3.begin(); iter != m_childGroupList_3.end(); ++iter)
        {
            if ((*iter)->has_w_smartTag())
            {
                (*iter)->get_w_smartTag().toXmlElem("w:smartTag", "", _outStream);
            }


            else if ((*iter)->has_w_sdt())
            {
                (*iter)->get_w_sdt().toXmlElem("w:sdt", "", _outStream);
            }


        }
    }

    {
        const size_t childSize = m_childGroupList_4.size();
        assert(0 <= childSize && childSize <= 1);
    }

    {
        vector<ChildGroup_4*>::const_iterator iter;
        for (iter = m_childGroupList_4.begin(); iter != m_childGroupList_4.end(); ++iter)
        {
            if ((*iter)->has_w_proofErr())
            {
                (*iter)->get_w_proofErr().toXmlElem("w:proofErr", "", _outStream);
            }


            else if ((*iter)->has_w_permStart())
            {
                (*iter)->get_w_permStart().toXmlElem("w:permStart", "", _outStream);
            }


            else if ((*iter)->has_w_permEnd())
            {
                (*iter)->get_w_permEnd().toXmlElem("w:permEnd", "", _outStream);
            }


        }
    }

    {
        vector<ChildGroup_5*>::const_iterator iter;
        for (iter = m_childGroupList_5.begin(); iter != m_childGroupList_5.end(); ++iter)
        {
            if ((*iter)->has_w_bookmarkStart())
            {
                (*iter)->get_w_bookmarkStart().toXmlElem("w:bookmarkStart", "", _outStream);
            }


            else if ((*iter)->has_w_bookmarkEnd())
            {
                (*iter)->get_w_bookmarkEnd().toXmlElem("w:bookmarkEnd", "", _outStream);
            }


            else if ((*iter)->has_w_moveFromRangeStart())
            {
                (*iter)->get_w_moveFromRangeStart().toXmlElem("w:moveFromRangeStart", "", _outStream);
            }


            else if ((*iter)->has_w_moveFromRangeEnd())
            {
                (*iter)->get_w_moveFromRangeEnd().toXmlElem("w:moveFromRangeEnd", "", _outStream);
            }


            else if ((*iter)->has_w_moveToRangeStart())
            {
                (*iter)->get_w_moveToRangeStart().toXmlElem("w:moveToRangeStart", "", _outStream);
            }


            else if ((*iter)->has_w_moveToRangeEnd())
            {
                (*iter)->get_w_moveToRangeEnd().toXmlElem("w:moveToRangeEnd", "", _outStream);
            }


            else if ((*iter)->has_w_commentRangeStart())
            {
                (*iter)->get_w_commentRangeStart().toXmlElem("w:commentRangeStart", "", _outStream);
            }


            else if ((*iter)->has_w_commentRangeEnd())
            {
                (*iter)->get_w_commentRangeEnd().toXmlElem("w:commentRangeEnd", "", _outStream);
            }


            else if ((*iter)->has_w_customXmlInsRangeStart())
            {
                (*iter)->get_w_customXmlInsRangeStart().toXmlElem("w:customXmlInsRangeStart", "", _outStream);
            }


            else if ((*iter)->has_w_customXmlInsRangeEnd())
            {
                (*iter)->get_w_customXmlInsRangeEnd().toXmlElem("w:customXmlInsRangeEnd", "", _outStream);
            }


            else if ((*iter)->has_w_customXmlDelRangeStart())
            {
                (*iter)->get_w_customXmlDelRangeStart().toXmlElem("w:customXmlDelRangeStart", "", _outStream);
            }


            else if ((*iter)->has_w_customXmlDelRangeEnd())
            {
                (*iter)->get_w_customXmlDelRangeEnd().toXmlElem("w:customXmlDelRangeEnd", "", _outStream);
            }


            else if ((*iter)->has_w_customXmlMoveFromRangeStart())
            {
                (*iter)->get_w_customXmlMoveFromRangeStart().toXmlElem("w:customXmlMoveFromRangeStart", "", _outStream);
            }


            else if ((*iter)->has_w_customXmlMoveFromRangeEnd())
            {
                (*iter)->get_w_customXmlMoveFromRangeEnd().toXmlElem("w:customXmlMoveFromRangeEnd", "", _outStream);
            }


            else if ((*iter)->has_w_customXmlMoveToRangeStart())
            {
                (*iter)->get_w_customXmlMoveToRangeStart().toXmlElem("w:customXmlMoveToRangeStart", "", _outStream);
            }


            else if ((*iter)->has_w_customXmlMoveToRangeEnd())
            {
                (*iter)->get_w_customXmlMoveToRangeEnd().toXmlElem("w:customXmlMoveToRangeEnd", "", _outStream);
            }


        }
    }

    {
        vector<ChildGroup_6*>::const_iterator iter;
        for (iter = m_childGroupList_6.begin(); iter != m_childGroupList_6.end(); ++iter)
        {
            if ((*iter)->has_w_ins())
            {
                (*iter)->get_w_ins().toXmlElem("w:ins", "", _outStream);
            }


            else if ((*iter)->has_w_del())
            {
                (*iter)->get_w_del().toXmlElem("w:del", "", _outStream);
            }


            else if ((*iter)->has_w_moveFrom())
            {
                (*iter)->get_w_moveFrom().toXmlElem("w:moveFrom", "", _outStream);
            }


            else if ((*iter)->has_w_moveTo())
            {
                (*iter)->get_w_moveTo().toXmlElem("w:moveTo", "", _outStream);
            }


        }
    }

    {
        vector<ChildGroup_7*>::const_iterator iter;
        for (iter = m_childGroupList_7.begin(); iter != m_childGroupList_7.end(); ++iter)
        {
            if ((*iter)->has_m_oMathPara())
            {
                (*iter)->get_m_oMathPara().toXmlElem("m:oMathPara", "", _outStream);
            }


            else if ((*iter)->has_m_oMath())
            {
                (*iter)->get_m_oMath().toXmlElem("m:oMath", "", _outStream);
            }


        }
    }

    _outStream << "</" << _elemName << ">";
}

const CT_OMath& CT_OMath::default_instance()
{
    if (!CT_OMath::default_instance_)
    {
        CT_OMath::default_instance_ = new CT_OMath();
    }
    return *CT_OMath::default_instance_;
}


// CT_OMath::ChildGroup_1
CT_OMath::ChildGroup_1::ChildGroup_1()
    :m_has_acc(false),
     m_acc(NULL),
     m_has_bar(false),
     m_bar(NULL),
     m_has_box(false),
     m_box(NULL),
     m_has_borderBox(false),
     m_borderBox(NULL),
     m_has_d(false),
     m_d(NULL),
     m_has_eqArr(false),
     m_eqArr(NULL),
     m_has_f(false),
     m_f(NULL),
     m_has_func(false),
     m_func(NULL),
     m_has_groupChr(false),
     m_groupChr(NULL),
     m_has_limLow(false),
     m_limLow(NULL),
     m_has_limUpp(false),
     m_limUpp(NULL),
     m_has_m(false),
     m_m(NULL),
     m_has_nary(false),
     m_nary(NULL),
     m_has_phant(false),
     m_phant(NULL),
     m_has_rad(false),
     m_rad(NULL),
     m_has_sPre(false),
     m_sPre(NULL),
     m_has_sSub(false),
     m_sSub(NULL),
     m_has_sSubSup(false),
     m_sSubSup(NULL),
     m_has_sSup(false),
     m_sSup(NULL),
     m_has_r(false),
     m_r(NULL)
{
}
bool CT_OMath::ChildGroup_1::has_acc() const
{
    return m_has_acc;
}

CT_Acc* CT_OMath::ChildGroup_1::mutable_acc()
{

    m_has_bar = false;

    if (m_bar)
    {
        delete m_bar;
        m_bar = NULL;
    }
    ;

    m_has_box = false;

    if (m_box)
    {
        delete m_box;
        m_box = NULL;
    }
    ;

    m_has_borderBox = false;

    if (m_borderBox)
    {
        delete m_borderBox;
        m_borderBox = NULL;
    }
    ;

    m_has_d = false;

    if (m_d)
    {
        delete m_d;
        m_d = NULL;
    }
    ;

    m_has_eqArr = false;

    if (m_eqArr)
    {
        delete m_eqArr;
        m_eqArr = NULL;
    }
    ;

    m_has_f = false;

    if (m_f)
    {
        delete m_f;
        m_f = NULL;
    }
    ;

    m_has_func = false;

    if (m_func)
    {
        delete m_func;
        m_func = NULL;
    }
    ;

    m_has_groupChr = false;

    if (m_groupChr)
    {
        delete m_groupChr;
        m_groupChr = NULL;
    }
    ;

    m_has_limLow = false;

    if (m_limLow)
    {
        delete m_limLow;
        m_limLow = NULL;
    }
    ;

    m_has_limUpp = false;

    if (m_limUpp)
    {
        delete m_limUpp;
        m_limUpp = NULL;
    }
    ;

    m_has_m = false;

    if (m_m)
    {
        delete m_m;
        m_m = NULL;
    }
    ;

    m_has_nary = false;

    if (m_nary)
    {
        delete m_nary;
        m_nary = NULL;
    }
    ;

    m_has_phant = false;

    if (m_phant)
    {
        delete m_phant;
        m_phant = NULL;
    }
    ;

    m_has_rad = false;

    if (m_rad)
    {
        delete m_rad;
        m_rad = NULL;
    }
    ;

    m_has_sPre = false;

    if (m_sPre)
    {
        delete m_sPre;
        m_sPre = NULL;
    }
    ;

    m_has_sSub = false;

    if (m_sSub)
    {
        delete m_sSub;
        m_sSub = NULL;
    }
    ;

    m_has_sSubSup = false;

    if (m_sSubSup)
    {
        delete m_sSubSup;
        m_sSubSup = NULL;
    }
    ;

    m_has_sSup = false;

    if (m_sSup)
    {
        delete m_sSup;
        m_sSup = NULL;
    }
    ;

    m_has_r = false;

    if (m_r)
    {
        delete m_r;
        m_r = NULL;
    }
    ;

    m_has_acc = true;
    if (!m_acc)
    {
        m_acc = new CT_Acc();
    }
    return m_acc;
}

const CT_Acc& CT_OMath::ChildGroup_1::get_acc() const
{
    if (m_acc)
    {
        return *m_acc;
    }
    return CT_Acc::default_instance();
}

bool CT_OMath::ChildGroup_1::has_bar() const
{
    return m_has_bar;
}

CT_Bar* CT_OMath::ChildGroup_1::mutable_bar()
{

    m_has_acc = false;

    if (m_acc)
    {
        delete m_acc;
        m_acc = NULL;
    }
    ;

    m_has_box = false;

    if (m_box)
    {
        delete m_box;
        m_box = NULL;
    }
    ;

    m_has_borderBox = false;

    if (m_borderBox)
    {
        delete m_borderBox;
        m_borderBox = NULL;
    }
    ;

    m_has_d = false;

    if (m_d)
    {
        delete m_d;
        m_d = NULL;
    }
    ;

    m_has_eqArr = false;

    if (m_eqArr)
    {
        delete m_eqArr;
        m_eqArr = NULL;
    }
    ;

    m_has_f = false;

    if (m_f)
    {
        delete m_f;
        m_f = NULL;
    }
    ;

    m_has_func = false;

    if (m_func)
    {
        delete m_func;
        m_func = NULL;
    }
    ;

    m_has_groupChr = false;

    if (m_groupChr)
    {
        delete m_groupChr;
        m_groupChr = NULL;
    }
    ;

    m_has_limLow = false;

    if (m_limLow)
    {
        delete m_limLow;
        m_limLow = NULL;
    }
    ;

    m_has_limUpp = false;

    if (m_limUpp)
    {
        delete m_limUpp;
        m_limUpp = NULL;
    }
    ;

    m_has_m = false;

    if (m_m)
    {
        delete m_m;
        m_m = NULL;
    }
    ;

    m_has_nary = false;

    if (m_nary)
    {
        delete m_nary;
        m_nary = NULL;
    }
    ;

    m_has_phant = false;

    if (m_phant)
    {
        delete m_phant;
        m_phant = NULL;
    }
    ;

    m_has_rad = false;

    if (m_rad)
    {
        delete m_rad;
        m_rad = NULL;
    }
    ;

    m_has_sPre = false;

    if (m_sPre)
    {
        delete m_sPre;
        m_sPre = NULL;
    }
    ;

    m_has_sSub = false;

    if (m_sSub)
    {
        delete m_sSub;
        m_sSub = NULL;
    }
    ;

    m_has_sSubSup = false;

    if (m_sSubSup)
    {
        delete m_sSubSup;
        m_sSubSup = NULL;
    }
    ;

    m_has_sSup = false;

    if (m_sSup)
    {
        delete m_sSup;
        m_sSup = NULL;
    }
    ;

    m_has_r = false;

    if (m_r)
    {
        delete m_r;
        m_r = NULL;
    }
    ;

    m_has_bar = true;
    if (!m_bar)
    {
        m_bar = new CT_Bar();
    }
    return m_bar;
}

const CT_Bar& CT_OMath::ChildGroup_1::get_bar() const
{
    if (m_bar)
    {
        return *m_bar;
    }
    return CT_Bar::default_instance();
}

bool CT_OMath::ChildGroup_1::has_box() const
{
    return m_has_box;
}

CT_Box* CT_OMath::ChildGroup_1::mutable_box()
{

    m_has_acc = false;

    if (m_acc)
    {
        delete m_acc;
        m_acc = NULL;
    }
    ;

    m_has_bar = false;

    if (m_bar)
    {
        delete m_bar;
        m_bar = NULL;
    }
    ;

    m_has_borderBox = false;

    if (m_borderBox)
    {
        delete m_borderBox;
        m_borderBox = NULL;
    }
    ;

    m_has_d = false;

    if (m_d)
    {
        delete m_d;
        m_d = NULL;
    }
    ;

    m_has_eqArr = false;

    if (m_eqArr)
    {
        delete m_eqArr;
        m_eqArr = NULL;
    }
    ;

    m_has_f = false;

    if (m_f)
    {
        delete m_f;
        m_f = NULL;
    }
    ;

    m_has_func = false;

    if (m_func)
    {
        delete m_func;
        m_func = NULL;
    }
    ;

    m_has_groupChr = false;

    if (m_groupChr)
    {
        delete m_groupChr;
        m_groupChr = NULL;
    }
    ;

    m_has_limLow = false;

    if (m_limLow)
    {
        delete m_limLow;
        m_limLow = NULL;
    }
    ;

    m_has_limUpp = false;

    if (m_limUpp)
    {
        delete m_limUpp;
        m_limUpp = NULL;
    }
    ;

    m_has_m = false;

    if (m_m)
    {
        delete m_m;
        m_m = NULL;
    }
    ;

    m_has_nary = false;

    if (m_nary)
    {
        delete m_nary;
        m_nary = NULL;
    }
    ;

    m_has_phant = false;

    if (m_phant)
    {
        delete m_phant;
        m_phant = NULL;
    }
    ;

    m_has_rad = false;

    if (m_rad)
    {
        delete m_rad;
        m_rad = NULL;
    }
    ;

    m_has_sPre = false;

    if (m_sPre)
    {
        delete m_sPre;
        m_sPre = NULL;
    }
    ;

    m_has_sSub = false;

    if (m_sSub)
    {
        delete m_sSub;
        m_sSub = NULL;
    }
    ;

    m_has_sSubSup = false;

    if (m_sSubSup)
    {
        delete m_sSubSup;
        m_sSubSup = NULL;
    }
    ;

    m_has_sSup = false;

    if (m_sSup)
    {
        delete m_sSup;
        m_sSup = NULL;
    }
    ;

    m_has_r = false;

    if (m_r)
    {
        delete m_r;
        m_r = NULL;
    }
    ;

    m_has_box = true;
    if (!m_box)
    {
        m_box = new CT_Box();
    }
    return m_box;
}

const CT_Box& CT_OMath::ChildGroup_1::get_box() const
{
    if (m_box)
    {
        return *m_box;
    }
    return CT_Box::default_instance();
}

bool CT_OMath::ChildGroup_1::has_borderBox() const
{
    return m_has_borderBox;
}

CT_BorderBox* CT_OMath::ChildGroup_1::mutable_borderBox()
{

    m_has_acc = false;

    if (m_acc)
    {
        delete m_acc;
        m_acc = NULL;
    }
    ;

    m_has_bar = false;

    if (m_bar)
    {
        delete m_bar;
        m_bar = NULL;
    }
    ;

    m_has_box = false;

    if (m_box)
    {
        delete m_box;
        m_box = NULL;
    }
    ;

    m_has_d = false;

    if (m_d)
    {
        delete m_d;
        m_d = NULL;
    }
    ;

    m_has_eqArr = false;

    if (m_eqArr)
    {
        delete m_eqArr;
        m_eqArr = NULL;
    }
    ;

    m_has_f = false;

    if (m_f)
    {
        delete m_f;
        m_f = NULL;
    }
    ;

    m_has_func = false;

    if (m_func)
    {
        delete m_func;
        m_func = NULL;
    }
    ;

    m_has_groupChr = false;

    if (m_groupChr)
    {
        delete m_groupChr;
        m_groupChr = NULL;
    }
    ;

    m_has_limLow = false;

    if (m_limLow)
    {
        delete m_limLow;
        m_limLow = NULL;
    }
    ;

    m_has_limUpp = false;

    if (m_limUpp)
    {
        delete m_limUpp;
        m_limUpp = NULL;
    }
    ;

    m_has_m = false;

    if (m_m)
    {
        delete m_m;
        m_m = NULL;
    }
    ;

    m_has_nary = false;

    if (m_nary)
    {
        delete m_nary;
        m_nary = NULL;
    }
    ;

    m_has_phant = false;

    if (m_phant)
    {
        delete m_phant;
        m_phant = NULL;
    }
    ;

    m_has_rad = false;

    if (m_rad)
    {
        delete m_rad;
        m_rad = NULL;
    }
    ;

    m_has_sPre = false;

    if (m_sPre)
    {
        delete m_sPre;
        m_sPre = NULL;
    }
    ;

    m_has_sSub = false;

    if (m_sSub)
    {
        delete m_sSub;
        m_sSub = NULL;
    }
    ;

    m_has_sSubSup = false;

    if (m_sSubSup)
    {
        delete m_sSubSup;
        m_sSubSup = NULL;
    }
    ;

    m_has_sSup = false;

    if (m_sSup)
    {
        delete m_sSup;
        m_sSup = NULL;
    }
    ;

    m_has_r = false;

    if (m_r)
    {
        delete m_r;
        m_r = NULL;
    }
    ;

    m_has_borderBox = true;
    if (!m_borderBox)
    {
        m_borderBox = new CT_BorderBox();
    }
    return m_borderBox;
}

const CT_BorderBox& CT_OMath::ChildGroup_1::get_borderBox() const
{
    if (m_borderBox)
    {
        return *m_borderBox;
    }
    return CT_BorderBox::default_instance();
}

bool CT_OMath::ChildGroup_1::has_d() const
{
    return m_has_d;
}

CT_D* CT_OMath::ChildGroup_1::mutable_d()
{

    m_has_acc = false;

    if (m_acc)
    {
        delete m_acc;
        m_acc = NULL;
    }
    ;

    m_has_bar = false;

    if (m_bar)
    {
        delete m_bar;
        m_bar = NULL;
    }
    ;

    m_has_box = false;

    if (m_box)
    {
        delete m_box;
        m_box = NULL;
    }
    ;

    m_has_borderBox = false;

    if (m_borderBox)
    {
        delete m_borderBox;
        m_borderBox = NULL;
    }
    ;

    m_has_eqArr = false;

    if (m_eqArr)
    {
        delete m_eqArr;
        m_eqArr = NULL;
    }
    ;

    m_has_f = false;

    if (m_f)
    {
        delete m_f;
        m_f = NULL;
    }
    ;

    m_has_func = false;

    if (m_func)
    {
        delete m_func;
        m_func = NULL;
    }
    ;

    m_has_groupChr = false;

    if (m_groupChr)
    {
        delete m_groupChr;
        m_groupChr = NULL;
    }
    ;

    m_has_limLow = false;

    if (m_limLow)
    {
        delete m_limLow;
        m_limLow = NULL;
    }
    ;

    m_has_limUpp = false;

    if (m_limUpp)
    {
        delete m_limUpp;
        m_limUpp = NULL;
    }
    ;

    m_has_m = false;

    if (m_m)
    {
        delete m_m;
        m_m = NULL;
    }
    ;

    m_has_nary = false;

    if (m_nary)
    {
        delete m_nary;
        m_nary = NULL;
    }
    ;

    m_has_phant = false;

    if (m_phant)
    {
        delete m_phant;
        m_phant = NULL;
    }
    ;

    m_has_rad = false;

    if (m_rad)
    {
        delete m_rad;
        m_rad = NULL;
    }
    ;

    m_has_sPre = false;

    if (m_sPre)
    {
        delete m_sPre;
        m_sPre = NULL;
    }
    ;

    m_has_sSub = false;

    if (m_sSub)
    {
        delete m_sSub;
        m_sSub = NULL;
    }
    ;

    m_has_sSubSup = false;

    if (m_sSubSup)
    {
        delete m_sSubSup;
        m_sSubSup = NULL;
    }
    ;

    m_has_sSup = false;

    if (m_sSup)
    {
        delete m_sSup;
        m_sSup = NULL;
    }
    ;

    m_has_r = false;

    if (m_r)
    {
        delete m_r;
        m_r = NULL;
    }
    ;

    m_has_d = true;
    if (!m_d)
    {
        m_d = new CT_D();
    }
    return m_d;
}

const CT_D& CT_OMath::ChildGroup_1::get_d() const
{
    if (m_d)
    {
        return *m_d;
    }
    return CT_D::default_instance();
}

bool CT_OMath::ChildGroup_1::has_eqArr() const
{
    return m_has_eqArr;
}

CT_EqArr* CT_OMath::ChildGroup_1::mutable_eqArr()
{

    m_has_acc = false;

    if (m_acc)
    {
        delete m_acc;
        m_acc = NULL;
    }
    ;

    m_has_bar = false;

    if (m_bar)
    {
        delete m_bar;
        m_bar = NULL;
    }
    ;

    m_has_box = false;

    if (m_box)
    {
        delete m_box;
        m_box = NULL;
    }
    ;

    m_has_borderBox = false;

    if (m_borderBox)
    {
        delete m_borderBox;
        m_borderBox = NULL;
    }
    ;

    m_has_d = false;

    if (m_d)
    {
        delete m_d;
        m_d = NULL;
    }
    ;

    m_has_f = false;

    if (m_f)
    {
        delete m_f;
        m_f = NULL;
    }
    ;

    m_has_func = false;

    if (m_func)
    {
        delete m_func;
        m_func = NULL;
    }
    ;

    m_has_groupChr = false;

    if (m_groupChr)
    {
        delete m_groupChr;
        m_groupChr = NULL;
    }
    ;

    m_has_limLow = false;

    if (m_limLow)
    {
        delete m_limLow;
        m_limLow = NULL;
    }
    ;

    m_has_limUpp = false;

    if (m_limUpp)
    {
        delete m_limUpp;
        m_limUpp = NULL;
    }
    ;

    m_has_m = false;

    if (m_m)
    {
        delete m_m;
        m_m = NULL;
    }
    ;

    m_has_nary = false;

    if (m_nary)
    {
        delete m_nary;
        m_nary = NULL;
    }
    ;

    m_has_phant = false;

    if (m_phant)
    {
        delete m_phant;
        m_phant = NULL;
    }
    ;

    m_has_rad = false;

    if (m_rad)
    {
        delete m_rad;
        m_rad = NULL;
    }
    ;

    m_has_sPre = false;

    if (m_sPre)
    {
        delete m_sPre;
        m_sPre = NULL;
    }
    ;

    m_has_sSub = false;

    if (m_sSub)
    {
        delete m_sSub;
        m_sSub = NULL;
    }
    ;

    m_has_sSubSup = false;

    if (m_sSubSup)
    {
        delete m_sSubSup;
        m_sSubSup = NULL;
    }
    ;

    m_has_sSup = false;

    if (m_sSup)
    {
        delete m_sSup;
        m_sSup = NULL;
    }
    ;

    m_has_r = false;

    if (m_r)
    {
        delete m_r;
        m_r = NULL;
    }
    ;

    m_has_eqArr = true;
    if (!m_eqArr)
    {
        m_eqArr = new CT_EqArr();
    }
    return m_eqArr;
}

const CT_EqArr& CT_OMath::ChildGroup_1::get_eqArr() const
{
    if (m_eqArr)
    {
        return *m_eqArr;
    }
    return CT_EqArr::default_instance();
}

bool CT_OMath::ChildGroup_1::has_f() const
{
    return m_has_f;
}

CT_F* CT_OMath::ChildGroup_1::mutable_f()
{

    m_has_acc = false;

    if (m_acc)
    {
        delete m_acc;
        m_acc = NULL;
    }
    ;

    m_has_bar = false;

    if (m_bar)
    {
        delete m_bar;
        m_bar = NULL;
    }
    ;

    m_has_box = false;

    if (m_box)
    {
        delete m_box;
        m_box = NULL;
    }
    ;

    m_has_borderBox = false;

    if (m_borderBox)
    {
        delete m_borderBox;
        m_borderBox = NULL;
    }
    ;

    m_has_d = false;

    if (m_d)
    {
        delete m_d;
        m_d = NULL;
    }
    ;

    m_has_eqArr = false;

    if (m_eqArr)
    {
        delete m_eqArr;
        m_eqArr = NULL;
    }
    ;

    m_has_func = false;

    if (m_func)
    {
        delete m_func;
        m_func = NULL;
    }
    ;

    m_has_groupChr = false;

    if (m_groupChr)
    {
        delete m_groupChr;
        m_groupChr = NULL;
    }
    ;

    m_has_limLow = false;

    if (m_limLow)
    {
        delete m_limLow;
        m_limLow = NULL;
    }
    ;

    m_has_limUpp = false;

    if (m_limUpp)
    {
        delete m_limUpp;
        m_limUpp = NULL;
    }
    ;

    m_has_m = false;

    if (m_m)
    {
        delete m_m;
        m_m = NULL;
    }
    ;

    m_has_nary = false;

    if (m_nary)
    {
        delete m_nary;
        m_nary = NULL;
    }
    ;

    m_has_phant = false;

    if (m_phant)
    {
        delete m_phant;
        m_phant = NULL;
    }
    ;

    m_has_rad = false;

    if (m_rad)
    {
        delete m_rad;
        m_rad = NULL;
    }
    ;

    m_has_sPre = false;

    if (m_sPre)
    {
        delete m_sPre;
        m_sPre = NULL;
    }
    ;

    m_has_sSub = false;

    if (m_sSub)
    {
        delete m_sSub;
        m_sSub = NULL;
    }
    ;

    m_has_sSubSup = false;

    if (m_sSubSup)
    {
        delete m_sSubSup;
        m_sSubSup = NULL;
    }
    ;

    m_has_sSup = false;

    if (m_sSup)
    {
        delete m_sSup;
        m_sSup = NULL;
    }
    ;

    m_has_r = false;

    if (m_r)
    {
        delete m_r;
        m_r = NULL;
    }
    ;

    m_has_f = true;
    if (!m_f)
    {
        m_f = new CT_F();
    }
    return m_f;
}

const CT_F& CT_OMath::ChildGroup_1::get_f() const
{
    if (m_f)
    {
        return *m_f;
    }
    return CT_F::default_instance();
}

bool CT_OMath::ChildGroup_1::has_func() const
{
    return m_has_func;
}

CT_Func* CT_OMath::ChildGroup_1::mutable_func()
{

    m_has_acc = false;

    if (m_acc)
    {
        delete m_acc;
        m_acc = NULL;
    }
    ;

    m_has_bar = false;

    if (m_bar)
    {
        delete m_bar;
        m_bar = NULL;
    }
    ;

    m_has_box = false;

    if (m_box)
    {
        delete m_box;
        m_box = NULL;
    }
    ;

    m_has_borderBox = false;

    if (m_borderBox)
    {
        delete m_borderBox;
        m_borderBox = NULL;
    }
    ;

    m_has_d = false;

    if (m_d)
    {
        delete m_d;
        m_d = NULL;
    }
    ;

    m_has_eqArr = false;

    if (m_eqArr)
    {
        delete m_eqArr;
        m_eqArr = NULL;
    }
    ;

    m_has_f = false;

    if (m_f)
    {
        delete m_f;
        m_f = NULL;
    }
    ;

    m_has_groupChr = false;

    if (m_groupChr)
    {
        delete m_groupChr;
        m_groupChr = NULL;
    }
    ;

    m_has_limLow = false;

    if (m_limLow)
    {
        delete m_limLow;
        m_limLow = NULL;
    }
    ;

    m_has_limUpp = false;

    if (m_limUpp)
    {
        delete m_limUpp;
        m_limUpp = NULL;
    }
    ;

    m_has_m = false;

    if (m_m)
    {
        delete m_m;
        m_m = NULL;
    }
    ;

    m_has_nary = false;

    if (m_nary)
    {
        delete m_nary;
        m_nary = NULL;
    }
    ;

    m_has_phant = false;

    if (m_phant)
    {
        delete m_phant;
        m_phant = NULL;
    }
    ;

    m_has_rad = false;

    if (m_rad)
    {
        delete m_rad;
        m_rad = NULL;
    }
    ;

    m_has_sPre = false;

    if (m_sPre)
    {
        delete m_sPre;
        m_sPre = NULL;
    }
    ;

    m_has_sSub = false;

    if (m_sSub)
    {
        delete m_sSub;
        m_sSub = NULL;
    }
    ;

    m_has_sSubSup = false;

    if (m_sSubSup)
    {
        delete m_sSubSup;
        m_sSubSup = NULL;
    }
    ;

    m_has_sSup = false;

    if (m_sSup)
    {
        delete m_sSup;
        m_sSup = NULL;
    }
    ;

    m_has_r = false;

    if (m_r)
    {
        delete m_r;
        m_r = NULL;
    }
    ;

    m_has_func = true;
    if (!m_func)
    {
        m_func = new CT_Func();
    }
    return m_func;
}

const CT_Func& CT_OMath::ChildGroup_1::get_func() const
{
    if (m_func)
    {
        return *m_func;
    }
    return CT_Func::default_instance();
}

bool CT_OMath::ChildGroup_1::has_groupChr() const
{
    return m_has_groupChr;
}

CT_GroupChr* CT_OMath::ChildGroup_1::mutable_groupChr()
{

    m_has_acc = false;

    if (m_acc)
    {
        delete m_acc;
        m_acc = NULL;
    }
    ;

    m_has_bar = false;

    if (m_bar)
    {
        delete m_bar;
        m_bar = NULL;
    }
    ;

    m_has_box = false;

    if (m_box)
    {
        delete m_box;
        m_box = NULL;
    }
    ;

    m_has_borderBox = false;

    if (m_borderBox)
    {
        delete m_borderBox;
        m_borderBox = NULL;
    }
    ;

    m_has_d = false;

    if (m_d)
    {
        delete m_d;
        m_d = NULL;
    }
    ;

    m_has_eqArr = false;

    if (m_eqArr)
    {
        delete m_eqArr;
        m_eqArr = NULL;
    }
    ;

    m_has_f = false;

    if (m_f)
    {
        delete m_f;
        m_f = NULL;
    }
    ;

    m_has_func = false;

    if (m_func)
    {
        delete m_func;
        m_func = NULL;
    }
    ;

    m_has_limLow = false;

    if (m_limLow)
    {
        delete m_limLow;
        m_limLow = NULL;
    }
    ;

    m_has_limUpp = false;

    if (m_limUpp)
    {
        delete m_limUpp;
        m_limUpp = NULL;
    }
    ;

    m_has_m = false;

    if (m_m)
    {
        delete m_m;
        m_m = NULL;
    }
    ;

    m_has_nary = false;

    if (m_nary)
    {
        delete m_nary;
        m_nary = NULL;
    }
    ;

    m_has_phant = false;

    if (m_phant)
    {
        delete m_phant;
        m_phant = NULL;
    }
    ;

    m_has_rad = false;

    if (m_rad)
    {
        delete m_rad;
        m_rad = NULL;
    }
    ;

    m_has_sPre = false;

    if (m_sPre)
    {
        delete m_sPre;
        m_sPre = NULL;
    }
    ;

    m_has_sSub = false;

    if (m_sSub)
    {
        delete m_sSub;
        m_sSub = NULL;
    }
    ;

    m_has_sSubSup = false;

    if (m_sSubSup)
    {
        delete m_sSubSup;
        m_sSubSup = NULL;
    }
    ;

    m_has_sSup = false;

    if (m_sSup)
    {
        delete m_sSup;
        m_sSup = NULL;
    }
    ;

    m_has_r = false;

    if (m_r)
    {
        delete m_r;
        m_r = NULL;
    }
    ;

    m_has_groupChr = true;
    if (!m_groupChr)
    {
        m_groupChr = new CT_GroupChr();
    }
    return m_groupChr;
}

const CT_GroupChr& CT_OMath::ChildGroup_1::get_groupChr() const
{
    if (m_groupChr)
    {
        return *m_groupChr;
    }
    return CT_GroupChr::default_instance();
}

bool CT_OMath::ChildGroup_1::has_limLow() const
{
    return m_has_limLow;
}

CT_LimLow* CT_OMath::ChildGroup_1::mutable_limLow()
{

    m_has_acc = false;

    if (m_acc)
    {
        delete m_acc;
        m_acc = NULL;
    }
    ;

    m_has_bar = false;

    if (m_bar)
    {
        delete m_bar;
        m_bar = NULL;
    }
    ;

    m_has_box = false;

    if (m_box)
    {
        delete m_box;
        m_box = NULL;
    }
    ;

    m_has_borderBox = false;

    if (m_borderBox)
    {
        delete m_borderBox;
        m_borderBox = NULL;
    }
    ;

    m_has_d = false;

    if (m_d)
    {
        delete m_d;
        m_d = NULL;
    }
    ;

    m_has_eqArr = false;

    if (m_eqArr)
    {
        delete m_eqArr;
        m_eqArr = NULL;
    }
    ;

    m_has_f = false;

    if (m_f)
    {
        delete m_f;
        m_f = NULL;
    }
    ;

    m_has_func = false;

    if (m_func)
    {
        delete m_func;
        m_func = NULL;
    }
    ;

    m_has_groupChr = false;

    if (m_groupChr)
    {
        delete m_groupChr;
        m_groupChr = NULL;
    }
    ;

    m_has_limUpp = false;

    if (m_limUpp)
    {
        delete m_limUpp;
        m_limUpp = NULL;
    }
    ;

    m_has_m = false;

    if (m_m)
    {
        delete m_m;
        m_m = NULL;
    }
    ;

    m_has_nary = false;

    if (m_nary)
    {
        delete m_nary;
        m_nary = NULL;
    }
    ;

    m_has_phant = false;

    if (m_phant)
    {
        delete m_phant;
        m_phant = NULL;
    }
    ;

    m_has_rad = false;

    if (m_rad)
    {
        delete m_rad;
        m_rad = NULL;
    }
    ;

    m_has_sPre = false;

    if (m_sPre)
    {
        delete m_sPre;
        m_sPre = NULL;
    }
    ;

    m_has_sSub = false;

    if (m_sSub)
    {
        delete m_sSub;
        m_sSub = NULL;
    }
    ;

    m_has_sSubSup = false;

    if (m_sSubSup)
    {
        delete m_sSubSup;
        m_sSubSup = NULL;
    }
    ;

    m_has_sSup = false;

    if (m_sSup)
    {
        delete m_sSup;
        m_sSup = NULL;
    }
    ;

    m_has_r = false;

    if (m_r)
    {
        delete m_r;
        m_r = NULL;
    }
    ;

    m_has_limLow = true;
    if (!m_limLow)
    {
        m_limLow = new CT_LimLow();
    }
    return m_limLow;
}

const CT_LimLow& CT_OMath::ChildGroup_1::get_limLow() const
{
    if (m_limLow)
    {
        return *m_limLow;
    }
    return CT_LimLow::default_instance();
}

bool CT_OMath::ChildGroup_1::has_limUpp() const
{
    return m_has_limUpp;
}

CT_LimUpp* CT_OMath::ChildGroup_1::mutable_limUpp()
{

    m_has_acc = false;

    if (m_acc)
    {
        delete m_acc;
        m_acc = NULL;
    }
    ;

    m_has_bar = false;

    if (m_bar)
    {
        delete m_bar;
        m_bar = NULL;
    }
    ;

    m_has_box = false;

    if (m_box)
    {
        delete m_box;
        m_box = NULL;
    }
    ;

    m_has_borderBox = false;

    if (m_borderBox)
    {
        delete m_borderBox;
        m_borderBox = NULL;
    }
    ;

    m_has_d = false;

    if (m_d)
    {
        delete m_d;
        m_d = NULL;
    }
    ;

    m_has_eqArr = false;

    if (m_eqArr)
    {
        delete m_eqArr;
        m_eqArr = NULL;
    }
    ;

    m_has_f = false;

    if (m_f)
    {
        delete m_f;
        m_f = NULL;
    }
    ;

    m_has_func = false;

    if (m_func)
    {
        delete m_func;
        m_func = NULL;
    }
    ;

    m_has_groupChr = false;

    if (m_groupChr)
    {
        delete m_groupChr;
        m_groupChr = NULL;
    }
    ;

    m_has_limLow = false;

    if (m_limLow)
    {
        delete m_limLow;
        m_limLow = NULL;
    }
    ;

    m_has_m = false;

    if (m_m)
    {
        delete m_m;
        m_m = NULL;
    }
    ;

    m_has_nary = false;

    if (m_nary)
    {
        delete m_nary;
        m_nary = NULL;
    }
    ;

    m_has_phant = false;

    if (m_phant)
    {
        delete m_phant;
        m_phant = NULL;
    }
    ;

    m_has_rad = false;

    if (m_rad)
    {
        delete m_rad;
        m_rad = NULL;
    }
    ;

    m_has_sPre = false;

    if (m_sPre)
    {
        delete m_sPre;
        m_sPre = NULL;
    }
    ;

    m_has_sSub = false;

    if (m_sSub)
    {
        delete m_sSub;
        m_sSub = NULL;
    }
    ;

    m_has_sSubSup = false;

    if (m_sSubSup)
    {
        delete m_sSubSup;
        m_sSubSup = NULL;
    }
    ;

    m_has_sSup = false;

    if (m_sSup)
    {
        delete m_sSup;
        m_sSup = NULL;
    }
    ;

    m_has_r = false;

    if (m_r)
    {
        delete m_r;
        m_r = NULL;
    }
    ;

    m_has_limUpp = true;
    if (!m_limUpp)
    {
        m_limUpp = new CT_LimUpp();
    }
    return m_limUpp;
}

const CT_LimUpp& CT_OMath::ChildGroup_1::get_limUpp() const
{
    if (m_limUpp)
    {
        return *m_limUpp;
    }
    return CT_LimUpp::default_instance();
}

bool CT_OMath::ChildGroup_1::has_m() const
{
    return m_has_m;
}

CT_M* CT_OMath::ChildGroup_1::mutable_m()
{

    m_has_acc = false;

    if (m_acc)
    {
        delete m_acc;
        m_acc = NULL;
    }
    ;

    m_has_bar = false;

    if (m_bar)
    {
        delete m_bar;
        m_bar = NULL;
    }
    ;

    m_has_box = false;

    if (m_box)
    {
        delete m_box;
        m_box = NULL;
    }
    ;

    m_has_borderBox = false;

    if (m_borderBox)
    {
        delete m_borderBox;
        m_borderBox = NULL;
    }
    ;

    m_has_d = false;

    if (m_d)
    {
        delete m_d;
        m_d = NULL;
    }
    ;

    m_has_eqArr = false;

    if (m_eqArr)
    {
        delete m_eqArr;
        m_eqArr = NULL;
    }
    ;

    m_has_f = false;

    if (m_f)
    {
        delete m_f;
        m_f = NULL;
    }
    ;

    m_has_func = false;

    if (m_func)
    {
        delete m_func;
        m_func = NULL;
    }
    ;

    m_has_groupChr = false;

    if (m_groupChr)
    {
        delete m_groupChr;
        m_groupChr = NULL;
    }
    ;

    m_has_limLow = false;

    if (m_limLow)
    {
        delete m_limLow;
        m_limLow = NULL;
    }
    ;

    m_has_limUpp = false;

    if (m_limUpp)
    {
        delete m_limUpp;
        m_limUpp = NULL;
    }
    ;

    m_has_nary = false;

    if (m_nary)
    {
        delete m_nary;
        m_nary = NULL;
    }
    ;

    m_has_phant = false;

    if (m_phant)
    {
        delete m_phant;
        m_phant = NULL;
    }
    ;

    m_has_rad = false;

    if (m_rad)
    {
        delete m_rad;
        m_rad = NULL;
    }
    ;

    m_has_sPre = false;

    if (m_sPre)
    {
        delete m_sPre;
        m_sPre = NULL;
    }
    ;

    m_has_sSub = false;

    if (m_sSub)
    {
        delete m_sSub;
        m_sSub = NULL;
    }
    ;

    m_has_sSubSup = false;

    if (m_sSubSup)
    {
        delete m_sSubSup;
        m_sSubSup = NULL;
    }
    ;

    m_has_sSup = false;

    if (m_sSup)
    {
        delete m_sSup;
        m_sSup = NULL;
    }
    ;

    m_has_r = false;

    if (m_r)
    {
        delete m_r;
        m_r = NULL;
    }
    ;

    m_has_m = true;
    if (!m_m)
    {
        m_m = new CT_M();
    }
    return m_m;
}

const CT_M& CT_OMath::ChildGroup_1::get_m() const
{
    if (m_m)
    {
        return *m_m;
    }
    return CT_M::default_instance();
}

bool CT_OMath::ChildGroup_1::has_nary() const
{
    return m_has_nary;
}

CT_Nary* CT_OMath::ChildGroup_1::mutable_nary()
{

    m_has_acc = false;

    if (m_acc)
    {
        delete m_acc;
        m_acc = NULL;
    }
    ;

    m_has_bar = false;

    if (m_bar)
    {
        delete m_bar;
        m_bar = NULL;
    }
    ;

    m_has_box = false;

    if (m_box)
    {
        delete m_box;
        m_box = NULL;
    }
    ;

    m_has_borderBox = false;

    if (m_borderBox)
    {
        delete m_borderBox;
        m_borderBox = NULL;
    }
    ;

    m_has_d = false;

    if (m_d)
    {
        delete m_d;
        m_d = NULL;
    }
    ;

    m_has_eqArr = false;

    if (m_eqArr)
    {
        delete m_eqArr;
        m_eqArr = NULL;
    }
    ;

    m_has_f = false;

    if (m_f)
    {
        delete m_f;
        m_f = NULL;
    }
    ;

    m_has_func = false;

    if (m_func)
    {
        delete m_func;
        m_func = NULL;
    }
    ;

    m_has_groupChr = false;

    if (m_groupChr)
    {
        delete m_groupChr;
        m_groupChr = NULL;
    }
    ;

    m_has_limLow = false;

    if (m_limLow)
    {
        delete m_limLow;
        m_limLow = NULL;
    }
    ;

    m_has_limUpp = false;

    if (m_limUpp)
    {
        delete m_limUpp;
        m_limUpp = NULL;
    }
    ;

    m_has_m = false;

    if (m_m)
    {
        delete m_m;
        m_m = NULL;
    }
    ;

    m_has_phant = false;

    if (m_phant)
    {
        delete m_phant;
        m_phant = NULL;
    }
    ;

    m_has_rad = false;

    if (m_rad)
    {
        delete m_rad;
        m_rad = NULL;
    }
    ;

    m_has_sPre = false;

    if (m_sPre)
    {
        delete m_sPre;
        m_sPre = NULL;
    }
    ;

    m_has_sSub = false;

    if (m_sSub)
    {
        delete m_sSub;
        m_sSub = NULL;
    }
    ;

    m_has_sSubSup = false;

    if (m_sSubSup)
    {
        delete m_sSubSup;
        m_sSubSup = NULL;
    }
    ;

    m_has_sSup = false;

    if (m_sSup)
    {
        delete m_sSup;
        m_sSup = NULL;
    }
    ;

    m_has_r = false;

    if (m_r)
    {
        delete m_r;
        m_r = NULL;
    }
    ;

    m_has_nary = true;
    if (!m_nary)
    {
        m_nary = new CT_Nary();
    }
    return m_nary;
}

const CT_Nary& CT_OMath::ChildGroup_1::get_nary() const
{
    if (m_nary)
    {
        return *m_nary;
    }
    return CT_Nary::default_instance();
}

bool CT_OMath::ChildGroup_1::has_phant() const
{
    return m_has_phant;
}

CT_Phant* CT_OMath::ChildGroup_1::mutable_phant()
{

    m_has_acc = false;

    if (m_acc)
    {
        delete m_acc;
        m_acc = NULL;
    }
    ;

    m_has_bar = false;

    if (m_bar)
    {
        delete m_bar;
        m_bar = NULL;
    }
    ;

    m_has_box = false;

    if (m_box)
    {
        delete m_box;
        m_box = NULL;
    }
    ;

    m_has_borderBox = false;

    if (m_borderBox)
    {
        delete m_borderBox;
        m_borderBox = NULL;
    }
    ;

    m_has_d = false;

    if (m_d)
    {
        delete m_d;
        m_d = NULL;
    }
    ;

    m_has_eqArr = false;

    if (m_eqArr)
    {
        delete m_eqArr;
        m_eqArr = NULL;
    }
    ;

    m_has_f = false;

    if (m_f)
    {
        delete m_f;
        m_f = NULL;
    }
    ;

    m_has_func = false;

    if (m_func)
    {
        delete m_func;
        m_func = NULL;
    }
    ;

    m_has_groupChr = false;

    if (m_groupChr)
    {
        delete m_groupChr;
        m_groupChr = NULL;
    }
    ;

    m_has_limLow = false;

    if (m_limLow)
    {
        delete m_limLow;
        m_limLow = NULL;
    }
    ;

    m_has_limUpp = false;

    if (m_limUpp)
    {
        delete m_limUpp;
        m_limUpp = NULL;
    }
    ;

    m_has_m = false;

    if (m_m)
    {
        delete m_m;
        m_m = NULL;
    }
    ;

    m_has_nary = false;

    if (m_nary)
    {
        delete m_nary;
        m_nary = NULL;
    }
    ;

    m_has_rad = false;

    if (m_rad)
    {
        delete m_rad;
        m_rad = NULL;
    }
    ;

    m_has_sPre = false;

    if (m_sPre)
    {
        delete m_sPre;
        m_sPre = NULL;
    }
    ;

    m_has_sSub = false;

    if (m_sSub)
    {
        delete m_sSub;
        m_sSub = NULL;
    }
    ;

    m_has_sSubSup = false;

    if (m_sSubSup)
    {
        delete m_sSubSup;
        m_sSubSup = NULL;
    }
    ;

    m_has_sSup = false;

    if (m_sSup)
    {
        delete m_sSup;
        m_sSup = NULL;
    }
    ;

    m_has_r = false;

    if (m_r)
    {
        delete m_r;
        m_r = NULL;
    }
    ;

    m_has_phant = true;
    if (!m_phant)
    {
        m_phant = new CT_Phant();
    }
    return m_phant;
}

const CT_Phant& CT_OMath::ChildGroup_1::get_phant() const
{
    if (m_phant)
    {
        return *m_phant;
    }
    return CT_Phant::default_instance();
}

bool CT_OMath::ChildGroup_1::has_rad() const
{
    return m_has_rad;
}

CT_Rad* CT_OMath::ChildGroup_1::mutable_rad()
{

    m_has_acc = false;

    if (m_acc)
    {
        delete m_acc;
        m_acc = NULL;
    }
    ;

    m_has_bar = false;

    if (m_bar)
    {
        delete m_bar;
        m_bar = NULL;
    }
    ;

    m_has_box = false;

    if (m_box)
    {
        delete m_box;
        m_box = NULL;
    }
    ;

    m_has_borderBox = false;

    if (m_borderBox)
    {
        delete m_borderBox;
        m_borderBox = NULL;
    }
    ;

    m_has_d = false;

    if (m_d)
    {
        delete m_d;
        m_d = NULL;
    }
    ;

    m_has_eqArr = false;

    if (m_eqArr)
    {
        delete m_eqArr;
        m_eqArr = NULL;
    }
    ;

    m_has_f = false;

    if (m_f)
    {
        delete m_f;
        m_f = NULL;
    }
    ;

    m_has_func = false;

    if (m_func)
    {
        delete m_func;
        m_func = NULL;
    }
    ;

    m_has_groupChr = false;

    if (m_groupChr)
    {
        delete m_groupChr;
        m_groupChr = NULL;
    }
    ;

    m_has_limLow = false;

    if (m_limLow)
    {
        delete m_limLow;
        m_limLow = NULL;
    }
    ;

    m_has_limUpp = false;

    if (m_limUpp)
    {
        delete m_limUpp;
        m_limUpp = NULL;
    }
    ;

    m_has_m = false;

    if (m_m)
    {
        delete m_m;
        m_m = NULL;
    }
    ;

    m_has_nary = false;

    if (m_nary)
    {
        delete m_nary;
        m_nary = NULL;
    }
    ;

    m_has_phant = false;

    if (m_phant)
    {
        delete m_phant;
        m_phant = NULL;
    }
    ;

    m_has_sPre = false;

    if (m_sPre)
    {
        delete m_sPre;
        m_sPre = NULL;
    }
    ;

    m_has_sSub = false;

    if (m_sSub)
    {
        delete m_sSub;
        m_sSub = NULL;
    }
    ;

    m_has_sSubSup = false;

    if (m_sSubSup)
    {
        delete m_sSubSup;
        m_sSubSup = NULL;
    }
    ;

    m_has_sSup = false;

    if (m_sSup)
    {
        delete m_sSup;
        m_sSup = NULL;
    }
    ;

    m_has_r = false;

    if (m_r)
    {
        delete m_r;
        m_r = NULL;
    }
    ;

    m_has_rad = true;
    if (!m_rad)
    {
        m_rad = new CT_Rad();
    }
    return m_rad;
}

const CT_Rad& CT_OMath::ChildGroup_1::get_rad() const
{
    if (m_rad)
    {
        return *m_rad;
    }
    return CT_Rad::default_instance();
}

bool CT_OMath::ChildGroup_1::has_sPre() const
{
    return m_has_sPre;
}

CT_SPre* CT_OMath::ChildGroup_1::mutable_sPre()
{

    m_has_acc = false;

    if (m_acc)
    {
        delete m_acc;
        m_acc = NULL;
    }
    ;

    m_has_bar = false;

    if (m_bar)
    {
        delete m_bar;
        m_bar = NULL;
    }
    ;

    m_has_box = false;

    if (m_box)
    {
        delete m_box;
        m_box = NULL;
    }
    ;

    m_has_borderBox = false;

    if (m_borderBox)
    {
        delete m_borderBox;
        m_borderBox = NULL;
    }
    ;

    m_has_d = false;

    if (m_d)
    {
        delete m_d;
        m_d = NULL;
    }
    ;

    m_has_eqArr = false;

    if (m_eqArr)
    {
        delete m_eqArr;
        m_eqArr = NULL;
    }
    ;

    m_has_f = false;

    if (m_f)
    {
        delete m_f;
        m_f = NULL;
    }
    ;

    m_has_func = false;

    if (m_func)
    {
        delete m_func;
        m_func = NULL;
    }
    ;

    m_has_groupChr = false;

    if (m_groupChr)
    {
        delete m_groupChr;
        m_groupChr = NULL;
    }
    ;

    m_has_limLow = false;

    if (m_limLow)
    {
        delete m_limLow;
        m_limLow = NULL;
    }
    ;

    m_has_limUpp = false;

    if (m_limUpp)
    {
        delete m_limUpp;
        m_limUpp = NULL;
    }
    ;

    m_has_m = false;

    if (m_m)
    {
        delete m_m;
        m_m = NULL;
    }
    ;

    m_has_nary = false;

    if (m_nary)
    {
        delete m_nary;
        m_nary = NULL;
    }
    ;

    m_has_phant = false;

    if (m_phant)
    {
        delete m_phant;
        m_phant = NULL;
    }
    ;

    m_has_rad = false;

    if (m_rad)
    {
        delete m_rad;
        m_rad = NULL;
    }
    ;

    m_has_sSub = false;

    if (m_sSub)
    {
        delete m_sSub;
        m_sSub = NULL;
    }
    ;

    m_has_sSubSup = false;

    if (m_sSubSup)
    {
        delete m_sSubSup;
        m_sSubSup = NULL;
    }
    ;

    m_has_sSup = false;

    if (m_sSup)
    {
        delete m_sSup;
        m_sSup = NULL;
    }
    ;

    m_has_r = false;

    if (m_r)
    {
        delete m_r;
        m_r = NULL;
    }
    ;

    m_has_sPre = true;
    if (!m_sPre)
    {
        m_sPre = new CT_SPre();
    }
    return m_sPre;
}

const CT_SPre& CT_OMath::ChildGroup_1::get_sPre() const
{
    if (m_sPre)
    {
        return *m_sPre;
    }
    return CT_SPre::default_instance();
}

bool CT_OMath::ChildGroup_1::has_sSub() const
{
    return m_has_sSub;
}

CT_SSub* CT_OMath::ChildGroup_1::mutable_sSub()
{

    m_has_acc = false;

    if (m_acc)
    {
        delete m_acc;
        m_acc = NULL;
    }
    ;

    m_has_bar = false;

    if (m_bar)
    {
        delete m_bar;
        m_bar = NULL;
    }
    ;

    m_has_box = false;

    if (m_box)
    {
        delete m_box;
        m_box = NULL;
    }
    ;

    m_has_borderBox = false;

    if (m_borderBox)
    {
        delete m_borderBox;
        m_borderBox = NULL;
    }
    ;

    m_has_d = false;

    if (m_d)
    {
        delete m_d;
        m_d = NULL;
    }
    ;

    m_has_eqArr = false;

    if (m_eqArr)
    {
        delete m_eqArr;
        m_eqArr = NULL;
    }
    ;

    m_has_f = false;

    if (m_f)
    {
        delete m_f;
        m_f = NULL;
    }
    ;

    m_has_func = false;

    if (m_func)
    {
        delete m_func;
        m_func = NULL;
    }
    ;

    m_has_groupChr = false;

    if (m_groupChr)
    {
        delete m_groupChr;
        m_groupChr = NULL;
    }
    ;

    m_has_limLow = false;

    if (m_limLow)
    {
        delete m_limLow;
        m_limLow = NULL;
    }
    ;

    m_has_limUpp = false;

    if (m_limUpp)
    {
        delete m_limUpp;
        m_limUpp = NULL;
    }
    ;

    m_has_m = false;

    if (m_m)
    {
        delete m_m;
        m_m = NULL;
    }
    ;

    m_has_nary = false;

    if (m_nary)
    {
        delete m_nary;
        m_nary = NULL;
    }
    ;

    m_has_phant = false;

    if (m_phant)
    {
        delete m_phant;
        m_phant = NULL;
    }
    ;

    m_has_rad = false;

    if (m_rad)
    {
        delete m_rad;
        m_rad = NULL;
    }
    ;

    m_has_sPre = false;

    if (m_sPre)
    {
        delete m_sPre;
        m_sPre = NULL;
    }
    ;

    m_has_sSubSup = false;

    if (m_sSubSup)
    {
        delete m_sSubSup;
        m_sSubSup = NULL;
    }
    ;

    m_has_sSup = false;

    if (m_sSup)
    {
        delete m_sSup;
        m_sSup = NULL;
    }
    ;

    m_has_r = false;

    if (m_r)
    {
        delete m_r;
        m_r = NULL;
    }
    ;

    m_has_sSub = true;
    if (!m_sSub)
    {
        m_sSub = new CT_SSub();
    }
    return m_sSub;
}

const CT_SSub& CT_OMath::ChildGroup_1::get_sSub() const
{
    if (m_sSub)
    {
        return *m_sSub;
    }
    return CT_SSub::default_instance();
}

bool CT_OMath::ChildGroup_1::has_sSubSup() const
{
    return m_has_sSubSup;
}

CT_SSubSup* CT_OMath::ChildGroup_1::mutable_sSubSup()
{

    m_has_acc = false;

    if (m_acc)
    {
        delete m_acc;
        m_acc = NULL;
    }
    ;

    m_has_bar = false;

    if (m_bar)
    {
        delete m_bar;
        m_bar = NULL;
    }
    ;

    m_has_box = false;

    if (m_box)
    {
        delete m_box;
        m_box = NULL;
    }
    ;

    m_has_borderBox = false;

    if (m_borderBox)
    {
        delete m_borderBox;
        m_borderBox = NULL;
    }
    ;

    m_has_d = false;

    if (m_d)
    {
        delete m_d;
        m_d = NULL;
    }
    ;

    m_has_eqArr = false;

    if (m_eqArr)
    {
        delete m_eqArr;
        m_eqArr = NULL;
    }
    ;

    m_has_f = false;

    if (m_f)
    {
        delete m_f;
        m_f = NULL;
    }
    ;

    m_has_func = false;

    if (m_func)
    {
        delete m_func;
        m_func = NULL;
    }
    ;

    m_has_groupChr = false;

    if (m_groupChr)
    {
        delete m_groupChr;
        m_groupChr = NULL;
    }
    ;

    m_has_limLow = false;

    if (m_limLow)
    {
        delete m_limLow;
        m_limLow = NULL;
    }
    ;

    m_has_limUpp = false;

    if (m_limUpp)
    {
        delete m_limUpp;
        m_limUpp = NULL;
    }
    ;

    m_has_m = false;

    if (m_m)
    {
        delete m_m;
        m_m = NULL;
    }
    ;

    m_has_nary = false;

    if (m_nary)
    {
        delete m_nary;
        m_nary = NULL;
    }
    ;

    m_has_phant = false;

    if (m_phant)
    {
        delete m_phant;
        m_phant = NULL;
    }
    ;

    m_has_rad = false;

    if (m_rad)
    {
        delete m_rad;
        m_rad = NULL;
    }
    ;

    m_has_sPre = false;

    if (m_sPre)
    {
        delete m_sPre;
        m_sPre = NULL;
    }
    ;

    m_has_sSub = false;

    if (m_sSub)
    {
        delete m_sSub;
        m_sSub = NULL;
    }
    ;

    m_has_sSup = false;

    if (m_sSup)
    {
        delete m_sSup;
        m_sSup = NULL;
    }
    ;

    m_has_r = false;

    if (m_r)
    {
        delete m_r;
        m_r = NULL;
    }
    ;

    m_has_sSubSup = true;
    if (!m_sSubSup)
    {
        m_sSubSup = new CT_SSubSup();
    }
    return m_sSubSup;
}

const CT_SSubSup& CT_OMath::ChildGroup_1::get_sSubSup() const
{
    if (m_sSubSup)
    {
        return *m_sSubSup;
    }
    return CT_SSubSup::default_instance();
}

bool CT_OMath::ChildGroup_1::has_sSup() const
{
    return m_has_sSup;
}

CT_SSup* CT_OMath::ChildGroup_1::mutable_sSup()
{

    m_has_acc = false;

    if (m_acc)
    {
        delete m_acc;
        m_acc = NULL;
    }
    ;

    m_has_bar = false;

    if (m_bar)
    {
        delete m_bar;
        m_bar = NULL;
    }
    ;

    m_has_box = false;

    if (m_box)
    {
        delete m_box;
        m_box = NULL;
    }
    ;

    m_has_borderBox = false;

    if (m_borderBox)
    {
        delete m_borderBox;
        m_borderBox = NULL;
    }
    ;

    m_has_d = false;

    if (m_d)
    {
        delete m_d;
        m_d = NULL;
    }
    ;

    m_has_eqArr = false;

    if (m_eqArr)
    {
        delete m_eqArr;
        m_eqArr = NULL;
    }
    ;

    m_has_f = false;

    if (m_f)
    {
        delete m_f;
        m_f = NULL;
    }
    ;

    m_has_func = false;

    if (m_func)
    {
        delete m_func;
        m_func = NULL;
    }
    ;

    m_has_groupChr = false;

    if (m_groupChr)
    {
        delete m_groupChr;
        m_groupChr = NULL;
    }
    ;

    m_has_limLow = false;

    if (m_limLow)
    {
        delete m_limLow;
        m_limLow = NULL;
    }
    ;

    m_has_limUpp = false;

    if (m_limUpp)
    {
        delete m_limUpp;
        m_limUpp = NULL;
    }
    ;

    m_has_m = false;

    if (m_m)
    {
        delete m_m;
        m_m = NULL;
    }
    ;

    m_has_nary = false;

    if (m_nary)
    {
        delete m_nary;
        m_nary = NULL;
    }
    ;

    m_has_phant = false;

    if (m_phant)
    {
        delete m_phant;
        m_phant = NULL;
    }
    ;

    m_has_rad = false;

    if (m_rad)
    {
        delete m_rad;
        m_rad = NULL;
    }
    ;

    m_has_sPre = false;

    if (m_sPre)
    {
        delete m_sPre;
        m_sPre = NULL;
    }
    ;

    m_has_sSub = false;

    if (m_sSub)
    {
        delete m_sSub;
        m_sSub = NULL;
    }
    ;

    m_has_sSubSup = false;

    if (m_sSubSup)
    {
        delete m_sSubSup;
        m_sSubSup = NULL;
    }
    ;

    m_has_r = false;

    if (m_r)
    {
        delete m_r;
        m_r = NULL;
    }
    ;

    m_has_sSup = true;
    if (!m_sSup)
    {
        m_sSup = new CT_SSup();
    }
    return m_sSup;
}

const CT_SSup& CT_OMath::ChildGroup_1::get_sSup() const
{
    if (m_sSup)
    {
        return *m_sSup;
    }
    return CT_SSup::default_instance();
}

bool CT_OMath::ChildGroup_1::has_r() const
{
    return m_has_r;
}

CT_R* CT_OMath::ChildGroup_1::mutable_r()
{

    m_has_acc = false;

    if (m_acc)
    {
        delete m_acc;
        m_acc = NULL;
    }
    ;

    m_has_bar = false;

    if (m_bar)
    {
        delete m_bar;
        m_bar = NULL;
    }
    ;

    m_has_box = false;

    if (m_box)
    {
        delete m_box;
        m_box = NULL;
    }
    ;

    m_has_borderBox = false;

    if (m_borderBox)
    {
        delete m_borderBox;
        m_borderBox = NULL;
    }
    ;

    m_has_d = false;

    if (m_d)
    {
        delete m_d;
        m_d = NULL;
    }
    ;

    m_has_eqArr = false;

    if (m_eqArr)
    {
        delete m_eqArr;
        m_eqArr = NULL;
    }
    ;

    m_has_f = false;

    if (m_f)
    {
        delete m_f;
        m_f = NULL;
    }
    ;

    m_has_func = false;

    if (m_func)
    {
        delete m_func;
        m_func = NULL;
    }
    ;

    m_has_groupChr = false;

    if (m_groupChr)
    {
        delete m_groupChr;
        m_groupChr = NULL;
    }
    ;

    m_has_limLow = false;

    if (m_limLow)
    {
        delete m_limLow;
        m_limLow = NULL;
    }
    ;

    m_has_limUpp = false;

    if (m_limUpp)
    {
        delete m_limUpp;
        m_limUpp = NULL;
    }
    ;

    m_has_m = false;

    if (m_m)
    {
        delete m_m;
        m_m = NULL;
    }
    ;

    m_has_nary = false;

    if (m_nary)
    {
        delete m_nary;
        m_nary = NULL;
    }
    ;

    m_has_phant = false;

    if (m_phant)
    {
        delete m_phant;
        m_phant = NULL;
    }
    ;

    m_has_rad = false;

    if (m_rad)
    {
        delete m_rad;
        m_rad = NULL;
    }
    ;

    m_has_sPre = false;

    if (m_sPre)
    {
        delete m_sPre;
        m_sPre = NULL;
    }
    ;

    m_has_sSub = false;

    if (m_sSub)
    {
        delete m_sSub;
        m_sSub = NULL;
    }
    ;

    m_has_sSubSup = false;

    if (m_sSubSup)
    {
        delete m_sSubSup;
        m_sSubSup = NULL;
    }
    ;

    m_has_sSup = false;

    if (m_sSup)
    {
        delete m_sSup;
        m_sSup = NULL;
    }
    ;

    m_has_r = true;
    if (!m_r)
    {
        m_r = new CT_R();
    }
    return m_r;
}

const CT_R& CT_OMath::ChildGroup_1::get_r() const
{
    if (m_r)
    {
        return *m_r;
    }
    return CT_R::default_instance();
}


// CT_OMath::ChildGroup_2
CT_OMath::ChildGroup_2::ChildGroup_2()
    :m_has_w_customXml(false),
     m_w_customXml(NULL),
     m_has_w_fldSimple(false),
     m_w_fldSimple(NULL),
     m_has_w_hyperlink(false),
     m_w_hyperlink(NULL)
{
}
bool CT_OMath::ChildGroup_2::has_w_customXml() const
{
    return m_has_w_customXml;
}

ns_w::CT_CustomXmlRun* CT_OMath::ChildGroup_2::mutable_w_customXml()
{

    m_has_w_fldSimple = false;

    if (m_w_fldSimple)
    {
        delete m_w_fldSimple;
        m_w_fldSimple = NULL;
    }
    ;

    m_has_w_hyperlink = false;

    if (m_w_hyperlink)
    {
        delete m_w_hyperlink;
        m_w_hyperlink = NULL;
    }
    ;

    m_has_w_customXml = true;
    if (!m_w_customXml)
    {
        m_w_customXml = new ns_w::CT_CustomXmlRun();
    }
    return m_w_customXml;
}

const ns_w::CT_CustomXmlRun& CT_OMath::ChildGroup_2::get_w_customXml() const
{
    if (m_w_customXml)
    {
        return *m_w_customXml;
    }
    return ns_w::CT_CustomXmlRun::default_instance();
}

bool CT_OMath::ChildGroup_2::has_w_fldSimple() const
{
    return m_has_w_fldSimple;
}

ns_w::CT_SimpleField* CT_OMath::ChildGroup_2::mutable_w_fldSimple()
{

    m_has_w_customXml = false;

    if (m_w_customXml)
    {
        delete m_w_customXml;
        m_w_customXml = NULL;
    }
    ;

    m_has_w_hyperlink = false;

    if (m_w_hyperlink)
    {
        delete m_w_hyperlink;
        m_w_hyperlink = NULL;
    }
    ;

    m_has_w_fldSimple = true;
    if (!m_w_fldSimple)
    {
        m_w_fldSimple = new ns_w::CT_SimpleField();
    }
    return m_w_fldSimple;
}

const ns_w::CT_SimpleField& CT_OMath::ChildGroup_2::get_w_fldSimple() const
{
    if (m_w_fldSimple)
    {
        return *m_w_fldSimple;
    }
    return ns_w::CT_SimpleField::default_instance();
}

bool CT_OMath::ChildGroup_2::has_w_hyperlink() const
{
    return m_has_w_hyperlink;
}

ns_w::CT_Hyperlink* CT_OMath::ChildGroup_2::mutable_w_hyperlink()
{

    m_has_w_customXml = false;

    if (m_w_customXml)
    {
        delete m_w_customXml;
        m_w_customXml = NULL;
    }
    ;

    m_has_w_fldSimple = false;

    if (m_w_fldSimple)
    {
        delete m_w_fldSimple;
        m_w_fldSimple = NULL;
    }
    ;

    m_has_w_hyperlink = true;
    if (!m_w_hyperlink)
    {
        m_w_hyperlink = new ns_w::CT_Hyperlink();
    }
    return m_w_hyperlink;
}

const ns_w::CT_Hyperlink& CT_OMath::ChildGroup_2::get_w_hyperlink() const
{
    if (m_w_hyperlink)
    {
        return *m_w_hyperlink;
    }
    return ns_w::CT_Hyperlink::default_instance();
}


// CT_OMath::ChildGroup_3
CT_OMath::ChildGroup_3::ChildGroup_3()
    :m_has_w_smartTag(false),
     m_w_smartTag(NULL),
     m_has_w_sdt(false),
     m_w_sdt(NULL)
{
}
bool CT_OMath::ChildGroup_3::has_w_smartTag() const
{
    return m_has_w_smartTag;
}

ns_w::CT_SmartTagRun* CT_OMath::ChildGroup_3::mutable_w_smartTag()
{

    m_has_w_sdt = false;

    if (m_w_sdt)
    {
        delete m_w_sdt;
        m_w_sdt = NULL;
    }
    ;

    m_has_w_smartTag = true;
    if (!m_w_smartTag)
    {
        m_w_smartTag = new ns_w::CT_SmartTagRun();
    }
    return m_w_smartTag;
}

const ns_w::CT_SmartTagRun& CT_OMath::ChildGroup_3::get_w_smartTag() const
{
    if (m_w_smartTag)
    {
        return *m_w_smartTag;
    }
    return ns_w::CT_SmartTagRun::default_instance();
}

bool CT_OMath::ChildGroup_3::has_w_sdt() const
{
    return m_has_w_sdt;
}

ns_w::CT_SdtRun* CT_OMath::ChildGroup_3::mutable_w_sdt()
{

    m_has_w_smartTag = false;

    if (m_w_smartTag)
    {
        delete m_w_smartTag;
        m_w_smartTag = NULL;
    }
    ;

    m_has_w_sdt = true;
    if (!m_w_sdt)
    {
        m_w_sdt = new ns_w::CT_SdtRun();
    }
    return m_w_sdt;
}

const ns_w::CT_SdtRun& CT_OMath::ChildGroup_3::get_w_sdt() const
{
    if (m_w_sdt)
    {
        return *m_w_sdt;
    }
    return ns_w::CT_SdtRun::default_instance();
}


// CT_OMath::ChildGroup_4
CT_OMath::ChildGroup_4::ChildGroup_4()
    :m_has_w_proofErr(false),
     m_w_proofErr(NULL),
     m_has_w_permStart(false),
     m_w_permStart(NULL),
     m_has_w_permEnd(false),
     m_w_permEnd(NULL)
{
}
bool CT_OMath::ChildGroup_4::has_w_proofErr() const
{
    return m_has_w_proofErr;
}

ns_w::CT_ProofErr* CT_OMath::ChildGroup_4::mutable_w_proofErr()
{

    m_has_w_permStart = false;

    if (m_w_permStart)
    {
        delete m_w_permStart;
        m_w_permStart = NULL;
    }
    ;

    m_has_w_permEnd = false;

    if (m_w_permEnd)
    {
        delete m_w_permEnd;
        m_w_permEnd = NULL;
    }
    ;

    m_has_w_proofErr = true;
    if (!m_w_proofErr)
    {
        m_w_proofErr = new ns_w::CT_ProofErr();
    }
    return m_w_proofErr;
}

const ns_w::CT_ProofErr& CT_OMath::ChildGroup_4::get_w_proofErr() const
{
    if (m_w_proofErr)
    {
        return *m_w_proofErr;
    }
    return ns_w::CT_ProofErr::default_instance();
}

bool CT_OMath::ChildGroup_4::has_w_permStart() const
{
    return m_has_w_permStart;
}

ns_w::CT_PermStart* CT_OMath::ChildGroup_4::mutable_w_permStart()
{

    m_has_w_proofErr = false;

    if (m_w_proofErr)
    {
        delete m_w_proofErr;
        m_w_proofErr = NULL;
    }
    ;

    m_has_w_permEnd = false;

    if (m_w_permEnd)
    {
        delete m_w_permEnd;
        m_w_permEnd = NULL;
    }
    ;

    m_has_w_permStart = true;
    if (!m_w_permStart)
    {
        m_w_permStart = new ns_w::CT_PermStart();
    }
    return m_w_permStart;
}

const ns_w::CT_PermStart& CT_OMath::ChildGroup_4::get_w_permStart() const
{
    if (m_w_permStart)
    {
        return *m_w_permStart;
    }
    return ns_w::CT_PermStart::default_instance();
}

bool CT_OMath::ChildGroup_4::has_w_permEnd() const
{
    return m_has_w_permEnd;
}

ns_w::CT_Perm* CT_OMath::ChildGroup_4::mutable_w_permEnd()
{

    m_has_w_proofErr = false;

    if (m_w_proofErr)
    {
        delete m_w_proofErr;
        m_w_proofErr = NULL;
    }
    ;

    m_has_w_permStart = false;

    if (m_w_permStart)
    {
        delete m_w_permStart;
        m_w_permStart = NULL;
    }
    ;

    m_has_w_permEnd = true;
    if (!m_w_permEnd)
    {
        m_w_permEnd = new ns_w::CT_Perm();
    }
    return m_w_permEnd;
}

const ns_w::CT_Perm& CT_OMath::ChildGroup_4::get_w_permEnd() const
{
    if (m_w_permEnd)
    {
        return *m_w_permEnd;
    }
    return ns_w::CT_Perm::default_instance();
}


// CT_OMath::ChildGroup_5
CT_OMath::ChildGroup_5::ChildGroup_5()
    :m_has_w_bookmarkStart(false),
     m_w_bookmarkStart(NULL),
     m_has_w_bookmarkEnd(false),
     m_w_bookmarkEnd(NULL),
     m_has_w_moveFromRangeStart(false),
     m_w_moveFromRangeStart(NULL),
     m_has_w_moveFromRangeEnd(false),
     m_w_moveFromRangeEnd(NULL),
     m_has_w_moveToRangeStart(false),
     m_w_moveToRangeStart(NULL),
     m_has_w_moveToRangeEnd(false),
     m_w_moveToRangeEnd(NULL),
     m_has_w_commentRangeStart(false),
     m_w_commentRangeStart(NULL),
     m_has_w_commentRangeEnd(false),
     m_w_commentRangeEnd(NULL),
     m_has_w_customXmlInsRangeStart(false),
     m_w_customXmlInsRangeStart(NULL),
     m_has_w_customXmlInsRangeEnd(false),
     m_w_customXmlInsRangeEnd(NULL),
     m_has_w_customXmlDelRangeStart(false),
     m_w_customXmlDelRangeStart(NULL),
     m_has_w_customXmlDelRangeEnd(false),
     m_w_customXmlDelRangeEnd(NULL),
     m_has_w_customXmlMoveFromRangeStart(false),
     m_w_customXmlMoveFromRangeStart(NULL),
     m_has_w_customXmlMoveFromRangeEnd(false),
     m_w_customXmlMoveFromRangeEnd(NULL),
     m_has_w_customXmlMoveToRangeStart(false),
     m_w_customXmlMoveToRangeStart(NULL),
     m_has_w_customXmlMoveToRangeEnd(false),
     m_w_customXmlMoveToRangeEnd(NULL)
{
}
bool CT_OMath::ChildGroup_5::has_w_bookmarkStart() const
{
    return m_has_w_bookmarkStart;
}

ns_w::CT_Bookmark* CT_OMath::ChildGroup_5::mutable_w_bookmarkStart()
{

    m_has_w_bookmarkEnd = false;

    if (m_w_bookmarkEnd)
    {
        delete m_w_bookmarkEnd;
        m_w_bookmarkEnd = NULL;
    }
    ;

    m_has_w_moveFromRangeStart = false;

    if (m_w_moveFromRangeStart)
    {
        delete m_w_moveFromRangeStart;
        m_w_moveFromRangeStart = NULL;
    }
    ;

    m_has_w_moveFromRangeEnd = false;

    if (m_w_moveFromRangeEnd)
    {
        delete m_w_moveFromRangeEnd;
        m_w_moveFromRangeEnd = NULL;
    }
    ;

    m_has_w_moveToRangeStart = false;

    if (m_w_moveToRangeStart)
    {
        delete m_w_moveToRangeStart;
        m_w_moveToRangeStart = NULL;
    }
    ;

    m_has_w_moveToRangeEnd = false;

    if (m_w_moveToRangeEnd)
    {
        delete m_w_moveToRangeEnd;
        m_w_moveToRangeEnd = NULL;
    }
    ;

    m_has_w_commentRangeStart = false;

    if (m_w_commentRangeStart)
    {
        delete m_w_commentRangeStart;
        m_w_commentRangeStart = NULL;
    }
    ;

    m_has_w_commentRangeEnd = false;

    if (m_w_commentRangeEnd)
    {
        delete m_w_commentRangeEnd;
        m_w_commentRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlInsRangeStart = false;

    if (m_w_customXmlInsRangeStart)
    {
        delete m_w_customXmlInsRangeStart;
        m_w_customXmlInsRangeStart = NULL;
    }
    ;

    m_has_w_customXmlInsRangeEnd = false;

    if (m_w_customXmlInsRangeEnd)
    {
        delete m_w_customXmlInsRangeEnd;
        m_w_customXmlInsRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlDelRangeStart = false;

    if (m_w_customXmlDelRangeStart)
    {
        delete m_w_customXmlDelRangeStart;
        m_w_customXmlDelRangeStart = NULL;
    }
    ;

    m_has_w_customXmlDelRangeEnd = false;

    if (m_w_customXmlDelRangeEnd)
    {
        delete m_w_customXmlDelRangeEnd;
        m_w_customXmlDelRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlMoveFromRangeStart = false;

    if (m_w_customXmlMoveFromRangeStart)
    {
        delete m_w_customXmlMoveFromRangeStart;
        m_w_customXmlMoveFromRangeStart = NULL;
    }
    ;

    m_has_w_customXmlMoveFromRangeEnd = false;

    if (m_w_customXmlMoveFromRangeEnd)
    {
        delete m_w_customXmlMoveFromRangeEnd;
        m_w_customXmlMoveFromRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlMoveToRangeStart = false;

    if (m_w_customXmlMoveToRangeStart)
    {
        delete m_w_customXmlMoveToRangeStart;
        m_w_customXmlMoveToRangeStart = NULL;
    }
    ;

    m_has_w_customXmlMoveToRangeEnd = false;

    if (m_w_customXmlMoveToRangeEnd)
    {
        delete m_w_customXmlMoveToRangeEnd;
        m_w_customXmlMoveToRangeEnd = NULL;
    }
    ;

    m_has_w_bookmarkStart = true;
    if (!m_w_bookmarkStart)
    {
        m_w_bookmarkStart = new ns_w::CT_Bookmark();
    }
    return m_w_bookmarkStart;
}

const ns_w::CT_Bookmark& CT_OMath::ChildGroup_5::get_w_bookmarkStart() const
{
    if (m_w_bookmarkStart)
    {
        return *m_w_bookmarkStart;
    }
    return ns_w::CT_Bookmark::default_instance();
}

bool CT_OMath::ChildGroup_5::has_w_bookmarkEnd() const
{
    return m_has_w_bookmarkEnd;
}

ns_w::CT_MarkupRange* CT_OMath::ChildGroup_5::mutable_w_bookmarkEnd()
{

    m_has_w_bookmarkStart = false;

    if (m_w_bookmarkStart)
    {
        delete m_w_bookmarkStart;
        m_w_bookmarkStart = NULL;
    }
    ;

    m_has_w_moveFromRangeStart = false;

    if (m_w_moveFromRangeStart)
    {
        delete m_w_moveFromRangeStart;
        m_w_moveFromRangeStart = NULL;
    }
    ;

    m_has_w_moveFromRangeEnd = false;

    if (m_w_moveFromRangeEnd)
    {
        delete m_w_moveFromRangeEnd;
        m_w_moveFromRangeEnd = NULL;
    }
    ;

    m_has_w_moveToRangeStart = false;

    if (m_w_moveToRangeStart)
    {
        delete m_w_moveToRangeStart;
        m_w_moveToRangeStart = NULL;
    }
    ;

    m_has_w_moveToRangeEnd = false;

    if (m_w_moveToRangeEnd)
    {
        delete m_w_moveToRangeEnd;
        m_w_moveToRangeEnd = NULL;
    }
    ;

    m_has_w_commentRangeStart = false;

    if (m_w_commentRangeStart)
    {
        delete m_w_commentRangeStart;
        m_w_commentRangeStart = NULL;
    }
    ;

    m_has_w_commentRangeEnd = false;

    if (m_w_commentRangeEnd)
    {
        delete m_w_commentRangeEnd;
        m_w_commentRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlInsRangeStart = false;

    if (m_w_customXmlInsRangeStart)
    {
        delete m_w_customXmlInsRangeStart;
        m_w_customXmlInsRangeStart = NULL;
    }
    ;

    m_has_w_customXmlInsRangeEnd = false;

    if (m_w_customXmlInsRangeEnd)
    {
        delete m_w_customXmlInsRangeEnd;
        m_w_customXmlInsRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlDelRangeStart = false;

    if (m_w_customXmlDelRangeStart)
    {
        delete m_w_customXmlDelRangeStart;
        m_w_customXmlDelRangeStart = NULL;
    }
    ;

    m_has_w_customXmlDelRangeEnd = false;

    if (m_w_customXmlDelRangeEnd)
    {
        delete m_w_customXmlDelRangeEnd;
        m_w_customXmlDelRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlMoveFromRangeStart = false;

    if (m_w_customXmlMoveFromRangeStart)
    {
        delete m_w_customXmlMoveFromRangeStart;
        m_w_customXmlMoveFromRangeStart = NULL;
    }
    ;

    m_has_w_customXmlMoveFromRangeEnd = false;

    if (m_w_customXmlMoveFromRangeEnd)
    {
        delete m_w_customXmlMoveFromRangeEnd;
        m_w_customXmlMoveFromRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlMoveToRangeStart = false;

    if (m_w_customXmlMoveToRangeStart)
    {
        delete m_w_customXmlMoveToRangeStart;
        m_w_customXmlMoveToRangeStart = NULL;
    }
    ;

    m_has_w_customXmlMoveToRangeEnd = false;

    if (m_w_customXmlMoveToRangeEnd)
    {
        delete m_w_customXmlMoveToRangeEnd;
        m_w_customXmlMoveToRangeEnd = NULL;
    }
    ;

    m_has_w_bookmarkEnd = true;
    if (!m_w_bookmarkEnd)
    {
        m_w_bookmarkEnd = new ns_w::CT_MarkupRange();
    }
    return m_w_bookmarkEnd;
}

const ns_w::CT_MarkupRange& CT_OMath::ChildGroup_5::get_w_bookmarkEnd() const
{
    if (m_w_bookmarkEnd)
    {
        return *m_w_bookmarkEnd;
    }
    return ns_w::CT_MarkupRange::default_instance();
}

bool CT_OMath::ChildGroup_5::has_w_moveFromRangeStart() const
{
    return m_has_w_moveFromRangeStart;
}

ns_w::CT_MoveBookmark* CT_OMath::ChildGroup_5::mutable_w_moveFromRangeStart()
{

    m_has_w_bookmarkStart = false;

    if (m_w_bookmarkStart)
    {
        delete m_w_bookmarkStart;
        m_w_bookmarkStart = NULL;
    }
    ;

    m_has_w_bookmarkEnd = false;

    if (m_w_bookmarkEnd)
    {
        delete m_w_bookmarkEnd;
        m_w_bookmarkEnd = NULL;
    }
    ;

    m_has_w_moveFromRangeEnd = false;

    if (m_w_moveFromRangeEnd)
    {
        delete m_w_moveFromRangeEnd;
        m_w_moveFromRangeEnd = NULL;
    }
    ;

    m_has_w_moveToRangeStart = false;

    if (m_w_moveToRangeStart)
    {
        delete m_w_moveToRangeStart;
        m_w_moveToRangeStart = NULL;
    }
    ;

    m_has_w_moveToRangeEnd = false;

    if (m_w_moveToRangeEnd)
    {
        delete m_w_moveToRangeEnd;
        m_w_moveToRangeEnd = NULL;
    }
    ;

    m_has_w_commentRangeStart = false;

    if (m_w_commentRangeStart)
    {
        delete m_w_commentRangeStart;
        m_w_commentRangeStart = NULL;
    }
    ;

    m_has_w_commentRangeEnd = false;

    if (m_w_commentRangeEnd)
    {
        delete m_w_commentRangeEnd;
        m_w_commentRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlInsRangeStart = false;

    if (m_w_customXmlInsRangeStart)
    {
        delete m_w_customXmlInsRangeStart;
        m_w_customXmlInsRangeStart = NULL;
    }
    ;

    m_has_w_customXmlInsRangeEnd = false;

    if (m_w_customXmlInsRangeEnd)
    {
        delete m_w_customXmlInsRangeEnd;
        m_w_customXmlInsRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlDelRangeStart = false;

    if (m_w_customXmlDelRangeStart)
    {
        delete m_w_customXmlDelRangeStart;
        m_w_customXmlDelRangeStart = NULL;
    }
    ;

    m_has_w_customXmlDelRangeEnd = false;

    if (m_w_customXmlDelRangeEnd)
    {
        delete m_w_customXmlDelRangeEnd;
        m_w_customXmlDelRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlMoveFromRangeStart = false;

    if (m_w_customXmlMoveFromRangeStart)
    {
        delete m_w_customXmlMoveFromRangeStart;
        m_w_customXmlMoveFromRangeStart = NULL;
    }
    ;

    m_has_w_customXmlMoveFromRangeEnd = false;

    if (m_w_customXmlMoveFromRangeEnd)
    {
        delete m_w_customXmlMoveFromRangeEnd;
        m_w_customXmlMoveFromRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlMoveToRangeStart = false;

    if (m_w_customXmlMoveToRangeStart)
    {
        delete m_w_customXmlMoveToRangeStart;
        m_w_customXmlMoveToRangeStart = NULL;
    }
    ;

    m_has_w_customXmlMoveToRangeEnd = false;

    if (m_w_customXmlMoveToRangeEnd)
    {
        delete m_w_customXmlMoveToRangeEnd;
        m_w_customXmlMoveToRangeEnd = NULL;
    }
    ;

    m_has_w_moveFromRangeStart = true;
    if (!m_w_moveFromRangeStart)
    {
        m_w_moveFromRangeStart = new ns_w::CT_MoveBookmark();
    }
    return m_w_moveFromRangeStart;
}

const ns_w::CT_MoveBookmark& CT_OMath::ChildGroup_5::get_w_moveFromRangeStart() const
{
    if (m_w_moveFromRangeStart)
    {
        return *m_w_moveFromRangeStart;
    }
    return ns_w::CT_MoveBookmark::default_instance();
}

bool CT_OMath::ChildGroup_5::has_w_moveFromRangeEnd() const
{
    return m_has_w_moveFromRangeEnd;
}

ns_w::CT_MarkupRange* CT_OMath::ChildGroup_5::mutable_w_moveFromRangeEnd()
{

    m_has_w_bookmarkStart = false;

    if (m_w_bookmarkStart)
    {
        delete m_w_bookmarkStart;
        m_w_bookmarkStart = NULL;
    }
    ;

    m_has_w_bookmarkEnd = false;

    if (m_w_bookmarkEnd)
    {
        delete m_w_bookmarkEnd;
        m_w_bookmarkEnd = NULL;
    }
    ;

    m_has_w_moveFromRangeStart = false;

    if (m_w_moveFromRangeStart)
    {
        delete m_w_moveFromRangeStart;
        m_w_moveFromRangeStart = NULL;
    }
    ;

    m_has_w_moveToRangeStart = false;

    if (m_w_moveToRangeStart)
    {
        delete m_w_moveToRangeStart;
        m_w_moveToRangeStart = NULL;
    }
    ;

    m_has_w_moveToRangeEnd = false;

    if (m_w_moveToRangeEnd)
    {
        delete m_w_moveToRangeEnd;
        m_w_moveToRangeEnd = NULL;
    }
    ;

    m_has_w_commentRangeStart = false;

    if (m_w_commentRangeStart)
    {
        delete m_w_commentRangeStart;
        m_w_commentRangeStart = NULL;
    }
    ;

    m_has_w_commentRangeEnd = false;

    if (m_w_commentRangeEnd)
    {
        delete m_w_commentRangeEnd;
        m_w_commentRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlInsRangeStart = false;

    if (m_w_customXmlInsRangeStart)
    {
        delete m_w_customXmlInsRangeStart;
        m_w_customXmlInsRangeStart = NULL;
    }
    ;

    m_has_w_customXmlInsRangeEnd = false;

    if (m_w_customXmlInsRangeEnd)
    {
        delete m_w_customXmlInsRangeEnd;
        m_w_customXmlInsRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlDelRangeStart = false;

    if (m_w_customXmlDelRangeStart)
    {
        delete m_w_customXmlDelRangeStart;
        m_w_customXmlDelRangeStart = NULL;
    }
    ;

    m_has_w_customXmlDelRangeEnd = false;

    if (m_w_customXmlDelRangeEnd)
    {
        delete m_w_customXmlDelRangeEnd;
        m_w_customXmlDelRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlMoveFromRangeStart = false;

    if (m_w_customXmlMoveFromRangeStart)
    {
        delete m_w_customXmlMoveFromRangeStart;
        m_w_customXmlMoveFromRangeStart = NULL;
    }
    ;

    m_has_w_customXmlMoveFromRangeEnd = false;

    if (m_w_customXmlMoveFromRangeEnd)
    {
        delete m_w_customXmlMoveFromRangeEnd;
        m_w_customXmlMoveFromRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlMoveToRangeStart = false;

    if (m_w_customXmlMoveToRangeStart)
    {
        delete m_w_customXmlMoveToRangeStart;
        m_w_customXmlMoveToRangeStart = NULL;
    }
    ;

    m_has_w_customXmlMoveToRangeEnd = false;

    if (m_w_customXmlMoveToRangeEnd)
    {
        delete m_w_customXmlMoveToRangeEnd;
        m_w_customXmlMoveToRangeEnd = NULL;
    }
    ;

    m_has_w_moveFromRangeEnd = true;
    if (!m_w_moveFromRangeEnd)
    {
        m_w_moveFromRangeEnd = new ns_w::CT_MarkupRange();
    }
    return m_w_moveFromRangeEnd;
}

const ns_w::CT_MarkupRange& CT_OMath::ChildGroup_5::get_w_moveFromRangeEnd() const
{
    if (m_w_moveFromRangeEnd)
    {
        return *m_w_moveFromRangeEnd;
    }
    return ns_w::CT_MarkupRange::default_instance();
}

bool CT_OMath::ChildGroup_5::has_w_moveToRangeStart() const
{
    return m_has_w_moveToRangeStart;
}

ns_w::CT_MoveBookmark* CT_OMath::ChildGroup_5::mutable_w_moveToRangeStart()
{

    m_has_w_bookmarkStart = false;

    if (m_w_bookmarkStart)
    {
        delete m_w_bookmarkStart;
        m_w_bookmarkStart = NULL;
    }
    ;

    m_has_w_bookmarkEnd = false;

    if (m_w_bookmarkEnd)
    {
        delete m_w_bookmarkEnd;
        m_w_bookmarkEnd = NULL;
    }
    ;

    m_has_w_moveFromRangeStart = false;

    if (m_w_moveFromRangeStart)
    {
        delete m_w_moveFromRangeStart;
        m_w_moveFromRangeStart = NULL;
    }
    ;

    m_has_w_moveFromRangeEnd = false;

    if (m_w_moveFromRangeEnd)
    {
        delete m_w_moveFromRangeEnd;
        m_w_moveFromRangeEnd = NULL;
    }
    ;

    m_has_w_moveToRangeEnd = false;

    if (m_w_moveToRangeEnd)
    {
        delete m_w_moveToRangeEnd;
        m_w_moveToRangeEnd = NULL;
    }
    ;

    m_has_w_commentRangeStart = false;

    if (m_w_commentRangeStart)
    {
        delete m_w_commentRangeStart;
        m_w_commentRangeStart = NULL;
    }
    ;

    m_has_w_commentRangeEnd = false;

    if (m_w_commentRangeEnd)
    {
        delete m_w_commentRangeEnd;
        m_w_commentRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlInsRangeStart = false;

    if (m_w_customXmlInsRangeStart)
    {
        delete m_w_customXmlInsRangeStart;
        m_w_customXmlInsRangeStart = NULL;
    }
    ;

    m_has_w_customXmlInsRangeEnd = false;

    if (m_w_customXmlInsRangeEnd)
    {
        delete m_w_customXmlInsRangeEnd;
        m_w_customXmlInsRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlDelRangeStart = false;

    if (m_w_customXmlDelRangeStart)
    {
        delete m_w_customXmlDelRangeStart;
        m_w_customXmlDelRangeStart = NULL;
    }
    ;

    m_has_w_customXmlDelRangeEnd = false;

    if (m_w_customXmlDelRangeEnd)
    {
        delete m_w_customXmlDelRangeEnd;
        m_w_customXmlDelRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlMoveFromRangeStart = false;

    if (m_w_customXmlMoveFromRangeStart)
    {
        delete m_w_customXmlMoveFromRangeStart;
        m_w_customXmlMoveFromRangeStart = NULL;
    }
    ;

    m_has_w_customXmlMoveFromRangeEnd = false;

    if (m_w_customXmlMoveFromRangeEnd)
    {
        delete m_w_customXmlMoveFromRangeEnd;
        m_w_customXmlMoveFromRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlMoveToRangeStart = false;

    if (m_w_customXmlMoveToRangeStart)
    {
        delete m_w_customXmlMoveToRangeStart;
        m_w_customXmlMoveToRangeStart = NULL;
    }
    ;

    m_has_w_customXmlMoveToRangeEnd = false;

    if (m_w_customXmlMoveToRangeEnd)
    {
        delete m_w_customXmlMoveToRangeEnd;
        m_w_customXmlMoveToRangeEnd = NULL;
    }
    ;

    m_has_w_moveToRangeStart = true;
    if (!m_w_moveToRangeStart)
    {
        m_w_moveToRangeStart = new ns_w::CT_MoveBookmark();
    }
    return m_w_moveToRangeStart;
}

const ns_w::CT_MoveBookmark& CT_OMath::ChildGroup_5::get_w_moveToRangeStart() const
{
    if (m_w_moveToRangeStart)
    {
        return *m_w_moveToRangeStart;
    }
    return ns_w::CT_MoveBookmark::default_instance();
}

bool CT_OMath::ChildGroup_5::has_w_moveToRangeEnd() const
{
    return m_has_w_moveToRangeEnd;
}

ns_w::CT_MarkupRange* CT_OMath::ChildGroup_5::mutable_w_moveToRangeEnd()
{

    m_has_w_bookmarkStart = false;

    if (m_w_bookmarkStart)
    {
        delete m_w_bookmarkStart;
        m_w_bookmarkStart = NULL;
    }
    ;

    m_has_w_bookmarkEnd = false;

    if (m_w_bookmarkEnd)
    {
        delete m_w_bookmarkEnd;
        m_w_bookmarkEnd = NULL;
    }
    ;

    m_has_w_moveFromRangeStart = false;

    if (m_w_moveFromRangeStart)
    {
        delete m_w_moveFromRangeStart;
        m_w_moveFromRangeStart = NULL;
    }
    ;

    m_has_w_moveFromRangeEnd = false;

    if (m_w_moveFromRangeEnd)
    {
        delete m_w_moveFromRangeEnd;
        m_w_moveFromRangeEnd = NULL;
    }
    ;

    m_has_w_moveToRangeStart = false;

    if (m_w_moveToRangeStart)
    {
        delete m_w_moveToRangeStart;
        m_w_moveToRangeStart = NULL;
    }
    ;

    m_has_w_commentRangeStart = false;

    if (m_w_commentRangeStart)
    {
        delete m_w_commentRangeStart;
        m_w_commentRangeStart = NULL;
    }
    ;

    m_has_w_commentRangeEnd = false;

    if (m_w_commentRangeEnd)
    {
        delete m_w_commentRangeEnd;
        m_w_commentRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlInsRangeStart = false;

    if (m_w_customXmlInsRangeStart)
    {
        delete m_w_customXmlInsRangeStart;
        m_w_customXmlInsRangeStart = NULL;
    }
    ;

    m_has_w_customXmlInsRangeEnd = false;

    if (m_w_customXmlInsRangeEnd)
    {
        delete m_w_customXmlInsRangeEnd;
        m_w_customXmlInsRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlDelRangeStart = false;

    if (m_w_customXmlDelRangeStart)
    {
        delete m_w_customXmlDelRangeStart;
        m_w_customXmlDelRangeStart = NULL;
    }
    ;

    m_has_w_customXmlDelRangeEnd = false;

    if (m_w_customXmlDelRangeEnd)
    {
        delete m_w_customXmlDelRangeEnd;
        m_w_customXmlDelRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlMoveFromRangeStart = false;

    if (m_w_customXmlMoveFromRangeStart)
    {
        delete m_w_customXmlMoveFromRangeStart;
        m_w_customXmlMoveFromRangeStart = NULL;
    }
    ;

    m_has_w_customXmlMoveFromRangeEnd = false;

    if (m_w_customXmlMoveFromRangeEnd)
    {
        delete m_w_customXmlMoveFromRangeEnd;
        m_w_customXmlMoveFromRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlMoveToRangeStart = false;

    if (m_w_customXmlMoveToRangeStart)
    {
        delete m_w_customXmlMoveToRangeStart;
        m_w_customXmlMoveToRangeStart = NULL;
    }
    ;

    m_has_w_customXmlMoveToRangeEnd = false;

    if (m_w_customXmlMoveToRangeEnd)
    {
        delete m_w_customXmlMoveToRangeEnd;
        m_w_customXmlMoveToRangeEnd = NULL;
    }
    ;

    m_has_w_moveToRangeEnd = true;
    if (!m_w_moveToRangeEnd)
    {
        m_w_moveToRangeEnd = new ns_w::CT_MarkupRange();
    }
    return m_w_moveToRangeEnd;
}

const ns_w::CT_MarkupRange& CT_OMath::ChildGroup_5::get_w_moveToRangeEnd() const
{
    if (m_w_moveToRangeEnd)
    {
        return *m_w_moveToRangeEnd;
    }
    return ns_w::CT_MarkupRange::default_instance();
}

bool CT_OMath::ChildGroup_5::has_w_commentRangeStart() const
{
    return m_has_w_commentRangeStart;
}

ns_w::CT_MarkupRange* CT_OMath::ChildGroup_5::mutable_w_commentRangeStart()
{

    m_has_w_bookmarkStart = false;

    if (m_w_bookmarkStart)
    {
        delete m_w_bookmarkStart;
        m_w_bookmarkStart = NULL;
    }
    ;

    m_has_w_bookmarkEnd = false;

    if (m_w_bookmarkEnd)
    {
        delete m_w_bookmarkEnd;
        m_w_bookmarkEnd = NULL;
    }
    ;

    m_has_w_moveFromRangeStart = false;

    if (m_w_moveFromRangeStart)
    {
        delete m_w_moveFromRangeStart;
        m_w_moveFromRangeStart = NULL;
    }
    ;

    m_has_w_moveFromRangeEnd = false;

    if (m_w_moveFromRangeEnd)
    {
        delete m_w_moveFromRangeEnd;
        m_w_moveFromRangeEnd = NULL;
    }
    ;

    m_has_w_moveToRangeStart = false;

    if (m_w_moveToRangeStart)
    {
        delete m_w_moveToRangeStart;
        m_w_moveToRangeStart = NULL;
    }
    ;

    m_has_w_moveToRangeEnd = false;

    if (m_w_moveToRangeEnd)
    {
        delete m_w_moveToRangeEnd;
        m_w_moveToRangeEnd = NULL;
    }
    ;

    m_has_w_commentRangeEnd = false;

    if (m_w_commentRangeEnd)
    {
        delete m_w_commentRangeEnd;
        m_w_commentRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlInsRangeStart = false;

    if (m_w_customXmlInsRangeStart)
    {
        delete m_w_customXmlInsRangeStart;
        m_w_customXmlInsRangeStart = NULL;
    }
    ;

    m_has_w_customXmlInsRangeEnd = false;

    if (m_w_customXmlInsRangeEnd)
    {
        delete m_w_customXmlInsRangeEnd;
        m_w_customXmlInsRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlDelRangeStart = false;

    if (m_w_customXmlDelRangeStart)
    {
        delete m_w_customXmlDelRangeStart;
        m_w_customXmlDelRangeStart = NULL;
    }
    ;

    m_has_w_customXmlDelRangeEnd = false;

    if (m_w_customXmlDelRangeEnd)
    {
        delete m_w_customXmlDelRangeEnd;
        m_w_customXmlDelRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlMoveFromRangeStart = false;

    if (m_w_customXmlMoveFromRangeStart)
    {
        delete m_w_customXmlMoveFromRangeStart;
        m_w_customXmlMoveFromRangeStart = NULL;
    }
    ;

    m_has_w_customXmlMoveFromRangeEnd = false;

    if (m_w_customXmlMoveFromRangeEnd)
    {
        delete m_w_customXmlMoveFromRangeEnd;
        m_w_customXmlMoveFromRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlMoveToRangeStart = false;

    if (m_w_customXmlMoveToRangeStart)
    {
        delete m_w_customXmlMoveToRangeStart;
        m_w_customXmlMoveToRangeStart = NULL;
    }
    ;

    m_has_w_customXmlMoveToRangeEnd = false;

    if (m_w_customXmlMoveToRangeEnd)
    {
        delete m_w_customXmlMoveToRangeEnd;
        m_w_customXmlMoveToRangeEnd = NULL;
    }
    ;

    m_has_w_commentRangeStart = true;
    if (!m_w_commentRangeStart)
    {
        m_w_commentRangeStart = new ns_w::CT_MarkupRange();
    }
    return m_w_commentRangeStart;
}

const ns_w::CT_MarkupRange& CT_OMath::ChildGroup_5::get_w_commentRangeStart() const
{
    if (m_w_commentRangeStart)
    {
        return *m_w_commentRangeStart;
    }
    return ns_w::CT_MarkupRange::default_instance();
}

bool CT_OMath::ChildGroup_5::has_w_commentRangeEnd() const
{
    return m_has_w_commentRangeEnd;
}

ns_w::CT_MarkupRange* CT_OMath::ChildGroup_5::mutable_w_commentRangeEnd()
{

    m_has_w_bookmarkStart = false;

    if (m_w_bookmarkStart)
    {
        delete m_w_bookmarkStart;
        m_w_bookmarkStart = NULL;
    }
    ;

    m_has_w_bookmarkEnd = false;

    if (m_w_bookmarkEnd)
    {
        delete m_w_bookmarkEnd;
        m_w_bookmarkEnd = NULL;
    }
    ;

    m_has_w_moveFromRangeStart = false;

    if (m_w_moveFromRangeStart)
    {
        delete m_w_moveFromRangeStart;
        m_w_moveFromRangeStart = NULL;
    }
    ;

    m_has_w_moveFromRangeEnd = false;

    if (m_w_moveFromRangeEnd)
    {
        delete m_w_moveFromRangeEnd;
        m_w_moveFromRangeEnd = NULL;
    }
    ;

    m_has_w_moveToRangeStart = false;

    if (m_w_moveToRangeStart)
    {
        delete m_w_moveToRangeStart;
        m_w_moveToRangeStart = NULL;
    }
    ;

    m_has_w_moveToRangeEnd = false;

    if (m_w_moveToRangeEnd)
    {
        delete m_w_moveToRangeEnd;
        m_w_moveToRangeEnd = NULL;
    }
    ;

    m_has_w_commentRangeStart = false;

    if (m_w_commentRangeStart)
    {
        delete m_w_commentRangeStart;
        m_w_commentRangeStart = NULL;
    }
    ;

    m_has_w_customXmlInsRangeStart = false;

    if (m_w_customXmlInsRangeStart)
    {
        delete m_w_customXmlInsRangeStart;
        m_w_customXmlInsRangeStart = NULL;
    }
    ;

    m_has_w_customXmlInsRangeEnd = false;

    if (m_w_customXmlInsRangeEnd)
    {
        delete m_w_customXmlInsRangeEnd;
        m_w_customXmlInsRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlDelRangeStart = false;

    if (m_w_customXmlDelRangeStart)
    {
        delete m_w_customXmlDelRangeStart;
        m_w_customXmlDelRangeStart = NULL;
    }
    ;

    m_has_w_customXmlDelRangeEnd = false;

    if (m_w_customXmlDelRangeEnd)
    {
        delete m_w_customXmlDelRangeEnd;
        m_w_customXmlDelRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlMoveFromRangeStart = false;

    if (m_w_customXmlMoveFromRangeStart)
    {
        delete m_w_customXmlMoveFromRangeStart;
        m_w_customXmlMoveFromRangeStart = NULL;
    }
    ;

    m_has_w_customXmlMoveFromRangeEnd = false;

    if (m_w_customXmlMoveFromRangeEnd)
    {
        delete m_w_customXmlMoveFromRangeEnd;
        m_w_customXmlMoveFromRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlMoveToRangeStart = false;

    if (m_w_customXmlMoveToRangeStart)
    {
        delete m_w_customXmlMoveToRangeStart;
        m_w_customXmlMoveToRangeStart = NULL;
    }
    ;

    m_has_w_customXmlMoveToRangeEnd = false;

    if (m_w_customXmlMoveToRangeEnd)
    {
        delete m_w_customXmlMoveToRangeEnd;
        m_w_customXmlMoveToRangeEnd = NULL;
    }
    ;

    m_has_w_commentRangeEnd = true;
    if (!m_w_commentRangeEnd)
    {
        m_w_commentRangeEnd = new ns_w::CT_MarkupRange();
    }
    return m_w_commentRangeEnd;
}

const ns_w::CT_MarkupRange& CT_OMath::ChildGroup_5::get_w_commentRangeEnd() const
{
    if (m_w_commentRangeEnd)
    {
        return *m_w_commentRangeEnd;
    }
    return ns_w::CT_MarkupRange::default_instance();
}

bool CT_OMath::ChildGroup_5::has_w_customXmlInsRangeStart() const
{
    return m_has_w_customXmlInsRangeStart;
}

ns_w::CT_TrackChange* CT_OMath::ChildGroup_5::mutable_w_customXmlInsRangeStart()
{

    m_has_w_bookmarkStart = false;

    if (m_w_bookmarkStart)
    {
        delete m_w_bookmarkStart;
        m_w_bookmarkStart = NULL;
    }
    ;

    m_has_w_bookmarkEnd = false;

    if (m_w_bookmarkEnd)
    {
        delete m_w_bookmarkEnd;
        m_w_bookmarkEnd = NULL;
    }
    ;

    m_has_w_moveFromRangeStart = false;

    if (m_w_moveFromRangeStart)
    {
        delete m_w_moveFromRangeStart;
        m_w_moveFromRangeStart = NULL;
    }
    ;

    m_has_w_moveFromRangeEnd = false;

    if (m_w_moveFromRangeEnd)
    {
        delete m_w_moveFromRangeEnd;
        m_w_moveFromRangeEnd = NULL;
    }
    ;

    m_has_w_moveToRangeStart = false;

    if (m_w_moveToRangeStart)
    {
        delete m_w_moveToRangeStart;
        m_w_moveToRangeStart = NULL;
    }
    ;

    m_has_w_moveToRangeEnd = false;

    if (m_w_moveToRangeEnd)
    {
        delete m_w_moveToRangeEnd;
        m_w_moveToRangeEnd = NULL;
    }
    ;

    m_has_w_commentRangeStart = false;

    if (m_w_commentRangeStart)
    {
        delete m_w_commentRangeStart;
        m_w_commentRangeStart = NULL;
    }
    ;

    m_has_w_commentRangeEnd = false;

    if (m_w_commentRangeEnd)
    {
        delete m_w_commentRangeEnd;
        m_w_commentRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlInsRangeEnd = false;

    if (m_w_customXmlInsRangeEnd)
    {
        delete m_w_customXmlInsRangeEnd;
        m_w_customXmlInsRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlDelRangeStart = false;

    if (m_w_customXmlDelRangeStart)
    {
        delete m_w_customXmlDelRangeStart;
        m_w_customXmlDelRangeStart = NULL;
    }
    ;

    m_has_w_customXmlDelRangeEnd = false;

    if (m_w_customXmlDelRangeEnd)
    {
        delete m_w_customXmlDelRangeEnd;
        m_w_customXmlDelRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlMoveFromRangeStart = false;

    if (m_w_customXmlMoveFromRangeStart)
    {
        delete m_w_customXmlMoveFromRangeStart;
        m_w_customXmlMoveFromRangeStart = NULL;
    }
    ;

    m_has_w_customXmlMoveFromRangeEnd = false;

    if (m_w_customXmlMoveFromRangeEnd)
    {
        delete m_w_customXmlMoveFromRangeEnd;
        m_w_customXmlMoveFromRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlMoveToRangeStart = false;

    if (m_w_customXmlMoveToRangeStart)
    {
        delete m_w_customXmlMoveToRangeStart;
        m_w_customXmlMoveToRangeStart = NULL;
    }
    ;

    m_has_w_customXmlMoveToRangeEnd = false;

    if (m_w_customXmlMoveToRangeEnd)
    {
        delete m_w_customXmlMoveToRangeEnd;
        m_w_customXmlMoveToRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlInsRangeStart = true;
    if (!m_w_customXmlInsRangeStart)
    {
        m_w_customXmlInsRangeStart = new ns_w::CT_TrackChange();
    }
    return m_w_customXmlInsRangeStart;
}

const ns_w::CT_TrackChange& CT_OMath::ChildGroup_5::get_w_customXmlInsRangeStart() const
{
    if (m_w_customXmlInsRangeStart)
    {
        return *m_w_customXmlInsRangeStart;
    }
    return ns_w::CT_TrackChange::default_instance();
}

bool CT_OMath::ChildGroup_5::has_w_customXmlInsRangeEnd() const
{
    return m_has_w_customXmlInsRangeEnd;
}

ns_w::CT_Markup* CT_OMath::ChildGroup_5::mutable_w_customXmlInsRangeEnd()
{

    m_has_w_bookmarkStart = false;

    if (m_w_bookmarkStart)
    {
        delete m_w_bookmarkStart;
        m_w_bookmarkStart = NULL;
    }
    ;

    m_has_w_bookmarkEnd = false;

    if (m_w_bookmarkEnd)
    {
        delete m_w_bookmarkEnd;
        m_w_bookmarkEnd = NULL;
    }
    ;

    m_has_w_moveFromRangeStart = false;

    if (m_w_moveFromRangeStart)
    {
        delete m_w_moveFromRangeStart;
        m_w_moveFromRangeStart = NULL;
    }
    ;

    m_has_w_moveFromRangeEnd = false;

    if (m_w_moveFromRangeEnd)
    {
        delete m_w_moveFromRangeEnd;
        m_w_moveFromRangeEnd = NULL;
    }
    ;

    m_has_w_moveToRangeStart = false;

    if (m_w_moveToRangeStart)
    {
        delete m_w_moveToRangeStart;
        m_w_moveToRangeStart = NULL;
    }
    ;

    m_has_w_moveToRangeEnd = false;

    if (m_w_moveToRangeEnd)
    {
        delete m_w_moveToRangeEnd;
        m_w_moveToRangeEnd = NULL;
    }
    ;

    m_has_w_commentRangeStart = false;

    if (m_w_commentRangeStart)
    {
        delete m_w_commentRangeStart;
        m_w_commentRangeStart = NULL;
    }
    ;

    m_has_w_commentRangeEnd = false;

    if (m_w_commentRangeEnd)
    {
        delete m_w_commentRangeEnd;
        m_w_commentRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlInsRangeStart = false;

    if (m_w_customXmlInsRangeStart)
    {
        delete m_w_customXmlInsRangeStart;
        m_w_customXmlInsRangeStart = NULL;
    }
    ;

    m_has_w_customXmlDelRangeStart = false;

    if (m_w_customXmlDelRangeStart)
    {
        delete m_w_customXmlDelRangeStart;
        m_w_customXmlDelRangeStart = NULL;
    }
    ;

    m_has_w_customXmlDelRangeEnd = false;

    if (m_w_customXmlDelRangeEnd)
    {
        delete m_w_customXmlDelRangeEnd;
        m_w_customXmlDelRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlMoveFromRangeStart = false;

    if (m_w_customXmlMoveFromRangeStart)
    {
        delete m_w_customXmlMoveFromRangeStart;
        m_w_customXmlMoveFromRangeStart = NULL;
    }
    ;

    m_has_w_customXmlMoveFromRangeEnd = false;

    if (m_w_customXmlMoveFromRangeEnd)
    {
        delete m_w_customXmlMoveFromRangeEnd;
        m_w_customXmlMoveFromRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlMoveToRangeStart = false;

    if (m_w_customXmlMoveToRangeStart)
    {
        delete m_w_customXmlMoveToRangeStart;
        m_w_customXmlMoveToRangeStart = NULL;
    }
    ;

    m_has_w_customXmlMoveToRangeEnd = false;

    if (m_w_customXmlMoveToRangeEnd)
    {
        delete m_w_customXmlMoveToRangeEnd;
        m_w_customXmlMoveToRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlInsRangeEnd = true;
    if (!m_w_customXmlInsRangeEnd)
    {
        m_w_customXmlInsRangeEnd = new ns_w::CT_Markup();
    }
    return m_w_customXmlInsRangeEnd;
}

const ns_w::CT_Markup& CT_OMath::ChildGroup_5::get_w_customXmlInsRangeEnd() const
{
    if (m_w_customXmlInsRangeEnd)
    {
        return *m_w_customXmlInsRangeEnd;
    }
    return ns_w::CT_Markup::default_instance();
}

bool CT_OMath::ChildGroup_5::has_w_customXmlDelRangeStart() const
{
    return m_has_w_customXmlDelRangeStart;
}

ns_w::CT_TrackChange* CT_OMath::ChildGroup_5::mutable_w_customXmlDelRangeStart()
{

    m_has_w_bookmarkStart = false;

    if (m_w_bookmarkStart)
    {
        delete m_w_bookmarkStart;
        m_w_bookmarkStart = NULL;
    }
    ;

    m_has_w_bookmarkEnd = false;

    if (m_w_bookmarkEnd)
    {
        delete m_w_bookmarkEnd;
        m_w_bookmarkEnd = NULL;
    }
    ;

    m_has_w_moveFromRangeStart = false;

    if (m_w_moveFromRangeStart)
    {
        delete m_w_moveFromRangeStart;
        m_w_moveFromRangeStart = NULL;
    }
    ;

    m_has_w_moveFromRangeEnd = false;

    if (m_w_moveFromRangeEnd)
    {
        delete m_w_moveFromRangeEnd;
        m_w_moveFromRangeEnd = NULL;
    }
    ;

    m_has_w_moveToRangeStart = false;

    if (m_w_moveToRangeStart)
    {
        delete m_w_moveToRangeStart;
        m_w_moveToRangeStart = NULL;
    }
    ;

    m_has_w_moveToRangeEnd = false;

    if (m_w_moveToRangeEnd)
    {
        delete m_w_moveToRangeEnd;
        m_w_moveToRangeEnd = NULL;
    }
    ;

    m_has_w_commentRangeStart = false;

    if (m_w_commentRangeStart)
    {
        delete m_w_commentRangeStart;
        m_w_commentRangeStart = NULL;
    }
    ;

    m_has_w_commentRangeEnd = false;

    if (m_w_commentRangeEnd)
    {
        delete m_w_commentRangeEnd;
        m_w_commentRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlInsRangeStart = false;

    if (m_w_customXmlInsRangeStart)
    {
        delete m_w_customXmlInsRangeStart;
        m_w_customXmlInsRangeStart = NULL;
    }
    ;

    m_has_w_customXmlInsRangeEnd = false;

    if (m_w_customXmlInsRangeEnd)
    {
        delete m_w_customXmlInsRangeEnd;
        m_w_customXmlInsRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlDelRangeEnd = false;

    if (m_w_customXmlDelRangeEnd)
    {
        delete m_w_customXmlDelRangeEnd;
        m_w_customXmlDelRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlMoveFromRangeStart = false;

    if (m_w_customXmlMoveFromRangeStart)
    {
        delete m_w_customXmlMoveFromRangeStart;
        m_w_customXmlMoveFromRangeStart = NULL;
    }
    ;

    m_has_w_customXmlMoveFromRangeEnd = false;

    if (m_w_customXmlMoveFromRangeEnd)
    {
        delete m_w_customXmlMoveFromRangeEnd;
        m_w_customXmlMoveFromRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlMoveToRangeStart = false;

    if (m_w_customXmlMoveToRangeStart)
    {
        delete m_w_customXmlMoveToRangeStart;
        m_w_customXmlMoveToRangeStart = NULL;
    }
    ;

    m_has_w_customXmlMoveToRangeEnd = false;

    if (m_w_customXmlMoveToRangeEnd)
    {
        delete m_w_customXmlMoveToRangeEnd;
        m_w_customXmlMoveToRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlDelRangeStart = true;
    if (!m_w_customXmlDelRangeStart)
    {
        m_w_customXmlDelRangeStart = new ns_w::CT_TrackChange();
    }
    return m_w_customXmlDelRangeStart;
}

const ns_w::CT_TrackChange& CT_OMath::ChildGroup_5::get_w_customXmlDelRangeStart() const
{
    if (m_w_customXmlDelRangeStart)
    {
        return *m_w_customXmlDelRangeStart;
    }
    return ns_w::CT_TrackChange::default_instance();
}

bool CT_OMath::ChildGroup_5::has_w_customXmlDelRangeEnd() const
{
    return m_has_w_customXmlDelRangeEnd;
}

ns_w::CT_Markup* CT_OMath::ChildGroup_5::mutable_w_customXmlDelRangeEnd()
{

    m_has_w_bookmarkStart = false;

    if (m_w_bookmarkStart)
    {
        delete m_w_bookmarkStart;
        m_w_bookmarkStart = NULL;
    }
    ;

    m_has_w_bookmarkEnd = false;

    if (m_w_bookmarkEnd)
    {
        delete m_w_bookmarkEnd;
        m_w_bookmarkEnd = NULL;
    }
    ;

    m_has_w_moveFromRangeStart = false;

    if (m_w_moveFromRangeStart)
    {
        delete m_w_moveFromRangeStart;
        m_w_moveFromRangeStart = NULL;
    }
    ;

    m_has_w_moveFromRangeEnd = false;

    if (m_w_moveFromRangeEnd)
    {
        delete m_w_moveFromRangeEnd;
        m_w_moveFromRangeEnd = NULL;
    }
    ;

    m_has_w_moveToRangeStart = false;

    if (m_w_moveToRangeStart)
    {
        delete m_w_moveToRangeStart;
        m_w_moveToRangeStart = NULL;
    }
    ;

    m_has_w_moveToRangeEnd = false;

    if (m_w_moveToRangeEnd)
    {
        delete m_w_moveToRangeEnd;
        m_w_moveToRangeEnd = NULL;
    }
    ;

    m_has_w_commentRangeStart = false;

    if (m_w_commentRangeStart)
    {
        delete m_w_commentRangeStart;
        m_w_commentRangeStart = NULL;
    }
    ;

    m_has_w_commentRangeEnd = false;

    if (m_w_commentRangeEnd)
    {
        delete m_w_commentRangeEnd;
        m_w_commentRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlInsRangeStart = false;

    if (m_w_customXmlInsRangeStart)
    {
        delete m_w_customXmlInsRangeStart;
        m_w_customXmlInsRangeStart = NULL;
    }
    ;

    m_has_w_customXmlInsRangeEnd = false;

    if (m_w_customXmlInsRangeEnd)
    {
        delete m_w_customXmlInsRangeEnd;
        m_w_customXmlInsRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlDelRangeStart = false;

    if (m_w_customXmlDelRangeStart)
    {
        delete m_w_customXmlDelRangeStart;
        m_w_customXmlDelRangeStart = NULL;
    }
    ;

    m_has_w_customXmlMoveFromRangeStart = false;

    if (m_w_customXmlMoveFromRangeStart)
    {
        delete m_w_customXmlMoveFromRangeStart;
        m_w_customXmlMoveFromRangeStart = NULL;
    }
    ;

    m_has_w_customXmlMoveFromRangeEnd = false;

    if (m_w_customXmlMoveFromRangeEnd)
    {
        delete m_w_customXmlMoveFromRangeEnd;
        m_w_customXmlMoveFromRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlMoveToRangeStart = false;

    if (m_w_customXmlMoveToRangeStart)
    {
        delete m_w_customXmlMoveToRangeStart;
        m_w_customXmlMoveToRangeStart = NULL;
    }
    ;

    m_has_w_customXmlMoveToRangeEnd = false;

    if (m_w_customXmlMoveToRangeEnd)
    {
        delete m_w_customXmlMoveToRangeEnd;
        m_w_customXmlMoveToRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlDelRangeEnd = true;
    if (!m_w_customXmlDelRangeEnd)
    {
        m_w_customXmlDelRangeEnd = new ns_w::CT_Markup();
    }
    return m_w_customXmlDelRangeEnd;
}

const ns_w::CT_Markup& CT_OMath::ChildGroup_5::get_w_customXmlDelRangeEnd() const
{
    if (m_w_customXmlDelRangeEnd)
    {
        return *m_w_customXmlDelRangeEnd;
    }
    return ns_w::CT_Markup::default_instance();
}

bool CT_OMath::ChildGroup_5::has_w_customXmlMoveFromRangeStart() const
{
    return m_has_w_customXmlMoveFromRangeStart;
}

ns_w::CT_TrackChange* CT_OMath::ChildGroup_5::mutable_w_customXmlMoveFromRangeStart()
{

    m_has_w_bookmarkStart = false;

    if (m_w_bookmarkStart)
    {
        delete m_w_bookmarkStart;
        m_w_bookmarkStart = NULL;
    }
    ;

    m_has_w_bookmarkEnd = false;

    if (m_w_bookmarkEnd)
    {
        delete m_w_bookmarkEnd;
        m_w_bookmarkEnd = NULL;
    }
    ;

    m_has_w_moveFromRangeStart = false;

    if (m_w_moveFromRangeStart)
    {
        delete m_w_moveFromRangeStart;
        m_w_moveFromRangeStart = NULL;
    }
    ;

    m_has_w_moveFromRangeEnd = false;

    if (m_w_moveFromRangeEnd)
    {
        delete m_w_moveFromRangeEnd;
        m_w_moveFromRangeEnd = NULL;
    }
    ;

    m_has_w_moveToRangeStart = false;

    if (m_w_moveToRangeStart)
    {
        delete m_w_moveToRangeStart;
        m_w_moveToRangeStart = NULL;
    }
    ;

    m_has_w_moveToRangeEnd = false;

    if (m_w_moveToRangeEnd)
    {
        delete m_w_moveToRangeEnd;
        m_w_moveToRangeEnd = NULL;
    }
    ;

    m_has_w_commentRangeStart = false;

    if (m_w_commentRangeStart)
    {
        delete m_w_commentRangeStart;
        m_w_commentRangeStart = NULL;
    }
    ;

    m_has_w_commentRangeEnd = false;

    if (m_w_commentRangeEnd)
    {
        delete m_w_commentRangeEnd;
        m_w_commentRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlInsRangeStart = false;

    if (m_w_customXmlInsRangeStart)
    {
        delete m_w_customXmlInsRangeStart;
        m_w_customXmlInsRangeStart = NULL;
    }
    ;

    m_has_w_customXmlInsRangeEnd = false;

    if (m_w_customXmlInsRangeEnd)
    {
        delete m_w_customXmlInsRangeEnd;
        m_w_customXmlInsRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlDelRangeStart = false;

    if (m_w_customXmlDelRangeStart)
    {
        delete m_w_customXmlDelRangeStart;
        m_w_customXmlDelRangeStart = NULL;
    }
    ;

    m_has_w_customXmlDelRangeEnd = false;

    if (m_w_customXmlDelRangeEnd)
    {
        delete m_w_customXmlDelRangeEnd;
        m_w_customXmlDelRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlMoveFromRangeEnd = false;

    if (m_w_customXmlMoveFromRangeEnd)
    {
        delete m_w_customXmlMoveFromRangeEnd;
        m_w_customXmlMoveFromRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlMoveToRangeStart = false;

    if (m_w_customXmlMoveToRangeStart)
    {
        delete m_w_customXmlMoveToRangeStart;
        m_w_customXmlMoveToRangeStart = NULL;
    }
    ;

    m_has_w_customXmlMoveToRangeEnd = false;

    if (m_w_customXmlMoveToRangeEnd)
    {
        delete m_w_customXmlMoveToRangeEnd;
        m_w_customXmlMoveToRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlMoveFromRangeStart = true;
    if (!m_w_customXmlMoveFromRangeStart)
    {
        m_w_customXmlMoveFromRangeStart = new ns_w::CT_TrackChange();
    }
    return m_w_customXmlMoveFromRangeStart;
}

const ns_w::CT_TrackChange& CT_OMath::ChildGroup_5::get_w_customXmlMoveFromRangeStart() const
{
    if (m_w_customXmlMoveFromRangeStart)
    {
        return *m_w_customXmlMoveFromRangeStart;
    }
    return ns_w::CT_TrackChange::default_instance();
}

bool CT_OMath::ChildGroup_5::has_w_customXmlMoveFromRangeEnd() const
{
    return m_has_w_customXmlMoveFromRangeEnd;
}

ns_w::CT_Markup* CT_OMath::ChildGroup_5::mutable_w_customXmlMoveFromRangeEnd()
{

    m_has_w_bookmarkStart = false;

    if (m_w_bookmarkStart)
    {
        delete m_w_bookmarkStart;
        m_w_bookmarkStart = NULL;
    }
    ;

    m_has_w_bookmarkEnd = false;

    if (m_w_bookmarkEnd)
    {
        delete m_w_bookmarkEnd;
        m_w_bookmarkEnd = NULL;
    }
    ;

    m_has_w_moveFromRangeStart = false;

    if (m_w_moveFromRangeStart)
    {
        delete m_w_moveFromRangeStart;
        m_w_moveFromRangeStart = NULL;
    }
    ;

    m_has_w_moveFromRangeEnd = false;

    if (m_w_moveFromRangeEnd)
    {
        delete m_w_moveFromRangeEnd;
        m_w_moveFromRangeEnd = NULL;
    }
    ;

    m_has_w_moveToRangeStart = false;

    if (m_w_moveToRangeStart)
    {
        delete m_w_moveToRangeStart;
        m_w_moveToRangeStart = NULL;
    }
    ;

    m_has_w_moveToRangeEnd = false;

    if (m_w_moveToRangeEnd)
    {
        delete m_w_moveToRangeEnd;
        m_w_moveToRangeEnd = NULL;
    }
    ;

    m_has_w_commentRangeStart = false;

    if (m_w_commentRangeStart)
    {
        delete m_w_commentRangeStart;
        m_w_commentRangeStart = NULL;
    }
    ;

    m_has_w_commentRangeEnd = false;

    if (m_w_commentRangeEnd)
    {
        delete m_w_commentRangeEnd;
        m_w_commentRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlInsRangeStart = false;

    if (m_w_customXmlInsRangeStart)
    {
        delete m_w_customXmlInsRangeStart;
        m_w_customXmlInsRangeStart = NULL;
    }
    ;

    m_has_w_customXmlInsRangeEnd = false;

    if (m_w_customXmlInsRangeEnd)
    {
        delete m_w_customXmlInsRangeEnd;
        m_w_customXmlInsRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlDelRangeStart = false;

    if (m_w_customXmlDelRangeStart)
    {
        delete m_w_customXmlDelRangeStart;
        m_w_customXmlDelRangeStart = NULL;
    }
    ;

    m_has_w_customXmlDelRangeEnd = false;

    if (m_w_customXmlDelRangeEnd)
    {
        delete m_w_customXmlDelRangeEnd;
        m_w_customXmlDelRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlMoveFromRangeStart = false;

    if (m_w_customXmlMoveFromRangeStart)
    {
        delete m_w_customXmlMoveFromRangeStart;
        m_w_customXmlMoveFromRangeStart = NULL;
    }
    ;

    m_has_w_customXmlMoveToRangeStart = false;

    if (m_w_customXmlMoveToRangeStart)
    {
        delete m_w_customXmlMoveToRangeStart;
        m_w_customXmlMoveToRangeStart = NULL;
    }
    ;

    m_has_w_customXmlMoveToRangeEnd = false;

    if (m_w_customXmlMoveToRangeEnd)
    {
        delete m_w_customXmlMoveToRangeEnd;
        m_w_customXmlMoveToRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlMoveFromRangeEnd = true;
    if (!m_w_customXmlMoveFromRangeEnd)
    {
        m_w_customXmlMoveFromRangeEnd = new ns_w::CT_Markup();
    }
    return m_w_customXmlMoveFromRangeEnd;
}

const ns_w::CT_Markup& CT_OMath::ChildGroup_5::get_w_customXmlMoveFromRangeEnd() const
{
    if (m_w_customXmlMoveFromRangeEnd)
    {
        return *m_w_customXmlMoveFromRangeEnd;
    }
    return ns_w::CT_Markup::default_instance();
}

bool CT_OMath::ChildGroup_5::has_w_customXmlMoveToRangeStart() const
{
    return m_has_w_customXmlMoveToRangeStart;
}

ns_w::CT_TrackChange* CT_OMath::ChildGroup_5::mutable_w_customXmlMoveToRangeStart()
{

    m_has_w_bookmarkStart = false;

    if (m_w_bookmarkStart)
    {
        delete m_w_bookmarkStart;
        m_w_bookmarkStart = NULL;
    }
    ;

    m_has_w_bookmarkEnd = false;

    if (m_w_bookmarkEnd)
    {
        delete m_w_bookmarkEnd;
        m_w_bookmarkEnd = NULL;
    }
    ;

    m_has_w_moveFromRangeStart = false;

    if (m_w_moveFromRangeStart)
    {
        delete m_w_moveFromRangeStart;
        m_w_moveFromRangeStart = NULL;
    }
    ;

    m_has_w_moveFromRangeEnd = false;

    if (m_w_moveFromRangeEnd)
    {
        delete m_w_moveFromRangeEnd;
        m_w_moveFromRangeEnd = NULL;
    }
    ;

    m_has_w_moveToRangeStart = false;

    if (m_w_moveToRangeStart)
    {
        delete m_w_moveToRangeStart;
        m_w_moveToRangeStart = NULL;
    }
    ;

    m_has_w_moveToRangeEnd = false;

    if (m_w_moveToRangeEnd)
    {
        delete m_w_moveToRangeEnd;
        m_w_moveToRangeEnd = NULL;
    }
    ;

    m_has_w_commentRangeStart = false;

    if (m_w_commentRangeStart)
    {
        delete m_w_commentRangeStart;
        m_w_commentRangeStart = NULL;
    }
    ;

    m_has_w_commentRangeEnd = false;

    if (m_w_commentRangeEnd)
    {
        delete m_w_commentRangeEnd;
        m_w_commentRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlInsRangeStart = false;

    if (m_w_customXmlInsRangeStart)
    {
        delete m_w_customXmlInsRangeStart;
        m_w_customXmlInsRangeStart = NULL;
    }
    ;

    m_has_w_customXmlInsRangeEnd = false;

    if (m_w_customXmlInsRangeEnd)
    {
        delete m_w_customXmlInsRangeEnd;
        m_w_customXmlInsRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlDelRangeStart = false;

    if (m_w_customXmlDelRangeStart)
    {
        delete m_w_customXmlDelRangeStart;
        m_w_customXmlDelRangeStart = NULL;
    }
    ;

    m_has_w_customXmlDelRangeEnd = false;

    if (m_w_customXmlDelRangeEnd)
    {
        delete m_w_customXmlDelRangeEnd;
        m_w_customXmlDelRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlMoveFromRangeStart = false;

    if (m_w_customXmlMoveFromRangeStart)
    {
        delete m_w_customXmlMoveFromRangeStart;
        m_w_customXmlMoveFromRangeStart = NULL;
    }
    ;

    m_has_w_customXmlMoveFromRangeEnd = false;

    if (m_w_customXmlMoveFromRangeEnd)
    {
        delete m_w_customXmlMoveFromRangeEnd;
        m_w_customXmlMoveFromRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlMoveToRangeEnd = false;

    if (m_w_customXmlMoveToRangeEnd)
    {
        delete m_w_customXmlMoveToRangeEnd;
        m_w_customXmlMoveToRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlMoveToRangeStart = true;
    if (!m_w_customXmlMoveToRangeStart)
    {
        m_w_customXmlMoveToRangeStart = new ns_w::CT_TrackChange();
    }
    return m_w_customXmlMoveToRangeStart;
}

const ns_w::CT_TrackChange& CT_OMath::ChildGroup_5::get_w_customXmlMoveToRangeStart() const
{
    if (m_w_customXmlMoveToRangeStart)
    {
        return *m_w_customXmlMoveToRangeStart;
    }
    return ns_w::CT_TrackChange::default_instance();
}

bool CT_OMath::ChildGroup_5::has_w_customXmlMoveToRangeEnd() const
{
    return m_has_w_customXmlMoveToRangeEnd;
}

ns_w::CT_Markup* CT_OMath::ChildGroup_5::mutable_w_customXmlMoveToRangeEnd()
{

    m_has_w_bookmarkStart = false;

    if (m_w_bookmarkStart)
    {
        delete m_w_bookmarkStart;
        m_w_bookmarkStart = NULL;
    }
    ;

    m_has_w_bookmarkEnd = false;

    if (m_w_bookmarkEnd)
    {
        delete m_w_bookmarkEnd;
        m_w_bookmarkEnd = NULL;
    }
    ;

    m_has_w_moveFromRangeStart = false;

    if (m_w_moveFromRangeStart)
    {
        delete m_w_moveFromRangeStart;
        m_w_moveFromRangeStart = NULL;
    }
    ;

    m_has_w_moveFromRangeEnd = false;

    if (m_w_moveFromRangeEnd)
    {
        delete m_w_moveFromRangeEnd;
        m_w_moveFromRangeEnd = NULL;
    }
    ;

    m_has_w_moveToRangeStart = false;

    if (m_w_moveToRangeStart)
    {
        delete m_w_moveToRangeStart;
        m_w_moveToRangeStart = NULL;
    }
    ;

    m_has_w_moveToRangeEnd = false;

    if (m_w_moveToRangeEnd)
    {
        delete m_w_moveToRangeEnd;
        m_w_moveToRangeEnd = NULL;
    }
    ;

    m_has_w_commentRangeStart = false;

    if (m_w_commentRangeStart)
    {
        delete m_w_commentRangeStart;
        m_w_commentRangeStart = NULL;
    }
    ;

    m_has_w_commentRangeEnd = false;

    if (m_w_commentRangeEnd)
    {
        delete m_w_commentRangeEnd;
        m_w_commentRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlInsRangeStart = false;

    if (m_w_customXmlInsRangeStart)
    {
        delete m_w_customXmlInsRangeStart;
        m_w_customXmlInsRangeStart = NULL;
    }
    ;

    m_has_w_customXmlInsRangeEnd = false;

    if (m_w_customXmlInsRangeEnd)
    {
        delete m_w_customXmlInsRangeEnd;
        m_w_customXmlInsRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlDelRangeStart = false;

    if (m_w_customXmlDelRangeStart)
    {
        delete m_w_customXmlDelRangeStart;
        m_w_customXmlDelRangeStart = NULL;
    }
    ;

    m_has_w_customXmlDelRangeEnd = false;

    if (m_w_customXmlDelRangeEnd)
    {
        delete m_w_customXmlDelRangeEnd;
        m_w_customXmlDelRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlMoveFromRangeStart = false;

    if (m_w_customXmlMoveFromRangeStart)
    {
        delete m_w_customXmlMoveFromRangeStart;
        m_w_customXmlMoveFromRangeStart = NULL;
    }
    ;

    m_has_w_customXmlMoveFromRangeEnd = false;

    if (m_w_customXmlMoveFromRangeEnd)
    {
        delete m_w_customXmlMoveFromRangeEnd;
        m_w_customXmlMoveFromRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlMoveToRangeStart = false;

    if (m_w_customXmlMoveToRangeStart)
    {
        delete m_w_customXmlMoveToRangeStart;
        m_w_customXmlMoveToRangeStart = NULL;
    }
    ;

    m_has_w_customXmlMoveToRangeEnd = true;
    if (!m_w_customXmlMoveToRangeEnd)
    {
        m_w_customXmlMoveToRangeEnd = new ns_w::CT_Markup();
    }
    return m_w_customXmlMoveToRangeEnd;
}

const ns_w::CT_Markup& CT_OMath::ChildGroup_5::get_w_customXmlMoveToRangeEnd() const
{
    if (m_w_customXmlMoveToRangeEnd)
    {
        return *m_w_customXmlMoveToRangeEnd;
    }
    return ns_w::CT_Markup::default_instance();
}


// CT_OMath::ChildGroup_6
CT_OMath::ChildGroup_6::ChildGroup_6()
    :m_has_w_ins(false),
     m_w_ins(NULL),
     m_has_w_del(false),
     m_w_del(NULL),
     m_has_w_moveFrom(false),
     m_w_moveFrom(NULL),
     m_has_w_moveTo(false),
     m_w_moveTo(NULL)
{
}
bool CT_OMath::ChildGroup_6::has_w_ins() const
{
    return m_has_w_ins;
}

ns_w::CT_RunTrackChange* CT_OMath::ChildGroup_6::mutable_w_ins()
{

    m_has_w_del = false;

    if (m_w_del)
    {
        delete m_w_del;
        m_w_del = NULL;
    }
    ;

    m_has_w_moveFrom = false;

    if (m_w_moveFrom)
    {
        delete m_w_moveFrom;
        m_w_moveFrom = NULL;
    }
    ;

    m_has_w_moveTo = false;

    if (m_w_moveTo)
    {
        delete m_w_moveTo;
        m_w_moveTo = NULL;
    }
    ;

    m_has_w_ins = true;
    if (!m_w_ins)
    {
        m_w_ins = new ns_w::CT_RunTrackChange();
    }
    return m_w_ins;
}

const ns_w::CT_RunTrackChange& CT_OMath::ChildGroup_6::get_w_ins() const
{
    if (m_w_ins)
    {
        return *m_w_ins;
    }
    return ns_w::CT_RunTrackChange::default_instance();
}

bool CT_OMath::ChildGroup_6::has_w_del() const
{
    return m_has_w_del;
}

ns_w::CT_RunTrackChange* CT_OMath::ChildGroup_6::mutable_w_del()
{

    m_has_w_ins = false;

    if (m_w_ins)
    {
        delete m_w_ins;
        m_w_ins = NULL;
    }
    ;

    m_has_w_moveFrom = false;

    if (m_w_moveFrom)
    {
        delete m_w_moveFrom;
        m_w_moveFrom = NULL;
    }
    ;

    m_has_w_moveTo = false;

    if (m_w_moveTo)
    {
        delete m_w_moveTo;
        m_w_moveTo = NULL;
    }
    ;

    m_has_w_del = true;
    if (!m_w_del)
    {
        m_w_del = new ns_w::CT_RunTrackChange();
    }
    return m_w_del;
}

const ns_w::CT_RunTrackChange& CT_OMath::ChildGroup_6::get_w_del() const
{
    if (m_w_del)
    {
        return *m_w_del;
    }
    return ns_w::CT_RunTrackChange::default_instance();
}

bool CT_OMath::ChildGroup_6::has_w_moveFrom() const
{
    return m_has_w_moveFrom;
}

ns_w::CT_RunTrackChange* CT_OMath::ChildGroup_6::mutable_w_moveFrom()
{

    m_has_w_ins = false;

    if (m_w_ins)
    {
        delete m_w_ins;
        m_w_ins = NULL;
    }
    ;

    m_has_w_del = false;

    if (m_w_del)
    {
        delete m_w_del;
        m_w_del = NULL;
    }
    ;

    m_has_w_moveTo = false;

    if (m_w_moveTo)
    {
        delete m_w_moveTo;
        m_w_moveTo = NULL;
    }
    ;

    m_has_w_moveFrom = true;
    if (!m_w_moveFrom)
    {
        m_w_moveFrom = new ns_w::CT_RunTrackChange();
    }
    return m_w_moveFrom;
}

const ns_w::CT_RunTrackChange& CT_OMath::ChildGroup_6::get_w_moveFrom() const
{
    if (m_w_moveFrom)
    {
        return *m_w_moveFrom;
    }
    return ns_w::CT_RunTrackChange::default_instance();
}

bool CT_OMath::ChildGroup_6::has_w_moveTo() const
{
    return m_has_w_moveTo;
}

ns_w::CT_RunTrackChange* CT_OMath::ChildGroup_6::mutable_w_moveTo()
{

    m_has_w_ins = false;

    if (m_w_ins)
    {
        delete m_w_ins;
        m_w_ins = NULL;
    }
    ;

    m_has_w_del = false;

    if (m_w_del)
    {
        delete m_w_del;
        m_w_del = NULL;
    }
    ;

    m_has_w_moveFrom = false;

    if (m_w_moveFrom)
    {
        delete m_w_moveFrom;
        m_w_moveFrom = NULL;
    }
    ;

    m_has_w_moveTo = true;
    if (!m_w_moveTo)
    {
        m_w_moveTo = new ns_w::CT_RunTrackChange();
    }
    return m_w_moveTo;
}

const ns_w::CT_RunTrackChange& CT_OMath::ChildGroup_6::get_w_moveTo() const
{
    if (m_w_moveTo)
    {
        return *m_w_moveTo;
    }
    return ns_w::CT_RunTrackChange::default_instance();
}


// CT_OMath::ChildGroup_7
CT_OMath::ChildGroup_7::ChildGroup_7()
    :m_has_m_oMathPara(false),
     m_m_oMathPara(NULL),
     m_has_m_oMath(false),
     m_m_oMath(NULL)
{
}
bool CT_OMath::ChildGroup_7::has_m_oMathPara() const
{
    return m_has_m_oMathPara;
}

ns_m::CT_OMathPara* CT_OMath::ChildGroup_7::mutable_m_oMathPara()
{

    m_has_m_oMath = false;

    if (m_m_oMath)
    {
        delete m_m_oMath;
        m_m_oMath = NULL;
    }
    ;

    m_has_m_oMathPara = true;
    if (!m_m_oMathPara)
    {
        m_m_oMathPara = new ns_m::CT_OMathPara();
    }
    return m_m_oMathPara;
}

const ns_m::CT_OMathPara& CT_OMath::ChildGroup_7::get_m_oMathPara() const
{
    if (m_m_oMathPara)
    {
        return *m_m_oMathPara;
    }
    return ns_m::CT_OMathPara::default_instance();
}

bool CT_OMath::ChildGroup_7::has_m_oMath() const
{
    return m_has_m_oMath;
}

ns_m::CT_OMath* CT_OMath::ChildGroup_7::mutable_m_oMath()
{

    m_has_m_oMathPara = false;

    if (m_m_oMathPara)
    {
        delete m_m_oMathPara;
        m_m_oMathPara = NULL;
    }
    ;

    m_has_m_oMath = true;
    if (!m_m_oMath)
    {
        m_m_oMath = new ns_m::CT_OMath();
    }
    return m_m_oMath;
}

const ns_m::CT_OMath& CT_OMath::ChildGroup_7::get_m_oMath() const
{
    if (m_m_oMath)
    {
        return *m_m_oMath;
    }
    return ns_m::CT_OMath::default_instance();
}

CT_OMath* CT_OMath::default_instance_ = NULL;

// mathPr_element
mathPr_element::mathPr_element()
    :m_has_mathFont(false),
     m_mathFont(NULL),
     m_has_brkBin(false),
     m_brkBin(NULL),
     m_has_brkBinSub(false),
     m_brkBinSub(NULL),
     m_has_smallFrac(false),
     m_smallFrac(NULL),
     m_has_dispDef(false),
     m_dispDef(NULL),
     m_has_lMargin(false),
     m_lMargin(NULL),
     m_has_rMargin(false),
     m_rMargin(NULL),
     m_has_defJc(false),
     m_defJc(NULL),
     m_has_preSp(false),
     m_preSp(NULL),
     m_has_postSp(false),
     m_postSp(NULL),
     m_has_interSp(false),
     m_interSp(NULL),
     m_has_intraSp(false),
     m_intraSp(NULL),
     m_has_wrapIndent(false),
     m_wrapIndent(NULL),
     m_has_wrapRight(false),
     m_wrapRight(NULL),
     m_has_intLim(false),
     m_intLim(NULL),
     m_has_naryLim(false),
     m_naryLim(NULL)
{
}
mathPr_element::~mathPr_element()
{
    clear();
}
bool mathPr_element::has_mathFont() const
{
    return m_has_mathFont;
}

CT_String* mathPr_element::mutable_mathFont()
{
    m_has_mathFont = true;
    if (!m_mathFont)
    {
        m_mathFont = new CT_String();
    }
    return m_mathFont;
}

const CT_String& mathPr_element::get_mathFont() const
{
    if (m_mathFont)
    {
        return *m_mathFont;
    }
    return CT_String::default_instance();
}

bool mathPr_element::has_brkBin() const
{
    return m_has_brkBin;
}

CT_BreakBin* mathPr_element::mutable_brkBin()
{
    m_has_brkBin = true;
    if (!m_brkBin)
    {
        m_brkBin = new CT_BreakBin();
    }
    return m_brkBin;
}

const CT_BreakBin& mathPr_element::get_brkBin() const
{
    if (m_brkBin)
    {
        return *m_brkBin;
    }
    return CT_BreakBin::default_instance();
}

bool mathPr_element::has_brkBinSub() const
{
    return m_has_brkBinSub;
}

CT_BreakBinSub* mathPr_element::mutable_brkBinSub()
{
    m_has_brkBinSub = true;
    if (!m_brkBinSub)
    {
        m_brkBinSub = new CT_BreakBinSub();
    }
    return m_brkBinSub;
}

const CT_BreakBinSub& mathPr_element::get_brkBinSub() const
{
    if (m_brkBinSub)
    {
        return *m_brkBinSub;
    }
    return CT_BreakBinSub::default_instance();
}

bool mathPr_element::has_smallFrac() const
{
    return m_has_smallFrac;
}

CT_OnOff* mathPr_element::mutable_smallFrac()
{
    m_has_smallFrac = true;
    if (!m_smallFrac)
    {
        m_smallFrac = new CT_OnOff();
    }
    return m_smallFrac;
}

const CT_OnOff& mathPr_element::get_smallFrac() const
{
    if (m_smallFrac)
    {
        return *m_smallFrac;
    }
    return CT_OnOff::default_instance();
}

bool mathPr_element::has_dispDef() const
{
    return m_has_dispDef;
}

CT_OnOff* mathPr_element::mutable_dispDef()
{
    m_has_dispDef = true;
    if (!m_dispDef)
    {
        m_dispDef = new CT_OnOff();
    }
    return m_dispDef;
}

const CT_OnOff& mathPr_element::get_dispDef() const
{
    if (m_dispDef)
    {
        return *m_dispDef;
    }
    return CT_OnOff::default_instance();
}

bool mathPr_element::has_lMargin() const
{
    return m_has_lMargin;
}

CT_TwipsMeasure* mathPr_element::mutable_lMargin()
{
    m_has_lMargin = true;
    if (!m_lMargin)
    {
        m_lMargin = new CT_TwipsMeasure();
    }
    return m_lMargin;
}

const CT_TwipsMeasure& mathPr_element::get_lMargin() const
{
    if (m_lMargin)
    {
        return *m_lMargin;
    }
    return CT_TwipsMeasure::default_instance();
}

bool mathPr_element::has_rMargin() const
{
    return m_has_rMargin;
}

CT_TwipsMeasure* mathPr_element::mutable_rMargin()
{
    m_has_rMargin = true;
    if (!m_rMargin)
    {
        m_rMargin = new CT_TwipsMeasure();
    }
    return m_rMargin;
}

const CT_TwipsMeasure& mathPr_element::get_rMargin() const
{
    if (m_rMargin)
    {
        return *m_rMargin;
    }
    return CT_TwipsMeasure::default_instance();
}

bool mathPr_element::has_defJc() const
{
    return m_has_defJc;
}

CT_OMathJc* mathPr_element::mutable_defJc()
{
    m_has_defJc = true;
    if (!m_defJc)
    {
        m_defJc = new CT_OMathJc();
    }
    return m_defJc;
}

const CT_OMathJc& mathPr_element::get_defJc() const
{
    if (m_defJc)
    {
        return *m_defJc;
    }
    return CT_OMathJc::default_instance();
}

bool mathPr_element::has_preSp() const
{
    return m_has_preSp;
}

CT_TwipsMeasure* mathPr_element::mutable_preSp()
{
    m_has_preSp = true;
    if (!m_preSp)
    {
        m_preSp = new CT_TwipsMeasure();
    }
    return m_preSp;
}

const CT_TwipsMeasure& mathPr_element::get_preSp() const
{
    if (m_preSp)
    {
        return *m_preSp;
    }
    return CT_TwipsMeasure::default_instance();
}

bool mathPr_element::has_postSp() const
{
    return m_has_postSp;
}

CT_TwipsMeasure* mathPr_element::mutable_postSp()
{
    m_has_postSp = true;
    if (!m_postSp)
    {
        m_postSp = new CT_TwipsMeasure();
    }
    return m_postSp;
}

const CT_TwipsMeasure& mathPr_element::get_postSp() const
{
    if (m_postSp)
    {
        return *m_postSp;
    }
    return CT_TwipsMeasure::default_instance();
}

bool mathPr_element::has_interSp() const
{
    return m_has_interSp;
}

CT_TwipsMeasure* mathPr_element::mutable_interSp()
{
    m_has_interSp = true;
    if (!m_interSp)
    {
        m_interSp = new CT_TwipsMeasure();
    }
    return m_interSp;
}

const CT_TwipsMeasure& mathPr_element::get_interSp() const
{
    if (m_interSp)
    {
        return *m_interSp;
    }
    return CT_TwipsMeasure::default_instance();
}

bool mathPr_element::has_intraSp() const
{
    return m_has_intraSp;
}

CT_TwipsMeasure* mathPr_element::mutable_intraSp()
{
    m_has_intraSp = true;
    if (!m_intraSp)
    {
        m_intraSp = new CT_TwipsMeasure();
    }
    return m_intraSp;
}

const CT_TwipsMeasure& mathPr_element::get_intraSp() const
{
    if (m_intraSp)
    {
        return *m_intraSp;
    }
    return CT_TwipsMeasure::default_instance();
}

bool mathPr_element::has_wrapIndent() const
{
    return m_has_wrapIndent;
}

CT_TwipsMeasure* mathPr_element::mutable_wrapIndent()
{

    m_has_wrapRight = false;

    if (m_wrapRight)
    {
        delete m_wrapRight;
        m_wrapRight = NULL;
    }
    ;

    m_has_wrapIndent = true;
    if (!m_wrapIndent)
    {
        m_wrapIndent = new CT_TwipsMeasure();
    }
    return m_wrapIndent;
}

const CT_TwipsMeasure& mathPr_element::get_wrapIndent() const
{
    if (m_wrapIndent)
    {
        return *m_wrapIndent;
    }
    return CT_TwipsMeasure::default_instance();
}

bool mathPr_element::has_wrapRight() const
{
    return m_has_wrapRight;
}

CT_OnOff* mathPr_element::mutable_wrapRight()
{

    m_has_wrapIndent = false;

    if (m_wrapIndent)
    {
        delete m_wrapIndent;
        m_wrapIndent = NULL;
    }
    ;

    m_has_wrapRight = true;
    if (!m_wrapRight)
    {
        m_wrapRight = new CT_OnOff();
    }
    return m_wrapRight;
}

const CT_OnOff& mathPr_element::get_wrapRight() const
{
    if (m_wrapRight)
    {
        return *m_wrapRight;
    }
    return CT_OnOff::default_instance();
}

bool mathPr_element::has_intLim() const
{
    return m_has_intLim;
}

CT_LimLoc* mathPr_element::mutable_intLim()
{
    m_has_intLim = true;
    if (!m_intLim)
    {
        m_intLim = new CT_LimLoc();
    }
    return m_intLim;
}

const CT_LimLoc& mathPr_element::get_intLim() const
{
    if (m_intLim)
    {
        return *m_intLim;
    }
    return CT_LimLoc::default_instance();
}

bool mathPr_element::has_naryLim() const
{
    return m_has_naryLim;
}

CT_LimLoc* mathPr_element::mutable_naryLim()
{
    m_has_naryLim = true;
    if (!m_naryLim)
    {
        m_naryLim = new CT_LimLoc();
    }
    return m_naryLim;
}

const CT_LimLoc& mathPr_element::get_naryLim() const
{
    if (m_naryLim)
    {
        return *m_naryLim;
    }
    return CT_LimLoc::default_instance();
}

void mathPr_element::clear()
{
    m_has_mathFont = false;

    if (m_mathFont)
    {
        delete m_mathFont;
        m_mathFont = NULL;
    }


    m_has_brkBin = false;

    if (m_brkBin)
    {
        delete m_brkBin;
        m_brkBin = NULL;
    }


    m_has_brkBinSub = false;

    if (m_brkBinSub)
    {
        delete m_brkBinSub;
        m_brkBinSub = NULL;
    }


    m_has_smallFrac = false;

    if (m_smallFrac)
    {
        delete m_smallFrac;
        m_smallFrac = NULL;
    }


    m_has_dispDef = false;

    if (m_dispDef)
    {
        delete m_dispDef;
        m_dispDef = NULL;
    }


    m_has_lMargin = false;

    if (m_lMargin)
    {
        delete m_lMargin;
        m_lMargin = NULL;
    }


    m_has_rMargin = false;

    if (m_rMargin)
    {
        delete m_rMargin;
        m_rMargin = NULL;
    }


    m_has_defJc = false;

    if (m_defJc)
    {
        delete m_defJc;
        m_defJc = NULL;
    }


    m_has_preSp = false;

    if (m_preSp)
    {
        delete m_preSp;
        m_preSp = NULL;
    }


    m_has_postSp = false;

    if (m_postSp)
    {
        delete m_postSp;
        m_postSp = NULL;
    }


    m_has_interSp = false;

    if (m_interSp)
    {
        delete m_interSp;
        m_interSp = NULL;
    }


    m_has_intraSp = false;

    if (m_intraSp)
    {
        delete m_intraSp;
        m_intraSp = NULL;
    }


    m_has_wrapIndent = false;

    if (m_wrapIndent)
    {
        delete m_wrapIndent;
        m_wrapIndent = NULL;
    }


    m_has_wrapRight = false;

    if (m_wrapRight)
    {
        delete m_wrapRight;
        m_wrapRight = NULL;
    }


    m_has_intLim = false;

    if (m_intLim)
    {
        delete m_intLim;
        m_intLim = NULL;
    }


    m_has_naryLim = false;

    if (m_naryLim)
    {
        delete m_naryLim;
        m_naryLim = NULL;
    }

}

void mathPr_element::toXml(std::ostream& _outStream) const
{
    _outStream << "<m:mathPr";

    _outStream << " " << "xmlns:m=\"http://schemas.openxmlformats.org/officeDocument/2006/math\"";
    _outStream << " " << "xmlns:w=\"http://schemas.openxmlformats.org/wordprocessingml/2006/main\"";
    _outStream << " " << "xmlns:s=\"http://schemas.openxmlformats.org/officeDocument/2006/sharedTypes\"";

    _outStream << ">";


    if (m_has_mathFont)
    {
        m_mathFont->toXmlElem("m:mathFont", "", _outStream);
    }


    if (m_has_brkBin)
    {
        m_brkBin->toXmlElem("m:brkBin", "", _outStream);
    }


    if (m_has_brkBinSub)
    {
        m_brkBinSub->toXmlElem("m:brkBinSub", "", _outStream);
    }


    if (m_has_smallFrac)
    {
        m_smallFrac->toXmlElem("m:smallFrac", "", _outStream);
    }


    if (m_has_dispDef)
    {
        m_dispDef->toXmlElem("m:dispDef", "", _outStream);
    }


    if (m_has_lMargin)
    {
        m_lMargin->toXmlElem("m:lMargin", "", _outStream);
    }


    if (m_has_rMargin)
    {
        m_rMargin->toXmlElem("m:rMargin", "", _outStream);
    }


    if (m_has_defJc)
    {
        m_defJc->toXmlElem("m:defJc", "", _outStream);
    }


    if (m_has_preSp)
    {
        m_preSp->toXmlElem("m:preSp", "", _outStream);
    }


    if (m_has_postSp)
    {
        m_postSp->toXmlElem("m:postSp", "", _outStream);
    }


    if (m_has_interSp)
    {
        m_interSp->toXmlElem("m:interSp", "", _outStream);
    }


    if (m_has_intraSp)
    {
        m_intraSp->toXmlElem("m:intraSp", "", _outStream);
    }

    {
        bool elemHasValueList[2] = {m_has_wrapIndent, m_has_wrapRight};
        int cnt = count(elemHasValueList, elemHasValueList + 2, true);
        assert(cnt == 0 || cnt == 1);
    }


    if (m_has_wrapIndent)
    {
        m_wrapIndent->toXmlElem("m:wrapIndent", "", _outStream);
    }


    if (m_has_wrapRight)
    {
        m_wrapRight->toXmlElem("m:wrapRight", "", _outStream);
    }


    if (m_has_intLim)
    {
        m_intLim->toXmlElem("m:intLim", "", _outStream);
    }


    if (m_has_naryLim)
    {
        m_naryLim->toXmlElem("m:naryLim", "", _outStream);
    }

    _outStream << "</m:mathPr>";
}

const mathPr_element& mathPr_element::default_instance()
{
    if (!mathPr_element::default_instance_)
    {
        mathPr_element::default_instance_ = new mathPr_element();
    }
    return *mathPr_element::default_instance_;
}

mathPr_element* mathPr_element::default_instance_ = NULL;

// oMathPara_element
oMathPara_element::oMathPara_element()
    :m_has_oMathParaPr(false),
     m_oMathParaPr(NULL)
{
}
oMathPara_element::~oMathPara_element()
{
    clear();
}
bool oMathPara_element::has_oMathParaPr() const
{
    return m_has_oMathParaPr;
}

CT_OMathParaPr* oMathPara_element::mutable_oMathParaPr()
{
    m_has_oMathParaPr = true;
    if (!m_oMathParaPr)
    {
        m_oMathParaPr = new CT_OMathParaPr();
    }
    return m_oMathParaPr;
}

const CT_OMathParaPr& oMathPara_element::get_oMathParaPr() const
{
    if (m_oMathParaPr)
    {
        return *m_oMathParaPr;
    }
    return CT_OMathParaPr::default_instance();
}

CT_OMath* oMathPara_element::add_oMath()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_OMath* pNewChild = pChildGroup->mutable_oMath();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

void oMathPara_element::clear()
{
    m_has_oMathParaPr = false;

    if (m_oMathParaPr)
    {
        delete m_oMathParaPr;
        m_oMathParaPr = NULL;
    }


    {
        vector<ChildGroup_1*>::iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_1.clear();
    }
}

void oMathPara_element::toXml(std::ostream& _outStream) const
{
    _outStream << "<m:oMathPara";

    _outStream << " " << "xmlns:m=\"http://schemas.openxmlformats.org/officeDocument/2006/math\"";
    _outStream << " " << "xmlns:w=\"http://schemas.openxmlformats.org/wordprocessingml/2006/main\"";
    _outStream << " " << "xmlns:s=\"http://schemas.openxmlformats.org/officeDocument/2006/sharedTypes\"";

    _outStream << ">";


    if (m_has_oMathParaPr)
    {
        m_oMathParaPr->toXmlElem("m:oMathParaPr", "", _outStream);
    }

    {
        int childSize = count_if(m_childGroupList_1.begin(), m_childGroupList_1.end(), mem_fun(&ChildGroup_1::has_oMath));
        assert(1 <= childSize);
    }

    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_oMath())
            {
                (*iter)->get_oMath().toXmlElem("m:oMath", "", _outStream);
            }


        }
    }

    _outStream << "</m:oMathPara>";
}

const oMathPara_element& oMathPara_element::default_instance()
{
    if (!oMathPara_element::default_instance_)
    {
        oMathPara_element::default_instance_ = new oMathPara_element();
    }
    return *oMathPara_element::default_instance_;
}


// oMathPara_element::ChildGroup_1
oMathPara_element::ChildGroup_1::ChildGroup_1()
    :m_has_oMath(false),
     m_oMath(NULL)
{
}
bool oMathPara_element::ChildGroup_1::has_oMath() const
{
    return m_has_oMath;
}

CT_OMath* oMathPara_element::ChildGroup_1::mutable_oMath()
{

    m_has_oMath = true;
    if (!m_oMath)
    {
        m_oMath = new CT_OMath();
    }
    return m_oMath;
}

const CT_OMath& oMathPara_element::ChildGroup_1::get_oMath() const
{
    if (m_oMath)
    {
        return *m_oMath;
    }
    return CT_OMath::default_instance();
}

oMathPara_element* oMathPara_element::default_instance_ = NULL;

// oMath_element
oMath_element::oMath_element()

{
}
oMath_element::~oMath_element()
{
    clear();
}
CT_Acc* oMath_element::add_acc()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Acc* pNewChild = pChildGroup->mutable_acc();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

CT_Bar* oMath_element::add_bar()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Bar* pNewChild = pChildGroup->mutable_bar();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

CT_Box* oMath_element::add_box()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Box* pNewChild = pChildGroup->mutable_box();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

CT_BorderBox* oMath_element::add_borderBox()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_BorderBox* pNewChild = pChildGroup->mutable_borderBox();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

CT_D* oMath_element::add_d()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_D* pNewChild = pChildGroup->mutable_d();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

CT_EqArr* oMath_element::add_eqArr()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_EqArr* pNewChild = pChildGroup->mutable_eqArr();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

CT_F* oMath_element::add_f()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_F* pNewChild = pChildGroup->mutable_f();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

CT_Func* oMath_element::add_func()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Func* pNewChild = pChildGroup->mutable_func();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

CT_GroupChr* oMath_element::add_groupChr()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_GroupChr* pNewChild = pChildGroup->mutable_groupChr();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

CT_LimLow* oMath_element::add_limLow()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_LimLow* pNewChild = pChildGroup->mutable_limLow();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

CT_LimUpp* oMath_element::add_limUpp()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_LimUpp* pNewChild = pChildGroup->mutable_limUpp();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

CT_M* oMath_element::add_m()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_M* pNewChild = pChildGroup->mutable_m();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

CT_Nary* oMath_element::add_nary()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Nary* pNewChild = pChildGroup->mutable_nary();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

CT_Phant* oMath_element::add_phant()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Phant* pNewChild = pChildGroup->mutable_phant();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

CT_Rad* oMath_element::add_rad()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Rad* pNewChild = pChildGroup->mutable_rad();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

CT_SPre* oMath_element::add_sPre()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_SPre* pNewChild = pChildGroup->mutable_sPre();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

CT_SSub* oMath_element::add_sSub()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_SSub* pNewChild = pChildGroup->mutable_sSub();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

CT_SSubSup* oMath_element::add_sSubSup()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_SSubSup* pNewChild = pChildGroup->mutable_sSubSup();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

CT_SSup* oMath_element::add_sSup()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_SSup* pNewChild = pChildGroup->mutable_sSup();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

CT_R* oMath_element::add_r()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_R* pNewChild = pChildGroup->mutable_r();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

ns_w::CT_CustomXmlRun* oMath_element::add_w_customXml()
{
    ChildGroup_2 *pChildGroup = new ChildGroup_2();
    ns_w::CT_CustomXmlRun* pNewChild = pChildGroup->mutable_w_customXml();
    m_childGroupList_2.push_back(pChildGroup);
    return pNewChild;
}

ns_w::CT_SimpleField* oMath_element::add_w_fldSimple()
{
    ChildGroup_2 *pChildGroup = new ChildGroup_2();
    ns_w::CT_SimpleField* pNewChild = pChildGroup->mutable_w_fldSimple();
    m_childGroupList_2.push_back(pChildGroup);
    return pNewChild;
}

ns_w::CT_Hyperlink* oMath_element::add_w_hyperlink()
{
    ChildGroup_2 *pChildGroup = new ChildGroup_2();
    ns_w::CT_Hyperlink* pNewChild = pChildGroup->mutable_w_hyperlink();
    m_childGroupList_2.push_back(pChildGroup);
    return pNewChild;
}

ns_w::CT_SmartTagRun* oMath_element::add_w_smartTag()
{
    ChildGroup_3 *pChildGroup = new ChildGroup_3();
    ns_w::CT_SmartTagRun* pNewChild = pChildGroup->mutable_w_smartTag();
    m_childGroupList_3.push_back(pChildGroup);
    return pNewChild;
}

ns_w::CT_SdtRun* oMath_element::add_w_sdt()
{
    ChildGroup_3 *pChildGroup = new ChildGroup_3();
    ns_w::CT_SdtRun* pNewChild = pChildGroup->mutable_w_sdt();
    m_childGroupList_3.push_back(pChildGroup);
    return pNewChild;
}

ns_w::CT_ProofErr* oMath_element::add_w_proofErr()
{
    ChildGroup_4 *pChildGroup = new ChildGroup_4();
    ns_w::CT_ProofErr* pNewChild = pChildGroup->mutable_w_proofErr();
    m_childGroupList_4.push_back(pChildGroup);
    return pNewChild;
}

ns_w::CT_PermStart* oMath_element::add_w_permStart()
{
    ChildGroup_4 *pChildGroup = new ChildGroup_4();
    ns_w::CT_PermStart* pNewChild = pChildGroup->mutable_w_permStart();
    m_childGroupList_4.push_back(pChildGroup);
    return pNewChild;
}

ns_w::CT_Perm* oMath_element::add_w_permEnd()
{
    ChildGroup_4 *pChildGroup = new ChildGroup_4();
    ns_w::CT_Perm* pNewChild = pChildGroup->mutable_w_permEnd();
    m_childGroupList_4.push_back(pChildGroup);
    return pNewChild;
}

ns_w::CT_Bookmark* oMath_element::add_w_bookmarkStart()
{
    ChildGroup_5 *pChildGroup = new ChildGroup_5();
    ns_w::CT_Bookmark* pNewChild = pChildGroup->mutable_w_bookmarkStart();
    m_childGroupList_5.push_back(pChildGroup);
    return pNewChild;
}

ns_w::CT_MarkupRange* oMath_element::add_w_bookmarkEnd()
{
    ChildGroup_5 *pChildGroup = new ChildGroup_5();
    ns_w::CT_MarkupRange* pNewChild = pChildGroup->mutable_w_bookmarkEnd();
    m_childGroupList_5.push_back(pChildGroup);
    return pNewChild;
}

ns_w::CT_MoveBookmark* oMath_element::add_w_moveFromRangeStart()
{
    ChildGroup_5 *pChildGroup = new ChildGroup_5();
    ns_w::CT_MoveBookmark* pNewChild = pChildGroup->mutable_w_moveFromRangeStart();
    m_childGroupList_5.push_back(pChildGroup);
    return pNewChild;
}

ns_w::CT_MarkupRange* oMath_element::add_w_moveFromRangeEnd()
{
    ChildGroup_5 *pChildGroup = new ChildGroup_5();
    ns_w::CT_MarkupRange* pNewChild = pChildGroup->mutable_w_moveFromRangeEnd();
    m_childGroupList_5.push_back(pChildGroup);
    return pNewChild;
}

ns_w::CT_MoveBookmark* oMath_element::add_w_moveToRangeStart()
{
    ChildGroup_5 *pChildGroup = new ChildGroup_5();
    ns_w::CT_MoveBookmark* pNewChild = pChildGroup->mutable_w_moveToRangeStart();
    m_childGroupList_5.push_back(pChildGroup);
    return pNewChild;
}

ns_w::CT_MarkupRange* oMath_element::add_w_moveToRangeEnd()
{
    ChildGroup_5 *pChildGroup = new ChildGroup_5();
    ns_w::CT_MarkupRange* pNewChild = pChildGroup->mutable_w_moveToRangeEnd();
    m_childGroupList_5.push_back(pChildGroup);
    return pNewChild;
}

ns_w::CT_MarkupRange* oMath_element::add_w_commentRangeStart()
{
    ChildGroup_5 *pChildGroup = new ChildGroup_5();
    ns_w::CT_MarkupRange* pNewChild = pChildGroup->mutable_w_commentRangeStart();
    m_childGroupList_5.push_back(pChildGroup);
    return pNewChild;
}

ns_w::CT_MarkupRange* oMath_element::add_w_commentRangeEnd()
{
    ChildGroup_5 *pChildGroup = new ChildGroup_5();
    ns_w::CT_MarkupRange* pNewChild = pChildGroup->mutable_w_commentRangeEnd();
    m_childGroupList_5.push_back(pChildGroup);
    return pNewChild;
}

ns_w::CT_TrackChange* oMath_element::add_w_customXmlInsRangeStart()
{
    ChildGroup_5 *pChildGroup = new ChildGroup_5();
    ns_w::CT_TrackChange* pNewChild = pChildGroup->mutable_w_customXmlInsRangeStart();
    m_childGroupList_5.push_back(pChildGroup);
    return pNewChild;
}

ns_w::CT_Markup* oMath_element::add_w_customXmlInsRangeEnd()
{
    ChildGroup_5 *pChildGroup = new ChildGroup_5();
    ns_w::CT_Markup* pNewChild = pChildGroup->mutable_w_customXmlInsRangeEnd();
    m_childGroupList_5.push_back(pChildGroup);
    return pNewChild;
}

ns_w::CT_TrackChange* oMath_element::add_w_customXmlDelRangeStart()
{
    ChildGroup_5 *pChildGroup = new ChildGroup_5();
    ns_w::CT_TrackChange* pNewChild = pChildGroup->mutable_w_customXmlDelRangeStart();
    m_childGroupList_5.push_back(pChildGroup);
    return pNewChild;
}

ns_w::CT_Markup* oMath_element::add_w_customXmlDelRangeEnd()
{
    ChildGroup_5 *pChildGroup = new ChildGroup_5();
    ns_w::CT_Markup* pNewChild = pChildGroup->mutable_w_customXmlDelRangeEnd();
    m_childGroupList_5.push_back(pChildGroup);
    return pNewChild;
}

ns_w::CT_TrackChange* oMath_element::add_w_customXmlMoveFromRangeStart()
{
    ChildGroup_5 *pChildGroup = new ChildGroup_5();
    ns_w::CT_TrackChange* pNewChild = pChildGroup->mutable_w_customXmlMoveFromRangeStart();
    m_childGroupList_5.push_back(pChildGroup);
    return pNewChild;
}

ns_w::CT_Markup* oMath_element::add_w_customXmlMoveFromRangeEnd()
{
    ChildGroup_5 *pChildGroup = new ChildGroup_5();
    ns_w::CT_Markup* pNewChild = pChildGroup->mutable_w_customXmlMoveFromRangeEnd();
    m_childGroupList_5.push_back(pChildGroup);
    return pNewChild;
}

ns_w::CT_TrackChange* oMath_element::add_w_customXmlMoveToRangeStart()
{
    ChildGroup_5 *pChildGroup = new ChildGroup_5();
    ns_w::CT_TrackChange* pNewChild = pChildGroup->mutable_w_customXmlMoveToRangeStart();
    m_childGroupList_5.push_back(pChildGroup);
    return pNewChild;
}

ns_w::CT_Markup* oMath_element::add_w_customXmlMoveToRangeEnd()
{
    ChildGroup_5 *pChildGroup = new ChildGroup_5();
    ns_w::CT_Markup* pNewChild = pChildGroup->mutable_w_customXmlMoveToRangeEnd();
    m_childGroupList_5.push_back(pChildGroup);
    return pNewChild;
}

ns_w::CT_RunTrackChange* oMath_element::add_w_ins()
{
    ChildGroup_6 *pChildGroup = new ChildGroup_6();
    ns_w::CT_RunTrackChange* pNewChild = pChildGroup->mutable_w_ins();
    m_childGroupList_6.push_back(pChildGroup);
    return pNewChild;
}

ns_w::CT_RunTrackChange* oMath_element::add_w_del()
{
    ChildGroup_6 *pChildGroup = new ChildGroup_6();
    ns_w::CT_RunTrackChange* pNewChild = pChildGroup->mutable_w_del();
    m_childGroupList_6.push_back(pChildGroup);
    return pNewChild;
}

ns_w::CT_RunTrackChange* oMath_element::add_w_moveFrom()
{
    ChildGroup_6 *pChildGroup = new ChildGroup_6();
    ns_w::CT_RunTrackChange* pNewChild = pChildGroup->mutable_w_moveFrom();
    m_childGroupList_6.push_back(pChildGroup);
    return pNewChild;
}

ns_w::CT_RunTrackChange* oMath_element::add_w_moveTo()
{
    ChildGroup_6 *pChildGroup = new ChildGroup_6();
    ns_w::CT_RunTrackChange* pNewChild = pChildGroup->mutable_w_moveTo();
    m_childGroupList_6.push_back(pChildGroup);
    return pNewChild;
}

ns_m::CT_OMathPara* oMath_element::add_m_oMathPara()
{
    ChildGroup_7 *pChildGroup = new ChildGroup_7();
    ns_m::CT_OMathPara* pNewChild = pChildGroup->mutable_m_oMathPara();
    m_childGroupList_7.push_back(pChildGroup);
    return pNewChild;
}

ns_m::CT_OMath* oMath_element::add_m_oMath()
{
    ChildGroup_7 *pChildGroup = new ChildGroup_7();
    ns_m::CT_OMath* pNewChild = pChildGroup->mutable_m_oMath();
    m_childGroupList_7.push_back(pChildGroup);
    return pNewChild;
}

void oMath_element::clear()
{
    {
        vector<ChildGroup_1*>::iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_1.clear();
    }

    {
        vector<ChildGroup_2*>::iterator iter;
        for (iter = m_childGroupList_2.begin(); iter != m_childGroupList_2.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_2.clear();
    }

    {
        vector<ChildGroup_3*>::iterator iter;
        for (iter = m_childGroupList_3.begin(); iter != m_childGroupList_3.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_3.clear();
    }

    {
        vector<ChildGroup_4*>::iterator iter;
        for (iter = m_childGroupList_4.begin(); iter != m_childGroupList_4.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_4.clear();
    }

    {
        vector<ChildGroup_5*>::iterator iter;
        for (iter = m_childGroupList_5.begin(); iter != m_childGroupList_5.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_5.clear();
    }

    {
        vector<ChildGroup_6*>::iterator iter;
        for (iter = m_childGroupList_6.begin(); iter != m_childGroupList_6.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_6.clear();
    }

    {
        vector<ChildGroup_7*>::iterator iter;
        for (iter = m_childGroupList_7.begin(); iter != m_childGroupList_7.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_7.clear();
    }
}

void oMath_element::toXml(std::ostream& _outStream) const
{
    _outStream << "<m:oMath";

    _outStream << " " << "xmlns:m=\"http://schemas.openxmlformats.org/officeDocument/2006/math\"";
    _outStream << " " << "xmlns:w=\"http://schemas.openxmlformats.org/wordprocessingml/2006/main\"";
    _outStream << " " << "xmlns:s=\"http://schemas.openxmlformats.org/officeDocument/2006/sharedTypes\"";

    _outStream << ">";

    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_acc())
            {
                (*iter)->get_acc().toXmlElem("m:acc", "", _outStream);
            }


            else if ((*iter)->has_bar())
            {
                (*iter)->get_bar().toXmlElem("m:bar", "", _outStream);
            }


            else if ((*iter)->has_box())
            {
                (*iter)->get_box().toXmlElem("m:box", "", _outStream);
            }


            else if ((*iter)->has_borderBox())
            {
                (*iter)->get_borderBox().toXmlElem("m:borderBox", "", _outStream);
            }


            else if ((*iter)->has_d())
            {
                (*iter)->get_d().toXmlElem("m:d", "", _outStream);
            }


            else if ((*iter)->has_eqArr())
            {
                (*iter)->get_eqArr().toXmlElem("m:eqArr", "", _outStream);
            }


            else if ((*iter)->has_f())
            {
                (*iter)->get_f().toXmlElem("m:f", "", _outStream);
            }


            else if ((*iter)->has_func())
            {
                (*iter)->get_func().toXmlElem("m:func", "", _outStream);
            }


            else if ((*iter)->has_groupChr())
            {
                (*iter)->get_groupChr().toXmlElem("m:groupChr", "", _outStream);
            }


            else if ((*iter)->has_limLow())
            {
                (*iter)->get_limLow().toXmlElem("m:limLow", "", _outStream);
            }


            else if ((*iter)->has_limUpp())
            {
                (*iter)->get_limUpp().toXmlElem("m:limUpp", "", _outStream);
            }


            else if ((*iter)->has_m())
            {
                (*iter)->get_m().toXmlElem("m:m", "", _outStream);
            }


            else if ((*iter)->has_nary())
            {
                (*iter)->get_nary().toXmlElem("m:nary", "", _outStream);
            }


            else if ((*iter)->has_phant())
            {
                (*iter)->get_phant().toXmlElem("m:phant", "", _outStream);
            }


            else if ((*iter)->has_rad())
            {
                (*iter)->get_rad().toXmlElem("m:rad", "", _outStream);
            }


            else if ((*iter)->has_sPre())
            {
                (*iter)->get_sPre().toXmlElem("m:sPre", "", _outStream);
            }


            else if ((*iter)->has_sSub())
            {
                (*iter)->get_sSub().toXmlElem("m:sSub", "", _outStream);
            }


            else if ((*iter)->has_sSubSup())
            {
                (*iter)->get_sSubSup().toXmlElem("m:sSubSup", "", _outStream);
            }


            else if ((*iter)->has_sSup())
            {
                (*iter)->get_sSup().toXmlElem("m:sSup", "", _outStream);
            }


            else if ((*iter)->has_r())
            {
                (*iter)->get_r().toXmlElem("m:r", "", _outStream);
            }


        }
    }

    {
        vector<ChildGroup_2*>::const_iterator iter;
        for (iter = m_childGroupList_2.begin(); iter != m_childGroupList_2.end(); ++iter)
        {
            if ((*iter)->has_w_customXml())
            {
                (*iter)->get_w_customXml().toXmlElem("w:customXml", "", _outStream);
            }


            else if ((*iter)->has_w_fldSimple())
            {
                (*iter)->get_w_fldSimple().toXmlElem("w:fldSimple", "", _outStream);
            }


            else if ((*iter)->has_w_hyperlink())
            {
                (*iter)->get_w_hyperlink().toXmlElem("w:hyperlink", "", _outStream);
            }


        }
    }

    {
        vector<ChildGroup_3*>::const_iterator iter;
        for (iter = m_childGroupList_3.begin(); iter != m_childGroupList_3.end(); ++iter)
        {
            if ((*iter)->has_w_smartTag())
            {
                (*iter)->get_w_smartTag().toXmlElem("w:smartTag", "", _outStream);
            }


            else if ((*iter)->has_w_sdt())
            {
                (*iter)->get_w_sdt().toXmlElem("w:sdt", "", _outStream);
            }


        }
    }

    {
        const size_t childSize = m_childGroupList_4.size();
        assert(0 <= childSize && childSize <= 1);
    }

    {
        vector<ChildGroup_4*>::const_iterator iter;
        for (iter = m_childGroupList_4.begin(); iter != m_childGroupList_4.end(); ++iter)
        {
            if ((*iter)->has_w_proofErr())
            {
                (*iter)->get_w_proofErr().toXmlElem("w:proofErr", "", _outStream);
            }


            else if ((*iter)->has_w_permStart())
            {
                (*iter)->get_w_permStart().toXmlElem("w:permStart", "", _outStream);
            }


            else if ((*iter)->has_w_permEnd())
            {
                (*iter)->get_w_permEnd().toXmlElem("w:permEnd", "", _outStream);
            }


        }
    }

    {
        vector<ChildGroup_5*>::const_iterator iter;
        for (iter = m_childGroupList_5.begin(); iter != m_childGroupList_5.end(); ++iter)
        {
            if ((*iter)->has_w_bookmarkStart())
            {
                (*iter)->get_w_bookmarkStart().toXmlElem("w:bookmarkStart", "", _outStream);
            }


            else if ((*iter)->has_w_bookmarkEnd())
            {
                (*iter)->get_w_bookmarkEnd().toXmlElem("w:bookmarkEnd", "", _outStream);
            }


            else if ((*iter)->has_w_moveFromRangeStart())
            {
                (*iter)->get_w_moveFromRangeStart().toXmlElem("w:moveFromRangeStart", "", _outStream);
            }


            else if ((*iter)->has_w_moveFromRangeEnd())
            {
                (*iter)->get_w_moveFromRangeEnd().toXmlElem("w:moveFromRangeEnd", "", _outStream);
            }


            else if ((*iter)->has_w_moveToRangeStart())
            {
                (*iter)->get_w_moveToRangeStart().toXmlElem("w:moveToRangeStart", "", _outStream);
            }


            else if ((*iter)->has_w_moveToRangeEnd())
            {
                (*iter)->get_w_moveToRangeEnd().toXmlElem("w:moveToRangeEnd", "", _outStream);
            }


            else if ((*iter)->has_w_commentRangeStart())
            {
                (*iter)->get_w_commentRangeStart().toXmlElem("w:commentRangeStart", "", _outStream);
            }


            else if ((*iter)->has_w_commentRangeEnd())
            {
                (*iter)->get_w_commentRangeEnd().toXmlElem("w:commentRangeEnd", "", _outStream);
            }


            else if ((*iter)->has_w_customXmlInsRangeStart())
            {
                (*iter)->get_w_customXmlInsRangeStart().toXmlElem("w:customXmlInsRangeStart", "", _outStream);
            }


            else if ((*iter)->has_w_customXmlInsRangeEnd())
            {
                (*iter)->get_w_customXmlInsRangeEnd().toXmlElem("w:customXmlInsRangeEnd", "", _outStream);
            }


            else if ((*iter)->has_w_customXmlDelRangeStart())
            {
                (*iter)->get_w_customXmlDelRangeStart().toXmlElem("w:customXmlDelRangeStart", "", _outStream);
            }


            else if ((*iter)->has_w_customXmlDelRangeEnd())
            {
                (*iter)->get_w_customXmlDelRangeEnd().toXmlElem("w:customXmlDelRangeEnd", "", _outStream);
            }


            else if ((*iter)->has_w_customXmlMoveFromRangeStart())
            {
                (*iter)->get_w_customXmlMoveFromRangeStart().toXmlElem("w:customXmlMoveFromRangeStart", "", _outStream);
            }


            else if ((*iter)->has_w_customXmlMoveFromRangeEnd())
            {
                (*iter)->get_w_customXmlMoveFromRangeEnd().toXmlElem("w:customXmlMoveFromRangeEnd", "", _outStream);
            }


            else if ((*iter)->has_w_customXmlMoveToRangeStart())
            {
                (*iter)->get_w_customXmlMoveToRangeStart().toXmlElem("w:customXmlMoveToRangeStart", "", _outStream);
            }


            else if ((*iter)->has_w_customXmlMoveToRangeEnd())
            {
                (*iter)->get_w_customXmlMoveToRangeEnd().toXmlElem("w:customXmlMoveToRangeEnd", "", _outStream);
            }


        }
    }

    {
        vector<ChildGroup_6*>::const_iterator iter;
        for (iter = m_childGroupList_6.begin(); iter != m_childGroupList_6.end(); ++iter)
        {
            if ((*iter)->has_w_ins())
            {
                (*iter)->get_w_ins().toXmlElem("w:ins", "", _outStream);
            }


            else if ((*iter)->has_w_del())
            {
                (*iter)->get_w_del().toXmlElem("w:del", "", _outStream);
            }


            else if ((*iter)->has_w_moveFrom())
            {
                (*iter)->get_w_moveFrom().toXmlElem("w:moveFrom", "", _outStream);
            }


            else if ((*iter)->has_w_moveTo())
            {
                (*iter)->get_w_moveTo().toXmlElem("w:moveTo", "", _outStream);
            }


        }
    }

    {
        vector<ChildGroup_7*>::const_iterator iter;
        for (iter = m_childGroupList_7.begin(); iter != m_childGroupList_7.end(); ++iter)
        {
            if ((*iter)->has_m_oMathPara())
            {
                (*iter)->get_m_oMathPara().toXmlElem("m:oMathPara", "", _outStream);
            }


            else if ((*iter)->has_m_oMath())
            {
                (*iter)->get_m_oMath().toXmlElem("m:oMath", "", _outStream);
            }


        }
    }

    _outStream << "</m:oMath>";
}

const oMath_element& oMath_element::default_instance()
{
    if (!oMath_element::default_instance_)
    {
        oMath_element::default_instance_ = new oMath_element();
    }
    return *oMath_element::default_instance_;
}


// oMath_element::ChildGroup_1
oMath_element::ChildGroup_1::ChildGroup_1()
    :m_has_acc(false),
     m_acc(NULL),
     m_has_bar(false),
     m_bar(NULL),
     m_has_box(false),
     m_box(NULL),
     m_has_borderBox(false),
     m_borderBox(NULL),
     m_has_d(false),
     m_d(NULL),
     m_has_eqArr(false),
     m_eqArr(NULL),
     m_has_f(false),
     m_f(NULL),
     m_has_func(false),
     m_func(NULL),
     m_has_groupChr(false),
     m_groupChr(NULL),
     m_has_limLow(false),
     m_limLow(NULL),
     m_has_limUpp(false),
     m_limUpp(NULL),
     m_has_m(false),
     m_m(NULL),
     m_has_nary(false),
     m_nary(NULL),
     m_has_phant(false),
     m_phant(NULL),
     m_has_rad(false),
     m_rad(NULL),
     m_has_sPre(false),
     m_sPre(NULL),
     m_has_sSub(false),
     m_sSub(NULL),
     m_has_sSubSup(false),
     m_sSubSup(NULL),
     m_has_sSup(false),
     m_sSup(NULL),
     m_has_r(false),
     m_r(NULL)
{
}
bool oMath_element::ChildGroup_1::has_acc() const
{
    return m_has_acc;
}

CT_Acc* oMath_element::ChildGroup_1::mutable_acc()
{

    m_has_bar = false;

    if (m_bar)
    {
        delete m_bar;
        m_bar = NULL;
    }
    ;

    m_has_box = false;

    if (m_box)
    {
        delete m_box;
        m_box = NULL;
    }
    ;

    m_has_borderBox = false;

    if (m_borderBox)
    {
        delete m_borderBox;
        m_borderBox = NULL;
    }
    ;

    m_has_d = false;

    if (m_d)
    {
        delete m_d;
        m_d = NULL;
    }
    ;

    m_has_eqArr = false;

    if (m_eqArr)
    {
        delete m_eqArr;
        m_eqArr = NULL;
    }
    ;

    m_has_f = false;

    if (m_f)
    {
        delete m_f;
        m_f = NULL;
    }
    ;

    m_has_func = false;

    if (m_func)
    {
        delete m_func;
        m_func = NULL;
    }
    ;

    m_has_groupChr = false;

    if (m_groupChr)
    {
        delete m_groupChr;
        m_groupChr = NULL;
    }
    ;

    m_has_limLow = false;

    if (m_limLow)
    {
        delete m_limLow;
        m_limLow = NULL;
    }
    ;

    m_has_limUpp = false;

    if (m_limUpp)
    {
        delete m_limUpp;
        m_limUpp = NULL;
    }
    ;

    m_has_m = false;

    if (m_m)
    {
        delete m_m;
        m_m = NULL;
    }
    ;

    m_has_nary = false;

    if (m_nary)
    {
        delete m_nary;
        m_nary = NULL;
    }
    ;

    m_has_phant = false;

    if (m_phant)
    {
        delete m_phant;
        m_phant = NULL;
    }
    ;

    m_has_rad = false;

    if (m_rad)
    {
        delete m_rad;
        m_rad = NULL;
    }
    ;

    m_has_sPre = false;

    if (m_sPre)
    {
        delete m_sPre;
        m_sPre = NULL;
    }
    ;

    m_has_sSub = false;

    if (m_sSub)
    {
        delete m_sSub;
        m_sSub = NULL;
    }
    ;

    m_has_sSubSup = false;

    if (m_sSubSup)
    {
        delete m_sSubSup;
        m_sSubSup = NULL;
    }
    ;

    m_has_sSup = false;

    if (m_sSup)
    {
        delete m_sSup;
        m_sSup = NULL;
    }
    ;

    m_has_r = false;

    if (m_r)
    {
        delete m_r;
        m_r = NULL;
    }
    ;

    m_has_acc = true;
    if (!m_acc)
    {
        m_acc = new CT_Acc();
    }
    return m_acc;
}

const CT_Acc& oMath_element::ChildGroup_1::get_acc() const
{
    if (m_acc)
    {
        return *m_acc;
    }
    return CT_Acc::default_instance();
}

bool oMath_element::ChildGroup_1::has_bar() const
{
    return m_has_bar;
}

CT_Bar* oMath_element::ChildGroup_1::mutable_bar()
{

    m_has_acc = false;

    if (m_acc)
    {
        delete m_acc;
        m_acc = NULL;
    }
    ;

    m_has_box = false;

    if (m_box)
    {
        delete m_box;
        m_box = NULL;
    }
    ;

    m_has_borderBox = false;

    if (m_borderBox)
    {
        delete m_borderBox;
        m_borderBox = NULL;
    }
    ;

    m_has_d = false;

    if (m_d)
    {
        delete m_d;
        m_d = NULL;
    }
    ;

    m_has_eqArr = false;

    if (m_eqArr)
    {
        delete m_eqArr;
        m_eqArr = NULL;
    }
    ;

    m_has_f = false;

    if (m_f)
    {
        delete m_f;
        m_f = NULL;
    }
    ;

    m_has_func = false;

    if (m_func)
    {
        delete m_func;
        m_func = NULL;
    }
    ;

    m_has_groupChr = false;

    if (m_groupChr)
    {
        delete m_groupChr;
        m_groupChr = NULL;
    }
    ;

    m_has_limLow = false;

    if (m_limLow)
    {
        delete m_limLow;
        m_limLow = NULL;
    }
    ;

    m_has_limUpp = false;

    if (m_limUpp)
    {
        delete m_limUpp;
        m_limUpp = NULL;
    }
    ;

    m_has_m = false;

    if (m_m)
    {
        delete m_m;
        m_m = NULL;
    }
    ;

    m_has_nary = false;

    if (m_nary)
    {
        delete m_nary;
        m_nary = NULL;
    }
    ;

    m_has_phant = false;

    if (m_phant)
    {
        delete m_phant;
        m_phant = NULL;
    }
    ;

    m_has_rad = false;

    if (m_rad)
    {
        delete m_rad;
        m_rad = NULL;
    }
    ;

    m_has_sPre = false;

    if (m_sPre)
    {
        delete m_sPre;
        m_sPre = NULL;
    }
    ;

    m_has_sSub = false;

    if (m_sSub)
    {
        delete m_sSub;
        m_sSub = NULL;
    }
    ;

    m_has_sSubSup = false;

    if (m_sSubSup)
    {
        delete m_sSubSup;
        m_sSubSup = NULL;
    }
    ;

    m_has_sSup = false;

    if (m_sSup)
    {
        delete m_sSup;
        m_sSup = NULL;
    }
    ;

    m_has_r = false;

    if (m_r)
    {
        delete m_r;
        m_r = NULL;
    }
    ;

    m_has_bar = true;
    if (!m_bar)
    {
        m_bar = new CT_Bar();
    }
    return m_bar;
}

const CT_Bar& oMath_element::ChildGroup_1::get_bar() const
{
    if (m_bar)
    {
        return *m_bar;
    }
    return CT_Bar::default_instance();
}

bool oMath_element::ChildGroup_1::has_box() const
{
    return m_has_box;
}

CT_Box* oMath_element::ChildGroup_1::mutable_box()
{

    m_has_acc = false;

    if (m_acc)
    {
        delete m_acc;
        m_acc = NULL;
    }
    ;

    m_has_bar = false;

    if (m_bar)
    {
        delete m_bar;
        m_bar = NULL;
    }
    ;

    m_has_borderBox = false;

    if (m_borderBox)
    {
        delete m_borderBox;
        m_borderBox = NULL;
    }
    ;

    m_has_d = false;

    if (m_d)
    {
        delete m_d;
        m_d = NULL;
    }
    ;

    m_has_eqArr = false;

    if (m_eqArr)
    {
        delete m_eqArr;
        m_eqArr = NULL;
    }
    ;

    m_has_f = false;

    if (m_f)
    {
        delete m_f;
        m_f = NULL;
    }
    ;

    m_has_func = false;

    if (m_func)
    {
        delete m_func;
        m_func = NULL;
    }
    ;

    m_has_groupChr = false;

    if (m_groupChr)
    {
        delete m_groupChr;
        m_groupChr = NULL;
    }
    ;

    m_has_limLow = false;

    if (m_limLow)
    {
        delete m_limLow;
        m_limLow = NULL;
    }
    ;

    m_has_limUpp = false;

    if (m_limUpp)
    {
        delete m_limUpp;
        m_limUpp = NULL;
    }
    ;

    m_has_m = false;

    if (m_m)
    {
        delete m_m;
        m_m = NULL;
    }
    ;

    m_has_nary = false;

    if (m_nary)
    {
        delete m_nary;
        m_nary = NULL;
    }
    ;

    m_has_phant = false;

    if (m_phant)
    {
        delete m_phant;
        m_phant = NULL;
    }
    ;

    m_has_rad = false;

    if (m_rad)
    {
        delete m_rad;
        m_rad = NULL;
    }
    ;

    m_has_sPre = false;

    if (m_sPre)
    {
        delete m_sPre;
        m_sPre = NULL;
    }
    ;

    m_has_sSub = false;

    if (m_sSub)
    {
        delete m_sSub;
        m_sSub = NULL;
    }
    ;

    m_has_sSubSup = false;

    if (m_sSubSup)
    {
        delete m_sSubSup;
        m_sSubSup = NULL;
    }
    ;

    m_has_sSup = false;

    if (m_sSup)
    {
        delete m_sSup;
        m_sSup = NULL;
    }
    ;

    m_has_r = false;

    if (m_r)
    {
        delete m_r;
        m_r = NULL;
    }
    ;

    m_has_box = true;
    if (!m_box)
    {
        m_box = new CT_Box();
    }
    return m_box;
}

const CT_Box& oMath_element::ChildGroup_1::get_box() const
{
    if (m_box)
    {
        return *m_box;
    }
    return CT_Box::default_instance();
}

bool oMath_element::ChildGroup_1::has_borderBox() const
{
    return m_has_borderBox;
}

CT_BorderBox* oMath_element::ChildGroup_1::mutable_borderBox()
{

    m_has_acc = false;

    if (m_acc)
    {
        delete m_acc;
        m_acc = NULL;
    }
    ;

    m_has_bar = false;

    if (m_bar)
    {
        delete m_bar;
        m_bar = NULL;
    }
    ;

    m_has_box = false;

    if (m_box)
    {
        delete m_box;
        m_box = NULL;
    }
    ;

    m_has_d = false;

    if (m_d)
    {
        delete m_d;
        m_d = NULL;
    }
    ;

    m_has_eqArr = false;

    if (m_eqArr)
    {
        delete m_eqArr;
        m_eqArr = NULL;
    }
    ;

    m_has_f = false;

    if (m_f)
    {
        delete m_f;
        m_f = NULL;
    }
    ;

    m_has_func = false;

    if (m_func)
    {
        delete m_func;
        m_func = NULL;
    }
    ;

    m_has_groupChr = false;

    if (m_groupChr)
    {
        delete m_groupChr;
        m_groupChr = NULL;
    }
    ;

    m_has_limLow = false;

    if (m_limLow)
    {
        delete m_limLow;
        m_limLow = NULL;
    }
    ;

    m_has_limUpp = false;

    if (m_limUpp)
    {
        delete m_limUpp;
        m_limUpp = NULL;
    }
    ;

    m_has_m = false;

    if (m_m)
    {
        delete m_m;
        m_m = NULL;
    }
    ;

    m_has_nary = false;

    if (m_nary)
    {
        delete m_nary;
        m_nary = NULL;
    }
    ;

    m_has_phant = false;

    if (m_phant)
    {
        delete m_phant;
        m_phant = NULL;
    }
    ;

    m_has_rad = false;

    if (m_rad)
    {
        delete m_rad;
        m_rad = NULL;
    }
    ;

    m_has_sPre = false;

    if (m_sPre)
    {
        delete m_sPre;
        m_sPre = NULL;
    }
    ;

    m_has_sSub = false;

    if (m_sSub)
    {
        delete m_sSub;
        m_sSub = NULL;
    }
    ;

    m_has_sSubSup = false;

    if (m_sSubSup)
    {
        delete m_sSubSup;
        m_sSubSup = NULL;
    }
    ;

    m_has_sSup = false;

    if (m_sSup)
    {
        delete m_sSup;
        m_sSup = NULL;
    }
    ;

    m_has_r = false;

    if (m_r)
    {
        delete m_r;
        m_r = NULL;
    }
    ;

    m_has_borderBox = true;
    if (!m_borderBox)
    {
        m_borderBox = new CT_BorderBox();
    }
    return m_borderBox;
}

const CT_BorderBox& oMath_element::ChildGroup_1::get_borderBox() const
{
    if (m_borderBox)
    {
        return *m_borderBox;
    }
    return CT_BorderBox::default_instance();
}

bool oMath_element::ChildGroup_1::has_d() const
{
    return m_has_d;
}

CT_D* oMath_element::ChildGroup_1::mutable_d()
{

    m_has_acc = false;

    if (m_acc)
    {
        delete m_acc;
        m_acc = NULL;
    }
    ;

    m_has_bar = false;

    if (m_bar)
    {
        delete m_bar;
        m_bar = NULL;
    }
    ;

    m_has_box = false;

    if (m_box)
    {
        delete m_box;
        m_box = NULL;
    }
    ;

    m_has_borderBox = false;

    if (m_borderBox)
    {
        delete m_borderBox;
        m_borderBox = NULL;
    }
    ;

    m_has_eqArr = false;

    if (m_eqArr)
    {
        delete m_eqArr;
        m_eqArr = NULL;
    }
    ;

    m_has_f = false;

    if (m_f)
    {
        delete m_f;
        m_f = NULL;
    }
    ;

    m_has_func = false;

    if (m_func)
    {
        delete m_func;
        m_func = NULL;
    }
    ;

    m_has_groupChr = false;

    if (m_groupChr)
    {
        delete m_groupChr;
        m_groupChr = NULL;
    }
    ;

    m_has_limLow = false;

    if (m_limLow)
    {
        delete m_limLow;
        m_limLow = NULL;
    }
    ;

    m_has_limUpp = false;

    if (m_limUpp)
    {
        delete m_limUpp;
        m_limUpp = NULL;
    }
    ;

    m_has_m = false;

    if (m_m)
    {
        delete m_m;
        m_m = NULL;
    }
    ;

    m_has_nary = false;

    if (m_nary)
    {
        delete m_nary;
        m_nary = NULL;
    }
    ;

    m_has_phant = false;

    if (m_phant)
    {
        delete m_phant;
        m_phant = NULL;
    }
    ;

    m_has_rad = false;

    if (m_rad)
    {
        delete m_rad;
        m_rad = NULL;
    }
    ;

    m_has_sPre = false;

    if (m_sPre)
    {
        delete m_sPre;
        m_sPre = NULL;
    }
    ;

    m_has_sSub = false;

    if (m_sSub)
    {
        delete m_sSub;
        m_sSub = NULL;
    }
    ;

    m_has_sSubSup = false;

    if (m_sSubSup)
    {
        delete m_sSubSup;
        m_sSubSup = NULL;
    }
    ;

    m_has_sSup = false;

    if (m_sSup)
    {
        delete m_sSup;
        m_sSup = NULL;
    }
    ;

    m_has_r = false;

    if (m_r)
    {
        delete m_r;
        m_r = NULL;
    }
    ;

    m_has_d = true;
    if (!m_d)
    {
        m_d = new CT_D();
    }
    return m_d;
}

const CT_D& oMath_element::ChildGroup_1::get_d() const
{
    if (m_d)
    {
        return *m_d;
    }
    return CT_D::default_instance();
}

bool oMath_element::ChildGroup_1::has_eqArr() const
{
    return m_has_eqArr;
}

CT_EqArr* oMath_element::ChildGroup_1::mutable_eqArr()
{

    m_has_acc = false;

    if (m_acc)
    {
        delete m_acc;
        m_acc = NULL;
    }
    ;

    m_has_bar = false;

    if (m_bar)
    {
        delete m_bar;
        m_bar = NULL;
    }
    ;

    m_has_box = false;

    if (m_box)
    {
        delete m_box;
        m_box = NULL;
    }
    ;

    m_has_borderBox = false;

    if (m_borderBox)
    {
        delete m_borderBox;
        m_borderBox = NULL;
    }
    ;

    m_has_d = false;

    if (m_d)
    {
        delete m_d;
        m_d = NULL;
    }
    ;

    m_has_f = false;

    if (m_f)
    {
        delete m_f;
        m_f = NULL;
    }
    ;

    m_has_func = false;

    if (m_func)
    {
        delete m_func;
        m_func = NULL;
    }
    ;

    m_has_groupChr = false;

    if (m_groupChr)
    {
        delete m_groupChr;
        m_groupChr = NULL;
    }
    ;

    m_has_limLow = false;

    if (m_limLow)
    {
        delete m_limLow;
        m_limLow = NULL;
    }
    ;

    m_has_limUpp = false;

    if (m_limUpp)
    {
        delete m_limUpp;
        m_limUpp = NULL;
    }
    ;

    m_has_m = false;

    if (m_m)
    {
        delete m_m;
        m_m = NULL;
    }
    ;

    m_has_nary = false;

    if (m_nary)
    {
        delete m_nary;
        m_nary = NULL;
    }
    ;

    m_has_phant = false;

    if (m_phant)
    {
        delete m_phant;
        m_phant = NULL;
    }
    ;

    m_has_rad = false;

    if (m_rad)
    {
        delete m_rad;
        m_rad = NULL;
    }
    ;

    m_has_sPre = false;

    if (m_sPre)
    {
        delete m_sPre;
        m_sPre = NULL;
    }
    ;

    m_has_sSub = false;

    if (m_sSub)
    {
        delete m_sSub;
        m_sSub = NULL;
    }
    ;

    m_has_sSubSup = false;

    if (m_sSubSup)
    {
        delete m_sSubSup;
        m_sSubSup = NULL;
    }
    ;

    m_has_sSup = false;

    if (m_sSup)
    {
        delete m_sSup;
        m_sSup = NULL;
    }
    ;

    m_has_r = false;

    if (m_r)
    {
        delete m_r;
        m_r = NULL;
    }
    ;

    m_has_eqArr = true;
    if (!m_eqArr)
    {
        m_eqArr = new CT_EqArr();
    }
    return m_eqArr;
}

const CT_EqArr& oMath_element::ChildGroup_1::get_eqArr() const
{
    if (m_eqArr)
    {
        return *m_eqArr;
    }
    return CT_EqArr::default_instance();
}

bool oMath_element::ChildGroup_1::has_f() const
{
    return m_has_f;
}

CT_F* oMath_element::ChildGroup_1::mutable_f()
{

    m_has_acc = false;

    if (m_acc)
    {
        delete m_acc;
        m_acc = NULL;
    }
    ;

    m_has_bar = false;

    if (m_bar)
    {
        delete m_bar;
        m_bar = NULL;
    }
    ;

    m_has_box = false;

    if (m_box)
    {
        delete m_box;
        m_box = NULL;
    }
    ;

    m_has_borderBox = false;

    if (m_borderBox)
    {
        delete m_borderBox;
        m_borderBox = NULL;
    }
    ;

    m_has_d = false;

    if (m_d)
    {
        delete m_d;
        m_d = NULL;
    }
    ;

    m_has_eqArr = false;

    if (m_eqArr)
    {
        delete m_eqArr;
        m_eqArr = NULL;
    }
    ;

    m_has_func = false;

    if (m_func)
    {
        delete m_func;
        m_func = NULL;
    }
    ;

    m_has_groupChr = false;

    if (m_groupChr)
    {
        delete m_groupChr;
        m_groupChr = NULL;
    }
    ;

    m_has_limLow = false;

    if (m_limLow)
    {
        delete m_limLow;
        m_limLow = NULL;
    }
    ;

    m_has_limUpp = false;

    if (m_limUpp)
    {
        delete m_limUpp;
        m_limUpp = NULL;
    }
    ;

    m_has_m = false;

    if (m_m)
    {
        delete m_m;
        m_m = NULL;
    }
    ;

    m_has_nary = false;

    if (m_nary)
    {
        delete m_nary;
        m_nary = NULL;
    }
    ;

    m_has_phant = false;

    if (m_phant)
    {
        delete m_phant;
        m_phant = NULL;
    }
    ;

    m_has_rad = false;

    if (m_rad)
    {
        delete m_rad;
        m_rad = NULL;
    }
    ;

    m_has_sPre = false;

    if (m_sPre)
    {
        delete m_sPre;
        m_sPre = NULL;
    }
    ;

    m_has_sSub = false;

    if (m_sSub)
    {
        delete m_sSub;
        m_sSub = NULL;
    }
    ;

    m_has_sSubSup = false;

    if (m_sSubSup)
    {
        delete m_sSubSup;
        m_sSubSup = NULL;
    }
    ;

    m_has_sSup = false;

    if (m_sSup)
    {
        delete m_sSup;
        m_sSup = NULL;
    }
    ;

    m_has_r = false;

    if (m_r)
    {
        delete m_r;
        m_r = NULL;
    }
    ;

    m_has_f = true;
    if (!m_f)
    {
        m_f = new CT_F();
    }
    return m_f;
}

const CT_F& oMath_element::ChildGroup_1::get_f() const
{
    if (m_f)
    {
        return *m_f;
    }
    return CT_F::default_instance();
}

bool oMath_element::ChildGroup_1::has_func() const
{
    return m_has_func;
}

CT_Func* oMath_element::ChildGroup_1::mutable_func()
{

    m_has_acc = false;

    if (m_acc)
    {
        delete m_acc;
        m_acc = NULL;
    }
    ;

    m_has_bar = false;

    if (m_bar)
    {
        delete m_bar;
        m_bar = NULL;
    }
    ;

    m_has_box = false;

    if (m_box)
    {
        delete m_box;
        m_box = NULL;
    }
    ;

    m_has_borderBox = false;

    if (m_borderBox)
    {
        delete m_borderBox;
        m_borderBox = NULL;
    }
    ;

    m_has_d = false;

    if (m_d)
    {
        delete m_d;
        m_d = NULL;
    }
    ;

    m_has_eqArr = false;

    if (m_eqArr)
    {
        delete m_eqArr;
        m_eqArr = NULL;
    }
    ;

    m_has_f = false;

    if (m_f)
    {
        delete m_f;
        m_f = NULL;
    }
    ;

    m_has_groupChr = false;

    if (m_groupChr)
    {
        delete m_groupChr;
        m_groupChr = NULL;
    }
    ;

    m_has_limLow = false;

    if (m_limLow)
    {
        delete m_limLow;
        m_limLow = NULL;
    }
    ;

    m_has_limUpp = false;

    if (m_limUpp)
    {
        delete m_limUpp;
        m_limUpp = NULL;
    }
    ;

    m_has_m = false;

    if (m_m)
    {
        delete m_m;
        m_m = NULL;
    }
    ;

    m_has_nary = false;

    if (m_nary)
    {
        delete m_nary;
        m_nary = NULL;
    }
    ;

    m_has_phant = false;

    if (m_phant)
    {
        delete m_phant;
        m_phant = NULL;
    }
    ;

    m_has_rad = false;

    if (m_rad)
    {
        delete m_rad;
        m_rad = NULL;
    }
    ;

    m_has_sPre = false;

    if (m_sPre)
    {
        delete m_sPre;
        m_sPre = NULL;
    }
    ;

    m_has_sSub = false;

    if (m_sSub)
    {
        delete m_sSub;
        m_sSub = NULL;
    }
    ;

    m_has_sSubSup = false;

    if (m_sSubSup)
    {
        delete m_sSubSup;
        m_sSubSup = NULL;
    }
    ;

    m_has_sSup = false;

    if (m_sSup)
    {
        delete m_sSup;
        m_sSup = NULL;
    }
    ;

    m_has_r = false;

    if (m_r)
    {
        delete m_r;
        m_r = NULL;
    }
    ;

    m_has_func = true;
    if (!m_func)
    {
        m_func = new CT_Func();
    }
    return m_func;
}

const CT_Func& oMath_element::ChildGroup_1::get_func() const
{
    if (m_func)
    {
        return *m_func;
    }
    return CT_Func::default_instance();
}

bool oMath_element::ChildGroup_1::has_groupChr() const
{
    return m_has_groupChr;
}

CT_GroupChr* oMath_element::ChildGroup_1::mutable_groupChr()
{

    m_has_acc = false;

    if (m_acc)
    {
        delete m_acc;
        m_acc = NULL;
    }
    ;

    m_has_bar = false;

    if (m_bar)
    {
        delete m_bar;
        m_bar = NULL;
    }
    ;

    m_has_box = false;

    if (m_box)
    {
        delete m_box;
        m_box = NULL;
    }
    ;

    m_has_borderBox = false;

    if (m_borderBox)
    {
        delete m_borderBox;
        m_borderBox = NULL;
    }
    ;

    m_has_d = false;

    if (m_d)
    {
        delete m_d;
        m_d = NULL;
    }
    ;

    m_has_eqArr = false;

    if (m_eqArr)
    {
        delete m_eqArr;
        m_eqArr = NULL;
    }
    ;

    m_has_f = false;

    if (m_f)
    {
        delete m_f;
        m_f = NULL;
    }
    ;

    m_has_func = false;

    if (m_func)
    {
        delete m_func;
        m_func = NULL;
    }
    ;

    m_has_limLow = false;

    if (m_limLow)
    {
        delete m_limLow;
        m_limLow = NULL;
    }
    ;

    m_has_limUpp = false;

    if (m_limUpp)
    {
        delete m_limUpp;
        m_limUpp = NULL;
    }
    ;

    m_has_m = false;

    if (m_m)
    {
        delete m_m;
        m_m = NULL;
    }
    ;

    m_has_nary = false;

    if (m_nary)
    {
        delete m_nary;
        m_nary = NULL;
    }
    ;

    m_has_phant = false;

    if (m_phant)
    {
        delete m_phant;
        m_phant = NULL;
    }
    ;

    m_has_rad = false;

    if (m_rad)
    {
        delete m_rad;
        m_rad = NULL;
    }
    ;

    m_has_sPre = false;

    if (m_sPre)
    {
        delete m_sPre;
        m_sPre = NULL;
    }
    ;

    m_has_sSub = false;

    if (m_sSub)
    {
        delete m_sSub;
        m_sSub = NULL;
    }
    ;

    m_has_sSubSup = false;

    if (m_sSubSup)
    {
        delete m_sSubSup;
        m_sSubSup = NULL;
    }
    ;

    m_has_sSup = false;

    if (m_sSup)
    {
        delete m_sSup;
        m_sSup = NULL;
    }
    ;

    m_has_r = false;

    if (m_r)
    {
        delete m_r;
        m_r = NULL;
    }
    ;

    m_has_groupChr = true;
    if (!m_groupChr)
    {
        m_groupChr = new CT_GroupChr();
    }
    return m_groupChr;
}

const CT_GroupChr& oMath_element::ChildGroup_1::get_groupChr() const
{
    if (m_groupChr)
    {
        return *m_groupChr;
    }
    return CT_GroupChr::default_instance();
}

bool oMath_element::ChildGroup_1::has_limLow() const
{
    return m_has_limLow;
}

CT_LimLow* oMath_element::ChildGroup_1::mutable_limLow()
{

    m_has_acc = false;

    if (m_acc)
    {
        delete m_acc;
        m_acc = NULL;
    }
    ;

    m_has_bar = false;

    if (m_bar)
    {
        delete m_bar;
        m_bar = NULL;
    }
    ;

    m_has_box = false;

    if (m_box)
    {
        delete m_box;
        m_box = NULL;
    }
    ;

    m_has_borderBox = false;

    if (m_borderBox)
    {
        delete m_borderBox;
        m_borderBox = NULL;
    }
    ;

    m_has_d = false;

    if (m_d)
    {
        delete m_d;
        m_d = NULL;
    }
    ;

    m_has_eqArr = false;

    if (m_eqArr)
    {
        delete m_eqArr;
        m_eqArr = NULL;
    }
    ;

    m_has_f = false;

    if (m_f)
    {
        delete m_f;
        m_f = NULL;
    }
    ;

    m_has_func = false;

    if (m_func)
    {
        delete m_func;
        m_func = NULL;
    }
    ;

    m_has_groupChr = false;

    if (m_groupChr)
    {
        delete m_groupChr;
        m_groupChr = NULL;
    }
    ;

    m_has_limUpp = false;

    if (m_limUpp)
    {
        delete m_limUpp;
        m_limUpp = NULL;
    }
    ;

    m_has_m = false;

    if (m_m)
    {
        delete m_m;
        m_m = NULL;
    }
    ;

    m_has_nary = false;

    if (m_nary)
    {
        delete m_nary;
        m_nary = NULL;
    }
    ;

    m_has_phant = false;

    if (m_phant)
    {
        delete m_phant;
        m_phant = NULL;
    }
    ;

    m_has_rad = false;

    if (m_rad)
    {
        delete m_rad;
        m_rad = NULL;
    }
    ;

    m_has_sPre = false;

    if (m_sPre)
    {
        delete m_sPre;
        m_sPre = NULL;
    }
    ;

    m_has_sSub = false;

    if (m_sSub)
    {
        delete m_sSub;
        m_sSub = NULL;
    }
    ;

    m_has_sSubSup = false;

    if (m_sSubSup)
    {
        delete m_sSubSup;
        m_sSubSup = NULL;
    }
    ;

    m_has_sSup = false;

    if (m_sSup)
    {
        delete m_sSup;
        m_sSup = NULL;
    }
    ;

    m_has_r = false;

    if (m_r)
    {
        delete m_r;
        m_r = NULL;
    }
    ;

    m_has_limLow = true;
    if (!m_limLow)
    {
        m_limLow = new CT_LimLow();
    }
    return m_limLow;
}

const CT_LimLow& oMath_element::ChildGroup_1::get_limLow() const
{
    if (m_limLow)
    {
        return *m_limLow;
    }
    return CT_LimLow::default_instance();
}

bool oMath_element::ChildGroup_1::has_limUpp() const
{
    return m_has_limUpp;
}

CT_LimUpp* oMath_element::ChildGroup_1::mutable_limUpp()
{

    m_has_acc = false;

    if (m_acc)
    {
        delete m_acc;
        m_acc = NULL;
    }
    ;

    m_has_bar = false;

    if (m_bar)
    {
        delete m_bar;
        m_bar = NULL;
    }
    ;

    m_has_box = false;

    if (m_box)
    {
        delete m_box;
        m_box = NULL;
    }
    ;

    m_has_borderBox = false;

    if (m_borderBox)
    {
        delete m_borderBox;
        m_borderBox = NULL;
    }
    ;

    m_has_d = false;

    if (m_d)
    {
        delete m_d;
        m_d = NULL;
    }
    ;

    m_has_eqArr = false;

    if (m_eqArr)
    {
        delete m_eqArr;
        m_eqArr = NULL;
    }
    ;

    m_has_f = false;

    if (m_f)
    {
        delete m_f;
        m_f = NULL;
    }
    ;

    m_has_func = false;

    if (m_func)
    {
        delete m_func;
        m_func = NULL;
    }
    ;

    m_has_groupChr = false;

    if (m_groupChr)
    {
        delete m_groupChr;
        m_groupChr = NULL;
    }
    ;

    m_has_limLow = false;

    if (m_limLow)
    {
        delete m_limLow;
        m_limLow = NULL;
    }
    ;

    m_has_m = false;

    if (m_m)
    {
        delete m_m;
        m_m = NULL;
    }
    ;

    m_has_nary = false;

    if (m_nary)
    {
        delete m_nary;
        m_nary = NULL;
    }
    ;

    m_has_phant = false;

    if (m_phant)
    {
        delete m_phant;
        m_phant = NULL;
    }
    ;

    m_has_rad = false;

    if (m_rad)
    {
        delete m_rad;
        m_rad = NULL;
    }
    ;

    m_has_sPre = false;

    if (m_sPre)
    {
        delete m_sPre;
        m_sPre = NULL;
    }
    ;

    m_has_sSub = false;

    if (m_sSub)
    {
        delete m_sSub;
        m_sSub = NULL;
    }
    ;

    m_has_sSubSup = false;

    if (m_sSubSup)
    {
        delete m_sSubSup;
        m_sSubSup = NULL;
    }
    ;

    m_has_sSup = false;

    if (m_sSup)
    {
        delete m_sSup;
        m_sSup = NULL;
    }
    ;

    m_has_r = false;

    if (m_r)
    {
        delete m_r;
        m_r = NULL;
    }
    ;

    m_has_limUpp = true;
    if (!m_limUpp)
    {
        m_limUpp = new CT_LimUpp();
    }
    return m_limUpp;
}

const CT_LimUpp& oMath_element::ChildGroup_1::get_limUpp() const
{
    if (m_limUpp)
    {
        return *m_limUpp;
    }
    return CT_LimUpp::default_instance();
}

bool oMath_element::ChildGroup_1::has_m() const
{
    return m_has_m;
}

CT_M* oMath_element::ChildGroup_1::mutable_m()
{

    m_has_acc = false;

    if (m_acc)
    {
        delete m_acc;
        m_acc = NULL;
    }
    ;

    m_has_bar = false;

    if (m_bar)
    {
        delete m_bar;
        m_bar = NULL;
    }
    ;

    m_has_box = false;

    if (m_box)
    {
        delete m_box;
        m_box = NULL;
    }
    ;

    m_has_borderBox = false;

    if (m_borderBox)
    {
        delete m_borderBox;
        m_borderBox = NULL;
    }
    ;

    m_has_d = false;

    if (m_d)
    {
        delete m_d;
        m_d = NULL;
    }
    ;

    m_has_eqArr = false;

    if (m_eqArr)
    {
        delete m_eqArr;
        m_eqArr = NULL;
    }
    ;

    m_has_f = false;

    if (m_f)
    {
        delete m_f;
        m_f = NULL;
    }
    ;

    m_has_func = false;

    if (m_func)
    {
        delete m_func;
        m_func = NULL;
    }
    ;

    m_has_groupChr = false;

    if (m_groupChr)
    {
        delete m_groupChr;
        m_groupChr = NULL;
    }
    ;

    m_has_limLow = false;

    if (m_limLow)
    {
        delete m_limLow;
        m_limLow = NULL;
    }
    ;

    m_has_limUpp = false;

    if (m_limUpp)
    {
        delete m_limUpp;
        m_limUpp = NULL;
    }
    ;

    m_has_nary = false;

    if (m_nary)
    {
        delete m_nary;
        m_nary = NULL;
    }
    ;

    m_has_phant = false;

    if (m_phant)
    {
        delete m_phant;
        m_phant = NULL;
    }
    ;

    m_has_rad = false;

    if (m_rad)
    {
        delete m_rad;
        m_rad = NULL;
    }
    ;

    m_has_sPre = false;

    if (m_sPre)
    {
        delete m_sPre;
        m_sPre = NULL;
    }
    ;

    m_has_sSub = false;

    if (m_sSub)
    {
        delete m_sSub;
        m_sSub = NULL;
    }
    ;

    m_has_sSubSup = false;

    if (m_sSubSup)
    {
        delete m_sSubSup;
        m_sSubSup = NULL;
    }
    ;

    m_has_sSup = false;

    if (m_sSup)
    {
        delete m_sSup;
        m_sSup = NULL;
    }
    ;

    m_has_r = false;

    if (m_r)
    {
        delete m_r;
        m_r = NULL;
    }
    ;

    m_has_m = true;
    if (!m_m)
    {
        m_m = new CT_M();
    }
    return m_m;
}

const CT_M& oMath_element::ChildGroup_1::get_m() const
{
    if (m_m)
    {
        return *m_m;
    }
    return CT_M::default_instance();
}

bool oMath_element::ChildGroup_1::has_nary() const
{
    return m_has_nary;
}

CT_Nary* oMath_element::ChildGroup_1::mutable_nary()
{

    m_has_acc = false;

    if (m_acc)
    {
        delete m_acc;
        m_acc = NULL;
    }
    ;

    m_has_bar = false;

    if (m_bar)
    {
        delete m_bar;
        m_bar = NULL;
    }
    ;

    m_has_box = false;

    if (m_box)
    {
        delete m_box;
        m_box = NULL;
    }
    ;

    m_has_borderBox = false;

    if (m_borderBox)
    {
        delete m_borderBox;
        m_borderBox = NULL;
    }
    ;

    m_has_d = false;

    if (m_d)
    {
        delete m_d;
        m_d = NULL;
    }
    ;

    m_has_eqArr = false;

    if (m_eqArr)
    {
        delete m_eqArr;
        m_eqArr = NULL;
    }
    ;

    m_has_f = false;

    if (m_f)
    {
        delete m_f;
        m_f = NULL;
    }
    ;

    m_has_func = false;

    if (m_func)
    {
        delete m_func;
        m_func = NULL;
    }
    ;

    m_has_groupChr = false;

    if (m_groupChr)
    {
        delete m_groupChr;
        m_groupChr = NULL;
    }
    ;

    m_has_limLow = false;

    if (m_limLow)
    {
        delete m_limLow;
        m_limLow = NULL;
    }
    ;

    m_has_limUpp = false;

    if (m_limUpp)
    {
        delete m_limUpp;
        m_limUpp = NULL;
    }
    ;

    m_has_m = false;

    if (m_m)
    {
        delete m_m;
        m_m = NULL;
    }
    ;

    m_has_phant = false;

    if (m_phant)
    {
        delete m_phant;
        m_phant = NULL;
    }
    ;

    m_has_rad = false;

    if (m_rad)
    {
        delete m_rad;
        m_rad = NULL;
    }
    ;

    m_has_sPre = false;

    if (m_sPre)
    {
        delete m_sPre;
        m_sPre = NULL;
    }
    ;

    m_has_sSub = false;

    if (m_sSub)
    {
        delete m_sSub;
        m_sSub = NULL;
    }
    ;

    m_has_sSubSup = false;

    if (m_sSubSup)
    {
        delete m_sSubSup;
        m_sSubSup = NULL;
    }
    ;

    m_has_sSup = false;

    if (m_sSup)
    {
        delete m_sSup;
        m_sSup = NULL;
    }
    ;

    m_has_r = false;

    if (m_r)
    {
        delete m_r;
        m_r = NULL;
    }
    ;

    m_has_nary = true;
    if (!m_nary)
    {
        m_nary = new CT_Nary();
    }
    return m_nary;
}

const CT_Nary& oMath_element::ChildGroup_1::get_nary() const
{
    if (m_nary)
    {
        return *m_nary;
    }
    return CT_Nary::default_instance();
}

bool oMath_element::ChildGroup_1::has_phant() const
{
    return m_has_phant;
}

CT_Phant* oMath_element::ChildGroup_1::mutable_phant()
{

    m_has_acc = false;

    if (m_acc)
    {
        delete m_acc;
        m_acc = NULL;
    }
    ;

    m_has_bar = false;

    if (m_bar)
    {
        delete m_bar;
        m_bar = NULL;
    }
    ;

    m_has_box = false;

    if (m_box)
    {
        delete m_box;
        m_box = NULL;
    }
    ;

    m_has_borderBox = false;

    if (m_borderBox)
    {
        delete m_borderBox;
        m_borderBox = NULL;
    }
    ;

    m_has_d = false;

    if (m_d)
    {
        delete m_d;
        m_d = NULL;
    }
    ;

    m_has_eqArr = false;

    if (m_eqArr)
    {
        delete m_eqArr;
        m_eqArr = NULL;
    }
    ;

    m_has_f = false;

    if (m_f)
    {
        delete m_f;
        m_f = NULL;
    }
    ;

    m_has_func = false;

    if (m_func)
    {
        delete m_func;
        m_func = NULL;
    }
    ;

    m_has_groupChr = false;

    if (m_groupChr)
    {
        delete m_groupChr;
        m_groupChr = NULL;
    }
    ;

    m_has_limLow = false;

    if (m_limLow)
    {
        delete m_limLow;
        m_limLow = NULL;
    }
    ;

    m_has_limUpp = false;

    if (m_limUpp)
    {
        delete m_limUpp;
        m_limUpp = NULL;
    }
    ;

    m_has_m = false;

    if (m_m)
    {
        delete m_m;
        m_m = NULL;
    }
    ;

    m_has_nary = false;

    if (m_nary)
    {
        delete m_nary;
        m_nary = NULL;
    }
    ;

    m_has_rad = false;

    if (m_rad)
    {
        delete m_rad;
        m_rad = NULL;
    }
    ;

    m_has_sPre = false;

    if (m_sPre)
    {
        delete m_sPre;
        m_sPre = NULL;
    }
    ;

    m_has_sSub = false;

    if (m_sSub)
    {
        delete m_sSub;
        m_sSub = NULL;
    }
    ;

    m_has_sSubSup = false;

    if (m_sSubSup)
    {
        delete m_sSubSup;
        m_sSubSup = NULL;
    }
    ;

    m_has_sSup = false;

    if (m_sSup)
    {
        delete m_sSup;
        m_sSup = NULL;
    }
    ;

    m_has_r = false;

    if (m_r)
    {
        delete m_r;
        m_r = NULL;
    }
    ;

    m_has_phant = true;
    if (!m_phant)
    {
        m_phant = new CT_Phant();
    }
    return m_phant;
}

const CT_Phant& oMath_element::ChildGroup_1::get_phant() const
{
    if (m_phant)
    {
        return *m_phant;
    }
    return CT_Phant::default_instance();
}

bool oMath_element::ChildGroup_1::has_rad() const
{
    return m_has_rad;
}

CT_Rad* oMath_element::ChildGroup_1::mutable_rad()
{

    m_has_acc = false;

    if (m_acc)
    {
        delete m_acc;
        m_acc = NULL;
    }
    ;

    m_has_bar = false;

    if (m_bar)
    {
        delete m_bar;
        m_bar = NULL;
    }
    ;

    m_has_box = false;

    if (m_box)
    {
        delete m_box;
        m_box = NULL;
    }
    ;

    m_has_borderBox = false;

    if (m_borderBox)
    {
        delete m_borderBox;
        m_borderBox = NULL;
    }
    ;

    m_has_d = false;

    if (m_d)
    {
        delete m_d;
        m_d = NULL;
    }
    ;

    m_has_eqArr = false;

    if (m_eqArr)
    {
        delete m_eqArr;
        m_eqArr = NULL;
    }
    ;

    m_has_f = false;

    if (m_f)
    {
        delete m_f;
        m_f = NULL;
    }
    ;

    m_has_func = false;

    if (m_func)
    {
        delete m_func;
        m_func = NULL;
    }
    ;

    m_has_groupChr = false;

    if (m_groupChr)
    {
        delete m_groupChr;
        m_groupChr = NULL;
    }
    ;

    m_has_limLow = false;

    if (m_limLow)
    {
        delete m_limLow;
        m_limLow = NULL;
    }
    ;

    m_has_limUpp = false;

    if (m_limUpp)
    {
        delete m_limUpp;
        m_limUpp = NULL;
    }
    ;

    m_has_m = false;

    if (m_m)
    {
        delete m_m;
        m_m = NULL;
    }
    ;

    m_has_nary = false;

    if (m_nary)
    {
        delete m_nary;
        m_nary = NULL;
    }
    ;

    m_has_phant = false;

    if (m_phant)
    {
        delete m_phant;
        m_phant = NULL;
    }
    ;

    m_has_sPre = false;

    if (m_sPre)
    {
        delete m_sPre;
        m_sPre = NULL;
    }
    ;

    m_has_sSub = false;

    if (m_sSub)
    {
        delete m_sSub;
        m_sSub = NULL;
    }
    ;

    m_has_sSubSup = false;

    if (m_sSubSup)
    {
        delete m_sSubSup;
        m_sSubSup = NULL;
    }
    ;

    m_has_sSup = false;

    if (m_sSup)
    {
        delete m_sSup;
        m_sSup = NULL;
    }
    ;

    m_has_r = false;

    if (m_r)
    {
        delete m_r;
        m_r = NULL;
    }
    ;

    m_has_rad = true;
    if (!m_rad)
    {
        m_rad = new CT_Rad();
    }
    return m_rad;
}

const CT_Rad& oMath_element::ChildGroup_1::get_rad() const
{
    if (m_rad)
    {
        return *m_rad;
    }
    return CT_Rad::default_instance();
}

bool oMath_element::ChildGroup_1::has_sPre() const
{
    return m_has_sPre;
}

CT_SPre* oMath_element::ChildGroup_1::mutable_sPre()
{

    m_has_acc = false;

    if (m_acc)
    {
        delete m_acc;
        m_acc = NULL;
    }
    ;

    m_has_bar = false;

    if (m_bar)
    {
        delete m_bar;
        m_bar = NULL;
    }
    ;

    m_has_box = false;

    if (m_box)
    {
        delete m_box;
        m_box = NULL;
    }
    ;

    m_has_borderBox = false;

    if (m_borderBox)
    {
        delete m_borderBox;
        m_borderBox = NULL;
    }
    ;

    m_has_d = false;

    if (m_d)
    {
        delete m_d;
        m_d = NULL;
    }
    ;

    m_has_eqArr = false;

    if (m_eqArr)
    {
        delete m_eqArr;
        m_eqArr = NULL;
    }
    ;

    m_has_f = false;

    if (m_f)
    {
        delete m_f;
        m_f = NULL;
    }
    ;

    m_has_func = false;

    if (m_func)
    {
        delete m_func;
        m_func = NULL;
    }
    ;

    m_has_groupChr = false;

    if (m_groupChr)
    {
        delete m_groupChr;
        m_groupChr = NULL;
    }
    ;

    m_has_limLow = false;

    if (m_limLow)
    {
        delete m_limLow;
        m_limLow = NULL;
    }
    ;

    m_has_limUpp = false;

    if (m_limUpp)
    {
        delete m_limUpp;
        m_limUpp = NULL;
    }
    ;

    m_has_m = false;

    if (m_m)
    {
        delete m_m;
        m_m = NULL;
    }
    ;

    m_has_nary = false;

    if (m_nary)
    {
        delete m_nary;
        m_nary = NULL;
    }
    ;

    m_has_phant = false;

    if (m_phant)
    {
        delete m_phant;
        m_phant = NULL;
    }
    ;

    m_has_rad = false;

    if (m_rad)
    {
        delete m_rad;
        m_rad = NULL;
    }
    ;

    m_has_sSub = false;

    if (m_sSub)
    {
        delete m_sSub;
        m_sSub = NULL;
    }
    ;

    m_has_sSubSup = false;

    if (m_sSubSup)
    {
        delete m_sSubSup;
        m_sSubSup = NULL;
    }
    ;

    m_has_sSup = false;

    if (m_sSup)
    {
        delete m_sSup;
        m_sSup = NULL;
    }
    ;

    m_has_r = false;

    if (m_r)
    {
        delete m_r;
        m_r = NULL;
    }
    ;

    m_has_sPre = true;
    if (!m_sPre)
    {
        m_sPre = new CT_SPre();
    }
    return m_sPre;
}

const CT_SPre& oMath_element::ChildGroup_1::get_sPre() const
{
    if (m_sPre)
    {
        return *m_sPre;
    }
    return CT_SPre::default_instance();
}

bool oMath_element::ChildGroup_1::has_sSub() const
{
    return m_has_sSub;
}

CT_SSub* oMath_element::ChildGroup_1::mutable_sSub()
{

    m_has_acc = false;

    if (m_acc)
    {
        delete m_acc;
        m_acc = NULL;
    }
    ;

    m_has_bar = false;

    if (m_bar)
    {
        delete m_bar;
        m_bar = NULL;
    }
    ;

    m_has_box = false;

    if (m_box)
    {
        delete m_box;
        m_box = NULL;
    }
    ;

    m_has_borderBox = false;

    if (m_borderBox)
    {
        delete m_borderBox;
        m_borderBox = NULL;
    }
    ;

    m_has_d = false;

    if (m_d)
    {
        delete m_d;
        m_d = NULL;
    }
    ;

    m_has_eqArr = false;

    if (m_eqArr)
    {
        delete m_eqArr;
        m_eqArr = NULL;
    }
    ;

    m_has_f = false;

    if (m_f)
    {
        delete m_f;
        m_f = NULL;
    }
    ;

    m_has_func = false;

    if (m_func)
    {
        delete m_func;
        m_func = NULL;
    }
    ;

    m_has_groupChr = false;

    if (m_groupChr)
    {
        delete m_groupChr;
        m_groupChr = NULL;
    }
    ;

    m_has_limLow = false;

    if (m_limLow)
    {
        delete m_limLow;
        m_limLow = NULL;
    }
    ;

    m_has_limUpp = false;

    if (m_limUpp)
    {
        delete m_limUpp;
        m_limUpp = NULL;
    }
    ;

    m_has_m = false;

    if (m_m)
    {
        delete m_m;
        m_m = NULL;
    }
    ;

    m_has_nary = false;

    if (m_nary)
    {
        delete m_nary;
        m_nary = NULL;
    }
    ;

    m_has_phant = false;

    if (m_phant)
    {
        delete m_phant;
        m_phant = NULL;
    }
    ;

    m_has_rad = false;

    if (m_rad)
    {
        delete m_rad;
        m_rad = NULL;
    }
    ;

    m_has_sPre = false;

    if (m_sPre)
    {
        delete m_sPre;
        m_sPre = NULL;
    }
    ;

    m_has_sSubSup = false;

    if (m_sSubSup)
    {
        delete m_sSubSup;
        m_sSubSup = NULL;
    }
    ;

    m_has_sSup = false;

    if (m_sSup)
    {
        delete m_sSup;
        m_sSup = NULL;
    }
    ;

    m_has_r = false;

    if (m_r)
    {
        delete m_r;
        m_r = NULL;
    }
    ;

    m_has_sSub = true;
    if (!m_sSub)
    {
        m_sSub = new CT_SSub();
    }
    return m_sSub;
}

const CT_SSub& oMath_element::ChildGroup_1::get_sSub() const
{
    if (m_sSub)
    {
        return *m_sSub;
    }
    return CT_SSub::default_instance();
}

bool oMath_element::ChildGroup_1::has_sSubSup() const
{
    return m_has_sSubSup;
}

CT_SSubSup* oMath_element::ChildGroup_1::mutable_sSubSup()
{

    m_has_acc = false;

    if (m_acc)
    {
        delete m_acc;
        m_acc = NULL;
    }
    ;

    m_has_bar = false;

    if (m_bar)
    {
        delete m_bar;
        m_bar = NULL;
    }
    ;

    m_has_box = false;

    if (m_box)
    {
        delete m_box;
        m_box = NULL;
    }
    ;

    m_has_borderBox = false;

    if (m_borderBox)
    {
        delete m_borderBox;
        m_borderBox = NULL;
    }
    ;

    m_has_d = false;

    if (m_d)
    {
        delete m_d;
        m_d = NULL;
    }
    ;

    m_has_eqArr = false;

    if (m_eqArr)
    {
        delete m_eqArr;
        m_eqArr = NULL;
    }
    ;

    m_has_f = false;

    if (m_f)
    {
        delete m_f;
        m_f = NULL;
    }
    ;

    m_has_func = false;

    if (m_func)
    {
        delete m_func;
        m_func = NULL;
    }
    ;

    m_has_groupChr = false;

    if (m_groupChr)
    {
        delete m_groupChr;
        m_groupChr = NULL;
    }
    ;

    m_has_limLow = false;

    if (m_limLow)
    {
        delete m_limLow;
        m_limLow = NULL;
    }
    ;

    m_has_limUpp = false;

    if (m_limUpp)
    {
        delete m_limUpp;
        m_limUpp = NULL;
    }
    ;

    m_has_m = false;

    if (m_m)
    {
        delete m_m;
        m_m = NULL;
    }
    ;

    m_has_nary = false;

    if (m_nary)
    {
        delete m_nary;
        m_nary = NULL;
    }
    ;

    m_has_phant = false;

    if (m_phant)
    {
        delete m_phant;
        m_phant = NULL;
    }
    ;

    m_has_rad = false;

    if (m_rad)
    {
        delete m_rad;
        m_rad = NULL;
    }
    ;

    m_has_sPre = false;

    if (m_sPre)
    {
        delete m_sPre;
        m_sPre = NULL;
    }
    ;

    m_has_sSub = false;

    if (m_sSub)
    {
        delete m_sSub;
        m_sSub = NULL;
    }
    ;

    m_has_sSup = false;

    if (m_sSup)
    {
        delete m_sSup;
        m_sSup = NULL;
    }
    ;

    m_has_r = false;

    if (m_r)
    {
        delete m_r;
        m_r = NULL;
    }
    ;

    m_has_sSubSup = true;
    if (!m_sSubSup)
    {
        m_sSubSup = new CT_SSubSup();
    }
    return m_sSubSup;
}

const CT_SSubSup& oMath_element::ChildGroup_1::get_sSubSup() const
{
    if (m_sSubSup)
    {
        return *m_sSubSup;
    }
    return CT_SSubSup::default_instance();
}

bool oMath_element::ChildGroup_1::has_sSup() const
{
    return m_has_sSup;
}

CT_SSup* oMath_element::ChildGroup_1::mutable_sSup()
{

    m_has_acc = false;

    if (m_acc)
    {
        delete m_acc;
        m_acc = NULL;
    }
    ;

    m_has_bar = false;

    if (m_bar)
    {
        delete m_bar;
        m_bar = NULL;
    }
    ;

    m_has_box = false;

    if (m_box)
    {
        delete m_box;
        m_box = NULL;
    }
    ;

    m_has_borderBox = false;

    if (m_borderBox)
    {
        delete m_borderBox;
        m_borderBox = NULL;
    }
    ;

    m_has_d = false;

    if (m_d)
    {
        delete m_d;
        m_d = NULL;
    }
    ;

    m_has_eqArr = false;

    if (m_eqArr)
    {
        delete m_eqArr;
        m_eqArr = NULL;
    }
    ;

    m_has_f = false;

    if (m_f)
    {
        delete m_f;
        m_f = NULL;
    }
    ;

    m_has_func = false;

    if (m_func)
    {
        delete m_func;
        m_func = NULL;
    }
    ;

    m_has_groupChr = false;

    if (m_groupChr)
    {
        delete m_groupChr;
        m_groupChr = NULL;
    }
    ;

    m_has_limLow = false;

    if (m_limLow)
    {
        delete m_limLow;
        m_limLow = NULL;
    }
    ;

    m_has_limUpp = false;

    if (m_limUpp)
    {
        delete m_limUpp;
        m_limUpp = NULL;
    }
    ;

    m_has_m = false;

    if (m_m)
    {
        delete m_m;
        m_m = NULL;
    }
    ;

    m_has_nary = false;

    if (m_nary)
    {
        delete m_nary;
        m_nary = NULL;
    }
    ;

    m_has_phant = false;

    if (m_phant)
    {
        delete m_phant;
        m_phant = NULL;
    }
    ;

    m_has_rad = false;

    if (m_rad)
    {
        delete m_rad;
        m_rad = NULL;
    }
    ;

    m_has_sPre = false;

    if (m_sPre)
    {
        delete m_sPre;
        m_sPre = NULL;
    }
    ;

    m_has_sSub = false;

    if (m_sSub)
    {
        delete m_sSub;
        m_sSub = NULL;
    }
    ;

    m_has_sSubSup = false;

    if (m_sSubSup)
    {
        delete m_sSubSup;
        m_sSubSup = NULL;
    }
    ;

    m_has_r = false;

    if (m_r)
    {
        delete m_r;
        m_r = NULL;
    }
    ;

    m_has_sSup = true;
    if (!m_sSup)
    {
        m_sSup = new CT_SSup();
    }
    return m_sSup;
}

const CT_SSup& oMath_element::ChildGroup_1::get_sSup() const
{
    if (m_sSup)
    {
        return *m_sSup;
    }
    return CT_SSup::default_instance();
}

bool oMath_element::ChildGroup_1::has_r() const
{
    return m_has_r;
}

CT_R* oMath_element::ChildGroup_1::mutable_r()
{

    m_has_acc = false;

    if (m_acc)
    {
        delete m_acc;
        m_acc = NULL;
    }
    ;

    m_has_bar = false;

    if (m_bar)
    {
        delete m_bar;
        m_bar = NULL;
    }
    ;

    m_has_box = false;

    if (m_box)
    {
        delete m_box;
        m_box = NULL;
    }
    ;

    m_has_borderBox = false;

    if (m_borderBox)
    {
        delete m_borderBox;
        m_borderBox = NULL;
    }
    ;

    m_has_d = false;

    if (m_d)
    {
        delete m_d;
        m_d = NULL;
    }
    ;

    m_has_eqArr = false;

    if (m_eqArr)
    {
        delete m_eqArr;
        m_eqArr = NULL;
    }
    ;

    m_has_f = false;

    if (m_f)
    {
        delete m_f;
        m_f = NULL;
    }
    ;

    m_has_func = false;

    if (m_func)
    {
        delete m_func;
        m_func = NULL;
    }
    ;

    m_has_groupChr = false;

    if (m_groupChr)
    {
        delete m_groupChr;
        m_groupChr = NULL;
    }
    ;

    m_has_limLow = false;

    if (m_limLow)
    {
        delete m_limLow;
        m_limLow = NULL;
    }
    ;

    m_has_limUpp = false;

    if (m_limUpp)
    {
        delete m_limUpp;
        m_limUpp = NULL;
    }
    ;

    m_has_m = false;

    if (m_m)
    {
        delete m_m;
        m_m = NULL;
    }
    ;

    m_has_nary = false;

    if (m_nary)
    {
        delete m_nary;
        m_nary = NULL;
    }
    ;

    m_has_phant = false;

    if (m_phant)
    {
        delete m_phant;
        m_phant = NULL;
    }
    ;

    m_has_rad = false;

    if (m_rad)
    {
        delete m_rad;
        m_rad = NULL;
    }
    ;

    m_has_sPre = false;

    if (m_sPre)
    {
        delete m_sPre;
        m_sPre = NULL;
    }
    ;

    m_has_sSub = false;

    if (m_sSub)
    {
        delete m_sSub;
        m_sSub = NULL;
    }
    ;

    m_has_sSubSup = false;

    if (m_sSubSup)
    {
        delete m_sSubSup;
        m_sSubSup = NULL;
    }
    ;

    m_has_sSup = false;

    if (m_sSup)
    {
        delete m_sSup;
        m_sSup = NULL;
    }
    ;

    m_has_r = true;
    if (!m_r)
    {
        m_r = new CT_R();
    }
    return m_r;
}

const CT_R& oMath_element::ChildGroup_1::get_r() const
{
    if (m_r)
    {
        return *m_r;
    }
    return CT_R::default_instance();
}


// oMath_element::ChildGroup_2
oMath_element::ChildGroup_2::ChildGroup_2()
    :m_has_w_customXml(false),
     m_w_customXml(NULL),
     m_has_w_fldSimple(false),
     m_w_fldSimple(NULL),
     m_has_w_hyperlink(false),
     m_w_hyperlink(NULL)
{
}
bool oMath_element::ChildGroup_2::has_w_customXml() const
{
    return m_has_w_customXml;
}

ns_w::CT_CustomXmlRun* oMath_element::ChildGroup_2::mutable_w_customXml()
{

    m_has_w_fldSimple = false;

    if (m_w_fldSimple)
    {
        delete m_w_fldSimple;
        m_w_fldSimple = NULL;
    }
    ;

    m_has_w_hyperlink = false;

    if (m_w_hyperlink)
    {
        delete m_w_hyperlink;
        m_w_hyperlink = NULL;
    }
    ;

    m_has_w_customXml = true;
    if (!m_w_customXml)
    {
        m_w_customXml = new ns_w::CT_CustomXmlRun();
    }
    return m_w_customXml;
}

const ns_w::CT_CustomXmlRun& oMath_element::ChildGroup_2::get_w_customXml() const
{
    if (m_w_customXml)
    {
        return *m_w_customXml;
    }
    return ns_w::CT_CustomXmlRun::default_instance();
}

bool oMath_element::ChildGroup_2::has_w_fldSimple() const
{
    return m_has_w_fldSimple;
}

ns_w::CT_SimpleField* oMath_element::ChildGroup_2::mutable_w_fldSimple()
{

    m_has_w_customXml = false;

    if (m_w_customXml)
    {
        delete m_w_customXml;
        m_w_customXml = NULL;
    }
    ;

    m_has_w_hyperlink = false;

    if (m_w_hyperlink)
    {
        delete m_w_hyperlink;
        m_w_hyperlink = NULL;
    }
    ;

    m_has_w_fldSimple = true;
    if (!m_w_fldSimple)
    {
        m_w_fldSimple = new ns_w::CT_SimpleField();
    }
    return m_w_fldSimple;
}

const ns_w::CT_SimpleField& oMath_element::ChildGroup_2::get_w_fldSimple() const
{
    if (m_w_fldSimple)
    {
        return *m_w_fldSimple;
    }
    return ns_w::CT_SimpleField::default_instance();
}

bool oMath_element::ChildGroup_2::has_w_hyperlink() const
{
    return m_has_w_hyperlink;
}

ns_w::CT_Hyperlink* oMath_element::ChildGroup_2::mutable_w_hyperlink()
{

    m_has_w_customXml = false;

    if (m_w_customXml)
    {
        delete m_w_customXml;
        m_w_customXml = NULL;
    }
    ;

    m_has_w_fldSimple = false;

    if (m_w_fldSimple)
    {
        delete m_w_fldSimple;
        m_w_fldSimple = NULL;
    }
    ;

    m_has_w_hyperlink = true;
    if (!m_w_hyperlink)
    {
        m_w_hyperlink = new ns_w::CT_Hyperlink();
    }
    return m_w_hyperlink;
}

const ns_w::CT_Hyperlink& oMath_element::ChildGroup_2::get_w_hyperlink() const
{
    if (m_w_hyperlink)
    {
        return *m_w_hyperlink;
    }
    return ns_w::CT_Hyperlink::default_instance();
}


// oMath_element::ChildGroup_3
oMath_element::ChildGroup_3::ChildGroup_3()
    :m_has_w_smartTag(false),
     m_w_smartTag(NULL),
     m_has_w_sdt(false),
     m_w_sdt(NULL)
{
}
bool oMath_element::ChildGroup_3::has_w_smartTag() const
{
    return m_has_w_smartTag;
}

ns_w::CT_SmartTagRun* oMath_element::ChildGroup_3::mutable_w_smartTag()
{

    m_has_w_sdt = false;

    if (m_w_sdt)
    {
        delete m_w_sdt;
        m_w_sdt = NULL;
    }
    ;

    m_has_w_smartTag = true;
    if (!m_w_smartTag)
    {
        m_w_smartTag = new ns_w::CT_SmartTagRun();
    }
    return m_w_smartTag;
}

const ns_w::CT_SmartTagRun& oMath_element::ChildGroup_3::get_w_smartTag() const
{
    if (m_w_smartTag)
    {
        return *m_w_smartTag;
    }
    return ns_w::CT_SmartTagRun::default_instance();
}

bool oMath_element::ChildGroup_3::has_w_sdt() const
{
    return m_has_w_sdt;
}

ns_w::CT_SdtRun* oMath_element::ChildGroup_3::mutable_w_sdt()
{

    m_has_w_smartTag = false;

    if (m_w_smartTag)
    {
        delete m_w_smartTag;
        m_w_smartTag = NULL;
    }
    ;

    m_has_w_sdt = true;
    if (!m_w_sdt)
    {
        m_w_sdt = new ns_w::CT_SdtRun();
    }
    return m_w_sdt;
}

const ns_w::CT_SdtRun& oMath_element::ChildGroup_3::get_w_sdt() const
{
    if (m_w_sdt)
    {
        return *m_w_sdt;
    }
    return ns_w::CT_SdtRun::default_instance();
}


// oMath_element::ChildGroup_4
oMath_element::ChildGroup_4::ChildGroup_4()
    :m_has_w_proofErr(false),
     m_w_proofErr(NULL),
     m_has_w_permStart(false),
     m_w_permStart(NULL),
     m_has_w_permEnd(false),
     m_w_permEnd(NULL)
{
}
bool oMath_element::ChildGroup_4::has_w_proofErr() const
{
    return m_has_w_proofErr;
}

ns_w::CT_ProofErr* oMath_element::ChildGroup_4::mutable_w_proofErr()
{

    m_has_w_permStart = false;

    if (m_w_permStart)
    {
        delete m_w_permStart;
        m_w_permStart = NULL;
    }
    ;

    m_has_w_permEnd = false;

    if (m_w_permEnd)
    {
        delete m_w_permEnd;
        m_w_permEnd = NULL;
    }
    ;

    m_has_w_proofErr = true;
    if (!m_w_proofErr)
    {
        m_w_proofErr = new ns_w::CT_ProofErr();
    }
    return m_w_proofErr;
}

const ns_w::CT_ProofErr& oMath_element::ChildGroup_4::get_w_proofErr() const
{
    if (m_w_proofErr)
    {
        return *m_w_proofErr;
    }
    return ns_w::CT_ProofErr::default_instance();
}

bool oMath_element::ChildGroup_4::has_w_permStart() const
{
    return m_has_w_permStart;
}

ns_w::CT_PermStart* oMath_element::ChildGroup_4::mutable_w_permStart()
{

    m_has_w_proofErr = false;

    if (m_w_proofErr)
    {
        delete m_w_proofErr;
        m_w_proofErr = NULL;
    }
    ;

    m_has_w_permEnd = false;

    if (m_w_permEnd)
    {
        delete m_w_permEnd;
        m_w_permEnd = NULL;
    }
    ;

    m_has_w_permStart = true;
    if (!m_w_permStart)
    {
        m_w_permStart = new ns_w::CT_PermStart();
    }
    return m_w_permStart;
}

const ns_w::CT_PermStart& oMath_element::ChildGroup_4::get_w_permStart() const
{
    if (m_w_permStart)
    {
        return *m_w_permStart;
    }
    return ns_w::CT_PermStart::default_instance();
}

bool oMath_element::ChildGroup_4::has_w_permEnd() const
{
    return m_has_w_permEnd;
}

ns_w::CT_Perm* oMath_element::ChildGroup_4::mutable_w_permEnd()
{

    m_has_w_proofErr = false;

    if (m_w_proofErr)
    {
        delete m_w_proofErr;
        m_w_proofErr = NULL;
    }
    ;

    m_has_w_permStart = false;

    if (m_w_permStart)
    {
        delete m_w_permStart;
        m_w_permStart = NULL;
    }
    ;

    m_has_w_permEnd = true;
    if (!m_w_permEnd)
    {
        m_w_permEnd = new ns_w::CT_Perm();
    }
    return m_w_permEnd;
}

const ns_w::CT_Perm& oMath_element::ChildGroup_4::get_w_permEnd() const
{
    if (m_w_permEnd)
    {
        return *m_w_permEnd;
    }
    return ns_w::CT_Perm::default_instance();
}


// oMath_element::ChildGroup_5
oMath_element::ChildGroup_5::ChildGroup_5()
    :m_has_w_bookmarkStart(false),
     m_w_bookmarkStart(NULL),
     m_has_w_bookmarkEnd(false),
     m_w_bookmarkEnd(NULL),
     m_has_w_moveFromRangeStart(false),
     m_w_moveFromRangeStart(NULL),
     m_has_w_moveFromRangeEnd(false),
     m_w_moveFromRangeEnd(NULL),
     m_has_w_moveToRangeStart(false),
     m_w_moveToRangeStart(NULL),
     m_has_w_moveToRangeEnd(false),
     m_w_moveToRangeEnd(NULL),
     m_has_w_commentRangeStart(false),
     m_w_commentRangeStart(NULL),
     m_has_w_commentRangeEnd(false),
     m_w_commentRangeEnd(NULL),
     m_has_w_customXmlInsRangeStart(false),
     m_w_customXmlInsRangeStart(NULL),
     m_has_w_customXmlInsRangeEnd(false),
     m_w_customXmlInsRangeEnd(NULL),
     m_has_w_customXmlDelRangeStart(false),
     m_w_customXmlDelRangeStart(NULL),
     m_has_w_customXmlDelRangeEnd(false),
     m_w_customXmlDelRangeEnd(NULL),
     m_has_w_customXmlMoveFromRangeStart(false),
     m_w_customXmlMoveFromRangeStart(NULL),
     m_has_w_customXmlMoveFromRangeEnd(false),
     m_w_customXmlMoveFromRangeEnd(NULL),
     m_has_w_customXmlMoveToRangeStart(false),
     m_w_customXmlMoveToRangeStart(NULL),
     m_has_w_customXmlMoveToRangeEnd(false),
     m_w_customXmlMoveToRangeEnd(NULL)
{
}
bool oMath_element::ChildGroup_5::has_w_bookmarkStart() const
{
    return m_has_w_bookmarkStart;
}

ns_w::CT_Bookmark* oMath_element::ChildGroup_5::mutable_w_bookmarkStart()
{

    m_has_w_bookmarkEnd = false;

    if (m_w_bookmarkEnd)
    {
        delete m_w_bookmarkEnd;
        m_w_bookmarkEnd = NULL;
    }
    ;

    m_has_w_moveFromRangeStart = false;

    if (m_w_moveFromRangeStart)
    {
        delete m_w_moveFromRangeStart;
        m_w_moveFromRangeStart = NULL;
    }
    ;

    m_has_w_moveFromRangeEnd = false;

    if (m_w_moveFromRangeEnd)
    {
        delete m_w_moveFromRangeEnd;
        m_w_moveFromRangeEnd = NULL;
    }
    ;

    m_has_w_moveToRangeStart = false;

    if (m_w_moveToRangeStart)
    {
        delete m_w_moveToRangeStart;
        m_w_moveToRangeStart = NULL;
    }
    ;

    m_has_w_moveToRangeEnd = false;

    if (m_w_moveToRangeEnd)
    {
        delete m_w_moveToRangeEnd;
        m_w_moveToRangeEnd = NULL;
    }
    ;

    m_has_w_commentRangeStart = false;

    if (m_w_commentRangeStart)
    {
        delete m_w_commentRangeStart;
        m_w_commentRangeStart = NULL;
    }
    ;

    m_has_w_commentRangeEnd = false;

    if (m_w_commentRangeEnd)
    {
        delete m_w_commentRangeEnd;
        m_w_commentRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlInsRangeStart = false;

    if (m_w_customXmlInsRangeStart)
    {
        delete m_w_customXmlInsRangeStart;
        m_w_customXmlInsRangeStart = NULL;
    }
    ;

    m_has_w_customXmlInsRangeEnd = false;

    if (m_w_customXmlInsRangeEnd)
    {
        delete m_w_customXmlInsRangeEnd;
        m_w_customXmlInsRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlDelRangeStart = false;

    if (m_w_customXmlDelRangeStart)
    {
        delete m_w_customXmlDelRangeStart;
        m_w_customXmlDelRangeStart = NULL;
    }
    ;

    m_has_w_customXmlDelRangeEnd = false;

    if (m_w_customXmlDelRangeEnd)
    {
        delete m_w_customXmlDelRangeEnd;
        m_w_customXmlDelRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlMoveFromRangeStart = false;

    if (m_w_customXmlMoveFromRangeStart)
    {
        delete m_w_customXmlMoveFromRangeStart;
        m_w_customXmlMoveFromRangeStart = NULL;
    }
    ;

    m_has_w_customXmlMoveFromRangeEnd = false;

    if (m_w_customXmlMoveFromRangeEnd)
    {
        delete m_w_customXmlMoveFromRangeEnd;
        m_w_customXmlMoveFromRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlMoveToRangeStart = false;

    if (m_w_customXmlMoveToRangeStart)
    {
        delete m_w_customXmlMoveToRangeStart;
        m_w_customXmlMoveToRangeStart = NULL;
    }
    ;

    m_has_w_customXmlMoveToRangeEnd = false;

    if (m_w_customXmlMoveToRangeEnd)
    {
        delete m_w_customXmlMoveToRangeEnd;
        m_w_customXmlMoveToRangeEnd = NULL;
    }
    ;

    m_has_w_bookmarkStart = true;
    if (!m_w_bookmarkStart)
    {
        m_w_bookmarkStart = new ns_w::CT_Bookmark();
    }
    return m_w_bookmarkStart;
}

const ns_w::CT_Bookmark& oMath_element::ChildGroup_5::get_w_bookmarkStart() const
{
    if (m_w_bookmarkStart)
    {
        return *m_w_bookmarkStart;
    }
    return ns_w::CT_Bookmark::default_instance();
}

bool oMath_element::ChildGroup_5::has_w_bookmarkEnd() const
{
    return m_has_w_bookmarkEnd;
}

ns_w::CT_MarkupRange* oMath_element::ChildGroup_5::mutable_w_bookmarkEnd()
{

    m_has_w_bookmarkStart = false;

    if (m_w_bookmarkStart)
    {
        delete m_w_bookmarkStart;
        m_w_bookmarkStart = NULL;
    }
    ;

    m_has_w_moveFromRangeStart = false;

    if (m_w_moveFromRangeStart)
    {
        delete m_w_moveFromRangeStart;
        m_w_moveFromRangeStart = NULL;
    }
    ;

    m_has_w_moveFromRangeEnd = false;

    if (m_w_moveFromRangeEnd)
    {
        delete m_w_moveFromRangeEnd;
        m_w_moveFromRangeEnd = NULL;
    }
    ;

    m_has_w_moveToRangeStart = false;

    if (m_w_moveToRangeStart)
    {
        delete m_w_moveToRangeStart;
        m_w_moveToRangeStart = NULL;
    }
    ;

    m_has_w_moveToRangeEnd = false;

    if (m_w_moveToRangeEnd)
    {
        delete m_w_moveToRangeEnd;
        m_w_moveToRangeEnd = NULL;
    }
    ;

    m_has_w_commentRangeStart = false;

    if (m_w_commentRangeStart)
    {
        delete m_w_commentRangeStart;
        m_w_commentRangeStart = NULL;
    }
    ;

    m_has_w_commentRangeEnd = false;

    if (m_w_commentRangeEnd)
    {
        delete m_w_commentRangeEnd;
        m_w_commentRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlInsRangeStart = false;

    if (m_w_customXmlInsRangeStart)
    {
        delete m_w_customXmlInsRangeStart;
        m_w_customXmlInsRangeStart = NULL;
    }
    ;

    m_has_w_customXmlInsRangeEnd = false;

    if (m_w_customXmlInsRangeEnd)
    {
        delete m_w_customXmlInsRangeEnd;
        m_w_customXmlInsRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlDelRangeStart = false;

    if (m_w_customXmlDelRangeStart)
    {
        delete m_w_customXmlDelRangeStart;
        m_w_customXmlDelRangeStart = NULL;
    }
    ;

    m_has_w_customXmlDelRangeEnd = false;

    if (m_w_customXmlDelRangeEnd)
    {
        delete m_w_customXmlDelRangeEnd;
        m_w_customXmlDelRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlMoveFromRangeStart = false;

    if (m_w_customXmlMoveFromRangeStart)
    {
        delete m_w_customXmlMoveFromRangeStart;
        m_w_customXmlMoveFromRangeStart = NULL;
    }
    ;

    m_has_w_customXmlMoveFromRangeEnd = false;

    if (m_w_customXmlMoveFromRangeEnd)
    {
        delete m_w_customXmlMoveFromRangeEnd;
        m_w_customXmlMoveFromRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlMoveToRangeStart = false;

    if (m_w_customXmlMoveToRangeStart)
    {
        delete m_w_customXmlMoveToRangeStart;
        m_w_customXmlMoveToRangeStart = NULL;
    }
    ;

    m_has_w_customXmlMoveToRangeEnd = false;

    if (m_w_customXmlMoveToRangeEnd)
    {
        delete m_w_customXmlMoveToRangeEnd;
        m_w_customXmlMoveToRangeEnd = NULL;
    }
    ;

    m_has_w_bookmarkEnd = true;
    if (!m_w_bookmarkEnd)
    {
        m_w_bookmarkEnd = new ns_w::CT_MarkupRange();
    }
    return m_w_bookmarkEnd;
}

const ns_w::CT_MarkupRange& oMath_element::ChildGroup_5::get_w_bookmarkEnd() const
{
    if (m_w_bookmarkEnd)
    {
        return *m_w_bookmarkEnd;
    }
    return ns_w::CT_MarkupRange::default_instance();
}

bool oMath_element::ChildGroup_5::has_w_moveFromRangeStart() const
{
    return m_has_w_moveFromRangeStart;
}

ns_w::CT_MoveBookmark* oMath_element::ChildGroup_5::mutable_w_moveFromRangeStart()
{

    m_has_w_bookmarkStart = false;

    if (m_w_bookmarkStart)
    {
        delete m_w_bookmarkStart;
        m_w_bookmarkStart = NULL;
    }
    ;

    m_has_w_bookmarkEnd = false;

    if (m_w_bookmarkEnd)
    {
        delete m_w_bookmarkEnd;
        m_w_bookmarkEnd = NULL;
    }
    ;

    m_has_w_moveFromRangeEnd = false;

    if (m_w_moveFromRangeEnd)
    {
        delete m_w_moveFromRangeEnd;
        m_w_moveFromRangeEnd = NULL;
    }
    ;

    m_has_w_moveToRangeStart = false;

    if (m_w_moveToRangeStart)
    {
        delete m_w_moveToRangeStart;
        m_w_moveToRangeStart = NULL;
    }
    ;

    m_has_w_moveToRangeEnd = false;

    if (m_w_moveToRangeEnd)
    {
        delete m_w_moveToRangeEnd;
        m_w_moveToRangeEnd = NULL;
    }
    ;

    m_has_w_commentRangeStart = false;

    if (m_w_commentRangeStart)
    {
        delete m_w_commentRangeStart;
        m_w_commentRangeStart = NULL;
    }
    ;

    m_has_w_commentRangeEnd = false;

    if (m_w_commentRangeEnd)
    {
        delete m_w_commentRangeEnd;
        m_w_commentRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlInsRangeStart = false;

    if (m_w_customXmlInsRangeStart)
    {
        delete m_w_customXmlInsRangeStart;
        m_w_customXmlInsRangeStart = NULL;
    }
    ;

    m_has_w_customXmlInsRangeEnd = false;

    if (m_w_customXmlInsRangeEnd)
    {
        delete m_w_customXmlInsRangeEnd;
        m_w_customXmlInsRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlDelRangeStart = false;

    if (m_w_customXmlDelRangeStart)
    {
        delete m_w_customXmlDelRangeStart;
        m_w_customXmlDelRangeStart = NULL;
    }
    ;

    m_has_w_customXmlDelRangeEnd = false;

    if (m_w_customXmlDelRangeEnd)
    {
        delete m_w_customXmlDelRangeEnd;
        m_w_customXmlDelRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlMoveFromRangeStart = false;

    if (m_w_customXmlMoveFromRangeStart)
    {
        delete m_w_customXmlMoveFromRangeStart;
        m_w_customXmlMoveFromRangeStart = NULL;
    }
    ;

    m_has_w_customXmlMoveFromRangeEnd = false;

    if (m_w_customXmlMoveFromRangeEnd)
    {
        delete m_w_customXmlMoveFromRangeEnd;
        m_w_customXmlMoveFromRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlMoveToRangeStart = false;

    if (m_w_customXmlMoveToRangeStart)
    {
        delete m_w_customXmlMoveToRangeStart;
        m_w_customXmlMoveToRangeStart = NULL;
    }
    ;

    m_has_w_customXmlMoveToRangeEnd = false;

    if (m_w_customXmlMoveToRangeEnd)
    {
        delete m_w_customXmlMoveToRangeEnd;
        m_w_customXmlMoveToRangeEnd = NULL;
    }
    ;

    m_has_w_moveFromRangeStart = true;
    if (!m_w_moveFromRangeStart)
    {
        m_w_moveFromRangeStart = new ns_w::CT_MoveBookmark();
    }
    return m_w_moveFromRangeStart;
}

const ns_w::CT_MoveBookmark& oMath_element::ChildGroup_5::get_w_moveFromRangeStart() const
{
    if (m_w_moveFromRangeStart)
    {
        return *m_w_moveFromRangeStart;
    }
    return ns_w::CT_MoveBookmark::default_instance();
}

bool oMath_element::ChildGroup_5::has_w_moveFromRangeEnd() const
{
    return m_has_w_moveFromRangeEnd;
}

ns_w::CT_MarkupRange* oMath_element::ChildGroup_5::mutable_w_moveFromRangeEnd()
{

    m_has_w_bookmarkStart = false;

    if (m_w_bookmarkStart)
    {
        delete m_w_bookmarkStart;
        m_w_bookmarkStart = NULL;
    }
    ;

    m_has_w_bookmarkEnd = false;

    if (m_w_bookmarkEnd)
    {
        delete m_w_bookmarkEnd;
        m_w_bookmarkEnd = NULL;
    }
    ;

    m_has_w_moveFromRangeStart = false;

    if (m_w_moveFromRangeStart)
    {
        delete m_w_moveFromRangeStart;
        m_w_moveFromRangeStart = NULL;
    }
    ;

    m_has_w_moveToRangeStart = false;

    if (m_w_moveToRangeStart)
    {
        delete m_w_moveToRangeStart;
        m_w_moveToRangeStart = NULL;
    }
    ;

    m_has_w_moveToRangeEnd = false;

    if (m_w_moveToRangeEnd)
    {
        delete m_w_moveToRangeEnd;
        m_w_moveToRangeEnd = NULL;
    }
    ;

    m_has_w_commentRangeStart = false;

    if (m_w_commentRangeStart)
    {
        delete m_w_commentRangeStart;
        m_w_commentRangeStart = NULL;
    }
    ;

    m_has_w_commentRangeEnd = false;

    if (m_w_commentRangeEnd)
    {
        delete m_w_commentRangeEnd;
        m_w_commentRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlInsRangeStart = false;

    if (m_w_customXmlInsRangeStart)
    {
        delete m_w_customXmlInsRangeStart;
        m_w_customXmlInsRangeStart = NULL;
    }
    ;

    m_has_w_customXmlInsRangeEnd = false;

    if (m_w_customXmlInsRangeEnd)
    {
        delete m_w_customXmlInsRangeEnd;
        m_w_customXmlInsRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlDelRangeStart = false;

    if (m_w_customXmlDelRangeStart)
    {
        delete m_w_customXmlDelRangeStart;
        m_w_customXmlDelRangeStart = NULL;
    }
    ;

    m_has_w_customXmlDelRangeEnd = false;

    if (m_w_customXmlDelRangeEnd)
    {
        delete m_w_customXmlDelRangeEnd;
        m_w_customXmlDelRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlMoveFromRangeStart = false;

    if (m_w_customXmlMoveFromRangeStart)
    {
        delete m_w_customXmlMoveFromRangeStart;
        m_w_customXmlMoveFromRangeStart = NULL;
    }
    ;

    m_has_w_customXmlMoveFromRangeEnd = false;

    if (m_w_customXmlMoveFromRangeEnd)
    {
        delete m_w_customXmlMoveFromRangeEnd;
        m_w_customXmlMoveFromRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlMoveToRangeStart = false;

    if (m_w_customXmlMoveToRangeStart)
    {
        delete m_w_customXmlMoveToRangeStart;
        m_w_customXmlMoveToRangeStart = NULL;
    }
    ;

    m_has_w_customXmlMoveToRangeEnd = false;

    if (m_w_customXmlMoveToRangeEnd)
    {
        delete m_w_customXmlMoveToRangeEnd;
        m_w_customXmlMoveToRangeEnd = NULL;
    }
    ;

    m_has_w_moveFromRangeEnd = true;
    if (!m_w_moveFromRangeEnd)
    {
        m_w_moveFromRangeEnd = new ns_w::CT_MarkupRange();
    }
    return m_w_moveFromRangeEnd;
}

const ns_w::CT_MarkupRange& oMath_element::ChildGroup_5::get_w_moveFromRangeEnd() const
{
    if (m_w_moveFromRangeEnd)
    {
        return *m_w_moveFromRangeEnd;
    }
    return ns_w::CT_MarkupRange::default_instance();
}

bool oMath_element::ChildGroup_5::has_w_moveToRangeStart() const
{
    return m_has_w_moveToRangeStart;
}

ns_w::CT_MoveBookmark* oMath_element::ChildGroup_5::mutable_w_moveToRangeStart()
{

    m_has_w_bookmarkStart = false;

    if (m_w_bookmarkStart)
    {
        delete m_w_bookmarkStart;
        m_w_bookmarkStart = NULL;
    }
    ;

    m_has_w_bookmarkEnd = false;

    if (m_w_bookmarkEnd)
    {
        delete m_w_bookmarkEnd;
        m_w_bookmarkEnd = NULL;
    }
    ;

    m_has_w_moveFromRangeStart = false;

    if (m_w_moveFromRangeStart)
    {
        delete m_w_moveFromRangeStart;
        m_w_moveFromRangeStart = NULL;
    }
    ;

    m_has_w_moveFromRangeEnd = false;

    if (m_w_moveFromRangeEnd)
    {
        delete m_w_moveFromRangeEnd;
        m_w_moveFromRangeEnd = NULL;
    }
    ;

    m_has_w_moveToRangeEnd = false;

    if (m_w_moveToRangeEnd)
    {
        delete m_w_moveToRangeEnd;
        m_w_moveToRangeEnd = NULL;
    }
    ;

    m_has_w_commentRangeStart = false;

    if (m_w_commentRangeStart)
    {
        delete m_w_commentRangeStart;
        m_w_commentRangeStart = NULL;
    }
    ;

    m_has_w_commentRangeEnd = false;

    if (m_w_commentRangeEnd)
    {
        delete m_w_commentRangeEnd;
        m_w_commentRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlInsRangeStart = false;

    if (m_w_customXmlInsRangeStart)
    {
        delete m_w_customXmlInsRangeStart;
        m_w_customXmlInsRangeStart = NULL;
    }
    ;

    m_has_w_customXmlInsRangeEnd = false;

    if (m_w_customXmlInsRangeEnd)
    {
        delete m_w_customXmlInsRangeEnd;
        m_w_customXmlInsRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlDelRangeStart = false;

    if (m_w_customXmlDelRangeStart)
    {
        delete m_w_customXmlDelRangeStart;
        m_w_customXmlDelRangeStart = NULL;
    }
    ;

    m_has_w_customXmlDelRangeEnd = false;

    if (m_w_customXmlDelRangeEnd)
    {
        delete m_w_customXmlDelRangeEnd;
        m_w_customXmlDelRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlMoveFromRangeStart = false;

    if (m_w_customXmlMoveFromRangeStart)
    {
        delete m_w_customXmlMoveFromRangeStart;
        m_w_customXmlMoveFromRangeStart = NULL;
    }
    ;

    m_has_w_customXmlMoveFromRangeEnd = false;

    if (m_w_customXmlMoveFromRangeEnd)
    {
        delete m_w_customXmlMoveFromRangeEnd;
        m_w_customXmlMoveFromRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlMoveToRangeStart = false;

    if (m_w_customXmlMoveToRangeStart)
    {
        delete m_w_customXmlMoveToRangeStart;
        m_w_customXmlMoveToRangeStart = NULL;
    }
    ;

    m_has_w_customXmlMoveToRangeEnd = false;

    if (m_w_customXmlMoveToRangeEnd)
    {
        delete m_w_customXmlMoveToRangeEnd;
        m_w_customXmlMoveToRangeEnd = NULL;
    }
    ;

    m_has_w_moveToRangeStart = true;
    if (!m_w_moveToRangeStart)
    {
        m_w_moveToRangeStart = new ns_w::CT_MoveBookmark();
    }
    return m_w_moveToRangeStart;
}

const ns_w::CT_MoveBookmark& oMath_element::ChildGroup_5::get_w_moveToRangeStart() const
{
    if (m_w_moveToRangeStart)
    {
        return *m_w_moveToRangeStart;
    }
    return ns_w::CT_MoveBookmark::default_instance();
}

bool oMath_element::ChildGroup_5::has_w_moveToRangeEnd() const
{
    return m_has_w_moveToRangeEnd;
}

ns_w::CT_MarkupRange* oMath_element::ChildGroup_5::mutable_w_moveToRangeEnd()
{

    m_has_w_bookmarkStart = false;

    if (m_w_bookmarkStart)
    {
        delete m_w_bookmarkStart;
        m_w_bookmarkStart = NULL;
    }
    ;

    m_has_w_bookmarkEnd = false;

    if (m_w_bookmarkEnd)
    {
        delete m_w_bookmarkEnd;
        m_w_bookmarkEnd = NULL;
    }
    ;

    m_has_w_moveFromRangeStart = false;

    if (m_w_moveFromRangeStart)
    {
        delete m_w_moveFromRangeStart;
        m_w_moveFromRangeStart = NULL;
    }
    ;

    m_has_w_moveFromRangeEnd = false;

    if (m_w_moveFromRangeEnd)
    {
        delete m_w_moveFromRangeEnd;
        m_w_moveFromRangeEnd = NULL;
    }
    ;

    m_has_w_moveToRangeStart = false;

    if (m_w_moveToRangeStart)
    {
        delete m_w_moveToRangeStart;
        m_w_moveToRangeStart = NULL;
    }
    ;

    m_has_w_commentRangeStart = false;

    if (m_w_commentRangeStart)
    {
        delete m_w_commentRangeStart;
        m_w_commentRangeStart = NULL;
    }
    ;

    m_has_w_commentRangeEnd = false;

    if (m_w_commentRangeEnd)
    {
        delete m_w_commentRangeEnd;
        m_w_commentRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlInsRangeStart = false;

    if (m_w_customXmlInsRangeStart)
    {
        delete m_w_customXmlInsRangeStart;
        m_w_customXmlInsRangeStart = NULL;
    }
    ;

    m_has_w_customXmlInsRangeEnd = false;

    if (m_w_customXmlInsRangeEnd)
    {
        delete m_w_customXmlInsRangeEnd;
        m_w_customXmlInsRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlDelRangeStart = false;

    if (m_w_customXmlDelRangeStart)
    {
        delete m_w_customXmlDelRangeStart;
        m_w_customXmlDelRangeStart = NULL;
    }
    ;

    m_has_w_customXmlDelRangeEnd = false;

    if (m_w_customXmlDelRangeEnd)
    {
        delete m_w_customXmlDelRangeEnd;
        m_w_customXmlDelRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlMoveFromRangeStart = false;

    if (m_w_customXmlMoveFromRangeStart)
    {
        delete m_w_customXmlMoveFromRangeStart;
        m_w_customXmlMoveFromRangeStart = NULL;
    }
    ;

    m_has_w_customXmlMoveFromRangeEnd = false;

    if (m_w_customXmlMoveFromRangeEnd)
    {
        delete m_w_customXmlMoveFromRangeEnd;
        m_w_customXmlMoveFromRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlMoveToRangeStart = false;

    if (m_w_customXmlMoveToRangeStart)
    {
        delete m_w_customXmlMoveToRangeStart;
        m_w_customXmlMoveToRangeStart = NULL;
    }
    ;

    m_has_w_customXmlMoveToRangeEnd = false;

    if (m_w_customXmlMoveToRangeEnd)
    {
        delete m_w_customXmlMoveToRangeEnd;
        m_w_customXmlMoveToRangeEnd = NULL;
    }
    ;

    m_has_w_moveToRangeEnd = true;
    if (!m_w_moveToRangeEnd)
    {
        m_w_moveToRangeEnd = new ns_w::CT_MarkupRange();
    }
    return m_w_moveToRangeEnd;
}

const ns_w::CT_MarkupRange& oMath_element::ChildGroup_5::get_w_moveToRangeEnd() const
{
    if (m_w_moveToRangeEnd)
    {
        return *m_w_moveToRangeEnd;
    }
    return ns_w::CT_MarkupRange::default_instance();
}

bool oMath_element::ChildGroup_5::has_w_commentRangeStart() const
{
    return m_has_w_commentRangeStart;
}

ns_w::CT_MarkupRange* oMath_element::ChildGroup_5::mutable_w_commentRangeStart()
{

    m_has_w_bookmarkStart = false;

    if (m_w_bookmarkStart)
    {
        delete m_w_bookmarkStart;
        m_w_bookmarkStart = NULL;
    }
    ;

    m_has_w_bookmarkEnd = false;

    if (m_w_bookmarkEnd)
    {
        delete m_w_bookmarkEnd;
        m_w_bookmarkEnd = NULL;
    }
    ;

    m_has_w_moveFromRangeStart = false;

    if (m_w_moveFromRangeStart)
    {
        delete m_w_moveFromRangeStart;
        m_w_moveFromRangeStart = NULL;
    }
    ;

    m_has_w_moveFromRangeEnd = false;

    if (m_w_moveFromRangeEnd)
    {
        delete m_w_moveFromRangeEnd;
        m_w_moveFromRangeEnd = NULL;
    }
    ;

    m_has_w_moveToRangeStart = false;

    if (m_w_moveToRangeStart)
    {
        delete m_w_moveToRangeStart;
        m_w_moveToRangeStart = NULL;
    }
    ;

    m_has_w_moveToRangeEnd = false;

    if (m_w_moveToRangeEnd)
    {
        delete m_w_moveToRangeEnd;
        m_w_moveToRangeEnd = NULL;
    }
    ;

    m_has_w_commentRangeEnd = false;

    if (m_w_commentRangeEnd)
    {
        delete m_w_commentRangeEnd;
        m_w_commentRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlInsRangeStart = false;

    if (m_w_customXmlInsRangeStart)
    {
        delete m_w_customXmlInsRangeStart;
        m_w_customXmlInsRangeStart = NULL;
    }
    ;

    m_has_w_customXmlInsRangeEnd = false;

    if (m_w_customXmlInsRangeEnd)
    {
        delete m_w_customXmlInsRangeEnd;
        m_w_customXmlInsRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlDelRangeStart = false;

    if (m_w_customXmlDelRangeStart)
    {
        delete m_w_customXmlDelRangeStart;
        m_w_customXmlDelRangeStart = NULL;
    }
    ;

    m_has_w_customXmlDelRangeEnd = false;

    if (m_w_customXmlDelRangeEnd)
    {
        delete m_w_customXmlDelRangeEnd;
        m_w_customXmlDelRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlMoveFromRangeStart = false;

    if (m_w_customXmlMoveFromRangeStart)
    {
        delete m_w_customXmlMoveFromRangeStart;
        m_w_customXmlMoveFromRangeStart = NULL;
    }
    ;

    m_has_w_customXmlMoveFromRangeEnd = false;

    if (m_w_customXmlMoveFromRangeEnd)
    {
        delete m_w_customXmlMoveFromRangeEnd;
        m_w_customXmlMoveFromRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlMoveToRangeStart = false;

    if (m_w_customXmlMoveToRangeStart)
    {
        delete m_w_customXmlMoveToRangeStart;
        m_w_customXmlMoveToRangeStart = NULL;
    }
    ;

    m_has_w_customXmlMoveToRangeEnd = false;

    if (m_w_customXmlMoveToRangeEnd)
    {
        delete m_w_customXmlMoveToRangeEnd;
        m_w_customXmlMoveToRangeEnd = NULL;
    }
    ;

    m_has_w_commentRangeStart = true;
    if (!m_w_commentRangeStart)
    {
        m_w_commentRangeStart = new ns_w::CT_MarkupRange();
    }
    return m_w_commentRangeStart;
}

const ns_w::CT_MarkupRange& oMath_element::ChildGroup_5::get_w_commentRangeStart() const
{
    if (m_w_commentRangeStart)
    {
        return *m_w_commentRangeStart;
    }
    return ns_w::CT_MarkupRange::default_instance();
}

bool oMath_element::ChildGroup_5::has_w_commentRangeEnd() const
{
    return m_has_w_commentRangeEnd;
}

ns_w::CT_MarkupRange* oMath_element::ChildGroup_5::mutable_w_commentRangeEnd()
{

    m_has_w_bookmarkStart = false;

    if (m_w_bookmarkStart)
    {
        delete m_w_bookmarkStart;
        m_w_bookmarkStart = NULL;
    }
    ;

    m_has_w_bookmarkEnd = false;

    if (m_w_bookmarkEnd)
    {
        delete m_w_bookmarkEnd;
        m_w_bookmarkEnd = NULL;
    }
    ;

    m_has_w_moveFromRangeStart = false;

    if (m_w_moveFromRangeStart)
    {
        delete m_w_moveFromRangeStart;
        m_w_moveFromRangeStart = NULL;
    }
    ;

    m_has_w_moveFromRangeEnd = false;

    if (m_w_moveFromRangeEnd)
    {
        delete m_w_moveFromRangeEnd;
        m_w_moveFromRangeEnd = NULL;
    }
    ;

    m_has_w_moveToRangeStart = false;

    if (m_w_moveToRangeStart)
    {
        delete m_w_moveToRangeStart;
        m_w_moveToRangeStart = NULL;
    }
    ;

    m_has_w_moveToRangeEnd = false;

    if (m_w_moveToRangeEnd)
    {
        delete m_w_moveToRangeEnd;
        m_w_moveToRangeEnd = NULL;
    }
    ;

    m_has_w_commentRangeStart = false;

    if (m_w_commentRangeStart)
    {
        delete m_w_commentRangeStart;
        m_w_commentRangeStart = NULL;
    }
    ;

    m_has_w_customXmlInsRangeStart = false;

    if (m_w_customXmlInsRangeStart)
    {
        delete m_w_customXmlInsRangeStart;
        m_w_customXmlInsRangeStart = NULL;
    }
    ;

    m_has_w_customXmlInsRangeEnd = false;

    if (m_w_customXmlInsRangeEnd)
    {
        delete m_w_customXmlInsRangeEnd;
        m_w_customXmlInsRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlDelRangeStart = false;

    if (m_w_customXmlDelRangeStart)
    {
        delete m_w_customXmlDelRangeStart;
        m_w_customXmlDelRangeStart = NULL;
    }
    ;

    m_has_w_customXmlDelRangeEnd = false;

    if (m_w_customXmlDelRangeEnd)
    {
        delete m_w_customXmlDelRangeEnd;
        m_w_customXmlDelRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlMoveFromRangeStart = false;

    if (m_w_customXmlMoveFromRangeStart)
    {
        delete m_w_customXmlMoveFromRangeStart;
        m_w_customXmlMoveFromRangeStart = NULL;
    }
    ;

    m_has_w_customXmlMoveFromRangeEnd = false;

    if (m_w_customXmlMoveFromRangeEnd)
    {
        delete m_w_customXmlMoveFromRangeEnd;
        m_w_customXmlMoveFromRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlMoveToRangeStart = false;

    if (m_w_customXmlMoveToRangeStart)
    {
        delete m_w_customXmlMoveToRangeStart;
        m_w_customXmlMoveToRangeStart = NULL;
    }
    ;

    m_has_w_customXmlMoveToRangeEnd = false;

    if (m_w_customXmlMoveToRangeEnd)
    {
        delete m_w_customXmlMoveToRangeEnd;
        m_w_customXmlMoveToRangeEnd = NULL;
    }
    ;

    m_has_w_commentRangeEnd = true;
    if (!m_w_commentRangeEnd)
    {
        m_w_commentRangeEnd = new ns_w::CT_MarkupRange();
    }
    return m_w_commentRangeEnd;
}

const ns_w::CT_MarkupRange& oMath_element::ChildGroup_5::get_w_commentRangeEnd() const
{
    if (m_w_commentRangeEnd)
    {
        return *m_w_commentRangeEnd;
    }
    return ns_w::CT_MarkupRange::default_instance();
}

bool oMath_element::ChildGroup_5::has_w_customXmlInsRangeStart() const
{
    return m_has_w_customXmlInsRangeStart;
}

ns_w::CT_TrackChange* oMath_element::ChildGroup_5::mutable_w_customXmlInsRangeStart()
{

    m_has_w_bookmarkStart = false;

    if (m_w_bookmarkStart)
    {
        delete m_w_bookmarkStart;
        m_w_bookmarkStart = NULL;
    }
    ;

    m_has_w_bookmarkEnd = false;

    if (m_w_bookmarkEnd)
    {
        delete m_w_bookmarkEnd;
        m_w_bookmarkEnd = NULL;
    }
    ;

    m_has_w_moveFromRangeStart = false;

    if (m_w_moveFromRangeStart)
    {
        delete m_w_moveFromRangeStart;
        m_w_moveFromRangeStart = NULL;
    }
    ;

    m_has_w_moveFromRangeEnd = false;

    if (m_w_moveFromRangeEnd)
    {
        delete m_w_moveFromRangeEnd;
        m_w_moveFromRangeEnd = NULL;
    }
    ;

    m_has_w_moveToRangeStart = false;

    if (m_w_moveToRangeStart)
    {
        delete m_w_moveToRangeStart;
        m_w_moveToRangeStart = NULL;
    }
    ;

    m_has_w_moveToRangeEnd = false;

    if (m_w_moveToRangeEnd)
    {
        delete m_w_moveToRangeEnd;
        m_w_moveToRangeEnd = NULL;
    }
    ;

    m_has_w_commentRangeStart = false;

    if (m_w_commentRangeStart)
    {
        delete m_w_commentRangeStart;
        m_w_commentRangeStart = NULL;
    }
    ;

    m_has_w_commentRangeEnd = false;

    if (m_w_commentRangeEnd)
    {
        delete m_w_commentRangeEnd;
        m_w_commentRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlInsRangeEnd = false;

    if (m_w_customXmlInsRangeEnd)
    {
        delete m_w_customXmlInsRangeEnd;
        m_w_customXmlInsRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlDelRangeStart = false;

    if (m_w_customXmlDelRangeStart)
    {
        delete m_w_customXmlDelRangeStart;
        m_w_customXmlDelRangeStart = NULL;
    }
    ;

    m_has_w_customXmlDelRangeEnd = false;

    if (m_w_customXmlDelRangeEnd)
    {
        delete m_w_customXmlDelRangeEnd;
        m_w_customXmlDelRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlMoveFromRangeStart = false;

    if (m_w_customXmlMoveFromRangeStart)
    {
        delete m_w_customXmlMoveFromRangeStart;
        m_w_customXmlMoveFromRangeStart = NULL;
    }
    ;

    m_has_w_customXmlMoveFromRangeEnd = false;

    if (m_w_customXmlMoveFromRangeEnd)
    {
        delete m_w_customXmlMoveFromRangeEnd;
        m_w_customXmlMoveFromRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlMoveToRangeStart = false;

    if (m_w_customXmlMoveToRangeStart)
    {
        delete m_w_customXmlMoveToRangeStart;
        m_w_customXmlMoveToRangeStart = NULL;
    }
    ;

    m_has_w_customXmlMoveToRangeEnd = false;

    if (m_w_customXmlMoveToRangeEnd)
    {
        delete m_w_customXmlMoveToRangeEnd;
        m_w_customXmlMoveToRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlInsRangeStart = true;
    if (!m_w_customXmlInsRangeStart)
    {
        m_w_customXmlInsRangeStart = new ns_w::CT_TrackChange();
    }
    return m_w_customXmlInsRangeStart;
}

const ns_w::CT_TrackChange& oMath_element::ChildGroup_5::get_w_customXmlInsRangeStart() const
{
    if (m_w_customXmlInsRangeStart)
    {
        return *m_w_customXmlInsRangeStart;
    }
    return ns_w::CT_TrackChange::default_instance();
}

bool oMath_element::ChildGroup_5::has_w_customXmlInsRangeEnd() const
{
    return m_has_w_customXmlInsRangeEnd;
}

ns_w::CT_Markup* oMath_element::ChildGroup_5::mutable_w_customXmlInsRangeEnd()
{

    m_has_w_bookmarkStart = false;

    if (m_w_bookmarkStart)
    {
        delete m_w_bookmarkStart;
        m_w_bookmarkStart = NULL;
    }
    ;

    m_has_w_bookmarkEnd = false;

    if (m_w_bookmarkEnd)
    {
        delete m_w_bookmarkEnd;
        m_w_bookmarkEnd = NULL;
    }
    ;

    m_has_w_moveFromRangeStart = false;

    if (m_w_moveFromRangeStart)
    {
        delete m_w_moveFromRangeStart;
        m_w_moveFromRangeStart = NULL;
    }
    ;

    m_has_w_moveFromRangeEnd = false;

    if (m_w_moveFromRangeEnd)
    {
        delete m_w_moveFromRangeEnd;
        m_w_moveFromRangeEnd = NULL;
    }
    ;

    m_has_w_moveToRangeStart = false;

    if (m_w_moveToRangeStart)
    {
        delete m_w_moveToRangeStart;
        m_w_moveToRangeStart = NULL;
    }
    ;

    m_has_w_moveToRangeEnd = false;

    if (m_w_moveToRangeEnd)
    {
        delete m_w_moveToRangeEnd;
        m_w_moveToRangeEnd = NULL;
    }
    ;

    m_has_w_commentRangeStart = false;

    if (m_w_commentRangeStart)
    {
        delete m_w_commentRangeStart;
        m_w_commentRangeStart = NULL;
    }
    ;

    m_has_w_commentRangeEnd = false;

    if (m_w_commentRangeEnd)
    {
        delete m_w_commentRangeEnd;
        m_w_commentRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlInsRangeStart = false;

    if (m_w_customXmlInsRangeStart)
    {
        delete m_w_customXmlInsRangeStart;
        m_w_customXmlInsRangeStart = NULL;
    }
    ;

    m_has_w_customXmlDelRangeStart = false;

    if (m_w_customXmlDelRangeStart)
    {
        delete m_w_customXmlDelRangeStart;
        m_w_customXmlDelRangeStart = NULL;
    }
    ;

    m_has_w_customXmlDelRangeEnd = false;

    if (m_w_customXmlDelRangeEnd)
    {
        delete m_w_customXmlDelRangeEnd;
        m_w_customXmlDelRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlMoveFromRangeStart = false;

    if (m_w_customXmlMoveFromRangeStart)
    {
        delete m_w_customXmlMoveFromRangeStart;
        m_w_customXmlMoveFromRangeStart = NULL;
    }
    ;

    m_has_w_customXmlMoveFromRangeEnd = false;

    if (m_w_customXmlMoveFromRangeEnd)
    {
        delete m_w_customXmlMoveFromRangeEnd;
        m_w_customXmlMoveFromRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlMoveToRangeStart = false;

    if (m_w_customXmlMoveToRangeStart)
    {
        delete m_w_customXmlMoveToRangeStart;
        m_w_customXmlMoveToRangeStart = NULL;
    }
    ;

    m_has_w_customXmlMoveToRangeEnd = false;

    if (m_w_customXmlMoveToRangeEnd)
    {
        delete m_w_customXmlMoveToRangeEnd;
        m_w_customXmlMoveToRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlInsRangeEnd = true;
    if (!m_w_customXmlInsRangeEnd)
    {
        m_w_customXmlInsRangeEnd = new ns_w::CT_Markup();
    }
    return m_w_customXmlInsRangeEnd;
}

const ns_w::CT_Markup& oMath_element::ChildGroup_5::get_w_customXmlInsRangeEnd() const
{
    if (m_w_customXmlInsRangeEnd)
    {
        return *m_w_customXmlInsRangeEnd;
    }
    return ns_w::CT_Markup::default_instance();
}

bool oMath_element::ChildGroup_5::has_w_customXmlDelRangeStart() const
{
    return m_has_w_customXmlDelRangeStart;
}

ns_w::CT_TrackChange* oMath_element::ChildGroup_5::mutable_w_customXmlDelRangeStart()
{

    m_has_w_bookmarkStart = false;

    if (m_w_bookmarkStart)
    {
        delete m_w_bookmarkStart;
        m_w_bookmarkStart = NULL;
    }
    ;

    m_has_w_bookmarkEnd = false;

    if (m_w_bookmarkEnd)
    {
        delete m_w_bookmarkEnd;
        m_w_bookmarkEnd = NULL;
    }
    ;

    m_has_w_moveFromRangeStart = false;

    if (m_w_moveFromRangeStart)
    {
        delete m_w_moveFromRangeStart;
        m_w_moveFromRangeStart = NULL;
    }
    ;

    m_has_w_moveFromRangeEnd = false;

    if (m_w_moveFromRangeEnd)
    {
        delete m_w_moveFromRangeEnd;
        m_w_moveFromRangeEnd = NULL;
    }
    ;

    m_has_w_moveToRangeStart = false;

    if (m_w_moveToRangeStart)
    {
        delete m_w_moveToRangeStart;
        m_w_moveToRangeStart = NULL;
    }
    ;

    m_has_w_moveToRangeEnd = false;

    if (m_w_moveToRangeEnd)
    {
        delete m_w_moveToRangeEnd;
        m_w_moveToRangeEnd = NULL;
    }
    ;

    m_has_w_commentRangeStart = false;

    if (m_w_commentRangeStart)
    {
        delete m_w_commentRangeStart;
        m_w_commentRangeStart = NULL;
    }
    ;

    m_has_w_commentRangeEnd = false;

    if (m_w_commentRangeEnd)
    {
        delete m_w_commentRangeEnd;
        m_w_commentRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlInsRangeStart = false;

    if (m_w_customXmlInsRangeStart)
    {
        delete m_w_customXmlInsRangeStart;
        m_w_customXmlInsRangeStart = NULL;
    }
    ;

    m_has_w_customXmlInsRangeEnd = false;

    if (m_w_customXmlInsRangeEnd)
    {
        delete m_w_customXmlInsRangeEnd;
        m_w_customXmlInsRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlDelRangeEnd = false;

    if (m_w_customXmlDelRangeEnd)
    {
        delete m_w_customXmlDelRangeEnd;
        m_w_customXmlDelRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlMoveFromRangeStart = false;

    if (m_w_customXmlMoveFromRangeStart)
    {
        delete m_w_customXmlMoveFromRangeStart;
        m_w_customXmlMoveFromRangeStart = NULL;
    }
    ;

    m_has_w_customXmlMoveFromRangeEnd = false;

    if (m_w_customXmlMoveFromRangeEnd)
    {
        delete m_w_customXmlMoveFromRangeEnd;
        m_w_customXmlMoveFromRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlMoveToRangeStart = false;

    if (m_w_customXmlMoveToRangeStart)
    {
        delete m_w_customXmlMoveToRangeStart;
        m_w_customXmlMoveToRangeStart = NULL;
    }
    ;

    m_has_w_customXmlMoveToRangeEnd = false;

    if (m_w_customXmlMoveToRangeEnd)
    {
        delete m_w_customXmlMoveToRangeEnd;
        m_w_customXmlMoveToRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlDelRangeStart = true;
    if (!m_w_customXmlDelRangeStart)
    {
        m_w_customXmlDelRangeStart = new ns_w::CT_TrackChange();
    }
    return m_w_customXmlDelRangeStart;
}

const ns_w::CT_TrackChange& oMath_element::ChildGroup_5::get_w_customXmlDelRangeStart() const
{
    if (m_w_customXmlDelRangeStart)
    {
        return *m_w_customXmlDelRangeStart;
    }
    return ns_w::CT_TrackChange::default_instance();
}

bool oMath_element::ChildGroup_5::has_w_customXmlDelRangeEnd() const
{
    return m_has_w_customXmlDelRangeEnd;
}

ns_w::CT_Markup* oMath_element::ChildGroup_5::mutable_w_customXmlDelRangeEnd()
{

    m_has_w_bookmarkStart = false;

    if (m_w_bookmarkStart)
    {
        delete m_w_bookmarkStart;
        m_w_bookmarkStart = NULL;
    }
    ;

    m_has_w_bookmarkEnd = false;

    if (m_w_bookmarkEnd)
    {
        delete m_w_bookmarkEnd;
        m_w_bookmarkEnd = NULL;
    }
    ;

    m_has_w_moveFromRangeStart = false;

    if (m_w_moveFromRangeStart)
    {
        delete m_w_moveFromRangeStart;
        m_w_moveFromRangeStart = NULL;
    }
    ;

    m_has_w_moveFromRangeEnd = false;

    if (m_w_moveFromRangeEnd)
    {
        delete m_w_moveFromRangeEnd;
        m_w_moveFromRangeEnd = NULL;
    }
    ;

    m_has_w_moveToRangeStart = false;

    if (m_w_moveToRangeStart)
    {
        delete m_w_moveToRangeStart;
        m_w_moveToRangeStart = NULL;
    }
    ;

    m_has_w_moveToRangeEnd = false;

    if (m_w_moveToRangeEnd)
    {
        delete m_w_moveToRangeEnd;
        m_w_moveToRangeEnd = NULL;
    }
    ;

    m_has_w_commentRangeStart = false;

    if (m_w_commentRangeStart)
    {
        delete m_w_commentRangeStart;
        m_w_commentRangeStart = NULL;
    }
    ;

    m_has_w_commentRangeEnd = false;

    if (m_w_commentRangeEnd)
    {
        delete m_w_commentRangeEnd;
        m_w_commentRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlInsRangeStart = false;

    if (m_w_customXmlInsRangeStart)
    {
        delete m_w_customXmlInsRangeStart;
        m_w_customXmlInsRangeStart = NULL;
    }
    ;

    m_has_w_customXmlInsRangeEnd = false;

    if (m_w_customXmlInsRangeEnd)
    {
        delete m_w_customXmlInsRangeEnd;
        m_w_customXmlInsRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlDelRangeStart = false;

    if (m_w_customXmlDelRangeStart)
    {
        delete m_w_customXmlDelRangeStart;
        m_w_customXmlDelRangeStart = NULL;
    }
    ;

    m_has_w_customXmlMoveFromRangeStart = false;

    if (m_w_customXmlMoveFromRangeStart)
    {
        delete m_w_customXmlMoveFromRangeStart;
        m_w_customXmlMoveFromRangeStart = NULL;
    }
    ;

    m_has_w_customXmlMoveFromRangeEnd = false;

    if (m_w_customXmlMoveFromRangeEnd)
    {
        delete m_w_customXmlMoveFromRangeEnd;
        m_w_customXmlMoveFromRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlMoveToRangeStart = false;

    if (m_w_customXmlMoveToRangeStart)
    {
        delete m_w_customXmlMoveToRangeStart;
        m_w_customXmlMoveToRangeStart = NULL;
    }
    ;

    m_has_w_customXmlMoveToRangeEnd = false;

    if (m_w_customXmlMoveToRangeEnd)
    {
        delete m_w_customXmlMoveToRangeEnd;
        m_w_customXmlMoveToRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlDelRangeEnd = true;
    if (!m_w_customXmlDelRangeEnd)
    {
        m_w_customXmlDelRangeEnd = new ns_w::CT_Markup();
    }
    return m_w_customXmlDelRangeEnd;
}

const ns_w::CT_Markup& oMath_element::ChildGroup_5::get_w_customXmlDelRangeEnd() const
{
    if (m_w_customXmlDelRangeEnd)
    {
        return *m_w_customXmlDelRangeEnd;
    }
    return ns_w::CT_Markup::default_instance();
}

bool oMath_element::ChildGroup_5::has_w_customXmlMoveFromRangeStart() const
{
    return m_has_w_customXmlMoveFromRangeStart;
}

ns_w::CT_TrackChange* oMath_element::ChildGroup_5::mutable_w_customXmlMoveFromRangeStart()
{

    m_has_w_bookmarkStart = false;

    if (m_w_bookmarkStart)
    {
        delete m_w_bookmarkStart;
        m_w_bookmarkStart = NULL;
    }
    ;

    m_has_w_bookmarkEnd = false;

    if (m_w_bookmarkEnd)
    {
        delete m_w_bookmarkEnd;
        m_w_bookmarkEnd = NULL;
    }
    ;

    m_has_w_moveFromRangeStart = false;

    if (m_w_moveFromRangeStart)
    {
        delete m_w_moveFromRangeStart;
        m_w_moveFromRangeStart = NULL;
    }
    ;

    m_has_w_moveFromRangeEnd = false;

    if (m_w_moveFromRangeEnd)
    {
        delete m_w_moveFromRangeEnd;
        m_w_moveFromRangeEnd = NULL;
    }
    ;

    m_has_w_moveToRangeStart = false;

    if (m_w_moveToRangeStart)
    {
        delete m_w_moveToRangeStart;
        m_w_moveToRangeStart = NULL;
    }
    ;

    m_has_w_moveToRangeEnd = false;

    if (m_w_moveToRangeEnd)
    {
        delete m_w_moveToRangeEnd;
        m_w_moveToRangeEnd = NULL;
    }
    ;

    m_has_w_commentRangeStart = false;

    if (m_w_commentRangeStart)
    {
        delete m_w_commentRangeStart;
        m_w_commentRangeStart = NULL;
    }
    ;

    m_has_w_commentRangeEnd = false;

    if (m_w_commentRangeEnd)
    {
        delete m_w_commentRangeEnd;
        m_w_commentRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlInsRangeStart = false;

    if (m_w_customXmlInsRangeStart)
    {
        delete m_w_customXmlInsRangeStart;
        m_w_customXmlInsRangeStart = NULL;
    }
    ;

    m_has_w_customXmlInsRangeEnd = false;

    if (m_w_customXmlInsRangeEnd)
    {
        delete m_w_customXmlInsRangeEnd;
        m_w_customXmlInsRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlDelRangeStart = false;

    if (m_w_customXmlDelRangeStart)
    {
        delete m_w_customXmlDelRangeStart;
        m_w_customXmlDelRangeStart = NULL;
    }
    ;

    m_has_w_customXmlDelRangeEnd = false;

    if (m_w_customXmlDelRangeEnd)
    {
        delete m_w_customXmlDelRangeEnd;
        m_w_customXmlDelRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlMoveFromRangeEnd = false;

    if (m_w_customXmlMoveFromRangeEnd)
    {
        delete m_w_customXmlMoveFromRangeEnd;
        m_w_customXmlMoveFromRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlMoveToRangeStart = false;

    if (m_w_customXmlMoveToRangeStart)
    {
        delete m_w_customXmlMoveToRangeStart;
        m_w_customXmlMoveToRangeStart = NULL;
    }
    ;

    m_has_w_customXmlMoveToRangeEnd = false;

    if (m_w_customXmlMoveToRangeEnd)
    {
        delete m_w_customXmlMoveToRangeEnd;
        m_w_customXmlMoveToRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlMoveFromRangeStart = true;
    if (!m_w_customXmlMoveFromRangeStart)
    {
        m_w_customXmlMoveFromRangeStart = new ns_w::CT_TrackChange();
    }
    return m_w_customXmlMoveFromRangeStart;
}

const ns_w::CT_TrackChange& oMath_element::ChildGroup_5::get_w_customXmlMoveFromRangeStart() const
{
    if (m_w_customXmlMoveFromRangeStart)
    {
        return *m_w_customXmlMoveFromRangeStart;
    }
    return ns_w::CT_TrackChange::default_instance();
}

bool oMath_element::ChildGroup_5::has_w_customXmlMoveFromRangeEnd() const
{
    return m_has_w_customXmlMoveFromRangeEnd;
}

ns_w::CT_Markup* oMath_element::ChildGroup_5::mutable_w_customXmlMoveFromRangeEnd()
{

    m_has_w_bookmarkStart = false;

    if (m_w_bookmarkStart)
    {
        delete m_w_bookmarkStart;
        m_w_bookmarkStart = NULL;
    }
    ;

    m_has_w_bookmarkEnd = false;

    if (m_w_bookmarkEnd)
    {
        delete m_w_bookmarkEnd;
        m_w_bookmarkEnd = NULL;
    }
    ;

    m_has_w_moveFromRangeStart = false;

    if (m_w_moveFromRangeStart)
    {
        delete m_w_moveFromRangeStart;
        m_w_moveFromRangeStart = NULL;
    }
    ;

    m_has_w_moveFromRangeEnd = false;

    if (m_w_moveFromRangeEnd)
    {
        delete m_w_moveFromRangeEnd;
        m_w_moveFromRangeEnd = NULL;
    }
    ;

    m_has_w_moveToRangeStart = false;

    if (m_w_moveToRangeStart)
    {
        delete m_w_moveToRangeStart;
        m_w_moveToRangeStart = NULL;
    }
    ;

    m_has_w_moveToRangeEnd = false;

    if (m_w_moveToRangeEnd)
    {
        delete m_w_moveToRangeEnd;
        m_w_moveToRangeEnd = NULL;
    }
    ;

    m_has_w_commentRangeStart = false;

    if (m_w_commentRangeStart)
    {
        delete m_w_commentRangeStart;
        m_w_commentRangeStart = NULL;
    }
    ;

    m_has_w_commentRangeEnd = false;

    if (m_w_commentRangeEnd)
    {
        delete m_w_commentRangeEnd;
        m_w_commentRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlInsRangeStart = false;

    if (m_w_customXmlInsRangeStart)
    {
        delete m_w_customXmlInsRangeStart;
        m_w_customXmlInsRangeStart = NULL;
    }
    ;

    m_has_w_customXmlInsRangeEnd = false;

    if (m_w_customXmlInsRangeEnd)
    {
        delete m_w_customXmlInsRangeEnd;
        m_w_customXmlInsRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlDelRangeStart = false;

    if (m_w_customXmlDelRangeStart)
    {
        delete m_w_customXmlDelRangeStart;
        m_w_customXmlDelRangeStart = NULL;
    }
    ;

    m_has_w_customXmlDelRangeEnd = false;

    if (m_w_customXmlDelRangeEnd)
    {
        delete m_w_customXmlDelRangeEnd;
        m_w_customXmlDelRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlMoveFromRangeStart = false;

    if (m_w_customXmlMoveFromRangeStart)
    {
        delete m_w_customXmlMoveFromRangeStart;
        m_w_customXmlMoveFromRangeStart = NULL;
    }
    ;

    m_has_w_customXmlMoveToRangeStart = false;

    if (m_w_customXmlMoveToRangeStart)
    {
        delete m_w_customXmlMoveToRangeStart;
        m_w_customXmlMoveToRangeStart = NULL;
    }
    ;

    m_has_w_customXmlMoveToRangeEnd = false;

    if (m_w_customXmlMoveToRangeEnd)
    {
        delete m_w_customXmlMoveToRangeEnd;
        m_w_customXmlMoveToRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlMoveFromRangeEnd = true;
    if (!m_w_customXmlMoveFromRangeEnd)
    {
        m_w_customXmlMoveFromRangeEnd = new ns_w::CT_Markup();
    }
    return m_w_customXmlMoveFromRangeEnd;
}

const ns_w::CT_Markup& oMath_element::ChildGroup_5::get_w_customXmlMoveFromRangeEnd() const
{
    if (m_w_customXmlMoveFromRangeEnd)
    {
        return *m_w_customXmlMoveFromRangeEnd;
    }
    return ns_w::CT_Markup::default_instance();
}

bool oMath_element::ChildGroup_5::has_w_customXmlMoveToRangeStart() const
{
    return m_has_w_customXmlMoveToRangeStart;
}

ns_w::CT_TrackChange* oMath_element::ChildGroup_5::mutable_w_customXmlMoveToRangeStart()
{

    m_has_w_bookmarkStart = false;

    if (m_w_bookmarkStart)
    {
        delete m_w_bookmarkStart;
        m_w_bookmarkStart = NULL;
    }
    ;

    m_has_w_bookmarkEnd = false;

    if (m_w_bookmarkEnd)
    {
        delete m_w_bookmarkEnd;
        m_w_bookmarkEnd = NULL;
    }
    ;

    m_has_w_moveFromRangeStart = false;

    if (m_w_moveFromRangeStart)
    {
        delete m_w_moveFromRangeStart;
        m_w_moveFromRangeStart = NULL;
    }
    ;

    m_has_w_moveFromRangeEnd = false;

    if (m_w_moveFromRangeEnd)
    {
        delete m_w_moveFromRangeEnd;
        m_w_moveFromRangeEnd = NULL;
    }
    ;

    m_has_w_moveToRangeStart = false;

    if (m_w_moveToRangeStart)
    {
        delete m_w_moveToRangeStart;
        m_w_moveToRangeStart = NULL;
    }
    ;

    m_has_w_moveToRangeEnd = false;

    if (m_w_moveToRangeEnd)
    {
        delete m_w_moveToRangeEnd;
        m_w_moveToRangeEnd = NULL;
    }
    ;

    m_has_w_commentRangeStart = false;

    if (m_w_commentRangeStart)
    {
        delete m_w_commentRangeStart;
        m_w_commentRangeStart = NULL;
    }
    ;

    m_has_w_commentRangeEnd = false;

    if (m_w_commentRangeEnd)
    {
        delete m_w_commentRangeEnd;
        m_w_commentRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlInsRangeStart = false;

    if (m_w_customXmlInsRangeStart)
    {
        delete m_w_customXmlInsRangeStart;
        m_w_customXmlInsRangeStart = NULL;
    }
    ;

    m_has_w_customXmlInsRangeEnd = false;

    if (m_w_customXmlInsRangeEnd)
    {
        delete m_w_customXmlInsRangeEnd;
        m_w_customXmlInsRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlDelRangeStart = false;

    if (m_w_customXmlDelRangeStart)
    {
        delete m_w_customXmlDelRangeStart;
        m_w_customXmlDelRangeStart = NULL;
    }
    ;

    m_has_w_customXmlDelRangeEnd = false;

    if (m_w_customXmlDelRangeEnd)
    {
        delete m_w_customXmlDelRangeEnd;
        m_w_customXmlDelRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlMoveFromRangeStart = false;

    if (m_w_customXmlMoveFromRangeStart)
    {
        delete m_w_customXmlMoveFromRangeStart;
        m_w_customXmlMoveFromRangeStart = NULL;
    }
    ;

    m_has_w_customXmlMoveFromRangeEnd = false;

    if (m_w_customXmlMoveFromRangeEnd)
    {
        delete m_w_customXmlMoveFromRangeEnd;
        m_w_customXmlMoveFromRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlMoveToRangeEnd = false;

    if (m_w_customXmlMoveToRangeEnd)
    {
        delete m_w_customXmlMoveToRangeEnd;
        m_w_customXmlMoveToRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlMoveToRangeStart = true;
    if (!m_w_customXmlMoveToRangeStart)
    {
        m_w_customXmlMoveToRangeStart = new ns_w::CT_TrackChange();
    }
    return m_w_customXmlMoveToRangeStart;
}

const ns_w::CT_TrackChange& oMath_element::ChildGroup_5::get_w_customXmlMoveToRangeStart() const
{
    if (m_w_customXmlMoveToRangeStart)
    {
        return *m_w_customXmlMoveToRangeStart;
    }
    return ns_w::CT_TrackChange::default_instance();
}

bool oMath_element::ChildGroup_5::has_w_customXmlMoveToRangeEnd() const
{
    return m_has_w_customXmlMoveToRangeEnd;
}

ns_w::CT_Markup* oMath_element::ChildGroup_5::mutable_w_customXmlMoveToRangeEnd()
{

    m_has_w_bookmarkStart = false;

    if (m_w_bookmarkStart)
    {
        delete m_w_bookmarkStart;
        m_w_bookmarkStart = NULL;
    }
    ;

    m_has_w_bookmarkEnd = false;

    if (m_w_bookmarkEnd)
    {
        delete m_w_bookmarkEnd;
        m_w_bookmarkEnd = NULL;
    }
    ;

    m_has_w_moveFromRangeStart = false;

    if (m_w_moveFromRangeStart)
    {
        delete m_w_moveFromRangeStart;
        m_w_moveFromRangeStart = NULL;
    }
    ;

    m_has_w_moveFromRangeEnd = false;

    if (m_w_moveFromRangeEnd)
    {
        delete m_w_moveFromRangeEnd;
        m_w_moveFromRangeEnd = NULL;
    }
    ;

    m_has_w_moveToRangeStart = false;

    if (m_w_moveToRangeStart)
    {
        delete m_w_moveToRangeStart;
        m_w_moveToRangeStart = NULL;
    }
    ;

    m_has_w_moveToRangeEnd = false;

    if (m_w_moveToRangeEnd)
    {
        delete m_w_moveToRangeEnd;
        m_w_moveToRangeEnd = NULL;
    }
    ;

    m_has_w_commentRangeStart = false;

    if (m_w_commentRangeStart)
    {
        delete m_w_commentRangeStart;
        m_w_commentRangeStart = NULL;
    }
    ;

    m_has_w_commentRangeEnd = false;

    if (m_w_commentRangeEnd)
    {
        delete m_w_commentRangeEnd;
        m_w_commentRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlInsRangeStart = false;

    if (m_w_customXmlInsRangeStart)
    {
        delete m_w_customXmlInsRangeStart;
        m_w_customXmlInsRangeStart = NULL;
    }
    ;

    m_has_w_customXmlInsRangeEnd = false;

    if (m_w_customXmlInsRangeEnd)
    {
        delete m_w_customXmlInsRangeEnd;
        m_w_customXmlInsRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlDelRangeStart = false;

    if (m_w_customXmlDelRangeStart)
    {
        delete m_w_customXmlDelRangeStart;
        m_w_customXmlDelRangeStart = NULL;
    }
    ;

    m_has_w_customXmlDelRangeEnd = false;

    if (m_w_customXmlDelRangeEnd)
    {
        delete m_w_customXmlDelRangeEnd;
        m_w_customXmlDelRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlMoveFromRangeStart = false;

    if (m_w_customXmlMoveFromRangeStart)
    {
        delete m_w_customXmlMoveFromRangeStart;
        m_w_customXmlMoveFromRangeStart = NULL;
    }
    ;

    m_has_w_customXmlMoveFromRangeEnd = false;

    if (m_w_customXmlMoveFromRangeEnd)
    {
        delete m_w_customXmlMoveFromRangeEnd;
        m_w_customXmlMoveFromRangeEnd = NULL;
    }
    ;

    m_has_w_customXmlMoveToRangeStart = false;

    if (m_w_customXmlMoveToRangeStart)
    {
        delete m_w_customXmlMoveToRangeStart;
        m_w_customXmlMoveToRangeStart = NULL;
    }
    ;

    m_has_w_customXmlMoveToRangeEnd = true;
    if (!m_w_customXmlMoveToRangeEnd)
    {
        m_w_customXmlMoveToRangeEnd = new ns_w::CT_Markup();
    }
    return m_w_customXmlMoveToRangeEnd;
}

const ns_w::CT_Markup& oMath_element::ChildGroup_5::get_w_customXmlMoveToRangeEnd() const
{
    if (m_w_customXmlMoveToRangeEnd)
    {
        return *m_w_customXmlMoveToRangeEnd;
    }
    return ns_w::CT_Markup::default_instance();
}


// oMath_element::ChildGroup_6
oMath_element::ChildGroup_6::ChildGroup_6()
    :m_has_w_ins(false),
     m_w_ins(NULL),
     m_has_w_del(false),
     m_w_del(NULL),
     m_has_w_moveFrom(false),
     m_w_moveFrom(NULL),
     m_has_w_moveTo(false),
     m_w_moveTo(NULL)
{
}
bool oMath_element::ChildGroup_6::has_w_ins() const
{
    return m_has_w_ins;
}

ns_w::CT_RunTrackChange* oMath_element::ChildGroup_6::mutable_w_ins()
{

    m_has_w_del = false;

    if (m_w_del)
    {
        delete m_w_del;
        m_w_del = NULL;
    }
    ;

    m_has_w_moveFrom = false;

    if (m_w_moveFrom)
    {
        delete m_w_moveFrom;
        m_w_moveFrom = NULL;
    }
    ;

    m_has_w_moveTo = false;

    if (m_w_moveTo)
    {
        delete m_w_moveTo;
        m_w_moveTo = NULL;
    }
    ;

    m_has_w_ins = true;
    if (!m_w_ins)
    {
        m_w_ins = new ns_w::CT_RunTrackChange();
    }
    return m_w_ins;
}

const ns_w::CT_RunTrackChange& oMath_element::ChildGroup_6::get_w_ins() const
{
    if (m_w_ins)
    {
        return *m_w_ins;
    }
    return ns_w::CT_RunTrackChange::default_instance();
}

bool oMath_element::ChildGroup_6::has_w_del() const
{
    return m_has_w_del;
}

ns_w::CT_RunTrackChange* oMath_element::ChildGroup_6::mutable_w_del()
{

    m_has_w_ins = false;

    if (m_w_ins)
    {
        delete m_w_ins;
        m_w_ins = NULL;
    }
    ;

    m_has_w_moveFrom = false;

    if (m_w_moveFrom)
    {
        delete m_w_moveFrom;
        m_w_moveFrom = NULL;
    }
    ;

    m_has_w_moveTo = false;

    if (m_w_moveTo)
    {
        delete m_w_moveTo;
        m_w_moveTo = NULL;
    }
    ;

    m_has_w_del = true;
    if (!m_w_del)
    {
        m_w_del = new ns_w::CT_RunTrackChange();
    }
    return m_w_del;
}

const ns_w::CT_RunTrackChange& oMath_element::ChildGroup_6::get_w_del() const
{
    if (m_w_del)
    {
        return *m_w_del;
    }
    return ns_w::CT_RunTrackChange::default_instance();
}

bool oMath_element::ChildGroup_6::has_w_moveFrom() const
{
    return m_has_w_moveFrom;
}

ns_w::CT_RunTrackChange* oMath_element::ChildGroup_6::mutable_w_moveFrom()
{

    m_has_w_ins = false;

    if (m_w_ins)
    {
        delete m_w_ins;
        m_w_ins = NULL;
    }
    ;

    m_has_w_del = false;

    if (m_w_del)
    {
        delete m_w_del;
        m_w_del = NULL;
    }
    ;

    m_has_w_moveTo = false;

    if (m_w_moveTo)
    {
        delete m_w_moveTo;
        m_w_moveTo = NULL;
    }
    ;

    m_has_w_moveFrom = true;
    if (!m_w_moveFrom)
    {
        m_w_moveFrom = new ns_w::CT_RunTrackChange();
    }
    return m_w_moveFrom;
}

const ns_w::CT_RunTrackChange& oMath_element::ChildGroup_6::get_w_moveFrom() const
{
    if (m_w_moveFrom)
    {
        return *m_w_moveFrom;
    }
    return ns_w::CT_RunTrackChange::default_instance();
}

bool oMath_element::ChildGroup_6::has_w_moveTo() const
{
    return m_has_w_moveTo;
}

ns_w::CT_RunTrackChange* oMath_element::ChildGroup_6::mutable_w_moveTo()
{

    m_has_w_ins = false;

    if (m_w_ins)
    {
        delete m_w_ins;
        m_w_ins = NULL;
    }
    ;

    m_has_w_del = false;

    if (m_w_del)
    {
        delete m_w_del;
        m_w_del = NULL;
    }
    ;

    m_has_w_moveFrom = false;

    if (m_w_moveFrom)
    {
        delete m_w_moveFrom;
        m_w_moveFrom = NULL;
    }
    ;

    m_has_w_moveTo = true;
    if (!m_w_moveTo)
    {
        m_w_moveTo = new ns_w::CT_RunTrackChange();
    }
    return m_w_moveTo;
}

const ns_w::CT_RunTrackChange& oMath_element::ChildGroup_6::get_w_moveTo() const
{
    if (m_w_moveTo)
    {
        return *m_w_moveTo;
    }
    return ns_w::CT_RunTrackChange::default_instance();
}


// oMath_element::ChildGroup_7
oMath_element::ChildGroup_7::ChildGroup_7()
    :m_has_m_oMathPara(false),
     m_m_oMathPara(NULL),
     m_has_m_oMath(false),
     m_m_oMath(NULL)
{
}
bool oMath_element::ChildGroup_7::has_m_oMathPara() const
{
    return m_has_m_oMathPara;
}

ns_m::CT_OMathPara* oMath_element::ChildGroup_7::mutable_m_oMathPara()
{

    m_has_m_oMath = false;

    if (m_m_oMath)
    {
        delete m_m_oMath;
        m_m_oMath = NULL;
    }
    ;

    m_has_m_oMathPara = true;
    if (!m_m_oMathPara)
    {
        m_m_oMathPara = new ns_m::CT_OMathPara();
    }
    return m_m_oMathPara;
}

const ns_m::CT_OMathPara& oMath_element::ChildGroup_7::get_m_oMathPara() const
{
    if (m_m_oMathPara)
    {
        return *m_m_oMathPara;
    }
    return ns_m::CT_OMathPara::default_instance();
}

bool oMath_element::ChildGroup_7::has_m_oMath() const
{
    return m_has_m_oMath;
}

ns_m::CT_OMath* oMath_element::ChildGroup_7::mutable_m_oMath()
{

    m_has_m_oMathPara = false;

    if (m_m_oMathPara)
    {
        delete m_m_oMathPara;
        m_m_oMathPara = NULL;
    }
    ;

    m_has_m_oMath = true;
    if (!m_m_oMath)
    {
        m_m_oMath = new ns_m::CT_OMath();
    }
    return m_m_oMath;
}

const ns_m::CT_OMath& oMath_element::ChildGroup_7::get_m_oMath() const
{
    if (m_m_oMath)
    {
        return *m_m_oMath;
    }
    return ns_m::CT_OMath::default_instance();
}

oMath_element* oMath_element::default_instance_ = NULL;
}