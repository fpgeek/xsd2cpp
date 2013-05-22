#include "shared-commonSimpleTypes_xsd.h"
#include <stdlib.h>
#include <sstream>
#include <algorithm>
#include <functional>
#include <assert.h>
namespace ns_s {
using namespace std;

// Element

// Attribute

// ST_Lang
ST_Lang::ST_Lang()
    :m_has_string(false),
     m_string("")
{
}
ST_Lang::ST_Lang(const XSD::string_& _string)
    :m_has_string(true)
{

    set_string(_string);
}
ST_Lang::~ST_Lang()
{
    clear();
}
bool ST_Lang::has_string() const
{
    return m_has_string;
}

void ST_Lang::set_string(const XSD::string_& _string)
{
    m_has_string = true;
    m_string = _string;
}

const XSD::string_& ST_Lang::get_string() const
{
    return m_string;
}

void ST_Lang::clear()
{
    m_has_string = false;
    m_string.clear();;
}

void ST_Lang::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_string)
    {
        _outStream << " " << _attrName << "=\"" << m_string << "\"";;
    }
}

const ST_Lang& ST_Lang::default_instance()
{
    if (!ST_Lang::default_instance_)
    {
        ST_Lang::default_instance_ = new ST_Lang();
    }
    return *ST_Lang::default_instance_;
}

std::string ST_Lang::toString() const
{
    std::stringstream strStream;
    strStream << get_string();
    return strStream.str();
}

ST_Lang* ST_Lang::default_instance_ = NULL;

// ST_HexColorRGB
ST_HexColorRGB::ST_HexColorRGB()
    :m_has_hexBinary(false),
     m_hexBinary("")
{
}
ST_HexColorRGB::ST_HexColorRGB(const XSD::hexBinary_& _hexBinary)
    :m_has_hexBinary(true)
{

    set_hexBinary(_hexBinary);
}
ST_HexColorRGB::~ST_HexColorRGB()
{
    clear();
}
bool ST_HexColorRGB::has_hexBinary() const
{
    return m_has_hexBinary;
}

void ST_HexColorRGB::set_hexBinary(const XSD::hexBinary_& _hexBinary)
{   assert(_hexBinary.size() == 3);

    m_has_hexBinary = true;
    m_hexBinary = _hexBinary;
}

const XSD::hexBinary_& ST_HexColorRGB::get_hexBinary() const
{
    return m_hexBinary;
}

void ST_HexColorRGB::clear()
{
    m_has_hexBinary = false;
    m_hexBinary.clear();;
}

void ST_HexColorRGB::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_hexBinary)
    {
        _outStream << " " << _attrName << "=\"" << m_hexBinary << "\"";;
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
    strStream << get_hexBinary();
    return strStream.str();
}

ST_HexColorRGB* ST_HexColorRGB::default_instance_ = NULL;

// ST_Panose
ST_Panose::ST_Panose()
    :m_has_hexBinary(false),
     m_hexBinary("")
{
}
ST_Panose::ST_Panose(const XSD::hexBinary_& _hexBinary)
    :m_has_hexBinary(true)
{

    set_hexBinary(_hexBinary);
}
ST_Panose::~ST_Panose()
{
    clear();
}
bool ST_Panose::has_hexBinary() const
{
    return m_has_hexBinary;
}

void ST_Panose::set_hexBinary(const XSD::hexBinary_& _hexBinary)
{   assert(_hexBinary.size() == 10);

    m_has_hexBinary = true;
    m_hexBinary = _hexBinary;
}

const XSD::hexBinary_& ST_Panose::get_hexBinary() const
{
    return m_hexBinary;
}

void ST_Panose::clear()
{
    m_has_hexBinary = false;
    m_hexBinary.clear();;
}

void ST_Panose::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_hexBinary)
    {
        _outStream << " " << _attrName << "=\"" << m_hexBinary << "\"";;
    }
}

const ST_Panose& ST_Panose::default_instance()
{
    if (!ST_Panose::default_instance_)
    {
        ST_Panose::default_instance_ = new ST_Panose();
    }
    return *ST_Panose::default_instance_;
}

std::string ST_Panose::toString() const
{
    std::stringstream strStream;
    strStream << get_hexBinary();
    return strStream.str();
}

ST_Panose* ST_Panose::default_instance_ = NULL;

// ST_CalendarType
ST_CalendarType::ST_CalendarType()
    :m_has_type(false)
{
}
ST_CalendarType::ST_CalendarType(const ST_CalendarType::Type& _type)
    :m_has_type(true),
     m_type(_type)
{
}
ST_CalendarType::~ST_CalendarType()
{
    clear();
}
bool ST_CalendarType::has_type() const
{
    return m_has_type;
}

void ST_CalendarType::set_type(const ST_CalendarType::Type& _type)
{
    m_has_type = true;
    m_type = _type;
}

const ST_CalendarType::Type& ST_CalendarType::get_type() const
{
    return m_type;
}

std::string ST_CalendarType::toString() const
{
    return ST_CalendarType::TypeStrList[m_type];
}

