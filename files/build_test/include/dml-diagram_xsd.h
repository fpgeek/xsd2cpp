namespace ns_dg {
class Element;
class Attribute;
class ST_ClrAppMethod;
class ST_HueDir;
class ST_PtType;
class ST_CxnType;
class ST_LayoutShapeType;
class ST_Index1;
class ST_ParameterVal;
class ST_ModelId;
class ST_PrSetCustVal;
class ST_Direction;
class ST_HierBranchStyle;
class ST_AnimOneStr;
class ST_AnimLvlStr;
class ST_NodeCount;
class ST_ResizeHandlesStr;
class ST_AlgorithmType;
class ST_AxisType;
class ST_AxisTypes;
class ST_BoolOperator;
class ST_ChildOrderType;
class ST_ConstraintType;
class ST_ConstraintRelationship;
class ST_ElementType;
class ST_ElementTypes;
class ST_ParameterId;
class ST_Ints;
class ST_UnsignedInts;
class ST_Booleans;
class ST_FunctionType;
class ST_FunctionOperator;
class ST_DiagramHorizontalAlignment;
class ST_VerticalAlignment;
class ST_ChildDirection;
class ST_ChildAlignment;
class ST_SecondaryChildAlignment;
class ST_LinearDirection;
class ST_SecondaryLinearDirection;
class ST_StartingElement;
class ST_RotationPath;
class ST_CenterShapeMapping;
class ST_BendPoint;
class ST_ConnectorRouting;
class ST_ArrowheadStyle;
class ST_ConnectorDimension;
class ST_ConnectorPoint;
class ST_NodeHorizontalAlignment;
class ST_NodeVerticalAlignment;
class ST_FallbackDimension;
class ST_TextDirection;
class ST_PyramidAccentPosition;
class ST_PyramidAccentTextMargin;
class ST_TextBlockDirection;
class ST_TextAnchorHorizontal;
class ST_TextAnchorVertical;
class ST_DiagramTextAlignment;
class ST_AutoTextRotation;
class ST_GrowDirection;
class ST_FlowDirection;
class ST_ContinueDirection;
class ST_Breakpoint;
class ST_Offset;
class ST_HierarchyAlignment;
class ST_FunctionValue;
class ST_VariableType;
class ST_FunctionArgument;
class ST_OutputShapeType;
class CT_CTName;
class CT_CTDescription;
class CT_CTCategory;
class CT_CTCategories;
class CT_Colors;
class CT_CTStyleLabel;
class CT_ColorTransform;
class CT_ColorTransformHeader;
class CT_ColorTransformHeaderLst;
class CT_Pt;
class CT_PtList;
class CT_Cxn;
class CT_CxnList;
class CT_DataModel;
class CT_Constraint;
class CT_Constraints;
class CT_NumericRule;
class CT_Rules;
class CT_PresentationOf;
class CT_Adj;
class CT_AdjLst;
class CT_Shape;
class CT_Parameter;
class CT_Algorithm;
class CT_LayoutNode;
class CT_ForEach;
class CT_When;
class CT_Otherwise;
class CT_Choose;
class CT_SampleData;
class CT_Category;
class CT_Categories;
class CT_Name;
class CT_Description;
class CT_DiagramDefinition;
class CT_DiagramDefinitionHeader;
class CT_DiagramDefinitionHeaderLst;
class CT_RelIds;
class CT_ElemPropSet;
class CT_OrgChart;
class CT_ChildMax;
class CT_ChildPref;
class CT_BulletEnabled;
class CT_Direction;
class CT_HierBranchStyle;
class CT_AnimOne;
class CT_AnimLvl;
class CT_ResizeHandles;
class CT_LayoutVariablePropertySet;
class CT_SDName;
class CT_SDDescription;
class CT_SDCategory;
class CT_SDCategories;
class CT_TextProps;
class CT_StyleLabel;
class CT_StyleDefinition;
class CT_StyleDefinitionHeader;
class CT_StyleDefinitionHeaderLst;
class colorsDef_element;
class colorsDefHdr_element;
class colorsDefHdrLst_element;
class dataModel_element;
class layoutDef_element;
class layoutDefHdr_element;
class layoutDefHdrLst_element;
class relIds_element;
class styleDef_element;
class styleDefHdr_element;
class styleDefHdrLst_element;
}
#ifndef __dml_diagram_xsd_
#define __dml_diagram_xsd_ 0

