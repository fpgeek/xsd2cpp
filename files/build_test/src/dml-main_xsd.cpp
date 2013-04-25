#include "dml-main_xsd.h"
#include <stdlib.h>
#include <sstream>
#include <sstream>
#include <assert.h>
#include "shared-relationshipReference_xsd.h"
#include "shared-commonSimpleTypes_xsd.h"
#include "dml-diagram_xsd.h"
#include "dml-chart_xsd.h"
#include "dml-picture_xsd.h"
#include "dml-lockedCanvas_xsd.h"
namespace ns_a {
 using namespace std;

    // Element

    // Attribute

    // ST_StyleMatrixColumnIndex
    ST_StyleMatrixColumnIndex::ST_StyleMatrixColumnIndex()
    :m_has_unsignedInt(false),
    m_unsignedInt(0)
    {
    }
    ST_StyleMatrixColumnIndex::ST_StyleMatrixColumnIndex(const XSD::unsignedInt_& _unsignedInt)
    :m_has_unsignedInt(true)
    {
    
    set_unsignedInt(m_unsignedInt);
    }
    bool ST_StyleMatrixColumnIndex::has_unsignedInt() const
    {    
    return m_has_unsignedInt;
    }

    void ST_StyleMatrixColumnIndex::set_unsignedInt(const XSD::unsignedInt_& _unsignedInt)
    {    
    m_has_unsignedInt = true;
    m_unsignedInt = _unsignedInt;
    }

    const XSD::unsignedInt_& ST_StyleMatrixColumnIndex::get_unsignedInt() const
    {    
    return m_unsignedInt;
    }

    void ST_StyleMatrixColumnIndex::clear()
    {    
    m_has_unsignedInt = false;
    m_unsignedInt = 0;;
    }

    void ST_StyleMatrixColumnIndex::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_unsignedInt)
    {
        _outStream << " " << _attrName << "=\"" << m_unsignedInt << "\"";;
    }
    }

    const ST_StyleMatrixColumnIndex& ST_StyleMatrixColumnIndex::default_instance()
    {    
    if (!ST_StyleMatrixColumnIndex::default_instance_)
    {
        ST_StyleMatrixColumnIndex::default_instance_ = new ST_StyleMatrixColumnIndex();
    }
    return *ST_StyleMatrixColumnIndex::default_instance_;
    }

    std::string ST_StyleMatrixColumnIndex::toString() const
    {    
    std::stringstream strStream;
    strStream << get_unsignedInt();
    return strStream.str();
    }

ST_StyleMatrixColumnIndex* ST_StyleMatrixColumnIndex::default_instance_ = NULL;

    // ST_FontCollectionIndex
    ST_FontCollectionIndex::ST_FontCollectionIndex()
    :m_has_type(false)
    {
    }
    ST_FontCollectionIndex::ST_FontCollectionIndex(const ST_FontCollectionIndex::Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
    }
    bool ST_FontCollectionIndex::has_type() const
    {    
    return m_has_type;
    }

    void ST_FontCollectionIndex::set_type(const ST_FontCollectionIndex::Type& _type)
    {    
    m_has_type = true;
    m_type = _type;
    }

    const ST_FontCollectionIndex::Type& ST_FontCollectionIndex::get_type() const
    {    
                return m_type;
                }

    std::string ST_FontCollectionIndex::toString() const
    {    
    return ST_FontCollectionIndex::TypeStrList[m_type];
    }

    void ST_FontCollectionIndex::clear()
    {    
    m_has_type = false;
    }

    void ST_FontCollectionIndex::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_type)
    {
    _outStream << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_FontCollectionIndex& ST_FontCollectionIndex::default_instance()
    {    
    if (!ST_FontCollectionIndex::default_instance_)
    {
        ST_FontCollectionIndex::default_instance_ = new ST_FontCollectionIndex();
    }
    return *ST_FontCollectionIndex::default_instance_;
    }

    const std::string ST_FontCollectionIndex::TypeStrList[] =
    {
        "major",
        "minor",
        "none"
    };
ST_FontCollectionIndex* ST_FontCollectionIndex::default_instance_ = NULL;

    // ST_ColorSchemeIndex
    ST_ColorSchemeIndex::ST_ColorSchemeIndex()
    :m_has_type(false)
    {
    }
    ST_ColorSchemeIndex::ST_ColorSchemeIndex(const ST_ColorSchemeIndex::Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
    }
    bool ST_ColorSchemeIndex::has_type() const
    {    
    return m_has_type;
    }

    void ST_ColorSchemeIndex::set_type(const ST_ColorSchemeIndex::Type& _type)
    {    
    m_has_type = true;
    m_type = _type;
    }

    const ST_ColorSchemeIndex::Type& ST_ColorSchemeIndex::get_type() const
    {    
                return m_type;
                }

    std::string ST_ColorSchemeIndex::toString() const
    {    
    return ST_ColorSchemeIndex::TypeStrList[m_type];
    }

    void ST_ColorSchemeIndex::clear()
    {    
    m_has_type = false;
    }

    void ST_ColorSchemeIndex::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_type)
    {
    _outStream << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_ColorSchemeIndex& ST_ColorSchemeIndex::default_instance()
    {    
    if (!ST_ColorSchemeIndex::default_instance_)
    {
        ST_ColorSchemeIndex::default_instance_ = new ST_ColorSchemeIndex();
    }
    return *ST_ColorSchemeIndex::default_instance_;
    }

    const std::string ST_ColorSchemeIndex::TypeStrList[] =
    {
        "dk1",
        "lt1",
        "dk2",
        "lt2",
        "accent1",
        "accent2",
        "accent3",
        "accent4",
        "accent5",
        "accent6",
        "hlink",
        "folHlink"
    };
ST_ColorSchemeIndex* ST_ColorSchemeIndex::default_instance_ = NULL;

    // ST_Coordinate
    bool ST_Coordinate::has_ST_CoordinateUnqualified() const
    {    
    return m_has_ST_CoordinateUnqualified;
    }

    ST_CoordinateUnqualified* ST_Coordinate::mutable_ST_CoordinateUnqualified()
    {    
    clear_ST_UniversalMeasure();
    m_has_ST_CoordinateUnqualified = true;
    if (!m_ST_CoordinateUnqualified)
    {
        m_ST_CoordinateUnqualified = new ST_CoordinateUnqualified();
    }
    return m_ST_CoordinateUnqualified;
    }

    const ST_CoordinateUnqualified& ST_Coordinate::get_ST_CoordinateUnqualified() const
    {    
    if (m_ST_CoordinateUnqualified)
    {
        return *m_ST_CoordinateUnqualified;
    }
    return ST_CoordinateUnqualified::default_instance();
    }

    void ST_Coordinate::clear_ST_CoordinateUnqualified()
    {    
    m_has_ST_CoordinateUnqualified = false;
    if (m_ST_CoordinateUnqualified)
    {
        delete m_ST_CoordinateUnqualified;
        m_ST_CoordinateUnqualified = NULL;
    }
    }

    bool ST_Coordinate::has_ST_UniversalMeasure() const
    {    
    return m_has_ST_UniversalMeasure;
    }

    ns_s::ST_UniversalMeasure* ST_Coordinate::mutable_ST_UniversalMeasure()
    {    
    clear_ST_CoordinateUnqualified();
    m_has_ST_UniversalMeasure = true;
    if (!m_ST_UniversalMeasure)
    {
        m_ST_UniversalMeasure = new ns_s::ST_UniversalMeasure();
    }
    return m_ST_UniversalMeasure;
    }

    const ns_s::ST_UniversalMeasure& ST_Coordinate::get_ST_UniversalMeasure() const
    {    
    if (m_ST_UniversalMeasure)
    {
        return *m_ST_UniversalMeasure;
    }
    return ns_s::ST_UniversalMeasure::default_instance();
    }

    void ST_Coordinate::clear_ST_UniversalMeasure()
    {    
    m_has_ST_UniversalMeasure = false;
    if (m_ST_UniversalMeasure)
    {
        delete m_ST_UniversalMeasure;
        m_ST_UniversalMeasure = NULL;
    }
    }

    std::string ST_Coordinate::toString() const
    {    
    if (m_has_ST_CoordinateUnqualified)
    {
        return m_ST_CoordinateUnqualified->toString();
    }
    
    if (m_has_ST_UniversalMeasure)
    {
        return m_ST_UniversalMeasure->toString();
    }
    
    return string();
    }

    void ST_Coordinate::clear()
    {    clear_ST_CoordinateUnqualified();
    clear_ST_UniversalMeasure();    }

    void ST_Coordinate::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_ST_CoordinateUnqualified)
    {
        m_ST_CoordinateUnqualified->toXmlAttr(_attrName, _outStream);
        return;
    }
    
    if (m_has_ST_UniversalMeasure)
    {
        m_ST_UniversalMeasure->toXmlAttr(_attrName, _outStream);
        return;
    }
    }

    const ST_Coordinate& ST_Coordinate::default_instance()
    {    
    if (!ST_Coordinate::default_instance_)
    {
        ST_Coordinate::default_instance_ = new ST_Coordinate();
    }
    return *ST_Coordinate::default_instance_;
    }

ST_Coordinate* ST_Coordinate::default_instance_ = NULL;

    // ST_CoordinateUnqualified
    ST_CoordinateUnqualified::ST_CoordinateUnqualified()
    :m_has_long(false),
    m_long(0)
    {
    }
    ST_CoordinateUnqualified::ST_CoordinateUnqualified(const XSD::long_& _long)
    :m_has_long(true)
    {
    
    set_long(m_long);
    }
    bool ST_CoordinateUnqualified::has_long() const
    {    
    return m_has_long;
    }

    void ST_CoordinateUnqualified::set_long(const XSD::long_& _long)
    {    assert(-27273042329600 <= _long);
    assert(_long <= 27273042316900);
    
    m_has_long = true;
    m_long = _long;
    }

    const XSD::long_& ST_CoordinateUnqualified::get_long() const
    {    
    return m_long;
    }

    void ST_CoordinateUnqualified::clear()
    {    
    m_has_long = false;
    m_long = 0;;
    }

    void ST_CoordinateUnqualified::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_long)
    {
        _outStream << " " << _attrName << "=\"" << m_long << "\"";;
    }
    }

    const ST_CoordinateUnqualified& ST_CoordinateUnqualified::default_instance()
    {    
    if (!ST_CoordinateUnqualified::default_instance_)
    {
        ST_CoordinateUnqualified::default_instance_ = new ST_CoordinateUnqualified();
    }
    return *ST_CoordinateUnqualified::default_instance_;
    }

    std::string ST_CoordinateUnqualified::toString() const
    {    
    std::stringstream strStream;
    strStream << get_long();
    return strStream.str();
    }

ST_CoordinateUnqualified* ST_CoordinateUnqualified::default_instance_ = NULL;

    // ST_Coordinate32
    bool ST_Coordinate32::has_ST_Coordinate32Unqualified() const
    {    
    return m_has_ST_Coordinate32Unqualified;
    }

    ST_Coordinate32Unqualified* ST_Coordinate32::mutable_ST_Coordinate32Unqualified()
    {    
    clear_ST_UniversalMeasure();
    m_has_ST_Coordinate32Unqualified = true;
    if (!m_ST_Coordinate32Unqualified)
    {
        m_ST_Coordinate32Unqualified = new ST_Coordinate32Unqualified();
    }
    return m_ST_Coordinate32Unqualified;
    }

    const ST_Coordinate32Unqualified& ST_Coordinate32::get_ST_Coordinate32Unqualified() const
    {    
    if (m_ST_Coordinate32Unqualified)
    {
        return *m_ST_Coordinate32Unqualified;
    }
    return ST_Coordinate32Unqualified::default_instance();
    }

    void ST_Coordinate32::clear_ST_Coordinate32Unqualified()
    {    
    m_has_ST_Coordinate32Unqualified = false;
    if (m_ST_Coordinate32Unqualified)
    {
        delete m_ST_Coordinate32Unqualified;
        m_ST_Coordinate32Unqualified = NULL;
    }
    }

    bool ST_Coordinate32::has_ST_UniversalMeasure() const
    {    
    return m_has_ST_UniversalMeasure;
    }

    ns_s::ST_UniversalMeasure* ST_Coordinate32::mutable_ST_UniversalMeasure()
    {    
    clear_ST_Coordinate32Unqualified();
    m_has_ST_UniversalMeasure = true;
    if (!m_ST_UniversalMeasure)
    {
        m_ST_UniversalMeasure = new ns_s::ST_UniversalMeasure();
    }
    return m_ST_UniversalMeasure;
    }

    const ns_s::ST_UniversalMeasure& ST_Coordinate32::get_ST_UniversalMeasure() const
    {    
    if (m_ST_UniversalMeasure)
    {
        return *m_ST_UniversalMeasure;
    }
    return ns_s::ST_UniversalMeasure::default_instance();
    }

    void ST_Coordinate32::clear_ST_UniversalMeasure()
    {    
    m_has_ST_UniversalMeasure = false;
    if (m_ST_UniversalMeasure)
    {
        delete m_ST_UniversalMeasure;
        m_ST_UniversalMeasure = NULL;
    }
    }

    std::string ST_Coordinate32::toString() const
    {    
    if (m_has_ST_Coordinate32Unqualified)
    {
        return m_ST_Coordinate32Unqualified->toString();
    }
    
    if (m_has_ST_UniversalMeasure)
    {
        return m_ST_UniversalMeasure->toString();
    }
    
    return string();
    }

    void ST_Coordinate32::clear()
    {    clear_ST_Coordinate32Unqualified();
    clear_ST_UniversalMeasure();    }

    void ST_Coordinate32::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_ST_Coordinate32Unqualified)
    {
        m_ST_Coordinate32Unqualified->toXmlAttr(_attrName, _outStream);
        return;
    }
    
    if (m_has_ST_UniversalMeasure)
    {
        m_ST_UniversalMeasure->toXmlAttr(_attrName, _outStream);
        return;
    }
    }

    const ST_Coordinate32& ST_Coordinate32::default_instance()
    {    
    if (!ST_Coordinate32::default_instance_)
    {
        ST_Coordinate32::default_instance_ = new ST_Coordinate32();
    }
    return *ST_Coordinate32::default_instance_;
    }

ST_Coordinate32* ST_Coordinate32::default_instance_ = NULL;

    // ST_Coordinate32Unqualified
    ST_Coordinate32Unqualified::ST_Coordinate32Unqualified()
    :m_has_int(false),
    m_int(0)
    {
    }
    ST_Coordinate32Unqualified::ST_Coordinate32Unqualified(const XSD::int_& _int)
    :m_has_int(true)
    {
    
    set_int(m_int);
    }
    bool ST_Coordinate32Unqualified::has_int() const
    {    
    return m_has_int;
    }

    void ST_Coordinate32Unqualified::set_int(const XSD::int_& _int)
    {    
    m_has_int = true;
    m_int = _int;
    }

    const XSD::int_& ST_Coordinate32Unqualified::get_int() const
    {    
    return m_int;
    }

    void ST_Coordinate32Unqualified::clear()
    {    
    m_has_int = false;
    m_int = 0;;
    }

    void ST_Coordinate32Unqualified::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_int)
    {
        _outStream << " " << _attrName << "=\"" << m_int << "\"";;
    }
    }

    const ST_Coordinate32Unqualified& ST_Coordinate32Unqualified::default_instance()
    {    
    if (!ST_Coordinate32Unqualified::default_instance_)
    {
        ST_Coordinate32Unqualified::default_instance_ = new ST_Coordinate32Unqualified();
    }
    return *ST_Coordinate32Unqualified::default_instance_;
    }

    std::string ST_Coordinate32Unqualified::toString() const
    {    
    std::stringstream strStream;
    strStream << get_int();
    return strStream.str();
    }

ST_Coordinate32Unqualified* ST_Coordinate32Unqualified::default_instance_ = NULL;

    // ST_PositiveCoordinate
    ST_PositiveCoordinate::ST_PositiveCoordinate()
    :m_has_long(false),
    m_long(0)
    {
    }
    ST_PositiveCoordinate::ST_PositiveCoordinate(const XSD::long_& _long)
    :m_has_long(true)
    {
    
    set_long(m_long);
    }
    bool ST_PositiveCoordinate::has_long() const
    {    
    return m_has_long;
    }

    void ST_PositiveCoordinate::set_long(const XSD::long_& _long)
    {    assert(0 <= _long);
    assert(_long <= 27273042316900);
    
    m_has_long = true;
    m_long = _long;
    }

    const XSD::long_& ST_PositiveCoordinate::get_long() const
    {    
    return m_long;
    }

    void ST_PositiveCoordinate::clear()
    {    
    m_has_long = false;
    m_long = 0;;
    }

    void ST_PositiveCoordinate::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_long)
    {
        _outStream << " " << _attrName << "=\"" << m_long << "\"";;
    }
    }

    const ST_PositiveCoordinate& ST_PositiveCoordinate::default_instance()
    {    
    if (!ST_PositiveCoordinate::default_instance_)
    {
        ST_PositiveCoordinate::default_instance_ = new ST_PositiveCoordinate();
    }
    return *ST_PositiveCoordinate::default_instance_;
    }

    std::string ST_PositiveCoordinate::toString() const
    {    
    std::stringstream strStream;
    strStream << get_long();
    return strStream.str();
    }

ST_PositiveCoordinate* ST_PositiveCoordinate::default_instance_ = NULL;

    // ST_PositiveCoordinate32
    ST_PositiveCoordinate32::ST_PositiveCoordinate32()

    {
    }
    ST_PositiveCoordinate32::ST_PositiveCoordinate32(const ST_Coordinate32Unqualified& _ST_Coordinate32Unqualified)

    {
    }
    const ST_PositiveCoordinate32& ST_PositiveCoordinate32::default_instance()
    {    
    if (!ST_PositiveCoordinate32::default_instance_)
    {
        ST_PositiveCoordinate32::default_instance_ = new ST_PositiveCoordinate32();
    }
    return *ST_PositiveCoordinate32::default_instance_;
    }

ST_PositiveCoordinate32* ST_PositiveCoordinate32::default_instance_ = NULL;

    // ST_Angle
    ST_Angle::ST_Angle()
    :m_has_int(false),
    m_int(0)
    {
    }
    ST_Angle::ST_Angle(const XSD::int_& _int)
    :m_has_int(true)
    {
    
    set_int(m_int);
    }
    bool ST_Angle::has_int() const
    {    
    return m_has_int;
    }

    void ST_Angle::set_int(const XSD::int_& _int)
    {    
    m_has_int = true;
    m_int = _int;
    }

    const XSD::int_& ST_Angle::get_int() const
    {    
    return m_int;
    }

    void ST_Angle::clear()
    {    
    m_has_int = false;
    m_int = 0;;
    }

    void ST_Angle::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_int)
    {
        _outStream << " " << _attrName << "=\"" << m_int << "\"";;
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
    strStream << get_int();
    return strStream.str();
    }

ST_Angle* ST_Angle::default_instance_ = NULL;

    // ST_FixedAngle
    ST_FixedAngle::ST_FixedAngle()

    {
    }
    ST_FixedAngle::ST_FixedAngle(const ST_Angle& _ST_Angle)

    {
    }
    const ST_FixedAngle& ST_FixedAngle::default_instance()
    {    
    if (!ST_FixedAngle::default_instance_)
    {
        ST_FixedAngle::default_instance_ = new ST_FixedAngle();
    }
    return *ST_FixedAngle::default_instance_;
    }

ST_FixedAngle* ST_FixedAngle::default_instance_ = NULL;

    // ST_PositiveFixedAngle
    ST_PositiveFixedAngle::ST_PositiveFixedAngle()

    {
    }
    ST_PositiveFixedAngle::ST_PositiveFixedAngle(const ST_Angle& _ST_Angle)

    {
    }
    const ST_PositiveFixedAngle& ST_PositiveFixedAngle::default_instance()
    {    
    if (!ST_PositiveFixedAngle::default_instance_)
    {
        ST_PositiveFixedAngle::default_instance_ = new ST_PositiveFixedAngle();
    }
    return *ST_PositiveFixedAngle::default_instance_;
    }

ST_PositiveFixedAngle* ST_PositiveFixedAngle::default_instance_ = NULL;

    // ST_Percentage
    bool ST_Percentage::has_ST_PercentageDecimal() const
    {    
    return m_has_ST_PercentageDecimal;
    }

    ST_PercentageDecimal* ST_Percentage::mutable_ST_PercentageDecimal()
    {    
    clear_ST_Percentage();
    m_has_ST_PercentageDecimal = true;
    if (!m_ST_PercentageDecimal)
    {
        m_ST_PercentageDecimal = new ST_PercentageDecimal();
    }
    return m_ST_PercentageDecimal;
    }

    const ST_PercentageDecimal& ST_Percentage::get_ST_PercentageDecimal() const
    {    
    if (m_ST_PercentageDecimal)
    {
        return *m_ST_PercentageDecimal;
    }
    return ST_PercentageDecimal::default_instance();
    }

    void ST_Percentage::clear_ST_PercentageDecimal()
    {    
    m_has_ST_PercentageDecimal = false;
    if (m_ST_PercentageDecimal)
    {
        delete m_ST_PercentageDecimal;
        m_ST_PercentageDecimal = NULL;
    }
    }

    bool ST_Percentage::has_ST_Percentage() const
    {    
    return m_has_ST_Percentage;
    }

    ns_s::ST_Percentage* ST_Percentage::mutable_ST_Percentage()
    {    
    clear_ST_PercentageDecimal();
    m_has_ST_Percentage = true;
    if (!m_ST_Percentage)
    {
        m_ST_Percentage = new ns_s::ST_Percentage();
    }
    return m_ST_Percentage;
    }

    const ns_s::ST_Percentage& ST_Percentage::get_ST_Percentage() const
    {    
    if (m_ST_Percentage)
    {
        return *m_ST_Percentage;
    }
    return ns_s::ST_Percentage::default_instance();
    }

    void ST_Percentage::clear_ST_Percentage()
    {    
    m_has_ST_Percentage = false;
    if (m_ST_Percentage)
    {
        delete m_ST_Percentage;
        m_ST_Percentage = NULL;
    }
    }

    std::string ST_Percentage::toString() const
    {    
    if (m_has_ST_PercentageDecimal)
    {
        return m_ST_PercentageDecimal->toString();
    }
    
    if (m_has_ST_Percentage)
    {
        return m_ST_Percentage->toString();
    }
    
    return string();
    }

    void ST_Percentage::clear()
    {    clear_ST_PercentageDecimal();
    clear_ST_Percentage();    }

    void ST_Percentage::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_ST_PercentageDecimal)
    {
        m_ST_PercentageDecimal->toXmlAttr(_attrName, _outStream);
        return;
    }
    
    if (m_has_ST_Percentage)
    {
        m_ST_Percentage->toXmlAttr(_attrName, _outStream);
        return;
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

ST_Percentage* ST_Percentage::default_instance_ = NULL;

    // ST_PercentageDecimal
    ST_PercentageDecimal::ST_PercentageDecimal()
    :m_has_int(false),
    m_int(0)
    {
    }
    ST_PercentageDecimal::ST_PercentageDecimal(const XSD::int_& _int)
    :m_has_int(true)
    {
    
    set_int(m_int);
    }
    bool ST_PercentageDecimal::has_int() const
    {    
    return m_has_int;
    }

    void ST_PercentageDecimal::set_int(const XSD::int_& _int)
    {    
    m_has_int = true;
    m_int = _int;
    }

    const XSD::int_& ST_PercentageDecimal::get_int() const
    {    
    return m_int;
    }

    void ST_PercentageDecimal::clear()
    {    
    m_has_int = false;
    m_int = 0;;
    }

    void ST_PercentageDecimal::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_int)
    {
        _outStream << " " << _attrName << "=\"" << m_int << "\"";;
    }
    }

    const ST_PercentageDecimal& ST_PercentageDecimal::default_instance()
    {    
    if (!ST_PercentageDecimal::default_instance_)
    {
        ST_PercentageDecimal::default_instance_ = new ST_PercentageDecimal();
    }
    return *ST_PercentageDecimal::default_instance_;
    }

    std::string ST_PercentageDecimal::toString() const
    {    
    std::stringstream strStream;
    strStream << get_int();
    return strStream.str();
    }

ST_PercentageDecimal* ST_PercentageDecimal::default_instance_ = NULL;

    // ST_PositivePercentage
    bool ST_PositivePercentage::has_ST_PositivePercentageDecimal() const
    {    
    return m_has_ST_PositivePercentageDecimal;
    }

    ST_PositivePercentageDecimal* ST_PositivePercentage::mutable_ST_PositivePercentageDecimal()
    {    
    clear_ST_PositivePercentage();
    m_has_ST_PositivePercentageDecimal = true;
    if (!m_ST_PositivePercentageDecimal)
    {
        m_ST_PositivePercentageDecimal = new ST_PositivePercentageDecimal();
    }
    return m_ST_PositivePercentageDecimal;
    }

    const ST_PositivePercentageDecimal& ST_PositivePercentage::get_ST_PositivePercentageDecimal() const
    {    
    if (m_ST_PositivePercentageDecimal)
    {
        return *m_ST_PositivePercentageDecimal;
    }
    return ST_PositivePercentageDecimal::default_instance();
    }

    void ST_PositivePercentage::clear_ST_PositivePercentageDecimal()
    {    
    m_has_ST_PositivePercentageDecimal = false;
    if (m_ST_PositivePercentageDecimal)
    {
        delete m_ST_PositivePercentageDecimal;
        m_ST_PositivePercentageDecimal = NULL;
    }
    }

    bool ST_PositivePercentage::has_ST_PositivePercentage() const
    {    
    return m_has_ST_PositivePercentage;
    }

    ns_s::ST_PositivePercentage* ST_PositivePercentage::mutable_ST_PositivePercentage()
    {    
    clear_ST_PositivePercentageDecimal();
    m_has_ST_PositivePercentage = true;
    if (!m_ST_PositivePercentage)
    {
        m_ST_PositivePercentage = new ns_s::ST_PositivePercentage();
    }
    return m_ST_PositivePercentage;
    }

    const ns_s::ST_PositivePercentage& ST_PositivePercentage::get_ST_PositivePercentage() const
    {    
    if (m_ST_PositivePercentage)
    {
        return *m_ST_PositivePercentage;
    }
    return ns_s::ST_PositivePercentage::default_instance();
    }

    void ST_PositivePercentage::clear_ST_PositivePercentage()
    {    
    m_has_ST_PositivePercentage = false;
    if (m_ST_PositivePercentage)
    {
        delete m_ST_PositivePercentage;
        m_ST_PositivePercentage = NULL;
    }
    }

    std::string ST_PositivePercentage::toString() const
    {    
    if (m_has_ST_PositivePercentageDecimal)
    {
        return m_ST_PositivePercentageDecimal->toString();
    }
    
    if (m_has_ST_PositivePercentage)
    {
        return m_ST_PositivePercentage->toString();
    }
    
    return string();
    }

    void ST_PositivePercentage::clear()
    {    clear_ST_PositivePercentageDecimal();
    clear_ST_PositivePercentage();    }

    void ST_PositivePercentage::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_ST_PositivePercentageDecimal)
    {
        m_ST_PositivePercentageDecimal->toXmlAttr(_attrName, _outStream);
        return;
    }
    
    if (m_has_ST_PositivePercentage)
    {
        m_ST_PositivePercentage->toXmlAttr(_attrName, _outStream);
        return;
    }
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

    // ST_PositivePercentageDecimal
    ST_PositivePercentageDecimal::ST_PositivePercentageDecimal()

    {
    }
    ST_PositivePercentageDecimal::ST_PositivePercentageDecimal(const ST_PercentageDecimal& _ST_PercentageDecimal)

    {
    }
    const ST_PositivePercentageDecimal& ST_PositivePercentageDecimal::default_instance()
    {    
    if (!ST_PositivePercentageDecimal::default_instance_)
    {
        ST_PositivePercentageDecimal::default_instance_ = new ST_PositivePercentageDecimal();
    }
    return *ST_PositivePercentageDecimal::default_instance_;
    }

ST_PositivePercentageDecimal* ST_PositivePercentageDecimal::default_instance_ = NULL;

    // ST_FixedPercentage
    bool ST_FixedPercentage::has_ST_FixedPercentageDecimal() const
    {    
    return m_has_ST_FixedPercentageDecimal;
    }

    ST_FixedPercentageDecimal* ST_FixedPercentage::mutable_ST_FixedPercentageDecimal()
    {    
    clear_ST_FixedPercentage();
    m_has_ST_FixedPercentageDecimal = true;
    if (!m_ST_FixedPercentageDecimal)
    {
        m_ST_FixedPercentageDecimal = new ST_FixedPercentageDecimal();
    }
    return m_ST_FixedPercentageDecimal;
    }

    const ST_FixedPercentageDecimal& ST_FixedPercentage::get_ST_FixedPercentageDecimal() const
    {    
    if (m_ST_FixedPercentageDecimal)
    {
        return *m_ST_FixedPercentageDecimal;
    }
    return ST_FixedPercentageDecimal::default_instance();
    }

    void ST_FixedPercentage::clear_ST_FixedPercentageDecimal()
    {    
    m_has_ST_FixedPercentageDecimal = false;
    if (m_ST_FixedPercentageDecimal)
    {
        delete m_ST_FixedPercentageDecimal;
        m_ST_FixedPercentageDecimal = NULL;
    }
    }

    bool ST_FixedPercentage::has_ST_FixedPercentage() const
    {    
    return m_has_ST_FixedPercentage;
    }

    ns_s::ST_FixedPercentage* ST_FixedPercentage::mutable_ST_FixedPercentage()
    {    
    clear_ST_FixedPercentageDecimal();
    m_has_ST_FixedPercentage = true;
    if (!m_ST_FixedPercentage)
    {
        m_ST_FixedPercentage = new ns_s::ST_FixedPercentage();
    }
    return m_ST_FixedPercentage;
    }

    const ns_s::ST_FixedPercentage& ST_FixedPercentage::get_ST_FixedPercentage() const
    {    
    if (m_ST_FixedPercentage)
    {
        return *m_ST_FixedPercentage;
    }
    return ns_s::ST_FixedPercentage::default_instance();
    }

    void ST_FixedPercentage::clear_ST_FixedPercentage()
    {    
    m_has_ST_FixedPercentage = false;
    if (m_ST_FixedPercentage)
    {
        delete m_ST_FixedPercentage;
        m_ST_FixedPercentage = NULL;
    }
    }

    std::string ST_FixedPercentage::toString() const
    {    
    if (m_has_ST_FixedPercentageDecimal)
    {
        return m_ST_FixedPercentageDecimal->toString();
    }
    
    if (m_has_ST_FixedPercentage)
    {
        return m_ST_FixedPercentage->toString();
    }
    
    return string();
    }

    void ST_FixedPercentage::clear()
    {    clear_ST_FixedPercentageDecimal();
    clear_ST_FixedPercentage();    }

    void ST_FixedPercentage::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_ST_FixedPercentageDecimal)
    {
        m_ST_FixedPercentageDecimal->toXmlAttr(_attrName, _outStream);
        return;
    }
    
    if (m_has_ST_FixedPercentage)
    {
        m_ST_FixedPercentage->toXmlAttr(_attrName, _outStream);
        return;
    }
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

    // ST_FixedPercentageDecimal
    ST_FixedPercentageDecimal::ST_FixedPercentageDecimal()

    {
    }
    ST_FixedPercentageDecimal::ST_FixedPercentageDecimal(const ST_PercentageDecimal& _ST_PercentageDecimal)

    {
    }
    const ST_FixedPercentageDecimal& ST_FixedPercentageDecimal::default_instance()
    {    
    if (!ST_FixedPercentageDecimal::default_instance_)
    {
        ST_FixedPercentageDecimal::default_instance_ = new ST_FixedPercentageDecimal();
    }
    return *ST_FixedPercentageDecimal::default_instance_;
    }

ST_FixedPercentageDecimal* ST_FixedPercentageDecimal::default_instance_ = NULL;

    // ST_PositiveFixedPercentage
    bool ST_PositiveFixedPercentage::has_ST_PositiveFixedPercentageDecimal() const
    {    
    return m_has_ST_PositiveFixedPercentageDecimal;
    }

    ST_PositiveFixedPercentageDecimal* ST_PositiveFixedPercentage::mutable_ST_PositiveFixedPercentageDecimal()
    {    
    clear_ST_PositiveFixedPercentage();
    m_has_ST_PositiveFixedPercentageDecimal = true;
    if (!m_ST_PositiveFixedPercentageDecimal)
    {
        m_ST_PositiveFixedPercentageDecimal = new ST_PositiveFixedPercentageDecimal();
    }
    return m_ST_PositiveFixedPercentageDecimal;
    }

    const ST_PositiveFixedPercentageDecimal& ST_PositiveFixedPercentage::get_ST_PositiveFixedPercentageDecimal() const
    {    
    if (m_ST_PositiveFixedPercentageDecimal)
    {
        return *m_ST_PositiveFixedPercentageDecimal;
    }
    return ST_PositiveFixedPercentageDecimal::default_instance();
    }

    void ST_PositiveFixedPercentage::clear_ST_PositiveFixedPercentageDecimal()
    {    
    m_has_ST_PositiveFixedPercentageDecimal = false;
    if (m_ST_PositiveFixedPercentageDecimal)
    {
        delete m_ST_PositiveFixedPercentageDecimal;
        m_ST_PositiveFixedPercentageDecimal = NULL;
    }
    }

    bool ST_PositiveFixedPercentage::has_ST_PositiveFixedPercentage() const
    {    
    return m_has_ST_PositiveFixedPercentage;
    }

    ns_s::ST_PositiveFixedPercentage* ST_PositiveFixedPercentage::mutable_ST_PositiveFixedPercentage()
    {    
    clear_ST_PositiveFixedPercentageDecimal();
    m_has_ST_PositiveFixedPercentage = true;
    if (!m_ST_PositiveFixedPercentage)
    {
        m_ST_PositiveFixedPercentage = new ns_s::ST_PositiveFixedPercentage();
    }
    return m_ST_PositiveFixedPercentage;
    }

    const ns_s::ST_PositiveFixedPercentage& ST_PositiveFixedPercentage::get_ST_PositiveFixedPercentage() const
    {    
    if (m_ST_PositiveFixedPercentage)
    {
        return *m_ST_PositiveFixedPercentage;
    }
    return ns_s::ST_PositiveFixedPercentage::default_instance();
    }

    void ST_PositiveFixedPercentage::clear_ST_PositiveFixedPercentage()
    {    
    m_has_ST_PositiveFixedPercentage = false;
    if (m_ST_PositiveFixedPercentage)
    {
        delete m_ST_PositiveFixedPercentage;
        m_ST_PositiveFixedPercentage = NULL;
    }
    }

    std::string ST_PositiveFixedPercentage::toString() const
    {    
    if (m_has_ST_PositiveFixedPercentageDecimal)
    {
        return m_ST_PositiveFixedPercentageDecimal->toString();
    }
    
    if (m_has_ST_PositiveFixedPercentage)
    {
        return m_ST_PositiveFixedPercentage->toString();
    }
    
    return string();
    }

    void ST_PositiveFixedPercentage::clear()
    {    clear_ST_PositiveFixedPercentageDecimal();
    clear_ST_PositiveFixedPercentage();    }

    void ST_PositiveFixedPercentage::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_ST_PositiveFixedPercentageDecimal)
    {
        m_ST_PositiveFixedPercentageDecimal->toXmlAttr(_attrName, _outStream);
        return;
    }
    
    if (m_has_ST_PositiveFixedPercentage)
    {
        m_ST_PositiveFixedPercentage->toXmlAttr(_attrName, _outStream);
        return;
    }
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

    // ST_PositiveFixedPercentageDecimal
    ST_PositiveFixedPercentageDecimal::ST_PositiveFixedPercentageDecimal()

    {
    }
    ST_PositiveFixedPercentageDecimal::ST_PositiveFixedPercentageDecimal(const ST_PercentageDecimal& _ST_PercentageDecimal)

    {
    }
    const ST_PositiveFixedPercentageDecimal& ST_PositiveFixedPercentageDecimal::default_instance()
    {    
    if (!ST_PositiveFixedPercentageDecimal::default_instance_)
    {
        ST_PositiveFixedPercentageDecimal::default_instance_ = new ST_PositiveFixedPercentageDecimal();
    }
    return *ST_PositiveFixedPercentageDecimal::default_instance_;
    }

ST_PositiveFixedPercentageDecimal* ST_PositiveFixedPercentageDecimal::default_instance_ = NULL;

    // ST_SystemColorVal
    ST_SystemColorVal::ST_SystemColorVal()
    :m_has_type(false)
    {
    }
    ST_SystemColorVal::ST_SystemColorVal(const ST_SystemColorVal::Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
    }
    bool ST_SystemColorVal::has_type() const
    {    
    return m_has_type;
    }

    void ST_SystemColorVal::set_type(const ST_SystemColorVal::Type& _type)
    {    
    m_has_type = true;
    m_type = _type;
    }

    const ST_SystemColorVal::Type& ST_SystemColorVal::get_type() const
    {    
                return m_type;
                }

    std::string ST_SystemColorVal::toString() const
    {    
    return ST_SystemColorVal::TypeStrList[m_type];
    }

    void ST_SystemColorVal::clear()
    {    
    m_has_type = false;
    }

    void ST_SystemColorVal::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_type)
    {
    _outStream << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_SystemColorVal& ST_SystemColorVal::default_instance()
    {    
    if (!ST_SystemColorVal::default_instance_)
    {
        ST_SystemColorVal::default_instance_ = new ST_SystemColorVal();
    }
    return *ST_SystemColorVal::default_instance_;
    }

    const std::string ST_SystemColorVal::TypeStrList[] =
    {
        "scrollBar",
        "background",
        "activeCaption",
        "inactiveCaption",
        "menu",
        "window",
        "windowFrame",
        "menuText",
        "windowText",
        "captionText",
        "activeBorder",
        "inactiveBorder",
        "appWorkspace",
        "highlight",
        "highlightText",
        "btnFace",
        "btnShadow",
        "grayText",
        "btnText",
        "inactiveCaptionText",
        "btnHighlight",
        "3dDkShadow",
        "3dLight",
        "infoText",
        "infoBk",
        "hotLight",
        "gradientActiveCaption",
        "gradientInactiveCaption",
        "menuHighlight",
        "menuBar"
    };
ST_SystemColorVal* ST_SystemColorVal::default_instance_ = NULL;

    // ST_SchemeColorVal
    ST_SchemeColorVal::ST_SchemeColorVal()
    :m_has_type(false)
    {
    }
    ST_SchemeColorVal::ST_SchemeColorVal(const ST_SchemeColorVal::Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
    }
    bool ST_SchemeColorVal::has_type() const
    {    
    return m_has_type;
    }

    void ST_SchemeColorVal::set_type(const ST_SchemeColorVal::Type& _type)
    {    
    m_has_type = true;
    m_type = _type;
    }

    const ST_SchemeColorVal::Type& ST_SchemeColorVal::get_type() const
    {    
                return m_type;
                }

    std::string ST_SchemeColorVal::toString() const
    {    
    return ST_SchemeColorVal::TypeStrList[m_type];
    }

    void ST_SchemeColorVal::clear()
    {    
    m_has_type = false;
    }

    void ST_SchemeColorVal::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_type)
    {
    _outStream << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_SchemeColorVal& ST_SchemeColorVal::default_instance()
    {    
    if (!ST_SchemeColorVal::default_instance_)
    {
        ST_SchemeColorVal::default_instance_ = new ST_SchemeColorVal();
    }
    return *ST_SchemeColorVal::default_instance_;
    }

    const std::string ST_SchemeColorVal::TypeStrList[] =
    {
        "bg1",
        "tx1",
        "bg2",
        "tx2",
        "accent1",
        "accent2",
        "accent3",
        "accent4",
        "accent5",
        "accent6",
        "hlink",
        "folHlink",
        "phClr",
        "dk1",
        "lt1",
        "dk2",
        "lt2"
    };
ST_SchemeColorVal* ST_SchemeColorVal::default_instance_ = NULL;

    // ST_PresetColorVal
    ST_PresetColorVal::ST_PresetColorVal()
    :m_has_type(false)
    {
    }
    ST_PresetColorVal::ST_PresetColorVal(const ST_PresetColorVal::Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
    }
    bool ST_PresetColorVal::has_type() const
    {    
    return m_has_type;
    }

    void ST_PresetColorVal::set_type(const ST_PresetColorVal::Type& _type)
    {    
    m_has_type = true;
    m_type = _type;
    }

    const ST_PresetColorVal::Type& ST_PresetColorVal::get_type() const
    {    
                return m_type;
                }

    std::string ST_PresetColorVal::toString() const
    {    
    return ST_PresetColorVal::TypeStrList[m_type];
    }

    void ST_PresetColorVal::clear()
    {    
    m_has_type = false;
    }

    void ST_PresetColorVal::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_type)
    {
    _outStream << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_PresetColorVal& ST_PresetColorVal::default_instance()
    {    
    if (!ST_PresetColorVal::default_instance_)
    {
        ST_PresetColorVal::default_instance_ = new ST_PresetColorVal();
    }
    return *ST_PresetColorVal::default_instance_;
    }

    const std::string ST_PresetColorVal::TypeStrList[] =
    {
        "aliceBlue",
        "antiqueWhite",
        "aqua",
        "aquamarine",
        "azure",
        "beige",
        "bisque",
        "black",
        "blanchedAlmond",
        "blue",
        "blueViolet",
        "brown",
        "burlyWood",
        "cadetBlue",
        "chartreuse",
        "chocolate",
        "coral",
        "cornflowerBlue",
        "cornsilk",
        "crimson",
        "cyan",
        "darkBlue",
        "darkCyan",
        "darkGoldenrod",
        "darkGray",
        "darkGrey",
        "darkGreen",
        "darkKhaki",
        "darkMagenta",
        "darkOliveGreen",
        "darkOrange",
        "darkOrchid",
        "darkRed",
        "darkSalmon",
        "darkSeaGreen",
        "darkSlateBlue",
        "darkSlateGray",
        "darkSlateGrey",
        "darkTurquoise",
        "darkViolet",
        "dkBlue",
        "dkCyan",
        "dkGoldenrod",
        "dkGray",
        "dkGrey",
        "dkGreen",
        "dkKhaki",
        "dkMagenta",
        "dkOliveGreen",
        "dkOrange",
        "dkOrchid",
        "dkRed",
        "dkSalmon",
        "dkSeaGreen",
        "dkSlateBlue",
        "dkSlateGray",
        "dkSlateGrey",
        "dkTurquoise",
        "dkViolet",
        "deepPink",
        "deepSkyBlue",
        "dimGray",
        "dimGrey",
        "dodgerBlue",
        "firebrick",
        "floralWhite",
        "forestGreen",
        "fuchsia",
        "gainsboro",
        "ghostWhite",
        "gold",
        "goldenrod",
        "gray",
        "grey",
        "green",
        "greenYellow",
        "honeydew",
        "hotPink",
        "indianRed",
        "indigo",
        "ivory",
        "khaki",
        "lavender",
        "lavenderBlush",
        "lawnGreen",
        "lemonChiffon",
        "lightBlue",
        "lightCoral",
        "lightCyan",
        "lightGoldenrodYellow",
        "lightGray",
        "lightGrey",
        "lightGreen",
        "lightPink",
        "lightSalmon",
        "lightSeaGreen",
        "lightSkyBlue",
        "lightSlateGray",
        "lightSlateGrey",
        "lightSteelBlue",
        "lightYellow",
        "ltBlue",
        "ltCoral",
        "ltCyan",
        "ltGoldenrodYellow",
        "ltGray",
        "ltGrey",
        "ltGreen",
        "ltPink",
        "ltSalmon",
        "ltSeaGreen",
        "ltSkyBlue",
        "ltSlateGray",
        "ltSlateGrey",
        "ltSteelBlue",
        "ltYellow",
        "lime",
        "limeGreen",
        "linen",
        "magenta",
        "maroon",
        "medAquamarine",
        "medBlue",
        "medOrchid",
        "medPurple",
        "medSeaGreen",
        "medSlateBlue",
        "medSpringGreen",
        "medTurquoise",
        "medVioletRed",
        "mediumAquamarine",
        "mediumBlue",
        "mediumOrchid",
        "mediumPurple",
        "mediumSeaGreen",
        "mediumSlateBlue",
        "mediumSpringGreen",
        "mediumTurquoise",
        "mediumVioletRed",
        "midnightBlue",
        "mintCream",
        "mistyRose",
        "moccasin",
        "navajoWhite",
        "navy",
        "oldLace",
        "olive",
        "oliveDrab",
        "orange",
        "orangeRed",
        "orchid",
        "paleGoldenrod",
        "paleGreen",
        "paleTurquoise",
        "paleVioletRed",
        "papayaWhip",
        "peachPuff",
        "peru",
        "pink",
        "plum",
        "powderBlue",
        "purple",
        "red",
        "rosyBrown",
        "royalBlue",
        "saddleBrown",
        "salmon",
        "sandyBrown",
        "seaGreen",
        "seaShell",
        "sienna",
        "silver",
        "skyBlue",
        "slateBlue",
        "slateGray",
        "slateGrey",
        "snow",
        "springGreen",
        "steelBlue",
        "tan",
        "teal",
        "thistle",
        "tomato",
        "turquoise",
        "violet",
        "wheat",
        "white",
        "whiteSmoke",
        "yellow",
        "yellowGreen"
    };
ST_PresetColorVal* ST_PresetColorVal::default_instance_ = NULL;

    // ST_RectAlignment
    ST_RectAlignment::ST_RectAlignment()
    :m_has_type(false)
    {
    }
    ST_RectAlignment::ST_RectAlignment(const ST_RectAlignment::Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
    }
    bool ST_RectAlignment::has_type() const
    {    
    return m_has_type;
    }

    void ST_RectAlignment::set_type(const ST_RectAlignment::Type& _type)
    {    
    m_has_type = true;
    m_type = _type;
    }

    const ST_RectAlignment::Type& ST_RectAlignment::get_type() const
    {    
                return m_type;
                }

    std::string ST_RectAlignment::toString() const
    {    
    return ST_RectAlignment::TypeStrList[m_type];
    }

    void ST_RectAlignment::clear()
    {    
    m_has_type = false;
    }

    void ST_RectAlignment::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_type)
    {
    _outStream << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_RectAlignment& ST_RectAlignment::default_instance()
    {    
    if (!ST_RectAlignment::default_instance_)
    {
        ST_RectAlignment::default_instance_ = new ST_RectAlignment();
    }
    return *ST_RectAlignment::default_instance_;
    }

    const std::string ST_RectAlignment::TypeStrList[] =
    {
        "tl",
        "t",
        "tr",
        "l",
        "ctr",
        "r",
        "bl",
        "b",
        "br"
    };
ST_RectAlignment* ST_RectAlignment::default_instance_ = NULL;

    // ST_BlackWhiteMode
    ST_BlackWhiteMode::ST_BlackWhiteMode()
    :m_has_type(false)
    {
    }
    ST_BlackWhiteMode::ST_BlackWhiteMode(const ST_BlackWhiteMode::Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
    }
    bool ST_BlackWhiteMode::has_type() const
    {    
    return m_has_type;
    }

    void ST_BlackWhiteMode::set_type(const ST_BlackWhiteMode::Type& _type)
    {    
    m_has_type = true;
    m_type = _type;
    }

    const ST_BlackWhiteMode::Type& ST_BlackWhiteMode::get_type() const
    {    
                return m_type;
                }

    std::string ST_BlackWhiteMode::toString() const
    {    
    return ST_BlackWhiteMode::TypeStrList[m_type];
    }

    void ST_BlackWhiteMode::clear()
    {    
    m_has_type = false;
    }

    void ST_BlackWhiteMode::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_type)
    {
    _outStream << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_BlackWhiteMode& ST_BlackWhiteMode::default_instance()
    {    
    if (!ST_BlackWhiteMode::default_instance_)
    {
        ST_BlackWhiteMode::default_instance_ = new ST_BlackWhiteMode();
    }
    return *ST_BlackWhiteMode::default_instance_;
    }

    const std::string ST_BlackWhiteMode::TypeStrList[] =
    {
        "clr",
        "auto",
        "gray",
        "ltGray",
        "invGray",
        "grayWhite",
        "blackGray",
        "blackWhite",
        "black",
        "white",
        "hidden"
    };
ST_BlackWhiteMode* ST_BlackWhiteMode::default_instance_ = NULL;

    // ST_DrawingElementId
    ST_DrawingElementId::ST_DrawingElementId()
    :m_has_unsignedInt(false),
    m_unsignedInt(0)
    {
    }
    ST_DrawingElementId::ST_DrawingElementId(const XSD::unsignedInt_& _unsignedInt)
    :m_has_unsignedInt(true)
    {
    
    set_unsignedInt(m_unsignedInt);
    }
    bool ST_DrawingElementId::has_unsignedInt() const
    {    
    return m_has_unsignedInt;
    }

    void ST_DrawingElementId::set_unsignedInt(const XSD::unsignedInt_& _unsignedInt)
    {    
    m_has_unsignedInt = true;
    m_unsignedInt = _unsignedInt;
    }

    const XSD::unsignedInt_& ST_DrawingElementId::get_unsignedInt() const
    {    
    return m_unsignedInt;
    }

    void ST_DrawingElementId::clear()
    {    
    m_has_unsignedInt = false;
    m_unsignedInt = 0;;
    }

    void ST_DrawingElementId::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_unsignedInt)
    {
        _outStream << " " << _attrName << "=\"" << m_unsignedInt << "\"";;
    }
    }

    const ST_DrawingElementId& ST_DrawingElementId::default_instance()
    {    
    if (!ST_DrawingElementId::default_instance_)
    {
        ST_DrawingElementId::default_instance_ = new ST_DrawingElementId();
    }
    return *ST_DrawingElementId::default_instance_;
    }

    std::string ST_DrawingElementId::toString() const
    {    
    std::stringstream strStream;
    strStream << get_unsignedInt();
    return strStream.str();
    }

ST_DrawingElementId* ST_DrawingElementId::default_instance_ = NULL;

    // ST_ChartBuildStep
    ST_ChartBuildStep::ST_ChartBuildStep()
    :m_has_type(false)
    {
    }
    ST_ChartBuildStep::ST_ChartBuildStep(const ST_ChartBuildStep::Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
    }
    bool ST_ChartBuildStep::has_type() const
    {    
    return m_has_type;
    }

    void ST_ChartBuildStep::set_type(const ST_ChartBuildStep::Type& _type)
    {    
    m_has_type = true;
    m_type = _type;
    }

    const ST_ChartBuildStep::Type& ST_ChartBuildStep::get_type() const
    {    
                return m_type;
                }

    std::string ST_ChartBuildStep::toString() const
    {    
    return ST_ChartBuildStep::TypeStrList[m_type];
    }

    void ST_ChartBuildStep::clear()
    {    
    m_has_type = false;
    }

    void ST_ChartBuildStep::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_type)
    {
    _outStream << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_ChartBuildStep& ST_ChartBuildStep::default_instance()
    {    
    if (!ST_ChartBuildStep::default_instance_)
    {
        ST_ChartBuildStep::default_instance_ = new ST_ChartBuildStep();
    }
    return *ST_ChartBuildStep::default_instance_;
    }

    const std::string ST_ChartBuildStep::TypeStrList[] =
    {
        "category",
        "ptInCategory",
        "series",
        "ptInSeries",
        "allPts",
        "gridLegend"
    };
ST_ChartBuildStep* ST_ChartBuildStep::default_instance_ = NULL;

    // ST_DgmBuildStep
    ST_DgmBuildStep::ST_DgmBuildStep()
    :m_has_type(false)
    {
    }
    ST_DgmBuildStep::ST_DgmBuildStep(const ST_DgmBuildStep::Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
    }
    bool ST_DgmBuildStep::has_type() const
    {    
    return m_has_type;
    }

    void ST_DgmBuildStep::set_type(const ST_DgmBuildStep::Type& _type)
    {    
    m_has_type = true;
    m_type = _type;
    }

    const ST_DgmBuildStep::Type& ST_DgmBuildStep::get_type() const
    {    
                return m_type;
                }

    std::string ST_DgmBuildStep::toString() const
    {    
    return ST_DgmBuildStep::TypeStrList[m_type];
    }

    void ST_DgmBuildStep::clear()
    {    
    m_has_type = false;
    }

    void ST_DgmBuildStep::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_type)
    {
    _outStream << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_DgmBuildStep& ST_DgmBuildStep::default_instance()
    {    
    if (!ST_DgmBuildStep::default_instance_)
    {
        ST_DgmBuildStep::default_instance_ = new ST_DgmBuildStep();
    }
    return *ST_DgmBuildStep::default_instance_;
    }

    const std::string ST_DgmBuildStep::TypeStrList[] =
    {
        "sp",
        "bg"
    };
ST_DgmBuildStep* ST_DgmBuildStep::default_instance_ = NULL;

    // ST_AnimationBuildType
    ST_AnimationBuildType::ST_AnimationBuildType()
    :m_has_type(false)
    {
    }
    ST_AnimationBuildType::ST_AnimationBuildType(const ST_AnimationBuildType::Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
    }
    bool ST_AnimationBuildType::has_type() const
    {    
    return m_has_type;
    }

    void ST_AnimationBuildType::set_type(const ST_AnimationBuildType::Type& _type)
    {    
    m_has_type = true;
    m_type = _type;
    }

    const ST_AnimationBuildType::Type& ST_AnimationBuildType::get_type() const
    {    
                return m_type;
                }

    std::string ST_AnimationBuildType::toString() const
    {    
    return ST_AnimationBuildType::TypeStrList[m_type];
    }

    void ST_AnimationBuildType::clear()
    {    
    m_has_type = false;
    }

    void ST_AnimationBuildType::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_type)
    {
    _outStream << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_AnimationBuildType& ST_AnimationBuildType::default_instance()
    {    
    if (!ST_AnimationBuildType::default_instance_)
    {
        ST_AnimationBuildType::default_instance_ = new ST_AnimationBuildType();
    }
    return *ST_AnimationBuildType::default_instance_;
    }

    const std::string ST_AnimationBuildType::TypeStrList[] =
    {
        "allAtOnce"
    };
ST_AnimationBuildType* ST_AnimationBuildType::default_instance_ = NULL;

    // ST_AnimationDgmOnlyBuildType
    ST_AnimationDgmOnlyBuildType::ST_AnimationDgmOnlyBuildType()
    :m_has_type(false)
    {
    }
    ST_AnimationDgmOnlyBuildType::ST_AnimationDgmOnlyBuildType(const ST_AnimationDgmOnlyBuildType::Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
    }
    bool ST_AnimationDgmOnlyBuildType::has_type() const
    {    
    return m_has_type;
    }

    void ST_AnimationDgmOnlyBuildType::set_type(const ST_AnimationDgmOnlyBuildType::Type& _type)
    {    
    m_has_type = true;
    m_type = _type;
    }

    const ST_AnimationDgmOnlyBuildType::Type& ST_AnimationDgmOnlyBuildType::get_type() const
    {    
                return m_type;
                }

    std::string ST_AnimationDgmOnlyBuildType::toString() const
    {    
    return ST_AnimationDgmOnlyBuildType::TypeStrList[m_type];
    }

    void ST_AnimationDgmOnlyBuildType::clear()
    {    
    m_has_type = false;
    }

    void ST_AnimationDgmOnlyBuildType::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_type)
    {
    _outStream << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_AnimationDgmOnlyBuildType& ST_AnimationDgmOnlyBuildType::default_instance()
    {    
    if (!ST_AnimationDgmOnlyBuildType::default_instance_)
    {
        ST_AnimationDgmOnlyBuildType::default_instance_ = new ST_AnimationDgmOnlyBuildType();
    }
    return *ST_AnimationDgmOnlyBuildType::default_instance_;
    }

    const std::string ST_AnimationDgmOnlyBuildType::TypeStrList[] =
    {
        "one",
        "lvlOne",
        "lvlAtOnce"
    };
ST_AnimationDgmOnlyBuildType* ST_AnimationDgmOnlyBuildType::default_instance_ = NULL;

    // ST_AnimationDgmBuildType
    bool ST_AnimationDgmBuildType::has_ST_AnimationBuildType() const
    {    
    return m_has_ST_AnimationBuildType;
    }

    ST_AnimationBuildType* ST_AnimationDgmBuildType::mutable_ST_AnimationBuildType()
    {    
    clear_ST_AnimationDgmOnlyBuildType();
    m_has_ST_AnimationBuildType = true;
    if (!m_ST_AnimationBuildType)
    {
        m_ST_AnimationBuildType = new ST_AnimationBuildType();
    }
    return m_ST_AnimationBuildType;
    }

    const ST_AnimationBuildType& ST_AnimationDgmBuildType::get_ST_AnimationBuildType() const
    {    
    if (m_ST_AnimationBuildType)
    {
        return *m_ST_AnimationBuildType;
    }
    return ST_AnimationBuildType::default_instance();
    }

    void ST_AnimationDgmBuildType::clear_ST_AnimationBuildType()
    {    
    m_has_ST_AnimationBuildType = false;
    if (m_ST_AnimationBuildType)
    {
        delete m_ST_AnimationBuildType;
        m_ST_AnimationBuildType = NULL;
    }
    }

    bool ST_AnimationDgmBuildType::has_ST_AnimationDgmOnlyBuildType() const
    {    
    return m_has_ST_AnimationDgmOnlyBuildType;
    }

    ST_AnimationDgmOnlyBuildType* ST_AnimationDgmBuildType::mutable_ST_AnimationDgmOnlyBuildType()
    {    
    clear_ST_AnimationBuildType();
    m_has_ST_AnimationDgmOnlyBuildType = true;
    if (!m_ST_AnimationDgmOnlyBuildType)
    {
        m_ST_AnimationDgmOnlyBuildType = new ST_AnimationDgmOnlyBuildType();
    }
    return m_ST_AnimationDgmOnlyBuildType;
    }

    const ST_AnimationDgmOnlyBuildType& ST_AnimationDgmBuildType::get_ST_AnimationDgmOnlyBuildType() const
    {    
    if (m_ST_AnimationDgmOnlyBuildType)
    {
        return *m_ST_AnimationDgmOnlyBuildType;
    }
    return ST_AnimationDgmOnlyBuildType::default_instance();
    }

    void ST_AnimationDgmBuildType::clear_ST_AnimationDgmOnlyBuildType()
    {    
    m_has_ST_AnimationDgmOnlyBuildType = false;
    if (m_ST_AnimationDgmOnlyBuildType)
    {
        delete m_ST_AnimationDgmOnlyBuildType;
        m_ST_AnimationDgmOnlyBuildType = NULL;
    }
    }

    std::string ST_AnimationDgmBuildType::toString() const
    {    
    if (m_has_ST_AnimationBuildType)
    {
        return m_ST_AnimationBuildType->toString();
    }
    
    if (m_has_ST_AnimationDgmOnlyBuildType)
    {
        return m_ST_AnimationDgmOnlyBuildType->toString();
    }
    
    return string();
    }

    void ST_AnimationDgmBuildType::clear()
    {    clear_ST_AnimationBuildType();
    clear_ST_AnimationDgmOnlyBuildType();    }

    void ST_AnimationDgmBuildType::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_ST_AnimationBuildType)
    {
        m_ST_AnimationBuildType->toXmlAttr(_attrName, _outStream);
        return;
    }
    
    if (m_has_ST_AnimationDgmOnlyBuildType)
    {
        m_ST_AnimationDgmOnlyBuildType->toXmlAttr(_attrName, _outStream);
        return;
    }
    }

    const ST_AnimationDgmBuildType& ST_AnimationDgmBuildType::default_instance()
    {    
    if (!ST_AnimationDgmBuildType::default_instance_)
    {
        ST_AnimationDgmBuildType::default_instance_ = new ST_AnimationDgmBuildType();
    }
    return *ST_AnimationDgmBuildType::default_instance_;
    }

ST_AnimationDgmBuildType* ST_AnimationDgmBuildType::default_instance_ = NULL;

    // ST_AnimationChartOnlyBuildType
    ST_AnimationChartOnlyBuildType::ST_AnimationChartOnlyBuildType()
    :m_has_type(false)
    {
    }
    ST_AnimationChartOnlyBuildType::ST_AnimationChartOnlyBuildType(const ST_AnimationChartOnlyBuildType::Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
    }
    bool ST_AnimationChartOnlyBuildType::has_type() const
    {    
    return m_has_type;
    }

    void ST_AnimationChartOnlyBuildType::set_type(const ST_AnimationChartOnlyBuildType::Type& _type)
    {    
    m_has_type = true;
    m_type = _type;
    }

    const ST_AnimationChartOnlyBuildType::Type& ST_AnimationChartOnlyBuildType::get_type() const
    {    
                return m_type;
                }

    std::string ST_AnimationChartOnlyBuildType::toString() const
    {    
    return ST_AnimationChartOnlyBuildType::TypeStrList[m_type];
    }

    void ST_AnimationChartOnlyBuildType::clear()
    {    
    m_has_type = false;
    }

    void ST_AnimationChartOnlyBuildType::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_type)
    {
    _outStream << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_AnimationChartOnlyBuildType& ST_AnimationChartOnlyBuildType::default_instance()
    {    
    if (!ST_AnimationChartOnlyBuildType::default_instance_)
    {
        ST_AnimationChartOnlyBuildType::default_instance_ = new ST_AnimationChartOnlyBuildType();
    }
    return *ST_AnimationChartOnlyBuildType::default_instance_;
    }

    const std::string ST_AnimationChartOnlyBuildType::TypeStrList[] =
    {
        "series",
        "category",
        "seriesEl",
        "categoryEl"
    };
ST_AnimationChartOnlyBuildType* ST_AnimationChartOnlyBuildType::default_instance_ = NULL;

    // ST_AnimationChartBuildType
    bool ST_AnimationChartBuildType::has_ST_AnimationBuildType() const
    {    
    return m_has_ST_AnimationBuildType;
    }

    ST_AnimationBuildType* ST_AnimationChartBuildType::mutable_ST_AnimationBuildType()
    {    
    clear_ST_AnimationChartOnlyBuildType();
    m_has_ST_AnimationBuildType = true;
    if (!m_ST_AnimationBuildType)
    {
        m_ST_AnimationBuildType = new ST_AnimationBuildType();
    }
    return m_ST_AnimationBuildType;
    }

    const ST_AnimationBuildType& ST_AnimationChartBuildType::get_ST_AnimationBuildType() const
    {    
    if (m_ST_AnimationBuildType)
    {
        return *m_ST_AnimationBuildType;
    }
    return ST_AnimationBuildType::default_instance();
    }

    void ST_AnimationChartBuildType::clear_ST_AnimationBuildType()
    {    
    m_has_ST_AnimationBuildType = false;
    if (m_ST_AnimationBuildType)
    {
        delete m_ST_AnimationBuildType;
        m_ST_AnimationBuildType = NULL;
    }
    }

    bool ST_AnimationChartBuildType::has_ST_AnimationChartOnlyBuildType() const
    {    
    return m_has_ST_AnimationChartOnlyBuildType;
    }

    ST_AnimationChartOnlyBuildType* ST_AnimationChartBuildType::mutable_ST_AnimationChartOnlyBuildType()
    {    
    clear_ST_AnimationBuildType();
    m_has_ST_AnimationChartOnlyBuildType = true;
    if (!m_ST_AnimationChartOnlyBuildType)
    {
        m_ST_AnimationChartOnlyBuildType = new ST_AnimationChartOnlyBuildType();
    }
    return m_ST_AnimationChartOnlyBuildType;
    }

    const ST_AnimationChartOnlyBuildType& ST_AnimationChartBuildType::get_ST_AnimationChartOnlyBuildType() const
    {    
    if (m_ST_AnimationChartOnlyBuildType)
    {
        return *m_ST_AnimationChartOnlyBuildType;
    }
    return ST_AnimationChartOnlyBuildType::default_instance();
    }

    void ST_AnimationChartBuildType::clear_ST_AnimationChartOnlyBuildType()
    {    
    m_has_ST_AnimationChartOnlyBuildType = false;
    if (m_ST_AnimationChartOnlyBuildType)
    {
        delete m_ST_AnimationChartOnlyBuildType;
        m_ST_AnimationChartOnlyBuildType = NULL;
    }
    }

    std::string ST_AnimationChartBuildType::toString() const
    {    
    if (m_has_ST_AnimationBuildType)
    {
        return m_ST_AnimationBuildType->toString();
    }
    
    if (m_has_ST_AnimationChartOnlyBuildType)
    {
        return m_ST_AnimationChartOnlyBuildType->toString();
    }
    
    return string();
    }

    void ST_AnimationChartBuildType::clear()
    {    clear_ST_AnimationBuildType();
    clear_ST_AnimationChartOnlyBuildType();    }

    void ST_AnimationChartBuildType::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_ST_AnimationBuildType)
    {
        m_ST_AnimationBuildType->toXmlAttr(_attrName, _outStream);
        return;
    }
    
    if (m_has_ST_AnimationChartOnlyBuildType)
    {
        m_ST_AnimationChartOnlyBuildType->toXmlAttr(_attrName, _outStream);
        return;
    }
    }

    const ST_AnimationChartBuildType& ST_AnimationChartBuildType::default_instance()
    {    
    if (!ST_AnimationChartBuildType::default_instance_)
    {
        ST_AnimationChartBuildType::default_instance_ = new ST_AnimationChartBuildType();
    }
    return *ST_AnimationChartBuildType::default_instance_;
    }

ST_AnimationChartBuildType* ST_AnimationChartBuildType::default_instance_ = NULL;

    // ST_PresetCameraType
    ST_PresetCameraType::ST_PresetCameraType()
    :m_has_type(false)
    {
    }
    ST_PresetCameraType::ST_PresetCameraType(const ST_PresetCameraType::Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
    }
    bool ST_PresetCameraType::has_type() const
    {    
    return m_has_type;
    }

    void ST_PresetCameraType::set_type(const ST_PresetCameraType::Type& _type)
    {    
    m_has_type = true;
    m_type = _type;
    }

    const ST_PresetCameraType::Type& ST_PresetCameraType::get_type() const
    {    
                return m_type;
                }

    std::string ST_PresetCameraType::toString() const
    {    
    return ST_PresetCameraType::TypeStrList[m_type];
    }

    void ST_PresetCameraType::clear()
    {    
    m_has_type = false;
    }

    void ST_PresetCameraType::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_type)
    {
    _outStream << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_PresetCameraType& ST_PresetCameraType::default_instance()
    {    
    if (!ST_PresetCameraType::default_instance_)
    {
        ST_PresetCameraType::default_instance_ = new ST_PresetCameraType();
    }
    return *ST_PresetCameraType::default_instance_;
    }

    const std::string ST_PresetCameraType::TypeStrList[] =
    {
        "legacyObliqueTopLeft",
        "legacyObliqueTop",
        "legacyObliqueTopRight",
        "legacyObliqueLeft",
        "legacyObliqueFront",
        "legacyObliqueRight",
        "legacyObliqueBottomLeft",
        "legacyObliqueBottom",
        "legacyObliqueBottomRight",
        "legacyPerspectiveTopLeft",
        "legacyPerspectiveTop",
        "legacyPerspectiveTopRight",
        "legacyPerspectiveLeft",
        "legacyPerspectiveFront",
        "legacyPerspectiveRight",
        "legacyPerspectiveBottomLeft",
        "legacyPerspectiveBottom",
        "legacyPerspectiveBottomRight",
        "orthographicFront",
        "isometricTopUp",
        "isometricTopDown",
        "isometricBottomUp",
        "isometricBottomDown",
        "isometricLeftUp",
        "isometricLeftDown",
        "isometricRightUp",
        "isometricRightDown",
        "isometricOffAxis1Left",
        "isometricOffAxis1Right",
        "isometricOffAxis1Top",
        "isometricOffAxis2Left",
        "isometricOffAxis2Right",
        "isometricOffAxis2Top",
        "isometricOffAxis3Left",
        "isometricOffAxis3Right",
        "isometricOffAxis3Bottom",
        "isometricOffAxis4Left",
        "isometricOffAxis4Right",
        "isometricOffAxis4Bottom",
        "obliqueTopLeft",
        "obliqueTop",
        "obliqueTopRight",
        "obliqueLeft",
        "obliqueRight",
        "obliqueBottomLeft",
        "obliqueBottom",
        "obliqueBottomRight",
        "perspectiveFront",
        "perspectiveLeft",
        "perspectiveRight",
        "perspectiveAbove",
        "perspectiveBelow",
        "perspectiveAboveLeftFacing",
        "perspectiveAboveRightFacing",
        "perspectiveContrastingLeftFacing",
        "perspectiveContrastingRightFacing",
        "perspectiveHeroicLeftFacing",
        "perspectiveHeroicRightFacing",
        "perspectiveHeroicExtremeLeftFacing",
        "perspectiveHeroicExtremeRightFacing",
        "perspectiveRelaxed",
        "perspectiveRelaxedModerately"
    };
ST_PresetCameraType* ST_PresetCameraType::default_instance_ = NULL;

    // ST_FOVAngle
    ST_FOVAngle::ST_FOVAngle()

    {
    }
    ST_FOVAngle::ST_FOVAngle(const ST_Angle& _ST_Angle)

    {
    }
    const ST_FOVAngle& ST_FOVAngle::default_instance()
    {    
    if (!ST_FOVAngle::default_instance_)
    {
        ST_FOVAngle::default_instance_ = new ST_FOVAngle();
    }
    return *ST_FOVAngle::default_instance_;
    }

ST_FOVAngle* ST_FOVAngle::default_instance_ = NULL;

    // ST_LightRigDirection
    ST_LightRigDirection::ST_LightRigDirection()
    :m_has_type(false)
    {
    }
    ST_LightRigDirection::ST_LightRigDirection(const ST_LightRigDirection::Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
    }
    bool ST_LightRigDirection::has_type() const
    {    
    return m_has_type;
    }

    void ST_LightRigDirection::set_type(const ST_LightRigDirection::Type& _type)
    {    
    m_has_type = true;
    m_type = _type;
    }

    const ST_LightRigDirection::Type& ST_LightRigDirection::get_type() const
    {    
                return m_type;
                }

    std::string ST_LightRigDirection::toString() const
    {    
    return ST_LightRigDirection::TypeStrList[m_type];
    }

    void ST_LightRigDirection::clear()
    {    
    m_has_type = false;
    }

    void ST_LightRigDirection::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_type)
    {
    _outStream << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_LightRigDirection& ST_LightRigDirection::default_instance()
    {    
    if (!ST_LightRigDirection::default_instance_)
    {
        ST_LightRigDirection::default_instance_ = new ST_LightRigDirection();
    }
    return *ST_LightRigDirection::default_instance_;
    }

    const std::string ST_LightRigDirection::TypeStrList[] =
    {
        "tl",
        "t",
        "tr",
        "l",
        "r",
        "bl",
        "b",
        "br"
    };
ST_LightRigDirection* ST_LightRigDirection::default_instance_ = NULL;

    // ST_LightRigType
    ST_LightRigType::ST_LightRigType()
    :m_has_type(false)
    {
    }
    ST_LightRigType::ST_LightRigType(const ST_LightRigType::Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
    }
    bool ST_LightRigType::has_type() const
    {    
    return m_has_type;
    }

    void ST_LightRigType::set_type(const ST_LightRigType::Type& _type)
    {    
    m_has_type = true;
    m_type = _type;
    }

    const ST_LightRigType::Type& ST_LightRigType::get_type() const
    {    
                return m_type;
                }

    std::string ST_LightRigType::toString() const
    {    
    return ST_LightRigType::TypeStrList[m_type];
    }

    void ST_LightRigType::clear()
    {    
    m_has_type = false;
    }

    void ST_LightRigType::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_type)
    {
    _outStream << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_LightRigType& ST_LightRigType::default_instance()
    {    
    if (!ST_LightRigType::default_instance_)
    {
        ST_LightRigType::default_instance_ = new ST_LightRigType();
    }
    return *ST_LightRigType::default_instance_;
    }

    const std::string ST_LightRigType::TypeStrList[] =
    {
        "legacyFlat1",
        "legacyFlat2",
        "legacyFlat3",
        "legacyFlat4",
        "legacyNormal1",
        "legacyNormal2",
        "legacyNormal3",
        "legacyNormal4",
        "legacyHarsh1",
        "legacyHarsh2",
        "legacyHarsh3",
        "legacyHarsh4",
        "threePt",
        "balanced",
        "soft",
        "harsh",
        "flood",
        "contrasting",
        "morning",
        "sunrise",
        "sunset",
        "chilly",
        "freezing",
        "flat",
        "twoPt",
        "glow",
        "brightRoom"
    };
ST_LightRigType* ST_LightRigType::default_instance_ = NULL;

    // ST_BevelPresetType
    ST_BevelPresetType::ST_BevelPresetType()
    :m_has_type(false)
    {
    }
    ST_BevelPresetType::ST_BevelPresetType(const ST_BevelPresetType::Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
    }
    bool ST_BevelPresetType::has_type() const
    {    
    return m_has_type;
    }

    void ST_BevelPresetType::set_type(const ST_BevelPresetType::Type& _type)
    {    
    m_has_type = true;
    m_type = _type;
    }

    const ST_BevelPresetType::Type& ST_BevelPresetType::get_type() const
    {    
                return m_type;
                }

    std::string ST_BevelPresetType::toString() const
    {    
    return ST_BevelPresetType::TypeStrList[m_type];
    }

    void ST_BevelPresetType::clear()
    {    
    m_has_type = false;
    }

    void ST_BevelPresetType::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_type)
    {
    _outStream << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_BevelPresetType& ST_BevelPresetType::default_instance()
    {    
    if (!ST_BevelPresetType::default_instance_)
    {
        ST_BevelPresetType::default_instance_ = new ST_BevelPresetType();
    }
    return *ST_BevelPresetType::default_instance_;
    }

    const std::string ST_BevelPresetType::TypeStrList[] =
    {
        "relaxedInset",
        "circle",
        "slope",
        "cross",
        "angle",
        "softRound",
        "convex",
        "coolSlant",
        "divot",
        "riblet",
        "hardEdge",
        "artDeco"
    };
ST_BevelPresetType* ST_BevelPresetType::default_instance_ = NULL;

    // ST_PresetMaterialType
    ST_PresetMaterialType::ST_PresetMaterialType()
    :m_has_type(false)
    {
    }
    ST_PresetMaterialType::ST_PresetMaterialType(const ST_PresetMaterialType::Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
    }
    bool ST_PresetMaterialType::has_type() const
    {    
    return m_has_type;
    }

    void ST_PresetMaterialType::set_type(const ST_PresetMaterialType::Type& _type)
    {    
    m_has_type = true;
    m_type = _type;
    }

    const ST_PresetMaterialType::Type& ST_PresetMaterialType::get_type() const
    {    
                return m_type;
                }

    std::string ST_PresetMaterialType::toString() const
    {    
    return ST_PresetMaterialType::TypeStrList[m_type];
    }

    void ST_PresetMaterialType::clear()
    {    
    m_has_type = false;
    }

    void ST_PresetMaterialType::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_type)
    {
    _outStream << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_PresetMaterialType& ST_PresetMaterialType::default_instance()
    {    
    if (!ST_PresetMaterialType::default_instance_)
    {
        ST_PresetMaterialType::default_instance_ = new ST_PresetMaterialType();
    }
    return *ST_PresetMaterialType::default_instance_;
    }

    const std::string ST_PresetMaterialType::TypeStrList[] =
    {
        "legacyMatte",
        "legacyPlastic",
        "legacyMetal",
        "legacyWireframe",
        "matte",
        "plastic",
        "metal",
        "warmMatte",
        "translucentPowder",
        "powder",
        "dkEdge",
        "softEdge",
        "clear",
        "flat",
        "softmetal"
    };
ST_PresetMaterialType* ST_PresetMaterialType::default_instance_ = NULL;

    // ST_PresetShadowVal
    ST_PresetShadowVal::ST_PresetShadowVal()
    :m_has_type(false)
    {
    }
    ST_PresetShadowVal::ST_PresetShadowVal(const ST_PresetShadowVal::Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
    }
    bool ST_PresetShadowVal::has_type() const
    {    
    return m_has_type;
    }

    void ST_PresetShadowVal::set_type(const ST_PresetShadowVal::Type& _type)
    {    
    m_has_type = true;
    m_type = _type;
    }

    const ST_PresetShadowVal::Type& ST_PresetShadowVal::get_type() const
    {    
                return m_type;
                }

    std::string ST_PresetShadowVal::toString() const
    {    
    return ST_PresetShadowVal::TypeStrList[m_type];
    }

    void ST_PresetShadowVal::clear()
    {    
    m_has_type = false;
    }

    void ST_PresetShadowVal::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_type)
    {
    _outStream << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_PresetShadowVal& ST_PresetShadowVal::default_instance()
    {    
    if (!ST_PresetShadowVal::default_instance_)
    {
        ST_PresetShadowVal::default_instance_ = new ST_PresetShadowVal();
    }
    return *ST_PresetShadowVal::default_instance_;
    }

    const std::string ST_PresetShadowVal::TypeStrList[] =
    {
        "shdw1",
        "shdw2",
        "shdw3",
        "shdw4",
        "shdw5",
        "shdw6",
        "shdw7",
        "shdw8",
        "shdw9",
        "shdw10",
        "shdw11",
        "shdw12",
        "shdw13",
        "shdw14",
        "shdw15",
        "shdw16",
        "shdw17",
        "shdw18",
        "shdw19",
        "shdw20"
    };
ST_PresetShadowVal* ST_PresetShadowVal::default_instance_ = NULL;

    // ST_PathShadeType
    ST_PathShadeType::ST_PathShadeType()
    :m_has_type(false)
    {
    }
    ST_PathShadeType::ST_PathShadeType(const ST_PathShadeType::Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
    }
    bool ST_PathShadeType::has_type() const
    {    
    return m_has_type;
    }

    void ST_PathShadeType::set_type(const ST_PathShadeType::Type& _type)
    {    
    m_has_type = true;
    m_type = _type;
    }

    const ST_PathShadeType::Type& ST_PathShadeType::get_type() const
    {    
                return m_type;
                }

    std::string ST_PathShadeType::toString() const
    {    
    return ST_PathShadeType::TypeStrList[m_type];
    }

    void ST_PathShadeType::clear()
    {    
    m_has_type = false;
    }

    void ST_PathShadeType::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_type)
    {
    _outStream << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_PathShadeType& ST_PathShadeType::default_instance()
    {    
    if (!ST_PathShadeType::default_instance_)
    {
        ST_PathShadeType::default_instance_ = new ST_PathShadeType();
    }
    return *ST_PathShadeType::default_instance_;
    }

    const std::string ST_PathShadeType::TypeStrList[] =
    {
        "shape",
        "circle",
        "rect"
    };
ST_PathShadeType* ST_PathShadeType::default_instance_ = NULL;

    // ST_TileFlipMode
    ST_TileFlipMode::ST_TileFlipMode()
    :m_has_type(false)
    {
    }
    ST_TileFlipMode::ST_TileFlipMode(const ST_TileFlipMode::Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
    }
    bool ST_TileFlipMode::has_type() const
    {    
    return m_has_type;
    }

    void ST_TileFlipMode::set_type(const ST_TileFlipMode::Type& _type)
    {    
    m_has_type = true;
    m_type = _type;
    }

    const ST_TileFlipMode::Type& ST_TileFlipMode::get_type() const
    {    
                return m_type;
                }

    std::string ST_TileFlipMode::toString() const
    {    
    return ST_TileFlipMode::TypeStrList[m_type];
    }

    void ST_TileFlipMode::clear()
    {    
    m_has_type = false;
    }

    void ST_TileFlipMode::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_type)
    {
    _outStream << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_TileFlipMode& ST_TileFlipMode::default_instance()
    {    
    if (!ST_TileFlipMode::default_instance_)
    {
        ST_TileFlipMode::default_instance_ = new ST_TileFlipMode();
    }
    return *ST_TileFlipMode::default_instance_;
    }

    const std::string ST_TileFlipMode::TypeStrList[] =
    {
        "none",
        "x",
        "y",
        "xy"
    };
ST_TileFlipMode* ST_TileFlipMode::default_instance_ = NULL;

    // ST_BlipCompression
    ST_BlipCompression::ST_BlipCompression()
    :m_has_type(false)
    {
    }
    ST_BlipCompression::ST_BlipCompression(const ST_BlipCompression::Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
    }
    bool ST_BlipCompression::has_type() const
    {    
    return m_has_type;
    }

    void ST_BlipCompression::set_type(const ST_BlipCompression::Type& _type)
    {    
    m_has_type = true;
    m_type = _type;
    }

    const ST_BlipCompression::Type& ST_BlipCompression::get_type() const
    {    
                return m_type;
                }

    std::string ST_BlipCompression::toString() const
    {    
    return ST_BlipCompression::TypeStrList[m_type];
    }

    void ST_BlipCompression::clear()
    {    
    m_has_type = false;
    }

    void ST_BlipCompression::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_type)
    {
    _outStream << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_BlipCompression& ST_BlipCompression::default_instance()
    {    
    if (!ST_BlipCompression::default_instance_)
    {
        ST_BlipCompression::default_instance_ = new ST_BlipCompression();
    }
    return *ST_BlipCompression::default_instance_;
    }

    const std::string ST_BlipCompression::TypeStrList[] =
    {
        "email",
        "screen",
        "print",
        "hqprint",
        "none"
    };
ST_BlipCompression* ST_BlipCompression::default_instance_ = NULL;

    // ST_PresetPatternVal
    ST_PresetPatternVal::ST_PresetPatternVal()
    :m_has_type(false)
    {
    }
    ST_PresetPatternVal::ST_PresetPatternVal(const ST_PresetPatternVal::Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
    }
    bool ST_PresetPatternVal::has_type() const
    {    
    return m_has_type;
    }

    void ST_PresetPatternVal::set_type(const ST_PresetPatternVal::Type& _type)
    {    
    m_has_type = true;
    m_type = _type;
    }

    const ST_PresetPatternVal::Type& ST_PresetPatternVal::get_type() const
    {    
                return m_type;
                }

    std::string ST_PresetPatternVal::toString() const
    {    
    return ST_PresetPatternVal::TypeStrList[m_type];
    }

    void ST_PresetPatternVal::clear()
    {    
    m_has_type = false;
    }

    void ST_PresetPatternVal::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_type)
    {
    _outStream << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_PresetPatternVal& ST_PresetPatternVal::default_instance()
    {    
    if (!ST_PresetPatternVal::default_instance_)
    {
        ST_PresetPatternVal::default_instance_ = new ST_PresetPatternVal();
    }
    return *ST_PresetPatternVal::default_instance_;
    }

    const std::string ST_PresetPatternVal::TypeStrList[] =
    {
        "pct5",
        "pct10",
        "pct20",
        "pct25",
        "pct30",
        "pct40",
        "pct50",
        "pct60",
        "pct70",
        "pct75",
        "pct80",
        "pct90",
        "horz",
        "vert",
        "ltHorz",
        "ltVert",
        "dkHorz",
        "dkVert",
        "narHorz",
        "narVert",
        "dashHorz",
        "dashVert",
        "cross",
        "dnDiag",
        "upDiag",
        "ltDnDiag",
        "ltUpDiag",
        "dkDnDiag",
        "dkUpDiag",
        "wdDnDiag",
        "wdUpDiag",
        "dashDnDiag",
        "dashUpDiag",
        "diagCross",
        "smCheck",
        "lgCheck",
        "smGrid",
        "lgGrid",
        "dotGrid",
        "smConfetti",
        "lgConfetti",
        "horzBrick",
        "diagBrick",
        "solidDmnd",
        "openDmnd",
        "dotDmnd",
        "plaid",
        "sphere",
        "weave",
        "divot",
        "shingle",
        "wave",
        "trellis",
        "zigZag"
    };
ST_PresetPatternVal* ST_PresetPatternVal::default_instance_ = NULL;

    // ST_BlendMode
    ST_BlendMode::ST_BlendMode()
    :m_has_type(false)
    {
    }
    ST_BlendMode::ST_BlendMode(const ST_BlendMode::Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
    }
    bool ST_BlendMode::has_type() const
    {    
    return m_has_type;
    }

    void ST_BlendMode::set_type(const ST_BlendMode::Type& _type)
    {    
    m_has_type = true;
    m_type = _type;
    }

    const ST_BlendMode::Type& ST_BlendMode::get_type() const
    {    
                return m_type;
                }

    std::string ST_BlendMode::toString() const
    {    
    return ST_BlendMode::TypeStrList[m_type];
    }

    void ST_BlendMode::clear()
    {    
    m_has_type = false;
    }

    void ST_BlendMode::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_type)
    {
    _outStream << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_BlendMode& ST_BlendMode::default_instance()
    {    
    if (!ST_BlendMode::default_instance_)
    {
        ST_BlendMode::default_instance_ = new ST_BlendMode();
    }
    return *ST_BlendMode::default_instance_;
    }

    const std::string ST_BlendMode::TypeStrList[] =
    {
        "over",
        "mult",
        "screen",
        "darken",
        "lighten"
    };
ST_BlendMode* ST_BlendMode::default_instance_ = NULL;

    // ST_EffectContainerType
    ST_EffectContainerType::ST_EffectContainerType()
    :m_has_type(false)
    {
    }
    ST_EffectContainerType::ST_EffectContainerType(const ST_EffectContainerType::Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
    }
    bool ST_EffectContainerType::has_type() const
    {    
    return m_has_type;
    }

    void ST_EffectContainerType::set_type(const ST_EffectContainerType::Type& _type)
    {    
    m_has_type = true;
    m_type = _type;
    }

    const ST_EffectContainerType::Type& ST_EffectContainerType::get_type() const
    {    
                return m_type;
                }

    std::string ST_EffectContainerType::toString() const
    {    
    return ST_EffectContainerType::TypeStrList[m_type];
    }

    void ST_EffectContainerType::clear()
    {    
    m_has_type = false;
    }

    void ST_EffectContainerType::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_type)
    {
    _outStream << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_EffectContainerType& ST_EffectContainerType::default_instance()
    {    
    if (!ST_EffectContainerType::default_instance_)
    {
        ST_EffectContainerType::default_instance_ = new ST_EffectContainerType();
    }
    return *ST_EffectContainerType::default_instance_;
    }

    const std::string ST_EffectContainerType::TypeStrList[] =
    {
        "sib",
        "tree"
    };
ST_EffectContainerType* ST_EffectContainerType::default_instance_ = NULL;

    // ST_ShapeType
    ST_ShapeType::ST_ShapeType()
    :m_has_type(false)
    {
    }
    ST_ShapeType::ST_ShapeType(const ST_ShapeType::Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
    }
    bool ST_ShapeType::has_type() const
    {    
    return m_has_type;
    }

    void ST_ShapeType::set_type(const ST_ShapeType::Type& _type)
    {    
    m_has_type = true;
    m_type = _type;
    }

    const ST_ShapeType::Type& ST_ShapeType::get_type() const
    {    
                return m_type;
                }

    std::string ST_ShapeType::toString() const
    {    
    return ST_ShapeType::TypeStrList[m_type];
    }

    void ST_ShapeType::clear()
    {    
    m_has_type = false;
    }

    void ST_ShapeType::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_type)
    {
    _outStream << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_ShapeType& ST_ShapeType::default_instance()
    {    
    if (!ST_ShapeType::default_instance_)
    {
        ST_ShapeType::default_instance_ = new ST_ShapeType();
    }
    return *ST_ShapeType::default_instance_;
    }

    const std::string ST_ShapeType::TypeStrList[] =
    {
        "line",
        "lineInv",
        "triangle",
        "rtTriangle",
        "rect",
        "diamond",
        "parallelogram",
        "trapezoid",
        "nonIsoscelesTrapezoid",
        "pentagon",
        "hexagon",
        "heptagon",
        "octagon",
        "decagon",
        "dodecagon",
        "star4",
        "star5",
        "star6",
        "star7",
        "star8",
        "star10",
        "star12",
        "star16",
        "star24",
        "star32",
        "roundRect",
        "round1Rect",
        "round2SameRect",
        "round2DiagRect",
        "snipRoundRect",
        "snip1Rect",
        "snip2SameRect",
        "snip2DiagRect",
        "plaque",
        "ellipse",
        "teardrop",
        "homePlate",
        "chevron",
        "pieWedge",
        "pie",
        "blockArc",
        "donut",
        "noSmoking",
        "rightArrow",
        "leftArrow",
        "upArrow",
        "downArrow",
        "stripedRightArrow",
        "notchedRightArrow",
        "bentUpArrow",
        "leftRightArrow",
        "upDownArrow",
        "leftUpArrow",
        "leftRightUpArrow",
        "quadArrow",
        "leftArrowCallout",
        "rightArrowCallout",
        "upArrowCallout",
        "downArrowCallout",
        "leftRightArrowCallout",
        "upDownArrowCallout",
        "quadArrowCallout",
        "bentArrow",
        "uturnArrow",
        "circularArrow",
        "leftCircularArrow",
        "leftRightCircularArrow",
        "curvedRightArrow",
        "curvedLeftArrow",
        "curvedUpArrow",
        "curvedDownArrow",
        "swooshArrow",
        "cube",
        "can",
        "lightningBolt",
        "heart",
        "sun",
        "moon",
        "smileyFace",
        "irregularSeal1",
        "irregularSeal2",
        "foldedCorner",
        "bevel",
        "frame",
        "halfFrame",
        "corner",
        "diagStripe",
        "chord",
        "arc",
        "leftBracket",
        "rightBracket",
        "leftBrace",
        "rightBrace",
        "bracketPair",
        "bracePair",
        "straightConnector1",
        "bentConnector2",
        "bentConnector3",
        "bentConnector4",
        "bentConnector5",
        "curvedConnector2",
        "curvedConnector3",
        "curvedConnector4",
        "curvedConnector5",
        "callout1",
        "callout2",
        "callout3",
        "accentCallout1",
        "accentCallout2",
        "accentCallout3",
        "borderCallout1",
        "borderCallout2",
        "borderCallout3",
        "accentBorderCallout1",
        "accentBorderCallout2",
        "accentBorderCallout3",
        "wedgeRectCallout",
        "wedgeRoundRectCallout",
        "wedgeEllipseCallout",
        "cloudCallout",
        "cloud",
        "ribbon",
        "ribbon2",
        "ellipseRibbon",
        "ellipseRibbon2",
        "leftRightRibbon",
        "verticalScroll",
        "horizontalScroll",
        "wave",
        "doubleWave",
        "plus",
        "flowChartProcess",
        "flowChartDecision",
        "flowChartInputOutput",
        "flowChartPredefinedProcess",
        "flowChartInternalStorage",
        "flowChartDocument",
        "flowChartMultidocument",
        "flowChartTerminator",
        "flowChartPreparation",
        "flowChartManualInput",
        "flowChartManualOperation",
        "flowChartConnector",
        "flowChartPunchedCard",
        "flowChartPunchedTape",
        "flowChartSummingJunction",
        "flowChartOr",
        "flowChartCollate",
        "flowChartSort",
        "flowChartExtract",
        "flowChartMerge",
        "flowChartOfflineStorage",
        "flowChartOnlineStorage",
        "flowChartMagneticTape",
        "flowChartMagneticDisk",
        "flowChartMagneticDrum",
        "flowChartDisplay",
        "flowChartDelay",
        "flowChartAlternateProcess",
        "flowChartOffpageConnector",
        "actionButtonBlank",
        "actionButtonHome",
        "actionButtonHelp",
        "actionButtonInformation",
        "actionButtonForwardNext",
        "actionButtonBackPrevious",
        "actionButtonEnd",
        "actionButtonBeginning",
        "actionButtonReturn",
        "actionButtonDocument",
        "actionButtonSound",
        "actionButtonMovie",
        "gear6",
        "gear9",
        "funnel",
        "mathPlus",
        "mathMinus",
        "mathMultiply",
        "mathDivide",
        "mathEqual",
        "mathNotEqual",
        "cornerTabs",
        "squareTabs",
        "plaqueTabs",
        "chartX",
        "chartStar",
        "chartPlus"
    };
ST_ShapeType* ST_ShapeType::default_instance_ = NULL;

    // ST_TextShapeType
    ST_TextShapeType::ST_TextShapeType()
    :m_has_type(false)
    {
    }
    ST_TextShapeType::ST_TextShapeType(const ST_TextShapeType::Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
    }
    bool ST_TextShapeType::has_type() const
    {    
    return m_has_type;
    }

    void ST_TextShapeType::set_type(const ST_TextShapeType::Type& _type)
    {    
    m_has_type = true;
    m_type = _type;
    }

    const ST_TextShapeType::Type& ST_TextShapeType::get_type() const
    {    
                return m_type;
                }

    std::string ST_TextShapeType::toString() const
    {    
    return ST_TextShapeType::TypeStrList[m_type];
    }

    void ST_TextShapeType::clear()
    {    
    m_has_type = false;
    }

    void ST_TextShapeType::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_type)
    {
    _outStream << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_TextShapeType& ST_TextShapeType::default_instance()
    {    
    if (!ST_TextShapeType::default_instance_)
    {
        ST_TextShapeType::default_instance_ = new ST_TextShapeType();
    }
    return *ST_TextShapeType::default_instance_;
    }

    const std::string ST_TextShapeType::TypeStrList[] =
    {
        "textNoShape",
        "textPlain",
        "textStop",
        "textTriangle",
        "textTriangleInverted",
        "textChevron",
        "textChevronInverted",
        "textRingInside",
        "textRingOutside",
        "textArchUp",
        "textArchDown",
        "textCircle",
        "textButton",
        "textArchUpPour",
        "textArchDownPour",
        "textCirclePour",
        "textButtonPour",
        "textCurveUp",
        "textCurveDown",
        "textCanUp",
        "textCanDown",
        "textWave1",
        "textWave2",
        "textDoubleWave1",
        "textWave4",
        "textInflate",
        "textDeflate",
        "textInflateBottom",
        "textDeflateBottom",
        "textInflateTop",
        "textDeflateTop",
        "textDeflateInflate",
        "textDeflateInflateDeflate",
        "textFadeRight",
        "textFadeLeft",
        "textFadeUp",
        "textFadeDown",
        "textSlantUp",
        "textSlantDown",
        "textCascadeUp",
        "textCascadeDown"
    };
ST_TextShapeType* ST_TextShapeType::default_instance_ = NULL;

    // ST_GeomGuideName
    ST_GeomGuideName::ST_GeomGuideName()
    :m_has_token(false),
    m_token("")
    {
    }
    ST_GeomGuideName::ST_GeomGuideName(const XSD::token_& _token)
    :m_has_token(true)
    {
    
    set_token(m_token);
    }
    bool ST_GeomGuideName::has_token() const
    {    
    return m_has_token;
    }

    void ST_GeomGuideName::set_token(const XSD::token_& _token)
    {    
    m_has_token = true;
    m_token = _token;
    }

    const XSD::token_& ST_GeomGuideName::get_token() const
    {    
    return m_token;
    }

    void ST_GeomGuideName::clear()
    {    
    m_has_token = false;
    m_token.clear();;
    }

    void ST_GeomGuideName::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_token)
    {
        _outStream << " " << _attrName << "=\"" << m_token << "\"";;
    }
    }

    const ST_GeomGuideName& ST_GeomGuideName::default_instance()
    {    
    if (!ST_GeomGuideName::default_instance_)
    {
        ST_GeomGuideName::default_instance_ = new ST_GeomGuideName();
    }
    return *ST_GeomGuideName::default_instance_;
    }

    std::string ST_GeomGuideName::toString() const
    {    
    std::stringstream strStream;
    strStream << get_token();
    return strStream.str();
    }

ST_GeomGuideName* ST_GeomGuideName::default_instance_ = NULL;

    // ST_GeomGuideFormula
    ST_GeomGuideFormula::ST_GeomGuideFormula()
    :m_has_string(false),
    m_string("")
    {
    }
    ST_GeomGuideFormula::ST_GeomGuideFormula(const XSD::string_& _string)
    :m_has_string(true)
    {
    
    set_string(m_string);
    }
    bool ST_GeomGuideFormula::has_string() const
    {    
    return m_has_string;
    }

    void ST_GeomGuideFormula::set_string(const XSD::string_& _string)
    {    
    m_has_string = true;
    m_string = _string;
    }

    const XSD::string_& ST_GeomGuideFormula::get_string() const
    {    
    return m_string;
    }

    void ST_GeomGuideFormula::clear()
    {    
    m_has_string = false;
    m_string.clear();;
    }

    void ST_GeomGuideFormula::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_string)
    {
        _outStream << " " << _attrName << "=\"" << m_string << "\"";;
    }
    }

    const ST_GeomGuideFormula& ST_GeomGuideFormula::default_instance()
    {    
    if (!ST_GeomGuideFormula::default_instance_)
    {
        ST_GeomGuideFormula::default_instance_ = new ST_GeomGuideFormula();
    }
    return *ST_GeomGuideFormula::default_instance_;
    }

    std::string ST_GeomGuideFormula::toString() const
    {    
    std::stringstream strStream;
    strStream << get_string();
    return strStream.str();
    }

ST_GeomGuideFormula* ST_GeomGuideFormula::default_instance_ = NULL;

    // ST_AdjCoordinate
    bool ST_AdjCoordinate::has_ST_Coordinate() const
    {    
    return m_has_ST_Coordinate;
    }

    ST_Coordinate* ST_AdjCoordinate::mutable_ST_Coordinate()
    {    
    clear_ST_GeomGuideName();
    m_has_ST_Coordinate = true;
    if (!m_ST_Coordinate)
    {
        m_ST_Coordinate = new ST_Coordinate();
    }
    return m_ST_Coordinate;
    }

    const ST_Coordinate& ST_AdjCoordinate::get_ST_Coordinate() const
    {    
    if (m_ST_Coordinate)
    {
        return *m_ST_Coordinate;
    }
    return ST_Coordinate::default_instance();
    }

    void ST_AdjCoordinate::clear_ST_Coordinate()
    {    
    m_has_ST_Coordinate = false;
    if (m_ST_Coordinate)
    {
        delete m_ST_Coordinate;
        m_ST_Coordinate = NULL;
    }
    }

    bool ST_AdjCoordinate::has_ST_GeomGuideName() const
    {    
    return m_has_ST_GeomGuideName;
    }

    ST_GeomGuideName* ST_AdjCoordinate::mutable_ST_GeomGuideName()
    {    
    clear_ST_Coordinate();
    m_has_ST_GeomGuideName = true;
    if (!m_ST_GeomGuideName)
    {
        m_ST_GeomGuideName = new ST_GeomGuideName();
    }
    return m_ST_GeomGuideName;
    }

    const ST_GeomGuideName& ST_AdjCoordinate::get_ST_GeomGuideName() const
    {    
    if (m_ST_GeomGuideName)
    {
        return *m_ST_GeomGuideName;
    }
    return ST_GeomGuideName::default_instance();
    }

    void ST_AdjCoordinate::clear_ST_GeomGuideName()
    {    
    m_has_ST_GeomGuideName = false;
    if (m_ST_GeomGuideName)
    {
        delete m_ST_GeomGuideName;
        m_ST_GeomGuideName = NULL;
    }
    }

    std::string ST_AdjCoordinate::toString() const
    {    
    if (m_has_ST_Coordinate)
    {
        return m_ST_Coordinate->toString();
    }
    
    if (m_has_ST_GeomGuideName)
    {
        return m_ST_GeomGuideName->toString();
    }
    
    return string();
    }

    void ST_AdjCoordinate::clear()
    {    clear_ST_Coordinate();
    clear_ST_GeomGuideName();    }

    void ST_AdjCoordinate::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_ST_Coordinate)
    {
        m_ST_Coordinate->toXmlAttr(_attrName, _outStream);
        return;
    }
    
    if (m_has_ST_GeomGuideName)
    {
        m_ST_GeomGuideName->toXmlAttr(_attrName, _outStream);
        return;
    }
    }

    const ST_AdjCoordinate& ST_AdjCoordinate::default_instance()
    {    
    if (!ST_AdjCoordinate::default_instance_)
    {
        ST_AdjCoordinate::default_instance_ = new ST_AdjCoordinate();
    }
    return *ST_AdjCoordinate::default_instance_;
    }

ST_AdjCoordinate* ST_AdjCoordinate::default_instance_ = NULL;

    // ST_AdjAngle
    bool ST_AdjAngle::has_ST_Angle() const
    {    
    return m_has_ST_Angle;
    }

    ST_Angle* ST_AdjAngle::mutable_ST_Angle()
    {    
    clear_ST_GeomGuideName();
    m_has_ST_Angle = true;
    if (!m_ST_Angle)
    {
        m_ST_Angle = new ST_Angle();
    }
    return m_ST_Angle;
    }

    const ST_Angle& ST_AdjAngle::get_ST_Angle() const
    {    
    if (m_ST_Angle)
    {
        return *m_ST_Angle;
    }
    return ST_Angle::default_instance();
    }

    void ST_AdjAngle::clear_ST_Angle()
    {    
    m_has_ST_Angle = false;
    if (m_ST_Angle)
    {
        delete m_ST_Angle;
        m_ST_Angle = NULL;
    }
    }

    bool ST_AdjAngle::has_ST_GeomGuideName() const
    {    
    return m_has_ST_GeomGuideName;
    }

    ST_GeomGuideName* ST_AdjAngle::mutable_ST_GeomGuideName()
    {    
    clear_ST_Angle();
    m_has_ST_GeomGuideName = true;
    if (!m_ST_GeomGuideName)
    {
        m_ST_GeomGuideName = new ST_GeomGuideName();
    }
    return m_ST_GeomGuideName;
    }

    const ST_GeomGuideName& ST_AdjAngle::get_ST_GeomGuideName() const
    {    
    if (m_ST_GeomGuideName)
    {
        return *m_ST_GeomGuideName;
    }
    return ST_GeomGuideName::default_instance();
    }

    void ST_AdjAngle::clear_ST_GeomGuideName()
    {    
    m_has_ST_GeomGuideName = false;
    if (m_ST_GeomGuideName)
    {
        delete m_ST_GeomGuideName;
        m_ST_GeomGuideName = NULL;
    }
    }

    std::string ST_AdjAngle::toString() const
    {    
    if (m_has_ST_Angle)
    {
        return m_ST_Angle->toString();
    }
    
    if (m_has_ST_GeomGuideName)
    {
        return m_ST_GeomGuideName->toString();
    }
    
    return string();
    }

    void ST_AdjAngle::clear()
    {    clear_ST_Angle();
    clear_ST_GeomGuideName();    }

    void ST_AdjAngle::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_ST_Angle)
    {
        m_ST_Angle->toXmlAttr(_attrName, _outStream);
        return;
    }
    
    if (m_has_ST_GeomGuideName)
    {
        m_ST_GeomGuideName->toXmlAttr(_attrName, _outStream);
        return;
    }
    }

    const ST_AdjAngle& ST_AdjAngle::default_instance()
    {    
    if (!ST_AdjAngle::default_instance_)
    {
        ST_AdjAngle::default_instance_ = new ST_AdjAngle();
    }
    return *ST_AdjAngle::default_instance_;
    }

ST_AdjAngle* ST_AdjAngle::default_instance_ = NULL;

    // ST_PathFillMode
    ST_PathFillMode::ST_PathFillMode()
    :m_has_type(false)
    {
    }
    ST_PathFillMode::ST_PathFillMode(const ST_PathFillMode::Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
    }
    bool ST_PathFillMode::has_type() const
    {    
    return m_has_type;
    }

    void ST_PathFillMode::set_type(const ST_PathFillMode::Type& _type)
    {    
    m_has_type = true;
    m_type = _type;
    }

    const ST_PathFillMode::Type& ST_PathFillMode::get_type() const
    {    
                return m_type;
                }

    std::string ST_PathFillMode::toString() const
    {    
    return ST_PathFillMode::TypeStrList[m_type];
    }

    void ST_PathFillMode::clear()
    {    
    m_has_type = false;
    }

    void ST_PathFillMode::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_type)
    {
    _outStream << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_PathFillMode& ST_PathFillMode::default_instance()
    {    
    if (!ST_PathFillMode::default_instance_)
    {
        ST_PathFillMode::default_instance_ = new ST_PathFillMode();
    }
    return *ST_PathFillMode::default_instance_;
    }

    const std::string ST_PathFillMode::TypeStrList[] =
    {
        "none",
        "norm",
        "lighten",
        "lightenLess",
        "darken",
        "darkenLess"
    };
ST_PathFillMode* ST_PathFillMode::default_instance_ = NULL;

    // ST_LineEndType
    ST_LineEndType::ST_LineEndType()
    :m_has_type(false)
    {
    }
    ST_LineEndType::ST_LineEndType(const ST_LineEndType::Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
    }
    bool ST_LineEndType::has_type() const
    {    
    return m_has_type;
    }

    void ST_LineEndType::set_type(const ST_LineEndType::Type& _type)
    {    
    m_has_type = true;
    m_type = _type;
    }

    const ST_LineEndType::Type& ST_LineEndType::get_type() const
    {    
                return m_type;
                }

    std::string ST_LineEndType::toString() const
    {    
    return ST_LineEndType::TypeStrList[m_type];
    }

    void ST_LineEndType::clear()
    {    
    m_has_type = false;
    }

    void ST_LineEndType::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_type)
    {
    _outStream << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_LineEndType& ST_LineEndType::default_instance()
    {    
    if (!ST_LineEndType::default_instance_)
    {
        ST_LineEndType::default_instance_ = new ST_LineEndType();
    }
    return *ST_LineEndType::default_instance_;
    }

    const std::string ST_LineEndType::TypeStrList[] =
    {
        "none",
        "triangle",
        "stealth",
        "diamond",
        "oval",
        "arrow"
    };
ST_LineEndType* ST_LineEndType::default_instance_ = NULL;

    // ST_LineEndWidth
    ST_LineEndWidth::ST_LineEndWidth()
    :m_has_type(false)
    {
    }
    ST_LineEndWidth::ST_LineEndWidth(const ST_LineEndWidth::Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
    }
    bool ST_LineEndWidth::has_type() const
    {    
    return m_has_type;
    }

    void ST_LineEndWidth::set_type(const ST_LineEndWidth::Type& _type)
    {    
    m_has_type = true;
    m_type = _type;
    }

    const ST_LineEndWidth::Type& ST_LineEndWidth::get_type() const
    {    
                return m_type;
                }

    std::string ST_LineEndWidth::toString() const
    {    
    return ST_LineEndWidth::TypeStrList[m_type];
    }

    void ST_LineEndWidth::clear()
    {    
    m_has_type = false;
    }

    void ST_LineEndWidth::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_type)
    {
    _outStream << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_LineEndWidth& ST_LineEndWidth::default_instance()
    {    
    if (!ST_LineEndWidth::default_instance_)
    {
        ST_LineEndWidth::default_instance_ = new ST_LineEndWidth();
    }
    return *ST_LineEndWidth::default_instance_;
    }

    const std::string ST_LineEndWidth::TypeStrList[] =
    {
        "sm",
        "med",
        "lg"
    };
ST_LineEndWidth* ST_LineEndWidth::default_instance_ = NULL;

    // ST_LineEndLength
    ST_LineEndLength::ST_LineEndLength()
    :m_has_type(false)
    {
    }
    ST_LineEndLength::ST_LineEndLength(const ST_LineEndLength::Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
    }
    bool ST_LineEndLength::has_type() const
    {    
    return m_has_type;
    }

    void ST_LineEndLength::set_type(const ST_LineEndLength::Type& _type)
    {    
    m_has_type = true;
    m_type = _type;
    }

    const ST_LineEndLength::Type& ST_LineEndLength::get_type() const
    {    
                return m_type;
                }

    std::string ST_LineEndLength::toString() const
    {    
    return ST_LineEndLength::TypeStrList[m_type];
    }

    void ST_LineEndLength::clear()
    {    
    m_has_type = false;
    }

    void ST_LineEndLength::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_type)
    {
    _outStream << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_LineEndLength& ST_LineEndLength::default_instance()
    {    
    if (!ST_LineEndLength::default_instance_)
    {
        ST_LineEndLength::default_instance_ = new ST_LineEndLength();
    }
    return *ST_LineEndLength::default_instance_;
    }

    const std::string ST_LineEndLength::TypeStrList[] =
    {
        "sm",
        "med",
        "lg"
    };
ST_LineEndLength* ST_LineEndLength::default_instance_ = NULL;

    // ST_PresetLineDashVal
    ST_PresetLineDashVal::ST_PresetLineDashVal()
    :m_has_type(false)
    {
    }
    ST_PresetLineDashVal::ST_PresetLineDashVal(const ST_PresetLineDashVal::Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
    }
    bool ST_PresetLineDashVal::has_type() const
    {    
    return m_has_type;
    }

    void ST_PresetLineDashVal::set_type(const ST_PresetLineDashVal::Type& _type)
    {    
    m_has_type = true;
    m_type = _type;
    }

    const ST_PresetLineDashVal::Type& ST_PresetLineDashVal::get_type() const
    {    
                return m_type;
                }

    std::string ST_PresetLineDashVal::toString() const
    {    
    return ST_PresetLineDashVal::TypeStrList[m_type];
    }

    void ST_PresetLineDashVal::clear()
    {    
    m_has_type = false;
    }

    void ST_PresetLineDashVal::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_type)
    {
    _outStream << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_PresetLineDashVal& ST_PresetLineDashVal::default_instance()
    {    
    if (!ST_PresetLineDashVal::default_instance_)
    {
        ST_PresetLineDashVal::default_instance_ = new ST_PresetLineDashVal();
    }
    return *ST_PresetLineDashVal::default_instance_;
    }

    const std::string ST_PresetLineDashVal::TypeStrList[] =
    {
        "solid",
        "dot",
        "dash",
        "lgDash",
        "dashDot",
        "lgDashDot",
        "lgDashDotDot",
        "sysDash",
        "sysDot",
        "sysDashDot",
        "sysDashDotDot"
    };
ST_PresetLineDashVal* ST_PresetLineDashVal::default_instance_ = NULL;

    // ST_LineCap
    ST_LineCap::ST_LineCap()
    :m_has_type(false)
    {
    }
    ST_LineCap::ST_LineCap(const ST_LineCap::Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
    }
    bool ST_LineCap::has_type() const
    {    
    return m_has_type;
    }

    void ST_LineCap::set_type(const ST_LineCap::Type& _type)
    {    
    m_has_type = true;
    m_type = _type;
    }

    const ST_LineCap::Type& ST_LineCap::get_type() const
    {    
                return m_type;
                }

    std::string ST_LineCap::toString() const
    {    
    return ST_LineCap::TypeStrList[m_type];
    }

    void ST_LineCap::clear()
    {    
    m_has_type = false;
    }

    void ST_LineCap::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_type)
    {
    _outStream << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_LineCap& ST_LineCap::default_instance()
    {    
    if (!ST_LineCap::default_instance_)
    {
        ST_LineCap::default_instance_ = new ST_LineCap();
    }
    return *ST_LineCap::default_instance_;
    }

    const std::string ST_LineCap::TypeStrList[] =
    {
        "rnd",
        "sq",
        "flat"
    };
ST_LineCap* ST_LineCap::default_instance_ = NULL;

    // ST_LineWidth
    ST_LineWidth::ST_LineWidth()

    {
    }
    ST_LineWidth::ST_LineWidth(const ST_Coordinate32Unqualified& _ST_Coordinate32Unqualified)

    {
    }
    const ST_LineWidth& ST_LineWidth::default_instance()
    {    
    if (!ST_LineWidth::default_instance_)
    {
        ST_LineWidth::default_instance_ = new ST_LineWidth();
    }
    return *ST_LineWidth::default_instance_;
    }

ST_LineWidth* ST_LineWidth::default_instance_ = NULL;

    // ST_PenAlignment
    ST_PenAlignment::ST_PenAlignment()
    :m_has_type(false)
    {
    }
    ST_PenAlignment::ST_PenAlignment(const ST_PenAlignment::Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
    }
    bool ST_PenAlignment::has_type() const
    {    
    return m_has_type;
    }

    void ST_PenAlignment::set_type(const ST_PenAlignment::Type& _type)
    {    
    m_has_type = true;
    m_type = _type;
    }

    const ST_PenAlignment::Type& ST_PenAlignment::get_type() const
    {    
                return m_type;
                }

    std::string ST_PenAlignment::toString() const
    {    
    return ST_PenAlignment::TypeStrList[m_type];
    }

    void ST_PenAlignment::clear()
    {    
    m_has_type = false;
    }

    void ST_PenAlignment::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_type)
    {
    _outStream << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_PenAlignment& ST_PenAlignment::default_instance()
    {    
    if (!ST_PenAlignment::default_instance_)
    {
        ST_PenAlignment::default_instance_ = new ST_PenAlignment();
    }
    return *ST_PenAlignment::default_instance_;
    }

    const std::string ST_PenAlignment::TypeStrList[] =
    {
        "ctr",
        "in"
    };
ST_PenAlignment* ST_PenAlignment::default_instance_ = NULL;

    // ST_CompoundLine
    ST_CompoundLine::ST_CompoundLine()
    :m_has_type(false)
    {
    }
    ST_CompoundLine::ST_CompoundLine(const ST_CompoundLine::Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
    }
    bool ST_CompoundLine::has_type() const
    {    
    return m_has_type;
    }

    void ST_CompoundLine::set_type(const ST_CompoundLine::Type& _type)
    {    
    m_has_type = true;
    m_type = _type;
    }

    const ST_CompoundLine::Type& ST_CompoundLine::get_type() const
    {    
                return m_type;
                }

    std::string ST_CompoundLine::toString() const
    {    
    return ST_CompoundLine::TypeStrList[m_type];
    }

    void ST_CompoundLine::clear()
    {    
    m_has_type = false;
    }

    void ST_CompoundLine::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_type)
    {
    _outStream << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_CompoundLine& ST_CompoundLine::default_instance()
    {    
    if (!ST_CompoundLine::default_instance_)
    {
        ST_CompoundLine::default_instance_ = new ST_CompoundLine();
    }
    return *ST_CompoundLine::default_instance_;
    }

    const std::string ST_CompoundLine::TypeStrList[] =
    {
        "sng",
        "dbl",
        "thickThin",
        "thinThick",
        "tri"
    };
ST_CompoundLine* ST_CompoundLine::default_instance_ = NULL;

    // ST_ShapeID
    ST_ShapeID::ST_ShapeID()
    :m_has_token(false),
    m_token("")
    {
    }
    ST_ShapeID::ST_ShapeID(const XSD::token_& _token)
    :m_has_token(true)
    {
    
    set_token(m_token);
    }
    bool ST_ShapeID::has_token() const
    {    
    return m_has_token;
    }

    void ST_ShapeID::set_token(const XSD::token_& _token)
    {    
    m_has_token = true;
    m_token = _token;
    }

    const XSD::token_& ST_ShapeID::get_token() const
    {    
    return m_token;
    }

    void ST_ShapeID::clear()
    {    
    m_has_token = false;
    m_token.clear();;
    }

    void ST_ShapeID::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_token)
    {
        _outStream << " " << _attrName << "=\"" << m_token << "\"";;
    }
    }

    const ST_ShapeID& ST_ShapeID::default_instance()
    {    
    if (!ST_ShapeID::default_instance_)
    {
        ST_ShapeID::default_instance_ = new ST_ShapeID();
    }
    return *ST_ShapeID::default_instance_;
    }

    std::string ST_ShapeID::toString() const
    {    
    std::stringstream strStream;
    strStream << get_token();
    return strStream.str();
    }

ST_ShapeID* ST_ShapeID::default_instance_ = NULL;

    // ST_OnOffStyleType
    ST_OnOffStyleType::ST_OnOffStyleType()
    :m_has_type(false)
    {
    }
    ST_OnOffStyleType::ST_OnOffStyleType(const ST_OnOffStyleType::Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
    }
    bool ST_OnOffStyleType::has_type() const
    {    
    return m_has_type;
    }

    void ST_OnOffStyleType::set_type(const ST_OnOffStyleType::Type& _type)
    {    
    m_has_type = true;
    m_type = _type;
    }

    const ST_OnOffStyleType::Type& ST_OnOffStyleType::get_type() const
    {    
                return m_type;
                }

    std::string ST_OnOffStyleType::toString() const
    {    
    return ST_OnOffStyleType::TypeStrList[m_type];
    }

    void ST_OnOffStyleType::clear()
    {    
    m_has_type = false;
    }

    void ST_OnOffStyleType::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_type)
    {
    _outStream << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_OnOffStyleType& ST_OnOffStyleType::default_instance()
    {    
    if (!ST_OnOffStyleType::default_instance_)
    {
        ST_OnOffStyleType::default_instance_ = new ST_OnOffStyleType();
    }
    return *ST_OnOffStyleType::default_instance_;
    }

    const std::string ST_OnOffStyleType::TypeStrList[] =
    {
        "on",
        "off",
        "def"
    };
ST_OnOffStyleType* ST_OnOffStyleType::default_instance_ = NULL;

    // ST_TextAnchoringType
    ST_TextAnchoringType::ST_TextAnchoringType()
    :m_has_type(false)
    {
    }
    ST_TextAnchoringType::ST_TextAnchoringType(const ST_TextAnchoringType::Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
    }
    bool ST_TextAnchoringType::has_type() const
    {    
    return m_has_type;
    }

    void ST_TextAnchoringType::set_type(const ST_TextAnchoringType::Type& _type)
    {    
    m_has_type = true;
    m_type = _type;
    }

    const ST_TextAnchoringType::Type& ST_TextAnchoringType::get_type() const
    {    
                return m_type;
                }

    std::string ST_TextAnchoringType::toString() const
    {    
    return ST_TextAnchoringType::TypeStrList[m_type];
    }

    void ST_TextAnchoringType::clear()
    {    
    m_has_type = false;
    }

    void ST_TextAnchoringType::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_type)
    {
    _outStream << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_TextAnchoringType& ST_TextAnchoringType::default_instance()
    {    
    if (!ST_TextAnchoringType::default_instance_)
    {
        ST_TextAnchoringType::default_instance_ = new ST_TextAnchoringType();
    }
    return *ST_TextAnchoringType::default_instance_;
    }

    const std::string ST_TextAnchoringType::TypeStrList[] =
    {
        "t",
        "ctr",
        "b",
        "just",
        "dist"
    };
ST_TextAnchoringType* ST_TextAnchoringType::default_instance_ = NULL;

    // ST_TextVertOverflowType
    ST_TextVertOverflowType::ST_TextVertOverflowType()
    :m_has_type(false)
    {
    }
    ST_TextVertOverflowType::ST_TextVertOverflowType(const ST_TextVertOverflowType::Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
    }
    bool ST_TextVertOverflowType::has_type() const
    {    
    return m_has_type;
    }

    void ST_TextVertOverflowType::set_type(const ST_TextVertOverflowType::Type& _type)
    {    
    m_has_type = true;
    m_type = _type;
    }

    const ST_TextVertOverflowType::Type& ST_TextVertOverflowType::get_type() const
    {    
                return m_type;
                }

    std::string ST_TextVertOverflowType::toString() const
    {    
    return ST_TextVertOverflowType::TypeStrList[m_type];
    }

    void ST_TextVertOverflowType::clear()
    {    
    m_has_type = false;
    }

    void ST_TextVertOverflowType::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_type)
    {
    _outStream << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_TextVertOverflowType& ST_TextVertOverflowType::default_instance()
    {    
    if (!ST_TextVertOverflowType::default_instance_)
    {
        ST_TextVertOverflowType::default_instance_ = new ST_TextVertOverflowType();
    }
    return *ST_TextVertOverflowType::default_instance_;
    }

    const std::string ST_TextVertOverflowType::TypeStrList[] =
    {
        "overflow",
        "ellipsis",
        "clip"
    };
ST_TextVertOverflowType* ST_TextVertOverflowType::default_instance_ = NULL;

    // ST_TextHorzOverflowType
    ST_TextHorzOverflowType::ST_TextHorzOverflowType()
    :m_has_type(false)
    {
    }
    ST_TextHorzOverflowType::ST_TextHorzOverflowType(const ST_TextHorzOverflowType::Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
    }
    bool ST_TextHorzOverflowType::has_type() const
    {    
    return m_has_type;
    }

    void ST_TextHorzOverflowType::set_type(const ST_TextHorzOverflowType::Type& _type)
    {    
    m_has_type = true;
    m_type = _type;
    }

    const ST_TextHorzOverflowType::Type& ST_TextHorzOverflowType::get_type() const
    {    
                return m_type;
                }

    std::string ST_TextHorzOverflowType::toString() const
    {    
    return ST_TextHorzOverflowType::TypeStrList[m_type];
    }

    void ST_TextHorzOverflowType::clear()
    {    
    m_has_type = false;
    }

    void ST_TextHorzOverflowType::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_type)
    {
    _outStream << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_TextHorzOverflowType& ST_TextHorzOverflowType::default_instance()
    {    
    if (!ST_TextHorzOverflowType::default_instance_)
    {
        ST_TextHorzOverflowType::default_instance_ = new ST_TextHorzOverflowType();
    }
    return *ST_TextHorzOverflowType::default_instance_;
    }

    const std::string ST_TextHorzOverflowType::TypeStrList[] =
    {
        "overflow",
        "clip"
    };
ST_TextHorzOverflowType* ST_TextHorzOverflowType::default_instance_ = NULL;

    // ST_TextVerticalType
    ST_TextVerticalType::ST_TextVerticalType()
    :m_has_type(false)
    {
    }
    ST_TextVerticalType::ST_TextVerticalType(const ST_TextVerticalType::Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
    }
    bool ST_TextVerticalType::has_type() const
    {    
    return m_has_type;
    }

    void ST_TextVerticalType::set_type(const ST_TextVerticalType::Type& _type)
    {    
    m_has_type = true;
    m_type = _type;
    }

    const ST_TextVerticalType::Type& ST_TextVerticalType::get_type() const
    {    
                return m_type;
                }

    std::string ST_TextVerticalType::toString() const
    {    
    return ST_TextVerticalType::TypeStrList[m_type];
    }

    void ST_TextVerticalType::clear()
    {    
    m_has_type = false;
    }

    void ST_TextVerticalType::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_type)
    {
    _outStream << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_TextVerticalType& ST_TextVerticalType::default_instance()
    {    
    if (!ST_TextVerticalType::default_instance_)
    {
        ST_TextVerticalType::default_instance_ = new ST_TextVerticalType();
    }
    return *ST_TextVerticalType::default_instance_;
    }

    const std::string ST_TextVerticalType::TypeStrList[] =
    {
        "horz",
        "vert",
        "vert270",
        "wordArtVert",
        "eaVert",
        "mongolianVert",
        "wordArtVertRtl"
    };
ST_TextVerticalType* ST_TextVerticalType::default_instance_ = NULL;

    // ST_TextWrappingType
    ST_TextWrappingType::ST_TextWrappingType()
    :m_has_type(false)
    {
    }
    ST_TextWrappingType::ST_TextWrappingType(const ST_TextWrappingType::Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
    }
    bool ST_TextWrappingType::has_type() const
    {    
    return m_has_type;
    }

    void ST_TextWrappingType::set_type(const ST_TextWrappingType::Type& _type)
    {    
    m_has_type = true;
    m_type = _type;
    }

    const ST_TextWrappingType::Type& ST_TextWrappingType::get_type() const
    {    
                return m_type;
                }

    std::string ST_TextWrappingType::toString() const
    {    
    return ST_TextWrappingType::TypeStrList[m_type];
    }

    void ST_TextWrappingType::clear()
    {    
    m_has_type = false;
    }

    void ST_TextWrappingType::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_type)
    {
    _outStream << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_TextWrappingType& ST_TextWrappingType::default_instance()
    {    
    if (!ST_TextWrappingType::default_instance_)
    {
        ST_TextWrappingType::default_instance_ = new ST_TextWrappingType();
    }
    return *ST_TextWrappingType::default_instance_;
    }

    const std::string ST_TextWrappingType::TypeStrList[] =
    {
        "none",
        "square"
    };
ST_TextWrappingType* ST_TextWrappingType::default_instance_ = NULL;

    // ST_TextColumnCount
    ST_TextColumnCount::ST_TextColumnCount()
    :m_has_int(false),
    m_int(0)
    {
    }
    ST_TextColumnCount::ST_TextColumnCount(const XSD::int_& _int)
    :m_has_int(true)
    {
    
    set_int(m_int);
    }
    bool ST_TextColumnCount::has_int() const
    {    
    return m_has_int;
    }

    void ST_TextColumnCount::set_int(const XSD::int_& _int)
    {    assert(1 <= _int);
    assert(_int <= 16);
    
    m_has_int = true;
    m_int = _int;
    }

    const XSD::int_& ST_TextColumnCount::get_int() const
    {    
    return m_int;
    }

    void ST_TextColumnCount::clear()
    {    
    m_has_int = false;
    m_int = 0;;
    }

    void ST_TextColumnCount::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_int)
    {
        _outStream << " " << _attrName << "=\"" << m_int << "\"";;
    }
    }

    const ST_TextColumnCount& ST_TextColumnCount::default_instance()
    {    
    if (!ST_TextColumnCount::default_instance_)
    {
        ST_TextColumnCount::default_instance_ = new ST_TextColumnCount();
    }
    return *ST_TextColumnCount::default_instance_;
    }

    std::string ST_TextColumnCount::toString() const
    {    
    std::stringstream strStream;
    strStream << get_int();
    return strStream.str();
    }

ST_TextColumnCount* ST_TextColumnCount::default_instance_ = NULL;

    // ST_TextFontScalePercentOrPercentString
    bool ST_TextFontScalePercentOrPercentString::has_ST_TextFontScalePercent() const
    {    
    return m_has_ST_TextFontScalePercent;
    }

    ST_TextFontScalePercent* ST_TextFontScalePercentOrPercentString::mutable_ST_TextFontScalePercent()
    {    
    clear_ST_Percentage();
    m_has_ST_TextFontScalePercent = true;
    if (!m_ST_TextFontScalePercent)
    {
        m_ST_TextFontScalePercent = new ST_TextFontScalePercent();
    }
    return m_ST_TextFontScalePercent;
    }

    const ST_TextFontScalePercent& ST_TextFontScalePercentOrPercentString::get_ST_TextFontScalePercent() const
    {    
    if (m_ST_TextFontScalePercent)
    {
        return *m_ST_TextFontScalePercent;
    }
    return ST_TextFontScalePercent::default_instance();
    }

    void ST_TextFontScalePercentOrPercentString::clear_ST_TextFontScalePercent()
    {    
    m_has_ST_TextFontScalePercent = false;
    if (m_ST_TextFontScalePercent)
    {
        delete m_ST_TextFontScalePercent;
        m_ST_TextFontScalePercent = NULL;
    }
    }

    bool ST_TextFontScalePercentOrPercentString::has_ST_Percentage() const
    {    
    return m_has_ST_Percentage;
    }

    ns_s::ST_Percentage* ST_TextFontScalePercentOrPercentString::mutable_ST_Percentage()
    {    
    clear_ST_TextFontScalePercent();
    m_has_ST_Percentage = true;
    if (!m_ST_Percentage)
    {
        m_ST_Percentage = new ns_s::ST_Percentage();
    }
    return m_ST_Percentage;
    }

    const ns_s::ST_Percentage& ST_TextFontScalePercentOrPercentString::get_ST_Percentage() const
    {    
    if (m_ST_Percentage)
    {
        return *m_ST_Percentage;
    }
    return ns_s::ST_Percentage::default_instance();
    }

    void ST_TextFontScalePercentOrPercentString::clear_ST_Percentage()
    {    
    m_has_ST_Percentage = false;
    if (m_ST_Percentage)
    {
        delete m_ST_Percentage;
        m_ST_Percentage = NULL;
    }
    }

    std::string ST_TextFontScalePercentOrPercentString::toString() const
    {    
    if (m_has_ST_TextFontScalePercent)
    {
        return m_ST_TextFontScalePercent->toString();
    }
    
    if (m_has_ST_Percentage)
    {
        return m_ST_Percentage->toString();
    }
    
    return string();
    }

    void ST_TextFontScalePercentOrPercentString::clear()
    {    clear_ST_TextFontScalePercent();
    clear_ST_Percentage();    }

    void ST_TextFontScalePercentOrPercentString::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_ST_TextFontScalePercent)
    {
        m_ST_TextFontScalePercent->toXmlAttr(_attrName, _outStream);
        return;
    }
    
    if (m_has_ST_Percentage)
    {
        m_ST_Percentage->toXmlAttr(_attrName, _outStream);
        return;
    }
    }

    const ST_TextFontScalePercentOrPercentString& ST_TextFontScalePercentOrPercentString::default_instance()
    {    
    if (!ST_TextFontScalePercentOrPercentString::default_instance_)
    {
        ST_TextFontScalePercentOrPercentString::default_instance_ = new ST_TextFontScalePercentOrPercentString();
    }
    return *ST_TextFontScalePercentOrPercentString::default_instance_;
    }

ST_TextFontScalePercentOrPercentString* ST_TextFontScalePercentOrPercentString::default_instance_ = NULL;

    // ST_TextFontScalePercent
    ST_TextFontScalePercent::ST_TextFontScalePercent()

    {
    }
    ST_TextFontScalePercent::ST_TextFontScalePercent(const ST_PercentageDecimal& _ST_PercentageDecimal)

    {
    }
    const ST_TextFontScalePercent& ST_TextFontScalePercent::default_instance()
    {    
    if (!ST_TextFontScalePercent::default_instance_)
    {
        ST_TextFontScalePercent::default_instance_ = new ST_TextFontScalePercent();
    }
    return *ST_TextFontScalePercent::default_instance_;
    }

ST_TextFontScalePercent* ST_TextFontScalePercent::default_instance_ = NULL;

    // ST_TextBulletStartAtNum
    ST_TextBulletStartAtNum::ST_TextBulletStartAtNum()
    :m_has_int(false),
    m_int(0)
    {
    }
    ST_TextBulletStartAtNum::ST_TextBulletStartAtNum(const XSD::int_& _int)
    :m_has_int(true)
    {
    
    set_int(m_int);
    }
    bool ST_TextBulletStartAtNum::has_int() const
    {    
    return m_has_int;
    }

    void ST_TextBulletStartAtNum::set_int(const XSD::int_& _int)
    {    assert(1 <= _int);
    assert(_int <= 32767);
    
    m_has_int = true;
    m_int = _int;
    }

    const XSD::int_& ST_TextBulletStartAtNum::get_int() const
    {    
    return m_int;
    }

    void ST_TextBulletStartAtNum::clear()
    {    
    m_has_int = false;
    m_int = 0;;
    }

    void ST_TextBulletStartAtNum::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_int)
    {
        _outStream << " " << _attrName << "=\"" << m_int << "\"";;
    }
    }

    const ST_TextBulletStartAtNum& ST_TextBulletStartAtNum::default_instance()
    {    
    if (!ST_TextBulletStartAtNum::default_instance_)
    {
        ST_TextBulletStartAtNum::default_instance_ = new ST_TextBulletStartAtNum();
    }
    return *ST_TextBulletStartAtNum::default_instance_;
    }

    std::string ST_TextBulletStartAtNum::toString() const
    {    
    std::stringstream strStream;
    strStream << get_int();
    return strStream.str();
    }

ST_TextBulletStartAtNum* ST_TextBulletStartAtNum::default_instance_ = NULL;

    // ST_TextAutonumberScheme
    ST_TextAutonumberScheme::ST_TextAutonumberScheme()
    :m_has_type(false)
    {
    }
    ST_TextAutonumberScheme::ST_TextAutonumberScheme(const ST_TextAutonumberScheme::Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
    }
    bool ST_TextAutonumberScheme::has_type() const
    {    
    return m_has_type;
    }

    void ST_TextAutonumberScheme::set_type(const ST_TextAutonumberScheme::Type& _type)
    {    
    m_has_type = true;
    m_type = _type;
    }

    const ST_TextAutonumberScheme::Type& ST_TextAutonumberScheme::get_type() const
    {    
                return m_type;
                }

    std::string ST_TextAutonumberScheme::toString() const
    {    
    return ST_TextAutonumberScheme::TypeStrList[m_type];
    }

    void ST_TextAutonumberScheme::clear()
    {    
    m_has_type = false;
    }

    void ST_TextAutonumberScheme::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_type)
    {
    _outStream << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_TextAutonumberScheme& ST_TextAutonumberScheme::default_instance()
    {    
    if (!ST_TextAutonumberScheme::default_instance_)
    {
        ST_TextAutonumberScheme::default_instance_ = new ST_TextAutonumberScheme();
    }
    return *ST_TextAutonumberScheme::default_instance_;
    }

    const std::string ST_TextAutonumberScheme::TypeStrList[] =
    {
        "alphaLcParenBoth",
        "alphaUcParenBoth",
        "alphaLcParenR",
        "alphaUcParenR",
        "alphaLcPeriod",
        "alphaUcPeriod",
        "arabicParenBoth",
        "arabicParenR",
        "arabicPeriod",
        "arabicPlain",
        "romanLcParenBoth",
        "romanUcParenBoth",
        "romanLcParenR",
        "romanUcParenR",
        "romanLcPeriod",
        "romanUcPeriod",
        "circleNumDbPlain",
        "circleNumWdBlackPlain",
        "circleNumWdWhitePlain",
        "arabicDbPeriod",
        "arabicDbPlain",
        "ea1ChsPeriod",
        "ea1ChsPlain",
        "ea1ChtPeriod",
        "ea1ChtPlain",
        "ea1JpnChsDbPeriod",
        "ea1JpnKorPlain",
        "ea1JpnKorPeriod",
        "arabic1Minus",
        "arabic2Minus",
        "hebrew2Minus",
        "thaiAlphaPeriod",
        "thaiAlphaParenR",
        "thaiAlphaParenBoth",
        "thaiNumPeriod",
        "thaiNumParenR",
        "thaiNumParenBoth",
        "hindiAlphaPeriod",
        "hindiNumPeriod",
        "hindiNumParenR",
        "hindiAlpha1Period"
    };
ST_TextAutonumberScheme* ST_TextAutonumberScheme::default_instance_ = NULL;

    // ST_TextBulletSize
    bool ST_TextBulletSize::has_ST_TextBulletSizePercent() const
    {    
    return m_has_ST_TextBulletSizePercent;
    }

    ST_TextBulletSizePercent* ST_TextBulletSize::mutable_ST_TextBulletSizePercent()
    {    
    clear_ST_TextBulletSizeDecimal();
    m_has_ST_TextBulletSizePercent = true;
    if (!m_ST_TextBulletSizePercent)
    {
        m_ST_TextBulletSizePercent = new ST_TextBulletSizePercent();
    }
    return m_ST_TextBulletSizePercent;
    }

    const ST_TextBulletSizePercent& ST_TextBulletSize::get_ST_TextBulletSizePercent() const
    {    
    if (m_ST_TextBulletSizePercent)
    {
        return *m_ST_TextBulletSizePercent;
    }
    return ST_TextBulletSizePercent::default_instance();
    }

    void ST_TextBulletSize::clear_ST_TextBulletSizePercent()
    {    
    m_has_ST_TextBulletSizePercent = false;
    if (m_ST_TextBulletSizePercent)
    {
        delete m_ST_TextBulletSizePercent;
        m_ST_TextBulletSizePercent = NULL;
    }
    }

    bool ST_TextBulletSize::has_ST_TextBulletSizeDecimal() const
    {    
    return m_has_ST_TextBulletSizeDecimal;
    }

    ST_TextBulletSizeDecimal* ST_TextBulletSize::mutable_ST_TextBulletSizeDecimal()
    {    
    clear_ST_TextBulletSizePercent();
    m_has_ST_TextBulletSizeDecimal = true;
    if (!m_ST_TextBulletSizeDecimal)
    {
        m_ST_TextBulletSizeDecimal = new ST_TextBulletSizeDecimal();
    }
    return m_ST_TextBulletSizeDecimal;
    }

    const ST_TextBulletSizeDecimal& ST_TextBulletSize::get_ST_TextBulletSizeDecimal() const
    {    
    if (m_ST_TextBulletSizeDecimal)
    {
        return *m_ST_TextBulletSizeDecimal;
    }
    return ST_TextBulletSizeDecimal::default_instance();
    }

    void ST_TextBulletSize::clear_ST_TextBulletSizeDecimal()
    {    
    m_has_ST_TextBulletSizeDecimal = false;
    if (m_ST_TextBulletSizeDecimal)
    {
        delete m_ST_TextBulletSizeDecimal;
        m_ST_TextBulletSizeDecimal = NULL;
    }
    }

    std::string ST_TextBulletSize::toString() const
    {    
    if (m_has_ST_TextBulletSizePercent)
    {
        return m_ST_TextBulletSizePercent->toString();
    }
    
    if (m_has_ST_TextBulletSizeDecimal)
    {
        return m_ST_TextBulletSizeDecimal->toString();
    }
    
    return string();
    }

    void ST_TextBulletSize::clear()
    {    clear_ST_TextBulletSizePercent();
    clear_ST_TextBulletSizeDecimal();    }

    void ST_TextBulletSize::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_ST_TextBulletSizePercent)
    {
        m_ST_TextBulletSizePercent->toXmlAttr(_attrName, _outStream);
        return;
    }
    
    if (m_has_ST_TextBulletSizeDecimal)
    {
        m_ST_TextBulletSizeDecimal->toXmlAttr(_attrName, _outStream);
        return;
    }
    }

    const ST_TextBulletSize& ST_TextBulletSize::default_instance()
    {    
    if (!ST_TextBulletSize::default_instance_)
    {
        ST_TextBulletSize::default_instance_ = new ST_TextBulletSize();
    }
    return *ST_TextBulletSize::default_instance_;
    }

ST_TextBulletSize* ST_TextBulletSize::default_instance_ = NULL;

    // ST_TextBulletSizePercent
    ST_TextBulletSizePercent::ST_TextBulletSizePercent()
    :m_has_string(false),
    m_string("")
    {
    }
    ST_TextBulletSizePercent::ST_TextBulletSizePercent(const XSD::string_& _string)
    :m_has_string(true)
    {
    
    set_string(m_string);
    }
    bool ST_TextBulletSizePercent::has_string() const
    {    
    return m_has_string;
    }

    void ST_TextBulletSizePercent::set_string(const XSD::string_& _string)
    {    
    m_has_string = true;
    m_string = _string;
    }

    const XSD::string_& ST_TextBulletSizePercent::get_string() const
    {    
    return m_string;
    }

    void ST_TextBulletSizePercent::clear()
    {    
    m_has_string = false;
    m_string.clear();;
    }

    void ST_TextBulletSizePercent::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_string)
    {
        _outStream << " " << _attrName << "=\"" << m_string << "\"";;
    }
    }

    const ST_TextBulletSizePercent& ST_TextBulletSizePercent::default_instance()
    {    
    if (!ST_TextBulletSizePercent::default_instance_)
    {
        ST_TextBulletSizePercent::default_instance_ = new ST_TextBulletSizePercent();
    }
    return *ST_TextBulletSizePercent::default_instance_;
    }

    std::string ST_TextBulletSizePercent::toString() const
    {    
    std::stringstream strStream;
    strStream << get_string();
    return strStream.str();
    }

ST_TextBulletSizePercent* ST_TextBulletSizePercent::default_instance_ = NULL;

    // ST_TextBulletSizeDecimal
    ST_TextBulletSizeDecimal::ST_TextBulletSizeDecimal()

    {
    }
    ST_TextBulletSizeDecimal::ST_TextBulletSizeDecimal(const ST_PercentageDecimal& _ST_PercentageDecimal)

    {
    }
    const ST_TextBulletSizeDecimal& ST_TextBulletSizeDecimal::default_instance()
    {    
    if (!ST_TextBulletSizeDecimal::default_instance_)
    {
        ST_TextBulletSizeDecimal::default_instance_ = new ST_TextBulletSizeDecimal();
    }
    return *ST_TextBulletSizeDecimal::default_instance_;
    }

ST_TextBulletSizeDecimal* ST_TextBulletSizeDecimal::default_instance_ = NULL;

    // ST_TextPoint
    bool ST_TextPoint::has_ST_TextPointUnqualified() const
    {    
    return m_has_ST_TextPointUnqualified;
    }

    ST_TextPointUnqualified* ST_TextPoint::mutable_ST_TextPointUnqualified()
    {    
    clear_ST_UniversalMeasure();
    m_has_ST_TextPointUnqualified = true;
    if (!m_ST_TextPointUnqualified)
    {
        m_ST_TextPointUnqualified = new ST_TextPointUnqualified();
    }
    return m_ST_TextPointUnqualified;
    }

    const ST_TextPointUnqualified& ST_TextPoint::get_ST_TextPointUnqualified() const
    {    
    if (m_ST_TextPointUnqualified)
    {
        return *m_ST_TextPointUnqualified;
    }
    return ST_TextPointUnqualified::default_instance();
    }

    void ST_TextPoint::clear_ST_TextPointUnqualified()
    {    
    m_has_ST_TextPointUnqualified = false;
    if (m_ST_TextPointUnqualified)
    {
        delete m_ST_TextPointUnqualified;
        m_ST_TextPointUnqualified = NULL;
    }
    }

    bool ST_TextPoint::has_ST_UniversalMeasure() const
    {    
    return m_has_ST_UniversalMeasure;
    }

    ns_s::ST_UniversalMeasure* ST_TextPoint::mutable_ST_UniversalMeasure()
    {    
    clear_ST_TextPointUnqualified();
    m_has_ST_UniversalMeasure = true;
    if (!m_ST_UniversalMeasure)
    {
        m_ST_UniversalMeasure = new ns_s::ST_UniversalMeasure();
    }
    return m_ST_UniversalMeasure;
    }

    const ns_s::ST_UniversalMeasure& ST_TextPoint::get_ST_UniversalMeasure() const
    {    
    if (m_ST_UniversalMeasure)
    {
        return *m_ST_UniversalMeasure;
    }
    return ns_s::ST_UniversalMeasure::default_instance();
    }

    void ST_TextPoint::clear_ST_UniversalMeasure()
    {    
    m_has_ST_UniversalMeasure = false;
    if (m_ST_UniversalMeasure)
    {
        delete m_ST_UniversalMeasure;
        m_ST_UniversalMeasure = NULL;
    }
    }

    std::string ST_TextPoint::toString() const
    {    
    if (m_has_ST_TextPointUnqualified)
    {
        return m_ST_TextPointUnqualified->toString();
    }
    
    if (m_has_ST_UniversalMeasure)
    {
        return m_ST_UniversalMeasure->toString();
    }
    
    return string();
    }

    void ST_TextPoint::clear()
    {    clear_ST_TextPointUnqualified();
    clear_ST_UniversalMeasure();    }

    void ST_TextPoint::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_ST_TextPointUnqualified)
    {
        m_ST_TextPointUnqualified->toXmlAttr(_attrName, _outStream);
        return;
    }
    
    if (m_has_ST_UniversalMeasure)
    {
        m_ST_UniversalMeasure->toXmlAttr(_attrName, _outStream);
        return;
    }
    }

    const ST_TextPoint& ST_TextPoint::default_instance()
    {    
    if (!ST_TextPoint::default_instance_)
    {
        ST_TextPoint::default_instance_ = new ST_TextPoint();
    }
    return *ST_TextPoint::default_instance_;
    }

ST_TextPoint* ST_TextPoint::default_instance_ = NULL;

    // ST_TextPointUnqualified
    ST_TextPointUnqualified::ST_TextPointUnqualified()
    :m_has_int(false),
    m_int(0)
    {
    }
    ST_TextPointUnqualified::ST_TextPointUnqualified(const XSD::int_& _int)
    :m_has_int(true)
    {
    
    set_int(m_int);
    }
    bool ST_TextPointUnqualified::has_int() const
    {    
    return m_has_int;
    }

    void ST_TextPointUnqualified::set_int(const XSD::int_& _int)
    {    assert(-400000 <= _int);
    assert(_int <= 400000);
    
    m_has_int = true;
    m_int = _int;
    }

    const XSD::int_& ST_TextPointUnqualified::get_int() const
    {    
    return m_int;
    }

    void ST_TextPointUnqualified::clear()
    {    
    m_has_int = false;
    m_int = 0;;
    }

    void ST_TextPointUnqualified::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_int)
    {
        _outStream << " " << _attrName << "=\"" << m_int << "\"";;
    }
    }

    const ST_TextPointUnqualified& ST_TextPointUnqualified::default_instance()
    {    
    if (!ST_TextPointUnqualified::default_instance_)
    {
        ST_TextPointUnqualified::default_instance_ = new ST_TextPointUnqualified();
    }
    return *ST_TextPointUnqualified::default_instance_;
    }

    std::string ST_TextPointUnqualified::toString() const
    {    
    std::stringstream strStream;
    strStream << get_int();
    return strStream.str();
    }

ST_TextPointUnqualified* ST_TextPointUnqualified::default_instance_ = NULL;

    // ST_TextNonNegativePoint
    ST_TextNonNegativePoint::ST_TextNonNegativePoint()
    :m_has_int(false),
    m_int(0)
    {
    }
    ST_TextNonNegativePoint::ST_TextNonNegativePoint(const XSD::int_& _int)
    :m_has_int(true)
    {
    
    set_int(m_int);
    }
    bool ST_TextNonNegativePoint::has_int() const
    {    
    return m_has_int;
    }

    void ST_TextNonNegativePoint::set_int(const XSD::int_& _int)
    {    assert(0 <= _int);
    assert(_int <= 400000);
    
    m_has_int = true;
    m_int = _int;
    }

    const XSD::int_& ST_TextNonNegativePoint::get_int() const
    {    
    return m_int;
    }

    void ST_TextNonNegativePoint::clear()
    {    
    m_has_int = false;
    m_int = 0;;
    }

    void ST_TextNonNegativePoint::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_int)
    {
        _outStream << " " << _attrName << "=\"" << m_int << "\"";;
    }
    }

    const ST_TextNonNegativePoint& ST_TextNonNegativePoint::default_instance()
    {    
    if (!ST_TextNonNegativePoint::default_instance_)
    {
        ST_TextNonNegativePoint::default_instance_ = new ST_TextNonNegativePoint();
    }
    return *ST_TextNonNegativePoint::default_instance_;
    }

    std::string ST_TextNonNegativePoint::toString() const
    {    
    std::stringstream strStream;
    strStream << get_int();
    return strStream.str();
    }

ST_TextNonNegativePoint* ST_TextNonNegativePoint::default_instance_ = NULL;

    // ST_TextFontSize
    ST_TextFontSize::ST_TextFontSize()
    :m_has_int(false),
    m_int(0)
    {
    }
    ST_TextFontSize::ST_TextFontSize(const XSD::int_& _int)
    :m_has_int(true)
    {
    
    set_int(m_int);
    }
    bool ST_TextFontSize::has_int() const
    {    
    return m_has_int;
    }

    void ST_TextFontSize::set_int(const XSD::int_& _int)
    {    assert(100 <= _int);
    assert(_int <= 400000);
    
    m_has_int = true;
    m_int = _int;
    }

    const XSD::int_& ST_TextFontSize::get_int() const
    {    
    return m_int;
    }

    void ST_TextFontSize::clear()
    {    
    m_has_int = false;
    m_int = 0;;
    }

    void ST_TextFontSize::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_int)
    {
        _outStream << " " << _attrName << "=\"" << m_int << "\"";;
    }
    }

    const ST_TextFontSize& ST_TextFontSize::default_instance()
    {    
    if (!ST_TextFontSize::default_instance_)
    {
        ST_TextFontSize::default_instance_ = new ST_TextFontSize();
    }
    return *ST_TextFontSize::default_instance_;
    }

    std::string ST_TextFontSize::toString() const
    {    
    std::stringstream strStream;
    strStream << get_int();
    return strStream.str();
    }

ST_TextFontSize* ST_TextFontSize::default_instance_ = NULL;

    // ST_TextTypeface
    ST_TextTypeface::ST_TextTypeface()
    :m_has_string(false),
    m_string("")
    {
    }
    ST_TextTypeface::ST_TextTypeface(const XSD::string_& _string)
    :m_has_string(true)
    {
    
    set_string(m_string);
    }
    bool ST_TextTypeface::has_string() const
    {    
    return m_has_string;
    }

    void ST_TextTypeface::set_string(const XSD::string_& _string)
    {    
    m_has_string = true;
    m_string = _string;
    }

    const XSD::string_& ST_TextTypeface::get_string() const
    {    
    return m_string;
    }

    void ST_TextTypeface::clear()
    {    
    m_has_string = false;
    m_string.clear();;
    }

    void ST_TextTypeface::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_string)
    {
        _outStream << " " << _attrName << "=\"" << m_string << "\"";;
    }
    }

    const ST_TextTypeface& ST_TextTypeface::default_instance()
    {    
    if (!ST_TextTypeface::default_instance_)
    {
        ST_TextTypeface::default_instance_ = new ST_TextTypeface();
    }
    return *ST_TextTypeface::default_instance_;
    }

    std::string ST_TextTypeface::toString() const
    {    
    std::stringstream strStream;
    strStream << get_string();
    return strStream.str();
    }

ST_TextTypeface* ST_TextTypeface::default_instance_ = NULL;

    // ST_PitchFamily
    ST_PitchFamily::ST_PitchFamily()
    :m_has_type(false)
    {
    }
    ST_PitchFamily::ST_PitchFamily(const ST_PitchFamily::Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
    }
    bool ST_PitchFamily::has_type() const
    {    
    return m_has_type;
    }

    void ST_PitchFamily::set_type(const ST_PitchFamily::Type& _type)
    {    
    m_has_type = true;
    m_type = _type;
    }

    const ST_PitchFamily::Type& ST_PitchFamily::get_type() const
    {    
                return m_type;
                }

    std::string ST_PitchFamily::toString() const
    {    
    return ST_PitchFamily::TypeStrList[m_type];
    }

    void ST_PitchFamily::clear()
    {    
    m_has_type = false;
    }

    void ST_PitchFamily::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_type)
    {
    _outStream << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_PitchFamily& ST_PitchFamily::default_instance()
    {    
    if (!ST_PitchFamily::default_instance_)
    {
        ST_PitchFamily::default_instance_ = new ST_PitchFamily();
    }
    return *ST_PitchFamily::default_instance_;
    }

    const std::string ST_PitchFamily::TypeStrList[] =
    {
        "00",
        "01",
        "02",
        "16",
        "17",
        "18",
        "32",
        "33",
        "34",
        "48",
        "49",
        "50",
        "64",
        "65",
        "66",
        "80",
        "81",
        "82"
    };
ST_PitchFamily* ST_PitchFamily::default_instance_ = NULL;

    // ST_TextUnderlineType
    ST_TextUnderlineType::ST_TextUnderlineType()
    :m_has_type(false)
    {
    }
    ST_TextUnderlineType::ST_TextUnderlineType(const ST_TextUnderlineType::Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
    }
    bool ST_TextUnderlineType::has_type() const
    {    
    return m_has_type;
    }

    void ST_TextUnderlineType::set_type(const ST_TextUnderlineType::Type& _type)
    {    
    m_has_type = true;
    m_type = _type;
    }

    const ST_TextUnderlineType::Type& ST_TextUnderlineType::get_type() const
    {    
                return m_type;
                }

    std::string ST_TextUnderlineType::toString() const
    {    
    return ST_TextUnderlineType::TypeStrList[m_type];
    }

    void ST_TextUnderlineType::clear()
    {    
    m_has_type = false;
    }

    void ST_TextUnderlineType::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_type)
    {
    _outStream << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_TextUnderlineType& ST_TextUnderlineType::default_instance()
    {    
    if (!ST_TextUnderlineType::default_instance_)
    {
        ST_TextUnderlineType::default_instance_ = new ST_TextUnderlineType();
    }
    return *ST_TextUnderlineType::default_instance_;
    }

    const std::string ST_TextUnderlineType::TypeStrList[] =
    {
        "none",
        "words",
        "sng",
        "dbl",
        "heavy",
        "dotted",
        "dottedHeavy",
        "dash",
        "dashHeavy",
        "dashLong",
        "dashLongHeavy",
        "dotDash",
        "dotDashHeavy",
        "dotDotDash",
        "dotDotDashHeavy",
        "wavy",
        "wavyHeavy",
        "wavyDbl"
    };
ST_TextUnderlineType* ST_TextUnderlineType::default_instance_ = NULL;

    // ST_TextStrikeType
    ST_TextStrikeType::ST_TextStrikeType()
    :m_has_type(false)
    {
    }
    ST_TextStrikeType::ST_TextStrikeType(const ST_TextStrikeType::Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
    }
    bool ST_TextStrikeType::has_type() const
    {    
    return m_has_type;
    }

    void ST_TextStrikeType::set_type(const ST_TextStrikeType::Type& _type)
    {    
    m_has_type = true;
    m_type = _type;
    }

    const ST_TextStrikeType::Type& ST_TextStrikeType::get_type() const
    {    
                return m_type;
                }

    std::string ST_TextStrikeType::toString() const
    {    
    return ST_TextStrikeType::TypeStrList[m_type];
    }

    void ST_TextStrikeType::clear()
    {    
    m_has_type = false;
    }

    void ST_TextStrikeType::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_type)
    {
    _outStream << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_TextStrikeType& ST_TextStrikeType::default_instance()
    {    
    if (!ST_TextStrikeType::default_instance_)
    {
        ST_TextStrikeType::default_instance_ = new ST_TextStrikeType();
    }
    return *ST_TextStrikeType::default_instance_;
    }

    const std::string ST_TextStrikeType::TypeStrList[] =
    {
        "noStrike",
        "sngStrike",
        "dblStrike"
    };
ST_TextStrikeType* ST_TextStrikeType::default_instance_ = NULL;

    // ST_TextCapsType
    ST_TextCapsType::ST_TextCapsType()
    :m_has_type(false)
    {
    }
    ST_TextCapsType::ST_TextCapsType(const ST_TextCapsType::Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
    }
    bool ST_TextCapsType::has_type() const
    {    
    return m_has_type;
    }

    void ST_TextCapsType::set_type(const ST_TextCapsType::Type& _type)
    {    
    m_has_type = true;
    m_type = _type;
    }

    const ST_TextCapsType::Type& ST_TextCapsType::get_type() const
    {    
                return m_type;
                }

    std::string ST_TextCapsType::toString() const
    {    
    return ST_TextCapsType::TypeStrList[m_type];
    }

    void ST_TextCapsType::clear()
    {    
    m_has_type = false;
    }

    void ST_TextCapsType::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_type)
    {
    _outStream << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_TextCapsType& ST_TextCapsType::default_instance()
    {    
    if (!ST_TextCapsType::default_instance_)
    {
        ST_TextCapsType::default_instance_ = new ST_TextCapsType();
    }
    return *ST_TextCapsType::default_instance_;
    }

    const std::string ST_TextCapsType::TypeStrList[] =
    {
        "none",
        "small",
        "all"
    };
ST_TextCapsType* ST_TextCapsType::default_instance_ = NULL;

    // ST_TextSpacingPoint
    ST_TextSpacingPoint::ST_TextSpacingPoint()
    :m_has_int(false),
    m_int(0)
    {
    }
    ST_TextSpacingPoint::ST_TextSpacingPoint(const XSD::int_& _int)
    :m_has_int(true)
    {
    
    set_int(m_int);
    }
    bool ST_TextSpacingPoint::has_int() const
    {    
    return m_has_int;
    }

    void ST_TextSpacingPoint::set_int(const XSD::int_& _int)
    {    assert(0 <= _int);
    assert(_int <= 158400);
    
    m_has_int = true;
    m_int = _int;
    }

    const XSD::int_& ST_TextSpacingPoint::get_int() const
    {    
    return m_int;
    }

    void ST_TextSpacingPoint::clear()
    {    
    m_has_int = false;
    m_int = 0;;
    }

    void ST_TextSpacingPoint::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_int)
    {
        _outStream << " " << _attrName << "=\"" << m_int << "\"";;
    }
    }

    const ST_TextSpacingPoint& ST_TextSpacingPoint::default_instance()
    {    
    if (!ST_TextSpacingPoint::default_instance_)
    {
        ST_TextSpacingPoint::default_instance_ = new ST_TextSpacingPoint();
    }
    return *ST_TextSpacingPoint::default_instance_;
    }

    std::string ST_TextSpacingPoint::toString() const
    {    
    std::stringstream strStream;
    strStream << get_int();
    return strStream.str();
    }

ST_TextSpacingPoint* ST_TextSpacingPoint::default_instance_ = NULL;

    // ST_TextSpacingPercentOrPercentString
    bool ST_TextSpacingPercentOrPercentString::has_ST_TextSpacingPercent() const
    {    
    return m_has_ST_TextSpacingPercent;
    }

    ST_TextSpacingPercent* ST_TextSpacingPercentOrPercentString::mutable_ST_TextSpacingPercent()
    {    
    clear_ST_Percentage();
    m_has_ST_TextSpacingPercent = true;
    if (!m_ST_TextSpacingPercent)
    {
        m_ST_TextSpacingPercent = new ST_TextSpacingPercent();
    }
    return m_ST_TextSpacingPercent;
    }

    const ST_TextSpacingPercent& ST_TextSpacingPercentOrPercentString::get_ST_TextSpacingPercent() const
    {    
    if (m_ST_TextSpacingPercent)
    {
        return *m_ST_TextSpacingPercent;
    }
    return ST_TextSpacingPercent::default_instance();
    }

    void ST_TextSpacingPercentOrPercentString::clear_ST_TextSpacingPercent()
    {    
    m_has_ST_TextSpacingPercent = false;
    if (m_ST_TextSpacingPercent)
    {
        delete m_ST_TextSpacingPercent;
        m_ST_TextSpacingPercent = NULL;
    }
    }

    bool ST_TextSpacingPercentOrPercentString::has_ST_Percentage() const
    {    
    return m_has_ST_Percentage;
    }

    ns_s::ST_Percentage* ST_TextSpacingPercentOrPercentString::mutable_ST_Percentage()
    {    
    clear_ST_TextSpacingPercent();
    m_has_ST_Percentage = true;
    if (!m_ST_Percentage)
    {
        m_ST_Percentage = new ns_s::ST_Percentage();
    }
    return m_ST_Percentage;
    }

    const ns_s::ST_Percentage& ST_TextSpacingPercentOrPercentString::get_ST_Percentage() const
    {    
    if (m_ST_Percentage)
    {
        return *m_ST_Percentage;
    }
    return ns_s::ST_Percentage::default_instance();
    }

    void ST_TextSpacingPercentOrPercentString::clear_ST_Percentage()
    {    
    m_has_ST_Percentage = false;
    if (m_ST_Percentage)
    {
        delete m_ST_Percentage;
        m_ST_Percentage = NULL;
    }
    }

    std::string ST_TextSpacingPercentOrPercentString::toString() const
    {    
    if (m_has_ST_TextSpacingPercent)
    {
        return m_ST_TextSpacingPercent->toString();
    }
    
    if (m_has_ST_Percentage)
    {
        return m_ST_Percentage->toString();
    }
    
    return string();
    }

    void ST_TextSpacingPercentOrPercentString::clear()
    {    clear_ST_TextSpacingPercent();
    clear_ST_Percentage();    }

    void ST_TextSpacingPercentOrPercentString::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_ST_TextSpacingPercent)
    {
        m_ST_TextSpacingPercent->toXmlAttr(_attrName, _outStream);
        return;
    }
    
    if (m_has_ST_Percentage)
    {
        m_ST_Percentage->toXmlAttr(_attrName, _outStream);
        return;
    }
    }

    const ST_TextSpacingPercentOrPercentString& ST_TextSpacingPercentOrPercentString::default_instance()
    {    
    if (!ST_TextSpacingPercentOrPercentString::default_instance_)
    {
        ST_TextSpacingPercentOrPercentString::default_instance_ = new ST_TextSpacingPercentOrPercentString();
    }
    return *ST_TextSpacingPercentOrPercentString::default_instance_;
    }

ST_TextSpacingPercentOrPercentString* ST_TextSpacingPercentOrPercentString::default_instance_ = NULL;

    // ST_TextSpacingPercent
    ST_TextSpacingPercent::ST_TextSpacingPercent()

    {
    }
    ST_TextSpacingPercent::ST_TextSpacingPercent(const ST_PercentageDecimal& _ST_PercentageDecimal)

    {
    }
    const ST_TextSpacingPercent& ST_TextSpacingPercent::default_instance()
    {    
    if (!ST_TextSpacingPercent::default_instance_)
    {
        ST_TextSpacingPercent::default_instance_ = new ST_TextSpacingPercent();
    }
    return *ST_TextSpacingPercent::default_instance_;
    }

ST_TextSpacingPercent* ST_TextSpacingPercent::default_instance_ = NULL;

    // ST_TextMargin
    ST_TextMargin::ST_TextMargin()

    {
    }
    ST_TextMargin::ST_TextMargin(const ST_Coordinate32Unqualified& _ST_Coordinate32Unqualified)

    {
    }
    const ST_TextMargin& ST_TextMargin::default_instance()
    {    
    if (!ST_TextMargin::default_instance_)
    {
        ST_TextMargin::default_instance_ = new ST_TextMargin();
    }
    return *ST_TextMargin::default_instance_;
    }

ST_TextMargin* ST_TextMargin::default_instance_ = NULL;

    // ST_TextIndent
    ST_TextIndent::ST_TextIndent()

    {
    }
    ST_TextIndent::ST_TextIndent(const ST_Coordinate32Unqualified& _ST_Coordinate32Unqualified)

    {
    }
    const ST_TextIndent& ST_TextIndent::default_instance()
    {    
    if (!ST_TextIndent::default_instance_)
    {
        ST_TextIndent::default_instance_ = new ST_TextIndent();
    }
    return *ST_TextIndent::default_instance_;
    }

ST_TextIndent* ST_TextIndent::default_instance_ = NULL;

    // ST_TextTabAlignType
    ST_TextTabAlignType::ST_TextTabAlignType()
    :m_has_type(false)
    {
    }
    ST_TextTabAlignType::ST_TextTabAlignType(const ST_TextTabAlignType::Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
    }
    bool ST_TextTabAlignType::has_type() const
    {    
    return m_has_type;
    }

    void ST_TextTabAlignType::set_type(const ST_TextTabAlignType::Type& _type)
    {    
    m_has_type = true;
    m_type = _type;
    }

    const ST_TextTabAlignType::Type& ST_TextTabAlignType::get_type() const
    {    
                return m_type;
                }

    std::string ST_TextTabAlignType::toString() const
    {    
    return ST_TextTabAlignType::TypeStrList[m_type];
    }

    void ST_TextTabAlignType::clear()
    {    
    m_has_type = false;
    }

    void ST_TextTabAlignType::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_type)
    {
    _outStream << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_TextTabAlignType& ST_TextTabAlignType::default_instance()
    {    
    if (!ST_TextTabAlignType::default_instance_)
    {
        ST_TextTabAlignType::default_instance_ = new ST_TextTabAlignType();
    }
    return *ST_TextTabAlignType::default_instance_;
    }

    const std::string ST_TextTabAlignType::TypeStrList[] =
    {
        "l",
        "ctr",
        "r",
        "dec"
    };
ST_TextTabAlignType* ST_TextTabAlignType::default_instance_ = NULL;

    // ST_TextAlignType
    ST_TextAlignType::ST_TextAlignType()
    :m_has_type(false)
    {
    }
    ST_TextAlignType::ST_TextAlignType(const ST_TextAlignType::Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
    }
    bool ST_TextAlignType::has_type() const
    {    
    return m_has_type;
    }

    void ST_TextAlignType::set_type(const ST_TextAlignType::Type& _type)
    {    
    m_has_type = true;
    m_type = _type;
    }

    const ST_TextAlignType::Type& ST_TextAlignType::get_type() const
    {    
                return m_type;
                }

    std::string ST_TextAlignType::toString() const
    {    
    return ST_TextAlignType::TypeStrList[m_type];
    }

    void ST_TextAlignType::clear()
    {    
    m_has_type = false;
    }

    void ST_TextAlignType::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_type)
    {
    _outStream << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_TextAlignType& ST_TextAlignType::default_instance()
    {    
    if (!ST_TextAlignType::default_instance_)
    {
        ST_TextAlignType::default_instance_ = new ST_TextAlignType();
    }
    return *ST_TextAlignType::default_instance_;
    }

    const std::string ST_TextAlignType::TypeStrList[] =
    {
        "l",
        "ctr",
        "r",
        "just",
        "justLow",
        "dist",
        "thaiDist"
    };
ST_TextAlignType* ST_TextAlignType::default_instance_ = NULL;

    // ST_TextFontAlignType
    ST_TextFontAlignType::ST_TextFontAlignType()
    :m_has_type(false)
    {
    }
    ST_TextFontAlignType::ST_TextFontAlignType(const ST_TextFontAlignType::Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
    }
    bool ST_TextFontAlignType::has_type() const
    {    
    return m_has_type;
    }

    void ST_TextFontAlignType::set_type(const ST_TextFontAlignType::Type& _type)
    {    
    m_has_type = true;
    m_type = _type;
    }

    const ST_TextFontAlignType::Type& ST_TextFontAlignType::get_type() const
    {    
                return m_type;
                }

    std::string ST_TextFontAlignType::toString() const
    {    
    return ST_TextFontAlignType::TypeStrList[m_type];
    }

    void ST_TextFontAlignType::clear()
    {    
    m_has_type = false;
    }

    void ST_TextFontAlignType::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_type)
    {
    _outStream << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_TextFontAlignType& ST_TextFontAlignType::default_instance()
    {    
    if (!ST_TextFontAlignType::default_instance_)
    {
        ST_TextFontAlignType::default_instance_ = new ST_TextFontAlignType();
    }
    return *ST_TextFontAlignType::default_instance_;
    }

    const std::string ST_TextFontAlignType::TypeStrList[] =
    {
        "auto",
        "t",
        "ctr",
        "base",
        "b"
    };
ST_TextFontAlignType* ST_TextFontAlignType::default_instance_ = NULL;

    // ST_TextIndentLevelType
    ST_TextIndentLevelType::ST_TextIndentLevelType()
    :m_has_int(false),
    m_int(0)
    {
    }
    ST_TextIndentLevelType::ST_TextIndentLevelType(const XSD::int_& _int)
    :m_has_int(true)
    {
    
    set_int(m_int);
    }
    bool ST_TextIndentLevelType::has_int() const
    {    
    return m_has_int;
    }

    void ST_TextIndentLevelType::set_int(const XSD::int_& _int)
    {    assert(0 <= _int);
    assert(_int <= 8);
    
    m_has_int = true;
    m_int = _int;
    }

    const XSD::int_& ST_TextIndentLevelType::get_int() const
    {    
    return m_int;
    }

    void ST_TextIndentLevelType::clear()
    {    
    m_has_int = false;
    m_int = 0;;
    }

    void ST_TextIndentLevelType::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_int)
    {
        _outStream << " " << _attrName << "=\"" << m_int << "\"";;
    }
    }

    const ST_TextIndentLevelType& ST_TextIndentLevelType::default_instance()
    {    
    if (!ST_TextIndentLevelType::default_instance_)
    {
        ST_TextIndentLevelType::default_instance_ = new ST_TextIndentLevelType();
    }
    return *ST_TextIndentLevelType::default_instance_;
    }

    std::string ST_TextIndentLevelType::toString() const
    {    
    std::stringstream strStream;
    strStream << get_int();
    return strStream.str();
    }

ST_TextIndentLevelType* ST_TextIndentLevelType::default_instance_ = NULL;

    // CT_AudioFile
    bool CT_AudioFile::has_extLst() const
    {    
    return m_has_extLst;
    }

    CT_OfficeArtExtensionList* CT_AudioFile::mutable_extLst()
    {    
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new CT_OfficeArtExtensionList();
    }
    return m_extLst;
    }

    const CT_OfficeArtExtensionList& CT_AudioFile::get_extLst() const
    {    
    if (m_extLst)
    {
        return *m_extLst;
    }
    return CT_OfficeArtExtensionList::default_instance();
    }

    void CT_AudioFile::clear()
    {    
    m_has_r_link_attr = false;
    
    if (m_r_link_attr)
    {
        delete m_r_link_attr;
        m_r_link_attr = NULL;
    }
    
    
    m_has_contentType_attr = false;
    m_contentType_attr.clear();
    }

    void CT_AudioFile::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
    if (m_has_r_link_attr)
    {
        m_r_link_attr->toXmlAttr("link", _outStream);
    }
    
    
    if (m_has_contentType_attr)
    {
        _outStream << " " << "contentType" << "=\"" << m_contentType_attr << "\"";
    }
    
            _outStream << ">";
            
    if (m_has_extLst)
    {
        m_extLst->toXmlElem("extLst", "", _outStream);;
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_AudioFile& CT_AudioFile::default_instance()
    {    
    if (!CT_AudioFile::default_instance_)
    {
        CT_AudioFile::default_instance_ = new CT_AudioFile();
    }
    return *CT_AudioFile::default_instance_;
    }

    bool CT_AudioFile::has_r_link_attr() const
    {    
    return m_has_r_link_attr;
    }

    void CT_AudioFile::set_r_link_attr(const ns_r::ST_RelationshipId& _r_link_attr)
    {    
    m_has_r_link_attr = true;
    m_r_link_attr = new ns_r::ST_RelationshipId(_r_link_attr);
    }

    const ns_r::ST_RelationshipId& CT_AudioFile::get_r_link_attr() const
    {    
    if (m_r_link_attr)
    {
        return *m_r_link_attr;
    }
    return ns_r::ST_RelationshipId::default_instance();
    }

    bool CT_AudioFile::has_contentType_attr() const
    {    
    return m_has_contentType_attr;
    }

    void CT_AudioFile::set_contentType_attr(const XSD::string_& _contentType_attr)
    {    
    m_has_contentType_attr = true;
    m_contentType_attr = _contentType_attr;
    }

    const XSD::string_& CT_AudioFile::get_contentType_attr() const
    {    
    return m_contentType_attr;
    }

CT_AudioFile* CT_AudioFile::default_instance_ = NULL;

    // CT_VideoFile
    bool CT_VideoFile::has_extLst() const
    {    
    return m_has_extLst;
    }

    CT_OfficeArtExtensionList* CT_VideoFile::mutable_extLst()
    {    
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new CT_OfficeArtExtensionList();
    }
    return m_extLst;
    }

    const CT_OfficeArtExtensionList& CT_VideoFile::get_extLst() const
    {    
    if (m_extLst)
    {
        return *m_extLst;
    }
    return CT_OfficeArtExtensionList::default_instance();
    }

    void CT_VideoFile::clear()
    {    
    m_has_r_link_attr = false;
    
    if (m_r_link_attr)
    {
        delete m_r_link_attr;
        m_r_link_attr = NULL;
    }
    
    
    m_has_contentType_attr = false;
    m_contentType_attr.clear();
    }

    void CT_VideoFile::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
    if (m_has_r_link_attr)
    {
        m_r_link_attr->toXmlAttr("link", _outStream);
    }
    
    
    if (m_has_contentType_attr)
    {
        _outStream << " " << "contentType" << "=\"" << m_contentType_attr << "\"";
    }
    
            _outStream << ">";
            
    if (m_has_extLst)
    {
        m_extLst->toXmlElem("extLst", "", _outStream);;
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_VideoFile& CT_VideoFile::default_instance()
    {    
    if (!CT_VideoFile::default_instance_)
    {
        CT_VideoFile::default_instance_ = new CT_VideoFile();
    }
    return *CT_VideoFile::default_instance_;
    }

    bool CT_VideoFile::has_r_link_attr() const
    {    
    return m_has_r_link_attr;
    }

    void CT_VideoFile::set_r_link_attr(const ns_r::ST_RelationshipId& _r_link_attr)
    {    
    m_has_r_link_attr = true;
    m_r_link_attr = new ns_r::ST_RelationshipId(_r_link_attr);
    }

    const ns_r::ST_RelationshipId& CT_VideoFile::get_r_link_attr() const
    {    
    if (m_r_link_attr)
    {
        return *m_r_link_attr;
    }
    return ns_r::ST_RelationshipId::default_instance();
    }

    bool CT_VideoFile::has_contentType_attr() const
    {    
    return m_has_contentType_attr;
    }

    void CT_VideoFile::set_contentType_attr(const XSD::string_& _contentType_attr)
    {    
    m_has_contentType_attr = true;
    m_contentType_attr = _contentType_attr;
    }

    const XSD::string_& CT_VideoFile::get_contentType_attr() const
    {    
    return m_contentType_attr;
    }

CT_VideoFile* CT_VideoFile::default_instance_ = NULL;

    // CT_QuickTimeFile
    bool CT_QuickTimeFile::has_extLst() const
    {    
    return m_has_extLst;
    }

    CT_OfficeArtExtensionList* CT_QuickTimeFile::mutable_extLst()
    {    
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new CT_OfficeArtExtensionList();
    }
    return m_extLst;
    }

    const CT_OfficeArtExtensionList& CT_QuickTimeFile::get_extLst() const
    {    
    if (m_extLst)
    {
        return *m_extLst;
    }
    return CT_OfficeArtExtensionList::default_instance();
    }

    void CT_QuickTimeFile::clear()
    {    
    m_has_r_link_attr = false;
    
    if (m_r_link_attr)
    {
        delete m_r_link_attr;
        m_r_link_attr = NULL;
    }
    
    }

    void CT_QuickTimeFile::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
    if (m_has_r_link_attr)
    {
        m_r_link_attr->toXmlAttr("link", _outStream);
    }
    
            _outStream << ">";
            
    if (m_has_extLst)
    {
        m_extLst->toXmlElem("extLst", "", _outStream);;
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_QuickTimeFile& CT_QuickTimeFile::default_instance()
    {    
    if (!CT_QuickTimeFile::default_instance_)
    {
        CT_QuickTimeFile::default_instance_ = new CT_QuickTimeFile();
    }
    return *CT_QuickTimeFile::default_instance_;
    }

    bool CT_QuickTimeFile::has_r_link_attr() const
    {    
    return m_has_r_link_attr;
    }

    void CT_QuickTimeFile::set_r_link_attr(const ns_r::ST_RelationshipId& _r_link_attr)
    {    
    m_has_r_link_attr = true;
    m_r_link_attr = new ns_r::ST_RelationshipId(_r_link_attr);
    }

    const ns_r::ST_RelationshipId& CT_QuickTimeFile::get_r_link_attr() const
    {    
    if (m_r_link_attr)
    {
        return *m_r_link_attr;
    }
    return ns_r::ST_RelationshipId::default_instance();
    }

CT_QuickTimeFile* CT_QuickTimeFile::default_instance_ = NULL;

    // CT_AudioCDTime
    void CT_AudioCDTime::clear()
    {    
    m_has_track_attr = false;
    m_track_attr = 0;
    
    m_has_time_attr = false;
    m_time_attr = 0;
    }

    void CT_AudioCDTime::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
    if (m_has_track_attr)
    {
        _outStream << " " << "track" << "=\"" << m_track_attr << "\"";
    }
    
    
    if (m_has_time_attr)
    {
        _outStream << " " << "time" << "=\"" << m_time_attr << "\"";
    }
    
            _outStream << ">";
            
            _outStream << "</" << _elemName << ">";
                }

    const CT_AudioCDTime& CT_AudioCDTime::default_instance()
    {    
    if (!CT_AudioCDTime::default_instance_)
    {
        CT_AudioCDTime::default_instance_ = new CT_AudioCDTime();
    }
    return *CT_AudioCDTime::default_instance_;
    }

    bool CT_AudioCDTime::has_track_attr() const
    {    
    return m_has_track_attr;
    }

    void CT_AudioCDTime::set_track_attr(const XSD::unsignedByte_& _track_attr)
    {    
    m_has_track_attr = true;
    m_track_attr = _track_attr;
    }

    const XSD::unsignedByte_& CT_AudioCDTime::get_track_attr() const
    {    
    return m_track_attr;
    }

    bool CT_AudioCDTime::has_time_attr() const
    {    
    return m_has_time_attr;
    }

    void CT_AudioCDTime::set_time_attr(const XSD::unsignedInt_& _time_attr)
    {    
    m_has_time_attr = true;
    m_time_attr = _time_attr;
    }

    const XSD::unsignedInt_& CT_AudioCDTime::get_time_attr() const
    {    
    return m_time_attr;
    }

CT_AudioCDTime* CT_AudioCDTime::default_instance_ = NULL;

    // CT_AudioCD
    bool CT_AudioCD::has_st() const
    {    
    return m_has_st;
    }

    CT_AudioCDTime* CT_AudioCD::mutable_st()
    {    
    m_has_st = true;
    if (!m_st)
    {
        m_st = new CT_AudioCDTime();
    }
    return m_st;
    }

    const CT_AudioCDTime& CT_AudioCD::get_st() const
    {    
    if (m_st)
    {
        return *m_st;
    }
    return CT_AudioCDTime::default_instance();
    }

    bool CT_AudioCD::has_end() const
    {    
    return m_has_end;
    }

    CT_AudioCDTime* CT_AudioCD::mutable_end()
    {    
    m_has_end = true;
    if (!m_end)
    {
        m_end = new CT_AudioCDTime();
    }
    return m_end;
    }

    const CT_AudioCDTime& CT_AudioCD::get_end() const
    {    
    if (m_end)
    {
        return *m_end;
    }
    return CT_AudioCDTime::default_instance();
    }

    bool CT_AudioCD::has_extLst() const
    {    
    return m_has_extLst;
    }

    CT_OfficeArtExtensionList* CT_AudioCD::mutable_extLst()
    {    
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new CT_OfficeArtExtensionList();
    }
    return m_extLst;
    }

    const CT_OfficeArtExtensionList& CT_AudioCD::get_extLst() const
    {    
    if (m_extLst)
    {
        return *m_extLst;
    }
    return CT_OfficeArtExtensionList::default_instance();
    }

    void CT_AudioCD::clear()
    {    }

    void CT_AudioCD::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
            _outStream << ">";
            
    if (m_has_st)
    {
        m_st->toXmlElem("st", "", _outStream);;
    }
    
    if (m_has_end)
    {
        m_end->toXmlElem("end", "", _outStream);;
    }
    
    if (m_has_extLst)
    {
        m_extLst->toXmlElem("extLst", "", _outStream);;
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_AudioCD& CT_AudioCD::default_instance()
    {    
    if (!CT_AudioCD::default_instance_)
    {
        CT_AudioCD::default_instance_ = new CT_AudioCD();
    }
    return *CT_AudioCD::default_instance_;
    }

CT_AudioCD* CT_AudioCD::default_instance_ = NULL;

    // CT_ColorScheme
    bool CT_ColorScheme::has_dk1() const
    {    
    return m_has_dk1;
    }

    CT_Color* CT_ColorScheme::mutable_dk1()
    {    
    m_has_dk1 = true;
    if (!m_dk1)
    {
        m_dk1 = new CT_Color();
    }
    return m_dk1;
    }

    const CT_Color& CT_ColorScheme::get_dk1() const
    {    
    if (m_dk1)
    {
        return *m_dk1;
    }
    return CT_Color::default_instance();
    }

    bool CT_ColorScheme::has_lt1() const
    {    
    return m_has_lt1;
    }

    CT_Color* CT_ColorScheme::mutable_lt1()
    {    
    m_has_lt1 = true;
    if (!m_lt1)
    {
        m_lt1 = new CT_Color();
    }
    return m_lt1;
    }

    const CT_Color& CT_ColorScheme::get_lt1() const
    {    
    if (m_lt1)
    {
        return *m_lt1;
    }
    return CT_Color::default_instance();
    }

    bool CT_ColorScheme::has_dk2() const
    {    
    return m_has_dk2;
    }

    CT_Color* CT_ColorScheme::mutable_dk2()
    {    
    m_has_dk2 = true;
    if (!m_dk2)
    {
        m_dk2 = new CT_Color();
    }
    return m_dk2;
    }

    const CT_Color& CT_ColorScheme::get_dk2() const
    {    
    if (m_dk2)
    {
        return *m_dk2;
    }
    return CT_Color::default_instance();
    }

    bool CT_ColorScheme::has_lt2() const
    {    
    return m_has_lt2;
    }

    CT_Color* CT_ColorScheme::mutable_lt2()
    {    
    m_has_lt2 = true;
    if (!m_lt2)
    {
        m_lt2 = new CT_Color();
    }
    return m_lt2;
    }

    const CT_Color& CT_ColorScheme::get_lt2() const
    {    
    if (m_lt2)
    {
        return *m_lt2;
    }
    return CT_Color::default_instance();
    }

    bool CT_ColorScheme::has_accent1() const
    {    
    return m_has_accent1;
    }

    CT_Color* CT_ColorScheme::mutable_accent1()
    {    
    m_has_accent1 = true;
    if (!m_accent1)
    {
        m_accent1 = new CT_Color();
    }
    return m_accent1;
    }

    const CT_Color& CT_ColorScheme::get_accent1() const
    {    
    if (m_accent1)
    {
        return *m_accent1;
    }
    return CT_Color::default_instance();
    }

    bool CT_ColorScheme::has_accent2() const
    {    
    return m_has_accent2;
    }

    CT_Color* CT_ColorScheme::mutable_accent2()
    {    
    m_has_accent2 = true;
    if (!m_accent2)
    {
        m_accent2 = new CT_Color();
    }
    return m_accent2;
    }

    const CT_Color& CT_ColorScheme::get_accent2() const
    {    
    if (m_accent2)
    {
        return *m_accent2;
    }
    return CT_Color::default_instance();
    }

    bool CT_ColorScheme::has_accent3() const
    {    
    return m_has_accent3;
    }

    CT_Color* CT_ColorScheme::mutable_accent3()
    {    
    m_has_accent3 = true;
    if (!m_accent3)
    {
        m_accent3 = new CT_Color();
    }
    return m_accent3;
    }

    const CT_Color& CT_ColorScheme::get_accent3() const
    {    
    if (m_accent3)
    {
        return *m_accent3;
    }
    return CT_Color::default_instance();
    }

    bool CT_ColorScheme::has_accent4() const
    {    
    return m_has_accent4;
    }

    CT_Color* CT_ColorScheme::mutable_accent4()
    {    
    m_has_accent4 = true;
    if (!m_accent4)
    {
        m_accent4 = new CT_Color();
    }
    return m_accent4;
    }

    const CT_Color& CT_ColorScheme::get_accent4() const
    {    
    if (m_accent4)
    {
        return *m_accent4;
    }
    return CT_Color::default_instance();
    }

    bool CT_ColorScheme::has_accent5() const
    {    
    return m_has_accent5;
    }

    CT_Color* CT_ColorScheme::mutable_accent5()
    {    
    m_has_accent5 = true;
    if (!m_accent5)
    {
        m_accent5 = new CT_Color();
    }
    return m_accent5;
    }

    const CT_Color& CT_ColorScheme::get_accent5() const
    {    
    if (m_accent5)
    {
        return *m_accent5;
    }
    return CT_Color::default_instance();
    }

    bool CT_ColorScheme::has_accent6() const
    {    
    return m_has_accent6;
    }

    CT_Color* CT_ColorScheme::mutable_accent6()
    {    
    m_has_accent6 = true;
    if (!m_accent6)
    {
        m_accent6 = new CT_Color();
    }
    return m_accent6;
    }

    const CT_Color& CT_ColorScheme::get_accent6() const
    {    
    if (m_accent6)
    {
        return *m_accent6;
    }
    return CT_Color::default_instance();
    }

    bool CT_ColorScheme::has_hlink() const
    {    
    return m_has_hlink;
    }

    CT_Color* CT_ColorScheme::mutable_hlink()
    {    
    m_has_hlink = true;
    if (!m_hlink)
    {
        m_hlink = new CT_Color();
    }
    return m_hlink;
    }

    const CT_Color& CT_ColorScheme::get_hlink() const
    {    
    if (m_hlink)
    {
        return *m_hlink;
    }
    return CT_Color::default_instance();
    }

    bool CT_ColorScheme::has_folHlink() const
    {    
    return m_has_folHlink;
    }

    CT_Color* CT_ColorScheme::mutable_folHlink()
    {    
    m_has_folHlink = true;
    if (!m_folHlink)
    {
        m_folHlink = new CT_Color();
    }
    return m_folHlink;
    }

    const CT_Color& CT_ColorScheme::get_folHlink() const
    {    
    if (m_folHlink)
    {
        return *m_folHlink;
    }
    return CT_Color::default_instance();
    }

    bool CT_ColorScheme::has_extLst() const
    {    
    return m_has_extLst;
    }

    CT_OfficeArtExtensionList* CT_ColorScheme::mutable_extLst()
    {    
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new CT_OfficeArtExtensionList();
    }
    return m_extLst;
    }

    const CT_OfficeArtExtensionList& CT_ColorScheme::get_extLst() const
    {    
    if (m_extLst)
    {
        return *m_extLst;
    }
    return CT_OfficeArtExtensionList::default_instance();
    }

    void CT_ColorScheme::clear()
    {    
    m_has_name_attr = false;
    m_name_attr.clear();
    }

    void CT_ColorScheme::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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
    
            _outStream << ">";
            
    if (m_has_dk1)
    {
        m_dk1->toXmlElem("dk1", "", _outStream);;
    }
    
    if (m_has_lt1)
    {
        m_lt1->toXmlElem("lt1", "", _outStream);;
    }
    
    if (m_has_dk2)
    {
        m_dk2->toXmlElem("dk2", "", _outStream);;
    }
    
    if (m_has_lt2)
    {
        m_lt2->toXmlElem("lt2", "", _outStream);;
    }
    
    if (m_has_accent1)
    {
        m_accent1->toXmlElem("accent1", "", _outStream);;
    }
    
    if (m_has_accent2)
    {
        m_accent2->toXmlElem("accent2", "", _outStream);;
    }
    
    if (m_has_accent3)
    {
        m_accent3->toXmlElem("accent3", "", _outStream);;
    }
    
    if (m_has_accent4)
    {
        m_accent4->toXmlElem("accent4", "", _outStream);;
    }
    
    if (m_has_accent5)
    {
        m_accent5->toXmlElem("accent5", "", _outStream);;
    }
    
    if (m_has_accent6)
    {
        m_accent6->toXmlElem("accent6", "", _outStream);;
    }
    
    if (m_has_hlink)
    {
        m_hlink->toXmlElem("hlink", "", _outStream);;
    }
    
    if (m_has_folHlink)
    {
        m_folHlink->toXmlElem("folHlink", "", _outStream);;
    }
    
    if (m_has_extLst)
    {
        m_extLst->toXmlElem("extLst", "", _outStream);;
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_ColorScheme& CT_ColorScheme::default_instance()
    {    
    if (!CT_ColorScheme::default_instance_)
    {
        CT_ColorScheme::default_instance_ = new CT_ColorScheme();
    }
    return *CT_ColorScheme::default_instance_;
    }

    bool CT_ColorScheme::has_name_attr() const
    {    
    return m_has_name_attr;
    }

    void CT_ColorScheme::set_name_attr(const XSD::string_& _name_attr)
    {    
    m_has_name_attr = true;
    m_name_attr = _name_attr;
    }

    const XSD::string_& CT_ColorScheme::get_name_attr() const
    {    
    return m_name_attr;
    }

CT_ColorScheme* CT_ColorScheme::default_instance_ = NULL;

    // CT_CustomColor
    bool CT_CustomColor::has_scrgbClr() const
    {    
    return m_has_scrgbClr;
    }

    CT_ScRgbColor* CT_CustomColor::mutable_scrgbClr()
    {    
    
    m_has_srgbClr = false;
    
    if (m_srgbClr)
    {
        delete m_srgbClr;
        m_srgbClr = NULL;
    }
    ;
    
    m_has_hslClr = false;
    
    if (m_hslClr)
    {
        delete m_hslClr;
        m_hslClr = NULL;
    }
    ;
    
    m_has_sysClr = false;
    
    if (m_sysClr)
    {
        delete m_sysClr;
        m_sysClr = NULL;
    }
    ;
    
    m_has_schemeClr = false;
    
    if (m_schemeClr)
    {
        delete m_schemeClr;
        m_schemeClr = NULL;
    }
    ;
    
    m_has_prstClr = false;
    
    if (m_prstClr)
    {
        delete m_prstClr;
        m_prstClr = NULL;
    }
    ;
    
    m_has_scrgbClr = true;
    if (!m_scrgbClr)
    {
        m_scrgbClr = new CT_ScRgbColor();
    }
    return m_scrgbClr;
    }

    const CT_ScRgbColor& CT_CustomColor::get_scrgbClr() const
    {    
    if (m_scrgbClr)
    {
        return *m_scrgbClr;
    }
    return CT_ScRgbColor::default_instance();
    }

    bool CT_CustomColor::has_srgbClr() const
    {    
    return m_has_srgbClr;
    }

    CT_SRgbColor* CT_CustomColor::mutable_srgbClr()
    {    
    
    m_has_scrgbClr = false;
    
    if (m_scrgbClr)
    {
        delete m_scrgbClr;
        m_scrgbClr = NULL;
    }
    ;
    
    m_has_hslClr = false;
    
    if (m_hslClr)
    {
        delete m_hslClr;
        m_hslClr = NULL;
    }
    ;
    
    m_has_sysClr = false;
    
    if (m_sysClr)
    {
        delete m_sysClr;
        m_sysClr = NULL;
    }
    ;
    
    m_has_schemeClr = false;
    
    if (m_schemeClr)
    {
        delete m_schemeClr;
        m_schemeClr = NULL;
    }
    ;
    
    m_has_prstClr = false;
    
    if (m_prstClr)
    {
        delete m_prstClr;
        m_prstClr = NULL;
    }
    ;
    
    m_has_srgbClr = true;
    if (!m_srgbClr)
    {
        m_srgbClr = new CT_SRgbColor();
    }
    return m_srgbClr;
    }

    const CT_SRgbColor& CT_CustomColor::get_srgbClr() const
    {    
    if (m_srgbClr)
    {
        return *m_srgbClr;
    }
    return CT_SRgbColor::default_instance();
    }

    bool CT_CustomColor::has_hslClr() const
    {    
    return m_has_hslClr;
    }

    CT_HslColor* CT_CustomColor::mutable_hslClr()
    {    
    
    m_has_scrgbClr = false;
    
    if (m_scrgbClr)
    {
        delete m_scrgbClr;
        m_scrgbClr = NULL;
    }
    ;
    
    m_has_srgbClr = false;
    
    if (m_srgbClr)
    {
        delete m_srgbClr;
        m_srgbClr = NULL;
    }
    ;
    
    m_has_sysClr = false;
    
    if (m_sysClr)
    {
        delete m_sysClr;
        m_sysClr = NULL;
    }
    ;
    
    m_has_schemeClr = false;
    
    if (m_schemeClr)
    {
        delete m_schemeClr;
        m_schemeClr = NULL;
    }
    ;
    
    m_has_prstClr = false;
    
    if (m_prstClr)
    {
        delete m_prstClr;
        m_prstClr = NULL;
    }
    ;
    
    m_has_hslClr = true;
    if (!m_hslClr)
    {
        m_hslClr = new CT_HslColor();
    }
    return m_hslClr;
    }

    const CT_HslColor& CT_CustomColor::get_hslClr() const
    {    
    if (m_hslClr)
    {
        return *m_hslClr;
    }
    return CT_HslColor::default_instance();
    }

    bool CT_CustomColor::has_sysClr() const
    {    
    return m_has_sysClr;
    }

    CT_SystemColor* CT_CustomColor::mutable_sysClr()
    {    
    
    m_has_scrgbClr = false;
    
    if (m_scrgbClr)
    {
        delete m_scrgbClr;
        m_scrgbClr = NULL;
    }
    ;
    
    m_has_srgbClr = false;
    
    if (m_srgbClr)
    {
        delete m_srgbClr;
        m_srgbClr = NULL;
    }
    ;
    
    m_has_hslClr = false;
    
    if (m_hslClr)
    {
        delete m_hslClr;
        m_hslClr = NULL;
    }
    ;
    
    m_has_schemeClr = false;
    
    if (m_schemeClr)
    {
        delete m_schemeClr;
        m_schemeClr = NULL;
    }
    ;
    
    m_has_prstClr = false;
    
    if (m_prstClr)
    {
        delete m_prstClr;
        m_prstClr = NULL;
    }
    ;
    
    m_has_sysClr = true;
    if (!m_sysClr)
    {
        m_sysClr = new CT_SystemColor();
    }
    return m_sysClr;
    }

    const CT_SystemColor& CT_CustomColor::get_sysClr() const
    {    
    if (m_sysClr)
    {
        return *m_sysClr;
    }
    return CT_SystemColor::default_instance();
    }

    bool CT_CustomColor::has_schemeClr() const
    {    
    return m_has_schemeClr;
    }

    CT_SchemeColor* CT_CustomColor::mutable_schemeClr()
    {    
    
    m_has_scrgbClr = false;
    
    if (m_scrgbClr)
    {
        delete m_scrgbClr;
        m_scrgbClr = NULL;
    }
    ;
    
    m_has_srgbClr = false;
    
    if (m_srgbClr)
    {
        delete m_srgbClr;
        m_srgbClr = NULL;
    }
    ;
    
    m_has_hslClr = false;
    
    if (m_hslClr)
    {
        delete m_hslClr;
        m_hslClr = NULL;
    }
    ;
    
    m_has_sysClr = false;
    
    if (m_sysClr)
    {
        delete m_sysClr;
        m_sysClr = NULL;
    }
    ;
    
    m_has_prstClr = false;
    
    if (m_prstClr)
    {
        delete m_prstClr;
        m_prstClr = NULL;
    }
    ;
    
    m_has_schemeClr = true;
    if (!m_schemeClr)
    {
        m_schemeClr = new CT_SchemeColor();
    }
    return m_schemeClr;
    }

    const CT_SchemeColor& CT_CustomColor::get_schemeClr() const
    {    
    if (m_schemeClr)
    {
        return *m_schemeClr;
    }
    return CT_SchemeColor::default_instance();
    }

    bool CT_CustomColor::has_prstClr() const
    {    
    return m_has_prstClr;
    }

    CT_PresetColor* CT_CustomColor::mutable_prstClr()
    {    
    
    m_has_scrgbClr = false;
    
    if (m_scrgbClr)
    {
        delete m_scrgbClr;
        m_scrgbClr = NULL;
    }
    ;
    
    m_has_srgbClr = false;
    
    if (m_srgbClr)
    {
        delete m_srgbClr;
        m_srgbClr = NULL;
    }
    ;
    
    m_has_hslClr = false;
    
    if (m_hslClr)
    {
        delete m_hslClr;
        m_hslClr = NULL;
    }
    ;
    
    m_has_sysClr = false;
    
    if (m_sysClr)
    {
        delete m_sysClr;
        m_sysClr = NULL;
    }
    ;
    
    m_has_schemeClr = false;
    
    if (m_schemeClr)
    {
        delete m_schemeClr;
        m_schemeClr = NULL;
    }
    ;
    
    m_has_prstClr = true;
    if (!m_prstClr)
    {
        m_prstClr = new CT_PresetColor();
    }
    return m_prstClr;
    }

    const CT_PresetColor& CT_CustomColor::get_prstClr() const
    {    
    if (m_prstClr)
    {
        return *m_prstClr;
    }
    return CT_PresetColor::default_instance();
    }

    void CT_CustomColor::clear()
    {    
    m_has_name_attr = false;
    m_name_attr.clear();
    }

    void CT_CustomColor::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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
    
            _outStream << ">";
            
    if (m_has_scrgbClr)
    {
        m_scrgbClr->toXmlElem("scrgbClr", "", _outStream);;
    }
    
    if (m_has_srgbClr)
    {
        m_srgbClr->toXmlElem("srgbClr", "", _outStream);;
    }
    
    if (m_has_hslClr)
    {
        m_hslClr->toXmlElem("hslClr", "", _outStream);;
    }
    
    if (m_has_sysClr)
    {
        m_sysClr->toXmlElem("sysClr", "", _outStream);;
    }
    
    if (m_has_schemeClr)
    {
        m_schemeClr->toXmlElem("schemeClr", "", _outStream);;
    }
    
    if (m_has_prstClr)
    {
        m_prstClr->toXmlElem("prstClr", "", _outStream);;
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_CustomColor& CT_CustomColor::default_instance()
    {    
    if (!CT_CustomColor::default_instance_)
    {
        CT_CustomColor::default_instance_ = new CT_CustomColor();
    }
    return *CT_CustomColor::default_instance_;
    }

    bool CT_CustomColor::has_name_attr() const
    {    
    return m_has_name_attr;
    }

    void CT_CustomColor::set_name_attr(const XSD::string_& _name_attr)
    {    
    m_has_name_attr = true;
    m_name_attr = _name_attr;
    }

    const XSD::string_& CT_CustomColor::get_name_attr() const
    {    
    return m_name_attr;
    }

CT_CustomColor* CT_CustomColor::default_instance_ = NULL;

    // CT_SupplementalFont
    void CT_SupplementalFont::clear()
    {    
    m_has_script_attr = false;
    m_script_attr.clear();
    
    m_has_typeface_attr = false;
    
    if (m_typeface_attr)
    {
        delete m_typeface_attr;
        m_typeface_attr = NULL;
    }
    
    }

    void CT_SupplementalFont::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
    if (m_has_script_attr)
    {
        _outStream << " " << "script" << "=\"" << m_script_attr << "\"";
    }
    
    
    if (m_has_typeface_attr)
    {
        m_typeface_attr->toXmlAttr("typeface", _outStream);
    }
    
            _outStream << ">";
            
            _outStream << "</" << _elemName << ">";
                }

    const CT_SupplementalFont& CT_SupplementalFont::default_instance()
    {    
    if (!CT_SupplementalFont::default_instance_)
    {
        CT_SupplementalFont::default_instance_ = new CT_SupplementalFont();
    }
    return *CT_SupplementalFont::default_instance_;
    }

    bool CT_SupplementalFont::has_script_attr() const
    {    
    return m_has_script_attr;
    }

    void CT_SupplementalFont::set_script_attr(const XSD::string_& _script_attr)
    {    
    m_has_script_attr = true;
    m_script_attr = _script_attr;
    }

    const XSD::string_& CT_SupplementalFont::get_script_attr() const
    {    
    return m_script_attr;
    }

    bool CT_SupplementalFont::has_typeface_attr() const
    {    
    return m_has_typeface_attr;
    }

    void CT_SupplementalFont::set_typeface_attr(const ST_TextTypeface& _typeface_attr)
    {    
    m_has_typeface_attr = true;
    m_typeface_attr = new ST_TextTypeface(_typeface_attr);
    }

    const ST_TextTypeface& CT_SupplementalFont::get_typeface_attr() const
    {    
    if (m_typeface_attr)
    {
        return *m_typeface_attr;
    }
    return ST_TextTypeface::default_instance();
    }

CT_SupplementalFont* CT_SupplementalFont::default_instance_ = NULL;

    // CT_CustomColorList
    CT_CustomColor* CT_CustomColorList::add_custClr()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_CustomColor* pNewChild = pChildGroup->mutable_custClr();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    void CT_CustomColorList::clear()
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

    void CT_CustomColorList::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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
            if ((*iter)->has_custClr())
            {
                (*iter)->get_custClr().toXmlElem("custClr", "", _outStream);
            }
        }
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_CustomColorList& CT_CustomColorList::default_instance()
    {    
    if (!CT_CustomColorList::default_instance_)
    {
        CT_CustomColorList::default_instance_ = new CT_CustomColorList();
    }
    return *CT_CustomColorList::default_instance_;
    }


    // CT_CustomColorList::ChildGroup_1
    bool CT_CustomColorList::ChildGroup_1::has_custClr() const
    {    
    return m_has_custClr;
    }

    CT_CustomColor* CT_CustomColorList::ChildGroup_1::mutable_custClr()
    {    
    
    m_has_custClr = true;
    if (!m_custClr)
    {
        m_custClr = new CT_CustomColor();
    }
    return m_custClr;
    }

    const CT_CustomColor& CT_CustomColorList::ChildGroup_1::get_custClr() const
    {    
    if (m_custClr)
    {
        return *m_custClr;
    }
    return CT_CustomColor::default_instance();
    }

CT_CustomColorList* CT_CustomColorList::default_instance_ = NULL;

    // CT_FontCollection
    bool CT_FontCollection::has_latin() const
    {    
    return m_has_latin;
    }

    CT_TextFont* CT_FontCollection::mutable_latin()
    {    
    m_has_latin = true;
    if (!m_latin)
    {
        m_latin = new CT_TextFont();
    }
    return m_latin;
    }

    const CT_TextFont& CT_FontCollection::get_latin() const
    {    
    if (m_latin)
    {
        return *m_latin;
    }
    return CT_TextFont::default_instance();
    }

    bool CT_FontCollection::has_ea() const
    {    
    return m_has_ea;
    }

    CT_TextFont* CT_FontCollection::mutable_ea()
    {    
    m_has_ea = true;
    if (!m_ea)
    {
        m_ea = new CT_TextFont();
    }
    return m_ea;
    }

    const CT_TextFont& CT_FontCollection::get_ea() const
    {    
    if (m_ea)
    {
        return *m_ea;
    }
    return CT_TextFont::default_instance();
    }

    bool CT_FontCollection::has_cs() const
    {    
    return m_has_cs;
    }

    CT_TextFont* CT_FontCollection::mutable_cs()
    {    
    m_has_cs = true;
    if (!m_cs)
    {
        m_cs = new CT_TextFont();
    }
    return m_cs;
    }

    const CT_TextFont& CT_FontCollection::get_cs() const
    {    
    if (m_cs)
    {
        return *m_cs;
    }
    return CT_TextFont::default_instance();
    }

    CT_SupplementalFont* CT_FontCollection::add_font()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_SupplementalFont* pNewChild = pChildGroup->mutable_font();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_OfficeArtExtensionList* CT_FontCollection::add_extLst()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_OfficeArtExtensionList* pNewChild = pChildGroup->mutable_extLst();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    void CT_FontCollection::clear()
    {    
    m_has_latin = false;
    
    if (m_latin)
    {
        delete m_latin;
        m_latin = NULL;
    }
    
    
    m_has_ea = false;
    
    if (m_ea)
    {
        delete m_ea;
        m_ea = NULL;
    }
    
    
    m_has_cs = false;
    
    if (m_cs)
    {
        delete m_cs;
        m_cs = NULL;
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

    void CT_FontCollection::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
            _outStream << ">";
            
    if (m_has_latin)
    {
        m_latin->toXmlElem("latin", "", _outStream);;
    }
    
    if (m_has_ea)
    {
        m_ea->toXmlElem("ea", "", _outStream);;
    }
    
    if (m_has_cs)
    {
        m_cs->toXmlElem("cs", "", _outStream);;
    }
     
    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_font())
            {
                (*iter)->get_font().toXmlElem("font", "", _outStream);
            }
            else if ((*iter)->has_extLst())
            {
                (*iter)->get_extLst().toXmlElem("extLst", "", _outStream);
            }
        }
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_FontCollection& CT_FontCollection::default_instance()
    {    
    if (!CT_FontCollection::default_instance_)
    {
        CT_FontCollection::default_instance_ = new CT_FontCollection();
    }
    return *CT_FontCollection::default_instance_;
    }


    // CT_FontCollection::ChildGroup_1
    bool CT_FontCollection::ChildGroup_1::has_font() const
    {    
    return m_has_font;
    }

    CT_SupplementalFont* CT_FontCollection::ChildGroup_1::mutable_font()
    {    
    
    m_has_extLst = false;
    
    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }
    ;
    
    m_has_font = true;
    if (!m_font)
    {
        m_font = new CT_SupplementalFont();
    }
    return m_font;
    }

    const CT_SupplementalFont& CT_FontCollection::ChildGroup_1::get_font() const
    {    
    if (m_font)
    {
        return *m_font;
    }
    return CT_SupplementalFont::default_instance();
    }

    bool CT_FontCollection::ChildGroup_1::has_extLst() const
    {    
    return m_has_extLst;
    }

    CT_OfficeArtExtensionList* CT_FontCollection::ChildGroup_1::mutable_extLst()
    {    
    
    m_has_font = false;
    
    if (m_font)
    {
        delete m_font;
        m_font = NULL;
    }
    ;
    
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new CT_OfficeArtExtensionList();
    }
    return m_extLst;
    }

    const CT_OfficeArtExtensionList& CT_FontCollection::ChildGroup_1::get_extLst() const
    {    
    if (m_extLst)
    {
        return *m_extLst;
    }
    return CT_OfficeArtExtensionList::default_instance();
    }

CT_FontCollection* CT_FontCollection::default_instance_ = NULL;

    // CT_EffectStyleItem
    bool CT_EffectStyleItem::has_effectLst() const
    {    
    return m_has_effectLst;
    }

    CT_EffectList* CT_EffectStyleItem::mutable_effectLst()
    {    
    
    m_has_effectDag = false;
    
    if (m_effectDag)
    {
        delete m_effectDag;
        m_effectDag = NULL;
    }
    ;
    
    m_has_effectLst = true;
    if (!m_effectLst)
    {
        m_effectLst = new CT_EffectList();
    }
    return m_effectLst;
    }

    const CT_EffectList& CT_EffectStyleItem::get_effectLst() const
    {    
    if (m_effectLst)
    {
        return *m_effectLst;
    }
    return CT_EffectList::default_instance();
    }

    bool CT_EffectStyleItem::has_effectDag() const
    {    
    return m_has_effectDag;
    }

    CT_EffectContainer* CT_EffectStyleItem::mutable_effectDag()
    {    
    
    m_has_effectLst = false;
    
    if (m_effectLst)
    {
        delete m_effectLst;
        m_effectLst = NULL;
    }
    ;
    
    m_has_effectDag = true;
    if (!m_effectDag)
    {
        m_effectDag = new CT_EffectContainer();
    }
    return m_effectDag;
    }

    const CT_EffectContainer& CT_EffectStyleItem::get_effectDag() const
    {    
    if (m_effectDag)
    {
        return *m_effectDag;
    }
    return CT_EffectContainer::default_instance();
    }

    bool CT_EffectStyleItem::has_scene3d() const
    {    
    return m_has_scene3d;
    }

    CT_Scene3D* CT_EffectStyleItem::mutable_scene3d()
    {    
    m_has_scene3d = true;
    if (!m_scene3d)
    {
        m_scene3d = new CT_Scene3D();
    }
    return m_scene3d;
    }

    const CT_Scene3D& CT_EffectStyleItem::get_scene3d() const
    {    
    if (m_scene3d)
    {
        return *m_scene3d;
    }
    return CT_Scene3D::default_instance();
    }

    bool CT_EffectStyleItem::has_sp3d() const
    {    
    return m_has_sp3d;
    }

    CT_Shape3D* CT_EffectStyleItem::mutable_sp3d()
    {    
    m_has_sp3d = true;
    if (!m_sp3d)
    {
        m_sp3d = new CT_Shape3D();
    }
    return m_sp3d;
    }

    const CT_Shape3D& CT_EffectStyleItem::get_sp3d() const
    {    
    if (m_sp3d)
    {
        return *m_sp3d;
    }
    return CT_Shape3D::default_instance();
    }

    void CT_EffectStyleItem::clear()
    {    }

    void CT_EffectStyleItem::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
            _outStream << ">";
            
    if (m_has_effectLst)
    {
        m_effectLst->toXmlElem("effectLst", "", _outStream);;
    }
    
    if (m_has_effectDag)
    {
        m_effectDag->toXmlElem("effectDag", "", _outStream);;
    }
     
    if (m_has_scene3d)
    {
        m_scene3d->toXmlElem("scene3d", "", _outStream);;
    }
    
    if (m_has_sp3d)
    {
        m_sp3d->toXmlElem("sp3d", "", _outStream);;
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_EffectStyleItem& CT_EffectStyleItem::default_instance()
    {    
    if (!CT_EffectStyleItem::default_instance_)
    {
        CT_EffectStyleItem::default_instance_ = new CT_EffectStyleItem();
    }
    return *CT_EffectStyleItem::default_instance_;
    }

CT_EffectStyleItem* CT_EffectStyleItem::default_instance_ = NULL;

    // CT_FontScheme
    bool CT_FontScheme::has_majorFont() const
    {    
    return m_has_majorFont;
    }

    CT_FontCollection* CT_FontScheme::mutable_majorFont()
    {    
    m_has_majorFont = true;
    if (!m_majorFont)
    {
        m_majorFont = new CT_FontCollection();
    }
    return m_majorFont;
    }

    const CT_FontCollection& CT_FontScheme::get_majorFont() const
    {    
    if (m_majorFont)
    {
        return *m_majorFont;
    }
    return CT_FontCollection::default_instance();
    }

    bool CT_FontScheme::has_minorFont() const
    {    
    return m_has_minorFont;
    }

    CT_FontCollection* CT_FontScheme::mutable_minorFont()
    {    
    m_has_minorFont = true;
    if (!m_minorFont)
    {
        m_minorFont = new CT_FontCollection();
    }
    return m_minorFont;
    }

    const CT_FontCollection& CT_FontScheme::get_minorFont() const
    {    
    if (m_minorFont)
    {
        return *m_minorFont;
    }
    return CT_FontCollection::default_instance();
    }

    bool CT_FontScheme::has_extLst() const
    {    
    return m_has_extLst;
    }

    CT_OfficeArtExtensionList* CT_FontScheme::mutable_extLst()
    {    
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new CT_OfficeArtExtensionList();
    }
    return m_extLst;
    }

    const CT_OfficeArtExtensionList& CT_FontScheme::get_extLst() const
    {    
    if (m_extLst)
    {
        return *m_extLst;
    }
    return CT_OfficeArtExtensionList::default_instance();
    }

    void CT_FontScheme::clear()
    {    
    m_has_name_attr = false;
    m_name_attr.clear();
    }

    void CT_FontScheme::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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
    
            _outStream << ">";
            
    if (m_has_majorFont)
    {
        m_majorFont->toXmlElem("majorFont", "", _outStream);;
    }
    
    if (m_has_minorFont)
    {
        m_minorFont->toXmlElem("minorFont", "", _outStream);;
    }
    
    if (m_has_extLst)
    {
        m_extLst->toXmlElem("extLst", "", _outStream);;
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_FontScheme& CT_FontScheme::default_instance()
    {    
    if (!CT_FontScheme::default_instance_)
    {
        CT_FontScheme::default_instance_ = new CT_FontScheme();
    }
    return *CT_FontScheme::default_instance_;
    }

    bool CT_FontScheme::has_name_attr() const
    {    
    return m_has_name_attr;
    }

    void CT_FontScheme::set_name_attr(const XSD::string_& _name_attr)
    {    
    m_has_name_attr = true;
    m_name_attr = _name_attr;
    }

    const XSD::string_& CT_FontScheme::get_name_attr() const
    {    
    return m_name_attr;
    }

CT_FontScheme* CT_FontScheme::default_instance_ = NULL;

    // CT_FillStyleList
    CT_NoFillProperties* CT_FillStyleList::add_noFill()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_NoFillProperties* pNewChild = pChildGroup->mutable_noFill();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_SolidColorFillProperties* CT_FillStyleList::add_solidFill()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_SolidColorFillProperties* pNewChild = pChildGroup->mutable_solidFill();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_GradientFillProperties* CT_FillStyleList::add_gradFill()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_GradientFillProperties* pNewChild = pChildGroup->mutable_gradFill();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_BlipFillProperties* CT_FillStyleList::add_blipFill()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_BlipFillProperties* pNewChild = pChildGroup->mutable_blipFill();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_PatternFillProperties* CT_FillStyleList::add_pattFill()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_PatternFillProperties* pNewChild = pChildGroup->mutable_pattFill();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_GroupFillProperties* CT_FillStyleList::add_grpFill()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_GroupFillProperties* pNewChild = pChildGroup->mutable_grpFill();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    void CT_FillStyleList::clear()
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

    void CT_FillStyleList::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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
            if ((*iter)->has_noFill())
            {
                (*iter)->get_noFill().toXmlElem("noFill", "", _outStream);
            }
            else if ((*iter)->has_solidFill())
            {
                (*iter)->get_solidFill().toXmlElem("solidFill", "", _outStream);
            }
            else if ((*iter)->has_gradFill())
            {
                (*iter)->get_gradFill().toXmlElem("gradFill", "", _outStream);
            }
            else if ((*iter)->has_blipFill())
            {
                (*iter)->get_blipFill().toXmlElem("blipFill", "", _outStream);
            }
            else if ((*iter)->has_pattFill())
            {
                (*iter)->get_pattFill().toXmlElem("pattFill", "", _outStream);
            }
            else if ((*iter)->has_grpFill())
            {
                (*iter)->get_grpFill().toXmlElem("grpFill", "", _outStream);
            }
        }
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_FillStyleList& CT_FillStyleList::default_instance()
    {    
    if (!CT_FillStyleList::default_instance_)
    {
        CT_FillStyleList::default_instance_ = new CT_FillStyleList();
    }
    return *CT_FillStyleList::default_instance_;
    }


    // CT_FillStyleList::ChildGroup_1
    bool CT_FillStyleList::ChildGroup_1::has_noFill() const
    {    
    return m_has_noFill;
    }

    CT_NoFillProperties* CT_FillStyleList::ChildGroup_1::mutable_noFill()
    {    
    
    m_has_solidFill = false;
    
    if (m_solidFill)
    {
        delete m_solidFill;
        m_solidFill = NULL;
    }
    ;
    
    m_has_gradFill = false;
    
    if (m_gradFill)
    {
        delete m_gradFill;
        m_gradFill = NULL;
    }
    ;
    
    m_has_blipFill = false;
    
    if (m_blipFill)
    {
        delete m_blipFill;
        m_blipFill = NULL;
    }
    ;
    
    m_has_pattFill = false;
    
    if (m_pattFill)
    {
        delete m_pattFill;
        m_pattFill = NULL;
    }
    ;
    
    m_has_grpFill = false;
    
    if (m_grpFill)
    {
        delete m_grpFill;
        m_grpFill = NULL;
    }
    ;
    
    m_has_noFill = true;
    if (!m_noFill)
    {
        m_noFill = new CT_NoFillProperties();
    }
    return m_noFill;
    }

    const CT_NoFillProperties& CT_FillStyleList::ChildGroup_1::get_noFill() const
    {    
    if (m_noFill)
    {
        return *m_noFill;
    }
    return CT_NoFillProperties::default_instance();
    }

    bool CT_FillStyleList::ChildGroup_1::has_solidFill() const
    {    
    return m_has_solidFill;
    }

    CT_SolidColorFillProperties* CT_FillStyleList::ChildGroup_1::mutable_solidFill()
    {    
    
    m_has_noFill = false;
    
    if (m_noFill)
    {
        delete m_noFill;
        m_noFill = NULL;
    }
    ;
    
    m_has_gradFill = false;
    
    if (m_gradFill)
    {
        delete m_gradFill;
        m_gradFill = NULL;
    }
    ;
    
    m_has_blipFill = false;
    
    if (m_blipFill)
    {
        delete m_blipFill;
        m_blipFill = NULL;
    }
    ;
    
    m_has_pattFill = false;
    
    if (m_pattFill)
    {
        delete m_pattFill;
        m_pattFill = NULL;
    }
    ;
    
    m_has_grpFill = false;
    
    if (m_grpFill)
    {
        delete m_grpFill;
        m_grpFill = NULL;
    }
    ;
    
    m_has_solidFill = true;
    if (!m_solidFill)
    {
        m_solidFill = new CT_SolidColorFillProperties();
    }
    return m_solidFill;
    }

    const CT_SolidColorFillProperties& CT_FillStyleList::ChildGroup_1::get_solidFill() const
    {    
    if (m_solidFill)
    {
        return *m_solidFill;
    }
    return CT_SolidColorFillProperties::default_instance();
    }

    bool CT_FillStyleList::ChildGroup_1::has_gradFill() const
    {    
    return m_has_gradFill;
    }

    CT_GradientFillProperties* CT_FillStyleList::ChildGroup_1::mutable_gradFill()
    {    
    
    m_has_noFill = false;
    
    if (m_noFill)
    {
        delete m_noFill;
        m_noFill = NULL;
    }
    ;
    
    m_has_solidFill = false;
    
    if (m_solidFill)
    {
        delete m_solidFill;
        m_solidFill = NULL;
    }
    ;
    
    m_has_blipFill = false;
    
    if (m_blipFill)
    {
        delete m_blipFill;
        m_blipFill = NULL;
    }
    ;
    
    m_has_pattFill = false;
    
    if (m_pattFill)
    {
        delete m_pattFill;
        m_pattFill = NULL;
    }
    ;
    
    m_has_grpFill = false;
    
    if (m_grpFill)
    {
        delete m_grpFill;
        m_grpFill = NULL;
    }
    ;
    
    m_has_gradFill = true;
    if (!m_gradFill)
    {
        m_gradFill = new CT_GradientFillProperties();
    }
    return m_gradFill;
    }

    const CT_GradientFillProperties& CT_FillStyleList::ChildGroup_1::get_gradFill() const
    {    
    if (m_gradFill)
    {
        return *m_gradFill;
    }
    return CT_GradientFillProperties::default_instance();
    }

    bool CT_FillStyleList::ChildGroup_1::has_blipFill() const
    {    
    return m_has_blipFill;
    }

    CT_BlipFillProperties* CT_FillStyleList::ChildGroup_1::mutable_blipFill()
    {    
    
    m_has_noFill = false;
    
    if (m_noFill)
    {
        delete m_noFill;
        m_noFill = NULL;
    }
    ;
    
    m_has_solidFill = false;
    
    if (m_solidFill)
    {
        delete m_solidFill;
        m_solidFill = NULL;
    }
    ;
    
    m_has_gradFill = false;
    
    if (m_gradFill)
    {
        delete m_gradFill;
        m_gradFill = NULL;
    }
    ;
    
    m_has_pattFill = false;
    
    if (m_pattFill)
    {
        delete m_pattFill;
        m_pattFill = NULL;
    }
    ;
    
    m_has_grpFill = false;
    
    if (m_grpFill)
    {
        delete m_grpFill;
        m_grpFill = NULL;
    }
    ;
    
    m_has_blipFill = true;
    if (!m_blipFill)
    {
        m_blipFill = new CT_BlipFillProperties();
    }
    return m_blipFill;
    }

    const CT_BlipFillProperties& CT_FillStyleList::ChildGroup_1::get_blipFill() const
    {    
    if (m_blipFill)
    {
        return *m_blipFill;
    }
    return CT_BlipFillProperties::default_instance();
    }

    bool CT_FillStyleList::ChildGroup_1::has_pattFill() const
    {    
    return m_has_pattFill;
    }

    CT_PatternFillProperties* CT_FillStyleList::ChildGroup_1::mutable_pattFill()
    {    
    
    m_has_noFill = false;
    
    if (m_noFill)
    {
        delete m_noFill;
        m_noFill = NULL;
    }
    ;
    
    m_has_solidFill = false;
    
    if (m_solidFill)
    {
        delete m_solidFill;
        m_solidFill = NULL;
    }
    ;
    
    m_has_gradFill = false;
    
    if (m_gradFill)
    {
        delete m_gradFill;
        m_gradFill = NULL;
    }
    ;
    
    m_has_blipFill = false;
    
    if (m_blipFill)
    {
        delete m_blipFill;
        m_blipFill = NULL;
    }
    ;
    
    m_has_grpFill = false;
    
    if (m_grpFill)
    {
        delete m_grpFill;
        m_grpFill = NULL;
    }
    ;
    
    m_has_pattFill = true;
    if (!m_pattFill)
    {
        m_pattFill = new CT_PatternFillProperties();
    }
    return m_pattFill;
    }

    const CT_PatternFillProperties& CT_FillStyleList::ChildGroup_1::get_pattFill() const
    {    
    if (m_pattFill)
    {
        return *m_pattFill;
    }
    return CT_PatternFillProperties::default_instance();
    }

    bool CT_FillStyleList::ChildGroup_1::has_grpFill() const
    {    
    return m_has_grpFill;
    }

    CT_GroupFillProperties* CT_FillStyleList::ChildGroup_1::mutable_grpFill()
    {    
    
    m_has_noFill = false;
    
    if (m_noFill)
    {
        delete m_noFill;
        m_noFill = NULL;
    }
    ;
    
    m_has_solidFill = false;
    
    if (m_solidFill)
    {
        delete m_solidFill;
        m_solidFill = NULL;
    }
    ;
    
    m_has_gradFill = false;
    
    if (m_gradFill)
    {
        delete m_gradFill;
        m_gradFill = NULL;
    }
    ;
    
    m_has_blipFill = false;
    
    if (m_blipFill)
    {
        delete m_blipFill;
        m_blipFill = NULL;
    }
    ;
    
    m_has_pattFill = false;
    
    if (m_pattFill)
    {
        delete m_pattFill;
        m_pattFill = NULL;
    }
    ;
    
    m_has_grpFill = true;
    if (!m_grpFill)
    {
        m_grpFill = new CT_GroupFillProperties();
    }
    return m_grpFill;
    }

    const CT_GroupFillProperties& CT_FillStyleList::ChildGroup_1::get_grpFill() const
    {    
    if (m_grpFill)
    {
        return *m_grpFill;
    }
    return CT_GroupFillProperties::default_instance();
    }

CT_FillStyleList* CT_FillStyleList::default_instance_ = NULL;

    // CT_LineStyleList
    CT_LineProperties* CT_LineStyleList::add_ln()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_LineProperties* pNewChild = pChildGroup->mutable_ln();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    void CT_LineStyleList::clear()
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

    void CT_LineStyleList::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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
            if ((*iter)->has_ln())
            {
                (*iter)->get_ln().toXmlElem("ln", "", _outStream);
            }
        }
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_LineStyleList& CT_LineStyleList::default_instance()
    {    
    if (!CT_LineStyleList::default_instance_)
    {
        CT_LineStyleList::default_instance_ = new CT_LineStyleList();
    }
    return *CT_LineStyleList::default_instance_;
    }


    // CT_LineStyleList::ChildGroup_1
    bool CT_LineStyleList::ChildGroup_1::has_ln() const
    {    
    return m_has_ln;
    }

    CT_LineProperties* CT_LineStyleList::ChildGroup_1::mutable_ln()
    {    
    
    m_has_ln = true;
    if (!m_ln)
    {
        m_ln = new CT_LineProperties();
    }
    return m_ln;
    }

    const CT_LineProperties& CT_LineStyleList::ChildGroup_1::get_ln() const
    {    
    if (m_ln)
    {
        return *m_ln;
    }
    return CT_LineProperties::default_instance();
    }

CT_LineStyleList* CT_LineStyleList::default_instance_ = NULL;

    // CT_EffectStyleList
    CT_EffectStyleItem* CT_EffectStyleList::add_effectStyle()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_EffectStyleItem* pNewChild = pChildGroup->mutable_effectStyle();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    void CT_EffectStyleList::clear()
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

    void CT_EffectStyleList::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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
            if ((*iter)->has_effectStyle())
            {
                (*iter)->get_effectStyle().toXmlElem("effectStyle", "", _outStream);
            }
        }
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_EffectStyleList& CT_EffectStyleList::default_instance()
    {    
    if (!CT_EffectStyleList::default_instance_)
    {
        CT_EffectStyleList::default_instance_ = new CT_EffectStyleList();
    }
    return *CT_EffectStyleList::default_instance_;
    }


    // CT_EffectStyleList::ChildGroup_1
    bool CT_EffectStyleList::ChildGroup_1::has_effectStyle() const
    {    
    return m_has_effectStyle;
    }

    CT_EffectStyleItem* CT_EffectStyleList::ChildGroup_1::mutable_effectStyle()
    {    
    
    m_has_effectStyle = true;
    if (!m_effectStyle)
    {
        m_effectStyle = new CT_EffectStyleItem();
    }
    return m_effectStyle;
    }

    const CT_EffectStyleItem& CT_EffectStyleList::ChildGroup_1::get_effectStyle() const
    {    
    if (m_effectStyle)
    {
        return *m_effectStyle;
    }
    return CT_EffectStyleItem::default_instance();
    }

CT_EffectStyleList* CT_EffectStyleList::default_instance_ = NULL;

    // CT_BackgroundFillStyleList
    CT_NoFillProperties* CT_BackgroundFillStyleList::add_noFill()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_NoFillProperties* pNewChild = pChildGroup->mutable_noFill();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_SolidColorFillProperties* CT_BackgroundFillStyleList::add_solidFill()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_SolidColorFillProperties* pNewChild = pChildGroup->mutable_solidFill();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_GradientFillProperties* CT_BackgroundFillStyleList::add_gradFill()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_GradientFillProperties* pNewChild = pChildGroup->mutable_gradFill();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_BlipFillProperties* CT_BackgroundFillStyleList::add_blipFill()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_BlipFillProperties* pNewChild = pChildGroup->mutable_blipFill();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_PatternFillProperties* CT_BackgroundFillStyleList::add_pattFill()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_PatternFillProperties* pNewChild = pChildGroup->mutable_pattFill();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_GroupFillProperties* CT_BackgroundFillStyleList::add_grpFill()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_GroupFillProperties* pNewChild = pChildGroup->mutable_grpFill();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    void CT_BackgroundFillStyleList::clear()
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

    void CT_BackgroundFillStyleList::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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
            if ((*iter)->has_noFill())
            {
                (*iter)->get_noFill().toXmlElem("noFill", "", _outStream);
            }
            else if ((*iter)->has_solidFill())
            {
                (*iter)->get_solidFill().toXmlElem("solidFill", "", _outStream);
            }
            else if ((*iter)->has_gradFill())
            {
                (*iter)->get_gradFill().toXmlElem("gradFill", "", _outStream);
            }
            else if ((*iter)->has_blipFill())
            {
                (*iter)->get_blipFill().toXmlElem("blipFill", "", _outStream);
            }
            else if ((*iter)->has_pattFill())
            {
                (*iter)->get_pattFill().toXmlElem("pattFill", "", _outStream);
            }
            else if ((*iter)->has_grpFill())
            {
                (*iter)->get_grpFill().toXmlElem("grpFill", "", _outStream);
            }
        }
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_BackgroundFillStyleList& CT_BackgroundFillStyleList::default_instance()
    {    
    if (!CT_BackgroundFillStyleList::default_instance_)
    {
        CT_BackgroundFillStyleList::default_instance_ = new CT_BackgroundFillStyleList();
    }
    return *CT_BackgroundFillStyleList::default_instance_;
    }


    // CT_BackgroundFillStyleList::ChildGroup_1
    bool CT_BackgroundFillStyleList::ChildGroup_1::has_noFill() const
    {    
    return m_has_noFill;
    }

    CT_NoFillProperties* CT_BackgroundFillStyleList::ChildGroup_1::mutable_noFill()
    {    
    
    m_has_solidFill = false;
    
    if (m_solidFill)
    {
        delete m_solidFill;
        m_solidFill = NULL;
    }
    ;
    
    m_has_gradFill = false;
    
    if (m_gradFill)
    {
        delete m_gradFill;
        m_gradFill = NULL;
    }
    ;
    
    m_has_blipFill = false;
    
    if (m_blipFill)
    {
        delete m_blipFill;
        m_blipFill = NULL;
    }
    ;
    
    m_has_pattFill = false;
    
    if (m_pattFill)
    {
        delete m_pattFill;
        m_pattFill = NULL;
    }
    ;
    
    m_has_grpFill = false;
    
    if (m_grpFill)
    {
        delete m_grpFill;
        m_grpFill = NULL;
    }
    ;
    
    m_has_noFill = true;
    if (!m_noFill)
    {
        m_noFill = new CT_NoFillProperties();
    }
    return m_noFill;
    }

    const CT_NoFillProperties& CT_BackgroundFillStyleList::ChildGroup_1::get_noFill() const
    {    
    if (m_noFill)
    {
        return *m_noFill;
    }
    return CT_NoFillProperties::default_instance();
    }

    bool CT_BackgroundFillStyleList::ChildGroup_1::has_solidFill() const
    {    
    return m_has_solidFill;
    }

    CT_SolidColorFillProperties* CT_BackgroundFillStyleList::ChildGroup_1::mutable_solidFill()
    {    
    
    m_has_noFill = false;
    
    if (m_noFill)
    {
        delete m_noFill;
        m_noFill = NULL;
    }
    ;
    
    m_has_gradFill = false;
    
    if (m_gradFill)
    {
        delete m_gradFill;
        m_gradFill = NULL;
    }
    ;
    
    m_has_blipFill = false;
    
    if (m_blipFill)
    {
        delete m_blipFill;
        m_blipFill = NULL;
    }
    ;
    
    m_has_pattFill = false;
    
    if (m_pattFill)
    {
        delete m_pattFill;
        m_pattFill = NULL;
    }
    ;
    
    m_has_grpFill = false;
    
    if (m_grpFill)
    {
        delete m_grpFill;
        m_grpFill = NULL;
    }
    ;
    
    m_has_solidFill = true;
    if (!m_solidFill)
    {
        m_solidFill = new CT_SolidColorFillProperties();
    }
    return m_solidFill;
    }

    const CT_SolidColorFillProperties& CT_BackgroundFillStyleList::ChildGroup_1::get_solidFill() const
    {    
    if (m_solidFill)
    {
        return *m_solidFill;
    }
    return CT_SolidColorFillProperties::default_instance();
    }

    bool CT_BackgroundFillStyleList::ChildGroup_1::has_gradFill() const
    {    
    return m_has_gradFill;
    }

    CT_GradientFillProperties* CT_BackgroundFillStyleList::ChildGroup_1::mutable_gradFill()
    {    
    
    m_has_noFill = false;
    
    if (m_noFill)
    {
        delete m_noFill;
        m_noFill = NULL;
    }
    ;
    
    m_has_solidFill = false;
    
    if (m_solidFill)
    {
        delete m_solidFill;
        m_solidFill = NULL;
    }
    ;
    
    m_has_blipFill = false;
    
    if (m_blipFill)
    {
        delete m_blipFill;
        m_blipFill = NULL;
    }
    ;
    
    m_has_pattFill = false;
    
    if (m_pattFill)
    {
        delete m_pattFill;
        m_pattFill = NULL;
    }
    ;
    
    m_has_grpFill = false;
    
    if (m_grpFill)
    {
        delete m_grpFill;
        m_grpFill = NULL;
    }
    ;
    
    m_has_gradFill = true;
    if (!m_gradFill)
    {
        m_gradFill = new CT_GradientFillProperties();
    }
    return m_gradFill;
    }

    const CT_GradientFillProperties& CT_BackgroundFillStyleList::ChildGroup_1::get_gradFill() const
    {    
    if (m_gradFill)
    {
        return *m_gradFill;
    }
    return CT_GradientFillProperties::default_instance();
    }

    bool CT_BackgroundFillStyleList::ChildGroup_1::has_blipFill() const
    {    
    return m_has_blipFill;
    }

    CT_BlipFillProperties* CT_BackgroundFillStyleList::ChildGroup_1::mutable_blipFill()
    {    
    
    m_has_noFill = false;
    
    if (m_noFill)
    {
        delete m_noFill;
        m_noFill = NULL;
    }
    ;
    
    m_has_solidFill = false;
    
    if (m_solidFill)
    {
        delete m_solidFill;
        m_solidFill = NULL;
    }
    ;
    
    m_has_gradFill = false;
    
    if (m_gradFill)
    {
        delete m_gradFill;
        m_gradFill = NULL;
    }
    ;
    
    m_has_pattFill = false;
    
    if (m_pattFill)
    {
        delete m_pattFill;
        m_pattFill = NULL;
    }
    ;
    
    m_has_grpFill = false;
    
    if (m_grpFill)
    {
        delete m_grpFill;
        m_grpFill = NULL;
    }
    ;
    
    m_has_blipFill = true;
    if (!m_blipFill)
    {
        m_blipFill = new CT_BlipFillProperties();
    }
    return m_blipFill;
    }

    const CT_BlipFillProperties& CT_BackgroundFillStyleList::ChildGroup_1::get_blipFill() const
    {    
    if (m_blipFill)
    {
        return *m_blipFill;
    }
    return CT_BlipFillProperties::default_instance();
    }

    bool CT_BackgroundFillStyleList::ChildGroup_1::has_pattFill() const
    {    
    return m_has_pattFill;
    }

    CT_PatternFillProperties* CT_BackgroundFillStyleList::ChildGroup_1::mutable_pattFill()
    {    
    
    m_has_noFill = false;
    
    if (m_noFill)
    {
        delete m_noFill;
        m_noFill = NULL;
    }
    ;
    
    m_has_solidFill = false;
    
    if (m_solidFill)
    {
        delete m_solidFill;
        m_solidFill = NULL;
    }
    ;
    
    m_has_gradFill = false;
    
    if (m_gradFill)
    {
        delete m_gradFill;
        m_gradFill = NULL;
    }
    ;
    
    m_has_blipFill = false;
    
    if (m_blipFill)
    {
        delete m_blipFill;
        m_blipFill = NULL;
    }
    ;
    
    m_has_grpFill = false;
    
    if (m_grpFill)
    {
        delete m_grpFill;
        m_grpFill = NULL;
    }
    ;
    
    m_has_pattFill = true;
    if (!m_pattFill)
    {
        m_pattFill = new CT_PatternFillProperties();
    }
    return m_pattFill;
    }

    const CT_PatternFillProperties& CT_BackgroundFillStyleList::ChildGroup_1::get_pattFill() const
    {    
    if (m_pattFill)
    {
        return *m_pattFill;
    }
    return CT_PatternFillProperties::default_instance();
    }

    bool CT_BackgroundFillStyleList::ChildGroup_1::has_grpFill() const
    {    
    return m_has_grpFill;
    }

    CT_GroupFillProperties* CT_BackgroundFillStyleList::ChildGroup_1::mutable_grpFill()
    {    
    
    m_has_noFill = false;
    
    if (m_noFill)
    {
        delete m_noFill;
        m_noFill = NULL;
    }
    ;
    
    m_has_solidFill = false;
    
    if (m_solidFill)
    {
        delete m_solidFill;
        m_solidFill = NULL;
    }
    ;
    
    m_has_gradFill = false;
    
    if (m_gradFill)
    {
        delete m_gradFill;
        m_gradFill = NULL;
    }
    ;
    
    m_has_blipFill = false;
    
    if (m_blipFill)
    {
        delete m_blipFill;
        m_blipFill = NULL;
    }
    ;
    
    m_has_pattFill = false;
    
    if (m_pattFill)
    {
        delete m_pattFill;
        m_pattFill = NULL;
    }
    ;
    
    m_has_grpFill = true;
    if (!m_grpFill)
    {
        m_grpFill = new CT_GroupFillProperties();
    }
    return m_grpFill;
    }

    const CT_GroupFillProperties& CT_BackgroundFillStyleList::ChildGroup_1::get_grpFill() const
    {    
    if (m_grpFill)
    {
        return *m_grpFill;
    }
    return CT_GroupFillProperties::default_instance();
    }

CT_BackgroundFillStyleList* CT_BackgroundFillStyleList::default_instance_ = NULL;

    // CT_StyleMatrix
    bool CT_StyleMatrix::has_fillStyleLst() const
    {    
    return m_has_fillStyleLst;
    }

    CT_FillStyleList* CT_StyleMatrix::mutable_fillStyleLst()
    {    
    m_has_fillStyleLst = true;
    if (!m_fillStyleLst)
    {
        m_fillStyleLst = new CT_FillStyleList();
    }
    return m_fillStyleLst;
    }

    const CT_FillStyleList& CT_StyleMatrix::get_fillStyleLst() const
    {    
    if (m_fillStyleLst)
    {
        return *m_fillStyleLst;
    }
    return CT_FillStyleList::default_instance();
    }

    bool CT_StyleMatrix::has_lnStyleLst() const
    {    
    return m_has_lnStyleLst;
    }

    CT_LineStyleList* CT_StyleMatrix::mutable_lnStyleLst()
    {    
    m_has_lnStyleLst = true;
    if (!m_lnStyleLst)
    {
        m_lnStyleLst = new CT_LineStyleList();
    }
    return m_lnStyleLst;
    }

    const CT_LineStyleList& CT_StyleMatrix::get_lnStyleLst() const
    {    
    if (m_lnStyleLst)
    {
        return *m_lnStyleLst;
    }
    return CT_LineStyleList::default_instance();
    }

    bool CT_StyleMatrix::has_effectStyleLst() const
    {    
    return m_has_effectStyleLst;
    }

    CT_EffectStyleList* CT_StyleMatrix::mutable_effectStyleLst()
    {    
    m_has_effectStyleLst = true;
    if (!m_effectStyleLst)
    {
        m_effectStyleLst = new CT_EffectStyleList();
    }
    return m_effectStyleLst;
    }

    const CT_EffectStyleList& CT_StyleMatrix::get_effectStyleLst() const
    {    
    if (m_effectStyleLst)
    {
        return *m_effectStyleLst;
    }
    return CT_EffectStyleList::default_instance();
    }

    bool CT_StyleMatrix::has_bgFillStyleLst() const
    {    
    return m_has_bgFillStyleLst;
    }

    CT_BackgroundFillStyleList* CT_StyleMatrix::mutable_bgFillStyleLst()
    {    
    m_has_bgFillStyleLst = true;
    if (!m_bgFillStyleLst)
    {
        m_bgFillStyleLst = new CT_BackgroundFillStyleList();
    }
    return m_bgFillStyleLst;
    }

    const CT_BackgroundFillStyleList& CT_StyleMatrix::get_bgFillStyleLst() const
    {    
    if (m_bgFillStyleLst)
    {
        return *m_bgFillStyleLst;
    }
    return CT_BackgroundFillStyleList::default_instance();
    }

    void CT_StyleMatrix::clear()
    {    
    m_has_name_attr = false;
    m_name_attr.clear();
    }

    void CT_StyleMatrix::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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
    
            _outStream << ">";
            
    if (m_has_fillStyleLst)
    {
        m_fillStyleLst->toXmlElem("fillStyleLst", "", _outStream);;
    }
    
    if (m_has_lnStyleLst)
    {
        m_lnStyleLst->toXmlElem("lnStyleLst", "", _outStream);;
    }
    
    if (m_has_effectStyleLst)
    {
        m_effectStyleLst->toXmlElem("effectStyleLst", "", _outStream);;
    }
    
    if (m_has_bgFillStyleLst)
    {
        m_bgFillStyleLst->toXmlElem("bgFillStyleLst", "", _outStream);;
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_StyleMatrix& CT_StyleMatrix::default_instance()
    {    
    if (!CT_StyleMatrix::default_instance_)
    {
        CT_StyleMatrix::default_instance_ = new CT_StyleMatrix();
    }
    return *CT_StyleMatrix::default_instance_;
    }

    bool CT_StyleMatrix::has_name_attr() const
    {    
    return m_has_name_attr;
    }

    void CT_StyleMatrix::set_name_attr(const XSD::string_& _name_attr)
    {    
    m_has_name_attr = true;
    m_name_attr = _name_attr;
    }

    const XSD::string_& CT_StyleMatrix::get_name_attr() const
    {    
    return m_name_attr;
    }

CT_StyleMatrix* CT_StyleMatrix::default_instance_ = NULL;

    // CT_BaseStyles
    bool CT_BaseStyles::has_clrScheme() const
    {    
    return m_has_clrScheme;
    }

    CT_ColorScheme* CT_BaseStyles::mutable_clrScheme()
    {    
    m_has_clrScheme = true;
    if (!m_clrScheme)
    {
        m_clrScheme = new CT_ColorScheme();
    }
    return m_clrScheme;
    }

    const CT_ColorScheme& CT_BaseStyles::get_clrScheme() const
    {    
    if (m_clrScheme)
    {
        return *m_clrScheme;
    }
    return CT_ColorScheme::default_instance();
    }

    bool CT_BaseStyles::has_fontScheme() const
    {    
    return m_has_fontScheme;
    }

    CT_FontScheme* CT_BaseStyles::mutable_fontScheme()
    {    
    m_has_fontScheme = true;
    if (!m_fontScheme)
    {
        m_fontScheme = new CT_FontScheme();
    }
    return m_fontScheme;
    }

    const CT_FontScheme& CT_BaseStyles::get_fontScheme() const
    {    
    if (m_fontScheme)
    {
        return *m_fontScheme;
    }
    return CT_FontScheme::default_instance();
    }

    bool CT_BaseStyles::has_fmtScheme() const
    {    
    return m_has_fmtScheme;
    }

    CT_StyleMatrix* CT_BaseStyles::mutable_fmtScheme()
    {    
    m_has_fmtScheme = true;
    if (!m_fmtScheme)
    {
        m_fmtScheme = new CT_StyleMatrix();
    }
    return m_fmtScheme;
    }

    const CT_StyleMatrix& CT_BaseStyles::get_fmtScheme() const
    {    
    if (m_fmtScheme)
    {
        return *m_fmtScheme;
    }
    return CT_StyleMatrix::default_instance();
    }

    bool CT_BaseStyles::has_extLst() const
    {    
    return m_has_extLst;
    }

    CT_OfficeArtExtensionList* CT_BaseStyles::mutable_extLst()
    {    
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new CT_OfficeArtExtensionList();
    }
    return m_extLst;
    }

    const CT_OfficeArtExtensionList& CT_BaseStyles::get_extLst() const
    {    
    if (m_extLst)
    {
        return *m_extLst;
    }
    return CT_OfficeArtExtensionList::default_instance();
    }

    void CT_BaseStyles::clear()
    {    }

    void CT_BaseStyles::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
            _outStream << ">";
            
    if (m_has_clrScheme)
    {
        m_clrScheme->toXmlElem("clrScheme", "", _outStream);;
    }
    
    if (m_has_fontScheme)
    {
        m_fontScheme->toXmlElem("fontScheme", "", _outStream);;
    }
    
    if (m_has_fmtScheme)
    {
        m_fmtScheme->toXmlElem("fmtScheme", "", _outStream);;
    }
    
    if (m_has_extLst)
    {
        m_extLst->toXmlElem("extLst", "", _outStream);;
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_BaseStyles& CT_BaseStyles::default_instance()
    {    
    if (!CT_BaseStyles::default_instance_)
    {
        CT_BaseStyles::default_instance_ = new CT_BaseStyles();
    }
    return *CT_BaseStyles::default_instance_;
    }

CT_BaseStyles* CT_BaseStyles::default_instance_ = NULL;

    // CT_OfficeArtExtension
    void CT_OfficeArtExtension::clear()
    {    
    m_has_uri_attr = false;
    m_uri_attr.clear();
    }

    void CT_OfficeArtExtension::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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
            
    if (m_has_any)
    {
        
    m_any->toXml(_outStream);
    ;
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_OfficeArtExtension& CT_OfficeArtExtension::default_instance()
    {    
    if (!CT_OfficeArtExtension::default_instance_)
    {
        CT_OfficeArtExtension::default_instance_ = new CT_OfficeArtExtension();
    }
    return *CT_OfficeArtExtension::default_instance_;
    }

    bool CT_OfficeArtExtension::has_uri_attr() const
    {    
    return m_has_uri_attr;
    }

    void CT_OfficeArtExtension::set_uri_attr(const XSD::token_& _uri_attr)
    {    
    m_has_uri_attr = true;
    m_uri_attr = _uri_attr;
    }

    const XSD::token_& CT_OfficeArtExtension::get_uri_attr() const
    {    
    return m_uri_attr;
    }

CT_OfficeArtExtension* CT_OfficeArtExtension::default_instance_ = NULL;

    // CT_Angle
    void CT_Angle::clear()
    {    
    m_has_val_attr = false;
    
    if (m_val_attr)
    {
        delete m_val_attr;
        m_val_attr = NULL;
    }
    
    }

    void CT_Angle::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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

    const CT_Angle& CT_Angle::default_instance()
    {    
    if (!CT_Angle::default_instance_)
    {
        CT_Angle::default_instance_ = new CT_Angle();
    }
    return *CT_Angle::default_instance_;
    }

    bool CT_Angle::has_val_attr() const
    {    
    return m_has_val_attr;
    }

    void CT_Angle::set_val_attr(const ST_Angle& _val_attr)
    {    
    m_has_val_attr = true;
    m_val_attr = new ST_Angle(_val_attr);
    }

    const ST_Angle& CT_Angle::get_val_attr() const
    {    
    if (m_val_attr)
    {
        return *m_val_attr;
    }
    return ST_Angle::default_instance();
    }

CT_Angle* CT_Angle::default_instance_ = NULL;

    // CT_PositiveFixedAngle
    void CT_PositiveFixedAngle::clear()
    {    
    m_has_val_attr = false;
    
    if (m_val_attr)
    {
        delete m_val_attr;
        m_val_attr = NULL;
    }
    
    }

    void CT_PositiveFixedAngle::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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

    const CT_PositiveFixedAngle& CT_PositiveFixedAngle::default_instance()
    {    
    if (!CT_PositiveFixedAngle::default_instance_)
    {
        CT_PositiveFixedAngle::default_instance_ = new CT_PositiveFixedAngle();
    }
    return *CT_PositiveFixedAngle::default_instance_;
    }

    bool CT_PositiveFixedAngle::has_val_attr() const
    {    
    return m_has_val_attr;
    }

    void CT_PositiveFixedAngle::set_val_attr(const ST_PositiveFixedAngle& _val_attr)
    {    
    m_has_val_attr = true;
    m_val_attr = new ST_PositiveFixedAngle(_val_attr);
    }

    const ST_PositiveFixedAngle& CT_PositiveFixedAngle::get_val_attr() const
    {    
    if (m_val_attr)
    {
        return *m_val_attr;
    }
    return ST_PositiveFixedAngle::default_instance();
    }

CT_PositiveFixedAngle* CT_PositiveFixedAngle::default_instance_ = NULL;

    // CT_Percentage
    void CT_Percentage::clear()
    {    
    m_has_val_attr = false;
    
    if (m_val_attr)
    {
        delete m_val_attr;
        m_val_attr = NULL;
    }
    
    }

    void CT_Percentage::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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

    const CT_Percentage& CT_Percentage::default_instance()
    {    
    if (!CT_Percentage::default_instance_)
    {
        CT_Percentage::default_instance_ = new CT_Percentage();
    }
    return *CT_Percentage::default_instance_;
    }

    bool CT_Percentage::has_val_attr() const
    {    
    return m_has_val_attr;
    }

    void CT_Percentage::set_val_attr(const ST_Percentage& _val_attr)
    {    
    m_has_val_attr = true;
    m_val_attr = new ST_Percentage(_val_attr);
    }

    const ST_Percentage& CT_Percentage::get_val_attr() const
    {    
    if (m_val_attr)
    {
        return *m_val_attr;
    }
    return ST_Percentage::default_instance();
    }

CT_Percentage* CT_Percentage::default_instance_ = NULL;

    // CT_PositivePercentage
    void CT_PositivePercentage::clear()
    {    
    m_has_val_attr = false;
    
    if (m_val_attr)
    {
        delete m_val_attr;
        m_val_attr = NULL;
    }
    
    }

    void CT_PositivePercentage::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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

    const CT_PositivePercentage& CT_PositivePercentage::default_instance()
    {    
    if (!CT_PositivePercentage::default_instance_)
    {
        CT_PositivePercentage::default_instance_ = new CT_PositivePercentage();
    }
    return *CT_PositivePercentage::default_instance_;
    }

    bool CT_PositivePercentage::has_val_attr() const
    {    
    return m_has_val_attr;
    }

    void CT_PositivePercentage::set_val_attr(const ST_PositivePercentage& _val_attr)
    {    
    m_has_val_attr = true;
    m_val_attr = new ST_PositivePercentage(_val_attr);
    }

    const ST_PositivePercentage& CT_PositivePercentage::get_val_attr() const
    {    
    if (m_val_attr)
    {
        return *m_val_attr;
    }
    return ST_PositivePercentage::default_instance();
    }

CT_PositivePercentage* CT_PositivePercentage::default_instance_ = NULL;

    // CT_FixedPercentage
    void CT_FixedPercentage::clear()
    {    
    m_has_val_attr = false;
    
    if (m_val_attr)
    {
        delete m_val_attr;
        m_val_attr = NULL;
    }
    
    }

    void CT_FixedPercentage::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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

    const CT_FixedPercentage& CT_FixedPercentage::default_instance()
    {    
    if (!CT_FixedPercentage::default_instance_)
    {
        CT_FixedPercentage::default_instance_ = new CT_FixedPercentage();
    }
    return *CT_FixedPercentage::default_instance_;
    }

    bool CT_FixedPercentage::has_val_attr() const
    {    
    return m_has_val_attr;
    }

    void CT_FixedPercentage::set_val_attr(const ST_FixedPercentage& _val_attr)
    {    
    m_has_val_attr = true;
    m_val_attr = new ST_FixedPercentage(_val_attr);
    }

    const ST_FixedPercentage& CT_FixedPercentage::get_val_attr() const
    {    
    if (m_val_attr)
    {
        return *m_val_attr;
    }
    return ST_FixedPercentage::default_instance();
    }

CT_FixedPercentage* CT_FixedPercentage::default_instance_ = NULL;

    // CT_PositiveFixedPercentage
    void CT_PositiveFixedPercentage::clear()
    {    
    m_has_val_attr = false;
    
    if (m_val_attr)
    {
        delete m_val_attr;
        m_val_attr = NULL;
    }
    
    }

    void CT_PositiveFixedPercentage::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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

    const CT_PositiveFixedPercentage& CT_PositiveFixedPercentage::default_instance()
    {    
    if (!CT_PositiveFixedPercentage::default_instance_)
    {
        CT_PositiveFixedPercentage::default_instance_ = new CT_PositiveFixedPercentage();
    }
    return *CT_PositiveFixedPercentage::default_instance_;
    }

    bool CT_PositiveFixedPercentage::has_val_attr() const
    {    
    return m_has_val_attr;
    }

    void CT_PositiveFixedPercentage::set_val_attr(const ST_PositiveFixedPercentage& _val_attr)
    {    
    m_has_val_attr = true;
    m_val_attr = new ST_PositiveFixedPercentage(_val_attr);
    }

    const ST_PositiveFixedPercentage& CT_PositiveFixedPercentage::get_val_attr() const
    {    
    if (m_val_attr)
    {
        return *m_val_attr;
    }
    return ST_PositiveFixedPercentage::default_instance();
    }

CT_PositiveFixedPercentage* CT_PositiveFixedPercentage::default_instance_ = NULL;

    // CT_Ratio
    void CT_Ratio::clear()
    {    
    m_has_n_attr = false;
    m_n_attr = 0;
    
    m_has_d_attr = false;
    m_d_attr = 0;
    }

    void CT_Ratio::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
    if (m_has_n_attr)
    {
        _outStream << " " << "n" << "=\"" << m_n_attr << "\"";
    }
    
    
    if (m_has_d_attr)
    {
        _outStream << " " << "d" << "=\"" << m_d_attr << "\"";
    }
    
            _outStream << ">";
            
            _outStream << "</" << _elemName << ">";
                }

    const CT_Ratio& CT_Ratio::default_instance()
    {    
    if (!CT_Ratio::default_instance_)
    {
        CT_Ratio::default_instance_ = new CT_Ratio();
    }
    return *CT_Ratio::default_instance_;
    }

    bool CT_Ratio::has_n_attr() const
    {    
    return m_has_n_attr;
    }

    void CT_Ratio::set_n_attr(const XSD::long_& _n_attr)
    {    
    m_has_n_attr = true;
    m_n_attr = _n_attr;
    }

    const XSD::long_& CT_Ratio::get_n_attr() const
    {    
    return m_n_attr;
    }

    bool CT_Ratio::has_d_attr() const
    {    
    return m_has_d_attr;
    }

    void CT_Ratio::set_d_attr(const XSD::long_& _d_attr)
    {    
    m_has_d_attr = true;
    m_d_attr = _d_attr;
    }

    const XSD::long_& CT_Ratio::get_d_attr() const
    {    
    return m_d_attr;
    }

CT_Ratio* CT_Ratio::default_instance_ = NULL;

    // CT_Point2D
    void CT_Point2D::clear()
    {    
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

    void CT_Point2D::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
    if (m_has_x_attr)
    {
        m_x_attr->toXmlAttr("x", _outStream);
    }
    
    
    if (m_has_y_attr)
    {
        m_y_attr->toXmlAttr("y", _outStream);
    }
    
            _outStream << ">";
            
            _outStream << "</" << _elemName << ">";
                }

    const CT_Point2D& CT_Point2D::default_instance()
    {    
    if (!CT_Point2D::default_instance_)
    {
        CT_Point2D::default_instance_ = new CT_Point2D();
    }
    return *CT_Point2D::default_instance_;
    }

    bool CT_Point2D::has_x_attr() const
    {    
    return m_has_x_attr;
    }

    void CT_Point2D::set_x_attr(const ST_Coordinate& _x_attr)
    {    
    m_has_x_attr = true;
    m_x_attr = new ST_Coordinate(_x_attr);
    }

    const ST_Coordinate& CT_Point2D::get_x_attr() const
    {    
    if (m_x_attr)
    {
        return *m_x_attr;
    }
    return ST_Coordinate::default_instance();
    }

    bool CT_Point2D::has_y_attr() const
    {    
    return m_has_y_attr;
    }

    void CT_Point2D::set_y_attr(const ST_Coordinate& _y_attr)
    {    
    m_has_y_attr = true;
    m_y_attr = new ST_Coordinate(_y_attr);
    }

    const ST_Coordinate& CT_Point2D::get_y_attr() const
    {    
    if (m_y_attr)
    {
        return *m_y_attr;
    }
    return ST_Coordinate::default_instance();
    }

CT_Point2D* CT_Point2D::default_instance_ = NULL;

    // CT_PositiveSize2D
    void CT_PositiveSize2D::clear()
    {    
    m_has_cx_attr = false;
    
    if (m_cx_attr)
    {
        delete m_cx_attr;
        m_cx_attr = NULL;
    }
    
    
    m_has_cy_attr = false;
    
    if (m_cy_attr)
    {
        delete m_cy_attr;
        m_cy_attr = NULL;
    }
    
    }

    void CT_PositiveSize2D::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
    if (m_has_cx_attr)
    {
        m_cx_attr->toXmlAttr("cx", _outStream);
    }
    
    
    if (m_has_cy_attr)
    {
        m_cy_attr->toXmlAttr("cy", _outStream);
    }
    
            _outStream << ">";
            
            _outStream << "</" << _elemName << ">";
                }

    const CT_PositiveSize2D& CT_PositiveSize2D::default_instance()
    {    
    if (!CT_PositiveSize2D::default_instance_)
    {
        CT_PositiveSize2D::default_instance_ = new CT_PositiveSize2D();
    }
    return *CT_PositiveSize2D::default_instance_;
    }

    bool CT_PositiveSize2D::has_cx_attr() const
    {    
    return m_has_cx_attr;
    }

    void CT_PositiveSize2D::set_cx_attr(const ST_PositiveCoordinate& _cx_attr)
    {    
    m_has_cx_attr = true;
    m_cx_attr = new ST_PositiveCoordinate(_cx_attr);
    }

    const ST_PositiveCoordinate& CT_PositiveSize2D::get_cx_attr() const
    {    
    if (m_cx_attr)
    {
        return *m_cx_attr;
    }
    return ST_PositiveCoordinate::default_instance();
    }

    bool CT_PositiveSize2D::has_cy_attr() const
    {    
    return m_has_cy_attr;
    }

    void CT_PositiveSize2D::set_cy_attr(const ST_PositiveCoordinate& _cy_attr)
    {    
    m_has_cy_attr = true;
    m_cy_attr = new ST_PositiveCoordinate(_cy_attr);
    }

    const ST_PositiveCoordinate& CT_PositiveSize2D::get_cy_attr() const
    {    
    if (m_cy_attr)
    {
        return *m_cy_attr;
    }
    return ST_PositiveCoordinate::default_instance();
    }

CT_PositiveSize2D* CT_PositiveSize2D::default_instance_ = NULL;

    // CT_ComplementTransform
    void CT_ComplementTransform::clear()
    {    }

    void CT_ComplementTransform::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
            _outStream << ">";
            
            _outStream << "</" << _elemName << ">";
                }

    const CT_ComplementTransform& CT_ComplementTransform::default_instance()
    {    
    if (!CT_ComplementTransform::default_instance_)
    {
        CT_ComplementTransform::default_instance_ = new CT_ComplementTransform();
    }
    return *CT_ComplementTransform::default_instance_;
    }

CT_ComplementTransform* CT_ComplementTransform::default_instance_ = NULL;

    // CT_InverseTransform
    void CT_InverseTransform::clear()
    {    }

    void CT_InverseTransform::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
            _outStream << ">";
            
            _outStream << "</" << _elemName << ">";
                }

    const CT_InverseTransform& CT_InverseTransform::default_instance()
    {    
    if (!CT_InverseTransform::default_instance_)
    {
        CT_InverseTransform::default_instance_ = new CT_InverseTransform();
    }
    return *CT_InverseTransform::default_instance_;
    }

CT_InverseTransform* CT_InverseTransform::default_instance_ = NULL;

    // CT_GrayscaleTransform
    void CT_GrayscaleTransform::clear()
    {    }

    void CT_GrayscaleTransform::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
            _outStream << ">";
            
            _outStream << "</" << _elemName << ">";
                }

    const CT_GrayscaleTransform& CT_GrayscaleTransform::default_instance()
    {    
    if (!CT_GrayscaleTransform::default_instance_)
    {
        CT_GrayscaleTransform::default_instance_ = new CT_GrayscaleTransform();
    }
    return *CT_GrayscaleTransform::default_instance_;
    }

CT_GrayscaleTransform* CT_GrayscaleTransform::default_instance_ = NULL;

    // CT_GammaTransform
    void CT_GammaTransform::clear()
    {    }

    void CT_GammaTransform::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
            _outStream << ">";
            
            _outStream << "</" << _elemName << ">";
                }

    const CT_GammaTransform& CT_GammaTransform::default_instance()
    {    
    if (!CT_GammaTransform::default_instance_)
    {
        CT_GammaTransform::default_instance_ = new CT_GammaTransform();
    }
    return *CT_GammaTransform::default_instance_;
    }

CT_GammaTransform* CT_GammaTransform::default_instance_ = NULL;

    // CT_InverseGammaTransform
    void CT_InverseGammaTransform::clear()
    {    }

    void CT_InverseGammaTransform::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
            _outStream << ">";
            
            _outStream << "</" << _elemName << ">";
                }

    const CT_InverseGammaTransform& CT_InverseGammaTransform::default_instance()
    {    
    if (!CT_InverseGammaTransform::default_instance_)
    {
        CT_InverseGammaTransform::default_instance_ = new CT_InverseGammaTransform();
    }
    return *CT_InverseGammaTransform::default_instance_;
    }

CT_InverseGammaTransform* CT_InverseGammaTransform::default_instance_ = NULL;

    // CT_ScRgbColor
    CT_PositiveFixedPercentage* CT_ScRgbColor::add_tint()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_PositiveFixedPercentage* pNewChild = pChildGroup->mutable_tint();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_PositiveFixedPercentage* CT_ScRgbColor::add_shade()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_PositiveFixedPercentage* pNewChild = pChildGroup->mutable_shade();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_ComplementTransform* CT_ScRgbColor::add_comp()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_ComplementTransform* pNewChild = pChildGroup->mutable_comp();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_InverseTransform* CT_ScRgbColor::add_inv()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_InverseTransform* pNewChild = pChildGroup->mutable_inv();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_GrayscaleTransform* CT_ScRgbColor::add_gray()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_GrayscaleTransform* pNewChild = pChildGroup->mutable_gray();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_PositiveFixedPercentage* CT_ScRgbColor::add_alpha()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_PositiveFixedPercentage* pNewChild = pChildGroup->mutable_alpha();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_FixedPercentage* CT_ScRgbColor::add_alphaOff()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_FixedPercentage* pNewChild = pChildGroup->mutable_alphaOff();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_PositivePercentage* CT_ScRgbColor::add_alphaMod()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_PositivePercentage* pNewChild = pChildGroup->mutable_alphaMod();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_PositiveFixedAngle* CT_ScRgbColor::add_hue()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_PositiveFixedAngle* pNewChild = pChildGroup->mutable_hue();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Angle* CT_ScRgbColor::add_hueOff()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Angle* pNewChild = pChildGroup->mutable_hueOff();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_PositivePercentage* CT_ScRgbColor::add_hueMod()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_PositivePercentage* pNewChild = pChildGroup->mutable_hueMod();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Percentage* CT_ScRgbColor::add_sat()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Percentage* pNewChild = pChildGroup->mutable_sat();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Percentage* CT_ScRgbColor::add_satOff()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Percentage* pNewChild = pChildGroup->mutable_satOff();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Percentage* CT_ScRgbColor::add_satMod()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Percentage* pNewChild = pChildGroup->mutable_satMod();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Percentage* CT_ScRgbColor::add_lum()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Percentage* pNewChild = pChildGroup->mutable_lum();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Percentage* CT_ScRgbColor::add_lumOff()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Percentage* pNewChild = pChildGroup->mutable_lumOff();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Percentage* CT_ScRgbColor::add_lumMod()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Percentage* pNewChild = pChildGroup->mutable_lumMod();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Percentage* CT_ScRgbColor::add_red()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Percentage* pNewChild = pChildGroup->mutable_red();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Percentage* CT_ScRgbColor::add_redOff()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Percentage* pNewChild = pChildGroup->mutable_redOff();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Percentage* CT_ScRgbColor::add_redMod()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Percentage* pNewChild = pChildGroup->mutable_redMod();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Percentage* CT_ScRgbColor::add_green()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Percentage* pNewChild = pChildGroup->mutable_green();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Percentage* CT_ScRgbColor::add_greenOff()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Percentage* pNewChild = pChildGroup->mutable_greenOff();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Percentage* CT_ScRgbColor::add_greenMod()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Percentage* pNewChild = pChildGroup->mutable_greenMod();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Percentage* CT_ScRgbColor::add_blue()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Percentage* pNewChild = pChildGroup->mutable_blue();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Percentage* CT_ScRgbColor::add_blueOff()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Percentage* pNewChild = pChildGroup->mutable_blueOff();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Percentage* CT_ScRgbColor::add_blueMod()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Percentage* pNewChild = pChildGroup->mutable_blueMod();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_GammaTransform* CT_ScRgbColor::add_gamma()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_GammaTransform* pNewChild = pChildGroup->mutable_gamma();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_InverseGammaTransform* CT_ScRgbColor::add_invGamma()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_InverseGammaTransform* pNewChild = pChildGroup->mutable_invGamma();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    void CT_ScRgbColor::clear()
    {    
    m_has_r_attr = false;
    
    if (m_r_attr)
    {
        delete m_r_attr;
        m_r_attr = NULL;
    }
    
    
    m_has_g_attr = false;
    
    if (m_g_attr)
    {
        delete m_g_attr;
        m_g_attr = NULL;
    }
    
    
    m_has_b_attr = false;
    
    if (m_b_attr)
    {
        delete m_b_attr;
        m_b_attr = NULL;
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

    void CT_ScRgbColor::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
    if (m_has_r_attr)
    {
        m_r_attr->toXmlAttr("r", _outStream);
    }
    
    
    if (m_has_g_attr)
    {
        m_g_attr->toXmlAttr("g", _outStream);
    }
    
    
    if (m_has_b_attr)
    {
        m_b_attr->toXmlAttr("b", _outStream);
    }
    
            _outStream << ">";
            
    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_tint())
            {
                (*iter)->get_tint().toXmlElem("tint", "", _outStream);
            }
            else if ((*iter)->has_shade())
            {
                (*iter)->get_shade().toXmlElem("shade", "", _outStream);
            }
            else if ((*iter)->has_comp())
            {
                (*iter)->get_comp().toXmlElem("comp", "", _outStream);
            }
            else if ((*iter)->has_inv())
            {
                (*iter)->get_inv().toXmlElem("inv", "", _outStream);
            }
            else if ((*iter)->has_gray())
            {
                (*iter)->get_gray().toXmlElem("gray", "", _outStream);
            }
            else if ((*iter)->has_alpha())
            {
                (*iter)->get_alpha().toXmlElem("alpha", "", _outStream);
            }
            else if ((*iter)->has_alphaOff())
            {
                (*iter)->get_alphaOff().toXmlElem("alphaOff", "", _outStream);
            }
            else if ((*iter)->has_alphaMod())
            {
                (*iter)->get_alphaMod().toXmlElem("alphaMod", "", _outStream);
            }
            else if ((*iter)->has_hue())
            {
                (*iter)->get_hue().toXmlElem("hue", "", _outStream);
            }
            else if ((*iter)->has_hueOff())
            {
                (*iter)->get_hueOff().toXmlElem("hueOff", "", _outStream);
            }
            else if ((*iter)->has_hueMod())
            {
                (*iter)->get_hueMod().toXmlElem("hueMod", "", _outStream);
            }
            else if ((*iter)->has_sat())
            {
                (*iter)->get_sat().toXmlElem("sat", "", _outStream);
            }
            else if ((*iter)->has_satOff())
            {
                (*iter)->get_satOff().toXmlElem("satOff", "", _outStream);
            }
            else if ((*iter)->has_satMod())
            {
                (*iter)->get_satMod().toXmlElem("satMod", "", _outStream);
            }
            else if ((*iter)->has_lum())
            {
                (*iter)->get_lum().toXmlElem("lum", "", _outStream);
            }
            else if ((*iter)->has_lumOff())
            {
                (*iter)->get_lumOff().toXmlElem("lumOff", "", _outStream);
            }
            else if ((*iter)->has_lumMod())
            {
                (*iter)->get_lumMod().toXmlElem("lumMod", "", _outStream);
            }
            else if ((*iter)->has_red())
            {
                (*iter)->get_red().toXmlElem("red", "", _outStream);
            }
            else if ((*iter)->has_redOff())
            {
                (*iter)->get_redOff().toXmlElem("redOff", "", _outStream);
            }
            else if ((*iter)->has_redMod())
            {
                (*iter)->get_redMod().toXmlElem("redMod", "", _outStream);
            }
            else if ((*iter)->has_green())
            {
                (*iter)->get_green().toXmlElem("green", "", _outStream);
            }
            else if ((*iter)->has_greenOff())
            {
                (*iter)->get_greenOff().toXmlElem("greenOff", "", _outStream);
            }
            else if ((*iter)->has_greenMod())
            {
                (*iter)->get_greenMod().toXmlElem("greenMod", "", _outStream);
            }
            else if ((*iter)->has_blue())
            {
                (*iter)->get_blue().toXmlElem("blue", "", _outStream);
            }
            else if ((*iter)->has_blueOff())
            {
                (*iter)->get_blueOff().toXmlElem("blueOff", "", _outStream);
            }
            else if ((*iter)->has_blueMod())
            {
                (*iter)->get_blueMod().toXmlElem("blueMod", "", _outStream);
            }
            else if ((*iter)->has_gamma())
            {
                (*iter)->get_gamma().toXmlElem("gamma", "", _outStream);
            }
            else if ((*iter)->has_invGamma())
            {
                (*iter)->get_invGamma().toXmlElem("invGamma", "", _outStream);
            }
        }
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_ScRgbColor& CT_ScRgbColor::default_instance()
    {    
    if (!CT_ScRgbColor::default_instance_)
    {
        CT_ScRgbColor::default_instance_ = new CT_ScRgbColor();
    }
    return *CT_ScRgbColor::default_instance_;
    }

    bool CT_ScRgbColor::has_r_attr() const
    {    
    return m_has_r_attr;
    }

    void CT_ScRgbColor::set_r_attr(const ST_Percentage& _r_attr)
    {    
    m_has_r_attr = true;
    m_r_attr = new ST_Percentage(_r_attr);
    }

    const ST_Percentage& CT_ScRgbColor::get_r_attr() const
    {    
    if (m_r_attr)
    {
        return *m_r_attr;
    }
    return ST_Percentage::default_instance();
    }

    bool CT_ScRgbColor::has_g_attr() const
    {    
    return m_has_g_attr;
    }

    void CT_ScRgbColor::set_g_attr(const ST_Percentage& _g_attr)
    {    
    m_has_g_attr = true;
    m_g_attr = new ST_Percentage(_g_attr);
    }

    const ST_Percentage& CT_ScRgbColor::get_g_attr() const
    {    
    if (m_g_attr)
    {
        return *m_g_attr;
    }
    return ST_Percentage::default_instance();
    }

    bool CT_ScRgbColor::has_b_attr() const
    {    
    return m_has_b_attr;
    }

    void CT_ScRgbColor::set_b_attr(const ST_Percentage& _b_attr)
    {    
    m_has_b_attr = true;
    m_b_attr = new ST_Percentage(_b_attr);
    }

    const ST_Percentage& CT_ScRgbColor::get_b_attr() const
    {    
    if (m_b_attr)
    {
        return *m_b_attr;
    }
    return ST_Percentage::default_instance();
    }


    // CT_ScRgbColor::ChildGroup_1
    bool CT_ScRgbColor::ChildGroup_1::has_tint() const
    {    
    return m_has_tint;
    }

    CT_PositiveFixedPercentage* CT_ScRgbColor::ChildGroup_1::mutable_tint()
    {    
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_tint = true;
    if (!m_tint)
    {
        m_tint = new CT_PositiveFixedPercentage();
    }
    return m_tint;
    }

    const CT_PositiveFixedPercentage& CT_ScRgbColor::ChildGroup_1::get_tint() const
    {    
    if (m_tint)
    {
        return *m_tint;
    }
    return CT_PositiveFixedPercentage::default_instance();
    }

    bool CT_ScRgbColor::ChildGroup_1::has_shade() const
    {    
    return m_has_shade;
    }

    CT_PositiveFixedPercentage* CT_ScRgbColor::ChildGroup_1::mutable_shade()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_shade = true;
    if (!m_shade)
    {
        m_shade = new CT_PositiveFixedPercentage();
    }
    return m_shade;
    }

    const CT_PositiveFixedPercentage& CT_ScRgbColor::ChildGroup_1::get_shade() const
    {    
    if (m_shade)
    {
        return *m_shade;
    }
    return CT_PositiveFixedPercentage::default_instance();
    }

    bool CT_ScRgbColor::ChildGroup_1::has_comp() const
    {    
    return m_has_comp;
    }

    CT_ComplementTransform* CT_ScRgbColor::ChildGroup_1::mutable_comp()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_comp = true;
    if (!m_comp)
    {
        m_comp = new CT_ComplementTransform();
    }
    return m_comp;
    }

    const CT_ComplementTransform& CT_ScRgbColor::ChildGroup_1::get_comp() const
    {    
    if (m_comp)
    {
        return *m_comp;
    }
    return CT_ComplementTransform::default_instance();
    }

    bool CT_ScRgbColor::ChildGroup_1::has_inv() const
    {    
    return m_has_inv;
    }

    CT_InverseTransform* CT_ScRgbColor::ChildGroup_1::mutable_inv()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_inv = true;
    if (!m_inv)
    {
        m_inv = new CT_InverseTransform();
    }
    return m_inv;
    }

    const CT_InverseTransform& CT_ScRgbColor::ChildGroup_1::get_inv() const
    {    
    if (m_inv)
    {
        return *m_inv;
    }
    return CT_InverseTransform::default_instance();
    }

    bool CT_ScRgbColor::ChildGroup_1::has_gray() const
    {    
    return m_has_gray;
    }

    CT_GrayscaleTransform* CT_ScRgbColor::ChildGroup_1::mutable_gray()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_gray = true;
    if (!m_gray)
    {
        m_gray = new CT_GrayscaleTransform();
    }
    return m_gray;
    }

    const CT_GrayscaleTransform& CT_ScRgbColor::ChildGroup_1::get_gray() const
    {    
    if (m_gray)
    {
        return *m_gray;
    }
    return CT_GrayscaleTransform::default_instance();
    }

    bool CT_ScRgbColor::ChildGroup_1::has_alpha() const
    {    
    return m_has_alpha;
    }

    CT_PositiveFixedPercentage* CT_ScRgbColor::ChildGroup_1::mutable_alpha()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_alpha = true;
    if (!m_alpha)
    {
        m_alpha = new CT_PositiveFixedPercentage();
    }
    return m_alpha;
    }

    const CT_PositiveFixedPercentage& CT_ScRgbColor::ChildGroup_1::get_alpha() const
    {    
    if (m_alpha)
    {
        return *m_alpha;
    }
    return CT_PositiveFixedPercentage::default_instance();
    }

    bool CT_ScRgbColor::ChildGroup_1::has_alphaOff() const
    {    
    return m_has_alphaOff;
    }

    CT_FixedPercentage* CT_ScRgbColor::ChildGroup_1::mutable_alphaOff()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_alphaOff = true;
    if (!m_alphaOff)
    {
        m_alphaOff = new CT_FixedPercentage();
    }
    return m_alphaOff;
    }

    const CT_FixedPercentage& CT_ScRgbColor::ChildGroup_1::get_alphaOff() const
    {    
    if (m_alphaOff)
    {
        return *m_alphaOff;
    }
    return CT_FixedPercentage::default_instance();
    }

    bool CT_ScRgbColor::ChildGroup_1::has_alphaMod() const
    {    
    return m_has_alphaMod;
    }

    CT_PositivePercentage* CT_ScRgbColor::ChildGroup_1::mutable_alphaMod()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_alphaMod = true;
    if (!m_alphaMod)
    {
        m_alphaMod = new CT_PositivePercentage();
    }
    return m_alphaMod;
    }

    const CT_PositivePercentage& CT_ScRgbColor::ChildGroup_1::get_alphaMod() const
    {    
    if (m_alphaMod)
    {
        return *m_alphaMod;
    }
    return CT_PositivePercentage::default_instance();
    }

    bool CT_ScRgbColor::ChildGroup_1::has_hue() const
    {    
    return m_has_hue;
    }

    CT_PositiveFixedAngle* CT_ScRgbColor::ChildGroup_1::mutable_hue()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_hue = true;
    if (!m_hue)
    {
        m_hue = new CT_PositiveFixedAngle();
    }
    return m_hue;
    }

    const CT_PositiveFixedAngle& CT_ScRgbColor::ChildGroup_1::get_hue() const
    {    
    if (m_hue)
    {
        return *m_hue;
    }
    return CT_PositiveFixedAngle::default_instance();
    }

    bool CT_ScRgbColor::ChildGroup_1::has_hueOff() const
    {    
    return m_has_hueOff;
    }

    CT_Angle* CT_ScRgbColor::ChildGroup_1::mutable_hueOff()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_hueOff = true;
    if (!m_hueOff)
    {
        m_hueOff = new CT_Angle();
    }
    return m_hueOff;
    }

    const CT_Angle& CT_ScRgbColor::ChildGroup_1::get_hueOff() const
    {    
    if (m_hueOff)
    {
        return *m_hueOff;
    }
    return CT_Angle::default_instance();
    }

    bool CT_ScRgbColor::ChildGroup_1::has_hueMod() const
    {    
    return m_has_hueMod;
    }

    CT_PositivePercentage* CT_ScRgbColor::ChildGroup_1::mutable_hueMod()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_hueMod = true;
    if (!m_hueMod)
    {
        m_hueMod = new CT_PositivePercentage();
    }
    return m_hueMod;
    }

    const CT_PositivePercentage& CT_ScRgbColor::ChildGroup_1::get_hueMod() const
    {    
    if (m_hueMod)
    {
        return *m_hueMod;
    }
    return CT_PositivePercentage::default_instance();
    }

    bool CT_ScRgbColor::ChildGroup_1::has_sat() const
    {    
    return m_has_sat;
    }

    CT_Percentage* CT_ScRgbColor::ChildGroup_1::mutable_sat()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_sat = true;
    if (!m_sat)
    {
        m_sat = new CT_Percentage();
    }
    return m_sat;
    }

    const CT_Percentage& CT_ScRgbColor::ChildGroup_1::get_sat() const
    {    
    if (m_sat)
    {
        return *m_sat;
    }
    return CT_Percentage::default_instance();
    }

    bool CT_ScRgbColor::ChildGroup_1::has_satOff() const
    {    
    return m_has_satOff;
    }

    CT_Percentage* CT_ScRgbColor::ChildGroup_1::mutable_satOff()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_satOff = true;
    if (!m_satOff)
    {
        m_satOff = new CT_Percentage();
    }
    return m_satOff;
    }

    const CT_Percentage& CT_ScRgbColor::ChildGroup_1::get_satOff() const
    {    
    if (m_satOff)
    {
        return *m_satOff;
    }
    return CT_Percentage::default_instance();
    }

    bool CT_ScRgbColor::ChildGroup_1::has_satMod() const
    {    
    return m_has_satMod;
    }

    CT_Percentage* CT_ScRgbColor::ChildGroup_1::mutable_satMod()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_satMod = true;
    if (!m_satMod)
    {
        m_satMod = new CT_Percentage();
    }
    return m_satMod;
    }

    const CT_Percentage& CT_ScRgbColor::ChildGroup_1::get_satMod() const
    {    
    if (m_satMod)
    {
        return *m_satMod;
    }
    return CT_Percentage::default_instance();
    }

    bool CT_ScRgbColor::ChildGroup_1::has_lum() const
    {    
    return m_has_lum;
    }

    CT_Percentage* CT_ScRgbColor::ChildGroup_1::mutable_lum()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_lum = true;
    if (!m_lum)
    {
        m_lum = new CT_Percentage();
    }
    return m_lum;
    }

    const CT_Percentage& CT_ScRgbColor::ChildGroup_1::get_lum() const
    {    
    if (m_lum)
    {
        return *m_lum;
    }
    return CT_Percentage::default_instance();
    }

    bool CT_ScRgbColor::ChildGroup_1::has_lumOff() const
    {    
    return m_has_lumOff;
    }

    CT_Percentage* CT_ScRgbColor::ChildGroup_1::mutable_lumOff()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_lumOff = true;
    if (!m_lumOff)
    {
        m_lumOff = new CT_Percentage();
    }
    return m_lumOff;
    }

    const CT_Percentage& CT_ScRgbColor::ChildGroup_1::get_lumOff() const
    {    
    if (m_lumOff)
    {
        return *m_lumOff;
    }
    return CT_Percentage::default_instance();
    }

    bool CT_ScRgbColor::ChildGroup_1::has_lumMod() const
    {    
    return m_has_lumMod;
    }

    CT_Percentage* CT_ScRgbColor::ChildGroup_1::mutable_lumMod()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_lumMod = true;
    if (!m_lumMod)
    {
        m_lumMod = new CT_Percentage();
    }
    return m_lumMod;
    }

    const CT_Percentage& CT_ScRgbColor::ChildGroup_1::get_lumMod() const
    {    
    if (m_lumMod)
    {
        return *m_lumMod;
    }
    return CT_Percentage::default_instance();
    }

    bool CT_ScRgbColor::ChildGroup_1::has_red() const
    {    
    return m_has_red;
    }

    CT_Percentage* CT_ScRgbColor::ChildGroup_1::mutable_red()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_red = true;
    if (!m_red)
    {
        m_red = new CT_Percentage();
    }
    return m_red;
    }

    const CT_Percentage& CT_ScRgbColor::ChildGroup_1::get_red() const
    {    
    if (m_red)
    {
        return *m_red;
    }
    return CT_Percentage::default_instance();
    }

    bool CT_ScRgbColor::ChildGroup_1::has_redOff() const
    {    
    return m_has_redOff;
    }

    CT_Percentage* CT_ScRgbColor::ChildGroup_1::mutable_redOff()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_redOff = true;
    if (!m_redOff)
    {
        m_redOff = new CT_Percentage();
    }
    return m_redOff;
    }

    const CT_Percentage& CT_ScRgbColor::ChildGroup_1::get_redOff() const
    {    
    if (m_redOff)
    {
        return *m_redOff;
    }
    return CT_Percentage::default_instance();
    }

    bool CT_ScRgbColor::ChildGroup_1::has_redMod() const
    {    
    return m_has_redMod;
    }

    CT_Percentage* CT_ScRgbColor::ChildGroup_1::mutable_redMod()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_redMod = true;
    if (!m_redMod)
    {
        m_redMod = new CT_Percentage();
    }
    return m_redMod;
    }

    const CT_Percentage& CT_ScRgbColor::ChildGroup_1::get_redMod() const
    {    
    if (m_redMod)
    {
        return *m_redMod;
    }
    return CT_Percentage::default_instance();
    }

    bool CT_ScRgbColor::ChildGroup_1::has_green() const
    {    
    return m_has_green;
    }

    CT_Percentage* CT_ScRgbColor::ChildGroup_1::mutable_green()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_green = true;
    if (!m_green)
    {
        m_green = new CT_Percentage();
    }
    return m_green;
    }

    const CT_Percentage& CT_ScRgbColor::ChildGroup_1::get_green() const
    {    
    if (m_green)
    {
        return *m_green;
    }
    return CT_Percentage::default_instance();
    }

    bool CT_ScRgbColor::ChildGroup_1::has_greenOff() const
    {    
    return m_has_greenOff;
    }

    CT_Percentage* CT_ScRgbColor::ChildGroup_1::mutable_greenOff()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_greenOff = true;
    if (!m_greenOff)
    {
        m_greenOff = new CT_Percentage();
    }
    return m_greenOff;
    }

    const CT_Percentage& CT_ScRgbColor::ChildGroup_1::get_greenOff() const
    {    
    if (m_greenOff)
    {
        return *m_greenOff;
    }
    return CT_Percentage::default_instance();
    }

    bool CT_ScRgbColor::ChildGroup_1::has_greenMod() const
    {    
    return m_has_greenMod;
    }

    CT_Percentage* CT_ScRgbColor::ChildGroup_1::mutable_greenMod()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_greenMod = true;
    if (!m_greenMod)
    {
        m_greenMod = new CT_Percentage();
    }
    return m_greenMod;
    }

    const CT_Percentage& CT_ScRgbColor::ChildGroup_1::get_greenMod() const
    {    
    if (m_greenMod)
    {
        return *m_greenMod;
    }
    return CT_Percentage::default_instance();
    }

    bool CT_ScRgbColor::ChildGroup_1::has_blue() const
    {    
    return m_has_blue;
    }

    CT_Percentage* CT_ScRgbColor::ChildGroup_1::mutable_blue()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_blue = true;
    if (!m_blue)
    {
        m_blue = new CT_Percentage();
    }
    return m_blue;
    }

    const CT_Percentage& CT_ScRgbColor::ChildGroup_1::get_blue() const
    {    
    if (m_blue)
    {
        return *m_blue;
    }
    return CT_Percentage::default_instance();
    }

    bool CT_ScRgbColor::ChildGroup_1::has_blueOff() const
    {    
    return m_has_blueOff;
    }

    CT_Percentage* CT_ScRgbColor::ChildGroup_1::mutable_blueOff()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_blueOff = true;
    if (!m_blueOff)
    {
        m_blueOff = new CT_Percentage();
    }
    return m_blueOff;
    }

    const CT_Percentage& CT_ScRgbColor::ChildGroup_1::get_blueOff() const
    {    
    if (m_blueOff)
    {
        return *m_blueOff;
    }
    return CT_Percentage::default_instance();
    }

    bool CT_ScRgbColor::ChildGroup_1::has_blueMod() const
    {    
    return m_has_blueMod;
    }

    CT_Percentage* CT_ScRgbColor::ChildGroup_1::mutable_blueMod()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_blueMod = true;
    if (!m_blueMod)
    {
        m_blueMod = new CT_Percentage();
    }
    return m_blueMod;
    }

    const CT_Percentage& CT_ScRgbColor::ChildGroup_1::get_blueMod() const
    {    
    if (m_blueMod)
    {
        return *m_blueMod;
    }
    return CT_Percentage::default_instance();
    }

    bool CT_ScRgbColor::ChildGroup_1::has_gamma() const
    {    
    return m_has_gamma;
    }

    CT_GammaTransform* CT_ScRgbColor::ChildGroup_1::mutable_gamma()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_gamma = true;
    if (!m_gamma)
    {
        m_gamma = new CT_GammaTransform();
    }
    return m_gamma;
    }

    const CT_GammaTransform& CT_ScRgbColor::ChildGroup_1::get_gamma() const
    {    
    if (m_gamma)
    {
        return *m_gamma;
    }
    return CT_GammaTransform::default_instance();
    }

    bool CT_ScRgbColor::ChildGroup_1::has_invGamma() const
    {    
    return m_has_invGamma;
    }

    CT_InverseGammaTransform* CT_ScRgbColor::ChildGroup_1::mutable_invGamma()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = true;
    if (!m_invGamma)
    {
        m_invGamma = new CT_InverseGammaTransform();
    }
    return m_invGamma;
    }

    const CT_InverseGammaTransform& CT_ScRgbColor::ChildGroup_1::get_invGamma() const
    {    
    if (m_invGamma)
    {
        return *m_invGamma;
    }
    return CT_InverseGammaTransform::default_instance();
    }

CT_ScRgbColor* CT_ScRgbColor::default_instance_ = NULL;

    // CT_SRgbColor
    CT_PositiveFixedPercentage* CT_SRgbColor::add_tint()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_PositiveFixedPercentage* pNewChild = pChildGroup->mutable_tint();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_PositiveFixedPercentage* CT_SRgbColor::add_shade()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_PositiveFixedPercentage* pNewChild = pChildGroup->mutable_shade();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_ComplementTransform* CT_SRgbColor::add_comp()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_ComplementTransform* pNewChild = pChildGroup->mutable_comp();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_InverseTransform* CT_SRgbColor::add_inv()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_InverseTransform* pNewChild = pChildGroup->mutable_inv();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_GrayscaleTransform* CT_SRgbColor::add_gray()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_GrayscaleTransform* pNewChild = pChildGroup->mutable_gray();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_PositiveFixedPercentage* CT_SRgbColor::add_alpha()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_PositiveFixedPercentage* pNewChild = pChildGroup->mutable_alpha();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_FixedPercentage* CT_SRgbColor::add_alphaOff()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_FixedPercentage* pNewChild = pChildGroup->mutable_alphaOff();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_PositivePercentage* CT_SRgbColor::add_alphaMod()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_PositivePercentage* pNewChild = pChildGroup->mutable_alphaMod();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_PositiveFixedAngle* CT_SRgbColor::add_hue()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_PositiveFixedAngle* pNewChild = pChildGroup->mutable_hue();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Angle* CT_SRgbColor::add_hueOff()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Angle* pNewChild = pChildGroup->mutable_hueOff();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_PositivePercentage* CT_SRgbColor::add_hueMod()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_PositivePercentage* pNewChild = pChildGroup->mutable_hueMod();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Percentage* CT_SRgbColor::add_sat()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Percentage* pNewChild = pChildGroup->mutable_sat();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Percentage* CT_SRgbColor::add_satOff()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Percentage* pNewChild = pChildGroup->mutable_satOff();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Percentage* CT_SRgbColor::add_satMod()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Percentage* pNewChild = pChildGroup->mutable_satMod();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Percentage* CT_SRgbColor::add_lum()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Percentage* pNewChild = pChildGroup->mutable_lum();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Percentage* CT_SRgbColor::add_lumOff()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Percentage* pNewChild = pChildGroup->mutable_lumOff();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Percentage* CT_SRgbColor::add_lumMod()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Percentage* pNewChild = pChildGroup->mutable_lumMod();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Percentage* CT_SRgbColor::add_red()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Percentage* pNewChild = pChildGroup->mutable_red();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Percentage* CT_SRgbColor::add_redOff()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Percentage* pNewChild = pChildGroup->mutable_redOff();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Percentage* CT_SRgbColor::add_redMod()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Percentage* pNewChild = pChildGroup->mutable_redMod();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Percentage* CT_SRgbColor::add_green()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Percentage* pNewChild = pChildGroup->mutable_green();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Percentage* CT_SRgbColor::add_greenOff()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Percentage* pNewChild = pChildGroup->mutable_greenOff();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Percentage* CT_SRgbColor::add_greenMod()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Percentage* pNewChild = pChildGroup->mutable_greenMod();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Percentage* CT_SRgbColor::add_blue()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Percentage* pNewChild = pChildGroup->mutable_blue();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Percentage* CT_SRgbColor::add_blueOff()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Percentage* pNewChild = pChildGroup->mutable_blueOff();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Percentage* CT_SRgbColor::add_blueMod()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Percentage* pNewChild = pChildGroup->mutable_blueMod();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_GammaTransform* CT_SRgbColor::add_gamma()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_GammaTransform* pNewChild = pChildGroup->mutable_gamma();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_InverseGammaTransform* CT_SRgbColor::add_invGamma()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_InverseGammaTransform* pNewChild = pChildGroup->mutable_invGamma();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    void CT_SRgbColor::clear()
    {    
    m_has_s_val_attr = false;
    
    if (m_s_val_attr)
    {
        delete m_s_val_attr;
        m_s_val_attr = NULL;
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

    void CT_SRgbColor::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
    if (m_has_s_val_attr)
    {
        m_s_val_attr->toXmlAttr("val", _outStream);
    }
    
            _outStream << ">";
            
    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_tint())
            {
                (*iter)->get_tint().toXmlElem("tint", "", _outStream);
            }
            else if ((*iter)->has_shade())
            {
                (*iter)->get_shade().toXmlElem("shade", "", _outStream);
            }
            else if ((*iter)->has_comp())
            {
                (*iter)->get_comp().toXmlElem("comp", "", _outStream);
            }
            else if ((*iter)->has_inv())
            {
                (*iter)->get_inv().toXmlElem("inv", "", _outStream);
            }
            else if ((*iter)->has_gray())
            {
                (*iter)->get_gray().toXmlElem("gray", "", _outStream);
            }
            else if ((*iter)->has_alpha())
            {
                (*iter)->get_alpha().toXmlElem("alpha", "", _outStream);
            }
            else if ((*iter)->has_alphaOff())
            {
                (*iter)->get_alphaOff().toXmlElem("alphaOff", "", _outStream);
            }
            else if ((*iter)->has_alphaMod())
            {
                (*iter)->get_alphaMod().toXmlElem("alphaMod", "", _outStream);
            }
            else if ((*iter)->has_hue())
            {
                (*iter)->get_hue().toXmlElem("hue", "", _outStream);
            }
            else if ((*iter)->has_hueOff())
            {
                (*iter)->get_hueOff().toXmlElem("hueOff", "", _outStream);
            }
            else if ((*iter)->has_hueMod())
            {
                (*iter)->get_hueMod().toXmlElem("hueMod", "", _outStream);
            }
            else if ((*iter)->has_sat())
            {
                (*iter)->get_sat().toXmlElem("sat", "", _outStream);
            }
            else if ((*iter)->has_satOff())
            {
                (*iter)->get_satOff().toXmlElem("satOff", "", _outStream);
            }
            else if ((*iter)->has_satMod())
            {
                (*iter)->get_satMod().toXmlElem("satMod", "", _outStream);
            }
            else if ((*iter)->has_lum())
            {
                (*iter)->get_lum().toXmlElem("lum", "", _outStream);
            }
            else if ((*iter)->has_lumOff())
            {
                (*iter)->get_lumOff().toXmlElem("lumOff", "", _outStream);
            }
            else if ((*iter)->has_lumMod())
            {
                (*iter)->get_lumMod().toXmlElem("lumMod", "", _outStream);
            }
            else if ((*iter)->has_red())
            {
                (*iter)->get_red().toXmlElem("red", "", _outStream);
            }
            else if ((*iter)->has_redOff())
            {
                (*iter)->get_redOff().toXmlElem("redOff", "", _outStream);
            }
            else if ((*iter)->has_redMod())
            {
                (*iter)->get_redMod().toXmlElem("redMod", "", _outStream);
            }
            else if ((*iter)->has_green())
            {
                (*iter)->get_green().toXmlElem("green", "", _outStream);
            }
            else if ((*iter)->has_greenOff())
            {
                (*iter)->get_greenOff().toXmlElem("greenOff", "", _outStream);
            }
            else if ((*iter)->has_greenMod())
            {
                (*iter)->get_greenMod().toXmlElem("greenMod", "", _outStream);
            }
            else if ((*iter)->has_blue())
            {
                (*iter)->get_blue().toXmlElem("blue", "", _outStream);
            }
            else if ((*iter)->has_blueOff())
            {
                (*iter)->get_blueOff().toXmlElem("blueOff", "", _outStream);
            }
            else if ((*iter)->has_blueMod())
            {
                (*iter)->get_blueMod().toXmlElem("blueMod", "", _outStream);
            }
            else if ((*iter)->has_gamma())
            {
                (*iter)->get_gamma().toXmlElem("gamma", "", _outStream);
            }
            else if ((*iter)->has_invGamma())
            {
                (*iter)->get_invGamma().toXmlElem("invGamma", "", _outStream);
            }
        }
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_SRgbColor& CT_SRgbColor::default_instance()
    {    
    if (!CT_SRgbColor::default_instance_)
    {
        CT_SRgbColor::default_instance_ = new CT_SRgbColor();
    }
    return *CT_SRgbColor::default_instance_;
    }

    bool CT_SRgbColor::has_s_val_attr() const
    {    
    return m_has_s_val_attr;
    }

    void CT_SRgbColor::set_s_val_attr(const ns_s::ST_HexColorRGB& _s_val_attr)
    {    
    m_has_s_val_attr = true;
    m_s_val_attr = new ns_s::ST_HexColorRGB(_s_val_attr);
    }

    const ns_s::ST_HexColorRGB& CT_SRgbColor::get_s_val_attr() const
    {    
    if (m_s_val_attr)
    {
        return *m_s_val_attr;
    }
    return ns_s::ST_HexColorRGB::default_instance();
    }


    // CT_SRgbColor::ChildGroup_1
    bool CT_SRgbColor::ChildGroup_1::has_tint() const
    {    
    return m_has_tint;
    }

    CT_PositiveFixedPercentage* CT_SRgbColor::ChildGroup_1::mutable_tint()
    {    
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_tint = true;
    if (!m_tint)
    {
        m_tint = new CT_PositiveFixedPercentage();
    }
    return m_tint;
    }

    const CT_PositiveFixedPercentage& CT_SRgbColor::ChildGroup_1::get_tint() const
    {    
    if (m_tint)
    {
        return *m_tint;
    }
    return CT_PositiveFixedPercentage::default_instance();
    }

    bool CT_SRgbColor::ChildGroup_1::has_shade() const
    {    
    return m_has_shade;
    }

    CT_PositiveFixedPercentage* CT_SRgbColor::ChildGroup_1::mutable_shade()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_shade = true;
    if (!m_shade)
    {
        m_shade = new CT_PositiveFixedPercentage();
    }
    return m_shade;
    }

    const CT_PositiveFixedPercentage& CT_SRgbColor::ChildGroup_1::get_shade() const
    {    
    if (m_shade)
    {
        return *m_shade;
    }
    return CT_PositiveFixedPercentage::default_instance();
    }

    bool CT_SRgbColor::ChildGroup_1::has_comp() const
    {    
    return m_has_comp;
    }

    CT_ComplementTransform* CT_SRgbColor::ChildGroup_1::mutable_comp()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_comp = true;
    if (!m_comp)
    {
        m_comp = new CT_ComplementTransform();
    }
    return m_comp;
    }

    const CT_ComplementTransform& CT_SRgbColor::ChildGroup_1::get_comp() const
    {    
    if (m_comp)
    {
        return *m_comp;
    }
    return CT_ComplementTransform::default_instance();
    }

    bool CT_SRgbColor::ChildGroup_1::has_inv() const
    {    
    return m_has_inv;
    }

    CT_InverseTransform* CT_SRgbColor::ChildGroup_1::mutable_inv()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_inv = true;
    if (!m_inv)
    {
        m_inv = new CT_InverseTransform();
    }
    return m_inv;
    }

    const CT_InverseTransform& CT_SRgbColor::ChildGroup_1::get_inv() const
    {    
    if (m_inv)
    {
        return *m_inv;
    }
    return CT_InverseTransform::default_instance();
    }

    bool CT_SRgbColor::ChildGroup_1::has_gray() const
    {    
    return m_has_gray;
    }

    CT_GrayscaleTransform* CT_SRgbColor::ChildGroup_1::mutable_gray()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_gray = true;
    if (!m_gray)
    {
        m_gray = new CT_GrayscaleTransform();
    }
    return m_gray;
    }

    const CT_GrayscaleTransform& CT_SRgbColor::ChildGroup_1::get_gray() const
    {    
    if (m_gray)
    {
        return *m_gray;
    }
    return CT_GrayscaleTransform::default_instance();
    }

    bool CT_SRgbColor::ChildGroup_1::has_alpha() const
    {    
    return m_has_alpha;
    }

    CT_PositiveFixedPercentage* CT_SRgbColor::ChildGroup_1::mutable_alpha()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_alpha = true;
    if (!m_alpha)
    {
        m_alpha = new CT_PositiveFixedPercentage();
    }
    return m_alpha;
    }

    const CT_PositiveFixedPercentage& CT_SRgbColor::ChildGroup_1::get_alpha() const
    {    
    if (m_alpha)
    {
        return *m_alpha;
    }
    return CT_PositiveFixedPercentage::default_instance();
    }

    bool CT_SRgbColor::ChildGroup_1::has_alphaOff() const
    {    
    return m_has_alphaOff;
    }

    CT_FixedPercentage* CT_SRgbColor::ChildGroup_1::mutable_alphaOff()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_alphaOff = true;
    if (!m_alphaOff)
    {
        m_alphaOff = new CT_FixedPercentage();
    }
    return m_alphaOff;
    }

    const CT_FixedPercentage& CT_SRgbColor::ChildGroup_1::get_alphaOff() const
    {    
    if (m_alphaOff)
    {
        return *m_alphaOff;
    }
    return CT_FixedPercentage::default_instance();
    }

    bool CT_SRgbColor::ChildGroup_1::has_alphaMod() const
    {    
    return m_has_alphaMod;
    }

    CT_PositivePercentage* CT_SRgbColor::ChildGroup_1::mutable_alphaMod()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_alphaMod = true;
    if (!m_alphaMod)
    {
        m_alphaMod = new CT_PositivePercentage();
    }
    return m_alphaMod;
    }

    const CT_PositivePercentage& CT_SRgbColor::ChildGroup_1::get_alphaMod() const
    {    
    if (m_alphaMod)
    {
        return *m_alphaMod;
    }
    return CT_PositivePercentage::default_instance();
    }

    bool CT_SRgbColor::ChildGroup_1::has_hue() const
    {    
    return m_has_hue;
    }

    CT_PositiveFixedAngle* CT_SRgbColor::ChildGroup_1::mutable_hue()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_hue = true;
    if (!m_hue)
    {
        m_hue = new CT_PositiveFixedAngle();
    }
    return m_hue;
    }

    const CT_PositiveFixedAngle& CT_SRgbColor::ChildGroup_1::get_hue() const
    {    
    if (m_hue)
    {
        return *m_hue;
    }
    return CT_PositiveFixedAngle::default_instance();
    }

    bool CT_SRgbColor::ChildGroup_1::has_hueOff() const
    {    
    return m_has_hueOff;
    }

    CT_Angle* CT_SRgbColor::ChildGroup_1::mutable_hueOff()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_hueOff = true;
    if (!m_hueOff)
    {
        m_hueOff = new CT_Angle();
    }
    return m_hueOff;
    }

    const CT_Angle& CT_SRgbColor::ChildGroup_1::get_hueOff() const
    {    
    if (m_hueOff)
    {
        return *m_hueOff;
    }
    return CT_Angle::default_instance();
    }

    bool CT_SRgbColor::ChildGroup_1::has_hueMod() const
    {    
    return m_has_hueMod;
    }

    CT_PositivePercentage* CT_SRgbColor::ChildGroup_1::mutable_hueMod()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_hueMod = true;
    if (!m_hueMod)
    {
        m_hueMod = new CT_PositivePercentage();
    }
    return m_hueMod;
    }

    const CT_PositivePercentage& CT_SRgbColor::ChildGroup_1::get_hueMod() const
    {    
    if (m_hueMod)
    {
        return *m_hueMod;
    }
    return CT_PositivePercentage::default_instance();
    }

    bool CT_SRgbColor::ChildGroup_1::has_sat() const
    {    
    return m_has_sat;
    }

    CT_Percentage* CT_SRgbColor::ChildGroup_1::mutable_sat()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_sat = true;
    if (!m_sat)
    {
        m_sat = new CT_Percentage();
    }
    return m_sat;
    }

    const CT_Percentage& CT_SRgbColor::ChildGroup_1::get_sat() const
    {    
    if (m_sat)
    {
        return *m_sat;
    }
    return CT_Percentage::default_instance();
    }

    bool CT_SRgbColor::ChildGroup_1::has_satOff() const
    {    
    return m_has_satOff;
    }

    CT_Percentage* CT_SRgbColor::ChildGroup_1::mutable_satOff()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_satOff = true;
    if (!m_satOff)
    {
        m_satOff = new CT_Percentage();
    }
    return m_satOff;
    }

    const CT_Percentage& CT_SRgbColor::ChildGroup_1::get_satOff() const
    {    
    if (m_satOff)
    {
        return *m_satOff;
    }
    return CT_Percentage::default_instance();
    }

    bool CT_SRgbColor::ChildGroup_1::has_satMod() const
    {    
    return m_has_satMod;
    }

    CT_Percentage* CT_SRgbColor::ChildGroup_1::mutable_satMod()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_satMod = true;
    if (!m_satMod)
    {
        m_satMod = new CT_Percentage();
    }
    return m_satMod;
    }

    const CT_Percentage& CT_SRgbColor::ChildGroup_1::get_satMod() const
    {    
    if (m_satMod)
    {
        return *m_satMod;
    }
    return CT_Percentage::default_instance();
    }

    bool CT_SRgbColor::ChildGroup_1::has_lum() const
    {    
    return m_has_lum;
    }

    CT_Percentage* CT_SRgbColor::ChildGroup_1::mutable_lum()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_lum = true;
    if (!m_lum)
    {
        m_lum = new CT_Percentage();
    }
    return m_lum;
    }

    const CT_Percentage& CT_SRgbColor::ChildGroup_1::get_lum() const
    {    
    if (m_lum)
    {
        return *m_lum;
    }
    return CT_Percentage::default_instance();
    }

    bool CT_SRgbColor::ChildGroup_1::has_lumOff() const
    {    
    return m_has_lumOff;
    }

    CT_Percentage* CT_SRgbColor::ChildGroup_1::mutable_lumOff()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_lumOff = true;
    if (!m_lumOff)
    {
        m_lumOff = new CT_Percentage();
    }
    return m_lumOff;
    }

    const CT_Percentage& CT_SRgbColor::ChildGroup_1::get_lumOff() const
    {    
    if (m_lumOff)
    {
        return *m_lumOff;
    }
    return CT_Percentage::default_instance();
    }

    bool CT_SRgbColor::ChildGroup_1::has_lumMod() const
    {    
    return m_has_lumMod;
    }

    CT_Percentage* CT_SRgbColor::ChildGroup_1::mutable_lumMod()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_lumMod = true;
    if (!m_lumMod)
    {
        m_lumMod = new CT_Percentage();
    }
    return m_lumMod;
    }

    const CT_Percentage& CT_SRgbColor::ChildGroup_1::get_lumMod() const
    {    
    if (m_lumMod)
    {
        return *m_lumMod;
    }
    return CT_Percentage::default_instance();
    }

    bool CT_SRgbColor::ChildGroup_1::has_red() const
    {    
    return m_has_red;
    }

    CT_Percentage* CT_SRgbColor::ChildGroup_1::mutable_red()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_red = true;
    if (!m_red)
    {
        m_red = new CT_Percentage();
    }
    return m_red;
    }

    const CT_Percentage& CT_SRgbColor::ChildGroup_1::get_red() const
    {    
    if (m_red)
    {
        return *m_red;
    }
    return CT_Percentage::default_instance();
    }

    bool CT_SRgbColor::ChildGroup_1::has_redOff() const
    {    
    return m_has_redOff;
    }

    CT_Percentage* CT_SRgbColor::ChildGroup_1::mutable_redOff()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_redOff = true;
    if (!m_redOff)
    {
        m_redOff = new CT_Percentage();
    }
    return m_redOff;
    }

    const CT_Percentage& CT_SRgbColor::ChildGroup_1::get_redOff() const
    {    
    if (m_redOff)
    {
        return *m_redOff;
    }
    return CT_Percentage::default_instance();
    }

    bool CT_SRgbColor::ChildGroup_1::has_redMod() const
    {    
    return m_has_redMod;
    }

    CT_Percentage* CT_SRgbColor::ChildGroup_1::mutable_redMod()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_redMod = true;
    if (!m_redMod)
    {
        m_redMod = new CT_Percentage();
    }
    return m_redMod;
    }

    const CT_Percentage& CT_SRgbColor::ChildGroup_1::get_redMod() const
    {    
    if (m_redMod)
    {
        return *m_redMod;
    }
    return CT_Percentage::default_instance();
    }

    bool CT_SRgbColor::ChildGroup_1::has_green() const
    {    
    return m_has_green;
    }

    CT_Percentage* CT_SRgbColor::ChildGroup_1::mutable_green()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_green = true;
    if (!m_green)
    {
        m_green = new CT_Percentage();
    }
    return m_green;
    }

    const CT_Percentage& CT_SRgbColor::ChildGroup_1::get_green() const
    {    
    if (m_green)
    {
        return *m_green;
    }
    return CT_Percentage::default_instance();
    }

    bool CT_SRgbColor::ChildGroup_1::has_greenOff() const
    {    
    return m_has_greenOff;
    }

    CT_Percentage* CT_SRgbColor::ChildGroup_1::mutable_greenOff()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_greenOff = true;
    if (!m_greenOff)
    {
        m_greenOff = new CT_Percentage();
    }
    return m_greenOff;
    }

    const CT_Percentage& CT_SRgbColor::ChildGroup_1::get_greenOff() const
    {    
    if (m_greenOff)
    {
        return *m_greenOff;
    }
    return CT_Percentage::default_instance();
    }

    bool CT_SRgbColor::ChildGroup_1::has_greenMod() const
    {    
    return m_has_greenMod;
    }

    CT_Percentage* CT_SRgbColor::ChildGroup_1::mutable_greenMod()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_greenMod = true;
    if (!m_greenMod)
    {
        m_greenMod = new CT_Percentage();
    }
    return m_greenMod;
    }

    const CT_Percentage& CT_SRgbColor::ChildGroup_1::get_greenMod() const
    {    
    if (m_greenMod)
    {
        return *m_greenMod;
    }
    return CT_Percentage::default_instance();
    }

    bool CT_SRgbColor::ChildGroup_1::has_blue() const
    {    
    return m_has_blue;
    }

    CT_Percentage* CT_SRgbColor::ChildGroup_1::mutable_blue()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_blue = true;
    if (!m_blue)
    {
        m_blue = new CT_Percentage();
    }
    return m_blue;
    }

    const CT_Percentage& CT_SRgbColor::ChildGroup_1::get_blue() const
    {    
    if (m_blue)
    {
        return *m_blue;
    }
    return CT_Percentage::default_instance();
    }

    bool CT_SRgbColor::ChildGroup_1::has_blueOff() const
    {    
    return m_has_blueOff;
    }

    CT_Percentage* CT_SRgbColor::ChildGroup_1::mutable_blueOff()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_blueOff = true;
    if (!m_blueOff)
    {
        m_blueOff = new CT_Percentage();
    }
    return m_blueOff;
    }

    const CT_Percentage& CT_SRgbColor::ChildGroup_1::get_blueOff() const
    {    
    if (m_blueOff)
    {
        return *m_blueOff;
    }
    return CT_Percentage::default_instance();
    }

    bool CT_SRgbColor::ChildGroup_1::has_blueMod() const
    {    
    return m_has_blueMod;
    }

    CT_Percentage* CT_SRgbColor::ChildGroup_1::mutable_blueMod()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_blueMod = true;
    if (!m_blueMod)
    {
        m_blueMod = new CT_Percentage();
    }
    return m_blueMod;
    }

    const CT_Percentage& CT_SRgbColor::ChildGroup_1::get_blueMod() const
    {    
    if (m_blueMod)
    {
        return *m_blueMod;
    }
    return CT_Percentage::default_instance();
    }

    bool CT_SRgbColor::ChildGroup_1::has_gamma() const
    {    
    return m_has_gamma;
    }

    CT_GammaTransform* CT_SRgbColor::ChildGroup_1::mutable_gamma()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_gamma = true;
    if (!m_gamma)
    {
        m_gamma = new CT_GammaTransform();
    }
    return m_gamma;
    }

    const CT_GammaTransform& CT_SRgbColor::ChildGroup_1::get_gamma() const
    {    
    if (m_gamma)
    {
        return *m_gamma;
    }
    return CT_GammaTransform::default_instance();
    }

    bool CT_SRgbColor::ChildGroup_1::has_invGamma() const
    {    
    return m_has_invGamma;
    }

    CT_InverseGammaTransform* CT_SRgbColor::ChildGroup_1::mutable_invGamma()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = true;
    if (!m_invGamma)
    {
        m_invGamma = new CT_InverseGammaTransform();
    }
    return m_invGamma;
    }

    const CT_InverseGammaTransform& CT_SRgbColor::ChildGroup_1::get_invGamma() const
    {    
    if (m_invGamma)
    {
        return *m_invGamma;
    }
    return CT_InverseGammaTransform::default_instance();
    }

CT_SRgbColor* CT_SRgbColor::default_instance_ = NULL;

    // CT_HslColor
    CT_PositiveFixedPercentage* CT_HslColor::add_tint()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_PositiveFixedPercentage* pNewChild = pChildGroup->mutable_tint();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_PositiveFixedPercentage* CT_HslColor::add_shade()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_PositiveFixedPercentage* pNewChild = pChildGroup->mutable_shade();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_ComplementTransform* CT_HslColor::add_comp()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_ComplementTransform* pNewChild = pChildGroup->mutable_comp();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_InverseTransform* CT_HslColor::add_inv()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_InverseTransform* pNewChild = pChildGroup->mutable_inv();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_GrayscaleTransform* CT_HslColor::add_gray()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_GrayscaleTransform* pNewChild = pChildGroup->mutable_gray();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_PositiveFixedPercentage* CT_HslColor::add_alpha()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_PositiveFixedPercentage* pNewChild = pChildGroup->mutable_alpha();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_FixedPercentage* CT_HslColor::add_alphaOff()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_FixedPercentage* pNewChild = pChildGroup->mutable_alphaOff();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_PositivePercentage* CT_HslColor::add_alphaMod()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_PositivePercentage* pNewChild = pChildGroup->mutable_alphaMod();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_PositiveFixedAngle* CT_HslColor::add_hue()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_PositiveFixedAngle* pNewChild = pChildGroup->mutable_hue();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Angle* CT_HslColor::add_hueOff()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Angle* pNewChild = pChildGroup->mutable_hueOff();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_PositivePercentage* CT_HslColor::add_hueMod()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_PositivePercentage* pNewChild = pChildGroup->mutable_hueMod();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Percentage* CT_HslColor::add_sat()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Percentage* pNewChild = pChildGroup->mutable_sat();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Percentage* CT_HslColor::add_satOff()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Percentage* pNewChild = pChildGroup->mutable_satOff();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Percentage* CT_HslColor::add_satMod()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Percentage* pNewChild = pChildGroup->mutable_satMod();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Percentage* CT_HslColor::add_lum()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Percentage* pNewChild = pChildGroup->mutable_lum();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Percentage* CT_HslColor::add_lumOff()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Percentage* pNewChild = pChildGroup->mutable_lumOff();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Percentage* CT_HslColor::add_lumMod()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Percentage* pNewChild = pChildGroup->mutable_lumMod();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Percentage* CT_HslColor::add_red()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Percentage* pNewChild = pChildGroup->mutable_red();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Percentage* CT_HslColor::add_redOff()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Percentage* pNewChild = pChildGroup->mutable_redOff();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Percentage* CT_HslColor::add_redMod()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Percentage* pNewChild = pChildGroup->mutable_redMod();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Percentage* CT_HslColor::add_green()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Percentage* pNewChild = pChildGroup->mutable_green();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Percentage* CT_HslColor::add_greenOff()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Percentage* pNewChild = pChildGroup->mutable_greenOff();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Percentage* CT_HslColor::add_greenMod()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Percentage* pNewChild = pChildGroup->mutable_greenMod();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Percentage* CT_HslColor::add_blue()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Percentage* pNewChild = pChildGroup->mutable_blue();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Percentage* CT_HslColor::add_blueOff()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Percentage* pNewChild = pChildGroup->mutable_blueOff();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Percentage* CT_HslColor::add_blueMod()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Percentage* pNewChild = pChildGroup->mutable_blueMod();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_GammaTransform* CT_HslColor::add_gamma()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_GammaTransform* pNewChild = pChildGroup->mutable_gamma();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_InverseGammaTransform* CT_HslColor::add_invGamma()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_InverseGammaTransform* pNewChild = pChildGroup->mutable_invGamma();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    void CT_HslColor::clear()
    {    
    m_has_hue_attr = false;
    
    if (m_hue_attr)
    {
        delete m_hue_attr;
        m_hue_attr = NULL;
    }
    
    
    m_has_sat_attr = false;
    
    if (m_sat_attr)
    {
        delete m_sat_attr;
        m_sat_attr = NULL;
    }
    
    
    m_has_lum_attr = false;
    
    if (m_lum_attr)
    {
        delete m_lum_attr;
        m_lum_attr = NULL;
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

    void CT_HslColor::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
    if (m_has_hue_attr)
    {
        m_hue_attr->toXmlAttr("hue", _outStream);
    }
    
    
    if (m_has_sat_attr)
    {
        m_sat_attr->toXmlAttr("sat", _outStream);
    }
    
    
    if (m_has_lum_attr)
    {
        m_lum_attr->toXmlAttr("lum", _outStream);
    }
    
            _outStream << ">";
            
    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_tint())
            {
                (*iter)->get_tint().toXmlElem("tint", "", _outStream);
            }
            else if ((*iter)->has_shade())
            {
                (*iter)->get_shade().toXmlElem("shade", "", _outStream);
            }
            else if ((*iter)->has_comp())
            {
                (*iter)->get_comp().toXmlElem("comp", "", _outStream);
            }
            else if ((*iter)->has_inv())
            {
                (*iter)->get_inv().toXmlElem("inv", "", _outStream);
            }
            else if ((*iter)->has_gray())
            {
                (*iter)->get_gray().toXmlElem("gray", "", _outStream);
            }
            else if ((*iter)->has_alpha())
            {
                (*iter)->get_alpha().toXmlElem("alpha", "", _outStream);
            }
            else if ((*iter)->has_alphaOff())
            {
                (*iter)->get_alphaOff().toXmlElem("alphaOff", "", _outStream);
            }
            else if ((*iter)->has_alphaMod())
            {
                (*iter)->get_alphaMod().toXmlElem("alphaMod", "", _outStream);
            }
            else if ((*iter)->has_hue())
            {
                (*iter)->get_hue().toXmlElem("hue", "", _outStream);
            }
            else if ((*iter)->has_hueOff())
            {
                (*iter)->get_hueOff().toXmlElem("hueOff", "", _outStream);
            }
            else if ((*iter)->has_hueMod())
            {
                (*iter)->get_hueMod().toXmlElem("hueMod", "", _outStream);
            }
            else if ((*iter)->has_sat())
            {
                (*iter)->get_sat().toXmlElem("sat", "", _outStream);
            }
            else if ((*iter)->has_satOff())
            {
                (*iter)->get_satOff().toXmlElem("satOff", "", _outStream);
            }
            else if ((*iter)->has_satMod())
            {
                (*iter)->get_satMod().toXmlElem("satMod", "", _outStream);
            }
            else if ((*iter)->has_lum())
            {
                (*iter)->get_lum().toXmlElem("lum", "", _outStream);
            }
            else if ((*iter)->has_lumOff())
            {
                (*iter)->get_lumOff().toXmlElem("lumOff", "", _outStream);
            }
            else if ((*iter)->has_lumMod())
            {
                (*iter)->get_lumMod().toXmlElem("lumMod", "", _outStream);
            }
            else if ((*iter)->has_red())
            {
                (*iter)->get_red().toXmlElem("red", "", _outStream);
            }
            else if ((*iter)->has_redOff())
            {
                (*iter)->get_redOff().toXmlElem("redOff", "", _outStream);
            }
            else if ((*iter)->has_redMod())
            {
                (*iter)->get_redMod().toXmlElem("redMod", "", _outStream);
            }
            else if ((*iter)->has_green())
            {
                (*iter)->get_green().toXmlElem("green", "", _outStream);
            }
            else if ((*iter)->has_greenOff())
            {
                (*iter)->get_greenOff().toXmlElem("greenOff", "", _outStream);
            }
            else if ((*iter)->has_greenMod())
            {
                (*iter)->get_greenMod().toXmlElem("greenMod", "", _outStream);
            }
            else if ((*iter)->has_blue())
            {
                (*iter)->get_blue().toXmlElem("blue", "", _outStream);
            }
            else if ((*iter)->has_blueOff())
            {
                (*iter)->get_blueOff().toXmlElem("blueOff", "", _outStream);
            }
            else if ((*iter)->has_blueMod())
            {
                (*iter)->get_blueMod().toXmlElem("blueMod", "", _outStream);
            }
            else if ((*iter)->has_gamma())
            {
                (*iter)->get_gamma().toXmlElem("gamma", "", _outStream);
            }
            else if ((*iter)->has_invGamma())
            {
                (*iter)->get_invGamma().toXmlElem("invGamma", "", _outStream);
            }
        }
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_HslColor& CT_HslColor::default_instance()
    {    
    if (!CT_HslColor::default_instance_)
    {
        CT_HslColor::default_instance_ = new CT_HslColor();
    }
    return *CT_HslColor::default_instance_;
    }

    bool CT_HslColor::has_hue_attr() const
    {    
    return m_has_hue_attr;
    }

    void CT_HslColor::set_hue_attr(const ST_PositiveFixedAngle& _hue_attr)
    {    
    m_has_hue_attr = true;
    m_hue_attr = new ST_PositiveFixedAngle(_hue_attr);
    }

    const ST_PositiveFixedAngle& CT_HslColor::get_hue_attr() const
    {    
    if (m_hue_attr)
    {
        return *m_hue_attr;
    }
    return ST_PositiveFixedAngle::default_instance();
    }

    bool CT_HslColor::has_sat_attr() const
    {    
    return m_has_sat_attr;
    }

    void CT_HslColor::set_sat_attr(const ST_Percentage& _sat_attr)
    {    
    m_has_sat_attr = true;
    m_sat_attr = new ST_Percentage(_sat_attr);
    }

    const ST_Percentage& CT_HslColor::get_sat_attr() const
    {    
    if (m_sat_attr)
    {
        return *m_sat_attr;
    }
    return ST_Percentage::default_instance();
    }

    bool CT_HslColor::has_lum_attr() const
    {    
    return m_has_lum_attr;
    }

    void CT_HslColor::set_lum_attr(const ST_Percentage& _lum_attr)
    {    
    m_has_lum_attr = true;
    m_lum_attr = new ST_Percentage(_lum_attr);
    }

    const ST_Percentage& CT_HslColor::get_lum_attr() const
    {    
    if (m_lum_attr)
    {
        return *m_lum_attr;
    }
    return ST_Percentage::default_instance();
    }


    // CT_HslColor::ChildGroup_1
    bool CT_HslColor::ChildGroup_1::has_tint() const
    {    
    return m_has_tint;
    }

    CT_PositiveFixedPercentage* CT_HslColor::ChildGroup_1::mutable_tint()
    {    
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_tint = true;
    if (!m_tint)
    {
        m_tint = new CT_PositiveFixedPercentage();
    }
    return m_tint;
    }

    const CT_PositiveFixedPercentage& CT_HslColor::ChildGroup_1::get_tint() const
    {    
    if (m_tint)
    {
        return *m_tint;
    }
    return CT_PositiveFixedPercentage::default_instance();
    }

    bool CT_HslColor::ChildGroup_1::has_shade() const
    {    
    return m_has_shade;
    }

    CT_PositiveFixedPercentage* CT_HslColor::ChildGroup_1::mutable_shade()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_shade = true;
    if (!m_shade)
    {
        m_shade = new CT_PositiveFixedPercentage();
    }
    return m_shade;
    }

    const CT_PositiveFixedPercentage& CT_HslColor::ChildGroup_1::get_shade() const
    {    
    if (m_shade)
    {
        return *m_shade;
    }
    return CT_PositiveFixedPercentage::default_instance();
    }

    bool CT_HslColor::ChildGroup_1::has_comp() const
    {    
    return m_has_comp;
    }

    CT_ComplementTransform* CT_HslColor::ChildGroup_1::mutable_comp()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_comp = true;
    if (!m_comp)
    {
        m_comp = new CT_ComplementTransform();
    }
    return m_comp;
    }

    const CT_ComplementTransform& CT_HslColor::ChildGroup_1::get_comp() const
    {    
    if (m_comp)
    {
        return *m_comp;
    }
    return CT_ComplementTransform::default_instance();
    }

    bool CT_HslColor::ChildGroup_1::has_inv() const
    {    
    return m_has_inv;
    }

    CT_InverseTransform* CT_HslColor::ChildGroup_1::mutable_inv()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_inv = true;
    if (!m_inv)
    {
        m_inv = new CT_InverseTransform();
    }
    return m_inv;
    }

    const CT_InverseTransform& CT_HslColor::ChildGroup_1::get_inv() const
    {    
    if (m_inv)
    {
        return *m_inv;
    }
    return CT_InverseTransform::default_instance();
    }

    bool CT_HslColor::ChildGroup_1::has_gray() const
    {    
    return m_has_gray;
    }

    CT_GrayscaleTransform* CT_HslColor::ChildGroup_1::mutable_gray()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_gray = true;
    if (!m_gray)
    {
        m_gray = new CT_GrayscaleTransform();
    }
    return m_gray;
    }

    const CT_GrayscaleTransform& CT_HslColor::ChildGroup_1::get_gray() const
    {    
    if (m_gray)
    {
        return *m_gray;
    }
    return CT_GrayscaleTransform::default_instance();
    }

    bool CT_HslColor::ChildGroup_1::has_alpha() const
    {    
    return m_has_alpha;
    }

    CT_PositiveFixedPercentage* CT_HslColor::ChildGroup_1::mutable_alpha()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_alpha = true;
    if (!m_alpha)
    {
        m_alpha = new CT_PositiveFixedPercentage();
    }
    return m_alpha;
    }

    const CT_PositiveFixedPercentage& CT_HslColor::ChildGroup_1::get_alpha() const
    {    
    if (m_alpha)
    {
        return *m_alpha;
    }
    return CT_PositiveFixedPercentage::default_instance();
    }

    bool CT_HslColor::ChildGroup_1::has_alphaOff() const
    {    
    return m_has_alphaOff;
    }

    CT_FixedPercentage* CT_HslColor::ChildGroup_1::mutable_alphaOff()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_alphaOff = true;
    if (!m_alphaOff)
    {
        m_alphaOff = new CT_FixedPercentage();
    }
    return m_alphaOff;
    }

    const CT_FixedPercentage& CT_HslColor::ChildGroup_1::get_alphaOff() const
    {    
    if (m_alphaOff)
    {
        return *m_alphaOff;
    }
    return CT_FixedPercentage::default_instance();
    }

    bool CT_HslColor::ChildGroup_1::has_alphaMod() const
    {    
    return m_has_alphaMod;
    }

    CT_PositivePercentage* CT_HslColor::ChildGroup_1::mutable_alphaMod()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_alphaMod = true;
    if (!m_alphaMod)
    {
        m_alphaMod = new CT_PositivePercentage();
    }
    return m_alphaMod;
    }

    const CT_PositivePercentage& CT_HslColor::ChildGroup_1::get_alphaMod() const
    {    
    if (m_alphaMod)
    {
        return *m_alphaMod;
    }
    return CT_PositivePercentage::default_instance();
    }

    bool CT_HslColor::ChildGroup_1::has_hue() const
    {    
    return m_has_hue;
    }

    CT_PositiveFixedAngle* CT_HslColor::ChildGroup_1::mutable_hue()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_hue = true;
    if (!m_hue)
    {
        m_hue = new CT_PositiveFixedAngle();
    }
    return m_hue;
    }

    const CT_PositiveFixedAngle& CT_HslColor::ChildGroup_1::get_hue() const
    {    
    if (m_hue)
    {
        return *m_hue;
    }
    return CT_PositiveFixedAngle::default_instance();
    }

    bool CT_HslColor::ChildGroup_1::has_hueOff() const
    {    
    return m_has_hueOff;
    }

    CT_Angle* CT_HslColor::ChildGroup_1::mutable_hueOff()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_hueOff = true;
    if (!m_hueOff)
    {
        m_hueOff = new CT_Angle();
    }
    return m_hueOff;
    }

    const CT_Angle& CT_HslColor::ChildGroup_1::get_hueOff() const
    {    
    if (m_hueOff)
    {
        return *m_hueOff;
    }
    return CT_Angle::default_instance();
    }

    bool CT_HslColor::ChildGroup_1::has_hueMod() const
    {    
    return m_has_hueMod;
    }

    CT_PositivePercentage* CT_HslColor::ChildGroup_1::mutable_hueMod()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_hueMod = true;
    if (!m_hueMod)
    {
        m_hueMod = new CT_PositivePercentage();
    }
    return m_hueMod;
    }

    const CT_PositivePercentage& CT_HslColor::ChildGroup_1::get_hueMod() const
    {    
    if (m_hueMod)
    {
        return *m_hueMod;
    }
    return CT_PositivePercentage::default_instance();
    }

    bool CT_HslColor::ChildGroup_1::has_sat() const
    {    
    return m_has_sat;
    }

    CT_Percentage* CT_HslColor::ChildGroup_1::mutable_sat()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_sat = true;
    if (!m_sat)
    {
        m_sat = new CT_Percentage();
    }
    return m_sat;
    }

    const CT_Percentage& CT_HslColor::ChildGroup_1::get_sat() const
    {    
    if (m_sat)
    {
        return *m_sat;
    }
    return CT_Percentage::default_instance();
    }

    bool CT_HslColor::ChildGroup_1::has_satOff() const
    {    
    return m_has_satOff;
    }

    CT_Percentage* CT_HslColor::ChildGroup_1::mutable_satOff()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_satOff = true;
    if (!m_satOff)
    {
        m_satOff = new CT_Percentage();
    }
    return m_satOff;
    }

    const CT_Percentage& CT_HslColor::ChildGroup_1::get_satOff() const
    {    
    if (m_satOff)
    {
        return *m_satOff;
    }
    return CT_Percentage::default_instance();
    }

    bool CT_HslColor::ChildGroup_1::has_satMod() const
    {    
    return m_has_satMod;
    }

    CT_Percentage* CT_HslColor::ChildGroup_1::mutable_satMod()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_satMod = true;
    if (!m_satMod)
    {
        m_satMod = new CT_Percentage();
    }
    return m_satMod;
    }

    const CT_Percentage& CT_HslColor::ChildGroup_1::get_satMod() const
    {    
    if (m_satMod)
    {
        return *m_satMod;
    }
    return CT_Percentage::default_instance();
    }

    bool CT_HslColor::ChildGroup_1::has_lum() const
    {    
    return m_has_lum;
    }

    CT_Percentage* CT_HslColor::ChildGroup_1::mutable_lum()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_lum = true;
    if (!m_lum)
    {
        m_lum = new CT_Percentage();
    }
    return m_lum;
    }

    const CT_Percentage& CT_HslColor::ChildGroup_1::get_lum() const
    {    
    if (m_lum)
    {
        return *m_lum;
    }
    return CT_Percentage::default_instance();
    }

    bool CT_HslColor::ChildGroup_1::has_lumOff() const
    {    
    return m_has_lumOff;
    }

    CT_Percentage* CT_HslColor::ChildGroup_1::mutable_lumOff()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_lumOff = true;
    if (!m_lumOff)
    {
        m_lumOff = new CT_Percentage();
    }
    return m_lumOff;
    }

    const CT_Percentage& CT_HslColor::ChildGroup_1::get_lumOff() const
    {    
    if (m_lumOff)
    {
        return *m_lumOff;
    }
    return CT_Percentage::default_instance();
    }

    bool CT_HslColor::ChildGroup_1::has_lumMod() const
    {    
    return m_has_lumMod;
    }

    CT_Percentage* CT_HslColor::ChildGroup_1::mutable_lumMod()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_lumMod = true;
    if (!m_lumMod)
    {
        m_lumMod = new CT_Percentage();
    }
    return m_lumMod;
    }

    const CT_Percentage& CT_HslColor::ChildGroup_1::get_lumMod() const
    {    
    if (m_lumMod)
    {
        return *m_lumMod;
    }
    return CT_Percentage::default_instance();
    }

    bool CT_HslColor::ChildGroup_1::has_red() const
    {    
    return m_has_red;
    }

    CT_Percentage* CT_HslColor::ChildGroup_1::mutable_red()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_red = true;
    if (!m_red)
    {
        m_red = new CT_Percentage();
    }
    return m_red;
    }

    const CT_Percentage& CT_HslColor::ChildGroup_1::get_red() const
    {    
    if (m_red)
    {
        return *m_red;
    }
    return CT_Percentage::default_instance();
    }

    bool CT_HslColor::ChildGroup_1::has_redOff() const
    {    
    return m_has_redOff;
    }

    CT_Percentage* CT_HslColor::ChildGroup_1::mutable_redOff()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_redOff = true;
    if (!m_redOff)
    {
        m_redOff = new CT_Percentage();
    }
    return m_redOff;
    }

    const CT_Percentage& CT_HslColor::ChildGroup_1::get_redOff() const
    {    
    if (m_redOff)
    {
        return *m_redOff;
    }
    return CT_Percentage::default_instance();
    }

    bool CT_HslColor::ChildGroup_1::has_redMod() const
    {    
    return m_has_redMod;
    }

    CT_Percentage* CT_HslColor::ChildGroup_1::mutable_redMod()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_redMod = true;
    if (!m_redMod)
    {
        m_redMod = new CT_Percentage();
    }
    return m_redMod;
    }

    const CT_Percentage& CT_HslColor::ChildGroup_1::get_redMod() const
    {    
    if (m_redMod)
    {
        return *m_redMod;
    }
    return CT_Percentage::default_instance();
    }

    bool CT_HslColor::ChildGroup_1::has_green() const
    {    
    return m_has_green;
    }

    CT_Percentage* CT_HslColor::ChildGroup_1::mutable_green()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_green = true;
    if (!m_green)
    {
        m_green = new CT_Percentage();
    }
    return m_green;
    }

    const CT_Percentage& CT_HslColor::ChildGroup_1::get_green() const
    {    
    if (m_green)
    {
        return *m_green;
    }
    return CT_Percentage::default_instance();
    }

    bool CT_HslColor::ChildGroup_1::has_greenOff() const
    {    
    return m_has_greenOff;
    }

    CT_Percentage* CT_HslColor::ChildGroup_1::mutable_greenOff()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_greenOff = true;
    if (!m_greenOff)
    {
        m_greenOff = new CT_Percentage();
    }
    return m_greenOff;
    }

    const CT_Percentage& CT_HslColor::ChildGroup_1::get_greenOff() const
    {    
    if (m_greenOff)
    {
        return *m_greenOff;
    }
    return CT_Percentage::default_instance();
    }

    bool CT_HslColor::ChildGroup_1::has_greenMod() const
    {    
    return m_has_greenMod;
    }

    CT_Percentage* CT_HslColor::ChildGroup_1::mutable_greenMod()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_greenMod = true;
    if (!m_greenMod)
    {
        m_greenMod = new CT_Percentage();
    }
    return m_greenMod;
    }

    const CT_Percentage& CT_HslColor::ChildGroup_1::get_greenMod() const
    {    
    if (m_greenMod)
    {
        return *m_greenMod;
    }
    return CT_Percentage::default_instance();
    }

    bool CT_HslColor::ChildGroup_1::has_blue() const
    {    
    return m_has_blue;
    }

    CT_Percentage* CT_HslColor::ChildGroup_1::mutable_blue()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_blue = true;
    if (!m_blue)
    {
        m_blue = new CT_Percentage();
    }
    return m_blue;
    }

    const CT_Percentage& CT_HslColor::ChildGroup_1::get_blue() const
    {    
    if (m_blue)
    {
        return *m_blue;
    }
    return CT_Percentage::default_instance();
    }

    bool CT_HslColor::ChildGroup_1::has_blueOff() const
    {    
    return m_has_blueOff;
    }

    CT_Percentage* CT_HslColor::ChildGroup_1::mutable_blueOff()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_blueOff = true;
    if (!m_blueOff)
    {
        m_blueOff = new CT_Percentage();
    }
    return m_blueOff;
    }

    const CT_Percentage& CT_HslColor::ChildGroup_1::get_blueOff() const
    {    
    if (m_blueOff)
    {
        return *m_blueOff;
    }
    return CT_Percentage::default_instance();
    }

    bool CT_HslColor::ChildGroup_1::has_blueMod() const
    {    
    return m_has_blueMod;
    }

    CT_Percentage* CT_HslColor::ChildGroup_1::mutable_blueMod()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_blueMod = true;
    if (!m_blueMod)
    {
        m_blueMod = new CT_Percentage();
    }
    return m_blueMod;
    }

    const CT_Percentage& CT_HslColor::ChildGroup_1::get_blueMod() const
    {    
    if (m_blueMod)
    {
        return *m_blueMod;
    }
    return CT_Percentage::default_instance();
    }

    bool CT_HslColor::ChildGroup_1::has_gamma() const
    {    
    return m_has_gamma;
    }

    CT_GammaTransform* CT_HslColor::ChildGroup_1::mutable_gamma()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_gamma = true;
    if (!m_gamma)
    {
        m_gamma = new CT_GammaTransform();
    }
    return m_gamma;
    }

    const CT_GammaTransform& CT_HslColor::ChildGroup_1::get_gamma() const
    {    
    if (m_gamma)
    {
        return *m_gamma;
    }
    return CT_GammaTransform::default_instance();
    }

    bool CT_HslColor::ChildGroup_1::has_invGamma() const
    {    
    return m_has_invGamma;
    }

    CT_InverseGammaTransform* CT_HslColor::ChildGroup_1::mutable_invGamma()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = true;
    if (!m_invGamma)
    {
        m_invGamma = new CT_InverseGammaTransform();
    }
    return m_invGamma;
    }

    const CT_InverseGammaTransform& CT_HslColor::ChildGroup_1::get_invGamma() const
    {    
    if (m_invGamma)
    {
        return *m_invGamma;
    }
    return CT_InverseGammaTransform::default_instance();
    }

CT_HslColor* CT_HslColor::default_instance_ = NULL;

    // CT_SystemColor
    CT_PositiveFixedPercentage* CT_SystemColor::add_tint()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_PositiveFixedPercentage* pNewChild = pChildGroup->mutable_tint();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_PositiveFixedPercentage* CT_SystemColor::add_shade()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_PositiveFixedPercentage* pNewChild = pChildGroup->mutable_shade();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_ComplementTransform* CT_SystemColor::add_comp()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_ComplementTransform* pNewChild = pChildGroup->mutable_comp();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_InverseTransform* CT_SystemColor::add_inv()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_InverseTransform* pNewChild = pChildGroup->mutable_inv();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_GrayscaleTransform* CT_SystemColor::add_gray()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_GrayscaleTransform* pNewChild = pChildGroup->mutable_gray();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_PositiveFixedPercentage* CT_SystemColor::add_alpha()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_PositiveFixedPercentage* pNewChild = pChildGroup->mutable_alpha();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_FixedPercentage* CT_SystemColor::add_alphaOff()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_FixedPercentage* pNewChild = pChildGroup->mutable_alphaOff();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_PositivePercentage* CT_SystemColor::add_alphaMod()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_PositivePercentage* pNewChild = pChildGroup->mutable_alphaMod();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_PositiveFixedAngle* CT_SystemColor::add_hue()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_PositiveFixedAngle* pNewChild = pChildGroup->mutable_hue();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Angle* CT_SystemColor::add_hueOff()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Angle* pNewChild = pChildGroup->mutable_hueOff();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_PositivePercentage* CT_SystemColor::add_hueMod()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_PositivePercentage* pNewChild = pChildGroup->mutable_hueMod();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Percentage* CT_SystemColor::add_sat()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Percentage* pNewChild = pChildGroup->mutable_sat();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Percentage* CT_SystemColor::add_satOff()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Percentage* pNewChild = pChildGroup->mutable_satOff();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Percentage* CT_SystemColor::add_satMod()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Percentage* pNewChild = pChildGroup->mutable_satMod();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Percentage* CT_SystemColor::add_lum()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Percentage* pNewChild = pChildGroup->mutable_lum();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Percentage* CT_SystemColor::add_lumOff()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Percentage* pNewChild = pChildGroup->mutable_lumOff();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Percentage* CT_SystemColor::add_lumMod()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Percentage* pNewChild = pChildGroup->mutable_lumMod();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Percentage* CT_SystemColor::add_red()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Percentage* pNewChild = pChildGroup->mutable_red();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Percentage* CT_SystemColor::add_redOff()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Percentage* pNewChild = pChildGroup->mutable_redOff();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Percentage* CT_SystemColor::add_redMod()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Percentage* pNewChild = pChildGroup->mutable_redMod();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Percentage* CT_SystemColor::add_green()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Percentage* pNewChild = pChildGroup->mutable_green();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Percentage* CT_SystemColor::add_greenOff()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Percentage* pNewChild = pChildGroup->mutable_greenOff();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Percentage* CT_SystemColor::add_greenMod()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Percentage* pNewChild = pChildGroup->mutable_greenMod();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Percentage* CT_SystemColor::add_blue()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Percentage* pNewChild = pChildGroup->mutable_blue();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Percentage* CT_SystemColor::add_blueOff()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Percentage* pNewChild = pChildGroup->mutable_blueOff();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Percentage* CT_SystemColor::add_blueMod()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Percentage* pNewChild = pChildGroup->mutable_blueMod();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_GammaTransform* CT_SystemColor::add_gamma()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_GammaTransform* pNewChild = pChildGroup->mutable_gamma();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_InverseGammaTransform* CT_SystemColor::add_invGamma()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_InverseGammaTransform* pNewChild = pChildGroup->mutable_invGamma();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    void CT_SystemColor::clear()
    {    
    m_has_val_attr = false;
    
    if (m_val_attr)
    {
        delete m_val_attr;
        m_val_attr = NULL;
    }
    
    
    m_has_s_lastClr_attr = false;
    
    if (m_s_lastClr_attr)
    {
        delete m_s_lastClr_attr;
        m_s_lastClr_attr = NULL;
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

    void CT_SystemColor::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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
    
    
    if (m_has_s_lastClr_attr)
    {
        m_s_lastClr_attr->toXmlAttr("lastClr", _outStream);
    }
    
            _outStream << ">";
            
    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_tint())
            {
                (*iter)->get_tint().toXmlElem("tint", "", _outStream);
            }
            else if ((*iter)->has_shade())
            {
                (*iter)->get_shade().toXmlElem("shade", "", _outStream);
            }
            else if ((*iter)->has_comp())
            {
                (*iter)->get_comp().toXmlElem("comp", "", _outStream);
            }
            else if ((*iter)->has_inv())
            {
                (*iter)->get_inv().toXmlElem("inv", "", _outStream);
            }
            else if ((*iter)->has_gray())
            {
                (*iter)->get_gray().toXmlElem("gray", "", _outStream);
            }
            else if ((*iter)->has_alpha())
            {
                (*iter)->get_alpha().toXmlElem("alpha", "", _outStream);
            }
            else if ((*iter)->has_alphaOff())
            {
                (*iter)->get_alphaOff().toXmlElem("alphaOff", "", _outStream);
            }
            else if ((*iter)->has_alphaMod())
            {
                (*iter)->get_alphaMod().toXmlElem("alphaMod", "", _outStream);
            }
            else if ((*iter)->has_hue())
            {
                (*iter)->get_hue().toXmlElem("hue", "", _outStream);
            }
            else if ((*iter)->has_hueOff())
            {
                (*iter)->get_hueOff().toXmlElem("hueOff", "", _outStream);
            }
            else if ((*iter)->has_hueMod())
            {
                (*iter)->get_hueMod().toXmlElem("hueMod", "", _outStream);
            }
            else if ((*iter)->has_sat())
            {
                (*iter)->get_sat().toXmlElem("sat", "", _outStream);
            }
            else if ((*iter)->has_satOff())
            {
                (*iter)->get_satOff().toXmlElem("satOff", "", _outStream);
            }
            else if ((*iter)->has_satMod())
            {
                (*iter)->get_satMod().toXmlElem("satMod", "", _outStream);
            }
            else if ((*iter)->has_lum())
            {
                (*iter)->get_lum().toXmlElem("lum", "", _outStream);
            }
            else if ((*iter)->has_lumOff())
            {
                (*iter)->get_lumOff().toXmlElem("lumOff", "", _outStream);
            }
            else if ((*iter)->has_lumMod())
            {
                (*iter)->get_lumMod().toXmlElem("lumMod", "", _outStream);
            }
            else if ((*iter)->has_red())
            {
                (*iter)->get_red().toXmlElem("red", "", _outStream);
            }
            else if ((*iter)->has_redOff())
            {
                (*iter)->get_redOff().toXmlElem("redOff", "", _outStream);
            }
            else if ((*iter)->has_redMod())
            {
                (*iter)->get_redMod().toXmlElem("redMod", "", _outStream);
            }
            else if ((*iter)->has_green())
            {
                (*iter)->get_green().toXmlElem("green", "", _outStream);
            }
            else if ((*iter)->has_greenOff())
            {
                (*iter)->get_greenOff().toXmlElem("greenOff", "", _outStream);
            }
            else if ((*iter)->has_greenMod())
            {
                (*iter)->get_greenMod().toXmlElem("greenMod", "", _outStream);
            }
            else if ((*iter)->has_blue())
            {
                (*iter)->get_blue().toXmlElem("blue", "", _outStream);
            }
            else if ((*iter)->has_blueOff())
            {
                (*iter)->get_blueOff().toXmlElem("blueOff", "", _outStream);
            }
            else if ((*iter)->has_blueMod())
            {
                (*iter)->get_blueMod().toXmlElem("blueMod", "", _outStream);
            }
            else if ((*iter)->has_gamma())
            {
                (*iter)->get_gamma().toXmlElem("gamma", "", _outStream);
            }
            else if ((*iter)->has_invGamma())
            {
                (*iter)->get_invGamma().toXmlElem("invGamma", "", _outStream);
            }
        }
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_SystemColor& CT_SystemColor::default_instance()
    {    
    if (!CT_SystemColor::default_instance_)
    {
        CT_SystemColor::default_instance_ = new CT_SystemColor();
    }
    return *CT_SystemColor::default_instance_;
    }

    bool CT_SystemColor::has_val_attr() const
    {    
    return m_has_val_attr;
    }

    void CT_SystemColor::set_val_attr(const ST_SystemColorVal& _val_attr)
    {    
    m_has_val_attr = true;
    m_val_attr = new ST_SystemColorVal(_val_attr);
    }

    const ST_SystemColorVal& CT_SystemColor::get_val_attr() const
    {    
    if (m_val_attr)
    {
        return *m_val_attr;
    }
    return ST_SystemColorVal::default_instance();
    }

    bool CT_SystemColor::has_s_lastClr_attr() const
    {    
    return m_has_s_lastClr_attr;
    }

    void CT_SystemColor::set_s_lastClr_attr(const ns_s::ST_HexColorRGB& _s_lastClr_attr)
    {    
    m_has_s_lastClr_attr = true;
    m_s_lastClr_attr = new ns_s::ST_HexColorRGB(_s_lastClr_attr);
    }

    const ns_s::ST_HexColorRGB& CT_SystemColor::get_s_lastClr_attr() const
    {    
    if (m_s_lastClr_attr)
    {
        return *m_s_lastClr_attr;
    }
    return ns_s::ST_HexColorRGB::default_instance();
    }


    // CT_SystemColor::ChildGroup_1
    bool CT_SystemColor::ChildGroup_1::has_tint() const
    {    
    return m_has_tint;
    }

    CT_PositiveFixedPercentage* CT_SystemColor::ChildGroup_1::mutable_tint()
    {    
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_tint = true;
    if (!m_tint)
    {
        m_tint = new CT_PositiveFixedPercentage();
    }
    return m_tint;
    }

    const CT_PositiveFixedPercentage& CT_SystemColor::ChildGroup_1::get_tint() const
    {    
    if (m_tint)
    {
        return *m_tint;
    }
    return CT_PositiveFixedPercentage::default_instance();
    }

    bool CT_SystemColor::ChildGroup_1::has_shade() const
    {    
    return m_has_shade;
    }

    CT_PositiveFixedPercentage* CT_SystemColor::ChildGroup_1::mutable_shade()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_shade = true;
    if (!m_shade)
    {
        m_shade = new CT_PositiveFixedPercentage();
    }
    return m_shade;
    }

    const CT_PositiveFixedPercentage& CT_SystemColor::ChildGroup_1::get_shade() const
    {    
    if (m_shade)
    {
        return *m_shade;
    }
    return CT_PositiveFixedPercentage::default_instance();
    }

    bool CT_SystemColor::ChildGroup_1::has_comp() const
    {    
    return m_has_comp;
    }

    CT_ComplementTransform* CT_SystemColor::ChildGroup_1::mutable_comp()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_comp = true;
    if (!m_comp)
    {
        m_comp = new CT_ComplementTransform();
    }
    return m_comp;
    }

    const CT_ComplementTransform& CT_SystemColor::ChildGroup_1::get_comp() const
    {    
    if (m_comp)
    {
        return *m_comp;
    }
    return CT_ComplementTransform::default_instance();
    }

    bool CT_SystemColor::ChildGroup_1::has_inv() const
    {    
    return m_has_inv;
    }

    CT_InverseTransform* CT_SystemColor::ChildGroup_1::mutable_inv()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_inv = true;
    if (!m_inv)
    {
        m_inv = new CT_InverseTransform();
    }
    return m_inv;
    }

    const CT_InverseTransform& CT_SystemColor::ChildGroup_1::get_inv() const
    {    
    if (m_inv)
    {
        return *m_inv;
    }
    return CT_InverseTransform::default_instance();
    }

    bool CT_SystemColor::ChildGroup_1::has_gray() const
    {    
    return m_has_gray;
    }

    CT_GrayscaleTransform* CT_SystemColor::ChildGroup_1::mutable_gray()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_gray = true;
    if (!m_gray)
    {
        m_gray = new CT_GrayscaleTransform();
    }
    return m_gray;
    }

    const CT_GrayscaleTransform& CT_SystemColor::ChildGroup_1::get_gray() const
    {    
    if (m_gray)
    {
        return *m_gray;
    }
    return CT_GrayscaleTransform::default_instance();
    }

    bool CT_SystemColor::ChildGroup_1::has_alpha() const
    {    
    return m_has_alpha;
    }

    CT_PositiveFixedPercentage* CT_SystemColor::ChildGroup_1::mutable_alpha()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_alpha = true;
    if (!m_alpha)
    {
        m_alpha = new CT_PositiveFixedPercentage();
    }
    return m_alpha;
    }

    const CT_PositiveFixedPercentage& CT_SystemColor::ChildGroup_1::get_alpha() const
    {    
    if (m_alpha)
    {
        return *m_alpha;
    }
    return CT_PositiveFixedPercentage::default_instance();
    }

    bool CT_SystemColor::ChildGroup_1::has_alphaOff() const
    {    
    return m_has_alphaOff;
    }

    CT_FixedPercentage* CT_SystemColor::ChildGroup_1::mutable_alphaOff()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_alphaOff = true;
    if (!m_alphaOff)
    {
        m_alphaOff = new CT_FixedPercentage();
    }
    return m_alphaOff;
    }

    const CT_FixedPercentage& CT_SystemColor::ChildGroup_1::get_alphaOff() const
    {    
    if (m_alphaOff)
    {
        return *m_alphaOff;
    }
    return CT_FixedPercentage::default_instance();
    }

    bool CT_SystemColor::ChildGroup_1::has_alphaMod() const
    {    
    return m_has_alphaMod;
    }

    CT_PositivePercentage* CT_SystemColor::ChildGroup_1::mutable_alphaMod()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_alphaMod = true;
    if (!m_alphaMod)
    {
        m_alphaMod = new CT_PositivePercentage();
    }
    return m_alphaMod;
    }

    const CT_PositivePercentage& CT_SystemColor::ChildGroup_1::get_alphaMod() const
    {    
    if (m_alphaMod)
    {
        return *m_alphaMod;
    }
    return CT_PositivePercentage::default_instance();
    }

    bool CT_SystemColor::ChildGroup_1::has_hue() const
    {    
    return m_has_hue;
    }

    CT_PositiveFixedAngle* CT_SystemColor::ChildGroup_1::mutable_hue()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_hue = true;
    if (!m_hue)
    {
        m_hue = new CT_PositiveFixedAngle();
    }
    return m_hue;
    }

    const CT_PositiveFixedAngle& CT_SystemColor::ChildGroup_1::get_hue() const
    {    
    if (m_hue)
    {
        return *m_hue;
    }
    return CT_PositiveFixedAngle::default_instance();
    }

    bool CT_SystemColor::ChildGroup_1::has_hueOff() const
    {    
    return m_has_hueOff;
    }

    CT_Angle* CT_SystemColor::ChildGroup_1::mutable_hueOff()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_hueOff = true;
    if (!m_hueOff)
    {
        m_hueOff = new CT_Angle();
    }
    return m_hueOff;
    }

    const CT_Angle& CT_SystemColor::ChildGroup_1::get_hueOff() const
    {    
    if (m_hueOff)
    {
        return *m_hueOff;
    }
    return CT_Angle::default_instance();
    }

    bool CT_SystemColor::ChildGroup_1::has_hueMod() const
    {    
    return m_has_hueMod;
    }

    CT_PositivePercentage* CT_SystemColor::ChildGroup_1::mutable_hueMod()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_hueMod = true;
    if (!m_hueMod)
    {
        m_hueMod = new CT_PositivePercentage();
    }
    return m_hueMod;
    }

    const CT_PositivePercentage& CT_SystemColor::ChildGroup_1::get_hueMod() const
    {    
    if (m_hueMod)
    {
        return *m_hueMod;
    }
    return CT_PositivePercentage::default_instance();
    }

    bool CT_SystemColor::ChildGroup_1::has_sat() const
    {    
    return m_has_sat;
    }

    CT_Percentage* CT_SystemColor::ChildGroup_1::mutable_sat()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_sat = true;
    if (!m_sat)
    {
        m_sat = new CT_Percentage();
    }
    return m_sat;
    }

    const CT_Percentage& CT_SystemColor::ChildGroup_1::get_sat() const
    {    
    if (m_sat)
    {
        return *m_sat;
    }
    return CT_Percentage::default_instance();
    }

    bool CT_SystemColor::ChildGroup_1::has_satOff() const
    {    
    return m_has_satOff;
    }

    CT_Percentage* CT_SystemColor::ChildGroup_1::mutable_satOff()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_satOff = true;
    if (!m_satOff)
    {
        m_satOff = new CT_Percentage();
    }
    return m_satOff;
    }

    const CT_Percentage& CT_SystemColor::ChildGroup_1::get_satOff() const
    {    
    if (m_satOff)
    {
        return *m_satOff;
    }
    return CT_Percentage::default_instance();
    }

    bool CT_SystemColor::ChildGroup_1::has_satMod() const
    {    
    return m_has_satMod;
    }

    CT_Percentage* CT_SystemColor::ChildGroup_1::mutable_satMod()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_satMod = true;
    if (!m_satMod)
    {
        m_satMod = new CT_Percentage();
    }
    return m_satMod;
    }

    const CT_Percentage& CT_SystemColor::ChildGroup_1::get_satMod() const
    {    
    if (m_satMod)
    {
        return *m_satMod;
    }
    return CT_Percentage::default_instance();
    }

    bool CT_SystemColor::ChildGroup_1::has_lum() const
    {    
    return m_has_lum;
    }

    CT_Percentage* CT_SystemColor::ChildGroup_1::mutable_lum()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_lum = true;
    if (!m_lum)
    {
        m_lum = new CT_Percentage();
    }
    return m_lum;
    }

    const CT_Percentage& CT_SystemColor::ChildGroup_1::get_lum() const
    {    
    if (m_lum)
    {
        return *m_lum;
    }
    return CT_Percentage::default_instance();
    }

    bool CT_SystemColor::ChildGroup_1::has_lumOff() const
    {    
    return m_has_lumOff;
    }

    CT_Percentage* CT_SystemColor::ChildGroup_1::mutable_lumOff()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_lumOff = true;
    if (!m_lumOff)
    {
        m_lumOff = new CT_Percentage();
    }
    return m_lumOff;
    }

    const CT_Percentage& CT_SystemColor::ChildGroup_1::get_lumOff() const
    {    
    if (m_lumOff)
    {
        return *m_lumOff;
    }
    return CT_Percentage::default_instance();
    }

    bool CT_SystemColor::ChildGroup_1::has_lumMod() const
    {    
    return m_has_lumMod;
    }

    CT_Percentage* CT_SystemColor::ChildGroup_1::mutable_lumMod()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_lumMod = true;
    if (!m_lumMod)
    {
        m_lumMod = new CT_Percentage();
    }
    return m_lumMod;
    }

    const CT_Percentage& CT_SystemColor::ChildGroup_1::get_lumMod() const
    {    
    if (m_lumMod)
    {
        return *m_lumMod;
    }
    return CT_Percentage::default_instance();
    }

    bool CT_SystemColor::ChildGroup_1::has_red() const
    {    
    return m_has_red;
    }

    CT_Percentage* CT_SystemColor::ChildGroup_1::mutable_red()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_red = true;
    if (!m_red)
    {
        m_red = new CT_Percentage();
    }
    return m_red;
    }

    const CT_Percentage& CT_SystemColor::ChildGroup_1::get_red() const
    {    
    if (m_red)
    {
        return *m_red;
    }
    return CT_Percentage::default_instance();
    }

    bool CT_SystemColor::ChildGroup_1::has_redOff() const
    {    
    return m_has_redOff;
    }

    CT_Percentage* CT_SystemColor::ChildGroup_1::mutable_redOff()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_redOff = true;
    if (!m_redOff)
    {
        m_redOff = new CT_Percentage();
    }
    return m_redOff;
    }

    const CT_Percentage& CT_SystemColor::ChildGroup_1::get_redOff() const
    {    
    if (m_redOff)
    {
        return *m_redOff;
    }
    return CT_Percentage::default_instance();
    }

    bool CT_SystemColor::ChildGroup_1::has_redMod() const
    {    
    return m_has_redMod;
    }

    CT_Percentage* CT_SystemColor::ChildGroup_1::mutable_redMod()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_redMod = true;
    if (!m_redMod)
    {
        m_redMod = new CT_Percentage();
    }
    return m_redMod;
    }

    const CT_Percentage& CT_SystemColor::ChildGroup_1::get_redMod() const
    {    
    if (m_redMod)
    {
        return *m_redMod;
    }
    return CT_Percentage::default_instance();
    }

    bool CT_SystemColor::ChildGroup_1::has_green() const
    {    
    return m_has_green;
    }

    CT_Percentage* CT_SystemColor::ChildGroup_1::mutable_green()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_green = true;
    if (!m_green)
    {
        m_green = new CT_Percentage();
    }
    return m_green;
    }

    const CT_Percentage& CT_SystemColor::ChildGroup_1::get_green() const
    {    
    if (m_green)
    {
        return *m_green;
    }
    return CT_Percentage::default_instance();
    }

    bool CT_SystemColor::ChildGroup_1::has_greenOff() const
    {    
    return m_has_greenOff;
    }

    CT_Percentage* CT_SystemColor::ChildGroup_1::mutable_greenOff()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_greenOff = true;
    if (!m_greenOff)
    {
        m_greenOff = new CT_Percentage();
    }
    return m_greenOff;
    }

    const CT_Percentage& CT_SystemColor::ChildGroup_1::get_greenOff() const
    {    
    if (m_greenOff)
    {
        return *m_greenOff;
    }
    return CT_Percentage::default_instance();
    }

    bool CT_SystemColor::ChildGroup_1::has_greenMod() const
    {    
    return m_has_greenMod;
    }

    CT_Percentage* CT_SystemColor::ChildGroup_1::mutable_greenMod()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_greenMod = true;
    if (!m_greenMod)
    {
        m_greenMod = new CT_Percentage();
    }
    return m_greenMod;
    }

    const CT_Percentage& CT_SystemColor::ChildGroup_1::get_greenMod() const
    {    
    if (m_greenMod)
    {
        return *m_greenMod;
    }
    return CT_Percentage::default_instance();
    }

    bool CT_SystemColor::ChildGroup_1::has_blue() const
    {    
    return m_has_blue;
    }

    CT_Percentage* CT_SystemColor::ChildGroup_1::mutable_blue()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_blue = true;
    if (!m_blue)
    {
        m_blue = new CT_Percentage();
    }
    return m_blue;
    }

    const CT_Percentage& CT_SystemColor::ChildGroup_1::get_blue() const
    {    
    if (m_blue)
    {
        return *m_blue;
    }
    return CT_Percentage::default_instance();
    }

    bool CT_SystemColor::ChildGroup_1::has_blueOff() const
    {    
    return m_has_blueOff;
    }

    CT_Percentage* CT_SystemColor::ChildGroup_1::mutable_blueOff()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_blueOff = true;
    if (!m_blueOff)
    {
        m_blueOff = new CT_Percentage();
    }
    return m_blueOff;
    }

    const CT_Percentage& CT_SystemColor::ChildGroup_1::get_blueOff() const
    {    
    if (m_blueOff)
    {
        return *m_blueOff;
    }
    return CT_Percentage::default_instance();
    }

    bool CT_SystemColor::ChildGroup_1::has_blueMod() const
    {    
    return m_has_blueMod;
    }

    CT_Percentage* CT_SystemColor::ChildGroup_1::mutable_blueMod()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_blueMod = true;
    if (!m_blueMod)
    {
        m_blueMod = new CT_Percentage();
    }
    return m_blueMod;
    }

    const CT_Percentage& CT_SystemColor::ChildGroup_1::get_blueMod() const
    {    
    if (m_blueMod)
    {
        return *m_blueMod;
    }
    return CT_Percentage::default_instance();
    }

    bool CT_SystemColor::ChildGroup_1::has_gamma() const
    {    
    return m_has_gamma;
    }

    CT_GammaTransform* CT_SystemColor::ChildGroup_1::mutable_gamma()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_gamma = true;
    if (!m_gamma)
    {
        m_gamma = new CT_GammaTransform();
    }
    return m_gamma;
    }

    const CT_GammaTransform& CT_SystemColor::ChildGroup_1::get_gamma() const
    {    
    if (m_gamma)
    {
        return *m_gamma;
    }
    return CT_GammaTransform::default_instance();
    }

    bool CT_SystemColor::ChildGroup_1::has_invGamma() const
    {    
    return m_has_invGamma;
    }

    CT_InverseGammaTransform* CT_SystemColor::ChildGroup_1::mutable_invGamma()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = true;
    if (!m_invGamma)
    {
        m_invGamma = new CT_InverseGammaTransform();
    }
    return m_invGamma;
    }

    const CT_InverseGammaTransform& CT_SystemColor::ChildGroup_1::get_invGamma() const
    {    
    if (m_invGamma)
    {
        return *m_invGamma;
    }
    return CT_InverseGammaTransform::default_instance();
    }

CT_SystemColor* CT_SystemColor::default_instance_ = NULL;

    // CT_SchemeColor
    CT_PositiveFixedPercentage* CT_SchemeColor::add_tint()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_PositiveFixedPercentage* pNewChild = pChildGroup->mutable_tint();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_PositiveFixedPercentage* CT_SchemeColor::add_shade()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_PositiveFixedPercentage* pNewChild = pChildGroup->mutable_shade();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_ComplementTransform* CT_SchemeColor::add_comp()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_ComplementTransform* pNewChild = pChildGroup->mutable_comp();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_InverseTransform* CT_SchemeColor::add_inv()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_InverseTransform* pNewChild = pChildGroup->mutable_inv();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_GrayscaleTransform* CT_SchemeColor::add_gray()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_GrayscaleTransform* pNewChild = pChildGroup->mutable_gray();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_PositiveFixedPercentage* CT_SchemeColor::add_alpha()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_PositiveFixedPercentage* pNewChild = pChildGroup->mutable_alpha();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_FixedPercentage* CT_SchemeColor::add_alphaOff()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_FixedPercentage* pNewChild = pChildGroup->mutable_alphaOff();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_PositivePercentage* CT_SchemeColor::add_alphaMod()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_PositivePercentage* pNewChild = pChildGroup->mutable_alphaMod();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_PositiveFixedAngle* CT_SchemeColor::add_hue()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_PositiveFixedAngle* pNewChild = pChildGroup->mutable_hue();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Angle* CT_SchemeColor::add_hueOff()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Angle* pNewChild = pChildGroup->mutable_hueOff();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_PositivePercentage* CT_SchemeColor::add_hueMod()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_PositivePercentage* pNewChild = pChildGroup->mutable_hueMod();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Percentage* CT_SchemeColor::add_sat()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Percentage* pNewChild = pChildGroup->mutable_sat();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Percentage* CT_SchemeColor::add_satOff()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Percentage* pNewChild = pChildGroup->mutable_satOff();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Percentage* CT_SchemeColor::add_satMod()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Percentage* pNewChild = pChildGroup->mutable_satMod();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Percentage* CT_SchemeColor::add_lum()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Percentage* pNewChild = pChildGroup->mutable_lum();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Percentage* CT_SchemeColor::add_lumOff()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Percentage* pNewChild = pChildGroup->mutable_lumOff();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Percentage* CT_SchemeColor::add_lumMod()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Percentage* pNewChild = pChildGroup->mutable_lumMod();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Percentage* CT_SchemeColor::add_red()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Percentage* pNewChild = pChildGroup->mutable_red();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Percentage* CT_SchemeColor::add_redOff()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Percentage* pNewChild = pChildGroup->mutable_redOff();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Percentage* CT_SchemeColor::add_redMod()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Percentage* pNewChild = pChildGroup->mutable_redMod();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Percentage* CT_SchemeColor::add_green()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Percentage* pNewChild = pChildGroup->mutable_green();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Percentage* CT_SchemeColor::add_greenOff()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Percentage* pNewChild = pChildGroup->mutable_greenOff();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Percentage* CT_SchemeColor::add_greenMod()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Percentage* pNewChild = pChildGroup->mutable_greenMod();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Percentage* CT_SchemeColor::add_blue()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Percentage* pNewChild = pChildGroup->mutable_blue();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Percentage* CT_SchemeColor::add_blueOff()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Percentage* pNewChild = pChildGroup->mutable_blueOff();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Percentage* CT_SchemeColor::add_blueMod()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Percentage* pNewChild = pChildGroup->mutable_blueMod();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_GammaTransform* CT_SchemeColor::add_gamma()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_GammaTransform* pNewChild = pChildGroup->mutable_gamma();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_InverseGammaTransform* CT_SchemeColor::add_invGamma()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_InverseGammaTransform* pNewChild = pChildGroup->mutable_invGamma();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    void CT_SchemeColor::clear()
    {    
    m_has_val_attr = false;
    
    if (m_val_attr)
    {
        delete m_val_attr;
        m_val_attr = NULL;
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

    void CT_SchemeColor::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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
            
    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_tint())
            {
                (*iter)->get_tint().toXmlElem("tint", "", _outStream);
            }
            else if ((*iter)->has_shade())
            {
                (*iter)->get_shade().toXmlElem("shade", "", _outStream);
            }
            else if ((*iter)->has_comp())
            {
                (*iter)->get_comp().toXmlElem("comp", "", _outStream);
            }
            else if ((*iter)->has_inv())
            {
                (*iter)->get_inv().toXmlElem("inv", "", _outStream);
            }
            else if ((*iter)->has_gray())
            {
                (*iter)->get_gray().toXmlElem("gray", "", _outStream);
            }
            else if ((*iter)->has_alpha())
            {
                (*iter)->get_alpha().toXmlElem("alpha", "", _outStream);
            }
            else if ((*iter)->has_alphaOff())
            {
                (*iter)->get_alphaOff().toXmlElem("alphaOff", "", _outStream);
            }
            else if ((*iter)->has_alphaMod())
            {
                (*iter)->get_alphaMod().toXmlElem("alphaMod", "", _outStream);
            }
            else if ((*iter)->has_hue())
            {
                (*iter)->get_hue().toXmlElem("hue", "", _outStream);
            }
            else if ((*iter)->has_hueOff())
            {
                (*iter)->get_hueOff().toXmlElem("hueOff", "", _outStream);
            }
            else if ((*iter)->has_hueMod())
            {
                (*iter)->get_hueMod().toXmlElem("hueMod", "", _outStream);
            }
            else if ((*iter)->has_sat())
            {
                (*iter)->get_sat().toXmlElem("sat", "", _outStream);
            }
            else if ((*iter)->has_satOff())
            {
                (*iter)->get_satOff().toXmlElem("satOff", "", _outStream);
            }
            else if ((*iter)->has_satMod())
            {
                (*iter)->get_satMod().toXmlElem("satMod", "", _outStream);
            }
            else if ((*iter)->has_lum())
            {
                (*iter)->get_lum().toXmlElem("lum", "", _outStream);
            }
            else if ((*iter)->has_lumOff())
            {
                (*iter)->get_lumOff().toXmlElem("lumOff", "", _outStream);
            }
            else if ((*iter)->has_lumMod())
            {
                (*iter)->get_lumMod().toXmlElem("lumMod", "", _outStream);
            }
            else if ((*iter)->has_red())
            {
                (*iter)->get_red().toXmlElem("red", "", _outStream);
            }
            else if ((*iter)->has_redOff())
            {
                (*iter)->get_redOff().toXmlElem("redOff", "", _outStream);
            }
            else if ((*iter)->has_redMod())
            {
                (*iter)->get_redMod().toXmlElem("redMod", "", _outStream);
            }
            else if ((*iter)->has_green())
            {
                (*iter)->get_green().toXmlElem("green", "", _outStream);
            }
            else if ((*iter)->has_greenOff())
            {
                (*iter)->get_greenOff().toXmlElem("greenOff", "", _outStream);
            }
            else if ((*iter)->has_greenMod())
            {
                (*iter)->get_greenMod().toXmlElem("greenMod", "", _outStream);
            }
            else if ((*iter)->has_blue())
            {
                (*iter)->get_blue().toXmlElem("blue", "", _outStream);
            }
            else if ((*iter)->has_blueOff())
            {
                (*iter)->get_blueOff().toXmlElem("blueOff", "", _outStream);
            }
            else if ((*iter)->has_blueMod())
            {
                (*iter)->get_blueMod().toXmlElem("blueMod", "", _outStream);
            }
            else if ((*iter)->has_gamma())
            {
                (*iter)->get_gamma().toXmlElem("gamma", "", _outStream);
            }
            else if ((*iter)->has_invGamma())
            {
                (*iter)->get_invGamma().toXmlElem("invGamma", "", _outStream);
            }
        }
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_SchemeColor& CT_SchemeColor::default_instance()
    {    
    if (!CT_SchemeColor::default_instance_)
    {
        CT_SchemeColor::default_instance_ = new CT_SchemeColor();
    }
    return *CT_SchemeColor::default_instance_;
    }

    bool CT_SchemeColor::has_val_attr() const
    {    
    return m_has_val_attr;
    }

    void CT_SchemeColor::set_val_attr(const ST_SchemeColorVal& _val_attr)
    {    
    m_has_val_attr = true;
    m_val_attr = new ST_SchemeColorVal(_val_attr);
    }

    const ST_SchemeColorVal& CT_SchemeColor::get_val_attr() const
    {    
    if (m_val_attr)
    {
        return *m_val_attr;
    }
    return ST_SchemeColorVal::default_instance();
    }


    // CT_SchemeColor::ChildGroup_1
    bool CT_SchemeColor::ChildGroup_1::has_tint() const
    {    
    return m_has_tint;
    }

    CT_PositiveFixedPercentage* CT_SchemeColor::ChildGroup_1::mutable_tint()
    {    
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_tint = true;
    if (!m_tint)
    {
        m_tint = new CT_PositiveFixedPercentage();
    }
    return m_tint;
    }

    const CT_PositiveFixedPercentage& CT_SchemeColor::ChildGroup_1::get_tint() const
    {    
    if (m_tint)
    {
        return *m_tint;
    }
    return CT_PositiveFixedPercentage::default_instance();
    }

    bool CT_SchemeColor::ChildGroup_1::has_shade() const
    {    
    return m_has_shade;
    }

    CT_PositiveFixedPercentage* CT_SchemeColor::ChildGroup_1::mutable_shade()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_shade = true;
    if (!m_shade)
    {
        m_shade = new CT_PositiveFixedPercentage();
    }
    return m_shade;
    }

    const CT_PositiveFixedPercentage& CT_SchemeColor::ChildGroup_1::get_shade() const
    {    
    if (m_shade)
    {
        return *m_shade;
    }
    return CT_PositiveFixedPercentage::default_instance();
    }

    bool CT_SchemeColor::ChildGroup_1::has_comp() const
    {    
    return m_has_comp;
    }

    CT_ComplementTransform* CT_SchemeColor::ChildGroup_1::mutable_comp()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_comp = true;
    if (!m_comp)
    {
        m_comp = new CT_ComplementTransform();
    }
    return m_comp;
    }

    const CT_ComplementTransform& CT_SchemeColor::ChildGroup_1::get_comp() const
    {    
    if (m_comp)
    {
        return *m_comp;
    }
    return CT_ComplementTransform::default_instance();
    }

    bool CT_SchemeColor::ChildGroup_1::has_inv() const
    {    
    return m_has_inv;
    }

    CT_InverseTransform* CT_SchemeColor::ChildGroup_1::mutable_inv()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_inv = true;
    if (!m_inv)
    {
        m_inv = new CT_InverseTransform();
    }
    return m_inv;
    }

    const CT_InverseTransform& CT_SchemeColor::ChildGroup_1::get_inv() const
    {    
    if (m_inv)
    {
        return *m_inv;
    }
    return CT_InverseTransform::default_instance();
    }

    bool CT_SchemeColor::ChildGroup_1::has_gray() const
    {    
    return m_has_gray;
    }

    CT_GrayscaleTransform* CT_SchemeColor::ChildGroup_1::mutable_gray()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_gray = true;
    if (!m_gray)
    {
        m_gray = new CT_GrayscaleTransform();
    }
    return m_gray;
    }

    const CT_GrayscaleTransform& CT_SchemeColor::ChildGroup_1::get_gray() const
    {    
    if (m_gray)
    {
        return *m_gray;
    }
    return CT_GrayscaleTransform::default_instance();
    }

    bool CT_SchemeColor::ChildGroup_1::has_alpha() const
    {    
    return m_has_alpha;
    }

    CT_PositiveFixedPercentage* CT_SchemeColor::ChildGroup_1::mutable_alpha()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_alpha = true;
    if (!m_alpha)
    {
        m_alpha = new CT_PositiveFixedPercentage();
    }
    return m_alpha;
    }

    const CT_PositiveFixedPercentage& CT_SchemeColor::ChildGroup_1::get_alpha() const
    {    
    if (m_alpha)
    {
        return *m_alpha;
    }
    return CT_PositiveFixedPercentage::default_instance();
    }

    bool CT_SchemeColor::ChildGroup_1::has_alphaOff() const
    {    
    return m_has_alphaOff;
    }

    CT_FixedPercentage* CT_SchemeColor::ChildGroup_1::mutable_alphaOff()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_alphaOff = true;
    if (!m_alphaOff)
    {
        m_alphaOff = new CT_FixedPercentage();
    }
    return m_alphaOff;
    }

    const CT_FixedPercentage& CT_SchemeColor::ChildGroup_1::get_alphaOff() const
    {    
    if (m_alphaOff)
    {
        return *m_alphaOff;
    }
    return CT_FixedPercentage::default_instance();
    }

    bool CT_SchemeColor::ChildGroup_1::has_alphaMod() const
    {    
    return m_has_alphaMod;
    }

    CT_PositivePercentage* CT_SchemeColor::ChildGroup_1::mutable_alphaMod()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_alphaMod = true;
    if (!m_alphaMod)
    {
        m_alphaMod = new CT_PositivePercentage();
    }
    return m_alphaMod;
    }

    const CT_PositivePercentage& CT_SchemeColor::ChildGroup_1::get_alphaMod() const
    {    
    if (m_alphaMod)
    {
        return *m_alphaMod;
    }
    return CT_PositivePercentage::default_instance();
    }

    bool CT_SchemeColor::ChildGroup_1::has_hue() const
    {    
    return m_has_hue;
    }

    CT_PositiveFixedAngle* CT_SchemeColor::ChildGroup_1::mutable_hue()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_hue = true;
    if (!m_hue)
    {
        m_hue = new CT_PositiveFixedAngle();
    }
    return m_hue;
    }

    const CT_PositiveFixedAngle& CT_SchemeColor::ChildGroup_1::get_hue() const
    {    
    if (m_hue)
    {
        return *m_hue;
    }
    return CT_PositiveFixedAngle::default_instance();
    }

    bool CT_SchemeColor::ChildGroup_1::has_hueOff() const
    {    
    return m_has_hueOff;
    }

    CT_Angle* CT_SchemeColor::ChildGroup_1::mutable_hueOff()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_hueOff = true;
    if (!m_hueOff)
    {
        m_hueOff = new CT_Angle();
    }
    return m_hueOff;
    }

    const CT_Angle& CT_SchemeColor::ChildGroup_1::get_hueOff() const
    {    
    if (m_hueOff)
    {
        return *m_hueOff;
    }
    return CT_Angle::default_instance();
    }

    bool CT_SchemeColor::ChildGroup_1::has_hueMod() const
    {    
    return m_has_hueMod;
    }

    CT_PositivePercentage* CT_SchemeColor::ChildGroup_1::mutable_hueMod()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_hueMod = true;
    if (!m_hueMod)
    {
        m_hueMod = new CT_PositivePercentage();
    }
    return m_hueMod;
    }

    const CT_PositivePercentage& CT_SchemeColor::ChildGroup_1::get_hueMod() const
    {    
    if (m_hueMod)
    {
        return *m_hueMod;
    }
    return CT_PositivePercentage::default_instance();
    }

    bool CT_SchemeColor::ChildGroup_1::has_sat() const
    {    
    return m_has_sat;
    }

    CT_Percentage* CT_SchemeColor::ChildGroup_1::mutable_sat()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_sat = true;
    if (!m_sat)
    {
        m_sat = new CT_Percentage();
    }
    return m_sat;
    }

    const CT_Percentage& CT_SchemeColor::ChildGroup_1::get_sat() const
    {    
    if (m_sat)
    {
        return *m_sat;
    }
    return CT_Percentage::default_instance();
    }

    bool CT_SchemeColor::ChildGroup_1::has_satOff() const
    {    
    return m_has_satOff;
    }

    CT_Percentage* CT_SchemeColor::ChildGroup_1::mutable_satOff()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_satOff = true;
    if (!m_satOff)
    {
        m_satOff = new CT_Percentage();
    }
    return m_satOff;
    }

    const CT_Percentage& CT_SchemeColor::ChildGroup_1::get_satOff() const
    {    
    if (m_satOff)
    {
        return *m_satOff;
    }
    return CT_Percentage::default_instance();
    }

    bool CT_SchemeColor::ChildGroup_1::has_satMod() const
    {    
    return m_has_satMod;
    }

    CT_Percentage* CT_SchemeColor::ChildGroup_1::mutable_satMod()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_satMod = true;
    if (!m_satMod)
    {
        m_satMod = new CT_Percentage();
    }
    return m_satMod;
    }

    const CT_Percentage& CT_SchemeColor::ChildGroup_1::get_satMod() const
    {    
    if (m_satMod)
    {
        return *m_satMod;
    }
    return CT_Percentage::default_instance();
    }

    bool CT_SchemeColor::ChildGroup_1::has_lum() const
    {    
    return m_has_lum;
    }

    CT_Percentage* CT_SchemeColor::ChildGroup_1::mutable_lum()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_lum = true;
    if (!m_lum)
    {
        m_lum = new CT_Percentage();
    }
    return m_lum;
    }

    const CT_Percentage& CT_SchemeColor::ChildGroup_1::get_lum() const
    {    
    if (m_lum)
    {
        return *m_lum;
    }
    return CT_Percentage::default_instance();
    }

    bool CT_SchemeColor::ChildGroup_1::has_lumOff() const
    {    
    return m_has_lumOff;
    }

    CT_Percentage* CT_SchemeColor::ChildGroup_1::mutable_lumOff()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_lumOff = true;
    if (!m_lumOff)
    {
        m_lumOff = new CT_Percentage();
    }
    return m_lumOff;
    }

    const CT_Percentage& CT_SchemeColor::ChildGroup_1::get_lumOff() const
    {    
    if (m_lumOff)
    {
        return *m_lumOff;
    }
    return CT_Percentage::default_instance();
    }

    bool CT_SchemeColor::ChildGroup_1::has_lumMod() const
    {    
    return m_has_lumMod;
    }

    CT_Percentage* CT_SchemeColor::ChildGroup_1::mutable_lumMod()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_lumMod = true;
    if (!m_lumMod)
    {
        m_lumMod = new CT_Percentage();
    }
    return m_lumMod;
    }

    const CT_Percentage& CT_SchemeColor::ChildGroup_1::get_lumMod() const
    {    
    if (m_lumMod)
    {
        return *m_lumMod;
    }
    return CT_Percentage::default_instance();
    }

    bool CT_SchemeColor::ChildGroup_1::has_red() const
    {    
    return m_has_red;
    }

    CT_Percentage* CT_SchemeColor::ChildGroup_1::mutable_red()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_red = true;
    if (!m_red)
    {
        m_red = new CT_Percentage();
    }
    return m_red;
    }

    const CT_Percentage& CT_SchemeColor::ChildGroup_1::get_red() const
    {    
    if (m_red)
    {
        return *m_red;
    }
    return CT_Percentage::default_instance();
    }

    bool CT_SchemeColor::ChildGroup_1::has_redOff() const
    {    
    return m_has_redOff;
    }

    CT_Percentage* CT_SchemeColor::ChildGroup_1::mutable_redOff()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_redOff = true;
    if (!m_redOff)
    {
        m_redOff = new CT_Percentage();
    }
    return m_redOff;
    }

    const CT_Percentage& CT_SchemeColor::ChildGroup_1::get_redOff() const
    {    
    if (m_redOff)
    {
        return *m_redOff;
    }
    return CT_Percentage::default_instance();
    }

    bool CT_SchemeColor::ChildGroup_1::has_redMod() const
    {    
    return m_has_redMod;
    }

    CT_Percentage* CT_SchemeColor::ChildGroup_1::mutable_redMod()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_redMod = true;
    if (!m_redMod)
    {
        m_redMod = new CT_Percentage();
    }
    return m_redMod;
    }

    const CT_Percentage& CT_SchemeColor::ChildGroup_1::get_redMod() const
    {    
    if (m_redMod)
    {
        return *m_redMod;
    }
    return CT_Percentage::default_instance();
    }

    bool CT_SchemeColor::ChildGroup_1::has_green() const
    {    
    return m_has_green;
    }

    CT_Percentage* CT_SchemeColor::ChildGroup_1::mutable_green()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_green = true;
    if (!m_green)
    {
        m_green = new CT_Percentage();
    }
    return m_green;
    }

    const CT_Percentage& CT_SchemeColor::ChildGroup_1::get_green() const
    {    
    if (m_green)
    {
        return *m_green;
    }
    return CT_Percentage::default_instance();
    }

    bool CT_SchemeColor::ChildGroup_1::has_greenOff() const
    {    
    return m_has_greenOff;
    }

    CT_Percentage* CT_SchemeColor::ChildGroup_1::mutable_greenOff()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_greenOff = true;
    if (!m_greenOff)
    {
        m_greenOff = new CT_Percentage();
    }
    return m_greenOff;
    }

    const CT_Percentage& CT_SchemeColor::ChildGroup_1::get_greenOff() const
    {    
    if (m_greenOff)
    {
        return *m_greenOff;
    }
    return CT_Percentage::default_instance();
    }

    bool CT_SchemeColor::ChildGroup_1::has_greenMod() const
    {    
    return m_has_greenMod;
    }

    CT_Percentage* CT_SchemeColor::ChildGroup_1::mutable_greenMod()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_greenMod = true;
    if (!m_greenMod)
    {
        m_greenMod = new CT_Percentage();
    }
    return m_greenMod;
    }

    const CT_Percentage& CT_SchemeColor::ChildGroup_1::get_greenMod() const
    {    
    if (m_greenMod)
    {
        return *m_greenMod;
    }
    return CT_Percentage::default_instance();
    }

    bool CT_SchemeColor::ChildGroup_1::has_blue() const
    {    
    return m_has_blue;
    }

    CT_Percentage* CT_SchemeColor::ChildGroup_1::mutable_blue()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_blue = true;
    if (!m_blue)
    {
        m_blue = new CT_Percentage();
    }
    return m_blue;
    }

    const CT_Percentage& CT_SchemeColor::ChildGroup_1::get_blue() const
    {    
    if (m_blue)
    {
        return *m_blue;
    }
    return CT_Percentage::default_instance();
    }

    bool CT_SchemeColor::ChildGroup_1::has_blueOff() const
    {    
    return m_has_blueOff;
    }

    CT_Percentage* CT_SchemeColor::ChildGroup_1::mutable_blueOff()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_blueOff = true;
    if (!m_blueOff)
    {
        m_blueOff = new CT_Percentage();
    }
    return m_blueOff;
    }

    const CT_Percentage& CT_SchemeColor::ChildGroup_1::get_blueOff() const
    {    
    if (m_blueOff)
    {
        return *m_blueOff;
    }
    return CT_Percentage::default_instance();
    }

    bool CT_SchemeColor::ChildGroup_1::has_blueMod() const
    {    
    return m_has_blueMod;
    }

    CT_Percentage* CT_SchemeColor::ChildGroup_1::mutable_blueMod()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_blueMod = true;
    if (!m_blueMod)
    {
        m_blueMod = new CT_Percentage();
    }
    return m_blueMod;
    }

    const CT_Percentage& CT_SchemeColor::ChildGroup_1::get_blueMod() const
    {    
    if (m_blueMod)
    {
        return *m_blueMod;
    }
    return CT_Percentage::default_instance();
    }

    bool CT_SchemeColor::ChildGroup_1::has_gamma() const
    {    
    return m_has_gamma;
    }

    CT_GammaTransform* CT_SchemeColor::ChildGroup_1::mutable_gamma()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_gamma = true;
    if (!m_gamma)
    {
        m_gamma = new CT_GammaTransform();
    }
    return m_gamma;
    }

    const CT_GammaTransform& CT_SchemeColor::ChildGroup_1::get_gamma() const
    {    
    if (m_gamma)
    {
        return *m_gamma;
    }
    return CT_GammaTransform::default_instance();
    }

    bool CT_SchemeColor::ChildGroup_1::has_invGamma() const
    {    
    return m_has_invGamma;
    }

    CT_InverseGammaTransform* CT_SchemeColor::ChildGroup_1::mutable_invGamma()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = true;
    if (!m_invGamma)
    {
        m_invGamma = new CT_InverseGammaTransform();
    }
    return m_invGamma;
    }

    const CT_InverseGammaTransform& CT_SchemeColor::ChildGroup_1::get_invGamma() const
    {    
    if (m_invGamma)
    {
        return *m_invGamma;
    }
    return CT_InverseGammaTransform::default_instance();
    }

CT_SchemeColor* CT_SchemeColor::default_instance_ = NULL;

    // CT_PresetColor
    CT_PositiveFixedPercentage* CT_PresetColor::add_tint()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_PositiveFixedPercentage* pNewChild = pChildGroup->mutable_tint();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_PositiveFixedPercentage* CT_PresetColor::add_shade()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_PositiveFixedPercentage* pNewChild = pChildGroup->mutable_shade();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_ComplementTransform* CT_PresetColor::add_comp()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_ComplementTransform* pNewChild = pChildGroup->mutable_comp();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_InverseTransform* CT_PresetColor::add_inv()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_InverseTransform* pNewChild = pChildGroup->mutable_inv();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_GrayscaleTransform* CT_PresetColor::add_gray()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_GrayscaleTransform* pNewChild = pChildGroup->mutable_gray();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_PositiveFixedPercentage* CT_PresetColor::add_alpha()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_PositiveFixedPercentage* pNewChild = pChildGroup->mutable_alpha();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_FixedPercentage* CT_PresetColor::add_alphaOff()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_FixedPercentage* pNewChild = pChildGroup->mutable_alphaOff();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_PositivePercentage* CT_PresetColor::add_alphaMod()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_PositivePercentage* pNewChild = pChildGroup->mutable_alphaMod();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_PositiveFixedAngle* CT_PresetColor::add_hue()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_PositiveFixedAngle* pNewChild = pChildGroup->mutable_hue();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Angle* CT_PresetColor::add_hueOff()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Angle* pNewChild = pChildGroup->mutable_hueOff();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_PositivePercentage* CT_PresetColor::add_hueMod()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_PositivePercentage* pNewChild = pChildGroup->mutable_hueMod();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Percentage* CT_PresetColor::add_sat()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Percentage* pNewChild = pChildGroup->mutable_sat();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Percentage* CT_PresetColor::add_satOff()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Percentage* pNewChild = pChildGroup->mutable_satOff();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Percentage* CT_PresetColor::add_satMod()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Percentage* pNewChild = pChildGroup->mutable_satMod();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Percentage* CT_PresetColor::add_lum()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Percentage* pNewChild = pChildGroup->mutable_lum();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Percentage* CT_PresetColor::add_lumOff()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Percentage* pNewChild = pChildGroup->mutable_lumOff();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Percentage* CT_PresetColor::add_lumMod()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Percentage* pNewChild = pChildGroup->mutable_lumMod();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Percentage* CT_PresetColor::add_red()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Percentage* pNewChild = pChildGroup->mutable_red();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Percentage* CT_PresetColor::add_redOff()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Percentage* pNewChild = pChildGroup->mutable_redOff();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Percentage* CT_PresetColor::add_redMod()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Percentage* pNewChild = pChildGroup->mutable_redMod();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Percentage* CT_PresetColor::add_green()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Percentage* pNewChild = pChildGroup->mutable_green();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Percentage* CT_PresetColor::add_greenOff()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Percentage* pNewChild = pChildGroup->mutable_greenOff();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Percentage* CT_PresetColor::add_greenMod()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Percentage* pNewChild = pChildGroup->mutable_greenMod();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Percentage* CT_PresetColor::add_blue()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Percentage* pNewChild = pChildGroup->mutable_blue();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Percentage* CT_PresetColor::add_blueOff()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Percentage* pNewChild = pChildGroup->mutable_blueOff();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Percentage* CT_PresetColor::add_blueMod()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Percentage* pNewChild = pChildGroup->mutable_blueMod();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_GammaTransform* CT_PresetColor::add_gamma()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_GammaTransform* pNewChild = pChildGroup->mutable_gamma();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_InverseGammaTransform* CT_PresetColor::add_invGamma()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_InverseGammaTransform* pNewChild = pChildGroup->mutable_invGamma();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    void CT_PresetColor::clear()
    {    
    m_has_val_attr = false;
    
    if (m_val_attr)
    {
        delete m_val_attr;
        m_val_attr = NULL;
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

    void CT_PresetColor::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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
            
    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_tint())
            {
                (*iter)->get_tint().toXmlElem("tint", "", _outStream);
            }
            else if ((*iter)->has_shade())
            {
                (*iter)->get_shade().toXmlElem("shade", "", _outStream);
            }
            else if ((*iter)->has_comp())
            {
                (*iter)->get_comp().toXmlElem("comp", "", _outStream);
            }
            else if ((*iter)->has_inv())
            {
                (*iter)->get_inv().toXmlElem("inv", "", _outStream);
            }
            else if ((*iter)->has_gray())
            {
                (*iter)->get_gray().toXmlElem("gray", "", _outStream);
            }
            else if ((*iter)->has_alpha())
            {
                (*iter)->get_alpha().toXmlElem("alpha", "", _outStream);
            }
            else if ((*iter)->has_alphaOff())
            {
                (*iter)->get_alphaOff().toXmlElem("alphaOff", "", _outStream);
            }
            else if ((*iter)->has_alphaMod())
            {
                (*iter)->get_alphaMod().toXmlElem("alphaMod", "", _outStream);
            }
            else if ((*iter)->has_hue())
            {
                (*iter)->get_hue().toXmlElem("hue", "", _outStream);
            }
            else if ((*iter)->has_hueOff())
            {
                (*iter)->get_hueOff().toXmlElem("hueOff", "", _outStream);
            }
            else if ((*iter)->has_hueMod())
            {
                (*iter)->get_hueMod().toXmlElem("hueMod", "", _outStream);
            }
            else if ((*iter)->has_sat())
            {
                (*iter)->get_sat().toXmlElem("sat", "", _outStream);
            }
            else if ((*iter)->has_satOff())
            {
                (*iter)->get_satOff().toXmlElem("satOff", "", _outStream);
            }
            else if ((*iter)->has_satMod())
            {
                (*iter)->get_satMod().toXmlElem("satMod", "", _outStream);
            }
            else if ((*iter)->has_lum())
            {
                (*iter)->get_lum().toXmlElem("lum", "", _outStream);
            }
            else if ((*iter)->has_lumOff())
            {
                (*iter)->get_lumOff().toXmlElem("lumOff", "", _outStream);
            }
            else if ((*iter)->has_lumMod())
            {
                (*iter)->get_lumMod().toXmlElem("lumMod", "", _outStream);
            }
            else if ((*iter)->has_red())
            {
                (*iter)->get_red().toXmlElem("red", "", _outStream);
            }
            else if ((*iter)->has_redOff())
            {
                (*iter)->get_redOff().toXmlElem("redOff", "", _outStream);
            }
            else if ((*iter)->has_redMod())
            {
                (*iter)->get_redMod().toXmlElem("redMod", "", _outStream);
            }
            else if ((*iter)->has_green())
            {
                (*iter)->get_green().toXmlElem("green", "", _outStream);
            }
            else if ((*iter)->has_greenOff())
            {
                (*iter)->get_greenOff().toXmlElem("greenOff", "", _outStream);
            }
            else if ((*iter)->has_greenMod())
            {
                (*iter)->get_greenMod().toXmlElem("greenMod", "", _outStream);
            }
            else if ((*iter)->has_blue())
            {
                (*iter)->get_blue().toXmlElem("blue", "", _outStream);
            }
            else if ((*iter)->has_blueOff())
            {
                (*iter)->get_blueOff().toXmlElem("blueOff", "", _outStream);
            }
            else if ((*iter)->has_blueMod())
            {
                (*iter)->get_blueMod().toXmlElem("blueMod", "", _outStream);
            }
            else if ((*iter)->has_gamma())
            {
                (*iter)->get_gamma().toXmlElem("gamma", "", _outStream);
            }
            else if ((*iter)->has_invGamma())
            {
                (*iter)->get_invGamma().toXmlElem("invGamma", "", _outStream);
            }
        }
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_PresetColor& CT_PresetColor::default_instance()
    {    
    if (!CT_PresetColor::default_instance_)
    {
        CT_PresetColor::default_instance_ = new CT_PresetColor();
    }
    return *CT_PresetColor::default_instance_;
    }

    bool CT_PresetColor::has_val_attr() const
    {    
    return m_has_val_attr;
    }

    void CT_PresetColor::set_val_attr(const ST_PresetColorVal& _val_attr)
    {    
    m_has_val_attr = true;
    m_val_attr = new ST_PresetColorVal(_val_attr);
    }

    const ST_PresetColorVal& CT_PresetColor::get_val_attr() const
    {    
    if (m_val_attr)
    {
        return *m_val_attr;
    }
    return ST_PresetColorVal::default_instance();
    }


    // CT_PresetColor::ChildGroup_1
    bool CT_PresetColor::ChildGroup_1::has_tint() const
    {    
    return m_has_tint;
    }

    CT_PositiveFixedPercentage* CT_PresetColor::ChildGroup_1::mutable_tint()
    {    
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_tint = true;
    if (!m_tint)
    {
        m_tint = new CT_PositiveFixedPercentage();
    }
    return m_tint;
    }

    const CT_PositiveFixedPercentage& CT_PresetColor::ChildGroup_1::get_tint() const
    {    
    if (m_tint)
    {
        return *m_tint;
    }
    return CT_PositiveFixedPercentage::default_instance();
    }

    bool CT_PresetColor::ChildGroup_1::has_shade() const
    {    
    return m_has_shade;
    }

    CT_PositiveFixedPercentage* CT_PresetColor::ChildGroup_1::mutable_shade()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_shade = true;
    if (!m_shade)
    {
        m_shade = new CT_PositiveFixedPercentage();
    }
    return m_shade;
    }

    const CT_PositiveFixedPercentage& CT_PresetColor::ChildGroup_1::get_shade() const
    {    
    if (m_shade)
    {
        return *m_shade;
    }
    return CT_PositiveFixedPercentage::default_instance();
    }

    bool CT_PresetColor::ChildGroup_1::has_comp() const
    {    
    return m_has_comp;
    }

    CT_ComplementTransform* CT_PresetColor::ChildGroup_1::mutable_comp()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_comp = true;
    if (!m_comp)
    {
        m_comp = new CT_ComplementTransform();
    }
    return m_comp;
    }

    const CT_ComplementTransform& CT_PresetColor::ChildGroup_1::get_comp() const
    {    
    if (m_comp)
    {
        return *m_comp;
    }
    return CT_ComplementTransform::default_instance();
    }

    bool CT_PresetColor::ChildGroup_1::has_inv() const
    {    
    return m_has_inv;
    }

    CT_InverseTransform* CT_PresetColor::ChildGroup_1::mutable_inv()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_inv = true;
    if (!m_inv)
    {
        m_inv = new CT_InverseTransform();
    }
    return m_inv;
    }

    const CT_InverseTransform& CT_PresetColor::ChildGroup_1::get_inv() const
    {    
    if (m_inv)
    {
        return *m_inv;
    }
    return CT_InverseTransform::default_instance();
    }

    bool CT_PresetColor::ChildGroup_1::has_gray() const
    {    
    return m_has_gray;
    }

    CT_GrayscaleTransform* CT_PresetColor::ChildGroup_1::mutable_gray()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_gray = true;
    if (!m_gray)
    {
        m_gray = new CT_GrayscaleTransform();
    }
    return m_gray;
    }

    const CT_GrayscaleTransform& CT_PresetColor::ChildGroup_1::get_gray() const
    {    
    if (m_gray)
    {
        return *m_gray;
    }
    return CT_GrayscaleTransform::default_instance();
    }

    bool CT_PresetColor::ChildGroup_1::has_alpha() const
    {    
    return m_has_alpha;
    }

    CT_PositiveFixedPercentage* CT_PresetColor::ChildGroup_1::mutable_alpha()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_alpha = true;
    if (!m_alpha)
    {
        m_alpha = new CT_PositiveFixedPercentage();
    }
    return m_alpha;
    }

    const CT_PositiveFixedPercentage& CT_PresetColor::ChildGroup_1::get_alpha() const
    {    
    if (m_alpha)
    {
        return *m_alpha;
    }
    return CT_PositiveFixedPercentage::default_instance();
    }

    bool CT_PresetColor::ChildGroup_1::has_alphaOff() const
    {    
    return m_has_alphaOff;
    }

    CT_FixedPercentage* CT_PresetColor::ChildGroup_1::mutable_alphaOff()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_alphaOff = true;
    if (!m_alphaOff)
    {
        m_alphaOff = new CT_FixedPercentage();
    }
    return m_alphaOff;
    }

    const CT_FixedPercentage& CT_PresetColor::ChildGroup_1::get_alphaOff() const
    {    
    if (m_alphaOff)
    {
        return *m_alphaOff;
    }
    return CT_FixedPercentage::default_instance();
    }

    bool CT_PresetColor::ChildGroup_1::has_alphaMod() const
    {    
    return m_has_alphaMod;
    }

    CT_PositivePercentage* CT_PresetColor::ChildGroup_1::mutable_alphaMod()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_alphaMod = true;
    if (!m_alphaMod)
    {
        m_alphaMod = new CT_PositivePercentage();
    }
    return m_alphaMod;
    }

    const CT_PositivePercentage& CT_PresetColor::ChildGroup_1::get_alphaMod() const
    {    
    if (m_alphaMod)
    {
        return *m_alphaMod;
    }
    return CT_PositivePercentage::default_instance();
    }

    bool CT_PresetColor::ChildGroup_1::has_hue() const
    {    
    return m_has_hue;
    }

    CT_PositiveFixedAngle* CT_PresetColor::ChildGroup_1::mutable_hue()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_hue = true;
    if (!m_hue)
    {
        m_hue = new CT_PositiveFixedAngle();
    }
    return m_hue;
    }

    const CT_PositiveFixedAngle& CT_PresetColor::ChildGroup_1::get_hue() const
    {    
    if (m_hue)
    {
        return *m_hue;
    }
    return CT_PositiveFixedAngle::default_instance();
    }

    bool CT_PresetColor::ChildGroup_1::has_hueOff() const
    {    
    return m_has_hueOff;
    }

    CT_Angle* CT_PresetColor::ChildGroup_1::mutable_hueOff()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_hueOff = true;
    if (!m_hueOff)
    {
        m_hueOff = new CT_Angle();
    }
    return m_hueOff;
    }

    const CT_Angle& CT_PresetColor::ChildGroup_1::get_hueOff() const
    {    
    if (m_hueOff)
    {
        return *m_hueOff;
    }
    return CT_Angle::default_instance();
    }

    bool CT_PresetColor::ChildGroup_1::has_hueMod() const
    {    
    return m_has_hueMod;
    }

    CT_PositivePercentage* CT_PresetColor::ChildGroup_1::mutable_hueMod()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_hueMod = true;
    if (!m_hueMod)
    {
        m_hueMod = new CT_PositivePercentage();
    }
    return m_hueMod;
    }

    const CT_PositivePercentage& CT_PresetColor::ChildGroup_1::get_hueMod() const
    {    
    if (m_hueMod)
    {
        return *m_hueMod;
    }
    return CT_PositivePercentage::default_instance();
    }

    bool CT_PresetColor::ChildGroup_1::has_sat() const
    {    
    return m_has_sat;
    }

    CT_Percentage* CT_PresetColor::ChildGroup_1::mutable_sat()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_sat = true;
    if (!m_sat)
    {
        m_sat = new CT_Percentage();
    }
    return m_sat;
    }

    const CT_Percentage& CT_PresetColor::ChildGroup_1::get_sat() const
    {    
    if (m_sat)
    {
        return *m_sat;
    }
    return CT_Percentage::default_instance();
    }

    bool CT_PresetColor::ChildGroup_1::has_satOff() const
    {    
    return m_has_satOff;
    }

    CT_Percentage* CT_PresetColor::ChildGroup_1::mutable_satOff()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_satOff = true;
    if (!m_satOff)
    {
        m_satOff = new CT_Percentage();
    }
    return m_satOff;
    }

    const CT_Percentage& CT_PresetColor::ChildGroup_1::get_satOff() const
    {    
    if (m_satOff)
    {
        return *m_satOff;
    }
    return CT_Percentage::default_instance();
    }

    bool CT_PresetColor::ChildGroup_1::has_satMod() const
    {    
    return m_has_satMod;
    }

    CT_Percentage* CT_PresetColor::ChildGroup_1::mutable_satMod()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_satMod = true;
    if (!m_satMod)
    {
        m_satMod = new CT_Percentage();
    }
    return m_satMod;
    }

    const CT_Percentage& CT_PresetColor::ChildGroup_1::get_satMod() const
    {    
    if (m_satMod)
    {
        return *m_satMod;
    }
    return CT_Percentage::default_instance();
    }

    bool CT_PresetColor::ChildGroup_1::has_lum() const
    {    
    return m_has_lum;
    }

    CT_Percentage* CT_PresetColor::ChildGroup_1::mutable_lum()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_lum = true;
    if (!m_lum)
    {
        m_lum = new CT_Percentage();
    }
    return m_lum;
    }

    const CT_Percentage& CT_PresetColor::ChildGroup_1::get_lum() const
    {    
    if (m_lum)
    {
        return *m_lum;
    }
    return CT_Percentage::default_instance();
    }

    bool CT_PresetColor::ChildGroup_1::has_lumOff() const
    {    
    return m_has_lumOff;
    }

    CT_Percentage* CT_PresetColor::ChildGroup_1::mutable_lumOff()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_lumOff = true;
    if (!m_lumOff)
    {
        m_lumOff = new CT_Percentage();
    }
    return m_lumOff;
    }

    const CT_Percentage& CT_PresetColor::ChildGroup_1::get_lumOff() const
    {    
    if (m_lumOff)
    {
        return *m_lumOff;
    }
    return CT_Percentage::default_instance();
    }

    bool CT_PresetColor::ChildGroup_1::has_lumMod() const
    {    
    return m_has_lumMod;
    }

    CT_Percentage* CT_PresetColor::ChildGroup_1::mutable_lumMod()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_lumMod = true;
    if (!m_lumMod)
    {
        m_lumMod = new CT_Percentage();
    }
    return m_lumMod;
    }

    const CT_Percentage& CT_PresetColor::ChildGroup_1::get_lumMod() const
    {    
    if (m_lumMod)
    {
        return *m_lumMod;
    }
    return CT_Percentage::default_instance();
    }

    bool CT_PresetColor::ChildGroup_1::has_red() const
    {    
    return m_has_red;
    }

    CT_Percentage* CT_PresetColor::ChildGroup_1::mutable_red()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_red = true;
    if (!m_red)
    {
        m_red = new CT_Percentage();
    }
    return m_red;
    }

    const CT_Percentage& CT_PresetColor::ChildGroup_1::get_red() const
    {    
    if (m_red)
    {
        return *m_red;
    }
    return CT_Percentage::default_instance();
    }

    bool CT_PresetColor::ChildGroup_1::has_redOff() const
    {    
    return m_has_redOff;
    }

    CT_Percentage* CT_PresetColor::ChildGroup_1::mutable_redOff()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_redOff = true;
    if (!m_redOff)
    {
        m_redOff = new CT_Percentage();
    }
    return m_redOff;
    }

    const CT_Percentage& CT_PresetColor::ChildGroup_1::get_redOff() const
    {    
    if (m_redOff)
    {
        return *m_redOff;
    }
    return CT_Percentage::default_instance();
    }

    bool CT_PresetColor::ChildGroup_1::has_redMod() const
    {    
    return m_has_redMod;
    }

    CT_Percentage* CT_PresetColor::ChildGroup_1::mutable_redMod()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_redMod = true;
    if (!m_redMod)
    {
        m_redMod = new CT_Percentage();
    }
    return m_redMod;
    }

    const CT_Percentage& CT_PresetColor::ChildGroup_1::get_redMod() const
    {    
    if (m_redMod)
    {
        return *m_redMod;
    }
    return CT_Percentage::default_instance();
    }

    bool CT_PresetColor::ChildGroup_1::has_green() const
    {    
    return m_has_green;
    }

    CT_Percentage* CT_PresetColor::ChildGroup_1::mutable_green()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_green = true;
    if (!m_green)
    {
        m_green = new CT_Percentage();
    }
    return m_green;
    }

    const CT_Percentage& CT_PresetColor::ChildGroup_1::get_green() const
    {    
    if (m_green)
    {
        return *m_green;
    }
    return CT_Percentage::default_instance();
    }

    bool CT_PresetColor::ChildGroup_1::has_greenOff() const
    {    
    return m_has_greenOff;
    }

    CT_Percentage* CT_PresetColor::ChildGroup_1::mutable_greenOff()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_greenOff = true;
    if (!m_greenOff)
    {
        m_greenOff = new CT_Percentage();
    }
    return m_greenOff;
    }

    const CT_Percentage& CT_PresetColor::ChildGroup_1::get_greenOff() const
    {    
    if (m_greenOff)
    {
        return *m_greenOff;
    }
    return CT_Percentage::default_instance();
    }

    bool CT_PresetColor::ChildGroup_1::has_greenMod() const
    {    
    return m_has_greenMod;
    }

    CT_Percentage* CT_PresetColor::ChildGroup_1::mutable_greenMod()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_greenMod = true;
    if (!m_greenMod)
    {
        m_greenMod = new CT_Percentage();
    }
    return m_greenMod;
    }

    const CT_Percentage& CT_PresetColor::ChildGroup_1::get_greenMod() const
    {    
    if (m_greenMod)
    {
        return *m_greenMod;
    }
    return CT_Percentage::default_instance();
    }

    bool CT_PresetColor::ChildGroup_1::has_blue() const
    {    
    return m_has_blue;
    }

    CT_Percentage* CT_PresetColor::ChildGroup_1::mutable_blue()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_blue = true;
    if (!m_blue)
    {
        m_blue = new CT_Percentage();
    }
    return m_blue;
    }

    const CT_Percentage& CT_PresetColor::ChildGroup_1::get_blue() const
    {    
    if (m_blue)
    {
        return *m_blue;
    }
    return CT_Percentage::default_instance();
    }

    bool CT_PresetColor::ChildGroup_1::has_blueOff() const
    {    
    return m_has_blueOff;
    }

    CT_Percentage* CT_PresetColor::ChildGroup_1::mutable_blueOff()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_blueOff = true;
    if (!m_blueOff)
    {
        m_blueOff = new CT_Percentage();
    }
    return m_blueOff;
    }

    const CT_Percentage& CT_PresetColor::ChildGroup_1::get_blueOff() const
    {    
    if (m_blueOff)
    {
        return *m_blueOff;
    }
    return CT_Percentage::default_instance();
    }

    bool CT_PresetColor::ChildGroup_1::has_blueMod() const
    {    
    return m_has_blueMod;
    }

    CT_Percentage* CT_PresetColor::ChildGroup_1::mutable_blueMod()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_blueMod = true;
    if (!m_blueMod)
    {
        m_blueMod = new CT_Percentage();
    }
    return m_blueMod;
    }

    const CT_Percentage& CT_PresetColor::ChildGroup_1::get_blueMod() const
    {    
    if (m_blueMod)
    {
        return *m_blueMod;
    }
    return CT_Percentage::default_instance();
    }

    bool CT_PresetColor::ChildGroup_1::has_gamma() const
    {    
    return m_has_gamma;
    }

    CT_GammaTransform* CT_PresetColor::ChildGroup_1::mutable_gamma()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_invGamma = false;
    
    if (m_invGamma)
    {
        delete m_invGamma;
        m_invGamma = NULL;
    }
    ;
    
    m_has_gamma = true;
    if (!m_gamma)
    {
        m_gamma = new CT_GammaTransform();
    }
    return m_gamma;
    }

    const CT_GammaTransform& CT_PresetColor::ChildGroup_1::get_gamma() const
    {    
    if (m_gamma)
    {
        return *m_gamma;
    }
    return CT_GammaTransform::default_instance();
    }

    bool CT_PresetColor::ChildGroup_1::has_invGamma() const
    {    
    return m_has_invGamma;
    }

    CT_InverseGammaTransform* CT_PresetColor::ChildGroup_1::mutable_invGamma()
    {    
    
    m_has_tint = false;
    
    if (m_tint)
    {
        delete m_tint;
        m_tint = NULL;
    }
    ;
    
    m_has_shade = false;
    
    if (m_shade)
    {
        delete m_shade;
        m_shade = NULL;
    }
    ;
    
    m_has_comp = false;
    
    if (m_comp)
    {
        delete m_comp;
        m_comp = NULL;
    }
    ;
    
    m_has_inv = false;
    
    if (m_inv)
    {
        delete m_inv;
        m_inv = NULL;
    }
    ;
    
    m_has_gray = false;
    
    if (m_gray)
    {
        delete m_gray;
        m_gray = NULL;
    }
    ;
    
    m_has_alpha = false;
    
    if (m_alpha)
    {
        delete m_alpha;
        m_alpha = NULL;
    }
    ;
    
    m_has_alphaOff = false;
    
    if (m_alphaOff)
    {
        delete m_alphaOff;
        m_alphaOff = NULL;
    }
    ;
    
    m_has_alphaMod = false;
    
    if (m_alphaMod)
    {
        delete m_alphaMod;
        m_alphaMod = NULL;
    }
    ;
    
    m_has_hue = false;
    
    if (m_hue)
    {
        delete m_hue;
        m_hue = NULL;
    }
    ;
    
    m_has_hueOff = false;
    
    if (m_hueOff)
    {
        delete m_hueOff;
        m_hueOff = NULL;
    }
    ;
    
    m_has_hueMod = false;
    
    if (m_hueMod)
    {
        delete m_hueMod;
        m_hueMod = NULL;
    }
    ;
    
    m_has_sat = false;
    
    if (m_sat)
    {
        delete m_sat;
        m_sat = NULL;
    }
    ;
    
    m_has_satOff = false;
    
    if (m_satOff)
    {
        delete m_satOff;
        m_satOff = NULL;
    }
    ;
    
    m_has_satMod = false;
    
    if (m_satMod)
    {
        delete m_satMod;
        m_satMod = NULL;
    }
    ;
    
    m_has_lum = false;
    
    if (m_lum)
    {
        delete m_lum;
        m_lum = NULL;
    }
    ;
    
    m_has_lumOff = false;
    
    if (m_lumOff)
    {
        delete m_lumOff;
        m_lumOff = NULL;
    }
    ;
    
    m_has_lumMod = false;
    
    if (m_lumMod)
    {
        delete m_lumMod;
        m_lumMod = NULL;
    }
    ;
    
    m_has_red = false;
    
    if (m_red)
    {
        delete m_red;
        m_red = NULL;
    }
    ;
    
    m_has_redOff = false;
    
    if (m_redOff)
    {
        delete m_redOff;
        m_redOff = NULL;
    }
    ;
    
    m_has_redMod = false;
    
    if (m_redMod)
    {
        delete m_redMod;
        m_redMod = NULL;
    }
    ;
    
    m_has_green = false;
    
    if (m_green)
    {
        delete m_green;
        m_green = NULL;
    }
    ;
    
    m_has_greenOff = false;
    
    if (m_greenOff)
    {
        delete m_greenOff;
        m_greenOff = NULL;
    }
    ;
    
    m_has_greenMod = false;
    
    if (m_greenMod)
    {
        delete m_greenMod;
        m_greenMod = NULL;
    }
    ;
    
    m_has_blue = false;
    
    if (m_blue)
    {
        delete m_blue;
        m_blue = NULL;
    }
    ;
    
    m_has_blueOff = false;
    
    if (m_blueOff)
    {
        delete m_blueOff;
        m_blueOff = NULL;
    }
    ;
    
    m_has_blueMod = false;
    
    if (m_blueMod)
    {
        delete m_blueMod;
        m_blueMod = NULL;
    }
    ;
    
    m_has_gamma = false;
    
    if (m_gamma)
    {
        delete m_gamma;
        m_gamma = NULL;
    }
    ;
    
    m_has_invGamma = true;
    if (!m_invGamma)
    {
        m_invGamma = new CT_InverseGammaTransform();
    }
    return m_invGamma;
    }

    const CT_InverseGammaTransform& CT_PresetColor::ChildGroup_1::get_invGamma() const
    {    
    if (m_invGamma)
    {
        return *m_invGamma;
    }
    return CT_InverseGammaTransform::default_instance();
    }

CT_PresetColor* CT_PresetColor::default_instance_ = NULL;

    // CT_OfficeArtExtensionList
    CT_OfficeArtExtension* CT_OfficeArtExtensionList::add_ext()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_OfficeArtExtension* pNewChild = pChildGroup->mutable_ext();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    void CT_OfficeArtExtensionList::clear()
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

    void CT_OfficeArtExtensionList::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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
                (*iter)->get_ext().toXmlElem("ext", "", _outStream);
            }
        }
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_OfficeArtExtensionList& CT_OfficeArtExtensionList::default_instance()
    {    
    if (!CT_OfficeArtExtensionList::default_instance_)
    {
        CT_OfficeArtExtensionList::default_instance_ = new CT_OfficeArtExtensionList();
    }
    return *CT_OfficeArtExtensionList::default_instance_;
    }


    // CT_OfficeArtExtensionList::ChildGroup_1
    bool CT_OfficeArtExtensionList::ChildGroup_1::has_ext() const
    {    
    return m_has_ext;
    }

    CT_OfficeArtExtension* CT_OfficeArtExtensionList::ChildGroup_1::mutable_ext()
    {    
    
    m_has_ext = true;
    if (!m_ext)
    {
        m_ext = new CT_OfficeArtExtension();
    }
    return m_ext;
    }

    const CT_OfficeArtExtension& CT_OfficeArtExtensionList::ChildGroup_1::get_ext() const
    {    
    if (m_ext)
    {
        return *m_ext;
    }
    return CT_OfficeArtExtension::default_instance();
    }

CT_OfficeArtExtensionList* CT_OfficeArtExtensionList::default_instance_ = NULL;

    // CT_Scale2D
    bool CT_Scale2D::has_sx() const
    {    
    return m_has_sx;
    }

    CT_Ratio* CT_Scale2D::mutable_sx()
    {    
    m_has_sx = true;
    if (!m_sx)
    {
        m_sx = new CT_Ratio();
    }
    return m_sx;
    }

    const CT_Ratio& CT_Scale2D::get_sx() const
    {    
    if (m_sx)
    {
        return *m_sx;
    }
    return CT_Ratio::default_instance();
    }

    bool CT_Scale2D::has_sy() const
    {    
    return m_has_sy;
    }

    CT_Ratio* CT_Scale2D::mutable_sy()
    {    
    m_has_sy = true;
    if (!m_sy)
    {
        m_sy = new CT_Ratio();
    }
    return m_sy;
    }

    const CT_Ratio& CT_Scale2D::get_sy() const
    {    
    if (m_sy)
    {
        return *m_sy;
    }
    return CT_Ratio::default_instance();
    }

    void CT_Scale2D::clear()
    {    }

    void CT_Scale2D::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
            _outStream << ">";
            
    if (m_has_sx)
    {
        m_sx->toXmlElem("sx", "", _outStream);;
    }
    
    if (m_has_sy)
    {
        m_sy->toXmlElem("sy", "", _outStream);;
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_Scale2D& CT_Scale2D::default_instance()
    {    
    if (!CT_Scale2D::default_instance_)
    {
        CT_Scale2D::default_instance_ = new CT_Scale2D();
    }
    return *CT_Scale2D::default_instance_;
    }

CT_Scale2D* CT_Scale2D::default_instance_ = NULL;

    // CT_Transform2D
    bool CT_Transform2D::has_off() const
    {    
    return m_has_off;
    }

    CT_Point2D* CT_Transform2D::mutable_off()
    {    
    m_has_off = true;
    if (!m_off)
    {
        m_off = new CT_Point2D();
    }
    return m_off;
    }

    const CT_Point2D& CT_Transform2D::get_off() const
    {    
    if (m_off)
    {
        return *m_off;
    }
    return CT_Point2D::default_instance();
    }

    bool CT_Transform2D::has_ext() const
    {    
    return m_has_ext;
    }

    CT_PositiveSize2D* CT_Transform2D::mutable_ext()
    {    
    m_has_ext = true;
    if (!m_ext)
    {
        m_ext = new CT_PositiveSize2D();
    }
    return m_ext;
    }

    const CT_PositiveSize2D& CT_Transform2D::get_ext() const
    {    
    if (m_ext)
    {
        return *m_ext;
    }
    return CT_PositiveSize2D::default_instance();
    }

    void CT_Transform2D::clear()
    {    
    m_has_rot_attr = false;
    
    if (m_rot_attr)
    {
        delete m_rot_attr;
        m_rot_attr = NULL;
    }
    
    
    m_has_flipH_attr = false;
    m_flipH_attr = false;
    
    m_has_flipV_attr = false;
    m_flipV_attr = false;
    }

    void CT_Transform2D::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
    if (m_has_rot_attr)
    {
        m_rot_attr->toXmlAttr("rot", _outStream);
    }
    
    
    if (m_has_flipH_attr)
    {
        _outStream << " " << "flipH" << "=\"" << XSD::XMLBooleanStr(m_flipH_attr) << "\"";
    }
    
    
    if (m_has_flipV_attr)
    {
        _outStream << " " << "flipV" << "=\"" << XSD::XMLBooleanStr(m_flipV_attr) << "\"";
    }
    
            _outStream << ">";
            
    if (m_has_off)
    {
        m_off->toXmlElem("off", "", _outStream);;
    }
    
    if (m_has_ext)
    {
        m_ext->toXmlElem("ext", "", _outStream);;
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_Transform2D& CT_Transform2D::default_instance()
    {    
    if (!CT_Transform2D::default_instance_)
    {
        CT_Transform2D::default_instance_ = new CT_Transform2D();
    }
    return *CT_Transform2D::default_instance_;
    }

    bool CT_Transform2D::has_rot_attr() const
    {    
    return m_has_rot_attr;
    }

    void CT_Transform2D::set_rot_attr(const ST_Angle& _rot_attr)
    {    
    m_has_rot_attr = true;
    m_rot_attr = new ST_Angle(_rot_attr);
    }

    const ST_Angle& CT_Transform2D::get_rot_attr() const
    {    
    if (m_rot_attr)
    {
        return *m_rot_attr;
    }
    return ST_Angle::default_instance();
    }

    bool CT_Transform2D::has_flipH_attr() const
    {    
    return m_has_flipH_attr;
    }

    void CT_Transform2D::set_flipH_attr(const XSD::boolean_& _flipH_attr)
    {    
    m_has_flipH_attr = true;
    m_flipH_attr = _flipH_attr;
    }

    const XSD::boolean_& CT_Transform2D::get_flipH_attr() const
    {    
    return m_flipH_attr;
    }

    bool CT_Transform2D::has_flipV_attr() const
    {    
    return m_has_flipV_attr;
    }

    void CT_Transform2D::set_flipV_attr(const XSD::boolean_& _flipV_attr)
    {    
    m_has_flipV_attr = true;
    m_flipV_attr = _flipV_attr;
    }

    const XSD::boolean_& CT_Transform2D::get_flipV_attr() const
    {    
    return m_flipV_attr;
    }

CT_Transform2D* CT_Transform2D::default_instance_ = NULL;

    // CT_GroupTransform2D
    bool CT_GroupTransform2D::has_off() const
    {    
    return m_has_off;
    }

    CT_Point2D* CT_GroupTransform2D::mutable_off()
    {    
    m_has_off = true;
    if (!m_off)
    {
        m_off = new CT_Point2D();
    }
    return m_off;
    }

    const CT_Point2D& CT_GroupTransform2D::get_off() const
    {    
    if (m_off)
    {
        return *m_off;
    }
    return CT_Point2D::default_instance();
    }

    bool CT_GroupTransform2D::has_ext() const
    {    
    return m_has_ext;
    }

    CT_PositiveSize2D* CT_GroupTransform2D::mutable_ext()
    {    
    m_has_ext = true;
    if (!m_ext)
    {
        m_ext = new CT_PositiveSize2D();
    }
    return m_ext;
    }

    const CT_PositiveSize2D& CT_GroupTransform2D::get_ext() const
    {    
    if (m_ext)
    {
        return *m_ext;
    }
    return CT_PositiveSize2D::default_instance();
    }

    bool CT_GroupTransform2D::has_chOff() const
    {    
    return m_has_chOff;
    }

    CT_Point2D* CT_GroupTransform2D::mutable_chOff()
    {    
    m_has_chOff = true;
    if (!m_chOff)
    {
        m_chOff = new CT_Point2D();
    }
    return m_chOff;
    }

    const CT_Point2D& CT_GroupTransform2D::get_chOff() const
    {    
    if (m_chOff)
    {
        return *m_chOff;
    }
    return CT_Point2D::default_instance();
    }

    bool CT_GroupTransform2D::has_chExt() const
    {    
    return m_has_chExt;
    }

    CT_PositiveSize2D* CT_GroupTransform2D::mutable_chExt()
    {    
    m_has_chExt = true;
    if (!m_chExt)
    {
        m_chExt = new CT_PositiveSize2D();
    }
    return m_chExt;
    }

    const CT_PositiveSize2D& CT_GroupTransform2D::get_chExt() const
    {    
    if (m_chExt)
    {
        return *m_chExt;
    }
    return CT_PositiveSize2D::default_instance();
    }

    void CT_GroupTransform2D::clear()
    {    
    m_has_rot_attr = false;
    
    if (m_rot_attr)
    {
        delete m_rot_attr;
        m_rot_attr = NULL;
    }
    
    
    m_has_flipH_attr = false;
    m_flipH_attr = false;
    
    m_has_flipV_attr = false;
    m_flipV_attr = false;
    }

    void CT_GroupTransform2D::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
    if (m_has_rot_attr)
    {
        m_rot_attr->toXmlAttr("rot", _outStream);
    }
    
    
    if (m_has_flipH_attr)
    {
        _outStream << " " << "flipH" << "=\"" << XSD::XMLBooleanStr(m_flipH_attr) << "\"";
    }
    
    
    if (m_has_flipV_attr)
    {
        _outStream << " " << "flipV" << "=\"" << XSD::XMLBooleanStr(m_flipV_attr) << "\"";
    }
    
            _outStream << ">";
            
    if (m_has_off)
    {
        m_off->toXmlElem("off", "", _outStream);;
    }
    
    if (m_has_ext)
    {
        m_ext->toXmlElem("ext", "", _outStream);;
    }
    
    if (m_has_chOff)
    {
        m_chOff->toXmlElem("chOff", "", _outStream);;
    }
    
    if (m_has_chExt)
    {
        m_chExt->toXmlElem("chExt", "", _outStream);;
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_GroupTransform2D& CT_GroupTransform2D::default_instance()
    {    
    if (!CT_GroupTransform2D::default_instance_)
    {
        CT_GroupTransform2D::default_instance_ = new CT_GroupTransform2D();
    }
    return *CT_GroupTransform2D::default_instance_;
    }

    bool CT_GroupTransform2D::has_rot_attr() const
    {    
    return m_has_rot_attr;
    }

    void CT_GroupTransform2D::set_rot_attr(const ST_Angle& _rot_attr)
    {    
    m_has_rot_attr = true;
    m_rot_attr = new ST_Angle(_rot_attr);
    }

    const ST_Angle& CT_GroupTransform2D::get_rot_attr() const
    {    
    if (m_rot_attr)
    {
        return *m_rot_attr;
    }
    return ST_Angle::default_instance();
    }

    bool CT_GroupTransform2D::has_flipH_attr() const
    {    
    return m_has_flipH_attr;
    }

    void CT_GroupTransform2D::set_flipH_attr(const XSD::boolean_& _flipH_attr)
    {    
    m_has_flipH_attr = true;
    m_flipH_attr = _flipH_attr;
    }

    const XSD::boolean_& CT_GroupTransform2D::get_flipH_attr() const
    {    
    return m_flipH_attr;
    }

    bool CT_GroupTransform2D::has_flipV_attr() const
    {    
    return m_has_flipV_attr;
    }

    void CT_GroupTransform2D::set_flipV_attr(const XSD::boolean_& _flipV_attr)
    {    
    m_has_flipV_attr = true;
    m_flipV_attr = _flipV_attr;
    }

    const XSD::boolean_& CT_GroupTransform2D::get_flipV_attr() const
    {    
    return m_flipV_attr;
    }

CT_GroupTransform2D* CT_GroupTransform2D::default_instance_ = NULL;

    // CT_Point3D
    void CT_Point3D::clear()
    {    
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
    
    
    m_has_z_attr = false;
    
    if (m_z_attr)
    {
        delete m_z_attr;
        m_z_attr = NULL;
    }
    
    }

    void CT_Point3D::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
    if (m_has_x_attr)
    {
        m_x_attr->toXmlAttr("x", _outStream);
    }
    
    
    if (m_has_y_attr)
    {
        m_y_attr->toXmlAttr("y", _outStream);
    }
    
    
    if (m_has_z_attr)
    {
        m_z_attr->toXmlAttr("z", _outStream);
    }
    
            _outStream << ">";
            
            _outStream << "</" << _elemName << ">";
                }

    const CT_Point3D& CT_Point3D::default_instance()
    {    
    if (!CT_Point3D::default_instance_)
    {
        CT_Point3D::default_instance_ = new CT_Point3D();
    }
    return *CT_Point3D::default_instance_;
    }

    bool CT_Point3D::has_x_attr() const
    {    
    return m_has_x_attr;
    }

    void CT_Point3D::set_x_attr(const ST_Coordinate& _x_attr)
    {    
    m_has_x_attr = true;
    m_x_attr = new ST_Coordinate(_x_attr);
    }

    const ST_Coordinate& CT_Point3D::get_x_attr() const
    {    
    if (m_x_attr)
    {
    }
    }