void ST_CalendarType::clear()
{
    m_has_type = false;
}

void ST_CalendarType::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_type)
    {
        _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
}

const ST_CalendarType& ST_CalendarType::default_instance()
{
    if (!ST_CalendarType::default_instance_)
    {
        ST_CalendarType::default_instance_ = new ST_CalendarType();
    }
    return *ST_CalendarType::default_instance_;
}

const std::string ST_CalendarType::TypeStrList[] =
{
    "gregorian",
    "gregorianUs",
    "gregorianMeFrench",
    "gregorianArabic",
    "hijri",
    "hebrew",
    "taiwan",
    "japan",
    "thai",
    "korea",
    "saka",
    "gregorianXlitEnglish",
    "gregorianXlitFrench",
    "none"
};
ST_CalendarType* ST_CalendarType::default_instance_ = NULL;

// ST_AlgClass
ST_AlgClass::ST_AlgClass()
    :m_has_type(false)
{
}
ST_AlgClass::ST_AlgClass(const ST_AlgClass::Type& _type)
    :m_has_type(true),
     m_type(_type)
{
}
ST_AlgClass::~ST_AlgClass()
{
    clear();
}
bool ST_AlgClass::has_type() const
{
    return m_has_type;
}

void ST_AlgClass::set_type(const ST_AlgClass::Type& _type)
{
    m_has_type = true;
    m_type = _type;
}

const ST_AlgClass::Type& ST_AlgClass::get_type() const
{
    return m_type;
}

std::string ST_AlgClass::toString() const
{
    return ST_AlgClass::TypeStrList[m_type];
}

void ST_AlgClass::clear()
{
    m_has_type = false;
}

void ST_AlgClass::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_type)
    {
        _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
}

const ST_AlgClass& ST_AlgClass::default_instance()
{
    if (!ST_AlgClass::default_instance_)
    {
        ST_AlgClass::default_instance_ = new ST_AlgClass();
    }
    return *ST_AlgClass::default_instance_;
}

const std::string ST_AlgClass::TypeStrList[] =
{
    "hash",
    "custom"
};
ST_AlgClass* ST_AlgClass::default_instance_ = NULL;

// ST_CryptProv
ST_CryptProv::ST_CryptProv()
    :m_has_type(false)
{
}
ST_CryptProv::ST_CryptProv(const ST_CryptProv::Type& _type)
    :m_has_type(true),
     m_type(_type)
{
}
ST_CryptProv::~ST_CryptProv()
{
    clear();
}
bool ST_CryptProv::has_type() const
{
    return m_has_type;
}

void ST_CryptProv::set_type(const ST_CryptProv::Type& _type)
{
    m_has_type = true;
    m_type = _type;
}

const ST_CryptProv::Type& ST_CryptProv::get_type() const
{
    return m_type;
}

std::string ST_CryptProv::toString() const
{
    return ST_CryptProv::TypeStrList[m_type];
}

void ST_CryptProv::clear()
{
    m_has_type = false;
}

void ST_CryptProv::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_type)
    {
        _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
}

const ST_CryptProv& ST_CryptProv::default_instance()
{
    if (!ST_CryptProv::default_instance_)
    {
        ST_CryptProv::default_instance_ = new ST_CryptProv();
    }
    return *ST_CryptProv::default_instance_;
}

const std::string ST_CryptProv::TypeStrList[] =
{
    "rsaAES",
    "rsaFull",
    "custom"
};
ST_CryptProv* ST_CryptProv::default_instance_ = NULL;

// ST_AlgType
ST_AlgType::ST_AlgType()
    :m_has_type(false)
{
}
ST_AlgType::ST_AlgType(const ST_AlgType::Type& _type)
    :m_has_type(true),
     m_type(_type)
{
}
ST_AlgType::~ST_AlgType()
{
    clear();
}
bool ST_AlgType::has_type() const
{
    return m_has_type;
}

void ST_AlgType::set_type(const ST_AlgType::Type& _type)
{
    m_has_type = true;
    m_type = _type;
}

const ST_AlgType::Type& ST_AlgType::get_type() const
{
    return m_type;
}

std::string ST_AlgType::toString() const
{
    return ST_AlgType::TypeStrList[m_type];
}

void ST_AlgType::clear()
{
    m_has_type = false;
}

void ST_AlgType::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_type)
    {
        _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
}

const ST_AlgType& ST_AlgType::default_instance()
{
    if (!ST_AlgType::default_instance_)
    {
        ST_AlgType::default_instance_ = new ST_AlgType();
    }
    return *ST_AlgType::default_instance_;
}

const std::string ST_AlgType::TypeStrList[] =
{
    "typeAny",
    "custom"
};
ST_AlgType* ST_AlgType::default_instance_ = NULL;

// ST_ColorType
ST_ColorType::ST_ColorType()
    :m_has_string(false),
     m_string("")
{
}
ST_ColorType::ST_ColorType(const XSD::string_& _string)
    :m_has_string(true)
{

    set_string(_string);
}
ST_ColorType::~ST_ColorType()
{
    clear();
}
bool ST_ColorType::has_string() const
{
    return m_has_string;
}