#include "xsdtype.h"
#include <vector>
#include <string>
#include <iostream>
#include "shared-relationshipReference_xsd.h"
#include "dml-main_xsd.h"
#include "shared-commonSimpleTypes_xsd.h"
namespace ns_dg {
using namespace std;
class Element: public XSD::Element
{
public:
protected:
private:
};

class Attribute: public XSD::Attribute
{
public:
protected:
private:
};

class ST_ClrAppMethod: public XSD::SimpleType
{
public:
    enum  Type
    {
        _span_ = 0,
        _cycle_,
        _repeat_
    };
    ST_ClrAppMethod();
    ST_ClrAppMethod(const ST_ClrAppMethod::Type& _type);
    ~ST_ClrAppMethod();
    bool has_type() const;
    void set_type(const ST_ClrAppMethod::Type& _type);
    const ST_ClrAppMethod::Type& get_type() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_ClrAppMethod& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_ClrAppMethod* default_instance_;
    bool m_has_type;
    ST_ClrAppMethod::Type m_type;
};

class ST_HueDir: public XSD::SimpleType
{
public:
    enum  Type
    {
        _cw_ = 0,
        _ccw_
    };
    ST_HueDir();
    ST_HueDir(const ST_HueDir::Type& _type);
    ~ST_HueDir();
    bool has_type() const;
    void set_type(const ST_HueDir::Type& _type);
    const ST_HueDir::Type& get_type() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_HueDir& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_HueDir* default_instance_;
    bool m_has_type;
    ST_HueDir::Type m_type;
};

class ST_PtType: public XSD::SimpleType
{
public:
    enum  Type
    {
        _node_ = 0,
        _asst_,
        _doc_,
        _pres_,
        _parTrans_,
        _sibTrans_
    };
    ST_PtType();
    ST_PtType(const ST_PtType::Type& _type);
    ~ST_PtType();
    bool has_type() const;
    void set_type(const ST_PtType::Type& _type);
    const ST_PtType::Type& get_type() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_PtType& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_PtType* default_instance_;
    bool m_has_type;
    ST_PtType::Type m_type;
};

class ST_CxnType: public XSD::SimpleType
{
public:
    enum  Type
    {
        _parOf_ = 0,
        _presOf_,
        _presParOf_,
        _unknownRelationship_
    };
    ST_CxnType();
    ST_CxnType(const ST_CxnType::Type& _type);
    ~ST_CxnType();
    bool has_type() const;
    void set_type(const ST_CxnType::Type& _type);
    const ST_CxnType::Type& get_type() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_CxnType& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_CxnType* default_instance_;
    bool m_has_type;
    ST_CxnType::Type m_type;
};

class ST_LayoutShapeType: public XSD::SimpleType
{
public:
    ST_LayoutShapeType();
    ~ST_LayoutShapeType();
    bool has_ST_ShapeType() const;
    ns_a::ST_ShapeType* mutable_ST_ShapeType();
    const ns_a::ST_ShapeType& get_ST_ShapeType() const;
    void clear_ST_ShapeType();
    bool has_ST_OutputShapeType() const;
    ST_OutputShapeType* mutable_ST_OutputShapeType();
    const ST_OutputShapeType& get_ST_OutputShapeType() const;
    void clear_ST_OutputShapeType();
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_LayoutShapeType& default_instance();
protected:
private:
    bool m_has_ST_ShapeType;
    ns_a::ST_ShapeType* m_ST_ShapeType;
    bool m_has_ST_OutputShapeType;
    ST_OutputShapeType* m_ST_OutputShapeType;
    static ST_LayoutShapeType* default_instance_;
};

class ST_Index1: public XSD::SimpleType
{
public:
    ST_Index1();
    ST_Index1(const XSD::unsignedInt_& _unsignedInt);
    ~ST_Index1();
    bool has_unsignedInt() const;
    void set_unsignedInt(const XSD::unsignedInt_& _unsignedInt);
    const XSD::unsignedInt_& get_unsignedInt() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_Index1& default_instance();
    std::string toString() const;
protected:
private:
    static ST_Index1* default_instance_;
    bool m_has_unsignedInt;
    XSD::unsignedInt_ m_unsignedInt;
};

class ST_ParameterVal: public XSD::SimpleType
{
public:
    ST_ParameterVal();
    ~ST_ParameterVal();
    bool has_ST_DiagramHorizontalAlignment() const;
    ST_DiagramHorizontalAlignment* mutable_ST_DiagramHorizontalAlignment();
    const ST_DiagramHorizontalAlignment& get_ST_DiagramHorizontalAlignment() const;
    void clear_ST_DiagramHorizontalAlignment();
    bool has_ST_VerticalAlignment() const;
    ST_VerticalAlignment* mutable_ST_VerticalAlignment();
    const ST_VerticalAlignment& get_ST_VerticalAlignment() const;
    void clear_ST_VerticalAlignment();
    bool has_ST_ChildDirection() const;
    ST_ChildDirection* mutable_ST_ChildDirection();
    const ST_ChildDirection& get_ST_ChildDirection() const;
    void clear_ST_ChildDirection();
    bool has_ST_ChildAlignment() const;
    ST_ChildAlignment* mutable_ST_ChildAlignment();
    const ST_ChildAlignment& get_ST_ChildAlignment() const;
    void clear_ST_ChildAlignment();
    bool has_ST_SecondaryChildAlignment() const;
    ST_SecondaryChildAlignment* mutable_ST_SecondaryChildAlignment();
    const ST_SecondaryChildAlignment& get_ST_SecondaryChildAlignment() const;
    void clear_ST_SecondaryChildAlignment();
    bool has_ST_LinearDirection() const;
    ST_LinearDirection* mutable_ST_LinearDirection();
    const ST_LinearDirection& get_ST_LinearDirection() const;
    void clear_ST_LinearDirection();
    bool has_ST_SecondaryLinearDirection() const;
    ST_SecondaryLinearDirection* mutable_ST_SecondaryLinearDirection();
    const ST_SecondaryLinearDirection& get_ST_SecondaryLinearDirection() const;
    void clear_ST_SecondaryLinearDirection();
    bool has_ST_StartingElement() const;
    ST_StartingElement* mutable_ST_StartingElement();
    const ST_StartingElement& get_ST_StartingElement() const;
    void clear_ST_StartingElement();
    bool has_ST_BendPoint() const;
    ST_BendPoint* mutable_ST_BendPoint();
    const ST_BendPoint& get_ST_BendPoint() const;
    void clear_ST_BendPoint();
    bool has_ST_ConnectorRouting() const;
    ST_ConnectorRouting* mutable_ST_ConnectorRouting();
    const ST_ConnectorRouting& get_ST_ConnectorRouting() const;
    void clear_ST_ConnectorRouting();
    bool has_ST_ArrowheadStyle() const;
    ST_ArrowheadStyle* mutable_ST_ArrowheadStyle();
    const ST_ArrowheadStyle& get_ST_ArrowheadStyle() const;
    void clear_ST_ArrowheadStyle();
    bool has_ST_ConnectorDimension() const;
    ST_ConnectorDimension* mutable_ST_ConnectorDimension();
    const ST_ConnectorDimension& get_ST_ConnectorDimension() const;
    void clear_ST_ConnectorDimension();
    bool has_ST_RotationPath() const;
    ST_RotationPath* mutable_ST_RotationPath();
    const ST_RotationPath& get_ST_RotationPath() const;
    void clear_ST_RotationPath();
    bool has_ST_CenterShapeMapping() const;
    ST_CenterShapeMapping* mutable_ST_CenterShapeMapping();
    const ST_CenterShapeMapping& get_ST_CenterShapeMapping() const;
    void clear_ST_CenterShapeMapping();
    bool has_ST_NodeHorizontalAlignment() const;
    ST_NodeHorizontalAlignment* mutable_ST_NodeHorizontalAlignment();
    const ST_NodeHorizontalAlignment& get_ST_NodeHorizontalAlignment() const;
    void clear_ST_NodeHorizontalAlignment();
    bool has_ST_NodeVerticalAlignment() const;
    ST_NodeVerticalAlignment* mutable_ST_NodeVerticalAlignment();
    const ST_NodeVerticalAlignment& get_ST_NodeVerticalAlignment() const;
    void clear_ST_NodeVerticalAlignment();
    bool has_ST_FallbackDimension() const;
    ST_FallbackDimension* mutable_ST_FallbackDimension();
    const ST_FallbackDimension& get_ST_FallbackDimension() const;
    void clear_ST_FallbackDimension();
    bool has_ST_TextDirection() const;
    ST_TextDirection* mutable_ST_TextDirection();
    const ST_TextDirection& get_ST_TextDirection() const;
    void clear_ST_TextDirection();
    bool has_ST_PyramidAccentPosition() const;
    ST_PyramidAccentPosition* mutable_ST_PyramidAccentPosition();
    const ST_PyramidAccentPosition& get_ST_PyramidAccentPosition() const;
    void clear_ST_PyramidAccentPosition();
    bool has_ST_PyramidAccentTextMargin() const;
    ST_PyramidAccentTextMargin* mutable_ST_PyramidAccentTextMargin();
    const ST_PyramidAccentTextMargin& get_ST_PyramidAccentTextMargin() const;
    void clear_ST_PyramidAccentTextMargin();
    bool has_ST_TextBlockDirection() const;
    ST_TextBlockDirection* mutable_ST_TextBlockDirection();
    const ST_TextBlockDirection& get_ST_TextBlockDirection() const;
    void clear_ST_TextBlockDirection();
    bool has_ST_TextAnchorHorizontal() const;
    ST_TextAnchorHorizontal* mutable_ST_TextAnchorHorizontal();
    const ST_TextAnchorHorizontal& get_ST_TextAnchorHorizontal() const;
    void clear_ST_TextAnchorHorizontal();
    bool has_ST_TextAnchorVertical() const;
    ST_TextAnchorVertical* mutable_ST_TextAnchorVertical();
    const ST_TextAnchorVertical& get_ST_TextAnchorVertical() const;
    void clear_ST_TextAnchorVertical();
    bool has_ST_DiagramTextAlignment() const;
    ST_DiagramTextAlignment* mutable_ST_DiagramTextAlignment();
    const ST_DiagramTextAlignment& get_ST_DiagramTextAlignment() const;
    void clear_ST_DiagramTextAlignment();
    bool has_ST_AutoTextRotation() const;
    ST_AutoTextRotation* mutable_ST_AutoTextRotation();
    const ST_AutoTextRotation& get_ST_AutoTextRotation() const;
    void clear_ST_AutoTextRotation();
    bool has_ST_GrowDirection() const;
    ST_GrowDirection* mutable_ST_GrowDirection();
    const ST_GrowDirection& get_ST_GrowDirection() const;
    void clear_ST_GrowDirection();
    bool has_ST_FlowDirection() const;
    ST_FlowDirection* mutable_ST_FlowDirection();
    const ST_FlowDirection& get_ST_FlowDirection() const;
    void clear_ST_FlowDirection();
    bool has_ST_ContinueDirection() const;
    ST_ContinueDirection* mutable_ST_ContinueDirection();
    const ST_ContinueDirection& get_ST_ContinueDirection() const;
    void clear_ST_ContinueDirection();
    bool has_ST_Breakpoint() const;
    ST_Breakpoint* mutable_ST_Breakpoint();
    const ST_Breakpoint& get_ST_Breakpoint() const;
    void clear_ST_Breakpoint();
    bool has_ST_Offset() const;
    ST_Offset* mutable_ST_Offset();
    const ST_Offset& get_ST_Offset() const;
    void clear_ST_Offset();
    bool has_ST_HierarchyAlignment() const;
    ST_HierarchyAlignment* mutable_ST_HierarchyAlignment();
    const ST_HierarchyAlignment& get_ST_HierarchyAlignment() const;
    void clear_ST_HierarchyAlignment();
    bool has_int() const;
    void set_int(const XSD::int_& _int);
    const XSD::int_& get_int() const;
    void clear_int();
    bool has_double() const;
    void set_double(const XSD::double_& _double);
    const XSD::double_& get_double() const;
    void clear_double();
    bool has_boolean() const;
    void set_boolean(const XSD::boolean_& _boolean);
    const XSD::boolean_& get_boolean() const;
    void clear_boolean();
    bool has_string() const;
    void set_string(const XSD::string_& _string);
    const XSD::string_& get_string() const;
    void clear_string();
    bool has_ST_ConnectorPoint() const;
    ST_ConnectorPoint* mutable_ST_ConnectorPoint();
    const ST_ConnectorPoint& get_ST_ConnectorPoint() const;
    void clear_ST_ConnectorPoint();
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_ParameterVal& default_instance();
protected:
private:
    bool m_has_ST_DiagramHorizontalAlignment;
    ST_DiagramHorizontalAlignment* m_ST_DiagramHorizontalAlignment;
    bool m_has_ST_VerticalAlignment;
    ST_VerticalAlignment* m_ST_VerticalAlignment;
    bool m_has_ST_ChildDirection;
    ST_ChildDirection* m_ST_ChildDirection;
    bool m_has_ST_ChildAlignment;
    ST_ChildAlignment* m_ST_ChildAlignment;
    bool m_has_ST_SecondaryChildAlignment;
    ST_SecondaryChildAlignment* m_ST_SecondaryChildAlignment;
    bool m_has_ST_LinearDirection;
    ST_LinearDirection* m_ST_LinearDirection;
    bool m_has_ST_SecondaryLinearDirection;
    ST_SecondaryLinearDirection* m_ST_SecondaryLinearDirection;
    bool m_has_ST_StartingElement;
    ST_StartingElement* m_ST_StartingElement;
    bool m_has_ST_BendPoint;
    ST_BendPoint* m_ST_BendPoint;
    bool m_has_ST_ConnectorRouting;
    ST_ConnectorRouting* m_ST_ConnectorRouting;
    bool m_has_ST_ArrowheadStyle;
    ST_ArrowheadStyle* m_ST_ArrowheadStyle;
    bool m_has_ST_ConnectorDimension;
    ST_ConnectorDimension* m_ST_ConnectorDimension;
    bool m_has_ST_RotationPath;
    ST_RotationPath* m_ST_RotationPath;
    bool m_has_ST_CenterShapeMapping;
    ST_CenterShapeMapping* m_ST_CenterShapeMapping;
    bool m_has_ST_NodeHorizontalAlignment;
    ST_NodeHorizontalAlignment* m_ST_NodeHorizontalAlignment;
    bool m_has_ST_NodeVerticalAlignment;
    ST_NodeVerticalAlignment* m_ST_NodeVerticalAlignment;
    bool m_has_ST_FallbackDimension;
    ST_FallbackDimension* m_ST_FallbackDimension;
    bool m_has_ST_TextDirection;
    ST_TextDirection* m_ST_TextDirection;
    bool m_has_ST_PyramidAccentPosition;
    ST_PyramidAccentPosition* m_ST_PyramidAccentPosition;
    bool m_has_ST_PyramidAccentTextMargin;
    ST_PyramidAccentTextMargin* m_ST_PyramidAccentTextMargin;
    bool m_has_ST_TextBlockDirection;
    ST_TextBlockDirection* m_ST_TextBlockDirection;
    bool m_has_ST_TextAnchorHorizontal;
    ST_TextAnchorHorizontal* m_ST_TextAnchorHorizontal;
    bool m_has_ST_TextAnchorVertical;
    ST_TextAnchorVertical* m_ST_TextAnchorVertical;
    bool m_has_ST_DiagramTextAlignment;
    ST_DiagramTextAlignment* m_ST_DiagramTextAlignment;
    bool m_has_ST_AutoTextRotation;
    ST_AutoTextRotation* m_ST_AutoTextRotation;
    bool m_has_ST_GrowDirection;
    ST_GrowDirection* m_ST_GrowDirection;
    bool m_has_ST_FlowDirection;
    ST_FlowDirection* m_ST_FlowDirection;
    bool m_has_ST_ContinueDirection;
    ST_ContinueDirection* m_ST_ContinueDirection;
    bool m_has_ST_Breakpoint;
    ST_Breakpoint* m_ST_Breakpoint;
    bool m_has_ST_Offset;
    ST_Offset* m_ST_Offset;
    bool m_has_ST_HierarchyAlignment;
    ST_HierarchyAlignment* m_ST_HierarchyAlignment;
    bool m_has_int;
    XSD::int_ m_int;
    bool m_has_double;
    XSD::double_ m_double;
    bool m_has_boolean;
    XSD::boolean_ m_boolean;
    bool m_has_string;
    XSD::string_ m_string;
    bool m_has_ST_ConnectorPoint;
    ST_ConnectorPoint* m_ST_ConnectorPoint;
    static ST_ParameterVal* default_instance_;
};

class ST_ModelId: public XSD::SimpleType
{
public:
    ST_ModelId();
    ~ST_ModelId();
    bool has_int() const;
    void set_int(const XSD::int_& _int);
    const XSD::int_& get_int() const;
    void clear_int();
    bool has_ST_Guid() const;
    ns_s::ST_Guid* mutable_ST_Guid();
    const ns_s::ST_Guid& get_ST_Guid() const;
    void clear_ST_Guid();
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_ModelId& default_instance();
protected:
private:
    bool m_has_int;
    XSD::int_ m_int;
    bool m_has_ST_Guid;
    ns_s::ST_Guid* m_ST_Guid;
    static ST_ModelId* default_instance_;
};

class ST_PrSetCustVal: public XSD::SimpleType
{
public:
    ST_PrSetCustVal();
    ~ST_PrSetCustVal();
    bool has_ST_Percentage() const;
    ns_s::ST_Percentage* mutable_ST_Percentage();
    const ns_s::ST_Percentage& get_ST_Percentage() const;
    void clear_ST_Percentage();
    bool has_int() const;
    void set_int(const XSD::int_& _int);
    const XSD::int_& get_int() const;
    void clear_int();
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_PrSetCustVal& default_instance();
protected:
private:
    bool m_has_ST_Percentage;
    ns_s::ST_Percentage* m_ST_Percentage;
    bool m_has_int;
    XSD::int_ m_int;
    static ST_PrSetCustVal* default_instance_;
};

class ST_Direction: public XSD::SimpleType
{
public:
    enum  Type
    {
        _norm_ = 0,
        _rev_
    };
    ST_Direction();
    ST_Direction(const ST_Direction::Type& _type);
    ~ST_Direction();
    bool has_type() const;
    void set_type(const ST_Direction::Type& _type);
    const ST_Direction::Type& get_type() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_Direction& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_Direction* default_instance_;
    bool m_has_type;
    ST_Direction::Type m_type;
};

class ST_HierBranchStyle: public XSD::SimpleType
{
public:
    enum  Type
    {
        _l_ = 0,
        _r_,
        _hang_,
        _std_,
        _init_
    };
    ST_HierBranchStyle();
    ST_HierBranchStyle(const ST_HierBranchStyle::Type& _type);
    ~ST_HierBranchStyle();
    bool has_type() const;
    void set_type(const ST_HierBranchStyle::Type& _type);
    const ST_HierBranchStyle::Type& get_type() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_HierBranchStyle& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_HierBranchStyle* default_instance_;
    bool m_has_type;
    ST_HierBranchStyle::Type m_type;
};

class ST_AnimOneStr: public XSD::SimpleType
{
public:
    enum  Type
    {
        _none_ = 0,
        _one_,
        _branch_
    };
    ST_AnimOneStr();
    ST_AnimOneStr(const ST_AnimOneStr::Type& _type);
    ~ST_AnimOneStr();
    bool has_type() const;
    void set_type(const ST_AnimOneStr::Type& _type);
    const ST_AnimOneStr::Type& get_type() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_AnimOneStr& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_AnimOneStr* default_instance_;
    bool m_has_type;
    ST_AnimOneStr::Type m_type;
};

class ST_AnimLvlStr: public XSD::SimpleType
{
public:
    enum  Type
    {
        _none_ = 0,
        _lvl_,
        _ctr_
    };
    ST_AnimLvlStr();
    ST_AnimLvlStr(const ST_AnimLvlStr::Type& _type);
    ~ST_AnimLvlStr();
    bool has_type() const;
    void set_type(const ST_AnimLvlStr::Type& _type);
    const ST_AnimLvlStr::Type& get_type() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_AnimLvlStr& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_AnimLvlStr* default_instance_;
    bool m_has_type;
    ST_AnimLvlStr::Type m_type;
};

class ST_NodeCount: public XSD::SimpleType
{
public:
    ST_NodeCount();
    ST_NodeCount(const XSD::int_& _int);
    ~ST_NodeCount();
    bool has_int() const;
    void set_int(const XSD::int_& _int);
    const XSD::int_& get_int() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_NodeCount& default_instance();
    std::string toString() const;
protected:
private:
    static ST_NodeCount* default_instance_;
    bool m_has_int;
    XSD::int_ m_int;
};

class ST_ResizeHandlesStr: public XSD::SimpleType
{
public:
    enum  Type
    {
        _exact_ = 0,
        _rel_
    };
    ST_ResizeHandlesStr();
    ST_ResizeHandlesStr(const ST_ResizeHandlesStr::Type& _type);
    ~ST_ResizeHandlesStr();
    bool has_type() const;
    void set_type(const ST_ResizeHandlesStr::Type& _type);
    const ST_ResizeHandlesStr::Type& get_type() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_ResizeHandlesStr& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_ResizeHandlesStr* default_instance_;
    bool m_has_type;
    ST_ResizeHandlesStr::Type m_type;
};

class ST_AlgorithmType: public XSD::SimpleType
{
public:
    enum  Type
    {
        _composite_ = 0,
        _conn_,
        _cycle_,
        _hierChild_,
        _hierRoot_,
        _pyra_,
        _lin_,
        _sp_,
        _tx_,
        _snake_
    };
    ST_AlgorithmType();
    ST_AlgorithmType(const ST_AlgorithmType::Type& _type);
    ~ST_AlgorithmType();
    bool has_type() const;
    void set_type(const ST_AlgorithmType::Type& _type);
    const ST_AlgorithmType::Type& get_type() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_AlgorithmType& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_AlgorithmType* default_instance_;
    bool m_has_type;
    ST_AlgorithmType::Type m_type;
};

class ST_AxisType: public XSD::SimpleType
{
public:
    enum  Type
    {
        _self_ = 0,
        _ch_,
        _des_,
        _desOrSelf_,
        _par_,
        _ancst_,
        _ancstOrSelf_,
        _followSib_,
        _precedSib_,
        _follow_,
        _preced_,
        _root_,
        _none_
    };
    ST_AxisType();
    ST_AxisType(const ST_AxisType::Type& _type);
    ~ST_AxisType();
    bool has_type() const;
    void set_type(const ST_AxisType::Type& _type);
    const ST_AxisType::Type& get_type() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_AxisType& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_AxisType* default_instance_;
    bool m_has_type;
    ST_AxisType::Type m_type;
};

class ST_AxisTypes: public XSD::SimpleType
{
public:
    ~ST_AxisTypes();
    bool has_ST_AxisType_list() const;
    ST_AxisType* add_ST_AxisType();
    const vector<ST_AxisType*>& get_ST_AxisType_list() const;
    void clear();
    std::string toString() const;
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_AxisTypes& default_instance();
protected:
private:
    bool m_has_ST_AxisType_list;
    vector<ST_AxisType*> m_ST_AxisType_list;
    static ST_AxisTypes* default_instance_;
};

class ST_BoolOperator: public XSD::SimpleType
{
public:
    enum  Type
    {
        _none_ = 0,
        _equ_,
        _gte_,
        _lte_
    };
    ST_BoolOperator();
    ST_BoolOperator(const ST_BoolOperator::Type& _type);
    ~ST_BoolOperator();
    bool has_type() const;
    void set_type(const ST_BoolOperator::Type& _type);
    const ST_BoolOperator::Type& get_type() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_BoolOperator& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_BoolOperator* default_instance_;
    bool m_has_type;
    ST_BoolOperator::Type m_type;
};

class ST_ChildOrderType: public XSD::SimpleType
{
public:
    enum  Type
    {
        _b_ = 0,
        _t_
    };
    ST_ChildOrderType();
    ST_ChildOrderType(const ST_ChildOrderType::Type& _type);
    ~ST_ChildOrderType();
    bool has_type() const;
    void set_type(const ST_ChildOrderType::Type& _type);
    const ST_ChildOrderType::Type& get_type() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_ChildOrderType& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_ChildOrderType* default_instance_;
    bool m_has_type;
    ST_ChildOrderType::Type m_type;
};

class ST_ConstraintType: public XSD::SimpleType
{
public:
    enum  Type
    {
        _none_ = 0,
        _alignOff_,
        _begMarg_,
        _bendDist_,
        _begPad_,
        _b_,
        _bMarg_,
        _bOff_,
        _ctrX_,
        _ctrXOff_,
        _ctrY_,
        _ctrYOff_,
        _connDist_,
        _diam_,
        _endMarg_,
        _endPad_,
        _h_,
        _hArH_,
        _hOff_,
        _l_,
        _lMarg_,
        _lOff_,
        _r_,
        _rMarg_,
        _rOff_,
        _primFontSz_,
        _pyraAcctRatio_,
        _secFontSz_,
        _sibSp_,
        _secSibSp_,
        _sp_,
        _stemThick_,
        _t_,
        _tMarg_,
        _tOff_,
        _userA_,
        _userB_,
        _userC_,
        _userD_,
        _userE_,
        _userF_,
        _userG_,
        _userH_,
        _userI_,
        _userJ_,
        _userK_,
        _userL_,
        _userM_,
        _userN_,
        _userO_,
        _userP_,
        _userQ_,
        _userR_,
        _userS_,
        _userT_,
        _userU_,
        _userV_,
        _userW_,
        _userX_,
        _userY_,
        _userZ_,
        _w_,
        _wArH_,
        _wOff_
    };
    ST_ConstraintType();
    ST_ConstraintType(const ST_ConstraintType::Type& _type);
    ~ST_ConstraintType();
    bool has_type() const;
    void set_type(const ST_ConstraintType::Type& _type);
    const ST_ConstraintType::Type& get_type() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_ConstraintType& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_ConstraintType* default_instance_;
    bool m_has_type;
    ST_ConstraintType::Type m_type;
};

class ST_ConstraintRelationship: public XSD::SimpleType
{
public:
    enum  Type
    {
        _self_ = 0,
        _ch_,
        _des_
    };
    ST_ConstraintRelationship();
    ST_ConstraintRelationship(const ST_ConstraintRelationship::Type& _type);
    ~ST_ConstraintRelationship();
    bool has_type() const;
    void set_type(const ST_ConstraintRelationship::Type& _type);
    const ST_ConstraintRelationship::Type& get_type() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_ConstraintRelationship& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_ConstraintRelationship* default_instance_;
    bool m_has_type;
    ST_ConstraintRelationship::Type m_type;
};

class ST_ElementType: public XSD::SimpleType
{
public:
    enum  Type
    {
        _all_ = 0,
        _doc_,
        _node_,
        _norm_,
        _nonNorm_,
        _asst_,
        _nonAsst_,
        _parTrans_,
        _pres_,
        _sibTrans_
    };
    ST_ElementType();
    ST_ElementType(const ST_ElementType::Type& _type);
    ~ST_ElementType();
    bool has_type() const;
    void set_type(const ST_ElementType::Type& _type);
    const ST_ElementType::Type& get_type() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_ElementType& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_ElementType* default_instance_;
    bool m_has_type;
    ST_ElementType::Type m_type;
};

class ST_ElementTypes: public XSD::SimpleType
{
public:
    ~ST_ElementTypes();
    bool has_ST_ElementType_list() const;
    ST_ElementType* add_ST_ElementType();
    const vector<ST_ElementType*>& get_ST_ElementType_list() const;
    void clear();
    std::string toString() const;
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_ElementTypes& default_instance();
protected:
private:
    bool m_has_ST_ElementType_list;
    vector<ST_ElementType*> m_ST_ElementType_list;
    static ST_ElementTypes* default_instance_;
};

class ST_ParameterId: public XSD::SimpleType
{
public:
    enum  Type
    {
        _horzAlign_ = 0,
        _vertAlign_,
        _chDir_,
        _chAlign_,
        _secChAlign_,
        _linDir_,
        _secLinDir_,
        _stElem_,
        _bendPt_,
        _connRout_,
        _begSty_,
        _endSty_,
        _dim_,
        _rotPath_,
        _ctrShpMap_,
        _nodeHorzAlign_,
        _nodeVertAlign_,
        _fallback_,
        _txDir_,
        _pyraAcctPos_,
        _pyraAcctTxMar_,
        _txBlDir_,
        _txAnchorHorz_,
        _txAnchorVert_,
        _txAnchorHorzCh_,
        _txAnchorVertCh_,
        _parTxLTRAlign_,
        _parTxRTLAlign_,
        _shpTxLTRAlignCh_,
        _shpTxRTLAlignCh_,
        _autoTxRot_,
        _grDir_,
        _flowDir_,
        _contDir_,
        _bkpt_,
        _off_,
        _hierAlign_,
        _bkPtFixedVal_,
        _stBulletLvl_,
        _stAng_,
        _spanAng_,
        _ar_,
        _lnSpPar_,
        _lnSpAfParP_,
        _lnSpCh_,
        _lnSpAfChP_,
        _rtShortDist_,
        _alignTx_,
        _pyraLvlNode_,
        _pyraAcctBkgdNode_,
        _pyraAcctTxNode_,
        _srcNode_,
        _dstNode_,
        _begPts_,
        _endPts_
    };
    ST_ParameterId();
    ST_ParameterId(const ST_ParameterId::Type& _type);
    ~ST_ParameterId();
    bool has_type() const;
    void set_type(const ST_ParameterId::Type& _type);
    const ST_ParameterId::Type& get_type() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_ParameterId& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_ParameterId* default_instance_;
    bool m_has_type;
    ST_ParameterId::Type m_type;
};

class ST_Ints: public XSD::SimpleType
{
public:
    ~ST_Ints();
    bool has_int_list() const;
    void add_int(const XSD::int_& _int);
    const vector<XSD::int_>& get_int_list() const;
    void clear();
    std::string toString() const;
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_Ints& default_instance();
protected:
private:
    bool m_has_int_list;
    vector<XSD::int_> m_int_list;
    static ST_Ints* default_instance_;
};

class ST_UnsignedInts: public XSD::SimpleType
{
public:
    ~ST_UnsignedInts();
    bool has_unsignedInt_list() const;
    void add_unsignedInt(const XSD::unsignedInt_& _unsignedInt);
    const vector<XSD::unsignedInt_>& get_unsignedInt_list() const;
    void clear();
    std::string toString() const;
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_UnsignedInts& default_instance();
protected:
private:
    bool m_has_unsignedInt_list;
    vector<XSD::unsignedInt_> m_unsignedInt_list;
    static ST_UnsignedInts* default_instance_;
};

class ST_Booleans: public XSD::SimpleType
{
public:
    ~ST_Booleans();
    bool has_boolean_list() const;
    void add_boolean(const XSD::boolean_& _boolean);
    const vector<XSD::boolean_>& get_boolean_list() const;
    void clear();
    std::string toString() const;
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_Booleans& default_instance();
protected:
private:
    bool m_has_boolean_list;
    vector<XSD::boolean_> m_boolean_list;
    static ST_Booleans* default_instance_;
};

class ST_FunctionType: public XSD::SimpleType
{
public:
    enum  Type
    {
        _cnt_ = 0,
        _pos_,
        _revPos_,
        _posEven_,
        _posOdd_,
        _var_,
        _depth_,
        _maxDepth_
    };
    ST_FunctionType();
    ST_FunctionType(const ST_FunctionType::Type& _type);
    ~ST_FunctionType();
    bool has_type() const;
    void set_type(const ST_FunctionType::Type& _type);
    const ST_FunctionType::Type& get_type() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_FunctionType& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_FunctionType* default_instance_;
    bool m_has_type;
    ST_FunctionType::Type m_type;
};

class ST_FunctionOperator: public XSD::SimpleType
{
public:
    enum  Type
    {
        _equ_ = 0,
        _neq_,
        _gt_,
        _lt_,
        _gte_,
        _lte_
    };
    ST_FunctionOperator();
    ST_FunctionOperator(const ST_FunctionOperator::Type& _type);
    ~ST_FunctionOperator();
    bool has_type() const;
    void set_type(const ST_FunctionOperator::Type& _type);
    const ST_FunctionOperator::Type& get_type() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_FunctionOperator& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_FunctionOperator* default_instance_;
    bool m_has_type;
    ST_FunctionOperator::Type m_type;
};

class ST_DiagramHorizontalAlignment: public XSD::SimpleType
{
public:
    enum  Type
    {
        _l_ = 0,
        _ctr_,
        _r_,
        _none_
    };
    ST_DiagramHorizontalAlignment();
    ST_DiagramHorizontalAlignment(const ST_DiagramHorizontalAlignment::Type& _type);
    ~ST_DiagramHorizontalAlignment();
    bool has_type() const;
    void set_type(const ST_DiagramHorizontalAlignment::Type& _type);
    const ST_DiagramHorizontalAlignment::Type& get_type() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_DiagramHorizontalAlignment& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_DiagramHorizontalAlignment* default_instance_;
    bool m_has_type;
    ST_DiagramHorizontalAlignment::Type m_type;
};

class ST_VerticalAlignment: public XSD::SimpleType
{
public:
    enum  Type
    {
        _t_ = 0,
        _mid_,
        _b_,
        _none_
    };
    ST_VerticalAlignment();
    ST_VerticalAlignment(const ST_VerticalAlignment::Type& _type);
    ~ST_VerticalAlignment();
    bool has_type() const;
    void set_type(const ST_VerticalAlignment::Type& _type);
    const ST_VerticalAlignment::Type& get_type() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_VerticalAlignment& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_VerticalAlignment* default_instance_;
    bool m_has_type;
    ST_VerticalAlignment::Type m_type;
};

class ST_ChildDirection: public XSD::SimpleType
{
public:
    enum  Type
    {
        _horz_ = 0,
        _vert_
    };
    ST_ChildDirection();
    ST_ChildDirection(const ST_ChildDirection::Type& _type);
    ~ST_ChildDirection();
    bool has_type() const;
    void set_type(const ST_ChildDirection::Type& _type);
    const ST_ChildDirection::Type& get_type() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_ChildDirection& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_ChildDirection* default_instance_;
    bool m_has_type;
    ST_ChildDirection::Type m_type;
};

class ST_ChildAlignment: public XSD::SimpleType
{
public:
    enum  Type
    {
        _t_ = 0,
        _b_,
        _l_,
        _r_
    };
    ST_ChildAlignment();
    ST_ChildAlignment(const ST_ChildAlignment::Type& _type);
    ~ST_ChildAlignment();
    bool has_type() const;
    void set_type(const ST_ChildAlignment::Type& _type);
    const ST_ChildAlignment::Type& get_type() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_ChildAlignment& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_ChildAlignment* default_instance_;
    bool m_has_type;
    ST_ChildAlignment::Type m_type;
};

class ST_SecondaryChildAlignment: public XSD::SimpleType
{
public:
    enum  Type
    {
        _none_ = 0,
        _t_,
        _b_,
        _l_,
        _r_
    };
    ST_SecondaryChildAlignment();
    ST_SecondaryChildAlignment(const ST_SecondaryChildAlignment::Type& _type);
    ~ST_SecondaryChildAlignment();
    bool has_type() const;
    void set_type(const ST_SecondaryChildAlignment::Type& _type);
    const ST_SecondaryChildAlignment::Type& get_type() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_SecondaryChildAlignment& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_SecondaryChildAlignment* default_instance_;
    bool m_has_type;
    ST_SecondaryChildAlignment::Type m_type;
};

class ST_LinearDirection: public XSD::SimpleType
{
public:
    enum  Type
    {
        _fromL_ = 0,
        _fromR_,
        _fromT_,
        _fromB_
    };
    ST_LinearDirection();
    ST_LinearDirection(const ST_LinearDirection::Type& _type);
    ~ST_LinearDirection();
    bool has_type() const;
    void set_type(const ST_LinearDirection::Type& _type);
    const ST_LinearDirection::Type& get_type() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_LinearDirection& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_LinearDirection* default_instance_;
    bool m_has_type;
    ST_LinearDirection::Type m_type;
};

class ST_SecondaryLinearDirection: public XSD::SimpleType
{
public:
    enum  Type
    {
        _none_ = 0,
        _fromL_,
        _fromR_,
        _fromT_,
        _fromB_
    };
    ST_SecondaryLinearDirection();
    ST_SecondaryLinearDirection(const ST_SecondaryLinearDirection::Type& _type);
    ~ST_SecondaryLinearDirection();
    bool has_type() const;
    void set_type(const ST_SecondaryLinearDirection::Type& _type);
    const ST_SecondaryLinearDirection::Type& get_type() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_SecondaryLinearDirection& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_SecondaryLinearDirection* default_instance_;
    bool m_has_type;
    ST_SecondaryLinearDirection::Type m_type;
};

class ST_StartingElement: public XSD::SimpleType
{
public:
    enum  Type
    {
        _node_ = 0,
        _trans_
    };
    ST_StartingElement();
    ST_StartingElement(const ST_StartingElement::Type& _type);
    ~ST_StartingElement();
    bool has_type() const;
    void set_type(const ST_StartingElement::Type& _type);
    const ST_StartingElement::Type& get_type() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_StartingElement& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_StartingElement* default_instance_;
    bool m_has_type;
    ST_StartingElement::Type m_type;
};

class ST_RotationPath: public XSD::SimpleType
{
public:
    enum  Type
    {
        _none_ = 0,
        _alongPath_
    };
    ST_RotationPath();
    ST_RotationPath(const ST_RotationPath::Type& _type);
    ~ST_RotationPath();
    bool has_type() const;
    void set_type(const ST_RotationPath::Type& _type);
    const ST_RotationPath::Type& get_type() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_RotationPath& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_RotationPath* default_instance_;
    bool m_has_type;
    ST_RotationPath::Type m_type;
};

class ST_CenterShapeMapping: public XSD::SimpleType
{
public:
    enum  Type
    {
        _none_ = 0,
        _fNode_
    };
    ST_CenterShapeMapping();
    ST_CenterShapeMapping(const ST_CenterShapeMapping::Type& _type);
    ~ST_CenterShapeMapping();
    bool has_type() const;
    void set_type(const ST_CenterShapeMapping::Type& _type);
    const ST_CenterShapeMapping::Type& get_type() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_CenterShapeMapping& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_CenterShapeMapping* default_instance_;
    bool m_has_type;
    ST_CenterShapeMapping::Type m_type;
};

class ST_BendPoint: public XSD::SimpleType
{
public:
    enum  Type
    {
        _beg_ = 0,
        _def_,
        _end_
    };
    ST_BendPoint();
    ST_BendPoint(const ST_BendPoint::Type& _type);
    ~ST_BendPoint();
    bool has_type() const;
    void set_type(const ST_BendPoint::Type& _type);
    const ST_BendPoint::Type& get_type() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_BendPoint& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_BendPoint* default_instance_;
    bool m_has_type;
    ST_BendPoint::Type m_type;
};

class ST_ConnectorRouting: public XSD::SimpleType
{
public:
    enum  Type
    {
        _stra_ = 0,
        _bend_,
        _curve_,
        _longCurve_
    };
    ST_ConnectorRouting();
    ST_ConnectorRouting(const ST_ConnectorRouting::Type& _type);
    ~ST_ConnectorRouting();
    bool has_type() const;
    void set_type(const ST_ConnectorRouting::Type& _type);
    const ST_ConnectorRouting::Type& get_type() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_ConnectorRouting& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_ConnectorRouting* default_instance_;
    bool m_has_type;
    ST_ConnectorRouting::Type m_type;
};

class ST_ArrowheadStyle: public XSD::SimpleType
{
public:
    enum  Type
    {
        _auto_ = 0,
        _arr_,
        _noArr_
    };
    ST_ArrowheadStyle();
    ST_ArrowheadStyle(const ST_ArrowheadStyle::Type& _type);
    ~ST_ArrowheadStyle();
    bool has_type() const;
    void set_type(const ST_ArrowheadStyle::Type& _type);
    const ST_ArrowheadStyle::Type& get_type() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_ArrowheadStyle& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_ArrowheadStyle* default_instance_;
    bool m_has_type;
    ST_ArrowheadStyle::Type m_type;
};

class ST_ConnectorDimension: public XSD::SimpleType
{
public:
    enum  Type
    {
        _1D_ = 0,
        _2D_,
        _cust_
    };
    ST_ConnectorDimension();
    ST_ConnectorDimension(const ST_ConnectorDimension::Type& _type);
    ~ST_ConnectorDimension();
    bool has_type() const;
    void set_type(const ST_ConnectorDimension::Type& _type);
    const ST_ConnectorDimension::Type& get_type() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_ConnectorDimension& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_ConnectorDimension* default_instance_;
    bool m_has_type;
    ST_ConnectorDimension::Type m_type;
};

class ST_ConnectorPoint: public XSD::SimpleType
{
public:
    enum  Type
    {
        _auto_ = 0,
        _bCtr_,
        _ctr_,
        _midL_,
        _midR_,
        _tCtr_,
        _bL_,
        _bR_,
        _tL_,
        _tR_,
        _radial_
    };
    ST_ConnectorPoint();
    ST_ConnectorPoint(const ST_ConnectorPoint::Type& _type);
    ~ST_ConnectorPoint();
    bool has_type() const;
    void set_type(const ST_ConnectorPoint::Type& _type);
    const ST_ConnectorPoint::Type& get_type() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_ConnectorPoint& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_ConnectorPoint* default_instance_;
    bool m_has_type;
    ST_ConnectorPoint::Type m_type;
};

class ST_NodeHorizontalAlignment: public XSD::SimpleType
{
public:
    enum  Type
    {
        _l_ = 0,
        _ctr_,
        _r_
    };
    ST_NodeHorizontalAlignment();
    ST_NodeHorizontalAlignment(const ST_NodeHorizontalAlignment::Type& _type);
    ~ST_NodeHorizontalAlignment();
    bool has_type() const;
    void set_type(const ST_NodeHorizontalAlignment::Type& _type);
    const ST_NodeHorizontalAlignment::Type& get_type() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_NodeHorizontalAlignment& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_NodeHorizontalAlignment* default_instance_;
    bool m_has_type;
    ST_NodeHorizontalAlignment::Type m_type;
};

class ST_NodeVerticalAlignment: public XSD::SimpleType
{
public:
    enum  Type
    {
        _t_ = 0,
        _mid_,
        _b_
    };
    ST_NodeVerticalAlignment();
    ST_NodeVerticalAlignment(const ST_NodeVerticalAlignment::Type& _type);
    ~ST_NodeVerticalAlignment();
    bool has_type() const;
    void set_type(const ST_NodeVerticalAlignment::Type& _type);
    const ST_NodeVerticalAlignment::Type& get_type() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_NodeVerticalAlignment& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_NodeVerticalAlignment* default_instance_;
    bool m_has_type;
    ST_NodeVerticalAlignment::Type m_type;
};

class ST_FallbackDimension: public XSD::SimpleType
{
public:
    enum  Type
    {
        _1D_ = 0,
        _2D_
    };
    ST_FallbackDimension();
    ST_FallbackDimension(const ST_FallbackDimension::Type& _type);
    ~ST_FallbackDimension();
    bool has_type() const;
    void set_type(const ST_FallbackDimension::Type& _type);
    const ST_FallbackDimension::Type& get_type() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_FallbackDimension& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_FallbackDimension* default_instance_;
    bool m_has_type;
    ST_FallbackDimension::Type m_type;
};

class ST_TextDirection: public XSD::SimpleType
{
public:
    enum  Type
    {
        _fromT_ = 0,
        _fromB_
    };
    ST_TextDirection();
    ST_TextDirection(const ST_TextDirection::Type& _type);
    ~ST_TextDirection();
    bool has_type() const;
    void set_type(const ST_TextDirection::Type& _type);
    const ST_TextDirection::Type& get_type() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_TextDirection& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_TextDirection* default_instance_;
    bool m_has_type;
    ST_TextDirection::Type m_type;
};

class ST_PyramidAccentPosition: public XSD::SimpleType
{
public:
    enum  Type
    {
        _bef_ = 0,
        _aft_
    };
    ST_PyramidAccentPosition();
    ST_PyramidAccentPosition(const ST_PyramidAccentPosition::Type& _type);
    ~ST_PyramidAccentPosition();
    bool has_type() const;
    void set_type(const ST_PyramidAccentPosition::Type& _type);
    const ST_PyramidAccentPosition::Type& get_type() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_PyramidAccentPosition& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_PyramidAccentPosition* default_instance_;
    bool m_has_type;
    ST_PyramidAccentPosition::Type m_type;
};

class ST_PyramidAccentTextMargin: public XSD::SimpleType
{
public:
    enum  Type
    {
        _step_ = 0,
        _stack_
    };
    ST_PyramidAccentTextMargin();
    ST_PyramidAccentTextMargin(const ST_PyramidAccentTextMargin::Type& _type);
    ~ST_PyramidAccentTextMargin();
    bool has_type() const;
    void set_type(const ST_PyramidAccentTextMargin::Type& _type);
    const ST_PyramidAccentTextMargin::Type& get_type() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_PyramidAccentTextMargin& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_PyramidAccentTextMargin* default_instance_;
    bool m_has_type;
    ST_PyramidAccentTextMargin::Type m_type;
};

class ST_TextBlockDirection: public XSD::SimpleType
{
public:
    enum  Type
    {
        _horz_ = 0,
        _vert_
    };
    ST_TextBlockDirection();
    ST_TextBlockDirection(const ST_TextBlockDirection::Type& _type);
    ~ST_TextBlockDirection();
    bool has_type() const;
    void set_type(const ST_TextBlockDirection::Type& _type);
    const ST_TextBlockDirection::Type& get_type() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_TextBlockDirection& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_TextBlockDirection* default_instance_;
    bool m_has_type;
    ST_TextBlockDirection::Type m_type;
};

class ST_TextAnchorHorizontal: public XSD::SimpleType
{
public:
    enum  Type
    {
        _none_ = 0,
        _ctr_
    };
    ST_TextAnchorHorizontal();
    ST_TextAnchorHorizontal(const ST_TextAnchorHorizontal::Type& _type);
    ~ST_TextAnchorHorizontal();
    bool has_type() const;
    void set_type(const ST_TextAnchorHorizontal::Type& _type);
    const ST_TextAnchorHorizontal::Type& get_type() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_TextAnchorHorizontal& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_TextAnchorHorizontal* default_instance_;
    bool m_has_type;
    ST_TextAnchorHorizontal::Type m_type;
};

class ST_TextAnchorVertical: public XSD::SimpleType
{
public:
    enum  Type
    {
        _t_ = 0,
        _mid_,
        _b_
    };
    ST_TextAnchorVertical();
    ST_TextAnchorVertical(const ST_TextAnchorVertical::Type& _type);
    ~ST_TextAnchorVertical();
    bool has_type() const;
    void set_type(const ST_TextAnchorVertical::Type& _type);
    const ST_TextAnchorVertical::Type& get_type() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_TextAnchorVertical& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_TextAnchorVertical* default_instance_;
    bool m_has_type;
    ST_TextAnchorVertical::Type m_type;
};

class ST_DiagramTextAlignment: public XSD::SimpleType
{
public:
    enum  Type
    {
        _l_ = 0,
        _ctr_,
        _r_
    };
    ST_DiagramTextAlignment();
    ST_DiagramTextAlignment(const ST_DiagramTextAlignment::Type& _type);
    ~ST_DiagramTextAlignment();
    bool has_type() const;
    void set_type(const ST_DiagramTextAlignment::Type& _type);
    const ST_DiagramTextAlignment::Type& get_type() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_DiagramTextAlignment& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_DiagramTextAlignment* default_instance_;
    bool m_has_type;
    ST_DiagramTextAlignment::Type m_type;
};

class ST_AutoTextRotation: public XSD::SimpleType
{
public:
    enum  Type
    {
        _none_ = 0,
        _upr_,
        _grav_
    };
    ST_AutoTextRotation();
    ST_AutoTextRotation(const ST_AutoTextRotation::Type& _type);
    ~ST_AutoTextRotation();
    bool has_type() const;
    void set_type(const ST_AutoTextRotation::Type& _type);
    const ST_AutoTextRotation::Type& get_type() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_AutoTextRotation& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_AutoTextRotation* default_instance_;
    bool m_has_type;
    ST_AutoTextRotation::Type m_type;
};

class ST_GrowDirection: public XSD::SimpleType
{
public:
    enum  Type
    {
        _tL_ = 0,
        _tR_,
        _bL_,
        _bR_
    };
    ST_GrowDirection();
    ST_GrowDirection(const ST_GrowDirection::Type& _type);
    ~ST_GrowDirection();
    bool has_type() const;
    void set_type(const ST_GrowDirection::Type& _type);
    const ST_GrowDirection::Type& get_type() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_GrowDirection& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_GrowDirection* default_instance_;
    bool m_has_type;
    ST_GrowDirection::Type m_type;
};

class ST_FlowDirection: public XSD::SimpleType
{
public:
    enum  Type
    {
        _row_ = 0,
        _col_
    };
    ST_FlowDirection();
    ST_FlowDirection(const ST_FlowDirection::Type& _type);
    ~ST_FlowDirection();
    bool has_type() const;
    void set_type(const ST_FlowDirection::Type& _type);
    const ST_FlowDirection::Type& get_type() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_FlowDirection& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_FlowDirection* default_instance_;
    bool m_has_type;
    ST_FlowDirection::Type m_type;
};

class ST_ContinueDirection: public XSD::SimpleType
{
public:
    enum  Type
    {
        _revDir_ = 0,
        _sameDir_
    };
    ST_ContinueDirection();
    ST_ContinueDirection(const ST_ContinueDirection::Type& _type);
    ~ST_ContinueDirection();
    bool has_type() const;
    void set_type(const ST_ContinueDirection::Type& _type);
    const ST_ContinueDirection::Type& get_type() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_ContinueDirection& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_ContinueDirection* default_instance_;
    bool m_has_type;
    ST_ContinueDirection::Type m_type;
};

class ST_Breakpoint: public XSD::SimpleType
{
public:
    enum  Type
    {
        _endCnv_ = 0,
        _bal_,
        _fixed_
    };
    ST_Breakpoint();
    ST_Breakpoint(const ST_Breakpoint::Type& _type);
    ~ST_Breakpoint();
    bool has_type() const;
    void set_type(const ST_Breakpoint::Type& _type);
    const ST_Breakpoint::Type& get_type() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_Breakpoint& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_Breakpoint* default_instance_;
    bool m_has_type;
    ST_Breakpoint::Type m_type;
};

class ST_Offset: public XSD::SimpleType
{
public:
    enum  Type
    {
        _ctr_ = 0,
        _off_
    };
    ST_Offset();
    ST_Offset(const ST_Offset::Type& _type);
    ~ST_Offset();
    bool has_type() const;
    void set_type(const ST_Offset::Type& _type);
    const ST_Offset::Type& get_type() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_Offset& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_Offset* default_instance_;
    bool m_has_type;
    ST_Offset::Type m_type;
};

class ST_HierarchyAlignment: public XSD::SimpleType
{
public:
    enum  Type
    {
        _tL_ = 0,
        _tR_,
        _tCtrCh_,
        _tCtrDes_,
        _bL_,
        _bR_,
        _bCtrCh_,
        _bCtrDes_,
        _lT_,
        _lB_,
        _lCtrCh_,
        _lCtrDes_,
        _rT_,
        _rB_,
        _rCtrCh_,
        _rCtrDes_
    };
    ST_HierarchyAlignment();
    ST_HierarchyAlignment(const ST_HierarchyAlignment::Type& _type);
    ~ST_HierarchyAlignment();
    bool has_type() const;
    void set_type(const ST_HierarchyAlignment::Type& _type);
    const ST_HierarchyAlignment::Type& get_type() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_HierarchyAlignment& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_HierarchyAlignment* default_instance_;
    bool m_has_type;
    ST_HierarchyAlignment::Type m_type;
};

class ST_FunctionValue: public XSD::SimpleType
{
public:
    ST_FunctionValue();
    ~ST_FunctionValue();
    bool has_int() const;
    void set_int(const XSD::int_& _int);
    const XSD::int_& get_int() const;
    void clear_int();
    bool has_boolean() const;
    void set_boolean(const XSD::boolean_& _boolean);
    const XSD::boolean_& get_boolean() const;
    void clear_boolean();
    bool has_ST_Direction() const;
    ST_Direction* mutable_ST_Direction();
    const ST_Direction& get_ST_Direction() const;
    void clear_ST_Direction();
    bool has_ST_HierBranchStyle() const;
    ST_HierBranchStyle* mutable_ST_HierBranchStyle();
    const ST_HierBranchStyle& get_ST_HierBranchStyle() const;
    void clear_ST_HierBranchStyle();
    bool has_ST_AnimOneStr() const;
    ST_AnimOneStr* mutable_ST_AnimOneStr();
    const ST_AnimOneStr& get_ST_AnimOneStr() const;
    void clear_ST_AnimOneStr();
    bool has_ST_AnimLvlStr() const;
    ST_AnimLvlStr* mutable_ST_AnimLvlStr();
    const ST_AnimLvlStr& get_ST_AnimLvlStr() const;
    void clear_ST_AnimLvlStr();
    bool has_ST_ResizeHandlesStr() const;
    ST_ResizeHandlesStr* mutable_ST_ResizeHandlesStr();
    const ST_ResizeHandlesStr& get_ST_ResizeHandlesStr() const;
    void clear_ST_ResizeHandlesStr();
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_FunctionValue& default_instance();
protected:
private:
    bool m_has_int;
    XSD::int_ m_int;
    bool m_has_boolean;
    XSD::boolean_ m_boolean;
    bool m_has_ST_Direction;
    ST_Direction* m_ST_Direction;
    bool m_has_ST_HierBranchStyle;
    ST_HierBranchStyle* m_ST_HierBranchStyle;
    bool m_has_ST_AnimOneStr;
    ST_AnimOneStr* m_ST_AnimOneStr;
    bool m_has_ST_AnimLvlStr;
    ST_AnimLvlStr* m_ST_AnimLvlStr;
    bool m_has_ST_ResizeHandlesStr;
    ST_ResizeHandlesStr* m_ST_ResizeHandlesStr;
    static ST_FunctionValue* default_instance_;
};

class ST_VariableType: public XSD::SimpleType
{
public:
    enum  Type
    {
        _none_ = 0,
        _orgChart_,
        _chMax_,
        _chPref_,
        _bulEnabled_,
        _dir_,
        _hierBranch_,
        _animOne_,
        _animLvl_,
        _resizeHandles_
    };
    ST_VariableType();
    ST_VariableType(const ST_VariableType::Type& _type);
    ~ST_VariableType();
    bool has_type() const;
    void set_type(const ST_VariableType::Type& _type);
    const ST_VariableType::Type& get_type() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_VariableType& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_VariableType* default_instance_;
    bool m_has_type;
    ST_VariableType::Type m_type;
};

class ST_FunctionArgument: public XSD::SimpleType
{
public:
    ST_FunctionArgument();
    ~ST_FunctionArgument();
    bool has_ST_VariableType() const;
    ST_VariableType* mutable_ST_VariableType();
    const ST_VariableType& get_ST_VariableType() const;
    void clear_ST_VariableType();
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_FunctionArgument& default_instance();
protected:
private:
    bool m_has_ST_VariableType;
    ST_VariableType* m_ST_VariableType;
    static ST_FunctionArgument* default_instance_;
};

class ST_OutputShapeType: public XSD::SimpleType
{
public:
    enum  Type
    {
        _none_ = 0,
        _conn_
    };
    ST_OutputShapeType();
    ST_OutputShapeType(const ST_OutputShapeType::Type& _type);
    ~ST_OutputShapeType();
    bool has_type() const;
    void set_type(const ST_OutputShapeType::Type& _type);
    const ST_OutputShapeType::Type& get_type() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_OutputShapeType& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_OutputShapeType* default_instance_;
    bool m_has_type;
    ST_OutputShapeType::Type m_type;
};

class CT_CTName: public XSD::ComplexType
{
public:
    CT_CTName();
    ~CT_CTName();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_CTName& default_instance();
    bool has_lang_attr() const;
    void set_lang_attr(const XSD::string_& _lang_attr);
    const XSD::string_& get_lang_attr() const;
    bool has_val_attr() const;
    void set_val_attr(const XSD::string_& _val_attr);
    const XSD::string_& get_val_attr() const;
protected:
private:
    static CT_CTName* default_instance_;
    bool m_has_lang_attr;
    XSD::string_ m_lang_attr;
    bool m_has_val_attr;
    XSD::string_ m_val_attr;
};

class CT_CTDescription: public XSD::ComplexType
{
public:
    CT_CTDescription();
    ~CT_CTDescription();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_CTDescription& default_instance();
    bool has_lang_attr() const;
    void set_lang_attr(const XSD::string_& _lang_attr);
    const XSD::string_& get_lang_attr() const;
    bool has_val_attr() const;
    void set_val_attr(const XSD::string_& _val_attr);
    const XSD::string_& get_val_attr() const;
protected:
private:
    static CT_CTDescription* default_instance_;
    bool m_has_lang_attr;
    XSD::string_ m_lang_attr;
    bool m_has_val_attr;
    XSD::string_ m_val_attr;
};

class CT_CTCategory: public XSD::ComplexType
{
public:
    CT_CTCategory();
    ~CT_CTCategory();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_CTCategory& default_instance();
    bool has_type_attr() const;
    void set_type_attr(const XSD::anyURI_& _type_attr);
    const XSD::anyURI_& get_type_attr() const;
    bool has_pri_attr() const;
    void set_pri_attr(const XSD::unsignedInt_& _pri_attr);
    const XSD::unsignedInt_& get_pri_attr() const;
protected:
private:
    static CT_CTCategory* default_instance_;
    bool m_has_type_attr;
    XSD::anyURI_ m_type_attr;
    bool m_has_pri_attr;
    XSD::unsignedInt_ m_pri_attr;
};

class CT_CTCategories: public XSD::ComplexType
{
public:
    CT_CTCategories();
    ~CT_CTCategories();
    CT_CTCategory* add_cat();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_CTCategories& default_instance();
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_cat() const;
        CT_CTCategory* mutable_cat();
        const CT_CTCategory& get_cat() const;
    protected:
    private:
        bool m_has_cat;
        CT_CTCategory* m_cat;
    };
    vector<ChildGroup_1*> m_childGroupList_1;
    static CT_CTCategories* default_instance_;
};

