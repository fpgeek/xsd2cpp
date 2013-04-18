#include "dml-diagram_xsd.h"
#include <stdlib.h>
#include <sstream>
#include "shared-relationshipReference_xsd.h"
#include "dml-main_xsd.h"
#include "shared-commonSimpleTypes_xsd.h"
namespace ns_d{
    class Element : public XSD::Element{
    public:

    private:

    }

    class Attribute : public XSD::Attribute{
    public:

    private:

    }

    class ST_ClrAppMethod : public XSD::SimpleType{
    public:
        ST_ClrAppMethod(){
            m_has_type = false

        }
        ST_ClrAppMethod(const Type _type ){
            m_has_type = true
            m_type = _type

        }
        bool has_type(){

            return m_has_type;
        
        }
        void set_type(const Type& _type ){

            m_has_type = true;
            m_type = _type;
        
        }
        const Type& type(){

            return m_type;
        
        }
        string toString(){

        return ST_ClrAppMethod::TypeStrList[m_type];
    
        }
        void clear(){

            m_has_type = false;
        
        }
        void toXml(const string _attrName , ostream _outStream ){

            if (m_has_type)
            {
                '_outStream << _attrName << \=\\ << toString() << \\\;';
            }
        
        }
        const ST_ClrAppMethod& default_instance(){

    if (!ST_ClrAppMethod::default_instance_)
    {
        ST_ClrAppMethod::default_instance_ = new ST_ClrAppMethod();
    }
    return *ST_ClrAppMethod::default_instance_;

        }
        enum Type{
            _span_ = 1,
            _cycle_,
            _repeat_
        }

    private:
        static const string TypeStrList [];
        static ST_ClrAppMethod* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_HueDir : public XSD::SimpleType{
    public:
        ST_HueDir(){
            m_has_type = false

        }
        ST_HueDir(const Type _type ){
            m_has_type = true
            m_type = _type

        }
        bool has_type(){

            return m_has_type;
        
        }
        void set_type(const Type& _type ){

            m_has_type = true;
            m_type = _type;
        
        }
        const Type& type(){

            return m_type;
        
        }
        string toString(){

        return ST_HueDir::TypeStrList[m_type];
    
        }
        void clear(){

            m_has_type = false;
        
        }
        void toXml(const string _attrName , ostream _outStream ){

            if (m_has_type)
            {
                '_outStream << _attrName << \=\\ << toString() << \\\;';
            }
        
        }
        const ST_HueDir& default_instance(){

    if (!ST_HueDir::default_instance_)
    {
        ST_HueDir::default_instance_ = new ST_HueDir();
    }
    return *ST_HueDir::default_instance_;

        }
        enum Type{
            _cw_ = 1,
            _ccw_
        }

    private:
        static const string TypeStrList [];
        static ST_HueDir* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_PtType : public XSD::SimpleType{
    public:
        ST_PtType(){
            m_has_type = false

        }
        ST_PtType(const Type _type ){
            m_has_type = true
            m_type = _type

        }
        bool has_type(){

            return m_has_type;
        
        }
        void set_type(const Type& _type ){

            m_has_type = true;
            m_type = _type;
        
        }
        const Type& type(){

            return m_type;
        
        }
        string toString(){

        return ST_PtType::TypeStrList[m_type];
    
        }
        void clear(){

            m_has_type = false;
        
        }
        void toXml(const string _attrName , ostream _outStream ){

            if (m_has_type)
            {
                '_outStream << _attrName << \=\\ << toString() << \\\;';
            }
        
        }
        const ST_PtType& default_instance(){

    if (!ST_PtType::default_instance_)
    {
        ST_PtType::default_instance_ = new ST_PtType();
    }
    return *ST_PtType::default_instance_;

        }
        enum Type{
            _node_ = 1,
            _asst_,
            _doc_,
            _pres_,
            _parTrans_,
            _sibTrans_
        }

    private:
        static const string TypeStrList [];
        static ST_PtType* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_CxnType : public XSD::SimpleType{
    public:
        ST_CxnType(){
            m_has_type = false

        }
        ST_CxnType(const Type _type ){
            m_has_type = true
            m_type = _type

        }
        bool has_type(){

            return m_has_type;
        
        }
        void set_type(const Type& _type ){

            m_has_type = true;
            m_type = _type;
        
        }
        const Type& type(){

            return m_type;
        
        }
        string toString(){

        return ST_CxnType::TypeStrList[m_type];
    
        }
        void clear(){

            m_has_type = false;
        
        }
        void toXml(const string _attrName , ostream _outStream ){

            if (m_has_type)
            {
                '_outStream << _attrName << \=\\ << toString() << \\\;';
            }
        
        }
        const ST_CxnType& default_instance(){

    if (!ST_CxnType::default_instance_)
    {
        ST_CxnType::default_instance_ = new ST_CxnType();
    }
    return *ST_CxnType::default_instance_;

        }
        enum Type{
            _parOf_ = 1,
            _presOf_,
            _presParOf_,
            _unknownRelationship_
        }

    private:
        static const string TypeStrList [];
        static ST_CxnType* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_LayoutShapeType : public XSD::SimpleType{
    public:
        bool has_ST_ShapeType(){

            return m_has_ST_ShapeType;
        
        }
        ns_a::ST_ShapeType* mutable_ST_ShapeType(){

            clear_ST_OutputShapeType();
            m_has_ST_ShapeType = true;
            if (!m_ST_ShapeType)
            {
                m_ST_ShapeType = new ns_a::ST_ShapeType();
            }
            return m_ST_ShapeType;
        
        }
        const ns_a::ST_ShapeType& ST_ShapeType(){

            if (m_ST_ShapeType)
            {
                return *m_ST_ShapeType;
            }

            return ns_a::ST_ShapeType::default_instance();
        
        }
        bool has_ST_OutputShapeType(){

            return m_has_ST_OutputShapeType;
        
        }
        ST_OutputShapeType* mutable_ST_OutputShapeType(){

            clear_ST_ShapeType();
            m_has_ST_OutputShapeType = true;
            if (!m_ST_OutputShapeType)
            {
                m_ST_OutputShapeType = new ST_OutputShapeType();
            }
            return m_ST_OutputShapeType;
        
        }
        const ST_OutputShapeType& ST_OutputShapeType(){

            if (m_ST_OutputShapeType)
            {
                return *m_ST_OutputShapeType;
            }

            return ST_OutputShapeType::default_instance();
        
        }
        void clear(){
clear_ST_ShapeType();
clear_ST_OutputShapeType();
        }
        void toXml(const string _attrName , ostream _outStream ){

        if (m_has_ST_ShapeType)
        {
            (varName)s->toXml(_attrName, _outStream);;
            return;
        }

        if (m_has_ST_OutputShapeType)
        {
            (varName)s->toXml(_attrName, _outStream);;
            return;
        }

        }
        const ST_LayoutShapeType& default_instance(){

    if (!ST_LayoutShapeType::default_instance_)
    {
        ST_LayoutShapeType::default_instance_ = new ST_LayoutShapeType();
    }
    return *ST_LayoutShapeType::default_instance_;

        }

    private:
        void clear_ST_ShapeType(){

            m_has_ST_ShapeType = false;
            if (m_ST_ShapeType)
            {
                delete m_ST_ShapeType;
                m_ST_ShapeType = NULL;
            }
        
        }
        void clear_ST_OutputShapeType(){

            m_has_ST_OutputShapeType = false;
            if (m_ST_OutputShapeType)
            {
                delete m_ST_OutputShapeType;
                m_ST_OutputShapeType = NULL;
            }
        
        }
        bool m_has_ST_ShapeType ;
        ns_a::ST_ShapeType* m_ST_ShapeType ;
        bool m_has_ST_OutputShapeType ;
        ST_OutputShapeType* m_ST_OutputShapeType ;
        static ST_LayoutShapeType* default_instance_ ;

    }

    class ST_Index1 : public XSD::SimpleType{
    public:
        ST_Index1(){
            m_has_unsignedInt = false
            m_unsignedInt = 0

        }
        ST_Index1(const XSD::unsignedInt& _unsignedInt ){
            m_has_unsignedInt = true
            m_unsignedInt = _unsignedInt

        }
        bool has_unsignedInt(){

    return m_has_unsignedInt;

        }
        void set_unsignedInt(const unsignedInt& _unsignedInt ){

    m_has_unsignedInt = true;
    m_unsignedInt = _unsignedInt;

        }
        const unsignedInt& unsignedInt(){

    return m_unsignedInt;

        }
        void clear(){

    m_has_unsignedInt = false;
    m_unsignedInt = 0;;

        }
        void toXml(const string _attrName , ostream _outStream ){

    if (m_has_unsignedInt)
    {
        _outStream << _attrName << \=\\ << m_unsignedInt << \\\;;
    }

        }
        const ST_Index1& default_instance(){

    if (!ST_Index1::default_instance_)
    {
        ST_Index1::default_instance_ = new ST_Index1();
    }
    return *ST_Index1::default_instance_;

        }

    private:
        static ST_Index1* default_instance_ ;
        bool m_has_unsignedInt ;
        unsignedInt m_unsignedInt ;

    }

    class ST_ParameterVal : public XSD::SimpleType{
    public:
        bool has_ST_DiagramHorizontalAlignment(){

            return m_has_ST_DiagramHorizontalAlignment;
        
        }
        ST_DiagramHorizontalAlignment* mutable_ST_DiagramHorizontalAlignment(){

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
        const ST_DiagramHorizontalAlignment& ST_DiagramHorizontalAlignment(){

            if (m_ST_DiagramHorizontalAlignment)
            {
                return *m_ST_DiagramHorizontalAlignment;
            }

            return ST_DiagramHorizontalAlignment::default_instance();
        
        }
        bool has_ST_VerticalAlignment(){

            return m_has_ST_VerticalAlignment;
        
        }
        ST_VerticalAlignment* mutable_ST_VerticalAlignment(){

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
        const ST_VerticalAlignment& ST_VerticalAlignment(){

            if (m_ST_VerticalAlignment)
            {
                return *m_ST_VerticalAlignment;
            }

            return ST_VerticalAlignment::default_instance();
        
        }
        bool has_ST_ChildDirection(){

            return m_has_ST_ChildDirection;
        
        }
        ST_ChildDirection* mutable_ST_ChildDirection(){

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
        const ST_ChildDirection& ST_ChildDirection(){

            if (m_ST_ChildDirection)
            {
                return *m_ST_ChildDirection;
            }

            return ST_ChildDirection::default_instance();
        
        }
        bool has_ST_ChildAlignment(){

            return m_has_ST_ChildAlignment;
        
        }
        ST_ChildAlignment* mutable_ST_ChildAlignment(){

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
        const ST_ChildAlignment& ST_ChildAlignment(){

            if (m_ST_ChildAlignment)
            {
                return *m_ST_ChildAlignment;
            }

            return ST_ChildAlignment::default_instance();
        
        }
        bool has_ST_SecondaryChildAlignment(){

            return m_has_ST_SecondaryChildAlignment;
        
        }
        ST_SecondaryChildAlignment* mutable_ST_SecondaryChildAlignment(){

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
        const ST_SecondaryChildAlignment& ST_SecondaryChildAlignment(){

            if (m_ST_SecondaryChildAlignment)
            {
                return *m_ST_SecondaryChildAlignment;
            }

            return ST_SecondaryChildAlignment::default_instance();
        
        }
        bool has_ST_LinearDirection(){

            return m_has_ST_LinearDirection;
        
        }
        ST_LinearDirection* mutable_ST_LinearDirection(){

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
        const ST_LinearDirection& ST_LinearDirection(){

            if (m_ST_LinearDirection)
            {
                return *m_ST_LinearDirection;
            }

            return ST_LinearDirection::default_instance();
        
        }
        bool has_ST_SecondaryLinearDirection(){

            return m_has_ST_SecondaryLinearDirection;
        
        }
        ST_SecondaryLinearDirection* mutable_ST_SecondaryLinearDirection(){

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
        const ST_SecondaryLinearDirection& ST_SecondaryLinearDirection(){

            if (m_ST_SecondaryLinearDirection)
            {
                return *m_ST_SecondaryLinearDirection;
            }

            return ST_SecondaryLinearDirection::default_instance();
        
        }
        bool has_ST_StartingElement(){

            return m_has_ST_StartingElement;
        
        }
        ST_StartingElement* mutable_ST_StartingElement(){

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
        const ST_StartingElement& ST_StartingElement(){

            if (m_ST_StartingElement)
            {
                return *m_ST_StartingElement;
            }

            return ST_StartingElement::default_instance();
        
        }
        bool has_ST_BendPoint(){

            return m_has_ST_BendPoint;
        
        }
        ST_BendPoint* mutable_ST_BendPoint(){

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
        const ST_BendPoint& ST_BendPoint(){

            if (m_ST_BendPoint)
            {
                return *m_ST_BendPoint;
            }

            return ST_BendPoint::default_instance();
        
        }
        bool has_ST_ConnectorRouting(){

            return m_has_ST_ConnectorRouting;
        
        }
        ST_ConnectorRouting* mutable_ST_ConnectorRouting(){

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
        const ST_ConnectorRouting& ST_ConnectorRouting(){

            if (m_ST_ConnectorRouting)
            {
                return *m_ST_ConnectorRouting;
            }

            return ST_ConnectorRouting::default_instance();
        
        }
        bool has_ST_ArrowheadStyle(){

            return m_has_ST_ArrowheadStyle;
        
        }
        ST_ArrowheadStyle* mutable_ST_ArrowheadStyle(){

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
        const ST_ArrowheadStyle& ST_ArrowheadStyle(){

            if (m_ST_ArrowheadStyle)
            {
                return *m_ST_ArrowheadStyle;
            }

            return ST_ArrowheadStyle::default_instance();
        
        }
        bool has_ST_ConnectorDimension(){

            return m_has_ST_ConnectorDimension;
        
        }
        ST_ConnectorDimension* mutable_ST_ConnectorDimension(){

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
        const ST_ConnectorDimension& ST_ConnectorDimension(){

            if (m_ST_ConnectorDimension)
            {
                return *m_ST_ConnectorDimension;
            }

            return ST_ConnectorDimension::default_instance();
        
        }
        bool has_ST_RotationPath(){

            return m_has_ST_RotationPath;
        
        }
        ST_RotationPath* mutable_ST_RotationPath(){

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
        const ST_RotationPath& ST_RotationPath(){

            if (m_ST_RotationPath)
            {
                return *m_ST_RotationPath;
            }

            return ST_RotationPath::default_instance();
        
        }
        bool has_ST_CenterShapeMapping(){

            return m_has_ST_CenterShapeMapping;
        
        }
        ST_CenterShapeMapping* mutable_ST_CenterShapeMapping(){

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
        const ST_CenterShapeMapping& ST_CenterShapeMapping(){

            if (m_ST_CenterShapeMapping)
            {
                return *m_ST_CenterShapeMapping;
            }

            return ST_CenterShapeMapping::default_instance();
        
        }
        bool has_ST_NodeHorizontalAlignment(){

            return m_has_ST_NodeHorizontalAlignment;
        
        }
        ST_NodeHorizontalAlignment* mutable_ST_NodeHorizontalAlignment(){

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
        const ST_NodeHorizontalAlignment& ST_NodeHorizontalAlignment(){

            if (m_ST_NodeHorizontalAlignment)
            {
                return *m_ST_NodeHorizontalAlignment;
            }

            return ST_NodeHorizontalAlignment::default_instance();
        
        }
        bool has_ST_NodeVerticalAlignment(){

            return m_has_ST_NodeVerticalAlignment;
        
        }
        ST_NodeVerticalAlignment* mutable_ST_NodeVerticalAlignment(){

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
        const ST_NodeVerticalAlignment& ST_NodeVerticalAlignment(){

            if (m_ST_NodeVerticalAlignment)
            {
                return *m_ST_NodeVerticalAlignment;
            }

            return ST_NodeVerticalAlignment::default_instance();
        
        }
        bool has_ST_FallbackDimension(){

            return m_has_ST_FallbackDimension;
        
        }
        ST_FallbackDimension* mutable_ST_FallbackDimension(){

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
        const ST_FallbackDimension& ST_FallbackDimension(){

            if (m_ST_FallbackDimension)
            {
                return *m_ST_FallbackDimension;
            }

            return ST_FallbackDimension::default_instance();
        
        }
        bool has_ST_TextDirection(){

            return m_has_ST_TextDirection;
        
        }
        ST_TextDirection* mutable_ST_TextDirection(){

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
        const ST_TextDirection& ST_TextDirection(){

            if (m_ST_TextDirection)
            {
                return *m_ST_TextDirection;
            }

            return ST_TextDirection::default_instance();
        
        }
        bool has_ST_PyramidAccentPosition(){

            return m_has_ST_PyramidAccentPosition;
        
        }
        ST_PyramidAccentPosition* mutable_ST_PyramidAccentPosition(){

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
        const ST_PyramidAccentPosition& ST_PyramidAccentPosition(){

            if (m_ST_PyramidAccentPosition)
            {
                return *m_ST_PyramidAccentPosition;
            }

            return ST_PyramidAccentPosition::default_instance();
        
        }
        bool has_ST_PyramidAccentTextMargin(){

            return m_has_ST_PyramidAccentTextMargin;
        
        }
        ST_PyramidAccentTextMargin* mutable_ST_PyramidAccentTextMargin(){

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
        const ST_PyramidAccentTextMargin& ST_PyramidAccentTextMargin(){

            if (m_ST_PyramidAccentTextMargin)
            {
                return *m_ST_PyramidAccentTextMargin;
            }

            return ST_PyramidAccentTextMargin::default_instance();
        
        }
        bool has_ST_TextBlockDirection(){

            return m_has_ST_TextBlockDirection;
        
        }
        ST_TextBlockDirection* mutable_ST_TextBlockDirection(){

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
        const ST_TextBlockDirection& ST_TextBlockDirection(){

            if (m_ST_TextBlockDirection)
            {
                return *m_ST_TextBlockDirection;
            }

            return ST_TextBlockDirection::default_instance();
        
        }
        bool has_ST_TextAnchorHorizontal(){

            return m_has_ST_TextAnchorHorizontal;
        
        }
        ST_TextAnchorHorizontal* mutable_ST_TextAnchorHorizontal(){

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
        const ST_TextAnchorHorizontal& ST_TextAnchorHorizontal(){

            if (m_ST_TextAnchorHorizontal)
            {
                return *m_ST_TextAnchorHorizontal;
            }

            return ST_TextAnchorHorizontal::default_instance();
        
        }
        bool has_ST_TextAnchorVertical(){

            return m_has_ST_TextAnchorVertical;
        
        }
        ST_TextAnchorVertical* mutable_ST_TextAnchorVertical(){

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
        const ST_TextAnchorVertical& ST_TextAnchorVertical(){

            if (m_ST_TextAnchorVertical)
            {
                return *m_ST_TextAnchorVertical;
            }

            return ST_TextAnchorVertical::default_instance();
        
        }
        bool has_ST_DiagramTextAlignment(){

            return m_has_ST_DiagramTextAlignment;
        
        }
        ST_DiagramTextAlignment* mutable_ST_DiagramTextAlignment(){

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
        const ST_DiagramTextAlignment& ST_DiagramTextAlignment(){

            if (m_ST_DiagramTextAlignment)
            {
                return *m_ST_DiagramTextAlignment;
            }

            return ST_DiagramTextAlignment::default_instance();
        
        }
        bool has_ST_AutoTextRotation(){

            return m_has_ST_AutoTextRotation;
        
        }
        ST_AutoTextRotation* mutable_ST_AutoTextRotation(){

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
        const ST_AutoTextRotation& ST_AutoTextRotation(){

            if (m_ST_AutoTextRotation)
            {
                return *m_ST_AutoTextRotation;
            }

            return ST_AutoTextRotation::default_instance();
        
        }
        bool has_ST_GrowDirection(){

            return m_has_ST_GrowDirection;
        
        }
        ST_GrowDirection* mutable_ST_GrowDirection(){

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
        const ST_GrowDirection& ST_GrowDirection(){

            if (m_ST_GrowDirection)
            {
                return *m_ST_GrowDirection;
            }

            return ST_GrowDirection::default_instance();
        
        }
        bool has_ST_FlowDirection(){

            return m_has_ST_FlowDirection;
        
        }
        ST_FlowDirection* mutable_ST_FlowDirection(){

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
        const ST_FlowDirection& ST_FlowDirection(){

            if (m_ST_FlowDirection)
            {
                return *m_ST_FlowDirection;
            }

            return ST_FlowDirection::default_instance();
        
        }
        bool has_ST_ContinueDirection(){

            return m_has_ST_ContinueDirection;
        
        }
        ST_ContinueDirection* mutable_ST_ContinueDirection(){

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
        const ST_ContinueDirection& ST_ContinueDirection(){

            if (m_ST_ContinueDirection)
            {
                return *m_ST_ContinueDirection;
            }

            return ST_ContinueDirection::default_instance();
        
        }
        bool has_ST_Breakpoint(){

            return m_has_ST_Breakpoint;
        
        }
        ST_Breakpoint* mutable_ST_Breakpoint(){

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
        const ST_Breakpoint& ST_Breakpoint(){

            if (m_ST_Breakpoint)
            {
                return *m_ST_Breakpoint;
            }

            return ST_Breakpoint::default_instance();
        
        }
        bool has_ST_Offset(){

            return m_has_ST_Offset;
        
        }
        ST_Offset* mutable_ST_Offset(){

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
        const ST_Offset& ST_Offset(){

            if (m_ST_Offset)
            {
                return *m_ST_Offset;
            }

            return ST_Offset::default_instance();
        
        }
        bool has_ST_HierarchyAlignment(){

            return m_has_ST_HierarchyAlignment;
        
        }
        ST_HierarchyAlignment* mutable_ST_HierarchyAlignment(){

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
        const ST_HierarchyAlignment& ST_HierarchyAlignment(){

            if (m_ST_HierarchyAlignment)
            {
                return *m_ST_HierarchyAlignment;
            }

            return ST_HierarchyAlignment::default_instance();
        
        }
        bool has_int(){

            return m_has_int;
        
        }
        void set_int(const int& _int ){

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
        const int& int(){

            return m_int;
        
        }
        bool has_double(){

            return m_has_double;
        
        }
        void set_double(const double& _double ){

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
        const double& double(){

            return m_double;
        
        }
        bool has_boolean(){

            return m_has_boolean;
        
        }
        void set_boolean(const boolean& _boolean ){

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
        const boolean& boolean(){

            return m_boolean;
        
        }
        bool has_string(){

            return m_has_string;
        
        }
        void set_string(const string& _string ){

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
        const string& string(){

            return m_string;
        
        }
        bool has_ST_ConnectorPoint(){

            return m_has_ST_ConnectorPoint;
        
        }
        ST_ConnectorPoint* mutable_ST_ConnectorPoint(){

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
        const ST_ConnectorPoint& ST_ConnectorPoint(){

            if (m_ST_ConnectorPoint)
            {
                return *m_ST_ConnectorPoint;
            }

            return ST_ConnectorPoint::default_instance();
        
        }
        void clear(){
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
clear_ST_ConnectorPoint();
        }
        void toXml(const string _attrName , ostream _outStream ){

        if (m_has_ST_DiagramHorizontalAlignment)
        {
            (varName)s->toXml(_attrName, _outStream);;
            return;
        }

        if (m_has_ST_VerticalAlignment)
        {
            (varName)s->toXml(_attrName, _outStream);;
            return;
        }

        if (m_has_ST_ChildDirection)
        {
            (varName)s->toXml(_attrName, _outStream);;
            return;
        }

        if (m_has_ST_ChildAlignment)
        {
            (varName)s->toXml(_attrName, _outStream);;
            return;
        }

        if (m_has_ST_SecondaryChildAlignment)
        {
            (varName)s->toXml(_attrName, _outStream);;
            return;
        }

        if (m_has_ST_LinearDirection)
        {
            (varName)s->toXml(_attrName, _outStream);;
            return;
        }

        if (m_has_ST_SecondaryLinearDirection)
        {
            (varName)s->toXml(_attrName, _outStream);;
            return;
        }

        if (m_has_ST_StartingElement)
        {
            (varName)s->toXml(_attrName, _outStream);;
            return;
        }

        if (m_has_ST_BendPoint)
        {
            (varName)s->toXml(_attrName, _outStream);;
            return;
        }

        if (m_has_ST_ConnectorRouting)
        {
            (varName)s->toXml(_attrName, _outStream);;
            return;
        }

        if (m_has_ST_ArrowheadStyle)
        {
            (varName)s->toXml(_attrName, _outStream);;
            return;
        }

        if (m_has_ST_ConnectorDimension)
        {
            (varName)s->toXml(_attrName, _outStream);;
            return;
        }

        if (m_has_ST_RotationPath)
        {
            (varName)s->toXml(_attrName, _outStream);;
            return;
        }

        if (m_has_ST_CenterShapeMapping)
        {
            (varName)s->toXml(_attrName, _outStream);;
            return;
        }

        if (m_has_ST_NodeHorizontalAlignment)
        {
            (varName)s->toXml(_attrName, _outStream);;
            return;
        }

        if (m_has_ST_NodeVerticalAlignment)
        {
            (varName)s->toXml(_attrName, _outStream);;
            return;
        }

        if (m_has_ST_FallbackDimension)
        {
            (varName)s->toXml(_attrName, _outStream);;
            return;
        }

        if (m_has_ST_TextDirection)
        {
            (varName)s->toXml(_attrName, _outStream);;
            return;
        }

        if (m_has_ST_PyramidAccentPosition)
        {
            (varName)s->toXml(_attrName, _outStream);;
            return;
        }

        if (m_has_ST_PyramidAccentTextMargin)
        {
            (varName)s->toXml(_attrName, _outStream);;
            return;
        }

        if (m_has_ST_TextBlockDirection)
        {
            (varName)s->toXml(_attrName, _outStream);;
            return;
        }

        if (m_has_ST_TextAnchorHorizontal)
        {
            (varName)s->toXml(_attrName, _outStream);;
            return;
        }

        if (m_has_ST_TextAnchorVertical)
        {
            (varName)s->toXml(_attrName, _outStream);;
            return;
        }

        if (m_has_ST_DiagramTextAlignment)
        {
            (varName)s->toXml(_attrName, _outStream);;
            return;
        }

        if (m_has_ST_AutoTextRotation)
        {
            (varName)s->toXml(_attrName, _outStream);;
            return;
        }

        if (m_has_ST_GrowDirection)
        {
            (varName)s->toXml(_attrName, _outStream);;
            return;
        }

        if (m_has_ST_FlowDirection)
        {
            (varName)s->toXml(_attrName, _outStream);;
            return;
        }

        if (m_has_ST_ContinueDirection)
        {
            (varName)s->toXml(_attrName, _outStream);;
            return;
        }

        if (m_has_ST_Breakpoint)
        {
            (varName)s->toXml(_attrName, _outStream);;
            return;
        }

        if (m_has_ST_Offset)
        {
            (varName)s->toXml(_attrName, _outStream);;
            return;
        }

        if (m_has_ST_HierarchyAlignment)
        {
            (varName)s->toXml(_attrName, _outStream);;
            return;
        }

        if (m_has_int)
        {
            _outStream << _attrName << \=\\ << m_int << \\\;;
            return;
        }

        if (m_has_double)
        {
            _outStream << _attrName << \=\\ << m_double << \\\;;
            return;
        }

        if (m_has_boolean)
        {
            _outStream << _attrName << \=\\ << XSD::BooleanStr(m_boolean) << \\\;;
            return;
        }

        if (m_has_string)
        {
            _outStream << _attrName << \=\\ << m_string << \\\;;
            return;
        }

        if (m_has_ST_ConnectorPoint)
        {
            (varName)s->toXml(_attrName, _outStream);;
            return;
        }

        }
        const ST_ParameterVal& default_instance(){

    if (!ST_ParameterVal::default_instance_)
    {
        ST_ParameterVal::default_instance_ = new ST_ParameterVal();
    }
    return *ST_ParameterVal::default_instance_;

        }

    private:
        void clear_ST_DiagramHorizontalAlignment(){

            m_has_ST_DiagramHorizontalAlignment = false;
            if (m_ST_DiagramHorizontalAlignment)
            {
                delete m_ST_DiagramHorizontalAlignment;
                m_ST_DiagramHorizontalAlignment = NULL;
            }
        
        }
        void clear_ST_VerticalAlignment(){

            m_has_ST_VerticalAlignment = false;
            if (m_ST_VerticalAlignment)
            {
                delete m_ST_VerticalAlignment;
                m_ST_VerticalAlignment = NULL;
            }
        
        }
        void clear_ST_ChildDirection(){

            m_has_ST_ChildDirection = false;
            if (m_ST_ChildDirection)
            {
                delete m_ST_ChildDirection;
                m_ST_ChildDirection = NULL;
            }
        
        }
        void clear_ST_ChildAlignment(){

            m_has_ST_ChildAlignment = false;
            if (m_ST_ChildAlignment)
            {
                delete m_ST_ChildAlignment;
                m_ST_ChildAlignment = NULL;
            }
        
        }
        void clear_ST_SecondaryChildAlignment(){

            m_has_ST_SecondaryChildAlignment = false;
            if (m_ST_SecondaryChildAlignment)
            {
                delete m_ST_SecondaryChildAlignment;
                m_ST_SecondaryChildAlignment = NULL;
            }
        
        }
        void clear_ST_LinearDirection(){

            m_has_ST_LinearDirection = false;
            if (m_ST_LinearDirection)
            {
                delete m_ST_LinearDirection;
                m_ST_LinearDirection = NULL;
            }
        
        }
        void clear_ST_SecondaryLinearDirection(){

            m_has_ST_SecondaryLinearDirection = false;
            if (m_ST_SecondaryLinearDirection)
            {
                delete m_ST_SecondaryLinearDirection;
                m_ST_SecondaryLinearDirection = NULL;
            }
        
        }
        void clear_ST_StartingElement(){

            m_has_ST_StartingElement = false;
            if (m_ST_StartingElement)
            {
                delete m_ST_StartingElement;
                m_ST_StartingElement = NULL;
            }
        
        }
        void clear_ST_BendPoint(){

            m_has_ST_BendPoint = false;
            if (m_ST_BendPoint)
            {
                delete m_ST_BendPoint;
                m_ST_BendPoint = NULL;
            }
        
        }
        void clear_ST_ConnectorRouting(){

            m_has_ST_ConnectorRouting = false;
            if (m_ST_ConnectorRouting)
            {
                delete m_ST_ConnectorRouting;
                m_ST_ConnectorRouting = NULL;
            }
        
        }
        void clear_ST_ArrowheadStyle(){

            m_has_ST_ArrowheadStyle = false;
            if (m_ST_ArrowheadStyle)
            {
                delete m_ST_ArrowheadStyle;
                m_ST_ArrowheadStyle = NULL;
            }
        
        }
        void clear_ST_ConnectorDimension(){

            m_has_ST_ConnectorDimension = false;
            if (m_ST_ConnectorDimension)
            {
                delete m_ST_ConnectorDimension;
                m_ST_ConnectorDimension = NULL;
            }
        
        }
        void clear_ST_RotationPath(){

            m_has_ST_RotationPath = false;
            if (m_ST_RotationPath)
            {
                delete m_ST_RotationPath;
                m_ST_RotationPath = NULL;
            }
        
        }
        void clear_ST_CenterShapeMapping(){

            m_has_ST_CenterShapeMapping = false;
            if (m_ST_CenterShapeMapping)
            {
                delete m_ST_CenterShapeMapping;
                m_ST_CenterShapeMapping = NULL;
            }
        
        }
        void clear_ST_NodeHorizontalAlignment(){

            m_has_ST_NodeHorizontalAlignment = false;
            if (m_ST_NodeHorizontalAlignment)
            {
                delete m_ST_NodeHorizontalAlignment;
                m_ST_NodeHorizontalAlignment = NULL;
            }
        
        }
        void clear_ST_NodeVerticalAlignment(){

            m_has_ST_NodeVerticalAlignment = false;
            if (m_ST_NodeVerticalAlignment)
            {
                delete m_ST_NodeVerticalAlignment;
                m_ST_NodeVerticalAlignment = NULL;
            }
        
        }
        void clear_ST_FallbackDimension(){

            m_has_ST_FallbackDimension = false;
            if (m_ST_FallbackDimension)
            {
                delete m_ST_FallbackDimension;
                m_ST_FallbackDimension = NULL;
            }
        
        }
        void clear_ST_TextDirection(){

            m_has_ST_TextDirection = false;
            if (m_ST_TextDirection)
            {
                delete m_ST_TextDirection;
                m_ST_TextDirection = NULL;
            }
        
        }
        void clear_ST_PyramidAccentPosition(){

            m_has_ST_PyramidAccentPosition = false;
            if (m_ST_PyramidAccentPosition)
            {
                delete m_ST_PyramidAccentPosition;
                m_ST_PyramidAccentPosition = NULL;
            }
        
        }
        void clear_ST_PyramidAccentTextMargin(){

            m_has_ST_PyramidAccentTextMargin = false;
            if (m_ST_PyramidAccentTextMargin)
            {
                delete m_ST_PyramidAccentTextMargin;
                m_ST_PyramidAccentTextMargin = NULL;
            }
        
        }
        void clear_ST_TextBlockDirection(){

            m_has_ST_TextBlockDirection = false;
            if (m_ST_TextBlockDirection)
            {
                delete m_ST_TextBlockDirection;
                m_ST_TextBlockDirection = NULL;
            }
        
        }
        void clear_ST_TextAnchorHorizontal(){

            m_has_ST_TextAnchorHorizontal = false;
            if (m_ST_TextAnchorHorizontal)
            {
                delete m_ST_TextAnchorHorizontal;
                m_ST_TextAnchorHorizontal = NULL;
            }
        
        }
        void clear_ST_TextAnchorVertical(){

            m_has_ST_TextAnchorVertical = false;
            if (m_ST_TextAnchorVertical)
            {
                delete m_ST_TextAnchorVertical;
                m_ST_TextAnchorVertical = NULL;
            }
        
        }
        void clear_ST_DiagramTextAlignment(){

            m_has_ST_DiagramTextAlignment = false;
            if (m_ST_DiagramTextAlignment)
            {
                delete m_ST_DiagramTextAlignment;
                m_ST_DiagramTextAlignment = NULL;
            }
        
        }
        void clear_ST_AutoTextRotation(){

            m_has_ST_AutoTextRotation = false;
            if (m_ST_AutoTextRotation)
            {
                delete m_ST_AutoTextRotation;
                m_ST_AutoTextRotation = NULL;
            }
        
        }
        void clear_ST_GrowDirection(){

            m_has_ST_GrowDirection = false;
            if (m_ST_GrowDirection)
            {
                delete m_ST_GrowDirection;
                m_ST_GrowDirection = NULL;
            }
        
        }
        void clear_ST_FlowDirection(){

            m_has_ST_FlowDirection = false;
            if (m_ST_FlowDirection)
            {
                delete m_ST_FlowDirection;
                m_ST_FlowDirection = NULL;
            }
        
        }
        void clear_ST_ContinueDirection(){

            m_has_ST_ContinueDirection = false;
            if (m_ST_ContinueDirection)
            {
                delete m_ST_ContinueDirection;
                m_ST_ContinueDirection = NULL;
            }
        
        }
        void clear_ST_Breakpoint(){

            m_has_ST_Breakpoint = false;
            if (m_ST_Breakpoint)
            {
                delete m_ST_Breakpoint;
                m_ST_Breakpoint = NULL;
            }
        
        }
        void clear_ST_Offset(){

            m_has_ST_Offset = false;
            if (m_ST_Offset)
            {
                delete m_ST_Offset;
                m_ST_Offset = NULL;
            }
        
        }
        void clear_ST_HierarchyAlignment(){

            m_has_ST_HierarchyAlignment = false;
            if (m_ST_HierarchyAlignment)
            {
                delete m_ST_HierarchyAlignment;
                m_ST_HierarchyAlignment = NULL;
            }
        
        }
        void clear_int(){

            m_has_int = false;
            m_int = 0;
        
        }
        void clear_double(){

            m_has_double = false;
            m_double = 0;
        
        }
        void clear_boolean(){

            m_has_boolean = false;
            m_boolean = false;
        
        }
        void clear_string(){

            m_has_string = false;
            m_string = ;
        
        }
        void clear_ST_ConnectorPoint(){

            m_has_ST_ConnectorPoint = false;
            if (m_ST_ConnectorPoint)
            {
                delete m_ST_ConnectorPoint;
                m_ST_ConnectorPoint = NULL;
            }
        
        }
        bool m_has_ST_DiagramHorizontalAlignment ;
        ST_DiagramHorizontalAlignment* m_ST_DiagramHorizontalAlignment ;
        bool m_has_ST_VerticalAlignment ;
        ST_VerticalAlignment* m_ST_VerticalAlignment ;
        bool m_has_ST_ChildDirection ;
        ST_ChildDirection* m_ST_ChildDirection ;
        bool m_has_ST_ChildAlignment ;
        ST_ChildAlignment* m_ST_ChildAlignment ;
        bool m_has_ST_SecondaryChildAlignment ;
        ST_SecondaryChildAlignment* m_ST_SecondaryChildAlignment ;
        bool m_has_ST_LinearDirection ;
        ST_LinearDirection* m_ST_LinearDirection ;
        bool m_has_ST_SecondaryLinearDirection ;
        ST_SecondaryLinearDirection* m_ST_SecondaryLinearDirection ;
        bool m_has_ST_StartingElement ;
        ST_StartingElement* m_ST_StartingElement ;
        bool m_has_ST_BendPoint ;
        ST_BendPoint* m_ST_BendPoint ;
        bool m_has_ST_ConnectorRouting ;
        ST_ConnectorRouting* m_ST_ConnectorRouting ;
        bool m_has_ST_ArrowheadStyle ;
        ST_ArrowheadStyle* m_ST_ArrowheadStyle ;
        bool m_has_ST_ConnectorDimension ;
        ST_ConnectorDimension* m_ST_ConnectorDimension ;
        bool m_has_ST_RotationPath ;
        ST_RotationPath* m_ST_RotationPath ;
        bool m_has_ST_CenterShapeMapping ;
        ST_CenterShapeMapping* m_ST_CenterShapeMapping ;
        bool m_has_ST_NodeHorizontalAlignment ;
        ST_NodeHorizontalAlignment* m_ST_NodeHorizontalAlignment ;
        bool m_has_ST_NodeVerticalAlignment ;
        ST_NodeVerticalAlignment* m_ST_NodeVerticalAlignment ;
        bool m_has_ST_FallbackDimension ;
        ST_FallbackDimension* m_ST_FallbackDimension ;
        bool m_has_ST_TextDirection ;
        ST_TextDirection* m_ST_TextDirection ;
        bool m_has_ST_PyramidAccentPosition ;
        ST_PyramidAccentPosition* m_ST_PyramidAccentPosition ;
        bool m_has_ST_PyramidAccentTextMargin ;
        ST_PyramidAccentTextMargin* m_ST_PyramidAccentTextMargin ;
        bool m_has_ST_TextBlockDirection ;
        ST_TextBlockDirection* m_ST_TextBlockDirection ;
        bool m_has_ST_TextAnchorHorizontal ;
        ST_TextAnchorHorizontal* m_ST_TextAnchorHorizontal ;
        bool m_has_ST_TextAnchorVertical ;
        ST_TextAnchorVertical* m_ST_TextAnchorVertical ;
        bool m_has_ST_DiagramTextAlignment ;
        ST_DiagramTextAlignment* m_ST_DiagramTextAlignment ;
        bool m_has_ST_AutoTextRotation ;
        ST_AutoTextRotation* m_ST_AutoTextRotation ;
        bool m_has_ST_GrowDirection ;
        ST_GrowDirection* m_ST_GrowDirection ;
        bool m_has_ST_FlowDirection ;
        ST_FlowDirection* m_ST_FlowDirection ;
        bool m_has_ST_ContinueDirection ;
        ST_ContinueDirection* m_ST_ContinueDirection ;
        bool m_has_ST_Breakpoint ;
        ST_Breakpoint* m_ST_Breakpoint ;
        bool m_has_ST_Offset ;
        ST_Offset* m_ST_Offset ;
        bool m_has_ST_HierarchyAlignment ;
        ST_HierarchyAlignment* m_ST_HierarchyAlignment ;
        bool m_has_int ;
        int m_int ;
        bool m_has_double ;
        double m_double ;
        bool m_has_boolean ;
        boolean m_boolean ;
        bool m_has_string ;
        string m_string ;
        bool m_has_ST_ConnectorPoint ;
        ST_ConnectorPoint* m_ST_ConnectorPoint ;
        static ST_ParameterVal* default_instance_ ;

    }

    class ST_ModelId : public XSD::SimpleType{
    public:
        bool has_int(){

            return m_has_int;
        
        }
        void set_int(const int& _int ){

            clear_ST_Guid();
            m_has_int = true;
            m_int = _int;
        
        }
        const int& int(){

            return m_int;
        
        }
        bool has_ST_Guid(){

            return m_has_ST_Guid;
        
        }
        ns_s::ST_Guid* mutable_ST_Guid(){

            clear_int();
            m_has_ST_Guid = true;
            if (!m_ST_Guid)
            {
                m_ST_Guid = new ns_s::ST_Guid();
            }
            return m_ST_Guid;
        
        }
        const ns_s::ST_Guid& ST_Guid(){

            if (m_ST_Guid)
            {
                return *m_ST_Guid;
            }

            return ns_s::ST_Guid::default_instance();
        
        }
        void clear(){
clear_int();
clear_ST_Guid();
        }
        void toXml(const string _attrName , ostream _outStream ){

        if (m_has_int)
        {
            _outStream << _attrName << \=\\ << m_int << \\\;;
            return;
        }

        if (m_has_ST_Guid)
        {
            (varName)s->toXml(_attrName, _outStream);;
            return;
        }

        }
        const ST_ModelId& default_instance(){

    if (!ST_ModelId::default_instance_)
    {
        ST_ModelId::default_instance_ = new ST_ModelId();
    }
    return *ST_ModelId::default_instance_;

        }

    private:
        void clear_int(){

            m_has_int = false;
            m_int = 0;
        
        }
        void clear_ST_Guid(){

            m_has_ST_Guid = false;
            if (m_ST_Guid)
            {
                delete m_ST_Guid;
                m_ST_Guid = NULL;
            }
        
        }
        bool m_has_int ;
        int m_int ;
        bool m_has_ST_Guid ;
        ns_s::ST_Guid* m_ST_Guid ;
        static ST_ModelId* default_instance_ ;

    }

    class ST_PrSetCustVal : public XSD::SimpleType{
    public:
        bool has_ST_Percentage(){

            return m_has_ST_Percentage;
        
        }
        ns_s::ST_Percentage* mutable_ST_Percentage(){

            clear_int();
            m_has_ST_Percentage = true;
            if (!m_ST_Percentage)
            {
                m_ST_Percentage = new ns_s::ST_Percentage();
            }
            return m_ST_Percentage;
        
        }
        const ns_s::ST_Percentage& ST_Percentage(){

            if (m_ST_Percentage)
            {
                return *m_ST_Percentage;
            }

            return ns_s::ST_Percentage::default_instance();
        
        }
        bool has_int(){

            return m_has_int;
        
        }
        void set_int(const int& _int ){

            clear_ST_Percentage();
            m_has_int = true;
            m_int = _int;
        
        }
        const int& int(){

            return m_int;
        
        }
        void clear(){
clear_ST_Percentage();
clear_int();
        }
        void toXml(const string _attrName , ostream _outStream ){

        if (m_has_ST_Percentage)
        {
            (varName)s->toXml(_attrName, _outStream);;
            return;
        }

        if (m_has_int)
        {
            _outStream << _attrName << \=\\ << m_int << \\\;;
            return;
        }

        }
        const ST_PrSetCustVal& default_instance(){

    if (!ST_PrSetCustVal::default_instance_)
    {
        ST_PrSetCustVal::default_instance_ = new ST_PrSetCustVal();
    }
    return *ST_PrSetCustVal::default_instance_;

        }

    private:
        void clear_ST_Percentage(){

            m_has_ST_Percentage = false;
            if (m_ST_Percentage)
            {
                delete m_ST_Percentage;
                m_ST_Percentage = NULL;
            }
        
        }
        void clear_int(){

            m_has_int = false;
            m_int = 0;
        
        }
        bool m_has_ST_Percentage ;
        ns_s::ST_Percentage* m_ST_Percentage ;
        bool m_has_int ;
        int m_int ;
        static ST_PrSetCustVal* default_instance_ ;

    }

    class ST_Direction : public XSD::SimpleType{
    public:
        ST_Direction(){
            m_has_type = false

        }
        ST_Direction(const Type _type ){
            m_has_type = true
            m_type = _type

        }
        bool has_type(){

            return m_has_type;
        
        }
        void set_type(const Type& _type ){

            m_has_type = true;
            m_type = _type;
        
        }
        const Type& type(){

            return m_type;
        
        }
        string toString(){

        return ST_Direction::TypeStrList[m_type];
    
        }
        void clear(){

            m_has_type = false;
        
        }
        void toXml(const string _attrName , ostream _outStream ){

            if (m_has_type)
            {
                '_outStream << _attrName << \=\\ << toString() << \\\;';
            }
        
        }
        const ST_Direction& default_instance(){

    if (!ST_Direction::default_instance_)
    {
        ST_Direction::default_instance_ = new ST_Direction();
    }
    return *ST_Direction::default_instance_;

        }
        enum Type{
            _norm_ = 1,
            _rev_
        }

    private:
        static const string TypeStrList [];
        static ST_Direction* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_HierBranchStyle : public XSD::SimpleType{
    public:
        ST_HierBranchStyle(){
            m_has_type = false

        }
        ST_HierBranchStyle(const Type _type ){
            m_has_type = true
            m_type = _type

        }
        bool has_type(){

            return m_has_type;
        
        }
        void set_type(const Type& _type ){

            m_has_type = true;
            m_type = _type;
        
        }
        const Type& type(){

            return m_type;
        
        }
        string toString(){

        return ST_HierBranchStyle::TypeStrList[m_type];
    
        }
        void clear(){

            m_has_type = false;
        
        }
        void toXml(const string _attrName , ostream _outStream ){

            if (m_has_type)
            {
                '_outStream << _attrName << \=\\ << toString() << \\\;';
            }
        
        }
        const ST_HierBranchStyle& default_instance(){

    if (!ST_HierBranchStyle::default_instance_)
    {
        ST_HierBranchStyle::default_instance_ = new ST_HierBranchStyle();
    }
    return *ST_HierBranchStyle::default_instance_;

        }
        enum Type{
            _l_ = 1,
            _r_,
            _hang_,
            _std_,
            _init_
        }

    private:
        static const string TypeStrList [];
        static ST_HierBranchStyle* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_AnimOneStr : public XSD::SimpleType{
    public:
        ST_AnimOneStr(){
            m_has_type = false

        }
        ST_AnimOneStr(const Type _type ){
            m_has_type = true
            m_type = _type

        }
        bool has_type(){

            return m_has_type;
        
        }
        void set_type(const Type& _type ){

            m_has_type = true;
            m_type = _type;
        
        }
        const Type& type(){

            return m_type;
        
        }
        string toString(){

        return ST_AnimOneStr::TypeStrList[m_type];
    
        }
        void clear(){

            m_has_type = false;
        
        }
        void toXml(const string _attrName , ostream _outStream ){

            if (m_has_type)
            {
                '_outStream << _attrName << \=\\ << toString() << \\\;';
            }
        
        }
        const ST_AnimOneStr& default_instance(){

    if (!ST_AnimOneStr::default_instance_)
    {
        ST_AnimOneStr::default_instance_ = new ST_AnimOneStr();
    }
    return *ST_AnimOneStr::default_instance_;

        }
        enum Type{
            _none_ = 1,
            _one_,
            _branch_
        }

    private:
        static const string TypeStrList [];
        static ST_AnimOneStr* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_AnimLvlStr : public XSD::SimpleType{
    public:
        ST_AnimLvlStr(){
            m_has_type = false

        }
        ST_AnimLvlStr(const Type _type ){
            m_has_type = true
            m_type = _type

        }
        bool has_type(){

            return m_has_type;
        
        }
        void set_type(const Type& _type ){

            m_has_type = true;
            m_type = _type;
        
        }
        const Type& type(){

            return m_type;
        
        }
        string toString(){

        return ST_AnimLvlStr::TypeStrList[m_type];
    
        }
        void clear(){

            m_has_type = false;
        
        }
        void toXml(const string _attrName , ostream _outStream ){

            if (m_has_type)
            {
                '_outStream << _attrName << \=\\ << toString() << \\\;';
            }
        
        }
        const ST_AnimLvlStr& default_instance(){

    if (!ST_AnimLvlStr::default_instance_)
    {
        ST_AnimLvlStr::default_instance_ = new ST_AnimLvlStr();
    }
    return *ST_AnimLvlStr::default_instance_;

        }
        enum Type{
            _none_ = 1,
            _lvl_,
            _ctr_
        }

    private:
        static const string TypeStrList [];
        static ST_AnimLvlStr* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_NodeCount : public XSD::SimpleType{
    public:
        ST_NodeCount(){
            m_has_int = false
            m_int = 0

        }
        ST_NodeCount(const XSD::int& _int ){
            m_has_int = true
            m_int = _int

        }
        bool has_int(){

    return m_has_int;

        }
        void set_int(const int& _int ){

    m_has_int = true;
    m_int = _int;

        }
        const int& int(){

    return m_int;

        }
        void clear(){

    m_has_int = false;
    m_int = 0;;

        }
        void toXml(const string _attrName , ostream _outStream ){

    if (m_has_int)
    {
        _outStream << _attrName << \=\\ << m_int << \\\;;
    }

        }
        const ST_NodeCount& default_instance(){

    if (!ST_NodeCount::default_instance_)
    {
        ST_NodeCount::default_instance_ = new ST_NodeCount();
    }
    return *ST_NodeCount::default_instance_;

        }

    private:
        static ST_NodeCount* default_instance_ ;
        bool m_has_int ;
        int m_int ;

    }

    class ST_ResizeHandlesStr : public XSD::SimpleType{
    public:
        ST_ResizeHandlesStr(){
            m_has_type = false

        }
        ST_ResizeHandlesStr(const Type _type ){
            m_has_type = true
            m_type = _type

        }
        bool has_type(){

            return m_has_type;
        
        }
        void set_type(const Type& _type ){

            m_has_type = true;
            m_type = _type;
        
        }
        const Type& type(){

            return m_type;
        
        }
        string toString(){

        return ST_ResizeHandlesStr::TypeStrList[m_type];
    
        }
        void clear(){

            m_has_type = false;
        
        }
        void toXml(const string _attrName , ostream _outStream ){

            if (m_has_type)
            {
                '_outStream << _attrName << \=\\ << toString() << \\\;';
            }
        
        }
        const ST_ResizeHandlesStr& default_instance(){

    if (!ST_ResizeHandlesStr::default_instance_)
    {
        ST_ResizeHandlesStr::default_instance_ = new ST_ResizeHandlesStr();
    }
    return *ST_ResizeHandlesStr::default_instance_;

        }
        enum Type{
            _exact_ = 1,
            _rel_
        }

    private:
        static const string TypeStrList [];
        static ST_ResizeHandlesStr* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_AlgorithmType : public XSD::SimpleType{
    public:
        ST_AlgorithmType(){
            m_has_type = false

        }
        ST_AlgorithmType(const Type _type ){
            m_has_type = true
            m_type = _type

        }
        bool has_type(){

            return m_has_type;
        
        }
        void set_type(const Type& _type ){

            m_has_type = true;
            m_type = _type;
        
        }
        const Type& type(){

            return m_type;
        
        }
        string toString(){

        return ST_AlgorithmType::TypeStrList[m_type];
    
        }
        void clear(){

            m_has_type = false;
        
        }
        void toXml(const string _attrName , ostream _outStream ){

            if (m_has_type)
            {
                '_outStream << _attrName << \=\\ << toString() << \\\;';
            }
        
        }
        const ST_AlgorithmType& default_instance(){

    if (!ST_AlgorithmType::default_instance_)
    {
        ST_AlgorithmType::default_instance_ = new ST_AlgorithmType();
    }
    return *ST_AlgorithmType::default_instance_;

        }
        enum Type{
            _composite_ = 1,
            _conn_,
            _cycle_,
            _hierChild_,
            _hierRoot_,
            _pyra_,
            _lin_,
            _sp_,
            _tx_,
            _snake_
        }

    private:
        static const string TypeStrList [];
        static ST_AlgorithmType* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_AxisType : public XSD::SimpleType{
    public:
        ST_AxisType(){
            m_has_type = false

        }
        ST_AxisType(const Type _type ){
            m_has_type = true
            m_type = _type

        }
        bool has_type(){

            return m_has_type;
        
        }
        void set_type(const Type& _type ){

            m_has_type = true;
            m_type = _type;
        
        }
        const Type& type(){

            return m_type;
        
        }
        string toString(){

        return ST_AxisType::TypeStrList[m_type];
    
        }
        void clear(){

            m_has_type = false;
        
        }
        void toXml(const string _attrName , ostream _outStream ){

            if (m_has_type)
            {
                '_outStream << _attrName << \=\\ << toString() << \\\;';
            }
        
        }
        const ST_AxisType& default_instance(){

    if (!ST_AxisType::default_instance_)
    {
        ST_AxisType::default_instance_ = new ST_AxisType();
    }
    return *ST_AxisType::default_instance_;

        }
        enum Type{
            _self_ = 1,
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
        }

    private:
        static const string TypeStrList [];
        static ST_AxisType* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_AxisTypes : public XSD::SimpleType{
    public:
        ST_AxisTypes(){
            m_has_ENTITIES = false
            m_ENTITIES = 

        }
        ST_AxisTypes(const XSD::ENTITIES& _ENTITIES ){
            m_has_ENTITIES = true
            m_ENTITIES = _ENTITIES

        }
        bool has_ENTITIES(){

    return m_has_ENTITIES;

        }
        void set_ENTITIES(const ENTITIES& _ENTITIES ){

    m_has_ENTITIES = true;
    m_ENTITIES = _ENTITIES;

        }
        const ENTITIES& ENTITIES(){

    return m_ENTITIES;

        }
        void clear(){

    m_has_ENTITIES = false;
    m_ENTITIES.clear();;

        }
        void toXml(const string _attrName , ostream _outStream ){

    if (m_has_ENTITIES)
    {
        _outStream << _attrName << \=\\ << m_ENTITIES << \\\;;
    }

        }
        const ST_AxisTypes& default_instance(){

    if (!ST_AxisTypes::default_instance_)
    {
        ST_AxisTypes::default_instance_ = new ST_AxisTypes();
    }
    return *ST_AxisTypes::default_instance_;

        }

    private:
        static ST_AxisTypes* default_instance_ ;
        bool m_has_ENTITIES ;
        ENTITIES m_ENTITIES ;

    }

    class ST_BoolOperator : public XSD::SimpleType{
    public:
        ST_BoolOperator(){
            m_has_type = false

        }
        ST_BoolOperator(const Type _type ){
            m_has_type = true
            m_type = _type

        }
        bool has_type(){

            return m_has_type;
        
        }
        void set_type(const Type& _type ){

            m_has_type = true;
            m_type = _type;
        
        }
        const Type& type(){

            return m_type;
        
        }
        string toString(){

        return ST_BoolOperator::TypeStrList[m_type];
    
        }
        void clear(){

            m_has_type = false;
        
        }
        void toXml(const string _attrName , ostream _outStream ){

            if (m_has_type)
            {
                '_outStream << _attrName << \=\\ << toString() << \\\;';
            }
        
        }
        const ST_BoolOperator& default_instance(){

    if (!ST_BoolOperator::default_instance_)
    {
        ST_BoolOperator::default_instance_ = new ST_BoolOperator();
    }
    return *ST_BoolOperator::default_instance_;

        }
        enum Type{
            _none_ = 1,
            _equ_,
            _gte_,
            _lte_
        }

    private:
        static const string TypeStrList [];
        static ST_BoolOperator* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_ChildOrderType : public XSD::SimpleType{
    public:
        ST_ChildOrderType(){
            m_has_type = false

        }
        ST_ChildOrderType(const Type _type ){
            m_has_type = true
            m_type = _type

        }
        bool has_type(){

            return m_has_type;
        
        }
        void set_type(const Type& _type ){

            m_has_type = true;
            m_type = _type;
        
        }
        const Type& type(){

            return m_type;
        
        }
        string toString(){

        return ST_ChildOrderType::TypeStrList[m_type];
    
        }
        void clear(){

            m_has_type = false;
        
        }
        void toXml(const string _attrName , ostream _outStream ){

            if (m_has_type)
            {
                '_outStream << _attrName << \=\\ << toString() << \\\;';
            }
        
        }
        const ST_ChildOrderType& default_instance(){

    if (!ST_ChildOrderType::default_instance_)
    {
        ST_ChildOrderType::default_instance_ = new ST_ChildOrderType();
    }
    return *ST_ChildOrderType::default_instance_;

        }
        enum Type{
            _b_ = 1,
            _t_
        }

    private:
        static const string TypeStrList [];
        static ST_ChildOrderType* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_ConstraintType : public XSD::SimpleType{
    public:
        ST_ConstraintType(){
            m_has_type = false

        }
        ST_ConstraintType(const Type _type ){
            m_has_type = true
            m_type = _type

        }
        bool has_type(){

            return m_has_type;
        
        }
        void set_type(const Type& _type ){

            m_has_type = true;
            m_type = _type;
        
        }
        const Type& type(){

            return m_type;
        
        }
        string toString(){

        return ST_ConstraintType::TypeStrList[m_type];
    
        }
        void clear(){

            m_has_type = false;
        
        }
        void toXml(const string _attrName , ostream _outStream ){

            if (m_has_type)
            {
                '_outStream << _attrName << \=\\ << toString() << \\\;';
            }
        
        }
        const ST_ConstraintType& default_instance(){

    if (!ST_ConstraintType::default_instance_)
    {
        ST_ConstraintType::default_instance_ = new ST_ConstraintType();
    }
    return *ST_ConstraintType::default_instance_;

        }
        enum Type{
            _none_ = 1,
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
        }

    private:
        static const string TypeStrList [];
        static ST_ConstraintType* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_ConstraintRelationship : public XSD::SimpleType{
    public:
        ST_ConstraintRelationship(){
            m_has_type = false

        }
        ST_ConstraintRelationship(const Type _type ){
            m_has_type = true
            m_type = _type

        }
        bool has_type(){

            return m_has_type;
        
        }
        void set_type(const Type& _type ){

            m_has_type = true;
            m_type = _type;
        
        }
        const Type& type(){

            return m_type;
        
        }
        string toString(){

        return ST_ConstraintRelationship::TypeStrList[m_type];
    
        }
        void clear(){

            m_has_type = false;
        
        }
        void toXml(const string _attrName , ostream _outStream ){

            if (m_has_type)
            {
                '_outStream << _attrName << \=\\ << toString() << \\\;';
            }
        
        }
        const ST_ConstraintRelationship& default_instance(){

    if (!ST_ConstraintRelationship::default_instance_)
    {
        ST_ConstraintRelationship::default_instance_ = new ST_ConstraintRelationship();
    }
    return *ST_ConstraintRelationship::default_instance_;

        }
        enum Type{
            _self_ = 1,
            _ch_,
            _des_
        }

    private:
        static const string TypeStrList [];
        static ST_ConstraintRelationship* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_ElementType : public XSD::SimpleType{
    public:
        ST_ElementType(){
            m_has_type = false

        }
        ST_ElementType(const Type _type ){
            m_has_type = true
            m_type = _type

        }
        bool has_type(){

            return m_has_type;
        
        }
        void set_type(const Type& _type ){

            m_has_type = true;
            m_type = _type;
        
        }
        const Type& type(){

            return m_type;
        
        }
        string toString(){

        return ST_ElementType::TypeStrList[m_type];
    
        }
        void clear(){

            m_has_type = false;
        
        }
        void toXml(const string _attrName , ostream _outStream ){

            if (m_has_type)
            {
                '_outStream << _attrName << \=\\ << toString() << \\\;';
            }
        
        }
        const ST_ElementType& default_instance(){

    if (!ST_ElementType::default_instance_)
    {
        ST_ElementType::default_instance_ = new ST_ElementType();
    }
    return *ST_ElementType::default_instance_;

        }
        enum Type{
            _all_ = 1,
            _doc_,
            _node_,
            _norm_,
            _nonNorm_,
            _asst_,
            _nonAsst_,
            _parTrans_,
            _pres_,
            _sibTrans_
        }

    private:
        static const string TypeStrList [];
        static ST_ElementType* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_ElementTypes : public XSD::SimpleType{
    public:
        ST_ElementTypes(){
            m_has_ENTITIES = false
            m_ENTITIES = 

        }
        ST_ElementTypes(const XSD::ENTITIES& _ENTITIES ){
            m_has_ENTITIES = true
            m_ENTITIES = _ENTITIES

        }
        bool has_ENTITIES(){

    return m_has_ENTITIES;

        }
        void set_ENTITIES(const ENTITIES& _ENTITIES ){

    m_has_ENTITIES = true;
    m_ENTITIES = _ENTITIES;

        }
        const ENTITIES& ENTITIES(){

    return m_ENTITIES;

        }
        void clear(){

    m_has_ENTITIES = false;
    m_ENTITIES.clear();;

        }
        void toXml(const string _attrName , ostream _outStream ){

    if (m_has_ENTITIES)
    {
        _outStream << _attrName << \=\\ << m_ENTITIES << \\\;;
    }

        }
        const ST_ElementTypes& default_instance(){

    if (!ST_ElementTypes::default_instance_)
    {
        ST_ElementTypes::default_instance_ = new ST_ElementTypes();
    }
    return *ST_ElementTypes::default_instance_;

        }

    private:
        static ST_ElementTypes* default_instance_ ;
        bool m_has_ENTITIES ;
        ENTITIES m_ENTITIES ;

    }

    class ST_ParameterId : public XSD::SimpleType{
    public:
        ST_ParameterId(){
            m_has_type = false

        }
        ST_ParameterId(const Type _type ){
            m_has_type = true
            m_type = _type

        }
        bool has_type(){

            return m_has_type;
        
        }
        void set_type(const Type& _type ){

            m_has_type = true;
            m_type = _type;
        
        }
        const Type& type(){

            return m_type;
        
        }
        string toString(){

        return ST_ParameterId::TypeStrList[m_type];
    
        }
        void clear(){

            m_has_type = false;
        
        }
        void toXml(const string _attrName , ostream _outStream ){

            if (m_has_type)
            {
                '_outStream << _attrName << \=\\ << toString() << \\\;';
            }
        
        }
        const ST_ParameterId& default_instance(){

    if (!ST_ParameterId::default_instance_)
    {
        ST_ParameterId::default_instance_ = new ST_ParameterId();
    }
    return *ST_ParameterId::default_instance_;

        }
        enum Type{
            _horzAlign_ = 1,
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
        }

    private:
        static const string TypeStrList [];
        static ST_ParameterId* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_Ints : public XSD::SimpleType{
    public:
        ST_Ints(){
            m_has_ENTITIES = false
            m_ENTITIES = 

        }
        ST_Ints(const XSD::ENTITIES& _ENTITIES ){
            m_has_ENTITIES = true
            m_ENTITIES = _ENTITIES

        }
        bool has_ENTITIES(){

    return m_has_ENTITIES;

        }
        void set_ENTITIES(const ENTITIES& _ENTITIES ){

    m_has_ENTITIES = true;
    m_ENTITIES = _ENTITIES;

        }
        const ENTITIES& ENTITIES(){

    return m_ENTITIES;

        }
        void clear(){

    m_has_ENTITIES = false;
    m_ENTITIES.clear();;

        }
        void toXml(const string _attrName , ostream _outStream ){

    if (m_has_ENTITIES)
    {
        _outStream << _attrName << \=\\ << m_ENTITIES << \\\;;
    }

        }
        const ST_Ints& default_instance(){

    if (!ST_Ints::default_instance_)
    {
        ST_Ints::default_instance_ = new ST_Ints();
    }
    return *ST_Ints::default_instance_;

        }

    private:
        static ST_Ints* default_instance_ ;
        bool m_has_ENTITIES ;
        ENTITIES m_ENTITIES ;

    }

    class ST_UnsignedInts : public XSD::SimpleType{
    public:
        ST_UnsignedInts(){
            m_has_ENTITIES = false
            m_ENTITIES = 

        }
        ST_UnsignedInts(const XSD::ENTITIES& _ENTITIES ){
            m_has_ENTITIES = true
            m_ENTITIES = _ENTITIES

        }
        bool has_ENTITIES(){

    return m_has_ENTITIES;

        }
        void set_ENTITIES(const ENTITIES& _ENTITIES ){

    m_has_ENTITIES = true;
    m_ENTITIES = _ENTITIES;

        }
        const ENTITIES& ENTITIES(){

    return m_ENTITIES;

        }
        void clear(){

    m_has_ENTITIES = false;
    m_ENTITIES.clear();;

        }
        void toXml(const string _attrName , ostream _outStream ){

    if (m_has_ENTITIES)
    {
        _outStream << _attrName << \=\\ << m_ENTITIES << \\\;;
    }

        }
        const ST_UnsignedInts& default_instance(){

    if (!ST_UnsignedInts::default_instance_)
    {
        ST_UnsignedInts::default_instance_ = new ST_UnsignedInts();
    }
    return *ST_UnsignedInts::default_instance_;

        }

    private:
        static ST_UnsignedInts* default_instance_ ;
        bool m_has_ENTITIES ;
        ENTITIES m_ENTITIES ;

    }

    class ST_Booleans : public XSD::SimpleType{
    public:
        ST_Booleans(){
            m_has_ENTITIES = false
            m_ENTITIES = 

        }
        ST_Booleans(const XSD::ENTITIES& _ENTITIES ){
            m_has_ENTITIES = true
            m_ENTITIES = _ENTITIES

        }
        bool has_ENTITIES(){

    return m_has_ENTITIES;

        }
        void set_ENTITIES(const ENTITIES& _ENTITIES ){

    m_has_ENTITIES = true;
    m_ENTITIES = _ENTITIES;

        }
        const ENTITIES& ENTITIES(){

    return m_ENTITIES;

        }
        void clear(){

    m_has_ENTITIES = false;
    m_ENTITIES.clear();;

        }
        void toXml(const string _attrName , ostream _outStream ){

    if (m_has_ENTITIES)
    {
        _outStream << _attrName << \=\\ << m_ENTITIES << \\\;;
    }

        }
        const ST_Booleans& default_instance(){

    if (!ST_Booleans::default_instance_)
    {
        ST_Booleans::default_instance_ = new ST_Booleans();
    }
    return *ST_Booleans::default_instance_;

        }

    private:
        static ST_Booleans* default_instance_ ;
        bool m_has_ENTITIES ;
        ENTITIES m_ENTITIES ;

    }

    class ST_FunctionType : public XSD::SimpleType{
    public:
        ST_FunctionType(){
            m_has_type = false

        }
        ST_FunctionType(const Type _type ){
            m_has_type = true
            m_type = _type

        }
        bool has_type(){

            return m_has_type;
        
        }
        void set_type(const Type& _type ){

            m_has_type = true;
            m_type = _type;
        
        }
        const Type& type(){

            return m_type;
        
        }
        string toString(){

        return ST_FunctionType::TypeStrList[m_type];
    
        }
        void clear(){

            m_has_type = false;
        
        }
        void toXml(const string _attrName , ostream _outStream ){

            if (m_has_type)
            {
                '_outStream << _attrName << \=\\ << toString() << \\\;';
            }
        
        }
        const ST_FunctionType& default_instance(){

    if (!ST_FunctionType::default_instance_)
    {
        ST_FunctionType::default_instance_ = new ST_FunctionType();
    }
    return *ST_FunctionType::default_instance_;

        }
        enum Type{
            _cnt_ = 1,
            _pos_,
            _revPos_,
            _posEven_,
            _posOdd_,
            _var_,
            _depth_,
            _maxDepth_
        }

    private:
        static const string TypeStrList [];
        static ST_FunctionType* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_FunctionOperator : public XSD::SimpleType{
    public:
        ST_FunctionOperator(){
            m_has_type = false

        }
        ST_FunctionOperator(const Type _type ){
            m_has_type = true
            m_type = _type

        }
        bool has_type(){

            return m_has_type;
        
        }
        void set_type(const Type& _type ){

            m_has_type = true;
            m_type = _type;
        
        }
        const Type& type(){

            return m_type;
        
        }
        string toString(){

        return ST_FunctionOperator::TypeStrList[m_type];
    
        }
        void clear(){

            m_has_type = false;
        
        }
        void toXml(const string _attrName , ostream _outStream ){

            if (m_has_type)
            {
                '_outStream << _attrName << \=\\ << toString() << \\\;';
            }
        
        }
        const ST_FunctionOperator& default_instance(){

    if (!ST_FunctionOperator::default_instance_)
    {
        ST_FunctionOperator::default_instance_ = new ST_FunctionOperator();
    }
    return *ST_FunctionOperator::default_instance_;

        }
        enum Type{
            _equ_ = 1,
            _neq_,
            _gt_,
            _lt_,
            _gte_,
            _lte_
        }

    private:
        static const string TypeStrList [];
        static ST_FunctionOperator* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_DiagramHorizontalAlignment : public XSD::SimpleType{
    public:
        ST_DiagramHorizontalAlignment(){
            m_has_type = false

        }
        ST_DiagramHorizontalAlignment(const Type _type ){
            m_has_type = true
            m_type = _type

        }
        bool has_type(){

            return m_has_type;
        
        }
        void set_type(const Type& _type ){

            m_has_type = true;
            m_type = _type;
        
        }
        const Type& type(){

            return m_type;
        
        }
        string toString(){

        return ST_DiagramHorizontalAlignment::TypeStrList[m_type];
    
        }
        void clear(){

            m_has_type = false;
        
        }
        void toXml(const string _attrName , ostream _outStream ){

            if (m_has_type)
            {
                '_outStream << _attrName << \=\\ << toString() << \\\;';
            }
        
        }
        const ST_DiagramHorizontalAlignment& default_instance(){

    if (!ST_DiagramHorizontalAlignment::default_instance_)
    {
        ST_DiagramHorizontalAlignment::default_instance_ = new ST_DiagramHorizontalAlignment();
    }
    return *ST_DiagramHorizontalAlignment::default_instance_;

        }
        enum Type{
            _l_ = 1,
            _ctr_,
            _r_,
            _none_
        }

    private:
        static const string TypeStrList [];
        static ST_DiagramHorizontalAlignment* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_VerticalAlignment : public XSD::SimpleType{
    public:
        ST_VerticalAlignment(){
            m_has_type = false

        }
        ST_VerticalAlignment(const Type _type ){
            m_has_type = true
            m_type = _type

        }
        bool has_type(){

            return m_has_type;
        
        }
        void set_type(const Type& _type ){

            m_has_type = true;
            m_type = _type;
        
        }
        const Type& type(){

            return m_type;
        
        }
        string toString(){

        return ST_VerticalAlignment::TypeStrList[m_type];
    
        }
        void clear(){

            m_has_type = false;
        
        }
        void toXml(const string _attrName , ostream _outStream ){

            if (m_has_type)
            {
                '_outStream << _attrName << \=\\ << toString() << \\\;';
            }
        
        }
        const ST_VerticalAlignment& default_instance(){

    if (!ST_VerticalAlignment::default_instance_)
    {
        ST_VerticalAlignment::default_instance_ = new ST_VerticalAlignment();
    }
    return *ST_VerticalAlignment::default_instance_;

        }
        enum Type{
            _t_ = 1,
            _mid_,
            _b_,
            _none_
        }

    private:
        static const string TypeStrList [];
        static ST_VerticalAlignment* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_ChildDirection : public XSD::SimpleType{
    public:
        ST_ChildDirection(){
            m_has_type = false

        }
        ST_ChildDirection(const Type _type ){
            m_has_type = true
            m_type = _type

        }
        bool has_type(){

            return m_has_type;
        
        }
        void set_type(const Type& _type ){

            m_has_type = true;
            m_type = _type;
        
        }
        const Type& type(){

            return m_type;
        
        }
        string toString(){

        return ST_ChildDirection::TypeStrList[m_type];
    
        }
        void clear(){

            m_has_type = false;
        
        }
        void toXml(const string _attrName , ostream _outStream ){

            if (m_has_type)
            {
                '_outStream << _attrName << \=\\ << toString() << \\\;';
            }
        
        }
        const ST_ChildDirection& default_instance(){

    if (!ST_ChildDirection::default_instance_)
    {
        ST_ChildDirection::default_instance_ = new ST_ChildDirection();
    }
    return *ST_ChildDirection::default_instance_;

        }
        enum Type{
            _horz_ = 1,
            _vert_
        }

    private:
        static const string TypeStrList [];
        static ST_ChildDirection* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_ChildAlignment : public XSD::SimpleType{
    public:
        ST_ChildAlignment(){
            m_has_type = false

        }
        ST_ChildAlignment(const Type _type ){
            m_has_type = true
            m_type = _type

        }
        bool has_type(){

            return m_has_type;
        
        }
        void set_type(const Type& _type ){

            m_has_type = true;
            m_type = _type;
        
        }
        const Type& type(){

            return m_type;
        
        }
        string toString(){

        return ST_ChildAlignment::TypeStrList[m_type];
    
        }
        void clear(){

            m_has_type = false;
        
        }
        void toXml(const string _attrName , ostream _outStream ){

            if (m_has_type)
            {
                '_outStream << _attrName << \=\\ << toString() << \\\;';
            }
        
        }
        const ST_ChildAlignment& default_instance(){

    if (!ST_ChildAlignment::default_instance_)
    {
        ST_ChildAlignment::default_instance_ = new ST_ChildAlignment();
    }
    return *ST_ChildAlignment::default_instance_;

        }
        enum Type{
            _t_ = 1,
            _b_,
            _l_,
            _r_
        }

    private:
        static const string TypeStrList [];
        static ST_ChildAlignment* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_SecondaryChildAlignment : public XSD::SimpleType{
    public:
        ST_SecondaryChildAlignment(){
            m_has_type = false

        }
        ST_SecondaryChildAlignment(const Type _type ){
            m_has_type = true
            m_type = _type

        }
        bool has_type(){

            return m_has_type;
        
        }
        void set_type(const Type& _type ){

            m_has_type = true;
            m_type = _type;
        
        }
        const Type& type(){

            return m_type;
        
        }
        string toString(){

        return ST_SecondaryChildAlignment::TypeStrList[m_type];
    
        }
        void clear(){

            m_has_type = false;
        
        }
        void toXml(const string _attrName , ostream _outStream ){

            if (m_has_type)
            {
                '_outStream << _attrName << \=\\ << toString() << \\\;';
            }
        
        }
        const ST_SecondaryChildAlignment& default_instance(){

    if (!ST_SecondaryChildAlignment::default_instance_)
    {
        ST_SecondaryChildAlignment::default_instance_ = new ST_SecondaryChildAlignment();
    }
    return *ST_SecondaryChildAlignment::default_instance_;

        }
        enum Type{
            _none_ = 1,
            _t_,
            _b_,
            _l_,
            _r_
        }

    private:
        static const string TypeStrList [];
        static ST_SecondaryChildAlignment* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_LinearDirection : public XSD::SimpleType{
    public:
        ST_LinearDirection(){
            m_has_type = false

        }
        ST_LinearDirection(const Type _type ){
            m_has_type = true
            m_type = _type

        }
        bool has_type(){

            return m_has_type;
        
        }
        void set_type(const Type& _type ){

            m_has_type = true;
            m_type = _type;
        
        }
        const Type& type(){

            return m_type;
        
        }
        string toString(){

        return ST_LinearDirection::TypeStrList[m_type];
    
        }
        void clear(){

            m_has_type = false;
        
        }
        void toXml(const string _attrName , ostream _outStream ){

            if (m_has_type)
            {
                '_outStream << _attrName << \=\\ << toString() << \\\;';
            }
        
        }
        const ST_LinearDirection& default_instance(){

    if (!ST_LinearDirection::default_instance_)
    {
        ST_LinearDirection::default_instance_ = new ST_LinearDirection();
    }
    return *ST_LinearDirection::default_instance_;

        }
        enum Type{
            _fromL_ = 1,
            _fromR_,
            _fromT_,
            _fromB_
        }

    private:
        static const string TypeStrList [];
        static ST_LinearDirection* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_SecondaryLinearDirection : public XSD::SimpleType{
    public:
        ST_SecondaryLinearDirection(){
            m_has_type = false

        }
        ST_SecondaryLinearDirection(const Type _type ){
            m_has_type = true
            m_type = _type

        }
        bool has_type(){

            return m_has_type;
        
        }
        void set_type(const Type& _type ){

            m_has_type = true;
            m_type = _type;
        
        }
        const Type& type(){

            return m_type;
        
        }
        string toString(){

        return ST_SecondaryLinearDirection::TypeStrList[m_type];
    
        }
        void clear(){

            m_has_type = false;
        
        }
        void toXml(const string _attrName , ostream _outStream ){

            if (m_has_type)
            {
                '_outStream << _attrName << \=\\ << toString() << \\\;';
            }
        
        }
        const ST_SecondaryLinearDirection& default_instance(){

    if (!ST_SecondaryLinearDirection::default_instance_)
    {
        ST_SecondaryLinearDirection::default_instance_ = new ST_SecondaryLinearDirection();
    }
    return *ST_SecondaryLinearDirection::default_instance_;

        }
        enum Type{
            _none_ = 1,
            _fromL_,
            _fromR_,
            _fromT_,
            _fromB_
        }

    private:
        static const string TypeStrList [];
        static ST_SecondaryLinearDirection* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_StartingElement : public XSD::SimpleType{
    public:
        ST_StartingElement(){
            m_has_type = false

        }
        ST_StartingElement(const Type _type ){
            m_has_type = true
            m_type = _type

        }
        bool has_type(){

            return m_has_type;
        
        }
        void set_type(const Type& _type ){

            m_has_type = true;
            m_type = _type;
        
        }
        const Type& type(){

            return m_type;
        
        }
        string toString(){

        return ST_StartingElement::TypeStrList[m_type];
    
        }
        void clear(){

            m_has_type = false;
        
        }
        void toXml(const string _attrName , ostream _outStream ){

            if (m_has_type)
            {
                '_outStream << _attrName << \=\\ << toString() << \\\;';
            }
        
        }
        const ST_StartingElement& default_instance(){

    if (!ST_StartingElement::default_instance_)
    {
        ST_StartingElement::default_instance_ = new ST_StartingElement();
    }
    return *ST_StartingElement::default_instance_;

        }
        enum Type{
            _node_ = 1,
            _trans_
        }

    private:
        static const string TypeStrList [];
        static ST_StartingElement* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_RotationPath : public XSD::SimpleType{
    public:
        ST_RotationPath(){
            m_has_type = false

        }
        ST_RotationPath(const Type _type ){
            m_has_type = true
            m_type = _type

        }
        bool has_type(){

            return m_has_type;
        
        }
        void set_type(const Type& _type ){

            m_has_type = true;
            m_type = _type;
        
        }
        const Type& type(){

            return m_type;
        
        }
        string toString(){

        return ST_RotationPath::TypeStrList[m_type];
    
        }
        void clear(){

            m_has_type = false;
        
        }
        void toXml(const string _attrName , ostream _outStream ){

            if (m_has_type)
            {
                '_outStream << _attrName << \=\\ << toString() << \\\;';
            }
        
        }
        const ST_RotationPath& default_instance(){

    if (!ST_RotationPath::default_instance_)
    {
        ST_RotationPath::default_instance_ = new ST_RotationPath();
    }
    return *ST_RotationPath::default_instance_;

        }
        enum Type{
            _none_ = 1,
            _alongPath_
        }

    private:
        static const string TypeStrList [];
        static ST_RotationPath* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_CenterShapeMapping : public XSD::SimpleType{
    public:
        ST_CenterShapeMapping(){
            m_has_type = false

        }
        ST_CenterShapeMapping(const Type _type ){
            m_has_type = true
            m_type = _type

        }
        bool has_type(){

            return m_has_type;
        
        }
        void set_type(const Type& _type ){

            m_has_type = true;
            m_type = _type;
        
        }
        const Type& type(){

            return m_type;
        
        }
        string toString(){

        return ST_CenterShapeMapping::TypeStrList[m_type];
    
        }
        void clear(){

            m_has_type = false;
        
        }
        void toXml(const string _attrName , ostream _outStream ){

            if (m_has_type)
            {
                '_outStream << _attrName << \=\\ << toString() << \\\;';
            }
        
        }
        const ST_CenterShapeMapping& default_instance(){

    if (!ST_CenterShapeMapping::default_instance_)
    {
        ST_CenterShapeMapping::default_instance_ = new ST_CenterShapeMapping();
    }
    return *ST_CenterShapeMapping::default_instance_;

        }
        enum Type{
            _none_ = 1,
            _fNode_
        }

    private:
        static const string TypeStrList [];
        static ST_CenterShapeMapping* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_BendPoint : public XSD::SimpleType{
    public:
        ST_BendPoint(){
            m_has_type = false

        }
        ST_BendPoint(const Type _type ){
            m_has_type = true
            m_type = _type

        }
        bool has_type(){

            return m_has_type;
        
        }
        void set_type(const Type& _type ){

            m_has_type = true;
            m_type = _type;
        
        }
        const Type& type(){

            return m_type;
        
        }
        string toString(){

        return ST_BendPoint::TypeStrList[m_type];
    
        }
        void clear(){

            m_has_type = false;
        
        }
        void toXml(const string _attrName , ostream _outStream ){

            if (m_has_type)
            {
                '_outStream << _attrName << \=\\ << toString() << \\\;';
            }
        
        }
        const ST_BendPoint& default_instance(){

    if (!ST_BendPoint::default_instance_)
    {
        ST_BendPoint::default_instance_ = new ST_BendPoint();
    }
    return *ST_BendPoint::default_instance_;

        }
        enum Type{
            _beg_ = 1,
            _def_,
            _end_
        }

    private:
        static const string TypeStrList [];
        static ST_BendPoint* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_ConnectorRouting : public XSD::SimpleType{
    public:
        ST_ConnectorRouting(){
            m_has_type = false

        }
        ST_ConnectorRouting(const Type _type ){
            m_has_type = true
            m_type = _type

        }
        bool has_type(){

            return m_has_type;
        
        }
        void set_type(const Type& _type ){

            m_has_type = true;
            m_type = _type;
        
        }
        const Type& type(){

            return m_type;
        
        }
        string toString(){

        return ST_ConnectorRouting::TypeStrList[m_type];
    
        }
        void clear(){

            m_has_type = false;
        
        }
        void toXml(const string _attrName , ostream _outStream ){

            if (m_has_type)
            {
                '_outStream << _attrName << \=\\ << toString() << \\\;';
            }
        
        }
        const ST_ConnectorRouting& default_instance(){

    if (!ST_ConnectorRouting::default_instance_)
    {
        ST_ConnectorRouting::default_instance_ = new ST_ConnectorRouting();
    }
    return *ST_ConnectorRouting::default_instance_;

        }
        enum Type{
            _stra_ = 1,
            _bend_,
            _curve_,
            _longCurve_
        }

    private:
        static const string TypeStrList [];
        static ST_ConnectorRouting* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_ArrowheadStyle : public XSD::SimpleType{
    public:
        ST_ArrowheadStyle(){
            m_has_type = false

        }
        ST_ArrowheadStyle(const Type _type ){
            m_has_type = true
            m_type = _type

        }
        bool has_type(){

            return m_has_type;
        
        }
        void set_type(const Type& _type ){

            m_has_type = true;
            m_type = _type;
        
        }
        const Type& type(){

            return m_type;
        
        }
        string toString(){

        return ST_ArrowheadStyle::TypeStrList[m_type];
    
        }
        void clear(){

            m_has_type = false;
        
        }
        void toXml(const string _attrName , ostream _outStream ){

            if (m_has_type)
            {
                '_outStream << _attrName << \=\\ << toString() << \\\;';
            }
        
        }
        const ST_ArrowheadStyle& default_instance(){

    if (!ST_ArrowheadStyle::default_instance_)
    {
        ST_ArrowheadStyle::default_instance_ = new ST_ArrowheadStyle();
    }
    return *ST_ArrowheadStyle::default_instance_;

        }
        enum Type{
            _auto_ = 1,
            _arr_,
            _noArr_
        }

    private:
        static const string TypeStrList [];
        static ST_ArrowheadStyle* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_ConnectorDimension : public XSD::SimpleType{
    public:
        ST_ConnectorDimension(){
            m_has_type = false

        }
        ST_ConnectorDimension(const Type _type ){
            m_has_type = true
            m_type = _type

        }
        bool has_type(){

            return m_has_type;
        
        }
        void set_type(const Type& _type ){

            m_has_type = true;
            m_type = _type;
        
        }
        const Type& type(){

            return m_type;
        
        }
        string toString(){

        return ST_ConnectorDimension::TypeStrList[m_type];
    
        }
        void clear(){

            m_has_type = false;
        
        }
        void toXml(const string _attrName , ostream _outStream ){

            if (m_has_type)
            {
                '_outStream << _attrName << \=\\ << toString() << \\\;';
            }
        
        }
        const ST_ConnectorDimension& default_instance(){

    if (!ST_ConnectorDimension::default_instance_)
    {
        ST_ConnectorDimension::default_instance_ = new ST_ConnectorDimension();
    }
    return *ST_ConnectorDimension::default_instance_;

        }
        enum Type{
            _1D_ = 1,
            _2D_,
            _cust_
        }

    private:
        static const string TypeStrList [];
        static ST_ConnectorDimension* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_ConnectorPoint : public XSD::SimpleType{
    public:
        ST_ConnectorPoint(){
            m_has_type = false

        }
        ST_ConnectorPoint(const Type _type ){
            m_has_type = true
            m_type = _type

        }
        bool has_type(){

            return m_has_type;
        
        }
        void set_type(const Type& _type ){

            m_has_type = true;
            m_type = _type;
        
        }
        const Type& type(){

            return m_type;
        
        }
        string toString(){

        return ST_ConnectorPoint::TypeStrList[m_type];
    
        }
        void clear(){

            m_has_type = false;
        
        }
        void toXml(const string _attrName , ostream _outStream ){

            if (m_has_type)
            {
                '_outStream << _attrName << \=\\ << toString() << \\\;';
            }
        
        }
        const ST_ConnectorPoint& default_instance(){

    if (!ST_ConnectorPoint::default_instance_)
    {
        ST_ConnectorPoint::default_instance_ = new ST_ConnectorPoint();
    }
    return *ST_ConnectorPoint::default_instance_;

        }
        enum Type{
            _auto_ = 1,
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
        }

    private:
        static const string TypeStrList [];
        static ST_ConnectorPoint* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_NodeHorizontalAlignment : public XSD::SimpleType{
    public:
        ST_NodeHorizontalAlignment(){
            m_has_type = false

        }
        ST_NodeHorizontalAlignment(const Type _type ){
            m_has_type = true
            m_type = _type

        }
        bool has_type(){

            return m_has_type;
        
        }
        void set_type(const Type& _type ){

            m_has_type = true;
            m_type = _type;
        
        }
        const Type& type(){

            return m_type;
        
        }
        string toString(){

        return ST_NodeHorizontalAlignment::TypeStrList[m_type];
    
        }
        void clear(){

            m_has_type = false;
        
        }
        void toXml(const string _attrName , ostream _outStream ){

            if (m_has_type)
            {
                '_outStream << _attrName << \=\\ << toString() << \\\;';
            }
        
        }
        const ST_NodeHorizontalAlignment& default_instance(){

    if (!ST_NodeHorizontalAlignment::default_instance_)
    {
        ST_NodeHorizontalAlignment::default_instance_ = new ST_NodeHorizontalAlignment();
    }
    return *ST_NodeHorizontalAlignment::default_instance_;

        }
        enum Type{
            _l_ = 1,
            _ctr_,
            _r_
        }

    private:
        static const string TypeStrList [];
        static ST_NodeHorizontalAlignment* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_NodeVerticalAlignment : public XSD::SimpleType{
    public:
        ST_NodeVerticalAlignment(){
            m_has_type = false

        }
        ST_NodeVerticalAlignment(const Type _type ){
            m_has_type = true
            m_type = _type

        }
        bool has_type(){

            return m_has_type;
        
        }
        void set_type(const Type& _type ){

            m_has_type = true;
            m_type = _type;
        
        }
        const Type& type(){

            return m_type;
        
        }
        string toString(){

        return ST_NodeVerticalAlignment::TypeStrList[m_type];
    
        }
        void clear(){

            m_has_type = false;
        
        }
        void toXml(const string _attrName , ostream _outStream ){

            if (m_has_type)
            {
                '_outStream << _attrName << \=\\ << toString() << \\\;';
            }
        
        }
        const ST_NodeVerticalAlignment& default_instance(){

    if (!ST_NodeVerticalAlignment::default_instance_)
    {
        ST_NodeVerticalAlignment::default_instance_ = new ST_NodeVerticalAlignment();
    }
    return *ST_NodeVerticalAlignment::default_instance_;

        }
        enum Type{
            _t_ = 1,
            _mid_,
            _b_
        }

    private:
        static const string TypeStrList [];
        static ST_NodeVerticalAlignment* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_FallbackDimension : public XSD::SimpleType{
    public:
        ST_FallbackDimension(){
            m_has_type = false

        }
        ST_FallbackDimension(const Type _type ){
            m_has_type = true
            m_type = _type

        }
        bool has_type(){

            return m_has_type;
        
        }
        void set_type(const Type& _type ){

            m_has_type = true;
            m_type = _type;
        
        }
        const Type& type(){

            return m_type;
        
        }
        string toString(){

        return ST_FallbackDimension::TypeStrList[m_type];
    
        }
        void clear(){

            m_has_type = false;
        
        }
        void toXml(const string _attrName , ostream _outStream ){

            if (m_has_type)
            {
                '_outStream << _attrName << \=\\ << toString() << \\\;';
            }
        
        }
        const ST_FallbackDimension& default_instance(){

    if (!ST_FallbackDimension::default_instance_)
    {
        ST_FallbackDimension::default_instance_ = new ST_FallbackDimension();
    }
    return *ST_FallbackDimension::default_instance_;

        }
        enum Type{
            _1D_ = 1,
            _2D_
        }

    private:
        static const string TypeStrList [];
        static ST_FallbackDimension* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_TextDirection : public XSD::SimpleType{
    public:
        ST_TextDirection(){
            m_has_type = false

        }
        ST_TextDirection(const Type _type ){
            m_has_type = true
            m_type = _type

        }
        bool has_type(){

            return m_has_type;
        
        }
        void set_type(const Type& _type ){

            m_has_type = true;
            m_type = _type;
        
        }
        const Type& type(){

            return m_type;
        
        }
        string toString(){

        return ST_TextDirection::TypeStrList[m_type];
    
        }
        void clear(){

            m_has_type = false;
        
        }
        void toXml(const string _attrName , ostream _outStream ){

            if (m_has_type)
            {
                '_outStream << _attrName << \=\\ << toString() << \\\;';
            }
        
        }
        const ST_TextDirection& default_instance(){

    if (!ST_TextDirection::default_instance_)
    {
        ST_TextDirection::default_instance_ = new ST_TextDirection();
    }
    return *ST_TextDirection::default_instance_;

        }
        enum Type{
            _fromT_ = 1,
            _fromB_
        }

    private:
        static const string TypeStrList [];
        static ST_TextDirection* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_PyramidAccentPosition : public XSD::SimpleType{
    public:
        ST_PyramidAccentPosition(){
            m_has_type = false

        }
        ST_PyramidAccentPosition(const Type _type ){
            m_has_type = true
            m_type = _type

        }
        bool has_type(){

            return m_has_type;
        
        }
        void set_type(const Type& _type ){

            m_has_type = true;
            m_type = _type;
        
        }
        const Type& type(){

            return m_type;
        
        }
        string toString(){

        return ST_PyramidAccentPosition::TypeStrList[m_type];
    
        }
        void clear(){

            m_has_type = false;
        
        }
        void toXml(const string _attrName , ostream _outStream ){

            if (m_has_type)
            {
                '_outStream << _attrName << \=\\ << toString() << \\\;';
            }
        
        }
        const ST_PyramidAccentPosition& default_instance(){

    if (!ST_PyramidAccentPosition::default_instance_)
    {
        ST_PyramidAccentPosition::default_instance_ = new ST_PyramidAccentPosition();
    }
    return *ST_PyramidAccentPosition::default_instance_;

        }
        enum Type{
            _bef_ = 1,
            _aft_
        }

    private:
        static const string TypeStrList [];
        static ST_PyramidAccentPosition* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_PyramidAccentTextMargin : public XSD::SimpleType{
    public:
        ST_PyramidAccentTextMargin(){
            m_has_type = false

        }
        ST_PyramidAccentTextMargin(const Type _type ){
            m_has_type = true
            m_type = _type

        }
        bool has_type(){

            return m_has_type;
        
        }
        void set_type(const Type& _type ){

            m_has_type = true;
            m_type = _type;
        
        }
        const Type& type(){

            return m_type;
        
        }
        string toString(){

        return ST_PyramidAccentTextMargin::TypeStrList[m_type];
    
        }
        void clear(){

            m_has_type = false;
        
        }
        void toXml(const string _attrName , ostream _outStream ){

            if (m_has_type)
            {
                '_outStream << _attrName << \=\\ << toString() << \\\;';
            }
        
        }
        const ST_PyramidAccentTextMargin& default_instance(){

    if (!ST_PyramidAccentTextMargin::default_instance_)
    {
        ST_PyramidAccentTextMargin::default_instance_ = new ST_PyramidAccentTextMargin();
    }
    return *ST_PyramidAccentTextMargin::default_instance_;

        }
        enum Type{
            _step_ = 1,
            _stack_
        }

    private:
        static const string TypeStrList [];
        static ST_PyramidAccentTextMargin* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_TextBlockDirection : public XSD::SimpleType{
    public:
        ST_TextBlockDirection(){
            m_has_type = false

        }
        ST_TextBlockDirection(const Type _type ){
            m_has_type = true
            m_type = _type

        }
        bool has_type(){

            return m_has_type;
        
        }
        void set_type(const Type& _type ){

            m_has_type = true;
            m_type = _type;
        
        }
        const Type& type(){

            return m_type;
        
        }
        string toString(){

        return ST_TextBlockDirection::TypeStrList[m_type];
    
        }
        void clear(){

            m_has_type = false;
        
        }
        void toXml(const string _attrName , ostream _outStream ){

            if (m_has_type)
            {
                '_outStream << _attrName << \=\\ << toString() << \\\;';
            }
        
        }
        const ST_TextBlockDirection& default_instance(){

    if (!ST_TextBlockDirection::default_instance_)
    {
        ST_TextBlockDirection::default_instance_ = new ST_TextBlockDirection();
    }
    return *ST_TextBlockDirection::default_instance_;

        }
        enum Type{
            _horz_ = 1,
            _vert_
        }

    private:
        static const string TypeStrList [];
        static ST_TextBlockDirection* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_TextAnchorHorizontal : public XSD::SimpleType{
    public:
        ST_TextAnchorHorizontal(){
            m_has_type = false

        }
        ST_TextAnchorHorizontal(const Type _type ){
            m_has_type = true
            m_type = _type

        }
        bool has_type(){

            return m_has_type;
        
        }
        void set_type(const Type& _type ){

            m_has_type = true;
            m_type = _type;
        
        }
        const Type& type(){

            return m_type;
        
        }
        string toString(){

        return ST_TextAnchorHorizontal::TypeStrList[m_type];
    
        }
        void clear(){

            m_has_type = false;
        
        }
        void toXml(const string _attrName , ostream _outStream ){

            if (m_has_type)
            {
                '_outStream << _attrName << \=\\ << toString() << \\\;';
            }
        
        }
        const ST_TextAnchorHorizontal& default_instance(){

    if (!ST_TextAnchorHorizontal::default_instance_)
    {
        ST_TextAnchorHorizontal::default_instance_ = new ST_TextAnchorHorizontal();
    }
    return *ST_TextAnchorHorizontal::default_instance_;

        }
        enum Type{
            _none_ = 1,
            _ctr_
        }

    private:
        static const string TypeStrList [];
        static ST_TextAnchorHorizontal* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_TextAnchorVertical : public XSD::SimpleType{
    public:
        ST_TextAnchorVertical(){
            m_has_type = false

        }
        ST_TextAnchorVertical(const Type _type ){
            m_has_type = true
            m_type = _type

        }
        bool has_type(){

            return m_has_type;
        
        }
        void set_type(const Type& _type ){

            m_has_type = true;
            m_type = _type;
        
        }
        const Type& type(){

            return m_type;
        
        }
        string toString(){

        return ST_TextAnchorVertical::TypeStrList[m_type];
    
        }
        void clear(){

            m_has_type = false;
        
        }
        void toXml(const string _attrName , ostream _outStream ){

            if (m_has_type)
            {
                '_outStream << _attrName << \=\\ << toString() << \\\;';
            }
        
        }
        const ST_TextAnchorVertical& default_instance(){

    if (!ST_TextAnchorVertical::default_instance_)
    {
        ST_TextAnchorVertical::default_instance_ = new ST_TextAnchorVertical();
    }
    return *ST_TextAnchorVertical::default_instance_;

        }
        enum Type{
            _t_ = 1,
            _mid_,
            _b_
        }

    private:
        static const string TypeStrList [];
        static ST_TextAnchorVertical* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_DiagramTextAlignment : public XSD::SimpleType{
    public:
        ST_DiagramTextAlignment(){
            m_has_type = false

        }
        ST_DiagramTextAlignment(const Type _type ){
            m_has_type = true
            m_type = _type

        }
        bool has_type(){

            return m_has_type;
        
        }
        void set_type(const Type& _type ){

            m_has_type = true;
            m_type = _type;
        
        }
        const Type& type(){

            return m_type;
        
        }
        string toString(){

        return ST_DiagramTextAlignment::TypeStrList[m_type];
    
        }
        void clear(){

            m_has_type = false;
        
        }
        void toXml(const string _attrName , ostream _outStream ){

            if (m_has_type)
            {
                '_outStream << _attrName << \=\\ << toString() << \\\;';
            }
        
        }
        const ST_DiagramTextAlignment& default_instance(){

    if (!ST_DiagramTextAlignment::default_instance_)
    {
        ST_DiagramTextAlignment::default_instance_ = new ST_DiagramTextAlignment();
    }
    return *ST_DiagramTextAlignment::default_instance_;

        }
        enum Type{
            _l_ = 1,
            _ctr_,
            _r_
        }

    private:
        static const string TypeStrList [];
        static ST_DiagramTextAlignment* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_AutoTextRotation : public XSD::SimpleType{
    public:
        ST_AutoTextRotation(){
            m_has_type = false

        }
        ST_AutoTextRotation(const Type _type ){
            m_has_type = true
            m_type = _type

        }
        bool has_type(){

            return m_has_type;
        
        }
        void set_type(const Type& _type ){

            m_has_type = true;
            m_type = _type;
        
        }
        const Type& type(){

            return m_type;
        
        }
        string toString(){

        return ST_AutoTextRotation::TypeStrList[m_type];
    
        }
        void clear(){

            m_has_type = false;
        
        }
        void toXml(const string _attrName , ostream _outStream ){

            if (m_has_type)
            {
                '_outStream << _attrName << \=\\ << toString() << \\\;';
            }
        
        }
        const ST_AutoTextRotation& default_instance(){

    if (!ST_AutoTextRotation::default_instance_)
    {
        ST_AutoTextRotation::default_instance_ = new ST_AutoTextRotation();
    }
    return *ST_AutoTextRotation::default_instance_;

        }
        enum Type{
            _none_ = 1,
            _upr_,
            _grav_
        }

    private:
        static const string TypeStrList [];
        static ST_AutoTextRotation* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_GrowDirection : public XSD::SimpleType{
    public:
        ST_GrowDirection(){
            m_has_type = false

        }
        ST_GrowDirection(const Type _type ){
            m_has_type = true
            m_type = _type

        }
        bool has_type(){

            return m_has_type;
        
        }
        void set_type(const Type& _type ){

            m_has_type = true;
            m_type = _type;
        
        }
        const Type& type(){

            return m_type;
        
        }
        string toString(){

        return ST_GrowDirection::TypeStrList[m_type];
    
        }
        void clear(){

            m_has_type = false;
        
        }
        void toXml(const string _attrName , ostream _outStream ){

            if (m_has_type)
            {
                '_outStream << _attrName << \=\\ << toString() << \\\;';
            }
        
        }
        const ST_GrowDirection& default_instance(){

    if (!ST_GrowDirection::default_instance_)
    {
        ST_GrowDirection::default_instance_ = new ST_GrowDirection();
    }
    return *ST_GrowDirection::default_instance_;

        }
        enum Type{
            _tL_ = 1,
            _tR_,
            _bL_,
            _bR_
        }

    private:
        static const string TypeStrList [];
        static ST_GrowDirection* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_FlowDirection : public XSD::SimpleType{
    public:
        ST_FlowDirection(){
            m_has_type = false

        }
        ST_FlowDirection(const Type _type ){
            m_has_type = true
            m_type = _type

        }
        bool has_type(){

            return m_has_type;
        
        }
        void set_type(const Type& _type ){

            m_has_type = true;
            m_type = _type;
        
        }
        const Type& type(){

            return m_type;
        
        }
        string toString(){

        return ST_FlowDirection::TypeStrList[m_type];
    
        }
        void clear(){

            m_has_type = false;
        
        }
        void toXml(const string _attrName , ostream _outStream ){

            if (m_has_type)
            {
                '_outStream << _attrName << \=\\ << toString() << \\\;';
            }
        
        }
        const ST_FlowDirection& default_instance(){

    if (!ST_FlowDirection::default_instance_)
    {
        ST_FlowDirection::default_instance_ = new ST_FlowDirection();
    }
    return *ST_FlowDirection::default_instance_;

        }
        enum Type{
            _row_ = 1,
            _col_
        }

    private:
        static const string TypeStrList [];
        static ST_FlowDirection* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_ContinueDirection : public XSD::SimpleType{
    public:
        ST_ContinueDirection(){
            m_has_type = false

        }
        ST_ContinueDirection(const Type _type ){
            m_has_type = true
            m_type = _type

        }
        bool has_type(){

            return m_has_type;
        
        }
        void set_type(const Type& _type ){

            m_has_type = true;
            m_type = _type;
        
        }
        const Type& type(){

            return m_type;
        
        }
        string toString(){

        return ST_ContinueDirection::TypeStrList[m_type];
    
        }
        void clear(){

            m_has_type = false;
        
        }
        void toXml(const string _attrName , ostream _outStream ){

            if (m_has_type)
            {
                '_outStream << _attrName << \=\\ << toString() << \\\;';
            }
        
        }
        const ST_ContinueDirection& default_instance(){

    if (!ST_ContinueDirection::default_instance_)
    {
        ST_ContinueDirection::default_instance_ = new ST_ContinueDirection();
    }
    return *ST_ContinueDirection::default_instance_;

        }
        enum Type{
            _revDir_ = 1,
            _sameDir_
        }

    private:
        static const string TypeStrList [];
        static ST_ContinueDirection* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_Breakpoint : public XSD::SimpleType{
    public:
        ST_Breakpoint(){
            m_has_type = false

        }
        ST_Breakpoint(const Type _type ){
            m_has_type = true
            m_type = _type

        }
        bool has_type(){

            return m_has_type;
        
        }
        void set_type(const Type& _type ){

            m_has_type = true;
            m_type = _type;
        
        }
        const Type& type(){

            return m_type;
        
        }
        string toString(){

        return ST_Breakpoint::TypeStrList[m_type];
    
        }
        void clear(){

            m_has_type = false;
        
        }
        void toXml(const string _attrName , ostream _outStream ){

            if (m_has_type)
            {
                '_outStream << _attrName << \=\\ << toString() << \\\;';
            }
        
        }
        const ST_Breakpoint& default_instance(){

    if (!ST_Breakpoint::default_instance_)
    {
        ST_Breakpoint::default_instance_ = new ST_Breakpoint();
    }
    return *ST_Breakpoint::default_instance_;

        }
        enum Type{
            _endCnv_ = 1,
            _bal_,
            _fixed_
        }

    private:
        static const string TypeStrList [];
        static ST_Breakpoint* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_Offset : public XSD::SimpleType{
    public:
        ST_Offset(){
            m_has_type = false

        }
        ST_Offset(const Type _type ){
            m_has_type = true
            m_type = _type

        }
        bool has_type(){

            return m_has_type;
        
        }
        void set_type(const Type& _type ){

            m_has_type = true;
            m_type = _type;
        
        }
        const Type& type(){

            return m_type;
        
        }
        string toString(){

        return ST_Offset::TypeStrList[m_type];
    
        }
        void clear(){

            m_has_type = false;
        
        }
        void toXml(const string _attrName , ostream _outStream ){

            if (m_has_type)
            {
                '_outStream << _attrName << \=\\ << toString() << \\\;';
            }
        
        }
        const ST_Offset& default_instance(){

    if (!ST_Offset::default_instance_)
    {
        ST_Offset::default_instance_ = new ST_Offset();
    }
    return *ST_Offset::default_instance_;

        }
        enum Type{
            _ctr_ = 1,
            _off_
        }

    private:
        static const string TypeStrList [];
        static ST_Offset* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_HierarchyAlignment : public XSD::SimpleType{
    public:
        ST_HierarchyAlignment(){
            m_has_type = false

        }
        ST_HierarchyAlignment(const Type _type ){
            m_has_type = true
            m_type = _type

        }
        bool has_type(){

            return m_has_type;
        
        }
        void set_type(const Type& _type ){

            m_has_type = true;
            m_type = _type;
        
        }
        const Type& type(){

            return m_type;
        
        }
        string toString(){

        return ST_HierarchyAlignment::TypeStrList[m_type];
    
        }
        void clear(){

            m_has_type = false;
        
        }
        void toXml(const string _attrName , ostream _outStream ){

            if (m_has_type)
            {
                '_outStream << _attrName << \=\\ << toString() << \\\;';
            }
        
        }
        const ST_HierarchyAlignment& default_instance(){

    if (!ST_HierarchyAlignment::default_instance_)
    {
        ST_HierarchyAlignment::default_instance_ = new ST_HierarchyAlignment();
    }
    return *ST_HierarchyAlignment::default_instance_;

        }
        enum Type{
            _tL_ = 1,
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
        }

    private:
        static const string TypeStrList [];
        static ST_HierarchyAlignment* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_FunctionValue : public XSD::SimpleType{
    public:
        bool has_int(){

            return m_has_int;
        
        }
        void set_int(const int& _int ){

            clear_boolean();
clear_ST_Direction();
clear_ST_HierBranchStyle();
clear_ST_AnimOneStr();
clear_ST_AnimLvlStr();
clear_ST_ResizeHandlesStr();
            m_has_int = true;
            m_int = _int;
        
        }
        const int& int(){

            return m_int;
        
        }
        bool has_boolean(){

            return m_has_boolean;
        
        }
        void set_boolean(const boolean& _boolean ){

            clear_int();
clear_ST_Direction();
clear_ST_HierBranchStyle();
clear_ST_AnimOneStr();
clear_ST_AnimLvlStr();
clear_ST_ResizeHandlesStr();
            m_has_boolean = true;
            m_boolean = _boolean;
        
        }
        const boolean& boolean(){

            return m_boolean;
        
        }
        bool has_ST_Direction(){

            return m_has_ST_Direction;
        
        }
        ST_Direction* mutable_ST_Direction(){

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
        const ST_Direction& ST_Direction(){

            if (m_ST_Direction)
            {
                return *m_ST_Direction;
            }

            return ST_Direction::default_instance();
        
        }
        bool has_ST_HierBranchStyle(){

            return m_has_ST_HierBranchStyle;
        
        }
        ST_HierBranchStyle* mutable_ST_HierBranchStyle(){

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
        const ST_HierBranchStyle& ST_HierBranchStyle(){

            if (m_ST_HierBranchStyle)
            {
                return *m_ST_HierBranchStyle;
            }

            return ST_HierBranchStyle::default_instance();
        
        }
        bool has_ST_AnimOneStr(){

            return m_has_ST_AnimOneStr;
        
        }
        ST_AnimOneStr* mutable_ST_AnimOneStr(){

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
        const ST_AnimOneStr& ST_AnimOneStr(){

            if (m_ST_AnimOneStr)
            {
                return *m_ST_AnimOneStr;
            }

            return ST_AnimOneStr::default_instance();
        
        }
        bool has_ST_AnimLvlStr(){

            return m_has_ST_AnimLvlStr;
        
        }
        ST_AnimLvlStr* mutable_ST_AnimLvlStr(){

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
        const ST_AnimLvlStr& ST_AnimLvlStr(){

            if (m_ST_AnimLvlStr)
            {
                return *m_ST_AnimLvlStr;
            }

            return ST_AnimLvlStr::default_instance();
        
        }
        bool has_ST_ResizeHandlesStr(){

            return m_has_ST_ResizeHandlesStr;
        
        }
        ST_ResizeHandlesStr* mutable_ST_ResizeHandlesStr(){

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
        const ST_ResizeHandlesStr& ST_ResizeHandlesStr(){

            if (m_ST_ResizeHandlesStr)
            {
                return *m_ST_ResizeHandlesStr;
            }

            return ST_ResizeHandlesStr::default_instance();
        
        }
        void clear(){
clear_int();
clear_boolean();
clear_ST_Direction();
clear_ST_HierBranchStyle();
clear_ST_AnimOneStr();
clear_ST_AnimLvlStr();
clear_ST_ResizeHandlesStr();
        }
        void toXml(const string _attrName , ostream _outStream ){

        if (m_has_int)
        {
            _outStream << _attrName << \=\\ << m_int << \\\;;
            return;
        }

        if (m_has_boolean)
        {
            _outStream << _attrName << \=\\ << XSD::BooleanStr(m_boolean) << \\\;;
            return;
        }

        if (m_has_ST_Direction)
        {
            (varName)s->toXml(_attrName, _outStream);;
            return;
        }

        if (m_has_ST_HierBranchStyle)
        {
            (varName)s->toXml(_attrName, _outStream);;
            return;
        }

        if (m_has_ST_AnimOneStr)
        {
            (varName)s->toXml(_attrName, _outStream);;
            return;
        }

        if (m_has_ST_AnimLvlStr)
        {
            (varName)s->toXml(_attrName, _outStream);;
            return;
        }

        if (m_has_ST_ResizeHandlesStr)
        {
            (varName)s->toXml(_attrName, _outStream);;
            return;
        }

        }
        const ST_FunctionValue& default_instance(){

    if (!ST_FunctionValue::default_instance_)
    {
        ST_FunctionValue::default_instance_ = new ST_FunctionValue();
    }
    return *ST_FunctionValue::default_instance_;

        }

    private:
        void clear_int(){

            m_has_int = false;
            m_int = 0;
        
        }
        void clear_boolean(){

            m_has_boolean = false;
            m_boolean = false;
        
        }
        void clear_ST_Direction(){

            m_has_ST_Direction = false;
            if (m_ST_Direction)
            {
                delete m_ST_Direction;
                m_ST_Direction = NULL;
            }
        
        }
        void clear_ST_HierBranchStyle(){

            m_has_ST_HierBranchStyle = false;
            if (m_ST_HierBranchStyle)
            {
                delete m_ST_HierBranchStyle;
                m_ST_HierBranchStyle = NULL;
            }
        
        }
        void clear_ST_AnimOneStr(){

            m_has_ST_AnimOneStr = false;
            if (m_ST_AnimOneStr)
            {
                delete m_ST_AnimOneStr;
                m_ST_AnimOneStr = NULL;
            }
        
        }
        void clear_ST_AnimLvlStr(){

            m_has_ST_AnimLvlStr = false;
            if (m_ST_AnimLvlStr)
            {
                delete m_ST_AnimLvlStr;
                m_ST_AnimLvlStr = NULL;
            }
        
        }
        void clear_ST_ResizeHandlesStr(){

            m_has_ST_ResizeHandlesStr = false;
            if (m_ST_ResizeHandlesStr)
            {
                delete m_ST_ResizeHandlesStr;
                m_ST_ResizeHandlesStr = NULL;
            }
        
        }
        bool m_has_int ;
        int m_int ;
        bool m_has_boolean ;
        boolean m_boolean ;
        bool m_has_ST_Direction ;
        ST_Direction* m_ST_Direction ;
        bool m_has_ST_HierBranchStyle ;
        ST_HierBranchStyle* m_ST_HierBranchStyle ;
        bool m_has_ST_AnimOneStr ;
        ST_AnimOneStr* m_ST_AnimOneStr ;
        bool m_has_ST_AnimLvlStr ;
        ST_AnimLvlStr* m_ST_AnimLvlStr ;
        bool m_has_ST_ResizeHandlesStr ;
        ST_ResizeHandlesStr* m_ST_ResizeHandlesStr ;
        static ST_FunctionValue* default_instance_ ;

    }

    class ST_VariableType : public XSD::SimpleType{
    public:
        ST_VariableType(){
            m_has_type = false

        }
        ST_VariableType(const Type _type ){
            m_has_type = true
            m_type = _type

        }
        bool has_type(){

            return m_has_type;
        
        }
        void set_type(const Type& _type ){

            m_has_type = true;
            m_type = _type;
        
        }
        const Type& type(){

            return m_type;
        
        }
        string toString(){

        return ST_VariableType::TypeStrList[m_type];
    
        }
        void clear(){

            m_has_type = false;
        
        }
        void toXml(const string _attrName , ostream _outStream ){

            if (m_has_type)
            {
                '_outStream << _attrName << \=\\ << toString() << \\\;';
            }
        
        }
        const ST_VariableType& default_instance(){

    if (!ST_VariableType::default_instance_)
    {
        ST_VariableType::default_instance_ = new ST_VariableType();
    }
    return *ST_VariableType::default_instance_;

        }
        enum Type{
            _none_ = 1,
            _orgChart_,
            _chMax_,
            _chPref_,
            _bulEnabled_,
            _dir_,
            _hierBranch_,
            _animOne_,
            _animLvl_,
            _resizeHandles_
        }

    private:
        static const string TypeStrList [];
        static ST_VariableType* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_FunctionArgument : public XSD::SimpleType{
    public:
        bool has_ST_VariableType(){

            return m_has_ST_VariableType;
        
        }
        ST_VariableType* mutable_ST_VariableType(){

            
            m_has_ST_VariableType = true;
            if (!m_ST_VariableType)
            {
                m_ST_VariableType = new ST_VariableType();
            }
            return m_ST_VariableType;
        
        }
        const ST_VariableType& ST_VariableType(){

            if (m_ST_VariableType)
            {
                return *m_ST_VariableType;
            }

            return ST_VariableType::default_instance();
        
        }
        void clear(){
clear_ST_VariableType();
        }
        void toXml(const string _attrName , ostream _outStream ){

        if (m_has_ST_VariableType)
        {
            (varName)s->toXml(_attrName, _outStream);;
            return;
        }

        }
        const ST_FunctionArgument& default_instance(){

    if (!ST_FunctionArgument::default_instance_)
    {
        ST_FunctionArgument::default_instance_ = new ST_FunctionArgument();
    }
    return *ST_FunctionArgument::default_instance_;

        }

    private:
        void clear_ST_VariableType(){

            m_has_ST_VariableType = false;
            if (m_ST_VariableType)
            {
                delete m_ST_VariableType;
                m_ST_VariableType = NULL;
            }
        
        }
        bool m_has_ST_VariableType ;
        ST_VariableType* m_ST_VariableType ;
        static ST_FunctionArgument* default_instance_ ;

    }

    class ST_OutputShapeType : public XSD::SimpleType{
    public:
        ST_OutputShapeType(){
            m_has_type = false

        }
        ST_OutputShapeType(const Type _type ){
            m_has_type = true
            m_type = _type

        }
        bool has_type(){

            return m_has_type;
        
        }
        void set_type(const Type& _type ){

            m_has_type = true;
            m_type = _type;
        
        }
        const Type& type(){

            return m_type;
        
        }
        string toString(){

        return ST_OutputShapeType::TypeStrList[m_type];
    
        }
        void clear(){

            m_has_type = false;
        
        }
        void toXml(const string _attrName , ostream _outStream ){

            if (m_has_type)
            {
                '_outStream << _attrName << \=\\ << toString() << \\\;';
            }
        
        }
        const ST_OutputShapeType& default_instance(){

    if (!ST_OutputShapeType::default_instance_)
    {
        ST_OutputShapeType::default_instance_ = new ST_OutputShapeType();
    }
    return *ST_OutputShapeType::default_instance_;

        }
        enum Type{
            _none_ = 1,
            _conn_
        }

    private:
        static const string TypeStrList [];
        static ST_OutputShapeType* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class CT_CTName : public XSD::ComplexType{
    public:
        void clear(){

                m_has_lang_attr = false;
                m_lang_attr.clear();
            
                m_has_val_attr = false;
                m_val_attr.clear();
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    _outStream << _attrName << \=\\ << m_lang_attr << \\\;
_outStream << _attrName << \=\\ << m_val_attr << \\\;
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_CTName& default_instance(){

    if (!CT_CTName::default_instance_)
    {
        CT_CTName::default_instance_ = new CT_CTName();
    }
    return *CT_CTName::default_instance_;

        }
        bool has_lang_attr(){

            return m_has_lang_attr;
        
        }
        void set_lang_attr(const string& _lang_attr ){

        m_has_lang_attr = true;
        m_lang_attr = _lang_attr;
        
        }
        const string& lang_attr(){

            return type: \string\nname: \m_lang_attr\n;
        
        }
        bool has_val_attr(){

            return m_has_val_attr;
        
        }
        void set_val_attr(const string& _val_attr ){

        m_has_val_attr = true;
        m_val_attr = _val_attr;
        
        }
        const string& val_attr(){

            return type: \string\nname: \m_val_attr\n;
        
        }

    private:
        static CT_CTName* default_instance_ ;
        bool m_has_lang_attr ;
        string m_lang_attr ;
        bool m_has_val_attr ;
        string m_val_attr ;

    }

    class CT_CTDescription : public XSD::ComplexType{
    public:
        void clear(){

                m_has_lang_attr = false;
                m_lang_attr.clear();
            
                m_has_val_attr = false;
                m_val_attr.clear();
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    _outStream << _attrName << \=\\ << m_lang_attr << \\\;
_outStream << _attrName << \=\\ << m_val_attr << \\\;
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_CTDescription& default_instance(){

    if (!CT_CTDescription::default_instance_)
    {
        CT_CTDescription::default_instance_ = new CT_CTDescription();
    }
    return *CT_CTDescription::default_instance_;

        }
        bool has_lang_attr(){

            return m_has_lang_attr;
        
        }
        void set_lang_attr(const string& _lang_attr ){

        m_has_lang_attr = true;
        m_lang_attr = _lang_attr;
        
        }
        const string& lang_attr(){

            return type: \string\nname: \m_lang_attr\n;
        
        }
        bool has_val_attr(){

            return m_has_val_attr;
        
        }
        void set_val_attr(const string& _val_attr ){

        m_has_val_attr = true;
        m_val_attr = _val_attr;
        
        }
        const string& val_attr(){

            return type: \string\nname: \m_val_attr\n;
        
        }

    private:
        static CT_CTDescription* default_instance_ ;
        bool m_has_lang_attr ;
        string m_lang_attr ;
        bool m_has_val_attr ;
        string m_val_attr ;

    }

    class CT_CTCategory : public XSD::ComplexType{
    public:
        void clear(){

                m_has_type_attr = false;
                m_type_attr.clear();
            
                m_has_pri_attr = false;
                m_pri_attr = 0;
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    _outStream << _attrName << \=\\ << m_type_attr << \\\;
_outStream << _attrName << \=\\ << m_pri_attr << \\\;
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_CTCategory& default_instance(){

    if (!CT_CTCategory::default_instance_)
    {
        CT_CTCategory::default_instance_ = new CT_CTCategory();
    }
    return *CT_CTCategory::default_instance_;

        }
        bool has_type_attr(){

            return m_has_type_attr;
        
        }
        void set_type_attr(const anyURI& _type_attr ){

        m_has_type_attr = true;
        m_type_attr = _type_attr;
        
        }
        const anyURI& type_attr(){

            return type: nyURI\nname: \m_type_attr\n;
        
        }
        bool has_pri_attr(){

            return m_has_pri_attr;
        
        }
        void set_pri_attr(const unsignedInt& _pri_attr ){

        m_has_pri_attr = true;
        m_pri_attr = _pri_attr;
        
        }
        const unsignedInt& pri_attr(){

            return type: \unsignedInt\nname: \m_pri_attr\n;
        
        }

    private:
        static CT_CTCategory* default_instance_ ;
        bool m_has_type_attr ;
        anyURI m_type_attr ;
        bool m_has_pri_attr ;
        unsignedInt m_pri_attr ;

    }

    class CT_CTCategories : public XSD::ComplexType{
    public:
        CT_CTCategory* add_cat(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            CT_CTCategory* pNewChild = pChildGroup->mutable_cat();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        void clear(){

            vector<ChildGroup_1*>::iterator iter;
            for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
            {
                delete *iter;
            }
            m_childGroupList_1.clear();
        
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_cat())
            {
                (*iter)->toXml(\d:cat\, _outStream);
            }
        }
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_CTCategories& default_instance(){

    if (!CT_CTCategories::default_instance_)
    {
        CT_CTCategories::default_instance_ = new CT_CTCategories();
    }
    return *CT_CTCategories::default_instance_;

        }

    private:
        vector<ChildGroup_1*> m_childGroupList_1 ;
        static CT_CTCategories* default_instance_ ;
        class ChildGroup_1{
        public:
            bool has_cat(){

            return m_has_cat;
        
            }
            CT_CTCategory* mutable_cat(){

                
                m_has_cat = true;
                if (!m_cat)
                {
                    m_cat = new CT_CTCategory();
                }
                return m_cat;
            
            }
            const CT_CTCategory& cat(){

            if (m_cat)
            {
                return *m_cat;
            }
            return CT_CTCategory::default_instance();
        
            }

        private:
            bool m_has_cat ;
            CT_CTCategory* m_cat ;

        }


    }

    class CT_Colors : public XSD::ComplexType{
    public:
        CT_ScRgbColor* add_scrgbClr(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            CT_ScRgbColor* pNewChild = pChildGroup->mutable_scrgbClr();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        CT_SRgbColor* add_srgbClr(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            CT_SRgbColor* pNewChild = pChildGroup->mutable_srgbClr();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        CT_HslColor* add_hslClr(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            CT_HslColor* pNewChild = pChildGroup->mutable_hslClr();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        CT_SystemColor* add_sysClr(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            CT_SystemColor* pNewChild = pChildGroup->mutable_sysClr();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        CT_SchemeColor* add_schemeClr(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            CT_SchemeColor* pNewChild = pChildGroup->mutable_schemeClr();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        CT_PresetColor* add_prstClr(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            CT_PresetColor* pNewChild = pChildGroup->mutable_prstClr();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        void clear(){

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
    
            
            vector<ChildGroup_1*>::iterator iter;
            for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
            {
                delete *iter;
            }
            m_childGroupList_1.clear();
        
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    (varName)s->toXml(\meth\, _outStream);
(varName)s->toXml(\hueDir\, _outStream);
        _outStream << \>\;
    
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_scrgbClr())
            {
                (*iter)->toXml(\d:scrgbClr\, _outStream);
            }
            else if ((*iter)->has_srgbClr())
            {
                (*iter)->toXml(\d:srgbClr\, _outStream);
            }
            else if ((*iter)->has_hslClr())
            {
                (*iter)->toXml(\d:hslClr\, _outStream);
            }
            else if ((*iter)->has_sysClr())
            {
                (*iter)->toXml(\d:sysClr\, _outStream);
            }
            else if ((*iter)->has_schemeClr())
            {
                (*iter)->toXml(\d:schemeClr\, _outStream);
            }
            else if ((*iter)->has_prstClr())
            {
                (*iter)->toXml(\d:prstClr\, _outStream);
            }
        }
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_Colors& default_instance(){

    if (!CT_Colors::default_instance_)
    {
        CT_Colors::default_instance_ = new CT_Colors();
    }
    return *CT_Colors::default_instance_;

        }
        bool has_meth_attr(){

            return m_has_meth_attr;
        
        }
        void set_meth_attr(const ST_ClrAppMethod& _meth_attr ){

            m_has_meth_attr = true;
            m_meth_attr = new ST_ClrAppMethod(_meth_attr);
        
        }
        const ST_ClrAppMethod& meth_attr(){

            if (m_meth_attr)
            {
                return *m_meth_attr;
            }
            return ST_ClrAppMethod::default_instance();
        
        }
        bool has_hueDir_attr(){

            return m_has_hueDir_attr;
        
        }
        void set_hueDir_attr(const ST_HueDir& _hueDir_attr ){

            m_has_hueDir_attr = true;
            m_hueDir_attr = new ST_HueDir(_hueDir_attr);
        
        }
        const ST_HueDir& hueDir_attr(){

            if (m_hueDir_attr)
            {
                return *m_hueDir_attr;
            }
            return ST_HueDir::default_instance();
        
        }

    private:
        vector<ChildGroup_1*> m_childGroupList_1 ;
        static CT_Colors* default_instance_ ;
        bool m_has_meth_attr ;
        ST_ClrAppMethod* m_meth_attr ;
        bool m_has_hueDir_attr ;
        ST_HueDir* m_hueDir_attr ;
        class ChildGroup_1{
        public:
            bool has_scrgbClr(){

            return m_has_scrgbClr;
        
            }
            CT_ScRgbColor* mutable_scrgbClr(){

                
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
            const CT_ScRgbColor& scrgbClr(){

            if (m_scrgbClr)
            {
                return *m_scrgbClr;
            }
            return CT_ScRgbColor::default_instance();
        
            }
            bool has_srgbClr(){

            return m_has_srgbClr;
        
            }
            CT_SRgbColor* mutable_srgbClr(){

                
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
            const CT_SRgbColor& srgbClr(){

            if (m_srgbClr)
            {
                return *m_srgbClr;
            }
            return CT_SRgbColor::default_instance();
        
            }
            bool has_hslClr(){

            return m_has_hslClr;
        
            }
            CT_HslColor* mutable_hslClr(){

                
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
            const CT_HslColor& hslClr(){

            if (m_hslClr)
            {
                return *m_hslClr;
            }
            return CT_HslColor::default_instance();
        
            }
            bool has_sysClr(){

            return m_has_sysClr;
        
            }
            CT_SystemColor* mutable_sysClr(){

                
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
            const CT_SystemColor& sysClr(){

            if (m_sysClr)
            {
                return *m_sysClr;
            }
            return CT_SystemColor::default_instance();
        
            }
            bool has_schemeClr(){

            return m_has_schemeClr;
        
            }
            CT_SchemeColor* mutable_schemeClr(){

                
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
            const CT_SchemeColor& schemeClr(){

            if (m_schemeClr)
            {
                return *m_schemeClr;
            }
            return CT_SchemeColor::default_instance();
        
            }
            bool has_prstClr(){

            return m_has_prstClr;
        
            }
            CT_PresetColor* mutable_prstClr(){

                
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
            const CT_PresetColor& prstClr(){

            if (m_prstClr)
            {
                return *m_prstClr;
            }
            return CT_PresetColor::default_instance();
        
            }

        private:
            bool m_has_scrgbClr ;
            CT_ScRgbColor* m_scrgbClr ;
            bool m_has_srgbClr ;
            CT_SRgbColor* m_srgbClr ;
            bool m_has_hslClr ;
            CT_HslColor* m_hslClr ;
            bool m_has_sysClr ;
            CT_SystemColor* m_sysClr ;
            bool m_has_schemeClr ;
            CT_SchemeColor* m_schemeClr ;
            bool m_has_prstClr ;
            CT_PresetColor* m_prstClr ;

        }


    }

    class CT_CTStyleLabel : public XSD::ComplexType{
    public:
        bool has_fillClrLst(){

            return m_has_fillClrLst;
        
        }
        CT_Colors* mutable_fillClrLst(){

                m_has_fillClrLst = true;
                if (!m_fillClrLst)
                {
                    m_fillClrLst = new CT_Colors();
                }
                return m_fillClrLst;
            
        }
        const CT_Colors& fillClrLst(){

            if (m_fillClrLst)
            {
                return *m_fillClrLst;
            }
            return CT_Colors::default_instance();
        
        }
        bool has_linClrLst(){

            return m_has_linClrLst;
        
        }
        CT_Colors* mutable_linClrLst(){

                m_has_linClrLst = true;
                if (!m_linClrLst)
                {
                    m_linClrLst = new CT_Colors();
                }
                return m_linClrLst;
            
        }
        const CT_Colors& linClrLst(){

            if (m_linClrLst)
            {
                return *m_linClrLst;
            }
            return CT_Colors::default_instance();
        
        }
        bool has_effectClrLst(){

            return m_has_effectClrLst;
        
        }
        CT_Colors* mutable_effectClrLst(){

                m_has_effectClrLst = true;
                if (!m_effectClrLst)
                {
                    m_effectClrLst = new CT_Colors();
                }
                return m_effectClrLst;
            
        }
        const CT_Colors& effectClrLst(){

            if (m_effectClrLst)
            {
                return *m_effectClrLst;
            }
            return CT_Colors::default_instance();
        
        }
        bool has_txLinClrLst(){

            return m_has_txLinClrLst;
        
        }
        CT_Colors* mutable_txLinClrLst(){

                m_has_txLinClrLst = true;
                if (!m_txLinClrLst)
                {
                    m_txLinClrLst = new CT_Colors();
                }
                return m_txLinClrLst;
            
        }
        const CT_Colors& txLinClrLst(){

            if (m_txLinClrLst)
            {
                return *m_txLinClrLst;
            }
            return CT_Colors::default_instance();
        
        }
        bool has_txFillClrLst(){

            return m_has_txFillClrLst;
        
        }
        CT_Colors* mutable_txFillClrLst(){

                m_has_txFillClrLst = true;
                if (!m_txFillClrLst)
                {
                    m_txFillClrLst = new CT_Colors();
                }
                return m_txFillClrLst;
            
        }
        const CT_Colors& txFillClrLst(){

            if (m_txFillClrLst)
            {
                return *m_txFillClrLst;
            }
            return CT_Colors::default_instance();
        
        }
        bool has_txEffectClrLst(){

            return m_has_txEffectClrLst;
        
        }
        CT_Colors* mutable_txEffectClrLst(){

                m_has_txEffectClrLst = true;
                if (!m_txEffectClrLst)
                {
                    m_txEffectClrLst = new CT_Colors();
                }
                return m_txEffectClrLst;
            
        }
        const CT_Colors& txEffectClrLst(){

            if (m_txEffectClrLst)
            {
                return *m_txEffectClrLst;
            }
            return CT_Colors::default_instance();
        
        }
        bool has_extLst(){

            return m_has_extLst;
        
        }
        ns_a::CT_OfficeArtExtensionList* mutable_extLst(){

                m_has_extLst = true;
                if (!m_extLst)
                {
                    m_extLst = new ns_a::CT_OfficeArtExtensionList();
                }
                return m_extLst;
            
        }
        const ns_a::CT_OfficeArtExtensionList& extLst(){

            if (m_extLst)
            {
                return *m_extLst;
            }
            return ns_a::CT_OfficeArtExtensionList::default_instance();
        
        }
        void clear(){

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
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    _outStream << _attrName << \=\\ << m_name_attr << \\\;
        _outStream << \>\;
    
                if (m_has_fillClrLst)
                {
                    m_fillClrLst->toXml(\d:fillClrLst\, _outStream);;
                }
            
                if (m_has_linClrLst)
                {
                    m_fillClrLst->toXml(\d:linClrLst\, _outStream);;
                }
            
                if (m_has_effectClrLst)
                {
                    m_fillClrLst->toXml(\d:effectClrLst\, _outStream);;
                }
            
                if (m_has_txLinClrLst)
                {
                    m_fillClrLst->toXml(\d:txLinClrLst\, _outStream);;
                }
            
                if (m_has_txFillClrLst)
                {
                    m_fillClrLst->toXml(\d:txFillClrLst\, _outStream);;
                }
            
                if (m_has_txEffectClrLst)
                {
                    m_fillClrLst->toXml(\d:txEffectClrLst\, _outStream);;
                }
            
                if (m_has_extLst)
                {
                    m_fillClrLst->toXml(\d:extLst\, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_CTStyleLabel& default_instance(){

    if (!CT_CTStyleLabel::default_instance_)
    {
        CT_CTStyleLabel::default_instance_ = new CT_CTStyleLabel();
    }
    return *CT_CTStyleLabel::default_instance_;

        }
        bool has_name_attr(){

            return m_has_name_attr;
        
        }
        void set_name_attr(const string& _name_attr ){

        m_has_name_attr = true;
        m_name_attr = _name_attr;
        
        }
        const string& name_attr(){

            return type: \string\nname: \m_name_attr\n;
        
        }

    private:
        bool m_has_fillClrLst ;
        CT_Colors* m_fillClrLst ;
        bool m_has_linClrLst ;
        CT_Colors* m_linClrLst ;
        bool m_has_effectClrLst ;
        CT_Colors* m_effectClrLst ;
        bool m_has_txLinClrLst ;
        CT_Colors* m_txLinClrLst ;
        bool m_has_txFillClrLst ;
        CT_Colors* m_txFillClrLst ;
        bool m_has_txEffectClrLst ;
        CT_Colors* m_txEffectClrLst ;
        bool m_has_extLst ;
        ns_a::CT_OfficeArtExtensionList* m_extLst ;
        static CT_CTStyleLabel* default_instance_ ;
        bool m_has_name_attr ;
        string m_name_attr ;

    }

    class CT_ColorTransform : public XSD::ComplexType{
    public:
        bool has_title(){

            return m_has_title;
        
        }
        CT_CTName* mutable_title(){

                m_has_title = true;
                if (!m_title)
                {
                    m_title = new CT_CTName();
                }
                return m_title;
            
        }
        const CT_CTName& title(){

            if (m_title)
            {
                return *m_title;
            }
            return CT_CTName::default_instance();
        
        }
        bool has_desc(){

            return m_has_desc;
        
        }
        CT_CTDescription* mutable_desc(){

                m_has_desc = true;
                if (!m_desc)
                {
                    m_desc = new CT_CTDescription();
                }
                return m_desc;
            
        }
        const CT_CTDescription& desc(){

            if (m_desc)
            {
                return *m_desc;
            }
            return CT_CTDescription::default_instance();
        
        }
        bool has_catLst(){

            return m_has_catLst;
        
        }
        CT_CTCategories* mutable_catLst(){

                m_has_catLst = true;
                if (!m_catLst)
                {
                    m_catLst = new CT_CTCategories();
                }
                return m_catLst;
            
        }
        const CT_CTCategories& catLst(){

            if (m_catLst)
            {
                return *m_catLst;
            }
            return CT_CTCategories::default_instance();
        
        }
        bool has_styleLbl(){

            return m_has_styleLbl;
        
        }
        CT_CTStyleLabel* mutable_styleLbl(){

                m_has_styleLbl = true;
                if (!m_styleLbl)
                {
                    m_styleLbl = new CT_CTStyleLabel();
                }
                return m_styleLbl;
            
        }
        const CT_CTStyleLabel& styleLbl(){

            if (m_styleLbl)
            {
                return *m_styleLbl;
            }
            return CT_CTStyleLabel::default_instance();
        
        }
        bool has_extLst(){

            return m_has_extLst;
        
        }
        ns_a::CT_OfficeArtExtensionList* mutable_extLst(){

                m_has_extLst = true;
                if (!m_extLst)
                {
                    m_extLst = new ns_a::CT_OfficeArtExtensionList();
                }
                return m_extLst;
            
        }
        const ns_a::CT_OfficeArtExtensionList& extLst(){

            if (m_extLst)
            {
                return *m_extLst;
            }
            return ns_a::CT_OfficeArtExtensionList::default_instance();
        
        }
        void clear(){

                m_has_uniqueId_attr = false;
                m_uniqueId_attr.clear();
            
                m_has_minVer_attr = false;
                m_minVer_attr.clear();
            
                m_has_title = false;
                
        if (m_title)
        {
            delete m_title;
            m_title = NULL;
        }
    
            
                m_has_desc = false;
                
        if (m_desc)
        {
            delete m_desc;
            m_desc = NULL;
        }
    
            
                m_has_catLst = false;
                
        if (m_catLst)
        {
            delete m_catLst;
            m_catLst = NULL;
        }
    
            
                m_has_styleLbl = false;
                
        if (m_styleLbl)
        {
            delete m_styleLbl;
            m_styleLbl = NULL;
        }
    
            
                m_has_extLst = false;
                
        if (m_extLst)
        {
            delete m_extLst;
            m_extLst = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    _outStream << _attrName << \=\\ << m_uniqueId_attr << \\\;
_outStream << _attrName << \=\\ << m_minVer_attr << \\\;
        _outStream << \>\;
    
                if (m_has_title)
                {
                    m_title->toXml(\d:title\, _outStream);;
                }
            
                if (m_has_desc)
                {
                    m_title->toXml(\d:desc\, _outStream);;
                }
            
                if (m_has_catLst)
                {
                    m_title->toXml(\d:catLst\, _outStream);;
                }
            
                if (m_has_styleLbl)
                {
                    m_title->toXml(\d:styleLbl\, _outStream);;
                }
            
                if (m_has_extLst)
                {
                    m_title->toXml(\d:extLst\, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_ColorTransform& default_instance(){

    if (!CT_ColorTransform::default_instance_)
    {
        CT_ColorTransform::default_instance_ = new CT_ColorTransform();
    }
    return *CT_ColorTransform::default_instance_;

        }
        bool has_uniqueId_attr(){

            return m_has_uniqueId_attr;
        
        }
        void set_uniqueId_attr(const string& _uniqueId_attr ){

        m_has_uniqueId_attr = true;
        m_uniqueId_attr = _uniqueId_attr;
        
        }
        const string& uniqueId_attr(){

            return type: \string\nname: \m_uniqueId_attr\n;
        
        }
        bool has_minVer_attr(){

            return m_has_minVer_attr;
        
        }
        void set_minVer_attr(const string& _minVer_attr ){

        m_has_minVer_attr = true;
        m_minVer_attr = _minVer_attr;
        
        }
        const string& minVer_attr(){

            return type: \string\nname: \m_minVer_attr\n;
        
        }

    private:
        bool m_has_title ;
        CT_CTName* m_title ;
        bool m_has_desc ;
        CT_CTDescription* m_desc ;
        bool m_has_catLst ;
        CT_CTCategories* m_catLst ;
        bool m_has_styleLbl ;
        CT_CTStyleLabel* m_styleLbl ;
        bool m_has_extLst ;
        ns_a::CT_OfficeArtExtensionList* m_extLst ;
        static CT_ColorTransform* default_instance_ ;
        bool m_has_uniqueId_attr ;
        string m_uniqueId_attr ;
        bool m_has_minVer_attr ;
        string m_minVer_attr ;

    }

    class CT_ColorTransformHeader : public XSD::ComplexType{
    public:
        bool has_title(){

            return m_has_title;
        
        }
        CT_CTName* mutable_title(){

                m_has_title = true;
                if (!m_title)
                {
                    m_title = new CT_CTName();
                }
                return m_title;
            
        }
        const CT_CTName& title(){

            if (m_title)
            {
                return *m_title;
            }
            return CT_CTName::default_instance();
        
        }
        bool has_desc(){

            return m_has_desc;
        
        }
        CT_CTDescription* mutable_desc(){

                m_has_desc = true;
                if (!m_desc)
                {
                    m_desc = new CT_CTDescription();
                }
                return m_desc;
            
        }
        const CT_CTDescription& desc(){

            if (m_desc)
            {
                return *m_desc;
            }
            return CT_CTDescription::default_instance();
        
        }
        bool has_catLst(){

            return m_has_catLst;
        
        }
        CT_CTCategories* mutable_catLst(){

                m_has_catLst = true;
                if (!m_catLst)
                {
                    m_catLst = new CT_CTCategories();
                }
                return m_catLst;
            
        }
        const CT_CTCategories& catLst(){

            if (m_catLst)
            {
                return *m_catLst;
            }
            return CT_CTCategories::default_instance();
        
        }
        bool has_extLst(){

            return m_has_extLst;
        
        }
        ns_a::CT_OfficeArtExtensionList* mutable_extLst(){

                m_has_extLst = true;
                if (!m_extLst)
                {
                    m_extLst = new ns_a::CT_OfficeArtExtensionList();
                }
                return m_extLst;
            
        }
        const ns_a::CT_OfficeArtExtensionList& extLst(){

            if (m_extLst)
            {
                return *m_extLst;
            }
            return ns_a::CT_OfficeArtExtensionList::default_instance();
        
        }
        void clear(){

                m_has_uniqueId_attr = false;
                m_uniqueId_attr.clear();
            
                m_has_minVer_attr = false;
                m_minVer_attr.clear();
            
                m_has_resId_attr = false;
                m_resId_attr = 0;
            
                m_has_title = false;
                
        if (m_title)
        {
            delete m_title;
            m_title = NULL;
        }
    
            
                m_has_desc = false;
                
        if (m_desc)
        {
            delete m_desc;
            m_desc = NULL;
        }
    
            
                m_has_catLst = false;
                
        if (m_catLst)
        {
            delete m_catLst;
            m_catLst = NULL;
        }
    
            
                m_has_extLst = false;
                
        if (m_extLst)
        {
            delete m_extLst;
            m_extLst = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    _outStream << _attrName << \=\\ << m_uniqueId_attr << \\\;
_outStream << _attrName << \=\\ << m_minVer_attr << \\\;
_outStream << _attrName << \=\\ << m_resId_attr << \\\;
        _outStream << \>\;
    
                if (m_has_title)
                {
                    m_title->toXml(\d:title\, _outStream);;
                }
            
                if (m_has_desc)
                {
                    m_title->toXml(\d:desc\, _outStream);;
                }
            
                if (m_has_catLst)
                {
                    m_title->toXml(\d:catLst\, _outStream);;
                }
            
                if (m_has_extLst)
                {
                    m_title->toXml(\d:extLst\, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_ColorTransformHeader& default_instance(){

    if (!CT_ColorTransformHeader::default_instance_)
    {
        CT_ColorTransformHeader::default_instance_ = new CT_ColorTransformHeader();
    }
    return *CT_ColorTransformHeader::default_instance_;

        }
        bool has_uniqueId_attr(){

            return m_has_uniqueId_attr;
        
        }
        void set_uniqueId_attr(const string& _uniqueId_attr ){

        m_has_uniqueId_attr = true;
        m_uniqueId_attr = _uniqueId_attr;
        
        }
        const string& uniqueId_attr(){

            return type: \string\nname: \m_uniqueId_attr\n;
        
        }
        bool has_minVer_attr(){

            return m_has_minVer_attr;
        
        }
        void set_minVer_attr(const string& _minVer_attr ){

        m_has_minVer_attr = true;
        m_minVer_attr = _minVer_attr;
        
        }
        const string& minVer_attr(){

            return type: \string\nname: \m_minVer_attr\n;
        
        }
        bool has_resId_attr(){

            return m_has_resId_attr;
        
        }
        void set_resId_attr(const int& _resId_attr ){

        m_has_resId_attr = true;
        m_resId_attr = _resId_attr;
        
        }
        const int& resId_attr(){

            return type: \int\nname: \m_resId_attr\n;
        
        }

    private:
        bool m_has_title ;
        CT_CTName* m_title ;
        bool m_has_desc ;
        CT_CTDescription* m_desc ;
        bool m_has_catLst ;
        CT_CTCategories* m_catLst ;
        bool m_has_extLst ;
        ns_a::CT_OfficeArtExtensionList* m_extLst ;
        static CT_ColorTransformHeader* default_instance_ ;
        bool m_has_uniqueId_attr ;
        string m_uniqueId_attr ;
        bool m_has_minVer_attr ;
        string m_minVer_attr ;
        bool m_has_resId_attr ;
        int m_resId_attr ;

    }

    class CT_ColorTransformHeaderLst : public XSD::ComplexType{
    public:
        bool has_colorsDefHdr(){

            return m_has_colorsDefHdr;
        
        }
        CT_ColorTransformHeader* mutable_colorsDefHdr(){

                m_has_colorsDefHdr = true;
                if (!m_colorsDefHdr)
                {
                    m_colorsDefHdr = new CT_ColorTransformHeader();
                }
                return m_colorsDefHdr;
            
        }
        const CT_ColorTransformHeader& colorsDefHdr(){

            if (m_colorsDefHdr)
            {
                return *m_colorsDefHdr;
            }
            return CT_ColorTransformHeader::default_instance();
        
        }
        void clear(){

                m_has_colorsDefHdr = false;
                
        if (m_colorsDefHdr)
        {
            delete m_colorsDefHdr;
            m_colorsDefHdr = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_colorsDefHdr)
                {
                    m_colorsDefHdr->toXml(\d:colorsDefHdr\, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_ColorTransformHeaderLst& default_instance(){

    if (!CT_ColorTransformHeaderLst::default_instance_)
    {
        CT_ColorTransformHeaderLst::default_instance_ = new CT_ColorTransformHeaderLst();
    }
    return *CT_ColorTransformHeaderLst::default_instance_;

        }

    private:
        bool m_has_colorsDefHdr ;
        CT_ColorTransformHeader* m_colorsDefHdr ;
        static CT_ColorTransformHeaderLst* default_instance_ ;

    }

    class CT_Pt : public XSD::ComplexType{
    public:
        bool has_prSet(){

            return m_has_prSet;
        
        }
        CT_ElemPropSet* mutable_prSet(){

                m_has_prSet = true;
                if (!m_prSet)
                {
                    m_prSet = new CT_ElemPropSet();
                }
                return m_prSet;
            
        }
        const CT_ElemPropSet& prSet(){

            if (m_prSet)
            {
                return *m_prSet;
            }
            return CT_ElemPropSet::default_instance();
        
        }
        bool has_spPr(){

            return m_has_spPr;
        
        }
        ns_a::CT_ShapeProperties* mutable_spPr(){

                m_has_spPr = true;
                if (!m_spPr)
                {
                    m_spPr = new ns_a::CT_ShapeProperties();
                }
                return m_spPr;
            
        }
        const ns_a::CT_ShapeProperties& spPr(){

            if (m_spPr)
            {
                return *m_spPr;
            }
            return ns_a::CT_ShapeProperties::default_instance();
        
        }
        bool has_t(){

            return m_has_t;
        
        }
        ns_a::CT_TextBody* mutable_t(){

                m_has_t = true;
                if (!m_t)
                {
                    m_t = new ns_a::CT_TextBody();
                }
                return m_t;
            
        }
        const ns_a::CT_TextBody& t(){

            if (m_t)
            {
                return *m_t;
            }
            return ns_a::CT_TextBody::default_instance();
        
        }
        bool has_extLst(){

            return m_has_extLst;
        
        }
        ns_a::CT_OfficeArtExtensionList* mutable_extLst(){

                m_has_extLst = true;
                if (!m_extLst)
                {
                    m_extLst = new ns_a::CT_OfficeArtExtensionList();
                }
                return m_extLst;
            
        }
        const ns_a::CT_OfficeArtExtensionList& extLst(){

            if (m_extLst)
            {
                return *m_extLst;
            }
            return ns_a::CT_OfficeArtExtensionList::default_instance();
        
        }
        void clear(){

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
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    (varName)s->toXml(\modelId\, _outStream);
(varName)s->toXml(	ype\, _outStream);
(varName)s->toXml(\cxnId\, _outStream);
        _outStream << \>\;
    
                if (m_has_prSet)
                {
                    m_prSet->toXml(\d:prSet\, _outStream);;
                }
            
                if (m_has_spPr)
                {
                    m_prSet->toXml(\d:spPr\, _outStream);;
                }
            
                if (m_has_t)
                {
                    m_prSet->toXml(\d:t\, _outStream);;
                }
            
                if (m_has_extLst)
                {
                    m_prSet->toXml(\d:extLst\, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_Pt& default_instance(){

    if (!CT_Pt::default_instance_)
    {
        CT_Pt::default_instance_ = new CT_Pt();
    }
    return *CT_Pt::default_instance_;

        }
        bool has_modelId_attr(){

            return m_has_modelId_attr;
        
        }
        void set_modelId_attr(const ST_ModelId& _modelId_attr ){

            m_has_modelId_attr = true;
            m_modelId_attr = new ST_ModelId(_modelId_attr);
        
        }
        const ST_ModelId& modelId_attr(){

            if (m_modelId_attr)
            {
                return *m_modelId_attr;
            }
            return ST_ModelId::default_instance();
        
        }
        bool has_type_attr(){

            return m_has_type_attr;
        
        }
        void set_type_attr(const ST_PtType& _type_attr ){

            m_has_type_attr = true;
            m_type_attr = new ST_PtType(_type_attr);
        
        }
        const ST_PtType& type_attr(){

            if (m_type_attr)
            {
                return *m_type_attr;
            }
            return ST_PtType::default_instance();
        
        }
        bool has_cxnId_attr(){

            return m_has_cxnId_attr;
        
        }
        void set_cxnId_attr(const ST_ModelId& _cxnId_attr ){

            m_has_cxnId_attr = true;
            m_cxnId_attr = new ST_ModelId(_cxnId_attr);
        
        }
        const ST_ModelId& cxnId_attr(){

            if (m_cxnId_attr)
            {
                return *m_cxnId_attr;
            }
            return ST_ModelId::default_instance();
        
        }

    private:
        bool m_has_prSet ;
        CT_ElemPropSet* m_prSet ;
        bool m_has_spPr ;
        ns_a::CT_ShapeProperties* m_spPr ;
        bool m_has_t ;
        ns_a::CT_TextBody* m_t ;
        bool m_has_extLst ;
        ns_a::CT_OfficeArtExtensionList* m_extLst ;
        static CT_Pt* default_instance_ ;
        bool m_has_modelId_attr ;
        ST_ModelId* m_modelId_attr ;
        bool m_has_type_attr ;
        ST_PtType* m_type_attr ;
        bool m_has_cxnId_attr ;
        ST_ModelId* m_cxnId_attr ;

    }

    class CT_PtList : public XSD::ComplexType{
    public:
        bool has_pt(){

            return m_has_pt;
        
        }
        CT_Pt* mutable_pt(){

                m_has_pt = true;
                if (!m_pt)
                {
                    m_pt = new CT_Pt();
                }
                return m_pt;
            
        }
        const CT_Pt& pt(){

            if (m_pt)
            {
                return *m_pt;
            }
            return CT_Pt::default_instance();
        
        }
        void clear(){

                m_has_pt = false;
                
        if (m_pt)
        {
            delete m_pt;
            m_pt = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_pt)
                {
                    m_pt->toXml(\d:pt\, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_PtList& default_instance(){

    if (!CT_PtList::default_instance_)
    {
        CT_PtList::default_instance_ = new CT_PtList();
    }
    return *CT_PtList::default_instance_;

        }

    private:
        bool m_has_pt ;
        CT_Pt* m_pt ;
        static CT_PtList* default_instance_ ;

    }

    class CT_Cxn : public XSD::ComplexType{
    public:
        bool has_extLst(){

            return m_has_extLst;
        
        }
        ns_a::CT_OfficeArtExtensionList* mutable_extLst(){

                m_has_extLst = true;
                if (!m_extLst)
                {
                    m_extLst = new ns_a::CT_OfficeArtExtensionList();
                }
                return m_extLst;
            
        }
        const ns_a::CT_OfficeArtExtensionList& extLst(){

            if (m_extLst)
            {
                return *m_extLst;
            }
            return ns_a::CT_OfficeArtExtensionList::default_instance();
        
        }
        void clear(){

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
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    (varName)s->toXml(\modelId\, _outStream);
(varName)s->toXml(	ype\, _outStream);
(varName)s->toXml(\srcId\, _outStream);
(varName)s->toXml(\destId\, _outStream);
_outStream << _attrName << \=\\ << m_srcOrd_attr << \\\;
_outStream << _attrName << \=\\ << m_destOrd_attr << \\\;
(varName)s->toXml(\parTransId\, _outStream);
(varName)s->toXml(\sibTransId\, _outStream);
_outStream << _attrName << \=\\ << m_presId_attr << \\\;
        _outStream << \>\;
    
                if (m_has_extLst)
                {
                    m_extLst->toXml(\d:extLst\, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_Cxn& default_instance(){

    if (!CT_Cxn::default_instance_)
    {
        CT_Cxn::default_instance_ = new CT_Cxn();
    }
    return *CT_Cxn::default_instance_;

        }
        bool has_modelId_attr(){

            return m_has_modelId_attr;
        
        }
        void set_modelId_attr(const ST_ModelId& _modelId_attr ){

            m_has_modelId_attr = true;
            m_modelId_attr = new ST_ModelId(_modelId_attr);
        
        }
        const ST_ModelId& modelId_attr(){

            if (m_modelId_attr)
            {
                return *m_modelId_attr;
            }
            return ST_ModelId::default_instance();
        
        }
        bool has_type_attr(){

            return m_has_type_attr;
        
        }
        void set_type_attr(const ST_CxnType& _type_attr ){

            m_has_type_attr = true;
            m_type_attr = new ST_CxnType(_type_attr);
        
        }
        const ST_CxnType& type_attr(){

            if (m_type_attr)
            {
                return *m_type_attr;
            }
            return ST_CxnType::default_instance();
        
        }
        bool has_srcId_attr(){

            return m_has_srcId_attr;
        
        }
        void set_srcId_attr(const ST_ModelId& _srcId_attr ){

            m_has_srcId_attr = true;
            m_srcId_attr = new ST_ModelId(_srcId_attr);
        
        }
        const ST_ModelId& srcId_attr(){

            if (m_srcId_attr)
            {
                return *m_srcId_attr;
            }
            return ST_ModelId::default_instance();
        
        }
        bool has_destId_attr(){

            return m_has_destId_attr;
        
        }
        void set_destId_attr(const ST_ModelId& _destId_attr ){

            m_has_destId_attr = true;
            m_destId_attr = new ST_ModelId(_destId_attr);
        
        }
        const ST_ModelId& destId_attr(){

            if (m_destId_attr)
            {
                return *m_destId_attr;
            }
            return ST_ModelId::default_instance();
        
        }
        bool has_srcOrd_attr(){

            return m_has_srcOrd_attr;
        
        }
        void set_srcOrd_attr(const unsignedInt& _srcOrd_attr ){

        m_has_srcOrd_attr = true;
        m_srcOrd_attr = _srcOrd_attr;
        
        }
        const unsignedInt& srcOrd_attr(){

            return type: \unsignedInt\nname: \m_srcOrd_attr\n;
        
        }
        bool has_destOrd_attr(){

            return m_has_destOrd_attr;
        
        }
        void set_destOrd_attr(const unsignedInt& _destOrd_attr ){

        m_has_destOrd_attr = true;
        m_destOrd_attr = _destOrd_attr;
        
        }
        const unsignedInt& destOrd_attr(){

            return type: \unsignedInt\nname: \m_destOrd_attr\n;
        
        }
        bool has_parTransId_attr(){

            return m_has_parTransId_attr;
        
        }
        void set_parTransId_attr(const ST_ModelId& _parTransId_attr ){

            m_has_parTransId_attr = true;
            m_parTransId_attr = new ST_ModelId(_parTransId_attr);
        
        }
        const ST_ModelId& parTransId_attr(){

            if (m_parTransId_attr)
            {
                return *m_parTransId_attr;
            }
            return ST_ModelId::default_instance();
        
        }
        bool has_sibTransId_attr(){

            return m_has_sibTransId_attr;
        
        }
        void set_sibTransId_attr(const ST_ModelId& _sibTransId_attr ){

            m_has_sibTransId_attr = true;
            m_sibTransId_attr = new ST_ModelId(_sibTransId_attr);
        
        }
        const ST_ModelId& sibTransId_attr(){

            if (m_sibTransId_attr)
            {
                return *m_sibTransId_attr;
            }
            return ST_ModelId::default_instance();
        
        }
        bool has_presId_attr(){

            return m_has_presId_attr;
        
        }
        void set_presId_attr(const string& _presId_attr ){

        m_has_presId_attr = true;
        m_presId_attr = _presId_attr;
        
        }
        const string& presId_attr(){

            return type: \string\nname: \m_presId_attr\n;
        
        }

    private:
        bool m_has_extLst ;
        ns_a::CT_OfficeArtExtensionList* m_extLst ;
        static CT_Cxn* default_instance_ ;
        bool m_has_modelId_attr ;
        ST_ModelId* m_modelId_attr ;
        bool m_has_type_attr ;
        ST_CxnType* m_type_attr ;
        bool m_has_srcId_attr ;
        ST_ModelId* m_srcId_attr ;
        bool m_has_destId_attr ;
        ST_ModelId* m_destId_attr ;
        bool m_has_srcOrd_attr ;
        unsignedInt m_srcOrd_attr ;
        bool m_has_destOrd_attr ;
        unsignedInt m_destOrd_attr ;
        bool m_has_parTransId_attr ;
        ST_ModelId* m_parTransId_attr ;
        bool m_has_sibTransId_attr ;
        ST_ModelId* m_sibTransId_attr ;
        bool m_has_presId_attr ;
        string m_presId_attr ;

    }

    class CT_CxnList : public XSD::ComplexType{
    public:
        bool has_cxn(){

            return m_has_cxn;
        
        }
        CT_Cxn* mutable_cxn(){

                m_has_cxn = true;
                if (!m_cxn)
                {
                    m_cxn = new CT_Cxn();
                }
                return m_cxn;
            
        }
        const CT_Cxn& cxn(){

            if (m_cxn)
            {
                return *m_cxn;
            }
            return CT_Cxn::default_instance();
        
        }
        void clear(){

                m_has_cxn = false;
                
        if (m_cxn)
        {
            delete m_cxn;
            m_cxn = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_cxn)
                {
                    m_cxn->toXml(\d:cxn\, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_CxnList& default_instance(){

    if (!CT_CxnList::default_instance_)
    {
        CT_CxnList::default_instance_ = new CT_CxnList();
    }
    return *CT_CxnList::default_instance_;

        }

    private:
        bool m_has_cxn ;
        CT_Cxn* m_cxn ;
        static CT_CxnList* default_instance_ ;

    }

    class CT_DataModel : public XSD::ComplexType{
    public:
        bool has_ptLst(){

            return m_has_ptLst;
        
        }
        CT_PtList* mutable_ptLst(){

                m_has_ptLst = true;
                if (!m_ptLst)
                {
                    m_ptLst = new CT_PtList();
                }
                return m_ptLst;
            
        }
        const CT_PtList& ptLst(){

            if (m_ptLst)
            {
                return *m_ptLst;
            }
            return CT_PtList::default_instance();
        
        }
        bool has_cxnLst(){

            return m_has_cxnLst;
        
        }
        CT_CxnList* mutable_cxnLst(){

                m_has_cxnLst = true;
                if (!m_cxnLst)
                {
                    m_cxnLst = new CT_CxnList();
                }
                return m_cxnLst;
            
        }
        const CT_CxnList& cxnLst(){

            if (m_cxnLst)
            {
                return *m_cxnLst;
            }
            return CT_CxnList::default_instance();
        
        }
        bool has_bg(){

            return m_has_bg;
        
        }
        ns_a::CT_BackgroundFormatting* mutable_bg(){

                m_has_bg = true;
                if (!m_bg)
                {
                    m_bg = new ns_a::CT_BackgroundFormatting();
                }
                return m_bg;
            
        }
        const ns_a::CT_BackgroundFormatting& bg(){

            if (m_bg)
            {
                return *m_bg;
            }
            return ns_a::CT_BackgroundFormatting::default_instance();
        
        }
        bool has_whole(){

            return m_has_whole;
        
        }
        ns_a::CT_WholeE2oFormatting* mutable_whole(){

                m_has_whole = true;
                if (!m_whole)
                {
                    m_whole = new ns_a::CT_WholeE2oFormatting();
                }
                return m_whole;
            
        }
        const ns_a::CT_WholeE2oFormatting& whole(){

            if (m_whole)
            {
                return *m_whole;
            }
            return ns_a::CT_WholeE2oFormatting::default_instance();
        
        }
        bool has_extLst(){

            return m_has_extLst;
        
        }
        ns_a::CT_OfficeArtExtensionList* mutable_extLst(){

                m_has_extLst = true;
                if (!m_extLst)
                {
                    m_extLst = new ns_a::CT_OfficeArtExtensionList();
                }
                return m_extLst;
            
        }
        const ns_a::CT_OfficeArtExtensionList& extLst(){

            if (m_extLst)
            {
                return *m_extLst;
            }
            return ns_a::CT_OfficeArtExtensionList::default_instance();
        
        }
        void clear(){

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
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_ptLst)
                {
                    m_ptLst->toXml(\d:ptLst\, _outStream);;
                }
            
                if (m_has_cxnLst)
                {
                    m_ptLst->toXml(\d:cxnLst\, _outStream);;
                }
            
                if (m_has_bg)
                {
                    m_ptLst->toXml(\d:bg\, _outStream);;
                }
            
                if (m_has_whole)
                {
                    m_ptLst->toXml(\d:whole\, _outStream);;
                }
            
                if (m_has_extLst)
                {
                    m_ptLst->toXml(\d:extLst\, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_DataModel& default_instance(){

    if (!CT_DataModel::default_instance_)
    {
        CT_DataModel::default_instance_ = new CT_DataModel();
    }
    return *CT_DataModel::default_instance_;

        }

    private:
        bool m_has_ptLst ;
        CT_PtList* m_ptLst ;
        bool m_has_cxnLst ;
        CT_CxnList* m_cxnLst ;
        bool m_has_bg ;
        ns_a::CT_BackgroundFormatting* m_bg ;
        bool m_has_whole ;
        ns_a::CT_WholeE2oFormatting* m_whole ;
        bool m_has_extLst ;
        ns_a::CT_OfficeArtExtensionList* m_extLst ;
        static CT_DataModel* default_instance_ ;

    }

    class CT_Constraint : public XSD::ComplexType{
    public:
        bool has_extLst(){

            return m_has_extLst;
        
        }
        ns_a::CT_OfficeArtExtensionList* mutable_extLst(){

                m_has_extLst = true;
                if (!m_extLst)
                {
                    m_extLst = new ns_a::CT_OfficeArtExtensionList();
                }
                return m_extLst;
            
        }
        const ns_a::CT_OfficeArtExtensionList& extLst(){

            if (m_extLst)
            {
                return *m_extLst;
            }
            return ns_a::CT_OfficeArtExtensionList::default_instance();
        
        }
        void clear(){

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
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    (varName)s->toXml(	ype\, _outStream);
(varName)s->toXml(or\, _outStream);
_outStream << _attrName << \=\\ << m_forName_attr << \\\;
(varName)s->toXml(\ptType\, _outStream);
(varName)s->toXml(efType\, _outStream);
(varName)s->toXml(efFor\, _outStream);
_outStream << _attrName << \=\\ << m_refForName_attr << \\\;
(varName)s->toXml(efPtType\, _outStream);
(varName)s->toXml(\op\, _outStream);
_outStream << _attrName << \=\\ << m_val_attr << \\\;
_outStream << _attrName << \=\\ << m_fact_attr << \\\;
        _outStream << \>\;
    
                if (m_has_extLst)
                {
                    m_extLst->toXml(\d:extLst\, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_Constraint& default_instance(){

    if (!CT_Constraint::default_instance_)
    {
        CT_Constraint::default_instance_ = new CT_Constraint();
    }
    return *CT_Constraint::default_instance_;

        }
        bool has_type_attr(){

            return m_has_type_attr;
        
        }
        void set_type_attr(const ST_ConstraintType& _type_attr ){

            m_has_type_attr = true;
            m_type_attr = new ST_ConstraintType(_type_attr);
        
        }
        const ST_ConstraintType& type_attr(){

            if (m_type_attr)
            {
                return *m_type_attr;
            }
            return ST_ConstraintType::default_instance();
        
        }
        bool has_for_attr(){

            return m_has_for_attr;
        
        }
        void set_for_attr(const ST_ConstraintRelationship& _for_attr ){

            m_has_for_attr = true;
            m_for_attr = new ST_ConstraintRelationship(_for_attr);
        
        }
        const ST_ConstraintRelationship& for_attr(){

            if (m_for_attr)
            {
                return *m_for_attr;
            }
            return ST_ConstraintRelationship::default_instance();
        
        }
        bool has_forName_attr(){

            return m_has_forName_attr;
        
        }
        void set_forName_attr(const string& _forName_attr ){

        m_has_forName_attr = true;
        m_forName_attr = _forName_attr;
        
        }
        const string& forName_attr(){

            return type: \string\nname: \m_forName_attr\n;
        
        }
        bool has_ptType_attr(){

            return m_has_ptType_attr;
        
        }
        void set_ptType_attr(const ST_ElementType& _ptType_attr ){

            m_has_ptType_attr = true;
            m_ptType_attr = new ST_ElementType(_ptType_attr);
        
        }
        const ST_ElementType& ptType_attr(){

            if (m_ptType_attr)
            {
                return *m_ptType_attr;
            }
            return ST_ElementType::default_instance();
        
        }
        bool has_refType_attr(){

            return m_has_refType_attr;
        
        }
        void set_refType_attr(const ST_ConstraintType& _refType_attr ){

            m_has_refType_attr = true;
            m_refType_attr = new ST_ConstraintType(_refType_attr);
        
        }
        const ST_ConstraintType& refType_attr(){

            if (m_refType_attr)
            {
                return *m_refType_attr;
            }
            return ST_ConstraintType::default_instance();
        
        }
        bool has_refFor_attr(){

            return m_has_refFor_attr;
        
        }
        void set_refFor_attr(const ST_ConstraintRelationship& _refFor_attr ){

            m_has_refFor_attr = true;
            m_refFor_attr = new ST_ConstraintRelationship(_refFor_attr);
        
        }
        const ST_ConstraintRelationship& refFor_attr(){

            if (m_refFor_attr)
            {
                return *m_refFor_attr;
            }
            return ST_ConstraintRelationship::default_instance();
        
        }
        bool has_refForName_attr(){

            return m_has_refForName_attr;
        
        }
        void set_refForName_attr(const string& _refForName_attr ){

        m_has_refForName_attr = true;
        m_refForName_attr = _refForName_attr;
        
        }
        const string& refForName_attr(){

            return type: \string\nname: \m_refForName_attr\n;
        
        }
        bool has_refPtType_attr(){

            return m_has_refPtType_attr;
        
        }
        void set_refPtType_attr(const ST_ElementType& _refPtType_attr ){

            m_has_refPtType_attr = true;
            m_refPtType_attr = new ST_ElementType(_refPtType_attr);
        
        }
        const ST_ElementType& refPtType_attr(){

            if (m_refPtType_attr)
            {
                return *m_refPtType_attr;
            }
            return ST_ElementType::default_instance();
        
        }
        bool has_op_attr(){

            return m_has_op_attr;
        
        }
        void set_op_attr(const ST_BoolOperator& _op_attr ){

            m_has_op_attr = true;
            m_op_attr = new ST_BoolOperator(_op_attr);
        
        }
        const ST_BoolOperator& op_attr(){

            if (m_op_attr)
            {
                return *m_op_attr;
            }
            return ST_BoolOperator::default_instance();
        
        }
        bool has_val_attr(){

            return m_has_val_attr;
        
        }
        void set_val_attr(const double& _val_attr ){

        m_has_val_attr = true;
        m_val_attr = _val_attr;
        
        }
        const double& val_attr(){

            return type: \double\nname: \m_val_attr\n;
        
        }
        bool has_fact_attr(){

            return m_has_fact_attr;
        
        }
        void set_fact_attr(const double& _fact_attr ){

        m_has_fact_attr = true;
        m_fact_attr = _fact_attr;
        
        }
        const double& fact_attr(){

            return type: \double\nname: \m_fact_attr\n;
        
        }

    private:
        bool m_has_extLst ;
        ns_a::CT_OfficeArtExtensionList* m_extLst ;
        static CT_Constraint* default_instance_ ;
        bool m_has_type_attr ;
        ST_ConstraintType* m_type_attr ;
        bool m_has_for_attr ;
        ST_ConstraintRelationship* m_for_attr ;
        bool m_has_forName_attr ;
        string m_forName_attr ;
        bool m_has_ptType_attr ;
        ST_ElementType* m_ptType_attr ;
        bool m_has_refType_attr ;
        ST_ConstraintType* m_refType_attr ;
        bool m_has_refFor_attr ;
        ST_ConstraintRelationship* m_refFor_attr ;
        bool m_has_refForName_attr ;
        string m_refForName_attr ;
        bool m_has_refPtType_attr ;
        ST_ElementType* m_refPtType_attr ;
        bool m_has_op_attr ;
        ST_BoolOperator* m_op_attr ;
        bool m_has_val_attr ;
        double m_val_attr ;
        bool m_has_fact_attr ;
        double m_fact_attr ;

    }

    class CT_Constraints : public XSD::ComplexType{
    public:
        bool has_constr(){

            return m_has_constr;
        
        }
        CT_Constraint* mutable_constr(){

                m_has_constr = true;
                if (!m_constr)
                {
                    m_constr = new CT_Constraint();
                }
                return m_constr;
            
        }
        const CT_Constraint& constr(){

            if (m_constr)
            {
                return *m_constr;
            }
            return CT_Constraint::default_instance();
        
        }
        void clear(){

                m_has_constr = false;
                
        if (m_constr)
        {
            delete m_constr;
            m_constr = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_constr)
                {
                    m_constr->toXml(\d:constr\, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_Constraints& default_instance(){

    if (!CT_Constraints::default_instance_)
    {
        CT_Constraints::default_instance_ = new CT_Constraints();
    }
    return *CT_Constraints::default_instance_;

        }

    private:
        bool m_has_constr ;
        CT_Constraint* m_constr ;
        static CT_Constraints* default_instance_ ;

    }

    class CT_NumericRule : public XSD::ComplexType{
    public:
        bool has_extLst(){

            return m_has_extLst;
        
        }
        ns_a::CT_OfficeArtExtensionList* mutable_extLst(){

                m_has_extLst = true;
                if (!m_extLst)
                {
                    m_extLst = new ns_a::CT_OfficeArtExtensionList();
                }
                return m_extLst;
            
        }
        const ns_a::CT_OfficeArtExtensionList& extLst(){

            if (m_extLst)
            {
                return *m_extLst;
            }
            return ns_a::CT_OfficeArtExtensionList::default_instance();
        
        }
        void clear(){

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
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    (varName)s->toXml(	ype\, _outStream);
(varName)s->toXml(or\, _outStream);
_outStream << _attrName << \=\\ << m_forName_attr << \\\;
(varName)s->toXml(\ptType\, _outStream);
_outStream << _attrName << \=\\ << m_val_attr << \\\;
_outStream << _attrName << \=\\ << m_fact_attr << \\\;
_outStream << _attrName << \=\\ << m_max_attr << \\\;
        _outStream << \>\;
    
                if (m_has_extLst)
                {
                    m_extLst->toXml(\d:extLst\, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_NumericRule& default_instance(){

    if (!CT_NumericRule::default_instance_)
    {
        CT_NumericRule::default_instance_ = new CT_NumericRule();
    }
    return *CT_NumericRule::default_instance_;

        }
        bool has_type_attr(){

            return m_has_type_attr;
        
        }
        void set_type_attr(const ST_ConstraintType& _type_attr ){

            m_has_type_attr = true;
            m_type_attr = new ST_ConstraintType(_type_attr);
        
        }
        const ST_ConstraintType& type_attr(){

            if (m_type_attr)
            {
                return *m_type_attr;
            }
            return ST_ConstraintType::default_instance();
        
        }
        bool has_for_attr(){

            return m_has_for_attr;
        
        }
        void set_for_attr(const ST_ConstraintRelationship& _for_attr ){

            m_has_for_attr = true;
            m_for_attr = new ST_ConstraintRelationship(_for_attr);
        
        }
        const ST_ConstraintRelationship& for_attr(){

            if (m_for_attr)
            {
                return *m_for_attr;
            }
            return ST_ConstraintRelationship::default_instance();
        
        }
        bool has_forName_attr(){

            return m_has_forName_attr;
        
        }
        void set_forName_attr(const string& _forName_attr ){

        m_has_forName_attr = true;
        m_forName_attr = _forName_attr;
        
        }
        const string& forName_attr(){

            return type: \string\nname: \m_forName_attr\n;
        
        }
        bool has_ptType_attr(){

            return m_has_ptType_attr;
        
        }
        void set_ptType_attr(const ST_ElementType& _ptType_attr ){

            m_has_ptType_attr = true;
            m_ptType_attr = new ST_ElementType(_ptType_attr);
        
        }
        const ST_ElementType& ptType_attr(){

            if (m_ptType_attr)
            {
                return *m_ptType_attr;
            }
            return ST_ElementType::default_instance();
        
        }
        bool has_val_attr(){

            return m_has_val_attr;
        
        }
        void set_val_attr(const double& _val_attr ){

        m_has_val_attr = true;
        m_val_attr = _val_attr;
        
        }
        const double& val_attr(){

            return type: \double\nname: \m_val_attr\n;
        
        }
        bool has_fact_attr(){

            return m_has_fact_attr;
        
        }
        void set_fact_attr(const double& _fact_attr ){

        m_has_fact_attr = true;
        m_fact_attr = _fact_attr;
        
        }
        const double& fact_attr(){

            return type: \double\nname: \m_fact_attr\n;
        
        }
        bool has_max_attr(){

            return m_has_max_attr;
        
        }
        void set_max_attr(const double& _max_attr ){

        m_has_max_attr = true;
        m_max_attr = _max_attr;
        
        }
        const double& max_attr(){

            return type: \double\nname: \m_max_attr\n;
        
        }

    private:
        bool m_has_extLst ;
        ns_a::CT_OfficeArtExtensionList* m_extLst ;
        static CT_NumericRule* default_instance_ ;
        bool m_has_type_attr ;
        ST_ConstraintType* m_type_attr ;
        bool m_has_for_attr ;
        ST_ConstraintRelationship* m_for_attr ;
        bool m_has_forName_attr ;
        string m_forName_attr ;
        bool m_has_ptType_attr ;
        ST_ElementType* m_ptType_attr ;
        bool m_has_val_attr ;
        double m_val_attr ;
        bool m_has_fact_attr ;
        double m_fact_attr ;
        bool m_has_max_attr ;
        double m_max_attr ;

    }

    class CT_Rules : public XSD::ComplexType{
    public:
        bool has_rule(){

            return m_has_rule;
        
        }
        CT_NumericRule* mutable_rule(){

                m_has_rule = true;
                if (!m_rule)
                {
                    m_rule = new CT_NumericRule();
                }
                return m_rule;
            
        }
        const CT_NumericRule& rule(){

            if (m_rule)
            {
                return *m_rule;
            }
            return CT_NumericRule::default_instance();
        
        }
        void clear(){

                m_has_rule = false;
                
        if (m_rule)
        {
            delete m_rule;
            m_rule = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_rule)
                {
                    m_rule->toXml(\d:rule\, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_Rules& default_instance(){

    if (!CT_Rules::default_instance_)
    {
        CT_Rules::default_instance_ = new CT_Rules();
    }
    return *CT_Rules::default_instance_;

        }

    private:
        bool m_has_rule ;
        CT_NumericRule* m_rule ;
        static CT_Rules* default_instance_ ;

    }

    class CT_PresentationOf : public XSD::ComplexType{
    public:
        bool has_extLst(){

            return m_has_extLst;
        
        }
        ns_a::CT_OfficeArtExtensionList* mutable_extLst(){

                m_has_extLst = true;
                if (!m_extLst)
                {
                    m_extLst = new ns_a::CT_OfficeArtExtensionList();
                }
                return m_extLst;
            
        }
        const ns_a::CT_OfficeArtExtensionList& extLst(){

            if (m_extLst)
            {
                return *m_extLst;
            }
            return ns_a::CT_OfficeArtExtensionList::default_instance();
        
        }
        void clear(){

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
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    (varName)s->toXml(xis\, _outStream);
(varName)s->toXml(\ptType\, _outStream);
(varName)s->toXml(\hideLastTrans\, _outStream);
(varName)s->toXml(\st\, _outStream);
(varName)s->toXml(\cnt\, _outStream);
(varName)s->toXml(\step\, _outStream);
        _outStream << \>\;
    
                if (m_has_extLst)
                {
                    m_extLst->toXml(\d:extLst\, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_PresentationOf& default_instance(){

    if (!CT_PresentationOf::default_instance_)
    {
        CT_PresentationOf::default_instance_ = new CT_PresentationOf();
    }
    return *CT_PresentationOf::default_instance_;

        }
        bool has_axis_attr(){

            return m_has_axis_attr;
        
        }
        void set_axis_attr(const ST_AxisTypes& _axis_attr ){

            m_has_axis_attr = true;
            m_axis_attr = new ST_AxisTypes(_axis_attr);
        
        }
        const ST_AxisTypes& axis_attr(){

            if (m_axis_attr)
            {
                return *m_axis_attr;
            }
            return ST_AxisTypes::default_instance();
        
        }
        bool has_ptType_attr(){

            return m_has_ptType_attr;
        
        }
        void set_ptType_attr(const ST_ElementTypes& _ptType_attr ){

            m_has_ptType_attr = true;
            m_ptType_attr = new ST_ElementTypes(_ptType_attr);
        
        }
        const ST_ElementTypes& ptType_attr(){

            if (m_ptType_attr)
            {
                return *m_ptType_attr;
            }
            return ST_ElementTypes::default_instance();
        
        }
        bool has_hideLastTrans_attr(){

            return m_has_hideLastTrans_attr;
        
        }
        void set_hideLastTrans_attr(const ST_Booleans& _hideLastTrans_attr ){

            m_has_hideLastTrans_attr = true;
            m_hideLastTrans_attr = new ST_Booleans(_hideLastTrans_attr);
        
        }
        const ST_Booleans& hideLastTrans_attr(){

            if (m_hideLastTrans_attr)
            {
                return *m_hideLastTrans_attr;
            }
            return ST_Booleans::default_instance();
        
        }
        bool has_st_attr(){

            return m_has_st_attr;
        
        }
        void set_st_attr(const ST_Ints& _st_attr ){

            m_has_st_attr = true;
            m_st_attr = new ST_Ints(_st_attr);
        
        }
        const ST_Ints& st_attr(){

            if (m_st_attr)
            {
                return *m_st_attr;
            }
            return ST_Ints::default_instance();
        
        }
        bool has_cnt_attr(){

            return m_has_cnt_attr;
        
        }
        void set_cnt_attr(const ST_UnsignedInts& _cnt_attr ){

            m_has_cnt_attr = true;
            m_cnt_attr = new ST_UnsignedInts(_cnt_attr);
        
        }
        const ST_UnsignedInts& cnt_attr(){

            if (m_cnt_attr)
            {
                return *m_cnt_attr;
            }
            return ST_UnsignedInts::default_instance();
        
        }
        bool has_step_attr(){

            return m_has_step_attr;
        
        }
        void set_step_attr(const ST_Ints& _step_attr ){

            m_has_step_attr = true;
            m_step_attr = new ST_Ints(_step_attr);
        
        }
        const ST_Ints& step_attr(){

            if (m_step_attr)
            {
                return *m_step_attr;
            }
            return ST_Ints::default_instance();
        
        }

    private:
        bool m_has_extLst ;
        ns_a::CT_OfficeArtExtensionList* m_extLst ;
        static CT_PresentationOf* default_instance_ ;
        bool m_has_axis_attr ;
        ST_AxisTypes* m_axis_attr ;
        bool m_has_ptType_attr ;
        ST_ElementTypes* m_ptType_attr ;
        bool m_has_hideLastTrans_attr ;
        ST_Booleans* m_hideLastTrans_attr ;
        bool m_has_st_attr ;
        ST_Ints* m_st_attr ;
        bool m_has_cnt_attr ;
        ST_UnsignedInts* m_cnt_attr ;
        bool m_has_step_attr ;
        ST_Ints* m_step_attr ;

    }

    class CT_Adj : public XSD::ComplexType{
    public:
        void clear(){

                m_has_idx_attr = false;
                
        if (m_idx_attr)
        {
            delete m_idx_attr;
            m_idx_attr = NULL;
        }
    
            
                m_has_val_attr = false;
                m_val_attr = 0;
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    (varName)s->toXml(\idx\, _outStream);
_outStream << _attrName << \=\\ << m_val_attr << \\\;
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_Adj& default_instance(){

    if (!CT_Adj::default_instance_)
    {
        CT_Adj::default_instance_ = new CT_Adj();
    }
    return *CT_Adj::default_instance_;

        }
        bool has_idx_attr(){

            return m_has_idx_attr;
        
        }
        void set_idx_attr(const ST_Index1& _idx_attr ){

            m_has_idx_attr = true;
            m_idx_attr = new ST_Index1(_idx_attr);
        
        }
        const ST_Index1& idx_attr(){

            if (m_idx_attr)
            {
                return *m_idx_attr;
            }
            return ST_Index1::default_instance();
        
        }
        bool has_val_attr(){

            return m_has_val_attr;
        
        }
        void set_val_attr(const double& _val_attr ){

        m_has_val_attr = true;
        m_val_attr = _val_attr;
        
        }
        const double& val_attr(){

            return type: \double\nname: \m_val_attr\n;
        
        }

    private:
        static CT_Adj* default_instance_ ;
        bool m_has_idx_attr ;
        ST_Index1* m_idx_attr ;
        bool m_has_val_attr ;
        double m_val_attr ;

    }

    class CT_AdjLst : public XSD::ComplexType{
    public:
        bool has_adj(){

            return m_has_adj;
        
        }
        CT_Adj* mutable_adj(){

                m_has_adj = true;
                if (!m_adj)
                {
                    m_adj = new CT_Adj();
                }
                return m_adj;
            
        }
        const CT_Adj& adj(){

            if (m_adj)
            {
                return *m_adj;
            }
            return CT_Adj::default_instance();
        
        }
        void clear(){

                m_has_adj = false;
                
        if (m_adj)
        {
            delete m_adj;
            m_adj = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_adj)
                {
                    m_adj->toXml(\d:adj\, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_AdjLst& default_instance(){

    if (!CT_AdjLst::default_instance_)
    {
        CT_AdjLst::default_instance_ = new CT_AdjLst();
    }
    return *CT_AdjLst::default_instance_;

        }

    private:
        bool m_has_adj ;
        CT_Adj* m_adj ;
        static CT_AdjLst* default_instance_ ;

    }

    class CT_Shape : public XSD::ComplexType{
    public:
        bool has_adjLst(){

            return m_has_adjLst;
        
        }
        CT_AdjLst* mutable_adjLst(){

                m_has_adjLst = true;
                if (!m_adjLst)
                {
                    m_adjLst = new CT_AdjLst();
                }
                return m_adjLst;
            
        }
        const CT_AdjLst& adjLst(){

            if (m_adjLst)
            {
                return *m_adjLst;
            }
            return CT_AdjLst::default_instance();
        
        }
        bool has_extLst(){

            return m_has_extLst;
        
        }
        ns_a::CT_OfficeArtExtensionList* mutable_extLst(){

                m_has_extLst = true;
                if (!m_extLst)
                {
                    m_extLst = new ns_a::CT_OfficeArtExtensionList();
                }
                return m_extLst;
            
        }
        const ns_a::CT_OfficeArtExtensionList& extLst(){

            if (m_extLst)
            {
                return *m_extLst;
            }
            return ns_a::CT_OfficeArtExtensionList::default_instance();
        
        }
        void clear(){

                m_has_rot_attr = false;
                m_rot_attr = 0;
            
                m_has_type_attr = false;
                
        if (m_type_attr)
        {
            delete m_type_attr;
            m_type_attr = NULL;
        }
    
            
                m_has_blip_attr = false;
                
        if (m_blip_attr)
        {
            delete m_blip_attr;
            m_blip_attr = NULL;
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
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    _outStream << _attrName << \=\\ << m_rot_attr << \\\;
(varName)s->toXml(	ype\, _outStream);
(varName)s->toXml(lip\, _outStream);
_outStream << _attrName << \=\\ << m_zOrderOff_attr << \\\;
_outStream << _attrName << \=\\ << XSD::BooleanStr(m_hideGeom_attr) << \\\;
_outStream << _attrName << \=\\ << XSD::BooleanStr(m_lkTxEntry_attr) << \\\;
_outStream << _attrName << \=\\ << XSD::BooleanStr(m_blipPhldr_attr) << \\\;
        _outStream << \>\;
    
                if (m_has_adjLst)
                {
                    m_adjLst->toXml(\d:adjLst\, _outStream);;
                }
            
                if (m_has_extLst)
                {
                    m_adjLst->toXml(\d:extLst\, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_Shape& default_instance(){

    if (!CT_Shape::default_instance_)
    {
        CT_Shape::default_instance_ = new CT_Shape();
    }
    return *CT_Shape::default_instance_;

        }
        bool has_rot_attr(){

            return m_has_rot_attr;
        
        }
        void set_rot_attr(const double& _rot_attr ){

        m_has_rot_attr = true;
        m_rot_attr = _rot_attr;
        
        }
        const double& rot_attr(){

            return type: \double\nname: \m_rot_attr\n;
        
        }
        bool has_type_attr(){

            return m_has_type_attr;
        
        }
        void set_type_attr(const ST_LayoutShapeType& _type_attr ){

            m_has_type_attr = true;
            m_type_attr = new ST_LayoutShapeType(_type_attr);
        
        }
        const ST_LayoutShapeType& type_attr(){

            if (m_type_attr)
            {
                return *m_type_attr;
            }
            return ST_LayoutShapeType::default_instance();
        
        }
        bool has_blip_attr(){

            return m_has_blip_attr;
        
        }
        void set_blip_attr(const ST_RelationshipId& _blip_attr ){

            m_has_blip_attr = true;
            m_blip_attr = new ST_RelationshipId(_blip_attr);
        
        }
        const ST_RelationshipId& blip_attr(){

            if (m_blip_attr)
            {
                return *m_blip_attr;
            }
            return ST_RelationshipId::default_instance();
        
        }
        bool has_zOrderOff_attr(){

            return m_has_zOrderOff_attr;
        
        }
        void set_zOrderOff_attr(const int& _zOrderOff_attr ){

        m_has_zOrderOff_attr = true;
        m_zOrderOff_attr = _zOrderOff_attr;
        
        }
        const int& zOrderOff_attr(){

            return type: \int\nname: \m_zOrderOff_attr\n;
        
        }
        bool has_hideGeom_attr(){

            return m_has_hideGeom_attr;
        
        }
        void set_hideGeom_attr(const boolean& _hideGeom_attr ){

        m_has_hideGeom_attr = true;
        m_hideGeom_attr = _hideGeom_attr;
        
        }
        const boolean& hideGeom_attr(){

            return type: oolean\nname: \m_hideGeom_attr\n;
        
        }
        bool has_lkTxEntry_attr(){

            return m_has_lkTxEntry_attr;
        
        }
        void set_lkTxEntry_attr(const boolean& _lkTxEntry_attr ){

        m_has_lkTxEntry_attr = true;
        m_lkTxEntry_attr = _lkTxEntry_attr;
        
        }
        const boolean& lkTxEntry_attr(){

            return type: oolean\nname: \m_lkTxEntry_attr\n;
        
        }
        bool has_blipPhldr_attr(){

            return m_has_blipPhldr_attr;
        
        }
        void set_blipPhldr_attr(const boolean& _blipPhldr_attr ){

        m_has_blipPhldr_attr = true;
        m_blipPhldr_attr = _blipPhldr_attr;
        
        }
        const boolean& blipPhldr_attr(){

            return type: oolean\nname: \m_blipPhldr_attr\n;
        
        }

    private:
        bool m_has_adjLst ;
        CT_AdjLst* m_adjLst ;
        bool m_has_extLst ;
        ns_a::CT_OfficeArtExtensionList* m_extLst ;
        static CT_Shape* default_instance_ ;
        bool m_has_rot_attr ;
        double m_rot_attr ;
        bool m_has_type_attr ;
        ST_LayoutShapeType* m_type_attr ;
        bool m_has_blip_attr ;
        ST_RelationshipId* m_blip_attr ;
        bool m_has_zOrderOff_attr ;
        int m_zOrderOff_attr ;
        bool m_has_hideGeom_attr ;
        boolean m_hideGeom_attr ;
        bool m_has_lkTxEntry_attr ;
        boolean m_lkTxEntry_attr ;
        bool m_has_blipPhldr_attr ;
        boolean m_blipPhldr_attr ;

    }

    class CT_Parameter : public XSD::ComplexType{
    public:
        void clear(){

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
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    (varName)s->toXml(	ype\, _outStream);
(varName)s->toXml(al\, _outStream);
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_Parameter& default_instance(){

    if (!CT_Parameter::default_instance_)
    {
        CT_Parameter::default_instance_ = new CT_Parameter();
    }
    return *CT_Parameter::default_instance_;

        }
        bool has_type_attr(){

            return m_has_type_attr;
        
        }
        void set_type_attr(const ST_ParameterId& _type_attr ){

            m_has_type_attr = true;
            m_type_attr = new ST_ParameterId(_type_attr);
        
        }
        const ST_ParameterId& type_attr(){

            if (m_type_attr)
            {
                return *m_type_attr;
            }
            return ST_ParameterId::default_instance();
        
        }
        bool has_val_attr(){

            return m_has_val_attr;
        
        }
        void set_val_attr(const ST_ParameterVal& _val_attr ){

            m_has_val_attr = true;
            m_val_attr = new ST_ParameterVal(_val_attr);
        
        }
        const ST_ParameterVal& val_attr(){

            if (m_val_attr)
            {
                return *m_val_attr;
            }
            return ST_ParameterVal::default_instance();
        
        }

    private:
        static CT_Parameter* default_instance_ ;
        bool m_has_type_attr ;
        ST_ParameterId* m_type_attr ;
        bool m_has_val_attr ;
        ST_ParameterVal* m_val_attr ;

    }

    class CT_Algorithm : public XSD::ComplexType{
    public:
        bool has_param(){

            return m_has_param;
        
        }
        CT_Parameter* mutable_param(){

                m_has_param = true;
                if (!m_param)
                {
                    m_param = new CT_Parameter();
                }
                return m_param;
            
        }
        const CT_Parameter& param(){

            if (m_param)
            {
                return *m_param;
            }
            return CT_Parameter::default_instance();
        
        }
        bool has_extLst(){

            return m_has_extLst;
        
        }
        ns_a::CT_OfficeArtExtensionList* mutable_extLst(){

                m_has_extLst = true;
                if (!m_extLst)
                {
                    m_extLst = new ns_a::CT_OfficeArtExtensionList();
                }
                return m_extLst;
            
        }
        const ns_a::CT_OfficeArtExtensionList& extLst(){

            if (m_extLst)
            {
                return *m_extLst;
            }
            return ns_a::CT_OfficeArtExtensionList::default_instance();
        
        }
        void clear(){

                m_has_type_attr = false;
                
        if (m_type_attr)
        {
            delete m_type_attr;
            m_type_attr = NULL;
        }
    
            
                m_has_rev_attr = false;
                m_rev_attr = 0;
            
                m_has_param = false;
                
        if (m_param)
        {
            delete m_param;
            m_param = NULL;
        }
    
            
                m_has_extLst = false;
                
        if (m_extLst)
        {
            delete m_extLst;
            m_extLst = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    (varName)s->toXml(	ype\, _outStream);
_outStream << _attrName << \=\\ << m_rev_attr << \\\;
        _outStream << \>\;
    
                if (m_has_param)
                {
                    m_param->toXml(\d:param\, _outStream);;
                }
            
                if (m_has_extLst)
                {
                    m_param->toXml(\d:extLst\, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_Algorithm& default_instance(){

    if (!CT_Algorithm::default_instance_)
    {
        CT_Algorithm::default_instance_ = new CT_Algorithm();
    }
    return *CT_Algorithm::default_instance_;

        }
        bool has_type_attr(){

            return m_has_type_attr;
        
        }
        void set_type_attr(const ST_AlgorithmType& _type_attr ){

            m_has_type_attr = true;
            m_type_attr = new ST_AlgorithmType(_type_attr);
        
        }
        const ST_AlgorithmType& type_attr(){

            if (m_type_attr)
            {
                return *m_type_attr;
            }
            return ST_AlgorithmType::default_instance();
        
        }
        bool has_rev_attr(){

            return m_has_rev_attr;
        
        }
        void set_rev_attr(const unsignedInt& _rev_attr ){

        m_has_rev_attr = true;
        m_rev_attr = _rev_attr;
        
        }
        const unsignedInt& rev_attr(){

            return type: \unsignedInt\nname: \m_rev_attr\n;
        
        }

    private:
        bool m_has_param ;
        CT_Parameter* m_param ;
        bool m_has_extLst ;
        ns_a::CT_OfficeArtExtensionList* m_extLst ;
        static CT_Algorithm* default_instance_ ;
        bool m_has_type_attr ;
        ST_AlgorithmType* m_type_attr ;
        bool m_has_rev_attr ;
        unsignedInt m_rev_attr ;

    }

    class CT_LayoutNode : public XSD::ComplexType{
    public:
        CT_Algorithm* add_alg(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            CT_Algorithm* pNewChild = pChildGroup->mutable_alg();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        CT_Shape* add_shape(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            CT_Shape* pNewChild = pChildGroup->mutable_shape();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        CT_PresentationOf* add_presOf(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            CT_PresentationOf* pNewChild = pChildGroup->mutable_presOf();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        CT_Constraints* add_constrLst(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            CT_Constraints* pNewChild = pChildGroup->mutable_constrLst();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        CT_Rules* add_ruleLst(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            CT_Rules* pNewChild = pChildGroup->mutable_ruleLst();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        CT_LayoutVariablePropertySet* add_varLst(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            CT_LayoutVariablePropertySet* pNewChild = pChildGroup->mutable_varLst();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        CT_ForEach* add_forEach(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            CT_ForEach* pNewChild = pChildGroup->mutable_forEach();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        CT_LayoutNode* add_layoutNode(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            CT_LayoutNode* pNewChild = pChildGroup->mutable_layoutNode();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        CT_Choose* add_choose(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            CT_Choose* pNewChild = pChildGroup->mutable_choose();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        ns_a::CT_OfficeArtExtensionList* add_extLst(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            ns_a::CT_OfficeArtExtensionList* pNewChild = pChildGroup->mutable_extLst();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        void clear(){

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
            
            vector<ChildGroup_1*>::iterator iter;
            for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
            {
                delete *iter;
            }
            m_childGroupList_1.clear();
        
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    _outStream << _attrName << \=\\ << m_name_attr << \\\;
_outStream << _attrName << \=\\ << m_styleLbl_attr << \\\;
(varName)s->toXml(\chOrder\, _outStream);
_outStream << _attrName << \=\\ << m_moveWith_attr << \\\;
        _outStream << \>\;
    
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_alg())
            {
                (*iter)->toXml(\d:alg\, _outStream);
            }
            else if ((*iter)->has_shape())
            {
                (*iter)->toXml(\d:shape\, _outStream);
            }
            else if ((*iter)->has_presOf())
            {
                (*iter)->toXml(\d:presOf\, _outStream);
            }
            else if ((*iter)->has_constrLst())
            {
                (*iter)->toXml(\d:constrLst\, _outStream);
            }
            else if ((*iter)->has_ruleLst())
            {
                (*iter)->toXml(\d:ruleLst\, _outStream);
            }
            else if ((*iter)->has_varLst())
            {
                (*iter)->toXml(\d:varLst\, _outStream);
            }
            else if ((*iter)->has_forEach())
            {
                (*iter)->toXml(\d:forEach\, _outStream);
            }
            else if ((*iter)->has_layoutNode())
            {
                (*iter)->toXml(\d:layoutNode\, _outStream);
            }
            else if ((*iter)->has_choose())
            {
                (*iter)->toXml(\d:choose\, _outStream);
            }
            else if ((*iter)->has_extLst())
            {
                (*iter)->toXml(\d:extLst\, _outStream);
            }
        }
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_LayoutNode& default_instance(){

    if (!CT_LayoutNode::default_instance_)
    {
        CT_LayoutNode::default_instance_ = new CT_LayoutNode();
    }
    return *CT_LayoutNode::default_instance_;

        }
        bool has_name_attr(){

            return m_has_name_attr;
        
        }
        void set_name_attr(const string& _name_attr ){

        m_has_name_attr = true;
        m_name_attr = _name_attr;
        
        }
        const string& name_attr(){

            return type: \string\nname: \m_name_attr\n;
        
        }
        bool has_styleLbl_attr(){

            return m_has_styleLbl_attr;
        
        }
        void set_styleLbl_attr(const string& _styleLbl_attr ){

        m_has_styleLbl_attr = true;
        m_styleLbl_attr = _styleLbl_attr;
        
        }
        const string& styleLbl_attr(){

            return type: \string\nname: \m_styleLbl_attr\n;
        
        }
        bool has_chOrder_attr(){

            return m_has_chOrder_attr;
        
        }
        void set_chOrder_attr(const ST_ChildOrderType& _chOrder_attr ){

            m_has_chOrder_attr = true;
            m_chOrder_attr = new ST_ChildOrderType(_chOrder_attr);
        
        }
        const ST_ChildOrderType& chOrder_attr(){

            if (m_chOrder_attr)
            {
                return *m_chOrder_attr;
            }
            return ST_ChildOrderType::default_instance();
        
        }
        bool has_moveWith_attr(){

            return m_has_moveWith_attr;
        
        }
        void set_moveWith_attr(const string& _moveWith_attr ){

        m_has_moveWith_attr = true;
        m_moveWith_attr = _moveWith_attr;
        
        }
        const string& moveWith_attr(){

            return type: \string\nname: \m_moveWith_attr\n;
        
        }

    private:
        vector<ChildGroup_1*> m_childGroupList_1 ;
        static CT_LayoutNode* default_instance_ ;
        bool m_has_name_attr ;
        string m_name_attr ;
        bool m_has_styleLbl_attr ;
        string m_styleLbl_attr ;
        bool m_has_chOrder_attr ;
        ST_ChildOrderType* m_chOrder_attr ;
        bool m_has_moveWith_attr ;
        string m_moveWith_attr ;
        class ChildGroup_1{
        public:
            bool has_alg(){

            return m_has_alg;
        
            }
            CT_Algorithm* mutable_alg(){

                
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
            const CT_Algorithm& alg(){

            if (m_alg)
            {
                return *m_alg;
            }
            return CT_Algorithm::default_instance();
        
            }
            bool has_shape(){

            return m_has_shape;
        
            }
            CT_Shape* mutable_shape(){

                
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
            const CT_Shape& shape(){

            if (m_shape)
            {
                return *m_shape;
            }
            return CT_Shape::default_instance();
        
            }
            bool has_presOf(){

            return m_has_presOf;
        
            }
            CT_PresentationOf* mutable_presOf(){

                
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
            const CT_PresentationOf& presOf(){

            if (m_presOf)
            {
                return *m_presOf;
            }
            return CT_PresentationOf::default_instance();
        
            }
            bool has_constrLst(){

            return m_has_constrLst;
        
            }
            CT_Constraints* mutable_constrLst(){

                
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
            const CT_Constraints& constrLst(){

            if (m_constrLst)
            {
                return *m_constrLst;
            }
            return CT_Constraints::default_instance();
        
            }
            bool has_ruleLst(){

            return m_has_ruleLst;
        
            }
            CT_Rules* mutable_ruleLst(){

                
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
            const CT_Rules& ruleLst(){

            if (m_ruleLst)
            {
                return *m_ruleLst;
            }
            return CT_Rules::default_instance();
        
            }
            bool has_varLst(){

            return m_has_varLst;
        
            }
            CT_LayoutVariablePropertySet* mutable_varLst(){

                
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
            const CT_LayoutVariablePropertySet& varLst(){

            if (m_varLst)
            {
                return *m_varLst;
            }
            return CT_LayoutVariablePropertySet::default_instance();
        
            }
            bool has_forEach(){

            return m_has_forEach;
        
            }
            CT_ForEach* mutable_forEach(){

                
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
            const CT_ForEach& forEach(){

            if (m_forEach)
            {
                return *m_forEach;
            }
            return CT_ForEach::default_instance();
        
            }
            bool has_layoutNode(){

            return m_has_layoutNode;
        
            }
            CT_LayoutNode* mutable_layoutNode(){

                
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
            const CT_LayoutNode& layoutNode(){

            if (m_layoutNode)
            {
                return *m_layoutNode;
            }
            return CT_LayoutNode::default_instance();
        
            }
            bool has_choose(){

            return m_has_choose;
        
            }
            CT_Choose* mutable_choose(){

                
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
            const CT_Choose& choose(){

            if (m_choose)
            {
                return *m_choose;
            }
            return CT_Choose::default_instance();
        
            }
            bool has_extLst(){

            return m_has_extLst;
        
            }
            ns_a::CT_OfficeArtExtensionList* mutable_extLst(){

                
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
            const ns_a::CT_OfficeArtExtensionList& extLst(){

            if (m_extLst)
            {
                return *m_extLst;
            }
            return ns_a::CT_OfficeArtExtensionList::default_instance();
        
            }

        private:
            bool m_has_alg ;
            CT_Algorithm* m_alg ;
            bool m_has_shape ;
            CT_Shape* m_shape ;
            bool m_has_presOf ;
            CT_PresentationOf* m_presOf ;
            bool m_has_constrLst ;
            CT_Constraints* m_constrLst ;
            bool m_has_ruleLst ;
            CT_Rules* m_ruleLst ;
            bool m_has_varLst ;
            CT_LayoutVariablePropertySet* m_varLst ;
            bool m_has_forEach ;
            CT_ForEach* m_forEach ;
            bool m_has_layoutNode ;
            CT_LayoutNode* m_layoutNode ;
            bool m_has_choose ;
            CT_Choose* m_choose ;
            bool m_has_extLst ;
            ns_a::CT_OfficeArtExtensionList* m_extLst ;

        }


    }

    class CT_ForEach : public XSD::ComplexType{
    public:
        CT_Algorithm* add_alg(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            CT_Algorithm* pNewChild = pChildGroup->mutable_alg();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        CT_Shape* add_shape(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            CT_Shape* pNewChild = pChildGroup->mutable_shape();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        CT_PresentationOf* add_presOf(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            CT_PresentationOf* pNewChild = pChildGroup->mutable_presOf();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        CT_Constraints* add_constrLst(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            CT_Constraints* pNewChild = pChildGroup->mutable_constrLst();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        CT_Rules* add_ruleLst(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            CT_Rules* pNewChild = pChildGroup->mutable_ruleLst();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        CT_ForEach* add_forEach(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            CT_ForEach* pNewChild = pChildGroup->mutable_forEach();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        CT_LayoutNode* add_layoutNode(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            CT_LayoutNode* pNewChild = pChildGroup->mutable_layoutNode();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        CT_Choose* add_choose(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            CT_Choose* pNewChild = pChildGroup->mutable_choose();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        ns_a::CT_OfficeArtExtensionList* add_extLst(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            ns_a::CT_OfficeArtExtensionList* pNewChild = pChildGroup->mutable_extLst();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        void clear(){

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
    
            
            vector<ChildGroup_1*>::iterator iter;
            for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
            {
                delete *iter;
            }
            m_childGroupList_1.clear();
        
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    _outStream << _attrName << \=\\ << m_name_attr << \\\;
_outStream << _attrName << \=\\ << m_ref_attr << \\\;
(varName)s->toXml(xis\, _outStream);
(varName)s->toXml(\ptType\, _outStream);
(varName)s->toXml(\hideLastTrans\, _outStream);
(varName)s->toXml(\st\, _outStream);
(varName)s->toXml(\cnt\, _outStream);
(varName)s->toXml(\step\, _outStream);
        _outStream << \>\;
    
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_alg())
            {
                (*iter)->toXml(\d:alg\, _outStream);
            }
            else if ((*iter)->has_shape())
            {
                (*iter)->toXml(\d:shape\, _outStream);
            }
            else if ((*iter)->has_presOf())
            {
                (*iter)->toXml(\d:presOf\, _outStream);
            }
            else if ((*iter)->has_constrLst())
            {
                (*iter)->toXml(\d:constrLst\, _outStream);
            }
            else if ((*iter)->has_ruleLst())
            {
                (*iter)->toXml(\d:ruleLst\, _outStream);
            }
            else if ((*iter)->has_forEach())
            {
                (*iter)->toXml(\d:forEach\, _outStream);
            }
            else if ((*iter)->has_layoutNode())
            {
                (*iter)->toXml(\d:layoutNode\, _outStream);
            }
            else if ((*iter)->has_choose())
            {
                (*iter)->toXml(\d:choose\, _outStream);
            }
            else if ((*iter)->has_extLst())
            {
                (*iter)->toXml(\d:extLst\, _outStream);
            }
        }
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_ForEach& default_instance(){

    if (!CT_ForEach::default_instance_)
    {
        CT_ForEach::default_instance_ = new CT_ForEach();
    }
    return *CT_ForEach::default_instance_;

        }
        bool has_name_attr(){

            return m_has_name_attr;
        
        }
        void set_name_attr(const string& _name_attr ){

        m_has_name_attr = true;
        m_name_attr = _name_attr;
        
        }
        const string& name_attr(){

            return type: \string\nname: \m_name_attr\n;
        
        }
        bool has_ref_attr(){

            return m_has_ref_attr;
        
        }
        void set_ref_attr(const string& _ref_attr ){

        m_has_ref_attr = true;
        m_ref_attr = _ref_attr;
        
        }
        const string& ref_attr(){

            return type: \string\nname: \m_ref_attr\n;
        
        }
        bool has_axis_attr(){

            return m_has_axis_attr;
        
        }
        void set_axis_attr(const ST_AxisTypes& _axis_attr ){

            m_has_axis_attr = true;
            m_axis_attr = new ST_AxisTypes(_axis_attr);
        
        }
        const ST_AxisTypes& axis_attr(){

            if (m_axis_attr)
            {
                return *m_axis_attr;
            }
            return ST_AxisTypes::default_instance();
        
        }
        bool has_ptType_attr(){

            return m_has_ptType_attr;
        
        }
        void set_ptType_attr(const ST_ElementTypes& _ptType_attr ){

            m_has_ptType_attr = true;
            m_ptType_attr = new ST_ElementTypes(_ptType_attr);
        
        }
        const ST_ElementTypes& ptType_attr(){

            if (m_ptType_attr)
            {
                return *m_ptType_attr;
            }
            return ST_ElementTypes::default_instance();
        
        }
        bool has_hideLastTrans_attr(){

            return m_has_hideLastTrans_attr;
        
        }
        void set_hideLastTrans_attr(const ST_Booleans& _hideLastTrans_attr ){

            m_has_hideLastTrans_attr = true;
            m_hideLastTrans_attr = new ST_Booleans(_hideLastTrans_attr);
        
        }
        const ST_Booleans& hideLastTrans_attr(){

            if (m_hideLastTrans_attr)
            {
                return *m_hideLastTrans_attr;
            }
            return ST_Booleans::default_instance();
        
        }
        bool has_st_attr(){

            return m_has_st_attr;
        
        }
        void set_st_attr(const ST_Ints& _st_attr ){

            m_has_st_attr = true;
            m_st_attr = new ST_Ints(_st_attr);
        
        }
        const ST_Ints& st_attr(){

            if (m_st_attr)
            {
                return *m_st_attr;
            }
            return ST_Ints::default_instance();
        
        }
        bool has_cnt_attr(){

            return m_has_cnt_attr;
        
        }
        void set_cnt_attr(const ST_UnsignedInts& _cnt_attr ){

            m_has_cnt_attr = true;
            m_cnt_attr = new ST_UnsignedInts(_cnt_attr);
        
        }
        const ST_UnsignedInts& cnt_attr(){

            if (m_cnt_attr)
            {
                return *m_cnt_attr;
            }
            return ST_UnsignedInts::default_instance();
        
        }
        bool has_step_attr(){

            return m_has_step_attr;
        
        }
        void set_step_attr(const ST_Ints& _step_attr ){

            m_has_step_attr = true;
            m_step_attr = new ST_Ints(_step_attr);
        
        }
        const ST_Ints& step_attr(){

            if (m_step_attr)
            {
                return *m_step_attr;
            }
            return ST_Ints::default_instance();
        
        }

    private:
        vector<ChildGroup_1*> m_childGroupList_1 ;
        static CT_ForEach* default_instance_ ;
        bool m_has_name_attr ;
        string m_name_attr ;
        bool m_has_ref_attr ;
        string m_ref_attr ;
        bool m_has_axis_attr ;
        ST_AxisTypes* m_axis_attr ;
        bool m_has_ptType_attr ;
        ST_ElementTypes* m_ptType_attr ;
        bool m_has_hideLastTrans_attr ;
        ST_Booleans* m_hideLastTrans_attr ;
        bool m_has_st_attr ;
        ST_Ints* m_st_attr ;
        bool m_has_cnt_attr ;
        ST_UnsignedInts* m_cnt_attr ;
        bool m_has_step_attr ;
        ST_Ints* m_step_attr ;
        class ChildGroup_1{
        public:
            bool has_alg(){

            return m_has_alg;
        
            }
            CT_Algorithm* mutable_alg(){

                
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
            const CT_Algorithm& alg(){

            if (m_alg)
            {
                return *m_alg;
            }
            return CT_Algorithm::default_instance();
        
            }
            bool has_shape(){

            return m_has_shape;
        
            }
            CT_Shape* mutable_shape(){

                
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
            const CT_Shape& shape(){

            if (m_shape)
            {
                return *m_shape;
            }
            return CT_Shape::default_instance();
        
            }
            bool has_presOf(){

            return m_has_presOf;
        
            }
            CT_PresentationOf* mutable_presOf(){

                
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
            const CT_PresentationOf& presOf(){

            if (m_presOf)
            {
                return *m_presOf;
            }
            return CT_PresentationOf::default_instance();
        
            }
            bool has_constrLst(){

            return m_has_constrLst;
        
            }
            CT_Constraints* mutable_constrLst(){

                
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
            const CT_Constraints& constrLst(){

            if (m_constrLst)
            {
                return *m_constrLst;
            }
            return CT_Constraints::default_instance();
        
            }
            bool has_ruleLst(){

            return m_has_ruleLst;
        
            }
            CT_Rules* mutable_ruleLst(){

                
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
            const CT_Rules& ruleLst(){

            if (m_ruleLst)
            {
                return *m_ruleLst;
            }
            return CT_Rules::default_instance();
        
            }
            bool has_forEach(){

            return m_has_forEach;
        
            }
            CT_ForEach* mutable_forEach(){

                
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
            const CT_ForEach& forEach(){

            if (m_forEach)
            {
                return *m_forEach;
            }
            return CT_ForEach::default_instance();
        
            }
            bool has_layoutNode(){

            return m_has_layoutNode;
        
            }
            CT_LayoutNode* mutable_layoutNode(){

                
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
            const CT_LayoutNode& layoutNode(){

            if (m_layoutNode)
            {
                return *m_layoutNode;
            }
            return CT_LayoutNode::default_instance();
        
            }
            bool has_choose(){

            return m_has_choose;
        
            }
            CT_Choose* mutable_choose(){

                
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
            const CT_Choose& choose(){

            if (m_choose)
            {
                return *m_choose;
            }
            return CT_Choose::default_instance();
        
            }
            bool has_extLst(){

            return m_has_extLst;
        
            }
            ns_a::CT_OfficeArtExtensionList* mutable_extLst(){

                
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
            const ns_a::CT_OfficeArtExtensionList& extLst(){

            if (m_extLst)
            {
                return *m_extLst;
            }
            return ns_a::CT_OfficeArtExtensionList::default_instance();
        
            }

        private:
            bool m_has_alg ;
            CT_Algorithm* m_alg ;
            bool m_has_shape ;
            CT_Shape* m_shape ;
            bool m_has_presOf ;
            CT_PresentationOf* m_presOf ;
            bool m_has_constrLst ;
            CT_Constraints* m_constrLst ;
            bool m_has_ruleLst ;
            CT_Rules* m_ruleLst ;
            bool m_has_forEach ;
            CT_ForEach* m_forEach ;
            bool m_has_layoutNode ;
            CT_LayoutNode* m_layoutNode ;
            bool m_has_choose ;
            CT_Choose* m_choose ;
            bool m_has_extLst ;
            ns_a::CT_OfficeArtExtensionList* m_extLst ;

        }


    }

    class CT_When : public XSD::ComplexType{
    public:
        CT_Algorithm* add_alg(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            CT_Algorithm* pNewChild = pChildGroup->mutable_alg();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        CT_Shape* add_shape(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            CT_Shape* pNewChild = pChildGroup->mutable_shape();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        CT_PresentationOf* add_presOf(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            CT_PresentationOf* pNewChild = pChildGroup->mutable_presOf();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        CT_Constraints* add_constrLst(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            CT_Constraints* pNewChild = pChildGroup->mutable_constrLst();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        CT_Rules* add_ruleLst(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            CT_Rules* pNewChild = pChildGroup->mutable_ruleLst();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        CT_ForEach* add_forEach(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            CT_ForEach* pNewChild = pChildGroup->mutable_forEach();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        CT_LayoutNode* add_layoutNode(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            CT_LayoutNode* pNewChild = pChildGroup->mutable_layoutNode();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        CT_Choose* add_choose(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            CT_Choose* pNewChild = pChildGroup->mutable_choose();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        ns_a::CT_OfficeArtExtensionList* add_extLst(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            ns_a::CT_OfficeArtExtensionList* pNewChild = pChildGroup->mutable_extLst();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        void clear(){

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
    
            
            vector<ChildGroup_1*>::iterator iter;
            for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
            {
                delete *iter;
            }
            m_childGroupList_1.clear();
        
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    _outStream << _attrName << \=\\ << m_name_attr << \\\;
(varName)s->toXml(xis\, _outStream);
(varName)s->toXml(\ptType\, _outStream);
(varName)s->toXml(\hideLastTrans\, _outStream);
(varName)s->toXml(\st\, _outStream);
(varName)s->toXml(\cnt\, _outStream);
(varName)s->toXml(\step\, _outStream);
(varName)s->toXml(unc\, _outStream);
(varName)s->toXml(rg\, _outStream);
(varName)s->toXml(\op\, _outStream);
(varName)s->toXml(al\, _outStream);
        _outStream << \>\;
    
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_alg())
            {
                (*iter)->toXml(\d:alg\, _outStream);
            }
            else if ((*iter)->has_shape())
            {
                (*iter)->toXml(\d:shape\, _outStream);
            }
            else if ((*iter)->has_presOf())
            {
                (*iter)->toXml(\d:presOf\, _outStream);
            }
            else if ((*iter)->has_constrLst())
            {
                (*iter)->toXml(\d:constrLst\, _outStream);
            }
            else if ((*iter)->has_ruleLst())
            {
                (*iter)->toXml(\d:ruleLst\, _outStream);
            }
            else if ((*iter)->has_forEach())
            {
                (*iter)->toXml(\d:forEach\, _outStream);
            }
            else if ((*iter)->has_layoutNode())
            {
                (*iter)->toXml(\d:layoutNode\, _outStream);
            }
            else if ((*iter)->has_choose())
            {
                (*iter)->toXml(\d:choose\, _outStream);
            }
            else if ((*iter)->has_extLst())
            {
                (*iter)->toXml(\d:extLst\, _outStream);
            }
        }
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_When& default_instance(){

    if (!CT_When::default_instance_)
    {
        CT_When::default_instance_ = new CT_When();
    }
    return *CT_When::default_instance_;

        }
        bool has_name_attr(){

            return m_has_name_attr;
        
        }
        void set_name_attr(const string& _name_attr ){

        m_has_name_attr = true;
        m_name_attr = _name_attr;
        
        }
        const string& name_attr(){

            return type: \string\nname: \m_name_attr\n;
        
        }
        bool has_axis_attr(){

            return m_has_axis_attr;
        
        }
        void set_axis_attr(const ST_AxisTypes& _axis_attr ){

            m_has_axis_attr = true;
            m_axis_attr = new ST_AxisTypes(_axis_attr);
        
        }
        const ST_AxisTypes& axis_attr(){

            if (m_axis_attr)
            {
                return *m_axis_attr;
            }
            return ST_AxisTypes::default_instance();
        
        }
        bool has_ptType_attr(){

            return m_has_ptType_attr;
        
        }
        void set_ptType_attr(const ST_ElementTypes& _ptType_attr ){

            m_has_ptType_attr = true;
            m_ptType_attr = new ST_ElementTypes(_ptType_attr);
        
        }
        const ST_ElementTypes& ptType_attr(){

            if (m_ptType_attr)
            {
                return *m_ptType_attr;
            }
            return ST_ElementTypes::default_instance();
        
        }
        bool has_hideLastTrans_attr(){

            return m_has_hideLastTrans_attr;
        
        }
        void set_hideLastTrans_attr(const ST_Booleans& _hideLastTrans_attr ){

            m_has_hideLastTrans_attr = true;
            m_hideLastTrans_attr = new ST_Booleans(_hideLastTrans_attr);
        
        }
        const ST_Booleans& hideLastTrans_attr(){

            if (m_hideLastTrans_attr)
            {
                return *m_hideLastTrans_attr;
            }
            return ST_Booleans::default_instance();
        
        }
        bool has_st_attr(){

            return m_has_st_attr;
        
        }
        void set_st_attr(const ST_Ints& _st_attr ){

            m_has_st_attr = true;
            m_st_attr = new ST_Ints(_st_attr);
        
        }
        const ST_Ints& st_attr(){

            if (m_st_attr)
            {
                return *m_st_attr;
            }
            return ST_Ints::default_instance();
        
        }
        bool has_cnt_attr(){

            return m_has_cnt_attr;
        
        }
        void set_cnt_attr(const ST_UnsignedInts& _cnt_attr ){

            m_has_cnt_attr = true;
            m_cnt_attr = new ST_UnsignedInts(_cnt_attr);
        
        }
        const ST_UnsignedInts& cnt_attr(){

            if (m_cnt_attr)
            {
                return *m_cnt_attr;
            }
            return ST_UnsignedInts::default_instance();
        
        }
        bool has_step_attr(){

            return m_has_step_attr;
        
        }
        void set_step_attr(const ST_Ints& _step_attr ){

            m_has_step_attr = true;
            m_step_attr = new ST_Ints(_step_attr);
        
        }
        const ST_Ints& step_attr(){

            if (m_step_attr)
            {
                return *m_step_attr;
            }
            return ST_Ints::default_instance();
        
        }
        bool has_func_attr(){

            return m_has_func_attr;
        
        }
        void set_func_attr(const ST_FunctionType& _func_attr ){

            m_has_func_attr = true;
            m_func_attr = new ST_FunctionType(_func_attr);
        
        }
        const ST_FunctionType& func_attr(){

            if (m_func_attr)
            {
                return *m_func_attr;
            }
            return ST_FunctionType::default_instance();
        
        }
        bool has_arg_attr(){

            return m_has_arg_attr;
        
        }
        void set_arg_attr(const ST_FunctionArgument& _arg_attr ){

            m_has_arg_attr = true;
            m_arg_attr = new ST_FunctionArgument(_arg_attr);
        
        }
        const ST_FunctionArgument& arg_attr(){

            if (m_arg_attr)
            {
                return *m_arg_attr;
            }
            return ST_FunctionArgument::default_instance();
        
        }
        bool has_op_attr(){

            return m_has_op_attr;
        
        }
        void set_op_attr(const ST_FunctionOperator& _op_attr ){

            m_has_op_attr = true;
            m_op_attr = new ST_FunctionOperator(_op_attr);
        
        }
        const ST_FunctionOperator& op_attr(){

            if (m_op_attr)
            {
                return *m_op_attr;
            }
            return ST_FunctionOperator::default_instance();
        
        }
        bool has_val_attr(){

            return m_has_val_attr;
        
        }
        void set_val_attr(const ST_FunctionValue& _val_attr ){

            m_has_val_attr = true;
            m_val_attr = new ST_FunctionValue(_val_attr);
        
        }
        const ST_FunctionValue& val_attr(){

            if (m_val_attr)
            {
                return *m_val_attr;
            }
            return ST_FunctionValue::default_instance();
        
        }

    private:
        vector<ChildGroup_1*> m_childGroupList_1 ;
        static CT_When* default_instance_ ;
        bool m_has_name_attr ;
        string m_name_attr ;
        bool m_has_axis_attr ;
        ST_AxisTypes* m_axis_attr ;
        bool m_has_ptType_attr ;
        ST_ElementTypes* m_ptType_attr ;
        bool m_has_hideLastTrans_attr ;
        ST_Booleans* m_hideLastTrans_attr ;
        bool m_has_st_attr ;
        ST_Ints* m_st_attr ;
        bool m_has_cnt_attr ;
        ST_UnsignedInts* m_cnt_attr ;
        bool m_has_step_attr ;
        ST_Ints* m_step_attr ;
        bool m_has_func_attr ;
        ST_FunctionType* m_func_attr ;
        bool m_has_arg_attr ;
        ST_FunctionArgument* m_arg_attr ;
        bool m_has_op_attr ;
        ST_FunctionOperator* m_op_attr ;
        bool m_has_val_attr ;
        ST_FunctionValue* m_val_attr ;
        class ChildGroup_1{
        public:
            bool has_alg(){

            return m_has_alg;
        
            }
            CT_Algorithm* mutable_alg(){

                
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
            const CT_Algorithm& alg(){

            if (m_alg)
            {
                return *m_alg;
            }
            return CT_Algorithm::default_instance();
        
            }
            bool has_shape(){

            return m_has_shape;
        
            }
            CT_Shape* mutable_shape(){

                
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
            const CT_Shape& shape(){

            if (m_shape)
            {
                return *m_shape;
            }
            return CT_Shape::default_instance();
        
            }
            bool has_presOf(){

            return m_has_presOf;
        
            }
            CT_PresentationOf* mutable_presOf(){

                
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
            const CT_PresentationOf& presOf(){

            if (m_presOf)
            {
                return *m_presOf;
            }
            return CT_PresentationOf::default_instance();
        
            }
            bool has_constrLst(){

            return m_has_constrLst;
        
            }
            CT_Constraints* mutable_constrLst(){

                
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
            const CT_Constraints& constrLst(){

            if (m_constrLst)
            {
                return *m_constrLst;
            }
            return CT_Constraints::default_instance();
        
            }
            bool has_ruleLst(){

            return m_has_ruleLst;
        
            }
            CT_Rules* mutable_ruleLst(){

                
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
            const CT_Rules& ruleLst(){

            if (m_ruleLst)
            {
                return *m_ruleLst;
            }
            return CT_Rules::default_instance();
        
            }
            bool has_forEach(){

            return m_has_forEach;
        
            }
            CT_ForEach* mutable_forEach(){

                
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
            const CT_ForEach& forEach(){

            if (m_forEach)
            {
                return *m_forEach;
            }
            return CT_ForEach::default_instance();
        
            }
            bool has_layoutNode(){

            return m_has_layoutNode;
        
            }
            CT_LayoutNode* mutable_layoutNode(){

                
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
            const CT_LayoutNode& layoutNode(){

            if (m_layoutNode)
            {
                return *m_layoutNode;
            }
            return CT_LayoutNode::default_instance();
        
            }
            bool has_choose(){

            return m_has_choose;
        
            }
            CT_Choose* mutable_choose(){

                
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
            const CT_Choose& choose(){

            if (m_choose)
            {
                return *m_choose;
            }
            return CT_Choose::default_instance();
        
            }
            bool has_extLst(){

            return m_has_extLst;
        
            }
            ns_a::CT_OfficeArtExtensionList* mutable_extLst(){

                
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
            const ns_a::CT_OfficeArtExtensionList& extLst(){

            if (m_extLst)
            {
                return *m_extLst;
            }
            return ns_a::CT_OfficeArtExtensionList::default_instance();
        
            }

        private:
            bool m_has_alg ;
            CT_Algorithm* m_alg ;
            bool m_has_shape ;
            CT_Shape* m_shape ;
            bool m_has_presOf ;
            CT_PresentationOf* m_presOf ;
            bool m_has_constrLst ;
            CT_Constraints* m_constrLst ;
            bool m_has_ruleLst ;
            CT_Rules* m_ruleLst ;
            bool m_has_forEach ;
            CT_ForEach* m_forEach ;
            bool m_has_layoutNode ;
            CT_LayoutNode* m_layoutNode ;
            bool m_has_choose ;
            CT_Choose* m_choose ;
            bool m_has_extLst ;
            ns_a::CT_OfficeArtExtensionList* m_extLst ;

        }


    }

    class CT_Otherwise : public XSD::ComplexType{
    public:
        CT_Algorithm* add_alg(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            CT_Algorithm* pNewChild = pChildGroup->mutable_alg();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        CT_Shape* add_shape(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            CT_Shape* pNewChild = pChildGroup->mutable_shape();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        CT_PresentationOf* add_presOf(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            CT_PresentationOf* pNewChild = pChildGroup->mutable_presOf();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        CT_Constraints* add_constrLst(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            CT_Constraints* pNewChild = pChildGroup->mutable_constrLst();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        CT_Rules* add_ruleLst(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            CT_Rules* pNewChild = pChildGroup->mutable_ruleLst();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        CT_ForEach* add_forEach(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            CT_ForEach* pNewChild = pChildGroup->mutable_forEach();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        CT_LayoutNode* add_layoutNode(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            CT_LayoutNode* pNewChild = pChildGroup->mutable_layoutNode();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        CT_Choose* add_choose(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            CT_Choose* pNewChild = pChildGroup->mutable_choose();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        ns_a::CT_OfficeArtExtensionList* add_extLst(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            ns_a::CT_OfficeArtExtensionList* pNewChild = pChildGroup->mutable_extLst();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        void clear(){

                m_has_name_attr = false;
                m_name_attr.clear();
            
            vector<ChildGroup_1*>::iterator iter;
            for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
            {
                delete *iter;
            }
            m_childGroupList_1.clear();
        
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    _outStream << _attrName << \=\\ << m_name_attr << \\\;
        _outStream << \>\;
    
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_alg())
            {
                (*iter)->toXml(\d:alg\, _outStream);
            }
            else if ((*iter)->has_shape())
            {
                (*iter)->toXml(\d:shape\, _outStream);
            }
            else if ((*iter)->has_presOf())
            {
                (*iter)->toXml(\d:presOf\, _outStream);
            }
            else if ((*iter)->has_constrLst())
            {
                (*iter)->toXml(\d:constrLst\, _outStream);
            }
            else if ((*iter)->has_ruleLst())
            {
                (*iter)->toXml(\d:ruleLst\, _outStream);
            }
            else if ((*iter)->has_forEach())
            {
                (*iter)->toXml(\d:forEach\, _outStream);
            }
            else if ((*iter)->has_layoutNode())
            {
                (*iter)->toXml(\d:layoutNode\, _outStream);
            }
            else if ((*iter)->has_choose())
            {
                (*iter)->toXml(\d:choose\, _outStream);
            }
            else if ((*iter)->has_extLst())
            {
                (*iter)->toXml(\d:extLst\, _outStream);
            }
        }
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_Otherwise& default_instance(){

    if (!CT_Otherwise::default_instance_)
    {
        CT_Otherwise::default_instance_ = new CT_Otherwise();
    }
    return *CT_Otherwise::default_instance_;

        }
        bool has_name_attr(){

            return m_has_name_attr;
        
        }
        void set_name_attr(const string& _name_attr ){

        m_has_name_attr = true;
        m_name_attr = _name_attr;
        
        }
        const string& name_attr(){

            return type: \string\nname: \m_name_attr\n;
        
        }

    private:
        vector<ChildGroup_1*> m_childGroupList_1 ;
        static CT_Otherwise* default_instance_ ;
        bool m_has_name_attr ;
        string m_name_attr ;
        class ChildGroup_1{
        public:
            bool has_alg(){

            return m_has_alg;
        
            }
            CT_Algorithm* mutable_alg(){

                
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
            const CT_Algorithm& alg(){

            if (m_alg)
            {
                return *m_alg;
            }
            return CT_Algorithm::default_instance();
        
            }
            bool has_shape(){

            return m_has_shape;
        
            }
            CT_Shape* mutable_shape(){

                
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
            const CT_Shape& shape(){

            if (m_shape)
            {
                return *m_shape;
            }
            return CT_Shape::default_instance();
        
            }
            bool has_presOf(){

            return m_has_presOf;
        
            }
            CT_PresentationOf* mutable_presOf(){

                
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
            const CT_PresentationOf& presOf(){

            if (m_presOf)
            {
                return *m_presOf;
            }
            return CT_PresentationOf::default_instance();
        
            }
            bool has_constrLst(){

            return m_has_constrLst;
        
            }
            CT_Constraints* mutable_constrLst(){

                
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
            const CT_Constraints& constrLst(){

            if (m_constrLst)
            {
                return *m_constrLst;
            }
            return CT_Constraints::default_instance();
        
            }
            bool has_ruleLst(){

            return m_has_ruleLst;
        
            }
            CT_Rules* mutable_ruleLst(){

                
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
            const CT_Rules& ruleLst(){

            if (m_ruleLst)
            {
                return *m_ruleLst;
            }
            return CT_Rules::default_instance();
        
            }
            bool has_forEach(){

            return m_has_forEach;
        
            }
            CT_ForEach* mutable_forEach(){

                
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
            const CT_ForEach& forEach(){

            if (m_forEach)
            {
                return *m_forEach;
            }
            return CT_ForEach::default_instance();
        
            }
            bool has_layoutNode(){

            return m_has_layoutNode;
        
            }
            CT_LayoutNode* mutable_layoutNode(){

                
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
            const CT_LayoutNode& layoutNode(){

            if (m_layoutNode)
            {
                return *m_layoutNode;
            }
            return CT_LayoutNode::default_instance();
        
            }
            bool has_choose(){

            return m_has_choose;
        
            }
            CT_Choose* mutable_choose(){

                
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
            const CT_Choose& choose(){

            if (m_choose)
            {
                return *m_choose;
            }
            return CT_Choose::default_instance();
        
            }
            bool has_extLst(){

            return m_has_extLst;
        
            }
            ns_a::CT_OfficeArtExtensionList* mutable_extLst(){

                
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
            const ns_a::CT_OfficeArtExtensionList& extLst(){

            if (m_extLst)
            {
                return *m_extLst;
            }
            return ns_a::CT_OfficeArtExtensionList::default_instance();
        
            }

        private:
            bool m_has_alg ;
            CT_Algorithm* m_alg ;
            bool m_has_shape ;
            CT_Shape* m_shape ;
            bool m_has_presOf ;
            CT_PresentationOf* m_presOf ;
            bool m_has_constrLst ;
            CT_Constraints* m_constrLst ;
            bool m_has_ruleLst ;
            CT_Rules* m_ruleLst ;
            bool m_has_forEach ;
            CT_ForEach* m_forEach ;
            bool m_has_layoutNode ;
            CT_LayoutNode* m_layoutNode ;
            bool m_has_choose ;
            CT_Choose* m_choose ;
            bool m_has_extLst ;
            ns_a::CT_OfficeArtExtensionList* m_extLst ;

        }


    }

    class CT_Choose : public XSD::ComplexType{
    public:
        bool has_if(){

            return m_has_if;
        
        }
        CT_When* mutable_if(){

                m_has_if = true;
                if (!m_if)
                {
                    m_if = new CT_When();
                }
                return m_if;
            
        }
        const CT_When& if(){

            if (m_if)
            {
                return *m_if;
            }
            return CT_When::default_instance();
        
        }
        bool has_else(){

            return m_has_else;
        
        }
        CT_Otherwise* mutable_else(){

                m_has_else = true;
                if (!m_else)
                {
                    m_else = new CT_Otherwise();
                }
                return m_else;
            
        }
        const CT_Otherwise& else(){

            if (m_else)
            {
                return *m_else;
            }
            return CT_Otherwise::default_instance();
        
        }
        void clear(){

                m_has_name_attr = false;
                m_name_attr.clear();
            
                m_has_if = false;
                
        if (m_if)
        {
            delete m_if;
            m_if = NULL;
        }
    
            
                m_has_else = false;
                
        if (m_else)
        {
            delete m_else;
            m_else = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    _outStream << _attrName << \=\\ << m_name_attr << \\\;
        _outStream << \>\;
    
                if (m_has_if)
                {
                    m_if->toXml(\d:if\, _outStream);;
                }
            
                if (m_has_else)
                {
                    m_if->toXml(\d:else\, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_Choose& default_instance(){

    if (!CT_Choose::default_instance_)
    {
        CT_Choose::default_instance_ = new CT_Choose();
    }
    return *CT_Choose::default_instance_;

        }
        bool has_name_attr(){

            return m_has_name_attr;
        
        }
        void set_name_attr(const string& _name_attr ){

        m_has_name_attr = true;
        m_name_attr = _name_attr;
        
        }
        const string& name_attr(){

            return type: \string\nname: \m_name_attr\n;
        
        }

    private:
        bool m_has_if ;
        CT_When* m_if ;
        bool m_has_else ;
        CT_Otherwise* m_else ;
        static CT_Choose* default_instance_ ;
        bool m_has_name_attr ;
        string m_name_attr ;

    }

    class CT_SampleData : public XSD::ComplexType{
    public:
        bool has_dataModel(){

            return m_has_dataModel;
        
        }
        CT_DataModel* mutable_dataModel(){

                m_has_dataModel = true;
                if (!m_dataModel)
                {
                    m_dataModel = new CT_DataModel();
                }
                return m_dataModel;
            
        }
        const CT_DataModel& dataModel(){

            if (m_dataModel)
            {
                return *m_dataModel;
            }
            return CT_DataModel::default_instance();
        
        }
        void clear(){

                m_has_useDef_attr = false;
                m_useDef_attr = false;
            
                m_has_dataModel = false;
                
        if (m_dataModel)
        {
            delete m_dataModel;
            m_dataModel = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    _outStream << _attrName << \=\\ << XSD::BooleanStr(m_useDef_attr) << \\\;
        _outStream << \>\;
    
                if (m_has_dataModel)
                {
                    m_dataModel->toXml(\d:dataModel\, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_SampleData& default_instance(){

    if (!CT_SampleData::default_instance_)
    {
        CT_SampleData::default_instance_ = new CT_SampleData();
    }
    return *CT_SampleData::default_instance_;

        }
        bool has_useDef_attr(){

            return m_has_useDef_attr;
        
        }
        void set_useDef_attr(const boolean& _useDef_attr ){

        m_has_useDef_attr = true;
        m_useDef_attr = _useDef_attr;
        
        }
        const boolean& useDef_attr(){

            return type: oolean\nname: \m_useDef_attr\n;
        
        }

    private:
        bool m_has_dataModel ;
        CT_DataModel* m_dataModel ;
        static CT_SampleData* default_instance_ ;
        bool m_has_useDef_attr ;
        boolean m_useDef_attr ;

    }

    class CT_Category : public XSD::ComplexType{
    public:
        void clear(){

                m_has_type_attr = false;
                m_type_attr.clear();
            
                m_has_pri_attr = false;
                m_pri_attr = 0;
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    _outStream << _attrName << \=\\ << m_type_attr << \\\;
_outStream << _attrName << \=\\ << m_pri_attr << \\\;
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_Category& default_instance(){

    if (!CT_Category::default_instance_)
    {
        CT_Category::default_instance_ = new CT_Category();
    }
    return *CT_Category::default_instance_;

        }
        bool has_type_attr(){

            return m_has_type_attr;
        
        }
        void set_type_attr(const anyURI& _type_attr ){

        m_has_type_attr = true;
        m_type_attr = _type_attr;
        
        }
        const anyURI& type_attr(){

            return type: nyURI\nname: \m_type_attr\n;
        
        }
        bool has_pri_attr(){

            return m_has_pri_attr;
        
        }
        void set_pri_attr(const unsignedInt& _pri_attr ){

        m_has_pri_attr = true;
        m_pri_attr = _pri_attr;
        
        }
        const unsignedInt& pri_attr(){

            return type: \unsignedInt\nname: \m_pri_attr\n;
        
        }

    private:
        static CT_Category* default_instance_ ;
        bool m_has_type_attr ;
        anyURI m_type_attr ;
        bool m_has_pri_attr ;
        unsignedInt m_pri_attr ;

    }

    class CT_Categories : public XSD::ComplexType{
    public:
        bool has_cat(){

            return m_has_cat;
        
        }
        CT_Category* mutable_cat(){

                m_has_cat = true;
                if (!m_cat)
                {
                    m_cat = new CT_Category();
                }
                return m_cat;
            
        }
        const CT_Category& cat(){

            if (m_cat)
            {
                return *m_cat;
            }
            return CT_Category::default_instance();
        
        }
        void clear(){

                m_has_cat = false;
                
        if (m_cat)
        {
            delete m_cat;
            m_cat = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_cat)
                {
                    m_cat->toXml(\d:cat\, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_Categories& default_instance(){

    if (!CT_Categories::default_instance_)
    {
        CT_Categories::default_instance_ = new CT_Categories();
    }
    return *CT_Categories::default_instance_;

        }

    private:
        bool m_has_cat ;
        CT_Category* m_cat ;
        static CT_Categories* default_instance_ ;

    }

    class CT_Name : public XSD::ComplexType{
    public:
        void clear(){

                m_has_lang_attr = false;
                m_lang_attr.clear();
            
                m_has_val_attr = false;
                m_val_attr.clear();
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    _outStream << _attrName << \=\\ << m_lang_attr << \\\;
_outStream << _attrName << \=\\ << m_val_attr << \\\;
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_Name& default_instance(){

    if (!CT_Name::default_instance_)
    {
        CT_Name::default_instance_ = new CT_Name();
    }
    return *CT_Name::default_instance_;

        }
        bool has_lang_attr(){

            return m_has_lang_attr;
        
        }
        void set_lang_attr(const string& _lang_attr ){

        m_has_lang_attr = true;
        m_lang_attr = _lang_attr;
        
        }
        const string& lang_attr(){

            return type: \string\nname: \m_lang_attr\n;
        
        }
        bool has_val_attr(){

            return m_has_val_attr;
        
        }
        void set_val_attr(const string& _val_attr ){

        m_has_val_attr = true;
        m_val_attr = _val_attr;
        
        }
        const string& val_attr(){

            return type: \string\nname: \m_val_attr\n;
        
        }

    private:
        static CT_Name* default_instance_ ;
        bool m_has_lang_attr ;
        string m_lang_attr ;
        bool m_has_val_attr ;
        string m_val_attr ;

    }

    class CT_Description : public XSD::ComplexType{
    public:
        void clear(){

                m_has_lang_attr = false;
                m_lang_attr.clear();
            
                m_has_val_attr = false;
                m_val_attr.clear();
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    _outStream << _attrName << \=\\ << m_lang_attr << \\\;
_outStream << _attrName << \=\\ << m_val_attr << \\\;
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_Description& default_instance(){

    if (!CT_Description::default_instance_)
    {
        CT_Description::default_instance_ = new CT_Description();
    }
    return *CT_Description::default_instance_;

        }
        bool has_lang_attr(){

            return m_has_lang_attr;
        
        }
        void set_lang_attr(const string& _lang_attr ){

        m_has_lang_attr = true;
        m_lang_attr = _lang_attr;
        
        }
        const string& lang_attr(){

            return type: \string\nname: \m_lang_attr\n;
        
        }
        bool has_val_attr(){

            return m_has_val_attr;
        
        }
        void set_val_attr(const string& _val_attr ){

        m_has_val_attr = true;
        m_val_attr = _val_attr;
        
        }
        const string& val_attr(){

            return type: \string\nname: \m_val_attr\n;
        
        }

    private:
        static CT_Description* default_instance_ ;
        bool m_has_lang_attr ;
        string m_lang_attr ;
        bool m_has_val_attr ;
        string m_val_attr ;

    }

    class CT_DiagramDefinition : public XSD::ComplexType{
    public:
        bool has_title(){

            return m_has_title;
        
        }
        CT_Name* mutable_title(){

                m_has_title = true;
                if (!m_title)
                {
                    m_title = new CT_Name();
                }
                return m_title;
            
        }
        const CT_Name& title(){

            if (m_title)
            {
                return *m_title;
            }
            return CT_Name::default_instance();
        
        }
        bool has_desc(){

            return m_has_desc;
        
        }
        CT_Description* mutable_desc(){

                m_has_desc = true;
                if (!m_desc)
                {
                    m_desc = new CT_Description();
                }
                return m_desc;
            
        }
        const CT_Description& desc(){

            if (m_desc)
            {
                return *m_desc;
            }
            return CT_Description::default_instance();
        
        }
        bool has_catLst(){

            return m_has_catLst;
        
        }
        CT_Categories* mutable_catLst(){

                m_has_catLst = true;
                if (!m_catLst)
                {
                    m_catLst = new CT_Categories();
                }
                return m_catLst;
            
        }
        const CT_Categories& catLst(){

            if (m_catLst)
            {
                return *m_catLst;
            }
            return CT_Categories::default_instance();
        
        }
        bool has_sampData(){

            return m_has_sampData;
        
        }
        CT_SampleData* mutable_sampData(){

                m_has_sampData = true;
                if (!m_sampData)
                {
                    m_sampData = new CT_SampleData();
                }
                return m_sampData;
            
        }
        const CT_SampleData& sampData(){

            if (m_sampData)
            {
                return *m_sampData;
            }
            return CT_SampleData::default_instance();
        
        }
        bool has_styleData(){

            return m_has_styleData;
        
        }
        CT_SampleData* mutable_styleData(){

                m_has_styleData = true;
                if (!m_styleData)
                {
                    m_styleData = new CT_SampleData();
                }
                return m_styleData;
            
        }
        const CT_SampleData& styleData(){

            if (m_styleData)
            {
                return *m_styleData;
            }
            return CT_SampleData::default_instance();
        
        }
        bool has_clrData(){

            return m_has_clrData;
        
        }
        CT_SampleData* mutable_clrData(){

                m_has_clrData = true;
                if (!m_clrData)
                {
                    m_clrData = new CT_SampleData();
                }
                return m_clrData;
            
        }
        const CT_SampleData& clrData(){

            if (m_clrData)
            {
                return *m_clrData;
            }
            return CT_SampleData::default_instance();
        
        }
        bool has_layoutNode(){

            return m_has_layoutNode;
        
        }
        CT_LayoutNode* mutable_layoutNode(){

                m_has_layoutNode = true;
                if (!m_layoutNode)
                {
                    m_layoutNode = new CT_LayoutNode();
                }
                return m_layoutNode;
            
        }
        const CT_LayoutNode& layoutNode(){

            if (m_layoutNode)
            {
                return *m_layoutNode;
            }
            return CT_LayoutNode::default_instance();
        
        }
        bool has_extLst(){

            return m_has_extLst;
        
        }
        ns_a::CT_OfficeArtExtensionList* mutable_extLst(){

                m_has_extLst = true;
                if (!m_extLst)
                {
                    m_extLst = new ns_a::CT_OfficeArtExtensionList();
                }
                return m_extLst;
            
        }
        const ns_a::CT_OfficeArtExtensionList& extLst(){

            if (m_extLst)
            {
                return *m_extLst;
            }
            return ns_a::CT_OfficeArtExtensionList::default_instance();
        
        }
        void clear(){

                m_has_uniqueId_attr = false;
                m_uniqueId_attr.clear();
            
                m_has_minVer_attr = false;
                m_minVer_attr.clear();
            
                m_has_defStyle_attr = false;
                m_defStyle_attr.clear();
            
                m_has_title = false;
                
        if (m_title)
        {
            delete m_title;
            m_title = NULL;
        }
    
            
                m_has_desc = false;
                
        if (m_desc)
        {
            delete m_desc;
            m_desc = NULL;
        }
    
            
                m_has_catLst = false;
                
        if (m_catLst)
        {
            delete m_catLst;
            m_catLst = NULL;
        }
    
            
                m_has_sampData = false;
                
        if (m_sampData)
        {
            delete m_sampData;
            m_sampData = NULL;
        }
    
            
                m_has_styleData = false;
                
        if (m_styleData)
        {
            delete m_styleData;
            m_styleData = NULL;
        }
    
            
                m_has_clrData = false;
                
        if (m_clrData)
        {
            delete m_clrData;
            m_clrData = NULL;
        }
    
            
                m_has_layoutNode = false;
                
        if (m_layoutNode)
        {
            delete m_layoutNode;
            m_layoutNode = NULL;
        }
    
            
                m_has_extLst = false;
                
        if (m_extLst)
        {
            delete m_extLst;
            m_extLst = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    _outStream << _attrName << \=\\ << m_uniqueId_attr << \\\;
_outStream << _attrName << \=\\ << m_minVer_attr << \\\;
_outStream << _attrName << \=\\ << m_defStyle_attr << \\\;
        _outStream << \>\;
    
                if (m_has_title)
                {
                    m_title->toXml(\d:title\, _outStream);;
                }
            
                if (m_has_desc)
                {
                    m_title->toXml(\d:desc\, _outStream);;
                }
            
                if (m_has_catLst)
                {
                    m_title->toXml(\d:catLst\, _outStream);;
                }
            
                if (m_has_sampData)
                {
                    m_title->toXml(\d:sampData\, _outStream);;
                }
            
                if (m_has_styleData)
                {
                    m_title->toXml(\d:styleData\, _outStream);;
                }
            
                if (m_has_clrData)
                {
                    m_title->toXml(\d:clrData\, _outStream);;
                }
            
                if (m_has_layoutNode)
                {
                    m_title->toXml(\d:layoutNode\, _outStream);;
                }
            
                if (m_has_extLst)
                {
                    m_title->toXml(\d:extLst\, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_DiagramDefinition& default_instance(){

    if (!CT_DiagramDefinition::default_instance_)
    {
        CT_DiagramDefinition::default_instance_ = new CT_DiagramDefinition();
    }
    return *CT_DiagramDefinition::default_instance_;

        }
        bool has_uniqueId_attr(){

            return m_has_uniqueId_attr;
        
        }
        void set_uniqueId_attr(const string& _uniqueId_attr ){

        m_has_uniqueId_attr = true;
        m_uniqueId_attr = _uniqueId_attr;
        
        }
        const string& uniqueId_attr(){

            return type: \string\nname: \m_uniqueId_attr\n;
        
        }
        bool has_minVer_attr(){

            return m_has_minVer_attr;
        
        }
        void set_minVer_attr(const string& _minVer_attr ){

        m_has_minVer_attr = true;
        m_minVer_attr = _minVer_attr;
        
        }
        const string& minVer_attr(){

            return type: \string\nname: \m_minVer_attr\n;
        
        }
        bool has_defStyle_attr(){

            return m_has_defStyle_attr;
        
        }
        void set_defStyle_attr(const string& _defStyle_attr ){

        m_has_defStyle_attr = true;
        m_defStyle_attr = _defStyle_attr;
        
        }
        const string& defStyle_attr(){

            return type: \string\nname: \m_defStyle_attr\n;
        
        }

    private:
        bool m_has_title ;
        CT_Name* m_title ;
        bool m_has_desc ;
        CT_Description* m_desc ;
        bool m_has_catLst ;
        CT_Categories* m_catLst ;
        bool m_has_sampData ;
        CT_SampleData* m_sampData ;
        bool m_has_styleData ;
        CT_SampleData* m_styleData ;
        bool m_has_clrData ;
        CT_SampleData* m_clrData ;
        bool m_has_layoutNode ;
        CT_LayoutNode* m_layoutNode ;
        bool m_has_extLst ;
        ns_a::CT_OfficeArtExtensionList* m_extLst ;
        static CT_DiagramDefinition* default_instance_ ;
        bool m_has_uniqueId_attr ;
        string m_uniqueId_attr ;
        bool m_has_minVer_attr ;
        string m_minVer_attr ;
        bool m_has_defStyle_attr ;
        string m_defStyle_attr ;

    }

    class CT_DiagramDefinitionHeader : public XSD::ComplexType{
    public:
        bool has_title(){

            return m_has_title;
        
        }
        CT_Name* mutable_title(){

                m_has_title = true;
                if (!m_title)
                {
                    m_title = new CT_Name();
                }
                return m_title;
            
        }
        const CT_Name& title(){

            if (m_title)
            {
                return *m_title;
            }
            return CT_Name::default_instance();
        
        }
        bool has_desc(){

            return m_has_desc;
        
        }
        CT_Description* mutable_desc(){

                m_has_desc = true;
                if (!m_desc)
                {
                    m_desc = new CT_Description();
                }
                return m_desc;
            
        }
        const CT_Description& desc(){

            if (m_desc)
            {
                return *m_desc;
            }
            return CT_Description::default_instance();
        
        }
        bool has_catLst(){

            return m_has_catLst;
        
        }
        CT_Categories* mutable_catLst(){

                m_has_catLst = true;
                if (!m_catLst)
                {
                    m_catLst = new CT_Categories();
                }
                return m_catLst;
            
        }
        const CT_Categories& catLst(){

            if (m_catLst)
            {
                return *m_catLst;
            }
            return CT_Categories::default_instance();
        
        }
        bool has_extLst(){

            return m_has_extLst;
        
        }
        ns_a::CT_OfficeArtExtensionList* mutable_extLst(){

                m_has_extLst = true;
                if (!m_extLst)
                {
                    m_extLst = new ns_a::CT_OfficeArtExtensionList();
                }
                return m_extLst;
            
        }
        const ns_a::CT_OfficeArtExtensionList& extLst(){

            if (m_extLst)
            {
                return *m_extLst;
            }
            return ns_a::CT_OfficeArtExtensionList::default_instance();
        
        }
        void clear(){

                m_has_uniqueId_attr = false;
                m_uniqueId_attr.clear();
            
                m_has_minVer_attr = false;
                m_minVer_attr.clear();
            
                m_has_defStyle_attr = false;
                m_defStyle_attr.clear();
            
                m_has_resId_attr = false;
                m_resId_attr = 0;
            
                m_has_title = false;
                
        if (m_title)
        {
            delete m_title;
            m_title = NULL;
        }
    
            
                m_has_desc = false;
                
        if (m_desc)
        {
            delete m_desc;
            m_desc = NULL;
        }
    
            
                m_has_catLst = false;
                
        if (m_catLst)
        {
            delete m_catLst;
            m_catLst = NULL;
        }
    
            
                m_has_extLst = false;
                
        if (m_extLst)
        {
            delete m_extLst;
            m_extLst = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    _outStream << _attrName << \=\\ << m_uniqueId_attr << \\\;
_outStream << _attrName << \=\\ << m_minVer_attr << \\\;
_outStream << _attrName << \=\\ << m_defStyle_attr << \\\;
_outStream << _attrName << \=\\ << m_resId_attr << \\\;
        _outStream << \>\;
    
                if (m_has_title)
                {
                    m_title->toXml(\d:title\, _outStream);;
                }
            
                if (m_has_desc)
                {
                    m_title->toXml(\d:desc\, _outStream);;
                }
            
                if (m_has_catLst)
                {
                    m_title->toXml(\d:catLst\, _outStream);;
                }
            
                if (m_has_extLst)
                {
                    m_title->toXml(\d:extLst\, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_DiagramDefinitionHeader& default_instance(){

    if (!CT_DiagramDefinitionHeader::default_instance_)
    {
        CT_DiagramDefinitionHeader::default_instance_ = new CT_DiagramDefinitionHeader();
    }
    return *CT_DiagramDefinitionHeader::default_instance_;

        }
        bool has_uniqueId_attr(){

            return m_has_uniqueId_attr;
        
        }
        void set_uniqueId_attr(const string& _uniqueId_attr ){

        m_has_uniqueId_attr = true;
        m_uniqueId_attr = _uniqueId_attr;
        
        }
        const string& uniqueId_attr(){

            return type: \string\nname: \m_uniqueId_attr\n;
        
        }
        bool has_minVer_attr(){

            return m_has_minVer_attr;
        
        }
        void set_minVer_attr(const string& _minVer_attr ){

        m_has_minVer_attr = true;
        m_minVer_attr = _minVer_attr;
        
        }
        const string& minVer_attr(){

            return type: \string\nname: \m_minVer_attr\n;
        
        }
        bool has_defStyle_attr(){

            return m_has_defStyle_attr;
        
        }
        void set_defStyle_attr(const string& _defStyle_attr ){

        m_has_defStyle_attr = true;
        m_defStyle_attr = _defStyle_attr;
        
        }
        const string& defStyle_attr(){

            return type: \string\nname: \m_defStyle_attr\n;
        
        }
        bool has_resId_attr(){

            return m_has_resId_attr;
        
        }
        void set_resId_attr(const int& _resId_attr ){

        m_has_resId_attr = true;
        m_resId_attr = _resId_attr;
        
        }
        const int& resId_attr(){

            return type: \int\nname: \m_resId_attr\n;
        
        }

    private:
        bool m_has_title ;
        CT_Name* m_title ;
        bool m_has_desc ;
        CT_Description* m_desc ;
        bool m_has_catLst ;
        CT_Categories* m_catLst ;
        bool m_has_extLst ;
        ns_a::CT_OfficeArtExtensionList* m_extLst ;
        static CT_DiagramDefinitionHeader* default_instance_ ;
        bool m_has_uniqueId_attr ;
        string m_uniqueId_attr ;
        bool m_has_minVer_attr ;
        string m_minVer_attr ;
        bool m_has_defStyle_attr ;
        string m_defStyle_attr ;
        bool m_has_resId_attr ;
        int m_resId_attr ;

    }

    class CT_DiagramDefinitionHeaderLst : public XSD::ComplexType{
    public:
        bool has_layoutDefHdr(){

            return m_has_layoutDefHdr;
        
        }
        CT_DiagramDefinitionHeader* mutable_layoutDefHdr(){

                m_has_layoutDefHdr = true;
                if (!m_layoutDefHdr)
                {
                    m_layoutDefHdr = new CT_DiagramDefinitionHeader();
                }
                return m_layoutDefHdr;
            
        }
        const CT_DiagramDefinitionHeader& layoutDefHdr(){

            if (m_layoutDefHdr)
            {
                return *m_layoutDefHdr;
            }
            return CT_DiagramDefinitionHeader::default_instance();
        
        }
        void clear(){

                m_has_layoutDefHdr = false;
                
        if (m_layoutDefHdr)
        {
            delete m_layoutDefHdr;
            m_layoutDefHdr = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_layoutDefHdr)
                {
                    m_layoutDefHdr->toXml(\d:layoutDefHdr\, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_DiagramDefinitionHeaderLst& default_instance(){

    if (!CT_DiagramDefinitionHeaderLst::default_instance_)
    {
        CT_DiagramDefinitionHeaderLst::default_instance_ = new CT_DiagramDefinitionHeaderLst();
    }
    return *CT_DiagramDefinitionHeaderLst::default_instance_;

        }

    private:
        bool m_has_layoutDefHdr ;
        CT_DiagramDefinitionHeader* m_layoutDefHdr ;
        static CT_DiagramDefinitionHeaderLst* default_instance_ ;

    }

    class CT_RelIds : public XSD::ComplexType{
    public:
        void clear(){

                m_has_dm_attr = false;
                
        if (m_dm_attr)
        {
            delete m_dm_attr;
            m_dm_attr = NULL;
        }
    
            
                m_has_lo_attr = false;
                
        if (m_lo_attr)
        {
            delete m_lo_attr;
            m_lo_attr = NULL;
        }
    
            
                m_has_qs_attr = false;
                
        if (m_qs_attr)
        {
            delete m_qs_attr;
            m_qs_attr = NULL;
        }
    
            
                m_has_cs_attr = false;
                
        if (m_cs_attr)
        {
            delete m_cs_attr;
            m_cs_attr = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    (varName)s->toXml(\dm\, _outStream);
(varName)s->toXml(\lo\, _outStream);
(varName)s->toXml(\qs\, _outStream);
(varName)s->toXml(\cs\, _outStream);
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_RelIds& default_instance(){

    if (!CT_RelIds::default_instance_)
    {
        CT_RelIds::default_instance_ = new CT_RelIds();
    }
    return *CT_RelIds::default_instance_;

        }
        bool has_dm_attr(){

            return m_has_dm_attr;
        
        }
        void set_dm_attr(const ST_RelationshipId& _dm_attr ){

            m_has_dm_attr = true;
            m_dm_attr = new ST_RelationshipId(_dm_attr);
        
        }
        const ST_RelationshipId& dm_attr(){

            if (m_dm_attr)
            {
                return *m_dm_attr;
            }
            return ST_RelationshipId::default_instance();
        
        }
        bool has_lo_attr(){

            return m_has_lo_attr;
        
        }
        void set_lo_attr(const ST_RelationshipId& _lo_attr ){

            m_has_lo_attr = true;
            m_lo_attr = new ST_RelationshipId(_lo_attr);
        
        }
        const ST_RelationshipId& lo_attr(){

            if (m_lo_attr)
            {
                return *m_lo_attr;
            }
            return ST_RelationshipId::default_instance();
        
        }
        bool has_qs_attr(){

            return m_has_qs_attr;
        
        }
        void set_qs_attr(const ST_RelationshipId& _qs_attr ){

            m_has_qs_attr = true;
            m_qs_attr = new ST_RelationshipId(_qs_attr);
        
        }
        const ST_RelationshipId& qs_attr(){

            if (m_qs_attr)
            {
                return *m_qs_attr;
            }
            return ST_RelationshipId::default_instance();
        
        }
        bool has_cs_attr(){

            return m_has_cs_attr;
        
        }
        void set_cs_attr(const ST_RelationshipId& _cs_attr ){

            m_has_cs_attr = true;
            m_cs_attr = new ST_RelationshipId(_cs_attr);
        
        }
        const ST_RelationshipId& cs_attr(){

            if (m_cs_attr)
            {
                return *m_cs_attr;
            }
            return ST_RelationshipId::default_instance();
        
        }

    private:
        static CT_RelIds* default_instance_ ;
        bool m_has_dm_attr ;
        ST_RelationshipId* m_dm_attr ;
        bool m_has_lo_attr ;
        ST_RelationshipId* m_lo_attr ;
        bool m_has_qs_attr ;
        ST_RelationshipId* m_qs_attr ;
        bool m_has_cs_attr ;
        ST_RelationshipId* m_cs_attr ;

    }

    class CT_ElemPropSet : public XSD::ComplexType{
    public:
        bool has_presLayoutVars(){

            return m_has_presLayoutVars;
        
        }
        CT_LayoutVariablePropertySet* mutable_presLayoutVars(){

                m_has_presLayoutVars = true;
                if (!m_presLayoutVars)
                {
                    m_presLayoutVars = new CT_LayoutVariablePropertySet();
                }
                return m_presLayoutVars;
            
        }
        const CT_LayoutVariablePropertySet& presLayoutVars(){

            if (m_presLayoutVars)
            {
                return *m_presLayoutVars;
            }
            return CT_LayoutVariablePropertySet::default_instance();
        
        }
        bool has_style(){

            return m_has_style;
        
        }
        ns_a::CT_ShapeStyle* mutable_style(){

                m_has_style = true;
                if (!m_style)
                {
                    m_style = new ns_a::CT_ShapeStyle();
                }
                return m_style;
            
        }
        const ns_a::CT_ShapeStyle& style(){

            if (m_style)
            {
                return *m_style;
            }
            return ns_a::CT_ShapeStyle::default_instance();
        
        }
        void clear(){

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
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    (varName)s->toXml(\presAssocID\, _outStream);
_outStream << _attrName << \=\\ << m_presName_attr << \\\;
_outStream << _attrName << \=\\ << m_presStyleLbl_attr << \\\;
_outStream << _attrName << \=\\ << m_presStyleIdx_attr << \\\;
_outStream << _attrName << \=\\ << m_presStyleCnt_attr << \\\;
_outStream << _attrName << \=\\ << m_loTypeId_attr << \\\;
_outStream << _attrName << \=\\ << m_loCatId_attr << \\\;
_outStream << _attrName << \=\\ << m_qsTypeId_attr << \\\;
_outStream << _attrName << \=\\ << m_qsCatId_attr << \\\;
_outStream << _attrName << \=\\ << m_csTypeId_attr << \\\;
_outStream << _attrName << \=\\ << m_csCatId_attr << \\\;
_outStream << _attrName << \=\\ << XSD::BooleanStr(m_coherent3DOff_attr) << \\\;
_outStream << _attrName << \=\\ << m_phldrT_attr << \\\;
_outStream << _attrName << \=\\ << XSD::BooleanStr(m_phldr_attr) << \\\;
_outStream << _attrName << \=\\ << m_custAng_attr << \\\;
_outStream << _attrName << \=\\ << XSD::BooleanStr(m_custFlipVert_attr) << \\\;
_outStream << _attrName << \=\\ << XSD::BooleanStr(m_custFlipHor_attr) << \\\;
_outStream << _attrName << \=\\ << m_custSzX_attr << \\\;
_outStream << _attrName << \=\\ << m_custSzY_attr << \\\;
(varName)s->toXml(\custScaleX\, _outStream);
(varName)s->toXml(\custScaleY\, _outStream);
_outStream << _attrName << \=\\ << XSD::BooleanStr(m_custT_attr) << \\\;
(varName)s->toXml(\custLinFactX\, _outStream);
(varName)s->toXml(\custLinFactY\, _outStream);
(varName)s->toXml(\custLinFactNeighborX\, _outStream);
(varName)s->toXml(\custLinFactNeighborY\, _outStream);
(varName)s->toXml(\custRadScaleRad\, _outStream);
(varName)s->toXml(\custRadScaleInc\, _outStream);
        _outStream << \>\;
    
                if (m_has_presLayoutVars)
                {
                    m_presLayoutVars->toXml(\d:presLayoutVars\, _outStream);;
                }
            
                if (m_has_style)
                {
                    m_presLayoutVars->toXml(\d:style\, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_ElemPropSet& default_instance(){

    if (!CT_ElemPropSet::default_instance_)
    {
        CT_ElemPropSet::default_instance_ = new CT_ElemPropSet();
    }
    return *CT_ElemPropSet::default_instance_;

        }
        bool has_presAssocID_attr(){

            return m_has_presAssocID_attr;
        
        }
        void set_presAssocID_attr(const ST_ModelId& _presAssocID_attr ){

            m_has_presAssocID_attr = true;
            m_presAssocID_attr = new ST_ModelId(_presAssocID_attr);
        
        }
        const ST_ModelId& presAssocID_attr(){

            if (m_presAssocID_attr)
            {
                return *m_presAssocID_attr;
            }
            return ST_ModelId::default_instance();
        
        }
        bool has_presName_attr(){

            return m_has_presName_attr;
        
        }
        void set_presName_attr(const string& _presName_attr ){

        m_has_presName_attr = true;
        m_presName_attr = _presName_attr;
        
        }
        const string& presName_attr(){

            return type: \string\nname: \m_presName_attr\n;
        
        }
        bool has_presStyleLbl_attr(){

            return m_has_presStyleLbl_attr;
        
        }
        void set_presStyleLbl_attr(const string& _presStyleLbl_attr ){

        m_has_presStyleLbl_attr = true;
        m_presStyleLbl_attr = _presStyleLbl_attr;
        
        }
        const string& presStyleLbl_attr(){

            return type: \string\nname: \m_presStyleLbl_attr\n;
        
        }
        bool has_presStyleIdx_attr(){

            return m_has_presStyleIdx_attr;
        
        }
        void set_presStyleIdx_attr(const int& _presStyleIdx_attr ){

        m_has_presStyleIdx_attr = true;
        m_presStyleIdx_attr = _presStyleIdx_attr;
        
        }
        const int& presStyleIdx_attr(){

            return type: \int\nname: \m_presStyleIdx_attr\n;
        
        }
        bool has_presStyleCnt_attr(){

            return m_has_presStyleCnt_attr;
        
        }
        void set_presStyleCnt_attr(const int& _presStyleCnt_attr ){

        m_has_presStyleCnt_attr = true;
        m_presStyleCnt_attr = _presStyleCnt_attr;
        
        }
        const int& presStyleCnt_attr(){

            return type: \int\nname: \m_presStyleCnt_attr\n;
        
        }
        bool has_loTypeId_attr(){

            return m_has_loTypeId_attr;
        
        }
        void set_loTypeId_attr(const string& _loTypeId_attr ){

        m_has_loTypeId_attr = true;
        m_loTypeId_attr = _loTypeId_attr;
        
        }
        const string& loTypeId_attr(){

            return type: \string\nname: \m_loTypeId_attr\n;
        
        }
        bool has_loCatId_attr(){

            return m_has_loCatId_attr;
        
        }
        void set_loCatId_attr(const string& _loCatId_attr ){

        m_has_loCatId_attr = true;
        m_loCatId_attr = _loCatId_attr;
        
        }
        const string& loCatId_attr(){

            return type: \string\nname: \m_loCatId_attr\n;
        
        }
        bool has_qsTypeId_attr(){

            return m_has_qsTypeId_attr;
        
        }
        void set_qsTypeId_attr(const string& _qsTypeId_attr ){

        m_has_qsTypeId_attr = true;
        m_qsTypeId_attr = _qsTypeId_attr;
        
        }
        const string& qsTypeId_attr(){

            return type: \string\nname: \m_qsTypeId_attr\n;
        
        }
        bool has_qsCatId_attr(){

            return m_has_qsCatId_attr;
        
        }
        void set_qsCatId_attr(const string& _qsCatId_attr ){

        m_has_qsCatId_attr = true;
        m_qsCatId_attr = _qsCatId_attr;
        
        }
        const string& qsCatId_attr(){

            return type: \string\nname: \m_qsCatId_attr\n;
        
        }
        bool has_csTypeId_attr(){

            return m_has_csTypeId_attr;
        
        }
        void set_csTypeId_attr(const string& _csTypeId_attr ){

        m_has_csTypeId_attr = true;
        m_csTypeId_attr = _csTypeId_attr;
        
        }
        const string& csTypeId_attr(){

            return type: \string\nname: \m_csTypeId_attr\n;
        
        }
        bool has_csCatId_attr(){

            return m_has_csCatId_attr;
        
        }
        void set_csCatId_attr(const string& _csCatId_attr ){

        m_has_csCatId_attr = true;
        m_csCatId_attr = _csCatId_attr;
        
        }
        const string& csCatId_attr(){

            return type: \string\nname: \m_csCatId_attr\n;
        
        }
        bool has_coherent3DOff_attr(){

            return m_has_coherent3DOff_attr;
        
        }
        void set_coherent3DOff_attr(const boolean& _coherent3DOff_attr ){

        m_has_coherent3DOff_attr = true;
        m_coherent3DOff_attr = _coherent3DOff_attr;
        
        }
        const boolean& coherent3DOff_attr(){

            return type: oolean\nname: \m_coherent3DOff_attr\n;
        
        }
        bool has_phldrT_attr(){

            return m_has_phldrT_attr;
        
        }
        void set_phldrT_attr(const string& _phldrT_attr ){

        m_has_phldrT_attr = true;
        m_phldrT_attr = _phldrT_attr;
        
        }
        const string& phldrT_attr(){

            return type: \string\nname: \m_phldrT_attr\n;
        
        }
        bool has_phldr_attr(){

            return m_has_phldr_attr;
        
        }
        void set_phldr_attr(const boolean& _phldr_attr ){

        m_has_phldr_attr = true;
        m_phldr_attr = _phldr_attr;
        
        }
        const boolean& phldr_attr(){

            return type: oolean\nname: \m_phldr_attr\n;
        
        }
        bool has_custAng_attr(){

            return m_has_custAng_attr;
        
        }
        void set_custAng_attr(const int& _custAng_attr ){

        m_has_custAng_attr = true;
        m_custAng_attr = _custAng_attr;
        
        }
        const int& custAng_attr(){

            return type: \int\nname: \m_custAng_attr\n;
        
        }
        bool has_custFlipVert_attr(){

            return m_has_custFlipVert_attr;
        
        }
        void set_custFlipVert_attr(const boolean& _custFlipVert_attr ){

        m_has_custFlipVert_attr = true;
        m_custFlipVert_attr = _custFlipVert_attr;
        
        }
        const boolean& custFlipVert_attr(){

            return type: oolean\nname: \m_custFlipVert_attr\n;
        
        }
        bool has_custFlipHor_attr(){

            return m_has_custFlipHor_attr;
        
        }
        void set_custFlipHor_attr(const boolean& _custFlipHor_attr ){

        m_has_custFlipHor_attr = true;
        m_custFlipHor_attr = _custFlipHor_attr;
        
        }
        const boolean& custFlipHor_attr(){

            return type: oolean\nname: \m_custFlipHor_attr\n;
        
        }
        bool has_custSzX_attr(){

            return m_has_custSzX_attr;
        
        }
        void set_custSzX_attr(const int& _custSzX_attr ){

        m_has_custSzX_attr = true;
        m_custSzX_attr = _custSzX_attr;
        
        }
        const int& custSzX_attr(){

            return type: \int\nname: \m_custSzX_attr\n;
        
        }
        bool has_custSzY_attr(){

            return m_has_custSzY_attr;
        
        }
        void set_custSzY_attr(const int& _custSzY_attr ){

        m_has_custSzY_attr = true;
        m_custSzY_attr = _custSzY_attr;
        
        }
        const int& custSzY_attr(){

            return type: \int\nname: \m_custSzY_attr\n;
        
        }
        bool has_custScaleX_attr(){

            return m_has_custScaleX_attr;
        
        }
        void set_custScaleX_attr(const ST_PrSetCustVal& _custScaleX_attr ){

            m_has_custScaleX_attr = true;
            m_custScaleX_attr = new ST_PrSetCustVal(_custScaleX_attr);
        
        }
        const ST_PrSetCustVal& custScaleX_attr(){

            if (m_custScaleX_attr)
            {
                return *m_custScaleX_attr;
            }
            return ST_PrSetCustVal::default_instance();
        
        }
        bool has_custScaleY_attr(){

            return m_has_custScaleY_attr;
        
        }
        void set_custScaleY_attr(const ST_PrSetCustVal& _custScaleY_attr ){

            m_has_custScaleY_attr = true;
            m_custScaleY_attr = new ST_PrSetCustVal(_custScaleY_attr);
        
        }
        const ST_PrSetCustVal& custScaleY_attr(){

            if (m_custScaleY_attr)
            {
                return *m_custScaleY_attr;
            }
            return ST_PrSetCustVal::default_instance();
        
        }
        bool has_custT_attr(){

            return m_has_custT_attr;
        
        }
        void set_custT_attr(const boolean& _custT_attr ){

        m_has_custT_attr = true;
        m_custT_attr = _custT_attr;
        
        }
        const boolean& custT_attr(){

            return type: oolean\nname: \m_custT_attr\n;
        
        }
        bool has_custLinFactX_attr(){

            return m_has_custLinFactX_attr;
        
        }
        void set_custLinFactX_attr(const ST_PrSetCustVal& _custLinFactX_attr ){

            m_has_custLinFactX_attr = true;
            m_custLinFactX_attr = new ST_PrSetCustVal(_custLinFactX_attr);
        
        }
        const ST_PrSetCustVal& custLinFactX_attr(){

            if (m_custLinFactX_attr)
            {
                return *m_custLinFactX_attr;
            }
            return ST_PrSetCustVal::default_instance();
        
        }
        bool has_custLinFactY_attr(){

            return m_has_custLinFactY_attr;
        
        }
        void set_custLinFactY_attr(const ST_PrSetCustVal& _custLinFactY_attr ){

            m_has_custLinFactY_attr = true;
            m_custLinFactY_attr = new ST_PrSetCustVal(_custLinFactY_attr);
        
        }
        const ST_PrSetCustVal& custLinFactY_attr(){

            if (m_custLinFactY_attr)
            {
                return *m_custLinFactY_attr;
            }
            return ST_PrSetCustVal::default_instance();
        
        }
        bool has_custLinFactNeighborX_attr(){

            return m_has_custLinFactNeighborX_attr;
        
        }
        void set_custLinFactNeighborX_attr(const ST_PrSetCustVal& _custLinFactNeighborX_attr ){

            m_has_custLinFactNeighborX_attr = true;
            m_custLinFactNeighborX_attr = new ST_PrSetCustVal(_custLinFactNeighborX_attr);
        
        }
        const ST_PrSetCustVal& custLinFactNeighborX_attr(){

            if (m_custLinFactNeighborX_attr)
            {
                return *m_custLinFactNeighborX_attr;
            }
            return ST_PrSetCustVal::default_instance();
        
        }
        bool has_custLinFactNeighborY_attr(){

            return m_has_custLinFactNeighborY_attr;
        
        }
        void set_custLinFactNeighborY_attr(const ST_PrSetCustVal& _custLinFactNeighborY_attr ){

            m_has_custLinFactNeighborY_attr = true;
            m_custLinFactNeighborY_attr = new ST_PrSetCustVal(_custLinFactNeighborY_attr);
        
        }
        const ST_PrSetCustVal& custLinFactNeighborY_attr(){

            if (m_custLinFactNeighborY_attr)
            {
                return *m_custLinFactNeighborY_attr;
            }
            return ST_PrSetCustVal::default_instance();
        
        }
        bool has_custRadScaleRad_attr(){

            return m_has_custRadScaleRad_attr;
        
        }
        void set_custRadScaleRad_attr(const ST_PrSetCustVal& _custRadScaleRad_attr ){

            m_has_custRadScaleRad_attr = true;
            m_custRadScaleRad_attr = new ST_PrSetCustVal(_custRadScaleRad_attr);
        
        }
        const ST_PrSetCustVal& custRadScaleRad_attr(){

            if (m_custRadScaleRad_attr)
            {
                return *m_custRadScaleRad_attr;
            }
            return ST_PrSetCustVal::default_instance();
        
        }
        bool has_custRadScaleInc_attr(){

            return m_has_custRadScaleInc_attr;
        
        }
        void set_custRadScaleInc_attr(const ST_PrSetCustVal& _custRadScaleInc_attr ){

            m_has_custRadScaleInc_attr = true;
            m_custRadScaleInc_attr = new ST_PrSetCustVal(_custRadScaleInc_attr);
        
        }
        const ST_PrSetCustVal& custRadScaleInc_attr(){

            if (m_custRadScaleInc_attr)
            {
                return *m_custRadScaleInc_attr;
            }
            return ST_PrSetCustVal::default_instance();
        
        }

    private:
        bool m_has_presLayoutVars ;
        CT_LayoutVariablePropertySet* m_presLayoutVars ;
        bool m_has_style ;
        ns_a::CT_ShapeStyle* m_style ;
        static CT_ElemPropSet* default_instance_ ;
        bool m_has_presAssocID_attr ;
        ST_ModelId* m_presAssocID_attr ;
        bool m_has_presName_attr ;
        string m_presName_attr ;
        bool m_has_presStyleLbl_attr ;
        string m_presStyleLbl_attr ;
        bool m_has_presStyleIdx_attr ;
        int m_presStyleIdx_attr ;
        bool m_has_presStyleCnt_attr ;
        int m_presStyleCnt_attr ;
        bool m_has_loTypeId_attr ;
        string m_loTypeId_attr ;
        bool m_has_loCatId_attr ;
        string m_loCatId_attr ;
        bool m_has_qsTypeId_attr ;
        string m_qsTypeId_attr ;
        bool m_has_qsCatId_attr ;
        string m_qsCatId_attr ;
        bool m_has_csTypeId_attr ;
        string m_csTypeId_attr ;
        bool m_has_csCatId_attr ;
        string m_csCatId_attr ;
        bool m_has_coherent3DOff_attr ;
        boolean m_coherent3DOff_attr ;
        bool m_has_phldrT_attr ;
        string m_phldrT_attr ;
        bool m_has_phldr_attr ;
        boolean m_phldr_attr ;
        bool m_has_custAng_attr ;
        int m_custAng_attr ;
        bool m_has_custFlipVert_attr ;
        boolean m_custFlipVert_attr ;
        bool m_has_custFlipHor_attr ;
        boolean m_custFlipHor_attr ;
        bool m_has_custSzX_attr ;
        int m_custSzX_attr ;
        bool m_has_custSzY_attr ;
        int m_custSzY_attr ;
        bool m_has_custScaleX_attr ;
        ST_PrSetCustVal* m_custScaleX_attr ;
        bool m_has_custScaleY_attr ;
        ST_PrSetCustVal* m_custScaleY_attr ;
        bool m_has_custT_attr ;
        boolean m_custT_attr ;
        bool m_has_custLinFactX_attr ;
        ST_PrSetCustVal* m_custLinFactX_attr ;
        bool m_has_custLinFactY_attr ;
        ST_PrSetCustVal* m_custLinFactY_attr ;
        bool m_has_custLinFactNeighborX_attr ;
        ST_PrSetCustVal* m_custLinFactNeighborX_attr ;
        bool m_has_custLinFactNeighborY_attr ;
        ST_PrSetCustVal* m_custLinFactNeighborY_attr ;
        bool m_has_custRadScaleRad_attr ;
        ST_PrSetCustVal* m_custRadScaleRad_attr ;
        bool m_has_custRadScaleInc_attr ;
        ST_PrSetCustVal* m_custRadScaleInc_attr ;

    }

    class CT_OrgChart : public XSD::ComplexType{
    public:
        void clear(){

                m_has_val_attr = false;
                m_val_attr = false;
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    _outStream << _attrName << \=\\ << XSD::BooleanStr(m_val_attr) << \\\;
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_OrgChart& default_instance(){

    if (!CT_OrgChart::default_instance_)
    {
        CT_OrgChart::default_instance_ = new CT_OrgChart();
    }
    return *CT_OrgChart::default_instance_;

        }
        bool has_val_attr(){

            return m_has_val_attr;
        
        }
        void set_val_attr(const boolean& _val_attr ){

        m_has_val_attr = true;
        m_val_attr = _val_attr;
        
        }
        const boolean& val_attr(){

            return type: oolean\nname: \m_val_attr\n;
        
        }

    private:
        static CT_OrgChart* default_instance_ ;
        bool m_has_val_attr ;
        boolean m_val_attr ;

    }

    class CT_ChildMax : public XSD::ComplexType{
    public:
        void clear(){

                m_has_val_attr = false;
                
        if (m_val_attr)
        {
            delete m_val_attr;
            m_val_attr = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    (varName)s->toXml(al\, _outStream);
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_ChildMax& default_instance(){

    if (!CT_ChildMax::default_instance_)
    {
        CT_ChildMax::default_instance_ = new CT_ChildMax();
    }
    return *CT_ChildMax::default_instance_;

        }
        bool has_val_attr(){

            return m_has_val_attr;
        
        }
        void set_val_attr(const ST_NodeCount& _val_attr ){

            m_has_val_attr = true;
            m_val_attr = new ST_NodeCount(_val_attr);
        
        }
        const ST_NodeCount& val_attr(){

            if (m_val_attr)
            {
                return *m_val_attr;
            }
            return ST_NodeCount::default_instance();
        
        }

    private:
        static CT_ChildMax* default_instance_ ;
        bool m_has_val_attr ;
        ST_NodeCount* m_val_attr ;

    }

    class CT_ChildPref : public XSD::ComplexType{
    public:
        void clear(){

                m_has_val_attr = false;
                
        if (m_val_attr)
        {
            delete m_val_attr;
            m_val_attr = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    (varName)s->toXml(al\, _outStream);
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_ChildPref& default_instance(){

    if (!CT_ChildPref::default_instance_)
    {
        CT_ChildPref::default_instance_ = new CT_ChildPref();
    }
    return *CT_ChildPref::default_instance_;

        }
        bool has_val_attr(){

            return m_has_val_attr;
        
        }
        void set_val_attr(const ST_NodeCount& _val_attr ){

            m_has_val_attr = true;
            m_val_attr = new ST_NodeCount(_val_attr);
        
        }
        const ST_NodeCount& val_attr(){

            if (m_val_attr)
            {
                return *m_val_attr;
            }
            return ST_NodeCount::default_instance();
        
        }

    private:
        static CT_ChildPref* default_instance_ ;
        bool m_has_val_attr ;
        ST_NodeCount* m_val_attr ;

    }

    class CT_BulletEnabled : public XSD::ComplexType{
    public:
        void clear(){

                m_has_val_attr = false;
                m_val_attr = false;
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    _outStream << _attrName << \=\\ << XSD::BooleanStr(m_val_attr) << \\\;
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_BulletEnabled& default_instance(){

    if (!CT_BulletEnabled::default_instance_)
    {
        CT_BulletEnabled::default_instance_ = new CT_BulletEnabled();
    }
    return *CT_BulletEnabled::default_instance_;

        }
        bool has_val_attr(){

            return m_has_val_attr;
        
        }
        void set_val_attr(const boolean& _val_attr ){

        m_has_val_attr = true;
        m_val_attr = _val_attr;
        
        }
        const boolean& val_attr(){

            return type: oolean\nname: \m_val_attr\n;
        
        }

    private:
        static CT_BulletEnabled* default_instance_ ;
        bool m_has_val_attr ;
        boolean m_val_attr ;

    }

    class CT_Direction : public XSD::ComplexType{
    public:
        void clear(){

                m_has_val_attr = false;
                
        if (m_val_attr)
        {
            delete m_val_attr;
            m_val_attr = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    (varName)s->toXml(al\, _outStream);
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_Direction& default_instance(){

    if (!CT_Direction::default_instance_)
    {
        CT_Direction::default_instance_ = new CT_Direction();
    }
    return *CT_Direction::default_instance_;

        }
        bool has_val_attr(){

            return m_has_val_attr;
        
        }
        void set_val_attr(const ST_Direction& _val_attr ){

            m_has_val_attr = true;
            m_val_attr = new ST_Direction(_val_attr);
        
        }
        const ST_Direction& val_attr(){

            if (m_val_attr)
            {
                return *m_val_attr;
            }
            return ST_Direction::default_instance();
        
        }

    private:
        static CT_Direction* default_instance_ ;
        bool m_has_val_attr ;
        ST_Direction* m_val_attr ;

    }

    class CT_HierBranchStyle : public XSD::ComplexType{
    public:
        void clear(){

                m_has_val_attr = false;
                
        if (m_val_attr)
        {
            delete m_val_attr;
            m_val_attr = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    (varName)s->toXml(al\, _outStream);
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_HierBranchStyle& default_instance(){

    if (!CT_HierBranchStyle::default_instance_)
    {
        CT_HierBranchStyle::default_instance_ = new CT_HierBranchStyle();
    }
    return *CT_HierBranchStyle::default_instance_;

        }
        bool has_val_attr(){

            return m_has_val_attr;
        
        }
        void set_val_attr(const ST_HierBranchStyle& _val_attr ){

            m_has_val_attr = true;
            m_val_attr = new ST_HierBranchStyle(_val_attr);
        
        }
        const ST_HierBranchStyle& val_attr(){

            if (m_val_attr)
            {
                return *m_val_attr;
            }
            return ST_HierBranchStyle::default_instance();
        
        }

    private:
        static CT_HierBranchStyle* default_instance_ ;
        bool m_has_val_attr ;
        ST_HierBranchStyle* m_val_attr ;

    }

    class CT_AnimOne : public XSD::ComplexType{
    public:
        void clear(){

                m_has_val_attr = false;
                
        if (m_val_attr)
        {
            delete m_val_attr;
            m_val_attr = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    (varName)s->toXml(al\, _outStream);
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_AnimOne& default_instance(){

    if (!CT_AnimOne::default_instance_)
    {
        CT_AnimOne::default_instance_ = new CT_AnimOne();
    }
    return *CT_AnimOne::default_instance_;

        }
        bool has_val_attr(){

            return m_has_val_attr;
        
        }
        void set_val_attr(const ST_AnimOneStr& _val_attr ){

            m_has_val_attr = true;
            m_val_attr = new ST_AnimOneStr(_val_attr);
        
        }
        const ST_AnimOneStr& val_attr(){

            if (m_val_attr)
            {
                return *m_val_attr;
            }
            return ST_AnimOneStr::default_instance();
        
        }

    private:
        static CT_AnimOne* default_instance_ ;
        bool m_has_val_attr ;
        ST_AnimOneStr* m_val_attr ;

    }

    class CT_AnimLvl : public XSD::ComplexType{
    public:
        void clear(){

                m_has_val_attr = false;
                
        if (m_val_attr)
        {
            delete m_val_attr;
            m_val_attr = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    (varName)s->toXml(al\, _outStream);
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_AnimLvl& default_instance(){

    if (!CT_AnimLvl::default_instance_)
    {
        CT_AnimLvl::default_instance_ = new CT_AnimLvl();
    }
    return *CT_AnimLvl::default_instance_;

        }
        bool has_val_attr(){

            return m_has_val_attr;
        
        }
        void set_val_attr(const ST_AnimLvlStr& _val_attr ){

            m_has_val_attr = true;
            m_val_attr = new ST_AnimLvlStr(_val_attr);
        
        }
        const ST_AnimLvlStr& val_attr(){

            if (m_val_attr)
            {
                return *m_val_attr;
            }
            return ST_AnimLvlStr::default_instance();
        
        }

    private:
        static CT_AnimLvl* default_instance_ ;
        bool m_has_val_attr ;
        ST_AnimLvlStr* m_val_attr ;

    }

    class CT_ResizeHandles : public XSD::ComplexType{
    public:
        void clear(){

                m_has_val_attr = false;
                
        if (m_val_attr)
        {
            delete m_val_attr;
            m_val_attr = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    (varName)s->toXml(al\, _outStream);
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_ResizeHandles& default_instance(){

    if (!CT_ResizeHandles::default_instance_)
    {
        CT_ResizeHandles::default_instance_ = new CT_ResizeHandles();
    }
    return *CT_ResizeHandles::default_instance_;

        }
        bool has_val_attr(){

            return m_has_val_attr;
        
        }
        void set_val_attr(const ST_ResizeHandlesStr& _val_attr ){

            m_has_val_attr = true;
            m_val_attr = new ST_ResizeHandlesStr(_val_attr);
        
        }
        const ST_ResizeHandlesStr& val_attr(){

            if (m_val_attr)
            {
                return *m_val_attr;
            }
            return ST_ResizeHandlesStr::default_instance();
        
        }

    private:
        static CT_ResizeHandles* default_instance_ ;
        bool m_has_val_attr ;
        ST_ResizeHandlesStr* m_val_attr ;

    }

    class CT_LayoutVariablePropertySet : public XSD::ComplexType{
    public:
        bool has_orgChart(){

            return m_has_orgChart;
        
        }
        CT_OrgChart* mutable_orgChart(){

                m_has_orgChart = true;
                if (!m_orgChart)
                {
                    m_orgChart = new CT_OrgChart();
                }
                return m_orgChart;
            
        }
        const CT_OrgChart& orgChart(){

            if (m_orgChart)
            {
                return *m_orgChart;
            }
            return CT_OrgChart::default_instance();
        
        }
        bool has_chMax(){

            return m_has_chMax;
        
        }
        CT_ChildMax* mutable_chMax(){

                m_has_chMax = true;
                if (!m_chMax)
                {
                    m_chMax = new CT_ChildMax();
                }
                return m_chMax;
            
        }
        const CT_ChildMax& chMax(){

            if (m_chMax)
            {
                return *m_chMax;
            }
            return CT_ChildMax::default_instance();
        
        }
        bool has_chPref(){

            return m_has_chPref;
        
        }
        CT_ChildPref* mutable_chPref(){

                m_has_chPref = true;
                if (!m_chPref)
                {
                    m_chPref = new CT_ChildPref();
                }
                return m_chPref;
            
        }
        const CT_ChildPref& chPref(){

            if (m_chPref)
            {
                return *m_chPref;
            }
            return CT_ChildPref::default_instance();
        
        }
        bool has_bulletEnabled(){

            return m_has_bulletEnabled;
        
        }
        CT_BulletEnabled* mutable_bulletEnabled(){

                m_has_bulletEnabled = true;
                if (!m_bulletEnabled)
                {
                    m_bulletEnabled = new CT_BulletEnabled();
                }
                return m_bulletEnabled;
            
        }
        const CT_BulletEnabled& bulletEnabled(){

            if (m_bulletEnabled)
            {
                return *m_bulletEnabled;
            }
            return CT_BulletEnabled::default_instance();
        
        }
        bool has_dir(){

            return m_has_dir;
        
        }
        CT_Direction* mutable_dir(){

                m_has_dir = true;
                if (!m_dir)
                {
                    m_dir = new CT_Direction();
                }
                return m_dir;
            
        }
        const CT_Direction& dir(){

            if (m_dir)
            {
                return *m_dir;
            }
            return CT_Direction::default_instance();
        
        }
        bool has_hierBranch(){

            return m_has_hierBranch;
        
        }
        CT_HierBranchStyle* mutable_hierBranch(){

                m_has_hierBranch = true;
                if (!m_hierBranch)
                {
                    m_hierBranch = new CT_HierBranchStyle();
                }
                return m_hierBranch;
            
        }
        const CT_HierBranchStyle& hierBranch(){

            if (m_hierBranch)
            {
                return *m_hierBranch;
            }
            return CT_HierBranchStyle::default_instance();
        
        }
        bool has_animOne(){

            return m_has_animOne;
        
        }
        CT_AnimOne* mutable_animOne(){

                m_has_animOne = true;
                if (!m_animOne)
                {
                    m_animOne = new CT_AnimOne();
                }
                return m_animOne;
            
        }
        const CT_AnimOne& animOne(){

            if (m_animOne)
            {
                return *m_animOne;
            }
            return CT_AnimOne::default_instance();
        
        }
        bool has_animLvl(){

            return m_has_animLvl;
        
        }
        CT_AnimLvl* mutable_animLvl(){

                m_has_animLvl = true;
                if (!m_animLvl)
                {
                    m_animLvl = new CT_AnimLvl();
                }
                return m_animLvl;
            
        }
        const CT_AnimLvl& animLvl(){

            if (m_animLvl)
            {
                return *m_animLvl;
            }
            return CT_AnimLvl::default_instance();
        
        }
        bool has_resizeHandles(){

            return m_has_resizeHandles;
        
        }
        CT_ResizeHandles* mutable_resizeHandles(){

                m_has_resizeHandles = true;
                if (!m_resizeHandles)
                {
                    m_resizeHandles = new CT_ResizeHandles();
                }
                return m_resizeHandles;
            
        }
        const CT_ResizeHandles& resizeHandles(){

            if (m_resizeHandles)
            {
                return *m_resizeHandles;
            }
            return CT_ResizeHandles::default_instance();
        
        }
        void clear(){

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
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_orgChart)
                {
                    m_orgChart->toXml(\d:orgChart\, _outStream);;
                }
            
                if (m_has_chMax)
                {
                    m_orgChart->toXml(\d:chMax\, _outStream);;
                }
            
                if (m_has_chPref)
                {
                    m_orgChart->toXml(\d:chPref\, _outStream);;
                }
            
                if (m_has_bulletEnabled)
                {
                    m_orgChart->toXml(\d:bulletEnabled\, _outStream);;
                }
            
                if (m_has_dir)
                {
                    m_orgChart->toXml(\d:dir\, _outStream);;
                }
            
                if (m_has_hierBranch)
                {
                    m_orgChart->toXml(\d:hierBranch\, _outStream);;
                }
            
                if (m_has_animOne)
                {
                    m_orgChart->toXml(\d:animOne\, _outStream);;
                }
            
                if (m_has_animLvl)
                {
                    m_orgChart->toXml(\d:animLvl\, _outStream);;
                }
            
                if (m_has_resizeHandles)
                {
                    m_orgChart->toXml(\d:resizeHandles\, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_LayoutVariablePropertySet& default_instance(){

    if (!CT_LayoutVariablePropertySet::default_instance_)
    {
        CT_LayoutVariablePropertySet::default_instance_ = new CT_LayoutVariablePropertySet();
    }
    return *CT_LayoutVariablePropertySet::default_instance_;

        }

    private:
        bool m_has_orgChart ;
        CT_OrgChart* m_orgChart ;
        bool m_has_chMax ;
        CT_ChildMax* m_chMax ;
        bool m_has_chPref ;
        CT_ChildPref* m_chPref ;
        bool m_has_bulletEnabled ;
        CT_BulletEnabled* m_bulletEnabled ;
        bool m_has_dir ;
        CT_Direction* m_dir ;
        bool m_has_hierBranch ;
        CT_HierBranchStyle* m_hierBranch ;
        bool m_has_animOne ;
        CT_AnimOne* m_animOne ;
        bool m_has_animLvl ;
        CT_AnimLvl* m_animLvl ;
        bool m_has_resizeHandles ;
        CT_ResizeHandles* m_resizeHandles ;
        static CT_LayoutVariablePropertySet* default_instance_ ;

    }

    class CT_SDName : public XSD::ComplexType{
    public:
        void clear(){

                m_has_lang_attr = false;
                m_lang_attr.clear();
            
                m_has_val_attr = false;
                m_val_attr.clear();
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    _outStream << _attrName << \=\\ << m_lang_attr << \\\;
_outStream << _attrName << \=\\ << m_val_attr << \\\;
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_SDName& default_instance(){

    if (!CT_SDName::default_instance_)
    {
        CT_SDName::default_instance_ = new CT_SDName();
    }
    return *CT_SDName::default_instance_;

        }
        bool has_lang_attr(){

            return m_has_lang_attr;
        
        }
        void set_lang_attr(const string& _lang_attr ){

        m_has_lang_attr = true;
        m_lang_attr = _lang_attr;
        
        }
        const string& lang_attr(){

            return type: \string\nname: \m_lang_attr\n;
        
        }
        bool has_val_attr(){

            return m_has_val_attr;
        
        }
        void set_val_attr(const string& _val_attr ){

        m_has_val_attr = true;
        m_val_attr = _val_attr;
        
        }
        const string& val_attr(){

            return type: \string\nname: \m_val_attr\n;
        
        }

    private:
        static CT_SDName* default_instance_ ;
        bool m_has_lang_attr ;
        string m_lang_attr ;
        bool m_has_val_attr ;
        string m_val_attr ;

    }

    class CT_SDDescription : public XSD::ComplexType{
    public:
        void clear(){

                m_has_lang_attr = false;
                m_lang_attr.clear();
            
                m_has_val_attr = false;
                m_val_attr.clear();
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    _outStream << _attrName << \=\\ << m_lang_attr << \\\;
_outStream << _attrName << \=\\ << m_val_attr << \\\;
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_SDDescription& default_instance(){

    if (!CT_SDDescription::default_instance_)
    {
        CT_SDDescription::default_instance_ = new CT_SDDescription();
    }
    return *CT_SDDescription::default_instance_;

        }
        bool has_lang_attr(){

            return m_has_lang_attr;
        
        }
        void set_lang_attr(const string& _lang_attr ){

        m_has_lang_attr = true;
        m_lang_attr = _lang_attr;
        
        }
        const string& lang_attr(){

            return type: \string\nname: \m_lang_attr\n;
        
        }
        bool has_val_attr(){

            return m_has_val_attr;
        
        }
        void set_val_attr(const string& _val_attr ){

        m_has_val_attr = true;
        m_val_attr = _val_attr;
        
        }
        const string& val_attr(){

            return type: \string\nname: \m_val_attr\n;
        
        }

    private:
        static CT_SDDescription* default_instance_ ;
        bool m_has_lang_attr ;
        string m_lang_attr ;
        bool m_has_val_attr ;
        string m_val_attr ;

    }

    class CT_SDCategory : public XSD::ComplexType{
    public:
        void clear(){

                m_has_type_attr = false;
                m_type_attr.clear();
            
                m_has_pri_attr = false;
                m_pri_attr = 0;
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    _outStream << _attrName << \=\\ << m_type_attr << \\\;
_outStream << _attrName << \=\\ << m_pri_attr << \\\;
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_SDCategory& default_instance(){

    if (!CT_SDCategory::default_instance_)
    {
        CT_SDCategory::default_instance_ = new CT_SDCategory();
    }
    return *CT_SDCategory::default_instance_;

        }
        bool has_type_attr(){

            return m_has_type_attr;
        
        }
        void set_type_attr(const anyURI& _type_attr ){

        m_has_type_attr = true;
        m_type_attr = _type_attr;
        
        }
        const anyURI& type_attr(){

            return type: nyURI\nname: \m_type_attr\n;
        
        }
        bool has_pri_attr(){

            return m_has_pri_attr;
        
        }
        void set_pri_attr(const unsignedInt& _pri_attr ){

        m_has_pri_attr = true;
        m_pri_attr = _pri_attr;
        
        }
        const unsignedInt& pri_attr(){

            return type: \unsignedInt\nname: \m_pri_attr\n;
        
        }

    private:
        static CT_SDCategory* default_instance_ ;
        bool m_has_type_attr ;
        anyURI m_type_attr ;
        bool m_has_pri_attr ;
        unsignedInt m_pri_attr ;

    }

    class CT_SDCategories : public XSD::ComplexType{
    public:
        CT_SDCategory* add_cat(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            CT_SDCategory* pNewChild = pChildGroup->mutable_cat();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        void clear(){

            vector<ChildGroup_1*>::iterator iter;
            for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
            {
                delete *iter;
            }
            m_childGroupList_1.clear();
        
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_cat())
            {
                (*iter)->toXml(\d:cat\, _outStream);
            }
        }
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_SDCategories& default_instance(){

    if (!CT_SDCategories::default_instance_)
    {
        CT_SDCategories::default_instance_ = new CT_SDCategories();
    }
    return *CT_SDCategories::default_instance_;

        }

    private:
        vector<ChildGroup_1*> m_childGroupList_1 ;
        static CT_SDCategories* default_instance_ ;
        class ChildGroup_1{
        public:
            bool has_cat(){

            return m_has_cat;
        
            }
            CT_SDCategory* mutable_cat(){

                
                m_has_cat = true;
                if (!m_cat)
                {
                    m_cat = new CT_SDCategory();
                }
                return m_cat;
            
            }
            const CT_SDCategory& cat(){

            if (m_cat)
            {
                return *m_cat;
            }
            return CT_SDCategory::default_instance();
        
            }

        private:
            bool m_has_cat ;
            CT_SDCategory* m_cat ;

        }


    }

    class CT_TextProps : public XSD::ComplexType{
    public:
        bool has_sp3d(){

            return m_has_sp3d;
        
        }
        CT_Shape3D* mutable_sp3d(){

                
                m_has_flatTx = false;
                
        if (m_flatTx)
        {
            delete m_flatTx;
            m_flatTx = NULL;
        }
    ;
            
                m_has_sp3d = true;
                if (!m_sp3d)
                {
                    m_sp3d = new CT_Shape3D();
                }
                return m_sp3d;
            
        }
        const CT_Shape3D& sp3d(){

            if (m_sp3d)
            {
                return *m_sp3d;
            }
            return CT_Shape3D::default_instance();
        
        }
        bool has_flatTx(){

            return m_has_flatTx;
        
        }
        CT_FlatText* mutable_flatTx(){

                
                m_has_sp3d = false;
                
        if (m_sp3d)
        {
            delete m_sp3d;
            m_sp3d = NULL;
        }
    ;
            
                m_has_flatTx = true;
                if (!m_flatTx)
                {
                    m_flatTx = new CT_FlatText();
                }
                return m_flatTx;
            
        }
        const CT_FlatText& flatTx(){

            if (m_flatTx)
            {
                return *m_flatTx;
            }
            return CT_FlatText::default_instance();
        
        }
        void clear(){

                m_has_sp3d = false;
                
        if (m_sp3d)
        {
            delete m_sp3d;
            m_sp3d = NULL;
        }
    
            
                m_has_flatTx = false;
                
        if (m_flatTx)
        {
            delete m_flatTx;
            m_flatTx = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_sp3d)
                {
                    m_sp3d->toXml(\d:sp3d\, _outStream);;
                }
            
                if (m_has_flatTx)
                {
                    m_sp3d->toXml(\d:flatTx\, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_TextProps& default_instance(){

    if (!CT_TextProps::default_instance_)
    {
        CT_TextProps::default_instance_ = new CT_TextProps();
    }
    return *CT_TextProps::default_instance_;

        }

    private:
        bool m_has_sp3d ;
        CT_Shape3D* m_sp3d ;
        bool m_has_flatTx ;
        CT_FlatText* m_flatTx ;
        static CT_TextProps* default_instance_ ;

    }

    class CT_StyleLabel : public XSD::ComplexType{
    public:
        bool has_scene3d(){

            return m_has_scene3d;
        
        }
        ns_a::CT_Scene3D* mutable_scene3d(){

                m_has_scene3d = true;
                if (!m_scene3d)
                {
                    m_scene3d = new ns_a::CT_Scene3D();
                }
                return m_scene3d;
            
        }
        const ns_a::CT_Scene3D& scene3d(){

            if (m_scene3d)
            {
                return *m_scene3d;
            }
            return ns_a::CT_Scene3D::default_instance();
        
        }
        bool has_sp3d(){

            return m_has_sp3d;
        
        }
        ns_a::CT_Shape3D* mutable_sp3d(){

                m_has_sp3d = true;
                if (!m_sp3d)
                {
                    m_sp3d = new ns_a::CT_Shape3D();
                }
                return m_sp3d;
            
        }
        const ns_a::CT_Shape3D& sp3d(){

            if (m_sp3d)
            {
                return *m_sp3d;
            }
            return ns_a::CT_Shape3D::default_instance();
        
        }
        bool has_txPr(){

            return m_has_txPr;
        
        }
        CT_TextProps* mutable_txPr(){

                m_has_txPr = true;
                if (!m_txPr)
                {
                    m_txPr = new CT_TextProps();
                }
                return m_txPr;
            
        }
        const CT_TextProps& txPr(){

            if (m_txPr)
            {
                return *m_txPr;
            }
            return CT_TextProps::default_instance();
        
        }
        bool has_style(){

            return m_has_style;
        
        }
        ns_a::CT_ShapeStyle* mutable_style(){

                m_has_style = true;
                if (!m_style)
                {
                    m_style = new ns_a::CT_ShapeStyle();
                }
                return m_style;
            
        }
        const ns_a::CT_ShapeStyle& style(){

            if (m_style)
            {
                return *m_style;
            }
            return ns_a::CT_ShapeStyle::default_instance();
        
        }
        bool has_extLst(){

            return m_has_extLst;
        
        }
        ns_a::CT_OfficeArtExtensionList* mutable_extLst(){

                m_has_extLst = true;
                if (!m_extLst)
                {
                    m_extLst = new ns_a::CT_OfficeArtExtensionList();
                }
                return m_extLst;
            
        }
        const ns_a::CT_OfficeArtExtensionList& extLst(){

            if (m_extLst)
            {
                return *m_extLst;
            }
            return ns_a::CT_OfficeArtExtensionList::default_instance();
        
        }
        void clear(){

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
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    _outStream << _attrName << \=\\ << m_name_attr << \\\;
        _outStream << \>\;
    
                if (m_has_scene3d)
                {
                    m_scene3d->toXml(\d:scene3d\, _outStream);;
                }
            
                if (m_has_sp3d)
                {
                    m_scene3d->toXml(\d:sp3d\, _outStream);;
                }
            
                if (m_has_txPr)
                {
                    m_scene3d->toXml(\d:txPr\, _outStream);;
                }
            
                if (m_has_style)
                {
                    m_scene3d->toXml(\d:style\, _outStream);;
                }
            
                if (m_has_extLst)
                {
                    m_scene3d->toXml(\d:extLst\, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_StyleLabel& default_instance(){

    if (!CT_StyleLabel::default_instance_)
    {
        CT_StyleLabel::default_instance_ = new CT_StyleLabel();
    }
    return *CT_StyleLabel::default_instance_;

        }
        bool has_name_attr(){

            return m_has_name_attr;
        
        }
        void set_name_attr(const string& _name_attr ){

        m_has_name_attr = true;
        m_name_attr = _name_attr;
        
        }
        const string& name_attr(){

            return type: \string\nname: \m_name_attr\n;
        
        }

    private:
        bool m_has_scene3d ;
        ns_a::CT_Scene3D* m_scene3d ;
        bool m_has_sp3d ;
        ns_a::CT_Shape3D* m_sp3d ;
        bool m_has_txPr ;
        CT_TextProps* m_txPr ;
        bool m_has_style ;
        ns_a::CT_ShapeStyle* m_style ;
        bool m_has_extLst ;
        ns_a::CT_OfficeArtExtensionList* m_extLst ;
        static CT_StyleLabel* default_instance_ ;
        bool m_has_name_attr ;
        string m_name_attr ;

    }

    class CT_StyleDefinition : public XSD::ComplexType{
    public:
        bool has_title(){

            return m_has_title;
        
        }
        CT_SDName* mutable_title(){

                m_has_title = true;
                if (!m_title)
                {
                    m_title = new CT_SDName();
                }
                return m_title;
            
        }
        const CT_SDName& title(){

            if (m_title)
            {
                return *m_title;
            }
            return CT_SDName::default_instance();
        
        }
        bool has_desc(){

            return m_has_desc;
        
        }
        CT_SDDescription* mutable_desc(){

                m_has_desc = true;
                if (!m_desc)
                {
                    m_desc = new CT_SDDescription();
                }
                return m_desc;
            
        }
        const CT_SDDescription& desc(){

            if (m_desc)
            {
                return *m_desc;
            }
            return CT_SDDescription::default_instance();
        
        }
        bool has_catLst(){

            return m_has_catLst;
        
        }
        CT_SDCategories* mutable_catLst(){

                m_has_catLst = true;
                if (!m_catLst)
                {
                    m_catLst = new CT_SDCategories();
                }
                return m_catLst;
            
        }
        const CT_SDCategories& catLst(){

            if (m_catLst)
            {
                return *m_catLst;
            }
            return CT_SDCategories::default_instance();
        
        }
        bool has_scene3d(){

            return m_has_scene3d;
        
        }
        ns_a::CT_Scene3D* mutable_scene3d(){

                m_has_scene3d = true;
                if (!m_scene3d)
                {
                    m_scene3d = new ns_a::CT_Scene3D();
                }
                return m_scene3d;
            
        }
        const ns_a::CT_Scene3D& scene3d(){

            if (m_scene3d)
            {
                return *m_scene3d;
            }
            return ns_a::CT_Scene3D::default_instance();
        
        }
        bool has_styleLbl(){

            return m_has_styleLbl;
        
        }
        CT_StyleLabel* mutable_styleLbl(){

                m_has_styleLbl = true;
                if (!m_styleLbl)
                {
                    m_styleLbl = new CT_StyleLabel();
                }
                return m_styleLbl;
            
        }
        const CT_StyleLabel& styleLbl(){

            if (m_styleLbl)
            {
                return *m_styleLbl;
            }
            return CT_StyleLabel::default_instance();
        
        }
        bool has_extLst(){

            return m_has_extLst;
        
        }
        ns_a::CT_OfficeArtExtensionList* mutable_extLst(){

                m_has_extLst = true;
                if (!m_extLst)
                {
                    m_extLst = new ns_a::CT_OfficeArtExtensionList();
                }
                return m_extLst;
            
        }
        const ns_a::CT_OfficeArtExtensionList& extLst(){

            if (m_extLst)
            {
                return *m_extLst;
            }
            return ns_a::CT_OfficeArtExtensionList::default_instance();
        
        }
        void clear(){

                m_has_uniqueId_attr = false;
                m_uniqueId_attr.clear();
            
                m_has_minVer_attr = false;
                m_minVer_attr.clear();
            
                m_has_title = false;
                
        if (m_title)
        {
            delete m_title;
            m_title = NULL;
        }
    
            
                m_has_desc = false;
                
        if (m_desc)
        {
            delete m_desc;
            m_desc = NULL;
        }
    
            
                m_has_catLst = false;
                
        if (m_catLst)
        {
            delete m_catLst;
            m_catLst = NULL;
        }
    
            
                m_has_scene3d = false;
                
        if (m_scene3d)
        {
            delete m_scene3d;
            m_scene3d = NULL;
        }
    
            
                m_has_styleLbl = false;
                
        if (m_styleLbl)
        {
            delete m_styleLbl;
            m_styleLbl = NULL;
        }
    
            
                m_has_extLst = false;
                
        if (m_extLst)
        {
            delete m_extLst;
            m_extLst = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    _outStream << _attrName << \=\\ << m_uniqueId_attr << \\\;
_outStream << _attrName << \=\\ << m_minVer_attr << \\\;
        _outStream << \>\;
    
                if (m_has_title)
                {
                    m_title->toXml(\d:title\, _outStream);;
                }
            
                if (m_has_desc)
                {
                    m_title->toXml(\d:desc\, _outStream);;
                }
            
                if (m_has_catLst)
                {
                    m_title->toXml(\d:catLst\, _outStream);;
                }
            
                if (m_has_scene3d)
                {
                    m_title->toXml(\d:scene3d\, _outStream);;
                }
            
                if (m_has_styleLbl)
                {
                    m_title->toXml(\d:styleLbl\, _outStream);;
                }
            
                if (m_has_extLst)
                {
                    m_title->toXml(\d:extLst\, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_StyleDefinition& default_instance(){

    if (!CT_StyleDefinition::default_instance_)
    {
        CT_StyleDefinition::default_instance_ = new CT_StyleDefinition();
    }
    return *CT_StyleDefinition::default_instance_;

        }
        bool has_uniqueId_attr(){

            return m_has_uniqueId_attr;
        
        }
        void set_uniqueId_attr(const string& _uniqueId_attr ){

        m_has_uniqueId_attr = true;
        m_uniqueId_attr = _uniqueId_attr;
        
        }
        const string& uniqueId_attr(){

            return type: \string\nname: \m_uniqueId_attr\n;
        
        }
        bool has_minVer_attr(){

            return m_has_minVer_attr;
        
        }
        void set_minVer_attr(const string& _minVer_attr ){

        m_has_minVer_attr = true;
        m_minVer_attr = _minVer_attr;
        
        }
        const string& minVer_attr(){

            return type: \string\nname: \m_minVer_attr\n;
        
        }

    private:
        bool m_has_title ;
        CT_SDName* m_title ;
        bool m_has_desc ;
        CT_SDDescription* m_desc ;
        bool m_has_catLst ;
        CT_SDCategories* m_catLst ;
        bool m_has_scene3d ;
        ns_a::CT_Scene3D* m_scene3d ;
        bool m_has_styleLbl ;
        CT_StyleLabel* m_styleLbl ;
        bool m_has_extLst ;
        ns_a::CT_OfficeArtExtensionList* m_extLst ;
        static CT_StyleDefinition* default_instance_ ;
        bool m_has_uniqueId_attr ;
        string m_uniqueId_attr ;
        bool m_has_minVer_attr ;
        string m_minVer_attr ;

    }

    class CT_StyleDefinitionHeader : public XSD::ComplexType{
    public:
        bool has_title(){

            return m_has_title;
        
        }
        CT_SDName* mutable_title(){

                m_has_title = true;
                if (!m_title)
                {
                    m_title = new CT_SDName();
                }
                return m_title;
            
        }
        const CT_SDName& title(){

            if (m_title)
            {
                return *m_title;
            }
            return CT_SDName::default_instance();
        
        }
        bool has_desc(){

            return m_has_desc;
        
        }
        CT_SDDescription* mutable_desc(){

                m_has_desc = true;
                if (!m_desc)
                {
                    m_desc = new CT_SDDescription();
                }
                return m_desc;
            
        }
        const CT_SDDescription& desc(){

            if (m_desc)
            {
                return *m_desc;
            }
            return CT_SDDescription::default_instance();
        
        }
        bool has_catLst(){

            return m_has_catLst;
        
        }
        CT_SDCategories* mutable_catLst(){

                m_has_catLst = true;
                if (!m_catLst)
                {
                    m_catLst = new CT_SDCategories();
                }
                return m_catLst;
            
        }
        const CT_SDCategories& catLst(){

            if (m_catLst)
            {
                return *m_catLst;
            }
            return CT_SDCategories::default_instance();
        
        }
        bool has_extLst(){

            return m_has_extLst;
        
        }
        ns_a::CT_OfficeArtExtensionList* mutable_extLst(){

                m_has_extLst = true;
                if (!m_extLst)
                {
                    m_extLst = new ns_a::CT_OfficeArtExtensionList();
                }
                return m_extLst;
            
        }
        const ns_a::CT_OfficeArtExtensionList& extLst(){

            if (m_extLst)
            {
                return *m_extLst;
            }
            return ns_a::CT_OfficeArtExtensionList::default_instance();
        
        }
        void clear(){

                m_has_uniqueId_attr = false;
                m_uniqueId_attr.clear();
            
                m_has_minVer_attr = false;
                m_minVer_attr.clear();
            
                m_has_resId_attr = false;
                m_resId_attr = 0;
            
                m_has_title = false;
                
        if (m_title)
        {
            delete m_title;
            m_title = NULL;
        }
    
            
                m_has_desc = false;
                
        if (m_desc)
        {
            delete m_desc;
            m_desc = NULL;
        }
    
            
                m_has_catLst = false;
                
        if (m_catLst)
        {
            delete m_catLst;
            m_catLst = NULL;
        }
    
            
                m_has_extLst = false;
                
        if (m_extLst)
        {
            delete m_extLst;
            m_extLst = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    _outStream << _attrName << \=\\ << m_uniqueId_attr << \\\;
_outStream << _attrName << \=\\ << m_minVer_attr << \\\;
_outStream << _attrName << \=\\ << m_resId_attr << \\\;
        _outStream << \>\;
    
                if (m_has_title)
                {
                    m_title->toXml(\d:title\, _outStream);;
                }
            
                if (m_has_desc)
                {
                    m_title->toXml(\d:desc\, _outStream);;
                }
            
                if (m_has_catLst)
                {
                    m_title->toXml(\d:catLst\, _outStream);;
                }
            
                if (m_has_extLst)
                {
                    m_title->toXml(\d:extLst\, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_StyleDefinitionHeader& default_instance(){

    if (!CT_StyleDefinitionHeader::default_instance_)
    {
        CT_StyleDefinitionHeader::default_instance_ = new CT_StyleDefinitionHeader();
    }
    return *CT_StyleDefinitionHeader::default_instance_;

        }
        bool has_uniqueId_attr(){

            return m_has_uniqueId_attr;
        
        }
        void set_uniqueId_attr(const string& _uniqueId_attr ){

        m_has_uniqueId_attr = true;
        m_uniqueId_attr = _uniqueId_attr;
        
        }
        const string& uniqueId_attr(){

            return type: \string\nname: \m_uniqueId_attr\n;
        
        }
        bool has_minVer_attr(){

            return m_has_minVer_attr;
        
        }
        void set_minVer_attr(const string& _minVer_attr ){

        m_has_minVer_attr = true;
        m_minVer_attr = _minVer_attr;
        
        }
        const string& minVer_attr(){

            return type: \string\nname: \m_minVer_attr\n;
        
        }
        bool has_resId_attr(){

            return m_has_resId_attr;
        
        }
        void set_resId_attr(const int& _resId_attr ){

        m_has_resId_attr = true;
        m_resId_attr = _resId_attr;
        
        }
        const int& resId_attr(){

            return type: \int\nname: \m_resId_attr\n;
        
        }

    private:
        bool m_has_title ;
        CT_SDName* m_title ;
        bool m_has_desc ;
        CT_SDDescription* m_desc ;
        bool m_has_catLst ;
        CT_SDCategories* m_catLst ;
        bool m_has_extLst ;
        ns_a::CT_OfficeArtExtensionList* m_extLst ;
        static CT_StyleDefinitionHeader* default_instance_ ;
        bool m_has_uniqueId_attr ;
        string m_uniqueId_attr ;
        bool m_has_minVer_attr ;
        string m_minVer_attr ;
        bool m_has_resId_attr ;
        int m_resId_attr ;

    }

    class CT_StyleDefinitionHeaderLst : public XSD::ComplexType{
    public:
        bool has_styleDefHdr(){

            return m_has_styleDefHdr;
        
        }
        CT_StyleDefinitionHeader* mutable_styleDefHdr(){

                m_has_styleDefHdr = true;
                if (!m_styleDefHdr)
                {
                    m_styleDefHdr = new CT_StyleDefinitionHeader();
                }
                return m_styleDefHdr;
            
        }
        const CT_StyleDefinitionHeader& styleDefHdr(){

            if (m_styleDefHdr)
            {
                return *m_styleDefHdr;
            }
            return CT_StyleDefinitionHeader::default_instance();
        
        }
        void clear(){

                m_has_styleDefHdr = false;
                
        if (m_styleDefHdr)
        {
            delete m_styleDefHdr;
            m_styleDefHdr = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_styleDefHdr)
                {
                    m_styleDefHdr->toXml(\d:styleDefHdr\, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_StyleDefinitionHeaderLst& default_instance(){

    if (!CT_StyleDefinitionHeaderLst::default_instance_)
    {
        CT_StyleDefinitionHeaderLst::default_instance_ = new CT_StyleDefinitionHeaderLst();
    }
    return *CT_StyleDefinitionHeaderLst::default_instance_;

        }

    private:
        bool m_has_styleDefHdr ;
        CT_StyleDefinitionHeader* m_styleDefHdr ;
        static CT_StyleDefinitionHeaderLst* default_instance_ ;

    }

    class colorsDef : public CT_ColorTransform : public Element{
    public:
        void toXml(ostream& _outStream ){

        CT_ColorTransform::toXml(\colorsDef\, _outStream);
    
        }

    private:

    }

    class colorsDefHdr : public CT_ColorTransformHeader : public Element{
    public:
        void toXml(ostream& _outStream ){

        CT_ColorTransformHeader::toXml(\colorsDefHdr\, _outStream);
    
        }

    private:

    }

    class colorsDefHdrLst : public CT_ColorTransformHeaderLst : public Element{
    public:
        void toXml(ostream& _outStream ){

        CT_ColorTransformHeaderLst::toXml(\colorsDefHdrLst\, _outStream);
    
        }

    private:

    }

    class dataModel : public CT_DataModel : public Element{
    public:
        void toXml(ostream& _outStream ){

        CT_DataModel::toXml(\dataModel\, _outStream);
    
        }

    private:

    }

    class layoutDef : public CT_DiagramDefinition : public Element{
    public:
        void toXml(ostream& _outStream ){

        CT_DiagramDefinition::toXml(\layoutDef\, _outStream);
    
        }

    private:

    }

    class layoutDefHdr : public CT_DiagramDefinitionHeader : public Element{
    public:
        void toXml(ostream& _outStream ){

        CT_DiagramDefinitionHeader::toXml(\layoutDefHdr\, _outStream);
    
        }

    private:

    }

    class layoutDefHdrLst : public CT_DiagramDefinitionHeaderLst : public Element{
    public:
        void toXml(ostream& _outStream ){

        CT_DiagramDefinitionHeaderLst::toXml(\layoutDefHdrLst\, _outStream);
    
        }

    private:

    }

    class relIds : public CT_RelIds : public Element{
    public:
        void toXml(ostream& _outStream ){

        CT_RelIds::toXml(elIds\, _outStream);
    
        }

    private:

    }

    class styleDef : public CT_StyleDefinition : public Element{
    public:
        void toXml(ostream& _outStream ){

        CT_StyleDefinition::toXml(\styleDef\, _outStream);
    
        }

    private:

    }

    class styleDefHdr : public CT_StyleDefinitionHeader : public Element{
    public:
        void toXml(ostream& _outStream ){

        CT_StyleDefinitionHeader::toXml(\styleDefHdr\, _outStream);
    
        }

    private:

    }

    class styleDefHdrLst : public CT_StyleDefinitionHeaderLst : public Element{
    public:
        void toXml(ostream& _outStream ){

        CT_StyleDefinitionHeaderLst::toXml(\styleDefHdrLst\, _outStream);
    
        }

    private:

    }

}