void ST_ColorType::set_string(const XSD::string_& _string)
{
    m_has_string = true;
    m_string = _string;
}

const XSD::string_& ST_ColorType::get_string() const
{
    return m_string;
}

void ST_ColorType::clear()
{
    m_has_string = false;
    m_string.clear();;
}

void ST_ColorType::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_string)
    {
        _outStream << " " << _attrName << "=\"" << m_string << "\"";;
    }
}

const ST_ColorType& ST_ColorType::default_instance()
{
    if (!ST_ColorType::default_instance_)
    {
        ST_ColorType::default_instance_ = new ST_ColorType();
    }
    return *ST_ColorType::default_instance_;
}

std::string ST_ColorType::toString() const
{
    std::stringstream strStream;
    strStream << get_string();
    return strStream.str();
}

ST_ColorType* ST_ColorType::default_instance_ = NULL;

// ST_Guid
ST_Guid::ST_Guid()
    :m_has_token(false),
     m_token("")
{
}
ST_Guid::ST_Guid(const XSD::token_& _token)
    :m_has_token(true)
{

    set_token(_token);
}
ST_Guid::~ST_Guid()
{
    clear();
}
bool ST_Guid::has_token() const
{
    return m_has_token;
}

void ST_Guid::set_token(const XSD::token_& _token)
{
    m_has_token = true;
    m_token = _token;
}

const XSD::token_& ST_Guid::get_token() const
{
    return m_token;
}

void ST_Guid::clear()
{
    m_has_token = false;
    m_token.clear();;
}

void ST_Guid::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_token)
    {
        _outStream << " " << _attrName << "=\"" << m_token << "\"";;
    }
}

const ST_Guid& ST_Guid::default_instance()
{
    if (!ST_Guid::default_instance_)
    {
        ST_Guid::default_instance_ = new ST_Guid();
    }
    return *ST_Guid::default_instance_;
}

std::string ST_Guid::toString() const
{
    std::stringstream strStream;
    strStream << get_token();
    return strStream.str();
}

ST_Guid* ST_Guid::default_instance_ = NULL;

// ST_OnOff
ST_OnOff::ST_OnOff()
    :m_has_boolean(false),
     m_boolean(false),
     m_has_ST_OnOff1(false),
     m_ST_OnOff1(NULL)
{
}
ST_OnOff::ST_OnOff(const ST_OnOff& _ST_OnOff)

{

    m_has_boolean = _ST_OnOff.has_boolean();
    m_boolean = _ST_OnOff.get_boolean();


    m_has_ST_OnOff1 = _ST_OnOff.has_ST_OnOff1();
    if (_ST_OnOff.has_ST_OnOff1())
    {
        m_ST_OnOff1 = new ST_OnOff1(_ST_OnOff.get_ST_OnOff1());
    }
}
ST_OnOff::~ST_OnOff()
{
    clear();
}
bool ST_OnOff::has_boolean() const
{
    return m_has_boolean;
}

void ST_OnOff::set_boolean(const XSD::boolean_& _boolean)
{
    clear_ST_OnOff1();
    m_has_boolean = true;
    m_boolean = _boolean;
}

const XSD::boolean_& ST_OnOff::get_boolean() const
{
    return m_boolean;
}

void ST_OnOff::clear_boolean()
{
    m_has_boolean = false;
    m_boolean = false;
}

bool ST_OnOff::has_ST_OnOff1() const
{
    return m_has_ST_OnOff1;
}

ST_OnOff1* ST_OnOff::mutable_ST_OnOff1()
{
    clear_boolean();
    m_has_ST_OnOff1 = true;
    if (!m_ST_OnOff1)
    {
        m_ST_OnOff1 = new ST_OnOff1();
    }
    return m_ST_OnOff1;
}

const ST_OnOff1& ST_OnOff::get_ST_OnOff1() const
{
    if (m_ST_OnOff1)
    {
        return *m_ST_OnOff1;
    }
    return ST_OnOff1::default_instance();
}

void ST_OnOff::clear_ST_OnOff1()
{
    m_has_ST_OnOff1 = false;
    if (m_ST_OnOff1)
    {
        delete m_ST_OnOff1;
        m_ST_OnOff1 = NULL;
    }
}

std::string ST_OnOff::toString() const
{
    if (m_has_boolean)
    {
        return XSD::XMLBooleanStr(m_boolean);
    }

    if (m_has_ST_OnOff1)
    {
        return m_ST_OnOff1->toString();
    }

    return string();
}

void ST_OnOff::clear()
{   clear_boolean();
    clear_ST_OnOff1();
}