class CT_Colors: public XSD::ComplexType
{
public:
    CT_Colors();
    ~CT_Colors();
    ns_a::CT_ScRgbColor* add_a_scrgbClr();
    ns_a::CT_SRgbColor* add_a_srgbClr();
    ns_a::CT_HslColor* add_a_hslClr();
    ns_a::CT_SystemColor* add_a_sysClr();
    ns_a::CT_SchemeColor* add_a_schemeClr();
    ns_a::CT_PresetColor* add_a_prstClr();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_Colors& default_instance();
    bool has_meth_attr() const;
    void set_meth_attr(const ST_ClrAppMethod& _meth_attr);
    const ST_ClrAppMethod& get_meth_attr() const;
    bool has_hueDir_attr() const;
    void set_hueDir_attr(const ST_HueDir& _hueDir_attr);
    const ST_HueDir& get_hueDir_attr() const;
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_a_scrgbClr() const;
        ns_a::CT_ScRgbColor* mutable_a_scrgbClr();
        const ns_a::CT_ScRgbColor& get_a_scrgbClr() const;
        bool has_a_srgbClr() const;
        ns_a::CT_SRgbColor* mutable_a_srgbClr();
        const ns_a::CT_SRgbColor& get_a_srgbClr() const;
        bool has_a_hslClr() const;
        ns_a::CT_HslColor* mutable_a_hslClr();
        const ns_a::CT_HslColor& get_a_hslClr() const;
        bool has_a_sysClr() const;
        ns_a::CT_SystemColor* mutable_a_sysClr();
        const ns_a::CT_SystemColor& get_a_sysClr() const;
        bool has_a_schemeClr() const;
        ns_a::CT_SchemeColor* mutable_a_schemeClr();
        const ns_a::CT_SchemeColor& get_a_schemeClr() const;
        bool has_a_prstClr() const;
        ns_a::CT_PresetColor* mutable_a_prstClr();
        const ns_a::CT_PresetColor& get_a_prstClr() const;
    protected:
    private:
        bool m_has_a_scrgbClr;
        ns_a::CT_ScRgbColor* m_a_scrgbClr;
        bool m_has_a_srgbClr;
        ns_a::CT_SRgbColor* m_a_srgbClr;
        bool m_has_a_hslClr;
        ns_a::CT_HslColor* m_a_hslClr;
        bool m_has_a_sysClr;
        ns_a::CT_SystemColor* m_a_sysClr;
        bool m_has_a_schemeClr;
        ns_a::CT_SchemeColor* m_a_schemeClr;
        bool m_has_a_prstClr;
        ns_a::CT_PresetColor* m_a_prstClr;
    };
    vector<ChildGroup_1*> m_childGroupList_1;
    static CT_Colors* default_instance_;
    bool m_has_meth_attr;
    ST_ClrAppMethod* m_meth_attr;
    bool m_has_hueDir_attr;
    ST_HueDir* m_hueDir_attr;
};

