#include "hml_xsd.h"
#include <stdlib.h>
#include <sstream>
#include <algorithm>
#include <functional>
#include <assert.h>
namespace ns_hml {
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

// ST_OnOff
ST_OnOff::ST_OnOff()
    :m_has_value(false)
{
}
ST_OnOff::ST_OnOff(const ST_OnOff::Type& _value)
    :m_has_value(true),
     m_value(_value)
{
}
ST_OnOff::~ST_OnOff()
{
    clear();
}
bool ST_OnOff::has_value() const
{
    return m_has_value;
}

void ST_OnOff::set_value(const ST_OnOff::Type& _value)
{
    m_has_value = true;
    m_value = _value;
}

const ST_OnOff::Type& ST_OnOff::get_value() const
{
    return m_value;
}

std::string ST_OnOff::toString() const
{
    return ST_OnOff::TypeStrList[m_value];
}

void ST_OnOff::clear()
{
    m_has_value = false;
}

void ST_OnOff::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_value)
    {
        _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
}

const ST_OnOff& ST_OnOff::default_instance()
{
    if (!ST_OnOff::default_instance_)
    {
        ST_OnOff::default_instance_ = new ST_OnOff();
    }
    return *ST_OnOff::default_instance_;
}

const std::string ST_OnOff::TypeStrList[] =
{
    "true",
    "false",
    "on",
    "off",
    "0",
    "1"
};
ST_OnOff* ST_OnOff::default_instance_ = NULL;

// ST_DecimalNumber
ST_DecimalNumber::ST_DecimalNumber()
    :m_has_value(false),
     m_value(0)
{
}
ST_DecimalNumber::ST_DecimalNumber(const XSD::integer_& _value)
    :m_has_value(true)
{

    set_value(_value);
}
ST_DecimalNumber::~ST_DecimalNumber()
{
    clear();
}
bool ST_DecimalNumber::has_value() const
{
    return m_has_value;
}

void ST_DecimalNumber::set_value(const XSD::integer_& _value)
{
    m_has_value = true;
    m_value = _value;
}

const XSD::integer_& ST_DecimalNumber::get_value() const
{
    return m_value;
}

void ST_DecimalNumber::clear()
{
    m_has_value = false;
    m_value = 0;;
}

void ST_DecimalNumber::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_value)
    {
        _outStream << " " << _attrName << "=\"" << m_value << "\"";;
    }
}

const ST_DecimalNumber& ST_DecimalNumber::default_instance()
{
    if (!ST_DecimalNumber::default_instance_)
    {
        ST_DecimalNumber::default_instance_ = new ST_DecimalNumber();
    }
    return *ST_DecimalNumber::default_instance_;
}

std::string ST_DecimalNumber::toString() const
{
    std::stringstream strStream;
    strStream << get_value();
    return strStream.str();
}

ST_DecimalNumber* ST_DecimalNumber::default_instance_ = NULL;

// ST_UnsignedDecimalNumber
ST_UnsignedDecimalNumber::ST_UnsignedDecimalNumber()
    :m_has_value(false),
     m_value(0)
{
}
ST_UnsignedDecimalNumber::ST_UnsignedDecimalNumber(const XSD::unsignedLong_& _value)
    :m_has_value(true)
{

    set_value(_value);
}
ST_UnsignedDecimalNumber::~ST_UnsignedDecimalNumber()
{
    clear();
}
bool ST_UnsignedDecimalNumber::has_value() const
{
    return m_has_value;
}

void ST_UnsignedDecimalNumber::set_value(const XSD::unsignedLong_& _value)
{
    m_has_value = true;
    m_value = _value;
}

const XSD::unsignedLong_& ST_UnsignedDecimalNumber::get_value() const
{
    return m_value;
}

void ST_UnsignedDecimalNumber::clear()
{
    m_has_value = false;
    m_value = 0;;
}

void ST_UnsignedDecimalNumber::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_value)
    {
        _outStream << " " << _attrName << "=\"" << m_value << "\"";;
    }
}

const ST_UnsignedDecimalNumber& ST_UnsignedDecimalNumber::default_instance()
{
    if (!ST_UnsignedDecimalNumber::default_instance_)
    {
        ST_UnsignedDecimalNumber::default_instance_ = new ST_UnsignedDecimalNumber();
    }
    return *ST_UnsignedDecimalNumber::default_instance_;
}

std::string ST_UnsignedDecimalNumber::toString() const
{
    std::stringstream strStream;
    strStream << get_value();
    return strStream.str();
}

ST_UnsignedDecimalNumber* ST_UnsignedDecimalNumber::default_instance_ = NULL;

// ST_HunitMeasure
ST_HunitMeasure::ST_HunitMeasure()

{
}
ST_HunitMeasure::ST_HunitMeasure(const ST_DecimalNumber& _ST_DecimalNumber)
    :ST_DecimalNumber(_ST_DecimalNumber)
{
}
ST_HunitMeasure::~ST_HunitMeasure()
{
    clear();
}
const ST_HunitMeasure& ST_HunitMeasure::default_instance()
{
    if (!ST_HunitMeasure::default_instance_)
    {
        ST_HunitMeasure::default_instance_ = new ST_HunitMeasure();
    }
    return *ST_HunitMeasure::default_instance_;
}

ST_HunitMeasure* ST_HunitMeasure::default_instance_ = NULL;

// ST_HexColorRGB
ST_HexColorRGB::ST_HexColorRGB()
    :m_has_value(false),
     m_value("")
{
}
ST_HexColorRGB::ST_HexColorRGB(const XSD::hexBinary_& _value)
    :m_has_value(true)
{

    set_value(_value);
}
ST_HexColorRGB::~ST_HexColorRGB()
{
    clear();
}
bool ST_HexColorRGB::has_value() const
{
    return m_has_value;
}

void ST_HexColorRGB::set_value(const XSD::hexBinary_& _value)
{   assert(_value.size() == 6);

    m_has_value = true;
    m_value = _value;
}

const XSD::hexBinary_& ST_HexColorRGB::get_value() const
{
    return m_value;
}

void ST_HexColorRGB::clear()
{
    m_has_value = false;
    m_value.clear();;
}

void ST_HexColorRGB::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_value)
    {
        _outStream << " " << _attrName << "=\"" << m_value << "\"";;
    }
}

const ST_HexColorRGB& ST_HexColorRGB::default_instance()
{
    if (!ST_HexColorRGB::default_instance_)
    {
        ST_HexColorRGB::default_instance_ = new ST_HexColorRGB();
    }
    return *ST_HexColorRGB::default_instance_;
}

std::string ST_HexColorRGB::toString() const
{
    std::stringstream strStream;
    strStream << get_value();
    return strStream.str();
}

ST_HexColorRGB* ST_HexColorRGB::default_instance_ = NULL;

// ST_IntColorRGB
ST_IntColorRGB::ST_IntColorRGB()

{
}
ST_IntColorRGB::ST_IntColorRGB(const ST_UnsignedDecimalNumber& _ST_UnsignedDecimalNumber)
    :ST_UnsignedDecimalNumber(_ST_UnsignedDecimalNumber)
{
}
ST_IntColorRGB::~ST_IntColorRGB()
{
    clear();
}
const ST_IntColorRGB& ST_IntColorRGB::default_instance()
{
    if (!ST_IntColorRGB::default_instance_)
    {
        ST_IntColorRGB::default_instance_ = new ST_IntColorRGB();
    }
    return *ST_IntColorRGB::default_instance_;
}

ST_IntColorRGB* ST_IntColorRGB::default_instance_ = NULL;

// ST_StepType
ST_StepType::ST_StepType()

{
}
ST_StepType::ST_StepType(const ST_String& _ST_String)
    :ST_String(_ST_String)
{
}
ST_StepType::~ST_StepType()
{
    clear();
}
const ST_StepType& ST_StepType::default_instance()
{
    if (!ST_StepType::default_instance_)
    {
        ST_StepType::default_instance_ = new ST_StepType();
    }
    return *ST_StepType::default_instance_;
}

ST_StepType* ST_StepType::default_instance_ = NULL;

// ST_Step
ST_Step::ST_Step()
    :m_has_value(false),
     m_value(0)
{
}
ST_Step::ST_Step(const XSD::integer_& _value)
    :m_has_value(true)
{

    set_value(_value);
}
ST_Step::~ST_Step()
{
    clear();
}
bool ST_Step::has_value() const
{
    return m_has_value;
}

void ST_Step::set_value(const XSD::integer_& _value)
{   assert(0 <= _value);
    assert(_value <= 100);

    m_has_value = true;
    m_value = _value;
}

const XSD::integer_& ST_Step::get_value() const
{
    return m_value;
}

void ST_Step::clear()
{
    m_has_value = false;
    m_value = 0;;
}

void ST_Step::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_value)
    {
        _outStream << " " << _attrName << "=\"" << m_value << "\"";;
    }
}

const ST_Step& ST_Step::default_instance()
{
    if (!ST_Step::default_instance_)
    {
        ST_Step::default_instance_ = new ST_Step();
    }
    return *ST_Step::default_instance_;
}

std::string ST_Step::toString() const
{
    std::stringstream strStream;
    strStream << get_value();
    return strStream.str();
}

ST_Step* ST_Step::default_instance_ = NULL;

// ST_Percent
ST_Percent::ST_Percent()
    :m_has_value(false),
     m_value(0)
{
}
ST_Percent::ST_Percent(const XSD::integer_& _value)
    :m_has_value(true)
{

    set_value(_value);
}
ST_Percent::~ST_Percent()
{
    clear();
}
bool ST_Percent::has_value() const
{
    return m_has_value;
}

void ST_Percent::set_value(const XSD::integer_& _value)
{   assert(0 <= _value);
    assert(_value <= 255);

    m_has_value = true;
    m_value = _value;
}

const XSD::integer_& ST_Percent::get_value() const
{
    return m_value;
}

void ST_Percent::clear()
{
    m_has_value = false;
    m_value = 0;;
}

void ST_Percent::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_value)
    {
        _outStream << " " << _attrName << "=\"" << m_value << "\"";;
    }
}

const ST_Percent& ST_Percent::default_instance()
{
    if (!ST_Percent::default_instance_)
    {
        ST_Percent::default_instance_ = new ST_Percent();
    }
    return *ST_Percent::default_instance_;
}

std::string ST_Percent::toString() const
{
    std::stringstream strStream;
    strStream << get_value();
    return strStream.str();
}

ST_Percent* ST_Percent::default_instance_ = NULL;

// ST_Angle
ST_Angle::ST_Angle()
    :m_has_value(false),
     m_value(0)
{
}
ST_Angle::ST_Angle(const XSD::integer_& _value)
    :m_has_value(true)
{

    set_value(_value);
}
ST_Angle::~ST_Angle()
{
    clear();
}
bool ST_Angle::has_value() const
{
    return m_has_value;
}

void ST_Angle::set_value(const XSD::integer_& _value)
{   assert(0 <= _value);
    assert(_value <= 359);

    m_has_value = true;
    m_value = _value;
}

const XSD::integer_& ST_Angle::get_value() const
{
    return m_value;
}

void ST_Angle::clear()
{
    m_has_value = false;
    m_value = 0;;
}

void ST_Angle::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_value)
    {
        _outStream << " " << _attrName << "=\"" << m_value << "\"";;
    }
}

const ST_Angle& ST_Angle::default_instance()
{
    if (!ST_Angle::default_instance_)
    {
        ST_Angle::default_instance_ = new ST_Angle();
    }
    return *ST_Angle::default_instance_;
}

std::string ST_Angle::toString() const
{
    std::stringstream strStream;
    strStream << get_value();
    return strStream.str();
}

ST_Angle* ST_Angle::default_instance_ = NULL;

// ST_Effect
ST_Effect::ST_Effect()
    :m_has_value(false)
{
}
ST_Effect::ST_Effect(const ST_Effect::Type& _value)
    :m_has_value(true),
     m_value(_value)
{
}
ST_Effect::~ST_Effect()
{
    clear();
}
bool ST_Effect::has_value() const
{
    return m_has_value;
}

void ST_Effect::set_value(const ST_Effect::Type& _value)
{
    m_has_value = true;
    m_value = _value;
}

const ST_Effect::Type& ST_Effect::get_value() const
{
    return m_value;
}

std::string ST_Effect::toString() const
{
    return ST_Effect::TypeStrList[m_value];
}

void ST_Effect::clear()
{
    m_has_value = false;
}

void ST_Effect::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_value)
    {
        _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
}

const ST_Effect& ST_Effect::default_instance()
{
    if (!ST_Effect::default_instance_)
    {
        ST_Effect::default_instance_ = new ST_Effect();
    }
    return *ST_Effect::default_instance_;
}

const std::string ST_Effect::TypeStrList[] =
{
    "RealPic",
    "GrayScale",
    "BlackWhite"
};
ST_Effect* ST_Effect::default_instance_ = NULL;

// ST_LINETYPE1
ST_LINETYPE1::ST_LINETYPE1()
    :m_has_value(false)
{
}
ST_LINETYPE1::ST_LINETYPE1(const ST_LINETYPE1::Type& _value)
    :m_has_value(true),
     m_value(_value)
{
}
ST_LINETYPE1::~ST_LINETYPE1()
{
    clear();
}
bool ST_LINETYPE1::has_value() const
{
    return m_has_value;
}

void ST_LINETYPE1::set_value(const ST_LINETYPE1::Type& _value)
{
    m_has_value = true;
    m_value = _value;
}

const ST_LINETYPE1::Type& ST_LINETYPE1::get_value() const
{
    return m_value;
}

std::string ST_LINETYPE1::toString() const
{
    return ST_LINETYPE1::TypeStrList[m_value];
}

void ST_LINETYPE1::clear()
{
    m_has_value = false;
}

void ST_LINETYPE1::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_value)
    {
        _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
}

const ST_LINETYPE1& ST_LINETYPE1::default_instance()
{
    if (!ST_LINETYPE1::default_instance_)
    {
        ST_LINETYPE1::default_instance_ = new ST_LINETYPE1();
    }
    return *ST_LINETYPE1::default_instance_;
}

const std::string ST_LINETYPE1::TypeStrList[] =
{
    "None",
    "Solid",
    "Dash",
    "Dot",
    "DashDot",
    "DashDotDot",
    "LongDash",
    "Circle",
    "DoubleSlim",
    "SlimThick",
    "ThickSlim",
    "SlimThickSlim"
};
ST_LINETYPE1* ST_LINETYPE1::default_instance_ = NULL;

// ST_LineType2
ST_LineType2::ST_LineType2()

{
}
ST_LineType2::ST_LineType2(const ST_String& _ST_String)
    :ST_String(_ST_String)
{
}
ST_LineType2::~ST_LineType2()
{
    clear();
}
const ST_LineType2& ST_LineType2::default_instance()
{
    if (!ST_LineType2::default_instance_)
    {
        ST_LineType2::default_instance_ = new ST_LineType2();
    }
    return *ST_LineType2::default_instance_;
}

ST_LineType2* ST_LineType2::default_instance_ = NULL;

// ST_LineType3
ST_LineType3::ST_LineType3()

{
}
ST_LineType3::ST_LineType3(const ST_String& _ST_String)
    :ST_String(_ST_String)
{
}
ST_LineType3::~ST_LineType3()
{
    clear();
}
const ST_LineType3& ST_LineType3::default_instance()
{
    if (!ST_LineType3::default_instance_)
    {
        ST_LineType3::default_instance_ = new ST_LineType3();
    }
    return *ST_LineType3::default_instance_;
}

ST_LineType3* ST_LineType3::default_instance_ = NULL;

// ST_LineType4
ST_LineType4::ST_LineType4()

{
}
ST_LineType4::ST_LineType4(const ST_UnsignedDecimalNumber& _ST_UnsignedDecimalNumber)
    :ST_UnsignedDecimalNumber(_ST_UnsignedDecimalNumber)
{
}
ST_LineType4::~ST_LineType4()
{
    clear();
}
const ST_LineType4& ST_LineType4::default_instance()
{
    if (!ST_LineType4::default_instance_)
    {
        ST_LineType4::default_instance_ = new ST_LineType4();
    }
    return *ST_LineType4::default_instance_;
}

ST_LineType4* ST_LineType4::default_instance_ = NULL;

// ST_LineWidth1
ST_LineWidth1::ST_LineWidth1()

{
}
ST_LineWidth1::ST_LineWidth1(const ST_String& _ST_String)
    :ST_String(_ST_String)
{
}
ST_LineWidth1::~ST_LineWidth1()
{
    clear();
}
const ST_LineWidth1& ST_LineWidth1::default_instance()
{
    if (!ST_LineWidth1::default_instance_)
    {
        ST_LineWidth1::default_instance_ = new ST_LineWidth1();
    }
    return *ST_LineWidth1::default_instance_;
}

ST_LineWidth1* ST_LineWidth1::default_instance_ = NULL;

// ST_LineWidth2
ST_LineWidth2::ST_LineWidth2()

{
}
ST_LineWidth2::ST_LineWidth2(const ST_UnsignedDecimalNumber& _ST_UnsignedDecimalNumber)
    :ST_UnsignedDecimalNumber(_ST_UnsignedDecimalNumber)
{
}
ST_LineWidth2::~ST_LineWidth2()
{
    clear();
}
const ST_LineWidth2& ST_LineWidth2::default_instance()
{
    if (!ST_LineWidth2::default_instance_)
    {
        ST_LineWidth2::default_instance_ = new ST_LineWidth2();
    }
    return *ST_LineWidth2::default_instance_;
}

ST_LineWidth2* ST_LineWidth2::default_instance_ = NULL;

// ST_NumberType1
ST_NumberType1::ST_NumberType1()

{
}
ST_NumberType1::ST_NumberType1(const ST_String& _ST_String)
    :ST_String(_ST_String)
{
}
ST_NumberType1::~ST_NumberType1()
{
    clear();
}
const ST_NumberType1& ST_NumberType1::default_instance()
{
    if (!ST_NumberType1::default_instance_)
    {
        ST_NumberType1::default_instance_ = new ST_NumberType1();
    }
    return *ST_NumberType1::default_instance_;
}

ST_NumberType1* ST_NumberType1::default_instance_ = NULL;

// ST_NumberType2
ST_NumberType2::ST_NumberType2()

{
}
ST_NumberType2::ST_NumberType2(const ST_String& _ST_String)
    :ST_String(_ST_String)
{
}
ST_NumberType2::~ST_NumberType2()
{
    clear();
}
const ST_NumberType2& ST_NumberType2::default_instance()
{
    if (!ST_NumberType2::default_instance_)
    {
        ST_NumberType2::default_instance_ = new ST_NumberType2();
    }
    return *ST_NumberType2::default_instance_;
}

ST_NumberType2* ST_NumberType2::default_instance_ = NULL;

// ST_AlignmentType1
ST_AlignmentType1::ST_AlignmentType1()

{
}
ST_AlignmentType1::ST_AlignmentType1(const ST_String& _ST_String)
    :ST_String(_ST_String)
{
}
ST_AlignmentType1::~ST_AlignmentType1()
{
    clear();
}
const ST_AlignmentType1& ST_AlignmentType1::default_instance()
{
    if (!ST_AlignmentType1::default_instance_)
    {
        ST_AlignmentType1::default_instance_ = new ST_AlignmentType1();
    }
    return *ST_AlignmentType1::default_instance_;
}

ST_AlignmentType1* ST_AlignmentType1::default_instance_ = NULL;

// ST_AlignmentType2
ST_AlignmentType2::ST_AlignmentType2()

{
}
ST_AlignmentType2::ST_AlignmentType2(const ST_String& _ST_String)
    :ST_String(_ST_String)
{
}
ST_AlignmentType2::~ST_AlignmentType2()
{
    clear();
}
const ST_AlignmentType2& ST_AlignmentType2::default_instance()
{
    if (!ST_AlignmentType2::default_instance_)
    {
        ST_AlignmentType2::default_instance_ = new ST_AlignmentType2();
    }
    return *ST_AlignmentType2::default_instance_;
}

ST_AlignmentType2* ST_AlignmentType2::default_instance_ = NULL;

// ST_ArrowType
ST_ArrowType::ST_ArrowType()

{
}
ST_ArrowType::ST_ArrowType(const ST_String& _ST_String)
    :ST_String(_ST_String)
{
}
ST_ArrowType::~ST_ArrowType()
{
    clear();
}
const ST_ArrowType& ST_ArrowType::default_instance()
{
    if (!ST_ArrowType::default_instance_)
    {
        ST_ArrowType::default_instance_ = new ST_ArrowType();
    }
    return *ST_ArrowType::default_instance_;
}

ST_ArrowType* ST_ArrowType::default_instance_ = NULL;

// ST_ArrowSize
ST_ArrowSize::ST_ArrowSize()

{
}
ST_ArrowSize::ST_ArrowSize(const ST_String& _ST_String)
    :ST_String(_ST_String)
{
}
ST_ArrowSize::~ST_ArrowSize()
{
    clear();
}
const ST_ArrowSize& ST_ArrowSize::default_instance()
{
    if (!ST_ArrowSize::default_instance_)
    {
        ST_ArrowSize::default_instance_ = new ST_ArrowSize();
    }
    return *ST_ArrowSize::default_instance_;
}

ST_ArrowSize* ST_ArrowSize::default_instance_ = NULL;

// ST_LangType
ST_LangType::ST_LangType()

{
}
ST_LangType::ST_LangType(const ST_String& _ST_String)
    :ST_String(_ST_String)
{
}
ST_LangType::~ST_LangType()
{
    clear();
}
const ST_LangType& ST_LangType::default_instance()
{
    if (!ST_LangType::default_instance_)
    {
        ST_LangType::default_instance_ = new ST_LangType();
    }
    return *ST_LangType::default_instance_;
}

ST_LangType* ST_LangType::default_instance_ = NULL;

// ST_HatchStyle
ST_HatchStyle::ST_HatchStyle()

{
}
ST_HatchStyle::ST_HatchStyle(const ST_String& _ST_String)
    :ST_String(_ST_String)
{
}
ST_HatchStyle::~ST_HatchStyle()
{
    clear();
}
const ST_HatchStyle& ST_HatchStyle::default_instance()
{
    if (!ST_HatchStyle::default_instance_)
    {
        ST_HatchStyle::default_instance_ = new ST_HatchStyle();
    }
    return *ST_HatchStyle::default_instance_;
}

ST_HatchStyle* ST_HatchStyle::default_instance_ = NULL;

// ST_InFillMode
ST_InFillMode::ST_InFillMode()

{
}
ST_InFillMode::ST_InFillMode(const ST_String& _ST_String)
    :ST_String(_ST_String)
{
}
ST_InFillMode::~ST_InFillMode()
{
    clear();
}
const ST_InFillMode& ST_InFillMode::default_instance()
{
    if (!ST_InFillMode::default_instance_)
    {
        ST_InFillMode::default_instance_ = new ST_InFillMode();
    }
    return *ST_InFillMode::default_instance_;
}

ST_InFillMode* ST_InFillMode::default_instance_ = NULL;

// ST_VertAlignType1
ST_VertAlignType1::ST_VertAlignType1()

{
}
ST_VertAlignType1::ST_VertAlignType1(const ST_String& _ST_String)
    :ST_String(_ST_String)
{
}
ST_VertAlignType1::~ST_VertAlignType1()
{
    clear();
}
const ST_VertAlignType1& ST_VertAlignType1::default_instance()
{
    if (!ST_VertAlignType1::default_instance_)
    {
        ST_VertAlignType1::default_instance_ = new ST_VertAlignType1();
    }
    return *ST_VertAlignType1::default_instance_;
}

ST_VertAlignType1* ST_VertAlignType1::default_instance_ = NULL;

// ST_VertAlignType2
ST_VertAlignType2::ST_VertAlignType2()

{
}
ST_VertAlignType2::ST_VertAlignType2(const ST_String& _ST_String)
    :ST_String(_ST_String)
{
}
ST_VertAlignType2::~ST_VertAlignType2()
{
    clear();
}
const ST_VertAlignType2& ST_VertAlignType2::default_instance()
{
    if (!ST_VertAlignType2::default_instance_)
    {
        ST_VertAlignType2::default_instance_ = new ST_VertAlignType2();
    }
    return *ST_VertAlignType2::default_instance_;
}

ST_VertAlignType2* ST_VertAlignType2::default_instance_ = NULL;

// ST_LineWrapType
ST_LineWrapType::ST_LineWrapType()

{
}
ST_LineWrapType::ST_LineWrapType(const ST_String& _ST_String)
    :ST_String(_ST_String)
{
}
ST_LineWrapType::~ST_LineWrapType()
{
    clear();
}
const ST_LineWrapType& ST_LineWrapType::default_instance()
{
    if (!ST_LineWrapType::default_instance_)
    {
        ST_LineWrapType::default_instance_ = new ST_LineWrapType();
    }
    return *ST_LineWrapType::default_instance_;
}

ST_LineWrapType* ST_LineWrapType::default_instance_ = NULL;

// ST_TextWrapType
ST_TextWrapType::ST_TextWrapType()

{
}
ST_TextWrapType::ST_TextWrapType(const ST_String& _ST_String)
    :ST_String(_ST_String)
{
}
ST_TextWrapType::~ST_TextWrapType()
{
    clear();
}
const ST_TextWrapType& ST_TextWrapType::default_instance()
{
    if (!ST_TextWrapType::default_instance_)
    {
        ST_TextWrapType::default_instance_ = new ST_TextWrapType();
    }
    return *ST_TextWrapType::default_instance_;
}

ST_TextWrapType* ST_TextWrapType::default_instance_ = NULL;

// ST_FieldType
ST_FieldType::ST_FieldType()

{
}
ST_FieldType::ST_FieldType(const ST_String& _ST_String)
    :ST_String(_ST_String)
{
}
ST_FieldType::~ST_FieldType()
{
    clear();
}
const ST_FieldType& ST_FieldType::default_instance()
{
    if (!ST_FieldType::default_instance_)
    {
        ST_FieldType::default_instance_ = new ST_FieldType();
    }
    return *ST_FieldType::default_instance_;
}

ST_FieldType* ST_FieldType::default_instance_ = NULL;

// ST_FontType
ST_FontType::ST_FontType()

{
}
ST_FontType::ST_FontType(const ST_String& _ST_String)
    :ST_String(_ST_String)
{
}
ST_FontType::~ST_FontType()
{
    clear();
}
const ST_FontType& ST_FontType::default_instance()
{
    if (!ST_FontType::default_instance_)
    {
        ST_FontType::default_instance_ = new ST_FontType();
    }
    return *ST_FontType::default_instance_;
}

ST_FontType* ST_FontType::default_instance_ = NULL;

// ST_OFFSET
ST_OFFSET::ST_OFFSET()

{
}
ST_OFFSET::ST_OFFSET(const ST_DecimalNumber& _ST_DecimalNumber)
    :ST_DecimalNumber(_ST_DecimalNumber)
{
}
ST_OFFSET::~ST_OFFSET()
{
    clear();
}
const ST_OFFSET& ST_OFFSET::default_instance()
{
    if (!ST_OFFSET::default_instance_)
    {
        ST_OFFSET::default_instance_ = new ST_OFFSET();
    }
    return *ST_OFFSET::default_instance_;
}

ST_OFFSET* ST_OFFSET::default_instance_ = NULL;

// ST_GradType
ST_GradType::ST_GradType()

{
}
ST_GradType::ST_GradType(const ST_String& _ST_String)
    :ST_String(_ST_String)
{
}
ST_GradType::~ST_GradType()
{
    clear();
}
const ST_GradType& ST_GradType::default_instance()
{
    if (!ST_GradType::default_instance_)
    {
        ST_GradType::default_instance_ = new ST_GradType();
    }
    return *ST_GradType::default_instance_;
}

ST_GradType* ST_GradType::default_instance_ = NULL;

// ST_HeadingType
ST_HeadingType::ST_HeadingType()

{
}
ST_HeadingType::ST_HeadingType(const ST_String& _ST_String)
    :ST_String(_ST_String)
{
}
ST_HeadingType::~ST_HeadingType()
{
    clear();
}
const ST_HeadingType& ST_HeadingType::default_instance()
{
    if (!ST_HeadingType::default_instance_)
    {
        ST_HeadingType::default_instance_ = new ST_HeadingType();
    }
    return *ST_HeadingType::default_instance_;
}

ST_HeadingType* ST_HeadingType::default_instance_ = NULL;

// ST_RATIO
ST_RATIO::ST_RATIO()

{
}
ST_RATIO::ST_RATIO(const ST_UnsignedDecimalNumber& _ST_UnsignedDecimalNumber)
    :ST_UnsignedDecimalNumber(_ST_UnsignedDecimalNumber)
{
}
ST_RATIO::~ST_RATIO()
{
    clear();
}
const ST_RATIO& ST_RATIO::default_instance()
{
    if (!ST_RATIO::default_instance_)
    {
        ST_RATIO::default_instance_ = new ST_RATIO();
    }
    return *ST_RATIO::default_instance_;
}

ST_RATIO* ST_RATIO::default_instance_ = NULL;

// ST_CHARSPACING
ST_CHARSPACING::ST_CHARSPACING()

{
}
ST_CHARSPACING::ST_CHARSPACING(const ST_DecimalNumber& _ST_DecimalNumber)
    :ST_DecimalNumber(_ST_DecimalNumber)
{
}
ST_CHARSPACING::~ST_CHARSPACING()
{
    clear();
}
const ST_CHARSPACING& ST_CHARSPACING::default_instance()
{
    if (!ST_CHARSPACING::default_instance_)
    {
        ST_CHARSPACING::default_instance_ = new ST_CHARSPACING();
    }
    return *ST_CHARSPACING::default_instance_;
}

ST_CHARSPACING* ST_CHARSPACING::default_instance_ = NULL;

// ST_RELSIZE
ST_RELSIZE::ST_RELSIZE()

{
}
ST_RELSIZE::ST_RELSIZE(const ST_UnsignedDecimalNumber& _ST_UnsignedDecimalNumber)
    :ST_UnsignedDecimalNumber(_ST_UnsignedDecimalNumber)
{
}
ST_RELSIZE::~ST_RELSIZE()
{
    clear();
}
const ST_RELSIZE& ST_RELSIZE::default_instance()
{
    if (!ST_RELSIZE::default_instance_)
    {
        ST_RELSIZE::default_instance_ = new ST_RELSIZE();
    }
    return *ST_RELSIZE::default_instance_;
}

ST_RELSIZE* ST_RELSIZE::default_instance_ = NULL;

// ST_StrikeType
ST_StrikeType::ST_StrikeType()

{
}
ST_StrikeType::ST_StrikeType(const ST_String& _ST_String)
    :ST_String(_ST_String)
{
}
ST_StrikeType::~ST_StrikeType()
{
    clear();
}
const ST_StrikeType& ST_StrikeType::default_instance()
{
    if (!ST_StrikeType::default_instance_)
    {
        ST_StrikeType::default_instance_ = new ST_StrikeType();
    }
    return *ST_StrikeType::default_instance_;
}

ST_StrikeType* ST_StrikeType::default_instance_ = NULL;

// ST_ShadowType
ST_ShadowType::ST_ShadowType()

{
}
ST_ShadowType::ST_ShadowType(const ST_String& _ST_String)
    :ST_String(_ST_String)
{
}
ST_ShadowType::~ST_ShadowType()
{
    clear();
}
const ST_ShadowType& ST_ShadowType::default_instance()
{
    if (!ST_ShadowType::default_instance_)
    {
        ST_ShadowType::default_instance_ = new ST_ShadowType();
    }
    return *ST_ShadowType::default_instance_;
}

ST_ShadowType* ST_ShadowType::default_instance_ = NULL;

// ST_TabType
ST_TabType::ST_TabType()

{
}
ST_TabType::ST_TabType(const ST_String& _ST_String)
    :ST_String(_ST_String)
{
}
ST_TabType::~ST_TabType()
{
    clear();
}
const ST_TabType& ST_TabType::default_instance()
{
    if (!ST_TabType::default_instance_)
    {
        ST_TabType::default_instance_ = new ST_TabType();
    }
    return *ST_TabType::default_instance_;
}

ST_TabType* ST_TabType::default_instance_ = NULL;

// ST_NumberLevelType1
ST_NumberLevelType1::ST_NumberLevelType1()

{
}
ST_NumberLevelType1::ST_NumberLevelType1(const ST_UnsignedDecimalNumber& _ST_UnsignedDecimalNumber)
    :ST_UnsignedDecimalNumber(_ST_UnsignedDecimalNumber)
{
}
ST_NumberLevelType1::~ST_NumberLevelType1()
{
    clear();
}
const ST_NumberLevelType1& ST_NumberLevelType1::default_instance()
{
    if (!ST_NumberLevelType1::default_instance_)
    {
        ST_NumberLevelType1::default_instance_ = new ST_NumberLevelType1();
    }
    return *ST_NumberLevelType1::default_instance_;
}

ST_NumberLevelType1* ST_NumberLevelType1::default_instance_ = NULL;

// ST_NumberLevelType2
ST_NumberLevelType2::ST_NumberLevelType2()

{
}
ST_NumberLevelType2::ST_NumberLevelType2(const ST_UnsignedDecimalNumber& _ST_UnsignedDecimalNumber)
    :ST_UnsignedDecimalNumber(_ST_UnsignedDecimalNumber)
{
}
ST_NumberLevelType2::~ST_NumberLevelType2()
{
    clear();
}
const ST_NumberLevelType2& ST_NumberLevelType2::default_instance()
{
    if (!ST_NumberLevelType2::default_instance_)
    {
        ST_NumberLevelType2::default_instance_ = new ST_NumberLevelType2();
    }
    return *ST_NumberLevelType2::default_instance_;
}

ST_NumberLevelType2* ST_NumberLevelType2::default_instance_ = NULL;

// ST_BreakLatinWord
ST_BreakLatinWord::ST_BreakLatinWord()

{
}
ST_BreakLatinWord::ST_BreakLatinWord(const ST_String& _ST_String)
    :ST_String(_ST_String)
{
}
ST_BreakLatinWord::~ST_BreakLatinWord()
{
    clear();
}
const ST_BreakLatinWord& ST_BreakLatinWord::default_instance()
{
    if (!ST_BreakLatinWord::default_instance_)
    {
        ST_BreakLatinWord::default_instance_ = new ST_BreakLatinWord();
    }
    return *ST_BreakLatinWord::default_instance_;
}

ST_BreakLatinWord* ST_BreakLatinWord::default_instance_ = NULL;

// ST_Condense
ST_Condense::ST_Condense()

{
}
ST_Condense::ST_Condense(const ST_UnsignedDecimalNumber& _ST_UnsignedDecimalNumber)
    :ST_UnsignedDecimalNumber(_ST_UnsignedDecimalNumber)
{
}
ST_Condense::~ST_Condense()
{
    clear();
}
const ST_Condense& ST_Condense::default_instance()
{
    if (!ST_Condense::default_instance_)
    {
        ST_Condense::default_instance_ = new ST_Condense();
    }
    return *ST_Condense::default_instance_;
}

ST_Condense* ST_Condense::default_instance_ = NULL;

// ST_LineSpacing
ST_LineSpacing::ST_LineSpacing()

{
}
ST_LineSpacing::ST_LineSpacing(const ST_String& _ST_String)
    :ST_String(_ST_String)
{
}
ST_LineSpacing::~ST_LineSpacing()
{
    clear();
}
const ST_LineSpacing& ST_LineSpacing::default_instance()
{
    if (!ST_LineSpacing::default_instance_)
    {
        ST_LineSpacing::default_instance_ = new ST_LineSpacing();
    }
    return *ST_LineSpacing::default_instance_;
}

ST_LineSpacing* ST_LineSpacing::default_instance_ = NULL;

// ST_StyleType
ST_StyleType::ST_StyleType()

{
}
ST_StyleType::ST_StyleType(const ST_String& _ST_String)
    :ST_String(_ST_String)
{
}
ST_StyleType::~ST_StyleType()
{
    clear();
}
const ST_StyleType& ST_StyleType::default_instance()
{
    if (!ST_StyleType::default_instance_)
    {
        ST_StyleType::default_instance_ = new ST_StyleType();
    }
    return *ST_StyleType::default_instance_;
}

ST_StyleType* ST_StyleType::default_instance_ = NULL;

// ST_ID
ST_ID::ST_ID()

{
}
ST_ID::ST_ID(const ST_String& _ST_String)
    :ST_String(_ST_String)
{
}
ST_ID::~ST_ID()
{
    clear();
}
const ST_ID& ST_ID::default_instance()
{
    if (!ST_ID::default_instance_)
    {
        ST_ID::default_instance_ = new ST_ID();
    }
    return *ST_ID::default_instance_;
}

ST_ID* ST_ID::default_instance_ = NULL;

// ST_HWPML_STYLE
ST_HWPML_STYLE::ST_HWPML_STYLE()

{
}
ST_HWPML_STYLE::ST_HWPML_STYLE(const ST_String& _ST_String)
    :ST_String(_ST_String)
{
}
ST_HWPML_STYLE::~ST_HWPML_STYLE()
{
    clear();
}
const ST_HWPML_STYLE& ST_HWPML_STYLE::default_instance()
{
    if (!ST_HWPML_STYLE::default_instance_)
    {
        ST_HWPML_STYLE::default_instance_ = new ST_HWPML_STYLE();
    }
    return *ST_HWPML_STYLE::default_instance_;
}

ST_HWPML_STYLE* ST_HWPML_STYLE::default_instance_ = NULL;

// ST_BINITEM_TYPE
ST_BINITEM_TYPE::ST_BINITEM_TYPE()

{
}
ST_BINITEM_TYPE::ST_BINITEM_TYPE(const ST_String& _ST_String)
    :ST_String(_ST_String)
{
}
ST_BINITEM_TYPE::~ST_BINITEM_TYPE()
{
    clear();
}
const ST_BINITEM_TYPE& ST_BINITEM_TYPE::default_instance()
{
    if (!ST_BINITEM_TYPE::default_instance_)
    {
        ST_BINITEM_TYPE::default_instance_ = new ST_BINITEM_TYPE();
    }
    return *ST_BINITEM_TYPE::default_instance_;
}

ST_BINITEM_TYPE* ST_BINITEM_TYPE::default_instance_ = NULL;

// ST_BINITEM_FORMAT
ST_BINITEM_FORMAT::ST_BINITEM_FORMAT()

{
}
ST_BINITEM_FORMAT::ST_BINITEM_FORMAT(const ST_String& _ST_String)
    :ST_String(_ST_String)
{
}
ST_BINITEM_FORMAT::~ST_BINITEM_FORMAT()
{
    clear();
}
const ST_BINITEM_FORMAT& ST_BINITEM_FORMAT::default_instance()
{
    if (!ST_BINITEM_FORMAT::default_instance_)
    {
        ST_BINITEM_FORMAT::default_instance_ = new ST_BINITEM_FORMAT();
    }
    return *ST_BINITEM_FORMAT::default_instance_;
}

ST_BINITEM_FORMAT* ST_BINITEM_FORMAT::default_instance_ = NULL;

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

    assert(m_has_val_attr);
    if (m_has_val_attr)
    {
        m_val_attr->toXmlAttr("val", _outStream);
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

void CT_String::set_val_attr(const ST_String& _val_attr)
{
    m_has_val_attr = true;
    m_val_attr = new ST_String(_val_attr);
}

const ST_String& CT_String::get_val_attr() const
{
    if (m_val_attr)
    {
        return *m_val_attr;
    }
    return ST_String::default_instance();
}

CT_String* CT_String::default_instance_ = NULL;

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
        m_val_attr->toXmlAttr("val", _outStream);
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

void CT_OnOff::set_val_attr(const ST_OnOff& _val_attr)
{
    m_has_val_attr = true;
    m_val_attr = new ST_OnOff(_val_attr);
}

const ST_OnOff& CT_OnOff::get_val_attr() const
{
    if (m_val_attr)
    {
        return *m_val_attr;
    }
    return ST_OnOff::default_instance();
}

CT_OnOff* CT_OnOff::default_instance_ = NULL;

// CT_DecimalNumber
CT_DecimalNumber::CT_DecimalNumber()
    :m_has_val_attr(false),
     m_val_attr(NULL)
{
}
CT_DecimalNumber::~CT_DecimalNumber()
{
    clear();
}
void CT_DecimalNumber::clear()
{
    m_has_val_attr = false;

    if (m_val_attr)
    {
        delete m_val_attr;
        m_val_attr = NULL;
    }

}

void CT_DecimalNumber::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    assert(m_has_val_attr);
    if (m_has_val_attr)
    {
        m_val_attr->toXmlAttr("val", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_DecimalNumber& CT_DecimalNumber::default_instance()
{
    if (!CT_DecimalNumber::default_instance_)
    {
        CT_DecimalNumber::default_instance_ = new CT_DecimalNumber();
    }
    return *CT_DecimalNumber::default_instance_;
}

bool CT_DecimalNumber::has_val_attr() const
{
    return m_has_val_attr;
}

void CT_DecimalNumber::set_val_attr(const ST_DecimalNumber& _val_attr)
{
    m_has_val_attr = true;
    m_val_attr = new ST_DecimalNumber(_val_attr);
}

const ST_DecimalNumber& CT_DecimalNumber::get_val_attr() const
{
    if (m_val_attr)
    {
        return *m_val_attr;
    }
    return ST_DecimalNumber::default_instance();
}

CT_DecimalNumber* CT_DecimalNumber::default_instance_ = NULL;

// CT_HunitMeasure
CT_HunitMeasure::CT_HunitMeasure()
    :m_has_val_attr(false),
     m_val_attr(NULL)
{
}
CT_HunitMeasure::~CT_HunitMeasure()
{
    clear();
}
void CT_HunitMeasure::clear()
{
    m_has_val_attr = false;

    if (m_val_attr)
    {
        delete m_val_attr;
        m_val_attr = NULL;
    }

}

void CT_HunitMeasure::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    assert(m_has_val_attr);
    if (m_has_val_attr)
    {
        m_val_attr->toXmlAttr("val", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_HunitMeasure& CT_HunitMeasure::default_instance()
{
    if (!CT_HunitMeasure::default_instance_)
    {
        CT_HunitMeasure::default_instance_ = new CT_HunitMeasure();
    }
    return *CT_HunitMeasure::default_instance_;
}

bool CT_HunitMeasure::has_val_attr() const
{
    return m_has_val_attr;
}

void CT_HunitMeasure::set_val_attr(const ST_HunitMeasure& _val_attr)
{
    m_has_val_attr = true;
    m_val_attr = new ST_HunitMeasure(_val_attr);
}

const ST_HunitMeasure& CT_HunitMeasure::get_val_attr() const
{
    if (m_val_attr)
    {
        return *m_val_attr;
    }
    return ST_HunitMeasure::default_instance();
}

CT_HunitMeasure* CT_HunitMeasure::default_instance_ = NULL;

// CT_Color
CT_Color::CT_Color()
    :m_has_val_attr(false),
     m_val_attr(NULL)
{
}
CT_Color::~CT_Color()
{
    clear();
}
void CT_Color::clear()
{
    m_has_val_attr = false;

    if (m_val_attr)
    {
        delete m_val_attr;
        m_val_attr = NULL;
    }

}

void CT_Color::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    assert(m_has_val_attr);
    if (m_has_val_attr)
    {
        m_val_attr->toXmlAttr("val", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_Color& CT_Color::default_instance()
{
    if (!CT_Color::default_instance_)
    {
        CT_Color::default_instance_ = new CT_Color();
    }
    return *CT_Color::default_instance_;
}

bool CT_Color::has_val_attr() const
{
    return m_has_val_attr;
}

void CT_Color::set_val_attr(const ST_IntColorRGB& _val_attr)
{
    m_has_val_attr = true;
    m_val_attr = new ST_IntColorRGB(_val_attr);
}

const ST_IntColorRGB& CT_Color::get_val_attr() const
{
    if (m_val_attr)
    {
        return *m_val_attr;
    }
    return ST_IntColorRGB::default_instance();
}

CT_Color* CT_Color::default_instance_ = NULL;

// CT_Image
CT_Image::CT_Image()
    :m_has_Bright_attr(false),
     m_Bright_attr(NULL),
     m_has_Contrast_attr(false),
     m_Contrast_attr(NULL),
     m_has_Effect_attr(false),
     m_Effect_attr(NULL),
     m_has_BinItem_attr(false),
     m_BinItem_attr(NULL),
     m_has_Alpha_attr(false),
     m_Alpha_attr(NULL)
{
}
CT_Image::~CT_Image()
{
    clear();
}
void CT_Image::clear()
{
    m_has_Bright_attr = false;

    if (m_Bright_attr)
    {
        delete m_Bright_attr;
        m_Bright_attr = NULL;
    }


    m_has_Contrast_attr = false;

    if (m_Contrast_attr)
    {
        delete m_Contrast_attr;
        m_Contrast_attr = NULL;
    }


    m_has_Effect_attr = false;

    if (m_Effect_attr)
    {
        delete m_Effect_attr;
        m_Effect_attr = NULL;
    }


    m_has_BinItem_attr = false;

    if (m_BinItem_attr)
    {
        delete m_BinItem_attr;
        m_BinItem_attr = NULL;
    }


    m_has_Alpha_attr = false;

    if (m_Alpha_attr)
    {
        delete m_Alpha_attr;
        m_Alpha_attr = NULL;
    }

}

void CT_Image::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_Bright_attr)
    {
        m_Bright_attr->toXmlAttr("Bright", _outStream);
    }



    if (m_has_Contrast_attr)
    {
        m_Contrast_attr->toXmlAttr("Contrast", _outStream);
    }



    if (m_has_Effect_attr)
    {
        m_Effect_attr->toXmlAttr("Effect", _outStream);
    }



    if (m_has_BinItem_attr)
    {
        m_BinItem_attr->toXmlAttr("BinItem", _outStream);
    }



    if (m_has_Alpha_attr)
    {
        m_Alpha_attr->toXmlAttr("Alpha", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_Image& CT_Image::default_instance()
{
    if (!CT_Image::default_instance_)
    {
        CT_Image::default_instance_ = new CT_Image();
    }
    return *CT_Image::default_instance_;
}

bool CT_Image::has_Bright_attr() const
{
    return m_has_Bright_attr;
}

void CT_Image::set_Bright_attr(const ST_DecimalNumber& _Bright_attr)
{
    m_has_Bright_attr = true;
    m_Bright_attr = new ST_DecimalNumber(_Bright_attr);
}

const ST_DecimalNumber& CT_Image::get_Bright_attr() const
{
    if (m_Bright_attr)
    {
        return *m_Bright_attr;
    }
    return ST_DecimalNumber::default_instance();
}

bool CT_Image::has_Contrast_attr() const
{
    return m_has_Contrast_attr;
}

void CT_Image::set_Contrast_attr(const ST_DecimalNumber& _Contrast_attr)
{
    m_has_Contrast_attr = true;
    m_Contrast_attr = new ST_DecimalNumber(_Contrast_attr);
}

const ST_DecimalNumber& CT_Image::get_Contrast_attr() const
{
    if (m_Contrast_attr)
    {
        return *m_Contrast_attr;
    }
    return ST_DecimalNumber::default_instance();
}

bool CT_Image::has_Effect_attr() const
{
    return m_has_Effect_attr;
}

void CT_Image::set_Effect_attr(const ST_Effect& _Effect_attr)
{
    m_has_Effect_attr = true;
    m_Effect_attr = new ST_Effect(_Effect_attr);
}

const ST_Effect& CT_Image::get_Effect_attr() const
{
    if (m_Effect_attr)
    {
        return *m_Effect_attr;
    }
    return ST_Effect::default_instance();
}

bool CT_Image::has_BinItem_attr() const
{
    return m_has_BinItem_attr;
}

void CT_Image::set_BinItem_attr(const ST_String& _BinItem_attr)
{
    m_has_BinItem_attr = true;
    m_BinItem_attr = new ST_String(_BinItem_attr);
}

const ST_String& CT_Image::get_BinItem_attr() const
{
    if (m_BinItem_attr)
    {
        return *m_BinItem_attr;
    }
    return ST_String::default_instance();
}

bool CT_Image::has_Alpha_attr() const
{
    return m_has_Alpha_attr;
}

void CT_Image::set_Alpha_attr(const ST_Percent& _Alpha_attr)
{
    m_has_Alpha_attr = true;
    m_Alpha_attr = new ST_Percent(_Alpha_attr);
}

const ST_Percent& CT_Image::get_Alpha_attr() const
{
    if (m_Alpha_attr)
    {
        return *m_Alpha_attr;
    }
    return ST_Percent::default_instance();
}

CT_Image* CT_Image::default_instance_ = NULL;

// CT_SUBSTFONT
CT_SUBSTFONT::CT_SUBSTFONT()
    :m_has_Type_attr(false),
     m_Type_attr(NULL),
     m_has_Name_attr(false),
     m_Name_attr(NULL)
{
}
CT_SUBSTFONT::~CT_SUBSTFONT()
{
    clear();
}
void CT_SUBSTFONT::clear()
{
    m_has_Type_attr = false;

    if (m_Type_attr)
    {
        delete m_Type_attr;
        m_Type_attr = NULL;
    }


    m_has_Name_attr = false;

    if (m_Name_attr)
    {
        delete m_Name_attr;
        m_Name_attr = NULL;
    }

}

void CT_SUBSTFONT::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_Type_attr)
    {
        m_Type_attr->toXmlAttr("Type", _outStream);
    }



    if (m_has_Name_attr)
    {
        m_Name_attr->toXmlAttr("Name", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_SUBSTFONT& CT_SUBSTFONT::default_instance()
{
    if (!CT_SUBSTFONT::default_instance_)
    {
        CT_SUBSTFONT::default_instance_ = new CT_SUBSTFONT();
    }
    return *CT_SUBSTFONT::default_instance_;
}

bool CT_SUBSTFONT::has_Type_attr() const
{
    return m_has_Type_attr;
}

void CT_SUBSTFONT::set_Type_attr(const ST_FontType& _Type_attr)
{
    m_has_Type_attr = true;
    m_Type_attr = new ST_FontType(_Type_attr);
}

const ST_FontType& CT_SUBSTFONT::get_Type_attr() const
{
    if (m_Type_attr)
    {
        return *m_Type_attr;
    }
    return ST_FontType::default_instance();
}

bool CT_SUBSTFONT::has_Name_attr() const
{
    return m_has_Name_attr;
}

void CT_SUBSTFONT::set_Name_attr(const ST_String& _Name_attr)
{
    m_has_Name_attr = true;
    m_Name_attr = new ST_String(_Name_attr);
}

const ST_String& CT_SUBSTFONT::get_Name_attr() const
{
    if (m_Name_attr)
    {
        return *m_Name_attr;
    }
    return ST_String::default_instance();
}

CT_SUBSTFONT* CT_SUBSTFONT::default_instance_ = NULL;

// CT_TYPEINFO
CT_TYPEINFO::CT_TYPEINFO()
    :m_has_FamilyType_attr(false),
     m_FamilyType_attr(NULL),
     m_has_SerifStyle_attr(false),
     m_SerifStyle_attr(NULL),
     m_has_Weight_attr(false),
     m_Weight_attr(NULL),
     m_has_Proportion_attr(false),
     m_Proportion_attr(NULL),
     m_has_Contrast_attr(false),
     m_Contrast_attr(NULL),
     m_has_StrokeVariation_attr(false),
     m_StrokeVariation_attr(NULL),
     m_has_ArmStyle_attr(false),
     m_ArmStyle_attr(NULL),
     m_has_Letterform_attr(false),
     m_Letterform_attr(NULL),
     m_has_Midline_attr(false),
     m_Midline_attr(NULL),
     m_has_XHeight_attr(false),
     m_XHeight_attr(NULL)
{
}
CT_TYPEINFO::~CT_TYPEINFO()
{
    clear();
}
void CT_TYPEINFO::clear()
{
    m_has_FamilyType_attr = false;

    if (m_FamilyType_attr)
    {
        delete m_FamilyType_attr;
        m_FamilyType_attr = NULL;
    }


    m_has_SerifStyle_attr = false;

    if (m_SerifStyle_attr)
    {
        delete m_SerifStyle_attr;
        m_SerifStyle_attr = NULL;
    }


    m_has_Weight_attr = false;

    if (m_Weight_attr)
    {
        delete m_Weight_attr;
        m_Weight_attr = NULL;
    }


    m_has_Proportion_attr = false;

    if (m_Proportion_attr)
    {
        delete m_Proportion_attr;
        m_Proportion_attr = NULL;
    }


    m_has_Contrast_attr = false;

    if (m_Contrast_attr)
    {
        delete m_Contrast_attr;
        m_Contrast_attr = NULL;
    }


    m_has_StrokeVariation_attr = false;

    if (m_StrokeVariation_attr)
    {
        delete m_StrokeVariation_attr;
        m_StrokeVariation_attr = NULL;
    }


    m_has_ArmStyle_attr = false;

    if (m_ArmStyle_attr)
    {
        delete m_ArmStyle_attr;
        m_ArmStyle_attr = NULL;
    }


    m_has_Letterform_attr = false;

    if (m_Letterform_attr)
    {
        delete m_Letterform_attr;
        m_Letterform_attr = NULL;
    }


    m_has_Midline_attr = false;

    if (m_Midline_attr)
    {
        delete m_Midline_attr;
        m_Midline_attr = NULL;
    }


    m_has_XHeight_attr = false;

    if (m_XHeight_attr)
    {
        delete m_XHeight_attr;
        m_XHeight_attr = NULL;
    }

}

void CT_TYPEINFO::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_FamilyType_attr)
    {
        m_FamilyType_attr->toXmlAttr("FamilyType", _outStream);
    }



    if (m_has_SerifStyle_attr)
    {
        m_SerifStyle_attr->toXmlAttr("SerifStyle", _outStream);
    }



    if (m_has_Weight_attr)
    {
        m_Weight_attr->toXmlAttr("Weight", _outStream);
    }



    if (m_has_Proportion_attr)
    {
        m_Proportion_attr->toXmlAttr("Proportion", _outStream);
    }



    if (m_has_Contrast_attr)
    {
        m_Contrast_attr->toXmlAttr("Contrast", _outStream);
    }



    if (m_has_StrokeVariation_attr)
    {
        m_StrokeVariation_attr->toXmlAttr("StrokeVariation", _outStream);
    }



    if (m_has_ArmStyle_attr)
    {
        m_ArmStyle_attr->toXmlAttr("ArmStyle", _outStream);
    }



    if (m_has_Letterform_attr)
    {
        m_Letterform_attr->toXmlAttr("Letterform", _outStream);
    }



    if (m_has_Midline_attr)
    {
        m_Midline_attr->toXmlAttr("Midline", _outStream);
    }



    if (m_has_XHeight_attr)
    {
        m_XHeight_attr->toXmlAttr("XHeight", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_TYPEINFO& CT_TYPEINFO::default_instance()
{
    if (!CT_TYPEINFO::default_instance_)
    {
        CT_TYPEINFO::default_instance_ = new CT_TYPEINFO();
    }
    return *CT_TYPEINFO::default_instance_;
}

bool CT_TYPEINFO::has_FamilyType_attr() const
{
    return m_has_FamilyType_attr;
}

void CT_TYPEINFO::set_FamilyType_attr(const ST_String& _FamilyType_attr)
{
    m_has_FamilyType_attr = true;
    m_FamilyType_attr = new ST_String(_FamilyType_attr);
}

const ST_String& CT_TYPEINFO::get_FamilyType_attr() const
{
    if (m_FamilyType_attr)
    {
        return *m_FamilyType_attr;
    }
    return ST_String::default_instance();
}

bool CT_TYPEINFO::has_SerifStyle_attr() const
{
    return m_has_SerifStyle_attr;
}

void CT_TYPEINFO::set_SerifStyle_attr(const ST_String& _SerifStyle_attr)
{
    m_has_SerifStyle_attr = true;
    m_SerifStyle_attr = new ST_String(_SerifStyle_attr);
}

const ST_String& CT_TYPEINFO::get_SerifStyle_attr() const
{
    if (m_SerifStyle_attr)
    {
        return *m_SerifStyle_attr;
    }
    return ST_String::default_instance();
}

bool CT_TYPEINFO::has_Weight_attr() const
{
    return m_has_Weight_attr;
}

void CT_TYPEINFO::set_Weight_attr(const ST_String& _Weight_attr)
{
    m_has_Weight_attr = true;
    m_Weight_attr = new ST_String(_Weight_attr);
}

const ST_String& CT_TYPEINFO::get_Weight_attr() const
{
    if (m_Weight_attr)
    {
        return *m_Weight_attr;
    }
    return ST_String::default_instance();
}

bool CT_TYPEINFO::has_Proportion_attr() const
{
    return m_has_Proportion_attr;
}

void CT_TYPEINFO::set_Proportion_attr(const ST_String& _Proportion_attr)
{
    m_has_Proportion_attr = true;
    m_Proportion_attr = new ST_String(_Proportion_attr);
}

const ST_String& CT_TYPEINFO::get_Proportion_attr() const
{
    if (m_Proportion_attr)
    {
        return *m_Proportion_attr;
    }
    return ST_String::default_instance();
}

bool CT_TYPEINFO::has_Contrast_attr() const
{
    return m_has_Contrast_attr;
}

void CT_TYPEINFO::set_Contrast_attr(const ST_String& _Contrast_attr)
{
    m_has_Contrast_attr = true;
    m_Contrast_attr = new ST_String(_Contrast_attr);
}

const ST_String& CT_TYPEINFO::get_Contrast_attr() const
{
    if (m_Contrast_attr)
    {
        return *m_Contrast_attr;
    }
    return ST_String::default_instance();
}

bool CT_TYPEINFO::has_StrokeVariation_attr() const
{
    return m_has_StrokeVariation_attr;
}

void CT_TYPEINFO::set_StrokeVariation_attr(const ST_String& _StrokeVariation_attr)
{
    m_has_StrokeVariation_attr = true;
    m_StrokeVariation_attr = new ST_String(_StrokeVariation_attr);
}

const ST_String& CT_TYPEINFO::get_StrokeVariation_attr() const
{
    if (m_StrokeVariation_attr)
    {
        return *m_StrokeVariation_attr;
    }
    return ST_String::default_instance();
}

bool CT_TYPEINFO::has_ArmStyle_attr() const
{
    return m_has_ArmStyle_attr;
}

void CT_TYPEINFO::set_ArmStyle_attr(const ST_String& _ArmStyle_attr)
{
    m_has_ArmStyle_attr = true;
    m_ArmStyle_attr = new ST_String(_ArmStyle_attr);
}

const ST_String& CT_TYPEINFO::get_ArmStyle_attr() const
{
    if (m_ArmStyle_attr)
    {
        return *m_ArmStyle_attr;
    }
    return ST_String::default_instance();
}

bool CT_TYPEINFO::has_Letterform_attr() const
{
    return m_has_Letterform_attr;
}

void CT_TYPEINFO::set_Letterform_attr(const ST_String& _Letterform_attr)
{
    m_has_Letterform_attr = true;
    m_Letterform_attr = new ST_String(_Letterform_attr);
}

const ST_String& CT_TYPEINFO::get_Letterform_attr() const
{
    if (m_Letterform_attr)
    {
        return *m_Letterform_attr;
    }
    return ST_String::default_instance();
}

bool CT_TYPEINFO::has_Midline_attr() const
{
    return m_has_Midline_attr;
}

void CT_TYPEINFO::set_Midline_attr(const ST_String& _Midline_attr)
{
    m_has_Midline_attr = true;
    m_Midline_attr = new ST_String(_Midline_attr);
}

const ST_String& CT_TYPEINFO::get_Midline_attr() const
{
    if (m_Midline_attr)
    {
        return *m_Midline_attr;
    }
    return ST_String::default_instance();
}

bool CT_TYPEINFO::has_XHeight_attr() const
{
    return m_has_XHeight_attr;
}

void CT_TYPEINFO::set_XHeight_attr(const ST_String& _XHeight_attr)
{
    m_has_XHeight_attr = true;
    m_XHeight_attr = new ST_String(_XHeight_attr);
}

const ST_String& CT_TYPEINFO::get_XHeight_attr() const
{
    if (m_XHeight_attr)
    {
        return *m_XHeight_attr;
    }
    return ST_String::default_instance();
}

CT_TYPEINFO* CT_TYPEINFO::default_instance_ = NULL;

// CT_FONT
CT_FONT::CT_FONT()
    :m_has_SUBSTFONT(false),
     m_SUBSTFONT(NULL),
     m_has_TYPEINFO(false),
     m_TYPEINFO(NULL),
     m_has_Id_attr(false),
     m_Id_attr(NULL),
     m_has_Type_attr(false),
     m_Type_attr(NULL),
     m_has_Name_attr(false),
     m_Name_attr(NULL)
{
}
CT_FONT::~CT_FONT()
{
    clear();
}
bool CT_FONT::has_SUBSTFONT() const
{
    return m_has_SUBSTFONT;
}

CT_SUBSTFONT* CT_FONT::mutable_SUBSTFONT()
{
    m_has_SUBSTFONT = true;
    if (!m_SUBSTFONT)
    {
        m_SUBSTFONT = new CT_SUBSTFONT();
    }
    return m_SUBSTFONT;
}

const CT_SUBSTFONT& CT_FONT::get_SUBSTFONT() const
{
    if (m_SUBSTFONT)
    {
        return *m_SUBSTFONT;
    }
    return CT_SUBSTFONT::default_instance();
}

bool CT_FONT::has_TYPEINFO() const
{
    return m_has_TYPEINFO;
}

CT_TYPEINFO* CT_FONT::mutable_TYPEINFO()
{
    m_has_TYPEINFO = true;
    if (!m_TYPEINFO)
    {
        m_TYPEINFO = new CT_TYPEINFO();
    }
    return m_TYPEINFO;
}

const CT_TYPEINFO& CT_FONT::get_TYPEINFO() const
{
    if (m_TYPEINFO)
    {
        return *m_TYPEINFO;
    }
    return CT_TYPEINFO::default_instance();
}

void CT_FONT::clear()
{
    m_has_Id_attr = false;

    if (m_Id_attr)
    {
        delete m_Id_attr;
        m_Id_attr = NULL;
    }


    m_has_Type_attr = false;

    if (m_Type_attr)
    {
        delete m_Type_attr;
        m_Type_attr = NULL;
    }


    m_has_Name_attr = false;

    if (m_Name_attr)
    {
        delete m_Name_attr;
        m_Name_attr = NULL;
    }


    m_has_SUBSTFONT = false;

    if (m_SUBSTFONT)
    {
        delete m_SUBSTFONT;
        m_SUBSTFONT = NULL;
    }


    m_has_TYPEINFO = false;

    if (m_TYPEINFO)
    {
        delete m_TYPEINFO;
        m_TYPEINFO = NULL;
    }

}

void CT_FONT::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_Id_attr)
    {
        m_Id_attr->toXmlAttr("Id", _outStream);
    }



    if (m_has_Type_attr)
    {
        m_Type_attr->toXmlAttr("Type", _outStream);
    }



    if (m_has_Name_attr)
    {
        m_Name_attr->toXmlAttr("Name", _outStream);
    }

    _outStream << ">";


    if (m_has_SUBSTFONT)
    {
        m_SUBSTFONT->toXmlElem("SUBSTFONT", "", _outStream);
    }


    if (m_has_TYPEINFO)
    {
        m_TYPEINFO->toXmlElem("TYPEINFO", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_FONT& CT_FONT::default_instance()
{
    if (!CT_FONT::default_instance_)
    {
        CT_FONT::default_instance_ = new CT_FONT();
    }
    return *CT_FONT::default_instance_;
}

bool CT_FONT::has_Id_attr() const
{
    return m_has_Id_attr;
}

void CT_FONT::set_Id_attr(const ST_UnsignedDecimalNumber& _Id_attr)
{
    m_has_Id_attr = true;
    m_Id_attr = new ST_UnsignedDecimalNumber(_Id_attr);
}

const ST_UnsignedDecimalNumber& CT_FONT::get_Id_attr() const
{
    if (m_Id_attr)
    {
        return *m_Id_attr;
    }
    return ST_UnsignedDecimalNumber::default_instance();
}

bool CT_FONT::has_Type_attr() const
{
    return m_has_Type_attr;
}

void CT_FONT::set_Type_attr(const ST_FontType& _Type_attr)
{
    m_has_Type_attr = true;
    m_Type_attr = new ST_FontType(_Type_attr);
}

const ST_FontType& CT_FONT::get_Type_attr() const
{
    if (m_Type_attr)
    {
        return *m_Type_attr;
    }
    return ST_FontType::default_instance();
}

bool CT_FONT::has_Name_attr() const
{
    return m_has_Name_attr;
}

void CT_FONT::set_Name_attr(const ST_String& _Name_attr)
{
    m_has_Name_attr = true;
    m_Name_attr = new ST_String(_Name_attr);
}

const ST_String& CT_FONT::get_Name_attr() const
{
    if (m_Name_attr)
    {
        return *m_Name_attr;
    }
    return ST_String::default_instance();
}

CT_FONT* CT_FONT::default_instance_ = NULL;

// CT_PARAHEAD
CT_PARAHEAD::CT_PARAHEAD()
    :m_has_Alignment_attr(false),
     m_Alignment_attr(NULL),
     m_has_AutoIndent_attr(false),
     m_AutoIndent_attr(NULL),
     m_has_Level_attr(false),
     m_Level_attr(NULL),
     m_has_NumFormat_attr(false),
     m_NumFormat_attr(NULL),
     m_has_TextOffset_attr(false),
     m_TextOffset_attr(NULL),
     m_has_TextOffsetType_attr(false),
     m_TextOffsetType_attr(NULL),
     m_has_UseInstWidth_attr(false),
     m_UseInstWidth_attr(NULL),
     m_has_WidthAdjust_attr(false),
     m_WidthAdjust_attr(NULL),
     m_has_CharShape_attr(false),
     m_CharShape_attr(NULL)
{
}
CT_PARAHEAD::~CT_PARAHEAD()
{
    clear();
}
void CT_PARAHEAD::clear()
{
    m_has_Alignment_attr = false;

    if (m_Alignment_attr)
    {
        delete m_Alignment_attr;
        m_Alignment_attr = NULL;
    }


    m_has_AutoIndent_attr = false;

    if (m_AutoIndent_attr)
    {
        delete m_AutoIndent_attr;
        m_AutoIndent_attr = NULL;
    }


    m_has_Level_attr = false;

    if (m_Level_attr)
    {
        delete m_Level_attr;
        m_Level_attr = NULL;
    }


    m_has_NumFormat_attr = false;

    if (m_NumFormat_attr)
    {
        delete m_NumFormat_attr;
        m_NumFormat_attr = NULL;
    }


    m_has_TextOffset_attr = false;

    if (m_TextOffset_attr)
    {
        delete m_TextOffset_attr;
        m_TextOffset_attr = NULL;
    }


    m_has_TextOffsetType_attr = false;

    if (m_TextOffsetType_attr)
    {
        delete m_TextOffsetType_attr;
        m_TextOffsetType_attr = NULL;
    }


    m_has_UseInstWidth_attr = false;

    if (m_UseInstWidth_attr)
    {
        delete m_UseInstWidth_attr;
        m_UseInstWidth_attr = NULL;
    }


    m_has_WidthAdjust_attr = false;

    if (m_WidthAdjust_attr)
    {
        delete m_WidthAdjust_attr;
        m_WidthAdjust_attr = NULL;
    }


    m_has_CharShape_attr = false;

    if (m_CharShape_attr)
    {
        delete m_CharShape_attr;
        m_CharShape_attr = NULL;
    }

}

void CT_PARAHEAD::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_Alignment_attr)
    {
        m_Alignment_attr->toXmlAttr("Alignment", _outStream);
    }



    if (m_has_AutoIndent_attr)
    {
        m_AutoIndent_attr->toXmlAttr("AutoIndent", _outStream);
    }



    if (m_has_Level_attr)
    {
        m_Level_attr->toXmlAttr("Level", _outStream);
    }



    if (m_has_NumFormat_attr)
    {
        m_NumFormat_attr->toXmlAttr("NumFormat", _outStream);
    }



    if (m_has_TextOffset_attr)
    {
        m_TextOffset_attr->toXmlAttr("TextOffset", _outStream);
    }



    if (m_has_TextOffsetType_attr)
    {
        m_TextOffsetType_attr->toXmlAttr("TextOffsetType", _outStream);
    }



    if (m_has_UseInstWidth_attr)
    {
        m_UseInstWidth_attr->toXmlAttr("UseInstWidth", _outStream);
    }



    if (m_has_WidthAdjust_attr)
    {
        m_WidthAdjust_attr->toXmlAttr("WidthAdjust", _outStream);
    }



    if (m_has_CharShape_attr)
    {
        m_CharShape_attr->toXmlAttr("CharShape", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_PARAHEAD& CT_PARAHEAD::default_instance()
{
    if (!CT_PARAHEAD::default_instance_)
    {
        CT_PARAHEAD::default_instance_ = new CT_PARAHEAD();
    }
    return *CT_PARAHEAD::default_instance_;
}

bool CT_PARAHEAD::has_Alignment_attr() const
{
    return m_has_Alignment_attr;
}

void CT_PARAHEAD::set_Alignment_attr(const ST_AlignmentType2& _Alignment_attr)
{
    m_has_Alignment_attr = true;
    m_Alignment_attr = new ST_AlignmentType2(_Alignment_attr);
}

const ST_AlignmentType2& CT_PARAHEAD::get_Alignment_attr() const
{
    if (m_Alignment_attr)
    {
        return *m_Alignment_attr;
    }
    return ST_AlignmentType2::default_instance();
}

bool CT_PARAHEAD::has_AutoIndent_attr() const
{
    return m_has_AutoIndent_attr;
}

void CT_PARAHEAD::set_AutoIndent_attr(const ST_OnOff& _AutoIndent_attr)
{
    m_has_AutoIndent_attr = true;
    m_AutoIndent_attr = new ST_OnOff(_AutoIndent_attr);
}

const ST_OnOff& CT_PARAHEAD::get_AutoIndent_attr() const
{
    if (m_AutoIndent_attr)
    {
        return *m_AutoIndent_attr;
    }
    return ST_OnOff::default_instance();
}

bool CT_PARAHEAD::has_Level_attr() const
{
    return m_has_Level_attr;
}

void CT_PARAHEAD::set_Level_attr(const ST_NumberLevelType1& _Level_attr)
{
    m_has_Level_attr = true;
    m_Level_attr = new ST_NumberLevelType1(_Level_attr);
}

const ST_NumberLevelType1& CT_PARAHEAD::get_Level_attr() const
{
    if (m_Level_attr)
    {
        return *m_Level_attr;
    }
    return ST_NumberLevelType1::default_instance();
}

bool CT_PARAHEAD::has_NumFormat_attr() const
{
    return m_has_NumFormat_attr;
}

void CT_PARAHEAD::set_NumFormat_attr(const ST_NumberType1& _NumFormat_attr)
{
    m_has_NumFormat_attr = true;
    m_NumFormat_attr = new ST_NumberType1(_NumFormat_attr);
}

const ST_NumberType1& CT_PARAHEAD::get_NumFormat_attr() const
{
    if (m_NumFormat_attr)
    {
        return *m_NumFormat_attr;
    }
    return ST_NumberType1::default_instance();
}

bool CT_PARAHEAD::has_TextOffset_attr() const
{
    return m_has_TextOffset_attr;
}

void CT_PARAHEAD::set_TextOffset_attr(const ST_Step& _TextOffset_attr)
{
    m_has_TextOffset_attr = true;
    m_TextOffset_attr = new ST_Step(_TextOffset_attr);
}

const ST_Step& CT_PARAHEAD::get_TextOffset_attr() const
{
    if (m_TextOffset_attr)
    {
        return *m_TextOffset_attr;
    }
    return ST_Step::default_instance();
}

bool CT_PARAHEAD::has_TextOffsetType_attr() const
{
    return m_has_TextOffsetType_attr;
}

void CT_PARAHEAD::set_TextOffsetType_attr(const ST_StepType& _TextOffsetType_attr)
{
    m_has_TextOffsetType_attr = true;
    m_TextOffsetType_attr = new ST_StepType(_TextOffsetType_attr);
}

const ST_StepType& CT_PARAHEAD::get_TextOffsetType_attr() const
{
    if (m_TextOffsetType_attr)
    {
        return *m_TextOffsetType_attr;
    }
    return ST_StepType::default_instance();
}

bool CT_PARAHEAD::has_UseInstWidth_attr() const
{
    return m_has_UseInstWidth_attr;
}

void CT_PARAHEAD::set_UseInstWidth_attr(const ST_OnOff& _UseInstWidth_attr)
{
    m_has_UseInstWidth_attr = true;
    m_UseInstWidth_attr = new ST_OnOff(_UseInstWidth_attr);
}

const ST_OnOff& CT_PARAHEAD::get_UseInstWidth_attr() const
{
    if (m_UseInstWidth_attr)
    {
        return *m_UseInstWidth_attr;
    }
    return ST_OnOff::default_instance();
}

bool CT_PARAHEAD::has_WidthAdjust_attr() const
{
    return m_has_WidthAdjust_attr;
}

void CT_PARAHEAD::set_WidthAdjust_attr(const ST_HunitMeasure& _WidthAdjust_attr)
{
    m_has_WidthAdjust_attr = true;
    m_WidthAdjust_attr = new ST_HunitMeasure(_WidthAdjust_attr);
}

const ST_HunitMeasure& CT_PARAHEAD::get_WidthAdjust_attr() const
{
    if (m_WidthAdjust_attr)
    {
        return *m_WidthAdjust_attr;
    }
    return ST_HunitMeasure::default_instance();
}

bool CT_PARAHEAD::has_CharShape_attr() const
{
    return m_has_CharShape_attr;
}

void CT_PARAHEAD::set_CharShape_attr(const ST_ID& _CharShape_attr)
{
    m_has_CharShape_attr = true;
    m_CharShape_attr = new ST_ID(_CharShape_attr);
}

const ST_ID& CT_PARAHEAD::get_CharShape_attr() const
{
    if (m_CharShape_attr)
    {
        return *m_CharShape_attr;
    }
    return ST_ID::default_instance();
}

CT_PARAHEAD* CT_PARAHEAD::default_instance_ = NULL;

// CT_AUTONUMFORMAT
CT_AUTONUMFORMAT::CT_AUTONUMFORMAT()
    :m_has_SuffixChar_attr(false),
     m_SuffixChar_attr(NULL),
     m_has_Superscript_attr(false),
     m_Superscript_attr(NULL),
     m_has_Type_attr(false),
     m_Type_attr(NULL)
{
}
CT_AUTONUMFORMAT::~CT_AUTONUMFORMAT()
{
    clear();
}
void CT_AUTONUMFORMAT::clear()
{
    m_has_SuffixChar_attr = false;

    if (m_SuffixChar_attr)
    {
        delete m_SuffixChar_attr;
        m_SuffixChar_attr = NULL;
    }


    m_has_Superscript_attr = false;

    if (m_Superscript_attr)
    {
        delete m_Superscript_attr;
        m_Superscript_attr = NULL;
    }


    m_has_Type_attr = false;

    if (m_Type_attr)
    {
        delete m_Type_attr;
        m_Type_attr = NULL;
    }

}

void CT_AUTONUMFORMAT::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_SuffixChar_attr)
    {
        m_SuffixChar_attr->toXmlAttr("SuffixChar", _outStream);
    }



    if (m_has_Superscript_attr)
    {
        m_Superscript_attr->toXmlAttr("Superscript", _outStream);
    }



    if (m_has_Type_attr)
    {
        m_Type_attr->toXmlAttr("Type", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_AUTONUMFORMAT& CT_AUTONUMFORMAT::default_instance()
{
    if (!CT_AUTONUMFORMAT::default_instance_)
    {
        CT_AUTONUMFORMAT::default_instance_ = new CT_AUTONUMFORMAT();
    }
    return *CT_AUTONUMFORMAT::default_instance_;
}

bool CT_AUTONUMFORMAT::has_SuffixChar_attr() const
{
    return m_has_SuffixChar_attr;
}

void CT_AUTONUMFORMAT::set_SuffixChar_attr(const ST_String& _SuffixChar_attr)
{
    m_has_SuffixChar_attr = true;
    m_SuffixChar_attr = new ST_String(_SuffixChar_attr);
}

const ST_String& CT_AUTONUMFORMAT::get_SuffixChar_attr() const
{
    if (m_SuffixChar_attr)
    {
        return *m_SuffixChar_attr;
    }
    return ST_String::default_instance();
}

bool CT_AUTONUMFORMAT::has_Superscript_attr() const
{
    return m_has_Superscript_attr;
}

void CT_AUTONUMFORMAT::set_Superscript_attr(const ST_String& _Superscript_attr)
{
    m_has_Superscript_attr = true;
    m_Superscript_attr = new ST_String(_Superscript_attr);
}

const ST_String& CT_AUTONUMFORMAT::get_Superscript_attr() const
{
    if (m_Superscript_attr)
    {
        return *m_Superscript_attr;
    }
    return ST_String::default_instance();
}

bool CT_AUTONUMFORMAT::has_Type_attr() const
{
    return m_has_Type_attr;
}

void CT_AUTONUMFORMAT::set_Type_attr(const ST_String& _Type_attr)
{
    m_has_Type_attr = true;
    m_Type_attr = new ST_String(_Type_attr);
}

const ST_String& CT_AUTONUMFORMAT::get_Type_attr() const
{
    if (m_Type_attr)
    {
        return *m_Type_attr;
    }
    return ST_String::default_instance();
}

CT_AUTONUMFORMAT* CT_AUTONUMFORMAT::default_instance_ = NULL;

// CT_NOTELINE
CT_NOTELINE::CT_NOTELINE()
    :m_has_Color_attr(false),
     m_Color_attr(NULL),
     m_has_Length_attr(false),
     m_Length_attr(NULL),
     m_has_Type_attr(false),
     m_Type_attr(NULL),
     m_has_Width_attr(false),
     m_Width_attr(NULL)
{
}
CT_NOTELINE::~CT_NOTELINE()
{
    clear();
}
void CT_NOTELINE::clear()
{
    m_has_Color_attr = false;

    if (m_Color_attr)
    {
        delete m_Color_attr;
        m_Color_attr = NULL;
    }


    m_has_Length_attr = false;

    if (m_Length_attr)
    {
        delete m_Length_attr;
        m_Length_attr = NULL;
    }


    m_has_Type_attr = false;

    if (m_Type_attr)
    {
        delete m_Type_attr;
        m_Type_attr = NULL;
    }


    m_has_Width_attr = false;

    if (m_Width_attr)
    {
        delete m_Width_attr;
        m_Width_attr = NULL;
    }

}

void CT_NOTELINE::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_Color_attr)
    {
        m_Color_attr->toXmlAttr("Color", _outStream);
    }



    if (m_has_Length_attr)
    {
        m_Length_attr->toXmlAttr("Length", _outStream);
    }



    if (m_has_Type_attr)
    {
        m_Type_attr->toXmlAttr("Type", _outStream);
    }



    if (m_has_Width_attr)
    {
        m_Width_attr->toXmlAttr("Width", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_NOTELINE& CT_NOTELINE::default_instance()
{
    if (!CT_NOTELINE::default_instance_)
    {
        CT_NOTELINE::default_instance_ = new CT_NOTELINE();
    }
    return *CT_NOTELINE::default_instance_;
}

bool CT_NOTELINE::has_Color_attr() const
{
    return m_has_Color_attr;
}

void CT_NOTELINE::set_Color_attr(const ST_String& _Color_attr)
{
    m_has_Color_attr = true;
    m_Color_attr = new ST_String(_Color_attr);
}

const ST_String& CT_NOTELINE::get_Color_attr() const
{
    if (m_Color_attr)
    {
        return *m_Color_attr;
    }
    return ST_String::default_instance();
}

bool CT_NOTELINE::has_Length_attr() const
{
    return m_has_Length_attr;
}

void CT_NOTELINE::set_Length_attr(const ST_String& _Length_attr)
{
    m_has_Length_attr = true;
    m_Length_attr = new ST_String(_Length_attr);
}

const ST_String& CT_NOTELINE::get_Length_attr() const
{
    if (m_Length_attr)
    {
        return *m_Length_attr;
    }
    return ST_String::default_instance();
}

bool CT_NOTELINE::has_Type_attr() const
{
    return m_has_Type_attr;
}

void CT_NOTELINE::set_Type_attr(const ST_String& _Type_attr)
{
    m_has_Type_attr = true;
    m_Type_attr = new ST_String(_Type_attr);
}

const ST_String& CT_NOTELINE::get_Type_attr() const
{
    if (m_Type_attr)
    {
        return *m_Type_attr;
    }
    return ST_String::default_instance();
}

bool CT_NOTELINE::has_Width_attr() const
{
    return m_has_Width_attr;
}

void CT_NOTELINE::set_Width_attr(const ST_String& _Width_attr)
{
    m_has_Width_attr = true;
    m_Width_attr = new ST_String(_Width_attr);
}

const ST_String& CT_NOTELINE::get_Width_attr() const
{
    if (m_Width_attr)
    {
        return *m_Width_attr;
    }
    return ST_String::default_instance();
}

CT_NOTELINE* CT_NOTELINE::default_instance_ = NULL;

// CT_NOTESPACING
CT_NOTESPACING::CT_NOTESPACING()
    :m_has_AboveLine_attr(false),
     m_AboveLine_attr(NULL),
     m_has_BelowLine_attr(false),
     m_BelowLine_attr(NULL),
     m_has_BetweenNotes_attr(false),
     m_BetweenNotes_attr(NULL)
{
}
CT_NOTESPACING::~CT_NOTESPACING()
{
    clear();
}
void CT_NOTESPACING::clear()
{
    m_has_AboveLine_attr = false;

    if (m_AboveLine_attr)
    {
        delete m_AboveLine_attr;
        m_AboveLine_attr = NULL;
    }


    m_has_BelowLine_attr = false;

    if (m_BelowLine_attr)
    {
        delete m_BelowLine_attr;
        m_BelowLine_attr = NULL;
    }


    m_has_BetweenNotes_attr = false;

    if (m_BetweenNotes_attr)
    {
        delete m_BetweenNotes_attr;
        m_BetweenNotes_attr = NULL;
    }

}

void CT_NOTESPACING::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_AboveLine_attr)
    {
        m_AboveLine_attr->toXmlAttr("AboveLine", _outStream);
    }



    if (m_has_BelowLine_attr)
    {
        m_BelowLine_attr->toXmlAttr("BelowLine", _outStream);
    }



    if (m_has_BetweenNotes_attr)
    {
        m_BetweenNotes_attr->toXmlAttr("BetweenNotes", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_NOTESPACING& CT_NOTESPACING::default_instance()
{
    if (!CT_NOTESPACING::default_instance_)
    {
        CT_NOTESPACING::default_instance_ = new CT_NOTESPACING();
    }
    return *CT_NOTESPACING::default_instance_;
}

bool CT_NOTESPACING::has_AboveLine_attr() const
{
    return m_has_AboveLine_attr;
}

void CT_NOTESPACING::set_AboveLine_attr(const ST_String& _AboveLine_attr)
{
    m_has_AboveLine_attr = true;
    m_AboveLine_attr = new ST_String(_AboveLine_attr);
}

const ST_String& CT_NOTESPACING::get_AboveLine_attr() const
{
    if (m_AboveLine_attr)
    {
        return *m_AboveLine_attr;
    }
    return ST_String::default_instance();
}

bool CT_NOTESPACING::has_BelowLine_attr() const
{
    return m_has_BelowLine_attr;
}

void CT_NOTESPACING::set_BelowLine_attr(const ST_String& _BelowLine_attr)
{
    m_has_BelowLine_attr = true;
    m_BelowLine_attr = new ST_String(_BelowLine_attr);
}

const ST_String& CT_NOTESPACING::get_BelowLine_attr() const
{
    if (m_BelowLine_attr)
    {
        return *m_BelowLine_attr;
    }
    return ST_String::default_instance();
}

bool CT_NOTESPACING::has_BetweenNotes_attr() const
{
    return m_has_BetweenNotes_attr;
}

void CT_NOTESPACING::set_BetweenNotes_attr(const ST_String& _BetweenNotes_attr)
{
    m_has_BetweenNotes_attr = true;
    m_BetweenNotes_attr = new ST_String(_BetweenNotes_attr);
}

const ST_String& CT_NOTESPACING::get_BetweenNotes_attr() const
{
    if (m_BetweenNotes_attr)
    {
        return *m_BetweenNotes_attr;
    }
    return ST_String::default_instance();
}

CT_NOTESPACING* CT_NOTESPACING::default_instance_ = NULL;

// CT_NOTENUMBERING
CT_NOTENUMBERING::CT_NOTENUMBERING()
    :m_has_NewNumber_attr(false),
     m_NewNumber_attr(NULL),
     m_has_Type_attr(false),
     m_Type_attr(NULL)
{
}
CT_NOTENUMBERING::~CT_NOTENUMBERING()
{
    clear();
}
void CT_NOTENUMBERING::clear()
{
    m_has_NewNumber_attr = false;

    if (m_NewNumber_attr)
    {
        delete m_NewNumber_attr;
        m_NewNumber_attr = NULL;
    }


    m_has_Type_attr = false;

    if (m_Type_attr)
    {
        delete m_Type_attr;
        m_Type_attr = NULL;
    }

}

void CT_NOTENUMBERING::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_NewNumber_attr)
    {
        m_NewNumber_attr->toXmlAttr("NewNumber", _outStream);
    }



    if (m_has_Type_attr)
    {
        m_Type_attr->toXmlAttr("Type", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_NOTENUMBERING& CT_NOTENUMBERING::default_instance()
{
    if (!CT_NOTENUMBERING::default_instance_)
    {
        CT_NOTENUMBERING::default_instance_ = new CT_NOTENUMBERING();
    }
    return *CT_NOTENUMBERING::default_instance_;
}

bool CT_NOTENUMBERING::has_NewNumber_attr() const
{
    return m_has_NewNumber_attr;
}

void CT_NOTENUMBERING::set_NewNumber_attr(const ST_String& _NewNumber_attr)
{
    m_has_NewNumber_attr = true;
    m_NewNumber_attr = new ST_String(_NewNumber_attr);
}

const ST_String& CT_NOTENUMBERING::get_NewNumber_attr() const
{
    if (m_NewNumber_attr)
    {
        return *m_NewNumber_attr;
    }
    return ST_String::default_instance();
}

bool CT_NOTENUMBERING::has_Type_attr() const
{
    return m_has_Type_attr;
}

void CT_NOTENUMBERING::set_Type_attr(const ST_String& _Type_attr)
{
    m_has_Type_attr = true;
    m_Type_attr = new ST_String(_Type_attr);
}

const ST_String& CT_NOTENUMBERING::get_Type_attr() const
{
    if (m_Type_attr)
    {
        return *m_Type_attr;
    }
    return ST_String::default_instance();
}

CT_NOTENUMBERING* CT_NOTENUMBERING::default_instance_ = NULL;

// CT_NOTEPLACEMENT
CT_NOTEPLACEMENT::CT_NOTEPLACEMENT()
    :m_has_BeneathText_attr(false),
     m_BeneathText_attr(NULL),
     m_has_Place_attr(false),
     m_Place_attr(NULL)
{
}
CT_NOTEPLACEMENT::~CT_NOTEPLACEMENT()
{
    clear();
}
void CT_NOTEPLACEMENT::clear()
{
    m_has_BeneathText_attr = false;

    if (m_BeneathText_attr)
    {
        delete m_BeneathText_attr;
        m_BeneathText_attr = NULL;
    }


    m_has_Place_attr = false;

    if (m_Place_attr)
    {
        delete m_Place_attr;
        m_Place_attr = NULL;
    }

}

void CT_NOTEPLACEMENT::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_BeneathText_attr)
    {
        m_BeneathText_attr->toXmlAttr("BeneathText", _outStream);
    }



    if (m_has_Place_attr)
    {
        m_Place_attr->toXmlAttr("Place", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_NOTEPLACEMENT& CT_NOTEPLACEMENT::default_instance()
{
    if (!CT_NOTEPLACEMENT::default_instance_)
    {
        CT_NOTEPLACEMENT::default_instance_ = new CT_NOTEPLACEMENT();
    }
    return *CT_NOTEPLACEMENT::default_instance_;
}

bool CT_NOTEPLACEMENT::has_BeneathText_attr() const
{
    return m_has_BeneathText_attr;
}

void CT_NOTEPLACEMENT::set_BeneathText_attr(const ST_String& _BeneathText_attr)
{
    m_has_BeneathText_attr = true;
    m_BeneathText_attr = new ST_String(_BeneathText_attr);
}

const ST_String& CT_NOTEPLACEMENT::get_BeneathText_attr() const
{
    if (m_BeneathText_attr)
    {
        return *m_BeneathText_attr;
    }
    return ST_String::default_instance();
}

bool CT_NOTEPLACEMENT::has_Place_attr() const
{
    return m_has_Place_attr;
}

void CT_NOTEPLACEMENT::set_Place_attr(const ST_String& _Place_attr)
{
    m_has_Place_attr = true;
    m_Place_attr = new ST_String(_Place_attr);
}

const ST_String& CT_NOTEPLACEMENT::get_Place_attr() const
{
    if (m_Place_attr)
    {
        return *m_Place_attr;
    }
    return ST_String::default_instance();
}

CT_NOTEPLACEMENT* CT_NOTEPLACEMENT::default_instance_ = NULL;

// CT_FONTTYPE
CT_FONTTYPE::CT_FONTTYPE()
    :m_has_Id_attr(false),
     m_Id_attr(NULL),
     m_has_Name_attr(false),
     m_Name_attr(NULL),
     m_has_Type_attr(false),
     m_Type_attr(NULL)
{
}
CT_FONTTYPE::~CT_FONTTYPE()
{
    clear();
}
CT_TYPEINFO* CT_FONTTYPE::add_TYPEINFO()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_TYPEINFO* pNewChild = pChildGroup->mutable_TYPEINFO();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

void CT_FONTTYPE::clear()
{
    m_has_Id_attr = false;

    if (m_Id_attr)
    {
        delete m_Id_attr;
        m_Id_attr = NULL;
    }


    m_has_Name_attr = false;

    if (m_Name_attr)
    {
        delete m_Name_attr;
        m_Name_attr = NULL;
    }


    m_has_Type_attr = false;

    if (m_Type_attr)
    {
        delete m_Type_attr;
        m_Type_attr = NULL;
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

void CT_FONTTYPE::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_Id_attr)
    {
        m_Id_attr->toXmlAttr("Id", _outStream);
    }



    if (m_has_Name_attr)
    {
        m_Name_attr->toXmlAttr("Name", _outStream);
    }



    if (m_has_Type_attr)
    {
        m_Type_attr->toXmlAttr("Type", _outStream);
    }

    _outStream << ">";

    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_TYPEINFO())
            {
                (*iter)->get_TYPEINFO().toXmlElem("TYPEINFO", "", _outStream);
            }


        }
    }

    _outStream << "</" << _elemName << ">";
}

const CT_FONTTYPE& CT_FONTTYPE::default_instance()
{
    if (!CT_FONTTYPE::default_instance_)
    {
        CT_FONTTYPE::default_instance_ = new CT_FONTTYPE();
    }
    return *CT_FONTTYPE::default_instance_;
}

bool CT_FONTTYPE::has_Id_attr() const
{
    return m_has_Id_attr;
}

void CT_FONTTYPE::set_Id_attr(const ST_String& _Id_attr)
{
    m_has_Id_attr = true;
    m_Id_attr = new ST_String(_Id_attr);
}

const ST_String& CT_FONTTYPE::get_Id_attr() const
{
    if (m_Id_attr)
    {
        return *m_Id_attr;
    }
    return ST_String::default_instance();
}

bool CT_FONTTYPE::has_Name_attr() const
{
    return m_has_Name_attr;
}

void CT_FONTTYPE::set_Name_attr(const ST_String& _Name_attr)
{
    m_has_Name_attr = true;
    m_Name_attr = new ST_String(_Name_attr);
}

const ST_String& CT_FONTTYPE::get_Name_attr() const
{
    if (m_Name_attr)
    {
        return *m_Name_attr;
    }
    return ST_String::default_instance();
}

bool CT_FONTTYPE::has_Type_attr() const
{
    return m_has_Type_attr;
}

void CT_FONTTYPE::set_Type_attr(const ST_String& _Type_attr)
{
    m_has_Type_attr = true;
    m_Type_attr = new ST_String(_Type_attr);
}

const ST_String& CT_FONTTYPE::get_Type_attr() const
{
    if (m_Type_attr)
    {
        return *m_Type_attr;
    }
    return ST_String::default_instance();
}


// CT_FONTTYPE::ChildGroup_1
CT_FONTTYPE::ChildGroup_1::ChildGroup_1()
    :m_has_TYPEINFO(false),
     m_TYPEINFO(NULL)
{
}
bool CT_FONTTYPE::ChildGroup_1::has_TYPEINFO() const
{
    return m_has_TYPEINFO;
}

CT_TYPEINFO* CT_FONTTYPE::ChildGroup_1::mutable_TYPEINFO()
{

    m_has_TYPEINFO = true;
    if (!m_TYPEINFO)
    {
        m_TYPEINFO = new CT_TYPEINFO();
    }
    return m_TYPEINFO;
}

const CT_TYPEINFO& CT_FONTTYPE::ChildGroup_1::get_TYPEINFO() const
{
    if (m_TYPEINFO)
    {
        return *m_TYPEINFO;
    }
    return CT_TYPEINFO::default_instance();
}

CT_FONTTYPE* CT_FONTTYPE::default_instance_ = NULL;

// CT_BORDER
CT_BORDER::CT_BORDER()
    :m_has_Type_attr(false),
     m_Type_attr(NULL),
     m_has_Width_attr(false),
     m_Width_attr(NULL),
     m_has_Color_attr(false),
     m_Color_attr(NULL)
{
}
CT_BORDER::~CT_BORDER()
{
    clear();
}
void CT_BORDER::clear()
{
    m_has_Type_attr = false;

    if (m_Type_attr)
    {
        delete m_Type_attr;
        m_Type_attr = NULL;
    }


    m_has_Width_attr = false;

    if (m_Width_attr)
    {
        delete m_Width_attr;
        m_Width_attr = NULL;
    }


    m_has_Color_attr = false;

    if (m_Color_attr)
    {
        delete m_Color_attr;
        m_Color_attr = NULL;
    }

}

void CT_BORDER::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_Type_attr)
    {
        m_Type_attr->toXmlAttr("Type", _outStream);
    }



    if (m_has_Width_attr)
    {
        m_Width_attr->toXmlAttr("Width", _outStream);
    }



    if (m_has_Color_attr)
    {
        m_Color_attr->toXmlAttr("Color", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_BORDER& CT_BORDER::default_instance()
{
    if (!CT_BORDER::default_instance_)
    {
        CT_BORDER::default_instance_ = new CT_BORDER();
    }
    return *CT_BORDER::default_instance_;
}

bool CT_BORDER::has_Type_attr() const
{
    return m_has_Type_attr;
}

void CT_BORDER::set_Type_attr(const ST_LINETYPE1& _Type_attr)
{
    m_has_Type_attr = true;
    m_Type_attr = new ST_LINETYPE1(_Type_attr);
}

const ST_LINETYPE1& CT_BORDER::get_Type_attr() const
{
    if (m_Type_attr)
    {
        return *m_Type_attr;
    }
    return ST_LINETYPE1::default_instance();
}

bool CT_BORDER::has_Width_attr() const
{
    return m_has_Width_attr;
}

void CT_BORDER::set_Width_attr(const ST_LineWidth1& _Width_attr)
{
    m_has_Width_attr = true;
    m_Width_attr = new ST_LineWidth1(_Width_attr);
}

const ST_LineWidth1& CT_BORDER::get_Width_attr() const
{
    if (m_Width_attr)
    {
        return *m_Width_attr;
    }
    return ST_LineWidth1::default_instance();
}

bool CT_BORDER::has_Color_attr() const
{
    return m_has_Color_attr;
}

void CT_BORDER::set_Color_attr(const ST_IntColorRGB& _Color_attr)
{
    m_has_Color_attr = true;
    m_Color_attr = new ST_IntColorRGB(_Color_attr);
}

const ST_IntColorRGB& CT_BORDER::get_Color_attr() const
{
    if (m_Color_attr)
    {
        return *m_Color_attr;
    }
    return ST_IntColorRGB::default_instance();
}

CT_BORDER* CT_BORDER::default_instance_ = NULL;

// CT_WINDOWBRUSH
CT_WINDOWBRUSH::CT_WINDOWBRUSH()
    :m_has_Alpha_attr(false),
     m_Alpha_attr(NULL),
     m_has_FaceColor_attr(false),
     m_FaceColor_attr(NULL),
     m_has_HatchColor_attr(false),
     m_HatchColor_attr(NULL),
     m_has_HatchStyle_attr(false),
     m_HatchStyle_attr(NULL)
{
}
CT_WINDOWBRUSH::~CT_WINDOWBRUSH()
{
    clear();
}
void CT_WINDOWBRUSH::clear()
{
    m_has_Alpha_attr = false;

    if (m_Alpha_attr)
    {
        delete m_Alpha_attr;
        m_Alpha_attr = NULL;
    }


    m_has_FaceColor_attr = false;

    if (m_FaceColor_attr)
    {
        delete m_FaceColor_attr;
        m_FaceColor_attr = NULL;
    }


    m_has_HatchColor_attr = false;

    if (m_HatchColor_attr)
    {
        delete m_HatchColor_attr;
        m_HatchColor_attr = NULL;
    }


    m_has_HatchStyle_attr = false;

    if (m_HatchStyle_attr)
    {
        delete m_HatchStyle_attr;
        m_HatchStyle_attr = NULL;
    }

}

void CT_WINDOWBRUSH::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_Alpha_attr)
    {
        m_Alpha_attr->toXmlAttr("Alpha", _outStream);
    }



    if (m_has_FaceColor_attr)
    {
        m_FaceColor_attr->toXmlAttr("FaceColor", _outStream);
    }



    if (m_has_HatchColor_attr)
    {
        m_HatchColor_attr->toXmlAttr("HatchColor", _outStream);
    }



    if (m_has_HatchStyle_attr)
    {
        m_HatchStyle_attr->toXmlAttr("HatchStyle", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_WINDOWBRUSH& CT_WINDOWBRUSH::default_instance()
{
    if (!CT_WINDOWBRUSH::default_instance_)
    {
        CT_WINDOWBRUSH::default_instance_ = new CT_WINDOWBRUSH();
    }
    return *CT_WINDOWBRUSH::default_instance_;
}

bool CT_WINDOWBRUSH::has_Alpha_attr() const
{
    return m_has_Alpha_attr;
}

void CT_WINDOWBRUSH::set_Alpha_attr(const ST_Percent& _Alpha_attr)
{
    m_has_Alpha_attr = true;
    m_Alpha_attr = new ST_Percent(_Alpha_attr);
}

const ST_Percent& CT_WINDOWBRUSH::get_Alpha_attr() const
{
    if (m_Alpha_attr)
    {
        return *m_Alpha_attr;
    }
    return ST_Percent::default_instance();
}

bool CT_WINDOWBRUSH::has_FaceColor_attr() const
{
    return m_has_FaceColor_attr;
}

void CT_WINDOWBRUSH::set_FaceColor_attr(const ST_IntColorRGB& _FaceColor_attr)
{
    m_has_FaceColor_attr = true;
    m_FaceColor_attr = new ST_IntColorRGB(_FaceColor_attr);
}

const ST_IntColorRGB& CT_WINDOWBRUSH::get_FaceColor_attr() const
{
    if (m_FaceColor_attr)
    {
        return *m_FaceColor_attr;
    }
    return ST_IntColorRGB::default_instance();
}

bool CT_WINDOWBRUSH::has_HatchColor_attr() const
{
    return m_has_HatchColor_attr;
}

void CT_WINDOWBRUSH::set_HatchColor_attr(const ST_IntColorRGB& _HatchColor_attr)
{
    m_has_HatchColor_attr = true;
    m_HatchColor_attr = new ST_IntColorRGB(_HatchColor_attr);
}

const ST_IntColorRGB& CT_WINDOWBRUSH::get_HatchColor_attr() const
{
    if (m_HatchColor_attr)
    {
        return *m_HatchColor_attr;
    }
    return ST_IntColorRGB::default_instance();
}

bool CT_WINDOWBRUSH::has_HatchStyle_attr() const
{
    return m_has_HatchStyle_attr;
}

void CT_WINDOWBRUSH::set_HatchStyle_attr(const ST_HatchStyle& _HatchStyle_attr)
{
    m_has_HatchStyle_attr = true;
    m_HatchStyle_attr = new ST_HatchStyle(_HatchStyle_attr);
}

const ST_HatchStyle& CT_WINDOWBRUSH::get_HatchStyle_attr() const
{
    if (m_HatchStyle_attr)
    {
        return *m_HatchStyle_attr;
    }
    return ST_HatchStyle::default_instance();
}

CT_WINDOWBRUSH* CT_WINDOWBRUSH::default_instance_ = NULL;

// CT_GRADATION
CT_GRADATION::CT_GRADATION()
    :m_has_Type_attr(false),
     m_Type_attr(NULL),
     m_has_Angle_attr(false),
     m_Angle_attr(NULL),
     m_has_CenterX_attr(false),
     m_CenterX_attr(NULL),
     m_has_CenterY_attr(false),
     m_CenterY_attr(NULL),
     m_has_Step_attr(false),
     m_Step_attr(NULL),
     m_has_ColorNum_attr(false),
     m_ColorNum_attr(NULL),
     m_has_StepCenter_attr(false),
     m_StepCenter_attr(NULL),
     m_has_Alpha_attr(false),
     m_Alpha_attr(NULL)
{
}
CT_GRADATION::~CT_GRADATION()
{
    clear();
}
CT_Color* CT_GRADATION::add_COLOR()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Color* pNewChild = pChildGroup->mutable_COLOR();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

void CT_GRADATION::clear()
{
    m_has_Type_attr = false;

    if (m_Type_attr)
    {
        delete m_Type_attr;
        m_Type_attr = NULL;
    }


    m_has_Angle_attr = false;

    if (m_Angle_attr)
    {
        delete m_Angle_attr;
        m_Angle_attr = NULL;
    }


    m_has_CenterX_attr = false;

    if (m_CenterX_attr)
    {
        delete m_CenterX_attr;
        m_CenterX_attr = NULL;
    }


    m_has_CenterY_attr = false;

    if (m_CenterY_attr)
    {
        delete m_CenterY_attr;
        m_CenterY_attr = NULL;
    }


    m_has_Step_attr = false;

    if (m_Step_attr)
    {
        delete m_Step_attr;
        m_Step_attr = NULL;
    }


    m_has_ColorNum_attr = false;

    if (m_ColorNum_attr)
    {
        delete m_ColorNum_attr;
        m_ColorNum_attr = NULL;
    }


    m_has_StepCenter_attr = false;

    if (m_StepCenter_attr)
    {
        delete m_StepCenter_attr;
        m_StepCenter_attr = NULL;
    }


    m_has_Alpha_attr = false;

    if (m_Alpha_attr)
    {
        delete m_Alpha_attr;
        m_Alpha_attr = NULL;
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

void CT_GRADATION::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_Type_attr)
    {
        m_Type_attr->toXmlAttr("Type", _outStream);
    }



    if (m_has_Angle_attr)
    {
        m_Angle_attr->toXmlAttr("Angle", _outStream);
    }



    if (m_has_CenterX_attr)
    {
        m_CenterX_attr->toXmlAttr("CenterX", _outStream);
    }



    if (m_has_CenterY_attr)
    {
        m_CenterY_attr->toXmlAttr("CenterY", _outStream);
    }



    if (m_has_Step_attr)
    {
        m_Step_attr->toXmlAttr("Step", _outStream);
    }



    if (m_has_ColorNum_attr)
    {
        m_ColorNum_attr->toXmlAttr("ColorNum", _outStream);
    }



    if (m_has_StepCenter_attr)
    {
        m_StepCenter_attr->toXmlAttr("StepCenter", _outStream);
    }



    if (m_has_Alpha_attr)
    {
        m_Alpha_attr->toXmlAttr("Alpha", _outStream);
    }

    _outStream << ">";

    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_COLOR())
            {
                (*iter)->get_COLOR().toXmlElem("COLOR", "", _outStream);
            }


        }
    }

    _outStream << "</" << _elemName << ">";
}

const CT_GRADATION& CT_GRADATION::default_instance()
{
    if (!CT_GRADATION::default_instance_)
    {
        CT_GRADATION::default_instance_ = new CT_GRADATION();
    }
    return *CT_GRADATION::default_instance_;
}

bool CT_GRADATION::has_Type_attr() const
{
    return m_has_Type_attr;
}

void CT_GRADATION::set_Type_attr(const ST_GradType& _Type_attr)
{
    m_has_Type_attr = true;
    m_Type_attr = new ST_GradType(_Type_attr);
}

const ST_GradType& CT_GRADATION::get_Type_attr() const
{
    if (m_Type_attr)
    {
        return *m_Type_attr;
    }
    return ST_GradType::default_instance();
}

bool CT_GRADATION::has_Angle_attr() const
{
    return m_has_Angle_attr;
}

void CT_GRADATION::set_Angle_attr(const ST_Angle& _Angle_attr)
{
    m_has_Angle_attr = true;
    m_Angle_attr = new ST_Angle(_Angle_attr);
}

const ST_Angle& CT_GRADATION::get_Angle_attr() const
{
    if (m_Angle_attr)
    {
        return *m_Angle_attr;
    }
    return ST_Angle::default_instance();
}

bool CT_GRADATION::has_CenterX_attr() const
{
    return m_has_CenterX_attr;
}

void CT_GRADATION::set_CenterX_attr(const ST_UnsignedDecimalNumber& _CenterX_attr)
{
    m_has_CenterX_attr = true;
    m_CenterX_attr = new ST_UnsignedDecimalNumber(_CenterX_attr);
}

const ST_UnsignedDecimalNumber& CT_GRADATION::get_CenterX_attr() const
{
    if (m_CenterX_attr)
    {
        return *m_CenterX_attr;
    }
    return ST_UnsignedDecimalNumber::default_instance();
}

bool CT_GRADATION::has_CenterY_attr() const
{
    return m_has_CenterY_attr;
}

void CT_GRADATION::set_CenterY_attr(const ST_UnsignedDecimalNumber& _CenterY_attr)
{
    m_has_CenterY_attr = true;
    m_CenterY_attr = new ST_UnsignedDecimalNumber(_CenterY_attr);
}

const ST_UnsignedDecimalNumber& CT_GRADATION::get_CenterY_attr() const
{
    if (m_CenterY_attr)
    {
        return *m_CenterY_attr;
    }
    return ST_UnsignedDecimalNumber::default_instance();
}

bool CT_GRADATION::has_Step_attr() const
{
    return m_has_Step_attr;
}

void CT_GRADATION::set_Step_attr(const ST_Step& _Step_attr)
{
    m_has_Step_attr = true;
    m_Step_attr = new ST_Step(_Step_attr);
}

const ST_Step& CT_GRADATION::get_Step_attr() const
{
    if (m_Step_attr)
    {
        return *m_Step_attr;
    }
    return ST_Step::default_instance();
}

bool CT_GRADATION::has_ColorNum_attr() const
{
    return m_has_ColorNum_attr;
}

void CT_GRADATION::set_ColorNum_attr(const ST_UnsignedDecimalNumber& _ColorNum_attr)
{
    m_has_ColorNum_attr = true;
    m_ColorNum_attr = new ST_UnsignedDecimalNumber(_ColorNum_attr);
}

const ST_UnsignedDecimalNumber& CT_GRADATION::get_ColorNum_attr() const
{
    if (m_ColorNum_attr)
    {
        return *m_ColorNum_attr;
    }
    return ST_UnsignedDecimalNumber::default_instance();
}

bool CT_GRADATION::has_StepCenter_attr() const
{
    return m_has_StepCenter_attr;
}

void CT_GRADATION::set_StepCenter_attr(const ST_Step& _StepCenter_attr)
{
    m_has_StepCenter_attr = true;
    m_StepCenter_attr = new ST_Step(_StepCenter_attr);
}

const ST_Step& CT_GRADATION::get_StepCenter_attr() const
{
    if (m_StepCenter_attr)
    {
        return *m_StepCenter_attr;
    }
    return ST_Step::default_instance();
}

bool CT_GRADATION::has_Alpha_attr() const
{
    return m_has_Alpha_attr;
}

void CT_GRADATION::set_Alpha_attr(const ST_Percent& _Alpha_attr)
{
    m_has_Alpha_attr = true;
    m_Alpha_attr = new ST_Percent(_Alpha_attr);
}

const ST_Percent& CT_GRADATION::get_Alpha_attr() const
{
    if (m_Alpha_attr)
    {
        return *m_Alpha_attr;
    }
    return ST_Percent::default_instance();
}


// CT_GRADATION::ChildGroup_1
CT_GRADATION::ChildGroup_1::ChildGroup_1()
    :m_has_COLOR(false),
     m_COLOR(NULL)
{
}
bool CT_GRADATION::ChildGroup_1::has_COLOR() const
{
    return m_has_COLOR;
}

CT_Color* CT_GRADATION::ChildGroup_1::mutable_COLOR()
{

    m_has_COLOR = true;
    if (!m_COLOR)
    {
        m_COLOR = new CT_Color();
    }
    return m_COLOR;
}

const CT_Color& CT_GRADATION::ChildGroup_1::get_COLOR() const
{
    if (m_COLOR)
    {
        return *m_COLOR;
    }
    return CT_Color::default_instance();
}

CT_GRADATION* CT_GRADATION::default_instance_ = NULL;

// CT_IMAGEBRUSH
CT_IMAGEBRUSH::CT_IMAGEBRUSH()
    :m_has_IMAGE(false),
     m_IMAGE(NULL),
     m_has_Mode_attr(false),
     m_Mode_attr(NULL)
{
}
CT_IMAGEBRUSH::~CT_IMAGEBRUSH()
{
    clear();
}
bool CT_IMAGEBRUSH::has_IMAGE() const
{
    return m_has_IMAGE;
}

CT_Image* CT_IMAGEBRUSH::mutable_IMAGE()
{
    m_has_IMAGE = true;
    if (!m_IMAGE)
    {
        m_IMAGE = new CT_Image();
    }
    return m_IMAGE;
}

const CT_Image& CT_IMAGEBRUSH::get_IMAGE() const
{
    if (m_IMAGE)
    {
        return *m_IMAGE;
    }
    return CT_Image::default_instance();
}

void CT_IMAGEBRUSH::clear()
{
    m_has_Mode_attr = false;

    if (m_Mode_attr)
    {
        delete m_Mode_attr;
        m_Mode_attr = NULL;
    }


    m_has_IMAGE = false;

    if (m_IMAGE)
    {
        delete m_IMAGE;
        m_IMAGE = NULL;
    }

}

void CT_IMAGEBRUSH::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_Mode_attr)
    {
        m_Mode_attr->toXmlAttr("Mode", _outStream);
    }

    _outStream << ">";

    assert(m_has_IMAGE);


    if (m_has_IMAGE)
    {
        m_IMAGE->toXmlElem("IMAGE", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_IMAGEBRUSH& CT_IMAGEBRUSH::default_instance()
{
    if (!CT_IMAGEBRUSH::default_instance_)
    {
        CT_IMAGEBRUSH::default_instance_ = new CT_IMAGEBRUSH();
    }
    return *CT_IMAGEBRUSH::default_instance_;
}

bool CT_IMAGEBRUSH::has_Mode_attr() const
{
    return m_has_Mode_attr;
}

void CT_IMAGEBRUSH::set_Mode_attr(const ST_InFillMode& _Mode_attr)
{
    m_has_Mode_attr = true;
    m_Mode_attr = new ST_InFillMode(_Mode_attr);
}

const ST_InFillMode& CT_IMAGEBRUSH::get_Mode_attr() const
{
    if (m_Mode_attr)
    {
        return *m_Mode_attr;
    }
    return ST_InFillMode::default_instance();
}

CT_IMAGEBRUSH* CT_IMAGEBRUSH::default_instance_ = NULL;

// CT_FILLBRUSH
CT_FILLBRUSH::CT_FILLBRUSH()
    :m_has_WINDOWBRUSH(false),
     m_WINDOWBRUSH(NULL),
     m_has_GRADATION(false),
     m_GRADATION(NULL),
     m_has_IMAGEBRUSH(false),
     m_IMAGEBRUSH(NULL)
{
}
CT_FILLBRUSH::~CT_FILLBRUSH()
{
    clear();
}
bool CT_FILLBRUSH::has_WINDOWBRUSH() const
{
    return m_has_WINDOWBRUSH;
}

CT_WINDOWBRUSH* CT_FILLBRUSH::mutable_WINDOWBRUSH()
{
    m_has_WINDOWBRUSH = true;
    if (!m_WINDOWBRUSH)
    {
        m_WINDOWBRUSH = new CT_WINDOWBRUSH();
    }
    return m_WINDOWBRUSH;
}

const CT_WINDOWBRUSH& CT_FILLBRUSH::get_WINDOWBRUSH() const
{
    if (m_WINDOWBRUSH)
    {
        return *m_WINDOWBRUSH;
    }
    return CT_WINDOWBRUSH::default_instance();
}

bool CT_FILLBRUSH::has_GRADATION() const
{
    return m_has_GRADATION;
}

CT_GRADATION* CT_FILLBRUSH::mutable_GRADATION()
{
    m_has_GRADATION = true;
    if (!m_GRADATION)
    {
        m_GRADATION = new CT_GRADATION();
    }
    return m_GRADATION;
}

const CT_GRADATION& CT_FILLBRUSH::get_GRADATION() const
{
    if (m_GRADATION)
    {
        return *m_GRADATION;
    }
    return CT_GRADATION::default_instance();
}

bool CT_FILLBRUSH::has_IMAGEBRUSH() const
{
    return m_has_IMAGEBRUSH;
}

CT_IMAGEBRUSH* CT_FILLBRUSH::mutable_IMAGEBRUSH()
{
    m_has_IMAGEBRUSH = true;
    if (!m_IMAGEBRUSH)
    {
        m_IMAGEBRUSH = new CT_IMAGEBRUSH();
    }
    return m_IMAGEBRUSH;
}

const CT_IMAGEBRUSH& CT_FILLBRUSH::get_IMAGEBRUSH() const
{
    if (m_IMAGEBRUSH)
    {
        return *m_IMAGEBRUSH;
    }
    return CT_IMAGEBRUSH::default_instance();
}

void CT_FILLBRUSH::clear()
{
    m_has_WINDOWBRUSH = false;

    if (m_WINDOWBRUSH)
    {
        delete m_WINDOWBRUSH;
        m_WINDOWBRUSH = NULL;
    }


    m_has_GRADATION = false;

    if (m_GRADATION)
    {
        delete m_GRADATION;
        m_GRADATION = NULL;
    }


    m_has_IMAGEBRUSH = false;

    if (m_IMAGEBRUSH)
    {
        delete m_IMAGEBRUSH;
        m_IMAGEBRUSH = NULL;
    }

}

void CT_FILLBRUSH::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";


    if (m_has_WINDOWBRUSH)
    {
        m_WINDOWBRUSH->toXmlElem("WINDOWBRUSH", "", _outStream);
    }


    if (m_has_GRADATION)
    {
        m_GRADATION->toXmlElem("GRADATION", "", _outStream);
    }


    if (m_has_IMAGEBRUSH)
    {
        m_IMAGEBRUSH->toXmlElem("IMAGEBRUSH", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_FILLBRUSH& CT_FILLBRUSH::default_instance()
{
    if (!CT_FILLBRUSH::default_instance_)
    {
        CT_FILLBRUSH::default_instance_ = new CT_FILLBRUSH();
    }
    return *CT_FILLBRUSH::default_instance_;
}

CT_FILLBRUSH* CT_FILLBRUSH::default_instance_ = NULL;

// CT_BORDERFILL
CT_BORDERFILL::CT_BORDERFILL()
    :m_has_LEFTBORDER(false),
     m_LEFTBORDER(NULL),
     m_has_RIGHTBORDER(false),
     m_RIGHTBORDER(NULL),
     m_has_TOPBORDER(false),
     m_TOPBORDER(NULL),
     m_has_BOTTOMBORDER(false),
     m_BOTTOMBORDER(NULL),
     m_has_DIAGONAL(false),
     m_DIAGONAL(NULL),
     m_has_FILLBRUSH(false),
     m_FILLBRUSH(NULL),
     m_has_BackSlash_attr(false),
     m_BackSlash_attr(NULL),
     m_has_BreakCellSeparateLine_attr(false),
     m_BreakCellSeparateLine_attr(NULL),
     m_has_CenterLine_attr(false),
     m_CenterLine_attr(NULL),
     m_has_CounterBackSlash_attr(false),
     m_CounterBackSlash_attr(NULL),
     m_has_CounterSlash_attr(false),
     m_CounterSlash_attr(NULL),
     m_has_CrookedSlash_attr(false),
     m_CrookedSlash_attr(NULL),
     m_has_Id_attr(false),
     m_Id_attr(NULL),
     m_has_Shadow_attr(false),
     m_Shadow_attr(NULL),
     m_has_Slash_attr(false),
     m_Slash_attr(NULL),
     m_has_ThreeD_attr(false),
     m_ThreeD_attr(NULL)
{
}
CT_BORDERFILL::~CT_BORDERFILL()
{
    clear();
}
bool CT_BORDERFILL::has_LEFTBORDER() const
{
    return m_has_LEFTBORDER;
}

CT_BORDER* CT_BORDERFILL::mutable_LEFTBORDER()
{
    m_has_LEFTBORDER = true;
    if (!m_LEFTBORDER)
    {
        m_LEFTBORDER = new CT_BORDER();
    }
    return m_LEFTBORDER;
}

const CT_BORDER& CT_BORDERFILL::get_LEFTBORDER() const
{
    if (m_LEFTBORDER)
    {
        return *m_LEFTBORDER;
    }
    return CT_BORDER::default_instance();
}

bool CT_BORDERFILL::has_RIGHTBORDER() const
{
    return m_has_RIGHTBORDER;
}

CT_BORDER* CT_BORDERFILL::mutable_RIGHTBORDER()
{
    m_has_RIGHTBORDER = true;
    if (!m_RIGHTBORDER)
    {
        m_RIGHTBORDER = new CT_BORDER();
    }
    return m_RIGHTBORDER;
}

const CT_BORDER& CT_BORDERFILL::get_RIGHTBORDER() const
{
    if (m_RIGHTBORDER)
    {
        return *m_RIGHTBORDER;
    }
    return CT_BORDER::default_instance();
}

bool CT_BORDERFILL::has_TOPBORDER() const
{
    return m_has_TOPBORDER;
}

CT_BORDER* CT_BORDERFILL::mutable_TOPBORDER()
{
    m_has_TOPBORDER = true;
    if (!m_TOPBORDER)
    {
        m_TOPBORDER = new CT_BORDER();
    }
    return m_TOPBORDER;
}

const CT_BORDER& CT_BORDERFILL::get_TOPBORDER() const
{
    if (m_TOPBORDER)
    {
        return *m_TOPBORDER;
    }
    return CT_BORDER::default_instance();
}

bool CT_BORDERFILL::has_BOTTOMBORDER() const
{
    return m_has_BOTTOMBORDER;
}

CT_BORDER* CT_BORDERFILL::mutable_BOTTOMBORDER()
{
    m_has_BOTTOMBORDER = true;
    if (!m_BOTTOMBORDER)
    {
        m_BOTTOMBORDER = new CT_BORDER();
    }
    return m_BOTTOMBORDER;
}

const CT_BORDER& CT_BORDERFILL::get_BOTTOMBORDER() const
{
    if (m_BOTTOMBORDER)
    {
        return *m_BOTTOMBORDER;
    }
    return CT_BORDER::default_instance();
}

bool CT_BORDERFILL::has_DIAGONAL() const
{
    return m_has_DIAGONAL;
}

CT_BORDER* CT_BORDERFILL::mutable_DIAGONAL()
{
    m_has_DIAGONAL = true;
    if (!m_DIAGONAL)
    {
        m_DIAGONAL = new CT_BORDER();
    }
    return m_DIAGONAL;
}

const CT_BORDER& CT_BORDERFILL::get_DIAGONAL() const
{
    if (m_DIAGONAL)
    {
        return *m_DIAGONAL;
    }
    return CT_BORDER::default_instance();
}

bool CT_BORDERFILL::has_FILLBRUSH() const
{
    return m_has_FILLBRUSH;
}

CT_FILLBRUSH* CT_BORDERFILL::mutable_FILLBRUSH()
{
    m_has_FILLBRUSH = true;
    if (!m_FILLBRUSH)
    {
        m_FILLBRUSH = new CT_FILLBRUSH();
    }
    return m_FILLBRUSH;
}

const CT_FILLBRUSH& CT_BORDERFILL::get_FILLBRUSH() const
{
    if (m_FILLBRUSH)
    {
        return *m_FILLBRUSH;
    }
    return CT_FILLBRUSH::default_instance();
}

void CT_BORDERFILL::clear()
{
    m_has_BackSlash_attr = false;

    if (m_BackSlash_attr)
    {
        delete m_BackSlash_attr;
        m_BackSlash_attr = NULL;
    }


    m_has_BreakCellSeparateLine_attr = false;

    if (m_BreakCellSeparateLine_attr)
    {
        delete m_BreakCellSeparateLine_attr;
        m_BreakCellSeparateLine_attr = NULL;
    }


    m_has_CenterLine_attr = false;

    if (m_CenterLine_attr)
    {
        delete m_CenterLine_attr;
        m_CenterLine_attr = NULL;
    }


    m_has_CounterBackSlash_attr = false;

    if (m_CounterBackSlash_attr)
    {
        delete m_CounterBackSlash_attr;
        m_CounterBackSlash_attr = NULL;
    }


    m_has_CounterSlash_attr = false;

    if (m_CounterSlash_attr)
    {
        delete m_CounterSlash_attr;
        m_CounterSlash_attr = NULL;
    }


    m_has_CrookedSlash_attr = false;

    if (m_CrookedSlash_attr)
    {
        delete m_CrookedSlash_attr;
        m_CrookedSlash_attr = NULL;
    }


    m_has_Id_attr = false;

    if (m_Id_attr)
    {
        delete m_Id_attr;
        m_Id_attr = NULL;
    }


    m_has_Shadow_attr = false;

    if (m_Shadow_attr)
    {
        delete m_Shadow_attr;
        m_Shadow_attr = NULL;
    }


    m_has_Slash_attr = false;

    if (m_Slash_attr)
    {
        delete m_Slash_attr;
        m_Slash_attr = NULL;
    }


    m_has_ThreeD_attr = false;

    if (m_ThreeD_attr)
    {
        delete m_ThreeD_attr;
        m_ThreeD_attr = NULL;
    }


    m_has_LEFTBORDER = false;

    if (m_LEFTBORDER)
    {
        delete m_LEFTBORDER;
        m_LEFTBORDER = NULL;
    }


    m_has_RIGHTBORDER = false;

    if (m_RIGHTBORDER)
    {
        delete m_RIGHTBORDER;
        m_RIGHTBORDER = NULL;
    }


    m_has_TOPBORDER = false;

    if (m_TOPBORDER)
    {
        delete m_TOPBORDER;
        m_TOPBORDER = NULL;
    }


    m_has_BOTTOMBORDER = false;

    if (m_BOTTOMBORDER)
    {
        delete m_BOTTOMBORDER;
        m_BOTTOMBORDER = NULL;
    }


    m_has_DIAGONAL = false;

    if (m_DIAGONAL)
    {
        delete m_DIAGONAL;
        m_DIAGONAL = NULL;
    }


    m_has_FILLBRUSH = false;

    if (m_FILLBRUSH)
    {
        delete m_FILLBRUSH;
        m_FILLBRUSH = NULL;
    }

}

void CT_BORDERFILL::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_BackSlash_attr)
    {
        m_BackSlash_attr->toXmlAttr("BackSlash", _outStream);
    }



    if (m_has_BreakCellSeparateLine_attr)
    {
        m_BreakCellSeparateLine_attr->toXmlAttr("BreakCellSeparateLine", _outStream);
    }



    if (m_has_CenterLine_attr)
    {
        m_CenterLine_attr->toXmlAttr("CenterLine", _outStream);
    }



    if (m_has_CounterBackSlash_attr)
    {
        m_CounterBackSlash_attr->toXmlAttr("CounterBackSlash", _outStream);
    }



    if (m_has_CounterSlash_attr)
    {
        m_CounterSlash_attr->toXmlAttr("CounterSlash", _outStream);
    }



    if (m_has_CrookedSlash_attr)
    {
        m_CrookedSlash_attr->toXmlAttr("CrookedSlash", _outStream);
    }



    if (m_has_Id_attr)
    {
        m_Id_attr->toXmlAttr("Id", _outStream);
    }



    if (m_has_Shadow_attr)
    {
        m_Shadow_attr->toXmlAttr("Shadow", _outStream);
    }



    if (m_has_Slash_attr)
    {
        m_Slash_attr->toXmlAttr("Slash", _outStream);
    }



    if (m_has_ThreeD_attr)
    {
        m_ThreeD_attr->toXmlAttr("ThreeD", _outStream);
    }

    _outStream << ">";


    if (m_has_LEFTBORDER)
    {
        m_LEFTBORDER->toXmlElem("LEFTBORDER", "", _outStream);
    }


    if (m_has_RIGHTBORDER)
    {
        m_RIGHTBORDER->toXmlElem("RIGHTBORDER", "", _outStream);
    }


    if (m_has_TOPBORDER)
    {
        m_TOPBORDER->toXmlElem("TOPBORDER", "", _outStream);
    }


    if (m_has_BOTTOMBORDER)
    {
        m_BOTTOMBORDER->toXmlElem("BOTTOMBORDER", "", _outStream);
    }


    if (m_has_DIAGONAL)
    {
        m_DIAGONAL->toXmlElem("DIAGONAL", "", _outStream);
    }


    if (m_has_FILLBRUSH)
    {
        m_FILLBRUSH->toXmlElem("FILLBRUSH", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_BORDERFILL& CT_BORDERFILL::default_instance()
{
    if (!CT_BORDERFILL::default_instance_)
    {
        CT_BORDERFILL::default_instance_ = new CT_BORDERFILL();
    }
    return *CT_BORDERFILL::default_instance_;
}

bool CT_BORDERFILL::has_BackSlash_attr() const
{
    return m_has_BackSlash_attr;
}

void CT_BORDERFILL::set_BackSlash_attr(const ST_String& _BackSlash_attr)
{
    m_has_BackSlash_attr = true;
    m_BackSlash_attr = new ST_String(_BackSlash_attr);
}

const ST_String& CT_BORDERFILL::get_BackSlash_attr() const
{
    if (m_BackSlash_attr)
    {
        return *m_BackSlash_attr;
    }
    return ST_String::default_instance();
}

bool CT_BORDERFILL::has_BreakCellSeparateLine_attr() const
{
    return m_has_BreakCellSeparateLine_attr;
}

void CT_BORDERFILL::set_BreakCellSeparateLine_attr(const ST_String& _BreakCellSeparateLine_attr)
{
    m_has_BreakCellSeparateLine_attr = true;
    m_BreakCellSeparateLine_attr = new ST_String(_BreakCellSeparateLine_attr);
}

const ST_String& CT_BORDERFILL::get_BreakCellSeparateLine_attr() const
{
    if (m_BreakCellSeparateLine_attr)
    {
        return *m_BreakCellSeparateLine_attr;
    }
    return ST_String::default_instance();
}

bool CT_BORDERFILL::has_CenterLine_attr() const
{
    return m_has_CenterLine_attr;
}

void CT_BORDERFILL::set_CenterLine_attr(const ST_String& _CenterLine_attr)
{
    m_has_CenterLine_attr = true;
    m_CenterLine_attr = new ST_String(_CenterLine_attr);
}

const ST_String& CT_BORDERFILL::get_CenterLine_attr() const
{
    if (m_CenterLine_attr)
    {
        return *m_CenterLine_attr;
    }
    return ST_String::default_instance();
}

bool CT_BORDERFILL::has_CounterBackSlash_attr() const
{
    return m_has_CounterBackSlash_attr;
}

void CT_BORDERFILL::set_CounterBackSlash_attr(const ST_String& _CounterBackSlash_attr)
{
    m_has_CounterBackSlash_attr = true;
    m_CounterBackSlash_attr = new ST_String(_CounterBackSlash_attr);
}

const ST_String& CT_BORDERFILL::get_CounterBackSlash_attr() const
{
    if (m_CounterBackSlash_attr)
    {
        return *m_CounterBackSlash_attr;
    }
    return ST_String::default_instance();
}

bool CT_BORDERFILL::has_CounterSlash_attr() const
{
    return m_has_CounterSlash_attr;
}

void CT_BORDERFILL::set_CounterSlash_attr(const ST_String& _CounterSlash_attr)
{
    m_has_CounterSlash_attr = true;
    m_CounterSlash_attr = new ST_String(_CounterSlash_attr);
}

const ST_String& CT_BORDERFILL::get_CounterSlash_attr() const
{
    if (m_CounterSlash_attr)
    {
        return *m_CounterSlash_attr;
    }
    return ST_String::default_instance();
}

bool CT_BORDERFILL::has_CrookedSlash_attr() const
{
    return m_has_CrookedSlash_attr;
}

void CT_BORDERFILL::set_CrookedSlash_attr(const ST_String& _CrookedSlash_attr)
{
    m_has_CrookedSlash_attr = true;
    m_CrookedSlash_attr = new ST_String(_CrookedSlash_attr);
}

const ST_String& CT_BORDERFILL::get_CrookedSlash_attr() const
{
    if (m_CrookedSlash_attr)
    {
        return *m_CrookedSlash_attr;
    }
    return ST_String::default_instance();
}

bool CT_BORDERFILL::has_Id_attr() const
{
    return m_has_Id_attr;
}

void CT_BORDERFILL::set_Id_attr(const ST_String& _Id_attr)
{
    m_has_Id_attr = true;
    m_Id_attr = new ST_String(_Id_attr);
}

const ST_String& CT_BORDERFILL::get_Id_attr() const
{
    if (m_Id_attr)
    {
        return *m_Id_attr;
    }
    return ST_String::default_instance();
}

bool CT_BORDERFILL::has_Shadow_attr() const
{
    return m_has_Shadow_attr;
}

void CT_BORDERFILL::set_Shadow_attr(const ST_String& _Shadow_attr)
{
    m_has_Shadow_attr = true;
    m_Shadow_attr = new ST_String(_Shadow_attr);
}

const ST_String& CT_BORDERFILL::get_Shadow_attr() const
{
    if (m_Shadow_attr)
    {
        return *m_Shadow_attr;
    }
    return ST_String::default_instance();
}

bool CT_BORDERFILL::has_Slash_attr() const
{
    return m_has_Slash_attr;
}

void CT_BORDERFILL::set_Slash_attr(const ST_String& _Slash_attr)
{
    m_has_Slash_attr = true;
    m_Slash_attr = new ST_String(_Slash_attr);
}

const ST_String& CT_BORDERFILL::get_Slash_attr() const
{
    if (m_Slash_attr)
    {
        return *m_Slash_attr;
    }
    return ST_String::default_instance();
}

bool CT_BORDERFILL::has_ThreeD_attr() const
{
    return m_has_ThreeD_attr;
}

void CT_BORDERFILL::set_ThreeD_attr(const ST_String& _ThreeD_attr)
{
    m_has_ThreeD_attr = true;
    m_ThreeD_attr = new ST_String(_ThreeD_attr);
}

const ST_String& CT_BORDERFILL::get_ThreeD_attr() const
{
    if (m_ThreeD_attr)
    {
        return *m_ThreeD_attr;
    }
    return ST_String::default_instance();
}

CT_BORDERFILL* CT_BORDERFILL::default_instance_ = NULL;

// CT_FONTID
CT_FONTID::CT_FONTID()
    :m_has_Hangul_attr(false),
     m_Hangul_attr(NULL),
     m_has_Hanja_attr(false),
     m_Hanja_attr(NULL),
     m_has_Japanese_attr(false),
     m_Japanese_attr(NULL),
     m_has_Latin_attr(false),
     m_Latin_attr(NULL),
     m_has_Other_attr(false),
     m_Other_attr(NULL),
     m_has_Symbol_attr(false),
     m_Symbol_attr(NULL),
     m_has_User_attr(false),
     m_User_attr(NULL)
{
}
CT_FONTID::~CT_FONTID()
{
    clear();
}
void CT_FONTID::clear()
{
    m_has_Hangul_attr = false;

    if (m_Hangul_attr)
    {
        delete m_Hangul_attr;
        m_Hangul_attr = NULL;
    }


    m_has_Hanja_attr = false;

    if (m_Hanja_attr)
    {
        delete m_Hanja_attr;
        m_Hanja_attr = NULL;
    }


    m_has_Japanese_attr = false;

    if (m_Japanese_attr)
    {
        delete m_Japanese_attr;
        m_Japanese_attr = NULL;
    }


    m_has_Latin_attr = false;

    if (m_Latin_attr)
    {
        delete m_Latin_attr;
        m_Latin_attr = NULL;
    }


    m_has_Other_attr = false;

    if (m_Other_attr)
    {
        delete m_Other_attr;
        m_Other_attr = NULL;
    }


    m_has_Symbol_attr = false;

    if (m_Symbol_attr)
    {
        delete m_Symbol_attr;
        m_Symbol_attr = NULL;
    }


    m_has_User_attr = false;

    if (m_User_attr)
    {
        delete m_User_attr;
        m_User_attr = NULL;
    }

}

void CT_FONTID::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_Hangul_attr)
    {
        m_Hangul_attr->toXmlAttr("Hangul", _outStream);
    }



    if (m_has_Hanja_attr)
    {
        m_Hanja_attr->toXmlAttr("Hanja", _outStream);
    }



    if (m_has_Japanese_attr)
    {
        m_Japanese_attr->toXmlAttr("Japanese", _outStream);
    }



    if (m_has_Latin_attr)
    {
        m_Latin_attr->toXmlAttr("Latin", _outStream);
    }



    if (m_has_Other_attr)
    {
        m_Other_attr->toXmlAttr("Other", _outStream);
    }



    if (m_has_Symbol_attr)
    {
        m_Symbol_attr->toXmlAttr("Symbol", _outStream);
    }



    if (m_has_User_attr)
    {
        m_User_attr->toXmlAttr("User", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_FONTID& CT_FONTID::default_instance()
{
    if (!CT_FONTID::default_instance_)
    {
        CT_FONTID::default_instance_ = new CT_FONTID();
    }
    return *CT_FONTID::default_instance_;
}

bool CT_FONTID::has_Hangul_attr() const
{
    return m_has_Hangul_attr;
}

void CT_FONTID::set_Hangul_attr(const ST_ID& _Hangul_attr)
{
    m_has_Hangul_attr = true;
    m_Hangul_attr = new ST_ID(_Hangul_attr);
}

const ST_ID& CT_FONTID::get_Hangul_attr() const
{
    if (m_Hangul_attr)
    {
        return *m_Hangul_attr;
    }
    return ST_ID::default_instance();
}

bool CT_FONTID::has_Hanja_attr() const
{
    return m_has_Hanja_attr;
}

void CT_FONTID::set_Hanja_attr(const ST_ID& _Hanja_attr)
{
    m_has_Hanja_attr = true;
    m_Hanja_attr = new ST_ID(_Hanja_attr);
}

const ST_ID& CT_FONTID::get_Hanja_attr() const
{
    if (m_Hanja_attr)
    {
        return *m_Hanja_attr;
    }
    return ST_ID::default_instance();
}

bool CT_FONTID::has_Japanese_attr() const
{
    return m_has_Japanese_attr;
}

void CT_FONTID::set_Japanese_attr(const ST_ID& _Japanese_attr)
{
    m_has_Japanese_attr = true;
    m_Japanese_attr = new ST_ID(_Japanese_attr);
}

const ST_ID& CT_FONTID::get_Japanese_attr() const
{
    if (m_Japanese_attr)
    {
        return *m_Japanese_attr;
    }
    return ST_ID::default_instance();
}

bool CT_FONTID::has_Latin_attr() const
{
    return m_has_Latin_attr;
}

void CT_FONTID::set_Latin_attr(const ST_ID& _Latin_attr)
{
    m_has_Latin_attr = true;
    m_Latin_attr = new ST_ID(_Latin_attr);
}

const ST_ID& CT_FONTID::get_Latin_attr() const
{
    if (m_Latin_attr)
    {
        return *m_Latin_attr;
    }
    return ST_ID::default_instance();
}

bool CT_FONTID::has_Other_attr() const
{
    return m_has_Other_attr;
}

void CT_FONTID::set_Other_attr(const ST_ID& _Other_attr)
{
    m_has_Other_attr = true;
    m_Other_attr = new ST_ID(_Other_attr);
}

const ST_ID& CT_FONTID::get_Other_attr() const
{
    if (m_Other_attr)
    {
        return *m_Other_attr;
    }
    return ST_ID::default_instance();
}

bool CT_FONTID::has_Symbol_attr() const
{
    return m_has_Symbol_attr;
}

void CT_FONTID::set_Symbol_attr(const ST_ID& _Symbol_attr)
{
    m_has_Symbol_attr = true;
    m_Symbol_attr = new ST_ID(_Symbol_attr);
}

const ST_ID& CT_FONTID::get_Symbol_attr() const
{
    if (m_Symbol_attr)
    {
        return *m_Symbol_attr;
    }
    return ST_ID::default_instance();
}

bool CT_FONTID::has_User_attr() const
{
    return m_has_User_attr;
}

void CT_FONTID::set_User_attr(const ST_ID& _User_attr)
{
    m_has_User_attr = true;
    m_User_attr = new ST_ID(_User_attr);
}

const ST_ID& CT_FONTID::get_User_attr() const
{
    if (m_User_attr)
    {
        return *m_User_attr;
    }
    return ST_ID::default_instance();
}

CT_FONTID* CT_FONTID::default_instance_ = NULL;

// CT_RATIO
CT_RATIO::CT_RATIO()
    :m_has_Hangul_attr(false),
     m_Hangul_attr(NULL),
     m_has_Hanja_attr(false),
     m_Hanja_attr(NULL),
     m_has_Japanese_attr(false),
     m_Japanese_attr(NULL),
     m_has_Latin_attr(false),
     m_Latin_attr(NULL),
     m_has_Other_attr(false),
     m_Other_attr(NULL),
     m_has_Symbol_attr(false),
     m_Symbol_attr(NULL),
     m_has_User_attr(false),
     m_User_attr(NULL)
{
}
CT_RATIO::~CT_RATIO()
{
    clear();
}
void CT_RATIO::clear()
{
    m_has_Hangul_attr = false;

    if (m_Hangul_attr)
    {
        delete m_Hangul_attr;
        m_Hangul_attr = NULL;
    }


    m_has_Hanja_attr = false;

    if (m_Hanja_attr)
    {
        delete m_Hanja_attr;
        m_Hanja_attr = NULL;
    }


    m_has_Japanese_attr = false;

    if (m_Japanese_attr)
    {
        delete m_Japanese_attr;
        m_Japanese_attr = NULL;
    }


    m_has_Latin_attr = false;

    if (m_Latin_attr)
    {
        delete m_Latin_attr;
        m_Latin_attr = NULL;
    }


    m_has_Other_attr = false;

    if (m_Other_attr)
    {
        delete m_Other_attr;
        m_Other_attr = NULL;
    }


    m_has_Symbol_attr = false;

    if (m_Symbol_attr)
    {
        delete m_Symbol_attr;
        m_Symbol_attr = NULL;
    }


    m_has_User_attr = false;

    if (m_User_attr)
    {
        delete m_User_attr;
        m_User_attr = NULL;
    }

}

void CT_RATIO::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_Hangul_attr)
    {
        m_Hangul_attr->toXmlAttr("Hangul", _outStream);
    }



    if (m_has_Hanja_attr)
    {
        m_Hanja_attr->toXmlAttr("Hanja", _outStream);
    }



    if (m_has_Japanese_attr)
    {
        m_Japanese_attr->toXmlAttr("Japanese", _outStream);
    }



    if (m_has_Latin_attr)
    {
        m_Latin_attr->toXmlAttr("Latin", _outStream);
    }



    if (m_has_Other_attr)
    {
        m_Other_attr->toXmlAttr("Other", _outStream);
    }



    if (m_has_Symbol_attr)
    {
        m_Symbol_attr->toXmlAttr("Symbol", _outStream);
    }



    if (m_has_User_attr)
    {
        m_User_attr->toXmlAttr("User", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_RATIO& CT_RATIO::default_instance()
{
    if (!CT_RATIO::default_instance_)
    {
        CT_RATIO::default_instance_ = new CT_RATIO();
    }
    return *CT_RATIO::default_instance_;
}

bool CT_RATIO::has_Hangul_attr() const
{
    return m_has_Hangul_attr;
}

void CT_RATIO::set_Hangul_attr(const ST_RATIO& _Hangul_attr)
{
    m_has_Hangul_attr = true;
    m_Hangul_attr = new ST_RATIO(_Hangul_attr);
}

const ST_RATIO& CT_RATIO::get_Hangul_attr() const
{
    if (m_Hangul_attr)
    {
        return *m_Hangul_attr;
    }
    return ST_RATIO::default_instance();
}

bool CT_RATIO::has_Hanja_attr() const
{
    return m_has_Hanja_attr;
}

void CT_RATIO::set_Hanja_attr(const ST_RATIO& _Hanja_attr)
{
    m_has_Hanja_attr = true;
    m_Hanja_attr = new ST_RATIO(_Hanja_attr);
}

const ST_RATIO& CT_RATIO::get_Hanja_attr() const
{
    if (m_Hanja_attr)
    {
        return *m_Hanja_attr;
    }
    return ST_RATIO::default_instance();
}

bool CT_RATIO::has_Japanese_attr() const
{
    return m_has_Japanese_attr;
}

void CT_RATIO::set_Japanese_attr(const ST_RATIO& _Japanese_attr)
{
    m_has_Japanese_attr = true;
    m_Japanese_attr = new ST_RATIO(_Japanese_attr);
}

const ST_RATIO& CT_RATIO::get_Japanese_attr() const
{
    if (m_Japanese_attr)
    {
        return *m_Japanese_attr;
    }
    return ST_RATIO::default_instance();
}

bool CT_RATIO::has_Latin_attr() const
{
    return m_has_Latin_attr;
}

void CT_RATIO::set_Latin_attr(const ST_RATIO& _Latin_attr)
{
    m_has_Latin_attr = true;
    m_Latin_attr = new ST_RATIO(_Latin_attr);
}

const ST_RATIO& CT_RATIO::get_Latin_attr() const
{
    if (m_Latin_attr)
    {
        return *m_Latin_attr;
    }
    return ST_RATIO::default_instance();
}

bool CT_RATIO::has_Other_attr() const
{
    return m_has_Other_attr;
}

void CT_RATIO::set_Other_attr(const ST_RATIO& _Other_attr)
{
    m_has_Other_attr = true;
    m_Other_attr = new ST_RATIO(_Other_attr);
}

const ST_RATIO& CT_RATIO::get_Other_attr() const
{
    if (m_Other_attr)
    {
        return *m_Other_attr;
    }
    return ST_RATIO::default_instance();
}

bool CT_RATIO::has_Symbol_attr() const
{
    return m_has_Symbol_attr;
}

void CT_RATIO::set_Symbol_attr(const ST_RATIO& _Symbol_attr)
{
    m_has_Symbol_attr = true;
    m_Symbol_attr = new ST_RATIO(_Symbol_attr);
}

const ST_RATIO& CT_RATIO::get_Symbol_attr() const
{
    if (m_Symbol_attr)
    {
        return *m_Symbol_attr;
    }
    return ST_RATIO::default_instance();
}

bool CT_RATIO::has_User_attr() const
{
    return m_has_User_attr;
}

void CT_RATIO::set_User_attr(const ST_RATIO& _User_attr)
{
    m_has_User_attr = true;
    m_User_attr = new ST_RATIO(_User_attr);
}

const ST_RATIO& CT_RATIO::get_User_attr() const
{
    if (m_User_attr)
    {
        return *m_User_attr;
    }
    return ST_RATIO::default_instance();
}

CT_RATIO* CT_RATIO::default_instance_ = NULL;

// CT_CHARSPACING
CT_CHARSPACING::CT_CHARSPACING()
    :m_has_Hangul_attr(false),
     m_Hangul_attr(NULL),
     m_has_Hanja_attr(false),
     m_Hanja_attr(NULL),
     m_has_Japanese_attr(false),
     m_Japanese_attr(NULL),
     m_has_Latin_attr(false),
     m_Latin_attr(NULL),
     m_has_Other_attr(false),
     m_Other_attr(NULL),
     m_has_Symbol_attr(false),
     m_Symbol_attr(NULL),
     m_has_User_attr(false),
     m_User_attr(NULL)
{
}
CT_CHARSPACING::~CT_CHARSPACING()
{
    clear();
}
void CT_CHARSPACING::clear()
{
    m_has_Hangul_attr = false;

    if (m_Hangul_attr)
    {
        delete m_Hangul_attr;
        m_Hangul_attr = NULL;
    }


    m_has_Hanja_attr = false;

    if (m_Hanja_attr)
    {
        delete m_Hanja_attr;
        m_Hanja_attr = NULL;
    }


    m_has_Japanese_attr = false;

    if (m_Japanese_attr)
    {
        delete m_Japanese_attr;
        m_Japanese_attr = NULL;
    }


    m_has_Latin_attr = false;

    if (m_Latin_attr)
    {
        delete m_Latin_attr;
        m_Latin_attr = NULL;
    }


    m_has_Other_attr = false;

    if (m_Other_attr)
    {
        delete m_Other_attr;
        m_Other_attr = NULL;
    }


    m_has_Symbol_attr = false;

    if (m_Symbol_attr)
    {
        delete m_Symbol_attr;
        m_Symbol_attr = NULL;
    }


    m_has_User_attr = false;

    if (m_User_attr)
    {
        delete m_User_attr;
        m_User_attr = NULL;
    }

}

void CT_CHARSPACING::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_Hangul_attr)
    {
        m_Hangul_attr->toXmlAttr("Hangul", _outStream);
    }



    if (m_has_Hanja_attr)
    {
        m_Hanja_attr->toXmlAttr("Hanja", _outStream);
    }



    if (m_has_Japanese_attr)
    {
        m_Japanese_attr->toXmlAttr("Japanese", _outStream);
    }



    if (m_has_Latin_attr)
    {
        m_Latin_attr->toXmlAttr("Latin", _outStream);
    }



    if (m_has_Other_attr)
    {
        m_Other_attr->toXmlAttr("Other", _outStream);
    }



    if (m_has_Symbol_attr)
    {
        m_Symbol_attr->toXmlAttr("Symbol", _outStream);
    }



    if (m_has_User_attr)
    {
        m_User_attr->toXmlAttr("User", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_CHARSPACING& CT_CHARSPACING::default_instance()
{
    if (!CT_CHARSPACING::default_instance_)
    {
        CT_CHARSPACING::default_instance_ = new CT_CHARSPACING();
    }
    return *CT_CHARSPACING::default_instance_;
}

bool CT_CHARSPACING::has_Hangul_attr() const
{
    return m_has_Hangul_attr;
}

void CT_CHARSPACING::set_Hangul_attr(const ST_CHARSPACING& _Hangul_attr)
{
    m_has_Hangul_attr = true;
    m_Hangul_attr = new ST_CHARSPACING(_Hangul_attr);
}

const ST_CHARSPACING& CT_CHARSPACING::get_Hangul_attr() const
{
    if (m_Hangul_attr)
    {
        return *m_Hangul_attr;
    }
    return ST_CHARSPACING::default_instance();
}

bool CT_CHARSPACING::has_Hanja_attr() const
{
    return m_has_Hanja_attr;
}

void CT_CHARSPACING::set_Hanja_attr(const ST_CHARSPACING& _Hanja_attr)
{
    m_has_Hanja_attr = true;
    m_Hanja_attr = new ST_CHARSPACING(_Hanja_attr);
}

const ST_CHARSPACING& CT_CHARSPACING::get_Hanja_attr() const
{
    if (m_Hanja_attr)
    {
        return *m_Hanja_attr;
    }
    return ST_CHARSPACING::default_instance();
}

bool CT_CHARSPACING::has_Japanese_attr() const
{
    return m_has_Japanese_attr;
}

void CT_CHARSPACING::set_Japanese_attr(const ST_CHARSPACING& _Japanese_attr)
{
    m_has_Japanese_attr = true;
    m_Japanese_attr = new ST_CHARSPACING(_Japanese_attr);
}

const ST_CHARSPACING& CT_CHARSPACING::get_Japanese_attr() const
{
    if (m_Japanese_attr)
    {
        return *m_Japanese_attr;
    }
    return ST_CHARSPACING::default_instance();
}

bool CT_CHARSPACING::has_Latin_attr() const
{
    return m_has_Latin_attr;
}

void CT_CHARSPACING::set_Latin_attr(const ST_CHARSPACING& _Latin_attr)
{
    m_has_Latin_attr = true;
    m_Latin_attr = new ST_CHARSPACING(_Latin_attr);
}

const ST_CHARSPACING& CT_CHARSPACING::get_Latin_attr() const
{
    if (m_Latin_attr)
    {
        return *m_Latin_attr;
    }
    return ST_CHARSPACING::default_instance();
}

bool CT_CHARSPACING::has_Other_attr() const
{
    return m_has_Other_attr;
}

void CT_CHARSPACING::set_Other_attr(const ST_CHARSPACING& _Other_attr)
{
    m_has_Other_attr = true;
    m_Other_attr = new ST_CHARSPACING(_Other_attr);
}

const ST_CHARSPACING& CT_CHARSPACING::get_Other_attr() const
{
    if (m_Other_attr)
    {
        return *m_Other_attr;
    }
    return ST_CHARSPACING::default_instance();
}

bool CT_CHARSPACING::has_Symbol_attr() const
{
    return m_has_Symbol_attr;
}

void CT_CHARSPACING::set_Symbol_attr(const ST_CHARSPACING& _Symbol_attr)
{
    m_has_Symbol_attr = true;
    m_Symbol_attr = new ST_CHARSPACING(_Symbol_attr);
}

const ST_CHARSPACING& CT_CHARSPACING::get_Symbol_attr() const
{
    if (m_Symbol_attr)
    {
        return *m_Symbol_attr;
    }
    return ST_CHARSPACING::default_instance();
}

bool CT_CHARSPACING::has_User_attr() const
{
    return m_has_User_attr;
}

void CT_CHARSPACING::set_User_attr(const ST_CHARSPACING& _User_attr)
{
    m_has_User_attr = true;
    m_User_attr = new ST_CHARSPACING(_User_attr);
}

const ST_CHARSPACING& CT_CHARSPACING::get_User_attr() const
{
    if (m_User_attr)
    {
        return *m_User_attr;
    }
    return ST_CHARSPACING::default_instance();
}

CT_CHARSPACING* CT_CHARSPACING::default_instance_ = NULL;

// CT_RELSIZE
CT_RELSIZE::CT_RELSIZE()
    :m_has_Hangul_attr(false),
     m_Hangul_attr(NULL),
     m_has_Hanja_attr(false),
     m_Hanja_attr(NULL),
     m_has_Japanese_attr(false),
     m_Japanese_attr(NULL),
     m_has_Latin_attr(false),
     m_Latin_attr(NULL),
     m_has_Other_attr(false),
     m_Other_attr(NULL),
     m_has_Symbol_attr(false),
     m_Symbol_attr(NULL),
     m_has_User_attr(false),
     m_User_attr(NULL)
{
}
CT_RELSIZE::~CT_RELSIZE()
{
    clear();
}
void CT_RELSIZE::clear()
{
    m_has_Hangul_attr = false;

    if (m_Hangul_attr)
    {
        delete m_Hangul_attr;
        m_Hangul_attr = NULL;
    }


    m_has_Hanja_attr = false;

    if (m_Hanja_attr)
    {
        delete m_Hanja_attr;
        m_Hanja_attr = NULL;
    }


    m_has_Japanese_attr = false;

    if (m_Japanese_attr)
    {
        delete m_Japanese_attr;
        m_Japanese_attr = NULL;
    }


    m_has_Latin_attr = false;

    if (m_Latin_attr)
    {
        delete m_Latin_attr;
        m_Latin_attr = NULL;
    }


    m_has_Other_attr = false;

    if (m_Other_attr)
    {
        delete m_Other_attr;
        m_Other_attr = NULL;
    }


    m_has_Symbol_attr = false;

    if (m_Symbol_attr)
    {
        delete m_Symbol_attr;
        m_Symbol_attr = NULL;
    }


    m_has_User_attr = false;

    if (m_User_attr)
    {
        delete m_User_attr;
        m_User_attr = NULL;
    }

}

void CT_RELSIZE::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_Hangul_attr)
    {
        m_Hangul_attr->toXmlAttr("Hangul", _outStream);
    }



    if (m_has_Hanja_attr)
    {
        m_Hanja_attr->toXmlAttr("Hanja", _outStream);
    }



    if (m_has_Japanese_attr)
    {
        m_Japanese_attr->toXmlAttr("Japanese", _outStream);
    }



    if (m_has_Latin_attr)
    {
        m_Latin_attr->toXmlAttr("Latin", _outStream);
    }



    if (m_has_Other_attr)
    {
        m_Other_attr->toXmlAttr("Other", _outStream);
    }



    if (m_has_Symbol_attr)
    {
        m_Symbol_attr->toXmlAttr("Symbol", _outStream);
    }



    if (m_has_User_attr)
    {
        m_User_attr->toXmlAttr("User", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_RELSIZE& CT_RELSIZE::default_instance()
{
    if (!CT_RELSIZE::default_instance_)
    {
        CT_RELSIZE::default_instance_ = new CT_RELSIZE();
    }
    return *CT_RELSIZE::default_instance_;
}

bool CT_RELSIZE::has_Hangul_attr() const
{
    return m_has_Hangul_attr;
}

void CT_RELSIZE::set_Hangul_attr(const ST_RELSIZE& _Hangul_attr)
{
    m_has_Hangul_attr = true;
    m_Hangul_attr = new ST_RELSIZE(_Hangul_attr);
}

const ST_RELSIZE& CT_RELSIZE::get_Hangul_attr() const
{
    if (m_Hangul_attr)
    {
        return *m_Hangul_attr;
    }
    return ST_RELSIZE::default_instance();
}

bool CT_RELSIZE::has_Hanja_attr() const
{
    return m_has_Hanja_attr;
}

void CT_RELSIZE::set_Hanja_attr(const ST_RELSIZE& _Hanja_attr)
{
    m_has_Hanja_attr = true;
    m_Hanja_attr = new ST_RELSIZE(_Hanja_attr);
}

const ST_RELSIZE& CT_RELSIZE::get_Hanja_attr() const
{
    if (m_Hanja_attr)
    {
        return *m_Hanja_attr;
    }
    return ST_RELSIZE::default_instance();
}

bool CT_RELSIZE::has_Japanese_attr() const
{
    return m_has_Japanese_attr;
}

void CT_RELSIZE::set_Japanese_attr(const ST_RELSIZE& _Japanese_attr)
{
    m_has_Japanese_attr = true;
    m_Japanese_attr = new ST_RELSIZE(_Japanese_attr);
}

const ST_RELSIZE& CT_RELSIZE::get_Japanese_attr() const
{
    if (m_Japanese_attr)
    {
        return *m_Japanese_attr;
    }
    return ST_RELSIZE::default_instance();
}

bool CT_RELSIZE::has_Latin_attr() const
{
    return m_has_Latin_attr;
}

void CT_RELSIZE::set_Latin_attr(const ST_RELSIZE& _Latin_attr)
{
    m_has_Latin_attr = true;
    m_Latin_attr = new ST_RELSIZE(_Latin_attr);
}

const ST_RELSIZE& CT_RELSIZE::get_Latin_attr() const
{
    if (m_Latin_attr)
    {
        return *m_Latin_attr;
    }
    return ST_RELSIZE::default_instance();
}

bool CT_RELSIZE::has_Other_attr() const
{
    return m_has_Other_attr;
}

void CT_RELSIZE::set_Other_attr(const ST_RELSIZE& _Other_attr)
{
    m_has_Other_attr = true;
    m_Other_attr = new ST_RELSIZE(_Other_attr);
}

const ST_RELSIZE& CT_RELSIZE::get_Other_attr() const
{
    if (m_Other_attr)
    {
        return *m_Other_attr;
    }
    return ST_RELSIZE::default_instance();
}

bool CT_RELSIZE::has_Symbol_attr() const
{
    return m_has_Symbol_attr;
}

void CT_RELSIZE::set_Symbol_attr(const ST_RELSIZE& _Symbol_attr)
{
    m_has_Symbol_attr = true;
    m_Symbol_attr = new ST_RELSIZE(_Symbol_attr);
}

const ST_RELSIZE& CT_RELSIZE::get_Symbol_attr() const
{
    if (m_Symbol_attr)
    {
        return *m_Symbol_attr;
    }
    return ST_RELSIZE::default_instance();
}

bool CT_RELSIZE::has_User_attr() const
{
    return m_has_User_attr;
}

void CT_RELSIZE::set_User_attr(const ST_RELSIZE& _User_attr)
{
    m_has_User_attr = true;
    m_User_attr = new ST_RELSIZE(_User_attr);
}

const ST_RELSIZE& CT_RELSIZE::get_User_attr() const
{
    if (m_User_attr)
    {
        return *m_User_attr;
    }
    return ST_RELSIZE::default_instance();
}

CT_RELSIZE* CT_RELSIZE::default_instance_ = NULL;

// CT_CHAROFFSET
CT_CHAROFFSET::CT_CHAROFFSET()
    :m_has_Hangul_attr(false),
     m_Hangul_attr(NULL),
     m_has_Hanja_attr(false),
     m_Hanja_attr(NULL),
     m_has_Japanese_attr(false),
     m_Japanese_attr(NULL),
     m_has_Latin_attr(false),
     m_Latin_attr(NULL),
     m_has_Other_attr(false),
     m_Other_attr(NULL),
     m_has_Symbol_attr(false),
     m_Symbol_attr(NULL),
     m_has_User_attr(false),
     m_User_attr(NULL)
{
}
CT_CHAROFFSET::~CT_CHAROFFSET()
{
    clear();
}
void CT_CHAROFFSET::clear()
{
    m_has_Hangul_attr = false;

    if (m_Hangul_attr)
    {
        delete m_Hangul_attr;
        m_Hangul_attr = NULL;
    }


    m_has_Hanja_attr = false;

    if (m_Hanja_attr)
    {
        delete m_Hanja_attr;
        m_Hanja_attr = NULL;
    }


    m_has_Japanese_attr = false;

    if (m_Japanese_attr)
    {
        delete m_Japanese_attr;
        m_Japanese_attr = NULL;
    }


    m_has_Latin_attr = false;

    if (m_Latin_attr)
    {
        delete m_Latin_attr;
        m_Latin_attr = NULL;
    }


    m_has_Other_attr = false;

    if (m_Other_attr)
    {
        delete m_Other_attr;
        m_Other_attr = NULL;
    }


    m_has_Symbol_attr = false;

    if (m_Symbol_attr)
    {
        delete m_Symbol_attr;
        m_Symbol_attr = NULL;
    }


    m_has_User_attr = false;

    if (m_User_attr)
    {
        delete m_User_attr;
        m_User_attr = NULL;
    }

}

void CT_CHAROFFSET::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_Hangul_attr)
    {
        m_Hangul_attr->toXmlAttr("Hangul", _outStream);
    }



    if (m_has_Hanja_attr)
    {
        m_Hanja_attr->toXmlAttr("Hanja", _outStream);
    }



    if (m_has_Japanese_attr)
    {
        m_Japanese_attr->toXmlAttr("Japanese", _outStream);
    }



    if (m_has_Latin_attr)
    {
        m_Latin_attr->toXmlAttr("Latin", _outStream);
    }



    if (m_has_Other_attr)
    {
        m_Other_attr->toXmlAttr("Other", _outStream);
    }



    if (m_has_Symbol_attr)
    {
        m_Symbol_attr->toXmlAttr("Symbol", _outStream);
    }



    if (m_has_User_attr)
    {
        m_User_attr->toXmlAttr("User", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_CHAROFFSET& CT_CHAROFFSET::default_instance()
{
    if (!CT_CHAROFFSET::default_instance_)
    {
        CT_CHAROFFSET::default_instance_ = new CT_CHAROFFSET();
    }
    return *CT_CHAROFFSET::default_instance_;
}

bool CT_CHAROFFSET::has_Hangul_attr() const
{
    return m_has_Hangul_attr;
}

void CT_CHAROFFSET::set_Hangul_attr(const ST_OFFSET& _Hangul_attr)
{
    m_has_Hangul_attr = true;
    m_Hangul_attr = new ST_OFFSET(_Hangul_attr);
}

const ST_OFFSET& CT_CHAROFFSET::get_Hangul_attr() const
{
    if (m_Hangul_attr)
    {
        return *m_Hangul_attr;
    }
    return ST_OFFSET::default_instance();
}

bool CT_CHAROFFSET::has_Hanja_attr() const
{
    return m_has_Hanja_attr;
}

void CT_CHAROFFSET::set_Hanja_attr(const ST_OFFSET& _Hanja_attr)
{
    m_has_Hanja_attr = true;
    m_Hanja_attr = new ST_OFFSET(_Hanja_attr);
}

const ST_OFFSET& CT_CHAROFFSET::get_Hanja_attr() const
{
    if (m_Hanja_attr)
    {
        return *m_Hanja_attr;
    }
    return ST_OFFSET::default_instance();
}

bool CT_CHAROFFSET::has_Japanese_attr() const
{
    return m_has_Japanese_attr;
}

void CT_CHAROFFSET::set_Japanese_attr(const ST_OFFSET& _Japanese_attr)
{
    m_has_Japanese_attr = true;
    m_Japanese_attr = new ST_OFFSET(_Japanese_attr);
}

const ST_OFFSET& CT_CHAROFFSET::get_Japanese_attr() const
{
    if (m_Japanese_attr)
    {
        return *m_Japanese_attr;
    }
    return ST_OFFSET::default_instance();
}

bool CT_CHAROFFSET::has_Latin_attr() const
{
    return m_has_Latin_attr;
}

void CT_CHAROFFSET::set_Latin_attr(const ST_OFFSET& _Latin_attr)
{
    m_has_Latin_attr = true;
    m_Latin_attr = new ST_OFFSET(_Latin_attr);
}

const ST_OFFSET& CT_CHAROFFSET::get_Latin_attr() const
{
    if (m_Latin_attr)
    {
        return *m_Latin_attr;
    }
    return ST_OFFSET::default_instance();
}

bool CT_CHAROFFSET::has_Other_attr() const
{
    return m_has_Other_attr;
}

void CT_CHAROFFSET::set_Other_attr(const ST_OFFSET& _Other_attr)
{
    m_has_Other_attr = true;
    m_Other_attr = new ST_OFFSET(_Other_attr);
}

const ST_OFFSET& CT_CHAROFFSET::get_Other_attr() const
{
    if (m_Other_attr)
    {
        return *m_Other_attr;
    }
    return ST_OFFSET::default_instance();
}

bool CT_CHAROFFSET::has_Symbol_attr() const
{
    return m_has_Symbol_attr;
}

void CT_CHAROFFSET::set_Symbol_attr(const ST_OFFSET& _Symbol_attr)
{
    m_has_Symbol_attr = true;
    m_Symbol_attr = new ST_OFFSET(_Symbol_attr);
}

const ST_OFFSET& CT_CHAROFFSET::get_Symbol_attr() const
{
    if (m_Symbol_attr)
    {
        return *m_Symbol_attr;
    }
    return ST_OFFSET::default_instance();
}

bool CT_CHAROFFSET::has_User_attr() const
{
    return m_has_User_attr;
}

void CT_CHAROFFSET::set_User_attr(const ST_OFFSET& _User_attr)
{
    m_has_User_attr = true;
    m_User_attr = new ST_OFFSET(_User_attr);
}

const ST_OFFSET& CT_CHAROFFSET::get_User_attr() const
{
    if (m_User_attr)
    {
        return *m_User_attr;
    }
    return ST_OFFSET::default_instance();
}

CT_CHAROFFSET* CT_CHAROFFSET::default_instance_ = NULL;

// CT_UNDERLINE
CT_UNDERLINE::CT_UNDERLINE()
    :m_has_Color_attr(false),
     m_Color_attr(NULL),
     m_has_Shape_attr(false),
     m_Shape_attr(NULL),
     m_has_Type_attr(false),
     m_Type_attr(NULL)
{
}
CT_UNDERLINE::~CT_UNDERLINE()
{
    clear();
}
void CT_UNDERLINE::clear()
{
    m_has_Color_attr = false;

    if (m_Color_attr)
    {
        delete m_Color_attr;
        m_Color_attr = NULL;
    }


    m_has_Shape_attr = false;

    if (m_Shape_attr)
    {
        delete m_Shape_attr;
        m_Shape_attr = NULL;
    }


    m_has_Type_attr = false;

    if (m_Type_attr)
    {
        delete m_Type_attr;
        m_Type_attr = NULL;
    }

}

void CT_UNDERLINE::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_Color_attr)
    {
        m_Color_attr->toXmlAttr("Color", _outStream);
    }



    if (m_has_Shape_attr)
    {
        m_Shape_attr->toXmlAttr("Shape", _outStream);
    }



    if (m_has_Type_attr)
    {
        m_Type_attr->toXmlAttr("Type", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_UNDERLINE& CT_UNDERLINE::default_instance()
{
    if (!CT_UNDERLINE::default_instance_)
    {
        CT_UNDERLINE::default_instance_ = new CT_UNDERLINE();
    }
    return *CT_UNDERLINE::default_instance_;
}

bool CT_UNDERLINE::has_Color_attr() const
{
    return m_has_Color_attr;
}

void CT_UNDERLINE::set_Color_attr(const ST_IntColorRGB& _Color_attr)
{
    m_has_Color_attr = true;
    m_Color_attr = new ST_IntColorRGB(_Color_attr);
}

const ST_IntColorRGB& CT_UNDERLINE::get_Color_attr() const
{
    if (m_Color_attr)
    {
        return *m_Color_attr;
    }
    return ST_IntColorRGB::default_instance();
}

bool CT_UNDERLINE::has_Shape_attr() const
{
    return m_has_Shape_attr;
}

void CT_UNDERLINE::set_Shape_attr(const ST_LineType2& _Shape_attr)
{
    m_has_Shape_attr = true;
    m_Shape_attr = new ST_LineType2(_Shape_attr);
}

const ST_LineType2& CT_UNDERLINE::get_Shape_attr() const
{
    if (m_Shape_attr)
    {
        return *m_Shape_attr;
    }
    return ST_LineType2::default_instance();
}

bool CT_UNDERLINE::has_Type_attr() const
{
    return m_has_Type_attr;
}

void CT_UNDERLINE::set_Type_attr(const ST_VertAlignType1& _Type_attr)
{
    m_has_Type_attr = true;
    m_Type_attr = new ST_VertAlignType1(_Type_attr);
}

const ST_VertAlignType1& CT_UNDERLINE::get_Type_attr() const
{
    if (m_Type_attr)
    {
        return *m_Type_attr;
    }
    return ST_VertAlignType1::default_instance();
}

CT_UNDERLINE* CT_UNDERLINE::default_instance_ = NULL;

// CT_STRIKEOUT
CT_STRIKEOUT::CT_STRIKEOUT()
    :m_has_Color_attr(false),
     m_Color_attr(NULL),
     m_has_Shape_attr(false),
     m_Shape_attr(NULL),
     m_has_Type_attr(false),
     m_Type_attr(NULL)
{
}
CT_STRIKEOUT::~CT_STRIKEOUT()
{
    clear();
}
void CT_STRIKEOUT::clear()
{
    m_has_Color_attr = false;

    if (m_Color_attr)
    {
        delete m_Color_attr;
        m_Color_attr = NULL;
    }


    m_has_Shape_attr = false;

    if (m_Shape_attr)
    {
        delete m_Shape_attr;
        m_Shape_attr = NULL;
    }


    m_has_Type_attr = false;

    if (m_Type_attr)
    {
        delete m_Type_attr;
        m_Type_attr = NULL;
    }

}

void CT_STRIKEOUT::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_Color_attr)
    {
        m_Color_attr->toXmlAttr("Color", _outStream);
    }



    if (m_has_Shape_attr)
    {
        m_Shape_attr->toXmlAttr("Shape", _outStream);
    }



    if (m_has_Type_attr)
    {
        m_Type_attr->toXmlAttr("Type", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_STRIKEOUT& CT_STRIKEOUT::default_instance()
{
    if (!CT_STRIKEOUT::default_instance_)
    {
        CT_STRIKEOUT::default_instance_ = new CT_STRIKEOUT();
    }
    return *CT_STRIKEOUT::default_instance_;
}

bool CT_STRIKEOUT::has_Color_attr() const
{
    return m_has_Color_attr;
}

void CT_STRIKEOUT::set_Color_attr(const ST_IntColorRGB& _Color_attr)
{
    m_has_Color_attr = true;
    m_Color_attr = new ST_IntColorRGB(_Color_attr);
}

const ST_IntColorRGB& CT_STRIKEOUT::get_Color_attr() const
{
    if (m_Color_attr)
    {
        return *m_Color_attr;
    }
    return ST_IntColorRGB::default_instance();
}

bool CT_STRIKEOUT::has_Shape_attr() const
{
    return m_has_Shape_attr;
}

void CT_STRIKEOUT::set_Shape_attr(const ST_LineType2& _Shape_attr)
{
    m_has_Shape_attr = true;
    m_Shape_attr = new ST_LineType2(_Shape_attr);
}

const ST_LineType2& CT_STRIKEOUT::get_Shape_attr() const
{
    if (m_Shape_attr)
    {
        return *m_Shape_attr;
    }
    return ST_LineType2::default_instance();
}

bool CT_STRIKEOUT::has_Type_attr() const
{
    return m_has_Type_attr;
}

void CT_STRIKEOUT::set_Type_attr(const ST_StrikeType& _Type_attr)
{
    m_has_Type_attr = true;
    m_Type_attr = new ST_StrikeType(_Type_attr);
}

const ST_StrikeType& CT_STRIKEOUT::get_Type_attr() const
{
    if (m_Type_attr)
    {
        return *m_Type_attr;
    }
    return ST_StrikeType::default_instance();
}

CT_STRIKEOUT* CT_STRIKEOUT::default_instance_ = NULL;

// CT_OUTLINE
CT_OUTLINE::CT_OUTLINE()
    :m_has_Type_attr(false),
     m_Type_attr(NULL)
{
}
CT_OUTLINE::~CT_OUTLINE()
{
    clear();
}
void CT_OUTLINE::clear()
{
    m_has_Type_attr = false;

    if (m_Type_attr)
    {
        delete m_Type_attr;
        m_Type_attr = NULL;
    }

}

void CT_OUTLINE::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_Type_attr)
    {
        m_Type_attr->toXmlAttr("Type", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_OUTLINE& CT_OUTLINE::default_instance()
{
    if (!CT_OUTLINE::default_instance_)
    {
        CT_OUTLINE::default_instance_ = new CT_OUTLINE();
    }
    return *CT_OUTLINE::default_instance_;
}

bool CT_OUTLINE::has_Type_attr() const
{
    return m_has_Type_attr;
}

void CT_OUTLINE::set_Type_attr(const ST_LineType3& _Type_attr)
{
    m_has_Type_attr = true;
    m_Type_attr = new ST_LineType3(_Type_attr);
}

const ST_LineType3& CT_OUTLINE::get_Type_attr() const
{
    if (m_Type_attr)
    {
        return *m_Type_attr;
    }
    return ST_LineType3::default_instance();
}

CT_OUTLINE* CT_OUTLINE::default_instance_ = NULL;

// CT_SHADOW
CT_SHADOW::CT_SHADOW()
    :m_has_Alpha_attr(false),
     m_Alpha_attr(NULL),
     m_has_Color_attr(false),
     m_Color_attr(NULL),
     m_has_OffsetX_attr(false),
     m_OffsetX_attr(NULL),
     m_has_OffsetY_attr(false),
     m_OffsetY_attr(NULL),
     m_has_Type_attr(false),
     m_Type_attr(NULL)
{
}
CT_SHADOW::~CT_SHADOW()
{
    clear();
}
void CT_SHADOW::clear()
{
    m_has_Alpha_attr = false;

    if (m_Alpha_attr)
    {
        delete m_Alpha_attr;
        m_Alpha_attr = NULL;
    }


    m_has_Color_attr = false;

    if (m_Color_attr)
    {
        delete m_Color_attr;
        m_Color_attr = NULL;
    }


    m_has_OffsetX_attr = false;

    if (m_OffsetX_attr)
    {
        delete m_OffsetX_attr;
        m_OffsetX_attr = NULL;
    }


    m_has_OffsetY_attr = false;

    if (m_OffsetY_attr)
    {
        delete m_OffsetY_attr;
        m_OffsetY_attr = NULL;
    }


    m_has_Type_attr = false;

    if (m_Type_attr)
    {
        delete m_Type_attr;
        m_Type_attr = NULL;
    }

}

void CT_SHADOW::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_Alpha_attr)
    {
        m_Alpha_attr->toXmlAttr("Alpha", _outStream);
    }



    if (m_has_Color_attr)
    {
        m_Color_attr->toXmlAttr("Color", _outStream);
    }



    if (m_has_OffsetX_attr)
    {
        m_OffsetX_attr->toXmlAttr("OffsetX", _outStream);
    }



    if (m_has_OffsetY_attr)
    {
        m_OffsetY_attr->toXmlAttr("OffsetY", _outStream);
    }



    if (m_has_Type_attr)
    {
        m_Type_attr->toXmlAttr("Type", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_SHADOW& CT_SHADOW::default_instance()
{
    if (!CT_SHADOW::default_instance_)
    {
        CT_SHADOW::default_instance_ = new CT_SHADOW();
    }
    return *CT_SHADOW::default_instance_;
}

bool CT_SHADOW::has_Alpha_attr() const
{
    return m_has_Alpha_attr;
}

void CT_SHADOW::set_Alpha_attr(const ST_Percent& _Alpha_attr)
{
    m_has_Alpha_attr = true;
    m_Alpha_attr = new ST_Percent(_Alpha_attr);
}

const ST_Percent& CT_SHADOW::get_Alpha_attr() const
{
    if (m_Alpha_attr)
    {
        return *m_Alpha_attr;
    }
    return ST_Percent::default_instance();
}

bool CT_SHADOW::has_Color_attr() const
{
    return m_has_Color_attr;
}

void CT_SHADOW::set_Color_attr(const ST_IntColorRGB& _Color_attr)
{
    m_has_Color_attr = true;
    m_Color_attr = new ST_IntColorRGB(_Color_attr);
}

const ST_IntColorRGB& CT_SHADOW::get_Color_attr() const
{
    if (m_Color_attr)
    {
        return *m_Color_attr;
    }
    return ST_IntColorRGB::default_instance();
}

bool CT_SHADOW::has_OffsetX_attr() const
{
    return m_has_OffsetX_attr;
}

void CT_SHADOW::set_OffsetX_attr(const ST_OFFSET& _OffsetX_attr)
{
    m_has_OffsetX_attr = true;
    m_OffsetX_attr = new ST_OFFSET(_OffsetX_attr);
}

const ST_OFFSET& CT_SHADOW::get_OffsetX_attr() const
{
    if (m_OffsetX_attr)
    {
        return *m_OffsetX_attr;
    }
    return ST_OFFSET::default_instance();
}

bool CT_SHADOW::has_OffsetY_attr() const
{
    return m_has_OffsetY_attr;
}

void CT_SHADOW::set_OffsetY_attr(const ST_OFFSET& _OffsetY_attr)
{
    m_has_OffsetY_attr = true;
    m_OffsetY_attr = new ST_OFFSET(_OffsetY_attr);
}

const ST_OFFSET& CT_SHADOW::get_OffsetY_attr() const
{
    if (m_OffsetY_attr)
    {
        return *m_OffsetY_attr;
    }
    return ST_OFFSET::default_instance();
}

bool CT_SHADOW::has_Type_attr() const
{
    return m_has_Type_attr;
}

void CT_SHADOW::set_Type_attr(const ST_ShadowType& _Type_attr)
{
    m_has_Type_attr = true;
    m_Type_attr = new ST_ShadowType(_Type_attr);
}

const ST_ShadowType& CT_SHADOW::get_Type_attr() const
{
    if (m_Type_attr)
    {
        return *m_Type_attr;
    }
    return ST_ShadowType::default_instance();
}

CT_SHADOW* CT_SHADOW::default_instance_ = NULL;

// CT_CHARSHAPE
CT_CHARSHAPE::CT_CHARSHAPE()
    :m_has_BOLD(false),
     m_BOLD(NULL),
     m_has_ITALIC(false),
     m_ITALIC(NULL),
     m_has_EMBOSS(false),
     m_EMBOSS(NULL),
     m_has_ENGRAVE(false),
     m_ENGRAVE(NULL),
     m_has_SUPERSCRIPT(false),
     m_SUPERSCRIPT(NULL),
     m_has_SUBSCRIPT(false),
     m_SUBSCRIPT(NULL),
     m_has_FONTID(false),
     m_FONTID(NULL),
     m_has_RATIO(false),
     m_RATIO(NULL),
     m_has_CHARSPACING(false),
     m_CHARSPACING(NULL),
     m_has_RELSIZE(false),
     m_RELSIZE(NULL),
     m_has_CHAROFFSET(false),
     m_CHAROFFSET(NULL),
     m_has_UNDERLINE(false),
     m_UNDERLINE(NULL),
     m_has_STRIKEOUT(false),
     m_STRIKEOUT(NULL),
     m_has_OUTLINE(false),
     m_OUTLINE(NULL),
     m_has_SHADOW(false),
     m_SHADOW(NULL),
     m_has_BorderFillId_attr(false),
     m_BorderFillId_attr(NULL),
     m_has_Height_attr(false),
     m_Height_attr(NULL),
     m_has_Id_attr(false),
     m_Id_attr(NULL),
     m_has_ShadeColor_attr(false),
     m_ShadeColor_attr(NULL),
     m_has_SymMark_attr(false),
     m_SymMark_attr(NULL),
     m_has_TextColor_attr(false),
     m_TextColor_attr(NULL),
     m_has_UseFontSpace_attr(false),
     m_UseFontSpace_attr(NULL),
     m_has_UseKerning_attr(false),
     m_UseKerning_attr(NULL)
{
}
CT_CHARSHAPE::~CT_CHARSHAPE()
{
    clear();
}
bool CT_CHARSHAPE::has_BOLD() const
{
    return m_has_BOLD;
}

ST_String* CT_CHARSHAPE::mutable_BOLD()
{
    m_has_BOLD = true;
    if (!m_BOLD)
    {
        m_BOLD = new ST_String();
    }
    return m_BOLD;
}

const ST_String& CT_CHARSHAPE::get_BOLD() const
{
    if (m_BOLD)
    {
        return *m_BOLD;
    }
    return ST_String::default_instance();
}

bool CT_CHARSHAPE::has_ITALIC() const
{
    return m_has_ITALIC;
}

ST_String* CT_CHARSHAPE::mutable_ITALIC()
{
    m_has_ITALIC = true;
    if (!m_ITALIC)
    {
        m_ITALIC = new ST_String();
    }
    return m_ITALIC;
}

const ST_String& CT_CHARSHAPE::get_ITALIC() const
{
    if (m_ITALIC)
    {
        return *m_ITALIC;
    }
    return ST_String::default_instance();
}

bool CT_CHARSHAPE::has_EMBOSS() const
{
    return m_has_EMBOSS;
}

ST_String* CT_CHARSHAPE::mutable_EMBOSS()
{
    m_has_EMBOSS = true;
    if (!m_EMBOSS)
    {
        m_EMBOSS = new ST_String();
    }
    return m_EMBOSS;
}

const ST_String& CT_CHARSHAPE::get_EMBOSS() const
{
    if (m_EMBOSS)
    {
        return *m_EMBOSS;
    }
    return ST_String::default_instance();
}

bool CT_CHARSHAPE::has_ENGRAVE() const
{
    return m_has_ENGRAVE;
}

ST_String* CT_CHARSHAPE::mutable_ENGRAVE()
{
    m_has_ENGRAVE = true;
    if (!m_ENGRAVE)
    {
        m_ENGRAVE = new ST_String();
    }
    return m_ENGRAVE;
}

const ST_String& CT_CHARSHAPE::get_ENGRAVE() const
{
    if (m_ENGRAVE)
    {
        return *m_ENGRAVE;
    }
    return ST_String::default_instance();
}

bool CT_CHARSHAPE::has_SUPERSCRIPT() const
{
    return m_has_SUPERSCRIPT;
}

ST_String* CT_CHARSHAPE::mutable_SUPERSCRIPT()
{
    m_has_SUPERSCRIPT = true;
    if (!m_SUPERSCRIPT)
    {
        m_SUPERSCRIPT = new ST_String();
    }
    return m_SUPERSCRIPT;
}

const ST_String& CT_CHARSHAPE::get_SUPERSCRIPT() const
{
    if (m_SUPERSCRIPT)
    {
        return *m_SUPERSCRIPT;
    }
    return ST_String::default_instance();
}

bool CT_CHARSHAPE::has_SUBSCRIPT() const
{
    return m_has_SUBSCRIPT;
}

ST_String* CT_CHARSHAPE::mutable_SUBSCRIPT()
{
    m_has_SUBSCRIPT = true;
    if (!m_SUBSCRIPT)
    {
        m_SUBSCRIPT = new ST_String();
    }
    return m_SUBSCRIPT;
}

const ST_String& CT_CHARSHAPE::get_SUBSCRIPT() const
{
    if (m_SUBSCRIPT)
    {
        return *m_SUBSCRIPT;
    }
    return ST_String::default_instance();
}

bool CT_CHARSHAPE::has_FONTID() const
{
    return m_has_FONTID;
}

CT_FONTID* CT_CHARSHAPE::mutable_FONTID()
{
    m_has_FONTID = true;
    if (!m_FONTID)
    {
        m_FONTID = new CT_FONTID();
    }
    return m_FONTID;
}

const CT_FONTID& CT_CHARSHAPE::get_FONTID() const
{
    if (m_FONTID)
    {
        return *m_FONTID;
    }
    return CT_FONTID::default_instance();
}

bool CT_CHARSHAPE::has_RATIO() const
{
    return m_has_RATIO;
}

CT_RATIO* CT_CHARSHAPE::mutable_RATIO()
{
    m_has_RATIO = true;
    if (!m_RATIO)
    {
        m_RATIO = new CT_RATIO();
    }
    return m_RATIO;
}

const CT_RATIO& CT_CHARSHAPE::get_RATIO() const
{
    if (m_RATIO)
    {
        return *m_RATIO;
    }
    return CT_RATIO::default_instance();
}

bool CT_CHARSHAPE::has_CHARSPACING() const
{
    return m_has_CHARSPACING;
}

CT_CHARSPACING* CT_CHARSHAPE::mutable_CHARSPACING()
{
    m_has_CHARSPACING = true;
    if (!m_CHARSPACING)
    {
        m_CHARSPACING = new CT_CHARSPACING();
    }
    return m_CHARSPACING;
}

const CT_CHARSPACING& CT_CHARSHAPE::get_CHARSPACING() const
{
    if (m_CHARSPACING)
    {
        return *m_CHARSPACING;
    }
    return CT_CHARSPACING::default_instance();
}

bool CT_CHARSHAPE::has_RELSIZE() const
{
    return m_has_RELSIZE;
}

CT_RELSIZE* CT_CHARSHAPE::mutable_RELSIZE()
{
    m_has_RELSIZE = true;
    if (!m_RELSIZE)
    {
        m_RELSIZE = new CT_RELSIZE();
    }
    return m_RELSIZE;
}

const CT_RELSIZE& CT_CHARSHAPE::get_RELSIZE() const
{
    if (m_RELSIZE)
    {
        return *m_RELSIZE;
    }
    return CT_RELSIZE::default_instance();
}

bool CT_CHARSHAPE::has_CHAROFFSET() const
{
    return m_has_CHAROFFSET;
}

CT_CHAROFFSET* CT_CHARSHAPE::mutable_CHAROFFSET()
{
    m_has_CHAROFFSET = true;
    if (!m_CHAROFFSET)
    {
        m_CHAROFFSET = new CT_CHAROFFSET();
    }
    return m_CHAROFFSET;
}

const CT_CHAROFFSET& CT_CHARSHAPE::get_CHAROFFSET() const
{
    if (m_CHAROFFSET)
    {
        return *m_CHAROFFSET;
    }
    return CT_CHAROFFSET::default_instance();
}

bool CT_CHARSHAPE::has_UNDERLINE() const
{
    return m_has_UNDERLINE;
}

CT_UNDERLINE* CT_CHARSHAPE::mutable_UNDERLINE()
{
    m_has_UNDERLINE = true;
    if (!m_UNDERLINE)
    {
        m_UNDERLINE = new CT_UNDERLINE();
    }
    return m_UNDERLINE;
}

const CT_UNDERLINE& CT_CHARSHAPE::get_UNDERLINE() const
{
    if (m_UNDERLINE)
    {
        return *m_UNDERLINE;
    }
    return CT_UNDERLINE::default_instance();
}

bool CT_CHARSHAPE::has_STRIKEOUT() const
{
    return m_has_STRIKEOUT;
}

CT_STRIKEOUT* CT_CHARSHAPE::mutable_STRIKEOUT()
{
    m_has_STRIKEOUT = true;
    if (!m_STRIKEOUT)
    {
        m_STRIKEOUT = new CT_STRIKEOUT();
    }
    return m_STRIKEOUT;
}

const CT_STRIKEOUT& CT_CHARSHAPE::get_STRIKEOUT() const
{
    if (m_STRIKEOUT)
    {
        return *m_STRIKEOUT;
    }
    return CT_STRIKEOUT::default_instance();
}

bool CT_CHARSHAPE::has_OUTLINE() const
{
    return m_has_OUTLINE;
}

CT_OUTLINE* CT_CHARSHAPE::mutable_OUTLINE()
{
    m_has_OUTLINE = true;
    if (!m_OUTLINE)
    {
        m_OUTLINE = new CT_OUTLINE();
    }
    return m_OUTLINE;
}

const CT_OUTLINE& CT_CHARSHAPE::get_OUTLINE() const
{
    if (m_OUTLINE)
    {
        return *m_OUTLINE;
    }
    return CT_OUTLINE::default_instance();
}

bool CT_CHARSHAPE::has_SHADOW() const
{
    return m_has_SHADOW;
}

CT_SHADOW* CT_CHARSHAPE::mutable_SHADOW()
{
    m_has_SHADOW = true;
    if (!m_SHADOW)
    {
        m_SHADOW = new CT_SHADOW();
    }
    return m_SHADOW;
}

const CT_SHADOW& CT_CHARSHAPE::get_SHADOW() const
{
    if (m_SHADOW)
    {
        return *m_SHADOW;
    }
    return CT_SHADOW::default_instance();
}

void CT_CHARSHAPE::clear()
{
    m_has_BorderFillId_attr = false;

    if (m_BorderFillId_attr)
    {
        delete m_BorderFillId_attr;
        m_BorderFillId_attr = NULL;
    }


    m_has_Height_attr = false;

    if (m_Height_attr)
    {
        delete m_Height_attr;
        m_Height_attr = NULL;
    }


    m_has_Id_attr = false;

    if (m_Id_attr)
    {
        delete m_Id_attr;
        m_Id_attr = NULL;
    }


    m_has_ShadeColor_attr = false;

    if (m_ShadeColor_attr)
    {
        delete m_ShadeColor_attr;
        m_ShadeColor_attr = NULL;
    }


    m_has_SymMark_attr = false;

    if (m_SymMark_attr)
    {
        delete m_SymMark_attr;
        m_SymMark_attr = NULL;
    }


    m_has_TextColor_attr = false;

    if (m_TextColor_attr)
    {
        delete m_TextColor_attr;
        m_TextColor_attr = NULL;
    }


    m_has_UseFontSpace_attr = false;

    if (m_UseFontSpace_attr)
    {
        delete m_UseFontSpace_attr;
        m_UseFontSpace_attr = NULL;
    }


    m_has_UseKerning_attr = false;

    if (m_UseKerning_attr)
    {
        delete m_UseKerning_attr;
        m_UseKerning_attr = NULL;
    }


    m_has_BOLD = false;

    if (m_BOLD)
    {
        delete m_BOLD;
        m_BOLD = NULL;
    }


    m_has_ITALIC = false;

    if (m_ITALIC)
    {
        delete m_ITALIC;
        m_ITALIC = NULL;
    }


    m_has_EMBOSS = false;

    if (m_EMBOSS)
    {
        delete m_EMBOSS;
        m_EMBOSS = NULL;
    }


    m_has_ENGRAVE = false;

    if (m_ENGRAVE)
    {
        delete m_ENGRAVE;
        m_ENGRAVE = NULL;
    }


    m_has_SUPERSCRIPT = false;

    if (m_SUPERSCRIPT)
    {
        delete m_SUPERSCRIPT;
        m_SUPERSCRIPT = NULL;
    }


    m_has_SUBSCRIPT = false;

    if (m_SUBSCRIPT)
    {
        delete m_SUBSCRIPT;
        m_SUBSCRIPT = NULL;
    }


    m_has_FONTID = false;

    if (m_FONTID)
    {
        delete m_FONTID;
        m_FONTID = NULL;
    }


    m_has_RATIO = false;

    if (m_RATIO)
    {
        delete m_RATIO;
        m_RATIO = NULL;
    }


    m_has_CHARSPACING = false;

    if (m_CHARSPACING)
    {
        delete m_CHARSPACING;
        m_CHARSPACING = NULL;
    }


    m_has_RELSIZE = false;

    if (m_RELSIZE)
    {
        delete m_RELSIZE;
        m_RELSIZE = NULL;
    }


    m_has_CHAROFFSET = false;

    if (m_CHAROFFSET)
    {
        delete m_CHAROFFSET;
        m_CHAROFFSET = NULL;
    }


    m_has_UNDERLINE = false;

    if (m_UNDERLINE)
    {
        delete m_UNDERLINE;
        m_UNDERLINE = NULL;
    }


    m_has_STRIKEOUT = false;

    if (m_STRIKEOUT)
    {
        delete m_STRIKEOUT;
        m_STRIKEOUT = NULL;
    }


    m_has_OUTLINE = false;

    if (m_OUTLINE)
    {
        delete m_OUTLINE;
        m_OUTLINE = NULL;
    }


    m_has_SHADOW = false;

    if (m_SHADOW)
    {
        delete m_SHADOW;
        m_SHADOW = NULL;
    }

}

void CT_CHARSHAPE::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_BorderFillId_attr)
    {
        m_BorderFillId_attr->toXmlAttr("BorderFillId", _outStream);
    }



    if (m_has_Height_attr)
    {
        m_Height_attr->toXmlAttr("Height", _outStream);
    }



    if (m_has_Id_attr)
    {
        m_Id_attr->toXmlAttr("Id", _outStream);
    }



    if (m_has_ShadeColor_attr)
    {
        m_ShadeColor_attr->toXmlAttr("ShadeColor", _outStream);
    }



    if (m_has_SymMark_attr)
    {
        m_SymMark_attr->toXmlAttr("SymMark", _outStream);
    }



    if (m_has_TextColor_attr)
    {
        m_TextColor_attr->toXmlAttr("TextColor", _outStream);
    }



    if (m_has_UseFontSpace_attr)
    {
        m_UseFontSpace_attr->toXmlAttr("UseFontSpace", _outStream);
    }



    if (m_has_UseKerning_attr)
    {
        m_UseKerning_attr->toXmlAttr("UseKerning", _outStream);
    }

    _outStream << ">";


    if (m_has_BOLD)
    {
        _outStream << "<BOLD>" << m_BOLD->toString() << "</BOLD>";
    }


    if (m_has_ITALIC)
    {
        _outStream << "<ITALIC>" << m_ITALIC->toString() << "</ITALIC>";
    }


    if (m_has_EMBOSS)
    {
        _outStream << "<EMBOSS>" << m_EMBOSS->toString() << "</EMBOSS>";
    }


    if (m_has_ENGRAVE)
    {
        _outStream << "<ENGRAVE>" << m_ENGRAVE->toString() << "</ENGRAVE>";
    }


    if (m_has_SUPERSCRIPT)
    {
        _outStream << "<SUPERSCRIPT>" << m_SUPERSCRIPT->toString() << "</SUPERSCRIPT>";
    }


    if (m_has_SUBSCRIPT)
    {
        _outStream << "<SUBSCRIPT>" << m_SUBSCRIPT->toString() << "</SUBSCRIPT>";
    }


    if (m_has_FONTID)
    {
        m_FONTID->toXmlElem("FONTID", "", _outStream);
    }


    if (m_has_RATIO)
    {
        m_RATIO->toXmlElem("RATIO", "", _outStream);
    }


    if (m_has_CHARSPACING)
    {
        m_CHARSPACING->toXmlElem("CHARSPACING", "", _outStream);
    }


    if (m_has_RELSIZE)
    {
        m_RELSIZE->toXmlElem("RELSIZE", "", _outStream);
    }


    if (m_has_CHAROFFSET)
    {
        m_CHAROFFSET->toXmlElem("CHAROFFSET", "", _outStream);
    }


    if (m_has_UNDERLINE)
    {
        m_UNDERLINE->toXmlElem("UNDERLINE", "", _outStream);
    }


    if (m_has_STRIKEOUT)
    {
        m_STRIKEOUT->toXmlElem("STRIKEOUT", "", _outStream);
    }


    if (m_has_OUTLINE)
    {
        m_OUTLINE->toXmlElem("OUTLINE", "", _outStream);
    }


    if (m_has_SHADOW)
    {
        m_SHADOW->toXmlElem("SHADOW", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_CHARSHAPE& CT_CHARSHAPE::default_instance()
{
    if (!CT_CHARSHAPE::default_instance_)
    {
        CT_CHARSHAPE::default_instance_ = new CT_CHARSHAPE();
    }
    return *CT_CHARSHAPE::default_instance_;
}

bool CT_CHARSHAPE::has_BorderFillId_attr() const
{
    return m_has_BorderFillId_attr;
}

void CT_CHARSHAPE::set_BorderFillId_attr(const ST_ID& _BorderFillId_attr)
{
    m_has_BorderFillId_attr = true;
    m_BorderFillId_attr = new ST_ID(_BorderFillId_attr);
}

const ST_ID& CT_CHARSHAPE::get_BorderFillId_attr() const
{
    if (m_BorderFillId_attr)
    {
        return *m_BorderFillId_attr;
    }
    return ST_ID::default_instance();
}

bool CT_CHARSHAPE::has_Height_attr() const
{
    return m_has_Height_attr;
}

void CT_CHARSHAPE::set_Height_attr(const ST_HunitMeasure& _Height_attr)
{
    m_has_Height_attr = true;
    m_Height_attr = new ST_HunitMeasure(_Height_attr);
}

const ST_HunitMeasure& CT_CHARSHAPE::get_Height_attr() const
{
    if (m_Height_attr)
    {
        return *m_Height_attr;
    }
    return ST_HunitMeasure::default_instance();
}

bool CT_CHARSHAPE::has_Id_attr() const
{
    return m_has_Id_attr;
}

void CT_CHARSHAPE::set_Id_attr(const ST_UnsignedDecimalNumber& _Id_attr)
{
    m_has_Id_attr = true;
    m_Id_attr = new ST_UnsignedDecimalNumber(_Id_attr);
}

const ST_UnsignedDecimalNumber& CT_CHARSHAPE::get_Id_attr() const
{
    if (m_Id_attr)
    {
        return *m_Id_attr;
    }
    return ST_UnsignedDecimalNumber::default_instance();
}

bool CT_CHARSHAPE::has_ShadeColor_attr() const
{
    return m_has_ShadeColor_attr;
}

void CT_CHARSHAPE::set_ShadeColor_attr(const ST_IntColorRGB& _ShadeColor_attr)
{
    m_has_ShadeColor_attr = true;
    m_ShadeColor_attr = new ST_IntColorRGB(_ShadeColor_attr);
}

const ST_IntColorRGB& CT_CHARSHAPE::get_ShadeColor_attr() const
{
    if (m_ShadeColor_attr)
    {
        return *m_ShadeColor_attr;
    }
    return ST_IntColorRGB::default_instance();
}

bool CT_CHARSHAPE::has_SymMark_attr() const
{
    return m_has_SymMark_attr;
}

void CT_CHARSHAPE::set_SymMark_attr(const ST_String& _SymMark_attr)
{
    m_has_SymMark_attr = true;
    m_SymMark_attr = new ST_String(_SymMark_attr);
}

const ST_String& CT_CHARSHAPE::get_SymMark_attr() const
{
    if (m_SymMark_attr)
    {
        return *m_SymMark_attr;
    }
    return ST_String::default_instance();
}

bool CT_CHARSHAPE::has_TextColor_attr() const
{
    return m_has_TextColor_attr;
}

void CT_CHARSHAPE::set_TextColor_attr(const ST_IntColorRGB& _TextColor_attr)
{
    m_has_TextColor_attr = true;
    m_TextColor_attr = new ST_IntColorRGB(_TextColor_attr);
}

const ST_IntColorRGB& CT_CHARSHAPE::get_TextColor_attr() const
{
    if (m_TextColor_attr)
    {
        return *m_TextColor_attr;
    }
    return ST_IntColorRGB::default_instance();
}

bool CT_CHARSHAPE::has_UseFontSpace_attr() const
{
    return m_has_UseFontSpace_attr;
}

void CT_CHARSHAPE::set_UseFontSpace_attr(const ST_OnOff& _UseFontSpace_attr)
{
    m_has_UseFontSpace_attr = true;
    m_UseFontSpace_attr = new ST_OnOff(_UseFontSpace_attr);
}

const ST_OnOff& CT_CHARSHAPE::get_UseFontSpace_attr() const
{
    if (m_UseFontSpace_attr)
    {
        return *m_UseFontSpace_attr;
    }
    return ST_OnOff::default_instance();
}

bool CT_CHARSHAPE::has_UseKerning_attr() const
{
    return m_has_UseKerning_attr;
}

void CT_CHARSHAPE::set_UseKerning_attr(const ST_OnOff& _UseKerning_attr)
{
    m_has_UseKerning_attr = true;
    m_UseKerning_attr = new ST_OnOff(_UseKerning_attr);
}

const ST_OnOff& CT_CHARSHAPE::get_UseKerning_attr() const
{
    if (m_UseKerning_attr)
    {
        return *m_UseKerning_attr;
    }
    return ST_OnOff::default_instance();
}

CT_CHARSHAPE* CT_CHARSHAPE::default_instance_ = NULL;

// CT_TABITEM
CT_TABITEM::CT_TABITEM()
    :m_has_Leader_attr(false),
     m_Leader_attr(NULL),
     m_has_Pos_attr(false),
     m_Pos_attr(NULL),
     m_has_Type_attr(false),
     m_Type_attr(NULL)
{
}
CT_TABITEM::~CT_TABITEM()
{
    clear();
}
void CT_TABITEM::clear()
{
    m_has_Leader_attr = false;

    if (m_Leader_attr)
    {
        delete m_Leader_attr;
        m_Leader_attr = NULL;
    }


    m_has_Pos_attr = false;

    if (m_Pos_attr)
    {
        delete m_Pos_attr;
        m_Pos_attr = NULL;
    }


    m_has_Type_attr = false;

    if (m_Type_attr)
    {
        delete m_Type_attr;
        m_Type_attr = NULL;
    }

}

void CT_TABITEM::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_Leader_attr)
    {
        m_Leader_attr->toXmlAttr("Leader", _outStream);
    }



    if (m_has_Pos_attr)
    {
        m_Pos_attr->toXmlAttr("Pos", _outStream);
    }



    if (m_has_Type_attr)
    {
        m_Type_attr->toXmlAttr("Type", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_TABITEM& CT_TABITEM::default_instance()
{
    if (!CT_TABITEM::default_instance_)
    {
        CT_TABITEM::default_instance_ = new CT_TABITEM();
    }
    return *CT_TABITEM::default_instance_;
}

bool CT_TABITEM::has_Leader_attr() const
{
    return m_has_Leader_attr;
}

void CT_TABITEM::set_Leader_attr(const ST_LineType2& _Leader_attr)
{
    m_has_Leader_attr = true;
    m_Leader_attr = new ST_LineType2(_Leader_attr);
}

const ST_LineType2& CT_TABITEM::get_Leader_attr() const
{
    if (m_Leader_attr)
    {
        return *m_Leader_attr;
    }
    return ST_LineType2::default_instance();
}

bool CT_TABITEM::has_Pos_attr() const
{
    return m_has_Pos_attr;
}

void CT_TABITEM::set_Pos_attr(const ST_HunitMeasure& _Pos_attr)
{
    m_has_Pos_attr = true;
    m_Pos_attr = new ST_HunitMeasure(_Pos_attr);
}

const ST_HunitMeasure& CT_TABITEM::get_Pos_attr() const
{
    if (m_Pos_attr)
    {
        return *m_Pos_attr;
    }
    return ST_HunitMeasure::default_instance();
}

bool CT_TABITEM::has_Type_attr() const
{
    return m_has_Type_attr;
}

void CT_TABITEM::set_Type_attr(const ST_TabType& _Type_attr)
{
    m_has_Type_attr = true;
    m_Type_attr = new ST_TabType(_Type_attr);
}

const ST_TabType& CT_TABITEM::get_Type_attr() const
{
    if (m_Type_attr)
    {
        return *m_Type_attr;
    }
    return ST_TabType::default_instance();
}

CT_TABITEM* CT_TABITEM::default_instance_ = NULL;

// CT_TABDEF
CT_TABDEF::CT_TABDEF()
    :m_has_AutoTabLeft_attr(false),
     m_AutoTabLeft_attr(NULL),
     m_has_AutoTabRight_attr(false),
     m_AutoTabRight_attr(NULL),
     m_has_Id_attr(false),
     m_Id_attr(NULL)
{
}
CT_TABDEF::~CT_TABDEF()
{
    clear();
}
CT_TABITEM* CT_TABDEF::add_TABITEM()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_TABITEM* pNewChild = pChildGroup->mutable_TABITEM();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

void CT_TABDEF::clear()
{
    m_has_AutoTabLeft_attr = false;

    if (m_AutoTabLeft_attr)
    {
        delete m_AutoTabLeft_attr;
        m_AutoTabLeft_attr = NULL;
    }


    m_has_AutoTabRight_attr = false;

    if (m_AutoTabRight_attr)
    {
        delete m_AutoTabRight_attr;
        m_AutoTabRight_attr = NULL;
    }


    m_has_Id_attr = false;

    if (m_Id_attr)
    {
        delete m_Id_attr;
        m_Id_attr = NULL;
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

void CT_TABDEF::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_AutoTabLeft_attr)
    {
        m_AutoTabLeft_attr->toXmlAttr("AutoTabLeft", _outStream);
    }



    if (m_has_AutoTabRight_attr)
    {
        m_AutoTabRight_attr->toXmlAttr("AutoTabRight", _outStream);
    }



    if (m_has_Id_attr)
    {
        m_Id_attr->toXmlAttr("Id", _outStream);
    }

    _outStream << ">";

    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_TABITEM())
            {
                (*iter)->get_TABITEM().toXmlElem("TABITEM", "", _outStream);
            }


        }
    }

    _outStream << "</" << _elemName << ">";
}

const CT_TABDEF& CT_TABDEF::default_instance()
{
    if (!CT_TABDEF::default_instance_)
    {
        CT_TABDEF::default_instance_ = new CT_TABDEF();
    }
    return *CT_TABDEF::default_instance_;
}

bool CT_TABDEF::has_AutoTabLeft_attr() const
{
    return m_has_AutoTabLeft_attr;
}

void CT_TABDEF::set_AutoTabLeft_attr(const ST_OnOff& _AutoTabLeft_attr)
{
    m_has_AutoTabLeft_attr = true;
    m_AutoTabLeft_attr = new ST_OnOff(_AutoTabLeft_attr);
}

const ST_OnOff& CT_TABDEF::get_AutoTabLeft_attr() const
{
    if (m_AutoTabLeft_attr)
    {
        return *m_AutoTabLeft_attr;
    }
    return ST_OnOff::default_instance();
}

bool CT_TABDEF::has_AutoTabRight_attr() const
{
    return m_has_AutoTabRight_attr;
}

void CT_TABDEF::set_AutoTabRight_attr(const ST_OnOff& _AutoTabRight_attr)
{
    m_has_AutoTabRight_attr = true;
    m_AutoTabRight_attr = new ST_OnOff(_AutoTabRight_attr);
}

const ST_OnOff& CT_TABDEF::get_AutoTabRight_attr() const
{
    if (m_AutoTabRight_attr)
    {
        return *m_AutoTabRight_attr;
    }
    return ST_OnOff::default_instance();
}

bool CT_TABDEF::has_Id_attr() const
{
    return m_has_Id_attr;
}

void CT_TABDEF::set_Id_attr(const ST_ID& _Id_attr)
{
    m_has_Id_attr = true;
    m_Id_attr = new ST_ID(_Id_attr);
}

const ST_ID& CT_TABDEF::get_Id_attr() const
{
    if (m_Id_attr)
    {
        return *m_Id_attr;
    }
    return ST_ID::default_instance();
}


// CT_TABDEF::ChildGroup_1
CT_TABDEF::ChildGroup_1::ChildGroup_1()
    :m_has_TABITEM(false),
     m_TABITEM(NULL)
{
}
bool CT_TABDEF::ChildGroup_1::has_TABITEM() const
{
    return m_has_TABITEM;
}

CT_TABITEM* CT_TABDEF::ChildGroup_1::mutable_TABITEM()
{

    m_has_TABITEM = true;
    if (!m_TABITEM)
    {
        m_TABITEM = new CT_TABITEM();
    }
    return m_TABITEM;
}

const CT_TABITEM& CT_TABDEF::ChildGroup_1::get_TABITEM() const
{
    if (m_TABITEM)
    {
        return *m_TABITEM;
    }
    return CT_TABITEM::default_instance();
}

CT_TABDEF* CT_TABDEF::default_instance_ = NULL;

// CT_NUMBERING
CT_NUMBERING::CT_NUMBERING()
    :m_has_Id_attr(false),
     m_Id_attr(NULL),
     m_has_Start_attr(false),
     m_Start_attr(NULL)
{
}
CT_NUMBERING::~CT_NUMBERING()
{
    clear();
}
CT_PARAHEAD* CT_NUMBERING::add_PARAHEAD()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_PARAHEAD* pNewChild = pChildGroup->mutable_PARAHEAD();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

void CT_NUMBERING::clear()
{
    m_has_Id_attr = false;

    if (m_Id_attr)
    {
        delete m_Id_attr;
        m_Id_attr = NULL;
    }


    m_has_Start_attr = false;

    if (m_Start_attr)
    {
        delete m_Start_attr;
        m_Start_attr = NULL;
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

void CT_NUMBERING::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_Id_attr)
    {
        m_Id_attr->toXmlAttr("Id", _outStream);
    }



    if (m_has_Start_attr)
    {
        m_Start_attr->toXmlAttr("Start", _outStream);
    }

    _outStream << ">";

    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_PARAHEAD())
            {
                (*iter)->get_PARAHEAD().toXmlElem("PARAHEAD", "", _outStream);
            }


        }
    }

    _outStream << "</" << _elemName << ">";
}

const CT_NUMBERING& CT_NUMBERING::default_instance()
{
    if (!CT_NUMBERING::default_instance_)
    {
        CT_NUMBERING::default_instance_ = new CT_NUMBERING();
    }
    return *CT_NUMBERING::default_instance_;
}

bool CT_NUMBERING::has_Id_attr() const
{
    return m_has_Id_attr;
}

void CT_NUMBERING::set_Id_attr(const ST_ID& _Id_attr)
{
    m_has_Id_attr = true;
    m_Id_attr = new ST_ID(_Id_attr);
}

const ST_ID& CT_NUMBERING::get_Id_attr() const
{
    if (m_Id_attr)
    {
        return *m_Id_attr;
    }
    return ST_ID::default_instance();
}

bool CT_NUMBERING::has_Start_attr() const
{
    return m_has_Start_attr;
}

void CT_NUMBERING::set_Start_attr(const ST_UnsignedDecimalNumber& _Start_attr)
{
    m_has_Start_attr = true;
    m_Start_attr = new ST_UnsignedDecimalNumber(_Start_attr);
}

const ST_UnsignedDecimalNumber& CT_NUMBERING::get_Start_attr() const
{
    if (m_Start_attr)
    {
        return *m_Start_attr;
    }
    return ST_UnsignedDecimalNumber::default_instance();
}


// CT_NUMBERING::ChildGroup_1
CT_NUMBERING::ChildGroup_1::ChildGroup_1()
    :m_has_PARAHEAD(false),
     m_PARAHEAD(NULL)
{
}
bool CT_NUMBERING::ChildGroup_1::has_PARAHEAD() const
{
    return m_has_PARAHEAD;
}

CT_PARAHEAD* CT_NUMBERING::ChildGroup_1::mutable_PARAHEAD()
{

    m_has_PARAHEAD = true;
    if (!m_PARAHEAD)
    {
        m_PARAHEAD = new CT_PARAHEAD();
    }
    return m_PARAHEAD;
}

const CT_PARAHEAD& CT_NUMBERING::ChildGroup_1::get_PARAHEAD() const
{
    if (m_PARAHEAD)
    {
        return *m_PARAHEAD;
    }
    return CT_PARAHEAD::default_instance();
}

CT_NUMBERING* CT_NUMBERING::default_instance_ = NULL;

// CT_BULLET
CT_BULLET::CT_BULLET()
    :m_has_Char_attr(false),
     m_Char_attr(NULL),
     m_has_Id_attr(false),
     m_Id_attr(NULL),
     m_has_Image_attr(false),
     m_Image_attr(NULL)
{
}
CT_BULLET::~CT_BULLET()
{
    clear();
}
CT_PARAHEAD* CT_BULLET::add_PARAHEAD()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_PARAHEAD* pNewChild = pChildGroup->mutable_PARAHEAD();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

void CT_BULLET::clear()
{
    m_has_Char_attr = false;

    if (m_Char_attr)
    {
        delete m_Char_attr;
        m_Char_attr = NULL;
    }


    m_has_Id_attr = false;

    if (m_Id_attr)
    {
        delete m_Id_attr;
        m_Id_attr = NULL;
    }


    m_has_Image_attr = false;

    if (m_Image_attr)
    {
        delete m_Image_attr;
        m_Image_attr = NULL;
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

void CT_BULLET::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_Char_attr)
    {
        m_Char_attr->toXmlAttr("Char", _outStream);
    }



    if (m_has_Id_attr)
    {
        m_Id_attr->toXmlAttr("Id", _outStream);
    }



    if (m_has_Image_attr)
    {
        m_Image_attr->toXmlAttr("Image", _outStream);
    }

    _outStream << ">";

    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_PARAHEAD())
            {
                (*iter)->get_PARAHEAD().toXmlElem("PARAHEAD", "", _outStream);
            }


        }
    }

    _outStream << "</" << _elemName << ">";
}

const CT_BULLET& CT_BULLET::default_instance()
{
    if (!CT_BULLET::default_instance_)
    {
        CT_BULLET::default_instance_ = new CT_BULLET();
    }
    return *CT_BULLET::default_instance_;
}

bool CT_BULLET::has_Char_attr() const
{
    return m_has_Char_attr;
}

void CT_BULLET::set_Char_attr(const ST_String& _Char_attr)
{
    m_has_Char_attr = true;
    m_Char_attr = new ST_String(_Char_attr);
}

const ST_String& CT_BULLET::get_Char_attr() const
{
    if (m_Char_attr)
    {
        return *m_Char_attr;
    }
    return ST_String::default_instance();
}

bool CT_BULLET::has_Id_attr() const
{
    return m_has_Id_attr;
}

void CT_BULLET::set_Id_attr(const ST_ID& _Id_attr)
{
    m_has_Id_attr = true;
    m_Id_attr = new ST_ID(_Id_attr);
}

const ST_ID& CT_BULLET::get_Id_attr() const
{
    if (m_Id_attr)
    {
        return *m_Id_attr;
    }
    return ST_ID::default_instance();
}

bool CT_BULLET::has_Image_attr() const
{
    return m_has_Image_attr;
}

void CT_BULLET::set_Image_attr(const ST_OnOff& _Image_attr)
{
    m_has_Image_attr = true;
    m_Image_attr = new ST_OnOff(_Image_attr);
}

const ST_OnOff& CT_BULLET::get_Image_attr() const
{
    if (m_Image_attr)
    {
        return *m_Image_attr;
    }
    return ST_OnOff::default_instance();
}


// CT_BULLET::ChildGroup_1
CT_BULLET::ChildGroup_1::ChildGroup_1()
    :m_has_PARAHEAD(false),
     m_PARAHEAD(NULL)
{
}
bool CT_BULLET::ChildGroup_1::has_PARAHEAD() const
{
    return m_has_PARAHEAD;
}

CT_PARAHEAD* CT_BULLET::ChildGroup_1::mutable_PARAHEAD()
{

    m_has_PARAHEAD = true;
    if (!m_PARAHEAD)
    {
        m_PARAHEAD = new CT_PARAHEAD();
    }
    return m_PARAHEAD;
}

const CT_PARAHEAD& CT_BULLET::ChildGroup_1::get_PARAHEAD() const
{
    if (m_PARAHEAD)
    {
        return *m_PARAHEAD;
    }
    return CT_PARAHEAD::default_instance();
}

CT_BULLET* CT_BULLET::default_instance_ = NULL;

// CT_PARAMARGIN
CT_PARAMARGIN::CT_PARAMARGIN()
    :m_has_Indent_attr(false),
     m_Indent_attr(NULL),
     m_has_Left_attr(false),
     m_Left_attr(NULL),
     m_has_LineSpacing_attr(false),
     m_LineSpacing_attr(NULL),
     m_has_LineSpacingType_attr(false),
     m_LineSpacingType_attr(NULL),
     m_has_Next_attr(false),
     m_Next_attr(NULL),
     m_has_Prev_attr(false),
     m_Prev_attr(NULL),
     m_has_Right_attr(false),
     m_Right_attr(NULL)
{
}
CT_PARAMARGIN::~CT_PARAMARGIN()
{
    clear();
}
void CT_PARAMARGIN::clear()
{
    m_has_Indent_attr = false;

    if (m_Indent_attr)
    {
        delete m_Indent_attr;
        m_Indent_attr = NULL;
    }


    m_has_Left_attr = false;

    if (m_Left_attr)
    {
        delete m_Left_attr;
        m_Left_attr = NULL;
    }


    m_has_LineSpacing_attr = false;

    if (m_LineSpacing_attr)
    {
        delete m_LineSpacing_attr;
        m_LineSpacing_attr = NULL;
    }


    m_has_LineSpacingType_attr = false;

    if (m_LineSpacingType_attr)
    {
        delete m_LineSpacingType_attr;
        m_LineSpacingType_attr = NULL;
    }


    m_has_Next_attr = false;

    if (m_Next_attr)
    {
        delete m_Next_attr;
        m_Next_attr = NULL;
    }


    m_has_Prev_attr = false;

    if (m_Prev_attr)
    {
        delete m_Prev_attr;
        m_Prev_attr = NULL;
    }


    m_has_Right_attr = false;

    if (m_Right_attr)
    {
        delete m_Right_attr;
        m_Right_attr = NULL;
    }

}

void CT_PARAMARGIN::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_Indent_attr)
    {
        m_Indent_attr->toXmlAttr("Indent", _outStream);
    }



    if (m_has_Left_attr)
    {
        m_Left_attr->toXmlAttr("Left", _outStream);
    }



    if (m_has_LineSpacing_attr)
    {
        m_LineSpacing_attr->toXmlAttr("LineSpacing", _outStream);
    }



    if (m_has_LineSpacingType_attr)
    {
        m_LineSpacingType_attr->toXmlAttr("LineSpacingType", _outStream);
    }



    if (m_has_Next_attr)
    {
        m_Next_attr->toXmlAttr("Next", _outStream);
    }



    if (m_has_Prev_attr)
    {
        m_Prev_attr->toXmlAttr("Prev", _outStream);
    }



    if (m_has_Right_attr)
    {
        m_Right_attr->toXmlAttr("Right", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_PARAMARGIN& CT_PARAMARGIN::default_instance()
{
    if (!CT_PARAMARGIN::default_instance_)
    {
        CT_PARAMARGIN::default_instance_ = new CT_PARAMARGIN();
    }
    return *CT_PARAMARGIN::default_instance_;
}

bool CT_PARAMARGIN::has_Indent_attr() const
{
    return m_has_Indent_attr;
}

void CT_PARAMARGIN::set_Indent_attr(const ST_DecimalNumber& _Indent_attr)
{
    m_has_Indent_attr = true;
    m_Indent_attr = new ST_DecimalNumber(_Indent_attr);
}

const ST_DecimalNumber& CT_PARAMARGIN::get_Indent_attr() const
{
    if (m_Indent_attr)
    {
        return *m_Indent_attr;
    }
    return ST_DecimalNumber::default_instance();
}

bool CT_PARAMARGIN::has_Left_attr() const
{
    return m_has_Left_attr;
}

void CT_PARAMARGIN::set_Left_attr(const ST_DecimalNumber& _Left_attr)
{
    m_has_Left_attr = true;
    m_Left_attr = new ST_DecimalNumber(_Left_attr);
}

const ST_DecimalNumber& CT_PARAMARGIN::get_Left_attr() const
{
    if (m_Left_attr)
    {
        return *m_Left_attr;
    }
    return ST_DecimalNumber::default_instance();
}

bool CT_PARAMARGIN::has_LineSpacing_attr() const
{
    return m_has_LineSpacing_attr;
}

void CT_PARAMARGIN::set_LineSpacing_attr(const ST_DecimalNumber& _LineSpacing_attr)
{
    m_has_LineSpacing_attr = true;
    m_LineSpacing_attr = new ST_DecimalNumber(_LineSpacing_attr);
}

const ST_DecimalNumber& CT_PARAMARGIN::get_LineSpacing_attr() const
{
    if (m_LineSpacing_attr)
    {
        return *m_LineSpacing_attr;
    }
    return ST_DecimalNumber::default_instance();
}

bool CT_PARAMARGIN::has_LineSpacingType_attr() const
{
    return m_has_LineSpacingType_attr;
}

void CT_PARAMARGIN::set_LineSpacingType_attr(const ST_LineSpacing& _LineSpacingType_attr)
{
    m_has_LineSpacingType_attr = true;
    m_LineSpacingType_attr = new ST_LineSpacing(_LineSpacingType_attr);
}

const ST_LineSpacing& CT_PARAMARGIN::get_LineSpacingType_attr() const
{
    if (m_LineSpacingType_attr)
    {
        return *m_LineSpacingType_attr;
    }
    return ST_LineSpacing::default_instance();
}

bool CT_PARAMARGIN::has_Next_attr() const
{
    return m_has_Next_attr;
}

void CT_PARAMARGIN::set_Next_attr(const ST_DecimalNumber& _Next_attr)
{
    m_has_Next_attr = true;
    m_Next_attr = new ST_DecimalNumber(_Next_attr);
}

const ST_DecimalNumber& CT_PARAMARGIN::get_Next_attr() const
{
    if (m_Next_attr)
    {
        return *m_Next_attr;
    }
    return ST_DecimalNumber::default_instance();
}

bool CT_PARAMARGIN::has_Prev_attr() const
{
    return m_has_Prev_attr;
}

void CT_PARAMARGIN::set_Prev_attr(const ST_DecimalNumber& _Prev_attr)
{
    m_has_Prev_attr = true;
    m_Prev_attr = new ST_DecimalNumber(_Prev_attr);
}

const ST_DecimalNumber& CT_PARAMARGIN::get_Prev_attr() const
{
    if (m_Prev_attr)
    {
        return *m_Prev_attr;
    }
    return ST_DecimalNumber::default_instance();
}

bool CT_PARAMARGIN::has_Right_attr() const
{
    return m_has_Right_attr;
}

void CT_PARAMARGIN::set_Right_attr(const ST_DecimalNumber& _Right_attr)
{
    m_has_Right_attr = true;
    m_Right_attr = new ST_DecimalNumber(_Right_attr);
}

const ST_DecimalNumber& CT_PARAMARGIN::get_Right_attr() const
{
    if (m_Right_attr)
    {
        return *m_Right_attr;
    }
    return ST_DecimalNumber::default_instance();
}

CT_PARAMARGIN* CT_PARAMARGIN::default_instance_ = NULL;

// CT_PARABORDER
CT_PARABORDER::CT_PARABORDER()
    :m_has_BorderFill_attr(false),
     m_BorderFill_attr(NULL),
     m_has_Connect_attr(false),
     m_Connect_attr(NULL),
     m_has_IgnoreMargin_attr(false),
     m_IgnoreMargin_attr(NULL),
     m_has_OffsetBottom_attr(false),
     m_OffsetBottom_attr(NULL),
     m_has_OffsetLeft_attr(false),
     m_OffsetLeft_attr(NULL),
     m_has_OffsetRight_attr(false),
     m_OffsetRight_attr(NULL),
     m_has_OffsetTop_attr(false),
     m_OffsetTop_attr(NULL)
{
}
CT_PARABORDER::~CT_PARABORDER()
{
    clear();
}
void CT_PARABORDER::clear()
{
    m_has_BorderFill_attr = false;

    if (m_BorderFill_attr)
    {
        delete m_BorderFill_attr;
        m_BorderFill_attr = NULL;
    }


    m_has_Connect_attr = false;

    if (m_Connect_attr)
    {
        delete m_Connect_attr;
        m_Connect_attr = NULL;
    }


    m_has_IgnoreMargin_attr = false;

    if (m_IgnoreMargin_attr)
    {
        delete m_IgnoreMargin_attr;
        m_IgnoreMargin_attr = NULL;
    }


    m_has_OffsetBottom_attr = false;

    if (m_OffsetBottom_attr)
    {
        delete m_OffsetBottom_attr;
        m_OffsetBottom_attr = NULL;
    }


    m_has_OffsetLeft_attr = false;

    if (m_OffsetLeft_attr)
    {
        delete m_OffsetLeft_attr;
        m_OffsetLeft_attr = NULL;
    }


    m_has_OffsetRight_attr = false;

    if (m_OffsetRight_attr)
    {
        delete m_OffsetRight_attr;
        m_OffsetRight_attr = NULL;
    }


    m_has_OffsetTop_attr = false;

    if (m_OffsetTop_attr)
    {
        delete m_OffsetTop_attr;
        m_OffsetTop_attr = NULL;
    }

}

void CT_PARABORDER::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_BorderFill_attr)
    {
        m_BorderFill_attr->toXmlAttr("BorderFill", _outStream);
    }



    if (m_has_Connect_attr)
    {
        m_Connect_attr->toXmlAttr("Connect", _outStream);
    }



    if (m_has_IgnoreMargin_attr)
    {
        m_IgnoreMargin_attr->toXmlAttr("IgnoreMargin", _outStream);
    }



    if (m_has_OffsetBottom_attr)
    {
        m_OffsetBottom_attr->toXmlAttr("OffsetBottom", _outStream);
    }



    if (m_has_OffsetLeft_attr)
    {
        m_OffsetLeft_attr->toXmlAttr("OffsetLeft", _outStream);
    }



    if (m_has_OffsetRight_attr)
    {
        m_OffsetRight_attr->toXmlAttr("OffsetRight", _outStream);
    }



    if (m_has_OffsetTop_attr)
    {
        m_OffsetTop_attr->toXmlAttr("OffsetTop", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_PARABORDER& CT_PARABORDER::default_instance()
{
    if (!CT_PARABORDER::default_instance_)
    {
        CT_PARABORDER::default_instance_ = new CT_PARABORDER();
    }
    return *CT_PARABORDER::default_instance_;
}

bool CT_PARABORDER::has_BorderFill_attr() const
{
    return m_has_BorderFill_attr;
}

void CT_PARABORDER::set_BorderFill_attr(const ST_ID& _BorderFill_attr)
{
    m_has_BorderFill_attr = true;
    m_BorderFill_attr = new ST_ID(_BorderFill_attr);
}

const ST_ID& CT_PARABORDER::get_BorderFill_attr() const
{
    if (m_BorderFill_attr)
    {
        return *m_BorderFill_attr;
    }
    return ST_ID::default_instance();
}

bool CT_PARABORDER::has_Connect_attr() const
{
    return m_has_Connect_attr;
}

void CT_PARABORDER::set_Connect_attr(const ST_OnOff& _Connect_attr)
{
    m_has_Connect_attr = true;
    m_Connect_attr = new ST_OnOff(_Connect_attr);
}

const ST_OnOff& CT_PARABORDER::get_Connect_attr() const
{
    if (m_Connect_attr)
    {
        return *m_Connect_attr;
    }
    return ST_OnOff::default_instance();
}

bool CT_PARABORDER::has_IgnoreMargin_attr() const
{
    return m_has_IgnoreMargin_attr;
}

void CT_PARABORDER::set_IgnoreMargin_attr(const ST_OnOff& _IgnoreMargin_attr)
{
    m_has_IgnoreMargin_attr = true;
    m_IgnoreMargin_attr = new ST_OnOff(_IgnoreMargin_attr);
}

const ST_OnOff& CT_PARABORDER::get_IgnoreMargin_attr() const
{
    if (m_IgnoreMargin_attr)
    {
        return *m_IgnoreMargin_attr;
    }
    return ST_OnOff::default_instance();
}

bool CT_PARABORDER::has_OffsetBottom_attr() const
{
    return m_has_OffsetBottom_attr;
}

void CT_PARABORDER::set_OffsetBottom_attr(const ST_HunitMeasure& _OffsetBottom_attr)
{
    m_has_OffsetBottom_attr = true;
    m_OffsetBottom_attr = new ST_HunitMeasure(_OffsetBottom_attr);
}

const ST_HunitMeasure& CT_PARABORDER::get_OffsetBottom_attr() const
{
    if (m_OffsetBottom_attr)
    {
        return *m_OffsetBottom_attr;
    }
    return ST_HunitMeasure::default_instance();
}

bool CT_PARABORDER::has_OffsetLeft_attr() const
{
    return m_has_OffsetLeft_attr;
}

void CT_PARABORDER::set_OffsetLeft_attr(const ST_HunitMeasure& _OffsetLeft_attr)
{
    m_has_OffsetLeft_attr = true;
    m_OffsetLeft_attr = new ST_HunitMeasure(_OffsetLeft_attr);
}

const ST_HunitMeasure& CT_PARABORDER::get_OffsetLeft_attr() const
{
    if (m_OffsetLeft_attr)
    {
        return *m_OffsetLeft_attr;
    }
    return ST_HunitMeasure::default_instance();
}

bool CT_PARABORDER::has_OffsetRight_attr() const
{
    return m_has_OffsetRight_attr;
}

void CT_PARABORDER::set_OffsetRight_attr(const ST_HunitMeasure& _OffsetRight_attr)
{
    m_has_OffsetRight_attr = true;
    m_OffsetRight_attr = new ST_HunitMeasure(_OffsetRight_attr);
}

const ST_HunitMeasure& CT_PARABORDER::get_OffsetRight_attr() const
{
    if (m_OffsetRight_attr)
    {
        return *m_OffsetRight_attr;
    }
    return ST_HunitMeasure::default_instance();
}

bool CT_PARABORDER::has_OffsetTop_attr() const
{
    return m_has_OffsetTop_attr;
}

void CT_PARABORDER::set_OffsetTop_attr(const ST_HunitMeasure& _OffsetTop_attr)
{
    m_has_OffsetTop_attr = true;
    m_OffsetTop_attr = new ST_HunitMeasure(_OffsetTop_attr);
}

const ST_HunitMeasure& CT_PARABORDER::get_OffsetTop_attr() const
{
    if (m_OffsetTop_attr)
    {
        return *m_OffsetTop_attr;
    }
    return ST_HunitMeasure::default_instance();
}

CT_PARABORDER* CT_PARABORDER::default_instance_ = NULL;

// CT_PARASHAPE
CT_PARASHAPE::CT_PARASHAPE()
    :m_has_PARAMARGIN(false),
     m_PARAMARGIN(NULL),
     m_has_PARABORDER(false),
     m_PARABORDER(NULL),
     m_has_Align_attr(false),
     m_Align_attr(NULL),
     m_has_AutoSpaceEAsianEng_attr(false),
     m_AutoSpaceEAsianEng_attr(NULL),
     m_has_AutoSpaceEAsianNum_attr(false),
     m_AutoSpaceEAsianNum_attr(NULL),
     m_has_BreakLatinWord_attr(false),
     m_BreakLatinWord_attr(NULL),
     m_has_BreakNonLatinWord_attr(false),
     m_BreakNonLatinWord_attr(NULL),
     m_has_Condense_attr(false),
     m_Condense_attr(NULL),
     m_has_FontLineHeight_attr(false),
     m_FontLineHeight_attr(NULL),
     m_has_HeadingType_attr(false),
     m_HeadingType_attr(NULL),
     m_has_Id_attr(false),
     m_Id_attr(NULL),
     m_has_KeepLines_attr(false),
     m_KeepLines_attr(NULL),
     m_has_KeepWithNext_attr(false),
     m_KeepWithNext_attr(NULL),
     m_has_Level_attr(false),
     m_Level_attr(NULL),
     m_has_LineWrap_attr(false),
     m_LineWrap_attr(NULL),
     m_has_PageBreakBefore_attr(false),
     m_PageBreakBefore_attr(NULL),
     m_has_SnapToGrid_attr(false),
     m_SnapToGrid_attr(NULL),
     m_has_TabDef_attr(false),
     m_TabDef_attr(NULL),
     m_has_VerAlign_attr(false),
     m_VerAlign_attr(NULL),
     m_has_WidowOrphan_attr(false),
     m_WidowOrphan_attr(NULL),
     m_has_Heading_attr(false),
     m_Heading_attr(NULL)
{
}
CT_PARASHAPE::~CT_PARASHAPE()
{
    clear();
}
bool CT_PARASHAPE::has_PARAMARGIN() const
{
    return m_has_PARAMARGIN;
}

CT_PARAMARGIN* CT_PARASHAPE::mutable_PARAMARGIN()
{
    m_has_PARAMARGIN = true;
    if (!m_PARAMARGIN)
    {
        m_PARAMARGIN = new CT_PARAMARGIN();
    }
    return m_PARAMARGIN;
}

const CT_PARAMARGIN& CT_PARASHAPE::get_PARAMARGIN() const
{
    if (m_PARAMARGIN)
    {
        return *m_PARAMARGIN;
    }
    return CT_PARAMARGIN::default_instance();
}

bool CT_PARASHAPE::has_PARABORDER() const
{
    return m_has_PARABORDER;
}

CT_PARABORDER* CT_PARASHAPE::mutable_PARABORDER()
{
    m_has_PARABORDER = true;
    if (!m_PARABORDER)
    {
        m_PARABORDER = new CT_PARABORDER();
    }
    return m_PARABORDER;
}

const CT_PARABORDER& CT_PARASHAPE::get_PARABORDER() const
{
    if (m_PARABORDER)
    {
        return *m_PARABORDER;
    }
    return CT_PARABORDER::default_instance();
}

void CT_PARASHAPE::clear()
{
    m_has_Align_attr = false;

    if (m_Align_attr)
    {
        delete m_Align_attr;
        m_Align_attr = NULL;
    }


    m_has_AutoSpaceEAsianEng_attr = false;

    if (m_AutoSpaceEAsianEng_attr)
    {
        delete m_AutoSpaceEAsianEng_attr;
        m_AutoSpaceEAsianEng_attr = NULL;
    }


    m_has_AutoSpaceEAsianNum_attr = false;

    if (m_AutoSpaceEAsianNum_attr)
    {
        delete m_AutoSpaceEAsianNum_attr;
        m_AutoSpaceEAsianNum_attr = NULL;
    }


    m_has_BreakLatinWord_attr = false;

    if (m_BreakLatinWord_attr)
    {
        delete m_BreakLatinWord_attr;
        m_BreakLatinWord_attr = NULL;
    }


    m_has_BreakNonLatinWord_attr = false;

    if (m_BreakNonLatinWord_attr)
    {
        delete m_BreakNonLatinWord_attr;
        m_BreakNonLatinWord_attr = NULL;
    }


    m_has_Condense_attr = false;

    if (m_Condense_attr)
    {
        delete m_Condense_attr;
        m_Condense_attr = NULL;
    }


    m_has_FontLineHeight_attr = false;

    if (m_FontLineHeight_attr)
    {
        delete m_FontLineHeight_attr;
        m_FontLineHeight_attr = NULL;
    }


    m_has_HeadingType_attr = false;

    if (m_HeadingType_attr)
    {
        delete m_HeadingType_attr;
        m_HeadingType_attr = NULL;
    }


    m_has_Id_attr = false;

    if (m_Id_attr)
    {
        delete m_Id_attr;
        m_Id_attr = NULL;
    }


    m_has_KeepLines_attr = false;

    if (m_KeepLines_attr)
    {
        delete m_KeepLines_attr;
        m_KeepLines_attr = NULL;
    }


    m_has_KeepWithNext_attr = false;

    if (m_KeepWithNext_attr)
    {
        delete m_KeepWithNext_attr;
        m_KeepWithNext_attr = NULL;
    }


    m_has_Level_attr = false;

    if (m_Level_attr)
    {
        delete m_Level_attr;
        m_Level_attr = NULL;
    }


    m_has_LineWrap_attr = false;

    if (m_LineWrap_attr)
    {
        delete m_LineWrap_attr;
        m_LineWrap_attr = NULL;
    }


    m_has_PageBreakBefore_attr = false;

    if (m_PageBreakBefore_attr)
    {
        delete m_PageBreakBefore_attr;
        m_PageBreakBefore_attr = NULL;
    }


    m_has_SnapToGrid_attr = false;

    if (m_SnapToGrid_attr)
    {
        delete m_SnapToGrid_attr;
        m_SnapToGrid_attr = NULL;
    }


    m_has_TabDef_attr = false;

    if (m_TabDef_attr)
    {
        delete m_TabDef_attr;
        m_TabDef_attr = NULL;
    }


    m_has_VerAlign_attr = false;

    if (m_VerAlign_attr)
    {
        delete m_VerAlign_attr;
        m_VerAlign_attr = NULL;
    }


    m_has_WidowOrphan_attr = false;

    if (m_WidowOrphan_attr)
    {
        delete m_WidowOrphan_attr;
        m_WidowOrphan_attr = NULL;
    }


    m_has_Heading_attr = false;

    if (m_Heading_attr)
    {
        delete m_Heading_attr;
        m_Heading_attr = NULL;
    }


    m_has_PARAMARGIN = false;

    if (m_PARAMARGIN)
    {
        delete m_PARAMARGIN;
        m_PARAMARGIN = NULL;
    }


    m_has_PARABORDER = false;

    if (m_PARABORDER)
    {
        delete m_PARABORDER;
        m_PARABORDER = NULL;
    }

}

void CT_PARASHAPE::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_Align_attr)
    {
        m_Align_attr->toXmlAttr("Align", _outStream);
    }



    if (m_has_AutoSpaceEAsianEng_attr)
    {
        m_AutoSpaceEAsianEng_attr->toXmlAttr("AutoSpaceEAsianEng", _outStream);
    }



    if (m_has_AutoSpaceEAsianNum_attr)
    {
        m_AutoSpaceEAsianNum_attr->toXmlAttr("AutoSpaceEAsianNum", _outStream);
    }



    if (m_has_BreakLatinWord_attr)
    {
        m_BreakLatinWord_attr->toXmlAttr("BreakLatinWord", _outStream);
    }



    if (m_has_BreakNonLatinWord_attr)
    {
        m_BreakNonLatinWord_attr->toXmlAttr("BreakNonLatinWord", _outStream);
    }



    if (m_has_Condense_attr)
    {
        m_Condense_attr->toXmlAttr("Condense", _outStream);
    }



    if (m_has_FontLineHeight_attr)
    {
        m_FontLineHeight_attr->toXmlAttr("FontLineHeight", _outStream);
    }



    if (m_has_HeadingType_attr)
    {
        m_HeadingType_attr->toXmlAttr("HeadingType", _outStream);
    }



    if (m_has_Id_attr)
    {
        m_Id_attr->toXmlAttr("Id", _outStream);
    }



    if (m_has_KeepLines_attr)
    {
        m_KeepLines_attr->toXmlAttr("KeepLines", _outStream);
    }



    if (m_has_KeepWithNext_attr)
    {
        m_KeepWithNext_attr->toXmlAttr("KeepWithNext", _outStream);
    }



    if (m_has_Level_attr)
    {
        m_Level_attr->toXmlAttr("Level", _outStream);
    }



    if (m_has_LineWrap_attr)
    {
        m_LineWrap_attr->toXmlAttr("LineWrap", _outStream);
    }



    if (m_has_PageBreakBefore_attr)
    {
        m_PageBreakBefore_attr->toXmlAttr("PageBreakBefore", _outStream);
    }



    if (m_has_SnapToGrid_attr)
    {
        m_SnapToGrid_attr->toXmlAttr("SnapToGrid", _outStream);
    }



    if (m_has_TabDef_attr)
    {
        m_TabDef_attr->toXmlAttr("TabDef", _outStream);
    }



    if (m_has_VerAlign_attr)
    {
        m_VerAlign_attr->toXmlAttr("VerAlign", _outStream);
    }



    if (m_has_WidowOrphan_attr)
    {
        m_WidowOrphan_attr->toXmlAttr("WidowOrphan", _outStream);
    }



    if (m_has_Heading_attr)
    {
        m_Heading_attr->toXmlAttr("Heading", _outStream);
    }

    _outStream << ">";


    if (m_has_PARAMARGIN)
    {
        m_PARAMARGIN->toXmlElem("PARAMARGIN", "", _outStream);
    }


    if (m_has_PARABORDER)
    {
        m_PARABORDER->toXmlElem("PARABORDER", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_PARASHAPE& CT_PARASHAPE::default_instance()
{
    if (!CT_PARASHAPE::default_instance_)
    {
        CT_PARASHAPE::default_instance_ = new CT_PARASHAPE();
    }
    return *CT_PARASHAPE::default_instance_;
}

bool CT_PARASHAPE::has_Align_attr() const
{
    return m_has_Align_attr;
}

void CT_PARASHAPE::set_Align_attr(const ST_AlignmentType1& _Align_attr)
{
    m_has_Align_attr = true;
    m_Align_attr = new ST_AlignmentType1(_Align_attr);
}

const ST_AlignmentType1& CT_PARASHAPE::get_Align_attr() const
{
    if (m_Align_attr)
    {
        return *m_Align_attr;
    }
    return ST_AlignmentType1::default_instance();
}

bool CT_PARASHAPE::has_AutoSpaceEAsianEng_attr() const
{
    return m_has_AutoSpaceEAsianEng_attr;
}

void CT_PARASHAPE::set_AutoSpaceEAsianEng_attr(const ST_OnOff& _AutoSpaceEAsianEng_attr)
{
    m_has_AutoSpaceEAsianEng_attr = true;
    m_AutoSpaceEAsianEng_attr = new ST_OnOff(_AutoSpaceEAsianEng_attr);
}

const ST_OnOff& CT_PARASHAPE::get_AutoSpaceEAsianEng_attr() const
{
    if (m_AutoSpaceEAsianEng_attr)
    {
        return *m_AutoSpaceEAsianEng_attr;
    }
    return ST_OnOff::default_instance();
}

bool CT_PARASHAPE::has_AutoSpaceEAsianNum_attr() const
{
    return m_has_AutoSpaceEAsianNum_attr;
}

void CT_PARASHAPE::set_AutoSpaceEAsianNum_attr(const ST_OnOff& _AutoSpaceEAsianNum_attr)
{
    m_has_AutoSpaceEAsianNum_attr = true;
    m_AutoSpaceEAsianNum_attr = new ST_OnOff(_AutoSpaceEAsianNum_attr);
}

const ST_OnOff& CT_PARASHAPE::get_AutoSpaceEAsianNum_attr() const
{
    if (m_AutoSpaceEAsianNum_attr)
    {
        return *m_AutoSpaceEAsianNum_attr;
    }
    return ST_OnOff::default_instance();
}

bool CT_PARASHAPE::has_BreakLatinWord_attr() const
{
    return m_has_BreakLatinWord_attr;
}

void CT_PARASHAPE::set_BreakLatinWord_attr(const ST_BreakLatinWord& _BreakLatinWord_attr)
{
    m_has_BreakLatinWord_attr = true;
    m_BreakLatinWord_attr = new ST_BreakLatinWord(_BreakLatinWord_attr);
}

const ST_BreakLatinWord& CT_PARASHAPE::get_BreakLatinWord_attr() const
{
    if (m_BreakLatinWord_attr)
    {
        return *m_BreakLatinWord_attr;
    }
    return ST_BreakLatinWord::default_instance();
}

bool CT_PARASHAPE::has_BreakNonLatinWord_attr() const
{
    return m_has_BreakNonLatinWord_attr;
}

void CT_PARASHAPE::set_BreakNonLatinWord_attr(const ST_OnOff& _BreakNonLatinWord_attr)
{
    m_has_BreakNonLatinWord_attr = true;
    m_BreakNonLatinWord_attr = new ST_OnOff(_BreakNonLatinWord_attr);
}

const ST_OnOff& CT_PARASHAPE::get_BreakNonLatinWord_attr() const
{
    if (m_BreakNonLatinWord_attr)
    {
        return *m_BreakNonLatinWord_attr;
    }
    return ST_OnOff::default_instance();
}

bool CT_PARASHAPE::has_Condense_attr() const
{
    return m_has_Condense_attr;
}

void CT_PARASHAPE::set_Condense_attr(const ST_Condense& _Condense_attr)
{
    m_has_Condense_attr = true;
    m_Condense_attr = new ST_Condense(_Condense_attr);
}

const ST_Condense& CT_PARASHAPE::get_Condense_attr() const
{
    if (m_Condense_attr)
    {
        return *m_Condense_attr;
    }
    return ST_Condense::default_instance();
}

bool CT_PARASHAPE::has_FontLineHeight_attr() const
{
    return m_has_FontLineHeight_attr;
}

void CT_PARASHAPE::set_FontLineHeight_attr(const ST_OnOff& _FontLineHeight_attr)
{
    m_has_FontLineHeight_attr = true;
    m_FontLineHeight_attr = new ST_OnOff(_FontLineHeight_attr);
}

const ST_OnOff& CT_PARASHAPE::get_FontLineHeight_attr() const
{
    if (m_FontLineHeight_attr)
    {
        return *m_FontLineHeight_attr;
    }
    return ST_OnOff::default_instance();
}

bool CT_PARASHAPE::has_HeadingType_attr() const
{
    return m_has_HeadingType_attr;
}

void CT_PARASHAPE::set_HeadingType_attr(const ST_HeadingType& _HeadingType_attr)
{
    m_has_HeadingType_attr = true;
    m_HeadingType_attr = new ST_HeadingType(_HeadingType_attr);
}

const ST_HeadingType& CT_PARASHAPE::get_HeadingType_attr() const
{
    if (m_HeadingType_attr)
    {
        return *m_HeadingType_attr;
    }
    return ST_HeadingType::default_instance();
}

bool CT_PARASHAPE::has_Id_attr() const
{
    return m_has_Id_attr;
}

void CT_PARASHAPE::set_Id_attr(const ST_ID& _Id_attr)
{
    m_has_Id_attr = true;
    m_Id_attr = new ST_ID(_Id_attr);
}

const ST_ID& CT_PARASHAPE::get_Id_attr() const
{
    if (m_Id_attr)
    {
        return *m_Id_attr;
    }
    return ST_ID::default_instance();
}

bool CT_PARASHAPE::has_KeepLines_attr() const
{
    return m_has_KeepLines_attr;
}

void CT_PARASHAPE::set_KeepLines_attr(const ST_OnOff& _KeepLines_attr)
{
    m_has_KeepLines_attr = true;
    m_KeepLines_attr = new ST_OnOff(_KeepLines_attr);
}

const ST_OnOff& CT_PARASHAPE::get_KeepLines_attr() const
{
    if (m_KeepLines_attr)
    {
        return *m_KeepLines_attr;
    }
    return ST_OnOff::default_instance();
}

bool CT_PARASHAPE::has_KeepWithNext_attr() const
{
    return m_has_KeepWithNext_attr;
}

void CT_PARASHAPE::set_KeepWithNext_attr(const ST_OnOff& _KeepWithNext_attr)
{
    m_has_KeepWithNext_attr = true;
    m_KeepWithNext_attr = new ST_OnOff(_KeepWithNext_attr);
}

const ST_OnOff& CT_PARASHAPE::get_KeepWithNext_attr() const
{
    if (m_KeepWithNext_attr)
    {
        return *m_KeepWithNext_attr;
    }
    return ST_OnOff::default_instance();
}

bool CT_PARASHAPE::has_Level_attr() const
{
    return m_has_Level_attr;
}

void CT_PARASHAPE::set_Level_attr(const ST_NumberLevelType2& _Level_attr)
{
    m_has_Level_attr = true;
    m_Level_attr = new ST_NumberLevelType2(_Level_attr);
}

const ST_NumberLevelType2& CT_PARASHAPE::get_Level_attr() const
{
    if (m_Level_attr)
    {
        return *m_Level_attr;
    }
    return ST_NumberLevelType2::default_instance();
}

bool CT_PARASHAPE::has_LineWrap_attr() const
{
    return m_has_LineWrap_attr;
}

void CT_PARASHAPE::set_LineWrap_attr(const ST_LineWrapType& _LineWrap_attr)
{
    m_has_LineWrap_attr = true;
    m_LineWrap_attr = new ST_LineWrapType(_LineWrap_attr);
}

const ST_LineWrapType& CT_PARASHAPE::get_LineWrap_attr() const
{
    if (m_LineWrap_attr)
    {
        return *m_LineWrap_attr;
    }
    return ST_LineWrapType::default_instance();
}

bool CT_PARASHAPE::has_PageBreakBefore_attr() const
{
    return m_has_PageBreakBefore_attr;
}

void CT_PARASHAPE::set_PageBreakBefore_attr(const ST_OnOff& _PageBreakBefore_attr)
{
    m_has_PageBreakBefore_attr = true;
    m_PageBreakBefore_attr = new ST_OnOff(_PageBreakBefore_attr);
}

const ST_OnOff& CT_PARASHAPE::get_PageBreakBefore_attr() const
{
    if (m_PageBreakBefore_attr)
    {
        return *m_PageBreakBefore_attr;
    }
    return ST_OnOff::default_instance();
}

bool CT_PARASHAPE::has_SnapToGrid_attr() const
{
    return m_has_SnapToGrid_attr;
}

void CT_PARASHAPE::set_SnapToGrid_attr(const ST_OnOff& _SnapToGrid_attr)
{
    m_has_SnapToGrid_attr = true;
    m_SnapToGrid_attr = new ST_OnOff(_SnapToGrid_attr);
}

const ST_OnOff& CT_PARASHAPE::get_SnapToGrid_attr() const
{
    if (m_SnapToGrid_attr)
    {
        return *m_SnapToGrid_attr;
    }
    return ST_OnOff::default_instance();
}

bool CT_PARASHAPE::has_TabDef_attr() const
{
    return m_has_TabDef_attr;
}

void CT_PARASHAPE::set_TabDef_attr(const ST_ID& _TabDef_attr)
{
    m_has_TabDef_attr = true;
    m_TabDef_attr = new ST_ID(_TabDef_attr);
}

const ST_ID& CT_PARASHAPE::get_TabDef_attr() const
{
    if (m_TabDef_attr)
    {
        return *m_TabDef_attr;
    }
    return ST_ID::default_instance();
}

bool CT_PARASHAPE::has_VerAlign_attr() const
{
    return m_has_VerAlign_attr;
}

void CT_PARASHAPE::set_VerAlign_attr(const ST_VertAlignType2& _VerAlign_attr)
{
    m_has_VerAlign_attr = true;
    m_VerAlign_attr = new ST_VertAlignType2(_VerAlign_attr);
}

const ST_VertAlignType2& CT_PARASHAPE::get_VerAlign_attr() const
{
    if (m_VerAlign_attr)
    {
        return *m_VerAlign_attr;
    }
    return ST_VertAlignType2::default_instance();
}

bool CT_PARASHAPE::has_WidowOrphan_attr() const
{
    return m_has_WidowOrphan_attr;
}

void CT_PARASHAPE::set_WidowOrphan_attr(const ST_OnOff& _WidowOrphan_attr)
{
    m_has_WidowOrphan_attr = true;
    m_WidowOrphan_attr = new ST_OnOff(_WidowOrphan_attr);
}

const ST_OnOff& CT_PARASHAPE::get_WidowOrphan_attr() const
{
    if (m_WidowOrphan_attr)
    {
        return *m_WidowOrphan_attr;
    }
    return ST_OnOff::default_instance();
}

bool CT_PARASHAPE::has_Heading_attr() const
{
    return m_has_Heading_attr;
}

void CT_PARASHAPE::set_Heading_attr(const ST_ID& _Heading_attr)
{
    m_has_Heading_attr = true;
    m_Heading_attr = new ST_ID(_Heading_attr);
}

const ST_ID& CT_PARASHAPE::get_Heading_attr() const
{
    if (m_Heading_attr)
    {
        return *m_Heading_attr;
    }
    return ST_ID::default_instance();
}

CT_PARASHAPE* CT_PARASHAPE::default_instance_ = NULL;

// CT_STYLE
CT_STYLE::CT_STYLE()
    :m_has_CharShape_attr(false),
     m_CharShape_attr(NULL),
     m_has_EngName_attr(false),
     m_EngName_attr(NULL),
     m_has_Id_attr(false),
     m_Id_attr(NULL),
     m_has_LangId_attr(false),
     m_LangId_attr(NULL),
     m_has_LockForm_attr(false),
     m_LockForm_attr(NULL),
     m_has_Name_attr(false),
     m_Name_attr(NULL),
     m_has_NextStyle_attr(false),
     m_NextStyle_attr(NULL),
     m_has_ParaShape_attr(false),
     m_ParaShape_attr(NULL),
     m_has_Type_attr(false),
     m_Type_attr(NULL)
{
}
CT_STYLE::~CT_STYLE()
{
    clear();
}
void CT_STYLE::clear()
{
    m_has_CharShape_attr = false;

    if (m_CharShape_attr)
    {
        delete m_CharShape_attr;
        m_CharShape_attr = NULL;
    }


    m_has_EngName_attr = false;

    if (m_EngName_attr)
    {
        delete m_EngName_attr;
        m_EngName_attr = NULL;
    }


    m_has_Id_attr = false;

    if (m_Id_attr)
    {
        delete m_Id_attr;
        m_Id_attr = NULL;
    }


    m_has_LangId_attr = false;

    if (m_LangId_attr)
    {
        delete m_LangId_attr;
        m_LangId_attr = NULL;
    }


    m_has_LockForm_attr = false;

    if (m_LockForm_attr)
    {
        delete m_LockForm_attr;
        m_LockForm_attr = NULL;
    }


    m_has_Name_attr = false;

    if (m_Name_attr)
    {
        delete m_Name_attr;
        m_Name_attr = NULL;
    }


    m_has_NextStyle_attr = false;

    if (m_NextStyle_attr)
    {
        delete m_NextStyle_attr;
        m_NextStyle_attr = NULL;
    }


    m_has_ParaShape_attr = false;

    if (m_ParaShape_attr)
    {
        delete m_ParaShape_attr;
        m_ParaShape_attr = NULL;
    }


    m_has_Type_attr = false;

    if (m_Type_attr)
    {
        delete m_Type_attr;
        m_Type_attr = NULL;
    }

}

void CT_STYLE::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_CharShape_attr)
    {
        m_CharShape_attr->toXmlAttr("CharShape", _outStream);
    }



    if (m_has_EngName_attr)
    {
        m_EngName_attr->toXmlAttr("EngName", _outStream);
    }



    if (m_has_Id_attr)
    {
        m_Id_attr->toXmlAttr("Id", _outStream);
    }



    if (m_has_LangId_attr)
    {
        m_LangId_attr->toXmlAttr("LangId", _outStream);
    }



    if (m_has_LockForm_attr)
    {
        m_LockForm_attr->toXmlAttr("LockForm", _outStream);
    }



    if (m_has_Name_attr)
    {
        m_Name_attr->toXmlAttr("Name", _outStream);
    }



    if (m_has_NextStyle_attr)
    {
        m_NextStyle_attr->toXmlAttr("NextStyle", _outStream);
    }



    if (m_has_ParaShape_attr)
    {
        m_ParaShape_attr->toXmlAttr("ParaShape", _outStream);
    }



    if (m_has_Type_attr)
    {
        m_Type_attr->toXmlAttr("Type", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_STYLE& CT_STYLE::default_instance()
{
    if (!CT_STYLE::default_instance_)
    {
        CT_STYLE::default_instance_ = new CT_STYLE();
    }
    return *CT_STYLE::default_instance_;
}

bool CT_STYLE::has_CharShape_attr() const
{
    return m_has_CharShape_attr;
}

void CT_STYLE::set_CharShape_attr(const ST_ID& _CharShape_attr)
{
    m_has_CharShape_attr = true;
    m_CharShape_attr = new ST_ID(_CharShape_attr);
}

const ST_ID& CT_STYLE::get_CharShape_attr() const
{
    if (m_CharShape_attr)
    {
        return *m_CharShape_attr;
    }
    return ST_ID::default_instance();
}

bool CT_STYLE::has_EngName_attr() const
{
    return m_has_EngName_attr;
}

void CT_STYLE::set_EngName_attr(const ST_String& _EngName_attr)
{
    m_has_EngName_attr = true;
    m_EngName_attr = new ST_String(_EngName_attr);
}

const ST_String& CT_STYLE::get_EngName_attr() const
{
    if (m_EngName_attr)
    {
        return *m_EngName_attr;
    }
    return ST_String::default_instance();
}

bool CT_STYLE::has_Id_attr() const
{
    return m_has_Id_attr;
}

void CT_STYLE::set_Id_attr(const ST_ID& _Id_attr)
{
    m_has_Id_attr = true;
    m_Id_attr = new ST_ID(_Id_attr);
}

const ST_ID& CT_STYLE::get_Id_attr() const
{
    if (m_Id_attr)
    {
        return *m_Id_attr;
    }
    return ST_ID::default_instance();
}

bool CT_STYLE::has_LangId_attr() const
{
    return m_has_LangId_attr;
}

void CT_STYLE::set_LangId_attr(const ST_DecimalNumber& _LangId_attr)
{
    m_has_LangId_attr = true;
    m_LangId_attr = new ST_DecimalNumber(_LangId_attr);
}

const ST_DecimalNumber& CT_STYLE::get_LangId_attr() const
{
    if (m_LangId_attr)
    {
        return *m_LangId_attr;
    }
    return ST_DecimalNumber::default_instance();
}

bool CT_STYLE::has_LockForm_attr() const
{
    return m_has_LockForm_attr;
}

void CT_STYLE::set_LockForm_attr(const ST_OnOff& _LockForm_attr)
{
    m_has_LockForm_attr = true;
    m_LockForm_attr = new ST_OnOff(_LockForm_attr);
}

const ST_OnOff& CT_STYLE::get_LockForm_attr() const
{
    if (m_LockForm_attr)
    {
        return *m_LockForm_attr;
    }
    return ST_OnOff::default_instance();
}

bool CT_STYLE::has_Name_attr() const
{
    return m_has_Name_attr;
}

void CT_STYLE::set_Name_attr(const ST_String& _Name_attr)
{
    m_has_Name_attr = true;
    m_Name_attr = new ST_String(_Name_attr);
}

const ST_String& CT_STYLE::get_Name_attr() const
{
    if (m_Name_attr)
    {
        return *m_Name_attr;
    }
    return ST_String::default_instance();
}

bool CT_STYLE::has_NextStyle_attr() const
{
    return m_has_NextStyle_attr;
}

void CT_STYLE::set_NextStyle_attr(const ST_ID& _NextStyle_attr)
{
    m_has_NextStyle_attr = true;
    m_NextStyle_attr = new ST_ID(_NextStyle_attr);
}

const ST_ID& CT_STYLE::get_NextStyle_attr() const
{
    if (m_NextStyle_attr)
    {
        return *m_NextStyle_attr;
    }
    return ST_ID::default_instance();
}

bool CT_STYLE::has_ParaShape_attr() const
{
    return m_has_ParaShape_attr;
}

void CT_STYLE::set_ParaShape_attr(const ST_ID& _ParaShape_attr)
{
    m_has_ParaShape_attr = true;
    m_ParaShape_attr = new ST_ID(_ParaShape_attr);
}

const ST_ID& CT_STYLE::get_ParaShape_attr() const
{
    if (m_ParaShape_attr)
    {
        return *m_ParaShape_attr;
    }
    return ST_ID::default_instance();
}

bool CT_STYLE::has_Type_attr() const
{
    return m_has_Type_attr;
}

void CT_STYLE::set_Type_attr(const ST_StyleType& _Type_attr)
{
    m_has_Type_attr = true;
    m_Type_attr = new ST_StyleType(_Type_attr);
}

const ST_StyleType& CT_STYLE::get_Type_attr() const
{
    if (m_Type_attr)
    {
        return *m_Type_attr;
    }
    return ST_StyleType::default_instance();
}

CT_STYLE* CT_STYLE::default_instance_ = NULL;

// CT_MEMO
CT_MEMO::CT_MEMO()
    :m_has_Id_attr(false),
     m_Id_attr(NULL),
     m_has_Width_attr(false),
     m_Width_attr(NULL),
     m_has_LineType_attr(false),
     m_LineType_attr(NULL),
     m_has_LineColor_attr(false),
     m_LineColor_attr(NULL),
     m_has_FillColor_attr(false),
     m_FillColor_attr(NULL),
     m_has_ActiveColor_attr(false),
     m_ActiveColor_attr(NULL),
     m_has_MemoType_attr(false),
     m_MemoType_attr(NULL)
{
}
CT_MEMO::~CT_MEMO()
{
    clear();
}
void CT_MEMO::clear()
{
    m_has_Id_attr = false;

    if (m_Id_attr)
    {
        delete m_Id_attr;
        m_Id_attr = NULL;
    }


    m_has_Width_attr = false;

    if (m_Width_attr)
    {
        delete m_Width_attr;
        m_Width_attr = NULL;
    }


    m_has_LineType_attr = false;

    if (m_LineType_attr)
    {
        delete m_LineType_attr;
        m_LineType_attr = NULL;
    }


    m_has_LineColor_attr = false;

    if (m_LineColor_attr)
    {
        delete m_LineColor_attr;
        m_LineColor_attr = NULL;
    }


    m_has_FillColor_attr = false;

    if (m_FillColor_attr)
    {
        delete m_FillColor_attr;
        m_FillColor_attr = NULL;
    }


    m_has_ActiveColor_attr = false;

    if (m_ActiveColor_attr)
    {
        delete m_ActiveColor_attr;
        m_ActiveColor_attr = NULL;
    }


    m_has_MemoType_attr = false;

    if (m_MemoType_attr)
    {
        delete m_MemoType_attr;
        m_MemoType_attr = NULL;
    }

}

void CT_MEMO::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_Id_attr)
    {
        m_Id_attr->toXmlAttr("Id", _outStream);
    }



    if (m_has_Width_attr)
    {
        m_Width_attr->toXmlAttr("Width", _outStream);
    }



    if (m_has_LineType_attr)
    {
        m_LineType_attr->toXmlAttr("LineType", _outStream);
    }



    if (m_has_LineColor_attr)
    {
        m_LineColor_attr->toXmlAttr("LineColor", _outStream);
    }



    if (m_has_FillColor_attr)
    {
        m_FillColor_attr->toXmlAttr("FillColor", _outStream);
    }



    if (m_has_ActiveColor_attr)
    {
        m_ActiveColor_attr->toXmlAttr("ActiveColor", _outStream);
    }



    if (m_has_MemoType_attr)
    {
        m_MemoType_attr->toXmlAttr("MemoType", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_MEMO& CT_MEMO::default_instance()
{
    if (!CT_MEMO::default_instance_)
    {
        CT_MEMO::default_instance_ = new CT_MEMO();
    }
    return *CT_MEMO::default_instance_;
}

bool CT_MEMO::has_Id_attr() const
{
    return m_has_Id_attr;
}

void CT_MEMO::set_Id_attr(const ST_ID& _Id_attr)
{
    m_has_Id_attr = true;
    m_Id_attr = new ST_ID(_Id_attr);
}

const ST_ID& CT_MEMO::get_Id_attr() const
{
    if (m_Id_attr)
    {
        return *m_Id_attr;
    }
    return ST_ID::default_instance();
}

bool CT_MEMO::has_Width_attr() const
{
    return m_has_Width_attr;
}

void CT_MEMO::set_Width_attr(const ST_LineWidth2& _Width_attr)
{
    m_has_Width_attr = true;
    m_Width_attr = new ST_LineWidth2(_Width_attr);
}

const ST_LineWidth2& CT_MEMO::get_Width_attr() const
{
    if (m_Width_attr)
    {
        return *m_Width_attr;
    }
    return ST_LineWidth2::default_instance();
}

bool CT_MEMO::has_LineType_attr() const
{
    return m_has_LineType_attr;
}

void CT_MEMO::set_LineType_attr(const ST_LineType4& _LineType_attr)
{
    m_has_LineType_attr = true;
    m_LineType_attr = new ST_LineType4(_LineType_attr);
}

const ST_LineType4& CT_MEMO::get_LineType_attr() const
{
    if (m_LineType_attr)
    {
        return *m_LineType_attr;
    }
    return ST_LineType4::default_instance();
}

bool CT_MEMO::has_LineColor_attr() const
{
    return m_has_LineColor_attr;
}

void CT_MEMO::set_LineColor_attr(const ST_IntColorRGB& _LineColor_attr)
{
    m_has_LineColor_attr = true;
    m_LineColor_attr = new ST_IntColorRGB(_LineColor_attr);
}

const ST_IntColorRGB& CT_MEMO::get_LineColor_attr() const
{
    if (m_LineColor_attr)
    {
        return *m_LineColor_attr;
    }
    return ST_IntColorRGB::default_instance();
}

bool CT_MEMO::has_FillColor_attr() const
{
    return m_has_FillColor_attr;
}

void CT_MEMO::set_FillColor_attr(const ST_IntColorRGB& _FillColor_attr)
{
    m_has_FillColor_attr = true;
    m_FillColor_attr = new ST_IntColorRGB(_FillColor_attr);
}

const ST_IntColorRGB& CT_MEMO::get_FillColor_attr() const
{
    if (m_FillColor_attr)
    {
        return *m_FillColor_attr;
    }
    return ST_IntColorRGB::default_instance();
}

bool CT_MEMO::has_ActiveColor_attr() const
{
    return m_has_ActiveColor_attr;
}

void CT_MEMO::set_ActiveColor_attr(const ST_IntColorRGB& _ActiveColor_attr)
{
    m_has_ActiveColor_attr = true;
    m_ActiveColor_attr = new ST_IntColorRGB(_ActiveColor_attr);
}

const ST_IntColorRGB& CT_MEMO::get_ActiveColor_attr() const
{
    if (m_ActiveColor_attr)
    {
        return *m_ActiveColor_attr;
    }
    return ST_IntColorRGB::default_instance();
}

bool CT_MEMO::has_MemoType_attr() const
{
    return m_has_MemoType_attr;
}

void CT_MEMO::set_MemoType_attr(const ST_String& _MemoType_attr)
{
    m_has_MemoType_attr = true;
    m_MemoType_attr = new ST_String(_MemoType_attr);
}

const ST_String& CT_MEMO::get_MemoType_attr() const
{
    if (m_MemoType_attr)
    {
        return *m_MemoType_attr;
    }
    return ST_String::default_instance();
}

CT_MEMO* CT_MEMO::default_instance_ = NULL;

// CT_NOTESHAPE
CT_NOTESHAPE::CT_NOTESHAPE()

{
}
CT_NOTESHAPE::~CT_NOTESHAPE()
{
    clear();
}
CT_AUTONUMFORMAT* CT_NOTESHAPE::add_AUTONUMFORMAT()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_AUTONUMFORMAT* pNewChild = pChildGroup->mutable_AUTONUMFORMAT();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

CT_NOTELINE* CT_NOTESHAPE::add_NOTELINE()
{
    ChildGroup_2 *pChildGroup = new ChildGroup_2();
    CT_NOTELINE* pNewChild = pChildGroup->mutable_NOTELINE();
    m_childGroupList_2.push_back(pChildGroup);
    return pNewChild;
}

CT_NOTESPACING* CT_NOTESHAPE::add_NOTESPACING()
{
    ChildGroup_3 *pChildGroup = new ChildGroup_3();
    CT_NOTESPACING* pNewChild = pChildGroup->mutable_NOTESPACING();
    m_childGroupList_3.push_back(pChildGroup);
    return pNewChild;
}

CT_NOTENUMBERING* CT_NOTESHAPE::add_NOTENUMBERING()
{
    ChildGroup_4 *pChildGroup = new ChildGroup_4();
    CT_NOTENUMBERING* pNewChild = pChildGroup->mutable_NOTENUMBERING();
    m_childGroupList_4.push_back(pChildGroup);
    return pNewChild;
}

CT_NOTEPLACEMENT* CT_NOTESHAPE::add_NOTEPLACEMENT()
{
    ChildGroup_5 *pChildGroup = new ChildGroup_5();
    CT_NOTEPLACEMENT* pNewChild = pChildGroup->mutable_NOTEPLACEMENT();
    m_childGroupList_5.push_back(pChildGroup);
    return pNewChild;
}

void CT_NOTESHAPE::clear()
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
}

void CT_NOTESHAPE::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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
            if ((*iter)->has_AUTONUMFORMAT())
            {
                (*iter)->get_AUTONUMFORMAT().toXmlElem("AUTONUMFORMAT", "", _outStream);
            }


        }
    }

    {
        vector<ChildGroup_2*>::const_iterator iter;
        for (iter = m_childGroupList_2.begin(); iter != m_childGroupList_2.end(); ++iter)
        {
            if ((*iter)->has_NOTELINE())
            {
                (*iter)->get_NOTELINE().toXmlElem("NOTELINE", "", _outStream);
            }


        }
    }

    {
        vector<ChildGroup_3*>::const_iterator iter;
        for (iter = m_childGroupList_3.begin(); iter != m_childGroupList_3.end(); ++iter)
        {
            if ((*iter)->has_NOTESPACING())
            {
                (*iter)->get_NOTESPACING().toXmlElem("NOTESPACING", "", _outStream);
            }


        }
    }

    {
        vector<ChildGroup_4*>::const_iterator iter;
        for (iter = m_childGroupList_4.begin(); iter != m_childGroupList_4.end(); ++iter)
        {
            if ((*iter)->has_NOTENUMBERING())
            {
                (*iter)->get_NOTENUMBERING().toXmlElem("NOTENUMBERING", "", _outStream);
            }


        }
    }

    {
        vector<ChildGroup_5*>::const_iterator iter;
        for (iter = m_childGroupList_5.begin(); iter != m_childGroupList_5.end(); ++iter)
        {
            if ((*iter)->has_NOTEPLACEMENT())
            {
                (*iter)->get_NOTEPLACEMENT().toXmlElem("NOTEPLACEMENT", "", _outStream);
            }


        }
    }

    _outStream << "</" << _elemName << ">";
}

const CT_NOTESHAPE& CT_NOTESHAPE::default_instance()
{
    if (!CT_NOTESHAPE::default_instance_)
    {
        CT_NOTESHAPE::default_instance_ = new CT_NOTESHAPE();
    }
    return *CT_NOTESHAPE::default_instance_;
}


// CT_NOTESHAPE::ChildGroup_1
CT_NOTESHAPE::ChildGroup_1::ChildGroup_1()
    :m_has_AUTONUMFORMAT(false),
     m_AUTONUMFORMAT(NULL)
{
}
bool CT_NOTESHAPE::ChildGroup_1::has_AUTONUMFORMAT() const
{
    return m_has_AUTONUMFORMAT;
}

CT_AUTONUMFORMAT* CT_NOTESHAPE::ChildGroup_1::mutable_AUTONUMFORMAT()
{

    m_has_AUTONUMFORMAT = true;
    if (!m_AUTONUMFORMAT)
    {
        m_AUTONUMFORMAT = new CT_AUTONUMFORMAT();
    }
    return m_AUTONUMFORMAT;
}

const CT_AUTONUMFORMAT& CT_NOTESHAPE::ChildGroup_1::get_AUTONUMFORMAT() const
{
    if (m_AUTONUMFORMAT)
    {
        return *m_AUTONUMFORMAT;
    }
    return CT_AUTONUMFORMAT::default_instance();
}


// CT_NOTESHAPE::ChildGroup_2
CT_NOTESHAPE::ChildGroup_2::ChildGroup_2()
    :m_has_NOTELINE(false),
     m_NOTELINE(NULL)
{
}
bool CT_NOTESHAPE::ChildGroup_2::has_NOTELINE() const
{
    return m_has_NOTELINE;
}

CT_NOTELINE* CT_NOTESHAPE::ChildGroup_2::mutable_NOTELINE()
{

    m_has_NOTELINE = true;
    if (!m_NOTELINE)
    {
        m_NOTELINE = new CT_NOTELINE();
    }
    return m_NOTELINE;
}

const CT_NOTELINE& CT_NOTESHAPE::ChildGroup_2::get_NOTELINE() const
{
    if (m_NOTELINE)
    {
        return *m_NOTELINE;
    }
    return CT_NOTELINE::default_instance();
}


// CT_NOTESHAPE::ChildGroup_3
CT_NOTESHAPE::ChildGroup_3::ChildGroup_3()
    :m_has_NOTESPACING(false),
     m_NOTESPACING(NULL)
{
}
bool CT_NOTESHAPE::ChildGroup_3::has_NOTESPACING() const
{
    return m_has_NOTESPACING;
}

CT_NOTESPACING* CT_NOTESHAPE::ChildGroup_3::mutable_NOTESPACING()
{

    m_has_NOTESPACING = true;
    if (!m_NOTESPACING)
    {
        m_NOTESPACING = new CT_NOTESPACING();
    }
    return m_NOTESPACING;
}

const CT_NOTESPACING& CT_NOTESHAPE::ChildGroup_3::get_NOTESPACING() const
{
    if (m_NOTESPACING)
    {
        return *m_NOTESPACING;
    }
    return CT_NOTESPACING::default_instance();
}


// CT_NOTESHAPE::ChildGroup_4
CT_NOTESHAPE::ChildGroup_4::ChildGroup_4()
    :m_has_NOTENUMBERING(false),
     m_NOTENUMBERING(NULL)
{
}
bool CT_NOTESHAPE::ChildGroup_4::has_NOTENUMBERING() const
{
    return m_has_NOTENUMBERING;
}

CT_NOTENUMBERING* CT_NOTESHAPE::ChildGroup_4::mutable_NOTENUMBERING()
{

    m_has_NOTENUMBERING = true;
    if (!m_NOTENUMBERING)
    {
        m_NOTENUMBERING = new CT_NOTENUMBERING();
    }
    return m_NOTENUMBERING;
}

const CT_NOTENUMBERING& CT_NOTESHAPE::ChildGroup_4::get_NOTENUMBERING() const
{
    if (m_NOTENUMBERING)
    {
        return *m_NOTENUMBERING;
    }
    return CT_NOTENUMBERING::default_instance();
}


// CT_NOTESHAPE::ChildGroup_5
CT_NOTESHAPE::ChildGroup_5::ChildGroup_5()
    :m_has_NOTEPLACEMENT(false),
     m_NOTEPLACEMENT(NULL)
{
}
bool CT_NOTESHAPE::ChildGroup_5::has_NOTEPLACEMENT() const
{
    return m_has_NOTEPLACEMENT;
}

CT_NOTEPLACEMENT* CT_NOTESHAPE::ChildGroup_5::mutable_NOTEPLACEMENT()
{

    m_has_NOTEPLACEMENT = true;
    if (!m_NOTEPLACEMENT)
    {
        m_NOTEPLACEMENT = new CT_NOTEPLACEMENT();
    }
    return m_NOTEPLACEMENT;
}

const CT_NOTEPLACEMENT& CT_NOTESHAPE::ChildGroup_5::get_NOTEPLACEMENT() const
{
    if (m_NOTEPLACEMENT)
    {
        return *m_NOTEPLACEMENT;
    }
    return CT_NOTEPLACEMENT::default_instance();
}

CT_NOTESHAPE* CT_NOTESHAPE::default_instance_ = NULL;

// CT_STARTNUMBER
CT_STARTNUMBER::CT_STARTNUMBER()
    :m_has_Equation_attr(false),
     m_Equation_attr(NULL),
     m_has_Figure_attr(false),
     m_Figure_attr(NULL),
     m_has_Page_attr(false),
     m_Page_attr(NULL),
     m_has_PageStartsOn_attr(false),
     m_PageStartsOn_attr(NULL),
     m_has_Table_attr(false),
     m_Table_attr(NULL)
{
}
CT_STARTNUMBER::~CT_STARTNUMBER()
{
    clear();
}
void CT_STARTNUMBER::clear()
{
    m_has_Equation_attr = false;

    if (m_Equation_attr)
    {
        delete m_Equation_attr;
        m_Equation_attr = NULL;
    }


    m_has_Figure_attr = false;

    if (m_Figure_attr)
    {
        delete m_Figure_attr;
        m_Figure_attr = NULL;
    }


    m_has_Page_attr = false;

    if (m_Page_attr)
    {
        delete m_Page_attr;
        m_Page_attr = NULL;
    }


    m_has_PageStartsOn_attr = false;

    if (m_PageStartsOn_attr)
    {
        delete m_PageStartsOn_attr;
        m_PageStartsOn_attr = NULL;
    }


    m_has_Table_attr = false;

    if (m_Table_attr)
    {
        delete m_Table_attr;
        m_Table_attr = NULL;
    }

}

void CT_STARTNUMBER::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_Equation_attr)
    {
        m_Equation_attr->toXmlAttr("Equation", _outStream);
    }



    if (m_has_Figure_attr)
    {
        m_Figure_attr->toXmlAttr("Figure", _outStream);
    }



    if (m_has_Page_attr)
    {
        m_Page_attr->toXmlAttr("Page", _outStream);
    }



    if (m_has_PageStartsOn_attr)
    {
        m_PageStartsOn_attr->toXmlAttr("PageStartsOn", _outStream);
    }



    if (m_has_Table_attr)
    {
        m_Table_attr->toXmlAttr("Table", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_STARTNUMBER& CT_STARTNUMBER::default_instance()
{
    if (!CT_STARTNUMBER::default_instance_)
    {
        CT_STARTNUMBER::default_instance_ = new CT_STARTNUMBER();
    }
    return *CT_STARTNUMBER::default_instance_;
}

bool CT_STARTNUMBER::has_Equation_attr() const
{
    return m_has_Equation_attr;
}

void CT_STARTNUMBER::set_Equation_attr(const ST_String& _Equation_attr)
{
    m_has_Equation_attr = true;
    m_Equation_attr = new ST_String(_Equation_attr);
}

const ST_String& CT_STARTNUMBER::get_Equation_attr() const
{
    if (m_Equation_attr)
    {
        return *m_Equation_attr;
    }
    return ST_String::default_instance();
}

bool CT_STARTNUMBER::has_Figure_attr() const
{
    return m_has_Figure_attr;
}

void CT_STARTNUMBER::set_Figure_attr(const ST_String& _Figure_attr)
{
    m_has_Figure_attr = true;
    m_Figure_attr = new ST_String(_Figure_attr);
}

const ST_String& CT_STARTNUMBER::get_Figure_attr() const
{
    if (m_Figure_attr)
    {
        return *m_Figure_attr;
    }
    return ST_String::default_instance();
}

bool CT_STARTNUMBER::has_Page_attr() const
{
    return m_has_Page_attr;
}

void CT_STARTNUMBER::set_Page_attr(const ST_String& _Page_attr)
{
    m_has_Page_attr = true;
    m_Page_attr = new ST_String(_Page_attr);
}

const ST_String& CT_STARTNUMBER::get_Page_attr() const
{
    if (m_Page_attr)
    {
        return *m_Page_attr;
    }
    return ST_String::default_instance();
}

bool CT_STARTNUMBER::has_PageStartsOn_attr() const
{
    return m_has_PageStartsOn_attr;
}

void CT_STARTNUMBER::set_PageStartsOn_attr(const ST_String& _PageStartsOn_attr)
{
    m_has_PageStartsOn_attr = true;
    m_PageStartsOn_attr = new ST_String(_PageStartsOn_attr);
}

const ST_String& CT_STARTNUMBER::get_PageStartsOn_attr() const
{
    if (m_PageStartsOn_attr)
    {
        return *m_PageStartsOn_attr;
    }
    return ST_String::default_instance();
}

bool CT_STARTNUMBER::has_Table_attr() const
{
    return m_has_Table_attr;
}

void CT_STARTNUMBER::set_Table_attr(const ST_String& _Table_attr)
{
    m_has_Table_attr = true;
    m_Table_attr = new ST_String(_Table_attr);
}

const ST_String& CT_STARTNUMBER::get_Table_attr() const
{
    if (m_Table_attr)
    {
        return *m_Table_attr;
    }
    return ST_String::default_instance();
}

CT_STARTNUMBER* CT_STARTNUMBER::default_instance_ = NULL;

// CT_HIDE
CT_HIDE::CT_HIDE()
    :m_has_Border_attr(false),
     m_Border_attr(NULL),
     m_has_EmptyLine_attr(false),
     m_EmptyLine_attr(NULL),
     m_has_Fill_attr(false),
     m_Fill_attr(NULL),
     m_has_Footer_attr(false),
     m_Footer_attr(NULL),
     m_has_Header_attr(false),
     m_Header_attr(NULL),
     m_has_MasterPage_attr(false),
     m_MasterPage_attr(NULL),
     m_has_PageNumPos_attr(false),
     m_PageNumPos_attr(NULL)
{
}
CT_HIDE::~CT_HIDE()
{
    clear();
}
void CT_HIDE::clear()
{
    m_has_Border_attr = false;

    if (m_Border_attr)
    {
        delete m_Border_attr;
        m_Border_attr = NULL;
    }


    m_has_EmptyLine_attr = false;

    if (m_EmptyLine_attr)
    {
        delete m_EmptyLine_attr;
        m_EmptyLine_attr = NULL;
    }


    m_has_Fill_attr = false;

    if (m_Fill_attr)
    {
        delete m_Fill_attr;
        m_Fill_attr = NULL;
    }


    m_has_Footer_attr = false;

    if (m_Footer_attr)
    {
        delete m_Footer_attr;
        m_Footer_attr = NULL;
    }


    m_has_Header_attr = false;

    if (m_Header_attr)
    {
        delete m_Header_attr;
        m_Header_attr = NULL;
    }


    m_has_MasterPage_attr = false;

    if (m_MasterPage_attr)
    {
        delete m_MasterPage_attr;
        m_MasterPage_attr = NULL;
    }


    m_has_PageNumPos_attr = false;

    if (m_PageNumPos_attr)
    {
        delete m_PageNumPos_attr;
        m_PageNumPos_attr = NULL;
    }

}

void CT_HIDE::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_Border_attr)
    {
        m_Border_attr->toXmlAttr("Border", _outStream);
    }



    if (m_has_EmptyLine_attr)
    {
        m_EmptyLine_attr->toXmlAttr("EmptyLine", _outStream);
    }



    if (m_has_Fill_attr)
    {
        m_Fill_attr->toXmlAttr("Fill", _outStream);
    }



    if (m_has_Footer_attr)
    {
        m_Footer_attr->toXmlAttr("Footer", _outStream);
    }



    if (m_has_Header_attr)
    {
        m_Header_attr->toXmlAttr("Header", _outStream);
    }



    if (m_has_MasterPage_attr)
    {
        m_MasterPage_attr->toXmlAttr("MasterPage", _outStream);
    }



    if (m_has_PageNumPos_attr)
    {
        m_PageNumPos_attr->toXmlAttr("PageNumPos", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_HIDE& CT_HIDE::default_instance()
{
    if (!CT_HIDE::default_instance_)
    {
        CT_HIDE::default_instance_ = new CT_HIDE();
    }
    return *CT_HIDE::default_instance_;
}

bool CT_HIDE::has_Border_attr() const
{
    return m_has_Border_attr;
}

void CT_HIDE::set_Border_attr(const ST_String& _Border_attr)
{
    m_has_Border_attr = true;
    m_Border_attr = new ST_String(_Border_attr);
}

const ST_String& CT_HIDE::get_Border_attr() const
{
    if (m_Border_attr)
    {
        return *m_Border_attr;
    }
    return ST_String::default_instance();
}

bool CT_HIDE::has_EmptyLine_attr() const
{
    return m_has_EmptyLine_attr;
}

void CT_HIDE::set_EmptyLine_attr(const ST_String& _EmptyLine_attr)
{
    m_has_EmptyLine_attr = true;
    m_EmptyLine_attr = new ST_String(_EmptyLine_attr);
}

const ST_String& CT_HIDE::get_EmptyLine_attr() const
{
    if (m_EmptyLine_attr)
    {
        return *m_EmptyLine_attr;
    }
    return ST_String::default_instance();
}

bool CT_HIDE::has_Fill_attr() const
{
    return m_has_Fill_attr;
}

void CT_HIDE::set_Fill_attr(const ST_String& _Fill_attr)
{
    m_has_Fill_attr = true;
    m_Fill_attr = new ST_String(_Fill_attr);
}

const ST_String& CT_HIDE::get_Fill_attr() const
{
    if (m_Fill_attr)
    {
        return *m_Fill_attr;
    }
    return ST_String::default_instance();
}

bool CT_HIDE::has_Footer_attr() const
{
    return m_has_Footer_attr;
}

void CT_HIDE::set_Footer_attr(const ST_String& _Footer_attr)
{
    m_has_Footer_attr = true;
    m_Footer_attr = new ST_String(_Footer_attr);
}

const ST_String& CT_HIDE::get_Footer_attr() const
{
    if (m_Footer_attr)
    {
        return *m_Footer_attr;
    }
    return ST_String::default_instance();
}

bool CT_HIDE::has_Header_attr() const
{
    return m_has_Header_attr;
}

void CT_HIDE::set_Header_attr(const ST_String& _Header_attr)
{
    m_has_Header_attr = true;
    m_Header_attr = new ST_String(_Header_attr);
}

const ST_String& CT_HIDE::get_Header_attr() const
{
    if (m_Header_attr)
    {
        return *m_Header_attr;
    }
    return ST_String::default_instance();
}

bool CT_HIDE::has_MasterPage_attr() const
{
    return m_has_MasterPage_attr;
}

void CT_HIDE::set_MasterPage_attr(const ST_String& _MasterPage_attr)
{
    m_has_MasterPage_attr = true;
    m_MasterPage_attr = new ST_String(_MasterPage_attr);
}

const ST_String& CT_HIDE::get_MasterPage_attr() const
{
    if (m_MasterPage_attr)
    {
        return *m_MasterPage_attr;
    }
    return ST_String::default_instance();
}

bool CT_HIDE::has_PageNumPos_attr() const
{
    return m_has_PageNumPos_attr;
}

void CT_HIDE::set_PageNumPos_attr(const ST_String& _PageNumPos_attr)
{
    m_has_PageNumPos_attr = true;
    m_PageNumPos_attr = new ST_String(_PageNumPos_attr);
}

const ST_String& CT_HIDE::get_PageNumPos_attr() const
{
    if (m_PageNumPos_attr)
    {
        return *m_PageNumPos_attr;
    }
    return ST_String::default_instance();
}

CT_HIDE* CT_HIDE::default_instance_ = NULL;

// CT_PAGEMARGIN
CT_PAGEMARGIN::CT_PAGEMARGIN()
    :m_has_Bottom_attr(false),
     m_Bottom_attr(NULL),
     m_has_Footer_attr(false),
     m_Footer_attr(NULL),
     m_has_Gutter_attr(false),
     m_Gutter_attr(NULL),
     m_has_Header_attr(false),
     m_Header_attr(NULL),
     m_has_Left_attr(false),
     m_Left_attr(NULL),
     m_has_Right_attr(false),
     m_Right_attr(NULL),
     m_has_Top_attr(false),
     m_Top_attr(NULL)
{
}
CT_PAGEMARGIN::~CT_PAGEMARGIN()
{
    clear();
}
void CT_PAGEMARGIN::clear()
{
    m_has_Bottom_attr = false;

    if (m_Bottom_attr)
    {
        delete m_Bottom_attr;
        m_Bottom_attr = NULL;
    }


    m_has_Footer_attr = false;

    if (m_Footer_attr)
    {
        delete m_Footer_attr;
        m_Footer_attr = NULL;
    }


    m_has_Gutter_attr = false;

    if (m_Gutter_attr)
    {
        delete m_Gutter_attr;
        m_Gutter_attr = NULL;
    }


    m_has_Header_attr = false;

    if (m_Header_attr)
    {
        delete m_Header_attr;
        m_Header_attr = NULL;
    }


    m_has_Left_attr = false;

    if (m_Left_attr)
    {
        delete m_Left_attr;
        m_Left_attr = NULL;
    }


    m_has_Right_attr = false;

    if (m_Right_attr)
    {
        delete m_Right_attr;
        m_Right_attr = NULL;
    }


    m_has_Top_attr = false;

    if (m_Top_attr)
    {
        delete m_Top_attr;
        m_Top_attr = NULL;
    }

}

void CT_PAGEMARGIN::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_Bottom_attr)
    {
        m_Bottom_attr->toXmlAttr("Bottom", _outStream);
    }



    if (m_has_Footer_attr)
    {
        m_Footer_attr->toXmlAttr("Footer", _outStream);
    }



    if (m_has_Gutter_attr)
    {
        m_Gutter_attr->toXmlAttr("Gutter", _outStream);
    }



    if (m_has_Header_attr)
    {
        m_Header_attr->toXmlAttr("Header", _outStream);
    }



    if (m_has_Left_attr)
    {
        m_Left_attr->toXmlAttr("Left", _outStream);
    }



    if (m_has_Right_attr)
    {
        m_Right_attr->toXmlAttr("Right", _outStream);
    }



    if (m_has_Top_attr)
    {
        m_Top_attr->toXmlAttr("Top", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_PAGEMARGIN& CT_PAGEMARGIN::default_instance()
{
    if (!CT_PAGEMARGIN::default_instance_)
    {
        CT_PAGEMARGIN::default_instance_ = new CT_PAGEMARGIN();
    }
    return *CT_PAGEMARGIN::default_instance_;
}

bool CT_PAGEMARGIN::has_Bottom_attr() const
{
    return m_has_Bottom_attr;
}

void CT_PAGEMARGIN::set_Bottom_attr(const ST_String& _Bottom_attr)
{
    m_has_Bottom_attr = true;
    m_Bottom_attr = new ST_String(_Bottom_attr);
}

const ST_String& CT_PAGEMARGIN::get_Bottom_attr() const
{
    if (m_Bottom_attr)
    {
        return *m_Bottom_attr;
    }
    return ST_String::default_instance();
}

bool CT_PAGEMARGIN::has_Footer_attr() const
{
    return m_has_Footer_attr;
}

void CT_PAGEMARGIN::set_Footer_attr(const ST_String& _Footer_attr)
{
    m_has_Footer_attr = true;
    m_Footer_attr = new ST_String(_Footer_attr);
}

const ST_String& CT_PAGEMARGIN::get_Footer_attr() const
{
    if (m_Footer_attr)
    {
        return *m_Footer_attr;
    }
    return ST_String::default_instance();
}

bool CT_PAGEMARGIN::has_Gutter_attr() const
{
    return m_has_Gutter_attr;
}

void CT_PAGEMARGIN::set_Gutter_attr(const ST_String& _Gutter_attr)
{
    m_has_Gutter_attr = true;
    m_Gutter_attr = new ST_String(_Gutter_attr);
}

const ST_String& CT_PAGEMARGIN::get_Gutter_attr() const
{
    if (m_Gutter_attr)
    {
        return *m_Gutter_attr;
    }
    return ST_String::default_instance();
}

bool CT_PAGEMARGIN::has_Header_attr() const
{
    return m_has_Header_attr;
}

void CT_PAGEMARGIN::set_Header_attr(const ST_String& _Header_attr)
{
    m_has_Header_attr = true;
    m_Header_attr = new ST_String(_Header_attr);
}

const ST_String& CT_PAGEMARGIN::get_Header_attr() const
{
    if (m_Header_attr)
    {
        return *m_Header_attr;
    }
    return ST_String::default_instance();
}

bool CT_PAGEMARGIN::has_Left_attr() const
{
    return m_has_Left_attr;
}

void CT_PAGEMARGIN::set_Left_attr(const ST_String& _Left_attr)
{
    m_has_Left_attr = true;
    m_Left_attr = new ST_String(_Left_attr);
}

const ST_String& CT_PAGEMARGIN::get_Left_attr() const
{
    if (m_Left_attr)
    {
        return *m_Left_attr;
    }
    return ST_String::default_instance();
}

bool CT_PAGEMARGIN::has_Right_attr() const
{
    return m_has_Right_attr;
}

void CT_PAGEMARGIN::set_Right_attr(const ST_String& _Right_attr)
{
    m_has_Right_attr = true;
    m_Right_attr = new ST_String(_Right_attr);
}

const ST_String& CT_PAGEMARGIN::get_Right_attr() const
{
    if (m_Right_attr)
    {
        return *m_Right_attr;
    }
    return ST_String::default_instance();
}

bool CT_PAGEMARGIN::has_Top_attr() const
{
    return m_has_Top_attr;
}

void CT_PAGEMARGIN::set_Top_attr(const ST_String& _Top_attr)
{
    m_has_Top_attr = true;
    m_Top_attr = new ST_String(_Top_attr);
}

const ST_String& CT_PAGEMARGIN::get_Top_attr() const
{
    if (m_Top_attr)
    {
        return *m_Top_attr;
    }
    return ST_String::default_instance();
}

CT_PAGEMARGIN* CT_PAGEMARGIN::default_instance_ = NULL;

// CT_PAGEDEF
CT_PAGEDEF::CT_PAGEDEF()
    :m_has_PAGEMARGIN(false),
     m_PAGEMARGIN(NULL),
     m_has_GutterType_attr(false),
     m_GutterType_attr(NULL),
     m_has_Height_attr(false),
     m_Height_attr(NULL),
     m_has_Landscape_attr(false),
     m_Landscape_attr(NULL),
     m_has_Width_attr(false),
     m_Width_attr(NULL)
{
}
CT_PAGEDEF::~CT_PAGEDEF()
{
    clear();
}
bool CT_PAGEDEF::has_PAGEMARGIN() const
{
    return m_has_PAGEMARGIN;
}

CT_PAGEMARGIN* CT_PAGEDEF::mutable_PAGEMARGIN()
{
    m_has_PAGEMARGIN = true;
    if (!m_PAGEMARGIN)
    {
        m_PAGEMARGIN = new CT_PAGEMARGIN();
    }
    return m_PAGEMARGIN;
}

const CT_PAGEMARGIN& CT_PAGEDEF::get_PAGEMARGIN() const
{
    if (m_PAGEMARGIN)
    {
        return *m_PAGEMARGIN;
    }
    return CT_PAGEMARGIN::default_instance();
}

void CT_PAGEDEF::clear()
{
    m_has_GutterType_attr = false;

    if (m_GutterType_attr)
    {
        delete m_GutterType_attr;
        m_GutterType_attr = NULL;
    }


    m_has_Height_attr = false;

    if (m_Height_attr)
    {
        delete m_Height_attr;
        m_Height_attr = NULL;
    }


    m_has_Landscape_attr = false;

    if (m_Landscape_attr)
    {
        delete m_Landscape_attr;
        m_Landscape_attr = NULL;
    }


    m_has_Width_attr = false;

    if (m_Width_attr)
    {
        delete m_Width_attr;
        m_Width_attr = NULL;
    }


    m_has_PAGEMARGIN = false;

    if (m_PAGEMARGIN)
    {
        delete m_PAGEMARGIN;
        m_PAGEMARGIN = NULL;
    }

}

void CT_PAGEDEF::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_GutterType_attr)
    {
        m_GutterType_attr->toXmlAttr("GutterType", _outStream);
    }



    if (m_has_Height_attr)
    {
        m_Height_attr->toXmlAttr("Height", _outStream);
    }



    if (m_has_Landscape_attr)
    {
        m_Landscape_attr->toXmlAttr("Landscape", _outStream);
    }



    if (m_has_Width_attr)
    {
        m_Width_attr->toXmlAttr("Width", _outStream);
    }

    _outStream << ">";


    if (m_has_PAGEMARGIN)
    {
        m_PAGEMARGIN->toXmlElem("PAGEMARGIN", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_PAGEDEF& CT_PAGEDEF::default_instance()
{
    if (!CT_PAGEDEF::default_instance_)
    {
        CT_PAGEDEF::default_instance_ = new CT_PAGEDEF();
    }
    return *CT_PAGEDEF::default_instance_;
}

bool CT_PAGEDEF::has_GutterType_attr() const
{
    return m_has_GutterType_attr;
}

void CT_PAGEDEF::set_GutterType_attr(const ST_String& _GutterType_attr)
{
    m_has_GutterType_attr = true;
    m_GutterType_attr = new ST_String(_GutterType_attr);
}

const ST_String& CT_PAGEDEF::get_GutterType_attr() const
{
    if (m_GutterType_attr)
    {
        return *m_GutterType_attr;
    }
    return ST_String::default_instance();
}

bool CT_PAGEDEF::has_Height_attr() const
{
    return m_has_Height_attr;
}

void CT_PAGEDEF::set_Height_attr(const ST_String& _Height_attr)
{
    m_has_Height_attr = true;
    m_Height_attr = new ST_String(_Height_attr);
}

const ST_String& CT_PAGEDEF::get_Height_attr() const
{
    if (m_Height_attr)
    {
        return *m_Height_attr;
    }
    return ST_String::default_instance();
}

bool CT_PAGEDEF::has_Landscape_attr() const
{
    return m_has_Landscape_attr;
}

void CT_PAGEDEF::set_Landscape_attr(const ST_String& _Landscape_attr)
{
    m_has_Landscape_attr = true;
    m_Landscape_attr = new ST_String(_Landscape_attr);
}

const ST_String& CT_PAGEDEF::get_Landscape_attr() const
{
    if (m_Landscape_attr)
    {
        return *m_Landscape_attr;
    }
    return ST_String::default_instance();
}

bool CT_PAGEDEF::has_Width_attr() const
{
    return m_has_Width_attr;
}

void CT_PAGEDEF::set_Width_attr(const ST_String& _Width_attr)
{
    m_has_Width_attr = true;
    m_Width_attr = new ST_String(_Width_attr);
}

const ST_String& CT_PAGEDEF::get_Width_attr() const
{
    if (m_Width_attr)
    {
        return *m_Width_attr;
    }
    return ST_String::default_instance();
}

CT_PAGEDEF* CT_PAGEDEF::default_instance_ = NULL;

// CT_PAGEOFFSET
CT_PAGEOFFSET::CT_PAGEOFFSET()
    :m_has_Bottom_attr(false),
     m_Bottom_attr(NULL),
     m_has_Left_attr(false),
     m_Left_attr(NULL),
     m_has_Right_attr(false),
     m_Right_attr(NULL),
     m_has_Top_attr(false),
     m_Top_attr(NULL)
{
}
CT_PAGEOFFSET::~CT_PAGEOFFSET()
{
    clear();
}
void CT_PAGEOFFSET::clear()
{
    m_has_Bottom_attr = false;

    if (m_Bottom_attr)
    {
        delete m_Bottom_attr;
        m_Bottom_attr = NULL;
    }


    m_has_Left_attr = false;

    if (m_Left_attr)
    {
        delete m_Left_attr;
        m_Left_attr = NULL;
    }


    m_has_Right_attr = false;

    if (m_Right_attr)
    {
        delete m_Right_attr;
        m_Right_attr = NULL;
    }


    m_has_Top_attr = false;

    if (m_Top_attr)
    {
        delete m_Top_attr;
        m_Top_attr = NULL;
    }

}

void CT_PAGEOFFSET::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_Bottom_attr)
    {
        m_Bottom_attr->toXmlAttr("Bottom", _outStream);
    }



    if (m_has_Left_attr)
    {
        m_Left_attr->toXmlAttr("Left", _outStream);
    }



    if (m_has_Right_attr)
    {
        m_Right_attr->toXmlAttr("Right", _outStream);
    }



    if (m_has_Top_attr)
    {
        m_Top_attr->toXmlAttr("Top", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_PAGEOFFSET& CT_PAGEOFFSET::default_instance()
{
    if (!CT_PAGEOFFSET::default_instance_)
    {
        CT_PAGEOFFSET::default_instance_ = new CT_PAGEOFFSET();
    }
    return *CT_PAGEOFFSET::default_instance_;
}

bool CT_PAGEOFFSET::has_Bottom_attr() const
{
    return m_has_Bottom_attr;
}

void CT_PAGEOFFSET::set_Bottom_attr(const ST_String& _Bottom_attr)
{
    m_has_Bottom_attr = true;
    m_Bottom_attr = new ST_String(_Bottom_attr);
}

const ST_String& CT_PAGEOFFSET::get_Bottom_attr() const
{
    if (m_Bottom_attr)
    {
        return *m_Bottom_attr;
    }
    return ST_String::default_instance();
}

bool CT_PAGEOFFSET::has_Left_attr() const
{
    return m_has_Left_attr;
}

void CT_PAGEOFFSET::set_Left_attr(const ST_String& _Left_attr)
{
    m_has_Left_attr = true;
    m_Left_attr = new ST_String(_Left_attr);
}

const ST_String& CT_PAGEOFFSET::get_Left_attr() const
{
    if (m_Left_attr)
    {
        return *m_Left_attr;
    }
    return ST_String::default_instance();
}

bool CT_PAGEOFFSET::has_Right_attr() const
{
    return m_has_Right_attr;
}

void CT_PAGEOFFSET::set_Right_attr(const ST_String& _Right_attr)
{
    m_has_Right_attr = true;
    m_Right_attr = new ST_String(_Right_attr);
}

const ST_String& CT_PAGEOFFSET::get_Right_attr() const
{
    if (m_Right_attr)
    {
        return *m_Right_attr;
    }
    return ST_String::default_instance();
}

bool CT_PAGEOFFSET::has_Top_attr() const
{
    return m_has_Top_attr;
}

void CT_PAGEOFFSET::set_Top_attr(const ST_String& _Top_attr)
{
    m_has_Top_attr = true;
    m_Top_attr = new ST_String(_Top_attr);
}

const ST_String& CT_PAGEOFFSET::get_Top_attr() const
{
    if (m_Top_attr)
    {
        return *m_Top_attr;
    }
    return ST_String::default_instance();
}

CT_PAGEOFFSET* CT_PAGEOFFSET::default_instance_ = NULL;

// CT_PAGEBORDERFILL
CT_PAGEBORDERFILL::CT_PAGEBORDERFILL()
    :m_has_PAGEOFFSET(false),
     m_PAGEOFFSET(NULL),
     m_has_FillArea_attr(false),
     m_FillArea_attr(NULL),
     m_has_FooterInside_attr(false),
     m_FooterInside_attr(NULL),
     m_has_HeaderInside_attr(false),
     m_HeaderInside_attr(NULL),
     m_has_TextBorder_attr(false),
     m_TextBorder_attr(NULL),
     m_has_Type_attr(false),
     m_Type_attr(NULL)
{
}
CT_PAGEBORDERFILL::~CT_PAGEBORDERFILL()
{
    clear();
}
bool CT_PAGEBORDERFILL::has_PAGEOFFSET() const
{
    return m_has_PAGEOFFSET;
}

CT_PAGEOFFSET* CT_PAGEBORDERFILL::mutable_PAGEOFFSET()
{
    m_has_PAGEOFFSET = true;
    if (!m_PAGEOFFSET)
    {
        m_PAGEOFFSET = new CT_PAGEOFFSET();
    }
    return m_PAGEOFFSET;
}

const CT_PAGEOFFSET& CT_PAGEBORDERFILL::get_PAGEOFFSET() const
{
    if (m_PAGEOFFSET)
    {
        return *m_PAGEOFFSET;
    }
    return CT_PAGEOFFSET::default_instance();
}

void CT_PAGEBORDERFILL::clear()
{
    m_has_FillArea_attr = false;

    if (m_FillArea_attr)
    {
        delete m_FillArea_attr;
        m_FillArea_attr = NULL;
    }


    m_has_FooterInside_attr = false;

    if (m_FooterInside_attr)
    {
        delete m_FooterInside_attr;
        m_FooterInside_attr = NULL;
    }


    m_has_HeaderInside_attr = false;

    if (m_HeaderInside_attr)
    {
        delete m_HeaderInside_attr;
        m_HeaderInside_attr = NULL;
    }


    m_has_TextBorder_attr = false;

    if (m_TextBorder_attr)
    {
        delete m_TextBorder_attr;
        m_TextBorder_attr = NULL;
    }


    m_has_Type_attr = false;

    if (m_Type_attr)
    {
        delete m_Type_attr;
        m_Type_attr = NULL;
    }


    m_has_PAGEOFFSET = false;

    if (m_PAGEOFFSET)
    {
        delete m_PAGEOFFSET;
        m_PAGEOFFSET = NULL;
    }

}

void CT_PAGEBORDERFILL::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_FillArea_attr)
    {
        m_FillArea_attr->toXmlAttr("FillArea", _outStream);
    }



    if (m_has_FooterInside_attr)
    {
        m_FooterInside_attr->toXmlAttr("FooterInside", _outStream);
    }



    if (m_has_HeaderInside_attr)
    {
        m_HeaderInside_attr->toXmlAttr("HeaderInside", _outStream);
    }



    if (m_has_TextBorder_attr)
    {
        m_TextBorder_attr->toXmlAttr("TextBorder", _outStream);
    }



    if (m_has_Type_attr)
    {
        m_Type_attr->toXmlAttr("Type", _outStream);
    }

    _outStream << ">";


    if (m_has_PAGEOFFSET)
    {
        m_PAGEOFFSET->toXmlElem("PAGEOFFSET", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_PAGEBORDERFILL& CT_PAGEBORDERFILL::default_instance()
{
    if (!CT_PAGEBORDERFILL::default_instance_)
    {
        CT_PAGEBORDERFILL::default_instance_ = new CT_PAGEBORDERFILL();
    }
    return *CT_PAGEBORDERFILL::default_instance_;
}

bool CT_PAGEBORDERFILL::has_FillArea_attr() const
{
    return m_has_FillArea_attr;
}

void CT_PAGEBORDERFILL::set_FillArea_attr(const ST_String& _FillArea_attr)
{
    m_has_FillArea_attr = true;
    m_FillArea_attr = new ST_String(_FillArea_attr);
}

const ST_String& CT_PAGEBORDERFILL::get_FillArea_attr() const
{
    if (m_FillArea_attr)
    {
        return *m_FillArea_attr;
    }
    return ST_String::default_instance();
}

bool CT_PAGEBORDERFILL::has_FooterInside_attr() const
{
    return m_has_FooterInside_attr;
}

void CT_PAGEBORDERFILL::set_FooterInside_attr(const ST_String& _FooterInside_attr)
{
    m_has_FooterInside_attr = true;
    m_FooterInside_attr = new ST_String(_FooterInside_attr);
}

const ST_String& CT_PAGEBORDERFILL::get_FooterInside_attr() const
{
    if (m_FooterInside_attr)
    {
        return *m_FooterInside_attr;
    }
    return ST_String::default_instance();
}

bool CT_PAGEBORDERFILL::has_HeaderInside_attr() const
{
    return m_has_HeaderInside_attr;
}

void CT_PAGEBORDERFILL::set_HeaderInside_attr(const ST_String& _HeaderInside_attr)
{
    m_has_HeaderInside_attr = true;
    m_HeaderInside_attr = new ST_String(_HeaderInside_attr);
}

const ST_String& CT_PAGEBORDERFILL::get_HeaderInside_attr() const
{
    if (m_HeaderInside_attr)
    {
        return *m_HeaderInside_attr;
    }
    return ST_String::default_instance();
}

bool CT_PAGEBORDERFILL::has_TextBorder_attr() const
{
    return m_has_TextBorder_attr;
}

void CT_PAGEBORDERFILL::set_TextBorder_attr(const ST_String& _TextBorder_attr)
{
    m_has_TextBorder_attr = true;
    m_TextBorder_attr = new ST_String(_TextBorder_attr);
}

const ST_String& CT_PAGEBORDERFILL::get_TextBorder_attr() const
{
    if (m_TextBorder_attr)
    {
        return *m_TextBorder_attr;
    }
    return ST_String::default_instance();
}

bool CT_PAGEBORDERFILL::has_Type_attr() const
{
    return m_has_Type_attr;
}

void CT_PAGEBORDERFILL::set_Type_attr(const ST_String& _Type_attr)
{
    m_has_Type_attr = true;
    m_Type_attr = new ST_String(_Type_attr);
}

const ST_String& CT_PAGEBORDERFILL::get_Type_attr() const
{
    if (m_Type_attr)
    {
        return *m_Type_attr;
    }
    return ST_String::default_instance();
}

CT_PAGEBORDERFILL* CT_PAGEBORDERFILL::default_instance_ = NULL;

// CT_SECDEF
CT_SECDEF::CT_SECDEF()
    :m_has_STARTNUMBER(false),
     m_STARTNUMBER(NULL),
     m_has_HIDE(false),
     m_HIDE(NULL),
     m_has_PAGEDEF(false),
     m_PAGEDEF(NULL),
     m_has_FOOTNOTESHAPE(false),
     m_FOOTNOTESHAPE(NULL),
     m_has_ENDNOTESHAPE(false),
     m_ENDNOTESHAPE(NULL),
     m_has_CharGrid_attr(false),
     m_CharGrid_attr(NULL),
     m_has_FirstBorder_attr(false),
     m_FirstBorder_attr(NULL),
     m_has_FirstFill_attr(false),
     m_FirstFill_attr(NULL),
     m_has_LineGrid_attr(false),
     m_LineGrid_attr(NULL),
     m_has_OutlineShape_attr(false),
     m_OutlineShape_attr(NULL),
     m_has_SpaceColumns_attr(false),
     m_SpaceColumns_attr(NULL),
     m_has_TabStop_attr(false),
     m_TabStop_attr(NULL),
     m_has_TextDirection_attr(false),
     m_TextDirection_attr(NULL),
     m_has_TextVerticalWidthHead_attr(false),
     m_TextVerticalWidthHead_attr(NULL)
{
}
CT_SECDEF::~CT_SECDEF()
{
    clear();
}
bool CT_SECDEF::has_STARTNUMBER() const
{
    return m_has_STARTNUMBER;
}

CT_STARTNUMBER* CT_SECDEF::mutable_STARTNUMBER()
{
    m_has_STARTNUMBER = true;
    if (!m_STARTNUMBER)
    {
        m_STARTNUMBER = new CT_STARTNUMBER();
    }
    return m_STARTNUMBER;
}

const CT_STARTNUMBER& CT_SECDEF::get_STARTNUMBER() const
{
    if (m_STARTNUMBER)
    {
        return *m_STARTNUMBER;
    }
    return CT_STARTNUMBER::default_instance();
}

bool CT_SECDEF::has_HIDE() const
{
    return m_has_HIDE;
}

CT_HIDE* CT_SECDEF::mutable_HIDE()
{
    m_has_HIDE = true;
    if (!m_HIDE)
    {
        m_HIDE = new CT_HIDE();
    }
    return m_HIDE;
}

const CT_HIDE& CT_SECDEF::get_HIDE() const
{
    if (m_HIDE)
    {
        return *m_HIDE;
    }
    return CT_HIDE::default_instance();
}

bool CT_SECDEF::has_PAGEDEF() const
{
    return m_has_PAGEDEF;
}

CT_PAGEDEF* CT_SECDEF::mutable_PAGEDEF()
{
    m_has_PAGEDEF = true;
    if (!m_PAGEDEF)
    {
        m_PAGEDEF = new CT_PAGEDEF();
    }
    return m_PAGEDEF;
}

const CT_PAGEDEF& CT_SECDEF::get_PAGEDEF() const
{
    if (m_PAGEDEF)
    {
        return *m_PAGEDEF;
    }
    return CT_PAGEDEF::default_instance();
}

bool CT_SECDEF::has_FOOTNOTESHAPE() const
{
    return m_has_FOOTNOTESHAPE;
}

CT_NOTESHAPE* CT_SECDEF::mutable_FOOTNOTESHAPE()
{
    m_has_FOOTNOTESHAPE = true;
    if (!m_FOOTNOTESHAPE)
    {
        m_FOOTNOTESHAPE = new CT_NOTESHAPE();
    }
    return m_FOOTNOTESHAPE;
}

const CT_NOTESHAPE& CT_SECDEF::get_FOOTNOTESHAPE() const
{
    if (m_FOOTNOTESHAPE)
    {
        return *m_FOOTNOTESHAPE;
    }
    return CT_NOTESHAPE::default_instance();
}

bool CT_SECDEF::has_ENDNOTESHAPE() const
{
    return m_has_ENDNOTESHAPE;
}

CT_NOTESHAPE* CT_SECDEF::mutable_ENDNOTESHAPE()
{
    m_has_ENDNOTESHAPE = true;
    if (!m_ENDNOTESHAPE)
    {
        m_ENDNOTESHAPE = new CT_NOTESHAPE();
    }
    return m_ENDNOTESHAPE;
}

const CT_NOTESHAPE& CT_SECDEF::get_ENDNOTESHAPE() const
{
    if (m_ENDNOTESHAPE)
    {
        return *m_ENDNOTESHAPE;
    }
    return CT_NOTESHAPE::default_instance();
}

CT_PAGEBORDERFILL* CT_SECDEF::add_PAGEBORDERFILL()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_PAGEBORDERFILL* pNewChild = pChildGroup->mutable_PAGEBORDERFILL();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

void CT_SECDEF::clear()
{
    m_has_CharGrid_attr = false;

    if (m_CharGrid_attr)
    {
        delete m_CharGrid_attr;
        m_CharGrid_attr = NULL;
    }


    m_has_FirstBorder_attr = false;

    if (m_FirstBorder_attr)
    {
        delete m_FirstBorder_attr;
        m_FirstBorder_attr = NULL;
    }


    m_has_FirstFill_attr = false;

    if (m_FirstFill_attr)
    {
        delete m_FirstFill_attr;
        m_FirstFill_attr = NULL;
    }


    m_has_LineGrid_attr = false;

    if (m_LineGrid_attr)
    {
        delete m_LineGrid_attr;
        m_LineGrid_attr = NULL;
    }


    m_has_OutlineShape_attr = false;

    if (m_OutlineShape_attr)
    {
        delete m_OutlineShape_attr;
        m_OutlineShape_attr = NULL;
    }


    m_has_SpaceColumns_attr = false;

    if (m_SpaceColumns_attr)
    {
        delete m_SpaceColumns_attr;
        m_SpaceColumns_attr = NULL;
    }


    m_has_TabStop_attr = false;

    if (m_TabStop_attr)
    {
        delete m_TabStop_attr;
        m_TabStop_attr = NULL;
    }


    m_has_TextDirection_attr = false;

    if (m_TextDirection_attr)
    {
        delete m_TextDirection_attr;
        m_TextDirection_attr = NULL;
    }


    m_has_TextVerticalWidthHead_attr = false;

    if (m_TextVerticalWidthHead_attr)
    {
        delete m_TextVerticalWidthHead_attr;
        m_TextVerticalWidthHead_attr = NULL;
    }


    m_has_STARTNUMBER = false;

    if (m_STARTNUMBER)
    {
        delete m_STARTNUMBER;
        m_STARTNUMBER = NULL;
    }


    m_has_HIDE = false;

    if (m_HIDE)
    {
        delete m_HIDE;
        m_HIDE = NULL;
    }


    m_has_PAGEDEF = false;

    if (m_PAGEDEF)
    {
        delete m_PAGEDEF;
        m_PAGEDEF = NULL;
    }


    m_has_FOOTNOTESHAPE = false;

    if (m_FOOTNOTESHAPE)
    {
        delete m_FOOTNOTESHAPE;
        m_FOOTNOTESHAPE = NULL;
    }


    m_has_ENDNOTESHAPE = false;

    if (m_ENDNOTESHAPE)
    {
        delete m_ENDNOTESHAPE;
        m_ENDNOTESHAPE = NULL;
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

void CT_SECDEF::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_CharGrid_attr)
    {
        m_CharGrid_attr->toXmlAttr("CharGrid", _outStream);
    }



    if (m_has_FirstBorder_attr)
    {
        m_FirstBorder_attr->toXmlAttr("FirstBorder", _outStream);
    }



    if (m_has_FirstFill_attr)
    {
        m_FirstFill_attr->toXmlAttr("FirstFill", _outStream);
    }



    if (m_has_LineGrid_attr)
    {
        m_LineGrid_attr->toXmlAttr("LineGrid", _outStream);
    }



    if (m_has_OutlineShape_attr)
    {
        m_OutlineShape_attr->toXmlAttr("OutlineShape", _outStream);
    }



    if (m_has_SpaceColumns_attr)
    {
        m_SpaceColumns_attr->toXmlAttr("SpaceColumns", _outStream);
    }



    if (m_has_TabStop_attr)
    {
        m_TabStop_attr->toXmlAttr("TabStop", _outStream);
    }



    if (m_has_TextDirection_attr)
    {
        m_TextDirection_attr->toXmlAttr("TextDirection", _outStream);
    }



    if (m_has_TextVerticalWidthHead_attr)
    {
        m_TextVerticalWidthHead_attr->toXmlAttr("TextVerticalWidthHead", _outStream);
    }

    _outStream << ">";


    if (m_has_STARTNUMBER)
    {
        m_STARTNUMBER->toXmlElem("STARTNUMBER", "", _outStream);
    }


    if (m_has_HIDE)
    {
        m_HIDE->toXmlElem("HIDE", "", _outStream);
    }


    if (m_has_PAGEDEF)
    {
        m_PAGEDEF->toXmlElem("PAGEDEF", "", _outStream);
    }


    if (m_has_FOOTNOTESHAPE)
    {
        m_FOOTNOTESHAPE->toXmlElem("FOOTNOTESHAPE", "", _outStream);
    }


    if (m_has_ENDNOTESHAPE)
    {
        m_ENDNOTESHAPE->toXmlElem("ENDNOTESHAPE", "", _outStream);
    }

    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_PAGEBORDERFILL())
            {
                (*iter)->get_PAGEBORDERFILL().toXmlElem("PAGEBORDERFILL", "", _outStream);
            }


        }
    }

    _outStream << "</" << _elemName << ">";
}

const CT_SECDEF& CT_SECDEF::default_instance()
{
    if (!CT_SECDEF::default_instance_)
    {
        CT_SECDEF::default_instance_ = new CT_SECDEF();
    }
    return *CT_SECDEF::default_instance_;
}

bool CT_SECDEF::has_CharGrid_attr() const
{
    return m_has_CharGrid_attr;
}

void CT_SECDEF::set_CharGrid_attr(const ST_String& _CharGrid_attr)
{
    m_has_CharGrid_attr = true;
    m_CharGrid_attr = new ST_String(_CharGrid_attr);
}

const ST_String& CT_SECDEF::get_CharGrid_attr() const
{
    if (m_CharGrid_attr)
    {
        return *m_CharGrid_attr;
    }
    return ST_String::default_instance();
}

bool CT_SECDEF::has_FirstBorder_attr() const
{
    return m_has_FirstBorder_attr;
}

void CT_SECDEF::set_FirstBorder_attr(const ST_String& _FirstBorder_attr)
{
    m_has_FirstBorder_attr = true;
    m_FirstBorder_attr = new ST_String(_FirstBorder_attr);
}

const ST_String& CT_SECDEF::get_FirstBorder_attr() const
{
    if (m_FirstBorder_attr)
    {
        return *m_FirstBorder_attr;
    }
    return ST_String::default_instance();
}

bool CT_SECDEF::has_FirstFill_attr() const
{
    return m_has_FirstFill_attr;
}

void CT_SECDEF::set_FirstFill_attr(const ST_String& _FirstFill_attr)
{
    m_has_FirstFill_attr = true;
    m_FirstFill_attr = new ST_String(_FirstFill_attr);
}

const ST_String& CT_SECDEF::get_FirstFill_attr() const
{
    if (m_FirstFill_attr)
    {
        return *m_FirstFill_attr;
    }
    return ST_String::default_instance();
}

bool CT_SECDEF::has_LineGrid_attr() const
{
    return m_has_LineGrid_attr;
}

void CT_SECDEF::set_LineGrid_attr(const ST_String& _LineGrid_attr)
{
    m_has_LineGrid_attr = true;
    m_LineGrid_attr = new ST_String(_LineGrid_attr);
}

const ST_String& CT_SECDEF::get_LineGrid_attr() const
{
    if (m_LineGrid_attr)
    {
        return *m_LineGrid_attr;
    }
    return ST_String::default_instance();
}

bool CT_SECDEF::has_OutlineShape_attr() const
{
    return m_has_OutlineShape_attr;
}

void CT_SECDEF::set_OutlineShape_attr(const ST_String& _OutlineShape_attr)
{
    m_has_OutlineShape_attr = true;
    m_OutlineShape_attr = new ST_String(_OutlineShape_attr);
}

const ST_String& CT_SECDEF::get_OutlineShape_attr() const
{
    if (m_OutlineShape_attr)
    {
        return *m_OutlineShape_attr;
    }
    return ST_String::default_instance();
}

bool CT_SECDEF::has_SpaceColumns_attr() const
{
    return m_has_SpaceColumns_attr;
}

void CT_SECDEF::set_SpaceColumns_attr(const ST_String& _SpaceColumns_attr)
{
    m_has_SpaceColumns_attr = true;
    m_SpaceColumns_attr = new ST_String(_SpaceColumns_attr);
}

const ST_String& CT_SECDEF::get_SpaceColumns_attr() const
{
    if (m_SpaceColumns_attr)
    {
        return *m_SpaceColumns_attr;
    }
    return ST_String::default_instance();
}

bool CT_SECDEF::has_TabStop_attr() const
{
    return m_has_TabStop_attr;
}

void CT_SECDEF::set_TabStop_attr(const ST_String& _TabStop_attr)
{
    m_has_TabStop_attr = true;
    m_TabStop_attr = new ST_String(_TabStop_attr);
}

const ST_String& CT_SECDEF::get_TabStop_attr() const
{
    if (m_TabStop_attr)
    {
        return *m_TabStop_attr;
    }
    return ST_String::default_instance();
}

bool CT_SECDEF::has_TextDirection_attr() const
{
    return m_has_TextDirection_attr;
}

void CT_SECDEF::set_TextDirection_attr(const ST_String& _TextDirection_attr)
{
    m_has_TextDirection_attr = true;
    m_TextDirection_attr = new ST_String(_TextDirection_attr);
}

const ST_String& CT_SECDEF::get_TextDirection_attr() const
{
    if (m_TextDirection_attr)
    {
        return *m_TextDirection_attr;
    }
    return ST_String::default_instance();
}

bool CT_SECDEF::has_TextVerticalWidthHead_attr() const
{
    return m_has_TextVerticalWidthHead_attr;
}

void CT_SECDEF::set_TextVerticalWidthHead_attr(const ST_String& _TextVerticalWidthHead_attr)
{
    m_has_TextVerticalWidthHead_attr = true;
    m_TextVerticalWidthHead_attr = new ST_String(_TextVerticalWidthHead_attr);
}

const ST_String& CT_SECDEF::get_TextVerticalWidthHead_attr() const
{
    if (m_TextVerticalWidthHead_attr)
    {
        return *m_TextVerticalWidthHead_attr;
    }
    return ST_String::default_instance();
}


// CT_SECDEF::ChildGroup_1
CT_SECDEF::ChildGroup_1::ChildGroup_1()
    :m_has_PAGEBORDERFILL(false),
     m_PAGEBORDERFILL(NULL)
{
}
bool CT_SECDEF::ChildGroup_1::has_PAGEBORDERFILL() const
{
    return m_has_PAGEBORDERFILL;
}

CT_PAGEBORDERFILL* CT_SECDEF::ChildGroup_1::mutable_PAGEBORDERFILL()
{

    m_has_PAGEBORDERFILL = true;
    if (!m_PAGEBORDERFILL)
    {
        m_PAGEBORDERFILL = new CT_PAGEBORDERFILL();
    }
    return m_PAGEBORDERFILL;
}

const CT_PAGEBORDERFILL& CT_SECDEF::ChildGroup_1::get_PAGEBORDERFILL() const
{
    if (m_PAGEBORDERFILL)
    {
        return *m_PAGEBORDERFILL;
    }
    return CT_PAGEBORDERFILL::default_instance();
}

CT_SECDEF* CT_SECDEF::default_instance_ = NULL;

// CT_COLDEF
CT_COLDEF::CT_COLDEF()
    :m_has_Count_attr(false),
     m_Count_attr(NULL),
     m_has_Layout_attr(false),
     m_Layout_attr(NULL),
     m_has_SameGap_attr(false),
     m_SameGap_attr(NULL),
     m_has_SameSize_attr(false),
     m_SameSize_attr(NULL),
     m_has_Type_attr(false),
     m_Type_attr(NULL)
{
}
CT_COLDEF::~CT_COLDEF()
{
    clear();
}
void CT_COLDEF::clear()
{
    m_has_Count_attr = false;

    if (m_Count_attr)
    {
        delete m_Count_attr;
        m_Count_attr = NULL;
    }


    m_has_Layout_attr = false;

    if (m_Layout_attr)
    {
        delete m_Layout_attr;
        m_Layout_attr = NULL;
    }


    m_has_SameGap_attr = false;

    if (m_SameGap_attr)
    {
        delete m_SameGap_attr;
        m_SameGap_attr = NULL;
    }


    m_has_SameSize_attr = false;

    if (m_SameSize_attr)
    {
        delete m_SameSize_attr;
        m_SameSize_attr = NULL;
    }


    m_has_Type_attr = false;

    if (m_Type_attr)
    {
        delete m_Type_attr;
        m_Type_attr = NULL;
    }

}

void CT_COLDEF::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_Count_attr)
    {
        m_Count_attr->toXmlAttr("Count", _outStream);
    }



    if (m_has_Layout_attr)
    {
        m_Layout_attr->toXmlAttr("Layout", _outStream);
    }



    if (m_has_SameGap_attr)
    {
        m_SameGap_attr->toXmlAttr("SameGap", _outStream);
    }



    if (m_has_SameSize_attr)
    {
        m_SameSize_attr->toXmlAttr("SameSize", _outStream);
    }



    if (m_has_Type_attr)
    {
        m_Type_attr->toXmlAttr("Type", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_COLDEF& CT_COLDEF::default_instance()
{
    if (!CT_COLDEF::default_instance_)
    {
        CT_COLDEF::default_instance_ = new CT_COLDEF();
    }
    return *CT_COLDEF::default_instance_;
}

bool CT_COLDEF::has_Count_attr() const
{
    return m_has_Count_attr;
}

void CT_COLDEF::set_Count_attr(const ST_UnsignedDecimalNumber& _Count_attr)
{
    m_has_Count_attr = true;
    m_Count_attr = new ST_UnsignedDecimalNumber(_Count_attr);
}

const ST_UnsignedDecimalNumber& CT_COLDEF::get_Count_attr() const
{
    if (m_Count_attr)
    {
        return *m_Count_attr;
    }
    return ST_UnsignedDecimalNumber::default_instance();
}

bool CT_COLDEF::has_Layout_attr() const
{
    return m_has_Layout_attr;
}

void CT_COLDEF::set_Layout_attr(const ST_String& _Layout_attr)
{
    m_has_Layout_attr = true;
    m_Layout_attr = new ST_String(_Layout_attr);
}

const ST_String& CT_COLDEF::get_Layout_attr() const
{
    if (m_Layout_attr)
    {
        return *m_Layout_attr;
    }
    return ST_String::default_instance();
}

bool CT_COLDEF::has_SameGap_attr() const
{
    return m_has_SameGap_attr;
}

void CT_COLDEF::set_SameGap_attr(const ST_String& _SameGap_attr)
{
    m_has_SameGap_attr = true;
    m_SameGap_attr = new ST_String(_SameGap_attr);
}

const ST_String& CT_COLDEF::get_SameGap_attr() const
{
    if (m_SameGap_attr)
    {
        return *m_SameGap_attr;
    }
    return ST_String::default_instance();
}

bool CT_COLDEF::has_SameSize_attr() const
{
    return m_has_SameSize_attr;
}

void CT_COLDEF::set_SameSize_attr(const ST_String& _SameSize_attr)
{
    m_has_SameSize_attr = true;
    m_SameSize_attr = new ST_String(_SameSize_attr);
}

const ST_String& CT_COLDEF::get_SameSize_attr() const
{
    if (m_SameSize_attr)
    {
        return *m_SameSize_attr;
    }
    return ST_String::default_instance();
}

bool CT_COLDEF::has_Type_attr() const
{
    return m_has_Type_attr;
}

void CT_COLDEF::set_Type_attr(const ST_String& _Type_attr)
{
    m_has_Type_attr = true;
    m_Type_attr = new ST_String(_Type_attr);
}

const ST_String& CT_COLDEF::get_Type_attr() const
{
    if (m_Type_attr)
    {
        return *m_Type_attr;
    }
    return ST_String::default_instance();
}

CT_COLDEF* CT_COLDEF::default_instance_ = NULL;

// CT_FIELDBEGIN
CT_FIELDBEGIN::CT_FIELDBEGIN()
    :m_has_Command_attr(false),
     m_Command_attr(NULL),
     m_has_Dirty_attr(false),
     m_Dirty_attr(NULL),
     m_has_Editable_attr(false),
     m_Editable_attr(NULL),
     m_has_InstId_attr(false),
     m_InstId_attr(NULL),
     m_has_Property_attr(false),
     m_Property_attr(NULL),
     m_has_Type_attr(false),
     m_Type_attr(NULL),
     m_has_Fixed_attr(false),
     m_Fixed_attr(NULL)
{
}
CT_FIELDBEGIN::~CT_FIELDBEGIN()
{
    clear();
}
void CT_FIELDBEGIN::clear()
{
    m_has_Command_attr = false;

    if (m_Command_attr)
    {
        delete m_Command_attr;
        m_Command_attr = NULL;
    }


    m_has_Dirty_attr = false;

    if (m_Dirty_attr)
    {
        delete m_Dirty_attr;
        m_Dirty_attr = NULL;
    }


    m_has_Editable_attr = false;

    if (m_Editable_attr)
    {
        delete m_Editable_attr;
        m_Editable_attr = NULL;
    }


    m_has_InstId_attr = false;

    if (m_InstId_attr)
    {
        delete m_InstId_attr;
        m_InstId_attr = NULL;
    }


    m_has_Property_attr = false;

    if (m_Property_attr)
    {
        delete m_Property_attr;
        m_Property_attr = NULL;
    }


    m_has_Type_attr = false;

    if (m_Type_attr)
    {
        delete m_Type_attr;
        m_Type_attr = NULL;
    }


    m_has_Fixed_attr = false;

    if (m_Fixed_attr)
    {
        delete m_Fixed_attr;
        m_Fixed_attr = NULL;
    }

}

void CT_FIELDBEGIN::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_Command_attr)
    {
        m_Command_attr->toXmlAttr("Command", _outStream);
    }



    if (m_has_Dirty_attr)
    {
        m_Dirty_attr->toXmlAttr("Dirty", _outStream);
    }



    if (m_has_Editable_attr)
    {
        m_Editable_attr->toXmlAttr("Editable", _outStream);
    }



    if (m_has_InstId_attr)
    {
        m_InstId_attr->toXmlAttr("InstId", _outStream);
    }



    if (m_has_Property_attr)
    {
        m_Property_attr->toXmlAttr("Property", _outStream);
    }



    if (m_has_Type_attr)
    {
        m_Type_attr->toXmlAttr("Type", _outStream);
    }



    if (m_has_Fixed_attr)
    {
        m_Fixed_attr->toXmlAttr("Fixed", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_FIELDBEGIN& CT_FIELDBEGIN::default_instance()
{
    if (!CT_FIELDBEGIN::default_instance_)
    {
        CT_FIELDBEGIN::default_instance_ = new CT_FIELDBEGIN();
    }
    return *CT_FIELDBEGIN::default_instance_;
}

bool CT_FIELDBEGIN::has_Command_attr() const
{
    return m_has_Command_attr;
}

void CT_FIELDBEGIN::set_Command_attr(const ST_String& _Command_attr)
{
    m_has_Command_attr = true;
    m_Command_attr = new ST_String(_Command_attr);
}

const ST_String& CT_FIELDBEGIN::get_Command_attr() const
{
    if (m_Command_attr)
    {
        return *m_Command_attr;
    }
    return ST_String::default_instance();
}

bool CT_FIELDBEGIN::has_Dirty_attr() const
{
    return m_has_Dirty_attr;
}

void CT_FIELDBEGIN::set_Dirty_attr(const ST_String& _Dirty_attr)
{
    m_has_Dirty_attr = true;
    m_Dirty_attr = new ST_String(_Dirty_attr);
}

const ST_String& CT_FIELDBEGIN::get_Dirty_attr() const
{
    if (m_Dirty_attr)
    {
        return *m_Dirty_attr;
    }
    return ST_String::default_instance();
}

bool CT_FIELDBEGIN::has_Editable_attr() const
{
    return m_has_Editable_attr;
}

void CT_FIELDBEGIN::set_Editable_attr(const ST_String& _Editable_attr)
{
    m_has_Editable_attr = true;
    m_Editable_attr = new ST_String(_Editable_attr);
}

const ST_String& CT_FIELDBEGIN::get_Editable_attr() const
{
    if (m_Editable_attr)
    {
        return *m_Editable_attr;
    }
    return ST_String::default_instance();
}

bool CT_FIELDBEGIN::has_InstId_attr() const
{
    return m_has_InstId_attr;
}

void CT_FIELDBEGIN::set_InstId_attr(const ST_String& _InstId_attr)
{
    m_has_InstId_attr = true;
    m_InstId_attr = new ST_String(_InstId_attr);
}

const ST_String& CT_FIELDBEGIN::get_InstId_attr() const
{
    if (m_InstId_attr)
    {
        return *m_InstId_attr;
    }
    return ST_String::default_instance();
}

bool CT_FIELDBEGIN::has_Property_attr() const
{
    return m_has_Property_attr;
}

void CT_FIELDBEGIN::set_Property_attr(const ST_String& _Property_attr)
{
    m_has_Property_attr = true;
    m_Property_attr = new ST_String(_Property_attr);
}

const ST_String& CT_FIELDBEGIN::get_Property_attr() const
{
    if (m_Property_attr)
    {
        return *m_Property_attr;
    }
    return ST_String::default_instance();
}

bool CT_FIELDBEGIN::has_Type_attr() const
{
    return m_has_Type_attr;
}

void CT_FIELDBEGIN::set_Type_attr(const ST_String& _Type_attr)
{
    m_has_Type_attr = true;
    m_Type_attr = new ST_String(_Type_attr);
}

const ST_String& CT_FIELDBEGIN::get_Type_attr() const
{
    if (m_Type_attr)
    {
        return *m_Type_attr;
    }
    return ST_String::default_instance();
}

bool CT_FIELDBEGIN::has_Fixed_attr() const
{
    return m_has_Fixed_attr;
}

void CT_FIELDBEGIN::set_Fixed_attr(const ST_String& _Fixed_attr)
{
    m_has_Fixed_attr = true;
    m_Fixed_attr = new ST_String(_Fixed_attr);
}

const ST_String& CT_FIELDBEGIN::get_Fixed_attr() const
{
    if (m_Fixed_attr)
    {
        return *m_Fixed_attr;
    }
    return ST_String::default_instance();
}

CT_FIELDBEGIN* CT_FIELDBEGIN::default_instance_ = NULL;

// CT_FIELDEND
CT_FIELDEND::CT_FIELDEND()
    :m_has_Editable_attr(false),
     m_Editable_attr(NULL),
     m_has_Property_attr(false),
     m_Property_attr(NULL),
     m_has_Type_attr(false),
     m_Type_attr(NULL),
     m_has_Zorder_attr(false),
     m_Zorder_attr(NULL)
{
}
CT_FIELDEND::~CT_FIELDEND()
{
    clear();
}
void CT_FIELDEND::clear()
{
    m_has_Editable_attr = false;

    if (m_Editable_attr)
    {
        delete m_Editable_attr;
        m_Editable_attr = NULL;
    }


    m_has_Property_attr = false;

    if (m_Property_attr)
    {
        delete m_Property_attr;
        m_Property_attr = NULL;
    }


    m_has_Type_attr = false;

    if (m_Type_attr)
    {
        delete m_Type_attr;
        m_Type_attr = NULL;
    }


    m_has_Zorder_attr = false;

    if (m_Zorder_attr)
    {
        delete m_Zorder_attr;
        m_Zorder_attr = NULL;
    }

}

void CT_FIELDEND::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_Editable_attr)
    {
        m_Editable_attr->toXmlAttr("Editable", _outStream);
    }



    if (m_has_Property_attr)
    {
        m_Property_attr->toXmlAttr("Property", _outStream);
    }



    if (m_has_Type_attr)
    {
        m_Type_attr->toXmlAttr("Type", _outStream);
    }



    if (m_has_Zorder_attr)
    {
        m_Zorder_attr->toXmlAttr("Zorder", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_FIELDEND& CT_FIELDEND::default_instance()
{
    if (!CT_FIELDEND::default_instance_)
    {
        CT_FIELDEND::default_instance_ = new CT_FIELDEND();
    }
    return *CT_FIELDEND::default_instance_;
}

bool CT_FIELDEND::has_Editable_attr() const
{
    return m_has_Editable_attr;
}

void CT_FIELDEND::set_Editable_attr(const ST_String& _Editable_attr)
{
    m_has_Editable_attr = true;
    m_Editable_attr = new ST_String(_Editable_attr);
}

const ST_String& CT_FIELDEND::get_Editable_attr() const
{
    if (m_Editable_attr)
    {
        return *m_Editable_attr;
    }
    return ST_String::default_instance();
}

bool CT_FIELDEND::has_Property_attr() const
{
    return m_has_Property_attr;
}

void CT_FIELDEND::set_Property_attr(const ST_String& _Property_attr)
{
    m_has_Property_attr = true;
    m_Property_attr = new ST_String(_Property_attr);
}

const ST_String& CT_FIELDEND::get_Property_attr() const
{
    if (m_Property_attr)
    {
        return *m_Property_attr;
    }
    return ST_String::default_instance();
}

bool CT_FIELDEND::has_Type_attr() const
{
    return m_has_Type_attr;
}

void CT_FIELDEND::set_Type_attr(const ST_String& _Type_attr)
{
    m_has_Type_attr = true;
    m_Type_attr = new ST_String(_Type_attr);
}

const ST_String& CT_FIELDEND::get_Type_attr() const
{
    if (m_Type_attr)
    {
        return *m_Type_attr;
    }
    return ST_String::default_instance();
}

bool CT_FIELDEND::has_Zorder_attr() const
{
    return m_has_Zorder_attr;
}

void CT_FIELDEND::set_Zorder_attr(const ST_String& _Zorder_attr)
{
    m_has_Zorder_attr = true;
    m_Zorder_attr = new ST_String(_Zorder_attr);
}

const ST_String& CT_FIELDEND::get_Zorder_attr() const
{
    if (m_Zorder_attr)
    {
        return *m_Zorder_attr;
    }
    return ST_String::default_instance();
}

CT_FIELDEND* CT_FIELDEND::default_instance_ = NULL;

// CT_AUTONUM
CT_AUTONUM::CT_AUTONUM()
    :m_has_Number_attr(false),
     m_Number_attr(NULL),
     m_has_NumberType_attr(false),
     m_NumberType_attr(NULL)
{
}
CT_AUTONUM::~CT_AUTONUM()
{
    clear();
}
CT_AUTONUMFORMAT* CT_AUTONUM::add_AUTONUMFORMAT()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_AUTONUMFORMAT* pNewChild = pChildGroup->mutable_AUTONUMFORMAT();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

void CT_AUTONUM::clear()
{
    m_has_Number_attr = false;

    if (m_Number_attr)
    {
        delete m_Number_attr;
        m_Number_attr = NULL;
    }


    m_has_NumberType_attr = false;

    if (m_NumberType_attr)
    {
        delete m_NumberType_attr;
        m_NumberType_attr = NULL;
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

void CT_AUTONUM::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_Number_attr)
    {
        m_Number_attr->toXmlAttr("Number", _outStream);
    }



    if (m_has_NumberType_attr)
    {
        m_NumberType_attr->toXmlAttr("NumberType", _outStream);
    }

    _outStream << ">";

    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_AUTONUMFORMAT())
            {
                (*iter)->get_AUTONUMFORMAT().toXmlElem("AUTONUMFORMAT", "", _outStream);
            }


        }
    }

    _outStream << "</" << _elemName << ">";
}

const CT_AUTONUM& CT_AUTONUM::default_instance()
{
    if (!CT_AUTONUM::default_instance_)
    {
        CT_AUTONUM::default_instance_ = new CT_AUTONUM();
    }
    return *CT_AUTONUM::default_instance_;
}

bool CT_AUTONUM::has_Number_attr() const
{
    return m_has_Number_attr;
}

void CT_AUTONUM::set_Number_attr(const ST_String& _Number_attr)
{
    m_has_Number_attr = true;
    m_Number_attr = new ST_String(_Number_attr);
}

const ST_String& CT_AUTONUM::get_Number_attr() const
{
    if (m_Number_attr)
    {
        return *m_Number_attr;
    }
    return ST_String::default_instance();
}

bool CT_AUTONUM::has_NumberType_attr() const
{
    return m_has_NumberType_attr;
}

void CT_AUTONUM::set_NumberType_attr(const ST_String& _NumberType_attr)
{
    m_has_NumberType_attr = true;
    m_NumberType_attr = new ST_String(_NumberType_attr);
}

const ST_String& CT_AUTONUM::get_NumberType_attr() const
{
    if (m_NumberType_attr)
    {
        return *m_NumberType_attr;
    }
    return ST_String::default_instance();
}


// CT_AUTONUM::ChildGroup_1
CT_AUTONUM::ChildGroup_1::ChildGroup_1()
    :m_has_AUTONUMFORMAT(false),
     m_AUTONUMFORMAT(NULL)
{
}
bool CT_AUTONUM::ChildGroup_1::has_AUTONUMFORMAT() const
{
    return m_has_AUTONUMFORMAT;
}

CT_AUTONUMFORMAT* CT_AUTONUM::ChildGroup_1::mutable_AUTONUMFORMAT()
{

    m_has_AUTONUMFORMAT = true;
    if (!m_AUTONUMFORMAT)
    {
        m_AUTONUMFORMAT = new CT_AUTONUMFORMAT();
    }
    return m_AUTONUMFORMAT;
}

const CT_AUTONUMFORMAT& CT_AUTONUM::ChildGroup_1::get_AUTONUMFORMAT() const
{
    if (m_AUTONUMFORMAT)
    {
        return *m_AUTONUMFORMAT;
    }
    return CT_AUTONUMFORMAT::default_instance();
}

CT_AUTONUM* CT_AUTONUM::default_instance_ = NULL;

// CT_DUTMAL
CT_DUTMAL::CT_DUTMAL()
    :m_has_MAINTEXT(false),
     m_MAINTEXT(NULL),
     m_has_SUBTEXT(false),
     m_SUBTEXT(NULL),
     m_has_Align_attr(false),
     m_Align_attr(NULL),
     m_has_PosType_attr(false),
     m_PosType_attr(NULL)
{
}
CT_DUTMAL::~CT_DUTMAL()
{
    clear();
}
bool CT_DUTMAL::has_MAINTEXT() const
{
    return m_has_MAINTEXT;
}

ST_String* CT_DUTMAL::mutable_MAINTEXT()
{
    m_has_MAINTEXT = true;
    if (!m_MAINTEXT)
    {
        m_MAINTEXT = new ST_String();
    }
    return m_MAINTEXT;
}

const ST_String& CT_DUTMAL::get_MAINTEXT() const
{
    if (m_MAINTEXT)
    {
        return *m_MAINTEXT;
    }
    return ST_String::default_instance();
}

bool CT_DUTMAL::has_SUBTEXT() const
{
    return m_has_SUBTEXT;
}

ST_String* CT_DUTMAL::mutable_SUBTEXT()
{
    m_has_SUBTEXT = true;
    if (!m_SUBTEXT)
    {
        m_SUBTEXT = new ST_String();
    }
    return m_SUBTEXT;
}

const ST_String& CT_DUTMAL::get_SUBTEXT() const
{
    if (m_SUBTEXT)
    {
        return *m_SUBTEXT;
    }
    return ST_String::default_instance();
}

void CT_DUTMAL::clear()
{
    m_has_Align_attr = false;

    if (m_Align_attr)
    {
        delete m_Align_attr;
        m_Align_attr = NULL;
    }


    m_has_PosType_attr = false;

    if (m_PosType_attr)
    {
        delete m_PosType_attr;
        m_PosType_attr = NULL;
    }


    m_has_MAINTEXT = false;

    if (m_MAINTEXT)
    {
        delete m_MAINTEXT;
        m_MAINTEXT = NULL;
    }


    m_has_SUBTEXT = false;

    if (m_SUBTEXT)
    {
        delete m_SUBTEXT;
        m_SUBTEXT = NULL;
    }

}

void CT_DUTMAL::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_Align_attr)
    {
        m_Align_attr->toXmlAttr("Align", _outStream);
    }



    if (m_has_PosType_attr)
    {
        m_PosType_attr->toXmlAttr("PosType", _outStream);
    }

    _outStream << ">";


    if (m_has_MAINTEXT)
    {
        _outStream << "<MAINTEXT>" << m_MAINTEXT->toString() << "</MAINTEXT>";
    }


    if (m_has_SUBTEXT)
    {
        _outStream << "<SUBTEXT>" << m_SUBTEXT->toString() << "</SUBTEXT>";
    }

    _outStream << "</" << _elemName << ">";
}

const CT_DUTMAL& CT_DUTMAL::default_instance()
{
    if (!CT_DUTMAL::default_instance_)
    {
        CT_DUTMAL::default_instance_ = new CT_DUTMAL();
    }
    return *CT_DUTMAL::default_instance_;
}

bool CT_DUTMAL::has_Align_attr() const
{
    return m_has_Align_attr;
}

void CT_DUTMAL::set_Align_attr(const ST_String& _Align_attr)
{
    m_has_Align_attr = true;
    m_Align_attr = new ST_String(_Align_attr);
}

const ST_String& CT_DUTMAL::get_Align_attr() const
{
    if (m_Align_attr)
    {
        return *m_Align_attr;
    }
    return ST_String::default_instance();
}

bool CT_DUTMAL::has_PosType_attr() const
{
    return m_has_PosType_attr;
}

void CT_DUTMAL::set_PosType_attr(const ST_String& _PosType_attr)
{
    m_has_PosType_attr = true;
    m_PosType_attr = new ST_String(_PosType_attr);
}

const ST_String& CT_DUTMAL::get_PosType_attr() const
{
    if (m_PosType_attr)
    {
        return *m_PosType_attr;
    }
    return ST_String::default_instance();
}

CT_DUTMAL* CT_DUTMAL::default_instance_ = NULL;

// CT_NAME
CT_NAME::CT_NAME()
    :m_has_Name_attr(false),
     m_Name_attr(NULL)
{
}
CT_NAME::~CT_NAME()
{
    clear();
}
void CT_NAME::clear()
{
    m_has_Name_attr = false;

    if (m_Name_attr)
    {
        delete m_Name_attr;
        m_Name_attr = NULL;
    }

}

void CT_NAME::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_Name_attr)
    {
        m_Name_attr->toXmlAttr("Name", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_NAME& CT_NAME::default_instance()
{
    if (!CT_NAME::default_instance_)
    {
        CT_NAME::default_instance_ = new CT_NAME();
    }
    return *CT_NAME::default_instance_;
}

bool CT_NAME::has_Name_attr() const
{
    return m_has_Name_attr;
}

void CT_NAME::set_Name_attr(const ST_String& _Name_attr)
{
    m_has_Name_attr = true;
    m_Name_attr = new ST_String(_Name_attr);
}

const ST_String& CT_NAME::get_Name_attr() const
{
    if (m_Name_attr)
    {
        return *m_Name_attr;
    }
    return ST_String::default_instance();
}

CT_NAME* CT_NAME::default_instance_ = NULL;

// CT_CHAR
CT_CHAR::CT_CHAR()
    :m_has_TAB(false),
     m_TAB(NULL)
{
}
CT_CHAR::~CT_CHAR()
{
    clear();
}
bool CT_CHAR::has_TAB() const
{
    return m_has_TAB;
}

ST_String* CT_CHAR::mutable_TAB()
{
    m_has_TAB = true;
    if (!m_TAB)
    {
        m_TAB = new ST_String();
    }
    return m_TAB;
}

const ST_String& CT_CHAR::get_TAB() const
{
    if (m_TAB)
    {
        return *m_TAB;
    }
    return ST_String::default_instance();
}

void CT_CHAR::clear()
{
    m_has_TAB = false;

    if (m_TAB)
    {
        delete m_TAB;
        m_TAB = NULL;
    }

}

void CT_CHAR::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";


    if (m_has_TAB)
    {
        _outStream << "<TAB>" << m_TAB->toString() << "</TAB>";
    }

    _outStream << "</" << _elemName << ">";
}

const CT_CHAR& CT_CHAR::default_instance()
{
    if (!CT_CHAR::default_instance_)
    {
        CT_CHAR::default_instance_ = new CT_CHAR();
    }
    return *CT_CHAR::default_instance_;
}

CT_CHAR* CT_CHAR::default_instance_ = NULL;

// CT_TABLE
CT_TABLE::CT_TABLE()

{
}
CT_TABLE::~CT_TABLE()
{
    clear();
}
CT_SHAPEOBJECT* CT_TABLE::add_SHAPEOBJECT()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_SHAPEOBJECT* pNewChild = pChildGroup->mutable_SHAPEOBJECT();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

CT_INSIDEMARGIN* CT_TABLE::add_INSIDEMARGIN()
{
    ChildGroup_2 *pChildGroup = new ChildGroup_2();
    CT_INSIDEMARGIN* pNewChild = pChildGroup->mutable_INSIDEMARGIN();
    m_childGroupList_2.push_back(pChildGroup);
    return pNewChild;
}

CT_CELLZONELIST* CT_TABLE::add_CELLZONELIST()
{
    ChildGroup_3 *pChildGroup = new ChildGroup_3();
    CT_CELLZONELIST* pNewChild = pChildGroup->mutable_CELLZONELIST();
    m_childGroupList_3.push_back(pChildGroup);
    return pNewChild;
}

CT_ROW* CT_TABLE::add_ROW()
{
    ChildGroup_4 *pChildGroup = new ChildGroup_4();
    CT_ROW* pNewChild = pChildGroup->mutable_ROW();
    m_childGroupList_4.push_back(pChildGroup);
    return pNewChild;
}

void CT_TABLE::clear()
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
}

void CT_TABLE::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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
            if ((*iter)->has_SHAPEOBJECT())
            {
                (*iter)->get_SHAPEOBJECT().toXmlElem("SHAPEOBJECT", "", _outStream);
            }


        }
    }

    {
        vector<ChildGroup_2*>::const_iterator iter;
        for (iter = m_childGroupList_2.begin(); iter != m_childGroupList_2.end(); ++iter)
        {
            if ((*iter)->has_INSIDEMARGIN())
            {
                (*iter)->get_INSIDEMARGIN().toXmlElem("INSIDEMARGIN", "", _outStream);
            }


        }
    }

    {
        vector<ChildGroup_3*>::const_iterator iter;
        for (iter = m_childGroupList_3.begin(); iter != m_childGroupList_3.end(); ++iter)
        {
            if ((*iter)->has_CELLZONELIST())
            {
                (*iter)->get_CELLZONELIST().toXmlElem("CELLZONELIST", "", _outStream);
            }


        }
    }

    {
        vector<ChildGroup_4*>::const_iterator iter;
        for (iter = m_childGroupList_4.begin(); iter != m_childGroupList_4.end(); ++iter)
        {
            if ((*iter)->has_ROW())
            {
                (*iter)->get_ROW().toXmlElem("ROW", "", _outStream);
            }


        }
    }

    _outStream << "</" << _elemName << ">";
}

const CT_TABLE& CT_TABLE::default_instance()
{
    if (!CT_TABLE::default_instance_)
    {
        CT_TABLE::default_instance_ = new CT_TABLE();
    }
    return *CT_TABLE::default_instance_;
}


// CT_TABLE::ChildGroup_1
CT_TABLE::ChildGroup_1::ChildGroup_1()
    :m_has_SHAPEOBJECT(false),
     m_SHAPEOBJECT(NULL)
{
}
bool CT_TABLE::ChildGroup_1::has_SHAPEOBJECT() const
{
    return m_has_SHAPEOBJECT;
}

CT_SHAPEOBJECT* CT_TABLE::ChildGroup_1::mutable_SHAPEOBJECT()
{

    m_has_SHAPEOBJECT = true;
    if (!m_SHAPEOBJECT)
    {
        m_SHAPEOBJECT = new CT_SHAPEOBJECT();
    }
    return m_SHAPEOBJECT;
}

const CT_SHAPEOBJECT& CT_TABLE::ChildGroup_1::get_SHAPEOBJECT() const
{
    if (m_SHAPEOBJECT)
    {
        return *m_SHAPEOBJECT;
    }
    return CT_SHAPEOBJECT::default_instance();
}


// CT_TABLE::ChildGroup_2
CT_TABLE::ChildGroup_2::ChildGroup_2()
    :m_has_INSIDEMARGIN(false),
     m_INSIDEMARGIN(NULL)
{
}
bool CT_TABLE::ChildGroup_2::has_INSIDEMARGIN() const
{
    return m_has_INSIDEMARGIN;
}

CT_INSIDEMARGIN* CT_TABLE::ChildGroup_2::mutable_INSIDEMARGIN()
{

    m_has_INSIDEMARGIN = true;
    if (!m_INSIDEMARGIN)
    {
        m_INSIDEMARGIN = new CT_INSIDEMARGIN();
    }
    return m_INSIDEMARGIN;
}

const CT_INSIDEMARGIN& CT_TABLE::ChildGroup_2::get_INSIDEMARGIN() const
{
    if (m_INSIDEMARGIN)
    {
        return *m_INSIDEMARGIN;
    }
    return CT_INSIDEMARGIN::default_instance();
}


// CT_TABLE::ChildGroup_3
CT_TABLE::ChildGroup_3::ChildGroup_3()
    :m_has_CELLZONELIST(false),
     m_CELLZONELIST(NULL)
{
}
bool CT_TABLE::ChildGroup_3::has_CELLZONELIST() const
{
    return m_has_CELLZONELIST;
}

CT_CELLZONELIST* CT_TABLE::ChildGroup_3::mutable_CELLZONELIST()
{

    m_has_CELLZONELIST = true;
    if (!m_CELLZONELIST)
    {
        m_CELLZONELIST = new CT_CELLZONELIST();
    }
    return m_CELLZONELIST;
}

const CT_CELLZONELIST& CT_TABLE::ChildGroup_3::get_CELLZONELIST() const
{
    if (m_CELLZONELIST)
    {
        return *m_CELLZONELIST;
    }
    return CT_CELLZONELIST::default_instance();
}


// CT_TABLE::ChildGroup_4
CT_TABLE::ChildGroup_4::ChildGroup_4()
    :m_has_ROW(false),
     m_ROW(NULL)
{
}
bool CT_TABLE::ChildGroup_4::has_ROW() const
{
    return m_has_ROW;
}

CT_ROW* CT_TABLE::ChildGroup_4::mutable_ROW()
{

    m_has_ROW = true;
    if (!m_ROW)
    {
        m_ROW = new CT_ROW();
    }
    return m_ROW;
}

const CT_ROW& CT_TABLE::ChildGroup_4::get_ROW() const
{
    if (m_ROW)
    {
        return *m_ROW;
    }
    return CT_ROW::default_instance();
}

CT_TABLE* CT_TABLE::default_instance_ = NULL;

// CT_PICTURE
CT_PICTURE::CT_PICTURE()
    :m_has_TAB(false),
     m_TAB(NULL)
{
}
CT_PICTURE::~CT_PICTURE()
{
    clear();
}
bool CT_PICTURE::has_TAB() const
{
    return m_has_TAB;
}

ST_String* CT_PICTURE::mutable_TAB()
{
    m_has_TAB = true;
    if (!m_TAB)
    {
        m_TAB = new ST_String();
    }
    return m_TAB;
}

const ST_String& CT_PICTURE::get_TAB() const
{
    if (m_TAB)
    {
        return *m_TAB;
    }
    return ST_String::default_instance();
}

void CT_PICTURE::clear()
{
    m_has_TAB = false;

    if (m_TAB)
    {
        delete m_TAB;
        m_TAB = NULL;
    }

}

void CT_PICTURE::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";


    if (m_has_TAB)
    {
        _outStream << "<TAB>" << m_TAB->toString() << "</TAB>";
    }

    _outStream << "</" << _elemName << ">";
}

const CT_PICTURE& CT_PICTURE::default_instance()
{
    if (!CT_PICTURE::default_instance_)
    {
        CT_PICTURE::default_instance_ = new CT_PICTURE();
    }
    return *CT_PICTURE::default_instance_;
}

CT_PICTURE* CT_PICTURE::default_instance_ = NULL;

// CT_TEXT
CT_TEXT::CT_TEXT()
    :m_has_CharShape_attr(false),
     m_CharShape_attr(NULL)
{
}
CT_TEXT::~CT_TEXT()
{
    clear();
}
CT_SECDEF* CT_TEXT::add_SECDEF()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_SECDEF* pNewChild = pChildGroup->mutable_SECDEF();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

CT_COLDEF* CT_TEXT::add_COLDEF()
{
    ChildGroup_2 *pChildGroup = new ChildGroup_2();
    CT_COLDEF* pNewChild = pChildGroup->mutable_COLDEF();
    m_childGroupList_2.push_back(pChildGroup);
    return pNewChild;
}

CT_TABLE* CT_TEXT::add_TABLE()
{
    ChildGroup_3 *pChildGroup = new ChildGroup_3();
    CT_TABLE* pNewChild = pChildGroup->mutable_TABLE();
    m_childGroupList_3.push_back(pChildGroup);
    return pNewChild;
}

CT_PICTURE* CT_TEXT::add_PICTURE()
{
    ChildGroup_4 *pChildGroup = new ChildGroup_4();
    CT_PICTURE* pNewChild = pChildGroup->mutable_PICTURE();
    m_childGroupList_4.push_back(pChildGroup);
    return pNewChild;
}

CT_CHAR* CT_TEXT::add_CHAR()
{
    ChildGroup_5 *pChildGroup = new ChildGroup_5();
    CT_CHAR* pNewChild = pChildGroup->mutable_CHAR();
    m_childGroupList_5.push_back(pChildGroup);
    return pNewChild;
}

CT_FIELDBEGIN* CT_TEXT::add_FIELDBEGIN()
{
    ChildGroup_6 *pChildGroup = new ChildGroup_6();
    CT_FIELDBEGIN* pNewChild = pChildGroup->mutable_FIELDBEGIN();
    m_childGroupList_6.push_back(pChildGroup);
    return pNewChild;
}

CT_FIELDEND* CT_TEXT::add_FIELDEND()
{
    ChildGroup_7 *pChildGroup = new ChildGroup_7();
    CT_FIELDEND* pNewChild = pChildGroup->mutable_FIELDEND();
    m_childGroupList_7.push_back(pChildGroup);
    return pNewChild;
}

CT_AUTONUM* CT_TEXT::add_AUTONUM()
{
    ChildGroup_8 *pChildGroup = new ChildGroup_8();
    CT_AUTONUM* pNewChild = pChildGroup->mutable_AUTONUM();
    m_childGroupList_8.push_back(pChildGroup);
    return pNewChild;
}

CT_DUTMAL* CT_TEXT::add_DUTMAL()
{
    ChildGroup_9 *pChildGroup = new ChildGroup_9();
    CT_DUTMAL* pNewChild = pChildGroup->mutable_DUTMAL();
    m_childGroupList_9.push_back(pChildGroup);
    return pNewChild;
}

CT_EQUATION* CT_TEXT::add_EQUATION()
{
    ChildGroup_10 *pChildGroup = new ChildGroup_10();
    CT_EQUATION* pNewChild = pChildGroup->mutable_EQUATION();
    m_childGroupList_10.push_back(pChildGroup);
    return pNewChild;
}

CT_NAME* CT_TEXT::add_BOOKMARK()
{
    ChildGroup_11 *pChildGroup = new ChildGroup_11();
    CT_NAME* pNewChild = pChildGroup->mutable_BOOKMARK();
    m_childGroupList_11.push_back(pChildGroup);
    return pNewChild;
}

void CT_TEXT::clear()
{
    m_has_CharShape_attr = false;

    if (m_CharShape_attr)
    {
        delete m_CharShape_attr;
        m_CharShape_attr = NULL;
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

    {
        vector<ChildGroup_8*>::iterator iter;
        for (iter = m_childGroupList_8.begin(); iter != m_childGroupList_8.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_8.clear();
    }

    {
        vector<ChildGroup_9*>::iterator iter;
        for (iter = m_childGroupList_9.begin(); iter != m_childGroupList_9.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_9.clear();
    }

    {
        vector<ChildGroup_10*>::iterator iter;
        for (iter = m_childGroupList_10.begin(); iter != m_childGroupList_10.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_10.clear();
    }

    {
        vector<ChildGroup_11*>::iterator iter;
        for (iter = m_childGroupList_11.begin(); iter != m_childGroupList_11.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_11.clear();
    }
}

void CT_TEXT::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_CharShape_attr)
    {
        m_CharShape_attr->toXmlAttr("CharShape", _outStream);
    }

    _outStream << ">";

    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_SECDEF())
            {
                (*iter)->get_SECDEF().toXmlElem("SECDEF", "", _outStream);
            }


        }
    }

    {
        vector<ChildGroup_2*>::const_iterator iter;
        for (iter = m_childGroupList_2.begin(); iter != m_childGroupList_2.end(); ++iter)
        {
            if ((*iter)->has_COLDEF())
            {
                (*iter)->get_COLDEF().toXmlElem("COLDEF", "", _outStream);
            }


        }
    }

    {
        vector<ChildGroup_3*>::const_iterator iter;
        for (iter = m_childGroupList_3.begin(); iter != m_childGroupList_3.end(); ++iter)
        {
            if ((*iter)->has_TABLE())
            {
                (*iter)->get_TABLE().toXmlElem("TABLE", "", _outStream);
            }


        }
    }

    {
        vector<ChildGroup_4*>::const_iterator iter;
        for (iter = m_childGroupList_4.begin(); iter != m_childGroupList_4.end(); ++iter)
        {
            if ((*iter)->has_PICTURE())
            {
                (*iter)->get_PICTURE().toXmlElem("PICTURE", "", _outStream);
            }


        }
    }

    {
        vector<ChildGroup_5*>::const_iterator iter;
        for (iter = m_childGroupList_5.begin(); iter != m_childGroupList_5.end(); ++iter)
        {
            if ((*iter)->has_CHAR())
            {
                (*iter)->get_CHAR().toXmlElem("CHAR", "", _outStream);
            }


        }
    }

    {
        vector<ChildGroup_6*>::const_iterator iter;
        for (iter = m_childGroupList_6.begin(); iter != m_childGroupList_6.end(); ++iter)
        {
            if ((*iter)->has_FIELDBEGIN())
            {
                (*iter)->get_FIELDBEGIN().toXmlElem("FIELDBEGIN", "", _outStream);
            }


        }
    }

    {
        vector<ChildGroup_7*>::const_iterator iter;
        for (iter = m_childGroupList_7.begin(); iter != m_childGroupList_7.end(); ++iter)
        {
            if ((*iter)->has_FIELDEND())
            {
                (*iter)->get_FIELDEND().toXmlElem("FIELDEND", "", _outStream);
            }


        }
    }

    {
        vector<ChildGroup_8*>::const_iterator iter;
        for (iter = m_childGroupList_8.begin(); iter != m_childGroupList_8.end(); ++iter)
        {
            if ((*iter)->has_AUTONUM())
            {
                (*iter)->get_AUTONUM().toXmlElem("AUTONUM", "", _outStream);
            }


        }
    }

    {
        vector<ChildGroup_9*>::const_iterator iter;
        for (iter = m_childGroupList_9.begin(); iter != m_childGroupList_9.end(); ++iter)
        {
            if ((*iter)->has_DUTMAL())
            {
                (*iter)->get_DUTMAL().toXmlElem("DUTMAL", "", _outStream);
            }


        }
    }

    {
        vector<ChildGroup_10*>::const_iterator iter;
        for (iter = m_childGroupList_10.begin(); iter != m_childGroupList_10.end(); ++iter)
        {
            if ((*iter)->has_EQUATION())
            {
                (*iter)->get_EQUATION().toXmlElem("EQUATION", "", _outStream);
            }


        }
    }

    {
        vector<ChildGroup_11*>::const_iterator iter;
        for (iter = m_childGroupList_11.begin(); iter != m_childGroupList_11.end(); ++iter)
        {
            if ((*iter)->has_BOOKMARK())
            {
                (*iter)->get_BOOKMARK().toXmlElem("BOOKMARK", "", _outStream);
            }


        }
    }

    _outStream << "</" << _elemName << ">";
}

const CT_TEXT& CT_TEXT::default_instance()
{
    if (!CT_TEXT::default_instance_)
    {
        CT_TEXT::default_instance_ = new CT_TEXT();
    }
    return *CT_TEXT::default_instance_;
}

bool CT_TEXT::has_CharShape_attr() const
{
    return m_has_CharShape_attr;
}

void CT_TEXT::set_CharShape_attr(const ST_ID& _CharShape_attr)
{
    m_has_CharShape_attr = true;
    m_CharShape_attr = new ST_ID(_CharShape_attr);
}

const ST_ID& CT_TEXT::get_CharShape_attr() const
{
    if (m_CharShape_attr)
    {
        return *m_CharShape_attr;
    }
    return ST_ID::default_instance();
}


// CT_TEXT::ChildGroup_1
CT_TEXT::ChildGroup_1::ChildGroup_1()
    :m_has_SECDEF(false),
     m_SECDEF(NULL)
{
}
bool CT_TEXT::ChildGroup_1::has_SECDEF() const
{
    return m_has_SECDEF;
}

CT_SECDEF* CT_TEXT::ChildGroup_1::mutable_SECDEF()
{

    m_has_SECDEF = true;
    if (!m_SECDEF)
    {
        m_SECDEF = new CT_SECDEF();
    }
    return m_SECDEF;
}

const CT_SECDEF& CT_TEXT::ChildGroup_1::get_SECDEF() const
{
    if (m_SECDEF)
    {
        return *m_SECDEF;
    }
    return CT_SECDEF::default_instance();
}


// CT_TEXT::ChildGroup_2
CT_TEXT::ChildGroup_2::ChildGroup_2()
    :m_has_COLDEF(false),
     m_COLDEF(NULL)
{
}
bool CT_TEXT::ChildGroup_2::has_COLDEF() const
{
    return m_has_COLDEF;
}

CT_COLDEF* CT_TEXT::ChildGroup_2::mutable_COLDEF()
{

    m_has_COLDEF = true;
    if (!m_COLDEF)
    {
        m_COLDEF = new CT_COLDEF();
    }
    return m_COLDEF;
}

const CT_COLDEF& CT_TEXT::ChildGroup_2::get_COLDEF() const
{
    if (m_COLDEF)
    {
        return *m_COLDEF;
    }
    return CT_COLDEF::default_instance();
}


// CT_TEXT::ChildGroup_3
CT_TEXT::ChildGroup_3::ChildGroup_3()
    :m_has_TABLE(false),
     m_TABLE(NULL)
{
}
bool CT_TEXT::ChildGroup_3::has_TABLE() const
{
    return m_has_TABLE;
}

CT_TABLE* CT_TEXT::ChildGroup_3::mutable_TABLE()
{

    m_has_TABLE = true;
    if (!m_TABLE)
    {
        m_TABLE = new CT_TABLE();
    }
    return m_TABLE;
}

const CT_TABLE& CT_TEXT::ChildGroup_3::get_TABLE() const
{
    if (m_TABLE)
    {
        return *m_TABLE;
    }
    return CT_TABLE::default_instance();
}


// CT_TEXT::ChildGroup_4
CT_TEXT::ChildGroup_4::ChildGroup_4()
    :m_has_PICTURE(false),
     m_PICTURE(NULL)
{
}
bool CT_TEXT::ChildGroup_4::has_PICTURE() const
{
    return m_has_PICTURE;
}

CT_PICTURE* CT_TEXT::ChildGroup_4::mutable_PICTURE()
{

    m_has_PICTURE = true;
    if (!m_PICTURE)
    {
        m_PICTURE = new CT_PICTURE();
    }
    return m_PICTURE;
}

const CT_PICTURE& CT_TEXT::ChildGroup_4::get_PICTURE() const
{
    if (m_PICTURE)
    {
        return *m_PICTURE;
    }
    return CT_PICTURE::default_instance();
}


// CT_TEXT::ChildGroup_5
CT_TEXT::ChildGroup_5::ChildGroup_5()
    :m_has_CHAR(false),
     m_CHAR(NULL)
{
}
bool CT_TEXT::ChildGroup_5::has_CHAR() const
{
    return m_has_CHAR;
}

CT_CHAR* CT_TEXT::ChildGroup_5::mutable_CHAR()
{

    m_has_CHAR = true;
    if (!m_CHAR)
    {
        m_CHAR = new CT_CHAR();
    }
    return m_CHAR;
}

const CT_CHAR& CT_TEXT::ChildGroup_5::get_CHAR() const
{
    if (m_CHAR)
    {
        return *m_CHAR;
    }
    return CT_CHAR::default_instance();
}


// CT_TEXT::ChildGroup_6
CT_TEXT::ChildGroup_6::ChildGroup_6()
    :m_has_FIELDBEGIN(false),
     m_FIELDBEGIN(NULL)
{
}
bool CT_TEXT::ChildGroup_6::has_FIELDBEGIN() const
{
    return m_has_FIELDBEGIN;
}

CT_FIELDBEGIN* CT_TEXT::ChildGroup_6::mutable_FIELDBEGIN()
{

    m_has_FIELDBEGIN = true;
    if (!m_FIELDBEGIN)
    {
        m_FIELDBEGIN = new CT_FIELDBEGIN();
    }
    return m_FIELDBEGIN;
}

const CT_FIELDBEGIN& CT_TEXT::ChildGroup_6::get_FIELDBEGIN() const
{
    if (m_FIELDBEGIN)
    {
        return *m_FIELDBEGIN;
    }
    return CT_FIELDBEGIN::default_instance();
}


// CT_TEXT::ChildGroup_7
CT_TEXT::ChildGroup_7::ChildGroup_7()
    :m_has_FIELDEND(false),
     m_FIELDEND(NULL)
{
}
bool CT_TEXT::ChildGroup_7::has_FIELDEND() const
{
    return m_has_FIELDEND;
}

CT_FIELDEND* CT_TEXT::ChildGroup_7::mutable_FIELDEND()
{

    m_has_FIELDEND = true;
    if (!m_FIELDEND)
    {
        m_FIELDEND = new CT_FIELDEND();
    }
    return m_FIELDEND;
}

const CT_FIELDEND& CT_TEXT::ChildGroup_7::get_FIELDEND() const
{
    if (m_FIELDEND)
    {
        return *m_FIELDEND;
    }
    return CT_FIELDEND::default_instance();
}


// CT_TEXT::ChildGroup_8
CT_TEXT::ChildGroup_8::ChildGroup_8()
    :m_has_AUTONUM(false),
     m_AUTONUM(NULL)
{
}
bool CT_TEXT::ChildGroup_8::has_AUTONUM() const
{
    return m_has_AUTONUM;
}

CT_AUTONUM* CT_TEXT::ChildGroup_8::mutable_AUTONUM()
{

    m_has_AUTONUM = true;
    if (!m_AUTONUM)
    {
        m_AUTONUM = new CT_AUTONUM();
    }
    return m_AUTONUM;
}

const CT_AUTONUM& CT_TEXT::ChildGroup_8::get_AUTONUM() const
{
    if (m_AUTONUM)
    {
        return *m_AUTONUM;
    }
    return CT_AUTONUM::default_instance();
}


// CT_TEXT::ChildGroup_9
CT_TEXT::ChildGroup_9::ChildGroup_9()
    :m_has_DUTMAL(false),
     m_DUTMAL(NULL)
{
}
bool CT_TEXT::ChildGroup_9::has_DUTMAL() const
{
    return m_has_DUTMAL;
}

CT_DUTMAL* CT_TEXT::ChildGroup_9::mutable_DUTMAL()
{

    m_has_DUTMAL = true;
    if (!m_DUTMAL)
    {
        m_DUTMAL = new CT_DUTMAL();
    }
    return m_DUTMAL;
}

const CT_DUTMAL& CT_TEXT::ChildGroup_9::get_DUTMAL() const
{
    if (m_DUTMAL)
    {
        return *m_DUTMAL;
    }
    return CT_DUTMAL::default_instance();
}


// CT_TEXT::ChildGroup_10
CT_TEXT::ChildGroup_10::ChildGroup_10()
    :m_has_EQUATION(false),
     m_EQUATION(NULL)
{
}
bool CT_TEXT::ChildGroup_10::has_EQUATION() const
{
    return m_has_EQUATION;
}

CT_EQUATION* CT_TEXT::ChildGroup_10::mutable_EQUATION()
{

    m_has_EQUATION = true;
    if (!m_EQUATION)
    {
        m_EQUATION = new CT_EQUATION();
    }
    return m_EQUATION;
}

const CT_EQUATION& CT_TEXT::ChildGroup_10::get_EQUATION() const
{
    if (m_EQUATION)
    {
        return *m_EQUATION;
    }
    return CT_EQUATION::default_instance();
}


// CT_TEXT::ChildGroup_11
CT_TEXT::ChildGroup_11::ChildGroup_11()
    :m_has_BOOKMARK(false),
     m_BOOKMARK(NULL)
{
}
bool CT_TEXT::ChildGroup_11::has_BOOKMARK() const
{
    return m_has_BOOKMARK;
}

CT_NAME* CT_TEXT::ChildGroup_11::mutable_BOOKMARK()
{

    m_has_BOOKMARK = true;
    if (!m_BOOKMARK)
    {
        m_BOOKMARK = new CT_NAME();
    }
    return m_BOOKMARK;
}

const CT_NAME& CT_TEXT::ChildGroup_11::get_BOOKMARK() const
{
    if (m_BOOKMARK)
    {
        return *m_BOOKMARK;
    }
    return CT_NAME::default_instance();
}

CT_TEXT* CT_TEXT::default_instance_ = NULL;

// CT_P
CT_P::CT_P()
    :m_has_ColumnBreak_attr(false),
     m_ColumnBreak_attr(NULL),
     m_has_PageBreak_attr(false),
     m_PageBreak_attr(NULL),
     m_has_ParaShape_attr(false),
     m_ParaShape_attr(NULL),
     m_has_Style_attr(false),
     m_Style_attr(NULL),
     m_has_InstId_attr(false),
     m_InstId_attr(NULL)
{
}
CT_P::~CT_P()
{
    clear();
}
CT_TEXT* CT_P::add_TEXT()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_TEXT* pNewChild = pChildGroup->mutable_TEXT();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

void CT_P::clear()
{
    m_has_ColumnBreak_attr = false;

    if (m_ColumnBreak_attr)
    {
        delete m_ColumnBreak_attr;
        m_ColumnBreak_attr = NULL;
    }


    m_has_PageBreak_attr = false;

    if (m_PageBreak_attr)
    {
        delete m_PageBreak_attr;
        m_PageBreak_attr = NULL;
    }


    m_has_ParaShape_attr = false;

    if (m_ParaShape_attr)
    {
        delete m_ParaShape_attr;
        m_ParaShape_attr = NULL;
    }


    m_has_Style_attr = false;

    if (m_Style_attr)
    {
        delete m_Style_attr;
        m_Style_attr = NULL;
    }


    m_has_InstId_attr = false;

    if (m_InstId_attr)
    {
        delete m_InstId_attr;
        m_InstId_attr = NULL;
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

void CT_P::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_ColumnBreak_attr)
    {
        m_ColumnBreak_attr->toXmlAttr("ColumnBreak", _outStream);
    }



    if (m_has_PageBreak_attr)
    {
        m_PageBreak_attr->toXmlAttr("PageBreak", _outStream);
    }



    if (m_has_ParaShape_attr)
    {
        m_ParaShape_attr->toXmlAttr("ParaShape", _outStream);
    }



    if (m_has_Style_attr)
    {
        m_Style_attr->toXmlAttr("Style", _outStream);
    }



    if (m_has_InstId_attr)
    {
        m_InstId_attr->toXmlAttr("InstId", _outStream);
    }

    _outStream << ">";

    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_TEXT())
            {
                (*iter)->get_TEXT().toXmlElem("TEXT", "", _outStream);
            }


        }
    }

    _outStream << "</" << _elemName << ">";
}

const CT_P& CT_P::default_instance()
{
    if (!CT_P::default_instance_)
    {
        CT_P::default_instance_ = new CT_P();
    }
    return *CT_P::default_instance_;
}

bool CT_P::has_ColumnBreak_attr() const
{
    return m_has_ColumnBreak_attr;
}

void CT_P::set_ColumnBreak_attr(const ST_OnOff& _ColumnBreak_attr)
{
    m_has_ColumnBreak_attr = true;
    m_ColumnBreak_attr = new ST_OnOff(_ColumnBreak_attr);
}

const ST_OnOff& CT_P::get_ColumnBreak_attr() const
{
    if (m_ColumnBreak_attr)
    {
        return *m_ColumnBreak_attr;
    }
    return ST_OnOff::default_instance();
}

bool CT_P::has_PageBreak_attr() const
{
    return m_has_PageBreak_attr;
}

void CT_P::set_PageBreak_attr(const ST_OnOff& _PageBreak_attr)
{
    m_has_PageBreak_attr = true;
    m_PageBreak_attr = new ST_OnOff(_PageBreak_attr);
}

const ST_OnOff& CT_P::get_PageBreak_attr() const
{
    if (m_PageBreak_attr)
    {
        return *m_PageBreak_attr;
    }
    return ST_OnOff::default_instance();
}

bool CT_P::has_ParaShape_attr() const
{
    return m_has_ParaShape_attr;
}

void CT_P::set_ParaShape_attr(const ST_ID& _ParaShape_attr)
{
    m_has_ParaShape_attr = true;
    m_ParaShape_attr = new ST_ID(_ParaShape_attr);
}

const ST_ID& CT_P::get_ParaShape_attr() const
{
    if (m_ParaShape_attr)
    {
        return *m_ParaShape_attr;
    }
    return ST_ID::default_instance();
}

bool CT_P::has_Style_attr() const
{
    return m_has_Style_attr;
}

void CT_P::set_Style_attr(const ST_ID& _Style_attr)
{
    m_has_Style_attr = true;
    m_Style_attr = new ST_ID(_Style_attr);
}

const ST_ID& CT_P::get_Style_attr() const
{
    if (m_Style_attr)
    {
        return *m_Style_attr;
    }
    return ST_ID::default_instance();
}

bool CT_P::has_InstId_attr() const
{
    return m_has_InstId_attr;
}

void CT_P::set_InstId_attr(const ST_ID& _InstId_attr)
{
    m_has_InstId_attr = true;
    m_InstId_attr = new ST_ID(_InstId_attr);
}

const ST_ID& CT_P::get_InstId_attr() const
{
    if (m_InstId_attr)
    {
        return *m_InstId_attr;
    }
    return ST_ID::default_instance();
}


// CT_P::ChildGroup_1
CT_P::ChildGroup_1::ChildGroup_1()
    :m_has_TEXT(false),
     m_TEXT(NULL)
{
}
bool CT_P::ChildGroup_1::has_TEXT() const
{
    return m_has_TEXT;
}

CT_TEXT* CT_P::ChildGroup_1::mutable_TEXT()
{

    m_has_TEXT = true;
    if (!m_TEXT)
    {
        m_TEXT = new CT_TEXT();
    }
    return m_TEXT;
}

const CT_TEXT& CT_P::ChildGroup_1::get_TEXT() const
{
    if (m_TEXT)
    {
        return *m_TEXT;
    }
    return CT_TEXT::default_instance();
}

CT_P* CT_P::default_instance_ = NULL;

// CT_SIZE
CT_SIZE::CT_SIZE()
    :m_has_Height_attr(false),
     m_Height_attr(NULL),
     m_has_HeightRelTo_attr(false),
     m_HeightRelTo_attr(NULL),
     m_has_Protect_attr(false),
     m_Protect_attr(NULL),
     m_has_Width_attr(false),
     m_Width_attr(NULL),
     m_has_WidthRelTo_attr(false),
     m_WidthRelTo_attr(NULL)
{
}
CT_SIZE::~CT_SIZE()
{
    clear();
}
void CT_SIZE::clear()
{
    m_has_Height_attr = false;

    if (m_Height_attr)
    {
        delete m_Height_attr;
        m_Height_attr = NULL;
    }


    m_has_HeightRelTo_attr = false;

    if (m_HeightRelTo_attr)
    {
        delete m_HeightRelTo_attr;
        m_HeightRelTo_attr = NULL;
    }


    m_has_Protect_attr = false;

    if (m_Protect_attr)
    {
        delete m_Protect_attr;
        m_Protect_attr = NULL;
    }


    m_has_Width_attr = false;

    if (m_Width_attr)
    {
        delete m_Width_attr;
        m_Width_attr = NULL;
    }


    m_has_WidthRelTo_attr = false;

    if (m_WidthRelTo_attr)
    {
        delete m_WidthRelTo_attr;
        m_WidthRelTo_attr = NULL;
    }

}

void CT_SIZE::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_Height_attr)
    {
        m_Height_attr->toXmlAttr("Height", _outStream);
    }



    if (m_has_HeightRelTo_attr)
    {
        m_HeightRelTo_attr->toXmlAttr("HeightRelTo", _outStream);
    }



    if (m_has_Protect_attr)
    {
        m_Protect_attr->toXmlAttr("Protect", _outStream);
    }



    if (m_has_Width_attr)
    {
        m_Width_attr->toXmlAttr("Width", _outStream);
    }



    if (m_has_WidthRelTo_attr)
    {
        m_WidthRelTo_attr->toXmlAttr("WidthRelTo", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_SIZE& CT_SIZE::default_instance()
{
    if (!CT_SIZE::default_instance_)
    {
        CT_SIZE::default_instance_ = new CT_SIZE();
    }
    return *CT_SIZE::default_instance_;
}

bool CT_SIZE::has_Height_attr() const
{
    return m_has_Height_attr;
}

void CT_SIZE::set_Height_attr(const ST_String& _Height_attr)
{
    m_has_Height_attr = true;
    m_Height_attr = new ST_String(_Height_attr);
}

const ST_String& CT_SIZE::get_Height_attr() const
{
    if (m_Height_attr)
    {
        return *m_Height_attr;
    }
    return ST_String::default_instance();
}

bool CT_SIZE::has_HeightRelTo_attr() const
{
    return m_has_HeightRelTo_attr;
}

void CT_SIZE::set_HeightRelTo_attr(const ST_String& _HeightRelTo_attr)
{
    m_has_HeightRelTo_attr = true;
    m_HeightRelTo_attr = new ST_String(_HeightRelTo_attr);
}

const ST_String& CT_SIZE::get_HeightRelTo_attr() const
{
    if (m_HeightRelTo_attr)
    {
        return *m_HeightRelTo_attr;
    }
    return ST_String::default_instance();
}

bool CT_SIZE::has_Protect_attr() const
{
    return m_has_Protect_attr;
}

void CT_SIZE::set_Protect_attr(const ST_String& _Protect_attr)
{
    m_has_Protect_attr = true;
    m_Protect_attr = new ST_String(_Protect_attr);
}

const ST_String& CT_SIZE::get_Protect_attr() const
{
    if (m_Protect_attr)
    {
        return *m_Protect_attr;
    }
    return ST_String::default_instance();
}

bool CT_SIZE::has_Width_attr() const
{
    return m_has_Width_attr;
}

void CT_SIZE::set_Width_attr(const ST_String& _Width_attr)
{
    m_has_Width_attr = true;
    m_Width_attr = new ST_String(_Width_attr);
}

const ST_String& CT_SIZE::get_Width_attr() const
{
    if (m_Width_attr)
    {
        return *m_Width_attr;
    }
    return ST_String::default_instance();
}

bool CT_SIZE::has_WidthRelTo_attr() const
{
    return m_has_WidthRelTo_attr;
}

void CT_SIZE::set_WidthRelTo_attr(const ST_String& _WidthRelTo_attr)
{
    m_has_WidthRelTo_attr = true;
    m_WidthRelTo_attr = new ST_String(_WidthRelTo_attr);
}

const ST_String& CT_SIZE::get_WidthRelTo_attr() const
{
    if (m_WidthRelTo_attr)
    {
        return *m_WidthRelTo_attr;
    }
    return ST_String::default_instance();
}

CT_SIZE* CT_SIZE::default_instance_ = NULL;

// CT_POSITION
CT_POSITION::CT_POSITION()
    :m_has_AffectLSpacing_attr(false),
     m_AffectLSpacing_attr(NULL),
     m_has_AllowOverlap_attr(false),
     m_AllowOverlap_attr(NULL),
     m_has_FlowWithText_attr(false),
     m_FlowWithText_attr(NULL),
     m_has_HoldAnchorAndSO_attr(false),
     m_HoldAnchorAndSO_attr(NULL),
     m_has_HorzAlign_attr(false),
     m_HorzAlign_attr(NULL),
     m_has_HorzOffset_attr(false),
     m_HorzOffset_attr(NULL),
     m_has_HorzRelTo_attr(false),
     m_HorzRelTo_attr(NULL),
     m_has_TreatAsChar_attr(false),
     m_TreatAsChar_attr(NULL),
     m_has_VertAlign_attr(false),
     m_VertAlign_attr(NULL),
     m_has_VertOffset_attr(false),
     m_VertOffset_attr(NULL),
     m_has_VertRelTo_attr(false),
     m_VertRelTo_attr(NULL)
{
}
CT_POSITION::~CT_POSITION()
{
    clear();
}
void CT_POSITION::clear()
{
    m_has_AffectLSpacing_attr = false;

    if (m_AffectLSpacing_attr)
    {
        delete m_AffectLSpacing_attr;
        m_AffectLSpacing_attr = NULL;
    }


    m_has_AllowOverlap_attr = false;

    if (m_AllowOverlap_attr)
    {
        delete m_AllowOverlap_attr;
        m_AllowOverlap_attr = NULL;
    }


    m_has_FlowWithText_attr = false;

    if (m_FlowWithText_attr)
    {
        delete m_FlowWithText_attr;
        m_FlowWithText_attr = NULL;
    }


    m_has_HoldAnchorAndSO_attr = false;

    if (m_HoldAnchorAndSO_attr)
    {
        delete m_HoldAnchorAndSO_attr;
        m_HoldAnchorAndSO_attr = NULL;
    }


    m_has_HorzAlign_attr = false;

    if (m_HorzAlign_attr)
    {
        delete m_HorzAlign_attr;
        m_HorzAlign_attr = NULL;
    }


    m_has_HorzOffset_attr = false;

    if (m_HorzOffset_attr)
    {
        delete m_HorzOffset_attr;
        m_HorzOffset_attr = NULL;
    }


    m_has_HorzRelTo_attr = false;

    if (m_HorzRelTo_attr)
    {
        delete m_HorzRelTo_attr;
        m_HorzRelTo_attr = NULL;
    }


    m_has_TreatAsChar_attr = false;

    if (m_TreatAsChar_attr)
    {
        delete m_TreatAsChar_attr;
        m_TreatAsChar_attr = NULL;
    }


    m_has_VertAlign_attr = false;

    if (m_VertAlign_attr)
    {
        delete m_VertAlign_attr;
        m_VertAlign_attr = NULL;
    }


    m_has_VertOffset_attr = false;

    if (m_VertOffset_attr)
    {
        delete m_VertOffset_attr;
        m_VertOffset_attr = NULL;
    }


    m_has_VertRelTo_attr = false;

    if (m_VertRelTo_attr)
    {
        delete m_VertRelTo_attr;
        m_VertRelTo_attr = NULL;
    }

}

void CT_POSITION::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_AffectLSpacing_attr)
    {
        m_AffectLSpacing_attr->toXmlAttr("AffectLSpacing", _outStream);
    }



    if (m_has_AllowOverlap_attr)
    {
        m_AllowOverlap_attr->toXmlAttr("AllowOverlap", _outStream);
    }



    if (m_has_FlowWithText_attr)
    {
        m_FlowWithText_attr->toXmlAttr("FlowWithText", _outStream);
    }



    if (m_has_HoldAnchorAndSO_attr)
    {
        m_HoldAnchorAndSO_attr->toXmlAttr("HoldAnchorAndSO", _outStream);
    }



    if (m_has_HorzAlign_attr)
    {
        m_HorzAlign_attr->toXmlAttr("HorzAlign", _outStream);
    }



    if (m_has_HorzOffset_attr)
    {
        m_HorzOffset_attr->toXmlAttr("HorzOffset", _outStream);
    }



    if (m_has_HorzRelTo_attr)
    {
        m_HorzRelTo_attr->toXmlAttr("HorzRelTo", _outStream);
    }



    if (m_has_TreatAsChar_attr)
    {
        m_TreatAsChar_attr->toXmlAttr("TreatAsChar", _outStream);
    }



    if (m_has_VertAlign_attr)
    {
        m_VertAlign_attr->toXmlAttr("VertAlign", _outStream);
    }



    if (m_has_VertOffset_attr)
    {
        m_VertOffset_attr->toXmlAttr("VertOffset", _outStream);
    }



    if (m_has_VertRelTo_attr)
    {
        m_VertRelTo_attr->toXmlAttr("VertRelTo", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_POSITION& CT_POSITION::default_instance()
{
    if (!CT_POSITION::default_instance_)
    {
        CT_POSITION::default_instance_ = new CT_POSITION();
    }
    return *CT_POSITION::default_instance_;
}

bool CT_POSITION::has_AffectLSpacing_attr() const
{
    return m_has_AffectLSpacing_attr;
}

void CT_POSITION::set_AffectLSpacing_attr(const ST_String& _AffectLSpacing_attr)
{
    m_has_AffectLSpacing_attr = true;
    m_AffectLSpacing_attr = new ST_String(_AffectLSpacing_attr);
}

const ST_String& CT_POSITION::get_AffectLSpacing_attr() const
{
    if (m_AffectLSpacing_attr)
    {
        return *m_AffectLSpacing_attr;
    }
    return ST_String::default_instance();
}

bool CT_POSITION::has_AllowOverlap_attr() const
{
    return m_has_AllowOverlap_attr;
}

void CT_POSITION::set_AllowOverlap_attr(const ST_String& _AllowOverlap_attr)
{
    m_has_AllowOverlap_attr = true;
    m_AllowOverlap_attr = new ST_String(_AllowOverlap_attr);
}

const ST_String& CT_POSITION::get_AllowOverlap_attr() const
{
    if (m_AllowOverlap_attr)
    {
        return *m_AllowOverlap_attr;
    }
    return ST_String::default_instance();
}

bool CT_POSITION::has_FlowWithText_attr() const
{
    return m_has_FlowWithText_attr;
}

void CT_POSITION::set_FlowWithText_attr(const ST_String& _FlowWithText_attr)
{
    m_has_FlowWithText_attr = true;
    m_FlowWithText_attr = new ST_String(_FlowWithText_attr);
}

const ST_String& CT_POSITION::get_FlowWithText_attr() const
{
    if (m_FlowWithText_attr)
    {
        return *m_FlowWithText_attr;
    }
    return ST_String::default_instance();
}

bool CT_POSITION::has_HoldAnchorAndSO_attr() const
{
    return m_has_HoldAnchorAndSO_attr;
}

void CT_POSITION::set_HoldAnchorAndSO_attr(const ST_String& _HoldAnchorAndSO_attr)
{
    m_has_HoldAnchorAndSO_attr = true;
    m_HoldAnchorAndSO_attr = new ST_String(_HoldAnchorAndSO_attr);
}

const ST_String& CT_POSITION::get_HoldAnchorAndSO_attr() const
{
    if (m_HoldAnchorAndSO_attr)
    {
        return *m_HoldAnchorAndSO_attr;
    }
    return ST_String::default_instance();
}

bool CT_POSITION::has_HorzAlign_attr() const
{
    return m_has_HorzAlign_attr;
}

void CT_POSITION::set_HorzAlign_attr(const ST_String& _HorzAlign_attr)
{
    m_has_HorzAlign_attr = true;
    m_HorzAlign_attr = new ST_String(_HorzAlign_attr);
}

const ST_String& CT_POSITION::get_HorzAlign_attr() const
{
    if (m_HorzAlign_attr)
    {
        return *m_HorzAlign_attr;
    }
    return ST_String::default_instance();
}

bool CT_POSITION::has_HorzOffset_attr() const
{
    return m_has_HorzOffset_attr;
}

void CT_POSITION::set_HorzOffset_attr(const ST_String& _HorzOffset_attr)
{
    m_has_HorzOffset_attr = true;
    m_HorzOffset_attr = new ST_String(_HorzOffset_attr);
}

const ST_String& CT_POSITION::get_HorzOffset_attr() const
{
    if (m_HorzOffset_attr)
    {
        return *m_HorzOffset_attr;
    }
    return ST_String::default_instance();
}

bool CT_POSITION::has_HorzRelTo_attr() const
{
    return m_has_HorzRelTo_attr;
}

void CT_POSITION::set_HorzRelTo_attr(const ST_String& _HorzRelTo_attr)
{
    m_has_HorzRelTo_attr = true;
    m_HorzRelTo_attr = new ST_String(_HorzRelTo_attr);
}

const ST_String& CT_POSITION::get_HorzRelTo_attr() const
{
    if (m_HorzRelTo_attr)
    {
        return *m_HorzRelTo_attr;
    }
    return ST_String::default_instance();
}

bool CT_POSITION::has_TreatAsChar_attr() const
{
    return m_has_TreatAsChar_attr;
}

void CT_POSITION::set_TreatAsChar_attr(const ST_String& _TreatAsChar_attr)
{
    m_has_TreatAsChar_attr = true;
    m_TreatAsChar_attr = new ST_String(_TreatAsChar_attr);
}

const ST_String& CT_POSITION::get_TreatAsChar_attr() const
{
    if (m_TreatAsChar_attr)
    {
        return *m_TreatAsChar_attr;
    }
    return ST_String::default_instance();
}

bool CT_POSITION::has_VertAlign_attr() const
{
    return m_has_VertAlign_attr;
}

void CT_POSITION::set_VertAlign_attr(const ST_String& _VertAlign_attr)
{
    m_has_VertAlign_attr = true;
    m_VertAlign_attr = new ST_String(_VertAlign_attr);
}

const ST_String& CT_POSITION::get_VertAlign_attr() const
{
    if (m_VertAlign_attr)
    {
        return *m_VertAlign_attr;
    }
    return ST_String::default_instance();
}

bool CT_POSITION::has_VertOffset_attr() const
{
    return m_has_VertOffset_attr;
}

void CT_POSITION::set_VertOffset_attr(const ST_String& _VertOffset_attr)
{
    m_has_VertOffset_attr = true;
    m_VertOffset_attr = new ST_String(_VertOffset_attr);
}

const ST_String& CT_POSITION::get_VertOffset_attr() const
{
    if (m_VertOffset_attr)
    {
        return *m_VertOffset_attr;
    }
    return ST_String::default_instance();
}

bool CT_POSITION::has_VertRelTo_attr() const
{
    return m_has_VertRelTo_attr;
}

void CT_POSITION::set_VertRelTo_attr(const ST_String& _VertRelTo_attr)
{
    m_has_VertRelTo_attr = true;
    m_VertRelTo_attr = new ST_String(_VertRelTo_attr);
}

const ST_String& CT_POSITION::get_VertRelTo_attr() const
{
    if (m_VertRelTo_attr)
    {
        return *m_VertRelTo_attr;
    }
    return ST_String::default_instance();
}

CT_POSITION* CT_POSITION::default_instance_ = NULL;

// CT_OUTSIDEMARGIN
CT_OUTSIDEMARGIN::CT_OUTSIDEMARGIN()
    :m_has_Bottom_attr(false),
     m_Bottom_attr(NULL),
     m_has_Left_attr(false),
     m_Left_attr(NULL),
     m_has_Right_attr(false),
     m_Right_attr(NULL),
     m_has_Top_attr(false),
     m_Top_attr(NULL)
{
}
CT_OUTSIDEMARGIN::~CT_OUTSIDEMARGIN()
{
    clear();
}
void CT_OUTSIDEMARGIN::clear()
{
    m_has_Bottom_attr = false;

    if (m_Bottom_attr)
    {
        delete m_Bottom_attr;
        m_Bottom_attr = NULL;
    }


    m_has_Left_attr = false;

    if (m_Left_attr)
    {
        delete m_Left_attr;
        m_Left_attr = NULL;
    }


    m_has_Right_attr = false;

    if (m_Right_attr)
    {
        delete m_Right_attr;
        m_Right_attr = NULL;
    }


    m_has_Top_attr = false;

    if (m_Top_attr)
    {
        delete m_Top_attr;
        m_Top_attr = NULL;
    }

}

void CT_OUTSIDEMARGIN::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_Bottom_attr)
    {
        m_Bottom_attr->toXmlAttr("Bottom", _outStream);
    }



    if (m_has_Left_attr)
    {
        m_Left_attr->toXmlAttr("Left", _outStream);
    }



    if (m_has_Right_attr)
    {
        m_Right_attr->toXmlAttr("Right", _outStream);
    }



    if (m_has_Top_attr)
    {
        m_Top_attr->toXmlAttr("Top", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_OUTSIDEMARGIN& CT_OUTSIDEMARGIN::default_instance()
{
    if (!CT_OUTSIDEMARGIN::default_instance_)
    {
        CT_OUTSIDEMARGIN::default_instance_ = new CT_OUTSIDEMARGIN();
    }
    return *CT_OUTSIDEMARGIN::default_instance_;
}

bool CT_OUTSIDEMARGIN::has_Bottom_attr() const
{
    return m_has_Bottom_attr;
}

void CT_OUTSIDEMARGIN::set_Bottom_attr(const ST_String& _Bottom_attr)
{
    m_has_Bottom_attr = true;
    m_Bottom_attr = new ST_String(_Bottom_attr);
}

const ST_String& CT_OUTSIDEMARGIN::get_Bottom_attr() const
{
    if (m_Bottom_attr)
    {
        return *m_Bottom_attr;
    }
    return ST_String::default_instance();
}

bool CT_OUTSIDEMARGIN::has_Left_attr() const
{
    return m_has_Left_attr;
}

void CT_OUTSIDEMARGIN::set_Left_attr(const ST_String& _Left_attr)
{
    m_has_Left_attr = true;
    m_Left_attr = new ST_String(_Left_attr);
}

const ST_String& CT_OUTSIDEMARGIN::get_Left_attr() const
{
    if (m_Left_attr)
    {
        return *m_Left_attr;
    }
    return ST_String::default_instance();
}

bool CT_OUTSIDEMARGIN::has_Right_attr() const
{
    return m_has_Right_attr;
}

void CT_OUTSIDEMARGIN::set_Right_attr(const ST_String& _Right_attr)
{
    m_has_Right_attr = true;
    m_Right_attr = new ST_String(_Right_attr);
}

const ST_String& CT_OUTSIDEMARGIN::get_Right_attr() const
{
    if (m_Right_attr)
    {
        return *m_Right_attr;
    }
    return ST_String::default_instance();
}

bool CT_OUTSIDEMARGIN::has_Top_attr() const
{
    return m_has_Top_attr;
}

void CT_OUTSIDEMARGIN::set_Top_attr(const ST_String& _Top_attr)
{
    m_has_Top_attr = true;
    m_Top_attr = new ST_String(_Top_attr);
}

const ST_String& CT_OUTSIDEMARGIN::get_Top_attr() const
{
    if (m_Top_attr)
    {
        return *m_Top_attr;
    }
    return ST_String::default_instance();
}

CT_OUTSIDEMARGIN* CT_OUTSIDEMARGIN::default_instance_ = NULL;

// CT_SHAPEOBJECT
CT_SHAPEOBJECT::CT_SHAPEOBJECT()
    :m_has_InstId_attr(false),
     m_InstId_attr(NULL),
     m_has_Lock_attr(false),
     m_Lock_attr(NULL),
     m_has_NumberingType_attr(false),
     m_NumberingType_attr(NULL),
     m_has_ZOrder_attr(false),
     m_ZOrder_attr(NULL)
{
}
CT_SHAPEOBJECT::~CT_SHAPEOBJECT()
{
    clear();
}
CT_SIZE* CT_SHAPEOBJECT::add_SIZE()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_SIZE* pNewChild = pChildGroup->mutable_SIZE();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

CT_POSITION* CT_SHAPEOBJECT::add_POSITION()
{
    ChildGroup_2 *pChildGroup = new ChildGroup_2();
    CT_POSITION* pNewChild = pChildGroup->mutable_POSITION();
    m_childGroupList_2.push_back(pChildGroup);
    return pNewChild;
}

CT_OUTSIDEMARGIN* CT_SHAPEOBJECT::add_OUTSIDEMARGIN()
{
    ChildGroup_3 *pChildGroup = new ChildGroup_3();
    CT_OUTSIDEMARGIN* pNewChild = pChildGroup->mutable_OUTSIDEMARGIN();
    m_childGroupList_3.push_back(pChildGroup);
    return pNewChild;
}

void CT_SHAPEOBJECT::clear()
{
    m_has_InstId_attr = false;

    if (m_InstId_attr)
    {
        delete m_InstId_attr;
        m_InstId_attr = NULL;
    }


    m_has_Lock_attr = false;

    if (m_Lock_attr)
    {
        delete m_Lock_attr;
        m_Lock_attr = NULL;
    }


    m_has_NumberingType_attr = false;

    if (m_NumberingType_attr)
    {
        delete m_NumberingType_attr;
        m_NumberingType_attr = NULL;
    }


    m_has_ZOrder_attr = false;

    if (m_ZOrder_attr)
    {
        delete m_ZOrder_attr;
        m_ZOrder_attr = NULL;
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
}

void CT_SHAPEOBJECT::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_InstId_attr)
    {
        m_InstId_attr->toXmlAttr("InstId", _outStream);
    }



    if (m_has_Lock_attr)
    {
        m_Lock_attr->toXmlAttr("Lock", _outStream);
    }



    if (m_has_NumberingType_attr)
    {
        m_NumberingType_attr->toXmlAttr("NumberingType", _outStream);
    }



    if (m_has_ZOrder_attr)
    {
        m_ZOrder_attr->toXmlAttr("ZOrder", _outStream);
    }

    _outStream << ">";

    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_SIZE())
            {
                (*iter)->get_SIZE().toXmlElem("SIZE", "", _outStream);
            }


        }
    }

    {
        vector<ChildGroup_2*>::const_iterator iter;
        for (iter = m_childGroupList_2.begin(); iter != m_childGroupList_2.end(); ++iter)
        {
            if ((*iter)->has_POSITION())
            {
                (*iter)->get_POSITION().toXmlElem("POSITION", "", _outStream);
            }


        }
    }

    {
        vector<ChildGroup_3*>::const_iterator iter;
        for (iter = m_childGroupList_3.begin(); iter != m_childGroupList_3.end(); ++iter)
        {
            if ((*iter)->has_OUTSIDEMARGIN())
            {
                (*iter)->get_OUTSIDEMARGIN().toXmlElem("OUTSIDEMARGIN", "", _outStream);
            }


        }
    }

    _outStream << "</" << _elemName << ">";
}

const CT_SHAPEOBJECT& CT_SHAPEOBJECT::default_instance()
{
    if (!CT_SHAPEOBJECT::default_instance_)
    {
        CT_SHAPEOBJECT::default_instance_ = new CT_SHAPEOBJECT();
    }
    return *CT_SHAPEOBJECT::default_instance_;
}

bool CT_SHAPEOBJECT::has_InstId_attr() const
{
    return m_has_InstId_attr;
}

void CT_SHAPEOBJECT::set_InstId_attr(const ST_String& _InstId_attr)
{
    m_has_InstId_attr = true;
    m_InstId_attr = new ST_String(_InstId_attr);
}

const ST_String& CT_SHAPEOBJECT::get_InstId_attr() const
{
    if (m_InstId_attr)
    {
        return *m_InstId_attr;
    }
    return ST_String::default_instance();
}

bool CT_SHAPEOBJECT::has_Lock_attr() const
{
    return m_has_Lock_attr;
}

void CT_SHAPEOBJECT::set_Lock_attr(const ST_String& _Lock_attr)
{
    m_has_Lock_attr = true;
    m_Lock_attr = new ST_String(_Lock_attr);
}

const ST_String& CT_SHAPEOBJECT::get_Lock_attr() const
{
    if (m_Lock_attr)
    {
        return *m_Lock_attr;
    }
    return ST_String::default_instance();
}

bool CT_SHAPEOBJECT::has_NumberingType_attr() const
{
    return m_has_NumberingType_attr;
}

void CT_SHAPEOBJECT::set_NumberingType_attr(const ST_String& _NumberingType_attr)
{
    m_has_NumberingType_attr = true;
    m_NumberingType_attr = new ST_String(_NumberingType_attr);
}

const ST_String& CT_SHAPEOBJECT::get_NumberingType_attr() const
{
    if (m_NumberingType_attr)
    {
        return *m_NumberingType_attr;
    }
    return ST_String::default_instance();
}

bool CT_SHAPEOBJECT::has_ZOrder_attr() const
{
    return m_has_ZOrder_attr;
}

void CT_SHAPEOBJECT::set_ZOrder_attr(const ST_String& _ZOrder_attr)
{
    m_has_ZOrder_attr = true;
    m_ZOrder_attr = new ST_String(_ZOrder_attr);
}

const ST_String& CT_SHAPEOBJECT::get_ZOrder_attr() const
{
    if (m_ZOrder_attr)
    {
        return *m_ZOrder_attr;
    }
    return ST_String::default_instance();
}


// CT_SHAPEOBJECT::ChildGroup_1
CT_SHAPEOBJECT::ChildGroup_1::ChildGroup_1()
    :m_has_SIZE(false),
     m_SIZE(NULL)
{
}
bool CT_SHAPEOBJECT::ChildGroup_1::has_SIZE() const
{
    return m_has_SIZE;
}

CT_SIZE* CT_SHAPEOBJECT::ChildGroup_1::mutable_SIZE()
{

    m_has_SIZE = true;
    if (!m_SIZE)
    {
        m_SIZE = new CT_SIZE();
    }
    return m_SIZE;
}

const CT_SIZE& CT_SHAPEOBJECT::ChildGroup_1::get_SIZE() const
{
    if (m_SIZE)
    {
        return *m_SIZE;
    }
    return CT_SIZE::default_instance();
}


// CT_SHAPEOBJECT::ChildGroup_2
CT_SHAPEOBJECT::ChildGroup_2::ChildGroup_2()
    :m_has_POSITION(false),
     m_POSITION(NULL)
{
}
bool CT_SHAPEOBJECT::ChildGroup_2::has_POSITION() const
{
    return m_has_POSITION;
}

CT_POSITION* CT_SHAPEOBJECT::ChildGroup_2::mutable_POSITION()
{

    m_has_POSITION = true;
    if (!m_POSITION)
    {
        m_POSITION = new CT_POSITION();
    }
    return m_POSITION;
}

const CT_POSITION& CT_SHAPEOBJECT::ChildGroup_2::get_POSITION() const
{
    if (m_POSITION)
    {
        return *m_POSITION;
    }
    return CT_POSITION::default_instance();
}


// CT_SHAPEOBJECT::ChildGroup_3
CT_SHAPEOBJECT::ChildGroup_3::ChildGroup_3()
    :m_has_OUTSIDEMARGIN(false),
     m_OUTSIDEMARGIN(NULL)
{
}
bool CT_SHAPEOBJECT::ChildGroup_3::has_OUTSIDEMARGIN() const
{
    return m_has_OUTSIDEMARGIN;
}

CT_OUTSIDEMARGIN* CT_SHAPEOBJECT::ChildGroup_3::mutable_OUTSIDEMARGIN()
{

    m_has_OUTSIDEMARGIN = true;
    if (!m_OUTSIDEMARGIN)
    {
        m_OUTSIDEMARGIN = new CT_OUTSIDEMARGIN();
    }
    return m_OUTSIDEMARGIN;
}

const CT_OUTSIDEMARGIN& CT_SHAPEOBJECT::ChildGroup_3::get_OUTSIDEMARGIN() const
{
    if (m_OUTSIDEMARGIN)
    {
        return *m_OUTSIDEMARGIN;
    }
    return CT_OUTSIDEMARGIN::default_instance();
}

CT_SHAPEOBJECT* CT_SHAPEOBJECT::default_instance_ = NULL;

// CT_INSIDEMARGIN
CT_INSIDEMARGIN::CT_INSIDEMARGIN()
    :m_has_Left_attr(false),
     m_Left_attr(NULL),
     m_has_Right_attr(false),
     m_Right_attr(NULL),
     m_has_Top_attr(false),
     m_Top_attr(NULL),
     m_has_Bottom_attr(false),
     m_Bottom_attr(NULL)
{
}
CT_INSIDEMARGIN::~CT_INSIDEMARGIN()
{
    clear();
}
void CT_INSIDEMARGIN::clear()
{
    m_has_Left_attr = false;

    if (m_Left_attr)
    {
        delete m_Left_attr;
        m_Left_attr = NULL;
    }


    m_has_Right_attr = false;

    if (m_Right_attr)
    {
        delete m_Right_attr;
        m_Right_attr = NULL;
    }


    m_has_Top_attr = false;

    if (m_Top_attr)
    {
        delete m_Top_attr;
        m_Top_attr = NULL;
    }


    m_has_Bottom_attr = false;

    if (m_Bottom_attr)
    {
        delete m_Bottom_attr;
        m_Bottom_attr = NULL;
    }

}

void CT_INSIDEMARGIN::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_Left_attr)
    {
        m_Left_attr->toXmlAttr("Left", _outStream);
    }



    if (m_has_Right_attr)
    {
        m_Right_attr->toXmlAttr("Right", _outStream);
    }



    if (m_has_Top_attr)
    {
        m_Top_attr->toXmlAttr("Top", _outStream);
    }



    if (m_has_Bottom_attr)
    {
        m_Bottom_attr->toXmlAttr("Bottom", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_INSIDEMARGIN& CT_INSIDEMARGIN::default_instance()
{
    if (!CT_INSIDEMARGIN::default_instance_)
    {
        CT_INSIDEMARGIN::default_instance_ = new CT_INSIDEMARGIN();
    }
    return *CT_INSIDEMARGIN::default_instance_;
}

bool CT_INSIDEMARGIN::has_Left_attr() const
{
    return m_has_Left_attr;
}

void CT_INSIDEMARGIN::set_Left_attr(const ST_String& _Left_attr)
{
    m_has_Left_attr = true;
    m_Left_attr = new ST_String(_Left_attr);
}

const ST_String& CT_INSIDEMARGIN::get_Left_attr() const
{
    if (m_Left_attr)
    {
        return *m_Left_attr;
    }
    return ST_String::default_instance();
}

bool CT_INSIDEMARGIN::has_Right_attr() const
{
    return m_has_Right_attr;
}

void CT_INSIDEMARGIN::set_Right_attr(const ST_String& _Right_attr)
{
    m_has_Right_attr = true;
    m_Right_attr = new ST_String(_Right_attr);
}

const ST_String& CT_INSIDEMARGIN::get_Right_attr() const
{
    if (m_Right_attr)
    {
        return *m_Right_attr;
    }
    return ST_String::default_instance();
}

bool CT_INSIDEMARGIN::has_Top_attr() const
{
    return m_has_Top_attr;
}

void CT_INSIDEMARGIN::set_Top_attr(const ST_String& _Top_attr)
{
    m_has_Top_attr = true;
    m_Top_attr = new ST_String(_Top_attr);
}

const ST_String& CT_INSIDEMARGIN::get_Top_attr() const
{
    if (m_Top_attr)
    {
        return *m_Top_attr;
    }
    return ST_String::default_instance();
}

bool CT_INSIDEMARGIN::has_Bottom_attr() const
{
    return m_has_Bottom_attr;
}

void CT_INSIDEMARGIN::set_Bottom_attr(const ST_String& _Bottom_attr)
{
    m_has_Bottom_attr = true;
    m_Bottom_attr = new ST_String(_Bottom_attr);
}

const ST_String& CT_INSIDEMARGIN::get_Bottom_attr() const
{
    if (m_Bottom_attr)
    {
        return *m_Bottom_attr;
    }
    return ST_String::default_instance();
}

CT_INSIDEMARGIN* CT_INSIDEMARGIN::default_instance_ = NULL;

// CT_CELLZONE
CT_CELLZONE::CT_CELLZONE()
    :m_has_StartRowAddr_attr(false),
     m_StartRowAddr_attr(NULL),
     m_has_StartColAddr_attr(false),
     m_StartColAddr_attr(NULL),
     m_has_EndRowAddr_attr(false),
     m_EndRowAddr_attr(NULL),
     m_has_EndColAddr_attr(false),
     m_EndColAddr_attr(NULL),
     m_has_BorderFill_attr(false),
     m_BorderFill_attr(NULL)
{
}
CT_CELLZONE::~CT_CELLZONE()
{
    clear();
}
void CT_CELLZONE::clear()
{
    m_has_StartRowAddr_attr = false;

    if (m_StartRowAddr_attr)
    {
        delete m_StartRowAddr_attr;
        m_StartRowAddr_attr = NULL;
    }


    m_has_StartColAddr_attr = false;

    if (m_StartColAddr_attr)
    {
        delete m_StartColAddr_attr;
        m_StartColAddr_attr = NULL;
    }


    m_has_EndRowAddr_attr = false;

    if (m_EndRowAddr_attr)
    {
        delete m_EndRowAddr_attr;
        m_EndRowAddr_attr = NULL;
    }


    m_has_EndColAddr_attr = false;

    if (m_EndColAddr_attr)
    {
        delete m_EndColAddr_attr;
        m_EndColAddr_attr = NULL;
    }


    m_has_BorderFill_attr = false;

    if (m_BorderFill_attr)
    {
        delete m_BorderFill_attr;
        m_BorderFill_attr = NULL;
    }

}

void CT_CELLZONE::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_StartRowAddr_attr)
    {
        m_StartRowAddr_attr->toXmlAttr("StartRowAddr", _outStream);
    }



    if (m_has_StartColAddr_attr)
    {
        m_StartColAddr_attr->toXmlAttr("StartColAddr", _outStream);
    }



    if (m_has_EndRowAddr_attr)
    {
        m_EndRowAddr_attr->toXmlAttr("EndRowAddr", _outStream);
    }



    if (m_has_EndColAddr_attr)
    {
        m_EndColAddr_attr->toXmlAttr("EndColAddr", _outStream);
    }



    if (m_has_BorderFill_attr)
    {
        m_BorderFill_attr->toXmlAttr("BorderFill", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_CELLZONE& CT_CELLZONE::default_instance()
{
    if (!CT_CELLZONE::default_instance_)
    {
        CT_CELLZONE::default_instance_ = new CT_CELLZONE();
    }
    return *CT_CELLZONE::default_instance_;
}

bool CT_CELLZONE::has_StartRowAddr_attr() const
{
    return m_has_StartRowAddr_attr;
}

void CT_CELLZONE::set_StartRowAddr_attr(const ST_String& _StartRowAddr_attr)
{
    m_has_StartRowAddr_attr = true;
    m_StartRowAddr_attr = new ST_String(_StartRowAddr_attr);
}

const ST_String& CT_CELLZONE::get_StartRowAddr_attr() const
{
    if (m_StartRowAddr_attr)
    {
        return *m_StartRowAddr_attr;
    }
    return ST_String::default_instance();
}

bool CT_CELLZONE::has_StartColAddr_attr() const
{
    return m_has_StartColAddr_attr;
}

void CT_CELLZONE::set_StartColAddr_attr(const ST_String& _StartColAddr_attr)
{
    m_has_StartColAddr_attr = true;
    m_StartColAddr_attr = new ST_String(_StartColAddr_attr);
}

const ST_String& CT_CELLZONE::get_StartColAddr_attr() const
{
    if (m_StartColAddr_attr)
    {
        return *m_StartColAddr_attr;
    }
    return ST_String::default_instance();
}

bool CT_CELLZONE::has_EndRowAddr_attr() const
{
    return m_has_EndRowAddr_attr;
}

void CT_CELLZONE::set_EndRowAddr_attr(const ST_String& _EndRowAddr_attr)
{
    m_has_EndRowAddr_attr = true;
    m_EndRowAddr_attr = new ST_String(_EndRowAddr_attr);
}

const ST_String& CT_CELLZONE::get_EndRowAddr_attr() const
{
    if (m_EndRowAddr_attr)
    {
        return *m_EndRowAddr_attr;
    }
    return ST_String::default_instance();
}

bool CT_CELLZONE::has_EndColAddr_attr() const
{
    return m_has_EndColAddr_attr;
}

void CT_CELLZONE::set_EndColAddr_attr(const ST_String& _EndColAddr_attr)
{
    m_has_EndColAddr_attr = true;
    m_EndColAddr_attr = new ST_String(_EndColAddr_attr);
}

const ST_String& CT_CELLZONE::get_EndColAddr_attr() const
{
    if (m_EndColAddr_attr)
    {
        return *m_EndColAddr_attr;
    }
    return ST_String::default_instance();
}

bool CT_CELLZONE::has_BorderFill_attr() const
{
    return m_has_BorderFill_attr;
}

void CT_CELLZONE::set_BorderFill_attr(const ST_String& _BorderFill_attr)
{
    m_has_BorderFill_attr = true;
    m_BorderFill_attr = new ST_String(_BorderFill_attr);
}

const ST_String& CT_CELLZONE::get_BorderFill_attr() const
{
    if (m_BorderFill_attr)
    {
        return *m_BorderFill_attr;
    }
    return ST_String::default_instance();
}

CT_CELLZONE* CT_CELLZONE::default_instance_ = NULL;

// CT_CELLZONELIST
CT_CELLZONELIST::CT_CELLZONELIST()
    :m_has_Count_attr(false),
     m_Count_attr(NULL)
{
}
CT_CELLZONELIST::~CT_CELLZONELIST()
{
    clear();
}
CT_CELLZONE* CT_CELLZONELIST::add_CELLZONE()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_CELLZONE* pNewChild = pChildGroup->mutable_CELLZONE();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

void CT_CELLZONELIST::clear()
{
    m_has_Count_attr = false;

    if (m_Count_attr)
    {
        delete m_Count_attr;
        m_Count_attr = NULL;
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

void CT_CELLZONELIST::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_Count_attr)
    {
        m_Count_attr->toXmlAttr("Count", _outStream);
    }

    _outStream << ">";

    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_CELLZONE())
            {
                (*iter)->get_CELLZONE().toXmlElem("CELLZONE", "", _outStream);
            }


        }
    }

    _outStream << "</" << _elemName << ">";
}

const CT_CELLZONELIST& CT_CELLZONELIST::default_instance()
{
    if (!CT_CELLZONELIST::default_instance_)
    {
        CT_CELLZONELIST::default_instance_ = new CT_CELLZONELIST();
    }
    return *CT_CELLZONELIST::default_instance_;
}

bool CT_CELLZONELIST::has_Count_attr() const
{
    return m_has_Count_attr;
}

void CT_CELLZONELIST::set_Count_attr(const ST_UnsignedDecimalNumber& _Count_attr)
{
    m_has_Count_attr = true;
    m_Count_attr = new ST_UnsignedDecimalNumber(_Count_attr);
}

const ST_UnsignedDecimalNumber& CT_CELLZONELIST::get_Count_attr() const
{
    if (m_Count_attr)
    {
        return *m_Count_attr;
    }
    return ST_UnsignedDecimalNumber::default_instance();
}


// CT_CELLZONELIST::ChildGroup_1
CT_CELLZONELIST::ChildGroup_1::ChildGroup_1()
    :m_has_CELLZONE(false),
     m_CELLZONE(NULL)
{
}
bool CT_CELLZONELIST::ChildGroup_1::has_CELLZONE() const
{
    return m_has_CELLZONE;
}

CT_CELLZONE* CT_CELLZONELIST::ChildGroup_1::mutable_CELLZONE()
{

    m_has_CELLZONE = true;
    if (!m_CELLZONE)
    {
        m_CELLZONE = new CT_CELLZONE();
    }
    return m_CELLZONE;
}

const CT_CELLZONE& CT_CELLZONELIST::ChildGroup_1::get_CELLZONE() const
{
    if (m_CELLZONE)
    {
        return *m_CELLZONE;
    }
    return CT_CELLZONE::default_instance();
}

CT_CELLZONELIST* CT_CELLZONELIST::default_instance_ = NULL;

// CT_ROW
CT_ROW::CT_ROW()

{
}
CT_ROW::~CT_ROW()
{
    clear();
}
CT_CELL* CT_ROW::add_CELL()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_CELL* pNewChild = pChildGroup->mutable_CELL();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

void CT_ROW::clear()
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

void CT_ROW::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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
            if ((*iter)->has_CELL())
            {
                (*iter)->get_CELL().toXmlElem("CELL", "", _outStream);
            }


        }
    }

    _outStream << "</" << _elemName << ">";
}

const CT_ROW& CT_ROW::default_instance()
{
    if (!CT_ROW::default_instance_)
    {
        CT_ROW::default_instance_ = new CT_ROW();
    }
    return *CT_ROW::default_instance_;
}


// CT_ROW::ChildGroup_1
CT_ROW::ChildGroup_1::ChildGroup_1()
    :m_has_CELL(false),
     m_CELL(NULL)
{
}
bool CT_ROW::ChildGroup_1::has_CELL() const
{
    return m_has_CELL;
}

CT_CELL* CT_ROW::ChildGroup_1::mutable_CELL()
{

    m_has_CELL = true;
    if (!m_CELL)
    {
        m_CELL = new CT_CELL();
    }
    return m_CELL;
}

const CT_CELL& CT_ROW::ChildGroup_1::get_CELL() const
{
    if (m_CELL)
    {
        return *m_CELL;
    }
    return CT_CELL::default_instance();
}

CT_ROW* CT_ROW::default_instance_ = NULL;

// CT_CELL
CT_CELL::CT_CELL()
    :m_has_Name_attr(false),
     m_Name_attr(NULL),
     m_has_ColAddr_attr(false),
     m_ColAddr_attr(NULL),
     m_has_RowAddr_attr(false),
     m_RowAddr_attr(NULL),
     m_has_ColSpan_attr(false),
     m_ColSpan_attr(NULL),
     m_has_RowSpan_attr(false),
     m_RowSpan_attr(NULL),
     m_has_Width_attr(false),
     m_Width_attr(NULL),
     m_has_Height_attr(false),
     m_Height_attr(NULL),
     m_has_Header_attr(false),
     m_Header_attr(NULL),
     m_has_HasMargin_attr(false),
     m_HasMargin_attr(NULL),
     m_has_Protect_attr(false),
     m_Protect_attr(NULL),
     m_has_Editable_attr(false),
     m_Editable_attr(NULL),
     m_has_Dirty_attr(false),
     m_Dirty_attr(NULL),
     m_has_BorderFill_attr(false),
     m_BorderFill_attr(NULL)
{
}
CT_CELL::~CT_CELL()
{
    clear();
}
CT_CELLMARGIN* CT_CELL::add_CELLMARGIN()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_CELLMARGIN* pNewChild = pChildGroup->mutable_CELLMARGIN();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

CT_PARALIST* CT_CELL::add_PARALIST()
{
    ChildGroup_2 *pChildGroup = new ChildGroup_2();
    CT_PARALIST* pNewChild = pChildGroup->mutable_PARALIST();
    m_childGroupList_2.push_back(pChildGroup);
    return pNewChild;
}

void CT_CELL::clear()
{
    m_has_Name_attr = false;

    if (m_Name_attr)
    {
        delete m_Name_attr;
        m_Name_attr = NULL;
    }


    m_has_ColAddr_attr = false;

    if (m_ColAddr_attr)
    {
        delete m_ColAddr_attr;
        m_ColAddr_attr = NULL;
    }


    m_has_RowAddr_attr = false;

    if (m_RowAddr_attr)
    {
        delete m_RowAddr_attr;
        m_RowAddr_attr = NULL;
    }


    m_has_ColSpan_attr = false;

    if (m_ColSpan_attr)
    {
        delete m_ColSpan_attr;
        m_ColSpan_attr = NULL;
    }


    m_has_RowSpan_attr = false;

    if (m_RowSpan_attr)
    {
        delete m_RowSpan_attr;
        m_RowSpan_attr = NULL;
    }


    m_has_Width_attr = false;

    if (m_Width_attr)
    {
        delete m_Width_attr;
        m_Width_attr = NULL;
    }


    m_has_Height_attr = false;

    if (m_Height_attr)
    {
        delete m_Height_attr;
        m_Height_attr = NULL;
    }


    m_has_Header_attr = false;

    if (m_Header_attr)
    {
        delete m_Header_attr;
        m_Header_attr = NULL;
    }


    m_has_HasMargin_attr = false;

    if (m_HasMargin_attr)
    {
        delete m_HasMargin_attr;
        m_HasMargin_attr = NULL;
    }


    m_has_Protect_attr = false;

    if (m_Protect_attr)
    {
        delete m_Protect_attr;
        m_Protect_attr = NULL;
    }


    m_has_Editable_attr = false;

    if (m_Editable_attr)
    {
        delete m_Editable_attr;
        m_Editable_attr = NULL;
    }


    m_has_Dirty_attr = false;

    if (m_Dirty_attr)
    {
        delete m_Dirty_attr;
        m_Dirty_attr = NULL;
    }


    m_has_BorderFill_attr = false;

    if (m_BorderFill_attr)
    {
        delete m_BorderFill_attr;
        m_BorderFill_attr = NULL;
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

void CT_CELL::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_Name_attr)
    {
        m_Name_attr->toXmlAttr("Name", _outStream);
    }



    if (m_has_ColAddr_attr)
    {
        m_ColAddr_attr->toXmlAttr("ColAddr", _outStream);
    }



    if (m_has_RowAddr_attr)
    {
        m_RowAddr_attr->toXmlAttr("RowAddr", _outStream);
    }



    if (m_has_ColSpan_attr)
    {
        m_ColSpan_attr->toXmlAttr("ColSpan", _outStream);
    }



    if (m_has_RowSpan_attr)
    {
        m_RowSpan_attr->toXmlAttr("RowSpan", _outStream);
    }



    if (m_has_Width_attr)
    {
        m_Width_attr->toXmlAttr("Width", _outStream);
    }



    if (m_has_Height_attr)
    {
        m_Height_attr->toXmlAttr("Height", _outStream);
    }



    if (m_has_Header_attr)
    {
        m_Header_attr->toXmlAttr("Header", _outStream);
    }



    if (m_has_HasMargin_attr)
    {
        m_HasMargin_attr->toXmlAttr("HasMargin", _outStream);
    }



    if (m_has_Protect_attr)
    {
        m_Protect_attr->toXmlAttr("Protect", _outStream);
    }



    if (m_has_Editable_attr)
    {
        m_Editable_attr->toXmlAttr("Editable", _outStream);
    }



    if (m_has_Dirty_attr)
    {
        m_Dirty_attr->toXmlAttr("Dirty", _outStream);
    }



    if (m_has_BorderFill_attr)
    {
        m_BorderFill_attr->toXmlAttr("BorderFill", _outStream);
    }

    _outStream << ">";

    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_CELLMARGIN())
            {
                (*iter)->get_CELLMARGIN().toXmlElem("CELLMARGIN", "", _outStream);
            }


        }
    }

    {
        vector<ChildGroup_2*>::const_iterator iter;
        for (iter = m_childGroupList_2.begin(); iter != m_childGroupList_2.end(); ++iter)
        {
            if ((*iter)->has_PARALIST())
            {
                (*iter)->get_PARALIST().toXmlElem("PARALIST", "", _outStream);
            }


        }
    }

    _outStream << "</" << _elemName << ">";
}

const CT_CELL& CT_CELL::default_instance()
{
    if (!CT_CELL::default_instance_)
    {
        CT_CELL::default_instance_ = new CT_CELL();
    }
    return *CT_CELL::default_instance_;
}

bool CT_CELL::has_Name_attr() const
{
    return m_has_Name_attr;
}

void CT_CELL::set_Name_attr(const ST_String& _Name_attr)
{
    m_has_Name_attr = true;
    m_Name_attr = new ST_String(_Name_attr);
}

const ST_String& CT_CELL::get_Name_attr() const
{
    if (m_Name_attr)
    {
        return *m_Name_attr;
    }
    return ST_String::default_instance();
}

bool CT_CELL::has_ColAddr_attr() const
{
    return m_has_ColAddr_attr;
}

void CT_CELL::set_ColAddr_attr(const ST_UnsignedDecimalNumber& _ColAddr_attr)
{
    m_has_ColAddr_attr = true;
    m_ColAddr_attr = new ST_UnsignedDecimalNumber(_ColAddr_attr);
}

const ST_UnsignedDecimalNumber& CT_CELL::get_ColAddr_attr() const
{
    if (m_ColAddr_attr)
    {
        return *m_ColAddr_attr;
    }
    return ST_UnsignedDecimalNumber::default_instance();
}

bool CT_CELL::has_RowAddr_attr() const
{
    return m_has_RowAddr_attr;
}

void CT_CELL::set_RowAddr_attr(const ST_UnsignedDecimalNumber& _RowAddr_attr)
{
    m_has_RowAddr_attr = true;
    m_RowAddr_attr = new ST_UnsignedDecimalNumber(_RowAddr_attr);
}

const ST_UnsignedDecimalNumber& CT_CELL::get_RowAddr_attr() const
{
    if (m_RowAddr_attr)
    {
        return *m_RowAddr_attr;
    }
    return ST_UnsignedDecimalNumber::default_instance();
}

bool CT_CELL::has_ColSpan_attr() const
{
    return m_has_ColSpan_attr;
}

void CT_CELL::set_ColSpan_attr(const ST_UnsignedDecimalNumber& _ColSpan_attr)
{
    m_has_ColSpan_attr = true;
    m_ColSpan_attr = new ST_UnsignedDecimalNumber(_ColSpan_attr);
}

const ST_UnsignedDecimalNumber& CT_CELL::get_ColSpan_attr() const
{
    if (m_ColSpan_attr)
    {
        return *m_ColSpan_attr;
    }
    return ST_UnsignedDecimalNumber::default_instance();
}

bool CT_CELL::has_RowSpan_attr() const
{
    return m_has_RowSpan_attr;
}

void CT_CELL::set_RowSpan_attr(const ST_UnsignedDecimalNumber& _RowSpan_attr)
{
    m_has_RowSpan_attr = true;
    m_RowSpan_attr = new ST_UnsignedDecimalNumber(_RowSpan_attr);
}

const ST_UnsignedDecimalNumber& CT_CELL::get_RowSpan_attr() const
{
    if (m_RowSpan_attr)
    {
        return *m_RowSpan_attr;
    }
    return ST_UnsignedDecimalNumber::default_instance();
}

bool CT_CELL::has_Width_attr() const
{
    return m_has_Width_attr;
}

void CT_CELL::set_Width_attr(const ST_UnsignedDecimalNumber& _Width_attr)
{
    m_has_Width_attr = true;
    m_Width_attr = new ST_UnsignedDecimalNumber(_Width_attr);
}

const ST_UnsignedDecimalNumber& CT_CELL::get_Width_attr() const
{
    if (m_Width_attr)
    {
        return *m_Width_attr;
    }
    return ST_UnsignedDecimalNumber::default_instance();
}

bool CT_CELL::has_Height_attr() const
{
    return m_has_Height_attr;
}

void CT_CELL::set_Height_attr(const ST_UnsignedDecimalNumber& _Height_attr)
{
    m_has_Height_attr = true;
    m_Height_attr = new ST_UnsignedDecimalNumber(_Height_attr);
}

const ST_UnsignedDecimalNumber& CT_CELL::get_Height_attr() const
{
    if (m_Height_attr)
    {
        return *m_Height_attr;
    }
    return ST_UnsignedDecimalNumber::default_instance();
}

bool CT_CELL::has_Header_attr() const
{
    return m_has_Header_attr;
}

void CT_CELL::set_Header_attr(const ST_OnOff& _Header_attr)
{
    m_has_Header_attr = true;
    m_Header_attr = new ST_OnOff(_Header_attr);
}

const ST_OnOff& CT_CELL::get_Header_attr() const
{
    if (m_Header_attr)
    {
        return *m_Header_attr;
    }
    return ST_OnOff::default_instance();
}

bool CT_CELL::has_HasMargin_attr() const
{
    return m_has_HasMargin_attr;
}

void CT_CELL::set_HasMargin_attr(const ST_OnOff& _HasMargin_attr)
{
    m_has_HasMargin_attr = true;
    m_HasMargin_attr = new ST_OnOff(_HasMargin_attr);
}

const ST_OnOff& CT_CELL::get_HasMargin_attr() const
{
    if (m_HasMargin_attr)
    {
        return *m_HasMargin_attr;
    }
    return ST_OnOff::default_instance();
}

bool CT_CELL::has_Protect_attr() const
{
    return m_has_Protect_attr;
}

void CT_CELL::set_Protect_attr(const ST_OnOff& _Protect_attr)
{
    m_has_Protect_attr = true;
    m_Protect_attr = new ST_OnOff(_Protect_attr);
}

const ST_OnOff& CT_CELL::get_Protect_attr() const
{
    if (m_Protect_attr)
    {
        return *m_Protect_attr;
    }
    return ST_OnOff::default_instance();
}

bool CT_CELL::has_Editable_attr() const
{
    return m_has_Editable_attr;
}

void CT_CELL::set_Editable_attr(const ST_OnOff& _Editable_attr)
{
    m_has_Editable_attr = true;
    m_Editable_attr = new ST_OnOff(_Editable_attr);
}

const ST_OnOff& CT_CELL::get_Editable_attr() const
{
    if (m_Editable_attr)
    {
        return *m_Editable_attr;
    }
    return ST_OnOff::default_instance();
}

bool CT_CELL::has_Dirty_attr() const
{
    return m_has_Dirty_attr;
}

void CT_CELL::set_Dirty_attr(const ST_OnOff& _Dirty_attr)
{
    m_has_Dirty_attr = true;
    m_Dirty_attr = new ST_OnOff(_Dirty_attr);
}

const ST_OnOff& CT_CELL::get_Dirty_attr() const
{
    if (m_Dirty_attr)
    {
        return *m_Dirty_attr;
    }
    return ST_OnOff::default_instance();
}

bool CT_CELL::has_BorderFill_attr() const
{
    return m_has_BorderFill_attr;
}

void CT_CELL::set_BorderFill_attr(const ST_String& _BorderFill_attr)
{
    m_has_BorderFill_attr = true;
    m_BorderFill_attr = new ST_String(_BorderFill_attr);
}

const ST_String& CT_CELL::get_BorderFill_attr() const
{
    if (m_BorderFill_attr)
    {
        return *m_BorderFill_attr;
    }
    return ST_String::default_instance();
}


// CT_CELL::ChildGroup_1
CT_CELL::ChildGroup_1::ChildGroup_1()
    :m_has_CELLMARGIN(false),
     m_CELLMARGIN(NULL)
{
}
bool CT_CELL::ChildGroup_1::has_CELLMARGIN() const
{
    return m_has_CELLMARGIN;
}

CT_CELLMARGIN* CT_CELL::ChildGroup_1::mutable_CELLMARGIN()
{

    m_has_CELLMARGIN = true;
    if (!m_CELLMARGIN)
    {
        m_CELLMARGIN = new CT_CELLMARGIN();
    }
    return m_CELLMARGIN;
}

const CT_CELLMARGIN& CT_CELL::ChildGroup_1::get_CELLMARGIN() const
{
    if (m_CELLMARGIN)
    {
        return *m_CELLMARGIN;
    }
    return CT_CELLMARGIN::default_instance();
}


// CT_CELL::ChildGroup_2
CT_CELL::ChildGroup_2::ChildGroup_2()
    :m_has_PARALIST(false),
     m_PARALIST(NULL)
{
}
bool CT_CELL::ChildGroup_2::has_PARALIST() const
{
    return m_has_PARALIST;
}

CT_PARALIST* CT_CELL::ChildGroup_2::mutable_PARALIST()
{

    m_has_PARALIST = true;
    if (!m_PARALIST)
    {
        m_PARALIST = new CT_PARALIST();
    }
    return m_PARALIST;
}

const CT_PARALIST& CT_CELL::ChildGroup_2::get_PARALIST() const
{
    if (m_PARALIST)
    {
        return *m_PARALIST;
    }
    return CT_PARALIST::default_instance();
}

CT_CELL* CT_CELL::default_instance_ = NULL;

// CT_CELLMARGIN
CT_CELLMARGIN::CT_CELLMARGIN()
    :m_has_Left_attr(false),
     m_Left_attr(NULL),
     m_has_Right_attr(false),
     m_Right_attr(NULL),
     m_has_Top_attr(false),
     m_Top_attr(NULL),
     m_has_Bottom_attr(false),
     m_Bottom_attr(NULL)
{
}
CT_CELLMARGIN::~CT_CELLMARGIN()
{
    clear();
}
void CT_CELLMARGIN::clear()
{
    m_has_Left_attr = false;

    if (m_Left_attr)
    {
        delete m_Left_attr;
        m_Left_attr = NULL;
    }


    m_has_Right_attr = false;

    if (m_Right_attr)
    {
        delete m_Right_attr;
        m_Right_attr = NULL;
    }


    m_has_Top_attr = false;

    if (m_Top_attr)
    {
        delete m_Top_attr;
        m_Top_attr = NULL;
    }


    m_has_Bottom_attr = false;

    if (m_Bottom_attr)
    {
        delete m_Bottom_attr;
        m_Bottom_attr = NULL;
    }

}

void CT_CELLMARGIN::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_Left_attr)
    {
        m_Left_attr->toXmlAttr("Left", _outStream);
    }



    if (m_has_Right_attr)
    {
        m_Right_attr->toXmlAttr("Right", _outStream);
    }



    if (m_has_Top_attr)
    {
        m_Top_attr->toXmlAttr("Top", _outStream);
    }



    if (m_has_Bottom_attr)
    {
        m_Bottom_attr->toXmlAttr("Bottom", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_CELLMARGIN& CT_CELLMARGIN::default_instance()
{
    if (!CT_CELLMARGIN::default_instance_)
    {
        CT_CELLMARGIN::default_instance_ = new CT_CELLMARGIN();
    }
    return *CT_CELLMARGIN::default_instance_;
}

bool CT_CELLMARGIN::has_Left_attr() const
{
    return m_has_Left_attr;
}

void CT_CELLMARGIN::set_Left_attr(const ST_UnsignedDecimalNumber& _Left_attr)
{
    m_has_Left_attr = true;
    m_Left_attr = new ST_UnsignedDecimalNumber(_Left_attr);
}

const ST_UnsignedDecimalNumber& CT_CELLMARGIN::get_Left_attr() const
{
    if (m_Left_attr)
    {
        return *m_Left_attr;
    }
    return ST_UnsignedDecimalNumber::default_instance();
}

bool CT_CELLMARGIN::has_Right_attr() const
{
    return m_has_Right_attr;
}

void CT_CELLMARGIN::set_Right_attr(const ST_UnsignedDecimalNumber& _Right_attr)
{
    m_has_Right_attr = true;
    m_Right_attr = new ST_UnsignedDecimalNumber(_Right_attr);
}

const ST_UnsignedDecimalNumber& CT_CELLMARGIN::get_Right_attr() const
{
    if (m_Right_attr)
    {
        return *m_Right_attr;
    }
    return ST_UnsignedDecimalNumber::default_instance();
}

bool CT_CELLMARGIN::has_Top_attr() const
{
    return m_has_Top_attr;
}

void CT_CELLMARGIN::set_Top_attr(const ST_UnsignedDecimalNumber& _Top_attr)
{
    m_has_Top_attr = true;
    m_Top_attr = new ST_UnsignedDecimalNumber(_Top_attr);
}

const ST_UnsignedDecimalNumber& CT_CELLMARGIN::get_Top_attr() const
{
    if (m_Top_attr)
    {
        return *m_Top_attr;
    }
    return ST_UnsignedDecimalNumber::default_instance();
}

bool CT_CELLMARGIN::has_Bottom_attr() const
{
    return m_has_Bottom_attr;
}

void CT_CELLMARGIN::set_Bottom_attr(const ST_UnsignedDecimalNumber& _Bottom_attr)
{
    m_has_Bottom_attr = true;
    m_Bottom_attr = new ST_UnsignedDecimalNumber(_Bottom_attr);
}

const ST_UnsignedDecimalNumber& CT_CELLMARGIN::get_Bottom_attr() const
{
    if (m_Bottom_attr)
    {
        return *m_Bottom_attr;
    }
    return ST_UnsignedDecimalNumber::default_instance();
}

CT_CELLMARGIN* CT_CELLMARGIN::default_instance_ = NULL;

// CT_PARALIST
CT_PARALIST::CT_PARALIST()
    :m_has_TextDirection_attr(false),
     m_TextDirection_attr(NULL),
     m_has_LineWrap_attr(false),
     m_LineWrap_attr(NULL),
     m_has_VertAlign_attr(false),
     m_VertAlign_attr(NULL),
     m_has_LinkListID_attr(false),
     m_LinkListID_attr(NULL),
     m_has_LinkListIDNext_attr(false),
     m_LinkListIDNext_attr(NULL)
{
}
CT_PARALIST::~CT_PARALIST()
{
    clear();
}
CT_P* CT_PARALIST::add_P()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_P* pNewChild = pChildGroup->mutable_P();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

void CT_PARALIST::clear()
{
    m_has_TextDirection_attr = false;

    if (m_TextDirection_attr)
    {
        delete m_TextDirection_attr;
        m_TextDirection_attr = NULL;
    }


    m_has_LineWrap_attr = false;

    if (m_LineWrap_attr)
    {
        delete m_LineWrap_attr;
        m_LineWrap_attr = NULL;
    }


    m_has_VertAlign_attr = false;

    if (m_VertAlign_attr)
    {
        delete m_VertAlign_attr;
        m_VertAlign_attr = NULL;
    }


    m_has_LinkListID_attr = false;

    if (m_LinkListID_attr)
    {
        delete m_LinkListID_attr;
        m_LinkListID_attr = NULL;
    }


    m_has_LinkListIDNext_attr = false;

    if (m_LinkListIDNext_attr)
    {
        delete m_LinkListIDNext_attr;
        m_LinkListIDNext_attr = NULL;
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

void CT_PARALIST::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_TextDirection_attr)
    {
        m_TextDirection_attr->toXmlAttr("TextDirection", _outStream);
    }



    if (m_has_LineWrap_attr)
    {
        m_LineWrap_attr->toXmlAttr("LineWrap", _outStream);
    }



    if (m_has_VertAlign_attr)
    {
        m_VertAlign_attr->toXmlAttr("VertAlign", _outStream);
    }



    if (m_has_LinkListID_attr)
    {
        m_LinkListID_attr->toXmlAttr("LinkListID", _outStream);
    }



    if (m_has_LinkListIDNext_attr)
    {
        m_LinkListIDNext_attr->toXmlAttr("LinkListIDNext", _outStream);
    }

    _outStream << ">";

    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_P())
            {
                (*iter)->get_P().toXmlElem("P", "", _outStream);
            }


        }
    }

    _outStream << "</" << _elemName << ">";
}

const CT_PARALIST& CT_PARALIST::default_instance()
{
    if (!CT_PARALIST::default_instance_)
    {
        CT_PARALIST::default_instance_ = new CT_PARALIST();
    }
    return *CT_PARALIST::default_instance_;
}

bool CT_PARALIST::has_TextDirection_attr() const
{
    return m_has_TextDirection_attr;
}

void CT_PARALIST::set_TextDirection_attr(const ST_OnOff& _TextDirection_attr)
{
    m_has_TextDirection_attr = true;
    m_TextDirection_attr = new ST_OnOff(_TextDirection_attr);
}

const ST_OnOff& CT_PARALIST::get_TextDirection_attr() const
{
    if (m_TextDirection_attr)
    {
        return *m_TextDirection_attr;
    }
    return ST_OnOff::default_instance();
}

bool CT_PARALIST::has_LineWrap_attr() const
{
    return m_has_LineWrap_attr;
}

void CT_PARALIST::set_LineWrap_attr(const ST_LineWrapType& _LineWrap_attr)
{
    m_has_LineWrap_attr = true;
    m_LineWrap_attr = new ST_LineWrapType(_LineWrap_attr);
}

const ST_LineWrapType& CT_PARALIST::get_LineWrap_attr() const
{
    if (m_LineWrap_attr)
    {
        return *m_LineWrap_attr;
    }
    return ST_LineWrapType::default_instance();
}

bool CT_PARALIST::has_VertAlign_attr() const
{
    return m_has_VertAlign_attr;
}

void CT_PARALIST::set_VertAlign_attr(const ST_VertAlignType1& _VertAlign_attr)
{
    m_has_VertAlign_attr = true;
    m_VertAlign_attr = new ST_VertAlignType1(_VertAlign_attr);
}

const ST_VertAlignType1& CT_PARALIST::get_VertAlign_attr() const
{
    if (m_VertAlign_attr)
    {
        return *m_VertAlign_attr;
    }
    return ST_VertAlignType1::default_instance();
}

bool CT_PARALIST::has_LinkListID_attr() const
{
    return m_has_LinkListID_attr;
}

void CT_PARALIST::set_LinkListID_attr(const ST_String& _LinkListID_attr)
{
    m_has_LinkListID_attr = true;
    m_LinkListID_attr = new ST_String(_LinkListID_attr);
}

const ST_String& CT_PARALIST::get_LinkListID_attr() const
{
    if (m_LinkListID_attr)
    {
        return *m_LinkListID_attr;
    }
    return ST_String::default_instance();
}

bool CT_PARALIST::has_LinkListIDNext_attr() const
{
    return m_has_LinkListIDNext_attr;
}

void CT_PARALIST::set_LinkListIDNext_attr(const ST_String& _LinkListIDNext_attr)
{
    m_has_LinkListIDNext_attr = true;
    m_LinkListIDNext_attr = new ST_String(_LinkListIDNext_attr);
}

const ST_String& CT_PARALIST::get_LinkListIDNext_attr() const
{
    if (m_LinkListIDNext_attr)
    {
        return *m_LinkListIDNext_attr;
    }
    return ST_String::default_instance();
}


// CT_PARALIST::ChildGroup_1
CT_PARALIST::ChildGroup_1::ChildGroup_1()
    :m_has_P(false),
     m_P(NULL)
{
}
bool CT_PARALIST::ChildGroup_1::has_P() const
{
    return m_has_P;
}

CT_P* CT_PARALIST::ChildGroup_1::mutable_P()
{

    m_has_P = true;
    if (!m_P)
    {
        m_P = new CT_P();
    }
    return m_P;
}

const CT_P& CT_PARALIST::ChildGroup_1::get_P() const
{
    if (m_P)
    {
        return *m_P;
    }
    return CT_P::default_instance();
}

CT_PARALIST* CT_PARALIST::default_instance_ = NULL;

// CT_EQUATION
CT_EQUATION::CT_EQUATION()
    :m_has_SCRIPT(false),
     m_SCRIPT(NULL),
     m_has_BaseLine_attr(false),
     m_BaseLine_attr(NULL),
     m_has_BaseUnit_attr(false),
     m_BaseUnit_attr(NULL),
     m_has_LineMode_attr(false),
     m_LineMode_attr(NULL),
     m_has_TextColor_attr(false),
     m_TextColor_attr(NULL),
     m_has_Version_attr(false),
     m_Version_attr(NULL)
{
}
CT_EQUATION::~CT_EQUATION()
{
    clear();
}
bool CT_EQUATION::has_SCRIPT() const
{
    return m_has_SCRIPT;
}

ST_String* CT_EQUATION::mutable_SCRIPT()
{
    m_has_SCRIPT = true;
    if (!m_SCRIPT)
    {
        m_SCRIPT = new ST_String();
    }
    return m_SCRIPT;
}

const ST_String& CT_EQUATION::get_SCRIPT() const
{
    if (m_SCRIPT)
    {
        return *m_SCRIPT;
    }
    return ST_String::default_instance();
}

CT_SHAPEOBJECT* CT_EQUATION::add_SHAPEOBJECT()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_SHAPEOBJECT* pNewChild = pChildGroup->mutable_SHAPEOBJECT();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

void CT_EQUATION::clear()
{
    m_has_BaseLine_attr = false;

    if (m_BaseLine_attr)
    {
        delete m_BaseLine_attr;
        m_BaseLine_attr = NULL;
    }


    m_has_BaseUnit_attr = false;

    if (m_BaseUnit_attr)
    {
        delete m_BaseUnit_attr;
        m_BaseUnit_attr = NULL;
    }


    m_has_LineMode_attr = false;

    if (m_LineMode_attr)
    {
        delete m_LineMode_attr;
        m_LineMode_attr = NULL;
    }


    m_has_TextColor_attr = false;

    if (m_TextColor_attr)
    {
        delete m_TextColor_attr;
        m_TextColor_attr = NULL;
    }


    m_has_Version_attr = false;

    if (m_Version_attr)
    {
        delete m_Version_attr;
        m_Version_attr = NULL;
    }


    m_has_SCRIPT = false;

    if (m_SCRIPT)
    {
        delete m_SCRIPT;
        m_SCRIPT = NULL;
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

void CT_EQUATION::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_BaseLine_attr)
    {
        m_BaseLine_attr->toXmlAttr("BaseLine", _outStream);
    }



    if (m_has_BaseUnit_attr)
    {
        m_BaseUnit_attr->toXmlAttr("BaseUnit", _outStream);
    }



    if (m_has_LineMode_attr)
    {
        m_LineMode_attr->toXmlAttr("LineMode", _outStream);
    }



    if (m_has_TextColor_attr)
    {
        m_TextColor_attr->toXmlAttr("TextColor", _outStream);
    }



    if (m_has_Version_attr)
    {
        m_Version_attr->toXmlAttr("Version", _outStream);
    }

    _outStream << ">";


    if (m_has_SCRIPT)
    {
        _outStream << "<SCRIPT>" << m_SCRIPT->toString() << "</SCRIPT>";
    }

    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_SHAPEOBJECT())
            {
                (*iter)->get_SHAPEOBJECT().toXmlElem("SHAPEOBJECT", "", _outStream);
            }


        }
    }

    _outStream << "</" << _elemName << ">";
}

const CT_EQUATION& CT_EQUATION::default_instance()
{
    if (!CT_EQUATION::default_instance_)
    {
        CT_EQUATION::default_instance_ = new CT_EQUATION();
    }
    return *CT_EQUATION::default_instance_;
}

bool CT_EQUATION::has_BaseLine_attr() const
{
    return m_has_BaseLine_attr;
}

void CT_EQUATION::set_BaseLine_attr(const ST_String& _BaseLine_attr)
{
    m_has_BaseLine_attr = true;
    m_BaseLine_attr = new ST_String(_BaseLine_attr);
}

const ST_String& CT_EQUATION::get_BaseLine_attr() const
{
    if (m_BaseLine_attr)
    {
        return *m_BaseLine_attr;
    }
    return ST_String::default_instance();
}

bool CT_EQUATION::has_BaseUnit_attr() const
{
    return m_has_BaseUnit_attr;
}

void CT_EQUATION::set_BaseUnit_attr(const ST_String& _BaseUnit_attr)
{
    m_has_BaseUnit_attr = true;
    m_BaseUnit_attr = new ST_String(_BaseUnit_attr);
}

const ST_String& CT_EQUATION::get_BaseUnit_attr() const
{
    if (m_BaseUnit_attr)
    {
        return *m_BaseUnit_attr;
    }
    return ST_String::default_instance();
}

bool CT_EQUATION::has_LineMode_attr() const
{
    return m_has_LineMode_attr;
}

void CT_EQUATION::set_LineMode_attr(const ST_String& _LineMode_attr)
{
    m_has_LineMode_attr = true;
    m_LineMode_attr = new ST_String(_LineMode_attr);
}

const ST_String& CT_EQUATION::get_LineMode_attr() const
{
    if (m_LineMode_attr)
    {
        return *m_LineMode_attr;
    }
    return ST_String::default_instance();
}

bool CT_EQUATION::has_TextColor_attr() const
{
    return m_has_TextColor_attr;
}

void CT_EQUATION::set_TextColor_attr(const ST_String& _TextColor_attr)
{
    m_has_TextColor_attr = true;
    m_TextColor_attr = new ST_String(_TextColor_attr);
}

const ST_String& CT_EQUATION::get_TextColor_attr() const
{
    if (m_TextColor_attr)
    {
        return *m_TextColor_attr;
    }
    return ST_String::default_instance();
}

bool CT_EQUATION::has_Version_attr() const
{
    return m_has_Version_attr;
}

void CT_EQUATION::set_Version_attr(const ST_String& _Version_attr)
{
    m_has_Version_attr = true;
    m_Version_attr = new ST_String(_Version_attr);
}

const ST_String& CT_EQUATION::get_Version_attr() const
{
    if (m_Version_attr)
    {
        return *m_Version_attr;
    }
    return ST_String::default_instance();
}


// CT_EQUATION::ChildGroup_1
CT_EQUATION::ChildGroup_1::ChildGroup_1()
    :m_has_SHAPEOBJECT(false),
     m_SHAPEOBJECT(NULL)
{
}
bool CT_EQUATION::ChildGroup_1::has_SHAPEOBJECT() const
{
    return m_has_SHAPEOBJECT;
}

CT_SHAPEOBJECT* CT_EQUATION::ChildGroup_1::mutable_SHAPEOBJECT()
{

    m_has_SHAPEOBJECT = true;
    if (!m_SHAPEOBJECT)
    {
        m_SHAPEOBJECT = new CT_SHAPEOBJECT();
    }
    return m_SHAPEOBJECT;
}

const CT_SHAPEOBJECT& CT_EQUATION::ChildGroup_1::get_SHAPEOBJECT() const
{
    if (m_SHAPEOBJECT)
    {
        return *m_SHAPEOBJECT;
    }
    return CT_SHAPEOBJECT::default_instance();
}

CT_EQUATION* CT_EQUATION::default_instance_ = NULL;

// CT_ID
CT_ID::CT_ID()
    :m_has_ID_attr(false),
     m_ID_attr(NULL)
{
}
CT_ID::~CT_ID()
{
    clear();
}
void CT_ID::clear()
{
    m_has_ID_attr = false;

    if (m_ID_attr)
    {
        delete m_ID_attr;
        m_ID_attr = NULL;
    }

}

void CT_ID::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_ID_attr)
    {
        m_ID_attr->toXmlAttr("ID", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_ID& CT_ID::default_instance()
{
    if (!CT_ID::default_instance_)
    {
        CT_ID::default_instance_ = new CT_ID();
    }
    return *CT_ID::default_instance_;
}

bool CT_ID::has_ID_attr() const
{
    return m_has_ID_attr;
}

void CT_ID::set_ID_attr(const ST_ID& _ID_attr)
{
    m_has_ID_attr = true;
    m_ID_attr = new ST_ID(_ID_attr);
}

const ST_ID& CT_ID::get_ID_attr() const
{
    if (m_ID_attr)
    {
        return *m_ID_attr;
    }
    return ST_ID::default_instance();
}

CT_ID* CT_ID::default_instance_ = NULL;

// CT_BINITEM
CT_BINITEM::CT_BINITEM()
    :m_has_Type_attr(false),
     m_Type_attr(NULL),
     m_has_APath_attr(false),
     m_APath_attr(NULL),
     m_has_RPath_attr(false),
     m_RPath_attr(NULL),
     m_has_BinData_attr(false),
     m_BinData_attr(NULL),
     m_has_Format_attr(false),
     m_Format_attr(NULL)
{
}
CT_BINITEM::~CT_BINITEM()
{
    clear();
}
void CT_BINITEM::clear()
{
    m_has_Type_attr = false;

    if (m_Type_attr)
    {
        delete m_Type_attr;
        m_Type_attr = NULL;
    }


    m_has_APath_attr = false;

    if (m_APath_attr)
    {
        delete m_APath_attr;
        m_APath_attr = NULL;
    }


    m_has_RPath_attr = false;

    if (m_RPath_attr)
    {
        delete m_RPath_attr;
        m_RPath_attr = NULL;
    }


    m_has_BinData_attr = false;

    if (m_BinData_attr)
    {
        delete m_BinData_attr;
        m_BinData_attr = NULL;
    }


    m_has_Format_attr = false;

    if (m_Format_attr)
    {
        delete m_Format_attr;
        m_Format_attr = NULL;
    }

}

void CT_BINITEM::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_Type_attr)
    {
        m_Type_attr->toXmlAttr("Type", _outStream);
    }



    if (m_has_APath_attr)
    {
        m_APath_attr->toXmlAttr("APath", _outStream);
    }



    if (m_has_RPath_attr)
    {
        m_RPath_attr->toXmlAttr("RPath", _outStream);
    }



    if (m_has_BinData_attr)
    {
        m_BinData_attr->toXmlAttr("BinData", _outStream);
    }



    if (m_has_Format_attr)
    {
        m_Format_attr->toXmlAttr("Format", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_BINITEM& CT_BINITEM::default_instance()
{
    if (!CT_BINITEM::default_instance_)
    {
        CT_BINITEM::default_instance_ = new CT_BINITEM();
    }
    return *CT_BINITEM::default_instance_;
}

bool CT_BINITEM::has_Type_attr() const
{
    return m_has_Type_attr;
}

void CT_BINITEM::set_Type_attr(const ST_BINITEM_TYPE& _Type_attr)
{
    m_has_Type_attr = true;
    m_Type_attr = new ST_BINITEM_TYPE(_Type_attr);
}

const ST_BINITEM_TYPE& CT_BINITEM::get_Type_attr() const
{
    if (m_Type_attr)
    {
        return *m_Type_attr;
    }
    return ST_BINITEM_TYPE::default_instance();
}

bool CT_BINITEM::has_APath_attr() const
{
    return m_has_APath_attr;
}

void CT_BINITEM::set_APath_attr(const ST_String& _APath_attr)
{
    m_has_APath_attr = true;
    m_APath_attr = new ST_String(_APath_attr);
}

const ST_String& CT_BINITEM::get_APath_attr() const
{
    if (m_APath_attr)
    {
        return *m_APath_attr;
    }
    return ST_String::default_instance();
}

bool CT_BINITEM::has_RPath_attr() const
{
    return m_has_RPath_attr;
}

void CT_BINITEM::set_RPath_attr(const ST_String& _RPath_attr)
{
    m_has_RPath_attr = true;
    m_RPath_attr = new ST_String(_RPath_attr);
}

const ST_String& CT_BINITEM::get_RPath_attr() const
{
    if (m_RPath_attr)
    {
        return *m_RPath_attr;
    }
    return ST_String::default_instance();
}

bool CT_BINITEM::has_BinData_attr() const
{
    return m_has_BinData_attr;
}

void CT_BINITEM::set_BinData_attr(const ST_String& _BinData_attr)
{
    m_has_BinData_attr = true;
    m_BinData_attr = new ST_String(_BinData_attr);
}

const ST_String& CT_BINITEM::get_BinData_attr() const
{
    if (m_BinData_attr)
    {
        return *m_BinData_attr;
    }
    return ST_String::default_instance();
}

bool CT_BINITEM::has_Format_attr() const
{
    return m_has_Format_attr;
}

void CT_BINITEM::set_Format_attr(const ST_BINITEM_FORMAT& _Format_attr)
{
    m_has_Format_attr = true;
    m_Format_attr = new ST_BINITEM_FORMAT(_Format_attr);
}

const ST_BINITEM_FORMAT& CT_BINITEM::get_Format_attr() const
{
    if (m_Format_attr)
    {
        return *m_Format_attr;
    }
    return ST_BINITEM_FORMAT::default_instance();
}

CT_BINITEM* CT_BINITEM::default_instance_ = NULL;

// CT_TITLE
CT_TITLE::CT_TITLE()
    :m_has_Type_attr(false),
     m_Type_attr(NULL)
{
}
CT_TITLE::~CT_TITLE()
{
    clear();
}
void CT_TITLE::clear()
{
    m_has_Type_attr = false;

    if (m_Type_attr)
    {
        delete m_Type_attr;
        m_Type_attr = NULL;
    }

}

void CT_TITLE::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_Type_attr)
    {
        m_Type_attr->toXmlAttr("Type", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_TITLE& CT_TITLE::default_instance()
{
    if (!CT_TITLE::default_instance_)
    {
        CT_TITLE::default_instance_ = new CT_TITLE();
    }
    return *CT_TITLE::default_instance_;
}

bool CT_TITLE::has_Type_attr() const
{
    return m_has_Type_attr;
}

void CT_TITLE::set_Type_attr(const ST_String& _Type_attr)
{
    m_has_Type_attr = true;
    m_Type_attr = new ST_String(_Type_attr);
}

const ST_String& CT_TITLE::get_Type_attr() const
{
    if (m_Type_attr)
    {
        return *m_Type_attr;
    }
    return ST_String::default_instance();
}

CT_TITLE* CT_TITLE::default_instance_ = NULL;

// CT_SUBJECT
CT_SUBJECT::CT_SUBJECT()
    :m_has_Type_attr(false),
     m_Type_attr(NULL)
{
}
CT_SUBJECT::~CT_SUBJECT()
{
    clear();
}
void CT_SUBJECT::clear()
{
    m_has_Type_attr = false;

    if (m_Type_attr)
    {
        delete m_Type_attr;
        m_Type_attr = NULL;
    }

}

void CT_SUBJECT::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_Type_attr)
    {
        m_Type_attr->toXmlAttr("Type", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_SUBJECT& CT_SUBJECT::default_instance()
{
    if (!CT_SUBJECT::default_instance_)
    {
        CT_SUBJECT::default_instance_ = new CT_SUBJECT();
    }
    return *CT_SUBJECT::default_instance_;
}

bool CT_SUBJECT::has_Type_attr() const
{
    return m_has_Type_attr;
}

void CT_SUBJECT::set_Type_attr(const ST_String& _Type_attr)
{
    m_has_Type_attr = true;
    m_Type_attr = new ST_String(_Type_attr);
}

const ST_String& CT_SUBJECT::get_Type_attr() const
{
    if (m_Type_attr)
    {
        return *m_Type_attr;
    }
    return ST_String::default_instance();
}

CT_SUBJECT* CT_SUBJECT::default_instance_ = NULL;

// CT_AUTHOR
CT_AUTHOR::CT_AUTHOR()
    :m_has_Type_attr(false),
     m_Type_attr(NULL)
{
}
CT_AUTHOR::~CT_AUTHOR()
{
    clear();
}
void CT_AUTHOR::clear()
{
    m_has_Type_attr = false;

    if (m_Type_attr)
    {
        delete m_Type_attr;
        m_Type_attr = NULL;
    }

}

void CT_AUTHOR::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_Type_attr)
    {
        m_Type_attr->toXmlAttr("Type", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_AUTHOR& CT_AUTHOR::default_instance()
{
    if (!CT_AUTHOR::default_instance_)
    {
        CT_AUTHOR::default_instance_ = new CT_AUTHOR();
    }
    return *CT_AUTHOR::default_instance_;
}

bool CT_AUTHOR::has_Type_attr() const
{
    return m_has_Type_attr;
}

void CT_AUTHOR::set_Type_attr(const ST_String& _Type_attr)
{
    m_has_Type_attr = true;
    m_Type_attr = new ST_String(_Type_attr);
}

const ST_String& CT_AUTHOR::get_Type_attr() const
{
    if (m_Type_attr)
    {
        return *m_Type_attr;
    }
    return ST_String::default_instance();
}

CT_AUTHOR* CT_AUTHOR::default_instance_ = NULL;

// CT_DATE
CT_DATE::CT_DATE()
    :m_has_Type_attr(false),
     m_Type_attr(NULL)
{
}
CT_DATE::~CT_DATE()
{
    clear();
}
void CT_DATE::clear()
{
    m_has_Type_attr = false;

    if (m_Type_attr)
    {
        delete m_Type_attr;
        m_Type_attr = NULL;
    }

}

void CT_DATE::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_Type_attr)
    {
        m_Type_attr->toXmlAttr("Type", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_DATE& CT_DATE::default_instance()
{
    if (!CT_DATE::default_instance_)
    {
        CT_DATE::default_instance_ = new CT_DATE();
    }
    return *CT_DATE::default_instance_;
}

bool CT_DATE::has_Type_attr() const
{
    return m_has_Type_attr;
}

void CT_DATE::set_Type_attr(const ST_String& _Type_attr)
{
    m_has_Type_attr = true;
    m_Type_attr = new ST_String(_Type_attr);
}

const ST_String& CT_DATE::get_Type_attr() const
{
    if (m_Type_attr)
    {
        return *m_Type_attr;
    }
    return ST_String::default_instance();
}

CT_DATE* CT_DATE::default_instance_ = NULL;

// CT_KEYWORDS
CT_KEYWORDS::CT_KEYWORDS()
    :m_has_Type_attr(false),
     m_Type_attr(NULL)
{
}
CT_KEYWORDS::~CT_KEYWORDS()
{
    clear();
}
void CT_KEYWORDS::clear()
{
    m_has_Type_attr = false;

    if (m_Type_attr)
    {
        delete m_Type_attr;
        m_Type_attr = NULL;
    }

}

void CT_KEYWORDS::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_Type_attr)
    {
        m_Type_attr->toXmlAttr("Type", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_KEYWORDS& CT_KEYWORDS::default_instance()
{
    if (!CT_KEYWORDS::default_instance_)
    {
        CT_KEYWORDS::default_instance_ = new CT_KEYWORDS();
    }
    return *CT_KEYWORDS::default_instance_;
}

bool CT_KEYWORDS::has_Type_attr() const
{
    return m_has_Type_attr;
}

void CT_KEYWORDS::set_Type_attr(const ST_String& _Type_attr)
{
    m_has_Type_attr = true;
    m_Type_attr = new ST_String(_Type_attr);
}

const ST_String& CT_KEYWORDS::get_Type_attr() const
{
    if (m_Type_attr)
    {
        return *m_Type_attr;
    }
    return ST_String::default_instance();
}

CT_KEYWORDS* CT_KEYWORDS::default_instance_ = NULL;

// CT_COMMENTS
CT_COMMENTS::CT_COMMENTS()
    :m_has_Type_attr(false),
     m_Type_attr(NULL)
{
}
CT_COMMENTS::~CT_COMMENTS()
{
    clear();
}
void CT_COMMENTS::clear()
{
    m_has_Type_attr = false;

    if (m_Type_attr)
    {
        delete m_Type_attr;
        m_Type_attr = NULL;
    }

}

void CT_COMMENTS::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_Type_attr)
    {
        m_Type_attr->toXmlAttr("Type", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_COMMENTS& CT_COMMENTS::default_instance()
{
    if (!CT_COMMENTS::default_instance_)
    {
        CT_COMMENTS::default_instance_ = new CT_COMMENTS();
    }
    return *CT_COMMENTS::default_instance_;
}

bool CT_COMMENTS::has_Type_attr() const
{
    return m_has_Type_attr;
}

void CT_COMMENTS::set_Type_attr(const ST_String& _Type_attr)
{
    m_has_Type_attr = true;
    m_Type_attr = new ST_String(_Type_attr);
}

const ST_String& CT_COMMENTS::get_Type_attr() const
{
    if (m_Type_attr)
    {
        return *m_Type_attr;
    }
    return ST_String::default_instance();
}

CT_COMMENTS* CT_COMMENTS::default_instance_ = NULL;

// CT_FORBIDDENSTRING
CT_FORBIDDENSTRING::CT_FORBIDDENSTRING()
    :m_has_FORBIDDEN(false),
     m_FORBIDDEN(NULL)
{
}
CT_FORBIDDENSTRING::~CT_FORBIDDENSTRING()
{
    clear();
}
bool CT_FORBIDDENSTRING::has_FORBIDDEN() const
{
    return m_has_FORBIDDEN;
}

ST_String* CT_FORBIDDENSTRING::mutable_FORBIDDEN()
{
    m_has_FORBIDDEN = true;
    if (!m_FORBIDDEN)
    {
        m_FORBIDDEN = new ST_String();
    }
    return m_FORBIDDEN;
}

const ST_String& CT_FORBIDDENSTRING::get_FORBIDDEN() const
{
    if (m_FORBIDDEN)
    {
        return *m_FORBIDDEN;
    }
    return ST_String::default_instance();
}

void CT_FORBIDDENSTRING::clear()
{
    m_has_FORBIDDEN = false;

    if (m_FORBIDDEN)
    {
        delete m_FORBIDDEN;
        m_FORBIDDEN = NULL;
    }

}

void CT_FORBIDDENSTRING::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";


    if (m_has_FORBIDDEN)
    {
        _outStream << "<FORBIDDEN>" << m_FORBIDDEN->toString() << "</FORBIDDEN>";
    }

    _outStream << "</" << _elemName << ">";
}

const CT_FORBIDDENSTRING& CT_FORBIDDENSTRING::default_instance()
{
    if (!CT_FORBIDDENSTRING::default_instance_)
    {
        CT_FORBIDDENSTRING::default_instance_ = new CT_FORBIDDENSTRING();
    }
    return *CT_FORBIDDENSTRING::default_instance_;
}

CT_FORBIDDENSTRING* CT_FORBIDDENSTRING::default_instance_ = NULL;

// CT_DOCSUMMARY
CT_DOCSUMMARY::CT_DOCSUMMARY()
    :m_has_TITLE(false),
     m_TITLE(NULL),
     m_has_SUBJECT(false),
     m_SUBJECT(NULL),
     m_has_AUTHOR(false),
     m_AUTHOR(NULL),
     m_has_DATE(false),
     m_DATE(NULL),
     m_has_KEYWORDS(false),
     m_KEYWORDS(NULL),
     m_has_COMMENTS(false),
     m_COMMENTS(NULL),
     m_has_FORBIDDENSTRING(false),
     m_FORBIDDENSTRING(NULL)
{
}
CT_DOCSUMMARY::~CT_DOCSUMMARY()
{
    clear();
}
bool CT_DOCSUMMARY::has_TITLE() const
{
    return m_has_TITLE;
}

CT_TITLE* CT_DOCSUMMARY::mutable_TITLE()
{
    m_has_TITLE = true;
    if (!m_TITLE)
    {
        m_TITLE = new CT_TITLE();
    }
    return m_TITLE;
}

const CT_TITLE& CT_DOCSUMMARY::get_TITLE() const
{
    if (m_TITLE)
    {
        return *m_TITLE;
    }
    return CT_TITLE::default_instance();
}

bool CT_DOCSUMMARY::has_SUBJECT() const
{
    return m_has_SUBJECT;
}

CT_SUBJECT* CT_DOCSUMMARY::mutable_SUBJECT()
{
    m_has_SUBJECT = true;
    if (!m_SUBJECT)
    {
        m_SUBJECT = new CT_SUBJECT();
    }
    return m_SUBJECT;
}

const CT_SUBJECT& CT_DOCSUMMARY::get_SUBJECT() const
{
    if (m_SUBJECT)
    {
        return *m_SUBJECT;
    }
    return CT_SUBJECT::default_instance();
}

bool CT_DOCSUMMARY::has_AUTHOR() const
{
    return m_has_AUTHOR;
}

CT_AUTHOR* CT_DOCSUMMARY::mutable_AUTHOR()
{
    m_has_AUTHOR = true;
    if (!m_AUTHOR)
    {
        m_AUTHOR = new CT_AUTHOR();
    }
    return m_AUTHOR;
}

const CT_AUTHOR& CT_DOCSUMMARY::get_AUTHOR() const
{
    if (m_AUTHOR)
    {
        return *m_AUTHOR;
    }
    return CT_AUTHOR::default_instance();
}

bool CT_DOCSUMMARY::has_DATE() const
{
    return m_has_DATE;
}

CT_DATE* CT_DOCSUMMARY::mutable_DATE()
{
    m_has_DATE = true;
    if (!m_DATE)
    {
        m_DATE = new CT_DATE();
    }
    return m_DATE;
}

const CT_DATE& CT_DOCSUMMARY::get_DATE() const
{
    if (m_DATE)
    {
        return *m_DATE;
    }
    return CT_DATE::default_instance();
}

bool CT_DOCSUMMARY::has_KEYWORDS() const
{
    return m_has_KEYWORDS;
}

CT_KEYWORDS* CT_DOCSUMMARY::mutable_KEYWORDS()
{
    m_has_KEYWORDS = true;
    if (!m_KEYWORDS)
    {
        m_KEYWORDS = new CT_KEYWORDS();
    }
    return m_KEYWORDS;
}

const CT_KEYWORDS& CT_DOCSUMMARY::get_KEYWORDS() const
{
    if (m_KEYWORDS)
    {
        return *m_KEYWORDS;
    }
    return CT_KEYWORDS::default_instance();
}

bool CT_DOCSUMMARY::has_COMMENTS() const
{
    return m_has_COMMENTS;
}

CT_COMMENTS* CT_DOCSUMMARY::mutable_COMMENTS()
{
    m_has_COMMENTS = true;
    if (!m_COMMENTS)
    {
        m_COMMENTS = new CT_COMMENTS();
    }
    return m_COMMENTS;
}

const CT_COMMENTS& CT_DOCSUMMARY::get_COMMENTS() const
{
    if (m_COMMENTS)
    {
        return *m_COMMENTS;
    }
    return CT_COMMENTS::default_instance();
}

bool CT_DOCSUMMARY::has_FORBIDDENSTRING() const
{
    return m_has_FORBIDDENSTRING;
}

CT_FORBIDDENSTRING* CT_DOCSUMMARY::mutable_FORBIDDENSTRING()
{
    m_has_FORBIDDENSTRING = true;
    if (!m_FORBIDDENSTRING)
    {
        m_FORBIDDENSTRING = new CT_FORBIDDENSTRING();
    }
    return m_FORBIDDENSTRING;
}

const CT_FORBIDDENSTRING& CT_DOCSUMMARY::get_FORBIDDENSTRING() const
{
    if (m_FORBIDDENSTRING)
    {
        return *m_FORBIDDENSTRING;
    }
    return CT_FORBIDDENSTRING::default_instance();
}

void CT_DOCSUMMARY::clear()
{
    m_has_TITLE = false;

    if (m_TITLE)
    {
        delete m_TITLE;
        m_TITLE = NULL;
    }


    m_has_SUBJECT = false;

    if (m_SUBJECT)
    {
        delete m_SUBJECT;
        m_SUBJECT = NULL;
    }


    m_has_AUTHOR = false;

    if (m_AUTHOR)
    {
        delete m_AUTHOR;
        m_AUTHOR = NULL;
    }


    m_has_DATE = false;

    if (m_DATE)
    {
        delete m_DATE;
        m_DATE = NULL;
    }


    m_has_KEYWORDS = false;

    if (m_KEYWORDS)
    {
        delete m_KEYWORDS;
        m_KEYWORDS = NULL;
    }


    m_has_COMMENTS = false;

    if (m_COMMENTS)
    {
        delete m_COMMENTS;
        m_COMMENTS = NULL;
    }


    m_has_FORBIDDENSTRING = false;

    if (m_FORBIDDENSTRING)
    {
        delete m_FORBIDDENSTRING;
        m_FORBIDDENSTRING = NULL;
    }

}

void CT_DOCSUMMARY::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";


    if (m_has_TITLE)
    {
        m_TITLE->toXmlElem("TITLE", "", _outStream);
    }


    if (m_has_SUBJECT)
    {
        m_SUBJECT->toXmlElem("SUBJECT", "", _outStream);
    }


    if (m_has_AUTHOR)
    {
        m_AUTHOR->toXmlElem("AUTHOR", "", _outStream);
    }


    if (m_has_DATE)
    {
        m_DATE->toXmlElem("DATE", "", _outStream);
    }


    if (m_has_KEYWORDS)
    {
        m_KEYWORDS->toXmlElem("KEYWORDS", "", _outStream);
    }


    if (m_has_COMMENTS)
    {
        m_COMMENTS->toXmlElem("COMMENTS", "", _outStream);
    }


    if (m_has_FORBIDDENSTRING)
    {
        m_FORBIDDENSTRING->toXmlElem("FORBIDDENSTRING", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_DOCSUMMARY& CT_DOCSUMMARY::default_instance()
{
    if (!CT_DOCSUMMARY::default_instance_)
    {
        CT_DOCSUMMARY::default_instance_ = new CT_DOCSUMMARY();
    }
    return *CT_DOCSUMMARY::default_instance_;
}

CT_DOCSUMMARY* CT_DOCSUMMARY::default_instance_ = NULL;

// CT_BEGINNUMBER
CT_BEGINNUMBER::CT_BEGINNUMBER()
    :m_has_Endnote_attr(false),
     m_Endnote_attr(NULL),
     m_has_Equation_attr(false),
     m_Equation_attr(NULL),
     m_has_Footnote_attr(false),
     m_Footnote_attr(NULL),
     m_has_Page_attr(false),
     m_Page_attr(NULL),
     m_has_Picture_attr(false),
     m_Picture_attr(NULL),
     m_has_Table_attr(false),
     m_Table_attr(NULL),
     m_has_TotalPage_attr(false),
     m_TotalPage_attr(NULL)
{
}
CT_BEGINNUMBER::~CT_BEGINNUMBER()
{
    clear();
}
void CT_BEGINNUMBER::clear()
{
    m_has_Endnote_attr = false;

    if (m_Endnote_attr)
    {
        delete m_Endnote_attr;
        m_Endnote_attr = NULL;
    }


    m_has_Equation_attr = false;

    if (m_Equation_attr)
    {
        delete m_Equation_attr;
        m_Equation_attr = NULL;
    }


    m_has_Footnote_attr = false;

    if (m_Footnote_attr)
    {
        delete m_Footnote_attr;
        m_Footnote_attr = NULL;
    }


    m_has_Page_attr = false;

    if (m_Page_attr)
    {
        delete m_Page_attr;
        m_Page_attr = NULL;
    }


    m_has_Picture_attr = false;

    if (m_Picture_attr)
    {
        delete m_Picture_attr;
        m_Picture_attr = NULL;
    }


    m_has_Table_attr = false;

    if (m_Table_attr)
    {
        delete m_Table_attr;
        m_Table_attr = NULL;
    }


    m_has_TotalPage_attr = false;

    if (m_TotalPage_attr)
    {
        delete m_TotalPage_attr;
        m_TotalPage_attr = NULL;
    }

}

void CT_BEGINNUMBER::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_Endnote_attr)
    {
        m_Endnote_attr->toXmlAttr("Endnote", _outStream);
    }



    if (m_has_Equation_attr)
    {
        m_Equation_attr->toXmlAttr("Equation", _outStream);
    }



    if (m_has_Footnote_attr)
    {
        m_Footnote_attr->toXmlAttr("Footnote", _outStream);
    }



    if (m_has_Page_attr)
    {
        m_Page_attr->toXmlAttr("Page", _outStream);
    }



    if (m_has_Picture_attr)
    {
        m_Picture_attr->toXmlAttr("Picture", _outStream);
    }



    if (m_has_Table_attr)
    {
        m_Table_attr->toXmlAttr("Table", _outStream);
    }



    if (m_has_TotalPage_attr)
    {
        m_TotalPage_attr->toXmlAttr("TotalPage", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_BEGINNUMBER& CT_BEGINNUMBER::default_instance()
{
    if (!CT_BEGINNUMBER::default_instance_)
    {
        CT_BEGINNUMBER::default_instance_ = new CT_BEGINNUMBER();
    }
    return *CT_BEGINNUMBER::default_instance_;
}

bool CT_BEGINNUMBER::has_Endnote_attr() const
{
    return m_has_Endnote_attr;
}

void CT_BEGINNUMBER::set_Endnote_attr(const ST_UnsignedDecimalNumber& _Endnote_attr)
{
    m_has_Endnote_attr = true;
    m_Endnote_attr = new ST_UnsignedDecimalNumber(_Endnote_attr);
}

const ST_UnsignedDecimalNumber& CT_BEGINNUMBER::get_Endnote_attr() const
{
    if (m_Endnote_attr)
    {
        return *m_Endnote_attr;
    }
    return ST_UnsignedDecimalNumber::default_instance();
}

bool CT_BEGINNUMBER::has_Equation_attr() const
{
    return m_has_Equation_attr;
}

void CT_BEGINNUMBER::set_Equation_attr(const ST_UnsignedDecimalNumber& _Equation_attr)
{
    m_has_Equation_attr = true;
    m_Equation_attr = new ST_UnsignedDecimalNumber(_Equation_attr);
}

const ST_UnsignedDecimalNumber& CT_BEGINNUMBER::get_Equation_attr() const
{
    if (m_Equation_attr)
    {
        return *m_Equation_attr;
    }
    return ST_UnsignedDecimalNumber::default_instance();
}

bool CT_BEGINNUMBER::has_Footnote_attr() const
{
    return m_has_Footnote_attr;
}

void CT_BEGINNUMBER::set_Footnote_attr(const ST_UnsignedDecimalNumber& _Footnote_attr)
{
    m_has_Footnote_attr = true;
    m_Footnote_attr = new ST_UnsignedDecimalNumber(_Footnote_attr);
}

const ST_UnsignedDecimalNumber& CT_BEGINNUMBER::get_Footnote_attr() const
{
    if (m_Footnote_attr)
    {
        return *m_Footnote_attr;
    }
    return ST_UnsignedDecimalNumber::default_instance();
}

bool CT_BEGINNUMBER::has_Page_attr() const
{
    return m_has_Page_attr;
}

void CT_BEGINNUMBER::set_Page_attr(const ST_UnsignedDecimalNumber& _Page_attr)
{
    m_has_Page_attr = true;
    m_Page_attr = new ST_UnsignedDecimalNumber(_Page_attr);
}

const ST_UnsignedDecimalNumber& CT_BEGINNUMBER::get_Page_attr() const
{
    if (m_Page_attr)
    {
        return *m_Page_attr;
    }
    return ST_UnsignedDecimalNumber::default_instance();
}

bool CT_BEGINNUMBER::has_Picture_attr() const
{
    return m_has_Picture_attr;
}

void CT_BEGINNUMBER::set_Picture_attr(const ST_UnsignedDecimalNumber& _Picture_attr)
{
    m_has_Picture_attr = true;
    m_Picture_attr = new ST_UnsignedDecimalNumber(_Picture_attr);
}

const ST_UnsignedDecimalNumber& CT_BEGINNUMBER::get_Picture_attr() const
{
    if (m_Picture_attr)
    {
        return *m_Picture_attr;
    }
    return ST_UnsignedDecimalNumber::default_instance();
}

bool CT_BEGINNUMBER::has_Table_attr() const
{
    return m_has_Table_attr;
}

void CT_BEGINNUMBER::set_Table_attr(const ST_UnsignedDecimalNumber& _Table_attr)
{
    m_has_Table_attr = true;
    m_Table_attr = new ST_UnsignedDecimalNumber(_Table_attr);
}

const ST_UnsignedDecimalNumber& CT_BEGINNUMBER::get_Table_attr() const
{
    if (m_Table_attr)
    {
        return *m_Table_attr;
    }
    return ST_UnsignedDecimalNumber::default_instance();
}

bool CT_BEGINNUMBER::has_TotalPage_attr() const
{
    return m_has_TotalPage_attr;
}

void CT_BEGINNUMBER::set_TotalPage_attr(const ST_UnsignedDecimalNumber& _TotalPage_attr)
{
    m_has_TotalPage_attr = true;
    m_TotalPage_attr = new ST_UnsignedDecimalNumber(_TotalPage_attr);
}

const ST_UnsignedDecimalNumber& CT_BEGINNUMBER::get_TotalPage_attr() const
{
    if (m_TotalPage_attr)
    {
        return *m_TotalPage_attr;
    }
    return ST_UnsignedDecimalNumber::default_instance();
}

CT_BEGINNUMBER* CT_BEGINNUMBER::default_instance_ = NULL;

// CT_CARETPOS
CT_CARETPOS::CT_CARETPOS()
    :m_has_List_attr(false),
     m_List_attr(NULL),
     m_has_Para_attr(false),
     m_Para_attr(NULL),
     m_has_Pos_attr(false),
     m_Pos_attr(NULL)
{
}
CT_CARETPOS::~CT_CARETPOS()
{
    clear();
}
void CT_CARETPOS::clear()
{
    m_has_List_attr = false;

    if (m_List_attr)
    {
        delete m_List_attr;
        m_List_attr = NULL;
    }


    m_has_Para_attr = false;

    if (m_Para_attr)
    {
        delete m_Para_attr;
        m_Para_attr = NULL;
    }


    m_has_Pos_attr = false;

    if (m_Pos_attr)
    {
        delete m_Pos_attr;
        m_Pos_attr = NULL;
    }

}

void CT_CARETPOS::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_List_attr)
    {
        m_List_attr->toXmlAttr("List", _outStream);
    }



    if (m_has_Para_attr)
    {
        m_Para_attr->toXmlAttr("Para", _outStream);
    }



    if (m_has_Pos_attr)
    {
        m_Pos_attr->toXmlAttr("Pos", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_CARETPOS& CT_CARETPOS::default_instance()
{
    if (!CT_CARETPOS::default_instance_)
    {
        CT_CARETPOS::default_instance_ = new CT_CARETPOS();
    }
    return *CT_CARETPOS::default_instance_;
}

bool CT_CARETPOS::has_List_attr() const
{
    return m_has_List_attr;
}

void CT_CARETPOS::set_List_attr(const ST_String& _List_attr)
{
    m_has_List_attr = true;
    m_List_attr = new ST_String(_List_attr);
}

const ST_String& CT_CARETPOS::get_List_attr() const
{
    if (m_List_attr)
    {
        return *m_List_attr;
    }
    return ST_String::default_instance();
}

bool CT_CARETPOS::has_Para_attr() const
{
    return m_has_Para_attr;
}

void CT_CARETPOS::set_Para_attr(const ST_String& _Para_attr)
{
    m_has_Para_attr = true;
    m_Para_attr = new ST_String(_Para_attr);
}

const ST_String& CT_CARETPOS::get_Para_attr() const
{
    if (m_Para_attr)
    {
        return *m_Para_attr;
    }
    return ST_String::default_instance();
}

bool CT_CARETPOS::has_Pos_attr() const
{
    return m_has_Pos_attr;
}

void CT_CARETPOS::set_Pos_attr(const ST_String& _Pos_attr)
{
    m_has_Pos_attr = true;
    m_Pos_attr = new ST_String(_Pos_attr);
}

const ST_String& CT_CARETPOS::get_Pos_attr() const
{
    if (m_Pos_attr)
    {
        return *m_Pos_attr;
    }
    return ST_String::default_instance();
}

CT_CARETPOS* CT_CARETPOS::default_instance_ = NULL;

// CT_DOCSETTING
CT_DOCSETTING::CT_DOCSETTING()

{
}
CT_DOCSETTING::~CT_DOCSETTING()
{
    clear();
}
CT_BEGINNUMBER* CT_DOCSETTING::add_BEGINNUMBER()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_BEGINNUMBER* pNewChild = pChildGroup->mutable_BEGINNUMBER();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

CT_CARETPOS* CT_DOCSETTING::add_CARETPOS()
{
    ChildGroup_2 *pChildGroup = new ChildGroup_2();
    CT_CARETPOS* pNewChild = pChildGroup->mutable_CARETPOS();
    m_childGroupList_2.push_back(pChildGroup);
    return pNewChild;
}

void CT_DOCSETTING::clear()
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
}

void CT_DOCSETTING::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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
            if ((*iter)->has_BEGINNUMBER())
            {
                (*iter)->get_BEGINNUMBER().toXmlElem("BEGINNUMBER", "", _outStream);
            }


        }
    }

    {
        vector<ChildGroup_2*>::const_iterator iter;
        for (iter = m_childGroupList_2.begin(); iter != m_childGroupList_2.end(); ++iter)
        {
            if ((*iter)->has_CARETPOS())
            {
                (*iter)->get_CARETPOS().toXmlElem("CARETPOS", "", _outStream);
            }


        }
    }

    _outStream << "</" << _elemName << ">";
}

const CT_DOCSETTING& CT_DOCSETTING::default_instance()
{
    if (!CT_DOCSETTING::default_instance_)
    {
        CT_DOCSETTING::default_instance_ = new CT_DOCSETTING();
    }
    return *CT_DOCSETTING::default_instance_;
}


// CT_DOCSETTING::ChildGroup_1
CT_DOCSETTING::ChildGroup_1::ChildGroup_1()
    :m_has_BEGINNUMBER(false),
     m_BEGINNUMBER(NULL)
{
}
bool CT_DOCSETTING::ChildGroup_1::has_BEGINNUMBER() const
{
    return m_has_BEGINNUMBER;
}

CT_BEGINNUMBER* CT_DOCSETTING::ChildGroup_1::mutable_BEGINNUMBER()
{

    m_has_BEGINNUMBER = true;
    if (!m_BEGINNUMBER)
    {
        m_BEGINNUMBER = new CT_BEGINNUMBER();
    }
    return m_BEGINNUMBER;
}

const CT_BEGINNUMBER& CT_DOCSETTING::ChildGroup_1::get_BEGINNUMBER() const
{
    if (m_BEGINNUMBER)
    {
        return *m_BEGINNUMBER;
    }
    return CT_BEGINNUMBER::default_instance();
}


// CT_DOCSETTING::ChildGroup_2
CT_DOCSETTING::ChildGroup_2::ChildGroup_2()
    :m_has_CARETPOS(false),
     m_CARETPOS(NULL)
{
}
bool CT_DOCSETTING::ChildGroup_2::has_CARETPOS() const
{
    return m_has_CARETPOS;
}

CT_CARETPOS* CT_DOCSETTING::ChildGroup_2::mutable_CARETPOS()
{

    m_has_CARETPOS = true;
    if (!m_CARETPOS)
    {
        m_CARETPOS = new CT_CARETPOS();
    }
    return m_CARETPOS;
}

const CT_CARETPOS& CT_DOCSETTING::ChildGroup_2::get_CARETPOS() const
{
    if (m_CARETPOS)
    {
        return *m_CARETPOS;
    }
    return CT_CARETPOS::default_instance();
}

CT_DOCSETTING* CT_DOCSETTING::default_instance_ = NULL;

// CT_BINDATALIST
CT_BINDATALIST::CT_BINDATALIST()
    :m_has_Count_attr(false),
     m_Count_attr(NULL)
{
}
CT_BINDATALIST::~CT_BINDATALIST()
{
    clear();
}
CT_BINITEM* CT_BINDATALIST::add_BINITEM()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_BINITEM* pNewChild = pChildGroup->mutable_BINITEM();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

void CT_BINDATALIST::clear()
{
    m_has_Count_attr = false;

    if (m_Count_attr)
    {
        delete m_Count_attr;
        m_Count_attr = NULL;
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

void CT_BINDATALIST::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_Count_attr)
    {
        m_Count_attr->toXmlAttr("Count", _outStream);
    }

    _outStream << ">";

    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_BINITEM())
            {
                (*iter)->get_BINITEM().toXmlElem("BINITEM", "", _outStream);
            }


        }
    }

    _outStream << "</" << _elemName << ">";
}

const CT_BINDATALIST& CT_BINDATALIST::default_instance()
{
    if (!CT_BINDATALIST::default_instance_)
    {
        CT_BINDATALIST::default_instance_ = new CT_BINDATALIST();
    }
    return *CT_BINDATALIST::default_instance_;
}

bool CT_BINDATALIST::has_Count_attr() const
{
    return m_has_Count_attr;
}

void CT_BINDATALIST::set_Count_attr(const ST_UnsignedDecimalNumber& _Count_attr)
{
    m_has_Count_attr = true;
    m_Count_attr = new ST_UnsignedDecimalNumber(_Count_attr);
}

const ST_UnsignedDecimalNumber& CT_BINDATALIST::get_Count_attr() const
{
    if (m_Count_attr)
    {
        return *m_Count_attr;
    }
    return ST_UnsignedDecimalNumber::default_instance();
}


// CT_BINDATALIST::ChildGroup_1
CT_BINDATALIST::ChildGroup_1::ChildGroup_1()
    :m_has_BINITEM(false),
     m_BINITEM(NULL)
{
}
bool CT_BINDATALIST::ChildGroup_1::has_BINITEM() const
{
    return m_has_BINITEM;
}

CT_BINITEM* CT_BINDATALIST::ChildGroup_1::mutable_BINITEM()
{

    m_has_BINITEM = true;
    if (!m_BINITEM)
    {
        m_BINITEM = new CT_BINITEM();
    }
    return m_BINITEM;
}

const CT_BINITEM& CT_BINDATALIST::ChildGroup_1::get_BINITEM() const
{
    if (m_BINITEM)
    {
        return *m_BINITEM;
    }
    return CT_BINITEM::default_instance();
}

CT_BINDATALIST* CT_BINDATALIST::default_instance_ = NULL;

// CT_FONTFACE
CT_FONTFACE::CT_FONTFACE()
    :m_has_FONT(false),
     m_FONT(NULL),
     m_has_Lang_attr(false),
     m_Lang_attr(NULL),
     m_has_Count_attr(false),
     m_Count_attr(NULL)
{
}
CT_FONTFACE::~CT_FONTFACE()
{
    clear();
}
bool CT_FONTFACE::has_FONT() const
{
    return m_has_FONT;
}

CT_FONT* CT_FONTFACE::mutable_FONT()
{
    m_has_FONT = true;
    if (!m_FONT)
    {
        m_FONT = new CT_FONT();
    }
    return m_FONT;
}

const CT_FONT& CT_FONTFACE::get_FONT() const
{
    if (m_FONT)
    {
        return *m_FONT;
    }
    return CT_FONT::default_instance();
}

void CT_FONTFACE::clear()
{
    m_has_Lang_attr = false;

    if (m_Lang_attr)
    {
        delete m_Lang_attr;
        m_Lang_attr = NULL;
    }


    m_has_Count_attr = false;

    if (m_Count_attr)
    {
        delete m_Count_attr;
        m_Count_attr = NULL;
    }


    m_has_FONT = false;

    if (m_FONT)
    {
        delete m_FONT;
        m_FONT = NULL;
    }

}

void CT_FONTFACE::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_Lang_attr)
    {
        m_Lang_attr->toXmlAttr("Lang", _outStream);
    }



    if (m_has_Count_attr)
    {
        m_Count_attr->toXmlAttr("Count", _outStream);
    }

    _outStream << ">";

    assert(m_has_FONT);


    if (m_has_FONT)
    {
        m_FONT->toXmlElem("FONT", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_FONTFACE& CT_FONTFACE::default_instance()
{
    if (!CT_FONTFACE::default_instance_)
    {
        CT_FONTFACE::default_instance_ = new CT_FONTFACE();
    }
    return *CT_FONTFACE::default_instance_;
}

bool CT_FONTFACE::has_Lang_attr() const
{
    return m_has_Lang_attr;
}

void CT_FONTFACE::set_Lang_attr(const ST_String& _Lang_attr)
{
    m_has_Lang_attr = true;
    m_Lang_attr = new ST_String(_Lang_attr);
}

const ST_String& CT_FONTFACE::get_Lang_attr() const
{
    if (m_Lang_attr)
    {
        return *m_Lang_attr;
    }
    return ST_String::default_instance();
}

bool CT_FONTFACE::has_Count_attr() const
{
    return m_has_Count_attr;
}

void CT_FONTFACE::set_Count_attr(const ST_UnsignedDecimalNumber& _Count_attr)
{
    m_has_Count_attr = true;
    m_Count_attr = new ST_UnsignedDecimalNumber(_Count_attr);
}

const ST_UnsignedDecimalNumber& CT_FONTFACE::get_Count_attr() const
{
    if (m_Count_attr)
    {
        return *m_Count_attr;
    }
    return ST_UnsignedDecimalNumber::default_instance();
}

CT_FONTFACE* CT_FONTFACE::default_instance_ = NULL;

// CT_FACENAMELIST
CT_FACENAMELIST::CT_FACENAMELIST()

{
}
CT_FACENAMELIST::~CT_FACENAMELIST()
{
    clear();
}
CT_FONTFACE* CT_FACENAMELIST::add_FONTFACE()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_FONTFACE* pNewChild = pChildGroup->mutable_FONTFACE();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

void CT_FACENAMELIST::clear()
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

void CT_FACENAMELIST::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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
            if ((*iter)->has_FONTFACE())
            {
                (*iter)->get_FONTFACE().toXmlElem("FONTFACE", "", _outStream);
            }


        }
    }

    _outStream << "</" << _elemName << ">";
}

const CT_FACENAMELIST& CT_FACENAMELIST::default_instance()
{
    if (!CT_FACENAMELIST::default_instance_)
    {
        CT_FACENAMELIST::default_instance_ = new CT_FACENAMELIST();
    }
    return *CT_FACENAMELIST::default_instance_;
}


// CT_FACENAMELIST::ChildGroup_1
CT_FACENAMELIST::ChildGroup_1::ChildGroup_1()
    :m_has_FONTFACE(false),
     m_FONTFACE(NULL)
{
}
bool CT_FACENAMELIST::ChildGroup_1::has_FONTFACE() const
{
    return m_has_FONTFACE;
}

CT_FONTFACE* CT_FACENAMELIST::ChildGroup_1::mutable_FONTFACE()
{

    m_has_FONTFACE = true;
    if (!m_FONTFACE)
    {
        m_FONTFACE = new CT_FONTFACE();
    }
    return m_FONTFACE;
}

const CT_FONTFACE& CT_FACENAMELIST::ChildGroup_1::get_FONTFACE() const
{
    if (m_FONTFACE)
    {
        return *m_FONTFACE;
    }
    return CT_FONTFACE::default_instance();
}

CT_FACENAMELIST* CT_FACENAMELIST::default_instance_ = NULL;

// CT_BORDERFILLLIST
CT_BORDERFILLLIST::CT_BORDERFILLLIST()
    :m_has_Count_attr(false),
     m_Count_attr(NULL)
{
}
CT_BORDERFILLLIST::~CT_BORDERFILLLIST()
{
    clear();
}
CT_BORDERFILL* CT_BORDERFILLLIST::add_BORDERFILL()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_BORDERFILL* pNewChild = pChildGroup->mutable_BORDERFILL();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

void CT_BORDERFILLLIST::clear()
{
    m_has_Count_attr = false;

    if (m_Count_attr)
    {
        delete m_Count_attr;
        m_Count_attr = NULL;
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

void CT_BORDERFILLLIST::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_Count_attr)
    {
        m_Count_attr->toXmlAttr("Count", _outStream);
    }

    _outStream << ">";

    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_BORDERFILL())
            {
                (*iter)->get_BORDERFILL().toXmlElem("BORDERFILL", "", _outStream);
            }


        }
    }

    _outStream << "</" << _elemName << ">";
}

const CT_BORDERFILLLIST& CT_BORDERFILLLIST::default_instance()
{
    if (!CT_BORDERFILLLIST::default_instance_)
    {
        CT_BORDERFILLLIST::default_instance_ = new CT_BORDERFILLLIST();
    }
    return *CT_BORDERFILLLIST::default_instance_;
}

bool CT_BORDERFILLLIST::has_Count_attr() const
{
    return m_has_Count_attr;
}

void CT_BORDERFILLLIST::set_Count_attr(const ST_UnsignedDecimalNumber& _Count_attr)
{
    m_has_Count_attr = true;
    m_Count_attr = new ST_UnsignedDecimalNumber(_Count_attr);
}

const ST_UnsignedDecimalNumber& CT_BORDERFILLLIST::get_Count_attr() const
{
    if (m_Count_attr)
    {
        return *m_Count_attr;
    }
    return ST_UnsignedDecimalNumber::default_instance();
}


// CT_BORDERFILLLIST::ChildGroup_1
CT_BORDERFILLLIST::ChildGroup_1::ChildGroup_1()
    :m_has_BORDERFILL(false),
     m_BORDERFILL(NULL)
{
}
bool CT_BORDERFILLLIST::ChildGroup_1::has_BORDERFILL() const
{
    return m_has_BORDERFILL;
}

CT_BORDERFILL* CT_BORDERFILLLIST::ChildGroup_1::mutable_BORDERFILL()
{

    m_has_BORDERFILL = true;
    if (!m_BORDERFILL)
    {
        m_BORDERFILL = new CT_BORDERFILL();
    }
    return m_BORDERFILL;
}

const CT_BORDERFILL& CT_BORDERFILLLIST::ChildGroup_1::get_BORDERFILL() const
{
    if (m_BORDERFILL)
    {
        return *m_BORDERFILL;
    }
    return CT_BORDERFILL::default_instance();
}

CT_BORDERFILLLIST* CT_BORDERFILLLIST::default_instance_ = NULL;

// CT_CHARSHAPELIST
CT_CHARSHAPELIST::CT_CHARSHAPELIST()
    :m_has_Count_attr(false),
     m_Count_attr(NULL)
{
}
CT_CHARSHAPELIST::~CT_CHARSHAPELIST()
{
    clear();
}
CT_CHARSHAPE* CT_CHARSHAPELIST::add_CHARSHAPE()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_CHARSHAPE* pNewChild = pChildGroup->mutable_CHARSHAPE();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

void CT_CHARSHAPELIST::clear()
{
    m_has_Count_attr = false;

    if (m_Count_attr)
    {
        delete m_Count_attr;
        m_Count_attr = NULL;
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

void CT_CHARSHAPELIST::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_Count_attr)
    {
        m_Count_attr->toXmlAttr("Count", _outStream);
    }

    _outStream << ">";

    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_CHARSHAPE())
            {
                (*iter)->get_CHARSHAPE().toXmlElem("CHARSHAPE", "", _outStream);
            }


        }
    }

    _outStream << "</" << _elemName << ">";
}

const CT_CHARSHAPELIST& CT_CHARSHAPELIST::default_instance()
{
    if (!CT_CHARSHAPELIST::default_instance_)
    {
        CT_CHARSHAPELIST::default_instance_ = new CT_CHARSHAPELIST();
    }
    return *CT_CHARSHAPELIST::default_instance_;
}

bool CT_CHARSHAPELIST::has_Count_attr() const
{
    return m_has_Count_attr;
}

void CT_CHARSHAPELIST::set_Count_attr(const ST_UnsignedDecimalNumber& _Count_attr)
{
    m_has_Count_attr = true;
    m_Count_attr = new ST_UnsignedDecimalNumber(_Count_attr);
}

const ST_UnsignedDecimalNumber& CT_CHARSHAPELIST::get_Count_attr() const
{
    if (m_Count_attr)
    {
        return *m_Count_attr;
    }
    return ST_UnsignedDecimalNumber::default_instance();
}


// CT_CHARSHAPELIST::ChildGroup_1
CT_CHARSHAPELIST::ChildGroup_1::ChildGroup_1()
    :m_has_CHARSHAPE(false),
     m_CHARSHAPE(NULL)
{
}
bool CT_CHARSHAPELIST::ChildGroup_1::has_CHARSHAPE() const
{
    return m_has_CHARSHAPE;
}

CT_CHARSHAPE* CT_CHARSHAPELIST::ChildGroup_1::mutable_CHARSHAPE()
{

    m_has_CHARSHAPE = true;
    if (!m_CHARSHAPE)
    {
        m_CHARSHAPE = new CT_CHARSHAPE();
    }
    return m_CHARSHAPE;
}

const CT_CHARSHAPE& CT_CHARSHAPELIST::ChildGroup_1::get_CHARSHAPE() const
{
    if (m_CHARSHAPE)
    {
        return *m_CHARSHAPE;
    }
    return CT_CHARSHAPE::default_instance();
}

CT_CHARSHAPELIST* CT_CHARSHAPELIST::default_instance_ = NULL;

// CT_TABDEFLIST
CT_TABDEFLIST::CT_TABDEFLIST()
    :m_has_Count_attr(false),
     m_Count_attr(NULL)
{
}
CT_TABDEFLIST::~CT_TABDEFLIST()
{
    clear();
}
CT_TABDEF* CT_TABDEFLIST::add_TABDEF()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_TABDEF* pNewChild = pChildGroup->mutable_TABDEF();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

void CT_TABDEFLIST::clear()
{
    m_has_Count_attr = false;

    if (m_Count_attr)
    {
        delete m_Count_attr;
        m_Count_attr = NULL;
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

void CT_TABDEFLIST::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_Count_attr)
    {
        m_Count_attr->toXmlAttr("Count", _outStream);
    }

    _outStream << ">";

    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_TABDEF())
            {
                (*iter)->get_TABDEF().toXmlElem("TABDEF", "", _outStream);
            }


        }
    }

    _outStream << "</" << _elemName << ">";
}

const CT_TABDEFLIST& CT_TABDEFLIST::default_instance()
{
    if (!CT_TABDEFLIST::default_instance_)
    {
        CT_TABDEFLIST::default_instance_ = new CT_TABDEFLIST();
    }
    return *CT_TABDEFLIST::default_instance_;
}

bool CT_TABDEFLIST::has_Count_attr() const
{
    return m_has_Count_attr;
}

void CT_TABDEFLIST::set_Count_attr(const ST_UnsignedDecimalNumber& _Count_attr)
{
    m_has_Count_attr = true;
    m_Count_attr = new ST_UnsignedDecimalNumber(_Count_attr);
}

const ST_UnsignedDecimalNumber& CT_TABDEFLIST::get_Count_attr() const
{
    if (m_Count_attr)
    {
        return *m_Count_attr;
    }
    return ST_UnsignedDecimalNumber::default_instance();
}


// CT_TABDEFLIST::ChildGroup_1
CT_TABDEFLIST::ChildGroup_1::ChildGroup_1()
    :m_has_TABDEF(false),
     m_TABDEF(NULL)
{
}
bool CT_TABDEFLIST::ChildGroup_1::has_TABDEF() const
{
    return m_has_TABDEF;
}

CT_TABDEF* CT_TABDEFLIST::ChildGroup_1::mutable_TABDEF()
{

    m_has_TABDEF = true;
    if (!m_TABDEF)
    {
        m_TABDEF = new CT_TABDEF();
    }
    return m_TABDEF;
}

const CT_TABDEF& CT_TABDEFLIST::ChildGroup_1::get_TABDEF() const
{
    if (m_TABDEF)
    {
        return *m_TABDEF;
    }
    return CT_TABDEF::default_instance();
}

CT_TABDEFLIST* CT_TABDEFLIST::default_instance_ = NULL;

// CT_NUMBERINGLIST
CT_NUMBERINGLIST::CT_NUMBERINGLIST()
    :m_has_Count_attr(false),
     m_Count_attr(NULL)
{
}
CT_NUMBERINGLIST::~CT_NUMBERINGLIST()
{
    clear();
}
CT_NUMBERING* CT_NUMBERINGLIST::add_NUMBERING()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_NUMBERING* pNewChild = pChildGroup->mutable_NUMBERING();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

void CT_NUMBERINGLIST::clear()
{
    m_has_Count_attr = false;

    if (m_Count_attr)
    {
        delete m_Count_attr;
        m_Count_attr = NULL;
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

void CT_NUMBERINGLIST::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_Count_attr)
    {
        m_Count_attr->toXmlAttr("Count", _outStream);
    }

    _outStream << ">";

    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_NUMBERING())
            {
                (*iter)->get_NUMBERING().toXmlElem("NUMBERING", "", _outStream);
            }


        }
    }

    _outStream << "</" << _elemName << ">";
}

const CT_NUMBERINGLIST& CT_NUMBERINGLIST::default_instance()
{
    if (!CT_NUMBERINGLIST::default_instance_)
    {
        CT_NUMBERINGLIST::default_instance_ = new CT_NUMBERINGLIST();
    }
    return *CT_NUMBERINGLIST::default_instance_;
}

bool CT_NUMBERINGLIST::has_Count_attr() const
{
    return m_has_Count_attr;
}

void CT_NUMBERINGLIST::set_Count_attr(const ST_UnsignedDecimalNumber& _Count_attr)
{
    m_has_Count_attr = true;
    m_Count_attr = new ST_UnsignedDecimalNumber(_Count_attr);
}

const ST_UnsignedDecimalNumber& CT_NUMBERINGLIST::get_Count_attr() const
{
    if (m_Count_attr)
    {
        return *m_Count_attr;
    }
    return ST_UnsignedDecimalNumber::default_instance();
}


// CT_NUMBERINGLIST::ChildGroup_1
CT_NUMBERINGLIST::ChildGroup_1::ChildGroup_1()
    :m_has_NUMBERING(false),
     m_NUMBERING(NULL)
{
}
bool CT_NUMBERINGLIST::ChildGroup_1::has_NUMBERING() const
{
    return m_has_NUMBERING;
}

CT_NUMBERING* CT_NUMBERINGLIST::ChildGroup_1::mutable_NUMBERING()
{

    m_has_NUMBERING = true;
    if (!m_NUMBERING)
    {
        m_NUMBERING = new CT_NUMBERING();
    }
    return m_NUMBERING;
}

const CT_NUMBERING& CT_NUMBERINGLIST::ChildGroup_1::get_NUMBERING() const
{
    if (m_NUMBERING)
    {
        return *m_NUMBERING;
    }
    return CT_NUMBERING::default_instance();
}

CT_NUMBERINGLIST* CT_NUMBERINGLIST::default_instance_ = NULL;

// CT_BULLETLIST
CT_BULLETLIST::CT_BULLETLIST()
    :m_has_Count_attr(false),
     m_Count_attr(NULL)
{
}
CT_BULLETLIST::~CT_BULLETLIST()
{
    clear();
}
CT_BULLET* CT_BULLETLIST::add_BULLET()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_BULLET* pNewChild = pChildGroup->mutable_BULLET();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

void CT_BULLETLIST::clear()
{
    m_has_Count_attr = false;

    if (m_Count_attr)
    {
        delete m_Count_attr;
        m_Count_attr = NULL;
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

void CT_BULLETLIST::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_Count_attr)
    {
        m_Count_attr->toXmlAttr("Count", _outStream);
    }

    _outStream << ">";

    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_BULLET())
            {
                (*iter)->get_BULLET().toXmlElem("BULLET", "", _outStream);
            }


        }
    }

    _outStream << "</" << _elemName << ">";
}

const CT_BULLETLIST& CT_BULLETLIST::default_instance()
{
    if (!CT_BULLETLIST::default_instance_)
    {
        CT_BULLETLIST::default_instance_ = new CT_BULLETLIST();
    }
    return *CT_BULLETLIST::default_instance_;
}

bool CT_BULLETLIST::has_Count_attr() const
{
    return m_has_Count_attr;
}

void CT_BULLETLIST::set_Count_attr(const ST_UnsignedDecimalNumber& _Count_attr)
{
    m_has_Count_attr = true;
    m_Count_attr = new ST_UnsignedDecimalNumber(_Count_attr);
}

const ST_UnsignedDecimalNumber& CT_BULLETLIST::get_Count_attr() const
{
    if (m_Count_attr)
    {
        return *m_Count_attr;
    }
    return ST_UnsignedDecimalNumber::default_instance();
}


// CT_BULLETLIST::ChildGroup_1
CT_BULLETLIST::ChildGroup_1::ChildGroup_1()
    :m_has_BULLET(false),
     m_BULLET(NULL)
{
}
bool CT_BULLETLIST::ChildGroup_1::has_BULLET() const
{
    return m_has_BULLET;
}

CT_BULLET* CT_BULLETLIST::ChildGroup_1::mutable_BULLET()
{

    m_has_BULLET = true;
    if (!m_BULLET)
    {
        m_BULLET = new CT_BULLET();
    }
    return m_BULLET;
}

const CT_BULLET& CT_BULLETLIST::ChildGroup_1::get_BULLET() const
{
    if (m_BULLET)
    {
        return *m_BULLET;
    }
    return CT_BULLET::default_instance();
}

CT_BULLETLIST* CT_BULLETLIST::default_instance_ = NULL;

// CT_PARASHAPELIST
CT_PARASHAPELIST::CT_PARASHAPELIST()
    :m_has_Count_attr(false),
     m_Count_attr(NULL)
{
}
CT_PARASHAPELIST::~CT_PARASHAPELIST()
{
    clear();
}
CT_PARASHAPE* CT_PARASHAPELIST::add_PARASHAPE()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_PARASHAPE* pNewChild = pChildGroup->mutable_PARASHAPE();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

void CT_PARASHAPELIST::clear()
{
    m_has_Count_attr = false;

    if (m_Count_attr)
    {
        delete m_Count_attr;
        m_Count_attr = NULL;
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

void CT_PARASHAPELIST::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_Count_attr)
    {
        m_Count_attr->toXmlAttr("Count", _outStream);
    }

    _outStream << ">";

    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_PARASHAPE())
            {
                (*iter)->get_PARASHAPE().toXmlElem("PARASHAPE", "", _outStream);
            }


        }
    }

    _outStream << "</" << _elemName << ">";
}

const CT_PARASHAPELIST& CT_PARASHAPELIST::default_instance()
{
    if (!CT_PARASHAPELIST::default_instance_)
    {
        CT_PARASHAPELIST::default_instance_ = new CT_PARASHAPELIST();
    }
    return *CT_PARASHAPELIST::default_instance_;
}

bool CT_PARASHAPELIST::has_Count_attr() const
{
    return m_has_Count_attr;
}

void CT_PARASHAPELIST::set_Count_attr(const ST_UnsignedDecimalNumber& _Count_attr)
{
    m_has_Count_attr = true;
    m_Count_attr = new ST_UnsignedDecimalNumber(_Count_attr);
}

const ST_UnsignedDecimalNumber& CT_PARASHAPELIST::get_Count_attr() const
{
    if (m_Count_attr)
    {
        return *m_Count_attr;
    }
    return ST_UnsignedDecimalNumber::default_instance();
}


// CT_PARASHAPELIST::ChildGroup_1
CT_PARASHAPELIST::ChildGroup_1::ChildGroup_1()
    :m_has_PARASHAPE(false),
     m_PARASHAPE(NULL)
{
}
bool CT_PARASHAPELIST::ChildGroup_1::has_PARASHAPE() const
{
    return m_has_PARASHAPE;
}

CT_PARASHAPE* CT_PARASHAPELIST::ChildGroup_1::mutable_PARASHAPE()
{

    m_has_PARASHAPE = true;
    if (!m_PARASHAPE)
    {
        m_PARASHAPE = new CT_PARASHAPE();
    }
    return m_PARASHAPE;
}

const CT_PARASHAPE& CT_PARASHAPELIST::ChildGroup_1::get_PARASHAPE() const
{
    if (m_PARASHAPE)
    {
        return *m_PARASHAPE;
    }
    return CT_PARASHAPE::default_instance();
}

CT_PARASHAPELIST* CT_PARASHAPELIST::default_instance_ = NULL;

// CT_STYLELIST
CT_STYLELIST::CT_STYLELIST()
    :m_has_Count_attr(false),
     m_Count_attr(NULL)
{
}
CT_STYLELIST::~CT_STYLELIST()
{
    clear();
}
CT_STYLE* CT_STYLELIST::add_STYLE()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_STYLE* pNewChild = pChildGroup->mutable_STYLE();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

void CT_STYLELIST::clear()
{
    m_has_Count_attr = false;

    if (m_Count_attr)
    {
        delete m_Count_attr;
        m_Count_attr = NULL;
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

void CT_STYLELIST::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_Count_attr)
    {
        m_Count_attr->toXmlAttr("Count", _outStream);
    }

    _outStream << ">";

    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_STYLE())
            {
                (*iter)->get_STYLE().toXmlElem("STYLE", "", _outStream);
            }


        }
    }

    _outStream << "</" << _elemName << ">";
}

const CT_STYLELIST& CT_STYLELIST::default_instance()
{
    if (!CT_STYLELIST::default_instance_)
    {
        CT_STYLELIST::default_instance_ = new CT_STYLELIST();
    }
    return *CT_STYLELIST::default_instance_;
}

bool CT_STYLELIST::has_Count_attr() const
{
    return m_has_Count_attr;
}

void CT_STYLELIST::set_Count_attr(const ST_UnsignedDecimalNumber& _Count_attr)
{
    m_has_Count_attr = true;
    m_Count_attr = new ST_UnsignedDecimalNumber(_Count_attr);
}

const ST_UnsignedDecimalNumber& CT_STYLELIST::get_Count_attr() const
{
    if (m_Count_attr)
    {
        return *m_Count_attr;
    }
    return ST_UnsignedDecimalNumber::default_instance();
}


// CT_STYLELIST::ChildGroup_1
CT_STYLELIST::ChildGroup_1::ChildGroup_1()
    :m_has_STYLE(false),
     m_STYLE(NULL)
{
}
bool CT_STYLELIST::ChildGroup_1::has_STYLE() const
{
    return m_has_STYLE;
}

CT_STYLE* CT_STYLELIST::ChildGroup_1::mutable_STYLE()
{

    m_has_STYLE = true;
    if (!m_STYLE)
    {
        m_STYLE = new CT_STYLE();
    }
    return m_STYLE;
}

const CT_STYLE& CT_STYLELIST::ChildGroup_1::get_STYLE() const
{
    if (m_STYLE)
    {
        return *m_STYLE;
    }
    return CT_STYLE::default_instance();
}

CT_STYLELIST* CT_STYLELIST::default_instance_ = NULL;

// CT_MEMOSHAPELIST
CT_MEMOSHAPELIST::CT_MEMOSHAPELIST()
    :m_has_Count_attr(false),
     m_Count_attr(NULL)
{
}
CT_MEMOSHAPELIST::~CT_MEMOSHAPELIST()
{
    clear();
}
CT_MEMO* CT_MEMOSHAPELIST::add_MEMO()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_MEMO* pNewChild = pChildGroup->mutable_MEMO();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

void CT_MEMOSHAPELIST::clear()
{
    m_has_Count_attr = false;

    if (m_Count_attr)
    {
        delete m_Count_attr;
        m_Count_attr = NULL;
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

void CT_MEMOSHAPELIST::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_Count_attr)
    {
        m_Count_attr->toXmlAttr("Count", _outStream);
    }

    _outStream << ">";

    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_MEMO())
            {
                (*iter)->get_MEMO().toXmlElem("MEMO", "", _outStream);
            }


        }
    }

    _outStream << "</" << _elemName << ">";
}

const CT_MEMOSHAPELIST& CT_MEMOSHAPELIST::default_instance()
{
    if (!CT_MEMOSHAPELIST::default_instance_)
    {
        CT_MEMOSHAPELIST::default_instance_ = new CT_MEMOSHAPELIST();
    }
    return *CT_MEMOSHAPELIST::default_instance_;
}

bool CT_MEMOSHAPELIST::has_Count_attr() const
{
    return m_has_Count_attr;
}

void CT_MEMOSHAPELIST::set_Count_attr(const ST_UnsignedDecimalNumber& _Count_attr)
{
    m_has_Count_attr = true;
    m_Count_attr = new ST_UnsignedDecimalNumber(_Count_attr);
}

const ST_UnsignedDecimalNumber& CT_MEMOSHAPELIST::get_Count_attr() const
{
    if (m_Count_attr)
    {
        return *m_Count_attr;
    }
    return ST_UnsignedDecimalNumber::default_instance();
}


// CT_MEMOSHAPELIST::ChildGroup_1
CT_MEMOSHAPELIST::ChildGroup_1::ChildGroup_1()
    :m_has_MEMO(false),
     m_MEMO(NULL)
{
}
bool CT_MEMOSHAPELIST::ChildGroup_1::has_MEMO() const
{
    return m_has_MEMO;
}

CT_MEMO* CT_MEMOSHAPELIST::ChildGroup_1::mutable_MEMO()
{

    m_has_MEMO = true;
    if (!m_MEMO)
    {
        m_MEMO = new CT_MEMO();
    }
    return m_MEMO;
}

const CT_MEMO& CT_MEMOSHAPELIST::ChildGroup_1::get_MEMO() const
{
    if (m_MEMO)
    {
        return *m_MEMO;
    }
    return CT_MEMO::default_instance();
}

CT_MEMOSHAPELIST* CT_MEMOSHAPELIST::default_instance_ = NULL;

// CT_MAPPINGTABLE
CT_MAPPINGTABLE::CT_MAPPINGTABLE()

{
}
CT_MAPPINGTABLE::~CT_MAPPINGTABLE()
{
    clear();
}
CT_BINDATALIST* CT_MAPPINGTABLE::add_BINDATALIST()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_BINDATALIST* pNewChild = pChildGroup->mutable_BINDATALIST();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

CT_FACENAMELIST* CT_MAPPINGTABLE::add_FACENAMELIST()
{
    ChildGroup_2 *pChildGroup = new ChildGroup_2();
    CT_FACENAMELIST* pNewChild = pChildGroup->mutable_FACENAMELIST();
    m_childGroupList_2.push_back(pChildGroup);
    return pNewChild;
}

CT_BORDERFILLLIST* CT_MAPPINGTABLE::add_BORDERFILLLIST()
{
    ChildGroup_3 *pChildGroup = new ChildGroup_3();
    CT_BORDERFILLLIST* pNewChild = pChildGroup->mutable_BORDERFILLLIST();
    m_childGroupList_3.push_back(pChildGroup);
    return pNewChild;
}

CT_CHARSHAPELIST* CT_MAPPINGTABLE::add_CHARSHAPELIST()
{
    ChildGroup_4 *pChildGroup = new ChildGroup_4();
    CT_CHARSHAPELIST* pNewChild = pChildGroup->mutable_CHARSHAPELIST();
    m_childGroupList_4.push_back(pChildGroup);
    return pNewChild;
}

CT_TABDEFLIST* CT_MAPPINGTABLE::add_TABDEFLIST()
{
    ChildGroup_5 *pChildGroup = new ChildGroup_5();
    CT_TABDEFLIST* pNewChild = pChildGroup->mutable_TABDEFLIST();
    m_childGroupList_5.push_back(pChildGroup);
    return pNewChild;
}

CT_NUMBERINGLIST* CT_MAPPINGTABLE::add_NUMBERINGLIST()
{
    ChildGroup_6 *pChildGroup = new ChildGroup_6();
    CT_NUMBERINGLIST* pNewChild = pChildGroup->mutable_NUMBERINGLIST();
    m_childGroupList_6.push_back(pChildGroup);
    return pNewChild;
}

CT_BULLETLIST* CT_MAPPINGTABLE::add_BULLETLIST()
{
    ChildGroup_7 *pChildGroup = new ChildGroup_7();
    CT_BULLETLIST* pNewChild = pChildGroup->mutable_BULLETLIST();
    m_childGroupList_7.push_back(pChildGroup);
    return pNewChild;
}

CT_PARASHAPELIST* CT_MAPPINGTABLE::add_PARASHAPELIST()
{
    ChildGroup_8 *pChildGroup = new ChildGroup_8();
    CT_PARASHAPELIST* pNewChild = pChildGroup->mutable_PARASHAPELIST();
    m_childGroupList_8.push_back(pChildGroup);
    return pNewChild;
}

CT_STYLELIST* CT_MAPPINGTABLE::add_STYLELIST()
{
    ChildGroup_9 *pChildGroup = new ChildGroup_9();
    CT_STYLELIST* pNewChild = pChildGroup->mutable_STYLELIST();
    m_childGroupList_9.push_back(pChildGroup);
    return pNewChild;
}

CT_MEMOSHAPELIST* CT_MAPPINGTABLE::add_MEMOSHAPELIST()
{
    ChildGroup_10 *pChildGroup = new ChildGroup_10();
    CT_MEMOSHAPELIST* pNewChild = pChildGroup->mutable_MEMOSHAPELIST();
    m_childGroupList_10.push_back(pChildGroup);
    return pNewChild;
}

void CT_MAPPINGTABLE::clear()
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

    {
        vector<ChildGroup_8*>::iterator iter;
        for (iter = m_childGroupList_8.begin(); iter != m_childGroupList_8.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_8.clear();
    }

    {
        vector<ChildGroup_9*>::iterator iter;
        for (iter = m_childGroupList_9.begin(); iter != m_childGroupList_9.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_9.clear();
    }

    {
        vector<ChildGroup_10*>::iterator iter;
        for (iter = m_childGroupList_10.begin(); iter != m_childGroupList_10.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_10.clear();
    }
}

void CT_MAPPINGTABLE::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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
            if ((*iter)->has_BINDATALIST())
            {
                (*iter)->get_BINDATALIST().toXmlElem("BINDATALIST", "", _outStream);
            }


        }
    }

    {
        vector<ChildGroup_2*>::const_iterator iter;
        for (iter = m_childGroupList_2.begin(); iter != m_childGroupList_2.end(); ++iter)
        {
            if ((*iter)->has_FACENAMELIST())
            {
                (*iter)->get_FACENAMELIST().toXmlElem("FACENAMELIST", "", _outStream);
            }


        }
    }

    {
        vector<ChildGroup_3*>::const_iterator iter;
        for (iter = m_childGroupList_3.begin(); iter != m_childGroupList_3.end(); ++iter)
        {
            if ((*iter)->has_BORDERFILLLIST())
            {
                (*iter)->get_BORDERFILLLIST().toXmlElem("BORDERFILLLIST", "", _outStream);
            }


        }
    }

    {
        vector<ChildGroup_4*>::const_iterator iter;
        for (iter = m_childGroupList_4.begin(); iter != m_childGroupList_4.end(); ++iter)
        {
            if ((*iter)->has_CHARSHAPELIST())
            {
                (*iter)->get_CHARSHAPELIST().toXmlElem("CHARSHAPELIST", "", _outStream);
            }


        }
    }

    {
        vector<ChildGroup_5*>::const_iterator iter;
        for (iter = m_childGroupList_5.begin(); iter != m_childGroupList_5.end(); ++iter)
        {
            if ((*iter)->has_TABDEFLIST())
            {
                (*iter)->get_TABDEFLIST().toXmlElem("TABDEFLIST", "", _outStream);
            }


        }
    }

    {
        vector<ChildGroup_6*>::const_iterator iter;
        for (iter = m_childGroupList_6.begin(); iter != m_childGroupList_6.end(); ++iter)
        {
            if ((*iter)->has_NUMBERINGLIST())
            {
                (*iter)->get_NUMBERINGLIST().toXmlElem("NUMBERINGLIST", "", _outStream);
            }


        }
    }

    {
        vector<ChildGroup_7*>::const_iterator iter;
        for (iter = m_childGroupList_7.begin(); iter != m_childGroupList_7.end(); ++iter)
        {
            if ((*iter)->has_BULLETLIST())
            {
                (*iter)->get_BULLETLIST().toXmlElem("BULLETLIST", "", _outStream);
            }


        }
    }

    {
        vector<ChildGroup_8*>::const_iterator iter;
        for (iter = m_childGroupList_8.begin(); iter != m_childGroupList_8.end(); ++iter)
        {
            if ((*iter)->has_PARASHAPELIST())
            {
                (*iter)->get_PARASHAPELIST().toXmlElem("PARASHAPELIST", "", _outStream);
            }


        }
    }

    {
        vector<ChildGroup_9*>::const_iterator iter;
        for (iter = m_childGroupList_9.begin(); iter != m_childGroupList_9.end(); ++iter)
        {
            if ((*iter)->has_STYLELIST())
            {
                (*iter)->get_STYLELIST().toXmlElem("STYLELIST", "", _outStream);
            }


        }
    }

    {
        vector<ChildGroup_10*>::const_iterator iter;
        for (iter = m_childGroupList_10.begin(); iter != m_childGroupList_10.end(); ++iter)
        {
            if ((*iter)->has_MEMOSHAPELIST())
            {
                (*iter)->get_MEMOSHAPELIST().toXmlElem("MEMOSHAPELIST", "", _outStream);
            }


        }
    }

    _outStream << "</" << _elemName << ">";
}

const CT_MAPPINGTABLE& CT_MAPPINGTABLE::default_instance()
{
    if (!CT_MAPPINGTABLE::default_instance_)
    {
        CT_MAPPINGTABLE::default_instance_ = new CT_MAPPINGTABLE();
    }
    return *CT_MAPPINGTABLE::default_instance_;
}


// CT_MAPPINGTABLE::ChildGroup_1
CT_MAPPINGTABLE::ChildGroup_1::ChildGroup_1()
    :m_has_BINDATALIST(false),
     m_BINDATALIST(NULL)
{
}
bool CT_MAPPINGTABLE::ChildGroup_1::has_BINDATALIST() const
{
    return m_has_BINDATALIST;
}

CT_BINDATALIST* CT_MAPPINGTABLE::ChildGroup_1::mutable_BINDATALIST()
{

    m_has_BINDATALIST = true;
    if (!m_BINDATALIST)
    {
        m_BINDATALIST = new CT_BINDATALIST();
    }
    return m_BINDATALIST;
}

const CT_BINDATALIST& CT_MAPPINGTABLE::ChildGroup_1::get_BINDATALIST() const
{
    if (m_BINDATALIST)
    {
        return *m_BINDATALIST;
    }
    return CT_BINDATALIST::default_instance();
}


// CT_MAPPINGTABLE::ChildGroup_2
CT_MAPPINGTABLE::ChildGroup_2::ChildGroup_2()
    :m_has_FACENAMELIST(false),
     m_FACENAMELIST(NULL)
{
}
bool CT_MAPPINGTABLE::ChildGroup_2::has_FACENAMELIST() const
{
    return m_has_FACENAMELIST;
}

CT_FACENAMELIST* CT_MAPPINGTABLE::ChildGroup_2::mutable_FACENAMELIST()
{

    m_has_FACENAMELIST = true;
    if (!m_FACENAMELIST)
    {
        m_FACENAMELIST = new CT_FACENAMELIST();
    }
    return m_FACENAMELIST;
}

const CT_FACENAMELIST& CT_MAPPINGTABLE::ChildGroup_2::get_FACENAMELIST() const
{
    if (m_FACENAMELIST)
    {
        return *m_FACENAMELIST;
    }
    return CT_FACENAMELIST::default_instance();
}


// CT_MAPPINGTABLE::ChildGroup_3
CT_MAPPINGTABLE::ChildGroup_3::ChildGroup_3()
    :m_has_BORDERFILLLIST(false),
     m_BORDERFILLLIST(NULL)
{
}
bool CT_MAPPINGTABLE::ChildGroup_3::has_BORDERFILLLIST() const
{
    return m_has_BORDERFILLLIST;
}

CT_BORDERFILLLIST* CT_MAPPINGTABLE::ChildGroup_3::mutable_BORDERFILLLIST()
{

    m_has_BORDERFILLLIST = true;
    if (!m_BORDERFILLLIST)
    {
        m_BORDERFILLLIST = new CT_BORDERFILLLIST();
    }
    return m_BORDERFILLLIST;
}

const CT_BORDERFILLLIST& CT_MAPPINGTABLE::ChildGroup_3::get_BORDERFILLLIST() const
{
    if (m_BORDERFILLLIST)
    {
        return *m_BORDERFILLLIST;
    }
    return CT_BORDERFILLLIST::default_instance();
}


// CT_MAPPINGTABLE::ChildGroup_4
CT_MAPPINGTABLE::ChildGroup_4::ChildGroup_4()
    :m_has_CHARSHAPELIST(false),
     m_CHARSHAPELIST(NULL)
{
}
bool CT_MAPPINGTABLE::ChildGroup_4::has_CHARSHAPELIST() const
{
    return m_has_CHARSHAPELIST;
}

CT_CHARSHAPELIST* CT_MAPPINGTABLE::ChildGroup_4::mutable_CHARSHAPELIST()
{

    m_has_CHARSHAPELIST = true;
    if (!m_CHARSHAPELIST)
    {
        m_CHARSHAPELIST = new CT_CHARSHAPELIST();
    }
    return m_CHARSHAPELIST;
}

const CT_CHARSHAPELIST& CT_MAPPINGTABLE::ChildGroup_4::get_CHARSHAPELIST() const
{
    if (m_CHARSHAPELIST)
    {
        return *m_CHARSHAPELIST;
    }
    return CT_CHARSHAPELIST::default_instance();
}


// CT_MAPPINGTABLE::ChildGroup_5
CT_MAPPINGTABLE::ChildGroup_5::ChildGroup_5()
    :m_has_TABDEFLIST(false),
     m_TABDEFLIST(NULL)
{
}
bool CT_MAPPINGTABLE::ChildGroup_5::has_TABDEFLIST() const
{
    return m_has_TABDEFLIST;
}

CT_TABDEFLIST* CT_MAPPINGTABLE::ChildGroup_5::mutable_TABDEFLIST()
{

    m_has_TABDEFLIST = true;
    if (!m_TABDEFLIST)
    {
        m_TABDEFLIST = new CT_TABDEFLIST();
    }
    return m_TABDEFLIST;
}

const CT_TABDEFLIST& CT_MAPPINGTABLE::ChildGroup_5::get_TABDEFLIST() const
{
    if (m_TABDEFLIST)
    {
        return *m_TABDEFLIST;
    }
    return CT_TABDEFLIST::default_instance();
}


// CT_MAPPINGTABLE::ChildGroup_6
CT_MAPPINGTABLE::ChildGroup_6::ChildGroup_6()
    :m_has_NUMBERINGLIST(false),
     m_NUMBERINGLIST(NULL)
{
}
bool CT_MAPPINGTABLE::ChildGroup_6::has_NUMBERINGLIST() const
{
    return m_has_NUMBERINGLIST;
}

CT_NUMBERINGLIST* CT_MAPPINGTABLE::ChildGroup_6::mutable_NUMBERINGLIST()
{

    m_has_NUMBERINGLIST = true;
    if (!m_NUMBERINGLIST)
    {
        m_NUMBERINGLIST = new CT_NUMBERINGLIST();
    }
    return m_NUMBERINGLIST;
}

const CT_NUMBERINGLIST& CT_MAPPINGTABLE::ChildGroup_6::get_NUMBERINGLIST() const
{
    if (m_NUMBERINGLIST)
    {
        return *m_NUMBERINGLIST;
    }
    return CT_NUMBERINGLIST::default_instance();
}


// CT_MAPPINGTABLE::ChildGroup_7
CT_MAPPINGTABLE::ChildGroup_7::ChildGroup_7()
    :m_has_BULLETLIST(false),
     m_BULLETLIST(NULL)
{
}
bool CT_MAPPINGTABLE::ChildGroup_7::has_BULLETLIST() const
{
    return m_has_BULLETLIST;
}

CT_BULLETLIST* CT_MAPPINGTABLE::ChildGroup_7::mutable_BULLETLIST()
{

    m_has_BULLETLIST = true;
    if (!m_BULLETLIST)
    {
        m_BULLETLIST = new CT_BULLETLIST();
    }
    return m_BULLETLIST;
}

const CT_BULLETLIST& CT_MAPPINGTABLE::ChildGroup_7::get_BULLETLIST() const
{
    if (m_BULLETLIST)
    {
        return *m_BULLETLIST;
    }
    return CT_BULLETLIST::default_instance();
}


// CT_MAPPINGTABLE::ChildGroup_8
CT_MAPPINGTABLE::ChildGroup_8::ChildGroup_8()
    :m_has_PARASHAPELIST(false),
     m_PARASHAPELIST(NULL)
{
}
bool CT_MAPPINGTABLE::ChildGroup_8::has_PARASHAPELIST() const
{
    return m_has_PARASHAPELIST;
}

CT_PARASHAPELIST* CT_MAPPINGTABLE::ChildGroup_8::mutable_PARASHAPELIST()
{

    m_has_PARASHAPELIST = true;
    if (!m_PARASHAPELIST)
    {
        m_PARASHAPELIST = new CT_PARASHAPELIST();
    }
    return m_PARASHAPELIST;
}

const CT_PARASHAPELIST& CT_MAPPINGTABLE::ChildGroup_8::get_PARASHAPELIST() const
{
    if (m_PARASHAPELIST)
    {
        return *m_PARASHAPELIST;
    }
    return CT_PARASHAPELIST::default_instance();
}


// CT_MAPPINGTABLE::ChildGroup_9
CT_MAPPINGTABLE::ChildGroup_9::ChildGroup_9()
    :m_has_STYLELIST(false),
     m_STYLELIST(NULL)
{
}
bool CT_MAPPINGTABLE::ChildGroup_9::has_STYLELIST() const
{
    return m_has_STYLELIST;
}

CT_STYLELIST* CT_MAPPINGTABLE::ChildGroup_9::mutable_STYLELIST()
{

    m_has_STYLELIST = true;
    if (!m_STYLELIST)
    {
        m_STYLELIST = new CT_STYLELIST();
    }
    return m_STYLELIST;
}

const CT_STYLELIST& CT_MAPPINGTABLE::ChildGroup_9::get_STYLELIST() const
{
    if (m_STYLELIST)
    {
        return *m_STYLELIST;
    }
    return CT_STYLELIST::default_instance();
}


// CT_MAPPINGTABLE::ChildGroup_10
CT_MAPPINGTABLE::ChildGroup_10::ChildGroup_10()
    :m_has_MEMOSHAPELIST(false),
     m_MEMOSHAPELIST(NULL)
{
}
bool CT_MAPPINGTABLE::ChildGroup_10::has_MEMOSHAPELIST() const
{
    return m_has_MEMOSHAPELIST;
}

CT_MEMOSHAPELIST* CT_MAPPINGTABLE::ChildGroup_10::mutable_MEMOSHAPELIST()
{

    m_has_MEMOSHAPELIST = true;
    if (!m_MEMOSHAPELIST)
    {
        m_MEMOSHAPELIST = new CT_MEMOSHAPELIST();
    }
    return m_MEMOSHAPELIST;
}

const CT_MEMOSHAPELIST& CT_MAPPINGTABLE::ChildGroup_10::get_MEMOSHAPELIST() const
{
    if (m_MEMOSHAPELIST)
    {
        return *m_MEMOSHAPELIST;
    }
    return CT_MEMOSHAPELIST::default_instance();
}

CT_MAPPINGTABLE* CT_MAPPINGTABLE::default_instance_ = NULL;

// CT_HEAD
CT_HEAD::CT_HEAD()
    :m_has_DOCSUMMARY(false),
     m_DOCSUMMARY(NULL),
     m_has_DOCSETTING(false),
     m_DOCSETTING(NULL),
     m_has_MAPPINGTABLE(false),
     m_MAPPINGTABLE(NULL),
     m_has_SecCnt_attr(false),
     m_SecCnt_attr(NULL)
{
}
CT_HEAD::~CT_HEAD()
{
    clear();
}
bool CT_HEAD::has_DOCSUMMARY() const
{
    return m_has_DOCSUMMARY;
}

CT_DOCSUMMARY* CT_HEAD::mutable_DOCSUMMARY()
{
    m_has_DOCSUMMARY = true;
    if (!m_DOCSUMMARY)
    {
        m_DOCSUMMARY = new CT_DOCSUMMARY();
    }
    return m_DOCSUMMARY;
}

const CT_DOCSUMMARY& CT_HEAD::get_DOCSUMMARY() const
{
    if (m_DOCSUMMARY)
    {
        return *m_DOCSUMMARY;
    }
    return CT_DOCSUMMARY::default_instance();
}

bool CT_HEAD::has_DOCSETTING() const
{
    return m_has_DOCSETTING;
}

CT_DOCSETTING* CT_HEAD::mutable_DOCSETTING()
{
    m_has_DOCSETTING = true;
    if (!m_DOCSETTING)
    {
        m_DOCSETTING = new CT_DOCSETTING();
    }
    return m_DOCSETTING;
}

const CT_DOCSETTING& CT_HEAD::get_DOCSETTING() const
{
    if (m_DOCSETTING)
    {
        return *m_DOCSETTING;
    }
    return CT_DOCSETTING::default_instance();
}

bool CT_HEAD::has_MAPPINGTABLE() const
{
    return m_has_MAPPINGTABLE;
}

CT_MAPPINGTABLE* CT_HEAD::mutable_MAPPINGTABLE()
{
    m_has_MAPPINGTABLE = true;
    if (!m_MAPPINGTABLE)
    {
        m_MAPPINGTABLE = new CT_MAPPINGTABLE();
    }
    return m_MAPPINGTABLE;
}

const CT_MAPPINGTABLE& CT_HEAD::get_MAPPINGTABLE() const
{
    if (m_MAPPINGTABLE)
    {
        return *m_MAPPINGTABLE;
    }
    return CT_MAPPINGTABLE::default_instance();
}

void CT_HEAD::clear()
{
    m_has_SecCnt_attr = false;

    if (m_SecCnt_attr)
    {
        delete m_SecCnt_attr;
        m_SecCnt_attr = NULL;
    }


    m_has_DOCSUMMARY = false;

    if (m_DOCSUMMARY)
    {
        delete m_DOCSUMMARY;
        m_DOCSUMMARY = NULL;
    }


    m_has_DOCSETTING = false;

    if (m_DOCSETTING)
    {
        delete m_DOCSETTING;
        m_DOCSETTING = NULL;
    }


    m_has_MAPPINGTABLE = false;

    if (m_MAPPINGTABLE)
    {
        delete m_MAPPINGTABLE;
        m_MAPPINGTABLE = NULL;
    }

}

void CT_HEAD::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_SecCnt_attr)
    {
        m_SecCnt_attr->toXmlAttr("SecCnt", _outStream);
    }

    _outStream << ">";


    if (m_has_DOCSUMMARY)
    {
        m_DOCSUMMARY->toXmlElem("DOCSUMMARY", "", _outStream);
    }


    if (m_has_DOCSETTING)
    {
        m_DOCSETTING->toXmlElem("DOCSETTING", "", _outStream);
    }


    if (m_has_MAPPINGTABLE)
    {
        m_MAPPINGTABLE->toXmlElem("MAPPINGTABLE", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_HEAD& CT_HEAD::default_instance()
{
    if (!CT_HEAD::default_instance_)
    {
        CT_HEAD::default_instance_ = new CT_HEAD();
    }
    return *CT_HEAD::default_instance_;
}

bool CT_HEAD::has_SecCnt_attr() const
{
    return m_has_SecCnt_attr;
}

void CT_HEAD::set_SecCnt_attr(const ST_UnsignedDecimalNumber& _SecCnt_attr)
{
    m_has_SecCnt_attr = true;
    m_SecCnt_attr = new ST_UnsignedDecimalNumber(_SecCnt_attr);
}

const ST_UnsignedDecimalNumber& CT_HEAD::get_SecCnt_attr() const
{
    if (m_SecCnt_attr)
    {
        return *m_SecCnt_attr;
    }
    return ST_UnsignedDecimalNumber::default_instance();
}

CT_HEAD* CT_HEAD::default_instance_ = NULL;

// CT_SECTION
CT_SECTION::CT_SECTION()
    :m_has_Id_attr(false),
     m_Id_attr(NULL)
{
}
CT_SECTION::~CT_SECTION()
{
    clear();
}
CT_P* CT_SECTION::add_P()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_P* pNewChild = pChildGroup->mutable_P();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

void CT_SECTION::clear()
{
    m_has_Id_attr = false;

    if (m_Id_attr)
    {
        delete m_Id_attr;
        m_Id_attr = NULL;
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

void CT_SECTION::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_Id_attr)
    {
        m_Id_attr->toXmlAttr("Id", _outStream);
    }

    _outStream << ">";

    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_P())
            {
                (*iter)->get_P().toXmlElem("P", "", _outStream);
            }


        }
    }

    _outStream << "</" << _elemName << ">";
}

const CT_SECTION& CT_SECTION::default_instance()
{
    if (!CT_SECTION::default_instance_)
    {
        CT_SECTION::default_instance_ = new CT_SECTION();
    }
    return *CT_SECTION::default_instance_;
}

bool CT_SECTION::has_Id_attr() const
{
    return m_has_Id_attr;
}

void CT_SECTION::set_Id_attr(const ST_ID& _Id_attr)
{
    m_has_Id_attr = true;
    m_Id_attr = new ST_ID(_Id_attr);
}

const ST_ID& CT_SECTION::get_Id_attr() const
{
    if (m_Id_attr)
    {
        return *m_Id_attr;
    }
    return ST_ID::default_instance();
}


// CT_SECTION::ChildGroup_1
CT_SECTION::ChildGroup_1::ChildGroup_1()
    :m_has_P(false),
     m_P(NULL)
{
}
bool CT_SECTION::ChildGroup_1::has_P() const
{
    return m_has_P;
}

CT_P* CT_SECTION::ChildGroup_1::mutable_P()
{

    m_has_P = true;
    if (!m_P)
    {
        m_P = new CT_P();
    }
    return m_P;
}

const CT_P& CT_SECTION::ChildGroup_1::get_P() const
{
    if (m_P)
    {
        return *m_P;
    }
    return CT_P::default_instance();
}

CT_SECTION* CT_SECTION::default_instance_ = NULL;

// CT_BODY
CT_BODY::CT_BODY()

{
}
CT_BODY::~CT_BODY()
{
    clear();
}
CT_SECTION* CT_BODY::add_SECTION()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_SECTION* pNewChild = pChildGroup->mutable_SECTION();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

void CT_BODY::clear()
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

void CT_BODY::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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
            if ((*iter)->has_SECTION())
            {
                (*iter)->get_SECTION().toXmlElem("SECTION", "", _outStream);
            }


        }
    }

    _outStream << "</" << _elemName << ">";
}

const CT_BODY& CT_BODY::default_instance()
{
    if (!CT_BODY::default_instance_)
    {
        CT_BODY::default_instance_ = new CT_BODY();
    }
    return *CT_BODY::default_instance_;
}


// CT_BODY::ChildGroup_1
CT_BODY::ChildGroup_1::ChildGroup_1()
    :m_has_SECTION(false),
     m_SECTION(NULL)
{
}
bool CT_BODY::ChildGroup_1::has_SECTION() const
{
    return m_has_SECTION;
}

CT_SECTION* CT_BODY::ChildGroup_1::mutable_SECTION()
{

    m_has_SECTION = true;
    if (!m_SECTION)
    {
        m_SECTION = new CT_SECTION();
    }
    return m_SECTION;
}

const CT_SECTION& CT_BODY::ChildGroup_1::get_SECTION() const
{
    if (m_SECTION)
    {
        return *m_SECTION;
    }
    return CT_SECTION::default_instance();
}

CT_BODY* CT_BODY::default_instance_ = NULL;

// CT_SCRIPTCODE
CT_SCRIPTCODE::CT_SCRIPTCODE()
    :m_has_SCRIPTHEADER(false),
     m_SCRIPTHEADER(NULL),
     m_has_SCRIPTSOURCE(false),
     m_SCRIPTSOURCE(NULL),
     m_has_Type_attr(false),
     m_Type_attr(NULL),
     m_has_Version_attr(false),
     m_Version_attr(NULL)
{
}
CT_SCRIPTCODE::~CT_SCRIPTCODE()
{
    clear();
}
bool CT_SCRIPTCODE::has_SCRIPTHEADER() const
{
    return m_has_SCRIPTHEADER;
}

ST_String* CT_SCRIPTCODE::mutable_SCRIPTHEADER()
{
    m_has_SCRIPTHEADER = true;
    if (!m_SCRIPTHEADER)
    {
        m_SCRIPTHEADER = new ST_String();
    }
    return m_SCRIPTHEADER;
}

const ST_String& CT_SCRIPTCODE::get_SCRIPTHEADER() const
{
    if (m_SCRIPTHEADER)
    {
        return *m_SCRIPTHEADER;
    }
    return ST_String::default_instance();
}

bool CT_SCRIPTCODE::has_SCRIPTSOURCE() const
{
    return m_has_SCRIPTSOURCE;
}

ST_String* CT_SCRIPTCODE::mutable_SCRIPTSOURCE()
{
    m_has_SCRIPTSOURCE = true;
    if (!m_SCRIPTSOURCE)
    {
        m_SCRIPTSOURCE = new ST_String();
    }
    return m_SCRIPTSOURCE;
}

const ST_String& CT_SCRIPTCODE::get_SCRIPTSOURCE() const
{
    if (m_SCRIPTSOURCE)
    {
        return *m_SCRIPTSOURCE;
    }
    return ST_String::default_instance();
}

void CT_SCRIPTCODE::clear()
{
    m_has_Type_attr = false;

    if (m_Type_attr)
    {
        delete m_Type_attr;
        m_Type_attr = NULL;
    }


    m_has_Version_attr = false;

    if (m_Version_attr)
    {
        delete m_Version_attr;
        m_Version_attr = NULL;
    }


    m_has_SCRIPTHEADER = false;

    if (m_SCRIPTHEADER)
    {
        delete m_SCRIPTHEADER;
        m_SCRIPTHEADER = NULL;
    }


    m_has_SCRIPTSOURCE = false;

    if (m_SCRIPTSOURCE)
    {
        delete m_SCRIPTSOURCE;
        m_SCRIPTSOURCE = NULL;
    }

}

void CT_SCRIPTCODE::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_Type_attr)
    {
        m_Type_attr->toXmlAttr("Type", _outStream);
    }



    if (m_has_Version_attr)
    {
        m_Version_attr->toXmlAttr("Version", _outStream);
    }

    _outStream << ">";


    if (m_has_SCRIPTHEADER)
    {
        _outStream << "<SCRIPTHEADER>" << m_SCRIPTHEADER->toString() << "</SCRIPTHEADER>";
    }


    if (m_has_SCRIPTSOURCE)
    {
        _outStream << "<SCRIPTSOURCE>" << m_SCRIPTSOURCE->toString() << "</SCRIPTSOURCE>";
    }

    _outStream << "</" << _elemName << ">";
}

const CT_SCRIPTCODE& CT_SCRIPTCODE::default_instance()
{
    if (!CT_SCRIPTCODE::default_instance_)
    {
        CT_SCRIPTCODE::default_instance_ = new CT_SCRIPTCODE();
    }
    return *CT_SCRIPTCODE::default_instance_;
}

bool CT_SCRIPTCODE::has_Type_attr() const
{
    return m_has_Type_attr;
}

void CT_SCRIPTCODE::set_Type_attr(const ST_String& _Type_attr)
{
    m_has_Type_attr = true;
    m_Type_attr = new ST_String(_Type_attr);
}

const ST_String& CT_SCRIPTCODE::get_Type_attr() const
{
    if (m_Type_attr)
    {
        return *m_Type_attr;
    }
    return ST_String::default_instance();
}

bool CT_SCRIPTCODE::has_Version_attr() const
{
    return m_has_Version_attr;
}

void CT_SCRIPTCODE::set_Version_attr(const ST_String& _Version_attr)
{
    m_has_Version_attr = true;
    m_Version_attr = new ST_String(_Version_attr);
}

const ST_String& CT_SCRIPTCODE::get_Version_attr() const
{
    if (m_Version_attr)
    {
        return *m_Version_attr;
    }
    return ST_String::default_instance();
}

CT_SCRIPTCODE* CT_SCRIPTCODE::default_instance_ = NULL;

// CT_TAIL
CT_TAIL::CT_TAIL()

{
}
CT_TAIL::~CT_TAIL()
{
    clear();
}
CT_SCRIPTCODE* CT_TAIL::add_SCRIPTCODE()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_SCRIPTCODE* pNewChild = pChildGroup->mutable_SCRIPTCODE();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

void CT_TAIL::clear()
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

void CT_TAIL::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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
            if ((*iter)->has_SCRIPTCODE())
            {
                (*iter)->get_SCRIPTCODE().toXmlElem("SCRIPTCODE", "", _outStream);
            }


        }
    }

    _outStream << "</" << _elemName << ">";
}

const CT_TAIL& CT_TAIL::default_instance()
{
    if (!CT_TAIL::default_instance_)
    {
        CT_TAIL::default_instance_ = new CT_TAIL();
    }
    return *CT_TAIL::default_instance_;
}


// CT_TAIL::ChildGroup_1
CT_TAIL::ChildGroup_1::ChildGroup_1()
    :m_has_SCRIPTCODE(false),
     m_SCRIPTCODE(NULL)
{
}
bool CT_TAIL::ChildGroup_1::has_SCRIPTCODE() const
{
    return m_has_SCRIPTCODE;
}

CT_SCRIPTCODE* CT_TAIL::ChildGroup_1::mutable_SCRIPTCODE()
{

    m_has_SCRIPTCODE = true;
    if (!m_SCRIPTCODE)
    {
        m_SCRIPTCODE = new CT_SCRIPTCODE();
    }
    return m_SCRIPTCODE;
}

const CT_SCRIPTCODE& CT_TAIL::ChildGroup_1::get_SCRIPTCODE() const
{
    if (m_SCRIPTCODE)
    {
        return *m_SCRIPTCODE;
    }
    return CT_SCRIPTCODE::default_instance();
}

CT_TAIL* CT_TAIL::default_instance_ = NULL;

// CT_HWPML
CT_HWPML::CT_HWPML()
    :m_has_Style_attr(false),
     m_Style_attr(NULL),
     m_has_SubVersion_attr(false),
     m_SubVersion_attr(NULL),
     m_has_Version_attr(false),
     m_Version_attr(NULL)
{
}
CT_HWPML::~CT_HWPML()
{
    clear();
}
CT_HEAD* CT_HWPML::add_HEAD()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_HEAD* pNewChild = pChildGroup->mutable_HEAD();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

CT_BODY* CT_HWPML::add_BODY()
{
    ChildGroup_2 *pChildGroup = new ChildGroup_2();
    CT_BODY* pNewChild = pChildGroup->mutable_BODY();
    m_childGroupList_2.push_back(pChildGroup);
    return pNewChild;
}

CT_TAIL* CT_HWPML::add_TAIL()
{
    ChildGroup_3 *pChildGroup = new ChildGroup_3();
    CT_TAIL* pNewChild = pChildGroup->mutable_TAIL();
    m_childGroupList_3.push_back(pChildGroup);
    return pNewChild;
}

void CT_HWPML::clear()
{
    m_has_Style_attr = false;

    if (m_Style_attr)
    {
        delete m_Style_attr;
        m_Style_attr = NULL;
    }


    m_has_SubVersion_attr = false;

    if (m_SubVersion_attr)
    {
        delete m_SubVersion_attr;
        m_SubVersion_attr = NULL;
    }


    m_has_Version_attr = false;

    if (m_Version_attr)
    {
        delete m_Version_attr;
        m_Version_attr = NULL;
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
}

void CT_HWPML::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_Style_attr)
    {
        m_Style_attr->toXmlAttr("Style", _outStream);
    }



    if (m_has_SubVersion_attr)
    {
        m_SubVersion_attr->toXmlAttr("SubVersion", _outStream);
    }



    if (m_has_Version_attr)
    {
        m_Version_attr->toXmlAttr("Version", _outStream);
    }

    _outStream << ">";

    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_HEAD())
            {
                (*iter)->get_HEAD().toXmlElem("HEAD", "", _outStream);
            }


        }
    }

    {
        vector<ChildGroup_2*>::const_iterator iter;
        for (iter = m_childGroupList_2.begin(); iter != m_childGroupList_2.end(); ++iter)
        {
            if ((*iter)->has_BODY())
            {
                (*iter)->get_BODY().toXmlElem("BODY", "", _outStream);
            }


        }
    }

    {
        vector<ChildGroup_3*>::const_iterator iter;
        for (iter = m_childGroupList_3.begin(); iter != m_childGroupList_3.end(); ++iter)
        {
            if ((*iter)->has_TAIL())
            {
                (*iter)->get_TAIL().toXmlElem("TAIL", "", _outStream);
            }


        }
    }

    _outStream << "</" << _elemName << ">";
}

const CT_HWPML& CT_HWPML::default_instance()
{
    if (!CT_HWPML::default_instance_)
    {
        CT_HWPML::default_instance_ = new CT_HWPML();
    }
    return *CT_HWPML::default_instance_;
}

bool CT_HWPML::has_Style_attr() const
{
    return m_has_Style_attr;
}

void CT_HWPML::set_Style_attr(const ST_HWPML_STYLE& _Style_attr)
{
    m_has_Style_attr = true;
    m_Style_attr = new ST_HWPML_STYLE(_Style_attr);
}

const ST_HWPML_STYLE& CT_HWPML::get_Style_attr() const
{
    if (m_Style_attr)
    {
        return *m_Style_attr;
    }
    return ST_HWPML_STYLE::default_instance();
}

bool CT_HWPML::has_SubVersion_attr() const
{
    return m_has_SubVersion_attr;
}

void CT_HWPML::set_SubVersion_attr(const ST_String& _SubVersion_attr)
{
    m_has_SubVersion_attr = true;
    m_SubVersion_attr = new ST_String(_SubVersion_attr);
}

const ST_String& CT_HWPML::get_SubVersion_attr() const
{
    if (m_SubVersion_attr)
    {
        return *m_SubVersion_attr;
    }
    return ST_String::default_instance();
}

bool CT_HWPML::has_Version_attr() const
{
    return m_has_Version_attr;
}

void CT_HWPML::set_Version_attr(const ST_String& _Version_attr)
{
    m_has_Version_attr = true;
    m_Version_attr = new ST_String(_Version_attr);
}

const ST_String& CT_HWPML::get_Version_attr() const
{
    if (m_Version_attr)
    {
        return *m_Version_attr;
    }
    return ST_String::default_instance();
}


// CT_HWPML::ChildGroup_1
CT_HWPML::ChildGroup_1::ChildGroup_1()
    :m_has_HEAD(false),
     m_HEAD(NULL)
{
}
bool CT_HWPML::ChildGroup_1::has_HEAD() const
{
    return m_has_HEAD;
}

CT_HEAD* CT_HWPML::ChildGroup_1::mutable_HEAD()
{

    m_has_HEAD = true;
    if (!m_HEAD)
    {
        m_HEAD = new CT_HEAD();
    }
    return m_HEAD;
}

const CT_HEAD& CT_HWPML::ChildGroup_1::get_HEAD() const
{
    if (m_HEAD)
    {
        return *m_HEAD;
    }
    return CT_HEAD::default_instance();
}


// CT_HWPML::ChildGroup_2
CT_HWPML::ChildGroup_2::ChildGroup_2()
    :m_has_BODY(false),
     m_BODY(NULL)
{
}
bool CT_HWPML::ChildGroup_2::has_BODY() const
{
    return m_has_BODY;
}

CT_BODY* CT_HWPML::ChildGroup_2::mutable_BODY()
{

    m_has_BODY = true;
    if (!m_BODY)
    {
        m_BODY = new CT_BODY();
    }
    return m_BODY;
}

const CT_BODY& CT_HWPML::ChildGroup_2::get_BODY() const
{
    if (m_BODY)
    {
        return *m_BODY;
    }
    return CT_BODY::default_instance();
}


// CT_HWPML::ChildGroup_3
CT_HWPML::ChildGroup_3::ChildGroup_3()
    :m_has_TAIL(false),
     m_TAIL(NULL)
{
}
bool CT_HWPML::ChildGroup_3::has_TAIL() const
{
    return m_has_TAIL;
}

CT_TAIL* CT_HWPML::ChildGroup_3::mutable_TAIL()
{

    m_has_TAIL = true;
    if (!m_TAIL)
    {
        m_TAIL = new CT_TAIL();
    }
    return m_TAIL;
}

const CT_TAIL& CT_HWPML::ChildGroup_3::get_TAIL() const
{
    if (m_TAIL)
    {
        return *m_TAIL;
    }
    return CT_TAIL::default_instance();
}

CT_HWPML* CT_HWPML::default_instance_ = NULL;

// HWPML_element
HWPML_element::HWPML_element()
    :m_has_Style_attr(false),
     m_Style_attr(NULL),
     m_has_SubVersion_attr(false),
     m_SubVersion_attr(NULL),
     m_has_Version_attr(false),
     m_Version_attr(NULL)
{
}
HWPML_element::~HWPML_element()
{
    clear();
}
CT_HEAD* HWPML_element::add_HEAD()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_HEAD* pNewChild = pChildGroup->mutable_HEAD();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

CT_BODY* HWPML_element::add_BODY()
{
    ChildGroup_2 *pChildGroup = new ChildGroup_2();
    CT_BODY* pNewChild = pChildGroup->mutable_BODY();
    m_childGroupList_2.push_back(pChildGroup);
    return pNewChild;
}

CT_TAIL* HWPML_element::add_TAIL()
{
    ChildGroup_3 *pChildGroup = new ChildGroup_3();
    CT_TAIL* pNewChild = pChildGroup->mutable_TAIL();
    m_childGroupList_3.push_back(pChildGroup);
    return pNewChild;
}

void HWPML_element::clear()
{
    m_has_Style_attr = false;

    if (m_Style_attr)
    {
        delete m_Style_attr;
        m_Style_attr = NULL;
    }


    m_has_SubVersion_attr = false;

    if (m_SubVersion_attr)
    {
        delete m_SubVersion_attr;
        m_SubVersion_attr = NULL;
    }


    m_has_Version_attr = false;

    if (m_Version_attr)
    {
        delete m_Version_attr;
        m_Version_attr = NULL;
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
}

void HWPML_element::toXml(std::ostream& _outStream) const
{
    _outStream << "<HWPML";

    _outStream << " " << "xmlns=\"http://www.haansoft.com/HWPML\"";
    _outStream << " " << "xmlns:msdata=\"urn:schemas-microsoft-com:xml-msdata\"";


    if (m_has_Style_attr)
    {
        m_Style_attr->toXmlAttr("Style", _outStream);
    }



    if (m_has_SubVersion_attr)
    {
        m_SubVersion_attr->toXmlAttr("SubVersion", _outStream);
    }



    if (m_has_Version_attr)
    {
        m_Version_attr->toXmlAttr("Version", _outStream);
    }

    _outStream << ">";

    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_HEAD())
            {
                (*iter)->get_HEAD().toXmlElem("HEAD", "", _outStream);
            }


        }
    }

    {
        vector<ChildGroup_2*>::const_iterator iter;
        for (iter = m_childGroupList_2.begin(); iter != m_childGroupList_2.end(); ++iter)
        {
            if ((*iter)->has_BODY())
            {
                (*iter)->get_BODY().toXmlElem("BODY", "", _outStream);
            }


        }
    }

    {
        vector<ChildGroup_3*>::const_iterator iter;
        for (iter = m_childGroupList_3.begin(); iter != m_childGroupList_3.end(); ++iter)
        {
            if ((*iter)->has_TAIL())
            {
                (*iter)->get_TAIL().toXmlElem("TAIL", "", _outStream);
            }


        }
    }

    _outStream << "</HWPML>";
}

const HWPML_element& HWPML_element::default_instance()
{
    if (!HWPML_element::default_instance_)
    {
        HWPML_element::default_instance_ = new HWPML_element();
    }
    return *HWPML_element::default_instance_;
}

bool HWPML_element::has_Style_attr() const
{
    return m_has_Style_attr;
}

void HWPML_element::set_Style_attr(const ST_HWPML_STYLE& _Style_attr)
{
    m_has_Style_attr = true;
    m_Style_attr = new ST_HWPML_STYLE(_Style_attr);
}

const ST_HWPML_STYLE& HWPML_element::get_Style_attr() const
{
    if (m_Style_attr)
    {
        return *m_Style_attr;
    }
    return ST_HWPML_STYLE::default_instance();
}

bool HWPML_element::has_SubVersion_attr() const
{
    return m_has_SubVersion_attr;
}

void HWPML_element::set_SubVersion_attr(const ST_String& _SubVersion_attr)
{
    m_has_SubVersion_attr = true;
    m_SubVersion_attr = new ST_String(_SubVersion_attr);
}

const ST_String& HWPML_element::get_SubVersion_attr() const
{
    if (m_SubVersion_attr)
    {
        return *m_SubVersion_attr;
    }
    return ST_String::default_instance();
}

bool HWPML_element::has_Version_attr() const
{
    return m_has_Version_attr;
}

void HWPML_element::set_Version_attr(const ST_String& _Version_attr)
{
    m_has_Version_attr = true;
    m_Version_attr = new ST_String(_Version_attr);
}

const ST_String& HWPML_element::get_Version_attr() const
{
    if (m_Version_attr)
    {
        return *m_Version_attr;
    }
    return ST_String::default_instance();
}


// HWPML_element::ChildGroup_1
HWPML_element::ChildGroup_1::ChildGroup_1()
    :m_has_HEAD(false),
     m_HEAD(NULL)
{
}
bool HWPML_element::ChildGroup_1::has_HEAD() const
{
    return m_has_HEAD;
}

CT_HEAD* HWPML_element::ChildGroup_1::mutable_HEAD()
{

    m_has_HEAD = true;
    if (!m_HEAD)
    {
        m_HEAD = new CT_HEAD();
    }
    return m_HEAD;
}

const CT_HEAD& HWPML_element::ChildGroup_1::get_HEAD() const
{
    if (m_HEAD)
    {
        return *m_HEAD;
    }
    return CT_HEAD::default_instance();
}


// HWPML_element::ChildGroup_2
HWPML_element::ChildGroup_2::ChildGroup_2()
    :m_has_BODY(false),
     m_BODY(NULL)
{
}
bool HWPML_element::ChildGroup_2::has_BODY() const
{
    return m_has_BODY;
}

CT_BODY* HWPML_element::ChildGroup_2::mutable_BODY()
{

    m_has_BODY = true;
    if (!m_BODY)
    {
        m_BODY = new CT_BODY();
    }
    return m_BODY;
}

const CT_BODY& HWPML_element::ChildGroup_2::get_BODY() const
{
    if (m_BODY)
    {
        return *m_BODY;
    }
    return CT_BODY::default_instance();
}


// HWPML_element::ChildGroup_3
HWPML_element::ChildGroup_3::ChildGroup_3()
    :m_has_TAIL(false),
     m_TAIL(NULL)
{
}
bool HWPML_element::ChildGroup_3::has_TAIL() const
{
    return m_has_TAIL;
}

CT_TAIL* HWPML_element::ChildGroup_3::mutable_TAIL()
{

    m_has_TAIL = true;
    if (!m_TAIL)
    {
        m_TAIL = new CT_TAIL();
    }
    return m_TAIL;
}

const CT_TAIL& HWPML_element::ChildGroup_3::get_TAIL() const
{
    if (m_TAIL)
    {
        return *m_TAIL;
    }
    return CT_TAIL::default_instance();
}

HWPML_element* HWPML_element::default_instance_ = NULL;
}