void ST_OnOff::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_boolean)
    {
        _outStream << " " << _attrName << "=\"" << XSD::XMLBooleanStr(m_boolean) << "\"";
        return;
    }

    if (m_has_ST_OnOff1)
    {
        m_ST_OnOff1->toXmlAttr(_attrName, _outStream);
        return;
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

ST_OnOff* ST_OnOff::default_instance_ = NULL;

// ST_OnOff1
ST_OnOff1::ST_OnOff1()
    :m_has_type(false)
{
}
ST_OnOff1::ST_OnOff1(const ST_OnOff1::Type& _type)
    :m_has_type(true),
     m_type(_type)
{
}
ST_OnOff1::~ST_OnOff1()
{
    clear();
}
bool ST_OnOff1::has_type() const
{
    return m_has_type;
}

void ST_OnOff1::set_type(const ST_OnOff1::Type& _type)
{
    m_has_type = true;
    m_type = _type;
}

const ST_OnOff1::Type& ST_OnOff1::get_type() const
{
    return m_type;
}

std::string ST_OnOff1::toString() const
{
    return ST_OnOff1::TypeStrList[m_type];
}

void ST_OnOff1::clear()
{
    m_has_type = false;
}

void ST_OnOff1::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_type)
    {
        _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
}

const ST_OnOff1& ST_OnOff1::default_instance()
{
    if (!ST_OnOff1::default_instance_)
    {
        ST_OnOff1::default_instance_ = new ST_OnOff1();
    }
    return *ST_OnOff1::default_instance_;
}

const std::string ST_OnOff1::TypeStrList[] =
{
    "on",
    "off"
};
ST_OnOff1* ST_OnOff1::default_instance_ = NULL;

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

// ST_XmlName
ST_XmlName::ST_XmlName()
    :m_has_NCName(false),
     m_NCName("")
{
}
ST_XmlName::ST_XmlName(const XSD::NCName_& _NCName)
    :m_has_NCName(true)
{

    set_NCName(_NCName);
}
ST_XmlName::~ST_XmlName()
{
    clear();
}
bool ST_XmlName::has_NCName() const
{
    return m_has_NCName;
}

void ST_XmlName::set_NCName(const XSD::NCName_& _NCName)
{   assert(1 <= _NCName.size());
    assert(_NCName.size() <= 255);

    m_has_NCName = true;
    m_NCName = _NCName;
}

const XSD::NCName_& ST_XmlName::get_NCName() const
{
    return m_NCName;
}

void ST_XmlName::clear()
{
    m_has_NCName = false;
    m_NCName.clear();;
}

void ST_XmlName::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_NCName)
    {
        _outStream << " " << _attrName << "=\"" << m_NCName << "\"";;
    }
}

const ST_XmlName& ST_XmlName::default_instance()
{
    if (!ST_XmlName::default_instance_)
    {
        ST_XmlName::default_instance_ = new ST_XmlName();
    }
    return *ST_XmlName::default_instance_;
}

std::string ST_XmlName::toString() const
{
    std::stringstream strStream;
    strStream << get_NCName();
    return strStream.str();
}

ST_XmlName* ST_XmlName::default_instance_ = NULL;

// ST_TrueFalse
ST_TrueFalse::ST_TrueFalse()
    :m_has_type(false)
{
}
ST_TrueFalse::ST_TrueFalse(const ST_TrueFalse::Type& _type)
    :m_has_type(true),
     m_type(_type)
{
}
ST_TrueFalse::~ST_TrueFalse()
{
    clear();
}
bool ST_TrueFalse::has_type() const
{
    return m_has_type;
}

void ST_TrueFalse::set_type(const ST_TrueFalse::Type& _type)
{
    m_has_type = true;
    m_type = _type;
}

const ST_TrueFalse::Type& ST_TrueFalse::get_type() const
{
    return m_type;
}

std::string ST_TrueFalse::toString() const
{
    return ST_TrueFalse::TypeStrList[m_type];
}

void ST_TrueFalse::clear()
{
    m_has_type = false;
}

void ST_TrueFalse::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_type)
    {
        _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
}

const ST_TrueFalse& ST_TrueFalse::default_instance()
{
    if (!ST_TrueFalse::default_instance_)
    {
        ST_TrueFalse::default_instance_ = new ST_TrueFalse();
    }
    return *ST_TrueFalse::default_instance_;
}

const std::string ST_TrueFalse::TypeStrList[] =
{
    "t",
    "f",
    "true",
    "false"
};
ST_TrueFalse* ST_TrueFalse::default_instance_ = NULL;

// ST_TrueFalseBlank
ST_TrueFalseBlank::ST_TrueFalseBlank()
    :m_has_type(false)
{
}
ST_TrueFalseBlank::ST_TrueFalseBlank(const ST_TrueFalseBlank::Type& _type)
    :m_has_type(true),
     m_type(_type)
{
}
ST_TrueFalseBlank::~ST_TrueFalseBlank()
{
    clear();
}
bool ST_TrueFalseBlank::has_type() const
{
    return m_has_type;
}

void ST_TrueFalseBlank::set_type(const ST_TrueFalseBlank::Type& _type)
{
    m_has_type = true;
    m_type = _type;
}

const ST_TrueFalseBlank::Type& ST_TrueFalseBlank::get_type() const
{
    return m_type;
}

std::string ST_TrueFalseBlank::toString() const
{
    return ST_TrueFalseBlank::TypeStrList[m_type];
}

void ST_TrueFalseBlank::clear()
{
    m_has_type = false;
}