class CT_CTStyleLabel: public XSD::ComplexType
{
public:
    CT_CTStyleLabel();
    ~CT_CTStyleLabel();
    bool has_fillClrLst() const;
    CT_Colors* mutable_fillClrLst();
    const CT_Colors& get_fillClrLst() const;
    bool has_linClrLst() const;
    CT_Colors* mutable_linClrLst();
    const CT_Colors& get_linClrLst() const;
    bool has_effectClrLst() const;
    CT_Colors* mutable_effectClrLst();
    const CT_Colors& get_effectClrLst() const;
    bool has_txLinClrLst() const;
    CT_Colors* mutable_txLinClrLst();
    const CT_Colors& get_txLinClrLst() const;
    bool has_txFillClrLst() const;
    CT_Colors* mutable_txFillClrLst();
    const CT_Colors& get_txFillClrLst() const;
    bool has_txEffectClrLst() const;
    CT_Colors* mutable_txEffectClrLst();
    const CT_Colors& get_txEffectClrLst() const;
    bool has_extLst() const;
    ns_a::CT_OfficeArtExtensionList* mutable_extLst();
    const ns_a::CT_OfficeArtExtensionList& get_extLst() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_CTStyleLabel& default_instance();
    bool has_name_attr() const;
    void set_name_attr(const XSD::string_& _name_attr);
    const XSD::string_& get_name_attr() const;
protected:
private:
    bool m_has_fillClrLst;
    CT_Colors* m_fillClrLst;
    bool m_has_linClrLst;
    CT_Colors* m_linClrLst;
    bool m_has_effectClrLst;
    CT_Colors* m_effectClrLst;
    bool m_has_txLinClrLst;
    CT_Colors* m_txLinClrLst;
    bool m_has_txFillClrLst;
    CT_Colors* m_txFillClrLst;
    bool m_has_txEffectClrLst;
    CT_Colors* m_txEffectClrLst;
    bool m_has_extLst;
    ns_a::CT_OfficeArtExtensionList* m_extLst;
    static CT_CTStyleLabel* default_instance_;
    bool m_has_name_attr;
    XSD::string_ m_name_attr;
};

class CT_ColorTransform: public XSD::ComplexType
{
public:
    CT_ColorTransform();
    ~CT_ColorTransform();
    CT_CTName* add_title();
    CT_CTDescription* add_desc();
    bool has_catLst() const;
    CT_CTCategories* mutable_catLst();
    const CT_CTCategories& get_catLst() const;
    CT_CTStyleLabel* add_styleLbl();
    bool has_extLst() const;
    ns_a::CT_OfficeArtExtensionList* mutable_extLst();
    const ns_a::CT_OfficeArtExtensionList& get_extLst() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_ColorTransform& default_instance();
    bool has_uniqueId_attr() const;
    void set_uniqueId_attr(const XSD::string_& _uniqueId_attr);
    const XSD::string_& get_uniqueId_attr() const;
    bool has_minVer_attr() const;
    void set_minVer_attr(const XSD::string_& _minVer_attr);
    const XSD::string_& get_minVer_attr() const;
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_title() const;
        CT_CTName* mutable_title();
        const CT_CTName& get_title() const;
        bool has_desc() const;
        CT_CTDescription* mutable_desc();
        const CT_CTDescription& get_desc() const;
    protected:
    private:
        bool m_has_title;
        CT_CTName* m_title;
        bool m_has_desc;
        CT_CTDescription* m_desc;
    };
    class ChildGroup_2
    {
    public:
        ChildGroup_2();
        bool has_styleLbl() const;
        CT_CTStyleLabel* mutable_styleLbl();
        const CT_CTStyleLabel& get_styleLbl() const;
    protected:
    private:
        bool m_has_styleLbl;
        CT_CTStyleLabel* m_styleLbl;
    };
    vector<ChildGroup_1*> m_childGroupList_1;
    bool m_has_catLst;
    CT_CTCategories* m_catLst;
    vector<ChildGroup_2*> m_childGroupList_2;
    bool m_has_extLst;
    ns_a::CT_OfficeArtExtensionList* m_extLst;
    static CT_ColorTransform* default_instance_;
    bool m_has_uniqueId_attr;
    XSD::string_ m_uniqueId_attr;
    bool m_has_minVer_attr;
    XSD::string_ m_minVer_attr;
};

class CT_ColorTransformHeader: public XSD::ComplexType
{
public:
    CT_ColorTransformHeader();
    ~CT_ColorTransformHeader();
    CT_CTName* add_title();
    CT_CTDescription* add_desc();
    bool has_catLst() const;
    CT_CTCategories* mutable_catLst();
    const CT_CTCategories& get_catLst() const;
    bool has_extLst() const;
    ns_a::CT_OfficeArtExtensionList* mutable_extLst();
    const ns_a::CT_OfficeArtExtensionList& get_extLst() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_ColorTransformHeader& default_instance();
    bool has_uniqueId_attr() const;
    void set_uniqueId_attr(const XSD::string_& _uniqueId_attr);
    const XSD::string_& get_uniqueId_attr() const;
    bool has_minVer_attr() const;
    void set_minVer_attr(const XSD::string_& _minVer_attr);
    const XSD::string_& get_minVer_attr() const;
    bool has_resId_attr() const;
    void set_resId_attr(const XSD::int_& _resId_attr);
    const XSD::int_& get_resId_attr() const;
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_title() const;
        CT_CTName* mutable_title();
        const CT_CTName& get_title() const;
        bool has_desc() const;
        CT_CTDescription* mutable_desc();
        const CT_CTDescription& get_desc() const;
    protected:
    private:
        bool m_has_title;
        CT_CTName* m_title;
        bool m_has_desc;
        CT_CTDescription* m_desc;
    };
    vector<ChildGroup_1*> m_childGroupList_1;
    bool m_has_catLst;
    CT_CTCategories* m_catLst;
    bool m_has_extLst;
    ns_a::CT_OfficeArtExtensionList* m_extLst;
    static CT_ColorTransformHeader* default_instance_;
    bool m_has_uniqueId_attr;
    XSD::string_ m_uniqueId_attr;
    bool m_has_minVer_attr;
    XSD::string_ m_minVer_attr;
    bool m_has_resId_attr;
    XSD::int_ m_resId_attr;
};

class CT_ColorTransformHeaderLst: public XSD::ComplexType
{
public:
    CT_ColorTransformHeaderLst();
    ~CT_ColorTransformHeaderLst();
    CT_ColorTransformHeader* add_colorsDefHdr();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_ColorTransformHeaderLst& default_instance();
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_colorsDefHdr() const;
        CT_ColorTransformHeader* mutable_colorsDefHdr();
        const CT_ColorTransformHeader& get_colorsDefHdr() const;
    protected:
    private:
        bool m_has_colorsDefHdr;
        CT_ColorTransformHeader* m_colorsDefHdr;
    };
    vector<ChildGroup_1*> m_childGroupList_1;
    static CT_ColorTransformHeaderLst* default_instance_;
};

class CT_Pt: public XSD::ComplexType
{
public:
    CT_Pt();
    ~CT_Pt();
    bool has_prSet() const;
    CT_ElemPropSet* mutable_prSet();
    const CT_ElemPropSet& get_prSet() const;
    bool has_spPr() const;
    ns_a::CT_ShapeProperties* mutable_spPr();
    const ns_a::CT_ShapeProperties& get_spPr() const;
    bool has_t() const;
    ns_a::CT_TextBody* mutable_t();
    const ns_a::CT_TextBody& get_t() const;
    bool has_extLst() const;
    ns_a::CT_OfficeArtExtensionList* mutable_extLst();
    const ns_a::CT_OfficeArtExtensionList& get_extLst() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_Pt& default_instance();
    bool has_modelId_attr() const;
    void set_modelId_attr(const ST_ModelId& _modelId_attr);
    const ST_ModelId& get_modelId_attr() const;
    bool has_type_attr() const;
    void set_type_attr(const ST_PtType& _type_attr);
    const ST_PtType& get_type_attr() const;
    bool has_cxnId_attr() const;
    void set_cxnId_attr(const ST_ModelId& _cxnId_attr);
    const ST_ModelId& get_cxnId_attr() const;
protected:
private:
    bool m_has_prSet;
    CT_ElemPropSet* m_prSet;
    bool m_has_spPr;
    ns_a::CT_ShapeProperties* m_spPr;
    bool m_has_t;
    ns_a::CT_TextBody* m_t;
    bool m_has_extLst;
    ns_a::CT_OfficeArtExtensionList* m_extLst;
    static CT_Pt* default_instance_;
    bool m_has_modelId_attr;
    ST_ModelId* m_modelId_attr;
    bool m_has_type_attr;
    ST_PtType* m_type_attr;
    bool m_has_cxnId_attr;
    ST_ModelId* m_cxnId_attr;
};

class CT_PtList: public XSD::ComplexType
{
public:
    CT_PtList();
    ~CT_PtList();
    CT_Pt* add_pt();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_PtList& default_instance();
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_pt() const;
        CT_Pt* mutable_pt();
        const CT_Pt& get_pt() const;
    protected:
    private:
        bool m_has_pt;
        CT_Pt* m_pt;
    };
    vector<ChildGroup_1*> m_childGroupList_1;
    static CT_PtList* default_instance_;
};

class CT_Cxn: public XSD::ComplexType
{
public:
    CT_Cxn();
    ~CT_Cxn();
    bool has_extLst() const;
    ns_a::CT_OfficeArtExtensionList* mutable_extLst();
    const ns_a::CT_OfficeArtExtensionList& get_extLst() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_Cxn& default_instance();
    bool has_modelId_attr() const;
    void set_modelId_attr(const ST_ModelId& _modelId_attr);
    const ST_ModelId& get_modelId_attr() const;
    bool has_type_attr() const;
    void set_type_attr(const ST_CxnType& _type_attr);
    const ST_CxnType& get_type_attr() const;
    bool has_srcId_attr() const;
    void set_srcId_attr(const ST_ModelId& _srcId_attr);
    const ST_ModelId& get_srcId_attr() const;
    bool has_destId_attr() const;
    void set_destId_attr(const ST_ModelId& _destId_attr);
    const ST_ModelId& get_destId_attr() const;
    bool has_srcOrd_attr() const;
    void set_srcOrd_attr(const XSD::unsignedInt_& _srcOrd_attr);
    const XSD::unsignedInt_& get_srcOrd_attr() const;
    bool has_destOrd_attr() const;
    void set_destOrd_attr(const XSD::unsignedInt_& _destOrd_attr);
    const XSD::unsignedInt_& get_destOrd_attr() const;
    bool has_parTransId_attr() const;
    void set_parTransId_attr(const ST_ModelId& _parTransId_attr);
    const ST_ModelId& get_parTransId_attr() const;
    bool has_sibTransId_attr() const;
    void set_sibTransId_attr(const ST_ModelId& _sibTransId_attr);
    const ST_ModelId& get_sibTransId_attr() const;
    bool has_presId_attr() const;
    void set_presId_attr(const XSD::string_& _presId_attr);
    const XSD::string_& get_presId_attr() const;
protected:
private:
    bool m_has_extLst;
    ns_a::CT_OfficeArtExtensionList* m_extLst;
    static CT_Cxn* default_instance_;
    bool m_has_modelId_attr;
    ST_ModelId* m_modelId_attr;
    bool m_has_type_attr;
    ST_CxnType* m_type_attr;
    bool m_has_srcId_attr;
    ST_ModelId* m_srcId_attr;
    bool m_has_destId_attr;
    ST_ModelId* m_destId_attr;
    bool m_has_srcOrd_attr;
    XSD::unsignedInt_ m_srcOrd_attr;
    bool m_has_destOrd_attr;
    XSD::unsignedInt_ m_destOrd_attr;
    bool m_has_parTransId_attr;
    ST_ModelId* m_parTransId_attr;
    bool m_has_sibTransId_attr;
    ST_ModelId* m_sibTransId_attr;
    bool m_has_presId_attr;
    XSD::string_ m_presId_attr;
};

class CT_CxnList: public XSD::ComplexType
{
public:
    CT_CxnList();
    ~CT_CxnList();
    CT_Cxn* add_cxn();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_CxnList& default_instance();
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_cxn() const;
        CT_Cxn* mutable_cxn();
        const CT_Cxn& get_cxn() const;
    protected:
    private:
        bool m_has_cxn;
        CT_Cxn* m_cxn;
    };
    vector<ChildGroup_1*> m_childGroupList_1;
    static CT_CxnList* default_instance_;
};

class CT_DataModel: public XSD::ComplexType
{
public:
    CT_DataModel();
    ~CT_DataModel();
    bool has_ptLst() const;
    CT_PtList* mutable_ptLst();
    const CT_PtList& get_ptLst() const;
    bool has_cxnLst() const;
    CT_CxnList* mutable_cxnLst();
    const CT_CxnList& get_cxnLst() const;
    bool has_bg() const;
    ns_a::CT_BackgroundFormatting* mutable_bg();
    const ns_a::CT_BackgroundFormatting& get_bg() const;
    bool has_whole() const;
    ns_a::CT_WholeE2oFormatting* mutable_whole();
    const ns_a::CT_WholeE2oFormatting& get_whole() const;
    bool has_extLst() const;
    ns_a::CT_OfficeArtExtensionList* mutable_extLst();
    const ns_a::CT_OfficeArtExtensionList& get_extLst() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_DataModel& default_instance();
protected:
private:
    bool m_has_ptLst;
    CT_PtList* m_ptLst;
    bool m_has_cxnLst;
    CT_CxnList* m_cxnLst;
    bool m_has_bg;
    ns_a::CT_BackgroundFormatting* m_bg;
    bool m_has_whole;
    ns_a::CT_WholeE2oFormatting* m_whole;
    bool m_has_extLst;
    ns_a::CT_OfficeArtExtensionList* m_extLst;
    static CT_DataModel* default_instance_;
};

class CT_Constraint: public XSD::ComplexType
{
public:
    CT_Constraint();
    ~CT_Constraint();
    bool has_extLst() const;
    ns_a::CT_OfficeArtExtensionList* mutable_extLst();
    const ns_a::CT_OfficeArtExtensionList& get_extLst() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_Constraint& default_instance();
    bool has_type_attr() const;
    void set_type_attr(const ST_ConstraintType& _type_attr);
    const ST_ConstraintType& get_type_attr() const;
    bool has_for_attr() const;
    void set_for_attr(const ST_ConstraintRelationship& _for_attr);
    const ST_ConstraintRelationship& get_for_attr() const;
    bool has_forName_attr() const;
    void set_forName_attr(const XSD::string_& _forName_attr);
    const XSD::string_& get_forName_attr() const;
    bool has_ptType_attr() const;
    void set_ptType_attr(const ST_ElementType& _ptType_attr);
    const ST_ElementType& get_ptType_attr() const;
    bool has_refType_attr() const;
    void set_refType_attr(const ST_ConstraintType& _refType_attr);
    const ST_ConstraintType& get_refType_attr() const;
    bool has_refFor_attr() const;
    void set_refFor_attr(const ST_ConstraintRelationship& _refFor_attr);
    const ST_ConstraintRelationship& get_refFor_attr() const;
    bool has_refForName_attr() const;
    void set_refForName_attr(const XSD::string_& _refForName_attr);
    const XSD::string_& get_refForName_attr() const;
    bool has_refPtType_attr() const;
    void set_refPtType_attr(const ST_ElementType& _refPtType_attr);
    const ST_ElementType& get_refPtType_attr() const;
    bool has_op_attr() const;
    void set_op_attr(const ST_BoolOperator& _op_attr);
    const ST_BoolOperator& get_op_attr() const;
    bool has_val_attr() const;
    void set_val_attr(const XSD::double_& _val_attr);
    const XSD::double_& get_val_attr() const;
    bool has_fact_attr() const;
    void set_fact_attr(const XSD::double_& _fact_attr);
    const XSD::double_& get_fact_attr() const;
protected:
private:
    bool m_has_extLst;
    ns_a::CT_OfficeArtExtensionList* m_extLst;
    static CT_Constraint* default_instance_;
    bool m_has_type_attr;
    ST_ConstraintType* m_type_attr;
    bool m_has_for_attr;
    ST_ConstraintRelationship* m_for_attr;
    bool m_has_forName_attr;
    XSD::string_ m_forName_attr;
    bool m_has_ptType_attr;
    ST_ElementType* m_ptType_attr;
    bool m_has_refType_attr;
    ST_ConstraintType* m_refType_attr;
    bool m_has_refFor_attr;
    ST_ConstraintRelationship* m_refFor_attr;
    bool m_has_refForName_attr;
    XSD::string_ m_refForName_attr;
    bool m_has_refPtType_attr;
    ST_ElementType* m_refPtType_attr;
    bool m_has_op_attr;
    ST_BoolOperator* m_op_attr;
    bool m_has_val_attr;
    XSD::double_ m_val_attr;
    bool m_has_fact_attr;
    XSD::double_ m_fact_attr;
};

