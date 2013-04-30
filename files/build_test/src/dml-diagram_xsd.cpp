#include "dml-diagram_xsd.h"
#include <stdlib.h>
#include <sstream>
#include <sstream>
#include <assert.h>
#include "shared-relationshipReference_xsd.h"
#include "dml-main_xsd.h"
#include "shared-commonSimpleTypes_xsd.h"
namespace ns_diagram {
 using namespace std;

    // Element

    // Attribute

    // ST_ClrAppMethod
    ST_ClrAppMethod::ST_ClrAppMethod()
    :m_has_type(false)
    {
    }
    ST_ClrAppMethod::ST_ClrAppMethod(const ST_ClrAppMethod::Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
    }
    ST_ClrAppMethod::~ST_ClrAppMethod()
{
    clear();    }
    bool ST_ClrAppMethod::has_type() const
    {    
    return m_has_type;
    }

    void ST_ClrAppMethod::set_type(const ST_ClrAppMethod::Type& _type)
    {    
    m_has_type = true;
    m_type = _type;
    }

    const ST_ClrAppMethod::Type& ST_ClrAppMethod::get_type() const
    {    
                return m_type;
                }

    std::string ST_ClrAppMethod::toString() const
    {    
    return ST_ClrAppMethod::TypeStrList[m_type];
    }

    void ST_ClrAppMethod::clear()
    {    
    m_has_type = false;
    }

    void ST_ClrAppMethod::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_type)
    {
    _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_ClrAppMethod& ST_ClrAppMethod::default_instance()
    {    
    if (!ST_ClrAppMethod::default_instance_)
    {
        ST_ClrAppMethod::default_instance_ = new ST_ClrAppMethod();
    }
    return *ST_ClrAppMethod::default_instance_;
    }

    const std::string ST_ClrAppMethod::TypeStrList[] =
    {
        "span",
        "cycle",
        "repeat"
    };
ST_ClrAppMethod* ST_ClrAppMethod::default_instance_ = NULL;

    // ST_HueDir
    ST_HueDir::ST_HueDir()
    :m_has_type(false)
    {
    }
    ST_HueDir::ST_HueDir(const ST_HueDir::Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
    }
    ST_HueDir::~ST_HueDir()
{
    clear();    }
    bool ST_HueDir::has_type() const
    {    
    return m_has_type;
    }

    void ST_HueDir::set_type(const ST_HueDir::Type& _type)
    {    
    m_has_type = true;
    m_type = _type;
    }

    const ST_HueDir::Type& ST_HueDir::get_type() const
    {    
                return m_type;
                }

    std::string ST_HueDir::toString() const
    {    
    return ST_HueDir::TypeStrList[m_type];
    }

    void ST_HueDir::clear()
    {    
    m_has_type = false;
    }

    void ST_HueDir::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_type)
    {
    _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_HueDir& ST_HueDir::default_instance()
    {    
    if (!ST_HueDir::default_instance_)
    {
        ST_HueDir::default_instance_ = new ST_HueDir();
    }
    return *ST_HueDir::default_instance_;
    }

    const std::string ST_HueDir::TypeStrList[] =
    {
        "cw",
        "ccw"
    };
ST_HueDir* ST_HueDir::default_instance_ = NULL;

    // ST_PtType
    ST_PtType::ST_PtType()
    :m_has_type(false)
    {
    }
    ST_PtType::ST_PtType(const ST_PtType::Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
    }
    ST_PtType::~ST_PtType()
{
    clear();    }
    bool ST_PtType::has_type() const
    {    
    return m_has_type;
    }

    void ST_PtType::set_type(const ST_PtType::Type& _type)
    {    
    m_has_type = true;
    m_type = _type;
    }

    const ST_PtType::Type& ST_PtType::get_type() const
    {    
                return m_type;
                }

    std::string ST_PtType::toString() const
    {    
    return ST_PtType::TypeStrList[m_type];
    }

    void ST_PtType::clear()
    {    
    m_has_type = false;
    }

    void ST_PtType::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_type)
    {
    _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_PtType& ST_PtType::default_instance()
    {    
    if (!ST_PtType::default_instance_)
    {
        ST_PtType::default_instance_ = new ST_PtType();
    }
    return *ST_PtType::default_instance_;
    }

    const std::string ST_PtType::TypeStrList[] =
    {
        "node",
        "asst",
        "doc",
        "pres",
        "parTrans",
        "sibTrans"
    };
ST_PtType* ST_PtType::default_instance_ = NULL;

    // ST_CxnType
    ST_CxnType::ST_CxnType()
    :m_has_type(false)
    {
    }
    ST_CxnType::ST_CxnType(const ST_CxnType::Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
    }
    ST_CxnType::~ST_CxnType()
{
    clear();    }
    bool ST_CxnType::has_type() const
    {    
    return m_has_type;
    }

    void ST_CxnType::set_type(const ST_CxnType::Type& _type)
    {    
    m_has_type = true;
    m_type = _type;
    }

    const ST_CxnType::Type& ST_CxnType::get_type() const
    {    
                return m_type;
                }

    std::string ST_CxnType::toString() const
    {    
    return ST_CxnType::TypeStrList[m_type];
    }

    void ST_CxnType::clear()
    {    
    m_has_type = false;
    }

    void ST_CxnType::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_type)
    {
    _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_CxnType& ST_CxnType::default_instance()
    {    
    if (!ST_CxnType::default_instance_)
    {
        ST_CxnType::default_instance_ = new ST_CxnType();
    }
    return *ST_CxnType::default_instance_;
    }

    const std::string ST_CxnType::TypeStrList[] =
    {
        "parOf",
        "presOf",
        "presParOf",
        "unknownRelationship"
    };
ST_CxnType* ST_CxnType::default_instance_ = NULL;

    // ST_LayoutShapeType
    ST_LayoutShapeType::ST_LayoutShapeType()
    :m_has_ST_ShapeType(false),
    m_ST_ShapeType(NULL),
    m_has_ST_OutputShapeType(false),
    m_ST_OutputShapeType(NULL)
    {
    }
    ST_LayoutShapeType::~ST_LayoutShapeType()
{
    clear();    }
    bool ST_LayoutShapeType::has_ST_ShapeType() const
    {    
    return m_has_ST_ShapeType;
    }

    ns_a::ST_ShapeType* ST_LayoutShapeType::mutable_ST_ShapeType()
    {    
    clear_ST_OutputShapeType();
    m_has_ST_ShapeType = true;
    if (!m_ST_ShapeType)
    {
        m_ST_ShapeType = new ns_a::ST_ShapeType();
    }
    return m_ST_ShapeType;
    }

    const ns_a::ST_ShapeType& ST_LayoutShapeType::get_ST_ShapeType() const
    {    
    if (m_ST_ShapeType)
    {
        return *m_ST_ShapeType;
    }
    return ns_a::ST_ShapeType::default_instance();
    }

    void ST_LayoutShapeType::clear_ST_ShapeType()
    {    
    m_has_ST_ShapeType = false;
    if (m_ST_ShapeType)
    {
        delete m_ST_ShapeType;
        m_ST_ShapeType = NULL;
    }
    }

    bool ST_LayoutShapeType::has_ST_OutputShapeType() const
    {    
    return m_has_ST_OutputShapeType;
    }

    ST_OutputShapeType* ST_LayoutShapeType::mutable_ST_OutputShapeType()
    {    
    clear_ST_ShapeType();
    m_has_ST_OutputShapeType = true;
    if (!m_ST_OutputShapeType)
    {
        m_ST_OutputShapeType = new ST_OutputShapeType();
    }
    return m_ST_OutputShapeType;
    }

    const ST_OutputShapeType& ST_LayoutShapeType::get_ST_OutputShapeType() const
    {    
    if (m_ST_OutputShapeType)
    {
        return *m_ST_OutputShapeType;
    }
    return ST_OutputShapeType::default_instance();
    }

    void ST_LayoutShapeType::clear_ST_OutputShapeType()
    {    
    m_has_ST_OutputShapeType = false;
    if (m_ST_OutputShapeType)
    {
        delete m_ST_OutputShapeType;
        m_ST_OutputShapeType = NULL;
    }
    }

    std::string ST_LayoutShapeType::toString() const
    {    
    if (m_has_ST_ShapeType)
    {
        return m_ST_ShapeType->toString();
    }
    
    if (m_has_ST_OutputShapeType)
    {
        return m_ST_OutputShapeType->toString();
    }
    
    return string();
    }

    void ST_LayoutShapeType::clear()
    {    clear_ST_ShapeType();
    clear_ST_OutputShapeType();    }

    void ST_LayoutShapeType::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_ST_ShapeType)
    {
        m_ST_ShapeType->toXmlAttr(_attrName, _outStream);
        return;
    }
    
    if (m_has_ST_OutputShapeType)
    {
        m_ST_OutputShapeType->toXmlAttr(_attrName, _outStream);
        return;
    }
    }

    const ST_LayoutShapeType& ST_LayoutShapeType::default_instance()
    {    
    if (!ST_LayoutShapeType::default_instance_)
    {
        ST_LayoutShapeType::default_instance_ = new ST_LayoutShapeType();
    }
    return *ST_LayoutShapeType::default_instance_;
    }

ST_LayoutShapeType* ST_LayoutShapeType::default_instance_ = NULL;

    // ST_Index1
    ST_Index1::ST_Index1()
    :m_has_unsignedInt(false),
    m_unsignedInt(0)
    {
    }
    ST_Index1::ST_Index1(const XSD::unsignedInt_& _unsignedInt)
    :m_has_unsignedInt(true)
    {
    
    set_unsignedInt(_unsignedInt);
    }
    ST_Index1::~ST_Index1()
{
    clear();    }
    bool ST_Index1::has_unsignedInt() const
    {    
    return m_has_unsignedInt;
    }

    void ST_Index1::set_unsignedInt(const XSD::unsignedInt_& _unsignedInt)
    {    assert(1 <= _unsignedInt);
    
    m_has_unsignedInt = true;
    m_unsignedInt = _unsignedInt;
    }

    const XSD::unsignedInt_& ST_Index1::get_unsignedInt() const
    {    
    return m_unsignedInt;
    }

    void ST_Index1::clear()
    {    
    m_has_unsignedInt = false;
    m_unsignedInt = 0;;
    }

    void ST_Index1::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_unsignedInt)
    {
        _outStream << " " << _attrName << "=\"" << m_unsignedInt << "\"";;
    }
    }

    const ST_Index1& ST_Index1::default_instance()
    {    
    if (!ST_Index1::default_instance_)
    {
        ST_Index1::default_instance_ = new ST_Index1();
    }
    return *ST_Index1::default_instance_;
    }

    std::string ST_Index1::toString() const
    {    
    std::stringstream strStream;
    strStream << get_unsignedInt();
    return strStream.str();
    }

ST_Index1* ST_Index1::default_instance_ = NULL;

    // ST_ParameterVal
    ST_ParameterVal::ST_ParameterVal()
    :m_has_ST_DiagramHorizontalAlignment(false),
    m_ST_DiagramHorizontalAlignment(NULL),
    m_has_ST_VerticalAlignment(false),
    m_ST_VerticalAlignment(NULL),
    m_has_ST_ChildDirection(false),
    m_ST_ChildDirection(NULL),
    m_has_ST_ChildAlignment(false),
    m_ST_ChildAlignment(NULL),
    m_has_ST_SecondaryChildAlignment(false),
    m_ST_SecondaryChildAlignment(NULL),
    m_has_ST_LinearDirection(false),
    m_ST_LinearDirection(NULL),
    m_has_ST_SecondaryLinearDirection(false),
    m_ST_SecondaryLinearDirection(NULL),
    m_has_ST_StartingElement(false),
    m_ST_StartingElement(NULL),
    m_has_ST_BendPoint(false),
    m_ST_BendPoint(NULL),
    m_has_ST_ConnectorRouting(false),
    m_ST_ConnectorRouting(NULL),
    m_has_ST_ArrowheadStyle(false),
    m_ST_ArrowheadStyle(NULL),
    m_has_ST_ConnectorDimension(false),
    m_ST_ConnectorDimension(NULL),
    m_has_ST_RotationPath(false),
    m_ST_RotationPath(NULL),
    m_has_ST_CenterShapeMapping(false),
    m_ST_CenterShapeMapping(NULL),
    m_has_ST_NodeHorizontalAlignment(false),
    m_ST_NodeHorizontalAlignment(NULL),
    m_has_ST_NodeVerticalAlignment(false),
    m_ST_NodeVerticalAlignment(NULL),
    m_has_ST_FallbackDimension(false),
    m_ST_FallbackDimension(NULL),
    m_has_ST_TextDirection(false),
    m_ST_TextDirection(NULL),
    m_has_ST_PyramidAccentPosition(false),
    m_ST_PyramidAccentPosition(NULL),
    m_has_ST_PyramidAccentTextMargin(false),
    m_ST_PyramidAccentTextMargin(NULL),
    m_has_ST_TextBlockDirection(false),
    m_ST_TextBlockDirection(NULL),
    m_has_ST_TextAnchorHorizontal(false),
    m_ST_TextAnchorHorizontal(NULL),
    m_has_ST_TextAnchorVertical(false),
    m_ST_TextAnchorVertical(NULL),
    m_has_ST_DiagramTextAlignment(false),
    m_ST_DiagramTextAlignment(NULL),
    m_has_ST_AutoTextRotation(false),
    m_ST_AutoTextRotation(NULL),
    m_has_ST_GrowDirection(false),
    m_ST_GrowDirection(NULL),
    m_has_ST_FlowDirection(false),
    m_ST_FlowDirection(NULL),
    m_has_ST_ContinueDirection(false),
    m_ST_ContinueDirection(NULL),
    m_has_ST_Breakpoint(false),
    m_ST_Breakpoint(NULL),
    m_has_ST_Offset(false),
    m_ST_Offset(NULL),
    m_has_ST_HierarchyAlignment(false),
    m_ST_HierarchyAlignment(NULL),
    m_has_int(false),
    m_int(0),
    m_has_double(false),
    m_double(0),
    m_has_boolean(false),
    m_boolean(false),
    m_has_string(false),
    m_string(""),
    m_has_ST_ConnectorPoint(false),
    m_ST_ConnectorPoint(NULL)
    {
    }
    ST_ParameterVal::~ST_ParameterVal()
{
    clear();    }
    bool ST_ParameterVal::has_ST_DiagramHorizontalAlignment() const
    {    
    return m_has_ST_DiagramHorizontalAlignment;
    }

    ST_DiagramHorizontalAlignment* ST_ParameterVal::mutable_ST_DiagramHorizontalAlignment()
    {    
    clear_ST_VerticalAlignment();
    clear_ST_ChildDirection();
    clear_ST_ChildAlignment();
    clear_ST_SecondaryChildAlignment();
    clear_ST_LinearDirection();
    clear_ST_SecondaryLinearDirection();
    clear_ST_StartingElement();
    clear_ST_BendPoint();
    clear_ST_ConnectorRouting();
    clear_ST_ArrowheadStyle();
    clear_ST_ConnectorDimension();
    clear_ST_RotationPath();
    clear_ST_CenterShapeMapping();
    clear_ST_NodeHorizontalAlignment();
    clear_ST_NodeVerticalAlignment();
    clear_ST_FallbackDimension();
    clear_ST_TextDirection();
    clear_ST_PyramidAccentPosition();
    clear_ST_PyramidAccentTextMargin();
    clear_ST_TextBlockDirection();
    clear_ST_TextAnchorHorizontal();
    clear_ST_TextAnchorVertical();
    clear_ST_DiagramTextAlignment();
    clear_ST_AutoTextRotation();
    clear_ST_GrowDirection();
    clear_ST_FlowDirection();
    clear_ST_ContinueDirection();
    clear_ST_Breakpoint();
    clear_ST_Offset();
    clear_ST_HierarchyAlignment();
    clear_int();
    clear_double();
    clear_boolean();
    clear_string();
    clear_ST_ConnectorPoint();
    m_has_ST_DiagramHorizontalAlignment = true;
    if (!m_ST_DiagramHorizontalAlignment)
    {
        m_ST_DiagramHorizontalAlignment = new ST_DiagramHorizontalAlignment();
    }
    return m_ST_DiagramHorizontalAlignment;
    }

    const ST_DiagramHorizontalAlignment& ST_ParameterVal::get_ST_DiagramHorizontalAlignment() const
    {    
    if (m_ST_DiagramHorizontalAlignment)
    {
        return *m_ST_DiagramHorizontalAlignment;
    }
    return ST_DiagramHorizontalAlignment::default_instance();
    }

    void ST_ParameterVal::clear_ST_DiagramHorizontalAlignment()
    {    
    m_has_ST_DiagramHorizontalAlignment = false;
    if (m_ST_DiagramHorizontalAlignment)
    {
        delete m_ST_DiagramHorizontalAlignment;
        m_ST_DiagramHorizontalAlignment = NULL;
    }
    }

    bool ST_ParameterVal::has_ST_VerticalAlignment() const
    {    
    return m_has_ST_VerticalAlignment;
    }

    ST_VerticalAlignment* ST_ParameterVal::mutable_ST_VerticalAlignment()
    {    
    clear_ST_DiagramHorizontalAlignment();
    clear_ST_ChildDirection();
    clear_ST_ChildAlignment();
    clear_ST_SecondaryChildAlignment();
    clear_ST_LinearDirection();
    clear_ST_SecondaryLinearDirection();
    clear_ST_StartingElement();
    clear_ST_BendPoint();
    clear_ST_ConnectorRouting();
    clear_ST_ArrowheadStyle();
    clear_ST_ConnectorDimension();
    clear_ST_RotationPath();
    clear_ST_CenterShapeMapping();
    clear_ST_NodeHorizontalAlignment();
    clear_ST_NodeVerticalAlignment();
    clear_ST_FallbackDimension();
    clear_ST_TextDirection();
    clear_ST_PyramidAccentPosition();
    clear_ST_PyramidAccentTextMargin();
    clear_ST_TextBlockDirection();
    clear_ST_TextAnchorHorizontal();
    clear_ST_TextAnchorVertical();
    clear_ST_DiagramTextAlignment();
    clear_ST_AutoTextRotation();
    clear_ST_GrowDirection();
    clear_ST_FlowDirection();
    clear_ST_ContinueDirection();
    clear_ST_Breakpoint();
    clear_ST_Offset();
    clear_ST_HierarchyAlignment();
    clear_int();
    clear_double();
    clear_boolean();
    clear_string();
    clear_ST_ConnectorPoint();
    m_has_ST_VerticalAlignment = true;
    if (!m_ST_VerticalAlignment)
    {
        m_ST_VerticalAlignment = new ST_VerticalAlignment();
    }
    return m_ST_VerticalAlignment;
    }

    const ST_VerticalAlignment& ST_ParameterVal::get_ST_VerticalAlignment() const
    {    
    if (m_ST_VerticalAlignment)
    {
        return *m_ST_VerticalAlignment;
    }
    return ST_VerticalAlignment::default_instance();
    }

    void ST_ParameterVal::clear_ST_VerticalAlignment()
    {    
    m_has_ST_VerticalAlignment = false;
    if (m_ST_VerticalAlignment)
    {
        delete m_ST_VerticalAlignment;
        m_ST_VerticalAlignment = NULL;
    }
    }

    bool ST_ParameterVal::has_ST_ChildDirection() const
    {    
    return m_has_ST_ChildDirection;
    }

    ST_ChildDirection* ST_ParameterVal::mutable_ST_ChildDirection()
    {    
    clear_ST_DiagramHorizontalAlignment();
    clear_ST_VerticalAlignment();
    clear_ST_ChildAlignment();
    clear_ST_SecondaryChildAlignment();
    clear_ST_LinearDirection();
    clear_ST_SecondaryLinearDirection();
    clear_ST_StartingElement();
    clear_ST_BendPoint();
    clear_ST_ConnectorRouting();
    clear_ST_ArrowheadStyle();
    clear_ST_ConnectorDimension();
    clear_ST_RotationPath();
    clear_ST_CenterShapeMapping();
    clear_ST_NodeHorizontalAlignment();
    clear_ST_NodeVerticalAlignment();
    clear_ST_FallbackDimension();
    clear_ST_TextDirection();
    clear_ST_PyramidAccentPosition();
    clear_ST_PyramidAccentTextMargin();
    clear_ST_TextBlockDirection();
    clear_ST_TextAnchorHorizontal();
    clear_ST_TextAnchorVertical();
    clear_ST_DiagramTextAlignment();
    clear_ST_AutoTextRotation();
    clear_ST_GrowDirection();
    clear_ST_FlowDirection();
    clear_ST_ContinueDirection();
    clear_ST_Breakpoint();
    clear_ST_Offset();
    clear_ST_HierarchyAlignment();
    clear_int();
    clear_double();
    clear_boolean();
    clear_string();
    clear_ST_ConnectorPoint();
    m_has_ST_ChildDirection = true;
    if (!m_ST_ChildDirection)
    {
        m_ST_ChildDirection = new ST_ChildDirection();
    }
    return m_ST_ChildDirection;
    }

    const ST_ChildDirection& ST_ParameterVal::get_ST_ChildDirection() const
    {    
    if (m_ST_ChildDirection)
    {
        return *m_ST_ChildDirection;
    }
    return ST_ChildDirection::default_instance();
    }

    void ST_ParameterVal::clear_ST_ChildDirection()
    {    
    m_has_ST_ChildDirection = false;
    if (m_ST_ChildDirection)
    {
        delete m_ST_ChildDirection;
        m_ST_ChildDirection = NULL;
    }
    }

    bool ST_ParameterVal::has_ST_ChildAlignment() const
    {    
    return m_has_ST_ChildAlignment;
    }

    ST_ChildAlignment* ST_ParameterVal::mutable_ST_ChildAlignment()
    {    
    clear_ST_DiagramHorizontalAlignment();
    clear_ST_VerticalAlignment();
    clear_ST_ChildDirection();
    clear_ST_SecondaryChildAlignment();
    clear_ST_LinearDirection();
    clear_ST_SecondaryLinearDirection();
    clear_ST_StartingElement();
    clear_ST_BendPoint();
    clear_ST_ConnectorRouting();
    clear_ST_ArrowheadStyle();
    clear_ST_ConnectorDimension();
    clear_ST_RotationPath();
    clear_ST_CenterShapeMapping();
    clear_ST_NodeHorizontalAlignment();
    clear_ST_NodeVerticalAlignment();
    clear_ST_FallbackDimension();
    clear_ST_TextDirection();
    clear_ST_PyramidAccentPosition();
    clear_ST_PyramidAccentTextMargin();
    clear_ST_TextBlockDirection();
    clear_ST_TextAnchorHorizontal();
    clear_ST_TextAnchorVertical();
    clear_ST_DiagramTextAlignment();
    clear_ST_AutoTextRotation();
    clear_ST_GrowDirection();
    clear_ST_FlowDirection();
    clear_ST_ContinueDirection();
    clear_ST_Breakpoint();
    clear_ST_Offset();
    clear_ST_HierarchyAlignment();
    clear_int();
    clear_double();
    clear_boolean();
    clear_string();
    clear_ST_ConnectorPoint();
    m_has_ST_ChildAlignment = true;
    if (!m_ST_ChildAlignment)
    {
        m_ST_ChildAlignment = new ST_ChildAlignment();
    }
    return m_ST_ChildAlignment;
    }

    const ST_ChildAlignment& ST_ParameterVal::get_ST_ChildAlignment() const
    {    
    if (m_ST_ChildAlignment)
    {
        return *m_ST_ChildAlignment;
    }
    return ST_ChildAlignment::default_instance();
    }

    void ST_ParameterVal::clear_ST_ChildAlignment()
    {    
    m_has_ST_ChildAlignment = false;
    if (m_ST_ChildAlignment)
    {
        delete m_ST_ChildAlignment;
        m_ST_ChildAlignment = NULL;
    }
    }

    bool ST_ParameterVal::has_ST_SecondaryChildAlignment() const
    {    
    return m_has_ST_SecondaryChildAlignment;
    }

    ST_SecondaryChildAlignment* ST_ParameterVal::mutable_ST_SecondaryChildAlignment()
    {    
    clear_ST_DiagramHorizontalAlignment();
    clear_ST_VerticalAlignment();
    clear_ST_ChildDirection();
    clear_ST_ChildAlignment();
    clear_ST_LinearDirection();
    clear_ST_SecondaryLinearDirection();
    clear_ST_StartingElement();
    clear_ST_BendPoint();
    clear_ST_ConnectorRouting();
    clear_ST_ArrowheadStyle();
    clear_ST_ConnectorDimension();
    clear_ST_RotationPath();
    clear_ST_CenterShapeMapping();
    clear_ST_NodeHorizontalAlignment();
    clear_ST_NodeVerticalAlignment();
    clear_ST_FallbackDimension();
    clear_ST_TextDirection();
    clear_ST_PyramidAccentPosition();
    clear_ST_PyramidAccentTextMargin();
    clear_ST_TextBlockDirection();
    clear_ST_TextAnchorHorizontal();
    clear_ST_TextAnchorVertical();
    clear_ST_DiagramTextAlignment();
    clear_ST_AutoTextRotation();
    clear_ST_GrowDirection();
    clear_ST_FlowDirection();
    clear_ST_ContinueDirection();
    clear_ST_Breakpoint();
    clear_ST_Offset();
    clear_ST_HierarchyAlignment();
    clear_int();
    clear_double();
    clear_boolean();
    clear_string();
    clear_ST_ConnectorPoint();
    m_has_ST_SecondaryChildAlignment = true;
    if (!m_ST_SecondaryChildAlignment)
    {
        m_ST_SecondaryChildAlignment = new ST_SecondaryChildAlignment();
    }
    return m_ST_SecondaryChildAlignment;
    }

    const ST_SecondaryChildAlignment& ST_ParameterVal::get_ST_SecondaryChildAlignment() const
    {    
    if (m_ST_SecondaryChildAlignment)
    {
        return *m_ST_SecondaryChildAlignment;
    }
    return ST_SecondaryChildAlignment::default_instance();
    }

    void ST_ParameterVal::clear_ST_SecondaryChildAlignment()
    {    
    m_has_ST_SecondaryChildAlignment = false;
    if (m_ST_SecondaryChildAlignment)
    {
        delete m_ST_SecondaryChildAlignment;
        m_ST_SecondaryChildAlignment = NULL;
    }
    }

    bool ST_ParameterVal::has_ST_LinearDirection() const
    {    
    return m_has_ST_LinearDirection;
    }

    ST_LinearDirection* ST_ParameterVal::mutable_ST_LinearDirection()
    {    
    clear_ST_DiagramHorizontalAlignment();
    clear_ST_VerticalAlignment();
    clear_ST_ChildDirection();
    clear_ST_ChildAlignment();
    clear_ST_SecondaryChildAlignment();
    clear_ST_SecondaryLinearDirection();
    clear_ST_StartingElement();
    clear_ST_BendPoint();
    clear_ST_ConnectorRouting();
    clear_ST_ArrowheadStyle();
    clear_ST_ConnectorDimension();
    clear_ST_RotationPath();
    clear_ST_CenterShapeMapping();
    clear_ST_NodeHorizontalAlignment();
    clear_ST_NodeVerticalAlignment();
    clear_ST_FallbackDimension();
    clear_ST_TextDirection();
    clear_ST_PyramidAccentPosition();
    clear_ST_PyramidAccentTextMargin();
    clear_ST_TextBlockDirection();
    clear_ST_TextAnchorHorizontal();
    clear_ST_TextAnchorVertical();
    clear_ST_DiagramTextAlignment();
    clear_ST_AutoTextRotation();
    clear_ST_GrowDirection();
    clear_ST_FlowDirection();
    clear_ST_ContinueDirection();
    clear_ST_Breakpoint();
    clear_ST_Offset();
    clear_ST_HierarchyAlignment();
    clear_int();
    clear_double();
    clear_boolean();
    clear_string();
    clear_ST_ConnectorPoint();
    m_has_ST_LinearDirection = true;
    if (!m_ST_LinearDirection)
    {
        m_ST_LinearDirection = new ST_LinearDirection();
    }
    return m_ST_LinearDirection;
    }

    const ST_LinearDirection& ST_ParameterVal::get_ST_LinearDirection() const
    {    
    if (m_ST_LinearDirection)
    {
        return *m_ST_LinearDirection;
    }
    return ST_LinearDirection::default_instance();
    }

    void ST_ParameterVal::clear_ST_LinearDirection()
    {    
    m_has_ST_LinearDirection = false;
    if (m_ST_LinearDirection)
    {
        delete m_ST_LinearDirection;
        m_ST_LinearDirection = NULL;
    }
    }

    bool ST_ParameterVal::has_ST_SecondaryLinearDirection() const
    {    
    return m_has_ST_SecondaryLinearDirection;
    }

    ST_SecondaryLinearDirection* ST_ParameterVal::mutable_ST_SecondaryLinearDirection()
    {    
    clear_ST_DiagramHorizontalAlignment();
    clear_ST_VerticalAlignment();
    clear_ST_ChildDirection();
    clear_ST_ChildAlignment();
    clear_ST_SecondaryChildAlignment();
    clear_ST_LinearDirection();
    clear_ST_StartingElement();
    clear_ST_BendPoint();
    clear_ST_ConnectorRouting();
    clear_ST_ArrowheadStyle();
    clear_ST_ConnectorDimension();
    clear_ST_RotationPath();
    clear_ST_CenterShapeMapping();
    clear_ST_NodeHorizontalAlignment();
    clear_ST_NodeVerticalAlignment();
    clear_ST_FallbackDimension();
    clear_ST_TextDirection();
    clear_ST_PyramidAccentPosition();
    clear_ST_PyramidAccentTextMargin();
    clear_ST_TextBlockDirection();
    clear_ST_TextAnchorHorizontal();
    clear_ST_TextAnchorVertical();
    clear_ST_DiagramTextAlignment();
    clear_ST_AutoTextRotation();
    clear_ST_GrowDirection();
    clear_ST_FlowDirection();
    clear_ST_ContinueDirection();
    clear_ST_Breakpoint();
    clear_ST_Offset();
    clear_ST_HierarchyAlignment();
    clear_int();
    clear_double();
    clear_boolean();
    clear_string();
    clear_ST_ConnectorPoint();
    m_has_ST_SecondaryLinearDirection = true;
    if (!m_ST_SecondaryLinearDirection)
    {
        m_ST_SecondaryLinearDirection = new ST_SecondaryLinearDirection();
    }
    return m_ST_SecondaryLinearDirection;
    }

    const ST_SecondaryLinearDirection& ST_ParameterVal::get_ST_SecondaryLinearDirection() const
    {    
    if (m_ST_SecondaryLinearDirection)
    {
        return *m_ST_SecondaryLinearDirection;
    }
    return ST_SecondaryLinearDirection::default_instance();
    }

    void ST_ParameterVal::clear_ST_SecondaryLinearDirection()
    {    
    m_has_ST_SecondaryLinearDirection = false;
    if (m_ST_SecondaryLinearDirection)
    {
        delete m_ST_SecondaryLinearDirection;
        m_ST_SecondaryLinearDirection = NULL;
    }
    }

    bool ST_ParameterVal::has_ST_StartingElement() const
    {    
    return m_has_ST_StartingElement;
    }

    ST_StartingElement* ST_ParameterVal::mutable_ST_StartingElement()
    {    
    clear_ST_DiagramHorizontalAlignment();
    clear_ST_VerticalAlignment();
    clear_ST_ChildDirection();
    clear_ST_ChildAlignment();
    clear_ST_SecondaryChildAlignment();
    clear_ST_LinearDirection();
    clear_ST_SecondaryLinearDirection();
    clear_ST_BendPoint();
    clear_ST_ConnectorRouting();
    clear_ST_ArrowheadStyle();
    clear_ST_ConnectorDimension();
    clear_ST_RotationPath();
    clear_ST_CenterShapeMapping();
    clear_ST_NodeHorizontalAlignment();
    clear_ST_NodeVerticalAlignment();
    clear_ST_FallbackDimension();
    clear_ST_TextDirection();
    clear_ST_PyramidAccentPosition();
    clear_ST_PyramidAccentTextMargin();
    clear_ST_TextBlockDirection();
    clear_ST_TextAnchorHorizontal();
    clear_ST_TextAnchorVertical();
    clear_ST_DiagramTextAlignment();
    clear_ST_AutoTextRotation();
    clear_ST_GrowDirection();
    clear_ST_FlowDirection();
    clear_ST_ContinueDirection();
    clear_ST_Breakpoint();
    clear_ST_Offset();
    clear_ST_HierarchyAlignment();
    clear_int();
    clear_double();
    clear_boolean();
    clear_string();
    clear_ST_ConnectorPoint();
    m_has_ST_StartingElement = true;
    if (!m_ST_StartingElement)
    {
        m_ST_StartingElement = new ST_StartingElement();
    }
    return m_ST_StartingElement;
    }

    const ST_StartingElement& ST_ParameterVal::get_ST_StartingElement() const
    {    
    if (m_ST_StartingElement)
    {
        return *m_ST_StartingElement;
    }
    return ST_StartingElement::default_instance();
    }

    void ST_ParameterVal::clear_ST_StartingElement()
    {    
    m_has_ST_StartingElement = false;
    if (m_ST_StartingElement)
    {
        delete m_ST_StartingElement;
        m_ST_StartingElement = NULL;
    }
    }

    bool ST_ParameterVal::has_ST_BendPoint() const
    {    
    return m_has_ST_BendPoint;
    }

    ST_BendPoint* ST_ParameterVal::mutable_ST_BendPoint()
    {    
    clear_ST_DiagramHorizontalAlignment();
    clear_ST_VerticalAlignment();
    clear_ST_ChildDirection();
    clear_ST_ChildAlignment();
    clear_ST_SecondaryChildAlignment();
    clear_ST_LinearDirection();
    clear_ST_SecondaryLinearDirection();
    clear_ST_StartingElement();
    clear_ST_ConnectorRouting();
    clear_ST_ArrowheadStyle();
    clear_ST_ConnectorDimension();
    clear_ST_RotationPath();
    clear_ST_CenterShapeMapping();
    clear_ST_NodeHorizontalAlignment();
    clear_ST_NodeVerticalAlignment();
    clear_ST_FallbackDimension();
    clear_ST_TextDirection();
    clear_ST_PyramidAccentPosition();
    clear_ST_PyramidAccentTextMargin();
    clear_ST_TextBlockDirection();
    clear_ST_TextAnchorHorizontal();
    clear_ST_TextAnchorVertical();
    clear_ST_DiagramTextAlignment();
    clear_ST_AutoTextRotation();
    clear_ST_GrowDirection();
    clear_ST_FlowDirection();
    clear_ST_ContinueDirection();
    clear_ST_Breakpoint();
    clear_ST_Offset();
    clear_ST_HierarchyAlignment();
    clear_int();
    clear_double();
    clear_boolean();
    clear_string();
    clear_ST_ConnectorPoint();
    m_has_ST_BendPoint = true;
    if (!m_ST_BendPoint)
    {
        m_ST_BendPoint = new ST_BendPoint();
    }
    return m_ST_BendPoint;
    }

    const ST_BendPoint& ST_ParameterVal::get_ST_BendPoint() const
    {    
    if (m_ST_BendPoint)
    {
        return *m_ST_BendPoint;
    }
    return ST_BendPoint::default_instance();
    }

    void ST_ParameterVal::clear_ST_BendPoint()
    {    
    m_has_ST_BendPoint = false;
    if (m_ST_BendPoint)
    {
        delete m_ST_BendPoint;
        m_ST_BendPoint = NULL;
    }
    }

    bool ST_ParameterVal::has_ST_ConnectorRouting() const
    {    
    return m_has_ST_ConnectorRouting;
    }

    ST_ConnectorRouting* ST_ParameterVal::mutable_ST_ConnectorRouting()
    {    
    clear_ST_DiagramHorizontalAlignment();
    clear_ST_VerticalAlignment();
    clear_ST_ChildDirection();
    clear_ST_ChildAlignment();
    clear_ST_SecondaryChildAlignment();
    clear_ST_LinearDirection();
    clear_ST_SecondaryLinearDirection();
    clear_ST_StartingElement();
    clear_ST_BendPoint();
    clear_ST_ArrowheadStyle();
    clear_ST_ConnectorDimension();
    clear_ST_RotationPath();
    clear_ST_CenterShapeMapping();
    clear_ST_NodeHorizontalAlignment();
    clear_ST_NodeVerticalAlignment();
    clear_ST_FallbackDimension();
    clear_ST_TextDirection();
    clear_ST_PyramidAccentPosition();
    clear_ST_PyramidAccentTextMargin();
    clear_ST_TextBlockDirection();
    clear_ST_TextAnchorHorizontal();
    clear_ST_TextAnchorVertical();
    clear_ST_DiagramTextAlignment();
    clear_ST_AutoTextRotation();
    clear_ST_GrowDirection();
    clear_ST_FlowDirection();
    clear_ST_ContinueDirection();
    clear_ST_Breakpoint();
    clear_ST_Offset();
    clear_ST_HierarchyAlignment();
    clear_int();
    clear_double();
    clear_boolean();
    clear_string();
    clear_ST_ConnectorPoint();
    m_has_ST_ConnectorRouting = true;
    if (!m_ST_ConnectorRouting)
    {
        m_ST_ConnectorRouting = new ST_ConnectorRouting();
    }
    return m_ST_ConnectorRouting;
    }

    const ST_ConnectorRouting& ST_ParameterVal::get_ST_ConnectorRouting() const
    {    
    if (m_ST_ConnectorRouting)
    {
        return *m_ST_ConnectorRouting;
    }
    return ST_ConnectorRouting::default_instance();
    }

    void ST_ParameterVal::clear_ST_ConnectorRouting()
    {    
    m_has_ST_ConnectorRouting = false;
    if (m_ST_ConnectorRouting)
    {
        delete m_ST_ConnectorRouting;
        m_ST_ConnectorRouting = NULL;
    }
    }

    bool ST_ParameterVal::has_ST_ArrowheadStyle() const
    {    
    return m_has_ST_ArrowheadStyle;
    }

    ST_ArrowheadStyle* ST_ParameterVal::mutable_ST_ArrowheadStyle()
    {    
    clear_ST_DiagramHorizontalAlignment();
    clear_ST_VerticalAlignment();
    clear_ST_ChildDirection();
    clear_ST_ChildAlignment();
    clear_ST_SecondaryChildAlignment();
    clear_ST_LinearDirection();
    clear_ST_SecondaryLinearDirection();
    clear_ST_StartingElement();
    clear_ST_BendPoint();
    clear_ST_ConnectorRouting();
    clear_ST_ConnectorDimension();
    clear_ST_RotationPath();
    clear_ST_CenterShapeMapping();
    clear_ST_NodeHorizontalAlignment();
    clear_ST_NodeVerticalAlignment();
    clear_ST_FallbackDimension();
    clear_ST_TextDirection();
    clear_ST_PyramidAccentPosition();
    clear_ST_PyramidAccentTextMargin();
    clear_ST_TextBlockDirection();
    clear_ST_TextAnchorHorizontal();
    clear_ST_TextAnchorVertical();
    clear_ST_DiagramTextAlignment();
    clear_ST_AutoTextRotation();
    clear_ST_GrowDirection();
    clear_ST_FlowDirection();
    clear_ST_ContinueDirection();
    clear_ST_Breakpoint();
    clear_ST_Offset();
    clear_ST_HierarchyAlignment();
    clear_int();
    clear_double();
    clear_boolean();
    clear_string();
    clear_ST_ConnectorPoint();
    m_has_ST_ArrowheadStyle = true;
    if (!m_ST_ArrowheadStyle)
    {
        m_ST_ArrowheadStyle = new ST_ArrowheadStyle();
    }
    return m_ST_ArrowheadStyle;
    }

    const ST_ArrowheadStyle& ST_ParameterVal::get_ST_ArrowheadStyle() const
    {    
    if (m_ST_ArrowheadStyle)
    {
        return *m_ST_ArrowheadStyle;
    }
    return ST_ArrowheadStyle::default_instance();
    }

    void ST_ParameterVal::clear_ST_ArrowheadStyle()
    {    
    m_has_ST_ArrowheadStyle = false;
    if (m_ST_ArrowheadStyle)
    {
        delete m_ST_ArrowheadStyle;
        m_ST_ArrowheadStyle = NULL;
    }
    }

    bool ST_ParameterVal::has_ST_ConnectorDimension() const
    {    
    return m_has_ST_ConnectorDimension;
    }

    ST_ConnectorDimension* ST_ParameterVal::mutable_ST_ConnectorDimension()
    {    
    clear_ST_DiagramHorizontalAlignment();
    clear_ST_VerticalAlignment();
    clear_ST_ChildDirection();
    clear_ST_ChildAlignment();
    clear_ST_SecondaryChildAlignment();
    clear_ST_LinearDirection();
    clear_ST_SecondaryLinearDirection();
    clear_ST_StartingElement();
    clear_ST_BendPoint();
    clear_ST_ConnectorRouting();
    clear_ST_ArrowheadStyle();
    clear_ST_RotationPath();
    clear_ST_CenterShapeMapping();
    clear_ST_NodeHorizontalAlignment();
    clear_ST_NodeVerticalAlignment();
    clear_ST_FallbackDimension();
    clear_ST_TextDirection();
    clear_ST_PyramidAccentPosition();
    clear_ST_PyramidAccentTextMargin();
    clear_ST_TextBlockDirection();
    clear_ST_TextAnchorHorizontal();
    clear_ST_TextAnchorVertical();
    clear_ST_DiagramTextAlignment();
    clear_ST_AutoTextRotation();
    clear_ST_GrowDirection();
    clear_ST_FlowDirection();
    clear_ST_ContinueDirection();
    clear_ST_Breakpoint();
    clear_ST_Offset();
    clear_ST_HierarchyAlignment();
    clear_int();
    clear_double();
    clear_boolean();
    clear_string();
    clear_ST_ConnectorPoint();
    m_has_ST_ConnectorDimension = true;
    if (!m_ST_ConnectorDimension)
    {
        m_ST_ConnectorDimension = new ST_ConnectorDimension();
    }
    return m_ST_ConnectorDimension;
    }

    const ST_ConnectorDimension& ST_ParameterVal::get_ST_ConnectorDimension() const
    {    
    if (m_ST_ConnectorDimension)
    {
        return *m_ST_ConnectorDimension;
    }
    return ST_ConnectorDimension::default_instance();
    }

    void ST_ParameterVal::clear_ST_ConnectorDimension()
    {    
    m_has_ST_ConnectorDimension = false;
    if (m_ST_ConnectorDimension)
    {
        delete m_ST_ConnectorDimension;
        m_ST_ConnectorDimension = NULL;
    }
    }

    bool ST_ParameterVal::has_ST_RotationPath() const
    {    
    return m_has_ST_RotationPath;
    }

    ST_RotationPath* ST_ParameterVal::mutable_ST_RotationPath()
    {    
    clear_ST_DiagramHorizontalAlignment();
    clear_ST_VerticalAlignment();
    clear_ST_ChildDirection();
    clear_ST_ChildAlignment();
    clear_ST_SecondaryChildAlignment();
    clear_ST_LinearDirection();
    clear_ST_SecondaryLinearDirection();
    clear_ST_StartingElement();
    clear_ST_BendPoint();
    clear_ST_ConnectorRouting();
    clear_ST_ArrowheadStyle();
    clear_ST_ConnectorDimension();
    clear_ST_CenterShapeMapping();
    clear_ST_NodeHorizontalAlignment();
    clear_ST_NodeVerticalAlignment();
    clear_ST_FallbackDimension();
    clear_ST_TextDirection();
    clear_ST_PyramidAccentPosition();
    clear_ST_PyramidAccentTextMargin();
    clear_ST_TextBlockDirection();
    clear_ST_TextAnchorHorizontal();
    clear_ST_TextAnchorVertical();
    clear_ST_DiagramTextAlignment();
    clear_ST_AutoTextRotation();
    clear_ST_GrowDirection();
    clear_ST_FlowDirection();
    clear_ST_ContinueDirection();
    clear_ST_Breakpoint();
    clear_ST_Offset();
    clear_ST_HierarchyAlignment();
    clear_int();
    clear_double();
    clear_boolean();
    clear_string();
    clear_ST_ConnectorPoint();
    m_has_ST_RotationPath = true;
    if (!m_ST_RotationPath)
    {
        m_ST_RotationPath = new ST_RotationPath();
    }
    return m_ST_RotationPath;
    }

    const ST_RotationPath& ST_ParameterVal::get_ST_RotationPath() const
    {    
    if (m_ST_RotationPath)
    {
        return *m_ST_RotationPath;
    }
    return ST_RotationPath::default_instance();
    }

    void ST_ParameterVal::clear_ST_RotationPath()
    {    
    m_has_ST_RotationPath = false;
    if (m_ST_RotationPath)
    {
        delete m_ST_RotationPath;
        m_ST_RotationPath = NULL;
    }
    }

    bool ST_ParameterVal::has_ST_CenterShapeMapping() const
    {    
    return m_has_ST_CenterShapeMapping;
    }

    ST_CenterShapeMapping* ST_ParameterVal::mutable_ST_CenterShapeMapping()
    {    
    clear_ST_DiagramHorizontalAlignment();
    clear_ST_VerticalAlignment();
    clear_ST_ChildDirection();
    clear_ST_ChildAlignment();
    clear_ST_SecondaryChildAlignment();
    clear_ST_LinearDirection();
    clear_ST_SecondaryLinearDirection();
    clear_ST_StartingElement();
    clear_ST_BendPoint();
    clear_ST_ConnectorRouting();
    clear_ST_ArrowheadStyle();
    clear_ST_ConnectorDimension();
    clear_ST_RotationPath();
    clear_ST_NodeHorizontalAlignment();
    clear_ST_NodeVerticalAlignment();
    clear_ST_FallbackDimension();
    clear_ST_TextDirection();
    clear_ST_PyramidAccentPosition();
    clear_ST_PyramidAccentTextMargin();
    clear_ST_TextBlockDirection();
    clear_ST_TextAnchorHorizontal();
    clear_ST_TextAnchorVertical();
    clear_ST_DiagramTextAlignment();
    clear_ST_AutoTextRotation();
    clear_ST_GrowDirection();
    clear_ST_FlowDirection();
    clear_ST_ContinueDirection();
    clear_ST_Breakpoint();
    clear_ST_Offset();
    clear_ST_HierarchyAlignment();
    clear_int();
    clear_double();
    clear_boolean();
    clear_string();
    clear_ST_ConnectorPoint();
    m_has_ST_CenterShapeMapping = true;
    if (!m_ST_CenterShapeMapping)
    {
        m_ST_CenterShapeMapping = new ST_CenterShapeMapping();
    }
    return m_ST_CenterShapeMapping;
    }

    const ST_CenterShapeMapping& ST_ParameterVal::get_ST_CenterShapeMapping() const
    {    
    if (m_ST_CenterShapeMapping)
    {
        return *m_ST_CenterShapeMapping;
    }
    return ST_CenterShapeMapping::default_instance();
    }

    void ST_ParameterVal::clear_ST_CenterShapeMapping()
    {    
    m_has_ST_CenterShapeMapping = false;
    if (m_ST_CenterShapeMapping)
    {
        delete m_ST_CenterShapeMapping;
        m_ST_CenterShapeMapping = NULL;
    }
    }

    bool ST_ParameterVal::has_ST_NodeHorizontalAlignment() const
    {    
    return m_has_ST_NodeHorizontalAlignment;
    }

    ST_NodeHorizontalAlignment* ST_ParameterVal::mutable_ST_NodeHorizontalAlignment()
    {    
    clear_ST_DiagramHorizontalAlignment();
    clear_ST_VerticalAlignment();
    clear_ST_ChildDirection();
    clear_ST_ChildAlignment();
    clear_ST_SecondaryChildAlignment();
    clear_ST_LinearDirection();
    clear_ST_SecondaryLinearDirection();
    clear_ST_StartingElement();
    clear_ST_BendPoint();
    clear_ST_ConnectorRouting();
    clear_ST_ArrowheadStyle();
    clear_ST_ConnectorDimension();
    clear_ST_RotationPath();
    clear_ST_CenterShapeMapping();
    clear_ST_NodeVerticalAlignment();
    clear_ST_FallbackDimension();
    clear_ST_TextDirection();
    clear_ST_PyramidAccentPosition();
    clear_ST_PyramidAccentTextMargin();
    clear_ST_TextBlockDirection();
    clear_ST_TextAnchorHorizontal();
    clear_ST_TextAnchorVertical();
    clear_ST_DiagramTextAlignment();
    clear_ST_AutoTextRotation();
    clear_ST_GrowDirection();
    clear_ST_FlowDirection();
    clear_ST_ContinueDirection();
    clear_ST_Breakpoint();
    clear_ST_Offset();
    clear_ST_HierarchyAlignment();
    clear_int();
    clear_double();
    clear_boolean();
    clear_string();
    clear_ST_ConnectorPoint();
    m_has_ST_NodeHorizontalAlignment = true;
    if (!m_ST_NodeHorizontalAlignment)
    {
        m_ST_NodeHorizontalAlignment = new ST_NodeHorizontalAlignment();
    }
    return m_ST_NodeHorizontalAlignment;
    }

    const ST_NodeHorizontalAlignment& ST_ParameterVal::get_ST_NodeHorizontalAlignment() const
    {    
    if (m_ST_NodeHorizontalAlignment)
    {
        return *m_ST_NodeHorizontalAlignment;
    }
    return ST_NodeHorizontalAlignment::default_instance();
    }

    void ST_ParameterVal::clear_ST_NodeHorizontalAlignment()
    {    
    m_has_ST_NodeHorizontalAlignment = false;
    if (m_ST_NodeHorizontalAlignment)
    {
        delete m_ST_NodeHorizontalAlignment;
        m_ST_NodeHorizontalAlignment = NULL;
    }
    }

    bool ST_ParameterVal::has_ST_NodeVerticalAlignment() const
    {    
    return m_has_ST_NodeVerticalAlignment;
    }

    ST_NodeVerticalAlignment* ST_ParameterVal::mutable_ST_NodeVerticalAlignment()
    {    
    clear_ST_DiagramHorizontalAlignment();
    clear_ST_VerticalAlignment();
    clear_ST_ChildDirection();
    clear_ST_ChildAlignment();
    clear_ST_SecondaryChildAlignment();
    clear_ST_LinearDirection();
    clear_ST_SecondaryLinearDirection();
    clear_ST_StartingElement();
    clear_ST_BendPoint();
    clear_ST_ConnectorRouting();
    clear_ST_ArrowheadStyle();
    clear_ST_ConnectorDimension();
    clear_ST_RotationPath();
    clear_ST_CenterShapeMapping();
    clear_ST_NodeHorizontalAlignment();
    clear_ST_FallbackDimension();
    clear_ST_TextDirection();
    clear_ST_PyramidAccentPosition();
    clear_ST_PyramidAccentTextMargin();
    clear_ST_TextBlockDirection();
    clear_ST_TextAnchorHorizontal();
    clear_ST_TextAnchorVertical();
    clear_ST_DiagramTextAlignment();
    clear_ST_AutoTextRotation();
    clear_ST_GrowDirection();
    clear_ST_FlowDirection();
    clear_ST_ContinueDirection();
    clear_ST_Breakpoint();
    clear_ST_Offset();
    clear_ST_HierarchyAlignment();
    clear_int();
    clear_double();
    clear_boolean();
    clear_string();
    clear_ST_ConnectorPoint();
    m_has_ST_NodeVerticalAlignment = true;
    if (!m_ST_NodeVerticalAlignment)
    {
        m_ST_NodeVerticalAlignment = new ST_NodeVerticalAlignment();
    }
    return m_ST_NodeVerticalAlignment;
    }

    const ST_NodeVerticalAlignment& ST_ParameterVal::get_ST_NodeVerticalAlignment() const
    {    
    if (m_ST_NodeVerticalAlignment)
    {
        return *m_ST_NodeVerticalAlignment;
    }
    return ST_NodeVerticalAlignment::default_instance();
    }

    void ST_ParameterVal::clear_ST_NodeVerticalAlignment()
    {    
    m_has_ST_NodeVerticalAlignment = false;
    if (m_ST_NodeVerticalAlignment)
    {
        delete m_ST_NodeVerticalAlignment;
        m_ST_NodeVerticalAlignment = NULL;
    }
    }

    bool ST_ParameterVal::has_ST_FallbackDimension() const
    {    
    return m_has_ST_FallbackDimension;
    }

    ST_FallbackDimension* ST_ParameterVal::mutable_ST_FallbackDimension()
    {    
    clear_ST_DiagramHorizontalAlignment();
    clear_ST_VerticalAlignment();
    clear_ST_ChildDirection();
    clear_ST_ChildAlignment();
    clear_ST_SecondaryChildAlignment();
    clear_ST_LinearDirection();
    clear_ST_SecondaryLinearDirection();
    clear_ST_StartingElement();
    clear_ST_BendPoint();
    clear_ST_ConnectorRouting();
    clear_ST_ArrowheadStyle();
    clear_ST_ConnectorDimension();
    clear_ST_RotationPath();
    clear_ST_CenterShapeMapping();
    clear_ST_NodeHorizontalAlignment();
    clear_ST_NodeVerticalAlignment();
    clear_ST_TextDirection();
    clear_ST_PyramidAccentPosition();
    clear_ST_PyramidAccentTextMargin();
    clear_ST_TextBlockDirection();
    clear_ST_TextAnchorHorizontal();
    clear_ST_TextAnchorVertical();
    clear_ST_DiagramTextAlignment();
    clear_ST_AutoTextRotation();
    clear_ST_GrowDirection();
    clear_ST_FlowDirection();
    clear_ST_ContinueDirection();
    clear_ST_Breakpoint();
    clear_ST_Offset();
    clear_ST_HierarchyAlignment();
    clear_int();
    clear_double();
    clear_boolean();
    clear_string();
    clear_ST_ConnectorPoint();
    m_has_ST_FallbackDimension = true;
    if (!m_ST_FallbackDimension)
    {
        m_ST_FallbackDimension = new ST_FallbackDimension();
    }
    return m_ST_FallbackDimension;
    }

    const ST_FallbackDimension& ST_ParameterVal::get_ST_FallbackDimension() const
    {    
    if (m_ST_FallbackDimension)
    {
        return *m_ST_FallbackDimension;
    }
    return ST_FallbackDimension::default_instance();
    }

    void ST_ParameterVal::clear_ST_FallbackDimension()
    {    
    m_has_ST_FallbackDimension = false;
    if (m_ST_FallbackDimension)
    {
        delete m_ST_FallbackDimension;
        m_ST_FallbackDimension = NULL;
    }
    }

    bool ST_ParameterVal::has_ST_TextDirection() const
    {    
    return m_has_ST_TextDirection;
    }

    ST_TextDirection* ST_ParameterVal::mutable_ST_TextDirection()
    {    
    clear_ST_DiagramHorizontalAlignment();
    clear_ST_VerticalAlignment();
    clear_ST_ChildDirection();
    clear_ST_ChildAlignment();
    clear_ST_SecondaryChildAlignment();
    clear_ST_LinearDirection();
    clear_ST_SecondaryLinearDirection();
    clear_ST_StartingElement();
    clear_ST_BendPoint();
    clear_ST_ConnectorRouting();
    clear_ST_ArrowheadStyle();
    clear_ST_ConnectorDimension();
    clear_ST_RotationPath();
    clear_ST_CenterShapeMapping();
    clear_ST_NodeHorizontalAlignment();
    clear_ST_NodeVerticalAlignment();
    clear_ST_FallbackDimension();
    clear_ST_PyramidAccentPosition();
    clear_ST_PyramidAccentTextMargin();
    clear_ST_TextBlockDirection();
    clear_ST_TextAnchorHorizontal();
    clear_ST_TextAnchorVertical();
    clear_ST_DiagramTextAlignment();
    clear_ST_AutoTextRotation();
    clear_ST_GrowDirection();
    clear_ST_FlowDirection();
    clear_ST_ContinueDirection();
    clear_ST_Breakpoint();
    clear_ST_Offset();
    clear_ST_HierarchyAlignment();
    clear_int();
    clear_double();
    clear_boolean();
    clear_string();
    clear_ST_ConnectorPoint();
    m_has_ST_TextDirection = true;
    if (!m_ST_TextDirection)
    {
        m_ST_TextDirection = new ST_TextDirection();
    }
    return m_ST_TextDirection;
    }

    const ST_TextDirection& ST_ParameterVal::get_ST_TextDirection() const
    {    
    if (m_ST_TextDirection)
    {
        return *m_ST_TextDirection;
    }
    return ST_TextDirection::default_instance();
    }

    void ST_ParameterVal::clear_ST_TextDirection()
    {    
    m_has_ST_TextDirection = false;
    if (m_ST_TextDirection)
    {
        delete m_ST_TextDirection;
        m_ST_TextDirection = NULL;
    }
    }

    bool ST_ParameterVal::has_ST_PyramidAccentPosition() const
    {    
    return m_has_ST_PyramidAccentPosition;
    }

    ST_PyramidAccentPosition* ST_ParameterVal::mutable_ST_PyramidAccentPosition()
    {    
    clear_ST_DiagramHorizontalAlignment();
    clear_ST_VerticalAlignment();
    clear_ST_ChildDirection();
    clear_ST_ChildAlignment();
    clear_ST_SecondaryChildAlignment();
    clear_ST_LinearDirection();
    clear_ST_SecondaryLinearDirection();
    clear_ST_StartingElement();
    clear_ST_BendPoint();
    clear_ST_ConnectorRouting();
    clear_ST_ArrowheadStyle();
    clear_ST_ConnectorDimension();
    clear_ST_RotationPath();
    clear_ST_CenterShapeMapping();
    clear_ST_NodeHorizontalAlignment();
    clear_ST_NodeVerticalAlignment();
    clear_ST_FallbackDimension();
    clear_ST_TextDirection();
    clear_ST_PyramidAccentTextMargin();
    clear_ST_TextBlockDirection();
    clear_ST_TextAnchorHorizontal();
    clear_ST_TextAnchorVertical();
    clear_ST_DiagramTextAlignment();
    clear_ST_AutoTextRotation();
    clear_ST_GrowDirection();
    clear_ST_FlowDirection();
    clear_ST_ContinueDirection();
    clear_ST_Breakpoint();
    clear_ST_Offset();
    clear_ST_HierarchyAlignment();
    clear_int();
    clear_double();
    clear_boolean();
    clear_string();
    clear_ST_ConnectorPoint();
    m_has_ST_PyramidAccentPosition = true;
    if (!m_ST_PyramidAccentPosition)
    {
        m_ST_PyramidAccentPosition = new ST_PyramidAccentPosition();
    }
    return m_ST_PyramidAccentPosition;
    }

    const ST_PyramidAccentPosition& ST_ParameterVal::get_ST_PyramidAccentPosition() const
    {    
    if (m_ST_PyramidAccentPosition)
    {
        return *m_ST_PyramidAccentPosition;
    }
    return ST_PyramidAccentPosition::default_instance();
    }

    void ST_ParameterVal::clear_ST_PyramidAccentPosition()
    {    
    m_has_ST_PyramidAccentPosition = false;
    if (m_ST_PyramidAccentPosition)
    {
        delete m_ST_PyramidAccentPosition;
        m_ST_PyramidAccentPosition = NULL;
    }
    }

    bool ST_ParameterVal::has_ST_PyramidAccentTextMargin() const
    {    
    return m_has_ST_PyramidAccentTextMargin;
    }

    ST_PyramidAccentTextMargin* ST_ParameterVal::mutable_ST_PyramidAccentTextMargin()
    {    
    clear_ST_DiagramHorizontalAlignment();
    clear_ST_VerticalAlignment();
    clear_ST_ChildDirection();
    clear_ST_ChildAlignment();
    clear_ST_SecondaryChildAlignment();
    clear_ST_LinearDirection();
    clear_ST_SecondaryLinearDirection();
    clear_ST_StartingElement();
    clear_ST_BendPoint();
    clear_ST_ConnectorRouting();
    clear_ST_ArrowheadStyle();
    clear_ST_ConnectorDimension();
    clear_ST_RotationPath();
    clear_ST_CenterShapeMapping();
    clear_ST_NodeHorizontalAlignment();
    clear_ST_NodeVerticalAlignment();
    clear_ST_FallbackDimension();
    clear_ST_TextDirection();
    clear_ST_PyramidAccentPosition();
    clear_ST_TextBlockDirection();
    clear_ST_TextAnchorHorizontal();
    clear_ST_TextAnchorVertical();
    clear_ST_DiagramTextAlignment();
    clear_ST_AutoTextRotation();
    clear_ST_GrowDirection();
    clear_ST_FlowDirection();
    clear_ST_ContinueDirection();
    clear_ST_Breakpoint();
    clear_ST_Offset();
    clear_ST_HierarchyAlignment();
    clear_int();
    clear_double();
    clear_boolean();
    clear_string();
    clear_ST_ConnectorPoint();
    m_has_ST_PyramidAccentTextMargin = true;
    if (!m_ST_PyramidAccentTextMargin)
    {
        m_ST_PyramidAccentTextMargin = new ST_PyramidAccentTextMargin();
    }
    return m_ST_PyramidAccentTextMargin;
    }

    const ST_PyramidAccentTextMargin& ST_ParameterVal::get_ST_PyramidAccentTextMargin() const
    {    
    if (m_ST_PyramidAccentTextMargin)
    {
        return *m_ST_PyramidAccentTextMargin;
    }
    return ST_PyramidAccentTextMargin::default_instance();
    }

    void ST_ParameterVal::clear_ST_PyramidAccentTextMargin()
    {    
    m_has_ST_PyramidAccentTextMargin = false;
    if (m_ST_PyramidAccentTextMargin)
    {
        delete m_ST_PyramidAccentTextMargin;
        m_ST_PyramidAccentTextMargin = NULL;
    }
    }

    bool ST_ParameterVal::has_ST_TextBlockDirection() const
    {    
    return m_has_ST_TextBlockDirection;
    }

    ST_TextBlockDirection* ST_ParameterVal::mutable_ST_TextBlockDirection()
    {    
    clear_ST_DiagramHorizontalAlignment();
    clear_ST_VerticalAlignment();
    clear_ST_ChildDirection();
    clear_ST_ChildAlignment();
    clear_ST_SecondaryChildAlignment();
    clear_ST_LinearDirection();
    clear_ST_SecondaryLinearDirection();
    clear_ST_StartingElement();
    clear_ST_BendPoint();
    clear_ST_ConnectorRouting();
    clear_ST_ArrowheadStyle();
    clear_ST_ConnectorDimension();
    clear_ST_RotationPath();
    clear_ST_CenterShapeMapping();
    clear_ST_NodeHorizontalAlignment();
    clear_ST_NodeVerticalAlignment();
    clear_ST_FallbackDimension();
    clear_ST_TextDirection();
    clear_ST_PyramidAccentPosition();
    clear_ST_PyramidAccentTextMargin();
    clear_ST_TextAnchorHorizontal();
    clear_ST_TextAnchorVertical();
    clear_ST_DiagramTextAlignment();
    clear_ST_AutoTextRotation();
    clear_ST_GrowDirection();
    clear_ST_FlowDirection();
    clear_ST_ContinueDirection();
    clear_ST_Breakpoint();
    clear_ST_Offset();
    clear_ST_HierarchyAlignment();
    clear_int();
    clear_double();
    clear_boolean();
    clear_string();
    clear_ST_ConnectorPoint();
    m_has_ST_TextBlockDirection = true;
    if (!m_ST_TextBlockDirection)
    {
        m_ST_TextBlockDirection = new ST_TextBlockDirection();
    }
    return m_ST_TextBlockDirection;
    }

    const ST_TextBlockDirection& ST_ParameterVal::get_ST_TextBlockDirection() const
    {    
    if (m_ST_TextBlockDirection)
    {
        return *m_ST_TextBlockDirection;
    }
    return ST_TextBlockDirection::default_instance();
    }

    void ST_ParameterVal::clear_ST_TextBlockDirection()
    {    
    m_has_ST_TextBlockDirection = false;
    if (m_ST_TextBlockDirection)
    {
        delete m_ST_TextBlockDirection;
        m_ST_TextBlockDirection = NULL;
    }
    }

    bool ST_ParameterVal::has_ST_TextAnchorHorizontal() const
    {    
    return m_has_ST_TextAnchorHorizontal;
    }

    ST_TextAnchorHorizontal* ST_ParameterVal::mutable_ST_TextAnchorHorizontal()
    {    
    clear_ST_DiagramHorizontalAlignment();
    clear_ST_VerticalAlignment();
    clear_ST_ChildDirection();
    clear_ST_ChildAlignment();
    clear_ST_SecondaryChildAlignment();
    clear_ST_LinearDirection();
    clear_ST_SecondaryLinearDirection();
    clear_ST_StartingElement();
    clear_ST_BendPoint();
    clear_ST_ConnectorRouting();
    clear_ST_ArrowheadStyle();
    clear_ST_ConnectorDimension();
    clear_ST_RotationPath();
    clear_ST_CenterShapeMapping();
    clear_ST_NodeHorizontalAlignment();
    clear_ST_NodeVerticalAlignment();
    clear_ST_FallbackDimension();
    clear_ST_TextDirection();
    clear_ST_PyramidAccentPosition();
    clear_ST_PyramidAccentTextMargin();
    clear_ST_TextBlockDirection();
    clear_ST_TextAnchorVertical();
    clear_ST_DiagramTextAlignment();
    clear_ST_AutoTextRotation();
    clear_ST_GrowDirection();
    clear_ST_FlowDirection();
    clear_ST_ContinueDirection();
    clear_ST_Breakpoint();
    clear_ST_Offset();
    clear_ST_HierarchyAlignment();
    clear_int();
    clear_double();
    clear_boolean();
    clear_string();
    clear_ST_ConnectorPoint();
    m_has_ST_TextAnchorHorizontal = true;
    if (!m_ST_TextAnchorHorizontal)
    {
        m_ST_TextAnchorHorizontal = new ST_TextAnchorHorizontal();
    }
    return m_ST_TextAnchorHorizontal;
    }

    const ST_TextAnchorHorizontal& ST_ParameterVal::get_ST_TextAnchorHorizontal() const
    {    
    if (m_ST_TextAnchorHorizontal)
    {
        return *m_ST_TextAnchorHorizontal;
    }
    return ST_TextAnchorHorizontal::default_instance();
    }

    void ST_ParameterVal::clear_ST_TextAnchorHorizontal()
    {    
    m_has_ST_TextAnchorHorizontal = false;
    if (m_ST_TextAnchorHorizontal)
    {
        delete m_ST_TextAnchorHorizontal;
        m_ST_TextAnchorHorizontal = NULL;
    }
    }

    bool ST_ParameterVal::has_ST_TextAnchorVertical() const
    {    
    return m_has_ST_TextAnchorVertical;
    }

    ST_TextAnchorVertical* ST_ParameterVal::mutable_ST_TextAnchorVertical()
    {    
    clear_ST_DiagramHorizontalAlignment();
    clear_ST_VerticalAlignment();
    clear_ST_ChildDirection();
    clear_ST_ChildAlignment();
    clear_ST_SecondaryChildAlignment();
    clear_ST_LinearDirection();
    clear_ST_SecondaryLinearDirection();
    clear_ST_StartingElement();
    clear_ST_BendPoint();
    clear_ST_ConnectorRouting();
    clear_ST_ArrowheadStyle();
    clear_ST_ConnectorDimension();
    clear_ST_RotationPath();
    clear_ST_CenterShapeMapping();
    clear_ST_NodeHorizontalAlignment();
    clear_ST_NodeVerticalAlignment();
    clear_ST_FallbackDimension();
    clear_ST_TextDirection();
    clear_ST_PyramidAccentPosition();
    clear_ST_PyramidAccentTextMargin();
    clear_ST_TextBlockDirection();
    clear_ST_TextAnchorHorizontal();
    clear_ST_DiagramTextAlignment();
    clear_ST_AutoTextRotation();
    clear_ST_GrowDirection();
    clear_ST_FlowDirection();
    clear_ST_ContinueDirection();
    clear_ST_Breakpoint();
    clear_ST_Offset();
    clear_ST_HierarchyAlignment();
    clear_int();
    clear_double();
    clear_boolean();
    clear_string();
    clear_ST_ConnectorPoint();
    m_has_ST_TextAnchorVertical = true;
    if (!m_ST_TextAnchorVertical)
    {
        m_ST_TextAnchorVertical = new ST_TextAnchorVertical();
    }
    return m_ST_TextAnchorVertical;
    }

    const ST_TextAnchorVertical& ST_ParameterVal::get_ST_TextAnchorVertical() const
    {    
    if (m_ST_TextAnchorVertical)
    {
        return *m_ST_TextAnchorVertical;
    }
    return ST_TextAnchorVertical::default_instance();
    }

    void ST_ParameterVal::clear_ST_TextAnchorVertical()
    {    
    m_has_ST_TextAnchorVertical = false;
    if (m_ST_TextAnchorVertical)
    {
        delete m_ST_TextAnchorVertical;
        m_ST_TextAnchorVertical = NULL;
    }
    }

    bool ST_ParameterVal::has_ST_DiagramTextAlignment() const
    {    
    return m_has_ST_DiagramTextAlignment;
    }

    ST_DiagramTextAlignment* ST_ParameterVal::mutable_ST_DiagramTextAlignment()
    {    
    clear_ST_DiagramHorizontalAlignment();
    clear_ST_VerticalAlignment();
    clear_ST_ChildDirection();
    clear_ST_ChildAlignment();
    clear_ST_SecondaryChildAlignment();
    clear_ST_LinearDirection();
    clear_ST_SecondaryLinearDirection();
    clear_ST_StartingElement();
    clear_ST_BendPoint();
    clear_ST_ConnectorRouting();
    clear_ST_ArrowheadStyle();
    clear_ST_ConnectorDimension();
    clear_ST_RotationPath();
    clear_ST_CenterShapeMapping();
    clear_ST_NodeHorizontalAlignment();
    clear_ST_NodeVerticalAlignment();
    clear_ST_FallbackDimension();
    clear_ST_TextDirection();
    clear_ST_PyramidAccentPosition();
    clear_ST_PyramidAccentTextMargin();
    clear_ST_TextBlockDirection();
    clear_ST_TextAnchorHorizontal();
    clear_ST_TextAnchorVertical();
    clear_ST_AutoTextRotation();
    clear_ST_GrowDirection();
    clear_ST_FlowDirection();
    clear_ST_ContinueDirection();
    clear_ST_Breakpoint();
    clear_ST_Offset();
    clear_ST_HierarchyAlignment();
    clear_int();
    clear_double();
    clear_boolean();
    clear_string();
    clear_ST_ConnectorPoint();
    m_has_ST_DiagramTextAlignment = true;
    if (!m_ST_DiagramTextAlignment)
    {
        m_ST_DiagramTextAlignment = new ST_DiagramTextAlignment();
    }
    return m_ST_DiagramTextAlignment;
    }

    const ST_DiagramTextAlignment& ST_ParameterVal::get_ST_DiagramTextAlignment() const
    {    
    if (m_ST_DiagramTextAlignment)
    {
        return *m_ST_DiagramTextAlignment;
    }
    return ST_DiagramTextAlignment::default_instance();
    }

    void ST_ParameterVal::clear_ST_DiagramTextAlignment()
    {    
    m_has_ST_DiagramTextAlignment = false;
    if (m_ST_DiagramTextAlignment)
    {
        delete m_ST_DiagramTextAlignment;
        m_ST_DiagramTextAlignment = NULL;
    }
    }

    bool ST_ParameterVal::has_ST_AutoTextRotation() const
    {    
    return m_has_ST_AutoTextRotation;
    }

    ST_AutoTextRotation* ST_ParameterVal::mutable_ST_AutoTextRotation()
    {    
    clear_ST_DiagramHorizontalAlignment();
    clear_ST_VerticalAlignment();
    clear_ST_ChildDirection();
    clear_ST_ChildAlignment();
    clear_ST_SecondaryChildAlignment();
    clear_ST_LinearDirection();
    clear_ST_SecondaryLinearDirection();
    clear_ST_StartingElement();
    clear_ST_BendPoint();
    clear_ST_ConnectorRouting();
    clear_ST_ArrowheadStyle();
    clear_ST_ConnectorDimension();
    clear_ST_RotationPath();
    clear_ST_CenterShapeMapping();
    clear_ST_NodeHorizontalAlignment();
    clear_ST_NodeVerticalAlignment();
    clear_ST_FallbackDimension();
    clear_ST_TextDirection();
    clear_ST_PyramidAccentPosition();
    clear_ST_PyramidAccentTextMargin();
    clear_ST_TextBlockDirection();
    clear_ST_TextAnchorHorizontal();
    clear_ST_TextAnchorVertical();
    clear_ST_DiagramTextAlignment();
    clear_ST_GrowDirection();
    clear_ST_FlowDirection();
    clear_ST_ContinueDirection();
    clear_ST_Breakpoint();
    clear_ST_Offset();
    clear_ST_HierarchyAlignment();
    clear_int();
    clear_double();
    clear_boolean();
    clear_string();
    clear_ST_ConnectorPoint();
    m_has_ST_AutoTextRotation = true;
    if (!m_ST_AutoTextRotation)
    {
        m_ST_AutoTextRotation = new ST_AutoTextRotation();
    }
    return m_ST_AutoTextRotation;
    }

    const ST_AutoTextRotation& ST_ParameterVal::get_ST_AutoTextRotation() const
    {    
    if (m_ST_AutoTextRotation)
    {
        return *m_ST_AutoTextRotation;
    }
    return ST_AutoTextRotation::default_instance();
    }

    void ST_ParameterVal::clear_ST_AutoTextRotation()
    {    
    m_has_ST_AutoTextRotation = false;
    if (m_ST_AutoTextRotation)
    {
        delete m_ST_AutoTextRotation;
        m_ST_AutoTextRotation = NULL;
    }
    }

    bool ST_ParameterVal::has_ST_GrowDirection() const
    {    
    return m_has_ST_GrowDirection;
    }

    ST_GrowDirection* ST_ParameterVal::mutable_ST_GrowDirection()
    {    
    clear_ST_DiagramHorizontalAlignment();
    clear_ST_VerticalAlignment();
    clear_ST_ChildDirection();
    clear_ST_ChildAlignment();
    clear_ST_SecondaryChildAlignment();
    clear_ST_LinearDirection();
    clear_ST_SecondaryLinearDirection();
    clear_ST_StartingElement();
    clear_ST_BendPoint();
    clear_ST_ConnectorRouting();
    clear_ST_ArrowheadStyle();
    clear_ST_ConnectorDimension();
    clear_ST_RotationPath();
    clear_ST_CenterShapeMapping();
    clear_ST_NodeHorizontalAlignment();
    clear_ST_NodeVerticalAlignment();
    clear_ST_FallbackDimension();
    clear_ST_TextDirection();
    clear_ST_PyramidAccentPosition();
    clear_ST_PyramidAccentTextMargin();
    clear_ST_TextBlockDirection();
    clear_ST_TextAnchorHorizontal();
    clear_ST_TextAnchorVertical();
    clear_ST_DiagramTextAlignment();
    clear_ST_AutoTextRotation();
    clear_ST_FlowDirection();
    clear_ST_ContinueDirection();
    clear_ST_Breakpoint();
    clear_ST_Offset();
    clear_ST_HierarchyAlignment();
    clear_int();
    clear_double();
    clear_boolean();
    clear_string();
    clear_ST_ConnectorPoint();
    m_has_ST_GrowDirection = true;
    if (!m_ST_GrowDirection)
    {
        m_ST_GrowDirection = new ST_GrowDirection();
    }
    return m_ST_GrowDirection;
    }

    const ST_GrowDirection& ST_ParameterVal::get_ST_GrowDirection() const
    {    
    if (m_ST_GrowDirection)
    {
        return *m_ST_GrowDirection;
    }
    return ST_GrowDirection::default_instance();
    }

    void ST_ParameterVal::clear_ST_GrowDirection()
    {    
    m_has_ST_GrowDirection = false;
    if (m_ST_GrowDirection)
    {
        delete m_ST_GrowDirection;
        m_ST_GrowDirection = NULL;
    }
    }

    bool ST_ParameterVal::has_ST_FlowDirection() const
    {    
    return m_has_ST_FlowDirection;
    }

    ST_FlowDirection* ST_ParameterVal::mutable_ST_FlowDirection()
    {    
    clear_ST_DiagramHorizontalAlignment();
    clear_ST_VerticalAlignment();
    clear_ST_ChildDirection();
    clear_ST_ChildAlignment();
    clear_ST_SecondaryChildAlignment();
    clear_ST_LinearDirection();
    clear_ST_SecondaryLinearDirection();
    clear_ST_StartingElement();
    clear_ST_BendPoint();
    clear_ST_ConnectorRouting();
    clear_ST_ArrowheadStyle();
    clear_ST_ConnectorDimension();
    clear_ST_RotationPath();
    clear_ST_CenterShapeMapping();
    clear_ST_NodeHorizontalAlignment();
    clear_ST_NodeVerticalAlignment();
    clear_ST_FallbackDimension();
    clear_ST_TextDirection();
    clear_ST_PyramidAccentPosition();
    clear_ST_PyramidAccentTextMargin();
    clear_ST_TextBlockDirection();
    clear_ST_TextAnchorHorizontal();
    clear_ST_TextAnchorVertical();
    clear_ST_DiagramTextAlignment();
    clear_ST_AutoTextRotation();
    clear_ST_GrowDirection();
    clear_ST_ContinueDirection();
    clear_ST_Breakpoint();
    clear_ST_Offset();
    clear_ST_HierarchyAlignment();
    clear_int();
    clear_double();
    clear_boolean();
    clear_string();
    clear_ST_ConnectorPoint();
    m_has_ST_FlowDirection = true;
    if (!m_ST_FlowDirection)
    {
        m_ST_FlowDirection = new ST_FlowDirection();
    }
    return m_ST_FlowDirection;
    }

    const ST_FlowDirection& ST_ParameterVal::get_ST_FlowDirection() const
    {    
    if (m_ST_FlowDirection)
    {
        return *m_ST_FlowDirection;
    }
    return ST_FlowDirection::default_instance();
    }

    void ST_ParameterVal::clear_ST_FlowDirection()
    {    
    m_has_ST_FlowDirection = false;
    if (m_ST_FlowDirection)
    {
        delete m_ST_FlowDirection;
        m_ST_FlowDirection = NULL;
    }
    }

    bool ST_ParameterVal::has_ST_ContinueDirection() const
    {    
    return m_has_ST_ContinueDirection;
    }

    ST_ContinueDirection* ST_ParameterVal::mutable_ST_ContinueDirection()
    {    
    clear_ST_DiagramHorizontalAlignment();
    clear_ST_VerticalAlignment();
    clear_ST_ChildDirection();
    clear_ST_ChildAlignment();
    clear_ST_SecondaryChildAlignment();
    clear_ST_LinearDirection();
    clear_ST_SecondaryLinearDirection();
    clear_ST_StartingElement();
    clear_ST_BendPoint();
    clear_ST_ConnectorRouting();
    clear_ST_ArrowheadStyle();
    clear_ST_ConnectorDimension();
    clear_ST_RotationPath();
    clear_ST_CenterShapeMapping();
    clear_ST_NodeHorizontalAlignment();
    clear_ST_NodeVerticalAlignment();
    clear_ST_FallbackDimension();
    clear_ST_TextDirection();
    clear_ST_PyramidAccentPosition();
    clear_ST_PyramidAccentTextMargin();
    clear_ST_TextBlockDirection();
    clear_ST_TextAnchorHorizontal();
    clear_ST_TextAnchorVertical();
    clear_ST_DiagramTextAlignment();
    clear_ST_AutoTextRotation();
    clear_ST_GrowDirection();
    clear_ST_FlowDirection();
    clear_ST_Breakpoint();
    clear_ST_Offset();
    clear_ST_HierarchyAlignment();
    clear_int();
    clear_double();
    clear_boolean();
    clear_string();
    clear_ST_ConnectorPoint();
    m_has_ST_ContinueDirection = true;
    if (!m_ST_ContinueDirection)
    {
        m_ST_ContinueDirection = new ST_ContinueDirection();
    }
    return m_ST_ContinueDirection;
    }

    const ST_ContinueDirection& ST_ParameterVal::get_ST_ContinueDirection() const
    {    
    if (m_ST_ContinueDirection)
    {
        return *m_ST_ContinueDirection;
    }
    return ST_ContinueDirection::default_instance();
    }

    void ST_ParameterVal::clear_ST_ContinueDirection()
    {    
    m_has_ST_ContinueDirection = false;
    if (m_ST_ContinueDirection)
    {
        delete m_ST_ContinueDirection;
        m_ST_ContinueDirection = NULL;
    }
    }

    bool ST_ParameterVal::has_ST_Breakpoint() const
    {    
    return m_has_ST_Breakpoint;
    }

    ST_Breakpoint* ST_ParameterVal::mutable_ST_Breakpoint()
    {    
    clear_ST_DiagramHorizontalAlignment();
    clear_ST_VerticalAlignment();
    clear_ST_ChildDirection();
    clear_ST_ChildAlignment();
    clear_ST_SecondaryChildAlignment();
    clear_ST_LinearDirection();
    clear_ST_SecondaryLinearDirection();
    clear_ST_StartingElement();
    clear_ST_BendPoint();
    clear_ST_ConnectorRouting();
    clear_ST_ArrowheadStyle();
    clear_ST_ConnectorDimension();
    clear_ST_RotationPath();
    clear_ST_CenterShapeMapping();
    clear_ST_NodeHorizontalAlignment();
    clear_ST_NodeVerticalAlignment();
    clear_ST_FallbackDimension();
    clear_ST_TextDirection();
    clear_ST_PyramidAccentPosition();
    clear_ST_PyramidAccentTextMargin();
    clear_ST_TextBlockDirection();
    clear_ST_TextAnchorHorizontal();
    clear_ST_TextAnchorVertical();
    clear_ST_DiagramTextAlignment();
    clear_ST_AutoTextRotation();
    clear_ST_GrowDirection();
    clear_ST_FlowDirection();
    clear_ST_ContinueDirection();
    clear_ST_Offset();
    clear_ST_HierarchyAlignment();
    clear_int();
    clear_double();
    clear_boolean();
    clear_string();
    clear_ST_ConnectorPoint();
    m_has_ST_Breakpoint = true;
    if (!m_ST_Breakpoint)
    {
        m_ST_Breakpoint = new ST_Breakpoint();
    }
    return m_ST_Breakpoint;
    }

    const ST_Breakpoint& ST_ParameterVal::get_ST_Breakpoint() const
    {    
    if (m_ST_Breakpoint)
    {
        return *m_ST_Breakpoint;
    }
    return ST_Breakpoint::default_instance();
    }

    void ST_ParameterVal::clear_ST_Breakpoint()
    {    
    m_has_ST_Breakpoint = false;
    if (m_ST_Breakpoint)
    {
        delete m_ST_Breakpoint;
        m_ST_Breakpoint = NULL;
    }
    }

    bool ST_ParameterVal::has_ST_Offset() const
    {    
    return m_has_ST_Offset;
    }

    ST_Offset* ST_ParameterVal::mutable_ST_Offset()
    {    
    clear_ST_DiagramHorizontalAlignment();
    clear_ST_VerticalAlignment();
    clear_ST_ChildDirection();
    clear_ST_ChildAlignment();
    clear_ST_SecondaryChildAlignment();
    clear_ST_LinearDirection();
    clear_ST_SecondaryLinearDirection();
    clear_ST_StartingElement();
    clear_ST_BendPoint();
    clear_ST_ConnectorRouting();
    clear_ST_ArrowheadStyle();
    clear_ST_ConnectorDimension();
    clear_ST_RotationPath();
    clear_ST_CenterShapeMapping();
    clear_ST_NodeHorizontalAlignment();
    clear_ST_NodeVerticalAlignment();
    clear_ST_FallbackDimension();
    clear_ST_TextDirection();
    clear_ST_PyramidAccentPosition();
    clear_ST_PyramidAccentTextMargin();
    clear_ST_TextBlockDirection();
    clear_ST_TextAnchorHorizontal();
    clear_ST_TextAnchorVertical();
    clear_ST_DiagramTextAlignment();
    clear_ST_AutoTextRotation();
    clear_ST_GrowDirection();
    clear_ST_FlowDirection();
    clear_ST_ContinueDirection();
    clear_ST_Breakpoint();
    clear_ST_HierarchyAlignment();
    clear_int();
    clear_double();
    clear_boolean();
    clear_string();
    clear_ST_ConnectorPoint();
    m_has_ST_Offset = true;
    if (!m_ST_Offset)
    {
        m_ST_Offset = new ST_Offset();
    }
    return m_ST_Offset;
    }

    const ST_Offset& ST_ParameterVal::get_ST_Offset() const
    {    
    if (m_ST_Offset)
    {
        return *m_ST_Offset;
    }
    return ST_Offset::default_instance();
    }

    void ST_ParameterVal::clear_ST_Offset()
    {    
    m_has_ST_Offset = false;
    if (m_ST_Offset)
    {
        delete m_ST_Offset;
        m_ST_Offset = NULL;
    }
    }

    bool ST_ParameterVal::has_ST_HierarchyAlignment() const
    {    
    return m_has_ST_HierarchyAlignment;
    }

    ST_HierarchyAlignment* ST_ParameterVal::mutable_ST_HierarchyAlignment()
    {    
    clear_ST_DiagramHorizontalAlignment();
    clear_ST_VerticalAlignment();
    clear_ST_ChildDirection();
    clear_ST_ChildAlignment();
    clear_ST_SecondaryChildAlignment();
    clear_ST_LinearDirection();
    clear_ST_SecondaryLinearDirection();
    clear_ST_StartingElement();
    clear_ST_BendPoint();
    clear_ST_ConnectorRouting();
    clear_ST_ArrowheadStyle();
    clear_ST_ConnectorDimension();
    clear_ST_RotationPath();
    clear_ST_CenterShapeMapping();
    clear_ST_NodeHorizontalAlignment();
    clear_ST_NodeVerticalAlignment();
    clear_ST_FallbackDimension();
    clear_ST_TextDirection();
    clear_ST_PyramidAccentPosition();
    clear_ST_PyramidAccentTextMargin();
    clear_ST_TextBlockDirection();
    clear_ST_TextAnchorHorizontal();
    clear_ST_TextAnchorVertical();
    clear_ST_DiagramTextAlignment();
    clear_ST_AutoTextRotation();
    clear_ST_GrowDirection();
    clear_ST_FlowDirection();
    clear_ST_ContinueDirection();
    clear_ST_Breakpoint();
    clear_ST_Offset();
    clear_int();
    clear_double();
    clear_boolean();
    clear_string();
    clear_ST_ConnectorPoint();
    m_has_ST_HierarchyAlignment = true;
    if (!m_ST_HierarchyAlignment)
    {
        m_ST_HierarchyAlignment = new ST_HierarchyAlignment();
    }
    return m_ST_HierarchyAlignment;
    }

    const ST_HierarchyAlignment& ST_ParameterVal::get_ST_HierarchyAlignment() const
    {    
    if (m_ST_HierarchyAlignment)
    {
        return *m_ST_HierarchyAlignment;
    }
    return ST_HierarchyAlignment::default_instance();
    }

    void ST_ParameterVal::clear_ST_HierarchyAlignment()
    {    
    m_has_ST_HierarchyAlignment = false;
    if (m_ST_HierarchyAlignment)
    {
        delete m_ST_HierarchyAlignment;
        m_ST_HierarchyAlignment = NULL;
    }
    }

    bool ST_ParameterVal::has_int() const
    {    
    return m_has_int;
    }

    void ST_ParameterVal::set_int(const XSD::int_& _int)
    {    
    clear_ST_DiagramHorizontalAlignment();
    clear_ST_VerticalAlignment();
    clear_ST_ChildDirection();
    clear_ST_ChildAlignment();
    clear_ST_SecondaryChildAlignment();
    clear_ST_LinearDirection();
    clear_ST_SecondaryLinearDirection();
    clear_ST_StartingElement();
    clear_ST_BendPoint();
    clear_ST_ConnectorRouting();
    clear_ST_ArrowheadStyle();
    clear_ST_ConnectorDimension();
    clear_ST_RotationPath();
    clear_ST_CenterShapeMapping();
    clear_ST_NodeHorizontalAlignment();
    clear_ST_NodeVerticalAlignment();
    clear_ST_FallbackDimension();
    clear_ST_TextDirection();
    clear_ST_PyramidAccentPosition();
    clear_ST_PyramidAccentTextMargin();
    clear_ST_TextBlockDirection();
    clear_ST_TextAnchorHorizontal();
    clear_ST_TextAnchorVertical();
    clear_ST_DiagramTextAlignment();
    clear_ST_AutoTextRotation();
    clear_ST_GrowDirection();
    clear_ST_FlowDirection();
    clear_ST_ContinueDirection();
    clear_ST_Breakpoint();
    clear_ST_Offset();
    clear_ST_HierarchyAlignment();
    clear_double();
    clear_boolean();
    clear_string();
    clear_ST_ConnectorPoint();
    m_has_int = true;
    m_int = _int;
    }

    const XSD::int_& ST_ParameterVal::get_int() const
    {    
    return m_int;
    }

    void ST_ParameterVal::clear_int()
    {    
    m_has_int = false;
    m_int = 0;
    }

    bool ST_ParameterVal::has_double() const
    {    
    return m_has_double;
    }

    void ST_ParameterVal::set_double(const XSD::double_& _double)
    {    
    clear_ST_DiagramHorizontalAlignment();
    clear_ST_VerticalAlignment();
    clear_ST_ChildDirection();
    clear_ST_ChildAlignment();
    clear_ST_SecondaryChildAlignment();
    clear_ST_LinearDirection();
    clear_ST_SecondaryLinearDirection();
    clear_ST_StartingElement();
    clear_ST_BendPoint();
    clear_ST_ConnectorRouting();
    clear_ST_ArrowheadStyle();
    clear_ST_ConnectorDimension();
    clear_ST_RotationPath();
    clear_ST_CenterShapeMapping();
    clear_ST_NodeHorizontalAlignment();
    clear_ST_NodeVerticalAlignment();
    clear_ST_FallbackDimension();
    clear_ST_TextDirection();
    clear_ST_PyramidAccentPosition();
    clear_ST_PyramidAccentTextMargin();
    clear_ST_TextBlockDirection();
    clear_ST_TextAnchorHorizontal();
    clear_ST_TextAnchorVertical();
    clear_ST_DiagramTextAlignment();
    clear_ST_AutoTextRotation();
    clear_ST_GrowDirection();
    clear_ST_FlowDirection();
    clear_ST_ContinueDirection();
    clear_ST_Breakpoint();
    clear_ST_Offset();
    clear_ST_HierarchyAlignment();
    clear_int();
    clear_boolean();
    clear_string();
    clear_ST_ConnectorPoint();
    m_has_double = true;
    m_double = _double;
    }

    const XSD::double_& ST_ParameterVal::get_double() const
    {    
    return m_double;
    }

    void ST_ParameterVal::clear_double()
    {    
    m_has_double = false;
    m_double = 0;
    }

    bool ST_ParameterVal::has_boolean() const
    {    
    return m_has_boolean;
    }

    void ST_ParameterVal::set_boolean(const XSD::boolean_& _boolean)
    {    
    clear_ST_DiagramHorizontalAlignment();
    clear_ST_VerticalAlignment();
    clear_ST_ChildDirection();
    clear_ST_ChildAlignment();
    clear_ST_SecondaryChildAlignment();
    clear_ST_LinearDirection();
    clear_ST_SecondaryLinearDirection();
    clear_ST_StartingElement();
    clear_ST_BendPoint();
    clear_ST_ConnectorRouting();
    clear_ST_ArrowheadStyle();
    clear_ST_ConnectorDimension();
    clear_ST_RotationPath();
    clear_ST_CenterShapeMapping();
    clear_ST_NodeHorizontalAlignment();
    clear_ST_NodeVerticalAlignment();
    clear_ST_FallbackDimension();
    clear_ST_TextDirection();
    clear_ST_PyramidAccentPosition();
    clear_ST_PyramidAccentTextMargin();
    clear_ST_TextBlockDirection();
    clear_ST_TextAnchorHorizontal();
    clear_ST_TextAnchorVertical();
    clear_ST_DiagramTextAlignment();
    clear_ST_AutoTextRotation();
    clear_ST_GrowDirection();
    clear_ST_FlowDirection();
    clear_ST_ContinueDirection();
    clear_ST_Breakpoint();
    clear_ST_Offset();
    clear_ST_HierarchyAlignment();
    clear_int();
    clear_double();
    clear_string();
    clear_ST_ConnectorPoint();
    m_has_boolean = true;
    m_boolean = _boolean;
    }

    const XSD::boolean_& ST_ParameterVal::get_boolean() const
    {    
    return m_boolean;
    }

    void ST_ParameterVal::clear_boolean()
    {    
    m_has_boolean = false;
    m_boolean = false;
    }

    bool ST_ParameterVal::has_string() const
    {    
    return m_has_string;
    }

    void ST_ParameterVal::set_string(const XSD::string_& _string)
    {    
    clear_ST_DiagramHorizontalAlignment();
    clear_ST_VerticalAlignment();
    clear_ST_ChildDirection();
    clear_ST_ChildAlignment();
    clear_ST_SecondaryChildAlignment();
    clear_ST_LinearDirection();
    clear_ST_SecondaryLinearDirection();
    clear_ST_StartingElement();
    clear_ST_BendPoint();
    clear_ST_ConnectorRouting();
    clear_ST_ArrowheadStyle();
    clear_ST_ConnectorDimension();
    clear_ST_RotationPath();
    clear_ST_CenterShapeMapping();
    clear_ST_NodeHorizontalAlignment();
    clear_ST_NodeVerticalAlignment();
    clear_ST_FallbackDimension();
    clear_ST_TextDirection();
    clear_ST_PyramidAccentPosition();
    clear_ST_PyramidAccentTextMargin();
    clear_ST_TextBlockDirection();
    clear_ST_TextAnchorHorizontal();
    clear_ST_TextAnchorVertical();
    clear_ST_DiagramTextAlignment();
    clear_ST_AutoTextRotation();
    clear_ST_GrowDirection();
    clear_ST_FlowDirection();
    clear_ST_ContinueDirection();
    clear_ST_Breakpoint();
    clear_ST_Offset();
    clear_ST_HierarchyAlignment();
    clear_int();
    clear_double();
    clear_boolean();
    clear_ST_ConnectorPoint();
    m_has_string = true;
    m_string = _string;
    }

    const XSD::string_& ST_ParameterVal::get_string() const
    {    
    return m_string;
    }

    void ST_ParameterVal::clear_string()
    {    
    m_has_string = false;
    m_string = "";
    }

    bool ST_ParameterVal::has_ST_ConnectorPoint() const
    {    
    return m_has_ST_ConnectorPoint;
    }

    ST_ConnectorPoint* ST_ParameterVal::mutable_ST_ConnectorPoint()
    {    
    clear_ST_DiagramHorizontalAlignment();
    clear_ST_VerticalAlignment();
    clear_ST_ChildDirection();
    clear_ST_ChildAlignment();
    clear_ST_SecondaryChildAlignment();
    clear_ST_LinearDirection();
    clear_ST_SecondaryLinearDirection();
    clear_ST_StartingElement();
    clear_ST_BendPoint();
    clear_ST_ConnectorRouting();
    clear_ST_ArrowheadStyle();
    clear_ST_ConnectorDimension();
    clear_ST_RotationPath();
    clear_ST_CenterShapeMapping();
    clear_ST_NodeHorizontalAlignment();
    clear_ST_NodeVerticalAlignment();
    clear_ST_FallbackDimension();
    clear_ST_TextDirection();
    clear_ST_PyramidAccentPosition();
    clear_ST_PyramidAccentTextMargin();
    clear_ST_TextBlockDirection();
    clear_ST_TextAnchorHorizontal();
    clear_ST_TextAnchorVertical();
    clear_ST_DiagramTextAlignment();
    clear_ST_AutoTextRotation();
    clear_ST_GrowDirection();
    clear_ST_FlowDirection();
    clear_ST_ContinueDirection();
    clear_ST_Breakpoint();
    clear_ST_Offset();
    clear_ST_HierarchyAlignment();
    clear_int();
    clear_double();
    clear_boolean();
    clear_string();
    m_has_ST_ConnectorPoint = true;
    if (!m_ST_ConnectorPoint)
    {
        m_ST_ConnectorPoint = new ST_ConnectorPoint();
    }
    return m_ST_ConnectorPoint;
    }

    const ST_ConnectorPoint& ST_ParameterVal::get_ST_ConnectorPoint() const
    {    
    if (m_ST_ConnectorPoint)
    {
        return *m_ST_ConnectorPoint;
    }
    return ST_ConnectorPoint::default_instance();
    }

    void ST_ParameterVal::clear_ST_ConnectorPoint()
    {    
    m_has_ST_ConnectorPoint = false;
    if (m_ST_ConnectorPoint)
    {
        delete m_ST_ConnectorPoint;
        m_ST_ConnectorPoint = NULL;
    }
    }

    std::string ST_ParameterVal::toString() const
    {    
    if (m_has_ST_DiagramHorizontalAlignment)
    {
        return m_ST_DiagramHorizontalAlignment->toString();
    }
    
    if (m_has_ST_VerticalAlignment)
    {
        return m_ST_VerticalAlignment->toString();
    }
    
    if (m_has_ST_ChildDirection)
    {
        return m_ST_ChildDirection->toString();
    }
    
    if (m_has_ST_ChildAlignment)
    {
        return m_ST_ChildAlignment->toString();
    }
    
    if (m_has_ST_SecondaryChildAlignment)
    {
        return m_ST_SecondaryChildAlignment->toString();
    }
    
    if (m_has_ST_LinearDirection)
    {
        return m_ST_LinearDirection->toString();
    }
    
    if (m_has_ST_SecondaryLinearDirection)
    {
        return m_ST_SecondaryLinearDirection->toString();
    }
    
    if (m_has_ST_StartingElement)
    {
        return m_ST_StartingElement->toString();
    }
    
    if (m_has_ST_BendPoint)
    {
        return m_ST_BendPoint->toString();
    }
    
    if (m_has_ST_ConnectorRouting)
    {
        return m_ST_ConnectorRouting->toString();
    }
    
    if (m_has_ST_ArrowheadStyle)
    {
        return m_ST_ArrowheadStyle->toString();
    }
    
    if (m_has_ST_ConnectorDimension)
    {
        return m_ST_ConnectorDimension->toString();
    }
    
    if (m_has_ST_RotationPath)
    {
        return m_ST_RotationPath->toString();
    }
    
    if (m_has_ST_CenterShapeMapping)
    {
        return m_ST_CenterShapeMapping->toString();
    }
    
    if (m_has_ST_NodeHorizontalAlignment)
    {
        return m_ST_NodeHorizontalAlignment->toString();
    }
    
    if (m_has_ST_NodeVerticalAlignment)
    {
        return m_ST_NodeVerticalAlignment->toString();
    }
    
    if (m_has_ST_FallbackDimension)
    {
        return m_ST_FallbackDimension->toString();
    }
    
    if (m_has_ST_TextDirection)
    {
        return m_ST_TextDirection->toString();
    }
    
    if (m_has_ST_PyramidAccentPosition)
    {
        return m_ST_PyramidAccentPosition->toString();
    }
    
    if (m_has_ST_PyramidAccentTextMargin)
    {
        return m_ST_PyramidAccentTextMargin->toString();
    }
    
    if (m_has_ST_TextBlockDirection)
    {
        return m_ST_TextBlockDirection->toString();
    }
    
    if (m_has_ST_TextAnchorHorizontal)
    {
        return m_ST_TextAnchorHorizontal->toString();
    }
    
    if (m_has_ST_TextAnchorVertical)
    {
        return m_ST_TextAnchorVertical->toString();
    }
    
    if (m_has_ST_DiagramTextAlignment)
    {
        return m_ST_DiagramTextAlignment->toString();
    }
    
    if (m_has_ST_AutoTextRotation)
    {
        return m_ST_AutoTextRotation->toString();
    }
    
    if (m_has_ST_GrowDirection)
    {
        return m_ST_GrowDirection->toString();
    }
    
    if (m_has_ST_FlowDirection)
    {
        return m_ST_FlowDirection->toString();
    }
    
    if (m_has_ST_ContinueDirection)
    {
        return m_ST_ContinueDirection->toString();
    }
    
    if (m_has_ST_Breakpoint)
    {
        return m_ST_Breakpoint->toString();
    }
    
    if (m_has_ST_Offset)
    {
        return m_ST_Offset->toString();
    }
    
    if (m_has_ST_HierarchyAlignment)
    {
        return m_ST_HierarchyAlignment->toString();
    }
    
    if (m_has_int)
    {
        
    std::stringstream strStream;
    strStream << m_int;
    return strStream.str();
    
    }
    
    if (m_has_double)
    {
        
    std::stringstream strStream;
    strStream << m_double;
    return strStream.str();
    
    }
    
    if (m_has_boolean)
    {
        return XSD::XMLBooleanStr(m_boolean);
    }
    
    if (m_has_string)
    {
        
    std::stringstream strStream;
    strStream << m_string;
    return strStream.str();
    
    }
    
    if (m_has_ST_ConnectorPoint)
    {
        return m_ST_ConnectorPoint->toString();
    }
    
    return string();
    }

    void ST_ParameterVal::clear()
    {    clear_ST_DiagramHorizontalAlignment();
    clear_ST_VerticalAlignment();
    clear_ST_ChildDirection();
    clear_ST_ChildAlignment();
    clear_ST_SecondaryChildAlignment();
    clear_ST_LinearDirection();
    clear_ST_SecondaryLinearDirection();
    clear_ST_StartingElement();
    clear_ST_BendPoint();
    clear_ST_ConnectorRouting();
    clear_ST_ArrowheadStyle();
    clear_ST_ConnectorDimension();
    clear_ST_RotationPath();
    clear_ST_CenterShapeMapping();
    clear_ST_NodeHorizontalAlignment();
    clear_ST_NodeVerticalAlignment();
    clear_ST_FallbackDimension();
    clear_ST_TextDirection();
    clear_ST_PyramidAccentPosition();
    clear_ST_PyramidAccentTextMargin();
    clear_ST_TextBlockDirection();
    clear_ST_TextAnchorHorizontal();
    clear_ST_TextAnchorVertical();
    clear_ST_DiagramTextAlignment();
    clear_ST_AutoTextRotation();
    clear_ST_GrowDirection();
    clear_ST_FlowDirection();
    clear_ST_ContinueDirection();
    clear_ST_Breakpoint();
    clear_ST_Offset();
    clear_ST_HierarchyAlignment();
    clear_int();
    clear_double();
    clear_boolean();
    clear_string();
    clear_ST_ConnectorPoint();    }

    void ST_ParameterVal::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_ST_DiagramHorizontalAlignment)
    {
        m_ST_DiagramHorizontalAlignment->toXmlAttr(_attrName, _outStream);
        return;
    }
    
    if (m_has_ST_VerticalAlignment)
    {
        m_ST_VerticalAlignment->toXmlAttr(_attrName, _outStream);
        return;
    }
    
    if (m_has_ST_ChildDirection)
    {
        m_ST_ChildDirection->toXmlAttr(_attrName, _outStream);
        return;
    }
    
    if (m_has_ST_ChildAlignment)
    {
        m_ST_ChildAlignment->toXmlAttr(_attrName, _outStream);
        return;
    }
    
    if (m_has_ST_SecondaryChildAlignment)
    {
        m_ST_SecondaryChildAlignment->toXmlAttr(_attrName, _outStream);
        return;
    }
    
    if (m_has_ST_LinearDirection)
    {
        m_ST_LinearDirection->toXmlAttr(_attrName, _outStream);
        return;
    }
    
    if (m_has_ST_SecondaryLinearDirection)
    {
        m_ST_SecondaryLinearDirection->toXmlAttr(_attrName, _outStream);
        return;
    }
    
    if (m_has_ST_StartingElement)
    {
        m_ST_StartingElement->toXmlAttr(_attrName, _outStream);
        return;
    }
    
    if (m_has_ST_BendPoint)
    {
        m_ST_BendPoint->toXmlAttr(_attrName, _outStream);
        return;
    }
    
    if (m_has_ST_ConnectorRouting)
    {
        m_ST_ConnectorRouting->toXmlAttr(_attrName, _outStream);
        return;
    }
    
    if (m_has_ST_ArrowheadStyle)
    {
        m_ST_ArrowheadStyle->toXmlAttr(_attrName, _outStream);
        return;
    }
    
    if (m_has_ST_ConnectorDimension)
    {
        m_ST_ConnectorDimension->toXmlAttr(_attrName, _outStream);
        return;
    }
    
    if (m_has_ST_RotationPath)
    {
        m_ST_RotationPath->toXmlAttr(_attrName, _outStream);
        return;
    }
    
    if (m_has_ST_CenterShapeMapping)
    {
        m_ST_CenterShapeMapping->toXmlAttr(_attrName, _outStream);
        return;
    }
    
    if (m_has_ST_NodeHorizontalAlignment)
    {
        m_ST_NodeHorizontalAlignment->toXmlAttr(_attrName, _outStream);
        return;
    }
    
    if (m_has_ST_NodeVerticalAlignment)
    {
        m_ST_NodeVerticalAlignment->toXmlAttr(_attrName, _outStream);
        return;
    }
    
    if (m_has_ST_FallbackDimension)
    {
        m_ST_FallbackDimension->toXmlAttr(_attrName, _outStream);
        return;
    }
    
    if (m_has_ST_TextDirection)
    {
        m_ST_TextDirection->toXmlAttr(_attrName, _outStream);
        return;
    }
    
    if (m_has_ST_PyramidAccentPosition)
    {
        m_ST_PyramidAccentPosition->toXmlAttr(_attrName, _outStream);
        return;
    }
    
    if (m_has_ST_PyramidAccentTextMargin)
    {
        m_ST_PyramidAccentTextMargin->toXmlAttr(_attrName, _outStream);
        return;
    }
    
    if (m_has_ST_TextBlockDirection)
    {
        m_ST_TextBlockDirection->toXmlAttr(_attrName, _outStream);
        return;
    }
    
    if (m_has_ST_TextAnchorHorizontal)
    {
        m_ST_TextAnchorHorizontal->toXmlAttr(_attrName, _outStream);
        return;
    }
    
    if (m_has_ST_TextAnchorVertical)
    {
        m_ST_TextAnchorVertical->toXmlAttr(_attrName, _outStream);
        return;
    }
    
    if (m_has_ST_DiagramTextAlignment)
    {
        m_ST_DiagramTextAlignment->toXmlAttr(_attrName, _outStream);
        return;
    }
    
    if (m_has_ST_AutoTextRotation)
    {
        m_ST_AutoTextRotation->toXmlAttr(_attrName, _outStream);
        return;
    }
    
    if (m_has_ST_GrowDirection)
    {
        m_ST_GrowDirection->toXmlAttr(_attrName, _outStream);
        return;
    }
    
    if (m_has_ST_FlowDirection)
    {
        m_ST_FlowDirection->toXmlAttr(_attrName, _outStream);
        return;
    }
    
    if (m_has_ST_ContinueDirection)
    {
        m_ST_ContinueDirection->toXmlAttr(_attrName, _outStream);
        return;
    }
    
    if (m_has_ST_Breakpoint)
    {
        m_ST_Breakpoint->toXmlAttr(_attrName, _outStream);
        return;
    }
    
    if (m_has_ST_Offset)
    {
        m_ST_Offset->toXmlAttr(_attrName, _outStream);
        return;
    }
    
    if (m_has_ST_HierarchyAlignment)
    {
        m_ST_HierarchyAlignment->toXmlAttr(_attrName, _outStream);
        return;
    }
    
    if (m_has_int)
    {
        _outStream << " " << _attrName << "=\"" << m_int << "\"";
        return;
    }
    
    if (m_has_double)
    {
        _outStream << " " << _attrName << "=\"" << m_double << "\"";
        return;
    }
    
    if (m_has_boolean)
    {
        _outStream << " " << _attrName << "=\"" << XSD::XMLBooleanStr(m_boolean) << "\"";
        return;
    }
    
    if (m_has_string)
    {
        _outStream << " " << _attrName << "=\"" << m_string << "\"";
        return;
    }
    
    if (m_has_ST_ConnectorPoint)
    {
        m_ST_ConnectorPoint->toXmlAttr(_attrName, _outStream);
        return;
    }
    }

    const ST_ParameterVal& ST_ParameterVal::default_instance()
    {    
    if (!ST_ParameterVal::default_instance_)
    {
        ST_ParameterVal::default_instance_ = new ST_ParameterVal();
    }
    return *ST_ParameterVal::default_instance_;
    }

ST_ParameterVal* ST_ParameterVal::default_instance_ = NULL;

    // ST_ModelId
    ST_ModelId::ST_ModelId()
    :m_has_int(false),
    m_int(0),
    m_has_ST_Guid(false),
    m_ST_Guid(NULL)
    {
    }
    ST_ModelId::~ST_ModelId()
{
    clear();    }
    bool ST_ModelId::has_int() const
    {    
    return m_has_int;
    }

    void ST_ModelId::set_int(const XSD::int_& _int)
    {    
    clear_ST_Guid();
    m_has_int = true;
    m_int = _int;
    }

    const XSD::int_& ST_ModelId::get_int() const
    {    
    return m_int;
    }

    void ST_ModelId::clear_int()
    {    
    m_has_int = false;
    m_int = 0;
    }

    bool ST_ModelId::has_ST_Guid() const
    {    
    return m_has_ST_Guid;
    }

    ns_s::ST_Guid* ST_ModelId::mutable_ST_Guid()
    {    
    clear_int();
    m_has_ST_Guid = true;
    if (!m_ST_Guid)
    {
        m_ST_Guid = new ns_s::ST_Guid();
    }
    return m_ST_Guid;
    }

    const ns_s::ST_Guid& ST_ModelId::get_ST_Guid() const
    {    
    if (m_ST_Guid)
    {
        return *m_ST_Guid;
    }
    return ns_s::ST_Guid::default_instance();
    }

    void ST_ModelId::clear_ST_Guid()
    {    
    m_has_ST_Guid = false;
    if (m_ST_Guid)
    {
        delete m_ST_Guid;
        m_ST_Guid = NULL;
    }
    }

    std::string ST_ModelId::toString() const
    {    
    if (m_has_int)
    {
        
    std::stringstream strStream;
    strStream << m_int;
    return strStream.str();
    
    }
    
    if (m_has_ST_Guid)
    {
        return m_ST_Guid->toString();
    }
    
    return string();
    }

    void ST_ModelId::clear()
    {    clear_int();
    clear_ST_Guid();    }

    void ST_ModelId::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_int)
    {
        _outStream << " " << _attrName << "=\"" << m_int << "\"";
        return;
    }
    
    if (m_has_ST_Guid)
    {
        m_ST_Guid->toXmlAttr(_attrName, _outStream);
        return;
    }
    }

    const ST_ModelId& ST_ModelId::default_instance()
    {    
    if (!ST_ModelId::default_instance_)
    {
        ST_ModelId::default_instance_ = new ST_ModelId();
    }
    return *ST_ModelId::default_instance_;
    }

ST_ModelId* ST_ModelId::default_instance_ = NULL;

    // ST_PrSetCustVal
    ST_PrSetCustVal::ST_PrSetCustVal()
    :m_has_ST_Percentage(false),
    m_ST_Percentage(NULL),
    m_has_int(false),
    m_int(0)
    {
    }
    ST_PrSetCustVal::~ST_PrSetCustVal()
{
    clear();    }
    bool ST_PrSetCustVal::has_ST_Percentage() const
    {    
    return m_has_ST_Percentage;
    }

    ns_s::ST_Percentage* ST_PrSetCustVal::mutable_ST_Percentage()
    {    
    clear_int();
    m_has_ST_Percentage = true;
    if (!m_ST_Percentage)
    {
        m_ST_Percentage = new ns_s::ST_Percentage();
    }
    return m_ST_Percentage;
    }

    const ns_s::ST_Percentage& ST_PrSetCustVal::get_ST_Percentage() const
    {    
    if (m_ST_Percentage)
    {
        return *m_ST_Percentage;
    }
    return ns_s::ST_Percentage::default_instance();
    }

    void ST_PrSetCustVal::clear_ST_Percentage()
    {    
    m_has_ST_Percentage = false;
    if (m_ST_Percentage)
    {
        delete m_ST_Percentage;
        m_ST_Percentage = NULL;
    }
    }

    bool ST_PrSetCustVal::has_int() const
    {    
    return m_has_int;
    }

    void ST_PrSetCustVal::set_int(const XSD::int_& _int)
    {    
    clear_ST_Percentage();
    m_has_int = true;
    m_int = _int;
    }

    const XSD::int_& ST_PrSetCustVal::get_int() const
    {    
    return m_int;
    }

    void ST_PrSetCustVal::clear_int()
    {    
    m_has_int = false;
    m_int = 0;
    }

    std::string ST_PrSetCustVal::toString() const
    {    
    if (m_has_ST_Percentage)
    {
        return m_ST_Percentage->toString();
    }
    
    if (m_has_int)
    {
        
    std::stringstream strStream;
    strStream << m_int;
    return strStream.str();
    
    }
    
    return string();
    }

    void ST_PrSetCustVal::clear()
    {    clear_ST_Percentage();
    clear_int();    }

    void ST_PrSetCustVal::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_ST_Percentage)
    {
        m_ST_Percentage->toXmlAttr(_attrName, _outStream);
        return;
    }
    
    if (m_has_int)
    {
        _outStream << " " << _attrName << "=\"" << m_int << "\"";
        return;
    }
    }

    const ST_PrSetCustVal& ST_PrSetCustVal::default_instance()
    {    
    if (!ST_PrSetCustVal::default_instance_)
    {
        ST_PrSetCustVal::default_instance_ = new ST_PrSetCustVal();
    }
    return *ST_PrSetCustVal::default_instance_;
    }

ST_PrSetCustVal* ST_PrSetCustVal::default_instance_ = NULL;

    // ST_Direction
    ST_Direction::ST_Direction()
    :m_has_type(false)
    {
    }
    ST_Direction::ST_Direction(const ST_Direction::Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
    }
    ST_Direction::~ST_Direction()
{
    clear();    }
    bool ST_Direction::has_type() const
    {    
    return m_has_type;
    }

    void ST_Direction::set_type(const ST_Direction::Type& _type)
    {    
    m_has_type = true;
    m_type = _type;
    }

    const ST_Direction::Type& ST_Direction::get_type() const
    {    
                return m_type;
                }

    std::string ST_Direction::toString() const
    {    
    return ST_Direction::TypeStrList[m_type];
    }

    void ST_Direction::clear()
    {    
    m_has_type = false;
    }

    void ST_Direction::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_type)
    {
    _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_Direction& ST_Direction::default_instance()
    {    
    if (!ST_Direction::default_instance_)
    {
        ST_Direction::default_instance_ = new ST_Direction();
    }
    return *ST_Direction::default_instance_;
    }

    const std::string ST_Direction::TypeStrList[] =
    {
        "norm",
        "rev"
    };
ST_Direction* ST_Direction::default_instance_ = NULL;

    // ST_HierBranchStyle
    ST_HierBranchStyle::ST_HierBranchStyle()
    :m_has_type(false)
    {
    }
    ST_HierBranchStyle::ST_HierBranchStyle(const ST_HierBranchStyle::Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
    }
    ST_HierBranchStyle::~ST_HierBranchStyle()
{
    clear();    }
    bool ST_HierBranchStyle::has_type() const
    {    
    return m_has_type;
    }

    void ST_HierBranchStyle::set_type(const ST_HierBranchStyle::Type& _type)
    {    
    m_has_type = true;
    m_type = _type;
    }

    const ST_HierBranchStyle::Type& ST_HierBranchStyle::get_type() const
    {    
                return m_type;
                }

    std::string ST_HierBranchStyle::toString() const
    {    
    return ST_HierBranchStyle::TypeStrList[m_type];
    }

    void ST_HierBranchStyle::clear()
    {    
    m_has_type = false;
    }

    void ST_HierBranchStyle::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_type)
    {
    _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_HierBranchStyle& ST_HierBranchStyle::default_instance()
    {    
    if (!ST_HierBranchStyle::default_instance_)
    {
        ST_HierBranchStyle::default_instance_ = new ST_HierBranchStyle();
    }
    return *ST_HierBranchStyle::default_instance_;
    }

    const std::string ST_HierBranchStyle::TypeStrList[] =
    {
        "l",
        "r",
        "hang",
        "std",
        "init"
    };
ST_HierBranchStyle* ST_HierBranchStyle::default_instance_ = NULL;

    // ST_AnimOneStr
    ST_AnimOneStr::ST_AnimOneStr()
    :m_has_type(false)
    {
    }
    ST_AnimOneStr::ST_AnimOneStr(const ST_AnimOneStr::Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
    }
    ST_AnimOneStr::~ST_AnimOneStr()
{
    clear();    }
    bool ST_AnimOneStr::has_type() const
    {    
    return m_has_type;
    }

    void ST_AnimOneStr::set_type(const ST_AnimOneStr::Type& _type)
    {    
    m_has_type = true;
    m_type = _type;
    }

    const ST_AnimOneStr::Type& ST_AnimOneStr::get_type() const
    {    
                return m_type;
                }

    std::string ST_AnimOneStr::toString() const
    {    
    return ST_AnimOneStr::TypeStrList[m_type];
    }

    void ST_AnimOneStr::clear()
    {    
    m_has_type = false;
    }

    void ST_AnimOneStr::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_type)
    {
    _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_AnimOneStr& ST_AnimOneStr::default_instance()
    {    
    if (!ST_AnimOneStr::default_instance_)
    {
        ST_AnimOneStr::default_instance_ = new ST_AnimOneStr();
    }
    return *ST_AnimOneStr::default_instance_;
    }

    const std::string ST_AnimOneStr::TypeStrList[] =
    {
        "none",
        "one",
        "branch"
    };
ST_AnimOneStr* ST_AnimOneStr::default_instance_ = NULL;

    // ST_AnimLvlStr
    ST_AnimLvlStr::ST_AnimLvlStr()
    :m_has_type(false)
    {
    }
    ST_AnimLvlStr::ST_AnimLvlStr(const ST_AnimLvlStr::Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
    }
    ST_AnimLvlStr::~ST_AnimLvlStr()
{
    clear();    }
    bool ST_AnimLvlStr::has_type() const
    {    
    return m_has_type;
    }

    void ST_AnimLvlStr::set_type(const ST_AnimLvlStr::Type& _type)
    {    
    m_has_type = true;
    m_type = _type;
    }

    const ST_AnimLvlStr::Type& ST_AnimLvlStr::get_type() const
    {    
                return m_type;
                }

    std::string ST_AnimLvlStr::toString() const
    {    
    return ST_AnimLvlStr::TypeStrList[m_type];
    }

    void ST_AnimLvlStr::clear()
    {    
    m_has_type = false;
    }

    void ST_AnimLvlStr::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_type)
    {
    _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_AnimLvlStr& ST_AnimLvlStr::default_instance()
    {    
    if (!ST_AnimLvlStr::default_instance_)
    {
        ST_AnimLvlStr::default_instance_ = new ST_AnimLvlStr();
    }
    return *ST_AnimLvlStr::default_instance_;
    }

    const std::string ST_AnimLvlStr::TypeStrList[] =
    {
        "none",
        "lvl",
        "ctr"
    };
ST_AnimLvlStr* ST_AnimLvlStr::default_instance_ = NULL;

    // ST_NodeCount
    ST_NodeCount::ST_NodeCount()
    :m_has_int(false),
    m_int(0)
    {
    }
    ST_NodeCount::ST_NodeCount(const XSD::int_& _int)
    :m_has_int(true)
    {
    
    set_int(_int);
    }
    ST_NodeCount::~ST_NodeCount()
{
    clear();    }
    bool ST_NodeCount::has_int() const
    {    
    return m_has_int;
    }

    void ST_NodeCount::set_int(const XSD::int_& _int)
    {    assert(-1 <= _int);
    
    m_has_int = true;
    m_int = _int;
    }

    const XSD::int_& ST_NodeCount::get_int() const
    {    
    return m_int;
    }

    void ST_NodeCount::clear()
    {    
    m_has_int = false;
    m_int = 0;;
    }

    void ST_NodeCount::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_int)
    {
        _outStream << " " << _attrName << "=\"" << m_int << "\"";;
    }
    }

    const ST_NodeCount& ST_NodeCount::default_instance()
    {    
    if (!ST_NodeCount::default_instance_)
    {
        ST_NodeCount::default_instance_ = new ST_NodeCount();
    }
    return *ST_NodeCount::default_instance_;
    }

    std::string ST_NodeCount::toString() const
    {    
    std::stringstream strStream;
    strStream << get_int();
    return strStream.str();
    }

ST_NodeCount* ST_NodeCount::default_instance_ = NULL;

    // ST_ResizeHandlesStr
    ST_ResizeHandlesStr::ST_ResizeHandlesStr()
    :m_has_type(false)
    {
    }
    ST_ResizeHandlesStr::ST_ResizeHandlesStr(const ST_ResizeHandlesStr::Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
    }
    ST_ResizeHandlesStr::~ST_ResizeHandlesStr()
{
    clear();    }
    bool ST_ResizeHandlesStr::has_type() const
    {    
    return m_has_type;
    }

    void ST_ResizeHandlesStr::set_type(const ST_ResizeHandlesStr::Type& _type)
    {    
    m_has_type = true;
    m_type = _type;
    }

    const ST_ResizeHandlesStr::Type& ST_ResizeHandlesStr::get_type() const
    {    
                return m_type;
                }

    std::string ST_ResizeHandlesStr::toString() const
    {    
    return ST_ResizeHandlesStr::TypeStrList[m_type];
    }

    void ST_ResizeHandlesStr::clear()
    {    
    m_has_type = false;
    }

    void ST_ResizeHandlesStr::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_type)
    {
    _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_ResizeHandlesStr& ST_ResizeHandlesStr::default_instance()
    {    
    if (!ST_ResizeHandlesStr::default_instance_)
    {
        ST_ResizeHandlesStr::default_instance_ = new ST_ResizeHandlesStr();
    }
    return *ST_ResizeHandlesStr::default_instance_;
    }

    const std::string ST_ResizeHandlesStr::TypeStrList[] =
    {
        "exact",
        "rel"
    };
ST_ResizeHandlesStr* ST_ResizeHandlesStr::default_instance_ = NULL;

    // ST_AlgorithmType
    ST_AlgorithmType::ST_AlgorithmType()
    :m_has_type(false)
    {
    }
    ST_AlgorithmType::ST_AlgorithmType(const ST_AlgorithmType::Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
    }
    ST_AlgorithmType::~ST_AlgorithmType()
{
    clear();    }
    bool ST_AlgorithmType::has_type() const
    {    
    return m_has_type;
    }

    void ST_AlgorithmType::set_type(const ST_AlgorithmType::Type& _type)
    {    
    m_has_type = true;
    m_type = _type;
    }

    const ST_AlgorithmType::Type& ST_AlgorithmType::get_type() const
    {    
                return m_type;
                }

    std::string ST_AlgorithmType::toString() const
    {    
    return ST_AlgorithmType::TypeStrList[m_type];
    }

    void ST_AlgorithmType::clear()
    {    
    m_has_type = false;
    }

    void ST_AlgorithmType::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_type)
    {
    _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_AlgorithmType& ST_AlgorithmType::default_instance()
    {    
    if (!ST_AlgorithmType::default_instance_)
    {
        ST_AlgorithmType::default_instance_ = new ST_AlgorithmType();
    }
    return *ST_AlgorithmType::default_instance_;
    }

    const std::string ST_AlgorithmType::TypeStrList[] =
    {
        "composite",
        "conn",
        "cycle",
        "hierChild",
        "hierRoot",
        "pyra",
        "lin",
        "sp",
        "tx",
        "snake"
    };
ST_AlgorithmType* ST_AlgorithmType::default_instance_ = NULL;

    // ST_AxisType
    ST_AxisType::ST_AxisType()
    :m_has_type(false)
    {
    }
    ST_AxisType::ST_AxisType(const ST_AxisType::Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
    }
    ST_AxisType::~ST_AxisType()
{
    clear();    }
    bool ST_AxisType::has_type() const
    {    
    return m_has_type;
    }

    void ST_AxisType::set_type(const ST_AxisType::Type& _type)
    {    
    m_has_type = true;
    m_type = _type;
    }

    const ST_AxisType::Type& ST_AxisType::get_type() const
    {    
                return m_type;
                }

    std::string ST_AxisType::toString() const
    {    
    return ST_AxisType::TypeStrList[m_type];
    }

    void ST_AxisType::clear()
    {    
    m_has_type = false;
    }

    void ST_AxisType::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_type)
    {
    _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_AxisType& ST_AxisType::default_instance()
    {    
    if (!ST_AxisType::default_instance_)
    {
        ST_AxisType::default_instance_ = new ST_AxisType();
    }
    return *ST_AxisType::default_instance_;
    }

    const std::string ST_AxisType::TypeStrList[] =
    {
        "self",
        "ch",
        "des",
        "desOrSelf",
        "par",
        "ancst",
        "ancstOrSelf",
        "followSib",
        "precedSib",
        "follow",
        "preced",
        "root",
        "none"
    };
ST_AxisType* ST_AxisType::default_instance_ = NULL;

    // ST_AxisTypes
    ST_AxisTypes::~ST_AxisTypes()
{
    clear();    }
    bool ST_AxisTypes::has_ST_AxisType_list() const
    {    
    return m_has_ST_AxisType_list;
    }

    ST_AxisType* ST_AxisTypes::add_ST_AxisType()
    {    
    m_has_ST_AxisType_list = true;
    ST_AxisType *pChild = new ST_AxisType();
    m_ST_AxisType_list.push_back(pChild);
    return pChild;
    }

    const vector<ST_AxisType*>& ST_AxisTypes::get_ST_AxisType_list() const
    {    
    return m_ST_AxisType_list;
    }

    void ST_AxisTypes::clear()
    {    
    m_has_ST_AxisType_list = false;
    vector<ST_AxisType*>::iterator iter = m_ST_AxisType_list.begin();
    for (; iter != m_ST_AxisType_list.end(); ++iter)
    {
        delete *iter;
    }
    m_ST_AxisType_list.clear();
    }

    std::string ST_AxisTypes::toString() const
    {    
    stringstream strStream;
    const size_t vectorSize = m_ST_AxisType_list.size();
    for(size_t i = 0; i < vectorSize; ++i)
    {
        if (i != 0)
        {
            strStream << ' ';
        }
        strStream << m_ST_AxisType_list[i]->toString();
    }
    return strStream.str();
    }

    void ST_AxisTypes::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_ST_AxisType_list)
    {
        _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_AxisTypes& ST_AxisTypes::default_instance()
    {    
    if (!ST_AxisTypes::default_instance_)
    {
        ST_AxisTypes::default_instance_ = new ST_AxisTypes();
    }
    return *ST_AxisTypes::default_instance_;
    }

ST_AxisTypes* ST_AxisTypes::default_instance_ = NULL;

    // ST_BoolOperator
    ST_BoolOperator::ST_BoolOperator()
    :m_has_type(false)
    {
    }
    ST_BoolOperator::ST_BoolOperator(const ST_BoolOperator::Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
    }
    ST_BoolOperator::~ST_BoolOperator()
{
    clear();    }
    bool ST_BoolOperator::has_type() const
    {    
    return m_has_type;
    }

    void ST_BoolOperator::set_type(const ST_BoolOperator::Type& _type)
    {    
    m_has_type = true;
    m_type = _type;
    }

    const ST_BoolOperator::Type& ST_BoolOperator::get_type() const
    {    
                return m_type;
                }

    std::string ST_BoolOperator::toString() const
    {    
    return ST_BoolOperator::TypeStrList[m_type];
    }

    void ST_BoolOperator::clear()
    {    
    m_has_type = false;
    }

    void ST_BoolOperator::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_type)
    {
    _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_BoolOperator& ST_BoolOperator::default_instance()
    {    
    if (!ST_BoolOperator::default_instance_)
    {
        ST_BoolOperator::default_instance_ = new ST_BoolOperator();
    }
    return *ST_BoolOperator::default_instance_;
    }

    const std::string ST_BoolOperator::TypeStrList[] =
    {
        "none",
        "equ",
        "gte",
        "lte"
    };
ST_BoolOperator* ST_BoolOperator::default_instance_ = NULL;

    // ST_ChildOrderType
    ST_ChildOrderType::ST_ChildOrderType()
    :m_has_type(false)
    {
    }
    ST_ChildOrderType::ST_ChildOrderType(const ST_ChildOrderType::Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
    }
    ST_ChildOrderType::~ST_ChildOrderType()
{
    clear();    }
    bool ST_ChildOrderType::has_type() const
    {    
    return m_has_type;
    }

    void ST_ChildOrderType::set_type(const ST_ChildOrderType::Type& _type)
    {    
    m_has_type = true;
    m_type = _type;
    }

    const ST_ChildOrderType::Type& ST_ChildOrderType::get_type() const
    {    
                return m_type;
                }

    std::string ST_ChildOrderType::toString() const
    {    
    return ST_ChildOrderType::TypeStrList[m_type];
    }

    void ST_ChildOrderType::clear()
    {    
    m_has_type = false;
    }

    void ST_ChildOrderType::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_type)
    {
    _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_ChildOrderType& ST_ChildOrderType::default_instance()
    {    
    if (!ST_ChildOrderType::default_instance_)
    {
        ST_ChildOrderType::default_instance_ = new ST_ChildOrderType();
    }
    return *ST_ChildOrderType::default_instance_;
    }

    const std::string ST_ChildOrderType::TypeStrList[] =
    {
        "b",
        "t"
    };
ST_ChildOrderType* ST_ChildOrderType::default_instance_ = NULL;

    // ST_ConstraintType
    ST_ConstraintType::ST_ConstraintType()
    :m_has_type(false)
    {
    }
    ST_ConstraintType::ST_ConstraintType(const ST_ConstraintType::Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
    }
    ST_ConstraintType::~ST_ConstraintType()
{
    clear();    }
    bool ST_ConstraintType::has_type() const
    {    
    return m_has_type;
    }

    void ST_ConstraintType::set_type(const ST_ConstraintType::Type& _type)
    {    
    m_has_type = true;
    m_type = _type;
    }

    const ST_ConstraintType::Type& ST_ConstraintType::get_type() const
    {    
                return m_type;
                }

    std::string ST_ConstraintType::toString() const
    {    
    return ST_ConstraintType::TypeStrList[m_type];
    }

    void ST_ConstraintType::clear()
    {    
    m_has_type = false;
    }

    void ST_ConstraintType::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_type)
    {
    _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_ConstraintType& ST_ConstraintType::default_instance()
    {    
    if (!ST_ConstraintType::default_instance_)
    {
        ST_ConstraintType::default_instance_ = new ST_ConstraintType();
    }
    return *ST_ConstraintType::default_instance_;
    }

    const std::string ST_ConstraintType::TypeStrList[] =
    {
        "none",
        "alignOff",
        "begMarg",
        "bendDist",
        "begPad",
        "b",
        "bMarg",
        "bOff",
        "ctrX",
        "ctrXOff",
        "ctrY",
        "ctrYOff",
        "connDist",
        "diam",
        "endMarg",
        "endPad",
        "h",
        "hArH",
        "hOff",
        "l",
        "lMarg",
        "lOff",
        "r",
        "rMarg",
        "rOff",
        "primFontSz",
        "pyraAcctRatio",
        "secFontSz",
        "sibSp",
        "secSibSp",
        "sp",
        "stemThick",
        "t",
        "tMarg",
        "tOff",
        "userA",
        "userB",
        "userC",
        "userD",
        "userE",
        "userF",
        "userG",
        "userH",
        "userI",
        "userJ",
        "userK",
        "userL",
        "userM",
        "userN",
        "userO",
        "userP",
        "userQ",
        "userR",
        "userS",
        "userT",
        "userU",
        "userV",
        "userW",
        "userX",
        "userY",
        "userZ",
        "w",
        "wArH",
        "wOff"
    };
ST_ConstraintType* ST_ConstraintType::default_instance_ = NULL;

    // ST_ConstraintRelationship
    ST_ConstraintRelationship::ST_ConstraintRelationship()
    :m_has_type(false)
    {
    }
    ST_ConstraintRelationship::ST_ConstraintRelationship(const ST_ConstraintRelationship::Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
    }
    ST_ConstraintRelationship::~ST_ConstraintRelationship()
{
    clear();    }
    bool ST_ConstraintRelationship::has_type() const
    {    
    return m_has_type;
    }

    void ST_ConstraintRelationship::set_type(const ST_ConstraintRelationship::Type& _type)
    {    
    m_has_type = true;
    m_type = _type;
    }

    const ST_ConstraintRelationship::Type& ST_ConstraintRelationship::get_type() const
    {    
                return m_type;
                }

    std::string ST_ConstraintRelationship::toString() const
    {    
    return ST_ConstraintRelationship::TypeStrList[m_type];
    }

    void ST_ConstraintRelationship::clear()
    {    
    m_has_type = false;
    }

    void ST_ConstraintRelationship::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_type)
    {
    _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_ConstraintRelationship& ST_ConstraintRelationship::default_instance()
    {    
    if (!ST_ConstraintRelationship::default_instance_)
    {
        ST_ConstraintRelationship::default_instance_ = new ST_ConstraintRelationship();
    }
    return *ST_ConstraintRelationship::default_instance_;
    }

    const std::string ST_ConstraintRelationship::TypeStrList[] =
    {
        "self",
        "ch",
        "des"
    };
ST_ConstraintRelationship* ST_ConstraintRelationship::default_instance_ = NULL;

    // ST_ElementType
    ST_ElementType::ST_ElementType()
    :m_has_type(false)
    {
    }
    ST_ElementType::ST_ElementType(const ST_ElementType::Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
    }
    ST_ElementType::~ST_ElementType()
{
    clear();    }
    bool ST_ElementType::has_type() const
    {    
    return m_has_type;
    }

    void ST_ElementType::set_type(const ST_ElementType::Type& _type)
    {    
    m_has_type = true;
    m_type = _type;
    }

    const ST_ElementType::Type& ST_ElementType::get_type() const
    {    
                return m_type;
                }

    std::string ST_ElementType::toString() const
    {    
    return ST_ElementType::TypeStrList[m_type];
    }

    void ST_ElementType::clear()
    {    
    m_has_type = false;
    }

    void ST_ElementType::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_type)
    {
    _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_ElementType& ST_ElementType::default_instance()
    {    
    if (!ST_ElementType::default_instance_)
    {
        ST_ElementType::default_instance_ = new ST_ElementType();
    }
    return *ST_ElementType::default_instance_;
    }

    const std::string ST_ElementType::TypeStrList[] =
    {
        "all",
        "doc",
        "node",
        "norm",
        "nonNorm",
        "asst",
        "nonAsst",
        "parTrans",
        "pres",
        "sibTrans"
    };
ST_ElementType* ST_ElementType::default_instance_ = NULL;

    // ST_ElementTypes
    ST_ElementTypes::~ST_ElementTypes()
{
    clear();    }
    bool ST_ElementTypes::has_ST_ElementType_list() const
    {    
    return m_has_ST_ElementType_list;
    }

    ST_ElementType* ST_ElementTypes::add_ST_ElementType()
    {    
    m_has_ST_ElementType_list = true;
    ST_ElementType *pChild = new ST_ElementType();
    m_ST_ElementType_list.push_back(pChild);
    return pChild;
    }

    const vector<ST_ElementType*>& ST_ElementTypes::get_ST_ElementType_list() const
    {    
    return m_ST_ElementType_list;
    }

    void ST_ElementTypes::clear()
    {    
    m_has_ST_ElementType_list = false;
    vector<ST_ElementType*>::iterator iter = m_ST_ElementType_list.begin();
    for (; iter != m_ST_ElementType_list.end(); ++iter)
    {
        delete *iter;
    }
    m_ST_ElementType_list.clear();
    }

    std::string ST_ElementTypes::toString() const
    {    
    stringstream strStream;
    const size_t vectorSize = m_ST_ElementType_list.size();
    for(size_t i = 0; i < vectorSize; ++i)
    {
        if (i != 0)
        {
            strStream << ' ';
        }
        strStream << m_ST_ElementType_list[i]->toString();
    }
    return strStream.str();
    }

    void ST_ElementTypes::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_ST_ElementType_list)
    {
        _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_ElementTypes& ST_ElementTypes::default_instance()
    {    
    if (!ST_ElementTypes::default_instance_)
    {
        ST_ElementTypes::default_instance_ = new ST_ElementTypes();
    }
    return *ST_ElementTypes::default_instance_;
    }

ST_ElementTypes* ST_ElementTypes::default_instance_ = NULL;

    // ST_ParameterId
    ST_ParameterId::ST_ParameterId()
    :m_has_type(false)
    {
    }
    ST_ParameterId::ST_ParameterId(const ST_ParameterId::Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
    }
    ST_ParameterId::~ST_ParameterId()
{
    clear();    }
    bool ST_ParameterId::has_type() const
    {    
    return m_has_type;
    }

    void ST_ParameterId::set_type(const ST_ParameterId::Type& _type)
    {    
    m_has_type = true;
    m_type = _type;
    }

    const ST_ParameterId::Type& ST_ParameterId::get_type() const
    {    
                return m_type;
                }

    std::string ST_ParameterId::toString() const
    {    
    return ST_ParameterId::TypeStrList[m_type];
    }

    void ST_ParameterId::clear()
    {    
    m_has_type = false;
    }

    void ST_ParameterId::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_type)
    {
    _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_ParameterId& ST_ParameterId::default_instance()
    {    
    if (!ST_ParameterId::default_instance_)
    {
        ST_ParameterId::default_instance_ = new ST_ParameterId();
    }
    return *ST_ParameterId::default_instance_;
    }

    const std::string ST_ParameterId::TypeStrList[] =
    {
        "horzAlign",
        "vertAlign",
        "chDir",
        "chAlign",
        "secChAlign",
        "linDir",
        "secLinDir",
        "stElem",
        "bendPt",
        "connRout",
        "begSty",
        "endSty",
        "dim",
        "rotPath",
        "ctrShpMap",
        "nodeHorzAlign",
        "nodeVertAlign",
        "fallback",
        "txDir",
        "pyraAcctPos",
        "pyraAcctTxMar",
        "txBlDir",
        "txAnchorHorz",
        "txAnchorVert",
        "txAnchorHorzCh",
        "txAnchorVertCh",
        "parTxLTRAlign",
        "parTxRTLAlign",
        "shpTxLTRAlignCh",
        "shpTxRTLAlignCh",
        "autoTxRot",
        "grDir",
        "flowDir",
        "contDir",
        "bkpt",
        "off",
        "hierAlign",
        "bkPtFixedVal",
        "stBulletLvl",
        "stAng",
        "spanAng",
        "ar",
        "lnSpPar",
        "lnSpAfParP",
        "lnSpCh",
        "lnSpAfChP",
        "rtShortDist",
        "alignTx",
        "pyraLvlNode",
        "pyraAcctBkgdNode",
        "pyraAcctTxNode",
        "srcNode",
        "dstNode",
        "begPts",
        "endPts"
    };
ST_ParameterId* ST_ParameterId::default_instance_ = NULL;

    // ST_Ints
    ST_Ints::~ST_Ints()
{
    clear();    }
    bool ST_Ints::has_int_list() const
    {    
    return m_has_int_list;
    }

    void ST_Ints::add_int(const XSD::int_& _int)
    {    
    m_has_int_list = true;
    m_int_list.push_back(_int);
    }

    const vector<XSD::int_>& ST_Ints::get_int_list() const
    {    
    return m_int_list;
    }

    void ST_Ints::clear()
    {    
    m_has_int_list = false;
    m_int_list.clear();
    }

    std::string ST_Ints::toString() const
    {    
    stringstream strStream;
    const size_t vectorSize = m_int_list.size();
    for(size_t i = 0; i < vectorSize; ++i)
    {
        if (i != 0)
        {
            strStream << ' ';
        }
        strStream << m_int_list[i];
    }
    return strStream.str();
    }

    void ST_Ints::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_int_list)
    {
        _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_Ints& ST_Ints::default_instance()
    {    
    if (!ST_Ints::default_instance_)
    {
        ST_Ints::default_instance_ = new ST_Ints();
    }
    return *ST_Ints::default_instance_;
    }

ST_Ints* ST_Ints::default_instance_ = NULL;

    // ST_UnsignedInts
    ST_UnsignedInts::~ST_UnsignedInts()
{
    clear();    }
    bool ST_UnsignedInts::has_unsignedInt_list() const
    {    
    return m_has_unsignedInt_list;
    }

    void ST_UnsignedInts::add_unsignedInt(const XSD::unsignedInt_& _unsignedInt)
    {    
    m_has_unsignedInt_list = true;
    m_unsignedInt_list.push_back(_unsignedInt);
    }

    const vector<XSD::unsignedInt_>& ST_UnsignedInts::get_unsignedInt_list() const
    {    
    return m_unsignedInt_list;
    }

    void ST_UnsignedInts::clear()
    {    
    m_has_unsignedInt_list = false;
    m_unsignedInt_list.clear();
    }

    std::string ST_UnsignedInts::toString() const
    {    
    stringstream strStream;
    const size_t vectorSize = m_unsignedInt_list.size();
    for(size_t i = 0; i < vectorSize; ++i)
    {
        if (i != 0)
        {
            strStream << ' ';
        }
        strStream << m_unsignedInt_list[i];
    }
    return strStream.str();
    }

    void ST_UnsignedInts::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_unsignedInt_list)
    {
        _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_UnsignedInts& ST_UnsignedInts::default_instance()
    {    
    if (!ST_UnsignedInts::default_instance_)
    {
        ST_UnsignedInts::default_instance_ = new ST_UnsignedInts();
    }
    return *ST_UnsignedInts::default_instance_;
    }

ST_UnsignedInts* ST_UnsignedInts::default_instance_ = NULL;

    // ST_Booleans
    ST_Booleans::~ST_Booleans()
{
    clear();    }
    bool ST_Booleans::has_boolean_list() const
    {    
    return m_has_boolean_list;
    }

    void ST_Booleans::add_boolean(const XSD::boolean_& _boolean)
    {    
    m_has_boolean_list = true;
    m_boolean_list.push_back(_boolean);
    }

    const vector<XSD::boolean_>& ST_Booleans::get_boolean_list() const
    {    
    return m_boolean_list;
    }

    void ST_Booleans::clear()
    {    
    m_has_boolean_list = false;
    m_boolean_list.clear();
    }

    std::string ST_Booleans::toString() const
    {    
    stringstream strStream;
    const size_t vectorSize = m_boolean_list.size();
    for(size_t i = 0; i < vectorSize; ++i)
    {
        if (i != 0)
        {
            strStream << ' ';
        }
        strStream << m_boolean_list[i];
    }
    return strStream.str();
    }

    void ST_Booleans::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_boolean_list)
    {
        _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_Booleans& ST_Booleans::default_instance()
    {    
    if (!ST_Booleans::default_instance_)
    {
        ST_Booleans::default_instance_ = new ST_Booleans();
    }
    return *ST_Booleans::default_instance_;
    }

ST_Booleans* ST_Booleans::default_instance_ = NULL;

    // ST_FunctionType
    ST_FunctionType::ST_FunctionType()
    :m_has_type(false)
    {
    }
    ST_FunctionType::ST_FunctionType(const ST_FunctionType::Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
    }
    ST_FunctionType::~ST_FunctionType()
{
    clear();    }
    bool ST_FunctionType::has_type() const
    {    
    return m_has_type;
    }

    void ST_FunctionType::set_type(const ST_FunctionType::Type& _type)
    {    
    m_has_type = true;
    m_type = _type;
    }

    const ST_FunctionType::Type& ST_FunctionType::get_type() const
    {    
                return m_type;
                }

    std::string ST_FunctionType::toString() const
    {    
    return ST_FunctionType::TypeStrList[m_type];
    }

    void ST_FunctionType::clear()
    {    
    m_has_type = false;
    }

    void ST_FunctionType::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_type)
    {
    _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_FunctionType& ST_FunctionType::default_instance()
    {    
    if (!ST_FunctionType::default_instance_)
    {
        ST_FunctionType::default_instance_ = new ST_FunctionType();
    }
    return *ST_FunctionType::default_instance_;
    }

    const std::string ST_FunctionType::TypeStrList[] =
    {
        "cnt",
        "pos",
        "revPos",
        "posEven",
        "posOdd",
        "var",
        "depth",
        "maxDepth"
    };
ST_FunctionType* ST_FunctionType::default_instance_ = NULL;

    // ST_FunctionOperator
    ST_FunctionOperator::ST_FunctionOperator()
    :m_has_type(false)
    {
    }
    ST_FunctionOperator::ST_FunctionOperator(const ST_FunctionOperator::Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
    }
    ST_FunctionOperator::~ST_FunctionOperator()
{
    clear();    }
    bool ST_FunctionOperator::has_type() const
    {    
    return m_has_type;
    }

    void ST_FunctionOperator::set_type(const ST_FunctionOperator::Type& _type)
    {    
    m_has_type = true;
    m_type = _type;
    }

    const ST_FunctionOperator::Type& ST_FunctionOperator::get_type() const
    {    
                return m_type;
                }

    std::string ST_FunctionOperator::toString() const
    {    
    return ST_FunctionOperator::TypeStrList[m_type];
    }

    void ST_FunctionOperator::clear()
    {    
    m_has_type = false;
    }

    void ST_FunctionOperator::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_type)
    {
    _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_FunctionOperator& ST_FunctionOperator::default_instance()
    {    
    if (!ST_FunctionOperator::default_instance_)
    {
        ST_FunctionOperator::default_instance_ = new ST_FunctionOperator();
    }
    return *ST_FunctionOperator::default_instance_;
    }

    const std::string ST_FunctionOperator::TypeStrList[] =
    {
        "equ",
        "neq",
        "gt",
        "lt",
        "gte",
        "lte"
    };
ST_FunctionOperator* ST_FunctionOperator::default_instance_ = NULL;

    // ST_DiagramHorizontalAlignment
    ST_DiagramHorizontalAlignment::ST_DiagramHorizontalAlignment()
    :m_has_type(false)
    {
    }
    ST_DiagramHorizontalAlignment::ST_DiagramHorizontalAlignment(const ST_DiagramHorizontalAlignment::Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
    }
    ST_DiagramHorizontalAlignment::~ST_DiagramHorizontalAlignment()
{
    clear();    }
    bool ST_DiagramHorizontalAlignment::has_type() const
    {    
    return m_has_type;
    }

    void ST_DiagramHorizontalAlignment::set_type(const ST_DiagramHorizontalAlignment::Type& _type)
    {    
    m_has_type = true;
    m_type = _type;
    }

    const ST_DiagramHorizontalAlignment::Type& ST_DiagramHorizontalAlignment::get_type() const
    {    
                return m_type;
                }

    std::string ST_DiagramHorizontalAlignment::toString() const
    {    
    return ST_DiagramHorizontalAlignment::TypeStrList[m_type];
    }

    void ST_DiagramHorizontalAlignment::clear()
    {    
    m_has_type = false;
    }

    void ST_DiagramHorizontalAlignment::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_type)
    {
    _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_DiagramHorizontalAlignment& ST_DiagramHorizontalAlignment::default_instance()
    {    
    if (!ST_DiagramHorizontalAlignment::default_instance_)
    {
        ST_DiagramHorizontalAlignment::default_instance_ = new ST_DiagramHorizontalAlignment();
    }
    return *ST_DiagramHorizontalAlignment::default_instance_;
    }

    const std::string ST_DiagramHorizontalAlignment::TypeStrList[] =
    {
        "l",
        "ctr",
        "r",
        "none"
    };
ST_DiagramHorizontalAlignment* ST_DiagramHorizontalAlignment::default_instance_ = NULL;

    // ST_VerticalAlignment
    ST_VerticalAlignment::ST_VerticalAlignment()
    :m_has_type(false)
    {
    }
    ST_VerticalAlignment::ST_VerticalAlignment(const ST_VerticalAlignment::Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
    }
    ST_VerticalAlignment::~ST_VerticalAlignment()
{
    clear();    }
    bool ST_VerticalAlignment::has_type() const
    {    
    return m_has_type;
    }

    void ST_VerticalAlignment::set_type(const ST_VerticalAlignment::Type& _type)
    {    
    m_has_type = true;
    m_type = _type;
    }

    const ST_VerticalAlignment::Type& ST_VerticalAlignment::get_type() const
    {    
                return m_type;
                }

    std::string ST_VerticalAlignment::toString() const
    {    
    return ST_VerticalAlignment::TypeStrList[m_type];
    }

    void ST_VerticalAlignment::clear()
    {    
    m_has_type = false;
    }

    void ST_VerticalAlignment::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_type)
    {
    _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_VerticalAlignment& ST_VerticalAlignment::default_instance()
    {    
    if (!ST_VerticalAlignment::default_instance_)
    {
        ST_VerticalAlignment::default_instance_ = new ST_VerticalAlignment();
    }
    return *ST_VerticalAlignment::default_instance_;
    }

    const std::string ST_VerticalAlignment::TypeStrList[] =
    {
        "t",
        "mid",
        "b",
        "none"
    };
ST_VerticalAlignment* ST_VerticalAlignment::default_instance_ = NULL;

    // ST_ChildDirection
    ST_ChildDirection::ST_ChildDirection()
    :m_has_type(false)
    {
    }
    ST_ChildDirection::ST_ChildDirection(const ST_ChildDirection::Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
    }
    ST_ChildDirection::~ST_ChildDirection()
{
    clear();    }
    bool ST_ChildDirection::has_type() const
    {    
    return m_has_type;
    }

    void ST_ChildDirection::set_type(const ST_ChildDirection::Type& _type)
    {    
    m_has_type = true;
    m_type = _type;
    }

    const ST_ChildDirection::Type& ST_ChildDirection::get_type() const
    {    
                return m_type;
                }

    std::string ST_ChildDirection::toString() const
    {    
    return ST_ChildDirection::TypeStrList[m_type];
    }

    void ST_ChildDirection::clear()
    {    
    m_has_type = false;
    }

    void ST_ChildDirection::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_type)
    {
    _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_ChildDirection& ST_ChildDirection::default_instance()
    {    
    if (!ST_ChildDirection::default_instance_)
    {
        ST_ChildDirection::default_instance_ = new ST_ChildDirection();
    }
    return *ST_ChildDirection::default_instance_;
    }

    const std::string ST_ChildDirection::TypeStrList[] =
    {
        "horz",
        "vert"
    };
ST_ChildDirection* ST_ChildDirection::default_instance_ = NULL;

    // ST_ChildAlignment
    ST_ChildAlignment::ST_ChildAlignment()
    :m_has_type(false)
    {
    }
    ST_ChildAlignment::ST_ChildAlignment(const ST_ChildAlignment::Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
    }
    ST_ChildAlignment::~ST_ChildAlignment()
{
    clear();    }
    bool ST_ChildAlignment::has_type() const
    {    
    return m_has_type;
    }

    void ST_ChildAlignment::set_type(const ST_ChildAlignment::Type& _type)
    {    
    m_has_type = true;
    m_type = _type;
    }

    const ST_ChildAlignment::Type& ST_ChildAlignment::get_type() const
    {    
                return m_type;
                }

    std::string ST_ChildAlignment::toString() const
    {    
    return ST_ChildAlignment::TypeStrList[m_type];
    }

    void ST_ChildAlignment::clear()
    {    
    m_has_type = false;
    }

    void ST_ChildAlignment::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_type)
    {
    _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_ChildAlignment& ST_ChildAlignment::default_instance()
    {    
    if (!ST_ChildAlignment::default_instance_)
    {
        ST_ChildAlignment::default_instance_ = new ST_ChildAlignment();
    }
    return *ST_ChildAlignment::default_instance_;
    }

    const std::string ST_ChildAlignment::TypeStrList[] =
    {
        "t",
        "b",
        "l",
        "r"
    };
ST_ChildAlignment* ST_ChildAlignment::default_instance_ = NULL;

    // ST_SecondaryChildAlignment
    ST_SecondaryChildAlignment::ST_SecondaryChildAlignment()
    :m_has_type(false)
    {
    }
    ST_SecondaryChildAlignment::ST_SecondaryChildAlignment(const ST_SecondaryChildAlignment::Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
    }
    ST_SecondaryChildAlignment::~ST_SecondaryChildAlignment()
{
    clear();    }
    bool ST_SecondaryChildAlignment::has_type() const
    {    
    return m_has_type;
    }

    void ST_SecondaryChildAlignment::set_type(const ST_SecondaryChildAlignment::Type& _type)
    {    
    m_has_type = true;
    m_type = _type;
    }

    const ST_SecondaryChildAlignment::Type& ST_SecondaryChildAlignment::get_type() const
    {    
                return m_type;
                }

    std::string ST_SecondaryChildAlignment::toString() const
    {    
    return ST_SecondaryChildAlignment::TypeStrList[m_type];
    }

    void ST_SecondaryChildAlignment::clear()
    {    
    m_has_type = false;
    }

    void ST_SecondaryChildAlignment::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_type)
    {
    _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_SecondaryChildAlignment& ST_SecondaryChildAlignment::default_instance()
    {    
    if (!ST_SecondaryChildAlignment::default_instance_)
    {
        ST_SecondaryChildAlignment::default_instance_ = new ST_SecondaryChildAlignment();
    }
    return *ST_SecondaryChildAlignment::default_instance_;
    }

    const std::string ST_SecondaryChildAlignment::TypeStrList[] =
    {
        "none",
        "t",
        "b",
        "l",
        "r"
    };
ST_SecondaryChildAlignment* ST_SecondaryChildAlignment::default_instance_ = NULL;

    // ST_LinearDirection
    ST_LinearDirection::ST_LinearDirection()
    :m_has_type(false)
    {
    }
    ST_LinearDirection::ST_LinearDirection(const ST_LinearDirection::Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
    }
    ST_LinearDirection::~ST_LinearDirection()
{
    clear();    }
    bool ST_LinearDirection::has_type() const
    {    
    return m_has_type;
    }

    void ST_LinearDirection::set_type(const ST_LinearDirection::Type& _type)
    {    
    m_has_type = true;
    m_type = _type;
    }

    const ST_LinearDirection::Type& ST_LinearDirection::get_type() const
    {    
                return m_type;
                }

    std::string ST_LinearDirection::toString() const
    {    
    return ST_LinearDirection::TypeStrList[m_type];
    }

    void ST_LinearDirection::clear()
    {    
    m_has_type = false;
    }

    void ST_LinearDirection::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_type)
    {
    _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_LinearDirection& ST_LinearDirection::default_instance()
    {    
    if (!ST_LinearDirection::default_instance_)
    {
        ST_LinearDirection::default_instance_ = new ST_LinearDirection();
    }
    return *ST_LinearDirection::default_instance_;
    }

    const std::string ST_LinearDirection::TypeStrList[] =
    {
        "fromL",
        "fromR",
        "fromT",
        "fromB"
    };
ST_LinearDirection* ST_LinearDirection::default_instance_ = NULL;

    // ST_SecondaryLinearDirection
    ST_SecondaryLinearDirection::ST_SecondaryLinearDirection()
    :m_has_type(false)
    {
    }
    ST_SecondaryLinearDirection::ST_SecondaryLinearDirection(const ST_SecondaryLinearDirection::Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
    }
    ST_SecondaryLinearDirection::~ST_SecondaryLinearDirection()
{
    clear();    }
    bool ST_SecondaryLinearDirection::has_type() const
    {    
    return m_has_type;
    }

    void ST_SecondaryLinearDirection::set_type(const ST_SecondaryLinearDirection::Type& _type)
    {    
    m_has_type = true;
    m_type = _type;
    }

    const ST_SecondaryLinearDirection::Type& ST_SecondaryLinearDirection::get_type() const
    {    
                return m_type;
                }

    std::string ST_SecondaryLinearDirection::toString() const
    {    
    return ST_SecondaryLinearDirection::TypeStrList[m_type];
    }

    void ST_SecondaryLinearDirection::clear()
    {    
    m_has_type = false;
    }

    void ST_SecondaryLinearDirection::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_type)
    {
    _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_SecondaryLinearDirection& ST_SecondaryLinearDirection::default_instance()
    {    
    if (!ST_SecondaryLinearDirection::default_instance_)
    {
        ST_SecondaryLinearDirection::default_instance_ = new ST_SecondaryLinearDirection();
    }
    return *ST_SecondaryLinearDirection::default_instance_;
    }

    const std::string ST_SecondaryLinearDirection::TypeStrList[] =
    {
        "none",
        "fromL",
        "fromR",
        "fromT",
        "fromB"
    };
ST_SecondaryLinearDirection* ST_SecondaryLinearDirection::default_instance_ = NULL;

    // ST_StartingElement
    ST_StartingElement::ST_StartingElement()
    :m_has_type(false)
    {
    }
    ST_StartingElement::ST_StartingElement(const ST_StartingElement::Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
    }
    ST_StartingElement::~ST_StartingElement()
{
    clear();    }
    bool ST_StartingElement::has_type() const
    {    
    return m_has_type;
    }

    void ST_StartingElement::set_type(const ST_StartingElement::Type& _type)
    {    
    m_has_type = true;
    m_type = _type;
    }

    const ST_StartingElement::Type& ST_StartingElement::get_type() const
    {    
                return m_type;
                }

    std::string ST_StartingElement::toString() const
    {    
    return ST_StartingElement::TypeStrList[m_type];
    }

    void ST_StartingElement::clear()
    {    
    m_has_type = false;
    }

    void ST_StartingElement::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_type)
    {
    _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_StartingElement& ST_StartingElement::default_instance()
    {    
    if (!ST_StartingElement::default_instance_)
    {
        ST_StartingElement::default_instance_ = new ST_StartingElement();
    }
    return *ST_StartingElement::default_instance_;
    }

    const std::string ST_StartingElement::TypeStrList[] =
    {
        "node",
        "trans"
    };
ST_StartingElement* ST_StartingElement::default_instance_ = NULL;

    // ST_RotationPath
    ST_RotationPath::ST_RotationPath()
    :m_has_type(false)
    {
    }
    ST_RotationPath::ST_RotationPath(const ST_RotationPath::Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
    }
    ST_RotationPath::~ST_RotationPath()
{
    clear();    }
    bool ST_RotationPath::has_type() const
    {    
    return m_has_type;
    }

    void ST_RotationPath::set_type(const ST_RotationPath::Type& _type)
    {    
    m_has_type = true;
    m_type = _type;
    }

    const ST_RotationPath::Type& ST_RotationPath::get_type() const
    {    
                return m_type;
                }

    std::string ST_RotationPath::toString() const
    {    
    return ST_RotationPath::TypeStrList[m_type];
    }

    void ST_RotationPath::clear()
    {    
    m_has_type = false;
    }

    void ST_RotationPath::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_type)
    {
    _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_RotationPath& ST_RotationPath::default_instance()
    {    
    if (!ST_RotationPath::default_instance_)
    {
        ST_RotationPath::default_instance_ = new ST_RotationPath();
    }
    return *ST_RotationPath::default_instance_;
    }

    const std::string ST_RotationPath::TypeStrList[] =
    {
        "none",
        "alongPath"
    };
ST_RotationPath* ST_RotationPath::default_instance_ = NULL;

    // ST_CenterShapeMapping
    ST_CenterShapeMapping::ST_CenterShapeMapping()
    :m_has_type(false)
    {
    }
    ST_CenterShapeMapping::ST_CenterShapeMapping(const ST_CenterShapeMapping::Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
    }
    ST_CenterShapeMapping::~ST_CenterShapeMapping()
{
    clear();    }
    bool ST_CenterShapeMapping::has_type() const
    {    
    return m_has_type;
    }

    void ST_CenterShapeMapping::set_type(const ST_CenterShapeMapping::Type& _type)
    {    
    m_has_type = true;
    m_type = _type;
    }

    const ST_CenterShapeMapping::Type& ST_CenterShapeMapping::get_type() const
    {    
                return m_type;
                }

    std::string ST_CenterShapeMapping::toString() const
    {    
    return ST_CenterShapeMapping::TypeStrList[m_type];
    }

    void ST_CenterShapeMapping::clear()
    {    
    m_has_type = false;
    }

    void ST_CenterShapeMapping::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_type)
    {
    _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_CenterShapeMapping& ST_CenterShapeMapping::default_instance()
    {    
    if (!ST_CenterShapeMapping::default_instance_)
    {
        ST_CenterShapeMapping::default_instance_ = new ST_CenterShapeMapping();
    }
    return *ST_CenterShapeMapping::default_instance_;
    }

    const std::string ST_CenterShapeMapping::TypeStrList[] =
    {
        "none",
        "fNode"
    };
ST_CenterShapeMapping* ST_CenterShapeMapping::default_instance_ = NULL;

    // ST_BendPoint
    ST_BendPoint::ST_BendPoint()
    :m_has_type(false)
    {
    }
    ST_BendPoint::ST_BendPoint(const ST_BendPoint::Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
    }
    ST_BendPoint::~ST_BendPoint()
{
    clear();    }
    bool ST_BendPoint::has_type() const
    {    
    return m_has_type;
    }

    void ST_BendPoint::set_type(const ST_BendPoint::Type& _type)
    {    
    m_has_type = true;
    m_type = _type;
    }

    const ST_BendPoint::Type& ST_BendPoint::get_type() const
    {    
                return m_type;
                }

    std::string ST_BendPoint::toString() const
    {    
    return ST_BendPoint::TypeStrList[m_type];
    }

    void ST_BendPoint::clear()
    {    
    m_has_type = false;
    }

    void ST_BendPoint::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_type)
    {
    _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_BendPoint& ST_BendPoint::default_instance()
    {    
    if (!ST_BendPoint::default_instance_)
    {
        ST_BendPoint::default_instance_ = new ST_BendPoint();
    }
    return *ST_BendPoint::default_instance_;
    }

    const std::string ST_BendPoint::TypeStrList[] =
    {
        "beg",
        "def",
        "end"
    };
ST_BendPoint* ST_BendPoint::default_instance_ = NULL;

    // ST_ConnectorRouting
    ST_ConnectorRouting::ST_ConnectorRouting()
    :m_has_type(false)
    {
    }
    ST_ConnectorRouting::ST_ConnectorRouting(const ST_ConnectorRouting::Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
    }
    ST_ConnectorRouting::~ST_ConnectorRouting()
{
    clear();    }
    bool ST_ConnectorRouting::has_type() const
    {    
    return m_has_type;
    }

    void ST_ConnectorRouting::set_type(const ST_ConnectorRouting::Type& _type)
    {    
    m_has_type = true;
    m_type = _type;
    }

    const ST_ConnectorRouting::Type& ST_ConnectorRouting::get_type() const
    {    
                return m_type;
                }

    std::string ST_ConnectorRouting::toString() const
    {    
    return ST_ConnectorRouting::TypeStrList[m_type];
    }

    void ST_ConnectorRouting::clear()
    {    
    m_has_type = false;
    }

    void ST_ConnectorRouting::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_type)
    {
    _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_ConnectorRouting& ST_ConnectorRouting::default_instance()
    {    
    if (!ST_ConnectorRouting::default_instance_)
    {
        ST_ConnectorRouting::default_instance_ = new ST_ConnectorRouting();
    }
    return *ST_ConnectorRouting::default_instance_;
    }

    const std::string ST_ConnectorRouting::TypeStrList[] =
    {
        "stra",
        "bend",
        "curve",
        "longCurve"
    };
ST_ConnectorRouting* ST_ConnectorRouting::default_instance_ = NULL;

    // ST_ArrowheadStyle
    ST_ArrowheadStyle::ST_ArrowheadStyle()
    :m_has_type(false)
    {
    }
    ST_ArrowheadStyle::ST_ArrowheadStyle(const ST_ArrowheadStyle::Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
    }
    ST_ArrowheadStyle::~ST_ArrowheadStyle()
{
    clear();    }
    bool ST_ArrowheadStyle::has_type() const
    {    
    return m_has_type;
    }

    void ST_ArrowheadStyle::set_type(const ST_ArrowheadStyle::Type& _type)
    {    
    m_has_type = true;
    m_type = _type;
    }

    const ST_ArrowheadStyle::Type& ST_ArrowheadStyle::get_type() const
    {    
                return m_type;
                }

    std::string ST_ArrowheadStyle::toString() const
    {    
    return ST_ArrowheadStyle::TypeStrList[m_type];
    }

    void ST_ArrowheadStyle::clear()
    {    
    m_has_type = false;
    }

    void ST_ArrowheadStyle::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_type)
    {
    _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_ArrowheadStyle& ST_ArrowheadStyle::default_instance()
    {    
    if (!ST_ArrowheadStyle::default_instance_)
    {
        ST_ArrowheadStyle::default_instance_ = new ST_ArrowheadStyle();
    }
    return *ST_ArrowheadStyle::default_instance_;
    }

    const std::string ST_ArrowheadStyle::TypeStrList[] =
    {
        "auto",
        "arr",
        "noArr"
    };
ST_ArrowheadStyle* ST_ArrowheadStyle::default_instance_ = NULL;

    // ST_ConnectorDimension
    ST_ConnectorDimension::ST_ConnectorDimension()
    :m_has_type(false)
    {
    }
    ST_ConnectorDimension::ST_ConnectorDimension(const ST_ConnectorDimension::Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
    }
    ST_ConnectorDimension::~ST_ConnectorDimension()
{
    clear();    }
    bool ST_ConnectorDimension::has_type() const
    {    
    return m_has_type;
    }

    void ST_ConnectorDimension::set_type(const ST_ConnectorDimension::Type& _type)
    {    
    m_has_type = true;
    m_type = _type;
    }

    const ST_ConnectorDimension::Type& ST_ConnectorDimension::get_type() const
    {    
                return m_type;
                }

    std::string ST_ConnectorDimension::toString() const
    {    
    return ST_ConnectorDimension::TypeStrList[m_type];
    }

    void ST_ConnectorDimension::clear()
    {    
    m_has_type = false;
    }

    void ST_ConnectorDimension::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_type)
    {
    _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_ConnectorDimension& ST_ConnectorDimension::default_instance()
    {    
    if (!ST_ConnectorDimension::default_instance_)
    {
        ST_ConnectorDimension::default_instance_ = new ST_ConnectorDimension();
    }
    return *ST_ConnectorDimension::default_instance_;
    }

    const std::string ST_ConnectorDimension::TypeStrList[] =
    {
        "1D",
        "2D",
        "cust"
    };
ST_ConnectorDimension* ST_ConnectorDimension::default_instance_ = NULL;

    // ST_ConnectorPoint
    ST_ConnectorPoint::ST_ConnectorPoint()
    :m_has_type(false)
    {
    }
    ST_ConnectorPoint::ST_ConnectorPoint(const ST_ConnectorPoint::Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
    }
    ST_ConnectorPoint::~ST_ConnectorPoint()
{
    clear();    }
    bool ST_ConnectorPoint::has_type() const
    {    
    return m_has_type;
    }

    void ST_ConnectorPoint::set_type(const ST_ConnectorPoint::Type& _type)
    {    
    m_has_type = true;
    m_type = _type;
    }

    const ST_ConnectorPoint::Type& ST_ConnectorPoint::get_type() const
    {    
                return m_type;
                }

    std::string ST_ConnectorPoint::toString() const
    {    
    return ST_ConnectorPoint::TypeStrList[m_type];
    }

    void ST_ConnectorPoint::clear()
    {    
    m_has_type = false;
    }

    void ST_ConnectorPoint::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_type)
    {
    _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_ConnectorPoint& ST_ConnectorPoint::default_instance()
    {    
    if (!ST_ConnectorPoint::default_instance_)
    {
        ST_ConnectorPoint::default_instance_ = new ST_ConnectorPoint();
    }
    return *ST_ConnectorPoint::default_instance_;
    }

    const std::string ST_ConnectorPoint::TypeStrList[] =
    {
        "auto",
        "bCtr",
        "ctr",
        "midL",
        "midR",
        "tCtr",
        "bL",
        "bR",
        "tL",
        "tR",
        "radial"
    };
ST_ConnectorPoint* ST_ConnectorPoint::default_instance_ = NULL;

    // ST_NodeHorizontalAlignment
    ST_NodeHorizontalAlignment::ST_NodeHorizontalAlignment()
    :m_has_type(false)
    {
    }
    ST_NodeHorizontalAlignment::ST_NodeHorizontalAlignment(const ST_NodeHorizontalAlignment::Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
    }
    ST_NodeHorizontalAlignment::~ST_NodeHorizontalAlignment()
{
    clear();    }
    bool ST_NodeHorizontalAlignment::has_type() const
    {    
    return m_has_type;
    }

    void ST_NodeHorizontalAlignment::set_type(const ST_NodeHorizontalAlignment::Type& _type)
    {    
    m_has_type = true;
    m_type = _type;
    }

    const ST_NodeHorizontalAlignment::Type& ST_NodeHorizontalAlignment::get_type() const
    {    
                return m_type;
                }

    std::string ST_NodeHorizontalAlignment::toString() const
    {    
    return ST_NodeHorizontalAlignment::TypeStrList[m_type];
    }

    void ST_NodeHorizontalAlignment::clear()
    {    
    m_has_type = false;
    }

    void ST_NodeHorizontalAlignment::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_type)
    {
    _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_NodeHorizontalAlignment& ST_NodeHorizontalAlignment::default_instance()
    {    
    if (!ST_NodeHorizontalAlignment::default_instance_)
    {
        ST_NodeHorizontalAlignment::default_instance_ = new ST_NodeHorizontalAlignment();
    }
    return *ST_NodeHorizontalAlignment::default_instance_;
    }

    const std::string ST_NodeHorizontalAlignment::TypeStrList[] =
    {
        "l",
        "ctr",
        "r"
    };
ST_NodeHorizontalAlignment* ST_NodeHorizontalAlignment::default_instance_ = NULL;

    // ST_NodeVerticalAlignment
    ST_NodeVerticalAlignment::ST_NodeVerticalAlignment()
    :m_has_type(false)
    {
    }
    ST_NodeVerticalAlignment::ST_NodeVerticalAlignment(const ST_NodeVerticalAlignment::Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
    }
    ST_NodeVerticalAlignment::~ST_NodeVerticalAlignment()
{
    clear();    }
    bool ST_NodeVerticalAlignment::has_type() const
    {    
    return m_has_type;
    }

    void ST_NodeVerticalAlignment::set_type(const ST_NodeVerticalAlignment::Type& _type)
    {    
    m_has_type = true;
    m_type = _type;
    }

    const ST_NodeVerticalAlignment::Type& ST_NodeVerticalAlignment::get_type() const
    {    
                return m_type;
                }

    std::string ST_NodeVerticalAlignment::toString() const
    {    
    return ST_NodeVerticalAlignment::TypeStrList[m_type];
    }

    void ST_NodeVerticalAlignment::clear()
    {    
    m_has_type = false;
    }

    void ST_NodeVerticalAlignment::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_type)
    {
    _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_NodeVerticalAlignment& ST_NodeVerticalAlignment::default_instance()
    {    
    if (!ST_NodeVerticalAlignment::default_instance_)
    {
        ST_NodeVerticalAlignment::default_instance_ = new ST_NodeVerticalAlignment();
    }
    return *ST_NodeVerticalAlignment::default_instance_;
    }

    const std::string ST_NodeVerticalAlignment::TypeStrList[] =
    {
        "t",
        "mid",
        "b"
    };
ST_NodeVerticalAlignment* ST_NodeVerticalAlignment::default_instance_ = NULL;

    // ST_FallbackDimension
    ST_FallbackDimension::ST_FallbackDimension()
    :m_has_type(false)
    {
    }
    ST_FallbackDimension::ST_FallbackDimension(const ST_FallbackDimension::Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
    }
    ST_FallbackDimension::~ST_FallbackDimension()
{
    clear();    }
    bool ST_FallbackDimension::has_type() const
    {    
    return m_has_type;
    }

    void ST_FallbackDimension::set_type(const ST_FallbackDimension::Type& _type)
    {    
    m_has_type = true;
    m_type = _type;
    }

    const ST_FallbackDimension::Type& ST_FallbackDimension::get_type() const
    {    
                return m_type;
                }

    std::string ST_FallbackDimension::toString() const
    {    
    return ST_FallbackDimension::TypeStrList[m_type];
    }

    void ST_FallbackDimension::clear()
    {    
    m_has_type = false;
    }

    void ST_FallbackDimension::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_type)
    {
    _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_FallbackDimension& ST_FallbackDimension::default_instance()
    {    
    if (!ST_FallbackDimension::default_instance_)
    {
        ST_FallbackDimension::default_instance_ = new ST_FallbackDimension();
    }
    return *ST_FallbackDimension::default_instance_;
    }

    const std::string ST_FallbackDimension::TypeStrList[] =
    {
        "1D",
        "2D"
    };
ST_FallbackDimension* ST_FallbackDimension::default_instance_ = NULL;

    // ST_TextDirection
    ST_TextDirection::ST_TextDirection()
    :m_has_type(false)
    {
    }
    ST_TextDirection::ST_TextDirection(const ST_TextDirection::Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
    }
    ST_TextDirection::~ST_TextDirection()
{
    clear();    }
    bool ST_TextDirection::has_type() const
    {    
    return m_has_type;
    }

    void ST_TextDirection::set_type(const ST_TextDirection::Type& _type)
    {    
    m_has_type = true;
    m_type = _type;
    }

    const ST_TextDirection::Type& ST_TextDirection::get_type() const
    {    
                return m_type;
                }

    std::string ST_TextDirection::toString() const
    {    
    return ST_TextDirection::TypeStrList[m_type];
    }

    void ST_TextDirection::clear()
    {    
    m_has_type = false;
    }

    void ST_TextDirection::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_type)
    {
    _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_TextDirection& ST_TextDirection::default_instance()
    {    
    if (!ST_TextDirection::default_instance_)
    {
        ST_TextDirection::default_instance_ = new ST_TextDirection();
    }
    return *ST_TextDirection::default_instance_;
    }

    const std::string ST_TextDirection::TypeStrList[] =
    {
        "fromT",
        "fromB"
    };
ST_TextDirection* ST_TextDirection::default_instance_ = NULL;

    // ST_PyramidAccentPosition
    ST_PyramidAccentPosition::ST_PyramidAccentPosition()
    :m_has_type(false)
    {
    }
    ST_PyramidAccentPosition::ST_PyramidAccentPosition(const ST_PyramidAccentPosition::Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
    }
    ST_PyramidAccentPosition::~ST_PyramidAccentPosition()
{
    clear();    }
    bool ST_PyramidAccentPosition::has_type() const
    {    
    return m_has_type;
    }

    void ST_PyramidAccentPosition::set_type(const ST_PyramidAccentPosition::Type& _type)
    {    
    m_has_type = true;
    m_type = _type;
    }

    const ST_PyramidAccentPosition::Type& ST_PyramidAccentPosition::get_type() const
    {    
                return m_type;
                }

    std::string ST_PyramidAccentPosition::toString() const
    {    
    return ST_PyramidAccentPosition::TypeStrList[m_type];
    }

    void ST_PyramidAccentPosition::clear()
    {    
    m_has_type = false;
    }

    void ST_PyramidAccentPosition::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_type)
    {
    _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_PyramidAccentPosition& ST_PyramidAccentPosition::default_instance()
    {    
    if (!ST_PyramidAccentPosition::default_instance_)
    {
        ST_PyramidAccentPosition::default_instance_ = new ST_PyramidAccentPosition();
    }
    return *ST_PyramidAccentPosition::default_instance_;
    }

    const std::string ST_PyramidAccentPosition::TypeStrList[] =
    {
        "bef",
        "aft"
    };
ST_PyramidAccentPosition* ST_PyramidAccentPosition::default_instance_ = NULL;

    // ST_PyramidAccentTextMargin
    ST_PyramidAccentTextMargin::ST_PyramidAccentTextMargin()
    :m_has_type(false)
    {
    }
    ST_PyramidAccentTextMargin::ST_PyramidAccentTextMargin(const ST_PyramidAccentTextMargin::Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
    }
    ST_PyramidAccentTextMargin::~ST_PyramidAccentTextMargin()
{
    clear();    }
    bool ST_PyramidAccentTextMargin::has_type() const
    {    
    return m_has_type;
    }

    void ST_PyramidAccentTextMargin::set_type(const ST_PyramidAccentTextMargin::Type& _type)
    {    
    m_has_type = true;
    m_type = _type;
    }

    const ST_PyramidAccentTextMargin::Type& ST_PyramidAccentTextMargin::get_type() const
    {    
                return m_type;
                }

    std::string ST_PyramidAccentTextMargin::toString() const
    {    
    return ST_PyramidAccentTextMargin::TypeStrList[m_type];
    }

    void ST_PyramidAccentTextMargin::clear()
    {    
    m_has_type = false;
    }

    void ST_PyramidAccentTextMargin::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_type)
    {
    _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_PyramidAccentTextMargin& ST_PyramidAccentTextMargin::default_instance()
    {    
    if (!ST_PyramidAccentTextMargin::default_instance_)
    {
        ST_PyramidAccentTextMargin::default_instance_ = new ST_PyramidAccentTextMargin();
    }
    return *ST_PyramidAccentTextMargin::default_instance_;
    }

    const std::string ST_PyramidAccentTextMargin::TypeStrList[] =
    {
        "step",
        "stack"
    };
ST_PyramidAccentTextMargin* ST_PyramidAccentTextMargin::default_instance_ = NULL;

    // ST_TextBlockDirection
    ST_TextBlockDirection::ST_TextBlockDirection()
    :m_has_type(false)
    {
    }
    ST_TextBlockDirection::ST_TextBlockDirection(const ST_TextBlockDirection::Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
    }
    ST_TextBlockDirection::~ST_TextBlockDirection()
{
    clear();    }
    bool ST_TextBlockDirection::has_type() const
    {    
    return m_has_type;
    }

    void ST_TextBlockDirection::set_type(const ST_TextBlockDirection::Type& _type)
    {    
    m_has_type = true;
    m_type = _type;
    }

    const ST_TextBlockDirection::Type& ST_TextBlockDirection::get_type() const
    {    
                return m_type;
                }

    std::string ST_TextBlockDirection::toString() const
    {    
    return ST_TextBlockDirection::TypeStrList[m_type];
    }

    void ST_TextBlockDirection::clear()
    {    
    m_has_type = false;
    }

    void ST_TextBlockDirection::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_type)
    {
    _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_TextBlockDirection& ST_TextBlockDirection::default_instance()
    {    
    if (!ST_TextBlockDirection::default_instance_)
    {
        ST_TextBlockDirection::default_instance_ = new ST_TextBlockDirection();
    }
    return *ST_TextBlockDirection::default_instance_;
    }

    const std::string ST_TextBlockDirection::TypeStrList[] =
    {
        "horz",
        "vert"
    };
ST_TextBlockDirection* ST_TextBlockDirection::default_instance_ = NULL;

    // ST_TextAnchorHorizontal
    ST_TextAnchorHorizontal::ST_TextAnchorHorizontal()
    :m_has_type(false)
    {
    }
    ST_TextAnchorHorizontal::ST_TextAnchorHorizontal(const ST_TextAnchorHorizontal::Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
    }
    ST_TextAnchorHorizontal::~ST_TextAnchorHorizontal()
{
    clear();    }
    bool ST_TextAnchorHorizontal::has_type() const
    {    
    return m_has_type;
    }

    void ST_TextAnchorHorizontal::set_type(const ST_TextAnchorHorizontal::Type& _type)
    {    
    m_has_type = true;
    m_type = _type;
    }

    const ST_TextAnchorHorizontal::Type& ST_TextAnchorHorizontal::get_type() const
    {    
                return m_type;
                }

    std::string ST_TextAnchorHorizontal::toString() const
    {    
    return ST_TextAnchorHorizontal::TypeStrList[m_type];
    }

    void ST_TextAnchorHorizontal::clear()
    {    
    m_has_type = false;
    }

    void ST_TextAnchorHorizontal::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_type)
    {
    _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_TextAnchorHorizontal& ST_TextAnchorHorizontal::default_instance()
    {    
    if (!ST_TextAnchorHorizontal::default_instance_)
    {
        ST_TextAnchorHorizontal::default_instance_ = new ST_TextAnchorHorizontal();
    }
    return *ST_TextAnchorHorizontal::default_instance_;
    }

    const std::string ST_TextAnchorHorizontal::TypeStrList[] =
    {
        "none",
        "ctr"
    };
ST_TextAnchorHorizontal* ST_TextAnchorHorizontal::default_instance_ = NULL;

    // ST_TextAnchorVertical
    ST_TextAnchorVertical::ST_TextAnchorVertical()
    :m_has_type(false)
    {
    }
    ST_TextAnchorVertical::ST_TextAnchorVertical(const ST_TextAnchorVertical::Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
    }
    ST_TextAnchorVertical::~ST_TextAnchorVertical()
{
    clear();    }
    bool ST_TextAnchorVertical::has_type() const
    {    
    return m_has_type;
    }

    void ST_TextAnchorVertical::set_type(const ST_TextAnchorVertical::Type& _type)
    {    
    m_has_type = true;
    m_type = _type;
    }

    const ST_TextAnchorVertical::Type& ST_TextAnchorVertical::get_type() const
    {    
                return m_type;
                }

    std::string ST_TextAnchorVertical::toString() const
    {    
    return ST_TextAnchorVertical::TypeStrList[m_type];
    }

    void ST_TextAnchorVertical::clear()
    {    
    m_has_type = false;
    }

    void ST_TextAnchorVertical::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_type)
    {
    _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_TextAnchorVertical& ST_TextAnchorVertical::default_instance()
    {    
    if (!ST_TextAnchorVertical::default_instance_)
    {
        ST_TextAnchorVertical::default_instance_ = new ST_TextAnchorVertical();
    }
    return *ST_TextAnchorVertical::default_instance_;
    }

    const std::string ST_TextAnchorVertical::TypeStrList[] =
    {
        "t",
        "mid",
        "b"
    };
ST_TextAnchorVertical* ST_TextAnchorVertical::default_instance_ = NULL;

    // ST_DiagramTextAlignment
    ST_DiagramTextAlignment::ST_DiagramTextAlignment()
    :m_has_type(false)
    {
    }
    ST_DiagramTextAlignment::ST_DiagramTextAlignment(const ST_DiagramTextAlignment::Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
    }
    ST_DiagramTextAlignment::~ST_DiagramTextAlignment()
{
    clear();    }
    bool ST_DiagramTextAlignment::has_type() const
    {    
    return m_has_type;
    }

    void ST_DiagramTextAlignment::set_type(const ST_DiagramTextAlignment::Type& _type)
    {    
    m_has_type = true;
    m_type = _type;
    }

    const ST_DiagramTextAlignment::Type& ST_DiagramTextAlignment::get_type() const
    {    
                return m_type;
                }

    std::string ST_DiagramTextAlignment::toString() const
    {    
    return ST_DiagramTextAlignment::TypeStrList[m_type];
    }

    void ST_DiagramTextAlignment::clear()
    {    
    m_has_type = false;
    }

    void ST_DiagramTextAlignment::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_type)
    {
    _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_DiagramTextAlignment& ST_DiagramTextAlignment::default_instance()
    {    
    if (!ST_DiagramTextAlignment::default_instance_)
    {
        ST_DiagramTextAlignment::default_instance_ = new ST_DiagramTextAlignment();
    }
    return *ST_DiagramTextAlignment::default_instance_;
    }

    const std::string ST_DiagramTextAlignment::TypeStrList[] =
    {
        "l",
        "ctr",
        "r"
    };
ST_DiagramTextAlignment* ST_DiagramTextAlignment::default_instance_ = NULL;

    // ST_AutoTextRotation
    ST_AutoTextRotation::ST_AutoTextRotation()
    :m_has_type(false)
    {
    }
    ST_AutoTextRotation::ST_AutoTextRotation(const ST_AutoTextRotation::Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
    }
    ST_AutoTextRotation::~ST_AutoTextRotation()
{
    clear();    }
    bool ST_AutoTextRotation::has_type() const
    {    
    return m_has_type;
    }

    void ST_AutoTextRotation::set_type(const ST_AutoTextRotation::Type& _type)
    {    
    m_has_type = true;
    m_type = _type;
    }

    const ST_AutoTextRotation::Type& ST_AutoTextRotation::get_type() const
    {    
                return m_type;
                }

    std::string ST_AutoTextRotation::toString() const
    {    
    return ST_AutoTextRotation::TypeStrList[m_type];
    }

    void ST_AutoTextRotation::clear()
    {    
    m_has_type = false;
    }

    void ST_AutoTextRotation::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_type)
    {
    _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_AutoTextRotation& ST_AutoTextRotation::default_instance()
    {    
    if (!ST_AutoTextRotation::default_instance_)
    {
        ST_AutoTextRotation::default_instance_ = new ST_AutoTextRotation();
    }
    return *ST_AutoTextRotation::default_instance_;
    }

    const std::string ST_AutoTextRotation::TypeStrList[] =
    {
        "none",
        "upr",
        "grav"
    };
ST_AutoTextRotation* ST_AutoTextRotation::default_instance_ = NULL;

    // ST_GrowDirection
    ST_GrowDirection::ST_GrowDirection()
    :m_has_type(false)
    {
    }
    ST_GrowDirection::ST_GrowDirection(const ST_GrowDirection::Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
    }
    ST_GrowDirection::~ST_GrowDirection()
{
    clear();    }
    bool ST_GrowDirection::has_type() const
    {    
    return m_has_type;
    }

    void ST_GrowDirection::set_type(const ST_GrowDirection::Type& _type)
    {    
    m_has_type = true;
    m_type = _type;
    }

    const ST_GrowDirection::Type& ST_GrowDirection::get_type() const
    {    
                return m_type;
                }

    std::string ST_GrowDirection::toString() const
    {    
    return ST_GrowDirection::TypeStrList[m_type];
    }

    void ST_GrowDirection::clear()
    {    
    m_has_type = false;
    }

    void ST_GrowDirection::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_type)
    {
    _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_GrowDirection& ST_GrowDirection::default_instance()
    {    
    if (!ST_GrowDirection::default_instance_)
    {
        ST_GrowDirection::default_instance_ = new ST_GrowDirection();
    }
    return *ST_GrowDirection::default_instance_;
    }

    const std::string ST_GrowDirection::TypeStrList[] =
    {
        "tL",
        "tR",
        "bL",
        "bR"
    };
ST_GrowDirection* ST_GrowDirection::default_instance_ = NULL;

    // ST_FlowDirection
    ST_FlowDirection::ST_FlowDirection()
    :m_has_type(false)
    {
    }
    ST_FlowDirection::ST_FlowDirection(const ST_FlowDirection::Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
    }
    ST_FlowDirection::~ST_FlowDirection()
{
    clear();    }
    bool ST_FlowDirection::has_type() const
    {    
    return m_has_type;
    }

    void ST_FlowDirection::set_type(const ST_FlowDirection::Type& _type)
    {    
    m_has_type = true;
    m_type = _type;
    }

    const ST_FlowDirection::Type& ST_FlowDirection::get_type() const
    {    
                return m_type;
                }

    std::string ST_FlowDirection::toString() const
    {    
    return ST_FlowDirection::TypeStrList[m_type];
    }

    void ST_FlowDirection::clear()
    {    
    m_has_type = false;
    }

    void ST_FlowDirection::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_type)
    {
    _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_FlowDirection& ST_FlowDirection::default_instance()
    {    
    if (!ST_FlowDirection::default_instance_)
    {
        ST_FlowDirection::default_instance_ = new ST_FlowDirection();
    }
    return *ST_FlowDirection::default_instance_;
    }

    const std::string ST_FlowDirection::TypeStrList[] =
    {
        "row",
        "col"
    };
ST_FlowDirection* ST_FlowDirection::default_instance_ = NULL;

    // ST_ContinueDirection
    ST_ContinueDirection::ST_ContinueDirection()
    :m_has_type(false)
    {
    }
    ST_ContinueDirection::ST_ContinueDirection(const ST_ContinueDirection::Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
    }
    ST_ContinueDirection::~ST_ContinueDirection()
{
    clear();    }
    bool ST_ContinueDirection::has_type() const
    {    
    return m_has_type;
    }

    void ST_ContinueDirection::set_type(const ST_ContinueDirection::Type& _type)
    {    
    m_has_type = true;
    m_type = _type;
    }

    const ST_ContinueDirection::Type& ST_ContinueDirection::get_type() const
    {    
                return m_type;
                }

    std::string ST_ContinueDirection::toString() const
    {    
    return ST_ContinueDirection::TypeStrList[m_type];
    }

    void ST_ContinueDirection::clear()
    {    
    m_has_type = false;
    }

    void ST_ContinueDirection::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_type)
    {
    _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_ContinueDirection& ST_ContinueDirection::default_instance()
    {    
    if (!ST_ContinueDirection::default_instance_)
    {
        ST_ContinueDirection::default_instance_ = new ST_ContinueDirection();
    }
    return *ST_ContinueDirection::default_instance_;
    }

    const std::string ST_ContinueDirection::TypeStrList[] =
    {
        "revDir",
        "sameDir"
    };
ST_ContinueDirection* ST_ContinueDirection::default_instance_ = NULL;

    // ST_Breakpoint
    ST_Breakpoint::ST_Breakpoint()
    :m_has_type(false)
    {
    }
    ST_Breakpoint::ST_Breakpoint(const ST_Breakpoint::Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
    }
    ST_Breakpoint::~ST_Breakpoint()
{
    clear();    }
    bool ST_Breakpoint::has_type() const
    {    
    return m_has_type;
    }

    void ST_Breakpoint::set_type(const ST_Breakpoint::Type& _type)
    {    
    m_has_type = true;
    m_type = _type;
    }

    const ST_Breakpoint::Type& ST_Breakpoint::get_type() const
    {    
                return m_type;
                }

    std::string ST_Breakpoint::toString() const
    {    
    return ST_Breakpoint::TypeStrList[m_type];
    }

    void ST_Breakpoint::clear()
    {    
    m_has_type = false;
    }

    void ST_Breakpoint::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_type)
    {
    _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_Breakpoint& ST_Breakpoint::default_instance()
    {    
    if (!ST_Breakpoint::default_instance_)
    {
        ST_Breakpoint::default_instance_ = new ST_Breakpoint();
    }
    return *ST_Breakpoint::default_instance_;
    }

    const std::string ST_Breakpoint::TypeStrList[] =
    {
        "endCnv",
        "bal",
        "fixed"
    };
ST_Breakpoint* ST_Breakpoint::default_instance_ = NULL;

    // ST_Offset
    ST_Offset::ST_Offset()
    :m_has_type(false)
    {
    }
    ST_Offset::ST_Offset(const ST_Offset::Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
    }
    ST_Offset::~ST_Offset()
{
    clear();    }
    bool ST_Offset::has_type() const
    {    
    return m_has_type;
    }

    void ST_Offset::set_type(const ST_Offset::Type& _type)
    {    
    m_has_type = true;
    m_type = _type;
    }

    const ST_Offset::Type& ST_Offset::get_type() const
    {    
                return m_type;
                }

    std::string ST_Offset::toString() const
    {    
    return ST_Offset::TypeStrList[m_type];
    }

    void ST_Offset::clear()
    {    
    m_has_type = false;
    }

    void ST_Offset::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_type)
    {
    _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_Offset& ST_Offset::default_instance()
    {    
    if (!ST_Offset::default_instance_)
    {
        ST_Offset::default_instance_ = new ST_Offset();
    }
    return *ST_Offset::default_instance_;
    }

    const std::string ST_Offset::TypeStrList[] =
    {
        "ctr",
        "off"
    };
ST_Offset* ST_Offset::default_instance_ = NULL;

    // ST_HierarchyAlignment
    ST_HierarchyAlignment::ST_HierarchyAlignment()
    :m_has_type(false)
    {
    }
    ST_HierarchyAlignment::ST_HierarchyAlignment(const ST_HierarchyAlignment::Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
    }
    ST_HierarchyAlignment::~ST_HierarchyAlignment()
{
    clear();    }
    bool ST_HierarchyAlignment::has_type() const
    {    
    return m_has_type;
    }

    void ST_HierarchyAlignment::set_type(const ST_HierarchyAlignment::Type& _type)
    {    
    m_has_type = true;
    m_type = _type;
    }

    const ST_HierarchyAlignment::Type& ST_HierarchyAlignment::get_type() const
    {    
                return m_type;
                }

    std::string ST_HierarchyAlignment::toString() const
    {    
    return ST_HierarchyAlignment::TypeStrList[m_type];
    }

    void ST_HierarchyAlignment::clear()
    {    
    m_has_type = false;
    }

    void ST_HierarchyAlignment::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_type)
    {
    _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_HierarchyAlignment& ST_HierarchyAlignment::default_instance()
    {    
    if (!ST_HierarchyAlignment::default_instance_)
    {
        ST_HierarchyAlignment::default_instance_ = new ST_HierarchyAlignment();
    }
    return *ST_HierarchyAlignment::default_instance_;
    }

    const std::string ST_HierarchyAlignment::TypeStrList[] =
    {
        "tL",
        "tR",
        "tCtrCh",
        "tCtrDes",
        "bL",
        "bR",
        "bCtrCh",
        "bCtrDes",
        "lT",
        "lB",
        "lCtrCh",
        "lCtrDes",
        "rT",
        "rB",
        "rCtrCh",
        "rCtrDes"
    };
ST_HierarchyAlignment* ST_HierarchyAlignment::default_instance_ = NULL;

    // ST_FunctionValue
    ST_FunctionValue::ST_FunctionValue()
    :m_has_int(false),
    m_int(0),
    m_has_boolean(false),
    m_boolean(false),
    m_has_ST_Direction(false),
    m_ST_Direction(NULL),
    m_has_ST_HierBranchStyle(false),
    m_ST_HierBranchStyle(NULL),
    m_has_ST_AnimOneStr(false),
    m_ST_AnimOneStr(NULL),
    m_has_ST_AnimLvlStr(false),
    m_ST_AnimLvlStr(NULL),
    m_has_ST_ResizeHandlesStr(false),
    m_ST_ResizeHandlesStr(NULL)
    {
    }
    ST_FunctionValue::~ST_FunctionValue()
{
    clear();    }
    bool ST_FunctionValue::has_int() const
    {    
    return m_has_int;
    }

    void ST_FunctionValue::set_int(const XSD::int_& _int)
    {    
    clear_boolean();
    clear_ST_Direction();
    clear_ST_HierBranchStyle();
    clear_ST_AnimOneStr();
    clear_ST_AnimLvlStr();
    clear_ST_ResizeHandlesStr();
    m_has_int = true;
    m_int = _int;
    }

    const XSD::int_& ST_FunctionValue::get_int() const
    {    
    return m_int;
    }

    void ST_FunctionValue::clear_int()
    {    
    m_has_int = false;
    m_int = 0;
    }

    bool ST_FunctionValue::has_boolean() const
    {    
    return m_has_boolean;
    }

    void ST_FunctionValue::set_boolean(const XSD::boolean_& _boolean)
    {    
    clear_int();
    clear_ST_Direction();
    clear_ST_HierBranchStyle();
    clear_ST_AnimOneStr();
    clear_ST_AnimLvlStr();
    clear_ST_ResizeHandlesStr();
    m_has_boolean = true;
    m_boolean = _boolean;
    }

    const XSD::boolean_& ST_FunctionValue::get_boolean() const
    {    
    return m_boolean;
    }

    void ST_FunctionValue::clear_boolean()
    {    
    m_has_boolean = false;
    m_boolean = false;
    }

    bool ST_FunctionValue::has_ST_Direction() const
    {    
    return m_has_ST_Direction;
    }

    ST_Direction* ST_FunctionValue::mutable_ST_Direction()
    {    
    clear_int();
    clear_boolean();
    clear_ST_HierBranchStyle();
    clear_ST_AnimOneStr();
    clear_ST_AnimLvlStr();
    clear_ST_ResizeHandlesStr();
    m_has_ST_Direction = true;
    if (!m_ST_Direction)
    {
        m_ST_Direction = new ST_Direction();
    }
    return m_ST_Direction;
    }

    const ST_Direction& ST_FunctionValue::get_ST_Direction() const
    {    
    if (m_ST_Direction)
    {
        return *m_ST_Direction;
    }
    return ST_Direction::default_instance();
    }

    void ST_FunctionValue::clear_ST_Direction()
    {    
    m_has_ST_Direction = false;
    if (m_ST_Direction)
    {
        delete m_ST_Direction;
        m_ST_Direction = NULL;
    }
    }

    bool ST_FunctionValue::has_ST_HierBranchStyle() const
    {    
    return m_has_ST_HierBranchStyle;
    }

    ST_HierBranchStyle* ST_FunctionValue::mutable_ST_HierBranchStyle()
    {    
    clear_int();
    clear_boolean();
    clear_ST_Direction();
    clear_ST_AnimOneStr();
    clear_ST_AnimLvlStr();
    clear_ST_ResizeHandlesStr();
    m_has_ST_HierBranchStyle = true;
    if (!m_ST_HierBranchStyle)
    {
        m_ST_HierBranchStyle = new ST_HierBranchStyle();
    }
    return m_ST_HierBranchStyle;
    }

    const ST_HierBranchStyle& ST_FunctionValue::get_ST_HierBranchStyle() const
    {    
    if (m_ST_HierBranchStyle)
    {
        return *m_ST_HierBranchStyle;
    }
    return ST_HierBranchStyle::default_instance();
    }

    void ST_FunctionValue::clear_ST_HierBranchStyle()
    {    
    m_has_ST_HierBranchStyle = false;
    if (m_ST_HierBranchStyle)
    {
        delete m_ST_HierBranchStyle;
        m_ST_HierBranchStyle = NULL;
    }
    }

    bool ST_FunctionValue::has_ST_AnimOneStr() const
    {    
    return m_has_ST_AnimOneStr;
    }

    ST_AnimOneStr* ST_FunctionValue::mutable_ST_AnimOneStr()
    {    
    clear_int();
    clear_boolean();
    clear_ST_Direction();
    clear_ST_HierBranchStyle();
    clear_ST_AnimLvlStr();
    clear_ST_ResizeHandlesStr();
    m_has_ST_AnimOneStr = true;
    if (!m_ST_AnimOneStr)
    {
        m_ST_AnimOneStr = new ST_AnimOneStr();
    }
    return m_ST_AnimOneStr;
    }

    const ST_AnimOneStr& ST_FunctionValue::get_ST_AnimOneStr() const
    {    
    if (m_ST_AnimOneStr)
    {
        return *m_ST_AnimOneStr;
    }
    return ST_AnimOneStr::default_instance();
    }

    void ST_FunctionValue::clear_ST_AnimOneStr()
    {    
    m_has_ST_AnimOneStr = false;
    if (m_ST_AnimOneStr)
    {
        delete m_ST_AnimOneStr;
        m_ST_AnimOneStr = NULL;
    }
    }

    bool ST_FunctionValue::has_ST_AnimLvlStr() const
    {    
    return m_has_ST_AnimLvlStr;
    }

    ST_AnimLvlStr* ST_FunctionValue::mutable_ST_AnimLvlStr()
    {    
    clear_int();
    clear_boolean();
    clear_ST_Direction();
    clear_ST_HierBranchStyle();
    clear_ST_AnimOneStr();
    clear_ST_ResizeHandlesStr();
    m_has_ST_AnimLvlStr = true;
    if (!m_ST_AnimLvlStr)
    {
        m_ST_AnimLvlStr = new ST_AnimLvlStr();
    }
    return m_ST_AnimLvlStr;
    }

    const ST_AnimLvlStr& ST_FunctionValue::get_ST_AnimLvlStr() const
    {    
    if (m_ST_AnimLvlStr)
    {
        return *m_ST_AnimLvlStr;
    }
    return ST_AnimLvlStr::default_instance();
    }

    void ST_FunctionValue::clear_ST_AnimLvlStr()
    {    
    m_has_ST_AnimLvlStr = false;
    if (m_ST_AnimLvlStr)
    {
        delete m_ST_AnimLvlStr;
        m_ST_AnimLvlStr = NULL;
    }
    }

    bool ST_FunctionValue::has_ST_ResizeHandlesStr() const
    {    
    return m_has_ST_ResizeHandlesStr;
    }

    ST_ResizeHandlesStr* ST_FunctionValue::mutable_ST_ResizeHandlesStr()
    {    
    clear_int();
    clear_boolean();
    clear_ST_Direction();
    clear_ST_HierBranchStyle();
    clear_ST_AnimOneStr();
    clear_ST_AnimLvlStr();
    m_has_ST_ResizeHandlesStr = true;
    if (!m_ST_ResizeHandlesStr)
    {
        m_ST_ResizeHandlesStr = new ST_ResizeHandlesStr();
    }
    return m_ST_ResizeHandlesStr;
    }

    const ST_ResizeHandlesStr& ST_FunctionValue::get_ST_ResizeHandlesStr() const
    {    
    if (m_ST_ResizeHandlesStr)
    {
        return *m_ST_ResizeHandlesStr;
    }
    return ST_ResizeHandlesStr::default_instance();
    }

    void ST_FunctionValue::clear_ST_ResizeHandlesStr()
    {    
    m_has_ST_ResizeHandlesStr = false;
    if (m_ST_ResizeHandlesStr)
    {
        delete m_ST_ResizeHandlesStr;
        m_ST_ResizeHandlesStr = NULL;
    }
    }

    std::string ST_FunctionValue::toString() const
    {    
    if (m_has_int)
    {
        
    std::stringstream strStream;
    strStream << m_int;
    return strStream.str();
    
    }
    
    if (m_has_boolean)
    {
        return XSD::XMLBooleanStr(m_boolean);
    }
    
    if (m_has_ST_Direction)
    {
        return m_ST_Direction->toString();
    }
    
    if (m_has_ST_HierBranchStyle)
    {
        return m_ST_HierBranchStyle->toString();
    }
    
    if (m_has_ST_AnimOneStr)
    {
        return m_ST_AnimOneStr->toString();
    }
    
    if (m_has_ST_AnimLvlStr)
    {
        return m_ST_AnimLvlStr->toString();
    }
    
    if (m_has_ST_ResizeHandlesStr)
    {
        return m_ST_ResizeHandlesStr->toString();
    }
    
    return string();
    }

    void ST_FunctionValue::clear()
    {    clear_int();
    clear_boolean();
    clear_ST_Direction();
    clear_ST_HierBranchStyle();
    clear_ST_AnimOneStr();
    clear_ST_AnimLvlStr();
    clear_ST_ResizeHandlesStr();    }

    void ST_FunctionValue::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_int)
    {
        _outStream << " " << _attrName << "=\"" << m_int << "\"";
        return;
    }
    
    if (m_has_boolean)
    {
        _outStream << " " << _attrName << "=\"" << XSD::XMLBooleanStr(m_boolean) << "\"";
        return;
    }
    
    if (m_has_ST_Direction)
    {
        m_ST_Direction->toXmlAttr(_attrName, _outStream);
        return;
    }
    
    if (m_has_ST_HierBranchStyle)
    {
        m_ST_HierBranchStyle->toXmlAttr(_attrName, _outStream);
        return;
    }
    
    if (m_has_ST_AnimOneStr)
    {
        m_ST_AnimOneStr->toXmlAttr(_attrName, _outStream);
        return;
    }
    
    if (m_has_ST_AnimLvlStr)
    {
        m_ST_AnimLvlStr->toXmlAttr(_attrName, _outStream);
        return;
    }
    
    if (m_has_ST_ResizeHandlesStr)
    {
        m_ST_ResizeHandlesStr->toXmlAttr(_attrName, _outStream);
        return;
    }
    }

    const ST_FunctionValue& ST_FunctionValue::default_instance()
    {    
    if (!ST_FunctionValue::default_instance_)
    {
        ST_FunctionValue::default_instance_ = new ST_FunctionValue();
    }
    return *ST_FunctionValue::default_instance_;
    }

ST_FunctionValue* ST_FunctionValue::default_instance_ = NULL;

    // ST_VariableType
    ST_VariableType::ST_VariableType()
    :m_has_type(false)
    {
    }
    ST_VariableType::ST_VariableType(const ST_VariableType::Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
    }
    ST_VariableType::~ST_VariableType()
{
    clear();    }
    bool ST_VariableType::has_type() const
    {    
    return m_has_type;
    }

    void ST_VariableType::set_type(const ST_VariableType::Type& _type)
    {    
    m_has_type = true;
    m_type = _type;
    }

    const ST_VariableType::Type& ST_VariableType::get_type() const
    {    
                return m_type;
                }

    std::string ST_VariableType::toString() const
    {    
    return ST_VariableType::TypeStrList[m_type];
    }

    void ST_VariableType::clear()
    {    
    m_has_type = false;
    }

    void ST_VariableType::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_type)
    {
    _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_VariableType& ST_VariableType::default_instance()
    {    
    if (!ST_VariableType::default_instance_)
    {
        ST_VariableType::default_instance_ = new ST_VariableType();
    }
    return *ST_VariableType::default_instance_;
    }

    const std::string ST_VariableType::TypeStrList[] =
    {
        "none",
        "orgChart",
        "chMax",
        "chPref",
        "bulEnabled",
        "dir",
        "hierBranch",
        "animOne",
        "animLvl",
        "resizeHandles"
    };
ST_VariableType* ST_VariableType::default_instance_ = NULL;

    // ST_FunctionArgument
    ST_FunctionArgument::ST_FunctionArgument()
    :m_has_ST_VariableType(false),
    m_ST_VariableType(NULL)
    {
    }
    ST_FunctionArgument::~ST_FunctionArgument()
{
    clear();    }
    bool ST_FunctionArgument::has_ST_VariableType() const
    {    
    return m_has_ST_VariableType;
    }

    ST_VariableType* ST_FunctionArgument::mutable_ST_VariableType()
    {    
    
    m_has_ST_VariableType = true;
    if (!m_ST_VariableType)
    {
        m_ST_VariableType = new ST_VariableType();
    }
    return m_ST_VariableType;
    }

    const ST_VariableType& ST_FunctionArgument::get_ST_VariableType() const
    {    
    if (m_ST_VariableType)
    {
        return *m_ST_VariableType;
    }
    return ST_VariableType::default_instance();
    }

    void ST_FunctionArgument::clear_ST_VariableType()
    {    
    m_has_ST_VariableType = false;
    if (m_ST_VariableType)
    {
        delete m_ST_VariableType;
        m_ST_VariableType = NULL;
    }
    }

    std::string ST_FunctionArgument::toString() const
    {    
    if (m_has_ST_VariableType)
    {
        return m_ST_VariableType->toString();
    }
    
    return string();
    }

    void ST_FunctionArgument::clear()
    {    clear_ST_VariableType();    }

    void ST_FunctionArgument::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_ST_VariableType)
    {
        m_ST_VariableType->toXmlAttr(_attrName, _outStream);
        return;
    }
    }

    const ST_FunctionArgument& ST_FunctionArgument::default_instance()
    {    
    if (!ST_FunctionArgument::default_instance_)
    {
        ST_FunctionArgument::default_instance_ = new ST_FunctionArgument();
    }
    return *ST_FunctionArgument::default_instance_;
    }

ST_FunctionArgument* ST_FunctionArgument::default_instance_ = NULL;

    // ST_OutputShapeType
    ST_OutputShapeType::ST_OutputShapeType()
    :m_has_type(false)
    {
    }
    ST_OutputShapeType::ST_OutputShapeType(const ST_OutputShapeType::Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
    }
    ST_OutputShapeType::~ST_OutputShapeType()
{
    clear();    }
    bool ST_OutputShapeType::has_type() const
    {    
    return m_has_type;
    }

    void ST_OutputShapeType::set_type(const ST_OutputShapeType::Type& _type)
    {    
    m_has_type = true;
    m_type = _type;
    }

    const ST_OutputShapeType::Type& ST_OutputShapeType::get_type() const
    {    
                return m_type;
                }

    std::string ST_OutputShapeType::toString() const
    {    
    return ST_OutputShapeType::TypeStrList[m_type];
    }

    void ST_OutputShapeType::clear()
    {    
    m_has_type = false;
    }

    void ST_OutputShapeType::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_type)
    {
    _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_OutputShapeType& ST_OutputShapeType::default_instance()
    {    
    if (!ST_OutputShapeType::default_instance_)
    {
        ST_OutputShapeType::default_instance_ = new ST_OutputShapeType();
    }
    return *ST_OutputShapeType::default_instance_;
    }

    const std::string ST_OutputShapeType::TypeStrList[] =
    {
        "none",
        "conn"
    };
ST_OutputShapeType* ST_OutputShapeType::default_instance_ = NULL;

    // CT_CTName
    CT_CTName::CT_CTName()
    :m_has_lang_attr(false),
    m_lang_attr(""),
    m_has_val_attr(false),
    m_val_attr("")
    {
    }
    CT_CTName::~CT_CTName()
{
    clear();    }
    void CT_CTName::clear()
    {    
    m_has_lang_attr = false;
    m_lang_attr.clear();
    
    m_has_val_attr = false;
    m_val_attr.clear();
    }

    void CT_CTName::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
    if (m_has_lang_attr)
    {
        _outStream << " " << "lang" << "=\"" << m_lang_attr << "\"";
    }
    
    
    if (m_has_val_attr)
    {
        _outStream << " " << "val" << "=\"" << m_val_attr << "\"";
    }
    
            _outStream << ">";
            
            _outStream << "</" << _elemName << ">";
                }

    const CT_CTName& CT_CTName::default_instance()
    {    
    if (!CT_CTName::default_instance_)
    {
        CT_CTName::default_instance_ = new CT_CTName();
    }
    return *CT_CTName::default_instance_;
    }

    bool CT_CTName::has_lang_attr() const
    {    
    return m_has_lang_attr;
    }

    void CT_CTName::set_lang_attr(const XSD::string_& _lang_attr)
    {    
    m_has_lang_attr = true;
    m_lang_attr = _lang_attr;
    }

    const XSD::string_& CT_CTName::get_lang_attr() const
    {    
    return m_lang_attr;
    }

    bool CT_CTName::has_val_attr() const
    {    
    return m_has_val_attr;
    }

    void CT_CTName::set_val_attr(const XSD::string_& _val_attr)
    {    
    m_has_val_attr = true;
    m_val_attr = _val_attr;
    }

    const XSD::string_& CT_CTName::get_val_attr() const
    {    
    return m_val_attr;
    }

CT_CTName* CT_CTName::default_instance_ = NULL;

    // CT_CTDescription
    CT_CTDescription::CT_CTDescription()
    :m_has_lang_attr(false),
    m_lang_attr(""),
    m_has_val_attr(false),
    m_val_attr("")
    {
    }
    CT_CTDescription::~CT_CTDescription()
{
    clear();    }
    void CT_CTDescription::clear()
    {    
    m_has_lang_attr = false;
    m_lang_attr.clear();
    
    m_has_val_attr = false;
    m_val_attr.clear();
    }

    void CT_CTDescription::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
    if (m_has_lang_attr)
    {
        _outStream << " " << "lang" << "=\"" << m_lang_attr << "\"";
    }
    
    
    if (m_has_val_attr)
    {
        _outStream << " " << "val" << "=\"" << m_val_attr << "\"";
    }
    
            _outStream << ">";
            
            _outStream << "</" << _elemName << ">";
                }

    const CT_CTDescription& CT_CTDescription::default_instance()
    {    
    if (!CT_CTDescription::default_instance_)
    {
        CT_CTDescription::default_instance_ = new CT_CTDescription();
    }
    return *CT_CTDescription::default_instance_;
    }

    bool CT_CTDescription::has_lang_attr() const
    {    
    return m_has_lang_attr;
    }

    void CT_CTDescription::set_lang_attr(const XSD::string_& _lang_attr)
    {    
    m_has_lang_attr = true;
    m_lang_attr = _lang_attr;
    }

    const XSD::string_& CT_CTDescription::get_lang_attr() const
    {    
    return m_lang_attr;
    }

    bool CT_CTDescription::has_val_attr() const
    {    
    return m_has_val_attr;
    }

    void CT_CTDescription::set_val_attr(const XSD::string_& _val_attr)
    {    
    m_has_val_attr = true;
    m_val_attr = _val_attr;
    }

    const XSD::string_& CT_CTDescription::get_val_attr() const
    {    
    return m_val_attr;
    }

CT_CTDescription* CT_CTDescription::default_instance_ = NULL;

    // CT_CTCategory
    CT_CTCategory::CT_CTCategory()
    :m_has_type_attr(false),
    m_type_attr(""),
    m_has_pri_attr(false),
    m_pri_attr(0)
    {
    }
    CT_CTCategory::~CT_CTCategory()
{
    clear();    }
    void CT_CTCategory::clear()
    {    
    m_has_type_attr = false;
    m_type_attr.clear();
    
    m_has_pri_attr = false;
    m_pri_attr = 0;
    }

    void CT_CTCategory::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
    if (m_has_type_attr)
    {
        _outStream << " " << "type" << "=\"" << m_type_attr << "\"";
    }
    
    
    if (m_has_pri_attr)
    {
        _outStream << " " << "pri" << "=\"" << m_pri_attr << "\"";
    }
    
            _outStream << ">";
            
            _outStream << "</" << _elemName << ">";
                }

    const CT_CTCategory& CT_CTCategory::default_instance()
    {    
    if (!CT_CTCategory::default_instance_)
    {
        CT_CTCategory::default_instance_ = new CT_CTCategory();
    }
    return *CT_CTCategory::default_instance_;
    }

    bool CT_CTCategory::has_type_attr() const
    {    
    return m_has_type_attr;
    }

    void CT_CTCategory::set_type_attr(const XSD::anyURI_& _type_attr)
    {    
    m_has_type_attr = true;
    m_type_attr = _type_attr;
    }

    const XSD::anyURI_& CT_CTCategory::get_type_attr() const
    {    
    return m_type_attr;
    }

    bool CT_CTCategory::has_pri_attr() const
    {    
    return m_has_pri_attr;
    }

    void CT_CTCategory::set_pri_attr(const XSD::unsignedInt_& _pri_attr)
    {    
    m_has_pri_attr = true;
    m_pri_attr = _pri_attr;
    }

    const XSD::unsignedInt_& CT_CTCategory::get_pri_attr() const
    {    
    return m_pri_attr;
    }

CT_CTCategory* CT_CTCategory::default_instance_ = NULL;

    // CT_CTCategories
    CT_CTCategories::CT_CTCategories()

    {
    }
    CT_CTCategories::~CT_CTCategories()
{
    clear();    }
    CT_CTCategory* CT_CTCategories::add_cat()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_CTCategory* pNewChild = pChildGroup->mutable_cat();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    void CT_CTCategories::clear()
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

    void CT_CTCategories::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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
            if ((*iter)->has_cat())
            {
                (*iter)->get_cat().toXmlElem("diagram:cat", "", _outStream);
            }
        }
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_CTCategories& CT_CTCategories::default_instance()
    {    
    if (!CT_CTCategories::default_instance_)
    {
        CT_CTCategories::default_instance_ = new CT_CTCategories();
    }
    return *CT_CTCategories::default_instance_;
    }


    // CT_CTCategories::ChildGroup_1
    CT_CTCategories::ChildGroup_1::ChildGroup_1()
    :m_has_cat(false),
    m_cat(NULL)
    {
    }
    bool CT_CTCategories::ChildGroup_1::has_cat() const
    {    
    return m_has_cat;
    }

    CT_CTCategory* CT_CTCategories::ChildGroup_1::mutable_cat()
    {    
    
    m_has_cat = true;
    if (!m_cat)
    {
        m_cat = new CT_CTCategory();
    }
    return m_cat;
    }

    const CT_CTCategory& CT_CTCategories::ChildGroup_1::get_cat() const
    {    
    if (m_cat)
    {
        return *m_cat;
    }
    return CT_CTCategory::default_instance();
    }

CT_CTCategories* CT_CTCategories::default_instance_ = NULL;

    // CT_Colors
    CT_Colors::CT_Colors()
    :m_has_meth_attr(false),
    m_meth_attr(NULL),
    m_has_hueDir_attr(false),
    m_hueDir_attr(NULL)
    {
    }
    CT_Colors::~CT_Colors()
{
    clear();    }
    ns_a::CT_ScRgbColor* CT_Colors::add_a_scrgbClr()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_a::CT_ScRgbColor* pNewChild = pChildGroup->mutable_a_scrgbClr();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_a::CT_SRgbColor* CT_Colors::add_a_srgbClr()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_a::CT_SRgbColor* pNewChild = pChildGroup->mutable_a_srgbClr();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_a::CT_HslColor* CT_Colors::add_a_hslClr()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_a::CT_HslColor* pNewChild = pChildGroup->mutable_a_hslClr();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_a::CT_SystemColor* CT_Colors::add_a_sysClr()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_a::CT_SystemColor* pNewChild = pChildGroup->mutable_a_sysClr();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_a::CT_SchemeColor* CT_Colors::add_a_schemeClr()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_a::CT_SchemeColor* pNewChild = pChildGroup->mutable_a_schemeClr();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_a::CT_PresetColor* CT_Colors::add_a_prstClr()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_a::CT_PresetColor* pNewChild = pChildGroup->mutable_a_prstClr();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    void CT_Colors::clear()
    {    
    m_has_meth_attr = false;
    
    if (m_meth_attr)
    {
        delete m_meth_attr;
        m_meth_attr = NULL;
    }
    
    
    m_has_hueDir_attr = false;
    
    if (m_hueDir_attr)
    {
        delete m_hueDir_attr;
        m_hueDir_attr = NULL;
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

    void CT_Colors::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
    if (m_has_meth_attr)
    {
        m_meth_attr->toXmlAttr("meth", _outStream);
    }
    
    
    if (m_has_hueDir_attr)
    {
        m_hueDir_attr->toXmlAttr("hueDir", _outStream);
    }
    
            _outStream << ">";
            
    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_a_scrgbClr())
            {
                (*iter)->get_a_scrgbClr().toXmlElem("a:scrgbClr", "", _outStream);
            }
            else if ((*iter)->has_a_srgbClr())
            {
                (*iter)->get_a_srgbClr().toXmlElem("a:srgbClr", "", _outStream);
            }
            else if ((*iter)->has_a_hslClr())
            {
                (*iter)->get_a_hslClr().toXmlElem("a:hslClr", "", _outStream);
            }
            else if ((*iter)->has_a_sysClr())
            {
                (*iter)->get_a_sysClr().toXmlElem("a:sysClr", "", _outStream);
            }
            else if ((*iter)->has_a_schemeClr())
            {
                (*iter)->get_a_schemeClr().toXmlElem("a:schemeClr", "", _outStream);
            }
            else if ((*iter)->has_a_prstClr())
            {
                (*iter)->get_a_prstClr().toXmlElem("a:prstClr", "", _outStream);
            }
        }
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_Colors& CT_Colors::default_instance()
    {    
    if (!CT_Colors::default_instance_)
    {
        CT_Colors::default_instance_ = new CT_Colors();
    }
    return *CT_Colors::default_instance_;
    }

    bool CT_Colors::has_meth_attr() const
    {    
    return m_has_meth_attr;
    }

    void CT_Colors::set_meth_attr(const ST_ClrAppMethod& _meth_attr)
    {    
    m_has_meth_attr = true;
    m_meth_attr = new ST_ClrAppMethod(_meth_attr);
    }

    const ST_ClrAppMethod& CT_Colors::get_meth_attr() const
    {    
    if (m_meth_attr)
    {
        return *m_meth_attr;
    }
    return ST_ClrAppMethod::default_instance();
    }

    bool CT_Colors::has_hueDir_attr() const
    {    
    return m_has_hueDir_attr;
    }

    void CT_Colors::set_hueDir_attr(const ST_HueDir& _hueDir_attr)
    {    
    m_has_hueDir_attr = true;
    m_hueDir_attr = new ST_HueDir(_hueDir_attr);
    }

    const ST_HueDir& CT_Colors::get_hueDir_attr() const
    {    
    if (m_hueDir_attr)
    {
        return *m_hueDir_attr;
    }
    return ST_HueDir::default_instance();
    }


    // CT_Colors::ChildGroup_1
    CT_Colors::ChildGroup_1::ChildGroup_1()
    :m_has_a_scrgbClr(false),
    m_a_scrgbClr(NULL),
    m_has_a_srgbClr(false),
    m_a_srgbClr(NULL),
    m_has_a_hslClr(false),
    m_a_hslClr(NULL),
    m_has_a_sysClr(false),
    m_a_sysClr(NULL),
    m_has_a_schemeClr(false),
    m_a_schemeClr(NULL),
    m_has_a_prstClr(false),
    m_a_prstClr(NULL)
    {
    }
    bool CT_Colors::ChildGroup_1::has_a_scrgbClr() const
    {    
    return m_has_a_scrgbClr;
    }

    ns_a::CT_ScRgbColor* CT_Colors::ChildGroup_1::mutable_a_scrgbClr()
    {    
    
    m_has_a_srgbClr = false;
    
    if (m_a_srgbClr)
    {
        delete m_a_srgbClr;
        m_a_srgbClr = NULL;
    }
    ;
    
    m_has_a_hslClr = false;
    
    if (m_a_hslClr)
    {
        delete m_a_hslClr;
        m_a_hslClr = NULL;
    }
    ;
    
    m_has_a_sysClr = false;
    
    if (m_a_sysClr)
    {
        delete m_a_sysClr;
        m_a_sysClr = NULL;
    }
    ;
    
    m_has_a_schemeClr = false;
    
    if (m_a_schemeClr)
    {
        delete m_a_schemeClr;
        m_a_schemeClr = NULL;
    }
    ;
    
    m_has_a_prstClr = false;
    
    if (m_a_prstClr)
    {
        delete m_a_prstClr;
        m_a_prstClr = NULL;
    }
    ;
    
    m_has_a_scrgbClr = true;
    if (!m_a_scrgbClr)
    {
        m_a_scrgbClr = new ns_a::CT_ScRgbColor();
    }
    return m_a_scrgbClr;
    }

    const ns_a::CT_ScRgbColor& CT_Colors::ChildGroup_1::get_a_scrgbClr() const
    {    
    if (m_a_scrgbClr)
    {
        return *m_a_scrgbClr;
    }
    return ns_a::CT_ScRgbColor::default_instance();
    }

    bool CT_Colors::ChildGroup_1::has_a_srgbClr() const
    {    
    return m_has_a_srgbClr;
    }

    ns_a::CT_SRgbColor* CT_Colors::ChildGroup_1::mutable_a_srgbClr()
    {    
    
    m_has_a_scrgbClr = false;
    
    if (m_a_scrgbClr)
    {
        delete m_a_scrgbClr;
        m_a_scrgbClr = NULL;
    }
    ;
    
    m_has_a_hslClr = false;
    
    if (m_a_hslClr)
    {
        delete m_a_hslClr;
        m_a_hslClr = NULL;
    }
    ;
    
    m_has_a_sysClr = false;
    
    if (m_a_sysClr)
    {
        delete m_a_sysClr;
        m_a_sysClr = NULL;
    }
    ;
    
    m_has_a_schemeClr = false;
    
    if (m_a_schemeClr)
    {
        delete m_a_schemeClr;
        m_a_schemeClr = NULL;
    }
    ;
    
    m_has_a_prstClr = false;
    
    if (m_a_prstClr)
    {
        delete m_a_prstClr;
        m_a_prstClr = NULL;
    }
    ;
    
    m_has_a_srgbClr = true;
    if (!m_a_srgbClr)
    {
        m_a_srgbClr = new ns_a::CT_SRgbColor();
    }
    return m_a_srgbClr;
    }

    const ns_a::CT_SRgbColor& CT_Colors::ChildGroup_1::get_a_srgbClr() const
    {    
    if (m_a_srgbClr)
    {
        return *m_a_srgbClr;
    }
    return ns_a::CT_SRgbColor::default_instance();
    }

    bool CT_Colors::ChildGroup_1::has_a_hslClr() const
    {    
    return m_has_a_hslClr;
    }

    ns_a::CT_HslColor* CT_Colors::ChildGroup_1::mutable_a_hslClr()
    {    
    
    m_has_a_scrgbClr = false;
    
    if (m_a_scrgbClr)
    {
        delete m_a_scrgbClr;
        m_a_scrgbClr = NULL;
    }
    ;
    
    m_has_a_srgbClr = false;
    
    if (m_a_srgbClr)
    {
        delete m_a_srgbClr;
        m_a_srgbClr = NULL;
    }
    ;
    
    m_has_a_sysClr = false;
    
    if (m_a_sysClr)
    {
        delete m_a_sysClr;
        m_a_sysClr = NULL;
    }
    ;
    
    m_has_a_schemeClr = false;
    
    if (m_a_schemeClr)
    {
        delete m_a_schemeClr;
        m_a_schemeClr = NULL;
    }
    ;
    
    m_has_a_prstClr = false;
    
    if (m_a_prstClr)
    {
        delete m_a_prstClr;
        m_a_prstClr = NULL;
    }
    ;
    
    m_has_a_hslClr = true;
    if (!m_a_hslClr)
    {
        m_a_hslClr = new ns_a::CT_HslColor();
    }
    return m_a_hslClr;
    }

    const ns_a::CT_HslColor& CT_Colors::ChildGroup_1::get_a_hslClr() const
    {    
    if (m_a_hslClr)
    {
        return *m_a_hslClr;
    }
    return ns_a::CT_HslColor::default_instance();
    }

    bool CT_Colors::ChildGroup_1::has_a_sysClr() const
    {    
    return m_has_a_sysClr;
    }

    ns_a::CT_SystemColor* CT_Colors::ChildGroup_1::mutable_a_sysClr()
    {    
    
    m_has_a_scrgbClr = false;
    
    if (m_a_scrgbClr)
    {
        delete m_a_scrgbClr;
        m_a_scrgbClr = NULL;
    }
    ;
    
    m_has_a_srgbClr = false;
    
    if (m_a_srgbClr)
    {
        delete m_a_srgbClr;
        m_a_srgbClr = NULL;
    }
    ;
    
    m_has_a_hslClr = false;
    
    if (m_a_hslClr)
    {
        delete m_a_hslClr;
        m_a_hslClr = NULL;
    }
    ;
    
    m_has_a_schemeClr = false;
    
    if (m_a_schemeClr)
    {
        delete m_a_schemeClr;
        m_a_schemeClr = NULL;
    }
    ;
    
    m_has_a_prstClr = false;
    
    if (m_a_prstClr)
    {
        delete m_a_prstClr;
        m_a_prstClr = NULL;
    }
    ;
    
    m_has_a_sysClr = true;
    if (!m_a_sysClr)
    {
        m_a_sysClr = new ns_a::CT_SystemColor();
    }
    return m_a_sysClr;
    }

    const ns_a::CT_SystemColor& CT_Colors::ChildGroup_1::get_a_sysClr() const
    {    
    if (m_a_sysClr)
    {
        return *m_a_sysClr;
    }
    return ns_a::CT_SystemColor::default_instance();
    }

    bool CT_Colors::ChildGroup_1::has_a_schemeClr() const
    {    
    return m_has_a_schemeClr;
    }

    ns_a::CT_SchemeColor* CT_Colors::ChildGroup_1::mutable_a_schemeClr()
    {    
    
    m_has_a_scrgbClr = false;
    
    if (m_a_scrgbClr)
    {
        delete m_a_scrgbClr;
        m_a_scrgbClr = NULL;
    }
    ;
    
    m_has_a_srgbClr = false;
    
    if (m_a_srgbClr)
    {
        delete m_a_srgbClr;
        m_a_srgbClr = NULL;
    }
    ;
    
    m_has_a_hslClr = false;
    
    if (m_a_hslClr)
    {
        delete m_a_hslClr;
        m_a_hslClr = NULL;
    }
    ;
    
    m_has_a_sysClr = false;
    
    if (m_a_sysClr)
    {
        delete m_a_sysClr;
        m_a_sysClr = NULL;
    }
    ;
    
    m_has_a_prstClr = false;
    
    if (m_a_prstClr)
    {
        delete m_a_prstClr;
        m_a_prstClr = NULL;
    }
    ;
    
    m_has_a_schemeClr = true;
    if (!m_a_schemeClr)
    {
        m_a_schemeClr = new ns_a::CT_SchemeColor();
    }
    return m_a_schemeClr;
    }

    const ns_a::CT_SchemeColor& CT_Colors::ChildGroup_1::get_a_schemeClr() const
    {    
    if (m_a_schemeClr)
    {
        return *m_a_schemeClr;
    }
    return ns_a::CT_SchemeColor::default_instance();
    }

    bool CT_Colors::ChildGroup_1::has_a_prstClr() const
    {    
    return m_has_a_prstClr;
    }

    ns_a::CT_PresetColor* CT_Colors::ChildGroup_1::mutable_a_prstClr()
    {    
    
    m_has_a_scrgbClr = false;
    
    if (m_a_scrgbClr)
    {
        delete m_a_scrgbClr;
        m_a_scrgbClr = NULL;
    }
    ;
    
    m_has_a_srgbClr = false;
    
    if (m_a_srgbClr)
    {
        delete m_a_srgbClr;
        m_a_srgbClr = NULL;
    }
    ;
    
    m_has_a_hslClr = false;
    
    if (m_a_hslClr)
    {
        delete m_a_hslClr;
        m_a_hslClr = NULL;
    }
    ;
    
    m_has_a_sysClr = false;
    
    if (m_a_sysClr)
    {
        delete m_a_sysClr;
        m_a_sysClr = NULL;
    }
    ;
    
    m_has_a_schemeClr = false;
    
    if (m_a_schemeClr)
    {
        delete m_a_schemeClr;
        m_a_schemeClr = NULL;
    }
    ;
    
    m_has_a_prstClr = true;
    if (!m_a_prstClr)
    {
        m_a_prstClr = new ns_a::CT_PresetColor();
    }
    return m_a_prstClr;
    }

    const ns_a::CT_PresetColor& CT_Colors::ChildGroup_1::get_a_prstClr() const
    {    
    if (m_a_prstClr)
    {
        return *m_a_prstClr;
    }
    return ns_a::CT_PresetColor::default_instance();
    }

CT_Colors* CT_Colors::default_instance_ = NULL;

    // CT_CTStyleLabel
    CT_CTStyleLabel::CT_CTStyleLabel()
    :m_has_fillClrLst(false),
    m_fillClrLst(NULL),
    m_has_linClrLst(false),
    m_linClrLst(NULL),
    m_has_effectClrLst(false),
    m_effectClrLst(NULL),
    m_has_txLinClrLst(false),
    m_txLinClrLst(NULL),
    m_has_txFillClrLst(false),
    m_txFillClrLst(NULL),
    m_has_txEffectClrLst(false),
    m_txEffectClrLst(NULL),
    m_has_extLst(false),
    m_extLst(NULL),
    m_has_name_attr(false),
    m_name_attr("")
    {
    }
    CT_CTStyleLabel::~CT_CTStyleLabel()
{
    clear();    }
    bool CT_CTStyleLabel::has_fillClrLst() const
    {    
    return m_has_fillClrLst;
    }

    CT_Colors* CT_CTStyleLabel::mutable_fillClrLst()
    {    
    m_has_fillClrLst = true;
    if (!m_fillClrLst)
    {
        m_fillClrLst = new CT_Colors();
    }
    return m_fillClrLst;
    }

    const CT_Colors& CT_CTStyleLabel::get_fillClrLst() const
    {    
    if (m_fillClrLst)
    {
        return *m_fillClrLst;
    }
    return CT_Colors::default_instance();
    }

    bool CT_CTStyleLabel::has_linClrLst() const
    {    
    return m_has_linClrLst;
    }

    CT_Colors* CT_CTStyleLabel::mutable_linClrLst()
    {    
    m_has_linClrLst = true;
    if (!m_linClrLst)
    {
        m_linClrLst = new CT_Colors();
    }
    return m_linClrLst;
    }

    const CT_Colors& CT_CTStyleLabel::get_linClrLst() const
    {    
    if (m_linClrLst)
    {
        return *m_linClrLst;
    }
    return CT_Colors::default_instance();
    }

    bool CT_CTStyleLabel::has_effectClrLst() const
    {    
    return m_has_effectClrLst;
    }

    CT_Colors* CT_CTStyleLabel::mutable_effectClrLst()
    {    
    m_has_effectClrLst = true;
    if (!m_effectClrLst)
    {
        m_effectClrLst = new CT_Colors();
    }
    return m_effectClrLst;
    }

    const CT_Colors& CT_CTStyleLabel::get_effectClrLst() const
    {    
    if (m_effectClrLst)
    {
        return *m_effectClrLst;
    }
    return CT_Colors::default_instance();
    }

    bool CT_CTStyleLabel::has_txLinClrLst() const
    {    
    return m_has_txLinClrLst;
    }

    CT_Colors* CT_CTStyleLabel::mutable_txLinClrLst()
    {    
    m_has_txLinClrLst = true;
    if (!m_txLinClrLst)
    {
        m_txLinClrLst = new CT_Colors();
    }
    return m_txLinClrLst;
    }

    const CT_Colors& CT_CTStyleLabel::get_txLinClrLst() const
    {    
    if (m_txLinClrLst)
    {
        return *m_txLinClrLst;
    }
    return CT_Colors::default_instance();
    }

    bool CT_CTStyleLabel::has_txFillClrLst() const
    {    
    return m_has_txFillClrLst;
    }

    CT_Colors* CT_CTStyleLabel::mutable_txFillClrLst()
    {    
    m_has_txFillClrLst = true;
    if (!m_txFillClrLst)
    {
        m_txFillClrLst = new CT_Colors();
    }
    return m_txFillClrLst;
    }

    const CT_Colors& CT_CTStyleLabel::get_txFillClrLst() const
    {    
    if (m_txFillClrLst)
    {
        return *m_txFillClrLst;
    }
    return CT_Colors::default_instance();
    }

    bool CT_CTStyleLabel::has_txEffectClrLst() const
    {    
    return m_has_txEffectClrLst;
    }

    CT_Colors* CT_CTStyleLabel::mutable_txEffectClrLst()
    {    
    m_has_txEffectClrLst = true;
    if (!m_txEffectClrLst)
    {
        m_txEffectClrLst = new CT_Colors();
    }
    return m_txEffectClrLst;
    }

    const CT_Colors& CT_CTStyleLabel::get_txEffectClrLst() const
    {    
    if (m_txEffectClrLst)
    {
        return *m_txEffectClrLst;
    }
    return CT_Colors::default_instance();
    }

    bool CT_CTStyleLabel::has_extLst() const
    {    
    return m_has_extLst;
    }

    ns_a::CT_OfficeArtExtensionList* CT_CTStyleLabel::mutable_extLst()
    {    
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new ns_a::CT_OfficeArtExtensionList();
    }
    return m_extLst;
    }

    const ns_a::CT_OfficeArtExtensionList& CT_CTStyleLabel::get_extLst() const
    {    
    if (m_extLst)
    {
        return *m_extLst;
    }
    return ns_a::CT_OfficeArtExtensionList::default_instance();
    }

    void CT_CTStyleLabel::clear()
    {    
    m_has_name_attr = false;
    m_name_attr.clear();
    
    m_has_fillClrLst = false;
    
    if (m_fillClrLst)
    {
        delete m_fillClrLst;
        m_fillClrLst = NULL;
    }
    
    
    m_has_linClrLst = false;
    
    if (m_linClrLst)
    {
        delete m_linClrLst;
        m_linClrLst = NULL;
    }
    
    
    m_has_effectClrLst = false;
    
    if (m_effectClrLst)
    {
        delete m_effectClrLst;
        m_effectClrLst = NULL;
    }
    
    
    m_has_txLinClrLst = false;
    
    if (m_txLinClrLst)
    {
        delete m_txLinClrLst;
        m_txLinClrLst = NULL;
    }
    
    
    m_has_txFillClrLst = false;
    
    if (m_txFillClrLst)
    {
        delete m_txFillClrLst;
        m_txFillClrLst = NULL;
    }
    
    
    m_has_txEffectClrLst = false;
    
    if (m_txEffectClrLst)
    {
        delete m_txEffectClrLst;
        m_txEffectClrLst = NULL;
    }
    
    
    m_has_extLst = false;
    
    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }
    
    }

    void CT_CTStyleLabel::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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
            
    if (m_has_fillClrLst)
    {
        m_fillClrLst->toXmlElem("diagram:fillClrLst", "", _outStream);;
    }
    
    if (m_has_linClrLst)
    {
        m_linClrLst->toXmlElem("diagram:linClrLst", "", _outStream);;
    }
    
    if (m_has_effectClrLst)
    {
        m_effectClrLst->toXmlElem("diagram:effectClrLst", "", _outStream);;
    }
    
    if (m_has_txLinClrLst)
    {
        m_txLinClrLst->toXmlElem("diagram:txLinClrLst", "", _outStream);;
    }
    
    if (m_has_txFillClrLst)
    {
        m_txFillClrLst->toXmlElem("diagram:txFillClrLst", "", _outStream);;
    }
    
    if (m_has_txEffectClrLst)
    {
        m_txEffectClrLst->toXmlElem("diagram:txEffectClrLst", "", _outStream);;
    }
    
    if (m_has_extLst)
    {
        m_extLst->toXmlElem("diagram:extLst", "", _outStream);;
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_CTStyleLabel& CT_CTStyleLabel::default_instance()
    {    
    if (!CT_CTStyleLabel::default_instance_)
    {
        CT_CTStyleLabel::default_instance_ = new CT_CTStyleLabel();
    }
    return *CT_CTStyleLabel::default_instance_;
    }

    bool CT_CTStyleLabel::has_name_attr() const
    {    
    return m_has_name_attr;
    }

    void CT_CTStyleLabel::set_name_attr(const XSD::string_& _name_attr)
    {    
    m_has_name_attr = true;
    m_name_attr = _name_attr;
    }

    const XSD::string_& CT_CTStyleLabel::get_name_attr() const
    {    
    return m_name_attr;
    }

CT_CTStyleLabel* CT_CTStyleLabel::default_instance_ = NULL;

    // CT_ColorTransform
    CT_ColorTransform::CT_ColorTransform()
    :m_has_uniqueId_attr(false),
    m_uniqueId_attr(""),
    m_has_minVer_attr(false),
    m_minVer_attr("")
    {
    }
    CT_ColorTransform::~CT_ColorTransform()
{
    clear();    }
    CT_CTName* CT_ColorTransform::add_title()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_CTName* pNewChild = pChildGroup->mutable_title();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_CTDescription* CT_ColorTransform::add_desc()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_CTDescription* pNewChild = pChildGroup->mutable_desc();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_CTCategories* CT_ColorTransform::add_catLst()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_CTCategories* pNewChild = pChildGroup->mutable_catLst();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_CTStyleLabel* CT_ColorTransform::add_styleLbl()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_CTStyleLabel* pNewChild = pChildGroup->mutable_styleLbl();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_a::CT_OfficeArtExtensionList* CT_ColorTransform::add_extLst()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_a::CT_OfficeArtExtensionList* pNewChild = pChildGroup->mutable_extLst();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    void CT_ColorTransform::clear()
    {    
    m_has_uniqueId_attr = false;
    m_uniqueId_attr.clear();
    
    m_has_minVer_attr = false;
    m_minVer_attr.clear();
    
    {
        vector<ChildGroup_1*>::iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_1.clear();
    }
    }

    void CT_ColorTransform::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
    if (m_has_uniqueId_attr)
    {
        _outStream << " " << "uniqueId" << "=\"" << m_uniqueId_attr << "\"";
    }
    
    
    if (m_has_minVer_attr)
    {
        _outStream << " " << "minVer" << "=\"" << m_minVer_attr << "\"";
    }
    
            _outStream << ">";
            
    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_title())
            {
                (*iter)->get_title().toXmlElem("diagram:title", "", _outStream);
            }
            else if ((*iter)->has_desc())
            {
                (*iter)->get_desc().toXmlElem("diagram:desc", "", _outStream);
            }
            else if ((*iter)->has_catLst())
            {
                (*iter)->get_catLst().toXmlElem("diagram:catLst", "", _outStream);
            }
            else if ((*iter)->has_styleLbl())
            {
                (*iter)->get_styleLbl().toXmlElem("diagram:styleLbl", "", _outStream);
            }
            else if ((*iter)->has_extLst())
            {
                (*iter)->get_extLst().toXmlElem("diagram:extLst", "", _outStream);
            }
        }
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_ColorTransform& CT_ColorTransform::default_instance()
    {    
    if (!CT_ColorTransform::default_instance_)
    {
        CT_ColorTransform::default_instance_ = new CT_ColorTransform();
    }
    return *CT_ColorTransform::default_instance_;
    }

    bool CT_ColorTransform::has_uniqueId_attr() const
    {    
    return m_has_uniqueId_attr;
    }

    void CT_ColorTransform::set_uniqueId_attr(const XSD::string_& _uniqueId_attr)
    {    
    m_has_uniqueId_attr = true;
    m_uniqueId_attr = _uniqueId_attr;
    }

    const XSD::string_& CT_ColorTransform::get_uniqueId_attr() const
    {    
    return m_uniqueId_attr;
    }

    bool CT_ColorTransform::has_minVer_attr() const
    {    
    return m_has_minVer_attr;
    }

    void CT_ColorTransform::set_minVer_attr(const XSD::string_& _minVer_attr)
    {    
    m_has_minVer_attr = true;
    m_minVer_attr = _minVer_attr;
    }

    const XSD::string_& CT_ColorTransform::get_minVer_attr() const
    {    
    return m_minVer_attr;
    }


    // CT_ColorTransform::ChildGroup_1
    CT_ColorTransform::ChildGroup_1::ChildGroup_1()
    :m_has_title(false),
    m_title(NULL),
    m_has_desc(false),
    m_desc(NULL),
    m_has_catLst(false),
    m_catLst(NULL),
    m_has_styleLbl(false),
    m_styleLbl(NULL),
    m_has_extLst(false),
    m_extLst(NULL)
    {
    }
    bool CT_ColorTransform::ChildGroup_1::has_title() const
    {    
    return m_has_title;
    }

    CT_CTName* CT_ColorTransform::ChildGroup_1::mutable_title()
    {    
    
    m_has_desc = false;
    
    if (m_desc)
    {
        delete m_desc;
        m_desc = NULL;
    }
    ;
    
    m_has_catLst = false;
    
    if (m_catLst)
    {
        delete m_catLst;
        m_catLst = NULL;
    }
    ;
    
    m_has_styleLbl = false;
    
    if (m_styleLbl)
    {
        delete m_styleLbl;
        m_styleLbl = NULL;
    }
    ;
    
    m_has_extLst = false;
    
    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }
    ;
    
    m_has_title = true;
    if (!m_title)
    {
        m_title = new CT_CTName();
    }
    return m_title;
    }

    const CT_CTName& CT_ColorTransform::ChildGroup_1::get_title() const
    {    
    if (m_title)
    {
        return *m_title;
    }
    return CT_CTName::default_instance();
    }

    bool CT_ColorTransform::ChildGroup_1::has_desc() const
    {    
    return m_has_desc;
    }

    CT_CTDescription* CT_ColorTransform::ChildGroup_1::mutable_desc()
    {    
    
    m_has_title = false;
    
    if (m_title)
    {
        delete m_title;
        m_title = NULL;
    }
    ;
    
    m_has_catLst = false;
    
    if (m_catLst)
    {
        delete m_catLst;
        m_catLst = NULL;
    }
    ;
    
    m_has_styleLbl = false;
    
    if (m_styleLbl)
    {
        delete m_styleLbl;
        m_styleLbl = NULL;
    }
    ;
    
    m_has_extLst = false;
    
    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }
    ;
    
    m_has_desc = true;
    if (!m_desc)
    {
        m_desc = new CT_CTDescription();
    }
    return m_desc;
    }

    const CT_CTDescription& CT_ColorTransform::ChildGroup_1::get_desc() const
    {    
    if (m_desc)
    {
        return *m_desc;
    }
    return CT_CTDescription::default_instance();
    }

    bool CT_ColorTransform::ChildGroup_1::has_catLst() const
    {    
    return m_has_catLst;
    }

    CT_CTCategories* CT_ColorTransform::ChildGroup_1::mutable_catLst()
    {    
    
    m_has_title = false;
    
    if (m_title)
    {
        delete m_title;
        m_title = NULL;
    }
    ;
    
    m_has_desc = false;
    
    if (m_desc)
    {
        delete m_desc;
        m_desc = NULL;
    }
    ;
    
    m_has_styleLbl = false;
    
    if (m_styleLbl)
    {
        delete m_styleLbl;
        m_styleLbl = NULL;
    }
    ;
    
    m_has_extLst = false;
    
    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }
    ;
    
    m_has_catLst = true;
    if (!m_catLst)
    {
        m_catLst = new CT_CTCategories();
    }
    return m_catLst;
    }

    const CT_CTCategories& CT_ColorTransform::ChildGroup_1::get_catLst() const
    {    
    if (m_catLst)
    {
        return *m_catLst;
    }
    return CT_CTCategories::default_instance();
    }

    bool CT_ColorTransform::ChildGroup_1::has_styleLbl() const
    {    
    return m_has_styleLbl;
    }

    CT_CTStyleLabel* CT_ColorTransform::ChildGroup_1::mutable_styleLbl()
    {    
    
    m_has_title = false;
    
    if (m_title)
    {
        delete m_title;
        m_title = NULL;
    }
    ;
    
    m_has_desc = false;
    
    if (m_desc)
    {
        delete m_desc;
        m_desc = NULL;
    }
    ;
    
    m_has_catLst = false;
    
    if (m_catLst)
    {
        delete m_catLst;
        m_catLst = NULL;
    }
    ;
    
    m_has_extLst = false;
    
    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }
    ;
    
    m_has_styleLbl = true;
    if (!m_styleLbl)
    {
        m_styleLbl = new CT_CTStyleLabel();
    }
    return m_styleLbl;
    }

    const CT_CTStyleLabel& CT_ColorTransform::ChildGroup_1::get_styleLbl() const
    {    
    if (m_styleLbl)
    {
        return *m_styleLbl;
    }
    return CT_CTStyleLabel::default_instance();
    }

    bool CT_ColorTransform::ChildGroup_1::has_extLst() const
    {    
    return m_has_extLst;
    }

    ns_a::CT_OfficeArtExtensionList* CT_ColorTransform::ChildGroup_1::mutable_extLst()
    {    
    
    m_has_title = false;
    
    if (m_title)
    {
        delete m_title;
        m_title = NULL;
    }
    ;
    
    m_has_desc = false;
    
    if (m_desc)
    {
        delete m_desc;
        m_desc = NULL;
    }
    ;
    
    m_has_catLst = false;
    
    if (m_catLst)
    {
        delete m_catLst;
        m_catLst = NULL;
    }
    ;
    
    m_has_styleLbl = false;
    
    if (m_styleLbl)
    {
        delete m_styleLbl;
        m_styleLbl = NULL;
    }
    ;
    
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new ns_a::CT_OfficeArtExtensionList();
    }
    return m_extLst;
    }

    const ns_a::CT_OfficeArtExtensionList& CT_ColorTransform::ChildGroup_1::get_extLst() const
    {    
    if (m_extLst)
    {
        return *m_extLst;
    }
    return ns_a::CT_OfficeArtExtensionList::default_instance();
    }

CT_ColorTransform* CT_ColorTransform::default_instance_ = NULL;

    // CT_ColorTransformHeader
    CT_ColorTransformHeader::CT_ColorTransformHeader()
    :m_has_uniqueId_attr(false),
    m_uniqueId_attr(""),
    m_has_minVer_attr(false),
    m_minVer_attr(""),
    m_has_resId_attr(false),
    m_resId_attr(0)
    {
    }
    CT_ColorTransformHeader::~CT_ColorTransformHeader()
{
    clear();    }
    CT_CTName* CT_ColorTransformHeader::add_title()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_CTName* pNewChild = pChildGroup->mutable_title();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_CTDescription* CT_ColorTransformHeader::add_desc()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_CTDescription* pNewChild = pChildGroup->mutable_desc();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_CTCategories* CT_ColorTransformHeader::add_catLst()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_CTCategories* pNewChild = pChildGroup->mutable_catLst();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_a::CT_OfficeArtExtensionList* CT_ColorTransformHeader::add_extLst()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_a::CT_OfficeArtExtensionList* pNewChild = pChildGroup->mutable_extLst();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    void CT_ColorTransformHeader::clear()
    {    
    m_has_uniqueId_attr = false;
    m_uniqueId_attr.clear();
    
    m_has_minVer_attr = false;
    m_minVer_attr.clear();
    
    m_has_resId_attr = false;
    m_resId_attr = 0;
    
    {
        vector<ChildGroup_1*>::iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_1.clear();
    }
    }

    void CT_ColorTransformHeader::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
    if (m_has_uniqueId_attr)
    {
        _outStream << " " << "uniqueId" << "=\"" << m_uniqueId_attr << "\"";
    }
    
    
    if (m_has_minVer_attr)
    {
        _outStream << " " << "minVer" << "=\"" << m_minVer_attr << "\"";
    }
    
    
    if (m_has_resId_attr)
    {
        _outStream << " " << "resId" << "=\"" << m_resId_attr << "\"";
    }
    
            _outStream << ">";
            
    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_title())
            {
                (*iter)->get_title().toXmlElem("diagram:title", "", _outStream);
            }
            else if ((*iter)->has_desc())
            {
                (*iter)->get_desc().toXmlElem("diagram:desc", "", _outStream);
            }
            else if ((*iter)->has_catLst())
            {
                (*iter)->get_catLst().toXmlElem("diagram:catLst", "", _outStream);
            }
            else if ((*iter)->has_extLst())
            {
                (*iter)->get_extLst().toXmlElem("diagram:extLst", "", _outStream);
            }
        }
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_ColorTransformHeader& CT_ColorTransformHeader::default_instance()
    {    
    if (!CT_ColorTransformHeader::default_instance_)
    {
        CT_ColorTransformHeader::default_instance_ = new CT_ColorTransformHeader();
    }
    return *CT_ColorTransformHeader::default_instance_;
    }

    bool CT_ColorTransformHeader::has_uniqueId_attr() const
    {    
    return m_has_uniqueId_attr;
    }

    void CT_ColorTransformHeader::set_uniqueId_attr(const XSD::string_& _uniqueId_attr)
    {    
    m_has_uniqueId_attr = true;
    m_uniqueId_attr = _uniqueId_attr;
    }

    const XSD::string_& CT_ColorTransformHeader::get_uniqueId_attr() const
    {    
    return m_uniqueId_attr;
    }

    bool CT_ColorTransformHeader::has_minVer_attr() const
    {    
    return m_has_minVer_attr;
    }

    void CT_ColorTransformHeader::set_minVer_attr(const XSD::string_& _minVer_attr)
    {    
    m_has_minVer_attr = true;
    m_minVer_attr = _minVer_attr;
    }

    const XSD::string_& CT_ColorTransformHeader::get_minVer_attr() const
    {    
    return m_minVer_attr;
    }

    bool CT_ColorTransformHeader::has_resId_attr() const
    {    
    return m_has_resId_attr;
    }

    void CT_ColorTransformHeader::set_resId_attr(const XSD::int_& _resId_attr)
    {    
    m_has_resId_attr = true;
    m_resId_attr = _resId_attr;
    }

    const XSD::int_& CT_ColorTransformHeader::get_resId_attr() const
    {    
    return m_resId_attr;
    }


    // CT_ColorTransformHeader::ChildGroup_1
    CT_ColorTransformHeader::ChildGroup_1::ChildGroup_1()
    :m_has_title(false),
    m_title(NULL),
    m_has_desc(false),
    m_desc(NULL),
    m_has_catLst(false),
    m_catLst(NULL),
    m_has_extLst(false),
    m_extLst(NULL)
    {
    }
    bool CT_ColorTransformHeader::ChildGroup_1::has_title() const
    {    
    return m_has_title;
    }

    CT_CTName* CT_ColorTransformHeader::ChildGroup_1::mutable_title()
    {    
    
    m_has_desc = false;
    
    if (m_desc)
    {
        delete m_desc;
        m_desc = NULL;
    }
    ;
    
    m_has_catLst = false;
    
    if (m_catLst)
    {
        delete m_catLst;
        m_catLst = NULL;
    }
    ;
    
    m_has_extLst = false;
    
    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }
    ;
    
    m_has_title = true;
    if (!m_title)
    {
        m_title = new CT_CTName();
    }
    return m_title;
    }

    const CT_CTName& CT_ColorTransformHeader::ChildGroup_1::get_title() const
    {    
    if (m_title)
    {
        return *m_title;
    }
    return CT_CTName::default_instance();
    }

    bool CT_ColorTransformHeader::ChildGroup_1::has_desc() const
    {    
    return m_has_desc;
    }

    CT_CTDescription* CT_ColorTransformHeader::ChildGroup_1::mutable_desc()
    {    
    
    m_has_title = false;
    
    if (m_title)
    {
        delete m_title;
        m_title = NULL;
    }
    ;
    
    m_has_catLst = false;
    
    if (m_catLst)
    {
        delete m_catLst;
        m_catLst = NULL;
    }
    ;
    
    m_has_extLst = false;
    
    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }
    ;
    
    m_has_desc = true;
    if (!m_desc)
    {
        m_desc = new CT_CTDescription();
    }
    return m_desc;
    }

    const CT_CTDescription& CT_ColorTransformHeader::ChildGroup_1::get_desc() const
    {    
    if (m_desc)
    {
        return *m_desc;
    }
    return CT_CTDescription::default_instance();
    }

    bool CT_ColorTransformHeader::ChildGroup_1::has_catLst() const
    {    
    return m_has_catLst;
    }

    CT_CTCategories* CT_ColorTransformHeader::ChildGroup_1::mutable_catLst()
    {    
    
    m_has_title = false;
    
    if (m_title)
    {
        delete m_title;
        m_title = NULL;
    }
    ;
    
    m_has_desc = false;
    
    if (m_desc)
    {
        delete m_desc;
        m_desc = NULL;
    }
    ;
    
    m_has_extLst = false;
    
    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }
    ;
    
    m_has_catLst = true;
    if (!m_catLst)
    {
        m_catLst = new CT_CTCategories();
    }
    return m_catLst;
    }

    const CT_CTCategories& CT_ColorTransformHeader::ChildGroup_1::get_catLst() const
    {    
    if (m_catLst)
    {
        return *m_catLst;
    }
    return CT_CTCategories::default_instance();
    }

    bool CT_ColorTransformHeader::ChildGroup_1::has_extLst() const
    {    
    return m_has_extLst;
    }

    ns_a::CT_OfficeArtExtensionList* CT_ColorTransformHeader::ChildGroup_1::mutable_extLst()
    {    
    
    m_has_title = false;
    
    if (m_title)
    {
        delete m_title;
        m_title = NULL;
    }
    ;
    
    m_has_desc = false;
    
    if (m_desc)
    {
        delete m_desc;
        m_desc = NULL;
    }
    ;
    
    m_has_catLst = false;
    
    if (m_catLst)
    {
        delete m_catLst;
        m_catLst = NULL;
    }
    ;
    
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new ns_a::CT_OfficeArtExtensionList();
    }
    return m_extLst;
    }

    const ns_a::CT_OfficeArtExtensionList& CT_ColorTransformHeader::ChildGroup_1::get_extLst() const
    {    
    if (m_extLst)
    {
        return *m_extLst;
    }
    return ns_a::CT_OfficeArtExtensionList::default_instance();
    }

CT_ColorTransformHeader* CT_ColorTransformHeader::default_instance_ = NULL;

    // CT_ColorTransformHeaderLst
    CT_ColorTransformHeaderLst::CT_ColorTransformHeaderLst()

    {
    }
    CT_ColorTransformHeaderLst::~CT_ColorTransformHeaderLst()
{
    clear();    }
    CT_ColorTransformHeader* CT_ColorTransformHeaderLst::add_colorsDefHdr()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_ColorTransformHeader* pNewChild = pChildGroup->mutable_colorsDefHdr();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    void CT_ColorTransformHeaderLst::clear()
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

    void CT_ColorTransformHeaderLst::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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
            if ((*iter)->has_colorsDefHdr())
            {
                (*iter)->get_colorsDefHdr().toXmlElem("diagram:colorsDefHdr", "", _outStream);
            }
        }
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_ColorTransformHeaderLst& CT_ColorTransformHeaderLst::default_instance()
    {    
    if (!CT_ColorTransformHeaderLst::default_instance_)
    {
        CT_ColorTransformHeaderLst::default_instance_ = new CT_ColorTransformHeaderLst();
    }
    return *CT_ColorTransformHeaderLst::default_instance_;
    }


    // CT_ColorTransformHeaderLst::ChildGroup_1
    CT_ColorTransformHeaderLst::ChildGroup_1::ChildGroup_1()
    :m_has_colorsDefHdr(false),
    m_colorsDefHdr(NULL)
    {
    }
    bool CT_ColorTransformHeaderLst::ChildGroup_1::has_colorsDefHdr() const
    {    
    return m_has_colorsDefHdr;
    }

    CT_ColorTransformHeader* CT_ColorTransformHeaderLst::ChildGroup_1::mutable_colorsDefHdr()
    {    
    
    m_has_colorsDefHdr = true;
    if (!m_colorsDefHdr)
    {
        m_colorsDefHdr = new CT_ColorTransformHeader();
    }
    return m_colorsDefHdr;
    }

    const CT_ColorTransformHeader& CT_ColorTransformHeaderLst::ChildGroup_1::get_colorsDefHdr() const
    {    
    if (m_colorsDefHdr)
    {
        return *m_colorsDefHdr;
    }
    return CT_ColorTransformHeader::default_instance();
    }

CT_ColorTransformHeaderLst* CT_ColorTransformHeaderLst::default_instance_ = NULL;

    // CT_Pt
    CT_Pt::CT_Pt()
    :m_has_prSet(false),
    m_prSet(NULL),
    m_has_spPr(false),
    m_spPr(NULL),
    m_has_t(false),
    m_t(NULL),
    m_has_extLst(false),
    m_extLst(NULL),
    m_has_modelId_attr(false),
    m_modelId_attr(NULL),
    m_has_type_attr(false),
    m_type_attr(NULL),
    m_has_cxnId_attr(false),
    m_cxnId_attr(NULL)
    {
    }
    CT_Pt::~CT_Pt()
{
    clear();    }
    bool CT_Pt::has_prSet() const
    {    
    return m_has_prSet;
    }

    CT_ElemPropSet* CT_Pt::mutable_prSet()
    {    
    m_has_prSet = true;
    if (!m_prSet)
    {
        m_prSet = new CT_ElemPropSet();
    }
    return m_prSet;
    }

    const CT_ElemPropSet& CT_Pt::get_prSet() const
    {    
    if (m_prSet)
    {
        return *m_prSet;
    }
    return CT_ElemPropSet::default_instance();
    }

    bool CT_Pt::has_spPr() const
    {    
    return m_has_spPr;
    }

    ns_a::CT_ShapeProperties* CT_Pt::mutable_spPr()
    {    
    m_has_spPr = true;
    if (!m_spPr)
    {
        m_spPr = new ns_a::CT_ShapeProperties();
    }
    return m_spPr;
    }

    const ns_a::CT_ShapeProperties& CT_Pt::get_spPr() const
    {    
    if (m_spPr)
    {
        return *m_spPr;
    }
    return ns_a::CT_ShapeProperties::default_instance();
    }

    bool CT_Pt::has_t() const
    {    
    return m_has_t;
    }

    ns_a::CT_TextBody* CT_Pt::mutable_t()
    {    
    m_has_t = true;
    if (!m_t)
    {
        m_t = new ns_a::CT_TextBody();
    }
    return m_t;
    }

    const ns_a::CT_TextBody& CT_Pt::get_t() const
    {    
    if (m_t)
    {
        return *m_t;
    }
    return ns_a::CT_TextBody::default_instance();
    }

    bool CT_Pt::has_extLst() const
    {    
    return m_has_extLst;
    }

    ns_a::CT_OfficeArtExtensionList* CT_Pt::mutable_extLst()
    {    
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new ns_a::CT_OfficeArtExtensionList();
    }
    return m_extLst;
    }

    const ns_a::CT_OfficeArtExtensionList& CT_Pt::get_extLst() const
    {    
    if (m_extLst)
    {
        return *m_extLst;
    }
    return ns_a::CT_OfficeArtExtensionList::default_instance();
    }

    void CT_Pt::clear()
    {    
    m_has_modelId_attr = false;
    
    if (m_modelId_attr)
    {
        delete m_modelId_attr;
        m_modelId_attr = NULL;
    }
    
    
    m_has_type_attr = false;
    
    if (m_type_attr)
    {
        delete m_type_attr;
        m_type_attr = NULL;
    }
    
    
    m_has_cxnId_attr = false;
    
    if (m_cxnId_attr)
    {
        delete m_cxnId_attr;
        m_cxnId_attr = NULL;
    }
    
    
    m_has_prSet = false;
    
    if (m_prSet)
    {
        delete m_prSet;
        m_prSet = NULL;
    }
    
    
    m_has_spPr = false;
    
    if (m_spPr)
    {
        delete m_spPr;
        m_spPr = NULL;
    }
    
    
    m_has_t = false;
    
    if (m_t)
    {
        delete m_t;
        m_t = NULL;
    }
    
    
    m_has_extLst = false;
    
    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }
    
    }

    void CT_Pt::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
    if (m_has_modelId_attr)
    {
        m_modelId_attr->toXmlAttr("modelId", _outStream);
    }
    
    
    if (m_has_type_attr)
    {
        m_type_attr->toXmlAttr("type", _outStream);
    }
    
    
    if (m_has_cxnId_attr)
    {
        m_cxnId_attr->toXmlAttr("cxnId", _outStream);
    }
    
            _outStream << ">";
            
    if (m_has_prSet)
    {
        m_prSet->toXmlElem("diagram:prSet", "", _outStream);;
    }
    
    if (m_has_spPr)
    {
        m_spPr->toXmlElem("diagram:spPr", "", _outStream);;
    }
    
    if (m_has_t)
    {
        m_t->toXmlElem("diagram:t", "", _outStream);;
    }
    
    if (m_has_extLst)
    {
        m_extLst->toXmlElem("diagram:extLst", "", _outStream);;
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_Pt& CT_Pt::default_instance()
    {    
    if (!CT_Pt::default_instance_)
    {
        CT_Pt::default_instance_ = new CT_Pt();
    }
    return *CT_Pt::default_instance_;
    }

    bool CT_Pt::has_modelId_attr() const
    {    
    return m_has_modelId_attr;
    }

    void CT_Pt::set_modelId_attr(const ST_ModelId& _modelId_attr)
    {    
    m_has_modelId_attr = true;
    m_modelId_attr = new ST_ModelId(_modelId_attr);
    }

    const ST_ModelId& CT_Pt::get_modelId_attr() const
    {    
    if (m_modelId_attr)
    {
        return *m_modelId_attr;
    }
    return ST_ModelId::default_instance();
    }

    bool CT_Pt::has_type_attr() const
    {    
    return m_has_type_attr;
    }

    void CT_Pt::set_type_attr(const ST_PtType& _type_attr)
    {    
    m_has_type_attr = true;
    m_type_attr = new ST_PtType(_type_attr);
    }

    const ST_PtType& CT_Pt::get_type_attr() const
    {    
    if (m_type_attr)
    {
        return *m_type_attr;
    }
    return ST_PtType::default_instance();
    }

    bool CT_Pt::has_cxnId_attr() const
    {    
    return m_has_cxnId_attr;
    }

    void CT_Pt::set_cxnId_attr(const ST_ModelId& _cxnId_attr)
    {    
    m_has_cxnId_attr = true;
    m_cxnId_attr = new ST_ModelId(_cxnId_attr);
    }

    const ST_ModelId& CT_Pt::get_cxnId_attr() const
    {    
    if (m_cxnId_attr)
    {
        return *m_cxnId_attr;
    }
    return ST_ModelId::default_instance();
    }

CT_Pt* CT_Pt::default_instance_ = NULL;

    // CT_PtList
    CT_PtList::CT_PtList()

    {
    }
    CT_PtList::~CT_PtList()
{
    clear();    }
    CT_Pt* CT_PtList::add_pt()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Pt* pNewChild = pChildGroup->mutable_pt();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    void CT_PtList::clear()
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

    void CT_PtList::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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
                (*iter)->get_pt().toXmlElem("diagram:pt", "", _outStream);
            }
        }
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_PtList& CT_PtList::default_instance()
    {    
    if (!CT_PtList::default_instance_)
    {
        CT_PtList::default_instance_ = new CT_PtList();
    }
    return *CT_PtList::default_instance_;
    }


    // CT_PtList::ChildGroup_1
    CT_PtList::ChildGroup_1::ChildGroup_1()
    :m_has_pt(false),
    m_pt(NULL)
    {
    }
    bool CT_PtList::ChildGroup_1::has_pt() const
    {    
    return m_has_pt;
    }

    CT_Pt* CT_PtList::ChildGroup_1::mutable_pt()
    {    
    
    m_has_pt = true;
    if (!m_pt)
    {
        m_pt = new CT_Pt();
    }
    return m_pt;
    }

    const CT_Pt& CT_PtList::ChildGroup_1::get_pt() const
    {    
    if (m_pt)
    {
        return *m_pt;
    }
    return CT_Pt::default_instance();
    }

CT_PtList* CT_PtList::default_instance_ = NULL;

    // CT_Cxn
    CT_Cxn::CT_Cxn()
    :m_has_extLst(false),
    m_extLst(NULL),
    m_has_modelId_attr(false),
    m_modelId_attr(NULL),
    m_has_type_attr(false),
    m_type_attr(NULL),
    m_has_srcId_attr(false),
    m_srcId_attr(NULL),
    m_has_destId_attr(false),
    m_destId_attr(NULL),
    m_has_srcOrd_attr(false),
    m_srcOrd_attr(0),
    m_has_destOrd_attr(false),
    m_destOrd_attr(0),
    m_has_parTransId_attr(false),
    m_parTransId_attr(NULL),
    m_has_sibTransId_attr(false),
    m_sibTransId_attr(NULL),
    m_has_presId_attr(false),
    m_presId_attr("")
    {
    }
    CT_Cxn::~CT_Cxn()
{
    clear();    }
    bool CT_Cxn::has_extLst() const
    {    
    return m_has_extLst;
    }

    ns_a::CT_OfficeArtExtensionList* CT_Cxn::mutable_extLst()
    {    
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new ns_a::CT_OfficeArtExtensionList();
    }
    return m_extLst;
    }

    const ns_a::CT_OfficeArtExtensionList& CT_Cxn::get_extLst() const
    {    
    if (m_extLst)
    {
        return *m_extLst;
    }
    return ns_a::CT_OfficeArtExtensionList::default_instance();
    }

    void CT_Cxn::clear()
    {    
    m_has_modelId_attr = false;
    
    if (m_modelId_attr)
    {
        delete m_modelId_attr;
        m_modelId_attr = NULL;
    }
    
    
    m_has_type_attr = false;
    
    if (m_type_attr)
    {
        delete m_type_attr;
        m_type_attr = NULL;
    }
    
    
    m_has_srcId_attr = false;
    
    if (m_srcId_attr)
    {
        delete m_srcId_attr;
        m_srcId_attr = NULL;
    }
    
    
    m_has_destId_attr = false;
    
    if (m_destId_attr)
    {
        delete m_destId_attr;
        m_destId_attr = NULL;
    }
    
    
    m_has_srcOrd_attr = false;
    m_srcOrd_attr = 0;
    
    m_has_destOrd_attr = false;
    m_destOrd_attr = 0;
    
    m_has_parTransId_attr = false;
    
    if (m_parTransId_attr)
    {
        delete m_parTransId_attr;
        m_parTransId_attr = NULL;
    }
    
    
    m_has_sibTransId_attr = false;
    
    if (m_sibTransId_attr)
    {
        delete m_sibTransId_attr;
        m_sibTransId_attr = NULL;
    }
    
    
    m_has_presId_attr = false;
    m_presId_attr.clear();
    
    m_has_extLst = false;
    
    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }
    
    }

    void CT_Cxn::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
    if (m_has_modelId_attr)
    {
        m_modelId_attr->toXmlAttr("modelId", _outStream);
    }
    
    
    if (m_has_type_attr)
    {
        m_type_attr->toXmlAttr("type", _outStream);
    }
    
    
    if (m_has_srcId_attr)
    {
        m_srcId_attr->toXmlAttr("srcId", _outStream);
    }
    
    
    if (m_has_destId_attr)
    {
        m_destId_attr->toXmlAttr("destId", _outStream);
    }
    
    
    if (m_has_srcOrd_attr)
    {
        _outStream << " " << "srcOrd" << "=\"" << m_srcOrd_attr << "\"";
    }
    
    
    if (m_has_destOrd_attr)
    {
        _outStream << " " << "destOrd" << "=\"" << m_destOrd_attr << "\"";
    }
    
    
    if (m_has_parTransId_attr)
    {
        m_parTransId_attr->toXmlAttr("parTransId", _outStream);
    }
    
    
    if (m_has_sibTransId_attr)
    {
        m_sibTransId_attr->toXmlAttr("sibTransId", _outStream);
    }
    
    
    if (m_has_presId_attr)
    {
        _outStream << " " << "presId" << "=\"" << m_presId_attr << "\"";
    }
    
            _outStream << ">";
            
    if (m_has_extLst)
    {
        m_extLst->toXmlElem("diagram:extLst", "", _outStream);;
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_Cxn& CT_Cxn::default_instance()
    {    
    if (!CT_Cxn::default_instance_)
    {
        CT_Cxn::default_instance_ = new CT_Cxn();
    }
    return *CT_Cxn::default_instance_;
    }

    bool CT_Cxn::has_modelId_attr() const
    {    
    return m_has_modelId_attr;
    }

    void CT_Cxn::set_modelId_attr(const ST_ModelId& _modelId_attr)
    {    
    m_has_modelId_attr = true;
    m_modelId_attr = new ST_ModelId(_modelId_attr);
    }

    const ST_ModelId& CT_Cxn::get_modelId_attr() const
    {    
    if (m_modelId_attr)
    {
        return *m_modelId_attr;
    }
    return ST_ModelId::default_instance();
    }

    bool CT_Cxn::has_type_attr() const
    {    
    return m_has_type_attr;
    }

    void CT_Cxn::set_type_attr(const ST_CxnType& _type_attr)
    {    
    m_has_type_attr = true;
    m_type_attr = new ST_CxnType(_type_attr);
    }

    const ST_CxnType& CT_Cxn::get_type_attr() const
    {    
    if (m_type_attr)
    {
        return *m_type_attr;
    }
    return ST_CxnType::default_instance();
    }

    bool CT_Cxn::has_srcId_attr() const
    {    
    return m_has_srcId_attr;
    }

    void CT_Cxn::set_srcId_attr(const ST_ModelId& _srcId_attr)
    {    
    m_has_srcId_attr = true;
    m_srcId_attr = new ST_ModelId(_srcId_attr);
    }

    const ST_ModelId& CT_Cxn::get_srcId_attr() const
    {    
    if (m_srcId_attr)
    {
        return *m_srcId_attr;
    }
    return ST_ModelId::default_instance();
    }

    bool CT_Cxn::has_destId_attr() const
    {    
    return m_has_destId_attr;
    }

    void CT_Cxn::set_destId_attr(const ST_ModelId& _destId_attr)
    {    
    m_has_destId_attr = true;
    m_destId_attr = new ST_ModelId(_destId_attr);
    }

    const ST_ModelId& CT_Cxn::get_destId_attr() const
    {    
    if (m_destId_attr)
    {
        return *m_destId_attr;
    }
    return ST_ModelId::default_instance();
    }

    bool CT_Cxn::has_srcOrd_attr() const
    {    
    return m_has_srcOrd_attr;
    }

    void CT_Cxn::set_srcOrd_attr(const XSD::unsignedInt_& _srcOrd_attr)
    {    
    m_has_srcOrd_attr = true;
    m_srcOrd_attr = _srcOrd_attr;
    }

    const XSD::unsignedInt_& CT_Cxn::get_srcOrd_attr() const
    {    
    return m_srcOrd_attr;
    }

    bool CT_Cxn::has_destOrd_attr() const
    {    
    return m_has_destOrd_attr;
    }

    void CT_Cxn::set_destOrd_attr(const XSD::unsignedInt_& _destOrd_attr)
    {    
    m_has_destOrd_attr = true;
    m_destOrd_attr = _destOrd_attr;
    }

    const XSD::unsignedInt_& CT_Cxn::get_destOrd_attr() const
    {    
    return m_destOrd_attr;
    }

    bool CT_Cxn::has_parTransId_attr() const
    {    
    return m_has_parTransId_attr;
    }

    void CT_Cxn::set_parTransId_attr(const ST_ModelId& _parTransId_attr)
    {    
    m_has_parTransId_attr = true;
    m_parTransId_attr = new ST_ModelId(_parTransId_attr);
    }

    const ST_ModelId& CT_Cxn::get_parTransId_attr() const
    {    
    if (m_parTransId_attr)
    {
        return *m_parTransId_attr;
    }
    return ST_ModelId::default_instance();
    }

    bool CT_Cxn::has_sibTransId_attr() const
    {    
    return m_has_sibTransId_attr;
    }

    void CT_Cxn::set_sibTransId_attr(const ST_ModelId& _sibTransId_attr)
    {    
    m_has_sibTransId_attr = true;
    m_sibTransId_attr = new ST_ModelId(_sibTransId_attr);
    }

    const ST_ModelId& CT_Cxn::get_sibTransId_attr() const
    {    
    if (m_sibTransId_attr)
    {
        return *m_sibTransId_attr;
    }
    return ST_ModelId::default_instance();
    }

    bool CT_Cxn::has_presId_attr() const
    {    
    return m_has_presId_attr;
    }

    void CT_Cxn::set_presId_attr(const XSD::string_& _presId_attr)
    {    
    m_has_presId_attr = true;
    m_presId_attr = _presId_attr;
    }

    const XSD::string_& CT_Cxn::get_presId_attr() const
    {    
    return m_presId_attr;
    }

CT_Cxn* CT_Cxn::default_instance_ = NULL;

    // CT_CxnList
    CT_CxnList::CT_CxnList()

    {
    }
    CT_CxnList::~CT_CxnList()
{
    clear();    }
    CT_Cxn* CT_CxnList::add_cxn()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Cxn* pNewChild = pChildGroup->mutable_cxn();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    void CT_CxnList::clear()
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

    void CT_CxnList::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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
            if ((*iter)->has_cxn())
            {
                (*iter)->get_cxn().toXmlElem("diagram:cxn", "", _outStream);
            }
        }
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_CxnList& CT_CxnList::default_instance()
    {    
    if (!CT_CxnList::default_instance_)
    {
        CT_CxnList::default_instance_ = new CT_CxnList();
    }
    return *CT_CxnList::default_instance_;
    }


    // CT_CxnList::ChildGroup_1
    CT_CxnList::ChildGroup_1::ChildGroup_1()
    :m_has_cxn(false),
    m_cxn(NULL)
    {
    }
    bool CT_CxnList::ChildGroup_1::has_cxn() const
    {    
    return m_has_cxn;
    }

    CT_Cxn* CT_CxnList::ChildGroup_1::mutable_cxn()
    {    
    
    m_has_cxn = true;
    if (!m_cxn)
    {
        m_cxn = new CT_Cxn();
    }
    return m_cxn;
    }

    const CT_Cxn& CT_CxnList::ChildGroup_1::get_cxn() const
    {    
    if (m_cxn)
    {
        return *m_cxn;
    }
    return CT_Cxn::default_instance();
    }

CT_CxnList* CT_CxnList::default_instance_ = NULL;

    // CT_DataModel
    CT_DataModel::CT_DataModel()
    :m_has_ptLst(false),
    m_ptLst(NULL),
    m_has_cxnLst(false),
    m_cxnLst(NULL),
    m_has_bg(false),
    m_bg(NULL),
    m_has_whole(false),
    m_whole(NULL),
    m_has_extLst(false),
    m_extLst(NULL)
    {
    }
    CT_DataModel::~CT_DataModel()
{
    clear();    }
    bool CT_DataModel::has_ptLst() const
    {    
    return m_has_ptLst;
    }

    CT_PtList* CT_DataModel::mutable_ptLst()
    {    
    m_has_ptLst = true;
    if (!m_ptLst)
    {
        m_ptLst = new CT_PtList();
    }
    return m_ptLst;
    }

    const CT_PtList& CT_DataModel::get_ptLst() const
    {    
    if (m_ptLst)
    {
        return *m_ptLst;
    }
    return CT_PtList::default_instance();
    }

    bool CT_DataModel::has_cxnLst() const
    {    
    return m_has_cxnLst;
    }

    CT_CxnList* CT_DataModel::mutable_cxnLst()
    {    
    m_has_cxnLst = true;
    if (!m_cxnLst)
    {
        m_cxnLst = new CT_CxnList();
    }
    return m_cxnLst;
    }

    const CT_CxnList& CT_DataModel::get_cxnLst() const
    {    
    if (m_cxnLst)
    {
        return *m_cxnLst;
    }
    return CT_CxnList::default_instance();
    }

    bool CT_DataModel::has_bg() const
    {    
    return m_has_bg;
    }

    ns_a::CT_BackgroundFormatting* CT_DataModel::mutable_bg()
    {    
    m_has_bg = true;
    if (!m_bg)
    {
        m_bg = new ns_a::CT_BackgroundFormatting();
    }
    return m_bg;
    }

    const ns_a::CT_BackgroundFormatting& CT_DataModel::get_bg() const
    {    
    if (m_bg)
    {
        return *m_bg;
    }
    return ns_a::CT_BackgroundFormatting::default_instance();
    }

    bool CT_DataModel::has_whole() const
    {    
    return m_has_whole;
    }

    ns_a::CT_WholeE2oFormatting* CT_DataModel::mutable_whole()
    {    
    m_has_whole = true;
    if (!m_whole)
    {
        m_whole = new ns_a::CT_WholeE2oFormatting();
    }
    return m_whole;
    }

    const ns_a::CT_WholeE2oFormatting& CT_DataModel::get_whole() const
    {    
    if (m_whole)
    {
        return *m_whole;
    }
    return ns_a::CT_WholeE2oFormatting::default_instance();
    }

    bool CT_DataModel::has_extLst() const
    {    
    return m_has_extLst;
    }

    ns_a::CT_OfficeArtExtensionList* CT_DataModel::mutable_extLst()
    {    
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new ns_a::CT_OfficeArtExtensionList();
    }
    return m_extLst;
    }

    const ns_a::CT_OfficeArtExtensionList& CT_DataModel::get_extLst() const
    {    
    if (m_extLst)
    {
        return *m_extLst;
    }
    return ns_a::CT_OfficeArtExtensionList::default_instance();
    }

    void CT_DataModel::clear()
    {    
    m_has_ptLst = false;
    
    if (m_ptLst)
    {
        delete m_ptLst;
        m_ptLst = NULL;
    }
    
    
    m_has_cxnLst = false;
    
    if (m_cxnLst)
    {
        delete m_cxnLst;
        m_cxnLst = NULL;
    }
    
    
    m_has_bg = false;
    
    if (m_bg)
    {
        delete m_bg;
        m_bg = NULL;
    }
    
    
    m_has_whole = false;
    
    if (m_whole)
    {
        delete m_whole;
        m_whole = NULL;
    }
    
    
    m_has_extLst = false;
    
    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }
    
    }

    void CT_DataModel::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
            _outStream << ">";
            
    if (m_has_ptLst)
    {
        m_ptLst->toXmlElem("diagram:ptLst", "", _outStream);;
    }
    
    if (m_has_cxnLst)
    {
        m_cxnLst->toXmlElem("diagram:cxnLst", "", _outStream);;
    }
    
    if (m_has_bg)
    {
        m_bg->toXmlElem("diagram:bg", "", _outStream);;
    }
    
    if (m_has_whole)
    {
        m_whole->toXmlElem("diagram:whole", "", _outStream);;
    }
    
    if (m_has_extLst)
    {
        m_extLst->toXmlElem("diagram:extLst", "", _outStream);;
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_DataModel& CT_DataModel::default_instance()
    {    
    if (!CT_DataModel::default_instance_)
    {
        CT_DataModel::default_instance_ = new CT_DataModel();
    }
    return *CT_DataModel::default_instance_;
    }

CT_DataModel* CT_DataModel::default_instance_ = NULL;

    // CT_Constraint
    CT_Constraint::CT_Constraint()
    :m_has_extLst(false),
    m_extLst(NULL),
    m_has_type_attr(false),
    m_type_attr(NULL),
    m_has_for_attr(false),
    m_for_attr(NULL),
    m_has_forName_attr(false),
    m_forName_attr(""),
    m_has_ptType_attr(false),
    m_ptType_attr(NULL),
    m_has_refType_attr(false),
    m_refType_attr(NULL),
    m_has_refFor_attr(false),
    m_refFor_attr(NULL),
    m_has_refForName_attr(false),
    m_refForName_attr(""),
    m_has_refPtType_attr(false),
    m_refPtType_attr(NULL),
    m_has_op_attr(false),
    m_op_attr(NULL),
    m_has_val_attr(false),
    m_val_attr(0),
    m_has_fact_attr(false),
    m_fact_attr(0)
    {
    }
    CT_Constraint::~CT_Constraint()
{
    clear();    }
    bool CT_Constraint::has_extLst() const
    {    
    return m_has_extLst;
    }

    ns_a::CT_OfficeArtExtensionList* CT_Constraint::mutable_extLst()
    {    
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new ns_a::CT_OfficeArtExtensionList();
    }
    return m_extLst;
    }

    const ns_a::CT_OfficeArtExtensionList& CT_Constraint::get_extLst() const
    {    
    if (m_extLst)
    {
        return *m_extLst;
    }
    return ns_a::CT_OfficeArtExtensionList::default_instance();
    }

    void CT_Constraint::clear()
    {    
    m_has_type_attr = false;
    
    if (m_type_attr)
    {
        delete m_type_attr;
        m_type_attr = NULL;
    }
    
    
    m_has_for_attr = false;
    
    if (m_for_attr)
    {
        delete m_for_attr;
        m_for_attr = NULL;
    }
    
    
    m_has_forName_attr = false;
    m_forName_attr.clear();
    
    m_has_ptType_attr = false;
    
    if (m_ptType_attr)
    {
        delete m_ptType_attr;
        m_ptType_attr = NULL;
    }
    
    
    m_has_refType_attr = false;
    
    if (m_refType_attr)
    {
        delete m_refType_attr;
        m_refType_attr = NULL;
    }
    
    
    m_has_refFor_attr = false;
    
    if (m_refFor_attr)
    {
        delete m_refFor_attr;
        m_refFor_attr = NULL;
    }
    
    
    m_has_refForName_attr = false;
    m_refForName_attr.clear();
    
    m_has_refPtType_attr = false;
    
    if (m_refPtType_attr)
    {
        delete m_refPtType_attr;
        m_refPtType_attr = NULL;
    }
    
    
    m_has_op_attr = false;
    
    if (m_op_attr)
    {
        delete m_op_attr;
        m_op_attr = NULL;
    }
    
    
    m_has_val_attr = false;
    m_val_attr = 0;
    
    m_has_fact_attr = false;
    m_fact_attr = 0;
    
    m_has_extLst = false;
    
    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }
    
    }

    void CT_Constraint::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
    if (m_has_type_attr)
    {
        m_type_attr->toXmlAttr("type", _outStream);
    }
    
    
    if (m_has_for_attr)
    {
        m_for_attr->toXmlAttr("for", _outStream);
    }
    
    
    if (m_has_forName_attr)
    {
        _outStream << " " << "forName" << "=\"" << m_forName_attr << "\"";
    }
    
    
    if (m_has_ptType_attr)
    {
        m_ptType_attr->toXmlAttr("ptType", _outStream);
    }
    
    
    if (m_has_refType_attr)
    {
        m_refType_attr->toXmlAttr("refType", _outStream);
    }
    
    
    if (m_has_refFor_attr)
    {
        m_refFor_attr->toXmlAttr("refFor", _outStream);
    }
    
    
    if (m_has_refForName_attr)
    {
        _outStream << " " << "refForName" << "=\"" << m_refForName_attr << "\"";
    }
    
    
    if (m_has_refPtType_attr)
    {
        m_refPtType_attr->toXmlAttr("refPtType", _outStream);
    }
    
    
    if (m_has_op_attr)
    {
        m_op_attr->toXmlAttr("op", _outStream);
    }
    
    
    if (m_has_val_attr)
    {
        _outStream << " " << "val" << "=\"" << m_val_attr << "\"";
    }
    
    
    if (m_has_fact_attr)
    {
        _outStream << " " << "fact" << "=\"" << m_fact_attr << "\"";
    }
    
            _outStream << ">";
            
    if (m_has_extLst)
    {
        m_extLst->toXmlElem("diagram:extLst", "", _outStream);;
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_Constraint& CT_Constraint::default_instance()
    {    
    if (!CT_Constraint::default_instance_)
    {
        CT_Constraint::default_instance_ = new CT_Constraint();
    }
    return *CT_Constraint::default_instance_;
    }

    bool CT_Constraint::has_type_attr() const
    {    
    return m_has_type_attr;
    }

    void CT_Constraint::set_type_attr(const ST_ConstraintType& _type_attr)
    {    
    m_has_type_attr = true;
    m_type_attr = new ST_ConstraintType(_type_attr);
    }

    const ST_ConstraintType& CT_Constraint::get_type_attr() const
    {    
    if (m_type_attr)
    {
        return *m_type_attr;
    }
    return ST_ConstraintType::default_instance();
    }

    bool CT_Constraint::has_for_attr() const
    {    
    return m_has_for_attr;
    }

    void CT_Constraint::set_for_attr(const ST_ConstraintRelationship& _for_attr)
    {    
    m_has_for_attr = true;
    m_for_attr = new ST_ConstraintRelationship(_for_attr);
    }

    const ST_ConstraintRelationship& CT_Constraint::get_for_attr() const
    {    
    if (m_for_attr)
    {
        return *m_for_attr;
    }
    return ST_ConstraintRelationship::default_instance();
    }

    bool CT_Constraint::has_forName_attr() const
    {    
    return m_has_forName_attr;
    }

    void CT_Constraint::set_forName_attr(const XSD::string_& _forName_attr)
    {    
    m_has_forName_attr = true;
    m_forName_attr = _forName_attr;
    }

    const XSD::string_& CT_Constraint::get_forName_attr() const
    {    
    return m_forName_attr;
    }

    bool CT_Constraint::has_ptType_attr() const
    {    
    return m_has_ptType_attr;
    }

    void CT_Constraint::set_ptType_attr(const ST_ElementType& _ptType_attr)
    {    
    m_has_ptType_attr = true;
    m_ptType_attr = new ST_ElementType(_ptType_attr);
    }

    const ST_ElementType& CT_Constraint::get_ptType_attr() const
    {    
    if (m_ptType_attr)
    {
        return *m_ptType_attr;
    }
    return ST_ElementType::default_instance();
    }

    bool CT_Constraint::has_refType_attr() const
    {    
    return m_has_refType_attr;
    }

    void CT_Constraint::set_refType_attr(const ST_ConstraintType& _refType_attr)
    {    
    m_has_refType_attr = true;
    m_refType_attr = new ST_ConstraintType(_refType_attr);
    }

    const ST_ConstraintType& CT_Constraint::get_refType_attr() const
    {    
    if (m_refType_attr)
    {
        return *m_refType_attr;
    }
    return ST_ConstraintType::default_instance();
    }

    bool CT_Constraint::has_refFor_attr() const
    {    
    return m_has_refFor_attr;
    }

    void CT_Constraint::set_refFor_attr(const ST_ConstraintRelationship& _refFor_attr)
    {    
    m_has_refFor_attr = true;
    m_refFor_attr = new ST_ConstraintRelationship(_refFor_attr);
    }

    const ST_ConstraintRelationship& CT_Constraint::get_refFor_attr() const
    {    
    if (m_refFor_attr)
    {
        return *m_refFor_attr;
    }
    return ST_ConstraintRelationship::default_instance();
    }

    bool CT_Constraint::has_refForName_attr() const
    {    
    return m_has_refForName_attr;
    }

    void CT_Constraint::set_refForName_attr(const XSD::string_& _refForName_attr)
    {    
    m_has_refForName_attr = true;
    m_refForName_attr = _refForName_attr;
    }

    const XSD::string_& CT_Constraint::get_refForName_attr() const
    {    
    return m_refForName_attr;
    }

    bool CT_Constraint::has_refPtType_attr() const
    {    
    return m_has_refPtType_attr;
    }

    void CT_Constraint::set_refPtType_attr(const ST_ElementType& _refPtType_attr)
    {    
    m_has_refPtType_attr = true;
    m_refPtType_attr = new ST_ElementType(_refPtType_attr);
    }

    const ST_ElementType& CT_Constraint::get_refPtType_attr() const
    {    
    if (m_refPtType_attr)
    {
        return *m_refPtType_attr;
    }
    return ST_ElementType::default_instance();
    }

    bool CT_Constraint::has_op_attr() const
    {    
    return m_has_op_attr;
    }

    void CT_Constraint::set_op_attr(const ST_BoolOperator& _op_attr)
    {    
    m_has_op_attr = true;
    m_op_attr = new ST_BoolOperator(_op_attr);
    }

    const ST_BoolOperator& CT_Constraint::get_op_attr() const
    {    
    if (m_op_attr)
    {
        return *m_op_attr;
    }
    return ST_BoolOperator::default_instance();
    }

    bool CT_Constraint::has_val_attr() const
    {    
    return m_has_val_attr;
    }

    void CT_Constraint::set_val_attr(const XSD::double_& _val_attr)
    {    
    m_has_val_attr = true;
    m_val_attr = _val_attr;
    }

    const XSD::double_& CT_Constraint::get_val_attr() const
    {    
    return m_val_attr;
    }

    bool CT_Constraint::has_fact_attr() const
    {    
    return m_has_fact_attr;
    }

    void CT_Constraint::set_fact_attr(const XSD::double_& _fact_attr)
    {    
    m_has_fact_attr = true;
    m_fact_attr = _fact_attr;
    }

    const XSD::double_& CT_Constraint::get_fact_attr() const
    {    
    return m_fact_attr;
    }

CT_Constraint* CT_Constraint::default_instance_ = NULL;

    // CT_Constraints
    CT_Constraints::CT_Constraints()

    {
    }
    CT_Constraints::~CT_Constraints()
{
    clear();    }
    CT_Constraint* CT_Constraints::add_constr()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Constraint* pNewChild = pChildGroup->mutable_constr();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    void CT_Constraints::clear()
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

    void CT_Constraints::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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
            if ((*iter)->has_constr())
            {
                (*iter)->get_constr().toXmlElem("diagram:constr", "", _outStream);
            }
        }
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_Constraints& CT_Constraints::default_instance()
    {    
    if (!CT_Constraints::default_instance_)
    {
        CT_Constraints::default_instance_ = new CT_Constraints();
    }
    return *CT_Constraints::default_instance_;
    }


    // CT_Constraints::ChildGroup_1
    CT_Constraints::ChildGroup_1::ChildGroup_1()
    :m_has_constr(false),
    m_constr(NULL)
    {
    }
    bool CT_Constraints::ChildGroup_1::has_constr() const
    {    
    return m_has_constr;
    }

    CT_Constraint* CT_Constraints::ChildGroup_1::mutable_constr()
    {    
    
    m_has_constr = true;
    if (!m_constr)
    {
        m_constr = new CT_Constraint();
    }
    return m_constr;
    }

    const CT_Constraint& CT_Constraints::ChildGroup_1::get_constr() const
    {    
    if (m_constr)
    {
        return *m_constr;
    }
    return CT_Constraint::default_instance();
    }

CT_Constraints* CT_Constraints::default_instance_ = NULL;

    // CT_NumericRule
    CT_NumericRule::CT_NumericRule()
    :m_has_extLst(false),
    m_extLst(NULL),
    m_has_type_attr(false),
    m_type_attr(NULL),
    m_has_for_attr(false),
    m_for_attr(NULL),
    m_has_forName_attr(false),
    m_forName_attr(""),
    m_has_ptType_attr(false),
    m_ptType_attr(NULL),
    m_has_val_attr(false),
    m_val_attr(0),
    m_has_fact_attr(false),
    m_fact_attr(0),
    m_has_max_attr(false),
    m_max_attr(0)
    {
    }
    CT_NumericRule::~CT_NumericRule()
{
    clear();    }
    bool CT_NumericRule::has_extLst() const
    {    
    return m_has_extLst;
    }

    ns_a::CT_OfficeArtExtensionList* CT_NumericRule::mutable_extLst()
    {    
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new ns_a::CT_OfficeArtExtensionList();
    }
    return m_extLst;
    }

    const ns_a::CT_OfficeArtExtensionList& CT_NumericRule::get_extLst() const
    {    
    if (m_extLst)
    {
        return *m_extLst;
    }
    return ns_a::CT_OfficeArtExtensionList::default_instance();
    }

    void CT_NumericRule::clear()
    {    
    m_has_type_attr = false;
    
    if (m_type_attr)
    {
        delete m_type_attr;
        m_type_attr = NULL;
    }
    
    
    m_has_for_attr = false;
    
    if (m_for_attr)
    {
        delete m_for_attr;
        m_for_attr = NULL;
    }
    
    
    m_has_forName_attr = false;
    m_forName_attr.clear();
    
    m_has_ptType_attr = false;
    
    if (m_ptType_attr)
    {
        delete m_ptType_attr;
        m_ptType_attr = NULL;
    }
    
    
    m_has_val_attr = false;
    m_val_attr = 0;
    
    m_has_fact_attr = false;
    m_fact_attr = 0;
    
    m_has_max_attr = false;
    m_max_attr = 0;
    
    m_has_extLst = false;
    
    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }
    
    }

    void CT_NumericRule::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
    if (m_has_type_attr)
    {
        m_type_attr->toXmlAttr("type", _outStream);
    }
    
    
    if (m_has_for_attr)
    {
        m_for_attr->toXmlAttr("for", _outStream);
    }
    
    
    if (m_has_forName_attr)
    {
        _outStream << " " << "forName" << "=\"" << m_forName_attr << "\"";
    }
    
    
    if (m_has_ptType_attr)
    {
        m_ptType_attr->toXmlAttr("ptType", _outStream);
    }
    
    
    if (m_has_val_attr)
    {
        _outStream << " " << "val" << "=\"" << m_val_attr << "\"";
    }
    
    
    if (m_has_fact_attr)
    {
        _outStream << " " << "fact" << "=\"" << m_fact_attr << "\"";
    }
    
    
    if (m_has_max_attr)
    {
        _outStream << " " << "max" << "=\"" << m_max_attr << "\"";
    }
    
            _outStream << ">";
            
    if (m_has_extLst)
    {
        m_extLst->toXmlElem("diagram:extLst", "", _outStream);;
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_NumericRule& CT_NumericRule::default_instance()
    {    
    if (!CT_NumericRule::default_instance_)
    {
        CT_NumericRule::default_instance_ = new CT_NumericRule();
    }
    return *CT_NumericRule::default_instance_;
    }

    bool CT_NumericRule::has_type_attr() const
    {    
    return m_has_type_attr;
    }

    void CT_NumericRule::set_type_attr(const ST_ConstraintType& _type_attr)
    {    
    m_has_type_attr = true;
    m_type_attr = new ST_ConstraintType(_type_attr);
    }

    const ST_ConstraintType& CT_NumericRule::get_type_attr() const
    {    
    if (m_type_attr)
    {
        return *m_type_attr;
    }
    return ST_ConstraintType::default_instance();
    }

    bool CT_NumericRule::has_for_attr() const
    {    
    return m_has_for_attr;
    }

    void CT_NumericRule::set_for_attr(const ST_ConstraintRelationship& _for_attr)
    {    
    m_has_for_attr = true;
    m_for_attr = new ST_ConstraintRelationship(_for_attr);
    }

    const ST_ConstraintRelationship& CT_NumericRule::get_for_attr() const
    {    
    if (m_for_attr)
    {
        return *m_for_attr;
    }
    return ST_ConstraintRelationship::default_instance();
    }

    bool CT_NumericRule::has_forName_attr() const
    {    
    return m_has_forName_attr;
    }

    void CT_NumericRule::set_forName_attr(const XSD::string_& _forName_attr)
    {    
    m_has_forName_attr = true;
    m_forName_attr = _forName_attr;
    }

    const XSD::string_& CT_NumericRule::get_forName_attr() const
    {    
    return m_forName_attr;
    }

    bool CT_NumericRule::has_ptType_attr() const
    {    
    return m_has_ptType_attr;
    }

    void CT_NumericRule::set_ptType_attr(const ST_ElementType& _ptType_attr)
    {    
    m_has_ptType_attr = true;
    m_ptType_attr = new ST_ElementType(_ptType_attr);
    }

    const ST_ElementType& CT_NumericRule::get_ptType_attr() const
    {    
    if (m_ptType_attr)
    {
        return *m_ptType_attr;
    }
    return ST_ElementType::default_instance();
    }

    bool CT_NumericRule::has_val_attr() const
    {    
    return m_has_val_attr;
    }

    void CT_NumericRule::set_val_attr(const XSD::double_& _val_attr)
    {    
    m_has_val_attr = true;
    m_val_attr = _val_attr;
    }

    const XSD::double_& CT_NumericRule::get_val_attr() const
    {    
    return m_val_attr;
    }

    bool CT_NumericRule::has_fact_attr() const
    {    
    return m_has_fact_attr;
    }

    void CT_NumericRule::set_fact_attr(const XSD::double_& _fact_attr)
    {    
    m_has_fact_attr = true;
    m_fact_attr = _fact_attr;
    }

    const XSD::double_& CT_NumericRule::get_fact_attr() const
    {    
    return m_fact_attr;
    }

    bool CT_NumericRule::has_max_attr() const
    {    
    return m_has_max_attr;
    }

    void CT_NumericRule::set_max_attr(const XSD::double_& _max_attr)
    {    
    m_has_max_attr = true;
    m_max_attr = _max_attr;
    }

    const XSD::double_& CT_NumericRule::get_max_attr() const
    {    
    return m_max_attr;
    }

CT_NumericRule* CT_NumericRule::default_instance_ = NULL;

    // CT_Rules
    CT_Rules::CT_Rules()

    {
    }
    CT_Rules::~CT_Rules()
{
    clear();    }
    CT_NumericRule* CT_Rules::add_rule()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_NumericRule* pNewChild = pChildGroup->mutable_rule();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    void CT_Rules::clear()
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

    void CT_Rules::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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
            if ((*iter)->has_rule())
            {
                (*iter)->get_rule().toXmlElem("diagram:rule", "", _outStream);
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


    // CT_Rules::ChildGroup_1
    CT_Rules::ChildGroup_1::ChildGroup_1()
    :m_has_rule(false),
    m_rule(NULL)
    {
    }
    bool CT_Rules::ChildGroup_1::has_rule() const
    {    
    return m_has_rule;
    }

    CT_NumericRule* CT_Rules::ChildGroup_1::mutable_rule()
    {    
    
    m_has_rule = true;
    if (!m_rule)
    {
        m_rule = new CT_NumericRule();
    }
    return m_rule;
    }

    const CT_NumericRule& CT_Rules::ChildGroup_1::get_rule() const
    {    
    if (m_rule)
    {
        return *m_rule;
    }
    return CT_NumericRule::default_instance();
    }

CT_Rules* CT_Rules::default_instance_ = NULL;

    // CT_PresentationOf
    CT_PresentationOf::CT_PresentationOf()
    :m_has_extLst(false),
    m_extLst(NULL),
    m_has_axis_attr(false),
    m_axis_attr(NULL),
    m_has_ptType_attr(false),
    m_ptType_attr(NULL),
    m_has_hideLastTrans_attr(false),
    m_hideLastTrans_attr(NULL),
    m_has_st_attr(false),
    m_st_attr(NULL),
    m_has_cnt_attr(false),
    m_cnt_attr(NULL),
    m_has_step_attr(false),
    m_step_attr(NULL)
    {
    }
    CT_PresentationOf::~CT_PresentationOf()
{
    clear();    }
    bool CT_PresentationOf::has_extLst() const
    {    
    return m_has_extLst;
    }

    ns_a::CT_OfficeArtExtensionList* CT_PresentationOf::mutable_extLst()
    {    
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new ns_a::CT_OfficeArtExtensionList();
    }
    return m_extLst;
    }

    const ns_a::CT_OfficeArtExtensionList& CT_PresentationOf::get_extLst() const
    {    
    if (m_extLst)
    {
        return *m_extLst;
    }
    return ns_a::CT_OfficeArtExtensionList::default_instance();
    }

    void CT_PresentationOf::clear()
    {    
    m_has_axis_attr = false;
    
    if (m_axis_attr)
    {
        delete m_axis_attr;
        m_axis_attr = NULL;
    }
    
    
    m_has_ptType_attr = false;
    
    if (m_ptType_attr)
    {
        delete m_ptType_attr;
        m_ptType_attr = NULL;
    }
    
    
    m_has_hideLastTrans_attr = false;
    
    if (m_hideLastTrans_attr)
    {
        delete m_hideLastTrans_attr;
        m_hideLastTrans_attr = NULL;
    }
    
    
    m_has_st_attr = false;
    
    if (m_st_attr)
    {
        delete m_st_attr;
        m_st_attr = NULL;
    }
    
    
    m_has_cnt_attr = false;
    
    if (m_cnt_attr)
    {
        delete m_cnt_attr;
        m_cnt_attr = NULL;
    }
    
    
    m_has_step_attr = false;
    
    if (m_step_attr)
    {
        delete m_step_attr;
        m_step_attr = NULL;
    }
    
    
    m_has_extLst = false;
    
    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }
    
    }

    void CT_PresentationOf::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
    if (m_has_axis_attr)
    {
        m_axis_attr->toXmlAttr("axis", _outStream);
    }
    
    
    if (m_has_ptType_attr)
    {
        m_ptType_attr->toXmlAttr("ptType", _outStream);
    }
    
    
    if (m_has_hideLastTrans_attr)
    {
        m_hideLastTrans_attr->toXmlAttr("hideLastTrans", _outStream);
    }
    
    
    if (m_has_st_attr)
    {
        m_st_attr->toXmlAttr("st", _outStream);
    }
    
    
    if (m_has_cnt_attr)
    {
        m_cnt_attr->toXmlAttr("cnt", _outStream);
    }
    
    
    if (m_has_step_attr)
    {
        m_step_attr->toXmlAttr("step", _outStream);
    }
    
            _outStream << ">";
            
    if (m_has_extLst)
    {
        m_extLst->toXmlElem("diagram:extLst", "", _outStream);;
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_PresentationOf& CT_PresentationOf::default_instance()
    {    
    if (!CT_PresentationOf::default_instance_)
    {
        CT_PresentationOf::default_instance_ = new CT_PresentationOf();
    }
    return *CT_PresentationOf::default_instance_;
    }

    bool CT_PresentationOf::has_axis_attr() const
    {    
    return m_has_axis_attr;
    }

    void CT_PresentationOf::set_axis_attr(const ST_AxisTypes& _axis_attr)
    {    
    m_has_axis_attr = true;
    m_axis_attr = new ST_AxisTypes(_axis_attr);
    }

    const ST_AxisTypes& CT_PresentationOf::get_axis_attr() const
    {    
    if (m_axis_attr)
    {
        return *m_axis_attr;
    }
    return ST_AxisTypes::default_instance();
    }

    bool CT_PresentationOf::has_ptType_attr() const
    {    
    return m_has_ptType_attr;
    }

    void CT_PresentationOf::set_ptType_attr(const ST_ElementTypes& _ptType_attr)
    {    
    m_has_ptType_attr = true;
    m_ptType_attr = new ST_ElementTypes(_ptType_attr);
    }

    const ST_ElementTypes& CT_PresentationOf::get_ptType_attr() const
    {    
    if (m_ptType_attr)
    {
        return *m_ptType_attr;
    }
    return ST_ElementTypes::default_instance();
    }

    bool CT_PresentationOf::has_hideLastTrans_attr() const
    {    
    return m_has_hideLastTrans_attr;
    }

    void CT_PresentationOf::set_hideLastTrans_attr(const ST_Booleans& _hideLastTrans_attr)
    {    
    m_has_hideLastTrans_attr = true;
    m_hideLastTrans_attr = new ST_Booleans(_hideLastTrans_attr);
    }

    const ST_Booleans& CT_PresentationOf::get_hideLastTrans_attr() const
    {    
    if (m_hideLastTrans_attr)
    {
        return *m_hideLastTrans_attr;
    }
    return ST_Booleans::default_instance();
    }

    bool CT_PresentationOf::has_st_attr() const
    {    
    return m_has_st_attr;
    }

    void CT_PresentationOf::set_st_attr(const ST_Ints& _st_attr)
    {    
    m_has_st_attr = true;
    m_st_attr = new ST_Ints(_st_attr);
    }

    const ST_Ints& CT_PresentationOf::get_st_attr() const
    {    
    if (m_st_attr)
    {
        return *m_st_attr;
    }
    return ST_Ints::default_instance();
    }

    bool CT_PresentationOf::has_cnt_attr() const
    {    
    return m_has_cnt_attr;
    }

    void CT_PresentationOf::set_cnt_attr(const ST_UnsignedInts& _cnt_attr)
    {    
    m_has_cnt_attr = true;
    m_cnt_attr = new ST_UnsignedInts(_cnt_attr);
    }

    const ST_UnsignedInts& CT_PresentationOf::get_cnt_attr() const
    {    
    if (m_cnt_attr)
    {
        return *m_cnt_attr;
    }
    return ST_UnsignedInts::default_instance();
    }

    bool CT_PresentationOf::has_step_attr() const
    {    
    return m_has_step_attr;
    }

    void CT_PresentationOf::set_step_attr(const ST_Ints& _step_attr)
    {    
    m_has_step_attr = true;
    m_step_attr = new ST_Ints(_step_attr);
    }

    const ST_Ints& CT_PresentationOf::get_step_attr() const
    {    
    if (m_step_attr)
    {
        return *m_step_attr;
    }
    return ST_Ints::default_instance();
    }

CT_PresentationOf* CT_PresentationOf::default_instance_ = NULL;

    // CT_Adj
    CT_Adj::CT_Adj()
    :m_has_idx_attr(false),
    m_idx_attr(NULL),
    m_has_val_attr(false),
    m_val_attr(0)
    {
    }
    CT_Adj::~CT_Adj()
{
    clear();    }
    void CT_Adj::clear()
    {    
    m_has_idx_attr = false;
    
    if (m_idx_attr)
    {
        delete m_idx_attr;
        m_idx_attr = NULL;
    }
    
    
    m_has_val_attr = false;
    m_val_attr = 0;
    }

    void CT_Adj::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
    if (m_has_idx_attr)
    {
        m_idx_attr->toXmlAttr("idx", _outStream);
    }
    
    
    if (m_has_val_attr)
    {
        _outStream << " " << "val" << "=\"" << m_val_attr << "\"";
    }
    
            _outStream << ">";
            
            _outStream << "</" << _elemName << ">";
                }

    const CT_Adj& CT_Adj::default_instance()
    {    
    if (!CT_Adj::default_instance_)
    {
        CT_Adj::default_instance_ = new CT_Adj();
    }
    return *CT_Adj::default_instance_;
    }

    bool CT_Adj::has_idx_attr() const
    {    
    return m_has_idx_attr;
    }

    void CT_Adj::set_idx_attr(const ST_Index1& _idx_attr)
    {    
    m_has_idx_attr = true;
    m_idx_attr = new ST_Index1(_idx_attr);
    }

    const ST_Index1& CT_Adj::get_idx_attr() const
    {    
    if (m_idx_attr)
    {
        return *m_idx_attr;
    }
    return ST_Index1::default_instance();
    }

    bool CT_Adj::has_val_attr() const
    {    
    return m_has_val_attr;
    }

    void CT_Adj::set_val_attr(const XSD::double_& _val_attr)
    {    
    m_has_val_attr = true;
    m_val_attr = _val_attr;
    }

    const XSD::double_& CT_Adj::get_val_attr() const
    {    
    return m_val_attr;
    }

CT_Adj* CT_Adj::default_instance_ = NULL;

    // CT_AdjLst
    CT_AdjLst::CT_AdjLst()

    {
    }
    CT_AdjLst::~CT_AdjLst()
{
    clear();    }
    CT_Adj* CT_AdjLst::add_adj()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Adj* pNewChild = pChildGroup->mutable_adj();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    void CT_AdjLst::clear()
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

    void CT_AdjLst::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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
            if ((*iter)->has_adj())
            {
                (*iter)->get_adj().toXmlElem("diagram:adj", "", _outStream);
            }
        }
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_AdjLst& CT_AdjLst::default_instance()
    {    
    if (!CT_AdjLst::default_instance_)
    {
        CT_AdjLst::default_instance_ = new CT_AdjLst();
    }
    return *CT_AdjLst::default_instance_;
    }


    // CT_AdjLst::ChildGroup_1
    CT_AdjLst::ChildGroup_1::ChildGroup_1()
    :m_has_adj(false),
    m_adj(NULL)
    {
    }
    bool CT_AdjLst::ChildGroup_1::has_adj() const
    {    
    return m_has_adj;
    }

    CT_Adj* CT_AdjLst::ChildGroup_1::mutable_adj()
    {    
    
    m_has_adj = true;
    if (!m_adj)
    {
        m_adj = new CT_Adj();
    }
    return m_adj;
    }

    const CT_Adj& CT_AdjLst::ChildGroup_1::get_adj() const
    {    
    if (m_adj)
    {
        return *m_adj;
    }
    return CT_Adj::default_instance();
    }

CT_AdjLst* CT_AdjLst::default_instance_ = NULL;

    // CT_Shape
    CT_Shape::CT_Shape()
    :m_has_adjLst(false),
    m_adjLst(NULL),
    m_has_extLst(false),
    m_extLst(NULL),
    m_has_rot_attr(false),
    m_rot_attr(0),
    m_has_type_attr(false),
    m_type_attr(NULL),
    m_has_r_blip_attr(false),
    m_r_blip_attr(NULL),
    m_has_zOrderOff_attr(false),
    m_zOrderOff_attr(0),
    m_has_hideGeom_attr(false),
    m_hideGeom_attr(false),
    m_has_lkTxEntry_attr(false),
    m_lkTxEntry_attr(false),
    m_has_blipPhldr_attr(false),
    m_blipPhldr_attr(false)
    {
    }
    CT_Shape::~CT_Shape()
{
    clear();    }
    bool CT_Shape::has_adjLst() const
    {    
    return m_has_adjLst;
    }

    CT_AdjLst* CT_Shape::mutable_adjLst()
    {    
    m_has_adjLst = true;
    if (!m_adjLst)
    {
        m_adjLst = new CT_AdjLst();
    }
    return m_adjLst;
    }

    const CT_AdjLst& CT_Shape::get_adjLst() const
    {    
    if (m_adjLst)
    {
        return *m_adjLst;
    }
    return CT_AdjLst::default_instance();
    }

    bool CT_Shape::has_extLst() const
    {    
    return m_has_extLst;
    }

    ns_a::CT_OfficeArtExtensionList* CT_Shape::mutable_extLst()
    {    
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new ns_a::CT_OfficeArtExtensionList();
    }
    return m_extLst;
    }

    const ns_a::CT_OfficeArtExtensionList& CT_Shape::get_extLst() const
    {    
    if (m_extLst)
    {
        return *m_extLst;
    }
    return ns_a::CT_OfficeArtExtensionList::default_instance();
    }

    void CT_Shape::clear()
    {    
    m_has_rot_attr = false;
    m_rot_attr = 0;
    
    m_has_type_attr = false;
    
    if (m_type_attr)
    {
        delete m_type_attr;
        m_type_attr = NULL;
    }
    
    
    m_has_r_blip_attr = false;
    
    if (m_r_blip_attr)
    {
        delete m_r_blip_attr;
        m_r_blip_attr = NULL;
    }
    
    
    m_has_zOrderOff_attr = false;
    m_zOrderOff_attr = 0;
    
    m_has_hideGeom_attr = false;
    m_hideGeom_attr = false;
    
    m_has_lkTxEntry_attr = false;
    m_lkTxEntry_attr = false;
    
    m_has_blipPhldr_attr = false;
    m_blipPhldr_attr = false;
    
    m_has_adjLst = false;
    
    if (m_adjLst)
    {
        delete m_adjLst;
        m_adjLst = NULL;
    }
    
    
    m_has_extLst = false;
    
    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }
    
    }

    void CT_Shape::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
    if (m_has_rot_attr)
    {
        _outStream << " " << "rot" << "=\"" << m_rot_attr << "\"";
    }
    
    
    if (m_has_type_attr)
    {
        m_type_attr->toXmlAttr("type", _outStream);
    }
    
    
    if (m_has_r_blip_attr)
    {
        m_r_blip_attr->toXmlAttr("r:blip", _outStream);
    }
    
    
    if (m_has_zOrderOff_attr)
    {
        _outStream << " " << "zOrderOff" << "=\"" << m_zOrderOff_attr << "\"";
    }
    
    
    if (m_has_hideGeom_attr)
    {
        _outStream << " " << "hideGeom" << "=\"" << XSD::XMLBooleanStr(m_hideGeom_attr) << "\"";
    }
    
    
    if (m_has_lkTxEntry_attr)
    {
        _outStream << " " << "lkTxEntry" << "=\"" << XSD::XMLBooleanStr(m_lkTxEntry_attr) << "\"";
    }
    
    
    if (m_has_blipPhldr_attr)
    {
        _outStream << " " << "blipPhldr" << "=\"" << XSD::XMLBooleanStr(m_blipPhldr_attr) << "\"";
    }
    
            _outStream << ">";
            
    if (m_has_adjLst)
    {
        m_adjLst->toXmlElem("diagram:adjLst", "", _outStream);;
    }
    
    if (m_has_extLst)
    {
        m_extLst->toXmlElem("diagram:extLst", "", _outStream);;
    }
    
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

    bool CT_Shape::has_rot_attr() const
    {    
    return m_has_rot_attr;
    }

    void CT_Shape::set_rot_attr(const XSD::double_& _rot_attr)
    {    
    m_has_rot_attr = true;
    m_rot_attr = _rot_attr;
    }

    const XSD::double_& CT_Shape::get_rot_attr() const
    {    
    return m_rot_attr;
    }

    bool CT_Shape::has_type_attr() const
    {    
    return m_has_type_attr;
    }

    void CT_Shape::set_type_attr(const ST_LayoutShapeType& _type_attr)
    {    
    m_has_type_attr = true;
    m_type_attr = new ST_LayoutShapeType(_type_attr);
    }

    const ST_LayoutShapeType& CT_Shape::get_type_attr() const
    {    
    if (m_type_attr)
    {
        return *m_type_attr;
    }
    return ST_LayoutShapeType::default_instance();
    }

    bool CT_Shape::has_r_blip_attr() const
    {    
    return m_has_r_blip_attr;
    }

    void CT_Shape::set_r_blip_attr(const ns_r::ST_RelationshipId& _r_blip_attr)
    {    
    m_has_r_blip_attr = true;
    m_r_blip_attr = new ns_r::ST_RelationshipId(_r_blip_attr);
    }

    const ns_r::ST_RelationshipId& CT_Shape::get_r_blip_attr() const
    {    
    if (m_r_blip_attr)
    {
        return *m_r_blip_attr;
    }
    return ns_r::ST_RelationshipId::default_instance();
    }

    bool CT_Shape::has_zOrderOff_attr() const
    {    
    return m_has_zOrderOff_attr;
    }

    void CT_Shape::set_zOrderOff_attr(const XSD::int_& _zOrderOff_attr)
    {    
    m_has_zOrderOff_attr = true;
    m_zOrderOff_attr = _zOrderOff_attr;
    }

    const XSD::int_& CT_Shape::get_zOrderOff_attr() const
    {    
    return m_zOrderOff_attr;
    }

    bool CT_Shape::has_hideGeom_attr() const
    {    
    return m_has_hideGeom_attr;
    }

    void CT_Shape::set_hideGeom_attr(const XSD::boolean_& _hideGeom_attr)
    {    
    m_has_hideGeom_attr = true;
    m_hideGeom_attr = _hideGeom_attr;
    }

    const XSD::boolean_& CT_Shape::get_hideGeom_attr() const
    {    
    return m_hideGeom_attr;
    }

    bool CT_Shape::has_lkTxEntry_attr() const
    {    
    return m_has_lkTxEntry_attr;
    }

    void CT_Shape::set_lkTxEntry_attr(const XSD::boolean_& _lkTxEntry_attr)
    {    
    m_has_lkTxEntry_attr = true;
    m_lkTxEntry_attr = _lkTxEntry_attr;
    }

    const XSD::boolean_& CT_Shape::get_lkTxEntry_attr() const
    {    
    return m_lkTxEntry_attr;
    }

    bool CT_Shape::has_blipPhldr_attr() const
    {    
    return m_has_blipPhldr_attr;
    }

    void CT_Shape::set_blipPhldr_attr(const XSD::boolean_& _blipPhldr_attr)
    {    
    m_has_blipPhldr_attr = true;
    m_blipPhldr_attr = _blipPhldr_attr;
    }

    const XSD::boolean_& CT_Shape::get_blipPhldr_attr() const
    {    
    return m_blipPhldr_attr;
    }

CT_Shape* CT_Shape::default_instance_ = NULL;

    // CT_Parameter
    CT_Parameter::CT_Parameter()
    :m_has_type_attr(false),
    m_type_attr(NULL),
    m_has_val_attr(false),
    m_val_attr(NULL)
    {
    }
    CT_Parameter::~CT_Parameter()
{
    clear();    }
    void CT_Parameter::clear()
    {    
    m_has_type_attr = false;
    
    if (m_type_attr)
    {
        delete m_type_attr;
        m_type_attr = NULL;
    }
    
    
    m_has_val_attr = false;
    
    if (m_val_attr)
    {
        delete m_val_attr;
        m_val_attr = NULL;
    }
    
    }

    void CT_Parameter::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
    if (m_has_type_attr)
    {
        m_type_attr->toXmlAttr("type", _outStream);
    }
    
    
    if (m_has_val_attr)
    {
        m_val_attr->toXmlAttr("val", _outStream);
    }
    
            _outStream << ">";
            
            _outStream << "</" << _elemName << ">";
                }

    const CT_Parameter& CT_Parameter::default_instance()
    {    
    if (!CT_Parameter::default_instance_)
    {
        CT_Parameter::default_instance_ = new CT_Parameter();
    }
    return *CT_Parameter::default_instance_;
    }

    bool CT_Parameter::has_type_attr() const
    {    
    return m_has_type_attr;
    }

    void CT_Parameter::set_type_attr(const ST_ParameterId& _type_attr)
    {    
    m_has_type_attr = true;
    m_type_attr = new ST_ParameterId(_type_attr);
    }

    const ST_ParameterId& CT_Parameter::get_type_attr() const
    {    
    if (m_type_attr)
    {
        return *m_type_attr;
    }
    return ST_ParameterId::default_instance();
    }

    bool CT_Parameter::has_val_attr() const
    {    
    return m_has_val_attr;
    }

    void CT_Parameter::set_val_attr(const ST_ParameterVal& _val_attr)
    {    
    m_has_val_attr = true;
    m_val_attr = new ST_ParameterVal(_val_attr);
    }

    const ST_ParameterVal& CT_Parameter::get_val_attr() const
    {    
    if (m_val_attr)
    {
        return *m_val_attr;
    }
    return ST_ParameterVal::default_instance();
    }

CT_Parameter* CT_Parameter::default_instance_ = NULL;

    // CT_Algorithm
    CT_Algorithm::CT_Algorithm()
    :m_has_type_attr(false),
    m_type_attr(NULL),
    m_has_rev_attr(false),
    m_rev_attr(0)
    {
    }
    CT_Algorithm::~CT_Algorithm()
{
    clear();    }
    CT_Parameter* CT_Algorithm::add_param()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Parameter* pNewChild = pChildGroup->mutable_param();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_a::CT_OfficeArtExtensionList* CT_Algorithm::add_extLst()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_a::CT_OfficeArtExtensionList* pNewChild = pChildGroup->mutable_extLst();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    void CT_Algorithm::clear()
    {    
    m_has_type_attr = false;
    
    if (m_type_attr)
    {
        delete m_type_attr;
        m_type_attr = NULL;
    }
    
    
    m_has_rev_attr = false;
    m_rev_attr = 0;
    
    {
        vector<ChildGroup_1*>::iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_1.clear();
    }
    }

    void CT_Algorithm::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
    if (m_has_type_attr)
    {
        m_type_attr->toXmlAttr("type", _outStream);
    }
    
    
    if (m_has_rev_attr)
    {
        _outStream << " " << "rev" << "=\"" << m_rev_attr << "\"";
    }
    
            _outStream << ">";
            
    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_param())
            {
                (*iter)->get_param().toXmlElem("diagram:param", "", _outStream);
            }
            else if ((*iter)->has_extLst())
            {
                (*iter)->get_extLst().toXmlElem("diagram:extLst", "", _outStream);
            }
        }
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_Algorithm& CT_Algorithm::default_instance()
    {    
    if (!CT_Algorithm::default_instance_)
    {
        CT_Algorithm::default_instance_ = new CT_Algorithm();
    }
    return *CT_Algorithm::default_instance_;
    }

    bool CT_Algorithm::has_type_attr() const
    {    
    return m_has_type_attr;
    }

    void CT_Algorithm::set_type_attr(const ST_AlgorithmType& _type_attr)
    {    
    m_has_type_attr = true;
    m_type_attr = new ST_AlgorithmType(_type_attr);
    }

    const ST_AlgorithmType& CT_Algorithm::get_type_attr() const
    {    
    if (m_type_attr)
    {
        return *m_type_attr;
    }
    return ST_AlgorithmType::default_instance();
    }

    bool CT_Algorithm::has_rev_attr() const
    {    
    return m_has_rev_attr;
    }

    void CT_Algorithm::set_rev_attr(const XSD::unsignedInt_& _rev_attr)
    {    
    m_has_rev_attr = true;
    m_rev_attr = _rev_attr;
    }

    const XSD::unsignedInt_& CT_Algorithm::get_rev_attr() const
    {    
    return m_rev_attr;
    }


    // CT_Algorithm::ChildGroup_1
    CT_Algorithm::ChildGroup_1::ChildGroup_1()
    :m_has_param(false),
    m_param(NULL),
    m_has_extLst(false),
    m_extLst(NULL)
    {
    }
    bool CT_Algorithm::ChildGroup_1::has_param() const
    {    
    return m_has_param;
    }

    CT_Parameter* CT_Algorithm::ChildGroup_1::mutable_param()
    {    
    
    m_has_extLst = false;
    
    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }
    ;
    
    m_has_param = true;
    if (!m_param)
    {
        m_param = new CT_Parameter();
    }
    return m_param;
    }

    const CT_Parameter& CT_Algorithm::ChildGroup_1::get_param() const
    {    
    if (m_param)
    {
        return *m_param;
    }
    return CT_Parameter::default_instance();
    }

    bool CT_Algorithm::ChildGroup_1::has_extLst() const
    {    
    return m_has_extLst;
    }

    ns_a::CT_OfficeArtExtensionList* CT_Algorithm::ChildGroup_1::mutable_extLst()
    {    
    
    m_has_param = false;
    
    if (m_param)
    {
        delete m_param;
        m_param = NULL;
    }
    ;
    
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new ns_a::CT_OfficeArtExtensionList();
    }
    return m_extLst;
    }

    const ns_a::CT_OfficeArtExtensionList& CT_Algorithm::ChildGroup_1::get_extLst() const
    {    
    if (m_extLst)
    {
        return *m_extLst;
    }
    return ns_a::CT_OfficeArtExtensionList::default_instance();
    }

CT_Algorithm* CT_Algorithm::default_instance_ = NULL;

    // CT_LayoutNode
    CT_LayoutNode::CT_LayoutNode()
    :m_has_name_attr(false),
    m_name_attr(""),
    m_has_styleLbl_attr(false),
    m_styleLbl_attr(""),
    m_has_chOrder_attr(false),
    m_chOrder_attr(NULL),
    m_has_moveWith_attr(false),
    m_moveWith_attr("")
    {
    }
    CT_LayoutNode::~CT_LayoutNode()
{
    clear();    }
    CT_Algorithm* CT_LayoutNode::add_alg()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Algorithm* pNewChild = pChildGroup->mutable_alg();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Shape* CT_LayoutNode::add_shape()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Shape* pNewChild = pChildGroup->mutable_shape();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_PresentationOf* CT_LayoutNode::add_presOf()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_PresentationOf* pNewChild = pChildGroup->mutable_presOf();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Constraints* CT_LayoutNode::add_constrLst()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Constraints* pNewChild = pChildGroup->mutable_constrLst();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Rules* CT_LayoutNode::add_ruleLst()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Rules* pNewChild = pChildGroup->mutable_ruleLst();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_LayoutVariablePropertySet* CT_LayoutNode::add_varLst()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_LayoutVariablePropertySet* pNewChild = pChildGroup->mutable_varLst();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_ForEach* CT_LayoutNode::add_forEach()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_ForEach* pNewChild = pChildGroup->mutable_forEach();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_LayoutNode* CT_LayoutNode::add_layoutNode()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_LayoutNode* pNewChild = pChildGroup->mutable_layoutNode();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Choose* CT_LayoutNode::add_choose()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Choose* pNewChild = pChildGroup->mutable_choose();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_a::CT_OfficeArtExtensionList* CT_LayoutNode::add_extLst()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_a::CT_OfficeArtExtensionList* pNewChild = pChildGroup->mutable_extLst();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    void CT_LayoutNode::clear()
    {    
    m_has_name_attr = false;
    m_name_attr.clear();
    
    m_has_styleLbl_attr = false;
    m_styleLbl_attr.clear();
    
    m_has_chOrder_attr = false;
    
    if (m_chOrder_attr)
    {
        delete m_chOrder_attr;
        m_chOrder_attr = NULL;
    }
    
    
    m_has_moveWith_attr = false;
    m_moveWith_attr.clear();
    
    {
        vector<ChildGroup_1*>::iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_1.clear();
    }
    }

    void CT_LayoutNode::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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
    
    
    if (m_has_styleLbl_attr)
    {
        _outStream << " " << "styleLbl" << "=\"" << m_styleLbl_attr << "\"";
    }
    
    
    if (m_has_chOrder_attr)
    {
        m_chOrder_attr->toXmlAttr("chOrder", _outStream);
    }
    
    
    if (m_has_moveWith_attr)
    {
        _outStream << " " << "moveWith" << "=\"" << m_moveWith_attr << "\"";
    }
    
            _outStream << ">";
            
    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_alg())
            {
                (*iter)->get_alg().toXmlElem("diagram:alg", "", _outStream);
            }
            else if ((*iter)->has_shape())
            {
                (*iter)->get_shape().toXmlElem("diagram:shape", "", _outStream);
            }
            else if ((*iter)->has_presOf())
            {
                (*iter)->get_presOf().toXmlElem("diagram:presOf", "", _outStream);
            }
            else if ((*iter)->has_constrLst())
            {
                (*iter)->get_constrLst().toXmlElem("diagram:constrLst", "", _outStream);
            }
            else if ((*iter)->has_ruleLst())
            {
                (*iter)->get_ruleLst().toXmlElem("diagram:ruleLst", "", _outStream);
            }
            else if ((*iter)->has_varLst())
            {
                (*iter)->get_varLst().toXmlElem("diagram:varLst", "", _outStream);
            }
            else if ((*iter)->has_forEach())
            {
                (*iter)->get_forEach().toXmlElem("diagram:forEach", "", _outStream);
            }
            else if ((*iter)->has_layoutNode())
            {
                (*iter)->get_layoutNode().toXmlElem("diagram:layoutNode", "", _outStream);
            }
            else if ((*iter)->has_choose())
            {
                (*iter)->get_choose().toXmlElem("diagram:choose", "", _outStream);
            }
            else if ((*iter)->has_extLst())
            {
                (*iter)->get_extLst().toXmlElem("diagram:extLst", "", _outStream);
            }
        }
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_LayoutNode& CT_LayoutNode::default_instance()
    {    
    if (!CT_LayoutNode::default_instance_)
    {
        CT_LayoutNode::default_instance_ = new CT_LayoutNode();
    }
    return *CT_LayoutNode::default_instance_;
    }

    bool CT_LayoutNode::has_name_attr() const
    {    
    return m_has_name_attr;
    }

    void CT_LayoutNode::set_name_attr(const XSD::string_& _name_attr)
    {    
    m_has_name_attr = true;
    m_name_attr = _name_attr;
    }

    const XSD::string_& CT_LayoutNode::get_name_attr() const
    {    
    return m_name_attr;
    }

    bool CT_LayoutNode::has_styleLbl_attr() const
    {    
    return m_has_styleLbl_attr;
    }

    void CT_LayoutNode::set_styleLbl_attr(const XSD::string_& _styleLbl_attr)
    {    
    m_has_styleLbl_attr = true;
    m_styleLbl_attr = _styleLbl_attr;
    }

    const XSD::string_& CT_LayoutNode::get_styleLbl_attr() const
    {    
    return m_styleLbl_attr;
    }

    bool CT_LayoutNode::has_chOrder_attr() const
    {    
    return m_has_chOrder_attr;
    }

    void CT_LayoutNode::set_chOrder_attr(const ST_ChildOrderType& _chOrder_attr)
    {    
    m_has_chOrder_attr = true;
    m_chOrder_attr = new ST_ChildOrderType(_chOrder_attr);
    }

    const ST_ChildOrderType& CT_LayoutNode::get_chOrder_attr() const
    {    
    if (m_chOrder_attr)
    {
        return *m_chOrder_attr;
    }
    return ST_ChildOrderType::default_instance();
    }

    bool CT_LayoutNode::has_moveWith_attr() const
    {    
    return m_has_moveWith_attr;
    }

    void CT_LayoutNode::set_moveWith_attr(const XSD::string_& _moveWith_attr)
    {    
    m_has_moveWith_attr = true;
    m_moveWith_attr = _moveWith_attr;
    }

    const XSD::string_& CT_LayoutNode::get_moveWith_attr() const
    {    
    return m_moveWith_attr;
    }


    // CT_LayoutNode::ChildGroup_1
    CT_LayoutNode::ChildGroup_1::ChildGroup_1()
    :m_has_alg(false),
    m_alg(NULL),
    m_has_shape(false),
    m_shape(NULL),
    m_has_presOf(false),
    m_presOf(NULL),
    m_has_constrLst(false),
    m_constrLst(NULL),
    m_has_ruleLst(false),
    m_ruleLst(NULL),
    m_has_varLst(false),
    m_varLst(NULL),
    m_has_forEach(false),
    m_forEach(NULL),
    m_has_layoutNode(false),
    m_layoutNode(NULL),
    m_has_choose(false),
    m_choose(NULL),
    m_has_extLst(false),
    m_extLst(NULL)
    {
    }
    bool CT_LayoutNode::ChildGroup_1::has_alg() const
    {    
    return m_has_alg;
    }

    CT_Algorithm* CT_LayoutNode::ChildGroup_1::mutable_alg()
    {    
    
    m_has_shape = false;
    
    if (m_shape)
    {
        delete m_shape;
        m_shape = NULL;
    }
    ;
    
    m_has_presOf = false;
    
    if (m_presOf)
    {
        delete m_presOf;
        m_presOf = NULL;
    }
    ;
    
    m_has_constrLst = false;
    
    if (m_constrLst)
    {
        delete m_constrLst;
        m_constrLst = NULL;
    }
    ;
    
    m_has_ruleLst = false;
    
    if (m_ruleLst)
    {
        delete m_ruleLst;
        m_ruleLst = NULL;
    }
    ;
    
    m_has_varLst = false;
    
    if (m_varLst)
    {
        delete m_varLst;
        m_varLst = NULL;
    }
    ;
    
    m_has_forEach = false;
    
    if (m_forEach)
    {
        delete m_forEach;
        m_forEach = NULL;
    }
    ;
    
    m_has_layoutNode = false;
    
    if (m_layoutNode)
    {
        delete m_layoutNode;
        m_layoutNode = NULL;
    }
    ;
    
    m_has_choose = false;
    
    if (m_choose)
    {
        delete m_choose;
        m_choose = NULL;
    }
    ;
    
    m_has_extLst = false;
    
    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }
    ;
    
    m_has_alg = true;
    if (!m_alg)
    {
        m_alg = new CT_Algorithm();
    }
    return m_alg;
    }

    const CT_Algorithm& CT_LayoutNode::ChildGroup_1::get_alg() const
    {    
    if (m_alg)
    {
        return *m_alg;
    }
    return CT_Algorithm::default_instance();
    }

    bool CT_LayoutNode::ChildGroup_1::has_shape() const
    {    
    return m_has_shape;
    }

    CT_Shape* CT_LayoutNode::ChildGroup_1::mutable_shape()
    {    
    
    m_has_alg = false;
    
    if (m_alg)
    {
        delete m_alg;
        m_alg = NULL;
    }
    ;
    
    m_has_presOf = false;
    
    if (m_presOf)
    {
        delete m_presOf;
        m_presOf = NULL;
    }
    ;
    
    m_has_constrLst = false;
    
    if (m_constrLst)
    {
        delete m_constrLst;
        m_constrLst = NULL;
    }
    ;
    
    m_has_ruleLst = false;
    
    if (m_ruleLst)
    {
        delete m_ruleLst;
        m_ruleLst = NULL;
    }
    ;
    
    m_has_varLst = false;
    
    if (m_varLst)
    {
        delete m_varLst;
        m_varLst = NULL;
    }
    ;
    
    m_has_forEach = false;
    
    if (m_forEach)
    {
        delete m_forEach;
        m_forEach = NULL;
    }
    ;
    
    m_has_layoutNode = false;
    
    if (m_layoutNode)
    {
        delete m_layoutNode;
        m_layoutNode = NULL;
    }
    ;
    
    m_has_choose = false;
    
    if (m_choose)
    {
        delete m_choose;
        m_choose = NULL;
    }
    ;
    
    m_has_extLst = false;
    
    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }
    ;
    
    m_has_shape = true;
    if (!m_shape)
    {
        m_shape = new CT_Shape();
    }
    return m_shape;
    }

    const CT_Shape& CT_LayoutNode::ChildGroup_1::get_shape() const
    {    
    if (m_shape)
    {
        return *m_shape;
    }
    return CT_Shape::default_instance();
    }

    bool CT_LayoutNode::ChildGroup_1::has_presOf() const
    {    
    return m_has_presOf;
    }

    CT_PresentationOf* CT_LayoutNode::ChildGroup_1::mutable_presOf()
    {    
    
    m_has_alg = false;
    
    if (m_alg)
    {
        delete m_alg;
        m_alg = NULL;
    }
    ;
    
    m_has_shape = false;
    
    if (m_shape)
    {
        delete m_shape;
        m_shape = NULL;
    }
    ;
    
    m_has_constrLst = false;
    
    if (m_constrLst)
    {
        delete m_constrLst;
        m_constrLst = NULL;
    }
    ;
    
    m_has_ruleLst = false;
    
    if (m_ruleLst)
    {
        delete m_ruleLst;
        m_ruleLst = NULL;
    }
    ;
    
    m_has_varLst = false;
    
    if (m_varLst)
    {
        delete m_varLst;
        m_varLst = NULL;
    }
    ;
    
    m_has_forEach = false;
    
    if (m_forEach)
    {
        delete m_forEach;
        m_forEach = NULL;
    }
    ;
    
    m_has_layoutNode = false;
    
    if (m_layoutNode)
    {
        delete m_layoutNode;
        m_layoutNode = NULL;
    }
    ;
    
    m_has_choose = false;
    
    if (m_choose)
    {
        delete m_choose;
        m_choose = NULL;
    }
    ;
    
    m_has_extLst = false;
    
    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }
    ;
    
    m_has_presOf = true;
    if (!m_presOf)
    {
        m_presOf = new CT_PresentationOf();
    }
    return m_presOf;
    }

    const CT_PresentationOf& CT_LayoutNode::ChildGroup_1::get_presOf() const
    {    
    if (m_presOf)
    {
        return *m_presOf;
    }
    return CT_PresentationOf::default_instance();
    }

    bool CT_LayoutNode::ChildGroup_1::has_constrLst() const
    {    
    return m_has_constrLst;
    }

    CT_Constraints* CT_LayoutNode::ChildGroup_1::mutable_constrLst()
    {    
    
    m_has_alg = false;
    
    if (m_alg)
    {
        delete m_alg;
        m_alg = NULL;
    }
    ;
    
    m_has_shape = false;
    
    if (m_shape)
    {
        delete m_shape;
        m_shape = NULL;
    }
    ;
    
    m_has_presOf = false;
    
    if (m_presOf)
    {
        delete m_presOf;
        m_presOf = NULL;
    }
    ;
    
    m_has_ruleLst = false;
    
    if (m_ruleLst)
    {
        delete m_ruleLst;
        m_ruleLst = NULL;
    }
    ;
    
    m_has_varLst = false;
    
    if (m_varLst)
    {
        delete m_varLst;
        m_varLst = NULL;
    }
    ;
    
    m_has_forEach = false;
    
    if (m_forEach)
    {
        delete m_forEach;
        m_forEach = NULL;
    }
    ;
    
    m_has_layoutNode = false;
    
    if (m_layoutNode)
    {
        delete m_layoutNode;
        m_layoutNode = NULL;
    }
    ;
    
    m_has_choose = false;
    
    if (m_choose)
    {
        delete m_choose;
        m_choose = NULL;
    }
    ;
    
    m_has_extLst = false;
    
    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }
    ;
    
    m_has_constrLst = true;
    if (!m_constrLst)
    {
        m_constrLst = new CT_Constraints();
    }
    return m_constrLst;
    }

    const CT_Constraints& CT_LayoutNode::ChildGroup_1::get_constrLst() const
    {    
    if (m_constrLst)
    {
        return *m_constrLst;
    }
    return CT_Constraints::default_instance();
    }

    bool CT_LayoutNode::ChildGroup_1::has_ruleLst() const
    {    
    return m_has_ruleLst;
    }

    CT_Rules* CT_LayoutNode::ChildGroup_1::mutable_ruleLst()
    {    
    
    m_has_alg = false;
    
    if (m_alg)
    {
        delete m_alg;
        m_alg = NULL;
    }
    ;
    
    m_has_shape = false;
    
    if (m_shape)
    {
        delete m_shape;
        m_shape = NULL;
    }
    ;
    
    m_has_presOf = false;
    
    if (m_presOf)
    {
        delete m_presOf;
        m_presOf = NULL;
    }
    ;
    
    m_has_constrLst = false;
    
    if (m_constrLst)
    {
        delete m_constrLst;
        m_constrLst = NULL;
    }
    ;
    
    m_has_varLst = false;
    
    if (m_varLst)
    {
        delete m_varLst;
        m_varLst = NULL;
    }
    ;
    
    m_has_forEach = false;
    
    if (m_forEach)
    {
        delete m_forEach;
        m_forEach = NULL;
    }
    ;
    
    m_has_layoutNode = false;
    
    if (m_layoutNode)
    {
        delete m_layoutNode;
        m_layoutNode = NULL;
    }
    ;
    
    m_has_choose = false;
    
    if (m_choose)
    {
        delete m_choose;
        m_choose = NULL;
    }
    ;
    
    m_has_extLst = false;
    
    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }
    ;
    
    m_has_ruleLst = true;
    if (!m_ruleLst)
    {
        m_ruleLst = new CT_Rules();
    }
    return m_ruleLst;
    }

    const CT_Rules& CT_LayoutNode::ChildGroup_1::get_ruleLst() const
    {    
    if (m_ruleLst)
    {
        return *m_ruleLst;
    }
    return CT_Rules::default_instance();
    }

    bool CT_LayoutNode::ChildGroup_1::has_varLst() const
    {    
    return m_has_varLst;
    }

    CT_LayoutVariablePropertySet* CT_LayoutNode::ChildGroup_1::mutable_varLst()
    {    
    
    m_has_alg = false;
    
    if (m_alg)
    {
        delete m_alg;
        m_alg = NULL;
    }
    ;
    
    m_has_shape = false;
    
    if (m_shape)
    {
        delete m_shape;
        m_shape = NULL;
    }
    ;
    
    m_has_presOf = false;
    
    if (m_presOf)
    {
        delete m_presOf;
        m_presOf = NULL;
    }
    ;
    
    m_has_constrLst = false;
    
    if (m_constrLst)
    {
        delete m_constrLst;
        m_constrLst = NULL;
    }
    ;
    
    m_has_ruleLst = false;
    
    if (m_ruleLst)
    {
        delete m_ruleLst;
        m_ruleLst = NULL;
    }
    ;
    
    m_has_forEach = false;
    
    if (m_forEach)
    {
        delete m_forEach;
        m_forEach = NULL;
    }
    ;
    
    m_has_layoutNode = false;
    
    if (m_layoutNode)
    {
        delete m_layoutNode;
        m_layoutNode = NULL;
    }
    ;
    
    m_has_choose = false;
    
    if (m_choose)
    {
        delete m_choose;
        m_choose = NULL;
    }
    ;
    
    m_has_extLst = false;
    
    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }
    ;
    
    m_has_varLst = true;
    if (!m_varLst)
    {
        m_varLst = new CT_LayoutVariablePropertySet();
    }
    return m_varLst;
    }

    const CT_LayoutVariablePropertySet& CT_LayoutNode::ChildGroup_1::get_varLst() const
    {    
    if (m_varLst)
    {
        return *m_varLst;
    }
    return CT_LayoutVariablePropertySet::default_instance();
    }

    bool CT_LayoutNode::ChildGroup_1::has_forEach() const
    {    
    return m_has_forEach;
    }

    CT_ForEach* CT_LayoutNode::ChildGroup_1::mutable_forEach()
    {    
    
    m_has_alg = false;
    
    if (m_alg)
    {
        delete m_alg;
        m_alg = NULL;
    }
    ;
    
    m_has_shape = false;
    
    if (m_shape)
    {
        delete m_shape;
        m_shape = NULL;
    }
    ;
    
    m_has_presOf = false;
    
    if (m_presOf)
    {
        delete m_presOf;
        m_presOf = NULL;
    }
    ;
    
    m_has_constrLst = false;
    
    if (m_constrLst)
    {
        delete m_constrLst;
        m_constrLst = NULL;
    }
    ;
    
    m_has_ruleLst = false;
    
    if (m_ruleLst)
    {
        delete m_ruleLst;
        m_ruleLst = NULL;
    }
    ;
    
    m_has_varLst = false;
    
    if (m_varLst)
    {
        delete m_varLst;
        m_varLst = NULL;
    }
    ;
    
    m_has_layoutNode = false;
    
    if (m_layoutNode)
    {
        delete m_layoutNode;
        m_layoutNode = NULL;
    }
    ;
    
    m_has_choose = false;
    
    if (m_choose)
    {
        delete m_choose;
        m_choose = NULL;
    }
    ;
    
    m_has_extLst = false;
    
    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }
    ;
    
    m_has_forEach = true;
    if (!m_forEach)
    {
        m_forEach = new CT_ForEach();
    }
    return m_forEach;
    }

    const CT_ForEach& CT_LayoutNode::ChildGroup_1::get_forEach() const
    {    
    if (m_forEach)
    {
        return *m_forEach;
    }
    return CT_ForEach::default_instance();
    }

    bool CT_LayoutNode::ChildGroup_1::has_layoutNode() const
    {    
    return m_has_layoutNode;
    }

    CT_LayoutNode* CT_LayoutNode::ChildGroup_1::mutable_layoutNode()
    {    
    
    m_has_alg = false;
    
    if (m_alg)
    {
        delete m_alg;
        m_alg = NULL;
    }
    ;
    
    m_has_shape = false;
    
    if (m_shape)
    {
        delete m_shape;
        m_shape = NULL;
    }
    ;
    
    m_has_presOf = false;
    
    if (m_presOf)
    {
        delete m_presOf;
        m_presOf = NULL;
    }
    ;
    
    m_has_constrLst = false;
    
    if (m_constrLst)
    {
        delete m_constrLst;
        m_constrLst = NULL;
    }
    ;
    
    m_has_ruleLst = false;
    
    if (m_ruleLst)
    {
        delete m_ruleLst;
        m_ruleLst = NULL;
    }
    ;
    
    m_has_varLst = false;
    
    if (m_varLst)
    {
        delete m_varLst;
        m_varLst = NULL;
    }
    ;
    
    m_has_forEach = false;
    
    if (m_forEach)
    {
        delete m_forEach;
        m_forEach = NULL;
    }
    ;
    
    m_has_choose = false;
    
    if (m_choose)
    {
        delete m_choose;
        m_choose = NULL;
    }
    ;
    
    m_has_extLst = false;
    
    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }
    ;
    
    m_has_layoutNode = true;
    if (!m_layoutNode)
    {
        m_layoutNode = new CT_LayoutNode();
    }
    return m_layoutNode;
    }

    const CT_LayoutNode& CT_LayoutNode::ChildGroup_1::get_layoutNode() const
    {    
    if (m_layoutNode)
    {
        return *m_layoutNode;
    }
    return CT_LayoutNode::default_instance();
    }

    bool CT_LayoutNode::ChildGroup_1::has_choose() const
    {    
    return m_has_choose;
    }

    CT_Choose* CT_LayoutNode::ChildGroup_1::mutable_choose()
    {    
    
    m_has_alg = false;
    
    if (m_alg)
    {
        delete m_alg;
        m_alg = NULL;
    }
    ;
    
    m_has_shape = false;
    
    if (m_shape)
    {
        delete m_shape;
        m_shape = NULL;
    }
    ;
    
    m_has_presOf = false;
    
    if (m_presOf)
    {
        delete m_presOf;
        m_presOf = NULL;
    }
    ;
    
    m_has_constrLst = false;
    
    if (m_constrLst)
    {
        delete m_constrLst;
        m_constrLst = NULL;
    }
    ;
    
    m_has_ruleLst = false;
    
    if (m_ruleLst)
    {
        delete m_ruleLst;
        m_ruleLst = NULL;
    }
    ;
    
    m_has_varLst = false;
    
    if (m_varLst)
    {
        delete m_varLst;
        m_varLst = NULL;
    }
    ;
    
    m_has_forEach = false;
    
    if (m_forEach)
    {
        delete m_forEach;
        m_forEach = NULL;
    }
    ;
    
    m_has_layoutNode = false;
    
    if (m_layoutNode)
    {
        delete m_layoutNode;
        m_layoutNode = NULL;
    }
    ;
    
    m_has_extLst = false;
    
    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }
    ;
    
    m_has_choose = true;
    if (!m_choose)
    {
        m_choose = new CT_Choose();
    }
    return m_choose;
    }

    const CT_Choose& CT_LayoutNode::ChildGroup_1::get_choose() const
    {    
    if (m_choose)
    {
        return *m_choose;
    }
    return CT_Choose::default_instance();
    }

    bool CT_LayoutNode::ChildGroup_1::has_extLst() const
    {    
    return m_has_extLst;
    }

    ns_a::CT_OfficeArtExtensionList* CT_LayoutNode::ChildGroup_1::mutable_extLst()
    {    
    
    m_has_alg = false;
    
    if (m_alg)
    {
        delete m_alg;
        m_alg = NULL;
    }
    ;
    
    m_has_shape = false;
    
    if (m_shape)
    {
        delete m_shape;
        m_shape = NULL;
    }
    ;
    
    m_has_presOf = false;
    
    if (m_presOf)
    {
        delete m_presOf;
        m_presOf = NULL;
    }
    ;
    
    m_has_constrLst = false;
    
    if (m_constrLst)
    {
        delete m_constrLst;
        m_constrLst = NULL;
    }
    ;
    
    m_has_ruleLst = false;
    
    if (m_ruleLst)
    {
        delete m_ruleLst;
        m_ruleLst = NULL;
    }
    ;
    
    m_has_varLst = false;
    
    if (m_varLst)
    {
        delete m_varLst;
        m_varLst = NULL;
    }
    ;
    
    m_has_forEach = false;
    
    if (m_forEach)
    {
        delete m_forEach;
        m_forEach = NULL;
    }
    ;
    
    m_has_layoutNode = false;
    
    if (m_layoutNode)
    {
        delete m_layoutNode;
        m_layoutNode = NULL;
    }
    ;
    
    m_has_choose = false;
    
    if (m_choose)
    {
        delete m_choose;
        m_choose = NULL;
    }
    ;
    
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new ns_a::CT_OfficeArtExtensionList();
    }
    return m_extLst;
    }

    const ns_a::CT_OfficeArtExtensionList& CT_LayoutNode::ChildGroup_1::get_extLst() const
    {    
    if (m_extLst)
    {
        return *m_extLst;
    }
    return ns_a::CT_OfficeArtExtensionList::default_instance();
    }

CT_LayoutNode* CT_LayoutNode::default_instance_ = NULL;

    // CT_ForEach
    CT_ForEach::CT_ForEach()
    :m_has_name_attr(false),
    m_name_attr(""),
    m_has_ref_attr(false),
    m_ref_attr(""),
    m_has_axis_attr(false),
    m_axis_attr(NULL),
    m_has_ptType_attr(false),
    m_ptType_attr(NULL),
    m_has_hideLastTrans_attr(false),
    m_hideLastTrans_attr(NULL),
    m_has_st_attr(false),
    m_st_attr(NULL),
    m_has_cnt_attr(false),
    m_cnt_attr(NULL),
    m_has_step_attr(false),
    m_step_attr(NULL)
    {
    }
    CT_ForEach::~CT_ForEach()
{
    clear();    }
    CT_Algorithm* CT_ForEach::add_alg()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Algorithm* pNewChild = pChildGroup->mutable_alg();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Shape* CT_ForEach::add_shape()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Shape* pNewChild = pChildGroup->mutable_shape();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_PresentationOf* CT_ForEach::add_presOf()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_PresentationOf* pNewChild = pChildGroup->mutable_presOf();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Constraints* CT_ForEach::add_constrLst()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Constraints* pNewChild = pChildGroup->mutable_constrLst();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Rules* CT_ForEach::add_ruleLst()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Rules* pNewChild = pChildGroup->mutable_ruleLst();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_ForEach* CT_ForEach::add_forEach()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_ForEach* pNewChild = pChildGroup->mutable_forEach();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_LayoutNode* CT_ForEach::add_layoutNode()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_LayoutNode* pNewChild = pChildGroup->mutable_layoutNode();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Choose* CT_ForEach::add_choose()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Choose* pNewChild = pChildGroup->mutable_choose();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_a::CT_OfficeArtExtensionList* CT_ForEach::add_extLst()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_a::CT_OfficeArtExtensionList* pNewChild = pChildGroup->mutable_extLst();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    void CT_ForEach::clear()
    {    
    m_has_name_attr = false;
    m_name_attr.clear();
    
    m_has_ref_attr = false;
    m_ref_attr.clear();
    
    m_has_axis_attr = false;
    
    if (m_axis_attr)
    {
        delete m_axis_attr;
        m_axis_attr = NULL;
    }
    
    
    m_has_ptType_attr = false;
    
    if (m_ptType_attr)
    {
        delete m_ptType_attr;
        m_ptType_attr = NULL;
    }
    
    
    m_has_hideLastTrans_attr = false;
    
    if (m_hideLastTrans_attr)
    {
        delete m_hideLastTrans_attr;
        m_hideLastTrans_attr = NULL;
    }
    
    
    m_has_st_attr = false;
    
    if (m_st_attr)
    {
        delete m_st_attr;
        m_st_attr = NULL;
    }
    
    
    m_has_cnt_attr = false;
    
    if (m_cnt_attr)
    {
        delete m_cnt_attr;
        m_cnt_attr = NULL;
    }
    
    
    m_has_step_attr = false;
    
    if (m_step_attr)
    {
        delete m_step_attr;
        m_step_attr = NULL;
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

    void CT_ForEach::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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
    
    
    if (m_has_ref_attr)
    {
        _outStream << " " << "ref" << "=\"" << m_ref_attr << "\"";
    }
    
    
    if (m_has_axis_attr)
    {
        m_axis_attr->toXmlAttr("axis", _outStream);
    }
    
    
    if (m_has_ptType_attr)
    {
        m_ptType_attr->toXmlAttr("ptType", _outStream);
    }
    
    
    if (m_has_hideLastTrans_attr)
    {
        m_hideLastTrans_attr->toXmlAttr("hideLastTrans", _outStream);
    }
    
    
    if (m_has_st_attr)
    {
        m_st_attr->toXmlAttr("st", _outStream);
    }
    
    
    if (m_has_cnt_attr)
    {
        m_cnt_attr->toXmlAttr("cnt", _outStream);
    }
    
    
    if (m_has_step_attr)
    {
        m_step_attr->toXmlAttr("step", _outStream);
    }
    
            _outStream << ">";
            
    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_alg())
            {
                (*iter)->get_alg().toXmlElem("diagram:alg", "", _outStream);
            }
            else if ((*iter)->has_shape())
            {
                (*iter)->get_shape().toXmlElem("diagram:shape", "", _outStream);
            }
            else if ((*iter)->has_presOf())
            {
                (*iter)->get_presOf().toXmlElem("diagram:presOf", "", _outStream);
            }
            else if ((*iter)->has_constrLst())
            {
                (*iter)->get_constrLst().toXmlElem("diagram:constrLst", "", _outStream);
            }
            else if ((*iter)->has_ruleLst())
            {
                (*iter)->get_ruleLst().toXmlElem("diagram:ruleLst", "", _outStream);
            }
            else if ((*iter)->has_forEach())
            {
                (*iter)->get_forEach().toXmlElem("diagram:forEach", "", _outStream);
            }
            else if ((*iter)->has_layoutNode())
            {
                (*iter)->get_layoutNode().toXmlElem("diagram:layoutNode", "", _outStream);
            }
            else if ((*iter)->has_choose())
            {
                (*iter)->get_choose().toXmlElem("diagram:choose", "", _outStream);
            }
            else if ((*iter)->has_extLst())
            {
                (*iter)->get_extLst().toXmlElem("diagram:extLst", "", _outStream);
            }
        }
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_ForEach& CT_ForEach::default_instance()
    {    
    if (!CT_ForEach::default_instance_)
    {
        CT_ForEach::default_instance_ = new CT_ForEach();
    }
    return *CT_ForEach::default_instance_;
    }

    bool CT_ForEach::has_name_attr() const
    {    
    return m_has_name_attr;
    }

    void CT_ForEach::set_name_attr(const XSD::string_& _name_attr)
    {    
    m_has_name_attr = true;
    m_name_attr = _name_attr;
    }

    const XSD::string_& CT_ForEach::get_name_attr() const
    {    
    return m_name_attr;
    }

    bool CT_ForEach::has_ref_attr() const
    {    
    return m_has_ref_attr;
    }

    void CT_ForEach::set_ref_attr(const XSD::string_& _ref_attr)
    {    
    m_has_ref_attr = true;
    m_ref_attr = _ref_attr;
    }

    const XSD::string_& CT_ForEach::get_ref_attr() const
    {    
    return m_ref_attr;
    }

    bool CT_ForEach::has_axis_attr() const
    {    
    return m_has_axis_attr;
    }

    void CT_ForEach::set_axis_attr(const ST_AxisTypes& _axis_attr)
    {    
    m_has_axis_attr = true;
    m_axis_attr = new ST_AxisTypes(_axis_attr);
    }

    const ST_AxisTypes& CT_ForEach::get_axis_attr() const
    {    
    if (m_axis_attr)
    {
        return *m_axis_attr;
    }
    return ST_AxisTypes::default_instance();
    }

    bool CT_ForEach::has_ptType_attr() const
    {    
    return m_has_ptType_attr;
    }

    void CT_ForEach::set_ptType_attr(const ST_ElementTypes& _ptType_attr)
    {    
    m_has_ptType_attr = true;
    m_ptType_attr = new ST_ElementTypes(_ptType_attr);
    }

    const ST_ElementTypes& CT_ForEach::get_ptType_attr() const
    {    
    if (m_ptType_attr)
    {
        return *m_ptType_attr;
    }
    return ST_ElementTypes::default_instance();
    }

    bool CT_ForEach::has_hideLastTrans_attr() const
    {    
    return m_has_hideLastTrans_attr;
    }

    void CT_ForEach::set_hideLastTrans_attr(const ST_Booleans& _hideLastTrans_attr)
    {    
    m_has_hideLastTrans_attr = true;
    m_hideLastTrans_attr = new ST_Booleans(_hideLastTrans_attr);
    }

    const ST_Booleans& CT_ForEach::get_hideLastTrans_attr() const
    {    
    if (m_hideLastTrans_attr)
    {
        return *m_hideLastTrans_attr;
    }
    return ST_Booleans::default_instance();
    }

    bool CT_ForEach::has_st_attr() const
    {    
    return m_has_st_attr;
    }

    void CT_ForEach::set_st_attr(const ST_Ints& _st_attr)
    {    
    m_has_st_attr = true;
    m_st_attr = new ST_Ints(_st_attr);
    }

    const ST_Ints& CT_ForEach::get_st_attr() const
    {    
    if (m_st_attr)
    {
        return *m_st_attr;
    }
    return ST_Ints::default_instance();
    }

    bool CT_ForEach::has_cnt_attr() const
    {    
    return m_has_cnt_attr;
    }

    void CT_ForEach::set_cnt_attr(const ST_UnsignedInts& _cnt_attr)
    {    
    m_has_cnt_attr = true;
    m_cnt_attr = new ST_UnsignedInts(_cnt_attr);
    }

    const ST_UnsignedInts& CT_ForEach::get_cnt_attr() const
    {    
    if (m_cnt_attr)
    {
        return *m_cnt_attr;
    }
    return ST_UnsignedInts::default_instance();
    }

    bool CT_ForEach::has_step_attr() const
    {    
    return m_has_step_attr;
    }

    void CT_ForEach::set_step_attr(const ST_Ints& _step_attr)
    {    
    m_has_step_attr = true;
    m_step_attr = new ST_Ints(_step_attr);
    }

    const ST_Ints& CT_ForEach::get_step_attr() const
    {    
    if (m_step_attr)
    {
        return *m_step_attr;
    }
    return ST_Ints::default_instance();
    }


    // CT_ForEach::ChildGroup_1
    CT_ForEach::ChildGroup_1::ChildGroup_1()
    :m_has_alg(false),
    m_alg(NULL),
    m_has_shape(false),
    m_shape(NULL),
    m_has_presOf(false),
    m_presOf(NULL),
    m_has_constrLst(false),
    m_constrLst(NULL),
    m_has_ruleLst(false),
    m_ruleLst(NULL),
    m_has_forEach(false),
    m_forEach(NULL),
    m_has_layoutNode(false),
    m_layoutNode(NULL),
    m_has_choose(false),
    m_choose(NULL),
    m_has_extLst(false),
    m_extLst(NULL)
    {
    }
    bool CT_ForEach::ChildGroup_1::has_alg() const
    {    
    return m_has_alg;
    }

    CT_Algorithm* CT_ForEach::ChildGroup_1::mutable_alg()
    {    
    
    m_has_shape = false;
    
    if (m_shape)
    {
        delete m_shape;
        m_shape = NULL;
    }
    ;
    
    m_has_presOf = false;
    
    if (m_presOf)
    {
        delete m_presOf;
        m_presOf = NULL;
    }
    ;
    
    m_has_constrLst = false;
    
    if (m_constrLst)
    {
        delete m_constrLst;
        m_constrLst = NULL;
    }
    ;
    
    m_has_ruleLst = false;
    
    if (m_ruleLst)
    {
        delete m_ruleLst;
        m_ruleLst = NULL;
    }
    ;
    
    m_has_forEach = false;
    
    if (m_forEach)
    {
        delete m_forEach;
        m_forEach = NULL;
    }
    ;
    
    m_has_layoutNode = false;
    
    if (m_layoutNode)
    {
        delete m_layoutNode;
        m_layoutNode = NULL;
    }
    ;
    
    m_has_choose = false;
    
    if (m_choose)
    {
        delete m_choose;
        m_choose = NULL;
    }
    ;
    
    m_has_extLst = false;
    
    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }
    ;
    
    m_has_alg = true;
    if (!m_alg)
    {
        m_alg = new CT_Algorithm();
    }
    return m_alg;
    }

    const CT_Algorithm& CT_ForEach::ChildGroup_1::get_alg() const
    {    
    if (m_alg)
    {
        return *m_alg;
    }
    return CT_Algorithm::default_instance();
    }

    bool CT_ForEach::ChildGroup_1::has_shape() const
    {    
    return m_has_shape;
    }

    CT_Shape* CT_ForEach::ChildGroup_1::mutable_shape()
    {    
    
    m_has_alg = false;
    
    if (m_alg)
    {
        delete m_alg;
        m_alg = NULL;
    }
    ;
    
    m_has_presOf = false;
    
    if (m_presOf)
    {
        delete m_presOf;
        m_presOf = NULL;
    }
    ;
    
    m_has_constrLst = false;
    
    if (m_constrLst)
    {
        delete m_constrLst;
        m_constrLst = NULL;
    }
    ;
    
    m_has_ruleLst = false;
    
    if (m_ruleLst)
    {
        delete m_ruleLst;
        m_ruleLst = NULL;
    }
    ;
    
    m_has_forEach = false;
    
    if (m_forEach)
    {
        delete m_forEach;
        m_forEach = NULL;
    }
    ;
    
    m_has_layoutNode = false;
    
    if (m_layoutNode)
    {
        delete m_layoutNode;
        m_layoutNode = NULL;
    }
    ;
    
    m_has_choose = false;
    
    if (m_choose)
    {
        delete m_choose;
        m_choose = NULL;
    }
    ;
    
    m_has_extLst = false;
    
    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }
    ;
    
    m_has_shape = true;
    if (!m_shape)
    {
        m_shape = new CT_Shape();
    }
    return m_shape;
    }

    const CT_Shape& CT_ForEach::ChildGroup_1::get_shape() const
    {    
    if (m_shape)
    {
        return *m_shape;
    }
    return CT_Shape::default_instance();
    }

    bool CT_ForEach::ChildGroup_1::has_presOf() const
    {    
    return m_has_presOf;
    }

    CT_PresentationOf* CT_ForEach::ChildGroup_1::mutable_presOf()
    {    
    
    m_has_alg = false;
    
    if (m_alg)
    {
        delete m_alg;
        m_alg = NULL;
    }
    ;
    
    m_has_shape = false;
    
    if (m_shape)
    {
        delete m_shape;
        m_shape = NULL;
    }
    ;
    
    m_has_constrLst = false;
    
    if (m_constrLst)
    {
        delete m_constrLst;
        m_constrLst = NULL;
    }
    ;
    
    m_has_ruleLst = false;
    
    if (m_ruleLst)
    {
        delete m_ruleLst;
        m_ruleLst = NULL;
    }
    ;
    
    m_has_forEach = false;
    
    if (m_forEach)
    {
        delete m_forEach;
        m_forEach = NULL;
    }
    ;
    
    m_has_layoutNode = false;
    
    if (m_layoutNode)
    {
        delete m_layoutNode;
        m_layoutNode = NULL;
    }
    ;
    
    m_has_choose = false;
    
    if (m_choose)
    {
        delete m_choose;
        m_choose = NULL;
    }
    ;
    
    m_has_extLst = false;
    
    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }
    ;
    
    m_has_presOf = true;
    if (!m_presOf)
    {
        m_presOf = new CT_PresentationOf();
    }
    return m_presOf;
    }

    const CT_PresentationOf& CT_ForEach::ChildGroup_1::get_presOf() const
    {    
    if (m_presOf)
    {
        return *m_presOf;
    }
    return CT_PresentationOf::default_instance();
    }

    bool CT_ForEach::ChildGroup_1::has_constrLst() const
    {    
    return m_has_constrLst;
    }

    CT_Constraints* CT_ForEach::ChildGroup_1::mutable_constrLst()
    {    
    
    m_has_alg = false;
    
    if (m_alg)
    {
        delete m_alg;
        m_alg = NULL;
    }
    ;
    
    m_has_shape = false;
    
    if (m_shape)
    {
        delete m_shape;
        m_shape = NULL;
    }
    ;
    
    m_has_presOf = false;
    
    if (m_presOf)
    {
        delete m_presOf;
        m_presOf = NULL;
    }
    ;
    
    m_has_ruleLst = false;
    
    if (m_ruleLst)
    {
        delete m_ruleLst;
        m_ruleLst = NULL;
    }
    ;
    
    m_has_forEach = false;
    
    if (m_forEach)
    {
        delete m_forEach;
        m_forEach = NULL;
    }
    ;
    
    m_has_layoutNode = false;
    
    if (m_layoutNode)
    {
        delete m_layoutNode;
        m_layoutNode = NULL;
    }
    ;
    
    m_has_choose = false;
    
    if (m_choose)
    {
        delete m_choose;
        m_choose = NULL;
    }
    ;
    
    m_has_extLst = false;
    
    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }
    ;
    
    m_has_constrLst = true;
    if (!m_constrLst)
    {
        m_constrLst = new CT_Constraints();
    }
    return m_constrLst;
    }

    const CT_Constraints& CT_ForEach::ChildGroup_1::get_constrLst() const
    {    
    if (m_constrLst)
    {
        return *m_constrLst;
    }
    return CT_Constraints::default_instance();
    }

    bool CT_ForEach::ChildGroup_1::has_ruleLst() const
    {    
    return m_has_ruleLst;
    }

    CT_Rules* CT_ForEach::ChildGroup_1::mutable_ruleLst()
    {    
    
    m_has_alg = false;
    
    if (m_alg)
    {
        delete m_alg;
        m_alg = NULL;
    }
    ;
    
    m_has_shape = false;
    
    if (m_shape)
    {
        delete m_shape;
        m_shape = NULL;
    }
    ;
    
    m_has_presOf = false;
    
    if (m_presOf)
    {
        delete m_presOf;
        m_presOf = NULL;
    }
    ;
    
    m_has_constrLst = false;
    
    if (m_constrLst)
    {
        delete m_constrLst;
        m_constrLst = NULL;
    }
    ;
    
    m_has_forEach = false;
    
    if (m_forEach)
    {
        delete m_forEach;
        m_forEach = NULL;
    }
    ;
    
    m_has_layoutNode = false;
    
    if (m_layoutNode)
    {
        delete m_layoutNode;
        m_layoutNode = NULL;
    }
    ;
    
    m_has_choose = false;
    
    if (m_choose)
    {
        delete m_choose;
        m_choose = NULL;
    }
    ;
    
    m_has_extLst = false;
    
    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }
    ;
    
    m_has_ruleLst = true;
    if (!m_ruleLst)
    {
        m_ruleLst = new CT_Rules();
    }
    return m_ruleLst;
    }

    const CT_Rules& CT_ForEach::ChildGroup_1::get_ruleLst() const
    {    
    if (m_ruleLst)
    {
        return *m_ruleLst;
    }
    return CT_Rules::default_instance();
    }

    bool CT_ForEach::ChildGroup_1::has_forEach() const
    {    
    return m_has_forEach;
    }

    CT_ForEach* CT_ForEach::ChildGroup_1::mutable_forEach()
    {    
    
    m_has_alg = false;
    
    if (m_alg)
    {
        delete m_alg;
        m_alg = NULL;
    }
    ;
    
    m_has_shape = false;
    
    if (m_shape)
    {
        delete m_shape;
        m_shape = NULL;
    }
    ;
    
    m_has_presOf = false;
    
    if (m_presOf)
    {
        delete m_presOf;
        m_presOf = NULL;
    }
    ;
    
    m_has_constrLst = false;
    
    if (m_constrLst)
    {
        delete m_constrLst;
        m_constrLst = NULL;
    }
    ;
    
    m_has_ruleLst = false;
    
    if (m_ruleLst)
    {
        delete m_ruleLst;
        m_ruleLst = NULL;
    }
    ;
    
    m_has_layoutNode = false;
    
    if (m_layoutNode)
    {
        delete m_layoutNode;
        m_layoutNode = NULL;
    }
    ;
    
    m_has_choose = false;
    
    if (m_choose)
    {
        delete m_choose;
        m_choose = NULL;
    }
    ;
    
    m_has_extLst = false;
    
    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }
    ;
    
    m_has_forEach = true;
    if (!m_forEach)
    {
        m_forEach = new CT_ForEach();
    }
    return m_forEach;
    }

    const CT_ForEach& CT_ForEach::ChildGroup_1::get_forEach() const
    {    
    if (m_forEach)
    {
        return *m_forEach;
    }
    return CT_ForEach::default_instance();
    }

    bool CT_ForEach::ChildGroup_1::has_layoutNode() const
    {    
    return m_has_layoutNode;
    }

    CT_LayoutNode* CT_ForEach::ChildGroup_1::mutable_layoutNode()
    {    
    
    m_has_alg = false;
    
    if (m_alg)
    {
        delete m_alg;
        m_alg = NULL;
    }
    ;
    
    m_has_shape = false;
    
    if (m_shape)
    {
        delete m_shape;
        m_shape = NULL;
    }
    ;
    
    m_has_presOf = false;
    
    if (m_presOf)
    {
        delete m_presOf;
        m_presOf = NULL;
    }
    ;
    
    m_has_constrLst = false;
    
    if (m_constrLst)
    {
        delete m_constrLst;
        m_constrLst = NULL;
    }
    ;
    
    m_has_ruleLst = false;
    
    if (m_ruleLst)
    {
        delete m_ruleLst;
        m_ruleLst = NULL;
    }
    ;
    
    m_has_forEach = false;
    
    if (m_forEach)
    {
        delete m_forEach;
        m_forEach = NULL;
    }
    ;
    
    m_has_choose = false;
    
    if (m_choose)
    {
        delete m_choose;
        m_choose = NULL;
    }
    ;
    
    m_has_extLst = false;
    
    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }
    ;
    
    m_has_layoutNode = true;
    if (!m_layoutNode)
    {
        m_layoutNode = new CT_LayoutNode();
    }
    return m_layoutNode;
    }

    const CT_LayoutNode& CT_ForEach::ChildGroup_1::get_layoutNode() const
    {    
    if (m_layoutNode)
    {
        return *m_layoutNode;
    }
    return CT_LayoutNode::default_instance();
    }

    bool CT_ForEach::ChildGroup_1::has_choose() const
    {    
    return m_has_choose;
    }

    CT_Choose* CT_ForEach::ChildGroup_1::mutable_choose()
    {    
    
    m_has_alg = false;
    
    if (m_alg)
    {
        delete m_alg;
        m_alg = NULL;
    }
    ;
    
    m_has_shape = false;
    
    if (m_shape)
    {
        delete m_shape;
        m_shape = NULL;
    }
    ;
    
    m_has_presOf = false;
    
    if (m_presOf)
    {
        delete m_presOf;
        m_presOf = NULL;
    }
    ;
    
    m_has_constrLst = false;
    
    if (m_constrLst)
    {
        delete m_constrLst;
        m_constrLst = NULL;
    }
    ;
    
    m_has_ruleLst = false;
    
    if (m_ruleLst)
    {
        delete m_ruleLst;
        m_ruleLst = NULL;
    }
    ;
    
    m_has_forEach = false;
    
    if (m_forEach)
    {
        delete m_forEach;
        m_forEach = NULL;
    }
    ;
    
    m_has_layoutNode = false;
    
    if (m_layoutNode)
    {
        delete m_layoutNode;
        m_layoutNode = NULL;
    }
    ;
    
    m_has_extLst = false;
    
    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }
    ;
    
    m_has_choose = true;
    if (!m_choose)
    {
        m_choose = new CT_Choose();
    }
    return m_choose;
    }

    const CT_Choose& CT_ForEach::ChildGroup_1::get_choose() const
    {    
    if (m_choose)
    {
        return *m_choose;
    }
    return CT_Choose::default_instance();
    }

    bool CT_ForEach::ChildGroup_1::has_extLst() const
    {    
    return m_has_extLst;
    }

    ns_a::CT_OfficeArtExtensionList* CT_ForEach::ChildGroup_1::mutable_extLst()
    {    
    
    m_has_alg = false;
    
    if (m_alg)
    {
        delete m_alg;
        m_alg = NULL;
    }
    ;
    
    m_has_shape = false;
    
    if (m_shape)
    {
        delete m_shape;
        m_shape = NULL;
    }
    ;
    
    m_has_presOf = false;
    
    if (m_presOf)
    {
        delete m_presOf;
        m_presOf = NULL;
    }
    ;
    
    m_has_constrLst = false;
    
    if (m_constrLst)
    {
        delete m_constrLst;
        m_constrLst = NULL;
    }
    ;
    
    m_has_ruleLst = false;
    
    if (m_ruleLst)
    {
        delete m_ruleLst;
        m_ruleLst = NULL;
    }
    ;
    
    m_has_forEach = false;
    
    if (m_forEach)
    {
        delete m_forEach;
        m_forEach = NULL;
    }
    ;
    
    m_has_layoutNode = false;
    
    if (m_layoutNode)
    {
        delete m_layoutNode;
        m_layoutNode = NULL;
    }
    ;
    
    m_has_choose = false;
    
    if (m_choose)
    {
        delete m_choose;
        m_choose = NULL;
    }
    ;
    
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new ns_a::CT_OfficeArtExtensionList();
    }
    return m_extLst;
    }

    const ns_a::CT_OfficeArtExtensionList& CT_ForEach::ChildGroup_1::get_extLst() const
    {    
    if (m_extLst)
    {
        return *m_extLst;
    }
    return ns_a::CT_OfficeArtExtensionList::default_instance();
    }

CT_ForEach* CT_ForEach::default_instance_ = NULL;

    // CT_When
    CT_When::CT_When()
    :m_has_name_attr(false),
    m_name_attr(""),
    m_has_axis_attr(false),
    m_axis_attr(NULL),
    m_has_ptType_attr(false),
    m_ptType_attr(NULL),
    m_has_hideLastTrans_attr(false),
    m_hideLastTrans_attr(NULL),
    m_has_st_attr(false),
    m_st_attr(NULL),
    m_has_cnt_attr(false),
    m_cnt_attr(NULL),
    m_has_step_attr(false),
    m_step_attr(NULL),
    m_has_func_attr(false),
    m_func_attr(NULL),
    m_has_arg_attr(false),
    m_arg_attr(NULL),
    m_has_op_attr(false),
    m_op_attr(NULL),
    m_has_val_attr(false),
    m_val_attr(NULL)
    {
    }
    CT_When::~CT_When()
{
    clear();    }
    CT_Algorithm* CT_When::add_alg()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Algorithm* pNewChild = pChildGroup->mutable_alg();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Shape* CT_When::add_shape()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Shape* pNewChild = pChildGroup->mutable_shape();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_PresentationOf* CT_When::add_presOf()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_PresentationOf* pNewChild = pChildGroup->mutable_presOf();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Constraints* CT_When::add_constrLst()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Constraints* pNewChild = pChildGroup->mutable_constrLst();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Rules* CT_When::add_ruleLst()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Rules* pNewChild = pChildGroup->mutable_ruleLst();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_ForEach* CT_When::add_forEach()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_ForEach* pNewChild = pChildGroup->mutable_forEach();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_LayoutNode* CT_When::add_layoutNode()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_LayoutNode* pNewChild = pChildGroup->mutable_layoutNode();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Choose* CT_When::add_choose()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Choose* pNewChild = pChildGroup->mutable_choose();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_a::CT_OfficeArtExtensionList* CT_When::add_extLst()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_a::CT_OfficeArtExtensionList* pNewChild = pChildGroup->mutable_extLst();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    void CT_When::clear()
    {    
    m_has_name_attr = false;
    m_name_attr.clear();
    
    m_has_axis_attr = false;
    
    if (m_axis_attr)
    {
        delete m_axis_attr;
        m_axis_attr = NULL;
    }
    
    
    m_has_ptType_attr = false;
    
    if (m_ptType_attr)
    {
        delete m_ptType_attr;
        m_ptType_attr = NULL;
    }
    
    
    m_has_hideLastTrans_attr = false;
    
    if (m_hideLastTrans_attr)
    {
        delete m_hideLastTrans_attr;
        m_hideLastTrans_attr = NULL;
    }
    
    
    m_has_st_attr = false;
    
    if (m_st_attr)
    {
        delete m_st_attr;
        m_st_attr = NULL;
    }
    
    
    m_has_cnt_attr = false;
    
    if (m_cnt_attr)
    {
        delete m_cnt_attr;
        m_cnt_attr = NULL;
    }
    
    
    m_has_step_attr = false;
    
    if (m_step_attr)
    {
        delete m_step_attr;
        m_step_attr = NULL;
    }
    
    
    m_has_func_attr = false;
    
    if (m_func_attr)
    {
        delete m_func_attr;
        m_func_attr = NULL;
    }
    
    
    m_has_arg_attr = false;
    
    if (m_arg_attr)
    {
        delete m_arg_attr;
        m_arg_attr = NULL;
    }
    
    
    m_has_op_attr = false;
    
    if (m_op_attr)
    {
        delete m_op_attr;
        m_op_attr = NULL;
    }
    
    
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

    void CT_When::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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
    
    
    if (m_has_axis_attr)
    {
        m_axis_attr->toXmlAttr("axis", _outStream);
    }
    
    
    if (m_has_ptType_attr)
    {
        m_ptType_attr->toXmlAttr("ptType", _outStream);
    }
    
    
    if (m_has_hideLastTrans_attr)
    {
        m_hideLastTrans_attr->toXmlAttr("hideLastTrans", _outStream);
    }
    
    
    if (m_has_st_attr)
    {
        m_st_attr->toXmlAttr("st", _outStream);
    }
    
    
    if (m_has_cnt_attr)
    {
        m_cnt_attr->toXmlAttr("cnt", _outStream);
    }
    
    
    if (m_has_step_attr)
    {
        m_step_attr->toXmlAttr("step", _outStream);
    }
    
    
    if (m_has_func_attr)
    {
        m_func_attr->toXmlAttr("func", _outStream);
    }
    
    
    if (m_has_arg_attr)
    {
        m_arg_attr->toXmlAttr("arg", _outStream);
    }
    
    
    if (m_has_op_attr)
    {
        m_op_attr->toXmlAttr("op", _outStream);
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
            if ((*iter)->has_alg())
            {
                (*iter)->get_alg().toXmlElem("diagram:alg", "", _outStream);
            }
            else if ((*iter)->has_shape())
            {
                (*iter)->get_shape().toXmlElem("diagram:shape", "", _outStream);
            }
            else if ((*iter)->has_presOf())
            {
                (*iter)->get_presOf().toXmlElem("diagram:presOf", "", _outStream);
            }
            else if ((*iter)->has_constrLst())
            {
                (*iter)->get_constrLst().toXmlElem("diagram:constrLst", "", _outStream);
            }
            else if ((*iter)->has_ruleLst())
            {
                (*iter)->get_ruleLst().toXmlElem("diagram:ruleLst", "", _outStream);
            }
            else if ((*iter)->has_forEach())
            {
                (*iter)->get_forEach().toXmlElem("diagram:forEach", "", _outStream);
            }
            else if ((*iter)->has_layoutNode())
            {
                (*iter)->get_layoutNode().toXmlElem("diagram:layoutNode", "", _outStream);
            }
            else if ((*iter)->has_choose())
            {
                (*iter)->get_choose().toXmlElem("diagram:choose", "", _outStream);
            }
            else if ((*iter)->has_extLst())
            {
                (*iter)->get_extLst().toXmlElem("diagram:extLst", "", _outStream);
            }
        }
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_When& CT_When::default_instance()
    {    
    if (!CT_When::default_instance_)
    {
        CT_When::default_instance_ = new CT_When();
    }
    return *CT_When::default_instance_;
    }

    bool CT_When::has_name_attr() const
    {    
    return m_has_name_attr;
    }

    void CT_When::set_name_attr(const XSD::string_& _name_attr)
    {    
    m_has_name_attr = true;
    m_name_attr = _name_attr;
    }

    const XSD::string_& CT_When::get_name_attr() const
    {    
    return m_name_attr;
    }

    bool CT_When::has_axis_attr() const
    {    
    return m_has_axis_attr;
    }

    void CT_When::set_axis_attr(const ST_AxisTypes& _axis_attr)
    {    
    m_has_axis_attr = true;
    m_axis_attr = new ST_AxisTypes(_axis_attr);
    }

    const ST_AxisTypes& CT_When::get_axis_attr() const
    {    
    if (m_axis_attr)
    {
        return *m_axis_attr;
    }
    return ST_AxisTypes::default_instance();
    }

    bool CT_When::has_ptType_attr() const
    {    
    return m_has_ptType_attr;
    }

    void CT_When::set_ptType_attr(const ST_ElementTypes& _ptType_attr)
    {    
    m_has_ptType_attr = true;
    m_ptType_attr = new ST_ElementTypes(_ptType_attr);
    }

    const ST_ElementTypes& CT_When::get_ptType_attr() const
    {    
    if (m_ptType_attr)
    {
        return *m_ptType_attr;
    }
    return ST_ElementTypes::default_instance();
    }

    bool CT_When::has_hideLastTrans_attr() const
    {    
    return m_has_hideLastTrans_attr;
    }

    void CT_When::set_hideLastTrans_attr(const ST_Booleans& _hideLastTrans_attr)
    {    
    m_has_hideLastTrans_attr = true;
    m_hideLastTrans_attr = new ST_Booleans(_hideLastTrans_attr);
    }

    const ST_Booleans& CT_When::get_hideLastTrans_attr() const
    {    
    if (m_hideLastTrans_attr)
    {
        return *m_hideLastTrans_attr;
    }
    return ST_Booleans::default_instance();
    }

    bool CT_When::has_st_attr() const
    {    
    return m_has_st_attr;
    }

    void CT_When::set_st_attr(const ST_Ints& _st_attr)
    {    
    m_has_st_attr = true;
    m_st_attr = new ST_Ints(_st_attr);
    }

    const ST_Ints& CT_When::get_st_attr() const
    {    
    if (m_st_attr)
    {
        return *m_st_attr;
    }
    return ST_Ints::default_instance();
    }

    bool CT_When::has_cnt_attr() const
    {    
    return m_has_cnt_attr;
    }

    void CT_When::set_cnt_attr(const ST_UnsignedInts& _cnt_attr)
    {    
    m_has_cnt_attr = true;
    m_cnt_attr = new ST_UnsignedInts(_cnt_attr);
    }

    const ST_UnsignedInts& CT_When::get_cnt_attr() const
    {    
    if (m_cnt_attr)
    {
        return *m_cnt_attr;
    }
    return ST_UnsignedInts::default_instance();
    }

    bool CT_When::has_step_attr() const
    {    
    return m_has_step_attr;
    }

    void CT_When::set_step_attr(const ST_Ints& _step_attr)
    {    
    m_has_step_attr = true;
    m_step_attr = new ST_Ints(_step_attr);
    }

    const ST_Ints& CT_When::get_step_attr() const
    {    
    if (m_step_attr)
    {
        return *m_step_attr;
    }
    return ST_Ints::default_instance();
    }

    bool CT_When::has_func_attr() const
    {    
    return m_has_func_attr;
    }

    void CT_When::set_func_attr(const ST_FunctionType& _func_attr)
    {    
    m_has_func_attr = true;
    m_func_attr = new ST_FunctionType(_func_attr);
    }

    const ST_FunctionType& CT_When::get_func_attr() const
    {    
    if (m_func_attr)
    {
        return *m_func_attr;
    }
    return ST_FunctionType::default_instance();
    }

    bool CT_When::has_arg_attr() const
    {    
    return m_has_arg_attr;
    }

    void CT_When::set_arg_attr(const ST_FunctionArgument& _arg_attr)
    {    
    m_has_arg_attr = true;
    m_arg_attr = new ST_FunctionArgument(_arg_attr);
    }

    const ST_FunctionArgument& CT_When::get_arg_attr() const
    {    
    if (m_arg_attr)
    {
        return *m_arg_attr;
    }
    return ST_FunctionArgument::default_instance();
    }

    bool CT_When::has_op_attr() const
    {    
    return m_has_op_attr;
    }

    void CT_When::set_op_attr(const ST_FunctionOperator& _op_attr)
    {    
    m_has_op_attr = true;
    m_op_attr = new ST_FunctionOperator(_op_attr);
    }

    const ST_FunctionOperator& CT_When::get_op_attr() const
    {    
    if (m_op_attr)
    {
        return *m_op_attr;
    }
    return ST_FunctionOperator::default_instance();
    }

    bool CT_When::has_val_attr() const
    {    
    return m_has_val_attr;
    }

    void CT_When::set_val_attr(const ST_FunctionValue& _val_attr)
    {    
    m_has_val_attr = true;
    m_val_attr = new ST_FunctionValue(_val_attr);
    }

    const ST_FunctionValue& CT_When::get_val_attr() const
    {    
    if (m_val_attr)
    {
        return *m_val_attr;
    }
    return ST_FunctionValue::default_instance();
    }


    // CT_When::ChildGroup_1
    CT_When::ChildGroup_1::ChildGroup_1()
    :m_has_alg(false),
    m_alg(NULL),
    m_has_shape(false),
    m_shape(NULL),
    m_has_presOf(false),
    m_presOf(NULL),
    m_has_constrLst(false),
    m_constrLst(NULL),
    m_has_ruleLst(false),
    m_ruleLst(NULL),
    m_has_forEach(false),
    m_forEach(NULL),
    m_has_layoutNode(false),
    m_layoutNode(NULL),
    m_has_choose(false),
    m_choose(NULL),
    m_has_extLst(false),
    m_extLst(NULL)
    {
    }
    bool CT_When::ChildGroup_1::has_alg() const
    {    
    return m_has_alg;
    }

    CT_Algorithm* CT_When::ChildGroup_1::mutable_alg()
    {    
    
    m_has_shape = false;
    
    if (m_shape)
    {
        delete m_shape;
        m_shape = NULL;
    }
    ;
    
    m_has_presOf = false;
    
    if (m_presOf)
    {
        delete m_presOf;
        m_presOf = NULL;
    }
    ;
    
    m_has_constrLst = false;
    
    if (m_constrLst)
    {
        delete m_constrLst;
        m_constrLst = NULL;
    }
    ;
    
    m_has_ruleLst = false;
    
    if (m_ruleLst)
    {
        delete m_ruleLst;
        m_ruleLst = NULL;
    }
    ;
    
    m_has_forEach = false;
    
    if (m_forEach)
    {
        delete m_forEach;
        m_forEach = NULL;
    }
    ;
    
    m_has_layoutNode = false;
    
    if (m_layoutNode)
    {
        delete m_layoutNode;
        m_layoutNode = NULL;
    }
    ;
    
    m_has_choose = false;
    
    if (m_choose)
    {
        delete m_choose;
        m_choose = NULL;
    }
    ;
    
    m_has_extLst = false;
    
    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }
    ;
    
    m_has_alg = true;
    if (!m_alg)
    {
        m_alg = new CT_Algorithm();
    }
    return m_alg;
    }

    const CT_Algorithm& CT_When::ChildGroup_1::get_alg() const
    {    
    if (m_alg)
    {
        return *m_alg;
    }
    return CT_Algorithm::default_instance();
    }

    bool CT_When::ChildGroup_1::has_shape() const
    {    
    return m_has_shape;
    }

    CT_Shape* CT_When::ChildGroup_1::mutable_shape()
    {    
    
    m_has_alg = false;
    
    if (m_alg)
    {
        delete m_alg;
        m_alg = NULL;
    }
    ;
    
    m_has_presOf = false;
    
    if (m_presOf)
    {
        delete m_presOf;
        m_presOf = NULL;
    }
    ;
    
    m_has_constrLst = false;
    
    if (m_constrLst)
    {
        delete m_constrLst;
        m_constrLst = NULL;
    }
    ;
    
    m_has_ruleLst = false;
    
    if (m_ruleLst)
    {
        delete m_ruleLst;
        m_ruleLst = NULL;
    }
    ;
    
    m_has_forEach = false;
    
    if (m_forEach)
    {
        delete m_forEach;
        m_forEach = NULL;
    }
    ;
    
    m_has_layoutNode = false;
    
    if (m_layoutNode)
    {
        delete m_layoutNode;
        m_layoutNode = NULL;
    }
    ;
    
    m_has_choose = false;
    
    if (m_choose)
    {
        delete m_choose;
        m_choose = NULL;
    }
    ;
    
    m_has_extLst = false;
    
    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }
    ;
    
    m_has_shape = true;
    if (!m_shape)
    {
        m_shape = new CT_Shape();
    }
    return m_shape;
    }

    const CT_Shape& CT_When::ChildGroup_1::get_shape() const
    {    
    if (m_shape)
    {
        return *m_shape;
    }
    return CT_Shape::default_instance();
    }

    bool CT_When::ChildGroup_1::has_presOf() const
    {    
    return m_has_presOf;
    }

    CT_PresentationOf* CT_When::ChildGroup_1::mutable_presOf()
    {    
    
    m_has_alg = false;
    
    if (m_alg)
    {
        delete m_alg;
        m_alg = NULL;
    }
    ;
    
    m_has_shape = false;
    
    if (m_shape)
    {
        delete m_shape;
        m_shape = NULL;
    }
    ;
    
    m_has_constrLst = false;
    
    if (m_constrLst)
    {
        delete m_constrLst;
        m_constrLst = NULL;
    }
    ;
    
    m_has_ruleLst = false;
    
    if (m_ruleLst)
    {
        delete m_ruleLst;
        m_ruleLst = NULL;
    }
    ;
    
    m_has_forEach = false;
    
    if (m_forEach)
    {
        delete m_forEach;
        m_forEach = NULL;
    }
    ;
    
    m_has_layoutNode = false;
    
    if (m_layoutNode)
    {
        delete m_layoutNode;
        m_layoutNode = NULL;
    }
    ;
    
    m_has_choose = false;
    
    if (m_choose)
    {
        delete m_choose;
        m_choose = NULL;
    }
    ;
    
    m_has_extLst = false;
    
    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }
    ;
    
    m_has_presOf = true;
    if (!m_presOf)
    {
        m_presOf = new CT_PresentationOf();
    }
    return m_presOf;
    }

    const CT_PresentationOf& CT_When::ChildGroup_1::get_presOf() const
    {    
    if (m_presOf)
    {
        return *m_presOf;
    }
    return CT_PresentationOf::default_instance();
    }

    bool CT_When::ChildGroup_1::has_constrLst() const
    {    
    return m_has_constrLst;
    }

    CT_Constraints* CT_When::ChildGroup_1::mutable_constrLst()
    {    
    
    m_has_alg = false;
    
    if (m_alg)
    {
        delete m_alg;
        m_alg = NULL;
    }
    ;
    
    m_has_shape = false;
    
    if (m_shape)
    {
        delete m_shape;
        m_shape = NULL;
    }
    ;
    
    m_has_presOf = false;
    
    if (m_presOf)
    {
        delete m_presOf;
        m_presOf = NULL;
    }
    ;
    
    m_has_ruleLst = false;
    
    if (m_ruleLst)
    {
        delete m_ruleLst;
        m_ruleLst = NULL;
    }
    ;
    
    m_has_forEach = false;
    
    if (m_forEach)
    {
        delete m_forEach;
        m_forEach = NULL;
    }
    ;
    
    m_has_layoutNode = false;
    
    if (m_layoutNode)
    {
        delete m_layoutNode;
        m_layoutNode = NULL;
    }
    ;
    
    m_has_choose = false;
    
    if (m_choose)
    {
        delete m_choose;
        m_choose = NULL;
    }
    ;
    
    m_has_extLst = false;
    
    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }
    ;
    
    m_has_constrLst = true;
    if (!m_constrLst)
    {
        m_constrLst = new CT_Constraints();
    }
    return m_constrLst;
    }

    const CT_Constraints& CT_When::ChildGroup_1::get_constrLst() const
    {    
    if (m_constrLst)
    {
        return *m_constrLst;
    }
    return CT_Constraints::default_instance();
    }

    bool CT_When::ChildGroup_1::has_ruleLst() const
    {    
    return m_has_ruleLst;
    }

    CT_Rules* CT_When::ChildGroup_1::mutable_ruleLst()
    {    
    
    m_has_alg = false;
    
    if (m_alg)
    {
        delete m_alg;
        m_alg = NULL;
    }
    ;
    
    m_has_shape = false;
    
    if (m_shape)
    {
        delete m_shape;
        m_shape = NULL;
    }
    ;
    
    m_has_presOf = false;
    
    if (m_presOf)
    {
        delete m_presOf;
        m_presOf = NULL;
    }
    ;
    
    m_has_constrLst = false;
    
    if (m_constrLst)
    {
        delete m_constrLst;
        m_constrLst = NULL;
    }
    ;
    
    m_has_forEach = false;
    
    if (m_forEach)
    {
        delete m_forEach;
        m_forEach = NULL;
    }
    ;
    
    m_has_layoutNode = false;
    
    if (m_layoutNode)
    {
        delete m_layoutNode;
        m_layoutNode = NULL;
    }
    ;
    
    m_has_choose = false;
    
    if (m_choose)
    {
        delete m_choose;
        m_choose = NULL;
    }
    ;
    
    m_has_extLst = false;
    
    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }
    ;
    
    m_has_ruleLst = true;
    if (!m_ruleLst)
    {
        m_ruleLst = new CT_Rules();
    }
    return m_ruleLst;
    }

    const CT_Rules& CT_When::ChildGroup_1::get_ruleLst() const
    {    
    if (m_ruleLst)
    {
        return *m_ruleLst;
    }
    return CT_Rules::default_instance();
    }

    bool CT_When::ChildGroup_1::has_forEach() const
    {    
    return m_has_forEach;
    }

    CT_ForEach* CT_When::ChildGroup_1::mutable_forEach()
    {    
    
    m_has_alg = false;
    
    if (m_alg)
    {
        delete m_alg;
        m_alg = NULL;
    }
    ;
    
    m_has_shape = false;
    
    if (m_shape)
    {
        delete m_shape;
        m_shape = NULL;
    }
    ;
    
    m_has_presOf = false;
    
    if (m_presOf)
    {
        delete m_presOf;
        m_presOf = NULL;
    }
    ;
    
    m_has_constrLst = false;
    
    if (m_constrLst)
    {
        delete m_constrLst;
        m_constrLst = NULL;
    }
    ;
    
    m_has_ruleLst = false;
    
    if (m_ruleLst)
    {
        delete m_ruleLst;
        m_ruleLst = NULL;
    }
    ;
    
    m_has_layoutNode = false;
    
    if (m_layoutNode)
    {
        delete m_layoutNode;
        m_layoutNode = NULL;
    }
    ;
    
    m_has_choose = false;
    
    if (m_choose)
    {
        delete m_choose;
        m_choose = NULL;
    }
    ;
    
    m_has_extLst = false;
    
    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }
    ;
    
    m_has_forEach = true;
    if (!m_forEach)
    {
        m_forEach = new CT_ForEach();
    }
    return m_forEach;
    }

    const CT_ForEach& CT_When::ChildGroup_1::get_forEach() const
    {    
    if (m_forEach)
    {
        return *m_forEach;
    }
    return CT_ForEach::default_instance();
    }

    bool CT_When::ChildGroup_1::has_layoutNode() const
    {    
    return m_has_layoutNode;
    }

    CT_LayoutNode* CT_When::ChildGroup_1::mutable_layoutNode()
    {    
    
    m_has_alg = false;
    
    if (m_alg)
    {
        delete m_alg;
        m_alg = NULL;
    }
    ;
    
    m_has_shape = false;
    
    if (m_shape)
    {
        delete m_shape;
        m_shape = NULL;
    }
    ;
    
    m_has_presOf = false;
    
    if (m_presOf)
    {
        delete m_presOf;
        m_presOf = NULL;
    }
    ;
    
    m_has_constrLst = false;
    
    if (m_constrLst)
    {
        delete m_constrLst;
        m_constrLst = NULL;
    }
    ;
    
    m_has_ruleLst = false;
    
    if (m_ruleLst)
    {
        delete m_ruleLst;
        m_ruleLst = NULL;
    }
    ;
    
    m_has_forEach = false;
    
    if (m_forEach)
    {
        delete m_forEach;
        m_forEach = NULL;
    }
    ;
    
    m_has_choose = false;
    
    if (m_choose)
    {
        delete m_choose;
        m_choose = NULL;
    }
    ;
    
    m_has_extLst = false;
    
    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }
    ;
    
    m_has_layoutNode = true;
    if (!m_layoutNode)
    {
        m_layoutNode = new CT_LayoutNode();
    }
    return m_layoutNode;
    }

    const CT_LayoutNode& CT_When::ChildGroup_1::get_layoutNode() const
    {    
    if (m_layoutNode)
    {
        return *m_layoutNode;
    }
    return CT_LayoutNode::default_instance();
    }

    bool CT_When::ChildGroup_1::has_choose() const
    {    
    return m_has_choose;
    }

    CT_Choose* CT_When::ChildGroup_1::mutable_choose()
    {    
    
    m_has_alg = false;
    
    if (m_alg)
    {
        delete m_alg;
        m_alg = NULL;
    }
    ;
    
    m_has_shape = false;
    
    if (m_shape)
    {
        delete m_shape;
        m_shape = NULL;
    }
    ;
    
    m_has_presOf = false;
    
    if (m_presOf)
    {
        delete m_presOf;
        m_presOf = NULL;
    }
    ;
    
    m_has_constrLst = false;
    
    if (m_constrLst)
    {
        delete m_constrLst;
        m_constrLst = NULL;
    }
    ;
    
    m_has_ruleLst = false;
    
    if (m_ruleLst)
    {
        delete m_ruleLst;
        m_ruleLst = NULL;
    }
    ;
    
    m_has_forEach = false;
    
    if (m_forEach)
    {
        delete m_forEach;
        m_forEach = NULL;
    }
    ;
    
    m_has_layoutNode = false;
    
    if (m_layoutNode)
    {
        delete m_layoutNode;
        m_layoutNode = NULL;
    }
    ;
    
    m_has_extLst = false;
    
    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }
    ;
    
    m_has_choose = true;
    if (!m_choose)
    {
        m_choose = new CT_Choose();
    }
    return m_choose;
    }

    const CT_Choose& CT_When::ChildGroup_1::get_choose() const
    {    
    if (m_choose)
    {
        return *m_choose;
    }
    return CT_Choose::default_instance();
    }

    bool CT_When::ChildGroup_1::has_extLst() const
    {    
    return m_has_extLst;
    }

    ns_a::CT_OfficeArtExtensionList* CT_When::ChildGroup_1::mutable_extLst()
    {    
    
    m_has_alg = false;
    
    if (m_alg)
    {
        delete m_alg;
        m_alg = NULL;
    }
    ;
    
    m_has_shape = false;
    
    if (m_shape)
    {
        delete m_shape;
        m_shape = NULL;
    }
    ;
    
    m_has_presOf = false;
    
    if (m_presOf)
    {
        delete m_presOf;
        m_presOf = NULL;
    }
    ;
    
    m_has_constrLst = false;
    
    if (m_constrLst)
    {
        delete m_constrLst;
        m_constrLst = NULL;
    }
    ;
    
    m_has_ruleLst = false;
    
    if (m_ruleLst)
    {
        delete m_ruleLst;
        m_ruleLst = NULL;
    }
    ;
    
    m_has_forEach = false;
    
    if (m_forEach)
    {
        delete m_forEach;
        m_forEach = NULL;
    }
    ;
    
    m_has_layoutNode = false;
    
    if (m_layoutNode)
    {
        delete m_layoutNode;
        m_layoutNode = NULL;
    }
    ;
    
    m_has_choose = false;
    
    if (m_choose)
    {
        delete m_choose;
        m_choose = NULL;
    }
    ;
    
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new ns_a::CT_OfficeArtExtensionList();
    }
    return m_extLst;
    }

    const ns_a::CT_OfficeArtExtensionList& CT_When::ChildGroup_1::get_extLst() const
    {    
    if (m_extLst)
    {
        return *m_extLst;
    }
    return ns_a::CT_OfficeArtExtensionList::default_instance();
    }

CT_When* CT_When::default_instance_ = NULL;

    // CT_Otherwise
    CT_Otherwise::CT_Otherwise()
    :m_has_name_attr(false),
    m_name_attr("")
    {
    }
    CT_Otherwise::~CT_Otherwise()
{
    clear();    }
    CT_Algorithm* CT_Otherwise::add_alg()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Algorithm* pNewChild = pChildGroup->mutable_alg();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Shape* CT_Otherwise::add_shape()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Shape* pNewChild = pChildGroup->mutable_shape();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_PresentationOf* CT_Otherwise::add_presOf()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_PresentationOf* pNewChild = pChildGroup->mutable_presOf();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Constraints* CT_Otherwise::add_constrLst()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Constraints* pNewChild = pChildGroup->mutable_constrLst();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Rules* CT_Otherwise::add_ruleLst()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Rules* pNewChild = pChildGroup->mutable_ruleLst();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_ForEach* CT_Otherwise::add_forEach()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_ForEach* pNewChild = pChildGroup->mutable_forEach();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_LayoutNode* CT_Otherwise::add_layoutNode()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_LayoutNode* pNewChild = pChildGroup->mutable_layoutNode();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Choose* CT_Otherwise::add_choose()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Choose* pNewChild = pChildGroup->mutable_choose();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_a::CT_OfficeArtExtensionList* CT_Otherwise::add_extLst()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_a::CT_OfficeArtExtensionList* pNewChild = pChildGroup->mutable_extLst();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    void CT_Otherwise::clear()
    {    
    m_has_name_attr = false;
    m_name_attr.clear();
    
    {
        vector<ChildGroup_1*>::iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_1.clear();
    }
    }

    void CT_Otherwise::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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
            
    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_alg())
            {
                (*iter)->get_alg().toXmlElem("diagram:alg", "", _outStream);
            }
            else if ((*iter)->has_shape())
            {
                (*iter)->get_shape().toXmlElem("diagram:shape", "", _outStream);
            }
            else if ((*iter)->has_presOf())
            {
                (*iter)->get_presOf().toXmlElem("diagram:presOf", "", _outStream);
            }
            else if ((*iter)->has_constrLst())
            {
                (*iter)->get_constrLst().toXmlElem("diagram:constrLst", "", _outStream);
            }
            else if ((*iter)->has_ruleLst())
            {
                (*iter)->get_ruleLst().toXmlElem("diagram:ruleLst", "", _outStream);
            }
            else if ((*iter)->has_forEach())
            {
                (*iter)->get_forEach().toXmlElem("diagram:forEach", "", _outStream);
            }
            else if ((*iter)->has_layoutNode())
            {
                (*iter)->get_layoutNode().toXmlElem("diagram:layoutNode", "", _outStream);
            }
            else if ((*iter)->has_choose())
            {
                (*iter)->get_choose().toXmlElem("diagram:choose", "", _outStream);
            }
            else if ((*iter)->has_extLst())
            {
                (*iter)->get_extLst().toXmlElem("diagram:extLst", "", _outStream);
            }
        }
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_Otherwise& CT_Otherwise::default_instance()
    {    
    if (!CT_Otherwise::default_instance_)
    {
        CT_Otherwise::default_instance_ = new CT_Otherwise();
    }
    return *CT_Otherwise::default_instance_;
    }

    bool CT_Otherwise::has_name_attr() const
    {    
    return m_has_name_attr;
    }

    void CT_Otherwise::set_name_attr(const XSD::string_& _name_attr)
    {    
    m_has_name_attr = true;
    m_name_attr = _name_attr;
    }

    const XSD::string_& CT_Otherwise::get_name_attr() const
    {    
    return m_name_attr;
    }


    // CT_Otherwise::ChildGroup_1
    CT_Otherwise::ChildGroup_1::ChildGroup_1()
    :m_has_alg(false),
    m_alg(NULL),
    m_has_shape(false),
    m_shape(NULL),
    m_has_presOf(false),
    m_presOf(NULL),
    m_has_constrLst(false),
    m_constrLst(NULL),
    m_has_ruleLst(false),
    m_ruleLst(NULL),
    m_has_forEach(false),
    m_forEach(NULL),
    m_has_layoutNode(false),
    m_layoutNode(NULL),
    m_has_choose(false),
    m_choose(NULL),
    m_has_extLst(false),
    m_extLst(NULL)
    {
    }
    bool CT_Otherwise::ChildGroup_1::has_alg() const
    {    
    return m_has_alg;
    }

    CT_Algorithm* CT_Otherwise::ChildGroup_1::mutable_alg()
    {    
    
    m_has_shape = false;
    
    if (m_shape)
    {
        delete m_shape;
        m_shape = NULL;
    }
    ;
    
    m_has_presOf = false;
    
    if (m_presOf)
    {
        delete m_presOf;
        m_presOf = NULL;
    }
    ;
    
    m_has_constrLst = false;
    
    if (m_constrLst)
    {
        delete m_constrLst;
        m_constrLst = NULL;
    }
    ;
    
    m_has_ruleLst = false;
    
    if (m_ruleLst)
    {
        delete m_ruleLst;
        m_ruleLst = NULL;
    }
    ;
    
    m_has_forEach = false;
    
    if (m_forEach)
    {
        delete m_forEach;
        m_forEach = NULL;
    }
    ;
    
    m_has_layoutNode = false;
    
    if (m_layoutNode)
    {
        delete m_layoutNode;
        m_layoutNode = NULL;
    }
    ;
    
    m_has_choose = false;
    
    if (m_choose)
    {
        delete m_choose;
        m_choose = NULL;
    }
    ;
    
    m_has_extLst = false;
    
    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }
    ;
    
    m_has_alg = true;
    if (!m_alg)
    {
        m_alg = new CT_Algorithm();
    }
    return m_alg;
    }

    const CT_Algorithm& CT_Otherwise::ChildGroup_1::get_alg() const
    {    
    if (m_alg)
    {
        return *m_alg;
    }
    return CT_Algorithm::default_instance();
    }

    bool CT_Otherwise::ChildGroup_1::has_shape() const
    {    
    return m_has_shape;
    }

    CT_Shape* CT_Otherwise::ChildGroup_1::mutable_shape()
    {    
    
    m_has_alg = false;
    
    if (m_alg)
    {
        delete m_alg;
        m_alg = NULL;
    }
    ;
    
    m_has_presOf = false;
    
    if (m_presOf)
    {
        delete m_presOf;
        m_presOf = NULL;
    }
    ;
    
    m_has_constrLst = false;
    
    if (m_constrLst)
    {
        delete m_constrLst;
        m_constrLst = NULL;
    }
    ;
    
    m_has_ruleLst = false;
    
    if (m_ruleLst)
    {
        delete m_ruleLst;
        m_ruleLst = NULL;
    }
    ;
    
    m_has_forEach = false;
    
    if (m_forEach)
    {
        delete m_forEach;
        m_forEach = NULL;
    }
    ;
    
    m_has_layoutNode = false;
    
    if (m_layoutNode)
    {
        delete m_layoutNode;
        m_layoutNode = NULL;
    }
    ;
    
    m_has_choose = false;
    
    if (m_choose)
    {
        delete m_choose;
        m_choose = NULL;
    }
    ;
    
    m_has_extLst = false;
    
    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }
    ;
    
    m_has_shape = true;
    if (!m_shape)
    {
        m_shape = new CT_Shape();
    }
    return m_shape;
    }

    const CT_Shape& CT_Otherwise::ChildGroup_1::get_shape() const
    {    
    if (m_shape)
    {
        return *m_shape;
    }
    return CT_Shape::default_instance();
    }

    bool CT_Otherwise::ChildGroup_1::has_presOf() const
    {    
    return m_has_presOf;
    }

    CT_PresentationOf* CT_Otherwise::ChildGroup_1::mutable_presOf()
    {    
    
    m_has_alg = false;
    
    if (m_alg)
    {
        delete m_alg;
        m_alg = NULL;
    }
    ;
    
    m_has_shape = false;
    
    if (m_shape)
    {
        delete m_shape;
        m_shape = NULL;
    }
    ;
    
    m_has_constrLst = false;
    
    if (m_constrLst)
    {
        delete m_constrLst;
        m_constrLst = NULL;
    }
    ;
    
    m_has_ruleLst = false;
    
    if (m_ruleLst)
    {
        delete m_ruleLst;
        m_ruleLst = NULL;
    }
    ;
    
    m_has_forEach = false;
    
    if (m_forEach)
    {
        delete m_forEach;
        m_forEach = NULL;
    }
    ;
    
    m_has_layoutNode = false;
    
    if (m_layoutNode)
    {
        delete m_layoutNode;
        m_layoutNode = NULL;
    }
    ;
    
    m_has_choose = false;
    
    if (m_choose)
    {
        delete m_choose;
        m_choose = NULL;
    }
    ;
    
    m_has_extLst = false;
    
    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }
    ;
    
    m_has_presOf = true;
    if (!m_presOf)
    {
        m_presOf = new CT_PresentationOf();
    }
    return m_presOf;
    }

    const CT_PresentationOf& CT_Otherwise::ChildGroup_1::get_presOf() const
    {    
    if (m_presOf)
    {
        return *m_presOf;
    }
    return CT_PresentationOf::default_instance();
    }

    bool CT_Otherwise::ChildGroup_1::has_constrLst() const
    {    
    return m_has_constrLst;
    }

    CT_Constraints* CT_Otherwise::ChildGroup_1::mutable_constrLst()
    {    
    
    m_has_alg = false;
    
    if (m_alg)
    {
        delete m_alg;
        m_alg = NULL;
    }
    ;
    
    m_has_shape = false;
    
    if (m_shape)
    {
        delete m_shape;
        m_shape = NULL;
    }
    ;
    
    m_has_presOf = false;
    
    if (m_presOf)
    {
        delete m_presOf;
        m_presOf = NULL;
    }
    ;
    
    m_has_ruleLst = false;
    
    if (m_ruleLst)
    {
        delete m_ruleLst;
        m_ruleLst = NULL;
    }
    ;
    
    m_has_forEach = false;
    
    if (m_forEach)
    {
        delete m_forEach;
        m_forEach = NULL;
    }
    ;
    
    m_has_layoutNode = false;
    
    if (m_layoutNode)
    {
        delete m_layoutNode;
        m_layoutNode = NULL;
    }
    ;
    
    m_has_choose = false;
    
    if (m_choose)
    {
        delete m_choose;
        m_choose = NULL;
    }
    ;
    
    m_has_extLst = false;
    
    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }
    ;
    
    m_has_constrLst = true;
    if (!m_constrLst)
    {
        m_constrLst = new CT_Constraints();
    }
    return m_constrLst;
    }

    const CT_Constraints& CT_Otherwise::ChildGroup_1::get_constrLst() const
    {    
    if (m_constrLst)
    {
        return *m_constrLst;
    }
    return CT_Constraints::default_instance();
    }

    bool CT_Otherwise::ChildGroup_1::has_ruleLst() const
    {    
    return m_has_ruleLst;
    }

    CT_Rules* CT_Otherwise::ChildGroup_1::mutable_ruleLst()
    {    
    
    m_has_alg = false;
    
    if (m_alg)
    {
        delete m_alg;
        m_alg = NULL;
    }
    ;
    
    m_has_shape = false;
    
    if (m_shape)
    {
        delete m_shape;
        m_shape = NULL;
    }
    ;
    
    m_has_presOf = false;
    
    if (m_presOf)
    {
        delete m_presOf;
        m_presOf = NULL;
    }
    ;
    
    m_has_constrLst = false;
    
    if (m_constrLst)
    {
        delete m_constrLst;
        m_constrLst = NULL;
    }
    ;
    
    m_has_forEach = false;
    
    if (m_forEach)
    {
        delete m_forEach;
        m_forEach = NULL;
    }
    ;
    
    m_has_layoutNode = false;
    
    if (m_layoutNode)
    {
        delete m_layoutNode;
        m_layoutNode = NULL;
    }
    ;
    
    m_has_choose = false;
    
    if (m_choose)
    {
        delete m_choose;
        m_choose = NULL;
    }
    ;
    
    m_has_extLst = false;
    
    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }
    ;
    
    m_has_ruleLst = true;
    if (!m_ruleLst)
    {
        m_ruleLst = new CT_Rules();
    }
    return m_ruleLst;
    }

    const CT_Rules& CT_Otherwise::ChildGroup_1::get_ruleLst() const
    {    
    if (m_ruleLst)
    {
        return *m_ruleLst;
    }
    return CT_Rules::default_instance();
    }

    bool CT_Otherwise::ChildGroup_1::has_forEach() const
    {    
    return m_has_forEach;
    }

    CT_ForEach* CT_Otherwise::ChildGroup_1::mutable_forEach()
    {    
    
    m_has_alg = false;
    
    if (m_alg)
    {
        delete m_alg;
        m_alg = NULL;
    }
    ;
    
    m_has_shape = false;
    
    if (m_shape)
    {
        delete m_shape;
        m_shape = NULL;
    }
    ;
    
    m_has_presOf = false;
    
    if (m_presOf)
    {
        delete m_presOf;
        m_presOf = NULL;
    }
    ;
    
    m_has_constrLst = false;
    
    if (m_constrLst)
    {
        delete m_constrLst;
        m_constrLst = NULL;
    }
    ;
    
    m_has_ruleLst = false;
    
    if (m_ruleLst)
    {
        delete m_ruleLst;
        m_ruleLst = NULL;
    }
    ;
    
    m_has_layoutNode = false;
    
    if (m_layoutNode)
    {
        delete m_layoutNode;
        m_layoutNode = NULL;
    }
    ;
    
    m_has_choose = false;
    
    if (m_choose)
    {
        delete m_choose;
        m_choose = NULL;
    }
    ;
    
    m_has_extLst = false;
    
    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }
    ;
    
    m_has_forEach = true;
    if (!m_forEach)
    {
        m_forEach = new CT_ForEach();
    }
    return m_forEach;
    }

    const CT_ForEach& CT_Otherwise::ChildGroup_1::get_forEach() const
    {    
    if (m_forEach)
    {
        return *m_forEach;
    }
    return CT_ForEach::default_instance();
    }

    bool CT_Otherwise::ChildGroup_1::has_layoutNode() const
    {    
    return m_has_layoutNode;
    }

    CT_LayoutNode* CT_Otherwise::ChildGroup_1::mutable_layoutNode()
    {    
    
    m_has_alg = false;
    
    if (m_alg)
    {
        delete m_alg;
        m_alg = NULL;
    }
    ;
    
    m_has_shape = false;
    
    if (m_shape)
    {
        delete m_shape;
        m_shape = NULL;
    }
    ;
    
    m_has_presOf = false;
    
    if (m_presOf)
    {
        delete m_presOf;
        m_presOf = NULL;
    }
    ;
    
    m_has_constrLst = false;
    
    if (m_constrLst)
    {
        delete m_constrLst;
        m_constrLst = NULL;
    }
    ;
    
    m_has_ruleLst = false;
    
    if (m_ruleLst)
    {
        delete m_ruleLst;
        m_ruleLst = NULL;
    }
    ;
    
    m_has_forEach = false;
    
    if (m_forEach)
    {
        delete m_forEach;
        m_forEach = NULL;
    }
    ;
    
    m_has_choose = false;
    
    if (m_choose)
    {
        delete m_choose;
        m_choose = NULL;
    }
    ;
    
    m_has_extLst = false;
    
    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }
    ;
    
    m_has_layoutNode = true;
    if (!m_layoutNode)
    {
        m_layoutNode = new CT_LayoutNode();
    }
    return m_layoutNode;
    }

    const CT_LayoutNode& CT_Otherwise::ChildGroup_1::get_layoutNode() const
    {    
    if (m_layoutNode)
    {
        return *m_layoutNode;
    }
    return CT_LayoutNode::default_instance();
    }

    bool CT_Otherwise::ChildGroup_1::has_choose() const
    {    
    return m_has_choose;
    }

    CT_Choose* CT_Otherwise::ChildGroup_1::mutable_choose()
    {    
    
    m_has_alg = false;
    
    if (m_alg)
    {
        delete m_alg;
        m_alg = NULL;
    }
    ;
    
    m_has_shape = false;
    
    if (m_shape)
    {
        delete m_shape;
        m_shape = NULL;
    }
    ;
    
    m_has_presOf = false;
    
    if (m_presOf)
    {
        delete m_presOf;
        m_presOf = NULL;
    }
    ;
    
    m_has_constrLst = false;
    
    if (m_constrLst)
    {
        delete m_constrLst;
        m_constrLst = NULL;
    }
    ;
    
    m_has_ruleLst = false;
    
    if (m_ruleLst)
    {
        delete m_ruleLst;
        m_ruleLst = NULL;
    }
    ;
    
    m_has_forEach = false;
    
    if (m_forEach)
    {
        delete m_forEach;
        m_forEach = NULL;
    }
    ;
    
    m_has_layoutNode = false;
    
    if (m_layoutNode)
    {
        delete m_layoutNode;
        m_layoutNode = NULL;
    }
    ;
    
    m_has_extLst = false;
    
    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }
    ;
    
    m_has_choose = true;
    if (!m_choose)
    {
        m_choose = new CT_Choose();
    }
    return m_choose;
    }

    const CT_Choose& CT_Otherwise::ChildGroup_1::get_choose() const
    {    
    if (m_choose)
    {
        return *m_choose;
    }
    return CT_Choose::default_instance();
    }

    bool CT_Otherwise::ChildGroup_1::has_extLst() const
    {    
    return m_has_extLst;
    }

    ns_a::CT_OfficeArtExtensionList* CT_Otherwise::ChildGroup_1::mutable_extLst()
    {    
    
    m_has_alg = false;
    
    if (m_alg)
    {
        delete m_alg;
        m_alg = NULL;
    }
    ;
    
    m_has_shape = false;
    
    if (m_shape)
    {
        delete m_shape;
        m_shape = NULL;
    }
    ;
    
    m_has_presOf = false;
    
    if (m_presOf)
    {
        delete m_presOf;
        m_presOf = NULL;
    }
    ;
    
    m_has_constrLst = false;
    
    if (m_constrLst)
    {
        delete m_constrLst;
        m_constrLst = NULL;
    }
    ;
    
    m_has_ruleLst = false;
    
    if (m_ruleLst)
    {
        delete m_ruleLst;
        m_ruleLst = NULL;
    }
    ;
    
    m_has_forEach = false;
    
    if (m_forEach)
    {
        delete m_forEach;
        m_forEach = NULL;
    }
    ;
    
    m_has_layoutNode = false;
    
    if (m_layoutNode)
    {
        delete m_layoutNode;
        m_layoutNode = NULL;
    }
    ;
    
    m_has_choose = false;
    
    if (m_choose)
    {
        delete m_choose;
        m_choose = NULL;
    }
    ;
    
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new ns_a::CT_OfficeArtExtensionList();
    }
    return m_extLst;
    }

    const ns_a::CT_OfficeArtExtensionList& CT_Otherwise::ChildGroup_1::get_extLst() const
    {    
    if (m_extLst)
    {
        return *m_extLst;
    }
    return ns_a::CT_OfficeArtExtensionList::default_instance();
    }

CT_Otherwise* CT_Otherwise::default_instance_ = NULL;

    // CT_Choose
    CT_Choose::CT_Choose()
    :m_has_name_attr(false),
    m_name_attr("")
    {
    }
    CT_Choose::~CT_Choose()
{
    clear();    }
    CT_When* CT_Choose::add_if()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_When* pNewChild = pChildGroup->mutable_if();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Otherwise* CT_Choose::add_else()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Otherwise* pNewChild = pChildGroup->mutable_else();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    void CT_Choose::clear()
    {    
    m_has_name_attr = false;
    m_name_attr.clear();
    
    {
        vector<ChildGroup_1*>::iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_1.clear();
    }
    }

    void CT_Choose::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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
            
    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_if())
            {
                (*iter)->get_if().toXmlElem("diagram:if", "", _outStream);
            }
            else if ((*iter)->has_else())
            {
                (*iter)->get_else().toXmlElem("diagram:else", "", _outStream);
            }
        }
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_Choose& CT_Choose::default_instance()
    {    
    if (!CT_Choose::default_instance_)
    {
        CT_Choose::default_instance_ = new CT_Choose();
    }
    return *CT_Choose::default_instance_;
    }

    bool CT_Choose::has_name_attr() const
    {    
    return m_has_name_attr;
    }

    void CT_Choose::set_name_attr(const XSD::string_& _name_attr)
    {    
    m_has_name_attr = true;
    m_name_attr = _name_attr;
    }

    const XSD::string_& CT_Choose::get_name_attr() const
    {    
    return m_name_attr;
    }


    // CT_Choose::ChildGroup_1
    CT_Choose::ChildGroup_1::ChildGroup_1()
    :m_has_if(false),
    m_if(NULL),
    m_has_else(false),
    m_else(NULL)
    {
    }
    bool CT_Choose::ChildGroup_1::has_if() const
    {    
    return m_has_if;
    }

    CT_When* CT_Choose::ChildGroup_1::mutable_if()
    {    
    
    m_has_else = false;
    
    if (m_else)
    {
        delete m_else;
        m_else = NULL;
    }
    ;
    
    m_has_if = true;
    if (!m_if)
    {
        m_if = new CT_When();
    }
    return m_if;
    }

    const CT_When& CT_Choose::ChildGroup_1::get_if() const
    {    
    if (m_if)
    {
        return *m_if;
    }
    return CT_When::default_instance();
    }

    bool CT_Choose::ChildGroup_1::has_else() const
    {    
    return m_has_else;
    }

    CT_Otherwise* CT_Choose::ChildGroup_1::mutable_else()
    {    
    
    m_has_if = false;
    
    if (m_if)
    {
        delete m_if;
        m_if = NULL;
    }
    ;
    
    m_has_else = true;
    if (!m_else)
    {
        m_else = new CT_Otherwise();
    }
    return m_else;
    }

    const CT_Otherwise& CT_Choose::ChildGroup_1::get_else() const
    {    
    if (m_else)
    {
        return *m_else;
    }
    return CT_Otherwise::default_instance();
    }

CT_Choose* CT_Choose::default_instance_ = NULL;

    // CT_SampleData
    CT_SampleData::CT_SampleData()
    :m_has_dataModel(false),
    m_dataModel(NULL),
    m_has_useDef_attr(false),
    m_useDef_attr(false)
    {
    }
    CT_SampleData::~CT_SampleData()
{
    clear();    }
    bool CT_SampleData::has_dataModel() const
    {    
    return m_has_dataModel;
    }

    CT_DataModel* CT_SampleData::mutable_dataModel()
    {    
    m_has_dataModel = true;
    if (!m_dataModel)
    {
        m_dataModel = new CT_DataModel();
    }
    return m_dataModel;
    }

    const CT_DataModel& CT_SampleData::get_dataModel() const
    {    
    if (m_dataModel)
    {
        return *m_dataModel;
    }
    return CT_DataModel::default_instance();
    }

    void CT_SampleData::clear()
    {    
    m_has_useDef_attr = false;
    m_useDef_attr = false;
    
    m_has_dataModel = false;
    
    if (m_dataModel)
    {
        delete m_dataModel;
        m_dataModel = NULL;
    }
    
    }

    void CT_SampleData::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
    if (m_has_useDef_attr)
    {
        _outStream << " " << "useDef" << "=\"" << XSD::XMLBooleanStr(m_useDef_attr) << "\"";
    }
    
            _outStream << ">";
            
    if (m_has_dataModel)
    {
        m_dataModel->toXmlElem("diagram:dataModel", "", _outStream);;
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_SampleData& CT_SampleData::default_instance()
    {    
    if (!CT_SampleData::default_instance_)
    {
        CT_SampleData::default_instance_ = new CT_SampleData();
    }
    return *CT_SampleData::default_instance_;
    }

    bool CT_SampleData::has_useDef_attr() const
    {    
    return m_has_useDef_attr;
    }

    void CT_SampleData::set_useDef_attr(const XSD::boolean_& _useDef_attr)
    {    
    m_has_useDef_attr = true;
    m_useDef_attr = _useDef_attr;
    }

    const XSD::boolean_& CT_SampleData::get_useDef_attr() const
    {    
    return m_useDef_attr;
    }

CT_SampleData* CT_SampleData::default_instance_ = NULL;

    // CT_Category
    CT_Category::CT_Category()
    :m_has_type_attr(false),
    m_type_attr(""),
    m_has_pri_attr(false),
    m_pri_attr(0)
    {
    }
    CT_Category::~CT_Category()
{
    clear();    }
    void CT_Category::clear()
    {    
    m_has_type_attr = false;
    m_type_attr.clear();
    
    m_has_pri_attr = false;
    m_pri_attr = 0;
    }

    void CT_Category::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
    if (m_has_type_attr)
    {
        _outStream << " " << "type" << "=\"" << m_type_attr << "\"";
    }
    
    
    if (m_has_pri_attr)
    {
        _outStream << " " << "pri" << "=\"" << m_pri_attr << "\"";
    }
    
            _outStream << ">";
            
            _outStream << "</" << _elemName << ">";
                }

    const CT_Category& CT_Category::default_instance()
    {    
    if (!CT_Category::default_instance_)
    {
        CT_Category::default_instance_ = new CT_Category();
    }
    return *CT_Category::default_instance_;
    }

    bool CT_Category::has_type_attr() const
    {    
    return m_has_type_attr;
    }

    void CT_Category::set_type_attr(const XSD::anyURI_& _type_attr)
    {    
    m_has_type_attr = true;
    m_type_attr = _type_attr;
    }

    const XSD::anyURI_& CT_Category::get_type_attr() const
    {    
    return m_type_attr;
    }

    bool CT_Category::has_pri_attr() const
    {    
    return m_has_pri_attr;
    }

    void CT_Category::set_pri_attr(const XSD::unsignedInt_& _pri_attr)
    {    
    m_has_pri_attr = true;
    m_pri_attr = _pri_attr;
    }

    const XSD::unsignedInt_& CT_Category::get_pri_attr() const
    {    
    return m_pri_attr;
    }

CT_Category* CT_Category::default_instance_ = NULL;

    // CT_Categories
    CT_Categories::CT_Categories()

    {
    }
    CT_Categories::~CT_Categories()
{
    clear();    }
    CT_Category* CT_Categories::add_cat()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Category* pNewChild = pChildGroup->mutable_cat();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    void CT_Categories::clear()
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

    void CT_Categories::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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
            if ((*iter)->has_cat())
            {
                (*iter)->get_cat().toXmlElem("diagram:cat", "", _outStream);
            }
        }
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_Categories& CT_Categories::default_instance()
    {    
    if (!CT_Categories::default_instance_)
    {
        CT_Categories::default_instance_ = new CT_Categories();
    }
    return *CT_Categories::default_instance_;
    }


    // CT_Categories::ChildGroup_1
    CT_Categories::ChildGroup_1::ChildGroup_1()
    :m_has_cat(false),
    m_cat(NULL)
    {
    }
    bool CT_Categories::ChildGroup_1::has_cat() const
    {    
    return m_has_cat;
    }

    CT_Category* CT_Categories::ChildGroup_1::mutable_cat()
    {    
    
    m_has_cat = true;
    if (!m_cat)
    {
        m_cat = new CT_Category();
    }
    return m_cat;
    }

    const CT_Category& CT_Categories::ChildGroup_1::get_cat() const
    {    
    if (m_cat)
    {
        return *m_cat;
    }
    return CT_Category::default_instance();
    }

CT_Categories* CT_Categories::default_instance_ = NULL;

    // CT_Name
    CT_Name::CT_Name()
    :m_has_lang_attr(false),
    m_lang_attr(""),
    m_has_val_attr(false),
    m_val_attr("")
    {
    }
    CT_Name::~CT_Name()
{
    clear();    }
    void CT_Name::clear()
    {    
    m_has_lang_attr = false;
    m_lang_attr.clear();
    
    m_has_val_attr = false;
    m_val_attr.clear();
    }

    void CT_Name::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
    if (m_has_lang_attr)
    {
        _outStream << " " << "lang" << "=\"" << m_lang_attr << "\"";
    }
    
    
    if (m_has_val_attr)
    {
        _outStream << " " << "val" << "=\"" << m_val_attr << "\"";
    }
    
            _outStream << ">";
            
            _outStream << "</" << _elemName << ">";
                }

    const CT_Name& CT_Name::default_instance()
    {    
    if (!CT_Name::default_instance_)
    {
        CT_Name::default_instance_ = new CT_Name();
    }
    return *CT_Name::default_instance_;
    }

    bool CT_Name::has_lang_attr() const
    {    
    return m_has_lang_attr;
    }

    void CT_Name::set_lang_attr(const XSD::string_& _lang_attr)
    {    
    m_has_lang_attr = true;
    m_lang_attr = _lang_attr;
    }

    const XSD::string_& CT_Name::get_lang_attr() const
    {    
    return m_lang_attr;
    }

    bool CT_Name::has_val_attr() const
    {    
    return m_has_val_attr;
    }

    void CT_Name::set_val_attr(const XSD::string_& _val_attr)
    {    
    m_has_val_attr = true;
    m_val_attr = _val_attr;
    }

    const XSD::string_& CT_Name::get_val_attr() const
    {    
    return m_val_attr;
    }

CT_Name* CT_Name::default_instance_ = NULL;

    // CT_Description
    CT_Description::CT_Description()
    :m_has_lang_attr(false),
    m_lang_attr(""),
    m_has_val_attr(false),
    m_val_attr("")
    {
    }
    CT_Description::~CT_Description()
{
    clear();    }
    void CT_Description::clear()
    {    
    m_has_lang_attr = false;
    m_lang_attr.clear();
    
    m_has_val_attr = false;
    m_val_attr.clear();
    }

    void CT_Description::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
    if (m_has_lang_attr)
    {
        _outStream << " " << "lang" << "=\"" << m_lang_attr << "\"";
    }
    
    
    if (m_has_val_attr)
    {
        _outStream << " " << "val" << "=\"" << m_val_attr << "\"";
    }
    
            _outStream << ">";
            
            _outStream << "</" << _elemName << ">";
                }

    const CT_Description& CT_Description::default_instance()
    {    
    if (!CT_Description::default_instance_)
    {
        CT_Description::default_instance_ = new CT_Description();
    }
    return *CT_Description::default_instance_;
    }

    bool CT_Description::has_lang_attr() const
    {    
    return m_has_lang_attr;
    }

    void CT_Description::set_lang_attr(const XSD::string_& _lang_attr)
    {    
    m_has_lang_attr = true;
    m_lang_attr = _lang_attr;
    }

    const XSD::string_& CT_Description::get_lang_attr() const
    {    
    return m_lang_attr;
    }

    bool CT_Description::has_val_attr() const
    {    
    return m_has_val_attr;
    }

    void CT_Description::set_val_attr(const XSD::string_& _val_attr)
    {    
    m_has_val_attr = true;
    m_val_attr = _val_attr;
    }

    const XSD::string_& CT_Description::get_val_attr() const
    {    
    return m_val_attr;
    }

CT_Description* CT_Description::default_instance_ = NULL;

    // CT_DiagramDefinition
    CT_DiagramDefinition::CT_DiagramDefinition()
    :m_has_uniqueId_attr(false),
    m_uniqueId_attr(""),
    m_has_minVer_attr(false),
    m_minVer_attr(""),
    m_has_defStyle_attr(false),
    m_defStyle_attr("")
    {
    }
    CT_DiagramDefinition::~CT_DiagramDefinition()
{
    clear();    }
    CT_Name* CT_DiagramDefinition::add_title()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Name* pNewChild = pChildGroup->mutable_title();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Description* CT_DiagramDefinition::add_desc()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Description* pNewChild = pChildGroup->mutable_desc();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Categories* CT_DiagramDefinition::add_catLst()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Categories* pNewChild = pChildGroup->mutable_catLst();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_SampleData* CT_DiagramDefinition::add_sampData()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_SampleData* pNewChild = pChildGroup->mutable_sampData();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_SampleData* CT_DiagramDefinition::add_styleData()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_SampleData* pNewChild = pChildGroup->mutable_styleData();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_SampleData* CT_DiagramDefinition::add_clrData()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_SampleData* pNewChild = pChildGroup->mutable_clrData();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_LayoutNode* CT_DiagramDefinition::add_layoutNode()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_LayoutNode* pNewChild = pChildGroup->mutable_layoutNode();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_a::CT_OfficeArtExtensionList* CT_DiagramDefinition::add_extLst()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_a::CT_OfficeArtExtensionList* pNewChild = pChildGroup->mutable_extLst();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    void CT_DiagramDefinition::clear()
    {    
    m_has_uniqueId_attr = false;
    m_uniqueId_attr.clear();
    
    m_has_minVer_attr = false;
    m_minVer_attr.clear();
    
    m_has_defStyle_attr = false;
    m_defStyle_attr.clear();
    
    {
        vector<ChildGroup_1*>::iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_1.clear();
    }
    }

    void CT_DiagramDefinition::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
    if (m_has_uniqueId_attr)
    {
        _outStream << " " << "uniqueId" << "=\"" << m_uniqueId_attr << "\"";
    }
    
    
    if (m_has_minVer_attr)
    {
        _outStream << " " << "minVer" << "=\"" << m_minVer_attr << "\"";
    }
    
    
    if (m_has_defStyle_attr)
    {
        _outStream << " " << "defStyle" << "=\"" << m_defStyle_attr << "\"";
    }
    
            _outStream << ">";
            
    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_title())
            {
                (*iter)->get_title().toXmlElem("diagram:title", "", _outStream);
            }
            else if ((*iter)->has_desc())
            {
                (*iter)->get_desc().toXmlElem("diagram:desc", "", _outStream);
            }
            else if ((*iter)->has_catLst())
            {
                (*iter)->get_catLst().toXmlElem("diagram:catLst", "", _outStream);
            }
            else if ((*iter)->has_sampData())
            {
                (*iter)->get_sampData().toXmlElem("diagram:sampData", "", _outStream);
            }
            else if ((*iter)->has_styleData())
            {
                (*iter)->get_styleData().toXmlElem("diagram:styleData", "", _outStream);
            }
            else if ((*iter)->has_clrData())
            {
                (*iter)->get_clrData().toXmlElem("diagram:clrData", "", _outStream);
            }
            else if ((*iter)->has_layoutNode())
            {
                (*iter)->get_layoutNode().toXmlElem("diagram:layoutNode", "", _outStream);
            }
            else if ((*iter)->has_extLst())
            {
                (*iter)->get_extLst().toXmlElem("diagram:extLst", "", _outStream);
            }
        }
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_DiagramDefinition& CT_DiagramDefinition::default_instance()
    {    
    if (!CT_DiagramDefinition::default_instance_)
    {
        CT_DiagramDefinition::default_instance_ = new CT_DiagramDefinition();
    }
    return *CT_DiagramDefinition::default_instance_;
    }

    bool CT_DiagramDefinition::has_uniqueId_attr() const
    {    
    return m_has_uniqueId_attr;
    }

    void CT_DiagramDefinition::set_uniqueId_attr(const XSD::string_& _uniqueId_attr)
    {    
    m_has_uniqueId_attr = true;
    m_uniqueId_attr = _uniqueId_attr;
    }

    const XSD::string_& CT_DiagramDefinition::get_uniqueId_attr() const
    {    
    return m_uniqueId_attr;
    }

    bool CT_DiagramDefinition::has_minVer_attr() const
    {    
    return m_has_minVer_attr;
    }

    void CT_DiagramDefinition::set_minVer_attr(const XSD::string_& _minVer_attr)
    {    
    m_has_minVer_attr = true;
    m_minVer_attr = _minVer_attr;
    }

    const XSD::string_& CT_DiagramDefinition::get_minVer_attr() const
    {    
    return m_minVer_attr;
    }

    bool CT_DiagramDefinition::has_defStyle_attr() const
    {    
    return m_has_defStyle_attr;
    }

    void CT_DiagramDefinition::set_defStyle_attr(const XSD::string_& _defStyle_attr)
    {    
    m_has_defStyle_attr = true;
    m_defStyle_attr = _defStyle_attr;
    }

    const XSD::string_& CT_DiagramDefinition::get_defStyle_attr() const
    {    
    return m_defStyle_attr;
    }


    // CT_DiagramDefinition::ChildGroup_1
    CT_DiagramDefinition::ChildGroup_1::ChildGroup_1()
    :m_has_title(false),
    m_title(NULL),
    m_has_desc(false),
    m_desc(NULL),
    m_has_catLst(false),
    m_catLst(NULL),
    m_has_sampData(false),
    m_sampData(NULL),
    m_has_styleData(false),
    m_styleData(NULL),
    m_has_clrData(false),
    m_clrData(NULL),
    m_has_layoutNode(false),
    m_layoutNode(NULL),
    m_has_extLst(false),
    m_extLst(NULL)
    {
    }
    bool CT_DiagramDefinition::ChildGroup_1::has_title() const
    {    
    return m_has_title;
    }

    CT_Name* CT_DiagramDefinition::ChildGroup_1::mutable_title()
    {    
    
    m_has_desc = false;
    
    if (m_desc)
    {
        delete m_desc;
        m_desc = NULL;
    }
    ;
    
    m_has_catLst = false;
    
    if (m_catLst)
    {
        delete m_catLst;
        m_catLst = NULL;
    }
    ;
    
    m_has_sampData = false;
    
    if (m_sampData)
    {
        delete m_sampData;
        m_sampData = NULL;
    }
    ;
    
    m_has_styleData = false;
    
    if (m_styleData)
    {
        delete m_styleData;
        m_styleData = NULL;
    }
    ;
    
    m_has_clrData = false;
    
    if (m_clrData)
    {
        delete m_clrData;
        m_clrData = NULL;
    }
    ;
    
    m_has_layoutNode = false;
    
    if (m_layoutNode)
    {
        delete m_layoutNode;
        m_layoutNode = NULL;
    }
    ;
    
    m_has_extLst = false;
    
    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }
    ;
    
    m_has_title = true;
    if (!m_title)
    {
        m_title = new CT_Name();
    }
    return m_title;
    }

    const CT_Name& CT_DiagramDefinition::ChildGroup_1::get_title() const
    {    
    if (m_title)
    {
        return *m_title;
    }
    return CT_Name::default_instance();
    }

    bool CT_DiagramDefinition::ChildGroup_1::has_desc() const
    {    
    return m_has_desc;
    }

    CT_Description* CT_DiagramDefinition::ChildGroup_1::mutable_desc()
    {    
    
    m_has_title = false;
    
    if (m_title)
    {
        delete m_title;
        m_title = NULL;
    }
    ;
    
    m_has_catLst = false;
    
    if (m_catLst)
    {
        delete m_catLst;
        m_catLst = NULL;
    }
    ;
    
    m_has_sampData = false;
    
    if (m_sampData)
    {
        delete m_sampData;
        m_sampData = NULL;
    }
    ;
    
    m_has_styleData = false;
    
    if (m_styleData)
    {
        delete m_styleData;
        m_styleData = NULL;
    }
    ;
    
    m_has_clrData = false;
    
    if (m_clrData)
    {
        delete m_clrData;
        m_clrData = NULL;
    }
    ;
    
    m_has_layoutNode = false;
    
    if (m_layoutNode)
    {
        delete m_layoutNode;
        m_layoutNode = NULL;
    }
    ;
    
    m_has_extLst = false;
    
    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }
    ;
    
    m_has_desc = true;
    if (!m_desc)
    {
        m_desc = new CT_Description();
    }
    return m_desc;
    }

    const CT_Description& CT_DiagramDefinition::ChildGroup_1::get_desc() const
    {    
    if (m_desc)
    {
        return *m_desc;
    }
    return CT_Description::default_instance();
    }

    bool CT_DiagramDefinition::ChildGroup_1::has_catLst() const
    {    
    return m_has_catLst;
    }

    CT_Categories* CT_DiagramDefinition::ChildGroup_1::mutable_catLst()
    {    
    
    m_has_title = false;
    
    if (m_title)
    {
        delete m_title;
        m_title = NULL;
    }
    ;
    
    m_has_desc = false;
    
    if (m_desc)
    {
        delete m_desc;
        m_desc = NULL;
    }
    ;
    
    m_has_sampData = false;
    
    if (m_sampData)
    {
        delete m_sampData;
        m_sampData = NULL;
    }
    ;
    
    m_has_styleData = false;
    
    if (m_styleData)
    {
        delete m_styleData;
        m_styleData = NULL;
    }
    ;
    
    m_has_clrData = false;
    
    if (m_clrData)
    {
        delete m_clrData;
        m_clrData = NULL;
    }
    ;
    
    m_has_layoutNode = false;
    
    if (m_layoutNode)
    {
        delete m_layoutNode;
        m_layoutNode = NULL;
    }
    ;
    
    m_has_extLst = false;
    
    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }
    ;
    
    m_has_catLst = true;
    if (!m_catLst)
    {
        m_catLst = new CT_Categories();
    }
    return m_catLst;
    }

    const CT_Categories& CT_DiagramDefinition::ChildGroup_1::get_catLst() const
    {    
    if (m_catLst)
    {
        return *m_catLst;
    }
    return CT_Categories::default_instance();
    }

    bool CT_DiagramDefinition::ChildGroup_1::has_sampData() const
    {    
    return m_has_sampData;
    }

    CT_SampleData* CT_DiagramDefinition::ChildGroup_1::mutable_sampData()
    {    
    
    m_has_title = false;
    
    if (m_title)
    {
        delete m_title;
        m_title = NULL;
    }
    ;
    
    m_has_desc = false;
    
    if (m_desc)
    {
        delete m_desc;
        m_desc = NULL;
    }
    ;
    
    m_has_catLst = false;
    
    if (m_catLst)
    {
        delete m_catLst;
        m_catLst = NULL;
    }
    ;
    
    m_has_styleData = false;
    
    if (m_styleData)
    {
        delete m_styleData;
        m_styleData = NULL;
    }
    ;
    
    m_has_clrData = false;
    
    if (m_clrData)
    {
        delete m_clrData;
        m_clrData = NULL;
    }
    ;
    
    m_has_layoutNode = false;
    
    if (m_layoutNode)
    {
        delete m_layoutNode;
        m_layoutNode = NULL;
    }
    ;
    
    m_has_extLst = false;
    
    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }
    ;
    
    m_has_sampData = true;
    if (!m_sampData)
    {
        m_sampData = new CT_SampleData();
    }
    return m_sampData;
    }

    const CT_SampleData& CT_DiagramDefinition::ChildGroup_1::get_sampData() const
    {    
    if (m_sampData)
    {
        return *m_sampData;
    }
    return CT_SampleData::default_instance();
    }

    bool CT_DiagramDefinition::ChildGroup_1::has_styleData() const
    {    
    return m_has_styleData;
    }

    CT_SampleData* CT_DiagramDefinition::ChildGroup_1::mutable_styleData()
    {    
    
    m_has_title = false;
    
    if (m_title)
    {
        delete m_title;
        m_title = NULL;
    }
    ;
    
    m_has_desc = false;
    
    if (m_desc)
    {
        delete m_desc;
        m_desc = NULL;
    }
    ;
    
    m_has_catLst = false;
    
    if (m_catLst)
    {
        delete m_catLst;
        m_catLst = NULL;
    }
    ;
    
    m_has_sampData = false;
    
    if (m_sampData)
    {
        delete m_sampData;
        m_sampData = NULL;
    }
    ;
    
    m_has_clrData = false;
    
    if (m_clrData)
    {
        delete m_clrData;
        m_clrData = NULL;
    }
    ;
    
    m_has_layoutNode = false;
    
    if (m_layoutNode)
    {
        delete m_layoutNode;
        m_layoutNode = NULL;
    }
    ;
    
    m_has_extLst = false;
    
    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }
    ;
    
    m_has_styleData = true;
    if (!m_styleData)
    {
        m_styleData = new CT_SampleData();
    }
    return m_styleData;
    }

    const CT_SampleData& CT_DiagramDefinition::ChildGroup_1::get_styleData() const
    {    
    if (m_styleData)
    {
        return *m_styleData;
    }
    return CT_SampleData::default_instance();
    }

    bool CT_DiagramDefinition::ChildGroup_1::has_clrData() const
    {    
    return m_has_clrData;
    }

    CT_SampleData* CT_DiagramDefinition::ChildGroup_1::mutable_clrData()
    {    
    
    m_has_title = false;
    
    if (m_title)
    {
        delete m_title;
        m_title = NULL;
    }
    ;
    
    m_has_desc = false;
    
    if (m_desc)
    {
        delete m_desc;
        m_desc = NULL;
    }
    ;
    
    m_has_catLst = false;
    
    if (m_catLst)
    {
        delete m_catLst;
        m_catLst = NULL;
    }
    ;
    
    m_has_sampData = false;
    
    if (m_sampData)
    {
        delete m_sampData;
        m_sampData = NULL;
    }
    ;
    
    m_has_styleData = false;
    
    if (m_styleData)
    {
        delete m_styleData;
        m_styleData = NULL;
    }
    ;
    
    m_has_layoutNode = false;
    
    if (m_layoutNode)
    {
        delete m_layoutNode;
        m_layoutNode = NULL;
    }
    ;
    
    m_has_extLst = false;
    
    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }
    ;
    
    m_has_clrData = true;
    if (!m_clrData)
    {
        m_clrData = new CT_SampleData();
    }
    return m_clrData;
    }

    const CT_SampleData& CT_DiagramDefinition::ChildGroup_1::get_clrData() const
    {    
    if (m_clrData)
    {
        return *m_clrData;
    }
    return CT_SampleData::default_instance();
    }

    bool CT_DiagramDefinition::ChildGroup_1::has_layoutNode() const
    {    
    return m_has_layoutNode;
    }

    CT_LayoutNode* CT_DiagramDefinition::ChildGroup_1::mutable_layoutNode()
    {    
    
    m_has_title = false;
    
    if (m_title)
    {
        delete m_title;
        m_title = NULL;
    }
    ;
    
    m_has_desc = false;
    
    if (m_desc)
    {
        delete m_desc;
        m_desc = NULL;
    }
    ;
    
    m_has_catLst = false;
    
    if (m_catLst)
    {
        delete m_catLst;
        m_catLst = NULL;
    }
    ;
    
    m_has_sampData = false;
    
    if (m_sampData)
    {
        delete m_sampData;
        m_sampData = NULL;
    }
    ;
    
    m_has_styleData = false;
    
    if (m_styleData)
    {
        delete m_styleData;
        m_styleData = NULL;
    }
    ;
    
    m_has_clrData = false;
    
    if (m_clrData)
    {
        delete m_clrData;
        m_clrData = NULL;
    }
    ;
    
    m_has_extLst = false;
    
    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }
    ;
    
    m_has_layoutNode = true;
    if (!m_layoutNode)
    {
        m_layoutNode = new CT_LayoutNode();
    }
    return m_layoutNode;
    }

    const CT_LayoutNode& CT_DiagramDefinition::ChildGroup_1::get_layoutNode() const
    {    
    if (m_layoutNode)
    {
        return *m_layoutNode;
    }
    return CT_LayoutNode::default_instance();
    }

    bool CT_DiagramDefinition::ChildGroup_1::has_extLst() const
    {    
    return m_has_extLst;
    }

    ns_a::CT_OfficeArtExtensionList* CT_DiagramDefinition::ChildGroup_1::mutable_extLst()
    {    
    
    m_has_title = false;
    
    if (m_title)
    {
        delete m_title;
        m_title = NULL;
    }
    ;
    
    m_has_desc = false;
    
    if (m_desc)
    {
        delete m_desc;
        m_desc = NULL;
    }
    ;
    
    m_has_catLst = false;
    
    if (m_catLst)
    {
        delete m_catLst;
        m_catLst = NULL;
    }
    ;
    
    m_has_sampData = false;
    
    if (m_sampData)
    {
        delete m_sampData;
        m_sampData = NULL;
    }
    ;
    
    m_has_styleData = false;
    
    if (m_styleData)
    {
        delete m_styleData;
        m_styleData = NULL;
    }
    ;
    
    m_has_clrData = false;
    
    if (m_clrData)
    {
        delete m_clrData;
        m_clrData = NULL;
    }
    ;
    
    m_has_layoutNode = false;
    
    if (m_layoutNode)
    {
        delete m_layoutNode;
        m_layoutNode = NULL;
    }
    ;
    
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new ns_a::CT_OfficeArtExtensionList();
    }
    return m_extLst;
    }

    const ns_a::CT_OfficeArtExtensionList& CT_DiagramDefinition::ChildGroup_1::get_extLst() const
    {    
    if (m_extLst)
    {
        return *m_extLst;
    }
    return ns_a::CT_OfficeArtExtensionList::default_instance();
    }

CT_DiagramDefinition* CT_DiagramDefinition::default_instance_ = NULL;

    // CT_DiagramDefinitionHeader
    CT_DiagramDefinitionHeader::CT_DiagramDefinitionHeader()
    :m_has_uniqueId_attr(false),
    m_uniqueId_attr(""),
    m_has_minVer_attr(false),
    m_minVer_attr(""),
    m_has_defStyle_attr(false),
    m_defStyle_attr(""),
    m_has_resId_attr(false),
    m_resId_attr(0)
    {
    }
    CT_DiagramDefinitionHeader::~CT_DiagramDefinitionHeader()
{
    clear();    }
    CT_Name* CT_DiagramDefinitionHeader::add_title()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Name* pNewChild = pChildGroup->mutable_title();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Description* CT_DiagramDefinitionHeader::add_desc()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Description* pNewChild = pChildGroup->mutable_desc();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Categories* CT_DiagramDefinitionHeader::add_catLst()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Categories* pNewChild = pChildGroup->mutable_catLst();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_a::CT_OfficeArtExtensionList* CT_DiagramDefinitionHeader::add_extLst()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_a::CT_OfficeArtExtensionList* pNewChild = pChildGroup->mutable_extLst();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    void CT_DiagramDefinitionHeader::clear()
    {    
    m_has_uniqueId_attr = false;
    m_uniqueId_attr.clear();
    
    m_has_minVer_attr = false;
    m_minVer_attr.clear();
    
    m_has_defStyle_attr = false;
    m_defStyle_attr.clear();
    
    m_has_resId_attr = false;
    m_resId_attr = 0;
    
    {
        vector<ChildGroup_1*>::iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_1.clear();
    }
    }

    void CT_DiagramDefinitionHeader::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
    if (m_has_uniqueId_attr)
    {
        _outStream << " " << "uniqueId" << "=\"" << m_uniqueId_attr << "\"";
    }
    
    
    if (m_has_minVer_attr)
    {
        _outStream << " " << "minVer" << "=\"" << m_minVer_attr << "\"";
    }
    
    
    if (m_has_defStyle_attr)
    {
        _outStream << " " << "defStyle" << "=\"" << m_defStyle_attr << "\"";
    }
    
    
    if (m_has_resId_attr)
    {
        _outStream << " " << "resId" << "=\"" << m_resId_attr << "\"";
    }
    
            _outStream << ">";
            
    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_title())
            {
                (*iter)->get_title().toXmlElem("diagram:title", "", _outStream);
            }
            else if ((*iter)->has_desc())
            {
                (*iter)->get_desc().toXmlElem("diagram:desc", "", _outStream);
            }
            else if ((*iter)->has_catLst())
            {
                (*iter)->get_catLst().toXmlElem("diagram:catLst", "", _outStream);
            }
            else if ((*iter)->has_extLst())
            {
                (*iter)->get_extLst().toXmlElem("diagram:extLst", "", _outStream);
            }
        }
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_DiagramDefinitionHeader& CT_DiagramDefinitionHeader::default_instance()
    {    
    if (!CT_DiagramDefinitionHeader::default_instance_)
    {
        CT_DiagramDefinitionHeader::default_instance_ = new CT_DiagramDefinitionHeader();
    }
    return *CT_DiagramDefinitionHeader::default_instance_;
    }

    bool CT_DiagramDefinitionHeader::has_uniqueId_attr() const
    {    
    return m_has_uniqueId_attr;
    }

    void CT_DiagramDefinitionHeader::set_uniqueId_attr(const XSD::string_& _uniqueId_attr)
    {    
    m_has_uniqueId_attr = true;
    m_uniqueId_attr = _uniqueId_attr;
    }

    const XSD::string_& CT_DiagramDefinitionHeader::get_uniqueId_attr() const
    {    
    return m_uniqueId_attr;
    }

    bool CT_DiagramDefinitionHeader::has_minVer_attr() const
    {    
    return m_has_minVer_attr;
    }

    void CT_DiagramDefinitionHeader::set_minVer_attr(const XSD::string_& _minVer_attr)
    {    
    m_has_minVer_attr = true;
    m_minVer_attr = _minVer_attr;
    }

    const XSD::string_& CT_DiagramDefinitionHeader::get_minVer_attr() const
    {    
    return m_minVer_attr;
    }

    bool CT_DiagramDefinitionHeader::has_defStyle_attr() const
    {    
    return m_has_defStyle_attr;
    }

    void CT_DiagramDefinitionHeader::set_defStyle_attr(const XSD::string_& _defStyle_attr)
    {    
    m_has_defStyle_attr = true;
    m_defStyle_attr = _defStyle_attr;
    }

    const XSD::string_& CT_DiagramDefinitionHeader::get_defStyle_attr() const
    {    
    return m_defStyle_attr;
    }

    bool CT_DiagramDefinitionHeader::has_resId_attr() const
    {    
    return m_has_resId_attr;
    }

    void CT_DiagramDefinitionHeader::set_resId_attr(const XSD::int_& _resId_attr)
    {    
    m_has_resId_attr = true;
    m_resId_attr = _resId_attr;
    }

    const XSD::int_& CT_DiagramDefinitionHeader::get_resId_attr() const
    {    
    return m_resId_attr;
    }


    // CT_DiagramDefinitionHeader::ChildGroup_1
    CT_DiagramDefinitionHeader::ChildGroup_1::ChildGroup_1()
    :m_has_title(false),
    m_title(NULL),
    m_has_desc(false),
    m_desc(NULL),
    m_has_catLst(false),
    m_catLst(NULL),
    m_has_extLst(false),
    m_extLst(NULL)
    {
    }
    bool CT_DiagramDefinitionHeader::ChildGroup_1::has_title() const
    {    
    return m_has_title;
    }

    CT_Name* CT_DiagramDefinitionHeader::ChildGroup_1::mutable_title()
    {    
    
    m_has_desc = false;
    
    if (m_desc)
    {
        delete m_desc;
        m_desc = NULL;
    }
    ;
    
    m_has_catLst = false;
    
    if (m_catLst)
    {
        delete m_catLst;
        m_catLst = NULL;
    }
    ;
    
    m_has_extLst = false;
    
    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }
    ;
    
    m_has_title = true;
    if (!m_title)
    {
        m_title = new CT_Name();
    }
    return m_title;
    }

    const CT_Name& CT_DiagramDefinitionHeader::ChildGroup_1::get_title() const
    {    
    if (m_title)
    {
        return *m_title;
    }
    return CT_Name::default_instance();
    }

    bool CT_DiagramDefinitionHeader::ChildGroup_1::has_desc() const
    {    
    return m_has_desc;
    }

    CT_Description* CT_DiagramDefinitionHeader::ChildGroup_1::mutable_desc()
    {    
    
    m_has_title = false;
    
    if (m_title)
    {
        delete m_title;
        m_title = NULL;
    }
    ;
    
    m_has_catLst = false;
    
    if (m_catLst)
    {
        delete m_catLst;
        m_catLst = NULL;
    }
    ;
    
    m_has_extLst = false;
    
    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }
    ;
    
    m_has_desc = true;
    if (!m_desc)
    {
        m_desc = new CT_Description();
    }
    return m_desc;
    }

    const CT_Description& CT_DiagramDefinitionHeader::ChildGroup_1::get_desc() const
    {    
    if (m_desc)
    {
        return *m_desc;
    }
    return CT_Description::default_instance();
    }

    bool CT_DiagramDefinitionHeader::ChildGroup_1::has_catLst() const
    {    
    return m_has_catLst;
    }

    CT_Categories* CT_DiagramDefinitionHeader::ChildGroup_1::mutable_catLst()
    {    
    
    m_has_title = false;
    
    if (m_title)
    {
        delete m_title;
        m_title = NULL;
    }
    ;
    
    m_has_desc = false;
    
    if (m_desc)
    {
        delete m_desc;
        m_desc = NULL;
    }
    ;
    
    m_has_extLst = false;
    
    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }
    ;
    
    m_has_catLst = true;
    if (!m_catLst)
    {
        m_catLst = new CT_Categories();
    }
    return m_catLst;
    }

    const CT_Categories& CT_DiagramDefinitionHeader::ChildGroup_1::get_catLst() const
    {    
    if (m_catLst)
    {
        return *m_catLst;
    }
    return CT_Categories::default_instance();
    }

    bool CT_DiagramDefinitionHeader::ChildGroup_1::has_extLst() const
    {    
    return m_has_extLst;
    }

    ns_a::CT_OfficeArtExtensionList* CT_DiagramDefinitionHeader::ChildGroup_1::mutable_extLst()
    {    
    
    m_has_title = false;
    
    if (m_title)
    {
        delete m_title;
        m_title = NULL;
    }
    ;
    
    m_has_desc = false;
    
    if (m_desc)
    {
        delete m_desc;
        m_desc = NULL;
    }
    ;
    
    m_has_catLst = false;
    
    if (m_catLst)
    {
        delete m_catLst;
        m_catLst = NULL;
    }
    ;
    
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new ns_a::CT_OfficeArtExtensionList();
    }
    return m_extLst;
    }

    const ns_a::CT_OfficeArtExtensionList& CT_DiagramDefinitionHeader::ChildGroup_1::get_extLst() const
    {    
    if (m_extLst)
    {
        return *m_extLst;
    }
    return ns_a::CT_OfficeArtExtensionList::default_instance();
    }

CT_DiagramDefinitionHeader* CT_DiagramDefinitionHeader::default_instance_ = NULL;

    // CT_DiagramDefinitionHeaderLst
    CT_DiagramDefinitionHeaderLst::CT_DiagramDefinitionHeaderLst()

    {
    }
    CT_DiagramDefinitionHeaderLst::~CT_DiagramDefinitionHeaderLst()
{
    clear();    }
    CT_DiagramDefinitionHeader* CT_DiagramDefinitionHeaderLst::add_layoutDefHdr()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_DiagramDefinitionHeader* pNewChild = pChildGroup->mutable_layoutDefHdr();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    void CT_DiagramDefinitionHeaderLst::clear()
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

    void CT_DiagramDefinitionHeaderLst::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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
            if ((*iter)->has_layoutDefHdr())
            {
                (*iter)->get_layoutDefHdr().toXmlElem("diagram:layoutDefHdr", "", _outStream);
            }
        }
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_DiagramDefinitionHeaderLst& CT_DiagramDefinitionHeaderLst::default_instance()
    {    
    if (!CT_DiagramDefinitionHeaderLst::default_instance_)
    {
        CT_DiagramDefinitionHeaderLst::default_instance_ = new CT_DiagramDefinitionHeaderLst();
    }
    return *CT_DiagramDefinitionHeaderLst::default_instance_;
    }


    // CT_DiagramDefinitionHeaderLst::ChildGroup_1
    CT_DiagramDefinitionHeaderLst::ChildGroup_1::ChildGroup_1()
    :m_has_layoutDefHdr(false),
    m_layoutDefHdr(NULL)
    {
    }
    bool CT_DiagramDefinitionHeaderLst::ChildGroup_1::has_layoutDefHdr() const
    {    
    return m_has_layoutDefHdr;
    }

    CT_DiagramDefinitionHeader* CT_DiagramDefinitionHeaderLst::ChildGroup_1::mutable_layoutDefHdr()
    {    
    
    m_has_layoutDefHdr = true;
    if (!m_layoutDefHdr)
    {
        m_layoutDefHdr = new CT_DiagramDefinitionHeader();
    }
    return m_layoutDefHdr;
    }

    const CT_DiagramDefinitionHeader& CT_DiagramDefinitionHeaderLst::ChildGroup_1::get_layoutDefHdr() const
    {    
    if (m_layoutDefHdr)
    {
        return *m_layoutDefHdr;
    }
    return CT_DiagramDefinitionHeader::default_instance();
    }

CT_DiagramDefinitionHeaderLst* CT_DiagramDefinitionHeaderLst::default_instance_ = NULL;

    // CT_RelIds
    CT_RelIds::CT_RelIds()
    :m_has_r_dm_attr(false),
    m_r_dm_attr(NULL),
    m_has_r_lo_attr(false),
    m_r_lo_attr(NULL),
    m_has_r_qs_attr(false),
    m_r_qs_attr(NULL),
    m_has_r_cs_attr(false),
    m_r_cs_attr(NULL)
    {
    }
    CT_RelIds::~CT_RelIds()
{
    clear();    }
    void CT_RelIds::clear()
    {    
    m_has_r_dm_attr = false;
    
    if (m_r_dm_attr)
    {
        delete m_r_dm_attr;
        m_r_dm_attr = NULL;
    }
    
    
    m_has_r_lo_attr = false;
    
    if (m_r_lo_attr)
    {
        delete m_r_lo_attr;
        m_r_lo_attr = NULL;
    }
    
    
    m_has_r_qs_attr = false;
    
    if (m_r_qs_attr)
    {
        delete m_r_qs_attr;
        m_r_qs_attr = NULL;
    }
    
    
    m_has_r_cs_attr = false;
    
    if (m_r_cs_attr)
    {
        delete m_r_cs_attr;
        m_r_cs_attr = NULL;
    }
    
    }

    void CT_RelIds::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
    if (m_has_r_dm_attr)
    {
        m_r_dm_attr->toXmlAttr("r:dm", _outStream);
    }
    
    
    if (m_has_r_lo_attr)
    {
        m_r_lo_attr->toXmlAttr("r:lo", _outStream);
    }
    
    
    if (m_has_r_qs_attr)
    {
        m_r_qs_attr->toXmlAttr("r:qs", _outStream);
    }
    
    
    if (m_has_r_cs_attr)
    {
        m_r_cs_attr->toXmlAttr("r:cs", _outStream);
    }
    
            _outStream << ">";
            
            _outStream << "</" << _elemName << ">";
                }

    const CT_RelIds& CT_RelIds::default_instance()
    {    
    if (!CT_RelIds::default_instance_)
    {
        CT_RelIds::default_instance_ = new CT_RelIds();
    }
    return *CT_RelIds::default_instance_;
    }

    bool CT_RelIds::has_r_dm_attr() const
    {    
    return m_has_r_dm_attr;
    }

    void CT_RelIds::set_r_dm_attr(const ns_r::ST_RelationshipId& _r_dm_attr)
    {    
    m_has_r_dm_attr = true;
    m_r_dm_attr = new ns_r::ST_RelationshipId(_r_dm_attr);
    }

    const ns_r::ST_RelationshipId& CT_RelIds::get_r_dm_attr() const
    {    
    if (m_r_dm_attr)
    {
        return *m_r_dm_attr;
    }
    return ns_r::ST_RelationshipId::default_instance();
    }

    bool CT_RelIds::has_r_lo_attr() const
    {    
    return m_has_r_lo_attr;
    }

    void CT_RelIds::set_r_lo_attr(const ns_r::ST_RelationshipId& _r_lo_attr)
    {    
    m_has_r_lo_attr = true;
    m_r_lo_attr = new ns_r::ST_RelationshipId(_r_lo_attr);
    }

    const ns_r::ST_RelationshipId& CT_RelIds::get_r_lo_attr() const
    {    
    if (m_r_lo_attr)
    {
        return *m_r_lo_attr;
    }
    return ns_r::ST_RelationshipId::default_instance();
    }

    bool CT_RelIds::has_r_qs_attr() const
    {    
    return m_has_r_qs_attr;
    }

    void CT_RelIds::set_r_qs_attr(const ns_r::ST_RelationshipId& _r_qs_attr)
    {    
    m_has_r_qs_attr = true;
    m_r_qs_attr = new ns_r::ST_RelationshipId(_r_qs_attr);
    }

    const ns_r::ST_RelationshipId& CT_RelIds::get_r_qs_attr() const
    {    
    if (m_r_qs_attr)
    {
        return *m_r_qs_attr;
    }
    return ns_r::ST_RelationshipId::default_instance();
    }

    bool CT_RelIds::has_r_cs_attr() const
    {    
    return m_has_r_cs_attr;
    }

    void CT_RelIds::set_r_cs_attr(const ns_r::ST_RelationshipId& _r_cs_attr)
    {    
    m_has_r_cs_attr = true;
    m_r_cs_attr = new ns_r::ST_RelationshipId(_r_cs_attr);
    }

    const ns_r::ST_RelationshipId& CT_RelIds::get_r_cs_attr() const
    {    
    if (m_r_cs_attr)
    {
        return *m_r_cs_attr;
    }
    return ns_r::ST_RelationshipId::default_instance();
    }

CT_RelIds* CT_RelIds::default_instance_ = NULL;

    // CT_ElemPropSet
    CT_ElemPropSet::CT_ElemPropSet()
    :m_has_presLayoutVars(false),
    m_presLayoutVars(NULL),
    m_has_style(false),
    m_style(NULL),
    m_has_presAssocID_attr(false),
    m_presAssocID_attr(NULL),
    m_has_presName_attr(false),
    m_presName_attr(""),
    m_has_presStyleLbl_attr(false),
    m_presStyleLbl_attr(""),
    m_has_presStyleIdx_attr(false),
    m_presStyleIdx_attr(0),
    m_has_presStyleCnt_attr(false),
    m_presStyleCnt_attr(0),
    m_has_loTypeId_attr(false),
    m_loTypeId_attr(""),
    m_has_loCatId_attr(false),
    m_loCatId_attr(""),
    m_has_qsTypeId_attr(false),
    m_qsTypeId_attr(""),
    m_has_qsCatId_attr(false),
    m_qsCatId_attr(""),
    m_has_csTypeId_attr(false),
    m_csTypeId_attr(""),
    m_has_csCatId_attr(false),
    m_csCatId_attr(""),
    m_has_coherent3DOff_attr(false),
    m_coherent3DOff_attr(false),
    m_has_phldrT_attr(false),
    m_phldrT_attr(""),
    m_has_phldr_attr(false),
    m_phldr_attr(false),
    m_has_custAng_attr(false),
    m_custAng_attr(0),
    m_has_custFlipVert_attr(false),
    m_custFlipVert_attr(false),
    m_has_custFlipHor_attr(false),
    m_custFlipHor_attr(false),
    m_has_custSzX_attr(false),
    m_custSzX_attr(0),
    m_has_custSzY_attr(false),
    m_custSzY_attr(0),
    m_has_custScaleX_attr(false),
    m_custScaleX_attr(NULL),
    m_has_custScaleY_attr(false),
    m_custScaleY_attr(NULL),
    m_has_custT_attr(false),
    m_custT_attr(false),
    m_has_custLinFactX_attr(false),
    m_custLinFactX_attr(NULL),
    m_has_custLinFactY_attr(false),
    m_custLinFactY_attr(NULL),
    m_has_custLinFactNeighborX_attr(false),
    m_custLinFactNeighborX_attr(NULL),
    m_has_custLinFactNeighborY_attr(false),
    m_custLinFactNeighborY_attr(NULL),
    m_has_custRadScaleRad_attr(false),
    m_custRadScaleRad_attr(NULL),
    m_has_custRadScaleInc_attr(false),
    m_custRadScaleInc_attr(NULL)
    {
    }
    CT_ElemPropSet::~CT_ElemPropSet()
{
    clear();    }
    bool CT_ElemPropSet::has_presLayoutVars() const
    {    
    return m_has_presLayoutVars;
    }

    CT_LayoutVariablePropertySet* CT_ElemPropSet::mutable_presLayoutVars()
    {    
    m_has_presLayoutVars = true;
    if (!m_presLayoutVars)
    {
        m_presLayoutVars = new CT_LayoutVariablePropertySet();
    }
    return m_presLayoutVars;
    }

    const CT_LayoutVariablePropertySet& CT_ElemPropSet::get_presLayoutVars() const
    {    
    if (m_presLayoutVars)
    {
        return *m_presLayoutVars;
    }
    return CT_LayoutVariablePropertySet::default_instance();
    }

    bool CT_ElemPropSet::has_style() const
    {    
    return m_has_style;
    }

    ns_a::CT_ShapeStyle* CT_ElemPropSet::mutable_style()
    {    
    m_has_style = true;
    if (!m_style)
    {
        m_style = new ns_a::CT_ShapeStyle();
    }
    return m_style;
    }

    const ns_a::CT_ShapeStyle& CT_ElemPropSet::get_style() const
    {    
    if (m_style)
    {
        return *m_style;
    }
    return ns_a::CT_ShapeStyle::default_instance();
    }

    void CT_ElemPropSet::clear()
    {    
    m_has_presAssocID_attr = false;
    
    if (m_presAssocID_attr)
    {
        delete m_presAssocID_attr;
        m_presAssocID_attr = NULL;
    }
    
    
    m_has_presName_attr = false;
    m_presName_attr.clear();
    
    m_has_presStyleLbl_attr = false;
    m_presStyleLbl_attr.clear();
    
    m_has_presStyleIdx_attr = false;
    m_presStyleIdx_attr = 0;
    
    m_has_presStyleCnt_attr = false;
    m_presStyleCnt_attr = 0;
    
    m_has_loTypeId_attr = false;
    m_loTypeId_attr.clear();
    
    m_has_loCatId_attr = false;
    m_loCatId_attr.clear();
    
    m_has_qsTypeId_attr = false;
    m_qsTypeId_attr.clear();
    
    m_has_qsCatId_attr = false;
    m_qsCatId_attr.clear();
    
    m_has_csTypeId_attr = false;
    m_csTypeId_attr.clear();
    
    m_has_csCatId_attr = false;
    m_csCatId_attr.clear();
    
    m_has_coherent3DOff_attr = false;
    m_coherent3DOff_attr = false;
    
    m_has_phldrT_attr = false;
    m_phldrT_attr.clear();
    
    m_has_phldr_attr = false;
    m_phldr_attr = false;
    
    m_has_custAng_attr = false;
    m_custAng_attr = 0;
    
    m_has_custFlipVert_attr = false;
    m_custFlipVert_attr = false;
    
    m_has_custFlipHor_attr = false;
    m_custFlipHor_attr = false;
    
    m_has_custSzX_attr = false;
    m_custSzX_attr = 0;
    
    m_has_custSzY_attr = false;
    m_custSzY_attr = 0;
    
    m_has_custScaleX_attr = false;
    
    if (m_custScaleX_attr)
    {
        delete m_custScaleX_attr;
        m_custScaleX_attr = NULL;
    }
    
    
    m_has_custScaleY_attr = false;
    
    if (m_custScaleY_attr)
    {
        delete m_custScaleY_attr;
        m_custScaleY_attr = NULL;
    }
    
    
    m_has_custT_attr = false;
    m_custT_attr = false;
    
    m_has_custLinFactX_attr = false;
    
    if (m_custLinFactX_attr)
    {
        delete m_custLinFactX_attr;
        m_custLinFactX_attr = NULL;
    }
    
    
    m_has_custLinFactY_attr = false;
    
    if (m_custLinFactY_attr)
    {
        delete m_custLinFactY_attr;
        m_custLinFactY_attr = NULL;
    }
    
    
    m_has_custLinFactNeighborX_attr = false;
    
    if (m_custLinFactNeighborX_attr)
    {
        delete m_custLinFactNeighborX_attr;
        m_custLinFactNeighborX_attr = NULL;
    }
    
    
    m_has_custLinFactNeighborY_attr = false;
    
    if (m_custLinFactNeighborY_attr)
    {
        delete m_custLinFactNeighborY_attr;
        m_custLinFactNeighborY_attr = NULL;
    }
    
    
    m_has_custRadScaleRad_attr = false;
    
    if (m_custRadScaleRad_attr)
    {
        delete m_custRadScaleRad_attr;
        m_custRadScaleRad_attr = NULL;
    }
    
    
    m_has_custRadScaleInc_attr = false;
    
    if (m_custRadScaleInc_attr)
    {
        delete m_custRadScaleInc_attr;
        m_custRadScaleInc_attr = NULL;
    }
    
    
    m_has_presLayoutVars = false;
    
    if (m_presLayoutVars)
    {
        delete m_presLayoutVars;
        m_presLayoutVars = NULL;
    }
    
    
    m_has_style = false;
    
    if (m_style)
    {
        delete m_style;
        m_style = NULL;
    }
    
    }

    void CT_ElemPropSet::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
    if (m_has_presAssocID_attr)
    {
        m_presAssocID_attr->toXmlAttr("presAssocID", _outStream);
    }
    
    
    if (m_has_presName_attr)
    {
        _outStream << " " << "presName" << "=\"" << m_presName_attr << "\"";
    }
    
    
    if (m_has_presStyleLbl_attr)
    {
        _outStream << " " << "presStyleLbl" << "=\"" << m_presStyleLbl_attr << "\"";
    }
    
    
    if (m_has_presStyleIdx_attr)
    {
        _outStream << " " << "presStyleIdx" << "=\"" << m_presStyleIdx_attr << "\"";
    }
    
    
    if (m_has_presStyleCnt_attr)
    {
        _outStream << " " << "presStyleCnt" << "=\"" << m_presStyleCnt_attr << "\"";
    }
    
    
    if (m_has_loTypeId_attr)
    {
        _outStream << " " << "loTypeId" << "=\"" << m_loTypeId_attr << "\"";
    }
    
    
    if (m_has_loCatId_attr)
    {
        _outStream << " " << "loCatId" << "=\"" << m_loCatId_attr << "\"";
    }
    
    
    if (m_has_qsTypeId_attr)
    {
        _outStream << " " << "qsTypeId" << "=\"" << m_qsTypeId_attr << "\"";
    }
    
    
    if (m_has_qsCatId_attr)
    {
        _outStream << " " << "qsCatId" << "=\"" << m_qsCatId_attr << "\"";
    }
    
    
    if (m_has_csTypeId_attr)
    {
        _outStream << " " << "csTypeId" << "=\"" << m_csTypeId_attr << "\"";
    }
    
    
    if (m_has_csCatId_attr)
    {
        _outStream << " " << "csCatId" << "=\"" << m_csCatId_attr << "\"";
    }
    
    
    if (m_has_coherent3DOff_attr)
    {
        _outStream << " " << "coherent3DOff" << "=\"" << XSD::XMLBooleanStr(m_coherent3DOff_attr) << "\"";
    }
    
    
    if (m_has_phldrT_attr)
    {
        _outStream << " " << "phldrT" << "=\"" << m_phldrT_attr << "\"";
    }
    
    
    if (m_has_phldr_attr)
    {
        _outStream << " " << "phldr" << "=\"" << XSD::XMLBooleanStr(m_phldr_attr) << "\"";
    }
    
    
    if (m_has_custAng_attr)
    {
        _outStream << " " << "custAng" << "=\"" << m_custAng_attr << "\"";
    }
    
    
    if (m_has_custFlipVert_attr)
    {
        _outStream << " " << "custFlipVert" << "=\"" << XSD::XMLBooleanStr(m_custFlipVert_attr) << "\"";
    }
    
    
    if (m_has_custFlipHor_attr)
    {
        _outStream << " " << "custFlipHor" << "=\"" << XSD::XMLBooleanStr(m_custFlipHor_attr) << "\"";
    }
    
    
    if (m_has_custSzX_attr)
    {
        _outStream << " " << "custSzX" << "=\"" << m_custSzX_attr << "\"";
    }
    
    
    if (m_has_custSzY_attr)
    {
        _outStream << " " << "custSzY" << "=\"" << m_custSzY_attr << "\"";
    }
    
    
    if (m_has_custScaleX_attr)
    {
        m_custScaleX_attr->toXmlAttr("custScaleX", _outStream);
    }
    
    
    if (m_has_custScaleY_attr)
    {
        m_custScaleY_attr->toXmlAttr("custScaleY", _outStream);
    }
    
    
    if (m_has_custT_attr)
    {
        _outStream << " " << "custT" << "=\"" << XSD::XMLBooleanStr(m_custT_attr) << "\"";
    }
    
    
    if (m_has_custLinFactX_attr)
    {
        m_custLinFactX_attr->toXmlAttr("custLinFactX", _outStream);
    }
    
    
    if (m_has_custLinFactY_attr)
    {
        m_custLinFactY_attr->toXmlAttr("custLinFactY", _outStream);
    }
    
    
    if (m_has_custLinFactNeighborX_attr)
    {
        m_custLinFactNeighborX_attr->toXmlAttr("custLinFactNeighborX", _outStream);
    }
    
    
    if (m_has_custLinFactNeighborY_attr)
    {
        m_custLinFactNeighborY_attr->toXmlAttr("custLinFactNeighborY", _outStream);
    }
    
    
    if (m_has_custRadScaleRad_attr)
    {
        m_custRadScaleRad_attr->toXmlAttr("custRadScaleRad", _outStream);
    }
    
    
    if (m_has_custRadScaleInc_attr)
    {
        m_custRadScaleInc_attr->toXmlAttr("custRadScaleInc", _outStream);
    }
    
            _outStream << ">";
            
    if (m_has_presLayoutVars)
    {
        m_presLayoutVars->toXmlElem("diagram:presLayoutVars", "", _outStream);;
    }
    
    if (m_has_style)
    {
        m_style->toXmlElem("diagram:style", "", _outStream);;
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_ElemPropSet& CT_ElemPropSet::default_instance()
    {    
    if (!CT_ElemPropSet::default_instance_)
    {
        CT_ElemPropSet::default_instance_ = new CT_ElemPropSet();
    }
    return *CT_ElemPropSet::default_instance_;
    }

    bool CT_ElemPropSet::has_presAssocID_attr() const
    {    
    return m_has_presAssocID_attr;
    }

    void CT_ElemPropSet::set_presAssocID_attr(const ST_ModelId& _presAssocID_attr)
    {    
    m_has_presAssocID_attr = true;
    m_presAssocID_attr = new ST_ModelId(_presAssocID_attr);
    }

    const ST_ModelId& CT_ElemPropSet::get_presAssocID_attr() const
    {    
    if (m_presAssocID_attr)
    {
        return *m_presAssocID_attr;
    }
    return ST_ModelId::default_instance();
    }

    bool CT_ElemPropSet::has_presName_attr() const
    {    
    return m_has_presName_attr;
    }

    void CT_ElemPropSet::set_presName_attr(const XSD::string_& _presName_attr)
    {    
    m_has_presName_attr = true;
    m_presName_attr = _presName_attr;
    }

    const XSD::string_& CT_ElemPropSet::get_presName_attr() const
    {    
    return m_presName_attr;
    }

    bool CT_ElemPropSet::has_presStyleLbl_attr() const
    {    
    return m_has_presStyleLbl_attr;
    }

    void CT_ElemPropSet::set_presStyleLbl_attr(const XSD::string_& _presStyleLbl_attr)
    {    
    m_has_presStyleLbl_attr = true;
    m_presStyleLbl_attr = _presStyleLbl_attr;
    }

    const XSD::string_& CT_ElemPropSet::get_presStyleLbl_attr() const
    {    
    return m_presStyleLbl_attr;
    }

    bool CT_ElemPropSet::has_presStyleIdx_attr() const
    {    
    return m_has_presStyleIdx_attr;
    }

    void CT_ElemPropSet::set_presStyleIdx_attr(const XSD::int_& _presStyleIdx_attr)
    {    
    m_has_presStyleIdx_attr = true;
    m_presStyleIdx_attr = _presStyleIdx_attr;
    }

    const XSD::int_& CT_ElemPropSet::get_presStyleIdx_attr() const
    {    
    return m_presStyleIdx_attr;
    }

    bool CT_ElemPropSet::has_presStyleCnt_attr() const
    {    
    return m_has_presStyleCnt_attr;
    }

    void CT_ElemPropSet::set_presStyleCnt_attr(const XSD::int_& _presStyleCnt_attr)
    {    
    m_has_presStyleCnt_attr = true;
    m_presStyleCnt_attr = _presStyleCnt_attr;
    }

    const XSD::int_& CT_ElemPropSet::get_presStyleCnt_attr() const
    {    
    return m_presStyleCnt_attr;
    }

    bool CT_ElemPropSet::has_loTypeId_attr() const
    {    
    return m_has_loTypeId_attr;
    }

    void CT_ElemPropSet::set_loTypeId_attr(const XSD::string_& _loTypeId_attr)
    {    
    m_has_loTypeId_attr = true;
    m_loTypeId_attr = _loTypeId_attr;
    }

    const XSD::string_& CT_ElemPropSet::get_loTypeId_attr() const
    {    
    return m_loTypeId_attr;
    }

    bool CT_ElemPropSet::has_loCatId_attr() const
    {    
    return m_has_loCatId_attr;
    }

    void CT_ElemPropSet::set_loCatId_attr(const XSD::string_& _loCatId_attr)
    {    
    m_has_loCatId_attr = true;
    m_loCatId_attr = _loCatId_attr;
    }

    const XSD::string_& CT_ElemPropSet::get_loCatId_attr() const
    {    
    return m_loCatId_attr;
    }

    bool CT_ElemPropSet::has_qsTypeId_attr() const
    {    
    return m_has_qsTypeId_attr;
    }

    void CT_ElemPropSet::set_qsTypeId_attr(const XSD::string_& _qsTypeId_attr)
    {    
    m_has_qsTypeId_attr = true;
    m_qsTypeId_attr = _qsTypeId_attr;
    }

    const XSD::string_& CT_ElemPropSet::get_qsTypeId_attr() const
    {    
    return m_qsTypeId_attr;
    }

    bool CT_ElemPropSet::has_qsCatId_attr() const
    {    
    return m_has_qsCatId_attr;
    }

    void CT_ElemPropSet::set_qsCatId_attr(const XSD::string_& _qsCatId_attr)
    {    
    m_has_qsCatId_attr = true;
    m_qsCatId_attr = _qsCatId_attr;
    }

    const XSD::string_& CT_ElemPropSet::get_qsCatId_attr() const
    {    
    return m_qsCatId_attr;
    }

    bool CT_ElemPropSet::has_csTypeId_attr() const
    {    
    return m_has_csTypeId_attr;
    }

    void CT_ElemPropSet::set_csTypeId_attr(const XSD::string_& _csTypeId_attr)
    {    
    m_has_csTypeId_attr = true;
    m_csTypeId_attr = _csTypeId_attr;
    }

    const XSD::string_& CT_ElemPropSet::get_csTypeId_attr() const
    {    
    return m_csTypeId_attr;
    }

    bool CT_ElemPropSet::has_csCatId_attr() const
    {    
    return m_has_csCatId_attr;
    }

    void CT_ElemPropSet::set_csCatId_attr(const XSD::string_& _csCatId_attr)
    {    
    m_has_csCatId_attr = true;
    m_csCatId_attr = _csCatId_attr;
    }

    const XSD::string_& CT_ElemPropSet::get_csCatId_attr() const
    {    
    return m_csCatId_attr;
    }

    bool CT_ElemPropSet::has_coherent3DOff_attr() const
    {    
    return m_has_coherent3DOff_attr;
    }

    void CT_ElemPropSet::set_coherent3DOff_attr(const XSD::boolean_& _coherent3DOff_attr)
    {    
    m_has_coherent3DOff_attr = true;
    m_coherent3DOff_attr = _coherent3DOff_attr;
    }

    const XSD::boolean_& CT_ElemPropSet::get_coherent3DOff_attr() const
    {    
    return m_coherent3DOff_attr;
    }

    bool CT_ElemPropSet::has_phldrT_attr() const
    {    
    return m_has_phldrT_attr;
    }

    void CT_ElemPropSet::set_phldrT_attr(const XSD::string_& _phldrT_attr)
    {    
    m_has_phldrT_attr = true;
    m_phldrT_attr = _phldrT_attr;
    }

    const XSD::string_& CT_ElemPropSet::get_phldrT_attr() const
    {    
    return m_phldrT_attr;
    }

    bool CT_ElemPropSet::has_phldr_attr() const
    {    
    return m_has_phldr_attr;
    }

    void CT_ElemPropSet::set_phldr_attr(const XSD::boolean_& _phldr_attr)
    {    
    m_has_phldr_attr = true;
    m_phldr_attr = _phldr_attr;
    }

    const XSD::boolean_& CT_ElemPropSet::get_phldr_attr() const
    {    
    return m_phldr_attr;
    }

    bool CT_ElemPropSet::has_custAng_attr() const
    {    
    return m_has_custAng_attr;
    }

    void CT_ElemPropSet::set_custAng_attr(const XSD::int_& _custAng_attr)
    {    
    m_has_custAng_attr = true;
    m_custAng_attr = _custAng_attr;
    }

    const XSD::int_& CT_ElemPropSet::get_custAng_attr() const
    {    
    return m_custAng_attr;
    }

    bool CT_ElemPropSet::has_custFlipVert_attr() const
    {    
    return m_has_custFlipVert_attr;
    }

    void CT_ElemPropSet::set_custFlipVert_attr(const XSD::boolean_& _custFlipVert_attr)
    {    
    m_has_custFlipVert_attr = true;
    m_custFlipVert_attr = _custFlipVert_attr;
    }

    const XSD::boolean_& CT_ElemPropSet::get_custFlipVert_attr() const
    {    
    return m_custFlipVert_attr;
    }

    bool CT_ElemPropSet::has_custFlipHor_attr() const
    {    
    return m_has_custFlipHor_attr;
    }

    void CT_ElemPropSet::set_custFlipHor_attr(const XSD::boolean_& _custFlipHor_attr)
    {    
    m_has_custFlipHor_attr = true;
    m_custFlipHor_attr = _custFlipHor_attr;
    }

    const XSD::boolean_& CT_ElemPropSet::get_custFlipHor_attr() const
    {    
    return m_custFlipHor_attr;
    }

    bool CT_ElemPropSet::has_custSzX_attr() const
    {    
    return m_has_custSzX_attr;
    }

    void CT_ElemPropSet::set_custSzX_attr(const XSD::int_& _custSzX_attr)
    {    
    m_has_custSzX_attr = true;
    m_custSzX_attr = _custSzX_attr;
    }

    const XSD::int_& CT_ElemPropSet::get_custSzX_attr() const
    {    
    return m_custSzX_attr;
    }

    bool CT_ElemPropSet::has_custSzY_attr() const
    {    
    return m_has_custSzY_attr;
    }

    void CT_ElemPropSet::set_custSzY_attr(const XSD::int_& _custSzY_attr)
    {    
    m_has_custSzY_attr = true;
    m_custSzY_attr = _custSzY_attr;
    }

    const XSD::int_& CT_ElemPropSet::get_custSzY_attr() const
    {    
    return m_custSzY_attr;
    }

    bool CT_ElemPropSet::has_custScaleX_attr() const
    {    
    return m_has_custScaleX_attr;
    }

    void CT_ElemPropSet::set_custScaleX_attr(const ST_PrSetCustVal& _custScaleX_attr)
    {    
    m_has_custScaleX_attr = true;
    m_custScaleX_attr = new ST_PrSetCustVal(_custScaleX_attr);
    }

    const ST_PrSetCustVal& CT_ElemPropSet::get_custScaleX_attr() const
    {    
    if (m_custScaleX_attr)
    {
        return *m_custScaleX_attr;
    }
    return ST_PrSetCustVal::default_instance();
    }

    bool CT_ElemPropSet::has_custScaleY_attr() const
    {    
    return m_has_custScaleY_attr;
    }

    void CT_ElemPropSet::set_custScaleY_attr(const ST_PrSetCustVal& _custScaleY_attr)
    {    
    m_has_custScaleY_attr = true;
    m_custScaleY_attr = new ST_PrSetCustVal(_custScaleY_attr);
    }

    const ST_PrSetCustVal& CT_ElemPropSet::get_custScaleY_attr() const
    {    
    if (m_custScaleY_attr)
    {
        return *m_custScaleY_attr;
    }
    return ST_PrSetCustVal::default_instance();
    }

    bool CT_ElemPropSet::has_custT_attr() const
    {    
    return m_has_custT_attr;
    }

    void CT_ElemPropSet::set_custT_attr(const XSD::boolean_& _custT_attr)
    {    
    m_has_custT_attr = true;
    m_custT_attr = _custT_attr;
    }

    const XSD::boolean_& CT_ElemPropSet::get_custT_attr() const
    {    
    return m_custT_attr;
    }

    bool CT_ElemPropSet::has_custLinFactX_attr() const
    {    
    return m_has_custLinFactX_attr;
    }

    void CT_ElemPropSet::set_custLinFactX_attr(const ST_PrSetCustVal& _custLinFactX_attr)
    {    
    m_has_custLinFactX_attr = true;
    m_custLinFactX_attr = new ST_PrSetCustVal(_custLinFactX_attr);
    }

    const ST_PrSetCustVal& CT_ElemPropSet::get_custLinFactX_attr() const
    {    
    if (m_custLinFactX_attr)
    {
        return *m_custLinFactX_attr;
    }
    return ST_PrSetCustVal::default_instance();
    }

    bool CT_ElemPropSet::has_custLinFactY_attr() const
    {    
    return m_has_custLinFactY_attr;
    }

    void CT_ElemPropSet::set_custLinFactY_attr(const ST_PrSetCustVal& _custLinFactY_attr)
    {    
    m_has_custLinFactY_attr = true;
    m_custLinFactY_attr = new ST_PrSetCustVal(_custLinFactY_attr);
    }

    const ST_PrSetCustVal& CT_ElemPropSet::get_custLinFactY_attr() const
    {    
    if (m_custLinFactY_attr)
    {
        return *m_custLinFactY_attr;
    }
    return ST_PrSetCustVal::default_instance();
    }

    bool CT_ElemPropSet::has_custLinFactNeighborX_attr() const
    {    
    return m_has_custLinFactNeighborX_attr;
    }

    void CT_ElemPropSet::set_custLinFactNeighborX_attr(const ST_PrSetCustVal& _custLinFactNeighborX_attr)
    {    
    m_has_custLinFactNeighborX_attr = true;
    m_custLinFactNeighborX_attr = new ST_PrSetCustVal(_custLinFactNeighborX_attr);
    }

    const ST_PrSetCustVal& CT_ElemPropSet::get_custLinFactNeighborX_attr() const
    {    
    if (m_custLinFactNeighborX_attr)
    {
        return *m_custLinFactNeighborX_attr;
    }
    return ST_PrSetCustVal::default_instance();
    }

    bool CT_ElemPropSet::has_custLinFactNeighborY_attr() const
    {    
    return m_has_custLinFactNeighborY_attr;
    }

    void CT_ElemPropSet::set_custLinFactNeighborY_attr(const ST_PrSetCustVal& _custLinFactNeighborY_attr)
    {    
    m_has_custLinFactNeighborY_attr = true;
    m_custLinFactNeighborY_attr = new ST_PrSetCustVal(_custLinFactNeighborY_attr);
    }

    const ST_PrSetCustVal& CT_ElemPropSet::get_custLinFactNeighborY_attr() const
    {    
    if (m_custLinFactNeighborY_attr)
    {
        return *m_custLinFactNeighborY_attr;
    }
    return ST_PrSetCustVal::default_instance();
    }

    bool CT_ElemPropSet::has_custRadScaleRad_attr() const
    {    
    return m_has_custRadScaleRad_attr;
    }

    void CT_ElemPropSet::set_custRadScaleRad_attr(const ST_PrSetCustVal& _custRadScaleRad_attr)
    {    
    m_has_custRadScaleRad_attr = true;
    m_custRadScaleRad_attr = new ST_PrSetCustVal(_custRadScaleRad_attr);
    }

    const ST_PrSetCustVal& CT_ElemPropSet::get_custRadScaleRad_attr() const
    {    
    if (m_custRadScaleRad_attr)
    {
        return *m_custRadScaleRad_attr;
    }
    return ST_PrSetCustVal::default_instance();
    }

    bool CT_ElemPropSet::has_custRadScaleInc_attr() const
    {    
    return m_has_custRadScaleInc_attr;
    }

    void CT_ElemPropSet::set_custRadScaleInc_attr(const ST_PrSetCustVal& _custRadScaleInc_attr)
    {    
    m_has_custRadScaleInc_attr = true;
    m_custRadScaleInc_attr = new ST_PrSetCustVal(_custRadScaleInc_attr);
    }

    const ST_PrSetCustVal& CT_ElemPropSet::get_custRadScaleInc_attr() const
    {    
    if (m_custRadScaleInc_attr)
    {
        return *m_custRadScaleInc_attr;
    }
    return ST_PrSetCustVal::default_instance();
    }

CT_ElemPropSet* CT_ElemPropSet::default_instance_ = NULL;

    // CT_OrgChart
    CT_OrgChart::CT_OrgChart()
    :m_has_val_attr(false),
    m_val_attr(false)
    {
    }
    CT_OrgChart::~CT_OrgChart()
{
    clear();    }
    void CT_OrgChart::clear()
    {    
    m_has_val_attr = false;
    m_val_attr = false;
    }

    void CT_OrgChart::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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

    const CT_OrgChart& CT_OrgChart::default_instance()
    {    
    if (!CT_OrgChart::default_instance_)
    {
        CT_OrgChart::default_instance_ = new CT_OrgChart();
    }
    return *CT_OrgChart::default_instance_;
    }

    bool CT_OrgChart::has_val_attr() const
    {    
    return m_has_val_attr;
    }

    void CT_OrgChart::set_val_attr(const XSD::boolean_& _val_attr)
    {    
    m_has_val_attr = true;
    m_val_attr = _val_attr;
    }

    const XSD::boolean_& CT_OrgChart::get_val_attr() const
    {    
    return m_val_attr;
    }

CT_OrgChart* CT_OrgChart::default_instance_ = NULL;

    // CT_ChildMax
    CT_ChildMax::CT_ChildMax()
    :m_has_val_attr(false),
    m_val_attr(NULL)
    {
    }
    CT_ChildMax::~CT_ChildMax()
{
    clear();    }
    void CT_ChildMax::clear()
    {    
    m_has_val_attr = false;
    
    if (m_val_attr)
    {
        delete m_val_attr;
        m_val_attr = NULL;
    }
    
    }

    void CT_ChildMax::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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

    const CT_ChildMax& CT_ChildMax::default_instance()
    {    
    if (!CT_ChildMax::default_instance_)
    {
        CT_ChildMax::default_instance_ = new CT_ChildMax();
    }
    return *CT_ChildMax::default_instance_;
    }

    bool CT_ChildMax::has_val_attr() const
    {    
    return m_has_val_attr;
    }

    void CT_ChildMax::set_val_attr(const ST_NodeCount& _val_attr)
    {    
    m_has_val_attr = true;
    m_val_attr = new ST_NodeCount(_val_attr);
    }

    const ST_NodeCount& CT_ChildMax::get_val_attr() const
    {    
    if (m_val_attr)
    {
        return *m_val_attr;
    }
    return ST_NodeCount::default_instance();
    }

CT_ChildMax* CT_ChildMax::default_instance_ = NULL;

    // CT_ChildPref
    CT_ChildPref::CT_ChildPref()
    :m_has_val_attr(false),
    m_val_attr(NULL)
    {
    }
    CT_ChildPref::~CT_ChildPref()
{
    clear();    }
    void CT_ChildPref::clear()
    {    
    m_has_val_attr = false;
    
    if (m_val_attr)
    {
        delete m_val_attr;
        m_val_attr = NULL;
    }
    
    }

    void CT_ChildPref::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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

    const CT_ChildPref& CT_ChildPref::default_instance()
    {    
    if (!CT_ChildPref::default_instance_)
    {
        CT_ChildPref::default_instance_ = new CT_ChildPref();
    }
    return *CT_ChildPref::default_instance_;
    }

    bool CT_ChildPref::has_val_attr() const
    {    
    return m_has_val_attr;
    }

    void CT_ChildPref::set_val_attr(const ST_NodeCount& _val_attr)
    {    
    m_has_val_attr = true;
    m_val_attr = new ST_NodeCount(_val_attr);
    }

    const ST_NodeCount& CT_ChildPref::get_val_attr() const
    {    
    if (m_val_attr)
    {
        return *m_val_attr;
    }
    return ST_NodeCount::default_instance();
    }

CT_ChildPref* CT_ChildPref::default_instance_ = NULL;

    // CT_BulletEnabled
    CT_BulletEnabled::CT_BulletEnabled()
    :m_has_val_attr(false),
    m_val_attr(false)
    {
    }
    CT_BulletEnabled::~CT_BulletEnabled()
{
    clear();    }
    void CT_BulletEnabled::clear()
    {    
    m_has_val_attr = false;
    m_val_attr = false;
    }

    void CT_BulletEnabled::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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

    const CT_BulletEnabled& CT_BulletEnabled::default_instance()
    {    
    if (!CT_BulletEnabled::default_instance_)
    {
        CT_BulletEnabled::default_instance_ = new CT_BulletEnabled();
    }
    return *CT_BulletEnabled::default_instance_;
    }

    bool CT_BulletEnabled::has_val_attr() const
    {    
    return m_has_val_attr;
    }

    void CT_BulletEnabled::set_val_attr(const XSD::boolean_& _val_attr)
    {    
    m_has_val_attr = true;
    m_val_attr = _val_attr;
    }

    const XSD::boolean_& CT_BulletEnabled::get_val_attr() const
    {    
    return m_val_attr;
    }

CT_BulletEnabled* CT_BulletEnabled::default_instance_ = NULL;

    // CT_Direction
    CT_Direction::CT_Direction()
    :m_has_val_attr(false),
    m_val_attr(NULL)
    {
    }
    CT_Direction::~CT_Direction()
{
    clear();    }
    void CT_Direction::clear()
    {    
    m_has_val_attr = false;
    
    if (m_val_attr)
    {
        delete m_val_attr;
        m_val_attr = NULL;
    }
    
    }

    void CT_Direction::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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

    const CT_Direction& CT_Direction::default_instance()
    {    
    if (!CT_Direction::default_instance_)
    {
        CT_Direction::default_instance_ = new CT_Direction();
    }
    return *CT_Direction::default_instance_;
    }

    bool CT_Direction::has_val_attr() const
    {    
    return m_has_val_attr;
    }

    void CT_Direction::set_val_attr(const ST_Direction& _val_attr)
    {    
    m_has_val_attr = true;
    m_val_attr = new ST_Direction(_val_attr);
    }

    const ST_Direction& CT_Direction::get_val_attr() const
    {    
    if (m_val_attr)
    {
        return *m_val_attr;
    }
    return ST_Direction::default_instance();
    }

CT_Direction* CT_Direction::default_instance_ = NULL;

    // CT_HierBranchStyle
    CT_HierBranchStyle::CT_HierBranchStyle()
    :m_has_val_attr(false),
    m_val_attr(NULL)
    {
    }
    CT_HierBranchStyle::~CT_HierBranchStyle()
{
    clear();    }
    void CT_HierBranchStyle::clear()
    {    
    m_has_val_attr = false;
    
    if (m_val_attr)
    {
        delete m_val_attr;
        m_val_attr = NULL;
    }
    
    }

    void CT_HierBranchStyle::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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

    const CT_HierBranchStyle& CT_HierBranchStyle::default_instance()
    {    
    if (!CT_HierBranchStyle::default_instance_)
    {
        CT_HierBranchStyle::default_instance_ = new CT_HierBranchStyle();
    }
    return *CT_HierBranchStyle::default_instance_;
    }

    bool CT_HierBranchStyle::has_val_attr() const
    {    
    return m_has_val_attr;
    }

    void CT_HierBranchStyle::set_val_attr(const ST_HierBranchStyle& _val_attr)
    {    
    m_has_val_attr = true;
    m_val_attr = new ST_HierBranchStyle(_val_attr);
    }

    const ST_HierBranchStyle& CT_HierBranchStyle::get_val_attr() const
    {    
    if (m_val_attr)
    {
        return *m_val_attr;
    }
    return ST_HierBranchStyle::default_instance();
    }

CT_HierBranchStyle* CT_HierBranchStyle::default_instance_ = NULL;

    // CT_AnimOne
    CT_AnimOne::CT_AnimOne()
    :m_has_val_attr(false),
    m_val_attr(NULL)
    {
    }
    CT_AnimOne::~CT_AnimOne()
{
    clear();    }
    void CT_AnimOne::clear()
    {    
    m_has_val_attr = false;
    
    if (m_val_attr)
    {
        delete m_val_attr;
        m_val_attr = NULL;
    }
    
    }

    void CT_AnimOne::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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

    const CT_AnimOne& CT_AnimOne::default_instance()
    {    
    if (!CT_AnimOne::default_instance_)
    {
        CT_AnimOne::default_instance_ = new CT_AnimOne();
    }
    return *CT_AnimOne::default_instance_;
    }

    bool CT_AnimOne::has_val_attr() const
    {    
    return m_has_val_attr;
    }

    void CT_AnimOne::set_val_attr(const ST_AnimOneStr& _val_attr)
    {    
    m_has_val_attr = true;
    m_val_attr = new ST_AnimOneStr(_val_attr);
    }

    const ST_AnimOneStr& CT_AnimOne::get_val_attr() const
    {    
    if (m_val_attr)
    {
        return *m_val_attr;
    }
    return ST_AnimOneStr::default_instance();
    }

CT_AnimOne* CT_AnimOne::default_instance_ = NULL;

    // CT_AnimLvl
    CT_AnimLvl::CT_AnimLvl()
    :m_has_val_attr(false),
    m_val_attr(NULL)
    {
    }
    CT_AnimLvl::~CT_AnimLvl()
{
    clear();    }
    void CT_AnimLvl::clear()
    {    
    m_has_val_attr = false;
    
    if (m_val_attr)
    {
        delete m_val_attr;
        m_val_attr = NULL;
    }
    
    }

    void CT_AnimLvl::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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

    const CT_AnimLvl& CT_AnimLvl::default_instance()
    {    
    if (!CT_AnimLvl::default_instance_)
    {
        CT_AnimLvl::default_instance_ = new CT_AnimLvl();
    }
    return *CT_AnimLvl::default_instance_;
    }

    bool CT_AnimLvl::has_val_attr() const
    {    
    return m_has_val_attr;
    }

    void CT_AnimLvl::set_val_attr(const ST_AnimLvlStr& _val_attr)
    {    
    m_has_val_attr = true;
    m_val_attr = new ST_AnimLvlStr(_val_attr);
    }

    const ST_AnimLvlStr& CT_AnimLvl::get_val_attr() const
    {    
    if (m_val_attr)
    {
        return *m_val_attr;
    }
    return ST_AnimLvlStr::default_instance();
    }

CT_AnimLvl* CT_AnimLvl::default_instance_ = NULL;

    // CT_ResizeHandles
    CT_ResizeHandles::CT_ResizeHandles()
    :m_has_val_attr(false),
    m_val_attr(NULL)
    {
    }
    CT_ResizeHandles::~CT_ResizeHandles()
{
    clear();    }
    void CT_ResizeHandles::clear()
    {    
    m_has_val_attr = false;
    
    if (m_val_attr)
    {
        delete m_val_attr;
        m_val_attr = NULL;
    }
    
    }

    void CT_ResizeHandles::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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

    const CT_ResizeHandles& CT_ResizeHandles::default_instance()
    {    
    if (!CT_ResizeHandles::default_instance_)
    {
        CT_ResizeHandles::default_instance_ = new CT_ResizeHandles();
    }
    return *CT_ResizeHandles::default_instance_;
    }

    bool CT_ResizeHandles::has_val_attr() const
    {    
    return m_has_val_attr;
    }

    void CT_ResizeHandles::set_val_attr(const ST_ResizeHandlesStr& _val_attr)
    {    
    m_has_val_attr = true;
    m_val_attr = new ST_ResizeHandlesStr(_val_attr);
    }

    const ST_ResizeHandlesStr& CT_ResizeHandles::get_val_attr() const
    {    
    if (m_val_attr)
    {
        return *m_val_attr;
    }
    return ST_ResizeHandlesStr::default_instance();
    }

CT_ResizeHandles* CT_ResizeHandles::default_instance_ = NULL;

    // CT_LayoutVariablePropertySet
    CT_LayoutVariablePropertySet::CT_LayoutVariablePropertySet()
    :m_has_orgChart(false),
    m_orgChart(NULL),
    m_has_chMax(false),
    m_chMax(NULL),
    m_has_chPref(false),
    m_chPref(NULL),
    m_has_bulletEnabled(false),
    m_bulletEnabled(NULL),
    m_has_dir(false),
    m_dir(NULL),
    m_has_hierBranch(false),
    m_hierBranch(NULL),
    m_has_animOne(false),
    m_animOne(NULL),
    m_has_animLvl(false),
    m_animLvl(NULL),
    m_has_resizeHandles(false),
    m_resizeHandles(NULL)
    {
    }
    CT_LayoutVariablePropertySet::~CT_LayoutVariablePropertySet()
{
    clear();    }
    bool CT_LayoutVariablePropertySet::has_orgChart() const
    {    
    return m_has_orgChart;
    }

    CT_OrgChart* CT_LayoutVariablePropertySet::mutable_orgChart()
    {    
    m_has_orgChart = true;
    if (!m_orgChart)
    {
        m_orgChart = new CT_OrgChart();
    }
    return m_orgChart;
    }

    const CT_OrgChart& CT_LayoutVariablePropertySet::get_orgChart() const
    {    
    if (m_orgChart)
    {
        return *m_orgChart;
    }
    return CT_OrgChart::default_instance();
    }

    bool CT_LayoutVariablePropertySet::has_chMax() const
    {    
    return m_has_chMax;
    }

    CT_ChildMax* CT_LayoutVariablePropertySet::mutable_chMax()
    {    
    m_has_chMax = true;
    if (!m_chMax)
    {
        m_chMax = new CT_ChildMax();
    }
    return m_chMax;
    }

    const CT_ChildMax& CT_LayoutVariablePropertySet::get_chMax() const
    {    
    if (m_chMax)
    {
        return *m_chMax;
    }
    return CT_ChildMax::default_instance();
    }

    bool CT_LayoutVariablePropertySet::has_chPref() const
    {    
    return m_has_chPref;
    }

    CT_ChildPref* CT_LayoutVariablePropertySet::mutable_chPref()
    {    
    m_has_chPref = true;
    if (!m_chPref)
    {
        m_chPref = new CT_ChildPref();
    }
    return m_chPref;
    }

    const CT_ChildPref& CT_LayoutVariablePropertySet::get_chPref() const
    {    
    if (m_chPref)
    {
        return *m_chPref;
    }
    return CT_ChildPref::default_instance();
    }

    bool CT_LayoutVariablePropertySet::has_bulletEnabled() const
    {    
    return m_has_bulletEnabled;
    }

    CT_BulletEnabled* CT_LayoutVariablePropertySet::mutable_bulletEnabled()
    {    
    m_has_bulletEnabled = true;
    if (!m_bulletEnabled)
    {
        m_bulletEnabled = new CT_BulletEnabled();
    }
    return m_bulletEnabled;
    }

    const CT_BulletEnabled& CT_LayoutVariablePropertySet::get_bulletEnabled() const
    {    
    if (m_bulletEnabled)
    {
        return *m_bulletEnabled;
    }
    return CT_BulletEnabled::default_instance();
    }

    bool CT_LayoutVariablePropertySet::has_dir() const
    {    
    return m_has_dir;
    }

    CT_Direction* CT_LayoutVariablePropertySet::mutable_dir()
    {    
    m_has_dir = true;
    if (!m_dir)
    {
        m_dir = new CT_Direction();
    }
    return m_dir;
    }

    const CT_Direction& CT_LayoutVariablePropertySet::get_dir() const
    {    
    if (m_dir)
    {
        return *m_dir;
    }
    return CT_Direction::default_instance();
    }

    bool CT_LayoutVariablePropertySet::has_hierBranch() const
    {    
    return m_has_hierBranch;
    }

    CT_HierBranchStyle* CT_LayoutVariablePropertySet::mutable_hierBranch()
    {    
    m_has_hierBranch = true;
    if (!m_hierBranch)
    {
        m_hierBranch = new CT_HierBranchStyle();
    }
    return m_hierBranch;
    }

    const CT_HierBranchStyle& CT_LayoutVariablePropertySet::get_hierBranch() const
    {    
    if (m_hierBranch)
    {
        return *m_hierBranch;
    }
    return CT_HierBranchStyle::default_instance();
    }

    bool CT_LayoutVariablePropertySet::has_animOne() const
    {    
    return m_has_animOne;
    }

    CT_AnimOne* CT_LayoutVariablePropertySet::mutable_animOne()
    {    
    m_has_animOne = true;
    if (!m_animOne)
    {
        m_animOne = new CT_AnimOne();
    }
    return m_animOne;
    }

    const CT_AnimOne& CT_LayoutVariablePropertySet::get_animOne() const
    {    
    if (m_animOne)
    {
        return *m_animOne;
    }
    return CT_AnimOne::default_instance();
    }

    bool CT_LayoutVariablePropertySet::has_animLvl() const
    {    
    return m_has_animLvl;
    }

    CT_AnimLvl* CT_LayoutVariablePropertySet::mutable_animLvl()
    {    
    m_has_animLvl = true;
    if (!m_animLvl)
    {
        m_animLvl = new CT_AnimLvl();
    }
    return m_animLvl;
    }

    const CT_AnimLvl& CT_LayoutVariablePropertySet::get_animLvl() const
    {    
    if (m_animLvl)
    {
        return *m_animLvl;
    }
    return CT_AnimLvl::default_instance();
    }

    bool CT_LayoutVariablePropertySet::has_resizeHandles() const
    {    
    return m_has_resizeHandles;
    }

    CT_ResizeHandles* CT_LayoutVariablePropertySet::mutable_resizeHandles()
    {    
    m_has_resizeHandles = true;
    if (!m_resizeHandles)
    {
        m_resizeHandles = new CT_ResizeHandles();
    }
    return m_resizeHandles;
    }

    const CT_ResizeHandles& CT_LayoutVariablePropertySet::get_resizeHandles() const
    {    
    if (m_resizeHandles)
    {
        return *m_resizeHandles;
    }
    return CT_ResizeHandles::default_instance();
    }

    void CT_LayoutVariablePropertySet::clear()
    {    
    m_has_orgChart = false;
    
    if (m_orgChart)
    {
        delete m_orgChart;
        m_orgChart = NULL;
    }
    
    
    m_has_chMax = false;
    
    if (m_chMax)
    {
        delete m_chMax;
        m_chMax = NULL;
    }
    
    
    m_has_chPref = false;
    
    if (m_chPref)
    {
        delete m_chPref;
        m_chPref = NULL;
    }
    
    
    m_has_bulletEnabled = false;
    
    if (m_bulletEnabled)
    {
        delete m_bulletEnabled;
        m_bulletEnabled = NULL;
    }
    
    
    m_has_dir = false;
    
    if (m_dir)
    {
        delete m_dir;
        m_dir = NULL;
    }
    
    
    m_has_hierBranch = false;
    
    if (m_hierBranch)
    {
        delete m_hierBranch;
        m_hierBranch = NULL;
    }
    
    
    m_has_animOne = false;
    
    if (m_animOne)
    {
        delete m_animOne;
        m_animOne = NULL;
    }
    
    
    m_has_animLvl = false;
    
    if (m_animLvl)
    {
        delete m_animLvl;
        m_animLvl = NULL;
    }
    
    
    m_has_resizeHandles = false;
    
    if (m_resizeHandles)
    {
        delete m_resizeHandles;
        m_resizeHandles = NULL;
    }
    
    }

    void CT_LayoutVariablePropertySet::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
            _outStream << ">";
            
    if (m_has_orgChart)
    {
        m_orgChart->toXmlElem("diagram:orgChart", "", _outStream);;
    }
    
    if (m_has_chMax)
    {
        m_chMax->toXmlElem("diagram:chMax", "", _outStream);;
    }
    
    if (m_has_chPref)
    {
        m_chPref->toXmlElem("diagram:chPref", "", _outStream);;
    }
    
    if (m_has_bulletEnabled)
    {
        m_bulletEnabled->toXmlElem("diagram:bulletEnabled", "", _outStream);;
    }
    
    if (m_has_dir)
    {
        m_dir->toXmlElem("diagram:dir", "", _outStream);;
    }
    
    if (m_has_hierBranch)
    {
        m_hierBranch->toXmlElem("diagram:hierBranch", "", _outStream);;
    }
    
    if (m_has_animOne)
    {
        m_animOne->toXmlElem("diagram:animOne", "", _outStream);;
    }
    
    if (m_has_animLvl)
    {
        m_animLvl->toXmlElem("diagram:animLvl", "", _outStream);;
    }
    
    if (m_has_resizeHandles)
    {
        m_resizeHandles->toXmlElem("diagram:resizeHandles", "", _outStream);;
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_LayoutVariablePropertySet& CT_LayoutVariablePropertySet::default_instance()
    {    
    if (!CT_LayoutVariablePropertySet::default_instance_)
    {
        CT_LayoutVariablePropertySet::default_instance_ = new CT_LayoutVariablePropertySet();
    }
    return *CT_LayoutVariablePropertySet::default_instance_;
    }

CT_LayoutVariablePropertySet* CT_LayoutVariablePropertySet::default_instance_ = NULL;

    // CT_SDName
    CT_SDName::CT_SDName()
    :m_has_lang_attr(false),
    m_lang_attr(""),
    m_has_val_attr(false),
    m_val_attr("")
    {
    }
    CT_SDName::~CT_SDName()
{
    clear();    }
    void CT_SDName::clear()
    {    
    m_has_lang_attr = false;
    m_lang_attr.clear();
    
    m_has_val_attr = false;
    m_val_attr.clear();
    }

    void CT_SDName::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
    if (m_has_lang_attr)
    {
        _outStream << " " << "lang" << "=\"" << m_lang_attr << "\"";
    }
    
    
    if (m_has_val_attr)
    {
        _outStream << " " << "val" << "=\"" << m_val_attr << "\"";
    }
    
            _outStream << ">";
            
            _outStream << "</" << _elemName << ">";
                }

    const CT_SDName& CT_SDName::default_instance()
    {    
    if (!CT_SDName::default_instance_)
    {
        CT_SDName::default_instance_ = new CT_SDName();
    }
    return *CT_SDName::default_instance_;
    }

    bool CT_SDName::has_lang_attr() const
    {    
    return m_has_lang_attr;
    }

    void CT_SDName::set_lang_attr(const XSD::string_& _lang_attr)
    {    
    m_has_lang_attr = true;
    m_lang_attr = _lang_attr;
    }

    const XSD::string_& CT_SDName::get_lang_attr() const
    {    
    return m_lang_attr;
    }

    bool CT_SDName::has_val_attr() const
    {    
    return m_has_val_attr;
    }

    void CT_SDName::set_val_attr(const XSD::string_& _val_attr)
    {    
    m_has_val_attr = true;
    m_val_attr = _val_attr;
    }

    const XSD::string_& CT_SDName::get_val_attr() const
    {    
    return m_val_attr;
    }

CT_SDName* CT_SDName::default_instance_ = NULL;

    // CT_SDDescription
    CT_SDDescription::CT_SDDescription()
    :m_has_lang_attr(false),
    m_lang_attr(""),
    m_has_val_attr(false),
    m_val_attr("")
    {
    }
    CT_SDDescription::~CT_SDDescription()
{
    clear();    }
    void CT_SDDescription::clear()
    {    
    m_has_lang_attr = false;
    m_lang_attr.clear();
    
    m_has_val_attr = false;
    m_val_attr.clear();
    }

    void CT_SDDescription::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
    if (m_has_lang_attr)
    {
        _outStream << " " << "lang" << "=\"" << m_lang_attr << "\"";
    }
    
    
    if (m_has_val_attr)
    {
        _outStream << " " << "val" << "=\"" << m_val_attr << "\"";
    }
    
            _outStream << ">";
            
            _outStream << "</" << _elemName << ">";
                }

    const CT_SDDescription& CT_SDDescription::default_instance()
    {    
    if (!CT_SDDescription::default_instance_)
    {
        CT_SDDescription::default_instance_ = new CT_SDDescription();
    }
    return *CT_SDDescription::default_instance_;
    }

    bool CT_SDDescription::has_lang_attr() const
    {    
    return m_has_lang_attr;
    }

    void CT_SDDescription::set_lang_attr(const XSD::string_& _lang_attr)
    {    
    m_has_lang_attr = true;
    m_lang_attr = _lang_attr;
    }

    const XSD::string_& CT_SDDescription::get_lang_attr() const
    {    
    return m_lang_attr;
    }

    bool CT_SDDescription::has_val_attr() const
    {    
    return m_has_val_attr;
    }

    void CT_SDDescription::set_val_attr(const XSD::string_& _val_attr)
    {    
    m_has_val_attr = true;
    m_val_attr = _val_attr;
    }

    const XSD::string_& CT_SDDescription::get_val_attr() const
    {    
    return m_val_attr;
    }

CT_SDDescription* CT_SDDescription::default_instance_ = NULL;

    // CT_SDCategory
    CT_SDCategory::CT_SDCategory()
    :m_has_type_attr(false),
    m_type_attr(""),
    m_has_pri_attr(false),
    m_pri_attr(0)
    {
    }
    CT_SDCategory::~CT_SDCategory()
{
    clear();    }
    void CT_SDCategory::clear()
    {    
    m_has_type_attr = false;
    m_type_attr.clear();
    
    m_has_pri_attr = false;
    m_pri_attr = 0;
    }

    void CT_SDCategory::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
    if (m_has_type_attr)
    {
        _outStream << " " << "type" << "=\"" << m_type_attr << "\"";
    }
    
    
    if (m_has_pri_attr)
    {
        _outStream << " " << "pri" << "=\"" << m_pri_attr << "\"";
    }
    
            _outStream << ">";
            
            _outStream << "</" << _elemName << ">";
                }

    const CT_SDCategory& CT_SDCategory::default_instance()
    {    
    if (!CT_SDCategory::default_instance_)
    {
        CT_SDCategory::default_instance_ = new CT_SDCategory();
    }
    return *CT_SDCategory::default_instance_;
    }

    bool CT_SDCategory::has_type_attr() const
    {    
    return m_has_type_attr;
    }

    void CT_SDCategory::set_type_attr(const XSD::anyURI_& _type_attr)
    {    
    m_has_type_attr = true;
    m_type_attr = _type_attr;
    }

    const XSD::anyURI_& CT_SDCategory::get_type_attr() const
    {    
    return m_type_attr;
    }

    bool CT_SDCategory::has_pri_attr() const
    {    
    return m_has_pri_attr;
    }

    void CT_SDCategory::set_pri_attr(const XSD::unsignedInt_& _pri_attr)
    {    
    m_has_pri_attr = true;
    m_pri_attr = _pri_attr;
    }

    const XSD::unsignedInt_& CT_SDCategory::get_pri_attr() const
    {    
    return m_pri_attr;
    }

CT_SDCategory* CT_SDCategory::default_instance_ = NULL;

    // CT_SDCategories
    CT_SDCategories::CT_SDCategories()

    {
    }
    CT_SDCategories::~CT_SDCategories()
{
    clear();    }
    CT_SDCategory* CT_SDCategories::add_cat()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_SDCategory* pNewChild = pChildGroup->mutable_cat();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    void CT_SDCategories::clear()
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

    void CT_SDCategories::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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
            if ((*iter)->has_cat())
            {
                (*iter)->get_cat().toXmlElem("diagram:cat", "", _outStream);
            }
        }
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_SDCategories& CT_SDCategories::default_instance()
    {    
    if (!CT_SDCategories::default_instance_)
    {
        CT_SDCategories::default_instance_ = new CT_SDCategories();
    }
    return *CT_SDCategories::default_instance_;
    }


    // CT_SDCategories::ChildGroup_1
    CT_SDCategories::ChildGroup_1::ChildGroup_1()
    :m_has_cat(false),
    m_cat(NULL)
    {
    }
    bool CT_SDCategories::ChildGroup_1::has_cat() const
    {    
    return m_has_cat;
    }

    CT_SDCategory* CT_SDCategories::ChildGroup_1::mutable_cat()
    {    
    
    m_has_cat = true;
    if (!m_cat)
    {
        m_cat = new CT_SDCategory();
    }
    return m_cat;
    }

    const CT_SDCategory& CT_SDCategories::ChildGroup_1::get_cat() const
    {    
    if (m_cat)
    {
        return *m_cat;
    }
    return CT_SDCategory::default_instance();
    }

CT_SDCategories* CT_SDCategories::default_instance_ = NULL;

    // CT_TextProps
    CT_TextProps::CT_TextProps()
    :m_has_a_sp3d(false),
    m_a_sp3d(NULL),
    m_has_a_flatTx(false),
    m_a_flatTx(NULL)
    {
    }
    CT_TextProps::~CT_TextProps()
{
    clear();    }
    bool CT_TextProps::has_a_sp3d() const
    {    
    return m_has_a_sp3d;
    }

    ns_a::CT_Shape3D* CT_TextProps::mutable_a_sp3d()
    {    
    
    m_has_a_flatTx = false;
    
    if (m_a_flatTx)
    {
        delete m_a_flatTx;
        m_a_flatTx = NULL;
    }
    ;
    
    m_has_a_sp3d = true;
    if (!m_a_sp3d)
    {
        m_a_sp3d = new ns_a::CT_Shape3D();
    }
    return m_a_sp3d;
    }

    const ns_a::CT_Shape3D& CT_TextProps::get_a_sp3d() const
    {    
    if (m_a_sp3d)
    {
        return *m_a_sp3d;
    }
    return ns_a::CT_Shape3D::default_instance();
    }

    bool CT_TextProps::has_a_flatTx() const
    {    
    return m_has_a_flatTx;
    }

    ns_a::CT_FlatText* CT_TextProps::mutable_a_flatTx()
    {    
    
    m_has_a_sp3d = false;
    
    if (m_a_sp3d)
    {
        delete m_a_sp3d;
        m_a_sp3d = NULL;
    }
    ;
    
    m_has_a_flatTx = true;
    if (!m_a_flatTx)
    {
        m_a_flatTx = new ns_a::CT_FlatText();
    }
    return m_a_flatTx;
    }

    const ns_a::CT_FlatText& CT_TextProps::get_a_flatTx() const
    {    
    if (m_a_flatTx)
    {
        return *m_a_flatTx;
    }
    return ns_a::CT_FlatText::default_instance();
    }

    void CT_TextProps::clear()
    {    
    m_has_a_sp3d = false;
    
    if (m_a_sp3d)
    {
        delete m_a_sp3d;
        m_a_sp3d = NULL;
    }
    
    
    m_has_a_flatTx = false;
    
    if (m_a_flatTx)
    {
        delete m_a_flatTx;
        m_a_flatTx = NULL;
    }
    
    }

    void CT_TextProps::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
            _outStream << ">";
            
    if (m_has_a_sp3d)
    {
        m_a_sp3d->toXmlElem("a:sp3d", "", _outStream);;
    }
    
    if (m_has_a_flatTx)
    {
        m_a_flatTx->toXmlElem("a:flatTx", "", _outStream);;
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_TextProps& CT_TextProps::default_instance()
    {    
    if (!CT_TextProps::default_instance_)
    {
        CT_TextProps::default_instance_ = new CT_TextProps();
    }
    return *CT_TextProps::default_instance_;
    }

CT_TextProps* CT_TextProps::default_instance_ = NULL;

    // CT_StyleLabel
    CT_StyleLabel::CT_StyleLabel()
    :m_has_scene3d(false),
    m_scene3d(NULL),
    m_has_sp3d(false),
    m_sp3d(NULL),
    m_has_txPr(false),
    m_txPr(NULL),
    m_has_style(false),
    m_style(NULL),
    m_has_extLst(false),
    m_extLst(NULL),
    m_has_name_attr(false),
    m_name_attr("")
    {
    }
    CT_StyleLabel::~CT_StyleLabel()
{
    clear();    }
    bool CT_StyleLabel::has_scene3d() const
    {    
    return m_has_scene3d;
    }

    ns_a::CT_Scene3D* CT_StyleLabel::mutable_scene3d()
    {    
    m_has_scene3d = true;
    if (!m_scene3d)
    {
        m_scene3d = new ns_a::CT_Scene3D();
    }
    return m_scene3d;
    }

    const ns_a::CT_Scene3D& CT_StyleLabel::get_scene3d() const
    {    
    if (m_scene3d)
    {
        return *m_scene3d;
    }
    return ns_a::CT_Scene3D::default_instance();
    }

    bool CT_StyleLabel::has_sp3d() const
    {    
    return m_has_sp3d;
    }

    ns_a::CT_Shape3D* CT_StyleLabel::mutable_sp3d()
    {    
    m_has_sp3d = true;
    if (!m_sp3d)
    {
        m_sp3d = new ns_a::CT_Shape3D();
    }
    return m_sp3d;
    }

    const ns_a::CT_Shape3D& CT_StyleLabel::get_sp3d() const
    {    
    if (m_sp3d)
    {
        return *m_sp3d;
    }
    return ns_a::CT_Shape3D::default_instance();
    }

    bool CT_StyleLabel::has_txPr() const
    {    
    return m_has_txPr;
    }

    CT_TextProps* CT_StyleLabel::mutable_txPr()
    {    
    m_has_txPr = true;
    if (!m_txPr)
    {
        m_txPr = new CT_TextProps();
    }
    return m_txPr;
    }

    const CT_TextProps& CT_StyleLabel::get_txPr() const
    {    
    if (m_txPr)
    {
        return *m_txPr;
    }
    return CT_TextProps::default_instance();
    }

    bool CT_StyleLabel::has_style() const
    {    
    return m_has_style;
    }

    ns_a::CT_ShapeStyle* CT_StyleLabel::mutable_style()
    {    
    m_has_style = true;
    if (!m_style)
    {
        m_style = new ns_a::CT_ShapeStyle();
    }
    return m_style;
    }

    const ns_a::CT_ShapeStyle& CT_StyleLabel::get_style() const
    {    
    if (m_style)
    {
        return *m_style;
    }
    return ns_a::CT_ShapeStyle::default_instance();
    }

    bool CT_StyleLabel::has_extLst() const
    {    
    return m_has_extLst;
    }

    ns_a::CT_OfficeArtExtensionList* CT_StyleLabel::mutable_extLst()
    {    
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new ns_a::CT_OfficeArtExtensionList();
    }
    return m_extLst;
    }

    const ns_a::CT_OfficeArtExtensionList& CT_StyleLabel::get_extLst() const
    {    
    if (m_extLst)
    {
        return *m_extLst;
    }
    return ns_a::CT_OfficeArtExtensionList::default_instance();
    }

    void CT_StyleLabel::clear()
    {    
    m_has_name_attr = false;
    m_name_attr.clear();
    
    m_has_scene3d = false;
    
    if (m_scene3d)
    {
        delete m_scene3d;
        m_scene3d = NULL;
    }
    
    
    m_has_sp3d = false;
    
    if (m_sp3d)
    {
        delete m_sp3d;
        m_sp3d = NULL;
    }
    
    
    m_has_txPr = false;
    
    if (m_txPr)
    {
        delete m_txPr;
        m_txPr = NULL;
    }
    
    
    m_has_style = false;
    
    if (m_style)
    {
        delete m_style;
        m_style = NULL;
    }
    
    
    m_has_extLst = false;
    
    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }
    
    }

    void CT_StyleLabel::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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
            
    if (m_has_scene3d)
    {
        m_scene3d->toXmlElem("diagram:scene3d", "", _outStream);;
    }
    
    if (m_has_sp3d)
    {
        m_sp3d->toXmlElem("diagram:sp3d", "", _outStream);;
    }
    
    if (m_has_txPr)
    {
        m_txPr->toXmlElem("diagram:txPr", "", _outStream);;
    }
    
    if (m_has_style)
    {
        m_style->toXmlElem("diagram:style", "", _outStream);;
    }
    
    if (m_has_extLst)
    {
        m_extLst->toXmlElem("diagram:extLst", "", _outStream);;
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_StyleLabel& CT_StyleLabel::default_instance()
    {    
    if (!CT_StyleLabel::default_instance_)
    {
        CT_StyleLabel::default_instance_ = new CT_StyleLabel();
    }
    return *CT_StyleLabel::default_instance_;
    }

    bool CT_StyleLabel::has_name_attr() const
    {    
    return m_has_name_attr;
    }

    void CT_StyleLabel::set_name_attr(const XSD::string_& _name_attr)
    {    
    m_has_name_attr = true;
    m_name_attr = _name_attr;
    }

    const XSD::string_& CT_StyleLabel::get_name_attr() const
    {    
    return m_name_attr;
    }

CT_StyleLabel* CT_StyleLabel::default_instance_ = NULL;

    // CT_StyleDefinition
    CT_StyleDefinition::CT_StyleDefinition()
    :m_has_uniqueId_attr(false),
    m_uniqueId_attr(""),
    m_has_minVer_attr(false),
    m_minVer_attr("")
    {
    }
    CT_StyleDefinition::~CT_StyleDefinition()
{
    clear();    }
    CT_SDName* CT_StyleDefinition::add_title()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_SDName* pNewChild = pChildGroup->mutable_title();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_SDDescription* CT_StyleDefinition::add_desc()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_SDDescription* pNewChild = pChildGroup->mutable_desc();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_SDCategories* CT_StyleDefinition::add_catLst()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_SDCategories* pNewChild = pChildGroup->mutable_catLst();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_a::CT_Scene3D* CT_StyleDefinition::add_scene3d()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_a::CT_Scene3D* pNewChild = pChildGroup->mutable_scene3d();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_StyleLabel* CT_StyleDefinition::add_styleLbl()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_StyleLabel* pNewChild = pChildGroup->mutable_styleLbl();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_a::CT_OfficeArtExtensionList* CT_StyleDefinition::add_extLst()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_a::CT_OfficeArtExtensionList* pNewChild = pChildGroup->mutable_extLst();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    void CT_StyleDefinition::clear()
    {    
    m_has_uniqueId_attr = false;
    m_uniqueId_attr.clear();
    
    m_has_minVer_attr = false;
    m_minVer_attr.clear();
    
    {
        vector<ChildGroup_1*>::iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_1.clear();
    }
    }

    void CT_StyleDefinition::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
    if (m_has_uniqueId_attr)
    {
        _outStream << " " << "uniqueId" << "=\"" << m_uniqueId_attr << "\"";
    }
    
    
    if (m_has_minVer_attr)
    {
        _outStream << " " << "minVer" << "=\"" << m_minVer_attr << "\"";
    }
    
            _outStream << ">";
            
    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_title())
            {
                (*iter)->get_title().toXmlElem("diagram:title", "", _outStream);
            }
            else if ((*iter)->has_desc())
            {
                (*iter)->get_desc().toXmlElem("diagram:desc", "", _outStream);
            }
            else if ((*iter)->has_catLst())
            {
                (*iter)->get_catLst().toXmlElem("diagram:catLst", "", _outStream);
            }
            else if ((*iter)->has_scene3d())
            {
                (*iter)->get_scene3d().toXmlElem("diagram:scene3d", "", _outStream);
            }
            else if ((*iter)->has_styleLbl())
            {
                (*iter)->get_styleLbl().toXmlElem("diagram:styleLbl", "", _outStream);
            }
            else if ((*iter)->has_extLst())
            {
                (*iter)->get_extLst().toXmlElem("diagram:extLst", "", _outStream);
            }
        }
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_StyleDefinition& CT_StyleDefinition::default_instance()
    {    
    if (!CT_StyleDefinition::default_instance_)
    {
        CT_StyleDefinition::default_instance_ = new CT_StyleDefinition();
    }
    return *CT_StyleDefinition::default_instance_;
    }

    bool CT_StyleDefinition::has_uniqueId_attr() const
    {    
    return m_has_uniqueId_attr;
    }

    void CT_StyleDefinition::set_uniqueId_attr(const XSD::string_& _uniqueId_attr)
    {    
    m_has_uniqueId_attr = true;
    m_uniqueId_attr = _uniqueId_attr;
    }

    const XSD::string_& CT_StyleDefinition::get_uniqueId_attr() const
    {    
    return m_uniqueId_attr;
    }

    bool CT_StyleDefinition::has_minVer_attr() const
    {    
    return m_has_minVer_attr;
    }

    void CT_StyleDefinition::set_minVer_attr(const XSD::string_& _minVer_attr)
    {    
    m_has_minVer_attr = true;
    m_minVer_attr = _minVer_attr;
    }

    const XSD::string_& CT_StyleDefinition::get_minVer_attr() const
    {    
    return m_minVer_attr;
    }


    // CT_StyleDefinition::ChildGroup_1
    CT_StyleDefinition::ChildGroup_1::ChildGroup_1()
    :m_has_title(false),
    m_title(NULL),
    m_has_desc(false),
    m_desc(NULL),
    m_has_catLst(false),
    m_catLst(NULL),
    m_has_scene3d(false),
    m_scene3d(NULL),
    m_has_styleLbl(false),
    m_styleLbl(NULL),
    m_has_extLst(false),
    m_extLst(NULL)
    {
    }
    bool CT_StyleDefinition::ChildGroup_1::has_title() const
    {    
    return m_has_title;
    }

    CT_SDName* CT_StyleDefinition::ChildGroup_1::mutable_title()
    {    
    
    m_has_desc = false;
    
    if (m_desc)
    {
        delete m_desc;
        m_desc = NULL;
    }
    ;
    
    m_has_catLst = false;
    
    if (m_catLst)
    {
        delete m_catLst;
        m_catLst = NULL;
    }
    ;
    
    m_has_scene3d = false;
    
    if (m_scene3d)
    {
        delete m_scene3d;
        m_scene3d = NULL;
    }
    ;
    
    m_has_styleLbl = false;
    
    if (m_styleLbl)
    {
        delete m_styleLbl;
        m_styleLbl = NULL;
    }
    ;
    
    m_has_extLst = false;
    
    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }
    ;
    
    m_has_title = true;
    if (!m_title)
    {
        m_title = new CT_SDName();
    }
    return m_title;
    }

    const CT_SDName& CT_StyleDefinition::ChildGroup_1::get_title() const
    {    
    if (m_title)
    {
        return *m_title;
    }
    return CT_SDName::default_instance();
    }

    bool CT_StyleDefinition::ChildGroup_1::has_desc() const
    {    
    return m_has_desc;
    }

    CT_SDDescription* CT_StyleDefinition::ChildGroup_1::mutable_desc()
    {    
    
    m_has_title = false;
    
    if (m_title)
    {
        delete m_title;
        m_title = NULL;
    }
    ;
    
    m_has_catLst = false;
    
    if (m_catLst)
    {
        delete m_catLst;
        m_catLst = NULL;
    }
    ;
    
    m_has_scene3d = false;
    
    if (m_scene3d)
    {
        delete m_scene3d;
        m_scene3d = NULL;
    }
    ;
    
    m_has_styleLbl = false;
    
    if (m_styleLbl)
    {
        delete m_styleLbl;
        m_styleLbl = NULL;
    }
    ;
    
    m_has_extLst = false;
    
    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }
    ;
    
    m_has_desc = true;
    if (!m_desc)
    {
        m_desc = new CT_SDDescription();
    }
    return m_desc;
    }

    const CT_SDDescription& CT_StyleDefinition::ChildGroup_1::get_desc() const
    {    
    if (m_desc)
    {
        return *m_desc;
    }
    return CT_SDDescription::default_instance();
    }

    bool CT_StyleDefinition::ChildGroup_1::has_catLst() const
    {    
    return m_has_catLst;
    }

    CT_SDCategories* CT_StyleDefinition::ChildGroup_1::mutable_catLst()
    {    
    
    m_has_title = false;
    
    if (m_title)
    {
        delete m_title;
        m_title = NULL;
    }
    ;
    
    m_has_desc = false;
    
    if (m_desc)
    {
        delete m_desc;
        m_desc = NULL;
    }
    ;
    
    m_has_scene3d = false;
    
    if (m_scene3d)
    {
        delete m_scene3d;
        m_scene3d = NULL;
    }
    ;
    
    m_has_styleLbl = false;
    
    if (m_styleLbl)
    {
        delete m_styleLbl;
        m_styleLbl = NULL;
    }
    ;
    
    m_has_extLst = false;
    
    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }
    ;
    
    m_has_catLst = true;
    if (!m_catLst)
    {
        m_catLst = new CT_SDCategories();
    }
    return m_catLst;
    }

    const CT_SDCategories& CT_StyleDefinition::ChildGroup_1::get_catLst() const
    {    
    if (m_catLst)
    {
        return *m_catLst;
    }
    return CT_SDCategories::default_instance();
    }

    bool CT_StyleDefinition::ChildGroup_1::has_scene3d() const
    {    
    return m_has_scene3d;
    }

    ns_a::CT_Scene3D* CT_StyleDefinition::ChildGroup_1::mutable_scene3d()
    {    
    
    m_has_title = false;
    
    if (m_title)
    {
        delete m_title;
        m_title = NULL;
    }
    ;
    
    m_has_desc = false;
    
    if (m_desc)
    {
        delete m_desc;
        m_desc = NULL;
    }
    ;
    
    m_has_catLst = false;
    
    if (m_catLst)
    {
        delete m_catLst;
        m_catLst = NULL;
    }
    ;
    
    m_has_styleLbl = false;
    
    if (m_styleLbl)
    {
        delete m_styleLbl;
        m_styleLbl = NULL;
    }
    ;
    
    m_has_extLst = false;
    
    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }
    ;
    
    m_has_scene3d = true;
    if (!m_scene3d)
    {
        m_scene3d = new ns_a::CT_Scene3D();
    }
    return m_scene3d;
    }

    const ns_a::CT_Scene3D& CT_StyleDefinition::ChildGroup_1::get_scene3d() const
    {    
    if (m_scene3d)
    {
        return *m_scene3d;
    }
    return ns_a::CT_Scene3D::default_instance();
    }

    bool CT_StyleDefinition::ChildGroup_1::has_styleLbl() const
    {    
    return m_has_styleLbl;
    }

    CT_StyleLabel* CT_StyleDefinition::ChildGroup_1::mutable_styleLbl()
    {    
    
    m_has_title = false;
    
    if (m_title)
    {
        delete m_title;
        m_title = NULL;
    }
    ;
    
    m_has_desc = false;
    
    if (m_desc)
    {
        delete m_desc;
        m_desc = NULL;
    }
    ;
    
    m_has_catLst = false;
    
    if (m_catLst)
    {
        delete m_catLst;
        m_catLst = NULL;
    }
    ;
    
    m_has_scene3d = false;
    
    if (m_scene3d)
    {
        delete m_scene3d;
        m_scene3d = NULL;
    }
    ;
    
    m_has_extLst = false;
    
    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }
    ;
    
    m_has_styleLbl = true;
    if (!m_styleLbl)
    {
        m_styleLbl = new CT_StyleLabel();
    }
    return m_styleLbl;
    }

    const CT_StyleLabel& CT_StyleDefinition::ChildGroup_1::get_styleLbl() const
    {    
    if (m_styleLbl)
    {
        return *m_styleLbl;
    }
    return CT_StyleLabel::default_instance();
    }

    bool CT_StyleDefinition::ChildGroup_1::has_extLst() const
    {    
    return m_has_extLst;
    }

    ns_a::CT_OfficeArtExtensionList* CT_StyleDefinition::ChildGroup_1::mutable_extLst()
    {    
    
    m_has_title = false;
    
    if (m_title)
    {
        delete m_title;
        m_title = NULL;
    }
    ;
    
    m_has_desc = false;
    
    if (m_desc)
    {
        delete m_desc;
        m_desc = NULL;
    }
    ;
    
    m_has_catLst = false;
    
    if (m_catLst)
    {
        delete m_catLst;
        m_catLst = NULL;
    }
    ;
    
    m_has_scene3d = false;
    
    if (m_scene3d)
    {
        delete m_scene3d;
        m_scene3d = NULL;
    }
    ;
    
    m_has_styleLbl = false;
    
    if (m_styleLbl)
    {
        delete m_styleLbl;
        m_styleLbl = NULL;
    }
    ;
    
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new ns_a::CT_OfficeArtExtensionList();
    }
    return m_extLst;
    }

    const ns_a::CT_OfficeArtExtensionList& CT_StyleDefinition::ChildGroup_1::get_extLst() const
    {    
    if (m_extLst)
    {
        return *m_extLst;
    }
    return ns_a::CT_OfficeArtExtensionList::default_instance();
    }

CT_StyleDefinition* CT_StyleDefinition::default_instance_ = NULL;

    // CT_StyleDefinitionHeader
    CT_StyleDefinitionHeader::CT_StyleDefinitionHeader()
    :m_has_uniqueId_attr(false),
    m_uniqueId_attr(""),
    m_has_minVer_attr(false),
    m_minVer_attr(""),
    m_has_resId_attr(false),
    m_resId_attr(0)
    {
    }
    CT_StyleDefinitionHeader::~CT_StyleDefinitionHeader()
{
    clear();    }
    CT_SDName* CT_StyleDefinitionHeader::add_title()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_SDName* pNewChild = pChildGroup->mutable_title();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_SDDescription* CT_StyleDefinitionHeader::add_desc()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_SDDescription* pNewChild = pChildGroup->mutable_desc();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_SDCategories* CT_StyleDefinitionHeader::add_catLst()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_SDCategories* pNewChild = pChildGroup->mutable_catLst();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_a::CT_OfficeArtExtensionList* CT_StyleDefinitionHeader::add_extLst()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_a::CT_OfficeArtExtensionList* pNewChild = pChildGroup->mutable_extLst();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    void CT_StyleDefinitionHeader::clear()
    {    
    m_has_uniqueId_attr = false;
    m_uniqueId_attr.clear();
    
    m_has_minVer_attr = false;
    m_minVer_attr.clear();
    
    m_has_resId_attr = false;
    m_resId_attr = 0;
    
    {
        vector<ChildGroup_1*>::iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_1.clear();
    }
    }

    void CT_StyleDefinitionHeader::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
    if (m_has_uniqueId_attr)
    {
        _outStream << " " << "uniqueId" << "=\"" << m_uniqueId_attr << "\"";
    }
    
    
    if (m_has_minVer_attr)
    {
        _outStream << " " << "minVer" << "=\"" << m_minVer_attr << "\"";
    }
    
    
    if (m_has_resId_attr)
    {
        _outStream << " " << "resId" << "=\"" << m_resId_attr << "\"";
    }
    
            _outStream << ">";
            
    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_title())
            {
                (*iter)->get_title().toXmlElem("diagram:title", "", _outStream);
            }
            else if ((*iter)->has_desc())
            {
                (*iter)->get_desc().toXmlElem("diagram:desc", "", _outStream);
            }
            else if ((*iter)->has_catLst())
            {
                (*iter)->get_catLst().toXmlElem("diagram:catLst", "", _outStream);
            }
            else if ((*iter)->has_extLst())
            {
                (*iter)->get_extLst().toXmlElem("diagram:extLst", "", _outStream);
            }
        }
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_StyleDefinitionHeader& CT_StyleDefinitionHeader::default_instance()
    {    
    if (!CT_StyleDefinitionHeader::default_instance_)
    {
        CT_StyleDefinitionHeader::default_instance_ = new CT_StyleDefinitionHeader();
    }
    return *CT_StyleDefinitionHeader::default_instance_;
    }

    bool CT_StyleDefinitionHeader::has_uniqueId_attr() const
    {    
    return m_has_uniqueId_attr;
    }

    void CT_StyleDefinitionHeader::set_uniqueId_attr(const XSD::string_& _uniqueId_attr)
    {    
    m_has_uniqueId_attr = true;
    m_uniqueId_attr = _uniqueId_attr;
    }

    const XSD::string_& CT_StyleDefinitionHeader::get_uniqueId_attr() const
    {    
    return m_uniqueId_attr;
    }

    bool CT_StyleDefinitionHeader::has_minVer_attr() const
    {    
    return m_has_minVer_attr;
    }

    void CT_StyleDefinitionHeader::set_minVer_attr(const XSD::string_& _minVer_attr)
    {    
    m_has_minVer_attr = true;
    m_minVer_attr = _minVer_attr;
    }

    const XSD::string_& CT_StyleDefinitionHeader::get_minVer_attr() const
    {    
    return m_minVer_attr;
    }

    bool CT_StyleDefinitionHeader::has_resId_attr() const
    {    
    return m_has_resId_attr;
    }

    void CT_StyleDefinitionHeader::set_resId_attr(const XSD::int_& _resId_attr)
    {    
    m_has_resId_attr = true;
    m_resId_attr = _resId_attr;
    }

    const XSD::int_& CT_StyleDefinitionHeader::get_resId_attr() const
    {    
    return m_resId_attr;
    }


    // CT_StyleDefinitionHeader::ChildGroup_1
    CT_StyleDefinitionHeader::ChildGroup_1::ChildGroup_1()
    :m_has_title(false),
    m_title(NULL),
    m_has_desc(false),
    m_desc(NULL),
    m_has_catLst(false),
    m_catLst(NULL),
    m_has_extLst(false),
    m_extLst(NULL)
    {
    }
    bool CT_StyleDefinitionHeader::ChildGroup_1::has_title() const
    {    
    return m_has_title;
    }

    CT_SDName* CT_StyleDefinitionHeader::ChildGroup_1::mutable_title()
    {    
    
    m_has_desc = false;
    
    if (m_desc)
    {
        delete m_desc;
        m_desc = NULL;
    }
    ;
    
    m_has_catLst = false;
    
    if (m_catLst)
    {
        delete m_catLst;
        m_catLst = NULL;
    }
    ;
    
    m_has_extLst = false;
    
    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }
    ;
    
    m_has_title = true;
    if (!m_title)
    {
        m_title = new CT_SDName();
    }
    return m_title;
    }

    const CT_SDName& CT_StyleDefinitionHeader::ChildGroup_1::get_title() const
    {    
    if (m_title)
    {
        return *m_title;
    }
    return CT_SDName::default_instance();
    }

    bool CT_StyleDefinitionHeader::ChildGroup_1::has_desc() const
    {    
    return m_has_desc;
    }

    CT_SDDescription* CT_StyleDefinitionHeader::ChildGroup_1::mutable_desc()
    {    
    
    m_has_title = false;
    
    if (m_title)
    {
        delete m_title;
        m_title = NULL;
    }
    ;
    
    m_has_catLst = false;
    
    if (m_catLst)
    {
        delete m_catLst;
        m_catLst = NULL;
    }
    ;
    
    m_has_extLst = false;
    
    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }
    ;
    
    m_has_desc = true;
    if (!m_desc)
    {
        m_desc = new CT_SDDescription();
    }
    return m_desc;
    }

    const CT_SDDescription& CT_StyleDefinitionHeader::ChildGroup_1::get_desc() const
    {    
    if (m_desc)
    {
        return *m_desc;
    }
    return CT_SDDescription::default_instance();
    }

    bool CT_StyleDefinitionHeader::ChildGroup_1::has_catLst() const
    {    
    return m_has_catLst;
    }

    CT_SDCategories* CT_StyleDefinitionHeader::ChildGroup_1::mutable_catLst()
    {    
    
    m_has_title = false;
    
    if (m_title)
    {
        delete m_title;
        m_title = NULL;
    }
    ;
    
    m_has_desc = false;
    
    if (m_desc)
    {
        delete m_desc;
        m_desc = NULL;
    }
    ;
    
    m_has_extLst = false;
    
    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }
    ;
    
    m_has_catLst = true;
    if (!m_catLst)
    {
        m_catLst = new CT_SDCategories();
    }
    return m_catLst;
    }

    const CT_SDCategories& CT_StyleDefinitionHeader::ChildGroup_1::get_catLst() const
    {    
    if (m_catLst)
    {
        return *m_catLst;
    }
    return CT_SDCategories::default_instance();
    }

    bool CT_StyleDefinitionHeader::ChildGroup_1::has_extLst() const
    {    
    return m_has_extLst;
    }

    ns_a::CT_OfficeArtExtensionList* CT_StyleDefinitionHeader::ChildGroup_1::mutable_extLst()
    {    
    
    m_has_title = false;
    
    if (m_title)
    {
        delete m_title;
        m_title = NULL;
    }
    ;
    
    m_has_desc = false;
    
    if (m_desc)
    {
        delete m_desc;
        m_desc = NULL;
    }
    ;
    
    m_has_catLst = false;
    
    if (m_catLst)
    {
        delete m_catLst;
        m_catLst = NULL;
    }
    ;
    
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new ns_a::CT_OfficeArtExtensionList();
    }
    return m_extLst;
    }

    const ns_a::CT_OfficeArtExtensionList& CT_StyleDefinitionHeader::ChildGroup_1::get_extLst() const
    {    
    if (m_extLst)
    {
        return *m_extLst;
    }
    return ns_a::CT_OfficeArtExtensionList::default_instance();
    }

CT_StyleDefinitionHeader* CT_StyleDefinitionHeader::default_instance_ = NULL;

    // CT_StyleDefinitionHeaderLst
    CT_StyleDefinitionHeaderLst::CT_StyleDefinitionHeaderLst()

    {
    }
    CT_StyleDefinitionHeaderLst::~CT_StyleDefinitionHeaderLst()
{
    clear();    }
    CT_StyleDefinitionHeader* CT_StyleDefinitionHeaderLst::add_styleDefHdr()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_StyleDefinitionHeader* pNewChild = pChildGroup->mutable_styleDefHdr();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    void CT_StyleDefinitionHeaderLst::clear()
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

    void CT_StyleDefinitionHeaderLst::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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
            if ((*iter)->has_styleDefHdr())
            {
                (*iter)->get_styleDefHdr().toXmlElem("diagram:styleDefHdr", "", _outStream);
            }
        }
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_StyleDefinitionHeaderLst& CT_StyleDefinitionHeaderLst::default_instance()
    {    
    if (!CT_StyleDefinitionHeaderLst::default_instance_)
    {
        CT_StyleDefinitionHeaderLst::default_instance_ = new CT_StyleDefinitionHeaderLst();
    }
    return *CT_StyleDefinitionHeaderLst::default_instance_;
    }


    // CT_StyleDefinitionHeaderLst::ChildGroup_1
    CT_StyleDefinitionHeaderLst::ChildGroup_1::ChildGroup_1()
    :m_has_styleDefHdr(false),
    m_styleDefHdr(NULL)
    {
    }
    bool CT_StyleDefinitionHeaderLst::ChildGroup_1::has_styleDefHdr() const
    {    
    return m_has_styleDefHdr;
    }

    CT_StyleDefinitionHeader* CT_StyleDefinitionHeaderLst::ChildGroup_1::mutable_styleDefHdr()
    {    
    
    m_has_styleDefHdr = true;
    if (!m_styleDefHdr)
    {
        m_styleDefHdr = new CT_StyleDefinitionHeader();
    }
    return m_styleDefHdr;
    }

    const CT_StyleDefinitionHeader& CT_StyleDefinitionHeaderLst::ChildGroup_1::get_styleDefHdr() const
    {    
    if (m_styleDefHdr)
    {
        return *m_styleDefHdr;
    }
    return CT_StyleDefinitionHeader::default_instance();
    }

CT_StyleDefinitionHeaderLst* CT_StyleDefinitionHeaderLst::default_instance_ = NULL;

    // colorsDef_element
    colorsDef_element::colorsDef_element()
    :m_has_uniqueId_attr(false),
    m_uniqueId_attr(""),
    m_has_minVer_attr(false),
    m_minVer_attr("")
    {
    }
    colorsDef_element::~colorsDef_element()
{
    clear();    }
    CT_CTName* colorsDef_element::add_title()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_CTName* pNewChild = pChildGroup->mutable_title();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_CTDescription* colorsDef_element::add_desc()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_CTDescription* pNewChild = pChildGroup->mutable_desc();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_CTCategories* colorsDef_element::add_catLst()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_CTCategories* pNewChild = pChildGroup->mutable_catLst();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_CTStyleLabel* colorsDef_element::add_styleLbl()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_CTStyleLabel* pNewChild = pChildGroup->mutable_styleLbl();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_a::CT_OfficeArtExtensionList* colorsDef_element::add_extLst()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_a::CT_OfficeArtExtensionList* pNewChild = pChildGroup->mutable_extLst();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    void colorsDef_element::clear()
    {    
    m_has_uniqueId_attr = false;
    m_uniqueId_attr.clear();
    
    m_has_minVer_attr = false;
    m_minVer_attr.clear();
    
    {
        vector<ChildGroup_1*>::iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_1.clear();
    }
    }

    void colorsDef_element::toXml(std::ostream& _outStream) const
    {    
    _outStream << "<diagram:colorsDef";
    
    _outStream << " " << "xmlns:diagram=\"http://schemas.openxmlformats.org/drawingml/2006/diagram\"";
    _outStream << " " << "xmlns:s=\"http://schemas.openxmlformats.org/officeDocument/2006/sharedTypes\"";
    _outStream << " " << "xmlns:r=\"http://schemas.openxmlformats.org/officeDocument/2006/relationships\"";
    _outStream << " " << "xmlns:a=\"http://schemas.openxmlformats.org/drawingml/2006/main\"";
    
    if (m_has_uniqueId_attr)
    {
        _outStream << " " << "uniqueId" << "=\"" << m_uniqueId_attr << "\"";
    }
    
    
    if (m_has_minVer_attr)
    {
        _outStream << " " << "minVer" << "=\"" << m_minVer_attr << "\"";
    }
    
    _outStream << ">";
    
    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_title())
            {
                (*iter)->get_title().toXmlElem("diagram:title", "", _outStream);
            }
            else if ((*iter)->has_desc())
            {
                (*iter)->get_desc().toXmlElem("diagram:desc", "", _outStream);
            }
            else if ((*iter)->has_catLst())
            {
                (*iter)->get_catLst().toXmlElem("diagram:catLst", "", _outStream);
            }
            else if ((*iter)->has_styleLbl())
            {
                (*iter)->get_styleLbl().toXmlElem("diagram:styleLbl", "", _outStream);
            }
            else if ((*iter)->has_extLst())
            {
                (*iter)->get_extLst().toXmlElem("diagram:extLst", "", _outStream);
            }
        }
    }
    
    _outStream << "</diagram:colorsDef>";
    }

    const colorsDef_element& colorsDef_element::default_instance()
    {    
    if (!colorsDef_element::default_instance_)
    {
        colorsDef_element::default_instance_ = new colorsDef_element();
    }
    return *colorsDef_element::default_instance_;
    }

    bool colorsDef_element::has_uniqueId_attr() const
    {    
    return m_has_uniqueId_attr;
    }

    void colorsDef_element::set_uniqueId_attr(const XSD::string_& _uniqueId_attr)
    {    
    m_has_uniqueId_attr = true;
    m_uniqueId_attr = _uniqueId_attr;
    }

    const XSD::string_& colorsDef_element::get_uniqueId_attr() const
    {    
    return m_uniqueId_attr;
    }

    bool colorsDef_element::has_minVer_attr() const
    {    
    return m_has_minVer_attr;
    }

    void colorsDef_element::set_minVer_attr(const XSD::string_& _minVer_attr)
    {    
    m_has_minVer_attr = true;
    m_minVer_attr = _minVer_attr;
    }

    const XSD::string_& colorsDef_element::get_minVer_attr() const
    {    
    return m_minVer_attr;
    }


    // colorsDef_element::ChildGroup_1
    colorsDef_element::ChildGroup_1::ChildGroup_1()
    :m_has_title(false),
    m_title(NULL),
    m_has_desc(false),
    m_desc(NULL),
    m_has_catLst(false),
    m_catLst(NULL),
    m_has_styleLbl(false),
    m_styleLbl(NULL),
    m_has_extLst(false),
    m_extLst(NULL)
    {
    }
    bool colorsDef_element::ChildGroup_1::has_title() const
    {    
    return m_has_title;
    }

    CT_CTName* colorsDef_element::ChildGroup_1::mutable_title()
    {    
    
    m_has_desc = false;
    
    if (m_desc)
    {
        delete m_desc;
        m_desc = NULL;
    }
    ;
    
    m_has_catLst = false;
    
    if (m_catLst)
    {
        delete m_catLst;
        m_catLst = NULL;
    }
    ;
    
    m_has_styleLbl = false;
    
    if (m_styleLbl)
    {
        delete m_styleLbl;
        m_styleLbl = NULL;
    }
    ;
    
    m_has_extLst = false;
    
    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }
    ;
    
    m_has_title = true;
    if (!m_title)
    {
        m_title = new CT_CTName();
    }
    return m_title;
    }

    const CT_CTName& colorsDef_element::ChildGroup_1::get_title() const
    {    
    if (m_title)
    {
        return *m_title;
    }
    return CT_CTName::default_instance();
    }

    bool colorsDef_element::ChildGroup_1::has_desc() const
    {    
    return m_has_desc;
    }

    CT_CTDescription* colorsDef_element::ChildGroup_1::mutable_desc()
    {    
    
    m_has_title = false;
    
    if (m_title)
    {
        delete m_title;
        m_title = NULL;
    }
    ;
    
    m_has_catLst = false;
    
    if (m_catLst)
    {
        delete m_catLst;
        m_catLst = NULL;
    }
    ;
    
    m_has_styleLbl = false;
    
    if (m_styleLbl)
    {
        delete m_styleLbl;
        m_styleLbl = NULL;
    }
    ;
    
    m_has_extLst = false;
    
    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }
    ;
    
    m_has_desc = true;
    if (!m_desc)
    {
        m_desc = new CT_CTDescription();
    }
    return m_desc;
    }

    const CT_CTDescription& colorsDef_element::ChildGroup_1::get_desc() const
    {    
    if (m_desc)
    {
        return *m_desc;
    }
    return CT_CTDescription::default_instance();
    }

    bool colorsDef_element::ChildGroup_1::has_catLst() const
    {    
    return m_has_catLst;
    }

    CT_CTCategories* colorsDef_element::ChildGroup_1::mutable_catLst()
    {    
    
    m_has_title = false;
    
    if (m_title)
    {
        delete m_title;
        m_title = NULL;
    }
    ;
    
    m_has_desc = false;
    
    if (m_desc)
    {
        delete m_desc;
        m_desc = NULL;
    }
    ;
    
    m_has_styleLbl = false;
    
    if (m_styleLbl)
    {
        delete m_styleLbl;
        m_styleLbl = NULL;
    }
    ;
    
    m_has_extLst = false;
    
    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }
    ;
    
    m_has_catLst = true;
    if (!m_catLst)
    {
        m_catLst = new CT_CTCategories();
    }
    return m_catLst;
    }

    const CT_CTCategories& colorsDef_element::ChildGroup_1::get_catLst() const
    {    
    if (m_catLst)
    {
        return *m_catLst;
    }
    return CT_CTCategories::default_instance();
    }

    bool colorsDef_element::ChildGroup_1::has_styleLbl() const
    {    
    return m_has_styleLbl;
    }

    CT_CTStyleLabel* colorsDef_element::ChildGroup_1::mutable_styleLbl()
    {    
    
    m_has_title = false;
    
    if (m_title)
    {
        delete m_title;
        m_title = NULL;
    }
    ;
    
    m_has_desc = false;
    
    if (m_desc)
    {
        delete m_desc;
        m_desc = NULL;
    }
    ;
    
    m_has_catLst = false;
    
    if (m_catLst)
    {
        delete m_catLst;
        m_catLst = NULL;
    }
    ;
    
    m_has_extLst = false;
    
    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }
    ;
    
    m_has_styleLbl = true;
    if (!m_styleLbl)
    {
        m_styleLbl = new CT_CTStyleLabel();
    }
    return m_styleLbl;
    }

    const CT_CTStyleLabel& colorsDef_element::ChildGroup_1::get_styleLbl() const
    {    
    if (m_styleLbl)
    {
        return *m_styleLbl;
    }
    return CT_CTStyleLabel::default_instance();
    }

    bool colorsDef_element::ChildGroup_1::has_extLst() const
    {    
    return m_has_extLst;
    }

    ns_a::CT_OfficeArtExtensionList* colorsDef_element::ChildGroup_1::mutable_extLst()
    {    
    
    m_has_title = false;
    
    if (m_title)
    {
        delete m_title;
        m_title = NULL;
    }
    ;
    
    m_has_desc = false;
    
    if (m_desc)
    {
        delete m_desc;
        m_desc = NULL;
    }
    ;
    
    m_has_catLst = false;
    
    if (m_catLst)
    {
        delete m_catLst;
        m_catLst = NULL;
    }
    ;
    
    m_has_styleLbl = false;
    
    if (m_styleLbl)
    {
        delete m_styleLbl;
        m_styleLbl = NULL;
    }
    ;
    
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new ns_a::CT_OfficeArtExtensionList();
    }
    return m_extLst;
    }

    const ns_a::CT_OfficeArtExtensionList& colorsDef_element::ChildGroup_1::get_extLst() const
    {    
    if (m_extLst)
    {
        return *m_extLst;
    }
    return ns_a::CT_OfficeArtExtensionList::default_instance();
    }

colorsDef_element* colorsDef_element::default_instance_ = NULL;

    // colorsDefHdr_element
    colorsDefHdr_element::colorsDefHdr_element()
    :m_has_uniqueId_attr(false),
    m_uniqueId_attr(""),
    m_has_minVer_attr(false),
    m_minVer_attr(""),
    m_has_resId_attr(false),
    m_resId_attr(0)
    {
    }
    colorsDefHdr_element::~colorsDefHdr_element()
{
    clear();    }
    CT_CTName* colorsDefHdr_element::add_title()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_CTName* pNewChild = pChildGroup->mutable_title();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_CTDescription* colorsDefHdr_element::add_desc()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_CTDescription* pNewChild = pChildGroup->mutable_desc();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_CTCategories* colorsDefHdr_element::add_catLst()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_CTCategories* pNewChild = pChildGroup->mutable_catLst();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_a::CT_OfficeArtExtensionList* colorsDefHdr_element::add_extLst()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_a::CT_OfficeArtExtensionList* pNewChild = pChildGroup->mutable_extLst();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    void colorsDefHdr_element::clear()
    {    
    m_has_uniqueId_attr = false;
    m_uniqueId_attr.clear();
    
    m_has_minVer_attr = false;
    m_minVer_attr.clear();
    
    m_has_resId_attr = false;
    m_resId_attr = 0;
    
    {
        vector<ChildGroup_1*>::iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_1.clear();
    }
    }

    void colorsDefHdr_element::toXml(std::ostream& _outStream) const
    {    
    _outStream << "<diagram:colorsDefHdr";
    
    _outStream << " " << "xmlns:diagram=\"http://schemas.openxmlformats.org/drawingml/2006/diagram\"";
    _outStream << " " << "xmlns:s=\"http://schemas.openxmlformats.org/officeDocument/2006/sharedTypes\"";
    _outStream << " " << "xmlns:r=\"http://schemas.openxmlformats.org/officeDocument/2006/relationships\"";
    _outStream << " " << "xmlns:a=\"http://schemas.openxmlformats.org/drawingml/2006/main\"";
    
    if (m_has_uniqueId_attr)
    {
        _outStream << " " << "uniqueId" << "=\"" << m_uniqueId_attr << "\"";
    }
    
    
    if (m_has_minVer_attr)
    {
        _outStream << " " << "minVer" << "=\"" << m_minVer_attr << "\"";
    }
    
    
    if (m_has_resId_attr)
    {
        _outStream << " " << "resId" << "=\"" << m_resId_attr << "\"";
    }
    
    _outStream << ">";
    
    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_title())
            {
                (*iter)->get_title().toXmlElem("diagram:title", "", _outStream);
            }
            else if ((*iter)->has_desc())
            {
                (*iter)->get_desc().toXmlElem("diagram:desc", "", _outStream);
            }
            else if ((*iter)->has_catLst())
            {
                (*iter)->get_catLst().toXmlElem("diagram:catLst", "", _outStream);
            }
            else if ((*iter)->has_extLst())
            {
                (*iter)->get_extLst().toXmlElem("diagram:extLst", "", _outStream);
            }
        }
    }
    
    _outStream << "</diagram:colorsDefHdr>";
    }

    const colorsDefHdr_element& colorsDefHdr_element::default_instance()
    {    
    if (!colorsDefHdr_element::default_instance_)
    {
        colorsDefHdr_element::default_instance_ = new colorsDefHdr_element();
    }
    return *colorsDefHdr_element::default_instance_;
    }

    bool colorsDefHdr_element::has_uniqueId_attr() const
    {    
    return m_has_uniqueId_attr;
    }

    void colorsDefHdr_element::set_uniqueId_attr(const XSD::string_& _uniqueId_attr)
    {    
    m_has_uniqueId_attr = true;
    m_uniqueId_attr = _uniqueId_attr;
    }

    const XSD::string_& colorsDefHdr_element::get_uniqueId_attr() const
    {    
    return m_uniqueId_attr;
    }

    bool colorsDefHdr_element::has_minVer_attr() const
    {    
    return m_has_minVer_attr;
    }

    void colorsDefHdr_element::set_minVer_attr(const XSD::string_& _minVer_attr)
    {    
    m_has_minVer_attr = true;
    m_minVer_attr = _minVer_attr;
    }

    const XSD::string_& colorsDefHdr_element::get_minVer_attr() const
    {    
    return m_minVer_attr;
    }

    bool colorsDefHdr_element::has_resId_attr() const
    {    
    return m_has_resId_attr;
    }

    void colorsDefHdr_element::set_resId_attr(const XSD::int_& _resId_attr)
    {    
    m_has_resId_attr = true;
    m_resId_attr = _resId_attr;
    }

    const XSD::int_& colorsDefHdr_element::get_resId_attr() const
    {    
    return m_resId_attr;
    }


    // colorsDefHdr_element::ChildGroup_1
    colorsDefHdr_element::ChildGroup_1::ChildGroup_1()
    :m_has_title(false),
    m_title(NULL),
    m_has_desc(false),
    m_desc(NULL),
    m_has_catLst(false),
    m_catLst(NULL),
    m_has_extLst(false),
    m_extLst(NULL)
    {
    }
    bool colorsDefHdr_element::ChildGroup_1::has_title() const
    {    
    return m_has_title;
    }

    CT_CTName* colorsDefHdr_element::ChildGroup_1::mutable_title()
    {    
    
    m_has_desc = false;
    
    if (m_desc)
    {
        delete m_desc;
        m_desc = NULL;
    }
    ;
    
    m_has_catLst = false;
    
    if (m_catLst)
    {
        delete m_catLst;
        m_catLst = NULL;
    }
    ;
    
    m_has_extLst = false;
    
    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }
    ;
    
    m_has_title = true;
    if (!m_title)
    {
        m_title = new CT_CTName();
    }
    return m_title;
    }

    const CT_CTName& colorsDefHdr_element::ChildGroup_1::get_title() const
    {    
    if (m_title)
    {
        return *m_title;
    }
    return CT_CTName::default_instance();
    }

    bool colorsDefHdr_element::ChildGroup_1::has_desc() const
    {    
    return m_has_desc;
    }

    CT_CTDescription* colorsDefHdr_element::ChildGroup_1::mutable_desc()
    {    
    
    m_has_title = false;
    
    if (m_title)
    {
        delete m_title;
        m_title = NULL;
    }
    ;
    
    m_has_catLst = false;
    
    if (m_catLst)
    {
        delete m_catLst;
        m_catLst = NULL;
    }
    ;
    
    m_has_extLst = false;
    
    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }
    ;
    
    m_has_desc = true;
    if (!m_desc)
    {
        m_desc = new CT_CTDescription();
    }
    return m_desc;
    }

    const CT_CTDescription& colorsDefHdr_element::ChildGroup_1::get_desc() const
    {    
    if (m_desc)
    {
        return *m_desc;
    }
    return CT_CTDescription::default_instance();
    }

    bool colorsDefHdr_element::ChildGroup_1::has_catLst() const
    {    
    return m_has_catLst;
    }

    CT_CTCategories* colorsDefHdr_element::ChildGroup_1::mutable_catLst()
    {    
    
    m_has_title = false;
    
    if (m_title)
    {
        delete m_title;
        m_title = NULL;
    }
    ;
    
    m_has_desc = false;
    
    if (m_desc)
    {
        delete m_desc;
        m_desc = NULL;
    }
    ;
    
    m_has_extLst = false;
    
    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }
    ;
    
    m_has_catLst = true;
    if (!m_catLst)
    {
        m_catLst = new CT_CTCategories();
    }
    return m_catLst;
    }

    const CT_CTCategories& colorsDefHdr_element::ChildGroup_1::get_catLst() const
    {    
    if (m_catLst)
    {
        return *m_catLst;
    }
    return CT_CTCategories::default_instance();
    }

    bool colorsDefHdr_element::ChildGroup_1::has_extLst() const
    {    
    return m_has_extLst;
    }

    ns_a::CT_OfficeArtExtensionList* colorsDefHdr_element::ChildGroup_1::mutable_extLst()
    {    
    
    m_has_title = false;
    
    if (m_title)
    {
        delete m_title;
        m_title = NULL;
    }
    ;
    
    m_has_desc = false;
    
    if (m_desc)
    {
        delete m_desc;
        m_desc = NULL;
    }
    ;
    
    m_has_catLst = false;
    
    if (m_catLst)
    {
        delete m_catLst;
        m_catLst = NULL;
    }
    ;
    
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new ns_a::CT_OfficeArtExtensionList();
    }
    return m_extLst;
    }

    const ns_a::CT_OfficeArtExtensionList& colorsDefHdr_element::ChildGroup_1::get_extLst() const
    {    
    if (m_extLst)
    {
        return *m_extLst;
    }
    return ns_a::CT_OfficeArtExtensionList::default_instance();
    }

colorsDefHdr_element* colorsDefHdr_element::default_instance_ = NULL;

    // colorsDefHdrLst_element
    colorsDefHdrLst_element::colorsDefHdrLst_element()

    {
    }
    colorsDefHdrLst_element::~colorsDefHdrLst_element()
{
    clear();    }
    CT_ColorTransformHeader* colorsDefHdrLst_element::add_colorsDefHdr()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_ColorTransformHeader* pNewChild = pChildGroup->mutable_colorsDefHdr();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    void colorsDefHdrLst_element::clear()
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

    void colorsDefHdrLst_element::toXml(std::ostream& _outStream) const
    {    
    _outStream << "<diagram:colorsDefHdrLst";
    
    _outStream << " " << "xmlns:diagram=\"http://schemas.openxmlformats.org/drawingml/2006/diagram\"";
    _outStream << " " << "xmlns:s=\"http://schemas.openxmlformats.org/officeDocument/2006/sharedTypes\"";
    _outStream << " " << "xmlns:r=\"http://schemas.openxmlformats.org/officeDocument/2006/relationships\"";
    _outStream << " " << "xmlns:a=\"http://schemas.openxmlformats.org/drawingml/2006/main\"";
    
    _outStream << ">";
    
    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_colorsDefHdr())
            {
                (*iter)->get_colorsDefHdr().toXmlElem("diagram:colorsDefHdr", "", _outStream);
            }
        }
    }
    
    _outStream << "</diagram:colorsDefHdrLst>";
    }

    const colorsDefHdrLst_element& colorsDefHdrLst_element::default_instance()
    {    
    if (!colorsDefHdrLst_element::default_instance_)
    {
        colorsDefHdrLst_element::default_instance_ = new colorsDefHdrLst_element();
    }
    return *colorsDefHdrLst_element::default_instance_;
    }


    // colorsDefHdrLst_element::ChildGroup_1
    colorsDefHdrLst_element::ChildGroup_1::ChildGroup_1()
    :m_has_colorsDefHdr(false),
    m_colorsDefHdr(NULL)
    {
    }
    bool colorsDefHdrLst_element::ChildGroup_1::has_colorsDefHdr() const
    {    
    return m_has_colorsDefHdr;
    }

    CT_ColorTransformHeader* colorsDefHdrLst_element::ChildGroup_1::mutable_colorsDefHdr()
    {    
    
    m_has_colorsDefHdr = true;
    if (!m_colorsDefHdr)
    {
        m_colorsDefHdr = new CT_ColorTransformHeader();
    }
    return m_colorsDefHdr;
    }

    const CT_ColorTransformHeader& colorsDefHdrLst_element::ChildGroup_1::get_colorsDefHdr() const
    {    
    if (m_colorsDefHdr)
    {
        return *m_colorsDefHdr;
    }
    return CT_ColorTransformHeader::default_instance();
    }

colorsDefHdrLst_element* colorsDefHdrLst_element::default_instance_ = NULL;

    // dataModel_element
    dataModel_element::dataModel_element()
    :m_has_ptLst(false),
    m_ptLst(NULL),
    m_has_cxnLst(false),
    m_cxnLst(NULL),
    m_has_bg(false),
    m_bg(NULL),
    m_has_whole(false),
    m_whole(NULL),
    m_has_extLst(false),
    m_extLst(NULL)
    {
    }
    dataModel_element::~dataModel_element()
{
    clear();    }
    bool dataModel_element::has_ptLst() const
    {    
    return m_has_ptLst;
    }

    CT_PtList* dataModel_element::mutable_ptLst()
    {    
    m_has_ptLst = true;
    if (!m_ptLst)
    {
        m_ptLst = new CT_PtList();
    }
    return m_ptLst;
    }

    const CT_PtList& dataModel_element::get_ptLst() const
    {    
    if (m_ptLst)
    {
        return *m_ptLst;
    }
    return CT_PtList::default_instance();
    }

    bool dataModel_element::has_cxnLst() const
    {    
    return m_has_cxnLst;
    }

    CT_CxnList* dataModel_element::mutable_cxnLst()
    {    
    m_has_cxnLst = true;
    if (!m_cxnLst)
    {
        m_cxnLst = new CT_CxnList();
    }
    return m_cxnLst;
    }

    const CT_CxnList& dataModel_element::get_cxnLst() const
    {    
    if (m_cxnLst)
    {
        return *m_cxnLst;
    }
    return CT_CxnList::default_instance();
    }

    bool dataModel_element::has_bg() const
    {    
    return m_has_bg;
    }

    ns_a::CT_BackgroundFormatting* dataModel_element::mutable_bg()
    {    
    m_has_bg = true;
    if (!m_bg)
    {
        m_bg = new ns_a::CT_BackgroundFormatting();
    }
    return m_bg;
    }

    const ns_a::CT_BackgroundFormatting& dataModel_element::get_bg() const
    {    
    if (m_bg)
    {
        return *m_bg;
    }
    return ns_a::CT_BackgroundFormatting::default_instance();
    }

    bool dataModel_element::has_whole() const
    {    
    return m_has_whole;
    }

    ns_a::CT_WholeE2oFormatting* dataModel_element::mutable_whole()
    {    
    m_has_whole = true;
    if (!m_whole)
    {
        m_whole = new ns_a::CT_WholeE2oFormatting();
    }
    return m_whole;
    }

    const ns_a::CT_WholeE2oFormatting& dataModel_element::get_whole() const
    {    
    if (m_whole)
    {
        return *m_whole;
    }
    return ns_a::CT_WholeE2oFormatting::default_instance();
    }

    bool dataModel_element::has_extLst() const
    {    
    return m_has_extLst;
    }

    ns_a::CT_OfficeArtExtensionList* dataModel_element::mutable_extLst()
    {    
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new ns_a::CT_OfficeArtExtensionList();
    }
    return m_extLst;
    }

    const ns_a::CT_OfficeArtExtensionList& dataModel_element::get_extLst() const
    {    
    if (m_extLst)
    {
        return *m_extLst;
    }
    return ns_a::CT_OfficeArtExtensionList::default_instance();
    }

    void dataModel_element::clear()
    {    
    m_has_ptLst = false;
    
    if (m_ptLst)
    {
        delete m_ptLst;
        m_ptLst = NULL;
    }
    
    
    m_has_cxnLst = false;
    
    if (m_cxnLst)
    {
        delete m_cxnLst;
        m_cxnLst = NULL;
    }
    
    
    m_has_bg = false;
    
    if (m_bg)
    {
        delete m_bg;
        m_bg = NULL;
    }
    
    
    m_has_whole = false;
    
    if (m_whole)
    {
        delete m_whole;
        m_whole = NULL;
    }
    
    
    m_has_extLst = false;
    
    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }
    
    }

    void dataModel_element::toXml(std::ostream& _outStream) const
    {    
    _outStream << "<diagram:dataModel";
    
    _outStream << " " << "xmlns:diagram=\"http://schemas.openxmlformats.org/drawingml/2006/diagram\"";
    _outStream << " " << "xmlns:s=\"http://schemas.openxmlformats.org/officeDocument/2006/sharedTypes\"";
    _outStream << " " << "xmlns:r=\"http://schemas.openxmlformats.org/officeDocument/2006/relationships\"";
    _outStream << " " << "xmlns:a=\"http://schemas.openxmlformats.org/drawingml/2006/main\"";
    
    _outStream << ">";
    
    if (m_has_ptLst)
    {
        m_ptLst->toXmlElem("diagram:ptLst", "", _outStream);;
    }
    
    if (m_has_cxnLst)
    {
        m_cxnLst->toXmlElem("diagram:cxnLst", "", _outStream);;
    }
    
    if (m_has_bg)
    {
        m_bg->toXmlElem("diagram:bg", "", _outStream);;
    }
    
    if (m_has_whole)
    {
        m_whole->toXmlElem("diagram:whole", "", _outStream);;
    }
    
    if (m_has_extLst)
    {
        m_extLst->toXmlElem("diagram:extLst", "", _outStream);;
    }
    
    _outStream << "</diagram:dataModel>";
    }

    const dataModel_element& dataModel_element::default_instance()
    {    
    if (!dataModel_element::default_instance_)
    {
        dataModel_element::default_instance_ = new dataModel_element();
    }
    return *dataModel_element::default_instance_;
    }

dataModel_element* dataModel_element::default_instance_ = NULL;

    // layoutDef_element
    layoutDef_element::layoutDef_element()
    :m_has_uniqueId_attr(false),
    m_uniqueId_attr(""),
    m_has_minVer_attr(false),
    m_minVer_attr(""),
    m_has_defStyle_attr(false),
    m_defStyle_attr("")
    {
    }
    layoutDef_element::~layoutDef_element()
{
    clear();    }
    CT_Name* layoutDef_element::add_title()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Name* pNewChild = pChildGroup->mutable_title();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Description* layoutDef_element::add_desc()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Description* pNewChild = pChildGroup->mutable_desc();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Categories* layoutDef_element::add_catLst()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Categories* pNewChild = pChildGroup->mutable_catLst();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_SampleData* layoutDef_element::add_sampData()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_SampleData* pNewChild = pChildGroup->mutable_sampData();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_SampleData* layoutDef_element::add_styleData()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_SampleData* pNewChild = pChildGroup->mutable_styleData();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_SampleData* layoutDef_element::add_clrData()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_SampleData* pNewChild = pChildGroup->mutable_clrData();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_LayoutNode* layoutDef_element::add_layoutNode()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_LayoutNode* pNewChild = pChildGroup->mutable_layoutNode();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_a::CT_OfficeArtExtensionList* layoutDef_element::add_extLst()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_a::CT_OfficeArtExtensionList* pNewChild = pChildGroup->mutable_extLst();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    void layoutDef_element::clear()
    {    
    m_has_uniqueId_attr = false;
    m_uniqueId_attr.clear();
    
    m_has_minVer_attr = false;
    m_minVer_attr.clear();
    
    m_has_defStyle_attr = false;
    m_defStyle_attr.clear();
    
    {
        vector<ChildGroup_1*>::iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_1.clear();
    }
    }

    void layoutDef_element::toXml(std::ostream& _outStream) const
    {    
    _outStream << "<diagram:layoutDef";
    
    _outStream << " " << "xmlns:diagram=\"http://schemas.openxmlformats.org/drawingml/2006/diagram\"";
    _outStream << " " << "xmlns:s=\"http://schemas.openxmlformats.org/officeDocument/2006/sharedTypes\"";
    _outStream << " " << "xmlns:r=\"http://schemas.openxmlformats.org/officeDocument/2006/relationships\"";
    _outStream << " " << "xmlns:a=\"http://schemas.openxmlformats.org/drawingml/2006/main\"";
    
    if (m_has_uniqueId_attr)
    {
        _outStream << " " << "uniqueId" << "=\"" << m_uniqueId_attr << "\"";
    }
    
    
    if (m_has_minVer_attr)
    {
        _outStream << " " << "minVer" << "=\"" << m_minVer_attr << "\"";
    }
    
    
    if (m_has_defStyle_attr)
    {
        _outStream << " " << "defStyle" << "=\"" << m_defStyle_attr << "\"";
    }
    
    _outStream << ">";
    
    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_title())
            {
                (*iter)->get_title().toXmlElem("diagram:title", "", _outStream);
            }
            else if ((*iter)->has_desc())
            {
                (*iter)->get_desc().toXmlElem("diagram:desc", "", _outStream);
            }
            else if ((*iter)->has_catLst())
            {
                (*iter)->get_catLst().toXmlElem("diagram:catLst", "", _outStream);
            }
            else if ((*iter)->has_sampData())
            {
                (*iter)->get_sampData().toXmlElem("diagram:sampData", "", _outStream);
            }
            else if ((*iter)->has_styleData())
            {
                (*iter)->get_styleData().toXmlElem("diagram:styleData", "", _outStream);
            }
            else if ((*iter)->has_clrData())
            {
                (*iter)->get_clrData().toXmlElem("diagram:clrData", "", _outStream);
            }
            else if ((*iter)->has_layoutNode())
            {
                (*iter)->get_layoutNode().toXmlElem("diagram:layoutNode", "", _outStream);
            }
            else if ((*iter)->has_extLst())
            {
                (*iter)->get_extLst().toXmlElem("diagram:extLst", "", _outStream);
            }
        }
    }
    
    _outStream << "</diagram:layoutDef>";
    }

    const layoutDef_element& layoutDef_element::default_instance()
    {    
    if (!layoutDef_element::default_instance_)
    {
        layoutDef_element::default_instance_ = new layoutDef_element();
    }
    return *layoutDef_element::default_instance_;
    }

    bool layoutDef_element::has_uniqueId_attr() const
    {    
    return m_has_uniqueId_attr;
    }

    void layoutDef_element::set_uniqueId_attr(const XSD::string_& _uniqueId_attr)
    {    
    m_has_uniqueId_attr = true;
    m_uniqueId_attr = _uniqueId_attr;
    }

    const XSD::string_& layoutDef_element::get_uniqueId_attr() const
    {    
    return m_uniqueId_attr;
    }

    bool layoutDef_element::has_minVer_attr() const
    {    
    return m_has_minVer_attr;
    }

    void layoutDef_element::set_minVer_attr(const XSD::string_& _minVer_attr)
    {    
    m_has_minVer_attr = true;
    m_minVer_attr = _minVer_attr;
    }

    const XSD::string_& layoutDef_element::get_minVer_attr() const
    {    
    return m_minVer_attr;
    }

    bool layoutDef_element::has_defStyle_attr() const
    {    
    return m_has_defStyle_attr;
    }

    void layoutDef_element::set_defStyle_attr(const XSD::string_& _defStyle_attr)
    {    
    m_has_defStyle_attr = true;
    m_defStyle_attr = _defStyle_attr;
    }

    const XSD::string_& layoutDef_element::get_defStyle_attr() const
    {    
    return m_defStyle_attr;
    }


    // layoutDef_element::ChildGroup_1
    layoutDef_element::ChildGroup_1::ChildGroup_1()
    :m_has_title(false),
    m_title(NULL),
    m_has_desc(false),
    m_desc(NULL),
    m_has_catLst(false),
    m_catLst(NULL),
    m_has_sampData(false),
    m_sampData(NULL),
    m_has_styleData(false),
    m_styleData(NULL),
    m_has_clrData(false),
    m_clrData(NULL),
    m_has_layoutNode(false),
    m_layoutNode(NULL),
    m_has_extLst(false),
    m_extLst(NULL)
    {
    }
    bool layoutDef_element::ChildGroup_1::has_title() const
    {    
    return m_has_title;
    }

    CT_Name* layoutDef_element::ChildGroup_1::mutable_title()
    {    
    
    m_has_desc = false;
    
    if (m_desc)
    {
        delete m_desc;
        m_desc = NULL;
    }
    ;
    
    m_has_catLst = false;
    
    if (m_catLst)
    {
        delete m_catLst;
        m_catLst = NULL;
    }
    ;
    
    m_has_sampData = false;
    
    if (m_sampData)
    {
        delete m_sampData;
        m_sampData = NULL;
    }
    ;
    
    m_has_styleData = false;
    
    if (m_styleData)
    {
        delete m_styleData;
        m_styleData = NULL;
    }
    ;
    
    m_has_clrData = false;
    
    if (m_clrData)
    {
        delete m_clrData;
        m_clrData = NULL;
    }
    ;
    
    m_has_layoutNode = false;
    
    if (m_layoutNode)
    {
        delete m_layoutNode;
        m_layoutNode = NULL;
    }
    ;
    
    m_has_extLst = false;
    
    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }
    ;
    
    m_has_title = true;
    if (!m_title)
    {
        m_title = new CT_Name();
    }
    return m_title;
    }

    const CT_Name& layoutDef_element::ChildGroup_1::get_title() const
    {    
    if (m_title)
    {
        return *m_title;
    }
    return CT_Name::default_instance();
    }

    bool layoutDef_element::ChildGroup_1::has_desc() const
    {    
    return m_has_desc;
    }

    CT_Description* layoutDef_element::ChildGroup_1::mutable_desc()
    {    
    
    m_has_title = false;
    
    if (m_title)
    {
        delete m_title;
        m_title = NULL;
    }
    ;
    
    m_has_catLst = false;
    
    if (m_catLst)
    {
        delete m_catLst;
        m_catLst = NULL;
    }
    ;
    
    m_has_sampData = false;
    
    if (m_sampData)
    {
        delete m_sampData;
        m_sampData = NULL;
    }
    ;
    
    m_has_styleData = false;
    
    if (m_styleData)
    {
        delete m_styleData;
        m_styleData = NULL;
    }
    ;
    
    m_has_clrData = false;
    
    if (m_clrData)
    {
        delete m_clrData;
        m_clrData = NULL;
    }
    ;
    
    m_has_layoutNode = false;
    
    if (m_layoutNode)
    {
        delete m_layoutNode;
        m_layoutNode = NULL;
    }
    ;
    
    m_has_extLst = false;
    
    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }
    ;
    
    m_has_desc = true;
    if (!m_desc)
    {
        m_desc = new CT_Description();
    }
    return m_desc;
    }

    const CT_Description& layoutDef_element::ChildGroup_1::get_desc() const
    {    
    if (m_desc)
    {
        return *m_desc;
    }
    return CT_Description::default_instance();
    }

    bool layoutDef_element::ChildGroup_1::has_catLst() const
    {    
    return m_has_catLst;
    }

    CT_Categories* layoutDef_element::ChildGroup_1::mutable_catLst()
    {    
    
    m_has_title = false;
    
    if (m_title)
    {
        delete m_title;
        m_title = NULL;
    }
    ;
    
    m_has_desc = false;
    
    if (m_desc)
    {
        delete m_desc;
        m_desc = NULL;
    }
    ;
    
    m_has_sampData = false;
    
    if (m_sampData)
    {
        delete m_sampData;
        m_sampData = NULL;
    }
    ;
    
    m_has_styleData = false;
    
    if (m_styleData)
    {
        delete m_styleData;
        m_styleData = NULL;
    }
    ;
    
    m_has_clrData = false;
    
    if (m_clrData)
    {
        delete m_clrData;
        m_clrData = NULL;
    }
    ;
    
    m_has_layoutNode = false;
    
    if (m_layoutNode)
    {
        delete m_layoutNode;
        m_layoutNode = NULL;
    }
    ;
    
    m_has_extLst = false;
    
    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }
    ;
    
    m_has_catLst = true;
    if (!m_catLst)
    {
        m_catLst = new CT_Categories();
    }
    return m_catLst;
    }

    const CT_Categories& layoutDef_element::ChildGroup_1::get_catLst() const
    {    
    if (m_catLst)
    {
        return *m_catLst;
    }
    return CT_Categories::default_instance();
    }

    bool layoutDef_element::ChildGroup_1::has_sampData() const
    {    
    return m_has_sampData;
    }

    CT_SampleData* layoutDef_element::ChildGroup_1::mutable_sampData()
    {    
    
    m_has_title = false;
    
    if (m_title)
    {
        delete m_title;
        m_title = NULL;
    }
    ;
    
    m_has_desc = false;
    
    if (m_desc)
    {
        delete m_desc;
        m_desc = NULL;
    }
    ;
    
    m_has_catLst = false;
    
    if (m_catLst)
    {
        delete m_catLst;
        m_catLst = NULL;
    }
    ;
    
    m_has_styleData = false;
    
    if (m_styleData)
    {
        delete m_styleData;
        m_styleData = NULL;
    }
    ;
    
    m_has_clrData = false;
    
    if (m_clrData)
    {
        delete m_clrData;
        m_clrData = NULL;
    }
    ;
    
    m_has_layoutNode = false;
    
    if (m_layoutNode)
    {
        delete m_layoutNode;
        m_layoutNode = NULL;
    }
    ;
    
    m_has_extLst = false;
    
    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }
    ;
    
    m_has_sampData = true;
    if (!m_sampData)
    {
        m_sampData = new CT_SampleData();
    }
    return m_sampData;
    }

    const CT_SampleData& layoutDef_element::ChildGroup_1::get_sampData() const
    {    
    if (m_sampData)
    {
        return *m_sampData;
    }
    return CT_SampleData::default_instance();
    }

    bool layoutDef_element::ChildGroup_1::has_styleData() const
    {    
    return m_has_styleData;
    }

    CT_SampleData* layoutDef_element::ChildGroup_1::mutable_styleData()
    {    
    
    m_has_title = false;
    
    if (m_title)
    {
        delete m_title;
        m_title = NULL;
    }
    ;
    
    m_has_desc = false;
    
    if (m_desc)
    {
        delete m_desc;
        m_desc = NULL;
    }
    ;
    
    m_has_catLst = false;
    
    if (m_catLst)
    {
        delete m_catLst;
        m_catLst = NULL;
    }
    ;
    
    m_has_sampData = false;
    
    if (m_sampData)
    {
        delete m_sampData;
        m_sampData = NULL;
    }
    ;
    
    m_has_clrData = false;
    
    if (m_clrData)
    {
        delete m_clrData;
        m_clrData = NULL;
    }
    ;
    
    m_has_layoutNode = false;
    
    if (m_layoutNode)
    {
        delete m_layoutNode;
        m_layoutNode = NULL;
    }
    ;
    
    m_has_extLst = false;
    
    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }
    ;
    
    m_has_styleData = true;
    if (!m_styleData)
    {
        m_styleData = new CT_SampleData();
    }
    return m_styleData;
    }

    const CT_SampleData& layoutDef_element::ChildGroup_1::get_styleData() const
    {    
    if (m_styleData)
    {
        return *m_styleData;
    }
    return CT_SampleData::default_instance();
    }

    bool layoutDef_element::ChildGroup_1::has_clrData() const
    {    
    return m_has_clrData;
    }

    CT_SampleData* layoutDef_element::ChildGroup_1::mutable_clrData()
    {    
    
    m_has_title = false;
    
    if (m_title)
    {
        delete m_title;
        m_title = NULL;
    }
    ;
    
    m_has_desc = false;
    
    if (m_desc)
    {
        delete m_desc;
        m_desc = NULL;
    }
    ;
    
    m_has_catLst = false;
    
    if (m_catLst)
    {
        delete m_catLst;
        m_catLst = NULL;
    }
    ;
    
    m_has_sampData = false;
    
    if (m_sampData)
    {
        delete m_sampData;
        m_sampData = NULL;
    }
    ;
    
    m_has_styleData = false;
    
    if (m_styleData)
    {
        delete m_styleData;
        m_styleData = NULL;
    }
    ;
    
    m_has_layoutNode = false;
    
    if (m_layoutNode)
    {
        delete m_layoutNode;
        m_layoutNode = NULL;
    }
    ;
    
    m_has_extLst = false;
    
    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }
    ;
    
    m_has_clrData = true;
    if (!m_clrData)
    {
        m_clrData = new CT_SampleData();
    }
    return m_clrData;
    }

    const CT_SampleData& layoutDef_element::ChildGroup_1::get_clrData() const
    {    
    if (m_clrData)
    {
        return *m_clrData;
    }
    return CT_SampleData::default_instance();
    }

    bool layoutDef_element::ChildGroup_1::has_layoutNode() const
    {    
    return m_has_layoutNode;
    }

    CT_LayoutNode* layoutDef_element::ChildGroup_1::mutable_layoutNode()
    {    
    
    m_has_title = false;
    
    if (m_title)
    {
        delete m_title;
        m_title = NULL;
    }
    ;
    
    m_has_desc = false;
    
    if (m_desc)
    {
        delete m_desc;
        m_desc = NULL;
    }
    ;
    
    m_has_catLst = false;
    
    if (m_catLst)
    {
        delete m_catLst;
        m_catLst = NULL;
    }
    ;
    
    m_has_sampData = false;
    
    if (m_sampData)
    {
        delete m_sampData;
        m_sampData = NULL;
    }
    ;
    
    m_has_styleData = false;
    
    if (m_styleData)
    {
        delete m_styleData;
        m_styleData = NULL;
    }
    ;
    
    m_has_clrData = false;
    
    if (m_clrData)
    {
        delete m_clrData;
        m_clrData = NULL;
    }
    ;
    
    m_has_extLst = false;
    
    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }
    ;
    
    m_has_layoutNode = true;
    if (!m_layoutNode)
    {
        m_layoutNode = new CT_LayoutNode();
    }
    return m_layoutNode;
    }

    const CT_LayoutNode& layoutDef_element::ChildGroup_1::get_layoutNode() const
    {    
    if (m_layoutNode)
    {
        return *m_layoutNode;
    }
    return CT_LayoutNode::default_instance();
    }

    bool layoutDef_element::ChildGroup_1::has_extLst() const
    {    
    return m_has_extLst;
    }

    ns_a::CT_OfficeArtExtensionList* layoutDef_element::ChildGroup_1::mutable_extLst()
    {    
    
    m_has_title = false;
    
    if (m_title)
    {
        delete m_title;
        m_title = NULL;
    }
    ;
    
    m_has_desc = false;
    
    if (m_desc)
    {
        delete m_desc;
        m_desc = NULL;
    }
    ;
    
    m_has_catLst = false;
    
    if (m_catLst)
    {
        delete m_catLst;
        m_catLst = NULL;
    }
    ;
    
    m_has_sampData = false;
    
    if (m_sampData)
    {
        delete m_sampData;
        m_sampData = NULL;
    }
    ;
    
    m_has_styleData = false;
    
    if (m_styleData)
    {
        delete m_styleData;
        m_styleData = NULL;
    }
    ;
    
    m_has_clrData = false;
    
    if (m_clrData)
    {
        delete m_clrData;
        m_clrData = NULL;
    }
    ;
    
    m_has_layoutNode = false;
    
    if (m_layoutNode)
    {
        delete m_layoutNode;
        m_layoutNode = NULL;
    }
    ;
    
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new ns_a::CT_OfficeArtExtensionList();
    }
    return m_extLst;
    }

    const ns_a::CT_OfficeArtExtensionList& layoutDef_element::ChildGroup_1::get_extLst() const
    {    
    if (m_extLst)
    {
        return *m_extLst;
    }
    return ns_a::CT_OfficeArtExtensionList::default_instance();
    }

layoutDef_element* layoutDef_element::default_instance_ = NULL;

    // layoutDefHdr_element
    layoutDefHdr_element::layoutDefHdr_element()
    :m_has_uniqueId_attr(false),
    m_uniqueId_attr(""),
    m_has_minVer_attr(false),
    m_minVer_attr(""),
    m_has_defStyle_attr(false),
    m_defStyle_attr(""),
    m_has_resId_attr(false),
    m_resId_attr(0)
    {
    }
    layoutDefHdr_element::~layoutDefHdr_element()
{
    clear();    }
    CT_Name* layoutDefHdr_element::add_title()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Name* pNewChild = pChildGroup->mutable_title();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Description* layoutDefHdr_element::add_desc()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Description* pNewChild = pChildGroup->mutable_desc();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Categories* layoutDefHdr_element::add_catLst()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Categories* pNewChild = pChildGroup->mutable_catLst();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_a::CT_OfficeArtExtensionList* layoutDefHdr_element::add_extLst()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_a::CT_OfficeArtExtensionList* pNewChild = pChildGroup->mutable_extLst();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    void layoutDefHdr_element::clear()
    {    
    m_has_uniqueId_attr = false;
    m_uniqueId_attr.clear();
    
    m_has_minVer_attr = false;
    m_minVer_attr.clear();
    
    m_has_defStyle_attr = false;
    m_defStyle_attr.clear();
    
    m_has_resId_attr = false;
    m_resId_attr = 0;
    
    {
        vector<ChildGroup_1*>::iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_1.clear();
    }
    }

    void layoutDefHdr_element::toXml(std::ostream& _outStream) const
    {    
    _outStream << "<diagram:layoutDefHdr";
    
    _outStream << " " << "xmlns:diagram=\"http://schemas.openxmlformats.org/drawingml/2006/diagram\"";
    _outStream << " " << "xmlns:s=\"http://schemas.openxmlformats.org/officeDocument/2006/sharedTypes\"";
    _outStream << " " << "xmlns:r=\"http://schemas.openxmlformats.org/officeDocument/2006/relationships\"";
    _outStream << " " << "xmlns:a=\"http://schemas.openxmlformats.org/drawingml/2006/main\"";
    
    if (m_has_uniqueId_attr)
    {
        _outStream << " " << "uniqueId" << "=\"" << m_uniqueId_attr << "\"";
    }
    
    
    if (m_has_minVer_attr)
    {
        _outStream << " " << "minVer" << "=\"" << m_minVer_attr << "\"";
    }
    
    
    if (m_has_defStyle_attr)
    {
        _outStream << " " << "defStyle" << "=\"" << m_defStyle_attr << "\"";
    }
    
    
    if (m_has_resId_attr)
    {
        _outStream << " " << "resId" << "=\"" << m_resId_attr << "\"";
    }
    
    _outStream << ">";
    
    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_title())
            {
                (*iter)->get_title().toXmlElem("diagram:title", "", _outStream);
            }
            else if ((*iter)->has_desc())
            {
                (*iter)->get_desc().toXmlElem("diagram:desc", "", _outStream);
            }
            else if ((*iter)->has_catLst())
            {
                (*iter)->get_catLst().toXmlElem("diagram:catLst", "", _outStream);
            }
            else if ((*iter)->has_extLst())
            {
                (*iter)->get_extLst().toXmlElem("diagram:extLst", "", _outStream);
            }
        }
    }
    
    _outStream << "</diagram:layoutDefHdr>";
    }

    const layoutDefHdr_element& layoutDefHdr_element::default_instance()
    {    
    if (!layoutDefHdr_element::default_instance_)
    {
        layoutDefHdr_element::default_instance_ = new layoutDefHdr_element();
    }
    return *layoutDefHdr_element::default_instance_;
    }

    bool layoutDefHdr_element::has_uniqueId_attr() const
    {    
    return m_has_uniqueId_attr;
    }

    void layoutDefHdr_element::set_uniqueId_attr(const XSD::string_& _uniqueId_attr)
    {    
    m_has_uniqueId_attr = true;
    m_uniqueId_attr = _uniqueId_attr;
    }

    const XSD::string_& layoutDefHdr_element::get_uniqueId_attr() const
    {    
    return m_uniqueId_attr;
    }

    bool layoutDefHdr_element::has_minVer_attr() const
    {    
    return m_has_minVer_attr;
    }

    void layoutDefHdr_element::set_minVer_attr(const XSD::string_& _minVer_attr)
    {    
    m_has_minVer_attr = true;
    m_minVer_attr = _minVer_attr;
    }

    const XSD::string_& layoutDefHdr_element::get_minVer_attr() const
    {    
    return m_minVer_attr;
    }

    bool layoutDefHdr_element::has_defStyle_attr() const
    {    
    return m_has_defStyle_attr;
    }

    void layoutDefHdr_element::set_defStyle_attr(const XSD::string_& _defStyle_attr)
    {    
    m_has_defStyle_attr = true;
    m_defStyle_attr = _defStyle_attr;
    }

    const XSD::string_& layoutDefHdr_element::get_defStyle_attr() const
    {    
    return m_defStyle_attr;
    }

    bool layoutDefHdr_element::has_resId_attr() const
    {    
    return m_has_resId_attr;
    }

    void layoutDefHdr_element::set_resId_attr(const XSD::int_& _resId_attr)
    {    
    m_has_resId_attr = true;
    m_resId_attr = _resId_attr;
    }

    const XSD::int_& layoutDefHdr_element::get_resId_attr() const
    {    
    return m_resId_attr;
    }


    // layoutDefHdr_element::ChildGroup_1
    layoutDefHdr_element::ChildGroup_1::ChildGroup_1()
    :m_has_title(false),
    m_title(NULL),
    m_has_desc(false),
    m_desc(NULL),
    m_has_catLst(false),
    m_catLst(NULL),
    m_has_extLst(false),
    m_extLst(NULL)
    {
    }
    bool layoutDefHdr_element::ChildGroup_1::has_title() const
    {    
    return m_has_title;
    }

    CT_Name* layoutDefHdr_element::ChildGroup_1::mutable_title()
    {    
    
    m_has_desc = false;
    
    if (m_desc)
    {
        delete m_desc;
        m_desc = NULL;
    }
    ;
    
    m_has_catLst = false;
    
    if (m_catLst)
    {
        delete m_catLst;
        m_catLst = NULL;
    }
    ;
    
    m_has_extLst = false;
    
    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }
    ;
    
    m_has_title = true;
    if (!m_title)
    {
        m_title = new CT_Name();
    }
    return m_title;
    }

    const CT_Name& layoutDefHdr_element::ChildGroup_1::get_title() const
    {    
    if (m_title)
    {
        return *m_title;
    }
    return CT_Name::default_instance();
    }

    bool layoutDefHdr_element::ChildGroup_1::has_desc() const
    {    
    return m_has_desc;
    }

    CT_Description* layoutDefHdr_element::ChildGroup_1::mutable_desc()
    {    
    
    m_has_title = false;
    
    if (m_title)
    {
        delete m_title;
        m_title = NULL;
    }
    ;
    
    m_has_catLst = false;
    
    if (m_catLst)
    {
        delete m_catLst;
        m_catLst = NULL;
    }
    ;
    
    m_has_extLst = false;
    
    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }
    ;
    
    m_has_desc = true;
    if (!m_desc)
    {
        m_desc = new CT_Description();
    }
    return m_desc;
    }

    const CT_Description& layoutDefHdr_element::ChildGroup_1::get_desc() const
    {    
    if (m_desc)
    {
        return *m_desc;
    }
    return CT_Description::default_instance();
    }

    bool layoutDefHdr_element::ChildGroup_1::has_catLst() const
    {    
    return m_has_catLst;
    }

    CT_Categories* layoutDefHdr_element::ChildGroup_1::mutable_catLst()
    {    
    
    m_has_title = false;
    
    if (m_title)
    {
        delete m_title;
        m_title = NULL;
    }
    ;
    
    m_has_desc = false;
    
    if (m_desc)
    {
        delete m_desc;
        m_desc = NULL;
    }
    ;
    
    m_has_extLst = false;
    
    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }
    ;
    
    m_has_catLst = true;
    if (!m_catLst)
    {
        m_catLst = new CT_Categories();
    }
    return m_catLst;
    }

    const CT_Categories& layoutDefHdr_element::ChildGroup_1::get_catLst() const
    {    
    if (m_catLst)
    {
        return *m_catLst;
    }
    return CT_Categories::default_instance();
    }

    bool layoutDefHdr_element::ChildGroup_1::has_extLst() const
    {    
    return m_has_extLst;
    }

    ns_a::CT_OfficeArtExtensionList* layoutDefHdr_element::ChildGroup_1::mutable_extLst()
    {    
    
    m_has_title = false;
    
    if (m_title)
    {
        delete m_title;
        m_title = NULL;
    }
    ;
    
    m_has_desc = false;
    
    if (m_desc)
    {
        delete m_desc;
        m_desc = NULL;
    }
    ;
    
    m_has_catLst = false;
    
    if (m_catLst)
    {
        delete m_catLst;
        m_catLst = NULL;
    }
    ;
    
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new ns_a::CT_OfficeArtExtensionList();
    }
    return m_extLst;
    }

    const ns_a::CT_OfficeArtExtensionList& layoutDefHdr_element::ChildGroup_1::get_extLst() const
    {    
    if (m_extLst)
    {
        return *m_extLst;
    }
    return ns_a::CT_OfficeArtExtensionList::default_instance();
    }

layoutDefHdr_element* layoutDefHdr_element::default_instance_ = NULL;

    // layoutDefHdrLst_element
    layoutDefHdrLst_element::layoutDefHdrLst_element()

    {
    }
    layoutDefHdrLst_element::~layoutDefHdrLst_element()
{
    clear();    }
    CT_DiagramDefinitionHeader* layoutDefHdrLst_element::add_layoutDefHdr()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_DiagramDefinitionHeader* pNewChild = pChildGroup->mutable_layoutDefHdr();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    void layoutDefHdrLst_element::clear()
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

    void layoutDefHdrLst_element::toXml(std::ostream& _outStream) const
    {    
    _outStream << "<diagram:layoutDefHdrLst";
    
    _outStream << " " << "xmlns:diagram=\"http://schemas.openxmlformats.org/drawingml/2006/diagram\"";
    _outStream << " " << "xmlns:s=\"http://schemas.openxmlformats.org/officeDocument/2006/sharedTypes\"";
    _outStream << " " << "xmlns:r=\"http://schemas.openxmlformats.org/officeDocument/2006/relationships\"";
    _outStream << " " << "xmlns:a=\"http://schemas.openxmlformats.org/drawingml/2006/main\"";
    
    _outStream << ">";
    
    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_layoutDefHdr())
            {
                (*iter)->get_layoutDefHdr().toXmlElem("diagram:layoutDefHdr", "", _outStream);
            }
        }
    }
    
    _outStream << "</diagram:layoutDefHdrLst>";
    }

    const layoutDefHdrLst_element& layoutDefHdrLst_element::default_instance()
    {    
    if (!layoutDefHdrLst_element::default_instance_)
    {
        layoutDefHdrLst_element::default_instance_ = new layoutDefHdrLst_element();
    }
    return *layoutDefHdrLst_element::default_instance_;
    }


    // layoutDefHdrLst_element::ChildGroup_1
    layoutDefHdrLst_element::ChildGroup_1::ChildGroup_1()
    :m_has_layoutDefHdr(false),
    m_layoutDefHdr(NULL)
    {
    }
    bool layoutDefHdrLst_element::ChildGroup_1::has_layoutDefHdr() const
    {    
    return m_has_layoutDefHdr;
    }

    CT_DiagramDefinitionHeader* layoutDefHdrLst_element::ChildGroup_1::mutable_layoutDefHdr()
    {    
    
    m_has_layoutDefHdr = true;
    if (!m_layoutDefHdr)
    {
        m_layoutDefHdr = new CT_DiagramDefinitionHeader();
    }
    return m_layoutDefHdr;
    }

    const CT_DiagramDefinitionHeader& layoutDefHdrLst_element::ChildGroup_1::get_layoutDefHdr() const
    {    
    if (m_layoutDefHdr)
    {
        return *m_layoutDefHdr;
    }
    return CT_DiagramDefinitionHeader::default_instance();
    }

layoutDefHdrLst_element* layoutDefHdrLst_element::default_instance_ = NULL;

    // relIds_element
    relIds_element::relIds_element()
    :m_has_r_dm_attr(false),
    m_r_dm_attr(NULL),
    m_has_r_lo_attr(false),
    m_r_lo_attr(NULL),
    m_has_r_qs_attr(false),
    m_r_qs_attr(NULL),
    m_has_r_cs_attr(false),
    m_r_cs_attr(NULL)
    {
    }
    relIds_element::~relIds_element()
{
    clear();    }
    void relIds_element::clear()
    {    
    m_has_r_dm_attr = false;
    
    if (m_r_dm_attr)
    {
        delete m_r_dm_attr;
        m_r_dm_attr = NULL;
    }
    
    
    m_has_r_lo_attr = false;
    
    if (m_r_lo_attr)
    {
        delete m_r_lo_attr;
        m_r_lo_attr = NULL;
    }
    
    
    m_has_r_qs_attr = false;
    
    if (m_r_qs_attr)
    {
        delete m_r_qs_attr;
        m_r_qs_attr = NULL;
    }
    
    
    m_has_r_cs_attr = false;
    
    if (m_r_cs_attr)
    {
        delete m_r_cs_attr;
        m_r_cs_attr = NULL;
    }
    
    }

    void relIds_element::toXml(std::ostream& _outStream) const
    {    
    _outStream << "<diagram:relIds";
    
    _outStream << " " << "xmlns:diagram=\"http://schemas.openxmlformats.org/drawingml/2006/diagram\"";
    _outStream << " " << "xmlns:s=\"http://schemas.openxmlformats.org/officeDocument/2006/sharedTypes\"";
    _outStream << " " << "xmlns:r=\"http://schemas.openxmlformats.org/officeDocument/2006/relationships\"";
    _outStream << " " << "xmlns:a=\"http://schemas.openxmlformats.org/drawingml/2006/main\"";
    
    if (m_has_r_dm_attr)
    {
        m_r_dm_attr->toXmlAttr("r:dm", _outStream);
    }
    
    
    if (m_has_r_lo_attr)
    {
        m_r_lo_attr->toXmlAttr("r:lo", _outStream);
    }
    
    
    if (m_has_r_qs_attr)
    {
        m_r_qs_attr->toXmlAttr("r:qs", _outStream);
    }
    
    
    if (m_has_r_cs_attr)
    {
        m_r_cs_attr->toXmlAttr("r:cs", _outStream);
    }
    
    _outStream << ">";
    
    _outStream << "</diagram:relIds>";
    }

    const relIds_element& relIds_element::default_instance()
    {    
    if (!relIds_element::default_instance_)
    {
        relIds_element::default_instance_ = new relIds_element();
    }
    return *relIds_element::default_instance_;
    }

    bool relIds_element::has_r_dm_attr() const
    {    
    return m_has_r_dm_attr;
    }

    void relIds_element::set_r_dm_attr(const ns_r::ST_RelationshipId& _r_dm_attr)
    {    
    m_has_r_dm_attr = true;
    m_r_dm_attr = new ns_r::ST_RelationshipId(_r_dm_attr);
    }

    const ns_r::ST_RelationshipId& relIds_element::get_r_dm_attr() const
    {    
    if (m_r_dm_attr)
    {
        return *m_r_dm_attr;
    }
    return ns_r::ST_RelationshipId::default_instance();
    }

    bool relIds_element::has_r_lo_attr() const
    {    
    return m_has_r_lo_attr;
    }

    void relIds_element::set_r_lo_attr(const ns_r::ST_RelationshipId& _r_lo_attr)
    {    
    m_has_r_lo_attr = true;
    m_r_lo_attr = new ns_r::ST_RelationshipId(_r_lo_attr);
    }

    const ns_r::ST_RelationshipId& relIds_element::get_r_lo_attr() const
    {    
    if (m_r_lo_attr)
    {
        return *m_r_lo_attr;
    }
    return ns_r::ST_RelationshipId::default_instance();
    }

    bool relIds_element::has_r_qs_attr() const
    {    
    return m_has_r_qs_attr;
    }

    void relIds_element::set_r_qs_attr(const ns_r::ST_RelationshipId& _r_qs_attr)
    {    
    m_has_r_qs_attr = true;
    m_r_qs_attr = new ns_r::ST_RelationshipId(_r_qs_attr);
    }

    const ns_r::ST_RelationshipId& relIds_element::get_r_qs_attr() const
    {    
    if (m_r_qs_attr)
    {
        return *m_r_qs_attr;
    }
    return ns_r::ST_RelationshipId::default_instance();
    }

    bool relIds_element::has_r_cs_attr() const
    {    
    return m_has_r_cs_attr;
    }

    void relIds_element::set_r_cs_attr(const ns_r::ST_RelationshipId& _r_cs_attr)
    {    
    m_has_r_cs_attr = true;
    m_r_cs_attr = new ns_r::ST_RelationshipId(_r_cs_attr);
    }

    const ns_r::ST_RelationshipId& relIds_element::get_r_cs_attr() const
    {    
    if (m_r_cs_attr)
    {
        return *m_r_cs_attr;
    }
    return ns_r::ST_RelationshipId::default_instance();
    }

relIds_element* relIds_element::default_instance_ = NULL;

    // styleDef_element
    styleDef_element::styleDef_element()
    :m_has_uniqueId_attr(false),
    m_uniqueId_attr(""),
    m_has_minVer_attr(false),
    m_minVer_attr("")
    {
    }
    styleDef_element::~styleDef_element()
{
    clear();    }
    CT_SDName* styleDef_element::add_title()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_SDName* pNewChild = pChildGroup->mutable_title();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_SDDescription* styleDef_element::add_desc()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_SDDescription* pNewChild = pChildGroup->mutable_desc();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_SDCategories* styleDef_element::add_catLst()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_SDCategories* pNewChild = pChildGroup->mutable_catLst();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_a::CT_Scene3D* styleDef_element::add_scene3d()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_a::CT_Scene3D* pNewChild = pChildGroup->mutable_scene3d();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_StyleLabel* styleDef_element::add_styleLbl()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_StyleLabel* pNewChild = pChildGroup->mutable_styleLbl();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_a::CT_OfficeArtExtensionList* styleDef_element::add_extLst()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_a::CT_OfficeArtExtensionList* pNewChild = pChildGroup->mutable_extLst();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    void styleDef_element::clear()
    {    
    m_has_uniqueId_attr = false;
    m_uniqueId_attr.clear();
    
    m_has_minVer_attr = false;
    m_minVer_attr.clear();
    
    {
        vector<ChildGroup_1*>::iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_1.clear();
    }
    }

    void styleDef_element::toXml(std::ostream& _outStream) const
    {    
    _outStream << "<diagram:styleDef";
    
    _outStream << " " << "xmlns:diagram=\"http://schemas.openxmlformats.org/drawingml/2006/diagram\"";
    _outStream << " " << "xmlns:s=\"http://schemas.openxmlformats.org/officeDocument/2006/sharedTypes\"";
    _outStream << " " << "xmlns:r=\"http://schemas.openxmlformats.org/officeDocument/2006/relationships\"";
    _outStream << " " << "xmlns:a=\"http://schemas.openxmlformats.org/drawingml/2006/main\"";
    
    if (m_has_uniqueId_attr)
    {
        _outStream << " " << "uniqueId" << "=\"" << m_uniqueId_attr << "\"";
    }
    
    
    if (m_has_minVer_attr)
    {
        _outStream << " " << "minVer" << "=\"" << m_minVer_attr << "\"";
    }
    
    _outStream << ">";
    
    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_title())
            {
                (*iter)->get_title().toXmlElem("diagram:title", "", _outStream);
            }
            else if ((*iter)->has_desc())
            {
                (*iter)->get_desc().toXmlElem("diagram:desc", "", _outStream);
            }
            else if ((*iter)->has_catLst())
            {
                (*iter)->get_catLst().toXmlElem("diagram:catLst", "", _outStream);
            }
            else if ((*iter)->has_scene3d())
            {
                (*iter)->get_scene3d().toXmlElem("diagram:scene3d", "", _outStream);
            }
            else if ((*iter)->has_styleLbl())
            {
                (*iter)->get_styleLbl().toXmlElem("diagram:styleLbl", "", _outStream);
            }
            else if ((*iter)->has_extLst())
            {
                (*iter)->get_extLst().toXmlElem("diagram:extLst", "", _outStream);
            }
        }
    }
    
    _outStream << "</diagram:styleDef>";
    }

    const styleDef_element& styleDef_element::default_instance()
    {    
    if (!styleDef_element::default_instance_)
    {
        styleDef_element::default_instance_ = new styleDef_element();
    }
    return *styleDef_element::default_instance_;
    }

    bool styleDef_element::has_uniqueId_attr() const
    {    
    return m_has_uniqueId_attr;
    }

    void styleDef_element::set_uniqueId_attr(const XSD::string_& _uniqueId_attr)
    {    
    m_has_uniqueId_attr = true;
    m_uniqueId_attr = _uniqueId_attr;
    }

    const XSD::string_& styleDef_element::get_uniqueId_attr() const
    {    
    return m_uniqueId_attr;
    }

    bool styleDef_element::has_minVer_attr() const
    {    
    return m_has_minVer_attr;
    }

    void styleDef_element::set_minVer_attr(const XSD::string_& _minVer_attr)
    {    
    m_has_minVer_attr = true;
    m_minVer_attr = _minVer_attr;
    }

    const XSD::string_& styleDef_element::get_minVer_attr() const
    {    
    return m_minVer_attr;
    }


    // styleDef_element::ChildGroup_1
    styleDef_element::ChildGroup_1::ChildGroup_1()
    :m_has_title(false),
    m_title(NULL),
    m_has_desc(false),
    m_desc(NULL),
    m_has_catLst(false),
    m_catLst(NULL),
    m_has_scene3d(false),
    m_scene3d(NULL),
    m_has_styleLbl(false),
    m_styleLbl(NULL),
    m_has_extLst(false),
    m_extLst(NULL)
    {
    }
    bool styleDef_element::ChildGroup_1::has_title() const
    {    
    return m_has_title;
    }

    CT_SDName* styleDef_element::ChildGroup_1::mutable_title()
    {    
    
    m_has_desc = false;
    
    if (m_desc)
    {
        delete m_desc;
        m_desc = NULL;
    }
    ;
    
    m_has_catLst = false;
    
    if (m_catLst)
    {
        delete m_catLst;
        m_catLst = NULL;
    }
    ;
    
    m_has_scene3d = false;
    
    if (m_scene3d)
    {
        delete m_scene3d;
        m_scene3d = NULL;
    }
    ;
    
    m_has_styleLbl = false;
    
    if (m_styleLbl)
    {
        delete m_styleLbl;
        m_styleLbl = NULL;
    }
    ;
    
    m_has_extLst = false;
    
    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }
    ;
    
    m_has_title = true;
    if (!m_title)
    {
        m_title = new CT_SDName();
    }
    return m_title;
    }

    const CT_SDName& styleDef_element::ChildGroup_1::get_title() const
    {    
    if (m_title)
    {
        return *m_title;
    }
    return CT_SDName::default_instance();
    }

    bool styleDef_element::ChildGroup_1::has_desc() const
    {    
    return m_has_desc;
    }

    CT_SDDescription* styleDef_element::ChildGroup_1::mutable_desc()
    {    
    
    m_has_title = false;
    
    if (m_title)
    {
        delete m_title;
        m_title = NULL;
    }
    ;
    
    m_has_catLst = false;
    
    if (m_catLst)
    {
        delete m_catLst;
        m_catLst = NULL;
    }
    ;
    
    m_has_scene3d = false;
    
    if (m_scene3d)
    {
        delete m_scene3d;
        m_scene3d = NULL;
    }
    ;
    
    m_has_styleLbl = false;
    
    if (m_styleLbl)
    {
        delete m_styleLbl;
        m_styleLbl = NULL;
    }
    ;
    
    m_has_extLst = false;
    
    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }
    ;
    
    m_has_desc = true;
    if (!m_desc)
    {
        m_desc = new CT_SDDescription();
    }
    return m_desc;
    }

    const CT_SDDescription& styleDef_element::ChildGroup_1::get_desc() const
    {    
    if (m_desc)
    {
        return *m_desc;
    }
    return CT_SDDescription::default_instance();
    }

    bool styleDef_element::ChildGroup_1::has_catLst() const
    {    
    return m_has_catLst;
    }

    CT_SDCategories* styleDef_element::ChildGroup_1::mutable_catLst()
    {    
    
    m_has_title = false;
    
    if (m_title)
    {
        delete m_title;
        m_title = NULL;
    }
    ;
    
    m_has_desc = false;
    
    if (m_desc)
    {
        delete m_desc;
        m_desc = NULL;
    }
    ;
    
    m_has_scene3d = false;
    
    if (m_scene3d)
    {
        delete m_scene3d;
        m_scene3d = NULL;
    }
    ;
    
    m_has_styleLbl = false;
    
    if (m_styleLbl)
    {
        delete m_styleLbl;
        m_styleLbl = NULL;
    }
    ;
    
    m_has_extLst = false;
    
    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }
    ;
    
    m_has_catLst = true;
    if (!m_catLst)
    {
        m_catLst = new CT_SDCategories();
    }
    return m_catLst;
    }

    const CT_SDCategories& styleDef_element::ChildGroup_1::get_catLst() const
    {    
    if (m_catLst)
    {
        return *m_catLst;
    }
    return CT_SDCategories::default_instance();
    }

    bool styleDef_element::ChildGroup_1::has_scene3d() const
    {    
    return m_has_scene3d;
    }

    ns_a::CT_Scene3D* styleDef_element::ChildGroup_1::mutable_scene3d()
    {    
    
    m_has_title = false;
    
    if (m_title)
    {
        delete m_title;
        m_title = NULL;
    }
    ;
    
    m_has_desc = false;
    
    if (m_desc)
    {
        delete m_desc;
        m_desc = NULL;
    }
    ;
    
    m_has_catLst = false;
    
    if (m_catLst)
    {
        delete m_catLst;
        m_catLst = NULL;
    }
    ;
    
    m_has_styleLbl = false;
    
    if (m_styleLbl)
    {
        delete m_styleLbl;
        m_styleLbl = NULL;
    }
    ;
    
    m_has_extLst = false;
    
    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }
    ;
    
    m_has_scene3d = true;
    if (!m_scene3d)
    {
        m_scene3d = new ns_a::CT_Scene3D();
    }
    return m_scene3d;
    }

    const ns_a::CT_Scene3D& styleDef_element::ChildGroup_1::get_scene3d() const
    {    
    if (m_scene3d)
    {
        return *m_scene3d;
    }
    return ns_a::CT_Scene3D::default_instance();
    }

    bool styleDef_element::ChildGroup_1::has_styleLbl() const
    {    
    return m_has_styleLbl;
    }

    CT_StyleLabel* styleDef_element::ChildGroup_1::mutable_styleLbl()
    {    
    
    m_has_title = false;
    
    if (m_title)
    {
        delete m_title;
        m_title = NULL;
    }
    ;
    
    m_has_desc = false;
    
    if (m_desc)
    {
        delete m_desc;
        m_desc = NULL;
    }
    ;
    
    m_has_catLst = false;
    
    if (m_catLst)
    {
        delete m_catLst;
        m_catLst = NULL;
    }
    ;
    
    m_has_scene3d = false;
    
    if (m_scene3d)
    {
        delete m_scene3d;
        m_scene3d = NULL;
    }
    ;
    
    m_has_extLst = false;
    
    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }
    ;
    
    m_has_styleLbl = true;
    if (!m_styleLbl)
    {
        m_styleLbl = new CT_StyleLabel();
    }
    return m_styleLbl;
    }

    const CT_StyleLabel& styleDef_element::ChildGroup_1::get_styleLbl() const
    {    
    if (m_styleLbl)
    {
        return *m_styleLbl;
    }
    return CT_StyleLabel::default_instance();
    }

    bool styleDef_element::ChildGroup_1::has_extLst() const
    {    
    return m_has_extLst;
    }

    ns_a::CT_OfficeArtExtensionList* styleDef_element::ChildGroup_1::mutable_extLst()
    {    
    
    m_has_title = false;
    
    if (m_title)
    {
        delete m_title;
        m_title = NULL;
    }
    ;
    
    m_has_desc = false;
    
    if (m_desc)
    {
        delete m_desc;
        m_desc = NULL;
    }
    ;
    
    m_has_catLst = false;
    
    if (m_catLst)
    {
        delete m_catLst;
        m_catLst = NULL;
    }
    ;
    
    m_has_scene3d = false;
    
    if (m_scene3d)
    {
        delete m_scene3d;
        m_scene3d = NULL;
    }
    ;
    
    m_has_styleLbl = false;
    
    if (m_styleLbl)
    {
        delete m_styleLbl;
        m_styleLbl = NULL;
    }
    ;
    
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new ns_a::CT_OfficeArtExtensionList();
    }
    return m_extLst;
    }

    const ns_a::CT_OfficeArtExtensionList& styleDef_element::ChildGroup_1::get_extLst() const
    {    
    if (m_extLst)
    {
        return *m_extLst;
    }
    return ns_a::CT_OfficeArtExtensionList::default_instance();
    }

styleDef_element* styleDef_element::default_instance_ = NULL;

    // styleDefHdr_element
    styleDefHdr_element::styleDefHdr_element()
    :m_has_uniqueId_attr(false),
    m_uniqueId_attr(""),
    m_has_minVer_attr(false),
    m_minVer_attr(""),
    m_has_resId_attr(false),
    m_resId_attr(0)
    {
    }
    styleDefHdr_element::~styleDefHdr_element()
{
    clear();    }
    CT_SDName* styleDefHdr_element::add_title()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_SDName* pNewChild = pChildGroup->mutable_title();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_SDDescription* styleDefHdr_element::add_desc()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_SDDescription* pNewChild = pChildGroup->mutable_desc();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_SDCategories* styleDefHdr_element::add_catLst()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_SDCategories* pNewChild = pChildGroup->mutable_catLst();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_a::CT_OfficeArtExtensionList* styleDefHdr_element::add_extLst()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_a::CT_OfficeArtExtensionList* pNewChild = pChildGroup->mutable_extLst();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    void styleDefHdr_element::clear()
    {    
    m_has_uniqueId_attr = false;
    m_uniqueId_attr.clear();
    
    m_has_minVer_attr = false;
    m_minVer_attr.clear();
    
    m_has_resId_attr = false;
    m_resId_attr = 0;
    
    {
        vector<ChildGroup_1*>::iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_1.clear();
    }
    }

    void styleDefHdr_element::toXml(std::ostream& _outStream) const
    {    
    _outStream << "<diagram:styleDefHdr";
    
    _outStream << " " << "xmlns:diagram=\"http://schemas.openxmlformats.org/drawingml/2006/diagram\"";
    _outStream << " " << "xmlns:s=\"http://schemas.openxmlformats.org/officeDocument/2006/sharedTypes\"";
    _outStream << " " << "xmlns:r=\"http://schemas.openxmlformats.org/officeDocument/2006/relationships\"";
    _outStream << " " << "xmlns:a=\"http://schemas.openxmlformats.org/drawingml/2006/main\"";
    
    if (m_has_uniqueId_attr)
    {
        _outStream << " " << "uniqueId" << "=\"" << m_uniqueId_attr << "\"";
    }
    
    
    if (m_has_minVer_attr)
    {
        _outStream << " " << "minVer" << "=\"" << m_minVer_attr << "\"";
    }
    
    
    if (m_has_resId_attr)
    {
        _outStream << " " << "resId" << "=\"" << m_resId_attr << "\"";
    }
    
    _outStream << ">";
    
    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_title())
            {
                (*iter)->get_title().toXmlElem("diagram:title", "", _outStream);
            }
            else if ((*iter)->has_desc())
            {
                (*iter)->get_desc().toXmlElem("diagram:desc", "", _outStream);
            }
            else if ((*iter)->has_catLst())
            {
                (*iter)->get_catLst().toXmlElem("diagram:catLst", "", _outStream);
            }
            else if ((*iter)->has_extLst())
            {
                (*iter)->get_extLst().toXmlElem("diagram:extLst", "", _outStream);
            }
        }
    }
    
    _outStream << "</diagram:styleDefHdr>";
    }

    const styleDefHdr_element& styleDefHdr_element::default_instance()
    {    
    if (!styleDefHdr_element::default_instance_)
    {
        styleDefHdr_element::default_instance_ = new styleDefHdr_element();
    }
    return *styleDefHdr_element::default_instance_;
    }

    bool styleDefHdr_element::has_uniqueId_attr() const
    {    
    return m_has_uniqueId_attr;
    }

    void styleDefHdr_element::set_uniqueId_attr(const XSD::string_& _uniqueId_attr)
    {    
    m_has_uniqueId_attr = true;
    m_uniqueId_attr = _uniqueId_attr;
    }

    const XSD::string_& styleDefHdr_element::get_uniqueId_attr() const
    {    
    return m_uniqueId_attr;
    }

    bool styleDefHdr_element::has_minVer_attr() const
    {    
    return m_has_minVer_attr;
    }

    void styleDefHdr_element::set_minVer_attr(const XSD::string_& _minVer_attr)
    {    
    m_has_minVer_attr = true;
    m_minVer_attr = _minVer_attr;
    }

    const XSD::string_& styleDefHdr_element::get_minVer_attr() const
    {    
    return m_minVer_attr;
    }

    bool styleDefHdr_element::has_resId_attr() const
    {    
    return m_has_resId_attr;
    }

    void styleDefHdr_element::set_resId_attr(const XSD::int_& _resId_attr)
    {    
    m_has_resId_attr = true;
    m_resId_attr = _resId_attr;
    }

    const XSD::int_& styleDefHdr_element::get_resId_attr() const
    {    
    return m_resId_attr;
    }


    // styleDefHdr_element::ChildGroup_1
    styleDefHdr_element::ChildGroup_1::ChildGroup_1()
    :m_has_title(false),
    m_title(NULL),
    m_has_desc(false),
    m_desc(NULL),
    m_has_catLst(false),
    m_catLst(NULL),
    m_has_extLst(false),
    m_extLst(NULL)
    {
    }
    bool styleDefHdr_element::ChildGroup_1::has_title() const
    {    
    return m_has_title;
    }

    CT_SDName* styleDefHdr_element::ChildGroup_1::mutable_title()
    {    
    
    m_has_desc = false;
    
    if (m_desc)
    {
        delete m_desc;
        m_desc = NULL;
    }
    ;
    
    m_has_catLst = false;
    
    if (m_catLst)
    {
        delete m_catLst;
        m_catLst = NULL;
    }
    ;
    
    m_has_extLst = false;
    
    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }
    ;
    
    m_has_title = true;
    if (!m_title)
    {
        m_title = new CT_SDName();
    }
    return m_title;
    }

    const CT_SDName& styleDefHdr_element::ChildGroup_1::get_title() const
    {    
    if (m_title)
    {
        return *m_title;
    }
    return CT_SDName::default_instance();
    }

    bool styleDefHdr_element::ChildGroup_1::has_desc() const
    {    
    return m_has_desc;
    }

    CT_SDDescription* styleDefHdr_element::ChildGroup_1::mutable_desc()
    {    
    
    m_has_title = false;
    
    if (m_title)
    {
        delete m_title;
        m_title = NULL;
    }
    ;
    
    m_has_catLst = false;
    
    if (m_catLst)
    {
        delete m_catLst;
        m_catLst = NULL;
    }
    ;
    
    m_has_extLst = false;
    
    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }
    ;
    
    m_has_desc = true;
    if (!m_desc)
    {
        m_desc = new CT_SDDescription();
    }
    return m_desc;
    }

    const CT_SDDescription& styleDefHdr_element::ChildGroup_1::get_desc() const
    {    
    if (m_desc)
    {
        return *m_desc;
    }
    return CT_SDDescription::default_instance();
    }

    bool styleDefHdr_element::ChildGroup_1::has_catLst() const
    {    
    return m_has_catLst;
    }

    CT_SDCategories* styleDefHdr_element::ChildGroup_1::mutable_catLst()
    {    
    
    m_has_title = false;
    
    if (m_title)
    {
        delete m_title;
        m_title = NULL;
    }
    ;
    
    m_has_desc = false;
    
    if (m_desc)
    {
        delete m_desc;
        m_desc = NULL;
    }
    ;
    
    m_has_extLst = false;
    
    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }
    ;
    
    m_has_catLst = true;
    if (!m_catLst)
    {
        m_catLst = new CT_SDCategories();
    }
    return m_catLst;
    }

    const CT_SDCategories& styleDefHdr_element::ChildGroup_1::get_catLst() const
    {    
    if (m_catLst)
    {
        return *m_catLst;
    }
    return CT_SDCategories::default_instance();
    }

    bool styleDefHdr_element::ChildGroup_1::has_extLst() const
    {    
    return m_has_extLst;
    }

    ns_a::CT_OfficeArtExtensionList* styleDefHdr_element::ChildGroup_1::mutable_extLst()
    {    
    
    m_has_title = false;
    
    if (m_title)
    {
        delete m_title;
        m_title = NULL;
    }
    ;
    
    m_has_desc = false;
    
    if (m_desc)
    {
        delete m_desc;
        m_desc = NULL;
    }
    ;
    
    m_has_catLst = false;
    
    if (m_catLst)
    {
        delete m_catLst;
        m_catLst = NULL;
    }
    ;
    
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new ns_a::CT_OfficeArtExtensionList();
    }
    return m_extLst;
    }

    const ns_a::CT_OfficeArtExtensionList& styleDefHdr_element::ChildGroup_1::get_extLst() const
    {    
    if (m_extLst)
    {
        return *m_extLst;
    }
    return ns_a::CT_OfficeArtExtensionList::default_instance();
    }

styleDefHdr_element* styleDefHdr_element::default_instance_ = NULL;

    // styleDefHdrLst_element
    styleDefHdrLst_element::styleDefHdrLst_element()

    {
    }
    styleDefHdrLst_element::~styleDefHdrLst_element()
{
    clear();    }
    CT_StyleDefinitionHeader* styleDefHdrLst_element::add_styleDefHdr()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_StyleDefinitionHeader* pNewChild = pChildGroup->mutable_styleDefHdr();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    void styleDefHdrLst_element::clear()
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

    void styleDefHdrLst_element::toXml(std::ostream& _outStream) const
    {    
    _outStream << "<diagram:styleDefHdrLst";
    
    _outStream << " " << "xmlns:diagram=\"http://schemas.openxmlformats.org/drawingml/2006/diagram\"";
    _outStream << " " << "xmlns:s=\"http://schemas.openxmlformats.org/officeDocument/2006/sharedTypes\"";
    _outStream << " " << "xmlns:r=\"http://schemas.openxmlformats.org/officeDocument/2006/relationships\"";
    _outStream << " " << "xmlns:a=\"http://schemas.openxmlformats.org/drawingml/2006/main\"";
    
    _outStream << ">";
    
    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_styleDefHdr())
            {
                (*iter)->get_styleDefHdr().toXmlElem("diagram:styleDefHdr", "", _outStream);
            }
        }
    }
    
    _outStream << "</diagram:styleDefHdrLst>";
    }

    const styleDefHdrLst_element& styleDefHdrLst_element::default_instance()
    {    
    if (!styleDefHdrLst_element::default_instance_)
    {
        styleDefHdrLst_element::default_instance_ = new styleDefHdrLst_element();
    }
    return *styleDefHdrLst_element::default_instance_;
    }


    // styleDefHdrLst_element::ChildGroup_1
    styleDefHdrLst_element::ChildGroup_1::ChildGroup_1()
    :m_has_styleDefHdr(false),
    m_styleDefHdr(NULL)
    {
    }
    bool styleDefHdrLst_element::ChildGroup_1::has_styleDefHdr() const
    {    
    return m_has_styleDefHdr;
    }

    CT_StyleDefinitionHeader* styleDefHdrLst_element::ChildGroup_1::mutable_styleDefHdr()
    {    
    
    m_has_styleDefHdr = true;
    if (!m_styleDefHdr)
    {
        m_styleDefHdr = new CT_StyleDefinitionHeader();
    }
    return m_styleDefHdr;
    }

    const CT_StyleDefinitionHeader& styleDefHdrLst_element::ChildGroup_1::get_styleDefHdr() const
    {    
    if (m_styleDefHdr)
    {
        return *m_styleDefHdr;
    }
    return CT_StyleDefinitionHeader::default_instance();
    }

styleDefHdrLst_element* styleDefHdrLst_element::default_instance_ = NULL;
}