void ST_TrueFalseBlank::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_type)
    {
        _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
}

const ST_TrueFalseBlank& ST_TrueFalseBlank::default_instance()
{
    if (!ST_TrueFalseBlank::default_instance_)
    {
        ST_TrueFalseBlank::default_instance_ = new ST_TrueFalseBlank();
    }
    return *ST_TrueFalseBlank::default_instance_;
}

const std::string ST_TrueFalseBlank::TypeStrList[] =
{
    "t",
    "f",
    "true",
    "false",
    "",
    "True",
    "False"
};
ST_TrueFalseBlank* ST_TrueFalseBlank::default_instance_ = NULL;

// ST_UnsignedDecimalNumber
ST_UnsignedDecimalNumber::ST_UnsignedDecimalNumber()
    :m_has_unsignedLong(false),
     m_unsignedLong(0)
{
}
ST_UnsignedDecimalNumber::ST_UnsignedDecimalNumber(const XSD::unsignedLong_& _unsignedLong)
    :m_has_unsignedLong(true)
{

    set_unsignedLong(_unsignedLong);
}
ST_UnsignedDecimalNumber::~ST_UnsignedDecimalNumber()
{
    clear();
}
bool ST_UnsignedDecimalNumber::has_unsignedLong() const
{
    return m_has_unsignedLong;
}

void ST_UnsignedDecimalNumber::set_unsignedLong(const XSD::unsignedLong_& _unsignedLong)
{
    m_has_unsignedLong = true;
    m_unsignedLong = _unsignedLong;
}

const XSD::unsignedLong_& ST_UnsignedDecimalNumber::get_unsignedLong() const
{
    return m_unsignedLong;
}

void ST_UnsignedDecimalNumber::clear()
{
    m_has_unsignedLong = false;
    m_unsignedLong = 0;;
}

void ST_UnsignedDecimalNumber::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_unsignedLong)
    {
        _outStream << " " << _attrName << "=\"" << m_unsignedLong << "\"";;
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
    strStream << get_unsignedLong();
    return strStream.str();
}

ST_UnsignedDecimalNumber* ST_UnsignedDecimalNumber::default_instance_ = NULL;

// ST_TwipsMeasure
ST_TwipsMeasure::ST_TwipsMeasure()
    :m_has_ST_UnsignedDecimalNumber(false),
     m_ST_UnsignedDecimalNumber(NULL),
     m_has_ST_PositiveUniversalMeasure(false),
     m_ST_PositiveUniversalMeasure(NULL)
{
}
ST_TwipsMeasure::ST_TwipsMeasure(const ST_TwipsMeasure& _ST_TwipsMeasure)

{

    m_has_ST_UnsignedDecimalNumber = _ST_TwipsMeasure.has_ST_UnsignedDecimalNumber();
    if (_ST_TwipsMeasure.has_ST_UnsignedDecimalNumber())
    {
        m_ST_UnsignedDecimalNumber = new ST_UnsignedDecimalNumber(_ST_TwipsMeasure.get_ST_UnsignedDecimalNumber());
    }


    m_has_ST_PositiveUniversalMeasure = _ST_TwipsMeasure.has_ST_PositiveUniversalMeasure();
    if (_ST_TwipsMeasure.has_ST_PositiveUniversalMeasure())
    {
        m_ST_PositiveUniversalMeasure = new ST_PositiveUniversalMeasure(_ST_TwipsMeasure.get_ST_PositiveUniversalMeasure());
    }
}
ST_TwipsMeasure::~ST_TwipsMeasure()
{
    clear();
}
bool ST_TwipsMeasure::has_ST_UnsignedDecimalNumber() const
{
    return m_has_ST_UnsignedDecimalNumber;
}

ST_UnsignedDecimalNumber* ST_TwipsMeasure::mutable_ST_UnsignedDecimalNumber()
{
    clear_ST_PositiveUniversalMeasure();
    m_has_ST_UnsignedDecimalNumber = true;
    if (!m_ST_UnsignedDecimalNumber)
    {
        m_ST_UnsignedDecimalNumber = new ST_UnsignedDecimalNumber();
    }
    return m_ST_UnsignedDecimalNumber;
}

const ST_UnsignedDecimalNumber& ST_TwipsMeasure::get_ST_UnsignedDecimalNumber() const
{
    if (m_ST_UnsignedDecimalNumber)
    {
        return *m_ST_UnsignedDecimalNumber;
    }
    return ST_UnsignedDecimalNumber::default_instance();
}

void ST_TwipsMeasure::clear_ST_UnsignedDecimalNumber()
{
    m_has_ST_UnsignedDecimalNumber = false;
    if (m_ST_UnsignedDecimalNumber)
    {
        delete m_ST_UnsignedDecimalNumber;
        m_ST_UnsignedDecimalNumber = NULL;
    }
}

bool ST_TwipsMeasure::has_ST_PositiveUniversalMeasure() const
{
    return m_has_ST_PositiveUniversalMeasure;
}