class CT_Constraints: public XSD::ComplexType
{
public:
    CT_Constraints();
    ~CT_Constraints();
    CT_Constraint* add_constr();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_Constraints& default_instance();
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_constr() const;
        CT_Constraint* mutable_constr();
        const CT_Constraint& get_constr() const;
    protected:
    private:
        bool m_has_constr;
        CT_Constraint* m_constr;
    };
    vector<ChildGroup_1*> m_childGroupList_1;
    static CT_Constraints* default_instance_;
};

class CT_NumericRule: public XSD::ComplexType
{
public:
    CT_NumericRule();
    ~CT_NumericRule();
    bool has_extLst() const;
    ns_a::CT_OfficeArtExtensionList* mutable_extLst();
    const ns_a::CT_OfficeArtExtensionList& get_extLst() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_NumericRule& default_instance();
    bool has_type_attr() const;
    void set_type_attr(const ST_ConstraintType& _type_attr);
    const ST_ConstraintType& get_type_attr() const;
    bool has_for_attr() const;
    void set_for_attr(const ST_ConstraintRelationship& _for_attr);
    const ST_ConstraintRelationship& get_for_attr() const;
    bool has_forName_attr() const;
    void set_forName_attr(const XSD::string_& _forName_attr);
    const XSD::string_& get_forName_attr() const;
    bool has_ptType_attr() const;
    void set_ptType_attr(const ST_ElementType& _ptType_attr);
    const ST_ElementType& get_ptType_attr() const;
    bool has_val_attr() const;
    void set_val_attr(const XSD::double_& _val_attr);
    const XSD::double_& get_val_attr() const;
    bool has_fact_attr() const;
    void set_fact_attr(const XSD::double_& _fact_attr);
    const XSD::double_& get_fact_attr() const;
    bool has_max_attr() const;
    void set_max_attr(const XSD::double_& _max_attr);
    const XSD::double_& get_max_attr() const;
protected:
private:
    bool m_has_extLst;
    ns_a::CT_OfficeArtExtensionList* m_extLst;
    static CT_NumericRule* default_instance_;
    bool m_has_type_attr;
    ST_ConstraintType* m_type_attr;
    bool m_has_for_attr;
    ST_ConstraintRelationship* m_for_attr;
    bool m_has_forName_attr;
    XSD::string_ m_forName_attr;
    bool m_has_ptType_attr;
    ST_ElementType* m_ptType_attr;
    bool m_has_val_attr;
    XSD::double_ m_val_attr;
    bool m_has_fact_attr;
    XSD::double_ m_fact_attr;
    bool m_has_max_attr;
    XSD::double_ m_max_attr;
};

class CT_Rules: public XSD::ComplexType
{
public:
    CT_Rules();
    ~CT_Rules();
    CT_NumericRule* add_rule();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_Rules& default_instance();
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_rule() const;
        CT_NumericRule* mutable_rule();
        const CT_NumericRule& get_rule() const;
    protected:
    private:
        bool m_has_rule;
        CT_NumericRule* m_rule;
    };
    vector<ChildGroup_1*> m_childGroupList_1;
    static CT_Rules* default_instance_;
};

class CT_PresentationOf: public XSD::ComplexType
{
public:
    CT_PresentationOf();
    ~CT_PresentationOf();
    bool has_extLst() const;
    ns_a::CT_OfficeArtExtensionList* mutable_extLst();
    const ns_a::CT_OfficeArtExtensionList& get_extLst() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_PresentationOf& default_instance();
    bool has_axis_attr() const;
    void set_axis_attr(const ST_AxisTypes& _axis_attr);
    const ST_AxisTypes& get_axis_attr() const;
    bool has_ptType_attr() const;
    void set_ptType_attr(const ST_ElementTypes& _ptType_attr);
    const ST_ElementTypes& get_ptType_attr() const;
    bool has_hideLastTrans_attr() const;
    void set_hideLastTrans_attr(const ST_Booleans& _hideLastTrans_attr);
    const ST_Booleans& get_hideLastTrans_attr() const;
    bool has_st_attr() const;
    void set_st_attr(const ST_Ints& _st_attr);
    const ST_Ints& get_st_attr() const;
    bool has_cnt_attr() const;
    void set_cnt_attr(const ST_UnsignedInts& _cnt_attr);
    const ST_UnsignedInts& get_cnt_attr() const;
    bool has_step_attr() const;
    void set_step_attr(const ST_Ints& _step_attr);
    const ST_Ints& get_step_attr() const;
protected:
private:
    bool m_has_extLst;
    ns_a::CT_OfficeArtExtensionList* m_extLst;
    static CT_PresentationOf* default_instance_;
    bool m_has_axis_attr;
    ST_AxisTypes* m_axis_attr;
    bool m_has_ptType_attr;
    ST_ElementTypes* m_ptType_attr;
    bool m_has_hideLastTrans_attr;
    ST_Booleans* m_hideLastTrans_attr;
    bool m_has_st_attr;
    ST_Ints* m_st_attr;
    bool m_has_cnt_attr;
    ST_UnsignedInts* m_cnt_attr;
    bool m_has_step_attr;
    ST_Ints* m_step_attr;
};

class CT_Adj: public XSD::ComplexType
{
public:
    CT_Adj();
    ~CT_Adj();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_Adj& default_instance();
    bool has_idx_attr() const;
    void set_idx_attr(const ST_Index1& _idx_attr);
    const ST_Index1& get_idx_attr() const;
    bool has_val_attr() const;
    void set_val_attr(const XSD::double_& _val_attr);
    const XSD::double_& get_val_attr() const;
protected:
private:
    static CT_Adj* default_instance_;
    bool m_has_idx_attr;
    ST_Index1* m_idx_attr;
    bool m_has_val_attr;
    XSD::double_ m_val_attr;
};

class CT_AdjLst: public XSD::ComplexType
{
public:
    CT_AdjLst();
    ~CT_AdjLst();
    CT_Adj* add_adj();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_AdjLst& default_instance();
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_adj() const;
        CT_Adj* mutable_adj();
        const CT_Adj& get_adj() const;
    protected:
    private:
        bool m_has_adj;
        CT_Adj* m_adj;
    };
    vector<ChildGroup_1*> m_childGroupList_1;
    static CT_AdjLst* default_instance_;
};

class CT_Shape: public XSD::ComplexType
{
public:
    CT_Shape();
    ~CT_Shape();
    bool has_adjLst() const;
    CT_AdjLst* mutable_adjLst();
    const CT_AdjLst& get_adjLst() const;
    bool has_extLst() const;
    ns_a::CT_OfficeArtExtensionList* mutable_extLst();
    const ns_a::CT_OfficeArtExtensionList& get_extLst() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_Shape& default_instance();
    bool has_rot_attr() const;
    void set_rot_attr(const XSD::double_& _rot_attr);
    const XSD::double_& get_rot_attr() const;
    bool has_type_attr() const;
    void set_type_attr(const ST_LayoutShapeType& _type_attr);
    const ST_LayoutShapeType& get_type_attr() const;
    bool has_r_blip_attr() const;
    void set_r_blip_attr(const ns_r::ST_RelationshipId& _r_blip_attr);
    const ns_r::ST_RelationshipId& get_r_blip_attr() const;
    bool has_zOrderOff_attr() const;
    void set_zOrderOff_attr(const XSD::int_& _zOrderOff_attr);
    const XSD::int_& get_zOrderOff_attr() const;
    bool has_hideGeom_attr() const;
    void set_hideGeom_attr(const XSD::boolean_& _hideGeom_attr);
    const XSD::boolean_& get_hideGeom_attr() const;
    bool has_lkTxEntry_attr() const;
    void set_lkTxEntry_attr(const XSD::boolean_& _lkTxEntry_attr);
    const XSD::boolean_& get_lkTxEntry_attr() const;
    bool has_blipPhldr_attr() const;
    void set_blipPhldr_attr(const XSD::boolean_& _blipPhldr_attr);
    const XSD::boolean_& get_blipPhldr_attr() const;
protected:
private:
    bool m_has_adjLst;
    CT_AdjLst* m_adjLst;
    bool m_has_extLst;
    ns_a::CT_OfficeArtExtensionList* m_extLst;
    static CT_Shape* default_instance_;
    bool m_has_rot_attr;
    XSD::double_ m_rot_attr;
    bool m_has_type_attr;
    ST_LayoutShapeType* m_type_attr;
    bool m_has_r_blip_attr;
    ns_r::ST_RelationshipId* m_r_blip_attr;
    bool m_has_zOrderOff_attr;
    XSD::int_ m_zOrderOff_attr;
    bool m_has_hideGeom_attr;
    XSD::boolean_ m_hideGeom_attr;
    bool m_has_lkTxEntry_attr;
    XSD::boolean_ m_lkTxEntry_attr;
    bool m_has_blipPhldr_attr;
    XSD::boolean_ m_blipPhldr_attr;
};

class CT_Parameter: public XSD::ComplexType
{
public:
    CT_Parameter();
    ~CT_Parameter();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_Parameter& default_instance();
    bool has_type_attr() const;
    void set_type_attr(const ST_ParameterId& _type_attr);
    const ST_ParameterId& get_type_attr() const;
    bool has_val_attr() const;
    void set_val_attr(const ST_ParameterVal& _val_attr);
    const ST_ParameterVal& get_val_attr() const;
protected:
private:
    static CT_Parameter* default_instance_;
    bool m_has_type_attr;
    ST_ParameterId* m_type_attr;
    bool m_has_val_attr;
    ST_ParameterVal* m_val_attr;
};

class CT_Algorithm: public XSD::ComplexType
{
public:
    CT_Algorithm();
    ~CT_Algorithm();
    CT_Parameter* add_param();
    bool has_extLst() const;
    ns_a::CT_OfficeArtExtensionList* mutable_extLst();
    const ns_a::CT_OfficeArtExtensionList& get_extLst() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_Algorithm& default_instance();
    bool has_type_attr() const;
    void set_type_attr(const ST_AlgorithmType& _type_attr);
    const ST_AlgorithmType& get_type_attr() const;
    bool has_rev_attr() const;
    void set_rev_attr(const XSD::unsignedInt_& _rev_attr);
    const XSD::unsignedInt_& get_rev_attr() const;
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_param() const;
        CT_Parameter* mutable_param();
        const CT_Parameter& get_param() const;
    protected:
    private:
        bool m_has_param;
        CT_Parameter* m_param;
    };
    vector<ChildGroup_1*> m_childGroupList_1;
    bool m_has_extLst;
    ns_a::CT_OfficeArtExtensionList* m_extLst;
    static CT_Algorithm* default_instance_;
    bool m_has_type_attr;
    ST_AlgorithmType* m_type_attr;
    bool m_has_rev_attr;
    XSD::unsignedInt_ m_rev_attr;
};

class CT_LayoutNode: public XSD::ComplexType
{
public:
    CT_LayoutNode();
    ~CT_LayoutNode();
    CT_Algorithm* add_alg();
    CT_Shape* add_shape();
    CT_PresentationOf* add_presOf();
    CT_Constraints* add_constrLst();
    CT_Rules* add_ruleLst();
    CT_LayoutVariablePropertySet* add_varLst();
    CT_ForEach* add_forEach();
    CT_LayoutNode* add_layoutNode();
    CT_Choose* add_choose();
    ns_a::CT_OfficeArtExtensionList* add_extLst();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_LayoutNode& default_instance();
    bool has_name_attr() const;
    void set_name_attr(const XSD::string_& _name_attr);
    const XSD::string_& get_name_attr() const;
    bool has_styleLbl_attr() const;
    void set_styleLbl_attr(const XSD::string_& _styleLbl_attr);
    const XSD::string_& get_styleLbl_attr() const;
    bool has_chOrder_attr() const;
    void set_chOrder_attr(const ST_ChildOrderType& _chOrder_attr);
    const ST_ChildOrderType& get_chOrder_attr() const;
    bool has_moveWith_attr() const;
    void set_moveWith_attr(const XSD::string_& _moveWith_attr);
    const XSD::string_& get_moveWith_attr() const;
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_alg() const;
        CT_Algorithm* mutable_alg();
        const CT_Algorithm& get_alg() const;
        bool has_shape() const;
        CT_Shape* mutable_shape();
        const CT_Shape& get_shape() const;
        bool has_presOf() const;
        CT_PresentationOf* mutable_presOf();
        const CT_PresentationOf& get_presOf() const;
        bool has_constrLst() const;
        CT_Constraints* mutable_constrLst();
        const CT_Constraints& get_constrLst() const;
        bool has_ruleLst() const;
        CT_Rules* mutable_ruleLst();
        const CT_Rules& get_ruleLst() const;
        bool has_varLst() const;
        CT_LayoutVariablePropertySet* mutable_varLst();
        const CT_LayoutVariablePropertySet& get_varLst() const;
        bool has_forEach() const;
        CT_ForEach* mutable_forEach();
        const CT_ForEach& get_forEach() const;
        bool has_layoutNode() const;
        CT_LayoutNode* mutable_layoutNode();
        const CT_LayoutNode& get_layoutNode() const;
        bool has_choose() const;
        CT_Choose* mutable_choose();
        const CT_Choose& get_choose() const;
        bool has_extLst() const;
        ns_a::CT_OfficeArtExtensionList* mutable_extLst();
        const ns_a::CT_OfficeArtExtensionList& get_extLst() const;
    protected:
    private:
        bool m_has_alg;
        CT_Algorithm* m_alg;
        bool m_has_shape;
        CT_Shape* m_shape;
        bool m_has_presOf;
        CT_PresentationOf* m_presOf;
        bool m_has_constrLst;
        CT_Constraints* m_constrLst;
        bool m_has_ruleLst;
        CT_Rules* m_ruleLst;
        bool m_has_varLst;
        CT_LayoutVariablePropertySet* m_varLst;
        bool m_has_forEach;
        CT_ForEach* m_forEach;
        bool m_has_layoutNode;
        CT_LayoutNode* m_layoutNode;
        bool m_has_choose;
        CT_Choose* m_choose;
        bool m_has_extLst;
        ns_a::CT_OfficeArtExtensionList* m_extLst;
    };
    vector<ChildGroup_1*> m_childGroupList_1;
    static CT_LayoutNode* default_instance_;
    bool m_has_name_attr;
    XSD::string_ m_name_attr;
    bool m_has_styleLbl_attr;
    XSD::string_ m_styleLbl_attr;
    bool m_has_chOrder_attr;
    ST_ChildOrderType* m_chOrder_attr;
    bool m_has_moveWith_attr;
    XSD::string_ m_moveWith_attr;
};

class CT_ForEach: public XSD::ComplexType
{
public:
    CT_ForEach();
    ~CT_ForEach();
    CT_Algorithm* add_alg();
    CT_Shape* add_shape();
    CT_PresentationOf* add_presOf();
    CT_Constraints* add_constrLst();
    CT_Rules* add_ruleLst();
    CT_ForEach* add_forEach();
    CT_LayoutNode* add_layoutNode();
    CT_Choose* add_choose();
    ns_a::CT_OfficeArtExtensionList* add_extLst();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_ForEach& default_instance();
    bool has_name_attr() const;
    void set_name_attr(const XSD::string_& _name_attr);
    const XSD::string_& get_name_attr() const;
    bool has_ref_attr() const;
    void set_ref_attr(const XSD::string_& _ref_attr);
    const XSD::string_& get_ref_attr() const;
    bool has_axis_attr() const;
    void set_axis_attr(const ST_AxisTypes& _axis_attr);
    const ST_AxisTypes& get_axis_attr() const;
    bool has_ptType_attr() const;
    void set_ptType_attr(const ST_ElementTypes& _ptType_attr);
    const ST_ElementTypes& get_ptType_attr() const;
    bool has_hideLastTrans_attr() const;
    void set_hideLastTrans_attr(const ST_Booleans& _hideLastTrans_attr);
    const ST_Booleans& get_hideLastTrans_attr() const;
    bool has_st_attr() const;
    void set_st_attr(const ST_Ints& _st_attr);
    const ST_Ints& get_st_attr() const;
    bool has_cnt_attr() const;
    void set_cnt_attr(const ST_UnsignedInts& _cnt_attr);
    const ST_UnsignedInts& get_cnt_attr() const;
    bool has_step_attr() const;
    void set_step_attr(const ST_Ints& _step_attr);
    const ST_Ints& get_step_attr() const;
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_alg() const;
        CT_Algorithm* mutable_alg();
        const CT_Algorithm& get_alg() const;
        bool has_shape() const;
        CT_Shape* mutable_shape();
        const CT_Shape& get_shape() const;
        bool has_presOf() const;
        CT_PresentationOf* mutable_presOf();
        const CT_PresentationOf& get_presOf() const;
        bool has_constrLst() const;
        CT_Constraints* mutable_constrLst();
        const CT_Constraints& get_constrLst() const;
        bool has_ruleLst() const;
        CT_Rules* mutable_ruleLst();
        const CT_Rules& get_ruleLst() const;
        bool has_forEach() const;
        CT_ForEach* mutable_forEach();
        const CT_ForEach& get_forEach() const;
        bool has_layoutNode() const;
        CT_LayoutNode* mutable_layoutNode();
        const CT_LayoutNode& get_layoutNode() const;
        bool has_choose() const;
        CT_Choose* mutable_choose();
        const CT_Choose& get_choose() const;
        bool has_extLst() const;
        ns_a::CT_OfficeArtExtensionList* mutable_extLst();
        const ns_a::CT_OfficeArtExtensionList& get_extLst() const;
    protected:
    private:
        bool m_has_alg;
        CT_Algorithm* m_alg;
        bool m_has_shape;
        CT_Shape* m_shape;
        bool m_has_presOf;
        CT_PresentationOf* m_presOf;
        bool m_has_constrLst;
        CT_Constraints* m_constrLst;
        bool m_has_ruleLst;
        CT_Rules* m_ruleLst;
        bool m_has_forEach;
        CT_ForEach* m_forEach;
        bool m_has_layoutNode;
        CT_LayoutNode* m_layoutNode;
        bool m_has_choose;
        CT_Choose* m_choose;
        bool m_has_extLst;
        ns_a::CT_OfficeArtExtensionList* m_extLst;
    };
    vector<ChildGroup_1*> m_childGroupList_1;
    static CT_ForEach* default_instance_;
    bool m_has_name_attr;
    XSD::string_ m_name_attr;
    bool m_has_ref_attr;
    XSD::string_ m_ref_attr;
    bool m_has_axis_attr;
    ST_AxisTypes* m_axis_attr;
    bool m_has_ptType_attr;
    ST_ElementTypes* m_ptType_attr;
    bool m_has_hideLastTrans_attr;
    ST_Booleans* m_hideLastTrans_attr;
    bool m_has_st_attr;
    ST_Ints* m_st_attr;
    bool m_has_cnt_attr;
    ST_UnsignedInts* m_cnt_attr;
    bool m_has_step_attr;
    ST_Ints* m_step_attr;
};

