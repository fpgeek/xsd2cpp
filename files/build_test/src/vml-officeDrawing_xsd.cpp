#include "vml-officeDrawing_xsd.h"
#include <stdlib.h>
#include <sstream>
#include <algorithm>
#include <functional>
#include <assert.h>
#include "vml-main_xsd.h"
#include "shared-relationshipReference_xsd.h"
#include "shared-commonSimpleTypes_xsd.h"
#include "vml-officeDrawing_xsd.h"
#include "wml_xsd.h"
#include "vml-wordprocessingDrawing_xsd.h"
#include "vml-spreadsheetDrawing_xsd.h"
#include "vml-presentationDrawing_xsd.h"
#include "dml-wordprocessingDrawing_xsd.h"
#include "shared-math_xsd.h"
#include "shared-customXmlSchemaProperties_xsd.h"
#include "dml-main_xsd.h"
#include "dml-picture_xsd.h"
#include "dml-diagram_xsd.h"
#include "dml-chart_xsd.h"
#include "dml-lockedCanvas_xsd.h"
#include "dml-chartDrawing_xsd.h"
namespace ns_o {
using namespace std;

// Element

// Attribute

// ST_AlternateMathContentType
ST_AlternateMathContentType::ST_AlternateMathContentType()
    :m_has_value(false),
     m_value("")
{
}
ST_AlternateMathContentType::ST_AlternateMathContentType(const XSD::string_& _value)
    :m_has_value(true)
{

    set_value(_value);
}
ST_AlternateMathContentType::~ST_AlternateMathContentType()
{
    clear();
}
bool ST_AlternateMathContentType::has_value() const
{
    return m_has_value;
}

void ST_AlternateMathContentType::set_value(const XSD::string_& _value)
{
    m_has_value = true;
    m_value = _value;
}

const XSD::string_& ST_AlternateMathContentType::get_value() const
{
    return m_value;
}

void ST_AlternateMathContentType::clear()
{
    m_has_value = false;
    m_value.clear();;
}

void ST_AlternateMathContentType::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_value)
    {
        _outStream << " " << _attrName << "=\"" << m_value << "\"";;
    }
}

const ST_AlternateMathContentType& ST_AlternateMathContentType::default_instance()
{
    if (!ST_AlternateMathContentType::default_instance_)
    {
        ST_AlternateMathContentType::default_instance_ = new ST_AlternateMathContentType();
    }
    return *ST_AlternateMathContentType::default_instance_;
}

std::string ST_AlternateMathContentType::toString() const
{
    std::stringstream strStream;
    strStream << get_value();
    return strStream.str();
}

ST_AlternateMathContentType* ST_AlternateMathContentType::default_instance_ = NULL;

// ST_RType
ST_RType::ST_RType()
    :m_has_value(false)
{
}
ST_RType::ST_RType(const ST_RType::Type& _value)
    :m_has_value(true),
     m_value(_value)
{
}
ST_RType::~ST_RType()
{
    clear();
}
bool ST_RType::has_value() const
{
    return m_has_value;
}

void ST_RType::set_value(const ST_RType::Type& _value)
{
    m_has_value = true;
    m_value = _value;
}

const ST_RType::Type& ST_RType::get_value() const
{
    return m_value;
}

std::string ST_RType::toString() const
{
    return ST_RType::TypeStrList[m_value];
}

void ST_RType::clear()
{
    m_has_value = false;
}

void ST_RType::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_value)
    {
        _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
}

const ST_RType& ST_RType::default_instance()
{
    if (!ST_RType::default_instance_)
    {
        ST_RType::default_instance_ = new ST_RType();
    }
    return *ST_RType::default_instance_;
}

const std::string ST_RType::TypeStrList[] =
{
    "arc",
    "callout",
    "connector",
    "align"
};
ST_RType* ST_RType::default_instance_ = NULL;

// ST_How
ST_How::ST_How()
    :m_has_value(false)
{
}
ST_How::ST_How(const ST_How::Type& _value)
    :m_has_value(true),
     m_value(_value)
{
}
ST_How::~ST_How()
{
    clear();
}
bool ST_How::has_value() const
{
    return m_has_value;
}

void ST_How::set_value(const ST_How::Type& _value)
{
    m_has_value = true;
    m_value = _value;
}

const ST_How::Type& ST_How::get_value() const
{
    return m_value;
}

std::string ST_How::toString() const
{
    return ST_How::TypeStrList[m_value];
}

void ST_How::clear()
{
    m_has_value = false;
}

void ST_How::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_value)
    {
        _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
}

const ST_How& ST_How::default_instance()
{
    if (!ST_How::default_instance_)
    {
        ST_How::default_instance_ = new ST_How();
    }
    return *ST_How::default_instance_;
}

const std::string ST_How::TypeStrList[] =
{
    "top",
    "middle",
    "bottom",
    "left",
    "center",
    "right"
};
ST_How* ST_How::default_instance_ = NULL;

// ST_BWMode
ST_BWMode::ST_BWMode()
    :m_has_value(false)
{
}
ST_BWMode::ST_BWMode(const ST_BWMode::Type& _value)
    :m_has_value(true),
     m_value(_value)
{
}
ST_BWMode::~ST_BWMode()
{
    clear();
}
bool ST_BWMode::has_value() const
{
    return m_has_value;
}

void ST_BWMode::set_value(const ST_BWMode::Type& _value)
{
    m_has_value = true;
    m_value = _value;
}

const ST_BWMode::Type& ST_BWMode::get_value() const
{
    return m_value;
}

std::string ST_BWMode::toString() const
{
    return ST_BWMode::TypeStrList[m_value];
}

void ST_BWMode::clear()
{
    m_has_value = false;
}

void ST_BWMode::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_value)
    {
        _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
}

const ST_BWMode& ST_BWMode::default_instance()
{
    if (!ST_BWMode::default_instance_)
    {
        ST_BWMode::default_instance_ = new ST_BWMode();
    }
    return *ST_BWMode::default_instance_;
}

const std::string ST_BWMode::TypeStrList[] =
{
    "color",
    "auto",
    "grayScale",
    "lightGrayscale",
    "inverseGray",
    "grayOutline",
    "highContrast",
    "black",
    "white",
    "hide",
    "undrawn",
    "blackTextAndLines"
};
ST_BWMode* ST_BWMode::default_instance_ = NULL;

// ST_ScreenSize
ST_ScreenSize::ST_ScreenSize()
    :m_has_value(false)
{
}
ST_ScreenSize::ST_ScreenSize(const ST_ScreenSize::Type& _value)
    :m_has_value(true),
     m_value(_value)
{
}
ST_ScreenSize::~ST_ScreenSize()
{
    clear();
}
bool ST_ScreenSize::has_value() const
{
    return m_has_value;
}

void ST_ScreenSize::set_value(const ST_ScreenSize::Type& _value)
{
    m_has_value = true;
    m_value = _value;
}

const ST_ScreenSize::Type& ST_ScreenSize::get_value() const
{
    return m_value;
}

std::string ST_ScreenSize::toString() const
{
    return ST_ScreenSize::TypeStrList[m_value];
}

void ST_ScreenSize::clear()
{
    m_has_value = false;
}

void ST_ScreenSize::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_value)
    {
        _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
}

const ST_ScreenSize& ST_ScreenSize::default_instance()
{
    if (!ST_ScreenSize::default_instance_)
    {
        ST_ScreenSize::default_instance_ = new ST_ScreenSize();
    }
    return *ST_ScreenSize::default_instance_;
}

const std::string ST_ScreenSize::TypeStrList[] =
{
    "544,376",
    "640,480",
    "720,512",
    "800,600",
    "1024,768",
    "1152,862"
};
ST_ScreenSize* ST_ScreenSize::default_instance_ = NULL;

// ST_InsetMode
ST_InsetMode::ST_InsetMode()
    :m_has_value(false)
{
}
ST_InsetMode::ST_InsetMode(const ST_InsetMode::Type& _value)
    :m_has_value(true),
     m_value(_value)
{
}
ST_InsetMode::~ST_InsetMode()
{
    clear();
}
bool ST_InsetMode::has_value() const
{
    return m_has_value;
}

void ST_InsetMode::set_value(const ST_InsetMode::Type& _value)
{
    m_has_value = true;
    m_value = _value;
}

const ST_InsetMode::Type& ST_InsetMode::get_value() const
{
    return m_value;
}

std::string ST_InsetMode::toString() const
{
    return ST_InsetMode::TypeStrList[m_value];
}

void ST_InsetMode::clear()
{
    m_has_value = false;
}

void ST_InsetMode::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_value)
    {
        _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
}

const ST_InsetMode& ST_InsetMode::default_instance()
{
    if (!ST_InsetMode::default_instance_)
    {
        ST_InsetMode::default_instance_ = new ST_InsetMode();
    }
    return *ST_InsetMode::default_instance_;
}

const std::string ST_InsetMode::TypeStrList[] =
{
    "auto",
    "custom"
};
ST_InsetMode* ST_InsetMode::default_instance_ = NULL;

// ST_ColorMode
ST_ColorMode::ST_ColorMode()
    :m_has_value(false)
{
}
ST_ColorMode::ST_ColorMode(const ST_ColorMode::Type& _value)
    :m_has_value(true),
     m_value(_value)
{
}
ST_ColorMode::~ST_ColorMode()
{
    clear();
}
bool ST_ColorMode::has_value() const
{
    return m_has_value;
}

void ST_ColorMode::set_value(const ST_ColorMode::Type& _value)
{
    m_has_value = true;
    m_value = _value;
}

const ST_ColorMode::Type& ST_ColorMode::get_value() const
{
    return m_value;
}

std::string ST_ColorMode::toString() const
{
    return ST_ColorMode::TypeStrList[m_value];
}

void ST_ColorMode::clear()
{
    m_has_value = false;
}

void ST_ColorMode::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_value)
    {
        _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
}

const ST_ColorMode& ST_ColorMode::default_instance()
{
    if (!ST_ColorMode::default_instance_)
    {
        ST_ColorMode::default_instance_ = new ST_ColorMode();
    }
    return *ST_ColorMode::default_instance_;
}

const std::string ST_ColorMode::TypeStrList[] =
{
    "auto",
    "custom"
};
ST_ColorMode* ST_ColorMode::default_instance_ = NULL;

// ST_ContentType
ST_ContentType::ST_ContentType()
    :m_has_value(false),
     m_value("")
{
}
ST_ContentType::ST_ContentType(const XSD::string_& _value)
    :m_has_value(true)
{

    set_value(_value);
}
ST_ContentType::~ST_ContentType()
{
    clear();
}
bool ST_ContentType::has_value() const
{
    return m_has_value;
}

void ST_ContentType::set_value(const XSD::string_& _value)
{
    m_has_value = true;
    m_value = _value;
}

const XSD::string_& ST_ContentType::get_value() const
{
    return m_value;
}

void ST_ContentType::clear()
{
    m_has_value = false;
    m_value.clear();;
}

void ST_ContentType::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_value)
    {
        _outStream << " " << _attrName << "=\"" << m_value << "\"";;
    }
}

const ST_ContentType& ST_ContentType::default_instance()
{
    if (!ST_ContentType::default_instance_)
    {
        ST_ContentType::default_instance_ = new ST_ContentType();
    }
    return *ST_ContentType::default_instance_;
}

std::string ST_ContentType::toString() const
{
    std::stringstream strStream;
    strStream << get_value();
    return strStream.str();
}

ST_ContentType* ST_ContentType::default_instance_ = NULL;

// ST_DiagramLayout
ST_DiagramLayout::ST_DiagramLayout()
    :m_has_value(false)
{
}
ST_DiagramLayout::ST_DiagramLayout(const ST_DiagramLayout::Type& _value)
    :m_has_value(true),
     m_value(_value)
{
}
ST_DiagramLayout::~ST_DiagramLayout()
{
    clear();
}
bool ST_DiagramLayout::has_value() const
{
    return m_has_value;
}

void ST_DiagramLayout::set_value(const ST_DiagramLayout::Type& _value)
{
    m_has_value = true;
    m_value = _value;
}

const ST_DiagramLayout::Type& ST_DiagramLayout::get_value() const
{
    return m_value;
}

std::string ST_DiagramLayout::toString() const
{
    return ST_DiagramLayout::TypeStrList[m_value];
}

void ST_DiagramLayout::clear()
{
    m_has_value = false;
}

void ST_DiagramLayout::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_value)
    {
        _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
}

const ST_DiagramLayout& ST_DiagramLayout::default_instance()
{
    if (!ST_DiagramLayout::default_instance_)
    {
        ST_DiagramLayout::default_instance_ = new ST_DiagramLayout();
    }
    return *ST_DiagramLayout::default_instance_;
}

const std::string ST_DiagramLayout::TypeStrList[] =
{
    "0",
    "1",
    "2",
    "3"
};
ST_DiagramLayout* ST_DiagramLayout::default_instance_ = NULL;

// ST_ExtrusionType
ST_ExtrusionType::ST_ExtrusionType()
    :m_has_value(false)
{
}
ST_ExtrusionType::ST_ExtrusionType(const ST_ExtrusionType::Type& _value)
    :m_has_value(true),
     m_value(_value)
{
}
ST_ExtrusionType::~ST_ExtrusionType()
{
    clear();
}
bool ST_ExtrusionType::has_value() const
{
    return m_has_value;
}

void ST_ExtrusionType::set_value(const ST_ExtrusionType::Type& _value)
{
    m_has_value = true;
    m_value = _value;
}

const ST_ExtrusionType::Type& ST_ExtrusionType::get_value() const
{
    return m_value;
}

std::string ST_ExtrusionType::toString() const
{
    return ST_ExtrusionType::TypeStrList[m_value];
}

void ST_ExtrusionType::clear()
{
    m_has_value = false;
}

void ST_ExtrusionType::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_value)
    {
        _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
}

const ST_ExtrusionType& ST_ExtrusionType::default_instance()
{
    if (!ST_ExtrusionType::default_instance_)
    {
        ST_ExtrusionType::default_instance_ = new ST_ExtrusionType();
    }
    return *ST_ExtrusionType::default_instance_;
}

const std::string ST_ExtrusionType::TypeStrList[] =
{
    "perspective",
    "parallel"
};
ST_ExtrusionType* ST_ExtrusionType::default_instance_ = NULL;

// ST_ExtrusionRender
ST_ExtrusionRender::ST_ExtrusionRender()
    :m_has_value(false)
{
}
ST_ExtrusionRender::ST_ExtrusionRender(const ST_ExtrusionRender::Type& _value)
    :m_has_value(true),
     m_value(_value)
{
}
ST_ExtrusionRender::~ST_ExtrusionRender()
{
    clear();
}
bool ST_ExtrusionRender::has_value() const
{
    return m_has_value;
}

void ST_ExtrusionRender::set_value(const ST_ExtrusionRender::Type& _value)
{
    m_has_value = true;
    m_value = _value;
}

const ST_ExtrusionRender::Type& ST_ExtrusionRender::get_value() const
{
    return m_value;
}

std::string ST_ExtrusionRender::toString() const
{
    return ST_ExtrusionRender::TypeStrList[m_value];
}

void ST_ExtrusionRender::clear()
{
    m_has_value = false;
}

void ST_ExtrusionRender::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_value)
    {
        _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
}

const ST_ExtrusionRender& ST_ExtrusionRender::default_instance()
{
    if (!ST_ExtrusionRender::default_instance_)
    {
        ST_ExtrusionRender::default_instance_ = new ST_ExtrusionRender();
    }
    return *ST_ExtrusionRender::default_instance_;
}

const std::string ST_ExtrusionRender::TypeStrList[] =
{
    "solid",
    "wireFrame",
    "boundingCube"
};
ST_ExtrusionRender* ST_ExtrusionRender::default_instance_ = NULL;

// ST_ExtrusionPlane
ST_ExtrusionPlane::ST_ExtrusionPlane()
    :m_has_value(false)
{
}
ST_ExtrusionPlane::ST_ExtrusionPlane(const ST_ExtrusionPlane::Type& _value)
    :m_has_value(true),
     m_value(_value)
{
}
ST_ExtrusionPlane::~ST_ExtrusionPlane()
{
    clear();
}
bool ST_ExtrusionPlane::has_value() const
{
    return m_has_value;
}

void ST_ExtrusionPlane::set_value(const ST_ExtrusionPlane::Type& _value)
{
    m_has_value = true;
    m_value = _value;
}

const ST_ExtrusionPlane::Type& ST_ExtrusionPlane::get_value() const
{
    return m_value;
}

std::string ST_ExtrusionPlane::toString() const
{
    return ST_ExtrusionPlane::TypeStrList[m_value];
}

void ST_ExtrusionPlane::clear()
{
    m_has_value = false;
}

void ST_ExtrusionPlane::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_value)
    {
        _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
}

const ST_ExtrusionPlane& ST_ExtrusionPlane::default_instance()
{
    if (!ST_ExtrusionPlane::default_instance_)
    {
        ST_ExtrusionPlane::default_instance_ = new ST_ExtrusionPlane();
    }
    return *ST_ExtrusionPlane::default_instance_;
}

const std::string ST_ExtrusionPlane::TypeStrList[] =
{
    "XY",
    "ZX",
    "YZ"
};
ST_ExtrusionPlane* ST_ExtrusionPlane::default_instance_ = NULL;

// ST_Angle
ST_Angle::ST_Angle()
    :m_has_value(false)
{
}
ST_Angle::ST_Angle(const ST_Angle::Type& _value)
    :m_has_value(true),
     m_value(_value)
{
}
ST_Angle::~ST_Angle()
{
    clear();
}
bool ST_Angle::has_value() const
{
    return m_has_value;
}

void ST_Angle::set_value(const ST_Angle::Type& _value)
{
    m_has_value = true;
    m_value = _value;
}

const ST_Angle::Type& ST_Angle::get_value() const
{
    return m_value;
}

std::string ST_Angle::toString() const
{
    return ST_Angle::TypeStrList[m_value];
}

void ST_Angle::clear()
{
    m_has_value = false;
}

void ST_Angle::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_value)
    {
        _outStream << " " << _attrName << "=\"" << toString() << "\"";
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

const std::string ST_Angle::TypeStrList[] =
{
    "any",
    "30",
    "45",
    "60",
    "90",
    "auto"
};
ST_Angle* ST_Angle::default_instance_ = NULL;

// ST_CalloutDrop
ST_CalloutDrop::ST_CalloutDrop()
    :m_has_value(false),
     m_value("")
{
}
ST_CalloutDrop::ST_CalloutDrop(const XSD::string_& _value)
    :m_has_value(true)
{

    set_value(_value);
}
ST_CalloutDrop::~ST_CalloutDrop()
{
    clear();
}
bool ST_CalloutDrop::has_value() const
{
    return m_has_value;
}

void ST_CalloutDrop::set_value(const XSD::string_& _value)
{
    m_has_value = true;
    m_value = _value;
}

const XSD::string_& ST_CalloutDrop::get_value() const
{
    return m_value;
}

void ST_CalloutDrop::clear()
{
    m_has_value = false;
    m_value.clear();;
}

void ST_CalloutDrop::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_value)
    {
        _outStream << " " << _attrName << "=\"" << m_value << "\"";;
    }
}

const ST_CalloutDrop& ST_CalloutDrop::default_instance()
{
    if (!ST_CalloutDrop::default_instance_)
    {
        ST_CalloutDrop::default_instance_ = new ST_CalloutDrop();
    }
    return *ST_CalloutDrop::default_instance_;
}

std::string ST_CalloutDrop::toString() const
{
    std::stringstream strStream;
    strStream << get_value();
    return strStream.str();
}

ST_CalloutDrop* ST_CalloutDrop::default_instance_ = NULL;

// ST_CalloutPlacement
ST_CalloutPlacement::ST_CalloutPlacement()
    :m_has_value(false)
{
}
ST_CalloutPlacement::ST_CalloutPlacement(const ST_CalloutPlacement::Type& _value)
    :m_has_value(true),
     m_value(_value)
{
}
ST_CalloutPlacement::~ST_CalloutPlacement()
{
    clear();
}
bool ST_CalloutPlacement::has_value() const
{
    return m_has_value;
}

void ST_CalloutPlacement::set_value(const ST_CalloutPlacement::Type& _value)
{
    m_has_value = true;
    m_value = _value;
}

const ST_CalloutPlacement::Type& ST_CalloutPlacement::get_value() const
{
    return m_value;
}

std::string ST_CalloutPlacement::toString() const
{
    return ST_CalloutPlacement::TypeStrList[m_value];
}

void ST_CalloutPlacement::clear()
{
    m_has_value = false;
}

void ST_CalloutPlacement::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_value)
    {
        _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
}

const ST_CalloutPlacement& ST_CalloutPlacement::default_instance()
{
    if (!ST_CalloutPlacement::default_instance_)
    {
        ST_CalloutPlacement::default_instance_ = new ST_CalloutPlacement();
    }
    return *ST_CalloutPlacement::default_instance_;
}

const std::string ST_CalloutPlacement::TypeStrList[] =
{
    "top",
    "center",
    "bottom",
    "user"
};
ST_CalloutPlacement* ST_CalloutPlacement::default_instance_ = NULL;

// ST_ConnectorType
ST_ConnectorType::ST_ConnectorType()
    :m_has_value(false)
{
}
ST_ConnectorType::ST_ConnectorType(const ST_ConnectorType::Type& _value)
    :m_has_value(true),
     m_value(_value)
{
}
ST_ConnectorType::~ST_ConnectorType()
{
    clear();
}
bool ST_ConnectorType::has_value() const
{
    return m_has_value;
}

void ST_ConnectorType::set_value(const ST_ConnectorType::Type& _value)
{
    m_has_value = true;
    m_value = _value;
}

const ST_ConnectorType::Type& ST_ConnectorType::get_value() const
{
    return m_value;
}

std::string ST_ConnectorType::toString() const
{
    return ST_ConnectorType::TypeStrList[m_value];
}

void ST_ConnectorType::clear()
{
    m_has_value = false;
}

void ST_ConnectorType::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_value)
    {
        _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
}

const ST_ConnectorType& ST_ConnectorType::default_instance()
{
    if (!ST_ConnectorType::default_instance_)
    {
        ST_ConnectorType::default_instance_ = new ST_ConnectorType();
    }
    return *ST_ConnectorType::default_instance_;
}

const std::string ST_ConnectorType::TypeStrList[] =
{
    "none",
    "straight",
    "elbow",
    "curved"
};
ST_ConnectorType* ST_ConnectorType::default_instance_ = NULL;

// ST_HrAlign
ST_HrAlign::ST_HrAlign()
    :m_has_value(false)
{
}
ST_HrAlign::ST_HrAlign(const ST_HrAlign::Type& _value)
    :m_has_value(true),
     m_value(_value)
{
}
ST_HrAlign::~ST_HrAlign()
{
    clear();
}
bool ST_HrAlign::has_value() const
{
    return m_has_value;
}

void ST_HrAlign::set_value(const ST_HrAlign::Type& _value)
{
    m_has_value = true;
    m_value = _value;
}

const ST_HrAlign::Type& ST_HrAlign::get_value() const
{
    return m_value;
}

std::string ST_HrAlign::toString() const
{
    return ST_HrAlign::TypeStrList[m_value];
}

void ST_HrAlign::clear()
{
    m_has_value = false;
}

void ST_HrAlign::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_value)
    {
        _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
}

const ST_HrAlign& ST_HrAlign::default_instance()
{
    if (!ST_HrAlign::default_instance_)
    {
        ST_HrAlign::default_instance_ = new ST_HrAlign();
    }
    return *ST_HrAlign::default_instance_;
}

const std::string ST_HrAlign::TypeStrList[] =
{
    "left",
    "right",
    "center"
};
ST_HrAlign* ST_HrAlign::default_instance_ = NULL;

// ST_ConnectType
ST_ConnectType::ST_ConnectType()
    :m_has_value(false)
{
}
ST_ConnectType::ST_ConnectType(const ST_ConnectType::Type& _value)
    :m_has_value(true),
     m_value(_value)
{
}
ST_ConnectType::~ST_ConnectType()
{
    clear();
}
bool ST_ConnectType::has_value() const
{
    return m_has_value;
}

void ST_ConnectType::set_value(const ST_ConnectType::Type& _value)
{
    m_has_value = true;
    m_value = _value;
}

const ST_ConnectType::Type& ST_ConnectType::get_value() const
{
    return m_value;
}

std::string ST_ConnectType::toString() const
{
    return ST_ConnectType::TypeStrList[m_value];
}

void ST_ConnectType::clear()
{
    m_has_value = false;
}

void ST_ConnectType::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_value)
    {
        _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
}

const ST_ConnectType& ST_ConnectType::default_instance()
{
    if (!ST_ConnectType::default_instance_)
    {
        ST_ConnectType::default_instance_ = new ST_ConnectType();
    }
    return *ST_ConnectType::default_instance_;
}

const std::string ST_ConnectType::TypeStrList[] =
{
    "none",
    "rect",
    "segments",
    "custom"
};
ST_ConnectType* ST_ConnectType::default_instance_ = NULL;

// ST_OLELinkType
ST_OLELinkType::ST_OLELinkType()
    :m_has_value(false),
     m_value("")
{
}
ST_OLELinkType::ST_OLELinkType(const XSD::string_& _value)
    :m_has_value(true)
{

    set_value(_value);
}
ST_OLELinkType::~ST_OLELinkType()
{
    clear();
}
bool ST_OLELinkType::has_value() const
{
    return m_has_value;
}

void ST_OLELinkType::set_value(const XSD::string_& _value)
{
    m_has_value = true;
    m_value = _value;
}

const XSD::string_& ST_OLELinkType::get_value() const
{
    return m_value;
}

void ST_OLELinkType::clear()
{
    m_has_value = false;
    m_value.clear();;
}

void ST_OLELinkType::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_value)
    {
        _outStream << " " << _attrName << "=\"" << m_value << "\"";;
    }
}

const ST_OLELinkType& ST_OLELinkType::default_instance()
{
    if (!ST_OLELinkType::default_instance_)
    {
        ST_OLELinkType::default_instance_ = new ST_OLELinkType();
    }
    return *ST_OLELinkType::default_instance_;
}

std::string ST_OLELinkType::toString() const
{
    std::stringstream strStream;
    strStream << get_value();
    return strStream.str();
}

ST_OLELinkType* ST_OLELinkType::default_instance_ = NULL;

// ST_OLEType
ST_OLEType::ST_OLEType()
    :m_has_value(false)
{
}
ST_OLEType::ST_OLEType(const ST_OLEType::Type& _value)
    :m_has_value(true),
     m_value(_value)
{
}
ST_OLEType::~ST_OLEType()
{
    clear();
}
bool ST_OLEType::has_value() const
{
    return m_has_value;
}

void ST_OLEType::set_value(const ST_OLEType::Type& _value)
{
    m_has_value = true;
    m_value = _value;
}

const ST_OLEType::Type& ST_OLEType::get_value() const
{
    return m_value;
}

std::string ST_OLEType::toString() const
{
    return ST_OLEType::TypeStrList[m_value];
}

void ST_OLEType::clear()
{
    m_has_value = false;
}

void ST_OLEType::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_value)
    {
        _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
}

const ST_OLEType& ST_OLEType::default_instance()
{
    if (!ST_OLEType::default_instance_)
    {
        ST_OLEType::default_instance_ = new ST_OLEType();
    }
    return *ST_OLEType::default_instance_;
}

const std::string ST_OLEType::TypeStrList[] =
{
    "Embed",
    "Link"
};
ST_OLEType* ST_OLEType::default_instance_ = NULL;

// ST_OLEDrawAspect
ST_OLEDrawAspect::ST_OLEDrawAspect()
    :m_has_value(false)
{
}
ST_OLEDrawAspect::ST_OLEDrawAspect(const ST_OLEDrawAspect::Type& _value)
    :m_has_value(true),
     m_value(_value)
{
}
ST_OLEDrawAspect::~ST_OLEDrawAspect()
{
    clear();
}
bool ST_OLEDrawAspect::has_value() const
{
    return m_has_value;
}

void ST_OLEDrawAspect::set_value(const ST_OLEDrawAspect::Type& _value)
{
    m_has_value = true;
    m_value = _value;
}

const ST_OLEDrawAspect::Type& ST_OLEDrawAspect::get_value() const
{
    return m_value;
}

std::string ST_OLEDrawAspect::toString() const
{
    return ST_OLEDrawAspect::TypeStrList[m_value];
}

void ST_OLEDrawAspect::clear()
{
    m_has_value = false;
}

void ST_OLEDrawAspect::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_value)
    {
        _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
}

const ST_OLEDrawAspect& ST_OLEDrawAspect::default_instance()
{
    if (!ST_OLEDrawAspect::default_instance_)
    {
        ST_OLEDrawAspect::default_instance_ = new ST_OLEDrawAspect();
    }
    return *ST_OLEDrawAspect::default_instance_;
}

const std::string ST_OLEDrawAspect::TypeStrList[] =
{
    "Content",
    "Icon"
};
ST_OLEDrawAspect* ST_OLEDrawAspect::default_instance_ = NULL;

// ST_OLEUpdateMode
ST_OLEUpdateMode::ST_OLEUpdateMode()
    :m_has_value(false)
{
}
ST_OLEUpdateMode::ST_OLEUpdateMode(const ST_OLEUpdateMode::Type& _value)
    :m_has_value(true),
     m_value(_value)
{
}
ST_OLEUpdateMode::~ST_OLEUpdateMode()
{
    clear();
}
bool ST_OLEUpdateMode::has_value() const
{
    return m_has_value;
}

void ST_OLEUpdateMode::set_value(const ST_OLEUpdateMode::Type& _value)
{
    m_has_value = true;
    m_value = _value;
}

const ST_OLEUpdateMode::Type& ST_OLEUpdateMode::get_value() const
{
    return m_value;
}

std::string ST_OLEUpdateMode::toString() const
{
    return ST_OLEUpdateMode::TypeStrList[m_value];
}

void ST_OLEUpdateMode::clear()
{
    m_has_value = false;
}

void ST_OLEUpdateMode::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_value)
    {
        _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
}

const ST_OLEUpdateMode& ST_OLEUpdateMode::default_instance()
{
    if (!ST_OLEUpdateMode::default_instance_)
    {
        ST_OLEUpdateMode::default_instance_ = new ST_OLEUpdateMode();
    }
    return *ST_OLEUpdateMode::default_instance_;
}

const std::string ST_OLEUpdateMode::TypeStrList[] =
{
    "Always",
    "OnCall"
};
ST_OLEUpdateMode* ST_OLEUpdateMode::default_instance_ = NULL;

// ST_FillType
ST_FillType::ST_FillType()
    :m_has_value(false)
{
}
ST_FillType::ST_FillType(const ST_FillType::Type& _value)
    :m_has_value(true),
     m_value(_value)
{
}
ST_FillType::~ST_FillType()
{
    clear();
}
bool ST_FillType::has_value() const
{
    return m_has_value;
}

void ST_FillType::set_value(const ST_FillType::Type& _value)
{
    m_has_value = true;
    m_value = _value;
}

const ST_FillType::Type& ST_FillType::get_value() const
{
    return m_value;
}

std::string ST_FillType::toString() const
{
    return ST_FillType::TypeStrList[m_value];
}

void ST_FillType::clear()
{
    m_has_value = false;
}

void ST_FillType::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_value)
    {
        _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
}

const ST_FillType& ST_FillType::default_instance()
{
    if (!ST_FillType::default_instance_)
    {
        ST_FillType::default_instance_ = new ST_FillType();
    }
    return *ST_FillType::default_instance_;
}

const std::string ST_FillType::TypeStrList[] =
{
    "gradientCenter",
    "solid",
    "pattern",
    "tile",
    "frame",
    "gradientUnscaled",
    "gradientRadial",
    "gradient",
    "background"
};
ST_FillType* ST_FillType::default_instance_ = NULL;

// CT_ShapeDefaults
CT_ShapeDefaults::CT_ShapeDefaults()
    :m_has_v_fill(false),
     m_v_fill(NULL),
     m_has_v_stroke(false),
     m_v_stroke(NULL),
     m_has_v_textbox(false),
     m_v_textbox(NULL),
     m_has_v_shadow(false),
     m_v_shadow(NULL),
     m_has_skew(false),
     m_skew(NULL),
     m_has_extrusion(false),
     m_extrusion(NULL),
     m_has_callout(false),
     m_callout(NULL),
     m_has_lock(false),
     m_lock(NULL),
     m_has_colormru(false),
     m_colormru(NULL),
     m_has_colormenu(false),
     m_colormenu(NULL),
     m_has_v_ext_attr(false),
     m_v_ext_attr(NULL),
     m_has_spidmax_attr(false),
     m_spidmax_attr(0),
     m_has_style_attr(false),
     m_style_attr(""),
     m_has_fill_attr(false),
     m_fill_attr(NULL),
     m_has_fillcolor_attr(false),
     m_fillcolor_attr(NULL),
     m_has_stroke_attr(false),
     m_stroke_attr(NULL),
     m_has_strokecolor_attr(false),
     m_strokecolor_attr(NULL),
     m_has_allowincell_attr(false),
     m_allowincell_attr(NULL)
{
}
CT_ShapeDefaults::~CT_ShapeDefaults()
{
    clear();
}
bool CT_ShapeDefaults::has_v_fill() const
{
    return m_has_v_fill;
}

ns_v::CT_Fill* CT_ShapeDefaults::mutable_v_fill()
{
    m_has_v_fill = true;
    if (!m_v_fill)
    {
        m_v_fill = new ns_v::CT_Fill();
    }
    return m_v_fill;
}

const ns_v::CT_Fill& CT_ShapeDefaults::get_v_fill() const
{
    if (m_v_fill)
    {
        return *m_v_fill;
    }
    return ns_v::CT_Fill::default_instance();
}

bool CT_ShapeDefaults::has_v_stroke() const
{
    return m_has_v_stroke;
}

ns_v::CT_Stroke* CT_ShapeDefaults::mutable_v_stroke()
{
    m_has_v_stroke = true;
    if (!m_v_stroke)
    {
        m_v_stroke = new ns_v::CT_Stroke();
    }
    return m_v_stroke;
}

const ns_v::CT_Stroke& CT_ShapeDefaults::get_v_stroke() const
{
    if (m_v_stroke)
    {
        return *m_v_stroke;
    }
    return ns_v::CT_Stroke::default_instance();
}

bool CT_ShapeDefaults::has_v_textbox() const
{
    return m_has_v_textbox;
}

ns_v::CT_Textbox* CT_ShapeDefaults::mutable_v_textbox()
{
    m_has_v_textbox = true;
    if (!m_v_textbox)
    {
        m_v_textbox = new ns_v::CT_Textbox();
    }
    return m_v_textbox;
}

const ns_v::CT_Textbox& CT_ShapeDefaults::get_v_textbox() const
{
    if (m_v_textbox)
    {
        return *m_v_textbox;
    }
    return ns_v::CT_Textbox::default_instance();
}

bool CT_ShapeDefaults::has_v_shadow() const
{
    return m_has_v_shadow;
}

ns_v::CT_Shadow* CT_ShapeDefaults::mutable_v_shadow()
{
    m_has_v_shadow = true;
    if (!m_v_shadow)
    {
        m_v_shadow = new ns_v::CT_Shadow();
    }
    return m_v_shadow;
}

const ns_v::CT_Shadow& CT_ShapeDefaults::get_v_shadow() const
{
    if (m_v_shadow)
    {
        return *m_v_shadow;
    }
    return ns_v::CT_Shadow::default_instance();
}

bool CT_ShapeDefaults::has_skew() const
{
    return m_has_skew;
}

CT_Skew* CT_ShapeDefaults::mutable_skew()
{
    m_has_skew = true;
    if (!m_skew)
    {
        m_skew = new CT_Skew();
    }
    return m_skew;
}

const CT_Skew& CT_ShapeDefaults::get_skew() const
{
    if (m_skew)
    {
        return *m_skew;
    }
    return CT_Skew::default_instance();
}

bool CT_ShapeDefaults::has_extrusion() const
{
    return m_has_extrusion;
}

CT_Extrusion* CT_ShapeDefaults::mutable_extrusion()
{
    m_has_extrusion = true;
    if (!m_extrusion)
    {
        m_extrusion = new CT_Extrusion();
    }
    return m_extrusion;
}

const CT_Extrusion& CT_ShapeDefaults::get_extrusion() const
{
    if (m_extrusion)
    {
        return *m_extrusion;
    }
    return CT_Extrusion::default_instance();
}

bool CT_ShapeDefaults::has_callout() const
{
    return m_has_callout;
}

CT_Callout* CT_ShapeDefaults::mutable_callout()
{
    m_has_callout = true;
    if (!m_callout)
    {
        m_callout = new CT_Callout();
    }
    return m_callout;
}

const CT_Callout& CT_ShapeDefaults::get_callout() const
{
    if (m_callout)
    {
        return *m_callout;
    }
    return CT_Callout::default_instance();
}

bool CT_ShapeDefaults::has_lock() const
{
    return m_has_lock;
}

CT_Lock* CT_ShapeDefaults::mutable_lock()
{
    m_has_lock = true;
    if (!m_lock)
    {
        m_lock = new CT_Lock();
    }
    return m_lock;
}

const CT_Lock& CT_ShapeDefaults::get_lock() const
{
    if (m_lock)
    {
        return *m_lock;
    }
    return CT_Lock::default_instance();
}

bool CT_ShapeDefaults::has_colormru() const
{
    return m_has_colormru;
}

CT_ColorMru* CT_ShapeDefaults::mutable_colormru()
{
    m_has_colormru = true;
    if (!m_colormru)
    {
        m_colormru = new CT_ColorMru();
    }
    return m_colormru;
}

const CT_ColorMru& CT_ShapeDefaults::get_colormru() const
{
    if (m_colormru)
    {
        return *m_colormru;
    }
    return CT_ColorMru::default_instance();
}

bool CT_ShapeDefaults::has_colormenu() const
{
    return m_has_colormenu;
}

CT_ColorMenu* CT_ShapeDefaults::mutable_colormenu()
{
    m_has_colormenu = true;
    if (!m_colormenu)
    {
        m_colormenu = new CT_ColorMenu();
    }
    return m_colormenu;
}

const CT_ColorMenu& CT_ShapeDefaults::get_colormenu() const
{
    if (m_colormenu)
    {
        return *m_colormenu;
    }
    return CT_ColorMenu::default_instance();
}

void CT_ShapeDefaults::clear()
{
    m_has_v_ext_attr = false;

    if (m_v_ext_attr)
    {
        delete m_v_ext_attr;
        m_v_ext_attr = NULL;
    }


    m_has_spidmax_attr = false;
    m_spidmax_attr = 0;

    m_has_style_attr = false;
    m_style_attr.clear();

    m_has_fill_attr = false;

    if (m_fill_attr)
    {
        delete m_fill_attr;
        m_fill_attr = NULL;
    }


    m_has_fillcolor_attr = false;

    if (m_fillcolor_attr)
    {
        delete m_fillcolor_attr;
        m_fillcolor_attr = NULL;
    }


    m_has_stroke_attr = false;

    if (m_stroke_attr)
    {
        delete m_stroke_attr;
        m_stroke_attr = NULL;
    }


    m_has_strokecolor_attr = false;

    if (m_strokecolor_attr)
    {
        delete m_strokecolor_attr;
        m_strokecolor_attr = NULL;
    }


    m_has_allowincell_attr = false;

    if (m_allowincell_attr)
    {
        delete m_allowincell_attr;
        m_allowincell_attr = NULL;
    }


    m_has_v_fill = false;

    if (m_v_fill)
    {
        delete m_v_fill;
        m_v_fill = NULL;
    }


    m_has_v_stroke = false;

    if (m_v_stroke)
    {
        delete m_v_stroke;
        m_v_stroke = NULL;
    }


    m_has_v_textbox = false;

    if (m_v_textbox)
    {
        delete m_v_textbox;
        m_v_textbox = NULL;
    }


    m_has_v_shadow = false;

    if (m_v_shadow)
    {
        delete m_v_shadow;
        m_v_shadow = NULL;
    }


    m_has_skew = false;

    if (m_skew)
    {
        delete m_skew;
        m_skew = NULL;
    }


    m_has_extrusion = false;

    if (m_extrusion)
    {
        delete m_extrusion;
        m_extrusion = NULL;
    }


    m_has_callout = false;

    if (m_callout)
    {
        delete m_callout;
        m_callout = NULL;
    }


    m_has_lock = false;

    if (m_lock)
    {
        delete m_lock;
        m_lock = NULL;
    }


    m_has_colormru = false;

    if (m_colormru)
    {
        delete m_colormru;
        m_colormru = NULL;
    }


    m_has_colormenu = false;

    if (m_colormenu)
    {
        delete m_colormenu;
        m_colormenu = NULL;
    }

}

void CT_ShapeDefaults::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_v_ext_attr)
    {
        m_v_ext_attr->toXmlAttr("v:ext", _outStream);
    }



    if (m_has_spidmax_attr)
    {
        _outStream << " " << "spidmax" << "=\"" << m_spidmax_attr << "\"";
    }



    if (m_has_style_attr)
    {
        _outStream << " " << "style" << "=\"" << m_style_attr << "\"";
    }



    if (m_has_fill_attr)
    {
        m_fill_attr->toXmlAttr("fill", _outStream);
    }



    if (m_has_fillcolor_attr)
    {
        m_fillcolor_attr->toXmlAttr("fillcolor", _outStream);
    }



    if (m_has_stroke_attr)
    {
        m_stroke_attr->toXmlAttr("stroke", _outStream);
    }



    if (m_has_strokecolor_attr)
    {
        m_strokecolor_attr->toXmlAttr("strokecolor", _outStream);
    }



    if (m_has_allowincell_attr)
    {
        m_allowincell_attr->toXmlAttr("allowincell", _outStream);
    }

    _outStream << ">";


    if (m_has_v_fill)
    {
        m_v_fill->toXmlElem("v:fill", "", _outStream);
    }


    if (m_has_v_stroke)
    {
        m_v_stroke->toXmlElem("v:stroke", "", _outStream);
    }


    if (m_has_v_textbox)
    {
        m_v_textbox->toXmlElem("v:textbox", "", _outStream);
    }


    if (m_has_v_shadow)
    {
        m_v_shadow->toXmlElem("v:shadow", "", _outStream);
    }


    if (m_has_skew)
    {
        m_skew->toXmlElem("o:skew", "", _outStream);
    }


    if (m_has_extrusion)
    {
        m_extrusion->toXmlElem("o:extrusion", "", _outStream);
    }


    if (m_has_callout)
    {
        m_callout->toXmlElem("o:callout", "", _outStream);
    }


    if (m_has_lock)
    {
        m_lock->toXmlElem("o:lock", "", _outStream);
    }


    if (m_has_colormru)
    {
        m_colormru->toXmlElem("o:colormru", "", _outStream);
    }


    if (m_has_colormenu)
    {
        m_colormenu->toXmlElem("o:colormenu", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_ShapeDefaults& CT_ShapeDefaults::default_instance()
{
    if (!CT_ShapeDefaults::default_instance_)
    {
        CT_ShapeDefaults::default_instance_ = new CT_ShapeDefaults();
    }
    return *CT_ShapeDefaults::default_instance_;
}

bool CT_ShapeDefaults::has_v_ext_attr() const
{
    return m_has_v_ext_attr;
}

void CT_ShapeDefaults::set_v_ext_attr(const ns_v::ST_Ext& _v_ext_attr)
{
    m_has_v_ext_attr = true;
    m_v_ext_attr = new ns_v::ST_Ext(_v_ext_attr);
}

const ns_v::ST_Ext& CT_ShapeDefaults::get_v_ext_attr() const
{
    if (m_v_ext_attr)
    {
        return *m_v_ext_attr;
    }
    return ns_v::ST_Ext::default_instance();
}

bool CT_ShapeDefaults::has_spidmax_attr() const
{
    return m_has_spidmax_attr;
}

void CT_ShapeDefaults::set_spidmax_attr(const XSD::integer_& _spidmax_attr)
{
    m_has_spidmax_attr = true;
    m_spidmax_attr = _spidmax_attr;
}

const XSD::integer_& CT_ShapeDefaults::get_spidmax_attr() const
{
    return m_spidmax_attr;
}

bool CT_ShapeDefaults::has_style_attr() const
{
    return m_has_style_attr;
}

void CT_ShapeDefaults::set_style_attr(const XSD::string_& _style_attr)
{
    m_has_style_attr = true;
    m_style_attr = _style_attr;
}

const XSD::string_& CT_ShapeDefaults::get_style_attr() const
{
    return m_style_attr;
}

bool CT_ShapeDefaults::has_fill_attr() const
{
    return m_has_fill_attr;
}

void CT_ShapeDefaults::set_fill_attr(const ns_s::ST_TrueFalse& _fill_attr)
{
    m_has_fill_attr = true;
    m_fill_attr = new ns_s::ST_TrueFalse(_fill_attr);
}

const ns_s::ST_TrueFalse& CT_ShapeDefaults::get_fill_attr() const
{
    if (m_fill_attr)
    {
        return *m_fill_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
}

bool CT_ShapeDefaults::has_fillcolor_attr() const
{
    return m_has_fillcolor_attr;
}

void CT_ShapeDefaults::set_fillcolor_attr(const ns_s::ST_ColorType& _fillcolor_attr)
{
    m_has_fillcolor_attr = true;
    m_fillcolor_attr = new ns_s::ST_ColorType(_fillcolor_attr);
}

const ns_s::ST_ColorType& CT_ShapeDefaults::get_fillcolor_attr() const
{
    if (m_fillcolor_attr)
    {
        return *m_fillcolor_attr;
    }
    return ns_s::ST_ColorType::default_instance();
}

bool CT_ShapeDefaults::has_stroke_attr() const
{
    return m_has_stroke_attr;
}

void CT_ShapeDefaults::set_stroke_attr(const ns_s::ST_TrueFalse& _stroke_attr)
{
    m_has_stroke_attr = true;
    m_stroke_attr = new ns_s::ST_TrueFalse(_stroke_attr);
}

const ns_s::ST_TrueFalse& CT_ShapeDefaults::get_stroke_attr() const
{
    if (m_stroke_attr)
    {
        return *m_stroke_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
}

bool CT_ShapeDefaults::has_strokecolor_attr() const
{
    return m_has_strokecolor_attr;
}

void CT_ShapeDefaults::set_strokecolor_attr(const ns_s::ST_ColorType& _strokecolor_attr)
{
    m_has_strokecolor_attr = true;
    m_strokecolor_attr = new ns_s::ST_ColorType(_strokecolor_attr);
}

const ns_s::ST_ColorType& CT_ShapeDefaults::get_strokecolor_attr() const
{
    if (m_strokecolor_attr)
    {
        return *m_strokecolor_attr;
    }
    return ns_s::ST_ColorType::default_instance();
}

bool CT_ShapeDefaults::has_allowincell_attr() const
{
    return m_has_allowincell_attr;
}

void CT_ShapeDefaults::set_allowincell_attr(const ns_s::ST_TrueFalse& _allowincell_attr)
{
    m_has_allowincell_attr = true;
    m_allowincell_attr = new ns_s::ST_TrueFalse(_allowincell_attr);
}

const ns_s::ST_TrueFalse& CT_ShapeDefaults::get_allowincell_attr() const
{
    if (m_allowincell_attr)
    {
        return *m_allowincell_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
}

CT_ShapeDefaults* CT_ShapeDefaults::default_instance_ = NULL;

// CT_Ink
CT_Ink::CT_Ink()
    :m_has_i_attr(false),
     m_i_attr(""),
     m_has_annotation_attr(false),
     m_annotation_attr(NULL),
     m_has_contentType_attr(false),
     m_contentType_attr(NULL)
{
}
CT_Ink::~CT_Ink()
{
    clear();
}
void CT_Ink::clear()
{
    m_has_i_attr = false;
    m_i_attr.clear();

    m_has_annotation_attr = false;

    if (m_annotation_attr)
    {
        delete m_annotation_attr;
        m_annotation_attr = NULL;
    }


    m_has_contentType_attr = false;

    if (m_contentType_attr)
    {
        delete m_contentType_attr;
        m_contentType_attr = NULL;
    }

}

void CT_Ink::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_i_attr)
    {
        _outStream << " " << "i" << "=\"" << m_i_attr << "\"";
    }



    if (m_has_annotation_attr)
    {
        m_annotation_attr->toXmlAttr("annotation", _outStream);
    }



    if (m_has_contentType_attr)
    {
        m_contentType_attr->toXmlAttr("contentType", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_Ink& CT_Ink::default_instance()
{
    if (!CT_Ink::default_instance_)
    {
        CT_Ink::default_instance_ = new CT_Ink();
    }
    return *CT_Ink::default_instance_;
}

bool CT_Ink::has_i_attr() const
{
    return m_has_i_attr;
}

void CT_Ink::set_i_attr(const XSD::string_& _i_attr)
{
    m_has_i_attr = true;
    m_i_attr = _i_attr;
}

const XSD::string_& CT_Ink::get_i_attr() const
{
    return m_i_attr;
}

bool CT_Ink::has_annotation_attr() const
{
    return m_has_annotation_attr;
}

void CT_Ink::set_annotation_attr(const ns_s::ST_TrueFalse& _annotation_attr)
{
    m_has_annotation_attr = true;
    m_annotation_attr = new ns_s::ST_TrueFalse(_annotation_attr);
}

const ns_s::ST_TrueFalse& CT_Ink::get_annotation_attr() const
{
    if (m_annotation_attr)
    {
        return *m_annotation_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
}

bool CT_Ink::has_contentType_attr() const
{
    return m_has_contentType_attr;
}

void CT_Ink::set_contentType_attr(const ST_ContentType& _contentType_attr)
{
    m_has_contentType_attr = true;
    m_contentType_attr = new ST_ContentType(_contentType_attr);
}

const ST_ContentType& CT_Ink::get_contentType_attr() const
{
    if (m_contentType_attr)
    {
        return *m_contentType_attr;
    }
    return ST_ContentType::default_instance();
}

CT_Ink* CT_Ink::default_instance_ = NULL;

// CT_SignatureLine
CT_SignatureLine::CT_SignatureLine()
    :m_has_v_ext_attr(false),
     m_v_ext_attr(NULL),
     m_has_issignatureline_attr(false),
     m_issignatureline_attr(NULL),
     m_has_id_attr(false),
     m_id_attr(NULL),
     m_has_provid_attr(false),
     m_provid_attr(NULL),
     m_has_signinginstructionsset_attr(false),
     m_signinginstructionsset_attr(NULL),
     m_has_allowcomments_attr(false),
     m_allowcomments_attr(NULL),
     m_has_showsigndate_attr(false),
     m_showsigndate_attr(NULL),
     m_has_suggestedsigner_attr(false),
     m_suggestedsigner_attr(""),
     m_has_suggestedsigner2_attr(false),
     m_suggestedsigner2_attr(""),
     m_has_suggestedsigneremail_attr(false),
     m_suggestedsigneremail_attr(""),
     m_has_signinginstructions_attr(false),
     m_signinginstructions_attr(""),
     m_has_addlxml_attr(false),
     m_addlxml_attr(""),
     m_has_sigprovurl_attr(false),
     m_sigprovurl_attr("")
{
}
CT_SignatureLine::~CT_SignatureLine()
{
    clear();
}
void CT_SignatureLine::clear()
{
    m_has_v_ext_attr = false;

    if (m_v_ext_attr)
    {
        delete m_v_ext_attr;
        m_v_ext_attr = NULL;
    }


    m_has_issignatureline_attr = false;

    if (m_issignatureline_attr)
    {
        delete m_issignatureline_attr;
        m_issignatureline_attr = NULL;
    }


    m_has_id_attr = false;

    if (m_id_attr)
    {
        delete m_id_attr;
        m_id_attr = NULL;
    }


    m_has_provid_attr = false;

    if (m_provid_attr)
    {
        delete m_provid_attr;
        m_provid_attr = NULL;
    }


    m_has_signinginstructionsset_attr = false;

    if (m_signinginstructionsset_attr)
    {
        delete m_signinginstructionsset_attr;
        m_signinginstructionsset_attr = NULL;
    }


    m_has_allowcomments_attr = false;

    if (m_allowcomments_attr)
    {
        delete m_allowcomments_attr;
        m_allowcomments_attr = NULL;
    }


    m_has_showsigndate_attr = false;

    if (m_showsigndate_attr)
    {
        delete m_showsigndate_attr;
        m_showsigndate_attr = NULL;
    }


    m_has_suggestedsigner_attr = false;
    m_suggestedsigner_attr.clear();

    m_has_suggestedsigner2_attr = false;
    m_suggestedsigner2_attr.clear();

    m_has_suggestedsigneremail_attr = false;
    m_suggestedsigneremail_attr.clear();

    m_has_signinginstructions_attr = false;
    m_signinginstructions_attr.clear();

    m_has_addlxml_attr = false;
    m_addlxml_attr.clear();

    m_has_sigprovurl_attr = false;
    m_sigprovurl_attr.clear();
}

void CT_SignatureLine::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_v_ext_attr)
    {
        m_v_ext_attr->toXmlAttr("v:ext", _outStream);
    }



    if (m_has_issignatureline_attr)
    {
        m_issignatureline_attr->toXmlAttr("issignatureline", _outStream);
    }



    if (m_has_id_attr)
    {
        m_id_attr->toXmlAttr("id", _outStream);
    }



    if (m_has_provid_attr)
    {
        m_provid_attr->toXmlAttr("provid", _outStream);
    }



    if (m_has_signinginstructionsset_attr)
    {
        m_signinginstructionsset_attr->toXmlAttr("signinginstructionsset", _outStream);
    }



    if (m_has_allowcomments_attr)
    {
        m_allowcomments_attr->toXmlAttr("allowcomments", _outStream);
    }



    if (m_has_showsigndate_attr)
    {
        m_showsigndate_attr->toXmlAttr("showsigndate", _outStream);
    }



    if (m_has_suggestedsigner_attr)
    {
        _outStream << " " << "suggestedsigner" << "=\"" << m_suggestedsigner_attr << "\"";
    }



    if (m_has_suggestedsigner2_attr)
    {
        _outStream << " " << "suggestedsigner2" << "=\"" << m_suggestedsigner2_attr << "\"";
    }



    if (m_has_suggestedsigneremail_attr)
    {
        _outStream << " " << "suggestedsigneremail" << "=\"" << m_suggestedsigneremail_attr << "\"";
    }



    if (m_has_signinginstructions_attr)
    {
        _outStream << " " << "signinginstructions" << "=\"" << m_signinginstructions_attr << "\"";
    }



    if (m_has_addlxml_attr)
    {
        _outStream << " " << "addlxml" << "=\"" << m_addlxml_attr << "\"";
    }



    if (m_has_sigprovurl_attr)
    {
        _outStream << " " << "sigprovurl" << "=\"" << m_sigprovurl_attr << "\"";
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_SignatureLine& CT_SignatureLine::default_instance()
{
    if (!CT_SignatureLine::default_instance_)
    {
        CT_SignatureLine::default_instance_ = new CT_SignatureLine();
    }
    return *CT_SignatureLine::default_instance_;
}

bool CT_SignatureLine::has_v_ext_attr() const
{
    return m_has_v_ext_attr;
}

void CT_SignatureLine::set_v_ext_attr(const ns_v::ST_Ext& _v_ext_attr)
{
    m_has_v_ext_attr = true;
    m_v_ext_attr = new ns_v::ST_Ext(_v_ext_attr);
}

const ns_v::ST_Ext& CT_SignatureLine::get_v_ext_attr() const
{
    if (m_v_ext_attr)
    {
        return *m_v_ext_attr;
    }
    return ns_v::ST_Ext::default_instance();
}

bool CT_SignatureLine::has_issignatureline_attr() const
{
    return m_has_issignatureline_attr;
}

void CT_SignatureLine::set_issignatureline_attr(const ns_s::ST_TrueFalse& _issignatureline_attr)
{
    m_has_issignatureline_attr = true;
    m_issignatureline_attr = new ns_s::ST_TrueFalse(_issignatureline_attr);
}

const ns_s::ST_TrueFalse& CT_SignatureLine::get_issignatureline_attr() const
{
    if (m_issignatureline_attr)
    {
        return *m_issignatureline_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
}

bool CT_SignatureLine::has_id_attr() const
{
    return m_has_id_attr;
}

void CT_SignatureLine::set_id_attr(const ns_s::ST_Guid& _id_attr)
{
    m_has_id_attr = true;
    m_id_attr = new ns_s::ST_Guid(_id_attr);
}

const ns_s::ST_Guid& CT_SignatureLine::get_id_attr() const
{
    if (m_id_attr)
    {
        return *m_id_attr;
    }
    return ns_s::ST_Guid::default_instance();
}

bool CT_SignatureLine::has_provid_attr() const
{
    return m_has_provid_attr;
}

void CT_SignatureLine::set_provid_attr(const ns_s::ST_Guid& _provid_attr)
{
    m_has_provid_attr = true;
    m_provid_attr = new ns_s::ST_Guid(_provid_attr);
}

const ns_s::ST_Guid& CT_SignatureLine::get_provid_attr() const
{
    if (m_provid_attr)
    {
        return *m_provid_attr;
    }
    return ns_s::ST_Guid::default_instance();
}

bool CT_SignatureLine::has_signinginstructionsset_attr() const
{
    return m_has_signinginstructionsset_attr;
}

void CT_SignatureLine::set_signinginstructionsset_attr(const ns_s::ST_TrueFalse& _signinginstructionsset_attr)
{
    m_has_signinginstructionsset_attr = true;
    m_signinginstructionsset_attr = new ns_s::ST_TrueFalse(_signinginstructionsset_attr);
}

const ns_s::ST_TrueFalse& CT_SignatureLine::get_signinginstructionsset_attr() const
{
    if (m_signinginstructionsset_attr)
    {
        return *m_signinginstructionsset_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
}

bool CT_SignatureLine::has_allowcomments_attr() const
{
    return m_has_allowcomments_attr;
}

void CT_SignatureLine::set_allowcomments_attr(const ns_s::ST_TrueFalse& _allowcomments_attr)
{
    m_has_allowcomments_attr = true;
    m_allowcomments_attr = new ns_s::ST_TrueFalse(_allowcomments_attr);
}

const ns_s::ST_TrueFalse& CT_SignatureLine::get_allowcomments_attr() const
{
    if (m_allowcomments_attr)
    {
        return *m_allowcomments_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
}

bool CT_SignatureLine::has_showsigndate_attr() const
{
    return m_has_showsigndate_attr;
}

void CT_SignatureLine::set_showsigndate_attr(const ns_s::ST_TrueFalse& _showsigndate_attr)
{
    m_has_showsigndate_attr = true;
    m_showsigndate_attr = new ns_s::ST_TrueFalse(_showsigndate_attr);
}

const ns_s::ST_TrueFalse& CT_SignatureLine::get_showsigndate_attr() const
{
    if (m_showsigndate_attr)
    {
        return *m_showsigndate_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
}

bool CT_SignatureLine::has_suggestedsigner_attr() const
{
    return m_has_suggestedsigner_attr;
}

void CT_SignatureLine::set_suggestedsigner_attr(const XSD::string_& _suggestedsigner_attr)
{
    m_has_suggestedsigner_attr = true;
    m_suggestedsigner_attr = _suggestedsigner_attr;
}

const XSD::string_& CT_SignatureLine::get_suggestedsigner_attr() const
{
    return m_suggestedsigner_attr;
}

bool CT_SignatureLine::has_suggestedsigner2_attr() const
{
    return m_has_suggestedsigner2_attr;
}

void CT_SignatureLine::set_suggestedsigner2_attr(const XSD::string_& _suggestedsigner2_attr)
{
    m_has_suggestedsigner2_attr = true;
    m_suggestedsigner2_attr = _suggestedsigner2_attr;
}

const XSD::string_& CT_SignatureLine::get_suggestedsigner2_attr() const
{
    return m_suggestedsigner2_attr;
}

bool CT_SignatureLine::has_suggestedsigneremail_attr() const
{
    return m_has_suggestedsigneremail_attr;
}

void CT_SignatureLine::set_suggestedsigneremail_attr(const XSD::string_& _suggestedsigneremail_attr)
{
    m_has_suggestedsigneremail_attr = true;
    m_suggestedsigneremail_attr = _suggestedsigneremail_attr;
}

const XSD::string_& CT_SignatureLine::get_suggestedsigneremail_attr() const
{
    return m_suggestedsigneremail_attr;
}

bool CT_SignatureLine::has_signinginstructions_attr() const
{
    return m_has_signinginstructions_attr;
}

void CT_SignatureLine::set_signinginstructions_attr(const XSD::string_& _signinginstructions_attr)
{
    m_has_signinginstructions_attr = true;
    m_signinginstructions_attr = _signinginstructions_attr;
}

const XSD::string_& CT_SignatureLine::get_signinginstructions_attr() const
{
    return m_signinginstructions_attr;
}

bool CT_SignatureLine::has_addlxml_attr() const
{
    return m_has_addlxml_attr;
}

void CT_SignatureLine::set_addlxml_attr(const XSD::string_& _addlxml_attr)
{
    m_has_addlxml_attr = true;
    m_addlxml_attr = _addlxml_attr;
}

const XSD::string_& CT_SignatureLine::get_addlxml_attr() const
{
    return m_addlxml_attr;
}

bool CT_SignatureLine::has_sigprovurl_attr() const
{
    return m_has_sigprovurl_attr;
}

void CT_SignatureLine::set_sigprovurl_attr(const XSD::string_& _sigprovurl_attr)
{
    m_has_sigprovurl_attr = true;
    m_sigprovurl_attr = _sigprovurl_attr;
}

const XSD::string_& CT_SignatureLine::get_sigprovurl_attr() const
{
    return m_sigprovurl_attr;
}

CT_SignatureLine* CT_SignatureLine::default_instance_ = NULL;

// CT_ShapeLayout
CT_ShapeLayout::CT_ShapeLayout()
    :m_has_idmap(false),
     m_idmap(NULL),
     m_has_regrouptable(false),
     m_regrouptable(NULL),
     m_has_rules(false),
     m_rules(NULL),
     m_has_v_ext_attr(false),
     m_v_ext_attr(NULL)
{
}
CT_ShapeLayout::~CT_ShapeLayout()
{
    clear();
}
bool CT_ShapeLayout::has_idmap() const
{
    return m_has_idmap;
}

CT_IdMap* CT_ShapeLayout::mutable_idmap()
{
    m_has_idmap = true;
    if (!m_idmap)
    {
        m_idmap = new CT_IdMap();
    }
    return m_idmap;
}

const CT_IdMap& CT_ShapeLayout::get_idmap() const
{
    if (m_idmap)
    {
        return *m_idmap;
    }
    return CT_IdMap::default_instance();
}

bool CT_ShapeLayout::has_regrouptable() const
{
    return m_has_regrouptable;
}

CT_RegroupTable* CT_ShapeLayout::mutable_regrouptable()
{
    m_has_regrouptable = true;
    if (!m_regrouptable)
    {
        m_regrouptable = new CT_RegroupTable();
    }
    return m_regrouptable;
}

const CT_RegroupTable& CT_ShapeLayout::get_regrouptable() const
{
    if (m_regrouptable)
    {
        return *m_regrouptable;
    }
    return CT_RegroupTable::default_instance();
}

bool CT_ShapeLayout::has_rules() const
{
    return m_has_rules;
}

CT_Rules* CT_ShapeLayout::mutable_rules()
{
    m_has_rules = true;
    if (!m_rules)
    {
        m_rules = new CT_Rules();
    }
    return m_rules;
}

const CT_Rules& CT_ShapeLayout::get_rules() const
{
    if (m_rules)
    {
        return *m_rules;
    }
    return CT_Rules::default_instance();
}

void CT_ShapeLayout::clear()
{
    m_has_v_ext_attr = false;

    if (m_v_ext_attr)
    {
        delete m_v_ext_attr;
        m_v_ext_attr = NULL;
    }


    m_has_idmap = false;

    if (m_idmap)
    {
        delete m_idmap;
        m_idmap = NULL;
    }


    m_has_regrouptable = false;

    if (m_regrouptable)
    {
        delete m_regrouptable;
        m_regrouptable = NULL;
    }


    m_has_rules = false;

    if (m_rules)
    {
        delete m_rules;
        m_rules = NULL;
    }

}

void CT_ShapeLayout::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_v_ext_attr)
    {
        m_v_ext_attr->toXmlAttr("v:ext", _outStream);
    }

    _outStream << ">";


    if (m_has_idmap)
    {
        m_idmap->toXmlElem("o:idmap", "", _outStream);
    }


    if (m_has_regrouptable)
    {
        m_regrouptable->toXmlElem("o:regrouptable", "", _outStream);
    }


    if (m_has_rules)
    {
        m_rules->toXmlElem("o:rules", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_ShapeLayout& CT_ShapeLayout::default_instance()
{
    if (!CT_ShapeLayout::default_instance_)
    {
        CT_ShapeLayout::default_instance_ = new CT_ShapeLayout();
    }
    return *CT_ShapeLayout::default_instance_;
}

bool CT_ShapeLayout::has_v_ext_attr() const
{
    return m_has_v_ext_attr;
}

void CT_ShapeLayout::set_v_ext_attr(const ns_v::ST_Ext& _v_ext_attr)
{
    m_has_v_ext_attr = true;
    m_v_ext_attr = new ns_v::ST_Ext(_v_ext_attr);
}

const ns_v::ST_Ext& CT_ShapeLayout::get_v_ext_attr() const
{
    if (m_v_ext_attr)
    {
        return *m_v_ext_attr;
    }
    return ns_v::ST_Ext::default_instance();
}

CT_ShapeLayout* CT_ShapeLayout::default_instance_ = NULL;

// CT_IdMap
CT_IdMap::CT_IdMap()
    :m_has_v_ext_attr(false),
     m_v_ext_attr(NULL),
     m_has_data_attr(false),
     m_data_attr("")
{
}
CT_IdMap::~CT_IdMap()
{
    clear();
}
void CT_IdMap::clear()
{
    m_has_v_ext_attr = false;

    if (m_v_ext_attr)
    {
        delete m_v_ext_attr;
        m_v_ext_attr = NULL;
    }


    m_has_data_attr = false;
    m_data_attr.clear();
}

void CT_IdMap::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_v_ext_attr)
    {
        m_v_ext_attr->toXmlAttr("v:ext", _outStream);
    }



    if (m_has_data_attr)
    {
        _outStream << " " << "data" << "=\"" << m_data_attr << "\"";
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_IdMap& CT_IdMap::default_instance()
{
    if (!CT_IdMap::default_instance_)
    {
        CT_IdMap::default_instance_ = new CT_IdMap();
    }
    return *CT_IdMap::default_instance_;
}

bool CT_IdMap::has_v_ext_attr() const
{
    return m_has_v_ext_attr;
}

void CT_IdMap::set_v_ext_attr(const ns_v::ST_Ext& _v_ext_attr)
{
    m_has_v_ext_attr = true;
    m_v_ext_attr = new ns_v::ST_Ext(_v_ext_attr);
}

const ns_v::ST_Ext& CT_IdMap::get_v_ext_attr() const
{
    if (m_v_ext_attr)
    {
        return *m_v_ext_attr;
    }
    return ns_v::ST_Ext::default_instance();
}

bool CT_IdMap::has_data_attr() const
{
    return m_has_data_attr;
}

void CT_IdMap::set_data_attr(const XSD::string_& _data_attr)
{
    m_has_data_attr = true;
    m_data_attr = _data_attr;
}

const XSD::string_& CT_IdMap::get_data_attr() const
{
    return m_data_attr;
}

CT_IdMap* CT_IdMap::default_instance_ = NULL;

// CT_RegroupTable
CT_RegroupTable::CT_RegroupTable()
    :m_has_v_ext_attr(false),
     m_v_ext_attr(NULL)
{
}
CT_RegroupTable::~CT_RegroupTable()
{
    clear();
}
CT_Entry* CT_RegroupTable::add_entry()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Entry* pNewChild = pChildGroup->mutable_entry();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

void CT_RegroupTable::clear()
{
    m_has_v_ext_attr = false;

    if (m_v_ext_attr)
    {
        delete m_v_ext_attr;
        m_v_ext_attr = NULL;
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

void CT_RegroupTable::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_v_ext_attr)
    {
        m_v_ext_attr->toXmlAttr("v:ext", _outStream);
    }

    _outStream << ">";

    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_entry())
            {
                (*iter)->get_entry().toXmlElem("o:entry", "", _outStream);
            }


        }
    }

    _outStream << "</" << _elemName << ">";
}

const CT_RegroupTable& CT_RegroupTable::default_instance()
{
    if (!CT_RegroupTable::default_instance_)
    {
        CT_RegroupTable::default_instance_ = new CT_RegroupTable();
    }
    return *CT_RegroupTable::default_instance_;
}

bool CT_RegroupTable::has_v_ext_attr() const
{
    return m_has_v_ext_attr;
}

void CT_RegroupTable::set_v_ext_attr(const ns_v::ST_Ext& _v_ext_attr)
{
    m_has_v_ext_attr = true;
    m_v_ext_attr = new ns_v::ST_Ext(_v_ext_attr);
}

const ns_v::ST_Ext& CT_RegroupTable::get_v_ext_attr() const
{
    if (m_v_ext_attr)
    {
        return *m_v_ext_attr;
    }
    return ns_v::ST_Ext::default_instance();
}


// CT_RegroupTable::ChildGroup_1
CT_RegroupTable::ChildGroup_1::ChildGroup_1()
    :m_has_entry(false),
     m_entry(NULL)
{
}
bool CT_RegroupTable::ChildGroup_1::has_entry() const
{
    return m_has_entry;
}

CT_Entry* CT_RegroupTable::ChildGroup_1::mutable_entry()
{

    m_has_entry = true;
    if (!m_entry)
    {
        m_entry = new CT_Entry();
    }
    return m_entry;
}

const CT_Entry& CT_RegroupTable::ChildGroup_1::get_entry() const
{
    if (m_entry)
    {
        return *m_entry;
    }
    return CT_Entry::default_instance();
}

CT_RegroupTable* CT_RegroupTable::default_instance_ = NULL;

// CT_Entry
CT_Entry::CT_Entry()
    :m_has_new_attr(false),
     m_new_attr(0),
     m_has_old_attr(false),
     m_old_attr(0)
{
}
CT_Entry::~CT_Entry()
{
    clear();
}
void CT_Entry::clear()
{
    m_has_new_attr = false;
    m_new_attr = 0;

    m_has_old_attr = false;
    m_old_attr = 0;
}

void CT_Entry::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_new_attr)
    {
        _outStream << " " << "new" << "=\"" << m_new_attr << "\"";
    }



    if (m_has_old_attr)
    {
        _outStream << " " << "old" << "=\"" << m_old_attr << "\"";
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_Entry& CT_Entry::default_instance()
{
    if (!CT_Entry::default_instance_)
    {
        CT_Entry::default_instance_ = new CT_Entry();
    }
    return *CT_Entry::default_instance_;
}

bool CT_Entry::has_new_attr() const
{
    return m_has_new_attr;
}

void CT_Entry::set_new_attr(const XSD::int_& _new_attr)
{
    m_has_new_attr = true;
    m_new_attr = _new_attr;
}

const XSD::int_& CT_Entry::get_new_attr() const
{
    return m_new_attr;
}

bool CT_Entry::has_old_attr() const
{
    return m_has_old_attr;
}

void CT_Entry::set_old_attr(const XSD::int_& _old_attr)
{
    m_has_old_attr = true;
    m_old_attr = _old_attr;
}

const XSD::int_& CT_Entry::get_old_attr() const
{
    return m_old_attr;
}

CT_Entry* CT_Entry::default_instance_ = NULL;

// CT_Rules
CT_Rules::CT_Rules()
    :m_has_v_ext_attr(false),
     m_v_ext_attr(NULL)
{
}
CT_Rules::~CT_Rules()
{
    clear();
}
CT_R* CT_Rules::add_r()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_R* pNewChild = pChildGroup->mutable_r();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

void CT_Rules::clear()
{
    m_has_v_ext_attr = false;

    if (m_v_ext_attr)
    {
        delete m_v_ext_attr;
        m_v_ext_attr = NULL;
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

void CT_Rules::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_v_ext_attr)
    {
        m_v_ext_attr->toXmlAttr("v:ext", _outStream);
    }

    _outStream << ">";

    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_r())
            {
                (*iter)->get_r().toXmlElem("o:r", "", _outStream);
            }


        }
    }

    _outStream << "</" << _elemName << ">";
}

const CT_Rules& CT_Rules::default_instance()
{
    if (!CT_Rules::default_instance_)
    {
        CT_Rules::default_instance_ = new CT_Rules();
    }
    return *CT_Rules::default_instance_;
}

bool CT_Rules::has_v_ext_attr() const
{
    return m_has_v_ext_attr;
}

void CT_Rules::set_v_ext_attr(const ns_v::ST_Ext& _v_ext_attr)
{
    m_has_v_ext_attr = true;
    m_v_ext_attr = new ns_v::ST_Ext(_v_ext_attr);
}

const ns_v::ST_Ext& CT_Rules::get_v_ext_attr() const
{
    if (m_v_ext_attr)
    {
        return *m_v_ext_attr;
    }
    return ns_v::ST_Ext::default_instance();
}


// CT_Rules::ChildGroup_1
CT_Rules::ChildGroup_1::ChildGroup_1()
    :m_has_r(false),
     m_r(NULL)
{
}
bool CT_Rules::ChildGroup_1::has_r() const
{
    return m_has_r;
}

CT_R* CT_Rules::ChildGroup_1::mutable_r()
{

    m_has_r = true;
    if (!m_r)
    {
        m_r = new CT_R();
    }
    return m_r;
}

const CT_R& CT_Rules::ChildGroup_1::get_r() const
{
    if (m_r)
    {
        return *m_r;
    }
    return CT_R::default_instance();
}

CT_Rules* CT_Rules::default_instance_ = NULL;

// CT_R
CT_R::CT_R()
    :m_has_id_attr(false),
     m_id_attr(""),
     m_has_type_attr(false),
     m_type_attr(NULL),
     m_has_how_attr(false),
     m_how_attr(NULL),
     m_has_idref_attr(false),
     m_idref_attr("")
{
}
CT_R::~CT_R()
{
    clear();
}
CT_Proxy* CT_R::add_proxy()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Proxy* pNewChild = pChildGroup->mutable_proxy();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

void CT_R::clear()
{
    m_has_id_attr = false;
    m_id_attr.clear();

    m_has_type_attr = false;

    if (m_type_attr)
    {
        delete m_type_attr;
        m_type_attr = NULL;
    }


    m_has_how_attr = false;

    if (m_how_attr)
    {
        delete m_how_attr;
        m_how_attr = NULL;
    }


    m_has_idref_attr = false;
    m_idref_attr.clear();

    {
        vector<ChildGroup_1*>::iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_1.clear();
    }
}

void CT_R::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    assert(m_has_id_attr);
    if (m_has_id_attr)
    {
        _outStream << " " << "id" << "=\"" << m_id_attr << "\"";
    }



    if (m_has_type_attr)
    {
        m_type_attr->toXmlAttr("type", _outStream);
    }



    if (m_has_how_attr)
    {
        m_how_attr->toXmlAttr("how", _outStream);
    }



    if (m_has_idref_attr)
    {
        _outStream << " " << "idref" << "=\"" << m_idref_attr << "\"";
    }

    _outStream << ">";

    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_proxy())
            {
                (*iter)->get_proxy().toXmlElem("o:proxy", "", _outStream);
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

bool CT_R::has_id_attr() const
{
    return m_has_id_attr;
}

void CT_R::set_id_attr(const XSD::string_& _id_attr)
{
    m_has_id_attr = true;
    m_id_attr = _id_attr;
}

const XSD::string_& CT_R::get_id_attr() const
{
    return m_id_attr;
}

bool CT_R::has_type_attr() const
{
    return m_has_type_attr;
}

void CT_R::set_type_attr(const ST_RType& _type_attr)
{
    m_has_type_attr = true;
    m_type_attr = new ST_RType(_type_attr);
}

const ST_RType& CT_R::get_type_attr() const
{
    if (m_type_attr)
    {
        return *m_type_attr;
    }
    return ST_RType::default_instance();
}

bool CT_R::has_how_attr() const
{
    return m_has_how_attr;
}

void CT_R::set_how_attr(const ST_How& _how_attr)
{
    m_has_how_attr = true;
    m_how_attr = new ST_How(_how_attr);
}

const ST_How& CT_R::get_how_attr() const
{
    if (m_how_attr)
    {
        return *m_how_attr;
    }
    return ST_How::default_instance();
}

bool CT_R::has_idref_attr() const
{
    return m_has_idref_attr;
}

void CT_R::set_idref_attr(const XSD::string_& _idref_attr)
{
    m_has_idref_attr = true;
    m_idref_attr = _idref_attr;
}

const XSD::string_& CT_R::get_idref_attr() const
{
    return m_idref_attr;
}


// CT_R::ChildGroup_1
CT_R::ChildGroup_1::ChildGroup_1()
    :m_has_proxy(false),
     m_proxy(NULL)
{
}
bool CT_R::ChildGroup_1::has_proxy() const
{
    return m_has_proxy;
}

CT_Proxy* CT_R::ChildGroup_1::mutable_proxy()
{

    m_has_proxy = true;
    if (!m_proxy)
    {
        m_proxy = new CT_Proxy();
    }
    return m_proxy;
}

const CT_Proxy& CT_R::ChildGroup_1::get_proxy() const
{
    if (m_proxy)
    {
        return *m_proxy;
    }
    return CT_Proxy::default_instance();
}

CT_R* CT_R::default_instance_ = NULL;

// CT_Proxy
CT_Proxy::CT_Proxy()
    :m_has_start_attr(false),
     m_start_attr(NULL),
     m_has_end_attr(false),
     m_end_attr(NULL),
     m_has_idref_attr(false),
     m_idref_attr(""),
     m_has_connectloc_attr(false),
     m_connectloc_attr(0)
{
}
CT_Proxy::~CT_Proxy()
{
    clear();
}
void CT_Proxy::clear()
{
    m_has_start_attr = false;

    if (m_start_attr)
    {
        delete m_start_attr;
        m_start_attr = NULL;
    }


    m_has_end_attr = false;

    if (m_end_attr)
    {
        delete m_end_attr;
        m_end_attr = NULL;
    }


    m_has_idref_attr = false;
    m_idref_attr.clear();

    m_has_connectloc_attr = false;
    m_connectloc_attr = 0;
}

void CT_Proxy::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_start_attr)
    {
        m_start_attr->toXmlAttr("start", _outStream);
    }



    if (m_has_end_attr)
    {
        m_end_attr->toXmlAttr("end", _outStream);
    }



    if (m_has_idref_attr)
    {
        _outStream << " " << "idref" << "=\"" << m_idref_attr << "\"";
    }



    if (m_has_connectloc_attr)
    {
        _outStream << " " << "connectloc" << "=\"" << m_connectloc_attr << "\"";
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_Proxy& CT_Proxy::default_instance()
{
    if (!CT_Proxy::default_instance_)
    {
        CT_Proxy::default_instance_ = new CT_Proxy();
    }
    return *CT_Proxy::default_instance_;
}

bool CT_Proxy::has_start_attr() const
{
    return m_has_start_attr;
}

void CT_Proxy::set_start_attr(const ns_s::ST_TrueFalseBlank& _start_attr)
{
    m_has_start_attr = true;
    m_start_attr = new ns_s::ST_TrueFalseBlank(_start_attr);
}

const ns_s::ST_TrueFalseBlank& CT_Proxy::get_start_attr() const
{
    if (m_start_attr)
    {
        return *m_start_attr;
    }
    return ns_s::ST_TrueFalseBlank::default_instance();
}

bool CT_Proxy::has_end_attr() const
{
    return m_has_end_attr;
}

void CT_Proxy::set_end_attr(const ns_s::ST_TrueFalseBlank& _end_attr)
{
    m_has_end_attr = true;
    m_end_attr = new ns_s::ST_TrueFalseBlank(_end_attr);
}

const ns_s::ST_TrueFalseBlank& CT_Proxy::get_end_attr() const
{
    if (m_end_attr)
    {
        return *m_end_attr;
    }
    return ns_s::ST_TrueFalseBlank::default_instance();
}

bool CT_Proxy::has_idref_attr() const
{
    return m_has_idref_attr;
}

void CT_Proxy::set_idref_attr(const XSD::string_& _idref_attr)
{
    m_has_idref_attr = true;
    m_idref_attr = _idref_attr;
}

const XSD::string_& CT_Proxy::get_idref_attr() const
{
    return m_idref_attr;
}

bool CT_Proxy::has_connectloc_attr() const
{
    return m_has_connectloc_attr;
}

void CT_Proxy::set_connectloc_attr(const XSD::int_& _connectloc_attr)
{
    m_has_connectloc_attr = true;
    m_connectloc_attr = _connectloc_attr;
}

const XSD::int_& CT_Proxy::get_connectloc_attr() const
{
    return m_connectloc_attr;
}

CT_Proxy* CT_Proxy::default_instance_ = NULL;

// CT_Diagram
CT_Diagram::CT_Diagram()
    :m_has_relationtable(false),
     m_relationtable(NULL),
     m_has_v_ext_attr(false),
     m_v_ext_attr(NULL),
     m_has_dgmstyle_attr(false),
     m_dgmstyle_attr(0),
     m_has_autoformat_attr(false),
     m_autoformat_attr(NULL),
     m_has_reverse_attr(false),
     m_reverse_attr(NULL),
     m_has_autolayout_attr(false),
     m_autolayout_attr(NULL),
     m_has_dgmscalex_attr(false),
     m_dgmscalex_attr(0),
     m_has_dgmscaley_attr(false),
     m_dgmscaley_attr(0),
     m_has_dgmfontsize_attr(false),
     m_dgmfontsize_attr(0),
     m_has_constrainbounds_attr(false),
     m_constrainbounds_attr(""),
     m_has_dgmbasetextscale_attr(false),
     m_dgmbasetextscale_attr(0)
{
}
CT_Diagram::~CT_Diagram()
{
    clear();
}
bool CT_Diagram::has_relationtable() const
{
    return m_has_relationtable;
}

CT_RelationTable* CT_Diagram::mutable_relationtable()
{
    m_has_relationtable = true;
    if (!m_relationtable)
    {
        m_relationtable = new CT_RelationTable();
    }
    return m_relationtable;
}

const CT_RelationTable& CT_Diagram::get_relationtable() const
{
    if (m_relationtable)
    {
        return *m_relationtable;
    }
    return CT_RelationTable::default_instance();
}

void CT_Diagram::clear()
{
    m_has_v_ext_attr = false;

    if (m_v_ext_attr)
    {
        delete m_v_ext_attr;
        m_v_ext_attr = NULL;
    }


    m_has_dgmstyle_attr = false;
    m_dgmstyle_attr = 0;

    m_has_autoformat_attr = false;

    if (m_autoformat_attr)
    {
        delete m_autoformat_attr;
        m_autoformat_attr = NULL;
    }


    m_has_reverse_attr = false;

    if (m_reverse_attr)
    {
        delete m_reverse_attr;
        m_reverse_attr = NULL;
    }


    m_has_autolayout_attr = false;

    if (m_autolayout_attr)
    {
        delete m_autolayout_attr;
        m_autolayout_attr = NULL;
    }


    m_has_dgmscalex_attr = false;
    m_dgmscalex_attr = 0;

    m_has_dgmscaley_attr = false;
    m_dgmscaley_attr = 0;

    m_has_dgmfontsize_attr = false;
    m_dgmfontsize_attr = 0;

    m_has_constrainbounds_attr = false;
    m_constrainbounds_attr.clear();

    m_has_dgmbasetextscale_attr = false;
    m_dgmbasetextscale_attr = 0;

    m_has_relationtable = false;

    if (m_relationtable)
    {
        delete m_relationtable;
        m_relationtable = NULL;
    }

}

void CT_Diagram::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_v_ext_attr)
    {
        m_v_ext_attr->toXmlAttr("v:ext", _outStream);
    }



    if (m_has_dgmstyle_attr)
    {
        _outStream << " " << "dgmstyle" << "=\"" << m_dgmstyle_attr << "\"";
    }



    if (m_has_autoformat_attr)
    {
        m_autoformat_attr->toXmlAttr("autoformat", _outStream);
    }



    if (m_has_reverse_attr)
    {
        m_reverse_attr->toXmlAttr("reverse", _outStream);
    }



    if (m_has_autolayout_attr)
    {
        m_autolayout_attr->toXmlAttr("autolayout", _outStream);
    }



    if (m_has_dgmscalex_attr)
    {
        _outStream << " " << "dgmscalex" << "=\"" << m_dgmscalex_attr << "\"";
    }



    if (m_has_dgmscaley_attr)
    {
        _outStream << " " << "dgmscaley" << "=\"" << m_dgmscaley_attr << "\"";
    }



    if (m_has_dgmfontsize_attr)
    {
        _outStream << " " << "dgmfontsize" << "=\"" << m_dgmfontsize_attr << "\"";
    }



    if (m_has_constrainbounds_attr)
    {
        _outStream << " " << "constrainbounds" << "=\"" << m_constrainbounds_attr << "\"";
    }



    if (m_has_dgmbasetextscale_attr)
    {
        _outStream << " " << "dgmbasetextscale" << "=\"" << m_dgmbasetextscale_attr << "\"";
    }

    _outStream << ">";


    if (m_has_relationtable)
    {
        m_relationtable->toXmlElem("o:relationtable", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_Diagram& CT_Diagram::default_instance()
{
    if (!CT_Diagram::default_instance_)
    {
        CT_Diagram::default_instance_ = new CT_Diagram();
    }
    return *CT_Diagram::default_instance_;
}

bool CT_Diagram::has_v_ext_attr() const
{
    return m_has_v_ext_attr;
}

void CT_Diagram::set_v_ext_attr(const ns_v::ST_Ext& _v_ext_attr)
{
    m_has_v_ext_attr = true;
    m_v_ext_attr = new ns_v::ST_Ext(_v_ext_attr);
}

const ns_v::ST_Ext& CT_Diagram::get_v_ext_attr() const
{
    if (m_v_ext_attr)
    {
        return *m_v_ext_attr;
    }
    return ns_v::ST_Ext::default_instance();
}

bool CT_Diagram::has_dgmstyle_attr() const
{
    return m_has_dgmstyle_attr;
}

void CT_Diagram::set_dgmstyle_attr(const XSD::integer_& _dgmstyle_attr)
{
    m_has_dgmstyle_attr = true;
    m_dgmstyle_attr = _dgmstyle_attr;
}

const XSD::integer_& CT_Diagram::get_dgmstyle_attr() const
{
    return m_dgmstyle_attr;
}

bool CT_Diagram::has_autoformat_attr() const
{
    return m_has_autoformat_attr;
}

void CT_Diagram::set_autoformat_attr(const ns_s::ST_TrueFalse& _autoformat_attr)
{
    m_has_autoformat_attr = true;
    m_autoformat_attr = new ns_s::ST_TrueFalse(_autoformat_attr);
}

const ns_s::ST_TrueFalse& CT_Diagram::get_autoformat_attr() const
{
    if (m_autoformat_attr)
    {
        return *m_autoformat_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
}

bool CT_Diagram::has_reverse_attr() const
{
    return m_has_reverse_attr;
}

void CT_Diagram::set_reverse_attr(const ns_s::ST_TrueFalse& _reverse_attr)
{
    m_has_reverse_attr = true;
    m_reverse_attr = new ns_s::ST_TrueFalse(_reverse_attr);
}

const ns_s::ST_TrueFalse& CT_Diagram::get_reverse_attr() const
{
    if (m_reverse_attr)
    {
        return *m_reverse_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
}

bool CT_Diagram::has_autolayout_attr() const
{
    return m_has_autolayout_attr;
}

void CT_Diagram::set_autolayout_attr(const ns_s::ST_TrueFalse& _autolayout_attr)
{
    m_has_autolayout_attr = true;
    m_autolayout_attr = new ns_s::ST_TrueFalse(_autolayout_attr);
}

const ns_s::ST_TrueFalse& CT_Diagram::get_autolayout_attr() const
{
    if (m_autolayout_attr)
    {
        return *m_autolayout_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
}

bool CT_Diagram::has_dgmscalex_attr() const
{
    return m_has_dgmscalex_attr;
}

void CT_Diagram::set_dgmscalex_attr(const XSD::integer_& _dgmscalex_attr)
{
    m_has_dgmscalex_attr = true;
    m_dgmscalex_attr = _dgmscalex_attr;
}

const XSD::integer_& CT_Diagram::get_dgmscalex_attr() const
{
    return m_dgmscalex_attr;
}

bool CT_Diagram::has_dgmscaley_attr() const
{
    return m_has_dgmscaley_attr;
}

void CT_Diagram::set_dgmscaley_attr(const XSD::integer_& _dgmscaley_attr)
{
    m_has_dgmscaley_attr = true;
    m_dgmscaley_attr = _dgmscaley_attr;
}

const XSD::integer_& CT_Diagram::get_dgmscaley_attr() const
{
    return m_dgmscaley_attr;
}

bool CT_Diagram::has_dgmfontsize_attr() const
{
    return m_has_dgmfontsize_attr;
}

void CT_Diagram::set_dgmfontsize_attr(const XSD::integer_& _dgmfontsize_attr)
{
    m_has_dgmfontsize_attr = true;
    m_dgmfontsize_attr = _dgmfontsize_attr;
}

const XSD::integer_& CT_Diagram::get_dgmfontsize_attr() const
{
    return m_dgmfontsize_attr;
}

bool CT_Diagram::has_constrainbounds_attr() const
{
    return m_has_constrainbounds_attr;
}

void CT_Diagram::set_constrainbounds_attr(const XSD::string_& _constrainbounds_attr)
{
    m_has_constrainbounds_attr = true;
    m_constrainbounds_attr = _constrainbounds_attr;
}

const XSD::string_& CT_Diagram::get_constrainbounds_attr() const
{
    return m_constrainbounds_attr;
}

bool CT_Diagram::has_dgmbasetextscale_attr() const
{
    return m_has_dgmbasetextscale_attr;
}

void CT_Diagram::set_dgmbasetextscale_attr(const XSD::integer_& _dgmbasetextscale_attr)
{
    m_has_dgmbasetextscale_attr = true;
    m_dgmbasetextscale_attr = _dgmbasetextscale_attr;
}

const XSD::integer_& CT_Diagram::get_dgmbasetextscale_attr() const
{
    return m_dgmbasetextscale_attr;
}

CT_Diagram* CT_Diagram::default_instance_ = NULL;

// CT_EquationXml
CT_EquationXml::CT_EquationXml()
    :m_has__any(false),
     m__any(NULL),
     m_has_contentType_attr(false),
     m_contentType_attr(NULL)
{
}
CT_EquationXml::~CT_EquationXml()
{
    clear();
}
void CT_EquationXml::clear()
{
    m_has_contentType_attr = false;

    if (m_contentType_attr)
    {
        delete m_contentType_attr;
        m_contentType_attr = NULL;
    }

}

void CT_EquationXml::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_contentType_attr)
    {
        m_contentType_attr->toXmlAttr("contentType", _outStream);
    }

    _outStream << ">";

    assert(m_has__any);


    if (m_has__any)
    {
        m__any->toXml(_outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_EquationXml& CT_EquationXml::default_instance()
{
    if (!CT_EquationXml::default_instance_)
    {
        CT_EquationXml::default_instance_ = new CT_EquationXml();
    }
    return *CT_EquationXml::default_instance_;
}

bool CT_EquationXml::has_contentType_attr() const
{
    return m_has_contentType_attr;
}

void CT_EquationXml::set_contentType_attr(const ST_AlternateMathContentType& _contentType_attr)
{
    m_has_contentType_attr = true;
    m_contentType_attr = new ST_AlternateMathContentType(_contentType_attr);
}

const ST_AlternateMathContentType& CT_EquationXml::get_contentType_attr() const
{
    if (m_contentType_attr)
    {
        return *m_contentType_attr;
    }
    return ST_AlternateMathContentType::default_instance();
}

CT_EquationXml* CT_EquationXml::default_instance_ = NULL;

// CT_RelationTable
CT_RelationTable::CT_RelationTable()
    :m_has_v_ext_attr(false),
     m_v_ext_attr(NULL)
{
}
CT_RelationTable::~CT_RelationTable()
{
    clear();
}
CT_Relation* CT_RelationTable::add_rel()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Relation* pNewChild = pChildGroup->mutable_rel();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

void CT_RelationTable::clear()
{
    m_has_v_ext_attr = false;

    if (m_v_ext_attr)
    {
        delete m_v_ext_attr;
        m_v_ext_attr = NULL;
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

void CT_RelationTable::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_v_ext_attr)
    {
        m_v_ext_attr->toXmlAttr("v:ext", _outStream);
    }

    _outStream << ">";

    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_rel())
            {
                (*iter)->get_rel().toXmlElem("o:rel", "", _outStream);
            }


        }
    }

    _outStream << "</" << _elemName << ">";
}

const CT_RelationTable& CT_RelationTable::default_instance()
{
    if (!CT_RelationTable::default_instance_)
    {
        CT_RelationTable::default_instance_ = new CT_RelationTable();
    }
    return *CT_RelationTable::default_instance_;
}

bool CT_RelationTable::has_v_ext_attr() const
{
    return m_has_v_ext_attr;
}

void CT_RelationTable::set_v_ext_attr(const ns_v::ST_Ext& _v_ext_attr)
{
    m_has_v_ext_attr = true;
    m_v_ext_attr = new ns_v::ST_Ext(_v_ext_attr);
}

const ns_v::ST_Ext& CT_RelationTable::get_v_ext_attr() const
{
    if (m_v_ext_attr)
    {
        return *m_v_ext_attr;
    }
    return ns_v::ST_Ext::default_instance();
}


// CT_RelationTable::ChildGroup_1
CT_RelationTable::ChildGroup_1::ChildGroup_1()
    :m_has_rel(false),
     m_rel(NULL)
{
}
bool CT_RelationTable::ChildGroup_1::has_rel() const
{
    return m_has_rel;
}

CT_Relation* CT_RelationTable::ChildGroup_1::mutable_rel()
{

    m_has_rel = true;
    if (!m_rel)
    {
        m_rel = new CT_Relation();
    }
    return m_rel;
}

const CT_Relation& CT_RelationTable::ChildGroup_1::get_rel() const
{
    if (m_rel)
    {
        return *m_rel;
    }
    return CT_Relation::default_instance();
}

CT_RelationTable* CT_RelationTable::default_instance_ = NULL;

// CT_Relation
CT_Relation::CT_Relation()
    :m_has_v_ext_attr(false),
     m_v_ext_attr(NULL),
     m_has_idsrc_attr(false),
     m_idsrc_attr(""),
     m_has_iddest_attr(false),
     m_iddest_attr(""),
     m_has_idcntr_attr(false),
     m_idcntr_attr("")
{
}
CT_Relation::~CT_Relation()
{
    clear();
}
void CT_Relation::clear()
{
    m_has_v_ext_attr = false;

    if (m_v_ext_attr)
    {
        delete m_v_ext_attr;
        m_v_ext_attr = NULL;
    }


    m_has_idsrc_attr = false;
    m_idsrc_attr.clear();

    m_has_iddest_attr = false;
    m_iddest_attr.clear();

    m_has_idcntr_attr = false;
    m_idcntr_attr.clear();
}

void CT_Relation::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_v_ext_attr)
    {
        m_v_ext_attr->toXmlAttr("v:ext", _outStream);
    }



    if (m_has_idsrc_attr)
    {
        _outStream << " " << "idsrc" << "=\"" << m_idsrc_attr << "\"";
    }



    if (m_has_iddest_attr)
    {
        _outStream << " " << "iddest" << "=\"" << m_iddest_attr << "\"";
    }



    if (m_has_idcntr_attr)
    {
        _outStream << " " << "idcntr" << "=\"" << m_idcntr_attr << "\"";
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_Relation& CT_Relation::default_instance()
{
    if (!CT_Relation::default_instance_)
    {
        CT_Relation::default_instance_ = new CT_Relation();
    }
    return *CT_Relation::default_instance_;
}

bool CT_Relation::has_v_ext_attr() const
{
    return m_has_v_ext_attr;
}

void CT_Relation::set_v_ext_attr(const ns_v::ST_Ext& _v_ext_attr)
{
    m_has_v_ext_attr = true;
    m_v_ext_attr = new ns_v::ST_Ext(_v_ext_attr);
}

const ns_v::ST_Ext& CT_Relation::get_v_ext_attr() const
{
    if (m_v_ext_attr)
    {
        return *m_v_ext_attr;
    }
    return ns_v::ST_Ext::default_instance();
}

bool CT_Relation::has_idsrc_attr() const
{
    return m_has_idsrc_attr;
}

void CT_Relation::set_idsrc_attr(const XSD::string_& _idsrc_attr)
{
    m_has_idsrc_attr = true;
    m_idsrc_attr = _idsrc_attr;
}

const XSD::string_& CT_Relation::get_idsrc_attr() const
{
    return m_idsrc_attr;
}

bool CT_Relation::has_iddest_attr() const
{
    return m_has_iddest_attr;
}

void CT_Relation::set_iddest_attr(const XSD::string_& _iddest_attr)
{
    m_has_iddest_attr = true;
    m_iddest_attr = _iddest_attr;
}

const XSD::string_& CT_Relation::get_iddest_attr() const
{
    return m_iddest_attr;
}

bool CT_Relation::has_idcntr_attr() const
{
    return m_has_idcntr_attr;
}

void CT_Relation::set_idcntr_attr(const XSD::string_& _idcntr_attr)
{
    m_has_idcntr_attr = true;
    m_idcntr_attr = _idcntr_attr;
}

const XSD::string_& CT_Relation::get_idcntr_attr() const
{
    return m_idcntr_attr;
}

CT_Relation* CT_Relation::default_instance_ = NULL;

// CT_ColorMru
CT_ColorMru::CT_ColorMru()
    :m_has_v_ext_attr(false),
     m_v_ext_attr(NULL),
     m_has_colors_attr(false),
     m_colors_attr("")
{
}
CT_ColorMru::~CT_ColorMru()
{
    clear();
}
void CT_ColorMru::clear()
{
    m_has_v_ext_attr = false;

    if (m_v_ext_attr)
    {
        delete m_v_ext_attr;
        m_v_ext_attr = NULL;
    }


    m_has_colors_attr = false;
    m_colors_attr.clear();
}

void CT_ColorMru::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_v_ext_attr)
    {
        m_v_ext_attr->toXmlAttr("v:ext", _outStream);
    }



    if (m_has_colors_attr)
    {
        _outStream << " " << "colors" << "=\"" << m_colors_attr << "\"";
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_ColorMru& CT_ColorMru::default_instance()
{
    if (!CT_ColorMru::default_instance_)
    {
        CT_ColorMru::default_instance_ = new CT_ColorMru();
    }
    return *CT_ColorMru::default_instance_;
}

bool CT_ColorMru::has_v_ext_attr() const
{
    return m_has_v_ext_attr;
}

void CT_ColorMru::set_v_ext_attr(const ns_v::ST_Ext& _v_ext_attr)
{
    m_has_v_ext_attr = true;
    m_v_ext_attr = new ns_v::ST_Ext(_v_ext_attr);
}

const ns_v::ST_Ext& CT_ColorMru::get_v_ext_attr() const
{
    if (m_v_ext_attr)
    {
        return *m_v_ext_attr;
    }
    return ns_v::ST_Ext::default_instance();
}

bool CT_ColorMru::has_colors_attr() const
{
    return m_has_colors_attr;
}

void CT_ColorMru::set_colors_attr(const XSD::string_& _colors_attr)
{
    m_has_colors_attr = true;
    m_colors_attr = _colors_attr;
}

const XSD::string_& CT_ColorMru::get_colors_attr() const
{
    return m_colors_attr;
}

CT_ColorMru* CT_ColorMru::default_instance_ = NULL;

// CT_ColorMenu
CT_ColorMenu::CT_ColorMenu()
    :m_has_v_ext_attr(false),
     m_v_ext_attr(NULL),
     m_has_strokecolor_attr(false),
     m_strokecolor_attr(NULL),
     m_has_fillcolor_attr(false),
     m_fillcolor_attr(NULL),
     m_has_shadowcolor_attr(false),
     m_shadowcolor_attr(NULL),
     m_has_extrusioncolor_attr(false),
     m_extrusioncolor_attr(NULL)
{
}
CT_ColorMenu::~CT_ColorMenu()
{
    clear();
}
void CT_ColorMenu::clear()
{
    m_has_v_ext_attr = false;

    if (m_v_ext_attr)
    {
        delete m_v_ext_attr;
        m_v_ext_attr = NULL;
    }


    m_has_strokecolor_attr = false;

    if (m_strokecolor_attr)
    {
        delete m_strokecolor_attr;
        m_strokecolor_attr = NULL;
    }


    m_has_fillcolor_attr = false;

    if (m_fillcolor_attr)
    {
        delete m_fillcolor_attr;
        m_fillcolor_attr = NULL;
    }


    m_has_shadowcolor_attr = false;

    if (m_shadowcolor_attr)
    {
        delete m_shadowcolor_attr;
        m_shadowcolor_attr = NULL;
    }


    m_has_extrusioncolor_attr = false;

    if (m_extrusioncolor_attr)
    {
        delete m_extrusioncolor_attr;
        m_extrusioncolor_attr = NULL;
    }

}

void CT_ColorMenu::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_v_ext_attr)
    {
        m_v_ext_attr->toXmlAttr("v:ext", _outStream);
    }



    if (m_has_strokecolor_attr)
    {
        m_strokecolor_attr->toXmlAttr("strokecolor", _outStream);
    }



    if (m_has_fillcolor_attr)
    {
        m_fillcolor_attr->toXmlAttr("fillcolor", _outStream);
    }



    if (m_has_shadowcolor_attr)
    {
        m_shadowcolor_attr->toXmlAttr("shadowcolor", _outStream);
    }



    if (m_has_extrusioncolor_attr)
    {
        m_extrusioncolor_attr->toXmlAttr("extrusioncolor", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_ColorMenu& CT_ColorMenu::default_instance()
{
    if (!CT_ColorMenu::default_instance_)
    {
        CT_ColorMenu::default_instance_ = new CT_ColorMenu();
    }
    return *CT_ColorMenu::default_instance_;
}

bool CT_ColorMenu::has_v_ext_attr() const
{
    return m_has_v_ext_attr;
}

void CT_ColorMenu::set_v_ext_attr(const ns_v::ST_Ext& _v_ext_attr)
{
    m_has_v_ext_attr = true;
    m_v_ext_attr = new ns_v::ST_Ext(_v_ext_attr);
}

const ns_v::ST_Ext& CT_ColorMenu::get_v_ext_attr() const
{
    if (m_v_ext_attr)
    {
        return *m_v_ext_attr;
    }
    return ns_v::ST_Ext::default_instance();
}

bool CT_ColorMenu::has_strokecolor_attr() const
{
    return m_has_strokecolor_attr;
}

void CT_ColorMenu::set_strokecolor_attr(const ns_s::ST_ColorType& _strokecolor_attr)
{
    m_has_strokecolor_attr = true;
    m_strokecolor_attr = new ns_s::ST_ColorType(_strokecolor_attr);
}

const ns_s::ST_ColorType& CT_ColorMenu::get_strokecolor_attr() const
{
    if (m_strokecolor_attr)
    {
        return *m_strokecolor_attr;
    }
    return ns_s::ST_ColorType::default_instance();
}

bool CT_ColorMenu::has_fillcolor_attr() const
{
    return m_has_fillcolor_attr;
}

void CT_ColorMenu::set_fillcolor_attr(const ns_s::ST_ColorType& _fillcolor_attr)
{
    m_has_fillcolor_attr = true;
    m_fillcolor_attr = new ns_s::ST_ColorType(_fillcolor_attr);
}

const ns_s::ST_ColorType& CT_ColorMenu::get_fillcolor_attr() const
{
    if (m_fillcolor_attr)
    {
        return *m_fillcolor_attr;
    }
    return ns_s::ST_ColorType::default_instance();
}

bool CT_ColorMenu::has_shadowcolor_attr() const
{
    return m_has_shadowcolor_attr;
}

void CT_ColorMenu::set_shadowcolor_attr(const ns_s::ST_ColorType& _shadowcolor_attr)
{
    m_has_shadowcolor_attr = true;
    m_shadowcolor_attr = new ns_s::ST_ColorType(_shadowcolor_attr);
}

const ns_s::ST_ColorType& CT_ColorMenu::get_shadowcolor_attr() const
{
    if (m_shadowcolor_attr)
    {
        return *m_shadowcolor_attr;
    }
    return ns_s::ST_ColorType::default_instance();
}

bool CT_ColorMenu::has_extrusioncolor_attr() const
{
    return m_has_extrusioncolor_attr;
}

void CT_ColorMenu::set_extrusioncolor_attr(const ns_s::ST_ColorType& _extrusioncolor_attr)
{
    m_has_extrusioncolor_attr = true;
    m_extrusioncolor_attr = new ns_s::ST_ColorType(_extrusioncolor_attr);
}

const ns_s::ST_ColorType& CT_ColorMenu::get_extrusioncolor_attr() const
{
    if (m_extrusioncolor_attr)
    {
        return *m_extrusioncolor_attr;
    }
    return ns_s::ST_ColorType::default_instance();
}

CT_ColorMenu* CT_ColorMenu::default_instance_ = NULL;

// CT_Skew
CT_Skew::CT_Skew()
    :m_has_v_ext_attr(false),
     m_v_ext_attr(NULL),
     m_has_id_attr(false),
     m_id_attr(""),
     m_has_on_attr(false),
     m_on_attr(NULL),
     m_has_offset_attr(false),
     m_offset_attr(""),
     m_has_origin_attr(false),
     m_origin_attr(""),
     m_has_matrix_attr(false),
     m_matrix_attr("")
{
}
CT_Skew::~CT_Skew()
{
    clear();
}
void CT_Skew::clear()
{
    m_has_v_ext_attr = false;

    if (m_v_ext_attr)
    {
        delete m_v_ext_attr;
        m_v_ext_attr = NULL;
    }


    m_has_id_attr = false;
    m_id_attr.clear();

    m_has_on_attr = false;

    if (m_on_attr)
    {
        delete m_on_attr;
        m_on_attr = NULL;
    }


    m_has_offset_attr = false;
    m_offset_attr.clear();

    m_has_origin_attr = false;
    m_origin_attr.clear();

    m_has_matrix_attr = false;
    m_matrix_attr.clear();
}

void CT_Skew::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_v_ext_attr)
    {
        m_v_ext_attr->toXmlAttr("v:ext", _outStream);
    }



    if (m_has_id_attr)
    {
        _outStream << " " << "id" << "=\"" << m_id_attr << "\"";
    }



    if (m_has_on_attr)
    {
        m_on_attr->toXmlAttr("on", _outStream);
    }



    if (m_has_offset_attr)
    {
        _outStream << " " << "offset" << "=\"" << m_offset_attr << "\"";
    }



    if (m_has_origin_attr)
    {
        _outStream << " " << "origin" << "=\"" << m_origin_attr << "\"";
    }



    if (m_has_matrix_attr)
    {
        _outStream << " " << "matrix" << "=\"" << m_matrix_attr << "\"";
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_Skew& CT_Skew::default_instance()
{
    if (!CT_Skew::default_instance_)
    {
        CT_Skew::default_instance_ = new CT_Skew();
    }
    return *CT_Skew::default_instance_;
}

bool CT_Skew::has_v_ext_attr() const
{
    return m_has_v_ext_attr;
}

void CT_Skew::set_v_ext_attr(const ns_v::ST_Ext& _v_ext_attr)
{
    m_has_v_ext_attr = true;
    m_v_ext_attr = new ns_v::ST_Ext(_v_ext_attr);
}

const ns_v::ST_Ext& CT_Skew::get_v_ext_attr() const
{
    if (m_v_ext_attr)
    {
        return *m_v_ext_attr;
    }
    return ns_v::ST_Ext::default_instance();
}

bool CT_Skew::has_id_attr() const
{
    return m_has_id_attr;
}

void CT_Skew::set_id_attr(const XSD::string_& _id_attr)
{
    m_has_id_attr = true;
    m_id_attr = _id_attr;
}

const XSD::string_& CT_Skew::get_id_attr() const
{
    return m_id_attr;
}

bool CT_Skew::has_on_attr() const
{
    return m_has_on_attr;
}

void CT_Skew::set_on_attr(const ns_s::ST_TrueFalse& _on_attr)
{
    m_has_on_attr = true;
    m_on_attr = new ns_s::ST_TrueFalse(_on_attr);
}

const ns_s::ST_TrueFalse& CT_Skew::get_on_attr() const
{
    if (m_on_attr)
    {
        return *m_on_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
}

bool CT_Skew::has_offset_attr() const
{
    return m_has_offset_attr;
}

void CT_Skew::set_offset_attr(const XSD::string_& _offset_attr)
{
    m_has_offset_attr = true;
    m_offset_attr = _offset_attr;
}

const XSD::string_& CT_Skew::get_offset_attr() const
{
    return m_offset_attr;
}

bool CT_Skew::has_origin_attr() const
{
    return m_has_origin_attr;
}

void CT_Skew::set_origin_attr(const XSD::string_& _origin_attr)
{
    m_has_origin_attr = true;
    m_origin_attr = _origin_attr;
}

const XSD::string_& CT_Skew::get_origin_attr() const
{
    return m_origin_attr;
}

bool CT_Skew::has_matrix_attr() const
{
    return m_has_matrix_attr;
}

void CT_Skew::set_matrix_attr(const XSD::string_& _matrix_attr)
{
    m_has_matrix_attr = true;
    m_matrix_attr = _matrix_attr;
}

const XSD::string_& CT_Skew::get_matrix_attr() const
{
    return m_matrix_attr;
}

CT_Skew* CT_Skew::default_instance_ = NULL;

// CT_Extrusion
CT_Extrusion::CT_Extrusion()
    :m_has_v_ext_attr(false),
     m_v_ext_attr(NULL),
     m_has_on_attr(false),
     m_on_attr(NULL),
     m_has_type_attr(false),
     m_type_attr(NULL),
     m_has_render_attr(false),
     m_render_attr(NULL),
     m_has_viewpointorigin_attr(false),
     m_viewpointorigin_attr(""),
     m_has_viewpoint_attr(false),
     m_viewpoint_attr(""),
     m_has_plane_attr(false),
     m_plane_attr(NULL),
     m_has_skewangle_attr(false),
     m_skewangle_attr(0),
     m_has_skewamt_attr(false),
     m_skewamt_attr(""),
     m_has_foredepth_attr(false),
     m_foredepth_attr(""),
     m_has_backdepth_attr(false),
     m_backdepth_attr(""),
     m_has_orientation_attr(false),
     m_orientation_attr(""),
     m_has_orientationangle_attr(false),
     m_orientationangle_attr(0),
     m_has_lockrotationcenter_attr(false),
     m_lockrotationcenter_attr(NULL),
     m_has_autorotationcenter_attr(false),
     m_autorotationcenter_attr(NULL),
     m_has_rotationcenter_attr(false),
     m_rotationcenter_attr(""),
     m_has_rotationangle_attr(false),
     m_rotationangle_attr(""),
     m_has_colormode_attr(false),
     m_colormode_attr(NULL),
     m_has_color_attr(false),
     m_color_attr(NULL),
     m_has_shininess_attr(false),
     m_shininess_attr(0),
     m_has_specularity_attr(false),
     m_specularity_attr(""),
     m_has_diffusity_attr(false),
     m_diffusity_attr(""),
     m_has_metal_attr(false),
     m_metal_attr(NULL),
     m_has_edge_attr(false),
     m_edge_attr(""),
     m_has_facet_attr(false),
     m_facet_attr(""),
     m_has_lightface_attr(false),
     m_lightface_attr(NULL),
     m_has_brightness_attr(false),
     m_brightness_attr(""),
     m_has_lightposition_attr(false),
     m_lightposition_attr(""),
     m_has_lightlevel_attr(false),
     m_lightlevel_attr(""),
     m_has_lightharsh_attr(false),
     m_lightharsh_attr(NULL),
     m_has_lightposition2_attr(false),
     m_lightposition2_attr(""),
     m_has_lightlevel2_attr(false),
     m_lightlevel2_attr(""),
     m_has_lightharsh2_attr(false),
     m_lightharsh2_attr(NULL)
{
}
CT_Extrusion::~CT_Extrusion()
{
    clear();
}
void CT_Extrusion::clear()
{
    m_has_v_ext_attr = false;

    if (m_v_ext_attr)
    {
        delete m_v_ext_attr;
        m_v_ext_attr = NULL;
    }


    m_has_on_attr = false;

    if (m_on_attr)
    {
        delete m_on_attr;
        m_on_attr = NULL;
    }


    m_has_type_attr = false;

    if (m_type_attr)
    {
        delete m_type_attr;
        m_type_attr = NULL;
    }


    m_has_render_attr = false;

    if (m_render_attr)
    {
        delete m_render_attr;
        m_render_attr = NULL;
    }


    m_has_viewpointorigin_attr = false;
    m_viewpointorigin_attr.clear();

    m_has_viewpoint_attr = false;
    m_viewpoint_attr.clear();

    m_has_plane_attr = false;

    if (m_plane_attr)
    {
        delete m_plane_attr;
        m_plane_attr = NULL;
    }


    m_has_skewangle_attr = false;
    m_skewangle_attr = 0;

    m_has_skewamt_attr = false;
    m_skewamt_attr.clear();

    m_has_foredepth_attr = false;
    m_foredepth_attr.clear();

    m_has_backdepth_attr = false;
    m_backdepth_attr.clear();

    m_has_orientation_attr = false;
    m_orientation_attr.clear();

    m_has_orientationangle_attr = false;
    m_orientationangle_attr = 0;

    m_has_lockrotationcenter_attr = false;

    if (m_lockrotationcenter_attr)
    {
        delete m_lockrotationcenter_attr;
        m_lockrotationcenter_attr = NULL;
    }


    m_has_autorotationcenter_attr = false;

    if (m_autorotationcenter_attr)
    {
        delete m_autorotationcenter_attr;
        m_autorotationcenter_attr = NULL;
    }


    m_has_rotationcenter_attr = false;
    m_rotationcenter_attr.clear();

    m_has_rotationangle_attr = false;
    m_rotationangle_attr.clear();

    m_has_colormode_attr = false;

    if (m_colormode_attr)
    {
        delete m_colormode_attr;
        m_colormode_attr = NULL;
    }


    m_has_color_attr = false;

    if (m_color_attr)
    {
        delete m_color_attr;
        m_color_attr = NULL;
    }


    m_has_shininess_attr = false;
    m_shininess_attr = 0;

    m_has_specularity_attr = false;
    m_specularity_attr.clear();

    m_has_diffusity_attr = false;
    m_diffusity_attr.clear();

    m_has_metal_attr = false;

    if (m_metal_attr)
    {
        delete m_metal_attr;
        m_metal_attr = NULL;
    }


    m_has_edge_attr = false;
    m_edge_attr.clear();

    m_has_facet_attr = false;
    m_facet_attr.clear();

    m_has_lightface_attr = false;

    if (m_lightface_attr)
    {
        delete m_lightface_attr;
        m_lightface_attr = NULL;
    }


    m_has_brightness_attr = false;
    m_brightness_attr.clear();

    m_has_lightposition_attr = false;
    m_lightposition_attr.clear();

    m_has_lightlevel_attr = false;
    m_lightlevel_attr.clear();

    m_has_lightharsh_attr = false;

    if (m_lightharsh_attr)
    {
        delete m_lightharsh_attr;
        m_lightharsh_attr = NULL;
    }


    m_has_lightposition2_attr = false;
    m_lightposition2_attr.clear();

    m_has_lightlevel2_attr = false;
    m_lightlevel2_attr.clear();

    m_has_lightharsh2_attr = false;

    if (m_lightharsh2_attr)
    {
        delete m_lightharsh2_attr;
        m_lightharsh2_attr = NULL;
    }

}

void CT_Extrusion::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_v_ext_attr)
    {
        m_v_ext_attr->toXmlAttr("v:ext", _outStream);
    }



    if (m_has_on_attr)
    {
        m_on_attr->toXmlAttr("on", _outStream);
    }



    if (m_has_type_attr)
    {
        m_type_attr->toXmlAttr("type", _outStream);
    }



    if (m_has_render_attr)
    {
        m_render_attr->toXmlAttr("render", _outStream);
    }



    if (m_has_viewpointorigin_attr)
    {
        _outStream << " " << "viewpointorigin" << "=\"" << m_viewpointorigin_attr << "\"";
    }



    if (m_has_viewpoint_attr)
    {
        _outStream << " " << "viewpoint" << "=\"" << m_viewpoint_attr << "\"";
    }



    if (m_has_plane_attr)
    {
        m_plane_attr->toXmlAttr("plane", _outStream);
    }



    if (m_has_skewangle_attr)
    {
        _outStream << " " << "skewangle" << "=\"" << m_skewangle_attr << "\"";
    }



    if (m_has_skewamt_attr)
    {
        _outStream << " " << "skewamt" << "=\"" << m_skewamt_attr << "\"";
    }



    if (m_has_foredepth_attr)
    {
        _outStream << " " << "foredepth" << "=\"" << m_foredepth_attr << "\"";
    }



    if (m_has_backdepth_attr)
    {
        _outStream << " " << "backdepth" << "=\"" << m_backdepth_attr << "\"";
    }



    if (m_has_orientation_attr)
    {
        _outStream << " " << "orientation" << "=\"" << m_orientation_attr << "\"";
    }



    if (m_has_orientationangle_attr)
    {
        _outStream << " " << "orientationangle" << "=\"" << m_orientationangle_attr << "\"";
    }



    if (m_has_lockrotationcenter_attr)
    {
        m_lockrotationcenter_attr->toXmlAttr("lockrotationcenter", _outStream);
    }



    if (m_has_autorotationcenter_attr)
    {
        m_autorotationcenter_attr->toXmlAttr("autorotationcenter", _outStream);
    }



    if (m_has_rotationcenter_attr)
    {
        _outStream << " " << "rotationcenter" << "=\"" << m_rotationcenter_attr << "\"";
    }



    if (m_has_rotationangle_attr)
    {
        _outStream << " " << "rotationangle" << "=\"" << m_rotationangle_attr << "\"";
    }



    if (m_has_colormode_attr)
    {
        m_colormode_attr->toXmlAttr("colormode", _outStream);
    }



    if (m_has_color_attr)
    {
        m_color_attr->toXmlAttr("color", _outStream);
    }



    if (m_has_shininess_attr)
    {
        _outStream << " " << "shininess" << "=\"" << m_shininess_attr << "\"";
    }



    if (m_has_specularity_attr)
    {
        _outStream << " " << "specularity" << "=\"" << m_specularity_attr << "\"";
    }



    if (m_has_diffusity_attr)
    {
        _outStream << " " << "diffusity" << "=\"" << m_diffusity_attr << "\"";
    }



    if (m_has_metal_attr)
    {
        m_metal_attr->toXmlAttr("metal", _outStream);
    }



    if (m_has_edge_attr)
    {
        _outStream << " " << "edge" << "=\"" << m_edge_attr << "\"";
    }



    if (m_has_facet_attr)
    {
        _outStream << " " << "facet" << "=\"" << m_facet_attr << "\"";
    }



    if (m_has_lightface_attr)
    {
        m_lightface_attr->toXmlAttr("lightface", _outStream);
    }



    if (m_has_brightness_attr)
    {
        _outStream << " " << "brightness" << "=\"" << m_brightness_attr << "\"";
    }



    if (m_has_lightposition_attr)
    {
        _outStream << " " << "lightposition" << "=\"" << m_lightposition_attr << "\"";
    }



    if (m_has_lightlevel_attr)
    {
        _outStream << " " << "lightlevel" << "=\"" << m_lightlevel_attr << "\"";
    }



    if (m_has_lightharsh_attr)
    {
        m_lightharsh_attr->toXmlAttr("lightharsh", _outStream);
    }



    if (m_has_lightposition2_attr)
    {
        _outStream << " " << "lightposition2" << "=\"" << m_lightposition2_attr << "\"";
    }



    if (m_has_lightlevel2_attr)
    {
        _outStream << " " << "lightlevel2" << "=\"" << m_lightlevel2_attr << "\"";
    }



    if (m_has_lightharsh2_attr)
    {
        m_lightharsh2_attr->toXmlAttr("lightharsh2", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_Extrusion& CT_Extrusion::default_instance()
{
    if (!CT_Extrusion::default_instance_)
    {
        CT_Extrusion::default_instance_ = new CT_Extrusion();
    }
    return *CT_Extrusion::default_instance_;
}

bool CT_Extrusion::has_v_ext_attr() const
{
    return m_has_v_ext_attr;
}

void CT_Extrusion::set_v_ext_attr(const ns_v::ST_Ext& _v_ext_attr)
{
    m_has_v_ext_attr = true;
    m_v_ext_attr = new ns_v::ST_Ext(_v_ext_attr);
}

const ns_v::ST_Ext& CT_Extrusion::get_v_ext_attr() const
{
    if (m_v_ext_attr)
    {
        return *m_v_ext_attr;
    }
    return ns_v::ST_Ext::default_instance();
}

bool CT_Extrusion::has_on_attr() const
{
    return m_has_on_attr;
}

void CT_Extrusion::set_on_attr(const ns_s::ST_TrueFalse& _on_attr)
{
    m_has_on_attr = true;
    m_on_attr = new ns_s::ST_TrueFalse(_on_attr);
}

const ns_s::ST_TrueFalse& CT_Extrusion::get_on_attr() const
{
    if (m_on_attr)
    {
        return *m_on_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
}

bool CT_Extrusion::has_type_attr() const
{
    return m_has_type_attr;
}

void CT_Extrusion::set_type_attr(const ST_ExtrusionType& _type_attr)
{
    m_has_type_attr = true;
    m_type_attr = new ST_ExtrusionType(_type_attr);
}

const ST_ExtrusionType& CT_Extrusion::get_type_attr() const
{
    if (m_type_attr)
    {
        return *m_type_attr;
    }
    return ST_ExtrusionType::default_instance();
}

bool CT_Extrusion::has_render_attr() const
{
    return m_has_render_attr;
}

void CT_Extrusion::set_render_attr(const ST_ExtrusionRender& _render_attr)
{
    m_has_render_attr = true;
    m_render_attr = new ST_ExtrusionRender(_render_attr);
}

const ST_ExtrusionRender& CT_Extrusion::get_render_attr() const
{
    if (m_render_attr)
    {
        return *m_render_attr;
    }
    return ST_ExtrusionRender::default_instance();
}

bool CT_Extrusion::has_viewpointorigin_attr() const
{
    return m_has_viewpointorigin_attr;
}

void CT_Extrusion::set_viewpointorigin_attr(const XSD::string_& _viewpointorigin_attr)
{
    m_has_viewpointorigin_attr = true;
    m_viewpointorigin_attr = _viewpointorigin_attr;
}

const XSD::string_& CT_Extrusion::get_viewpointorigin_attr() const
{
    return m_viewpointorigin_attr;
}

bool CT_Extrusion::has_viewpoint_attr() const
{
    return m_has_viewpoint_attr;
}

void CT_Extrusion::set_viewpoint_attr(const XSD::string_& _viewpoint_attr)
{
    m_has_viewpoint_attr = true;
    m_viewpoint_attr = _viewpoint_attr;
}

const XSD::string_& CT_Extrusion::get_viewpoint_attr() const
{
    return m_viewpoint_attr;
}

bool CT_Extrusion::has_plane_attr() const
{
    return m_has_plane_attr;
}

void CT_Extrusion::set_plane_attr(const ST_ExtrusionPlane& _plane_attr)
{
    m_has_plane_attr = true;
    m_plane_attr = new ST_ExtrusionPlane(_plane_attr);
}

const ST_ExtrusionPlane& CT_Extrusion::get_plane_attr() const
{
    if (m_plane_attr)
    {
        return *m_plane_attr;
    }
    return ST_ExtrusionPlane::default_instance();
}

bool CT_Extrusion::has_skewangle_attr() const
{
    return m_has_skewangle_attr;
}

void CT_Extrusion::set_skewangle_attr(const XSD::float_& _skewangle_attr)
{
    m_has_skewangle_attr = true;
    m_skewangle_attr = _skewangle_attr;
}

const XSD::float_& CT_Extrusion::get_skewangle_attr() const
{
    return m_skewangle_attr;
}

bool CT_Extrusion::has_skewamt_attr() const
{
    return m_has_skewamt_attr;
}

void CT_Extrusion::set_skewamt_attr(const XSD::string_& _skewamt_attr)
{
    m_has_skewamt_attr = true;
    m_skewamt_attr = _skewamt_attr;
}

const XSD::string_& CT_Extrusion::get_skewamt_attr() const
{
    return m_skewamt_attr;
}

bool CT_Extrusion::has_foredepth_attr() const
{
    return m_has_foredepth_attr;
}

void CT_Extrusion::set_foredepth_attr(const XSD::string_& _foredepth_attr)
{
    m_has_foredepth_attr = true;
    m_foredepth_attr = _foredepth_attr;
}

const XSD::string_& CT_Extrusion::get_foredepth_attr() const
{
    return m_foredepth_attr;
}

bool CT_Extrusion::has_backdepth_attr() const
{
    return m_has_backdepth_attr;
}

void CT_Extrusion::set_backdepth_attr(const XSD::string_& _backdepth_attr)
{
    m_has_backdepth_attr = true;
    m_backdepth_attr = _backdepth_attr;
}

const XSD::string_& CT_Extrusion::get_backdepth_attr() const
{
    return m_backdepth_attr;
}

bool CT_Extrusion::has_orientation_attr() const
{
    return m_has_orientation_attr;
}

void CT_Extrusion::set_orientation_attr(const XSD::string_& _orientation_attr)
{
    m_has_orientation_attr = true;
    m_orientation_attr = _orientation_attr;
}

const XSD::string_& CT_Extrusion::get_orientation_attr() const
{
    return m_orientation_attr;
}

bool CT_Extrusion::has_orientationangle_attr() const
{
    return m_has_orientationangle_attr;
}

void CT_Extrusion::set_orientationangle_attr(const XSD::float_& _orientationangle_attr)
{
    m_has_orientationangle_attr = true;
    m_orientationangle_attr = _orientationangle_attr;
}

const XSD::float_& CT_Extrusion::get_orientationangle_attr() const
{
    return m_orientationangle_attr;
}

bool CT_Extrusion::has_lockrotationcenter_attr() const
{
    return m_has_lockrotationcenter_attr;
}

void CT_Extrusion::set_lockrotationcenter_attr(const ns_s::ST_TrueFalse& _lockrotationcenter_attr)
{
    m_has_lockrotationcenter_attr = true;
    m_lockrotationcenter_attr = new ns_s::ST_TrueFalse(_lockrotationcenter_attr);
}

const ns_s::ST_TrueFalse& CT_Extrusion::get_lockrotationcenter_attr() const
{
    if (m_lockrotationcenter_attr)
    {
        return *m_lockrotationcenter_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
}

bool CT_Extrusion::has_autorotationcenter_attr() const
{
    return m_has_autorotationcenter_attr;
}

void CT_Extrusion::set_autorotationcenter_attr(const ns_s::ST_TrueFalse& _autorotationcenter_attr)
{
    m_has_autorotationcenter_attr = true;
    m_autorotationcenter_attr = new ns_s::ST_TrueFalse(_autorotationcenter_attr);
}

const ns_s::ST_TrueFalse& CT_Extrusion::get_autorotationcenter_attr() const
{
    if (m_autorotationcenter_attr)
    {
        return *m_autorotationcenter_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
}

bool CT_Extrusion::has_rotationcenter_attr() const
{
    return m_has_rotationcenter_attr;
}

void CT_Extrusion::set_rotationcenter_attr(const XSD::string_& _rotationcenter_attr)
{
    m_has_rotationcenter_attr = true;
    m_rotationcenter_attr = _rotationcenter_attr;
}

const XSD::string_& CT_Extrusion::get_rotationcenter_attr() const
{
    return m_rotationcenter_attr;
}

bool CT_Extrusion::has_rotationangle_attr() const
{
    return m_has_rotationangle_attr;
}

void CT_Extrusion::set_rotationangle_attr(const XSD::string_& _rotationangle_attr)
{
    m_has_rotationangle_attr = true;
    m_rotationangle_attr = _rotationangle_attr;
}

const XSD::string_& CT_Extrusion::get_rotationangle_attr() const
{
    return m_rotationangle_attr;
}

bool CT_Extrusion::has_colormode_attr() const
{
    return m_has_colormode_attr;
}

void CT_Extrusion::set_colormode_attr(const ST_ColorMode& _colormode_attr)
{
    m_has_colormode_attr = true;
    m_colormode_attr = new ST_ColorMode(_colormode_attr);
}

const ST_ColorMode& CT_Extrusion::get_colormode_attr() const
{
    if (m_colormode_attr)
    {
        return *m_colormode_attr;
    }
    return ST_ColorMode::default_instance();
}

bool CT_Extrusion::has_color_attr() const
{
    return m_has_color_attr;
}

void CT_Extrusion::set_color_attr(const ns_s::ST_ColorType& _color_attr)
{
    m_has_color_attr = true;
    m_color_attr = new ns_s::ST_ColorType(_color_attr);
}

const ns_s::ST_ColorType& CT_Extrusion::get_color_attr() const
{
    if (m_color_attr)
    {
        return *m_color_attr;
    }
    return ns_s::ST_ColorType::default_instance();
}

bool CT_Extrusion::has_shininess_attr() const
{
    return m_has_shininess_attr;
}

void CT_Extrusion::set_shininess_attr(const XSD::float_& _shininess_attr)
{
    m_has_shininess_attr = true;
    m_shininess_attr = _shininess_attr;
}

const XSD::float_& CT_Extrusion::get_shininess_attr() const
{
    return m_shininess_attr;
}

bool CT_Extrusion::has_specularity_attr() const
{
    return m_has_specularity_attr;
}

void CT_Extrusion::set_specularity_attr(const XSD::string_& _specularity_attr)
{
    m_has_specularity_attr = true;
    m_specularity_attr = _specularity_attr;
}

const XSD::string_& CT_Extrusion::get_specularity_attr() const
{
    return m_specularity_attr;
}

bool CT_Extrusion::has_diffusity_attr() const
{
    return m_has_diffusity_attr;
}

void CT_Extrusion::set_diffusity_attr(const XSD::string_& _diffusity_attr)
{
    m_has_diffusity_attr = true;
    m_diffusity_attr = _diffusity_attr;
}

const XSD::string_& CT_Extrusion::get_diffusity_attr() const
{
    return m_diffusity_attr;
}

bool CT_Extrusion::has_metal_attr() const
{
    return m_has_metal_attr;
}

void CT_Extrusion::set_metal_attr(const ns_s::ST_TrueFalse& _metal_attr)
{
    m_has_metal_attr = true;
    m_metal_attr = new ns_s::ST_TrueFalse(_metal_attr);
}

const ns_s::ST_TrueFalse& CT_Extrusion::get_metal_attr() const
{
    if (m_metal_attr)
    {
        return *m_metal_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
}

bool CT_Extrusion::has_edge_attr() const
{
    return m_has_edge_attr;
}

void CT_Extrusion::set_edge_attr(const XSD::string_& _edge_attr)
{
    m_has_edge_attr = true;
    m_edge_attr = _edge_attr;
}

const XSD::string_& CT_Extrusion::get_edge_attr() const
{
    return m_edge_attr;
}

bool CT_Extrusion::has_facet_attr() const
{
    return m_has_facet_attr;
}

void CT_Extrusion::set_facet_attr(const XSD::string_& _facet_attr)
{
    m_has_facet_attr = true;
    m_facet_attr = _facet_attr;
}

const XSD::string_& CT_Extrusion::get_facet_attr() const
{
    return m_facet_attr;
}

bool CT_Extrusion::has_lightface_attr() const
{
    return m_has_lightface_attr;
}

void CT_Extrusion::set_lightface_attr(const ns_s::ST_TrueFalse& _lightface_attr)
{
    m_has_lightface_attr = true;
    m_lightface_attr = new ns_s::ST_TrueFalse(_lightface_attr);
}

const ns_s::ST_TrueFalse& CT_Extrusion::get_lightface_attr() const
{
    if (m_lightface_attr)
    {
        return *m_lightface_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
}

bool CT_Extrusion::has_brightness_attr() const
{
    return m_has_brightness_attr;
}

void CT_Extrusion::set_brightness_attr(const XSD::string_& _brightness_attr)
{
    m_has_brightness_attr = true;
    m_brightness_attr = _brightness_attr;
}

const XSD::string_& CT_Extrusion::get_brightness_attr() const
{
    return m_brightness_attr;
}

bool CT_Extrusion::has_lightposition_attr() const
{
    return m_has_lightposition_attr;
}

void CT_Extrusion::set_lightposition_attr(const XSD::string_& _lightposition_attr)
{
    m_has_lightposition_attr = true;
    m_lightposition_attr = _lightposition_attr;
}

const XSD::string_& CT_Extrusion::get_lightposition_attr() const
{
    return m_lightposition_attr;
}

bool CT_Extrusion::has_lightlevel_attr() const
{
    return m_has_lightlevel_attr;
}

void CT_Extrusion::set_lightlevel_attr(const XSD::string_& _lightlevel_attr)
{
    m_has_lightlevel_attr = true;
    m_lightlevel_attr = _lightlevel_attr;
}

const XSD::string_& CT_Extrusion::get_lightlevel_attr() const
{
    return m_lightlevel_attr;
}

bool CT_Extrusion::has_lightharsh_attr() const
{
    return m_has_lightharsh_attr;
}

void CT_Extrusion::set_lightharsh_attr(const ns_s::ST_TrueFalse& _lightharsh_attr)
{
    m_has_lightharsh_attr = true;
    m_lightharsh_attr = new ns_s::ST_TrueFalse(_lightharsh_attr);
}

const ns_s::ST_TrueFalse& CT_Extrusion::get_lightharsh_attr() const
{
    if (m_lightharsh_attr)
    {
        return *m_lightharsh_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
}

bool CT_Extrusion::has_lightposition2_attr() const
{
    return m_has_lightposition2_attr;
}

void CT_Extrusion::set_lightposition2_attr(const XSD::string_& _lightposition2_attr)
{
    m_has_lightposition2_attr = true;
    m_lightposition2_attr = _lightposition2_attr;
}

const XSD::string_& CT_Extrusion::get_lightposition2_attr() const
{
    return m_lightposition2_attr;
}

bool CT_Extrusion::has_lightlevel2_attr() const
{
    return m_has_lightlevel2_attr;
}

void CT_Extrusion::set_lightlevel2_attr(const XSD::string_& _lightlevel2_attr)
{
    m_has_lightlevel2_attr = true;
    m_lightlevel2_attr = _lightlevel2_attr;
}

const XSD::string_& CT_Extrusion::get_lightlevel2_attr() const
{
    return m_lightlevel2_attr;
}

bool CT_Extrusion::has_lightharsh2_attr() const
{
    return m_has_lightharsh2_attr;
}

void CT_Extrusion::set_lightharsh2_attr(const ns_s::ST_TrueFalse& _lightharsh2_attr)
{
    m_has_lightharsh2_attr = true;
    m_lightharsh2_attr = new ns_s::ST_TrueFalse(_lightharsh2_attr);
}

const ns_s::ST_TrueFalse& CT_Extrusion::get_lightharsh2_attr() const
{
    if (m_lightharsh2_attr)
    {
        return *m_lightharsh2_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
}

CT_Extrusion* CT_Extrusion::default_instance_ = NULL;

// CT_Callout
CT_Callout::CT_Callout()
    :m_has_v_ext_attr(false),
     m_v_ext_attr(NULL),
     m_has_on_attr(false),
     m_on_attr(NULL),
     m_has_type_attr(false),
     m_type_attr(""),
     m_has_gap_attr(false),
     m_gap_attr(""),
     m_has_angle_attr(false),
     m_angle_attr(NULL),
     m_has_dropauto_attr(false),
     m_dropauto_attr(NULL),
     m_has_drop_attr(false),
     m_drop_attr(NULL),
     m_has_distance_attr(false),
     m_distance_attr(""),
     m_has_lengthspecified_attr(false),
     m_lengthspecified_attr(NULL),
     m_has_length_attr(false),
     m_length_attr(""),
     m_has_accentbar_attr(false),
     m_accentbar_attr(NULL),
     m_has_textborder_attr(false),
     m_textborder_attr(NULL),
     m_has_minusx_attr(false),
     m_minusx_attr(NULL),
     m_has_minusy_attr(false),
     m_minusy_attr(NULL)
{
}
CT_Callout::~CT_Callout()
{
    clear();
}
void CT_Callout::clear()
{
    m_has_v_ext_attr = false;

    if (m_v_ext_attr)
    {
        delete m_v_ext_attr;
        m_v_ext_attr = NULL;
    }


    m_has_on_attr = false;

    if (m_on_attr)
    {
        delete m_on_attr;
        m_on_attr = NULL;
    }


    m_has_type_attr = false;
    m_type_attr.clear();

    m_has_gap_attr = false;
    m_gap_attr.clear();

    m_has_angle_attr = false;

    if (m_angle_attr)
    {
        delete m_angle_attr;
        m_angle_attr = NULL;
    }


    m_has_dropauto_attr = false;

    if (m_dropauto_attr)
    {
        delete m_dropauto_attr;
        m_dropauto_attr = NULL;
    }


    m_has_drop_attr = false;

    if (m_drop_attr)
    {
        delete m_drop_attr;
        m_drop_attr = NULL;
    }


    m_has_distance_attr = false;
    m_distance_attr.clear();

    m_has_lengthspecified_attr = false;

    if (m_lengthspecified_attr)
    {
        delete m_lengthspecified_attr;
        m_lengthspecified_attr = NULL;
    }


    m_has_length_attr = false;
    m_length_attr.clear();

    m_has_accentbar_attr = false;

    if (m_accentbar_attr)
    {
        delete m_accentbar_attr;
        m_accentbar_attr = NULL;
    }


    m_has_textborder_attr = false;

    if (m_textborder_attr)
    {
        delete m_textborder_attr;
        m_textborder_attr = NULL;
    }


    m_has_minusx_attr = false;

    if (m_minusx_attr)
    {
        delete m_minusx_attr;
        m_minusx_attr = NULL;
    }


    m_has_minusy_attr = false;

    if (m_minusy_attr)
    {
        delete m_minusy_attr;
        m_minusy_attr = NULL;
    }

}

void CT_Callout::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_v_ext_attr)
    {
        m_v_ext_attr->toXmlAttr("v:ext", _outStream);
    }



    if (m_has_on_attr)
    {
        m_on_attr->toXmlAttr("on", _outStream);
    }



    if (m_has_type_attr)
    {
        _outStream << " " << "type" << "=\"" << m_type_attr << "\"";
    }



    if (m_has_gap_attr)
    {
        _outStream << " " << "gap" << "=\"" << m_gap_attr << "\"";
    }



    if (m_has_angle_attr)
    {
        m_angle_attr->toXmlAttr("angle", _outStream);
    }



    if (m_has_dropauto_attr)
    {
        m_dropauto_attr->toXmlAttr("dropauto", _outStream);
    }



    if (m_has_drop_attr)
    {
        m_drop_attr->toXmlAttr("drop", _outStream);
    }



    if (m_has_distance_attr)
    {
        _outStream << " " << "distance" << "=\"" << m_distance_attr << "\"";
    }



    if (m_has_lengthspecified_attr)
    {
        m_lengthspecified_attr->toXmlAttr("lengthspecified", _outStream);
    }



    if (m_has_length_attr)
    {
        _outStream << " " << "length" << "=\"" << m_length_attr << "\"";
    }



    if (m_has_accentbar_attr)
    {
        m_accentbar_attr->toXmlAttr("accentbar", _outStream);
    }



    if (m_has_textborder_attr)
    {
        m_textborder_attr->toXmlAttr("textborder", _outStream);
    }



    if (m_has_minusx_attr)
    {
        m_minusx_attr->toXmlAttr("minusx", _outStream);
    }



    if (m_has_minusy_attr)
    {
        m_minusy_attr->toXmlAttr("minusy", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_Callout& CT_Callout::default_instance()
{
    if (!CT_Callout::default_instance_)
    {
        CT_Callout::default_instance_ = new CT_Callout();
    }
    return *CT_Callout::default_instance_;
}

bool CT_Callout::has_v_ext_attr() const
{
    return m_has_v_ext_attr;
}

void CT_Callout::set_v_ext_attr(const ns_v::ST_Ext& _v_ext_attr)
{
    m_has_v_ext_attr = true;
    m_v_ext_attr = new ns_v::ST_Ext(_v_ext_attr);
}

const ns_v::ST_Ext& CT_Callout::get_v_ext_attr() const
{
    if (m_v_ext_attr)
    {
        return *m_v_ext_attr;
    }
    return ns_v::ST_Ext::default_instance();
}

bool CT_Callout::has_on_attr() const
{
    return m_has_on_attr;
}

void CT_Callout::set_on_attr(const ns_s::ST_TrueFalse& _on_attr)
{
    m_has_on_attr = true;
    m_on_attr = new ns_s::ST_TrueFalse(_on_attr);
}

const ns_s::ST_TrueFalse& CT_Callout::get_on_attr() const
{
    if (m_on_attr)
    {
        return *m_on_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
}

bool CT_Callout::has_type_attr() const
{
    return m_has_type_attr;
}

void CT_Callout::set_type_attr(const XSD::string_& _type_attr)
{
    m_has_type_attr = true;
    m_type_attr = _type_attr;
}

const XSD::string_& CT_Callout::get_type_attr() const
{
    return m_type_attr;
}

bool CT_Callout::has_gap_attr() const
{
    return m_has_gap_attr;
}

void CT_Callout::set_gap_attr(const XSD::string_& _gap_attr)
{
    m_has_gap_attr = true;
    m_gap_attr = _gap_attr;
}

const XSD::string_& CT_Callout::get_gap_attr() const
{
    return m_gap_attr;
}

bool CT_Callout::has_angle_attr() const
{
    return m_has_angle_attr;
}

void CT_Callout::set_angle_attr(const ST_Angle& _angle_attr)
{
    m_has_angle_attr = true;
    m_angle_attr = new ST_Angle(_angle_attr);
}

const ST_Angle& CT_Callout::get_angle_attr() const
{
    if (m_angle_attr)
    {
        return *m_angle_attr;
    }
    return ST_Angle::default_instance();
}

bool CT_Callout::has_dropauto_attr() const
{
    return m_has_dropauto_attr;
}

void CT_Callout::set_dropauto_attr(const ns_s::ST_TrueFalse& _dropauto_attr)
{
    m_has_dropauto_attr = true;
    m_dropauto_attr = new ns_s::ST_TrueFalse(_dropauto_attr);
}

const ns_s::ST_TrueFalse& CT_Callout::get_dropauto_attr() const
{
    if (m_dropauto_attr)
    {
        return *m_dropauto_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
}

bool CT_Callout::has_drop_attr() const
{
    return m_has_drop_attr;
}

void CT_Callout::set_drop_attr(const ST_CalloutDrop& _drop_attr)
{
    m_has_drop_attr = true;
    m_drop_attr = new ST_CalloutDrop(_drop_attr);
}

const ST_CalloutDrop& CT_Callout::get_drop_attr() const
{
    if (m_drop_attr)
    {
        return *m_drop_attr;
    }
    return ST_CalloutDrop::default_instance();
}

bool CT_Callout::has_distance_attr() const
{
    return m_has_distance_attr;
}

void CT_Callout::set_distance_attr(const XSD::string_& _distance_attr)
{
    m_has_distance_attr = true;
    m_distance_attr = _distance_attr;
}

const XSD::string_& CT_Callout::get_distance_attr() const
{
    return m_distance_attr;
}

bool CT_Callout::has_lengthspecified_attr() const
{
    return m_has_lengthspecified_attr;
}

void CT_Callout::set_lengthspecified_attr(const ns_s::ST_TrueFalse& _lengthspecified_attr)
{
    m_has_lengthspecified_attr = true;
    m_lengthspecified_attr = new ns_s::ST_TrueFalse(_lengthspecified_attr);
}

const ns_s::ST_TrueFalse& CT_Callout::get_lengthspecified_attr() const
{
    if (m_lengthspecified_attr)
    {
        return *m_lengthspecified_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
}

bool CT_Callout::has_length_attr() const
{
    return m_has_length_attr;
}

void CT_Callout::set_length_attr(const XSD::string_& _length_attr)
{
    m_has_length_attr = true;
    m_length_attr = _length_attr;
}

const XSD::string_& CT_Callout::get_length_attr() const
{
    return m_length_attr;
}

bool CT_Callout::has_accentbar_attr() const
{
    return m_has_accentbar_attr;
}

void CT_Callout::set_accentbar_attr(const ns_s::ST_TrueFalse& _accentbar_attr)
{
    m_has_accentbar_attr = true;
    m_accentbar_attr = new ns_s::ST_TrueFalse(_accentbar_attr);
}

const ns_s::ST_TrueFalse& CT_Callout::get_accentbar_attr() const
{
    if (m_accentbar_attr)
    {
        return *m_accentbar_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
}

bool CT_Callout::has_textborder_attr() const
{
    return m_has_textborder_attr;
}

void CT_Callout::set_textborder_attr(const ns_s::ST_TrueFalse& _textborder_attr)
{
    m_has_textborder_attr = true;
    m_textborder_attr = new ns_s::ST_TrueFalse(_textborder_attr);
}

const ns_s::ST_TrueFalse& CT_Callout::get_textborder_attr() const
{
    if (m_textborder_attr)
    {
        return *m_textborder_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
}

bool CT_Callout::has_minusx_attr() const
{
    return m_has_minusx_attr;
}

void CT_Callout::set_minusx_attr(const ns_s::ST_TrueFalse& _minusx_attr)
{
    m_has_minusx_attr = true;
    m_minusx_attr = new ns_s::ST_TrueFalse(_minusx_attr);
}

const ns_s::ST_TrueFalse& CT_Callout::get_minusx_attr() const
{
    if (m_minusx_attr)
    {
        return *m_minusx_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
}

bool CT_Callout::has_minusy_attr() const
{
    return m_has_minusy_attr;
}

void CT_Callout::set_minusy_attr(const ns_s::ST_TrueFalse& _minusy_attr)
{
    m_has_minusy_attr = true;
    m_minusy_attr = new ns_s::ST_TrueFalse(_minusy_attr);
}

const ns_s::ST_TrueFalse& CT_Callout::get_minusy_attr() const
{
    if (m_minusy_attr)
    {
        return *m_minusy_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
}

CT_Callout* CT_Callout::default_instance_ = NULL;

// CT_Lock
CT_Lock::CT_Lock()
    :m_has_v_ext_attr(false),
     m_v_ext_attr(NULL),
     m_has_position_attr(false),
     m_position_attr(NULL),
     m_has_selection_attr(false),
     m_selection_attr(NULL),
     m_has_grouping_attr(false),
     m_grouping_attr(NULL),
     m_has_ungrouping_attr(false),
     m_ungrouping_attr(NULL),
     m_has_rotation_attr(false),
     m_rotation_attr(NULL),
     m_has_cropping_attr(false),
     m_cropping_attr(NULL),
     m_has_verticies_attr(false),
     m_verticies_attr(NULL),
     m_has_adjusthandles_attr(false),
     m_adjusthandles_attr(NULL),
     m_has_text_attr(false),
     m_text_attr(NULL),
     m_has_aspectratio_attr(false),
     m_aspectratio_attr(NULL),
     m_has_shapetype_attr(false),
     m_shapetype_attr(NULL)
{
}
CT_Lock::~CT_Lock()
{
    clear();
}
void CT_Lock::clear()
{
    m_has_v_ext_attr = false;

    if (m_v_ext_attr)
    {
        delete m_v_ext_attr;
        m_v_ext_attr = NULL;
    }


    m_has_position_attr = false;

    if (m_position_attr)
    {
        delete m_position_attr;
        m_position_attr = NULL;
    }


    m_has_selection_attr = false;

    if (m_selection_attr)
    {
        delete m_selection_attr;
        m_selection_attr = NULL;
    }


    m_has_grouping_attr = false;

    if (m_grouping_attr)
    {
        delete m_grouping_attr;
        m_grouping_attr = NULL;
    }


    m_has_ungrouping_attr = false;

    if (m_ungrouping_attr)
    {
        delete m_ungrouping_attr;
        m_ungrouping_attr = NULL;
    }


    m_has_rotation_attr = false;

    if (m_rotation_attr)
    {
        delete m_rotation_attr;
        m_rotation_attr = NULL;
    }


    m_has_cropping_attr = false;

    if (m_cropping_attr)
    {
        delete m_cropping_attr;
        m_cropping_attr = NULL;
    }


    m_has_verticies_attr = false;

    if (m_verticies_attr)
    {
        delete m_verticies_attr;
        m_verticies_attr = NULL;
    }


    m_has_adjusthandles_attr = false;

    if (m_adjusthandles_attr)
    {
        delete m_adjusthandles_attr;
        m_adjusthandles_attr = NULL;
    }


    m_has_text_attr = false;

    if (m_text_attr)
    {
        delete m_text_attr;
        m_text_attr = NULL;
    }


    m_has_aspectratio_attr = false;

    if (m_aspectratio_attr)
    {
        delete m_aspectratio_attr;
        m_aspectratio_attr = NULL;
    }


    m_has_shapetype_attr = false;

    if (m_shapetype_attr)
    {
        delete m_shapetype_attr;
        m_shapetype_attr = NULL;
    }

}

void CT_Lock::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_v_ext_attr)
    {
        m_v_ext_attr->toXmlAttr("v:ext", _outStream);
    }



    if (m_has_position_attr)
    {
        m_position_attr->toXmlAttr("position", _outStream);
    }



    if (m_has_selection_attr)
    {
        m_selection_attr->toXmlAttr("selection", _outStream);
    }



    if (m_has_grouping_attr)
    {
        m_grouping_attr->toXmlAttr("grouping", _outStream);
    }



    if (m_has_ungrouping_attr)
    {
        m_ungrouping_attr->toXmlAttr("ungrouping", _outStream);
    }



    if (m_has_rotation_attr)
    {
        m_rotation_attr->toXmlAttr("rotation", _outStream);
    }



    if (m_has_cropping_attr)
    {
        m_cropping_attr->toXmlAttr("cropping", _outStream);
    }



    if (m_has_verticies_attr)
    {
        m_verticies_attr->toXmlAttr("verticies", _outStream);
    }



    if (m_has_adjusthandles_attr)
    {
        m_adjusthandles_attr->toXmlAttr("adjusthandles", _outStream);
    }



    if (m_has_text_attr)
    {
        m_text_attr->toXmlAttr("text", _outStream);
    }



    if (m_has_aspectratio_attr)
    {
        m_aspectratio_attr->toXmlAttr("aspectratio", _outStream);
    }



    if (m_has_shapetype_attr)
    {
        m_shapetype_attr->toXmlAttr("shapetype", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_Lock& CT_Lock::default_instance()
{
    if (!CT_Lock::default_instance_)
    {
        CT_Lock::default_instance_ = new CT_Lock();
    }
    return *CT_Lock::default_instance_;
}

bool CT_Lock::has_v_ext_attr() const
{
    return m_has_v_ext_attr;
}

void CT_Lock::set_v_ext_attr(const ns_v::ST_Ext& _v_ext_attr)
{
    m_has_v_ext_attr = true;
    m_v_ext_attr = new ns_v::ST_Ext(_v_ext_attr);
}

const ns_v::ST_Ext& CT_Lock::get_v_ext_attr() const
{
    if (m_v_ext_attr)
    {
        return *m_v_ext_attr;
    }
    return ns_v::ST_Ext::default_instance();
}

bool CT_Lock::has_position_attr() const
{
    return m_has_position_attr;
}

void CT_Lock::set_position_attr(const ns_s::ST_TrueFalse& _position_attr)
{
    m_has_position_attr = true;
    m_position_attr = new ns_s::ST_TrueFalse(_position_attr);
}

const ns_s::ST_TrueFalse& CT_Lock::get_position_attr() const
{
    if (m_position_attr)
    {
        return *m_position_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
}

bool CT_Lock::has_selection_attr() const
{
    return m_has_selection_attr;
}

void CT_Lock::set_selection_attr(const ns_s::ST_TrueFalse& _selection_attr)
{
    m_has_selection_attr = true;
    m_selection_attr = new ns_s::ST_TrueFalse(_selection_attr);
}

const ns_s::ST_TrueFalse& CT_Lock::get_selection_attr() const
{
    if (m_selection_attr)
    {
        return *m_selection_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
}

bool CT_Lock::has_grouping_attr() const
{
    return m_has_grouping_attr;
}

void CT_Lock::set_grouping_attr(const ns_s::ST_TrueFalse& _grouping_attr)
{
    m_has_grouping_attr = true;
    m_grouping_attr = new ns_s::ST_TrueFalse(_grouping_attr);
}

const ns_s::ST_TrueFalse& CT_Lock::get_grouping_attr() const
{
    if (m_grouping_attr)
    {
        return *m_grouping_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
}

bool CT_Lock::has_ungrouping_attr() const
{
    return m_has_ungrouping_attr;
}

void CT_Lock::set_ungrouping_attr(const ns_s::ST_TrueFalse& _ungrouping_attr)
{
    m_has_ungrouping_attr = true;
    m_ungrouping_attr = new ns_s::ST_TrueFalse(_ungrouping_attr);
}

const ns_s::ST_TrueFalse& CT_Lock::get_ungrouping_attr() const
{
    if (m_ungrouping_attr)
    {
        return *m_ungrouping_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
}

bool CT_Lock::has_rotation_attr() const
{
    return m_has_rotation_attr;
}

void CT_Lock::set_rotation_attr(const ns_s::ST_TrueFalse& _rotation_attr)
{
    m_has_rotation_attr = true;
    m_rotation_attr = new ns_s::ST_TrueFalse(_rotation_attr);
}

const ns_s::ST_TrueFalse& CT_Lock::get_rotation_attr() const
{
    if (m_rotation_attr)
    {
        return *m_rotation_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
}

bool CT_Lock::has_cropping_attr() const
{
    return m_has_cropping_attr;
}

void CT_Lock::set_cropping_attr(const ns_s::ST_TrueFalse& _cropping_attr)
{
    m_has_cropping_attr = true;
    m_cropping_attr = new ns_s::ST_TrueFalse(_cropping_attr);
}

const ns_s::ST_TrueFalse& CT_Lock::get_cropping_attr() const
{
    if (m_cropping_attr)
    {
        return *m_cropping_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
}

bool CT_Lock::has_verticies_attr() const
{
    return m_has_verticies_attr;
}

void CT_Lock::set_verticies_attr(const ns_s::ST_TrueFalse& _verticies_attr)
{
    m_has_verticies_attr = true;
    m_verticies_attr = new ns_s::ST_TrueFalse(_verticies_attr);
}

const ns_s::ST_TrueFalse& CT_Lock::get_verticies_attr() const
{
    if (m_verticies_attr)
    {
        return *m_verticies_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
}

bool CT_Lock::has_adjusthandles_attr() const
{
    return m_has_adjusthandles_attr;
}

void CT_Lock::set_adjusthandles_attr(const ns_s::ST_TrueFalse& _adjusthandles_attr)
{
    m_has_adjusthandles_attr = true;
    m_adjusthandles_attr = new ns_s::ST_TrueFalse(_adjusthandles_attr);
}

const ns_s::ST_TrueFalse& CT_Lock::get_adjusthandles_attr() const
{
    if (m_adjusthandles_attr)
    {
        return *m_adjusthandles_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
}

bool CT_Lock::has_text_attr() const
{
    return m_has_text_attr;
}

void CT_Lock::set_text_attr(const ns_s::ST_TrueFalse& _text_attr)
{
    m_has_text_attr = true;
    m_text_attr = new ns_s::ST_TrueFalse(_text_attr);
}

const ns_s::ST_TrueFalse& CT_Lock::get_text_attr() const
{
    if (m_text_attr)
    {
        return *m_text_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
}

bool CT_Lock::has_aspectratio_attr() const
{
    return m_has_aspectratio_attr;
}

void CT_Lock::set_aspectratio_attr(const ns_s::ST_TrueFalse& _aspectratio_attr)
{
    m_has_aspectratio_attr = true;
    m_aspectratio_attr = new ns_s::ST_TrueFalse(_aspectratio_attr);
}

const ns_s::ST_TrueFalse& CT_Lock::get_aspectratio_attr() const
{
    if (m_aspectratio_attr)
    {
        return *m_aspectratio_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
}

bool CT_Lock::has_shapetype_attr() const
{
    return m_has_shapetype_attr;
}

void CT_Lock::set_shapetype_attr(const ns_s::ST_TrueFalse& _shapetype_attr)
{
    m_has_shapetype_attr = true;
    m_shapetype_attr = new ns_s::ST_TrueFalse(_shapetype_attr);
}

const ns_s::ST_TrueFalse& CT_Lock::get_shapetype_attr() const
{
    if (m_shapetype_attr)
    {
        return *m_shapetype_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
}

CT_Lock* CT_Lock::default_instance_ = NULL;

// CT_OLEObject
CT_OLEObject::CT_OLEObject()
    :m_has_LinkType(false),
     m_LinkType(NULL),
     m_has_LockedField(false),
     m_LockedField(NULL),
     m_has_FieldCodes(false),
     m_FieldCodes(""),
     m_has_Type_attr(false),
     m_Type_attr(NULL),
     m_has_ProgID_attr(false),
     m_ProgID_attr(""),
     m_has_ShapeID_attr(false),
     m_ShapeID_attr(""),
     m_has_DrawAspect_attr(false),
     m_DrawAspect_attr(NULL),
     m_has_ObjectID_attr(false),
     m_ObjectID_attr(""),
     m_has_r_id_attr(false),
     m_r_id_attr(NULL),
     m_has_UpdateMode_attr(false),
     m_UpdateMode_attr(NULL)
{
}
CT_OLEObject::~CT_OLEObject()
{
    clear();
}
bool CT_OLEObject::has_LinkType() const
{
    return m_has_LinkType;
}

ST_OLELinkType* CT_OLEObject::mutable_LinkType()
{
    m_has_LinkType = true;
    if (!m_LinkType)
    {
        m_LinkType = new ST_OLELinkType();
    }
    return m_LinkType;
}

const ST_OLELinkType& CT_OLEObject::get_LinkType() const
{
    if (m_LinkType)
    {
        return *m_LinkType;
    }
    return ST_OLELinkType::default_instance();
}

bool CT_OLEObject::has_LockedField() const
{
    return m_has_LockedField;
}

ns_s::ST_TrueFalseBlank* CT_OLEObject::mutable_LockedField()
{
    m_has_LockedField = true;
    if (!m_LockedField)
    {
        m_LockedField = new ns_s::ST_TrueFalseBlank();
    }
    return m_LockedField;
}

const ns_s::ST_TrueFalseBlank& CT_OLEObject::get_LockedField() const
{
    if (m_LockedField)
    {
        return *m_LockedField;
    }
    return ns_s::ST_TrueFalseBlank::default_instance();
}

bool CT_OLEObject::has_FieldCodes() const
{
    return m_has_FieldCodes;
}

void CT_OLEObject::set_FieldCodes(const XSD::string_& _FieldCodes)
{
    m_has_FieldCodes = true;
    m_FieldCodes = _FieldCodes;
}

const XSD::string_& CT_OLEObject::get_FieldCodes() const
{
    return m_FieldCodes;
}

void CT_OLEObject::clear()
{
    m_has_Type_attr = false;

    if (m_Type_attr)
    {
        delete m_Type_attr;
        m_Type_attr = NULL;
    }


    m_has_ProgID_attr = false;
    m_ProgID_attr.clear();

    m_has_ShapeID_attr = false;
    m_ShapeID_attr.clear();

    m_has_DrawAspect_attr = false;

    if (m_DrawAspect_attr)
    {
        delete m_DrawAspect_attr;
        m_DrawAspect_attr = NULL;
    }


    m_has_ObjectID_attr = false;
    m_ObjectID_attr.clear();

    m_has_r_id_attr = false;

    if (m_r_id_attr)
    {
        delete m_r_id_attr;
        m_r_id_attr = NULL;
    }


    m_has_UpdateMode_attr = false;

    if (m_UpdateMode_attr)
    {
        delete m_UpdateMode_attr;
        m_UpdateMode_attr = NULL;
    }


    m_has_LinkType = false;

    if (m_LinkType)
    {
        delete m_LinkType;
        m_LinkType = NULL;
    }


    m_has_LockedField = false;

    if (m_LockedField)
    {
        delete m_LockedField;
        m_LockedField = NULL;
    }


    m_has_FieldCodes = false;
    m_FieldCodes.clear();
}

void CT_OLEObject::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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



    if (m_has_ProgID_attr)
    {
        _outStream << " " << "ProgID" << "=\"" << m_ProgID_attr << "\"";
    }



    if (m_has_ShapeID_attr)
    {
        _outStream << " " << "ShapeID" << "=\"" << m_ShapeID_attr << "\"";
    }



    if (m_has_DrawAspect_attr)
    {
        m_DrawAspect_attr->toXmlAttr("DrawAspect", _outStream);
    }



    if (m_has_ObjectID_attr)
    {
        _outStream << " " << "ObjectID" << "=\"" << m_ObjectID_attr << "\"";
    }



    if (m_has_r_id_attr)
    {
        m_r_id_attr->toXmlAttr("r:id", _outStream);
    }



    if (m_has_UpdateMode_attr)
    {
        m_UpdateMode_attr->toXmlAttr("UpdateMode", _outStream);
    }

    _outStream << ">";


    if (m_has_LinkType)
    {
        _outStream << "<o:LinkType>" << m_LinkType->toString() << "</o:LinkType>";
    }


    if (m_has_LockedField)
    {
        _outStream << "<o:LockedField>" << m_LockedField->toString() << "</o:LockedField>";
    }


    if (m_has_FieldCodes)
    {
        _outStream << "<o:FieldCodes>" << m_FieldCodes << "</o:FieldCodes>";
    }

    _outStream << "</" << _elemName << ">";
}

const CT_OLEObject& CT_OLEObject::default_instance()
{
    if (!CT_OLEObject::default_instance_)
    {
        CT_OLEObject::default_instance_ = new CT_OLEObject();
    }
    return *CT_OLEObject::default_instance_;
}

bool CT_OLEObject::has_Type_attr() const
{
    return m_has_Type_attr;
}

void CT_OLEObject::set_Type_attr(const ST_OLEType& _Type_attr)
{
    m_has_Type_attr = true;
    m_Type_attr = new ST_OLEType(_Type_attr);
}

const ST_OLEType& CT_OLEObject::get_Type_attr() const
{
    if (m_Type_attr)
    {
        return *m_Type_attr;
    }
    return ST_OLEType::default_instance();
}

bool CT_OLEObject::has_ProgID_attr() const
{
    return m_has_ProgID_attr;
}

void CT_OLEObject::set_ProgID_attr(const XSD::string_& _ProgID_attr)
{
    m_has_ProgID_attr = true;
    m_ProgID_attr = _ProgID_attr;
}

const XSD::string_& CT_OLEObject::get_ProgID_attr() const
{
    return m_ProgID_attr;
}

bool CT_OLEObject::has_ShapeID_attr() const
{
    return m_has_ShapeID_attr;
}

void CT_OLEObject::set_ShapeID_attr(const XSD::string_& _ShapeID_attr)
{
    m_has_ShapeID_attr = true;
    m_ShapeID_attr = _ShapeID_attr;
}

const XSD::string_& CT_OLEObject::get_ShapeID_attr() const
{
    return m_ShapeID_attr;
}

bool CT_OLEObject::has_DrawAspect_attr() const
{
    return m_has_DrawAspect_attr;
}

void CT_OLEObject::set_DrawAspect_attr(const ST_OLEDrawAspect& _DrawAspect_attr)
{
    m_has_DrawAspect_attr = true;
    m_DrawAspect_attr = new ST_OLEDrawAspect(_DrawAspect_attr);
}

const ST_OLEDrawAspect& CT_OLEObject::get_DrawAspect_attr() const
{
    if (m_DrawAspect_attr)
    {
        return *m_DrawAspect_attr;
    }
    return ST_OLEDrawAspect::default_instance();
}

bool CT_OLEObject::has_ObjectID_attr() const
{
    return m_has_ObjectID_attr;
}

void CT_OLEObject::set_ObjectID_attr(const XSD::string_& _ObjectID_attr)
{
    m_has_ObjectID_attr = true;
    m_ObjectID_attr = _ObjectID_attr;
}

const XSD::string_& CT_OLEObject::get_ObjectID_attr() const
{
    return m_ObjectID_attr;
}

bool CT_OLEObject::has_r_id_attr() const
{
    return m_has_r_id_attr;
}

void CT_OLEObject::set_r_id_attr(const ns_r::ST_RelationshipId& _r_id_attr)
{
    m_has_r_id_attr = true;
    m_r_id_attr = new ns_r::ST_RelationshipId(_r_id_attr);
}

const ns_r::ST_RelationshipId& CT_OLEObject::get_r_id_attr() const
{
    if (m_r_id_attr)
    {
        return *m_r_id_attr;
    }
    return ns_r::ST_RelationshipId::default_instance();
}

bool CT_OLEObject::has_UpdateMode_attr() const
{
    return m_has_UpdateMode_attr;
}

void CT_OLEObject::set_UpdateMode_attr(const ST_OLEUpdateMode& _UpdateMode_attr)
{
    m_has_UpdateMode_attr = true;
    m_UpdateMode_attr = new ST_OLEUpdateMode(_UpdateMode_attr);
}

const ST_OLEUpdateMode& CT_OLEObject::get_UpdateMode_attr() const
{
    if (m_UpdateMode_attr)
    {
        return *m_UpdateMode_attr;
    }
    return ST_OLEUpdateMode::default_instance();
}

CT_OLEObject* CT_OLEObject::default_instance_ = NULL;

// CT_Complex
CT_Complex::CT_Complex()
    :m_has_v_ext_attr(false),
     m_v_ext_attr(NULL)
{
}
CT_Complex::~CT_Complex()
{
    clear();
}
void CT_Complex::clear()
{
    m_has_v_ext_attr = false;

    if (m_v_ext_attr)
    {
        delete m_v_ext_attr;
        m_v_ext_attr = NULL;
    }

}

void CT_Complex::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_v_ext_attr)
    {
        m_v_ext_attr->toXmlAttr("v:ext", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_Complex& CT_Complex::default_instance()
{
    if (!CT_Complex::default_instance_)
    {
        CT_Complex::default_instance_ = new CT_Complex();
    }
    return *CT_Complex::default_instance_;
}

bool CT_Complex::has_v_ext_attr() const
{
    return m_has_v_ext_attr;
}

void CT_Complex::set_v_ext_attr(const ns_v::ST_Ext& _v_ext_attr)
{
    m_has_v_ext_attr = true;
    m_v_ext_attr = new ns_v::ST_Ext(_v_ext_attr);
}

const ns_v::ST_Ext& CT_Complex::get_v_ext_attr() const
{
    if (m_v_ext_attr)
    {
        return *m_v_ext_attr;
    }
    return ns_v::ST_Ext::default_instance();
}

CT_Complex* CT_Complex::default_instance_ = NULL;

// CT_StrokeChild
CT_StrokeChild::CT_StrokeChild()
    :m_has_v_ext_attr(false),
     m_v_ext_attr(NULL),
     m_has_on_attr(false),
     m_on_attr(NULL),
     m_has_weight_attr(false),
     m_weight_attr(""),
     m_has_color_attr(false),
     m_color_attr(NULL),
     m_has_color2_attr(false),
     m_color2_attr(NULL),
     m_has_opacity_attr(false),
     m_opacity_attr(""),
     m_has_linestyle_attr(false),
     m_linestyle_attr(NULL),
     m_has_miterlimit_attr(false),
     m_miterlimit_attr(0),
     m_has_joinstyle_attr(false),
     m_joinstyle_attr(NULL),
     m_has_endcap_attr(false),
     m_endcap_attr(NULL),
     m_has_dashstyle_attr(false),
     m_dashstyle_attr(""),
     m_has_insetpen_attr(false),
     m_insetpen_attr(NULL),
     m_has_filltype_attr(false),
     m_filltype_attr(NULL),
     m_has_src_attr(false),
     m_src_attr(""),
     m_has_imageaspect_attr(false),
     m_imageaspect_attr(NULL),
     m_has_imagesize_attr(false),
     m_imagesize_attr(""),
     m_has_imagealignshape_attr(false),
     m_imagealignshape_attr(NULL),
     m_has_startarrow_attr(false),
     m_startarrow_attr(NULL),
     m_has_startarrowwidth_attr(false),
     m_startarrowwidth_attr(NULL),
     m_has_startarrowlength_attr(false),
     m_startarrowlength_attr(NULL),
     m_has_endarrow_attr(false),
     m_endarrow_attr(NULL),
     m_has_endarrowwidth_attr(false),
     m_endarrowwidth_attr(NULL),
     m_has_endarrowlength_attr(false),
     m_endarrowlength_attr(NULL),
     m_has_href_attr(false),
     m_href_attr(""),
     m_has_althref_attr(false),
     m_althref_attr(""),
     m_has_title_attr(false),
     m_title_attr(""),
     m_has_forcedash_attr(false),
     m_forcedash_attr(NULL)
{
}
CT_StrokeChild::~CT_StrokeChild()
{
    clear();
}
void CT_StrokeChild::clear()
{
    m_has_v_ext_attr = false;

    if (m_v_ext_attr)
    {
        delete m_v_ext_attr;
        m_v_ext_attr = NULL;
    }


    m_has_on_attr = false;

    if (m_on_attr)
    {
        delete m_on_attr;
        m_on_attr = NULL;
    }


    m_has_weight_attr = false;
    m_weight_attr.clear();

    m_has_color_attr = false;

    if (m_color_attr)
    {
        delete m_color_attr;
        m_color_attr = NULL;
    }


    m_has_color2_attr = false;

    if (m_color2_attr)
    {
        delete m_color2_attr;
        m_color2_attr = NULL;
    }


    m_has_opacity_attr = false;
    m_opacity_attr.clear();

    m_has_linestyle_attr = false;

    if (m_linestyle_attr)
    {
        delete m_linestyle_attr;
        m_linestyle_attr = NULL;
    }


    m_has_miterlimit_attr = false;
    m_miterlimit_attr = 0;

    m_has_joinstyle_attr = false;

    if (m_joinstyle_attr)
    {
        delete m_joinstyle_attr;
        m_joinstyle_attr = NULL;
    }


    m_has_endcap_attr = false;

    if (m_endcap_attr)
    {
        delete m_endcap_attr;
        m_endcap_attr = NULL;
    }


    m_has_dashstyle_attr = false;
    m_dashstyle_attr.clear();

    m_has_insetpen_attr = false;

    if (m_insetpen_attr)
    {
        delete m_insetpen_attr;
        m_insetpen_attr = NULL;
    }


    m_has_filltype_attr = false;

    if (m_filltype_attr)
    {
        delete m_filltype_attr;
        m_filltype_attr = NULL;
    }


    m_has_src_attr = false;
    m_src_attr.clear();

    m_has_imageaspect_attr = false;

    if (m_imageaspect_attr)
    {
        delete m_imageaspect_attr;
        m_imageaspect_attr = NULL;
    }


    m_has_imagesize_attr = false;
    m_imagesize_attr.clear();

    m_has_imagealignshape_attr = false;

    if (m_imagealignshape_attr)
    {
        delete m_imagealignshape_attr;
        m_imagealignshape_attr = NULL;
    }


    m_has_startarrow_attr = false;

    if (m_startarrow_attr)
    {
        delete m_startarrow_attr;
        m_startarrow_attr = NULL;
    }


    m_has_startarrowwidth_attr = false;

    if (m_startarrowwidth_attr)
    {
        delete m_startarrowwidth_attr;
        m_startarrowwidth_attr = NULL;
    }


    m_has_startarrowlength_attr = false;

    if (m_startarrowlength_attr)
    {
        delete m_startarrowlength_attr;
        m_startarrowlength_attr = NULL;
    }


    m_has_endarrow_attr = false;

    if (m_endarrow_attr)
    {
        delete m_endarrow_attr;
        m_endarrow_attr = NULL;
    }


    m_has_endarrowwidth_attr = false;

    if (m_endarrowwidth_attr)
    {
        delete m_endarrowwidth_attr;
        m_endarrowwidth_attr = NULL;
    }


    m_has_endarrowlength_attr = false;

    if (m_endarrowlength_attr)
    {
        delete m_endarrowlength_attr;
        m_endarrowlength_attr = NULL;
    }


    m_has_href_attr = false;
    m_href_attr.clear();

    m_has_althref_attr = false;
    m_althref_attr.clear();

    m_has_title_attr = false;
    m_title_attr.clear();

    m_has_forcedash_attr = false;

    if (m_forcedash_attr)
    {
        delete m_forcedash_attr;
        m_forcedash_attr = NULL;
    }

}

void CT_StrokeChild::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_v_ext_attr)
    {
        m_v_ext_attr->toXmlAttr("v:ext", _outStream);
    }



    if (m_has_on_attr)
    {
        m_on_attr->toXmlAttr("on", _outStream);
    }



    if (m_has_weight_attr)
    {
        _outStream << " " << "weight" << "=\"" << m_weight_attr << "\"";
    }



    if (m_has_color_attr)
    {
        m_color_attr->toXmlAttr("color", _outStream);
    }



    if (m_has_color2_attr)
    {
        m_color2_attr->toXmlAttr("color2", _outStream);
    }



    if (m_has_opacity_attr)
    {
        _outStream << " " << "opacity" << "=\"" << m_opacity_attr << "\"";
    }



    if (m_has_linestyle_attr)
    {
        m_linestyle_attr->toXmlAttr("linestyle", _outStream);
    }



    if (m_has_miterlimit_attr)
    {
        _outStream << " " << "miterlimit" << "=\"" << m_miterlimit_attr << "\"";
    }



    if (m_has_joinstyle_attr)
    {
        m_joinstyle_attr->toXmlAttr("joinstyle", _outStream);
    }



    if (m_has_endcap_attr)
    {
        m_endcap_attr->toXmlAttr("endcap", _outStream);
    }



    if (m_has_dashstyle_attr)
    {
        _outStream << " " << "dashstyle" << "=\"" << m_dashstyle_attr << "\"";
    }



    if (m_has_insetpen_attr)
    {
        m_insetpen_attr->toXmlAttr("insetpen", _outStream);
    }



    if (m_has_filltype_attr)
    {
        m_filltype_attr->toXmlAttr("filltype", _outStream);
    }



    if (m_has_src_attr)
    {
        _outStream << " " << "src" << "=\"" << m_src_attr << "\"";
    }



    if (m_has_imageaspect_attr)
    {
        m_imageaspect_attr->toXmlAttr("imageaspect", _outStream);
    }



    if (m_has_imagesize_attr)
    {
        _outStream << " " << "imagesize" << "=\"" << m_imagesize_attr << "\"";
    }



    if (m_has_imagealignshape_attr)
    {
        m_imagealignshape_attr->toXmlAttr("imagealignshape", _outStream);
    }



    if (m_has_startarrow_attr)
    {
        m_startarrow_attr->toXmlAttr("startarrow", _outStream);
    }



    if (m_has_startarrowwidth_attr)
    {
        m_startarrowwidth_attr->toXmlAttr("startarrowwidth", _outStream);
    }



    if (m_has_startarrowlength_attr)
    {
        m_startarrowlength_attr->toXmlAttr("startarrowlength", _outStream);
    }



    if (m_has_endarrow_attr)
    {
        m_endarrow_attr->toXmlAttr("endarrow", _outStream);
    }



    if (m_has_endarrowwidth_attr)
    {
        m_endarrowwidth_attr->toXmlAttr("endarrowwidth", _outStream);
    }



    if (m_has_endarrowlength_attr)
    {
        m_endarrowlength_attr->toXmlAttr("endarrowlength", _outStream);
    }



    if (m_has_href_attr)
    {
        _outStream << " " << "href" << "=\"" << m_href_attr << "\"";
    }



    if (m_has_althref_attr)
    {
        _outStream << " " << "althref" << "=\"" << m_althref_attr << "\"";
    }



    if (m_has_title_attr)
    {
        _outStream << " " << "title" << "=\"" << m_title_attr << "\"";
    }



    if (m_has_forcedash_attr)
    {
        m_forcedash_attr->toXmlAttr("forcedash", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_StrokeChild& CT_StrokeChild::default_instance()
{
    if (!CT_StrokeChild::default_instance_)
    {
        CT_StrokeChild::default_instance_ = new CT_StrokeChild();
    }
    return *CT_StrokeChild::default_instance_;
}

bool CT_StrokeChild::has_v_ext_attr() const
{
    return m_has_v_ext_attr;
}

void CT_StrokeChild::set_v_ext_attr(const ns_v::ST_Ext& _v_ext_attr)
{
    m_has_v_ext_attr = true;
    m_v_ext_attr = new ns_v::ST_Ext(_v_ext_attr);
}

const ns_v::ST_Ext& CT_StrokeChild::get_v_ext_attr() const
{
    if (m_v_ext_attr)
    {
        return *m_v_ext_attr;
    }
    return ns_v::ST_Ext::default_instance();
}

bool CT_StrokeChild::has_on_attr() const
{
    return m_has_on_attr;
}

void CT_StrokeChild::set_on_attr(const ns_s::ST_TrueFalse& _on_attr)
{
    m_has_on_attr = true;
    m_on_attr = new ns_s::ST_TrueFalse(_on_attr);
}

const ns_s::ST_TrueFalse& CT_StrokeChild::get_on_attr() const
{
    if (m_on_attr)
    {
        return *m_on_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
}

bool CT_StrokeChild::has_weight_attr() const
{
    return m_has_weight_attr;
}

void CT_StrokeChild::set_weight_attr(const XSD::string_& _weight_attr)
{
    m_has_weight_attr = true;
    m_weight_attr = _weight_attr;
}

const XSD::string_& CT_StrokeChild::get_weight_attr() const
{
    return m_weight_attr;
}

bool CT_StrokeChild::has_color_attr() const
{
    return m_has_color_attr;
}

void CT_StrokeChild::set_color_attr(const ns_s::ST_ColorType& _color_attr)
{
    m_has_color_attr = true;
    m_color_attr = new ns_s::ST_ColorType(_color_attr);
}

const ns_s::ST_ColorType& CT_StrokeChild::get_color_attr() const
{
    if (m_color_attr)
    {
        return *m_color_attr;
    }
    return ns_s::ST_ColorType::default_instance();
}

bool CT_StrokeChild::has_color2_attr() const
{
    return m_has_color2_attr;
}

void CT_StrokeChild::set_color2_attr(const ns_s::ST_ColorType& _color2_attr)
{
    m_has_color2_attr = true;
    m_color2_attr = new ns_s::ST_ColorType(_color2_attr);
}

const ns_s::ST_ColorType& CT_StrokeChild::get_color2_attr() const
{
    if (m_color2_attr)
    {
        return *m_color2_attr;
    }
    return ns_s::ST_ColorType::default_instance();
}

bool CT_StrokeChild::has_opacity_attr() const
{
    return m_has_opacity_attr;
}

void CT_StrokeChild::set_opacity_attr(const XSD::string_& _opacity_attr)
{
    m_has_opacity_attr = true;
    m_opacity_attr = _opacity_attr;
}

const XSD::string_& CT_StrokeChild::get_opacity_attr() const
{
    return m_opacity_attr;
}

bool CT_StrokeChild::has_linestyle_attr() const
{
    return m_has_linestyle_attr;
}

void CT_StrokeChild::set_linestyle_attr(const ns_v::ST_StrokeLineStyle& _linestyle_attr)
{
    m_has_linestyle_attr = true;
    m_linestyle_attr = new ns_v::ST_StrokeLineStyle(_linestyle_attr);
}

const ns_v::ST_StrokeLineStyle& CT_StrokeChild::get_linestyle_attr() const
{
    if (m_linestyle_attr)
    {
        return *m_linestyle_attr;
    }
    return ns_v::ST_StrokeLineStyle::default_instance();
}

bool CT_StrokeChild::has_miterlimit_attr() const
{
    return m_has_miterlimit_attr;
}

void CT_StrokeChild::set_miterlimit_attr(const XSD::decimal_& _miterlimit_attr)
{
    m_has_miterlimit_attr = true;
    m_miterlimit_attr = _miterlimit_attr;
}

const XSD::decimal_& CT_StrokeChild::get_miterlimit_attr() const
{
    return m_miterlimit_attr;
}

bool CT_StrokeChild::has_joinstyle_attr() const
{
    return m_has_joinstyle_attr;
}

void CT_StrokeChild::set_joinstyle_attr(const ns_v::ST_StrokeJoinStyle& _joinstyle_attr)
{
    m_has_joinstyle_attr = true;
    m_joinstyle_attr = new ns_v::ST_StrokeJoinStyle(_joinstyle_attr);
}

const ns_v::ST_StrokeJoinStyle& CT_StrokeChild::get_joinstyle_attr() const
{
    if (m_joinstyle_attr)
    {
        return *m_joinstyle_attr;
    }
    return ns_v::ST_StrokeJoinStyle::default_instance();
}

bool CT_StrokeChild::has_endcap_attr() const
{
    return m_has_endcap_attr;
}

void CT_StrokeChild::set_endcap_attr(const ns_v::ST_StrokeEndCap& _endcap_attr)
{
    m_has_endcap_attr = true;
    m_endcap_attr = new ns_v::ST_StrokeEndCap(_endcap_attr);
}

const ns_v::ST_StrokeEndCap& CT_StrokeChild::get_endcap_attr() const
{
    if (m_endcap_attr)
    {
        return *m_endcap_attr;
    }
    return ns_v::ST_StrokeEndCap::default_instance();
}

bool CT_StrokeChild::has_dashstyle_attr() const
{
    return m_has_dashstyle_attr;
}

void CT_StrokeChild::set_dashstyle_attr(const XSD::string_& _dashstyle_attr)
{
    m_has_dashstyle_attr = true;
    m_dashstyle_attr = _dashstyle_attr;
}

const XSD::string_& CT_StrokeChild::get_dashstyle_attr() const
{
    return m_dashstyle_attr;
}

bool CT_StrokeChild::has_insetpen_attr() const
{
    return m_has_insetpen_attr;
}

void CT_StrokeChild::set_insetpen_attr(const ns_s::ST_TrueFalse& _insetpen_attr)
{
    m_has_insetpen_attr = true;
    m_insetpen_attr = new ns_s::ST_TrueFalse(_insetpen_attr);
}

const ns_s::ST_TrueFalse& CT_StrokeChild::get_insetpen_attr() const
{
    if (m_insetpen_attr)
    {
        return *m_insetpen_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
}

bool CT_StrokeChild::has_filltype_attr() const
{
    return m_has_filltype_attr;
}

void CT_StrokeChild::set_filltype_attr(const ns_v::ST_FillType& _filltype_attr)
{
    m_has_filltype_attr = true;
    m_filltype_attr = new ns_v::ST_FillType(_filltype_attr);
}

const ns_v::ST_FillType& CT_StrokeChild::get_filltype_attr() const
{
    if (m_filltype_attr)
    {
        return *m_filltype_attr;
    }
    return ns_v::ST_FillType::default_instance();
}

bool CT_StrokeChild::has_src_attr() const
{
    return m_has_src_attr;
}

void CT_StrokeChild::set_src_attr(const XSD::string_& _src_attr)
{
    m_has_src_attr = true;
    m_src_attr = _src_attr;
}

const XSD::string_& CT_StrokeChild::get_src_attr() const
{
    return m_src_attr;
}

bool CT_StrokeChild::has_imageaspect_attr() const
{
    return m_has_imageaspect_attr;
}

void CT_StrokeChild::set_imageaspect_attr(const ns_v::ST_ImageAspect& _imageaspect_attr)
{
    m_has_imageaspect_attr = true;
    m_imageaspect_attr = new ns_v::ST_ImageAspect(_imageaspect_attr);
}

const ns_v::ST_ImageAspect& CT_StrokeChild::get_imageaspect_attr() const
{
    if (m_imageaspect_attr)
    {
        return *m_imageaspect_attr;
    }
    return ns_v::ST_ImageAspect::default_instance();
}

bool CT_StrokeChild::has_imagesize_attr() const
{
    return m_has_imagesize_attr;
}

void CT_StrokeChild::set_imagesize_attr(const XSD::string_& _imagesize_attr)
{
    m_has_imagesize_attr = true;
    m_imagesize_attr = _imagesize_attr;
}

const XSD::string_& CT_StrokeChild::get_imagesize_attr() const
{
    return m_imagesize_attr;
}

bool CT_StrokeChild::has_imagealignshape_attr() const
{
    return m_has_imagealignshape_attr;
}

void CT_StrokeChild::set_imagealignshape_attr(const ns_s::ST_TrueFalse& _imagealignshape_attr)
{
    m_has_imagealignshape_attr = true;
    m_imagealignshape_attr = new ns_s::ST_TrueFalse(_imagealignshape_attr);
}

const ns_s::ST_TrueFalse& CT_StrokeChild::get_imagealignshape_attr() const
{
    if (m_imagealignshape_attr)
    {
        return *m_imagealignshape_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
}

bool CT_StrokeChild::has_startarrow_attr() const
{
    return m_has_startarrow_attr;
}

void CT_StrokeChild::set_startarrow_attr(const ns_v::ST_StrokeArrowType& _startarrow_attr)
{
    m_has_startarrow_attr = true;
    m_startarrow_attr = new ns_v::ST_StrokeArrowType(_startarrow_attr);
}

const ns_v::ST_StrokeArrowType& CT_StrokeChild::get_startarrow_attr() const
{
    if (m_startarrow_attr)
    {
        return *m_startarrow_attr;
    }
    return ns_v::ST_StrokeArrowType::default_instance();
}

bool CT_StrokeChild::has_startarrowwidth_attr() const
{
    return m_has_startarrowwidth_attr;
}

void CT_StrokeChild::set_startarrowwidth_attr(const ns_v::ST_StrokeArrowWidth& _startarrowwidth_attr)
{
    m_has_startarrowwidth_attr = true;
    m_startarrowwidth_attr = new ns_v::ST_StrokeArrowWidth(_startarrowwidth_attr);
}

const ns_v::ST_StrokeArrowWidth& CT_StrokeChild::get_startarrowwidth_attr() const
{
    if (m_startarrowwidth_attr)
    {
        return *m_startarrowwidth_attr;
    }
    return ns_v::ST_StrokeArrowWidth::default_instance();
}

bool CT_StrokeChild::has_startarrowlength_attr() const
{
    return m_has_startarrowlength_attr;
}

void CT_StrokeChild::set_startarrowlength_attr(const ns_v::ST_StrokeArrowLength& _startarrowlength_attr)
{
    m_has_startarrowlength_attr = true;
    m_startarrowlength_attr = new ns_v::ST_StrokeArrowLength(_startarrowlength_attr);
}

const ns_v::ST_StrokeArrowLength& CT_StrokeChild::get_startarrowlength_attr() const
{
    if (m_startarrowlength_attr)
    {
        return *m_startarrowlength_attr;
    }
    return ns_v::ST_StrokeArrowLength::default_instance();
}

bool CT_StrokeChild::has_endarrow_attr() const
{
    return m_has_endarrow_attr;
}

void CT_StrokeChild::set_endarrow_attr(const ns_v::ST_StrokeArrowType& _endarrow_attr)
{
    m_has_endarrow_attr = true;
    m_endarrow_attr = new ns_v::ST_StrokeArrowType(_endarrow_attr);
}

const ns_v::ST_StrokeArrowType& CT_StrokeChild::get_endarrow_attr() const
{
    if (m_endarrow_attr)
    {
        return *m_endarrow_attr;
    }
    return ns_v::ST_StrokeArrowType::default_instance();
}

bool CT_StrokeChild::has_endarrowwidth_attr() const
{
    return m_has_endarrowwidth_attr;
}

void CT_StrokeChild::set_endarrowwidth_attr(const ns_v::ST_StrokeArrowWidth& _endarrowwidth_attr)
{
    m_has_endarrowwidth_attr = true;
    m_endarrowwidth_attr = new ns_v::ST_StrokeArrowWidth(_endarrowwidth_attr);
}

const ns_v::ST_StrokeArrowWidth& CT_StrokeChild::get_endarrowwidth_attr() const
{
    if (m_endarrowwidth_attr)
    {
        return *m_endarrowwidth_attr;
    }
    return ns_v::ST_StrokeArrowWidth::default_instance();
}

bool CT_StrokeChild::has_endarrowlength_attr() const
{
    return m_has_endarrowlength_attr;
}

void CT_StrokeChild::set_endarrowlength_attr(const ns_v::ST_StrokeArrowLength& _endarrowlength_attr)
{
    m_has_endarrowlength_attr = true;
    m_endarrowlength_attr = new ns_v::ST_StrokeArrowLength(_endarrowlength_attr);
}

const ns_v::ST_StrokeArrowLength& CT_StrokeChild::get_endarrowlength_attr() const
{
    if (m_endarrowlength_attr)
    {
        return *m_endarrowlength_attr;
    }
    return ns_v::ST_StrokeArrowLength::default_instance();
}

bool CT_StrokeChild::has_href_attr() const
{
    return m_has_href_attr;
}

void CT_StrokeChild::set_href_attr(const XSD::string_& _href_attr)
{
    m_has_href_attr = true;
    m_href_attr = _href_attr;
}

const XSD::string_& CT_StrokeChild::get_href_attr() const
{
    return m_href_attr;
}

bool CT_StrokeChild::has_althref_attr() const
{
    return m_has_althref_attr;
}

void CT_StrokeChild::set_althref_attr(const XSD::string_& _althref_attr)
{
    m_has_althref_attr = true;
    m_althref_attr = _althref_attr;
}

const XSD::string_& CT_StrokeChild::get_althref_attr() const
{
    return m_althref_attr;
}

bool CT_StrokeChild::has_title_attr() const
{
    return m_has_title_attr;
}

void CT_StrokeChild::set_title_attr(const XSD::string_& _title_attr)
{
    m_has_title_attr = true;
    m_title_attr = _title_attr;
}

const XSD::string_& CT_StrokeChild::get_title_attr() const
{
    return m_title_attr;
}

bool CT_StrokeChild::has_forcedash_attr() const
{
    return m_has_forcedash_attr;
}

void CT_StrokeChild::set_forcedash_attr(const ns_s::ST_TrueFalse& _forcedash_attr)
{
    m_has_forcedash_attr = true;
    m_forcedash_attr = new ns_s::ST_TrueFalse(_forcedash_attr);
}

const ns_s::ST_TrueFalse& CT_StrokeChild::get_forcedash_attr() const
{
    if (m_forcedash_attr)
    {
        return *m_forcedash_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
}

CT_StrokeChild* CT_StrokeChild::default_instance_ = NULL;

// CT_ClipPath
CT_ClipPath::CT_ClipPath()
    :m_has_v_attr(false),
     m_v_attr("")
{
}
CT_ClipPath::~CT_ClipPath()
{
    clear();
}
void CT_ClipPath::clear()
{
    m_has_v_attr = false;
    m_v_attr.clear();
}

void CT_ClipPath::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    assert(m_has_v_attr);
    if (m_has_v_attr)
    {
        _outStream << " " << "v" << "=\"" << m_v_attr << "\"";
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_ClipPath& CT_ClipPath::default_instance()
{
    if (!CT_ClipPath::default_instance_)
    {
        CT_ClipPath::default_instance_ = new CT_ClipPath();
    }
    return *CT_ClipPath::default_instance_;
}

bool CT_ClipPath::has_v_attr() const
{
    return m_has_v_attr;
}

void CT_ClipPath::set_v_attr(const XSD::string_& _v_attr)
{
    m_has_v_attr = true;
    m_v_attr = _v_attr;
}

const XSD::string_& CT_ClipPath::get_v_attr() const
{
    return m_v_attr;
}

CT_ClipPath* CT_ClipPath::default_instance_ = NULL;

// CT_Fill
CT_Fill::CT_Fill()
    :m_has_v_ext_attr(false),
     m_v_ext_attr(NULL),
     m_has_type_attr(false),
     m_type_attr(NULL)
{
}
CT_Fill::~CT_Fill()
{
    clear();
}
void CT_Fill::clear()
{
    m_has_v_ext_attr = false;

    if (m_v_ext_attr)
    {
        delete m_v_ext_attr;
        m_v_ext_attr = NULL;
    }


    m_has_type_attr = false;

    if (m_type_attr)
    {
        delete m_type_attr;
        m_type_attr = NULL;
    }

}

void CT_Fill::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_v_ext_attr)
    {
        m_v_ext_attr->toXmlAttr("v:ext", _outStream);
    }



    if (m_has_type_attr)
    {
        m_type_attr->toXmlAttr("type", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_Fill& CT_Fill::default_instance()
{
    if (!CT_Fill::default_instance_)
    {
        CT_Fill::default_instance_ = new CT_Fill();
    }
    return *CT_Fill::default_instance_;
}

bool CT_Fill::has_v_ext_attr() const
{
    return m_has_v_ext_attr;
}

void CT_Fill::set_v_ext_attr(const ns_v::ST_Ext& _v_ext_attr)
{
    m_has_v_ext_attr = true;
    m_v_ext_attr = new ns_v::ST_Ext(_v_ext_attr);
}

const ns_v::ST_Ext& CT_Fill::get_v_ext_attr() const
{
    if (m_v_ext_attr)
    {
        return *m_v_ext_attr;
    }
    return ns_v::ST_Ext::default_instance();
}

bool CT_Fill::has_type_attr() const
{
    return m_has_type_attr;
}

void CT_Fill::set_type_attr(const ST_FillType& _type_attr)
{
    m_has_type_attr = true;
    m_type_attr = new ST_FillType(_type_attr);
}

const ST_FillType& CT_Fill::get_type_attr() const
{
    if (m_type_attr)
    {
        return *m_type_attr;
    }
    return ST_FillType::default_instance();
}

CT_Fill* CT_Fill::default_instance_ = NULL;

// shapedefaults_element
shapedefaults_element::shapedefaults_element()
    :m_has_v_fill(false),
     m_v_fill(NULL),
     m_has_v_stroke(false),
     m_v_stroke(NULL),
     m_has_v_textbox(false),
     m_v_textbox(NULL),
     m_has_v_shadow(false),
     m_v_shadow(NULL),
     m_has_skew(false),
     m_skew(NULL),
     m_has_extrusion(false),
     m_extrusion(NULL),
     m_has_callout(false),
     m_callout(NULL),
     m_has_lock(false),
     m_lock(NULL),
     m_has_colormru(false),
     m_colormru(NULL),
     m_has_colormenu(false),
     m_colormenu(NULL),
     m_has_v_ext_attr(false),
     m_v_ext_attr(NULL),
     m_has_spidmax_attr(false),
     m_spidmax_attr(0),
     m_has_style_attr(false),
     m_style_attr(""),
     m_has_fill_attr(false),
     m_fill_attr(NULL),
     m_has_fillcolor_attr(false),
     m_fillcolor_attr(NULL),
     m_has_stroke_attr(false),
     m_stroke_attr(NULL),
     m_has_strokecolor_attr(false),
     m_strokecolor_attr(NULL),
     m_has_allowincell_attr(false),
     m_allowincell_attr(NULL)
{
}
shapedefaults_element::~shapedefaults_element()
{
    clear();
}
bool shapedefaults_element::has_v_fill() const
{
    return m_has_v_fill;
}

ns_v::CT_Fill* shapedefaults_element::mutable_v_fill()
{
    m_has_v_fill = true;
    if (!m_v_fill)
    {
        m_v_fill = new ns_v::CT_Fill();
    }
    return m_v_fill;
}

const ns_v::CT_Fill& shapedefaults_element::get_v_fill() const
{
    if (m_v_fill)
    {
        return *m_v_fill;
    }
    return ns_v::CT_Fill::default_instance();
}

bool shapedefaults_element::has_v_stroke() const
{
    return m_has_v_stroke;
}

ns_v::CT_Stroke* shapedefaults_element::mutable_v_stroke()
{
    m_has_v_stroke = true;
    if (!m_v_stroke)
    {
        m_v_stroke = new ns_v::CT_Stroke();
    }
    return m_v_stroke;
}

const ns_v::CT_Stroke& shapedefaults_element::get_v_stroke() const
{
    if (m_v_stroke)
    {
        return *m_v_stroke;
    }
    return ns_v::CT_Stroke::default_instance();
}

bool shapedefaults_element::has_v_textbox() const
{
    return m_has_v_textbox;
}

ns_v::CT_Textbox* shapedefaults_element::mutable_v_textbox()
{
    m_has_v_textbox = true;
    if (!m_v_textbox)
    {
        m_v_textbox = new ns_v::CT_Textbox();
    }
    return m_v_textbox;
}

const ns_v::CT_Textbox& shapedefaults_element::get_v_textbox() const
{
    if (m_v_textbox)
    {
        return *m_v_textbox;
    }
    return ns_v::CT_Textbox::default_instance();
}

bool shapedefaults_element::has_v_shadow() const
{
    return m_has_v_shadow;
}

ns_v::CT_Shadow* shapedefaults_element::mutable_v_shadow()
{
    m_has_v_shadow = true;
    if (!m_v_shadow)
    {
        m_v_shadow = new ns_v::CT_Shadow();
    }
    return m_v_shadow;
}

const ns_v::CT_Shadow& shapedefaults_element::get_v_shadow() const
{
    if (m_v_shadow)
    {
        return *m_v_shadow;
    }
    return ns_v::CT_Shadow::default_instance();
}

bool shapedefaults_element::has_skew() const
{
    return m_has_skew;
}

CT_Skew* shapedefaults_element::mutable_skew()
{
    m_has_skew = true;
    if (!m_skew)
    {
        m_skew = new CT_Skew();
    }
    return m_skew;
}

const CT_Skew& shapedefaults_element::get_skew() const
{
    if (m_skew)
    {
        return *m_skew;
    }
    return CT_Skew::default_instance();
}

bool shapedefaults_element::has_extrusion() const
{
    return m_has_extrusion;
}

CT_Extrusion* shapedefaults_element::mutable_extrusion()
{
    m_has_extrusion = true;
    if (!m_extrusion)
    {
        m_extrusion = new CT_Extrusion();
    }
    return m_extrusion;
}

const CT_Extrusion& shapedefaults_element::get_extrusion() const
{
    if (m_extrusion)
    {
        return *m_extrusion;
    }
    return CT_Extrusion::default_instance();
}

bool shapedefaults_element::has_callout() const
{
    return m_has_callout;
}

CT_Callout* shapedefaults_element::mutable_callout()
{
    m_has_callout = true;
    if (!m_callout)
    {
        m_callout = new CT_Callout();
    }
    return m_callout;
}

const CT_Callout& shapedefaults_element::get_callout() const
{
    if (m_callout)
    {
        return *m_callout;
    }
    return CT_Callout::default_instance();
}

bool shapedefaults_element::has_lock() const
{
    return m_has_lock;
}

CT_Lock* shapedefaults_element::mutable_lock()
{
    m_has_lock = true;
    if (!m_lock)
    {
        m_lock = new CT_Lock();
    }
    return m_lock;
}

const CT_Lock& shapedefaults_element::get_lock() const
{
    if (m_lock)
    {
        return *m_lock;
    }
    return CT_Lock::default_instance();
}

bool shapedefaults_element::has_colormru() const
{
    return m_has_colormru;
}

CT_ColorMru* shapedefaults_element::mutable_colormru()
{
    m_has_colormru = true;
    if (!m_colormru)
    {
        m_colormru = new CT_ColorMru();
    }
    return m_colormru;
}

const CT_ColorMru& shapedefaults_element::get_colormru() const
{
    if (m_colormru)
    {
        return *m_colormru;
    }
    return CT_ColorMru::default_instance();
}

bool shapedefaults_element::has_colormenu() const
{
    return m_has_colormenu;
}

CT_ColorMenu* shapedefaults_element::mutable_colormenu()
{
    m_has_colormenu = true;
    if (!m_colormenu)
    {
        m_colormenu = new CT_ColorMenu();
    }
    return m_colormenu;
}

const CT_ColorMenu& shapedefaults_element::get_colormenu() const
{
    if (m_colormenu)
    {
        return *m_colormenu;
    }
    return CT_ColorMenu::default_instance();
}

void shapedefaults_element::clear()
{
    m_has_v_ext_attr = false;

    if (m_v_ext_attr)
    {
        delete m_v_ext_attr;
        m_v_ext_attr = NULL;
    }


    m_has_spidmax_attr = false;
    m_spidmax_attr = 0;

    m_has_style_attr = false;
    m_style_attr.clear();

    m_has_fill_attr = false;

    if (m_fill_attr)
    {
        delete m_fill_attr;
        m_fill_attr = NULL;
    }


    m_has_fillcolor_attr = false;

    if (m_fillcolor_attr)
    {
        delete m_fillcolor_attr;
        m_fillcolor_attr = NULL;
    }


    m_has_stroke_attr = false;

    if (m_stroke_attr)
    {
        delete m_stroke_attr;
        m_stroke_attr = NULL;
    }


    m_has_strokecolor_attr = false;

    if (m_strokecolor_attr)
    {
        delete m_strokecolor_attr;
        m_strokecolor_attr = NULL;
    }


    m_has_allowincell_attr = false;

    if (m_allowincell_attr)
    {
        delete m_allowincell_attr;
        m_allowincell_attr = NULL;
    }


    m_has_v_fill = false;

    if (m_v_fill)
    {
        delete m_v_fill;
        m_v_fill = NULL;
    }


    m_has_v_stroke = false;

    if (m_v_stroke)
    {
        delete m_v_stroke;
        m_v_stroke = NULL;
    }


    m_has_v_textbox = false;

    if (m_v_textbox)
    {
        delete m_v_textbox;
        m_v_textbox = NULL;
    }


    m_has_v_shadow = false;

    if (m_v_shadow)
    {
        delete m_v_shadow;
        m_v_shadow = NULL;
    }


    m_has_skew = false;

    if (m_skew)
    {
        delete m_skew;
        m_skew = NULL;
    }


    m_has_extrusion = false;

    if (m_extrusion)
    {
        delete m_extrusion;
        m_extrusion = NULL;
    }


    m_has_callout = false;

    if (m_callout)
    {
        delete m_callout;
        m_callout = NULL;
    }


    m_has_lock = false;

    if (m_lock)
    {
        delete m_lock;
        m_lock = NULL;
    }


    m_has_colormru = false;

    if (m_colormru)
    {
        delete m_colormru;
        m_colormru = NULL;
    }


    m_has_colormenu = false;

    if (m_colormenu)
    {
        delete m_colormenu;
        m_colormenu = NULL;
    }

}

void shapedefaults_element::toXml(std::ostream& _outStream) const
{
    _outStream << "<o:shapedefaults";

    _outStream << " " << "xmlns:o=\"urn:schemas-microsoft-com:office:office\"";
    _outStream << " " << "xmlns:o=\"urn:schemas-microsoft-com:vml\"";
    _outStream << " " << "xmlns:o=\"http://schemas.openxmlformats.org/officeDocument/2006/sharedTypes\"";
    _outStream << " " << "xmlns:o=\"http://schemas.openxmlformats.org/officeDocument/2006/relationships\"";


    if (m_has_v_ext_attr)
    {
        m_v_ext_attr->toXmlAttr("v:ext", _outStream);
    }



    if (m_has_spidmax_attr)
    {
        _outStream << " " << "spidmax" << "=\"" << m_spidmax_attr << "\"";
    }



    if (m_has_style_attr)
    {
        _outStream << " " << "style" << "=\"" << m_style_attr << "\"";
    }



    if (m_has_fill_attr)
    {
        m_fill_attr->toXmlAttr("fill", _outStream);
    }



    if (m_has_fillcolor_attr)
    {
        m_fillcolor_attr->toXmlAttr("fillcolor", _outStream);
    }



    if (m_has_stroke_attr)
    {
        m_stroke_attr->toXmlAttr("stroke", _outStream);
    }



    if (m_has_strokecolor_attr)
    {
        m_strokecolor_attr->toXmlAttr("strokecolor", _outStream);
    }



    if (m_has_allowincell_attr)
    {
        m_allowincell_attr->toXmlAttr("allowincell", _outStream);
    }

    _outStream << ">";


    if (m_has_v_fill)
    {
        m_v_fill->toXmlElem("v:fill", "", _outStream);
    }


    if (m_has_v_stroke)
    {
        m_v_stroke->toXmlElem("v:stroke", "", _outStream);
    }


    if (m_has_v_textbox)
    {
        m_v_textbox->toXmlElem("v:textbox", "", _outStream);
    }


    if (m_has_v_shadow)
    {
        m_v_shadow->toXmlElem("v:shadow", "", _outStream);
    }


    if (m_has_skew)
    {
        m_skew->toXmlElem("o:skew", "", _outStream);
    }


    if (m_has_extrusion)
    {
        m_extrusion->toXmlElem("o:extrusion", "", _outStream);
    }


    if (m_has_callout)
    {
        m_callout->toXmlElem("o:callout", "", _outStream);
    }


    if (m_has_lock)
    {
        m_lock->toXmlElem("o:lock", "", _outStream);
    }


    if (m_has_colormru)
    {
        m_colormru->toXmlElem("o:colormru", "", _outStream);
    }


    if (m_has_colormenu)
    {
        m_colormenu->toXmlElem("o:colormenu", "", _outStream);
    }

    _outStream << "</o:shapedefaults>";
}

const shapedefaults_element& shapedefaults_element::default_instance()
{
    if (!shapedefaults_element::default_instance_)
    {
        shapedefaults_element::default_instance_ = new shapedefaults_element();
    }
    return *shapedefaults_element::default_instance_;
}

bool shapedefaults_element::has_v_ext_attr() const
{
    return m_has_v_ext_attr;
}

void shapedefaults_element::set_v_ext_attr(const ns_v::ST_Ext& _v_ext_attr)
{
    m_has_v_ext_attr = true;
    m_v_ext_attr = new ns_v::ST_Ext(_v_ext_attr);
}

const ns_v::ST_Ext& shapedefaults_element::get_v_ext_attr() const
{
    if (m_v_ext_attr)
    {
        return *m_v_ext_attr;
    }
    return ns_v::ST_Ext::default_instance();
}

bool shapedefaults_element::has_spidmax_attr() const
{
    return m_has_spidmax_attr;
}

void shapedefaults_element::set_spidmax_attr(const XSD::integer_& _spidmax_attr)
{
    m_has_spidmax_attr = true;
    m_spidmax_attr = _spidmax_attr;
}

const XSD::integer_& shapedefaults_element::get_spidmax_attr() const
{
    return m_spidmax_attr;
}

bool shapedefaults_element::has_style_attr() const
{
    return m_has_style_attr;
}

void shapedefaults_element::set_style_attr(const XSD::string_& _style_attr)
{
    m_has_style_attr = true;
    m_style_attr = _style_attr;
}

const XSD::string_& shapedefaults_element::get_style_attr() const
{
    return m_style_attr;
}

bool shapedefaults_element::has_fill_attr() const
{
    return m_has_fill_attr;
}

void shapedefaults_element::set_fill_attr(const ns_s::ST_TrueFalse& _fill_attr)
{
    m_has_fill_attr = true;
    m_fill_attr = new ns_s::ST_TrueFalse(_fill_attr);
}

const ns_s::ST_TrueFalse& shapedefaults_element::get_fill_attr() const
{
    if (m_fill_attr)
    {
        return *m_fill_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
}

bool shapedefaults_element::has_fillcolor_attr() const
{
    return m_has_fillcolor_attr;
}

void shapedefaults_element::set_fillcolor_attr(const ns_s::ST_ColorType& _fillcolor_attr)
{
    m_has_fillcolor_attr = true;
    m_fillcolor_attr = new ns_s::ST_ColorType(_fillcolor_attr);
}

const ns_s::ST_ColorType& shapedefaults_element::get_fillcolor_attr() const
{
    if (m_fillcolor_attr)
    {
        return *m_fillcolor_attr;
    }
    return ns_s::ST_ColorType::default_instance();
}

bool shapedefaults_element::has_stroke_attr() const
{
    return m_has_stroke_attr;
}

void shapedefaults_element::set_stroke_attr(const ns_s::ST_TrueFalse& _stroke_attr)
{
    m_has_stroke_attr = true;
    m_stroke_attr = new ns_s::ST_TrueFalse(_stroke_attr);
}

const ns_s::ST_TrueFalse& shapedefaults_element::get_stroke_attr() const
{
    if (m_stroke_attr)
    {
        return *m_stroke_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
}

bool shapedefaults_element::has_strokecolor_attr() const
{
    return m_has_strokecolor_attr;
}

void shapedefaults_element::set_strokecolor_attr(const ns_s::ST_ColorType& _strokecolor_attr)
{
    m_has_strokecolor_attr = true;
    m_strokecolor_attr = new ns_s::ST_ColorType(_strokecolor_attr);
}

const ns_s::ST_ColorType& shapedefaults_element::get_strokecolor_attr() const
{
    if (m_strokecolor_attr)
    {
        return *m_strokecolor_attr;
    }
    return ns_s::ST_ColorType::default_instance();
}

bool shapedefaults_element::has_allowincell_attr() const
{
    return m_has_allowincell_attr;
}

void shapedefaults_element::set_allowincell_attr(const ns_s::ST_TrueFalse& _allowincell_attr)
{
    m_has_allowincell_attr = true;
    m_allowincell_attr = new ns_s::ST_TrueFalse(_allowincell_attr);
}

const ns_s::ST_TrueFalse& shapedefaults_element::get_allowincell_attr() const
{
    if (m_allowincell_attr)
    {
        return *m_allowincell_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
}

shapedefaults_element* shapedefaults_element::default_instance_ = NULL;

// shapelayout_element
shapelayout_element::shapelayout_element()
    :m_has_idmap(false),
     m_idmap(NULL),
     m_has_regrouptable(false),
     m_regrouptable(NULL),
     m_has_rules(false),
     m_rules(NULL),
     m_has_v_ext_attr(false),
     m_v_ext_attr(NULL)
{
}
shapelayout_element::~shapelayout_element()
{
    clear();
}
bool shapelayout_element::has_idmap() const
{
    return m_has_idmap;
}

CT_IdMap* shapelayout_element::mutable_idmap()
{
    m_has_idmap = true;
    if (!m_idmap)
    {
        m_idmap = new CT_IdMap();
    }
    return m_idmap;
}

const CT_IdMap& shapelayout_element::get_idmap() const
{
    if (m_idmap)
    {
        return *m_idmap;
    }
    return CT_IdMap::default_instance();
}

bool shapelayout_element::has_regrouptable() const
{
    return m_has_regrouptable;
}

CT_RegroupTable* shapelayout_element::mutable_regrouptable()
{
    m_has_regrouptable = true;
    if (!m_regrouptable)
    {
        m_regrouptable = new CT_RegroupTable();
    }
    return m_regrouptable;
}

const CT_RegroupTable& shapelayout_element::get_regrouptable() const
{
    if (m_regrouptable)
    {
        return *m_regrouptable;
    }
    return CT_RegroupTable::default_instance();
}

bool shapelayout_element::has_rules() const
{
    return m_has_rules;
}

CT_Rules* shapelayout_element::mutable_rules()
{
    m_has_rules = true;
    if (!m_rules)
    {
        m_rules = new CT_Rules();
    }
    return m_rules;
}

const CT_Rules& shapelayout_element::get_rules() const
{
    if (m_rules)
    {
        return *m_rules;
    }
    return CT_Rules::default_instance();
}

void shapelayout_element::clear()
{
    m_has_v_ext_attr = false;

    if (m_v_ext_attr)
    {
        delete m_v_ext_attr;
        m_v_ext_attr = NULL;
    }


    m_has_idmap = false;

    if (m_idmap)
    {
        delete m_idmap;
        m_idmap = NULL;
    }


    m_has_regrouptable = false;

    if (m_regrouptable)
    {
        delete m_regrouptable;
        m_regrouptable = NULL;
    }


    m_has_rules = false;

    if (m_rules)
    {
        delete m_rules;
        m_rules = NULL;
    }

}

void shapelayout_element::toXml(std::ostream& _outStream) const
{
    _outStream << "<o:shapelayout";

    _outStream << " " << "xmlns:o=\"urn:schemas-microsoft-com:office:office\"";
    _outStream << " " << "xmlns:o=\"urn:schemas-microsoft-com:vml\"";
    _outStream << " " << "xmlns:o=\"http://schemas.openxmlformats.org/officeDocument/2006/sharedTypes\"";
    _outStream << " " << "xmlns:o=\"http://schemas.openxmlformats.org/officeDocument/2006/relationships\"";


    if (m_has_v_ext_attr)
    {
        m_v_ext_attr->toXmlAttr("v:ext", _outStream);
    }

    _outStream << ">";


    if (m_has_idmap)
    {
        m_idmap->toXmlElem("o:idmap", "", _outStream);
    }


    if (m_has_regrouptable)
    {
        m_regrouptable->toXmlElem("o:regrouptable", "", _outStream);
    }


    if (m_has_rules)
    {
        m_rules->toXmlElem("o:rules", "", _outStream);
    }

    _outStream << "</o:shapelayout>";
}

const shapelayout_element& shapelayout_element::default_instance()
{
    if (!shapelayout_element::default_instance_)
    {
        shapelayout_element::default_instance_ = new shapelayout_element();
    }
    return *shapelayout_element::default_instance_;
}

bool shapelayout_element::has_v_ext_attr() const
{
    return m_has_v_ext_attr;
}

void shapelayout_element::set_v_ext_attr(const ns_v::ST_Ext& _v_ext_attr)
{
    m_has_v_ext_attr = true;
    m_v_ext_attr = new ns_v::ST_Ext(_v_ext_attr);
}

const ns_v::ST_Ext& shapelayout_element::get_v_ext_attr() const
{
    if (m_v_ext_attr)
    {
        return *m_v_ext_attr;
    }
    return ns_v::ST_Ext::default_instance();
}

shapelayout_element* shapelayout_element::default_instance_ = NULL;

// signatureline_element
signatureline_element::signatureline_element()
    :m_has_v_ext_attr(false),
     m_v_ext_attr(NULL),
     m_has_issignatureline_attr(false),
     m_issignatureline_attr(NULL),
     m_has_id_attr(false),
     m_id_attr(NULL),
     m_has_provid_attr(false),
     m_provid_attr(NULL),
     m_has_signinginstructionsset_attr(false),
     m_signinginstructionsset_attr(NULL),
     m_has_allowcomments_attr(false),
     m_allowcomments_attr(NULL),
     m_has_showsigndate_attr(false),
     m_showsigndate_attr(NULL),
     m_has_suggestedsigner_attr(false),
     m_suggestedsigner_attr(""),
     m_has_suggestedsigner2_attr(false),
     m_suggestedsigner2_attr(""),
     m_has_suggestedsigneremail_attr(false),
     m_suggestedsigneremail_attr(""),
     m_has_signinginstructions_attr(false),
     m_signinginstructions_attr(""),
     m_has_addlxml_attr(false),
     m_addlxml_attr(""),
     m_has_sigprovurl_attr(false),
     m_sigprovurl_attr("")
{
}
signatureline_element::~signatureline_element()
{
    clear();
}
void signatureline_element::clear()
{
    m_has_v_ext_attr = false;

    if (m_v_ext_attr)
    {
        delete m_v_ext_attr;
        m_v_ext_attr = NULL;
    }


    m_has_issignatureline_attr = false;

    if (m_issignatureline_attr)
    {
        delete m_issignatureline_attr;
        m_issignatureline_attr = NULL;
    }


    m_has_id_attr = false;

    if (m_id_attr)
    {
        delete m_id_attr;
        m_id_attr = NULL;
    }


    m_has_provid_attr = false;

    if (m_provid_attr)
    {
        delete m_provid_attr;
        m_provid_attr = NULL;
    }


    m_has_signinginstructionsset_attr = false;

    if (m_signinginstructionsset_attr)
    {
        delete m_signinginstructionsset_attr;
        m_signinginstructionsset_attr = NULL;
    }


    m_has_allowcomments_attr = false;

    if (m_allowcomments_attr)
    {
        delete m_allowcomments_attr;
        m_allowcomments_attr = NULL;
    }


    m_has_showsigndate_attr = false;

    if (m_showsigndate_attr)
    {
        delete m_showsigndate_attr;
        m_showsigndate_attr = NULL;
    }


    m_has_suggestedsigner_attr = false;
    m_suggestedsigner_attr.clear();

    m_has_suggestedsigner2_attr = false;
    m_suggestedsigner2_attr.clear();

    m_has_suggestedsigneremail_attr = false;
    m_suggestedsigneremail_attr.clear();

    m_has_signinginstructions_attr = false;
    m_signinginstructions_attr.clear();

    m_has_addlxml_attr = false;
    m_addlxml_attr.clear();

    m_has_sigprovurl_attr = false;
    m_sigprovurl_attr.clear();
}

void signatureline_element::toXml(std::ostream& _outStream) const
{
    _outStream << "<o:signatureline";

    _outStream << " " << "xmlns:o=\"urn:schemas-microsoft-com:office:office\"";
    _outStream << " " << "xmlns:o=\"urn:schemas-microsoft-com:vml\"";
    _outStream << " " << "xmlns:o=\"http://schemas.openxmlformats.org/officeDocument/2006/sharedTypes\"";
    _outStream << " " << "xmlns:o=\"http://schemas.openxmlformats.org/officeDocument/2006/relationships\"";


    if (m_has_v_ext_attr)
    {
        m_v_ext_attr->toXmlAttr("v:ext", _outStream);
    }



    if (m_has_issignatureline_attr)
    {
        m_issignatureline_attr->toXmlAttr("issignatureline", _outStream);
    }



    if (m_has_id_attr)
    {
        m_id_attr->toXmlAttr("id", _outStream);
    }



    if (m_has_provid_attr)
    {
        m_provid_attr->toXmlAttr("provid", _outStream);
    }



    if (m_has_signinginstructionsset_attr)
    {
        m_signinginstructionsset_attr->toXmlAttr("signinginstructionsset", _outStream);
    }



    if (m_has_allowcomments_attr)
    {
        m_allowcomments_attr->toXmlAttr("allowcomments", _outStream);
    }



    if (m_has_showsigndate_attr)
    {
        m_showsigndate_attr->toXmlAttr("showsigndate", _outStream);
    }



    if (m_has_suggestedsigner_attr)
    {
        _outStream << " " << "suggestedsigner" << "=\"" << m_suggestedsigner_attr << "\"";
    }



    if (m_has_suggestedsigner2_attr)
    {
        _outStream << " " << "suggestedsigner2" << "=\"" << m_suggestedsigner2_attr << "\"";
    }



    if (m_has_suggestedsigneremail_attr)
    {
        _outStream << " " << "suggestedsigneremail" << "=\"" << m_suggestedsigneremail_attr << "\"";
    }



    if (m_has_signinginstructions_attr)
    {
        _outStream << " " << "signinginstructions" << "=\"" << m_signinginstructions_attr << "\"";
    }



    if (m_has_addlxml_attr)
    {
        _outStream << " " << "addlxml" << "=\"" << m_addlxml_attr << "\"";
    }



    if (m_has_sigprovurl_attr)
    {
        _outStream << " " << "sigprovurl" << "=\"" << m_sigprovurl_attr << "\"";
    }

    _outStream << ">";

    _outStream << "</o:signatureline>";
}

const signatureline_element& signatureline_element::default_instance()
{
    if (!signatureline_element::default_instance_)
    {
        signatureline_element::default_instance_ = new signatureline_element();
    }
    return *signatureline_element::default_instance_;
}

bool signatureline_element::has_v_ext_attr() const
{
    return m_has_v_ext_attr;
}

void signatureline_element::set_v_ext_attr(const ns_v::ST_Ext& _v_ext_attr)
{
    m_has_v_ext_attr = true;
    m_v_ext_attr = new ns_v::ST_Ext(_v_ext_attr);
}

const ns_v::ST_Ext& signatureline_element::get_v_ext_attr() const
{
    if (m_v_ext_attr)
    {
        return *m_v_ext_attr;
    }
    return ns_v::ST_Ext::default_instance();
}

bool signatureline_element::has_issignatureline_attr() const
{
    return m_has_issignatureline_attr;
}

void signatureline_element::set_issignatureline_attr(const ns_s::ST_TrueFalse& _issignatureline_attr)
{
    m_has_issignatureline_attr = true;
    m_issignatureline_attr = new ns_s::ST_TrueFalse(_issignatureline_attr);
}

const ns_s::ST_TrueFalse& signatureline_element::get_issignatureline_attr() const
{
    if (m_issignatureline_attr)
    {
        return *m_issignatureline_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
}

bool signatureline_element::has_id_attr() const
{
    return m_has_id_attr;
}

void signatureline_element::set_id_attr(const ns_s::ST_Guid& _id_attr)
{
    m_has_id_attr = true;
    m_id_attr = new ns_s::ST_Guid(_id_attr);
}

const ns_s::ST_Guid& signatureline_element::get_id_attr() const
{
    if (m_id_attr)
    {
        return *m_id_attr;
    }
    return ns_s::ST_Guid::default_instance();
}

bool signatureline_element::has_provid_attr() const
{
    return m_has_provid_attr;
}

void signatureline_element::set_provid_attr(const ns_s::ST_Guid& _provid_attr)
{
    m_has_provid_attr = true;
    m_provid_attr = new ns_s::ST_Guid(_provid_attr);
}

const ns_s::ST_Guid& signatureline_element::get_provid_attr() const
{
    if (m_provid_attr)
    {
        return *m_provid_attr;
    }
    return ns_s::ST_Guid::default_instance();
}

bool signatureline_element::has_signinginstructionsset_attr() const
{
    return m_has_signinginstructionsset_attr;
}

void signatureline_element::set_signinginstructionsset_attr(const ns_s::ST_TrueFalse& _signinginstructionsset_attr)
{
    m_has_signinginstructionsset_attr = true;
    m_signinginstructionsset_attr = new ns_s::ST_TrueFalse(_signinginstructionsset_attr);
}

const ns_s::ST_TrueFalse& signatureline_element::get_signinginstructionsset_attr() const
{
    if (m_signinginstructionsset_attr)
    {
        return *m_signinginstructionsset_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
}

bool signatureline_element::has_allowcomments_attr() const
{
    return m_has_allowcomments_attr;
}

void signatureline_element::set_allowcomments_attr(const ns_s::ST_TrueFalse& _allowcomments_attr)
{
    m_has_allowcomments_attr = true;
    m_allowcomments_attr = new ns_s::ST_TrueFalse(_allowcomments_attr);
}

const ns_s::ST_TrueFalse& signatureline_element::get_allowcomments_attr() const
{
    if (m_allowcomments_attr)
    {
        return *m_allowcomments_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
}

bool signatureline_element::has_showsigndate_attr() const
{
    return m_has_showsigndate_attr;
}

void signatureline_element::set_showsigndate_attr(const ns_s::ST_TrueFalse& _showsigndate_attr)
{
    m_has_showsigndate_attr = true;
    m_showsigndate_attr = new ns_s::ST_TrueFalse(_showsigndate_attr);
}

const ns_s::ST_TrueFalse& signatureline_element::get_showsigndate_attr() const
{
    if (m_showsigndate_attr)
    {
        return *m_showsigndate_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
}

bool signatureline_element::has_suggestedsigner_attr() const
{
    return m_has_suggestedsigner_attr;
}

void signatureline_element::set_suggestedsigner_attr(const XSD::string_& _suggestedsigner_attr)
{
    m_has_suggestedsigner_attr = true;
    m_suggestedsigner_attr = _suggestedsigner_attr;
}

const XSD::string_& signatureline_element::get_suggestedsigner_attr() const
{
    return m_suggestedsigner_attr;
}

bool signatureline_element::has_suggestedsigner2_attr() const
{
    return m_has_suggestedsigner2_attr;
}

void signatureline_element::set_suggestedsigner2_attr(const XSD::string_& _suggestedsigner2_attr)
{
    m_has_suggestedsigner2_attr = true;
    m_suggestedsigner2_attr = _suggestedsigner2_attr;
}

const XSD::string_& signatureline_element::get_suggestedsigner2_attr() const
{
    return m_suggestedsigner2_attr;
}

bool signatureline_element::has_suggestedsigneremail_attr() const
{
    return m_has_suggestedsigneremail_attr;
}

void signatureline_element::set_suggestedsigneremail_attr(const XSD::string_& _suggestedsigneremail_attr)
{
    m_has_suggestedsigneremail_attr = true;
    m_suggestedsigneremail_attr = _suggestedsigneremail_attr;
}

const XSD::string_& signatureline_element::get_suggestedsigneremail_attr() const
{
    return m_suggestedsigneremail_attr;
}

bool signatureline_element::has_signinginstructions_attr() const
{
    return m_has_signinginstructions_attr;
}

void signatureline_element::set_signinginstructions_attr(const XSD::string_& _signinginstructions_attr)
{
    m_has_signinginstructions_attr = true;
    m_signinginstructions_attr = _signinginstructions_attr;
}

const XSD::string_& signatureline_element::get_signinginstructions_attr() const
{
    return m_signinginstructions_attr;
}

bool signatureline_element::has_addlxml_attr() const
{
    return m_has_addlxml_attr;
}

void signatureline_element::set_addlxml_attr(const XSD::string_& _addlxml_attr)
{
    m_has_addlxml_attr = true;
    m_addlxml_attr = _addlxml_attr;
}

const XSD::string_& signatureline_element::get_addlxml_attr() const
{
    return m_addlxml_attr;
}

bool signatureline_element::has_sigprovurl_attr() const
{
    return m_has_sigprovurl_attr;
}

void signatureline_element::set_sigprovurl_attr(const XSD::string_& _sigprovurl_attr)
{
    m_has_sigprovurl_attr = true;
    m_sigprovurl_attr = _sigprovurl_attr;
}

const XSD::string_& signatureline_element::get_sigprovurl_attr() const
{
    return m_sigprovurl_attr;
}

signatureline_element* signatureline_element::default_instance_ = NULL;

// ink_element
ink_element::ink_element()
    :m_has_i_attr(false),
     m_i_attr(""),
     m_has_annotation_attr(false),
     m_annotation_attr(NULL),
     m_has_contentType_attr(false),
     m_contentType_attr(NULL)
{
}
ink_element::~ink_element()
{
    clear();
}
void ink_element::clear()
{
    m_has_i_attr = false;
    m_i_attr.clear();

    m_has_annotation_attr = false;

    if (m_annotation_attr)
    {
        delete m_annotation_attr;
        m_annotation_attr = NULL;
    }


    m_has_contentType_attr = false;

    if (m_contentType_attr)
    {
        delete m_contentType_attr;
        m_contentType_attr = NULL;
    }

}

void ink_element::toXml(std::ostream& _outStream) const
{
    _outStream << "<o:ink";

    _outStream << " " << "xmlns:o=\"urn:schemas-microsoft-com:office:office\"";
    _outStream << " " << "xmlns:o=\"urn:schemas-microsoft-com:vml\"";
    _outStream << " " << "xmlns:o=\"http://schemas.openxmlformats.org/officeDocument/2006/sharedTypes\"";
    _outStream << " " << "xmlns:o=\"http://schemas.openxmlformats.org/officeDocument/2006/relationships\"";


    if (m_has_i_attr)
    {
        _outStream << " " << "i" << "=\"" << m_i_attr << "\"";
    }



    if (m_has_annotation_attr)
    {
        m_annotation_attr->toXmlAttr("annotation", _outStream);
    }



    if (m_has_contentType_attr)
    {
        m_contentType_attr->toXmlAttr("contentType", _outStream);
    }

    _outStream << ">";

    _outStream << "</o:ink>";
}

const ink_element& ink_element::default_instance()
{
    if (!ink_element::default_instance_)
    {
        ink_element::default_instance_ = new ink_element();
    }
    return *ink_element::default_instance_;
}

bool ink_element::has_i_attr() const
{
    return m_has_i_attr;
}

void ink_element::set_i_attr(const XSD::string_& _i_attr)
{
    m_has_i_attr = true;
    m_i_attr = _i_attr;
}

const XSD::string_& ink_element::get_i_attr() const
{
    return m_i_attr;
}

bool ink_element::has_annotation_attr() const
{
    return m_has_annotation_attr;
}

void ink_element::set_annotation_attr(const ns_s::ST_TrueFalse& _annotation_attr)
{
    m_has_annotation_attr = true;
    m_annotation_attr = new ns_s::ST_TrueFalse(_annotation_attr);
}

const ns_s::ST_TrueFalse& ink_element::get_annotation_attr() const
{
    if (m_annotation_attr)
    {
        return *m_annotation_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
}

bool ink_element::has_contentType_attr() const
{
    return m_has_contentType_attr;
}

void ink_element::set_contentType_attr(const ST_ContentType& _contentType_attr)
{
    m_has_contentType_attr = true;
    m_contentType_attr = new ST_ContentType(_contentType_attr);
}

const ST_ContentType& ink_element::get_contentType_attr() const
{
    if (m_contentType_attr)
    {
        return *m_contentType_attr;
    }
    return ST_ContentType::default_instance();
}

ink_element* ink_element::default_instance_ = NULL;

// diagram_element
diagram_element::diagram_element()
    :m_has_relationtable(false),
     m_relationtable(NULL),
     m_has_v_ext_attr(false),
     m_v_ext_attr(NULL),
     m_has_dgmstyle_attr(false),
     m_dgmstyle_attr(0),
     m_has_autoformat_attr(false),
     m_autoformat_attr(NULL),
     m_has_reverse_attr(false),
     m_reverse_attr(NULL),
     m_has_autolayout_attr(false),
     m_autolayout_attr(NULL),
     m_has_dgmscalex_attr(false),
     m_dgmscalex_attr(0),
     m_has_dgmscaley_attr(false),
     m_dgmscaley_attr(0),
     m_has_dgmfontsize_attr(false),
     m_dgmfontsize_attr(0),
     m_has_constrainbounds_attr(false),
     m_constrainbounds_attr(""),
     m_has_dgmbasetextscale_attr(false),
     m_dgmbasetextscale_attr(0)
{
}
diagram_element::~diagram_element()
{
    clear();
}
bool diagram_element::has_relationtable() const
{
    return m_has_relationtable;
}

CT_RelationTable* diagram_element::mutable_relationtable()
{
    m_has_relationtable = true;
    if (!m_relationtable)
    {
        m_relationtable = new CT_RelationTable();
    }
    return m_relationtable;
}

const CT_RelationTable& diagram_element::get_relationtable() const
{
    if (m_relationtable)
    {
        return *m_relationtable;
    }
    return CT_RelationTable::default_instance();
}

void diagram_element::clear()
{
    m_has_v_ext_attr = false;

    if (m_v_ext_attr)
    {
        delete m_v_ext_attr;
        m_v_ext_attr = NULL;
    }


    m_has_dgmstyle_attr = false;
    m_dgmstyle_attr = 0;

    m_has_autoformat_attr = false;

    if (m_autoformat_attr)
    {
        delete m_autoformat_attr;
        m_autoformat_attr = NULL;
    }


    m_has_reverse_attr = false;

    if (m_reverse_attr)
    {
        delete m_reverse_attr;
        m_reverse_attr = NULL;
    }


    m_has_autolayout_attr = false;

    if (m_autolayout_attr)
    {
        delete m_autolayout_attr;
        m_autolayout_attr = NULL;
    }


    m_has_dgmscalex_attr = false;
    m_dgmscalex_attr = 0;

    m_has_dgmscaley_attr = false;
    m_dgmscaley_attr = 0;

    m_has_dgmfontsize_attr = false;
    m_dgmfontsize_attr = 0;

    m_has_constrainbounds_attr = false;
    m_constrainbounds_attr.clear();

    m_has_dgmbasetextscale_attr = false;
    m_dgmbasetextscale_attr = 0;

    m_has_relationtable = false;

    if (m_relationtable)
    {
        delete m_relationtable;
        m_relationtable = NULL;
    }

}

void diagram_element::toXml(std::ostream& _outStream) const
{
    _outStream << "<o:diagram";

    _outStream << " " << "xmlns:o=\"urn:schemas-microsoft-com:office:office\"";
    _outStream << " " << "xmlns:o=\"urn:schemas-microsoft-com:vml\"";
    _outStream << " " << "xmlns:o=\"http://schemas.openxmlformats.org/officeDocument/2006/sharedTypes\"";
    _outStream << " " << "xmlns:o=\"http://schemas.openxmlformats.org/officeDocument/2006/relationships\"";


    if (m_has_v_ext_attr)
    {
        m_v_ext_attr->toXmlAttr("v:ext", _outStream);
    }



    if (m_has_dgmstyle_attr)
    {
        _outStream << " " << "dgmstyle" << "=\"" << m_dgmstyle_attr << "\"";
    }



    if (m_has_autoformat_attr)
    {
        m_autoformat_attr->toXmlAttr("autoformat", _outStream);
    }



    if (m_has_reverse_attr)
    {
        m_reverse_attr->toXmlAttr("reverse", _outStream);
    }



    if (m_has_autolayout_attr)
    {
        m_autolayout_attr->toXmlAttr("autolayout", _outStream);
    }



    if (m_has_dgmscalex_attr)
    {
        _outStream << " " << "dgmscalex" << "=\"" << m_dgmscalex_attr << "\"";
    }



    if (m_has_dgmscaley_attr)
    {
        _outStream << " " << "dgmscaley" << "=\"" << m_dgmscaley_attr << "\"";
    }



    if (m_has_dgmfontsize_attr)
    {
        _outStream << " " << "dgmfontsize" << "=\"" << m_dgmfontsize_attr << "\"";
    }



    if (m_has_constrainbounds_attr)
    {
        _outStream << " " << "constrainbounds" << "=\"" << m_constrainbounds_attr << "\"";
    }



    if (m_has_dgmbasetextscale_attr)
    {
        _outStream << " " << "dgmbasetextscale" << "=\"" << m_dgmbasetextscale_attr << "\"";
    }

    _outStream << ">";


    if (m_has_relationtable)
    {
        m_relationtable->toXmlElem("o:relationtable", "", _outStream);
    }

    _outStream << "</o:diagram>";
}

const diagram_element& diagram_element::default_instance()
{
    if (!diagram_element::default_instance_)
    {
        diagram_element::default_instance_ = new diagram_element();
    }
    return *diagram_element::default_instance_;
}

bool diagram_element::has_v_ext_attr() const
{
    return m_has_v_ext_attr;
}

void diagram_element::set_v_ext_attr(const ns_v::ST_Ext& _v_ext_attr)
{
    m_has_v_ext_attr = true;
    m_v_ext_attr = new ns_v::ST_Ext(_v_ext_attr);
}

const ns_v::ST_Ext& diagram_element::get_v_ext_attr() const
{
    if (m_v_ext_attr)
    {
        return *m_v_ext_attr;
    }
    return ns_v::ST_Ext::default_instance();
}

bool diagram_element::has_dgmstyle_attr() const
{
    return m_has_dgmstyle_attr;
}

void diagram_element::set_dgmstyle_attr(const XSD::integer_& _dgmstyle_attr)
{
    m_has_dgmstyle_attr = true;
    m_dgmstyle_attr = _dgmstyle_attr;
}

const XSD::integer_& diagram_element::get_dgmstyle_attr() const
{
    return m_dgmstyle_attr;
}

bool diagram_element::has_autoformat_attr() const
{
    return m_has_autoformat_attr;
}

void diagram_element::set_autoformat_attr(const ns_s::ST_TrueFalse& _autoformat_attr)
{
    m_has_autoformat_attr = true;
    m_autoformat_attr = new ns_s::ST_TrueFalse(_autoformat_attr);
}

const ns_s::ST_TrueFalse& diagram_element::get_autoformat_attr() const
{
    if (m_autoformat_attr)
    {
        return *m_autoformat_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
}

bool diagram_element::has_reverse_attr() const
{
    return m_has_reverse_attr;
}

void diagram_element::set_reverse_attr(const ns_s::ST_TrueFalse& _reverse_attr)
{
    m_has_reverse_attr = true;
    m_reverse_attr = new ns_s::ST_TrueFalse(_reverse_attr);
}

const ns_s::ST_TrueFalse& diagram_element::get_reverse_attr() const
{
    if (m_reverse_attr)
    {
        return *m_reverse_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
}

bool diagram_element::has_autolayout_attr() const
{
    return m_has_autolayout_attr;
}

void diagram_element::set_autolayout_attr(const ns_s::ST_TrueFalse& _autolayout_attr)
{
    m_has_autolayout_attr = true;
    m_autolayout_attr = new ns_s::ST_TrueFalse(_autolayout_attr);
}

const ns_s::ST_TrueFalse& diagram_element::get_autolayout_attr() const
{
    if (m_autolayout_attr)
    {
        return *m_autolayout_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
}

bool diagram_element::has_dgmscalex_attr() const
{
    return m_has_dgmscalex_attr;
}

void diagram_element::set_dgmscalex_attr(const XSD::integer_& _dgmscalex_attr)
{
    m_has_dgmscalex_attr = true;
    m_dgmscalex_attr = _dgmscalex_attr;
}

const XSD::integer_& diagram_element::get_dgmscalex_attr() const
{
    return m_dgmscalex_attr;
}

bool diagram_element::has_dgmscaley_attr() const
{
    return m_has_dgmscaley_attr;
}

void diagram_element::set_dgmscaley_attr(const XSD::integer_& _dgmscaley_attr)
{
    m_has_dgmscaley_attr = true;
    m_dgmscaley_attr = _dgmscaley_attr;
}

const XSD::integer_& diagram_element::get_dgmscaley_attr() const
{
    return m_dgmscaley_attr;
}

bool diagram_element::has_dgmfontsize_attr() const
{
    return m_has_dgmfontsize_attr;
}

void diagram_element::set_dgmfontsize_attr(const XSD::integer_& _dgmfontsize_attr)
{
    m_has_dgmfontsize_attr = true;
    m_dgmfontsize_attr = _dgmfontsize_attr;
}

const XSD::integer_& diagram_element::get_dgmfontsize_attr() const
{
    return m_dgmfontsize_attr;
}

bool diagram_element::has_constrainbounds_attr() const
{
    return m_has_constrainbounds_attr;
}

void diagram_element::set_constrainbounds_attr(const XSD::string_& _constrainbounds_attr)
{
    m_has_constrainbounds_attr = true;
    m_constrainbounds_attr = _constrainbounds_attr;
}

const XSD::string_& diagram_element::get_constrainbounds_attr() const
{
    return m_constrainbounds_attr;
}

bool diagram_element::has_dgmbasetextscale_attr() const
{
    return m_has_dgmbasetextscale_attr;
}

void diagram_element::set_dgmbasetextscale_attr(const XSD::integer_& _dgmbasetextscale_attr)
{
    m_has_dgmbasetextscale_attr = true;
    m_dgmbasetextscale_attr = _dgmbasetextscale_attr;
}

const XSD::integer_& diagram_element::get_dgmbasetextscale_attr() const
{
    return m_dgmbasetextscale_attr;
}

diagram_element* diagram_element::default_instance_ = NULL;

// equationxml_element
equationxml_element::equationxml_element()
    :m_has__any(false),
     m__any(NULL),
     m_has_contentType_attr(false),
     m_contentType_attr(NULL)
{
}
equationxml_element::~equationxml_element()
{
    clear();
}
void equationxml_element::clear()
{
    m_has_contentType_attr = false;

    if (m_contentType_attr)
    {
        delete m_contentType_attr;
        m_contentType_attr = NULL;
    }

}

void equationxml_element::toXml(std::ostream& _outStream) const
{
    _outStream << "<o:equationxml";

    _outStream << " " << "xmlns:o=\"urn:schemas-microsoft-com:office:office\"";
    _outStream << " " << "xmlns:o=\"urn:schemas-microsoft-com:vml\"";
    _outStream << " " << "xmlns:o=\"http://schemas.openxmlformats.org/officeDocument/2006/sharedTypes\"";
    _outStream << " " << "xmlns:o=\"http://schemas.openxmlformats.org/officeDocument/2006/relationships\"";


    if (m_has_contentType_attr)
    {
        m_contentType_attr->toXmlAttr("contentType", _outStream);
    }

    _outStream << ">";

    assert(m_has__any);


    if (m_has__any)
    {
        m__any->toXml(_outStream);
    }

    _outStream << "</o:equationxml>";
}

const equationxml_element& equationxml_element::default_instance()
{
    if (!equationxml_element::default_instance_)
    {
        equationxml_element::default_instance_ = new equationxml_element();
    }
    return *equationxml_element::default_instance_;
}

bool equationxml_element::has_contentType_attr() const
{
    return m_has_contentType_attr;
}

void equationxml_element::set_contentType_attr(const ST_AlternateMathContentType& _contentType_attr)
{
    m_has_contentType_attr = true;
    m_contentType_attr = new ST_AlternateMathContentType(_contentType_attr);
}

const ST_AlternateMathContentType& equationxml_element::get_contentType_attr() const
{
    if (m_contentType_attr)
    {
        return *m_contentType_attr;
    }
    return ST_AlternateMathContentType::default_instance();
}

equationxml_element* equationxml_element::default_instance_ = NULL;

// skew_element
skew_element::skew_element()
    :m_has_v_ext_attr(false),
     m_v_ext_attr(NULL),
     m_has_id_attr(false),
     m_id_attr(""),
     m_has_on_attr(false),
     m_on_attr(NULL),
     m_has_offset_attr(false),
     m_offset_attr(""),
     m_has_origin_attr(false),
     m_origin_attr(""),
     m_has_matrix_attr(false),
     m_matrix_attr("")
{
}
skew_element::~skew_element()
{
    clear();
}
void skew_element::clear()
{
    m_has_v_ext_attr = false;

    if (m_v_ext_attr)
    {
        delete m_v_ext_attr;
        m_v_ext_attr = NULL;
    }


    m_has_id_attr = false;
    m_id_attr.clear();

    m_has_on_attr = false;

    if (m_on_attr)
    {
        delete m_on_attr;
        m_on_attr = NULL;
    }


    m_has_offset_attr = false;
    m_offset_attr.clear();

    m_has_origin_attr = false;
    m_origin_attr.clear();

    m_has_matrix_attr = false;
    m_matrix_attr.clear();
}

void skew_element::toXml(std::ostream& _outStream) const
{
    _outStream << "<o:skew";

    _outStream << " " << "xmlns:o=\"urn:schemas-microsoft-com:office:office\"";
    _outStream << " " << "xmlns:o=\"urn:schemas-microsoft-com:vml\"";
    _outStream << " " << "xmlns:o=\"http://schemas.openxmlformats.org/officeDocument/2006/sharedTypes\"";
    _outStream << " " << "xmlns:o=\"http://schemas.openxmlformats.org/officeDocument/2006/relationships\"";


    if (m_has_v_ext_attr)
    {
        m_v_ext_attr->toXmlAttr("v:ext", _outStream);
    }



    if (m_has_id_attr)
    {
        _outStream << " " << "id" << "=\"" << m_id_attr << "\"";
    }



    if (m_has_on_attr)
    {
        m_on_attr->toXmlAttr("on", _outStream);
    }



    if (m_has_offset_attr)
    {
        _outStream << " " << "offset" << "=\"" << m_offset_attr << "\"";
    }



    if (m_has_origin_attr)
    {
        _outStream << " " << "origin" << "=\"" << m_origin_attr << "\"";
    }



    if (m_has_matrix_attr)
    {
        _outStream << " " << "matrix" << "=\"" << m_matrix_attr << "\"";
    }

    _outStream << ">";

    _outStream << "</o:skew>";
}

const skew_element& skew_element::default_instance()
{
    if (!skew_element::default_instance_)
    {
        skew_element::default_instance_ = new skew_element();
    }
    return *skew_element::default_instance_;
}

bool skew_element::has_v_ext_attr() const
{
    return m_has_v_ext_attr;
}

void skew_element::set_v_ext_attr(const ns_v::ST_Ext& _v_ext_attr)
{
    m_has_v_ext_attr = true;
    m_v_ext_attr = new ns_v::ST_Ext(_v_ext_attr);
}

const ns_v::ST_Ext& skew_element::get_v_ext_attr() const
{
    if (m_v_ext_attr)
    {
        return *m_v_ext_attr;
    }
    return ns_v::ST_Ext::default_instance();
}

bool skew_element::has_id_attr() const
{
    return m_has_id_attr;
}

void skew_element::set_id_attr(const XSD::string_& _id_attr)
{
    m_has_id_attr = true;
    m_id_attr = _id_attr;
}

const XSD::string_& skew_element::get_id_attr() const
{
    return m_id_attr;
}

bool skew_element::has_on_attr() const
{
    return m_has_on_attr;
}

void skew_element::set_on_attr(const ns_s::ST_TrueFalse& _on_attr)
{
    m_has_on_attr = true;
    m_on_attr = new ns_s::ST_TrueFalse(_on_attr);
}

const ns_s::ST_TrueFalse& skew_element::get_on_attr() const
{
    if (m_on_attr)
    {
        return *m_on_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
}

bool skew_element::has_offset_attr() const
{
    return m_has_offset_attr;
}

void skew_element::set_offset_attr(const XSD::string_& _offset_attr)
{
    m_has_offset_attr = true;
    m_offset_attr = _offset_attr;
}

const XSD::string_& skew_element::get_offset_attr() const
{
    return m_offset_attr;
}

bool skew_element::has_origin_attr() const
{
    return m_has_origin_attr;
}

void skew_element::set_origin_attr(const XSD::string_& _origin_attr)
{
    m_has_origin_attr = true;
    m_origin_attr = _origin_attr;
}

const XSD::string_& skew_element::get_origin_attr() const
{
    return m_origin_attr;
}

bool skew_element::has_matrix_attr() const
{
    return m_has_matrix_attr;
}

void skew_element::set_matrix_attr(const XSD::string_& _matrix_attr)
{
    m_has_matrix_attr = true;
    m_matrix_attr = _matrix_attr;
}

const XSD::string_& skew_element::get_matrix_attr() const
{
    return m_matrix_attr;
}

skew_element* skew_element::default_instance_ = NULL;

// extrusion_element
extrusion_element::extrusion_element()
    :m_has_v_ext_attr(false),
     m_v_ext_attr(NULL),
     m_has_on_attr(false),
     m_on_attr(NULL),
     m_has_type_attr(false),
     m_type_attr(NULL),
     m_has_render_attr(false),
     m_render_attr(NULL),
     m_has_viewpointorigin_attr(false),
     m_viewpointorigin_attr(""),
     m_has_viewpoint_attr(false),
     m_viewpoint_attr(""),
     m_has_plane_attr(false),
     m_plane_attr(NULL),
     m_has_skewangle_attr(false),
     m_skewangle_attr(0),
     m_has_skewamt_attr(false),
     m_skewamt_attr(""),
     m_has_foredepth_attr(false),
     m_foredepth_attr(""),
     m_has_backdepth_attr(false),
     m_backdepth_attr(""),
     m_has_orientation_attr(false),
     m_orientation_attr(""),
     m_has_orientationangle_attr(false),
     m_orientationangle_attr(0),
     m_has_lockrotationcenter_attr(false),
     m_lockrotationcenter_attr(NULL),
     m_has_autorotationcenter_attr(false),
     m_autorotationcenter_attr(NULL),
     m_has_rotationcenter_attr(false),
     m_rotationcenter_attr(""),
     m_has_rotationangle_attr(false),
     m_rotationangle_attr(""),
     m_has_colormode_attr(false),
     m_colormode_attr(NULL),
     m_has_color_attr(false),
     m_color_attr(NULL),
     m_has_shininess_attr(false),
     m_shininess_attr(0),
     m_has_specularity_attr(false),
     m_specularity_attr(""),
     m_has_diffusity_attr(false),
     m_diffusity_attr(""),
     m_has_metal_attr(false),
     m_metal_attr(NULL),
     m_has_edge_attr(false),
     m_edge_attr(""),
     m_has_facet_attr(false),
     m_facet_attr(""),
     m_has_lightface_attr(false),
     m_lightface_attr(NULL),
     m_has_brightness_attr(false),
     m_brightness_attr(""),
     m_has_lightposition_attr(false),
     m_lightposition_attr(""),
     m_has_lightlevel_attr(false),
     m_lightlevel_attr(""),
     m_has_lightharsh_attr(false),
     m_lightharsh_attr(NULL),
     m_has_lightposition2_attr(false),
     m_lightposition2_attr(""),
     m_has_lightlevel2_attr(false),
     m_lightlevel2_attr(""),
     m_has_lightharsh2_attr(false),
     m_lightharsh2_attr(NULL)
{
}
extrusion_element::~extrusion_element()
{
    clear();
}
void extrusion_element::clear()
{
    m_has_v_ext_attr = false;

    if (m_v_ext_attr)
    {
        delete m_v_ext_attr;
        m_v_ext_attr = NULL;
    }


    m_has_on_attr = false;

    if (m_on_attr)
    {
        delete m_on_attr;
        m_on_attr = NULL;
    }


    m_has_type_attr = false;

    if (m_type_attr)
    {
        delete m_type_attr;
        m_type_attr = NULL;
    }


    m_has_render_attr = false;

    if (m_render_attr)
    {
        delete m_render_attr;
        m_render_attr = NULL;
    }


    m_has_viewpointorigin_attr = false;
    m_viewpointorigin_attr.clear();

    m_has_viewpoint_attr = false;
    m_viewpoint_attr.clear();

    m_has_plane_attr = false;

    if (m_plane_attr)
    {
        delete m_plane_attr;
        m_plane_attr = NULL;
    }


    m_has_skewangle_attr = false;
    m_skewangle_attr = 0;

    m_has_skewamt_attr = false;
    m_skewamt_attr.clear();

    m_has_foredepth_attr = false;
    m_foredepth_attr.clear();

    m_has_backdepth_attr = false;
    m_backdepth_attr.clear();

    m_has_orientation_attr = false;
    m_orientation_attr.clear();

    m_has_orientationangle_attr = false;
    m_orientationangle_attr = 0;

    m_has_lockrotationcenter_attr = false;

    if (m_lockrotationcenter_attr)
    {
        delete m_lockrotationcenter_attr;
        m_lockrotationcenter_attr = NULL;
    }


    m_has_autorotationcenter_attr = false;

    if (m_autorotationcenter_attr)
    {
        delete m_autorotationcenter_attr;
        m_autorotationcenter_attr = NULL;
    }


    m_has_rotationcenter_attr = false;
    m_rotationcenter_attr.clear();

    m_has_rotationangle_attr = false;
    m_rotationangle_attr.clear();

    m_has_colormode_attr = false;

    if (m_colormode_attr)
    {
        delete m_colormode_attr;
        m_colormode_attr = NULL;
    }


    m_has_color_attr = false;

    if (m_color_attr)
    {
        delete m_color_attr;
        m_color_attr = NULL;
    }


    m_has_shininess_attr = false;
    m_shininess_attr = 0;

    m_has_specularity_attr = false;
    m_specularity_attr.clear();

    m_has_diffusity_attr = false;
    m_diffusity_attr.clear();

    m_has_metal_attr = false;

    if (m_metal_attr)
    {
        delete m_metal_attr;
        m_metal_attr = NULL;
    }


    m_has_edge_attr = false;
    m_edge_attr.clear();

    m_has_facet_attr = false;
    m_facet_attr.clear();

    m_has_lightface_attr = false;

    if (m_lightface_attr)
    {
        delete m_lightface_attr;
        m_lightface_attr = NULL;
    }


    m_has_brightness_attr = false;
    m_brightness_attr.clear();

    m_has_lightposition_attr = false;
    m_lightposition_attr.clear();

    m_has_lightlevel_attr = false;
    m_lightlevel_attr.clear();

    m_has_lightharsh_attr = false;

    if (m_lightharsh_attr)
    {
        delete m_lightharsh_attr;
        m_lightharsh_attr = NULL;
    }


    m_has_lightposition2_attr = false;
    m_lightposition2_attr.clear();

    m_has_lightlevel2_attr = false;
    m_lightlevel2_attr.clear();

    m_has_lightharsh2_attr = false;

    if (m_lightharsh2_attr)
    {
        delete m_lightharsh2_attr;
        m_lightharsh2_attr = NULL;
    }

}

void extrusion_element::toXml(std::ostream& _outStream) const
{
    _outStream << "<o:extrusion";

    _outStream << " " << "xmlns:o=\"urn:schemas-microsoft-com:office:office\"";
    _outStream << " " << "xmlns:o=\"urn:schemas-microsoft-com:vml\"";
    _outStream << " " << "xmlns:o=\"http://schemas.openxmlformats.org/officeDocument/2006/sharedTypes\"";
    _outStream << " " << "xmlns:o=\"http://schemas.openxmlformats.org/officeDocument/2006/relationships\"";


    if (m_has_v_ext_attr)
    {
        m_v_ext_attr->toXmlAttr("v:ext", _outStream);
    }



    if (m_has_on_attr)
    {
        m_on_attr->toXmlAttr("on", _outStream);
    }



    if (m_has_type_attr)
    {
        m_type_attr->toXmlAttr("type", _outStream);
    }



    if (m_has_render_attr)
    {
        m_render_attr->toXmlAttr("render", _outStream);
    }



    if (m_has_viewpointorigin_attr)
    {
        _outStream << " " << "viewpointorigin" << "=\"" << m_viewpointorigin_attr << "\"";
    }



    if (m_has_viewpoint_attr)
    {
        _outStream << " " << "viewpoint" << "=\"" << m_viewpoint_attr << "\"";
    }



    if (m_has_plane_attr)
    {
        m_plane_attr->toXmlAttr("plane", _outStream);
    }



    if (m_has_skewangle_attr)
    {
        _outStream << " " << "skewangle" << "=\"" << m_skewangle_attr << "\"";
    }



    if (m_has_skewamt_attr)
    {
        _outStream << " " << "skewamt" << "=\"" << m_skewamt_attr << "\"";
    }



    if (m_has_foredepth_attr)
    {
        _outStream << " " << "foredepth" << "=\"" << m_foredepth_attr << "\"";
    }



    if (m_has_backdepth_attr)
    {
        _outStream << " " << "backdepth" << "=\"" << m_backdepth_attr << "\"";
    }



    if (m_has_orientation_attr)
    {
        _outStream << " " << "orientation" << "=\"" << m_orientation_attr << "\"";
    }



    if (m_has_orientationangle_attr)
    {
        _outStream << " " << "orientationangle" << "=\"" << m_orientationangle_attr << "\"";
    }



    if (m_has_lockrotationcenter_attr)
    {
        m_lockrotationcenter_attr->toXmlAttr("lockrotationcenter", _outStream);
    }



    if (m_has_autorotationcenter_attr)
    {
        m_autorotationcenter_attr->toXmlAttr("autorotationcenter", _outStream);
    }



    if (m_has_rotationcenter_attr)
    {
        _outStream << " " << "rotationcenter" << "=\"" << m_rotationcenter_attr << "\"";
    }



    if (m_has_rotationangle_attr)
    {
        _outStream << " " << "rotationangle" << "=\"" << m_rotationangle_attr << "\"";
    }



    if (m_has_colormode_attr)
    {
        m_colormode_attr->toXmlAttr("colormode", _outStream);
    }



    if (m_has_color_attr)
    {
        m_color_attr->toXmlAttr("color", _outStream);
    }



    if (m_has_shininess_attr)
    {
        _outStream << " " << "shininess" << "=\"" << m_shininess_attr << "\"";
    }



    if (m_has_specularity_attr)
    {
        _outStream << " " << "specularity" << "=\"" << m_specularity_attr << "\"";
    }



    if (m_has_diffusity_attr)
    {
        _outStream << " " << "diffusity" << "=\"" << m_diffusity_attr << "\"";
    }



    if (m_has_metal_attr)
    {
        m_metal_attr->toXmlAttr("metal", _outStream);
    }



    if (m_has_edge_attr)
    {
        _outStream << " " << "edge" << "=\"" << m_edge_attr << "\"";
    }



    if (m_has_facet_attr)
    {
        _outStream << " " << "facet" << "=\"" << m_facet_attr << "\"";
    }



    if (m_has_lightface_attr)
    {
        m_lightface_attr->toXmlAttr("lightface", _outStream);
    }



    if (m_has_brightness_attr)
    {
        _outStream << " " << "brightness" << "=\"" << m_brightness_attr << "\"";
    }



    if (m_has_lightposition_attr)
    {
        _outStream << " " << "lightposition" << "=\"" << m_lightposition_attr << "\"";
    }



    if (m_has_lightlevel_attr)
    {
        _outStream << " " << "lightlevel" << "=\"" << m_lightlevel_attr << "\"";
    }



    if (m_has_lightharsh_attr)
    {
        m_lightharsh_attr->toXmlAttr("lightharsh", _outStream);
    }



    if (m_has_lightposition2_attr)
    {
        _outStream << " " << "lightposition2" << "=\"" << m_lightposition2_attr << "\"";
    }



    if (m_has_lightlevel2_attr)
    {
        _outStream << " " << "lightlevel2" << "=\"" << m_lightlevel2_attr << "\"";
    }



    if (m_has_lightharsh2_attr)
    {
        m_lightharsh2_attr->toXmlAttr("lightharsh2", _outStream);
    }

    _outStream << ">";

    _outStream << "</o:extrusion>";
}

const extrusion_element& extrusion_element::default_instance()
{
    if (!extrusion_element::default_instance_)
    {
        extrusion_element::default_instance_ = new extrusion_element();
    }
    return *extrusion_element::default_instance_;
}

bool extrusion_element::has_v_ext_attr() const
{
    return m_has_v_ext_attr;
}

void extrusion_element::set_v_ext_attr(const ns_v::ST_Ext& _v_ext_attr)
{
    m_has_v_ext_attr = true;
    m_v_ext_attr = new ns_v::ST_Ext(_v_ext_attr);
}

const ns_v::ST_Ext& extrusion_element::get_v_ext_attr() const
{
    if (m_v_ext_attr)
    {
        return *m_v_ext_attr;
    }
    return ns_v::ST_Ext::default_instance();
}

bool extrusion_element::has_on_attr() const
{
    return m_has_on_attr;
}

void extrusion_element::set_on_attr(const ns_s::ST_TrueFalse& _on_attr)
{
    m_has_on_attr = true;
    m_on_attr = new ns_s::ST_TrueFalse(_on_attr);
}

const ns_s::ST_TrueFalse& extrusion_element::get_on_attr() const
{
    if (m_on_attr)
    {
        return *m_on_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
}

bool extrusion_element::has_type_attr() const
{
    return m_has_type_attr;
}

void extrusion_element::set_type_attr(const ST_ExtrusionType& _type_attr)
{
    m_has_type_attr = true;
    m_type_attr = new ST_ExtrusionType(_type_attr);
}

const ST_ExtrusionType& extrusion_element::get_type_attr() const
{
    if (m_type_attr)
    {
        return *m_type_attr;
    }
    return ST_ExtrusionType::default_instance();
}

bool extrusion_element::has_render_attr() const
{
    return m_has_render_attr;
}

void extrusion_element::set_render_attr(const ST_ExtrusionRender& _render_attr)
{
    m_has_render_attr = true;
    m_render_attr = new ST_ExtrusionRender(_render_attr);
}

const ST_ExtrusionRender& extrusion_element::get_render_attr() const
{
    if (m_render_attr)
    {
        return *m_render_attr;
    }
    return ST_ExtrusionRender::default_instance();
}

bool extrusion_element::has_viewpointorigin_attr() const
{
    return m_has_viewpointorigin_attr;
}

void extrusion_element::set_viewpointorigin_attr(const XSD::string_& _viewpointorigin_attr)
{
    m_has_viewpointorigin_attr = true;
    m_viewpointorigin_attr = _viewpointorigin_attr;
}

const XSD::string_& extrusion_element::get_viewpointorigin_attr() const
{
    return m_viewpointorigin_attr;
}

bool extrusion_element::has_viewpoint_attr() const
{
    return m_has_viewpoint_attr;
}

void extrusion_element::set_viewpoint_attr(const XSD::string_& _viewpoint_attr)
{
    m_has_viewpoint_attr = true;
    m_viewpoint_attr = _viewpoint_attr;
}

const XSD::string_& extrusion_element::get_viewpoint_attr() const
{
    return m_viewpoint_attr;
}

bool extrusion_element::has_plane_attr() const
{
    return m_has_plane_attr;
}

void extrusion_element::set_plane_attr(const ST_ExtrusionPlane& _plane_attr)
{
    m_has_plane_attr = true;
    m_plane_attr = new ST_ExtrusionPlane(_plane_attr);
}

const ST_ExtrusionPlane& extrusion_element::get_plane_attr() const
{
    if (m_plane_attr)
    {
        return *m_plane_attr;
    }
    return ST_ExtrusionPlane::default_instance();
}

bool extrusion_element::has_skewangle_attr() const
{
    return m_has_skewangle_attr;
}

void extrusion_element::set_skewangle_attr(const XSD::float_& _skewangle_attr)
{
    m_has_skewangle_attr = true;
    m_skewangle_attr = _skewangle_attr;
}

const XSD::float_& extrusion_element::get_skewangle_attr() const
{
    return m_skewangle_attr;
}

bool extrusion_element::has_skewamt_attr() const
{
    return m_has_skewamt_attr;
}

void extrusion_element::set_skewamt_attr(const XSD::string_& _skewamt_attr)
{
    m_has_skewamt_attr = true;
    m_skewamt_attr = _skewamt_attr;
}

const XSD::string_& extrusion_element::get_skewamt_attr() const
{
    return m_skewamt_attr;
}

bool extrusion_element::has_foredepth_attr() const
{
    return m_has_foredepth_attr;
}

void extrusion_element::set_foredepth_attr(const XSD::string_& _foredepth_attr)
{
    m_has_foredepth_attr = true;
    m_foredepth_attr = _foredepth_attr;
}

const XSD::string_& extrusion_element::get_foredepth_attr() const
{
    return m_foredepth_attr;
}

bool extrusion_element::has_backdepth_attr() const
{
    return m_has_backdepth_attr;
}

void extrusion_element::set_backdepth_attr(const XSD::string_& _backdepth_attr)
{
    m_has_backdepth_attr = true;
    m_backdepth_attr = _backdepth_attr;
}

const XSD::string_& extrusion_element::get_backdepth_attr() const
{
    return m_backdepth_attr;
}

bool extrusion_element::has_orientation_attr() const
{
    return m_has_orientation_attr;
}

void extrusion_element::set_orientation_attr(const XSD::string_& _orientation_attr)
{
    m_has_orientation_attr = true;
    m_orientation_attr = _orientation_attr;
}

const XSD::string_& extrusion_element::get_orientation_attr() const
{
    return m_orientation_attr;
}

bool extrusion_element::has_orientationangle_attr() const
{
    return m_has_orientationangle_attr;
}

void extrusion_element::set_orientationangle_attr(const XSD::float_& _orientationangle_attr)
{
    m_has_orientationangle_attr = true;
    m_orientationangle_attr = _orientationangle_attr;
}

const XSD::float_& extrusion_element::get_orientationangle_attr() const
{
    return m_orientationangle_attr;
}

bool extrusion_element::has_lockrotationcenter_attr() const
{
    return m_has_lockrotationcenter_attr;
}

void extrusion_element::set_lockrotationcenter_attr(const ns_s::ST_TrueFalse& _lockrotationcenter_attr)
{
    m_has_lockrotationcenter_attr = true;
    m_lockrotationcenter_attr = new ns_s::ST_TrueFalse(_lockrotationcenter_attr);
}

const ns_s::ST_TrueFalse& extrusion_element::get_lockrotationcenter_attr() const
{
    if (m_lockrotationcenter_attr)
    {
        return *m_lockrotationcenter_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
}

bool extrusion_element::has_autorotationcenter_attr() const
{
    return m_has_autorotationcenter_attr;
}

void extrusion_element::set_autorotationcenter_attr(const ns_s::ST_TrueFalse& _autorotationcenter_attr)
{
    m_has_autorotationcenter_attr = true;
    m_autorotationcenter_attr = new ns_s::ST_TrueFalse(_autorotationcenter_attr);
}

const ns_s::ST_TrueFalse& extrusion_element::get_autorotationcenter_attr() const
{
    if (m_autorotationcenter_attr)
    {
        return *m_autorotationcenter_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
}

bool extrusion_element::has_rotationcenter_attr() const
{
    return m_has_rotationcenter_attr;
}

void extrusion_element::set_rotationcenter_attr(const XSD::string_& _rotationcenter_attr)
{
    m_has_rotationcenter_attr = true;
    m_rotationcenter_attr = _rotationcenter_attr;
}

const XSD::string_& extrusion_element::get_rotationcenter_attr() const
{
    return m_rotationcenter_attr;
}

bool extrusion_element::has_rotationangle_attr() const
{
    return m_has_rotationangle_attr;
}

void extrusion_element::set_rotationangle_attr(const XSD::string_& _rotationangle_attr)
{
    m_has_rotationangle_attr = true;
    m_rotationangle_attr = _rotationangle_attr;
}

const XSD::string_& extrusion_element::get_rotationangle_attr() const
{
    return m_rotationangle_attr;
}

bool extrusion_element::has_colormode_attr() const
{
    return m_has_colormode_attr;
}

void extrusion_element::set_colormode_attr(const ST_ColorMode& _colormode_attr)
{
    m_has_colormode_attr = true;
    m_colormode_attr = new ST_ColorMode(_colormode_attr);
}

const ST_ColorMode& extrusion_element::get_colormode_attr() const
{
    if (m_colormode_attr)
    {
        return *m_colormode_attr;
    }
    return ST_ColorMode::default_instance();
}

bool extrusion_element::has_color_attr() const
{
    return m_has_color_attr;
}

void extrusion_element::set_color_attr(const ns_s::ST_ColorType& _color_attr)
{
    m_has_color_attr = true;
    m_color_attr = new ns_s::ST_ColorType(_color_attr);
}

const ns_s::ST_ColorType& extrusion_element::get_color_attr() const
{
    if (m_color_attr)
    {
        return *m_color_attr;
    }
    return ns_s::ST_ColorType::default_instance();
}

bool extrusion_element::has_shininess_attr() const
{
    return m_has_shininess_attr;
}

void extrusion_element::set_shininess_attr(const XSD::float_& _shininess_attr)
{
    m_has_shininess_attr = true;
    m_shininess_attr = _shininess_attr;
}

const XSD::float_& extrusion_element::get_shininess_attr() const
{
    return m_shininess_attr;
}

bool extrusion_element::has_specularity_attr() const
{
    return m_has_specularity_attr;
}

void extrusion_element::set_specularity_attr(const XSD::string_& _specularity_attr)
{
    m_has_specularity_attr = true;
    m_specularity_attr = _specularity_attr;
}

const XSD::string_& extrusion_element::get_specularity_attr() const
{
    return m_specularity_attr;
}

bool extrusion_element::has_diffusity_attr() const
{
    return m_has_diffusity_attr;
}

void extrusion_element::set_diffusity_attr(const XSD::string_& _diffusity_attr)
{
    m_has_diffusity_attr = true;
    m_diffusity_attr = _diffusity_attr;
}

const XSD::string_& extrusion_element::get_diffusity_attr() const
{
    return m_diffusity_attr;
}

bool extrusion_element::has_metal_attr() const
{
    return m_has_metal_attr;
}

void extrusion_element::set_metal_attr(const ns_s::ST_TrueFalse& _metal_attr)
{
    m_has_metal_attr = true;
    m_metal_attr = new ns_s::ST_TrueFalse(_metal_attr);
}

const ns_s::ST_TrueFalse& extrusion_element::get_metal_attr() const
{
    if (m_metal_attr)
    {
        return *m_metal_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
}

bool extrusion_element::has_edge_attr() const
{
    return m_has_edge_attr;
}

void extrusion_element::set_edge_attr(const XSD::string_& _edge_attr)
{
    m_has_edge_attr = true;
    m_edge_attr = _edge_attr;
}

const XSD::string_& extrusion_element::get_edge_attr() const
{
    return m_edge_attr;
}

bool extrusion_element::has_facet_attr() const
{
    return m_has_facet_attr;
}

void extrusion_element::set_facet_attr(const XSD::string_& _facet_attr)
{
    m_has_facet_attr = true;
    m_facet_attr = _facet_attr;
}

const XSD::string_& extrusion_element::get_facet_attr() const
{
    return m_facet_attr;
}

bool extrusion_element::has_lightface_attr() const
{
    return m_has_lightface_attr;
}

void extrusion_element::set_lightface_attr(const ns_s::ST_TrueFalse& _lightface_attr)
{
    m_has_lightface_attr = true;
    m_lightface_attr = new ns_s::ST_TrueFalse(_lightface_attr);
}

const ns_s::ST_TrueFalse& extrusion_element::get_lightface_attr() const
{
    if (m_lightface_attr)
    {
        return *m_lightface_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
}

bool extrusion_element::has_brightness_attr() const
{
    return m_has_brightness_attr;
}

void extrusion_element::set_brightness_attr(const XSD::string_& _brightness_attr)
{
    m_has_brightness_attr = true;
    m_brightness_attr = _brightness_attr;
}

const XSD::string_& extrusion_element::get_brightness_attr() const
{
    return m_brightness_attr;
}

bool extrusion_element::has_lightposition_attr() const
{
    return m_has_lightposition_attr;
}

void extrusion_element::set_lightposition_attr(const XSD::string_& _lightposition_attr)
{
    m_has_lightposition_attr = true;
    m_lightposition_attr = _lightposition_attr;
}

const XSD::string_& extrusion_element::get_lightposition_attr() const
{
    return m_lightposition_attr;
}

bool extrusion_element::has_lightlevel_attr() const
{
    return m_has_lightlevel_attr;
}

void extrusion_element::set_lightlevel_attr(const XSD::string_& _lightlevel_attr)
{
    m_has_lightlevel_attr = true;
    m_lightlevel_attr = _lightlevel_attr;
}

const XSD::string_& extrusion_element::get_lightlevel_attr() const
{
    return m_lightlevel_attr;
}

bool extrusion_element::has_lightharsh_attr() const
{
    return m_has_lightharsh_attr;
}

void extrusion_element::set_lightharsh_attr(const ns_s::ST_TrueFalse& _lightharsh_attr)
{
    m_has_lightharsh_attr = true;
    m_lightharsh_attr = new ns_s::ST_TrueFalse(_lightharsh_attr);
}

const ns_s::ST_TrueFalse& extrusion_element::get_lightharsh_attr() const
{
    if (m_lightharsh_attr)
    {
        return *m_lightharsh_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
}

bool extrusion_element::has_lightposition2_attr() const
{
    return m_has_lightposition2_attr;
}

void extrusion_element::set_lightposition2_attr(const XSD::string_& _lightposition2_attr)
{
    m_has_lightposition2_attr = true;
    m_lightposition2_attr = _lightposition2_attr;
}

const XSD::string_& extrusion_element::get_lightposition2_attr() const
{
    return m_lightposition2_attr;
}

bool extrusion_element::has_lightlevel2_attr() const
{
    return m_has_lightlevel2_attr;
}

void extrusion_element::set_lightlevel2_attr(const XSD::string_& _lightlevel2_attr)
{
    m_has_lightlevel2_attr = true;
    m_lightlevel2_attr = _lightlevel2_attr;
}

const XSD::string_& extrusion_element::get_lightlevel2_attr() const
{
    return m_lightlevel2_attr;
}

bool extrusion_element::has_lightharsh2_attr() const
{
    return m_has_lightharsh2_attr;
}

void extrusion_element::set_lightharsh2_attr(const ns_s::ST_TrueFalse& _lightharsh2_attr)
{
    m_has_lightharsh2_attr = true;
    m_lightharsh2_attr = new ns_s::ST_TrueFalse(_lightharsh2_attr);
}

const ns_s::ST_TrueFalse& extrusion_element::get_lightharsh2_attr() const
{
    if (m_lightharsh2_attr)
    {
        return *m_lightharsh2_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
}

extrusion_element* extrusion_element::default_instance_ = NULL;

// callout_element
callout_element::callout_element()
    :m_has_v_ext_attr(false),
     m_v_ext_attr(NULL),
     m_has_on_attr(false),
     m_on_attr(NULL),
     m_has_type_attr(false),
     m_type_attr(""),
     m_has_gap_attr(false),
     m_gap_attr(""),
     m_has_angle_attr(false),
     m_angle_attr(NULL),
     m_has_dropauto_attr(false),
     m_dropauto_attr(NULL),
     m_has_drop_attr(false),
     m_drop_attr(NULL),
     m_has_distance_attr(false),
     m_distance_attr(""),
     m_has_lengthspecified_attr(false),
     m_lengthspecified_attr(NULL),
     m_has_length_attr(false),
     m_length_attr(""),
     m_has_accentbar_attr(false),
     m_accentbar_attr(NULL),
     m_has_textborder_attr(false),
     m_textborder_attr(NULL),
     m_has_minusx_attr(false),
     m_minusx_attr(NULL),
     m_has_minusy_attr(false),
     m_minusy_attr(NULL)
{
}
callout_element::~callout_element()
{
    clear();
}
void callout_element::clear()
{
    m_has_v_ext_attr = false;

    if (m_v_ext_attr)
    {
        delete m_v_ext_attr;
        m_v_ext_attr = NULL;
    }


    m_has_on_attr = false;

    if (m_on_attr)
    {
        delete m_on_attr;
        m_on_attr = NULL;
    }


    m_has_type_attr = false;
    m_type_attr.clear();

    m_has_gap_attr = false;
    m_gap_attr.clear();

    m_has_angle_attr = false;

    if (m_angle_attr)
    {
        delete m_angle_attr;
        m_angle_attr = NULL;
    }


    m_has_dropauto_attr = false;

    if (m_dropauto_attr)
    {
        delete m_dropauto_attr;
        m_dropauto_attr = NULL;
    }


    m_has_drop_attr = false;

    if (m_drop_attr)
    {
        delete m_drop_attr;
        m_drop_attr = NULL;
    }


    m_has_distance_attr = false;
    m_distance_attr.clear();

    m_has_lengthspecified_attr = false;

    if (m_lengthspecified_attr)
    {
        delete m_lengthspecified_attr;
        m_lengthspecified_attr = NULL;
    }


    m_has_length_attr = false;
    m_length_attr.clear();

    m_has_accentbar_attr = false;

    if (m_accentbar_attr)
    {
        delete m_accentbar_attr;
        m_accentbar_attr = NULL;
    }


    m_has_textborder_attr = false;

    if (m_textborder_attr)
    {
        delete m_textborder_attr;
        m_textborder_attr = NULL;
    }


    m_has_minusx_attr = false;

    if (m_minusx_attr)
    {
        delete m_minusx_attr;
        m_minusx_attr = NULL;
    }


    m_has_minusy_attr = false;

    if (m_minusy_attr)
    {
        delete m_minusy_attr;
        m_minusy_attr = NULL;
    }

}

void callout_element::toXml(std::ostream& _outStream) const
{
    _outStream << "<o:callout";

    _outStream << " " << "xmlns:o=\"urn:schemas-microsoft-com:office:office\"";
    _outStream << " " << "xmlns:o=\"urn:schemas-microsoft-com:vml\"";
    _outStream << " " << "xmlns:o=\"http://schemas.openxmlformats.org/officeDocument/2006/sharedTypes\"";
    _outStream << " " << "xmlns:o=\"http://schemas.openxmlformats.org/officeDocument/2006/relationships\"";


    if (m_has_v_ext_attr)
    {
        m_v_ext_attr->toXmlAttr("v:ext", _outStream);
    }



    if (m_has_on_attr)
    {
        m_on_attr->toXmlAttr("on", _outStream);
    }



    if (m_has_type_attr)
    {
        _outStream << " " << "type" << "=\"" << m_type_attr << "\"";
    }



    if (m_has_gap_attr)
    {
        _outStream << " " << "gap" << "=\"" << m_gap_attr << "\"";
    }



    if (m_has_angle_attr)
    {
        m_angle_attr->toXmlAttr("angle", _outStream);
    }



    if (m_has_dropauto_attr)
    {
        m_dropauto_attr->toXmlAttr("dropauto", _outStream);
    }



    if (m_has_drop_attr)
    {
        m_drop_attr->toXmlAttr("drop", _outStream);
    }



    if (m_has_distance_attr)
    {
        _outStream << " " << "distance" << "=\"" << m_distance_attr << "\"";
    }



    if (m_has_lengthspecified_attr)
    {
        m_lengthspecified_attr->toXmlAttr("lengthspecified", _outStream);
    }



    if (m_has_length_attr)
    {
        _outStream << " " << "length" << "=\"" << m_length_attr << "\"";
    }



    if (m_has_accentbar_attr)
    {
        m_accentbar_attr->toXmlAttr("accentbar", _outStream);
    }



    if (m_has_textborder_attr)
    {
        m_textborder_attr->toXmlAttr("textborder", _outStream);
    }



    if (m_has_minusx_attr)
    {
        m_minusx_attr->toXmlAttr("minusx", _outStream);
    }



    if (m_has_minusy_attr)
    {
        m_minusy_attr->toXmlAttr("minusy", _outStream);
    }

    _outStream << ">";

    _outStream << "</o:callout>";
}

const callout_element& callout_element::default_instance()
{
    if (!callout_element::default_instance_)
    {
        callout_element::default_instance_ = new callout_element();
    }
    return *callout_element::default_instance_;
}

bool callout_element::has_v_ext_attr() const
{
    return m_has_v_ext_attr;
}

void callout_element::set_v_ext_attr(const ns_v::ST_Ext& _v_ext_attr)
{
    m_has_v_ext_attr = true;
    m_v_ext_attr = new ns_v::ST_Ext(_v_ext_attr);
}

const ns_v::ST_Ext& callout_element::get_v_ext_attr() const
{
    if (m_v_ext_attr)
    {
        return *m_v_ext_attr;
    }
    return ns_v::ST_Ext::default_instance();
}

bool callout_element::has_on_attr() const
{
    return m_has_on_attr;
}

void callout_element::set_on_attr(const ns_s::ST_TrueFalse& _on_attr)
{
    m_has_on_attr = true;
    m_on_attr = new ns_s::ST_TrueFalse(_on_attr);
}

const ns_s::ST_TrueFalse& callout_element::get_on_attr() const
{
    if (m_on_attr)
    {
        return *m_on_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
}

bool callout_element::has_type_attr() const
{
    return m_has_type_attr;
}

void callout_element::set_type_attr(const XSD::string_& _type_attr)
{
    m_has_type_attr = true;
    m_type_attr = _type_attr;
}

const XSD::string_& callout_element::get_type_attr() const
{
    return m_type_attr;
}

bool callout_element::has_gap_attr() const
{
    return m_has_gap_attr;
}

void callout_element::set_gap_attr(const XSD::string_& _gap_attr)
{
    m_has_gap_attr = true;
    m_gap_attr = _gap_attr;
}

const XSD::string_& callout_element::get_gap_attr() const
{
    return m_gap_attr;
}

bool callout_element::has_angle_attr() const
{
    return m_has_angle_attr;
}

void callout_element::set_angle_attr(const ST_Angle& _angle_attr)
{
    m_has_angle_attr = true;
    m_angle_attr = new ST_Angle(_angle_attr);
}

const ST_Angle& callout_element::get_angle_attr() const
{
    if (m_angle_attr)
    {
        return *m_angle_attr;
    }
    return ST_Angle::default_instance();
}

bool callout_element::has_dropauto_attr() const
{
    return m_has_dropauto_attr;
}

void callout_element::set_dropauto_attr(const ns_s::ST_TrueFalse& _dropauto_attr)
{
    m_has_dropauto_attr = true;
    m_dropauto_attr = new ns_s::ST_TrueFalse(_dropauto_attr);
}

const ns_s::ST_TrueFalse& callout_element::get_dropauto_attr() const
{
    if (m_dropauto_attr)
    {
        return *m_dropauto_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
}

bool callout_element::has_drop_attr() const
{
    return m_has_drop_attr;
}

void callout_element::set_drop_attr(const ST_CalloutDrop& _drop_attr)
{
    m_has_drop_attr = true;
    m_drop_attr = new ST_CalloutDrop(_drop_attr);
}

const ST_CalloutDrop& callout_element::get_drop_attr() const
{
    if (m_drop_attr)
    {
        return *m_drop_attr;
    }
    return ST_CalloutDrop::default_instance();
}

bool callout_element::has_distance_attr() const
{
    return m_has_distance_attr;
}

void callout_element::set_distance_attr(const XSD::string_& _distance_attr)
{
    m_has_distance_attr = true;
    m_distance_attr = _distance_attr;
}

const XSD::string_& callout_element::get_distance_attr() const
{
    return m_distance_attr;
}

bool callout_element::has_lengthspecified_attr() const
{
    return m_has_lengthspecified_attr;
}

void callout_element::set_lengthspecified_attr(const ns_s::ST_TrueFalse& _lengthspecified_attr)
{
    m_has_lengthspecified_attr = true;
    m_lengthspecified_attr = new ns_s::ST_TrueFalse(_lengthspecified_attr);
}

const ns_s::ST_TrueFalse& callout_element::get_lengthspecified_attr() const
{
    if (m_lengthspecified_attr)
    {
        return *m_lengthspecified_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
}

bool callout_element::has_length_attr() const
{
    return m_has_length_attr;
}

void callout_element::set_length_attr(const XSD::string_& _length_attr)
{
    m_has_length_attr = true;
    m_length_attr = _length_attr;
}

const XSD::string_& callout_element::get_length_attr() const
{
    return m_length_attr;
}

bool callout_element::has_accentbar_attr() const
{
    return m_has_accentbar_attr;
}

void callout_element::set_accentbar_attr(const ns_s::ST_TrueFalse& _accentbar_attr)
{
    m_has_accentbar_attr = true;
    m_accentbar_attr = new ns_s::ST_TrueFalse(_accentbar_attr);
}

const ns_s::ST_TrueFalse& callout_element::get_accentbar_attr() const
{
    if (m_accentbar_attr)
    {
        return *m_accentbar_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
}

bool callout_element::has_textborder_attr() const
{
    return m_has_textborder_attr;
}

void callout_element::set_textborder_attr(const ns_s::ST_TrueFalse& _textborder_attr)
{
    m_has_textborder_attr = true;
    m_textborder_attr = new ns_s::ST_TrueFalse(_textborder_attr);
}

const ns_s::ST_TrueFalse& callout_element::get_textborder_attr() const
{
    if (m_textborder_attr)
    {
        return *m_textborder_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
}

bool callout_element::has_minusx_attr() const
{
    return m_has_minusx_attr;
}

void callout_element::set_minusx_attr(const ns_s::ST_TrueFalse& _minusx_attr)
{
    m_has_minusx_attr = true;
    m_minusx_attr = new ns_s::ST_TrueFalse(_minusx_attr);
}

const ns_s::ST_TrueFalse& callout_element::get_minusx_attr() const
{
    if (m_minusx_attr)
    {
        return *m_minusx_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
}

bool callout_element::has_minusy_attr() const
{
    return m_has_minusy_attr;
}

void callout_element::set_minusy_attr(const ns_s::ST_TrueFalse& _minusy_attr)
{
    m_has_minusy_attr = true;
    m_minusy_attr = new ns_s::ST_TrueFalse(_minusy_attr);
}

const ns_s::ST_TrueFalse& callout_element::get_minusy_attr() const
{
    if (m_minusy_attr)
    {
        return *m_minusy_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
}

callout_element* callout_element::default_instance_ = NULL;

// lock_element
lock_element::lock_element()
    :m_has_v_ext_attr(false),
     m_v_ext_attr(NULL),
     m_has_position_attr(false),
     m_position_attr(NULL),
     m_has_selection_attr(false),
     m_selection_attr(NULL),
     m_has_grouping_attr(false),
     m_grouping_attr(NULL),
     m_has_ungrouping_attr(false),
     m_ungrouping_attr(NULL),
     m_has_rotation_attr(false),
     m_rotation_attr(NULL),
     m_has_cropping_attr(false),
     m_cropping_attr(NULL),
     m_has_verticies_attr(false),
     m_verticies_attr(NULL),
     m_has_adjusthandles_attr(false),
     m_adjusthandles_attr(NULL),
     m_has_text_attr(false),
     m_text_attr(NULL),
     m_has_aspectratio_attr(false),
     m_aspectratio_attr(NULL),
     m_has_shapetype_attr(false),
     m_shapetype_attr(NULL)
{
}
lock_element::~lock_element()
{
    clear();
}
void lock_element::clear()
{
    m_has_v_ext_attr = false;

    if (m_v_ext_attr)
    {
        delete m_v_ext_attr;
        m_v_ext_attr = NULL;
    }


    m_has_position_attr = false;

    if (m_position_attr)
    {
        delete m_position_attr;
        m_position_attr = NULL;
    }


    m_has_selection_attr = false;

    if (m_selection_attr)
    {
        delete m_selection_attr;
        m_selection_attr = NULL;
    }


    m_has_grouping_attr = false;

    if (m_grouping_attr)
    {
        delete m_grouping_attr;
        m_grouping_attr = NULL;
    }


    m_has_ungrouping_attr = false;

    if (m_ungrouping_attr)
    {
        delete m_ungrouping_attr;
        m_ungrouping_attr = NULL;
    }


    m_has_rotation_attr = false;

    if (m_rotation_attr)
    {
        delete m_rotation_attr;
        m_rotation_attr = NULL;
    }


    m_has_cropping_attr = false;

    if (m_cropping_attr)
    {
        delete m_cropping_attr;
        m_cropping_attr = NULL;
    }


    m_has_verticies_attr = false;

    if (m_verticies_attr)
    {
        delete m_verticies_attr;
        m_verticies_attr = NULL;
    }


    m_has_adjusthandles_attr = false;

    if (m_adjusthandles_attr)
    {
        delete m_adjusthandles_attr;
        m_adjusthandles_attr = NULL;
    }


    m_has_text_attr = false;

    if (m_text_attr)
    {
        delete m_text_attr;
        m_text_attr = NULL;
    }


    m_has_aspectratio_attr = false;

    if (m_aspectratio_attr)
    {
        delete m_aspectratio_attr;
        m_aspectratio_attr = NULL;
    }


    m_has_shapetype_attr = false;

    if (m_shapetype_attr)
    {
        delete m_shapetype_attr;
        m_shapetype_attr = NULL;
    }

}

void lock_element::toXml(std::ostream& _outStream) const
{
    _outStream << "<o:lock";

    _outStream << " " << "xmlns:o=\"urn:schemas-microsoft-com:office:office\"";
    _outStream << " " << "xmlns:o=\"urn:schemas-microsoft-com:vml\"";
    _outStream << " " << "xmlns:o=\"http://schemas.openxmlformats.org/officeDocument/2006/sharedTypes\"";
    _outStream << " " << "xmlns:o=\"http://schemas.openxmlformats.org/officeDocument/2006/relationships\"";


    if (m_has_v_ext_attr)
    {
        m_v_ext_attr->toXmlAttr("v:ext", _outStream);
    }



    if (m_has_position_attr)
    {
        m_position_attr->toXmlAttr("position", _outStream);
    }



    if (m_has_selection_attr)
    {
        m_selection_attr->toXmlAttr("selection", _outStream);
    }



    if (m_has_grouping_attr)
    {
        m_grouping_attr->toXmlAttr("grouping", _outStream);
    }



    if (m_has_ungrouping_attr)
    {
        m_ungrouping_attr->toXmlAttr("ungrouping", _outStream);
    }



    if (m_has_rotation_attr)
    {
        m_rotation_attr->toXmlAttr("rotation", _outStream);
    }



    if (m_has_cropping_attr)
    {
        m_cropping_attr->toXmlAttr("cropping", _outStream);
    }



    if (m_has_verticies_attr)
    {
        m_verticies_attr->toXmlAttr("verticies", _outStream);
    }



    if (m_has_adjusthandles_attr)
    {
        m_adjusthandles_attr->toXmlAttr("adjusthandles", _outStream);
    }



    if (m_has_text_attr)
    {
        m_text_attr->toXmlAttr("text", _outStream);
    }



    if (m_has_aspectratio_attr)
    {
        m_aspectratio_attr->toXmlAttr("aspectratio", _outStream);
    }



    if (m_has_shapetype_attr)
    {
        m_shapetype_attr->toXmlAttr("shapetype", _outStream);
    }

    _outStream << ">";

    _outStream << "</o:lock>";
}

const lock_element& lock_element::default_instance()
{
    if (!lock_element::default_instance_)
    {
        lock_element::default_instance_ = new lock_element();
    }
    return *lock_element::default_instance_;
}

bool lock_element::has_v_ext_attr() const
{
    return m_has_v_ext_attr;
}

void lock_element::set_v_ext_attr(const ns_v::ST_Ext& _v_ext_attr)
{
    m_has_v_ext_attr = true;
    m_v_ext_attr = new ns_v::ST_Ext(_v_ext_attr);
}

const ns_v::ST_Ext& lock_element::get_v_ext_attr() const
{
    if (m_v_ext_attr)
    {
        return *m_v_ext_attr;
    }
    return ns_v::ST_Ext::default_instance();
}

bool lock_element::has_position_attr() const
{
    return m_has_position_attr;
}

void lock_element::set_position_attr(const ns_s::ST_TrueFalse& _position_attr)
{
    m_has_position_attr = true;
    m_position_attr = new ns_s::ST_TrueFalse(_position_attr);
}

const ns_s::ST_TrueFalse& lock_element::get_position_attr() const
{
    if (m_position_attr)
    {
        return *m_position_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
}

bool lock_element::has_selection_attr() const
{
    return m_has_selection_attr;
}

void lock_element::set_selection_attr(const ns_s::ST_TrueFalse& _selection_attr)
{
    m_has_selection_attr = true;
    m_selection_attr = new ns_s::ST_TrueFalse(_selection_attr);
}

const ns_s::ST_TrueFalse& lock_element::get_selection_attr() const
{
    if (m_selection_attr)
    {
        return *m_selection_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
}

bool lock_element::has_grouping_attr() const
{
    return m_has_grouping_attr;
}

void lock_element::set_grouping_attr(const ns_s::ST_TrueFalse& _grouping_attr)
{
    m_has_grouping_attr = true;
    m_grouping_attr = new ns_s::ST_TrueFalse(_grouping_attr);
}

const ns_s::ST_TrueFalse& lock_element::get_grouping_attr() const
{
    if (m_grouping_attr)
    {
        return *m_grouping_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
}

bool lock_element::has_ungrouping_attr() const
{
    return m_has_ungrouping_attr;
}

void lock_element::set_ungrouping_attr(const ns_s::ST_TrueFalse& _ungrouping_attr)
{
    m_has_ungrouping_attr = true;
    m_ungrouping_attr = new ns_s::ST_TrueFalse(_ungrouping_attr);
}

const ns_s::ST_TrueFalse& lock_element::get_ungrouping_attr() const
{
    if (m_ungrouping_attr)
    {
        return *m_ungrouping_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
}

bool lock_element::has_rotation_attr() const
{
    return m_has_rotation_attr;
}

void lock_element::set_rotation_attr(const ns_s::ST_TrueFalse& _rotation_attr)
{
    m_has_rotation_attr = true;
    m_rotation_attr = new ns_s::ST_TrueFalse(_rotation_attr);
}

const ns_s::ST_TrueFalse& lock_element::get_rotation_attr() const
{
    if (m_rotation_attr)
    {
        return *m_rotation_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
}

bool lock_element::has_cropping_attr() const
{
    return m_has_cropping_attr;
}

void lock_element::set_cropping_attr(const ns_s::ST_TrueFalse& _cropping_attr)
{
    m_has_cropping_attr = true;
    m_cropping_attr = new ns_s::ST_TrueFalse(_cropping_attr);
}

const ns_s::ST_TrueFalse& lock_element::get_cropping_attr() const
{
    if (m_cropping_attr)
    {
        return *m_cropping_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
}

bool lock_element::has_verticies_attr() const
{
    return m_has_verticies_attr;
}

void lock_element::set_verticies_attr(const ns_s::ST_TrueFalse& _verticies_attr)
{
    m_has_verticies_attr = true;
    m_verticies_attr = new ns_s::ST_TrueFalse(_verticies_attr);
}

const ns_s::ST_TrueFalse& lock_element::get_verticies_attr() const
{
    if (m_verticies_attr)
    {
        return *m_verticies_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
}

bool lock_element::has_adjusthandles_attr() const
{
    return m_has_adjusthandles_attr;
}

void lock_element::set_adjusthandles_attr(const ns_s::ST_TrueFalse& _adjusthandles_attr)
{
    m_has_adjusthandles_attr = true;
    m_adjusthandles_attr = new ns_s::ST_TrueFalse(_adjusthandles_attr);
}

const ns_s::ST_TrueFalse& lock_element::get_adjusthandles_attr() const
{
    if (m_adjusthandles_attr)
    {
        return *m_adjusthandles_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
}

bool lock_element::has_text_attr() const
{
    return m_has_text_attr;
}

void lock_element::set_text_attr(const ns_s::ST_TrueFalse& _text_attr)
{
    m_has_text_attr = true;
    m_text_attr = new ns_s::ST_TrueFalse(_text_attr);
}

const ns_s::ST_TrueFalse& lock_element::get_text_attr() const
{
    if (m_text_attr)
    {
        return *m_text_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
}

bool lock_element::has_aspectratio_attr() const
{
    return m_has_aspectratio_attr;
}

void lock_element::set_aspectratio_attr(const ns_s::ST_TrueFalse& _aspectratio_attr)
{
    m_has_aspectratio_attr = true;
    m_aspectratio_attr = new ns_s::ST_TrueFalse(_aspectratio_attr);
}

const ns_s::ST_TrueFalse& lock_element::get_aspectratio_attr() const
{
    if (m_aspectratio_attr)
    {
        return *m_aspectratio_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
}

bool lock_element::has_shapetype_attr() const
{
    return m_has_shapetype_attr;
}

void lock_element::set_shapetype_attr(const ns_s::ST_TrueFalse& _shapetype_attr)
{
    m_has_shapetype_attr = true;
    m_shapetype_attr = new ns_s::ST_TrueFalse(_shapetype_attr);
}

const ns_s::ST_TrueFalse& lock_element::get_shapetype_attr() const
{
    if (m_shapetype_attr)
    {
        return *m_shapetype_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
}

lock_element* lock_element::default_instance_ = NULL;

// OLEObject_element
OLEObject_element::OLEObject_element()
    :m_has_LinkType(false),
     m_LinkType(NULL),
     m_has_LockedField(false),
     m_LockedField(NULL),
     m_has_FieldCodes(false),
     m_FieldCodes(""),
     m_has_Type_attr(false),
     m_Type_attr(NULL),
     m_has_ProgID_attr(false),
     m_ProgID_attr(""),
     m_has_ShapeID_attr(false),
     m_ShapeID_attr(""),
     m_has_DrawAspect_attr(false),
     m_DrawAspect_attr(NULL),
     m_has_ObjectID_attr(false),
     m_ObjectID_attr(""),
     m_has_r_id_attr(false),
     m_r_id_attr(NULL),
     m_has_UpdateMode_attr(false),
     m_UpdateMode_attr(NULL)
{
}
OLEObject_element::~OLEObject_element()
{
    clear();
}
bool OLEObject_element::has_LinkType() const
{
    return m_has_LinkType;
}

ST_OLELinkType* OLEObject_element::mutable_LinkType()
{
    m_has_LinkType = true;
    if (!m_LinkType)
    {
        m_LinkType = new ST_OLELinkType();
    }
    return m_LinkType;
}

const ST_OLELinkType& OLEObject_element::get_LinkType() const
{
    if (m_LinkType)
    {
        return *m_LinkType;
    }
    return ST_OLELinkType::default_instance();
}

bool OLEObject_element::has_LockedField() const
{
    return m_has_LockedField;
}

ns_s::ST_TrueFalseBlank* OLEObject_element::mutable_LockedField()
{
    m_has_LockedField = true;
    if (!m_LockedField)
    {
        m_LockedField = new ns_s::ST_TrueFalseBlank();
    }
    return m_LockedField;
}

const ns_s::ST_TrueFalseBlank& OLEObject_element::get_LockedField() const
{
    if (m_LockedField)
    {
        return *m_LockedField;
    }
    return ns_s::ST_TrueFalseBlank::default_instance();
}

bool OLEObject_element::has_FieldCodes() const
{
    return m_has_FieldCodes;
}

void OLEObject_element::set_FieldCodes(const XSD::string_& _FieldCodes)
{
    m_has_FieldCodes = true;
    m_FieldCodes = _FieldCodes;
}

const XSD::string_& OLEObject_element::get_FieldCodes() const
{
    return m_FieldCodes;
}

void OLEObject_element::clear()
{
    m_has_Type_attr = false;

    if (m_Type_attr)
    {
        delete m_Type_attr;
        m_Type_attr = NULL;
    }


    m_has_ProgID_attr = false;
    m_ProgID_attr.clear();

    m_has_ShapeID_attr = false;
    m_ShapeID_attr.clear();

    m_has_DrawAspect_attr = false;

    if (m_DrawAspect_attr)
    {
        delete m_DrawAspect_attr;
        m_DrawAspect_attr = NULL;
    }


    m_has_ObjectID_attr = false;
    m_ObjectID_attr.clear();

    m_has_r_id_attr = false;

    if (m_r_id_attr)
    {
        delete m_r_id_attr;
        m_r_id_attr = NULL;
    }


    m_has_UpdateMode_attr = false;

    if (m_UpdateMode_attr)
    {
        delete m_UpdateMode_attr;
        m_UpdateMode_attr = NULL;
    }


    m_has_LinkType = false;

    if (m_LinkType)
    {
        delete m_LinkType;
        m_LinkType = NULL;
    }


    m_has_LockedField = false;

    if (m_LockedField)
    {
        delete m_LockedField;
        m_LockedField = NULL;
    }


    m_has_FieldCodes = false;
    m_FieldCodes.clear();
}

void OLEObject_element::toXml(std::ostream& _outStream) const
{
    _outStream << "<o:OLEObject";

    _outStream << " " << "xmlns:o=\"urn:schemas-microsoft-com:office:office\"";
    _outStream << " " << "xmlns:o=\"urn:schemas-microsoft-com:vml\"";
    _outStream << " " << "xmlns:o=\"http://schemas.openxmlformats.org/officeDocument/2006/sharedTypes\"";
    _outStream << " " << "xmlns:o=\"http://schemas.openxmlformats.org/officeDocument/2006/relationships\"";


    if (m_has_Type_attr)
    {
        m_Type_attr->toXmlAttr("Type", _outStream);
    }



    if (m_has_ProgID_attr)
    {
        _outStream << " " << "ProgID" << "=\"" << m_ProgID_attr << "\"";
    }



    if (m_has_ShapeID_attr)
    {
        _outStream << " " << "ShapeID" << "=\"" << m_ShapeID_attr << "\"";
    }



    if (m_has_DrawAspect_attr)
    {
        m_DrawAspect_attr->toXmlAttr("DrawAspect", _outStream);
    }



    if (m_has_ObjectID_attr)
    {
        _outStream << " " << "ObjectID" << "=\"" << m_ObjectID_attr << "\"";
    }



    if (m_has_r_id_attr)
    {
        m_r_id_attr->toXmlAttr("r:id", _outStream);
    }



    if (m_has_UpdateMode_attr)
    {
        m_UpdateMode_attr->toXmlAttr("UpdateMode", _outStream);
    }

    _outStream << ">";


    if (m_has_LinkType)
    {
        _outStream << "<o:LinkType>" << m_LinkType->toString() << "</o:LinkType>";
    }


    if (m_has_LockedField)
    {
        _outStream << "<o:LockedField>" << m_LockedField->toString() << "</o:LockedField>";
    }


    if (m_has_FieldCodes)
    {
        _outStream << "<o:FieldCodes>" << m_FieldCodes << "</o:FieldCodes>";
    }

    _outStream << "</o:OLEObject>";
}

const OLEObject_element& OLEObject_element::default_instance()
{
    if (!OLEObject_element::default_instance_)
    {
        OLEObject_element::default_instance_ = new OLEObject_element();
    }
    return *OLEObject_element::default_instance_;
}

bool OLEObject_element::has_Type_attr() const
{
    return m_has_Type_attr;
}

void OLEObject_element::set_Type_attr(const ST_OLEType& _Type_attr)
{
    m_has_Type_attr = true;
    m_Type_attr = new ST_OLEType(_Type_attr);
}

const ST_OLEType& OLEObject_element::get_Type_attr() const
{
    if (m_Type_attr)
    {
        return *m_Type_attr;
    }
    return ST_OLEType::default_instance();
}

bool OLEObject_element::has_ProgID_attr() const
{
    return m_has_ProgID_attr;
}

void OLEObject_element::set_ProgID_attr(const XSD::string_& _ProgID_attr)
{
    m_has_ProgID_attr = true;
    m_ProgID_attr = _ProgID_attr;
}

const XSD::string_& OLEObject_element::get_ProgID_attr() const
{
    return m_ProgID_attr;
}

bool OLEObject_element::has_ShapeID_attr() const
{
    return m_has_ShapeID_attr;
}

void OLEObject_element::set_ShapeID_attr(const XSD::string_& _ShapeID_attr)
{
    m_has_ShapeID_attr = true;
    m_ShapeID_attr = _ShapeID_attr;
}

const XSD::string_& OLEObject_element::get_ShapeID_attr() const
{
    return m_ShapeID_attr;
}

bool OLEObject_element::has_DrawAspect_attr() const
{
    return m_has_DrawAspect_attr;
}

void OLEObject_element::set_DrawAspect_attr(const ST_OLEDrawAspect& _DrawAspect_attr)
{
    m_has_DrawAspect_attr = true;
    m_DrawAspect_attr = new ST_OLEDrawAspect(_DrawAspect_attr);
}

const ST_OLEDrawAspect& OLEObject_element::get_DrawAspect_attr() const
{
    if (m_DrawAspect_attr)
    {
        return *m_DrawAspect_attr;
    }
    return ST_OLEDrawAspect::default_instance();
}

bool OLEObject_element::has_ObjectID_attr() const
{
    return m_has_ObjectID_attr;
}

void OLEObject_element::set_ObjectID_attr(const XSD::string_& _ObjectID_attr)
{
    m_has_ObjectID_attr = true;
    m_ObjectID_attr = _ObjectID_attr;
}

const XSD::string_& OLEObject_element::get_ObjectID_attr() const
{
    return m_ObjectID_attr;
}

bool OLEObject_element::has_r_id_attr() const
{
    return m_has_r_id_attr;
}

void OLEObject_element::set_r_id_attr(const ns_r::ST_RelationshipId& _r_id_attr)
{
    m_has_r_id_attr = true;
    m_r_id_attr = new ns_r::ST_RelationshipId(_r_id_attr);
}

const ns_r::ST_RelationshipId& OLEObject_element::get_r_id_attr() const
{
    if (m_r_id_attr)
    {
        return *m_r_id_attr;
    }
    return ns_r::ST_RelationshipId::default_instance();
}

bool OLEObject_element::has_UpdateMode_attr() const
{
    return m_has_UpdateMode_attr;
}

void OLEObject_element::set_UpdateMode_attr(const ST_OLEUpdateMode& _UpdateMode_attr)
{
    m_has_UpdateMode_attr = true;
    m_UpdateMode_attr = new ST_OLEUpdateMode(_UpdateMode_attr);
}

const ST_OLEUpdateMode& OLEObject_element::get_UpdateMode_attr() const
{
    if (m_UpdateMode_attr)
    {
        return *m_UpdateMode_attr;
    }
    return ST_OLEUpdateMode::default_instance();
}

OLEObject_element* OLEObject_element::default_instance_ = NULL;

// complex_element
complex_element::complex_element()
    :m_has_v_ext_attr(false),
     m_v_ext_attr(NULL)
{
}
complex_element::~complex_element()
{
    clear();
}
void complex_element::clear()
{
    m_has_v_ext_attr = false;

    if (m_v_ext_attr)
    {
        delete m_v_ext_attr;
        m_v_ext_attr = NULL;
    }

}

void complex_element::toXml(std::ostream& _outStream) const
{
    _outStream << "<o:complex";

    _outStream << " " << "xmlns:o=\"urn:schemas-microsoft-com:office:office\"";
    _outStream << " " << "xmlns:o=\"urn:schemas-microsoft-com:vml\"";
    _outStream << " " << "xmlns:o=\"http://schemas.openxmlformats.org/officeDocument/2006/sharedTypes\"";
    _outStream << " " << "xmlns:o=\"http://schemas.openxmlformats.org/officeDocument/2006/relationships\"";


    if (m_has_v_ext_attr)
    {
        m_v_ext_attr->toXmlAttr("v:ext", _outStream);
    }

    _outStream << ">";

    _outStream << "</o:complex>";
}

const complex_element& complex_element::default_instance()
{
    if (!complex_element::default_instance_)
    {
        complex_element::default_instance_ = new complex_element();
    }
    return *complex_element::default_instance_;
}

bool complex_element::has_v_ext_attr() const
{
    return m_has_v_ext_attr;
}

void complex_element::set_v_ext_attr(const ns_v::ST_Ext& _v_ext_attr)
{
    m_has_v_ext_attr = true;
    m_v_ext_attr = new ns_v::ST_Ext(_v_ext_attr);
}

const ns_v::ST_Ext& complex_element::get_v_ext_attr() const
{
    if (m_v_ext_attr)
    {
        return *m_v_ext_attr;
    }
    return ns_v::ST_Ext::default_instance();
}

complex_element* complex_element::default_instance_ = NULL;

// left_element
left_element::left_element()
    :m_has_v_ext_attr(false),
     m_v_ext_attr(NULL),
     m_has_on_attr(false),
     m_on_attr(NULL),
     m_has_weight_attr(false),
     m_weight_attr(""),
     m_has_color_attr(false),
     m_color_attr(NULL),
     m_has_color2_attr(false),
     m_color2_attr(NULL),
     m_has_opacity_attr(false),
     m_opacity_attr(""),
     m_has_linestyle_attr(false),
     m_linestyle_attr(NULL),
     m_has_miterlimit_attr(false),
     m_miterlimit_attr(0),
     m_has_joinstyle_attr(false),
     m_joinstyle_attr(NULL),
     m_has_endcap_attr(false),
     m_endcap_attr(NULL),
     m_has_dashstyle_attr(false),
     m_dashstyle_attr(""),
     m_has_insetpen_attr(false),
     m_insetpen_attr(NULL),
     m_has_filltype_attr(false),
     m_filltype_attr(NULL),
     m_has_src_attr(false),
     m_src_attr(""),
     m_has_imageaspect_attr(false),
     m_imageaspect_attr(NULL),
     m_has_imagesize_attr(false),
     m_imagesize_attr(""),
     m_has_imagealignshape_attr(false),
     m_imagealignshape_attr(NULL),
     m_has_startarrow_attr(false),
     m_startarrow_attr(NULL),
     m_has_startarrowwidth_attr(false),
     m_startarrowwidth_attr(NULL),
     m_has_startarrowlength_attr(false),
     m_startarrowlength_attr(NULL),
     m_has_endarrow_attr(false),
     m_endarrow_attr(NULL),
     m_has_endarrowwidth_attr(false),
     m_endarrowwidth_attr(NULL),
     m_has_endarrowlength_attr(false),
     m_endarrowlength_attr(NULL),
     m_has_href_attr(false),
     m_href_attr(""),
     m_has_althref_attr(false),
     m_althref_attr(""),
     m_has_title_attr(false),
     m_title_attr(""),
     m_has_forcedash_attr(false),
     m_forcedash_attr(NULL)
{
}
left_element::~left_element()
{
    clear();
}
void left_element::clear()
{
    m_has_v_ext_attr = false;

    if (m_v_ext_attr)
    {
        delete m_v_ext_attr;
        m_v_ext_attr = NULL;
    }


    m_has_on_attr = false;

    if (m_on_attr)
    {
        delete m_on_attr;
        m_on_attr = NULL;
    }


    m_has_weight_attr = false;
    m_weight_attr.clear();

    m_has_color_attr = false;

    if (m_color_attr)
    {
        delete m_color_attr;
        m_color_attr = NULL;
    }


    m_has_color2_attr = false;

    if (m_color2_attr)
    {
        delete m_color2_attr;
        m_color2_attr = NULL;
    }


    m_has_opacity_attr = false;
    m_opacity_attr.clear();

    m_has_linestyle_attr = false;

    if (m_linestyle_attr)
    {
        delete m_linestyle_attr;
        m_linestyle_attr = NULL;
    }


    m_has_miterlimit_attr = false;
    m_miterlimit_attr = 0;

    m_has_joinstyle_attr = false;

    if (m_joinstyle_attr)
    {
        delete m_joinstyle_attr;
        m_joinstyle_attr = NULL;
    }


    m_has_endcap_attr = false;

    if (m_endcap_attr)
    {
        delete m_endcap_attr;
        m_endcap_attr = NULL;
    }


    m_has_dashstyle_attr = false;
    m_dashstyle_attr.clear();

    m_has_insetpen_attr = false;

    if (m_insetpen_attr)
    {
        delete m_insetpen_attr;
        m_insetpen_attr = NULL;
    }


    m_has_filltype_attr = false;

    if (m_filltype_attr)
    {
        delete m_filltype_attr;
        m_filltype_attr = NULL;
    }


    m_has_src_attr = false;
    m_src_attr.clear();

    m_has_imageaspect_attr = false;

    if (m_imageaspect_attr)
    {
        delete m_imageaspect_attr;
        m_imageaspect_attr = NULL;
    }


    m_has_imagesize_attr = false;
    m_imagesize_attr.clear();

    m_has_imagealignshape_attr = false;

    if (m_imagealignshape_attr)
    {
        delete m_imagealignshape_attr;
        m_imagealignshape_attr = NULL;
    }


    m_has_startarrow_attr = false;

    if (m_startarrow_attr)
    {
        delete m_startarrow_attr;
        m_startarrow_attr = NULL;
    }


    m_has_startarrowwidth_attr = false;

    if (m_startarrowwidth_attr)
    {
        delete m_startarrowwidth_attr;
        m_startarrowwidth_attr = NULL;
    }


    m_has_startarrowlength_attr = false;

    if (m_startarrowlength_attr)
    {
        delete m_startarrowlength_attr;
        m_startarrowlength_attr = NULL;
    }


    m_has_endarrow_attr = false;

    if (m_endarrow_attr)
    {
        delete m_endarrow_attr;
        m_endarrow_attr = NULL;
    }


    m_has_endarrowwidth_attr = false;

    if (m_endarrowwidth_attr)
    {
        delete m_endarrowwidth_attr;
        m_endarrowwidth_attr = NULL;
    }


    m_has_endarrowlength_attr = false;

    if (m_endarrowlength_attr)
    {
        delete m_endarrowlength_attr;
        m_endarrowlength_attr = NULL;
    }


    m_has_href_attr = false;
    m_href_attr.clear();

    m_has_althref_attr = false;
    m_althref_attr.clear();

    m_has_title_attr = false;
    m_title_attr.clear();

    m_has_forcedash_attr = false;

    if (m_forcedash_attr)
    {
        delete m_forcedash_attr;
        m_forcedash_attr = NULL;
    }

}

void left_element::toXml(std::ostream& _outStream) const
{
    _outStream << "<o:left";

    _outStream << " " << "xmlns:o=\"urn:schemas-microsoft-com:office:office\"";
    _outStream << " " << "xmlns:o=\"urn:schemas-microsoft-com:vml\"";
    _outStream << " " << "xmlns:o=\"http://schemas.openxmlformats.org/officeDocument/2006/sharedTypes\"";
    _outStream << " " << "xmlns:o=\"http://schemas.openxmlformats.org/officeDocument/2006/relationships\"";


    if (m_has_v_ext_attr)
    {
        m_v_ext_attr->toXmlAttr("v:ext", _outStream);
    }



    if (m_has_on_attr)
    {
        m_on_attr->toXmlAttr("on", _outStream);
    }



    if (m_has_weight_attr)
    {
        _outStream << " " << "weight" << "=\"" << m_weight_attr << "\"";
    }



    if (m_has_color_attr)
    {
        m_color_attr->toXmlAttr("color", _outStream);
    }



    if (m_has_color2_attr)
    {
        m_color2_attr->toXmlAttr("color2", _outStream);
    }



    if (m_has_opacity_attr)
    {
        _outStream << " " << "opacity" << "=\"" << m_opacity_attr << "\"";
    }



    if (m_has_linestyle_attr)
    {
        m_linestyle_attr->toXmlAttr("linestyle", _outStream);
    }



    if (m_has_miterlimit_attr)
    {
        _outStream << " " << "miterlimit" << "=\"" << m_miterlimit_attr << "\"";
    }



    if (m_has_joinstyle_attr)
    {
        m_joinstyle_attr->toXmlAttr("joinstyle", _outStream);
    }



    if (m_has_endcap_attr)
    {
        m_endcap_attr->toXmlAttr("endcap", _outStream);
    }



    if (m_has_dashstyle_attr)
    {
        _outStream << " " << "dashstyle" << "=\"" << m_dashstyle_attr << "\"";
    }



    if (m_has_insetpen_attr)
    {
        m_insetpen_attr->toXmlAttr("insetpen", _outStream);
    }



    if (m_has_filltype_attr)
    {
        m_filltype_attr->toXmlAttr("filltype", _outStream);
    }



    if (m_has_src_attr)
    {
        _outStream << " " << "src" << "=\"" << m_src_attr << "\"";
    }



    if (m_has_imageaspect_attr)
    {
        m_imageaspect_attr->toXmlAttr("imageaspect", _outStream);
    }



    if (m_has_imagesize_attr)
    {
        _outStream << " " << "imagesize" << "=\"" << m_imagesize_attr << "\"";
    }



    if (m_has_imagealignshape_attr)
    {
        m_imagealignshape_attr->toXmlAttr("imagealignshape", _outStream);
    }



    if (m_has_startarrow_attr)
    {
        m_startarrow_attr->toXmlAttr("startarrow", _outStream);
    }



    if (m_has_startarrowwidth_attr)
    {
        m_startarrowwidth_attr->toXmlAttr("startarrowwidth", _outStream);
    }



    if (m_has_startarrowlength_attr)
    {
        m_startarrowlength_attr->toXmlAttr("startarrowlength", _outStream);
    }



    if (m_has_endarrow_attr)
    {
        m_endarrow_attr->toXmlAttr("endarrow", _outStream);
    }



    if (m_has_endarrowwidth_attr)
    {
        m_endarrowwidth_attr->toXmlAttr("endarrowwidth", _outStream);
    }



    if (m_has_endarrowlength_attr)
    {
        m_endarrowlength_attr->toXmlAttr("endarrowlength", _outStream);
    }



    if (m_has_href_attr)
    {
        _outStream << " " << "href" << "=\"" << m_href_attr << "\"";
    }



    if (m_has_althref_attr)
    {
        _outStream << " " << "althref" << "=\"" << m_althref_attr << "\"";
    }



    if (m_has_title_attr)
    {
        _outStream << " " << "title" << "=\"" << m_title_attr << "\"";
    }



    if (m_has_forcedash_attr)
    {
        m_forcedash_attr->toXmlAttr("forcedash", _outStream);
    }

    _outStream << ">";

    _outStream << "</o:left>";
}

const left_element& left_element::default_instance()
{
    if (!left_element::default_instance_)
    {
        left_element::default_instance_ = new left_element();
    }
    return *left_element::default_instance_;
}

bool left_element::has_v_ext_attr() const
{
    return m_has_v_ext_attr;
}

void left_element::set_v_ext_attr(const ns_v::ST_Ext& _v_ext_attr)
{
    m_has_v_ext_attr = true;
    m_v_ext_attr = new ns_v::ST_Ext(_v_ext_attr);
}

const ns_v::ST_Ext& left_element::get_v_ext_attr() const
{
    if (m_v_ext_attr)
    {
        return *m_v_ext_attr;
    }
    return ns_v::ST_Ext::default_instance();
}

bool left_element::has_on_attr() const
{
    return m_has_on_attr;
}

void left_element::set_on_attr(const ns_s::ST_TrueFalse& _on_attr)
{
    m_has_on_attr = true;
    m_on_attr = new ns_s::ST_TrueFalse(_on_attr);
}

const ns_s::ST_TrueFalse& left_element::get_on_attr() const
{
    if (m_on_attr)
    {
        return *m_on_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
}

bool left_element::has_weight_attr() const
{
    return m_has_weight_attr;
}

void left_element::set_weight_attr(const XSD::string_& _weight_attr)
{
    m_has_weight_attr = true;
    m_weight_attr = _weight_attr;
}

const XSD::string_& left_element::get_weight_attr() const
{
    return m_weight_attr;
}

bool left_element::has_color_attr() const
{
    return m_has_color_attr;
}

void left_element::set_color_attr(const ns_s::ST_ColorType& _color_attr)
{
    m_has_color_attr = true;
    m_color_attr = new ns_s::ST_ColorType(_color_attr);
}

const ns_s::ST_ColorType& left_element::get_color_attr() const
{
    if (m_color_attr)
    {
        return *m_color_attr;
    }
    return ns_s::ST_ColorType::default_instance();
}

bool left_element::has_color2_attr() const
{
    return m_has_color2_attr;
}

void left_element::set_color2_attr(const ns_s::ST_ColorType& _color2_attr)
{
    m_has_color2_attr = true;
    m_color2_attr = new ns_s::ST_ColorType(_color2_attr);
}

const ns_s::ST_ColorType& left_element::get_color2_attr() const
{
    if (m_color2_attr)
    {
        return *m_color2_attr;
    }
    return ns_s::ST_ColorType::default_instance();
}

bool left_element::has_opacity_attr() const
{
    return m_has_opacity_attr;
}

void left_element::set_opacity_attr(const XSD::string_& _opacity_attr)
{
    m_has_opacity_attr = true;
    m_opacity_attr = _opacity_attr;
}

const XSD::string_& left_element::get_opacity_attr() const
{
    return m_opacity_attr;
}

bool left_element::has_linestyle_attr() const
{
    return m_has_linestyle_attr;
}

void left_element::set_linestyle_attr(const ns_v::ST_StrokeLineStyle& _linestyle_attr)
{
    m_has_linestyle_attr = true;
    m_linestyle_attr = new ns_v::ST_StrokeLineStyle(_linestyle_attr);
}

const ns_v::ST_StrokeLineStyle& left_element::get_linestyle_attr() const
{
    if (m_linestyle_attr)
    {
        return *m_linestyle_attr;
    }
    return ns_v::ST_StrokeLineStyle::default_instance();
}

bool left_element::has_miterlimit_attr() const
{
    return m_has_miterlimit_attr;
}

void left_element::set_miterlimit_attr(const XSD::decimal_& _miterlimit_attr)
{
    m_has_miterlimit_attr = true;
    m_miterlimit_attr = _miterlimit_attr;
}

const XSD::decimal_& left_element::get_miterlimit_attr() const
{
    return m_miterlimit_attr;
}

bool left_element::has_joinstyle_attr() const
{
    return m_has_joinstyle_attr;
}

void left_element::set_joinstyle_attr(const ns_v::ST_StrokeJoinStyle& _joinstyle_attr)
{
    m_has_joinstyle_attr = true;
    m_joinstyle_attr = new ns_v::ST_StrokeJoinStyle(_joinstyle_attr);
}

const ns_v::ST_StrokeJoinStyle& left_element::get_joinstyle_attr() const
{
    if (m_joinstyle_attr)
    {
        return *m_joinstyle_attr;
    }
    return ns_v::ST_StrokeJoinStyle::default_instance();
}

bool left_element::has_endcap_attr() const
{
    return m_has_endcap_attr;
}

void left_element::set_endcap_attr(const ns_v::ST_StrokeEndCap& _endcap_attr)
{
    m_has_endcap_attr = true;
    m_endcap_attr = new ns_v::ST_StrokeEndCap(_endcap_attr);
}

const ns_v::ST_StrokeEndCap& left_element::get_endcap_attr() const
{
    if (m_endcap_attr)
    {
        return *m_endcap_attr;
    }
    return ns_v::ST_StrokeEndCap::default_instance();
}

bool left_element::has_dashstyle_attr() const
{
    return m_has_dashstyle_attr;
}

void left_element::set_dashstyle_attr(const XSD::string_& _dashstyle_attr)
{
    m_has_dashstyle_attr = true;
    m_dashstyle_attr = _dashstyle_attr;
}

const XSD::string_& left_element::get_dashstyle_attr() const
{
    return m_dashstyle_attr;
}

bool left_element::has_insetpen_attr() const
{
    return m_has_insetpen_attr;
}

void left_element::set_insetpen_attr(const ns_s::ST_TrueFalse& _insetpen_attr)
{
    m_has_insetpen_attr = true;
    m_insetpen_attr = new ns_s::ST_TrueFalse(_insetpen_attr);
}

const ns_s::ST_TrueFalse& left_element::get_insetpen_attr() const
{
    if (m_insetpen_attr)
    {
        return *m_insetpen_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
}

bool left_element::has_filltype_attr() const
{
    return m_has_filltype_attr;
}

void left_element::set_filltype_attr(const ns_v::ST_FillType& _filltype_attr)
{
    m_has_filltype_attr = true;
    m_filltype_attr = new ns_v::ST_FillType(_filltype_attr);
}

const ns_v::ST_FillType& left_element::get_filltype_attr() const
{
    if (m_filltype_attr)
    {
        return *m_filltype_attr;
    }
    return ns_v::ST_FillType::default_instance();
}

bool left_element::has_src_attr() const
{
    return m_has_src_attr;
}

void left_element::set_src_attr(const XSD::string_& _src_attr)
{
    m_has_src_attr = true;
    m_src_attr = _src_attr;
}

const XSD::string_& left_element::get_src_attr() const
{
    return m_src_attr;
}

bool left_element::has_imageaspect_attr() const
{
    return m_has_imageaspect_attr;
}

void left_element::set_imageaspect_attr(const ns_v::ST_ImageAspect& _imageaspect_attr)
{
    m_has_imageaspect_attr = true;
    m_imageaspect_attr = new ns_v::ST_ImageAspect(_imageaspect_attr);
}

const ns_v::ST_ImageAspect& left_element::get_imageaspect_attr() const
{
    if (m_imageaspect_attr)
    {
        return *m_imageaspect_attr;
    }
    return ns_v::ST_ImageAspect::default_instance();
}

bool left_element::has_imagesize_attr() const
{
    return m_has_imagesize_attr;
}

void left_element::set_imagesize_attr(const XSD::string_& _imagesize_attr)
{
    m_has_imagesize_attr = true;
    m_imagesize_attr = _imagesize_attr;
}

const XSD::string_& left_element::get_imagesize_attr() const
{
    return m_imagesize_attr;
}

bool left_element::has_imagealignshape_attr() const
{
    return m_has_imagealignshape_attr;
}

void left_element::set_imagealignshape_attr(const ns_s::ST_TrueFalse& _imagealignshape_attr)
{
    m_has_imagealignshape_attr = true;
    m_imagealignshape_attr = new ns_s::ST_TrueFalse(_imagealignshape_attr);
}

const ns_s::ST_TrueFalse& left_element::get_imagealignshape_attr() const
{
    if (m_imagealignshape_attr)
    {
        return *m_imagealignshape_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
}

bool left_element::has_startarrow_attr() const
{
    return m_has_startarrow_attr;
}

void left_element::set_startarrow_attr(const ns_v::ST_StrokeArrowType& _startarrow_attr)
{
    m_has_startarrow_attr = true;
    m_startarrow_attr = new ns_v::ST_StrokeArrowType(_startarrow_attr);
}

const ns_v::ST_StrokeArrowType& left_element::get_startarrow_attr() const
{
    if (m_startarrow_attr)
    {
        return *m_startarrow_attr;
    }
    return ns_v::ST_StrokeArrowType::default_instance();
}

bool left_element::has_startarrowwidth_attr() const
{
    return m_has_startarrowwidth_attr;
}

void left_element::set_startarrowwidth_attr(const ns_v::ST_StrokeArrowWidth& _startarrowwidth_attr)
{
    m_has_startarrowwidth_attr = true;
    m_startarrowwidth_attr = new ns_v::ST_StrokeArrowWidth(_startarrowwidth_attr);
}

const ns_v::ST_StrokeArrowWidth& left_element::get_startarrowwidth_attr() const
{
    if (m_startarrowwidth_attr)
    {
        return *m_startarrowwidth_attr;
    }
    return ns_v::ST_StrokeArrowWidth::default_instance();
}

bool left_element::has_startarrowlength_attr() const
{
    return m_has_startarrowlength_attr;
}

void left_element::set_startarrowlength_attr(const ns_v::ST_StrokeArrowLength& _startarrowlength_attr)
{
    m_has_startarrowlength_attr = true;
    m_startarrowlength_attr = new ns_v::ST_StrokeArrowLength(_startarrowlength_attr);
}

const ns_v::ST_StrokeArrowLength& left_element::get_startarrowlength_attr() const
{
    if (m_startarrowlength_attr)
    {
        return *m_startarrowlength_attr;
    }
    return ns_v::ST_StrokeArrowLength::default_instance();
}

bool left_element::has_endarrow_attr() const
{
    return m_has_endarrow_attr;
}

void left_element::set_endarrow_attr(const ns_v::ST_StrokeArrowType& _endarrow_attr)
{
    m_has_endarrow_attr = true;
    m_endarrow_attr = new ns_v::ST_StrokeArrowType(_endarrow_attr);
}

const ns_v::ST_StrokeArrowType& left_element::get_endarrow_attr() const
{
    if (m_endarrow_attr)
    {
        return *m_endarrow_attr;
    }
    return ns_v::ST_StrokeArrowType::default_instance();
}

bool left_element::has_endarrowwidth_attr() const
{
    return m_has_endarrowwidth_attr;
}

void left_element::set_endarrowwidth_attr(const ns_v::ST_StrokeArrowWidth& _endarrowwidth_attr)
{
    m_has_endarrowwidth_attr = true;
    m_endarrowwidth_attr = new ns_v::ST_StrokeArrowWidth(_endarrowwidth_attr);
}

const ns_v::ST_StrokeArrowWidth& left_element::get_endarrowwidth_attr() const
{
    if (m_endarrowwidth_attr)
    {
        return *m_endarrowwidth_attr;
    }
    return ns_v::ST_StrokeArrowWidth::default_instance();
}

bool left_element::has_endarrowlength_attr() const
{
    return m_has_endarrowlength_attr;
}

void left_element::set_endarrowlength_attr(const ns_v::ST_StrokeArrowLength& _endarrowlength_attr)
{
    m_has_endarrowlength_attr = true;
    m_endarrowlength_attr = new ns_v::ST_StrokeArrowLength(_endarrowlength_attr);
}

const ns_v::ST_StrokeArrowLength& left_element::get_endarrowlength_attr() const
{
    if (m_endarrowlength_attr)
    {
        return *m_endarrowlength_attr;
    }
    return ns_v::ST_StrokeArrowLength::default_instance();
}

bool left_element::has_href_attr() const
{
    return m_has_href_attr;
}

void left_element::set_href_attr(const XSD::string_& _href_attr)
{
    m_has_href_attr = true;
    m_href_attr = _href_attr;
}

const XSD::string_& left_element::get_href_attr() const
{
    return m_href_attr;
}

bool left_element::has_althref_attr() const
{
    return m_has_althref_attr;
}

void left_element::set_althref_attr(const XSD::string_& _althref_attr)
{
    m_has_althref_attr = true;
    m_althref_attr = _althref_attr;
}

const XSD::string_& left_element::get_althref_attr() const
{
    return m_althref_attr;
}

bool left_element::has_title_attr() const
{
    return m_has_title_attr;
}

void left_element::set_title_attr(const XSD::string_& _title_attr)
{
    m_has_title_attr = true;
    m_title_attr = _title_attr;
}

const XSD::string_& left_element::get_title_attr() const
{
    return m_title_attr;
}

bool left_element::has_forcedash_attr() const
{
    return m_has_forcedash_attr;
}

void left_element::set_forcedash_attr(const ns_s::ST_TrueFalse& _forcedash_attr)
{
    m_has_forcedash_attr = true;
    m_forcedash_attr = new ns_s::ST_TrueFalse(_forcedash_attr);
}

const ns_s::ST_TrueFalse& left_element::get_forcedash_attr() const
{
    if (m_forcedash_attr)
    {
        return *m_forcedash_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
}

left_element* left_element::default_instance_ = NULL;

// top_element
top_element::top_element()
    :m_has_v_ext_attr(false),
     m_v_ext_attr(NULL),
     m_has_on_attr(false),
     m_on_attr(NULL),
     m_has_weight_attr(false),
     m_weight_attr(""),
     m_has_color_attr(false),
     m_color_attr(NULL),
     m_has_color2_attr(false),
     m_color2_attr(NULL),
     m_has_opacity_attr(false),
     m_opacity_attr(""),
     m_has_linestyle_attr(false),
     m_linestyle_attr(NULL),
     m_has_miterlimit_attr(false),
     m_miterlimit_attr(0),
     m_has_joinstyle_attr(false),
     m_joinstyle_attr(NULL),
     m_has_endcap_attr(false),
     m_endcap_attr(NULL),
     m_has_dashstyle_attr(false),
     m_dashstyle_attr(""),
     m_has_insetpen_attr(false),
     m_insetpen_attr(NULL),
     m_has_filltype_attr(false),
     m_filltype_attr(NULL),
     m_has_src_attr(false),
     m_src_attr(""),
     m_has_imageaspect_attr(false),
     m_imageaspect_attr(NULL),
     m_has_imagesize_attr(false),
     m_imagesize_attr(""),
     m_has_imagealignshape_attr(false),
     m_imagealignshape_attr(NULL),
     m_has_startarrow_attr(false),
     m_startarrow_attr(NULL),
     m_has_startarrowwidth_attr(false),
     m_startarrowwidth_attr(NULL),
     m_has_startarrowlength_attr(false),
     m_startarrowlength_attr(NULL),
     m_has_endarrow_attr(false),
     m_endarrow_attr(NULL),
     m_has_endarrowwidth_attr(false),
     m_endarrowwidth_attr(NULL),
     m_has_endarrowlength_attr(false),
     m_endarrowlength_attr(NULL),
     m_has_href_attr(false),
     m_href_attr(""),
     m_has_althref_attr(false),
     m_althref_attr(""),
     m_has_title_attr(false),
     m_title_attr(""),
     m_has_forcedash_attr(false),
     m_forcedash_attr(NULL)
{
}
top_element::~top_element()
{
    clear();
}
void top_element::clear()
{
    m_has_v_ext_attr = false;

    if (m_v_ext_attr)
    {
        delete m_v_ext_attr;
        m_v_ext_attr = NULL;
    }


    m_has_on_attr = false;

    if (m_on_attr)
    {
        delete m_on_attr;
        m_on_attr = NULL;
    }


    m_has_weight_attr = false;
    m_weight_attr.clear();

    m_has_color_attr = false;

    if (m_color_attr)
    {
        delete m_color_attr;
        m_color_attr = NULL;
    }


    m_has_color2_attr = false;

    if (m_color2_attr)
    {
        delete m_color2_attr;
        m_color2_attr = NULL;
    }


    m_has_opacity_attr = false;
    m_opacity_attr.clear();

    m_has_linestyle_attr = false;

    if (m_linestyle_attr)
    {
        delete m_linestyle_attr;
        m_linestyle_attr = NULL;
    }


    m_has_miterlimit_attr = false;
    m_miterlimit_attr = 0;

    m_has_joinstyle_attr = false;

    if (m_joinstyle_attr)
    {
        delete m_joinstyle_attr;
        m_joinstyle_attr = NULL;
    }


    m_has_endcap_attr = false;

    if (m_endcap_attr)
    {
        delete m_endcap_attr;
        m_endcap_attr = NULL;
    }


    m_has_dashstyle_attr = false;
    m_dashstyle_attr.clear();

    m_has_insetpen_attr = false;

    if (m_insetpen_attr)
    {
        delete m_insetpen_attr;
        m_insetpen_attr = NULL;
    }


    m_has_filltype_attr = false;

    if (m_filltype_attr)
    {
        delete m_filltype_attr;
        m_filltype_attr = NULL;
    }


    m_has_src_attr = false;
    m_src_attr.clear();

    m_has_imageaspect_attr = false;

    if (m_imageaspect_attr)
    {
        delete m_imageaspect_attr;
        m_imageaspect_attr = NULL;
    }


    m_has_imagesize_attr = false;
    m_imagesize_attr.clear();

    m_has_imagealignshape_attr = false;

    if (m_imagealignshape_attr)
    {
        delete m_imagealignshape_attr;
        m_imagealignshape_attr = NULL;
    }


    m_has_startarrow_attr = false;

    if (m_startarrow_attr)
    {
        delete m_startarrow_attr;
        m_startarrow_attr = NULL;
    }


    m_has_startarrowwidth_attr = false;

    if (m_startarrowwidth_attr)
    {
        delete m_startarrowwidth_attr;
        m_startarrowwidth_attr = NULL;
    }


    m_has_startarrowlength_attr = false;

    if (m_startarrowlength_attr)
    {
        delete m_startarrowlength_attr;
        m_startarrowlength_attr = NULL;
    }


    m_has_endarrow_attr = false;

    if (m_endarrow_attr)
    {
        delete m_endarrow_attr;
        m_endarrow_attr = NULL;
    }


    m_has_endarrowwidth_attr = false;

    if (m_endarrowwidth_attr)
    {
        delete m_endarrowwidth_attr;
        m_endarrowwidth_attr = NULL;
    }


    m_has_endarrowlength_attr = false;

    if (m_endarrowlength_attr)
    {
        delete m_endarrowlength_attr;
        m_endarrowlength_attr = NULL;
    }


    m_has_href_attr = false;
    m_href_attr.clear();

    m_has_althref_attr = false;
    m_althref_attr.clear();

    m_has_title_attr = false;
    m_title_attr.clear();

    m_has_forcedash_attr = false;

    if (m_forcedash_attr)
    {
        delete m_forcedash_attr;
        m_forcedash_attr = NULL;
    }

}

void top_element::toXml(std::ostream& _outStream) const
{
    _outStream << "<o:top";

    _outStream << " " << "xmlns:o=\"urn:schemas-microsoft-com:office:office\"";
    _outStream << " " << "xmlns:o=\"urn:schemas-microsoft-com:vml\"";
    _outStream << " " << "xmlns:o=\"http://schemas.openxmlformats.org/officeDocument/2006/sharedTypes\"";
    _outStream << " " << "xmlns:o=\"http://schemas.openxmlformats.org/officeDocument/2006/relationships\"";


    if (m_has_v_ext_attr)
    {
        m_v_ext_attr->toXmlAttr("v:ext", _outStream);
    }



    if (m_has_on_attr)
    {
        m_on_attr->toXmlAttr("on", _outStream);
    }



    if (m_has_weight_attr)
    {
        _outStream << " " << "weight" << "=\"" << m_weight_attr << "\"";
    }



    if (m_has_color_attr)
    {
        m_color_attr->toXmlAttr("color", _outStream);
    }



    if (m_has_color2_attr)
    {
        m_color2_attr->toXmlAttr("color2", _outStream);
    }



    if (m_has_opacity_attr)
    {
        _outStream << " " << "opacity" << "=\"" << m_opacity_attr << "\"";
    }



    if (m_has_linestyle_attr)
    {
        m_linestyle_attr->toXmlAttr("linestyle", _outStream);
    }



    if (m_has_miterlimit_attr)
    {
        _outStream << " " << "miterlimit" << "=\"" << m_miterlimit_attr << "\"";
    }



    if (m_has_joinstyle_attr)
    {
        m_joinstyle_attr->toXmlAttr("joinstyle", _outStream);
    }



    if (m_has_endcap_attr)
    {
        m_endcap_attr->toXmlAttr("endcap", _outStream);
    }



    if (m_has_dashstyle_attr)
    {
        _outStream << " " << "dashstyle" << "=\"" << m_dashstyle_attr << "\"";
    }



    if (m_has_insetpen_attr)
    {
        m_insetpen_attr->toXmlAttr("insetpen", _outStream);
    }



    if (m_has_filltype_attr)
    {
        m_filltype_attr->toXmlAttr("filltype", _outStream);
    }



    if (m_has_src_attr)
    {
        _outStream << " " << "src" << "=\"" << m_src_attr << "\"";
    }



    if (m_has_imageaspect_attr)
    {
        m_imageaspect_attr->toXmlAttr("imageaspect", _outStream);
    }



    if (m_has_imagesize_attr)
    {
        _outStream << " " << "imagesize" << "=\"" << m_imagesize_attr << "\"";
    }



    if (m_has_imagealignshape_attr)
    {
        m_imagealignshape_attr->toXmlAttr("imagealignshape", _outStream);
    }



    if (m_has_startarrow_attr)
    {
        m_startarrow_attr->toXmlAttr("startarrow", _outStream);
    }



    if (m_has_startarrowwidth_attr)
    {
        m_startarrowwidth_attr->toXmlAttr("startarrowwidth", _outStream);
    }



    if (m_has_startarrowlength_attr)
    {
        m_startarrowlength_attr->toXmlAttr("startarrowlength", _outStream);
    }



    if (m_has_endarrow_attr)
    {
        m_endarrow_attr->toXmlAttr("endarrow", _outStream);
    }



    if (m_has_endarrowwidth_attr)
    {
        m_endarrowwidth_attr->toXmlAttr("endarrowwidth", _outStream);
    }



    if (m_has_endarrowlength_attr)
    {
        m_endarrowlength_attr->toXmlAttr("endarrowlength", _outStream);
    }



    if (m_has_href_attr)
    {
        _outStream << " " << "href" << "=\"" << m_href_attr << "\"";
    }



    if (m_has_althref_attr)
    {
        _outStream << " " << "althref" << "=\"" << m_althref_attr << "\"";
    }



    if (m_has_title_attr)
    {
        _outStream << " " << "title" << "=\"" << m_title_attr << "\"";
    }



    if (m_has_forcedash_attr)
    {
        m_forcedash_attr->toXmlAttr("forcedash", _outStream);
    }

    _outStream << ">";

    _outStream << "</o:top>";
}

const top_element& top_element::default_instance()
{
    if (!top_element::default_instance_)
    {
        top_element::default_instance_ = new top_element();
    }
    return *top_element::default_instance_;
}

bool top_element::has_v_ext_attr() const
{
    return m_has_v_ext_attr;
}

void top_element::set_v_ext_attr(const ns_v::ST_Ext& _v_ext_attr)
{
    m_has_v_ext_attr = true;
    m_v_ext_attr = new ns_v::ST_Ext(_v_ext_attr);
}

const ns_v::ST_Ext& top_element::get_v_ext_attr() const
{
    if (m_v_ext_attr)
    {
        return *m_v_ext_attr;
    }
    return ns_v::ST_Ext::default_instance();
}

bool top_element::has_on_attr() const
{
    return m_has_on_attr;
}

void top_element::set_on_attr(const ns_s::ST_TrueFalse& _on_attr)
{
    m_has_on_attr = true;
    m_on_attr = new ns_s::ST_TrueFalse(_on_attr);
}

const ns_s::ST_TrueFalse& top_element::get_on_attr() const
{
    if (m_on_attr)
    {
        return *m_on_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
}

bool top_element::has_weight_attr() const
{
    return m_has_weight_attr;
}

void top_element::set_weight_attr(const XSD::string_& _weight_attr)
{
    m_has_weight_attr = true;
    m_weight_attr = _weight_attr;
}

const XSD::string_& top_element::get_weight_attr() const
{
    return m_weight_attr;
}

bool top_element::has_color_attr() const
{
    return m_has_color_attr;
}

void top_element::set_color_attr(const ns_s::ST_ColorType& _color_attr)
{
    m_has_color_attr = true;
    m_color_attr = new ns_s::ST_ColorType(_color_attr);
}

const ns_s::ST_ColorType& top_element::get_color_attr() const
{
    if (m_color_attr)
    {
        return *m_color_attr;
    }
    return ns_s::ST_ColorType::default_instance();
}

bool top_element::has_color2_attr() const
{
    return m_has_color2_attr;
}

void top_element::set_color2_attr(const ns_s::ST_ColorType& _color2_attr)
{
    m_has_color2_attr = true;
    m_color2_attr = new ns_s::ST_ColorType(_color2_attr);
}

const ns_s::ST_ColorType& top_element::get_color2_attr() const
{
    if (m_color2_attr)
    {
        return *m_color2_attr;
    }
    return ns_s::ST_ColorType::default_instance();
}

bool top_element::has_opacity_attr() const
{
    return m_has_opacity_attr;
}

void top_element::set_opacity_attr(const XSD::string_& _opacity_attr)
{
    m_has_opacity_attr = true;
    m_opacity_attr = _opacity_attr;
}

const XSD::string_& top_element::get_opacity_attr() const
{
    return m_opacity_attr;
}

bool top_element::has_linestyle_attr() const
{
    return m_has_linestyle_attr;
}

void top_element::set_linestyle_attr(const ns_v::ST_StrokeLineStyle& _linestyle_attr)
{
    m_has_linestyle_attr = true;
    m_linestyle_attr = new ns_v::ST_StrokeLineStyle(_linestyle_attr);
}

const ns_v::ST_StrokeLineStyle& top_element::get_linestyle_attr() const
{
    if (m_linestyle_attr)
    {
        return *m_linestyle_attr;
    }
    return ns_v::ST_StrokeLineStyle::default_instance();
}

bool top_element::has_miterlimit_attr() const
{
    return m_has_miterlimit_attr;
}

void top_element::set_miterlimit_attr(const XSD::decimal_& _miterlimit_attr)
{
    m_has_miterlimit_attr = true;
    m_miterlimit_attr = _miterlimit_attr;
}

const XSD::decimal_& top_element::get_miterlimit_attr() const
{
    return m_miterlimit_attr;
}

bool top_element::has_joinstyle_attr() const
{
    return m_has_joinstyle_attr;
}

void top_element::set_joinstyle_attr(const ns_v::ST_StrokeJoinStyle& _joinstyle_attr)
{
    m_has_joinstyle_attr = true;
    m_joinstyle_attr = new ns_v::ST_StrokeJoinStyle(_joinstyle_attr);
}

const ns_v::ST_StrokeJoinStyle& top_element::get_joinstyle_attr() const
{
    if (m_joinstyle_attr)
    {
        return *m_joinstyle_attr;
    }
    return ns_v::ST_StrokeJoinStyle::default_instance();
}

bool top_element::has_endcap_attr() const
{
    return m_has_endcap_attr;
}

void top_element::set_endcap_attr(const ns_v::ST_StrokeEndCap& _endcap_attr)
{
    m_has_endcap_attr = true;
    m_endcap_attr = new ns_v::ST_StrokeEndCap(_endcap_attr);
}

const ns_v::ST_StrokeEndCap& top_element::get_endcap_attr() const
{
    if (m_endcap_attr)
    {
        return *m_endcap_attr;
    }
    return ns_v::ST_StrokeEndCap::default_instance();
}

bool top_element::has_dashstyle_attr() const
{
    return m_has_dashstyle_attr;
}

void top_element::set_dashstyle_attr(const XSD::string_& _dashstyle_attr)
{
    m_has_dashstyle_attr = true;
    m_dashstyle_attr = _dashstyle_attr;
}

const XSD::string_& top_element::get_dashstyle_attr() const
{
    return m_dashstyle_attr;
}

bool top_element::has_insetpen_attr() const
{
    return m_has_insetpen_attr;
}

void top_element::set_insetpen_attr(const ns_s::ST_TrueFalse& _insetpen_attr)
{
    m_has_insetpen_attr = true;
    m_insetpen_attr = new ns_s::ST_TrueFalse(_insetpen_attr);
}

const ns_s::ST_TrueFalse& top_element::get_insetpen_attr() const
{
    if (m_insetpen_attr)
    {
        return *m_insetpen_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
}

bool top_element::has_filltype_attr() const
{
    return m_has_filltype_attr;
}

void top_element::set_filltype_attr(const ns_v::ST_FillType& _filltype_attr)
{
    m_has_filltype_attr = true;
    m_filltype_attr = new ns_v::ST_FillType(_filltype_attr);
}

const ns_v::ST_FillType& top_element::get_filltype_attr() const
{
    if (m_filltype_attr)
    {
        return *m_filltype_attr;
    }
    return ns_v::ST_FillType::default_instance();
}

bool top_element::has_src_attr() const
{
    return m_has_src_attr;
}

void top_element::set_src_attr(const XSD::string_& _src_attr)
{
    m_has_src_attr = true;
    m_src_attr = _src_attr;
}

const XSD::string_& top_element::get_src_attr() const
{
    return m_src_attr;
}

bool top_element::has_imageaspect_attr() const
{
    return m_has_imageaspect_attr;
}

void top_element::set_imageaspect_attr(const ns_v::ST_ImageAspect& _imageaspect_attr)
{
    m_has_imageaspect_attr = true;
    m_imageaspect_attr = new ns_v::ST_ImageAspect(_imageaspect_attr);
}

const ns_v::ST_ImageAspect& top_element::get_imageaspect_attr() const
{
    if (m_imageaspect_attr)
    {
        return *m_imageaspect_attr;
    }
    return ns_v::ST_ImageAspect::default_instance();
}

bool top_element::has_imagesize_attr() const
{
    return m_has_imagesize_attr;
}

void top_element::set_imagesize_attr(const XSD::string_& _imagesize_attr)
{
    m_has_imagesize_attr = true;
    m_imagesize_attr = _imagesize_attr;
}

const XSD::string_& top_element::get_imagesize_attr() const
{
    return m_imagesize_attr;
}

bool top_element::has_imagealignshape_attr() const
{
    return m_has_imagealignshape_attr;
}

void top_element::set_imagealignshape_attr(const ns_s::ST_TrueFalse& _imagealignshape_attr)
{
    m_has_imagealignshape_attr = true;
    m_imagealignshape_attr = new ns_s::ST_TrueFalse(_imagealignshape_attr);
}

const ns_s::ST_TrueFalse& top_element::get_imagealignshape_attr() const
{
    if (m_imagealignshape_attr)
    {
        return *m_imagealignshape_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
}

bool top_element::has_startarrow_attr() const
{
    return m_has_startarrow_attr;
}

void top_element::set_startarrow_attr(const ns_v::ST_StrokeArrowType& _startarrow_attr)
{
    m_has_startarrow_attr = true;
    m_startarrow_attr = new ns_v::ST_StrokeArrowType(_startarrow_attr);
}

const ns_v::ST_StrokeArrowType& top_element::get_startarrow_attr() const
{
    if (m_startarrow_attr)
    {
        return *m_startarrow_attr;
    }
    return ns_v::ST_StrokeArrowType::default_instance();
}

bool top_element::has_startarrowwidth_attr() const
{
    return m_has_startarrowwidth_attr;
}

void top_element::set_startarrowwidth_attr(const ns_v::ST_StrokeArrowWidth& _startarrowwidth_attr)
{
    m_has_startarrowwidth_attr = true;
    m_startarrowwidth_attr = new ns_v::ST_StrokeArrowWidth(_startarrowwidth_attr);
}

const ns_v::ST_StrokeArrowWidth& top_element::get_startarrowwidth_attr() const
{
    if (m_startarrowwidth_attr)
    {
        return *m_startarrowwidth_attr;
    }
    return ns_v::ST_StrokeArrowWidth::default_instance();
}

bool top_element::has_startarrowlength_attr() const
{
    return m_has_startarrowlength_attr;
}

void top_element::set_startarrowlength_attr(const ns_v::ST_StrokeArrowLength& _startarrowlength_attr)
{
    m_has_startarrowlength_attr = true;
    m_startarrowlength_attr = new ns_v::ST_StrokeArrowLength(_startarrowlength_attr);
}

const ns_v::ST_StrokeArrowLength& top_element::get_startarrowlength_attr() const
{
    if (m_startarrowlength_attr)
    {
        return *m_startarrowlength_attr;
    }
    return ns_v::ST_StrokeArrowLength::default_instance();
}

bool top_element::has_endarrow_attr() const
{
    return m_has_endarrow_attr;
}

void top_element::set_endarrow_attr(const ns_v::ST_StrokeArrowType& _endarrow_attr)
{
    m_has_endarrow_attr = true;
    m_endarrow_attr = new ns_v::ST_StrokeArrowType(_endarrow_attr);
}

const ns_v::ST_StrokeArrowType& top_element::get_endarrow_attr() const
{
    if (m_endarrow_attr)
    {
        return *m_endarrow_attr;
    }
    return ns_v::ST_StrokeArrowType::default_instance();
}

bool top_element::has_endarrowwidth_attr() const
{
    return m_has_endarrowwidth_attr;
}

void top_element::set_endarrowwidth_attr(const ns_v::ST_StrokeArrowWidth& _endarrowwidth_attr)
{
    m_has_endarrowwidth_attr = true;
    m_endarrowwidth_attr = new ns_v::ST_StrokeArrowWidth(_endarrowwidth_attr);
}

const ns_v::ST_StrokeArrowWidth& top_element::get_endarrowwidth_attr() const
{
    if (m_endarrowwidth_attr)
    {
        return *m_endarrowwidth_attr;
    }
    return ns_v::ST_StrokeArrowWidth::default_instance();
}

bool top_element::has_endarrowlength_attr() const
{
    return m_has_endarrowlength_attr;
}

void top_element::set_endarrowlength_attr(const ns_v::ST_StrokeArrowLength& _endarrowlength_attr)
{
    m_has_endarrowlength_attr = true;
    m_endarrowlength_attr = new ns_v::ST_StrokeArrowLength(_endarrowlength_attr);
}

const ns_v::ST_StrokeArrowLength& top_element::get_endarrowlength_attr() const
{
    if (m_endarrowlength_attr)
    {
        return *m_endarrowlength_attr;
    }
    return ns_v::ST_StrokeArrowLength::default_instance();
}

bool top_element::has_href_attr() const
{
    return m_has_href_attr;
}

void top_element::set_href_attr(const XSD::string_& _href_attr)
{
    m_has_href_attr = true;
    m_href_attr = _href_attr;
}

const XSD::string_& top_element::get_href_attr() const
{
    return m_href_attr;
}

bool top_element::has_althref_attr() const
{
    return m_has_althref_attr;
}

void top_element::set_althref_attr(const XSD::string_& _althref_attr)
{
    m_has_althref_attr = true;
    m_althref_attr = _althref_attr;
}

const XSD::string_& top_element::get_althref_attr() const
{
    return m_althref_attr;
}

bool top_element::has_title_attr() const
{
    return m_has_title_attr;
}

void top_element::set_title_attr(const XSD::string_& _title_attr)
{
    m_has_title_attr = true;
    m_title_attr = _title_attr;
}

const XSD::string_& top_element::get_title_attr() const
{
    return m_title_attr;
}

bool top_element::has_forcedash_attr() const
{
    return m_has_forcedash_attr;
}

void top_element::set_forcedash_attr(const ns_s::ST_TrueFalse& _forcedash_attr)
{
    m_has_forcedash_attr = true;
    m_forcedash_attr = new ns_s::ST_TrueFalse(_forcedash_attr);
}

const ns_s::ST_TrueFalse& top_element::get_forcedash_attr() const
{
    if (m_forcedash_attr)
    {
        return *m_forcedash_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
}

top_element* top_element::default_instance_ = NULL;

// right_element
right_element::right_element()
    :m_has_v_ext_attr(false),
     m_v_ext_attr(NULL),
     m_has_on_attr(false),
     m_on_attr(NULL),
     m_has_weight_attr(false),
     m_weight_attr(""),
     m_has_color_attr(false),
     m_color_attr(NULL),
     m_has_color2_attr(false),
     m_color2_attr(NULL),
     m_has_opacity_attr(false),
     m_opacity_attr(""),
     m_has_linestyle_attr(false),
     m_linestyle_attr(NULL),
     m_has_miterlimit_attr(false),
     m_miterlimit_attr(0),
     m_has_joinstyle_attr(false),
     m_joinstyle_attr(NULL),
     m_has_endcap_attr(false),
     m_endcap_attr(NULL),
     m_has_dashstyle_attr(false),
     m_dashstyle_attr(""),
     m_has_insetpen_attr(false),
     m_insetpen_attr(NULL),
     m_has_filltype_attr(false),
     m_filltype_attr(NULL),
     m_has_src_attr(false),
     m_src_attr(""),
     m_has_imageaspect_attr(false),
     m_imageaspect_attr(NULL),
     m_has_imagesize_attr(false),
     m_imagesize_attr(""),
     m_has_imagealignshape_attr(false),
     m_imagealignshape_attr(NULL),
     m_has_startarrow_attr(false),
     m_startarrow_attr(NULL),
     m_has_startarrowwidth_attr(false),
     m_startarrowwidth_attr(NULL),
     m_has_startarrowlength_attr(false),
     m_startarrowlength_attr(NULL),
     m_has_endarrow_attr(false),
     m_endarrow_attr(NULL),
     m_has_endarrowwidth_attr(false),
     m_endarrowwidth_attr(NULL),
     m_has_endarrowlength_attr(false),
     m_endarrowlength_attr(NULL),
     m_has_href_attr(false),
     m_href_attr(""),
     m_has_althref_attr(false),
     m_althref_attr(""),
     m_has_title_attr(false),
     m_title_attr(""),
     m_has_forcedash_attr(false),
     m_forcedash_attr(NULL)
{
}
right_element::~right_element()
{
    clear();
}
void right_element::clear()
{
    m_has_v_ext_attr = false;

    if (m_v_ext_attr)
    {
        delete m_v_ext_attr;
        m_v_ext_attr = NULL;
    }


    m_has_on_attr = false;

    if (m_on_attr)
    {
        delete m_on_attr;
        m_on_attr = NULL;
    }


    m_has_weight_attr = false;
    m_weight_attr.clear();

    m_has_color_attr = false;

    if (m_color_attr)
    {
        delete m_color_attr;
        m_color_attr = NULL;
    }


    m_has_color2_attr = false;

    if (m_color2_attr)
    {
        delete m_color2_attr;
        m_color2_attr = NULL;
    }


    m_has_opacity_attr = false;
    m_opacity_attr.clear();

    m_has_linestyle_attr = false;

    if (m_linestyle_attr)
    {
        delete m_linestyle_attr;
        m_linestyle_attr = NULL;
    }


    m_has_miterlimit_attr = false;
    m_miterlimit_attr = 0;

    m_has_joinstyle_attr = false;

    if (m_joinstyle_attr)
    {
        delete m_joinstyle_attr;
        m_joinstyle_attr = NULL;
    }


    m_has_endcap_attr = false;

    if (m_endcap_attr)
    {
        delete m_endcap_attr;
        m_endcap_attr = NULL;
    }


    m_has_dashstyle_attr = false;
    m_dashstyle_attr.clear();

    m_has_insetpen_attr = false;

    if (m_insetpen_attr)
    {
        delete m_insetpen_attr;
        m_insetpen_attr = NULL;
    }


    m_has_filltype_attr = false;

    if (m_filltype_attr)
    {
        delete m_filltype_attr;
        m_filltype_attr = NULL;
    }


    m_has_src_attr = false;
    m_src_attr.clear();

    m_has_imageaspect_attr = false;

    if (m_imageaspect_attr)
    {
        delete m_imageaspect_attr;
        m_imageaspect_attr = NULL;
    }


    m_has_imagesize_attr = false;
    m_imagesize_attr.clear();

    m_has_imagealignshape_attr = false;

    if (m_imagealignshape_attr)
    {
        delete m_imagealignshape_attr;
        m_imagealignshape_attr = NULL;
    }


    m_has_startarrow_attr = false;

    if (m_startarrow_attr)
    {
        delete m_startarrow_attr;
        m_startarrow_attr = NULL;
    }


    m_has_startarrowwidth_attr = false;

    if (m_startarrowwidth_attr)
    {
        delete m_startarrowwidth_attr;
        m_startarrowwidth_attr = NULL;
    }


    m_has_startarrowlength_attr = false;

    if (m_startarrowlength_attr)
    {
        delete m_startarrowlength_attr;
        m_startarrowlength_attr = NULL;
    }


    m_has_endarrow_attr = false;

    if (m_endarrow_attr)
    {
        delete m_endarrow_attr;
        m_endarrow_attr = NULL;
    }


    m_has_endarrowwidth_attr = false;

    if (m_endarrowwidth_attr)
    {
        delete m_endarrowwidth_attr;
        m_endarrowwidth_attr = NULL;
    }


    m_has_endarrowlength_attr = false;

    if (m_endarrowlength_attr)
    {
        delete m_endarrowlength_attr;
        m_endarrowlength_attr = NULL;
    }


    m_has_href_attr = false;
    m_href_attr.clear();

    m_has_althref_attr = false;
    m_althref_attr.clear();

    m_has_title_attr = false;
    m_title_attr.clear();

    m_has_forcedash_attr = false;

    if (m_forcedash_attr)
    {
        delete m_forcedash_attr;
        m_forcedash_attr = NULL;
    }

}

void right_element::toXml(std::ostream& _outStream) const
{
    _outStream << "<o:right";

    _outStream << " " << "xmlns:o=\"urn:schemas-microsoft-com:office:office\"";
    _outStream << " " << "xmlns:o=\"urn:schemas-microsoft-com:vml\"";
    _outStream << " " << "xmlns:o=\"http://schemas.openxmlformats.org/officeDocument/2006/sharedTypes\"";
    _outStream << " " << "xmlns:o=\"http://schemas.openxmlformats.org/officeDocument/2006/relationships\"";


    if (m_has_v_ext_attr)
    {
        m_v_ext_attr->toXmlAttr("v:ext", _outStream);
    }



    if (m_has_on_attr)
    {
        m_on_attr->toXmlAttr("on", _outStream);
    }



    if (m_has_weight_attr)
    {
        _outStream << " " << "weight" << "=\"" << m_weight_attr << "\"";
    }



    if (m_has_color_attr)
    {
        m_color_attr->toXmlAttr("color", _outStream);
    }



    if (m_has_color2_attr)
    {
        m_color2_attr->toXmlAttr("color2", _outStream);
    }



    if (m_has_opacity_attr)
    {
        _outStream << " " << "opacity" << "=\"" << m_opacity_attr << "\"";
    }



    if (m_has_linestyle_attr)
    {
        m_linestyle_attr->toXmlAttr("linestyle", _outStream);
    }



    if (m_has_miterlimit_attr)
    {
        _outStream << " " << "miterlimit" << "=\"" << m_miterlimit_attr << "\"";
    }



    if (m_has_joinstyle_attr)
    {
        m_joinstyle_attr->toXmlAttr("joinstyle", _outStream);
    }



    if (m_has_endcap_attr)
    {
        m_endcap_attr->toXmlAttr("endcap", _outStream);
    }



    if (m_has_dashstyle_attr)
    {
        _outStream << " " << "dashstyle" << "=\"" << m_dashstyle_attr << "\"";
    }



    if (m_has_insetpen_attr)
    {
        m_insetpen_attr->toXmlAttr("insetpen", _outStream);
    }



    if (m_has_filltype_attr)
    {
        m_filltype_attr->toXmlAttr("filltype", _outStream);
    }



    if (m_has_src_attr)
    {
        _outStream << " " << "src" << "=\"" << m_src_attr << "\"";
    }



    if (m_has_imageaspect_attr)
    {
        m_imageaspect_attr->toXmlAttr("imageaspect", _outStream);
    }



    if (m_has_imagesize_attr)
    {
        _outStream << " " << "imagesize" << "=\"" << m_imagesize_attr << "\"";
    }



    if (m_has_imagealignshape_attr)
    {
        m_imagealignshape_attr->toXmlAttr("imagealignshape", _outStream);
    }



    if (m_has_startarrow_attr)
    {
        m_startarrow_attr->toXmlAttr("startarrow", _outStream);
    }



    if (m_has_startarrowwidth_attr)
    {
        m_startarrowwidth_attr->toXmlAttr("startarrowwidth", _outStream);
    }



    if (m_has_startarrowlength_attr)
    {
        m_startarrowlength_attr->toXmlAttr("startarrowlength", _outStream);
    }



    if (m_has_endarrow_attr)
    {
        m_endarrow_attr->toXmlAttr("endarrow", _outStream);
    }



    if (m_has_endarrowwidth_attr)
    {
        m_endarrowwidth_attr->toXmlAttr("endarrowwidth", _outStream);
    }



    if (m_has_endarrowlength_attr)
    {
        m_endarrowlength_attr->toXmlAttr("endarrowlength", _outStream);
    }



    if (m_has_href_attr)
    {
        _outStream << " " << "href" << "=\"" << m_href_attr << "\"";
    }



    if (m_has_althref_attr)
    {
        _outStream << " " << "althref" << "=\"" << m_althref_attr << "\"";
    }



    if (m_has_title_attr)
    {
        _outStream << " " << "title" << "=\"" << m_title_attr << "\"";
    }



    if (m_has_forcedash_attr)
    {
        m_forcedash_attr->toXmlAttr("forcedash", _outStream);
    }

    _outStream << ">";

    _outStream << "</o:right>";
}

const right_element& right_element::default_instance()
{
    if (!right_element::default_instance_)
    {
        right_element::default_instance_ = new right_element();
    }
    return *right_element::default_instance_;
}

bool right_element::has_v_ext_attr() const
{
    return m_has_v_ext_attr;
}

void right_element::set_v_ext_attr(const ns_v::ST_Ext& _v_ext_attr)
{
    m_has_v_ext_attr = true;
    m_v_ext_attr = new ns_v::ST_Ext(_v_ext_attr);
}

const ns_v::ST_Ext& right_element::get_v_ext_attr() const
{
    if (m_v_ext_attr)
    {
        return *m_v_ext_attr;
    }
    return ns_v::ST_Ext::default_instance();
}

bool right_element::has_on_attr() const
{
    return m_has_on_attr;
}

void right_element::set_on_attr(const ns_s::ST_TrueFalse& _on_attr)
{
    m_has_on_attr = true;
    m_on_attr = new ns_s::ST_TrueFalse(_on_attr);
}

const ns_s::ST_TrueFalse& right_element::get_on_attr() const
{
    if (m_on_attr)
    {
        return *m_on_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
}

bool right_element::has_weight_attr() const
{
    return m_has_weight_attr;
}

void right_element::set_weight_attr(const XSD::string_& _weight_attr)
{
    m_has_weight_attr = true;
    m_weight_attr = _weight_attr;
}

const XSD::string_& right_element::get_weight_attr() const
{
    return m_weight_attr;
}

bool right_element::has_color_attr() const
{
    return m_has_color_attr;
}

void right_element::set_color_attr(const ns_s::ST_ColorType& _color_attr)
{
    m_has_color_attr = true;
    m_color_attr = new ns_s::ST_ColorType(_color_attr);
}

const ns_s::ST_ColorType& right_element::get_color_attr() const
{
    if (m_color_attr)
    {
        return *m_color_attr;
    }
    return ns_s::ST_ColorType::default_instance();
}

bool right_element::has_color2_attr() const
{
    return m_has_color2_attr;
}

void right_element::set_color2_attr(const ns_s::ST_ColorType& _color2_attr)
{
    m_has_color2_attr = true;
    m_color2_attr = new ns_s::ST_ColorType(_color2_attr);
}

const ns_s::ST_ColorType& right_element::get_color2_attr() const
{
    if (m_color2_attr)
    {
        return *m_color2_attr;
    }
    return ns_s::ST_ColorType::default_instance();
}

bool right_element::has_opacity_attr() const
{
    return m_has_opacity_attr;
}

void right_element::set_opacity_attr(const XSD::string_& _opacity_attr)
{
    m_has_opacity_attr = true;
    m_opacity_attr = _opacity_attr;
}

const XSD::string_& right_element::get_opacity_attr() const
{
    return m_opacity_attr;
}

bool right_element::has_linestyle_attr() const
{
    return m_has_linestyle_attr;
}

void right_element::set_linestyle_attr(const ns_v::ST_StrokeLineStyle& _linestyle_attr)
{
    m_has_linestyle_attr = true;
    m_linestyle_attr = new ns_v::ST_StrokeLineStyle(_linestyle_attr);
}

const ns_v::ST_StrokeLineStyle& right_element::get_linestyle_attr() const
{
    if (m_linestyle_attr)
    {
        return *m_linestyle_attr;
    }
    return ns_v::ST_StrokeLineStyle::default_instance();
}

bool right_element::has_miterlimit_attr() const
{
    return m_has_miterlimit_attr;
}

void right_element::set_miterlimit_attr(const XSD::decimal_& _miterlimit_attr)
{
    m_has_miterlimit_attr = true;
    m_miterlimit_attr = _miterlimit_attr;
}

const XSD::decimal_& right_element::get_miterlimit_attr() const
{
    return m_miterlimit_attr;
}

bool right_element::has_joinstyle_attr() const
{
    return m_has_joinstyle_attr;
}

void right_element::set_joinstyle_attr(const ns_v::ST_StrokeJoinStyle& _joinstyle_attr)
{
    m_has_joinstyle_attr = true;
    m_joinstyle_attr = new ns_v::ST_StrokeJoinStyle(_joinstyle_attr);
}

const ns_v::ST_StrokeJoinStyle& right_element::get_joinstyle_attr() const
{
    if (m_joinstyle_attr)
    {
        return *m_joinstyle_attr;
    }
    return ns_v::ST_StrokeJoinStyle::default_instance();
}

bool right_element::has_endcap_attr() const
{
    return m_has_endcap_attr;
}

void right_element::set_endcap_attr(const ns_v::ST_StrokeEndCap& _endcap_attr)
{
    m_has_endcap_attr = true;
    m_endcap_attr = new ns_v::ST_StrokeEndCap(_endcap_attr);
}

const ns_v::ST_StrokeEndCap& right_element::get_endcap_attr() const
{
    if (m_endcap_attr)
    {
        return *m_endcap_attr;
    }
    return ns_v::ST_StrokeEndCap::default_instance();
}

bool right_element::has_dashstyle_attr() const
{
    return m_has_dashstyle_attr;
}

void right_element::set_dashstyle_attr(const XSD::string_& _dashstyle_attr)
{
    m_has_dashstyle_attr = true;
    m_dashstyle_attr = _dashstyle_attr;
}

const XSD::string_& right_element::get_dashstyle_attr() const
{
    return m_dashstyle_attr;
}

bool right_element::has_insetpen_attr() const
{
    return m_has_insetpen_attr;
}

void right_element::set_insetpen_attr(const ns_s::ST_TrueFalse& _insetpen_attr)
{
    m_has_insetpen_attr = true;
    m_insetpen_attr = new ns_s::ST_TrueFalse(_insetpen_attr);
}

const ns_s::ST_TrueFalse& right_element::get_insetpen_attr() const
{
    if (m_insetpen_attr)
    {
        return *m_insetpen_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
}

bool right_element::has_filltype_attr() const
{
    return m_has_filltype_attr;
}

void right_element::set_filltype_attr(const ns_v::ST_FillType& _filltype_attr)
{
    m_has_filltype_attr = true;
    m_filltype_attr = new ns_v::ST_FillType(_filltype_attr);
}

const ns_v::ST_FillType& right_element::get_filltype_attr() const
{
    if (m_filltype_attr)
    {
        return *m_filltype_attr;
    }
    return ns_v::ST_FillType::default_instance();
}

bool right_element::has_src_attr() const
{
    return m_has_src_attr;
}

void right_element::set_src_attr(const XSD::string_& _src_attr)
{
    m_has_src_attr = true;
    m_src_attr = _src_attr;
}

const XSD::string_& right_element::get_src_attr() const
{
    return m_src_attr;
}

bool right_element::has_imageaspect_attr() const
{
    return m_has_imageaspect_attr;
}

void right_element::set_imageaspect_attr(const ns_v::ST_ImageAspect& _imageaspect_attr)
{
    m_has_imageaspect_attr = true;
    m_imageaspect_attr = new ns_v::ST_ImageAspect(_imageaspect_attr);
}

const ns_v::ST_ImageAspect& right_element::get_imageaspect_attr() const
{
    if (m_imageaspect_attr)
    {
        return *m_imageaspect_attr;
    }
    return ns_v::ST_ImageAspect::default_instance();
}

bool right_element::has_imagesize_attr() const
{
    return m_has_imagesize_attr;
}

void right_element::set_imagesize_attr(const XSD::string_& _imagesize_attr)
{
    m_has_imagesize_attr = true;
    m_imagesize_attr = _imagesize_attr;
}

const XSD::string_& right_element::get_imagesize_attr() const
{
    return m_imagesize_attr;
}

bool right_element::has_imagealignshape_attr() const
{
    return m_has_imagealignshape_attr;
}

void right_element::set_imagealignshape_attr(const ns_s::ST_TrueFalse& _imagealignshape_attr)
{
    m_has_imagealignshape_attr = true;
    m_imagealignshape_attr = new ns_s::ST_TrueFalse(_imagealignshape_attr);
}

const ns_s::ST_TrueFalse& right_element::get_imagealignshape_attr() const
{
    if (m_imagealignshape_attr)
    {
        return *m_imagealignshape_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
}

bool right_element::has_startarrow_attr() const
{
    return m_has_startarrow_attr;
}

void right_element::set_startarrow_attr(const ns_v::ST_StrokeArrowType& _startarrow_attr)
{
    m_has_startarrow_attr = true;
    m_startarrow_attr = new ns_v::ST_StrokeArrowType(_startarrow_attr);
}

const ns_v::ST_StrokeArrowType& right_element::get_startarrow_attr() const
{
    if (m_startarrow_attr)
    {
        return *m_startarrow_attr;
    }
    return ns_v::ST_StrokeArrowType::default_instance();
}

bool right_element::has_startarrowwidth_attr() const
{
    return m_has_startarrowwidth_attr;
}

void right_element::set_startarrowwidth_attr(const ns_v::ST_StrokeArrowWidth& _startarrowwidth_attr)
{
    m_has_startarrowwidth_attr = true;
    m_startarrowwidth_attr = new ns_v::ST_StrokeArrowWidth(_startarrowwidth_attr);
}

const ns_v::ST_StrokeArrowWidth& right_element::get_startarrowwidth_attr() const
{
    if (m_startarrowwidth_attr)
    {
        return *m_startarrowwidth_attr;
    }
    return ns_v::ST_StrokeArrowWidth::default_instance();
}

bool right_element::has_startarrowlength_attr() const
{
    return m_has_startarrowlength_attr;
}

void right_element::set_startarrowlength_attr(const ns_v::ST_StrokeArrowLength& _startarrowlength_attr)
{
    m_has_startarrowlength_attr = true;
    m_startarrowlength_attr = new ns_v::ST_StrokeArrowLength(_startarrowlength_attr);
}

const ns_v::ST_StrokeArrowLength& right_element::get_startarrowlength_attr() const
{
    if (m_startarrowlength_attr)
    {
        return *m_startarrowlength_attr;
    }
    return ns_v::ST_StrokeArrowLength::default_instance();
}

bool right_element::has_endarrow_attr() const
{
    return m_has_endarrow_attr;
}

void right_element::set_endarrow_attr(const ns_v::ST_StrokeArrowType& _endarrow_attr)
{
    m_has_endarrow_attr = true;
    m_endarrow_attr = new ns_v::ST_StrokeArrowType(_endarrow_attr);
}

const ns_v::ST_StrokeArrowType& right_element::get_endarrow_attr() const
{
    if (m_endarrow_attr)
    {
        return *m_endarrow_attr;
    }
    return ns_v::ST_StrokeArrowType::default_instance();
}

bool right_element::has_endarrowwidth_attr() const
{
    return m_has_endarrowwidth_attr;
}

void right_element::set_endarrowwidth_attr(const ns_v::ST_StrokeArrowWidth& _endarrowwidth_attr)
{
    m_has_endarrowwidth_attr = true;
    m_endarrowwidth_attr = new ns_v::ST_StrokeArrowWidth(_endarrowwidth_attr);
}

const ns_v::ST_StrokeArrowWidth& right_element::get_endarrowwidth_attr() const
{
    if (m_endarrowwidth_attr)
    {
        return *m_endarrowwidth_attr;
    }
    return ns_v::ST_StrokeArrowWidth::default_instance();
}

bool right_element::has_endarrowlength_attr() const
{
    return m_has_endarrowlength_attr;
}

void right_element::set_endarrowlength_attr(const ns_v::ST_StrokeArrowLength& _endarrowlength_attr)
{
    m_has_endarrowlength_attr = true;
    m_endarrowlength_attr = new ns_v::ST_StrokeArrowLength(_endarrowlength_attr);
}

const ns_v::ST_StrokeArrowLength& right_element::get_endarrowlength_attr() const
{
    if (m_endarrowlength_attr)
    {
        return *m_endarrowlength_attr;
    }
    return ns_v::ST_StrokeArrowLength::default_instance();
}

bool right_element::has_href_attr() const
{
    return m_has_href_attr;
}

void right_element::set_href_attr(const XSD::string_& _href_attr)
{
    m_has_href_attr = true;
    m_href_attr = _href_attr;
}

const XSD::string_& right_element::get_href_attr() const
{
    return m_href_attr;
}

bool right_element::has_althref_attr() const
{
    return m_has_althref_attr;
}

void right_element::set_althref_attr(const XSD::string_& _althref_attr)
{
    m_has_althref_attr = true;
    m_althref_attr = _althref_attr;
}

const XSD::string_& right_element::get_althref_attr() const
{
    return m_althref_attr;
}

bool right_element::has_title_attr() const
{
    return m_has_title_attr;
}

void right_element::set_title_attr(const XSD::string_& _title_attr)
{
    m_has_title_attr = true;
    m_title_attr = _title_attr;
}

const XSD::string_& right_element::get_title_attr() const
{
    return m_title_attr;
}

bool right_element::has_forcedash_attr() const
{
    return m_has_forcedash_attr;
}

void right_element::set_forcedash_attr(const ns_s::ST_TrueFalse& _forcedash_attr)
{
    m_has_forcedash_attr = true;
    m_forcedash_attr = new ns_s::ST_TrueFalse(_forcedash_attr);
}

const ns_s::ST_TrueFalse& right_element::get_forcedash_attr() const
{
    if (m_forcedash_attr)
    {
        return *m_forcedash_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
}

right_element* right_element::default_instance_ = NULL;

// bottom_element
bottom_element::bottom_element()
    :m_has_v_ext_attr(false),
     m_v_ext_attr(NULL),
     m_has_on_attr(false),
     m_on_attr(NULL),
     m_has_weight_attr(false),
     m_weight_attr(""),
     m_has_color_attr(false),
     m_color_attr(NULL),
     m_has_color2_attr(false),
     m_color2_attr(NULL),
     m_has_opacity_attr(false),
     m_opacity_attr(""),
     m_has_linestyle_attr(false),
     m_linestyle_attr(NULL),
     m_has_miterlimit_attr(false),
     m_miterlimit_attr(0),
     m_has_joinstyle_attr(false),
     m_joinstyle_attr(NULL),
     m_has_endcap_attr(false),
     m_endcap_attr(NULL),
     m_has_dashstyle_attr(false),
     m_dashstyle_attr(""),
     m_has_insetpen_attr(false),
     m_insetpen_attr(NULL),
     m_has_filltype_attr(false),
     m_filltype_attr(NULL),
     m_has_src_attr(false),
     m_src_attr(""),
     m_has_imageaspect_attr(false),
     m_imageaspect_attr(NULL),
     m_has_imagesize_attr(false),
     m_imagesize_attr(""),
     m_has_imagealignshape_attr(false),
     m_imagealignshape_attr(NULL),
     m_has_startarrow_attr(false),
     m_startarrow_attr(NULL),
     m_has_startarrowwidth_attr(false),
     m_startarrowwidth_attr(NULL),
     m_has_startarrowlength_attr(false),
     m_startarrowlength_attr(NULL),
     m_has_endarrow_attr(false),
     m_endarrow_attr(NULL),
     m_has_endarrowwidth_attr(false),
     m_endarrowwidth_attr(NULL),
     m_has_endarrowlength_attr(false),
     m_endarrowlength_attr(NULL),
     m_has_href_attr(false),
     m_href_attr(""),
     m_has_althref_attr(false),
     m_althref_attr(""),
     m_has_title_attr(false),
     m_title_attr(""),
     m_has_forcedash_attr(false),
     m_forcedash_attr(NULL)
{
}
bottom_element::~bottom_element()
{
    clear();
}
void bottom_element::clear()
{
    m_has_v_ext_attr = false;

    if (m_v_ext_attr)
    {
        delete m_v_ext_attr;
        m_v_ext_attr = NULL;
    }


    m_has_on_attr = false;

    if (m_on_attr)
    {
        delete m_on_attr;
        m_on_attr = NULL;
    }


    m_has_weight_attr = false;
    m_weight_attr.clear();

    m_has_color_attr = false;

    if (m_color_attr)
    {
        delete m_color_attr;
        m_color_attr = NULL;
    }


    m_has_color2_attr = false;

    if (m_color2_attr)
    {
        delete m_color2_attr;
        m_color2_attr = NULL;
    }


    m_has_opacity_attr = false;
    m_opacity_attr.clear();

    m_has_linestyle_attr = false;

    if (m_linestyle_attr)
    {
        delete m_linestyle_attr;
        m_linestyle_attr = NULL;
    }


    m_has_miterlimit_attr = false;
    m_miterlimit_attr = 0;

    m_has_joinstyle_attr = false;

    if (m_joinstyle_attr)
    {
        delete m_joinstyle_attr;
        m_joinstyle_attr = NULL;
    }


    m_has_endcap_attr = false;

    if (m_endcap_attr)
    {
        delete m_endcap_attr;
        m_endcap_attr = NULL;
    }


    m_has_dashstyle_attr = false;
    m_dashstyle_attr.clear();

    m_has_insetpen_attr = false;

    if (m_insetpen_attr)
    {
        delete m_insetpen_attr;
        m_insetpen_attr = NULL;
    }


    m_has_filltype_attr = false;

    if (m_filltype_attr)
    {
        delete m_filltype_attr;
        m_filltype_attr = NULL;
    }


    m_has_src_attr = false;
    m_src_attr.clear();

    m_has_imageaspect_attr = false;

    if (m_imageaspect_attr)
    {
        delete m_imageaspect_attr;
        m_imageaspect_attr = NULL;
    }


    m_has_imagesize_attr = false;
    m_imagesize_attr.clear();

    m_has_imagealignshape_attr = false;

    if (m_imagealignshape_attr)
    {
        delete m_imagealignshape_attr;
        m_imagealignshape_attr = NULL;
    }


    m_has_startarrow_attr = false;

    if (m_startarrow_attr)
    {
        delete m_startarrow_attr;
        m_startarrow_attr = NULL;
    }


    m_has_startarrowwidth_attr = false;

    if (m_startarrowwidth_attr)
    {
        delete m_startarrowwidth_attr;
        m_startarrowwidth_attr = NULL;
    }


    m_has_startarrowlength_attr = false;

    if (m_startarrowlength_attr)
    {
        delete m_startarrowlength_attr;
        m_startarrowlength_attr = NULL;
    }


    m_has_endarrow_attr = false;

    if (m_endarrow_attr)
    {
        delete m_endarrow_attr;
        m_endarrow_attr = NULL;
    }


    m_has_endarrowwidth_attr = false;

    if (m_endarrowwidth_attr)
    {
        delete m_endarrowwidth_attr;
        m_endarrowwidth_attr = NULL;
    }


    m_has_endarrowlength_attr = false;

    if (m_endarrowlength_attr)
    {
        delete m_endarrowlength_attr;
        m_endarrowlength_attr = NULL;
    }


    m_has_href_attr = false;
    m_href_attr.clear();

    m_has_althref_attr = false;
    m_althref_attr.clear();

    m_has_title_attr = false;
    m_title_attr.clear();

    m_has_forcedash_attr = false;

    if (m_forcedash_attr)
    {
        delete m_forcedash_attr;
        m_forcedash_attr = NULL;
    }

}

void bottom_element::toXml(std::ostream& _outStream) const
{
    _outStream << "<o:bottom";

    _outStream << " " << "xmlns:o=\"urn:schemas-microsoft-com:office:office\"";
    _outStream << " " << "xmlns:o=\"urn:schemas-microsoft-com:vml\"";
    _outStream << " " << "xmlns:o=\"http://schemas.openxmlformats.org/officeDocument/2006/sharedTypes\"";
    _outStream << " " << "xmlns:o=\"http://schemas.openxmlformats.org/officeDocument/2006/relationships\"";


    if (m_has_v_ext_attr)
    {
        m_v_ext_attr->toXmlAttr("v:ext", _outStream);
    }



    if (m_has_on_attr)
    {
        m_on_attr->toXmlAttr("on", _outStream);
    }



    if (m_has_weight_attr)
    {
        _outStream << " " << "weight" << "=\"" << m_weight_attr << "\"";
    }



    if (m_has_color_attr)
    {
        m_color_attr->toXmlAttr("color", _outStream);
    }



    if (m_has_color2_attr)
    {
        m_color2_attr->toXmlAttr("color2", _outStream);
    }



    if (m_has_opacity_attr)
    {
        _outStream << " " << "opacity" << "=\"" << m_opacity_attr << "\"";
    }



    if (m_has_linestyle_attr)
    {
        m_linestyle_attr->toXmlAttr("linestyle", _outStream);
    }



    if (m_has_miterlimit_attr)
    {
        _outStream << " " << "miterlimit" << "=\"" << m_miterlimit_attr << "\"";
    }



    if (m_has_joinstyle_attr)
    {
        m_joinstyle_attr->toXmlAttr("joinstyle", _outStream);
    }



    if (m_has_endcap_attr)
    {
        m_endcap_attr->toXmlAttr("endcap", _outStream);
    }



    if (m_has_dashstyle_attr)
    {
        _outStream << " " << "dashstyle" << "=\"" << m_dashstyle_attr << "\"";
    }



    if (m_has_insetpen_attr)
    {
        m_insetpen_attr->toXmlAttr("insetpen", _outStream);
    }



    if (m_has_filltype_attr)
    {
        m_filltype_attr->toXmlAttr("filltype", _outStream);
    }



    if (m_has_src_attr)
    {
        _outStream << " " << "src" << "=\"" << m_src_attr << "\"";
    }



    if (m_has_imageaspect_attr)
    {
        m_imageaspect_attr->toXmlAttr("imageaspect", _outStream);
    }



    if (m_has_imagesize_attr)
    {
        _outStream << " " << "imagesize" << "=\"" << m_imagesize_attr << "\"";
    }



    if (m_has_imagealignshape_attr)
    {
        m_imagealignshape_attr->toXmlAttr("imagealignshape", _outStream);
    }



    if (m_has_startarrow_attr)
    {
        m_startarrow_attr->toXmlAttr("startarrow", _outStream);
    }



    if (m_has_startarrowwidth_attr)
    {
        m_startarrowwidth_attr->toXmlAttr("startarrowwidth", _outStream);
    }



    if (m_has_startarrowlength_attr)
    {
        m_startarrowlength_attr->toXmlAttr("startarrowlength", _outStream);
    }



    if (m_has_endarrow_attr)
    {
        m_endarrow_attr->toXmlAttr("endarrow", _outStream);
    }



    if (m_has_endarrowwidth_attr)
    {
        m_endarrowwidth_attr->toXmlAttr("endarrowwidth", _outStream);
    }



    if (m_has_endarrowlength_attr)
    {
        m_endarrowlength_attr->toXmlAttr("endarrowlength", _outStream);
    }



    if (m_has_href_attr)
    {
        _outStream << " " << "href" << "=\"" << m_href_attr << "\"";
    }



    if (m_has_althref_attr)
    {
        _outStream << " " << "althref" << "=\"" << m_althref_attr << "\"";
    }



    if (m_has_title_attr)
    {
        _outStream << " " << "title" << "=\"" << m_title_attr << "\"";
    }



    if (m_has_forcedash_attr)
    {
        m_forcedash_attr->toXmlAttr("forcedash", _outStream);
    }

    _outStream << ">";

    _outStream << "</o:bottom>";
}

const bottom_element& bottom_element::default_instance()
{
    if (!bottom_element::default_instance_)
    {
        bottom_element::default_instance_ = new bottom_element();
    }
    return *bottom_element::default_instance_;
}

bool bottom_element::has_v_ext_attr() const
{
    return m_has_v_ext_attr;
}

void bottom_element::set_v_ext_attr(const ns_v::ST_Ext& _v_ext_attr)
{
    m_has_v_ext_attr = true;
    m_v_ext_attr = new ns_v::ST_Ext(_v_ext_attr);
}

const ns_v::ST_Ext& bottom_element::get_v_ext_attr() const
{
    if (m_v_ext_attr)
    {
        return *m_v_ext_attr;
    }
    return ns_v::ST_Ext::default_instance();
}

bool bottom_element::has_on_attr() const
{
    return m_has_on_attr;
}

void bottom_element::set_on_attr(const ns_s::ST_TrueFalse& _on_attr)
{
    m_has_on_attr = true;
    m_on_attr = new ns_s::ST_TrueFalse(_on_attr);
}

const ns_s::ST_TrueFalse& bottom_element::get_on_attr() const
{
    if (m_on_attr)
    {
        return *m_on_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
}

bool bottom_element::has_weight_attr() const
{
    return m_has_weight_attr;
}

void bottom_element::set_weight_attr(const XSD::string_& _weight_attr)
{
    m_has_weight_attr = true;
    m_weight_attr = _weight_attr;
}

const XSD::string_& bottom_element::get_weight_attr() const
{
    return m_weight_attr;
}

bool bottom_element::has_color_attr() const
{
    return m_has_color_attr;
}

void bottom_element::set_color_attr(const ns_s::ST_ColorType& _color_attr)
{
    m_has_color_attr = true;
    m_color_attr = new ns_s::ST_ColorType(_color_attr);
}

const ns_s::ST_ColorType& bottom_element::get_color_attr() const
{
    if (m_color_attr)
    {
        return *m_color_attr;
    }
    return ns_s::ST_ColorType::default_instance();
}

bool bottom_element::has_color2_attr() const
{
    return m_has_color2_attr;
}

void bottom_element::set_color2_attr(const ns_s::ST_ColorType& _color2_attr)
{
    m_has_color2_attr = true;
    m_color2_attr = new ns_s::ST_ColorType(_color2_attr);
}

const ns_s::ST_ColorType& bottom_element::get_color2_attr() const
{
    if (m_color2_attr)
    {
        return *m_color2_attr;
    }
    return ns_s::ST_ColorType::default_instance();
}

bool bottom_element::has_opacity_attr() const
{
    return m_has_opacity_attr;
}

void bottom_element::set_opacity_attr(const XSD::string_& _opacity_attr)
{
    m_has_opacity_attr = true;
    m_opacity_attr = _opacity_attr;
}

const XSD::string_& bottom_element::get_opacity_attr() const
{
    return m_opacity_attr;
}

bool bottom_element::has_linestyle_attr() const
{
    return m_has_linestyle_attr;
}

void bottom_element::set_linestyle_attr(const ns_v::ST_StrokeLineStyle& _linestyle_attr)
{
    m_has_linestyle_attr = true;
    m_linestyle_attr = new ns_v::ST_StrokeLineStyle(_linestyle_attr);
}

const ns_v::ST_StrokeLineStyle& bottom_element::get_linestyle_attr() const
{
    if (m_linestyle_attr)
    {
        return *m_linestyle_attr;
    }
    return ns_v::ST_StrokeLineStyle::default_instance();
}

bool bottom_element::has_miterlimit_attr() const
{
    return m_has_miterlimit_attr;
}

void bottom_element::set_miterlimit_attr(const XSD::decimal_& _miterlimit_attr)
{
    m_has_miterlimit_attr = true;
    m_miterlimit_attr = _miterlimit_attr;
}

const XSD::decimal_& bottom_element::get_miterlimit_attr() const
{
    return m_miterlimit_attr;
}

bool bottom_element::has_joinstyle_attr() const
{
    return m_has_joinstyle_attr;
}

void bottom_element::set_joinstyle_attr(const ns_v::ST_StrokeJoinStyle& _joinstyle_attr)
{
    m_has_joinstyle_attr = true;
    m_joinstyle_attr = new ns_v::ST_StrokeJoinStyle(_joinstyle_attr);
}

const ns_v::ST_StrokeJoinStyle& bottom_element::get_joinstyle_attr() const
{
    if (m_joinstyle_attr)
    {
        return *m_joinstyle_attr;
    }
    return ns_v::ST_StrokeJoinStyle::default_instance();
}

bool bottom_element::has_endcap_attr() const
{
    return m_has_endcap_attr;
}

void bottom_element::set_endcap_attr(const ns_v::ST_StrokeEndCap& _endcap_attr)
{
    m_has_endcap_attr = true;
    m_endcap_attr = new ns_v::ST_StrokeEndCap(_endcap_attr);
}

const ns_v::ST_StrokeEndCap& bottom_element::get_endcap_attr() const
{
    if (m_endcap_attr)
    {
        return *m_endcap_attr;
    }
    return ns_v::ST_StrokeEndCap::default_instance();
}

bool bottom_element::has_dashstyle_attr() const
{
    return m_has_dashstyle_attr;
}

void bottom_element::set_dashstyle_attr(const XSD::string_& _dashstyle_attr)
{
    m_has_dashstyle_attr = true;
    m_dashstyle_attr = _dashstyle_attr;
}

const XSD::string_& bottom_element::get_dashstyle_attr() const
{
    return m_dashstyle_attr;
}

bool bottom_element::has_insetpen_attr() const
{
    return m_has_insetpen_attr;
}

void bottom_element::set_insetpen_attr(const ns_s::ST_TrueFalse& _insetpen_attr)
{
    m_has_insetpen_attr = true;
    m_insetpen_attr = new ns_s::ST_TrueFalse(_insetpen_attr);
}

const ns_s::ST_TrueFalse& bottom_element::get_insetpen_attr() const
{
    if (m_insetpen_attr)
    {
        return *m_insetpen_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
}

bool bottom_element::has_filltype_attr() const
{
    return m_has_filltype_attr;
}

void bottom_element::set_filltype_attr(const ns_v::ST_FillType& _filltype_attr)
{
    m_has_filltype_attr = true;
    m_filltype_attr = new ns_v::ST_FillType(_filltype_attr);
}

const ns_v::ST_FillType& bottom_element::get_filltype_attr() const
{
    if (m_filltype_attr)
    {
        return *m_filltype_attr;
    }
    return ns_v::ST_FillType::default_instance();
}

bool bottom_element::has_src_attr() const
{
    return m_has_src_attr;
}

void bottom_element::set_src_attr(const XSD::string_& _src_attr)
{
    m_has_src_attr = true;
    m_src_attr = _src_attr;
}

const XSD::string_& bottom_element::get_src_attr() const
{
    return m_src_attr;
}

bool bottom_element::has_imageaspect_attr() const
{
    return m_has_imageaspect_attr;
}

void bottom_element::set_imageaspect_attr(const ns_v::ST_ImageAspect& _imageaspect_attr)
{
    m_has_imageaspect_attr = true;
    m_imageaspect_attr = new ns_v::ST_ImageAspect(_imageaspect_attr);
}

const ns_v::ST_ImageAspect& bottom_element::get_imageaspect_attr() const
{
    if (m_imageaspect_attr)
    {
        return *m_imageaspect_attr;
    }
    return ns_v::ST_ImageAspect::default_instance();
}

bool bottom_element::has_imagesize_attr() const
{
    return m_has_imagesize_attr;
}

void bottom_element::set_imagesize_attr(const XSD::string_& _imagesize_attr)
{
    m_has_imagesize_attr = true;
    m_imagesize_attr = _imagesize_attr;
}

const XSD::string_& bottom_element::get_imagesize_attr() const
{
    return m_imagesize_attr;
}

bool bottom_element::has_imagealignshape_attr() const
{
    return m_has_imagealignshape_attr;
}

void bottom_element::set_imagealignshape_attr(const ns_s::ST_TrueFalse& _imagealignshape_attr)
{
    m_has_imagealignshape_attr = true;
    m_imagealignshape_attr = new ns_s::ST_TrueFalse(_imagealignshape_attr);
}

const ns_s::ST_TrueFalse& bottom_element::get_imagealignshape_attr() const
{
    if (m_imagealignshape_attr)
    {
        return *m_imagealignshape_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
}

bool bottom_element::has_startarrow_attr() const
{
    return m_has_startarrow_attr;
}

void bottom_element::set_startarrow_attr(const ns_v::ST_StrokeArrowType& _startarrow_attr)
{
    m_has_startarrow_attr = true;
    m_startarrow_attr = new ns_v::ST_StrokeArrowType(_startarrow_attr);
}

const ns_v::ST_StrokeArrowType& bottom_element::get_startarrow_attr() const
{
    if (m_startarrow_attr)
    {
        return *m_startarrow_attr;
    }
    return ns_v::ST_StrokeArrowType::default_instance();
}

bool bottom_element::has_startarrowwidth_attr() const
{
    return m_has_startarrowwidth_attr;
}

void bottom_element::set_startarrowwidth_attr(const ns_v::ST_StrokeArrowWidth& _startarrowwidth_attr)
{
    m_has_startarrowwidth_attr = true;
    m_startarrowwidth_attr = new ns_v::ST_StrokeArrowWidth(_startarrowwidth_attr);
}

const ns_v::ST_StrokeArrowWidth& bottom_element::get_startarrowwidth_attr() const
{
    if (m_startarrowwidth_attr)
    {
        return *m_startarrowwidth_attr;
    }
    return ns_v::ST_StrokeArrowWidth::default_instance();
}

bool bottom_element::has_startarrowlength_attr() const
{
    return m_has_startarrowlength_attr;
}

void bottom_element::set_startarrowlength_attr(const ns_v::ST_StrokeArrowLength& _startarrowlength_attr)
{
    m_has_startarrowlength_attr = true;
    m_startarrowlength_attr = new ns_v::ST_StrokeArrowLength(_startarrowlength_attr);
}

const ns_v::ST_StrokeArrowLength& bottom_element::get_startarrowlength_attr() const
{
    if (m_startarrowlength_attr)
    {
        return *m_startarrowlength_attr;
    }
    return ns_v::ST_StrokeArrowLength::default_instance();
}

bool bottom_element::has_endarrow_attr() const
{
    return m_has_endarrow_attr;
}

void bottom_element::set_endarrow_attr(const ns_v::ST_StrokeArrowType& _endarrow_attr)
{
    m_has_endarrow_attr = true;
    m_endarrow_attr = new ns_v::ST_StrokeArrowType(_endarrow_attr);
}

const ns_v::ST_StrokeArrowType& bottom_element::get_endarrow_attr() const
{
    if (m_endarrow_attr)
    {
        return *m_endarrow_attr;
    }
    return ns_v::ST_StrokeArrowType::default_instance();
}

bool bottom_element::has_endarrowwidth_attr() const
{
    return m_has_endarrowwidth_attr;
}

void bottom_element::set_endarrowwidth_attr(const ns_v::ST_StrokeArrowWidth& _endarrowwidth_attr)
{
    m_has_endarrowwidth_attr = true;
    m_endarrowwidth_attr = new ns_v::ST_StrokeArrowWidth(_endarrowwidth_attr);
}

const ns_v::ST_StrokeArrowWidth& bottom_element::get_endarrowwidth_attr() const
{
    if (m_endarrowwidth_attr)
    {
        return *m_endarrowwidth_attr;
    }
    return ns_v::ST_StrokeArrowWidth::default_instance();
}

bool bottom_element::has_endarrowlength_attr() const
{
    return m_has_endarrowlength_attr;
}

void bottom_element::set_endarrowlength_attr(const ns_v::ST_StrokeArrowLength& _endarrowlength_attr)
{
    m_has_endarrowlength_attr = true;
    m_endarrowlength_attr = new ns_v::ST_StrokeArrowLength(_endarrowlength_attr);
}

const ns_v::ST_StrokeArrowLength& bottom_element::get_endarrowlength_attr() const
{
    if (m_endarrowlength_attr)
    {
        return *m_endarrowlength_attr;
    }
    return ns_v::ST_StrokeArrowLength::default_instance();
}

bool bottom_element::has_href_attr() const
{
    return m_has_href_attr;
}

void bottom_element::set_href_attr(const XSD::string_& _href_attr)
{
    m_has_href_attr = true;
    m_href_attr = _href_attr;
}

const XSD::string_& bottom_element::get_href_attr() const
{
    return m_href_attr;
}

bool bottom_element::has_althref_attr() const
{
    return m_has_althref_attr;
}

void bottom_element::set_althref_attr(const XSD::string_& _althref_attr)
{
    m_has_althref_attr = true;
    m_althref_attr = _althref_attr;
}

const XSD::string_& bottom_element::get_althref_attr() const
{
    return m_althref_attr;
}

bool bottom_element::has_title_attr() const
{
    return m_has_title_attr;
}

void bottom_element::set_title_attr(const XSD::string_& _title_attr)
{
    m_has_title_attr = true;
    m_title_attr = _title_attr;
}

const XSD::string_& bottom_element::get_title_attr() const
{
    return m_title_attr;
}

bool bottom_element::has_forcedash_attr() const
{
    return m_has_forcedash_attr;
}

void bottom_element::set_forcedash_attr(const ns_s::ST_TrueFalse& _forcedash_attr)
{
    m_has_forcedash_attr = true;
    m_forcedash_attr = new ns_s::ST_TrueFalse(_forcedash_attr);
}

const ns_s::ST_TrueFalse& bottom_element::get_forcedash_attr() const
{
    if (m_forcedash_attr)
    {
        return *m_forcedash_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
}

bottom_element* bottom_element::default_instance_ = NULL;

// column_element
column_element::column_element()
    :m_has_v_ext_attr(false),
     m_v_ext_attr(NULL),
     m_has_on_attr(false),
     m_on_attr(NULL),
     m_has_weight_attr(false),
     m_weight_attr(""),
     m_has_color_attr(false),
     m_color_attr(NULL),
     m_has_color2_attr(false),
     m_color2_attr(NULL),
     m_has_opacity_attr(false),
     m_opacity_attr(""),
     m_has_linestyle_attr(false),
     m_linestyle_attr(NULL),
     m_has_miterlimit_attr(false),
     m_miterlimit_attr(0),
     m_has_joinstyle_attr(false),
     m_joinstyle_attr(NULL),
     m_has_endcap_attr(false),
     m_endcap_attr(NULL),
     m_has_dashstyle_attr(false),
     m_dashstyle_attr(""),
     m_has_insetpen_attr(false),
     m_insetpen_attr(NULL),
     m_has_filltype_attr(false),
     m_filltype_attr(NULL),
     m_has_src_attr(false),
     m_src_attr(""),
     m_has_imageaspect_attr(false),
     m_imageaspect_attr(NULL),
     m_has_imagesize_attr(false),
     m_imagesize_attr(""),
     m_has_imagealignshape_attr(false),
     m_imagealignshape_attr(NULL),
     m_has_startarrow_attr(false),
     m_startarrow_attr(NULL),
     m_has_startarrowwidth_attr(false),
     m_startarrowwidth_attr(NULL),
     m_has_startarrowlength_attr(false),
     m_startarrowlength_attr(NULL),
     m_has_endarrow_attr(false),
     m_endarrow_attr(NULL),
     m_has_endarrowwidth_attr(false),
     m_endarrowwidth_attr(NULL),
     m_has_endarrowlength_attr(false),
     m_endarrowlength_attr(NULL),
     m_has_href_attr(false),
     m_href_attr(""),
     m_has_althref_attr(false),
     m_althref_attr(""),
     m_has_title_attr(false),
     m_title_attr(""),
     m_has_forcedash_attr(false),
     m_forcedash_attr(NULL)
{
}
column_element::~column_element()
{
    clear();
}
void column_element::clear()
{
    m_has_v_ext_attr = false;

    if (m_v_ext_attr)
    {
        delete m_v_ext_attr;
        m_v_ext_attr = NULL;
    }


    m_has_on_attr = false;

    if (m_on_attr)
    {
        delete m_on_attr;
        m_on_attr = NULL;
    }


    m_has_weight_attr = false;
    m_weight_attr.clear();

    m_has_color_attr = false;

    if (m_color_attr)
    {
        delete m_color_attr;
        m_color_attr = NULL;
    }


    m_has_color2_attr = false;

    if (m_color2_attr)
    {
        delete m_color2_attr;
        m_color2_attr = NULL;
    }


    m_has_opacity_attr = false;
    m_opacity_attr.clear();

    m_has_linestyle_attr = false;

    if (m_linestyle_attr)
    {
        delete m_linestyle_attr;
        m_linestyle_attr = NULL;
    }


    m_has_miterlimit_attr = false;
    m_miterlimit_attr = 0;

    m_has_joinstyle_attr = false;

    if (m_joinstyle_attr)
    {
        delete m_joinstyle_attr;
        m_joinstyle_attr = NULL;
    }


    m_has_endcap_attr = false;

    if (m_endcap_attr)
    {
        delete m_endcap_attr;
        m_endcap_attr = NULL;
    }


    m_has_dashstyle_attr = false;
    m_dashstyle_attr.clear();

    m_has_insetpen_attr = false;

    if (m_insetpen_attr)
    {
        delete m_insetpen_attr;
        m_insetpen_attr = NULL;
    }


    m_has_filltype_attr = false;

    if (m_filltype_attr)
    {
        delete m_filltype_attr;
        m_filltype_attr = NULL;
    }


    m_has_src_attr = false;
    m_src_attr.clear();

    m_has_imageaspect_attr = false;

    if (m_imageaspect_attr)
    {
        delete m_imageaspect_attr;
        m_imageaspect_attr = NULL;
    }


    m_has_imagesize_attr = false;
    m_imagesize_attr.clear();

    m_has_imagealignshape_attr = false;

    if (m_imagealignshape_attr)
    {
        delete m_imagealignshape_attr;
        m_imagealignshape_attr = NULL;
    }


    m_has_startarrow_attr = false;

    if (m_startarrow_attr)
    {
        delete m_startarrow_attr;
        m_startarrow_attr = NULL;
    }


    m_has_startarrowwidth_attr = false;

    if (m_startarrowwidth_attr)
    {
        delete m_startarrowwidth_attr;
        m_startarrowwidth_attr = NULL;
    }


    m_has_startarrowlength_attr = false;

    if (m_startarrowlength_attr)
    {
        delete m_startarrowlength_attr;
        m_startarrowlength_attr = NULL;
    }


    m_has_endarrow_attr = false;

    if (m_endarrow_attr)
    {
        delete m_endarrow_attr;
        m_endarrow_attr = NULL;
    }


    m_has_endarrowwidth_attr = false;

    if (m_endarrowwidth_attr)
    {
        delete m_endarrowwidth_attr;
        m_endarrowwidth_attr = NULL;
    }


    m_has_endarrowlength_attr = false;

    if (m_endarrowlength_attr)
    {
        delete m_endarrowlength_attr;
        m_endarrowlength_attr = NULL;
    }


    m_has_href_attr = false;
    m_href_attr.clear();

    m_has_althref_attr = false;
    m_althref_attr.clear();

    m_has_title_attr = false;
    m_title_attr.clear();

    m_has_forcedash_attr = false;

    if (m_forcedash_attr)
    {
        delete m_forcedash_attr;
        m_forcedash_attr = NULL;
    }

}

void column_element::toXml(std::ostream& _outStream) const
{
    _outStream << "<o:column";

    _outStream << " " << "xmlns:o=\"urn:schemas-microsoft-com:office:office\"";
    _outStream << " " << "xmlns:o=\"urn:schemas-microsoft-com:vml\"";
    _outStream << " " << "xmlns:o=\"http://schemas.openxmlformats.org/officeDocument/2006/sharedTypes\"";
    _outStream << " " << "xmlns:o=\"http://schemas.openxmlformats.org/officeDocument/2006/relationships\"";


    if (m_has_v_ext_attr)
    {
        m_v_ext_attr->toXmlAttr("v:ext", _outStream);
    }



    if (m_has_on_attr)
    {
        m_on_attr->toXmlAttr("on", _outStream);
    }



    if (m_has_weight_attr)
    {
        _outStream << " " << "weight" << "=\"" << m_weight_attr << "\"";
    }



    if (m_has_color_attr)
    {
        m_color_attr->toXmlAttr("color", _outStream);
    }



    if (m_has_color2_attr)
    {
        m_color2_attr->toXmlAttr("color2", _outStream);
    }



    if (m_has_opacity_attr)
    {
        _outStream << " " << "opacity" << "=\"" << m_opacity_attr << "\"";
    }



    if (m_has_linestyle_attr)
    {
        m_linestyle_attr->toXmlAttr("linestyle", _outStream);
    }



    if (m_has_miterlimit_attr)
    {
        _outStream << " " << "miterlimit" << "=\"" << m_miterlimit_attr << "\"";
    }



    if (m_has_joinstyle_attr)
    {
        m_joinstyle_attr->toXmlAttr("joinstyle", _outStream);
    }



    if (m_has_endcap_attr)
    {
        m_endcap_attr->toXmlAttr("endcap", _outStream);
    }



    if (m_has_dashstyle_attr)
    {
        _outStream << " " << "dashstyle" << "=\"" << m_dashstyle_attr << "\"";
    }



    if (m_has_insetpen_attr)
    {
        m_insetpen_attr->toXmlAttr("insetpen", _outStream);
    }



    if (m_has_filltype_attr)
    {
        m_filltype_attr->toXmlAttr("filltype", _outStream);
    }



    if (m_has_src_attr)
    {
        _outStream << " " << "src" << "=\"" << m_src_attr << "\"";
    }



    if (m_has_imageaspect_attr)
    {
        m_imageaspect_attr->toXmlAttr("imageaspect", _outStream);
    }



    if (m_has_imagesize_attr)
    {
        _outStream << " " << "imagesize" << "=\"" << m_imagesize_attr << "\"";
    }



    if (m_has_imagealignshape_attr)
    {
        m_imagealignshape_attr->toXmlAttr("imagealignshape", _outStream);
    }



    if (m_has_startarrow_attr)
    {
        m_startarrow_attr->toXmlAttr("startarrow", _outStream);
    }



    if (m_has_startarrowwidth_attr)
    {
        m_startarrowwidth_attr->toXmlAttr("startarrowwidth", _outStream);
    }



    if (m_has_startarrowlength_attr)
    {
        m_startarrowlength_attr->toXmlAttr("startarrowlength", _outStream);
    }



    if (m_has_endarrow_attr)
    {
        m_endarrow_attr->toXmlAttr("endarrow", _outStream);
    }



    if (m_has_endarrowwidth_attr)
    {
        m_endarrowwidth_attr->toXmlAttr("endarrowwidth", _outStream);
    }



    if (m_has_endarrowlength_attr)
    {
        m_endarrowlength_attr->toXmlAttr("endarrowlength", _outStream);
    }



    if (m_has_href_attr)
    {
        _outStream << " " << "href" << "=\"" << m_href_attr << "\"";
    }



    if (m_has_althref_attr)
    {
        _outStream << " " << "althref" << "=\"" << m_althref_attr << "\"";
    }



    if (m_has_title_attr)
    {
        _outStream << " " << "title" << "=\"" << m_title_attr << "\"";
    }



    if (m_has_forcedash_attr)
    {
        m_forcedash_attr->toXmlAttr("forcedash", _outStream);
    }

    _outStream << ">";

    _outStream << "</o:column>";
}

const column_element& column_element::default_instance()
{
    if (!column_element::default_instance_)
    {
        column_element::default_instance_ = new column_element();
    }
    return *column_element::default_instance_;
}

bool column_element::has_v_ext_attr() const
{
    return m_has_v_ext_attr;
}

void column_element::set_v_ext_attr(const ns_v::ST_Ext& _v_ext_attr)
{
    m_has_v_ext_attr = true;
    m_v_ext_attr = new ns_v::ST_Ext(_v_ext_attr);
}

const ns_v::ST_Ext& column_element::get_v_ext_attr() const
{
    if (m_v_ext_attr)
    {
        return *m_v_ext_attr;
    }
    return ns_v::ST_Ext::default_instance();
}

bool column_element::has_on_attr() const
{
    return m_has_on_attr;
}

void column_element::set_on_attr(const ns_s::ST_TrueFalse& _on_attr)
{
    m_has_on_attr = true;
    m_on_attr = new ns_s::ST_TrueFalse(_on_attr);
}

const ns_s::ST_TrueFalse& column_element::get_on_attr() const
{
    if (m_on_attr)
    {
        return *m_on_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
}

bool column_element::has_weight_attr() const
{
    return m_has_weight_attr;
}

void column_element::set_weight_attr(const XSD::string_& _weight_attr)
{
    m_has_weight_attr = true;
    m_weight_attr = _weight_attr;
}

const XSD::string_& column_element::get_weight_attr() const
{
    return m_weight_attr;
}

bool column_element::has_color_attr() const
{
    return m_has_color_attr;
}

void column_element::set_color_attr(const ns_s::ST_ColorType& _color_attr)
{
    m_has_color_attr = true;
    m_color_attr = new ns_s::ST_ColorType(_color_attr);
}

const ns_s::ST_ColorType& column_element::get_color_attr() const
{
    if (m_color_attr)
    {
        return *m_color_attr;
    }
    return ns_s::ST_ColorType::default_instance();
}

bool column_element::has_color2_attr() const
{
    return m_has_color2_attr;
}

void column_element::set_color2_attr(const ns_s::ST_ColorType& _color2_attr)
{
    m_has_color2_attr = true;
    m_color2_attr = new ns_s::ST_ColorType(_color2_attr);
}

const ns_s::ST_ColorType& column_element::get_color2_attr() const
{
    if (m_color2_attr)
    {
        return *m_color2_attr;
    }
    return ns_s::ST_ColorType::default_instance();
}

bool column_element::has_opacity_attr() const
{
    return m_has_opacity_attr;
}

void column_element::set_opacity_attr(const XSD::string_& _opacity_attr)
{
    m_has_opacity_attr = true;
    m_opacity_attr = _opacity_attr;
}

const XSD::string_& column_element::get_opacity_attr() const
{
    return m_opacity_attr;
}

bool column_element::has_linestyle_attr() const
{
    return m_has_linestyle_attr;
}

void column_element::set_linestyle_attr(const ns_v::ST_StrokeLineStyle& _linestyle_attr)
{
    m_has_linestyle_attr = true;
    m_linestyle_attr = new ns_v::ST_StrokeLineStyle(_linestyle_attr);
}

const ns_v::ST_StrokeLineStyle& column_element::get_linestyle_attr() const
{
    if (m_linestyle_attr)
    {
        return *m_linestyle_attr;
    }
    return ns_v::ST_StrokeLineStyle::default_instance();
}

bool column_element::has_miterlimit_attr() const
{
    return m_has_miterlimit_attr;
}

void column_element::set_miterlimit_attr(const XSD::decimal_& _miterlimit_attr)
{
    m_has_miterlimit_attr = true;
    m_miterlimit_attr = _miterlimit_attr;
}

const XSD::decimal_& column_element::get_miterlimit_attr() const
{
    return m_miterlimit_attr;
}

bool column_element::has_joinstyle_attr() const
{
    return m_has_joinstyle_attr;
}

void column_element::set_joinstyle_attr(const ns_v::ST_StrokeJoinStyle& _joinstyle_attr)
{
    m_has_joinstyle_attr = true;
    m_joinstyle_attr = new ns_v::ST_StrokeJoinStyle(_joinstyle_attr);
}

const ns_v::ST_StrokeJoinStyle& column_element::get_joinstyle_attr() const
{
    if (m_joinstyle_attr)
    {
        return *m_joinstyle_attr;
    }
    return ns_v::ST_StrokeJoinStyle::default_instance();
}

bool column_element::has_endcap_attr() const
{
    return m_has_endcap_attr;
}

void column_element::set_endcap_attr(const ns_v::ST_StrokeEndCap& _endcap_attr)
{
    m_has_endcap_attr = true;
    m_endcap_attr = new ns_v::ST_StrokeEndCap(_endcap_attr);
}

const ns_v::ST_StrokeEndCap& column_element::get_endcap_attr() const
{
    if (m_endcap_attr)
    {
        return *m_endcap_attr;
    }
    return ns_v::ST_StrokeEndCap::default_instance();
}

bool column_element::has_dashstyle_attr() const
{
    return m_has_dashstyle_attr;
}

void column_element::set_dashstyle_attr(const XSD::string_& _dashstyle_attr)
{
    m_has_dashstyle_attr = true;
    m_dashstyle_attr = _dashstyle_attr;
}

const XSD::string_& column_element::get_dashstyle_attr() const
{
    return m_dashstyle_attr;
}

bool column_element::has_insetpen_attr() const
{
    return m_has_insetpen_attr;
}

void column_element::set_insetpen_attr(const ns_s::ST_TrueFalse& _insetpen_attr)
{
    m_has_insetpen_attr = true;
    m_insetpen_attr = new ns_s::ST_TrueFalse(_insetpen_attr);
}

const ns_s::ST_TrueFalse& column_element::get_insetpen_attr() const
{
    if (m_insetpen_attr)
    {
        return *m_insetpen_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
}

bool column_element::has_filltype_attr() const
{
    return m_has_filltype_attr;
}

void column_element::set_filltype_attr(const ns_v::ST_FillType& _filltype_attr)
{
    m_has_filltype_attr = true;
    m_filltype_attr = new ns_v::ST_FillType(_filltype_attr);
}

const ns_v::ST_FillType& column_element::get_filltype_attr() const
{
    if (m_filltype_attr)
    {
        return *m_filltype_attr;
    }
    return ns_v::ST_FillType::default_instance();
}

bool column_element::has_src_attr() const
{
    return m_has_src_attr;
}

void column_element::set_src_attr(const XSD::string_& _src_attr)
{
    m_has_src_attr = true;
    m_src_attr = _src_attr;
}

const XSD::string_& column_element::get_src_attr() const
{
    return m_src_attr;
}

bool column_element::has_imageaspect_attr() const
{
    return m_has_imageaspect_attr;
}

void column_element::set_imageaspect_attr(const ns_v::ST_ImageAspect& _imageaspect_attr)
{
    m_has_imageaspect_attr = true;
    m_imageaspect_attr = new ns_v::ST_ImageAspect(_imageaspect_attr);
}

const ns_v::ST_ImageAspect& column_element::get_imageaspect_attr() const
{
    if (m_imageaspect_attr)
    {
        return *m_imageaspect_attr;
    }
    return ns_v::ST_ImageAspect::default_instance();
}

bool column_element::has_imagesize_attr() const
{
    return m_has_imagesize_attr;
}

void column_element::set_imagesize_attr(const XSD::string_& _imagesize_attr)
{
    m_has_imagesize_attr = true;
    m_imagesize_attr = _imagesize_attr;
}

const XSD::string_& column_element::get_imagesize_attr() const
{
    return m_imagesize_attr;
}

bool column_element::has_imagealignshape_attr() const
{
    return m_has_imagealignshape_attr;
}

void column_element::set_imagealignshape_attr(const ns_s::ST_TrueFalse& _imagealignshape_attr)
{
    m_has_imagealignshape_attr = true;
    m_imagealignshape_attr = new ns_s::ST_TrueFalse(_imagealignshape_attr);
}

const ns_s::ST_TrueFalse& column_element::get_imagealignshape_attr() const
{
    if (m_imagealignshape_attr)
    {
        return *m_imagealignshape_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
}

bool column_element::has_startarrow_attr() const
{
    return m_has_startarrow_attr;
}

void column_element::set_startarrow_attr(const ns_v::ST_StrokeArrowType& _startarrow_attr)
{
    m_has_startarrow_attr = true;
    m_startarrow_attr = new ns_v::ST_StrokeArrowType(_startarrow_attr);
}

const ns_v::ST_StrokeArrowType& column_element::get_startarrow_attr() const
{
    if (m_startarrow_attr)
    {
        return *m_startarrow_attr;
    }
    return ns_v::ST_StrokeArrowType::default_instance();
}

bool column_element::has_startarrowwidth_attr() const
{
    return m_has_startarrowwidth_attr;
}

void column_element::set_startarrowwidth_attr(const ns_v::ST_StrokeArrowWidth& _startarrowwidth_attr)
{
    m_has_startarrowwidth_attr = true;
    m_startarrowwidth_attr = new ns_v::ST_StrokeArrowWidth(_startarrowwidth_attr);
}

const ns_v::ST_StrokeArrowWidth& column_element::get_startarrowwidth_attr() const
{
    if (m_startarrowwidth_attr)
    {
        return *m_startarrowwidth_attr;
    }
    return ns_v::ST_StrokeArrowWidth::default_instance();
}

bool column_element::has_startarrowlength_attr() const
{
    return m_has_startarrowlength_attr;
}

void column_element::set_startarrowlength_attr(const ns_v::ST_StrokeArrowLength& _startarrowlength_attr)
{
    m_has_startarrowlength_attr = true;
    m_startarrowlength_attr = new ns_v::ST_StrokeArrowLength(_startarrowlength_attr);
}

const ns_v::ST_StrokeArrowLength& column_element::get_startarrowlength_attr() const
{
    if (m_startarrowlength_attr)
    {
        return *m_startarrowlength_attr;
    }
    return ns_v::ST_StrokeArrowLength::default_instance();
}

bool column_element::has_endarrow_attr() const
{
    return m_has_endarrow_attr;
}

void column_element::set_endarrow_attr(const ns_v::ST_StrokeArrowType& _endarrow_attr)
{
    m_has_endarrow_attr = true;
    m_endarrow_attr = new ns_v::ST_StrokeArrowType(_endarrow_attr);
}

const ns_v::ST_StrokeArrowType& column_element::get_endarrow_attr() const
{
    if (m_endarrow_attr)
    {
        return *m_endarrow_attr;
    }
    return ns_v::ST_StrokeArrowType::default_instance();
}

bool column_element::has_endarrowwidth_attr() const
{
    return m_has_endarrowwidth_attr;
}

void column_element::set_endarrowwidth_attr(const ns_v::ST_StrokeArrowWidth& _endarrowwidth_attr)
{
    m_has_endarrowwidth_attr = true;
    m_endarrowwidth_attr = new ns_v::ST_StrokeArrowWidth(_endarrowwidth_attr);
}

const ns_v::ST_StrokeArrowWidth& column_element::get_endarrowwidth_attr() const
{
    if (m_endarrowwidth_attr)
    {
        return *m_endarrowwidth_attr;
    }
    return ns_v::ST_StrokeArrowWidth::default_instance();
}

bool column_element::has_endarrowlength_attr() const
{
    return m_has_endarrowlength_attr;
}

void column_element::set_endarrowlength_attr(const ns_v::ST_StrokeArrowLength& _endarrowlength_attr)
{
    m_has_endarrowlength_attr = true;
    m_endarrowlength_attr = new ns_v::ST_StrokeArrowLength(_endarrowlength_attr);
}

const ns_v::ST_StrokeArrowLength& column_element::get_endarrowlength_attr() const
{
    if (m_endarrowlength_attr)
    {
        return *m_endarrowlength_attr;
    }
    return ns_v::ST_StrokeArrowLength::default_instance();
}

bool column_element::has_href_attr() const
{
    return m_has_href_attr;
}

void column_element::set_href_attr(const XSD::string_& _href_attr)
{
    m_has_href_attr = true;
    m_href_attr = _href_attr;
}

const XSD::string_& column_element::get_href_attr() const
{
    return m_href_attr;
}

bool column_element::has_althref_attr() const
{
    return m_has_althref_attr;
}

void column_element::set_althref_attr(const XSD::string_& _althref_attr)
{
    m_has_althref_attr = true;
    m_althref_attr = _althref_attr;
}

const XSD::string_& column_element::get_althref_attr() const
{
    return m_althref_attr;
}

bool column_element::has_title_attr() const
{
    return m_has_title_attr;
}

void column_element::set_title_attr(const XSD::string_& _title_attr)
{
    m_has_title_attr = true;
    m_title_attr = _title_attr;
}

const XSD::string_& column_element::get_title_attr() const
{
    return m_title_attr;
}

bool column_element::has_forcedash_attr() const
{
    return m_has_forcedash_attr;
}

void column_element::set_forcedash_attr(const ns_s::ST_TrueFalse& _forcedash_attr)
{
    m_has_forcedash_attr = true;
    m_forcedash_attr = new ns_s::ST_TrueFalse(_forcedash_attr);
}

const ns_s::ST_TrueFalse& column_element::get_forcedash_attr() const
{
    if (m_forcedash_attr)
    {
        return *m_forcedash_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
}

column_element* column_element::default_instance_ = NULL;

// clippath_element
clippath_element::clippath_element()
    :m_has_v_attr(false),
     m_v_attr("")
{
}
clippath_element::~clippath_element()
{
    clear();
}
void clippath_element::clear()
{
    m_has_v_attr = false;
    m_v_attr.clear();
}

void clippath_element::toXml(std::ostream& _outStream) const
{
    _outStream << "<o:clippath";

    _outStream << " " << "xmlns:o=\"urn:schemas-microsoft-com:office:office\"";
    _outStream << " " << "xmlns:o=\"urn:schemas-microsoft-com:vml\"";
    _outStream << " " << "xmlns:o=\"http://schemas.openxmlformats.org/officeDocument/2006/sharedTypes\"";
    _outStream << " " << "xmlns:o=\"http://schemas.openxmlformats.org/officeDocument/2006/relationships\"";

    assert(m_has_v_attr);
    if (m_has_v_attr)
    {
        _outStream << " " << "v" << "=\"" << m_v_attr << "\"";
    }

    _outStream << ">";

    _outStream << "</o:clippath>";
}

const clippath_element& clippath_element::default_instance()
{
    if (!clippath_element::default_instance_)
    {
        clippath_element::default_instance_ = new clippath_element();
    }
    return *clippath_element::default_instance_;
}

bool clippath_element::has_v_attr() const
{
    return m_has_v_attr;
}

void clippath_element::set_v_attr(const XSD::string_& _v_attr)
{
    m_has_v_attr = true;
    m_v_attr = _v_attr;
}

const XSD::string_& clippath_element::get_v_attr() const
{
    return m_v_attr;
}

clippath_element* clippath_element::default_instance_ = NULL;

// fill_element
fill_element::fill_element()
    :m_has_v_ext_attr(false),
     m_v_ext_attr(NULL),
     m_has_type_attr(false),
     m_type_attr(NULL)
{
}
fill_element::~fill_element()
{
    clear();
}
void fill_element::clear()
{
    m_has_v_ext_attr = false;

    if (m_v_ext_attr)
    {
        delete m_v_ext_attr;
        m_v_ext_attr = NULL;
    }


    m_has_type_attr = false;

    if (m_type_attr)
    {
        delete m_type_attr;
        m_type_attr = NULL;
    }

}

void fill_element::toXml(std::ostream& _outStream) const
{
    _outStream << "<o:fill";

    _outStream << " " << "xmlns:o=\"urn:schemas-microsoft-com:office:office\"";
    _outStream << " " << "xmlns:o=\"urn:schemas-microsoft-com:vml\"";
    _outStream << " " << "xmlns:o=\"http://schemas.openxmlformats.org/officeDocument/2006/sharedTypes\"";
    _outStream << " " << "xmlns:o=\"http://schemas.openxmlformats.org/officeDocument/2006/relationships\"";


    if (m_has_v_ext_attr)
    {
        m_v_ext_attr->toXmlAttr("v:ext", _outStream);
    }



    if (m_has_type_attr)
    {
        m_type_attr->toXmlAttr("type", _outStream);
    }

    _outStream << ">";

    _outStream << "</o:fill>";
}

const fill_element& fill_element::default_instance()
{
    if (!fill_element::default_instance_)
    {
        fill_element::default_instance_ = new fill_element();
    }
    return *fill_element::default_instance_;
}

bool fill_element::has_v_ext_attr() const
{
    return m_has_v_ext_attr;
}

void fill_element::set_v_ext_attr(const ns_v::ST_Ext& _v_ext_attr)
{
    m_has_v_ext_attr = true;
    m_v_ext_attr = new ns_v::ST_Ext(_v_ext_attr);
}

const ns_v::ST_Ext& fill_element::get_v_ext_attr() const
{
    if (m_v_ext_attr)
    {
        return *m_v_ext_attr;
    }
    return ns_v::ST_Ext::default_instance();
}

bool fill_element::has_type_attr() const
{
    return m_has_type_attr;
}

void fill_element::set_type_attr(const ST_FillType& _type_attr)
{
    m_has_type_attr = true;
    m_type_attr = new ST_FillType(_type_attr);
}

const ST_FillType& fill_element::get_type_attr() const
{
    if (m_type_attr)
    {
        return *m_type_attr;
    }
    return ST_FillType::default_instance();
}

fill_element* fill_element::default_instance_ = NULL;

// bwmode_attr
void bwmode_attr::toXml(std::ostream& _outStream) const
{    }


// bwpure_attr
void bwpure_attr::toXml(std::ostream& _outStream) const
{    }


// bwnormal_attr
void bwnormal_attr::toXml(std::ostream& _outStream) const
{    }


// targetscreensize_attr
void targetscreensize_attr::toXml(std::ostream& _outStream) const
{    }


// insetmode_attr
void insetmode_attr::toXml(std::ostream& _outStream) const
{    }


// spt_attr
void spt_attr::toXml(std::ostream& _outStream) const
{    }


// wrapcoords_attr
void wrapcoords_attr::toXml(std::ostream& _outStream) const
{    }


// oned_attr
void oned_attr::toXml(std::ostream& _outStream) const
{    }


// regroupid_attr
void regroupid_attr::toXml(std::ostream& _outStream) const
{    }


// doubleclicknotify_attr
void doubleclicknotify_attr::toXml(std::ostream& _outStream) const
{    }


// connectortype_attr
void connectortype_attr::toXml(std::ostream& _outStream) const
{    }


// button_attr
void button_attr::toXml(std::ostream& _outStream) const
{    }


// userhidden_attr
void userhidden_attr::toXml(std::ostream& _outStream) const
{    }


// forcedash_attr
void forcedash_attr::toXml(std::ostream& _outStream) const
{    }


// oleicon_attr
void oleicon_attr::toXml(std::ostream& _outStream) const
{    }


// ole_attr
void ole_attr::toXml(std::ostream& _outStream) const
{    }


// preferrelative_attr
void preferrelative_attr::toXml(std::ostream& _outStream) const
{    }


// cliptowrap_attr
void cliptowrap_attr::toXml(std::ostream& _outStream) const
{    }


// clip_attr
void clip_attr::toXml(std::ostream& _outStream) const
{    }


// bullet_attr
void bullet_attr::toXml(std::ostream& _outStream) const
{    }


// hr_attr
void hr_attr::toXml(std::ostream& _outStream) const
{    }


// hrstd_attr
void hrstd_attr::toXml(std::ostream& _outStream) const
{    }


// hrnoshade_attr
void hrnoshade_attr::toXml(std::ostream& _outStream) const
{    }


// hrpct_attr
void hrpct_attr::toXml(std::ostream& _outStream) const
{    }


// hralign_attr
void hralign_attr::toXml(std::ostream& _outStream) const
{    }


// allowincell_attr
void allowincell_attr::toXml(std::ostream& _outStream) const
{    }


// allowoverlap_attr
void allowoverlap_attr::toXml(std::ostream& _outStream) const
{    }


// userdrawn_attr
void userdrawn_attr::toXml(std::ostream& _outStream) const
{    }


// bordertopcolor_attr
void bordertopcolor_attr::toXml(std::ostream& _outStream) const
{    }


// borderleftcolor_attr
void borderleftcolor_attr::toXml(std::ostream& _outStream) const
{    }


// borderbottomcolor_attr
void borderbottomcolor_attr::toXml(std::ostream& _outStream) const
{    }


// borderrightcolor_attr
void borderrightcolor_attr::toXml(std::ostream& _outStream) const
{    }


// connecttype_attr
void connecttype_attr::toXml(std::ostream& _outStream) const
{    }


// connectlocs_attr
void connectlocs_attr::toXml(std::ostream& _outStream) const
{    }


// connectangles_attr
void connectangles_attr::toXml(std::ostream& _outStream) const
{    }


// master_attr
void master_attr::toXml(std::ostream& _outStream) const
{    }


// extrusionok_attr
void extrusionok_attr::toXml(std::ostream& _outStream) const
{    }


// href_attr
void href_attr::toXml(std::ostream& _outStream) const
{    }


// althref_attr
void althref_attr::toXml(std::ostream& _outStream) const
{    }


// title_attr
void title_attr::toXml(std::ostream& _outStream) const
{    }


// singleclick_attr
void singleclick_attr::toXml(std::ostream& _outStream) const
{    }


// oleid_attr
void oleid_attr::toXml(std::ostream& _outStream) const
{    }


// detectmouseclick_attr
void detectmouseclick_attr::toXml(std::ostream& _outStream) const
{    }


// movie_attr
void movie_attr::toXml(std::ostream& _outStream) const
{    }


// spid_attr
void spid_attr::toXml(std::ostream& _outStream) const
{    }


// opacity2_attr
void opacity2_attr::toXml(std::ostream& _outStream) const
{    }


// relid_attr
void relid_attr::toXml(std::ostream& _outStream) const
{    }


// dgmlayout_attr
void dgmlayout_attr::toXml(std::ostream& _outStream) const
{    }


// dgmnodekind_attr
void dgmnodekind_attr::toXml(std::ostream& _outStream) const
{    }


// dgmlayoutmru_attr
void dgmlayoutmru_attr::toXml(std::ostream& _outStream) const
{    }


// gfxdata_attr
void gfxdata_attr::toXml(std::ostream& _outStream) const
{    }


// tableproperties_attr
void tableproperties_attr::toXml(std::ostream& _outStream) const
{    }


// tablelimits_attr
void tablelimits_attr::toXml(std::ostream& _outStream) const
{    }

}