ST_PositiveUniversalMeasure* ST_TwipsMeasure::mutable_ST_PositiveUniversalMeasure()
{
    clear_ST_UnsignedDecimalNumber();
    m_has_ST_PositiveUniversalMeasure = true;
    if (!m_ST_PositiveUniversalMeasure)
    {
        m_ST_PositiveUniversalMeasure = new ST_PositiveUniversalMeasure();
    }
    return m_ST_PositiveUniversalMeasure;
}

const ST_PositiveUniversalMeasure& ST_TwipsMeasure::get_ST_PositiveUniversalMeasure() const
{
    if (m_ST_PositiveUniversalMeasure)
    {
        return *m_ST_PositiveUniversalMeasure;
    }
    return ST_PositiveUniversalMeasure::default_instance();
}

void ST_TwipsMeasure::clear_ST_PositiveUniversalMeasure()
{
    m_has_ST_PositiveUniversalMeasure = false;
    if (m_ST_PositiveUniversalMeasure)
    {
        delete m_ST_PositiveUniversalMeasure;
        m_ST_PositiveUniversalMeasure = NULL;
    }
}

std::string ST_TwipsMeasure::toString() const
{
    if (m_has_ST_UnsignedDecimalNumber)
    {
        return m_ST_UnsignedDecimalNumber->toString();
    }

    if (m_has_ST_PositiveUniversalMeasure)
    {
        return m_ST_PositiveUniversalMeasure->toString();
    }

    return string();
}

void ST_TwipsMeasure::clear()
{   clear_ST_UnsignedDecimalNumber();
    clear_ST_PositiveUniversalMeasure();
}

void ST_TwipsMeasure::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_ST_UnsignedDecimalNumber)
    {
        m_ST_UnsignedDecimalNumber->toXmlAttr(_attrName, _outStream);
        return;
    }

    if (m_has_ST_PositiveUniversalMeasure)
    {
        m_ST_PositiveUniversalMeasure->toXmlAttr(_attrName, _outStream);
        return;
    }
}

const ST_TwipsMeasure& ST_TwipsMeasure::default_instance()
{
    if (!ST_TwipsMeasure::default_instance_)
    {
        ST_TwipsMeasure::default_instance_ = new ST_TwipsMeasure();
    }
    return *ST_TwipsMeasure::default_instance_;
}

ST_TwipsMeasure* ST_TwipsMeasure::default_instance_ = NULL;

// ST_VerticalAlignRun
ST_VerticalAlignRun::ST_VerticalAlignRun()
    :m_has_type(false)
{
}
ST_VerticalAlignRun::ST_VerticalAlignRun(const ST_VerticalAlignRun::Type& _type)
    :m_has_type(true),
     m_type(_type)
{
}
ST_VerticalAlignRun::~ST_VerticalAlignRun()
{
    clear();
}
bool ST_VerticalAlignRun::has_type() const
{
    return m_has_type;
}

void ST_VerticalAlignRun::set_type(const ST_VerticalAlignRun::Type& _type)
{
    m_has_type = true;
    m_type = _type;
}

const ST_VerticalAlignRun::Type& ST_VerticalAlignRun::get_type() const
{
    return m_type;
}

std::string ST_VerticalAlignRun::toString() const
{
    return ST_VerticalAlignRun::TypeStrList[m_type];
}

void ST_VerticalAlignRun::clear()
{
    m_has_type = false;
}

void ST_VerticalAlignRun::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_type)
    {
        _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
}

const ST_VerticalAlignRun& ST_VerticalAlignRun::default_instance()
{
    if (!ST_VerticalAlignRun::default_instance_)
    {
        ST_VerticalAlignRun::default_instance_ = new ST_VerticalAlignRun();
    }
    return *ST_VerticalAlignRun::default_instance_;
}

const std::string ST_VerticalAlignRun::TypeStrList[] =
{
    "baseline",
    "superscript",
    "subscript"
};
ST_VerticalAlignRun* ST_VerticalAlignRun::default_instance_ = NULL;

// ST_Xstring
ST_Xstring::ST_Xstring()
    :m_has_string(false),
     m_string("")
{
}
ST_Xstring::ST_Xstring(const XSD::string_& _string)
    :m_has_string(true)
{

    set_string(_string);
}
ST_Xstring::~ST_Xstring()
{
    clear();
}
bool ST_Xstring::has_string() const
{
    return m_has_string;
}

void ST_Xstring::set_string(const XSD::string_& _string)
{
    m_has_string = true;
    m_string = _string;
}

const XSD::string_& ST_Xstring::get_string() const
{
    return m_string;
}

void ST_Xstring::clear()
{
    m_has_string = false;
    m_string.clear();;
}

void ST_Xstring::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_string)
    {
        _outStream << " " << _attrName << "=\"" << m_string << "\"";;
    }
}

const ST_Xstring& ST_Xstring::default_instance()
{
    if (!ST_Xstring::default_instance_)
    {
        ST_Xstring::default_instance_ = new ST_Xstring();
    }
    return *ST_Xstring::default_instance_;
}

std::string ST_Xstring::toString() const
{
    std::stringstream strStream;
    strStream << get_string();
    return strStream.str();
}