class CT_When: public XSD::ComplexType
{
public:
    CT_When();
    ~CT_When();
    CT_Algorithm* add_alg();
    CT_Shape* add_shape();
    CT_PresentationOf* add_presOf();
    CT_Constraints* add_constrLst();
    CT_Rules* add_ruleLst();
    CT_ForEach* add_forEach();
    CT_LayoutNode* add_layoutNode();
    CT_Choose* add_choose();
    ns_a::CT_OfficeArtExtensionList* add_extLst();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_When& default_instance();
    bool has_name_attr() const;
    void set_name_attr(const XSD::string_& _name_attr);
    const XSD::string_& get_name_attr() const;
    bool has_axis_attr() const;
    void set_axis_attr(const ST_AxisTypes& _axis_attr);
    const ST_AxisTypes& get_axis_attr() const;
    bool has_ptType_attr() const;
    void set_ptType_attr(const ST_ElementTypes& _ptType_attr);
    const ST_ElementTypes& get_ptType_attr() const;
    bool has_hideLastTrans_attr() const;
    void set_hideLastTrans_attr(const ST_Booleans& _hideLastTrans_attr);
    const ST_Booleans& get_hideLastTrans_attr() const;
    bool has_st_attr() const;
    void set_st_attr(const ST_Ints& _st_attr);
    const ST_Ints& get_st_attr() const;
    bool has_cnt_attr() const;
    void set_cnt_attr(const ST_UnsignedInts& _cnt_attr);
    const ST_UnsignedInts& get_cnt_attr() const;
    bool has_step_attr() const;
    void set_step_attr(const ST_Ints& _step_attr);
    const ST_Ints& get_step_attr() const;
    bool has_func_attr() const;
    void set_func_attr(const ST_FunctionType& _func_attr);
    const ST_FunctionType& get_func_attr() const;
    bool has_arg_attr() const;
    void set_arg_attr(const ST_FunctionArgument& _arg_attr);
    const ST_FunctionArgument& get_arg_attr() const;
    bool has_op_attr() const;
    void set_op_attr(const ST_FunctionOperator& _op_attr);
    const ST_FunctionOperator& get_op_attr() const;
    bool has_val_attr() const;
    void set_val_attr(const ST_FunctionValue& _val_attr);
    const ST_FunctionValue& get_val_attr() const;
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_alg() const;
        CT_Algorithm* mutable_alg();
        const CT_Algorithm& get_alg() const;
        bool has_shape() const;
        CT_Shape* mutable_shape();
        const CT_Shape& get_shape() const;
        bool has_presOf() const;
        CT_PresentationOf* mutable_presOf();
        const CT_PresentationOf& get_presOf() const;
        bool has_constrLst() const;
        CT_Constraints* mutable_constrLst();
        const CT_Constraints& get_constrLst() const;
        bool has_ruleLst() const;
        CT_Rules* mutable_ruleLst();
        const CT_Rules& get_ruleLst() const;
        bool has_forEach() const;
        CT_ForEach* mutable_forEach();
        const CT_ForEach& get_forEach() const;
        bool has_layoutNode() const;
        CT_LayoutNode* mutable_layoutNode();
        const CT_LayoutNode& get_layoutNode() const;
        bool has_choose() const;
        CT_Choose* mutable_choose();
        const CT_Choose& get_choose() const;
        bool has_extLst() const;
        ns_a::CT_OfficeArtExtensionList* mutable_extLst();
        const ns_a::CT_OfficeArtExtensionList& get_extLst() const;
    protected:
    private:
        bool m_has_alg;
        CT_Algorithm* m_alg;
        bool m_has_shape;
        CT_Shape* m_shape;
        bool m_has_presOf;
        CT_PresentationOf* m_presOf;
        bool m_has_constrLst;
        CT_Constraints* m_constrLst;
        bool m_has_ruleLst;
        CT_Rules* m_ruleLst;
        bool m_has_forEach;
        CT_ForEach* m_forEach;
        bool m_has_layoutNode;
        CT_LayoutNode* m_layoutNode;
        bool m_has_choose;
        CT_Choose* m_choose;
        bool m_has_extLst;
        ns_a::CT_OfficeArtExtensionList* m_extLst;
    };
    vector<ChildGroup_1*> m_childGroupList_1;
    static CT_When* default_instance_;
    bool m_has_name_attr;
    XSD::string_ m_name_attr;
    bool m_has_axis_attr;
    ST_AxisTypes* m_axis_attr;
    bool m_has_ptType_attr;
    ST_ElementTypes* m_ptType_attr;
    bool m_has_hideLastTrans_attr;
    ST_Booleans* m_hideLastTrans_attr;
    bool m_has_st_attr;
    ST_Ints* m_st_attr;
    bool m_has_cnt_attr;
    ST_UnsignedInts* m_cnt_attr;
    bool m_has_step_attr;
    ST_Ints* m_step_attr;
    bool m_has_func_attr;
    ST_FunctionType* m_func_attr;
    bool m_has_arg_attr;
    ST_FunctionArgument* m_arg_attr;
    bool m_has_op_attr;
    ST_FunctionOperator* m_op_attr;
    bool m_has_val_attr;
    ST_FunctionValue* m_val_attr;
};

class CT_Otherwise: public XSD::ComplexType
{
public:
    CT_Otherwise();
    ~CT_Otherwise();
    CT_Algorithm* add_alg();
    CT_Shape* add_shape();
    CT_PresentationOf* add_presOf();
    CT_Constraints* add_constrLst();
    CT_Rules* add_ruleLst();
    CT_ForEach* add_forEach();
    CT_LayoutNode* add_layoutNode();
    CT_Choose* add_choose();
    ns_a::CT_OfficeArtExtensionList* add_extLst();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_Otherwise& default_instance();
    bool has_name_attr() const;
    void set_name_attr(const XSD::string_& _name_attr);
    const XSD::string_& get_name_attr() const;
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_alg() const;
        CT_Algorithm* mutable_alg();
        const CT_Algorithm& get_alg() const;
        bool has_shape() const;
        CT_Shape* mutable_shape();
        const CT_Shape& get_shape() const;
        bool has_presOf() const;
        CT_PresentationOf* mutable_presOf();
        const CT_PresentationOf& get_presOf() const;
        bool has_constrLst() const;
        CT_Constraints* mutable_constrLst();
        const CT_Constraints& get_constrLst() const;
        bool has_ruleLst() const;
        CT_Rules* mutable_ruleLst();
        const CT_Rules& get_ruleLst() const;
        bool has_forEach() const;
        CT_ForEach* mutable_forEach();
        const CT_ForEach& get_forEach() const;
        bool has_layoutNode() const;
        CT_LayoutNode* mutable_layoutNode();
        const CT_LayoutNode& get_layoutNode() const;
        bool has_choose() const;
        CT_Choose* mutable_choose();
        const CT_Choose& get_choose() const;
        bool has_extLst() const;
        ns_a::CT_OfficeArtExtensionList* mutable_extLst();
        const ns_a::CT_OfficeArtExtensionList& get_extLst() const;
    protected:
    private:
        bool m_has_alg;
        CT_Algorithm* m_alg;
        bool m_has_shape;
        CT_Shape* m_shape;
        bool m_has_presOf;
        CT_PresentationOf* m_presOf;
        bool m_has_constrLst;
        CT_Constraints* m_constrLst;
        bool m_has_ruleLst;
        CT_Rules* m_ruleLst;
        bool m_has_forEach;
        CT_ForEach* m_forEach;
        bool m_has_layoutNode;
        CT_LayoutNode* m_layoutNode;
        bool m_has_choose;
        CT_Choose* m_choose;
        bool m_has_extLst;
        ns_a::CT_OfficeArtExtensionList* m_extLst;
    };
    vector<ChildGroup_1*> m_childGroupList_1;
    static CT_Otherwise* default_instance_;
    bool m_has_name_attr;
    XSD::string_ m_name_attr;
};

class CT_Choose: public XSD::ComplexType
{
public:
    CT_Choose();
    ~CT_Choose();
    CT_When* add_if();
    bool has_else() const;
    CT_Otherwise* mutable_else();
    const CT_Otherwise& get_else() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_Choose& default_instance();
    bool has_name_attr() const;
    void set_name_attr(const XSD::string_& _name_attr);
    const XSD::string_& get_name_attr() const;
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_if() const;
        CT_When* mutable_if();
        const CT_When& get_if() const;
    protected:
    private:
        bool m_has_if;
        CT_When* m_if;
    };
    vector<ChildGroup_1*> m_childGroupList_1;
    bool m_has_else;
    CT_Otherwise* m_else;
    static CT_Choose* default_instance_;
    bool m_has_name_attr;
    XSD::string_ m_name_attr;
};

class CT_SampleData: public XSD::ComplexType
{
public:
    CT_SampleData();
    ~CT_SampleData();
    bool has_dataModel() const;
    CT_DataModel* mutable_dataModel();
    const CT_DataModel& get_dataModel() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_SampleData& default_instance();
    bool has_useDef_attr() const;
    void set_useDef_attr(const XSD::boolean_& _useDef_attr);
    const XSD::boolean_& get_useDef_attr() const;
protected:
private:
    bool m_has_dataModel;
    CT_DataModel* m_dataModel;
    static CT_SampleData* default_instance_;
    bool m_has_useDef_attr;
    XSD::boolean_ m_useDef_attr;
};

class CT_Category: public XSD::ComplexType
{
public:
    CT_Category();
    ~CT_Category();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_Category& default_instance();
    bool has_type_attr() const;
    void set_type_attr(const XSD::anyURI_& _type_attr);
    const XSD::anyURI_& get_type_attr() const;
    bool has_pri_attr() const;
    void set_pri_attr(const XSD::unsignedInt_& _pri_attr);
    const XSD::unsignedInt_& get_pri_attr() const;
protected:
private:
    static CT_Category* default_instance_;
    bool m_has_type_attr;
    XSD::anyURI_ m_type_attr;
    bool m_has_pri_attr;
    XSD::unsignedInt_ m_pri_attr;
};

class CT_Categories: public XSD::ComplexType
{
public:
    CT_Categories();
    ~CT_Categories();
    CT_Category* add_cat();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_Categories& default_instance();
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_cat() const;
        CT_Category* mutable_cat();
        const CT_Category& get_cat() const;
    protected:
    private:
        bool m_has_cat;
        CT_Category* m_cat;
    };
    vector<ChildGroup_1*> m_childGroupList_1;
    static CT_Categories* default_instance_;
};

class CT_Name: public XSD::ComplexType
{
public:
    CT_Name();
    ~CT_Name();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_Name& default_instance();
    bool has_lang_attr() const;
    void set_lang_attr(const XSD::string_& _lang_attr);
    const XSD::string_& get_lang_attr() const;
    bool has_val_attr() const;
    void set_val_attr(const XSD::string_& _val_attr);
    const XSD::string_& get_val_attr() const;
protected:
private:
    static CT_Name* default_instance_;
    bool m_has_lang_attr;
    XSD::string_ m_lang_attr;
    bool m_has_val_attr;
    XSD::string_ m_val_attr;
};

class CT_Description: public XSD::ComplexType
{
public:
    CT_Description();
    ~CT_Description();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_Description& default_instance();
    bool has_lang_attr() const;
    void set_lang_attr(const XSD::string_& _lang_attr);
    const XSD::string_& get_lang_attr() const;
    bool has_val_attr() const;
    void set_val_attr(const XSD::string_& _val_attr);
    const XSD::string_& get_val_attr() const;
protected:
private:
    static CT_Description* default_instance_;
    bool m_has_lang_attr;
    XSD::string_ m_lang_attr;
    bool m_has_val_attr;
    XSD::string_ m_val_attr;
};

class CT_DiagramDefinition: public XSD::ComplexType
{
public:
    CT_DiagramDefinition();
    ~CT_DiagramDefinition();
    CT_Name* add_title();
    CT_Description* add_desc();
    bool has_catLst() const;
    CT_Categories* mutable_catLst();
    const CT_Categories& get_catLst() const;
    bool has_sampData() const;
    CT_SampleData* mutable_sampData();
    const CT_SampleData& get_sampData() const;
    bool has_styleData() const;
    CT_SampleData* mutable_styleData();
    const CT_SampleData& get_styleData() const;
    bool has_clrData() const;
    CT_SampleData* mutable_clrData();
    const CT_SampleData& get_clrData() const;
    bool has_layoutNode() const;
    CT_LayoutNode* mutable_layoutNode();
    const CT_LayoutNode& get_layoutNode() const;
    bool has_extLst() const;
    ns_a::CT_OfficeArtExtensionList* mutable_extLst();
    const ns_a::CT_OfficeArtExtensionList& get_extLst() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_DiagramDefinition& default_instance();
    bool has_uniqueId_attr() const;
    void set_uniqueId_attr(const XSD::string_& _uniqueId_attr);
    const XSD::string_& get_uniqueId_attr() const;
    bool has_minVer_attr() const;
    void set_minVer_attr(const XSD::string_& _minVer_attr);
    const XSD::string_& get_minVer_attr() const;
    bool has_defStyle_attr() const;
    void set_defStyle_attr(const XSD::string_& _defStyle_attr);
    const XSD::string_& get_defStyle_attr() const;
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_title() const;
        CT_Name* mutable_title();
        const CT_Name& get_title() const;
        bool has_desc() const;
        CT_Description* mutable_desc();
        const CT_Description& get_desc() const;
    protected:
    private:
        bool m_has_title;
        CT_Name* m_title;
        bool m_has_desc;
        CT_Description* m_desc;
    };
    vector<ChildGroup_1*> m_childGroupList_1;
    bool m_has_catLst;
    CT_Categories* m_catLst;
    bool m_has_sampData;
    CT_SampleData* m_sampData;
    bool m_has_styleData;
    CT_SampleData* m_styleData;
    bool m_has_clrData;
    CT_SampleData* m_clrData;
    bool m_has_layoutNode;
    CT_LayoutNode* m_layoutNode;
    bool m_has_extLst;
    ns_a::CT_OfficeArtExtensionList* m_extLst;
    static CT_DiagramDefinition* default_instance_;
    bool m_has_uniqueId_attr;
    XSD::string_ m_uniqueId_attr;
    bool m_has_minVer_attr;
    XSD::string_ m_minVer_attr;
    bool m_has_defStyle_attr;
    XSD::string_ m_defStyle_attr;
};

class CT_DiagramDefinitionHeader: public XSD::ComplexType
{
public:
    CT_DiagramDefinitionHeader();
    ~CT_DiagramDefinitionHeader();
    CT_Name* add_title();
    CT_Description* add_desc();
    bool has_catLst() const;
    CT_Categories* mutable_catLst();
    const CT_Categories& get_catLst() const;
    bool has_extLst() const;
    ns_a::CT_OfficeArtExtensionList* mutable_extLst();
    const ns_a::CT_OfficeArtExtensionList& get_extLst() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_DiagramDefinitionHeader& default_instance();
    bool has_uniqueId_attr() const;
    void set_uniqueId_attr(const XSD::string_& _uniqueId_attr);
    const XSD::string_& get_uniqueId_attr() const;
    bool has_minVer_attr() const;
    void set_minVer_attr(const XSD::string_& _minVer_attr);
    const XSD::string_& get_minVer_attr() const;
    bool has_defStyle_attr() const;
    void set_defStyle_attr(const XSD::string_& _defStyle_attr);
    const XSD::string_& get_defStyle_attr() const;
    bool has_resId_attr() const;
    void set_resId_attr(const XSD::int_& _resId_attr);
    const XSD::int_& get_resId_attr() const;
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_title() const;
        CT_Name* mutable_title();
        const CT_Name& get_title() const;
        bool has_desc() const;
        CT_Description* mutable_desc();
        const CT_Description& get_desc() const;
    protected:
    private:
        bool m_has_title;
        CT_Name* m_title;
        bool m_has_desc;
        CT_Description* m_desc;
    };
    vector<ChildGroup_1*> m_childGroupList_1;
    bool m_has_catLst;
    CT_Categories* m_catLst;
    bool m_has_extLst;
    ns_a::CT_OfficeArtExtensionList* m_extLst;
    static CT_DiagramDefinitionHeader* default_instance_;
    bool m_has_uniqueId_attr;
    XSD::string_ m_uniqueId_attr;
    bool m_has_minVer_attr;
    XSD::string_ m_minVer_attr;
    bool m_has_defStyle_attr;
    XSD::string_ m_defStyle_attr;
    bool m_has_resId_attr;
    XSD::int_ m_resId_attr;
};

class CT_DiagramDefinitionHeaderLst: public XSD::ComplexType
{
public:
    CT_DiagramDefinitionHeaderLst();
    ~CT_DiagramDefinitionHeaderLst();
    CT_DiagramDefinitionHeader* add_layoutDefHdr();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_DiagramDefinitionHeaderLst& default_instance();
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_layoutDefHdr() const;
        CT_DiagramDefinitionHeader* mutable_layoutDefHdr();
        const CT_DiagramDefinitionHeader& get_layoutDefHdr() const;
    protected:
    private:
        bool m_has_layoutDefHdr;
        CT_DiagramDefinitionHeader* m_layoutDefHdr;
    };
    vector<ChildGroup_1*> m_childGroupList_1;
    static CT_DiagramDefinitionHeaderLst* default_instance_;
};

class CT_RelIds: public XSD::ComplexType
{
public:
    CT_RelIds();
    ~CT_RelIds();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_RelIds& default_instance();
    bool has_r_dm_attr() const;
    void set_r_dm_attr(const ns_r::ST_RelationshipId& _r_dm_attr);
    const ns_r::ST_RelationshipId& get_r_dm_attr() const;
    bool has_r_lo_attr() const;
    void set_r_lo_attr(const ns_r::ST_RelationshipId& _r_lo_attr);
    const ns_r::ST_RelationshipId& get_r_lo_attr() const;
    bool has_r_qs_attr() const;
    void set_r_qs_attr(const ns_r::ST_RelationshipId& _r_qs_attr);
    const ns_r::ST_RelationshipId& get_r_qs_attr() const;
    bool has_r_cs_attr() const;
    void set_r_cs_attr(const ns_r::ST_RelationshipId& _r_cs_attr);
    const ns_r::ST_RelationshipId& get_r_cs_attr() const;
protected:
private:
    static CT_RelIds* default_instance_;
    bool m_has_r_dm_attr;
    ns_r::ST_RelationshipId* m_r_dm_attr;
    bool m_has_r_lo_attr;
    ns_r::ST_RelationshipId* m_r_lo_attr;
    bool m_has_r_qs_attr;
    ns_r::ST_RelationshipId* m_r_qs_attr;
    bool m_has_r_cs_attr;
    ns_r::ST_RelationshipId* m_r_cs_attr;
};

