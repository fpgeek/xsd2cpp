#include "dml-chart_xsd.h"
#include <stdlib.h>
#include <sstream>
#include <algorithm>
#include <functional>
#include <assert.h>
#include "shared-relationshipReference_xsd.h"
#include "dml-main_xsd.h"
#include "dml-chartDrawing_xsd.h"
#include "shared-commonSimpleTypes_xsd.h"
namespace ns_c {
using namespace std;

// Element

// Attribute

// ST_LayoutTarget
ST_LayoutTarget::ST_LayoutTarget()
    :m_has_type(false)
{
}
ST_LayoutTarget::ST_LayoutTarget(const ST_LayoutTarget::Type& _type)
    :m_has_type(true),
     m_type(_type)
{
}
ST_LayoutTarget::~ST_LayoutTarget()
{
    clear();
}
bool ST_LayoutTarget::has_type() const
{
    return m_has_type;
}

void ST_LayoutTarget::set_type(const ST_LayoutTarget::Type& _type)
{
    m_has_type = true;
    m_type = _type;
}

const ST_LayoutTarget::Type& ST_LayoutTarget::get_type() const
{
    return m_type;
}

std::string ST_LayoutTarget::toString() const
{
    return ST_LayoutTarget::TypeStrList[m_type];
}

void ST_LayoutTarget::clear()
{
    m_has_type = false;
}

void ST_LayoutTarget::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_type)
    {
        _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
}

const ST_LayoutTarget& ST_LayoutTarget::default_instance()
{
    if (!ST_LayoutTarget::default_instance_)
    {
        ST_LayoutTarget::default_instance_ = new ST_LayoutTarget();
    }
    return *ST_LayoutTarget::default_instance_;
}

const std::string ST_LayoutTarget::TypeStrList[] =
{
    "inner",
    "outer"
};
ST_LayoutTarget* ST_LayoutTarget::default_instance_ = NULL;

// ST_LayoutMode
ST_LayoutMode::ST_LayoutMode()
    :m_has_type(false)
{
}
ST_LayoutMode::ST_LayoutMode(const ST_LayoutMode::Type& _type)
    :m_has_type(true),
     m_type(_type)
{
}
ST_LayoutMode::~ST_LayoutMode()
{
    clear();
}
bool ST_LayoutMode::has_type() const
{
    return m_has_type;
}

void ST_LayoutMode::set_type(const ST_LayoutMode::Type& _type)
{
    m_has_type = true;
    m_type = _type;
}

const ST_LayoutMode::Type& ST_LayoutMode::get_type() const
{
    return m_type;
}

std::string ST_LayoutMode::toString() const
{
    return ST_LayoutMode::TypeStrList[m_type];
}

void ST_LayoutMode::clear()
{
    m_has_type = false;
}

void ST_LayoutMode::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_type)
    {
        _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
}

const ST_LayoutMode& ST_LayoutMode::default_instance()
{
    if (!ST_LayoutMode::default_instance_)
    {
        ST_LayoutMode::default_instance_ = new ST_LayoutMode();
    }
    return *ST_LayoutMode::default_instance_;
}

const std::string ST_LayoutMode::TypeStrList[] =
{
    "edge",
    "factor"
};
ST_LayoutMode* ST_LayoutMode::default_instance_ = NULL;

// ST_RotX
ST_RotX::ST_RotX()
    :m_has_byte(false),
     m_byte(0)
{
}
ST_RotX::ST_RotX(const XSD::byte_& _byte)
    :m_has_byte(true)
{

    set_byte(_byte);
}
ST_RotX::~ST_RotX()
{
    clear();
}
bool ST_RotX::has_byte() const
{
    return m_has_byte;
}

void ST_RotX::set_byte(const XSD::byte_& _byte)
{   assert(-90 <= _byte);
    assert(_byte <= 90);

    m_has_byte = true;
    m_byte = _byte;
}

const XSD::byte_& ST_RotX::get_byte() const
{
    return m_byte;
}

void ST_RotX::clear()
{
    m_has_byte = false;
    m_byte = 0;;
}

void ST_RotX::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_byte)
    {
        _outStream << " " << _attrName << "=\"" << m_byte << "\"";;
    }
}

const ST_RotX& ST_RotX::default_instance()
{
    if (!ST_RotX::default_instance_)
    {
        ST_RotX::default_instance_ = new ST_RotX();
    }
    return *ST_RotX::default_instance_;
}

std::string ST_RotX::toString() const
{
    std::stringstream strStream;
    strStream << get_byte();
    return strStream.str();
}

ST_RotX* ST_RotX::default_instance_ = NULL;

// ST_HPercent
ST_HPercent::ST_HPercent()
    :m_has_ST_HPercentWithSymbol(false),
     m_ST_HPercentWithSymbol(NULL),
     m_has_ST_HPercentUShort(false),
     m_ST_HPercentUShort(NULL)
{
}
ST_HPercent::ST_HPercent(const ST_HPercent& _ST_HPercent)
    :m_has_ST_HPercentWithSymbol(false),
     m_ST_HPercentWithSymbol(NULL),
     m_has_ST_HPercentUShort(false),
     m_ST_HPercentUShort(NULL)
{

    m_has_ST_HPercentWithSymbol = _ST_HPercent.has_ST_HPercentWithSymbol();
    if (_ST_HPercent.has_ST_HPercentWithSymbol())
    {
        m_ST_HPercentWithSymbol = new ST_HPercentWithSymbol(_ST_HPercent.get_ST_HPercentWithSymbol());
    }


    m_has_ST_HPercentUShort = _ST_HPercent.has_ST_HPercentUShort();
    if (_ST_HPercent.has_ST_HPercentUShort())
    {
        m_ST_HPercentUShort = new ST_HPercentUShort(_ST_HPercent.get_ST_HPercentUShort());
    }
}
ST_HPercent::~ST_HPercent()
{
    clear();
}
bool ST_HPercent::has_ST_HPercentWithSymbol() const
{
    return m_has_ST_HPercentWithSymbol;
}

ST_HPercentWithSymbol* ST_HPercent::mutable_ST_HPercentWithSymbol()
{
    clear_ST_HPercentUShort();
    m_has_ST_HPercentWithSymbol = true;
    if (!m_ST_HPercentWithSymbol)
    {
        m_ST_HPercentWithSymbol = new ST_HPercentWithSymbol();
    }
    return m_ST_HPercentWithSymbol;
}

const ST_HPercentWithSymbol& ST_HPercent::get_ST_HPercentWithSymbol() const
{
    if (m_ST_HPercentWithSymbol)
    {
        return *m_ST_HPercentWithSymbol;
    }
    return ST_HPercentWithSymbol::default_instance();
}

void ST_HPercent::clear_ST_HPercentWithSymbol()
{
    m_has_ST_HPercentWithSymbol = false;
    if (m_ST_HPercentWithSymbol)
    {
        delete m_ST_HPercentWithSymbol;
        m_ST_HPercentWithSymbol = NULL;
    }
}

bool ST_HPercent::has_ST_HPercentUShort() const
{
    return m_has_ST_HPercentUShort;
}

ST_HPercentUShort* ST_HPercent::mutable_ST_HPercentUShort()
{
    clear_ST_HPercentWithSymbol();
    m_has_ST_HPercentUShort = true;
    if (!m_ST_HPercentUShort)
    {
        m_ST_HPercentUShort = new ST_HPercentUShort();
    }
    return m_ST_HPercentUShort;
}

const ST_HPercentUShort& ST_HPercent::get_ST_HPercentUShort() const
{
    if (m_ST_HPercentUShort)
    {
        return *m_ST_HPercentUShort;
    }
    return ST_HPercentUShort::default_instance();
}

void ST_HPercent::clear_ST_HPercentUShort()
{
    m_has_ST_HPercentUShort = false;
    if (m_ST_HPercentUShort)
    {
        delete m_ST_HPercentUShort;
        m_ST_HPercentUShort = NULL;
    }
}

std::string ST_HPercent::toString() const
{
    if (m_has_ST_HPercentWithSymbol)
    {
        return m_ST_HPercentWithSymbol->toString();
    }

    if (m_has_ST_HPercentUShort)
    {
        return m_ST_HPercentUShort->toString();
    }

    return string();
}

void ST_HPercent::clear()
{   clear_ST_HPercentWithSymbol();
    clear_ST_HPercentUShort();
}

void ST_HPercent::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_ST_HPercentWithSymbol)
    {
        m_ST_HPercentWithSymbol->toXmlAttr(_attrName, _outStream);
        return;
    }

    if (m_has_ST_HPercentUShort)
    {
        m_ST_HPercentUShort->toXmlAttr(_attrName, _outStream);
        return;
    }
}

const ST_HPercent& ST_HPercent::default_instance()
{
    if (!ST_HPercent::default_instance_)
    {
        ST_HPercent::default_instance_ = new ST_HPercent();
    }
    return *ST_HPercent::default_instance_;
}

ST_HPercent* ST_HPercent::default_instance_ = NULL;

// ST_HPercentWithSymbol
ST_HPercentWithSymbol::ST_HPercentWithSymbol()
    :m_has_string(false),
     m_string("")
{
}
ST_HPercentWithSymbol::ST_HPercentWithSymbol(const XSD::string_& _string)
    :m_has_string(true)
{

    set_string(_string);
}
ST_HPercentWithSymbol::~ST_HPercentWithSymbol()
{
    clear();
}
bool ST_HPercentWithSymbol::has_string() const
{
    return m_has_string;
}

void ST_HPercentWithSymbol::set_string(const XSD::string_& _string)
{
    m_has_string = true;
    m_string = _string;
}

const XSD::string_& ST_HPercentWithSymbol::get_string() const
{
    return m_string;
}

void ST_HPercentWithSymbol::clear()
{
    m_has_string = false;
    m_string.clear();;
}

void ST_HPercentWithSymbol::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_string)
    {
        _outStream << " " << _attrName << "=\"" << m_string << "\"";;
    }
}

const ST_HPercentWithSymbol& ST_HPercentWithSymbol::default_instance()
{
    if (!ST_HPercentWithSymbol::default_instance_)
    {
        ST_HPercentWithSymbol::default_instance_ = new ST_HPercentWithSymbol();
    }
    return *ST_HPercentWithSymbol::default_instance_;
}

std::string ST_HPercentWithSymbol::toString() const
{
    std::stringstream strStream;
    strStream << get_string();
    return strStream.str();
}

ST_HPercentWithSymbol* ST_HPercentWithSymbol::default_instance_ = NULL;

// ST_HPercentUShort
ST_HPercentUShort::ST_HPercentUShort()
    :m_has_unsignedShort(false),
     m_unsignedShort(0)
{
}
ST_HPercentUShort::ST_HPercentUShort(const XSD::unsignedShort_& _unsignedShort)
    :m_has_unsignedShort(true)
{

    set_unsignedShort(_unsignedShort);
}
ST_HPercentUShort::~ST_HPercentUShort()
{
    clear();
}
bool ST_HPercentUShort::has_unsignedShort() const
{
    return m_has_unsignedShort;
}

void ST_HPercentUShort::set_unsignedShort(const XSD::unsignedShort_& _unsignedShort)
{   assert(5 <= _unsignedShort);
    assert(_unsignedShort <= 500);

    m_has_unsignedShort = true;
    m_unsignedShort = _unsignedShort;
}

const XSD::unsignedShort_& ST_HPercentUShort::get_unsignedShort() const
{
    return m_unsignedShort;
}

void ST_HPercentUShort::clear()
{
    m_has_unsignedShort = false;
    m_unsignedShort = 0;;
}

void ST_HPercentUShort::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_unsignedShort)
    {
        _outStream << " " << _attrName << "=\"" << m_unsignedShort << "\"";;
    }
}

const ST_HPercentUShort& ST_HPercentUShort::default_instance()
{
    if (!ST_HPercentUShort::default_instance_)
    {
        ST_HPercentUShort::default_instance_ = new ST_HPercentUShort();
    }
    return *ST_HPercentUShort::default_instance_;
}

std::string ST_HPercentUShort::toString() const
{
    std::stringstream strStream;
    strStream << get_unsignedShort();
    return strStream.str();
}

ST_HPercentUShort* ST_HPercentUShort::default_instance_ = NULL;

// ST_RotY
ST_RotY::ST_RotY()
    :m_has_unsignedShort(false),
     m_unsignedShort(0)
{
}
ST_RotY::ST_RotY(const XSD::unsignedShort_& _unsignedShort)
    :m_has_unsignedShort(true)
{

    set_unsignedShort(_unsignedShort);
}
ST_RotY::~ST_RotY()
{
    clear();
}
bool ST_RotY::has_unsignedShort() const
{
    return m_has_unsignedShort;
}

void ST_RotY::set_unsignedShort(const XSD::unsignedShort_& _unsignedShort)
{   assert(0 <= _unsignedShort);
    assert(_unsignedShort <= 360);

    m_has_unsignedShort = true;
    m_unsignedShort = _unsignedShort;
}

const XSD::unsignedShort_& ST_RotY::get_unsignedShort() const
{
    return m_unsignedShort;
}

void ST_RotY::clear()
{
    m_has_unsignedShort = false;
    m_unsignedShort = 0;;
}

void ST_RotY::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_unsignedShort)
    {
        _outStream << " " << _attrName << "=\"" << m_unsignedShort << "\"";;
    }
}

const ST_RotY& ST_RotY::default_instance()
{
    if (!ST_RotY::default_instance_)
    {
        ST_RotY::default_instance_ = new ST_RotY();
    }
    return *ST_RotY::default_instance_;
}

std::string ST_RotY::toString() const
{
    std::stringstream strStream;
    strStream << get_unsignedShort();
    return strStream.str();
}

ST_RotY* ST_RotY::default_instance_ = NULL;

// ST_DepthPercent
ST_DepthPercent::ST_DepthPercent()
    :m_has_ST_DepthPercentWithSymbol(false),
     m_ST_DepthPercentWithSymbol(NULL),
     m_has_ST_DepthPercentUShort(false),
     m_ST_DepthPercentUShort(NULL)
{
}
ST_DepthPercent::ST_DepthPercent(const ST_DepthPercent& _ST_DepthPercent)
    :m_has_ST_DepthPercentWithSymbol(false),
     m_ST_DepthPercentWithSymbol(NULL),
     m_has_ST_DepthPercentUShort(false),
     m_ST_DepthPercentUShort(NULL)
{

    m_has_ST_DepthPercentWithSymbol = _ST_DepthPercent.has_ST_DepthPercentWithSymbol();
    if (_ST_DepthPercent.has_ST_DepthPercentWithSymbol())
    {
        m_ST_DepthPercentWithSymbol = new ST_DepthPercentWithSymbol(_ST_DepthPercent.get_ST_DepthPercentWithSymbol());
    }


    m_has_ST_DepthPercentUShort = _ST_DepthPercent.has_ST_DepthPercentUShort();
    if (_ST_DepthPercent.has_ST_DepthPercentUShort())
    {
        m_ST_DepthPercentUShort = new ST_DepthPercentUShort(_ST_DepthPercent.get_ST_DepthPercentUShort());
    }
}
ST_DepthPercent::~ST_DepthPercent()
{
    clear();
}
bool ST_DepthPercent::has_ST_DepthPercentWithSymbol() const
{
    return m_has_ST_DepthPercentWithSymbol;
}

ST_DepthPercentWithSymbol* ST_DepthPercent::mutable_ST_DepthPercentWithSymbol()
{
    clear_ST_DepthPercentUShort();
    m_has_ST_DepthPercentWithSymbol = true;
    if (!m_ST_DepthPercentWithSymbol)
    {
        m_ST_DepthPercentWithSymbol = new ST_DepthPercentWithSymbol();
    }
    return m_ST_DepthPercentWithSymbol;
}

const ST_DepthPercentWithSymbol& ST_DepthPercent::get_ST_DepthPercentWithSymbol() const
{
    if (m_ST_DepthPercentWithSymbol)
    {
        return *m_ST_DepthPercentWithSymbol;
    }
    return ST_DepthPercentWithSymbol::default_instance();
}

void ST_DepthPercent::clear_ST_DepthPercentWithSymbol()
{
    m_has_ST_DepthPercentWithSymbol = false;
    if (m_ST_DepthPercentWithSymbol)
    {
        delete m_ST_DepthPercentWithSymbol;
        m_ST_DepthPercentWithSymbol = NULL;
    }
}

bool ST_DepthPercent::has_ST_DepthPercentUShort() const
{
    return m_has_ST_DepthPercentUShort;
}

ST_DepthPercentUShort* ST_DepthPercent::mutable_ST_DepthPercentUShort()
{
    clear_ST_DepthPercentWithSymbol();
    m_has_ST_DepthPercentUShort = true;
    if (!m_ST_DepthPercentUShort)
    {
        m_ST_DepthPercentUShort = new ST_DepthPercentUShort();
    }
    return m_ST_DepthPercentUShort;
}

const ST_DepthPercentUShort& ST_DepthPercent::get_ST_DepthPercentUShort() const
{
    if (m_ST_DepthPercentUShort)
    {
        return *m_ST_DepthPercentUShort;
    }
    return ST_DepthPercentUShort::default_instance();
}

void ST_DepthPercent::clear_ST_DepthPercentUShort()
{
    m_has_ST_DepthPercentUShort = false;
    if (m_ST_DepthPercentUShort)
    {
        delete m_ST_DepthPercentUShort;
        m_ST_DepthPercentUShort = NULL;
    }
}

std::string ST_DepthPercent::toString() const
{
    if (m_has_ST_DepthPercentWithSymbol)
    {
        return m_ST_DepthPercentWithSymbol->toString();
    }

    if (m_has_ST_DepthPercentUShort)
    {
        return m_ST_DepthPercentUShort->toString();
    }

    return string();
}

void ST_DepthPercent::clear()
{   clear_ST_DepthPercentWithSymbol();
    clear_ST_DepthPercentUShort();
}

void ST_DepthPercent::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_ST_DepthPercentWithSymbol)
    {
        m_ST_DepthPercentWithSymbol->toXmlAttr(_attrName, _outStream);
        return;
    }

    if (m_has_ST_DepthPercentUShort)
    {
        m_ST_DepthPercentUShort->toXmlAttr(_attrName, _outStream);
        return;
    }
}

const ST_DepthPercent& ST_DepthPercent::default_instance()
{
    if (!ST_DepthPercent::default_instance_)
    {
        ST_DepthPercent::default_instance_ = new ST_DepthPercent();
    }
    return *ST_DepthPercent::default_instance_;
}

ST_DepthPercent* ST_DepthPercent::default_instance_ = NULL;

// ST_DepthPercentWithSymbol
ST_DepthPercentWithSymbol::ST_DepthPercentWithSymbol()
    :m_has_string(false),
     m_string("")
{
}
ST_DepthPercentWithSymbol::ST_DepthPercentWithSymbol(const XSD::string_& _string)
    :m_has_string(true)
{

    set_string(_string);
}
ST_DepthPercentWithSymbol::~ST_DepthPercentWithSymbol()
{
    clear();
}
bool ST_DepthPercentWithSymbol::has_string() const
{
    return m_has_string;
}

void ST_DepthPercentWithSymbol::set_string(const XSD::string_& _string)
{
    m_has_string = true;
    m_string = _string;
}

const XSD::string_& ST_DepthPercentWithSymbol::get_string() const
{
    return m_string;
}

void ST_DepthPercentWithSymbol::clear()
{
    m_has_string = false;
    m_string.clear();;
}

void ST_DepthPercentWithSymbol::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_string)
    {
        _outStream << " " << _attrName << "=\"" << m_string << "\"";;
    }
}

const ST_DepthPercentWithSymbol& ST_DepthPercentWithSymbol::default_instance()
{
    if (!ST_DepthPercentWithSymbol::default_instance_)
    {
        ST_DepthPercentWithSymbol::default_instance_ = new ST_DepthPercentWithSymbol();
    }
    return *ST_DepthPercentWithSymbol::default_instance_;
}

std::string ST_DepthPercentWithSymbol::toString() const
{
    std::stringstream strStream;
    strStream << get_string();
    return strStream.str();
}

ST_DepthPercentWithSymbol* ST_DepthPercentWithSymbol::default_instance_ = NULL;

// ST_DepthPercentUShort
ST_DepthPercentUShort::ST_DepthPercentUShort()
    :m_has_unsignedShort(false),
     m_unsignedShort(0)
{
}
ST_DepthPercentUShort::ST_DepthPercentUShort(const XSD::unsignedShort_& _unsignedShort)
    :m_has_unsignedShort(true)
{

    set_unsignedShort(_unsignedShort);
}
ST_DepthPercentUShort::~ST_DepthPercentUShort()
{
    clear();
}
bool ST_DepthPercentUShort::has_unsignedShort() const
{
    return m_has_unsignedShort;
}

void ST_DepthPercentUShort::set_unsignedShort(const XSD::unsignedShort_& _unsignedShort)
{   assert(20 <= _unsignedShort);
    assert(_unsignedShort <= 2000);

    m_has_unsignedShort = true;
    m_unsignedShort = _unsignedShort;
}

const XSD::unsignedShort_& ST_DepthPercentUShort::get_unsignedShort() const
{
    return m_unsignedShort;
}

void ST_DepthPercentUShort::clear()
{
    m_has_unsignedShort = false;
    m_unsignedShort = 0;;
}

void ST_DepthPercentUShort::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_unsignedShort)
    {
        _outStream << " " << _attrName << "=\"" << m_unsignedShort << "\"";;
    }
}

const ST_DepthPercentUShort& ST_DepthPercentUShort::default_instance()
{
    if (!ST_DepthPercentUShort::default_instance_)
    {
        ST_DepthPercentUShort::default_instance_ = new ST_DepthPercentUShort();
    }
    return *ST_DepthPercentUShort::default_instance_;
}

std::string ST_DepthPercentUShort::toString() const
{
    std::stringstream strStream;
    strStream << get_unsignedShort();
    return strStream.str();
}

ST_DepthPercentUShort* ST_DepthPercentUShort::default_instance_ = NULL;

// ST_Perspective
ST_Perspective::ST_Perspective()
    :m_has_unsignedByte(false),
     m_unsignedByte(0)
{
}
ST_Perspective::ST_Perspective(const XSD::unsignedByte_& _unsignedByte)
    :m_has_unsignedByte(true)
{

    set_unsignedByte(_unsignedByte);
}
ST_Perspective::~ST_Perspective()
{
    clear();
}
bool ST_Perspective::has_unsignedByte() const
{
    return m_has_unsignedByte;
}

void ST_Perspective::set_unsignedByte(const XSD::unsignedByte_& _unsignedByte)
{   assert(0 <= _unsignedByte);
    assert(_unsignedByte <= 240);

    m_has_unsignedByte = true;
    m_unsignedByte = _unsignedByte;
}

const XSD::unsignedByte_& ST_Perspective::get_unsignedByte() const
{
    return m_unsignedByte;
}

void ST_Perspective::clear()
{
    m_has_unsignedByte = false;
    m_unsignedByte = 0;;
}

void ST_Perspective::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_unsignedByte)
    {
        _outStream << " " << _attrName << "=\"" << m_unsignedByte << "\"";;
    }
}

const ST_Perspective& ST_Perspective::default_instance()
{
    if (!ST_Perspective::default_instance_)
    {
        ST_Perspective::default_instance_ = new ST_Perspective();
    }
    return *ST_Perspective::default_instance_;
}

std::string ST_Perspective::toString() const
{
    std::stringstream strStream;
    strStream << get_unsignedByte();
    return strStream.str();
}

ST_Perspective* ST_Perspective::default_instance_ = NULL;

// ST_Thickness
ST_Thickness::ST_Thickness()
    :m_has_ST_ThicknessPercent(false),
     m_ST_ThicknessPercent(NULL),
     m_has_unsignedInt(false),
     m_unsignedInt(0)
{
}
ST_Thickness::ST_Thickness(const ST_Thickness& _ST_Thickness)
    :m_has_ST_ThicknessPercent(false),
     m_ST_ThicknessPercent(NULL),
     m_has_unsignedInt(false),
     m_unsignedInt(0)
{

    m_has_ST_ThicknessPercent = _ST_Thickness.has_ST_ThicknessPercent();
    if (_ST_Thickness.has_ST_ThicknessPercent())
    {
        m_ST_ThicknessPercent = new ST_ThicknessPercent(_ST_Thickness.get_ST_ThicknessPercent());
    }


    m_has_unsignedInt = _ST_Thickness.has_unsignedInt();
    m_unsignedInt = _ST_Thickness.get_unsignedInt();
}
ST_Thickness::~ST_Thickness()
{
    clear();
}
bool ST_Thickness::has_ST_ThicknessPercent() const
{
    return m_has_ST_ThicknessPercent;
}

ST_ThicknessPercent* ST_Thickness::mutable_ST_ThicknessPercent()
{
    clear_unsignedInt();
    m_has_ST_ThicknessPercent = true;
    if (!m_ST_ThicknessPercent)
    {
        m_ST_ThicknessPercent = new ST_ThicknessPercent();
    }
    return m_ST_ThicknessPercent;
}

const ST_ThicknessPercent& ST_Thickness::get_ST_ThicknessPercent() const
{
    if (m_ST_ThicknessPercent)
    {
        return *m_ST_ThicknessPercent;
    }
    return ST_ThicknessPercent::default_instance();
}

void ST_Thickness::clear_ST_ThicknessPercent()
{
    m_has_ST_ThicknessPercent = false;
    if (m_ST_ThicknessPercent)
    {
        delete m_ST_ThicknessPercent;
        m_ST_ThicknessPercent = NULL;
    }
}

bool ST_Thickness::has_unsignedInt() const
{
    return m_has_unsignedInt;
}

void ST_Thickness::set_unsignedInt(const XSD::unsignedInt_& _unsignedInt)
{
    clear_ST_ThicknessPercent();
    m_has_unsignedInt = true;
    m_unsignedInt = _unsignedInt;
}

const XSD::unsignedInt_& ST_Thickness::get_unsignedInt() const
{
    return m_unsignedInt;
}

void ST_Thickness::clear_unsignedInt()
{
    m_has_unsignedInt = false;
    m_unsignedInt = 0;
}

std::string ST_Thickness::toString() const
{
    if (m_has_ST_ThicknessPercent)
    {
        return m_ST_ThicknessPercent->toString();
    }

    if (m_has_unsignedInt)
    {

        std::stringstream strStream;
        strStream << m_unsignedInt;
        return strStream.str();

    }

    return string();
}

void ST_Thickness::clear()
{   clear_ST_ThicknessPercent();
    clear_unsignedInt();
}

void ST_Thickness::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_ST_ThicknessPercent)
    {
        m_ST_ThicknessPercent->toXmlAttr(_attrName, _outStream);
        return;
    }

    if (m_has_unsignedInt)
    {
        _outStream << " " << _attrName << "=\"" << m_unsignedInt << "\"";
        return;
    }
}

const ST_Thickness& ST_Thickness::default_instance()
{
    if (!ST_Thickness::default_instance_)
    {
        ST_Thickness::default_instance_ = new ST_Thickness();
    }
    return *ST_Thickness::default_instance_;
}

ST_Thickness* ST_Thickness::default_instance_ = NULL;

// ST_ThicknessPercent
ST_ThicknessPercent::ST_ThicknessPercent()
    :m_has_string(false),
     m_string("")
{
}
ST_ThicknessPercent::ST_ThicknessPercent(const XSD::string_& _string)
    :m_has_string(true)
{

    set_string(_string);
}
ST_ThicknessPercent::~ST_ThicknessPercent()
{
    clear();
}
bool ST_ThicknessPercent::has_string() const
{
    return m_has_string;
}

void ST_ThicknessPercent::set_string(const XSD::string_& _string)
{
    m_has_string = true;
    m_string = _string;
}

const XSD::string_& ST_ThicknessPercent::get_string() const
{
    return m_string;
}

void ST_ThicknessPercent::clear()
{
    m_has_string = false;
    m_string.clear();;
}

void ST_ThicknessPercent::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_string)
    {
        _outStream << " " << _attrName << "=\"" << m_string << "\"";;
    }
}

const ST_ThicknessPercent& ST_ThicknessPercent::default_instance()
{
    if (!ST_ThicknessPercent::default_instance_)
    {
        ST_ThicknessPercent::default_instance_ = new ST_ThicknessPercent();
    }
    return *ST_ThicknessPercent::default_instance_;
}

std::string ST_ThicknessPercent::toString() const
{
    std::stringstream strStream;
    strStream << get_string();
    return strStream.str();
}

ST_ThicknessPercent* ST_ThicknessPercent::default_instance_ = NULL;

// ST_GapAmount
ST_GapAmount::ST_GapAmount()
    :m_has_ST_GapAmountPercent(false),
     m_ST_GapAmountPercent(NULL),
     m_has_ST_GapAmountUShort(false),
     m_ST_GapAmountUShort(NULL)
{
}
ST_GapAmount::ST_GapAmount(const ST_GapAmount& _ST_GapAmount)
    :m_has_ST_GapAmountPercent(false),
     m_ST_GapAmountPercent(NULL),
     m_has_ST_GapAmountUShort(false),
     m_ST_GapAmountUShort(NULL)
{

    m_has_ST_GapAmountPercent = _ST_GapAmount.has_ST_GapAmountPercent();
    if (_ST_GapAmount.has_ST_GapAmountPercent())
    {
        m_ST_GapAmountPercent = new ST_GapAmountPercent(_ST_GapAmount.get_ST_GapAmountPercent());
    }


    m_has_ST_GapAmountUShort = _ST_GapAmount.has_ST_GapAmountUShort();
    if (_ST_GapAmount.has_ST_GapAmountUShort())
    {
        m_ST_GapAmountUShort = new ST_GapAmountUShort(_ST_GapAmount.get_ST_GapAmountUShort());
    }
}
ST_GapAmount::~ST_GapAmount()
{
    clear();
}
bool ST_GapAmount::has_ST_GapAmountPercent() const
{
    return m_has_ST_GapAmountPercent;
}

ST_GapAmountPercent* ST_GapAmount::mutable_ST_GapAmountPercent()
{
    clear_ST_GapAmountUShort();
    m_has_ST_GapAmountPercent = true;
    if (!m_ST_GapAmountPercent)
    {
        m_ST_GapAmountPercent = new ST_GapAmountPercent();
    }
    return m_ST_GapAmountPercent;
}

const ST_GapAmountPercent& ST_GapAmount::get_ST_GapAmountPercent() const
{
    if (m_ST_GapAmountPercent)
    {
        return *m_ST_GapAmountPercent;
    }
    return ST_GapAmountPercent::default_instance();
}

void ST_GapAmount::clear_ST_GapAmountPercent()
{
    m_has_ST_GapAmountPercent = false;
    if (m_ST_GapAmountPercent)
    {
        delete m_ST_GapAmountPercent;
        m_ST_GapAmountPercent = NULL;
    }
}

bool ST_GapAmount::has_ST_GapAmountUShort() const
{
    return m_has_ST_GapAmountUShort;
}

ST_GapAmountUShort* ST_GapAmount::mutable_ST_GapAmountUShort()
{
    clear_ST_GapAmountPercent();
    m_has_ST_GapAmountUShort = true;
    if (!m_ST_GapAmountUShort)
    {
        m_ST_GapAmountUShort = new ST_GapAmountUShort();
    }
    return m_ST_GapAmountUShort;
}

const ST_GapAmountUShort& ST_GapAmount::get_ST_GapAmountUShort() const
{
    if (m_ST_GapAmountUShort)
    {
        return *m_ST_GapAmountUShort;
    }
    return ST_GapAmountUShort::default_instance();
}

void ST_GapAmount::clear_ST_GapAmountUShort()
{
    m_has_ST_GapAmountUShort = false;
    if (m_ST_GapAmountUShort)
    {
        delete m_ST_GapAmountUShort;
        m_ST_GapAmountUShort = NULL;
    }
}

std::string ST_GapAmount::toString() const
{
    if (m_has_ST_GapAmountPercent)
    {
        return m_ST_GapAmountPercent->toString();
    }

    if (m_has_ST_GapAmountUShort)
    {
        return m_ST_GapAmountUShort->toString();
    }

    return string();
}

void ST_GapAmount::clear()
{   clear_ST_GapAmountPercent();
    clear_ST_GapAmountUShort();
}

void ST_GapAmount::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_ST_GapAmountPercent)
    {
        m_ST_GapAmountPercent->toXmlAttr(_attrName, _outStream);
        return;
    }

    if (m_has_ST_GapAmountUShort)
    {
        m_ST_GapAmountUShort->toXmlAttr(_attrName, _outStream);
        return;
    }
}

const ST_GapAmount& ST_GapAmount::default_instance()
{
    if (!ST_GapAmount::default_instance_)
    {
        ST_GapAmount::default_instance_ = new ST_GapAmount();
    }
    return *ST_GapAmount::default_instance_;
}

ST_GapAmount* ST_GapAmount::default_instance_ = NULL;

// ST_GapAmountPercent
ST_GapAmountPercent::ST_GapAmountPercent()
    :m_has_string(false),
     m_string("")
{
}
ST_GapAmountPercent::ST_GapAmountPercent(const XSD::string_& _string)
    :m_has_string(true)
{

    set_string(_string);
}
ST_GapAmountPercent::~ST_GapAmountPercent()
{
    clear();
}
bool ST_GapAmountPercent::has_string() const
{
    return m_has_string;
}

void ST_GapAmountPercent::set_string(const XSD::string_& _string)
{
    m_has_string = true;
    m_string = _string;
}

const XSD::string_& ST_GapAmountPercent::get_string() const
{
    return m_string;
}

void ST_GapAmountPercent::clear()
{
    m_has_string = false;
    m_string.clear();;
}

void ST_GapAmountPercent::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_string)
    {
        _outStream << " " << _attrName << "=\"" << m_string << "\"";;
    }
}

const ST_GapAmountPercent& ST_GapAmountPercent::default_instance()
{
    if (!ST_GapAmountPercent::default_instance_)
    {
        ST_GapAmountPercent::default_instance_ = new ST_GapAmountPercent();
    }
    return *ST_GapAmountPercent::default_instance_;
}

std::string ST_GapAmountPercent::toString() const
{
    std::stringstream strStream;
    strStream << get_string();
    return strStream.str();
}

ST_GapAmountPercent* ST_GapAmountPercent::default_instance_ = NULL;

// ST_GapAmountUShort
ST_GapAmountUShort::ST_GapAmountUShort()
    :m_has_unsignedShort(false),
     m_unsignedShort(0)
{
}
ST_GapAmountUShort::ST_GapAmountUShort(const XSD::unsignedShort_& _unsignedShort)
    :m_has_unsignedShort(true)
{

    set_unsignedShort(_unsignedShort);
}
ST_GapAmountUShort::~ST_GapAmountUShort()
{
    clear();
}
bool ST_GapAmountUShort::has_unsignedShort() const
{
    return m_has_unsignedShort;
}

void ST_GapAmountUShort::set_unsignedShort(const XSD::unsignedShort_& _unsignedShort)
{   assert(0 <= _unsignedShort);
    assert(_unsignedShort <= 500);

    m_has_unsignedShort = true;
    m_unsignedShort = _unsignedShort;
}

const XSD::unsignedShort_& ST_GapAmountUShort::get_unsignedShort() const
{
    return m_unsignedShort;
}

void ST_GapAmountUShort::clear()
{
    m_has_unsignedShort = false;
    m_unsignedShort = 0;;
}

void ST_GapAmountUShort::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_unsignedShort)
    {
        _outStream << " " << _attrName << "=\"" << m_unsignedShort << "\"";;
    }
}

const ST_GapAmountUShort& ST_GapAmountUShort::default_instance()
{
    if (!ST_GapAmountUShort::default_instance_)
    {
        ST_GapAmountUShort::default_instance_ = new ST_GapAmountUShort();
    }
    return *ST_GapAmountUShort::default_instance_;
}

std::string ST_GapAmountUShort::toString() const
{
    std::stringstream strStream;
    strStream << get_unsignedShort();
    return strStream.str();
}

ST_GapAmountUShort* ST_GapAmountUShort::default_instance_ = NULL;

// ST_Overlap
ST_Overlap::ST_Overlap()
    :m_has_ST_OverlapPercent(false),
     m_ST_OverlapPercent(NULL),
     m_has_ST_OverlapByte(false),
     m_ST_OverlapByte(NULL)
{
}
ST_Overlap::ST_Overlap(const ST_Overlap& _ST_Overlap)
    :m_has_ST_OverlapPercent(false),
     m_ST_OverlapPercent(NULL),
     m_has_ST_OverlapByte(false),
     m_ST_OverlapByte(NULL)
{

    m_has_ST_OverlapPercent = _ST_Overlap.has_ST_OverlapPercent();
    if (_ST_Overlap.has_ST_OverlapPercent())
    {
        m_ST_OverlapPercent = new ST_OverlapPercent(_ST_Overlap.get_ST_OverlapPercent());
    }


    m_has_ST_OverlapByte = _ST_Overlap.has_ST_OverlapByte();
    if (_ST_Overlap.has_ST_OverlapByte())
    {
        m_ST_OverlapByte = new ST_OverlapByte(_ST_Overlap.get_ST_OverlapByte());
    }
}
ST_Overlap::~ST_Overlap()
{
    clear();
}
bool ST_Overlap::has_ST_OverlapPercent() const
{
    return m_has_ST_OverlapPercent;
}

ST_OverlapPercent* ST_Overlap::mutable_ST_OverlapPercent()
{
    clear_ST_OverlapByte();
    m_has_ST_OverlapPercent = true;
    if (!m_ST_OverlapPercent)
    {
        m_ST_OverlapPercent = new ST_OverlapPercent();
    }
    return m_ST_OverlapPercent;
}

const ST_OverlapPercent& ST_Overlap::get_ST_OverlapPercent() const
{
    if (m_ST_OverlapPercent)
    {
        return *m_ST_OverlapPercent;
    }
    return ST_OverlapPercent::default_instance();
}

void ST_Overlap::clear_ST_OverlapPercent()
{
    m_has_ST_OverlapPercent = false;
    if (m_ST_OverlapPercent)
    {
        delete m_ST_OverlapPercent;
        m_ST_OverlapPercent = NULL;
    }
}

bool ST_Overlap::has_ST_OverlapByte() const
{
    return m_has_ST_OverlapByte;
}

ST_OverlapByte* ST_Overlap::mutable_ST_OverlapByte()
{
    clear_ST_OverlapPercent();
    m_has_ST_OverlapByte = true;
    if (!m_ST_OverlapByte)
    {
        m_ST_OverlapByte = new ST_OverlapByte();
    }
    return m_ST_OverlapByte;
}

const ST_OverlapByte& ST_Overlap::get_ST_OverlapByte() const
{
    if (m_ST_OverlapByte)
    {
        return *m_ST_OverlapByte;
    }
    return ST_OverlapByte::default_instance();
}

void ST_Overlap::clear_ST_OverlapByte()
{
    m_has_ST_OverlapByte = false;
    if (m_ST_OverlapByte)
    {
        delete m_ST_OverlapByte;
        m_ST_OverlapByte = NULL;
    }
}

std::string ST_Overlap::toString() const
{
    if (m_has_ST_OverlapPercent)
    {
        return m_ST_OverlapPercent->toString();
    }

    if (m_has_ST_OverlapByte)
    {
        return m_ST_OverlapByte->toString();
    }

    return string();
}

void ST_Overlap::clear()
{   clear_ST_OverlapPercent();
    clear_ST_OverlapByte();
}

void ST_Overlap::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_ST_OverlapPercent)
    {
        m_ST_OverlapPercent->toXmlAttr(_attrName, _outStream);
        return;
    }

    if (m_has_ST_OverlapByte)
    {
        m_ST_OverlapByte->toXmlAttr(_attrName, _outStream);
        return;
    }
}

const ST_Overlap& ST_Overlap::default_instance()
{
    if (!ST_Overlap::default_instance_)
    {
        ST_Overlap::default_instance_ = new ST_Overlap();
    }
    return *ST_Overlap::default_instance_;
}

ST_Overlap* ST_Overlap::default_instance_ = NULL;

// ST_OverlapPercent
ST_OverlapPercent::ST_OverlapPercent()
    :m_has_string(false),
     m_string("")
{
}
ST_OverlapPercent::ST_OverlapPercent(const XSD::string_& _string)
    :m_has_string(true)
{

    set_string(_string);
}
ST_OverlapPercent::~ST_OverlapPercent()
{
    clear();
}
bool ST_OverlapPercent::has_string() const
{
    return m_has_string;
}

void ST_OverlapPercent::set_string(const XSD::string_& _string)
{
    m_has_string = true;
    m_string = _string;
}

const XSD::string_& ST_OverlapPercent::get_string() const
{
    return m_string;
}

void ST_OverlapPercent::clear()
{
    m_has_string = false;
    m_string.clear();;
}

void ST_OverlapPercent::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_string)
    {
        _outStream << " " << _attrName << "=\"" << m_string << "\"";;
    }
}

const ST_OverlapPercent& ST_OverlapPercent::default_instance()
{
    if (!ST_OverlapPercent::default_instance_)
    {
        ST_OverlapPercent::default_instance_ = new ST_OverlapPercent();
    }
    return *ST_OverlapPercent::default_instance_;
}

std::string ST_OverlapPercent::toString() const
{
    std::stringstream strStream;
    strStream << get_string();
    return strStream.str();
}

ST_OverlapPercent* ST_OverlapPercent::default_instance_ = NULL;

// ST_OverlapByte
ST_OverlapByte::ST_OverlapByte()
    :m_has_byte(false),
     m_byte(0)
{
}
ST_OverlapByte::ST_OverlapByte(const XSD::byte_& _byte)
    :m_has_byte(true)
{

    set_byte(_byte);
}
ST_OverlapByte::~ST_OverlapByte()
{
    clear();
}
bool ST_OverlapByte::has_byte() const
{
    return m_has_byte;
}

void ST_OverlapByte::set_byte(const XSD::byte_& _byte)
{   assert(-100 <= _byte);
    assert(_byte <= 100);

    m_has_byte = true;
    m_byte = _byte;
}

const XSD::byte_& ST_OverlapByte::get_byte() const
{
    return m_byte;
}

void ST_OverlapByte::clear()
{
    m_has_byte = false;
    m_byte = 0;;
}

void ST_OverlapByte::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_byte)
    {
        _outStream << " " << _attrName << "=\"" << m_byte << "\"";;
    }
}

const ST_OverlapByte& ST_OverlapByte::default_instance()
{
    if (!ST_OverlapByte::default_instance_)
    {
        ST_OverlapByte::default_instance_ = new ST_OverlapByte();
    }
    return *ST_OverlapByte::default_instance_;
}

std::string ST_OverlapByte::toString() const
{
    std::stringstream strStream;
    strStream << get_byte();
    return strStream.str();
}

ST_OverlapByte* ST_OverlapByte::default_instance_ = NULL;

// ST_BubbleScale
ST_BubbleScale::ST_BubbleScale()
    :m_has_ST_BubbleScalePercent(false),
     m_ST_BubbleScalePercent(NULL),
     m_has_ST_BubbleScaleUInt(false),
     m_ST_BubbleScaleUInt(NULL)
{
}
ST_BubbleScale::ST_BubbleScale(const ST_BubbleScale& _ST_BubbleScale)
    :m_has_ST_BubbleScalePercent(false),
     m_ST_BubbleScalePercent(NULL),
     m_has_ST_BubbleScaleUInt(false),
     m_ST_BubbleScaleUInt(NULL)
{

    m_has_ST_BubbleScalePercent = _ST_BubbleScale.has_ST_BubbleScalePercent();
    if (_ST_BubbleScale.has_ST_BubbleScalePercent())
    {
        m_ST_BubbleScalePercent = new ST_BubbleScalePercent(_ST_BubbleScale.get_ST_BubbleScalePercent());
    }


    m_has_ST_BubbleScaleUInt = _ST_BubbleScale.has_ST_BubbleScaleUInt();
    if (_ST_BubbleScale.has_ST_BubbleScaleUInt())
    {
        m_ST_BubbleScaleUInt = new ST_BubbleScaleUInt(_ST_BubbleScale.get_ST_BubbleScaleUInt());
    }
}
ST_BubbleScale::~ST_BubbleScale()
{
    clear();
}
bool ST_BubbleScale::has_ST_BubbleScalePercent() const
{
    return m_has_ST_BubbleScalePercent;
}

ST_BubbleScalePercent* ST_BubbleScale::mutable_ST_BubbleScalePercent()
{
    clear_ST_BubbleScaleUInt();
    m_has_ST_BubbleScalePercent = true;
    if (!m_ST_BubbleScalePercent)
    {
        m_ST_BubbleScalePercent = new ST_BubbleScalePercent();
    }
    return m_ST_BubbleScalePercent;
}

const ST_BubbleScalePercent& ST_BubbleScale::get_ST_BubbleScalePercent() const
{
    if (m_ST_BubbleScalePercent)
    {
        return *m_ST_BubbleScalePercent;
    }
    return ST_BubbleScalePercent::default_instance();
}

void ST_BubbleScale::clear_ST_BubbleScalePercent()
{
    m_has_ST_BubbleScalePercent = false;
    if (m_ST_BubbleScalePercent)
    {
        delete m_ST_BubbleScalePercent;
        m_ST_BubbleScalePercent = NULL;
    }
}

bool ST_BubbleScale::has_ST_BubbleScaleUInt() const
{
    return m_has_ST_BubbleScaleUInt;
}

ST_BubbleScaleUInt* ST_BubbleScale::mutable_ST_BubbleScaleUInt()
{
    clear_ST_BubbleScalePercent();
    m_has_ST_BubbleScaleUInt = true;
    if (!m_ST_BubbleScaleUInt)
    {
        m_ST_BubbleScaleUInt = new ST_BubbleScaleUInt();
    }
    return m_ST_BubbleScaleUInt;
}

const ST_BubbleScaleUInt& ST_BubbleScale::get_ST_BubbleScaleUInt() const
{
    if (m_ST_BubbleScaleUInt)
    {
        return *m_ST_BubbleScaleUInt;
    }
    return ST_BubbleScaleUInt::default_instance();
}

void ST_BubbleScale::clear_ST_BubbleScaleUInt()
{
    m_has_ST_BubbleScaleUInt = false;
    if (m_ST_BubbleScaleUInt)
    {
        delete m_ST_BubbleScaleUInt;
        m_ST_BubbleScaleUInt = NULL;
    }
}

std::string ST_BubbleScale::toString() const
{
    if (m_has_ST_BubbleScalePercent)
    {
        return m_ST_BubbleScalePercent->toString();
    }

    if (m_has_ST_BubbleScaleUInt)
    {
        return m_ST_BubbleScaleUInt->toString();
    }

    return string();
}

void ST_BubbleScale::clear()
{   clear_ST_BubbleScalePercent();
    clear_ST_BubbleScaleUInt();
}

void ST_BubbleScale::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_ST_BubbleScalePercent)
    {
        m_ST_BubbleScalePercent->toXmlAttr(_attrName, _outStream);
        return;
    }

    if (m_has_ST_BubbleScaleUInt)
    {
        m_ST_BubbleScaleUInt->toXmlAttr(_attrName, _outStream);
        return;
    }
}

const ST_BubbleScale& ST_BubbleScale::default_instance()
{
    if (!ST_BubbleScale::default_instance_)
    {
        ST_BubbleScale::default_instance_ = new ST_BubbleScale();
    }
    return *ST_BubbleScale::default_instance_;
}

ST_BubbleScale* ST_BubbleScale::default_instance_ = NULL;

// ST_BubbleScalePercent
ST_BubbleScalePercent::ST_BubbleScalePercent()
    :m_has_string(false),
     m_string("")
{
}
ST_BubbleScalePercent::ST_BubbleScalePercent(const XSD::string_& _string)
    :m_has_string(true)
{

    set_string(_string);
}
ST_BubbleScalePercent::~ST_BubbleScalePercent()
{
    clear();
}
bool ST_BubbleScalePercent::has_string() const
{
    return m_has_string;
}

void ST_BubbleScalePercent::set_string(const XSD::string_& _string)
{
    m_has_string = true;
    m_string = _string;
}

const XSD::string_& ST_BubbleScalePercent::get_string() const
{
    return m_string;
}

void ST_BubbleScalePercent::clear()
{
    m_has_string = false;
    m_string.clear();;
}

void ST_BubbleScalePercent::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_string)
    {
        _outStream << " " << _attrName << "=\"" << m_string << "\"";;
    }
}

const ST_BubbleScalePercent& ST_BubbleScalePercent::default_instance()
{
    if (!ST_BubbleScalePercent::default_instance_)
    {
        ST_BubbleScalePercent::default_instance_ = new ST_BubbleScalePercent();
    }
    return *ST_BubbleScalePercent::default_instance_;
}

std::string ST_BubbleScalePercent::toString() const
{
    std::stringstream strStream;
    strStream << get_string();
    return strStream.str();
}

ST_BubbleScalePercent* ST_BubbleScalePercent::default_instance_ = NULL;

// ST_BubbleScaleUInt
ST_BubbleScaleUInt::ST_BubbleScaleUInt()
    :m_has_unsignedInt(false),
     m_unsignedInt(0)
{
}
ST_BubbleScaleUInt::ST_BubbleScaleUInt(const XSD::unsignedInt_& _unsignedInt)
    :m_has_unsignedInt(true)
{

    set_unsignedInt(_unsignedInt);
}
ST_BubbleScaleUInt::~ST_BubbleScaleUInt()
{
    clear();
}
bool ST_BubbleScaleUInt::has_unsignedInt() const
{
    return m_has_unsignedInt;
}

void ST_BubbleScaleUInt::set_unsignedInt(const XSD::unsignedInt_& _unsignedInt)
{   assert(0 <= _unsignedInt);
    assert(_unsignedInt <= 300);

    m_has_unsignedInt = true;
    m_unsignedInt = _unsignedInt;
}

const XSD::unsignedInt_& ST_BubbleScaleUInt::get_unsignedInt() const
{
    return m_unsignedInt;
}

void ST_BubbleScaleUInt::clear()
{
    m_has_unsignedInt = false;
    m_unsignedInt = 0;;
}

void ST_BubbleScaleUInt::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_unsignedInt)
    {
        _outStream << " " << _attrName << "=\"" << m_unsignedInt << "\"";;
    }
}

const ST_BubbleScaleUInt& ST_BubbleScaleUInt::default_instance()
{
    if (!ST_BubbleScaleUInt::default_instance_)
    {
        ST_BubbleScaleUInt::default_instance_ = new ST_BubbleScaleUInt();
    }
    return *ST_BubbleScaleUInt::default_instance_;
}

std::string ST_BubbleScaleUInt::toString() const
{
    std::stringstream strStream;
    strStream << get_unsignedInt();
    return strStream.str();
}

ST_BubbleScaleUInt* ST_BubbleScaleUInt::default_instance_ = NULL;

// ST_SizeRepresents
ST_SizeRepresents::ST_SizeRepresents()
    :m_has_type(false)
{
}
ST_SizeRepresents::ST_SizeRepresents(const ST_SizeRepresents::Type& _type)
    :m_has_type(true),
     m_type(_type)
{
}
ST_SizeRepresents::~ST_SizeRepresents()
{
    clear();
}
bool ST_SizeRepresents::has_type() const
{
    return m_has_type;
}

void ST_SizeRepresents::set_type(const ST_SizeRepresents::Type& _type)
{
    m_has_type = true;
    m_type = _type;
}

const ST_SizeRepresents::Type& ST_SizeRepresents::get_type() const
{
    return m_type;
}

std::string ST_SizeRepresents::toString() const
{
    return ST_SizeRepresents::TypeStrList[m_type];
}

void ST_SizeRepresents::clear()
{
    m_has_type = false;
}

void ST_SizeRepresents::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_type)
    {
        _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
}

const ST_SizeRepresents& ST_SizeRepresents::default_instance()
{
    if (!ST_SizeRepresents::default_instance_)
    {
        ST_SizeRepresents::default_instance_ = new ST_SizeRepresents();
    }
    return *ST_SizeRepresents::default_instance_;
}

const std::string ST_SizeRepresents::TypeStrList[] =
{
    "area",
    "w"
};
ST_SizeRepresents* ST_SizeRepresents::default_instance_ = NULL;

// ST_FirstSliceAng
ST_FirstSliceAng::ST_FirstSliceAng()
    :m_has_unsignedShort(false),
     m_unsignedShort(0)
{
}
ST_FirstSliceAng::ST_FirstSliceAng(const XSD::unsignedShort_& _unsignedShort)
    :m_has_unsignedShort(true)
{

    set_unsignedShort(_unsignedShort);
}
ST_FirstSliceAng::~ST_FirstSliceAng()
{
    clear();
}
bool ST_FirstSliceAng::has_unsignedShort() const
{
    return m_has_unsignedShort;
}

void ST_FirstSliceAng::set_unsignedShort(const XSD::unsignedShort_& _unsignedShort)
{   assert(0 <= _unsignedShort);
    assert(_unsignedShort <= 360);

    m_has_unsignedShort = true;
    m_unsignedShort = _unsignedShort;
}

const XSD::unsignedShort_& ST_FirstSliceAng::get_unsignedShort() const
{
    return m_unsignedShort;
}

void ST_FirstSliceAng::clear()
{
    m_has_unsignedShort = false;
    m_unsignedShort = 0;;
}

void ST_FirstSliceAng::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_unsignedShort)
    {
        _outStream << " " << _attrName << "=\"" << m_unsignedShort << "\"";;
    }
}

const ST_FirstSliceAng& ST_FirstSliceAng::default_instance()
{
    if (!ST_FirstSliceAng::default_instance_)
    {
        ST_FirstSliceAng::default_instance_ = new ST_FirstSliceAng();
    }
    return *ST_FirstSliceAng::default_instance_;
}

std::string ST_FirstSliceAng::toString() const
{
    std::stringstream strStream;
    strStream << get_unsignedShort();
    return strStream.str();
}

ST_FirstSliceAng* ST_FirstSliceAng::default_instance_ = NULL;

// ST_HoleSize
ST_HoleSize::ST_HoleSize()
    :m_has_ST_HoleSizePercent(false),
     m_ST_HoleSizePercent(NULL),
     m_has_ST_HoleSizeUByte(false),
     m_ST_HoleSizeUByte(NULL)
{
}
ST_HoleSize::ST_HoleSize(const ST_HoleSize& _ST_HoleSize)
    :m_has_ST_HoleSizePercent(false),
     m_ST_HoleSizePercent(NULL),
     m_has_ST_HoleSizeUByte(false),
     m_ST_HoleSizeUByte(NULL)
{

    m_has_ST_HoleSizePercent = _ST_HoleSize.has_ST_HoleSizePercent();
    if (_ST_HoleSize.has_ST_HoleSizePercent())
    {
        m_ST_HoleSizePercent = new ST_HoleSizePercent(_ST_HoleSize.get_ST_HoleSizePercent());
    }


    m_has_ST_HoleSizeUByte = _ST_HoleSize.has_ST_HoleSizeUByte();
    if (_ST_HoleSize.has_ST_HoleSizeUByte())
    {
        m_ST_HoleSizeUByte = new ST_HoleSizeUByte(_ST_HoleSize.get_ST_HoleSizeUByte());
    }
}
ST_HoleSize::~ST_HoleSize()
{
    clear();
}
bool ST_HoleSize::has_ST_HoleSizePercent() const
{
    return m_has_ST_HoleSizePercent;
}

ST_HoleSizePercent* ST_HoleSize::mutable_ST_HoleSizePercent()
{
    clear_ST_HoleSizeUByte();
    m_has_ST_HoleSizePercent = true;
    if (!m_ST_HoleSizePercent)
    {
        m_ST_HoleSizePercent = new ST_HoleSizePercent();
    }
    return m_ST_HoleSizePercent;
}

const ST_HoleSizePercent& ST_HoleSize::get_ST_HoleSizePercent() const
{
    if (m_ST_HoleSizePercent)
    {
        return *m_ST_HoleSizePercent;
    }
    return ST_HoleSizePercent::default_instance();
}

void ST_HoleSize::clear_ST_HoleSizePercent()
{
    m_has_ST_HoleSizePercent = false;
    if (m_ST_HoleSizePercent)
    {
        delete m_ST_HoleSizePercent;
        m_ST_HoleSizePercent = NULL;
    }
}

bool ST_HoleSize::has_ST_HoleSizeUByte() const
{
    return m_has_ST_HoleSizeUByte;
}

ST_HoleSizeUByte* ST_HoleSize::mutable_ST_HoleSizeUByte()
{
    clear_ST_HoleSizePercent();
    m_has_ST_HoleSizeUByte = true;
    if (!m_ST_HoleSizeUByte)
    {
        m_ST_HoleSizeUByte = new ST_HoleSizeUByte();
    }
    return m_ST_HoleSizeUByte;
}

const ST_HoleSizeUByte& ST_HoleSize::get_ST_HoleSizeUByte() const
{
    if (m_ST_HoleSizeUByte)
    {
        return *m_ST_HoleSizeUByte;
    }
    return ST_HoleSizeUByte::default_instance();
}

void ST_HoleSize::clear_ST_HoleSizeUByte()
{
    m_has_ST_HoleSizeUByte = false;
    if (m_ST_HoleSizeUByte)
    {
        delete m_ST_HoleSizeUByte;
        m_ST_HoleSizeUByte = NULL;
    }
}

std::string ST_HoleSize::toString() const
{
    if (m_has_ST_HoleSizePercent)
    {
        return m_ST_HoleSizePercent->toString();
    }

    if (m_has_ST_HoleSizeUByte)
    {
        return m_ST_HoleSizeUByte->toString();
    }

    return string();
}

void ST_HoleSize::clear()
{   clear_ST_HoleSizePercent();
    clear_ST_HoleSizeUByte();
}

void ST_HoleSize::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_ST_HoleSizePercent)
    {
        m_ST_HoleSizePercent->toXmlAttr(_attrName, _outStream);
        return;
    }

    if (m_has_ST_HoleSizeUByte)
    {
        m_ST_HoleSizeUByte->toXmlAttr(_attrName, _outStream);
        return;
    }
}

const ST_HoleSize& ST_HoleSize::default_instance()
{
    if (!ST_HoleSize::default_instance_)
    {
        ST_HoleSize::default_instance_ = new ST_HoleSize();
    }
    return *ST_HoleSize::default_instance_;
}

ST_HoleSize* ST_HoleSize::default_instance_ = NULL;

// ST_HoleSizePercent
ST_HoleSizePercent::ST_HoleSizePercent()
    :m_has_string(false),
     m_string("")
{
}
ST_HoleSizePercent::ST_HoleSizePercent(const XSD::string_& _string)
    :m_has_string(true)
{

    set_string(_string);
}
ST_HoleSizePercent::~ST_HoleSizePercent()
{
    clear();
}
bool ST_HoleSizePercent::has_string() const
{
    return m_has_string;
}

void ST_HoleSizePercent::set_string(const XSD::string_& _string)
{
    m_has_string = true;
    m_string = _string;
}

const XSD::string_& ST_HoleSizePercent::get_string() const
{
    return m_string;
}

void ST_HoleSizePercent::clear()
{
    m_has_string = false;
    m_string.clear();;
}

void ST_HoleSizePercent::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_string)
    {
        _outStream << " " << _attrName << "=\"" << m_string << "\"";;
    }
}

const ST_HoleSizePercent& ST_HoleSizePercent::default_instance()
{
    if (!ST_HoleSizePercent::default_instance_)
    {
        ST_HoleSizePercent::default_instance_ = new ST_HoleSizePercent();
    }
    return *ST_HoleSizePercent::default_instance_;
}

std::string ST_HoleSizePercent::toString() const
{
    std::stringstream strStream;
    strStream << get_string();
    return strStream.str();
}

ST_HoleSizePercent* ST_HoleSizePercent::default_instance_ = NULL;

// ST_HoleSizeUByte
ST_HoleSizeUByte::ST_HoleSizeUByte()
    :m_has_unsignedByte(false),
     m_unsignedByte(0)
{
}
ST_HoleSizeUByte::ST_HoleSizeUByte(const XSD::unsignedByte_& _unsignedByte)
    :m_has_unsignedByte(true)
{

    set_unsignedByte(_unsignedByte);
}
ST_HoleSizeUByte::~ST_HoleSizeUByte()
{
    clear();
}
bool ST_HoleSizeUByte::has_unsignedByte() const
{
    return m_has_unsignedByte;
}

void ST_HoleSizeUByte::set_unsignedByte(const XSD::unsignedByte_& _unsignedByte)
{   assert(1 <= _unsignedByte);
    assert(_unsignedByte <= 90);

    m_has_unsignedByte = true;
    m_unsignedByte = _unsignedByte;
}

const XSD::unsignedByte_& ST_HoleSizeUByte::get_unsignedByte() const
{
    return m_unsignedByte;
}

void ST_HoleSizeUByte::clear()
{
    m_has_unsignedByte = false;
    m_unsignedByte = 0;;
}

void ST_HoleSizeUByte::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_unsignedByte)
    {
        _outStream << " " << _attrName << "=\"" << m_unsignedByte << "\"";;
    }
}

const ST_HoleSizeUByte& ST_HoleSizeUByte::default_instance()
{
    if (!ST_HoleSizeUByte::default_instance_)
    {
        ST_HoleSizeUByte::default_instance_ = new ST_HoleSizeUByte();
    }
    return *ST_HoleSizeUByte::default_instance_;
}

std::string ST_HoleSizeUByte::toString() const
{
    std::stringstream strStream;
    strStream << get_unsignedByte();
    return strStream.str();
}

ST_HoleSizeUByte* ST_HoleSizeUByte::default_instance_ = NULL;

// ST_SplitType
ST_SplitType::ST_SplitType()
    :m_has_type(false)
{
}
ST_SplitType::ST_SplitType(const ST_SplitType::Type& _type)
    :m_has_type(true),
     m_type(_type)
{
}
ST_SplitType::~ST_SplitType()
{
    clear();
}
bool ST_SplitType::has_type() const
{
    return m_has_type;
}

void ST_SplitType::set_type(const ST_SplitType::Type& _type)
{
    m_has_type = true;
    m_type = _type;
}

const ST_SplitType::Type& ST_SplitType::get_type() const
{
    return m_type;
}

std::string ST_SplitType::toString() const
{
    return ST_SplitType::TypeStrList[m_type];
}

void ST_SplitType::clear()
{
    m_has_type = false;
}

void ST_SplitType::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_type)
    {
        _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
}

const ST_SplitType& ST_SplitType::default_instance()
{
    if (!ST_SplitType::default_instance_)
    {
        ST_SplitType::default_instance_ = new ST_SplitType();
    }
    return *ST_SplitType::default_instance_;
}

const std::string ST_SplitType::TypeStrList[] =
{
    "auto",
    "cust",
    "percent",
    "pos",
    "val"
};
ST_SplitType* ST_SplitType::default_instance_ = NULL;

// ST_SecondPieSize
ST_SecondPieSize::ST_SecondPieSize()
    :m_has_ST_SecondPieSizePercent(false),
     m_ST_SecondPieSizePercent(NULL),
     m_has_ST_SecondPieSizeUShort(false),
     m_ST_SecondPieSizeUShort(NULL)
{
}
ST_SecondPieSize::ST_SecondPieSize(const ST_SecondPieSize& _ST_SecondPieSize)
    :m_has_ST_SecondPieSizePercent(false),
     m_ST_SecondPieSizePercent(NULL),
     m_has_ST_SecondPieSizeUShort(false),
     m_ST_SecondPieSizeUShort(NULL)
{

    m_has_ST_SecondPieSizePercent = _ST_SecondPieSize.has_ST_SecondPieSizePercent();
    if (_ST_SecondPieSize.has_ST_SecondPieSizePercent())
    {
        m_ST_SecondPieSizePercent = new ST_SecondPieSizePercent(_ST_SecondPieSize.get_ST_SecondPieSizePercent());
    }


    m_has_ST_SecondPieSizeUShort = _ST_SecondPieSize.has_ST_SecondPieSizeUShort();
    if (_ST_SecondPieSize.has_ST_SecondPieSizeUShort())
    {
        m_ST_SecondPieSizeUShort = new ST_SecondPieSizeUShort(_ST_SecondPieSize.get_ST_SecondPieSizeUShort());
    }
}
ST_SecondPieSize::~ST_SecondPieSize()
{
    clear();
}
bool ST_SecondPieSize::has_ST_SecondPieSizePercent() const
{
    return m_has_ST_SecondPieSizePercent;
}

ST_SecondPieSizePercent* ST_SecondPieSize::mutable_ST_SecondPieSizePercent()
{
    clear_ST_SecondPieSizeUShort();
    m_has_ST_SecondPieSizePercent = true;
    if (!m_ST_SecondPieSizePercent)
    {
        m_ST_SecondPieSizePercent = new ST_SecondPieSizePercent();
    }
    return m_ST_SecondPieSizePercent;
}

const ST_SecondPieSizePercent& ST_SecondPieSize::get_ST_SecondPieSizePercent() const
{
    if (m_ST_SecondPieSizePercent)
    {
        return *m_ST_SecondPieSizePercent;
    }
    return ST_SecondPieSizePercent::default_instance();
}

void ST_SecondPieSize::clear_ST_SecondPieSizePercent()
{
    m_has_ST_SecondPieSizePercent = false;
    if (m_ST_SecondPieSizePercent)
    {
        delete m_ST_SecondPieSizePercent;
        m_ST_SecondPieSizePercent = NULL;
    }
}

bool ST_SecondPieSize::has_ST_SecondPieSizeUShort() const
{
    return m_has_ST_SecondPieSizeUShort;
}

ST_SecondPieSizeUShort* ST_SecondPieSize::mutable_ST_SecondPieSizeUShort()
{
    clear_ST_SecondPieSizePercent();
    m_has_ST_SecondPieSizeUShort = true;
    if (!m_ST_SecondPieSizeUShort)
    {
        m_ST_SecondPieSizeUShort = new ST_SecondPieSizeUShort();
    }
    return m_ST_SecondPieSizeUShort;
}

const ST_SecondPieSizeUShort& ST_SecondPieSize::get_ST_SecondPieSizeUShort() const
{
    if (m_ST_SecondPieSizeUShort)
    {
        return *m_ST_SecondPieSizeUShort;
    }
    return ST_SecondPieSizeUShort::default_instance();
}

void ST_SecondPieSize::clear_ST_SecondPieSizeUShort()
{
    m_has_ST_SecondPieSizeUShort = false;
    if (m_ST_SecondPieSizeUShort)
    {
        delete m_ST_SecondPieSizeUShort;
        m_ST_SecondPieSizeUShort = NULL;
    }
}

std::string ST_SecondPieSize::toString() const
{
    if (m_has_ST_SecondPieSizePercent)
    {
        return m_ST_SecondPieSizePercent->toString();
    }

    if (m_has_ST_SecondPieSizeUShort)
    {
        return m_ST_SecondPieSizeUShort->toString();
    }

    return string();
}

void ST_SecondPieSize::clear()
{   clear_ST_SecondPieSizePercent();
    clear_ST_SecondPieSizeUShort();
}

void ST_SecondPieSize::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_ST_SecondPieSizePercent)
    {
        m_ST_SecondPieSizePercent->toXmlAttr(_attrName, _outStream);
        return;
    }

    if (m_has_ST_SecondPieSizeUShort)
    {
        m_ST_SecondPieSizeUShort->toXmlAttr(_attrName, _outStream);
        return;
    }
}

const ST_SecondPieSize& ST_SecondPieSize::default_instance()
{
    if (!ST_SecondPieSize::default_instance_)
    {
        ST_SecondPieSize::default_instance_ = new ST_SecondPieSize();
    }
    return *ST_SecondPieSize::default_instance_;
}

ST_SecondPieSize* ST_SecondPieSize::default_instance_ = NULL;

// ST_SecondPieSizePercent
ST_SecondPieSizePercent::ST_SecondPieSizePercent()
    :m_has_string(false),
     m_string("")
{
}
ST_SecondPieSizePercent::ST_SecondPieSizePercent(const XSD::string_& _string)
    :m_has_string(true)
{

    set_string(_string);
}
ST_SecondPieSizePercent::~ST_SecondPieSizePercent()
{
    clear();
}
bool ST_SecondPieSizePercent::has_string() const
{
    return m_has_string;
}

void ST_SecondPieSizePercent::set_string(const XSD::string_& _string)
{
    m_has_string = true;
    m_string = _string;
}

const XSD::string_& ST_SecondPieSizePercent::get_string() const
{
    return m_string;
}

void ST_SecondPieSizePercent::clear()
{
    m_has_string = false;
    m_string.clear();;
}

void ST_SecondPieSizePercent::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_string)
    {
        _outStream << " " << _attrName << "=\"" << m_string << "\"";;
    }
}

const ST_SecondPieSizePercent& ST_SecondPieSizePercent::default_instance()
{
    if (!ST_SecondPieSizePercent::default_instance_)
    {
        ST_SecondPieSizePercent::default_instance_ = new ST_SecondPieSizePercent();
    }
    return *ST_SecondPieSizePercent::default_instance_;
}

std::string ST_SecondPieSizePercent::toString() const
{
    std::stringstream strStream;
    strStream << get_string();
    return strStream.str();
}

ST_SecondPieSizePercent* ST_SecondPieSizePercent::default_instance_ = NULL;

// ST_SecondPieSizeUShort
ST_SecondPieSizeUShort::ST_SecondPieSizeUShort()
    :m_has_unsignedShort(false),
     m_unsignedShort(0)
{
}
ST_SecondPieSizeUShort::ST_SecondPieSizeUShort(const XSD::unsignedShort_& _unsignedShort)
    :m_has_unsignedShort(true)
{

    set_unsignedShort(_unsignedShort);
}
ST_SecondPieSizeUShort::~ST_SecondPieSizeUShort()
{
    clear();
}
bool ST_SecondPieSizeUShort::has_unsignedShort() const
{
    return m_has_unsignedShort;
}

void ST_SecondPieSizeUShort::set_unsignedShort(const XSD::unsignedShort_& _unsignedShort)
{   assert(5 <= _unsignedShort);
    assert(_unsignedShort <= 200);

    m_has_unsignedShort = true;
    m_unsignedShort = _unsignedShort;
}

const XSD::unsignedShort_& ST_SecondPieSizeUShort::get_unsignedShort() const
{
    return m_unsignedShort;
}

void ST_SecondPieSizeUShort::clear()
{
    m_has_unsignedShort = false;
    m_unsignedShort = 0;;
}

void ST_SecondPieSizeUShort::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_unsignedShort)
    {
        _outStream << " " << _attrName << "=\"" << m_unsignedShort << "\"";;
    }
}

const ST_SecondPieSizeUShort& ST_SecondPieSizeUShort::default_instance()
{
    if (!ST_SecondPieSizeUShort::default_instance_)
    {
        ST_SecondPieSizeUShort::default_instance_ = new ST_SecondPieSizeUShort();
    }
    return *ST_SecondPieSizeUShort::default_instance_;
}

std::string ST_SecondPieSizeUShort::toString() const
{
    std::stringstream strStream;
    strStream << get_unsignedShort();
    return strStream.str();
}

ST_SecondPieSizeUShort* ST_SecondPieSizeUShort::default_instance_ = NULL;

// ST_LblAlgn
ST_LblAlgn::ST_LblAlgn()
    :m_has_type(false)
{
}
ST_LblAlgn::ST_LblAlgn(const ST_LblAlgn::Type& _type)
    :m_has_type(true),
     m_type(_type)
{
}
ST_LblAlgn::~ST_LblAlgn()
{
    clear();
}
bool ST_LblAlgn::has_type() const
{
    return m_has_type;
}

void ST_LblAlgn::set_type(const ST_LblAlgn::Type& _type)
{
    m_has_type = true;
    m_type = _type;
}

const ST_LblAlgn::Type& ST_LblAlgn::get_type() const
{
    return m_type;
}

std::string ST_LblAlgn::toString() const
{
    return ST_LblAlgn::TypeStrList[m_type];
}

void ST_LblAlgn::clear()
{
    m_has_type = false;
}

void ST_LblAlgn::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_type)
    {
        _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
}

const ST_LblAlgn& ST_LblAlgn::default_instance()
{
    if (!ST_LblAlgn::default_instance_)
    {
        ST_LblAlgn::default_instance_ = new ST_LblAlgn();
    }
    return *ST_LblAlgn::default_instance_;
}

const std::string ST_LblAlgn::TypeStrList[] =
{
    "ctr",
    "l",
    "r"
};
ST_LblAlgn* ST_LblAlgn::default_instance_ = NULL;

// ST_DLblPos
ST_DLblPos::ST_DLblPos()
    :m_has_type(false)
{
}
ST_DLblPos::ST_DLblPos(const ST_DLblPos::Type& _type)
    :m_has_type(true),
     m_type(_type)
{
}
ST_DLblPos::~ST_DLblPos()
{
    clear();
}
bool ST_DLblPos::has_type() const
{
    return m_has_type;
}

void ST_DLblPos::set_type(const ST_DLblPos::Type& _type)
{
    m_has_type = true;
    m_type = _type;
}

const ST_DLblPos::Type& ST_DLblPos::get_type() const
{
    return m_type;
}

std::string ST_DLblPos::toString() const
{
    return ST_DLblPos::TypeStrList[m_type];
}

void ST_DLblPos::clear()
{
    m_has_type = false;
}

void ST_DLblPos::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_type)
    {
        _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
}

const ST_DLblPos& ST_DLblPos::default_instance()
{
    if (!ST_DLblPos::default_instance_)
    {
        ST_DLblPos::default_instance_ = new ST_DLblPos();
    }
    return *ST_DLblPos::default_instance_;
}

const std::string ST_DLblPos::TypeStrList[] =
{
    "bestFit",
    "b",
    "ctr",
    "inBase",
    "inEnd",
    "l",
    "outEnd",
    "r",
    "t"
};
ST_DLblPos* ST_DLblPos::default_instance_ = NULL;

// ST_MarkerStyle
ST_MarkerStyle::ST_MarkerStyle()
    :m_has_type(false)
{
}
ST_MarkerStyle::ST_MarkerStyle(const ST_MarkerStyle::Type& _type)
    :m_has_type(true),
     m_type(_type)
{
}
ST_MarkerStyle::~ST_MarkerStyle()
{
    clear();
}
bool ST_MarkerStyle::has_type() const
{
    return m_has_type;
}

void ST_MarkerStyle::set_type(const ST_MarkerStyle::Type& _type)
{
    m_has_type = true;
    m_type = _type;
}

const ST_MarkerStyle::Type& ST_MarkerStyle::get_type() const
{
    return m_type;
}

std::string ST_MarkerStyle::toString() const
{
    return ST_MarkerStyle::TypeStrList[m_type];
}

void ST_MarkerStyle::clear()
{
    m_has_type = false;
}

void ST_MarkerStyle::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_type)
    {
        _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
}

const ST_MarkerStyle& ST_MarkerStyle::default_instance()
{
    if (!ST_MarkerStyle::default_instance_)
    {
        ST_MarkerStyle::default_instance_ = new ST_MarkerStyle();
    }
    return *ST_MarkerStyle::default_instance_;
}

const std::string ST_MarkerStyle::TypeStrList[] =
{
    "circle",
    "dash",
    "diamond",
    "dot",
    "none",
    "picture",
    "plus",
    "square",
    "star",
    "triangle",
    "x",
    "auto"
};
ST_MarkerStyle* ST_MarkerStyle::default_instance_ = NULL;

// ST_MarkerSize
ST_MarkerSize::ST_MarkerSize()
    :m_has_unsignedByte(false),
     m_unsignedByte(0)
{
}
ST_MarkerSize::ST_MarkerSize(const XSD::unsignedByte_& _unsignedByte)
    :m_has_unsignedByte(true)
{

    set_unsignedByte(_unsignedByte);
}
ST_MarkerSize::~ST_MarkerSize()
{
    clear();
}
bool ST_MarkerSize::has_unsignedByte() const
{
    return m_has_unsignedByte;
}

void ST_MarkerSize::set_unsignedByte(const XSD::unsignedByte_& _unsignedByte)
{   assert(2 <= _unsignedByte);
    assert(_unsignedByte <= 72);

    m_has_unsignedByte = true;
    m_unsignedByte = _unsignedByte;
}

const XSD::unsignedByte_& ST_MarkerSize::get_unsignedByte() const
{
    return m_unsignedByte;
}

void ST_MarkerSize::clear()
{
    m_has_unsignedByte = false;
    m_unsignedByte = 0;;
}

void ST_MarkerSize::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_unsignedByte)
    {
        _outStream << " " << _attrName << "=\"" << m_unsignedByte << "\"";;
    }
}

const ST_MarkerSize& ST_MarkerSize::default_instance()
{
    if (!ST_MarkerSize::default_instance_)
    {
        ST_MarkerSize::default_instance_ = new ST_MarkerSize();
    }
    return *ST_MarkerSize::default_instance_;
}

std::string ST_MarkerSize::toString() const
{
    std::stringstream strStream;
    strStream << get_unsignedByte();
    return strStream.str();
}

ST_MarkerSize* ST_MarkerSize::default_instance_ = NULL;

// ST_TrendlineType
ST_TrendlineType::ST_TrendlineType()
    :m_has_type(false)
{
}
ST_TrendlineType::ST_TrendlineType(const ST_TrendlineType::Type& _type)
    :m_has_type(true),
     m_type(_type)
{
}
ST_TrendlineType::~ST_TrendlineType()
{
    clear();
}
bool ST_TrendlineType::has_type() const
{
    return m_has_type;
}

void ST_TrendlineType::set_type(const ST_TrendlineType::Type& _type)
{
    m_has_type = true;
    m_type = _type;
}

const ST_TrendlineType::Type& ST_TrendlineType::get_type() const
{
    return m_type;
}

std::string ST_TrendlineType::toString() const
{
    return ST_TrendlineType::TypeStrList[m_type];
}

void ST_TrendlineType::clear()
{
    m_has_type = false;
}

void ST_TrendlineType::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_type)
    {
        _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
}

const ST_TrendlineType& ST_TrendlineType::default_instance()
{
    if (!ST_TrendlineType::default_instance_)
    {
        ST_TrendlineType::default_instance_ = new ST_TrendlineType();
    }
    return *ST_TrendlineType::default_instance_;
}

const std::string ST_TrendlineType::TypeStrList[] =
{
    "exp",
    "linear",
    "log",
    "movingAvg",
    "poly",
    "power"
};
ST_TrendlineType* ST_TrendlineType::default_instance_ = NULL;

// ST_Order
ST_Order::ST_Order()
    :m_has_unsignedByte(false),
     m_unsignedByte(0)
{
}
ST_Order::ST_Order(const XSD::unsignedByte_& _unsignedByte)
    :m_has_unsignedByte(true)
{

    set_unsignedByte(_unsignedByte);
}
ST_Order::~ST_Order()
{
    clear();
}
bool ST_Order::has_unsignedByte() const
{
    return m_has_unsignedByte;
}

void ST_Order::set_unsignedByte(const XSD::unsignedByte_& _unsignedByte)
{   assert(2 <= _unsignedByte);
    assert(_unsignedByte <= 6);

    m_has_unsignedByte = true;
    m_unsignedByte = _unsignedByte;
}

const XSD::unsignedByte_& ST_Order::get_unsignedByte() const
{
    return m_unsignedByte;
}

void ST_Order::clear()
{
    m_has_unsignedByte = false;
    m_unsignedByte = 0;;
}

void ST_Order::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_unsignedByte)
    {
        _outStream << " " << _attrName << "=\"" << m_unsignedByte << "\"";;
    }
}

const ST_Order& ST_Order::default_instance()
{
    if (!ST_Order::default_instance_)
    {
        ST_Order::default_instance_ = new ST_Order();
    }
    return *ST_Order::default_instance_;
}

std::string ST_Order::toString() const
{
    std::stringstream strStream;
    strStream << get_unsignedByte();
    return strStream.str();
}

ST_Order* ST_Order::default_instance_ = NULL;

// ST_Period
ST_Period::ST_Period()
    :m_has_unsignedInt(false),
     m_unsignedInt(0)
{
}
ST_Period::ST_Period(const XSD::unsignedInt_& _unsignedInt)
    :m_has_unsignedInt(true)
{

    set_unsignedInt(_unsignedInt);
}
ST_Period::~ST_Period()
{
    clear();
}
bool ST_Period::has_unsignedInt() const
{
    return m_has_unsignedInt;
}

void ST_Period::set_unsignedInt(const XSD::unsignedInt_& _unsignedInt)
{   assert(2 <= _unsignedInt);

    m_has_unsignedInt = true;
    m_unsignedInt = _unsignedInt;
}

const XSD::unsignedInt_& ST_Period::get_unsignedInt() const
{
    return m_unsignedInt;
}

void ST_Period::clear()
{
    m_has_unsignedInt = false;
    m_unsignedInt = 0;;
}

void ST_Period::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_unsignedInt)
    {
        _outStream << " " << _attrName << "=\"" << m_unsignedInt << "\"";;
    }
}

const ST_Period& ST_Period::default_instance()
{
    if (!ST_Period::default_instance_)
    {
        ST_Period::default_instance_ = new ST_Period();
    }
    return *ST_Period::default_instance_;
}

std::string ST_Period::toString() const
{
    std::stringstream strStream;
    strStream << get_unsignedInt();
    return strStream.str();
}

ST_Period* ST_Period::default_instance_ = NULL;

// ST_ErrDir
ST_ErrDir::ST_ErrDir()
    :m_has_type(false)
{
}
ST_ErrDir::ST_ErrDir(const ST_ErrDir::Type& _type)
    :m_has_type(true),
     m_type(_type)
{
}
ST_ErrDir::~ST_ErrDir()
{
    clear();
}
bool ST_ErrDir::has_type() const
{
    return m_has_type;
}

void ST_ErrDir::set_type(const ST_ErrDir::Type& _type)
{
    m_has_type = true;
    m_type = _type;
}

const ST_ErrDir::Type& ST_ErrDir::get_type() const
{
    return m_type;
}

std::string ST_ErrDir::toString() const
{
    return ST_ErrDir::TypeStrList[m_type];
}

void ST_ErrDir::clear()
{
    m_has_type = false;
}

void ST_ErrDir::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_type)
    {
        _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
}

const ST_ErrDir& ST_ErrDir::default_instance()
{
    if (!ST_ErrDir::default_instance_)
    {
        ST_ErrDir::default_instance_ = new ST_ErrDir();
    }
    return *ST_ErrDir::default_instance_;
}

const std::string ST_ErrDir::TypeStrList[] =
{
    "x",
    "y"
};
ST_ErrDir* ST_ErrDir::default_instance_ = NULL;

// ST_ErrBarType
ST_ErrBarType::ST_ErrBarType()
    :m_has_type(false)
{
}
ST_ErrBarType::ST_ErrBarType(const ST_ErrBarType::Type& _type)
    :m_has_type(true),
     m_type(_type)
{
}
ST_ErrBarType::~ST_ErrBarType()
{
    clear();
}
bool ST_ErrBarType::has_type() const
{
    return m_has_type;
}

void ST_ErrBarType::set_type(const ST_ErrBarType::Type& _type)
{
    m_has_type = true;
    m_type = _type;
}

const ST_ErrBarType::Type& ST_ErrBarType::get_type() const
{
    return m_type;
}

std::string ST_ErrBarType::toString() const
{
    return ST_ErrBarType::TypeStrList[m_type];
}

void ST_ErrBarType::clear()
{
    m_has_type = false;
}

void ST_ErrBarType::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_type)
    {
        _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
}

const ST_ErrBarType& ST_ErrBarType::default_instance()
{
    if (!ST_ErrBarType::default_instance_)
    {
        ST_ErrBarType::default_instance_ = new ST_ErrBarType();
    }
    return *ST_ErrBarType::default_instance_;
}

const std::string ST_ErrBarType::TypeStrList[] =
{
    "both",
    "minus",
    "plus"
};
ST_ErrBarType* ST_ErrBarType::default_instance_ = NULL;

// ST_ErrValType
ST_ErrValType::ST_ErrValType()
    :m_has_type(false)
{
}
ST_ErrValType::ST_ErrValType(const ST_ErrValType::Type& _type)
    :m_has_type(true),
     m_type(_type)
{
}
ST_ErrValType::~ST_ErrValType()
{
    clear();
}
bool ST_ErrValType::has_type() const
{
    return m_has_type;
}

void ST_ErrValType::set_type(const ST_ErrValType::Type& _type)
{
    m_has_type = true;
    m_type = _type;
}

const ST_ErrValType::Type& ST_ErrValType::get_type() const
{
    return m_type;
}

std::string ST_ErrValType::toString() const
{
    return ST_ErrValType::TypeStrList[m_type];
}

void ST_ErrValType::clear()
{
    m_has_type = false;
}

void ST_ErrValType::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_type)
    {
        _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
}

const ST_ErrValType& ST_ErrValType::default_instance()
{
    if (!ST_ErrValType::default_instance_)
    {
        ST_ErrValType::default_instance_ = new ST_ErrValType();
    }
    return *ST_ErrValType::default_instance_;
}

const std::string ST_ErrValType::TypeStrList[] =
{
    "cust",
    "fixedVal",
    "percentage",
    "stdDev",
    "stdErr"
};
ST_ErrValType* ST_ErrValType::default_instance_ = NULL;

// ST_Grouping
ST_Grouping::ST_Grouping()
    :m_has_type(false)
{
}
ST_Grouping::ST_Grouping(const ST_Grouping::Type& _type)
    :m_has_type(true),
     m_type(_type)
{
}
ST_Grouping::~ST_Grouping()
{
    clear();
}
bool ST_Grouping::has_type() const
{
    return m_has_type;
}

void ST_Grouping::set_type(const ST_Grouping::Type& _type)
{
    m_has_type = true;
    m_type = _type;
}

const ST_Grouping::Type& ST_Grouping::get_type() const
{
    return m_type;
}

std::string ST_Grouping::toString() const
{
    return ST_Grouping::TypeStrList[m_type];
}

void ST_Grouping::clear()
{
    m_has_type = false;
}

void ST_Grouping::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_type)
    {
        _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
}

const ST_Grouping& ST_Grouping::default_instance()
{
    if (!ST_Grouping::default_instance_)
    {
        ST_Grouping::default_instance_ = new ST_Grouping();
    }
    return *ST_Grouping::default_instance_;
}

const std::string ST_Grouping::TypeStrList[] =
{
    "percentStacked",
    "standard",
    "stacked"
};
ST_Grouping* ST_Grouping::default_instance_ = NULL;

// ST_ScatterStyle
ST_ScatterStyle::ST_ScatterStyle()
    :m_has_type(false)
{
}
ST_ScatterStyle::ST_ScatterStyle(const ST_ScatterStyle::Type& _type)
    :m_has_type(true),
     m_type(_type)
{
}
ST_ScatterStyle::~ST_ScatterStyle()
{
    clear();
}
bool ST_ScatterStyle::has_type() const
{
    return m_has_type;
}

void ST_ScatterStyle::set_type(const ST_ScatterStyle::Type& _type)
{
    m_has_type = true;
    m_type = _type;
}

const ST_ScatterStyle::Type& ST_ScatterStyle::get_type() const
{
    return m_type;
}

std::string ST_ScatterStyle::toString() const
{
    return ST_ScatterStyle::TypeStrList[m_type];
}

void ST_ScatterStyle::clear()
{
    m_has_type = false;
}

void ST_ScatterStyle::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_type)
    {
        _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
}

const ST_ScatterStyle& ST_ScatterStyle::default_instance()
{
    if (!ST_ScatterStyle::default_instance_)
    {
        ST_ScatterStyle::default_instance_ = new ST_ScatterStyle();
    }
    return *ST_ScatterStyle::default_instance_;
}

const std::string ST_ScatterStyle::TypeStrList[] =
{
    "none",
    "line",
    "lineMarker",
    "marker",
    "smooth",
    "smoothMarker"
};
ST_ScatterStyle* ST_ScatterStyle::default_instance_ = NULL;

// ST_RadarStyle
ST_RadarStyle::ST_RadarStyle()
    :m_has_type(false)
{
}
ST_RadarStyle::ST_RadarStyle(const ST_RadarStyle::Type& _type)
    :m_has_type(true),
     m_type(_type)
{
}
ST_RadarStyle::~ST_RadarStyle()
{
    clear();
}
bool ST_RadarStyle::has_type() const
{
    return m_has_type;
}

void ST_RadarStyle::set_type(const ST_RadarStyle::Type& _type)
{
    m_has_type = true;
    m_type = _type;
}

const ST_RadarStyle::Type& ST_RadarStyle::get_type() const
{
    return m_type;
}

std::string ST_RadarStyle::toString() const
{
    return ST_RadarStyle::TypeStrList[m_type];
}

void ST_RadarStyle::clear()
{
    m_has_type = false;
}

void ST_RadarStyle::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_type)
    {
        _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
}

const ST_RadarStyle& ST_RadarStyle::default_instance()
{
    if (!ST_RadarStyle::default_instance_)
    {
        ST_RadarStyle::default_instance_ = new ST_RadarStyle();
    }
    return *ST_RadarStyle::default_instance_;
}

const std::string ST_RadarStyle::TypeStrList[] =
{
    "standard",
    "marker",
    "filled"
};
ST_RadarStyle* ST_RadarStyle::default_instance_ = NULL;

// ST_BarGrouping
ST_BarGrouping::ST_BarGrouping()
    :m_has_type(false)
{
}
ST_BarGrouping::ST_BarGrouping(const ST_BarGrouping::Type& _type)
    :m_has_type(true),
     m_type(_type)
{
}
ST_BarGrouping::~ST_BarGrouping()
{
    clear();
}
bool ST_BarGrouping::has_type() const
{
    return m_has_type;
}

void ST_BarGrouping::set_type(const ST_BarGrouping::Type& _type)
{
    m_has_type = true;
    m_type = _type;
}

const ST_BarGrouping::Type& ST_BarGrouping::get_type() const
{
    return m_type;
}

std::string ST_BarGrouping::toString() const
{
    return ST_BarGrouping::TypeStrList[m_type];
}

void ST_BarGrouping::clear()
{
    m_has_type = false;
}

void ST_BarGrouping::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_type)
    {
        _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
}

const ST_BarGrouping& ST_BarGrouping::default_instance()
{
    if (!ST_BarGrouping::default_instance_)
    {
        ST_BarGrouping::default_instance_ = new ST_BarGrouping();
    }
    return *ST_BarGrouping::default_instance_;
}

const std::string ST_BarGrouping::TypeStrList[] =
{
    "percentStacked",
    "clustered",
    "standard",
    "stacked"
};
ST_BarGrouping* ST_BarGrouping::default_instance_ = NULL;

// ST_BarDir
ST_BarDir::ST_BarDir()
    :m_has_type(false)
{
}
ST_BarDir::ST_BarDir(const ST_BarDir::Type& _type)
    :m_has_type(true),
     m_type(_type)
{
}
ST_BarDir::~ST_BarDir()
{
    clear();
}
bool ST_BarDir::has_type() const
{
    return m_has_type;
}

void ST_BarDir::set_type(const ST_BarDir::Type& _type)
{
    m_has_type = true;
    m_type = _type;
}

const ST_BarDir::Type& ST_BarDir::get_type() const
{
    return m_type;
}

std::string ST_BarDir::toString() const
{
    return ST_BarDir::TypeStrList[m_type];
}

void ST_BarDir::clear()
{
    m_has_type = false;
}

void ST_BarDir::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_type)
    {
        _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
}

const ST_BarDir& ST_BarDir::default_instance()
{
    if (!ST_BarDir::default_instance_)
    {
        ST_BarDir::default_instance_ = new ST_BarDir();
    }
    return *ST_BarDir::default_instance_;
}

const std::string ST_BarDir::TypeStrList[] =
{
    "bar",
    "col"
};
ST_BarDir* ST_BarDir::default_instance_ = NULL;

// ST_Shape
ST_Shape::ST_Shape()
    :m_has_type(false)
{
}
ST_Shape::ST_Shape(const ST_Shape::Type& _type)
    :m_has_type(true),
     m_type(_type)
{
}
ST_Shape::~ST_Shape()
{
    clear();
}
bool ST_Shape::has_type() const
{
    return m_has_type;
}

void ST_Shape::set_type(const ST_Shape::Type& _type)
{
    m_has_type = true;
    m_type = _type;
}

const ST_Shape::Type& ST_Shape::get_type() const
{
    return m_type;
}

std::string ST_Shape::toString() const
{
    return ST_Shape::TypeStrList[m_type];
}

void ST_Shape::clear()
{
    m_has_type = false;
}

void ST_Shape::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_type)
    {
        _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
}

const ST_Shape& ST_Shape::default_instance()
{
    if (!ST_Shape::default_instance_)
    {
        ST_Shape::default_instance_ = new ST_Shape();
    }
    return *ST_Shape::default_instance_;
}

const std::string ST_Shape::TypeStrList[] =
{
    "cone",
    "coneToMax",
    "box",
    "cylinder",
    "pyramid",
    "pyramidToMax"
};
ST_Shape* ST_Shape::default_instance_ = NULL;

// ST_OfPieType
ST_OfPieType::ST_OfPieType()
    :m_has_type(false)
{
}
ST_OfPieType::ST_OfPieType(const ST_OfPieType::Type& _type)
    :m_has_type(true),
     m_type(_type)
{
}
ST_OfPieType::~ST_OfPieType()
{
    clear();
}
bool ST_OfPieType::has_type() const
{
    return m_has_type;
}

void ST_OfPieType::set_type(const ST_OfPieType::Type& _type)
{
    m_has_type = true;
    m_type = _type;
}

const ST_OfPieType::Type& ST_OfPieType::get_type() const
{
    return m_type;
}

std::string ST_OfPieType::toString() const
{
    return ST_OfPieType::TypeStrList[m_type];
}

void ST_OfPieType::clear()
{
    m_has_type = false;
}

void ST_OfPieType::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_type)
    {
        _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
}

const ST_OfPieType& ST_OfPieType::default_instance()
{
    if (!ST_OfPieType::default_instance_)
    {
        ST_OfPieType::default_instance_ = new ST_OfPieType();
    }
    return *ST_OfPieType::default_instance_;
}

const std::string ST_OfPieType::TypeStrList[] =
{
    "pie",
    "bar"
};
ST_OfPieType* ST_OfPieType::default_instance_ = NULL;

// ST_AxPos
ST_AxPos::ST_AxPos()
    :m_has_type(false)
{
}
ST_AxPos::ST_AxPos(const ST_AxPos::Type& _type)
    :m_has_type(true),
     m_type(_type)
{
}
ST_AxPos::~ST_AxPos()
{
    clear();
}
bool ST_AxPos::has_type() const
{
    return m_has_type;
}

void ST_AxPos::set_type(const ST_AxPos::Type& _type)
{
    m_has_type = true;
    m_type = _type;
}

const ST_AxPos::Type& ST_AxPos::get_type() const
{
    return m_type;
}

std::string ST_AxPos::toString() const
{
    return ST_AxPos::TypeStrList[m_type];
}

void ST_AxPos::clear()
{
    m_has_type = false;
}

void ST_AxPos::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_type)
    {
        _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
}

const ST_AxPos& ST_AxPos::default_instance()
{
    if (!ST_AxPos::default_instance_)
    {
        ST_AxPos::default_instance_ = new ST_AxPos();
    }
    return *ST_AxPos::default_instance_;
}

const std::string ST_AxPos::TypeStrList[] =
{
    "b",
    "l",
    "r",
    "t"
};
ST_AxPos* ST_AxPos::default_instance_ = NULL;

// ST_Crosses
ST_Crosses::ST_Crosses()
    :m_has_type(false)
{
}
ST_Crosses::ST_Crosses(const ST_Crosses::Type& _type)
    :m_has_type(true),
     m_type(_type)
{
}
ST_Crosses::~ST_Crosses()
{
    clear();
}
bool ST_Crosses::has_type() const
{
    return m_has_type;
}

void ST_Crosses::set_type(const ST_Crosses::Type& _type)
{
    m_has_type = true;
    m_type = _type;
}

const ST_Crosses::Type& ST_Crosses::get_type() const
{
    return m_type;
}

std::string ST_Crosses::toString() const
{
    return ST_Crosses::TypeStrList[m_type];
}

void ST_Crosses::clear()
{
    m_has_type = false;
}

void ST_Crosses::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_type)
    {
        _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
}

const ST_Crosses& ST_Crosses::default_instance()
{
    if (!ST_Crosses::default_instance_)
    {
        ST_Crosses::default_instance_ = new ST_Crosses();
    }
    return *ST_Crosses::default_instance_;
}

const std::string ST_Crosses::TypeStrList[] =
{
    "autoZero",
    "max",
    "min"
};
ST_Crosses* ST_Crosses::default_instance_ = NULL;

// ST_CrossBetween
ST_CrossBetween::ST_CrossBetween()
    :m_has_type(false)
{
}
ST_CrossBetween::ST_CrossBetween(const ST_CrossBetween::Type& _type)
    :m_has_type(true),
     m_type(_type)
{
}
ST_CrossBetween::~ST_CrossBetween()
{
    clear();
}
bool ST_CrossBetween::has_type() const
{
    return m_has_type;
}

void ST_CrossBetween::set_type(const ST_CrossBetween::Type& _type)
{
    m_has_type = true;
    m_type = _type;
}

const ST_CrossBetween::Type& ST_CrossBetween::get_type() const
{
    return m_type;
}

std::string ST_CrossBetween::toString() const
{
    return ST_CrossBetween::TypeStrList[m_type];
}

void ST_CrossBetween::clear()
{
    m_has_type = false;
}

void ST_CrossBetween::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_type)
    {
        _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
}

const ST_CrossBetween& ST_CrossBetween::default_instance()
{
    if (!ST_CrossBetween::default_instance_)
    {
        ST_CrossBetween::default_instance_ = new ST_CrossBetween();
    }
    return *ST_CrossBetween::default_instance_;
}

const std::string ST_CrossBetween::TypeStrList[] =
{
    "between",
    "midCat"
};
ST_CrossBetween* ST_CrossBetween::default_instance_ = NULL;

// ST_TickMark
ST_TickMark::ST_TickMark()
    :m_has_type(false)
{
}
ST_TickMark::ST_TickMark(const ST_TickMark::Type& _type)
    :m_has_type(true),
     m_type(_type)
{
}
ST_TickMark::~ST_TickMark()
{
    clear();
}
bool ST_TickMark::has_type() const
{
    return m_has_type;
}

void ST_TickMark::set_type(const ST_TickMark::Type& _type)
{
    m_has_type = true;
    m_type = _type;
}

const ST_TickMark::Type& ST_TickMark::get_type() const
{
    return m_type;
}

std::string ST_TickMark::toString() const
{
    return ST_TickMark::TypeStrList[m_type];
}

void ST_TickMark::clear()
{
    m_has_type = false;
}

void ST_TickMark::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_type)
    {
        _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
}

const ST_TickMark& ST_TickMark::default_instance()
{
    if (!ST_TickMark::default_instance_)
    {
        ST_TickMark::default_instance_ = new ST_TickMark();
    }
    return *ST_TickMark::default_instance_;
}

const std::string ST_TickMark::TypeStrList[] =
{
    "cross",
    "in",
    "none",
    "out"
};
ST_TickMark* ST_TickMark::default_instance_ = NULL;

// ST_TickLblPos
ST_TickLblPos::ST_TickLblPos()
    :m_has_type(false)
{
}
ST_TickLblPos::ST_TickLblPos(const ST_TickLblPos::Type& _type)
    :m_has_type(true),
     m_type(_type)
{
}
ST_TickLblPos::~ST_TickLblPos()
{
    clear();
}
bool ST_TickLblPos::has_type() const
{
    return m_has_type;
}

void ST_TickLblPos::set_type(const ST_TickLblPos::Type& _type)
{
    m_has_type = true;
    m_type = _type;
}

const ST_TickLblPos::Type& ST_TickLblPos::get_type() const
{
    return m_type;
}

std::string ST_TickLblPos::toString() const
{
    return ST_TickLblPos::TypeStrList[m_type];
}

void ST_TickLblPos::clear()
{
    m_has_type = false;
}

void ST_TickLblPos::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_type)
    {
        _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
}

const ST_TickLblPos& ST_TickLblPos::default_instance()
{
    if (!ST_TickLblPos::default_instance_)
    {
        ST_TickLblPos::default_instance_ = new ST_TickLblPos();
    }
    return *ST_TickLblPos::default_instance_;
}

const std::string ST_TickLblPos::TypeStrList[] =
{
    "high",
    "low",
    "nextTo",
    "none"
};
ST_TickLblPos* ST_TickLblPos::default_instance_ = NULL;

// ST_Skip
ST_Skip::ST_Skip()
    :m_has_unsignedInt(false),
     m_unsignedInt(0)
{
}
ST_Skip::ST_Skip(const XSD::unsignedInt_& _unsignedInt)
    :m_has_unsignedInt(true)
{

    set_unsignedInt(_unsignedInt);
}
ST_Skip::~ST_Skip()
{
    clear();
}
bool ST_Skip::has_unsignedInt() const
{
    return m_has_unsignedInt;
}

void ST_Skip::set_unsignedInt(const XSD::unsignedInt_& _unsignedInt)
{   assert(1 <= _unsignedInt);

    m_has_unsignedInt = true;
    m_unsignedInt = _unsignedInt;
}

const XSD::unsignedInt_& ST_Skip::get_unsignedInt() const
{
    return m_unsignedInt;
}

void ST_Skip::clear()
{
    m_has_unsignedInt = false;
    m_unsignedInt = 0;;
}

void ST_Skip::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_unsignedInt)
    {
        _outStream << " " << _attrName << "=\"" << m_unsignedInt << "\"";;
    }
}

const ST_Skip& ST_Skip::default_instance()
{
    if (!ST_Skip::default_instance_)
    {
        ST_Skip::default_instance_ = new ST_Skip();
    }
    return *ST_Skip::default_instance_;
}

std::string ST_Skip::toString() const
{
    std::stringstream strStream;
    strStream << get_unsignedInt();
    return strStream.str();
}

ST_Skip* ST_Skip::default_instance_ = NULL;

// ST_TimeUnit
ST_TimeUnit::ST_TimeUnit()
    :m_has_type(false)
{
}
ST_TimeUnit::ST_TimeUnit(const ST_TimeUnit::Type& _type)
    :m_has_type(true),
     m_type(_type)
{
}
ST_TimeUnit::~ST_TimeUnit()
{
    clear();
}
bool ST_TimeUnit::has_type() const
{
    return m_has_type;
}

void ST_TimeUnit::set_type(const ST_TimeUnit::Type& _type)
{
    m_has_type = true;
    m_type = _type;
}

const ST_TimeUnit::Type& ST_TimeUnit::get_type() const
{
    return m_type;
}

std::string ST_TimeUnit::toString() const
{
    return ST_TimeUnit::TypeStrList[m_type];
}

void ST_TimeUnit::clear()
{
    m_has_type = false;
}

void ST_TimeUnit::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_type)
    {
        _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
}

const ST_TimeUnit& ST_TimeUnit::default_instance()
{
    if (!ST_TimeUnit::default_instance_)
    {
        ST_TimeUnit::default_instance_ = new ST_TimeUnit();
    }
    return *ST_TimeUnit::default_instance_;
}

const std::string ST_TimeUnit::TypeStrList[] =
{
    "days",
    "months",
    "years"
};
ST_TimeUnit* ST_TimeUnit::default_instance_ = NULL;

// ST_AxisUnit
ST_AxisUnit::ST_AxisUnit()
    :m_has_double(false),
     m_double(0)
{
}
ST_AxisUnit::ST_AxisUnit(const XSD::double_& _double)
    :m_has_double(true)
{

    set_double(_double);
}
ST_AxisUnit::~ST_AxisUnit()
{
    clear();
}
bool ST_AxisUnit::has_double() const
{
    return m_has_double;
}

void ST_AxisUnit::set_double(const XSD::double_& _double)
{   assert(0 < _double);

    m_has_double = true;
    m_double = _double;
}

const XSD::double_& ST_AxisUnit::get_double() const
{
    return m_double;
}

void ST_AxisUnit::clear()
{
    m_has_double = false;
    m_double = 0;;
}

void ST_AxisUnit::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_double)
    {
        _outStream << " " << _attrName << "=\"" << m_double << "\"";;
    }
}

const ST_AxisUnit& ST_AxisUnit::default_instance()
{
    if (!ST_AxisUnit::default_instance_)
    {
        ST_AxisUnit::default_instance_ = new ST_AxisUnit();
    }
    return *ST_AxisUnit::default_instance_;
}

std::string ST_AxisUnit::toString() const
{
    std::stringstream strStream;
    strStream << get_double();
    return strStream.str();
}

ST_AxisUnit* ST_AxisUnit::default_instance_ = NULL;

// ST_BuiltInUnit
ST_BuiltInUnit::ST_BuiltInUnit()
    :m_has_type(false)
{
}
ST_BuiltInUnit::ST_BuiltInUnit(const ST_BuiltInUnit::Type& _type)
    :m_has_type(true),
     m_type(_type)
{
}
ST_BuiltInUnit::~ST_BuiltInUnit()
{
    clear();
}
bool ST_BuiltInUnit::has_type() const
{
    return m_has_type;
}

void ST_BuiltInUnit::set_type(const ST_BuiltInUnit::Type& _type)
{
    m_has_type = true;
    m_type = _type;
}

const ST_BuiltInUnit::Type& ST_BuiltInUnit::get_type() const
{
    return m_type;
}

std::string ST_BuiltInUnit::toString() const
{
    return ST_BuiltInUnit::TypeStrList[m_type];
}

void ST_BuiltInUnit::clear()
{
    m_has_type = false;
}

void ST_BuiltInUnit::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_type)
    {
        _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
}

const ST_BuiltInUnit& ST_BuiltInUnit::default_instance()
{
    if (!ST_BuiltInUnit::default_instance_)
    {
        ST_BuiltInUnit::default_instance_ = new ST_BuiltInUnit();
    }
    return *ST_BuiltInUnit::default_instance_;
}

const std::string ST_BuiltInUnit::TypeStrList[] =
{
    "hundreds",
    "thousands",
    "tenThousands",
    "hundredThousands",
    "millions",
    "tenMillions",
    "hundredMillions",
    "billions",
    "trillions"
};
ST_BuiltInUnit* ST_BuiltInUnit::default_instance_ = NULL;

// ST_PictureFormat
ST_PictureFormat::ST_PictureFormat()
    :m_has_type(false)
{
}
ST_PictureFormat::ST_PictureFormat(const ST_PictureFormat::Type& _type)
    :m_has_type(true),
     m_type(_type)
{
}
ST_PictureFormat::~ST_PictureFormat()
{
    clear();
}
bool ST_PictureFormat::has_type() const
{
    return m_has_type;
}

void ST_PictureFormat::set_type(const ST_PictureFormat::Type& _type)
{
    m_has_type = true;
    m_type = _type;
}

const ST_PictureFormat::Type& ST_PictureFormat::get_type() const
{
    return m_type;
}

std::string ST_PictureFormat::toString() const
{
    return ST_PictureFormat::TypeStrList[m_type];
}

void ST_PictureFormat::clear()
{
    m_has_type = false;
}

void ST_PictureFormat::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_type)
    {
        _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
}

const ST_PictureFormat& ST_PictureFormat::default_instance()
{
    if (!ST_PictureFormat::default_instance_)
    {
        ST_PictureFormat::default_instance_ = new ST_PictureFormat();
    }
    return *ST_PictureFormat::default_instance_;
}

const std::string ST_PictureFormat::TypeStrList[] =
{
    "stretch",
    "stack",
    "stackScale"
};
ST_PictureFormat* ST_PictureFormat::default_instance_ = NULL;

// ST_PictureStackUnit
ST_PictureStackUnit::ST_PictureStackUnit()
    :m_has_double(false),
     m_double(0)
{
}
ST_PictureStackUnit::ST_PictureStackUnit(const XSD::double_& _double)
    :m_has_double(true)
{

    set_double(_double);
}
ST_PictureStackUnit::~ST_PictureStackUnit()
{
    clear();
}
bool ST_PictureStackUnit::has_double() const
{
    return m_has_double;
}

void ST_PictureStackUnit::set_double(const XSD::double_& _double)
{   assert(0 < _double);

    m_has_double = true;
    m_double = _double;
}

const XSD::double_& ST_PictureStackUnit::get_double() const
{
    return m_double;
}

void ST_PictureStackUnit::clear()
{
    m_has_double = false;
    m_double = 0;;
}

void ST_PictureStackUnit::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_double)
    {
        _outStream << " " << _attrName << "=\"" << m_double << "\"";;
    }
}

const ST_PictureStackUnit& ST_PictureStackUnit::default_instance()
{
    if (!ST_PictureStackUnit::default_instance_)
    {
        ST_PictureStackUnit::default_instance_ = new ST_PictureStackUnit();
    }
    return *ST_PictureStackUnit::default_instance_;
}

std::string ST_PictureStackUnit::toString() const
{
    std::stringstream strStream;
    strStream << get_double();
    return strStream.str();
}

ST_PictureStackUnit* ST_PictureStackUnit::default_instance_ = NULL;

// ST_Orientation
ST_Orientation::ST_Orientation()
    :m_has_type(false)
{
}
ST_Orientation::ST_Orientation(const ST_Orientation::Type& _type)
    :m_has_type(true),
     m_type(_type)
{
}
ST_Orientation::~ST_Orientation()
{
    clear();
}
bool ST_Orientation::has_type() const
{
    return m_has_type;
}

void ST_Orientation::set_type(const ST_Orientation::Type& _type)
{
    m_has_type = true;
    m_type = _type;
}

const ST_Orientation::Type& ST_Orientation::get_type() const
{
    return m_type;
}

std::string ST_Orientation::toString() const
{
    return ST_Orientation::TypeStrList[m_type];
}

void ST_Orientation::clear()
{
    m_has_type = false;
}

void ST_Orientation::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_type)
    {
        _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
}

const ST_Orientation& ST_Orientation::default_instance()
{
    if (!ST_Orientation::default_instance_)
    {
        ST_Orientation::default_instance_ = new ST_Orientation();
    }
    return *ST_Orientation::default_instance_;
}

const std::string ST_Orientation::TypeStrList[] =
{
    "maxMin",
    "minMax"
};
ST_Orientation* ST_Orientation::default_instance_ = NULL;

// ST_LogBase
ST_LogBase::ST_LogBase()
    :m_has_double(false),
     m_double(0)
{
}
ST_LogBase::ST_LogBase(const XSD::double_& _double)
    :m_has_double(true)
{

    set_double(_double);
}
ST_LogBase::~ST_LogBase()
{
    clear();
}
bool ST_LogBase::has_double() const
{
    return m_has_double;
}

void ST_LogBase::set_double(const XSD::double_& _double)
{   assert(2 <= _double);
    assert(_double <= 1000);

    m_has_double = true;
    m_double = _double;
}

const XSD::double_& ST_LogBase::get_double() const
{
    return m_double;
}

void ST_LogBase::clear()
{
    m_has_double = false;
    m_double = 0;;
}

void ST_LogBase::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_double)
    {
        _outStream << " " << _attrName << "=\"" << m_double << "\"";;
    }
}

const ST_LogBase& ST_LogBase::default_instance()
{
    if (!ST_LogBase::default_instance_)
    {
        ST_LogBase::default_instance_ = new ST_LogBase();
    }
    return *ST_LogBase::default_instance_;
}

std::string ST_LogBase::toString() const
{
    std::stringstream strStream;
    strStream << get_double();
    return strStream.str();
}

ST_LogBase* ST_LogBase::default_instance_ = NULL;

// ST_LblOffset
ST_LblOffset::ST_LblOffset()
    :m_has_ST_LblOffsetPercent(false),
     m_ST_LblOffsetPercent(NULL),
     m_has_ST_LblOffsetUShort(false),
     m_ST_LblOffsetUShort(NULL)
{
}
ST_LblOffset::ST_LblOffset(const ST_LblOffset& _ST_LblOffset)
    :m_has_ST_LblOffsetPercent(false),
     m_ST_LblOffsetPercent(NULL),
     m_has_ST_LblOffsetUShort(false),
     m_ST_LblOffsetUShort(NULL)
{

    m_has_ST_LblOffsetPercent = _ST_LblOffset.has_ST_LblOffsetPercent();
    if (_ST_LblOffset.has_ST_LblOffsetPercent())
    {
        m_ST_LblOffsetPercent = new ST_LblOffsetPercent(_ST_LblOffset.get_ST_LblOffsetPercent());
    }


    m_has_ST_LblOffsetUShort = _ST_LblOffset.has_ST_LblOffsetUShort();
    if (_ST_LblOffset.has_ST_LblOffsetUShort())
    {
        m_ST_LblOffsetUShort = new ST_LblOffsetUShort(_ST_LblOffset.get_ST_LblOffsetUShort());
    }
}
ST_LblOffset::~ST_LblOffset()
{
    clear();
}
bool ST_LblOffset::has_ST_LblOffsetPercent() const
{
    return m_has_ST_LblOffsetPercent;
}

ST_LblOffsetPercent* ST_LblOffset::mutable_ST_LblOffsetPercent()
{
    clear_ST_LblOffsetUShort();
    m_has_ST_LblOffsetPercent = true;
    if (!m_ST_LblOffsetPercent)
    {
        m_ST_LblOffsetPercent = new ST_LblOffsetPercent();
    }
    return m_ST_LblOffsetPercent;
}

const ST_LblOffsetPercent& ST_LblOffset::get_ST_LblOffsetPercent() const
{
    if (m_ST_LblOffsetPercent)
    {
        return *m_ST_LblOffsetPercent;
    }
    return ST_LblOffsetPercent::default_instance();
}

void ST_LblOffset::clear_ST_LblOffsetPercent()
{
    m_has_ST_LblOffsetPercent = false;
    if (m_ST_LblOffsetPercent)
    {
        delete m_ST_LblOffsetPercent;
        m_ST_LblOffsetPercent = NULL;
    }
}

bool ST_LblOffset::has_ST_LblOffsetUShort() const
{
    return m_has_ST_LblOffsetUShort;
}

ST_LblOffsetUShort* ST_LblOffset::mutable_ST_LblOffsetUShort()
{
    clear_ST_LblOffsetPercent();
    m_has_ST_LblOffsetUShort = true;
    if (!m_ST_LblOffsetUShort)
    {
        m_ST_LblOffsetUShort = new ST_LblOffsetUShort();
    }
    return m_ST_LblOffsetUShort;
}

const ST_LblOffsetUShort& ST_LblOffset::get_ST_LblOffsetUShort() const
{
    if (m_ST_LblOffsetUShort)
    {
        return *m_ST_LblOffsetUShort;
    }
    return ST_LblOffsetUShort::default_instance();
}

void ST_LblOffset::clear_ST_LblOffsetUShort()
{
    m_has_ST_LblOffsetUShort = false;
    if (m_ST_LblOffsetUShort)
    {
        delete m_ST_LblOffsetUShort;
        m_ST_LblOffsetUShort = NULL;
    }
}

std::string ST_LblOffset::toString() const
{
    if (m_has_ST_LblOffsetPercent)
    {
        return m_ST_LblOffsetPercent->toString();
    }

    if (m_has_ST_LblOffsetUShort)
    {
        return m_ST_LblOffsetUShort->toString();
    }

    return string();
}

void ST_LblOffset::clear()
{   clear_ST_LblOffsetPercent();
    clear_ST_LblOffsetUShort();
}

void ST_LblOffset::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_ST_LblOffsetPercent)
    {
        m_ST_LblOffsetPercent->toXmlAttr(_attrName, _outStream);
        return;
    }

    if (m_has_ST_LblOffsetUShort)
    {
        m_ST_LblOffsetUShort->toXmlAttr(_attrName, _outStream);
        return;
    }
}

const ST_LblOffset& ST_LblOffset::default_instance()
{
    if (!ST_LblOffset::default_instance_)
    {
        ST_LblOffset::default_instance_ = new ST_LblOffset();
    }
    return *ST_LblOffset::default_instance_;
}

ST_LblOffset* ST_LblOffset::default_instance_ = NULL;

// ST_LblOffsetPercent
ST_LblOffsetPercent::ST_LblOffsetPercent()
    :m_has_string(false),
     m_string("")
{
}
ST_LblOffsetPercent::ST_LblOffsetPercent(const XSD::string_& _string)
    :m_has_string(true)
{

    set_string(_string);
}
ST_LblOffsetPercent::~ST_LblOffsetPercent()
{
    clear();
}
bool ST_LblOffsetPercent::has_string() const
{
    return m_has_string;
}

void ST_LblOffsetPercent::set_string(const XSD::string_& _string)
{
    m_has_string = true;
    m_string = _string;
}

const XSD::string_& ST_LblOffsetPercent::get_string() const
{
    return m_string;
}

void ST_LblOffsetPercent::clear()
{
    m_has_string = false;
    m_string.clear();;
}

void ST_LblOffsetPercent::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_string)
    {
        _outStream << " " << _attrName << "=\"" << m_string << "\"";;
    }
}

const ST_LblOffsetPercent& ST_LblOffsetPercent::default_instance()
{
    if (!ST_LblOffsetPercent::default_instance_)
    {
        ST_LblOffsetPercent::default_instance_ = new ST_LblOffsetPercent();
    }
    return *ST_LblOffsetPercent::default_instance_;
}

std::string ST_LblOffsetPercent::toString() const
{
    std::stringstream strStream;
    strStream << get_string();
    return strStream.str();
}

ST_LblOffsetPercent* ST_LblOffsetPercent::default_instance_ = NULL;

// ST_LblOffsetUShort
ST_LblOffsetUShort::ST_LblOffsetUShort()
    :m_has_unsignedShort(false),
     m_unsignedShort(0)
{
}
ST_LblOffsetUShort::ST_LblOffsetUShort(const XSD::unsignedShort_& _unsignedShort)
    :m_has_unsignedShort(true)
{

    set_unsignedShort(_unsignedShort);
}
ST_LblOffsetUShort::~ST_LblOffsetUShort()
{
    clear();
}
bool ST_LblOffsetUShort::has_unsignedShort() const
{
    return m_has_unsignedShort;
}

void ST_LblOffsetUShort::set_unsignedShort(const XSD::unsignedShort_& _unsignedShort)
{   assert(0 <= _unsignedShort);
    assert(_unsignedShort <= 1000);

    m_has_unsignedShort = true;
    m_unsignedShort = _unsignedShort;
}

const XSD::unsignedShort_& ST_LblOffsetUShort::get_unsignedShort() const
{
    return m_unsignedShort;
}

void ST_LblOffsetUShort::clear()
{
    m_has_unsignedShort = false;
    m_unsignedShort = 0;;
}

void ST_LblOffsetUShort::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_unsignedShort)
    {
        _outStream << " " << _attrName << "=\"" << m_unsignedShort << "\"";;
    }
}

const ST_LblOffsetUShort& ST_LblOffsetUShort::default_instance()
{
    if (!ST_LblOffsetUShort::default_instance_)
    {
        ST_LblOffsetUShort::default_instance_ = new ST_LblOffsetUShort();
    }
    return *ST_LblOffsetUShort::default_instance_;
}

std::string ST_LblOffsetUShort::toString() const
{
    std::stringstream strStream;
    strStream << get_unsignedShort();
    return strStream.str();
}

ST_LblOffsetUShort* ST_LblOffsetUShort::default_instance_ = NULL;

// ST_LegendPos
ST_LegendPos::ST_LegendPos()
    :m_has_type(false)
{
}
ST_LegendPos::ST_LegendPos(const ST_LegendPos::Type& _type)
    :m_has_type(true),
     m_type(_type)
{
}
ST_LegendPos::~ST_LegendPos()
{
    clear();
}
bool ST_LegendPos::has_type() const
{
    return m_has_type;
}

void ST_LegendPos::set_type(const ST_LegendPos::Type& _type)
{
    m_has_type = true;
    m_type = _type;
}

const ST_LegendPos::Type& ST_LegendPos::get_type() const
{
    return m_type;
}

std::string ST_LegendPos::toString() const
{
    return ST_LegendPos::TypeStrList[m_type];
}

void ST_LegendPos::clear()
{
    m_has_type = false;
}

void ST_LegendPos::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_type)
    {
        _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
}

const ST_LegendPos& ST_LegendPos::default_instance()
{
    if (!ST_LegendPos::default_instance_)
    {
        ST_LegendPos::default_instance_ = new ST_LegendPos();
    }
    return *ST_LegendPos::default_instance_;
}

const std::string ST_LegendPos::TypeStrList[] =
{
    "b",
    "tr",
    "l",
    "r",
    "t"
};
ST_LegendPos* ST_LegendPos::default_instance_ = NULL;

// ST_DispBlanksAs
ST_DispBlanksAs::ST_DispBlanksAs()
    :m_has_type(false)
{
}
ST_DispBlanksAs::ST_DispBlanksAs(const ST_DispBlanksAs::Type& _type)
    :m_has_type(true),
     m_type(_type)
{
}
ST_DispBlanksAs::~ST_DispBlanksAs()
{
    clear();
}
bool ST_DispBlanksAs::has_type() const
{
    return m_has_type;
}

void ST_DispBlanksAs::set_type(const ST_DispBlanksAs::Type& _type)
{
    m_has_type = true;
    m_type = _type;
}

const ST_DispBlanksAs::Type& ST_DispBlanksAs::get_type() const
{
    return m_type;
}

std::string ST_DispBlanksAs::toString() const
{
    return ST_DispBlanksAs::TypeStrList[m_type];
}

void ST_DispBlanksAs::clear()
{
    m_has_type = false;
}

void ST_DispBlanksAs::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_type)
    {
        _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
}

const ST_DispBlanksAs& ST_DispBlanksAs::default_instance()
{
    if (!ST_DispBlanksAs::default_instance_)
    {
        ST_DispBlanksAs::default_instance_ = new ST_DispBlanksAs();
    }
    return *ST_DispBlanksAs::default_instance_;
}

const std::string ST_DispBlanksAs::TypeStrList[] =
{
    "span",
    "gap",
    "zero"
};
ST_DispBlanksAs* ST_DispBlanksAs::default_instance_ = NULL;

// ST_Style
ST_Style::ST_Style()
    :m_has_unsignedByte(false),
     m_unsignedByte(0)
{
}
ST_Style::ST_Style(const XSD::unsignedByte_& _unsignedByte)
    :m_has_unsignedByte(true)
{

    set_unsignedByte(_unsignedByte);
}
ST_Style::~ST_Style()
{
    clear();
}
bool ST_Style::has_unsignedByte() const
{
    return m_has_unsignedByte;
}

void ST_Style::set_unsignedByte(const XSD::unsignedByte_& _unsignedByte)
{   assert(1 <= _unsignedByte);
    assert(_unsignedByte <= 48);

    m_has_unsignedByte = true;
    m_unsignedByte = _unsignedByte;
}

const XSD::unsignedByte_& ST_Style::get_unsignedByte() const
{
    return m_unsignedByte;
}

void ST_Style::clear()
{
    m_has_unsignedByte = false;
    m_unsignedByte = 0;;
}

void ST_Style::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_unsignedByte)
    {
        _outStream << " " << _attrName << "=\"" << m_unsignedByte << "\"";;
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

std::string ST_Style::toString() const
{
    std::stringstream strStream;
    strStream << get_unsignedByte();
    return strStream.str();
}

ST_Style* ST_Style::default_instance_ = NULL;

// ST_PageSetupOrientation
ST_PageSetupOrientation::ST_PageSetupOrientation()
    :m_has_type(false)
{
}
ST_PageSetupOrientation::ST_PageSetupOrientation(const ST_PageSetupOrientation::Type& _type)
    :m_has_type(true),
     m_type(_type)
{
}
ST_PageSetupOrientation::~ST_PageSetupOrientation()
{
    clear();
}
bool ST_PageSetupOrientation::has_type() const
{
    return m_has_type;
}

void ST_PageSetupOrientation::set_type(const ST_PageSetupOrientation::Type& _type)
{
    m_has_type = true;
    m_type = _type;
}

const ST_PageSetupOrientation::Type& ST_PageSetupOrientation::get_type() const
{
    return m_type;
}

std::string ST_PageSetupOrientation::toString() const
{
    return ST_PageSetupOrientation::TypeStrList[m_type];
}

void ST_PageSetupOrientation::clear()
{
    m_has_type = false;
}

void ST_PageSetupOrientation::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_type)
    {
        _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
}

const ST_PageSetupOrientation& ST_PageSetupOrientation::default_instance()
{
    if (!ST_PageSetupOrientation::default_instance_)
    {
        ST_PageSetupOrientation::default_instance_ = new ST_PageSetupOrientation();
    }
    return *ST_PageSetupOrientation::default_instance_;
}

const std::string ST_PageSetupOrientation::TypeStrList[] =
{
    "default",
    "portrait",
    "landscape"
};
ST_PageSetupOrientation* ST_PageSetupOrientation::default_instance_ = NULL;

// CT_Boolean
CT_Boolean::CT_Boolean()
    :m_has_val_attr(false),
     m_val_attr(false)
{
}
CT_Boolean::~CT_Boolean()
{
    clear();
}
void CT_Boolean::clear()
{
    m_has_val_attr = false;
    m_val_attr = false;
}

void CT_Boolean::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_val_attr)
    {
        _outStream << " " << "val" << "=\"" << XSD::XMLBooleanStr(m_val_attr) << "\"";
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_Boolean& CT_Boolean::default_instance()
{
    if (!CT_Boolean::default_instance_)
    {
        CT_Boolean::default_instance_ = new CT_Boolean();
    }
    return *CT_Boolean::default_instance_;
}

bool CT_Boolean::has_val_attr() const
{
    return m_has_val_attr;
}

void CT_Boolean::set_val_attr(const XSD::boolean_& _val_attr)
{
    m_has_val_attr = true;
    m_val_attr = _val_attr;
}

const XSD::boolean_& CT_Boolean::get_val_attr() const
{
    return m_val_attr;
}

CT_Boolean* CT_Boolean::default_instance_ = NULL;

// CT_Double
CT_Double::CT_Double()
    :m_has_val_attr(false),
     m_val_attr(0)
{
}
CT_Double::~CT_Double()
{
    clear();
}
void CT_Double::clear()
{
    m_has_val_attr = false;
    m_val_attr = 0;
}

void CT_Double::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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

const CT_Double& CT_Double::default_instance()
{
    if (!CT_Double::default_instance_)
    {
        CT_Double::default_instance_ = new CT_Double();
    }
    return *CT_Double::default_instance_;
}

bool CT_Double::has_val_attr() const
{
    return m_has_val_attr;
}

void CT_Double::set_val_attr(const XSD::double_& _val_attr)
{
    m_has_val_attr = true;
    m_val_attr = _val_attr;
}

const XSD::double_& CT_Double::get_val_attr() const
{
    return m_val_attr;
}

CT_Double* CT_Double::default_instance_ = NULL;

// CT_UnsignedInt
CT_UnsignedInt::CT_UnsignedInt()
    :m_has_val_attr(false),
     m_val_attr(0)
{
}
CT_UnsignedInt::~CT_UnsignedInt()
{
    clear();
}
void CT_UnsignedInt::clear()
{
    m_has_val_attr = false;
    m_val_attr = 0;
}

void CT_UnsignedInt::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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

const CT_UnsignedInt& CT_UnsignedInt::default_instance()
{
    if (!CT_UnsignedInt::default_instance_)
    {
        CT_UnsignedInt::default_instance_ = new CT_UnsignedInt();
    }
    return *CT_UnsignedInt::default_instance_;
}

bool CT_UnsignedInt::has_val_attr() const
{
    return m_has_val_attr;
}

void CT_UnsignedInt::set_val_attr(const XSD::unsignedInt_& _val_attr)
{
    m_has_val_attr = true;
    m_val_attr = _val_attr;
}

const XSD::unsignedInt_& CT_UnsignedInt::get_val_attr() const
{
    return m_val_attr;
}

CT_UnsignedInt* CT_UnsignedInt::default_instance_ = NULL;

// CT_RelId
CT_RelId::CT_RelId()
    :m_has_r_id_attr(false),
     m_r_id_attr(NULL)
{
}
CT_RelId::~CT_RelId()
{
    clear();
}
void CT_RelId::clear()
{
    m_has_r_id_attr = false;

    if (m_r_id_attr)
    {
        delete m_r_id_attr;
        m_r_id_attr = NULL;
    }

}

void CT_RelId::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    assert(m_has_r_id_attr);
    if (m_has_r_id_attr)
    {
        m_r_id_attr->toXmlAttr("r:id", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_RelId& CT_RelId::default_instance()
{
    if (!CT_RelId::default_instance_)
    {
        CT_RelId::default_instance_ = new CT_RelId();
    }
    return *CT_RelId::default_instance_;
}

bool CT_RelId::has_r_id_attr() const
{
    return m_has_r_id_attr;
}

void CT_RelId::set_r_id_attr(const ns_r::ST_RelationshipId& _r_id_attr)
{
    m_has_r_id_attr = true;
    m_r_id_attr = new ns_r::ST_RelationshipId(_r_id_attr);
}

const ns_r::ST_RelationshipId& CT_RelId::get_r_id_attr() const
{
    if (m_r_id_attr)
    {
        return *m_r_id_attr;
    }
    return ns_r::ST_RelationshipId::default_instance();
}

CT_RelId* CT_RelId::default_instance_ = NULL;

// CT_Extension
CT_Extension::CT_Extension()
    :m_has__any(false),
     m__any(NULL),
     m_has_uri_attr(false),
     m_uri_attr("")
{
}
CT_Extension::~CT_Extension()
{
    clear();
}
void CT_Extension::clear()
{
    m_has_uri_attr = false;
    m_uri_attr.clear();
}

void CT_Extension::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_uri_attr)
    {
        _outStream << " " << "uri" << "=\"" << m_uri_attr << "\"";
    }

    _outStream << ">";

    assert(m_has__any);


    if (m_has__any)
    {
        m__any->toXml(_outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_Extension& CT_Extension::default_instance()
{
    if (!CT_Extension::default_instance_)
    {
        CT_Extension::default_instance_ = new CT_Extension();
    }
    return *CT_Extension::default_instance_;
}

bool CT_Extension::has_uri_attr() const
{
    return m_has_uri_attr;
}

void CT_Extension::set_uri_attr(const XSD::token_& _uri_attr)
{
    m_has_uri_attr = true;
    m_uri_attr = _uri_attr;
}

const XSD::token_& CT_Extension::get_uri_attr() const
{
    return m_uri_attr;
}

CT_Extension* CT_Extension::default_instance_ = NULL;

// CT_ExtensionList
CT_ExtensionList::CT_ExtensionList()

{
}
CT_ExtensionList::~CT_ExtensionList()
{
    clear();
}
CT_Extension* CT_ExtensionList::add_ext()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Extension* pNewChild = pChildGroup->mutable_ext();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

void CT_ExtensionList::clear()
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

void CT_ExtensionList::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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
            if ((*iter)->has_ext())
            {
                (*iter)->get_ext().toXmlElem("c:ext", "", _outStream);
            }


        }
    }

    _outStream << "</" << _elemName << ">";
}

const CT_ExtensionList& CT_ExtensionList::default_instance()
{
    if (!CT_ExtensionList::default_instance_)
    {
        CT_ExtensionList::default_instance_ = new CT_ExtensionList();
    }
    return *CT_ExtensionList::default_instance_;
}


// CT_ExtensionList::ChildGroup_1
CT_ExtensionList::ChildGroup_1::ChildGroup_1()
    :m_has_ext(false),
     m_ext(NULL)
{
}
bool CT_ExtensionList::ChildGroup_1::has_ext() const
{
    return m_has_ext;
}

CT_Extension* CT_ExtensionList::ChildGroup_1::mutable_ext()
{

    m_has_ext = true;
    if (!m_ext)
    {
        m_ext = new CT_Extension();
    }
    return m_ext;
}

const CT_Extension& CT_ExtensionList::ChildGroup_1::get_ext() const
{
    if (m_ext)
    {
        return *m_ext;
    }
    return CT_Extension::default_instance();
}

CT_ExtensionList* CT_ExtensionList::default_instance_ = NULL;

// CT_NumVal
CT_NumVal::CT_NumVal()
    :m_has_v(false),
     m_v(NULL),
     m_has_idx_attr(false),
     m_idx_attr(0),
     m_has_formatCode_attr(false),
     m_formatCode_attr(NULL)
{
}
CT_NumVal::~CT_NumVal()
{
    clear();
}
bool CT_NumVal::has_v() const
{
    return m_has_v;
}

ns_s::ST_Xstring* CT_NumVal::mutable_v()
{
    m_has_v = true;
    if (!m_v)
    {
        m_v = new ns_s::ST_Xstring();
    }
    return m_v;
}

const ns_s::ST_Xstring& CT_NumVal::get_v() const
{
    if (m_v)
    {
        return *m_v;
    }
    return ns_s::ST_Xstring::default_instance();
}

void CT_NumVal::clear()
{
    m_has_idx_attr = false;
    m_idx_attr = 0;

    m_has_formatCode_attr = false;

    if (m_formatCode_attr)
    {
        delete m_formatCode_attr;
        m_formatCode_attr = NULL;
    }


    m_has_v = false;

    if (m_v)
    {
        delete m_v;
        m_v = NULL;
    }

}

void CT_NumVal::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    assert(m_has_idx_attr);
    if (m_has_idx_attr)
    {
        _outStream << " " << "idx" << "=\"" << m_idx_attr << "\"";
    }



    if (m_has_formatCode_attr)
    {
        m_formatCode_attr->toXmlAttr("formatCode", _outStream);
    }

    _outStream << ">";

    assert(m_has_v);


    if (m_has_v)
    {
        _outStream << "<c:v>" << m_v->toString() << "</c:v>";
    }

    _outStream << "</" << _elemName << ">";
}

const CT_NumVal& CT_NumVal::default_instance()
{
    if (!CT_NumVal::default_instance_)
    {
        CT_NumVal::default_instance_ = new CT_NumVal();
    }
    return *CT_NumVal::default_instance_;
}

bool CT_NumVal::has_idx_attr() const
{
    return m_has_idx_attr;
}

void CT_NumVal::set_idx_attr(const XSD::unsignedInt_& _idx_attr)
{
    m_has_idx_attr = true;
    m_idx_attr = _idx_attr;
}

const XSD::unsignedInt_& CT_NumVal::get_idx_attr() const
{
    return m_idx_attr;
}

bool CT_NumVal::has_formatCode_attr() const
{
    return m_has_formatCode_attr;
}

void CT_NumVal::set_formatCode_attr(const ns_s::ST_Xstring& _formatCode_attr)
{
    m_has_formatCode_attr = true;
    m_formatCode_attr = new ns_s::ST_Xstring(_formatCode_attr);
}

const ns_s::ST_Xstring& CT_NumVal::get_formatCode_attr() const
{
    if (m_formatCode_attr)
    {
        return *m_formatCode_attr;
    }
    return ns_s::ST_Xstring::default_instance();
}

CT_NumVal* CT_NumVal::default_instance_ = NULL;

// CT_NumData
CT_NumData::CT_NumData()
    :m_has_formatCode(false),
     m_formatCode(NULL),
     m_has_ptCount(false),
     m_ptCount(NULL),
     m_has_extLst(false),
     m_extLst(NULL)
{
}
CT_NumData::~CT_NumData()
{
    clear();
}
bool CT_NumData::has_formatCode() const
{
    return m_has_formatCode;
}

ns_s::ST_Xstring* CT_NumData::mutable_formatCode()
{
    m_has_formatCode = true;
    if (!m_formatCode)
    {
        m_formatCode = new ns_s::ST_Xstring();
    }
    return m_formatCode;
}

const ns_s::ST_Xstring& CT_NumData::get_formatCode() const
{
    if (m_formatCode)
    {
        return *m_formatCode;
    }
    return ns_s::ST_Xstring::default_instance();
}

bool CT_NumData::has_ptCount() const
{
    return m_has_ptCount;
}

CT_UnsignedInt* CT_NumData::mutable_ptCount()
{
    m_has_ptCount = true;
    if (!m_ptCount)
    {
        m_ptCount = new CT_UnsignedInt();
    }
    return m_ptCount;
}

const CT_UnsignedInt& CT_NumData::get_ptCount() const
{
    if (m_ptCount)
    {
        return *m_ptCount;
    }
    return CT_UnsignedInt::default_instance();
}

CT_NumVal* CT_NumData::add_pt()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_NumVal* pNewChild = pChildGroup->mutable_pt();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

bool CT_NumData::has_extLst() const
{
    return m_has_extLst;
}

CT_ExtensionList* CT_NumData::mutable_extLst()
{
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new CT_ExtensionList();
    }
    return m_extLst;
}

const CT_ExtensionList& CT_NumData::get_extLst() const
{
    if (m_extLst)
    {
        return *m_extLst;
    }
    return CT_ExtensionList::default_instance();
}

void CT_NumData::clear()
{
    m_has_formatCode = false;

    if (m_formatCode)
    {
        delete m_formatCode;
        m_formatCode = NULL;
    }


    m_has_ptCount = false;

    if (m_ptCount)
    {
        delete m_ptCount;
        m_ptCount = NULL;
    }


    {
        vector<ChildGroup_1*>::iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_1.clear();
    }

    m_has_extLst = false;

    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }

}

void CT_NumData::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";


    if (m_has_formatCode)
    {
        _outStream << "<c:formatCode>" << m_formatCode->toString() << "</c:formatCode>";
    }


    if (m_has_ptCount)
    {
        m_ptCount->toXmlElem("c:ptCount", "", _outStream);
    }

    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_pt())
            {
                (*iter)->get_pt().toXmlElem("c:pt", "", _outStream);
            }


        }
    }


    if (m_has_extLst)
    {
        m_extLst->toXmlElem("c:extLst", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_NumData& CT_NumData::default_instance()
{
    if (!CT_NumData::default_instance_)
    {
        CT_NumData::default_instance_ = new CT_NumData();
    }
    return *CT_NumData::default_instance_;
}


// CT_NumData::ChildGroup_1
CT_NumData::ChildGroup_1::ChildGroup_1()
    :m_has_pt(false),
     m_pt(NULL)
{
}
bool CT_NumData::ChildGroup_1::has_pt() const
{
    return m_has_pt;
}

CT_NumVal* CT_NumData::ChildGroup_1::mutable_pt()
{

    m_has_pt = true;
    if (!m_pt)
    {
        m_pt = new CT_NumVal();
    }
    return m_pt;
}

const CT_NumVal& CT_NumData::ChildGroup_1::get_pt() const
{
    if (m_pt)
    {
        return *m_pt;
    }
    return CT_NumVal::default_instance();
}

CT_NumData* CT_NumData::default_instance_ = NULL;

// CT_NumRef
CT_NumRef::CT_NumRef()
    :m_has_f(false),
     m_f(""),
     m_has_numCache(false),
     m_numCache(NULL),
     m_has_extLst(false),
     m_extLst(NULL)
{
}
CT_NumRef::~CT_NumRef()
{
    clear();
}
bool CT_NumRef::has_f() const
{
    return m_has_f;
}

void CT_NumRef::set_f(const XSD::string_& _f)
{
    m_has_f = true;
    m_f = _f;
}

const XSD::string_& CT_NumRef::get_f() const
{
    return m_f;
}

bool CT_NumRef::has_numCache() const
{
    return m_has_numCache;
}

CT_NumData* CT_NumRef::mutable_numCache()
{
    m_has_numCache = true;
    if (!m_numCache)
    {
        m_numCache = new CT_NumData();
    }
    return m_numCache;
}

const CT_NumData& CT_NumRef::get_numCache() const
{
    if (m_numCache)
    {
        return *m_numCache;
    }
    return CT_NumData::default_instance();
}

bool CT_NumRef::has_extLst() const
{
    return m_has_extLst;
}

CT_ExtensionList* CT_NumRef::mutable_extLst()
{
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new CT_ExtensionList();
    }
    return m_extLst;
}

const CT_ExtensionList& CT_NumRef::get_extLst() const
{
    if (m_extLst)
    {
        return *m_extLst;
    }
    return CT_ExtensionList::default_instance();
}

void CT_NumRef::clear()
{
    m_has_f = false;
    m_f.clear();

    m_has_numCache = false;

    if (m_numCache)
    {
        delete m_numCache;
        m_numCache = NULL;
    }


    m_has_extLst = false;

    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }

}

void CT_NumRef::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";

    assert(m_has_f);


    if (m_has_f)
    {
        _outStream << "<c:f>" << m_f << "</c:f>";
    }


    if (m_has_numCache)
    {
        m_numCache->toXmlElem("c:numCache", "", _outStream);
    }


    if (m_has_extLst)
    {
        m_extLst->toXmlElem("c:extLst", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_NumRef& CT_NumRef::default_instance()
{
    if (!CT_NumRef::default_instance_)
    {
        CT_NumRef::default_instance_ = new CT_NumRef();
    }
    return *CT_NumRef::default_instance_;
}

CT_NumRef* CT_NumRef::default_instance_ = NULL;

// CT_NumDataSource
CT_NumDataSource::CT_NumDataSource()
    :m_has_numRef(false),
     m_numRef(NULL),
     m_has_numLit(false),
     m_numLit(NULL)
{
}
CT_NumDataSource::~CT_NumDataSource()
{
    clear();
}
bool CT_NumDataSource::has_numRef() const
{
    return m_has_numRef;
}

CT_NumRef* CT_NumDataSource::mutable_numRef()
{

    m_has_numLit = false;

    if (m_numLit)
    {
        delete m_numLit;
        m_numLit = NULL;
    }
    ;

    m_has_numRef = true;
    if (!m_numRef)
    {
        m_numRef = new CT_NumRef();
    }
    return m_numRef;
}

const CT_NumRef& CT_NumDataSource::get_numRef() const
{
    if (m_numRef)
    {
        return *m_numRef;
    }
    return CT_NumRef::default_instance();
}

bool CT_NumDataSource::has_numLit() const
{
    return m_has_numLit;
}

CT_NumData* CT_NumDataSource::mutable_numLit()
{

    m_has_numRef = false;

    if (m_numRef)
    {
        delete m_numRef;
        m_numRef = NULL;
    }
    ;

    m_has_numLit = true;
    if (!m_numLit)
    {
        m_numLit = new CT_NumData();
    }
    return m_numLit;
}

const CT_NumData& CT_NumDataSource::get_numLit() const
{
    if (m_numLit)
    {
        return *m_numLit;
    }
    return CT_NumData::default_instance();
}

void CT_NumDataSource::clear()
{
    m_has_numRef = false;

    if (m_numRef)
    {
        delete m_numRef;
        m_numRef = NULL;
    }


    m_has_numLit = false;

    if (m_numLit)
    {
        delete m_numLit;
        m_numLit = NULL;
    }

}

void CT_NumDataSource::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";

    {
        bool elemHasValueList[2] = {m_has_numRef, m_has_numLit};
        int cnt = count(elemHasValueList, elemHasValueList + 2, true);
        assert(cnt == 1);
    }


    if (m_has_numRef)
    {
        m_numRef->toXmlElem("c:numRef", "", _outStream);
    }


    if (m_has_numLit)
    {
        m_numLit->toXmlElem("c:numLit", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_NumDataSource& CT_NumDataSource::default_instance()
{
    if (!CT_NumDataSource::default_instance_)
    {
        CT_NumDataSource::default_instance_ = new CT_NumDataSource();
    }
    return *CT_NumDataSource::default_instance_;
}

CT_NumDataSource* CT_NumDataSource::default_instance_ = NULL;

// CT_StrVal
CT_StrVal::CT_StrVal()
    :m_has_v(false),
     m_v(NULL),
     m_has_idx_attr(false),
     m_idx_attr(0)
{
}
CT_StrVal::~CT_StrVal()
{
    clear();
}
bool CT_StrVal::has_v() const
{
    return m_has_v;
}

ns_s::ST_Xstring* CT_StrVal::mutable_v()
{
    m_has_v = true;
    if (!m_v)
    {
        m_v = new ns_s::ST_Xstring();
    }
    return m_v;
}

const ns_s::ST_Xstring& CT_StrVal::get_v() const
{
    if (m_v)
    {
        return *m_v;
    }
    return ns_s::ST_Xstring::default_instance();
}

void CT_StrVal::clear()
{
    m_has_idx_attr = false;
    m_idx_attr = 0;

    m_has_v = false;

    if (m_v)
    {
        delete m_v;
        m_v = NULL;
    }

}

void CT_StrVal::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    assert(m_has_idx_attr);
    if (m_has_idx_attr)
    {
        _outStream << " " << "idx" << "=\"" << m_idx_attr << "\"";
    }

    _outStream << ">";

    assert(m_has_v);


    if (m_has_v)
    {
        _outStream << "<c:v>" << m_v->toString() << "</c:v>";
    }

    _outStream << "</" << _elemName << ">";
}

const CT_StrVal& CT_StrVal::default_instance()
{
    if (!CT_StrVal::default_instance_)
    {
        CT_StrVal::default_instance_ = new CT_StrVal();
    }
    return *CT_StrVal::default_instance_;
}

bool CT_StrVal::has_idx_attr() const
{
    return m_has_idx_attr;
}

void CT_StrVal::set_idx_attr(const XSD::unsignedInt_& _idx_attr)
{
    m_has_idx_attr = true;
    m_idx_attr = _idx_attr;
}

const XSD::unsignedInt_& CT_StrVal::get_idx_attr() const
{
    return m_idx_attr;
}

CT_StrVal* CT_StrVal::default_instance_ = NULL;

// CT_StrData
CT_StrData::CT_StrData()
    :m_has_ptCount(false),
     m_ptCount(NULL),
     m_has_extLst(false),
     m_extLst(NULL)
{
}
CT_StrData::~CT_StrData()
{
    clear();
}
bool CT_StrData::has_ptCount() const
{
    return m_has_ptCount;
}

CT_UnsignedInt* CT_StrData::mutable_ptCount()
{
    m_has_ptCount = true;
    if (!m_ptCount)
    {
        m_ptCount = new CT_UnsignedInt();
    }
    return m_ptCount;
}

const CT_UnsignedInt& CT_StrData::get_ptCount() const
{
    if (m_ptCount)
    {
        return *m_ptCount;
    }
    return CT_UnsignedInt::default_instance();
}

CT_StrVal* CT_StrData::add_pt()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_StrVal* pNewChild = pChildGroup->mutable_pt();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

bool CT_StrData::has_extLst() const
{
    return m_has_extLst;
}

CT_ExtensionList* CT_StrData::mutable_extLst()
{
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new CT_ExtensionList();
    }
    return m_extLst;
}

const CT_ExtensionList& CT_StrData::get_extLst() const
{
    if (m_extLst)
    {
        return *m_extLst;
    }
    return CT_ExtensionList::default_instance();
}

void CT_StrData::clear()
{
    m_has_ptCount = false;

    if (m_ptCount)
    {
        delete m_ptCount;
        m_ptCount = NULL;
    }


    {
        vector<ChildGroup_1*>::iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_1.clear();
    }

    m_has_extLst = false;

    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }

}

void CT_StrData::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";


    if (m_has_ptCount)
    {
        m_ptCount->toXmlElem("c:ptCount", "", _outStream);
    }

    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_pt())
            {
                (*iter)->get_pt().toXmlElem("c:pt", "", _outStream);
            }


        }
    }


    if (m_has_extLst)
    {
        m_extLst->toXmlElem("c:extLst", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_StrData& CT_StrData::default_instance()
{
    if (!CT_StrData::default_instance_)
    {
        CT_StrData::default_instance_ = new CT_StrData();
    }
    return *CT_StrData::default_instance_;
}


// CT_StrData::ChildGroup_1
CT_StrData::ChildGroup_1::ChildGroup_1()
    :m_has_pt(false),
     m_pt(NULL)
{
}
bool CT_StrData::ChildGroup_1::has_pt() const
{
    return m_has_pt;
}

CT_StrVal* CT_StrData::ChildGroup_1::mutable_pt()
{

    m_has_pt = true;
    if (!m_pt)
    {
        m_pt = new CT_StrVal();
    }
    return m_pt;
}

const CT_StrVal& CT_StrData::ChildGroup_1::get_pt() const
{
    if (m_pt)
    {
        return *m_pt;
    }
    return CT_StrVal::default_instance();
}

CT_StrData* CT_StrData::default_instance_ = NULL;

// CT_StrRef
CT_StrRef::CT_StrRef()
    :m_has_f(false),
     m_f(""),
     m_has_strCache(false),
     m_strCache(NULL),
     m_has_extLst(false),
     m_extLst(NULL)
{
}
CT_StrRef::~CT_StrRef()
{
    clear();
}
bool CT_StrRef::has_f() const
{
    return m_has_f;
}

void CT_StrRef::set_f(const XSD::string_& _f)
{
    m_has_f = true;
    m_f = _f;
}

const XSD::string_& CT_StrRef::get_f() const
{
    return m_f;
}

bool CT_StrRef::has_strCache() const
{
    return m_has_strCache;
}

CT_StrData* CT_StrRef::mutable_strCache()
{
    m_has_strCache = true;
    if (!m_strCache)
    {
        m_strCache = new CT_StrData();
    }
    return m_strCache;
}

const CT_StrData& CT_StrRef::get_strCache() const
{
    if (m_strCache)
    {
        return *m_strCache;
    }
    return CT_StrData::default_instance();
}

bool CT_StrRef::has_extLst() const
{
    return m_has_extLst;
}

CT_ExtensionList* CT_StrRef::mutable_extLst()
{
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new CT_ExtensionList();
    }
    return m_extLst;
}

const CT_ExtensionList& CT_StrRef::get_extLst() const
{
    if (m_extLst)
    {
        return *m_extLst;
    }
    return CT_ExtensionList::default_instance();
}

void CT_StrRef::clear()
{
    m_has_f = false;
    m_f.clear();

    m_has_strCache = false;

    if (m_strCache)
    {
        delete m_strCache;
        m_strCache = NULL;
    }


    m_has_extLst = false;

    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }

}

void CT_StrRef::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";

    assert(m_has_f);


    if (m_has_f)
    {
        _outStream << "<c:f>" << m_f << "</c:f>";
    }


    if (m_has_strCache)
    {
        m_strCache->toXmlElem("c:strCache", "", _outStream);
    }


    if (m_has_extLst)
    {
        m_extLst->toXmlElem("c:extLst", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_StrRef& CT_StrRef::default_instance()
{
    if (!CT_StrRef::default_instance_)
    {
        CT_StrRef::default_instance_ = new CT_StrRef();
    }
    return *CT_StrRef::default_instance_;
}

CT_StrRef* CT_StrRef::default_instance_ = NULL;

// CT_Tx
CT_Tx::CT_Tx()
    :m_has_strRef(false),
     m_strRef(NULL),
     m_has_rich(false),
     m_rich(NULL)
{
}
CT_Tx::~CT_Tx()
{
    clear();
}
bool CT_Tx::has_strRef() const
{
    return m_has_strRef;
}

CT_StrRef* CT_Tx::mutable_strRef()
{

    m_has_rich = false;

    if (m_rich)
    {
        delete m_rich;
        m_rich = NULL;
    }
    ;

    m_has_strRef = true;
    if (!m_strRef)
    {
        m_strRef = new CT_StrRef();
    }
    return m_strRef;
}

const CT_StrRef& CT_Tx::get_strRef() const
{
    if (m_strRef)
    {
        return *m_strRef;
    }
    return CT_StrRef::default_instance();
}

bool CT_Tx::has_rich() const
{
    return m_has_rich;
}

ns_a::CT_TextBody* CT_Tx::mutable_rich()
{

    m_has_strRef = false;

    if (m_strRef)
    {
        delete m_strRef;
        m_strRef = NULL;
    }
    ;

    m_has_rich = true;
    if (!m_rich)
    {
        m_rich = new ns_a::CT_TextBody();
    }
    return m_rich;
}

const ns_a::CT_TextBody& CT_Tx::get_rich() const
{
    if (m_rich)
    {
        return *m_rich;
    }
    return ns_a::CT_TextBody::default_instance();
}

void CT_Tx::clear()
{
    m_has_strRef = false;

    if (m_strRef)
    {
        delete m_strRef;
        m_strRef = NULL;
    }


    m_has_rich = false;

    if (m_rich)
    {
        delete m_rich;
        m_rich = NULL;
    }

}

void CT_Tx::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";

    {
        bool elemHasValueList[2] = {m_has_strRef, m_has_rich};
        int cnt = count(elemHasValueList, elemHasValueList + 2, true);
        assert(cnt == 1);
    }


    if (m_has_strRef)
    {
        m_strRef->toXmlElem("c:strRef", "", _outStream);
    }


    if (m_has_rich)
    {
        m_rich->toXmlElem("c:rich", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_Tx& CT_Tx::default_instance()
{
    if (!CT_Tx::default_instance_)
    {
        CT_Tx::default_instance_ = new CT_Tx();
    }
    return *CT_Tx::default_instance_;
}

CT_Tx* CT_Tx::default_instance_ = NULL;

// CT_TextLanguageID
CT_TextLanguageID::CT_TextLanguageID()
    :m_has_val_attr(false),
     m_val_attr(NULL)
{
}
CT_TextLanguageID::~CT_TextLanguageID()
{
    clear();
}
void CT_TextLanguageID::clear()
{
    m_has_val_attr = false;

    if (m_val_attr)
    {
        delete m_val_attr;
        m_val_attr = NULL;
    }

}

void CT_TextLanguageID::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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

const CT_TextLanguageID& CT_TextLanguageID::default_instance()
{
    if (!CT_TextLanguageID::default_instance_)
    {
        CT_TextLanguageID::default_instance_ = new CT_TextLanguageID();
    }
    return *CT_TextLanguageID::default_instance_;
}

bool CT_TextLanguageID::has_val_attr() const
{
    return m_has_val_attr;
}

void CT_TextLanguageID::set_val_attr(const ns_s::ST_Lang& _val_attr)
{
    m_has_val_attr = true;
    m_val_attr = new ns_s::ST_Lang(_val_attr);
}

const ns_s::ST_Lang& CT_TextLanguageID::get_val_attr() const
{
    if (m_val_attr)
    {
        return *m_val_attr;
    }
    return ns_s::ST_Lang::default_instance();
}

CT_TextLanguageID* CT_TextLanguageID::default_instance_ = NULL;

// CT_Lvl
CT_Lvl::CT_Lvl()

{
}
CT_Lvl::~CT_Lvl()
{
    clear();
}
CT_StrVal* CT_Lvl::add_pt()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_StrVal* pNewChild = pChildGroup->mutable_pt();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

void CT_Lvl::clear()
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

void CT_Lvl::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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
            if ((*iter)->has_pt())
            {
                (*iter)->get_pt().toXmlElem("c:pt", "", _outStream);
            }


        }
    }

    _outStream << "</" << _elemName << ">";
}

const CT_Lvl& CT_Lvl::default_instance()
{
    if (!CT_Lvl::default_instance_)
    {
        CT_Lvl::default_instance_ = new CT_Lvl();
    }
    return *CT_Lvl::default_instance_;
}


// CT_Lvl::ChildGroup_1
CT_Lvl::ChildGroup_1::ChildGroup_1()
    :m_has_pt(false),
     m_pt(NULL)
{
}
bool CT_Lvl::ChildGroup_1::has_pt() const
{
    return m_has_pt;
}

CT_StrVal* CT_Lvl::ChildGroup_1::mutable_pt()
{

    m_has_pt = true;
    if (!m_pt)
    {
        m_pt = new CT_StrVal();
    }
    return m_pt;
}

const CT_StrVal& CT_Lvl::ChildGroup_1::get_pt() const
{
    if (m_pt)
    {
        return *m_pt;
    }
    return CT_StrVal::default_instance();
}

CT_Lvl* CT_Lvl::default_instance_ = NULL;

// CT_MultiLvlStrData
CT_MultiLvlStrData::CT_MultiLvlStrData()
    :m_has_ptCount(false),
     m_ptCount(NULL),
     m_has_extLst(false),
     m_extLst(NULL)
{
}
CT_MultiLvlStrData::~CT_MultiLvlStrData()
{
    clear();
}
bool CT_MultiLvlStrData::has_ptCount() const
{
    return m_has_ptCount;
}

CT_UnsignedInt* CT_MultiLvlStrData::mutable_ptCount()
{
    m_has_ptCount = true;
    if (!m_ptCount)
    {
        m_ptCount = new CT_UnsignedInt();
    }
    return m_ptCount;
}

const CT_UnsignedInt& CT_MultiLvlStrData::get_ptCount() const
{
    if (m_ptCount)
    {
        return *m_ptCount;
    }
    return CT_UnsignedInt::default_instance();
}

CT_Lvl* CT_MultiLvlStrData::add_lvl()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Lvl* pNewChild = pChildGroup->mutable_lvl();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

bool CT_MultiLvlStrData::has_extLst() const
{
    return m_has_extLst;
}

CT_ExtensionList* CT_MultiLvlStrData::mutable_extLst()
{
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new CT_ExtensionList();
    }
    return m_extLst;
}

const CT_ExtensionList& CT_MultiLvlStrData::get_extLst() const
{
    if (m_extLst)
    {
        return *m_extLst;
    }
    return CT_ExtensionList::default_instance();
}

void CT_MultiLvlStrData::clear()
{
    m_has_ptCount = false;

    if (m_ptCount)
    {
        delete m_ptCount;
        m_ptCount = NULL;
    }


    {
        vector<ChildGroup_1*>::iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_1.clear();
    }

    m_has_extLst = false;

    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }

}

void CT_MultiLvlStrData::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";


    if (m_has_ptCount)
    {
        m_ptCount->toXmlElem("c:ptCount", "", _outStream);
    }

    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_lvl())
            {
                (*iter)->get_lvl().toXmlElem("c:lvl", "", _outStream);
            }


        }
    }


    if (m_has_extLst)
    {
        m_extLst->toXmlElem("c:extLst", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_MultiLvlStrData& CT_MultiLvlStrData::default_instance()
{
    if (!CT_MultiLvlStrData::default_instance_)
    {
        CT_MultiLvlStrData::default_instance_ = new CT_MultiLvlStrData();
    }
    return *CT_MultiLvlStrData::default_instance_;
}


// CT_MultiLvlStrData::ChildGroup_1
CT_MultiLvlStrData::ChildGroup_1::ChildGroup_1()
    :m_has_lvl(false),
     m_lvl(NULL)
{
}
bool CT_MultiLvlStrData::ChildGroup_1::has_lvl() const
{
    return m_has_lvl;
}

CT_Lvl* CT_MultiLvlStrData::ChildGroup_1::mutable_lvl()
{

    m_has_lvl = true;
    if (!m_lvl)
    {
        m_lvl = new CT_Lvl();
    }
    return m_lvl;
}

const CT_Lvl& CT_MultiLvlStrData::ChildGroup_1::get_lvl() const
{
    if (m_lvl)
    {
        return *m_lvl;
    }
    return CT_Lvl::default_instance();
}

CT_MultiLvlStrData* CT_MultiLvlStrData::default_instance_ = NULL;

// CT_MultiLvlStrRef
CT_MultiLvlStrRef::CT_MultiLvlStrRef()
    :m_has_f(false),
     m_f(""),
     m_has_multiLvlStrCache(false),
     m_multiLvlStrCache(NULL),
     m_has_extLst(false),
     m_extLst(NULL)
{
}
CT_MultiLvlStrRef::~CT_MultiLvlStrRef()
{
    clear();
}
bool CT_MultiLvlStrRef::has_f() const
{
    return m_has_f;
}

void CT_MultiLvlStrRef::set_f(const XSD::string_& _f)
{
    m_has_f = true;
    m_f = _f;
}

const XSD::string_& CT_MultiLvlStrRef::get_f() const
{
    return m_f;
}

bool CT_MultiLvlStrRef::has_multiLvlStrCache() const
{
    return m_has_multiLvlStrCache;
}

CT_MultiLvlStrData* CT_MultiLvlStrRef::mutable_multiLvlStrCache()
{
    m_has_multiLvlStrCache = true;
    if (!m_multiLvlStrCache)
    {
        m_multiLvlStrCache = new CT_MultiLvlStrData();
    }
    return m_multiLvlStrCache;
}

const CT_MultiLvlStrData& CT_MultiLvlStrRef::get_multiLvlStrCache() const
{
    if (m_multiLvlStrCache)
    {
        return *m_multiLvlStrCache;
    }
    return CT_MultiLvlStrData::default_instance();
}

bool CT_MultiLvlStrRef::has_extLst() const
{
    return m_has_extLst;
}

CT_ExtensionList* CT_MultiLvlStrRef::mutable_extLst()
{
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new CT_ExtensionList();
    }
    return m_extLst;
}

const CT_ExtensionList& CT_MultiLvlStrRef::get_extLst() const
{
    if (m_extLst)
    {
        return *m_extLst;
    }
    return CT_ExtensionList::default_instance();
}

void CT_MultiLvlStrRef::clear()
{
    m_has_f = false;
    m_f.clear();

    m_has_multiLvlStrCache = false;

    if (m_multiLvlStrCache)
    {
        delete m_multiLvlStrCache;
        m_multiLvlStrCache = NULL;
    }


    m_has_extLst = false;

    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }

}

void CT_MultiLvlStrRef::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";

    assert(m_has_f);


    if (m_has_f)
    {
        _outStream << "<c:f>" << m_f << "</c:f>";
    }


    if (m_has_multiLvlStrCache)
    {
        m_multiLvlStrCache->toXmlElem("c:multiLvlStrCache", "", _outStream);
    }


    if (m_has_extLst)
    {
        m_extLst->toXmlElem("c:extLst", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_MultiLvlStrRef& CT_MultiLvlStrRef::default_instance()
{
    if (!CT_MultiLvlStrRef::default_instance_)
    {
        CT_MultiLvlStrRef::default_instance_ = new CT_MultiLvlStrRef();
    }
    return *CT_MultiLvlStrRef::default_instance_;
}

CT_MultiLvlStrRef* CT_MultiLvlStrRef::default_instance_ = NULL;

// CT_AxDataSource
CT_AxDataSource::CT_AxDataSource()
    :m_has_multiLvlStrRef(false),
     m_multiLvlStrRef(NULL),
     m_has_numRef(false),
     m_numRef(NULL),
     m_has_numLit(false),
     m_numLit(NULL),
     m_has_strRef(false),
     m_strRef(NULL),
     m_has_strLit(false),
     m_strLit(NULL)
{
}
CT_AxDataSource::~CT_AxDataSource()
{
    clear();
}
bool CT_AxDataSource::has_multiLvlStrRef() const
{
    return m_has_multiLvlStrRef;
}

CT_MultiLvlStrRef* CT_AxDataSource::mutable_multiLvlStrRef()
{

    m_has_numRef = false;

    if (m_numRef)
    {
        delete m_numRef;
        m_numRef = NULL;
    }
    ;

    m_has_numLit = false;

    if (m_numLit)
    {
        delete m_numLit;
        m_numLit = NULL;
    }
    ;

    m_has_strRef = false;

    if (m_strRef)
    {
        delete m_strRef;
        m_strRef = NULL;
    }
    ;

    m_has_strLit = false;

    if (m_strLit)
    {
        delete m_strLit;
        m_strLit = NULL;
    }
    ;

    m_has_multiLvlStrRef = true;
    if (!m_multiLvlStrRef)
    {
        m_multiLvlStrRef = new CT_MultiLvlStrRef();
    }
    return m_multiLvlStrRef;
}

const CT_MultiLvlStrRef& CT_AxDataSource::get_multiLvlStrRef() const
{
    if (m_multiLvlStrRef)
    {
        return *m_multiLvlStrRef;
    }
    return CT_MultiLvlStrRef::default_instance();
}

bool CT_AxDataSource::has_numRef() const
{
    return m_has_numRef;
}

CT_NumRef* CT_AxDataSource::mutable_numRef()
{

    m_has_multiLvlStrRef = false;

    if (m_multiLvlStrRef)
    {
        delete m_multiLvlStrRef;
        m_multiLvlStrRef = NULL;
    }
    ;

    m_has_numLit = false;

    if (m_numLit)
    {
        delete m_numLit;
        m_numLit = NULL;
    }
    ;

    m_has_strRef = false;

    if (m_strRef)
    {
        delete m_strRef;
        m_strRef = NULL;
    }
    ;

    m_has_strLit = false;

    if (m_strLit)
    {
        delete m_strLit;
        m_strLit = NULL;
    }
    ;

    m_has_numRef = true;
    if (!m_numRef)
    {
        m_numRef = new CT_NumRef();
    }
    return m_numRef;
}

const CT_NumRef& CT_AxDataSource::get_numRef() const
{
    if (m_numRef)
    {
        return *m_numRef;
    }
    return CT_NumRef::default_instance();
}

bool CT_AxDataSource::has_numLit() const
{
    return m_has_numLit;
}

CT_NumData* CT_AxDataSource::mutable_numLit()
{

    m_has_multiLvlStrRef = false;

    if (m_multiLvlStrRef)
    {
        delete m_multiLvlStrRef;
        m_multiLvlStrRef = NULL;
    }
    ;

    m_has_numRef = false;

    if (m_numRef)
    {
        delete m_numRef;
        m_numRef = NULL;
    }
    ;

    m_has_strRef = false;

    if (m_strRef)
    {
        delete m_strRef;
        m_strRef = NULL;
    }
    ;

    m_has_strLit = false;

    if (m_strLit)
    {
        delete m_strLit;
        m_strLit = NULL;
    }
    ;

    m_has_numLit = true;
    if (!m_numLit)
    {
        m_numLit = new CT_NumData();
    }
    return m_numLit;
}

const CT_NumData& CT_AxDataSource::get_numLit() const
{
    if (m_numLit)
    {
        return *m_numLit;
    }
    return CT_NumData::default_instance();
}

bool CT_AxDataSource::has_strRef() const
{
    return m_has_strRef;
}

CT_StrRef* CT_AxDataSource::mutable_strRef()
{

    m_has_multiLvlStrRef = false;

    if (m_multiLvlStrRef)
    {
        delete m_multiLvlStrRef;
        m_multiLvlStrRef = NULL;
    }
    ;

    m_has_numRef = false;

    if (m_numRef)
    {
        delete m_numRef;
        m_numRef = NULL;
    }
    ;

    m_has_numLit = false;

    if (m_numLit)
    {
        delete m_numLit;
        m_numLit = NULL;
    }
    ;

    m_has_strLit = false;

    if (m_strLit)
    {
        delete m_strLit;
        m_strLit = NULL;
    }
    ;

    m_has_strRef = true;
    if (!m_strRef)
    {
        m_strRef = new CT_StrRef();
    }
    return m_strRef;
}

const CT_StrRef& CT_AxDataSource::get_strRef() const
{
    if (m_strRef)
    {
        return *m_strRef;
    }
    return CT_StrRef::default_instance();
}

bool CT_AxDataSource::has_strLit() const
{
    return m_has_strLit;
}

CT_StrData* CT_AxDataSource::mutable_strLit()
{

    m_has_multiLvlStrRef = false;

    if (m_multiLvlStrRef)
    {
        delete m_multiLvlStrRef;
        m_multiLvlStrRef = NULL;
    }
    ;

    m_has_numRef = false;

    if (m_numRef)
    {
        delete m_numRef;
        m_numRef = NULL;
    }
    ;

    m_has_numLit = false;

    if (m_numLit)
    {
        delete m_numLit;
        m_numLit = NULL;
    }
    ;

    m_has_strRef = false;

    if (m_strRef)
    {
        delete m_strRef;
        m_strRef = NULL;
    }
    ;

    m_has_strLit = true;
    if (!m_strLit)
    {
        m_strLit = new CT_StrData();
    }
    return m_strLit;
}

const CT_StrData& CT_AxDataSource::get_strLit() const
{
    if (m_strLit)
    {
        return *m_strLit;
    }
    return CT_StrData::default_instance();
}

void CT_AxDataSource::clear()
{
    m_has_multiLvlStrRef = false;

    if (m_multiLvlStrRef)
    {
        delete m_multiLvlStrRef;
        m_multiLvlStrRef = NULL;
    }


    m_has_numRef = false;

    if (m_numRef)
    {
        delete m_numRef;
        m_numRef = NULL;
    }


    m_has_numLit = false;

    if (m_numLit)
    {
        delete m_numLit;
        m_numLit = NULL;
    }


    m_has_strRef = false;

    if (m_strRef)
    {
        delete m_strRef;
        m_strRef = NULL;
    }


    m_has_strLit = false;

    if (m_strLit)
    {
        delete m_strLit;
        m_strLit = NULL;
    }

}

void CT_AxDataSource::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";

    {
        bool elemHasValueList[5] = {m_has_multiLvlStrRef, m_has_numRef, m_has_numLit, m_has_strRef, m_has_strLit};
        int cnt = count(elemHasValueList, elemHasValueList + 5, true);
        assert(cnt == 1);
    }


    if (m_has_multiLvlStrRef)
    {
        m_multiLvlStrRef->toXmlElem("c:multiLvlStrRef", "", _outStream);
    }


    if (m_has_numRef)
    {
        m_numRef->toXmlElem("c:numRef", "", _outStream);
    }


    if (m_has_numLit)
    {
        m_numLit->toXmlElem("c:numLit", "", _outStream);
    }


    if (m_has_strRef)
    {
        m_strRef->toXmlElem("c:strRef", "", _outStream);
    }


    if (m_has_strLit)
    {
        m_strLit->toXmlElem("c:strLit", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_AxDataSource& CT_AxDataSource::default_instance()
{
    if (!CT_AxDataSource::default_instance_)
    {
        CT_AxDataSource::default_instance_ = new CT_AxDataSource();
    }
    return *CT_AxDataSource::default_instance_;
}

CT_AxDataSource* CT_AxDataSource::default_instance_ = NULL;

// CT_SerTx
CT_SerTx::CT_SerTx()
    :m_has_strRef(false),
     m_strRef(NULL),
     m_has_v(false),
     m_v(NULL)
{
}
CT_SerTx::~CT_SerTx()
{
    clear();
}
bool CT_SerTx::has_strRef() const
{
    return m_has_strRef;
}

CT_StrRef* CT_SerTx::mutable_strRef()
{

    m_has_v = false;

    if (m_v)
    {
        delete m_v;
        m_v = NULL;
    }
    ;

    m_has_strRef = true;
    if (!m_strRef)
    {
        m_strRef = new CT_StrRef();
    }
    return m_strRef;
}

const CT_StrRef& CT_SerTx::get_strRef() const
{
    if (m_strRef)
    {
        return *m_strRef;
    }
    return CT_StrRef::default_instance();
}

bool CT_SerTx::has_v() const
{
    return m_has_v;
}

ns_s::ST_Xstring* CT_SerTx::mutable_v()
{

    m_has_strRef = false;

    if (m_strRef)
    {
        delete m_strRef;
        m_strRef = NULL;
    }
    ;

    m_has_v = true;
    if (!m_v)
    {
        m_v = new ns_s::ST_Xstring();
    }
    return m_v;
}

const ns_s::ST_Xstring& CT_SerTx::get_v() const
{
    if (m_v)
    {
        return *m_v;
    }
    return ns_s::ST_Xstring::default_instance();
}

void CT_SerTx::clear()
{
    m_has_strRef = false;

    if (m_strRef)
    {
        delete m_strRef;
        m_strRef = NULL;
    }


    m_has_v = false;

    if (m_v)
    {
        delete m_v;
        m_v = NULL;
    }

}

void CT_SerTx::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";

    {
        bool elemHasValueList[2] = {m_has_strRef, m_has_v};
        int cnt = count(elemHasValueList, elemHasValueList + 2, true);
        assert(cnt == 1);
    }


    if (m_has_strRef)
    {
        m_strRef->toXmlElem("c:strRef", "", _outStream);
    }


    if (m_has_v)
    {
        _outStream << "<c:v>" << m_v->toString() << "</c:v>";
    }

    _outStream << "</" << _elemName << ">";
}

const CT_SerTx& CT_SerTx::default_instance()
{
    if (!CT_SerTx::default_instance_)
    {
        CT_SerTx::default_instance_ = new CT_SerTx();
    }
    return *CT_SerTx::default_instance_;
}

CT_SerTx* CT_SerTx::default_instance_ = NULL;

// CT_LayoutTarget
CT_LayoutTarget::CT_LayoutTarget()
    :m_has_val_attr(false),
     m_val_attr(NULL)
{
}
CT_LayoutTarget::~CT_LayoutTarget()
{
    clear();
}
void CT_LayoutTarget::clear()
{
    m_has_val_attr = false;

    if (m_val_attr)
    {
        delete m_val_attr;
        m_val_attr = NULL;
    }

}

void CT_LayoutTarget::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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

const CT_LayoutTarget& CT_LayoutTarget::default_instance()
{
    if (!CT_LayoutTarget::default_instance_)
    {
        CT_LayoutTarget::default_instance_ = new CT_LayoutTarget();
    }
    return *CT_LayoutTarget::default_instance_;
}

bool CT_LayoutTarget::has_val_attr() const
{
    return m_has_val_attr;
}

void CT_LayoutTarget::set_val_attr(const ST_LayoutTarget& _val_attr)
{
    m_has_val_attr = true;
    m_val_attr = new ST_LayoutTarget(_val_attr);
}

const ST_LayoutTarget& CT_LayoutTarget::get_val_attr() const
{
    if (m_val_attr)
    {
        return *m_val_attr;
    }
    return ST_LayoutTarget::default_instance();
}

CT_LayoutTarget* CT_LayoutTarget::default_instance_ = NULL;

// CT_LayoutMode
CT_LayoutMode::CT_LayoutMode()
    :m_has_val_attr(false),
     m_val_attr(NULL)
{
}
CT_LayoutMode::~CT_LayoutMode()
{
    clear();
}
void CT_LayoutMode::clear()
{
    m_has_val_attr = false;

    if (m_val_attr)
    {
        delete m_val_attr;
        m_val_attr = NULL;
    }

}

void CT_LayoutMode::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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

const CT_LayoutMode& CT_LayoutMode::default_instance()
{
    if (!CT_LayoutMode::default_instance_)
    {
        CT_LayoutMode::default_instance_ = new CT_LayoutMode();
    }
    return *CT_LayoutMode::default_instance_;
}

bool CT_LayoutMode::has_val_attr() const
{
    return m_has_val_attr;
}

void CT_LayoutMode::set_val_attr(const ST_LayoutMode& _val_attr)
{
    m_has_val_attr = true;
    m_val_attr = new ST_LayoutMode(_val_attr);
}

const ST_LayoutMode& CT_LayoutMode::get_val_attr() const
{
    if (m_val_attr)
    {
        return *m_val_attr;
    }
    return ST_LayoutMode::default_instance();
}

CT_LayoutMode* CT_LayoutMode::default_instance_ = NULL;

// CT_ManualLayout
CT_ManualLayout::CT_ManualLayout()
    :m_has_layoutTarget(false),
     m_layoutTarget(NULL),
     m_has_xMode(false),
     m_xMode(NULL),
     m_has_yMode(false),
     m_yMode(NULL),
     m_has_wMode(false),
     m_wMode(NULL),
     m_has_hMode(false),
     m_hMode(NULL),
     m_has_x(false),
     m_x(NULL),
     m_has_y(false),
     m_y(NULL),
     m_has_w(false),
     m_w(NULL),
     m_has_h(false),
     m_h(NULL),
     m_has_extLst(false),
     m_extLst(NULL)
{
}
CT_ManualLayout::~CT_ManualLayout()
{
    clear();
}
bool CT_ManualLayout::has_layoutTarget() const
{
    return m_has_layoutTarget;
}

CT_LayoutTarget* CT_ManualLayout::mutable_layoutTarget()
{
    m_has_layoutTarget = true;
    if (!m_layoutTarget)
    {
        m_layoutTarget = new CT_LayoutTarget();
    }
    return m_layoutTarget;
}

const CT_LayoutTarget& CT_ManualLayout::get_layoutTarget() const
{
    if (m_layoutTarget)
    {
        return *m_layoutTarget;
    }
    return CT_LayoutTarget::default_instance();
}

bool CT_ManualLayout::has_xMode() const
{
    return m_has_xMode;
}

CT_LayoutMode* CT_ManualLayout::mutable_xMode()
{
    m_has_xMode = true;
    if (!m_xMode)
    {
        m_xMode = new CT_LayoutMode();
    }
    return m_xMode;
}

const CT_LayoutMode& CT_ManualLayout::get_xMode() const
{
    if (m_xMode)
    {
        return *m_xMode;
    }
    return CT_LayoutMode::default_instance();
}

bool CT_ManualLayout::has_yMode() const
{
    return m_has_yMode;
}

CT_LayoutMode* CT_ManualLayout::mutable_yMode()
{
    m_has_yMode = true;
    if (!m_yMode)
    {
        m_yMode = new CT_LayoutMode();
    }
    return m_yMode;
}

const CT_LayoutMode& CT_ManualLayout::get_yMode() const
{
    if (m_yMode)
    {
        return *m_yMode;
    }
    return CT_LayoutMode::default_instance();
}

bool CT_ManualLayout::has_wMode() const
{
    return m_has_wMode;
}

CT_LayoutMode* CT_ManualLayout::mutable_wMode()
{
    m_has_wMode = true;
    if (!m_wMode)
    {
        m_wMode = new CT_LayoutMode();
    }
    return m_wMode;
}

const CT_LayoutMode& CT_ManualLayout::get_wMode() const
{
    if (m_wMode)
    {
        return *m_wMode;
    }
    return CT_LayoutMode::default_instance();
}

bool CT_ManualLayout::has_hMode() const
{
    return m_has_hMode;
}

CT_LayoutMode* CT_ManualLayout::mutable_hMode()
{
    m_has_hMode = true;
    if (!m_hMode)
    {
        m_hMode = new CT_LayoutMode();
    }
    return m_hMode;
}

const CT_LayoutMode& CT_ManualLayout::get_hMode() const
{
    if (m_hMode)
    {
        return *m_hMode;
    }
    return CT_LayoutMode::default_instance();
}

bool CT_ManualLayout::has_x() const
{
    return m_has_x;
}

CT_Double* CT_ManualLayout::mutable_x()
{
    m_has_x = true;
    if (!m_x)
    {
        m_x = new CT_Double();
    }
    return m_x;
}

const CT_Double& CT_ManualLayout::get_x() const
{
    if (m_x)
    {
        return *m_x;
    }
    return CT_Double::default_instance();
}

bool CT_ManualLayout::has_y() const
{
    return m_has_y;
}

CT_Double* CT_ManualLayout::mutable_y()
{
    m_has_y = true;
    if (!m_y)
    {
        m_y = new CT_Double();
    }
    return m_y;
}

const CT_Double& CT_ManualLayout::get_y() const
{
    if (m_y)
    {
        return *m_y;
    }
    return CT_Double::default_instance();
}

bool CT_ManualLayout::has_w() const
{
    return m_has_w;
}

CT_Double* CT_ManualLayout::mutable_w()
{
    m_has_w = true;
    if (!m_w)
    {
        m_w = new CT_Double();
    }
    return m_w;
}

const CT_Double& CT_ManualLayout::get_w() const
{
    if (m_w)
    {
        return *m_w;
    }
    return CT_Double::default_instance();
}

bool CT_ManualLayout::has_h() const
{
    return m_has_h;
}

CT_Double* CT_ManualLayout::mutable_h()
{
    m_has_h = true;
    if (!m_h)
    {
        m_h = new CT_Double();
    }
    return m_h;
}

const CT_Double& CT_ManualLayout::get_h() const
{
    if (m_h)
    {
        return *m_h;
    }
    return CT_Double::default_instance();
}

bool CT_ManualLayout::has_extLst() const
{
    return m_has_extLst;
}

CT_ExtensionList* CT_ManualLayout::mutable_extLst()
{
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new CT_ExtensionList();
    }
    return m_extLst;
}

const CT_ExtensionList& CT_ManualLayout::get_extLst() const
{
    if (m_extLst)
    {
        return *m_extLst;
    }
    return CT_ExtensionList::default_instance();
}

void CT_ManualLayout::clear()
{
    m_has_layoutTarget = false;

    if (m_layoutTarget)
    {
        delete m_layoutTarget;
        m_layoutTarget = NULL;
    }


    m_has_xMode = false;

    if (m_xMode)
    {
        delete m_xMode;
        m_xMode = NULL;
    }


    m_has_yMode = false;

    if (m_yMode)
    {
        delete m_yMode;
        m_yMode = NULL;
    }


    m_has_wMode = false;

    if (m_wMode)
    {
        delete m_wMode;
        m_wMode = NULL;
    }


    m_has_hMode = false;

    if (m_hMode)
    {
        delete m_hMode;
        m_hMode = NULL;
    }


    m_has_x = false;

    if (m_x)
    {
        delete m_x;
        m_x = NULL;
    }


    m_has_y = false;

    if (m_y)
    {
        delete m_y;
        m_y = NULL;
    }


    m_has_w = false;

    if (m_w)
    {
        delete m_w;
        m_w = NULL;
    }


    m_has_h = false;

    if (m_h)
    {
        delete m_h;
        m_h = NULL;
    }


    m_has_extLst = false;

    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }

}

void CT_ManualLayout::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";


    if (m_has_layoutTarget)
    {
        m_layoutTarget->toXmlElem("c:layoutTarget", "", _outStream);
    }


    if (m_has_xMode)
    {
        m_xMode->toXmlElem("c:xMode", "", _outStream);
    }


    if (m_has_yMode)
    {
        m_yMode->toXmlElem("c:yMode", "", _outStream);
    }


    if (m_has_wMode)
    {
        m_wMode->toXmlElem("c:wMode", "", _outStream);
    }


    if (m_has_hMode)
    {
        m_hMode->toXmlElem("c:hMode", "", _outStream);
    }


    if (m_has_x)
    {
        m_x->toXmlElem("c:x", "", _outStream);
    }


    if (m_has_y)
    {
        m_y->toXmlElem("c:y", "", _outStream);
    }


    if (m_has_w)
    {
        m_w->toXmlElem("c:w", "", _outStream);
    }


    if (m_has_h)
    {
        m_h->toXmlElem("c:h", "", _outStream);
    }


    if (m_has_extLst)
    {
        m_extLst->toXmlElem("c:extLst", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_ManualLayout& CT_ManualLayout::default_instance()
{
    if (!CT_ManualLayout::default_instance_)
    {
        CT_ManualLayout::default_instance_ = new CT_ManualLayout();
    }
    return *CT_ManualLayout::default_instance_;
}

CT_ManualLayout* CT_ManualLayout::default_instance_ = NULL;

// CT_Layout
CT_Layout::CT_Layout()
    :m_has_manualLayout(false),
     m_manualLayout(NULL),
     m_has_extLst(false),
     m_extLst(NULL)
{
}
CT_Layout::~CT_Layout()
{
    clear();
}
bool CT_Layout::has_manualLayout() const
{
    return m_has_manualLayout;
}

CT_ManualLayout* CT_Layout::mutable_manualLayout()
{
    m_has_manualLayout = true;
    if (!m_manualLayout)
    {
        m_manualLayout = new CT_ManualLayout();
    }
    return m_manualLayout;
}

const CT_ManualLayout& CT_Layout::get_manualLayout() const
{
    if (m_manualLayout)
    {
        return *m_manualLayout;
    }
    return CT_ManualLayout::default_instance();
}

bool CT_Layout::has_extLst() const
{
    return m_has_extLst;
}

CT_ExtensionList* CT_Layout::mutable_extLst()
{
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new CT_ExtensionList();
    }
    return m_extLst;
}

const CT_ExtensionList& CT_Layout::get_extLst() const
{
    if (m_extLst)
    {
        return *m_extLst;
    }
    return CT_ExtensionList::default_instance();
}

void CT_Layout::clear()
{
    m_has_manualLayout = false;

    if (m_manualLayout)
    {
        delete m_manualLayout;
        m_manualLayout = NULL;
    }


    m_has_extLst = false;

    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }

}

void CT_Layout::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";


    if (m_has_manualLayout)
    {
        m_manualLayout->toXmlElem("c:manualLayout", "", _outStream);
    }


    if (m_has_extLst)
    {
        m_extLst->toXmlElem("c:extLst", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_Layout& CT_Layout::default_instance()
{
    if (!CT_Layout::default_instance_)
    {
        CT_Layout::default_instance_ = new CT_Layout();
    }
    return *CT_Layout::default_instance_;
}

CT_Layout* CT_Layout::default_instance_ = NULL;

// CT_Title
CT_Title::CT_Title()
    :m_has_tx(false),
     m_tx(NULL),
     m_has_layout(false),
     m_layout(NULL),
     m_has_overlay(false),
     m_overlay(NULL),
     m_has_spPr(false),
     m_spPr(NULL),
     m_has_txPr(false),
     m_txPr(NULL),
     m_has_extLst(false),
     m_extLst(NULL)
{
}
CT_Title::~CT_Title()
{
    clear();
}
bool CT_Title::has_tx() const
{
    return m_has_tx;
}

CT_Tx* CT_Title::mutable_tx()
{
    m_has_tx = true;
    if (!m_tx)
    {
        m_tx = new CT_Tx();
    }
    return m_tx;
}

const CT_Tx& CT_Title::get_tx() const
{
    if (m_tx)
    {
        return *m_tx;
    }
    return CT_Tx::default_instance();
}

bool CT_Title::has_layout() const
{
    return m_has_layout;
}

CT_Layout* CT_Title::mutable_layout()
{
    m_has_layout = true;
    if (!m_layout)
    {
        m_layout = new CT_Layout();
    }
    return m_layout;
}

const CT_Layout& CT_Title::get_layout() const
{
    if (m_layout)
    {
        return *m_layout;
    }
    return CT_Layout::default_instance();
}

bool CT_Title::has_overlay() const
{
    return m_has_overlay;
}

CT_Boolean* CT_Title::mutable_overlay()
{
    m_has_overlay = true;
    if (!m_overlay)
    {
        m_overlay = new CT_Boolean();
    }
    return m_overlay;
}

const CT_Boolean& CT_Title::get_overlay() const
{
    if (m_overlay)
    {
        return *m_overlay;
    }
    return CT_Boolean::default_instance();
}

bool CT_Title::has_spPr() const
{
    return m_has_spPr;
}

ns_a::CT_ShapeProperties* CT_Title::mutable_spPr()
{
    m_has_spPr = true;
    if (!m_spPr)
    {
        m_spPr = new ns_a::CT_ShapeProperties();
    }
    return m_spPr;
}

const ns_a::CT_ShapeProperties& CT_Title::get_spPr() const
{
    if (m_spPr)
    {
        return *m_spPr;
    }
    return ns_a::CT_ShapeProperties::default_instance();
}

bool CT_Title::has_txPr() const
{
    return m_has_txPr;
}

ns_a::CT_TextBody* CT_Title::mutable_txPr()
{
    m_has_txPr = true;
    if (!m_txPr)
    {
        m_txPr = new ns_a::CT_TextBody();
    }
    return m_txPr;
}

const ns_a::CT_TextBody& CT_Title::get_txPr() const
{
    if (m_txPr)
    {
        return *m_txPr;
    }
    return ns_a::CT_TextBody::default_instance();
}

bool CT_Title::has_extLst() const
{
    return m_has_extLst;
}

CT_ExtensionList* CT_Title::mutable_extLst()
{
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new CT_ExtensionList();
    }
    return m_extLst;
}

const CT_ExtensionList& CT_Title::get_extLst() const
{
    if (m_extLst)
    {
        return *m_extLst;
    }
    return CT_ExtensionList::default_instance();
}

void CT_Title::clear()
{
    m_has_tx = false;

    if (m_tx)
    {
        delete m_tx;
        m_tx = NULL;
    }


    m_has_layout = false;

    if (m_layout)
    {
        delete m_layout;
        m_layout = NULL;
    }


    m_has_overlay = false;

    if (m_overlay)
    {
        delete m_overlay;
        m_overlay = NULL;
    }


    m_has_spPr = false;

    if (m_spPr)
    {
        delete m_spPr;
        m_spPr = NULL;
    }


    m_has_txPr = false;

    if (m_txPr)
    {
        delete m_txPr;
        m_txPr = NULL;
    }


    m_has_extLst = false;

    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }

}

void CT_Title::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";


    if (m_has_tx)
    {
        m_tx->toXmlElem("c:tx", "", _outStream);
    }


    if (m_has_layout)
    {
        m_layout->toXmlElem("c:layout", "", _outStream);
    }


    if (m_has_overlay)
    {
        m_overlay->toXmlElem("c:overlay", "", _outStream);
    }


    if (m_has_spPr)
    {
        m_spPr->toXmlElem("c:spPr", "", _outStream);
    }


    if (m_has_txPr)
    {
        m_txPr->toXmlElem("c:txPr", "", _outStream);
    }


    if (m_has_extLst)
    {
        m_extLst->toXmlElem("c:extLst", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_Title& CT_Title::default_instance()
{
    if (!CT_Title::default_instance_)
    {
        CT_Title::default_instance_ = new CT_Title();
    }
    return *CT_Title::default_instance_;
}

CT_Title* CT_Title::default_instance_ = NULL;

// CT_RotX
CT_RotX::CT_RotX()
    :m_has_val_attr(false),
     m_val_attr(NULL)
{
}
CT_RotX::~CT_RotX()
{
    clear();
}
void CT_RotX::clear()
{
    m_has_val_attr = false;

    if (m_val_attr)
    {
        delete m_val_attr;
        m_val_attr = NULL;
    }

}

void CT_RotX::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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

const CT_RotX& CT_RotX::default_instance()
{
    if (!CT_RotX::default_instance_)
    {
        CT_RotX::default_instance_ = new CT_RotX();
    }
    return *CT_RotX::default_instance_;
}

bool CT_RotX::has_val_attr() const
{
    return m_has_val_attr;
}

void CT_RotX::set_val_attr(const ST_RotX& _val_attr)
{
    m_has_val_attr = true;
    m_val_attr = new ST_RotX(_val_attr);
}

const ST_RotX& CT_RotX::get_val_attr() const
{
    if (m_val_attr)
    {
        return *m_val_attr;
    }
    return ST_RotX::default_instance();
}

CT_RotX* CT_RotX::default_instance_ = NULL;

// CT_HPercent
CT_HPercent::CT_HPercent()
    :m_has_val_attr(false),
     m_val_attr(NULL)
{
}
CT_HPercent::~CT_HPercent()
{
    clear();
}
void CT_HPercent::clear()
{
    m_has_val_attr = false;

    if (m_val_attr)
    {
        delete m_val_attr;
        m_val_attr = NULL;
    }

}

void CT_HPercent::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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

const CT_HPercent& CT_HPercent::default_instance()
{
    if (!CT_HPercent::default_instance_)
    {
        CT_HPercent::default_instance_ = new CT_HPercent();
    }
    return *CT_HPercent::default_instance_;
}

bool CT_HPercent::has_val_attr() const
{
    return m_has_val_attr;
}

void CT_HPercent::set_val_attr(const ST_HPercent& _val_attr)
{
    m_has_val_attr = true;
    m_val_attr = new ST_HPercent(_val_attr);
}

const ST_HPercent& CT_HPercent::get_val_attr() const
{
    if (m_val_attr)
    {
        return *m_val_attr;
    }
    return ST_HPercent::default_instance();
}

CT_HPercent* CT_HPercent::default_instance_ = NULL;

// CT_RotY
CT_RotY::CT_RotY()
    :m_has_val_attr(false),
     m_val_attr(NULL)
{
}
CT_RotY::~CT_RotY()
{
    clear();
}
void CT_RotY::clear()
{
    m_has_val_attr = false;

    if (m_val_attr)
    {
        delete m_val_attr;
        m_val_attr = NULL;
    }

}

void CT_RotY::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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

const CT_RotY& CT_RotY::default_instance()
{
    if (!CT_RotY::default_instance_)
    {
        CT_RotY::default_instance_ = new CT_RotY();
    }
    return *CT_RotY::default_instance_;
}

bool CT_RotY::has_val_attr() const
{
    return m_has_val_attr;
}

void CT_RotY::set_val_attr(const ST_RotY& _val_attr)
{
    m_has_val_attr = true;
    m_val_attr = new ST_RotY(_val_attr);
}

const ST_RotY& CT_RotY::get_val_attr() const
{
    if (m_val_attr)
    {
        return *m_val_attr;
    }
    return ST_RotY::default_instance();
}

CT_RotY* CT_RotY::default_instance_ = NULL;

// CT_DepthPercent
CT_DepthPercent::CT_DepthPercent()
    :m_has_val_attr(false),
     m_val_attr(NULL)
{
}
CT_DepthPercent::~CT_DepthPercent()
{
    clear();
}
void CT_DepthPercent::clear()
{
    m_has_val_attr = false;

    if (m_val_attr)
    {
        delete m_val_attr;
        m_val_attr = NULL;
    }

}

void CT_DepthPercent::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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

const CT_DepthPercent& CT_DepthPercent::default_instance()
{
    if (!CT_DepthPercent::default_instance_)
    {
        CT_DepthPercent::default_instance_ = new CT_DepthPercent();
    }
    return *CT_DepthPercent::default_instance_;
}

bool CT_DepthPercent::has_val_attr() const
{
    return m_has_val_attr;
}

void CT_DepthPercent::set_val_attr(const ST_DepthPercent& _val_attr)
{
    m_has_val_attr = true;
    m_val_attr = new ST_DepthPercent(_val_attr);
}

const ST_DepthPercent& CT_DepthPercent::get_val_attr() const
{
    if (m_val_attr)
    {
        return *m_val_attr;
    }
    return ST_DepthPercent::default_instance();
}

CT_DepthPercent* CT_DepthPercent::default_instance_ = NULL;

// CT_Perspective
CT_Perspective::CT_Perspective()
    :m_has_val_attr(false),
     m_val_attr(NULL)
{
}
CT_Perspective::~CT_Perspective()
{
    clear();
}
void CT_Perspective::clear()
{
    m_has_val_attr = false;

    if (m_val_attr)
    {
        delete m_val_attr;
        m_val_attr = NULL;
    }

}

void CT_Perspective::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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

const CT_Perspective& CT_Perspective::default_instance()
{
    if (!CT_Perspective::default_instance_)
    {
        CT_Perspective::default_instance_ = new CT_Perspective();
    }
    return *CT_Perspective::default_instance_;
}

bool CT_Perspective::has_val_attr() const
{
    return m_has_val_attr;
}

void CT_Perspective::set_val_attr(const ST_Perspective& _val_attr)
{
    m_has_val_attr = true;
    m_val_attr = new ST_Perspective(_val_attr);
}

const ST_Perspective& CT_Perspective::get_val_attr() const
{
    if (m_val_attr)
    {
        return *m_val_attr;
    }
    return ST_Perspective::default_instance();
}

CT_Perspective* CT_Perspective::default_instance_ = NULL;

// CT_View3D
CT_View3D::CT_View3D()
    :m_has_rotX(false),
     m_rotX(NULL),
     m_has_hPercent(false),
     m_hPercent(NULL),
     m_has_rotY(false),
     m_rotY(NULL),
     m_has_depthPercent(false),
     m_depthPercent(NULL),
     m_has_rAngAx(false),
     m_rAngAx(NULL),
     m_has_perspective(false),
     m_perspective(NULL),
     m_has_extLst(false),
     m_extLst(NULL)
{
}
CT_View3D::~CT_View3D()
{
    clear();
}
bool CT_View3D::has_rotX() const
{
    return m_has_rotX;
}

CT_RotX* CT_View3D::mutable_rotX()
{
    m_has_rotX = true;
    if (!m_rotX)
    {
        m_rotX = new CT_RotX();
    }
    return m_rotX;
}

const CT_RotX& CT_View3D::get_rotX() const
{
    if (m_rotX)
    {
        return *m_rotX;
    }
    return CT_RotX::default_instance();
}

bool CT_View3D::has_hPercent() const
{
    return m_has_hPercent;
}

CT_HPercent* CT_View3D::mutable_hPercent()
{
    m_has_hPercent = true;
    if (!m_hPercent)
    {
        m_hPercent = new CT_HPercent();
    }
    return m_hPercent;
}

const CT_HPercent& CT_View3D::get_hPercent() const
{
    if (m_hPercent)
    {
        return *m_hPercent;
    }
    return CT_HPercent::default_instance();
}

bool CT_View3D::has_rotY() const
{
    return m_has_rotY;
}

CT_RotY* CT_View3D::mutable_rotY()
{
    m_has_rotY = true;
    if (!m_rotY)
    {
        m_rotY = new CT_RotY();
    }
    return m_rotY;
}

const CT_RotY& CT_View3D::get_rotY() const
{
    if (m_rotY)
    {
        return *m_rotY;
    }
    return CT_RotY::default_instance();
}

bool CT_View3D::has_depthPercent() const
{
    return m_has_depthPercent;
}

CT_DepthPercent* CT_View3D::mutable_depthPercent()
{
    m_has_depthPercent = true;
    if (!m_depthPercent)
    {
        m_depthPercent = new CT_DepthPercent();
    }
    return m_depthPercent;
}

const CT_DepthPercent& CT_View3D::get_depthPercent() const
{
    if (m_depthPercent)
    {
        return *m_depthPercent;
    }
    return CT_DepthPercent::default_instance();
}

bool CT_View3D::has_rAngAx() const
{
    return m_has_rAngAx;
}

CT_Boolean* CT_View3D::mutable_rAngAx()
{
    m_has_rAngAx = true;
    if (!m_rAngAx)
    {
        m_rAngAx = new CT_Boolean();
    }
    return m_rAngAx;
}

const CT_Boolean& CT_View3D::get_rAngAx() const
{
    if (m_rAngAx)
    {
        return *m_rAngAx;
    }
    return CT_Boolean::default_instance();
}

bool CT_View3D::has_perspective() const
{
    return m_has_perspective;
}

CT_Perspective* CT_View3D::mutable_perspective()
{
    m_has_perspective = true;
    if (!m_perspective)
    {
        m_perspective = new CT_Perspective();
    }
    return m_perspective;
}

const CT_Perspective& CT_View3D::get_perspective() const
{
    if (m_perspective)
    {
        return *m_perspective;
    }
    return CT_Perspective::default_instance();
}

bool CT_View3D::has_extLst() const
{
    return m_has_extLst;
}

CT_ExtensionList* CT_View3D::mutable_extLst()
{
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new CT_ExtensionList();
    }
    return m_extLst;
}

const CT_ExtensionList& CT_View3D::get_extLst() const
{
    if (m_extLst)
    {
        return *m_extLst;
    }
    return CT_ExtensionList::default_instance();
}

void CT_View3D::clear()
{
    m_has_rotX = false;

    if (m_rotX)
    {
        delete m_rotX;
        m_rotX = NULL;
    }


    m_has_hPercent = false;

    if (m_hPercent)
    {
        delete m_hPercent;
        m_hPercent = NULL;
    }


    m_has_rotY = false;

    if (m_rotY)
    {
        delete m_rotY;
        m_rotY = NULL;
    }


    m_has_depthPercent = false;

    if (m_depthPercent)
    {
        delete m_depthPercent;
        m_depthPercent = NULL;
    }


    m_has_rAngAx = false;

    if (m_rAngAx)
    {
        delete m_rAngAx;
        m_rAngAx = NULL;
    }


    m_has_perspective = false;

    if (m_perspective)
    {
        delete m_perspective;
        m_perspective = NULL;
    }


    m_has_extLst = false;

    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }

}

void CT_View3D::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";


    if (m_has_rotX)
    {
        m_rotX->toXmlElem("c:rotX", "", _outStream);
    }


    if (m_has_hPercent)
    {
        m_hPercent->toXmlElem("c:hPercent", "", _outStream);
    }


    if (m_has_rotY)
    {
        m_rotY->toXmlElem("c:rotY", "", _outStream);
    }


    if (m_has_depthPercent)
    {
        m_depthPercent->toXmlElem("c:depthPercent", "", _outStream);
    }


    if (m_has_rAngAx)
    {
        m_rAngAx->toXmlElem("c:rAngAx", "", _outStream);
    }


    if (m_has_perspective)
    {
        m_perspective->toXmlElem("c:perspective", "", _outStream);
    }


    if (m_has_extLst)
    {
        m_extLst->toXmlElem("c:extLst", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_View3D& CT_View3D::default_instance()
{
    if (!CT_View3D::default_instance_)
    {
        CT_View3D::default_instance_ = new CT_View3D();
    }
    return *CT_View3D::default_instance_;
}

CT_View3D* CT_View3D::default_instance_ = NULL;

// CT_Surface
CT_Surface::CT_Surface()
    :m_has_thickness(false),
     m_thickness(NULL),
     m_has_spPr(false),
     m_spPr(NULL),
     m_has_pictureOptions(false),
     m_pictureOptions(NULL),
     m_has_extLst(false),
     m_extLst(NULL)
{
}
CT_Surface::~CT_Surface()
{
    clear();
}
bool CT_Surface::has_thickness() const
{
    return m_has_thickness;
}

CT_Thickness* CT_Surface::mutable_thickness()
{
    m_has_thickness = true;
    if (!m_thickness)
    {
        m_thickness = new CT_Thickness();
    }
    return m_thickness;
}

const CT_Thickness& CT_Surface::get_thickness() const
{
    if (m_thickness)
    {
        return *m_thickness;
    }
    return CT_Thickness::default_instance();
}

bool CT_Surface::has_spPr() const
{
    return m_has_spPr;
}

ns_a::CT_ShapeProperties* CT_Surface::mutable_spPr()
{
    m_has_spPr = true;
    if (!m_spPr)
    {
        m_spPr = new ns_a::CT_ShapeProperties();
    }
    return m_spPr;
}

const ns_a::CT_ShapeProperties& CT_Surface::get_spPr() const
{
    if (m_spPr)
    {
        return *m_spPr;
    }
    return ns_a::CT_ShapeProperties::default_instance();
}

bool CT_Surface::has_pictureOptions() const
{
    return m_has_pictureOptions;
}

CT_PictureOptions* CT_Surface::mutable_pictureOptions()
{
    m_has_pictureOptions = true;
    if (!m_pictureOptions)
    {
        m_pictureOptions = new CT_PictureOptions();
    }
    return m_pictureOptions;
}

const CT_PictureOptions& CT_Surface::get_pictureOptions() const
{
    if (m_pictureOptions)
    {
        return *m_pictureOptions;
    }
    return CT_PictureOptions::default_instance();
}

bool CT_Surface::has_extLst() const
{
    return m_has_extLst;
}

CT_ExtensionList* CT_Surface::mutable_extLst()
{
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new CT_ExtensionList();
    }
    return m_extLst;
}

const CT_ExtensionList& CT_Surface::get_extLst() const
{
    if (m_extLst)
    {
        return *m_extLst;
    }
    return CT_ExtensionList::default_instance();
}

void CT_Surface::clear()
{
    m_has_thickness = false;

    if (m_thickness)
    {
        delete m_thickness;
        m_thickness = NULL;
    }


    m_has_spPr = false;

    if (m_spPr)
    {
        delete m_spPr;
        m_spPr = NULL;
    }


    m_has_pictureOptions = false;

    if (m_pictureOptions)
    {
        delete m_pictureOptions;
        m_pictureOptions = NULL;
    }


    m_has_extLst = false;

    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }

}

void CT_Surface::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";


    if (m_has_thickness)
    {
        m_thickness->toXmlElem("c:thickness", "", _outStream);
    }


    if (m_has_spPr)
    {
        m_spPr->toXmlElem("c:spPr", "", _outStream);
    }


    if (m_has_pictureOptions)
    {
        m_pictureOptions->toXmlElem("c:pictureOptions", "", _outStream);
    }


    if (m_has_extLst)
    {
        m_extLst->toXmlElem("c:extLst", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_Surface& CT_Surface::default_instance()
{
    if (!CT_Surface::default_instance_)
    {
        CT_Surface::default_instance_ = new CT_Surface();
    }
    return *CT_Surface::default_instance_;
}

CT_Surface* CT_Surface::default_instance_ = NULL;

// CT_Thickness
CT_Thickness::CT_Thickness()
    :m_has_val_attr(false),
     m_val_attr(NULL)
{
}
CT_Thickness::~CT_Thickness()
{
    clear();
}
void CT_Thickness::clear()
{
    m_has_val_attr = false;

    if (m_val_attr)
    {
        delete m_val_attr;
        m_val_attr = NULL;
    }

}

void CT_Thickness::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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

const CT_Thickness& CT_Thickness::default_instance()
{
    if (!CT_Thickness::default_instance_)
    {
        CT_Thickness::default_instance_ = new CT_Thickness();
    }
    return *CT_Thickness::default_instance_;
}

bool CT_Thickness::has_val_attr() const
{
    return m_has_val_attr;
}

void CT_Thickness::set_val_attr(const ST_Thickness& _val_attr)
{
    m_has_val_attr = true;
    m_val_attr = new ST_Thickness(_val_attr);
}

const ST_Thickness& CT_Thickness::get_val_attr() const
{
    if (m_val_attr)
    {
        return *m_val_attr;
    }
    return ST_Thickness::default_instance();
}

CT_Thickness* CT_Thickness::default_instance_ = NULL;

// CT_DTable
CT_DTable::CT_DTable()
    :m_has_showHorzBorder(false),
     m_showHorzBorder(NULL),
     m_has_showVertBorder(false),
     m_showVertBorder(NULL),
     m_has_showOutline(false),
     m_showOutline(NULL),
     m_has_showKeys(false),
     m_showKeys(NULL),
     m_has_spPr(false),
     m_spPr(NULL),
     m_has_txPr(false),
     m_txPr(NULL),
     m_has_extLst(false),
     m_extLst(NULL)
{
}
CT_DTable::~CT_DTable()
{
    clear();
}
bool CT_DTable::has_showHorzBorder() const
{
    return m_has_showHorzBorder;
}

CT_Boolean* CT_DTable::mutable_showHorzBorder()
{
    m_has_showHorzBorder = true;
    if (!m_showHorzBorder)
    {
        m_showHorzBorder = new CT_Boolean();
    }
    return m_showHorzBorder;
}

const CT_Boolean& CT_DTable::get_showHorzBorder() const
{
    if (m_showHorzBorder)
    {
        return *m_showHorzBorder;
    }
    return CT_Boolean::default_instance();
}

bool CT_DTable::has_showVertBorder() const
{
    return m_has_showVertBorder;
}

CT_Boolean* CT_DTable::mutable_showVertBorder()
{
    m_has_showVertBorder = true;
    if (!m_showVertBorder)
    {
        m_showVertBorder = new CT_Boolean();
    }
    return m_showVertBorder;
}

const CT_Boolean& CT_DTable::get_showVertBorder() const
{
    if (m_showVertBorder)
    {
        return *m_showVertBorder;
    }
    return CT_Boolean::default_instance();
}

bool CT_DTable::has_showOutline() const
{
    return m_has_showOutline;
}

CT_Boolean* CT_DTable::mutable_showOutline()
{
    m_has_showOutline = true;
    if (!m_showOutline)
    {
        m_showOutline = new CT_Boolean();
    }
    return m_showOutline;
}

const CT_Boolean& CT_DTable::get_showOutline() const
{
    if (m_showOutline)
    {
        return *m_showOutline;
    }
    return CT_Boolean::default_instance();
}

bool CT_DTable::has_showKeys() const
{
    return m_has_showKeys;
}

CT_Boolean* CT_DTable::mutable_showKeys()
{
    m_has_showKeys = true;
    if (!m_showKeys)
    {
        m_showKeys = new CT_Boolean();
    }
    return m_showKeys;
}

const CT_Boolean& CT_DTable::get_showKeys() const
{
    if (m_showKeys)
    {
        return *m_showKeys;
    }
    return CT_Boolean::default_instance();
}

bool CT_DTable::has_spPr() const
{
    return m_has_spPr;
}

ns_a::CT_ShapeProperties* CT_DTable::mutable_spPr()
{
    m_has_spPr = true;
    if (!m_spPr)
    {
        m_spPr = new ns_a::CT_ShapeProperties();
    }
    return m_spPr;
}

const ns_a::CT_ShapeProperties& CT_DTable::get_spPr() const
{
    if (m_spPr)
    {
        return *m_spPr;
    }
    return ns_a::CT_ShapeProperties::default_instance();
}

bool CT_DTable::has_txPr() const
{
    return m_has_txPr;
}

ns_a::CT_TextBody* CT_DTable::mutable_txPr()
{
    m_has_txPr = true;
    if (!m_txPr)
    {
        m_txPr = new ns_a::CT_TextBody();
    }
    return m_txPr;
}

const ns_a::CT_TextBody& CT_DTable::get_txPr() const
{
    if (m_txPr)
    {
        return *m_txPr;
    }
    return ns_a::CT_TextBody::default_instance();
}

bool CT_DTable::has_extLst() const
{
    return m_has_extLst;
}

CT_ExtensionList* CT_DTable::mutable_extLst()
{
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new CT_ExtensionList();
    }
    return m_extLst;
}

const CT_ExtensionList& CT_DTable::get_extLst() const
{
    if (m_extLst)
    {
        return *m_extLst;
    }
    return CT_ExtensionList::default_instance();
}

void CT_DTable::clear()
{
    m_has_showHorzBorder = false;

    if (m_showHorzBorder)
    {
        delete m_showHorzBorder;
        m_showHorzBorder = NULL;
    }


    m_has_showVertBorder = false;

    if (m_showVertBorder)
    {
        delete m_showVertBorder;
        m_showVertBorder = NULL;
    }


    m_has_showOutline = false;

    if (m_showOutline)
    {
        delete m_showOutline;
        m_showOutline = NULL;
    }


    m_has_showKeys = false;

    if (m_showKeys)
    {
        delete m_showKeys;
        m_showKeys = NULL;
    }


    m_has_spPr = false;

    if (m_spPr)
    {
        delete m_spPr;
        m_spPr = NULL;
    }


    m_has_txPr = false;

    if (m_txPr)
    {
        delete m_txPr;
        m_txPr = NULL;
    }


    m_has_extLst = false;

    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }

}

void CT_DTable::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";


    if (m_has_showHorzBorder)
    {
        m_showHorzBorder->toXmlElem("c:showHorzBorder", "", _outStream);
    }


    if (m_has_showVertBorder)
    {
        m_showVertBorder->toXmlElem("c:showVertBorder", "", _outStream);
    }


    if (m_has_showOutline)
    {
        m_showOutline->toXmlElem("c:showOutline", "", _outStream);
    }


    if (m_has_showKeys)
    {
        m_showKeys->toXmlElem("c:showKeys", "", _outStream);
    }


    if (m_has_spPr)
    {
        m_spPr->toXmlElem("c:spPr", "", _outStream);
    }


    if (m_has_txPr)
    {
        m_txPr->toXmlElem("c:txPr", "", _outStream);
    }


    if (m_has_extLst)
    {
        m_extLst->toXmlElem("c:extLst", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_DTable& CT_DTable::default_instance()
{
    if (!CT_DTable::default_instance_)
    {
        CT_DTable::default_instance_ = new CT_DTable();
    }
    return *CT_DTable::default_instance_;
}

CT_DTable* CT_DTable::default_instance_ = NULL;

// CT_GapAmount
CT_GapAmount::CT_GapAmount()
    :m_has_val_attr(false),
     m_val_attr(NULL)
{
}
CT_GapAmount::~CT_GapAmount()
{
    clear();
}
void CT_GapAmount::clear()
{
    m_has_val_attr = false;

    if (m_val_attr)
    {
        delete m_val_attr;
        m_val_attr = NULL;
    }

}

void CT_GapAmount::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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

const CT_GapAmount& CT_GapAmount::default_instance()
{
    if (!CT_GapAmount::default_instance_)
    {
        CT_GapAmount::default_instance_ = new CT_GapAmount();
    }
    return *CT_GapAmount::default_instance_;
}

bool CT_GapAmount::has_val_attr() const
{
    return m_has_val_attr;
}

void CT_GapAmount::set_val_attr(const ST_GapAmount& _val_attr)
{
    m_has_val_attr = true;
    m_val_attr = new ST_GapAmount(_val_attr);
}

const ST_GapAmount& CT_GapAmount::get_val_attr() const
{
    if (m_val_attr)
    {
        return *m_val_attr;
    }
    return ST_GapAmount::default_instance();
}

CT_GapAmount* CT_GapAmount::default_instance_ = NULL;

// CT_Overlap
CT_Overlap::CT_Overlap()
    :m_has_val_attr(false),
     m_val_attr(NULL)
{
}
CT_Overlap::~CT_Overlap()
{
    clear();
}
void CT_Overlap::clear()
{
    m_has_val_attr = false;

    if (m_val_attr)
    {
        delete m_val_attr;
        m_val_attr = NULL;
    }

}

void CT_Overlap::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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

const CT_Overlap& CT_Overlap::default_instance()
{
    if (!CT_Overlap::default_instance_)
    {
        CT_Overlap::default_instance_ = new CT_Overlap();
    }
    return *CT_Overlap::default_instance_;
}

bool CT_Overlap::has_val_attr() const
{
    return m_has_val_attr;
}

void CT_Overlap::set_val_attr(const ST_Overlap& _val_attr)
{
    m_has_val_attr = true;
    m_val_attr = new ST_Overlap(_val_attr);
}

const ST_Overlap& CT_Overlap::get_val_attr() const
{
    if (m_val_attr)
    {
        return *m_val_attr;
    }
    return ST_Overlap::default_instance();
}

CT_Overlap* CT_Overlap::default_instance_ = NULL;

// CT_BubbleScale
CT_BubbleScale::CT_BubbleScale()
    :m_has_val_attr(false),
     m_val_attr(NULL)
{
}
CT_BubbleScale::~CT_BubbleScale()
{
    clear();
}
void CT_BubbleScale::clear()
{
    m_has_val_attr = false;

    if (m_val_attr)
    {
        delete m_val_attr;
        m_val_attr = NULL;
    }

}

void CT_BubbleScale::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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

const CT_BubbleScale& CT_BubbleScale::default_instance()
{
    if (!CT_BubbleScale::default_instance_)
    {
        CT_BubbleScale::default_instance_ = new CT_BubbleScale();
    }
    return *CT_BubbleScale::default_instance_;
}

bool CT_BubbleScale::has_val_attr() const
{
    return m_has_val_attr;
}

void CT_BubbleScale::set_val_attr(const ST_BubbleScale& _val_attr)
{
    m_has_val_attr = true;
    m_val_attr = new ST_BubbleScale(_val_attr);
}

const ST_BubbleScale& CT_BubbleScale::get_val_attr() const
{
    if (m_val_attr)
    {
        return *m_val_attr;
    }
    return ST_BubbleScale::default_instance();
}

CT_BubbleScale* CT_BubbleScale::default_instance_ = NULL;

// CT_SizeRepresents
CT_SizeRepresents::CT_SizeRepresents()
    :m_has_val_attr(false),
     m_val_attr(NULL)
{
}
CT_SizeRepresents::~CT_SizeRepresents()
{
    clear();
}
void CT_SizeRepresents::clear()
{
    m_has_val_attr = false;

    if (m_val_attr)
    {
        delete m_val_attr;
        m_val_attr = NULL;
    }

}

void CT_SizeRepresents::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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

const CT_SizeRepresents& CT_SizeRepresents::default_instance()
{
    if (!CT_SizeRepresents::default_instance_)
    {
        CT_SizeRepresents::default_instance_ = new CT_SizeRepresents();
    }
    return *CT_SizeRepresents::default_instance_;
}

bool CT_SizeRepresents::has_val_attr() const
{
    return m_has_val_attr;
}

void CT_SizeRepresents::set_val_attr(const ST_SizeRepresents& _val_attr)
{
    m_has_val_attr = true;
    m_val_attr = new ST_SizeRepresents(_val_attr);
}

const ST_SizeRepresents& CT_SizeRepresents::get_val_attr() const
{
    if (m_val_attr)
    {
        return *m_val_attr;
    }
    return ST_SizeRepresents::default_instance();
}

CT_SizeRepresents* CT_SizeRepresents::default_instance_ = NULL;

// CT_FirstSliceAng
CT_FirstSliceAng::CT_FirstSliceAng()
    :m_has_val_attr(false),
     m_val_attr(NULL)
{
}
CT_FirstSliceAng::~CT_FirstSliceAng()
{
    clear();
}
void CT_FirstSliceAng::clear()
{
    m_has_val_attr = false;

    if (m_val_attr)
    {
        delete m_val_attr;
        m_val_attr = NULL;
    }

}

void CT_FirstSliceAng::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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

const CT_FirstSliceAng& CT_FirstSliceAng::default_instance()
{
    if (!CT_FirstSliceAng::default_instance_)
    {
        CT_FirstSliceAng::default_instance_ = new CT_FirstSliceAng();
    }
    return *CT_FirstSliceAng::default_instance_;
}

bool CT_FirstSliceAng::has_val_attr() const
{
    return m_has_val_attr;
}

void CT_FirstSliceAng::set_val_attr(const ST_FirstSliceAng& _val_attr)
{
    m_has_val_attr = true;
    m_val_attr = new ST_FirstSliceAng(_val_attr);
}

const ST_FirstSliceAng& CT_FirstSliceAng::get_val_attr() const
{
    if (m_val_attr)
    {
        return *m_val_attr;
    }
    return ST_FirstSliceAng::default_instance();
}

CT_FirstSliceAng* CT_FirstSliceAng::default_instance_ = NULL;

// CT_HoleSize
CT_HoleSize::CT_HoleSize()
    :m_has_val_attr(false),
     m_val_attr(NULL)
{
}
CT_HoleSize::~CT_HoleSize()
{
    clear();
}
void CT_HoleSize::clear()
{
    m_has_val_attr = false;

    if (m_val_attr)
    {
        delete m_val_attr;
        m_val_attr = NULL;
    }

}

void CT_HoleSize::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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

const CT_HoleSize& CT_HoleSize::default_instance()
{
    if (!CT_HoleSize::default_instance_)
    {
        CT_HoleSize::default_instance_ = new CT_HoleSize();
    }
    return *CT_HoleSize::default_instance_;
}

bool CT_HoleSize::has_val_attr() const
{
    return m_has_val_attr;
}

void CT_HoleSize::set_val_attr(const ST_HoleSize& _val_attr)
{
    m_has_val_attr = true;
    m_val_attr = new ST_HoleSize(_val_attr);
}

const ST_HoleSize& CT_HoleSize::get_val_attr() const
{
    if (m_val_attr)
    {
        return *m_val_attr;
    }
    return ST_HoleSize::default_instance();
}

CT_HoleSize* CT_HoleSize::default_instance_ = NULL;

// CT_SplitType
CT_SplitType::CT_SplitType()
    :m_has_val_attr(false),
     m_val_attr(NULL)
{
}
CT_SplitType::~CT_SplitType()
{
    clear();
}
void CT_SplitType::clear()
{
    m_has_val_attr = false;

    if (m_val_attr)
    {
        delete m_val_attr;
        m_val_attr = NULL;
    }

}

void CT_SplitType::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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

const CT_SplitType& CT_SplitType::default_instance()
{
    if (!CT_SplitType::default_instance_)
    {
        CT_SplitType::default_instance_ = new CT_SplitType();
    }
    return *CT_SplitType::default_instance_;
}

bool CT_SplitType::has_val_attr() const
{
    return m_has_val_attr;
}

void CT_SplitType::set_val_attr(const ST_SplitType& _val_attr)
{
    m_has_val_attr = true;
    m_val_attr = new ST_SplitType(_val_attr);
}

const ST_SplitType& CT_SplitType::get_val_attr() const
{
    if (m_val_attr)
    {
        return *m_val_attr;
    }
    return ST_SplitType::default_instance();
}

CT_SplitType* CT_SplitType::default_instance_ = NULL;

// CT_CustSplit
CT_CustSplit::CT_CustSplit()

{
}
CT_CustSplit::~CT_CustSplit()
{
    clear();
}
CT_UnsignedInt* CT_CustSplit::add_secondPiePt()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_UnsignedInt* pNewChild = pChildGroup->mutable_secondPiePt();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

void CT_CustSplit::clear()
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

void CT_CustSplit::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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
            if ((*iter)->has_secondPiePt())
            {
                (*iter)->get_secondPiePt().toXmlElem("c:secondPiePt", "", _outStream);
            }


        }
    }

    _outStream << "</" << _elemName << ">";
}

const CT_CustSplit& CT_CustSplit::default_instance()
{
    if (!CT_CustSplit::default_instance_)
    {
        CT_CustSplit::default_instance_ = new CT_CustSplit();
    }
    return *CT_CustSplit::default_instance_;
}


// CT_CustSplit::ChildGroup_1
CT_CustSplit::ChildGroup_1::ChildGroup_1()
    :m_has_secondPiePt(false),
     m_secondPiePt(NULL)
{
}
bool CT_CustSplit::ChildGroup_1::has_secondPiePt() const
{
    return m_has_secondPiePt;
}

CT_UnsignedInt* CT_CustSplit::ChildGroup_1::mutable_secondPiePt()
{

    m_has_secondPiePt = true;
    if (!m_secondPiePt)
    {
        m_secondPiePt = new CT_UnsignedInt();
    }
    return m_secondPiePt;
}

const CT_UnsignedInt& CT_CustSplit::ChildGroup_1::get_secondPiePt() const
{
    if (m_secondPiePt)
    {
        return *m_secondPiePt;
    }
    return CT_UnsignedInt::default_instance();
}

CT_CustSplit* CT_CustSplit::default_instance_ = NULL;

// CT_SecondPieSize
CT_SecondPieSize::CT_SecondPieSize()
    :m_has_val_attr(false),
     m_val_attr(NULL)
{
}
CT_SecondPieSize::~CT_SecondPieSize()
{
    clear();
}
void CT_SecondPieSize::clear()
{
    m_has_val_attr = false;

    if (m_val_attr)
    {
        delete m_val_attr;
        m_val_attr = NULL;
    }

}

void CT_SecondPieSize::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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

const CT_SecondPieSize& CT_SecondPieSize::default_instance()
{
    if (!CT_SecondPieSize::default_instance_)
    {
        CT_SecondPieSize::default_instance_ = new CT_SecondPieSize();
    }
    return *CT_SecondPieSize::default_instance_;
}

bool CT_SecondPieSize::has_val_attr() const
{
    return m_has_val_attr;
}

void CT_SecondPieSize::set_val_attr(const ST_SecondPieSize& _val_attr)
{
    m_has_val_attr = true;
    m_val_attr = new ST_SecondPieSize(_val_attr);
}

const ST_SecondPieSize& CT_SecondPieSize::get_val_attr() const
{
    if (m_val_attr)
    {
        return *m_val_attr;
    }
    return ST_SecondPieSize::default_instance();
}

CT_SecondPieSize* CT_SecondPieSize::default_instance_ = NULL;

// CT_NumFmt
CT_NumFmt::CT_NumFmt()
    :m_has_formatCode_attr(false),
     m_formatCode_attr(NULL),
     m_has_sourceLinked_attr(false),
     m_sourceLinked_attr(false)
{
}
CT_NumFmt::~CT_NumFmt()
{
    clear();
}
void CT_NumFmt::clear()
{
    m_has_formatCode_attr = false;

    if (m_formatCode_attr)
    {
        delete m_formatCode_attr;
        m_formatCode_attr = NULL;
    }


    m_has_sourceLinked_attr = false;
    m_sourceLinked_attr = false;
}

void CT_NumFmt::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    assert(m_has_formatCode_attr);
    if (m_has_formatCode_attr)
    {
        m_formatCode_attr->toXmlAttr("formatCode", _outStream);
    }



    if (m_has_sourceLinked_attr)
    {
        _outStream << " " << "sourceLinked" << "=\"" << XSD::XMLBooleanStr(m_sourceLinked_attr) << "\"";
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_NumFmt& CT_NumFmt::default_instance()
{
    if (!CT_NumFmt::default_instance_)
    {
        CT_NumFmt::default_instance_ = new CT_NumFmt();
    }
    return *CT_NumFmt::default_instance_;
}

bool CT_NumFmt::has_formatCode_attr() const
{
    return m_has_formatCode_attr;
}

void CT_NumFmt::set_formatCode_attr(const ns_s::ST_Xstring& _formatCode_attr)
{
    m_has_formatCode_attr = true;
    m_formatCode_attr = new ns_s::ST_Xstring(_formatCode_attr);
}

const ns_s::ST_Xstring& CT_NumFmt::get_formatCode_attr() const
{
    if (m_formatCode_attr)
    {
        return *m_formatCode_attr;
    }
    return ns_s::ST_Xstring::default_instance();
}

bool CT_NumFmt::has_sourceLinked_attr() const
{
    return m_has_sourceLinked_attr;
}

void CT_NumFmt::set_sourceLinked_attr(const XSD::boolean_& _sourceLinked_attr)
{
    m_has_sourceLinked_attr = true;
    m_sourceLinked_attr = _sourceLinked_attr;
}

const XSD::boolean_& CT_NumFmt::get_sourceLinked_attr() const
{
    return m_sourceLinked_attr;
}

CT_NumFmt* CT_NumFmt::default_instance_ = NULL;

// CT_LblAlgn
CT_LblAlgn::CT_LblAlgn()
    :m_has_val_attr(false),
     m_val_attr(NULL)
{
}
CT_LblAlgn::~CT_LblAlgn()
{
    clear();
}
void CT_LblAlgn::clear()
{
    m_has_val_attr = false;

    if (m_val_attr)
    {
        delete m_val_attr;
        m_val_attr = NULL;
    }

}

void CT_LblAlgn::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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

const CT_LblAlgn& CT_LblAlgn::default_instance()
{
    if (!CT_LblAlgn::default_instance_)
    {
        CT_LblAlgn::default_instance_ = new CT_LblAlgn();
    }
    return *CT_LblAlgn::default_instance_;
}

bool CT_LblAlgn::has_val_attr() const
{
    return m_has_val_attr;
}

void CT_LblAlgn::set_val_attr(const ST_LblAlgn& _val_attr)
{
    m_has_val_attr = true;
    m_val_attr = new ST_LblAlgn(_val_attr);
}

const ST_LblAlgn& CT_LblAlgn::get_val_attr() const
{
    if (m_val_attr)
    {
        return *m_val_attr;
    }
    return ST_LblAlgn::default_instance();
}

CT_LblAlgn* CT_LblAlgn::default_instance_ = NULL;

// CT_DLblPos
CT_DLblPos::CT_DLblPos()
    :m_has_val_attr(false),
     m_val_attr(NULL)
{
}
CT_DLblPos::~CT_DLblPos()
{
    clear();
}
void CT_DLblPos::clear()
{
    m_has_val_attr = false;

    if (m_val_attr)
    {
        delete m_val_attr;
        m_val_attr = NULL;
    }

}

void CT_DLblPos::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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

const CT_DLblPos& CT_DLblPos::default_instance()
{
    if (!CT_DLblPos::default_instance_)
    {
        CT_DLblPos::default_instance_ = new CT_DLblPos();
    }
    return *CT_DLblPos::default_instance_;
}

bool CT_DLblPos::has_val_attr() const
{
    return m_has_val_attr;
}

void CT_DLblPos::set_val_attr(const ST_DLblPos& _val_attr)
{
    m_has_val_attr = true;
    m_val_attr = new ST_DLblPos(_val_attr);
}

const ST_DLblPos& CT_DLblPos::get_val_attr() const
{
    if (m_val_attr)
    {
        return *m_val_attr;
    }
    return ST_DLblPos::default_instance();
}

CT_DLblPos* CT_DLblPos::default_instance_ = NULL;

// CT_DLbl
CT_DLbl::CT_DLbl()
    :m_has_idx(false),
     m_idx(NULL),
     m_has_delete(false),
     m_delete(NULL),
     m_has_layout(false),
     m_layout(NULL),
     m_has_tx(false),
     m_tx(NULL),
     m_has_numFmt(false),
     m_numFmt(NULL),
     m_has_spPr(false),
     m_spPr(NULL),
     m_has_txPr(false),
     m_txPr(NULL),
     m_has_dLblPos(false),
     m_dLblPos(NULL),
     m_has_showLegendKey(false),
     m_showLegendKey(NULL),
     m_has_showVal(false),
     m_showVal(NULL),
     m_has_showCatName(false),
     m_showCatName(NULL),
     m_has_showSerName(false),
     m_showSerName(NULL),
     m_has_showPercent(false),
     m_showPercent(NULL),
     m_has_showBubbleSize(false),
     m_showBubbleSize(NULL),
     m_has_separator(false),
     m_separator(""),
     m_has_extLst(false),
     m_extLst(NULL)
{
}
CT_DLbl::~CT_DLbl()
{
    clear();
}
bool CT_DLbl::has_idx() const
{
    return m_has_idx;
}

CT_UnsignedInt* CT_DLbl::mutable_idx()
{
    m_has_idx = true;
    if (!m_idx)
    {
        m_idx = new CT_UnsignedInt();
    }
    return m_idx;
}

const CT_UnsignedInt& CT_DLbl::get_idx() const
{
    if (m_idx)
    {
        return *m_idx;
    }
    return CT_UnsignedInt::default_instance();
}

bool CT_DLbl::has_delete() const
{
    return m_has_delete;
}

CT_Boolean* CT_DLbl::mutable_delete()
{

    m_has_layout = false;

    if (m_layout)
    {
        delete m_layout;
        m_layout = NULL;
    }
    ;

    m_has_tx = false;

    if (m_tx)
    {
        delete m_tx;
        m_tx = NULL;
    }
    ;

    m_has_numFmt = false;

    if (m_numFmt)
    {
        delete m_numFmt;
        m_numFmt = NULL;
    }
    ;

    m_has_spPr = false;

    if (m_spPr)
    {
        delete m_spPr;
        m_spPr = NULL;
    }
    ;

    m_has_txPr = false;

    if (m_txPr)
    {
        delete m_txPr;
        m_txPr = NULL;
    }
    ;

    m_has_dLblPos = false;

    if (m_dLblPos)
    {
        delete m_dLblPos;
        m_dLblPos = NULL;
    }
    ;

    m_has_showLegendKey = false;

    if (m_showLegendKey)
    {
        delete m_showLegendKey;
        m_showLegendKey = NULL;
    }
    ;

    m_has_showVal = false;

    if (m_showVal)
    {
        delete m_showVal;
        m_showVal = NULL;
    }
    ;

    m_has_showCatName = false;

    if (m_showCatName)
    {
        delete m_showCatName;
        m_showCatName = NULL;
    }
    ;

    m_has_showSerName = false;

    if (m_showSerName)
    {
        delete m_showSerName;
        m_showSerName = NULL;
    }
    ;

    m_has_showPercent = false;

    if (m_showPercent)
    {
        delete m_showPercent;
        m_showPercent = NULL;
    }
    ;

    m_has_showBubbleSize = false;

    if (m_showBubbleSize)
    {
        delete m_showBubbleSize;
        m_showBubbleSize = NULL;
    }
    ;

    m_has_separator = false;
    m_separator.clear();;

    m_has_delete = true;
    if (!m_delete)
    {
        m_delete = new CT_Boolean();
    }
    return m_delete;
}

const CT_Boolean& CT_DLbl::get_delete() const
{
    if (m_delete)
    {
        return *m_delete;
    }
    return CT_Boolean::default_instance();
}

bool CT_DLbl::has_layout() const
{
    return m_has_layout;
}

CT_Layout* CT_DLbl::mutable_layout()
{

    m_has_delete = false;

    if (m_delete)
    {
        delete m_delete;
        m_delete = NULL;
    }
    ;

    m_has_tx = false;

    if (m_tx)
    {
        delete m_tx;
        m_tx = NULL;
    }
    ;

    m_has_numFmt = false;

    if (m_numFmt)
    {
        delete m_numFmt;
        m_numFmt = NULL;
    }
    ;

    m_has_spPr = false;

    if (m_spPr)
    {
        delete m_spPr;
        m_spPr = NULL;
    }
    ;

    m_has_txPr = false;

    if (m_txPr)
    {
        delete m_txPr;
        m_txPr = NULL;
    }
    ;

    m_has_dLblPos = false;

    if (m_dLblPos)
    {
        delete m_dLblPos;
        m_dLblPos = NULL;
    }
    ;

    m_has_showLegendKey = false;

    if (m_showLegendKey)
    {
        delete m_showLegendKey;
        m_showLegendKey = NULL;
    }
    ;

    m_has_showVal = false;

    if (m_showVal)
    {
        delete m_showVal;
        m_showVal = NULL;
    }
    ;

    m_has_showCatName = false;

    if (m_showCatName)
    {
        delete m_showCatName;
        m_showCatName = NULL;
    }
    ;

    m_has_showSerName = false;

    if (m_showSerName)
    {
        delete m_showSerName;
        m_showSerName = NULL;
    }
    ;

    m_has_showPercent = false;

    if (m_showPercent)
    {
        delete m_showPercent;
        m_showPercent = NULL;
    }
    ;

    m_has_showBubbleSize = false;

    if (m_showBubbleSize)
    {
        delete m_showBubbleSize;
        m_showBubbleSize = NULL;
    }
    ;

    m_has_separator = false;
    m_separator.clear();;

    m_has_layout = true;
    if (!m_layout)
    {
        m_layout = new CT_Layout();
    }
    return m_layout;
}

const CT_Layout& CT_DLbl::get_layout() const
{
    if (m_layout)
    {
        return *m_layout;
    }
    return CT_Layout::default_instance();
}

bool CT_DLbl::has_tx() const
{
    return m_has_tx;
}

CT_Tx* CT_DLbl::mutable_tx()
{

    m_has_delete = false;

    if (m_delete)
    {
        delete m_delete;
        m_delete = NULL;
    }
    ;

    m_has_layout = false;

    if (m_layout)
    {
        delete m_layout;
        m_layout = NULL;
    }
    ;

    m_has_numFmt = false;

    if (m_numFmt)
    {
        delete m_numFmt;
        m_numFmt = NULL;
    }
    ;

    m_has_spPr = false;

    if (m_spPr)
    {
        delete m_spPr;
        m_spPr = NULL;
    }
    ;

    m_has_txPr = false;

    if (m_txPr)
    {
        delete m_txPr;
        m_txPr = NULL;
    }
    ;

    m_has_dLblPos = false;

    if (m_dLblPos)
    {
        delete m_dLblPos;
        m_dLblPos = NULL;
    }
    ;

    m_has_showLegendKey = false;

    if (m_showLegendKey)
    {
        delete m_showLegendKey;
        m_showLegendKey = NULL;
    }
    ;

    m_has_showVal = false;

    if (m_showVal)
    {
        delete m_showVal;
        m_showVal = NULL;
    }
    ;

    m_has_showCatName = false;

    if (m_showCatName)
    {
        delete m_showCatName;
        m_showCatName = NULL;
    }
    ;

    m_has_showSerName = false;

    if (m_showSerName)
    {
        delete m_showSerName;
        m_showSerName = NULL;
    }
    ;

    m_has_showPercent = false;

    if (m_showPercent)
    {
        delete m_showPercent;
        m_showPercent = NULL;
    }
    ;

    m_has_showBubbleSize = false;

    if (m_showBubbleSize)
    {
        delete m_showBubbleSize;
        m_showBubbleSize = NULL;
    }
    ;

    m_has_separator = false;
    m_separator.clear();;

    m_has_tx = true;
    if (!m_tx)
    {
        m_tx = new CT_Tx();
    }
    return m_tx;
}

const CT_Tx& CT_DLbl::get_tx() const
{
    if (m_tx)
    {
        return *m_tx;
    }
    return CT_Tx::default_instance();
}

bool CT_DLbl::has_numFmt() const
{
    return m_has_numFmt;
}

CT_NumFmt* CT_DLbl::mutable_numFmt()
{

    m_has_delete = false;

    if (m_delete)
    {
        delete m_delete;
        m_delete = NULL;
    }
    ;

    m_has_layout = false;

    if (m_layout)
    {
        delete m_layout;
        m_layout = NULL;
    }
    ;

    m_has_tx = false;

    if (m_tx)
    {
        delete m_tx;
        m_tx = NULL;
    }
    ;

    m_has_spPr = false;

    if (m_spPr)
    {
        delete m_spPr;
        m_spPr = NULL;
    }
    ;

    m_has_txPr = false;

    if (m_txPr)
    {
        delete m_txPr;
        m_txPr = NULL;
    }
    ;

    m_has_dLblPos = false;

    if (m_dLblPos)
    {
        delete m_dLblPos;
        m_dLblPos = NULL;
    }
    ;

    m_has_showLegendKey = false;

    if (m_showLegendKey)
    {
        delete m_showLegendKey;
        m_showLegendKey = NULL;
    }
    ;

    m_has_showVal = false;

    if (m_showVal)
    {
        delete m_showVal;
        m_showVal = NULL;
    }
    ;

    m_has_showCatName = false;

    if (m_showCatName)
    {
        delete m_showCatName;
        m_showCatName = NULL;
    }
    ;

    m_has_showSerName = false;

    if (m_showSerName)
    {
        delete m_showSerName;
        m_showSerName = NULL;
    }
    ;

    m_has_showPercent = false;

    if (m_showPercent)
    {
        delete m_showPercent;
        m_showPercent = NULL;
    }
    ;

    m_has_showBubbleSize = false;

    if (m_showBubbleSize)
    {
        delete m_showBubbleSize;
        m_showBubbleSize = NULL;
    }
    ;

    m_has_separator = false;
    m_separator.clear();;

    m_has_numFmt = true;
    if (!m_numFmt)
    {
        m_numFmt = new CT_NumFmt();
    }
    return m_numFmt;
}

const CT_NumFmt& CT_DLbl::get_numFmt() const
{
    if (m_numFmt)
    {
        return *m_numFmt;
    }
    return CT_NumFmt::default_instance();
}

bool CT_DLbl::has_spPr() const
{
    return m_has_spPr;
}

ns_a::CT_ShapeProperties* CT_DLbl::mutable_spPr()
{

    m_has_delete = false;

    if (m_delete)
    {
        delete m_delete;
        m_delete = NULL;
    }
    ;

    m_has_layout = false;

    if (m_layout)
    {
        delete m_layout;
        m_layout = NULL;
    }
    ;

    m_has_tx = false;

    if (m_tx)
    {
        delete m_tx;
        m_tx = NULL;
    }
    ;

    m_has_numFmt = false;

    if (m_numFmt)
    {
        delete m_numFmt;
        m_numFmt = NULL;
    }
    ;

    m_has_txPr = false;

    if (m_txPr)
    {
        delete m_txPr;
        m_txPr = NULL;
    }
    ;

    m_has_dLblPos = false;

    if (m_dLblPos)
    {
        delete m_dLblPos;
        m_dLblPos = NULL;
    }
    ;

    m_has_showLegendKey = false;

    if (m_showLegendKey)
    {
        delete m_showLegendKey;
        m_showLegendKey = NULL;
    }
    ;

    m_has_showVal = false;

    if (m_showVal)
    {
        delete m_showVal;
        m_showVal = NULL;
    }
    ;

    m_has_showCatName = false;

    if (m_showCatName)
    {
        delete m_showCatName;
        m_showCatName = NULL;
    }
    ;

    m_has_showSerName = false;

    if (m_showSerName)
    {
        delete m_showSerName;
        m_showSerName = NULL;
    }
    ;

    m_has_showPercent = false;

    if (m_showPercent)
    {
        delete m_showPercent;
        m_showPercent = NULL;
    }
    ;

    m_has_showBubbleSize = false;

    if (m_showBubbleSize)
    {
        delete m_showBubbleSize;
        m_showBubbleSize = NULL;
    }
    ;

    m_has_separator = false;
    m_separator.clear();;

    m_has_spPr = true;
    if (!m_spPr)
    {
        m_spPr = new ns_a::CT_ShapeProperties();
    }
    return m_spPr;
}

const ns_a::CT_ShapeProperties& CT_DLbl::get_spPr() const
{
    if (m_spPr)
    {
        return *m_spPr;
    }
    return ns_a::CT_ShapeProperties::default_instance();
}

bool CT_DLbl::has_txPr() const
{
    return m_has_txPr;
}

ns_a::CT_TextBody* CT_DLbl::mutable_txPr()
{

    m_has_delete = false;

    if (m_delete)
    {
        delete m_delete;
        m_delete = NULL;
    }
    ;

    m_has_layout = false;

    if (m_layout)
    {
        delete m_layout;
        m_layout = NULL;
    }
    ;

    m_has_tx = false;

    if (m_tx)
    {
        delete m_tx;
        m_tx = NULL;
    }
    ;

    m_has_numFmt = false;

    if (m_numFmt)
    {
        delete m_numFmt;
        m_numFmt = NULL;
    }
    ;

    m_has_spPr = false;

    if (m_spPr)
    {
        delete m_spPr;
        m_spPr = NULL;
    }
    ;

    m_has_dLblPos = false;

    if (m_dLblPos)
    {
        delete m_dLblPos;
        m_dLblPos = NULL;
    }
    ;

    m_has_showLegendKey = false;

    if (m_showLegendKey)
    {
        delete m_showLegendKey;
        m_showLegendKey = NULL;
    }
    ;

    m_has_showVal = false;

    if (m_showVal)
    {
        delete m_showVal;
        m_showVal = NULL;
    }
    ;

    m_has_showCatName = false;

    if (m_showCatName)
    {
        delete m_showCatName;
        m_showCatName = NULL;
    }
    ;

    m_has_showSerName = false;

    if (m_showSerName)
    {
        delete m_showSerName;
        m_showSerName = NULL;
    }
    ;

    m_has_showPercent = false;

    if (m_showPercent)
    {
        delete m_showPercent;
        m_showPercent = NULL;
    }
    ;

    m_has_showBubbleSize = false;

    if (m_showBubbleSize)
    {
        delete m_showBubbleSize;
        m_showBubbleSize = NULL;
    }
    ;

    m_has_separator = false;
    m_separator.clear();;

    m_has_txPr = true;
    if (!m_txPr)
    {
        m_txPr = new ns_a::CT_TextBody();
    }
    return m_txPr;
}

const ns_a::CT_TextBody& CT_DLbl::get_txPr() const
{
    if (m_txPr)
    {
        return *m_txPr;
    }
    return ns_a::CT_TextBody::default_instance();
}

bool CT_DLbl::has_dLblPos() const
{
    return m_has_dLblPos;
}

CT_DLblPos* CT_DLbl::mutable_dLblPos()
{

    m_has_delete = false;

    if (m_delete)
    {
        delete m_delete;
        m_delete = NULL;
    }
    ;

    m_has_layout = false;

    if (m_layout)
    {
        delete m_layout;
        m_layout = NULL;
    }
    ;

    m_has_tx = false;

    if (m_tx)
    {
        delete m_tx;
        m_tx = NULL;
    }
    ;

    m_has_numFmt = false;

    if (m_numFmt)
    {
        delete m_numFmt;
        m_numFmt = NULL;
    }
    ;

    m_has_spPr = false;

    if (m_spPr)
    {
        delete m_spPr;
        m_spPr = NULL;
    }
    ;

    m_has_txPr = false;

    if (m_txPr)
    {
        delete m_txPr;
        m_txPr = NULL;
    }
    ;

    m_has_showLegendKey = false;

    if (m_showLegendKey)
    {
        delete m_showLegendKey;
        m_showLegendKey = NULL;
    }
    ;

    m_has_showVal = false;

    if (m_showVal)
    {
        delete m_showVal;
        m_showVal = NULL;
    }
    ;

    m_has_showCatName = false;

    if (m_showCatName)
    {
        delete m_showCatName;
        m_showCatName = NULL;
    }
    ;

    m_has_showSerName = false;

    if (m_showSerName)
    {
        delete m_showSerName;
        m_showSerName = NULL;
    }
    ;

    m_has_showPercent = false;

    if (m_showPercent)
    {
        delete m_showPercent;
        m_showPercent = NULL;
    }
    ;

    m_has_showBubbleSize = false;

    if (m_showBubbleSize)
    {
        delete m_showBubbleSize;
        m_showBubbleSize = NULL;
    }
    ;

    m_has_separator = false;
    m_separator.clear();;

    m_has_dLblPos = true;
    if (!m_dLblPos)
    {
        m_dLblPos = new CT_DLblPos();
    }
    return m_dLblPos;
}

const CT_DLblPos& CT_DLbl::get_dLblPos() const
{
    if (m_dLblPos)
    {
        return *m_dLblPos;
    }
    return CT_DLblPos::default_instance();
}

bool CT_DLbl::has_showLegendKey() const
{
    return m_has_showLegendKey;
}

CT_Boolean* CT_DLbl::mutable_showLegendKey()
{

    m_has_delete = false;

    if (m_delete)
    {
        delete m_delete;
        m_delete = NULL;
    }
    ;

    m_has_layout = false;

    if (m_layout)
    {
        delete m_layout;
        m_layout = NULL;
    }
    ;

    m_has_tx = false;

    if (m_tx)
    {
        delete m_tx;
        m_tx = NULL;
    }
    ;

    m_has_numFmt = false;

    if (m_numFmt)
    {
        delete m_numFmt;
        m_numFmt = NULL;
    }
    ;

    m_has_spPr = false;

    if (m_spPr)
    {
        delete m_spPr;
        m_spPr = NULL;
    }
    ;

    m_has_txPr = false;

    if (m_txPr)
    {
        delete m_txPr;
        m_txPr = NULL;
    }
    ;

    m_has_dLblPos = false;

    if (m_dLblPos)
    {
        delete m_dLblPos;
        m_dLblPos = NULL;
    }
    ;

    m_has_showVal = false;

    if (m_showVal)
    {
        delete m_showVal;
        m_showVal = NULL;
    }
    ;

    m_has_showCatName = false;

    if (m_showCatName)
    {
        delete m_showCatName;
        m_showCatName = NULL;
    }
    ;

    m_has_showSerName = false;

    if (m_showSerName)
    {
        delete m_showSerName;
        m_showSerName = NULL;
    }
    ;

    m_has_showPercent = false;

    if (m_showPercent)
    {
        delete m_showPercent;
        m_showPercent = NULL;
    }
    ;

    m_has_showBubbleSize = false;

    if (m_showBubbleSize)
    {
        delete m_showBubbleSize;
        m_showBubbleSize = NULL;
    }
    ;

    m_has_separator = false;
    m_separator.clear();;

    m_has_showLegendKey = true;
    if (!m_showLegendKey)
    {
        m_showLegendKey = new CT_Boolean();
    }
    return m_showLegendKey;
}

const CT_Boolean& CT_DLbl::get_showLegendKey() const
{
    if (m_showLegendKey)
    {
        return *m_showLegendKey;
    }
    return CT_Boolean::default_instance();
}

bool CT_DLbl::has_showVal() const
{
    return m_has_showVal;
}

CT_Boolean* CT_DLbl::mutable_showVal()
{

    m_has_delete = false;

    if (m_delete)
    {
        delete m_delete;
        m_delete = NULL;
    }
    ;

    m_has_layout = false;

    if (m_layout)
    {
        delete m_layout;
        m_layout = NULL;
    }
    ;

    m_has_tx = false;

    if (m_tx)
    {
        delete m_tx;
        m_tx = NULL;
    }
    ;

    m_has_numFmt = false;

    if (m_numFmt)
    {
        delete m_numFmt;
        m_numFmt = NULL;
    }
    ;

    m_has_spPr = false;

    if (m_spPr)
    {
        delete m_spPr;
        m_spPr = NULL;
    }
    ;

    m_has_txPr = false;

    if (m_txPr)
    {
        delete m_txPr;
        m_txPr = NULL;
    }
    ;

    m_has_dLblPos = false;

    if (m_dLblPos)
    {
        delete m_dLblPos;
        m_dLblPos = NULL;
    }
    ;

    m_has_showLegendKey = false;

    if (m_showLegendKey)
    {
        delete m_showLegendKey;
        m_showLegendKey = NULL;
    }
    ;

    m_has_showCatName = false;

    if (m_showCatName)
    {
        delete m_showCatName;
        m_showCatName = NULL;
    }
    ;

    m_has_showSerName = false;

    if (m_showSerName)
    {
        delete m_showSerName;
        m_showSerName = NULL;
    }
    ;

    m_has_showPercent = false;

    if (m_showPercent)
    {
        delete m_showPercent;
        m_showPercent = NULL;
    }
    ;

    m_has_showBubbleSize = false;

    if (m_showBubbleSize)
    {
        delete m_showBubbleSize;
        m_showBubbleSize = NULL;
    }
    ;

    m_has_separator = false;
    m_separator.clear();;

    m_has_showVal = true;
    if (!m_showVal)
    {
        m_showVal = new CT_Boolean();
    }
    return m_showVal;
}

const CT_Boolean& CT_DLbl::get_showVal() const
{
    if (m_showVal)
    {
        return *m_showVal;
    }
    return CT_Boolean::default_instance();
}

bool CT_DLbl::has_showCatName() const
{
    return m_has_showCatName;
}

CT_Boolean* CT_DLbl::mutable_showCatName()
{

    m_has_delete = false;

    if (m_delete)
    {
        delete m_delete;
        m_delete = NULL;
    }
    ;

    m_has_layout = false;

    if (m_layout)
    {
        delete m_layout;
        m_layout = NULL;
    }
    ;

    m_has_tx = false;

    if (m_tx)
    {
        delete m_tx;
        m_tx = NULL;
    }
    ;

    m_has_numFmt = false;

    if (m_numFmt)
    {
        delete m_numFmt;
        m_numFmt = NULL;
    }
    ;

    m_has_spPr = false;

    if (m_spPr)
    {
        delete m_spPr;
        m_spPr = NULL;
    }
    ;

    m_has_txPr = false;

    if (m_txPr)
    {
        delete m_txPr;
        m_txPr = NULL;
    }
    ;

    m_has_dLblPos = false;

    if (m_dLblPos)
    {
        delete m_dLblPos;
        m_dLblPos = NULL;
    }
    ;

    m_has_showLegendKey = false;

    if (m_showLegendKey)
    {
        delete m_showLegendKey;
        m_showLegendKey = NULL;
    }
    ;

    m_has_showVal = false;

    if (m_showVal)
    {
        delete m_showVal;
        m_showVal = NULL;
    }
    ;

    m_has_showSerName = false;

    if (m_showSerName)
    {
        delete m_showSerName;
        m_showSerName = NULL;
    }
    ;

    m_has_showPercent = false;

    if (m_showPercent)
    {
        delete m_showPercent;
        m_showPercent = NULL;
    }
    ;

    m_has_showBubbleSize = false;

    if (m_showBubbleSize)
    {
        delete m_showBubbleSize;
        m_showBubbleSize = NULL;
    }
    ;

    m_has_separator = false;
    m_separator.clear();;

    m_has_showCatName = true;
    if (!m_showCatName)
    {
        m_showCatName = new CT_Boolean();
    }
    return m_showCatName;
}

const CT_Boolean& CT_DLbl::get_showCatName() const
{
    if (m_showCatName)
    {
        return *m_showCatName;
    }
    return CT_Boolean::default_instance();
}

bool CT_DLbl::has_showSerName() const
{
    return m_has_showSerName;
}

CT_Boolean* CT_DLbl::mutable_showSerName()
{

    m_has_delete = false;

    if (m_delete)
    {
        delete m_delete;
        m_delete = NULL;
    }
    ;

    m_has_layout = false;

    if (m_layout)
    {
        delete m_layout;
        m_layout = NULL;
    }
    ;

    m_has_tx = false;

    if (m_tx)
    {
        delete m_tx;
        m_tx = NULL;
    }
    ;

    m_has_numFmt = false;

    if (m_numFmt)
    {
        delete m_numFmt;
        m_numFmt = NULL;
    }
    ;

    m_has_spPr = false;

    if (m_spPr)
    {
        delete m_spPr;
        m_spPr = NULL;
    }
    ;

    m_has_txPr = false;

    if (m_txPr)
    {
        delete m_txPr;
        m_txPr = NULL;
    }
    ;

    m_has_dLblPos = false;

    if (m_dLblPos)
    {
        delete m_dLblPos;
        m_dLblPos = NULL;
    }
    ;

    m_has_showLegendKey = false;

    if (m_showLegendKey)
    {
        delete m_showLegendKey;
        m_showLegendKey = NULL;
    }
    ;

    m_has_showVal = false;

    if (m_showVal)
    {
        delete m_showVal;
        m_showVal = NULL;
    }
    ;

    m_has_showCatName = false;

    if (m_showCatName)
    {
        delete m_showCatName;
        m_showCatName = NULL;
    }
    ;

    m_has_showPercent = false;

    if (m_showPercent)
    {
        delete m_showPercent;
        m_showPercent = NULL;
    }
    ;

    m_has_showBubbleSize = false;

    if (m_showBubbleSize)
    {
        delete m_showBubbleSize;
        m_showBubbleSize = NULL;
    }
    ;

    m_has_separator = false;
    m_separator.clear();;

    m_has_showSerName = true;
    if (!m_showSerName)
    {
        m_showSerName = new CT_Boolean();
    }
    return m_showSerName;
}

const CT_Boolean& CT_DLbl::get_showSerName() const
{
    if (m_showSerName)
    {
        return *m_showSerName;
    }
    return CT_Boolean::default_instance();
}

bool CT_DLbl::has_showPercent() const
{
    return m_has_showPercent;
}

CT_Boolean* CT_DLbl::mutable_showPercent()
{

    m_has_delete = false;

    if (m_delete)
    {
        delete m_delete;
        m_delete = NULL;
    }
    ;

    m_has_layout = false;

    if (m_layout)
    {
        delete m_layout;
        m_layout = NULL;
    }
    ;

    m_has_tx = false;

    if (m_tx)
    {
        delete m_tx;
        m_tx = NULL;
    }
    ;

    m_has_numFmt = false;

    if (m_numFmt)
    {
        delete m_numFmt;
        m_numFmt = NULL;
    }
    ;

    m_has_spPr = false;

    if (m_spPr)
    {
        delete m_spPr;
        m_spPr = NULL;
    }
    ;

    m_has_txPr = false;

    if (m_txPr)
    {
        delete m_txPr;
        m_txPr = NULL;
    }
    ;

    m_has_dLblPos = false;

    if (m_dLblPos)
    {
        delete m_dLblPos;
        m_dLblPos = NULL;
    }
    ;

    m_has_showLegendKey = false;

    if (m_showLegendKey)
    {
        delete m_showLegendKey;
        m_showLegendKey = NULL;
    }
    ;

    m_has_showVal = false;

    if (m_showVal)
    {
        delete m_showVal;
        m_showVal = NULL;
    }
    ;

    m_has_showCatName = false;

    if (m_showCatName)
    {
        delete m_showCatName;
        m_showCatName = NULL;
    }
    ;

    m_has_showSerName = false;

    if (m_showSerName)
    {
        delete m_showSerName;
        m_showSerName = NULL;
    }
    ;

    m_has_showBubbleSize = false;

    if (m_showBubbleSize)
    {
        delete m_showBubbleSize;
        m_showBubbleSize = NULL;
    }
    ;

    m_has_separator = false;
    m_separator.clear();;

    m_has_showPercent = true;
    if (!m_showPercent)
    {
        m_showPercent = new CT_Boolean();
    }
    return m_showPercent;
}

const CT_Boolean& CT_DLbl::get_showPercent() const
{
    if (m_showPercent)
    {
        return *m_showPercent;
    }
    return CT_Boolean::default_instance();
}

bool CT_DLbl::has_showBubbleSize() const
{
    return m_has_showBubbleSize;
}

CT_Boolean* CT_DLbl::mutable_showBubbleSize()
{

    m_has_delete = false;

    if (m_delete)
    {
        delete m_delete;
        m_delete = NULL;
    }
    ;

    m_has_layout = false;

    if (m_layout)
    {
        delete m_layout;
        m_layout = NULL;
    }
    ;

    m_has_tx = false;

    if (m_tx)
    {
        delete m_tx;
        m_tx = NULL;
    }
    ;

    m_has_numFmt = false;

    if (m_numFmt)
    {
        delete m_numFmt;
        m_numFmt = NULL;
    }
    ;

    m_has_spPr = false;

    if (m_spPr)
    {
        delete m_spPr;
        m_spPr = NULL;
    }
    ;

    m_has_txPr = false;

    if (m_txPr)
    {
        delete m_txPr;
        m_txPr = NULL;
    }
    ;

    m_has_dLblPos = false;

    if (m_dLblPos)
    {
        delete m_dLblPos;
        m_dLblPos = NULL;
    }
    ;

    m_has_showLegendKey = false;

    if (m_showLegendKey)
    {
        delete m_showLegendKey;
        m_showLegendKey = NULL;
    }
    ;

    m_has_showVal = false;

    if (m_showVal)
    {
        delete m_showVal;
        m_showVal = NULL;
    }
    ;

    m_has_showCatName = false;

    if (m_showCatName)
    {
        delete m_showCatName;
        m_showCatName = NULL;
    }
    ;

    m_has_showSerName = false;

    if (m_showSerName)
    {
        delete m_showSerName;
        m_showSerName = NULL;
    }
    ;

    m_has_showPercent = false;

    if (m_showPercent)
    {
        delete m_showPercent;
        m_showPercent = NULL;
    }
    ;

    m_has_separator = false;
    m_separator.clear();;

    m_has_showBubbleSize = true;
    if (!m_showBubbleSize)
    {
        m_showBubbleSize = new CT_Boolean();
    }
    return m_showBubbleSize;
}

const CT_Boolean& CT_DLbl::get_showBubbleSize() const
{
    if (m_showBubbleSize)
    {
        return *m_showBubbleSize;
    }
    return CT_Boolean::default_instance();
}

bool CT_DLbl::has_separator() const
{
    return m_has_separator;
}

void CT_DLbl::set_separator(const XSD::string_& _separator)
{

    m_has_delete = false;

    if (m_delete)
    {
        delete m_delete;
        m_delete = NULL;
    }
    ;

    m_has_layout = false;

    if (m_layout)
    {
        delete m_layout;
        m_layout = NULL;
    }
    ;

    m_has_tx = false;

    if (m_tx)
    {
        delete m_tx;
        m_tx = NULL;
    }
    ;

    m_has_numFmt = false;

    if (m_numFmt)
    {
        delete m_numFmt;
        m_numFmt = NULL;
    }
    ;

    m_has_spPr = false;

    if (m_spPr)
    {
        delete m_spPr;
        m_spPr = NULL;
    }
    ;

    m_has_txPr = false;

    if (m_txPr)
    {
        delete m_txPr;
        m_txPr = NULL;
    }
    ;

    m_has_dLblPos = false;

    if (m_dLblPos)
    {
        delete m_dLblPos;
        m_dLblPos = NULL;
    }
    ;

    m_has_showLegendKey = false;

    if (m_showLegendKey)
    {
        delete m_showLegendKey;
        m_showLegendKey = NULL;
    }
    ;

    m_has_showVal = false;

    if (m_showVal)
    {
        delete m_showVal;
        m_showVal = NULL;
    }
    ;

    m_has_showCatName = false;

    if (m_showCatName)
    {
        delete m_showCatName;
        m_showCatName = NULL;
    }
    ;

    m_has_showSerName = false;

    if (m_showSerName)
    {
        delete m_showSerName;
        m_showSerName = NULL;
    }
    ;

    m_has_showPercent = false;

    if (m_showPercent)
    {
        delete m_showPercent;
        m_showPercent = NULL;
    }
    ;

    m_has_showBubbleSize = false;

    if (m_showBubbleSize)
    {
        delete m_showBubbleSize;
        m_showBubbleSize = NULL;
    }
    ;

    m_has_separator = true;
    m_separator = _separator;
}

const XSD::string_& CT_DLbl::get_separator() const
{
    return m_separator;
}

bool CT_DLbl::has_extLst() const
{
    return m_has_extLst;
}

CT_ExtensionList* CT_DLbl::mutable_extLst()
{
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new CT_ExtensionList();
    }
    return m_extLst;
}

const CT_ExtensionList& CT_DLbl::get_extLst() const
{
    if (m_extLst)
    {
        return *m_extLst;
    }
    return CT_ExtensionList::default_instance();
}

void CT_DLbl::clear()
{
    m_has_idx = false;

    if (m_idx)
    {
        delete m_idx;
        m_idx = NULL;
    }


    m_has_delete = false;

    if (m_delete)
    {
        delete m_delete;
        m_delete = NULL;
    }


    m_has_layout = false;

    if (m_layout)
    {
        delete m_layout;
        m_layout = NULL;
    }


    m_has_tx = false;

    if (m_tx)
    {
        delete m_tx;
        m_tx = NULL;
    }


    m_has_numFmt = false;

    if (m_numFmt)
    {
        delete m_numFmt;
        m_numFmt = NULL;
    }


    m_has_spPr = false;

    if (m_spPr)
    {
        delete m_spPr;
        m_spPr = NULL;
    }


    m_has_txPr = false;

    if (m_txPr)
    {
        delete m_txPr;
        m_txPr = NULL;
    }


    m_has_dLblPos = false;

    if (m_dLblPos)
    {
        delete m_dLblPos;
        m_dLblPos = NULL;
    }


    m_has_showLegendKey = false;

    if (m_showLegendKey)
    {
        delete m_showLegendKey;
        m_showLegendKey = NULL;
    }


    m_has_showVal = false;

    if (m_showVal)
    {
        delete m_showVal;
        m_showVal = NULL;
    }


    m_has_showCatName = false;

    if (m_showCatName)
    {
        delete m_showCatName;
        m_showCatName = NULL;
    }


    m_has_showSerName = false;

    if (m_showSerName)
    {
        delete m_showSerName;
        m_showSerName = NULL;
    }


    m_has_showPercent = false;

    if (m_showPercent)
    {
        delete m_showPercent;
        m_showPercent = NULL;
    }


    m_has_showBubbleSize = false;

    if (m_showBubbleSize)
    {
        delete m_showBubbleSize;
        m_showBubbleSize = NULL;
    }


    m_has_separator = false;
    m_separator.clear();

    m_has_extLst = false;

    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }

}

void CT_DLbl::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";

    assert(m_has_idx);


    if (m_has_idx)
    {
        m_idx->toXmlElem("c:idx", "", _outStream);
    }

    {
        bool elemHasValueList[14] = {m_has_delete, m_has_layout, m_has_tx, m_has_numFmt, m_has_spPr, m_has_txPr, m_has_dLblPos, m_has_showLegendKey, m_has_showVal, m_has_showCatName, m_has_showSerName, m_has_showPercent, m_has_showBubbleSize, m_has_separator};
        int cnt = count(elemHasValueList, elemHasValueList + 14, true);
        assert(cnt == 1);
    }


    if (m_has_delete)
    {
        m_delete->toXmlElem("c:delete", "", _outStream);
    }


    if (m_has_layout)
    {
        m_layout->toXmlElem("c:layout", "", _outStream);
    }


    if (m_has_tx)
    {
        m_tx->toXmlElem("c:tx", "", _outStream);
    }


    if (m_has_numFmt)
    {
        m_numFmt->toXmlElem("c:numFmt", "", _outStream);
    }


    if (m_has_spPr)
    {
        m_spPr->toXmlElem("c:spPr", "", _outStream);
    }


    if (m_has_txPr)
    {
        m_txPr->toXmlElem("c:txPr", "", _outStream);
    }


    if (m_has_dLblPos)
    {
        m_dLblPos->toXmlElem("c:dLblPos", "", _outStream);
    }


    if (m_has_showLegendKey)
    {
        m_showLegendKey->toXmlElem("c:showLegendKey", "", _outStream);
    }


    if (m_has_showVal)
    {
        m_showVal->toXmlElem("c:showVal", "", _outStream);
    }


    if (m_has_showCatName)
    {
        m_showCatName->toXmlElem("c:showCatName", "", _outStream);
    }


    if (m_has_showSerName)
    {
        m_showSerName->toXmlElem("c:showSerName", "", _outStream);
    }


    if (m_has_showPercent)
    {
        m_showPercent->toXmlElem("c:showPercent", "", _outStream);
    }


    if (m_has_showBubbleSize)
    {
        m_showBubbleSize->toXmlElem("c:showBubbleSize", "", _outStream);
    }


    if (m_has_separator)
    {
        _outStream << "<c:separator>" << m_separator << "</c:separator>";
    }


    if (m_has_extLst)
    {
        m_extLst->toXmlElem("c:extLst", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_DLbl& CT_DLbl::default_instance()
{
    if (!CT_DLbl::default_instance_)
    {
        CT_DLbl::default_instance_ = new CT_DLbl();
    }
    return *CT_DLbl::default_instance_;
}

CT_DLbl* CT_DLbl::default_instance_ = NULL;

// CT_DLbls
CT_DLbls::CT_DLbls()
    :m_has_delete(false),
     m_delete(NULL),
     m_has_numFmt(false),
     m_numFmt(NULL),
     m_has_spPr(false),
     m_spPr(NULL),
     m_has_txPr(false),
     m_txPr(NULL),
     m_has_dLblPos(false),
     m_dLblPos(NULL),
     m_has_showLegendKey(false),
     m_showLegendKey(NULL),
     m_has_showVal(false),
     m_showVal(NULL),
     m_has_showCatName(false),
     m_showCatName(NULL),
     m_has_showSerName(false),
     m_showSerName(NULL),
     m_has_showPercent(false),
     m_showPercent(NULL),
     m_has_showBubbleSize(false),
     m_showBubbleSize(NULL),
     m_has_separator(false),
     m_separator(""),
     m_has_showLeaderLines(false),
     m_showLeaderLines(NULL),
     m_has_leaderLines(false),
     m_leaderLines(NULL),
     m_has_extLst(false),
     m_extLst(NULL)
{
}
CT_DLbls::~CT_DLbls()
{
    clear();
}
CT_DLbl* CT_DLbls::add_dLbl()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_DLbl* pNewChild = pChildGroup->mutable_dLbl();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

bool CT_DLbls::has_delete() const
{
    return m_has_delete;
}

CT_Boolean* CT_DLbls::mutable_delete()
{

    m_has_numFmt = false;

    if (m_numFmt)
    {
        delete m_numFmt;
        m_numFmt = NULL;
    }
    ;

    m_has_spPr = false;

    if (m_spPr)
    {
        delete m_spPr;
        m_spPr = NULL;
    }
    ;

    m_has_txPr = false;

    if (m_txPr)
    {
        delete m_txPr;
        m_txPr = NULL;
    }
    ;

    m_has_dLblPos = false;

    if (m_dLblPos)
    {
        delete m_dLblPos;
        m_dLblPos = NULL;
    }
    ;

    m_has_showLegendKey = false;

    if (m_showLegendKey)
    {
        delete m_showLegendKey;
        m_showLegendKey = NULL;
    }
    ;

    m_has_showVal = false;

    if (m_showVal)
    {
        delete m_showVal;
        m_showVal = NULL;
    }
    ;

    m_has_showCatName = false;

    if (m_showCatName)
    {
        delete m_showCatName;
        m_showCatName = NULL;
    }
    ;

    m_has_showSerName = false;

    if (m_showSerName)
    {
        delete m_showSerName;
        m_showSerName = NULL;
    }
    ;

    m_has_showPercent = false;

    if (m_showPercent)
    {
        delete m_showPercent;
        m_showPercent = NULL;
    }
    ;

    m_has_showBubbleSize = false;

    if (m_showBubbleSize)
    {
        delete m_showBubbleSize;
        m_showBubbleSize = NULL;
    }
    ;

    m_has_separator = false;
    m_separator.clear();;

    m_has_showLeaderLines = false;

    if (m_showLeaderLines)
    {
        delete m_showLeaderLines;
        m_showLeaderLines = NULL;
    }
    ;

    m_has_leaderLines = false;

    if (m_leaderLines)
    {
        delete m_leaderLines;
        m_leaderLines = NULL;
    }
    ;

    m_has_delete = true;
    if (!m_delete)
    {
        m_delete = new CT_Boolean();
    }
    return m_delete;
}

const CT_Boolean& CT_DLbls::get_delete() const
{
    if (m_delete)
    {
        return *m_delete;
    }
    return CT_Boolean::default_instance();
}

bool CT_DLbls::has_numFmt() const
{
    return m_has_numFmt;
}

CT_NumFmt* CT_DLbls::mutable_numFmt()
{

    m_has_delete = false;

    if (m_delete)
    {
        delete m_delete;
        m_delete = NULL;
    }
    ;

    m_has_spPr = false;

    if (m_spPr)
    {
        delete m_spPr;
        m_spPr = NULL;
    }
    ;

    m_has_txPr = false;

    if (m_txPr)
    {
        delete m_txPr;
        m_txPr = NULL;
    }
    ;

    m_has_dLblPos = false;

    if (m_dLblPos)
    {
        delete m_dLblPos;
        m_dLblPos = NULL;
    }
    ;

    m_has_showLegendKey = false;

    if (m_showLegendKey)
    {
        delete m_showLegendKey;
        m_showLegendKey = NULL;
    }
    ;

    m_has_showVal = false;

    if (m_showVal)
    {
        delete m_showVal;
        m_showVal = NULL;
    }
    ;

    m_has_showCatName = false;

    if (m_showCatName)
    {
        delete m_showCatName;
        m_showCatName = NULL;
    }
    ;

    m_has_showSerName = false;

    if (m_showSerName)
    {
        delete m_showSerName;
        m_showSerName = NULL;
    }
    ;

    m_has_showPercent = false;

    if (m_showPercent)
    {
        delete m_showPercent;
        m_showPercent = NULL;
    }
    ;

    m_has_showBubbleSize = false;

    if (m_showBubbleSize)
    {
        delete m_showBubbleSize;
        m_showBubbleSize = NULL;
    }
    ;

    m_has_separator = false;
    m_separator.clear();;

    m_has_showLeaderLines = false;

    if (m_showLeaderLines)
    {
        delete m_showLeaderLines;
        m_showLeaderLines = NULL;
    }
    ;

    m_has_leaderLines = false;

    if (m_leaderLines)
    {
        delete m_leaderLines;
        m_leaderLines = NULL;
    }
    ;

    m_has_numFmt = true;
    if (!m_numFmt)
    {
        m_numFmt = new CT_NumFmt();
    }
    return m_numFmt;
}

const CT_NumFmt& CT_DLbls::get_numFmt() const
{
    if (m_numFmt)
    {
        return *m_numFmt;
    }
    return CT_NumFmt::default_instance();
}

bool CT_DLbls::has_spPr() const
{
    return m_has_spPr;
}

ns_a::CT_ShapeProperties* CT_DLbls::mutable_spPr()
{

    m_has_delete = false;

    if (m_delete)
    {
        delete m_delete;
        m_delete = NULL;
    }
    ;

    m_has_numFmt = false;

    if (m_numFmt)
    {
        delete m_numFmt;
        m_numFmt = NULL;
    }
    ;

    m_has_txPr = false;

    if (m_txPr)
    {
        delete m_txPr;
        m_txPr = NULL;
    }
    ;

    m_has_dLblPos = false;

    if (m_dLblPos)
    {
        delete m_dLblPos;
        m_dLblPos = NULL;
    }
    ;

    m_has_showLegendKey = false;

    if (m_showLegendKey)
    {
        delete m_showLegendKey;
        m_showLegendKey = NULL;
    }
    ;

    m_has_showVal = false;

    if (m_showVal)
    {
        delete m_showVal;
        m_showVal = NULL;
    }
    ;

    m_has_showCatName = false;

    if (m_showCatName)
    {
        delete m_showCatName;
        m_showCatName = NULL;
    }
    ;

    m_has_showSerName = false;

    if (m_showSerName)
    {
        delete m_showSerName;
        m_showSerName = NULL;
    }
    ;

    m_has_showPercent = false;

    if (m_showPercent)
    {
        delete m_showPercent;
        m_showPercent = NULL;
    }
    ;

    m_has_showBubbleSize = false;

    if (m_showBubbleSize)
    {
        delete m_showBubbleSize;
        m_showBubbleSize = NULL;
    }
    ;

    m_has_separator = false;
    m_separator.clear();;

    m_has_showLeaderLines = false;

    if (m_showLeaderLines)
    {
        delete m_showLeaderLines;
        m_showLeaderLines = NULL;
    }
    ;

    m_has_leaderLines = false;

    if (m_leaderLines)
    {
        delete m_leaderLines;
        m_leaderLines = NULL;
    }
    ;

    m_has_spPr = true;
    if (!m_spPr)
    {
        m_spPr = new ns_a::CT_ShapeProperties();
    }
    return m_spPr;
}

const ns_a::CT_ShapeProperties& CT_DLbls::get_spPr() const
{
    if (m_spPr)
    {
        return *m_spPr;
    }
    return ns_a::CT_ShapeProperties::default_instance();
}

bool CT_DLbls::has_txPr() const
{
    return m_has_txPr;
}

ns_a::CT_TextBody* CT_DLbls::mutable_txPr()
{

    m_has_delete = false;

    if (m_delete)
    {
        delete m_delete;
        m_delete = NULL;
    }
    ;

    m_has_numFmt = false;

    if (m_numFmt)
    {
        delete m_numFmt;
        m_numFmt = NULL;
    }
    ;

    m_has_spPr = false;

    if (m_spPr)
    {
        delete m_spPr;
        m_spPr = NULL;
    }
    ;

    m_has_dLblPos = false;

    if (m_dLblPos)
    {
        delete m_dLblPos;
        m_dLblPos = NULL;
    }
    ;

    m_has_showLegendKey = false;

    if (m_showLegendKey)
    {
        delete m_showLegendKey;
        m_showLegendKey = NULL;
    }
    ;

    m_has_showVal = false;

    if (m_showVal)
    {
        delete m_showVal;
        m_showVal = NULL;
    }
    ;

    m_has_showCatName = false;

    if (m_showCatName)
    {
        delete m_showCatName;
        m_showCatName = NULL;
    }
    ;

    m_has_showSerName = false;

    if (m_showSerName)
    {
        delete m_showSerName;
        m_showSerName = NULL;
    }
    ;

    m_has_showPercent = false;

    if (m_showPercent)
    {
        delete m_showPercent;
        m_showPercent = NULL;
    }
    ;

    m_has_showBubbleSize = false;

    if (m_showBubbleSize)
    {
        delete m_showBubbleSize;
        m_showBubbleSize = NULL;
    }
    ;

    m_has_separator = false;
    m_separator.clear();;

    m_has_showLeaderLines = false;

    if (m_showLeaderLines)
    {
        delete m_showLeaderLines;
        m_showLeaderLines = NULL;
    }
    ;

    m_has_leaderLines = false;

    if (m_leaderLines)
    {
        delete m_leaderLines;
        m_leaderLines = NULL;
    }
    ;

    m_has_txPr = true;
    if (!m_txPr)
    {
        m_txPr = new ns_a::CT_TextBody();
    }
    return m_txPr;
}

const ns_a::CT_TextBody& CT_DLbls::get_txPr() const
{
    if (m_txPr)
    {
        return *m_txPr;
    }
    return ns_a::CT_TextBody::default_instance();
}

bool CT_DLbls::has_dLblPos() const
{
    return m_has_dLblPos;
}

CT_DLblPos* CT_DLbls::mutable_dLblPos()
{

    m_has_delete = false;

    if (m_delete)
    {
        delete m_delete;
        m_delete = NULL;
    }
    ;

    m_has_numFmt = false;

    if (m_numFmt)
    {
        delete m_numFmt;
        m_numFmt = NULL;
    }
    ;

    m_has_spPr = false;

    if (m_spPr)
    {
        delete m_spPr;
        m_spPr = NULL;
    }
    ;

    m_has_txPr = false;

    if (m_txPr)
    {
        delete m_txPr;
        m_txPr = NULL;
    }
    ;

    m_has_showLegendKey = false;

    if (m_showLegendKey)
    {
        delete m_showLegendKey;
        m_showLegendKey = NULL;
    }
    ;

    m_has_showVal = false;

    if (m_showVal)
    {
        delete m_showVal;
        m_showVal = NULL;
    }
    ;

    m_has_showCatName = false;

    if (m_showCatName)
    {
        delete m_showCatName;
        m_showCatName = NULL;
    }
    ;

    m_has_showSerName = false;

    if (m_showSerName)
    {
        delete m_showSerName;
        m_showSerName = NULL;
    }
    ;

    m_has_showPercent = false;

    if (m_showPercent)
    {
        delete m_showPercent;
        m_showPercent = NULL;
    }
    ;

    m_has_showBubbleSize = false;

    if (m_showBubbleSize)
    {
        delete m_showBubbleSize;
        m_showBubbleSize = NULL;
    }
    ;

    m_has_separator = false;
    m_separator.clear();;

    m_has_showLeaderLines = false;

    if (m_showLeaderLines)
    {
        delete m_showLeaderLines;
        m_showLeaderLines = NULL;
    }
    ;

    m_has_leaderLines = false;

    if (m_leaderLines)
    {
        delete m_leaderLines;
        m_leaderLines = NULL;
    }
    ;

    m_has_dLblPos = true;
    if (!m_dLblPos)
    {
        m_dLblPos = new CT_DLblPos();
    }
    return m_dLblPos;
}

const CT_DLblPos& CT_DLbls::get_dLblPos() const
{
    if (m_dLblPos)
    {
        return *m_dLblPos;
    }
    return CT_DLblPos::default_instance();
}

bool CT_DLbls::has_showLegendKey() const
{
    return m_has_showLegendKey;
}

CT_Boolean* CT_DLbls::mutable_showLegendKey()
{

    m_has_delete = false;

    if (m_delete)
    {
        delete m_delete;
        m_delete = NULL;
    }
    ;

    m_has_numFmt = false;

    if (m_numFmt)
    {
        delete m_numFmt;
        m_numFmt = NULL;
    }
    ;

    m_has_spPr = false;

    if (m_spPr)
    {
        delete m_spPr;
        m_spPr = NULL;
    }
    ;

    m_has_txPr = false;

    if (m_txPr)
    {
        delete m_txPr;
        m_txPr = NULL;
    }
    ;

    m_has_dLblPos = false;

    if (m_dLblPos)
    {
        delete m_dLblPos;
        m_dLblPos = NULL;
    }
    ;

    m_has_showVal = false;

    if (m_showVal)
    {
        delete m_showVal;
        m_showVal = NULL;
    }
    ;

    m_has_showCatName = false;

    if (m_showCatName)
    {
        delete m_showCatName;
        m_showCatName = NULL;
    }
    ;

    m_has_showSerName = false;

    if (m_showSerName)
    {
        delete m_showSerName;
        m_showSerName = NULL;
    }
    ;

    m_has_showPercent = false;

    if (m_showPercent)
    {
        delete m_showPercent;
        m_showPercent = NULL;
    }
    ;

    m_has_showBubbleSize = false;

    if (m_showBubbleSize)
    {
        delete m_showBubbleSize;
        m_showBubbleSize = NULL;
    }
    ;

    m_has_separator = false;
    m_separator.clear();;

    m_has_showLeaderLines = false;

    if (m_showLeaderLines)
    {
        delete m_showLeaderLines;
        m_showLeaderLines = NULL;
    }
    ;

    m_has_leaderLines = false;

    if (m_leaderLines)
    {
        delete m_leaderLines;
        m_leaderLines = NULL;
    }
    ;

    m_has_showLegendKey = true;
    if (!m_showLegendKey)
    {
        m_showLegendKey = new CT_Boolean();
    }
    return m_showLegendKey;
}

const CT_Boolean& CT_DLbls::get_showLegendKey() const
{
    if (m_showLegendKey)
    {
        return *m_showLegendKey;
    }
    return CT_Boolean::default_instance();
}

bool CT_DLbls::has_showVal() const
{
    return m_has_showVal;
}

CT_Boolean* CT_DLbls::mutable_showVal()
{

    m_has_delete = false;

    if (m_delete)
    {
        delete m_delete;
        m_delete = NULL;
    }
    ;

    m_has_numFmt = false;

    if (m_numFmt)
    {
        delete m_numFmt;
        m_numFmt = NULL;
    }
    ;

    m_has_spPr = false;

    if (m_spPr)
    {
        delete m_spPr;
        m_spPr = NULL;
    }
    ;

    m_has_txPr = false;

    if (m_txPr)
    {
        delete m_txPr;
        m_txPr = NULL;
    }
    ;

    m_has_dLblPos = false;

    if (m_dLblPos)
    {
        delete m_dLblPos;
        m_dLblPos = NULL;
    }
    ;

    m_has_showLegendKey = false;

    if (m_showLegendKey)
    {
        delete m_showLegendKey;
        m_showLegendKey = NULL;
    }
    ;

    m_has_showCatName = false;

    if (m_showCatName)
    {
        delete m_showCatName;
        m_showCatName = NULL;
    }
    ;

    m_has_showSerName = false;

    if (m_showSerName)
    {
        delete m_showSerName;
        m_showSerName = NULL;
    }
    ;

    m_has_showPercent = false;

    if (m_showPercent)
    {
        delete m_showPercent;
        m_showPercent = NULL;
    }
    ;

    m_has_showBubbleSize = false;

    if (m_showBubbleSize)
    {
        delete m_showBubbleSize;
        m_showBubbleSize = NULL;
    }
    ;

    m_has_separator = false;
    m_separator.clear();;

    m_has_showLeaderLines = false;

    if (m_showLeaderLines)
    {
        delete m_showLeaderLines;
        m_showLeaderLines = NULL;
    }
    ;

    m_has_leaderLines = false;

    if (m_leaderLines)
    {
        delete m_leaderLines;
        m_leaderLines = NULL;
    }
    ;

    m_has_showVal = true;
    if (!m_showVal)
    {
        m_showVal = new CT_Boolean();
    }
    return m_showVal;
}

const CT_Boolean& CT_DLbls::get_showVal() const
{
    if (m_showVal)
    {
        return *m_showVal;
    }
    return CT_Boolean::default_instance();
}

bool CT_DLbls::has_showCatName() const
{
    return m_has_showCatName;
}

CT_Boolean* CT_DLbls::mutable_showCatName()
{

    m_has_delete = false;

    if (m_delete)
    {
        delete m_delete;
        m_delete = NULL;
    }
    ;

    m_has_numFmt = false;

    if (m_numFmt)
    {
        delete m_numFmt;
        m_numFmt = NULL;
    }
    ;

    m_has_spPr = false;

    if (m_spPr)
    {
        delete m_spPr;
        m_spPr = NULL;
    }
    ;

    m_has_txPr = false;

    if (m_txPr)
    {
        delete m_txPr;
        m_txPr = NULL;
    }
    ;

    m_has_dLblPos = false;

    if (m_dLblPos)
    {
        delete m_dLblPos;
        m_dLblPos = NULL;
    }
    ;

    m_has_showLegendKey = false;

    if (m_showLegendKey)
    {
        delete m_showLegendKey;
        m_showLegendKey = NULL;
    }
    ;

    m_has_showVal = false;

    if (m_showVal)
    {
        delete m_showVal;
        m_showVal = NULL;
    }
    ;

    m_has_showSerName = false;

    if (m_showSerName)
    {
        delete m_showSerName;
        m_showSerName = NULL;
    }
    ;

    m_has_showPercent = false;

    if (m_showPercent)
    {
        delete m_showPercent;
        m_showPercent = NULL;
    }
    ;

    m_has_showBubbleSize = false;

    if (m_showBubbleSize)
    {
        delete m_showBubbleSize;
        m_showBubbleSize = NULL;
    }
    ;

    m_has_separator = false;
    m_separator.clear();;

    m_has_showLeaderLines = false;

    if (m_showLeaderLines)
    {
        delete m_showLeaderLines;
        m_showLeaderLines = NULL;
    }
    ;

    m_has_leaderLines = false;

    if (m_leaderLines)
    {
        delete m_leaderLines;
        m_leaderLines = NULL;
    }
    ;

    m_has_showCatName = true;
    if (!m_showCatName)
    {
        m_showCatName = new CT_Boolean();
    }
    return m_showCatName;
}

const CT_Boolean& CT_DLbls::get_showCatName() const
{
    if (m_showCatName)
    {
        return *m_showCatName;
    }
    return CT_Boolean::default_instance();
}

bool CT_DLbls::has_showSerName() const
{
    return m_has_showSerName;
}

CT_Boolean* CT_DLbls::mutable_showSerName()
{

    m_has_delete = false;

    if (m_delete)
    {
        delete m_delete;
        m_delete = NULL;
    }
    ;

    m_has_numFmt = false;

    if (m_numFmt)
    {
        delete m_numFmt;
        m_numFmt = NULL;
    }
    ;

    m_has_spPr = false;

    if (m_spPr)
    {
        delete m_spPr;
        m_spPr = NULL;
    }
    ;

    m_has_txPr = false;

    if (m_txPr)
    {
        delete m_txPr;
        m_txPr = NULL;
    }
    ;

    m_has_dLblPos = false;

    if (m_dLblPos)
    {
        delete m_dLblPos;
        m_dLblPos = NULL;
    }
    ;

    m_has_showLegendKey = false;

    if (m_showLegendKey)
    {
        delete m_showLegendKey;
        m_showLegendKey = NULL;
    }
    ;

    m_has_showVal = false;

    if (m_showVal)
    {
        delete m_showVal;
        m_showVal = NULL;
    }
    ;

    m_has_showCatName = false;

    if (m_showCatName)
    {
        delete m_showCatName;
        m_showCatName = NULL;
    }
    ;

    m_has_showPercent = false;

    if (m_showPercent)
    {
        delete m_showPercent;
        m_showPercent = NULL;
    }
    ;

    m_has_showBubbleSize = false;

    if (m_showBubbleSize)
    {
        delete m_showBubbleSize;
        m_showBubbleSize = NULL;
    }
    ;

    m_has_separator = false;
    m_separator.clear();;

    m_has_showLeaderLines = false;

    if (m_showLeaderLines)
    {
        delete m_showLeaderLines;
        m_showLeaderLines = NULL;
    }
    ;

    m_has_leaderLines = false;

    if (m_leaderLines)
    {
        delete m_leaderLines;
        m_leaderLines = NULL;
    }
    ;

    m_has_showSerName = true;
    if (!m_showSerName)
    {
        m_showSerName = new CT_Boolean();
    }
    return m_showSerName;
}

const CT_Boolean& CT_DLbls::get_showSerName() const
{
    if (m_showSerName)
    {
        return *m_showSerName;
    }
    return CT_Boolean::default_instance();
}

bool CT_DLbls::has_showPercent() const
{
    return m_has_showPercent;
}

CT_Boolean* CT_DLbls::mutable_showPercent()
{

    m_has_delete = false;

    if (m_delete)
    {
        delete m_delete;
        m_delete = NULL;
    }
    ;

    m_has_numFmt = false;

    if (m_numFmt)
    {
        delete m_numFmt;
        m_numFmt = NULL;
    }
    ;

    m_has_spPr = false;

    if (m_spPr)
    {
        delete m_spPr;
        m_spPr = NULL;
    }
    ;

    m_has_txPr = false;

    if (m_txPr)
    {
        delete m_txPr;
        m_txPr = NULL;
    }
    ;

    m_has_dLblPos = false;

    if (m_dLblPos)
    {
        delete m_dLblPos;
        m_dLblPos = NULL;
    }
    ;

    m_has_showLegendKey = false;

    if (m_showLegendKey)
    {
        delete m_showLegendKey;
        m_showLegendKey = NULL;
    }
    ;

    m_has_showVal = false;

    if (m_showVal)
    {
        delete m_showVal;
        m_showVal = NULL;
    }
    ;

    m_has_showCatName = false;

    if (m_showCatName)
    {
        delete m_showCatName;
        m_showCatName = NULL;
    }
    ;

    m_has_showSerName = false;

    if (m_showSerName)
    {
        delete m_showSerName;
        m_showSerName = NULL;
    }
    ;

    m_has_showBubbleSize = false;

    if (m_showBubbleSize)
    {
        delete m_showBubbleSize;
        m_showBubbleSize = NULL;
    }
    ;

    m_has_separator = false;
    m_separator.clear();;

    m_has_showLeaderLines = false;

    if (m_showLeaderLines)
    {
        delete m_showLeaderLines;
        m_showLeaderLines = NULL;
    }
    ;

    m_has_leaderLines = false;

    if (m_leaderLines)
    {
        delete m_leaderLines;
        m_leaderLines = NULL;
    }
    ;

    m_has_showPercent = true;
    if (!m_showPercent)
    {
        m_showPercent = new CT_Boolean();
    }
    return m_showPercent;
}

const CT_Boolean& CT_DLbls::get_showPercent() const
{
    if (m_showPercent)
    {
        return *m_showPercent;
    }
    return CT_Boolean::default_instance();
}

bool CT_DLbls::has_showBubbleSize() const
{
    return m_has_showBubbleSize;
}

CT_Boolean* CT_DLbls::mutable_showBubbleSize()
{

    m_has_delete = false;

    if (m_delete)
    {
        delete m_delete;
        m_delete = NULL;
    }
    ;

    m_has_numFmt = false;

    if (m_numFmt)
    {
        delete m_numFmt;
        m_numFmt = NULL;
    }
    ;

    m_has_spPr = false;

    if (m_spPr)
    {
        delete m_spPr;
        m_spPr = NULL;
    }
    ;

    m_has_txPr = false;

    if (m_txPr)
    {
        delete m_txPr;
        m_txPr = NULL;
    }
    ;

    m_has_dLblPos = false;

    if (m_dLblPos)
    {
        delete m_dLblPos;
        m_dLblPos = NULL;
    }
    ;

    m_has_showLegendKey = false;

    if (m_showLegendKey)
    {
        delete m_showLegendKey;
        m_showLegendKey = NULL;
    }
    ;

    m_has_showVal = false;

    if (m_showVal)
    {
        delete m_showVal;
        m_showVal = NULL;
    }
    ;

    m_has_showCatName = false;

    if (m_showCatName)
    {
        delete m_showCatName;
        m_showCatName = NULL;
    }
    ;

    m_has_showSerName = false;

    if (m_showSerName)
    {
        delete m_showSerName;
        m_showSerName = NULL;
    }
    ;

    m_has_showPercent = false;

    if (m_showPercent)
    {
        delete m_showPercent;
        m_showPercent = NULL;
    }
    ;

    m_has_separator = false;
    m_separator.clear();;

    m_has_showLeaderLines = false;

    if (m_showLeaderLines)
    {
        delete m_showLeaderLines;
        m_showLeaderLines = NULL;
    }
    ;

    m_has_leaderLines = false;

    if (m_leaderLines)
    {
        delete m_leaderLines;
        m_leaderLines = NULL;
    }
    ;

    m_has_showBubbleSize = true;
    if (!m_showBubbleSize)
    {
        m_showBubbleSize = new CT_Boolean();
    }
    return m_showBubbleSize;
}

const CT_Boolean& CT_DLbls::get_showBubbleSize() const
{
    if (m_showBubbleSize)
    {
        return *m_showBubbleSize;
    }
    return CT_Boolean::default_instance();
}

bool CT_DLbls::has_separator() const
{
    return m_has_separator;
}

void CT_DLbls::set_separator(const XSD::string_& _separator)
{

    m_has_delete = false;

    if (m_delete)
    {
        delete m_delete;
        m_delete = NULL;
    }
    ;

    m_has_numFmt = false;

    if (m_numFmt)
    {
        delete m_numFmt;
        m_numFmt = NULL;
    }
    ;

    m_has_spPr = false;

    if (m_spPr)
    {
        delete m_spPr;
        m_spPr = NULL;
    }
    ;

    m_has_txPr = false;

    if (m_txPr)
    {
        delete m_txPr;
        m_txPr = NULL;
    }
    ;

    m_has_dLblPos = false;

    if (m_dLblPos)
    {
        delete m_dLblPos;
        m_dLblPos = NULL;
    }
    ;

    m_has_showLegendKey = false;

    if (m_showLegendKey)
    {
        delete m_showLegendKey;
        m_showLegendKey = NULL;
    }
    ;

    m_has_showVal = false;

    if (m_showVal)
    {
        delete m_showVal;
        m_showVal = NULL;
    }
    ;

    m_has_showCatName = false;

    if (m_showCatName)
    {
        delete m_showCatName;
        m_showCatName = NULL;
    }
    ;

    m_has_showSerName = false;

    if (m_showSerName)
    {
        delete m_showSerName;
        m_showSerName = NULL;
    }
    ;

    m_has_showPercent = false;

    if (m_showPercent)
    {
        delete m_showPercent;
        m_showPercent = NULL;
    }
    ;

    m_has_showBubbleSize = false;

    if (m_showBubbleSize)
    {
        delete m_showBubbleSize;
        m_showBubbleSize = NULL;
    }
    ;

    m_has_showLeaderLines = false;

    if (m_showLeaderLines)
    {
        delete m_showLeaderLines;
        m_showLeaderLines = NULL;
    }
    ;

    m_has_leaderLines = false;

    if (m_leaderLines)
    {
        delete m_leaderLines;
        m_leaderLines = NULL;
    }
    ;

    m_has_separator = true;
    m_separator = _separator;
}

const XSD::string_& CT_DLbls::get_separator() const
{
    return m_separator;
}

bool CT_DLbls::has_showLeaderLines() const
{
    return m_has_showLeaderLines;
}

CT_Boolean* CT_DLbls::mutable_showLeaderLines()
{

    m_has_delete = false;

    if (m_delete)
    {
        delete m_delete;
        m_delete = NULL;
    }
    ;

    m_has_numFmt = false;

    if (m_numFmt)
    {
        delete m_numFmt;
        m_numFmt = NULL;
    }
    ;

    m_has_spPr = false;

    if (m_spPr)
    {
        delete m_spPr;
        m_spPr = NULL;
    }
    ;

    m_has_txPr = false;

    if (m_txPr)
    {
        delete m_txPr;
        m_txPr = NULL;
    }
    ;

    m_has_dLblPos = false;

    if (m_dLblPos)
    {
        delete m_dLblPos;
        m_dLblPos = NULL;
    }
    ;

    m_has_showLegendKey = false;

    if (m_showLegendKey)
    {
        delete m_showLegendKey;
        m_showLegendKey = NULL;
    }
    ;

    m_has_showVal = false;

    if (m_showVal)
    {
        delete m_showVal;
        m_showVal = NULL;
    }
    ;

    m_has_showCatName = false;

    if (m_showCatName)
    {
        delete m_showCatName;
        m_showCatName = NULL;
    }
    ;

    m_has_showSerName = false;

    if (m_showSerName)
    {
        delete m_showSerName;
        m_showSerName = NULL;
    }
    ;

    m_has_showPercent = false;

    if (m_showPercent)
    {
        delete m_showPercent;
        m_showPercent = NULL;
    }
    ;

    m_has_showBubbleSize = false;

    if (m_showBubbleSize)
    {
        delete m_showBubbleSize;
        m_showBubbleSize = NULL;
    }
    ;

    m_has_separator = false;
    m_separator.clear();;

    m_has_leaderLines = false;

    if (m_leaderLines)
    {
        delete m_leaderLines;
        m_leaderLines = NULL;
    }
    ;

    m_has_showLeaderLines = true;
    if (!m_showLeaderLines)
    {
        m_showLeaderLines = new CT_Boolean();
    }
    return m_showLeaderLines;
}

const CT_Boolean& CT_DLbls::get_showLeaderLines() const
{
    if (m_showLeaderLines)
    {
        return *m_showLeaderLines;
    }
    return CT_Boolean::default_instance();
}

bool CT_DLbls::has_leaderLines() const
{
    return m_has_leaderLines;
}

CT_ChartLines* CT_DLbls::mutable_leaderLines()
{

    m_has_delete = false;

    if (m_delete)
    {
        delete m_delete;
        m_delete = NULL;
    }
    ;

    m_has_numFmt = false;

    if (m_numFmt)
    {
        delete m_numFmt;
        m_numFmt = NULL;
    }
    ;

    m_has_spPr = false;

    if (m_spPr)
    {
        delete m_spPr;
        m_spPr = NULL;
    }
    ;

    m_has_txPr = false;

    if (m_txPr)
    {
        delete m_txPr;
        m_txPr = NULL;
    }
    ;

    m_has_dLblPos = false;

    if (m_dLblPos)
    {
        delete m_dLblPos;
        m_dLblPos = NULL;
    }
    ;

    m_has_showLegendKey = false;

    if (m_showLegendKey)
    {
        delete m_showLegendKey;
        m_showLegendKey = NULL;
    }
    ;

    m_has_showVal = false;

    if (m_showVal)
    {
        delete m_showVal;
        m_showVal = NULL;
    }
    ;

    m_has_showCatName = false;

    if (m_showCatName)
    {
        delete m_showCatName;
        m_showCatName = NULL;
    }
    ;

    m_has_showSerName = false;

    if (m_showSerName)
    {
        delete m_showSerName;
        m_showSerName = NULL;
    }
    ;

    m_has_showPercent = false;

    if (m_showPercent)
    {
        delete m_showPercent;
        m_showPercent = NULL;
    }
    ;

    m_has_showBubbleSize = false;

    if (m_showBubbleSize)
    {
        delete m_showBubbleSize;
        m_showBubbleSize = NULL;
    }
    ;

    m_has_separator = false;
    m_separator.clear();;

    m_has_showLeaderLines = false;

    if (m_showLeaderLines)
    {
        delete m_showLeaderLines;
        m_showLeaderLines = NULL;
    }
    ;

    m_has_leaderLines = true;
    if (!m_leaderLines)
    {
        m_leaderLines = new CT_ChartLines();
    }
    return m_leaderLines;
}

const CT_ChartLines& CT_DLbls::get_leaderLines() const
{
    if (m_leaderLines)
    {
        return *m_leaderLines;
    }
    return CT_ChartLines::default_instance();
}

bool CT_DLbls::has_extLst() const
{
    return m_has_extLst;
}

CT_ExtensionList* CT_DLbls::mutable_extLst()
{
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new CT_ExtensionList();
    }
    return m_extLst;
}

const CT_ExtensionList& CT_DLbls::get_extLst() const
{
    if (m_extLst)
    {
        return *m_extLst;
    }
    return CT_ExtensionList::default_instance();
}

void CT_DLbls::clear()
{
    {
        vector<ChildGroup_1*>::iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_1.clear();
    }

    m_has_delete = false;

    if (m_delete)
    {
        delete m_delete;
        m_delete = NULL;
    }


    m_has_numFmt = false;

    if (m_numFmt)
    {
        delete m_numFmt;
        m_numFmt = NULL;
    }


    m_has_spPr = false;

    if (m_spPr)
    {
        delete m_spPr;
        m_spPr = NULL;
    }


    m_has_txPr = false;

    if (m_txPr)
    {
        delete m_txPr;
        m_txPr = NULL;
    }


    m_has_dLblPos = false;

    if (m_dLblPos)
    {
        delete m_dLblPos;
        m_dLblPos = NULL;
    }


    m_has_showLegendKey = false;

    if (m_showLegendKey)
    {
        delete m_showLegendKey;
        m_showLegendKey = NULL;
    }


    m_has_showVal = false;

    if (m_showVal)
    {
        delete m_showVal;
        m_showVal = NULL;
    }


    m_has_showCatName = false;

    if (m_showCatName)
    {
        delete m_showCatName;
        m_showCatName = NULL;
    }


    m_has_showSerName = false;

    if (m_showSerName)
    {
        delete m_showSerName;
        m_showSerName = NULL;
    }


    m_has_showPercent = false;

    if (m_showPercent)
    {
        delete m_showPercent;
        m_showPercent = NULL;
    }


    m_has_showBubbleSize = false;

    if (m_showBubbleSize)
    {
        delete m_showBubbleSize;
        m_showBubbleSize = NULL;
    }


    m_has_separator = false;
    m_separator.clear();

    m_has_showLeaderLines = false;

    if (m_showLeaderLines)
    {
        delete m_showLeaderLines;
        m_showLeaderLines = NULL;
    }


    m_has_leaderLines = false;

    if (m_leaderLines)
    {
        delete m_leaderLines;
        m_leaderLines = NULL;
    }


    m_has_extLst = false;

    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }

}

void CT_DLbls::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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
            if ((*iter)->has_dLbl())
            {
                (*iter)->get_dLbl().toXmlElem("c:dLbl", "", _outStream);
            }


        }
    }

    {
        bool elemHasValueList[14] = {m_has_delete, m_has_numFmt, m_has_spPr, m_has_txPr, m_has_dLblPos, m_has_showLegendKey, m_has_showVal, m_has_showCatName, m_has_showSerName, m_has_showPercent, m_has_showBubbleSize, m_has_separator, m_has_showLeaderLines, m_has_leaderLines};
        int cnt = count(elemHasValueList, elemHasValueList + 14, true);
        assert(cnt == 1);
    }


    if (m_has_delete)
    {
        m_delete->toXmlElem("c:delete", "", _outStream);
    }


    if (m_has_numFmt)
    {
        m_numFmt->toXmlElem("c:numFmt", "", _outStream);
    }


    if (m_has_spPr)
    {
        m_spPr->toXmlElem("c:spPr", "", _outStream);
    }


    if (m_has_txPr)
    {
        m_txPr->toXmlElem("c:txPr", "", _outStream);
    }


    if (m_has_dLblPos)
    {
        m_dLblPos->toXmlElem("c:dLblPos", "", _outStream);
    }


    if (m_has_showLegendKey)
    {
        m_showLegendKey->toXmlElem("c:showLegendKey", "", _outStream);
    }


    if (m_has_showVal)
    {
        m_showVal->toXmlElem("c:showVal", "", _outStream);
    }


    if (m_has_showCatName)
    {
        m_showCatName->toXmlElem("c:showCatName", "", _outStream);
    }


    if (m_has_showSerName)
    {
        m_showSerName->toXmlElem("c:showSerName", "", _outStream);
    }


    if (m_has_showPercent)
    {
        m_showPercent->toXmlElem("c:showPercent", "", _outStream);
    }


    if (m_has_showBubbleSize)
    {
        m_showBubbleSize->toXmlElem("c:showBubbleSize", "", _outStream);
    }


    if (m_has_separator)
    {
        _outStream << "<c:separator>" << m_separator << "</c:separator>";
    }


    if (m_has_showLeaderLines)
    {
        m_showLeaderLines->toXmlElem("c:showLeaderLines", "", _outStream);
    }


    if (m_has_leaderLines)
    {
        m_leaderLines->toXmlElem("c:leaderLines", "", _outStream);
    }


    if (m_has_extLst)
    {
        m_extLst->toXmlElem("c:extLst", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_DLbls& CT_DLbls::default_instance()
{
    if (!CT_DLbls::default_instance_)
    {
        CT_DLbls::default_instance_ = new CT_DLbls();
    }
    return *CT_DLbls::default_instance_;
}


// CT_DLbls::ChildGroup_1
CT_DLbls::ChildGroup_1::ChildGroup_1()
    :m_has_dLbl(false),
     m_dLbl(NULL)
{
}
bool CT_DLbls::ChildGroup_1::has_dLbl() const
{
    return m_has_dLbl;
}

CT_DLbl* CT_DLbls::ChildGroup_1::mutable_dLbl()
{

    m_has_dLbl = true;
    if (!m_dLbl)
    {
        m_dLbl = new CT_DLbl();
    }
    return m_dLbl;
}

const CT_DLbl& CT_DLbls::ChildGroup_1::get_dLbl() const
{
    if (m_dLbl)
    {
        return *m_dLbl;
    }
    return CT_DLbl::default_instance();
}

CT_DLbls* CT_DLbls::default_instance_ = NULL;

// CT_MarkerStyle
CT_MarkerStyle::CT_MarkerStyle()
    :m_has_val_attr(false),
     m_val_attr(NULL)
{
}
CT_MarkerStyle::~CT_MarkerStyle()
{
    clear();
}
void CT_MarkerStyle::clear()
{
    m_has_val_attr = false;

    if (m_val_attr)
    {
        delete m_val_attr;
        m_val_attr = NULL;
    }

}

void CT_MarkerStyle::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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

const CT_MarkerStyle& CT_MarkerStyle::default_instance()
{
    if (!CT_MarkerStyle::default_instance_)
    {
        CT_MarkerStyle::default_instance_ = new CT_MarkerStyle();
    }
    return *CT_MarkerStyle::default_instance_;
}

bool CT_MarkerStyle::has_val_attr() const
{
    return m_has_val_attr;
}

void CT_MarkerStyle::set_val_attr(const ST_MarkerStyle& _val_attr)
{
    m_has_val_attr = true;
    m_val_attr = new ST_MarkerStyle(_val_attr);
}

const ST_MarkerStyle& CT_MarkerStyle::get_val_attr() const
{
    if (m_val_attr)
    {
        return *m_val_attr;
    }
    return ST_MarkerStyle::default_instance();
}

CT_MarkerStyle* CT_MarkerStyle::default_instance_ = NULL;

// CT_MarkerSize
CT_MarkerSize::CT_MarkerSize()
    :m_has_val_attr(false),
     m_val_attr(NULL)
{
}
CT_MarkerSize::~CT_MarkerSize()
{
    clear();
}
void CT_MarkerSize::clear()
{
    m_has_val_attr = false;

    if (m_val_attr)
    {
        delete m_val_attr;
        m_val_attr = NULL;
    }

}

void CT_MarkerSize::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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

const CT_MarkerSize& CT_MarkerSize::default_instance()
{
    if (!CT_MarkerSize::default_instance_)
    {
        CT_MarkerSize::default_instance_ = new CT_MarkerSize();
    }
    return *CT_MarkerSize::default_instance_;
}

bool CT_MarkerSize::has_val_attr() const
{
    return m_has_val_attr;
}

void CT_MarkerSize::set_val_attr(const ST_MarkerSize& _val_attr)
{
    m_has_val_attr = true;
    m_val_attr = new ST_MarkerSize(_val_attr);
}

const ST_MarkerSize& CT_MarkerSize::get_val_attr() const
{
    if (m_val_attr)
    {
        return *m_val_attr;
    }
    return ST_MarkerSize::default_instance();
}

CT_MarkerSize* CT_MarkerSize::default_instance_ = NULL;

// CT_Marker
CT_Marker::CT_Marker()
    :m_has_symbol(false),
     m_symbol(NULL),
     m_has_size(false),
     m_size(NULL),
     m_has_spPr(false),
     m_spPr(NULL),
     m_has_extLst(false),
     m_extLst(NULL)
{
}
CT_Marker::~CT_Marker()
{
    clear();
}
bool CT_Marker::has_symbol() const
{
    return m_has_symbol;
}

CT_MarkerStyle* CT_Marker::mutable_symbol()
{
    m_has_symbol = true;
    if (!m_symbol)
    {
        m_symbol = new CT_MarkerStyle();
    }
    return m_symbol;
}

const CT_MarkerStyle& CT_Marker::get_symbol() const
{
    if (m_symbol)
    {
        return *m_symbol;
    }
    return CT_MarkerStyle::default_instance();
}

bool CT_Marker::has_size() const
{
    return m_has_size;
}

CT_MarkerSize* CT_Marker::mutable_size()
{
    m_has_size = true;
    if (!m_size)
    {
        m_size = new CT_MarkerSize();
    }
    return m_size;
}

const CT_MarkerSize& CT_Marker::get_size() const
{
    if (m_size)
    {
        return *m_size;
    }
    return CT_MarkerSize::default_instance();
}

bool CT_Marker::has_spPr() const
{
    return m_has_spPr;
}

ns_a::CT_ShapeProperties* CT_Marker::mutable_spPr()
{
    m_has_spPr = true;
    if (!m_spPr)
    {
        m_spPr = new ns_a::CT_ShapeProperties();
    }
    return m_spPr;
}

const ns_a::CT_ShapeProperties& CT_Marker::get_spPr() const
{
    if (m_spPr)
    {
        return *m_spPr;
    }
    return ns_a::CT_ShapeProperties::default_instance();
}

bool CT_Marker::has_extLst() const
{
    return m_has_extLst;
}

CT_ExtensionList* CT_Marker::mutable_extLst()
{
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new CT_ExtensionList();
    }
    return m_extLst;
}

const CT_ExtensionList& CT_Marker::get_extLst() const
{
    if (m_extLst)
    {
        return *m_extLst;
    }
    return CT_ExtensionList::default_instance();
}

void CT_Marker::clear()
{
    m_has_symbol = false;

    if (m_symbol)
    {
        delete m_symbol;
        m_symbol = NULL;
    }


    m_has_size = false;

    if (m_size)
    {
        delete m_size;
        m_size = NULL;
    }


    m_has_spPr = false;

    if (m_spPr)
    {
        delete m_spPr;
        m_spPr = NULL;
    }


    m_has_extLst = false;

    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }

}

void CT_Marker::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";


    if (m_has_symbol)
    {
        m_symbol->toXmlElem("c:symbol", "", _outStream);
    }


    if (m_has_size)
    {
        m_size->toXmlElem("c:size", "", _outStream);
    }


    if (m_has_spPr)
    {
        m_spPr->toXmlElem("c:spPr", "", _outStream);
    }


    if (m_has_extLst)
    {
        m_extLst->toXmlElem("c:extLst", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_Marker& CT_Marker::default_instance()
{
    if (!CT_Marker::default_instance_)
    {
        CT_Marker::default_instance_ = new CT_Marker();
    }
    return *CT_Marker::default_instance_;
}

CT_Marker* CT_Marker::default_instance_ = NULL;

// CT_DPt
CT_DPt::CT_DPt()
    :m_has_idx(false),
     m_idx(NULL),
     m_has_invertIfNegative(false),
     m_invertIfNegative(NULL),
     m_has_marker(false),
     m_marker(NULL),
     m_has_bubble3D(false),
     m_bubble3D(NULL),
     m_has_explosion(false),
     m_explosion(NULL),
     m_has_spPr(false),
     m_spPr(NULL),
     m_has_pictureOptions(false),
     m_pictureOptions(NULL),
     m_has_extLst(false),
     m_extLst(NULL)
{
}
CT_DPt::~CT_DPt()
{
    clear();
}
bool CT_DPt::has_idx() const
{
    return m_has_idx;
}

CT_UnsignedInt* CT_DPt::mutable_idx()
{
    m_has_idx = true;
    if (!m_idx)
    {
        m_idx = new CT_UnsignedInt();
    }
    return m_idx;
}

const CT_UnsignedInt& CT_DPt::get_idx() const
{
    if (m_idx)
    {
        return *m_idx;
    }
    return CT_UnsignedInt::default_instance();
}

bool CT_DPt::has_invertIfNegative() const
{
    return m_has_invertIfNegative;
}

CT_Boolean* CT_DPt::mutable_invertIfNegative()
{
    m_has_invertIfNegative = true;
    if (!m_invertIfNegative)
    {
        m_invertIfNegative = new CT_Boolean();
    }
    return m_invertIfNegative;
}

const CT_Boolean& CT_DPt::get_invertIfNegative() const
{
    if (m_invertIfNegative)
    {
        return *m_invertIfNegative;
    }
    return CT_Boolean::default_instance();
}

bool CT_DPt::has_marker() const
{
    return m_has_marker;
}

CT_Marker* CT_DPt::mutable_marker()
{
    m_has_marker = true;
    if (!m_marker)
    {
        m_marker = new CT_Marker();
    }
    return m_marker;
}

const CT_Marker& CT_DPt::get_marker() const
{
    if (m_marker)
    {
        return *m_marker;
    }
    return CT_Marker::default_instance();
}

bool CT_DPt::has_bubble3D() const
{
    return m_has_bubble3D;
}

CT_Boolean* CT_DPt::mutable_bubble3D()
{
    m_has_bubble3D = true;
    if (!m_bubble3D)
    {
        m_bubble3D = new CT_Boolean();
    }
    return m_bubble3D;
}

const CT_Boolean& CT_DPt::get_bubble3D() const
{
    if (m_bubble3D)
    {
        return *m_bubble3D;
    }
    return CT_Boolean::default_instance();
}

bool CT_DPt::has_explosion() const
{
    return m_has_explosion;
}

CT_UnsignedInt* CT_DPt::mutable_explosion()
{
    m_has_explosion = true;
    if (!m_explosion)
    {
        m_explosion = new CT_UnsignedInt();
    }
    return m_explosion;
}

const CT_UnsignedInt& CT_DPt::get_explosion() const
{
    if (m_explosion)
    {
        return *m_explosion;
    }
    return CT_UnsignedInt::default_instance();
}

bool CT_DPt::has_spPr() const
{
    return m_has_spPr;
}

ns_a::CT_ShapeProperties* CT_DPt::mutable_spPr()
{
    m_has_spPr = true;
    if (!m_spPr)
    {
        m_spPr = new ns_a::CT_ShapeProperties();
    }
    return m_spPr;
}

const ns_a::CT_ShapeProperties& CT_DPt::get_spPr() const
{
    if (m_spPr)
    {
        return *m_spPr;
    }
    return ns_a::CT_ShapeProperties::default_instance();
}

bool CT_DPt::has_pictureOptions() const
{
    return m_has_pictureOptions;
}

CT_PictureOptions* CT_DPt::mutable_pictureOptions()
{
    m_has_pictureOptions = true;
    if (!m_pictureOptions)
    {
        m_pictureOptions = new CT_PictureOptions();
    }
    return m_pictureOptions;
}

const CT_PictureOptions& CT_DPt::get_pictureOptions() const
{
    if (m_pictureOptions)
    {
        return *m_pictureOptions;
    }
    return CT_PictureOptions::default_instance();
}

bool CT_DPt::has_extLst() const
{
    return m_has_extLst;
}

CT_ExtensionList* CT_DPt::mutable_extLst()
{
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new CT_ExtensionList();
    }
    return m_extLst;
}

const CT_ExtensionList& CT_DPt::get_extLst() const
{
    if (m_extLst)
    {
        return *m_extLst;
    }
    return CT_ExtensionList::default_instance();
}

void CT_DPt::clear()
{
    m_has_idx = false;

    if (m_idx)
    {
        delete m_idx;
        m_idx = NULL;
    }


    m_has_invertIfNegative = false;

    if (m_invertIfNegative)
    {
        delete m_invertIfNegative;
        m_invertIfNegative = NULL;
    }


    m_has_marker = false;

    if (m_marker)
    {
        delete m_marker;
        m_marker = NULL;
    }


    m_has_bubble3D = false;

    if (m_bubble3D)
    {
        delete m_bubble3D;
        m_bubble3D = NULL;
    }


    m_has_explosion = false;

    if (m_explosion)
    {
        delete m_explosion;
        m_explosion = NULL;
    }


    m_has_spPr = false;

    if (m_spPr)
    {
        delete m_spPr;
        m_spPr = NULL;
    }


    m_has_pictureOptions = false;

    if (m_pictureOptions)
    {
        delete m_pictureOptions;
        m_pictureOptions = NULL;
    }


    m_has_extLst = false;

    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }

}

void CT_DPt::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";

    assert(m_has_idx);


    if (m_has_idx)
    {
        m_idx->toXmlElem("c:idx", "", _outStream);
    }


    if (m_has_invertIfNegative)
    {
        m_invertIfNegative->toXmlElem("c:invertIfNegative", "", _outStream);
    }


    if (m_has_marker)
    {
        m_marker->toXmlElem("c:marker", "", _outStream);
    }


    if (m_has_bubble3D)
    {
        m_bubble3D->toXmlElem("c:bubble3D", "", _outStream);
    }


    if (m_has_explosion)
    {
        m_explosion->toXmlElem("c:explosion", "", _outStream);
    }


    if (m_has_spPr)
    {
        m_spPr->toXmlElem("c:spPr", "", _outStream);
    }


    if (m_has_pictureOptions)
    {
        m_pictureOptions->toXmlElem("c:pictureOptions", "", _outStream);
    }


    if (m_has_extLst)
    {
        m_extLst->toXmlElem("c:extLst", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_DPt& CT_DPt::default_instance()
{
    if (!CT_DPt::default_instance_)
    {
        CT_DPt::default_instance_ = new CT_DPt();
    }
    return *CT_DPt::default_instance_;
}

CT_DPt* CT_DPt::default_instance_ = NULL;

// CT_TrendlineType
CT_TrendlineType::CT_TrendlineType()
    :m_has_val_attr(false),
     m_val_attr(NULL)
{
}
CT_TrendlineType::~CT_TrendlineType()
{
    clear();
}
void CT_TrendlineType::clear()
{
    m_has_val_attr = false;

    if (m_val_attr)
    {
        delete m_val_attr;
        m_val_attr = NULL;
    }

}

void CT_TrendlineType::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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

const CT_TrendlineType& CT_TrendlineType::default_instance()
{
    if (!CT_TrendlineType::default_instance_)
    {
        CT_TrendlineType::default_instance_ = new CT_TrendlineType();
    }
    return *CT_TrendlineType::default_instance_;
}

bool CT_TrendlineType::has_val_attr() const
{
    return m_has_val_attr;
}

void CT_TrendlineType::set_val_attr(const ST_TrendlineType& _val_attr)
{
    m_has_val_attr = true;
    m_val_attr = new ST_TrendlineType(_val_attr);
}

const ST_TrendlineType& CT_TrendlineType::get_val_attr() const
{
    if (m_val_attr)
    {
        return *m_val_attr;
    }
    return ST_TrendlineType::default_instance();
}

CT_TrendlineType* CT_TrendlineType::default_instance_ = NULL;

// CT_Order
CT_Order::CT_Order()
    :m_has_val_attr(false),
     m_val_attr(NULL)
{
}
CT_Order::~CT_Order()
{
    clear();
}
void CT_Order::clear()
{
    m_has_val_attr = false;

    if (m_val_attr)
    {
        delete m_val_attr;
        m_val_attr = NULL;
    }

}

void CT_Order::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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

const CT_Order& CT_Order::default_instance()
{
    if (!CT_Order::default_instance_)
    {
        CT_Order::default_instance_ = new CT_Order();
    }
    return *CT_Order::default_instance_;
}

bool CT_Order::has_val_attr() const
{
    return m_has_val_attr;
}

void CT_Order::set_val_attr(const ST_Order& _val_attr)
{
    m_has_val_attr = true;
    m_val_attr = new ST_Order(_val_attr);
}

const ST_Order& CT_Order::get_val_attr() const
{
    if (m_val_attr)
    {
        return *m_val_attr;
    }
    return ST_Order::default_instance();
}

CT_Order* CT_Order::default_instance_ = NULL;

// CT_Period
CT_Period::CT_Period()
    :m_has_val_attr(false),
     m_val_attr(NULL)
{
}
CT_Period::~CT_Period()
{
    clear();
}
void CT_Period::clear()
{
    m_has_val_attr = false;

    if (m_val_attr)
    {
        delete m_val_attr;
        m_val_attr = NULL;
    }

}

void CT_Period::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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

const CT_Period& CT_Period::default_instance()
{
    if (!CT_Period::default_instance_)
    {
        CT_Period::default_instance_ = new CT_Period();
    }
    return *CT_Period::default_instance_;
}

bool CT_Period::has_val_attr() const
{
    return m_has_val_attr;
}

void CT_Period::set_val_attr(const ST_Period& _val_attr)
{
    m_has_val_attr = true;
    m_val_attr = new ST_Period(_val_attr);
}

const ST_Period& CT_Period::get_val_attr() const
{
    if (m_val_attr)
    {
        return *m_val_attr;
    }
    return ST_Period::default_instance();
}

CT_Period* CT_Period::default_instance_ = NULL;

// CT_TrendlineLbl
CT_TrendlineLbl::CT_TrendlineLbl()
    :m_has_layout(false),
     m_layout(NULL),
     m_has_tx(false),
     m_tx(NULL),
     m_has_numFmt(false),
     m_numFmt(NULL),
     m_has_spPr(false),
     m_spPr(NULL),
     m_has_txPr(false),
     m_txPr(NULL),
     m_has_extLst(false),
     m_extLst(NULL)
{
}
CT_TrendlineLbl::~CT_TrendlineLbl()
{
    clear();
}
bool CT_TrendlineLbl::has_layout() const
{
    return m_has_layout;
}

CT_Layout* CT_TrendlineLbl::mutable_layout()
{
    m_has_layout = true;
    if (!m_layout)
    {
        m_layout = new CT_Layout();
    }
    return m_layout;
}

const CT_Layout& CT_TrendlineLbl::get_layout() const
{
    if (m_layout)
    {
        return *m_layout;
    }
    return CT_Layout::default_instance();
}

bool CT_TrendlineLbl::has_tx() const
{
    return m_has_tx;
}

CT_Tx* CT_TrendlineLbl::mutable_tx()
{
    m_has_tx = true;
    if (!m_tx)
    {
        m_tx = new CT_Tx();
    }
    return m_tx;
}

const CT_Tx& CT_TrendlineLbl::get_tx() const
{
    if (m_tx)
    {
        return *m_tx;
    }
    return CT_Tx::default_instance();
}

bool CT_TrendlineLbl::has_numFmt() const
{
    return m_has_numFmt;
}

CT_NumFmt* CT_TrendlineLbl::mutable_numFmt()
{
    m_has_numFmt = true;
    if (!m_numFmt)
    {
        m_numFmt = new CT_NumFmt();
    }
    return m_numFmt;
}

const CT_NumFmt& CT_TrendlineLbl::get_numFmt() const
{
    if (m_numFmt)
    {
        return *m_numFmt;
    }
    return CT_NumFmt::default_instance();
}

bool CT_TrendlineLbl::has_spPr() const
{
    return m_has_spPr;
}

ns_a::CT_ShapeProperties* CT_TrendlineLbl::mutable_spPr()
{
    m_has_spPr = true;
    if (!m_spPr)
    {
        m_spPr = new ns_a::CT_ShapeProperties();
    }
    return m_spPr;
}

const ns_a::CT_ShapeProperties& CT_TrendlineLbl::get_spPr() const
{
    if (m_spPr)
    {
        return *m_spPr;
    }
    return ns_a::CT_ShapeProperties::default_instance();
}

bool CT_TrendlineLbl::has_txPr() const
{
    return m_has_txPr;
}

ns_a::CT_TextBody* CT_TrendlineLbl::mutable_txPr()
{
    m_has_txPr = true;
    if (!m_txPr)
    {
        m_txPr = new ns_a::CT_TextBody();
    }
    return m_txPr;
}

const ns_a::CT_TextBody& CT_TrendlineLbl::get_txPr() const
{
    if (m_txPr)
    {
        return *m_txPr;
    }
    return ns_a::CT_TextBody::default_instance();
}

bool CT_TrendlineLbl::has_extLst() const
{
    return m_has_extLst;
}

CT_ExtensionList* CT_TrendlineLbl::mutable_extLst()
{
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new CT_ExtensionList();
    }
    return m_extLst;
}

const CT_ExtensionList& CT_TrendlineLbl::get_extLst() const
{
    if (m_extLst)
    {
        return *m_extLst;
    }
    return CT_ExtensionList::default_instance();
}

void CT_TrendlineLbl::clear()
{
    m_has_layout = false;

    if (m_layout)
    {
        delete m_layout;
        m_layout = NULL;
    }


    m_has_tx = false;

    if (m_tx)
    {
        delete m_tx;
        m_tx = NULL;
    }


    m_has_numFmt = false;

    if (m_numFmt)
    {
        delete m_numFmt;
        m_numFmt = NULL;
    }


    m_has_spPr = false;

    if (m_spPr)
    {
        delete m_spPr;
        m_spPr = NULL;
    }


    m_has_txPr = false;

    if (m_txPr)
    {
        delete m_txPr;
        m_txPr = NULL;
    }


    m_has_extLst = false;

    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }

}

void CT_TrendlineLbl::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";


    if (m_has_layout)
    {
        m_layout->toXmlElem("c:layout", "", _outStream);
    }


    if (m_has_tx)
    {
        m_tx->toXmlElem("c:tx", "", _outStream);
    }


    if (m_has_numFmt)
    {
        m_numFmt->toXmlElem("c:numFmt", "", _outStream);
    }


    if (m_has_spPr)
    {
        m_spPr->toXmlElem("c:spPr", "", _outStream);
    }


    if (m_has_txPr)
    {
        m_txPr->toXmlElem("c:txPr", "", _outStream);
    }


    if (m_has_extLst)
    {
        m_extLst->toXmlElem("c:extLst", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_TrendlineLbl& CT_TrendlineLbl::default_instance()
{
    if (!CT_TrendlineLbl::default_instance_)
    {
        CT_TrendlineLbl::default_instance_ = new CT_TrendlineLbl();
    }
    return *CT_TrendlineLbl::default_instance_;
}

CT_TrendlineLbl* CT_TrendlineLbl::default_instance_ = NULL;

// CT_Trendline
CT_Trendline::CT_Trendline()
    :m_has_name(false),
     m_name(""),
     m_has_spPr(false),
     m_spPr(NULL),
     m_has_trendlineType(false),
     m_trendlineType(NULL),
     m_has_order(false),
     m_order(NULL),
     m_has_period(false),
     m_period(NULL),
     m_has_forward(false),
     m_forward(NULL),
     m_has_backward(false),
     m_backward(NULL),
     m_has_intercept(false),
     m_intercept(NULL),
     m_has_dispRSqr(false),
     m_dispRSqr(NULL),
     m_has_dispEq(false),
     m_dispEq(NULL),
     m_has_trendlineLbl(false),
     m_trendlineLbl(NULL),
     m_has_extLst(false),
     m_extLst(NULL)
{
}
CT_Trendline::~CT_Trendline()
{
    clear();
}
bool CT_Trendline::has_name() const
{
    return m_has_name;
}

void CT_Trendline::set_name(const XSD::string_& _name)
{
    m_has_name = true;
    m_name = _name;
}

const XSD::string_& CT_Trendline::get_name() const
{
    return m_name;
}

bool CT_Trendline::has_spPr() const
{
    return m_has_spPr;
}

ns_a::CT_ShapeProperties* CT_Trendline::mutable_spPr()
{
    m_has_spPr = true;
    if (!m_spPr)
    {
        m_spPr = new ns_a::CT_ShapeProperties();
    }
    return m_spPr;
}

const ns_a::CT_ShapeProperties& CT_Trendline::get_spPr() const
{
    if (m_spPr)
    {
        return *m_spPr;
    }
    return ns_a::CT_ShapeProperties::default_instance();
}

bool CT_Trendline::has_trendlineType() const
{
    return m_has_trendlineType;
}

CT_TrendlineType* CT_Trendline::mutable_trendlineType()
{
    m_has_trendlineType = true;
    if (!m_trendlineType)
    {
        m_trendlineType = new CT_TrendlineType();
    }
    return m_trendlineType;
}

const CT_TrendlineType& CT_Trendline::get_trendlineType() const
{
    if (m_trendlineType)
    {
        return *m_trendlineType;
    }
    return CT_TrendlineType::default_instance();
}

bool CT_Trendline::has_order() const
{
    return m_has_order;
}

CT_Order* CT_Trendline::mutable_order()
{
    m_has_order = true;
    if (!m_order)
    {
        m_order = new CT_Order();
    }
    return m_order;
}

const CT_Order& CT_Trendline::get_order() const
{
    if (m_order)
    {
        return *m_order;
    }
    return CT_Order::default_instance();
}

bool CT_Trendline::has_period() const
{
    return m_has_period;
}

CT_Period* CT_Trendline::mutable_period()
{
    m_has_period = true;
    if (!m_period)
    {
        m_period = new CT_Period();
    }
    return m_period;
}

const CT_Period& CT_Trendline::get_period() const
{
    if (m_period)
    {
        return *m_period;
    }
    return CT_Period::default_instance();
}

bool CT_Trendline::has_forward() const
{
    return m_has_forward;
}

CT_Double* CT_Trendline::mutable_forward()
{
    m_has_forward = true;
    if (!m_forward)
    {
        m_forward = new CT_Double();
    }
    return m_forward;
}

const CT_Double& CT_Trendline::get_forward() const
{
    if (m_forward)
    {
        return *m_forward;
    }
    return CT_Double::default_instance();
}

bool CT_Trendline::has_backward() const
{
    return m_has_backward;
}

CT_Double* CT_Trendline::mutable_backward()
{
    m_has_backward = true;
    if (!m_backward)
    {
        m_backward = new CT_Double();
    }
    return m_backward;
}

const CT_Double& CT_Trendline::get_backward() const
{
    if (m_backward)
    {
        return *m_backward;
    }
    return CT_Double::default_instance();
}

bool CT_Trendline::has_intercept() const
{
    return m_has_intercept;
}

CT_Double* CT_Trendline::mutable_intercept()
{
    m_has_intercept = true;
    if (!m_intercept)
    {
        m_intercept = new CT_Double();
    }
    return m_intercept;
}

const CT_Double& CT_Trendline::get_intercept() const
{
    if (m_intercept)
    {
        return *m_intercept;
    }
    return CT_Double::default_instance();
}

bool CT_Trendline::has_dispRSqr() const
{
    return m_has_dispRSqr;
}

CT_Boolean* CT_Trendline::mutable_dispRSqr()
{
    m_has_dispRSqr = true;
    if (!m_dispRSqr)
    {
        m_dispRSqr = new CT_Boolean();
    }
    return m_dispRSqr;
}

const CT_Boolean& CT_Trendline::get_dispRSqr() const
{
    if (m_dispRSqr)
    {
        return *m_dispRSqr;
    }
    return CT_Boolean::default_instance();
}

bool CT_Trendline::has_dispEq() const
{
    return m_has_dispEq;
}

CT_Boolean* CT_Trendline::mutable_dispEq()
{
    m_has_dispEq = true;
    if (!m_dispEq)
    {
        m_dispEq = new CT_Boolean();
    }
    return m_dispEq;
}

const CT_Boolean& CT_Trendline::get_dispEq() const
{
    if (m_dispEq)
    {
        return *m_dispEq;
    }
    return CT_Boolean::default_instance();
}

bool CT_Trendline::has_trendlineLbl() const
{
    return m_has_trendlineLbl;
}

CT_TrendlineLbl* CT_Trendline::mutable_trendlineLbl()
{
    m_has_trendlineLbl = true;
    if (!m_trendlineLbl)
    {
        m_trendlineLbl = new CT_TrendlineLbl();
    }
    return m_trendlineLbl;
}

const CT_TrendlineLbl& CT_Trendline::get_trendlineLbl() const
{
    if (m_trendlineLbl)
    {
        return *m_trendlineLbl;
    }
    return CT_TrendlineLbl::default_instance();
}

bool CT_Trendline::has_extLst() const
{
    return m_has_extLst;
}

CT_ExtensionList* CT_Trendline::mutable_extLst()
{
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new CT_ExtensionList();
    }
    return m_extLst;
}

const CT_ExtensionList& CT_Trendline::get_extLst() const
{
    if (m_extLst)
    {
        return *m_extLst;
    }
    return CT_ExtensionList::default_instance();
}

void CT_Trendline::clear()
{
    m_has_name = false;
    m_name.clear();

    m_has_spPr = false;

    if (m_spPr)
    {
        delete m_spPr;
        m_spPr = NULL;
    }


    m_has_trendlineType = false;

    if (m_trendlineType)
    {
        delete m_trendlineType;
        m_trendlineType = NULL;
    }


    m_has_order = false;

    if (m_order)
    {
        delete m_order;
        m_order = NULL;
    }


    m_has_period = false;

    if (m_period)
    {
        delete m_period;
        m_period = NULL;
    }


    m_has_forward = false;

    if (m_forward)
    {
        delete m_forward;
        m_forward = NULL;
    }


    m_has_backward = false;

    if (m_backward)
    {
        delete m_backward;
        m_backward = NULL;
    }


    m_has_intercept = false;

    if (m_intercept)
    {
        delete m_intercept;
        m_intercept = NULL;
    }


    m_has_dispRSqr = false;

    if (m_dispRSqr)
    {
        delete m_dispRSqr;
        m_dispRSqr = NULL;
    }


    m_has_dispEq = false;

    if (m_dispEq)
    {
        delete m_dispEq;
        m_dispEq = NULL;
    }


    m_has_trendlineLbl = false;

    if (m_trendlineLbl)
    {
        delete m_trendlineLbl;
        m_trendlineLbl = NULL;
    }


    m_has_extLst = false;

    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }

}

void CT_Trendline::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";

    assert(m_has_trendlineType);


    if (m_has_name)
    {
        _outStream << "<c:name>" << m_name << "</c:name>";
    }


    if (m_has_spPr)
    {
        m_spPr->toXmlElem("c:spPr", "", _outStream);
    }


    if (m_has_trendlineType)
    {
        m_trendlineType->toXmlElem("c:trendlineType", "", _outStream);
    }


    if (m_has_order)
    {
        m_order->toXmlElem("c:order", "", _outStream);
    }


    if (m_has_period)
    {
        m_period->toXmlElem("c:period", "", _outStream);
    }


    if (m_has_forward)
    {
        m_forward->toXmlElem("c:forward", "", _outStream);
    }


    if (m_has_backward)
    {
        m_backward->toXmlElem("c:backward", "", _outStream);
    }


    if (m_has_intercept)
    {
        m_intercept->toXmlElem("c:intercept", "", _outStream);
    }


    if (m_has_dispRSqr)
    {
        m_dispRSqr->toXmlElem("c:dispRSqr", "", _outStream);
    }


    if (m_has_dispEq)
    {
        m_dispEq->toXmlElem("c:dispEq", "", _outStream);
    }


    if (m_has_trendlineLbl)
    {
        m_trendlineLbl->toXmlElem("c:trendlineLbl", "", _outStream);
    }


    if (m_has_extLst)
    {
        m_extLst->toXmlElem("c:extLst", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_Trendline& CT_Trendline::default_instance()
{
    if (!CT_Trendline::default_instance_)
    {
        CT_Trendline::default_instance_ = new CT_Trendline();
    }
    return *CT_Trendline::default_instance_;
}

CT_Trendline* CT_Trendline::default_instance_ = NULL;

// CT_ErrDir
CT_ErrDir::CT_ErrDir()
    :m_has_val_attr(false),
     m_val_attr(NULL)
{
}
CT_ErrDir::~CT_ErrDir()
{
    clear();
}
void CT_ErrDir::clear()
{
    m_has_val_attr = false;

    if (m_val_attr)
    {
        delete m_val_attr;
        m_val_attr = NULL;
    }

}

void CT_ErrDir::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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

const CT_ErrDir& CT_ErrDir::default_instance()
{
    if (!CT_ErrDir::default_instance_)
    {
        CT_ErrDir::default_instance_ = new CT_ErrDir();
    }
    return *CT_ErrDir::default_instance_;
}

bool CT_ErrDir::has_val_attr() const
{
    return m_has_val_attr;
}

void CT_ErrDir::set_val_attr(const ST_ErrDir& _val_attr)
{
    m_has_val_attr = true;
    m_val_attr = new ST_ErrDir(_val_attr);
}

const ST_ErrDir& CT_ErrDir::get_val_attr() const
{
    if (m_val_attr)
    {
        return *m_val_attr;
    }
    return ST_ErrDir::default_instance();
}

CT_ErrDir* CT_ErrDir::default_instance_ = NULL;

// CT_ErrBarType
CT_ErrBarType::CT_ErrBarType()
    :m_has_val_attr(false),
     m_val_attr(NULL)
{
}
CT_ErrBarType::~CT_ErrBarType()
{
    clear();
}
void CT_ErrBarType::clear()
{
    m_has_val_attr = false;

    if (m_val_attr)
    {
        delete m_val_attr;
        m_val_attr = NULL;
    }

}

void CT_ErrBarType::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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

const CT_ErrBarType& CT_ErrBarType::default_instance()
{
    if (!CT_ErrBarType::default_instance_)
    {
        CT_ErrBarType::default_instance_ = new CT_ErrBarType();
    }
    return *CT_ErrBarType::default_instance_;
}

bool CT_ErrBarType::has_val_attr() const
{
    return m_has_val_attr;
}

void CT_ErrBarType::set_val_attr(const ST_ErrBarType& _val_attr)
{
    m_has_val_attr = true;
    m_val_attr = new ST_ErrBarType(_val_attr);
}

const ST_ErrBarType& CT_ErrBarType::get_val_attr() const
{
    if (m_val_attr)
    {
        return *m_val_attr;
    }
    return ST_ErrBarType::default_instance();
}

CT_ErrBarType* CT_ErrBarType::default_instance_ = NULL;

// CT_ErrValType
CT_ErrValType::CT_ErrValType()
    :m_has_val_attr(false),
     m_val_attr(NULL)
{
}
CT_ErrValType::~CT_ErrValType()
{
    clear();
}
void CT_ErrValType::clear()
{
    m_has_val_attr = false;

    if (m_val_attr)
    {
        delete m_val_attr;
        m_val_attr = NULL;
    }

}

void CT_ErrValType::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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

const CT_ErrValType& CT_ErrValType::default_instance()
{
    if (!CT_ErrValType::default_instance_)
    {
        CT_ErrValType::default_instance_ = new CT_ErrValType();
    }
    return *CT_ErrValType::default_instance_;
}

bool CT_ErrValType::has_val_attr() const
{
    return m_has_val_attr;
}

void CT_ErrValType::set_val_attr(const ST_ErrValType& _val_attr)
{
    m_has_val_attr = true;
    m_val_attr = new ST_ErrValType(_val_attr);
}

const ST_ErrValType& CT_ErrValType::get_val_attr() const
{
    if (m_val_attr)
    {
        return *m_val_attr;
    }
    return ST_ErrValType::default_instance();
}

CT_ErrValType* CT_ErrValType::default_instance_ = NULL;

// CT_ErrBars
CT_ErrBars::CT_ErrBars()
    :m_has_errDir(false),
     m_errDir(NULL),
     m_has_errBarType(false),
     m_errBarType(NULL),
     m_has_errValType(false),
     m_errValType(NULL),
     m_has_noEndCap(false),
     m_noEndCap(NULL),
     m_has_plus(false),
     m_plus(NULL),
     m_has_minus(false),
     m_minus(NULL),
     m_has_val(false),
     m_val(NULL),
     m_has_spPr(false),
     m_spPr(NULL),
     m_has_extLst(false),
     m_extLst(NULL)
{
}
CT_ErrBars::~CT_ErrBars()
{
    clear();
}
bool CT_ErrBars::has_errDir() const
{
    return m_has_errDir;
}

CT_ErrDir* CT_ErrBars::mutable_errDir()
{
    m_has_errDir = true;
    if (!m_errDir)
    {
        m_errDir = new CT_ErrDir();
    }
    return m_errDir;
}

const CT_ErrDir& CT_ErrBars::get_errDir() const
{
    if (m_errDir)
    {
        return *m_errDir;
    }
    return CT_ErrDir::default_instance();
}

bool CT_ErrBars::has_errBarType() const
{
    return m_has_errBarType;
}

CT_ErrBarType* CT_ErrBars::mutable_errBarType()
{
    m_has_errBarType = true;
    if (!m_errBarType)
    {
        m_errBarType = new CT_ErrBarType();
    }
    return m_errBarType;
}

const CT_ErrBarType& CT_ErrBars::get_errBarType() const
{
    if (m_errBarType)
    {
        return *m_errBarType;
    }
    return CT_ErrBarType::default_instance();
}

bool CT_ErrBars::has_errValType() const
{
    return m_has_errValType;
}

CT_ErrValType* CT_ErrBars::mutable_errValType()
{
    m_has_errValType = true;
    if (!m_errValType)
    {
        m_errValType = new CT_ErrValType();
    }
    return m_errValType;
}

const CT_ErrValType& CT_ErrBars::get_errValType() const
{
    if (m_errValType)
    {
        return *m_errValType;
    }
    return CT_ErrValType::default_instance();
}

bool CT_ErrBars::has_noEndCap() const
{
    return m_has_noEndCap;
}

CT_Boolean* CT_ErrBars::mutable_noEndCap()
{
    m_has_noEndCap = true;
    if (!m_noEndCap)
    {
        m_noEndCap = new CT_Boolean();
    }
    return m_noEndCap;
}

const CT_Boolean& CT_ErrBars::get_noEndCap() const
{
    if (m_noEndCap)
    {
        return *m_noEndCap;
    }
    return CT_Boolean::default_instance();
}

bool CT_ErrBars::has_plus() const
{
    return m_has_plus;
}

CT_NumDataSource* CT_ErrBars::mutable_plus()
{
    m_has_plus = true;
    if (!m_plus)
    {
        m_plus = new CT_NumDataSource();
    }
    return m_plus;
}

const CT_NumDataSource& CT_ErrBars::get_plus() const
{
    if (m_plus)
    {
        return *m_plus;
    }
    return CT_NumDataSource::default_instance();
}

bool CT_ErrBars::has_minus() const
{
    return m_has_minus;
}

CT_NumDataSource* CT_ErrBars::mutable_minus()
{
    m_has_minus = true;
    if (!m_minus)
    {
        m_minus = new CT_NumDataSource();
    }
    return m_minus;
}

const CT_NumDataSource& CT_ErrBars::get_minus() const
{
    if (m_minus)
    {
        return *m_minus;
    }
    return CT_NumDataSource::default_instance();
}

bool CT_ErrBars::has_val() const
{
    return m_has_val;
}

CT_Double* CT_ErrBars::mutable_val()
{
    m_has_val = true;
    if (!m_val)
    {
        m_val = new CT_Double();
    }
    return m_val;
}

const CT_Double& CT_ErrBars::get_val() const
{
    if (m_val)
    {
        return *m_val;
    }
    return CT_Double::default_instance();
}

bool CT_ErrBars::has_spPr() const
{
    return m_has_spPr;
}

ns_a::CT_ShapeProperties* CT_ErrBars::mutable_spPr()
{
    m_has_spPr = true;
    if (!m_spPr)
    {
        m_spPr = new ns_a::CT_ShapeProperties();
    }
    return m_spPr;
}

const ns_a::CT_ShapeProperties& CT_ErrBars::get_spPr() const
{
    if (m_spPr)
    {
        return *m_spPr;
    }
    return ns_a::CT_ShapeProperties::default_instance();
}

bool CT_ErrBars::has_extLst() const
{
    return m_has_extLst;
}

CT_ExtensionList* CT_ErrBars::mutable_extLst()
{
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new CT_ExtensionList();
    }
    return m_extLst;
}

const CT_ExtensionList& CT_ErrBars::get_extLst() const
{
    if (m_extLst)
    {
        return *m_extLst;
    }
    return CT_ExtensionList::default_instance();
}

void CT_ErrBars::clear()
{
    m_has_errDir = false;

    if (m_errDir)
    {
        delete m_errDir;
        m_errDir = NULL;
    }


    m_has_errBarType = false;

    if (m_errBarType)
    {
        delete m_errBarType;
        m_errBarType = NULL;
    }


    m_has_errValType = false;

    if (m_errValType)
    {
        delete m_errValType;
        m_errValType = NULL;
    }


    m_has_noEndCap = false;

    if (m_noEndCap)
    {
        delete m_noEndCap;
        m_noEndCap = NULL;
    }


    m_has_plus = false;

    if (m_plus)
    {
        delete m_plus;
        m_plus = NULL;
    }


    m_has_minus = false;

    if (m_minus)
    {
        delete m_minus;
        m_minus = NULL;
    }


    m_has_val = false;

    if (m_val)
    {
        delete m_val;
        m_val = NULL;
    }


    m_has_spPr = false;

    if (m_spPr)
    {
        delete m_spPr;
        m_spPr = NULL;
    }


    m_has_extLst = false;

    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }

}

void CT_ErrBars::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";

    assert(m_has_errBarType);


    assert(m_has_errValType);


    if (m_has_errDir)
    {
        m_errDir->toXmlElem("c:errDir", "", _outStream);
    }


    if (m_has_errBarType)
    {
        m_errBarType->toXmlElem("c:errBarType", "", _outStream);
    }


    if (m_has_errValType)
    {
        m_errValType->toXmlElem("c:errValType", "", _outStream);
    }


    if (m_has_noEndCap)
    {
        m_noEndCap->toXmlElem("c:noEndCap", "", _outStream);
    }


    if (m_has_plus)
    {
        m_plus->toXmlElem("c:plus", "", _outStream);
    }


    if (m_has_minus)
    {
        m_minus->toXmlElem("c:minus", "", _outStream);
    }


    if (m_has_val)
    {
        m_val->toXmlElem("c:val", "", _outStream);
    }


    if (m_has_spPr)
    {
        m_spPr->toXmlElem("c:spPr", "", _outStream);
    }


    if (m_has_extLst)
    {
        m_extLst->toXmlElem("c:extLst", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_ErrBars& CT_ErrBars::default_instance()
{
    if (!CT_ErrBars::default_instance_)
    {
        CT_ErrBars::default_instance_ = new CT_ErrBars();
    }
    return *CT_ErrBars::default_instance_;
}

CT_ErrBars* CT_ErrBars::default_instance_ = NULL;

// CT_UpDownBar
CT_UpDownBar::CT_UpDownBar()
    :m_has_spPr(false),
     m_spPr(NULL)
{
}
CT_UpDownBar::~CT_UpDownBar()
{
    clear();
}
bool CT_UpDownBar::has_spPr() const
{
    return m_has_spPr;
}

ns_a::CT_ShapeProperties* CT_UpDownBar::mutable_spPr()
{
    m_has_spPr = true;
    if (!m_spPr)
    {
        m_spPr = new ns_a::CT_ShapeProperties();
    }
    return m_spPr;
}

const ns_a::CT_ShapeProperties& CT_UpDownBar::get_spPr() const
{
    if (m_spPr)
    {
        return *m_spPr;
    }
    return ns_a::CT_ShapeProperties::default_instance();
}

void CT_UpDownBar::clear()
{
    m_has_spPr = false;

    if (m_spPr)
    {
        delete m_spPr;
        m_spPr = NULL;
    }

}

void CT_UpDownBar::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";


    if (m_has_spPr)
    {
        m_spPr->toXmlElem("c:spPr", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_UpDownBar& CT_UpDownBar::default_instance()
{
    if (!CT_UpDownBar::default_instance_)
    {
        CT_UpDownBar::default_instance_ = new CT_UpDownBar();
    }
    return *CT_UpDownBar::default_instance_;
}

CT_UpDownBar* CT_UpDownBar::default_instance_ = NULL;

// CT_UpDownBars
CT_UpDownBars::CT_UpDownBars()
    :m_has_gapWidth(false),
     m_gapWidth(NULL),
     m_has_upBars(false),
     m_upBars(NULL),
     m_has_downBars(false),
     m_downBars(NULL),
     m_has_extLst(false),
     m_extLst(NULL)
{
}
CT_UpDownBars::~CT_UpDownBars()
{
    clear();
}
bool CT_UpDownBars::has_gapWidth() const
{
    return m_has_gapWidth;
}

CT_GapAmount* CT_UpDownBars::mutable_gapWidth()
{
    m_has_gapWidth = true;
    if (!m_gapWidth)
    {
        m_gapWidth = new CT_GapAmount();
    }
    return m_gapWidth;
}

const CT_GapAmount& CT_UpDownBars::get_gapWidth() const
{
    if (m_gapWidth)
    {
        return *m_gapWidth;
    }
    return CT_GapAmount::default_instance();
}

bool CT_UpDownBars::has_upBars() const
{
    return m_has_upBars;
}

CT_UpDownBar* CT_UpDownBars::mutable_upBars()
{
    m_has_upBars = true;
    if (!m_upBars)
    {
        m_upBars = new CT_UpDownBar();
    }
    return m_upBars;
}

const CT_UpDownBar& CT_UpDownBars::get_upBars() const
{
    if (m_upBars)
    {
        return *m_upBars;
    }
    return CT_UpDownBar::default_instance();
}

bool CT_UpDownBars::has_downBars() const
{
    return m_has_downBars;
}

CT_UpDownBar* CT_UpDownBars::mutable_downBars()
{
    m_has_downBars = true;
    if (!m_downBars)
    {
        m_downBars = new CT_UpDownBar();
    }
    return m_downBars;
}

const CT_UpDownBar& CT_UpDownBars::get_downBars() const
{
    if (m_downBars)
    {
        return *m_downBars;
    }
    return CT_UpDownBar::default_instance();
}

bool CT_UpDownBars::has_extLst() const
{
    return m_has_extLst;
}

CT_ExtensionList* CT_UpDownBars::mutable_extLst()
{
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new CT_ExtensionList();
    }
    return m_extLst;
}

const CT_ExtensionList& CT_UpDownBars::get_extLst() const
{
    if (m_extLst)
    {
        return *m_extLst;
    }
    return CT_ExtensionList::default_instance();
}

void CT_UpDownBars::clear()
{
    m_has_gapWidth = false;

    if (m_gapWidth)
    {
        delete m_gapWidth;
        m_gapWidth = NULL;
    }


    m_has_upBars = false;

    if (m_upBars)
    {
        delete m_upBars;
        m_upBars = NULL;
    }


    m_has_downBars = false;

    if (m_downBars)
    {
        delete m_downBars;
        m_downBars = NULL;
    }


    m_has_extLst = false;

    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }

}

void CT_UpDownBars::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";


    if (m_has_gapWidth)
    {
        m_gapWidth->toXmlElem("c:gapWidth", "", _outStream);
    }


    if (m_has_upBars)
    {
        m_upBars->toXmlElem("c:upBars", "", _outStream);
    }


    if (m_has_downBars)
    {
        m_downBars->toXmlElem("c:downBars", "", _outStream);
    }


    if (m_has_extLst)
    {
        m_extLst->toXmlElem("c:extLst", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_UpDownBars& CT_UpDownBars::default_instance()
{
    if (!CT_UpDownBars::default_instance_)
    {
        CT_UpDownBars::default_instance_ = new CT_UpDownBars();
    }
    return *CT_UpDownBars::default_instance_;
}

CT_UpDownBars* CT_UpDownBars::default_instance_ = NULL;

// CT_LineSer
CT_LineSer::CT_LineSer()
    :m_has_idx(false),
     m_idx(NULL),
     m_has_order(false),
     m_order(NULL),
     m_has_tx(false),
     m_tx(NULL),
     m_has_spPr(false),
     m_spPr(NULL),
     m_has_marker(false),
     m_marker(NULL),
     m_has_dLbls(false),
     m_dLbls(NULL),
     m_has_errBars(false),
     m_errBars(NULL),
     m_has_cat(false),
     m_cat(NULL),
     m_has_val(false),
     m_val(NULL),
     m_has_smooth(false),
     m_smooth(NULL),
     m_has_extLst(false),
     m_extLst(NULL)
{
}
CT_LineSer::~CT_LineSer()
{
    clear();
}
bool CT_LineSer::has_idx() const
{
    return m_has_idx;
}

CT_UnsignedInt* CT_LineSer::mutable_idx()
{
    m_has_idx = true;
    if (!m_idx)
    {
        m_idx = new CT_UnsignedInt();
    }
    return m_idx;
}

const CT_UnsignedInt& CT_LineSer::get_idx() const
{
    if (m_idx)
    {
        return *m_idx;
    }
    return CT_UnsignedInt::default_instance();
}

bool CT_LineSer::has_order() const
{
    return m_has_order;
}

CT_UnsignedInt* CT_LineSer::mutable_order()
{
    m_has_order = true;
    if (!m_order)
    {
        m_order = new CT_UnsignedInt();
    }
    return m_order;
}

const CT_UnsignedInt& CT_LineSer::get_order() const
{
    if (m_order)
    {
        return *m_order;
    }
    return CT_UnsignedInt::default_instance();
}

bool CT_LineSer::has_tx() const
{
    return m_has_tx;
}

CT_SerTx* CT_LineSer::mutable_tx()
{
    m_has_tx = true;
    if (!m_tx)
    {
        m_tx = new CT_SerTx();
    }
    return m_tx;
}

const CT_SerTx& CT_LineSer::get_tx() const
{
    if (m_tx)
    {
        return *m_tx;
    }
    return CT_SerTx::default_instance();
}

bool CT_LineSer::has_spPr() const
{
    return m_has_spPr;
}

ns_a::CT_ShapeProperties* CT_LineSer::mutable_spPr()
{
    m_has_spPr = true;
    if (!m_spPr)
    {
        m_spPr = new ns_a::CT_ShapeProperties();
    }
    return m_spPr;
}

const ns_a::CT_ShapeProperties& CT_LineSer::get_spPr() const
{
    if (m_spPr)
    {
        return *m_spPr;
    }
    return ns_a::CT_ShapeProperties::default_instance();
}

bool CT_LineSer::has_marker() const
{
    return m_has_marker;
}

CT_Marker* CT_LineSer::mutable_marker()
{
    m_has_marker = true;
    if (!m_marker)
    {
        m_marker = new CT_Marker();
    }
    return m_marker;
}

const CT_Marker& CT_LineSer::get_marker() const
{
    if (m_marker)
    {
        return *m_marker;
    }
    return CT_Marker::default_instance();
}

CT_DPt* CT_LineSer::add_dPt()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_DPt* pNewChild = pChildGroup->mutable_dPt();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

bool CT_LineSer::has_dLbls() const
{
    return m_has_dLbls;
}

CT_DLbls* CT_LineSer::mutable_dLbls()
{
    m_has_dLbls = true;
    if (!m_dLbls)
    {
        m_dLbls = new CT_DLbls();
    }
    return m_dLbls;
}

const CT_DLbls& CT_LineSer::get_dLbls() const
{
    if (m_dLbls)
    {
        return *m_dLbls;
    }
    return CT_DLbls::default_instance();
}

CT_Trendline* CT_LineSer::add_trendline()
{
    ChildGroup_2 *pChildGroup = new ChildGroup_2();
    CT_Trendline* pNewChild = pChildGroup->mutable_trendline();
    m_childGroupList_2.push_back(pChildGroup);
    return pNewChild;
}

bool CT_LineSer::has_errBars() const
{
    return m_has_errBars;
}

CT_ErrBars* CT_LineSer::mutable_errBars()
{
    m_has_errBars = true;
    if (!m_errBars)
    {
        m_errBars = new CT_ErrBars();
    }
    return m_errBars;
}

const CT_ErrBars& CT_LineSer::get_errBars() const
{
    if (m_errBars)
    {
        return *m_errBars;
    }
    return CT_ErrBars::default_instance();
}

bool CT_LineSer::has_cat() const
{
    return m_has_cat;
}

CT_AxDataSource* CT_LineSer::mutable_cat()
{
    m_has_cat = true;
    if (!m_cat)
    {
        m_cat = new CT_AxDataSource();
    }
    return m_cat;
}

const CT_AxDataSource& CT_LineSer::get_cat() const
{
    if (m_cat)
    {
        return *m_cat;
    }
    return CT_AxDataSource::default_instance();
}

bool CT_LineSer::has_val() const
{
    return m_has_val;
}

CT_NumDataSource* CT_LineSer::mutable_val()
{
    m_has_val = true;
    if (!m_val)
    {
        m_val = new CT_NumDataSource();
    }
    return m_val;
}

const CT_NumDataSource& CT_LineSer::get_val() const
{
    if (m_val)
    {
        return *m_val;
    }
    return CT_NumDataSource::default_instance();
}

bool CT_LineSer::has_smooth() const
{
    return m_has_smooth;
}

CT_Boolean* CT_LineSer::mutable_smooth()
{
    m_has_smooth = true;
    if (!m_smooth)
    {
        m_smooth = new CT_Boolean();
    }
    return m_smooth;
}

const CT_Boolean& CT_LineSer::get_smooth() const
{
    if (m_smooth)
    {
        return *m_smooth;
    }
    return CT_Boolean::default_instance();
}

bool CT_LineSer::has_extLst() const
{
    return m_has_extLst;
}

CT_ExtensionList* CT_LineSer::mutable_extLst()
{
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new CT_ExtensionList();
    }
    return m_extLst;
}

const CT_ExtensionList& CT_LineSer::get_extLst() const
{
    if (m_extLst)
    {
        return *m_extLst;
    }
    return CT_ExtensionList::default_instance();
}

void CT_LineSer::clear()
{
    m_has_idx = false;

    if (m_idx)
    {
        delete m_idx;
        m_idx = NULL;
    }


    m_has_order = false;

    if (m_order)
    {
        delete m_order;
        m_order = NULL;
    }


    m_has_tx = false;

    if (m_tx)
    {
        delete m_tx;
        m_tx = NULL;
    }


    m_has_spPr = false;

    if (m_spPr)
    {
        delete m_spPr;
        m_spPr = NULL;
    }


    m_has_marker = false;

    if (m_marker)
    {
        delete m_marker;
        m_marker = NULL;
    }


    {
        vector<ChildGroup_1*>::iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_1.clear();
    }

    m_has_dLbls = false;

    if (m_dLbls)
    {
        delete m_dLbls;
        m_dLbls = NULL;
    }


    {
        vector<ChildGroup_2*>::iterator iter;
        for (iter = m_childGroupList_2.begin(); iter != m_childGroupList_2.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_2.clear();
    }

    m_has_errBars = false;

    if (m_errBars)
    {
        delete m_errBars;
        m_errBars = NULL;
    }


    m_has_cat = false;

    if (m_cat)
    {
        delete m_cat;
        m_cat = NULL;
    }


    m_has_val = false;

    if (m_val)
    {
        delete m_val;
        m_val = NULL;
    }


    m_has_smooth = false;

    if (m_smooth)
    {
        delete m_smooth;
        m_smooth = NULL;
    }


    m_has_extLst = false;

    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }

}

void CT_LineSer::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";

    assert(m_has_idx);


    assert(m_has_order);


    if (m_has_idx)
    {
        m_idx->toXmlElem("c:idx", "", _outStream);
    }


    if (m_has_order)
    {
        m_order->toXmlElem("c:order", "", _outStream);
    }


    if (m_has_tx)
    {
        m_tx->toXmlElem("c:tx", "", _outStream);
    }


    if (m_has_spPr)
    {
        m_spPr->toXmlElem("c:spPr", "", _outStream);
    }


    if (m_has_marker)
    {
        m_marker->toXmlElem("c:marker", "", _outStream);
    }

    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_dPt())
            {
                (*iter)->get_dPt().toXmlElem("c:dPt", "", _outStream);
            }


        }
    }


    if (m_has_dLbls)
    {
        m_dLbls->toXmlElem("c:dLbls", "", _outStream);
    }

    {
        vector<ChildGroup_2*>::const_iterator iter;
        for (iter = m_childGroupList_2.begin(); iter != m_childGroupList_2.end(); ++iter)
        {
            if ((*iter)->has_trendline())
            {
                (*iter)->get_trendline().toXmlElem("c:trendline", "", _outStream);
            }


        }
    }


    if (m_has_errBars)
    {
        m_errBars->toXmlElem("c:errBars", "", _outStream);
    }


    if (m_has_cat)
    {
        m_cat->toXmlElem("c:cat", "", _outStream);
    }


    if (m_has_val)
    {
        m_val->toXmlElem("c:val", "", _outStream);
    }


    if (m_has_smooth)
    {
        m_smooth->toXmlElem("c:smooth", "", _outStream);
    }


    if (m_has_extLst)
    {
        m_extLst->toXmlElem("c:extLst", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_LineSer& CT_LineSer::default_instance()
{
    if (!CT_LineSer::default_instance_)
    {
        CT_LineSer::default_instance_ = new CT_LineSer();
    }
    return *CT_LineSer::default_instance_;
}


// CT_LineSer::ChildGroup_1
CT_LineSer::ChildGroup_1::ChildGroup_1()
    :m_has_dPt(false),
     m_dPt(NULL)
{
}
bool CT_LineSer::ChildGroup_1::has_dPt() const
{
    return m_has_dPt;
}

CT_DPt* CT_LineSer::ChildGroup_1::mutable_dPt()
{

    m_has_dPt = true;
    if (!m_dPt)
    {
        m_dPt = new CT_DPt();
    }
    return m_dPt;
}

const CT_DPt& CT_LineSer::ChildGroup_1::get_dPt() const
{
    if (m_dPt)
    {
        return *m_dPt;
    }
    return CT_DPt::default_instance();
}


// CT_LineSer::ChildGroup_2
CT_LineSer::ChildGroup_2::ChildGroup_2()
    :m_has_trendline(false),
     m_trendline(NULL)
{
}
bool CT_LineSer::ChildGroup_2::has_trendline() const
{
    return m_has_trendline;
}

CT_Trendline* CT_LineSer::ChildGroup_2::mutable_trendline()
{

    m_has_trendline = true;
    if (!m_trendline)
    {
        m_trendline = new CT_Trendline();
    }
    return m_trendline;
}

const CT_Trendline& CT_LineSer::ChildGroup_2::get_trendline() const
{
    if (m_trendline)
    {
        return *m_trendline;
    }
    return CT_Trendline::default_instance();
}

CT_LineSer* CT_LineSer::default_instance_ = NULL;

// CT_ScatterSer
CT_ScatterSer::CT_ScatterSer()
    :m_has_idx(false),
     m_idx(NULL),
     m_has_order(false),
     m_order(NULL),
     m_has_tx(false),
     m_tx(NULL),
     m_has_spPr(false),
     m_spPr(NULL),
     m_has_marker(false),
     m_marker(NULL),
     m_has_dLbls(false),
     m_dLbls(NULL),
     m_has_xVal(false),
     m_xVal(NULL),
     m_has_yVal(false),
     m_yVal(NULL),
     m_has_smooth(false),
     m_smooth(NULL),
     m_has_extLst(false),
     m_extLst(NULL)
{
}
CT_ScatterSer::~CT_ScatterSer()
{
    clear();
}
bool CT_ScatterSer::has_idx() const
{
    return m_has_idx;
}

CT_UnsignedInt* CT_ScatterSer::mutable_idx()
{
    m_has_idx = true;
    if (!m_idx)
    {
        m_idx = new CT_UnsignedInt();
    }
    return m_idx;
}

const CT_UnsignedInt& CT_ScatterSer::get_idx() const
{
    if (m_idx)
    {
        return *m_idx;
    }
    return CT_UnsignedInt::default_instance();
}

bool CT_ScatterSer::has_order() const
{
    return m_has_order;
}

CT_UnsignedInt* CT_ScatterSer::mutable_order()
{
    m_has_order = true;
    if (!m_order)
    {
        m_order = new CT_UnsignedInt();
    }
    return m_order;
}

const CT_UnsignedInt& CT_ScatterSer::get_order() const
{
    if (m_order)
    {
        return *m_order;
    }
    return CT_UnsignedInt::default_instance();
}

bool CT_ScatterSer::has_tx() const
{
    return m_has_tx;
}

CT_SerTx* CT_ScatterSer::mutable_tx()
{
    m_has_tx = true;
    if (!m_tx)
    {
        m_tx = new CT_SerTx();
    }
    return m_tx;
}

const CT_SerTx& CT_ScatterSer::get_tx() const
{
    if (m_tx)
    {
        return *m_tx;
    }
    return CT_SerTx::default_instance();
}

bool CT_ScatterSer::has_spPr() const
{
    return m_has_spPr;
}

ns_a::CT_ShapeProperties* CT_ScatterSer::mutable_spPr()
{
    m_has_spPr = true;
    if (!m_spPr)
    {
        m_spPr = new ns_a::CT_ShapeProperties();
    }
    return m_spPr;
}

const ns_a::CT_ShapeProperties& CT_ScatterSer::get_spPr() const
{
    if (m_spPr)
    {
        return *m_spPr;
    }
    return ns_a::CT_ShapeProperties::default_instance();
}

bool CT_ScatterSer::has_marker() const
{
    return m_has_marker;
}

CT_Marker* CT_ScatterSer::mutable_marker()
{
    m_has_marker = true;
    if (!m_marker)
    {
        m_marker = new CT_Marker();
    }
    return m_marker;
}

const CT_Marker& CT_ScatterSer::get_marker() const
{
    if (m_marker)
    {
        return *m_marker;
    }
    return CT_Marker::default_instance();
}

CT_DPt* CT_ScatterSer::add_dPt()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_DPt* pNewChild = pChildGroup->mutable_dPt();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

bool CT_ScatterSer::has_dLbls() const
{
    return m_has_dLbls;
}

CT_DLbls* CT_ScatterSer::mutable_dLbls()
{
    m_has_dLbls = true;
    if (!m_dLbls)
    {
        m_dLbls = new CT_DLbls();
    }
    return m_dLbls;
}

const CT_DLbls& CT_ScatterSer::get_dLbls() const
{
    if (m_dLbls)
    {
        return *m_dLbls;
    }
    return CT_DLbls::default_instance();
}

CT_Trendline* CT_ScatterSer::add_trendline()
{
    ChildGroup_2 *pChildGroup = new ChildGroup_2();
    CT_Trendline* pNewChild = pChildGroup->mutable_trendline();
    m_childGroupList_2.push_back(pChildGroup);
    return pNewChild;
}

CT_ErrBars* CT_ScatterSer::add_errBars()
{
    ChildGroup_3 *pChildGroup = new ChildGroup_3();
    CT_ErrBars* pNewChild = pChildGroup->mutable_errBars();
    m_childGroupList_3.push_back(pChildGroup);
    return pNewChild;
}

bool CT_ScatterSer::has_xVal() const
{
    return m_has_xVal;
}

CT_AxDataSource* CT_ScatterSer::mutable_xVal()
{
    m_has_xVal = true;
    if (!m_xVal)
    {
        m_xVal = new CT_AxDataSource();
    }
    return m_xVal;
}

const CT_AxDataSource& CT_ScatterSer::get_xVal() const
{
    if (m_xVal)
    {
        return *m_xVal;
    }
    return CT_AxDataSource::default_instance();
}

bool CT_ScatterSer::has_yVal() const
{
    return m_has_yVal;
}

CT_NumDataSource* CT_ScatterSer::mutable_yVal()
{
    m_has_yVal = true;
    if (!m_yVal)
    {
        m_yVal = new CT_NumDataSource();
    }
    return m_yVal;
}

const CT_NumDataSource& CT_ScatterSer::get_yVal() const
{
    if (m_yVal)
    {
        return *m_yVal;
    }
    return CT_NumDataSource::default_instance();
}

bool CT_ScatterSer::has_smooth() const
{
    return m_has_smooth;
}

CT_Boolean* CT_ScatterSer::mutable_smooth()
{
    m_has_smooth = true;
    if (!m_smooth)
    {
        m_smooth = new CT_Boolean();
    }
    return m_smooth;
}

const CT_Boolean& CT_ScatterSer::get_smooth() const
{
    if (m_smooth)
    {
        return *m_smooth;
    }
    return CT_Boolean::default_instance();
}

bool CT_ScatterSer::has_extLst() const
{
    return m_has_extLst;
}

CT_ExtensionList* CT_ScatterSer::mutable_extLst()
{
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new CT_ExtensionList();
    }
    return m_extLst;
}

const CT_ExtensionList& CT_ScatterSer::get_extLst() const
{
    if (m_extLst)
    {
        return *m_extLst;
    }
    return CT_ExtensionList::default_instance();
}

void CT_ScatterSer::clear()
{
    m_has_idx = false;

    if (m_idx)
    {
        delete m_idx;
        m_idx = NULL;
    }


    m_has_order = false;

    if (m_order)
    {
        delete m_order;
        m_order = NULL;
    }


    m_has_tx = false;

    if (m_tx)
    {
        delete m_tx;
        m_tx = NULL;
    }


    m_has_spPr = false;

    if (m_spPr)
    {
        delete m_spPr;
        m_spPr = NULL;
    }


    m_has_marker = false;

    if (m_marker)
    {
        delete m_marker;
        m_marker = NULL;
    }


    {
        vector<ChildGroup_1*>::iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_1.clear();
    }

    m_has_dLbls = false;

    if (m_dLbls)
    {
        delete m_dLbls;
        m_dLbls = NULL;
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

    m_has_xVal = false;

    if (m_xVal)
    {
        delete m_xVal;
        m_xVal = NULL;
    }


    m_has_yVal = false;

    if (m_yVal)
    {
        delete m_yVal;
        m_yVal = NULL;
    }


    m_has_smooth = false;

    if (m_smooth)
    {
        delete m_smooth;
        m_smooth = NULL;
    }


    m_has_extLst = false;

    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }

}

void CT_ScatterSer::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";

    assert(m_has_idx);


    assert(m_has_order);


    if (m_has_idx)
    {
        m_idx->toXmlElem("c:idx", "", _outStream);
    }


    if (m_has_order)
    {
        m_order->toXmlElem("c:order", "", _outStream);
    }


    if (m_has_tx)
    {
        m_tx->toXmlElem("c:tx", "", _outStream);
    }


    if (m_has_spPr)
    {
        m_spPr->toXmlElem("c:spPr", "", _outStream);
    }


    if (m_has_marker)
    {
        m_marker->toXmlElem("c:marker", "", _outStream);
    }

    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_dPt())
            {
                (*iter)->get_dPt().toXmlElem("c:dPt", "", _outStream);
            }


        }
    }


    if (m_has_dLbls)
    {
        m_dLbls->toXmlElem("c:dLbls", "", _outStream);
    }

    {
        vector<ChildGroup_2*>::const_iterator iter;
        for (iter = m_childGroupList_2.begin(); iter != m_childGroupList_2.end(); ++iter)
        {
            if ((*iter)->has_trendline())
            {
                (*iter)->get_trendline().toXmlElem("c:trendline", "", _outStream);
            }


        }
    }

    {
        int childSize = count_if(m_childGroupList_3.begin(), m_childGroupList_3.end(), mem_fun(&ChildGroup_3::has_errBars));
        assert(0 <= childSize && childSize <= 2);
    }

    {
        vector<ChildGroup_3*>::const_iterator iter;
        for (iter = m_childGroupList_3.begin(); iter != m_childGroupList_3.end(); ++iter)
        {
            if ((*iter)->has_errBars())
            {
                (*iter)->get_errBars().toXmlElem("c:errBars", "", _outStream);
            }


        }
    }


    if (m_has_xVal)
    {
        m_xVal->toXmlElem("c:xVal", "", _outStream);
    }


    if (m_has_yVal)
    {
        m_yVal->toXmlElem("c:yVal", "", _outStream);
    }


    if (m_has_smooth)
    {
        m_smooth->toXmlElem("c:smooth", "", _outStream);
    }


    if (m_has_extLst)
    {
        m_extLst->toXmlElem("c:extLst", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_ScatterSer& CT_ScatterSer::default_instance()
{
    if (!CT_ScatterSer::default_instance_)
    {
        CT_ScatterSer::default_instance_ = new CT_ScatterSer();
    }
    return *CT_ScatterSer::default_instance_;
}


// CT_ScatterSer::ChildGroup_1
CT_ScatterSer::ChildGroup_1::ChildGroup_1()
    :m_has_dPt(false),
     m_dPt(NULL)
{
}
bool CT_ScatterSer::ChildGroup_1::has_dPt() const
{
    return m_has_dPt;
}

CT_DPt* CT_ScatterSer::ChildGroup_1::mutable_dPt()
{

    m_has_dPt = true;
    if (!m_dPt)
    {
        m_dPt = new CT_DPt();
    }
    return m_dPt;
}

const CT_DPt& CT_ScatterSer::ChildGroup_1::get_dPt() const
{
    if (m_dPt)
    {
        return *m_dPt;
    }
    return CT_DPt::default_instance();
}


// CT_ScatterSer::ChildGroup_2
CT_ScatterSer::ChildGroup_2::ChildGroup_2()
    :m_has_trendline(false),
     m_trendline(NULL)
{
}
bool CT_ScatterSer::ChildGroup_2::has_trendline() const
{
    return m_has_trendline;
}

CT_Trendline* CT_ScatterSer::ChildGroup_2::mutable_trendline()
{

    m_has_trendline = true;
    if (!m_trendline)
    {
        m_trendline = new CT_Trendline();
    }
    return m_trendline;
}

const CT_Trendline& CT_ScatterSer::ChildGroup_2::get_trendline() const
{
    if (m_trendline)
    {
        return *m_trendline;
    }
    return CT_Trendline::default_instance();
}


// CT_ScatterSer::ChildGroup_3
CT_ScatterSer::ChildGroup_3::ChildGroup_3()
    :m_has_errBars(false),
     m_errBars(NULL)
{
}
bool CT_ScatterSer::ChildGroup_3::has_errBars() const
{
    return m_has_errBars;
}

CT_ErrBars* CT_ScatterSer::ChildGroup_3::mutable_errBars()
{

    m_has_errBars = true;
    if (!m_errBars)
    {
        m_errBars = new CT_ErrBars();
    }
    return m_errBars;
}

const CT_ErrBars& CT_ScatterSer::ChildGroup_3::get_errBars() const
{
    if (m_errBars)
    {
        return *m_errBars;
    }
    return CT_ErrBars::default_instance();
}

CT_ScatterSer* CT_ScatterSer::default_instance_ = NULL;

// CT_RadarSer
CT_RadarSer::CT_RadarSer()
    :m_has_idx(false),
     m_idx(NULL),
     m_has_order(false),
     m_order(NULL),
     m_has_tx(false),
     m_tx(NULL),
     m_has_spPr(false),
     m_spPr(NULL),
     m_has_marker(false),
     m_marker(NULL),
     m_has_dLbls(false),
     m_dLbls(NULL),
     m_has_cat(false),
     m_cat(NULL),
     m_has_val(false),
     m_val(NULL),
     m_has_extLst(false),
     m_extLst(NULL)
{
}
CT_RadarSer::~CT_RadarSer()
{
    clear();
}
bool CT_RadarSer::has_idx() const
{
    return m_has_idx;
}

CT_UnsignedInt* CT_RadarSer::mutable_idx()
{
    m_has_idx = true;
    if (!m_idx)
    {
        m_idx = new CT_UnsignedInt();
    }
    return m_idx;
}

const CT_UnsignedInt& CT_RadarSer::get_idx() const
{
    if (m_idx)
    {
        return *m_idx;
    }
    return CT_UnsignedInt::default_instance();
}

bool CT_RadarSer::has_order() const
{
    return m_has_order;
}

CT_UnsignedInt* CT_RadarSer::mutable_order()
{
    m_has_order = true;
    if (!m_order)
    {
        m_order = new CT_UnsignedInt();
    }
    return m_order;
}

const CT_UnsignedInt& CT_RadarSer::get_order() const
{
    if (m_order)
    {
        return *m_order;
    }
    return CT_UnsignedInt::default_instance();
}

bool CT_RadarSer::has_tx() const
{
    return m_has_tx;
}

CT_SerTx* CT_RadarSer::mutable_tx()
{
    m_has_tx = true;
    if (!m_tx)
    {
        m_tx = new CT_SerTx();
    }
    return m_tx;
}

const CT_SerTx& CT_RadarSer::get_tx() const
{
    if (m_tx)
    {
        return *m_tx;
    }
    return CT_SerTx::default_instance();
}

bool CT_RadarSer::has_spPr() const
{
    return m_has_spPr;
}

ns_a::CT_ShapeProperties* CT_RadarSer::mutable_spPr()
{
    m_has_spPr = true;
    if (!m_spPr)
    {
        m_spPr = new ns_a::CT_ShapeProperties();
    }
    return m_spPr;
}

const ns_a::CT_ShapeProperties& CT_RadarSer::get_spPr() const
{
    if (m_spPr)
    {
        return *m_spPr;
    }
    return ns_a::CT_ShapeProperties::default_instance();
}

bool CT_RadarSer::has_marker() const
{
    return m_has_marker;
}

CT_Marker* CT_RadarSer::mutable_marker()
{
    m_has_marker = true;
    if (!m_marker)
    {
        m_marker = new CT_Marker();
    }
    return m_marker;
}

const CT_Marker& CT_RadarSer::get_marker() const
{
    if (m_marker)
    {
        return *m_marker;
    }
    return CT_Marker::default_instance();
}

CT_DPt* CT_RadarSer::add_dPt()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_DPt* pNewChild = pChildGroup->mutable_dPt();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

bool CT_RadarSer::has_dLbls() const
{
    return m_has_dLbls;
}

CT_DLbls* CT_RadarSer::mutable_dLbls()
{
    m_has_dLbls = true;
    if (!m_dLbls)
    {
        m_dLbls = new CT_DLbls();
    }
    return m_dLbls;
}

const CT_DLbls& CT_RadarSer::get_dLbls() const
{
    if (m_dLbls)
    {
        return *m_dLbls;
    }
    return CT_DLbls::default_instance();
}

bool CT_RadarSer::has_cat() const
{
    return m_has_cat;
}

CT_AxDataSource* CT_RadarSer::mutable_cat()
{
    m_has_cat = true;
    if (!m_cat)
    {
        m_cat = new CT_AxDataSource();
    }
    return m_cat;
}

const CT_AxDataSource& CT_RadarSer::get_cat() const
{
    if (m_cat)
    {
        return *m_cat;
    }
    return CT_AxDataSource::default_instance();
}

bool CT_RadarSer::has_val() const
{
    return m_has_val;
}

CT_NumDataSource* CT_RadarSer::mutable_val()
{
    m_has_val = true;
    if (!m_val)
    {
        m_val = new CT_NumDataSource();
    }
    return m_val;
}

const CT_NumDataSource& CT_RadarSer::get_val() const
{
    if (m_val)
    {
        return *m_val;
    }
    return CT_NumDataSource::default_instance();
}

bool CT_RadarSer::has_extLst() const
{
    return m_has_extLst;
}

CT_ExtensionList* CT_RadarSer::mutable_extLst()
{
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new CT_ExtensionList();
    }
    return m_extLst;
}

const CT_ExtensionList& CT_RadarSer::get_extLst() const
{
    if (m_extLst)
    {
        return *m_extLst;
    }
    return CT_ExtensionList::default_instance();
}

void CT_RadarSer::clear()
{
    m_has_idx = false;

    if (m_idx)
    {
        delete m_idx;
        m_idx = NULL;
    }


    m_has_order = false;

    if (m_order)
    {
        delete m_order;
        m_order = NULL;
    }


    m_has_tx = false;

    if (m_tx)
    {
        delete m_tx;
        m_tx = NULL;
    }


    m_has_spPr = false;

    if (m_spPr)
    {
        delete m_spPr;
        m_spPr = NULL;
    }


    m_has_marker = false;

    if (m_marker)
    {
        delete m_marker;
        m_marker = NULL;
    }


    {
        vector<ChildGroup_1*>::iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_1.clear();
    }

    m_has_dLbls = false;

    if (m_dLbls)
    {
        delete m_dLbls;
        m_dLbls = NULL;
    }


    m_has_cat = false;

    if (m_cat)
    {
        delete m_cat;
        m_cat = NULL;
    }


    m_has_val = false;

    if (m_val)
    {
        delete m_val;
        m_val = NULL;
    }


    m_has_extLst = false;

    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }

}

void CT_RadarSer::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";

    assert(m_has_idx);


    assert(m_has_order);


    if (m_has_idx)
    {
        m_idx->toXmlElem("c:idx", "", _outStream);
    }


    if (m_has_order)
    {
        m_order->toXmlElem("c:order", "", _outStream);
    }


    if (m_has_tx)
    {
        m_tx->toXmlElem("c:tx", "", _outStream);
    }


    if (m_has_spPr)
    {
        m_spPr->toXmlElem("c:spPr", "", _outStream);
    }


    if (m_has_marker)
    {
        m_marker->toXmlElem("c:marker", "", _outStream);
    }

    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_dPt())
            {
                (*iter)->get_dPt().toXmlElem("c:dPt", "", _outStream);
            }


        }
    }


    if (m_has_dLbls)
    {
        m_dLbls->toXmlElem("c:dLbls", "", _outStream);
    }


    if (m_has_cat)
    {
        m_cat->toXmlElem("c:cat", "", _outStream);
    }


    if (m_has_val)
    {
        m_val->toXmlElem("c:val", "", _outStream);
    }


    if (m_has_extLst)
    {
        m_extLst->toXmlElem("c:extLst", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_RadarSer& CT_RadarSer::default_instance()
{
    if (!CT_RadarSer::default_instance_)
    {
        CT_RadarSer::default_instance_ = new CT_RadarSer();
    }
    return *CT_RadarSer::default_instance_;
}


// CT_RadarSer::ChildGroup_1
CT_RadarSer::ChildGroup_1::ChildGroup_1()
    :m_has_dPt(false),
     m_dPt(NULL)
{
}
bool CT_RadarSer::ChildGroup_1::has_dPt() const
{
    return m_has_dPt;
}

CT_DPt* CT_RadarSer::ChildGroup_1::mutable_dPt()
{

    m_has_dPt = true;
    if (!m_dPt)
    {
        m_dPt = new CT_DPt();
    }
    return m_dPt;
}

const CT_DPt& CT_RadarSer::ChildGroup_1::get_dPt() const
{
    if (m_dPt)
    {
        return *m_dPt;
    }
    return CT_DPt::default_instance();
}

CT_RadarSer* CT_RadarSer::default_instance_ = NULL;

// CT_BarSer
CT_BarSer::CT_BarSer()
    :m_has_idx(false),
     m_idx(NULL),
     m_has_order(false),
     m_order(NULL),
     m_has_tx(false),
     m_tx(NULL),
     m_has_spPr(false),
     m_spPr(NULL),
     m_has_invertIfNegative(false),
     m_invertIfNegative(NULL),
     m_has_pictureOptions(false),
     m_pictureOptions(NULL),
     m_has_dLbls(false),
     m_dLbls(NULL),
     m_has_errBars(false),
     m_errBars(NULL),
     m_has_cat(false),
     m_cat(NULL),
     m_has_val(false),
     m_val(NULL),
     m_has_shape(false),
     m_shape(NULL),
     m_has_extLst(false),
     m_extLst(NULL)
{
}
CT_BarSer::~CT_BarSer()
{
    clear();
}
bool CT_BarSer::has_idx() const
{
    return m_has_idx;
}

CT_UnsignedInt* CT_BarSer::mutable_idx()
{
    m_has_idx = true;
    if (!m_idx)
    {
        m_idx = new CT_UnsignedInt();
    }
    return m_idx;
}

const CT_UnsignedInt& CT_BarSer::get_idx() const
{
    if (m_idx)
    {
        return *m_idx;
    }
    return CT_UnsignedInt::default_instance();
}

bool CT_BarSer::has_order() const
{
    return m_has_order;
}

CT_UnsignedInt* CT_BarSer::mutable_order()
{
    m_has_order = true;
    if (!m_order)
    {
        m_order = new CT_UnsignedInt();
    }
    return m_order;
}

const CT_UnsignedInt& CT_BarSer::get_order() const
{
    if (m_order)
    {
        return *m_order;
    }
    return CT_UnsignedInt::default_instance();
}

bool CT_BarSer::has_tx() const
{
    return m_has_tx;
}

CT_SerTx* CT_BarSer::mutable_tx()
{
    m_has_tx = true;
    if (!m_tx)
    {
        m_tx = new CT_SerTx();
    }
    return m_tx;
}

const CT_SerTx& CT_BarSer::get_tx() const
{
    if (m_tx)
    {
        return *m_tx;
    }
    return CT_SerTx::default_instance();
}

bool CT_BarSer::has_spPr() const
{
    return m_has_spPr;
}

ns_a::CT_ShapeProperties* CT_BarSer::mutable_spPr()
{
    m_has_spPr = true;
    if (!m_spPr)
    {
        m_spPr = new ns_a::CT_ShapeProperties();
    }
    return m_spPr;
}

const ns_a::CT_ShapeProperties& CT_BarSer::get_spPr() const
{
    if (m_spPr)
    {
        return *m_spPr;
    }
    return ns_a::CT_ShapeProperties::default_instance();
}

bool CT_BarSer::has_invertIfNegative() const
{
    return m_has_invertIfNegative;
}

CT_Boolean* CT_BarSer::mutable_invertIfNegative()
{
    m_has_invertIfNegative = true;
    if (!m_invertIfNegative)
    {
        m_invertIfNegative = new CT_Boolean();
    }
    return m_invertIfNegative;
}

const CT_Boolean& CT_BarSer::get_invertIfNegative() const
{
    if (m_invertIfNegative)
    {
        return *m_invertIfNegative;
    }
    return CT_Boolean::default_instance();
}

bool CT_BarSer::has_pictureOptions() const
{
    return m_has_pictureOptions;
}

CT_PictureOptions* CT_BarSer::mutable_pictureOptions()
{
    m_has_pictureOptions = true;
    if (!m_pictureOptions)
    {
        m_pictureOptions = new CT_PictureOptions();
    }
    return m_pictureOptions;
}

const CT_PictureOptions& CT_BarSer::get_pictureOptions() const
{
    if (m_pictureOptions)
    {
        return *m_pictureOptions;
    }
    return CT_PictureOptions::default_instance();
}

CT_DPt* CT_BarSer::add_dPt()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_DPt* pNewChild = pChildGroup->mutable_dPt();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

bool CT_BarSer::has_dLbls() const
{
    return m_has_dLbls;
}

CT_DLbls* CT_BarSer::mutable_dLbls()
{
    m_has_dLbls = true;
    if (!m_dLbls)
    {
        m_dLbls = new CT_DLbls();
    }
    return m_dLbls;
}

const CT_DLbls& CT_BarSer::get_dLbls() const
{
    if (m_dLbls)
    {
        return *m_dLbls;
    }
    return CT_DLbls::default_instance();
}

CT_Trendline* CT_BarSer::add_trendline()
{
    ChildGroup_2 *pChildGroup = new ChildGroup_2();
    CT_Trendline* pNewChild = pChildGroup->mutable_trendline();
    m_childGroupList_2.push_back(pChildGroup);
    return pNewChild;
}

bool CT_BarSer::has_errBars() const
{
    return m_has_errBars;
}

CT_ErrBars* CT_BarSer::mutable_errBars()
{
    m_has_errBars = true;
    if (!m_errBars)
    {
        m_errBars = new CT_ErrBars();
    }
    return m_errBars;
}

const CT_ErrBars& CT_BarSer::get_errBars() const
{
    if (m_errBars)
    {
        return *m_errBars;
    }
    return CT_ErrBars::default_instance();
}

bool CT_BarSer::has_cat() const
{
    return m_has_cat;
}

CT_AxDataSource* CT_BarSer::mutable_cat()
{
    m_has_cat = true;
    if (!m_cat)
    {
        m_cat = new CT_AxDataSource();
    }
    return m_cat;
}

const CT_AxDataSource& CT_BarSer::get_cat() const
{
    if (m_cat)
    {
        return *m_cat;
    }
    return CT_AxDataSource::default_instance();
}

bool CT_BarSer::has_val() const
{
    return m_has_val;
}

CT_NumDataSource* CT_BarSer::mutable_val()
{
    m_has_val = true;
    if (!m_val)
    {
        m_val = new CT_NumDataSource();
    }
    return m_val;
}

const CT_NumDataSource& CT_BarSer::get_val() const
{
    if (m_val)
    {
        return *m_val;
    }
    return CT_NumDataSource::default_instance();
}

bool CT_BarSer::has_shape() const
{
    return m_has_shape;
}

CT_Shape* CT_BarSer::mutable_shape()
{
    m_has_shape = true;
    if (!m_shape)
    {
        m_shape = new CT_Shape();
    }
    return m_shape;
}

const CT_Shape& CT_BarSer::get_shape() const
{
    if (m_shape)
    {
        return *m_shape;
    }
    return CT_Shape::default_instance();
}

bool CT_BarSer::has_extLst() const
{
    return m_has_extLst;
}

CT_ExtensionList* CT_BarSer::mutable_extLst()
{
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new CT_ExtensionList();
    }
    return m_extLst;
}

const CT_ExtensionList& CT_BarSer::get_extLst() const
{
    if (m_extLst)
    {
        return *m_extLst;
    }
    return CT_ExtensionList::default_instance();
}

void CT_BarSer::clear()
{
    m_has_idx = false;

    if (m_idx)
    {
        delete m_idx;
        m_idx = NULL;
    }


    m_has_order = false;

    if (m_order)
    {
        delete m_order;
        m_order = NULL;
    }


    m_has_tx = false;

    if (m_tx)
    {
        delete m_tx;
        m_tx = NULL;
    }


    m_has_spPr = false;

    if (m_spPr)
    {
        delete m_spPr;
        m_spPr = NULL;
    }


    m_has_invertIfNegative = false;

    if (m_invertIfNegative)
    {
        delete m_invertIfNegative;
        m_invertIfNegative = NULL;
    }


    m_has_pictureOptions = false;

    if (m_pictureOptions)
    {
        delete m_pictureOptions;
        m_pictureOptions = NULL;
    }


    {
        vector<ChildGroup_1*>::iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_1.clear();
    }

    m_has_dLbls = false;

    if (m_dLbls)
    {
        delete m_dLbls;
        m_dLbls = NULL;
    }


    {
        vector<ChildGroup_2*>::iterator iter;
        for (iter = m_childGroupList_2.begin(); iter != m_childGroupList_2.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_2.clear();
    }

    m_has_errBars = false;

    if (m_errBars)
    {
        delete m_errBars;
        m_errBars = NULL;
    }


    m_has_cat = false;

    if (m_cat)
    {
        delete m_cat;
        m_cat = NULL;
    }


    m_has_val = false;

    if (m_val)
    {
        delete m_val;
        m_val = NULL;
    }


    m_has_shape = false;

    if (m_shape)
    {
        delete m_shape;
        m_shape = NULL;
    }


    m_has_extLst = false;

    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }

}

void CT_BarSer::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";

    assert(m_has_idx);


    assert(m_has_order);


    if (m_has_idx)
    {
        m_idx->toXmlElem("c:idx", "", _outStream);
    }


    if (m_has_order)
    {
        m_order->toXmlElem("c:order", "", _outStream);
    }


    if (m_has_tx)
    {
        m_tx->toXmlElem("c:tx", "", _outStream);
    }


    if (m_has_spPr)
    {
        m_spPr->toXmlElem("c:spPr", "", _outStream);
    }


    if (m_has_invertIfNegative)
    {
        m_invertIfNegative->toXmlElem("c:invertIfNegative", "", _outStream);
    }


    if (m_has_pictureOptions)
    {
        m_pictureOptions->toXmlElem("c:pictureOptions", "", _outStream);
    }

    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_dPt())
            {
                (*iter)->get_dPt().toXmlElem("c:dPt", "", _outStream);
            }


        }
    }


    if (m_has_dLbls)
    {
        m_dLbls->toXmlElem("c:dLbls", "", _outStream);
    }

    {
        vector<ChildGroup_2*>::const_iterator iter;
        for (iter = m_childGroupList_2.begin(); iter != m_childGroupList_2.end(); ++iter)
        {
            if ((*iter)->has_trendline())
            {
                (*iter)->get_trendline().toXmlElem("c:trendline", "", _outStream);
            }


        }
    }


    if (m_has_errBars)
    {
        m_errBars->toXmlElem("c:errBars", "", _outStream);
    }


    if (m_has_cat)
    {
        m_cat->toXmlElem("c:cat", "", _outStream);
    }


    if (m_has_val)
    {
        m_val->toXmlElem("c:val", "", _outStream);
    }


    if (m_has_shape)
    {
        m_shape->toXmlElem("c:shape", "", _outStream);
    }


    if (m_has_extLst)
    {
        m_extLst->toXmlElem("c:extLst", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_BarSer& CT_BarSer::default_instance()
{
    if (!CT_BarSer::default_instance_)
    {
        CT_BarSer::default_instance_ = new CT_BarSer();
    }
    return *CT_BarSer::default_instance_;
}


// CT_BarSer::ChildGroup_1
CT_BarSer::ChildGroup_1::ChildGroup_1()
    :m_has_dPt(false),
     m_dPt(NULL)
{
}
bool CT_BarSer::ChildGroup_1::has_dPt() const
{
    return m_has_dPt;
}

CT_DPt* CT_BarSer::ChildGroup_1::mutable_dPt()
{

    m_has_dPt = true;
    if (!m_dPt)
    {
        m_dPt = new CT_DPt();
    }
    return m_dPt;
}

const CT_DPt& CT_BarSer::ChildGroup_1::get_dPt() const
{
    if (m_dPt)
    {
        return *m_dPt;
    }
    return CT_DPt::default_instance();
}


// CT_BarSer::ChildGroup_2
CT_BarSer::ChildGroup_2::ChildGroup_2()
    :m_has_trendline(false),
     m_trendline(NULL)
{
}
bool CT_BarSer::ChildGroup_2::has_trendline() const
{
    return m_has_trendline;
}

CT_Trendline* CT_BarSer::ChildGroup_2::mutable_trendline()
{

    m_has_trendline = true;
    if (!m_trendline)
    {
        m_trendline = new CT_Trendline();
    }
    return m_trendline;
}

const CT_Trendline& CT_BarSer::ChildGroup_2::get_trendline() const
{
    if (m_trendline)
    {
        return *m_trendline;
    }
    return CT_Trendline::default_instance();
}

CT_BarSer* CT_BarSer::default_instance_ = NULL;

// CT_AreaSer
CT_AreaSer::CT_AreaSer()
    :m_has_idx(false),
     m_idx(NULL),
     m_has_order(false),
     m_order(NULL),
     m_has_tx(false),
     m_tx(NULL),
     m_has_spPr(false),
     m_spPr(NULL),
     m_has_pictureOptions(false),
     m_pictureOptions(NULL),
     m_has_dLbls(false),
     m_dLbls(NULL),
     m_has_cat(false),
     m_cat(NULL),
     m_has_val(false),
     m_val(NULL),
     m_has_extLst(false),
     m_extLst(NULL)
{
}
CT_AreaSer::~CT_AreaSer()
{
    clear();
}
bool CT_AreaSer::has_idx() const
{
    return m_has_idx;
}

CT_UnsignedInt* CT_AreaSer::mutable_idx()
{
    m_has_idx = true;
    if (!m_idx)
    {
        m_idx = new CT_UnsignedInt();
    }
    return m_idx;
}

const CT_UnsignedInt& CT_AreaSer::get_idx() const
{
    if (m_idx)
    {
        return *m_idx;
    }
    return CT_UnsignedInt::default_instance();
}

bool CT_AreaSer::has_order() const
{
    return m_has_order;
}

CT_UnsignedInt* CT_AreaSer::mutable_order()
{
    m_has_order = true;
    if (!m_order)
    {
        m_order = new CT_UnsignedInt();
    }
    return m_order;
}

const CT_UnsignedInt& CT_AreaSer::get_order() const
{
    if (m_order)
    {
        return *m_order;
    }
    return CT_UnsignedInt::default_instance();
}

bool CT_AreaSer::has_tx() const
{
    return m_has_tx;
}

CT_SerTx* CT_AreaSer::mutable_tx()
{
    m_has_tx = true;
    if (!m_tx)
    {
        m_tx = new CT_SerTx();
    }
    return m_tx;
}

const CT_SerTx& CT_AreaSer::get_tx() const
{
    if (m_tx)
    {
        return *m_tx;
    }
    return CT_SerTx::default_instance();
}

bool CT_AreaSer::has_spPr() const
{
    return m_has_spPr;
}

ns_a::CT_ShapeProperties* CT_AreaSer::mutable_spPr()
{
    m_has_spPr = true;
    if (!m_spPr)
    {
        m_spPr = new ns_a::CT_ShapeProperties();
    }
    return m_spPr;
}

const ns_a::CT_ShapeProperties& CT_AreaSer::get_spPr() const
{
    if (m_spPr)
    {
        return *m_spPr;
    }
    return ns_a::CT_ShapeProperties::default_instance();
}

bool CT_AreaSer::has_pictureOptions() const
{
    return m_has_pictureOptions;
}

CT_PictureOptions* CT_AreaSer::mutable_pictureOptions()
{
    m_has_pictureOptions = true;
    if (!m_pictureOptions)
    {
        m_pictureOptions = new CT_PictureOptions();
    }
    return m_pictureOptions;
}

const CT_PictureOptions& CT_AreaSer::get_pictureOptions() const
{
    if (m_pictureOptions)
    {
        return *m_pictureOptions;
    }
    return CT_PictureOptions::default_instance();
}

CT_DPt* CT_AreaSer::add_dPt()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_DPt* pNewChild = pChildGroup->mutable_dPt();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

bool CT_AreaSer::has_dLbls() const
{
    return m_has_dLbls;
}

CT_DLbls* CT_AreaSer::mutable_dLbls()
{
    m_has_dLbls = true;
    if (!m_dLbls)
    {
        m_dLbls = new CT_DLbls();
    }
    return m_dLbls;
}

const CT_DLbls& CT_AreaSer::get_dLbls() const
{
    if (m_dLbls)
    {
        return *m_dLbls;
    }
    return CT_DLbls::default_instance();
}

CT_Trendline* CT_AreaSer::add_trendline()
{
    ChildGroup_2 *pChildGroup = new ChildGroup_2();
    CT_Trendline* pNewChild = pChildGroup->mutable_trendline();
    m_childGroupList_2.push_back(pChildGroup);
    return pNewChild;
}

CT_ErrBars* CT_AreaSer::add_errBars()
{
    ChildGroup_3 *pChildGroup = new ChildGroup_3();
    CT_ErrBars* pNewChild = pChildGroup->mutable_errBars();
    m_childGroupList_3.push_back(pChildGroup);
    return pNewChild;
}

bool CT_AreaSer::has_cat() const
{
    return m_has_cat;
}

CT_AxDataSource* CT_AreaSer::mutable_cat()
{
    m_has_cat = true;
    if (!m_cat)
    {
        m_cat = new CT_AxDataSource();
    }
    return m_cat;
}

const CT_AxDataSource& CT_AreaSer::get_cat() const
{
    if (m_cat)
    {
        return *m_cat;
    }
    return CT_AxDataSource::default_instance();
}

bool CT_AreaSer::has_val() const
{
    return m_has_val;
}

CT_NumDataSource* CT_AreaSer::mutable_val()
{
    m_has_val = true;
    if (!m_val)
    {
        m_val = new CT_NumDataSource();
    }
    return m_val;
}

const CT_NumDataSource& CT_AreaSer::get_val() const
{
    if (m_val)
    {
        return *m_val;
    }
    return CT_NumDataSource::default_instance();
}

bool CT_AreaSer::has_extLst() const
{
    return m_has_extLst;
}

CT_ExtensionList* CT_AreaSer::mutable_extLst()
{
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new CT_ExtensionList();
    }
    return m_extLst;
}

const CT_ExtensionList& CT_AreaSer::get_extLst() const
{
    if (m_extLst)
    {
        return *m_extLst;
    }
    return CT_ExtensionList::default_instance();
}

void CT_AreaSer::clear()
{
    m_has_idx = false;

    if (m_idx)
    {
        delete m_idx;
        m_idx = NULL;
    }


    m_has_order = false;

    if (m_order)
    {
        delete m_order;
        m_order = NULL;
    }


    m_has_tx = false;

    if (m_tx)
    {
        delete m_tx;
        m_tx = NULL;
    }


    m_has_spPr = false;

    if (m_spPr)
    {
        delete m_spPr;
        m_spPr = NULL;
    }


    m_has_pictureOptions = false;

    if (m_pictureOptions)
    {
        delete m_pictureOptions;
        m_pictureOptions = NULL;
    }


    {
        vector<ChildGroup_1*>::iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_1.clear();
    }

    m_has_dLbls = false;

    if (m_dLbls)
    {
        delete m_dLbls;
        m_dLbls = NULL;
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

    m_has_cat = false;

    if (m_cat)
    {
        delete m_cat;
        m_cat = NULL;
    }


    m_has_val = false;

    if (m_val)
    {
        delete m_val;
        m_val = NULL;
    }


    m_has_extLst = false;

    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }

}

void CT_AreaSer::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";

    assert(m_has_idx);


    assert(m_has_order);


    if (m_has_idx)
    {
        m_idx->toXmlElem("c:idx", "", _outStream);
    }


    if (m_has_order)
    {
        m_order->toXmlElem("c:order", "", _outStream);
    }


    if (m_has_tx)
    {
        m_tx->toXmlElem("c:tx", "", _outStream);
    }


    if (m_has_spPr)
    {
        m_spPr->toXmlElem("c:spPr", "", _outStream);
    }


    if (m_has_pictureOptions)
    {
        m_pictureOptions->toXmlElem("c:pictureOptions", "", _outStream);
    }

    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_dPt())
            {
                (*iter)->get_dPt().toXmlElem("c:dPt", "", _outStream);
            }


        }
    }


    if (m_has_dLbls)
    {
        m_dLbls->toXmlElem("c:dLbls", "", _outStream);
    }

    {
        vector<ChildGroup_2*>::const_iterator iter;
        for (iter = m_childGroupList_2.begin(); iter != m_childGroupList_2.end(); ++iter)
        {
            if ((*iter)->has_trendline())
            {
                (*iter)->get_trendline().toXmlElem("c:trendline", "", _outStream);
            }


        }
    }

    {
        int childSize = count_if(m_childGroupList_3.begin(), m_childGroupList_3.end(), mem_fun(&ChildGroup_3::has_errBars));
        assert(0 <= childSize && childSize <= 2);
    }

    {
        vector<ChildGroup_3*>::const_iterator iter;
        for (iter = m_childGroupList_3.begin(); iter != m_childGroupList_3.end(); ++iter)
        {
            if ((*iter)->has_errBars())
            {
                (*iter)->get_errBars().toXmlElem("c:errBars", "", _outStream);
            }


        }
    }


    if (m_has_cat)
    {
        m_cat->toXmlElem("c:cat", "", _outStream);
    }


    if (m_has_val)
    {
        m_val->toXmlElem("c:val", "", _outStream);
    }


    if (m_has_extLst)
    {
        m_extLst->toXmlElem("c:extLst", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_AreaSer& CT_AreaSer::default_instance()
{
    if (!CT_AreaSer::default_instance_)
    {
        CT_AreaSer::default_instance_ = new CT_AreaSer();
    }
    return *CT_AreaSer::default_instance_;
}


// CT_AreaSer::ChildGroup_1
CT_AreaSer::ChildGroup_1::ChildGroup_1()
    :m_has_dPt(false),
     m_dPt(NULL)
{
}
bool CT_AreaSer::ChildGroup_1::has_dPt() const
{
    return m_has_dPt;
}

CT_DPt* CT_AreaSer::ChildGroup_1::mutable_dPt()
{

    m_has_dPt = true;
    if (!m_dPt)
    {
        m_dPt = new CT_DPt();
    }
    return m_dPt;
}

const CT_DPt& CT_AreaSer::ChildGroup_1::get_dPt() const
{
    if (m_dPt)
    {
        return *m_dPt;
    }
    return CT_DPt::default_instance();
}


// CT_AreaSer::ChildGroup_2
CT_AreaSer::ChildGroup_2::ChildGroup_2()
    :m_has_trendline(false),
     m_trendline(NULL)
{
}
bool CT_AreaSer::ChildGroup_2::has_trendline() const
{
    return m_has_trendline;
}

CT_Trendline* CT_AreaSer::ChildGroup_2::mutable_trendline()
{

    m_has_trendline = true;
    if (!m_trendline)
    {
        m_trendline = new CT_Trendline();
    }
    return m_trendline;
}

const CT_Trendline& CT_AreaSer::ChildGroup_2::get_trendline() const
{
    if (m_trendline)
    {
        return *m_trendline;
    }
    return CT_Trendline::default_instance();
}


// CT_AreaSer::ChildGroup_3
CT_AreaSer::ChildGroup_3::ChildGroup_3()
    :m_has_errBars(false),
     m_errBars(NULL)
{
}
bool CT_AreaSer::ChildGroup_3::has_errBars() const
{
    return m_has_errBars;
}

CT_ErrBars* CT_AreaSer::ChildGroup_3::mutable_errBars()
{

    m_has_errBars = true;
    if (!m_errBars)
    {
        m_errBars = new CT_ErrBars();
    }
    return m_errBars;
}

const CT_ErrBars& CT_AreaSer::ChildGroup_3::get_errBars() const
{
    if (m_errBars)
    {
        return *m_errBars;
    }
    return CT_ErrBars::default_instance();
}

CT_AreaSer* CT_AreaSer::default_instance_ = NULL;

// CT_PieSer
CT_PieSer::CT_PieSer()
    :m_has_idx(false),
     m_idx(NULL),
     m_has_order(false),
     m_order(NULL),
     m_has_tx(false),
     m_tx(NULL),
     m_has_spPr(false),
     m_spPr(NULL),
     m_has_explosion(false),
     m_explosion(NULL),
     m_has_dLbls(false),
     m_dLbls(NULL),
     m_has_cat(false),
     m_cat(NULL),
     m_has_val(false),
     m_val(NULL),
     m_has_extLst(false),
     m_extLst(NULL)
{
}
CT_PieSer::~CT_PieSer()
{
    clear();
}
bool CT_PieSer::has_idx() const
{
    return m_has_idx;
}

CT_UnsignedInt* CT_PieSer::mutable_idx()
{
    m_has_idx = true;
    if (!m_idx)
    {
        m_idx = new CT_UnsignedInt();
    }
    return m_idx;
}

const CT_UnsignedInt& CT_PieSer::get_idx() const
{
    if (m_idx)
    {
        return *m_idx;
    }
    return CT_UnsignedInt::default_instance();
}

bool CT_PieSer::has_order() const
{
    return m_has_order;
}

CT_UnsignedInt* CT_PieSer::mutable_order()
{
    m_has_order = true;
    if (!m_order)
    {
        m_order = new CT_UnsignedInt();
    }
    return m_order;
}

const CT_UnsignedInt& CT_PieSer::get_order() const
{
    if (m_order)
    {
        return *m_order;
    }
    return CT_UnsignedInt::default_instance();
}

bool CT_PieSer::has_tx() const
{
    return m_has_tx;
}

CT_SerTx* CT_PieSer::mutable_tx()
{
    m_has_tx = true;
    if (!m_tx)
    {
        m_tx = new CT_SerTx();
    }
    return m_tx;
}

const CT_SerTx& CT_PieSer::get_tx() const
{
    if (m_tx)
    {
        return *m_tx;
    }
    return CT_SerTx::default_instance();
}

bool CT_PieSer::has_spPr() const
{
    return m_has_spPr;
}

ns_a::CT_ShapeProperties* CT_PieSer::mutable_spPr()
{
    m_has_spPr = true;
    if (!m_spPr)
    {
        m_spPr = new ns_a::CT_ShapeProperties();
    }
    return m_spPr;
}

const ns_a::CT_ShapeProperties& CT_PieSer::get_spPr() const
{
    if (m_spPr)
    {
        return *m_spPr;
    }
    return ns_a::CT_ShapeProperties::default_instance();
}

bool CT_PieSer::has_explosion() const
{
    return m_has_explosion;
}

CT_UnsignedInt* CT_PieSer::mutable_explosion()
{
    m_has_explosion = true;
    if (!m_explosion)
    {
        m_explosion = new CT_UnsignedInt();
    }
    return m_explosion;
}

const CT_UnsignedInt& CT_PieSer::get_explosion() const
{
    if (m_explosion)
    {
        return *m_explosion;
    }
    return CT_UnsignedInt::default_instance();
}

CT_DPt* CT_PieSer::add_dPt()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_DPt* pNewChild = pChildGroup->mutable_dPt();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

bool CT_PieSer::has_dLbls() const
{
    return m_has_dLbls;
}

CT_DLbls* CT_PieSer::mutable_dLbls()
{
    m_has_dLbls = true;
    if (!m_dLbls)
    {
        m_dLbls = new CT_DLbls();
    }
    return m_dLbls;
}

const CT_DLbls& CT_PieSer::get_dLbls() const
{
    if (m_dLbls)
    {
        return *m_dLbls;
    }
    return CT_DLbls::default_instance();
}

bool CT_PieSer::has_cat() const
{
    return m_has_cat;
}

CT_AxDataSource* CT_PieSer::mutable_cat()
{
    m_has_cat = true;
    if (!m_cat)
    {
        m_cat = new CT_AxDataSource();
    }
    return m_cat;
}

const CT_AxDataSource& CT_PieSer::get_cat() const
{
    if (m_cat)
    {
        return *m_cat;
    }
    return CT_AxDataSource::default_instance();
}

bool CT_PieSer::has_val() const
{
    return m_has_val;
}

CT_NumDataSource* CT_PieSer::mutable_val()
{
    m_has_val = true;
    if (!m_val)
    {
        m_val = new CT_NumDataSource();
    }
    return m_val;
}

const CT_NumDataSource& CT_PieSer::get_val() const
{
    if (m_val)
    {
        return *m_val;
    }
    return CT_NumDataSource::default_instance();
}

bool CT_PieSer::has_extLst() const
{
    return m_has_extLst;
}

CT_ExtensionList* CT_PieSer::mutable_extLst()
{
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new CT_ExtensionList();
    }
    return m_extLst;
}

const CT_ExtensionList& CT_PieSer::get_extLst() const
{
    if (m_extLst)
    {
        return *m_extLst;
    }
    return CT_ExtensionList::default_instance();
}

void CT_PieSer::clear()
{
    m_has_idx = false;

    if (m_idx)
    {
        delete m_idx;
        m_idx = NULL;
    }


    m_has_order = false;

    if (m_order)
    {
        delete m_order;
        m_order = NULL;
    }


    m_has_tx = false;

    if (m_tx)
    {
        delete m_tx;
        m_tx = NULL;
    }


    m_has_spPr = false;

    if (m_spPr)
    {
        delete m_spPr;
        m_spPr = NULL;
    }


    m_has_explosion = false;

    if (m_explosion)
    {
        delete m_explosion;
        m_explosion = NULL;
    }


    {
        vector<ChildGroup_1*>::iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_1.clear();
    }

    m_has_dLbls = false;

    if (m_dLbls)
    {
        delete m_dLbls;
        m_dLbls = NULL;
    }


    m_has_cat = false;

    if (m_cat)
    {
        delete m_cat;
        m_cat = NULL;
    }


    m_has_val = false;

    if (m_val)
    {
        delete m_val;
        m_val = NULL;
    }


    m_has_extLst = false;

    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }

}

void CT_PieSer::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";

    assert(m_has_idx);


    assert(m_has_order);


    if (m_has_idx)
    {
        m_idx->toXmlElem("c:idx", "", _outStream);
    }


    if (m_has_order)
    {
        m_order->toXmlElem("c:order", "", _outStream);
    }


    if (m_has_tx)
    {
        m_tx->toXmlElem("c:tx", "", _outStream);
    }


    if (m_has_spPr)
    {
        m_spPr->toXmlElem("c:spPr", "", _outStream);
    }


    if (m_has_explosion)
    {
        m_explosion->toXmlElem("c:explosion", "", _outStream);
    }

    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_dPt())
            {
                (*iter)->get_dPt().toXmlElem("c:dPt", "", _outStream);
            }


        }
    }


    if (m_has_dLbls)
    {
        m_dLbls->toXmlElem("c:dLbls", "", _outStream);
    }


    if (m_has_cat)
    {
        m_cat->toXmlElem("c:cat", "", _outStream);
    }


    if (m_has_val)
    {
        m_val->toXmlElem("c:val", "", _outStream);
    }


    if (m_has_extLst)
    {
        m_extLst->toXmlElem("c:extLst", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_PieSer& CT_PieSer::default_instance()
{
    if (!CT_PieSer::default_instance_)
    {
        CT_PieSer::default_instance_ = new CT_PieSer();
    }
    return *CT_PieSer::default_instance_;
}


// CT_PieSer::ChildGroup_1
CT_PieSer::ChildGroup_1::ChildGroup_1()
    :m_has_dPt(false),
     m_dPt(NULL)
{
}
bool CT_PieSer::ChildGroup_1::has_dPt() const
{
    return m_has_dPt;
}

CT_DPt* CT_PieSer::ChildGroup_1::mutable_dPt()
{

    m_has_dPt = true;
    if (!m_dPt)
    {
        m_dPt = new CT_DPt();
    }
    return m_dPt;
}

const CT_DPt& CT_PieSer::ChildGroup_1::get_dPt() const
{
    if (m_dPt)
    {
        return *m_dPt;
    }
    return CT_DPt::default_instance();
}

CT_PieSer* CT_PieSer::default_instance_ = NULL;

// CT_BubbleSer
CT_BubbleSer::CT_BubbleSer()
    :m_has_idx(false),
     m_idx(NULL),
     m_has_order(false),
     m_order(NULL),
     m_has_tx(false),
     m_tx(NULL),
     m_has_spPr(false),
     m_spPr(NULL),
     m_has_invertIfNegative(false),
     m_invertIfNegative(NULL),
     m_has_dLbls(false),
     m_dLbls(NULL),
     m_has_xVal(false),
     m_xVal(NULL),
     m_has_yVal(false),
     m_yVal(NULL),
     m_has_bubbleSize(false),
     m_bubbleSize(NULL),
     m_has_bubble3D(false),
     m_bubble3D(NULL),
     m_has_extLst(false),
     m_extLst(NULL)
{
}
CT_BubbleSer::~CT_BubbleSer()
{
    clear();
}
bool CT_BubbleSer::has_idx() const
{
    return m_has_idx;
}

CT_UnsignedInt* CT_BubbleSer::mutable_idx()
{
    m_has_idx = true;
    if (!m_idx)
    {
        m_idx = new CT_UnsignedInt();
    }
    return m_idx;
}

const CT_UnsignedInt& CT_BubbleSer::get_idx() const
{
    if (m_idx)
    {
        return *m_idx;
    }
    return CT_UnsignedInt::default_instance();
}

bool CT_BubbleSer::has_order() const
{
    return m_has_order;
}

CT_UnsignedInt* CT_BubbleSer::mutable_order()
{
    m_has_order = true;
    if (!m_order)
    {
        m_order = new CT_UnsignedInt();
    }
    return m_order;
}

const CT_UnsignedInt& CT_BubbleSer::get_order() const
{
    if (m_order)
    {
        return *m_order;
    }
    return CT_UnsignedInt::default_instance();
}

bool CT_BubbleSer::has_tx() const
{
    return m_has_tx;
}

CT_SerTx* CT_BubbleSer::mutable_tx()
{
    m_has_tx = true;
    if (!m_tx)
    {
        m_tx = new CT_SerTx();
    }
    return m_tx;
}

const CT_SerTx& CT_BubbleSer::get_tx() const
{
    if (m_tx)
    {
        return *m_tx;
    }
    return CT_SerTx::default_instance();
}

bool CT_BubbleSer::has_spPr() const
{
    return m_has_spPr;
}

ns_a::CT_ShapeProperties* CT_BubbleSer::mutable_spPr()
{
    m_has_spPr = true;
    if (!m_spPr)
    {
        m_spPr = new ns_a::CT_ShapeProperties();
    }
    return m_spPr;
}

const ns_a::CT_ShapeProperties& CT_BubbleSer::get_spPr() const
{
    if (m_spPr)
    {
        return *m_spPr;
    }
    return ns_a::CT_ShapeProperties::default_instance();
}

bool CT_BubbleSer::has_invertIfNegative() const
{
    return m_has_invertIfNegative;
}

CT_Boolean* CT_BubbleSer::mutable_invertIfNegative()
{
    m_has_invertIfNegative = true;
    if (!m_invertIfNegative)
    {
        m_invertIfNegative = new CT_Boolean();
    }
    return m_invertIfNegative;
}

const CT_Boolean& CT_BubbleSer::get_invertIfNegative() const
{
    if (m_invertIfNegative)
    {
        return *m_invertIfNegative;
    }
    return CT_Boolean::default_instance();
}

CT_DPt* CT_BubbleSer::add_dPt()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_DPt* pNewChild = pChildGroup->mutable_dPt();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

bool CT_BubbleSer::has_dLbls() const
{
    return m_has_dLbls;
}

CT_DLbls* CT_BubbleSer::mutable_dLbls()
{
    m_has_dLbls = true;
    if (!m_dLbls)
    {
        m_dLbls = new CT_DLbls();
    }
    return m_dLbls;
}

const CT_DLbls& CT_BubbleSer::get_dLbls() const
{
    if (m_dLbls)
    {
        return *m_dLbls;
    }
    return CT_DLbls::default_instance();
}

CT_Trendline* CT_BubbleSer::add_trendline()
{
    ChildGroup_2 *pChildGroup = new ChildGroup_2();
    CT_Trendline* pNewChild = pChildGroup->mutable_trendline();
    m_childGroupList_2.push_back(pChildGroup);
    return pNewChild;
}

CT_ErrBars* CT_BubbleSer::add_errBars()
{
    ChildGroup_3 *pChildGroup = new ChildGroup_3();
    CT_ErrBars* pNewChild = pChildGroup->mutable_errBars();
    m_childGroupList_3.push_back(pChildGroup);
    return pNewChild;
}

bool CT_BubbleSer::has_xVal() const
{
    return m_has_xVal;
}

CT_AxDataSource* CT_BubbleSer::mutable_xVal()
{
    m_has_xVal = true;
    if (!m_xVal)
    {
        m_xVal = new CT_AxDataSource();
    }
    return m_xVal;
}

const CT_AxDataSource& CT_BubbleSer::get_xVal() const
{
    if (m_xVal)
    {
        return *m_xVal;
    }
    return CT_AxDataSource::default_instance();
}

bool CT_BubbleSer::has_yVal() const
{
    return m_has_yVal;
}

CT_NumDataSource* CT_BubbleSer::mutable_yVal()
{
    m_has_yVal = true;
    if (!m_yVal)
    {
        m_yVal = new CT_NumDataSource();
    }
    return m_yVal;
}

const CT_NumDataSource& CT_BubbleSer::get_yVal() const
{
    if (m_yVal)
    {
        return *m_yVal;
    }
    return CT_NumDataSource::default_instance();
}

bool CT_BubbleSer::has_bubbleSize() const
{
    return m_has_bubbleSize;
}

CT_NumDataSource* CT_BubbleSer::mutable_bubbleSize()
{
    m_has_bubbleSize = true;
    if (!m_bubbleSize)
    {
        m_bubbleSize = new CT_NumDataSource();
    }
    return m_bubbleSize;
}

const CT_NumDataSource& CT_BubbleSer::get_bubbleSize() const
{
    if (m_bubbleSize)
    {
        return *m_bubbleSize;
    }
    return CT_NumDataSource::default_instance();
}

bool CT_BubbleSer::has_bubble3D() const
{
    return m_has_bubble3D;
}

CT_Boolean* CT_BubbleSer::mutable_bubble3D()
{
    m_has_bubble3D = true;
    if (!m_bubble3D)
    {
        m_bubble3D = new CT_Boolean();
    }
    return m_bubble3D;
}

const CT_Boolean& CT_BubbleSer::get_bubble3D() const
{
    if (m_bubble3D)
    {
        return *m_bubble3D;
    }
    return CT_Boolean::default_instance();
}

bool CT_BubbleSer::has_extLst() const
{
    return m_has_extLst;
}

CT_ExtensionList* CT_BubbleSer::mutable_extLst()
{
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new CT_ExtensionList();
    }
    return m_extLst;
}

const CT_ExtensionList& CT_BubbleSer::get_extLst() const
{
    if (m_extLst)
    {
        return *m_extLst;
    }
    return CT_ExtensionList::default_instance();
}

void CT_BubbleSer::clear()
{
    m_has_idx = false;

    if (m_idx)
    {
        delete m_idx;
        m_idx = NULL;
    }


    m_has_order = false;

    if (m_order)
    {
        delete m_order;
        m_order = NULL;
    }


    m_has_tx = false;

    if (m_tx)
    {
        delete m_tx;
        m_tx = NULL;
    }


    m_has_spPr = false;

    if (m_spPr)
    {
        delete m_spPr;
        m_spPr = NULL;
    }


    m_has_invertIfNegative = false;

    if (m_invertIfNegative)
    {
        delete m_invertIfNegative;
        m_invertIfNegative = NULL;
    }


    {
        vector<ChildGroup_1*>::iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_1.clear();
    }

    m_has_dLbls = false;

    if (m_dLbls)
    {
        delete m_dLbls;
        m_dLbls = NULL;
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

    m_has_xVal = false;

    if (m_xVal)
    {
        delete m_xVal;
        m_xVal = NULL;
    }


    m_has_yVal = false;

    if (m_yVal)
    {
        delete m_yVal;
        m_yVal = NULL;
    }


    m_has_bubbleSize = false;

    if (m_bubbleSize)
    {
        delete m_bubbleSize;
        m_bubbleSize = NULL;
    }


    m_has_bubble3D = false;

    if (m_bubble3D)
    {
        delete m_bubble3D;
        m_bubble3D = NULL;
    }


    m_has_extLst = false;

    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }

}

void CT_BubbleSer::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";

    assert(m_has_idx);


    assert(m_has_order);


    if (m_has_idx)
    {
        m_idx->toXmlElem("c:idx", "", _outStream);
    }


    if (m_has_order)
    {
        m_order->toXmlElem("c:order", "", _outStream);
    }


    if (m_has_tx)
    {
        m_tx->toXmlElem("c:tx", "", _outStream);
    }


    if (m_has_spPr)
    {
        m_spPr->toXmlElem("c:spPr", "", _outStream);
    }


    if (m_has_invertIfNegative)
    {
        m_invertIfNegative->toXmlElem("c:invertIfNegative", "", _outStream);
    }

    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_dPt())
            {
                (*iter)->get_dPt().toXmlElem("c:dPt", "", _outStream);
            }


        }
    }


    if (m_has_dLbls)
    {
        m_dLbls->toXmlElem("c:dLbls", "", _outStream);
    }

    {
        vector<ChildGroup_2*>::const_iterator iter;
        for (iter = m_childGroupList_2.begin(); iter != m_childGroupList_2.end(); ++iter)
        {
            if ((*iter)->has_trendline())
            {
                (*iter)->get_trendline().toXmlElem("c:trendline", "", _outStream);
            }


        }
    }

    {
        int childSize = count_if(m_childGroupList_3.begin(), m_childGroupList_3.end(), mem_fun(&ChildGroup_3::has_errBars));
        assert(0 <= childSize && childSize <= 2);
    }

    {
        vector<ChildGroup_3*>::const_iterator iter;
        for (iter = m_childGroupList_3.begin(); iter != m_childGroupList_3.end(); ++iter)
        {
            if ((*iter)->has_errBars())
            {
                (*iter)->get_errBars().toXmlElem("c:errBars", "", _outStream);
            }


        }
    }


    if (m_has_xVal)
    {
        m_xVal->toXmlElem("c:xVal", "", _outStream);
    }


    if (m_has_yVal)
    {
        m_yVal->toXmlElem("c:yVal", "", _outStream);
    }


    if (m_has_bubbleSize)
    {
        m_bubbleSize->toXmlElem("c:bubbleSize", "", _outStream);
    }


    if (m_has_bubble3D)
    {
        m_bubble3D->toXmlElem("c:bubble3D", "", _outStream);
    }


    if (m_has_extLst)
    {
        m_extLst->toXmlElem("c:extLst", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_BubbleSer& CT_BubbleSer::default_instance()
{
    if (!CT_BubbleSer::default_instance_)
    {
        CT_BubbleSer::default_instance_ = new CT_BubbleSer();
    }
    return *CT_BubbleSer::default_instance_;
}


// CT_BubbleSer::ChildGroup_1
CT_BubbleSer::ChildGroup_1::ChildGroup_1()
    :m_has_dPt(false),
     m_dPt(NULL)
{
}
bool CT_BubbleSer::ChildGroup_1::has_dPt() const
{
    return m_has_dPt;
}

CT_DPt* CT_BubbleSer::ChildGroup_1::mutable_dPt()
{

    m_has_dPt = true;
    if (!m_dPt)
    {
        m_dPt = new CT_DPt();
    }
    return m_dPt;
}

const CT_DPt& CT_BubbleSer::ChildGroup_1::get_dPt() const
{
    if (m_dPt)
    {
        return *m_dPt;
    }
    return CT_DPt::default_instance();
}


// CT_BubbleSer::ChildGroup_2
CT_BubbleSer::ChildGroup_2::ChildGroup_2()
    :m_has_trendline(false),
     m_trendline(NULL)
{
}
bool CT_BubbleSer::ChildGroup_2::has_trendline() const
{
    return m_has_trendline;
}

CT_Trendline* CT_BubbleSer::ChildGroup_2::mutable_trendline()
{

    m_has_trendline = true;
    if (!m_trendline)
    {
        m_trendline = new CT_Trendline();
    }
    return m_trendline;
}

const CT_Trendline& CT_BubbleSer::ChildGroup_2::get_trendline() const
{
    if (m_trendline)
    {
        return *m_trendline;
    }
    return CT_Trendline::default_instance();
}


// CT_BubbleSer::ChildGroup_3
CT_BubbleSer::ChildGroup_3::ChildGroup_3()
    :m_has_errBars(false),
     m_errBars(NULL)
{
}
bool CT_BubbleSer::ChildGroup_3::has_errBars() const
{
    return m_has_errBars;
}

CT_ErrBars* CT_BubbleSer::ChildGroup_3::mutable_errBars()
{

    m_has_errBars = true;
    if (!m_errBars)
    {
        m_errBars = new CT_ErrBars();
    }
    return m_errBars;
}

const CT_ErrBars& CT_BubbleSer::ChildGroup_3::get_errBars() const
{
    if (m_errBars)
    {
        return *m_errBars;
    }
    return CT_ErrBars::default_instance();
}

CT_BubbleSer* CT_BubbleSer::default_instance_ = NULL;

// CT_SurfaceSer
CT_SurfaceSer::CT_SurfaceSer()
    :m_has_idx(false),
     m_idx(NULL),
     m_has_order(false),
     m_order(NULL),
     m_has_tx(false),
     m_tx(NULL),
     m_has_spPr(false),
     m_spPr(NULL),
     m_has_cat(false),
     m_cat(NULL),
     m_has_val(false),
     m_val(NULL),
     m_has_extLst(false),
     m_extLst(NULL)
{
}
CT_SurfaceSer::~CT_SurfaceSer()
{
    clear();
}
bool CT_SurfaceSer::has_idx() const
{
    return m_has_idx;
}

CT_UnsignedInt* CT_SurfaceSer::mutable_idx()
{
    m_has_idx = true;
    if (!m_idx)
    {
        m_idx = new CT_UnsignedInt();
    }
    return m_idx;
}

const CT_UnsignedInt& CT_SurfaceSer::get_idx() const
{
    if (m_idx)
    {
        return *m_idx;
    }
    return CT_UnsignedInt::default_instance();
}

bool CT_SurfaceSer::has_order() const
{
    return m_has_order;
}

CT_UnsignedInt* CT_SurfaceSer::mutable_order()
{
    m_has_order = true;
    if (!m_order)
    {
        m_order = new CT_UnsignedInt();
    }
    return m_order;
}

const CT_UnsignedInt& CT_SurfaceSer::get_order() const
{
    if (m_order)
    {
        return *m_order;
    }
    return CT_UnsignedInt::default_instance();
}

bool CT_SurfaceSer::has_tx() const
{
    return m_has_tx;
}

CT_SerTx* CT_SurfaceSer::mutable_tx()
{
    m_has_tx = true;
    if (!m_tx)
    {
        m_tx = new CT_SerTx();
    }
    return m_tx;
}

const CT_SerTx& CT_SurfaceSer::get_tx() const
{
    if (m_tx)
    {
        return *m_tx;
    }
    return CT_SerTx::default_instance();
}

bool CT_SurfaceSer::has_spPr() const
{
    return m_has_spPr;
}

ns_a::CT_ShapeProperties* CT_SurfaceSer::mutable_spPr()
{
    m_has_spPr = true;
    if (!m_spPr)
    {
        m_spPr = new ns_a::CT_ShapeProperties();
    }
    return m_spPr;
}

const ns_a::CT_ShapeProperties& CT_SurfaceSer::get_spPr() const
{
    if (m_spPr)
    {
        return *m_spPr;
    }
    return ns_a::CT_ShapeProperties::default_instance();
}

bool CT_SurfaceSer::has_cat() const
{
    return m_has_cat;
}

CT_AxDataSource* CT_SurfaceSer::mutable_cat()
{
    m_has_cat = true;
    if (!m_cat)
    {
        m_cat = new CT_AxDataSource();
    }
    return m_cat;
}

const CT_AxDataSource& CT_SurfaceSer::get_cat() const
{
    if (m_cat)
    {
        return *m_cat;
    }
    return CT_AxDataSource::default_instance();
}

bool CT_SurfaceSer::has_val() const
{
    return m_has_val;
}

CT_NumDataSource* CT_SurfaceSer::mutable_val()
{
    m_has_val = true;
    if (!m_val)
    {
        m_val = new CT_NumDataSource();
    }
    return m_val;
}

const CT_NumDataSource& CT_SurfaceSer::get_val() const
{
    if (m_val)
    {
        return *m_val;
    }
    return CT_NumDataSource::default_instance();
}

bool CT_SurfaceSer::has_extLst() const
{
    return m_has_extLst;
}

CT_ExtensionList* CT_SurfaceSer::mutable_extLst()
{
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new CT_ExtensionList();
    }
    return m_extLst;
}

const CT_ExtensionList& CT_SurfaceSer::get_extLst() const
{
    if (m_extLst)
    {
        return *m_extLst;
    }
    return CT_ExtensionList::default_instance();
}

void CT_SurfaceSer::clear()
{
    m_has_idx = false;

    if (m_idx)
    {
        delete m_idx;
        m_idx = NULL;
    }


    m_has_order = false;

    if (m_order)
    {
        delete m_order;
        m_order = NULL;
    }


    m_has_tx = false;

    if (m_tx)
    {
        delete m_tx;
        m_tx = NULL;
    }


    m_has_spPr = false;

    if (m_spPr)
    {
        delete m_spPr;
        m_spPr = NULL;
    }


    m_has_cat = false;

    if (m_cat)
    {
        delete m_cat;
        m_cat = NULL;
    }


    m_has_val = false;

    if (m_val)
    {
        delete m_val;
        m_val = NULL;
    }


    m_has_extLst = false;

    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }

}

void CT_SurfaceSer::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";

    assert(m_has_idx);


    assert(m_has_order);


    if (m_has_idx)
    {
        m_idx->toXmlElem("c:idx", "", _outStream);
    }


    if (m_has_order)
    {
        m_order->toXmlElem("c:order", "", _outStream);
    }


    if (m_has_tx)
    {
        m_tx->toXmlElem("c:tx", "", _outStream);
    }


    if (m_has_spPr)
    {
        m_spPr->toXmlElem("c:spPr", "", _outStream);
    }


    if (m_has_cat)
    {
        m_cat->toXmlElem("c:cat", "", _outStream);
    }


    if (m_has_val)
    {
        m_val->toXmlElem("c:val", "", _outStream);
    }


    if (m_has_extLst)
    {
        m_extLst->toXmlElem("c:extLst", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_SurfaceSer& CT_SurfaceSer::default_instance()
{
    if (!CT_SurfaceSer::default_instance_)
    {
        CT_SurfaceSer::default_instance_ = new CT_SurfaceSer();
    }
    return *CT_SurfaceSer::default_instance_;
}

CT_SurfaceSer* CT_SurfaceSer::default_instance_ = NULL;

// CT_Grouping
CT_Grouping::CT_Grouping()
    :m_has_val_attr(false),
     m_val_attr(NULL)
{
}
CT_Grouping::~CT_Grouping()
{
    clear();
}
void CT_Grouping::clear()
{
    m_has_val_attr = false;

    if (m_val_attr)
    {
        delete m_val_attr;
        m_val_attr = NULL;
    }

}

void CT_Grouping::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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

const CT_Grouping& CT_Grouping::default_instance()
{
    if (!CT_Grouping::default_instance_)
    {
        CT_Grouping::default_instance_ = new CT_Grouping();
    }
    return *CT_Grouping::default_instance_;
}

bool CT_Grouping::has_val_attr() const
{
    return m_has_val_attr;
}

void CT_Grouping::set_val_attr(const ST_Grouping& _val_attr)
{
    m_has_val_attr = true;
    m_val_attr = new ST_Grouping(_val_attr);
}

const ST_Grouping& CT_Grouping::get_val_attr() const
{
    if (m_val_attr)
    {
        return *m_val_attr;
    }
    return ST_Grouping::default_instance();
}

CT_Grouping* CT_Grouping::default_instance_ = NULL;

// CT_ChartLines
CT_ChartLines::CT_ChartLines()
    :m_has_spPr(false),
     m_spPr(NULL)
{
}
CT_ChartLines::~CT_ChartLines()
{
    clear();
}
bool CT_ChartLines::has_spPr() const
{
    return m_has_spPr;
}

ns_a::CT_ShapeProperties* CT_ChartLines::mutable_spPr()
{
    m_has_spPr = true;
    if (!m_spPr)
    {
        m_spPr = new ns_a::CT_ShapeProperties();
    }
    return m_spPr;
}

const ns_a::CT_ShapeProperties& CT_ChartLines::get_spPr() const
{
    if (m_spPr)
    {
        return *m_spPr;
    }
    return ns_a::CT_ShapeProperties::default_instance();
}

void CT_ChartLines::clear()
{
    m_has_spPr = false;

    if (m_spPr)
    {
        delete m_spPr;
        m_spPr = NULL;
    }

}

void CT_ChartLines::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";


    if (m_has_spPr)
    {
        m_spPr->toXmlElem("c:spPr", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_ChartLines& CT_ChartLines::default_instance()
{
    if (!CT_ChartLines::default_instance_)
    {
        CT_ChartLines::default_instance_ = new CT_ChartLines();
    }
    return *CT_ChartLines::default_instance_;
}

CT_ChartLines* CT_ChartLines::default_instance_ = NULL;

// CT_LineChart
CT_LineChart::CT_LineChart()
    :m_has_grouping(false),
     m_grouping(NULL),
     m_has_varyColors(false),
     m_varyColors(NULL),
     m_has_dLbls(false),
     m_dLbls(NULL),
     m_has_dropLines(false),
     m_dropLines(NULL),
     m_has_hiLowLines(false),
     m_hiLowLines(NULL),
     m_has_upDownBars(false),
     m_upDownBars(NULL),
     m_has_marker(false),
     m_marker(NULL),
     m_has_smooth(false),
     m_smooth(NULL),
     m_has_extLst(false),
     m_extLst(NULL)
{
}
CT_LineChart::~CT_LineChart()
{
    clear();
}
bool CT_LineChart::has_grouping() const
{
    return m_has_grouping;
}

CT_Grouping* CT_LineChart::mutable_grouping()
{
    m_has_grouping = true;
    if (!m_grouping)
    {
        m_grouping = new CT_Grouping();
    }
    return m_grouping;
}

const CT_Grouping& CT_LineChart::get_grouping() const
{
    if (m_grouping)
    {
        return *m_grouping;
    }
    return CT_Grouping::default_instance();
}

bool CT_LineChart::has_varyColors() const
{
    return m_has_varyColors;
}

CT_Boolean* CT_LineChart::mutable_varyColors()
{
    m_has_varyColors = true;
    if (!m_varyColors)
    {
        m_varyColors = new CT_Boolean();
    }
    return m_varyColors;
}

const CT_Boolean& CT_LineChart::get_varyColors() const
{
    if (m_varyColors)
    {
        return *m_varyColors;
    }
    return CT_Boolean::default_instance();
}

CT_LineSer* CT_LineChart::add_ser()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_LineSer* pNewChild = pChildGroup->mutable_ser();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

bool CT_LineChart::has_dLbls() const
{
    return m_has_dLbls;
}

CT_DLbls* CT_LineChart::mutable_dLbls()
{
    m_has_dLbls = true;
    if (!m_dLbls)
    {
        m_dLbls = new CT_DLbls();
    }
    return m_dLbls;
}

const CT_DLbls& CT_LineChart::get_dLbls() const
{
    if (m_dLbls)
    {
        return *m_dLbls;
    }
    return CT_DLbls::default_instance();
}

bool CT_LineChart::has_dropLines() const
{
    return m_has_dropLines;
}

CT_ChartLines* CT_LineChart::mutable_dropLines()
{
    m_has_dropLines = true;
    if (!m_dropLines)
    {
        m_dropLines = new CT_ChartLines();
    }
    return m_dropLines;
}

const CT_ChartLines& CT_LineChart::get_dropLines() const
{
    if (m_dropLines)
    {
        return *m_dropLines;
    }
    return CT_ChartLines::default_instance();
}

bool CT_LineChart::has_hiLowLines() const
{
    return m_has_hiLowLines;
}

CT_ChartLines* CT_LineChart::mutable_hiLowLines()
{
    m_has_hiLowLines = true;
    if (!m_hiLowLines)
    {
        m_hiLowLines = new CT_ChartLines();
    }
    return m_hiLowLines;
}

const CT_ChartLines& CT_LineChart::get_hiLowLines() const
{
    if (m_hiLowLines)
    {
        return *m_hiLowLines;
    }
    return CT_ChartLines::default_instance();
}

bool CT_LineChart::has_upDownBars() const
{
    return m_has_upDownBars;
}

CT_UpDownBars* CT_LineChart::mutable_upDownBars()
{
    m_has_upDownBars = true;
    if (!m_upDownBars)
    {
        m_upDownBars = new CT_UpDownBars();
    }
    return m_upDownBars;
}

const CT_UpDownBars& CT_LineChart::get_upDownBars() const
{
    if (m_upDownBars)
    {
        return *m_upDownBars;
    }
    return CT_UpDownBars::default_instance();
}

bool CT_LineChart::has_marker() const
{
    return m_has_marker;
}

CT_Boolean* CT_LineChart::mutable_marker()
{
    m_has_marker = true;
    if (!m_marker)
    {
        m_marker = new CT_Boolean();
    }
    return m_marker;
}

const CT_Boolean& CT_LineChart::get_marker() const
{
    if (m_marker)
    {
        return *m_marker;
    }
    return CT_Boolean::default_instance();
}

bool CT_LineChart::has_smooth() const
{
    return m_has_smooth;
}

CT_Boolean* CT_LineChart::mutable_smooth()
{
    m_has_smooth = true;
    if (!m_smooth)
    {
        m_smooth = new CT_Boolean();
    }
    return m_smooth;
}

const CT_Boolean& CT_LineChart::get_smooth() const
{
    if (m_smooth)
    {
        return *m_smooth;
    }
    return CT_Boolean::default_instance();
}

CT_UnsignedInt* CT_LineChart::add_axId()
{
    ChildGroup_2 *pChildGroup = new ChildGroup_2();
    CT_UnsignedInt* pNewChild = pChildGroup->mutable_axId();
    m_childGroupList_2.push_back(pChildGroup);
    return pNewChild;
}

bool CT_LineChart::has_extLst() const
{
    return m_has_extLst;
}

CT_ExtensionList* CT_LineChart::mutable_extLst()
{
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new CT_ExtensionList();
    }
    return m_extLst;
}

const CT_ExtensionList& CT_LineChart::get_extLst() const
{
    if (m_extLst)
    {
        return *m_extLst;
    }
    return CT_ExtensionList::default_instance();
}

void CT_LineChart::clear()
{
    m_has_grouping = false;

    if (m_grouping)
    {
        delete m_grouping;
        m_grouping = NULL;
    }


    m_has_varyColors = false;

    if (m_varyColors)
    {
        delete m_varyColors;
        m_varyColors = NULL;
    }


    {
        vector<ChildGroup_1*>::iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_1.clear();
    }

    m_has_dLbls = false;

    if (m_dLbls)
    {
        delete m_dLbls;
        m_dLbls = NULL;
    }


    m_has_dropLines = false;

    if (m_dropLines)
    {
        delete m_dropLines;
        m_dropLines = NULL;
    }


    m_has_hiLowLines = false;

    if (m_hiLowLines)
    {
        delete m_hiLowLines;
        m_hiLowLines = NULL;
    }


    m_has_upDownBars = false;

    if (m_upDownBars)
    {
        delete m_upDownBars;
        m_upDownBars = NULL;
    }


    m_has_marker = false;

    if (m_marker)
    {
        delete m_marker;
        m_marker = NULL;
    }


    m_has_smooth = false;

    if (m_smooth)
    {
        delete m_smooth;
        m_smooth = NULL;
    }


    {
        vector<ChildGroup_2*>::iterator iter;
        for (iter = m_childGroupList_2.begin(); iter != m_childGroupList_2.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_2.clear();
    }

    m_has_extLst = false;

    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }

}

void CT_LineChart::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";

    assert(m_has_grouping);


    if (m_has_grouping)
    {
        m_grouping->toXmlElem("c:grouping", "", _outStream);
    }


    if (m_has_varyColors)
    {
        m_varyColors->toXmlElem("c:varyColors", "", _outStream);
    }

    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_ser())
            {
                (*iter)->get_ser().toXmlElem("c:ser", "", _outStream);
            }


        }
    }


    if (m_has_dLbls)
    {
        m_dLbls->toXmlElem("c:dLbls", "", _outStream);
    }


    if (m_has_dropLines)
    {
        m_dropLines->toXmlElem("c:dropLines", "", _outStream);
    }


    if (m_has_hiLowLines)
    {
        m_hiLowLines->toXmlElem("c:hiLowLines", "", _outStream);
    }


    if (m_has_upDownBars)
    {
        m_upDownBars->toXmlElem("c:upDownBars", "", _outStream);
    }


    if (m_has_marker)
    {
        m_marker->toXmlElem("c:marker", "", _outStream);
    }


    if (m_has_smooth)
    {
        m_smooth->toXmlElem("c:smooth", "", _outStream);
    }

    {
        int childSize = count_if(m_childGroupList_2.begin(), m_childGroupList_2.end(), mem_fun(&ChildGroup_2::has_axId));
        assert(2 <= childSize && childSize <= 2);
    }

    {
        vector<ChildGroup_2*>::const_iterator iter;
        for (iter = m_childGroupList_2.begin(); iter != m_childGroupList_2.end(); ++iter)
        {
            if ((*iter)->has_axId())
            {
                (*iter)->get_axId().toXmlElem("c:axId", "", _outStream);
            }


        }
    }


    if (m_has_extLst)
    {
        m_extLst->toXmlElem("c:extLst", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_LineChart& CT_LineChart::default_instance()
{
    if (!CT_LineChart::default_instance_)
    {
        CT_LineChart::default_instance_ = new CT_LineChart();
    }
    return *CT_LineChart::default_instance_;
}


// CT_LineChart::ChildGroup_1
CT_LineChart::ChildGroup_1::ChildGroup_1()
    :m_has_ser(false),
     m_ser(NULL)
{
}
bool CT_LineChart::ChildGroup_1::has_ser() const
{
    return m_has_ser;
}

CT_LineSer* CT_LineChart::ChildGroup_1::mutable_ser()
{

    m_has_ser = true;
    if (!m_ser)
    {
        m_ser = new CT_LineSer();
    }
    return m_ser;
}

const CT_LineSer& CT_LineChart::ChildGroup_1::get_ser() const
{
    if (m_ser)
    {
        return *m_ser;
    }
    return CT_LineSer::default_instance();
}


// CT_LineChart::ChildGroup_2
CT_LineChart::ChildGroup_2::ChildGroup_2()
    :m_has_axId(false),
     m_axId(NULL)
{
}
bool CT_LineChart::ChildGroup_2::has_axId() const
{
    return m_has_axId;
}

CT_UnsignedInt* CT_LineChart::ChildGroup_2::mutable_axId()
{

    m_has_axId = true;
    if (!m_axId)
    {
        m_axId = new CT_UnsignedInt();
    }
    return m_axId;
}

const CT_UnsignedInt& CT_LineChart::ChildGroup_2::get_axId() const
{
    if (m_axId)
    {
        return *m_axId;
    }
    return CT_UnsignedInt::default_instance();
}

CT_LineChart* CT_LineChart::default_instance_ = NULL;

// CT_Line3DChart
CT_Line3DChart::CT_Line3DChart()
    :m_has_grouping(false),
     m_grouping(NULL),
     m_has_varyColors(false),
     m_varyColors(NULL),
     m_has_dLbls(false),
     m_dLbls(NULL),
     m_has_dropLines(false),
     m_dropLines(NULL),
     m_has_gapDepth(false),
     m_gapDepth(NULL),
     m_has_extLst(false),
     m_extLst(NULL)
{
}
CT_Line3DChart::~CT_Line3DChart()
{
    clear();
}
bool CT_Line3DChart::has_grouping() const
{
    return m_has_grouping;
}

CT_Grouping* CT_Line3DChart::mutable_grouping()
{
    m_has_grouping = true;
    if (!m_grouping)
    {
        m_grouping = new CT_Grouping();
    }
    return m_grouping;
}

const CT_Grouping& CT_Line3DChart::get_grouping() const
{
    if (m_grouping)
    {
        return *m_grouping;
    }
    return CT_Grouping::default_instance();
}

bool CT_Line3DChart::has_varyColors() const
{
    return m_has_varyColors;
}

CT_Boolean* CT_Line3DChart::mutable_varyColors()
{
    m_has_varyColors = true;
    if (!m_varyColors)
    {
        m_varyColors = new CT_Boolean();
    }
    return m_varyColors;
}

const CT_Boolean& CT_Line3DChart::get_varyColors() const
{
    if (m_varyColors)
    {
        return *m_varyColors;
    }
    return CT_Boolean::default_instance();
}

CT_LineSer* CT_Line3DChart::add_ser()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_LineSer* pNewChild = pChildGroup->mutable_ser();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

bool CT_Line3DChart::has_dLbls() const
{
    return m_has_dLbls;
}

CT_DLbls* CT_Line3DChart::mutable_dLbls()
{
    m_has_dLbls = true;
    if (!m_dLbls)
    {
        m_dLbls = new CT_DLbls();
    }
    return m_dLbls;
}

const CT_DLbls& CT_Line3DChart::get_dLbls() const
{
    if (m_dLbls)
    {
        return *m_dLbls;
    }
    return CT_DLbls::default_instance();
}

bool CT_Line3DChart::has_dropLines() const
{
    return m_has_dropLines;
}

CT_ChartLines* CT_Line3DChart::mutable_dropLines()
{
    m_has_dropLines = true;
    if (!m_dropLines)
    {
        m_dropLines = new CT_ChartLines();
    }
    return m_dropLines;
}

const CT_ChartLines& CT_Line3DChart::get_dropLines() const
{
    if (m_dropLines)
    {
        return *m_dropLines;
    }
    return CT_ChartLines::default_instance();
}

bool CT_Line3DChart::has_gapDepth() const
{
    return m_has_gapDepth;
}

CT_GapAmount* CT_Line3DChart::mutable_gapDepth()
{
    m_has_gapDepth = true;
    if (!m_gapDepth)
    {
        m_gapDepth = new CT_GapAmount();
    }
    return m_gapDepth;
}

const CT_GapAmount& CT_Line3DChart::get_gapDepth() const
{
    if (m_gapDepth)
    {
        return *m_gapDepth;
    }
    return CT_GapAmount::default_instance();
}

CT_UnsignedInt* CT_Line3DChart::add_axId()
{
    ChildGroup_2 *pChildGroup = new ChildGroup_2();
    CT_UnsignedInt* pNewChild = pChildGroup->mutable_axId();
    m_childGroupList_2.push_back(pChildGroup);
    return pNewChild;
}

bool CT_Line3DChart::has_extLst() const
{
    return m_has_extLst;
}

CT_ExtensionList* CT_Line3DChart::mutable_extLst()
{
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new CT_ExtensionList();
    }
    return m_extLst;
}

const CT_ExtensionList& CT_Line3DChart::get_extLst() const
{
    if (m_extLst)
    {
        return *m_extLst;
    }
    return CT_ExtensionList::default_instance();
}

void CT_Line3DChart::clear()
{
    m_has_grouping = false;

    if (m_grouping)
    {
        delete m_grouping;
        m_grouping = NULL;
    }


    m_has_varyColors = false;

    if (m_varyColors)
    {
        delete m_varyColors;
        m_varyColors = NULL;
    }


    {
        vector<ChildGroup_1*>::iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_1.clear();
    }

    m_has_dLbls = false;

    if (m_dLbls)
    {
        delete m_dLbls;
        m_dLbls = NULL;
    }


    m_has_dropLines = false;

    if (m_dropLines)
    {
        delete m_dropLines;
        m_dropLines = NULL;
    }


    m_has_gapDepth = false;

    if (m_gapDepth)
    {
        delete m_gapDepth;
        m_gapDepth = NULL;
    }


    {
        vector<ChildGroup_2*>::iterator iter;
        for (iter = m_childGroupList_2.begin(); iter != m_childGroupList_2.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_2.clear();
    }

    m_has_extLst = false;

    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }

}

void CT_Line3DChart::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";

    assert(m_has_grouping);


    if (m_has_grouping)
    {
        m_grouping->toXmlElem("c:grouping", "", _outStream);
    }


    if (m_has_varyColors)
    {
        m_varyColors->toXmlElem("c:varyColors", "", _outStream);
    }

    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_ser())
            {
                (*iter)->get_ser().toXmlElem("c:ser", "", _outStream);
            }


        }
    }


    if (m_has_dLbls)
    {
        m_dLbls->toXmlElem("c:dLbls", "", _outStream);
    }


    if (m_has_dropLines)
    {
        m_dropLines->toXmlElem("c:dropLines", "", _outStream);
    }


    if (m_has_gapDepth)
    {
        m_gapDepth->toXmlElem("c:gapDepth", "", _outStream);
    }

    {
        int childSize = count_if(m_childGroupList_2.begin(), m_childGroupList_2.end(), mem_fun(&ChildGroup_2::has_axId));
        assert(3 <= childSize && childSize <= 3);
    }

    {
        vector<ChildGroup_2*>::const_iterator iter;
        for (iter = m_childGroupList_2.begin(); iter != m_childGroupList_2.end(); ++iter)
        {
            if ((*iter)->has_axId())
            {
                (*iter)->get_axId().toXmlElem("c:axId", "", _outStream);
            }


        }
    }


    if (m_has_extLst)
    {
        m_extLst->toXmlElem("c:extLst", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_Line3DChart& CT_Line3DChart::default_instance()
{
    if (!CT_Line3DChart::default_instance_)
    {
        CT_Line3DChart::default_instance_ = new CT_Line3DChart();
    }
    return *CT_Line3DChart::default_instance_;
}


// CT_Line3DChart::ChildGroup_1
CT_Line3DChart::ChildGroup_1::ChildGroup_1()
    :m_has_ser(false),
     m_ser(NULL)
{
}
bool CT_Line3DChart::ChildGroup_1::has_ser() const
{
    return m_has_ser;
}

CT_LineSer* CT_Line3DChart::ChildGroup_1::mutable_ser()
{

    m_has_ser = true;
    if (!m_ser)
    {
        m_ser = new CT_LineSer();
    }
    return m_ser;
}

const CT_LineSer& CT_Line3DChart::ChildGroup_1::get_ser() const
{
    if (m_ser)
    {
        return *m_ser;
    }
    return CT_LineSer::default_instance();
}


// CT_Line3DChart::ChildGroup_2
CT_Line3DChart::ChildGroup_2::ChildGroup_2()
    :m_has_axId(false),
     m_axId(NULL)
{
}
bool CT_Line3DChart::ChildGroup_2::has_axId() const
{
    return m_has_axId;
}

CT_UnsignedInt* CT_Line3DChart::ChildGroup_2::mutable_axId()
{

    m_has_axId = true;
    if (!m_axId)
    {
        m_axId = new CT_UnsignedInt();
    }
    return m_axId;
}

const CT_UnsignedInt& CT_Line3DChart::ChildGroup_2::get_axId() const
{
    if (m_axId)
    {
        return *m_axId;
    }
    return CT_UnsignedInt::default_instance();
}

CT_Line3DChart* CT_Line3DChart::default_instance_ = NULL;

// CT_StockChart
CT_StockChart::CT_StockChart()
    :m_has_dLbls(false),
     m_dLbls(NULL),
     m_has_dropLines(false),
     m_dropLines(NULL),
     m_has_hiLowLines(false),
     m_hiLowLines(NULL),
     m_has_upDownBars(false),
     m_upDownBars(NULL),
     m_has_extLst(false),
     m_extLst(NULL)
{
}
CT_StockChart::~CT_StockChart()
{
    clear();
}
CT_LineSer* CT_StockChart::add_ser()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_LineSer* pNewChild = pChildGroup->mutable_ser();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

bool CT_StockChart::has_dLbls() const
{
    return m_has_dLbls;
}

CT_DLbls* CT_StockChart::mutable_dLbls()
{
    m_has_dLbls = true;
    if (!m_dLbls)
    {
        m_dLbls = new CT_DLbls();
    }
    return m_dLbls;
}

const CT_DLbls& CT_StockChart::get_dLbls() const
{
    if (m_dLbls)
    {
        return *m_dLbls;
    }
    return CT_DLbls::default_instance();
}

bool CT_StockChart::has_dropLines() const
{
    return m_has_dropLines;
}

CT_ChartLines* CT_StockChart::mutable_dropLines()
{
    m_has_dropLines = true;
    if (!m_dropLines)
    {
        m_dropLines = new CT_ChartLines();
    }
    return m_dropLines;
}

const CT_ChartLines& CT_StockChart::get_dropLines() const
{
    if (m_dropLines)
    {
        return *m_dropLines;
    }
    return CT_ChartLines::default_instance();
}

bool CT_StockChart::has_hiLowLines() const
{
    return m_has_hiLowLines;
}

CT_ChartLines* CT_StockChart::mutable_hiLowLines()
{
    m_has_hiLowLines = true;
    if (!m_hiLowLines)
    {
        m_hiLowLines = new CT_ChartLines();
    }
    return m_hiLowLines;
}

const CT_ChartLines& CT_StockChart::get_hiLowLines() const
{
    if (m_hiLowLines)
    {
        return *m_hiLowLines;
    }
    return CT_ChartLines::default_instance();
}

bool CT_StockChart::has_upDownBars() const
{
    return m_has_upDownBars;
}

CT_UpDownBars* CT_StockChart::mutable_upDownBars()
{
    m_has_upDownBars = true;
    if (!m_upDownBars)
    {
        m_upDownBars = new CT_UpDownBars();
    }
    return m_upDownBars;
}

const CT_UpDownBars& CT_StockChart::get_upDownBars() const
{
    if (m_upDownBars)
    {
        return *m_upDownBars;
    }
    return CT_UpDownBars::default_instance();
}

CT_UnsignedInt* CT_StockChart::add_axId()
{
    ChildGroup_2 *pChildGroup = new ChildGroup_2();
    CT_UnsignedInt* pNewChild = pChildGroup->mutable_axId();
    m_childGroupList_2.push_back(pChildGroup);
    return pNewChild;
}

bool CT_StockChart::has_extLst() const
{
    return m_has_extLst;
}

CT_ExtensionList* CT_StockChart::mutable_extLst()
{
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new CT_ExtensionList();
    }
    return m_extLst;
}

const CT_ExtensionList& CT_StockChart::get_extLst() const
{
    if (m_extLst)
    {
        return *m_extLst;
    }
    return CT_ExtensionList::default_instance();
}

void CT_StockChart::clear()
{
    {
        vector<ChildGroup_1*>::iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_1.clear();
    }

    m_has_dLbls = false;

    if (m_dLbls)
    {
        delete m_dLbls;
        m_dLbls = NULL;
    }


    m_has_dropLines = false;

    if (m_dropLines)
    {
        delete m_dropLines;
        m_dropLines = NULL;
    }


    m_has_hiLowLines = false;

    if (m_hiLowLines)
    {
        delete m_hiLowLines;
        m_hiLowLines = NULL;
    }


    m_has_upDownBars = false;

    if (m_upDownBars)
    {
        delete m_upDownBars;
        m_upDownBars = NULL;
    }


    {
        vector<ChildGroup_2*>::iterator iter;
        for (iter = m_childGroupList_2.begin(); iter != m_childGroupList_2.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_2.clear();
    }

    m_has_extLst = false;

    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }

}

void CT_StockChart::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";

    {
        int childSize = count_if(m_childGroupList_1.begin(), m_childGroupList_1.end(), mem_fun(&ChildGroup_1::has_ser));
        assert(3 <= childSize && childSize <= 4);
    }

    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_ser())
            {
                (*iter)->get_ser().toXmlElem("c:ser", "", _outStream);
            }


        }
    }


    if (m_has_dLbls)
    {
        m_dLbls->toXmlElem("c:dLbls", "", _outStream);
    }


    if (m_has_dropLines)
    {
        m_dropLines->toXmlElem("c:dropLines", "", _outStream);
    }


    if (m_has_hiLowLines)
    {
        m_hiLowLines->toXmlElem("c:hiLowLines", "", _outStream);
    }


    if (m_has_upDownBars)
    {
        m_upDownBars->toXmlElem("c:upDownBars", "", _outStream);
    }

    {
        int childSize = count_if(m_childGroupList_2.begin(), m_childGroupList_2.end(), mem_fun(&ChildGroup_2::has_axId));
        assert(2 <= childSize && childSize <= 2);
    }

    {
        vector<ChildGroup_2*>::const_iterator iter;
        for (iter = m_childGroupList_2.begin(); iter != m_childGroupList_2.end(); ++iter)
        {
            if ((*iter)->has_axId())
            {
                (*iter)->get_axId().toXmlElem("c:axId", "", _outStream);
            }


        }
    }


    if (m_has_extLst)
    {
        m_extLst->toXmlElem("c:extLst", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_StockChart& CT_StockChart::default_instance()
{
    if (!CT_StockChart::default_instance_)
    {
        CT_StockChart::default_instance_ = new CT_StockChart();
    }
    return *CT_StockChart::default_instance_;
}


// CT_StockChart::ChildGroup_1
CT_StockChart::ChildGroup_1::ChildGroup_1()
    :m_has_ser(false),
     m_ser(NULL)
{
}
bool CT_StockChart::ChildGroup_1::has_ser() const
{
    return m_has_ser;
}

CT_LineSer* CT_StockChart::ChildGroup_1::mutable_ser()
{

    m_has_ser = true;
    if (!m_ser)
    {
        m_ser = new CT_LineSer();
    }
    return m_ser;
}

const CT_LineSer& CT_StockChart::ChildGroup_1::get_ser() const
{
    if (m_ser)
    {
        return *m_ser;
    }
    return CT_LineSer::default_instance();
}


// CT_StockChart::ChildGroup_2
CT_StockChart::ChildGroup_2::ChildGroup_2()
    :m_has_axId(false),
     m_axId(NULL)
{
}
bool CT_StockChart::ChildGroup_2::has_axId() const
{
    return m_has_axId;
}

CT_UnsignedInt* CT_StockChart::ChildGroup_2::mutable_axId()
{

    m_has_axId = true;
    if (!m_axId)
    {
        m_axId = new CT_UnsignedInt();
    }
    return m_axId;
}

const CT_UnsignedInt& CT_StockChart::ChildGroup_2::get_axId() const
{
    if (m_axId)
    {
        return *m_axId;
    }
    return CT_UnsignedInt::default_instance();
}

CT_StockChart* CT_StockChart::default_instance_ = NULL;

// CT_ScatterStyle
CT_ScatterStyle::CT_ScatterStyle()
    :m_has_val_attr(false),
     m_val_attr(NULL)
{
}
CT_ScatterStyle::~CT_ScatterStyle()
{
    clear();
}
void CT_ScatterStyle::clear()
{
    m_has_val_attr = false;

    if (m_val_attr)
    {
        delete m_val_attr;
        m_val_attr = NULL;
    }

}

void CT_ScatterStyle::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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

const CT_ScatterStyle& CT_ScatterStyle::default_instance()
{
    if (!CT_ScatterStyle::default_instance_)
    {
        CT_ScatterStyle::default_instance_ = new CT_ScatterStyle();
    }
    return *CT_ScatterStyle::default_instance_;
}

bool CT_ScatterStyle::has_val_attr() const
{
    return m_has_val_attr;
}

void CT_ScatterStyle::set_val_attr(const ST_ScatterStyle& _val_attr)
{
    m_has_val_attr = true;
    m_val_attr = new ST_ScatterStyle(_val_attr);
}

const ST_ScatterStyle& CT_ScatterStyle::get_val_attr() const
{
    if (m_val_attr)
    {
        return *m_val_attr;
    }
    return ST_ScatterStyle::default_instance();
}

CT_ScatterStyle* CT_ScatterStyle::default_instance_ = NULL;

// CT_ScatterChart
CT_ScatterChart::CT_ScatterChart()
    :m_has_scatterStyle(false),
     m_scatterStyle(NULL),
     m_has_varyColors(false),
     m_varyColors(NULL),
     m_has_dLbls(false),
     m_dLbls(NULL),
     m_has_extLst(false),
     m_extLst(NULL)
{
}
CT_ScatterChart::~CT_ScatterChart()
{
    clear();
}
bool CT_ScatterChart::has_scatterStyle() const
{
    return m_has_scatterStyle;
}

CT_ScatterStyle* CT_ScatterChart::mutable_scatterStyle()
{
    m_has_scatterStyle = true;
    if (!m_scatterStyle)
    {
        m_scatterStyle = new CT_ScatterStyle();
    }
    return m_scatterStyle;
}

const CT_ScatterStyle& CT_ScatterChart::get_scatterStyle() const
{
    if (m_scatterStyle)
    {
        return *m_scatterStyle;
    }
    return CT_ScatterStyle::default_instance();
}

bool CT_ScatterChart::has_varyColors() const
{
    return m_has_varyColors;
}

CT_Boolean* CT_ScatterChart::mutable_varyColors()
{
    m_has_varyColors = true;
    if (!m_varyColors)
    {
        m_varyColors = new CT_Boolean();
    }
    return m_varyColors;
}

const CT_Boolean& CT_ScatterChart::get_varyColors() const
{
    if (m_varyColors)
    {
        return *m_varyColors;
    }
    return CT_Boolean::default_instance();
}

CT_ScatterSer* CT_ScatterChart::add_ser()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_ScatterSer* pNewChild = pChildGroup->mutable_ser();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

bool CT_ScatterChart::has_dLbls() const
{
    return m_has_dLbls;
}

CT_DLbls* CT_ScatterChart::mutable_dLbls()
{
    m_has_dLbls = true;
    if (!m_dLbls)
    {
        m_dLbls = new CT_DLbls();
    }
    return m_dLbls;
}

const CT_DLbls& CT_ScatterChart::get_dLbls() const
{
    if (m_dLbls)
    {
        return *m_dLbls;
    }
    return CT_DLbls::default_instance();
}

CT_UnsignedInt* CT_ScatterChart::add_axId()
{
    ChildGroup_2 *pChildGroup = new ChildGroup_2();
    CT_UnsignedInt* pNewChild = pChildGroup->mutable_axId();
    m_childGroupList_2.push_back(pChildGroup);
    return pNewChild;
}

bool CT_ScatterChart::has_extLst() const
{
    return m_has_extLst;
}

CT_ExtensionList* CT_ScatterChart::mutable_extLst()
{
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new CT_ExtensionList();
    }
    return m_extLst;
}

const CT_ExtensionList& CT_ScatterChart::get_extLst() const
{
    if (m_extLst)
    {
        return *m_extLst;
    }
    return CT_ExtensionList::default_instance();
}

void CT_ScatterChart::clear()
{
    m_has_scatterStyle = false;

    if (m_scatterStyle)
    {
        delete m_scatterStyle;
        m_scatterStyle = NULL;
    }


    m_has_varyColors = false;

    if (m_varyColors)
    {
        delete m_varyColors;
        m_varyColors = NULL;
    }


    {
        vector<ChildGroup_1*>::iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_1.clear();
    }

    m_has_dLbls = false;

    if (m_dLbls)
    {
        delete m_dLbls;
        m_dLbls = NULL;
    }


    {
        vector<ChildGroup_2*>::iterator iter;
        for (iter = m_childGroupList_2.begin(); iter != m_childGroupList_2.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_2.clear();
    }

    m_has_extLst = false;

    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }

}

void CT_ScatterChart::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";

    assert(m_has_scatterStyle);


    if (m_has_scatterStyle)
    {
        m_scatterStyle->toXmlElem("c:scatterStyle", "", _outStream);
    }


    if (m_has_varyColors)
    {
        m_varyColors->toXmlElem("c:varyColors", "", _outStream);
    }

    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_ser())
            {
                (*iter)->get_ser().toXmlElem("c:ser", "", _outStream);
            }


        }
    }


    if (m_has_dLbls)
    {
        m_dLbls->toXmlElem("c:dLbls", "", _outStream);
    }

    {
        int childSize = count_if(m_childGroupList_2.begin(), m_childGroupList_2.end(), mem_fun(&ChildGroup_2::has_axId));
        assert(2 <= childSize && childSize <= 2);
    }

    {
        vector<ChildGroup_2*>::const_iterator iter;
        for (iter = m_childGroupList_2.begin(); iter != m_childGroupList_2.end(); ++iter)
        {
            if ((*iter)->has_axId())
            {
                (*iter)->get_axId().toXmlElem("c:axId", "", _outStream);
            }


        }
    }


    if (m_has_extLst)
    {
        m_extLst->toXmlElem("c:extLst", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_ScatterChart& CT_ScatterChart::default_instance()
{
    if (!CT_ScatterChart::default_instance_)
    {
        CT_ScatterChart::default_instance_ = new CT_ScatterChart();
    }
    return *CT_ScatterChart::default_instance_;
}


// CT_ScatterChart::ChildGroup_1
CT_ScatterChart::ChildGroup_1::ChildGroup_1()
    :m_has_ser(false),
     m_ser(NULL)
{
}
bool CT_ScatterChart::ChildGroup_1::has_ser() const
{
    return m_has_ser;
}

CT_ScatterSer* CT_ScatterChart::ChildGroup_1::mutable_ser()
{

    m_has_ser = true;
    if (!m_ser)
    {
        m_ser = new CT_ScatterSer();
    }
    return m_ser;
}

const CT_ScatterSer& CT_ScatterChart::ChildGroup_1::get_ser() const
{
    if (m_ser)
    {
        return *m_ser;
    }
    return CT_ScatterSer::default_instance();
}


// CT_ScatterChart::ChildGroup_2
CT_ScatterChart::ChildGroup_2::ChildGroup_2()
    :m_has_axId(false),
     m_axId(NULL)
{
}
bool CT_ScatterChart::ChildGroup_2::has_axId() const
{
    return m_has_axId;
}

CT_UnsignedInt* CT_ScatterChart::ChildGroup_2::mutable_axId()
{

    m_has_axId = true;
    if (!m_axId)
    {
        m_axId = new CT_UnsignedInt();
    }
    return m_axId;
}

const CT_UnsignedInt& CT_ScatterChart::ChildGroup_2::get_axId() const
{
    if (m_axId)
    {
        return *m_axId;
    }
    return CT_UnsignedInt::default_instance();
}

CT_ScatterChart* CT_ScatterChart::default_instance_ = NULL;

// CT_RadarStyle
CT_RadarStyle::CT_RadarStyle()
    :m_has_val_attr(false),
     m_val_attr(NULL)
{
}
CT_RadarStyle::~CT_RadarStyle()
{
    clear();
}
void CT_RadarStyle::clear()
{
    m_has_val_attr = false;

    if (m_val_attr)
    {
        delete m_val_attr;
        m_val_attr = NULL;
    }

}

void CT_RadarStyle::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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

const CT_RadarStyle& CT_RadarStyle::default_instance()
{
    if (!CT_RadarStyle::default_instance_)
    {
        CT_RadarStyle::default_instance_ = new CT_RadarStyle();
    }
    return *CT_RadarStyle::default_instance_;
}

bool CT_RadarStyle::has_val_attr() const
{
    return m_has_val_attr;
}

void CT_RadarStyle::set_val_attr(const ST_RadarStyle& _val_attr)
{
    m_has_val_attr = true;
    m_val_attr = new ST_RadarStyle(_val_attr);
}

const ST_RadarStyle& CT_RadarStyle::get_val_attr() const
{
    if (m_val_attr)
    {
        return *m_val_attr;
    }
    return ST_RadarStyle::default_instance();
}

CT_RadarStyle* CT_RadarStyle::default_instance_ = NULL;

// CT_RadarChart
CT_RadarChart::CT_RadarChart()
    :m_has_radarStyle(false),
     m_radarStyle(NULL),
     m_has_varyColors(false),
     m_varyColors(NULL),
     m_has_dLbls(false),
     m_dLbls(NULL),
     m_has_extLst(false),
     m_extLst(NULL)
{
}
CT_RadarChart::~CT_RadarChart()
{
    clear();
}
bool CT_RadarChart::has_radarStyle() const
{
    return m_has_radarStyle;
}

CT_RadarStyle* CT_RadarChart::mutable_radarStyle()
{
    m_has_radarStyle = true;
    if (!m_radarStyle)
    {
        m_radarStyle = new CT_RadarStyle();
    }
    return m_radarStyle;
}

const CT_RadarStyle& CT_RadarChart::get_radarStyle() const
{
    if (m_radarStyle)
    {
        return *m_radarStyle;
    }
    return CT_RadarStyle::default_instance();
}

bool CT_RadarChart::has_varyColors() const
{
    return m_has_varyColors;
}

CT_Boolean* CT_RadarChart::mutable_varyColors()
{
    m_has_varyColors = true;
    if (!m_varyColors)
    {
        m_varyColors = new CT_Boolean();
    }
    return m_varyColors;
}

const CT_Boolean& CT_RadarChart::get_varyColors() const
{
    if (m_varyColors)
    {
        return *m_varyColors;
    }
    return CT_Boolean::default_instance();
}

CT_RadarSer* CT_RadarChart::add_ser()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_RadarSer* pNewChild = pChildGroup->mutable_ser();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

bool CT_RadarChart::has_dLbls() const
{
    return m_has_dLbls;
}

CT_DLbls* CT_RadarChart::mutable_dLbls()
{
    m_has_dLbls = true;
    if (!m_dLbls)
    {
        m_dLbls = new CT_DLbls();
    }
    return m_dLbls;
}

const CT_DLbls& CT_RadarChart::get_dLbls() const
{
    if (m_dLbls)
    {
        return *m_dLbls;
    }
    return CT_DLbls::default_instance();
}

CT_UnsignedInt* CT_RadarChart::add_axId()
{
    ChildGroup_2 *pChildGroup = new ChildGroup_2();
    CT_UnsignedInt* pNewChild = pChildGroup->mutable_axId();
    m_childGroupList_2.push_back(pChildGroup);
    return pNewChild;
}

bool CT_RadarChart::has_extLst() const
{
    return m_has_extLst;
}

CT_ExtensionList* CT_RadarChart::mutable_extLst()
{
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new CT_ExtensionList();
    }
    return m_extLst;
}

const CT_ExtensionList& CT_RadarChart::get_extLst() const
{
    if (m_extLst)
    {
        return *m_extLst;
    }
    return CT_ExtensionList::default_instance();
}

void CT_RadarChart::clear()
{
    m_has_radarStyle = false;

    if (m_radarStyle)
    {
        delete m_radarStyle;
        m_radarStyle = NULL;
    }


    m_has_varyColors = false;

    if (m_varyColors)
    {
        delete m_varyColors;
        m_varyColors = NULL;
    }


    {
        vector<ChildGroup_1*>::iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_1.clear();
    }

    m_has_dLbls = false;

    if (m_dLbls)
    {
        delete m_dLbls;
        m_dLbls = NULL;
    }


    {
        vector<ChildGroup_2*>::iterator iter;
        for (iter = m_childGroupList_2.begin(); iter != m_childGroupList_2.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_2.clear();
    }

    m_has_extLst = false;

    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }

}

void CT_RadarChart::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";

    assert(m_has_radarStyle);


    if (m_has_radarStyle)
    {
        m_radarStyle->toXmlElem("c:radarStyle", "", _outStream);
    }


    if (m_has_varyColors)
    {
        m_varyColors->toXmlElem("c:varyColors", "", _outStream);
    }

    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_ser())
            {
                (*iter)->get_ser().toXmlElem("c:ser", "", _outStream);
            }


        }
    }


    if (m_has_dLbls)
    {
        m_dLbls->toXmlElem("c:dLbls", "", _outStream);
    }

    {
        int childSize = count_if(m_childGroupList_2.begin(), m_childGroupList_2.end(), mem_fun(&ChildGroup_2::has_axId));
        assert(2 <= childSize && childSize <= 2);
    }

    {
        vector<ChildGroup_2*>::const_iterator iter;
        for (iter = m_childGroupList_2.begin(); iter != m_childGroupList_2.end(); ++iter)
        {
            if ((*iter)->has_axId())
            {
                (*iter)->get_axId().toXmlElem("c:axId", "", _outStream);
            }


        }
    }


    if (m_has_extLst)
    {
        m_extLst->toXmlElem("c:extLst", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_RadarChart& CT_RadarChart::default_instance()
{
    if (!CT_RadarChart::default_instance_)
    {
        CT_RadarChart::default_instance_ = new CT_RadarChart();
    }
    return *CT_RadarChart::default_instance_;
}


// CT_RadarChart::ChildGroup_1
CT_RadarChart::ChildGroup_1::ChildGroup_1()
    :m_has_ser(false),
     m_ser(NULL)
{
}
bool CT_RadarChart::ChildGroup_1::has_ser() const
{
    return m_has_ser;
}

CT_RadarSer* CT_RadarChart::ChildGroup_1::mutable_ser()
{

    m_has_ser = true;
    if (!m_ser)
    {
        m_ser = new CT_RadarSer();
    }
    return m_ser;
}

const CT_RadarSer& CT_RadarChart::ChildGroup_1::get_ser() const
{
    if (m_ser)
    {
        return *m_ser;
    }
    return CT_RadarSer::default_instance();
}


// CT_RadarChart::ChildGroup_2
CT_RadarChart::ChildGroup_2::ChildGroup_2()
    :m_has_axId(false),
     m_axId(NULL)
{
}
bool CT_RadarChart::ChildGroup_2::has_axId() const
{
    return m_has_axId;
}

CT_UnsignedInt* CT_RadarChart::ChildGroup_2::mutable_axId()
{

    m_has_axId = true;
    if (!m_axId)
    {
        m_axId = new CT_UnsignedInt();
    }
    return m_axId;
}

const CT_UnsignedInt& CT_RadarChart::ChildGroup_2::get_axId() const
{
    if (m_axId)
    {
        return *m_axId;
    }
    return CT_UnsignedInt::default_instance();
}

CT_RadarChart* CT_RadarChart::default_instance_ = NULL;

// CT_BarGrouping
CT_BarGrouping::CT_BarGrouping()
    :m_has_val_attr(false),
     m_val_attr(NULL)
{
}
CT_BarGrouping::~CT_BarGrouping()
{
    clear();
}
void CT_BarGrouping::clear()
{
    m_has_val_attr = false;

    if (m_val_attr)
    {
        delete m_val_attr;
        m_val_attr = NULL;
    }

}

void CT_BarGrouping::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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

const CT_BarGrouping& CT_BarGrouping::default_instance()
{
    if (!CT_BarGrouping::default_instance_)
    {
        CT_BarGrouping::default_instance_ = new CT_BarGrouping();
    }
    return *CT_BarGrouping::default_instance_;
}

bool CT_BarGrouping::has_val_attr() const
{
    return m_has_val_attr;
}

void CT_BarGrouping::set_val_attr(const ST_BarGrouping& _val_attr)
{
    m_has_val_attr = true;
    m_val_attr = new ST_BarGrouping(_val_attr);
}

const ST_BarGrouping& CT_BarGrouping::get_val_attr() const
{
    if (m_val_attr)
    {
        return *m_val_attr;
    }
    return ST_BarGrouping::default_instance();
}

CT_BarGrouping* CT_BarGrouping::default_instance_ = NULL;

// CT_BarDir
CT_BarDir::CT_BarDir()
    :m_has_val_attr(false),
     m_val_attr(NULL)
{
}
CT_BarDir::~CT_BarDir()
{
    clear();
}
void CT_BarDir::clear()
{
    m_has_val_attr = false;

    if (m_val_attr)
    {
        delete m_val_attr;
        m_val_attr = NULL;
    }

}

void CT_BarDir::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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

const CT_BarDir& CT_BarDir::default_instance()
{
    if (!CT_BarDir::default_instance_)
    {
        CT_BarDir::default_instance_ = new CT_BarDir();
    }
    return *CT_BarDir::default_instance_;
}

bool CT_BarDir::has_val_attr() const
{
    return m_has_val_attr;
}

void CT_BarDir::set_val_attr(const ST_BarDir& _val_attr)
{
    m_has_val_attr = true;
    m_val_attr = new ST_BarDir(_val_attr);
}

const ST_BarDir& CT_BarDir::get_val_attr() const
{
    if (m_val_attr)
    {
        return *m_val_attr;
    }
    return ST_BarDir::default_instance();
}

CT_BarDir* CT_BarDir::default_instance_ = NULL;

// CT_Shape
CT_Shape::CT_Shape()
    :m_has_val_attr(false),
     m_val_attr(NULL)
{
}
CT_Shape::~CT_Shape()
{
    clear();
}
void CT_Shape::clear()
{
    m_has_val_attr = false;

    if (m_val_attr)
    {
        delete m_val_attr;
        m_val_attr = NULL;
    }

}

void CT_Shape::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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

const CT_Shape& CT_Shape::default_instance()
{
    if (!CT_Shape::default_instance_)
    {
        CT_Shape::default_instance_ = new CT_Shape();
    }
    return *CT_Shape::default_instance_;
}

bool CT_Shape::has_val_attr() const
{
    return m_has_val_attr;
}

void CT_Shape::set_val_attr(const ST_Shape& _val_attr)
{
    m_has_val_attr = true;
    m_val_attr = new ST_Shape(_val_attr);
}

const ST_Shape& CT_Shape::get_val_attr() const
{
    if (m_val_attr)
    {
        return *m_val_attr;
    }
    return ST_Shape::default_instance();
}

CT_Shape* CT_Shape::default_instance_ = NULL;

// CT_BarChart
CT_BarChart::CT_BarChart()
    :m_has_barDir(false),
     m_barDir(NULL),
     m_has_grouping(false),
     m_grouping(NULL),
     m_has_varyColors(false),
     m_varyColors(NULL),
     m_has_dLbls(false),
     m_dLbls(NULL),
     m_has_gapWidth(false),
     m_gapWidth(NULL),
     m_has_overlap(false),
     m_overlap(NULL),
     m_has_extLst(false),
     m_extLst(NULL)
{
}
CT_BarChart::~CT_BarChart()
{
    clear();
}
bool CT_BarChart::has_barDir() const
{
    return m_has_barDir;
}

CT_BarDir* CT_BarChart::mutable_barDir()
{
    m_has_barDir = true;
    if (!m_barDir)
    {
        m_barDir = new CT_BarDir();
    }
    return m_barDir;
}

const CT_BarDir& CT_BarChart::get_barDir() const
{
    if (m_barDir)
    {
        return *m_barDir;
    }
    return CT_BarDir::default_instance();
}

bool CT_BarChart::has_grouping() const
{
    return m_has_grouping;
}

CT_BarGrouping* CT_BarChart::mutable_grouping()
{
    m_has_grouping = true;
    if (!m_grouping)
    {
        m_grouping = new CT_BarGrouping();
    }
    return m_grouping;
}

const CT_BarGrouping& CT_BarChart::get_grouping() const
{
    if (m_grouping)
    {
        return *m_grouping;
    }
    return CT_BarGrouping::default_instance();
}

bool CT_BarChart::has_varyColors() const
{
    return m_has_varyColors;
}

CT_Boolean* CT_BarChart::mutable_varyColors()
{
    m_has_varyColors = true;
    if (!m_varyColors)
    {
        m_varyColors = new CT_Boolean();
    }
    return m_varyColors;
}

const CT_Boolean& CT_BarChart::get_varyColors() const
{
    if (m_varyColors)
    {
        return *m_varyColors;
    }
    return CT_Boolean::default_instance();
}

CT_BarSer* CT_BarChart::add_ser()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_BarSer* pNewChild = pChildGroup->mutable_ser();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

bool CT_BarChart::has_dLbls() const
{
    return m_has_dLbls;
}

CT_DLbls* CT_BarChart::mutable_dLbls()
{
    m_has_dLbls = true;
    if (!m_dLbls)
    {
        m_dLbls = new CT_DLbls();
    }
    return m_dLbls;
}

const CT_DLbls& CT_BarChart::get_dLbls() const
{
    if (m_dLbls)
    {
        return *m_dLbls;
    }
    return CT_DLbls::default_instance();
}

bool CT_BarChart::has_gapWidth() const
{
    return m_has_gapWidth;
}

CT_GapAmount* CT_BarChart::mutable_gapWidth()
{
    m_has_gapWidth = true;
    if (!m_gapWidth)
    {
        m_gapWidth = new CT_GapAmount();
    }
    return m_gapWidth;
}

const CT_GapAmount& CT_BarChart::get_gapWidth() const
{
    if (m_gapWidth)
    {
        return *m_gapWidth;
    }
    return CT_GapAmount::default_instance();
}

bool CT_BarChart::has_overlap() const
{
    return m_has_overlap;
}

CT_Overlap* CT_BarChart::mutable_overlap()
{
    m_has_overlap = true;
    if (!m_overlap)
    {
        m_overlap = new CT_Overlap();
    }
    return m_overlap;
}

const CT_Overlap& CT_BarChart::get_overlap() const
{
    if (m_overlap)
    {
        return *m_overlap;
    }
    return CT_Overlap::default_instance();
}

CT_ChartLines* CT_BarChart::add_serLines()
{
    ChildGroup_2 *pChildGroup = new ChildGroup_2();
    CT_ChartLines* pNewChild = pChildGroup->mutable_serLines();
    m_childGroupList_2.push_back(pChildGroup);
    return pNewChild;
}

CT_UnsignedInt* CT_BarChart::add_axId()
{
    ChildGroup_3 *pChildGroup = new ChildGroup_3();
    CT_UnsignedInt* pNewChild = pChildGroup->mutable_axId();
    m_childGroupList_3.push_back(pChildGroup);
    return pNewChild;
}

bool CT_BarChart::has_extLst() const
{
    return m_has_extLst;
}

CT_ExtensionList* CT_BarChart::mutable_extLst()
{
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new CT_ExtensionList();
    }
    return m_extLst;
}

const CT_ExtensionList& CT_BarChart::get_extLst() const
{
    if (m_extLst)
    {
        return *m_extLst;
    }
    return CT_ExtensionList::default_instance();
}

void CT_BarChart::clear()
{
    m_has_barDir = false;

    if (m_barDir)
    {
        delete m_barDir;
        m_barDir = NULL;
    }


    m_has_grouping = false;

    if (m_grouping)
    {
        delete m_grouping;
        m_grouping = NULL;
    }


    m_has_varyColors = false;

    if (m_varyColors)
    {
        delete m_varyColors;
        m_varyColors = NULL;
    }


    {
        vector<ChildGroup_1*>::iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_1.clear();
    }

    m_has_dLbls = false;

    if (m_dLbls)
    {
        delete m_dLbls;
        m_dLbls = NULL;
    }


    m_has_gapWidth = false;

    if (m_gapWidth)
    {
        delete m_gapWidth;
        m_gapWidth = NULL;
    }


    m_has_overlap = false;

    if (m_overlap)
    {
        delete m_overlap;
        m_overlap = NULL;
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

    m_has_extLst = false;

    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }

}

void CT_BarChart::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";

    assert(m_has_barDir);


    if (m_has_barDir)
    {
        m_barDir->toXmlElem("c:barDir", "", _outStream);
    }


    if (m_has_grouping)
    {
        m_grouping->toXmlElem("c:grouping", "", _outStream);
    }


    if (m_has_varyColors)
    {
        m_varyColors->toXmlElem("c:varyColors", "", _outStream);
    }

    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_ser())
            {
                (*iter)->get_ser().toXmlElem("c:ser", "", _outStream);
            }


        }
    }


    if (m_has_dLbls)
    {
        m_dLbls->toXmlElem("c:dLbls", "", _outStream);
    }


    if (m_has_gapWidth)
    {
        m_gapWidth->toXmlElem("c:gapWidth", "", _outStream);
    }


    if (m_has_overlap)
    {
        m_overlap->toXmlElem("c:overlap", "", _outStream);
    }

    {
        vector<ChildGroup_2*>::const_iterator iter;
        for (iter = m_childGroupList_2.begin(); iter != m_childGroupList_2.end(); ++iter)
        {
            if ((*iter)->has_serLines())
            {
                (*iter)->get_serLines().toXmlElem("c:serLines", "", _outStream);
            }


        }
    }

    {
        int childSize = count_if(m_childGroupList_3.begin(), m_childGroupList_3.end(), mem_fun(&ChildGroup_3::has_axId));
        assert(2 <= childSize && childSize <= 2);
    }

    {
        vector<ChildGroup_3*>::const_iterator iter;
        for (iter = m_childGroupList_3.begin(); iter != m_childGroupList_3.end(); ++iter)
        {
            if ((*iter)->has_axId())
            {
                (*iter)->get_axId().toXmlElem("c:axId", "", _outStream);
            }


        }
    }


    if (m_has_extLst)
    {
        m_extLst->toXmlElem("c:extLst", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_BarChart& CT_BarChart::default_instance()
{
    if (!CT_BarChart::default_instance_)
    {
        CT_BarChart::default_instance_ = new CT_BarChart();
    }
    return *CT_BarChart::default_instance_;
}


// CT_BarChart::ChildGroup_1
CT_BarChart::ChildGroup_1::ChildGroup_1()
    :m_has_ser(false),
     m_ser(NULL)
{
}
bool CT_BarChart::ChildGroup_1::has_ser() const
{
    return m_has_ser;
}

CT_BarSer* CT_BarChart::ChildGroup_1::mutable_ser()
{

    m_has_ser = true;
    if (!m_ser)
    {
        m_ser = new CT_BarSer();
    }
    return m_ser;
}

const CT_BarSer& CT_BarChart::ChildGroup_1::get_ser() const
{
    if (m_ser)
    {
        return *m_ser;
    }
    return CT_BarSer::default_instance();
}


// CT_BarChart::ChildGroup_2
CT_BarChart::ChildGroup_2::ChildGroup_2()
    :m_has_serLines(false),
     m_serLines(NULL)
{
}
bool CT_BarChart::ChildGroup_2::has_serLines() const
{
    return m_has_serLines;
}

CT_ChartLines* CT_BarChart::ChildGroup_2::mutable_serLines()
{

    m_has_serLines = true;
    if (!m_serLines)
    {
        m_serLines = new CT_ChartLines();
    }
    return m_serLines;
}

const CT_ChartLines& CT_BarChart::ChildGroup_2::get_serLines() const
{
    if (m_serLines)
    {
        return *m_serLines;
    }
    return CT_ChartLines::default_instance();
}


// CT_BarChart::ChildGroup_3
CT_BarChart::ChildGroup_3::ChildGroup_3()
    :m_has_axId(false),
     m_axId(NULL)
{
}
bool CT_BarChart::ChildGroup_3::has_axId() const
{
    return m_has_axId;
}

CT_UnsignedInt* CT_BarChart::ChildGroup_3::mutable_axId()
{

    m_has_axId = true;
    if (!m_axId)
    {
        m_axId = new CT_UnsignedInt();
    }
    return m_axId;
}

const CT_UnsignedInt& CT_BarChart::ChildGroup_3::get_axId() const
{
    if (m_axId)
    {
        return *m_axId;
    }
    return CT_UnsignedInt::default_instance();
}

CT_BarChart* CT_BarChart::default_instance_ = NULL;

// CT_Bar3DChart
CT_Bar3DChart::CT_Bar3DChart()
    :m_has_barDir(false),
     m_barDir(NULL),
     m_has_grouping(false),
     m_grouping(NULL),
     m_has_varyColors(false),
     m_varyColors(NULL),
     m_has_dLbls(false),
     m_dLbls(NULL),
     m_has_gapWidth(false),
     m_gapWidth(NULL),
     m_has_gapDepth(false),
     m_gapDepth(NULL),
     m_has_shape(false),
     m_shape(NULL),
     m_has_extLst(false),
     m_extLst(NULL)
{
}
CT_Bar3DChart::~CT_Bar3DChart()
{
    clear();
}
bool CT_Bar3DChart::has_barDir() const
{
    return m_has_barDir;
}

CT_BarDir* CT_Bar3DChart::mutable_barDir()
{
    m_has_barDir = true;
    if (!m_barDir)
    {
        m_barDir = new CT_BarDir();
    }
    return m_barDir;
}

const CT_BarDir& CT_Bar3DChart::get_barDir() const
{
    if (m_barDir)
    {
        return *m_barDir;
    }
    return CT_BarDir::default_instance();
}

bool CT_Bar3DChart::has_grouping() const
{
    return m_has_grouping;
}

CT_BarGrouping* CT_Bar3DChart::mutable_grouping()
{
    m_has_grouping = true;
    if (!m_grouping)
    {
        m_grouping = new CT_BarGrouping();
    }
    return m_grouping;
}

const CT_BarGrouping& CT_Bar3DChart::get_grouping() const
{
    if (m_grouping)
    {
        return *m_grouping;
    }
    return CT_BarGrouping::default_instance();
}

bool CT_Bar3DChart::has_varyColors() const
{
    return m_has_varyColors;
}

CT_Boolean* CT_Bar3DChart::mutable_varyColors()
{
    m_has_varyColors = true;
    if (!m_varyColors)
    {
        m_varyColors = new CT_Boolean();
    }
    return m_varyColors;
}

const CT_Boolean& CT_Bar3DChart::get_varyColors() const
{
    if (m_varyColors)
    {
        return *m_varyColors;
    }
    return CT_Boolean::default_instance();
}

CT_BarSer* CT_Bar3DChart::add_ser()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_BarSer* pNewChild = pChildGroup->mutable_ser();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

bool CT_Bar3DChart::has_dLbls() const
{
    return m_has_dLbls;
}

CT_DLbls* CT_Bar3DChart::mutable_dLbls()
{
    m_has_dLbls = true;
    if (!m_dLbls)
    {
        m_dLbls = new CT_DLbls();
    }
    return m_dLbls;
}

const CT_DLbls& CT_Bar3DChart::get_dLbls() const
{
    if (m_dLbls)
    {
        return *m_dLbls;
    }
    return CT_DLbls::default_instance();
}

bool CT_Bar3DChart::has_gapWidth() const
{
    return m_has_gapWidth;
}

CT_GapAmount* CT_Bar3DChart::mutable_gapWidth()
{
    m_has_gapWidth = true;
    if (!m_gapWidth)
    {
        m_gapWidth = new CT_GapAmount();
    }
    return m_gapWidth;
}

const CT_GapAmount& CT_Bar3DChart::get_gapWidth() const
{
    if (m_gapWidth)
    {
        return *m_gapWidth;
    }
    return CT_GapAmount::default_instance();
}

bool CT_Bar3DChart::has_gapDepth() const
{
    return m_has_gapDepth;
}

CT_GapAmount* CT_Bar3DChart::mutable_gapDepth()
{
    m_has_gapDepth = true;
    if (!m_gapDepth)
    {
        m_gapDepth = new CT_GapAmount();
    }
    return m_gapDepth;
}

const CT_GapAmount& CT_Bar3DChart::get_gapDepth() const
{
    if (m_gapDepth)
    {
        return *m_gapDepth;
    }
    return CT_GapAmount::default_instance();
}

bool CT_Bar3DChart::has_shape() const
{
    return m_has_shape;
}

CT_Shape* CT_Bar3DChart::mutable_shape()
{
    m_has_shape = true;
    if (!m_shape)
    {
        m_shape = new CT_Shape();
    }
    return m_shape;
}

const CT_Shape& CT_Bar3DChart::get_shape() const
{
    if (m_shape)
    {
        return *m_shape;
    }
    return CT_Shape::default_instance();
}

CT_UnsignedInt* CT_Bar3DChart::add_axId()
{
    ChildGroup_2 *pChildGroup = new ChildGroup_2();
    CT_UnsignedInt* pNewChild = pChildGroup->mutable_axId();
    m_childGroupList_2.push_back(pChildGroup);
    return pNewChild;
}

bool CT_Bar3DChart::has_extLst() const
{
    return m_has_extLst;
}

CT_ExtensionList* CT_Bar3DChart::mutable_extLst()
{
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new CT_ExtensionList();
    }
    return m_extLst;
}

const CT_ExtensionList& CT_Bar3DChart::get_extLst() const
{
    if (m_extLst)
    {
        return *m_extLst;
    }
    return CT_ExtensionList::default_instance();
}

void CT_Bar3DChart::clear()
{
    m_has_barDir = false;

    if (m_barDir)
    {
        delete m_barDir;
        m_barDir = NULL;
    }


    m_has_grouping = false;

    if (m_grouping)
    {
        delete m_grouping;
        m_grouping = NULL;
    }


    m_has_varyColors = false;

    if (m_varyColors)
    {
        delete m_varyColors;
        m_varyColors = NULL;
    }


    {
        vector<ChildGroup_1*>::iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_1.clear();
    }

    m_has_dLbls = false;

    if (m_dLbls)
    {
        delete m_dLbls;
        m_dLbls = NULL;
    }


    m_has_gapWidth = false;

    if (m_gapWidth)
    {
        delete m_gapWidth;
        m_gapWidth = NULL;
    }


    m_has_gapDepth = false;

    if (m_gapDepth)
    {
        delete m_gapDepth;
        m_gapDepth = NULL;
    }


    m_has_shape = false;

    if (m_shape)
    {
        delete m_shape;
        m_shape = NULL;
    }


    {
        vector<ChildGroup_2*>::iterator iter;
        for (iter = m_childGroupList_2.begin(); iter != m_childGroupList_2.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_2.clear();
    }

    m_has_extLst = false;

    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }

}

void CT_Bar3DChart::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";

    assert(m_has_barDir);


    if (m_has_barDir)
    {
        m_barDir->toXmlElem("c:barDir", "", _outStream);
    }


    if (m_has_grouping)
    {
        m_grouping->toXmlElem("c:grouping", "", _outStream);
    }


    if (m_has_varyColors)
    {
        m_varyColors->toXmlElem("c:varyColors", "", _outStream);
    }

    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_ser())
            {
                (*iter)->get_ser().toXmlElem("c:ser", "", _outStream);
            }


        }
    }


    if (m_has_dLbls)
    {
        m_dLbls->toXmlElem("c:dLbls", "", _outStream);
    }


    if (m_has_gapWidth)
    {
        m_gapWidth->toXmlElem("c:gapWidth", "", _outStream);
    }


    if (m_has_gapDepth)
    {
        m_gapDepth->toXmlElem("c:gapDepth", "", _outStream);
    }


    if (m_has_shape)
    {
        m_shape->toXmlElem("c:shape", "", _outStream);
    }

    {
        int childSize = count_if(m_childGroupList_2.begin(), m_childGroupList_2.end(), mem_fun(&ChildGroup_2::has_axId));
        assert(2 <= childSize && childSize <= 3);
    }

    {
        vector<ChildGroup_2*>::const_iterator iter;
        for (iter = m_childGroupList_2.begin(); iter != m_childGroupList_2.end(); ++iter)
        {
            if ((*iter)->has_axId())
            {
                (*iter)->get_axId().toXmlElem("c:axId", "", _outStream);
            }


        }
    }


    if (m_has_extLst)
    {
        m_extLst->toXmlElem("c:extLst", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_Bar3DChart& CT_Bar3DChart::default_instance()
{
    if (!CT_Bar3DChart::default_instance_)
    {
        CT_Bar3DChart::default_instance_ = new CT_Bar3DChart();
    }
    return *CT_Bar3DChart::default_instance_;
}


// CT_Bar3DChart::ChildGroup_1
CT_Bar3DChart::ChildGroup_1::ChildGroup_1()
    :m_has_ser(false),
     m_ser(NULL)
{
}
bool CT_Bar3DChart::ChildGroup_1::has_ser() const
{
    return m_has_ser;
}

CT_BarSer* CT_Bar3DChart::ChildGroup_1::mutable_ser()
{

    m_has_ser = true;
    if (!m_ser)
    {
        m_ser = new CT_BarSer();
    }
    return m_ser;
}

const CT_BarSer& CT_Bar3DChart::ChildGroup_1::get_ser() const
{
    if (m_ser)
    {
        return *m_ser;
    }
    return CT_BarSer::default_instance();
}


// CT_Bar3DChart::ChildGroup_2
CT_Bar3DChart::ChildGroup_2::ChildGroup_2()
    :m_has_axId(false),
     m_axId(NULL)
{
}
bool CT_Bar3DChart::ChildGroup_2::has_axId() const
{
    return m_has_axId;
}

CT_UnsignedInt* CT_Bar3DChart::ChildGroup_2::mutable_axId()
{

    m_has_axId = true;
    if (!m_axId)
    {
        m_axId = new CT_UnsignedInt();
    }
    return m_axId;
}

const CT_UnsignedInt& CT_Bar3DChart::ChildGroup_2::get_axId() const
{
    if (m_axId)
    {
        return *m_axId;
    }
    return CT_UnsignedInt::default_instance();
}

CT_Bar3DChart* CT_Bar3DChart::default_instance_ = NULL;

// CT_AreaChart
CT_AreaChart::CT_AreaChart()
    :m_has_grouping(false),
     m_grouping(NULL),
     m_has_varyColors(false),
     m_varyColors(NULL),
     m_has_dLbls(false),
     m_dLbls(NULL),
     m_has_dropLines(false),
     m_dropLines(NULL),
     m_has_extLst(false),
     m_extLst(NULL)
{
}
CT_AreaChart::~CT_AreaChart()
{
    clear();
}
bool CT_AreaChart::has_grouping() const
{
    return m_has_grouping;
}

CT_Grouping* CT_AreaChart::mutable_grouping()
{
    m_has_grouping = true;
    if (!m_grouping)
    {
        m_grouping = new CT_Grouping();
    }
    return m_grouping;
}

const CT_Grouping& CT_AreaChart::get_grouping() const
{
    if (m_grouping)
    {
        return *m_grouping;
    }
    return CT_Grouping::default_instance();
}

bool CT_AreaChart::has_varyColors() const
{
    return m_has_varyColors;
}

CT_Boolean* CT_AreaChart::mutable_varyColors()
{
    m_has_varyColors = true;
    if (!m_varyColors)
    {
        m_varyColors = new CT_Boolean();
    }
    return m_varyColors;
}

const CT_Boolean& CT_AreaChart::get_varyColors() const
{
    if (m_varyColors)
    {
        return *m_varyColors;
    }
    return CT_Boolean::default_instance();
}

CT_AreaSer* CT_AreaChart::add_ser()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_AreaSer* pNewChild = pChildGroup->mutable_ser();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

bool CT_AreaChart::has_dLbls() const
{
    return m_has_dLbls;
}

CT_DLbls* CT_AreaChart::mutable_dLbls()
{
    m_has_dLbls = true;
    if (!m_dLbls)
    {
        m_dLbls = new CT_DLbls();
    }
    return m_dLbls;
}

const CT_DLbls& CT_AreaChart::get_dLbls() const
{
    if (m_dLbls)
    {
        return *m_dLbls;
    }
    return CT_DLbls::default_instance();
}

bool CT_AreaChart::has_dropLines() const
{
    return m_has_dropLines;
}

CT_ChartLines* CT_AreaChart::mutable_dropLines()
{
    m_has_dropLines = true;
    if (!m_dropLines)
    {
        m_dropLines = new CT_ChartLines();
    }
    return m_dropLines;
}

const CT_ChartLines& CT_AreaChart::get_dropLines() const
{
    if (m_dropLines)
    {
        return *m_dropLines;
    }
    return CT_ChartLines::default_instance();
}

CT_UnsignedInt* CT_AreaChart::add_axId()
{
    ChildGroup_2 *pChildGroup = new ChildGroup_2();
    CT_UnsignedInt* pNewChild = pChildGroup->mutable_axId();
    m_childGroupList_2.push_back(pChildGroup);
    return pNewChild;
}

bool CT_AreaChart::has_extLst() const
{
    return m_has_extLst;
}

CT_ExtensionList* CT_AreaChart::mutable_extLst()
{
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new CT_ExtensionList();
    }
    return m_extLst;
}

const CT_ExtensionList& CT_AreaChart::get_extLst() const
{
    if (m_extLst)
    {
        return *m_extLst;
    }
    return CT_ExtensionList::default_instance();
}

void CT_AreaChart::clear()
{
    m_has_grouping = false;

    if (m_grouping)
    {
        delete m_grouping;
        m_grouping = NULL;
    }


    m_has_varyColors = false;

    if (m_varyColors)
    {
        delete m_varyColors;
        m_varyColors = NULL;
    }


    {
        vector<ChildGroup_1*>::iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_1.clear();
    }

    m_has_dLbls = false;

    if (m_dLbls)
    {
        delete m_dLbls;
        m_dLbls = NULL;
    }


    m_has_dropLines = false;

    if (m_dropLines)
    {
        delete m_dropLines;
        m_dropLines = NULL;
    }


    {
        vector<ChildGroup_2*>::iterator iter;
        for (iter = m_childGroupList_2.begin(); iter != m_childGroupList_2.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_2.clear();
    }

    m_has_extLst = false;

    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }

}

void CT_AreaChart::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";


    if (m_has_grouping)
    {
        m_grouping->toXmlElem("c:grouping", "", _outStream);
    }


    if (m_has_varyColors)
    {
        m_varyColors->toXmlElem("c:varyColors", "", _outStream);
    }

    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_ser())
            {
                (*iter)->get_ser().toXmlElem("c:ser", "", _outStream);
            }


        }
    }


    if (m_has_dLbls)
    {
        m_dLbls->toXmlElem("c:dLbls", "", _outStream);
    }


    if (m_has_dropLines)
    {
        m_dropLines->toXmlElem("c:dropLines", "", _outStream);
    }

    {
        int childSize = count_if(m_childGroupList_2.begin(), m_childGroupList_2.end(), mem_fun(&ChildGroup_2::has_axId));
        assert(2 <= childSize && childSize <= 2);
    }

    {
        vector<ChildGroup_2*>::const_iterator iter;
        for (iter = m_childGroupList_2.begin(); iter != m_childGroupList_2.end(); ++iter)
        {
            if ((*iter)->has_axId())
            {
                (*iter)->get_axId().toXmlElem("c:axId", "", _outStream);
            }


        }
    }


    if (m_has_extLst)
    {
        m_extLst->toXmlElem("c:extLst", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_AreaChart& CT_AreaChart::default_instance()
{
    if (!CT_AreaChart::default_instance_)
    {
        CT_AreaChart::default_instance_ = new CT_AreaChart();
    }
    return *CT_AreaChart::default_instance_;
}


// CT_AreaChart::ChildGroup_1
CT_AreaChart::ChildGroup_1::ChildGroup_1()
    :m_has_ser(false),
     m_ser(NULL)
{
}
bool CT_AreaChart::ChildGroup_1::has_ser() const
{
    return m_has_ser;
}

CT_AreaSer* CT_AreaChart::ChildGroup_1::mutable_ser()
{

    m_has_ser = true;
    if (!m_ser)
    {
        m_ser = new CT_AreaSer();
    }
    return m_ser;
}

const CT_AreaSer& CT_AreaChart::ChildGroup_1::get_ser() const
{
    if (m_ser)
    {
        return *m_ser;
    }
    return CT_AreaSer::default_instance();
}


// CT_AreaChart::ChildGroup_2
CT_AreaChart::ChildGroup_2::ChildGroup_2()
    :m_has_axId(false),
     m_axId(NULL)
{
}
bool CT_AreaChart::ChildGroup_2::has_axId() const
{
    return m_has_axId;
}

CT_UnsignedInt* CT_AreaChart::ChildGroup_2::mutable_axId()
{

    m_has_axId = true;
    if (!m_axId)
    {
        m_axId = new CT_UnsignedInt();
    }
    return m_axId;
}

const CT_UnsignedInt& CT_AreaChart::ChildGroup_2::get_axId() const
{
    if (m_axId)
    {
        return *m_axId;
    }
    return CT_UnsignedInt::default_instance();
}

CT_AreaChart* CT_AreaChart::default_instance_ = NULL;

// CT_Area3DChart
CT_Area3DChart::CT_Area3DChart()
    :m_has_grouping(false),
     m_grouping(NULL),
     m_has_varyColors(false),
     m_varyColors(NULL),
     m_has_dLbls(false),
     m_dLbls(NULL),
     m_has_dropLines(false),
     m_dropLines(NULL),
     m_has_gapDepth(false),
     m_gapDepth(NULL),
     m_has_extLst(false),
     m_extLst(NULL)
{
}
CT_Area3DChart::~CT_Area3DChart()
{
    clear();
}
bool CT_Area3DChart::has_grouping() const
{
    return m_has_grouping;
}

CT_Grouping* CT_Area3DChart::mutable_grouping()
{
    m_has_grouping = true;
    if (!m_grouping)
    {
        m_grouping = new CT_Grouping();
    }
    return m_grouping;
}

const CT_Grouping& CT_Area3DChart::get_grouping() const
{
    if (m_grouping)
    {
        return *m_grouping;
    }
    return CT_Grouping::default_instance();
}

bool CT_Area3DChart::has_varyColors() const
{
    return m_has_varyColors;
}

CT_Boolean* CT_Area3DChart::mutable_varyColors()
{
    m_has_varyColors = true;
    if (!m_varyColors)
    {
        m_varyColors = new CT_Boolean();
    }
    return m_varyColors;
}

const CT_Boolean& CT_Area3DChart::get_varyColors() const
{
    if (m_varyColors)
    {
        return *m_varyColors;
    }
    return CT_Boolean::default_instance();
}

CT_AreaSer* CT_Area3DChart::add_ser()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_AreaSer* pNewChild = pChildGroup->mutable_ser();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

bool CT_Area3DChart::has_dLbls() const
{
    return m_has_dLbls;
}

CT_DLbls* CT_Area3DChart::mutable_dLbls()
{
    m_has_dLbls = true;
    if (!m_dLbls)
    {
        m_dLbls = new CT_DLbls();
    }
    return m_dLbls;
}

const CT_DLbls& CT_Area3DChart::get_dLbls() const
{
    if (m_dLbls)
    {
        return *m_dLbls;
    }
    return CT_DLbls::default_instance();
}

bool CT_Area3DChart::has_dropLines() const
{
    return m_has_dropLines;
}

CT_ChartLines* CT_Area3DChart::mutable_dropLines()
{
    m_has_dropLines = true;
    if (!m_dropLines)
    {
        m_dropLines = new CT_ChartLines();
    }
    return m_dropLines;
}

const CT_ChartLines& CT_Area3DChart::get_dropLines() const
{
    if (m_dropLines)
    {
        return *m_dropLines;
    }
    return CT_ChartLines::default_instance();
}

bool CT_Area3DChart::has_gapDepth() const
{
    return m_has_gapDepth;
}

CT_GapAmount* CT_Area3DChart::mutable_gapDepth()
{
    m_has_gapDepth = true;
    if (!m_gapDepth)
    {
        m_gapDepth = new CT_GapAmount();
    }
    return m_gapDepth;
}

const CT_GapAmount& CT_Area3DChart::get_gapDepth() const
{
    if (m_gapDepth)
    {
        return *m_gapDepth;
    }
    return CT_GapAmount::default_instance();
}

CT_UnsignedInt* CT_Area3DChart::add_axId()
{
    ChildGroup_2 *pChildGroup = new ChildGroup_2();
    CT_UnsignedInt* pNewChild = pChildGroup->mutable_axId();
    m_childGroupList_2.push_back(pChildGroup);
    return pNewChild;
}

bool CT_Area3DChart::has_extLst() const
{
    return m_has_extLst;
}

CT_ExtensionList* CT_Area3DChart::mutable_extLst()
{
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new CT_ExtensionList();
    }
    return m_extLst;
}

const CT_ExtensionList& CT_Area3DChart::get_extLst() const
{
    if (m_extLst)
    {
        return *m_extLst;
    }
    return CT_ExtensionList::default_instance();
}

void CT_Area3DChart::clear()
{
    m_has_grouping = false;

    if (m_grouping)
    {
        delete m_grouping;
        m_grouping = NULL;
    }


    m_has_varyColors = false;

    if (m_varyColors)
    {
        delete m_varyColors;
        m_varyColors = NULL;
    }


    {
        vector<ChildGroup_1*>::iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_1.clear();
    }

    m_has_dLbls = false;

    if (m_dLbls)
    {
        delete m_dLbls;
        m_dLbls = NULL;
    }


    m_has_dropLines = false;

    if (m_dropLines)
    {
        delete m_dropLines;
        m_dropLines = NULL;
    }


    m_has_gapDepth = false;

    if (m_gapDepth)
    {
        delete m_gapDepth;
        m_gapDepth = NULL;
    }


    {
        vector<ChildGroup_2*>::iterator iter;
        for (iter = m_childGroupList_2.begin(); iter != m_childGroupList_2.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_2.clear();
    }

    m_has_extLst = false;

    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }

}

void CT_Area3DChart::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";


    if (m_has_grouping)
    {
        m_grouping->toXmlElem("c:grouping", "", _outStream);
    }


    if (m_has_varyColors)
    {
        m_varyColors->toXmlElem("c:varyColors", "", _outStream);
    }

    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_ser())
            {
                (*iter)->get_ser().toXmlElem("c:ser", "", _outStream);
            }


        }
    }


    if (m_has_dLbls)
    {
        m_dLbls->toXmlElem("c:dLbls", "", _outStream);
    }


    if (m_has_dropLines)
    {
        m_dropLines->toXmlElem("c:dropLines", "", _outStream);
    }


    if (m_has_gapDepth)
    {
        m_gapDepth->toXmlElem("c:gapDepth", "", _outStream);
    }

    {
        int childSize = count_if(m_childGroupList_2.begin(), m_childGroupList_2.end(), mem_fun(&ChildGroup_2::has_axId));
        assert(2 <= childSize && childSize <= 3);
    }

    {
        vector<ChildGroup_2*>::const_iterator iter;
        for (iter = m_childGroupList_2.begin(); iter != m_childGroupList_2.end(); ++iter)
        {
            if ((*iter)->has_axId())
            {
                (*iter)->get_axId().toXmlElem("c:axId", "", _outStream);
            }


        }
    }


    if (m_has_extLst)
    {
        m_extLst->toXmlElem("c:extLst", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_Area3DChart& CT_Area3DChart::default_instance()
{
    if (!CT_Area3DChart::default_instance_)
    {
        CT_Area3DChart::default_instance_ = new CT_Area3DChart();
    }
    return *CT_Area3DChart::default_instance_;
}


// CT_Area3DChart::ChildGroup_1
CT_Area3DChart::ChildGroup_1::ChildGroup_1()
    :m_has_ser(false),
     m_ser(NULL)
{
}
bool CT_Area3DChart::ChildGroup_1::has_ser() const
{
    return m_has_ser;
}

CT_AreaSer* CT_Area3DChart::ChildGroup_1::mutable_ser()
{

    m_has_ser = true;
    if (!m_ser)
    {
        m_ser = new CT_AreaSer();
    }
    return m_ser;
}

const CT_AreaSer& CT_Area3DChart::ChildGroup_1::get_ser() const
{
    if (m_ser)
    {
        return *m_ser;
    }
    return CT_AreaSer::default_instance();
}


// CT_Area3DChart::ChildGroup_2
CT_Area3DChart::ChildGroup_2::ChildGroup_2()
    :m_has_axId(false),
     m_axId(NULL)
{
}
bool CT_Area3DChart::ChildGroup_2::has_axId() const
{
    return m_has_axId;
}

CT_UnsignedInt* CT_Area3DChart::ChildGroup_2::mutable_axId()
{

    m_has_axId = true;
    if (!m_axId)
    {
        m_axId = new CT_UnsignedInt();
    }
    return m_axId;
}

const CT_UnsignedInt& CT_Area3DChart::ChildGroup_2::get_axId() const
{
    if (m_axId)
    {
        return *m_axId;
    }
    return CT_UnsignedInt::default_instance();
}

CT_Area3DChart* CT_Area3DChart::default_instance_ = NULL;

// CT_PieChart
CT_PieChart::CT_PieChart()
    :m_has_varyColors(false),
     m_varyColors(NULL),
     m_has_dLbls(false),
     m_dLbls(NULL),
     m_has_firstSliceAng(false),
     m_firstSliceAng(NULL),
     m_has_extLst(false),
     m_extLst(NULL)
{
}
CT_PieChart::~CT_PieChart()
{
    clear();
}
bool CT_PieChart::has_varyColors() const
{
    return m_has_varyColors;
}

CT_Boolean* CT_PieChart::mutable_varyColors()
{
    m_has_varyColors = true;
    if (!m_varyColors)
    {
        m_varyColors = new CT_Boolean();
    }
    return m_varyColors;
}

const CT_Boolean& CT_PieChart::get_varyColors() const
{
    if (m_varyColors)
    {
        return *m_varyColors;
    }
    return CT_Boolean::default_instance();
}

CT_PieSer* CT_PieChart::add_ser()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_PieSer* pNewChild = pChildGroup->mutable_ser();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

bool CT_PieChart::has_dLbls() const
{
    return m_has_dLbls;
}

CT_DLbls* CT_PieChart::mutable_dLbls()
{
    m_has_dLbls = true;
    if (!m_dLbls)
    {
        m_dLbls = new CT_DLbls();
    }
    return m_dLbls;
}

const CT_DLbls& CT_PieChart::get_dLbls() const
{
    if (m_dLbls)
    {
        return *m_dLbls;
    }
    return CT_DLbls::default_instance();
}

bool CT_PieChart::has_firstSliceAng() const
{
    return m_has_firstSliceAng;
}

CT_FirstSliceAng* CT_PieChart::mutable_firstSliceAng()
{
    m_has_firstSliceAng = true;
    if (!m_firstSliceAng)
    {
        m_firstSliceAng = new CT_FirstSliceAng();
    }
    return m_firstSliceAng;
}

const CT_FirstSliceAng& CT_PieChart::get_firstSliceAng() const
{
    if (m_firstSliceAng)
    {
        return *m_firstSliceAng;
    }
    return CT_FirstSliceAng::default_instance();
}

bool CT_PieChart::has_extLst() const
{
    return m_has_extLst;
}

CT_ExtensionList* CT_PieChart::mutable_extLst()
{
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new CT_ExtensionList();
    }
    return m_extLst;
}

const CT_ExtensionList& CT_PieChart::get_extLst() const
{
    if (m_extLst)
    {
        return *m_extLst;
    }
    return CT_ExtensionList::default_instance();
}

void CT_PieChart::clear()
{
    m_has_varyColors = false;

    if (m_varyColors)
    {
        delete m_varyColors;
        m_varyColors = NULL;
    }


    {
        vector<ChildGroup_1*>::iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_1.clear();
    }

    m_has_dLbls = false;

    if (m_dLbls)
    {
        delete m_dLbls;
        m_dLbls = NULL;
    }


    m_has_firstSliceAng = false;

    if (m_firstSliceAng)
    {
        delete m_firstSliceAng;
        m_firstSliceAng = NULL;
    }


    m_has_extLst = false;

    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }

}

void CT_PieChart::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";


    if (m_has_varyColors)
    {
        m_varyColors->toXmlElem("c:varyColors", "", _outStream);
    }

    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_ser())
            {
                (*iter)->get_ser().toXmlElem("c:ser", "", _outStream);
            }


        }
    }


    if (m_has_dLbls)
    {
        m_dLbls->toXmlElem("c:dLbls", "", _outStream);
    }


    if (m_has_firstSliceAng)
    {
        m_firstSliceAng->toXmlElem("c:firstSliceAng", "", _outStream);
    }


    if (m_has_extLst)
    {
        m_extLst->toXmlElem("c:extLst", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_PieChart& CT_PieChart::default_instance()
{
    if (!CT_PieChart::default_instance_)
    {
        CT_PieChart::default_instance_ = new CT_PieChart();
    }
    return *CT_PieChart::default_instance_;
}


// CT_PieChart::ChildGroup_1
CT_PieChart::ChildGroup_1::ChildGroup_1()
    :m_has_ser(false),
     m_ser(NULL)
{
}
bool CT_PieChart::ChildGroup_1::has_ser() const
{
    return m_has_ser;
}

CT_PieSer* CT_PieChart::ChildGroup_1::mutable_ser()
{

    m_has_ser = true;
    if (!m_ser)
    {
        m_ser = new CT_PieSer();
    }
    return m_ser;
}

const CT_PieSer& CT_PieChart::ChildGroup_1::get_ser() const
{
    if (m_ser)
    {
        return *m_ser;
    }
    return CT_PieSer::default_instance();
}

CT_PieChart* CT_PieChart::default_instance_ = NULL;

// CT_Pie3DChart
CT_Pie3DChart::CT_Pie3DChart()
    :m_has_varyColors(false),
     m_varyColors(NULL),
     m_has_dLbls(false),
     m_dLbls(NULL),
     m_has_extLst(false),
     m_extLst(NULL)
{
}
CT_Pie3DChart::~CT_Pie3DChart()
{
    clear();
}
bool CT_Pie3DChart::has_varyColors() const
{
    return m_has_varyColors;
}

CT_Boolean* CT_Pie3DChart::mutable_varyColors()
{
    m_has_varyColors = true;
    if (!m_varyColors)
    {
        m_varyColors = new CT_Boolean();
    }
    return m_varyColors;
}

const CT_Boolean& CT_Pie3DChart::get_varyColors() const
{
    if (m_varyColors)
    {
        return *m_varyColors;
    }
    return CT_Boolean::default_instance();
}

CT_PieSer* CT_Pie3DChart::add_ser()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_PieSer* pNewChild = pChildGroup->mutable_ser();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

bool CT_Pie3DChart::has_dLbls() const
{
    return m_has_dLbls;
}

CT_DLbls* CT_Pie3DChart::mutable_dLbls()
{
    m_has_dLbls = true;
    if (!m_dLbls)
    {
        m_dLbls = new CT_DLbls();
    }
    return m_dLbls;
}

const CT_DLbls& CT_Pie3DChart::get_dLbls() const
{
    if (m_dLbls)
    {
        return *m_dLbls;
    }
    return CT_DLbls::default_instance();
}

bool CT_Pie3DChart::has_extLst() const
{
    return m_has_extLst;
}

CT_ExtensionList* CT_Pie3DChart::mutable_extLst()
{
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new CT_ExtensionList();
    }
    return m_extLst;
}

const CT_ExtensionList& CT_Pie3DChart::get_extLst() const
{
    if (m_extLst)
    {
        return *m_extLst;
    }
    return CT_ExtensionList::default_instance();
}

void CT_Pie3DChart::clear()
{
    m_has_varyColors = false;

    if (m_varyColors)
    {
        delete m_varyColors;
        m_varyColors = NULL;
    }


    {
        vector<ChildGroup_1*>::iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_1.clear();
    }

    m_has_dLbls = false;

    if (m_dLbls)
    {
        delete m_dLbls;
        m_dLbls = NULL;
    }


    m_has_extLst = false;

    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }

}

void CT_Pie3DChart::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";


    if (m_has_varyColors)
    {
        m_varyColors->toXmlElem("c:varyColors", "", _outStream);
    }

    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_ser())
            {
                (*iter)->get_ser().toXmlElem("c:ser", "", _outStream);
            }


        }
    }


    if (m_has_dLbls)
    {
        m_dLbls->toXmlElem("c:dLbls", "", _outStream);
    }


    if (m_has_extLst)
    {
        m_extLst->toXmlElem("c:extLst", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_Pie3DChart& CT_Pie3DChart::default_instance()
{
    if (!CT_Pie3DChart::default_instance_)
    {
        CT_Pie3DChart::default_instance_ = new CT_Pie3DChart();
    }
    return *CT_Pie3DChart::default_instance_;
}


// CT_Pie3DChart::ChildGroup_1
CT_Pie3DChart::ChildGroup_1::ChildGroup_1()
    :m_has_ser(false),
     m_ser(NULL)
{
}
bool CT_Pie3DChart::ChildGroup_1::has_ser() const
{
    return m_has_ser;
}

CT_PieSer* CT_Pie3DChart::ChildGroup_1::mutable_ser()
{

    m_has_ser = true;
    if (!m_ser)
    {
        m_ser = new CT_PieSer();
    }
    return m_ser;
}

const CT_PieSer& CT_Pie3DChart::ChildGroup_1::get_ser() const
{
    if (m_ser)
    {
        return *m_ser;
    }
    return CT_PieSer::default_instance();
}

CT_Pie3DChart* CT_Pie3DChart::default_instance_ = NULL;

// CT_DoughnutChart
CT_DoughnutChart::CT_DoughnutChart()
    :m_has_varyColors(false),
     m_varyColors(NULL),
     m_has_dLbls(false),
     m_dLbls(NULL),
     m_has_firstSliceAng(false),
     m_firstSliceAng(NULL),
     m_has_holeSize(false),
     m_holeSize(NULL),
     m_has_extLst(false),
     m_extLst(NULL)
{
}
CT_DoughnutChart::~CT_DoughnutChart()
{
    clear();
}
bool CT_DoughnutChart::has_varyColors() const
{
    return m_has_varyColors;
}

CT_Boolean* CT_DoughnutChart::mutable_varyColors()
{
    m_has_varyColors = true;
    if (!m_varyColors)
    {
        m_varyColors = new CT_Boolean();
    }
    return m_varyColors;
}

const CT_Boolean& CT_DoughnutChart::get_varyColors() const
{
    if (m_varyColors)
    {
        return *m_varyColors;
    }
    return CT_Boolean::default_instance();
}

CT_PieSer* CT_DoughnutChart::add_ser()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_PieSer* pNewChild = pChildGroup->mutable_ser();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

bool CT_DoughnutChart::has_dLbls() const
{
    return m_has_dLbls;
}

CT_DLbls* CT_DoughnutChart::mutable_dLbls()
{
    m_has_dLbls = true;
    if (!m_dLbls)
    {
        m_dLbls = new CT_DLbls();
    }
    return m_dLbls;
}

const CT_DLbls& CT_DoughnutChart::get_dLbls() const
{
    if (m_dLbls)
    {
        return *m_dLbls;
    }
    return CT_DLbls::default_instance();
}

bool CT_DoughnutChart::has_firstSliceAng() const
{
    return m_has_firstSliceAng;
}

CT_FirstSliceAng* CT_DoughnutChart::mutable_firstSliceAng()
{
    m_has_firstSliceAng = true;
    if (!m_firstSliceAng)
    {
        m_firstSliceAng = new CT_FirstSliceAng();
    }
    return m_firstSliceAng;
}

const CT_FirstSliceAng& CT_DoughnutChart::get_firstSliceAng() const
{
    if (m_firstSliceAng)
    {
        return *m_firstSliceAng;
    }
    return CT_FirstSliceAng::default_instance();
}

bool CT_DoughnutChart::has_holeSize() const
{
    return m_has_holeSize;
}

CT_HoleSize* CT_DoughnutChart::mutable_holeSize()
{
    m_has_holeSize = true;
    if (!m_holeSize)
    {
        m_holeSize = new CT_HoleSize();
    }
    return m_holeSize;
}

const CT_HoleSize& CT_DoughnutChart::get_holeSize() const
{
    if (m_holeSize)
    {
        return *m_holeSize;
    }
    return CT_HoleSize::default_instance();
}

bool CT_DoughnutChart::has_extLst() const
{
    return m_has_extLst;
}

CT_ExtensionList* CT_DoughnutChart::mutable_extLst()
{
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new CT_ExtensionList();
    }
    return m_extLst;
}

const CT_ExtensionList& CT_DoughnutChart::get_extLst() const
{
    if (m_extLst)
    {
        return *m_extLst;
    }
    return CT_ExtensionList::default_instance();
}

void CT_DoughnutChart::clear()
{
    m_has_varyColors = false;

    if (m_varyColors)
    {
        delete m_varyColors;
        m_varyColors = NULL;
    }


    {
        vector<ChildGroup_1*>::iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_1.clear();
    }

    m_has_dLbls = false;

    if (m_dLbls)
    {
        delete m_dLbls;
        m_dLbls = NULL;
    }


    m_has_firstSliceAng = false;

    if (m_firstSliceAng)
    {
        delete m_firstSliceAng;
        m_firstSliceAng = NULL;
    }


    m_has_holeSize = false;

    if (m_holeSize)
    {
        delete m_holeSize;
        m_holeSize = NULL;
    }


    m_has_extLst = false;

    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }

}

void CT_DoughnutChart::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";


    if (m_has_varyColors)
    {
        m_varyColors->toXmlElem("c:varyColors", "", _outStream);
    }

    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_ser())
            {
                (*iter)->get_ser().toXmlElem("c:ser", "", _outStream);
            }


        }
    }


    if (m_has_dLbls)
    {
        m_dLbls->toXmlElem("c:dLbls", "", _outStream);
    }


    if (m_has_firstSliceAng)
    {
        m_firstSliceAng->toXmlElem("c:firstSliceAng", "", _outStream);
    }


    if (m_has_holeSize)
    {
        m_holeSize->toXmlElem("c:holeSize", "", _outStream);
    }


    if (m_has_extLst)
    {
        m_extLst->toXmlElem("c:extLst", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_DoughnutChart& CT_DoughnutChart::default_instance()
{
    if (!CT_DoughnutChart::default_instance_)
    {
        CT_DoughnutChart::default_instance_ = new CT_DoughnutChart();
    }
    return *CT_DoughnutChart::default_instance_;
}


// CT_DoughnutChart::ChildGroup_1
CT_DoughnutChart::ChildGroup_1::ChildGroup_1()
    :m_has_ser(false),
     m_ser(NULL)
{
}
bool CT_DoughnutChart::ChildGroup_1::has_ser() const
{
    return m_has_ser;
}

CT_PieSer* CT_DoughnutChart::ChildGroup_1::mutable_ser()
{

    m_has_ser = true;
    if (!m_ser)
    {
        m_ser = new CT_PieSer();
    }
    return m_ser;
}

const CT_PieSer& CT_DoughnutChart::ChildGroup_1::get_ser() const
{
    if (m_ser)
    {
        return *m_ser;
    }
    return CT_PieSer::default_instance();
}

CT_DoughnutChart* CT_DoughnutChart::default_instance_ = NULL;

// CT_OfPieType
CT_OfPieType::CT_OfPieType()
    :m_has_val_attr(false),
     m_val_attr(NULL)
{
}
CT_OfPieType::~CT_OfPieType()
{
    clear();
}
void CT_OfPieType::clear()
{
    m_has_val_attr = false;

    if (m_val_attr)
    {
        delete m_val_attr;
        m_val_attr = NULL;
    }

}

void CT_OfPieType::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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

const CT_OfPieType& CT_OfPieType::default_instance()
{
    if (!CT_OfPieType::default_instance_)
    {
        CT_OfPieType::default_instance_ = new CT_OfPieType();
    }
    return *CT_OfPieType::default_instance_;
}

bool CT_OfPieType::has_val_attr() const
{
    return m_has_val_attr;
}

void CT_OfPieType::set_val_attr(const ST_OfPieType& _val_attr)
{
    m_has_val_attr = true;
    m_val_attr = new ST_OfPieType(_val_attr);
}

const ST_OfPieType& CT_OfPieType::get_val_attr() const
{
    if (m_val_attr)
    {
        return *m_val_attr;
    }
    return ST_OfPieType::default_instance();
}

CT_OfPieType* CT_OfPieType::default_instance_ = NULL;

// CT_OfPieChart
CT_OfPieChart::CT_OfPieChart()
    :m_has_ofPieType(false),
     m_ofPieType(NULL),
     m_has_varyColors(false),
     m_varyColors(NULL),
     m_has_dLbls(false),
     m_dLbls(NULL),
     m_has_gapWidth(false),
     m_gapWidth(NULL),
     m_has_splitType(false),
     m_splitType(NULL),
     m_has_splitPos(false),
     m_splitPos(NULL),
     m_has_custSplit(false),
     m_custSplit(NULL),
     m_has_secondPieSize(false),
     m_secondPieSize(NULL),
     m_has_extLst(false),
     m_extLst(NULL)
{
}
CT_OfPieChart::~CT_OfPieChart()
{
    clear();
}
bool CT_OfPieChart::has_ofPieType() const
{
    return m_has_ofPieType;
}

CT_OfPieType* CT_OfPieChart::mutable_ofPieType()
{
    m_has_ofPieType = true;
    if (!m_ofPieType)
    {
        m_ofPieType = new CT_OfPieType();
    }
    return m_ofPieType;
}

const CT_OfPieType& CT_OfPieChart::get_ofPieType() const
{
    if (m_ofPieType)
    {
        return *m_ofPieType;
    }
    return CT_OfPieType::default_instance();
}

bool CT_OfPieChart::has_varyColors() const
{
    return m_has_varyColors;
}

CT_Boolean* CT_OfPieChart::mutable_varyColors()
{
    m_has_varyColors = true;
    if (!m_varyColors)
    {
        m_varyColors = new CT_Boolean();
    }
    return m_varyColors;
}

const CT_Boolean& CT_OfPieChart::get_varyColors() const
{
    if (m_varyColors)
    {
        return *m_varyColors;
    }
    return CT_Boolean::default_instance();
}

CT_PieSer* CT_OfPieChart::add_ser()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_PieSer* pNewChild = pChildGroup->mutable_ser();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

bool CT_OfPieChart::has_dLbls() const
{
    return m_has_dLbls;
}

CT_DLbls* CT_OfPieChart::mutable_dLbls()
{
    m_has_dLbls = true;
    if (!m_dLbls)
    {
        m_dLbls = new CT_DLbls();
    }
    return m_dLbls;
}

const CT_DLbls& CT_OfPieChart::get_dLbls() const
{
    if (m_dLbls)
    {
        return *m_dLbls;
    }
    return CT_DLbls::default_instance();
}

bool CT_OfPieChart::has_gapWidth() const
{
    return m_has_gapWidth;
}

CT_GapAmount* CT_OfPieChart::mutable_gapWidth()
{
    m_has_gapWidth = true;
    if (!m_gapWidth)
    {
        m_gapWidth = new CT_GapAmount();
    }
    return m_gapWidth;
}

const CT_GapAmount& CT_OfPieChart::get_gapWidth() const
{
    if (m_gapWidth)
    {
        return *m_gapWidth;
    }
    return CT_GapAmount::default_instance();
}

bool CT_OfPieChart::has_splitType() const
{
    return m_has_splitType;
}

CT_SplitType* CT_OfPieChart::mutable_splitType()
{
    m_has_splitType = true;
    if (!m_splitType)
    {
        m_splitType = new CT_SplitType();
    }
    return m_splitType;
}

const CT_SplitType& CT_OfPieChart::get_splitType() const
{
    if (m_splitType)
    {
        return *m_splitType;
    }
    return CT_SplitType::default_instance();
}

bool CT_OfPieChart::has_splitPos() const
{
    return m_has_splitPos;
}

CT_Double* CT_OfPieChart::mutable_splitPos()
{
    m_has_splitPos = true;
    if (!m_splitPos)
    {
        m_splitPos = new CT_Double();
    }
    return m_splitPos;
}

const CT_Double& CT_OfPieChart::get_splitPos() const
{
    if (m_splitPos)
    {
        return *m_splitPos;
    }
    return CT_Double::default_instance();
}

bool CT_OfPieChart::has_custSplit() const
{
    return m_has_custSplit;
}

CT_CustSplit* CT_OfPieChart::mutable_custSplit()
{
    m_has_custSplit = true;
    if (!m_custSplit)
    {
        m_custSplit = new CT_CustSplit();
    }
    return m_custSplit;
}

const CT_CustSplit& CT_OfPieChart::get_custSplit() const
{
    if (m_custSplit)
    {
        return *m_custSplit;
    }
    return CT_CustSplit::default_instance();
}

bool CT_OfPieChart::has_secondPieSize() const
{
    return m_has_secondPieSize;
}

CT_SecondPieSize* CT_OfPieChart::mutable_secondPieSize()
{
    m_has_secondPieSize = true;
    if (!m_secondPieSize)
    {
        m_secondPieSize = new CT_SecondPieSize();
    }
    return m_secondPieSize;
}

const CT_SecondPieSize& CT_OfPieChart::get_secondPieSize() const
{
    if (m_secondPieSize)
    {
        return *m_secondPieSize;
    }
    return CT_SecondPieSize::default_instance();
}

CT_ChartLines* CT_OfPieChart::add_serLines()
{
    ChildGroup_2 *pChildGroup = new ChildGroup_2();
    CT_ChartLines* pNewChild = pChildGroup->mutable_serLines();
    m_childGroupList_2.push_back(pChildGroup);
    return pNewChild;
}

bool CT_OfPieChart::has_extLst() const
{
    return m_has_extLst;
}

CT_ExtensionList* CT_OfPieChart::mutable_extLst()
{
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new CT_ExtensionList();
    }
    return m_extLst;
}

const CT_ExtensionList& CT_OfPieChart::get_extLst() const
{
    if (m_extLst)
    {
        return *m_extLst;
    }
    return CT_ExtensionList::default_instance();
}

void CT_OfPieChart::clear()
{
    m_has_ofPieType = false;

    if (m_ofPieType)
    {
        delete m_ofPieType;
        m_ofPieType = NULL;
    }


    m_has_varyColors = false;

    if (m_varyColors)
    {
        delete m_varyColors;
        m_varyColors = NULL;
    }


    {
        vector<ChildGroup_1*>::iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_1.clear();
    }

    m_has_dLbls = false;

    if (m_dLbls)
    {
        delete m_dLbls;
        m_dLbls = NULL;
    }


    m_has_gapWidth = false;

    if (m_gapWidth)
    {
        delete m_gapWidth;
        m_gapWidth = NULL;
    }


    m_has_splitType = false;

    if (m_splitType)
    {
        delete m_splitType;
        m_splitType = NULL;
    }


    m_has_splitPos = false;

    if (m_splitPos)
    {
        delete m_splitPos;
        m_splitPos = NULL;
    }


    m_has_custSplit = false;

    if (m_custSplit)
    {
        delete m_custSplit;
        m_custSplit = NULL;
    }


    m_has_secondPieSize = false;

    if (m_secondPieSize)
    {
        delete m_secondPieSize;
        m_secondPieSize = NULL;
    }


    {
        vector<ChildGroup_2*>::iterator iter;
        for (iter = m_childGroupList_2.begin(); iter != m_childGroupList_2.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_2.clear();
    }

    m_has_extLst = false;

    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }

}

void CT_OfPieChart::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";

    assert(m_has_ofPieType);


    if (m_has_ofPieType)
    {
        m_ofPieType->toXmlElem("c:ofPieType", "", _outStream);
    }


    if (m_has_varyColors)
    {
        m_varyColors->toXmlElem("c:varyColors", "", _outStream);
    }

    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_ser())
            {
                (*iter)->get_ser().toXmlElem("c:ser", "", _outStream);
            }


        }
    }


    if (m_has_dLbls)
    {
        m_dLbls->toXmlElem("c:dLbls", "", _outStream);
    }


    if (m_has_gapWidth)
    {
        m_gapWidth->toXmlElem("c:gapWidth", "", _outStream);
    }


    if (m_has_splitType)
    {
        m_splitType->toXmlElem("c:splitType", "", _outStream);
    }


    if (m_has_splitPos)
    {
        m_splitPos->toXmlElem("c:splitPos", "", _outStream);
    }


    if (m_has_custSplit)
    {
        m_custSplit->toXmlElem("c:custSplit", "", _outStream);
    }


    if (m_has_secondPieSize)
    {
        m_secondPieSize->toXmlElem("c:secondPieSize", "", _outStream);
    }

    {
        vector<ChildGroup_2*>::const_iterator iter;
        for (iter = m_childGroupList_2.begin(); iter != m_childGroupList_2.end(); ++iter)
        {
            if ((*iter)->has_serLines())
            {
                (*iter)->get_serLines().toXmlElem("c:serLines", "", _outStream);
            }


        }
    }


    if (m_has_extLst)
    {
        m_extLst->toXmlElem("c:extLst", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_OfPieChart& CT_OfPieChart::default_instance()
{
    if (!CT_OfPieChart::default_instance_)
    {
        CT_OfPieChart::default_instance_ = new CT_OfPieChart();
    }
    return *CT_OfPieChart::default_instance_;
}


// CT_OfPieChart::ChildGroup_1
CT_OfPieChart::ChildGroup_1::ChildGroup_1()
    :m_has_ser(false),
     m_ser(NULL)
{
}
bool CT_OfPieChart::ChildGroup_1::has_ser() const
{
    return m_has_ser;
}

CT_PieSer* CT_OfPieChart::ChildGroup_1::mutable_ser()
{

    m_has_ser = true;
    if (!m_ser)
    {
        m_ser = new CT_PieSer();
    }
    return m_ser;
}

const CT_PieSer& CT_OfPieChart::ChildGroup_1::get_ser() const
{
    if (m_ser)
    {
        return *m_ser;
    }
    return CT_PieSer::default_instance();
}


// CT_OfPieChart::ChildGroup_2
CT_OfPieChart::ChildGroup_2::ChildGroup_2()
    :m_has_serLines(false),
     m_serLines(NULL)
{
}
bool CT_OfPieChart::ChildGroup_2::has_serLines() const
{
    return m_has_serLines;
}

CT_ChartLines* CT_OfPieChart::ChildGroup_2::mutable_serLines()
{

    m_has_serLines = true;
    if (!m_serLines)
    {
        m_serLines = new CT_ChartLines();
    }
    return m_serLines;
}

const CT_ChartLines& CT_OfPieChart::ChildGroup_2::get_serLines() const
{
    if (m_serLines)
    {
        return *m_serLines;
    }
    return CT_ChartLines::default_instance();
}

CT_OfPieChart* CT_OfPieChart::default_instance_ = NULL;

// CT_BubbleChart
CT_BubbleChart::CT_BubbleChart()
    :m_has_varyColors(false),
     m_varyColors(NULL),
     m_has_dLbls(false),
     m_dLbls(NULL),
     m_has_bubble3D(false),
     m_bubble3D(NULL),
     m_has_bubbleScale(false),
     m_bubbleScale(NULL),
     m_has_showNegBubbles(false),
     m_showNegBubbles(NULL),
     m_has_sizeRepresents(false),
     m_sizeRepresents(NULL),
     m_has_extLst(false),
     m_extLst(NULL)
{
}
CT_BubbleChart::~CT_BubbleChart()
{
    clear();
}
bool CT_BubbleChart::has_varyColors() const
{
    return m_has_varyColors;
}

CT_Boolean* CT_BubbleChart::mutable_varyColors()
{
    m_has_varyColors = true;
    if (!m_varyColors)
    {
        m_varyColors = new CT_Boolean();
    }
    return m_varyColors;
}

const CT_Boolean& CT_BubbleChart::get_varyColors() const
{
    if (m_varyColors)
    {
        return *m_varyColors;
    }
    return CT_Boolean::default_instance();
}

CT_BubbleSer* CT_BubbleChart::add_ser()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_BubbleSer* pNewChild = pChildGroup->mutable_ser();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

bool CT_BubbleChart::has_dLbls() const
{
    return m_has_dLbls;
}

CT_DLbls* CT_BubbleChart::mutable_dLbls()
{
    m_has_dLbls = true;
    if (!m_dLbls)
    {
        m_dLbls = new CT_DLbls();
    }
    return m_dLbls;
}

const CT_DLbls& CT_BubbleChart::get_dLbls() const
{
    if (m_dLbls)
    {
        return *m_dLbls;
    }
    return CT_DLbls::default_instance();
}

bool CT_BubbleChart::has_bubble3D() const
{
    return m_has_bubble3D;
}

CT_Boolean* CT_BubbleChart::mutable_bubble3D()
{
    m_has_bubble3D = true;
    if (!m_bubble3D)
    {
        m_bubble3D = new CT_Boolean();
    }
    return m_bubble3D;
}

const CT_Boolean& CT_BubbleChart::get_bubble3D() const
{
    if (m_bubble3D)
    {
        return *m_bubble3D;
    }
    return CT_Boolean::default_instance();
}

bool CT_BubbleChart::has_bubbleScale() const
{
    return m_has_bubbleScale;
}

CT_BubbleScale* CT_BubbleChart::mutable_bubbleScale()
{
    m_has_bubbleScale = true;
    if (!m_bubbleScale)
    {
        m_bubbleScale = new CT_BubbleScale();
    }
    return m_bubbleScale;
}

const CT_BubbleScale& CT_BubbleChart::get_bubbleScale() const
{
    if (m_bubbleScale)
    {
        return *m_bubbleScale;
    }
    return CT_BubbleScale::default_instance();
}

bool CT_BubbleChart::has_showNegBubbles() const
{
    return m_has_showNegBubbles;
}

CT_Boolean* CT_BubbleChart::mutable_showNegBubbles()
{
    m_has_showNegBubbles = true;
    if (!m_showNegBubbles)
    {
        m_showNegBubbles = new CT_Boolean();
    }
    return m_showNegBubbles;
}

const CT_Boolean& CT_BubbleChart::get_showNegBubbles() const
{
    if (m_showNegBubbles)
    {
        return *m_showNegBubbles;
    }
    return CT_Boolean::default_instance();
}

bool CT_BubbleChart::has_sizeRepresents() const
{
    return m_has_sizeRepresents;
}

CT_SizeRepresents* CT_BubbleChart::mutable_sizeRepresents()
{
    m_has_sizeRepresents = true;
    if (!m_sizeRepresents)
    {
        m_sizeRepresents = new CT_SizeRepresents();
    }
    return m_sizeRepresents;
}

const CT_SizeRepresents& CT_BubbleChart::get_sizeRepresents() const
{
    if (m_sizeRepresents)
    {
        return *m_sizeRepresents;
    }
    return CT_SizeRepresents::default_instance();
}

CT_UnsignedInt* CT_BubbleChart::add_axId()
{
    ChildGroup_2 *pChildGroup = new ChildGroup_2();
    CT_UnsignedInt* pNewChild = pChildGroup->mutable_axId();
    m_childGroupList_2.push_back(pChildGroup);
    return pNewChild;
}

bool CT_BubbleChart::has_extLst() const
{
    return m_has_extLst;
}

CT_ExtensionList* CT_BubbleChart::mutable_extLst()
{
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new CT_ExtensionList();
    }
    return m_extLst;
}

const CT_ExtensionList& CT_BubbleChart::get_extLst() const
{
    if (m_extLst)
    {
        return *m_extLst;
    }
    return CT_ExtensionList::default_instance();
}

void CT_BubbleChart::clear()
{
    m_has_varyColors = false;

    if (m_varyColors)
    {
        delete m_varyColors;
        m_varyColors = NULL;
    }


    {
        vector<ChildGroup_1*>::iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_1.clear();
    }

    m_has_dLbls = false;

    if (m_dLbls)
    {
        delete m_dLbls;
        m_dLbls = NULL;
    }


    m_has_bubble3D = false;

    if (m_bubble3D)
    {
        delete m_bubble3D;
        m_bubble3D = NULL;
    }


    m_has_bubbleScale = false;

    if (m_bubbleScale)
    {
        delete m_bubbleScale;
        m_bubbleScale = NULL;
    }


    m_has_showNegBubbles = false;

    if (m_showNegBubbles)
    {
        delete m_showNegBubbles;
        m_showNegBubbles = NULL;
    }


    m_has_sizeRepresents = false;

    if (m_sizeRepresents)
    {
        delete m_sizeRepresents;
        m_sizeRepresents = NULL;
    }


    {
        vector<ChildGroup_2*>::iterator iter;
        for (iter = m_childGroupList_2.begin(); iter != m_childGroupList_2.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_2.clear();
    }

    m_has_extLst = false;

    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }

}

void CT_BubbleChart::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";


    if (m_has_varyColors)
    {
        m_varyColors->toXmlElem("c:varyColors", "", _outStream);
    }

    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_ser())
            {
                (*iter)->get_ser().toXmlElem("c:ser", "", _outStream);
            }


        }
    }


    if (m_has_dLbls)
    {
        m_dLbls->toXmlElem("c:dLbls", "", _outStream);
    }


    if (m_has_bubble3D)
    {
        m_bubble3D->toXmlElem("c:bubble3D", "", _outStream);
    }


    if (m_has_bubbleScale)
    {
        m_bubbleScale->toXmlElem("c:bubbleScale", "", _outStream);
    }


    if (m_has_showNegBubbles)
    {
        m_showNegBubbles->toXmlElem("c:showNegBubbles", "", _outStream);
    }


    if (m_has_sizeRepresents)
    {
        m_sizeRepresents->toXmlElem("c:sizeRepresents", "", _outStream);
    }

    {
        int childSize = count_if(m_childGroupList_2.begin(), m_childGroupList_2.end(), mem_fun(&ChildGroup_2::has_axId));
        assert(2 <= childSize && childSize <= 2);
    }

    {
        vector<ChildGroup_2*>::const_iterator iter;
        for (iter = m_childGroupList_2.begin(); iter != m_childGroupList_2.end(); ++iter)
        {
            if ((*iter)->has_axId())
            {
                (*iter)->get_axId().toXmlElem("c:axId", "", _outStream);
            }


        }
    }


    if (m_has_extLst)
    {
        m_extLst->toXmlElem("c:extLst", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_BubbleChart& CT_BubbleChart::default_instance()
{
    if (!CT_BubbleChart::default_instance_)
    {
        CT_BubbleChart::default_instance_ = new CT_BubbleChart();
    }
    return *CT_BubbleChart::default_instance_;
}


// CT_BubbleChart::ChildGroup_1
CT_BubbleChart::ChildGroup_1::ChildGroup_1()
    :m_has_ser(false),
     m_ser(NULL)
{
}
bool CT_BubbleChart::ChildGroup_1::has_ser() const
{
    return m_has_ser;
}

CT_BubbleSer* CT_BubbleChart::ChildGroup_1::mutable_ser()
{

    m_has_ser = true;
    if (!m_ser)
    {
        m_ser = new CT_BubbleSer();
    }
    return m_ser;
}

const CT_BubbleSer& CT_BubbleChart::ChildGroup_1::get_ser() const
{
    if (m_ser)
    {
        return *m_ser;
    }
    return CT_BubbleSer::default_instance();
}


// CT_BubbleChart::ChildGroup_2
CT_BubbleChart::ChildGroup_2::ChildGroup_2()
    :m_has_axId(false),
     m_axId(NULL)
{
}
bool CT_BubbleChart::ChildGroup_2::has_axId() const
{
    return m_has_axId;
}

CT_UnsignedInt* CT_BubbleChart::ChildGroup_2::mutable_axId()
{

    m_has_axId = true;
    if (!m_axId)
    {
        m_axId = new CT_UnsignedInt();
    }
    return m_axId;
}

const CT_UnsignedInt& CT_BubbleChart::ChildGroup_2::get_axId() const
{
    if (m_axId)
    {
        return *m_axId;
    }
    return CT_UnsignedInt::default_instance();
}

CT_BubbleChart* CT_BubbleChart::default_instance_ = NULL;

// CT_BandFmt
CT_BandFmt::CT_BandFmt()
    :m_has_idx(false),
     m_idx(NULL),
     m_has_spPr(false),
     m_spPr(NULL)
{
}
CT_BandFmt::~CT_BandFmt()
{
    clear();
}
bool CT_BandFmt::has_idx() const
{
    return m_has_idx;
}

CT_UnsignedInt* CT_BandFmt::mutable_idx()
{
    m_has_idx = true;
    if (!m_idx)
    {
        m_idx = new CT_UnsignedInt();
    }
    return m_idx;
}

const CT_UnsignedInt& CT_BandFmt::get_idx() const
{
    if (m_idx)
    {
        return *m_idx;
    }
    return CT_UnsignedInt::default_instance();
}

bool CT_BandFmt::has_spPr() const
{
    return m_has_spPr;
}

ns_a::CT_ShapeProperties* CT_BandFmt::mutable_spPr()
{
    m_has_spPr = true;
    if (!m_spPr)
    {
        m_spPr = new ns_a::CT_ShapeProperties();
    }
    return m_spPr;
}

const ns_a::CT_ShapeProperties& CT_BandFmt::get_spPr() const
{
    if (m_spPr)
    {
        return *m_spPr;
    }
    return ns_a::CT_ShapeProperties::default_instance();
}

void CT_BandFmt::clear()
{
    m_has_idx = false;

    if (m_idx)
    {
        delete m_idx;
        m_idx = NULL;
    }


    m_has_spPr = false;

    if (m_spPr)
    {
        delete m_spPr;
        m_spPr = NULL;
    }

}

void CT_BandFmt::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";

    assert(m_has_idx);


    if (m_has_idx)
    {
        m_idx->toXmlElem("c:idx", "", _outStream);
    }


    if (m_has_spPr)
    {
        m_spPr->toXmlElem("c:spPr", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_BandFmt& CT_BandFmt::default_instance()
{
    if (!CT_BandFmt::default_instance_)
    {
        CT_BandFmt::default_instance_ = new CT_BandFmt();
    }
    return *CT_BandFmt::default_instance_;
}

CT_BandFmt* CT_BandFmt::default_instance_ = NULL;

// CT_BandFmts
CT_BandFmts::CT_BandFmts()

{
}
CT_BandFmts::~CT_BandFmts()
{
    clear();
}
CT_BandFmt* CT_BandFmts::add_bandFmt()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_BandFmt* pNewChild = pChildGroup->mutable_bandFmt();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

void CT_BandFmts::clear()
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

void CT_BandFmts::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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
            if ((*iter)->has_bandFmt())
            {
                (*iter)->get_bandFmt().toXmlElem("c:bandFmt", "", _outStream);
            }


        }
    }

    _outStream << "</" << _elemName << ">";
}

const CT_BandFmts& CT_BandFmts::default_instance()
{
    if (!CT_BandFmts::default_instance_)
    {
        CT_BandFmts::default_instance_ = new CT_BandFmts();
    }
    return *CT_BandFmts::default_instance_;
}


// CT_BandFmts::ChildGroup_1
CT_BandFmts::ChildGroup_1::ChildGroup_1()
    :m_has_bandFmt(false),
     m_bandFmt(NULL)
{
}
bool CT_BandFmts::ChildGroup_1::has_bandFmt() const
{
    return m_has_bandFmt;
}

CT_BandFmt* CT_BandFmts::ChildGroup_1::mutable_bandFmt()
{

    m_has_bandFmt = true;
    if (!m_bandFmt)
    {
        m_bandFmt = new CT_BandFmt();
    }
    return m_bandFmt;
}

const CT_BandFmt& CT_BandFmts::ChildGroup_1::get_bandFmt() const
{
    if (m_bandFmt)
    {
        return *m_bandFmt;
    }
    return CT_BandFmt::default_instance();
}

CT_BandFmts* CT_BandFmts::default_instance_ = NULL;

// CT_SurfaceChart
CT_SurfaceChart::CT_SurfaceChart()
    :m_has_wireframe(false),
     m_wireframe(NULL),
     m_has_bandFmts(false),
     m_bandFmts(NULL),
     m_has_extLst(false),
     m_extLst(NULL)
{
}
CT_SurfaceChart::~CT_SurfaceChart()
{
    clear();
}
bool CT_SurfaceChart::has_wireframe() const
{
    return m_has_wireframe;
}

CT_Boolean* CT_SurfaceChart::mutable_wireframe()
{
    m_has_wireframe = true;
    if (!m_wireframe)
    {
        m_wireframe = new CT_Boolean();
    }
    return m_wireframe;
}

const CT_Boolean& CT_SurfaceChart::get_wireframe() const
{
    if (m_wireframe)
    {
        return *m_wireframe;
    }
    return CT_Boolean::default_instance();
}

CT_SurfaceSer* CT_SurfaceChart::add_ser()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_SurfaceSer* pNewChild = pChildGroup->mutable_ser();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

bool CT_SurfaceChart::has_bandFmts() const
{
    return m_has_bandFmts;
}

CT_BandFmts* CT_SurfaceChart::mutable_bandFmts()
{
    m_has_bandFmts = true;
    if (!m_bandFmts)
    {
        m_bandFmts = new CT_BandFmts();
    }
    return m_bandFmts;
}

const CT_BandFmts& CT_SurfaceChart::get_bandFmts() const
{
    if (m_bandFmts)
    {
        return *m_bandFmts;
    }
    return CT_BandFmts::default_instance();
}

CT_UnsignedInt* CT_SurfaceChart::add_axId()
{
    ChildGroup_2 *pChildGroup = new ChildGroup_2();
    CT_UnsignedInt* pNewChild = pChildGroup->mutable_axId();
    m_childGroupList_2.push_back(pChildGroup);
    return pNewChild;
}

bool CT_SurfaceChart::has_extLst() const
{
    return m_has_extLst;
}

CT_ExtensionList* CT_SurfaceChart::mutable_extLst()
{
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new CT_ExtensionList();
    }
    return m_extLst;
}

const CT_ExtensionList& CT_SurfaceChart::get_extLst() const
{
    if (m_extLst)
    {
        return *m_extLst;
    }
    return CT_ExtensionList::default_instance();
}

void CT_SurfaceChart::clear()
{
    m_has_wireframe = false;

    if (m_wireframe)
    {
        delete m_wireframe;
        m_wireframe = NULL;
    }


    {
        vector<ChildGroup_1*>::iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_1.clear();
    }

    m_has_bandFmts = false;

    if (m_bandFmts)
    {
        delete m_bandFmts;
        m_bandFmts = NULL;
    }


    {
        vector<ChildGroup_2*>::iterator iter;
        for (iter = m_childGroupList_2.begin(); iter != m_childGroupList_2.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_2.clear();
    }

    m_has_extLst = false;

    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }

}

void CT_SurfaceChart::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";


    if (m_has_wireframe)
    {
        m_wireframe->toXmlElem("c:wireframe", "", _outStream);
    }

    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_ser())
            {
                (*iter)->get_ser().toXmlElem("c:ser", "", _outStream);
            }


        }
    }


    if (m_has_bandFmts)
    {
        m_bandFmts->toXmlElem("c:bandFmts", "", _outStream);
    }

    {
        int childSize = count_if(m_childGroupList_2.begin(), m_childGroupList_2.end(), mem_fun(&ChildGroup_2::has_axId));
        assert(2 <= childSize && childSize <= 3);
    }

    {
        vector<ChildGroup_2*>::const_iterator iter;
        for (iter = m_childGroupList_2.begin(); iter != m_childGroupList_2.end(); ++iter)
        {
            if ((*iter)->has_axId())
            {
                (*iter)->get_axId().toXmlElem("c:axId", "", _outStream);
            }


        }
    }


    if (m_has_extLst)
    {
        m_extLst->toXmlElem("c:extLst", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_SurfaceChart& CT_SurfaceChart::default_instance()
{
    if (!CT_SurfaceChart::default_instance_)
    {
        CT_SurfaceChart::default_instance_ = new CT_SurfaceChart();
    }
    return *CT_SurfaceChart::default_instance_;
}


// CT_SurfaceChart::ChildGroup_1
CT_SurfaceChart::ChildGroup_1::ChildGroup_1()
    :m_has_ser(false),
     m_ser(NULL)
{
}
bool CT_SurfaceChart::ChildGroup_1::has_ser() const
{
    return m_has_ser;
}

CT_SurfaceSer* CT_SurfaceChart::ChildGroup_1::mutable_ser()
{

    m_has_ser = true;
    if (!m_ser)
    {
        m_ser = new CT_SurfaceSer();
    }
    return m_ser;
}

const CT_SurfaceSer& CT_SurfaceChart::ChildGroup_1::get_ser() const
{
    if (m_ser)
    {
        return *m_ser;
    }
    return CT_SurfaceSer::default_instance();
}


// CT_SurfaceChart::ChildGroup_2
CT_SurfaceChart::ChildGroup_2::ChildGroup_2()
    :m_has_axId(false),
     m_axId(NULL)
{
}
bool CT_SurfaceChart::ChildGroup_2::has_axId() const
{
    return m_has_axId;
}

CT_UnsignedInt* CT_SurfaceChart::ChildGroup_2::mutable_axId()
{

    m_has_axId = true;
    if (!m_axId)
    {
        m_axId = new CT_UnsignedInt();
    }
    return m_axId;
}

const CT_UnsignedInt& CT_SurfaceChart::ChildGroup_2::get_axId() const
{
    if (m_axId)
    {
        return *m_axId;
    }
    return CT_UnsignedInt::default_instance();
}

CT_SurfaceChart* CT_SurfaceChart::default_instance_ = NULL;

// CT_Surface3DChart
CT_Surface3DChart::CT_Surface3DChart()
    :m_has_wireframe(false),
     m_wireframe(NULL),
     m_has_bandFmts(false),
     m_bandFmts(NULL),
     m_has_extLst(false),
     m_extLst(NULL)
{
}
CT_Surface3DChart::~CT_Surface3DChart()
{
    clear();
}
bool CT_Surface3DChart::has_wireframe() const
{
    return m_has_wireframe;
}

CT_Boolean* CT_Surface3DChart::mutable_wireframe()
{
    m_has_wireframe = true;
    if (!m_wireframe)
    {
        m_wireframe = new CT_Boolean();
    }
    return m_wireframe;
}

const CT_Boolean& CT_Surface3DChart::get_wireframe() const
{
    if (m_wireframe)
    {
        return *m_wireframe;
    }
    return CT_Boolean::default_instance();
}

CT_SurfaceSer* CT_Surface3DChart::add_ser()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_SurfaceSer* pNewChild = pChildGroup->mutable_ser();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

bool CT_Surface3DChart::has_bandFmts() const
{
    return m_has_bandFmts;
}

CT_BandFmts* CT_Surface3DChart::mutable_bandFmts()
{
    m_has_bandFmts = true;
    if (!m_bandFmts)
    {
        m_bandFmts = new CT_BandFmts();
    }
    return m_bandFmts;
}

const CT_BandFmts& CT_Surface3DChart::get_bandFmts() const
{
    if (m_bandFmts)
    {
        return *m_bandFmts;
    }
    return CT_BandFmts::default_instance();
}

CT_UnsignedInt* CT_Surface3DChart::add_axId()
{
    ChildGroup_2 *pChildGroup = new ChildGroup_2();
    CT_UnsignedInt* pNewChild = pChildGroup->mutable_axId();
    m_childGroupList_2.push_back(pChildGroup);
    return pNewChild;
}

bool CT_Surface3DChart::has_extLst() const
{
    return m_has_extLst;
}

CT_ExtensionList* CT_Surface3DChart::mutable_extLst()
{
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new CT_ExtensionList();
    }
    return m_extLst;
}

const CT_ExtensionList& CT_Surface3DChart::get_extLst() const
{
    if (m_extLst)
    {
        return *m_extLst;
    }
    return CT_ExtensionList::default_instance();
}

void CT_Surface3DChart::clear()
{
    m_has_wireframe = false;

    if (m_wireframe)
    {
        delete m_wireframe;
        m_wireframe = NULL;
    }


    {
        vector<ChildGroup_1*>::iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_1.clear();
    }

    m_has_bandFmts = false;

    if (m_bandFmts)
    {
        delete m_bandFmts;
        m_bandFmts = NULL;
    }


    {
        vector<ChildGroup_2*>::iterator iter;
        for (iter = m_childGroupList_2.begin(); iter != m_childGroupList_2.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_2.clear();
    }

    m_has_extLst = false;

    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }

}

void CT_Surface3DChart::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";


    if (m_has_wireframe)
    {
        m_wireframe->toXmlElem("c:wireframe", "", _outStream);
    }

    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_ser())
            {
                (*iter)->get_ser().toXmlElem("c:ser", "", _outStream);
            }


        }
    }


    if (m_has_bandFmts)
    {
        m_bandFmts->toXmlElem("c:bandFmts", "", _outStream);
    }

    {
        int childSize = count_if(m_childGroupList_2.begin(), m_childGroupList_2.end(), mem_fun(&ChildGroup_2::has_axId));
        assert(3 <= childSize && childSize <= 3);
    }

    {
        vector<ChildGroup_2*>::const_iterator iter;
        for (iter = m_childGroupList_2.begin(); iter != m_childGroupList_2.end(); ++iter)
        {
            if ((*iter)->has_axId())
            {
                (*iter)->get_axId().toXmlElem("c:axId", "", _outStream);
            }


        }
    }


    if (m_has_extLst)
    {
        m_extLst->toXmlElem("c:extLst", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_Surface3DChart& CT_Surface3DChart::default_instance()
{
    if (!CT_Surface3DChart::default_instance_)
    {
        CT_Surface3DChart::default_instance_ = new CT_Surface3DChart();
    }
    return *CT_Surface3DChart::default_instance_;
}


// CT_Surface3DChart::ChildGroup_1
CT_Surface3DChart::ChildGroup_1::ChildGroup_1()
    :m_has_ser(false),
     m_ser(NULL)
{
}
bool CT_Surface3DChart::ChildGroup_1::has_ser() const
{
    return m_has_ser;
}

CT_SurfaceSer* CT_Surface3DChart::ChildGroup_1::mutable_ser()
{

    m_has_ser = true;
    if (!m_ser)
    {
        m_ser = new CT_SurfaceSer();
    }
    return m_ser;
}

const CT_SurfaceSer& CT_Surface3DChart::ChildGroup_1::get_ser() const
{
    if (m_ser)
    {
        return *m_ser;
    }
    return CT_SurfaceSer::default_instance();
}


// CT_Surface3DChart::ChildGroup_2
CT_Surface3DChart::ChildGroup_2::ChildGroup_2()
    :m_has_axId(false),
     m_axId(NULL)
{
}
bool CT_Surface3DChart::ChildGroup_2::has_axId() const
{
    return m_has_axId;
}

CT_UnsignedInt* CT_Surface3DChart::ChildGroup_2::mutable_axId()
{

    m_has_axId = true;
    if (!m_axId)
    {
        m_axId = new CT_UnsignedInt();
    }
    return m_axId;
}

const CT_UnsignedInt& CT_Surface3DChart::ChildGroup_2::get_axId() const
{
    if (m_axId)
    {
        return *m_axId;
    }
    return CT_UnsignedInt::default_instance();
}

CT_Surface3DChart* CT_Surface3DChart::default_instance_ = NULL;

// CT_AxPos
CT_AxPos::CT_AxPos()
    :m_has_val_attr(false),
     m_val_attr(NULL)
{
}
CT_AxPos::~CT_AxPos()
{
    clear();
}
void CT_AxPos::clear()
{
    m_has_val_attr = false;

    if (m_val_attr)
    {
        delete m_val_attr;
        m_val_attr = NULL;
    }

}

void CT_AxPos::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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

const CT_AxPos& CT_AxPos::default_instance()
{
    if (!CT_AxPos::default_instance_)
    {
        CT_AxPos::default_instance_ = new CT_AxPos();
    }
    return *CT_AxPos::default_instance_;
}

bool CT_AxPos::has_val_attr() const
{
    return m_has_val_attr;
}

void CT_AxPos::set_val_attr(const ST_AxPos& _val_attr)
{
    m_has_val_attr = true;
    m_val_attr = new ST_AxPos(_val_attr);
}

const ST_AxPos& CT_AxPos::get_val_attr() const
{
    if (m_val_attr)
    {
        return *m_val_attr;
    }
    return ST_AxPos::default_instance();
}

CT_AxPos* CT_AxPos::default_instance_ = NULL;

// CT_Crosses
CT_Crosses::CT_Crosses()
    :m_has_val_attr(false),
     m_val_attr(NULL)
{
}
CT_Crosses::~CT_Crosses()
{
    clear();
}
void CT_Crosses::clear()
{
    m_has_val_attr = false;

    if (m_val_attr)
    {
        delete m_val_attr;
        m_val_attr = NULL;
    }

}

void CT_Crosses::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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

const CT_Crosses& CT_Crosses::default_instance()
{
    if (!CT_Crosses::default_instance_)
    {
        CT_Crosses::default_instance_ = new CT_Crosses();
    }
    return *CT_Crosses::default_instance_;
}

bool CT_Crosses::has_val_attr() const
{
    return m_has_val_attr;
}

void CT_Crosses::set_val_attr(const ST_Crosses& _val_attr)
{
    m_has_val_attr = true;
    m_val_attr = new ST_Crosses(_val_attr);
}

const ST_Crosses& CT_Crosses::get_val_attr() const
{
    if (m_val_attr)
    {
        return *m_val_attr;
    }
    return ST_Crosses::default_instance();
}

CT_Crosses* CT_Crosses::default_instance_ = NULL;

// CT_CrossBetween
CT_CrossBetween::CT_CrossBetween()
    :m_has_val_attr(false),
     m_val_attr(NULL)
{
}
CT_CrossBetween::~CT_CrossBetween()
{
    clear();
}
void CT_CrossBetween::clear()
{
    m_has_val_attr = false;

    if (m_val_attr)
    {
        delete m_val_attr;
        m_val_attr = NULL;
    }

}

void CT_CrossBetween::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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

const CT_CrossBetween& CT_CrossBetween::default_instance()
{
    if (!CT_CrossBetween::default_instance_)
    {
        CT_CrossBetween::default_instance_ = new CT_CrossBetween();
    }
    return *CT_CrossBetween::default_instance_;
}

bool CT_CrossBetween::has_val_attr() const
{
    return m_has_val_attr;
}

void CT_CrossBetween::set_val_attr(const ST_CrossBetween& _val_attr)
{
    m_has_val_attr = true;
    m_val_attr = new ST_CrossBetween(_val_attr);
}

const ST_CrossBetween& CT_CrossBetween::get_val_attr() const
{
    if (m_val_attr)
    {
        return *m_val_attr;
    }
    return ST_CrossBetween::default_instance();
}

CT_CrossBetween* CT_CrossBetween::default_instance_ = NULL;

// CT_TickMark
CT_TickMark::CT_TickMark()
    :m_has_val_attr(false),
     m_val_attr(NULL)
{
}
CT_TickMark::~CT_TickMark()
{
    clear();
}
void CT_TickMark::clear()
{
    m_has_val_attr = false;

    if (m_val_attr)
    {
        delete m_val_attr;
        m_val_attr = NULL;
    }

}

void CT_TickMark::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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

const CT_TickMark& CT_TickMark::default_instance()
{
    if (!CT_TickMark::default_instance_)
    {
        CT_TickMark::default_instance_ = new CT_TickMark();
    }
    return *CT_TickMark::default_instance_;
}

bool CT_TickMark::has_val_attr() const
{
    return m_has_val_attr;
}

void CT_TickMark::set_val_attr(const ST_TickMark& _val_attr)
{
    m_has_val_attr = true;
    m_val_attr = new ST_TickMark(_val_attr);
}

const ST_TickMark& CT_TickMark::get_val_attr() const
{
    if (m_val_attr)
    {
        return *m_val_attr;
    }
    return ST_TickMark::default_instance();
}

CT_TickMark* CT_TickMark::default_instance_ = NULL;

// CT_TickLblPos
CT_TickLblPos::CT_TickLblPos()
    :m_has_val_attr(false),
     m_val_attr(NULL)
{
}
CT_TickLblPos::~CT_TickLblPos()
{
    clear();
}
void CT_TickLblPos::clear()
{
    m_has_val_attr = false;

    if (m_val_attr)
    {
        delete m_val_attr;
        m_val_attr = NULL;
    }

}

void CT_TickLblPos::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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

const CT_TickLblPos& CT_TickLblPos::default_instance()
{
    if (!CT_TickLblPos::default_instance_)
    {
        CT_TickLblPos::default_instance_ = new CT_TickLblPos();
    }
    return *CT_TickLblPos::default_instance_;
}

bool CT_TickLblPos::has_val_attr() const
{
    return m_has_val_attr;
}

void CT_TickLblPos::set_val_attr(const ST_TickLblPos& _val_attr)
{
    m_has_val_attr = true;
    m_val_attr = new ST_TickLblPos(_val_attr);
}

const ST_TickLblPos& CT_TickLblPos::get_val_attr() const
{
    if (m_val_attr)
    {
        return *m_val_attr;
    }
    return ST_TickLblPos::default_instance();
}

CT_TickLblPos* CT_TickLblPos::default_instance_ = NULL;

// CT_Skip
CT_Skip::CT_Skip()
    :m_has_val_attr(false),
     m_val_attr(NULL)
{
}
CT_Skip::~CT_Skip()
{
    clear();
}
void CT_Skip::clear()
{
    m_has_val_attr = false;

    if (m_val_attr)
    {
        delete m_val_attr;
        m_val_attr = NULL;
    }

}

void CT_Skip::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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

const CT_Skip& CT_Skip::default_instance()
{
    if (!CT_Skip::default_instance_)
    {
        CT_Skip::default_instance_ = new CT_Skip();
    }
    return *CT_Skip::default_instance_;
}

bool CT_Skip::has_val_attr() const
{
    return m_has_val_attr;
}

void CT_Skip::set_val_attr(const ST_Skip& _val_attr)
{
    m_has_val_attr = true;
    m_val_attr = new ST_Skip(_val_attr);
}

const ST_Skip& CT_Skip::get_val_attr() const
{
    if (m_val_attr)
    {
        return *m_val_attr;
    }
    return ST_Skip::default_instance();
}

CT_Skip* CT_Skip::default_instance_ = NULL;

// CT_TimeUnit
CT_TimeUnit::CT_TimeUnit()
    :m_has_val_attr(false),
     m_val_attr(NULL)
{
}
CT_TimeUnit::~CT_TimeUnit()
{
    clear();
}
void CT_TimeUnit::clear()
{
    m_has_val_attr = false;

    if (m_val_attr)
    {
        delete m_val_attr;
        m_val_attr = NULL;
    }

}

void CT_TimeUnit::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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

const CT_TimeUnit& CT_TimeUnit::default_instance()
{
    if (!CT_TimeUnit::default_instance_)
    {
        CT_TimeUnit::default_instance_ = new CT_TimeUnit();
    }
    return *CT_TimeUnit::default_instance_;
}

bool CT_TimeUnit::has_val_attr() const
{
    return m_has_val_attr;
}

void CT_TimeUnit::set_val_attr(const ST_TimeUnit& _val_attr)
{
    m_has_val_attr = true;
    m_val_attr = new ST_TimeUnit(_val_attr);
}

const ST_TimeUnit& CT_TimeUnit::get_val_attr() const
{
    if (m_val_attr)
    {
        return *m_val_attr;
    }
    return ST_TimeUnit::default_instance();
}

CT_TimeUnit* CT_TimeUnit::default_instance_ = NULL;

// CT_AxisUnit
CT_AxisUnit::CT_AxisUnit()
    :m_has_val_attr(false),
     m_val_attr(NULL)
{
}
CT_AxisUnit::~CT_AxisUnit()
{
    clear();
}
void CT_AxisUnit::clear()
{
    m_has_val_attr = false;

    if (m_val_attr)
    {
        delete m_val_attr;
        m_val_attr = NULL;
    }

}

void CT_AxisUnit::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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

const CT_AxisUnit& CT_AxisUnit::default_instance()
{
    if (!CT_AxisUnit::default_instance_)
    {
        CT_AxisUnit::default_instance_ = new CT_AxisUnit();
    }
    return *CT_AxisUnit::default_instance_;
}

bool CT_AxisUnit::has_val_attr() const
{
    return m_has_val_attr;
}

void CT_AxisUnit::set_val_attr(const ST_AxisUnit& _val_attr)
{
    m_has_val_attr = true;
    m_val_attr = new ST_AxisUnit(_val_attr);
}

const ST_AxisUnit& CT_AxisUnit::get_val_attr() const
{
    if (m_val_attr)
    {
        return *m_val_attr;
    }
    return ST_AxisUnit::default_instance();
}

CT_AxisUnit* CT_AxisUnit::default_instance_ = NULL;

// CT_BuiltInUnit
CT_BuiltInUnit::CT_BuiltInUnit()
    :m_has_val_attr(false),
     m_val_attr(NULL)
{
}
CT_BuiltInUnit::~CT_BuiltInUnit()
{
    clear();
}
void CT_BuiltInUnit::clear()
{
    m_has_val_attr = false;

    if (m_val_attr)
    {
        delete m_val_attr;
        m_val_attr = NULL;
    }

}

void CT_BuiltInUnit::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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

const CT_BuiltInUnit& CT_BuiltInUnit::default_instance()
{
    if (!CT_BuiltInUnit::default_instance_)
    {
        CT_BuiltInUnit::default_instance_ = new CT_BuiltInUnit();
    }
    return *CT_BuiltInUnit::default_instance_;
}

bool CT_BuiltInUnit::has_val_attr() const
{
    return m_has_val_attr;
}

void CT_BuiltInUnit::set_val_attr(const ST_BuiltInUnit& _val_attr)
{
    m_has_val_attr = true;
    m_val_attr = new ST_BuiltInUnit(_val_attr);
}

const ST_BuiltInUnit& CT_BuiltInUnit::get_val_attr() const
{
    if (m_val_attr)
    {
        return *m_val_attr;
    }
    return ST_BuiltInUnit::default_instance();
}

CT_BuiltInUnit* CT_BuiltInUnit::default_instance_ = NULL;

// CT_PictureFormat
CT_PictureFormat::CT_PictureFormat()
    :m_has_val_attr(false),
     m_val_attr(NULL)
{
}
CT_PictureFormat::~CT_PictureFormat()
{
    clear();
}
void CT_PictureFormat::clear()
{
    m_has_val_attr = false;

    if (m_val_attr)
    {
        delete m_val_attr;
        m_val_attr = NULL;
    }

}

void CT_PictureFormat::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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

const CT_PictureFormat& CT_PictureFormat::default_instance()
{
    if (!CT_PictureFormat::default_instance_)
    {
        CT_PictureFormat::default_instance_ = new CT_PictureFormat();
    }
    return *CT_PictureFormat::default_instance_;
}

bool CT_PictureFormat::has_val_attr() const
{
    return m_has_val_attr;
}

void CT_PictureFormat::set_val_attr(const ST_PictureFormat& _val_attr)
{
    m_has_val_attr = true;
    m_val_attr = new ST_PictureFormat(_val_attr);
}

const ST_PictureFormat& CT_PictureFormat::get_val_attr() const
{
    if (m_val_attr)
    {
        return *m_val_attr;
    }
    return ST_PictureFormat::default_instance();
}

CT_PictureFormat* CT_PictureFormat::default_instance_ = NULL;

// CT_PictureStackUnit
CT_PictureStackUnit::CT_PictureStackUnit()
    :m_has_val_attr(false),
     m_val_attr(NULL)
{
}
CT_PictureStackUnit::~CT_PictureStackUnit()
{
    clear();
}
void CT_PictureStackUnit::clear()
{
    m_has_val_attr = false;

    if (m_val_attr)
    {
        delete m_val_attr;
        m_val_attr = NULL;
    }

}

void CT_PictureStackUnit::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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

const CT_PictureStackUnit& CT_PictureStackUnit::default_instance()
{
    if (!CT_PictureStackUnit::default_instance_)
    {
        CT_PictureStackUnit::default_instance_ = new CT_PictureStackUnit();
    }
    return *CT_PictureStackUnit::default_instance_;
}

bool CT_PictureStackUnit::has_val_attr() const
{
    return m_has_val_attr;
}

void CT_PictureStackUnit::set_val_attr(const ST_PictureStackUnit& _val_attr)
{
    m_has_val_attr = true;
    m_val_attr = new ST_PictureStackUnit(_val_attr);
}

const ST_PictureStackUnit& CT_PictureStackUnit::get_val_attr() const
{
    if (m_val_attr)
    {
        return *m_val_attr;
    }
    return ST_PictureStackUnit::default_instance();
}

CT_PictureStackUnit* CT_PictureStackUnit::default_instance_ = NULL;

// CT_PictureOptions
CT_PictureOptions::CT_PictureOptions()
    :m_has_applyToFront(false),
     m_applyToFront(NULL),
     m_has_applyToSides(false),
     m_applyToSides(NULL),
     m_has_applyToEnd(false),
     m_applyToEnd(NULL),
     m_has_pictureFormat(false),
     m_pictureFormat(NULL),
     m_has_pictureStackUnit(false),
     m_pictureStackUnit(NULL)
{
}
CT_PictureOptions::~CT_PictureOptions()
{
    clear();
}
bool CT_PictureOptions::has_applyToFront() const
{
    return m_has_applyToFront;
}

CT_Boolean* CT_PictureOptions::mutable_applyToFront()
{
    m_has_applyToFront = true;
    if (!m_applyToFront)
    {
        m_applyToFront = new CT_Boolean();
    }
    return m_applyToFront;
}

const CT_Boolean& CT_PictureOptions::get_applyToFront() const
{
    if (m_applyToFront)
    {
        return *m_applyToFront;
    }
    return CT_Boolean::default_instance();
}

bool CT_PictureOptions::has_applyToSides() const
{
    return m_has_applyToSides;
}

CT_Boolean* CT_PictureOptions::mutable_applyToSides()
{
    m_has_applyToSides = true;
    if (!m_applyToSides)
    {
        m_applyToSides = new CT_Boolean();
    }
    return m_applyToSides;
}

const CT_Boolean& CT_PictureOptions::get_applyToSides() const
{
    if (m_applyToSides)
    {
        return *m_applyToSides;
    }
    return CT_Boolean::default_instance();
}

bool CT_PictureOptions::has_applyToEnd() const
{
    return m_has_applyToEnd;
}

CT_Boolean* CT_PictureOptions::mutable_applyToEnd()
{
    m_has_applyToEnd = true;
    if (!m_applyToEnd)
    {
        m_applyToEnd = new CT_Boolean();
    }
    return m_applyToEnd;
}

const CT_Boolean& CT_PictureOptions::get_applyToEnd() const
{
    if (m_applyToEnd)
    {
        return *m_applyToEnd;
    }
    return CT_Boolean::default_instance();
}

bool CT_PictureOptions::has_pictureFormat() const
{
    return m_has_pictureFormat;
}

CT_PictureFormat* CT_PictureOptions::mutable_pictureFormat()
{
    m_has_pictureFormat = true;
    if (!m_pictureFormat)
    {
        m_pictureFormat = new CT_PictureFormat();
    }
    return m_pictureFormat;
}

const CT_PictureFormat& CT_PictureOptions::get_pictureFormat() const
{
    if (m_pictureFormat)
    {
        return *m_pictureFormat;
    }
    return CT_PictureFormat::default_instance();
}

bool CT_PictureOptions::has_pictureStackUnit() const
{
    return m_has_pictureStackUnit;
}

CT_PictureStackUnit* CT_PictureOptions::mutable_pictureStackUnit()
{
    m_has_pictureStackUnit = true;
    if (!m_pictureStackUnit)
    {
        m_pictureStackUnit = new CT_PictureStackUnit();
    }
    return m_pictureStackUnit;
}

const CT_PictureStackUnit& CT_PictureOptions::get_pictureStackUnit() const
{
    if (m_pictureStackUnit)
    {
        return *m_pictureStackUnit;
    }
    return CT_PictureStackUnit::default_instance();
}

void CT_PictureOptions::clear()
{
    m_has_applyToFront = false;

    if (m_applyToFront)
    {
        delete m_applyToFront;
        m_applyToFront = NULL;
    }


    m_has_applyToSides = false;

    if (m_applyToSides)
    {
        delete m_applyToSides;
        m_applyToSides = NULL;
    }


    m_has_applyToEnd = false;

    if (m_applyToEnd)
    {
        delete m_applyToEnd;
        m_applyToEnd = NULL;
    }


    m_has_pictureFormat = false;

    if (m_pictureFormat)
    {
        delete m_pictureFormat;
        m_pictureFormat = NULL;
    }


    m_has_pictureStackUnit = false;

    if (m_pictureStackUnit)
    {
        delete m_pictureStackUnit;
        m_pictureStackUnit = NULL;
    }

}

void CT_PictureOptions::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";


    if (m_has_applyToFront)
    {
        m_applyToFront->toXmlElem("c:applyToFront", "", _outStream);
    }


    if (m_has_applyToSides)
    {
        m_applyToSides->toXmlElem("c:applyToSides", "", _outStream);
    }


    if (m_has_applyToEnd)
    {
        m_applyToEnd->toXmlElem("c:applyToEnd", "", _outStream);
    }


    if (m_has_pictureFormat)
    {
        m_pictureFormat->toXmlElem("c:pictureFormat", "", _outStream);
    }


    if (m_has_pictureStackUnit)
    {
        m_pictureStackUnit->toXmlElem("c:pictureStackUnit", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_PictureOptions& CT_PictureOptions::default_instance()
{
    if (!CT_PictureOptions::default_instance_)
    {
        CT_PictureOptions::default_instance_ = new CT_PictureOptions();
    }
    return *CT_PictureOptions::default_instance_;
}

CT_PictureOptions* CT_PictureOptions::default_instance_ = NULL;

// CT_DispUnitsLbl
CT_DispUnitsLbl::CT_DispUnitsLbl()
    :m_has_layout(false),
     m_layout(NULL),
     m_has_tx(false),
     m_tx(NULL),
     m_has_spPr(false),
     m_spPr(NULL),
     m_has_txPr(false),
     m_txPr(NULL)
{
}
CT_DispUnitsLbl::~CT_DispUnitsLbl()
{
    clear();
}
bool CT_DispUnitsLbl::has_layout() const
{
    return m_has_layout;
}

CT_Layout* CT_DispUnitsLbl::mutable_layout()
{
    m_has_layout = true;
    if (!m_layout)
    {
        m_layout = new CT_Layout();
    }
    return m_layout;
}

const CT_Layout& CT_DispUnitsLbl::get_layout() const
{
    if (m_layout)
    {
        return *m_layout;
    }
    return CT_Layout::default_instance();
}

bool CT_DispUnitsLbl::has_tx() const
{
    return m_has_tx;
}

CT_Tx* CT_DispUnitsLbl::mutable_tx()
{
    m_has_tx = true;
    if (!m_tx)
    {
        m_tx = new CT_Tx();
    }
    return m_tx;
}

const CT_Tx& CT_DispUnitsLbl::get_tx() const
{
    if (m_tx)
    {
        return *m_tx;
    }
    return CT_Tx::default_instance();
}

bool CT_DispUnitsLbl::has_spPr() const
{
    return m_has_spPr;
}

ns_a::CT_ShapeProperties* CT_DispUnitsLbl::mutable_spPr()
{
    m_has_spPr = true;
    if (!m_spPr)
    {
        m_spPr = new ns_a::CT_ShapeProperties();
    }
    return m_spPr;
}

const ns_a::CT_ShapeProperties& CT_DispUnitsLbl::get_spPr() const
{
    if (m_spPr)
    {
        return *m_spPr;
    }
    return ns_a::CT_ShapeProperties::default_instance();
}

bool CT_DispUnitsLbl::has_txPr() const
{
    return m_has_txPr;
}

ns_a::CT_TextBody* CT_DispUnitsLbl::mutable_txPr()
{
    m_has_txPr = true;
    if (!m_txPr)
    {
        m_txPr = new ns_a::CT_TextBody();
    }
    return m_txPr;
}

const ns_a::CT_TextBody& CT_DispUnitsLbl::get_txPr() const
{
    if (m_txPr)
    {
        return *m_txPr;
    }
    return ns_a::CT_TextBody::default_instance();
}

void CT_DispUnitsLbl::clear()
{
    m_has_layout = false;

    if (m_layout)
    {
        delete m_layout;
        m_layout = NULL;
    }


    m_has_tx = false;

    if (m_tx)
    {
        delete m_tx;
        m_tx = NULL;
    }


    m_has_spPr = false;

    if (m_spPr)
    {
        delete m_spPr;
        m_spPr = NULL;
    }


    m_has_txPr = false;

    if (m_txPr)
    {
        delete m_txPr;
        m_txPr = NULL;
    }

}

void CT_DispUnitsLbl::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";


    if (m_has_layout)
    {
        m_layout->toXmlElem("c:layout", "", _outStream);
    }


    if (m_has_tx)
    {
        m_tx->toXmlElem("c:tx", "", _outStream);
    }


    if (m_has_spPr)
    {
        m_spPr->toXmlElem("c:spPr", "", _outStream);
    }


    if (m_has_txPr)
    {
        m_txPr->toXmlElem("c:txPr", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_DispUnitsLbl& CT_DispUnitsLbl::default_instance()
{
    if (!CT_DispUnitsLbl::default_instance_)
    {
        CT_DispUnitsLbl::default_instance_ = new CT_DispUnitsLbl();
    }
    return *CT_DispUnitsLbl::default_instance_;
}

CT_DispUnitsLbl* CT_DispUnitsLbl::default_instance_ = NULL;

// CT_DispUnits
CT_DispUnits::CT_DispUnits()
    :m_has_custUnit(false),
     m_custUnit(NULL),
     m_has_builtInUnit(false),
     m_builtInUnit(NULL),
     m_has_dispUnitsLbl(false),
     m_dispUnitsLbl(NULL),
     m_has_extLst(false),
     m_extLst(NULL)
{
}
CT_DispUnits::~CT_DispUnits()
{
    clear();
}
bool CT_DispUnits::has_custUnit() const
{
    return m_has_custUnit;
}

CT_Double* CT_DispUnits::mutable_custUnit()
{

    m_has_builtInUnit = false;

    if (m_builtInUnit)
    {
        delete m_builtInUnit;
        m_builtInUnit = NULL;
    }
    ;

    m_has_custUnit = true;
    if (!m_custUnit)
    {
        m_custUnit = new CT_Double();
    }
    return m_custUnit;
}

const CT_Double& CT_DispUnits::get_custUnit() const
{
    if (m_custUnit)
    {
        return *m_custUnit;
    }
    return CT_Double::default_instance();
}

bool CT_DispUnits::has_builtInUnit() const
{
    return m_has_builtInUnit;
}

CT_BuiltInUnit* CT_DispUnits::mutable_builtInUnit()
{

    m_has_custUnit = false;

    if (m_custUnit)
    {
        delete m_custUnit;
        m_custUnit = NULL;
    }
    ;

    m_has_builtInUnit = true;
    if (!m_builtInUnit)
    {
        m_builtInUnit = new CT_BuiltInUnit();
    }
    return m_builtInUnit;
}

const CT_BuiltInUnit& CT_DispUnits::get_builtInUnit() const
{
    if (m_builtInUnit)
    {
        return *m_builtInUnit;
    }
    return CT_BuiltInUnit::default_instance();
}

bool CT_DispUnits::has_dispUnitsLbl() const
{
    return m_has_dispUnitsLbl;
}

CT_DispUnitsLbl* CT_DispUnits::mutable_dispUnitsLbl()
{
    m_has_dispUnitsLbl = true;
    if (!m_dispUnitsLbl)
    {
        m_dispUnitsLbl = new CT_DispUnitsLbl();
    }
    return m_dispUnitsLbl;
}

const CT_DispUnitsLbl& CT_DispUnits::get_dispUnitsLbl() const
{
    if (m_dispUnitsLbl)
    {
        return *m_dispUnitsLbl;
    }
    return CT_DispUnitsLbl::default_instance();
}

bool CT_DispUnits::has_extLst() const
{
    return m_has_extLst;
}

CT_ExtensionList* CT_DispUnits::mutable_extLst()
{
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new CT_ExtensionList();
    }
    return m_extLst;
}

const CT_ExtensionList& CT_DispUnits::get_extLst() const
{
    if (m_extLst)
    {
        return *m_extLst;
    }
    return CT_ExtensionList::default_instance();
}

void CT_DispUnits::clear()
{
    m_has_custUnit = false;

    if (m_custUnit)
    {
        delete m_custUnit;
        m_custUnit = NULL;
    }


    m_has_builtInUnit = false;

    if (m_builtInUnit)
    {
        delete m_builtInUnit;
        m_builtInUnit = NULL;
    }


    m_has_dispUnitsLbl = false;

    if (m_dispUnitsLbl)
    {
        delete m_dispUnitsLbl;
        m_dispUnitsLbl = NULL;
    }


    m_has_extLst = false;

    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }

}

void CT_DispUnits::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";

    {
        bool elemHasValueList[2] = {m_has_custUnit, m_has_builtInUnit};
        int cnt = count(elemHasValueList, elemHasValueList + 2, true);
        assert(cnt == 1);
    }


    if (m_has_custUnit)
    {
        m_custUnit->toXmlElem("c:custUnit", "", _outStream);
    }


    if (m_has_builtInUnit)
    {
        m_builtInUnit->toXmlElem("c:builtInUnit", "", _outStream);
    }


    if (m_has_dispUnitsLbl)
    {
        m_dispUnitsLbl->toXmlElem("c:dispUnitsLbl", "", _outStream);
    }


    if (m_has_extLst)
    {
        m_extLst->toXmlElem("c:extLst", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_DispUnits& CT_DispUnits::default_instance()
{
    if (!CT_DispUnits::default_instance_)
    {
        CT_DispUnits::default_instance_ = new CT_DispUnits();
    }
    return *CT_DispUnits::default_instance_;
}

CT_DispUnits* CT_DispUnits::default_instance_ = NULL;

// CT_Orientation
CT_Orientation::CT_Orientation()
    :m_has_val_attr(false),
     m_val_attr(NULL)
{
}
CT_Orientation::~CT_Orientation()
{
    clear();
}
void CT_Orientation::clear()
{
    m_has_val_attr = false;

    if (m_val_attr)
    {
        delete m_val_attr;
        m_val_attr = NULL;
    }

}

void CT_Orientation::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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

const CT_Orientation& CT_Orientation::default_instance()
{
    if (!CT_Orientation::default_instance_)
    {
        CT_Orientation::default_instance_ = new CT_Orientation();
    }
    return *CT_Orientation::default_instance_;
}

bool CT_Orientation::has_val_attr() const
{
    return m_has_val_attr;
}

void CT_Orientation::set_val_attr(const ST_Orientation& _val_attr)
{
    m_has_val_attr = true;
    m_val_attr = new ST_Orientation(_val_attr);
}

const ST_Orientation& CT_Orientation::get_val_attr() const
{
    if (m_val_attr)
    {
        return *m_val_attr;
    }
    return ST_Orientation::default_instance();
}

CT_Orientation* CT_Orientation::default_instance_ = NULL;

// CT_LogBase
CT_LogBase::CT_LogBase()
    :m_has_val_attr(false),
     m_val_attr(NULL)
{
}
CT_LogBase::~CT_LogBase()
{
    clear();
}
void CT_LogBase::clear()
{
    m_has_val_attr = false;

    if (m_val_attr)
    {
        delete m_val_attr;
        m_val_attr = NULL;
    }

}

void CT_LogBase::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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

const CT_LogBase& CT_LogBase::default_instance()
{
    if (!CT_LogBase::default_instance_)
    {
        CT_LogBase::default_instance_ = new CT_LogBase();
    }
    return *CT_LogBase::default_instance_;
}

bool CT_LogBase::has_val_attr() const
{
    return m_has_val_attr;
}

void CT_LogBase::set_val_attr(const ST_LogBase& _val_attr)
{
    m_has_val_attr = true;
    m_val_attr = new ST_LogBase(_val_attr);
}

const ST_LogBase& CT_LogBase::get_val_attr() const
{
    if (m_val_attr)
    {
        return *m_val_attr;
    }
    return ST_LogBase::default_instance();
}

CT_LogBase* CT_LogBase::default_instance_ = NULL;

// CT_Scaling
CT_Scaling::CT_Scaling()
    :m_has_logBase(false),
     m_logBase(NULL),
     m_has_orientation(false),
     m_orientation(NULL),
     m_has_max(false),
     m_max(NULL),
     m_has_min(false),
     m_min(NULL),
     m_has_extLst(false),
     m_extLst(NULL)
{
}
CT_Scaling::~CT_Scaling()
{
    clear();
}
bool CT_Scaling::has_logBase() const
{
    return m_has_logBase;
}

CT_LogBase* CT_Scaling::mutable_logBase()
{
    m_has_logBase = true;
    if (!m_logBase)
    {
        m_logBase = new CT_LogBase();
    }
    return m_logBase;
}

const CT_LogBase& CT_Scaling::get_logBase() const
{
    if (m_logBase)
    {
        return *m_logBase;
    }
    return CT_LogBase::default_instance();
}

bool CT_Scaling::has_orientation() const
{
    return m_has_orientation;
}

CT_Orientation* CT_Scaling::mutable_orientation()
{
    m_has_orientation = true;
    if (!m_orientation)
    {
        m_orientation = new CT_Orientation();
    }
    return m_orientation;
}

const CT_Orientation& CT_Scaling::get_orientation() const
{
    if (m_orientation)
    {
        return *m_orientation;
    }
    return CT_Orientation::default_instance();
}

bool CT_Scaling::has_max() const
{
    return m_has_max;
}

CT_Double* CT_Scaling::mutable_max()
{
    m_has_max = true;
    if (!m_max)
    {
        m_max = new CT_Double();
    }
    return m_max;
}

const CT_Double& CT_Scaling::get_max() const
{
    if (m_max)
    {
        return *m_max;
    }
    return CT_Double::default_instance();
}

bool CT_Scaling::has_min() const
{
    return m_has_min;
}

CT_Double* CT_Scaling::mutable_min()
{
    m_has_min = true;
    if (!m_min)
    {
        m_min = new CT_Double();
    }
    return m_min;
}

const CT_Double& CT_Scaling::get_min() const
{
    if (m_min)
    {
        return *m_min;
    }
    return CT_Double::default_instance();
}

bool CT_Scaling::has_extLst() const
{
    return m_has_extLst;
}

CT_ExtensionList* CT_Scaling::mutable_extLst()
{
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new CT_ExtensionList();
    }
    return m_extLst;
}

const CT_ExtensionList& CT_Scaling::get_extLst() const
{
    if (m_extLst)
    {
        return *m_extLst;
    }
    return CT_ExtensionList::default_instance();
}

void CT_Scaling::clear()
{
    m_has_logBase = false;

    if (m_logBase)
    {
        delete m_logBase;
        m_logBase = NULL;
    }


    m_has_orientation = false;

    if (m_orientation)
    {
        delete m_orientation;
        m_orientation = NULL;
    }


    m_has_max = false;

    if (m_max)
    {
        delete m_max;
        m_max = NULL;
    }


    m_has_min = false;

    if (m_min)
    {
        delete m_min;
        m_min = NULL;
    }


    m_has_extLst = false;

    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }

}

void CT_Scaling::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";


    if (m_has_logBase)
    {
        m_logBase->toXmlElem("c:logBase", "", _outStream);
    }


    if (m_has_orientation)
    {
        m_orientation->toXmlElem("c:orientation", "", _outStream);
    }


    if (m_has_max)
    {
        m_max->toXmlElem("c:max", "", _outStream);
    }


    if (m_has_min)
    {
        m_min->toXmlElem("c:min", "", _outStream);
    }


    if (m_has_extLst)
    {
        m_extLst->toXmlElem("c:extLst", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_Scaling& CT_Scaling::default_instance()
{
    if (!CT_Scaling::default_instance_)
    {
        CT_Scaling::default_instance_ = new CT_Scaling();
    }
    return *CT_Scaling::default_instance_;
}

CT_Scaling* CT_Scaling::default_instance_ = NULL;

// CT_LblOffset
CT_LblOffset::CT_LblOffset()
    :m_has_val_attr(false),
     m_val_attr(NULL)
{
}
CT_LblOffset::~CT_LblOffset()
{
    clear();
}
void CT_LblOffset::clear()
{
    m_has_val_attr = false;

    if (m_val_attr)
    {
        delete m_val_attr;
        m_val_attr = NULL;
    }

}

void CT_LblOffset::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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

const CT_LblOffset& CT_LblOffset::default_instance()
{
    if (!CT_LblOffset::default_instance_)
    {
        CT_LblOffset::default_instance_ = new CT_LblOffset();
    }
    return *CT_LblOffset::default_instance_;
}

bool CT_LblOffset::has_val_attr() const
{
    return m_has_val_attr;
}

void CT_LblOffset::set_val_attr(const ST_LblOffset& _val_attr)
{
    m_has_val_attr = true;
    m_val_attr = new ST_LblOffset(_val_attr);
}

const ST_LblOffset& CT_LblOffset::get_val_attr() const
{
    if (m_val_attr)
    {
        return *m_val_attr;
    }
    return ST_LblOffset::default_instance();
}

CT_LblOffset* CT_LblOffset::default_instance_ = NULL;

// CT_CatAx
CT_CatAx::CT_CatAx()
    :m_has_axId(false),
     m_axId(NULL),
     m_has_scaling(false),
     m_scaling(NULL),
     m_has_delete(false),
     m_delete(NULL),
     m_has_axPos(false),
     m_axPos(NULL),
     m_has_majorGridlines(false),
     m_majorGridlines(NULL),
     m_has_minorGridlines(false),
     m_minorGridlines(NULL),
     m_has_title(false),
     m_title(NULL),
     m_has_numFmt(false),
     m_numFmt(NULL),
     m_has_majorTickMark(false),
     m_majorTickMark(NULL),
     m_has_minorTickMark(false),
     m_minorTickMark(NULL),
     m_has_tickLblPos(false),
     m_tickLblPos(NULL),
     m_has_spPr(false),
     m_spPr(NULL),
     m_has_txPr(false),
     m_txPr(NULL),
     m_has_crossAx(false),
     m_crossAx(NULL),
     m_has_crosses(false),
     m_crosses(NULL),
     m_has_crossesAt(false),
     m_crossesAt(NULL),
     m_has_auto(false),
     m_auto(NULL),
     m_has_lblAlgn(false),
     m_lblAlgn(NULL),
     m_has_lblOffset(false),
     m_lblOffset(NULL),
     m_has_tickLblSkip(false),
     m_tickLblSkip(NULL),
     m_has_tickMarkSkip(false),
     m_tickMarkSkip(NULL),
     m_has_noMultiLvlLbl(false),
     m_noMultiLvlLbl(NULL),
     m_has_extLst(false),
     m_extLst(NULL)
{
}
CT_CatAx::~CT_CatAx()
{
    clear();
}
bool CT_CatAx::has_axId() const
{
    return m_has_axId;
}

CT_UnsignedInt* CT_CatAx::mutable_axId()
{
    m_has_axId = true;
    if (!m_axId)
    {
        m_axId = new CT_UnsignedInt();
    }
    return m_axId;
}

const CT_UnsignedInt& CT_CatAx::get_axId() const
{
    if (m_axId)
    {
        return *m_axId;
    }
    return CT_UnsignedInt::default_instance();
}

bool CT_CatAx::has_scaling() const
{
    return m_has_scaling;
}

CT_Scaling* CT_CatAx::mutable_scaling()
{
    m_has_scaling = true;
    if (!m_scaling)
    {
        m_scaling = new CT_Scaling();
    }
    return m_scaling;
}

const CT_Scaling& CT_CatAx::get_scaling() const
{
    if (m_scaling)
    {
        return *m_scaling;
    }
    return CT_Scaling::default_instance();
}

bool CT_CatAx::has_delete() const
{
    return m_has_delete;
}

CT_Boolean* CT_CatAx::mutable_delete()
{
    m_has_delete = true;
    if (!m_delete)
    {
        m_delete = new CT_Boolean();
    }
    return m_delete;
}

const CT_Boolean& CT_CatAx::get_delete() const
{
    if (m_delete)
    {
        return *m_delete;
    }
    return CT_Boolean::default_instance();
}

bool CT_CatAx::has_axPos() const
{
    return m_has_axPos;
}

CT_AxPos* CT_CatAx::mutable_axPos()
{
    m_has_axPos = true;
    if (!m_axPos)
    {
        m_axPos = new CT_AxPos();
    }
    return m_axPos;
}

const CT_AxPos& CT_CatAx::get_axPos() const
{
    if (m_axPos)
    {
        return *m_axPos;
    }
    return CT_AxPos::default_instance();
}

bool CT_CatAx::has_majorGridlines() const
{
    return m_has_majorGridlines;
}

CT_ChartLines* CT_CatAx::mutable_majorGridlines()
{
    m_has_majorGridlines = true;
    if (!m_majorGridlines)
    {
        m_majorGridlines = new CT_ChartLines();
    }
    return m_majorGridlines;
}

const CT_ChartLines& CT_CatAx::get_majorGridlines() const
{
    if (m_majorGridlines)
    {
        return *m_majorGridlines;
    }
    return CT_ChartLines::default_instance();
}

bool CT_CatAx::has_minorGridlines() const
{
    return m_has_minorGridlines;
}

CT_ChartLines* CT_CatAx::mutable_minorGridlines()
{
    m_has_minorGridlines = true;
    if (!m_minorGridlines)
    {
        m_minorGridlines = new CT_ChartLines();
    }
    return m_minorGridlines;
}

const CT_ChartLines& CT_CatAx::get_minorGridlines() const
{
    if (m_minorGridlines)
    {
        return *m_minorGridlines;
    }
    return CT_ChartLines::default_instance();
}

bool CT_CatAx::has_title() const
{
    return m_has_title;
}

CT_Title* CT_CatAx::mutable_title()
{
    m_has_title = true;
    if (!m_title)
    {
        m_title = new CT_Title();
    }
    return m_title;
}

const CT_Title& CT_CatAx::get_title() const
{
    if (m_title)
    {
        return *m_title;
    }
    return CT_Title::default_instance();
}

bool CT_CatAx::has_numFmt() const
{
    return m_has_numFmt;
}

CT_NumFmt* CT_CatAx::mutable_numFmt()
{
    m_has_numFmt = true;
    if (!m_numFmt)
    {
        m_numFmt = new CT_NumFmt();
    }
    return m_numFmt;
}

const CT_NumFmt& CT_CatAx::get_numFmt() const
{
    if (m_numFmt)
    {
        return *m_numFmt;
    }
    return CT_NumFmt::default_instance();
}

bool CT_CatAx::has_majorTickMark() const
{
    return m_has_majorTickMark;
}

CT_TickMark* CT_CatAx::mutable_majorTickMark()
{
    m_has_majorTickMark = true;
    if (!m_majorTickMark)
    {
        m_majorTickMark = new CT_TickMark();
    }
    return m_majorTickMark;
}

const CT_TickMark& CT_CatAx::get_majorTickMark() const
{
    if (m_majorTickMark)
    {
        return *m_majorTickMark;
    }
    return CT_TickMark::default_instance();
}

bool CT_CatAx::has_minorTickMark() const
{
    return m_has_minorTickMark;
}

CT_TickMark* CT_CatAx::mutable_minorTickMark()
{
    m_has_minorTickMark = true;
    if (!m_minorTickMark)
    {
        m_minorTickMark = new CT_TickMark();
    }
    return m_minorTickMark;
}

const CT_TickMark& CT_CatAx::get_minorTickMark() const
{
    if (m_minorTickMark)
    {
        return *m_minorTickMark;
    }
    return CT_TickMark::default_instance();
}

bool CT_CatAx::has_tickLblPos() const
{
    return m_has_tickLblPos;
}

CT_TickLblPos* CT_CatAx::mutable_tickLblPos()
{
    m_has_tickLblPos = true;
    if (!m_tickLblPos)
    {
        m_tickLblPos = new CT_TickLblPos();
    }
    return m_tickLblPos;
}

const CT_TickLblPos& CT_CatAx::get_tickLblPos() const
{
    if (m_tickLblPos)
    {
        return *m_tickLblPos;
    }
    return CT_TickLblPos::default_instance();
}

bool CT_CatAx::has_spPr() const
{
    return m_has_spPr;
}

ns_a::CT_ShapeProperties* CT_CatAx::mutable_spPr()
{
    m_has_spPr = true;
    if (!m_spPr)
    {
        m_spPr = new ns_a::CT_ShapeProperties();
    }
    return m_spPr;
}

const ns_a::CT_ShapeProperties& CT_CatAx::get_spPr() const
{
    if (m_spPr)
    {
        return *m_spPr;
    }
    return ns_a::CT_ShapeProperties::default_instance();
}

bool CT_CatAx::has_txPr() const
{
    return m_has_txPr;
}

ns_a::CT_TextBody* CT_CatAx::mutable_txPr()
{
    m_has_txPr = true;
    if (!m_txPr)
    {
        m_txPr = new ns_a::CT_TextBody();
    }
    return m_txPr;
}

const ns_a::CT_TextBody& CT_CatAx::get_txPr() const
{
    if (m_txPr)
    {
        return *m_txPr;
    }
    return ns_a::CT_TextBody::default_instance();
}

bool CT_CatAx::has_crossAx() const
{
    return m_has_crossAx;
}

CT_UnsignedInt* CT_CatAx::mutable_crossAx()
{
    m_has_crossAx = true;
    if (!m_crossAx)
    {
        m_crossAx = new CT_UnsignedInt();
    }
    return m_crossAx;
}

const CT_UnsignedInt& CT_CatAx::get_crossAx() const
{
    if (m_crossAx)
    {
        return *m_crossAx;
    }
    return CT_UnsignedInt::default_instance();
}

bool CT_CatAx::has_crosses() const
{
    return m_has_crosses;
}

CT_Crosses* CT_CatAx::mutable_crosses()
{

    m_has_crossesAt = false;

    if (m_crossesAt)
    {
        delete m_crossesAt;
        m_crossesAt = NULL;
    }
    ;

    m_has_crosses = true;
    if (!m_crosses)
    {
        m_crosses = new CT_Crosses();
    }
    return m_crosses;
}

const CT_Crosses& CT_CatAx::get_crosses() const
{
    if (m_crosses)
    {
        return *m_crosses;
    }
    return CT_Crosses::default_instance();
}

bool CT_CatAx::has_crossesAt() const
{
    return m_has_crossesAt;
}

CT_Double* CT_CatAx::mutable_crossesAt()
{

    m_has_crosses = false;

    if (m_crosses)
    {
        delete m_crosses;
        m_crosses = NULL;
    }
    ;

    m_has_crossesAt = true;
    if (!m_crossesAt)
    {
        m_crossesAt = new CT_Double();
    }
    return m_crossesAt;
}

const CT_Double& CT_CatAx::get_crossesAt() const
{
    if (m_crossesAt)
    {
        return *m_crossesAt;
    }
    return CT_Double::default_instance();
}

bool CT_CatAx::has_auto() const
{
    return m_has_auto;
}

CT_Boolean* CT_CatAx::mutable_auto()
{
    m_has_auto = true;
    if (!m_auto)
    {
        m_auto = new CT_Boolean();
    }
    return m_auto;
}

const CT_Boolean& CT_CatAx::get_auto() const
{
    if (m_auto)
    {
        return *m_auto;
    }
    return CT_Boolean::default_instance();
}

bool CT_CatAx::has_lblAlgn() const
{
    return m_has_lblAlgn;
}

CT_LblAlgn* CT_CatAx::mutable_lblAlgn()
{
    m_has_lblAlgn = true;
    if (!m_lblAlgn)
    {
        m_lblAlgn = new CT_LblAlgn();
    }
    return m_lblAlgn;
}

const CT_LblAlgn& CT_CatAx::get_lblAlgn() const
{
    if (m_lblAlgn)
    {
        return *m_lblAlgn;
    }
    return CT_LblAlgn::default_instance();
}

bool CT_CatAx::has_lblOffset() const
{
    return m_has_lblOffset;
}

CT_LblOffset* CT_CatAx::mutable_lblOffset()
{
    m_has_lblOffset = true;
    if (!m_lblOffset)
    {
        m_lblOffset = new CT_LblOffset();
    }
    return m_lblOffset;
}

const CT_LblOffset& CT_CatAx::get_lblOffset() const
{
    if (m_lblOffset)
    {
        return *m_lblOffset;
    }
    return CT_LblOffset::default_instance();
}

bool CT_CatAx::has_tickLblSkip() const
{
    return m_has_tickLblSkip;
}

CT_Skip* CT_CatAx::mutable_tickLblSkip()
{
    m_has_tickLblSkip = true;
    if (!m_tickLblSkip)
    {
        m_tickLblSkip = new CT_Skip();
    }
    return m_tickLblSkip;
}

const CT_Skip& CT_CatAx::get_tickLblSkip() const
{
    if (m_tickLblSkip)
    {
        return *m_tickLblSkip;
    }
    return CT_Skip::default_instance();
}

bool CT_CatAx::has_tickMarkSkip() const
{
    return m_has_tickMarkSkip;
}

CT_Skip* CT_CatAx::mutable_tickMarkSkip()
{
    m_has_tickMarkSkip = true;
    if (!m_tickMarkSkip)
    {
        m_tickMarkSkip = new CT_Skip();
    }
    return m_tickMarkSkip;
}

const CT_Skip& CT_CatAx::get_tickMarkSkip() const
{
    if (m_tickMarkSkip)
    {
        return *m_tickMarkSkip;
    }
    return CT_Skip::default_instance();
}

bool CT_CatAx::has_noMultiLvlLbl() const
{
    return m_has_noMultiLvlLbl;
}

CT_Boolean* CT_CatAx::mutable_noMultiLvlLbl()
{
    m_has_noMultiLvlLbl = true;
    if (!m_noMultiLvlLbl)
    {
        m_noMultiLvlLbl = new CT_Boolean();
    }
    return m_noMultiLvlLbl;
}

const CT_Boolean& CT_CatAx::get_noMultiLvlLbl() const
{
    if (m_noMultiLvlLbl)
    {
        return *m_noMultiLvlLbl;
    }
    return CT_Boolean::default_instance();
}

bool CT_CatAx::has_extLst() const
{
    return m_has_extLst;
}

CT_ExtensionList* CT_CatAx::mutable_extLst()
{
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new CT_ExtensionList();
    }
    return m_extLst;
}

const CT_ExtensionList& CT_CatAx::get_extLst() const
{
    if (m_extLst)
    {
        return *m_extLst;
    }
    return CT_ExtensionList::default_instance();
}

void CT_CatAx::clear()
{
    m_has_axId = false;

    if (m_axId)
    {
        delete m_axId;
        m_axId = NULL;
    }


    m_has_scaling = false;

    if (m_scaling)
    {
        delete m_scaling;
        m_scaling = NULL;
    }


    m_has_delete = false;

    if (m_delete)
    {
        delete m_delete;
        m_delete = NULL;
    }


    m_has_axPos = false;

    if (m_axPos)
    {
        delete m_axPos;
        m_axPos = NULL;
    }


    m_has_majorGridlines = false;

    if (m_majorGridlines)
    {
        delete m_majorGridlines;
        m_majorGridlines = NULL;
    }


    m_has_minorGridlines = false;

    if (m_minorGridlines)
    {
        delete m_minorGridlines;
        m_minorGridlines = NULL;
    }


    m_has_title = false;

    if (m_title)
    {
        delete m_title;
        m_title = NULL;
    }


    m_has_numFmt = false;

    if (m_numFmt)
    {
        delete m_numFmt;
        m_numFmt = NULL;
    }


    m_has_majorTickMark = false;

    if (m_majorTickMark)
    {
        delete m_majorTickMark;
        m_majorTickMark = NULL;
    }


    m_has_minorTickMark = false;

    if (m_minorTickMark)
    {
        delete m_minorTickMark;
        m_minorTickMark = NULL;
    }


    m_has_tickLblPos = false;

    if (m_tickLblPos)
    {
        delete m_tickLblPos;
        m_tickLblPos = NULL;
    }


    m_has_spPr = false;

    if (m_spPr)
    {
        delete m_spPr;
        m_spPr = NULL;
    }


    m_has_txPr = false;

    if (m_txPr)
    {
        delete m_txPr;
        m_txPr = NULL;
    }


    m_has_crossAx = false;

    if (m_crossAx)
    {
        delete m_crossAx;
        m_crossAx = NULL;
    }


    m_has_crosses = false;

    if (m_crosses)
    {
        delete m_crosses;
        m_crosses = NULL;
    }


    m_has_crossesAt = false;

    if (m_crossesAt)
    {
        delete m_crossesAt;
        m_crossesAt = NULL;
    }


    m_has_auto = false;

    if (m_auto)
    {
        delete m_auto;
        m_auto = NULL;
    }


    m_has_lblAlgn = false;

    if (m_lblAlgn)
    {
        delete m_lblAlgn;
        m_lblAlgn = NULL;
    }


    m_has_lblOffset = false;

    if (m_lblOffset)
    {
        delete m_lblOffset;
        m_lblOffset = NULL;
    }


    m_has_tickLblSkip = false;

    if (m_tickLblSkip)
    {
        delete m_tickLblSkip;
        m_tickLblSkip = NULL;
    }


    m_has_tickMarkSkip = false;

    if (m_tickMarkSkip)
    {
        delete m_tickMarkSkip;
        m_tickMarkSkip = NULL;
    }


    m_has_noMultiLvlLbl = false;

    if (m_noMultiLvlLbl)
    {
        delete m_noMultiLvlLbl;
        m_noMultiLvlLbl = NULL;
    }


    m_has_extLst = false;

    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }

}

void CT_CatAx::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";

    assert(m_has_axId);


    assert(m_has_scaling);


    assert(m_has_axPos);


    assert(m_has_crossAx);


    if (m_has_axId)
    {
        m_axId->toXmlElem("c:axId", "", _outStream);
    }


    if (m_has_scaling)
    {
        m_scaling->toXmlElem("c:scaling", "", _outStream);
    }


    if (m_has_delete)
    {
        m_delete->toXmlElem("c:delete", "", _outStream);
    }


    if (m_has_axPos)
    {
        m_axPos->toXmlElem("c:axPos", "", _outStream);
    }


    if (m_has_majorGridlines)
    {
        m_majorGridlines->toXmlElem("c:majorGridlines", "", _outStream);
    }


    if (m_has_minorGridlines)
    {
        m_minorGridlines->toXmlElem("c:minorGridlines", "", _outStream);
    }


    if (m_has_title)
    {
        m_title->toXmlElem("c:title", "", _outStream);
    }


    if (m_has_numFmt)
    {
        m_numFmt->toXmlElem("c:numFmt", "", _outStream);
    }


    if (m_has_majorTickMark)
    {
        m_majorTickMark->toXmlElem("c:majorTickMark", "", _outStream);
    }


    if (m_has_minorTickMark)
    {
        m_minorTickMark->toXmlElem("c:minorTickMark", "", _outStream);
    }


    if (m_has_tickLblPos)
    {
        m_tickLblPos->toXmlElem("c:tickLblPos", "", _outStream);
    }


    if (m_has_spPr)
    {
        m_spPr->toXmlElem("c:spPr", "", _outStream);
    }


    if (m_has_txPr)
    {
        m_txPr->toXmlElem("c:txPr", "", _outStream);
    }


    if (m_has_crossAx)
    {
        m_crossAx->toXmlElem("c:crossAx", "", _outStream);
    }

    {
        bool elemHasValueList[2] = {m_has_crosses, m_has_crossesAt};
        int cnt = count(elemHasValueList, elemHasValueList + 2, true);
        assert(cnt == 0 || cnt == 1);
    }


    if (m_has_crosses)
    {
        m_crosses->toXmlElem("c:crosses", "", _outStream);
    }


    if (m_has_crossesAt)
    {
        m_crossesAt->toXmlElem("c:crossesAt", "", _outStream);
    }


    if (m_has_auto)
    {
        m_auto->toXmlElem("c:auto", "", _outStream);
    }


    if (m_has_lblAlgn)
    {
        m_lblAlgn->toXmlElem("c:lblAlgn", "", _outStream);
    }


    if (m_has_lblOffset)
    {
        m_lblOffset->toXmlElem("c:lblOffset", "", _outStream);
    }


    if (m_has_tickLblSkip)
    {
        m_tickLblSkip->toXmlElem("c:tickLblSkip", "", _outStream);
    }


    if (m_has_tickMarkSkip)
    {
        m_tickMarkSkip->toXmlElem("c:tickMarkSkip", "", _outStream);
    }


    if (m_has_noMultiLvlLbl)
    {
        m_noMultiLvlLbl->toXmlElem("c:noMultiLvlLbl", "", _outStream);
    }


    if (m_has_extLst)
    {
        m_extLst->toXmlElem("c:extLst", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_CatAx& CT_CatAx::default_instance()
{
    if (!CT_CatAx::default_instance_)
    {
        CT_CatAx::default_instance_ = new CT_CatAx();
    }
    return *CT_CatAx::default_instance_;
}

CT_CatAx* CT_CatAx::default_instance_ = NULL;

// CT_DateAx
CT_DateAx::CT_DateAx()
    :m_has_axId(false),
     m_axId(NULL),
     m_has_scaling(false),
     m_scaling(NULL),
     m_has_delete(false),
     m_delete(NULL),
     m_has_axPos(false),
     m_axPos(NULL),
     m_has_majorGridlines(false),
     m_majorGridlines(NULL),
     m_has_minorGridlines(false),
     m_minorGridlines(NULL),
     m_has_title(false),
     m_title(NULL),
     m_has_numFmt(false),
     m_numFmt(NULL),
     m_has_majorTickMark(false),
     m_majorTickMark(NULL),
     m_has_minorTickMark(false),
     m_minorTickMark(NULL),
     m_has_tickLblPos(false),
     m_tickLblPos(NULL),
     m_has_spPr(false),
     m_spPr(NULL),
     m_has_txPr(false),
     m_txPr(NULL),
     m_has_crossAx(false),
     m_crossAx(NULL),
     m_has_crosses(false),
     m_crosses(NULL),
     m_has_crossesAt(false),
     m_crossesAt(NULL),
     m_has_auto(false),
     m_auto(NULL),
     m_has_lblOffset(false),
     m_lblOffset(NULL),
     m_has_baseTimeUnit(false),
     m_baseTimeUnit(NULL),
     m_has_majorUnit(false),
     m_majorUnit(NULL),
     m_has_majorTimeUnit(false),
     m_majorTimeUnit(NULL),
     m_has_minorUnit(false),
     m_minorUnit(NULL),
     m_has_minorTimeUnit(false),
     m_minorTimeUnit(NULL),
     m_has_extLst(false),
     m_extLst(NULL)
{
}
CT_DateAx::~CT_DateAx()
{
    clear();
}
bool CT_DateAx::has_axId() const
{
    return m_has_axId;
}

CT_UnsignedInt* CT_DateAx::mutable_axId()
{
    m_has_axId = true;
    if (!m_axId)
    {
        m_axId = new CT_UnsignedInt();
    }
    return m_axId;
}

const CT_UnsignedInt& CT_DateAx::get_axId() const
{
    if (m_axId)
    {
        return *m_axId;
    }
    return CT_UnsignedInt::default_instance();
}

bool CT_DateAx::has_scaling() const
{
    return m_has_scaling;
}

CT_Scaling* CT_DateAx::mutable_scaling()
{
    m_has_scaling = true;
    if (!m_scaling)
    {
        m_scaling = new CT_Scaling();
    }
    return m_scaling;
}

const CT_Scaling& CT_DateAx::get_scaling() const
{
    if (m_scaling)
    {
        return *m_scaling;
    }
    return CT_Scaling::default_instance();
}

bool CT_DateAx::has_delete() const
{
    return m_has_delete;
}

CT_Boolean* CT_DateAx::mutable_delete()
{
    m_has_delete = true;
    if (!m_delete)
    {
        m_delete = new CT_Boolean();
    }
    return m_delete;
}

const CT_Boolean& CT_DateAx::get_delete() const
{
    if (m_delete)
    {
        return *m_delete;
    }
    return CT_Boolean::default_instance();
}

bool CT_DateAx::has_axPos() const
{
    return m_has_axPos;
}

CT_AxPos* CT_DateAx::mutable_axPos()
{
    m_has_axPos = true;
    if (!m_axPos)
    {
        m_axPos = new CT_AxPos();
    }
    return m_axPos;
}

const CT_AxPos& CT_DateAx::get_axPos() const
{
    if (m_axPos)
    {
        return *m_axPos;
    }
    return CT_AxPos::default_instance();
}

bool CT_DateAx::has_majorGridlines() const
{
    return m_has_majorGridlines;
}

CT_ChartLines* CT_DateAx::mutable_majorGridlines()
{
    m_has_majorGridlines = true;
    if (!m_majorGridlines)
    {
        m_majorGridlines = new CT_ChartLines();
    }
    return m_majorGridlines;
}

const CT_ChartLines& CT_DateAx::get_majorGridlines() const
{
    if (m_majorGridlines)
    {
        return *m_majorGridlines;
    }
    return CT_ChartLines::default_instance();
}

bool CT_DateAx::has_minorGridlines() const
{
    return m_has_minorGridlines;
}

CT_ChartLines* CT_DateAx::mutable_minorGridlines()
{
    m_has_minorGridlines = true;
    if (!m_minorGridlines)
    {
        m_minorGridlines = new CT_ChartLines();
    }
    return m_minorGridlines;
}

const CT_ChartLines& CT_DateAx::get_minorGridlines() const
{
    if (m_minorGridlines)
    {
        return *m_minorGridlines;
    }
    return CT_ChartLines::default_instance();
}

bool CT_DateAx::has_title() const
{
    return m_has_title;
}

CT_Title* CT_DateAx::mutable_title()
{
    m_has_title = true;
    if (!m_title)
    {
        m_title = new CT_Title();
    }
    return m_title;
}

const CT_Title& CT_DateAx::get_title() const
{
    if (m_title)
    {
        return *m_title;
    }
    return CT_Title::default_instance();
}

bool CT_DateAx::has_numFmt() const
{
    return m_has_numFmt;
}

CT_NumFmt* CT_DateAx::mutable_numFmt()
{
    m_has_numFmt = true;
    if (!m_numFmt)
    {
        m_numFmt = new CT_NumFmt();
    }
    return m_numFmt;
}

const CT_NumFmt& CT_DateAx::get_numFmt() const
{
    if (m_numFmt)
    {
        return *m_numFmt;
    }
    return CT_NumFmt::default_instance();
}

bool CT_DateAx::has_majorTickMark() const
{
    return m_has_majorTickMark;
}

CT_TickMark* CT_DateAx::mutable_majorTickMark()
{
    m_has_majorTickMark = true;
    if (!m_majorTickMark)
    {
        m_majorTickMark = new CT_TickMark();
    }
    return m_majorTickMark;
}

const CT_TickMark& CT_DateAx::get_majorTickMark() const
{
    if (m_majorTickMark)
    {
        return *m_majorTickMark;
    }
    return CT_TickMark::default_instance();
}

bool CT_DateAx::has_minorTickMark() const
{
    return m_has_minorTickMark;
}

CT_TickMark* CT_DateAx::mutable_minorTickMark()
{
    m_has_minorTickMark = true;
    if (!m_minorTickMark)
    {
        m_minorTickMark = new CT_TickMark();
    }
    return m_minorTickMark;
}

const CT_TickMark& CT_DateAx::get_minorTickMark() const
{
    if (m_minorTickMark)
    {
        return *m_minorTickMark;
    }
    return CT_TickMark::default_instance();
}

bool CT_DateAx::has_tickLblPos() const
{
    return m_has_tickLblPos;
}

CT_TickLblPos* CT_DateAx::mutable_tickLblPos()
{
    m_has_tickLblPos = true;
    if (!m_tickLblPos)
    {
        m_tickLblPos = new CT_TickLblPos();
    }
    return m_tickLblPos;
}

const CT_TickLblPos& CT_DateAx::get_tickLblPos() const
{
    if (m_tickLblPos)
    {
        return *m_tickLblPos;
    }
    return CT_TickLblPos::default_instance();
}

bool CT_DateAx::has_spPr() const
{
    return m_has_spPr;
}

ns_a::CT_ShapeProperties* CT_DateAx::mutable_spPr()
{
    m_has_spPr = true;
    if (!m_spPr)
    {
        m_spPr = new ns_a::CT_ShapeProperties();
    }
    return m_spPr;
}

const ns_a::CT_ShapeProperties& CT_DateAx::get_spPr() const
{
    if (m_spPr)
    {
        return *m_spPr;
    }
    return ns_a::CT_ShapeProperties::default_instance();
}

bool CT_DateAx::has_txPr() const
{
    return m_has_txPr;
}

ns_a::CT_TextBody* CT_DateAx::mutable_txPr()
{
    m_has_txPr = true;
    if (!m_txPr)
    {
        m_txPr = new ns_a::CT_TextBody();
    }
    return m_txPr;
}

const ns_a::CT_TextBody& CT_DateAx::get_txPr() const
{
    if (m_txPr)
    {
        return *m_txPr;
    }
    return ns_a::CT_TextBody::default_instance();
}

bool CT_DateAx::has_crossAx() const
{
    return m_has_crossAx;
}

CT_UnsignedInt* CT_DateAx::mutable_crossAx()
{
    m_has_crossAx = true;
    if (!m_crossAx)
    {
        m_crossAx = new CT_UnsignedInt();
    }
    return m_crossAx;
}

const CT_UnsignedInt& CT_DateAx::get_crossAx() const
{
    if (m_crossAx)
    {
        return *m_crossAx;
    }
    return CT_UnsignedInt::default_instance();
}

bool CT_DateAx::has_crosses() const
{
    return m_has_crosses;
}

CT_Crosses* CT_DateAx::mutable_crosses()
{

    m_has_crossesAt = false;

    if (m_crossesAt)
    {
        delete m_crossesAt;
        m_crossesAt = NULL;
    }
    ;

    m_has_crosses = true;
    if (!m_crosses)
    {
        m_crosses = new CT_Crosses();
    }
    return m_crosses;
}

const CT_Crosses& CT_DateAx::get_crosses() const
{
    if (m_crosses)
    {
        return *m_crosses;
    }
    return CT_Crosses::default_instance();
}

bool CT_DateAx::has_crossesAt() const
{
    return m_has_crossesAt;
}

CT_Double* CT_DateAx::mutable_crossesAt()
{

    m_has_crosses = false;

    if (m_crosses)
    {
        delete m_crosses;
        m_crosses = NULL;
    }
    ;

    m_has_crossesAt = true;
    if (!m_crossesAt)
    {
        m_crossesAt = new CT_Double();
    }
    return m_crossesAt;
}

const CT_Double& CT_DateAx::get_crossesAt() const
{
    if (m_crossesAt)
    {
        return *m_crossesAt;
    }
    return CT_Double::default_instance();
}

bool CT_DateAx::has_auto() const
{
    return m_has_auto;
}

CT_Boolean* CT_DateAx::mutable_auto()
{
    m_has_auto = true;
    if (!m_auto)
    {
        m_auto = new CT_Boolean();
    }
    return m_auto;
}

const CT_Boolean& CT_DateAx::get_auto() const
{
    if (m_auto)
    {
        return *m_auto;
    }
    return CT_Boolean::default_instance();
}

bool CT_DateAx::has_lblOffset() const
{
    return m_has_lblOffset;
}

CT_LblOffset* CT_DateAx::mutable_lblOffset()
{
    m_has_lblOffset = true;
    if (!m_lblOffset)
    {
        m_lblOffset = new CT_LblOffset();
    }
    return m_lblOffset;
}

const CT_LblOffset& CT_DateAx::get_lblOffset() const
{
    if (m_lblOffset)
    {
        return *m_lblOffset;
    }
    return CT_LblOffset::default_instance();
}

bool CT_DateAx::has_baseTimeUnit() const
{
    return m_has_baseTimeUnit;
}

CT_TimeUnit* CT_DateAx::mutable_baseTimeUnit()
{
    m_has_baseTimeUnit = true;
    if (!m_baseTimeUnit)
    {
        m_baseTimeUnit = new CT_TimeUnit();
    }
    return m_baseTimeUnit;
}

const CT_TimeUnit& CT_DateAx::get_baseTimeUnit() const
{
    if (m_baseTimeUnit)
    {
        return *m_baseTimeUnit;
    }
    return CT_TimeUnit::default_instance();
}

bool CT_DateAx::has_majorUnit() const
{
    return m_has_majorUnit;
}

CT_AxisUnit* CT_DateAx::mutable_majorUnit()
{
    m_has_majorUnit = true;
    if (!m_majorUnit)
    {
        m_majorUnit = new CT_AxisUnit();
    }
    return m_majorUnit;
}

const CT_AxisUnit& CT_DateAx::get_majorUnit() const
{
    if (m_majorUnit)
    {
        return *m_majorUnit;
    }
    return CT_AxisUnit::default_instance();
}

bool CT_DateAx::has_majorTimeUnit() const
{
    return m_has_majorTimeUnit;
}

CT_TimeUnit* CT_DateAx::mutable_majorTimeUnit()
{
    m_has_majorTimeUnit = true;
    if (!m_majorTimeUnit)
    {
        m_majorTimeUnit = new CT_TimeUnit();
    }
    return m_majorTimeUnit;
}

const CT_TimeUnit& CT_DateAx::get_majorTimeUnit() const
{
    if (m_majorTimeUnit)
    {
        return *m_majorTimeUnit;
    }
    return CT_TimeUnit::default_instance();
}

bool CT_DateAx::has_minorUnit() const
{
    return m_has_minorUnit;
}

CT_AxisUnit* CT_DateAx::mutable_minorUnit()
{
    m_has_minorUnit = true;
    if (!m_minorUnit)
    {
        m_minorUnit = new CT_AxisUnit();
    }
    return m_minorUnit;
}

const CT_AxisUnit& CT_DateAx::get_minorUnit() const
{
    if (m_minorUnit)
    {
        return *m_minorUnit;
    }
    return CT_AxisUnit::default_instance();
}

bool CT_DateAx::has_minorTimeUnit() const
{
    return m_has_minorTimeUnit;
}

CT_TimeUnit* CT_DateAx::mutable_minorTimeUnit()
{
    m_has_minorTimeUnit = true;
    if (!m_minorTimeUnit)
    {
        m_minorTimeUnit = new CT_TimeUnit();
    }
    return m_minorTimeUnit;
}

const CT_TimeUnit& CT_DateAx::get_minorTimeUnit() const
{
    if (m_minorTimeUnit)
    {
        return *m_minorTimeUnit;
    }
    return CT_TimeUnit::default_instance();
}

bool CT_DateAx::has_extLst() const
{
    return m_has_extLst;
}

CT_ExtensionList* CT_DateAx::mutable_extLst()
{
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new CT_ExtensionList();
    }
    return m_extLst;
}

const CT_ExtensionList& CT_DateAx::get_extLst() const
{
    if (m_extLst)
    {
        return *m_extLst;
    }
    return CT_ExtensionList::default_instance();
}

void CT_DateAx::clear()
{
    m_has_axId = false;

    if (m_axId)
    {
        delete m_axId;
        m_axId = NULL;
    }


    m_has_scaling = false;

    if (m_scaling)
    {
        delete m_scaling;
        m_scaling = NULL;
    }


    m_has_delete = false;

    if (m_delete)
    {
        delete m_delete;
        m_delete = NULL;
    }


    m_has_axPos = false;

    if (m_axPos)
    {
        delete m_axPos;
        m_axPos = NULL;
    }


    m_has_majorGridlines = false;

    if (m_majorGridlines)
    {
        delete m_majorGridlines;
        m_majorGridlines = NULL;
    }


    m_has_minorGridlines = false;

    if (m_minorGridlines)
    {
        delete m_minorGridlines;
        m_minorGridlines = NULL;
    }


    m_has_title = false;

    if (m_title)
    {
        delete m_title;
        m_title = NULL;
    }


    m_has_numFmt = false;

    if (m_numFmt)
    {
        delete m_numFmt;
        m_numFmt = NULL;
    }


    m_has_majorTickMark = false;

    if (m_majorTickMark)
    {
        delete m_majorTickMark;
        m_majorTickMark = NULL;
    }


    m_has_minorTickMark = false;

    if (m_minorTickMark)
    {
        delete m_minorTickMark;
        m_minorTickMark = NULL;
    }


    m_has_tickLblPos = false;

    if (m_tickLblPos)
    {
        delete m_tickLblPos;
        m_tickLblPos = NULL;
    }


    m_has_spPr = false;

    if (m_spPr)
    {
        delete m_spPr;
        m_spPr = NULL;
    }


    m_has_txPr = false;

    if (m_txPr)
    {
        delete m_txPr;
        m_txPr = NULL;
    }


    m_has_crossAx = false;

    if (m_crossAx)
    {
        delete m_crossAx;
        m_crossAx = NULL;
    }


    m_has_crosses = false;

    if (m_crosses)
    {
        delete m_crosses;
        m_crosses = NULL;
    }


    m_has_crossesAt = false;

    if (m_crossesAt)
    {
        delete m_crossesAt;
        m_crossesAt = NULL;
    }


    m_has_auto = false;

    if (m_auto)
    {
        delete m_auto;
        m_auto = NULL;
    }


    m_has_lblOffset = false;

    if (m_lblOffset)
    {
        delete m_lblOffset;
        m_lblOffset = NULL;
    }


    m_has_baseTimeUnit = false;

    if (m_baseTimeUnit)
    {
        delete m_baseTimeUnit;
        m_baseTimeUnit = NULL;
    }


    m_has_majorUnit = false;

    if (m_majorUnit)
    {
        delete m_majorUnit;
        m_majorUnit = NULL;
    }


    m_has_majorTimeUnit = false;

    if (m_majorTimeUnit)
    {
        delete m_majorTimeUnit;
        m_majorTimeUnit = NULL;
    }


    m_has_minorUnit = false;

    if (m_minorUnit)
    {
        delete m_minorUnit;
        m_minorUnit = NULL;
    }


    m_has_minorTimeUnit = false;

    if (m_minorTimeUnit)
    {
        delete m_minorTimeUnit;
        m_minorTimeUnit = NULL;
    }


    m_has_extLst = false;

    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }

}

void CT_DateAx::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";

    assert(m_has_axId);


    assert(m_has_scaling);


    assert(m_has_axPos);


    assert(m_has_crossAx);


    if (m_has_axId)
    {
        m_axId->toXmlElem("c:axId", "", _outStream);
    }


    if (m_has_scaling)
    {
        m_scaling->toXmlElem("c:scaling", "", _outStream);
    }


    if (m_has_delete)
    {
        m_delete->toXmlElem("c:delete", "", _outStream);
    }


    if (m_has_axPos)
    {
        m_axPos->toXmlElem("c:axPos", "", _outStream);
    }


    if (m_has_majorGridlines)
    {
        m_majorGridlines->toXmlElem("c:majorGridlines", "", _outStream);
    }


    if (m_has_minorGridlines)
    {
        m_minorGridlines->toXmlElem("c:minorGridlines", "", _outStream);
    }


    if (m_has_title)
    {
        m_title->toXmlElem("c:title", "", _outStream);
    }


    if (m_has_numFmt)
    {
        m_numFmt->toXmlElem("c:numFmt", "", _outStream);
    }


    if (m_has_majorTickMark)
    {
        m_majorTickMark->toXmlElem("c:majorTickMark", "", _outStream);
    }


    if (m_has_minorTickMark)
    {
        m_minorTickMark->toXmlElem("c:minorTickMark", "", _outStream);
    }


    if (m_has_tickLblPos)
    {
        m_tickLblPos->toXmlElem("c:tickLblPos", "", _outStream);
    }


    if (m_has_spPr)
    {
        m_spPr->toXmlElem("c:spPr", "", _outStream);
    }


    if (m_has_txPr)
    {
        m_txPr->toXmlElem("c:txPr", "", _outStream);
    }


    if (m_has_crossAx)
    {
        m_crossAx->toXmlElem("c:crossAx", "", _outStream);
    }

    {
        bool elemHasValueList[2] = {m_has_crosses, m_has_crossesAt};
        int cnt = count(elemHasValueList, elemHasValueList + 2, true);
        assert(cnt == 0 || cnt == 1);
    }


    if (m_has_crosses)
    {
        m_crosses->toXmlElem("c:crosses", "", _outStream);
    }


    if (m_has_crossesAt)
    {
        m_crossesAt->toXmlElem("c:crossesAt", "", _outStream);
    }


    if (m_has_auto)
    {
        m_auto->toXmlElem("c:auto", "", _outStream);
    }


    if (m_has_lblOffset)
    {
        m_lblOffset->toXmlElem("c:lblOffset", "", _outStream);
    }


    if (m_has_baseTimeUnit)
    {
        m_baseTimeUnit->toXmlElem("c:baseTimeUnit", "", _outStream);
    }


    if (m_has_majorUnit)
    {
        m_majorUnit->toXmlElem("c:majorUnit", "", _outStream);
    }


    if (m_has_majorTimeUnit)
    {
        m_majorTimeUnit->toXmlElem("c:majorTimeUnit", "", _outStream);
    }


    if (m_has_minorUnit)
    {
        m_minorUnit->toXmlElem("c:minorUnit", "", _outStream);
    }


    if (m_has_minorTimeUnit)
    {
        m_minorTimeUnit->toXmlElem("c:minorTimeUnit", "", _outStream);
    }


    if (m_has_extLst)
    {
        m_extLst->toXmlElem("c:extLst", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_DateAx& CT_DateAx::default_instance()
{
    if (!CT_DateAx::default_instance_)
    {
        CT_DateAx::default_instance_ = new CT_DateAx();
    }
    return *CT_DateAx::default_instance_;
}

CT_DateAx* CT_DateAx::default_instance_ = NULL;

// CT_SerAx
CT_SerAx::CT_SerAx()
    :m_has_axId(false),
     m_axId(NULL),
     m_has_scaling(false),
     m_scaling(NULL),
     m_has_delete(false),
     m_delete(NULL),
     m_has_axPos(false),
     m_axPos(NULL),
     m_has_majorGridlines(false),
     m_majorGridlines(NULL),
     m_has_minorGridlines(false),
     m_minorGridlines(NULL),
     m_has_title(false),
     m_title(NULL),
     m_has_numFmt(false),
     m_numFmt(NULL),
     m_has_majorTickMark(false),
     m_majorTickMark(NULL),
     m_has_minorTickMark(false),
     m_minorTickMark(NULL),
     m_has_tickLblPos(false),
     m_tickLblPos(NULL),
     m_has_spPr(false),
     m_spPr(NULL),
     m_has_txPr(false),
     m_txPr(NULL),
     m_has_crossAx(false),
     m_crossAx(NULL),
     m_has_crosses(false),
     m_crosses(NULL),
     m_has_crossesAt(false),
     m_crossesAt(NULL),
     m_has_tickLblSkip(false),
     m_tickLblSkip(NULL),
     m_has_tickMarkSkip(false),
     m_tickMarkSkip(NULL),
     m_has_extLst(false),
     m_extLst(NULL)
{
}
CT_SerAx::~CT_SerAx()
{
    clear();
}
bool CT_SerAx::has_axId() const
{
    return m_has_axId;
}

CT_UnsignedInt* CT_SerAx::mutable_axId()
{
    m_has_axId = true;
    if (!m_axId)
    {
        m_axId = new CT_UnsignedInt();
    }
    return m_axId;
}

const CT_UnsignedInt& CT_SerAx::get_axId() const
{
    if (m_axId)
    {
        return *m_axId;
    }
    return CT_UnsignedInt::default_instance();
}

bool CT_SerAx::has_scaling() const
{
    return m_has_scaling;
}

CT_Scaling* CT_SerAx::mutable_scaling()
{
    m_has_scaling = true;
    if (!m_scaling)
    {
        m_scaling = new CT_Scaling();
    }
    return m_scaling;
}

const CT_Scaling& CT_SerAx::get_scaling() const
{
    if (m_scaling)
    {
        return *m_scaling;
    }
    return CT_Scaling::default_instance();
}

bool CT_SerAx::has_delete() const
{
    return m_has_delete;
}

CT_Boolean* CT_SerAx::mutable_delete()
{
    m_has_delete = true;
    if (!m_delete)
    {
        m_delete = new CT_Boolean();
    }
    return m_delete;
}

const CT_Boolean& CT_SerAx::get_delete() const
{
    if (m_delete)
    {
        return *m_delete;
    }
    return CT_Boolean::default_instance();
}

bool CT_SerAx::has_axPos() const
{
    return m_has_axPos;
}

CT_AxPos* CT_SerAx::mutable_axPos()
{
    m_has_axPos = true;
    if (!m_axPos)
    {
        m_axPos = new CT_AxPos();
    }
    return m_axPos;
}

const CT_AxPos& CT_SerAx::get_axPos() const
{
    if (m_axPos)
    {
        return *m_axPos;
    }
    return CT_AxPos::default_instance();
}

bool CT_SerAx::has_majorGridlines() const
{
    return m_has_majorGridlines;
}

CT_ChartLines* CT_SerAx::mutable_majorGridlines()
{
    m_has_majorGridlines = true;
    if (!m_majorGridlines)
    {
        m_majorGridlines = new CT_ChartLines();
    }
    return m_majorGridlines;
}

const CT_ChartLines& CT_SerAx::get_majorGridlines() const
{
    if (m_majorGridlines)
    {
        return *m_majorGridlines;
    }
    return CT_ChartLines::default_instance();
}

bool CT_SerAx::has_minorGridlines() const
{
    return m_has_minorGridlines;
}

CT_ChartLines* CT_SerAx::mutable_minorGridlines()
{
    m_has_minorGridlines = true;
    if (!m_minorGridlines)
    {
        m_minorGridlines = new CT_ChartLines();
    }
    return m_minorGridlines;
}

const CT_ChartLines& CT_SerAx::get_minorGridlines() const
{
    if (m_minorGridlines)
    {
        return *m_minorGridlines;
    }
    return CT_ChartLines::default_instance();
}

bool CT_SerAx::has_title() const
{
    return m_has_title;
}

CT_Title* CT_SerAx::mutable_title()
{
    m_has_title = true;
    if (!m_title)
    {
        m_title = new CT_Title();
    }
    return m_title;
}

const CT_Title& CT_SerAx::get_title() const
{
    if (m_title)
    {
        return *m_title;
    }
    return CT_Title::default_instance();
}

bool CT_SerAx::has_numFmt() const
{
    return m_has_numFmt;
}

CT_NumFmt* CT_SerAx::mutable_numFmt()
{
    m_has_numFmt = true;
    if (!m_numFmt)
    {
        m_numFmt = new CT_NumFmt();
    }
    return m_numFmt;
}

const CT_NumFmt& CT_SerAx::get_numFmt() const
{
    if (m_numFmt)
    {
        return *m_numFmt;
    }
    return CT_NumFmt::default_instance();
}

bool CT_SerAx::has_majorTickMark() const
{
    return m_has_majorTickMark;
}

CT_TickMark* CT_SerAx::mutable_majorTickMark()
{
    m_has_majorTickMark = true;
    if (!m_majorTickMark)
    {
        m_majorTickMark = new CT_TickMark();
    }
    return m_majorTickMark;
}

const CT_TickMark& CT_SerAx::get_majorTickMark() const
{
    if (m_majorTickMark)
    {
        return *m_majorTickMark;
    }
    return CT_TickMark::default_instance();
}

bool CT_SerAx::has_minorTickMark() const
{
    return m_has_minorTickMark;
}

CT_TickMark* CT_SerAx::mutable_minorTickMark()
{
    m_has_minorTickMark = true;
    if (!m_minorTickMark)
    {
        m_minorTickMark = new CT_TickMark();
    }
    return m_minorTickMark;
}

const CT_TickMark& CT_SerAx::get_minorTickMark() const
{
    if (m_minorTickMark)
    {
        return *m_minorTickMark;
    }
    return CT_TickMark::default_instance();
}

bool CT_SerAx::has_tickLblPos() const
{
    return m_has_tickLblPos;
}

CT_TickLblPos* CT_SerAx::mutable_tickLblPos()
{
    m_has_tickLblPos = true;
    if (!m_tickLblPos)
    {
        m_tickLblPos = new CT_TickLblPos();
    }
    return m_tickLblPos;
}

const CT_TickLblPos& CT_SerAx::get_tickLblPos() const
{
    if (m_tickLblPos)
    {
        return *m_tickLblPos;
    }
    return CT_TickLblPos::default_instance();
}

bool CT_SerAx::has_spPr() const
{
    return m_has_spPr;
}

ns_a::CT_ShapeProperties* CT_SerAx::mutable_spPr()
{
    m_has_spPr = true;
    if (!m_spPr)
    {
        m_spPr = new ns_a::CT_ShapeProperties();
    }
    return m_spPr;
}

const ns_a::CT_ShapeProperties& CT_SerAx::get_spPr() const
{
    if (m_spPr)
    {
        return *m_spPr;
    }
    return ns_a::CT_ShapeProperties::default_instance();
}

bool CT_SerAx::has_txPr() const
{
    return m_has_txPr;
}

ns_a::CT_TextBody* CT_SerAx::mutable_txPr()
{
    m_has_txPr = true;
    if (!m_txPr)
    {
        m_txPr = new ns_a::CT_TextBody();
    }
    return m_txPr;
}

const ns_a::CT_TextBody& CT_SerAx::get_txPr() const
{
    if (m_txPr)
    {
        return *m_txPr;
    }
    return ns_a::CT_TextBody::default_instance();
}

bool CT_SerAx::has_crossAx() const
{
    return m_has_crossAx;
}

CT_UnsignedInt* CT_SerAx::mutable_crossAx()
{
    m_has_crossAx = true;
    if (!m_crossAx)
    {
        m_crossAx = new CT_UnsignedInt();
    }
    return m_crossAx;
}

const CT_UnsignedInt& CT_SerAx::get_crossAx() const
{
    if (m_crossAx)
    {
        return *m_crossAx;
    }
    return CT_UnsignedInt::default_instance();
}

bool CT_SerAx::has_crosses() const
{
    return m_has_crosses;
}

CT_Crosses* CT_SerAx::mutable_crosses()
{

    m_has_crossesAt = false;

    if (m_crossesAt)
    {
        delete m_crossesAt;
        m_crossesAt = NULL;
    }
    ;

    m_has_crosses = true;
    if (!m_crosses)
    {
        m_crosses = new CT_Crosses();
    }
    return m_crosses;
}

const CT_Crosses& CT_SerAx::get_crosses() const
{
    if (m_crosses)
    {
        return *m_crosses;
    }
    return CT_Crosses::default_instance();
}

bool CT_SerAx::has_crossesAt() const
{
    return m_has_crossesAt;
}

CT_Double* CT_SerAx::mutable_crossesAt()
{

    m_has_crosses = false;

    if (m_crosses)
    {
        delete m_crosses;
        m_crosses = NULL;
    }
    ;

    m_has_crossesAt = true;
    if (!m_crossesAt)
    {
        m_crossesAt = new CT_Double();
    }
    return m_crossesAt;
}

const CT_Double& CT_SerAx::get_crossesAt() const
{
    if (m_crossesAt)
    {
        return *m_crossesAt;
    }
    return CT_Double::default_instance();
}

bool CT_SerAx::has_tickLblSkip() const
{
    return m_has_tickLblSkip;
}

CT_Skip* CT_SerAx::mutable_tickLblSkip()
{
    m_has_tickLblSkip = true;
    if (!m_tickLblSkip)
    {
        m_tickLblSkip = new CT_Skip();
    }
    return m_tickLblSkip;
}

const CT_Skip& CT_SerAx::get_tickLblSkip() const
{
    if (m_tickLblSkip)
    {
        return *m_tickLblSkip;
    }
    return CT_Skip::default_instance();
}

bool CT_SerAx::has_tickMarkSkip() const
{
    return m_has_tickMarkSkip;
}

CT_Skip* CT_SerAx::mutable_tickMarkSkip()
{
    m_has_tickMarkSkip = true;
    if (!m_tickMarkSkip)
    {
        m_tickMarkSkip = new CT_Skip();
    }
    return m_tickMarkSkip;
}

const CT_Skip& CT_SerAx::get_tickMarkSkip() const
{
    if (m_tickMarkSkip)
    {
        return *m_tickMarkSkip;
    }
    return CT_Skip::default_instance();
}

bool CT_SerAx::has_extLst() const
{
    return m_has_extLst;
}

CT_ExtensionList* CT_SerAx::mutable_extLst()
{
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new CT_ExtensionList();
    }
    return m_extLst;
}

const CT_ExtensionList& CT_SerAx::get_extLst() const
{
    if (m_extLst)
    {
        return *m_extLst;
    }
    return CT_ExtensionList::default_instance();
}

void CT_SerAx::clear()
{
    m_has_axId = false;

    if (m_axId)
    {
        delete m_axId;
        m_axId = NULL;
    }


    m_has_scaling = false;

    if (m_scaling)
    {
        delete m_scaling;
        m_scaling = NULL;
    }


    m_has_delete = false;

    if (m_delete)
    {
        delete m_delete;
        m_delete = NULL;
    }


    m_has_axPos = false;

    if (m_axPos)
    {
        delete m_axPos;
        m_axPos = NULL;
    }


    m_has_majorGridlines = false;

    if (m_majorGridlines)
    {
        delete m_majorGridlines;
        m_majorGridlines = NULL;
    }


    m_has_minorGridlines = false;

    if (m_minorGridlines)
    {
        delete m_minorGridlines;
        m_minorGridlines = NULL;
    }


    m_has_title = false;

    if (m_title)
    {
        delete m_title;
        m_title = NULL;
    }


    m_has_numFmt = false;

    if (m_numFmt)
    {
        delete m_numFmt;
        m_numFmt = NULL;
    }


    m_has_majorTickMark = false;

    if (m_majorTickMark)
    {
        delete m_majorTickMark;
        m_majorTickMark = NULL;
    }


    m_has_minorTickMark = false;

    if (m_minorTickMark)
    {
        delete m_minorTickMark;
        m_minorTickMark = NULL;
    }


    m_has_tickLblPos = false;

    if (m_tickLblPos)
    {
        delete m_tickLblPos;
        m_tickLblPos = NULL;
    }


    m_has_spPr = false;

    if (m_spPr)
    {
        delete m_spPr;
        m_spPr = NULL;
    }


    m_has_txPr = false;

    if (m_txPr)
    {
        delete m_txPr;
        m_txPr = NULL;
    }


    m_has_crossAx = false;

    if (m_crossAx)
    {
        delete m_crossAx;
        m_crossAx = NULL;
    }


    m_has_crosses = false;

    if (m_crosses)
    {
        delete m_crosses;
        m_crosses = NULL;
    }


    m_has_crossesAt = false;

    if (m_crossesAt)
    {
        delete m_crossesAt;
        m_crossesAt = NULL;
    }


    m_has_tickLblSkip = false;

    if (m_tickLblSkip)
    {
        delete m_tickLblSkip;
        m_tickLblSkip = NULL;
    }


    m_has_tickMarkSkip = false;

    if (m_tickMarkSkip)
    {
        delete m_tickMarkSkip;
        m_tickMarkSkip = NULL;
    }


    m_has_extLst = false;

    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }

}

void CT_SerAx::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";

    assert(m_has_axId);


    assert(m_has_scaling);


    assert(m_has_axPos);


    assert(m_has_crossAx);


    if (m_has_axId)
    {
        m_axId->toXmlElem("c:axId", "", _outStream);
    }


    if (m_has_scaling)
    {
        m_scaling->toXmlElem("c:scaling", "", _outStream);
    }


    if (m_has_delete)
    {
        m_delete->toXmlElem("c:delete", "", _outStream);
    }


    if (m_has_axPos)
    {
        m_axPos->toXmlElem("c:axPos", "", _outStream);
    }


    if (m_has_majorGridlines)
    {
        m_majorGridlines->toXmlElem("c:majorGridlines", "", _outStream);
    }


    if (m_has_minorGridlines)
    {
        m_minorGridlines->toXmlElem("c:minorGridlines", "", _outStream);
    }


    if (m_has_title)
    {
        m_title->toXmlElem("c:title", "", _outStream);
    }


    if (m_has_numFmt)
    {
        m_numFmt->toXmlElem("c:numFmt", "", _outStream);
    }


    if (m_has_majorTickMark)
    {
        m_majorTickMark->toXmlElem("c:majorTickMark", "", _outStream);
    }


    if (m_has_minorTickMark)
    {
        m_minorTickMark->toXmlElem("c:minorTickMark", "", _outStream);
    }


    if (m_has_tickLblPos)
    {
        m_tickLblPos->toXmlElem("c:tickLblPos", "", _outStream);
    }


    if (m_has_spPr)
    {
        m_spPr->toXmlElem("c:spPr", "", _outStream);
    }


    if (m_has_txPr)
    {
        m_txPr->toXmlElem("c:txPr", "", _outStream);
    }


    if (m_has_crossAx)
    {
        m_crossAx->toXmlElem("c:crossAx", "", _outStream);
    }

    {
        bool elemHasValueList[2] = {m_has_crosses, m_has_crossesAt};
        int cnt = count(elemHasValueList, elemHasValueList + 2, true);
        assert(cnt == 0 || cnt == 1);
    }


    if (m_has_crosses)
    {
        m_crosses->toXmlElem("c:crosses", "", _outStream);
    }


    if (m_has_crossesAt)
    {
        m_crossesAt->toXmlElem("c:crossesAt", "", _outStream);
    }


    if (m_has_tickLblSkip)
    {
        m_tickLblSkip->toXmlElem("c:tickLblSkip", "", _outStream);
    }


    if (m_has_tickMarkSkip)
    {
        m_tickMarkSkip->toXmlElem("c:tickMarkSkip", "", _outStream);
    }


    if (m_has_extLst)
    {
        m_extLst->toXmlElem("c:extLst", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_SerAx& CT_SerAx::default_instance()
{
    if (!CT_SerAx::default_instance_)
    {
        CT_SerAx::default_instance_ = new CT_SerAx();
    }
    return *CT_SerAx::default_instance_;
}

CT_SerAx* CT_SerAx::default_instance_ = NULL;

// CT_ValAx
CT_ValAx::CT_ValAx()
    :m_has_axId(false),
     m_axId(NULL),
     m_has_scaling(false),
     m_scaling(NULL),
     m_has_delete(false),
     m_delete(NULL),
     m_has_axPos(false),
     m_axPos(NULL),
     m_has_majorGridlines(false),
     m_majorGridlines(NULL),
     m_has_minorGridlines(false),
     m_minorGridlines(NULL),
     m_has_title(false),
     m_title(NULL),
     m_has_numFmt(false),
     m_numFmt(NULL),
     m_has_majorTickMark(false),
     m_majorTickMark(NULL),
     m_has_minorTickMark(false),
     m_minorTickMark(NULL),
     m_has_tickLblPos(false),
     m_tickLblPos(NULL),
     m_has_spPr(false),
     m_spPr(NULL),
     m_has_txPr(false),
     m_txPr(NULL),
     m_has_crossAx(false),
     m_crossAx(NULL),
     m_has_crosses(false),
     m_crosses(NULL),
     m_has_crossesAt(false),
     m_crossesAt(NULL),
     m_has_crossBetween(false),
     m_crossBetween(NULL),
     m_has_majorUnit(false),
     m_majorUnit(NULL),
     m_has_minorUnit(false),
     m_minorUnit(NULL),
     m_has_dispUnits(false),
     m_dispUnits(NULL),
     m_has_extLst(false),
     m_extLst(NULL)
{
}
CT_ValAx::~CT_ValAx()
{
    clear();
}
bool CT_ValAx::has_axId() const
{
    return m_has_axId;
}

CT_UnsignedInt* CT_ValAx::mutable_axId()
{
    m_has_axId = true;
    if (!m_axId)
    {
        m_axId = new CT_UnsignedInt();
    }
    return m_axId;
}

const CT_UnsignedInt& CT_ValAx::get_axId() const
{
    if (m_axId)
    {
        return *m_axId;
    }
    return CT_UnsignedInt::default_instance();
}

bool CT_ValAx::has_scaling() const
{
    return m_has_scaling;
}

CT_Scaling* CT_ValAx::mutable_scaling()
{
    m_has_scaling = true;
    if (!m_scaling)
    {
        m_scaling = new CT_Scaling();
    }
    return m_scaling;
}

const CT_Scaling& CT_ValAx::get_scaling() const
{
    if (m_scaling)
    {
        return *m_scaling;
    }
    return CT_Scaling::default_instance();
}

bool CT_ValAx::has_delete() const
{
    return m_has_delete;
}

CT_Boolean* CT_ValAx::mutable_delete()
{
    m_has_delete = true;
    if (!m_delete)
    {
        m_delete = new CT_Boolean();
    }
    return m_delete;
}

const CT_Boolean& CT_ValAx::get_delete() const
{
    if (m_delete)
    {
        return *m_delete;
    }
    return CT_Boolean::default_instance();
}

bool CT_ValAx::has_axPos() const
{
    return m_has_axPos;
}

CT_AxPos* CT_ValAx::mutable_axPos()
{
    m_has_axPos = true;
    if (!m_axPos)
    {
        m_axPos = new CT_AxPos();
    }
    return m_axPos;
}

const CT_AxPos& CT_ValAx::get_axPos() const
{
    if (m_axPos)
    {
        return *m_axPos;
    }
    return CT_AxPos::default_instance();
}

bool CT_ValAx::has_majorGridlines() const
{
    return m_has_majorGridlines;
}

CT_ChartLines* CT_ValAx::mutable_majorGridlines()
{
    m_has_majorGridlines = true;
    if (!m_majorGridlines)
    {
        m_majorGridlines = new CT_ChartLines();
    }
    return m_majorGridlines;
}

const CT_ChartLines& CT_ValAx::get_majorGridlines() const
{
    if (m_majorGridlines)
    {
        return *m_majorGridlines;
    }
    return CT_ChartLines::default_instance();
}

bool CT_ValAx::has_minorGridlines() const
{
    return m_has_minorGridlines;
}

CT_ChartLines* CT_ValAx::mutable_minorGridlines()
{
    m_has_minorGridlines = true;
    if (!m_minorGridlines)
    {
        m_minorGridlines = new CT_ChartLines();
    }
    return m_minorGridlines;
}

const CT_ChartLines& CT_ValAx::get_minorGridlines() const
{
    if (m_minorGridlines)
    {
        return *m_minorGridlines;
    }
    return CT_ChartLines::default_instance();
}

bool CT_ValAx::has_title() const
{
    return m_has_title;
}

CT_Title* CT_ValAx::mutable_title()
{
    m_has_title = true;
    if (!m_title)
    {
        m_title = new CT_Title();
    }
    return m_title;
}

const CT_Title& CT_ValAx::get_title() const
{
    if (m_title)
    {
        return *m_title;
    }
    return CT_Title::default_instance();
}

bool CT_ValAx::has_numFmt() const
{
    return m_has_numFmt;
}

CT_NumFmt* CT_ValAx::mutable_numFmt()
{
    m_has_numFmt = true;
    if (!m_numFmt)
    {
        m_numFmt = new CT_NumFmt();
    }
    return m_numFmt;
}

const CT_NumFmt& CT_ValAx::get_numFmt() const
{
    if (m_numFmt)
    {
        return *m_numFmt;
    }
    return CT_NumFmt::default_instance();
}

bool CT_ValAx::has_majorTickMark() const
{
    return m_has_majorTickMark;
}

CT_TickMark* CT_ValAx::mutable_majorTickMark()
{
    m_has_majorTickMark = true;
    if (!m_majorTickMark)
    {
        m_majorTickMark = new CT_TickMark();
    }
    return m_majorTickMark;
}

const CT_TickMark& CT_ValAx::get_majorTickMark() const
{
    if (m_majorTickMark)
    {
        return *m_majorTickMark;
    }
    return CT_TickMark::default_instance();
}

bool CT_ValAx::has_minorTickMark() const
{
    return m_has_minorTickMark;
}

CT_TickMark* CT_ValAx::mutable_minorTickMark()
{
    m_has_minorTickMark = true;
    if (!m_minorTickMark)
    {
        m_minorTickMark = new CT_TickMark();
    }
    return m_minorTickMark;
}

const CT_TickMark& CT_ValAx::get_minorTickMark() const
{
    if (m_minorTickMark)
    {
        return *m_minorTickMark;
    }
    return CT_TickMark::default_instance();
}

bool CT_ValAx::has_tickLblPos() const
{
    return m_has_tickLblPos;
}

CT_TickLblPos* CT_ValAx::mutable_tickLblPos()
{
    m_has_tickLblPos = true;
    if (!m_tickLblPos)
    {
        m_tickLblPos = new CT_TickLblPos();
    }
    return m_tickLblPos;
}

const CT_TickLblPos& CT_ValAx::get_tickLblPos() const
{
    if (m_tickLblPos)
    {
        return *m_tickLblPos;
    }
    return CT_TickLblPos::default_instance();
}

bool CT_ValAx::has_spPr() const
{
    return m_has_spPr;
}

ns_a::CT_ShapeProperties* CT_ValAx::mutable_spPr()
{
    m_has_spPr = true;
    if (!m_spPr)
    {
        m_spPr = new ns_a::CT_ShapeProperties();
    }
    return m_spPr;
}

const ns_a::CT_ShapeProperties& CT_ValAx::get_spPr() const
{
    if (m_spPr)
    {
        return *m_spPr;
    }
    return ns_a::CT_ShapeProperties::default_instance();
}

bool CT_ValAx::has_txPr() const
{
    return m_has_txPr;
}

ns_a::CT_TextBody* CT_ValAx::mutable_txPr()
{
    m_has_txPr = true;
    if (!m_txPr)
    {
        m_txPr = new ns_a::CT_TextBody();
    }
    return m_txPr;
}

const ns_a::CT_TextBody& CT_ValAx::get_txPr() const
{
    if (m_txPr)
    {
        return *m_txPr;
    }
    return ns_a::CT_TextBody::default_instance();
}

bool CT_ValAx::has_crossAx() const
{
    return m_has_crossAx;
}

CT_UnsignedInt* CT_ValAx::mutable_crossAx()
{
    m_has_crossAx = true;
    if (!m_crossAx)
    {
        m_crossAx = new CT_UnsignedInt();
    }
    return m_crossAx;
}

const CT_UnsignedInt& CT_ValAx::get_crossAx() const
{
    if (m_crossAx)
    {
        return *m_crossAx;
    }
    return CT_UnsignedInt::default_instance();
}

bool CT_ValAx::has_crosses() const
{
    return m_has_crosses;
}

CT_Crosses* CT_ValAx::mutable_crosses()
{

    m_has_crossesAt = false;

    if (m_crossesAt)
    {
        delete m_crossesAt;
        m_crossesAt = NULL;
    }
    ;

    m_has_crosses = true;
    if (!m_crosses)
    {
        m_crosses = new CT_Crosses();
    }
    return m_crosses;
}

const CT_Crosses& CT_ValAx::get_crosses() const
{
    if (m_crosses)
    {
        return *m_crosses;
    }
    return CT_Crosses::default_instance();
}

bool CT_ValAx::has_crossesAt() const
{
    return m_has_crossesAt;
}

CT_Double* CT_ValAx::mutable_crossesAt()
{

    m_has_crosses = false;

    if (m_crosses)
    {
        delete m_crosses;
        m_crosses = NULL;
    }
    ;

    m_has_crossesAt = true;
    if (!m_crossesAt)
    {
        m_crossesAt = new CT_Double();
    }
    return m_crossesAt;
}

const CT_Double& CT_ValAx::get_crossesAt() const
{
    if (m_crossesAt)
    {
        return *m_crossesAt;
    }
    return CT_Double::default_instance();
}

bool CT_ValAx::has_crossBetween() const
{
    return m_has_crossBetween;
}

CT_CrossBetween* CT_ValAx::mutable_crossBetween()
{
    m_has_crossBetween = true;
    if (!m_crossBetween)
    {
        m_crossBetween = new CT_CrossBetween();
    }
    return m_crossBetween;
}

const CT_CrossBetween& CT_ValAx::get_crossBetween() const
{
    if (m_crossBetween)
    {
        return *m_crossBetween;
    }
    return CT_CrossBetween::default_instance();
}

bool CT_ValAx::has_majorUnit() const
{
    return m_has_majorUnit;
}

CT_AxisUnit* CT_ValAx::mutable_majorUnit()
{
    m_has_majorUnit = true;
    if (!m_majorUnit)
    {
        m_majorUnit = new CT_AxisUnit();
    }
    return m_majorUnit;
}

const CT_AxisUnit& CT_ValAx::get_majorUnit() const
{
    if (m_majorUnit)
    {
        return *m_majorUnit;
    }
    return CT_AxisUnit::default_instance();
}

bool CT_ValAx::has_minorUnit() const
{
    return m_has_minorUnit;
}

CT_AxisUnit* CT_ValAx::mutable_minorUnit()
{
    m_has_minorUnit = true;
    if (!m_minorUnit)
    {
        m_minorUnit = new CT_AxisUnit();
    }
    return m_minorUnit;
}

const CT_AxisUnit& CT_ValAx::get_minorUnit() const
{
    if (m_minorUnit)
    {
        return *m_minorUnit;
    }
    return CT_AxisUnit::default_instance();
}

bool CT_ValAx::has_dispUnits() const
{
    return m_has_dispUnits;
}

CT_DispUnits* CT_ValAx::mutable_dispUnits()
{
    m_has_dispUnits = true;
    if (!m_dispUnits)
    {
        m_dispUnits = new CT_DispUnits();
    }
    return m_dispUnits;
}

const CT_DispUnits& CT_ValAx::get_dispUnits() const
{
    if (m_dispUnits)
    {
        return *m_dispUnits;
    }
    return CT_DispUnits::default_instance();
}

bool CT_ValAx::has_extLst() const
{
    return m_has_extLst;
}

CT_ExtensionList* CT_ValAx::mutable_extLst()
{
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new CT_ExtensionList();
    }
    return m_extLst;
}

const CT_ExtensionList& CT_ValAx::get_extLst() const
{
    if (m_extLst)
    {
        return *m_extLst;
    }
    return CT_ExtensionList::default_instance();
}

void CT_ValAx::clear()
{
    m_has_axId = false;

    if (m_axId)
    {
        delete m_axId;
        m_axId = NULL;
    }


    m_has_scaling = false;

    if (m_scaling)
    {
        delete m_scaling;
        m_scaling = NULL;
    }


    m_has_delete = false;

    if (m_delete)
    {
        delete m_delete;
        m_delete = NULL;
    }


    m_has_axPos = false;

    if (m_axPos)
    {
        delete m_axPos;
        m_axPos = NULL;
    }


    m_has_majorGridlines = false;

    if (m_majorGridlines)
    {
        delete m_majorGridlines;
        m_majorGridlines = NULL;
    }


    m_has_minorGridlines = false;

    if (m_minorGridlines)
    {
        delete m_minorGridlines;
        m_minorGridlines = NULL;
    }


    m_has_title = false;

    if (m_title)
    {
        delete m_title;
        m_title = NULL;
    }


    m_has_numFmt = false;

    if (m_numFmt)
    {
        delete m_numFmt;
        m_numFmt = NULL;
    }


    m_has_majorTickMark = false;

    if (m_majorTickMark)
    {
        delete m_majorTickMark;
        m_majorTickMark = NULL;
    }


    m_has_minorTickMark = false;

    if (m_minorTickMark)
    {
        delete m_minorTickMark;
        m_minorTickMark = NULL;
    }


    m_has_tickLblPos = false;

    if (m_tickLblPos)
    {
        delete m_tickLblPos;
        m_tickLblPos = NULL;
    }


    m_has_spPr = false;

    if (m_spPr)
    {
        delete m_spPr;
        m_spPr = NULL;
    }


    m_has_txPr = false;

    if (m_txPr)
    {
        delete m_txPr;
        m_txPr = NULL;
    }


    m_has_crossAx = false;

    if (m_crossAx)
    {
        delete m_crossAx;
        m_crossAx = NULL;
    }


    m_has_crosses = false;

    if (m_crosses)
    {
        delete m_crosses;
        m_crosses = NULL;
    }


    m_has_crossesAt = false;

    if (m_crossesAt)
    {
        delete m_crossesAt;
        m_crossesAt = NULL;
    }


    m_has_crossBetween = false;

    if (m_crossBetween)
    {
        delete m_crossBetween;
        m_crossBetween = NULL;
    }


    m_has_majorUnit = false;

    if (m_majorUnit)
    {
        delete m_majorUnit;
        m_majorUnit = NULL;
    }


    m_has_minorUnit = false;

    if (m_minorUnit)
    {
        delete m_minorUnit;
        m_minorUnit = NULL;
    }


    m_has_dispUnits = false;

    if (m_dispUnits)
    {
        delete m_dispUnits;
        m_dispUnits = NULL;
    }


    m_has_extLst = false;

    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }

}

void CT_ValAx::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";

    assert(m_has_axId);


    assert(m_has_scaling);


    assert(m_has_axPos);


    assert(m_has_crossAx);


    if (m_has_axId)
    {
        m_axId->toXmlElem("c:axId", "", _outStream);
    }


    if (m_has_scaling)
    {
        m_scaling->toXmlElem("c:scaling", "", _outStream);
    }


    if (m_has_delete)
    {
        m_delete->toXmlElem("c:delete", "", _outStream);
    }


    if (m_has_axPos)
    {
        m_axPos->toXmlElem("c:axPos", "", _outStream);
    }


    if (m_has_majorGridlines)
    {
        m_majorGridlines->toXmlElem("c:majorGridlines", "", _outStream);
    }


    if (m_has_minorGridlines)
    {
        m_minorGridlines->toXmlElem("c:minorGridlines", "", _outStream);
    }


    if (m_has_title)
    {
        m_title->toXmlElem("c:title", "", _outStream);
    }


    if (m_has_numFmt)
    {
        m_numFmt->toXmlElem("c:numFmt", "", _outStream);
    }


    if (m_has_majorTickMark)
    {
        m_majorTickMark->toXmlElem("c:majorTickMark", "", _outStream);
    }


    if (m_has_minorTickMark)
    {
        m_minorTickMark->toXmlElem("c:minorTickMark", "", _outStream);
    }


    if (m_has_tickLblPos)
    {
        m_tickLblPos->toXmlElem("c:tickLblPos", "", _outStream);
    }


    if (m_has_spPr)
    {
        m_spPr->toXmlElem("c:spPr", "", _outStream);
    }


    if (m_has_txPr)
    {
        m_txPr->toXmlElem("c:txPr", "", _outStream);
    }


    if (m_has_crossAx)
    {
        m_crossAx->toXmlElem("c:crossAx", "", _outStream);
    }

    {
        bool elemHasValueList[2] = {m_has_crosses, m_has_crossesAt};
        int cnt = count(elemHasValueList, elemHasValueList + 2, true);
        assert(cnt == 0 || cnt == 1);
    }


    if (m_has_crosses)
    {
        m_crosses->toXmlElem("c:crosses", "", _outStream);
    }


    if (m_has_crossesAt)
    {
        m_crossesAt->toXmlElem("c:crossesAt", "", _outStream);
    }


    if (m_has_crossBetween)
    {
        m_crossBetween->toXmlElem("c:crossBetween", "", _outStream);
    }


    if (m_has_majorUnit)
    {
        m_majorUnit->toXmlElem("c:majorUnit", "", _outStream);
    }


    if (m_has_minorUnit)
    {
        m_minorUnit->toXmlElem("c:minorUnit", "", _outStream);
    }


    if (m_has_dispUnits)
    {
        m_dispUnits->toXmlElem("c:dispUnits", "", _outStream);
    }


    if (m_has_extLst)
    {
        m_extLst->toXmlElem("c:extLst", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_ValAx& CT_ValAx::default_instance()
{
    if (!CT_ValAx::default_instance_)
    {
        CT_ValAx::default_instance_ = new CT_ValAx();
    }
    return *CT_ValAx::default_instance_;
}

CT_ValAx* CT_ValAx::default_instance_ = NULL;

// CT_PlotArea
CT_PlotArea::CT_PlotArea()
    :m_has_layout(false),
     m_layout(NULL),
     m_has_dTable(false),
     m_dTable(NULL),
     m_has_spPr(false),
     m_spPr(NULL),
     m_has_extLst(false),
     m_extLst(NULL)
{
}
CT_PlotArea::~CT_PlotArea()
{
    clear();
}
bool CT_PlotArea::has_layout() const
{
    return m_has_layout;
}

CT_Layout* CT_PlotArea::mutable_layout()
{
    m_has_layout = true;
    if (!m_layout)
    {
        m_layout = new CT_Layout();
    }
    return m_layout;
}

const CT_Layout& CT_PlotArea::get_layout() const
{
    if (m_layout)
    {
        return *m_layout;
    }
    return CT_Layout::default_instance();
}

CT_AreaChart* CT_PlotArea::add_areaChart()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_AreaChart* pNewChild = pChildGroup->mutable_areaChart();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

CT_Area3DChart* CT_PlotArea::add_area3DChart()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Area3DChart* pNewChild = pChildGroup->mutable_area3DChart();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

CT_LineChart* CT_PlotArea::add_lineChart()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_LineChart* pNewChild = pChildGroup->mutable_lineChart();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

CT_Line3DChart* CT_PlotArea::add_line3DChart()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Line3DChart* pNewChild = pChildGroup->mutable_line3DChart();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

CT_StockChart* CT_PlotArea::add_stockChart()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_StockChart* pNewChild = pChildGroup->mutable_stockChart();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

CT_RadarChart* CT_PlotArea::add_radarChart()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_RadarChart* pNewChild = pChildGroup->mutable_radarChart();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

CT_ScatterChart* CT_PlotArea::add_scatterChart()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_ScatterChart* pNewChild = pChildGroup->mutable_scatterChart();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

CT_PieChart* CT_PlotArea::add_pieChart()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_PieChart* pNewChild = pChildGroup->mutable_pieChart();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

CT_Pie3DChart* CT_PlotArea::add_pie3DChart()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Pie3DChart* pNewChild = pChildGroup->mutable_pie3DChart();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

CT_DoughnutChart* CT_PlotArea::add_doughnutChart()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_DoughnutChart* pNewChild = pChildGroup->mutable_doughnutChart();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

CT_BarChart* CT_PlotArea::add_barChart()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_BarChart* pNewChild = pChildGroup->mutable_barChart();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

CT_Bar3DChart* CT_PlotArea::add_bar3DChart()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Bar3DChart* pNewChild = pChildGroup->mutable_bar3DChart();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

CT_OfPieChart* CT_PlotArea::add_ofPieChart()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_OfPieChart* pNewChild = pChildGroup->mutable_ofPieChart();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

CT_SurfaceChart* CT_PlotArea::add_surfaceChart()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_SurfaceChart* pNewChild = pChildGroup->mutable_surfaceChart();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

CT_Surface3DChart* CT_PlotArea::add_surface3DChart()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Surface3DChart* pNewChild = pChildGroup->mutable_surface3DChart();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

CT_BubbleChart* CT_PlotArea::add_bubbleChart()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_BubbleChart* pNewChild = pChildGroup->mutable_bubbleChart();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

CT_ValAx* CT_PlotArea::add_valAx()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_ValAx* pNewChild = pChildGroup->mutable_valAx();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

CT_CatAx* CT_PlotArea::add_catAx()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_CatAx* pNewChild = pChildGroup->mutable_catAx();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

CT_DateAx* CT_PlotArea::add_dateAx()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_DateAx* pNewChild = pChildGroup->mutable_dateAx();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

CT_SerAx* CT_PlotArea::add_serAx()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_SerAx* pNewChild = pChildGroup->mutable_serAx();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

bool CT_PlotArea::has_dTable() const
{
    return m_has_dTable;
}

CT_DTable* CT_PlotArea::mutable_dTable()
{
    m_has_dTable = true;
    if (!m_dTable)
    {
        m_dTable = new CT_DTable();
    }
    return m_dTable;
}

const CT_DTable& CT_PlotArea::get_dTable() const
{
    if (m_dTable)
    {
        return *m_dTable;
    }
    return CT_DTable::default_instance();
}

bool CT_PlotArea::has_spPr() const
{
    return m_has_spPr;
}

ns_a::CT_ShapeProperties* CT_PlotArea::mutable_spPr()
{
    m_has_spPr = true;
    if (!m_spPr)
    {
        m_spPr = new ns_a::CT_ShapeProperties();
    }
    return m_spPr;
}

const ns_a::CT_ShapeProperties& CT_PlotArea::get_spPr() const
{
    if (m_spPr)
    {
        return *m_spPr;
    }
    return ns_a::CT_ShapeProperties::default_instance();
}

bool CT_PlotArea::has_extLst() const
{
    return m_has_extLst;
}

CT_ExtensionList* CT_PlotArea::mutable_extLst()
{
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new CT_ExtensionList();
    }
    return m_extLst;
}

const CT_ExtensionList& CT_PlotArea::get_extLst() const
{
    if (m_extLst)
    {
        return *m_extLst;
    }
    return CT_ExtensionList::default_instance();
}

void CT_PlotArea::clear()
{
    m_has_layout = false;

    if (m_layout)
    {
        delete m_layout;
        m_layout = NULL;
    }


    {
        vector<ChildGroup_1*>::iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_1.clear();
    }

    m_has_dTable = false;

    if (m_dTable)
    {
        delete m_dTable;
        m_dTable = NULL;
    }


    m_has_spPr = false;

    if (m_spPr)
    {
        delete m_spPr;
        m_spPr = NULL;
    }


    m_has_extLst = false;

    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }

}

void CT_PlotArea::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";


    if (m_has_layout)
    {
        m_layout->toXmlElem("c:layout", "", _outStream);
    }

    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_areaChart())
            {
                (*iter)->get_areaChart().toXmlElem("c:areaChart", "", _outStream);
            }


            else if ((*iter)->has_area3DChart())
            {
                (*iter)->get_area3DChart().toXmlElem("c:area3DChart", "", _outStream);
            }


            else if ((*iter)->has_lineChart())
            {
                (*iter)->get_lineChart().toXmlElem("c:lineChart", "", _outStream);
            }


            else if ((*iter)->has_line3DChart())
            {
                (*iter)->get_line3DChart().toXmlElem("c:line3DChart", "", _outStream);
            }


            else if ((*iter)->has_stockChart())
            {
                (*iter)->get_stockChart().toXmlElem("c:stockChart", "", _outStream);
            }


            else if ((*iter)->has_radarChart())
            {
                (*iter)->get_radarChart().toXmlElem("c:radarChart", "", _outStream);
            }


            else if ((*iter)->has_scatterChart())
            {
                (*iter)->get_scatterChart().toXmlElem("c:scatterChart", "", _outStream);
            }


            else if ((*iter)->has_pieChart())
            {
                (*iter)->get_pieChart().toXmlElem("c:pieChart", "", _outStream);
            }


            else if ((*iter)->has_pie3DChart())
            {
                (*iter)->get_pie3DChart().toXmlElem("c:pie3DChart", "", _outStream);
            }


            else if ((*iter)->has_doughnutChart())
            {
                (*iter)->get_doughnutChart().toXmlElem("c:doughnutChart", "", _outStream);
            }


            else if ((*iter)->has_barChart())
            {
                (*iter)->get_barChart().toXmlElem("c:barChart", "", _outStream);
            }


            else if ((*iter)->has_bar3DChart())
            {
                (*iter)->get_bar3DChart().toXmlElem("c:bar3DChart", "", _outStream);
            }


            else if ((*iter)->has_ofPieChart())
            {
                (*iter)->get_ofPieChart().toXmlElem("c:ofPieChart", "", _outStream);
            }


            else if ((*iter)->has_surfaceChart())
            {
                (*iter)->get_surfaceChart().toXmlElem("c:surfaceChart", "", _outStream);
            }


            else if ((*iter)->has_surface3DChart())
            {
                (*iter)->get_surface3DChart().toXmlElem("c:surface3DChart", "", _outStream);
            }


            else if ((*iter)->has_bubbleChart())
            {
                (*iter)->get_bubbleChart().toXmlElem("c:bubbleChart", "", _outStream);
            }


            else if ((*iter)->has_valAx())
            {
                (*iter)->get_valAx().toXmlElem("c:valAx", "", _outStream);
            }


            else if ((*iter)->has_catAx())
            {
                (*iter)->get_catAx().toXmlElem("c:catAx", "", _outStream);
            }


            else if ((*iter)->has_dateAx())
            {
                (*iter)->get_dateAx().toXmlElem("c:dateAx", "", _outStream);
            }


            else if ((*iter)->has_serAx())
            {
                (*iter)->get_serAx().toXmlElem("c:serAx", "", _outStream);
            }


        }
    }


    if (m_has_dTable)
    {
        m_dTable->toXmlElem("c:dTable", "", _outStream);
    }


    if (m_has_spPr)
    {
        m_spPr->toXmlElem("c:spPr", "", _outStream);
    }


    if (m_has_extLst)
    {
        m_extLst->toXmlElem("c:extLst", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_PlotArea& CT_PlotArea::default_instance()
{
    if (!CT_PlotArea::default_instance_)
    {
        CT_PlotArea::default_instance_ = new CT_PlotArea();
    }
    return *CT_PlotArea::default_instance_;
}


// CT_PlotArea::ChildGroup_1
CT_PlotArea::ChildGroup_1::ChildGroup_1()
    :m_has_areaChart(false),
     m_areaChart(NULL),
     m_has_area3DChart(false),
     m_area3DChart(NULL),
     m_has_lineChart(false),
     m_lineChart(NULL),
     m_has_line3DChart(false),
     m_line3DChart(NULL),
     m_has_stockChart(false),
     m_stockChart(NULL),
     m_has_radarChart(false),
     m_radarChart(NULL),
     m_has_scatterChart(false),
     m_scatterChart(NULL),
     m_has_pieChart(false),
     m_pieChart(NULL),
     m_has_pie3DChart(false),
     m_pie3DChart(NULL),
     m_has_doughnutChart(false),
     m_doughnutChart(NULL),
     m_has_barChart(false),
     m_barChart(NULL),
     m_has_bar3DChart(false),
     m_bar3DChart(NULL),
     m_has_ofPieChart(false),
     m_ofPieChart(NULL),
     m_has_surfaceChart(false),
     m_surfaceChart(NULL),
     m_has_surface3DChart(false),
     m_surface3DChart(NULL),
     m_has_bubbleChart(false),
     m_bubbleChart(NULL),
     m_has_valAx(false),
     m_valAx(NULL),
     m_has_catAx(false),
     m_catAx(NULL),
     m_has_dateAx(false),
     m_dateAx(NULL),
     m_has_serAx(false),
     m_serAx(NULL)
{
}
bool CT_PlotArea::ChildGroup_1::has_areaChart() const
{
    return m_has_areaChart;
}

CT_AreaChart* CT_PlotArea::ChildGroup_1::mutable_areaChart()
{

    m_has_area3DChart = false;

    if (m_area3DChart)
    {
        delete m_area3DChart;
        m_area3DChart = NULL;
    }
    ;

    m_has_lineChart = false;

    if (m_lineChart)
    {
        delete m_lineChart;
        m_lineChart = NULL;
    }
    ;

    m_has_line3DChart = false;

    if (m_line3DChart)
    {
        delete m_line3DChart;
        m_line3DChart = NULL;
    }
    ;

    m_has_stockChart = false;

    if (m_stockChart)
    {
        delete m_stockChart;
        m_stockChart = NULL;
    }
    ;

    m_has_radarChart = false;

    if (m_radarChart)
    {
        delete m_radarChart;
        m_radarChart = NULL;
    }
    ;

    m_has_scatterChart = false;

    if (m_scatterChart)
    {
        delete m_scatterChart;
        m_scatterChart = NULL;
    }
    ;

    m_has_pieChart = false;

    if (m_pieChart)
    {
        delete m_pieChart;
        m_pieChart = NULL;
    }
    ;

    m_has_pie3DChart = false;

    if (m_pie3DChart)
    {
        delete m_pie3DChart;
        m_pie3DChart = NULL;
    }
    ;

    m_has_doughnutChart = false;

    if (m_doughnutChart)
    {
        delete m_doughnutChart;
        m_doughnutChart = NULL;
    }
    ;

    m_has_barChart = false;

    if (m_barChart)
    {
        delete m_barChart;
        m_barChart = NULL;
    }
    ;

    m_has_bar3DChart = false;

    if (m_bar3DChart)
    {
        delete m_bar3DChart;
        m_bar3DChart = NULL;
    }
    ;

    m_has_ofPieChart = false;

    if (m_ofPieChart)
    {
        delete m_ofPieChart;
        m_ofPieChart = NULL;
    }
    ;

    m_has_surfaceChart = false;

    if (m_surfaceChart)
    {
        delete m_surfaceChart;
        m_surfaceChart = NULL;
    }
    ;

    m_has_surface3DChart = false;

    if (m_surface3DChart)
    {
        delete m_surface3DChart;
        m_surface3DChart = NULL;
    }
    ;

    m_has_bubbleChart = false;

    if (m_bubbleChart)
    {
        delete m_bubbleChart;
        m_bubbleChart = NULL;
    }
    ;

    m_has_valAx = false;

    if (m_valAx)
    {
        delete m_valAx;
        m_valAx = NULL;
    }
    ;

    m_has_catAx = false;

    if (m_catAx)
    {
        delete m_catAx;
        m_catAx = NULL;
    }
    ;

    m_has_dateAx = false;

    if (m_dateAx)
    {
        delete m_dateAx;
        m_dateAx = NULL;
    }
    ;

    m_has_serAx = false;

    if (m_serAx)
    {
        delete m_serAx;
        m_serAx = NULL;
    }
    ;

    m_has_areaChart = true;
    if (!m_areaChart)
    {
        m_areaChart = new CT_AreaChart();
    }
    return m_areaChart;
}

const CT_AreaChart& CT_PlotArea::ChildGroup_1::get_areaChart() const
{
    if (m_areaChart)
    {
        return *m_areaChart;
    }
    return CT_AreaChart::default_instance();
}

bool CT_PlotArea::ChildGroup_1::has_area3DChart() const
{
    return m_has_area3DChart;
}

CT_Area3DChart* CT_PlotArea::ChildGroup_1::mutable_area3DChart()
{

    m_has_areaChart = false;

    if (m_areaChart)
    {
        delete m_areaChart;
        m_areaChart = NULL;
    }
    ;

    m_has_lineChart = false;

    if (m_lineChart)
    {
        delete m_lineChart;
        m_lineChart = NULL;
    }
    ;

    m_has_line3DChart = false;

    if (m_line3DChart)
    {
        delete m_line3DChart;
        m_line3DChart = NULL;
    }
    ;

    m_has_stockChart = false;

    if (m_stockChart)
    {
        delete m_stockChart;
        m_stockChart = NULL;
    }
    ;

    m_has_radarChart = false;

    if (m_radarChart)
    {
        delete m_radarChart;
        m_radarChart = NULL;
    }
    ;

    m_has_scatterChart = false;

    if (m_scatterChart)
    {
        delete m_scatterChart;
        m_scatterChart = NULL;
    }
    ;

    m_has_pieChart = false;

    if (m_pieChart)
    {
        delete m_pieChart;
        m_pieChart = NULL;
    }
    ;

    m_has_pie3DChart = false;

    if (m_pie3DChart)
    {
        delete m_pie3DChart;
        m_pie3DChart = NULL;
    }
    ;

    m_has_doughnutChart = false;

    if (m_doughnutChart)
    {
        delete m_doughnutChart;
        m_doughnutChart = NULL;
    }
    ;

    m_has_barChart = false;

    if (m_barChart)
    {
        delete m_barChart;
        m_barChart = NULL;
    }
    ;

    m_has_bar3DChart = false;

    if (m_bar3DChart)
    {
        delete m_bar3DChart;
        m_bar3DChart = NULL;
    }
    ;

    m_has_ofPieChart = false;

    if (m_ofPieChart)
    {
        delete m_ofPieChart;
        m_ofPieChart = NULL;
    }
    ;

    m_has_surfaceChart = false;

    if (m_surfaceChart)
    {
        delete m_surfaceChart;
        m_surfaceChart = NULL;
    }
    ;

    m_has_surface3DChart = false;

    if (m_surface3DChart)
    {
        delete m_surface3DChart;
        m_surface3DChart = NULL;
    }
    ;

    m_has_bubbleChart = false;

    if (m_bubbleChart)
    {
        delete m_bubbleChart;
        m_bubbleChart = NULL;
    }
    ;

    m_has_valAx = false;

    if (m_valAx)
    {
        delete m_valAx;
        m_valAx = NULL;
    }
    ;

    m_has_catAx = false;

    if (m_catAx)
    {
        delete m_catAx;
        m_catAx = NULL;
    }
    ;

    m_has_dateAx = false;

    if (m_dateAx)
    {
        delete m_dateAx;
        m_dateAx = NULL;
    }
    ;

    m_has_serAx = false;

    if (m_serAx)
    {
        delete m_serAx;
        m_serAx = NULL;
    }
    ;

    m_has_area3DChart = true;
    if (!m_area3DChart)
    {
        m_area3DChart = new CT_Area3DChart();
    }
    return m_area3DChart;
}

const CT_Area3DChart& CT_PlotArea::ChildGroup_1::get_area3DChart() const
{
    if (m_area3DChart)
    {
        return *m_area3DChart;
    }
    return CT_Area3DChart::default_instance();
}

bool CT_PlotArea::ChildGroup_1::has_lineChart() const
{
    return m_has_lineChart;
}

CT_LineChart* CT_PlotArea::ChildGroup_1::mutable_lineChart()
{

    m_has_areaChart = false;

    if (m_areaChart)
    {
        delete m_areaChart;
        m_areaChart = NULL;
    }
    ;

    m_has_area3DChart = false;

    if (m_area3DChart)
    {
        delete m_area3DChart;
        m_area3DChart = NULL;
    }
    ;

    m_has_line3DChart = false;

    if (m_line3DChart)
    {
        delete m_line3DChart;
        m_line3DChart = NULL;
    }
    ;

    m_has_stockChart = false;

    if (m_stockChart)
    {
        delete m_stockChart;
        m_stockChart = NULL;
    }
    ;

    m_has_radarChart = false;

    if (m_radarChart)
    {
        delete m_radarChart;
        m_radarChart = NULL;
    }
    ;

    m_has_scatterChart = false;

    if (m_scatterChart)
    {
        delete m_scatterChart;
        m_scatterChart = NULL;
    }
    ;

    m_has_pieChart = false;

    if (m_pieChart)
    {
        delete m_pieChart;
        m_pieChart = NULL;
    }
    ;

    m_has_pie3DChart = false;

    if (m_pie3DChart)
    {
        delete m_pie3DChart;
        m_pie3DChart = NULL;
    }
    ;

    m_has_doughnutChart = false;

    if (m_doughnutChart)
    {
        delete m_doughnutChart;
        m_doughnutChart = NULL;
    }
    ;

    m_has_barChart = false;

    if (m_barChart)
    {
        delete m_barChart;
        m_barChart = NULL;
    }
    ;

    m_has_bar3DChart = false;

    if (m_bar3DChart)
    {
        delete m_bar3DChart;
        m_bar3DChart = NULL;
    }
    ;

    m_has_ofPieChart = false;

    if (m_ofPieChart)
    {
        delete m_ofPieChart;
        m_ofPieChart = NULL;
    }
    ;

    m_has_surfaceChart = false;

    if (m_surfaceChart)
    {
        delete m_surfaceChart;
        m_surfaceChart = NULL;
    }
    ;

    m_has_surface3DChart = false;

    if (m_surface3DChart)
    {
        delete m_surface3DChart;
        m_surface3DChart = NULL;
    }
    ;

    m_has_bubbleChart = false;

    if (m_bubbleChart)
    {
        delete m_bubbleChart;
        m_bubbleChart = NULL;
    }
    ;

    m_has_valAx = false;

    if (m_valAx)
    {
        delete m_valAx;
        m_valAx = NULL;
    }
    ;

    m_has_catAx = false;

    if (m_catAx)
    {
        delete m_catAx;
        m_catAx = NULL;
    }
    ;

    m_has_dateAx = false;

    if (m_dateAx)
    {
        delete m_dateAx;
        m_dateAx = NULL;
    }
    ;

    m_has_serAx = false;

    if (m_serAx)
    {
        delete m_serAx;
        m_serAx = NULL;
    }
    ;

    m_has_lineChart = true;
    if (!m_lineChart)
    {
        m_lineChart = new CT_LineChart();
    }
    return m_lineChart;
}

const CT_LineChart& CT_PlotArea::ChildGroup_1::get_lineChart() const
{
    if (m_lineChart)
    {
        return *m_lineChart;
    }
    return CT_LineChart::default_instance();
}

bool CT_PlotArea::ChildGroup_1::has_line3DChart() const
{
    return m_has_line3DChart;
}

CT_Line3DChart* CT_PlotArea::ChildGroup_1::mutable_line3DChart()
{

    m_has_areaChart = false;

    if (m_areaChart)
    {
        delete m_areaChart;
        m_areaChart = NULL;
    }
    ;

    m_has_area3DChart = false;

    if (m_area3DChart)
    {
        delete m_area3DChart;
        m_area3DChart = NULL;
    }
    ;

    m_has_lineChart = false;

    if (m_lineChart)
    {
        delete m_lineChart;
        m_lineChart = NULL;
    }
    ;

    m_has_stockChart = false;

    if (m_stockChart)
    {
        delete m_stockChart;
        m_stockChart = NULL;
    }
    ;

    m_has_radarChart = false;

    if (m_radarChart)
    {
        delete m_radarChart;
        m_radarChart = NULL;
    }
    ;

    m_has_scatterChart = false;

    if (m_scatterChart)
    {
        delete m_scatterChart;
        m_scatterChart = NULL;
    }
    ;

    m_has_pieChart = false;

    if (m_pieChart)
    {
        delete m_pieChart;
        m_pieChart = NULL;
    }
    ;

    m_has_pie3DChart = false;

    if (m_pie3DChart)
    {
        delete m_pie3DChart;
        m_pie3DChart = NULL;
    }
    ;

    m_has_doughnutChart = false;

    if (m_doughnutChart)
    {
        delete m_doughnutChart;
        m_doughnutChart = NULL;
    }
    ;

    m_has_barChart = false;

    if (m_barChart)
    {
        delete m_barChart;
        m_barChart = NULL;
    }
    ;

    m_has_bar3DChart = false;

    if (m_bar3DChart)
    {
        delete m_bar3DChart;
        m_bar3DChart = NULL;
    }
    ;

    m_has_ofPieChart = false;

    if (m_ofPieChart)
    {
        delete m_ofPieChart;
        m_ofPieChart = NULL;
    }
    ;

    m_has_surfaceChart = false;

    if (m_surfaceChart)
    {
        delete m_surfaceChart;
        m_surfaceChart = NULL;
    }
    ;

    m_has_surface3DChart = false;

    if (m_surface3DChart)
    {
        delete m_surface3DChart;
        m_surface3DChart = NULL;
    }
    ;

    m_has_bubbleChart = false;

    if (m_bubbleChart)
    {
        delete m_bubbleChart;
        m_bubbleChart = NULL;
    }
    ;

    m_has_valAx = false;

    if (m_valAx)
    {
        delete m_valAx;
        m_valAx = NULL;
    }
    ;

    m_has_catAx = false;

    if (m_catAx)
    {
        delete m_catAx;
        m_catAx = NULL;
    }
    ;

    m_has_dateAx = false;

    if (m_dateAx)
    {
        delete m_dateAx;
        m_dateAx = NULL;
    }
    ;

    m_has_serAx = false;

    if (m_serAx)
    {
        delete m_serAx;
        m_serAx = NULL;
    }
    ;

    m_has_line3DChart = true;
    if (!m_line3DChart)
    {
        m_line3DChart = new CT_Line3DChart();
    }
    return m_line3DChart;
}

const CT_Line3DChart& CT_PlotArea::ChildGroup_1::get_line3DChart() const
{
    if (m_line3DChart)
    {
        return *m_line3DChart;
    }
    return CT_Line3DChart::default_instance();
}

bool CT_PlotArea::ChildGroup_1::has_stockChart() const
{
    return m_has_stockChart;
}

CT_StockChart* CT_PlotArea::ChildGroup_1::mutable_stockChart()
{

    m_has_areaChart = false;

    if (m_areaChart)
    {
        delete m_areaChart;
        m_areaChart = NULL;
    }
    ;

    m_has_area3DChart = false;

    if (m_area3DChart)
    {
        delete m_area3DChart;
        m_area3DChart = NULL;
    }
    ;

    m_has_lineChart = false;

    if (m_lineChart)
    {
        delete m_lineChart;
        m_lineChart = NULL;
    }
    ;

    m_has_line3DChart = false;

    if (m_line3DChart)
    {
        delete m_line3DChart;
        m_line3DChart = NULL;
    }
    ;

    m_has_radarChart = false;

    if (m_radarChart)
    {
        delete m_radarChart;
        m_radarChart = NULL;
    }
    ;

    m_has_scatterChart = false;

    if (m_scatterChart)
    {
        delete m_scatterChart;
        m_scatterChart = NULL;
    }
    ;

    m_has_pieChart = false;

    if (m_pieChart)
    {
        delete m_pieChart;
        m_pieChart = NULL;
    }
    ;

    m_has_pie3DChart = false;

    if (m_pie3DChart)
    {
        delete m_pie3DChart;
        m_pie3DChart = NULL;
    }
    ;

    m_has_doughnutChart = false;

    if (m_doughnutChart)
    {
        delete m_doughnutChart;
        m_doughnutChart = NULL;
    }
    ;

    m_has_barChart = false;

    if (m_barChart)
    {
        delete m_barChart;
        m_barChart = NULL;
    }
    ;

    m_has_bar3DChart = false;

    if (m_bar3DChart)
    {
        delete m_bar3DChart;
        m_bar3DChart = NULL;
    }
    ;

    m_has_ofPieChart = false;

    if (m_ofPieChart)
    {
        delete m_ofPieChart;
        m_ofPieChart = NULL;
    }
    ;

    m_has_surfaceChart = false;

    if (m_surfaceChart)
    {
        delete m_surfaceChart;
        m_surfaceChart = NULL;
    }
    ;

    m_has_surface3DChart = false;

    if (m_surface3DChart)
    {
        delete m_surface3DChart;
        m_surface3DChart = NULL;
    }
    ;

    m_has_bubbleChart = false;

    if (m_bubbleChart)
    {
        delete m_bubbleChart;
        m_bubbleChart = NULL;
    }
    ;

    m_has_valAx = false;

    if (m_valAx)
    {
        delete m_valAx;
        m_valAx = NULL;
    }
    ;

    m_has_catAx = false;

    if (m_catAx)
    {
        delete m_catAx;
        m_catAx = NULL;
    }
    ;

    m_has_dateAx = false;

    if (m_dateAx)
    {
        delete m_dateAx;
        m_dateAx = NULL;
    }
    ;

    m_has_serAx = false;

    if (m_serAx)
    {
        delete m_serAx;
        m_serAx = NULL;
    }
    ;

    m_has_stockChart = true;
    if (!m_stockChart)
    {
        m_stockChart = new CT_StockChart();
    }
    return m_stockChart;
}

const CT_StockChart& CT_PlotArea::ChildGroup_1::get_stockChart() const
{
    if (m_stockChart)
    {
        return *m_stockChart;
    }
    return CT_StockChart::default_instance();
}

bool CT_PlotArea::ChildGroup_1::has_radarChart() const
{
    return m_has_radarChart;
}

CT_RadarChart* CT_PlotArea::ChildGroup_1::mutable_radarChart()
{

    m_has_areaChart = false;

    if (m_areaChart)
    {
        delete m_areaChart;
        m_areaChart = NULL;
    }
    ;

    m_has_area3DChart = false;

    if (m_area3DChart)
    {
        delete m_area3DChart;
        m_area3DChart = NULL;
    }
    ;

    m_has_lineChart = false;

    if (m_lineChart)
    {
        delete m_lineChart;
        m_lineChart = NULL;
    }
    ;

    m_has_line3DChart = false;

    if (m_line3DChart)
    {
        delete m_line3DChart;
        m_line3DChart = NULL;
    }
    ;

    m_has_stockChart = false;

    if (m_stockChart)
    {
        delete m_stockChart;
        m_stockChart = NULL;
    }
    ;

    m_has_scatterChart = false;

    if (m_scatterChart)
    {
        delete m_scatterChart;
        m_scatterChart = NULL;
    }
    ;

    m_has_pieChart = false;

    if (m_pieChart)
    {
        delete m_pieChart;
        m_pieChart = NULL;
    }
    ;

    m_has_pie3DChart = false;

    if (m_pie3DChart)
    {
        delete m_pie3DChart;
        m_pie3DChart = NULL;
    }
    ;

    m_has_doughnutChart = false;

    if (m_doughnutChart)
    {
        delete m_doughnutChart;
        m_doughnutChart = NULL;
    }
    ;

    m_has_barChart = false;

    if (m_barChart)
    {
        delete m_barChart;
        m_barChart = NULL;
    }
    ;

    m_has_bar3DChart = false;

    if (m_bar3DChart)
    {
        delete m_bar3DChart;
        m_bar3DChart = NULL;
    }
    ;

    m_has_ofPieChart = false;

    if (m_ofPieChart)
    {
        delete m_ofPieChart;
        m_ofPieChart = NULL;
    }
    ;

    m_has_surfaceChart = false;

    if (m_surfaceChart)
    {
        delete m_surfaceChart;
        m_surfaceChart = NULL;
    }
    ;

    m_has_surface3DChart = false;

    if (m_surface3DChart)
    {
        delete m_surface3DChart;
        m_surface3DChart = NULL;
    }
    ;

    m_has_bubbleChart = false;

    if (m_bubbleChart)
    {
        delete m_bubbleChart;
        m_bubbleChart = NULL;
    }
    ;

    m_has_valAx = false;

    if (m_valAx)
    {
        delete m_valAx;
        m_valAx = NULL;
    }
    ;

    m_has_catAx = false;

    if (m_catAx)
    {
        delete m_catAx;
        m_catAx = NULL;
    }
    ;

    m_has_dateAx = false;

    if (m_dateAx)
    {
        delete m_dateAx;
        m_dateAx = NULL;
    }
    ;

    m_has_serAx = false;

    if (m_serAx)
    {
        delete m_serAx;
        m_serAx = NULL;
    }
    ;

    m_has_radarChart = true;
    if (!m_radarChart)
    {
        m_radarChart = new CT_RadarChart();
    }
    return m_radarChart;
}

const CT_RadarChart& CT_PlotArea::ChildGroup_1::get_radarChart() const
{
    if (m_radarChart)
    {
        return *m_radarChart;
    }
    return CT_RadarChart::default_instance();
}

bool CT_PlotArea::ChildGroup_1::has_scatterChart() const
{
    return m_has_scatterChart;
}

CT_ScatterChart* CT_PlotArea::ChildGroup_1::mutable_scatterChart()
{

    m_has_areaChart = false;

    if (m_areaChart)
    {
        delete m_areaChart;
        m_areaChart = NULL;
    }
    ;

    m_has_area3DChart = false;

    if (m_area3DChart)
    {
        delete m_area3DChart;
        m_area3DChart = NULL;
    }
    ;

    m_has_lineChart = false;

    if (m_lineChart)
    {
        delete m_lineChart;
        m_lineChart = NULL;
    }
    ;

    m_has_line3DChart = false;

    if (m_line3DChart)
    {
        delete m_line3DChart;
        m_line3DChart = NULL;
    }
    ;

    m_has_stockChart = false;

    if (m_stockChart)
    {
        delete m_stockChart;
        m_stockChart = NULL;
    }
    ;

    m_has_radarChart = false;

    if (m_radarChart)
    {
        delete m_radarChart;
        m_radarChart = NULL;
    }
    ;

    m_has_pieChart = false;

    if (m_pieChart)
    {
        delete m_pieChart;
        m_pieChart = NULL;
    }
    ;

    m_has_pie3DChart = false;

    if (m_pie3DChart)
    {
        delete m_pie3DChart;
        m_pie3DChart = NULL;
    }
    ;

    m_has_doughnutChart = false;

    if (m_doughnutChart)
    {
        delete m_doughnutChart;
        m_doughnutChart = NULL;
    }
    ;

    m_has_barChart = false;

    if (m_barChart)
    {
        delete m_barChart;
        m_barChart = NULL;
    }
    ;

    m_has_bar3DChart = false;

    if (m_bar3DChart)
    {
        delete m_bar3DChart;
        m_bar3DChart = NULL;
    }
    ;

    m_has_ofPieChart = false;

    if (m_ofPieChart)
    {
        delete m_ofPieChart;
        m_ofPieChart = NULL;
    }
    ;

    m_has_surfaceChart = false;

    if (m_surfaceChart)
    {
        delete m_surfaceChart;
        m_surfaceChart = NULL;
    }
    ;

    m_has_surface3DChart = false;

    if (m_surface3DChart)
    {
        delete m_surface3DChart;
        m_surface3DChart = NULL;
    }
    ;

    m_has_bubbleChart = false;

    if (m_bubbleChart)
    {
        delete m_bubbleChart;
        m_bubbleChart = NULL;
    }
    ;

    m_has_valAx = false;

    if (m_valAx)
    {
        delete m_valAx;
        m_valAx = NULL;
    }
    ;

    m_has_catAx = false;

    if (m_catAx)
    {
        delete m_catAx;
        m_catAx = NULL;
    }
    ;

    m_has_dateAx = false;

    if (m_dateAx)
    {
        delete m_dateAx;
        m_dateAx = NULL;
    }
    ;

    m_has_serAx = false;

    if (m_serAx)
    {
        delete m_serAx;
        m_serAx = NULL;
    }
    ;

    m_has_scatterChart = true;
    if (!m_scatterChart)
    {
        m_scatterChart = new CT_ScatterChart();
    }
    return m_scatterChart;
}

const CT_ScatterChart& CT_PlotArea::ChildGroup_1::get_scatterChart() const
{
    if (m_scatterChart)
    {
        return *m_scatterChart;
    }
    return CT_ScatterChart::default_instance();
}

bool CT_PlotArea::ChildGroup_1::has_pieChart() const
{
    return m_has_pieChart;
}

CT_PieChart* CT_PlotArea::ChildGroup_1::mutable_pieChart()
{

    m_has_areaChart = false;

    if (m_areaChart)
    {
        delete m_areaChart;
        m_areaChart = NULL;
    }
    ;

    m_has_area3DChart = false;

    if (m_area3DChart)
    {
        delete m_area3DChart;
        m_area3DChart = NULL;
    }
    ;

    m_has_lineChart = false;

    if (m_lineChart)
    {
        delete m_lineChart;
        m_lineChart = NULL;
    }
    ;

    m_has_line3DChart = false;

    if (m_line3DChart)
    {
        delete m_line3DChart;
        m_line3DChart = NULL;
    }
    ;

    m_has_stockChart = false;

    if (m_stockChart)
    {
        delete m_stockChart;
        m_stockChart = NULL;
    }
    ;

    m_has_radarChart = false;

    if (m_radarChart)
    {
        delete m_radarChart;
        m_radarChart = NULL;
    }
    ;

    m_has_scatterChart = false;

    if (m_scatterChart)
    {
        delete m_scatterChart;
        m_scatterChart = NULL;
    }
    ;

    m_has_pie3DChart = false;

    if (m_pie3DChart)
    {
        delete m_pie3DChart;
        m_pie3DChart = NULL;
    }
    ;

    m_has_doughnutChart = false;

    if (m_doughnutChart)
    {
        delete m_doughnutChart;
        m_doughnutChart = NULL;
    }
    ;

    m_has_barChart = false;

    if (m_barChart)
    {
        delete m_barChart;
        m_barChart = NULL;
    }
    ;

    m_has_bar3DChart = false;

    if (m_bar3DChart)
    {
        delete m_bar3DChart;
        m_bar3DChart = NULL;
    }
    ;

    m_has_ofPieChart = false;

    if (m_ofPieChart)
    {
        delete m_ofPieChart;
        m_ofPieChart = NULL;
    }
    ;

    m_has_surfaceChart = false;

    if (m_surfaceChart)
    {
        delete m_surfaceChart;
        m_surfaceChart = NULL;
    }
    ;

    m_has_surface3DChart = false;

    if (m_surface3DChart)
    {
        delete m_surface3DChart;
        m_surface3DChart = NULL;
    }
    ;

    m_has_bubbleChart = false;

    if (m_bubbleChart)
    {
        delete m_bubbleChart;
        m_bubbleChart = NULL;
    }
    ;

    m_has_valAx = false;

    if (m_valAx)
    {
        delete m_valAx;
        m_valAx = NULL;
    }
    ;

    m_has_catAx = false;

    if (m_catAx)
    {
        delete m_catAx;
        m_catAx = NULL;
    }
    ;

    m_has_dateAx = false;

    if (m_dateAx)
    {
        delete m_dateAx;
        m_dateAx = NULL;
    }
    ;

    m_has_serAx = false;

    if (m_serAx)
    {
        delete m_serAx;
        m_serAx = NULL;
    }
    ;

    m_has_pieChart = true;
    if (!m_pieChart)
    {
        m_pieChart = new CT_PieChart();
    }
    return m_pieChart;
}

const CT_PieChart& CT_PlotArea::ChildGroup_1::get_pieChart() const
{
    if (m_pieChart)
    {
        return *m_pieChart;
    }
    return CT_PieChart::default_instance();
}

bool CT_PlotArea::ChildGroup_1::has_pie3DChart() const
{
    return m_has_pie3DChart;
}

CT_Pie3DChart* CT_PlotArea::ChildGroup_1::mutable_pie3DChart()
{

    m_has_areaChart = false;

    if (m_areaChart)
    {
        delete m_areaChart;
        m_areaChart = NULL;
    }
    ;

    m_has_area3DChart = false;

    if (m_area3DChart)
    {
        delete m_area3DChart;
        m_area3DChart = NULL;
    }
    ;

    m_has_lineChart = false;

    if (m_lineChart)
    {
        delete m_lineChart;
        m_lineChart = NULL;
    }
    ;

    m_has_line3DChart = false;

    if (m_line3DChart)
    {
        delete m_line3DChart;
        m_line3DChart = NULL;
    }
    ;

    m_has_stockChart = false;

    if (m_stockChart)
    {
        delete m_stockChart;
        m_stockChart = NULL;
    }
    ;

    m_has_radarChart = false;

    if (m_radarChart)
    {
        delete m_radarChart;
        m_radarChart = NULL;
    }
    ;

    m_has_scatterChart = false;

    if (m_scatterChart)
    {
        delete m_scatterChart;
        m_scatterChart = NULL;
    }
    ;

    m_has_pieChart = false;

    if (m_pieChart)
    {
        delete m_pieChart;
        m_pieChart = NULL;
    }
    ;

    m_has_doughnutChart = false;

    if (m_doughnutChart)
    {
        delete m_doughnutChart;
        m_doughnutChart = NULL;
    }
    ;

    m_has_barChart = false;

    if (m_barChart)
    {
        delete m_barChart;
        m_barChart = NULL;
    }
    ;

    m_has_bar3DChart = false;

    if (m_bar3DChart)
    {
        delete m_bar3DChart;
        m_bar3DChart = NULL;
    }
    ;

    m_has_ofPieChart = false;

    if (m_ofPieChart)
    {
        delete m_ofPieChart;
        m_ofPieChart = NULL;
    }
    ;

    m_has_surfaceChart = false;

    if (m_surfaceChart)
    {
        delete m_surfaceChart;
        m_surfaceChart = NULL;
    }
    ;

    m_has_surface3DChart = false;

    if (m_surface3DChart)
    {
        delete m_surface3DChart;
        m_surface3DChart = NULL;
    }
    ;

    m_has_bubbleChart = false;

    if (m_bubbleChart)
    {
        delete m_bubbleChart;
        m_bubbleChart = NULL;
    }
    ;

    m_has_valAx = false;

    if (m_valAx)
    {
        delete m_valAx;
        m_valAx = NULL;
    }
    ;

    m_has_catAx = false;

    if (m_catAx)
    {
        delete m_catAx;
        m_catAx = NULL;
    }
    ;

    m_has_dateAx = false;

    if (m_dateAx)
    {
        delete m_dateAx;
        m_dateAx = NULL;
    }
    ;

    m_has_serAx = false;

    if (m_serAx)
    {
        delete m_serAx;
        m_serAx = NULL;
    }
    ;

    m_has_pie3DChart = true;
    if (!m_pie3DChart)
    {
        m_pie3DChart = new CT_Pie3DChart();
    }
    return m_pie3DChart;
}

const CT_Pie3DChart& CT_PlotArea::ChildGroup_1::get_pie3DChart() const
{
    if (m_pie3DChart)
    {
        return *m_pie3DChart;
    }
    return CT_Pie3DChart::default_instance();
}

bool CT_PlotArea::ChildGroup_1::has_doughnutChart() const
{
    return m_has_doughnutChart;
}

CT_DoughnutChart* CT_PlotArea::ChildGroup_1::mutable_doughnutChart()
{

    m_has_areaChart = false;

    if (m_areaChart)
    {
        delete m_areaChart;
        m_areaChart = NULL;
    }
    ;

    m_has_area3DChart = false;

    if (m_area3DChart)
    {
        delete m_area3DChart;
        m_area3DChart = NULL;
    }
    ;

    m_has_lineChart = false;

    if (m_lineChart)
    {
        delete m_lineChart;
        m_lineChart = NULL;
    }
    ;

    m_has_line3DChart = false;

    if (m_line3DChart)
    {
        delete m_line3DChart;
        m_line3DChart = NULL;
    }
    ;

    m_has_stockChart = false;

    if (m_stockChart)
    {
        delete m_stockChart;
        m_stockChart = NULL;
    }
    ;

    m_has_radarChart = false;

    if (m_radarChart)
    {
        delete m_radarChart;
        m_radarChart = NULL;
    }
    ;

    m_has_scatterChart = false;

    if (m_scatterChart)
    {
        delete m_scatterChart;
        m_scatterChart = NULL;
    }
    ;

    m_has_pieChart = false;

    if (m_pieChart)
    {
        delete m_pieChart;
        m_pieChart = NULL;
    }
    ;

    m_has_pie3DChart = false;

    if (m_pie3DChart)
    {
        delete m_pie3DChart;
        m_pie3DChart = NULL;
    }
    ;

    m_has_barChart = false;

    if (m_barChart)
    {
        delete m_barChart;
        m_barChart = NULL;
    }
    ;

    m_has_bar3DChart = false;

    if (m_bar3DChart)
    {
        delete m_bar3DChart;
        m_bar3DChart = NULL;
    }
    ;

    m_has_ofPieChart = false;

    if (m_ofPieChart)
    {
        delete m_ofPieChart;
        m_ofPieChart = NULL;
    }
    ;

    m_has_surfaceChart = false;

    if (m_surfaceChart)
    {
        delete m_surfaceChart;
        m_surfaceChart = NULL;
    }
    ;

    m_has_surface3DChart = false;

    if (m_surface3DChart)
    {
        delete m_surface3DChart;
        m_surface3DChart = NULL;
    }
    ;

    m_has_bubbleChart = false;

    if (m_bubbleChart)
    {
        delete m_bubbleChart;
        m_bubbleChart = NULL;
    }
    ;

    m_has_valAx = false;

    if (m_valAx)
    {
        delete m_valAx;
        m_valAx = NULL;
    }
    ;

    m_has_catAx = false;

    if (m_catAx)
    {
        delete m_catAx;
        m_catAx = NULL;
    }
    ;

    m_has_dateAx = false;

    if (m_dateAx)
    {
        delete m_dateAx;
        m_dateAx = NULL;
    }
    ;

    m_has_serAx = false;

    if (m_serAx)
    {
        delete m_serAx;
        m_serAx = NULL;
    }
    ;

    m_has_doughnutChart = true;
    if (!m_doughnutChart)
    {
        m_doughnutChart = new CT_DoughnutChart();
    }
    return m_doughnutChart;
}

const CT_DoughnutChart& CT_PlotArea::ChildGroup_1::get_doughnutChart() const
{
    if (m_doughnutChart)
    {
        return *m_doughnutChart;
    }
    return CT_DoughnutChart::default_instance();
}

bool CT_PlotArea::ChildGroup_1::has_barChart() const
{
    return m_has_barChart;
}

CT_BarChart* CT_PlotArea::ChildGroup_1::mutable_barChart()
{

    m_has_areaChart = false;

    if (m_areaChart)
    {
        delete m_areaChart;
        m_areaChart = NULL;
    }
    ;

    m_has_area3DChart = false;

    if (m_area3DChart)
    {
        delete m_area3DChart;
        m_area3DChart = NULL;
    }
    ;

    m_has_lineChart = false;

    if (m_lineChart)
    {
        delete m_lineChart;
        m_lineChart = NULL;
    }
    ;

    m_has_line3DChart = false;

    if (m_line3DChart)
    {
        delete m_line3DChart;
        m_line3DChart = NULL;
    }
    ;

    m_has_stockChart = false;

    if (m_stockChart)
    {
        delete m_stockChart;
        m_stockChart = NULL;
    }
    ;

    m_has_radarChart = false;

    if (m_radarChart)
    {
        delete m_radarChart;
        m_radarChart = NULL;
    }
    ;

    m_has_scatterChart = false;

    if (m_scatterChart)
    {
        delete m_scatterChart;
        m_scatterChart = NULL;
    }
    ;

    m_has_pieChart = false;

    if (m_pieChart)
    {
        delete m_pieChart;
        m_pieChart = NULL;
    }
    ;

    m_has_pie3DChart = false;

    if (m_pie3DChart)
    {
        delete m_pie3DChart;
        m_pie3DChart = NULL;
    }
    ;

    m_has_doughnutChart = false;

    if (m_doughnutChart)
    {
        delete m_doughnutChart;
        m_doughnutChart = NULL;
    }
    ;

    m_has_bar3DChart = false;

    if (m_bar3DChart)
    {
        delete m_bar3DChart;
        m_bar3DChart = NULL;
    }
    ;

    m_has_ofPieChart = false;

    if (m_ofPieChart)
    {
        delete m_ofPieChart;
        m_ofPieChart = NULL;
    }
    ;

    m_has_surfaceChart = false;

    if (m_surfaceChart)
    {
        delete m_surfaceChart;
        m_surfaceChart = NULL;
    }
    ;

    m_has_surface3DChart = false;

    if (m_surface3DChart)
    {
        delete m_surface3DChart;
        m_surface3DChart = NULL;
    }
    ;

    m_has_bubbleChart = false;

    if (m_bubbleChart)
    {
        delete m_bubbleChart;
        m_bubbleChart = NULL;
    }
    ;

    m_has_valAx = false;

    if (m_valAx)
    {
        delete m_valAx;
        m_valAx = NULL;
    }
    ;

    m_has_catAx = false;

    if (m_catAx)
    {
        delete m_catAx;
        m_catAx = NULL;
    }
    ;

    m_has_dateAx = false;

    if (m_dateAx)
    {
        delete m_dateAx;
        m_dateAx = NULL;
    }
    ;

    m_has_serAx = false;

    if (m_serAx)
    {
        delete m_serAx;
        m_serAx = NULL;
    }
    ;

    m_has_barChart = true;
    if (!m_barChart)
    {
        m_barChart = new CT_BarChart();
    }
    return m_barChart;
}

const CT_BarChart& CT_PlotArea::ChildGroup_1::get_barChart() const
{
    if (m_barChart)
    {
        return *m_barChart;
    }
    return CT_BarChart::default_instance();
}

bool CT_PlotArea::ChildGroup_1::has_bar3DChart() const
{
    return m_has_bar3DChart;
}

CT_Bar3DChart* CT_PlotArea::ChildGroup_1::mutable_bar3DChart()
{

    m_has_areaChart = false;

    if (m_areaChart)
    {
        delete m_areaChart;
        m_areaChart = NULL;
    }
    ;

    m_has_area3DChart = false;

    if (m_area3DChart)
    {
        delete m_area3DChart;
        m_area3DChart = NULL;
    }
    ;

    m_has_lineChart = false;

    if (m_lineChart)
    {
        delete m_lineChart;
        m_lineChart = NULL;
    }
    ;

    m_has_line3DChart = false;

    if (m_line3DChart)
    {
        delete m_line3DChart;
        m_line3DChart = NULL;
    }
    ;

    m_has_stockChart = false;

    if (m_stockChart)
    {
        delete m_stockChart;
        m_stockChart = NULL;
    }
    ;

    m_has_radarChart = false;

    if (m_radarChart)
    {
        delete m_radarChart;
        m_radarChart = NULL;
    }
    ;

    m_has_scatterChart = false;

    if (m_scatterChart)
    {
        delete m_scatterChart;
        m_scatterChart = NULL;
    }
    ;

    m_has_pieChart = false;

    if (m_pieChart)
    {
        delete m_pieChart;
        m_pieChart = NULL;
    }
    ;

    m_has_pie3DChart = false;

    if (m_pie3DChart)
    {
        delete m_pie3DChart;
        m_pie3DChart = NULL;
    }
    ;

    m_has_doughnutChart = false;

    if (m_doughnutChart)
    {
        delete m_doughnutChart;
        m_doughnutChart = NULL;
    }
    ;

    m_has_barChart = false;

    if (m_barChart)
    {
        delete m_barChart;
        m_barChart = NULL;
    }
    ;

    m_has_ofPieChart = false;

    if (m_ofPieChart)
    {
        delete m_ofPieChart;
        m_ofPieChart = NULL;
    }
    ;

    m_has_surfaceChart = false;

    if (m_surfaceChart)
    {
        delete m_surfaceChart;
        m_surfaceChart = NULL;
    }
    ;

    m_has_surface3DChart = false;

    if (m_surface3DChart)
    {
        delete m_surface3DChart;
        m_surface3DChart = NULL;
    }
    ;

    m_has_bubbleChart = false;

    if (m_bubbleChart)
    {
        delete m_bubbleChart;
        m_bubbleChart = NULL;
    }
    ;

    m_has_valAx = false;

    if (m_valAx)
    {
        delete m_valAx;
        m_valAx = NULL;
    }
    ;

    m_has_catAx = false;

    if (m_catAx)
    {
        delete m_catAx;
        m_catAx = NULL;
    }
    ;

    m_has_dateAx = false;

    if (m_dateAx)
    {
        delete m_dateAx;
        m_dateAx = NULL;
    }
    ;

    m_has_serAx = false;

    if (m_serAx)
    {
        delete m_serAx;
        m_serAx = NULL;
    }
    ;

    m_has_bar3DChart = true;
    if (!m_bar3DChart)
    {
        m_bar3DChart = new CT_Bar3DChart();
    }
    return m_bar3DChart;
}

const CT_Bar3DChart& CT_PlotArea::ChildGroup_1::get_bar3DChart() const
{
    if (m_bar3DChart)
    {
        return *m_bar3DChart;
    }
    return CT_Bar3DChart::default_instance();
}

bool CT_PlotArea::ChildGroup_1::has_ofPieChart() const
{
    return m_has_ofPieChart;
}

CT_OfPieChart* CT_PlotArea::ChildGroup_1::mutable_ofPieChart()
{

    m_has_areaChart = false;

    if (m_areaChart)
    {
        delete m_areaChart;
        m_areaChart = NULL;
    }
    ;

    m_has_area3DChart = false;

    if (m_area3DChart)
    {
        delete m_area3DChart;
        m_area3DChart = NULL;
    }
    ;

    m_has_lineChart = false;

    if (m_lineChart)
    {
        delete m_lineChart;
        m_lineChart = NULL;
    }
    ;

    m_has_line3DChart = false;

    if (m_line3DChart)
    {
        delete m_line3DChart;
        m_line3DChart = NULL;
    }
    ;

    m_has_stockChart = false;

    if (m_stockChart)
    {
        delete m_stockChart;
        m_stockChart = NULL;
    }
    ;

    m_has_radarChart = false;

    if (m_radarChart)
    {
        delete m_radarChart;
        m_radarChart = NULL;
    }
    ;

    m_has_scatterChart = false;

    if (m_scatterChart)
    {
        delete m_scatterChart;
        m_scatterChart = NULL;
    }
    ;

    m_has_pieChart = false;

    if (m_pieChart)
    {
        delete m_pieChart;
        m_pieChart = NULL;
    }
    ;

    m_has_pie3DChart = false;

    if (m_pie3DChart)
    {
        delete m_pie3DChart;
        m_pie3DChart = NULL;
    }
    ;

    m_has_doughnutChart = false;

    if (m_doughnutChart)
    {
        delete m_doughnutChart;
        m_doughnutChart = NULL;
    }
    ;

    m_has_barChart = false;

    if (m_barChart)
    {
        delete m_barChart;
        m_barChart = NULL;
    }
    ;

    m_has_bar3DChart = false;

    if (m_bar3DChart)
    {
        delete m_bar3DChart;
        m_bar3DChart = NULL;
    }
    ;

    m_has_surfaceChart = false;

    if (m_surfaceChart)
    {
        delete m_surfaceChart;
        m_surfaceChart = NULL;
    }
    ;

    m_has_surface3DChart = false;

    if (m_surface3DChart)
    {
        delete m_surface3DChart;
        m_surface3DChart = NULL;
    }
    ;

    m_has_bubbleChart = false;

    if (m_bubbleChart)
    {
        delete m_bubbleChart;
        m_bubbleChart = NULL;
    }
    ;

    m_has_valAx = false;

    if (m_valAx)
    {
        delete m_valAx;
        m_valAx = NULL;
    }
    ;

    m_has_catAx = false;

    if (m_catAx)
    {
        delete m_catAx;
        m_catAx = NULL;
    }
    ;

    m_has_dateAx = false;

    if (m_dateAx)
    {
        delete m_dateAx;
        m_dateAx = NULL;
    }
    ;

    m_has_serAx = false;

    if (m_serAx)
    {
        delete m_serAx;
        m_serAx = NULL;
    }
    ;

    m_has_ofPieChart = true;
    if (!m_ofPieChart)
    {
        m_ofPieChart = new CT_OfPieChart();
    }
    return m_ofPieChart;
}

const CT_OfPieChart& CT_PlotArea::ChildGroup_1::get_ofPieChart() const
{
    if (m_ofPieChart)
    {
        return *m_ofPieChart;
    }
    return CT_OfPieChart::default_instance();
}

bool CT_PlotArea::ChildGroup_1::has_surfaceChart() const
{
    return m_has_surfaceChart;
}

CT_SurfaceChart* CT_PlotArea::ChildGroup_1::mutable_surfaceChart()
{

    m_has_areaChart = false;

    if (m_areaChart)
    {
        delete m_areaChart;
        m_areaChart = NULL;
    }
    ;

    m_has_area3DChart = false;

    if (m_area3DChart)
    {
        delete m_area3DChart;
        m_area3DChart = NULL;
    }
    ;

    m_has_lineChart = false;

    if (m_lineChart)
    {
        delete m_lineChart;
        m_lineChart = NULL;
    }
    ;

    m_has_line3DChart = false;

    if (m_line3DChart)
    {
        delete m_line3DChart;
        m_line3DChart = NULL;
    }
    ;

    m_has_stockChart = false;

    if (m_stockChart)
    {
        delete m_stockChart;
        m_stockChart = NULL;
    }
    ;

    m_has_radarChart = false;

    if (m_radarChart)
    {
        delete m_radarChart;
        m_radarChart = NULL;
    }
    ;

    m_has_scatterChart = false;

    if (m_scatterChart)
    {
        delete m_scatterChart;
        m_scatterChart = NULL;
    }
    ;

    m_has_pieChart = false;

    if (m_pieChart)
    {
        delete m_pieChart;
        m_pieChart = NULL;
    }
    ;

    m_has_pie3DChart = false;

    if (m_pie3DChart)
    {
        delete m_pie3DChart;
        m_pie3DChart = NULL;
    }
    ;

    m_has_doughnutChart = false;

    if (m_doughnutChart)
    {
        delete m_doughnutChart;
        m_doughnutChart = NULL;
    }
    ;

    m_has_barChart = false;

    if (m_barChart)
    {
        delete m_barChart;
        m_barChart = NULL;
    }
    ;

    m_has_bar3DChart = false;

    if (m_bar3DChart)
    {
        delete m_bar3DChart;
        m_bar3DChart = NULL;
    }
    ;

    m_has_ofPieChart = false;

    if (m_ofPieChart)
    {
        delete m_ofPieChart;
        m_ofPieChart = NULL;
    }
    ;

    m_has_surface3DChart = false;

    if (m_surface3DChart)
    {
        delete m_surface3DChart;
        m_surface3DChart = NULL;
    }
    ;

    m_has_bubbleChart = false;

    if (m_bubbleChart)
    {
        delete m_bubbleChart;
        m_bubbleChart = NULL;
    }
    ;

    m_has_valAx = false;

    if (m_valAx)
    {
        delete m_valAx;
        m_valAx = NULL;
    }
    ;

    m_has_catAx = false;

    if (m_catAx)
    {
        delete m_catAx;
        m_catAx = NULL;
    }
    ;

    m_has_dateAx = false;

    if (m_dateAx)
    {
        delete m_dateAx;
        m_dateAx = NULL;
    }
    ;

    m_has_serAx = false;

    if (m_serAx)
    {
        delete m_serAx;
        m_serAx = NULL;
    }
    ;

    m_has_surfaceChart = true;
    if (!m_surfaceChart)
    {
        m_surfaceChart = new CT_SurfaceChart();
    }
    return m_surfaceChart;
}

const CT_SurfaceChart& CT_PlotArea::ChildGroup_1::get_surfaceChart() const
{
    if (m_surfaceChart)
    {
        return *m_surfaceChart;
    }
    return CT_SurfaceChart::default_instance();
}

bool CT_PlotArea::ChildGroup_1::has_surface3DChart() const
{
    return m_has_surface3DChart;
}

CT_Surface3DChart* CT_PlotArea::ChildGroup_1::mutable_surface3DChart()
{

    m_has_areaChart = false;

    if (m_areaChart)
    {
        delete m_areaChart;
        m_areaChart = NULL;
    }
    ;

    m_has_area3DChart = false;

    if (m_area3DChart)
    {
        delete m_area3DChart;
        m_area3DChart = NULL;
    }
    ;

    m_has_lineChart = false;

    if (m_lineChart)
    {
        delete m_lineChart;
        m_lineChart = NULL;
    }
    ;

    m_has_line3DChart = false;

    if (m_line3DChart)
    {
        delete m_line3DChart;
        m_line3DChart = NULL;
    }
    ;

    m_has_stockChart = false;

    if (m_stockChart)
    {
        delete m_stockChart;
        m_stockChart = NULL;
    }
    ;

    m_has_radarChart = false;

    if (m_radarChart)
    {
        delete m_radarChart;
        m_radarChart = NULL;
    }
    ;

    m_has_scatterChart = false;

    if (m_scatterChart)
    {
        delete m_scatterChart;
        m_scatterChart = NULL;
    }
    ;

    m_has_pieChart = false;

    if (m_pieChart)
    {
        delete m_pieChart;
        m_pieChart = NULL;
    }
    ;

    m_has_pie3DChart = false;

    if (m_pie3DChart)
    {
        delete m_pie3DChart;
        m_pie3DChart = NULL;
    }
    ;

    m_has_doughnutChart = false;

    if (m_doughnutChart)
    {
        delete m_doughnutChart;
        m_doughnutChart = NULL;
    }
    ;

    m_has_barChart = false;

    if (m_barChart)
    {
        delete m_barChart;
        m_barChart = NULL;
    }
    ;

    m_has_bar3DChart = false;

    if (m_bar3DChart)
    {
        delete m_bar3DChart;
        m_bar3DChart = NULL;
    }
    ;

    m_has_ofPieChart = false;

    if (m_ofPieChart)
    {
        delete m_ofPieChart;
        m_ofPieChart = NULL;
    }
    ;

    m_has_surfaceChart = false;

    if (m_surfaceChart)
    {
        delete m_surfaceChart;
        m_surfaceChart = NULL;
    }
    ;

    m_has_bubbleChart = false;

    if (m_bubbleChart)
    {
        delete m_bubbleChart;
        m_bubbleChart = NULL;
    }
    ;

    m_has_valAx = false;

    if (m_valAx)
    {
        delete m_valAx;
        m_valAx = NULL;
    }
    ;

    m_has_catAx = false;

    if (m_catAx)
    {
        delete m_catAx;
        m_catAx = NULL;
    }
    ;

    m_has_dateAx = false;

    if (m_dateAx)
    {
        delete m_dateAx;
        m_dateAx = NULL;
    }
    ;

    m_has_serAx = false;

    if (m_serAx)
    {
        delete m_serAx;
        m_serAx = NULL;
    }
    ;

    m_has_surface3DChart = true;
    if (!m_surface3DChart)
    {
        m_surface3DChart = new CT_Surface3DChart();
    }
    return m_surface3DChart;
}

const CT_Surface3DChart& CT_PlotArea::ChildGroup_1::get_surface3DChart() const
{
    if (m_surface3DChart)
    {
        return *m_surface3DChart;
    }
    return CT_Surface3DChart::default_instance();
}

bool CT_PlotArea::ChildGroup_1::has_bubbleChart() const
{
    return m_has_bubbleChart;
}

CT_BubbleChart* CT_PlotArea::ChildGroup_1::mutable_bubbleChart()
{

    m_has_areaChart = false;

    if (m_areaChart)
    {
        delete m_areaChart;
        m_areaChart = NULL;
    }
    ;

    m_has_area3DChart = false;

    if (m_area3DChart)
    {
        delete m_area3DChart;
        m_area3DChart = NULL;
    }
    ;

    m_has_lineChart = false;

    if (m_lineChart)
    {
        delete m_lineChart;
        m_lineChart = NULL;
    }
    ;

    m_has_line3DChart = false;

    if (m_line3DChart)
    {
        delete m_line3DChart;
        m_line3DChart = NULL;
    }
    ;

    m_has_stockChart = false;

    if (m_stockChart)
    {
        delete m_stockChart;
        m_stockChart = NULL;
    }
    ;

    m_has_radarChart = false;

    if (m_radarChart)
    {
        delete m_radarChart;
        m_radarChart = NULL;
    }
    ;

    m_has_scatterChart = false;

    if (m_scatterChart)
    {
        delete m_scatterChart;
        m_scatterChart = NULL;
    }
    ;

    m_has_pieChart = false;

    if (m_pieChart)
    {
        delete m_pieChart;
        m_pieChart = NULL;
    }
    ;

    m_has_pie3DChart = false;

    if (m_pie3DChart)
    {
        delete m_pie3DChart;
        m_pie3DChart = NULL;
    }
    ;

    m_has_doughnutChart = false;

    if (m_doughnutChart)
    {
        delete m_doughnutChart;
        m_doughnutChart = NULL;
    }
    ;

    m_has_barChart = false;

    if (m_barChart)
    {
        delete m_barChart;
        m_barChart = NULL;
    }
    ;

    m_has_bar3DChart = false;

    if (m_bar3DChart)
    {
        delete m_bar3DChart;
        m_bar3DChart = NULL;
    }
    ;

    m_has_ofPieChart = false;

    if (m_ofPieChart)
    {
        delete m_ofPieChart;
        m_ofPieChart = NULL;
    }
    ;

    m_has_surfaceChart = false;

    if (m_surfaceChart)
    {
        delete m_surfaceChart;
        m_surfaceChart = NULL;
    }
    ;

    m_has_surface3DChart = false;

    if (m_surface3DChart)
    {
        delete m_surface3DChart;
        m_surface3DChart = NULL;
    }
    ;

    m_has_valAx = false;

    if (m_valAx)
    {
        delete m_valAx;
        m_valAx = NULL;
    }
    ;

    m_has_catAx = false;

    if (m_catAx)
    {
        delete m_catAx;
        m_catAx = NULL;
    }
    ;

    m_has_dateAx = false;

    if (m_dateAx)
    {
        delete m_dateAx;
        m_dateAx = NULL;
    }
    ;

    m_has_serAx = false;

    if (m_serAx)
    {
        delete m_serAx;
        m_serAx = NULL;
    }
    ;

    m_has_bubbleChart = true;
    if (!m_bubbleChart)
    {
        m_bubbleChart = new CT_BubbleChart();
    }
    return m_bubbleChart;
}

const CT_BubbleChart& CT_PlotArea::ChildGroup_1::get_bubbleChart() const
{
    if (m_bubbleChart)
    {
        return *m_bubbleChart;
    }
    return CT_BubbleChart::default_instance();
}

bool CT_PlotArea::ChildGroup_1::has_valAx() const
{
    return m_has_valAx;
}

CT_ValAx* CT_PlotArea::ChildGroup_1::mutable_valAx()
{

    m_has_areaChart = false;

    if (m_areaChart)
    {
        delete m_areaChart;
        m_areaChart = NULL;
    }
    ;

    m_has_area3DChart = false;

    if (m_area3DChart)
    {
        delete m_area3DChart;
        m_area3DChart = NULL;
    }
    ;

    m_has_lineChart = false;

    if (m_lineChart)
    {
        delete m_lineChart;
        m_lineChart = NULL;
    }
    ;

    m_has_line3DChart = false;

    if (m_line3DChart)
    {
        delete m_line3DChart;
        m_line3DChart = NULL;
    }
    ;

    m_has_stockChart = false;

    if (m_stockChart)
    {
        delete m_stockChart;
        m_stockChart = NULL;
    }
    ;

    m_has_radarChart = false;

    if (m_radarChart)
    {
        delete m_radarChart;
        m_radarChart = NULL;
    }
    ;

    m_has_scatterChart = false;

    if (m_scatterChart)
    {
        delete m_scatterChart;
        m_scatterChart = NULL;
    }
    ;

    m_has_pieChart = false;

    if (m_pieChart)
    {
        delete m_pieChart;
        m_pieChart = NULL;
    }
    ;

    m_has_pie3DChart = false;

    if (m_pie3DChart)
    {
        delete m_pie3DChart;
        m_pie3DChart = NULL;
    }
    ;

    m_has_doughnutChart = false;

    if (m_doughnutChart)
    {
        delete m_doughnutChart;
        m_doughnutChart = NULL;
    }
    ;

    m_has_barChart = false;

    if (m_barChart)
    {
        delete m_barChart;
        m_barChart = NULL;
    }
    ;

    m_has_bar3DChart = false;

    if (m_bar3DChart)
    {
        delete m_bar3DChart;
        m_bar3DChart = NULL;
    }
    ;

    m_has_ofPieChart = false;

    if (m_ofPieChart)
    {
        delete m_ofPieChart;
        m_ofPieChart = NULL;
    }
    ;

    m_has_surfaceChart = false;

    if (m_surfaceChart)
    {
        delete m_surfaceChart;
        m_surfaceChart = NULL;
    }
    ;

    m_has_surface3DChart = false;

    if (m_surface3DChart)
    {
        delete m_surface3DChart;
        m_surface3DChart = NULL;
    }
    ;

    m_has_bubbleChart = false;

    if (m_bubbleChart)
    {
        delete m_bubbleChart;
        m_bubbleChart = NULL;
    }
    ;

    m_has_catAx = false;

    if (m_catAx)
    {
        delete m_catAx;
        m_catAx = NULL;
    }
    ;

    m_has_dateAx = false;

    if (m_dateAx)
    {
        delete m_dateAx;
        m_dateAx = NULL;
    }
    ;

    m_has_serAx = false;

    if (m_serAx)
    {
        delete m_serAx;
        m_serAx = NULL;
    }
    ;

    m_has_valAx = true;
    if (!m_valAx)
    {
        m_valAx = new CT_ValAx();
    }
    return m_valAx;
}

const CT_ValAx& CT_PlotArea::ChildGroup_1::get_valAx() const
{
    if (m_valAx)
    {
        return *m_valAx;
    }
    return CT_ValAx::default_instance();
}

bool CT_PlotArea::ChildGroup_1::has_catAx() const
{
    return m_has_catAx;
}

CT_CatAx* CT_PlotArea::ChildGroup_1::mutable_catAx()
{

    m_has_areaChart = false;

    if (m_areaChart)
    {
        delete m_areaChart;
        m_areaChart = NULL;
    }
    ;

    m_has_area3DChart = false;

    if (m_area3DChart)
    {
        delete m_area3DChart;
        m_area3DChart = NULL;
    }
    ;

    m_has_lineChart = false;

    if (m_lineChart)
    {
        delete m_lineChart;
        m_lineChart = NULL;
    }
    ;

    m_has_line3DChart = false;

    if (m_line3DChart)
    {
        delete m_line3DChart;
        m_line3DChart = NULL;
    }
    ;

    m_has_stockChart = false;

    if (m_stockChart)
    {
        delete m_stockChart;
        m_stockChart = NULL;
    }
    ;

    m_has_radarChart = false;

    if (m_radarChart)
    {
        delete m_radarChart;
        m_radarChart = NULL;
    }
    ;

    m_has_scatterChart = false;

    if (m_scatterChart)
    {
        delete m_scatterChart;
        m_scatterChart = NULL;
    }
    ;

    m_has_pieChart = false;

    if (m_pieChart)
    {
        delete m_pieChart;
        m_pieChart = NULL;
    }
    ;

    m_has_pie3DChart = false;

    if (m_pie3DChart)
    {
        delete m_pie3DChart;
        m_pie3DChart = NULL;
    }
    ;

    m_has_doughnutChart = false;

    if (m_doughnutChart)
    {
        delete m_doughnutChart;
        m_doughnutChart = NULL;
    }
    ;

    m_has_barChart = false;

    if (m_barChart)
    {
        delete m_barChart;
        m_barChart = NULL;
    }
    ;

    m_has_bar3DChart = false;

    if (m_bar3DChart)
    {
        delete m_bar3DChart;
        m_bar3DChart = NULL;
    }
    ;

    m_has_ofPieChart = false;

    if (m_ofPieChart)
    {
        delete m_ofPieChart;
        m_ofPieChart = NULL;
    }
    ;

    m_has_surfaceChart = false;

    if (m_surfaceChart)
    {
        delete m_surfaceChart;
        m_surfaceChart = NULL;
    }
    ;

    m_has_surface3DChart = false;

    if (m_surface3DChart)
    {
        delete m_surface3DChart;
        m_surface3DChart = NULL;
    }
    ;

    m_has_bubbleChart = false;

    if (m_bubbleChart)
    {
        delete m_bubbleChart;
        m_bubbleChart = NULL;
    }
    ;

    m_has_valAx = false;

    if (m_valAx)
    {
        delete m_valAx;
        m_valAx = NULL;
    }
    ;

    m_has_dateAx = false;

    if (m_dateAx)
    {
        delete m_dateAx;
        m_dateAx = NULL;
    }
    ;

    m_has_serAx = false;

    if (m_serAx)
    {
        delete m_serAx;
        m_serAx = NULL;
    }
    ;

    m_has_catAx = true;
    if (!m_catAx)
    {
        m_catAx = new CT_CatAx();
    }
    return m_catAx;
}

const CT_CatAx& CT_PlotArea::ChildGroup_1::get_catAx() const
{
    if (m_catAx)
    {
        return *m_catAx;
    }
    return CT_CatAx::default_instance();
}

bool CT_PlotArea::ChildGroup_1::has_dateAx() const
{
    return m_has_dateAx;
}

CT_DateAx* CT_PlotArea::ChildGroup_1::mutable_dateAx()
{

    m_has_areaChart = false;

    if (m_areaChart)
    {
        delete m_areaChart;
        m_areaChart = NULL;
    }
    ;

    m_has_area3DChart = false;

    if (m_area3DChart)
    {
        delete m_area3DChart;
        m_area3DChart = NULL;
    }
    ;

    m_has_lineChart = false;

    if (m_lineChart)
    {
        delete m_lineChart;
        m_lineChart = NULL;
    }
    ;

    m_has_line3DChart = false;

    if (m_line3DChart)
    {
        delete m_line3DChart;
        m_line3DChart = NULL;
    }
    ;

    m_has_stockChart = false;

    if (m_stockChart)
    {
        delete m_stockChart;
        m_stockChart = NULL;
    }
    ;

    m_has_radarChart = false;

    if (m_radarChart)
    {
        delete m_radarChart;
        m_radarChart = NULL;
    }
    ;

    m_has_scatterChart = false;

    if (m_scatterChart)
    {
        delete m_scatterChart;
        m_scatterChart = NULL;
    }
    ;

    m_has_pieChart = false;

    if (m_pieChart)
    {
        delete m_pieChart;
        m_pieChart = NULL;
    }
    ;

    m_has_pie3DChart = false;

    if (m_pie3DChart)
    {
        delete m_pie3DChart;
        m_pie3DChart = NULL;
    }
    ;

    m_has_doughnutChart = false;

    if (m_doughnutChart)
    {
        delete m_doughnutChart;
        m_doughnutChart = NULL;
    }
    ;

    m_has_barChart = false;

    if (m_barChart)
    {
        delete m_barChart;
        m_barChart = NULL;
    }
    ;

    m_has_bar3DChart = false;

    if (m_bar3DChart)
    {
        delete m_bar3DChart;
        m_bar3DChart = NULL;
    }
    ;

    m_has_ofPieChart = false;

    if (m_ofPieChart)
    {
        delete m_ofPieChart;
        m_ofPieChart = NULL;
    }
    ;

    m_has_surfaceChart = false;

    if (m_surfaceChart)
    {
        delete m_surfaceChart;
        m_surfaceChart = NULL;
    }
    ;

    m_has_surface3DChart = false;

    if (m_surface3DChart)
    {
        delete m_surface3DChart;
        m_surface3DChart = NULL;
    }
    ;

    m_has_bubbleChart = false;

    if (m_bubbleChart)
    {
        delete m_bubbleChart;
        m_bubbleChart = NULL;
    }
    ;

    m_has_valAx = false;

    if (m_valAx)
    {
        delete m_valAx;
        m_valAx = NULL;
    }
    ;

    m_has_catAx = false;

    if (m_catAx)
    {
        delete m_catAx;
        m_catAx = NULL;
    }
    ;

    m_has_serAx = false;

    if (m_serAx)
    {
        delete m_serAx;
        m_serAx = NULL;
    }
    ;

    m_has_dateAx = true;
    if (!m_dateAx)
    {
        m_dateAx = new CT_DateAx();
    }
    return m_dateAx;
}

const CT_DateAx& CT_PlotArea::ChildGroup_1::get_dateAx() const
{
    if (m_dateAx)
    {
        return *m_dateAx;
    }
    return CT_DateAx::default_instance();
}

bool CT_PlotArea::ChildGroup_1::has_serAx() const
{
    return m_has_serAx;
}

CT_SerAx* CT_PlotArea::ChildGroup_1::mutable_serAx()
{

    m_has_areaChart = false;

    if (m_areaChart)
    {
        delete m_areaChart;
        m_areaChart = NULL;
    }
    ;

    m_has_area3DChart = false;

    if (m_area3DChart)
    {
        delete m_area3DChart;
        m_area3DChart = NULL;
    }
    ;

    m_has_lineChart = false;

    if (m_lineChart)
    {
        delete m_lineChart;
        m_lineChart = NULL;
    }
    ;

    m_has_line3DChart = false;

    if (m_line3DChart)
    {
        delete m_line3DChart;
        m_line3DChart = NULL;
    }
    ;

    m_has_stockChart = false;

    if (m_stockChart)
    {
        delete m_stockChart;
        m_stockChart = NULL;
    }
    ;

    m_has_radarChart = false;

    if (m_radarChart)
    {
        delete m_radarChart;
        m_radarChart = NULL;
    }
    ;

    m_has_scatterChart = false;

    if (m_scatterChart)
    {
        delete m_scatterChart;
        m_scatterChart = NULL;
    }
    ;

    m_has_pieChart = false;

    if (m_pieChart)
    {
        delete m_pieChart;
        m_pieChart = NULL;
    }
    ;

    m_has_pie3DChart = false;

    if (m_pie3DChart)
    {
        delete m_pie3DChart;
        m_pie3DChart = NULL;
    }
    ;

    m_has_doughnutChart = false;

    if (m_doughnutChart)
    {
        delete m_doughnutChart;
        m_doughnutChart = NULL;
    }
    ;

    m_has_barChart = false;

    if (m_barChart)
    {
        delete m_barChart;
        m_barChart = NULL;
    }
    ;

    m_has_bar3DChart = false;

    if (m_bar3DChart)
    {
        delete m_bar3DChart;
        m_bar3DChart = NULL;
    }
    ;

    m_has_ofPieChart = false;

    if (m_ofPieChart)
    {
        delete m_ofPieChart;
        m_ofPieChart = NULL;
    }
    ;

    m_has_surfaceChart = false;

    if (m_surfaceChart)
    {
        delete m_surfaceChart;
        m_surfaceChart = NULL;
    }
    ;

    m_has_surface3DChart = false;

    if (m_surface3DChart)
    {
        delete m_surface3DChart;
        m_surface3DChart = NULL;
    }
    ;

    m_has_bubbleChart = false;

    if (m_bubbleChart)
    {
        delete m_bubbleChart;
        m_bubbleChart = NULL;
    }
    ;

    m_has_valAx = false;

    if (m_valAx)
    {
        delete m_valAx;
        m_valAx = NULL;
    }
    ;

    m_has_catAx = false;

    if (m_catAx)
    {
        delete m_catAx;
        m_catAx = NULL;
    }
    ;

    m_has_dateAx = false;

    if (m_dateAx)
    {
        delete m_dateAx;
        m_dateAx = NULL;
    }
    ;

    m_has_serAx = true;
    if (!m_serAx)
    {
        m_serAx = new CT_SerAx();
    }
    return m_serAx;
}

const CT_SerAx& CT_PlotArea::ChildGroup_1::get_serAx() const
{
    if (m_serAx)
    {
        return *m_serAx;
    }
    return CT_SerAx::default_instance();
}

CT_PlotArea* CT_PlotArea::default_instance_ = NULL;

// CT_PivotFmt
CT_PivotFmt::CT_PivotFmt()
    :m_has_idx(false),
     m_idx(NULL),
     m_has_spPr(false),
     m_spPr(NULL),
     m_has_txPr(false),
     m_txPr(NULL),
     m_has_marker(false),
     m_marker(NULL),
     m_has_dLbl(false),
     m_dLbl(NULL),
     m_has_extLst(false),
     m_extLst(NULL)
{
}
CT_PivotFmt::~CT_PivotFmt()
{
    clear();
}
bool CT_PivotFmt::has_idx() const
{
    return m_has_idx;
}

CT_UnsignedInt* CT_PivotFmt::mutable_idx()
{
    m_has_idx = true;
    if (!m_idx)
    {
        m_idx = new CT_UnsignedInt();
    }
    return m_idx;
}

const CT_UnsignedInt& CT_PivotFmt::get_idx() const
{
    if (m_idx)
    {
        return *m_idx;
    }
    return CT_UnsignedInt::default_instance();
}

bool CT_PivotFmt::has_spPr() const
{
    return m_has_spPr;
}

ns_a::CT_ShapeProperties* CT_PivotFmt::mutable_spPr()
{
    m_has_spPr = true;
    if (!m_spPr)
    {
        m_spPr = new ns_a::CT_ShapeProperties();
    }
    return m_spPr;
}

const ns_a::CT_ShapeProperties& CT_PivotFmt::get_spPr() const
{
    if (m_spPr)
    {
        return *m_spPr;
    }
    return ns_a::CT_ShapeProperties::default_instance();
}

bool CT_PivotFmt::has_txPr() const
{
    return m_has_txPr;
}

ns_a::CT_TextBody* CT_PivotFmt::mutable_txPr()
{
    m_has_txPr = true;
    if (!m_txPr)
    {
        m_txPr = new ns_a::CT_TextBody();
    }
    return m_txPr;
}

const ns_a::CT_TextBody& CT_PivotFmt::get_txPr() const
{
    if (m_txPr)
    {
        return *m_txPr;
    }
    return ns_a::CT_TextBody::default_instance();
}

bool CT_PivotFmt::has_marker() const
{
    return m_has_marker;
}

CT_Marker* CT_PivotFmt::mutable_marker()
{
    m_has_marker = true;
    if (!m_marker)
    {
        m_marker = new CT_Marker();
    }
    return m_marker;
}

const CT_Marker& CT_PivotFmt::get_marker() const
{
    if (m_marker)
    {
        return *m_marker;
    }
    return CT_Marker::default_instance();
}

bool CT_PivotFmt::has_dLbl() const
{
    return m_has_dLbl;
}

CT_DLbl* CT_PivotFmt::mutable_dLbl()
{
    m_has_dLbl = true;
    if (!m_dLbl)
    {
        m_dLbl = new CT_DLbl();
    }
    return m_dLbl;
}

const CT_DLbl& CT_PivotFmt::get_dLbl() const
{
    if (m_dLbl)
    {
        return *m_dLbl;
    }
    return CT_DLbl::default_instance();
}

bool CT_PivotFmt::has_extLst() const
{
    return m_has_extLst;
}

CT_ExtensionList* CT_PivotFmt::mutable_extLst()
{
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new CT_ExtensionList();
    }
    return m_extLst;
}

const CT_ExtensionList& CT_PivotFmt::get_extLst() const
{
    if (m_extLst)
    {
        return *m_extLst;
    }
    return CT_ExtensionList::default_instance();
}

void CT_PivotFmt::clear()
{
    m_has_idx = false;

    if (m_idx)
    {
        delete m_idx;
        m_idx = NULL;
    }


    m_has_spPr = false;

    if (m_spPr)
    {
        delete m_spPr;
        m_spPr = NULL;
    }


    m_has_txPr = false;

    if (m_txPr)
    {
        delete m_txPr;
        m_txPr = NULL;
    }


    m_has_marker = false;

    if (m_marker)
    {
        delete m_marker;
        m_marker = NULL;
    }


    m_has_dLbl = false;

    if (m_dLbl)
    {
        delete m_dLbl;
        m_dLbl = NULL;
    }


    m_has_extLst = false;

    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }

}

void CT_PivotFmt::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";

    assert(m_has_idx);


    if (m_has_idx)
    {
        m_idx->toXmlElem("c:idx", "", _outStream);
    }


    if (m_has_spPr)
    {
        m_spPr->toXmlElem("c:spPr", "", _outStream);
    }


    if (m_has_txPr)
    {
        m_txPr->toXmlElem("c:txPr", "", _outStream);
    }


    if (m_has_marker)
    {
        m_marker->toXmlElem("c:marker", "", _outStream);
    }


    if (m_has_dLbl)
    {
        m_dLbl->toXmlElem("c:dLbl", "", _outStream);
    }


    if (m_has_extLst)
    {
        m_extLst->toXmlElem("c:extLst", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_PivotFmt& CT_PivotFmt::default_instance()
{
    if (!CT_PivotFmt::default_instance_)
    {
        CT_PivotFmt::default_instance_ = new CT_PivotFmt();
    }
    return *CT_PivotFmt::default_instance_;
}

CT_PivotFmt* CT_PivotFmt::default_instance_ = NULL;

// CT_PivotFmts
CT_PivotFmts::CT_PivotFmts()

{
}
CT_PivotFmts::~CT_PivotFmts()
{
    clear();
}
CT_PivotFmt* CT_PivotFmts::add_pivotFmt()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_PivotFmt* pNewChild = pChildGroup->mutable_pivotFmt();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

void CT_PivotFmts::clear()
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

void CT_PivotFmts::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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
            if ((*iter)->has_pivotFmt())
            {
                (*iter)->get_pivotFmt().toXmlElem("c:pivotFmt", "", _outStream);
            }


        }
    }

    _outStream << "</" << _elemName << ">";
}

const CT_PivotFmts& CT_PivotFmts::default_instance()
{
    if (!CT_PivotFmts::default_instance_)
    {
        CT_PivotFmts::default_instance_ = new CT_PivotFmts();
    }
    return *CT_PivotFmts::default_instance_;
}


// CT_PivotFmts::ChildGroup_1
CT_PivotFmts::ChildGroup_1::ChildGroup_1()
    :m_has_pivotFmt(false),
     m_pivotFmt(NULL)
{
}
bool CT_PivotFmts::ChildGroup_1::has_pivotFmt() const
{
    return m_has_pivotFmt;
}

CT_PivotFmt* CT_PivotFmts::ChildGroup_1::mutable_pivotFmt()
{

    m_has_pivotFmt = true;
    if (!m_pivotFmt)
    {
        m_pivotFmt = new CT_PivotFmt();
    }
    return m_pivotFmt;
}

const CT_PivotFmt& CT_PivotFmts::ChildGroup_1::get_pivotFmt() const
{
    if (m_pivotFmt)
    {
        return *m_pivotFmt;
    }
    return CT_PivotFmt::default_instance();
}

CT_PivotFmts* CT_PivotFmts::default_instance_ = NULL;

// CT_LegendPos
CT_LegendPos::CT_LegendPos()
    :m_has_val_attr(false),
     m_val_attr(NULL)
{
}
CT_LegendPos::~CT_LegendPos()
{
    clear();
}
void CT_LegendPos::clear()
{
    m_has_val_attr = false;

    if (m_val_attr)
    {
        delete m_val_attr;
        m_val_attr = NULL;
    }

}

void CT_LegendPos::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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

const CT_LegendPos& CT_LegendPos::default_instance()
{
    if (!CT_LegendPos::default_instance_)
    {
        CT_LegendPos::default_instance_ = new CT_LegendPos();
    }
    return *CT_LegendPos::default_instance_;
}

bool CT_LegendPos::has_val_attr() const
{
    return m_has_val_attr;
}

void CT_LegendPos::set_val_attr(const ST_LegendPos& _val_attr)
{
    m_has_val_attr = true;
    m_val_attr = new ST_LegendPos(_val_attr);
}

const ST_LegendPos& CT_LegendPos::get_val_attr() const
{
    if (m_val_attr)
    {
        return *m_val_attr;
    }
    return ST_LegendPos::default_instance();
}

CT_LegendPos* CT_LegendPos::default_instance_ = NULL;

// CT_LegendEntry
CT_LegendEntry::CT_LegendEntry()
    :m_has_idx(false),
     m_idx(NULL),
     m_has_delete(false),
     m_delete(NULL),
     m_has_txPr(false),
     m_txPr(NULL),
     m_has_extLst(false),
     m_extLst(NULL)
{
}
CT_LegendEntry::~CT_LegendEntry()
{
    clear();
}
bool CT_LegendEntry::has_idx() const
{
    return m_has_idx;
}

CT_UnsignedInt* CT_LegendEntry::mutable_idx()
{
    m_has_idx = true;
    if (!m_idx)
    {
        m_idx = new CT_UnsignedInt();
    }
    return m_idx;
}

const CT_UnsignedInt& CT_LegendEntry::get_idx() const
{
    if (m_idx)
    {
        return *m_idx;
    }
    return CT_UnsignedInt::default_instance();
}

bool CT_LegendEntry::has_delete() const
{
    return m_has_delete;
}

CT_Boolean* CT_LegendEntry::mutable_delete()
{

    m_has_txPr = false;

    if (m_txPr)
    {
        delete m_txPr;
        m_txPr = NULL;
    }
    ;

    m_has_delete = true;
    if (!m_delete)
    {
        m_delete = new CT_Boolean();
    }
    return m_delete;
}

const CT_Boolean& CT_LegendEntry::get_delete() const
{
    if (m_delete)
    {
        return *m_delete;
    }
    return CT_Boolean::default_instance();
}

bool CT_LegendEntry::has_txPr() const
{
    return m_has_txPr;
}

ns_a::CT_TextBody* CT_LegendEntry::mutable_txPr()
{

    m_has_delete = false;

    if (m_delete)
    {
        delete m_delete;
        m_delete = NULL;
    }
    ;

    m_has_txPr = true;
    if (!m_txPr)
    {
        m_txPr = new ns_a::CT_TextBody();
    }
    return m_txPr;
}

const ns_a::CT_TextBody& CT_LegendEntry::get_txPr() const
{
    if (m_txPr)
    {
        return *m_txPr;
    }
    return ns_a::CT_TextBody::default_instance();
}

bool CT_LegendEntry::has_extLst() const
{
    return m_has_extLst;
}

CT_ExtensionList* CT_LegendEntry::mutable_extLst()
{
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new CT_ExtensionList();
    }
    return m_extLst;
}

const CT_ExtensionList& CT_LegendEntry::get_extLst() const
{
    if (m_extLst)
    {
        return *m_extLst;
    }
    return CT_ExtensionList::default_instance();
}

void CT_LegendEntry::clear()
{
    m_has_idx = false;

    if (m_idx)
    {
        delete m_idx;
        m_idx = NULL;
    }


    m_has_delete = false;

    if (m_delete)
    {
        delete m_delete;
        m_delete = NULL;
    }


    m_has_txPr = false;

    if (m_txPr)
    {
        delete m_txPr;
        m_txPr = NULL;
    }


    m_has_extLst = false;

    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }

}

void CT_LegendEntry::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";

    assert(m_has_idx);


    if (m_has_idx)
    {
        m_idx->toXmlElem("c:idx", "", _outStream);
    }

    {
        bool elemHasValueList[2] = {m_has_delete, m_has_txPr};
        int cnt = count(elemHasValueList, elemHasValueList + 2, true);
        assert(cnt == 1);
    }


    if (m_has_delete)
    {
        m_delete->toXmlElem("c:delete", "", _outStream);
    }


    if (m_has_txPr)
    {
        m_txPr->toXmlElem("c:txPr", "", _outStream);
    }


    if (m_has_extLst)
    {
        m_extLst->toXmlElem("c:extLst", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_LegendEntry& CT_LegendEntry::default_instance()
{
    if (!CT_LegendEntry::default_instance_)
    {
        CT_LegendEntry::default_instance_ = new CT_LegendEntry();
    }
    return *CT_LegendEntry::default_instance_;
}

CT_LegendEntry* CT_LegendEntry::default_instance_ = NULL;

// CT_Legend
CT_Legend::CT_Legend()
    :m_has_legendPos(false),
     m_legendPos(NULL),
     m_has_layout(false),
     m_layout(NULL),
     m_has_overlay(false),
     m_overlay(NULL),
     m_has_spPr(false),
     m_spPr(NULL),
     m_has_txPr(false),
     m_txPr(NULL),
     m_has_extLst(false),
     m_extLst(NULL)
{
}
CT_Legend::~CT_Legend()
{
    clear();
}
bool CT_Legend::has_legendPos() const
{
    return m_has_legendPos;
}

CT_LegendPos* CT_Legend::mutable_legendPos()
{
    m_has_legendPos = true;
    if (!m_legendPos)
    {
        m_legendPos = new CT_LegendPos();
    }
    return m_legendPos;
}

const CT_LegendPos& CT_Legend::get_legendPos() const
{
    if (m_legendPos)
    {
        return *m_legendPos;
    }
    return CT_LegendPos::default_instance();
}

CT_LegendEntry* CT_Legend::add_legendEntry()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_LegendEntry* pNewChild = pChildGroup->mutable_legendEntry();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

bool CT_Legend::has_layout() const
{
    return m_has_layout;
}

CT_Layout* CT_Legend::mutable_layout()
{
    m_has_layout = true;
    if (!m_layout)
    {
        m_layout = new CT_Layout();
    }
    return m_layout;
}

const CT_Layout& CT_Legend::get_layout() const
{
    if (m_layout)
    {
        return *m_layout;
    }
    return CT_Layout::default_instance();
}

bool CT_Legend::has_overlay() const
{
    return m_has_overlay;
}

CT_Boolean* CT_Legend::mutable_overlay()
{
    m_has_overlay = true;
    if (!m_overlay)
    {
        m_overlay = new CT_Boolean();
    }
    return m_overlay;
}

const CT_Boolean& CT_Legend::get_overlay() const
{
    if (m_overlay)
    {
        return *m_overlay;
    }
    return CT_Boolean::default_instance();
}

bool CT_Legend::has_spPr() const
{
    return m_has_spPr;
}

ns_a::CT_ShapeProperties* CT_Legend::mutable_spPr()
{
    m_has_spPr = true;
    if (!m_spPr)
    {
        m_spPr = new ns_a::CT_ShapeProperties();
    }
    return m_spPr;
}

const ns_a::CT_ShapeProperties& CT_Legend::get_spPr() const
{
    if (m_spPr)
    {
        return *m_spPr;
    }
    return ns_a::CT_ShapeProperties::default_instance();
}

bool CT_Legend::has_txPr() const
{
    return m_has_txPr;
}

ns_a::CT_TextBody* CT_Legend::mutable_txPr()
{
    m_has_txPr = true;
    if (!m_txPr)
    {
        m_txPr = new ns_a::CT_TextBody();
    }
    return m_txPr;
}

const ns_a::CT_TextBody& CT_Legend::get_txPr() const
{
    if (m_txPr)
    {
        return *m_txPr;
    }
    return ns_a::CT_TextBody::default_instance();
}

bool CT_Legend::has_extLst() const
{
    return m_has_extLst;
}

CT_ExtensionList* CT_Legend::mutable_extLst()
{
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new CT_ExtensionList();
    }
    return m_extLst;
}

const CT_ExtensionList& CT_Legend::get_extLst() const
{
    if (m_extLst)
    {
        return *m_extLst;
    }
    return CT_ExtensionList::default_instance();
}

void CT_Legend::clear()
{
    m_has_legendPos = false;

    if (m_legendPos)
    {
        delete m_legendPos;
        m_legendPos = NULL;
    }


    {
        vector<ChildGroup_1*>::iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_1.clear();
    }

    m_has_layout = false;

    if (m_layout)
    {
        delete m_layout;
        m_layout = NULL;
    }


    m_has_overlay = false;

    if (m_overlay)
    {
        delete m_overlay;
        m_overlay = NULL;
    }


    m_has_spPr = false;

    if (m_spPr)
    {
        delete m_spPr;
        m_spPr = NULL;
    }


    m_has_txPr = false;

    if (m_txPr)
    {
        delete m_txPr;
        m_txPr = NULL;
    }


    m_has_extLst = false;

    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }

}

void CT_Legend::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";


    if (m_has_legendPos)
    {
        m_legendPos->toXmlElem("c:legendPos", "", _outStream);
    }

    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_legendEntry())
            {
                (*iter)->get_legendEntry().toXmlElem("c:legendEntry", "", _outStream);
            }


        }
    }


    if (m_has_layout)
    {
        m_layout->toXmlElem("c:layout", "", _outStream);
    }


    if (m_has_overlay)
    {
        m_overlay->toXmlElem("c:overlay", "", _outStream);
    }


    if (m_has_spPr)
    {
        m_spPr->toXmlElem("c:spPr", "", _outStream);
    }


    if (m_has_txPr)
    {
        m_txPr->toXmlElem("c:txPr", "", _outStream);
    }


    if (m_has_extLst)
    {
        m_extLst->toXmlElem("c:extLst", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_Legend& CT_Legend::default_instance()
{
    if (!CT_Legend::default_instance_)
    {
        CT_Legend::default_instance_ = new CT_Legend();
    }
    return *CT_Legend::default_instance_;
}


// CT_Legend::ChildGroup_1
CT_Legend::ChildGroup_1::ChildGroup_1()
    :m_has_legendEntry(false),
     m_legendEntry(NULL)
{
}
bool CT_Legend::ChildGroup_1::has_legendEntry() const
{
    return m_has_legendEntry;
}

CT_LegendEntry* CT_Legend::ChildGroup_1::mutable_legendEntry()
{

    m_has_legendEntry = true;
    if (!m_legendEntry)
    {
        m_legendEntry = new CT_LegendEntry();
    }
    return m_legendEntry;
}

const CT_LegendEntry& CT_Legend::ChildGroup_1::get_legendEntry() const
{
    if (m_legendEntry)
    {
        return *m_legendEntry;
    }
    return CT_LegendEntry::default_instance();
}

CT_Legend* CT_Legend::default_instance_ = NULL;

// CT_DispBlanksAs
CT_DispBlanksAs::CT_DispBlanksAs()
    :m_has_val_attr(false),
     m_val_attr(NULL)
{
}
CT_DispBlanksAs::~CT_DispBlanksAs()
{
    clear();
}
void CT_DispBlanksAs::clear()
{
    m_has_val_attr = false;

    if (m_val_attr)
    {
        delete m_val_attr;
        m_val_attr = NULL;
    }

}

void CT_DispBlanksAs::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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

const CT_DispBlanksAs& CT_DispBlanksAs::default_instance()
{
    if (!CT_DispBlanksAs::default_instance_)
    {
        CT_DispBlanksAs::default_instance_ = new CT_DispBlanksAs();
    }
    return *CT_DispBlanksAs::default_instance_;
}

bool CT_DispBlanksAs::has_val_attr() const
{
    return m_has_val_attr;
}

void CT_DispBlanksAs::set_val_attr(const ST_DispBlanksAs& _val_attr)
{
    m_has_val_attr = true;
    m_val_attr = new ST_DispBlanksAs(_val_attr);
}

const ST_DispBlanksAs& CT_DispBlanksAs::get_val_attr() const
{
    if (m_val_attr)
    {
        return *m_val_attr;
    }
    return ST_DispBlanksAs::default_instance();
}

CT_DispBlanksAs* CT_DispBlanksAs::default_instance_ = NULL;

// CT_Chart
CT_Chart::CT_Chart()
    :m_has_title(false),
     m_title(NULL),
     m_has_autoTitleDeleted(false),
     m_autoTitleDeleted(NULL),
     m_has_pivotFmts(false),
     m_pivotFmts(NULL),
     m_has_view3D(false),
     m_view3D(NULL),
     m_has_floor(false),
     m_floor(NULL),
     m_has_sideWall(false),
     m_sideWall(NULL),
     m_has_backWall(false),
     m_backWall(NULL),
     m_has_plotArea(false),
     m_plotArea(NULL),
     m_has_legend(false),
     m_legend(NULL),
     m_has_plotVisOnly(false),
     m_plotVisOnly(NULL),
     m_has_dispBlanksAs(false),
     m_dispBlanksAs(NULL),
     m_has_showDLblsOverMax(false),
     m_showDLblsOverMax(NULL),
     m_has_extLst(false),
     m_extLst(NULL)
{
}
CT_Chart::~CT_Chart()
{
    clear();
}
bool CT_Chart::has_title() const
{
    return m_has_title;
}

CT_Title* CT_Chart::mutable_title()
{
    m_has_title = true;
    if (!m_title)
    {
        m_title = new CT_Title();
    }
    return m_title;
}

const CT_Title& CT_Chart::get_title() const
{
    if (m_title)
    {
        return *m_title;
    }
    return CT_Title::default_instance();
}

bool CT_Chart::has_autoTitleDeleted() const
{
    return m_has_autoTitleDeleted;
}

CT_Boolean* CT_Chart::mutable_autoTitleDeleted()
{
    m_has_autoTitleDeleted = true;
    if (!m_autoTitleDeleted)
    {
        m_autoTitleDeleted = new CT_Boolean();
    }
    return m_autoTitleDeleted;
}

const CT_Boolean& CT_Chart::get_autoTitleDeleted() const
{
    if (m_autoTitleDeleted)
    {
        return *m_autoTitleDeleted;
    }
    return CT_Boolean::default_instance();
}

bool CT_Chart::has_pivotFmts() const
{
    return m_has_pivotFmts;
}

CT_PivotFmts* CT_Chart::mutable_pivotFmts()
{
    m_has_pivotFmts = true;
    if (!m_pivotFmts)
    {
        m_pivotFmts = new CT_PivotFmts();
    }
    return m_pivotFmts;
}

const CT_PivotFmts& CT_Chart::get_pivotFmts() const
{
    if (m_pivotFmts)
    {
        return *m_pivotFmts;
    }
    return CT_PivotFmts::default_instance();
}

bool CT_Chart::has_view3D() const
{
    return m_has_view3D;
}

CT_View3D* CT_Chart::mutable_view3D()
{
    m_has_view3D = true;
    if (!m_view3D)
    {
        m_view3D = new CT_View3D();
    }
    return m_view3D;
}

const CT_View3D& CT_Chart::get_view3D() const
{
    if (m_view3D)
    {
        return *m_view3D;
    }
    return CT_View3D::default_instance();
}

bool CT_Chart::has_floor() const
{
    return m_has_floor;
}

CT_Surface* CT_Chart::mutable_floor()
{
    m_has_floor = true;
    if (!m_floor)
    {
        m_floor = new CT_Surface();
    }
    return m_floor;
}

const CT_Surface& CT_Chart::get_floor() const
{
    if (m_floor)
    {
        return *m_floor;
    }
    return CT_Surface::default_instance();
}

bool CT_Chart::has_sideWall() const
{
    return m_has_sideWall;
}

CT_Surface* CT_Chart::mutable_sideWall()
{
    m_has_sideWall = true;
    if (!m_sideWall)
    {
        m_sideWall = new CT_Surface();
    }
    return m_sideWall;
}

const CT_Surface& CT_Chart::get_sideWall() const
{
    if (m_sideWall)
    {
        return *m_sideWall;
    }
    return CT_Surface::default_instance();
}

bool CT_Chart::has_backWall() const
{
    return m_has_backWall;
}

CT_Surface* CT_Chart::mutable_backWall()
{
    m_has_backWall = true;
    if (!m_backWall)
    {
        m_backWall = new CT_Surface();
    }
    return m_backWall;
}

const CT_Surface& CT_Chart::get_backWall() const
{
    if (m_backWall)
    {
        return *m_backWall;
    }
    return CT_Surface::default_instance();
}

bool CT_Chart::has_plotArea() const
{
    return m_has_plotArea;
}

CT_PlotArea* CT_Chart::mutable_plotArea()
{
    m_has_plotArea = true;
    if (!m_plotArea)
    {
        m_plotArea = new CT_PlotArea();
    }
    return m_plotArea;
}

const CT_PlotArea& CT_Chart::get_plotArea() const
{
    if (m_plotArea)
    {
        return *m_plotArea;
    }
    return CT_PlotArea::default_instance();
}

bool CT_Chart::has_legend() const
{
    return m_has_legend;
}

CT_Legend* CT_Chart::mutable_legend()
{
    m_has_legend = true;
    if (!m_legend)
    {
        m_legend = new CT_Legend();
    }
    return m_legend;
}

const CT_Legend& CT_Chart::get_legend() const
{
    if (m_legend)
    {
        return *m_legend;
    }
    return CT_Legend::default_instance();
}

bool CT_Chart::has_plotVisOnly() const
{
    return m_has_plotVisOnly;
}

CT_Boolean* CT_Chart::mutable_plotVisOnly()
{
    m_has_plotVisOnly = true;
    if (!m_plotVisOnly)
    {
        m_plotVisOnly = new CT_Boolean();
    }
    return m_plotVisOnly;
}

const CT_Boolean& CT_Chart::get_plotVisOnly() const
{
    if (m_plotVisOnly)
    {
        return *m_plotVisOnly;
    }
    return CT_Boolean::default_instance();
}

bool CT_Chart::has_dispBlanksAs() const
{
    return m_has_dispBlanksAs;
}

CT_DispBlanksAs* CT_Chart::mutable_dispBlanksAs()
{
    m_has_dispBlanksAs = true;
    if (!m_dispBlanksAs)
    {
        m_dispBlanksAs = new CT_DispBlanksAs();
    }
    return m_dispBlanksAs;
}

const CT_DispBlanksAs& CT_Chart::get_dispBlanksAs() const
{
    if (m_dispBlanksAs)
    {
        return *m_dispBlanksAs;
    }
    return CT_DispBlanksAs::default_instance();
}

bool CT_Chart::has_showDLblsOverMax() const
{
    return m_has_showDLblsOverMax;
}

CT_Boolean* CT_Chart::mutable_showDLblsOverMax()
{
    m_has_showDLblsOverMax = true;
    if (!m_showDLblsOverMax)
    {
        m_showDLblsOverMax = new CT_Boolean();
    }
    return m_showDLblsOverMax;
}

const CT_Boolean& CT_Chart::get_showDLblsOverMax() const
{
    if (m_showDLblsOverMax)
    {
        return *m_showDLblsOverMax;
    }
    return CT_Boolean::default_instance();
}

bool CT_Chart::has_extLst() const
{
    return m_has_extLst;
}

CT_ExtensionList* CT_Chart::mutable_extLst()
{
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new CT_ExtensionList();
    }
    return m_extLst;
}

const CT_ExtensionList& CT_Chart::get_extLst() const
{
    if (m_extLst)
    {
        return *m_extLst;
    }
    return CT_ExtensionList::default_instance();
}

void CT_Chart::clear()
{
    m_has_title = false;

    if (m_title)
    {
        delete m_title;
        m_title = NULL;
    }


    m_has_autoTitleDeleted = false;

    if (m_autoTitleDeleted)
    {
        delete m_autoTitleDeleted;
        m_autoTitleDeleted = NULL;
    }


    m_has_pivotFmts = false;

    if (m_pivotFmts)
    {
        delete m_pivotFmts;
        m_pivotFmts = NULL;
    }


    m_has_view3D = false;

    if (m_view3D)
    {
        delete m_view3D;
        m_view3D = NULL;
    }


    m_has_floor = false;

    if (m_floor)
    {
        delete m_floor;
        m_floor = NULL;
    }


    m_has_sideWall = false;

    if (m_sideWall)
    {
        delete m_sideWall;
        m_sideWall = NULL;
    }


    m_has_backWall = false;

    if (m_backWall)
    {
        delete m_backWall;
        m_backWall = NULL;
    }


    m_has_plotArea = false;

    if (m_plotArea)
    {
        delete m_plotArea;
        m_plotArea = NULL;
    }


    m_has_legend = false;

    if (m_legend)
    {
        delete m_legend;
        m_legend = NULL;
    }


    m_has_plotVisOnly = false;

    if (m_plotVisOnly)
    {
        delete m_plotVisOnly;
        m_plotVisOnly = NULL;
    }


    m_has_dispBlanksAs = false;

    if (m_dispBlanksAs)
    {
        delete m_dispBlanksAs;
        m_dispBlanksAs = NULL;
    }


    m_has_showDLblsOverMax = false;

    if (m_showDLblsOverMax)
    {
        delete m_showDLblsOverMax;
        m_showDLblsOverMax = NULL;
    }


    m_has_extLst = false;

    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }

}

void CT_Chart::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";

    assert(m_has_plotArea);


    if (m_has_title)
    {
        m_title->toXmlElem("c:title", "", _outStream);
    }


    if (m_has_autoTitleDeleted)
    {
        m_autoTitleDeleted->toXmlElem("c:autoTitleDeleted", "", _outStream);
    }


    if (m_has_pivotFmts)
    {
        m_pivotFmts->toXmlElem("c:pivotFmts", "", _outStream);
    }


    if (m_has_view3D)
    {
        m_view3D->toXmlElem("c:view3D", "", _outStream);
    }


    if (m_has_floor)
    {
        m_floor->toXmlElem("c:floor", "", _outStream);
    }


    if (m_has_sideWall)
    {
        m_sideWall->toXmlElem("c:sideWall", "", _outStream);
    }


    if (m_has_backWall)
    {
        m_backWall->toXmlElem("c:backWall", "", _outStream);
    }


    if (m_has_plotArea)
    {
        m_plotArea->toXmlElem("c:plotArea", "", _outStream);
    }


    if (m_has_legend)
    {
        m_legend->toXmlElem("c:legend", "", _outStream);
    }


    if (m_has_plotVisOnly)
    {
        m_plotVisOnly->toXmlElem("c:plotVisOnly", "", _outStream);
    }


    if (m_has_dispBlanksAs)
    {
        m_dispBlanksAs->toXmlElem("c:dispBlanksAs", "", _outStream);
    }


    if (m_has_showDLblsOverMax)
    {
        m_showDLblsOverMax->toXmlElem("c:showDLblsOverMax", "", _outStream);
    }


    if (m_has_extLst)
    {
        m_extLst->toXmlElem("c:extLst", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_Chart& CT_Chart::default_instance()
{
    if (!CT_Chart::default_instance_)
    {
        CT_Chart::default_instance_ = new CT_Chart();
    }
    return *CT_Chart::default_instance_;
}

CT_Chart* CT_Chart::default_instance_ = NULL;

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

    assert(m_has_val_attr);
    if (m_has_val_attr)
    {
        m_val_attr->toXmlAttr("val", _outStream);
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

// CT_PivotSource
CT_PivotSource::CT_PivotSource()
    :m_has_name(false),
     m_name(NULL),
     m_has_fmtId(false),
     m_fmtId(NULL)
{
}
CT_PivotSource::~CT_PivotSource()
{
    clear();
}
bool CT_PivotSource::has_name() const
{
    return m_has_name;
}

ns_s::ST_Xstring* CT_PivotSource::mutable_name()
{
    m_has_name = true;
    if (!m_name)
    {
        m_name = new ns_s::ST_Xstring();
    }
    return m_name;
}

const ns_s::ST_Xstring& CT_PivotSource::get_name() const
{
    if (m_name)
    {
        return *m_name;
    }
    return ns_s::ST_Xstring::default_instance();
}

bool CT_PivotSource::has_fmtId() const
{
    return m_has_fmtId;
}

CT_UnsignedInt* CT_PivotSource::mutable_fmtId()
{
    m_has_fmtId = true;
    if (!m_fmtId)
    {
        m_fmtId = new CT_UnsignedInt();
    }
    return m_fmtId;
}

const CT_UnsignedInt& CT_PivotSource::get_fmtId() const
{
    if (m_fmtId)
    {
        return *m_fmtId;
    }
    return CT_UnsignedInt::default_instance();
}

CT_ExtensionList* CT_PivotSource::add_extLst()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_ExtensionList* pNewChild = pChildGroup->mutable_extLst();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

void CT_PivotSource::clear()
{
    m_has_name = false;

    if (m_name)
    {
        delete m_name;
        m_name = NULL;
    }


    m_has_fmtId = false;

    if (m_fmtId)
    {
        delete m_fmtId;
        m_fmtId = NULL;
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

void CT_PivotSource::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";

    assert(m_has_name);


    assert(m_has_fmtId);


    if (m_has_name)
    {
        _outStream << "<c:name>" << m_name->toString() << "</c:name>";
    }


    if (m_has_fmtId)
    {
        m_fmtId->toXmlElem("c:fmtId", "", _outStream);
    }

    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_extLst())
            {
                (*iter)->get_extLst().toXmlElem("c:extLst", "", _outStream);
            }


        }
    }

    _outStream << "</" << _elemName << ">";
}

const CT_PivotSource& CT_PivotSource::default_instance()
{
    if (!CT_PivotSource::default_instance_)
    {
        CT_PivotSource::default_instance_ = new CT_PivotSource();
    }
    return *CT_PivotSource::default_instance_;
}


// CT_PivotSource::ChildGroup_1
CT_PivotSource::ChildGroup_1::ChildGroup_1()
    :m_has_extLst(false),
     m_extLst(NULL)
{
}
bool CT_PivotSource::ChildGroup_1::has_extLst() const
{
    return m_has_extLst;
}

CT_ExtensionList* CT_PivotSource::ChildGroup_1::mutable_extLst()
{

    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new CT_ExtensionList();
    }
    return m_extLst;
}

const CT_ExtensionList& CT_PivotSource::ChildGroup_1::get_extLst() const
{
    if (m_extLst)
    {
        return *m_extLst;
    }
    return CT_ExtensionList::default_instance();
}

CT_PivotSource* CT_PivotSource::default_instance_ = NULL;

// CT_Protection
CT_Protection::CT_Protection()
    :m_has_chartObject(false),
     m_chartObject(NULL),
     m_has_data(false),
     m_data(NULL),
     m_has_formatting(false),
     m_formatting(NULL),
     m_has_selection(false),
     m_selection(NULL),
     m_has_userInterface(false),
     m_userInterface(NULL)
{
}
CT_Protection::~CT_Protection()
{
    clear();
}
bool CT_Protection::has_chartObject() const
{
    return m_has_chartObject;
}

CT_Boolean* CT_Protection::mutable_chartObject()
{
    m_has_chartObject = true;
    if (!m_chartObject)
    {
        m_chartObject = new CT_Boolean();
    }
    return m_chartObject;
}

const CT_Boolean& CT_Protection::get_chartObject() const
{
    if (m_chartObject)
    {
        return *m_chartObject;
    }
    return CT_Boolean::default_instance();
}

bool CT_Protection::has_data() const
{
    return m_has_data;
}

CT_Boolean* CT_Protection::mutable_data()
{
    m_has_data = true;
    if (!m_data)
    {
        m_data = new CT_Boolean();
    }
    return m_data;
}

const CT_Boolean& CT_Protection::get_data() const
{
    if (m_data)
    {
        return *m_data;
    }
    return CT_Boolean::default_instance();
}

bool CT_Protection::has_formatting() const
{
    return m_has_formatting;
}

CT_Boolean* CT_Protection::mutable_formatting()
{
    m_has_formatting = true;
    if (!m_formatting)
    {
        m_formatting = new CT_Boolean();
    }
    return m_formatting;
}

const CT_Boolean& CT_Protection::get_formatting() const
{
    if (m_formatting)
    {
        return *m_formatting;
    }
    return CT_Boolean::default_instance();
}

bool CT_Protection::has_selection() const
{
    return m_has_selection;
}

CT_Boolean* CT_Protection::mutable_selection()
{
    m_has_selection = true;
    if (!m_selection)
    {
        m_selection = new CT_Boolean();
    }
    return m_selection;
}

const CT_Boolean& CT_Protection::get_selection() const
{
    if (m_selection)
    {
        return *m_selection;
    }
    return CT_Boolean::default_instance();
}

bool CT_Protection::has_userInterface() const
{
    return m_has_userInterface;
}

CT_Boolean* CT_Protection::mutable_userInterface()
{
    m_has_userInterface = true;
    if (!m_userInterface)
    {
        m_userInterface = new CT_Boolean();
    }
    return m_userInterface;
}

const CT_Boolean& CT_Protection::get_userInterface() const
{
    if (m_userInterface)
    {
        return *m_userInterface;
    }
    return CT_Boolean::default_instance();
}

void CT_Protection::clear()
{
    m_has_chartObject = false;

    if (m_chartObject)
    {
        delete m_chartObject;
        m_chartObject = NULL;
    }


    m_has_data = false;

    if (m_data)
    {
        delete m_data;
        m_data = NULL;
    }


    m_has_formatting = false;

    if (m_formatting)
    {
        delete m_formatting;
        m_formatting = NULL;
    }


    m_has_selection = false;

    if (m_selection)
    {
        delete m_selection;
        m_selection = NULL;
    }


    m_has_userInterface = false;

    if (m_userInterface)
    {
        delete m_userInterface;
        m_userInterface = NULL;
    }

}

void CT_Protection::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";


    if (m_has_chartObject)
    {
        m_chartObject->toXmlElem("c:chartObject", "", _outStream);
    }


    if (m_has_data)
    {
        m_data->toXmlElem("c:data", "", _outStream);
    }


    if (m_has_formatting)
    {
        m_formatting->toXmlElem("c:formatting", "", _outStream);
    }


    if (m_has_selection)
    {
        m_selection->toXmlElem("c:selection", "", _outStream);
    }


    if (m_has_userInterface)
    {
        m_userInterface->toXmlElem("c:userInterface", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_Protection& CT_Protection::default_instance()
{
    if (!CT_Protection::default_instance_)
    {
        CT_Protection::default_instance_ = new CT_Protection();
    }
    return *CT_Protection::default_instance_;
}

CT_Protection* CT_Protection::default_instance_ = NULL;

// CT_HeaderFooter
CT_HeaderFooter::CT_HeaderFooter()
    :m_has_oddHeader(false),
     m_oddHeader(NULL),
     m_has_oddFooter(false),
     m_oddFooter(NULL),
     m_has_evenHeader(false),
     m_evenHeader(NULL),
     m_has_evenFooter(false),
     m_evenFooter(NULL),
     m_has_firstHeader(false),
     m_firstHeader(NULL),
     m_has_firstFooter(false),
     m_firstFooter(NULL),
     m_has_alignWithMargins_attr(false),
     m_alignWithMargins_attr(false),
     m_has_differentOddEven_attr(false),
     m_differentOddEven_attr(false),
     m_has_differentFirst_attr(false),
     m_differentFirst_attr(false)
{
}
CT_HeaderFooter::~CT_HeaderFooter()
{
    clear();
}
bool CT_HeaderFooter::has_oddHeader() const
{
    return m_has_oddHeader;
}

ns_s::ST_Xstring* CT_HeaderFooter::mutable_oddHeader()
{
    m_has_oddHeader = true;
    if (!m_oddHeader)
    {
        m_oddHeader = new ns_s::ST_Xstring();
    }
    return m_oddHeader;
}

const ns_s::ST_Xstring& CT_HeaderFooter::get_oddHeader() const
{
    if (m_oddHeader)
    {
        return *m_oddHeader;
    }
    return ns_s::ST_Xstring::default_instance();
}

bool CT_HeaderFooter::has_oddFooter() const
{
    return m_has_oddFooter;
}

ns_s::ST_Xstring* CT_HeaderFooter::mutable_oddFooter()
{
    m_has_oddFooter = true;
    if (!m_oddFooter)
    {
        m_oddFooter = new ns_s::ST_Xstring();
    }
    return m_oddFooter;
}

const ns_s::ST_Xstring& CT_HeaderFooter::get_oddFooter() const
{
    if (m_oddFooter)
    {
        return *m_oddFooter;
    }
    return ns_s::ST_Xstring::default_instance();
}

bool CT_HeaderFooter::has_evenHeader() const
{
    return m_has_evenHeader;
}

ns_s::ST_Xstring* CT_HeaderFooter::mutable_evenHeader()
{
    m_has_evenHeader = true;
    if (!m_evenHeader)
    {
        m_evenHeader = new ns_s::ST_Xstring();
    }
    return m_evenHeader;
}

const ns_s::ST_Xstring& CT_HeaderFooter::get_evenHeader() const
{
    if (m_evenHeader)
    {
        return *m_evenHeader;
    }
    return ns_s::ST_Xstring::default_instance();
}

bool CT_HeaderFooter::has_evenFooter() const
{
    return m_has_evenFooter;
}

ns_s::ST_Xstring* CT_HeaderFooter::mutable_evenFooter()
{
    m_has_evenFooter = true;
    if (!m_evenFooter)
    {
        m_evenFooter = new ns_s::ST_Xstring();
    }
    return m_evenFooter;
}

const ns_s::ST_Xstring& CT_HeaderFooter::get_evenFooter() const
{
    if (m_evenFooter)
    {
        return *m_evenFooter;
    }
    return ns_s::ST_Xstring::default_instance();
}

bool CT_HeaderFooter::has_firstHeader() const
{
    return m_has_firstHeader;
}

ns_s::ST_Xstring* CT_HeaderFooter::mutable_firstHeader()
{
    m_has_firstHeader = true;
    if (!m_firstHeader)
    {
        m_firstHeader = new ns_s::ST_Xstring();
    }
    return m_firstHeader;
}

const ns_s::ST_Xstring& CT_HeaderFooter::get_firstHeader() const
{
    if (m_firstHeader)
    {
        return *m_firstHeader;
    }
    return ns_s::ST_Xstring::default_instance();
}

bool CT_HeaderFooter::has_firstFooter() const
{
    return m_has_firstFooter;
}

ns_s::ST_Xstring* CT_HeaderFooter::mutable_firstFooter()
{
    m_has_firstFooter = true;
    if (!m_firstFooter)
    {
        m_firstFooter = new ns_s::ST_Xstring();
    }
    return m_firstFooter;
}

const ns_s::ST_Xstring& CT_HeaderFooter::get_firstFooter() const
{
    if (m_firstFooter)
    {
        return *m_firstFooter;
    }
    return ns_s::ST_Xstring::default_instance();
}

void CT_HeaderFooter::clear()
{
    m_has_alignWithMargins_attr = false;
    m_alignWithMargins_attr = false;

    m_has_differentOddEven_attr = false;
    m_differentOddEven_attr = false;

    m_has_differentFirst_attr = false;
    m_differentFirst_attr = false;

    m_has_oddHeader = false;

    if (m_oddHeader)
    {
        delete m_oddHeader;
        m_oddHeader = NULL;
    }


    m_has_oddFooter = false;

    if (m_oddFooter)
    {
        delete m_oddFooter;
        m_oddFooter = NULL;
    }


    m_has_evenHeader = false;

    if (m_evenHeader)
    {
        delete m_evenHeader;
        m_evenHeader = NULL;
    }


    m_has_evenFooter = false;

    if (m_evenFooter)
    {
        delete m_evenFooter;
        m_evenFooter = NULL;
    }


    m_has_firstHeader = false;

    if (m_firstHeader)
    {
        delete m_firstHeader;
        m_firstHeader = NULL;
    }


    m_has_firstFooter = false;

    if (m_firstFooter)
    {
        delete m_firstFooter;
        m_firstFooter = NULL;
    }

}

void CT_HeaderFooter::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_alignWithMargins_attr)
    {
        _outStream << " " << "alignWithMargins" << "=\"" << XSD::XMLBooleanStr(m_alignWithMargins_attr) << "\"";
    }



    if (m_has_differentOddEven_attr)
    {
        _outStream << " " << "differentOddEven" << "=\"" << XSD::XMLBooleanStr(m_differentOddEven_attr) << "\"";
    }



    if (m_has_differentFirst_attr)
    {
        _outStream << " " << "differentFirst" << "=\"" << XSD::XMLBooleanStr(m_differentFirst_attr) << "\"";
    }

    _outStream << ">";


    if (m_has_oddHeader)
    {
        _outStream << "<c:oddHeader>" << m_oddHeader->toString() << "</c:oddHeader>";
    }


    if (m_has_oddFooter)
    {
        _outStream << "<c:oddFooter>" << m_oddFooter->toString() << "</c:oddFooter>";
    }


    if (m_has_evenHeader)
    {
        _outStream << "<c:evenHeader>" << m_evenHeader->toString() << "</c:evenHeader>";
    }


    if (m_has_evenFooter)
    {
        _outStream << "<c:evenFooter>" << m_evenFooter->toString() << "</c:evenFooter>";
    }


    if (m_has_firstHeader)
    {
        _outStream << "<c:firstHeader>" << m_firstHeader->toString() << "</c:firstHeader>";
    }


    if (m_has_firstFooter)
    {
        _outStream << "<c:firstFooter>" << m_firstFooter->toString() << "</c:firstFooter>";
    }

    _outStream << "</" << _elemName << ">";
}

const CT_HeaderFooter& CT_HeaderFooter::default_instance()
{
    if (!CT_HeaderFooter::default_instance_)
    {
        CT_HeaderFooter::default_instance_ = new CT_HeaderFooter();
    }
    return *CT_HeaderFooter::default_instance_;
}

bool CT_HeaderFooter::has_alignWithMargins_attr() const
{
    return m_has_alignWithMargins_attr;
}

void CT_HeaderFooter::set_alignWithMargins_attr(const XSD::boolean_& _alignWithMargins_attr)
{
    m_has_alignWithMargins_attr = true;
    m_alignWithMargins_attr = _alignWithMargins_attr;
}

const XSD::boolean_& CT_HeaderFooter::get_alignWithMargins_attr() const
{
    return m_alignWithMargins_attr;
}

bool CT_HeaderFooter::has_differentOddEven_attr() const
{
    return m_has_differentOddEven_attr;
}

void CT_HeaderFooter::set_differentOddEven_attr(const XSD::boolean_& _differentOddEven_attr)
{
    m_has_differentOddEven_attr = true;
    m_differentOddEven_attr = _differentOddEven_attr;
}

const XSD::boolean_& CT_HeaderFooter::get_differentOddEven_attr() const
{
    return m_differentOddEven_attr;
}

bool CT_HeaderFooter::has_differentFirst_attr() const
{
    return m_has_differentFirst_attr;
}

void CT_HeaderFooter::set_differentFirst_attr(const XSD::boolean_& _differentFirst_attr)
{
    m_has_differentFirst_attr = true;
    m_differentFirst_attr = _differentFirst_attr;
}

const XSD::boolean_& CT_HeaderFooter::get_differentFirst_attr() const
{
    return m_differentFirst_attr;
}

CT_HeaderFooter* CT_HeaderFooter::default_instance_ = NULL;

// CT_PageMargins
CT_PageMargins::CT_PageMargins()
    :m_has_l_attr(false),
     m_l_attr(0),
     m_has_r_attr(false),
     m_r_attr(0),
     m_has_t_attr(false),
     m_t_attr(0),
     m_has_b_attr(false),
     m_b_attr(0),
     m_has_header_attr(false),
     m_header_attr(0),
     m_has_footer_attr(false),
     m_footer_attr(0)
{
}
CT_PageMargins::~CT_PageMargins()
{
    clear();
}
void CT_PageMargins::clear()
{
    m_has_l_attr = false;
    m_l_attr = 0;

    m_has_r_attr = false;
    m_r_attr = 0;

    m_has_t_attr = false;
    m_t_attr = 0;

    m_has_b_attr = false;
    m_b_attr = 0;

    m_has_header_attr = false;
    m_header_attr = 0;

    m_has_footer_attr = false;
    m_footer_attr = 0;
}

void CT_PageMargins::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    assert(m_has_l_attr);
    if (m_has_l_attr)
    {
        _outStream << " " << "l" << "=\"" << m_l_attr << "\"";
    }


    assert(m_has_r_attr);
    if (m_has_r_attr)
    {
        _outStream << " " << "r" << "=\"" << m_r_attr << "\"";
    }


    assert(m_has_t_attr);
    if (m_has_t_attr)
    {
        _outStream << " " << "t" << "=\"" << m_t_attr << "\"";
    }


    assert(m_has_b_attr);
    if (m_has_b_attr)
    {
        _outStream << " " << "b" << "=\"" << m_b_attr << "\"";
    }


    assert(m_has_header_attr);
    if (m_has_header_attr)
    {
        _outStream << " " << "header" << "=\"" << m_header_attr << "\"";
    }


    assert(m_has_footer_attr);
    if (m_has_footer_attr)
    {
        _outStream << " " << "footer" << "=\"" << m_footer_attr << "\"";
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_PageMargins& CT_PageMargins::default_instance()
{
    if (!CT_PageMargins::default_instance_)
    {
        CT_PageMargins::default_instance_ = new CT_PageMargins();
    }
    return *CT_PageMargins::default_instance_;
}

bool CT_PageMargins::has_l_attr() const
{
    return m_has_l_attr;
}

void CT_PageMargins::set_l_attr(const XSD::double_& _l_attr)
{
    m_has_l_attr = true;
    m_l_attr = _l_attr;
}

const XSD::double_& CT_PageMargins::get_l_attr() const
{
    return m_l_attr;
}

bool CT_PageMargins::has_r_attr() const
{
    return m_has_r_attr;
}

void CT_PageMargins::set_r_attr(const XSD::double_& _r_attr)
{
    m_has_r_attr = true;
    m_r_attr = _r_attr;
}

const XSD::double_& CT_PageMargins::get_r_attr() const
{
    return m_r_attr;
}

bool CT_PageMargins::has_t_attr() const
{
    return m_has_t_attr;
}

void CT_PageMargins::set_t_attr(const XSD::double_& _t_attr)
{
    m_has_t_attr = true;
    m_t_attr = _t_attr;
}

const XSD::double_& CT_PageMargins::get_t_attr() const
{
    return m_t_attr;
}

bool CT_PageMargins::has_b_attr() const
{
    return m_has_b_attr;
}

void CT_PageMargins::set_b_attr(const XSD::double_& _b_attr)
{
    m_has_b_attr = true;
    m_b_attr = _b_attr;
}

const XSD::double_& CT_PageMargins::get_b_attr() const
{
    return m_b_attr;
}

bool CT_PageMargins::has_header_attr() const
{
    return m_has_header_attr;
}

void CT_PageMargins::set_header_attr(const XSD::double_& _header_attr)
{
    m_has_header_attr = true;
    m_header_attr = _header_attr;
}

const XSD::double_& CT_PageMargins::get_header_attr() const
{
    return m_header_attr;
}

bool CT_PageMargins::has_footer_attr() const
{
    return m_has_footer_attr;
}

void CT_PageMargins::set_footer_attr(const XSD::double_& _footer_attr)
{
    m_has_footer_attr = true;
    m_footer_attr = _footer_attr;
}

const XSD::double_& CT_PageMargins::get_footer_attr() const
{
    return m_footer_attr;
}

CT_PageMargins* CT_PageMargins::default_instance_ = NULL;

// CT_ExternalData
CT_ExternalData::CT_ExternalData()
    :m_has_autoUpdate(false),
     m_autoUpdate(NULL),
     m_has_r_id_attr(false),
     m_r_id_attr(NULL)
{
}
CT_ExternalData::~CT_ExternalData()
{
    clear();
}
bool CT_ExternalData::has_autoUpdate() const
{
    return m_has_autoUpdate;
}

CT_Boolean* CT_ExternalData::mutable_autoUpdate()
{
    m_has_autoUpdate = true;
    if (!m_autoUpdate)
    {
        m_autoUpdate = new CT_Boolean();
    }
    return m_autoUpdate;
}

const CT_Boolean& CT_ExternalData::get_autoUpdate() const
{
    if (m_autoUpdate)
    {
        return *m_autoUpdate;
    }
    return CT_Boolean::default_instance();
}

void CT_ExternalData::clear()
{
    m_has_r_id_attr = false;

    if (m_r_id_attr)
    {
        delete m_r_id_attr;
        m_r_id_attr = NULL;
    }


    m_has_autoUpdate = false;

    if (m_autoUpdate)
    {
        delete m_autoUpdate;
        m_autoUpdate = NULL;
    }

}

void CT_ExternalData::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    assert(m_has_r_id_attr);
    if (m_has_r_id_attr)
    {
        m_r_id_attr->toXmlAttr("r:id", _outStream);
    }

    _outStream << ">";


    if (m_has_autoUpdate)
    {
        m_autoUpdate->toXmlElem("c:autoUpdate", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_ExternalData& CT_ExternalData::default_instance()
{
    if (!CT_ExternalData::default_instance_)
    {
        CT_ExternalData::default_instance_ = new CT_ExternalData();
    }
    return *CT_ExternalData::default_instance_;
}

bool CT_ExternalData::has_r_id_attr() const
{
    return m_has_r_id_attr;
}

void CT_ExternalData::set_r_id_attr(const ns_r::ST_RelationshipId& _r_id_attr)
{
    m_has_r_id_attr = true;
    m_r_id_attr = new ns_r::ST_RelationshipId(_r_id_attr);
}

const ns_r::ST_RelationshipId& CT_ExternalData::get_r_id_attr() const
{
    if (m_r_id_attr)
    {
        return *m_r_id_attr;
    }
    return ns_r::ST_RelationshipId::default_instance();
}

CT_ExternalData* CT_ExternalData::default_instance_ = NULL;

// CT_PageSetup
CT_PageSetup::CT_PageSetup()
    :m_has_paperSize_attr(false),
     m_paperSize_attr(0),
     m_has_paperHeight_attr(false),
     m_paperHeight_attr(NULL),
     m_has_paperWidth_attr(false),
     m_paperWidth_attr(NULL),
     m_has_firstPageNumber_attr(false),
     m_firstPageNumber_attr(0),
     m_has_orientation_attr(false),
     m_orientation_attr(NULL),
     m_has_blackAndWhite_attr(false),
     m_blackAndWhite_attr(false),
     m_has_draft_attr(false),
     m_draft_attr(false),
     m_has_useFirstPageNumber_attr(false),
     m_useFirstPageNumber_attr(false),
     m_has_horizontalDpi_attr(false),
     m_horizontalDpi_attr(0),
     m_has_verticalDpi_attr(false),
     m_verticalDpi_attr(0),
     m_has_copies_attr(false),
     m_copies_attr(0)
{
}
CT_PageSetup::~CT_PageSetup()
{
    clear();
}
void CT_PageSetup::clear()
{
    m_has_paperSize_attr = false;
    m_paperSize_attr = 0;

    m_has_paperHeight_attr = false;

    if (m_paperHeight_attr)
    {
        delete m_paperHeight_attr;
        m_paperHeight_attr = NULL;
    }


    m_has_paperWidth_attr = false;

    if (m_paperWidth_attr)
    {
        delete m_paperWidth_attr;
        m_paperWidth_attr = NULL;
    }


    m_has_firstPageNumber_attr = false;
    m_firstPageNumber_attr = 0;

    m_has_orientation_attr = false;

    if (m_orientation_attr)
    {
        delete m_orientation_attr;
        m_orientation_attr = NULL;
    }


    m_has_blackAndWhite_attr = false;
    m_blackAndWhite_attr = false;

    m_has_draft_attr = false;
    m_draft_attr = false;

    m_has_useFirstPageNumber_attr = false;
    m_useFirstPageNumber_attr = false;

    m_has_horizontalDpi_attr = false;
    m_horizontalDpi_attr = 0;

    m_has_verticalDpi_attr = false;
    m_verticalDpi_attr = 0;

    m_has_copies_attr = false;
    m_copies_attr = 0;
}

void CT_PageSetup::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_paperSize_attr)
    {
        _outStream << " " << "paperSize" << "=\"" << m_paperSize_attr << "\"";
    }



    if (m_has_paperHeight_attr)
    {
        m_paperHeight_attr->toXmlAttr("paperHeight", _outStream);
    }



    if (m_has_paperWidth_attr)
    {
        m_paperWidth_attr->toXmlAttr("paperWidth", _outStream);
    }



    if (m_has_firstPageNumber_attr)
    {
        _outStream << " " << "firstPageNumber" << "=\"" << m_firstPageNumber_attr << "\"";
    }



    if (m_has_orientation_attr)
    {
        m_orientation_attr->toXmlAttr("orientation", _outStream);
    }



    if (m_has_blackAndWhite_attr)
    {
        _outStream << " " << "blackAndWhite" << "=\"" << XSD::XMLBooleanStr(m_blackAndWhite_attr) << "\"";
    }



    if (m_has_draft_attr)
    {
        _outStream << " " << "draft" << "=\"" << XSD::XMLBooleanStr(m_draft_attr) << "\"";
    }



    if (m_has_useFirstPageNumber_attr)
    {
        _outStream << " " << "useFirstPageNumber" << "=\"" << XSD::XMLBooleanStr(m_useFirstPageNumber_attr) << "\"";
    }



    if (m_has_horizontalDpi_attr)
    {
        _outStream << " " << "horizontalDpi" << "=\"" << m_horizontalDpi_attr << "\"";
    }



    if (m_has_verticalDpi_attr)
    {
        _outStream << " " << "verticalDpi" << "=\"" << m_verticalDpi_attr << "\"";
    }



    if (m_has_copies_attr)
    {
        _outStream << " " << "copies" << "=\"" << m_copies_attr << "\"";
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_PageSetup& CT_PageSetup::default_instance()
{
    if (!CT_PageSetup::default_instance_)
    {
        CT_PageSetup::default_instance_ = new CT_PageSetup();
    }
    return *CT_PageSetup::default_instance_;
}

bool CT_PageSetup::has_paperSize_attr() const
{
    return m_has_paperSize_attr;
}

void CT_PageSetup::set_paperSize_attr(const XSD::unsignedInt_& _paperSize_attr)
{
    m_has_paperSize_attr = true;
    m_paperSize_attr = _paperSize_attr;
}

const XSD::unsignedInt_& CT_PageSetup::get_paperSize_attr() const
{
    return m_paperSize_attr;
}

bool CT_PageSetup::has_paperHeight_attr() const
{
    return m_has_paperHeight_attr;
}

void CT_PageSetup::set_paperHeight_attr(const ns_s::ST_PositiveUniversalMeasure& _paperHeight_attr)
{
    m_has_paperHeight_attr = true;
    m_paperHeight_attr = new ns_s::ST_PositiveUniversalMeasure(_paperHeight_attr);
}

const ns_s::ST_PositiveUniversalMeasure& CT_PageSetup::get_paperHeight_attr() const
{
    if (m_paperHeight_attr)
    {
        return *m_paperHeight_attr;
    }
    return ns_s::ST_PositiveUniversalMeasure::default_instance();
}

bool CT_PageSetup::has_paperWidth_attr() const
{
    return m_has_paperWidth_attr;
}

void CT_PageSetup::set_paperWidth_attr(const ns_s::ST_PositiveUniversalMeasure& _paperWidth_attr)
{
    m_has_paperWidth_attr = true;
    m_paperWidth_attr = new ns_s::ST_PositiveUniversalMeasure(_paperWidth_attr);
}

const ns_s::ST_PositiveUniversalMeasure& CT_PageSetup::get_paperWidth_attr() const
{
    if (m_paperWidth_attr)
    {
        return *m_paperWidth_attr;
    }
    return ns_s::ST_PositiveUniversalMeasure::default_instance();
}

bool CT_PageSetup::has_firstPageNumber_attr() const
{
    return m_has_firstPageNumber_attr;
}

void CT_PageSetup::set_firstPageNumber_attr(const XSD::unsignedInt_& _firstPageNumber_attr)
{
    m_has_firstPageNumber_attr = true;
    m_firstPageNumber_attr = _firstPageNumber_attr;
}

const XSD::unsignedInt_& CT_PageSetup::get_firstPageNumber_attr() const
{
    return m_firstPageNumber_attr;
}

bool CT_PageSetup::has_orientation_attr() const
{
    return m_has_orientation_attr;
}

void CT_PageSetup::set_orientation_attr(const ST_PageSetupOrientation& _orientation_attr)
{
    m_has_orientation_attr = true;
    m_orientation_attr = new ST_PageSetupOrientation(_orientation_attr);
}

const ST_PageSetupOrientation& CT_PageSetup::get_orientation_attr() const
{
    if (m_orientation_attr)
    {
        return *m_orientation_attr;
    }
    return ST_PageSetupOrientation::default_instance();
}

bool CT_PageSetup::has_blackAndWhite_attr() const
{
    return m_has_blackAndWhite_attr;
}

void CT_PageSetup::set_blackAndWhite_attr(const XSD::boolean_& _blackAndWhite_attr)
{
    m_has_blackAndWhite_attr = true;
    m_blackAndWhite_attr = _blackAndWhite_attr;
}

const XSD::boolean_& CT_PageSetup::get_blackAndWhite_attr() const
{
    return m_blackAndWhite_attr;
}

bool CT_PageSetup::has_draft_attr() const
{
    return m_has_draft_attr;
}

void CT_PageSetup::set_draft_attr(const XSD::boolean_& _draft_attr)
{
    m_has_draft_attr = true;
    m_draft_attr = _draft_attr;
}

const XSD::boolean_& CT_PageSetup::get_draft_attr() const
{
    return m_draft_attr;
}

bool CT_PageSetup::has_useFirstPageNumber_attr() const
{
    return m_has_useFirstPageNumber_attr;
}

void CT_PageSetup::set_useFirstPageNumber_attr(const XSD::boolean_& _useFirstPageNumber_attr)
{
    m_has_useFirstPageNumber_attr = true;
    m_useFirstPageNumber_attr = _useFirstPageNumber_attr;
}

const XSD::boolean_& CT_PageSetup::get_useFirstPageNumber_attr() const
{
    return m_useFirstPageNumber_attr;
}

bool CT_PageSetup::has_horizontalDpi_attr() const
{
    return m_has_horizontalDpi_attr;
}

void CT_PageSetup::set_horizontalDpi_attr(const XSD::int_& _horizontalDpi_attr)
{
    m_has_horizontalDpi_attr = true;
    m_horizontalDpi_attr = _horizontalDpi_attr;
}

const XSD::int_& CT_PageSetup::get_horizontalDpi_attr() const
{
    return m_horizontalDpi_attr;
}

bool CT_PageSetup::has_verticalDpi_attr() const
{
    return m_has_verticalDpi_attr;
}

void CT_PageSetup::set_verticalDpi_attr(const XSD::int_& _verticalDpi_attr)
{
    m_has_verticalDpi_attr = true;
    m_verticalDpi_attr = _verticalDpi_attr;
}

const XSD::int_& CT_PageSetup::get_verticalDpi_attr() const
{
    return m_verticalDpi_attr;
}

bool CT_PageSetup::has_copies_attr() const
{
    return m_has_copies_attr;
}

void CT_PageSetup::set_copies_attr(const XSD::unsignedInt_& _copies_attr)
{
    m_has_copies_attr = true;
    m_copies_attr = _copies_attr;
}

const XSD::unsignedInt_& CT_PageSetup::get_copies_attr() const
{
    return m_copies_attr;
}

CT_PageSetup* CT_PageSetup::default_instance_ = NULL;

// CT_PrintSettings
CT_PrintSettings::CT_PrintSettings()
    :m_has_headerFooter(false),
     m_headerFooter(NULL),
     m_has_pageMargins(false),
     m_pageMargins(NULL),
     m_has_pageSetup(false),
     m_pageSetup(NULL),
     m_has_legacyDrawingHF(false),
     m_legacyDrawingHF(NULL)
{
}
CT_PrintSettings::~CT_PrintSettings()
{
    clear();
}
bool CT_PrintSettings::has_headerFooter() const
{
    return m_has_headerFooter;
}

CT_HeaderFooter* CT_PrintSettings::mutable_headerFooter()
{
    m_has_headerFooter = true;
    if (!m_headerFooter)
    {
        m_headerFooter = new CT_HeaderFooter();
    }
    return m_headerFooter;
}

const CT_HeaderFooter& CT_PrintSettings::get_headerFooter() const
{
    if (m_headerFooter)
    {
        return *m_headerFooter;
    }
    return CT_HeaderFooter::default_instance();
}

bool CT_PrintSettings::has_pageMargins() const
{
    return m_has_pageMargins;
}

CT_PageMargins* CT_PrintSettings::mutable_pageMargins()
{
    m_has_pageMargins = true;
    if (!m_pageMargins)
    {
        m_pageMargins = new CT_PageMargins();
    }
    return m_pageMargins;
}

const CT_PageMargins& CT_PrintSettings::get_pageMargins() const
{
    if (m_pageMargins)
    {
        return *m_pageMargins;
    }
    return CT_PageMargins::default_instance();
}

bool CT_PrintSettings::has_pageSetup() const
{
    return m_has_pageSetup;
}

CT_PageSetup* CT_PrintSettings::mutable_pageSetup()
{
    m_has_pageSetup = true;
    if (!m_pageSetup)
    {
        m_pageSetup = new CT_PageSetup();
    }
    return m_pageSetup;
}

const CT_PageSetup& CT_PrintSettings::get_pageSetup() const
{
    if (m_pageSetup)
    {
        return *m_pageSetup;
    }
    return CT_PageSetup::default_instance();
}

bool CT_PrintSettings::has_legacyDrawingHF() const
{
    return m_has_legacyDrawingHF;
}

CT_RelId* CT_PrintSettings::mutable_legacyDrawingHF()
{
    m_has_legacyDrawingHF = true;
    if (!m_legacyDrawingHF)
    {
        m_legacyDrawingHF = new CT_RelId();
    }
    return m_legacyDrawingHF;
}

const CT_RelId& CT_PrintSettings::get_legacyDrawingHF() const
{
    if (m_legacyDrawingHF)
    {
        return *m_legacyDrawingHF;
    }
    return CT_RelId::default_instance();
}

void CT_PrintSettings::clear()
{
    m_has_headerFooter = false;

    if (m_headerFooter)
    {
        delete m_headerFooter;
        m_headerFooter = NULL;
    }


    m_has_pageMargins = false;

    if (m_pageMargins)
    {
        delete m_pageMargins;
        m_pageMargins = NULL;
    }


    m_has_pageSetup = false;

    if (m_pageSetup)
    {
        delete m_pageSetup;
        m_pageSetup = NULL;
    }


    m_has_legacyDrawingHF = false;

    if (m_legacyDrawingHF)
    {
        delete m_legacyDrawingHF;
        m_legacyDrawingHF = NULL;
    }

}

void CT_PrintSettings::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";


    if (m_has_headerFooter)
    {
        m_headerFooter->toXmlElem("c:headerFooter", "", _outStream);
    }


    if (m_has_pageMargins)
    {
        m_pageMargins->toXmlElem("c:pageMargins", "", _outStream);
    }


    if (m_has_pageSetup)
    {
        m_pageSetup->toXmlElem("c:pageSetup", "", _outStream);
    }


    if (m_has_legacyDrawingHF)
    {
        m_legacyDrawingHF->toXmlElem("c:legacyDrawingHF", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_PrintSettings& CT_PrintSettings::default_instance()
{
    if (!CT_PrintSettings::default_instance_)
    {
        CT_PrintSettings::default_instance_ = new CT_PrintSettings();
    }
    return *CT_PrintSettings::default_instance_;
}

CT_PrintSettings* CT_PrintSettings::default_instance_ = NULL;

// CT_ChartSpace
CT_ChartSpace::CT_ChartSpace()
    :m_has_date1904(false),
     m_date1904(NULL),
     m_has_lang(false),
     m_lang(NULL),
     m_has_roundedCorners(false),
     m_roundedCorners(NULL),
     m_has_style(false),
     m_style(NULL),
     m_has_clrMapOvr(false),
     m_clrMapOvr(NULL),
     m_has_pivotSource(false),
     m_pivotSource(NULL),
     m_has_protection(false),
     m_protection(NULL),
     m_has_chart(false),
     m_chart(NULL),
     m_has_spPr(false),
     m_spPr(NULL),
     m_has_txPr(false),
     m_txPr(NULL),
     m_has_externalData(false),
     m_externalData(NULL),
     m_has_printSettings(false),
     m_printSettings(NULL),
     m_has_userShapes(false),
     m_userShapes(NULL),
     m_has_extLst(false),
     m_extLst(NULL)
{
}
CT_ChartSpace::~CT_ChartSpace()
{
    clear();
}
bool CT_ChartSpace::has_date1904() const
{
    return m_has_date1904;
}

CT_Boolean* CT_ChartSpace::mutable_date1904()
{
    m_has_date1904 = true;
    if (!m_date1904)
    {
        m_date1904 = new CT_Boolean();
    }
    return m_date1904;
}

const CT_Boolean& CT_ChartSpace::get_date1904() const
{
    if (m_date1904)
    {
        return *m_date1904;
    }
    return CT_Boolean::default_instance();
}

bool CT_ChartSpace::has_lang() const
{
    return m_has_lang;
}

CT_TextLanguageID* CT_ChartSpace::mutable_lang()
{
    m_has_lang = true;
    if (!m_lang)
    {
        m_lang = new CT_TextLanguageID();
    }
    return m_lang;
}

const CT_TextLanguageID& CT_ChartSpace::get_lang() const
{
    if (m_lang)
    {
        return *m_lang;
    }
    return CT_TextLanguageID::default_instance();
}

bool CT_ChartSpace::has_roundedCorners() const
{
    return m_has_roundedCorners;
}

CT_Boolean* CT_ChartSpace::mutable_roundedCorners()
{
    m_has_roundedCorners = true;
    if (!m_roundedCorners)
    {
        m_roundedCorners = new CT_Boolean();
    }
    return m_roundedCorners;
}

const CT_Boolean& CT_ChartSpace::get_roundedCorners() const
{
    if (m_roundedCorners)
    {
        return *m_roundedCorners;
    }
    return CT_Boolean::default_instance();
}

bool CT_ChartSpace::has_style() const
{
    return m_has_style;
}

CT_Style* CT_ChartSpace::mutable_style()
{
    m_has_style = true;
    if (!m_style)
    {
        m_style = new CT_Style();
    }
    return m_style;
}

const CT_Style& CT_ChartSpace::get_style() const
{
    if (m_style)
    {
        return *m_style;
    }
    return CT_Style::default_instance();
}

bool CT_ChartSpace::has_clrMapOvr() const
{
    return m_has_clrMapOvr;
}

ns_a::CT_ColorMapping* CT_ChartSpace::mutable_clrMapOvr()
{
    m_has_clrMapOvr = true;
    if (!m_clrMapOvr)
    {
        m_clrMapOvr = new ns_a::CT_ColorMapping();
    }
    return m_clrMapOvr;
}

const ns_a::CT_ColorMapping& CT_ChartSpace::get_clrMapOvr() const
{
    if (m_clrMapOvr)
    {
        return *m_clrMapOvr;
    }
    return ns_a::CT_ColorMapping::default_instance();
}

bool CT_ChartSpace::has_pivotSource() const
{
    return m_has_pivotSource;
}

CT_PivotSource* CT_ChartSpace::mutable_pivotSource()
{
    m_has_pivotSource = true;
    if (!m_pivotSource)
    {
        m_pivotSource = new CT_PivotSource();
    }
    return m_pivotSource;
}

const CT_PivotSource& CT_ChartSpace::get_pivotSource() const
{
    if (m_pivotSource)
    {
        return *m_pivotSource;
    }
    return CT_PivotSource::default_instance();
}

bool CT_ChartSpace::has_protection() const
{
    return m_has_protection;
}

CT_Protection* CT_ChartSpace::mutable_protection()
{
    m_has_protection = true;
    if (!m_protection)
    {
        m_protection = new CT_Protection();
    }
    return m_protection;
}

const CT_Protection& CT_ChartSpace::get_protection() const
{
    if (m_protection)
    {
        return *m_protection;
    }
    return CT_Protection::default_instance();
}

bool CT_ChartSpace::has_chart() const
{
    return m_has_chart;
}

CT_Chart* CT_ChartSpace::mutable_chart()
{
    m_has_chart = true;
    if (!m_chart)
    {
        m_chart = new CT_Chart();
    }
    return m_chart;
}

const CT_Chart& CT_ChartSpace::get_chart() const
{
    if (m_chart)
    {
        return *m_chart;
    }
    return CT_Chart::default_instance();
}

bool CT_ChartSpace::has_spPr() const
{
    return m_has_spPr;
}

ns_a::CT_ShapeProperties* CT_ChartSpace::mutable_spPr()
{
    m_has_spPr = true;
    if (!m_spPr)
    {
        m_spPr = new ns_a::CT_ShapeProperties();
    }
    return m_spPr;
}

const ns_a::CT_ShapeProperties& CT_ChartSpace::get_spPr() const
{
    if (m_spPr)
    {
        return *m_spPr;
    }
    return ns_a::CT_ShapeProperties::default_instance();
}

bool CT_ChartSpace::has_txPr() const
{
    return m_has_txPr;
}

ns_a::CT_TextBody* CT_ChartSpace::mutable_txPr()
{
    m_has_txPr = true;
    if (!m_txPr)
    {
        m_txPr = new ns_a::CT_TextBody();
    }
    return m_txPr;
}

const ns_a::CT_TextBody& CT_ChartSpace::get_txPr() const
{
    if (m_txPr)
    {
        return *m_txPr;
    }
    return ns_a::CT_TextBody::default_instance();
}

bool CT_ChartSpace::has_externalData() const
{
    return m_has_externalData;
}

CT_ExternalData* CT_ChartSpace::mutable_externalData()
{
    m_has_externalData = true;
    if (!m_externalData)
    {
        m_externalData = new CT_ExternalData();
    }
    return m_externalData;
}

const CT_ExternalData& CT_ChartSpace::get_externalData() const
{
    if (m_externalData)
    {
        return *m_externalData;
    }
    return CT_ExternalData::default_instance();
}

bool CT_ChartSpace::has_printSettings() const
{
    return m_has_printSettings;
}

CT_PrintSettings* CT_ChartSpace::mutable_printSettings()
{
    m_has_printSettings = true;
    if (!m_printSettings)
    {
        m_printSettings = new CT_PrintSettings();
    }
    return m_printSettings;
}

const CT_PrintSettings& CT_ChartSpace::get_printSettings() const
{
    if (m_printSettings)
    {
        return *m_printSettings;
    }
    return CT_PrintSettings::default_instance();
}

bool CT_ChartSpace::has_userShapes() const
{
    return m_has_userShapes;
}

CT_RelId* CT_ChartSpace::mutable_userShapes()
{
    m_has_userShapes = true;
    if (!m_userShapes)
    {
        m_userShapes = new CT_RelId();
    }
    return m_userShapes;
}

const CT_RelId& CT_ChartSpace::get_userShapes() const
{
    if (m_userShapes)
    {
        return *m_userShapes;
    }
    return CT_RelId::default_instance();
}

bool CT_ChartSpace::has_extLst() const
{
    return m_has_extLst;
}

CT_ExtensionList* CT_ChartSpace::mutable_extLst()
{
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new CT_ExtensionList();
    }
    return m_extLst;
}

const CT_ExtensionList& CT_ChartSpace::get_extLst() const
{
    if (m_extLst)
    {
        return *m_extLst;
    }
    return CT_ExtensionList::default_instance();
}

void CT_ChartSpace::clear()
{
    m_has_date1904 = false;

    if (m_date1904)
    {
        delete m_date1904;
        m_date1904 = NULL;
    }


    m_has_lang = false;

    if (m_lang)
    {
        delete m_lang;
        m_lang = NULL;
    }


    m_has_roundedCorners = false;

    if (m_roundedCorners)
    {
        delete m_roundedCorners;
        m_roundedCorners = NULL;
    }


    m_has_style = false;

    if (m_style)
    {
        delete m_style;
        m_style = NULL;
    }


    m_has_clrMapOvr = false;

    if (m_clrMapOvr)
    {
        delete m_clrMapOvr;
        m_clrMapOvr = NULL;
    }


    m_has_pivotSource = false;

    if (m_pivotSource)
    {
        delete m_pivotSource;
        m_pivotSource = NULL;
    }


    m_has_protection = false;

    if (m_protection)
    {
        delete m_protection;
        m_protection = NULL;
    }


    m_has_chart = false;

    if (m_chart)
    {
        delete m_chart;
        m_chart = NULL;
    }


    m_has_spPr = false;

    if (m_spPr)
    {
        delete m_spPr;
        m_spPr = NULL;
    }


    m_has_txPr = false;

    if (m_txPr)
    {
        delete m_txPr;
        m_txPr = NULL;
    }


    m_has_externalData = false;

    if (m_externalData)
    {
        delete m_externalData;
        m_externalData = NULL;
    }


    m_has_printSettings = false;

    if (m_printSettings)
    {
        delete m_printSettings;
        m_printSettings = NULL;
    }


    m_has_userShapes = false;

    if (m_userShapes)
    {
        delete m_userShapes;
        m_userShapes = NULL;
    }


    m_has_extLst = false;

    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }

}

void CT_ChartSpace::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";

    assert(m_has_chart);


    if (m_has_date1904)
    {
        m_date1904->toXmlElem("c:date1904", "", _outStream);
    }


    if (m_has_lang)
    {
        m_lang->toXmlElem("c:lang", "", _outStream);
    }


    if (m_has_roundedCorners)
    {
        m_roundedCorners->toXmlElem("c:roundedCorners", "", _outStream);
    }


    if (m_has_style)
    {
        m_style->toXmlElem("c:style", "", _outStream);
    }


    if (m_has_clrMapOvr)
    {
        m_clrMapOvr->toXmlElem("c:clrMapOvr", "", _outStream);
    }


    if (m_has_pivotSource)
    {
        m_pivotSource->toXmlElem("c:pivotSource", "", _outStream);
    }


    if (m_has_protection)
    {
        m_protection->toXmlElem("c:protection", "", _outStream);
    }


    if (m_has_chart)
    {
        m_chart->toXmlElem("c:chart", "", _outStream);
    }


    if (m_has_spPr)
    {
        m_spPr->toXmlElem("c:spPr", "", _outStream);
    }


    if (m_has_txPr)
    {
        m_txPr->toXmlElem("c:txPr", "", _outStream);
    }


    if (m_has_externalData)
    {
        m_externalData->toXmlElem("c:externalData", "", _outStream);
    }


    if (m_has_printSettings)
    {
        m_printSettings->toXmlElem("c:printSettings", "", _outStream);
    }


    if (m_has_userShapes)
    {
        m_userShapes->toXmlElem("c:userShapes", "", _outStream);
    }


    if (m_has_extLst)
    {
        m_extLst->toXmlElem("c:extLst", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_ChartSpace& CT_ChartSpace::default_instance()
{
    if (!CT_ChartSpace::default_instance_)
    {
        CT_ChartSpace::default_instance_ = new CT_ChartSpace();
    }
    return *CT_ChartSpace::default_instance_;
}

CT_ChartSpace* CT_ChartSpace::default_instance_ = NULL;

// chartSpace_element
chartSpace_element::chartSpace_element()
    :m_has_date1904(false),
     m_date1904(NULL),
     m_has_lang(false),
     m_lang(NULL),
     m_has_roundedCorners(false),
     m_roundedCorners(NULL),
     m_has_style(false),
     m_style(NULL),
     m_has_clrMapOvr(false),
     m_clrMapOvr(NULL),
     m_has_pivotSource(false),
     m_pivotSource(NULL),
     m_has_protection(false),
     m_protection(NULL),
     m_has_chart(false),
     m_chart(NULL),
     m_has_spPr(false),
     m_spPr(NULL),
     m_has_txPr(false),
     m_txPr(NULL),
     m_has_externalData(false),
     m_externalData(NULL),
     m_has_printSettings(false),
     m_printSettings(NULL),
     m_has_userShapes(false),
     m_userShapes(NULL),
     m_has_extLst(false),
     m_extLst(NULL)
{
}
chartSpace_element::~chartSpace_element()
{
    clear();
}
bool chartSpace_element::has_date1904() const
{
    return m_has_date1904;
}

CT_Boolean* chartSpace_element::mutable_date1904()
{
    m_has_date1904 = true;
    if (!m_date1904)
    {
        m_date1904 = new CT_Boolean();
    }
    return m_date1904;
}

const CT_Boolean& chartSpace_element::get_date1904() const
{
    if (m_date1904)
    {
        return *m_date1904;
    }
    return CT_Boolean::default_instance();
}

bool chartSpace_element::has_lang() const
{
    return m_has_lang;
}

CT_TextLanguageID* chartSpace_element::mutable_lang()
{
    m_has_lang = true;
    if (!m_lang)
    {
        m_lang = new CT_TextLanguageID();
    }
    return m_lang;
}

const CT_TextLanguageID& chartSpace_element::get_lang() const
{
    if (m_lang)
    {
        return *m_lang;
    }
    return CT_TextLanguageID::default_instance();
}

bool chartSpace_element::has_roundedCorners() const
{
    return m_has_roundedCorners;
}

CT_Boolean* chartSpace_element::mutable_roundedCorners()
{
    m_has_roundedCorners = true;
    if (!m_roundedCorners)
    {
        m_roundedCorners = new CT_Boolean();
    }
    return m_roundedCorners;
}

const CT_Boolean& chartSpace_element::get_roundedCorners() const
{
    if (m_roundedCorners)
    {
        return *m_roundedCorners;
    }
    return CT_Boolean::default_instance();
}

bool chartSpace_element::has_style() const
{
    return m_has_style;
}

CT_Style* chartSpace_element::mutable_style()
{
    m_has_style = true;
    if (!m_style)
    {
        m_style = new CT_Style();
    }
    return m_style;
}

const CT_Style& chartSpace_element::get_style() const
{
    if (m_style)
    {
        return *m_style;
    }
    return CT_Style::default_instance();
}

bool chartSpace_element::has_clrMapOvr() const
{
    return m_has_clrMapOvr;
}

ns_a::CT_ColorMapping* chartSpace_element::mutable_clrMapOvr()
{
    m_has_clrMapOvr = true;
    if (!m_clrMapOvr)
    {
        m_clrMapOvr = new ns_a::CT_ColorMapping();
    }
    return m_clrMapOvr;
}

const ns_a::CT_ColorMapping& chartSpace_element::get_clrMapOvr() const
{
    if (m_clrMapOvr)
    {
        return *m_clrMapOvr;
    }
    return ns_a::CT_ColorMapping::default_instance();
}

bool chartSpace_element::has_pivotSource() const
{
    return m_has_pivotSource;
}

CT_PivotSource* chartSpace_element::mutable_pivotSource()
{
    m_has_pivotSource = true;
    if (!m_pivotSource)
    {
        m_pivotSource = new CT_PivotSource();
    }
    return m_pivotSource;
}

const CT_PivotSource& chartSpace_element::get_pivotSource() const
{
    if (m_pivotSource)
    {
        return *m_pivotSource;
    }
    return CT_PivotSource::default_instance();
}

bool chartSpace_element::has_protection() const
{
    return m_has_protection;
}

CT_Protection* chartSpace_element::mutable_protection()
{
    m_has_protection = true;
    if (!m_protection)
    {
        m_protection = new CT_Protection();
    }
    return m_protection;
}

const CT_Protection& chartSpace_element::get_protection() const
{
    if (m_protection)
    {
        return *m_protection;
    }
    return CT_Protection::default_instance();
}

bool chartSpace_element::has_chart() const
{
    return m_has_chart;
}

CT_Chart* chartSpace_element::mutable_chart()
{
    m_has_chart = true;
    if (!m_chart)
    {
        m_chart = new CT_Chart();
    }
    return m_chart;
}

const CT_Chart& chartSpace_element::get_chart() const
{
    if (m_chart)
    {
        return *m_chart;
    }
    return CT_Chart::default_instance();
}

bool chartSpace_element::has_spPr() const
{
    return m_has_spPr;
}

ns_a::CT_ShapeProperties* chartSpace_element::mutable_spPr()
{
    m_has_spPr = true;
    if (!m_spPr)
    {
        m_spPr = new ns_a::CT_ShapeProperties();
    }
    return m_spPr;
}

const ns_a::CT_ShapeProperties& chartSpace_element::get_spPr() const
{
    if (m_spPr)
    {
        return *m_spPr;
    }
    return ns_a::CT_ShapeProperties::default_instance();
}

bool chartSpace_element::has_txPr() const
{
    return m_has_txPr;
}

ns_a::CT_TextBody* chartSpace_element::mutable_txPr()
{
    m_has_txPr = true;
    if (!m_txPr)
    {
        m_txPr = new ns_a::CT_TextBody();
    }
    return m_txPr;
}

const ns_a::CT_TextBody& chartSpace_element::get_txPr() const
{
    if (m_txPr)
    {
        return *m_txPr;
    }
    return ns_a::CT_TextBody::default_instance();
}

bool chartSpace_element::has_externalData() const
{
    return m_has_externalData;
}

CT_ExternalData* chartSpace_element::mutable_externalData()
{
    m_has_externalData = true;
    if (!m_externalData)
    {
        m_externalData = new CT_ExternalData();
    }
    return m_externalData;
}

const CT_ExternalData& chartSpace_element::get_externalData() const
{
    if (m_externalData)
    {
        return *m_externalData;
    }
    return CT_ExternalData::default_instance();
}

bool chartSpace_element::has_printSettings() const
{
    return m_has_printSettings;
}

CT_PrintSettings* chartSpace_element::mutable_printSettings()
{
    m_has_printSettings = true;
    if (!m_printSettings)
    {
        m_printSettings = new CT_PrintSettings();
    }
    return m_printSettings;
}

const CT_PrintSettings& chartSpace_element::get_printSettings() const
{
    if (m_printSettings)
    {
        return *m_printSettings;
    }
    return CT_PrintSettings::default_instance();
}

bool chartSpace_element::has_userShapes() const
{
    return m_has_userShapes;
}

CT_RelId* chartSpace_element::mutable_userShapes()
{
    m_has_userShapes = true;
    if (!m_userShapes)
    {
        m_userShapes = new CT_RelId();
    }
    return m_userShapes;
}

const CT_RelId& chartSpace_element::get_userShapes() const
{
    if (m_userShapes)
    {
        return *m_userShapes;
    }
    return CT_RelId::default_instance();
}

bool chartSpace_element::has_extLst() const
{
    return m_has_extLst;
}

CT_ExtensionList* chartSpace_element::mutable_extLst()
{
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new CT_ExtensionList();
    }
    return m_extLst;
}

const CT_ExtensionList& chartSpace_element::get_extLst() const
{
    if (m_extLst)
    {
        return *m_extLst;
    }
    return CT_ExtensionList::default_instance();
}

void chartSpace_element::clear()
{
    m_has_date1904 = false;

    if (m_date1904)
    {
        delete m_date1904;
        m_date1904 = NULL;
    }


    m_has_lang = false;

    if (m_lang)
    {
        delete m_lang;
        m_lang = NULL;
    }


    m_has_roundedCorners = false;

    if (m_roundedCorners)
    {
        delete m_roundedCorners;
        m_roundedCorners = NULL;
    }


    m_has_style = false;

    if (m_style)
    {
        delete m_style;
        m_style = NULL;
    }


    m_has_clrMapOvr = false;

    if (m_clrMapOvr)
    {
        delete m_clrMapOvr;
        m_clrMapOvr = NULL;
    }


    m_has_pivotSource = false;

    if (m_pivotSource)
    {
        delete m_pivotSource;
        m_pivotSource = NULL;
    }


    m_has_protection = false;

    if (m_protection)
    {
        delete m_protection;
        m_protection = NULL;
    }


    m_has_chart = false;

    if (m_chart)
    {
        delete m_chart;
        m_chart = NULL;
    }


    m_has_spPr = false;

    if (m_spPr)
    {
        delete m_spPr;
        m_spPr = NULL;
    }


    m_has_txPr = false;

    if (m_txPr)
    {
        delete m_txPr;
        m_txPr = NULL;
    }


    m_has_externalData = false;

    if (m_externalData)
    {
        delete m_externalData;
        m_externalData = NULL;
    }


    m_has_printSettings = false;

    if (m_printSettings)
    {
        delete m_printSettings;
        m_printSettings = NULL;
    }


    m_has_userShapes = false;

    if (m_userShapes)
    {
        delete m_userShapes;
        m_userShapes = NULL;
    }


    m_has_extLst = false;

    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }

}

void chartSpace_element::toXml(std::ostream& _outStream) const
{
    _outStream << "<c:chartSpace";

    _outStream << " " << "xmlns:c=\"http://schemas.openxmlformats.org/drawingml/2006/chart\"";
    _outStream << " " << "xmlns:cdr=\"http://schemas.openxmlformats.org/drawingml/2006/chartDrawing\"";
    _outStream << " " << "xmlns:s=\"http://schemas.openxmlformats.org/officeDocument/2006/sharedTypes\"";
    _outStream << " " << "xmlns:r=\"http://schemas.openxmlformats.org/officeDocument/2006/relationships\"";
    _outStream << " " << "xmlns:a=\"http://schemas.openxmlformats.org/drawingml/2006/main\"";

    _outStream << ">";

    assert(m_has_chart);


    if (m_has_date1904)
    {
        m_date1904->toXmlElem("c:date1904", "", _outStream);
    }


    if (m_has_lang)
    {
        m_lang->toXmlElem("c:lang", "", _outStream);
    }


    if (m_has_roundedCorners)
    {
        m_roundedCorners->toXmlElem("c:roundedCorners", "", _outStream);
    }


    if (m_has_style)
    {
        m_style->toXmlElem("c:style", "", _outStream);
    }


    if (m_has_clrMapOvr)
    {
        m_clrMapOvr->toXmlElem("c:clrMapOvr", "", _outStream);
    }


    if (m_has_pivotSource)
    {
        m_pivotSource->toXmlElem("c:pivotSource", "", _outStream);
    }


    if (m_has_protection)
    {
        m_protection->toXmlElem("c:protection", "", _outStream);
    }


    if (m_has_chart)
    {
        m_chart->toXmlElem("c:chart", "", _outStream);
    }


    if (m_has_spPr)
    {
        m_spPr->toXmlElem("c:spPr", "", _outStream);
    }


    if (m_has_txPr)
    {
        m_txPr->toXmlElem("c:txPr", "", _outStream);
    }


    if (m_has_externalData)
    {
        m_externalData->toXmlElem("c:externalData", "", _outStream);
    }


    if (m_has_printSettings)
    {
        m_printSettings->toXmlElem("c:printSettings", "", _outStream);
    }


    if (m_has_userShapes)
    {
        m_userShapes->toXmlElem("c:userShapes", "", _outStream);
    }


    if (m_has_extLst)
    {
        m_extLst->toXmlElem("c:extLst", "", _outStream);
    }

    _outStream << "</c:chartSpace>";
}

const chartSpace_element& chartSpace_element::default_instance()
{
    if (!chartSpace_element::default_instance_)
    {
        chartSpace_element::default_instance_ = new chartSpace_element();
    }
    return *chartSpace_element::default_instance_;
}

chartSpace_element* chartSpace_element::default_instance_ = NULL;

// userShapes_element

// chart_element
chart_element::chart_element()
    :m_has_r_id_attr(false),
     m_r_id_attr(NULL)
{
}
chart_element::~chart_element()
{
    clear();
}
void chart_element::clear()
{
    m_has_r_id_attr = false;

    if (m_r_id_attr)
    {
        delete m_r_id_attr;
        m_r_id_attr = NULL;
    }

}

void chart_element::toXml(std::ostream& _outStream) const
{
    _outStream << "<c:chart";

    _outStream << " " << "xmlns:c=\"http://schemas.openxmlformats.org/drawingml/2006/chart\"";
    _outStream << " " << "xmlns:cdr=\"http://schemas.openxmlformats.org/drawingml/2006/chartDrawing\"";
    _outStream << " " << "xmlns:s=\"http://schemas.openxmlformats.org/officeDocument/2006/sharedTypes\"";
    _outStream << " " << "xmlns:r=\"http://schemas.openxmlformats.org/officeDocument/2006/relationships\"";
    _outStream << " " << "xmlns:a=\"http://schemas.openxmlformats.org/drawingml/2006/main\"";

    assert(m_has_r_id_attr);
    if (m_has_r_id_attr)
    {
        m_r_id_attr->toXmlAttr("r:id", _outStream);
    }

    _outStream << ">";

    _outStream << "</c:chart>";
}

const chart_element& chart_element::default_instance()
{
    if (!chart_element::default_instance_)
    {
        chart_element::default_instance_ = new chart_element();
    }
    return *chart_element::default_instance_;
}

bool chart_element::has_r_id_attr() const
{
    return m_has_r_id_attr;
}

void chart_element::set_r_id_attr(const ns_r::ST_RelationshipId& _r_id_attr)
{
    m_has_r_id_attr = true;
    m_r_id_attr = new ns_r::ST_RelationshipId(_r_id_attr);
}

const ns_r::ST_RelationshipId& chart_element::get_r_id_attr() const
{
    if (m_r_id_attr)
    {
        return *m_r_id_attr;
    }
    return ns_r::ST_RelationshipId::default_instance();
}

chart_element* chart_element::default_instance_ = NULL;
}