ST_Xstring* ST_Xstring::default_instance_ = NULL;

// ST_XAlign
ST_XAlign::ST_XAlign()
    :m_has_type(false)
{
}
ST_XAlign::ST_XAlign(const ST_XAlign::Type& _type)
    :m_has_type(true),
     m_type(_type)
{
}
ST_XAlign::~ST_XAlign()
{
    clear();
}
bool ST_XAlign::has_type() const
{
    return m_has_type;
}

void ST_XAlign::set_type(const ST_XAlign::Type& _type)
{
    m_has_type = true;
    m_type = _type;
}

const ST_XAlign::Type& ST_XAlign::get_type() const
{
    return m_type;
}

std::string ST_XAlign::toString() const
{
    return ST_XAlign::TypeStrList[m_type];
}

void ST_XAlign::clear()
{
    m_has_type = false;
}

void ST_XAlign::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_type)
    {
        _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
}

const ST_XAlign& ST_XAlign::default_instance()
{
    if (!ST_XAlign::default_instance_)
    {
        ST_XAlign::default_instance_ = new ST_XAlign();
    }
    return *ST_XAlign::default_instance_;
}

const std::string ST_XAlign::TypeStrList[] =
{
    "left",
    "center",
    "right",
    "inside",
    "outside"
};
ST_XAlign* ST_XAlign::default_instance_ = NULL;

// ST_YAlign
ST_YAlign::ST_YAlign()
    :m_has_type(false)
{
}
ST_YAlign::ST_YAlign(const ST_YAlign::Type& _type)
    :m_has_type(true),
     m_type(_type)
{
}
ST_YAlign::~ST_YAlign()
{
    clear();
}
bool ST_YAlign::has_type() const
{
    return m_has_type;
}

void ST_YAlign::set_type(const ST_YAlign::Type& _type)
{
    m_has_type = true;
    m_type = _type;
}

const ST_YAlign::Type& ST_YAlign::get_type() const
{
    return m_type;
}

std::string ST_YAlign::toString() const
{
    return ST_YAlign::TypeStrList[m_type];
}

void ST_YAlign::clear()
{
    m_has_type = false;
}

void ST_YAlign::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_type)
    {
        _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
}

const ST_YAlign& ST_YAlign::default_instance()
{
    if (!ST_YAlign::default_instance_)
    {
        ST_YAlign::default_instance_ = new ST_YAlign();
    }
    return *ST_YAlign::default_instance_;
}

const std::string ST_YAlign::TypeStrList[] =
{
    "inline",
    "top",
    "center",
    "bottom",
    "inside",
    "outside"
};
ST_YAlign* ST_YAlign::default_instance_ = NULL;

// ST_ConformanceClass
ST_ConformanceClass::ST_ConformanceClass()
    :m_has_type(false)
{
}
ST_ConformanceClass::ST_ConformanceClass(const ST_ConformanceClass::Type& _type)
    :m_has_type(true),
     m_type(_type)
{
}
ST_ConformanceClass::~ST_ConformanceClass()
{
    clear();
}
bool ST_ConformanceClass::has_type() const
{
    return m_has_type;
}

void ST_ConformanceClass::set_type(const ST_ConformanceClass::Type& _type)
{
    m_has_type = true;
    m_type = _type;
}

const ST_ConformanceClass::Type& ST_ConformanceClass::get_type() const
{
    return m_type;
}

std::string ST_ConformanceClass::toString() const
{
    return ST_ConformanceClass::TypeStrList[m_type];
}

void ST_ConformanceClass::clear()
{
    m_has_type = false;
}

void ST_ConformanceClass::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_type)
    {
        _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
}

const ST_ConformanceClass& ST_ConformanceClass::default_instance()
{
    if (!ST_ConformanceClass::default_instance_)
    {
        ST_ConformanceClass::default_instance_ = new ST_ConformanceClass();
    }
    return *ST_ConformanceClass::default_instance_;
}

const std::string ST_ConformanceClass::TypeStrList[] =
{
    "strict",
    "transitional"
};
ST_ConformanceClass* ST_ConformanceClass::default_instance_ = NULL;

// ST_UniversalMeasure
ST_UniversalMeasure::ST_UniversalMeasure()
    :m_has_string(false),
     m_string("")
{
}
ST_UniversalMeasure::ST_UniversalMeasure(const XSD::string_& _string)
    :m_has_string(true)
{

    set_string(_string);
}
ST_UniversalMeasure::~ST_UniversalMeasure()
{
    clear();
}
bool ST_UniversalMeasure::has_string() const
{
    return m_has_string;
}

void ST_UniversalMeasure::set_string(const XSD::string_& _string)
{
    m_has_string = true;
    m_string = _string;
}

const XSD::string_& ST_UniversalMeasure::get_string() const
{
    return m_string;
}

void ST_UniversalMeasure::clear()
{
    m_has_string = false;
    m_string.clear();;
}

void ST_UniversalMeasure::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_string)
    {
        _outStream << " " << _attrName << "=\"" << m_string << "\"";;
    }
}