class CT_ElemPropSet: public XSD::ComplexType
{
public:
    CT_ElemPropSet();
    ~CT_ElemPropSet();
    bool has_presLayoutVars() const;
    CT_LayoutVariablePropertySet* mutable_presLayoutVars();
    const CT_LayoutVariablePropertySet& get_presLayoutVars() const;
    bool has_style() const;
    ns_a::CT_ShapeStyle* mutable_style();
    const ns_a::CT_ShapeStyle& get_style() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_ElemPropSet& default_instance();
    bool has_presAssocID_attr() const;
    void set_presAssocID_attr(const ST_ModelId& _presAssocID_attr);
    const ST_ModelId& get_presAssocID_attr() const;
    bool has_presName_attr() const;
    void set_presName_attr(const XSD::string_& _presName_attr);
    const XSD::string_& get_presName_attr() const;
    bool has_presStyleLbl_attr() const;
    void set_presStyleLbl_attr(const XSD::string_& _presStyleLbl_attr);
    const XSD::string_& get_presStyleLbl_attr() const;
    bool has_presStyleIdx_attr() const;
    void set_presStyleIdx_attr(const XSD::int_& _presStyleIdx_attr);
    const XSD::int_& get_presStyleIdx_attr() const;
    bool has_presStyleCnt_attr() const;
    void set_presStyleCnt_attr(const XSD::int_& _presStyleCnt_attr);
    const XSD::int_& get_presStyleCnt_attr() const;
    bool has_loTypeId_attr() const;
    void set_loTypeId_attr(const XSD::string_& _loTypeId_attr);
    const XSD::string_& get_loTypeId_attr() const;
    bool has_loCatId_attr() const;
    void set_loCatId_attr(const XSD::string_& _loCatId_attr);
    const XSD::string_& get_loCatId_attr() const;
    bool has_qsTypeId_attr() const;
    void set_qsTypeId_attr(const XSD::string_& _qsTypeId_attr);
    const XSD::string_& get_qsTypeId_attr() const;
    bool has_qsCatId_attr() const;
    void set_qsCatId_attr(const XSD::string_& _qsCatId_attr);
    const XSD::string_& get_qsCatId_attr() const;
    bool has_csTypeId_attr() const;
    void set_csTypeId_attr(const XSD::string_& _csTypeId_attr);
    const XSD::string_& get_csTypeId_attr() const;
    bool has_csCatId_attr() const;
    void set_csCatId_attr(const XSD::string_& _csCatId_attr);
    const XSD::string_& get_csCatId_attr() const;
    bool has_coherent3DOff_attr() const;
    void set_coherent3DOff_attr(const XSD::boolean_& _coherent3DOff_attr);
    const XSD::boolean_& get_coherent3DOff_attr() const;
    bool has_phldrT_attr() const;
    void set_phldrT_attr(const XSD::string_& _phldrT_attr);
    const XSD::string_& get_phldrT_attr() const;
    bool has_phldr_attr() const;
    void set_phldr_attr(const XSD::boolean_& _phldr_attr);
    const XSD::boolean_& get_phldr_attr() const;
    bool has_custAng_attr() const;
    void set_custAng_attr(const XSD::int_& _custAng_attr);
    const XSD::int_& get_custAng_attr() const;
    bool has_custFlipVert_attr() const;
    void set_custFlipVert_attr(const XSD::boolean_& _custFlipVert_attr);
    const XSD::boolean_& get_custFlipVert_attr() const;
    bool has_custFlipHor_attr() const;
    void set_custFlipHor_attr(const XSD::boolean_& _custFlipHor_attr);
    const XSD::boolean_& get_custFlipHor_attr() const;
    bool has_custSzX_attr() const;
    void set_custSzX_attr(const XSD::int_& _custSzX_attr);
    const XSD::int_& get_custSzX_attr() const;
    bool has_custSzY_attr() const;
    void set_custSzY_attr(const XSD::int_& _custSzY_attr);
    const XSD::int_& get_custSzY_attr() const;
    bool has_custScaleX_attr() const;
    void set_custScaleX_attr(const ST_PrSetCustVal& _custScaleX_attr);
    const ST_PrSetCustVal& get_custScaleX_attr() const;
    bool has_custScaleY_attr() const;
    void set_custScaleY_attr(const ST_PrSetCustVal& _custScaleY_attr);
    const ST_PrSetCustVal& get_custScaleY_attr() const;
    bool has_custT_attr() const;
    void set_custT_attr(const XSD::boolean_& _custT_attr);
    const XSD::boolean_& get_custT_attr() const;
    bool has_custLinFactX_attr() const;
    void set_custLinFactX_attr(const ST_PrSetCustVal& _custLinFactX_attr);
    const ST_PrSetCustVal& get_custLinFactX_attr() const;
    bool has_custLinFactY_attr() const;
    void set_custLinFactY_attr(const ST_PrSetCustVal& _custLinFactY_attr);
    const ST_PrSetCustVal& get_custLinFactY_attr() const;
    bool has_custLinFactNeighborX_attr() const;
    void set_custLinFactNeighborX_attr(const ST_PrSetCustVal& _custLinFactNeighborX_attr);
    const ST_PrSetCustVal& get_custLinFactNeighborX_attr() const;
    bool has_custLinFactNeighborY_attr() const;
    void set_custLinFactNeighborY_attr(const ST_PrSetCustVal& _custLinFactNeighborY_attr);
    const ST_PrSetCustVal& get_custLinFactNeighborY_attr() const;
    bool has_custRadScaleRad_attr() const;
    void set_custRadScaleRad_attr(const ST_PrSetCustVal& _custRadScaleRad_attr);
    const ST_PrSetCustVal& get_custRadScaleRad_attr() const;
    bool has_custRadScaleInc_attr() const;
    void set_custRadScaleInc_attr(const ST_PrSetCustVal& _custRadScaleInc_attr);
    const ST_PrSetCustVal& get_custRadScaleInc_attr() const;
protected:
private:
    bool m_has_presLayoutVars;
    CT_LayoutVariablePropertySet* m_presLayoutVars;
    bool m_has_style;
    ns_a::CT_ShapeStyle* m_style;
    static CT_ElemPropSet* default_instance_;
    bool m_has_presAssocID_attr;
    ST_ModelId* m_presAssocID_attr;
    bool m_has_presName_attr;
    XSD::string_ m_presName_attr;
    bool m_has_presStyleLbl_attr;
    XSD::string_ m_presStyleLbl_attr;
    bool m_has_presStyleIdx_attr;
    XSD::int_ m_presStyleIdx_attr;
    bool m_has_presStyleCnt_attr;
    XSD::int_ m_presStyleCnt_attr;
    bool m_has_loTypeId_attr;
    XSD::string_ m_loTypeId_attr;
    bool m_has_loCatId_attr;
    XSD::string_ m_loCatId_attr;
    bool m_has_qsTypeId_attr;
    XSD::string_ m_qsTypeId_attr;
    bool m_has_qsCatId_attr;
    XSD::string_ m_qsCatId_attr;
    bool m_has_csTypeId_attr;
    XSD::string_ m_csTypeId_attr;
    bool m_has_csCatId_attr;
    XSD::string_ m_csCatId_attr;
    bool m_has_coherent3DOff_attr;
    XSD::boolean_ m_coherent3DOff_attr;
    bool m_has_phldrT_attr;
    XSD::string_ m_phldrT_attr;
    bool m_has_phldr_attr;
    XSD::boolean_ m_phldr_attr;
    bool m_has_custAng_attr;
    XSD::int_ m_custAng_attr;
    bool m_has_custFlipVert_attr;
    XSD::boolean_ m_custFlipVert_attr;
    bool m_has_custFlipHor_attr;
    XSD::boolean_ m_custFlipHor_attr;
    bool m_has_custSzX_attr;
    XSD::int_ m_custSzX_attr;
    bool m_has_custSzY_attr;
    XSD::int_ m_custSzY_attr;
    bool m_has_custScaleX_attr;
    ST_PrSetCustVal* m_custScaleX_attr;
    bool m_has_custScaleY_attr;
    ST_PrSetCustVal* m_custScaleY_attr;
    bool m_has_custT_attr;
    XSD::boolean_ m_custT_attr;
    bool m_has_custLinFactX_attr;
    ST_PrSetCustVal* m_custLinFactX_attr;
    bool m_has_custLinFactY_attr;
    ST_PrSetCustVal* m_custLinFactY_attr;
    bool m_has_custLinFactNeighborX_attr;
    ST_PrSetCustVal* m_custLinFactNeighborX_attr;
    bool m_has_custLinFactNeighborY_attr;
    ST_PrSetCustVal* m_custLinFactNeighborY_attr;
    bool m_has_custRadScaleRad_attr;
    ST_PrSetCustVal* m_custRadScaleRad_attr;
    bool m_has_custRadScaleInc_attr;
    ST_PrSetCustVal* m_custRadScaleInc_attr;
};

class CT_OrgChart: public XSD::ComplexType
{
public:
    CT_OrgChart();
    ~CT_OrgChart();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_OrgChart& default_instance();
    bool has_val_attr() const;
    void set_val_attr(const XSD::boolean_& _val_attr);
    const XSD::boolean_& get_val_attr() const;
protected:
private:
    static CT_OrgChart* default_instance_;
    bool m_has_val_attr;
    XSD::boolean_ m_val_attr;
};

class CT_ChildMax: public XSD::ComplexType
{
public:
    CT_ChildMax();
    ~CT_ChildMax();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_ChildMax& default_instance();
    bool has_val_attr() const;
    void set_val_attr(const ST_NodeCount& _val_attr);
    const ST_NodeCount& get_val_attr() const;
protected:
private:
    static CT_ChildMax* default_instance_;
    bool m_has_val_attr;
    ST_NodeCount* m_val_attr;
};

class CT_ChildPref: public XSD::ComplexType
{
public:
    CT_ChildPref();
    ~CT_ChildPref();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_ChildPref& default_instance();
    bool has_val_attr() const;
    void set_val_attr(const ST_NodeCount& _val_attr);
    const ST_NodeCount& get_val_attr() const;
protected:
private:
    static CT_ChildPref* default_instance_;
    bool m_has_val_attr;
    ST_NodeCount* m_val_attr;
};

class CT_BulletEnabled: public XSD::ComplexType
{
public:
    CT_BulletEnabled();
    ~CT_BulletEnabled();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_BulletEnabled& default_instance();
    bool has_val_attr() const;
    void set_val_attr(const XSD::boolean_& _val_attr);
    const XSD::boolean_& get_val_attr() const;
protected:
private:
    static CT_BulletEnabled* default_instance_;
    bool m_has_val_attr;
    XSD::boolean_ m_val_attr;
};

class CT_Direction: public XSD::ComplexType
{
public:
    CT_Direction();
    ~CT_Direction();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_Direction& default_instance();
    bool has_val_attr() const;
    void set_val_attr(const ST_Direction& _val_attr);
    const ST_Direction& get_val_attr() const;
protected:
private:
    static CT_Direction* default_instance_;
    bool m_has_val_attr;
    ST_Direction* m_val_attr;
};

class CT_HierBranchStyle: public XSD::ComplexType
{
public:
    CT_HierBranchStyle();
    ~CT_HierBranchStyle();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_HierBranchStyle& default_instance();
    bool has_val_attr() const;
    void set_val_attr(const ST_HierBranchStyle& _val_attr);
    const ST_HierBranchStyle& get_val_attr() const;
protected:
private:
    static CT_HierBranchStyle* default_instance_;
    bool m_has_val_attr;
    ST_HierBranchStyle* m_val_attr;
};

class CT_AnimOne: public XSD::ComplexType
{
public:
    CT_AnimOne();
    ~CT_AnimOne();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_AnimOne& default_instance();
    bool has_val_attr() const;
    void set_val_attr(const ST_AnimOneStr& _val_attr);
    const ST_AnimOneStr& get_val_attr() const;
protected:
private:
    static CT_AnimOne* default_instance_;
    bool m_has_val_attr;
    ST_AnimOneStr* m_val_attr;
};

class CT_AnimLvl: public XSD::ComplexType
{
public:
    CT_AnimLvl();
    ~CT_AnimLvl();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_AnimLvl& default_instance();
    bool has_val_attr() const;
    void set_val_attr(const ST_AnimLvlStr& _val_attr);
    const ST_AnimLvlStr& get_val_attr() const;
protected:
private:
    static CT_AnimLvl* default_instance_;
    bool m_has_val_attr;
    ST_AnimLvlStr* m_val_attr;
};

class CT_ResizeHandles: public XSD::ComplexType
{
public:
    CT_ResizeHandles();
    ~CT_ResizeHandles();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_ResizeHandles& default_instance();
    bool has_val_attr() const;
    void set_val_attr(const ST_ResizeHandlesStr& _val_attr);
    const ST_ResizeHandlesStr& get_val_attr() const;
protected:
private:
    static CT_ResizeHandles* default_instance_;
    bool m_has_val_attr;
    ST_ResizeHandlesStr* m_val_attr;
};

class CT_LayoutVariablePropertySet: public XSD::ComplexType
{
public:
    CT_LayoutVariablePropertySet();
    ~CT_LayoutVariablePropertySet();
    bool has_orgChart() const;
    CT_OrgChart* mutable_orgChart();
    const CT_OrgChart& get_orgChart() const;
    bool has_chMax() const;
    CT_ChildMax* mutable_chMax();
    const CT_ChildMax& get_chMax() const;
    bool has_chPref() const;
    CT_ChildPref* mutable_chPref();
    const CT_ChildPref& get_chPref() const;
    bool has_bulletEnabled() const;
    CT_BulletEnabled* mutable_bulletEnabled();
    const CT_BulletEnabled& get_bulletEnabled() const;
    bool has_dir() const;
    CT_Direction* mutable_dir();
    const CT_Direction& get_dir() const;
    bool has_hierBranch() const;
    CT_HierBranchStyle* mutable_hierBranch();
    const CT_HierBranchStyle& get_hierBranch() const;
    bool has_animOne() const;
    CT_AnimOne* mutable_animOne();
    const CT_AnimOne& get_animOne() const;
    bool has_animLvl() const;
    CT_AnimLvl* mutable_animLvl();
    const CT_AnimLvl& get_animLvl() const;
    bool has_resizeHandles() const;
    CT_ResizeHandles* mutable_resizeHandles();
    const CT_ResizeHandles& get_resizeHandles() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_LayoutVariablePropertySet& default_instance();
protected:
private:
    bool m_has_orgChart;
    CT_OrgChart* m_orgChart;
    bool m_has_chMax;
    CT_ChildMax* m_chMax;
    bool m_has_chPref;
    CT_ChildPref* m_chPref;
    bool m_has_bulletEnabled;
    CT_BulletEnabled* m_bulletEnabled;
    bool m_has_dir;
    CT_Direction* m_dir;
    bool m_has_hierBranch;
    CT_HierBranchStyle* m_hierBranch;
    bool m_has_animOne;
    CT_AnimOne* m_animOne;
    bool m_has_animLvl;
    CT_AnimLvl* m_animLvl;
    bool m_has_resizeHandles;
    CT_ResizeHandles* m_resizeHandles;
    static CT_LayoutVariablePropertySet* default_instance_;
};

class CT_SDName: public XSD::ComplexType
{
public:
    CT_SDName();
    ~CT_SDName();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_SDName& default_instance();
    bool has_lang_attr() const;
    void set_lang_attr(const XSD::string_& _lang_attr);
    const XSD::string_& get_lang_attr() const;
    bool has_val_attr() const;
    void set_val_attr(const XSD::string_& _val_attr);
    const XSD::string_& get_val_attr() const;
protected:
private:
    static CT_SDName* default_instance_;
    bool m_has_lang_attr;
    XSD::string_ m_lang_attr;
    bool m_has_val_attr;
    XSD::string_ m_val_attr;
};

class CT_SDDescription: public XSD::ComplexType
{
public:
    CT_SDDescription();
    ~CT_SDDescription();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_SDDescription& default_instance();
    bool has_lang_attr() const;
    void set_lang_attr(const XSD::string_& _lang_attr);
    const XSD::string_& get_lang_attr() const;
    bool has_val_attr() const;
    void set_val_attr(const XSD::string_& _val_attr);
    const XSD::string_& get_val_attr() const;
protected:
private:
    static CT_SDDescription* default_instance_;
    bool m_has_lang_attr;
    XSD::string_ m_lang_attr;
    bool m_has_val_attr;
    XSD::string_ m_val_attr;
};

class CT_SDCategory: public XSD::ComplexType
{
public:
    CT_SDCategory();
    ~CT_SDCategory();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_SDCategory& default_instance();
    bool has_type_attr() const;
    void set_type_attr(const XSD::anyURI_& _type_attr);
    const XSD::anyURI_& get_type_attr() const;
    bool has_pri_attr() const;
    void set_pri_attr(const XSD::unsignedInt_& _pri_attr);
    const XSD::unsignedInt_& get_pri_attr() const;
protected:
private:
    static CT_SDCategory* default_instance_;
    bool m_has_type_attr;
    XSD::anyURI_ m_type_attr;
    bool m_has_pri_attr;
    XSD::unsignedInt_ m_pri_attr;
};

class CT_SDCategories: public XSD::ComplexType
{
public:
    CT_SDCategories();
    ~CT_SDCategories();
    CT_SDCategory* add_cat();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_SDCategories& default_instance();
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_cat() const;
        CT_SDCategory* mutable_cat();
        const CT_SDCategory& get_cat() const;
    protected:
    private:
        bool m_has_cat;
        CT_SDCategory* m_cat;
    };
    vector<ChildGroup_1*> m_childGroupList_1;
    static CT_SDCategories* default_instance_;
};

class CT_TextProps: public XSD::ComplexType
{
public:
    CT_TextProps();
    ~CT_TextProps();
    bool has_a_sp3d() const;
    ns_a::CT_Shape3D* mutable_a_sp3d();
    const ns_a::CT_Shape3D& get_a_sp3d() const;
    bool has_a_flatTx() const;
    ns_a::CT_FlatText* mutable_a_flatTx();
    const ns_a::CT_FlatText& get_a_flatTx() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_TextProps& default_instance();
protected:
private:
    bool m_has_a_sp3d;
    ns_a::CT_Shape3D* m_a_sp3d;
    bool m_has_a_flatTx;
    ns_a::CT_FlatText* m_a_flatTx;
    static CT_TextProps* default_instance_;
};

class CT_StyleLabel: public XSD::ComplexType
{
public:
    CT_StyleLabel();
    ~CT_StyleLabel();
    bool has_scene3d() const;
    ns_a::CT_Scene3D* mutable_scene3d();
    const ns_a::CT_Scene3D& get_scene3d() const;
    bool has_sp3d() const;
    ns_a::CT_Shape3D* mutable_sp3d();
    const ns_a::CT_Shape3D& get_sp3d() const;
    bool has_txPr() const;
    CT_TextProps* mutable_txPr();
    const CT_TextProps& get_txPr() const;
    bool has_style() const;
    ns_a::CT_ShapeStyle* mutable_style();
    const ns_a::CT_ShapeStyle& get_style() const;
    bool has_extLst() const;
    ns_a::CT_OfficeArtExtensionList* mutable_extLst();
    const ns_a::CT_OfficeArtExtensionList& get_extLst() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_StyleLabel& default_instance();
    bool has_name_attr() const;
    void set_name_attr(const XSD::string_& _name_attr);
    const XSD::string_& get_name_attr() const;
protected:
private:
    bool m_has_scene3d;
    ns_a::CT_Scene3D* m_scene3d;
    bool m_has_sp3d;
    ns_a::CT_Shape3D* m_sp3d;
    bool m_has_txPr;
    CT_TextProps* m_txPr;
    bool m_has_style;
    ns_a::CT_ShapeStyle* m_style;
    bool m_has_extLst;
    ns_a::CT_OfficeArtExtensionList* m_extLst;
    static CT_StyleLabel* default_instance_;
    bool m_has_name_attr;
    XSD::string_ m_name_attr;
};

class CT_StyleDefinition: public XSD::ComplexType
{
public:
    CT_StyleDefinition();
    ~CT_StyleDefinition();
    CT_SDName* add_title();
    CT_SDDescription* add_desc();
    bool has_catLst() const;
    CT_SDCategories* mutable_catLst();
    const CT_SDCategories& get_catLst() const;
    bool has_scene3d() const;
    ns_a::CT_Scene3D* mutable_scene3d();
    const ns_a::CT_Scene3D& get_scene3d() const;
    CT_StyleLabel* add_styleLbl();
    bool has_extLst() const;
    ns_a::CT_OfficeArtExtensionList* mutable_extLst();
    const ns_a::CT_OfficeArtExtensionList& get_extLst() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_StyleDefinition& default_instance();
    bool has_uniqueId_attr() const;
    void set_uniqueId_attr(const XSD::string_& _uniqueId_attr);
    const XSD::string_& get_uniqueId_attr() const;
    bool has_minVer_attr() const;
    void set_minVer_attr(const XSD::string_& _minVer_attr);
    const XSD::string_& get_minVer_attr() const;
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_title() const;
        CT_SDName* mutable_title();
        const CT_SDName& get_title() const;
        bool has_desc() const;
        CT_SDDescription* mutable_desc();
        const CT_SDDescription& get_desc() const;
    protected:
    private:
        bool m_has_title;
        CT_SDName* m_title;
        bool m_has_desc;
        CT_SDDescription* m_desc;
    };
    class ChildGroup_2
    {
    public:
        ChildGroup_2();
        bool has_styleLbl() const;
        CT_StyleLabel* mutable_styleLbl();
        const CT_StyleLabel& get_styleLbl() const;
    protected:
    private:
        bool m_has_styleLbl;
        CT_StyleLabel* m_styleLbl;
    };
    vector<ChildGroup_1*> m_childGroupList_1;
    bool m_has_catLst;
    CT_SDCategories* m_catLst;
    bool m_has_scene3d;
    ns_a::CT_Scene3D* m_scene3d;
    vector<ChildGroup_2*> m_childGroupList_2;
    bool m_has_extLst;
    ns_a::CT_OfficeArtExtensionList* m_extLst;
    static CT_StyleDefinition* default_instance_;
    bool m_has_uniqueId_attr;
    XSD::string_ m_uniqueId_attr;
    bool m_has_minVer_attr;
    XSD::string_ m_minVer_attr;
};