const ST_UniversalMeasure& ST_UniversalMeasure::default_instance()
{
    if (!ST_UniversalMeasure::default_instance_)
    {
        ST_UniversalMeasure::default_instance_ = new ST_UniversalMeasure();
    }
    return *ST_UniversalMeasure::default_instance_;
}

std::string ST_UniversalMeasure::toString() const
{
    std::stringstream strStream;
    strStream << get_string();
    return strStream.str();
}

ST_UniversalMeasure* ST_UniversalMeasure::default_instance_ = NULL;

// ST_PositiveUniversalMeasure
ST_PositiveUniversalMeasure::ST_PositiveUniversalMeasure()

{
}
ST_PositiveUniversalMeasure::ST_PositiveUniversalMeasure(const ST_UniversalMeasure& _ST_UniversalMeasure)
    :ST_UniversalMeasure(_ST_UniversalMeasure)
{
}
ST_PositiveUniversalMeasure::~ST_PositiveUniversalMeasure()
{
    clear();
}
const ST_PositiveUniversalMeasure& ST_PositiveUniversalMeasure::default_instance()
{
    if (!ST_PositiveUniversalMeasure::default_instance_)
    {
        ST_PositiveUniversalMeasure::default_instance_ = new ST_PositiveUniversalMeasure();
    }
    return *ST_PositiveUniversalMeasure::default_instance_;
}

ST_PositiveUniversalMeasure* ST_PositiveUniversalMeasure::default_instance_ = NULL;

// ST_Percentage
ST_Percentage::ST_Percentage()
    :m_has_string(false),
     m_string("")
{
}
ST_Percentage::ST_Percentage(const XSD::string_& _string)
    :m_has_string(true)
{

    set_string(_string);
}
ST_Percentage::~ST_Percentage()
{
    clear();
}
bool ST_Percentage::has_string() const
{
    return m_has_string;
}

void ST_Percentage::set_string(const XSD::string_& _string)
{
    m_has_string = true;
    m_string = _string;
}

const XSD::string_& ST_Percentage::get_string() const
{
    return m_string;
}

void ST_Percentage::clear()
{
    m_has_string = false;
    m_string.clear();;
}

void ST_Percentage::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_string)
    {
        _outStream << " " << _attrName << "=\"" << m_string << "\"";;
    }
}

const ST_Percentage& ST_Percentage::default_instance()
{
    if (!ST_Percentage::default_instance_)
    {
        ST_Percentage::default_instance_ = new ST_Percentage();
    }
    return *ST_Percentage::default_instance_;
}

std::string ST_Percentage::toString() const
{
    std::stringstream strStream;
    strStream << get_string();
    return strStream.str();
}

ST_Percentage* ST_Percentage::default_instance_ = NULL;

// ST_FixedPercentage
ST_FixedPercentage::ST_FixedPercentage()

{
}
ST_FixedPercentage::ST_FixedPercentage(const ST_Percentage& _ST_Percentage)
    :ST_Percentage(_ST_Percentage)
{
}
ST_FixedPercentage::~ST_FixedPercentage()
{
    clear();
}
const ST_FixedPercentage& ST_FixedPercentage::default_instance()
{
    if (!ST_FixedPercentage::default_instance_)
    {
        ST_FixedPercentage::default_instance_ = new ST_FixedPercentage();
    }
    return *ST_FixedPercentage::default_instance_;
}

ST_FixedPercentage* ST_FixedPercentage::default_instance_ = NULL;

// ST_PositivePercentage
ST_PositivePercentage::ST_PositivePercentage()

{
}
ST_PositivePercentage::ST_PositivePercentage(const ST_Percentage& _ST_Percentage)
    :ST_Percentage(_ST_Percentage)
{
}
ST_PositivePercentage::~ST_PositivePercentage()
{
    clear();
}
const ST_PositivePercentage& ST_PositivePercentage::default_instance()
{
    if (!ST_PositivePercentage::default_instance_)
    {
        ST_PositivePercentage::default_instance_ = new ST_PositivePercentage();
    }
    return *ST_PositivePercentage::default_instance_;
}

ST_PositivePercentage* ST_PositivePercentage::default_instance_ = NULL;

// ST_PositiveFixedPercentage
ST_PositiveFixedPercentage::ST_PositiveFixedPercentage()

{
}
ST_PositiveFixedPercentage::ST_PositiveFixedPercentage(const ST_Percentage& _ST_Percentage)
    :ST_Percentage(_ST_Percentage)
{
}
ST_PositiveFixedPercentage::~ST_PositiveFixedPercentage()
{
    clear();
}
const ST_PositiveFixedPercentage& ST_PositiveFixedPercentage::default_instance()
{
    if (!ST_PositiveFixedPercentage::default_instance_)
    {
        ST_PositiveFixedPercentage::default_instance_ = new ST_PositiveFixedPercentage();
    }
    return *ST_PositiveFixedPercentage::default_instance_;
}

ST_PositiveFixedPercentage* ST_PositiveFixedPercentage::default_instance_ = NULL;
}