class CT_StyleDefinitionHeader: public XSD::ComplexType
{
public:
    CT_StyleDefinitionHeader();
    ~CT_StyleDefinitionHeader();
    CT_SDName* add_title();
    CT_SDDescription* add_desc();
    bool has_catLst() const;
    CT_SDCategories* mutable_catLst();
    const CT_SDCategories& get_catLst() const;
    bool has_extLst() const;
    ns_a::CT_OfficeArtExtensionList* mutable_extLst();
    const ns_a::CT_OfficeArtExtensionList& get_extLst() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_StyleDefinitionHeader& default_instance();
    bool has_uniqueId_attr() const;
    void set_uniqueId_attr(const XSD::string_& _uniqueId_attr);
    const XSD::string_& get_uniqueId_attr() const;
    bool has_minVer_attr() const;
    void set_minVer_attr(const XSD::string_& _minVer_attr);
    const XSD::string_& get_minVer_attr() const;
    bool has_resId_attr() const;
    void set_resId_attr(const XSD::int_& _resId_attr);
    const XSD::int_& get_resId_attr() const;
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_title() const;
        CT_SDName* mutable_title();
        const CT_SDName& get_title() const;
        bool has_desc() const;
        CT_SDDescription* mutable_desc();
        const CT_SDDescription& get_desc() const;
    protected:
    private:
        bool m_has_title;
        CT_SDName* m_title;
        bool m_has_desc;
        CT_SDDescription* m_desc;
    };
    vector<ChildGroup_1*> m_childGroupList_1;
    bool m_has_catLst;
    CT_SDCategories* m_catLst;
    bool m_has_extLst;
    ns_a::CT_OfficeArtExtensionList* m_extLst;
    static CT_StyleDefinitionHeader* default_instance_;
    bool m_has_uniqueId_attr;
    XSD::string_ m_uniqueId_attr;
    bool m_has_minVer_attr;
    XSD::string_ m_minVer_attr;
    bool m_has_resId_attr;
    XSD::int_ m_resId_attr;
};

class CT_StyleDefinitionHeaderLst: public XSD::ComplexType
{
public:
    CT_StyleDefinitionHeaderLst();
    ~CT_StyleDefinitionHeaderLst();
    CT_StyleDefinitionHeader* add_styleDefHdr();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_StyleDefinitionHeaderLst& default_instance();
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_styleDefHdr() const;
        CT_StyleDefinitionHeader* mutable_styleDefHdr();
        const CT_StyleDefinitionHeader& get_styleDefHdr() const;
    protected:
    private:
        bool m_has_styleDefHdr;
        CT_StyleDefinitionHeader* m_styleDefHdr;
    };
    vector<ChildGroup_1*> m_childGroupList_1;
    static CT_StyleDefinitionHeaderLst* default_instance_;
};

class colorsDef_element: public Element
{
public:
    colorsDef_element();
    ~colorsDef_element();
    CT_CTName* add_title();
    CT_CTDescription* add_desc();
    bool has_catLst() const;
    CT_CTCategories* mutable_catLst();
    const CT_CTCategories& get_catLst() const;
    CT_CTStyleLabel* add_styleLbl();
    bool has_extLst() const;
    ns_a::CT_OfficeArtExtensionList* mutable_extLst();
    const ns_a::CT_OfficeArtExtensionList& get_extLst() const;
    void clear();
    void toXml(std::ostream& _outStream) const;
    static const colorsDef_element& default_instance();
    bool has_uniqueId_attr() const;
    void set_uniqueId_attr(const XSD::string_& _uniqueId_attr);
    const XSD::string_& get_uniqueId_attr() const;
    bool has_minVer_attr() const;
    void set_minVer_attr(const XSD::string_& _minVer_attr);
    const XSD::string_& get_minVer_attr() const;
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_title() const;
        CT_CTName* mutable_title();
        const CT_CTName& get_title() const;
        bool has_desc() const;
        CT_CTDescription* mutable_desc();
        const CT_CTDescription& get_desc() const;
    protected:
    private:
        bool m_has_title;
        CT_CTName* m_title;
        bool m_has_desc;
        CT_CTDescription* m_desc;
    };
    class ChildGroup_2
    {
    public:
        ChildGroup_2();
        bool has_styleLbl() const;
        CT_CTStyleLabel* mutable_styleLbl();
        const CT_CTStyleLabel& get_styleLbl() const;
    protected:
    private:
        bool m_has_styleLbl;
        CT_CTStyleLabel* m_styleLbl;
    };
    vector<ChildGroup_1*> m_childGroupList_1;
    bool m_has_catLst;
    CT_CTCategories* m_catLst;
    vector<ChildGroup_2*> m_childGroupList_2;
    bool m_has_extLst;
    ns_a::CT_OfficeArtExtensionList* m_extLst;
    static colorsDef_element* default_instance_;
    bool m_has_uniqueId_attr;
    XSD::string_ m_uniqueId_attr;
    bool m_has_minVer_attr;
    XSD::string_ m_minVer_attr;
};

class colorsDefHdr_element: public Element
{
public:
    colorsDefHdr_element();
    ~colorsDefHdr_element();
    CT_CTName* add_title();
    CT_CTDescription* add_desc();
    bool has_catLst() const;
    CT_CTCategories* mutable_catLst();
    const CT_CTCategories& get_catLst() const;
    bool has_extLst() const;
    ns_a::CT_OfficeArtExtensionList* mutable_extLst();
    const ns_a::CT_OfficeArtExtensionList& get_extLst() const;
    void clear();
    void toXml(std::ostream& _outStream) const;
    static const colorsDefHdr_element& default_instance();
    bool has_uniqueId_attr() const;
    void set_uniqueId_attr(const XSD::string_& _uniqueId_attr);
    const XSD::string_& get_uniqueId_attr() const;
    bool has_minVer_attr() const;
    void set_minVer_attr(const XSD::string_& _minVer_attr);
    const XSD::string_& get_minVer_attr() const;
    bool has_resId_attr() const;
    void set_resId_attr(const XSD::int_& _resId_attr);
    const XSD::int_& get_resId_attr() const;
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_title() const;
        CT_CTName* mutable_title();
        const CT_CTName& get_title() const;
        bool has_desc() const;
        CT_CTDescription* mutable_desc();
        const CT_CTDescription& get_desc() const;
    protected:
    private:
        bool m_has_title;
        CT_CTName* m_title;
        bool m_has_desc;
        CT_CTDescription* m_desc;
    };
    vector<ChildGroup_1*> m_childGroupList_1;
    bool m_has_catLst;
    CT_CTCategories* m_catLst;
    bool m_has_extLst;
    ns_a::CT_OfficeArtExtensionList* m_extLst;
    static colorsDefHdr_element* default_instance_;
    bool m_has_uniqueId_attr;
    XSD::string_ m_uniqueId_attr;
    bool m_has_minVer_attr;
    XSD::string_ m_minVer_attr;
    bool m_has_resId_attr;
    XSD::int_ m_resId_attr;
};

class colorsDefHdrLst_element: public Element
{
public:
    colorsDefHdrLst_element();
    ~colorsDefHdrLst_element();
    CT_ColorTransformHeader* add_colorsDefHdr();
    void clear();
    void toXml(std::ostream& _outStream) const;
    static const colorsDefHdrLst_element& default_instance();
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_colorsDefHdr() const;
        CT_ColorTransformHeader* mutable_colorsDefHdr();
        const CT_ColorTransformHeader& get_colorsDefHdr() const;
    protected:
    private:
        bool m_has_colorsDefHdr;
        CT_ColorTransformHeader* m_colorsDefHdr;
    };
    vector<ChildGroup_1*> m_childGroupList_1;
    static colorsDefHdrLst_element* default_instance_;
};

class dataModel_element: public Element
{
public:
    dataModel_element();
    ~dataModel_element();
    bool has_ptLst() const;
    CT_PtList* mutable_ptLst();
    const CT_PtList& get_ptLst() const;
    bool has_cxnLst() const;
    CT_CxnList* mutable_cxnLst();
    const CT_CxnList& get_cxnLst() const;
    bool has_bg() const;
    ns_a::CT_BackgroundFormatting* mutable_bg();
    const ns_a::CT_BackgroundFormatting& get_bg() const;
    bool has_whole() const;
    ns_a::CT_WholeE2oFormatting* mutable_whole();
    const ns_a::CT_WholeE2oFormatting& get_whole() const;
    bool has_extLst() const;
    ns_a::CT_OfficeArtExtensionList* mutable_extLst();
    const ns_a::CT_OfficeArtExtensionList& get_extLst() const;
    void clear();
    void toXml(std::ostream& _outStream) const;
    static const dataModel_element& default_instance();
protected:
private:
    bool m_has_ptLst;
    CT_PtList* m_ptLst;
    bool m_has_cxnLst;
    CT_CxnList* m_cxnLst;
    bool m_has_bg;
    ns_a::CT_BackgroundFormatting* m_bg;
    bool m_has_whole;
    ns_a::CT_WholeE2oFormatting* m_whole;
    bool m_has_extLst;
    ns_a::CT_OfficeArtExtensionList* m_extLst;
    static dataModel_element* default_instance_;
};

class layoutDef_element: public Element
{
public:
    layoutDef_element();
    ~layoutDef_element();
    CT_Name* add_title();
    CT_Description* add_desc();
    bool has_catLst() const;
    CT_Categories* mutable_catLst();
    const CT_Categories& get_catLst() const;
    bool has_sampData() const;
    CT_SampleData* mutable_sampData();
    const CT_SampleData& get_sampData() const;
    bool has_styleData() const;
    CT_SampleData* mutable_styleData();
    const CT_SampleData& get_styleData() const;
    bool has_clrData() const;
    CT_SampleData* mutable_clrData();
    const CT_SampleData& get_clrData() const;
    bool has_layoutNode() const;
    CT_LayoutNode* mutable_layoutNode();
    const CT_LayoutNode& get_layoutNode() const;
    bool has_extLst() const;
    ns_a::CT_OfficeArtExtensionList* mutable_extLst();
    const ns_a::CT_OfficeArtExtensionList& get_extLst() const;
    void clear();
    void toXml(std::ostream& _outStream) const;
    static const layoutDef_element& default_instance();
    bool has_uniqueId_attr() const;
    void set_uniqueId_attr(const XSD::string_& _uniqueId_attr);
    const XSD::string_& get_uniqueId_attr() const;
    bool has_minVer_attr() const;
    void set_minVer_attr(const XSD::string_& _minVer_attr);
    const XSD::string_& get_minVer_attr() const;
    bool has_defStyle_attr() const;
    void set_defStyle_attr(const XSD::string_& _defStyle_attr);
    const XSD::string_& get_defStyle_attr() const;
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_title() const;
        CT_Name* mutable_title();
        const CT_Name& get_title() const;
        bool has_desc() const;
        CT_Description* mutable_desc();
        const CT_Description& get_desc() const;
    protected:
    private:
        bool m_has_title;
        CT_Name* m_title;
        bool m_has_desc;
        CT_Description* m_desc;
    };
    vector<ChildGroup_1*> m_childGroupList_1;
    bool m_has_catLst;
    CT_Categories* m_catLst;
    bool m_has_sampData;
    CT_SampleData* m_sampData;
    bool m_has_styleData;
    CT_SampleData* m_styleData;
    bool m_has_clrData;
    CT_SampleData* m_clrData;
    bool m_has_layoutNode;
    CT_LayoutNode* m_layoutNode;
    bool m_has_extLst;
    ns_a::CT_OfficeArtExtensionList* m_extLst;
    static layoutDef_element* default_instance_;
    bool m_has_uniqueId_attr;
    XSD::string_ m_uniqueId_attr;
    bool m_has_minVer_attr;
    XSD::string_ m_minVer_attr;
    bool m_has_defStyle_attr;
    XSD::string_ m_defStyle_attr;
};

class layoutDefHdr_element: public Element
{
public:
    layoutDefHdr_element();
    ~layoutDefHdr_element();
    CT_Name* add_title();
    CT_Description* add_desc();
    bool has_catLst() const;
    CT_Categories* mutable_catLst();
    const CT_Categories& get_catLst() const;
    bool has_extLst() const;
    ns_a::CT_OfficeArtExtensionList* mutable_extLst();
    const ns_a::CT_OfficeArtExtensionList& get_extLst() const;
    void clear();
    void toXml(std::ostream& _outStream) const;
    static const layoutDefHdr_element& default_instance();
    bool has_uniqueId_attr() const;
    void set_uniqueId_attr(const XSD::string_& _uniqueId_attr);
    const XSD::string_& get_uniqueId_attr() const;
    bool has_minVer_attr() const;
    void set_minVer_attr(const XSD::string_& _minVer_attr);
    const XSD::string_& get_minVer_attr() const;
    bool has_defStyle_attr() const;
    void set_defStyle_attr(const XSD::string_& _defStyle_attr);
    const XSD::string_& get_defStyle_attr() const;
    bool has_resId_attr() const;
    void set_resId_attr(const XSD::int_& _resId_attr);
    const XSD::int_& get_resId_attr() const;
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_title() const;
        CT_Name* mutable_title();
        const CT_Name& get_title() const;
        bool has_desc() const;
        CT_Description* mutable_desc();
        const CT_Description& get_desc() const;
    protected:
    private:
        bool m_has_title;
        CT_Name* m_title;
        bool m_has_desc;
        CT_Description* m_desc;
    };
    vector<ChildGroup_1*> m_childGroupList_1;
    bool m_has_catLst;
    CT_Categories* m_catLst;
    bool m_has_extLst;
    ns_a::CT_OfficeArtExtensionList* m_extLst;
    static layoutDefHdr_element* default_instance_;
    bool m_has_uniqueId_attr;
    XSD::string_ m_uniqueId_attr;
    bool m_has_minVer_attr;
    XSD::string_ m_minVer_attr;
    bool m_has_defStyle_attr;
    XSD::string_ m_defStyle_attr;
    bool m_has_resId_attr;
    XSD::int_ m_resId_attr;
};

class layoutDefHdrLst_element: public Element
{
public:
    layoutDefHdrLst_element();
    ~layoutDefHdrLst_element();
    CT_DiagramDefinitionHeader* add_layoutDefHdr();
    void clear();
    void toXml(std::ostream& _outStream) const;
    static const layoutDefHdrLst_element& default_instance();
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_layoutDefHdr() const;
        CT_DiagramDefinitionHeader* mutable_layoutDefHdr();
        const CT_DiagramDefinitionHeader& get_layoutDefHdr() const;
    protected:
    private:
        bool m_has_layoutDefHdr;
        CT_DiagramDefinitionHeader* m_layoutDefHdr;
    };
    vector<ChildGroup_1*> m_childGroupList_1;
    static layoutDefHdrLst_element* default_instance_;
};

class relIds_element: public Element
{
public:
    relIds_element();
    ~relIds_element();
    void clear();
    void toXml(std::ostream& _outStream) const;
    static const relIds_element& default_instance();
    bool has_r_dm_attr() const;
    void set_r_dm_attr(const ns_r::ST_RelationshipId& _r_dm_attr);
    const ns_r::ST_RelationshipId& get_r_dm_attr() const;
    bool has_r_lo_attr() const;
    void set_r_lo_attr(const ns_r::ST_RelationshipId& _r_lo_attr);
    const ns_r::ST_RelationshipId& get_r_lo_attr() const;
    bool has_r_qs_attr() const;
    void set_r_qs_attr(const ns_r::ST_RelationshipId& _r_qs_attr);
    const ns_r::ST_RelationshipId& get_r_qs_attr() const;
    bool has_r_cs_attr() const;
    void set_r_cs_attr(const ns_r::ST_RelationshipId& _r_cs_attr);
    const ns_r::ST_RelationshipId& get_r_cs_attr() const;
protected:
private:
    static relIds_element* default_instance_;
    bool m_has_r_dm_attr;
    ns_r::ST_RelationshipId* m_r_dm_attr;
    bool m_has_r_lo_attr;
    ns_r::ST_RelationshipId* m_r_lo_attr;
    bool m_has_r_qs_attr;
    ns_r::ST_RelationshipId* m_r_qs_attr;
    bool m_has_r_cs_attr;
    ns_r::ST_RelationshipId* m_r_cs_attr;
};

class styleDef_element: public Element
{
public:
    styleDef_element();
    ~styleDef_element();
    CT_SDName* add_title();
    CT_SDDescription* add_desc();
    bool has_catLst() const;
    CT_SDCategories* mutable_catLst();
    const CT_SDCategories& get_catLst() const;
    bool has_scene3d() const;
    ns_a::CT_Scene3D* mutable_scene3d();
    const ns_a::CT_Scene3D& get_scene3d() const;
    CT_StyleLabel* add_styleLbl();
    bool has_extLst() const;
    ns_a::CT_OfficeArtExtensionList* mutable_extLst();
    const ns_a::CT_OfficeArtExtensionList& get_extLst() const;
    void clear();
    void toXml(std::ostream& _outStream) const;
    static const styleDef_element& default_instance();
    bool has_uniqueId_attr() const;
    void set_uniqueId_attr(const XSD::string_& _uniqueId_attr);
    const XSD::string_& get_uniqueId_attr() const;
    bool has_minVer_attr() const;
    void set_minVer_attr(const XSD::string_& _minVer_attr);
    const XSD::string_& get_minVer_attr() const;
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_title() const;
        CT_SDName* mutable_title();
        const CT_SDName& get_title() const;
        bool has_desc() const;
        CT_SDDescription* mutable_desc();
        const CT_SDDescription& get_desc() const;
    protected:
    private:
        bool m_has_title;
        CT_SDName* m_title;
        bool m_has_desc;
        CT_SDDescription* m_desc;
    };
    class ChildGroup_2
    {
    public:
        ChildGroup_2();
        bool has_styleLbl() const;
        CT_StyleLabel* mutable_styleLbl();
        const CT_StyleLabel& get_styleLbl() const;
    protected:
    private:
        bool m_has_styleLbl;
        CT_StyleLabel* m_styleLbl;
    };
    vector<ChildGroup_1*> m_childGroupList_1;
    bool m_has_catLst;
    CT_SDCategories* m_catLst;
    bool m_has_scene3d;
    ns_a::CT_Scene3D* m_scene3d;
    vector<ChildGroup_2*> m_childGroupList_2;
    bool m_has_extLst;
    ns_a::CT_OfficeArtExtensionList* m_extLst;
    static styleDef_element* default_instance_;
    bool m_has_uniqueId_attr;
    XSD::string_ m_uniqueId_attr;
    bool m_has_minVer_attr;
    XSD::string_ m_minVer_attr;
};

class styleDefHdr_element: public Element
{
public:
    styleDefHdr_element();
    ~styleDefHdr_element();
    CT_SDName* add_title();
    CT_SDDescription* add_desc();
    bool has_catLst() const;
    CT_SDCategories* mutable_catLst();
    const CT_SDCategories& get_catLst() const;
    bool has_extLst() const;
    ns_a::CT_OfficeArtExtensionList* mutable_extLst();
    const ns_a::CT_OfficeArtExtensionList& get_extLst() const;
    void clear();
    void toXml(std::ostream& _outStream) const;
    static const styleDefHdr_element& default_instance();
    bool has_uniqueId_attr() const;
    void set_uniqueId_attr(const XSD::string_& _uniqueId_attr);
    const XSD::string_& get_uniqueId_attr() const;
    bool has_minVer_attr() const;
    void set_minVer_attr(const XSD::string_& _minVer_attr);
    const XSD::string_& get_minVer_attr() const;
    bool has_resId_attr() const;
    void set_resId_attr(const XSD::int_& _resId_attr);
    const XSD::int_& get_resId_attr() const;
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_title() const;
        CT_SDName* mutable_title();
        const CT_SDName& get_title() const;
        bool has_desc() const;
        CT_SDDescription* mutable_desc();
        const CT_SDDescription& get_desc() const;
    protected:
    private:
        bool m_has_title;
        CT_SDName* m_title;
        bool m_has_desc;
        CT_SDDescription* m_desc;
    };
    vector<ChildGroup_1*> m_childGroupList_1;
    bool m_has_catLst;
    CT_SDCategories* m_catLst;
    bool m_has_extLst;
    ns_a::CT_OfficeArtExtensionList* m_extLst;
    static styleDefHdr_element* default_instance_;
    bool m_has_uniqueId_attr;
    XSD::string_ m_uniqueId_attr;
    bool m_has_minVer_attr;
    XSD::string_ m_minVer_attr;
    bool m_has_resId_attr;
    XSD::int_ m_resId_attr;
};

class styleDefHdrLst_element: public Element
{
public:
    styleDefHdrLst_element();
    ~styleDefHdrLst_element();
    CT_StyleDefinitionHeader* add_styleDefHdr();
    void clear();
    void toXml(std::ostream& _outStream) const;
    static const styleDefHdrLst_element& default_instance();
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_styleDefHdr() const;
        CT_StyleDefinitionHeader* mutable_styleDefHdr();
        const CT_StyleDefinitionHeader& get_styleDefHdr() const;
    protected:
    private:
        bool m_has_styleDefHdr;
        CT_StyleDefinitionHeader* m_styleDefHdr;
    };
    vector<ChildGroup_1*> m_childGroupList_1;
    static styleDefHdrLst_element* default_instance_;
};

}
#endif