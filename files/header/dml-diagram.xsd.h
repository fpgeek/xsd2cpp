#ifndef dml-diagram_xsd 
#define dml-diagram_xsd 0 

#include "xsddata.h"
#include <vector>
#include <string>
#include <iostream>
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
        ST_ClrAppMethod();
        ST_ClrAppMethod(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_ClrAppMethod& default_instance() const;
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
        ST_HueDir();
        ST_HueDir(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_HueDir& default_instance() const;
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
        ST_PtType();
        ST_PtType(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_PtType& default_instance() const;
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
        ST_CxnType();
        ST_CxnType(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_CxnType& default_instance() const;
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
        bool has_ST_ShapeType() const;
        ns_a::ST_ShapeType* mutable_ST_ShapeType();
        const ns_a::ST_ShapeType& ST_ShapeType() const;
        bool has_ST_OutputShapeType() const;
        ST_OutputShapeType* mutable_ST_OutputShapeType();
        const ST_OutputShapeType& ST_OutputShapeType() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_LayoutShapeType& default_instance() const;

    private:
        void clear_ST_ShapeType();
        void clear_ST_OutputShapeType();
        bool m_has_ST_ShapeType ;
        ns_a::ST_ShapeType* m_ST_ShapeType ;
        bool m_has_ST_OutputShapeType ;
        ST_OutputShapeType* m_ST_OutputShapeType ;
        static ST_LayoutShapeType* default_instance_ ;

    }

    class ST_Index1 : public XSD::SimpleType{
    public:
        ST_Index1();
        ST_Index1(const XSD::unsignedInt& _unsignedInt );
        bool has_unsignedInt() const;
        void set_unsignedInt(const unsignedInt& _unsignedInt );
        const unsignedInt& unsignedInt() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_Index1& default_instance() const;

    private:
        static ST_Index1* default_instance_ ;
        bool m_has_unsignedInt ;
        unsignedInt m_unsignedInt ;

    }

    class ST_ParameterVal : public XSD::SimpleType{
    public:
        bool has_ST_DiagramHorizontalAlignment() const;
        ST_DiagramHorizontalAlignment* mutable_ST_DiagramHorizontalAlignment();
        const ST_DiagramHorizontalAlignment& ST_DiagramHorizontalAlignment() const;
        bool has_ST_VerticalAlignment() const;
        ST_VerticalAlignment* mutable_ST_VerticalAlignment();
        const ST_VerticalAlignment& ST_VerticalAlignment() const;
        bool has_ST_ChildDirection() const;
        ST_ChildDirection* mutable_ST_ChildDirection();
        const ST_ChildDirection& ST_ChildDirection() const;
        bool has_ST_ChildAlignment() const;
        ST_ChildAlignment* mutable_ST_ChildAlignment();
        const ST_ChildAlignment& ST_ChildAlignment() const;
        bool has_ST_SecondaryChildAlignment() const;
        ST_SecondaryChildAlignment* mutable_ST_SecondaryChildAlignment();
        const ST_SecondaryChildAlignment& ST_SecondaryChildAlignment() const;
        bool has_ST_LinearDirection() const;
        ST_LinearDirection* mutable_ST_LinearDirection();
        const ST_LinearDirection& ST_LinearDirection() const;
        bool has_ST_SecondaryLinearDirection() const;
        ST_SecondaryLinearDirection* mutable_ST_SecondaryLinearDirection();
        const ST_SecondaryLinearDirection& ST_SecondaryLinearDirection() const;
        bool has_ST_StartingElement() const;
        ST_StartingElement* mutable_ST_StartingElement();
        const ST_StartingElement& ST_StartingElement() const;
        bool has_ST_BendPoint() const;
        ST_BendPoint* mutable_ST_BendPoint();
        const ST_BendPoint& ST_BendPoint() const;
        bool has_ST_ConnectorRouting() const;
        ST_ConnectorRouting* mutable_ST_ConnectorRouting();
        const ST_ConnectorRouting& ST_ConnectorRouting() const;
        bool has_ST_ArrowheadStyle() const;
        ST_ArrowheadStyle* mutable_ST_ArrowheadStyle();
        const ST_ArrowheadStyle& ST_ArrowheadStyle() const;
        bool has_ST_ConnectorDimension() const;
        ST_ConnectorDimension* mutable_ST_ConnectorDimension();
        const ST_ConnectorDimension& ST_ConnectorDimension() const;
        bool has_ST_RotationPath() const;
        ST_RotationPath* mutable_ST_RotationPath();
        const ST_RotationPath& ST_RotationPath() const;
        bool has_ST_CenterShapeMapping() const;
        ST_CenterShapeMapping* mutable_ST_CenterShapeMapping();
        const ST_CenterShapeMapping& ST_CenterShapeMapping() const;
        bool has_ST_NodeHorizontalAlignment() const;
        ST_NodeHorizontalAlignment* mutable_ST_NodeHorizontalAlignment();
        const ST_NodeHorizontalAlignment& ST_NodeHorizontalAlignment() const;
        bool has_ST_NodeVerticalAlignment() const;
        ST_NodeVerticalAlignment* mutable_ST_NodeVerticalAlignment();
        const ST_NodeVerticalAlignment& ST_NodeVerticalAlignment() const;
        bool has_ST_FallbackDimension() const;
        ST_FallbackDimension* mutable_ST_FallbackDimension();
        const ST_FallbackDimension& ST_FallbackDimension() const;
        bool has_ST_TextDirection() const;
        ST_TextDirection* mutable_ST_TextDirection();
        const ST_TextDirection& ST_TextDirection() const;
        bool has_ST_PyramidAccentPosition() const;
        ST_PyramidAccentPosition* mutable_ST_PyramidAccentPosition();
        const ST_PyramidAccentPosition& ST_PyramidAccentPosition() const;
        bool has_ST_PyramidAccentTextMargin() const;
        ST_PyramidAccentTextMargin* mutable_ST_PyramidAccentTextMargin();
        const ST_PyramidAccentTextMargin& ST_PyramidAccentTextMargin() const;
        bool has_ST_TextBlockDirection() const;
        ST_TextBlockDirection* mutable_ST_TextBlockDirection();
        const ST_TextBlockDirection& ST_TextBlockDirection() const;
        bool has_ST_TextAnchorHorizontal() const;
        ST_TextAnchorHorizontal* mutable_ST_TextAnchorHorizontal();
        const ST_TextAnchorHorizontal& ST_TextAnchorHorizontal() const;
        bool has_ST_TextAnchorVertical() const;
        ST_TextAnchorVertical* mutable_ST_TextAnchorVertical();
        const ST_TextAnchorVertical& ST_TextAnchorVertical() const;
        bool has_ST_DiagramTextAlignment() const;
        ST_DiagramTextAlignment* mutable_ST_DiagramTextAlignment();
        const ST_DiagramTextAlignment& ST_DiagramTextAlignment() const;
        bool has_ST_AutoTextRotation() const;
        ST_AutoTextRotation* mutable_ST_AutoTextRotation();
        const ST_AutoTextRotation& ST_AutoTextRotation() const;
        bool has_ST_GrowDirection() const;
        ST_GrowDirection* mutable_ST_GrowDirection();
        const ST_GrowDirection& ST_GrowDirection() const;
        bool has_ST_FlowDirection() const;
        ST_FlowDirection* mutable_ST_FlowDirection();
        const ST_FlowDirection& ST_FlowDirection() const;
        bool has_ST_ContinueDirection() const;
        ST_ContinueDirection* mutable_ST_ContinueDirection();
        const ST_ContinueDirection& ST_ContinueDirection() const;
        bool has_ST_Breakpoint() const;
        ST_Breakpoint* mutable_ST_Breakpoint();
        const ST_Breakpoint& ST_Breakpoint() const;
        bool has_ST_Offset() const;
        ST_Offset* mutable_ST_Offset();
        const ST_Offset& ST_Offset() const;
        bool has_ST_HierarchyAlignment() const;
        ST_HierarchyAlignment* mutable_ST_HierarchyAlignment();
        const ST_HierarchyAlignment& ST_HierarchyAlignment() const;
        bool has_int() const;
        void set_int(const int& _int );
        const int& int() const;
        bool has_double() const;
        void set_double(const double& _double );
        const double& double() const;
        bool has_boolean() const;
        void set_boolean(const boolean& _boolean );
        const boolean& boolean() const;
        bool has_string() const;
        void set_string(const string& _string );
        const string& string() const;
        bool has_ST_ConnectorPoint() const;
        ST_ConnectorPoint* mutable_ST_ConnectorPoint();
        const ST_ConnectorPoint& ST_ConnectorPoint() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_ParameterVal& default_instance() const;

    private:
        void clear_ST_DiagramHorizontalAlignment();
        void clear_ST_VerticalAlignment();
        void clear_ST_ChildDirection();
        void clear_ST_ChildAlignment();
        void clear_ST_SecondaryChildAlignment();
        void clear_ST_LinearDirection();
        void clear_ST_SecondaryLinearDirection();
        void clear_ST_StartingElement();
        void clear_ST_BendPoint();
        void clear_ST_ConnectorRouting();
        void clear_ST_ArrowheadStyle();
        void clear_ST_ConnectorDimension();
        void clear_ST_RotationPath();
        void clear_ST_CenterShapeMapping();
        void clear_ST_NodeHorizontalAlignment();
        void clear_ST_NodeVerticalAlignment();
        void clear_ST_FallbackDimension();
        void clear_ST_TextDirection();
        void clear_ST_PyramidAccentPosition();
        void clear_ST_PyramidAccentTextMargin();
        void clear_ST_TextBlockDirection();
        void clear_ST_TextAnchorHorizontal();
        void clear_ST_TextAnchorVertical();
        void clear_ST_DiagramTextAlignment();
        void clear_ST_AutoTextRotation();
        void clear_ST_GrowDirection();
        void clear_ST_FlowDirection();
        void clear_ST_ContinueDirection();
        void clear_ST_Breakpoint();
        void clear_ST_Offset();
        void clear_ST_HierarchyAlignment();
        void clear_int();
        void clear_double();
        void clear_boolean();
        void clear_string();
        void clear_ST_ConnectorPoint();
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
        bool has_int() const;
        void set_int(const int& _int );
        const int& int() const;
        bool has_ST_Guid() const;
        ns_s::ST_Guid* mutable_ST_Guid();
        const ns_s::ST_Guid& ST_Guid() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_ModelId& default_instance() const;

    private:
        void clear_int();
        void clear_ST_Guid();
        bool m_has_int ;
        int m_int ;
        bool m_has_ST_Guid ;
        ns_s::ST_Guid* m_ST_Guid ;
        static ST_ModelId* default_instance_ ;

    }

    class ST_PrSetCustVal : public XSD::SimpleType{
    public:
        bool has_ST_Percentage() const;
        ns_s::ST_Percentage* mutable_ST_Percentage();
        const ns_s::ST_Percentage& ST_Percentage() const;
        bool has_int() const;
        void set_int(const int& _int );
        const int& int() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_PrSetCustVal& default_instance() const;

    private:
        void clear_ST_Percentage();
        void clear_int();
        bool m_has_ST_Percentage ;
        ns_s::ST_Percentage* m_ST_Percentage ;
        bool m_has_int ;
        int m_int ;
        static ST_PrSetCustVal* default_instance_ ;

    }

    class ST_Direction : public XSD::SimpleType{
    public:
        ST_Direction();
        ST_Direction(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_Direction& default_instance() const;
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
        ST_HierBranchStyle();
        ST_HierBranchStyle(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_HierBranchStyle& default_instance() const;
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
        ST_AnimOneStr();
        ST_AnimOneStr(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_AnimOneStr& default_instance() const;
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
        ST_AnimLvlStr();
        ST_AnimLvlStr(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_AnimLvlStr& default_instance() const;
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
        ST_NodeCount();
        ST_NodeCount(const XSD::int& _int );
        bool has_int() const;
        void set_int(const int& _int );
        const int& int() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_NodeCount& default_instance() const;

    private:
        static ST_NodeCount* default_instance_ ;
        bool m_has_int ;
        int m_int ;

    }

    class ST_ResizeHandlesStr : public XSD::SimpleType{
    public:
        ST_ResizeHandlesStr();
        ST_ResizeHandlesStr(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_ResizeHandlesStr& default_instance() const;
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
        ST_AlgorithmType();
        ST_AlgorithmType(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_AlgorithmType& default_instance() const;
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
        ST_AxisType();
        ST_AxisType(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_AxisType& default_instance() const;
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
        ST_AxisTypes();
        ST_AxisTypes(const XSD::ENTITIES& _ENTITIES );
        bool has_ENTITIES() const;
        void set_ENTITIES(const ENTITIES& _ENTITIES );
        const ENTITIES& ENTITIES() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_AxisTypes& default_instance() const;

    private:
        static ST_AxisTypes* default_instance_ ;
        bool m_has_ENTITIES ;
        ENTITIES m_ENTITIES ;

    }

    class ST_BoolOperator : public XSD::SimpleType{
    public:
        ST_BoolOperator();
        ST_BoolOperator(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_BoolOperator& default_instance() const;
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
        ST_ChildOrderType();
        ST_ChildOrderType(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_ChildOrderType& default_instance() const;
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
        ST_ConstraintType();
        ST_ConstraintType(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_ConstraintType& default_instance() const;
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
        ST_ConstraintRelationship();
        ST_ConstraintRelationship(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_ConstraintRelationship& default_instance() const;
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
        ST_ElementType();
        ST_ElementType(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_ElementType& default_instance() const;
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
        ST_ElementTypes();
        ST_ElementTypes(const XSD::ENTITIES& _ENTITIES );
        bool has_ENTITIES() const;
        void set_ENTITIES(const ENTITIES& _ENTITIES );
        const ENTITIES& ENTITIES() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_ElementTypes& default_instance() const;

    private:
        static ST_ElementTypes* default_instance_ ;
        bool m_has_ENTITIES ;
        ENTITIES m_ENTITIES ;

    }

    class ST_ParameterId : public XSD::SimpleType{
    public:
        ST_ParameterId();
        ST_ParameterId(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_ParameterId& default_instance() const;
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
        ST_Ints();
        ST_Ints(const XSD::ENTITIES& _ENTITIES );
        bool has_ENTITIES() const;
        void set_ENTITIES(const ENTITIES& _ENTITIES );
        const ENTITIES& ENTITIES() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_Ints& default_instance() const;

    private:
        static ST_Ints* default_instance_ ;
        bool m_has_ENTITIES ;
        ENTITIES m_ENTITIES ;

    }

    class ST_UnsignedInts : public XSD::SimpleType{
    public:
        ST_UnsignedInts();
        ST_UnsignedInts(const XSD::ENTITIES& _ENTITIES );
        bool has_ENTITIES() const;
        void set_ENTITIES(const ENTITIES& _ENTITIES );
        const ENTITIES& ENTITIES() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_UnsignedInts& default_instance() const;

    private:
        static ST_UnsignedInts* default_instance_ ;
        bool m_has_ENTITIES ;
        ENTITIES m_ENTITIES ;

    }

    class ST_Booleans : public XSD::SimpleType{
    public:
        ST_Booleans();
        ST_Booleans(const XSD::ENTITIES& _ENTITIES );
        bool has_ENTITIES() const;
        void set_ENTITIES(const ENTITIES& _ENTITIES );
        const ENTITIES& ENTITIES() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_Booleans& default_instance() const;

    private:
        static ST_Booleans* default_instance_ ;
        bool m_has_ENTITIES ;
        ENTITIES m_ENTITIES ;

    }

    class ST_FunctionType : public XSD::SimpleType{
    public:
        ST_FunctionType();
        ST_FunctionType(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_FunctionType& default_instance() const;
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
        ST_FunctionOperator();
        ST_FunctionOperator(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_FunctionOperator& default_instance() const;
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
        ST_DiagramHorizontalAlignment();
        ST_DiagramHorizontalAlignment(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_DiagramHorizontalAlignment& default_instance() const;
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
        ST_VerticalAlignment();
        ST_VerticalAlignment(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_VerticalAlignment& default_instance() const;
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
        ST_ChildDirection();
        ST_ChildDirection(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_ChildDirection& default_instance() const;
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
        ST_ChildAlignment();
        ST_ChildAlignment(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_ChildAlignment& default_instance() const;
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
        ST_SecondaryChildAlignment();
        ST_SecondaryChildAlignment(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_SecondaryChildAlignment& default_instance() const;
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
        ST_LinearDirection();
        ST_LinearDirection(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_LinearDirection& default_instance() const;
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
        ST_SecondaryLinearDirection();
        ST_SecondaryLinearDirection(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_SecondaryLinearDirection& default_instance() const;
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
        ST_StartingElement();
        ST_StartingElement(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_StartingElement& default_instance() const;
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
        ST_RotationPath();
        ST_RotationPath(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_RotationPath& default_instance() const;
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
        ST_CenterShapeMapping();
        ST_CenterShapeMapping(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_CenterShapeMapping& default_instance() const;
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
        ST_BendPoint();
        ST_BendPoint(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_BendPoint& default_instance() const;
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
        ST_ConnectorRouting();
        ST_ConnectorRouting(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_ConnectorRouting& default_instance() const;
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
        ST_ArrowheadStyle();
        ST_ArrowheadStyle(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_ArrowheadStyle& default_instance() const;
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
        ST_ConnectorDimension();
        ST_ConnectorDimension(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_ConnectorDimension& default_instance() const;
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
        ST_ConnectorPoint();
        ST_ConnectorPoint(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_ConnectorPoint& default_instance() const;
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
        ST_NodeHorizontalAlignment();
        ST_NodeHorizontalAlignment(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_NodeHorizontalAlignment& default_instance() const;
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
        ST_NodeVerticalAlignment();
        ST_NodeVerticalAlignment(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_NodeVerticalAlignment& default_instance() const;
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
        ST_FallbackDimension();
        ST_FallbackDimension(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_FallbackDimension& default_instance() const;
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
        ST_TextDirection();
        ST_TextDirection(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_TextDirection& default_instance() const;
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
        ST_PyramidAccentPosition();
        ST_PyramidAccentPosition(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_PyramidAccentPosition& default_instance() const;
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
        ST_PyramidAccentTextMargin();
        ST_PyramidAccentTextMargin(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_PyramidAccentTextMargin& default_instance() const;
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
        ST_TextBlockDirection();
        ST_TextBlockDirection(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_TextBlockDirection& default_instance() const;
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
        ST_TextAnchorHorizontal();
        ST_TextAnchorHorizontal(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_TextAnchorHorizontal& default_instance() const;
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
        ST_TextAnchorVertical();
        ST_TextAnchorVertical(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_TextAnchorVertical& default_instance() const;
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
        ST_DiagramTextAlignment();
        ST_DiagramTextAlignment(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_DiagramTextAlignment& default_instance() const;
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
        ST_AutoTextRotation();
        ST_AutoTextRotation(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_AutoTextRotation& default_instance() const;
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
        ST_GrowDirection();
        ST_GrowDirection(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_GrowDirection& default_instance() const;
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
        ST_FlowDirection();
        ST_FlowDirection(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_FlowDirection& default_instance() const;
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
        ST_ContinueDirection();
        ST_ContinueDirection(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_ContinueDirection& default_instance() const;
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
        ST_Breakpoint();
        ST_Breakpoint(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_Breakpoint& default_instance() const;
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
        ST_Offset();
        ST_Offset(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_Offset& default_instance() const;
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
        ST_HierarchyAlignment();
        ST_HierarchyAlignment(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_HierarchyAlignment& default_instance() const;
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
        bool has_int() const;
        void set_int(const int& _int );
        const int& int() const;
        bool has_boolean() const;
        void set_boolean(const boolean& _boolean );
        const boolean& boolean() const;
        bool has_ST_Direction() const;
        ST_Direction* mutable_ST_Direction();
        const ST_Direction& ST_Direction() const;
        bool has_ST_HierBranchStyle() const;
        ST_HierBranchStyle* mutable_ST_HierBranchStyle();
        const ST_HierBranchStyle& ST_HierBranchStyle() const;
        bool has_ST_AnimOneStr() const;
        ST_AnimOneStr* mutable_ST_AnimOneStr();
        const ST_AnimOneStr& ST_AnimOneStr() const;
        bool has_ST_AnimLvlStr() const;
        ST_AnimLvlStr* mutable_ST_AnimLvlStr();
        const ST_AnimLvlStr& ST_AnimLvlStr() const;
        bool has_ST_ResizeHandlesStr() const;
        ST_ResizeHandlesStr* mutable_ST_ResizeHandlesStr();
        const ST_ResizeHandlesStr& ST_ResizeHandlesStr() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_FunctionValue& default_instance() const;

    private:
        void clear_int();
        void clear_boolean();
        void clear_ST_Direction();
        void clear_ST_HierBranchStyle();
        void clear_ST_AnimOneStr();
        void clear_ST_AnimLvlStr();
        void clear_ST_ResizeHandlesStr();
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
        ST_VariableType();
        ST_VariableType(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_VariableType& default_instance() const;
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
        bool has_ST_VariableType() const;
        ST_VariableType* mutable_ST_VariableType();
        const ST_VariableType& ST_VariableType() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_FunctionArgument& default_instance() const;

    private:
        void clear_ST_VariableType();
        bool m_has_ST_VariableType ;
        ST_VariableType* m_ST_VariableType ;
        static ST_FunctionArgument* default_instance_ ;

    }

    class ST_OutputShapeType : public XSD::SimpleType{
    public:
        ST_OutputShapeType();
        ST_OutputShapeType(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_OutputShapeType& default_instance() const;
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
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_CTName& default_instance() const;
        bool has_lang_attr() const;
        void set_lang_attr(const string& _lang_attr );
        const string& lang_attr() const;
        bool has_val_attr() const;
        void set_val_attr(const string& _val_attr );
        const string& val_attr() const;

    private:
        static CT_CTName* default_instance_ ;
        bool m_has_lang_attr ;
        string m_lang_attr ;
        bool m_has_val_attr ;
        string m_val_attr ;

    }

    class CT_CTDescription : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_CTDescription& default_instance() const;
        bool has_lang_attr() const;
        void set_lang_attr(const string& _lang_attr );
        const string& lang_attr() const;
        bool has_val_attr() const;
        void set_val_attr(const string& _val_attr );
        const string& val_attr() const;

    private:
        static CT_CTDescription* default_instance_ ;
        bool m_has_lang_attr ;
        string m_lang_attr ;
        bool m_has_val_attr ;
        string m_val_attr ;

    }

    class CT_CTCategory : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_CTCategory& default_instance() const;
        bool has_type_attr() const;
        void set_type_attr(const anyURI& _type_attr );
        const anyURI& type_attr() const;
        bool has_pri_attr() const;
        void set_pri_attr(const unsignedInt& _pri_attr );
        const unsignedInt& pri_attr() const;

    private:
        static CT_CTCategory* default_instance_ ;
        bool m_has_type_attr ;
        anyURI m_type_attr ;
        bool m_has_pri_attr ;
        unsignedInt m_pri_attr ;

    }

    class CT_CTCategories : public XSD::ComplexType{
    public:
        CT_CTCategory* add_cat();
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_CTCategories& default_instance() const;

    private:
        vector<ChildGroup_1*> m_childGroupList_1 ;
        static CT_CTCategories* default_instance_ ;
        class ChildGroup_1{
        public:
            bool has_cat() const;
            CT_CTCategory* mutable_cat();
            const CT_CTCategory& cat() const;

        private:
            bool m_has_cat ;
            CT_CTCategory* m_cat ;

        }


    }

    class CT_Colors : public XSD::ComplexType{
    public:
        CT_ScRgbColor* add_scrgbClr();
        CT_SRgbColor* add_srgbClr();
        CT_HslColor* add_hslClr();
        CT_SystemColor* add_sysClr();
        CT_SchemeColor* add_schemeClr();
        CT_PresetColor* add_prstClr();
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Colors& default_instance() const;
        bool has_meth_attr() const;
        void set_meth_attr(const ST_ClrAppMethod& _meth_attr );
        const ST_ClrAppMethod& meth_attr() const;
        bool has_hueDir_attr() const;
        void set_hueDir_attr(const ST_HueDir& _hueDir_attr );
        const ST_HueDir& hueDir_attr() const;

    private:
        vector<ChildGroup_1*> m_childGroupList_1 ;
        static CT_Colors* default_instance_ ;
        bool m_has_meth_attr ;
        ST_ClrAppMethod* m_meth_attr ;
        bool m_has_hueDir_attr ;
        ST_HueDir* m_hueDir_attr ;
        class ChildGroup_1{
        public:
            bool has_scrgbClr() const;
            CT_ScRgbColor* mutable_scrgbClr();
            const CT_ScRgbColor& scrgbClr() const;
            bool has_srgbClr() const;
            CT_SRgbColor* mutable_srgbClr();
            const CT_SRgbColor& srgbClr() const;
            bool has_hslClr() const;
            CT_HslColor* mutable_hslClr();
            const CT_HslColor& hslClr() const;
            bool has_sysClr() const;
            CT_SystemColor* mutable_sysClr();
            const CT_SystemColor& sysClr() const;
            bool has_schemeClr() const;
            CT_SchemeColor* mutable_schemeClr();
            const CT_SchemeColor& schemeClr() const;
            bool has_prstClr() const;
            CT_PresetColor* mutable_prstClr();
            const CT_PresetColor& prstClr() const;

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
        bool has_fillClrLst() const;
        CT_Colors* mutable_fillClrLst();
        const CT_Colors& fillClrLst() const;
        bool has_linClrLst() const;
        CT_Colors* mutable_linClrLst();
        const CT_Colors& linClrLst() const;
        bool has_effectClrLst() const;
        CT_Colors* mutable_effectClrLst();
        const CT_Colors& effectClrLst() const;
        bool has_txLinClrLst() const;
        CT_Colors* mutable_txLinClrLst();
        const CT_Colors& txLinClrLst() const;
        bool has_txFillClrLst() const;
        CT_Colors* mutable_txFillClrLst();
        const CT_Colors& txFillClrLst() const;
        bool has_txEffectClrLst() const;
        CT_Colors* mutable_txEffectClrLst();
        const CT_Colors& txEffectClrLst() const;
        bool has_extLst() const;
        ns_a::CT_OfficeArtExtensionList* mutable_extLst();
        const ns_a::CT_OfficeArtExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_CTStyleLabel& default_instance() const;
        bool has_name_attr() const;
        void set_name_attr(const string& _name_attr );
        const string& name_attr() const;

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
        bool has_title() const;
        CT_CTName* mutable_title();
        const CT_CTName& title() const;
        bool has_desc() const;
        CT_CTDescription* mutable_desc();
        const CT_CTDescription& desc() const;
        bool has_catLst() const;
        CT_CTCategories* mutable_catLst();
        const CT_CTCategories& catLst() const;
        bool has_styleLbl() const;
        CT_CTStyleLabel* mutable_styleLbl();
        const CT_CTStyleLabel& styleLbl() const;
        bool has_extLst() const;
        ns_a::CT_OfficeArtExtensionList* mutable_extLst();
        const ns_a::CT_OfficeArtExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_ColorTransform& default_instance() const;
        bool has_uniqueId_attr() const;
        void set_uniqueId_attr(const string& _uniqueId_attr );
        const string& uniqueId_attr() const;
        bool has_minVer_attr() const;
        void set_minVer_attr(const string& _minVer_attr );
        const string& minVer_attr() const;

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
        bool has_title() const;
        CT_CTName* mutable_title();
        const CT_CTName& title() const;
        bool has_desc() const;
        CT_CTDescription* mutable_desc();
        const CT_CTDescription& desc() const;
        bool has_catLst() const;
        CT_CTCategories* mutable_catLst();
        const CT_CTCategories& catLst() const;
        bool has_extLst() const;
        ns_a::CT_OfficeArtExtensionList* mutable_extLst();
        const ns_a::CT_OfficeArtExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_ColorTransformHeader& default_instance() const;
        bool has_uniqueId_attr() const;
        void set_uniqueId_attr(const string& _uniqueId_attr );
        const string& uniqueId_attr() const;
        bool has_minVer_attr() const;
        void set_minVer_attr(const string& _minVer_attr );
        const string& minVer_attr() const;
        bool has_resId_attr() const;
        void set_resId_attr(const int& _resId_attr );
        const int& resId_attr() const;

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
        bool has_colorsDefHdr() const;
        CT_ColorTransformHeader* mutable_colorsDefHdr();
        const CT_ColorTransformHeader& colorsDefHdr() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_ColorTransformHeaderLst& default_instance() const;

    private:
        bool m_has_colorsDefHdr ;
        CT_ColorTransformHeader* m_colorsDefHdr ;
        static CT_ColorTransformHeaderLst* default_instance_ ;

    }

    class CT_Pt : public XSD::ComplexType{
    public:
        bool has_prSet() const;
        CT_ElemPropSet* mutable_prSet();
        const CT_ElemPropSet& prSet() const;
        bool has_spPr() const;
        ns_a::CT_ShapeProperties* mutable_spPr();
        const ns_a::CT_ShapeProperties& spPr() const;
        bool has_t() const;
        ns_a::CT_TextBody* mutable_t();
        const ns_a::CT_TextBody& t() const;
        bool has_extLst() const;
        ns_a::CT_OfficeArtExtensionList* mutable_extLst();
        const ns_a::CT_OfficeArtExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Pt& default_instance() const;
        bool has_modelId_attr() const;
        void set_modelId_attr(const ST_ModelId& _modelId_attr );
        const ST_ModelId& modelId_attr() const;
        bool has_type_attr() const;
        void set_type_attr(const ST_PtType& _type_attr );
        const ST_PtType& type_attr() const;
        bool has_cxnId_attr() const;
        void set_cxnId_attr(const ST_ModelId& _cxnId_attr );
        const ST_ModelId& cxnId_attr() const;

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
        bool has_pt() const;
        CT_Pt* mutable_pt();
        const CT_Pt& pt() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_PtList& default_instance() const;

    private:
        bool m_has_pt ;
        CT_Pt* m_pt ;
        static CT_PtList* default_instance_ ;

    }

    class CT_Cxn : public XSD::ComplexType{
    public:
        bool has_extLst() const;
        ns_a::CT_OfficeArtExtensionList* mutable_extLst();
        const ns_a::CT_OfficeArtExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Cxn& default_instance() const;
        bool has_modelId_attr() const;
        void set_modelId_attr(const ST_ModelId& _modelId_attr );
        const ST_ModelId& modelId_attr() const;
        bool has_type_attr() const;
        void set_type_attr(const ST_CxnType& _type_attr );
        const ST_CxnType& type_attr() const;
        bool has_srcId_attr() const;
        void set_srcId_attr(const ST_ModelId& _srcId_attr );
        const ST_ModelId& srcId_attr() const;
        bool has_destId_attr() const;
        void set_destId_attr(const ST_ModelId& _destId_attr );
        const ST_ModelId& destId_attr() const;
        bool has_srcOrd_attr() const;
        void set_srcOrd_attr(const unsignedInt& _srcOrd_attr );
        const unsignedInt& srcOrd_attr() const;
        bool has_destOrd_attr() const;
        void set_destOrd_attr(const unsignedInt& _destOrd_attr );
        const unsignedInt& destOrd_attr() const;
        bool has_parTransId_attr() const;
        void set_parTransId_attr(const ST_ModelId& _parTransId_attr );
        const ST_ModelId& parTransId_attr() const;
        bool has_sibTransId_attr() const;
        void set_sibTransId_attr(const ST_ModelId& _sibTransId_attr );
        const ST_ModelId& sibTransId_attr() const;
        bool has_presId_attr() const;
        void set_presId_attr(const string& _presId_attr );
        const string& presId_attr() const;

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
        bool has_cxn() const;
        CT_Cxn* mutable_cxn();
        const CT_Cxn& cxn() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_CxnList& default_instance() const;

    private:
        bool m_has_cxn ;
        CT_Cxn* m_cxn ;
        static CT_CxnList* default_instance_ ;

    }

    class CT_DataModel : public XSD::ComplexType{
    public:
        bool has_ptLst() const;
        CT_PtList* mutable_ptLst();
        const CT_PtList& ptLst() const;
        bool has_cxnLst() const;
        CT_CxnList* mutable_cxnLst();
        const CT_CxnList& cxnLst() const;
        bool has_bg() const;
        ns_a::CT_BackgroundFormatting* mutable_bg();
        const ns_a::CT_BackgroundFormatting& bg() const;
        bool has_whole() const;
        ns_a::CT_WholeE2oFormatting* mutable_whole();
        const ns_a::CT_WholeE2oFormatting& whole() const;
        bool has_extLst() const;
        ns_a::CT_OfficeArtExtensionList* mutable_extLst();
        const ns_a::CT_OfficeArtExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_DataModel& default_instance() const;

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
        bool has_extLst() const;
        ns_a::CT_OfficeArtExtensionList* mutable_extLst();
        const ns_a::CT_OfficeArtExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Constraint& default_instance() const;
        bool has_type_attr() const;
        void set_type_attr(const ST_ConstraintType& _type_attr );
        const ST_ConstraintType& type_attr() const;
        bool has_for_attr() const;
        void set_for_attr(const ST_ConstraintRelationship& _for_attr );
        const ST_ConstraintRelationship& for_attr() const;
        bool has_forName_attr() const;
        void set_forName_attr(const string& _forName_attr );
        const string& forName_attr() const;
        bool has_ptType_attr() const;
        void set_ptType_attr(const ST_ElementType& _ptType_attr );
        const ST_ElementType& ptType_attr() const;
        bool has_refType_attr() const;
        void set_refType_attr(const ST_ConstraintType& _refType_attr );
        const ST_ConstraintType& refType_attr() const;
        bool has_refFor_attr() const;
        void set_refFor_attr(const ST_ConstraintRelationship& _refFor_attr );
        const ST_ConstraintRelationship& refFor_attr() const;
        bool has_refForName_attr() const;
        void set_refForName_attr(const string& _refForName_attr );
        const string& refForName_attr() const;
        bool has_refPtType_attr() const;
        void set_refPtType_attr(const ST_ElementType& _refPtType_attr );
        const ST_ElementType& refPtType_attr() const;
        bool has_op_attr() const;
        void set_op_attr(const ST_BoolOperator& _op_attr );
        const ST_BoolOperator& op_attr() const;
        bool has_val_attr() const;
        void set_val_attr(const double& _val_attr );
        const double& val_attr() const;
        bool has_fact_attr() const;
        void set_fact_attr(const double& _fact_attr );
        const double& fact_attr() const;

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
        bool has_constr() const;
        CT_Constraint* mutable_constr();
        const CT_Constraint& constr() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Constraints& default_instance() const;

    private:
        bool m_has_constr ;
        CT_Constraint* m_constr ;
        static CT_Constraints* default_instance_ ;

    }

    class CT_NumericRule : public XSD::ComplexType{
    public:
        bool has_extLst() const;
        ns_a::CT_OfficeArtExtensionList* mutable_extLst();
        const ns_a::CT_OfficeArtExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_NumericRule& default_instance() const;
        bool has_type_attr() const;
        void set_type_attr(const ST_ConstraintType& _type_attr );
        const ST_ConstraintType& type_attr() const;
        bool has_for_attr() const;
        void set_for_attr(const ST_ConstraintRelationship& _for_attr );
        const ST_ConstraintRelationship& for_attr() const;
        bool has_forName_attr() const;
        void set_forName_attr(const string& _forName_attr );
        const string& forName_attr() const;
        bool has_ptType_attr() const;
        void set_ptType_attr(const ST_ElementType& _ptType_attr );
        const ST_ElementType& ptType_attr() const;
        bool has_val_attr() const;
        void set_val_attr(const double& _val_attr );
        const double& val_attr() const;
        bool has_fact_attr() const;
        void set_fact_attr(const double& _fact_attr );
        const double& fact_attr() const;
        bool has_max_attr() const;
        void set_max_attr(const double& _max_attr );
        const double& max_attr() const;

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
        bool has_rule() const;
        CT_NumericRule* mutable_rule();
        const CT_NumericRule& rule() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Rules& default_instance() const;

    private:
        bool m_has_rule ;
        CT_NumericRule* m_rule ;
        static CT_Rules* default_instance_ ;

    }

    class CT_PresentationOf : public XSD::ComplexType{
    public:
        bool has_extLst() const;
        ns_a::CT_OfficeArtExtensionList* mutable_extLst();
        const ns_a::CT_OfficeArtExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_PresentationOf& default_instance() const;
        bool has_axis_attr() const;
        void set_axis_attr(const ST_AxisTypes& _axis_attr );
        const ST_AxisTypes& axis_attr() const;
        bool has_ptType_attr() const;
        void set_ptType_attr(const ST_ElementTypes& _ptType_attr );
        const ST_ElementTypes& ptType_attr() const;
        bool has_hideLastTrans_attr() const;
        void set_hideLastTrans_attr(const ST_Booleans& _hideLastTrans_attr );
        const ST_Booleans& hideLastTrans_attr() const;
        bool has_st_attr() const;
        void set_st_attr(const ST_Ints& _st_attr );
        const ST_Ints& st_attr() const;
        bool has_cnt_attr() const;
        void set_cnt_attr(const ST_UnsignedInts& _cnt_attr );
        const ST_UnsignedInts& cnt_attr() const;
        bool has_step_attr() const;
        void set_step_attr(const ST_Ints& _step_attr );
        const ST_Ints& step_attr() const;

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
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Adj& default_instance() const;
        bool has_idx_attr() const;
        void set_idx_attr(const ST_Index1& _idx_attr );
        const ST_Index1& idx_attr() const;
        bool has_val_attr() const;
        void set_val_attr(const double& _val_attr );
        const double& val_attr() const;

    private:
        static CT_Adj* default_instance_ ;
        bool m_has_idx_attr ;
        ST_Index1* m_idx_attr ;
        bool m_has_val_attr ;
        double m_val_attr ;

    }

    class CT_AdjLst : public XSD::ComplexType{
    public:
        bool has_adj() const;
        CT_Adj* mutable_adj();
        const CT_Adj& adj() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_AdjLst& default_instance() const;

    private:
        bool m_has_adj ;
        CT_Adj* m_adj ;
        static CT_AdjLst* default_instance_ ;

    }

    class CT_Shape : public XSD::ComplexType{
    public:
        bool has_adjLst() const;
        CT_AdjLst* mutable_adjLst();
        const CT_AdjLst& adjLst() const;
        bool has_extLst() const;
        ns_a::CT_OfficeArtExtensionList* mutable_extLst();
        const ns_a::CT_OfficeArtExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Shape& default_instance() const;
        bool has_rot_attr() const;
        void set_rot_attr(const double& _rot_attr );
        const double& rot_attr() const;
        bool has_type_attr() const;
        void set_type_attr(const ST_LayoutShapeType& _type_attr );
        const ST_LayoutShapeType& type_attr() const;
        bool has_blip_attr() const;
        void set_blip_attr(const ST_RelationshipId& _blip_attr );
        const ST_RelationshipId& blip_attr() const;
        bool has_zOrderOff_attr() const;
        void set_zOrderOff_attr(const int& _zOrderOff_attr );
        const int& zOrderOff_attr() const;
        bool has_hideGeom_attr() const;
        void set_hideGeom_attr(const boolean& _hideGeom_attr );
        const boolean& hideGeom_attr() const;
        bool has_lkTxEntry_attr() const;
        void set_lkTxEntry_attr(const boolean& _lkTxEntry_attr );
        const boolean& lkTxEntry_attr() const;
        bool has_blipPhldr_attr() const;
        void set_blipPhldr_attr(const boolean& _blipPhldr_attr );
        const boolean& blipPhldr_attr() const;

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
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Parameter& default_instance() const;
        bool has_type_attr() const;
        void set_type_attr(const ST_ParameterId& _type_attr );
        const ST_ParameterId& type_attr() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_ParameterVal& _val_attr );
        const ST_ParameterVal& val_attr() const;

    private:
        static CT_Parameter* default_instance_ ;
        bool m_has_type_attr ;
        ST_ParameterId* m_type_attr ;
        bool m_has_val_attr ;
        ST_ParameterVal* m_val_attr ;

    }

    class CT_Algorithm : public XSD::ComplexType{
    public:
        bool has_param() const;
        CT_Parameter* mutable_param();
        const CT_Parameter& param() const;
        bool has_extLst() const;
        ns_a::CT_OfficeArtExtensionList* mutable_extLst();
        const ns_a::CT_OfficeArtExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Algorithm& default_instance() const;
        bool has_type_attr() const;
        void set_type_attr(const ST_AlgorithmType& _type_attr );
        const ST_AlgorithmType& type_attr() const;
        bool has_rev_attr() const;
        void set_rev_attr(const unsignedInt& _rev_attr );
        const unsignedInt& rev_attr() const;

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
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_LayoutNode& default_instance() const;
        bool has_name_attr() const;
        void set_name_attr(const string& _name_attr );
        const string& name_attr() const;
        bool has_styleLbl_attr() const;
        void set_styleLbl_attr(const string& _styleLbl_attr );
        const string& styleLbl_attr() const;
        bool has_chOrder_attr() const;
        void set_chOrder_attr(const ST_ChildOrderType& _chOrder_attr );
        const ST_ChildOrderType& chOrder_attr() const;
        bool has_moveWith_attr() const;
        void set_moveWith_attr(const string& _moveWith_attr );
        const string& moveWith_attr() const;

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
            bool has_alg() const;
            CT_Algorithm* mutable_alg();
            const CT_Algorithm& alg() const;
            bool has_shape() const;
            CT_Shape* mutable_shape();
            const CT_Shape& shape() const;
            bool has_presOf() const;
            CT_PresentationOf* mutable_presOf();
            const CT_PresentationOf& presOf() const;
            bool has_constrLst() const;
            CT_Constraints* mutable_constrLst();
            const CT_Constraints& constrLst() const;
            bool has_ruleLst() const;
            CT_Rules* mutable_ruleLst();
            const CT_Rules& ruleLst() const;
            bool has_varLst() const;
            CT_LayoutVariablePropertySet* mutable_varLst();
            const CT_LayoutVariablePropertySet& varLst() const;
            bool has_forEach() const;
            CT_ForEach* mutable_forEach();
            const CT_ForEach& forEach() const;
            bool has_layoutNode() const;
            CT_LayoutNode* mutable_layoutNode();
            const CT_LayoutNode& layoutNode() const;
            bool has_choose() const;
            CT_Choose* mutable_choose();
            const CT_Choose& choose() const;
            bool has_extLst() const;
            ns_a::CT_OfficeArtExtensionList* mutable_extLst();
            const ns_a::CT_OfficeArtExtensionList& extLst() const;

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
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_ForEach& default_instance() const;
        bool has_name_attr() const;
        void set_name_attr(const string& _name_attr );
        const string& name_attr() const;
        bool has_ref_attr() const;
        void set_ref_attr(const string& _ref_attr );
        const string& ref_attr() const;
        bool has_axis_attr() const;
        void set_axis_attr(const ST_AxisTypes& _axis_attr );
        const ST_AxisTypes& axis_attr() const;
        bool has_ptType_attr() const;
        void set_ptType_attr(const ST_ElementTypes& _ptType_attr );
        const ST_ElementTypes& ptType_attr() const;
        bool has_hideLastTrans_attr() const;
        void set_hideLastTrans_attr(const ST_Booleans& _hideLastTrans_attr );
        const ST_Booleans& hideLastTrans_attr() const;
        bool has_st_attr() const;
        void set_st_attr(const ST_Ints& _st_attr );
        const ST_Ints& st_attr() const;
        bool has_cnt_attr() const;
        void set_cnt_attr(const ST_UnsignedInts& _cnt_attr );
        const ST_UnsignedInts& cnt_attr() const;
        bool has_step_attr() const;
        void set_step_attr(const ST_Ints& _step_attr );
        const ST_Ints& step_attr() const;

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
            bool has_alg() const;
            CT_Algorithm* mutable_alg();
            const CT_Algorithm& alg() const;
            bool has_shape() const;
            CT_Shape* mutable_shape();
            const CT_Shape& shape() const;
            bool has_presOf() const;
            CT_PresentationOf* mutable_presOf();
            const CT_PresentationOf& presOf() const;
            bool has_constrLst() const;
            CT_Constraints* mutable_constrLst();
            const CT_Constraints& constrLst() const;
            bool has_ruleLst() const;
            CT_Rules* mutable_ruleLst();
            const CT_Rules& ruleLst() const;
            bool has_forEach() const;
            CT_ForEach* mutable_forEach();
            const CT_ForEach& forEach() const;
            bool has_layoutNode() const;
            CT_LayoutNode* mutable_layoutNode();
            const CT_LayoutNode& layoutNode() const;
            bool has_choose() const;
            CT_Choose* mutable_choose();
            const CT_Choose& choose() const;
            bool has_extLst() const;
            ns_a::CT_OfficeArtExtensionList* mutable_extLst();
            const ns_a::CT_OfficeArtExtensionList& extLst() const;

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
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_When& default_instance() const;
        bool has_name_attr() const;
        void set_name_attr(const string& _name_attr );
        const string& name_attr() const;
        bool has_axis_attr() const;
        void set_axis_attr(const ST_AxisTypes& _axis_attr );
        const ST_AxisTypes& axis_attr() const;
        bool has_ptType_attr() const;
        void set_ptType_attr(const ST_ElementTypes& _ptType_attr );
        const ST_ElementTypes& ptType_attr() const;
        bool has_hideLastTrans_attr() const;
        void set_hideLastTrans_attr(const ST_Booleans& _hideLastTrans_attr );
        const ST_Booleans& hideLastTrans_attr() const;
        bool has_st_attr() const;
        void set_st_attr(const ST_Ints& _st_attr );
        const ST_Ints& st_attr() const;
        bool has_cnt_attr() const;
        void set_cnt_attr(const ST_UnsignedInts& _cnt_attr );
        const ST_UnsignedInts& cnt_attr() const;
        bool has_step_attr() const;
        void set_step_attr(const ST_Ints& _step_attr );
        const ST_Ints& step_attr() const;
        bool has_func_attr() const;
        void set_func_attr(const ST_FunctionType& _func_attr );
        const ST_FunctionType& func_attr() const;
        bool has_arg_attr() const;
        void set_arg_attr(const ST_FunctionArgument& _arg_attr );
        const ST_FunctionArgument& arg_attr() const;
        bool has_op_attr() const;
        void set_op_attr(const ST_FunctionOperator& _op_attr );
        const ST_FunctionOperator& op_attr() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_FunctionValue& _val_attr );
        const ST_FunctionValue& val_attr() const;

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
            bool has_alg() const;
            CT_Algorithm* mutable_alg();
            const CT_Algorithm& alg() const;
            bool has_shape() const;
            CT_Shape* mutable_shape();
            const CT_Shape& shape() const;
            bool has_presOf() const;
            CT_PresentationOf* mutable_presOf();
            const CT_PresentationOf& presOf() const;
            bool has_constrLst() const;
            CT_Constraints* mutable_constrLst();
            const CT_Constraints& constrLst() const;
            bool has_ruleLst() const;
            CT_Rules* mutable_ruleLst();
            const CT_Rules& ruleLst() const;
            bool has_forEach() const;
            CT_ForEach* mutable_forEach();
            const CT_ForEach& forEach() const;
            bool has_layoutNode() const;
            CT_LayoutNode* mutable_layoutNode();
            const CT_LayoutNode& layoutNode() const;
            bool has_choose() const;
            CT_Choose* mutable_choose();
            const CT_Choose& choose() const;
            bool has_extLst() const;
            ns_a::CT_OfficeArtExtensionList* mutable_extLst();
            const ns_a::CT_OfficeArtExtensionList& extLst() const;

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
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Otherwise& default_instance() const;
        bool has_name_attr() const;
        void set_name_attr(const string& _name_attr );
        const string& name_attr() const;

    private:
        vector<ChildGroup_1*> m_childGroupList_1 ;
        static CT_Otherwise* default_instance_ ;
        bool m_has_name_attr ;
        string m_name_attr ;
        class ChildGroup_1{
        public:
            bool has_alg() const;
            CT_Algorithm* mutable_alg();
            const CT_Algorithm& alg() const;
            bool has_shape() const;
            CT_Shape* mutable_shape();
            const CT_Shape& shape() const;
            bool has_presOf() const;
            CT_PresentationOf* mutable_presOf();
            const CT_PresentationOf& presOf() const;
            bool has_constrLst() const;
            CT_Constraints* mutable_constrLst();
            const CT_Constraints& constrLst() const;
            bool has_ruleLst() const;
            CT_Rules* mutable_ruleLst();
            const CT_Rules& ruleLst() const;
            bool has_forEach() const;
            CT_ForEach* mutable_forEach();
            const CT_ForEach& forEach() const;
            bool has_layoutNode() const;
            CT_LayoutNode* mutable_layoutNode();
            const CT_LayoutNode& layoutNode() const;
            bool has_choose() const;
            CT_Choose* mutable_choose();
            const CT_Choose& choose() const;
            bool has_extLst() const;
            ns_a::CT_OfficeArtExtensionList* mutable_extLst();
            const ns_a::CT_OfficeArtExtensionList& extLst() const;

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
        bool has_if() const;
        CT_When* mutable_if();
        const CT_When& if() const;
        bool has_else() const;
        CT_Otherwise* mutable_else();
        const CT_Otherwise& else() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Choose& default_instance() const;
        bool has_name_attr() const;
        void set_name_attr(const string& _name_attr );
        const string& name_attr() const;

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
        bool has_dataModel() const;
        CT_DataModel* mutable_dataModel();
        const CT_DataModel& dataModel() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_SampleData& default_instance() const;
        bool has_useDef_attr() const;
        void set_useDef_attr(const boolean& _useDef_attr );
        const boolean& useDef_attr() const;

    private:
        bool m_has_dataModel ;
        CT_DataModel* m_dataModel ;
        static CT_SampleData* default_instance_ ;
        bool m_has_useDef_attr ;
        boolean m_useDef_attr ;

    }

    class CT_Category : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Category& default_instance() const;
        bool has_type_attr() const;
        void set_type_attr(const anyURI& _type_attr );
        const anyURI& type_attr() const;
        bool has_pri_attr() const;
        void set_pri_attr(const unsignedInt& _pri_attr );
        const unsignedInt& pri_attr() const;

    private:
        static CT_Category* default_instance_ ;
        bool m_has_type_attr ;
        anyURI m_type_attr ;
        bool m_has_pri_attr ;
        unsignedInt m_pri_attr ;

    }

    class CT_Categories : public XSD::ComplexType{
    public:
        bool has_cat() const;
        CT_Category* mutable_cat();
        const CT_Category& cat() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Categories& default_instance() const;

    private:
        bool m_has_cat ;
        CT_Category* m_cat ;
        static CT_Categories* default_instance_ ;

    }

    class CT_Name : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Name& default_instance() const;
        bool has_lang_attr() const;
        void set_lang_attr(const string& _lang_attr );
        const string& lang_attr() const;
        bool has_val_attr() const;
        void set_val_attr(const string& _val_attr );
        const string& val_attr() const;

    private:
        static CT_Name* default_instance_ ;
        bool m_has_lang_attr ;
        string m_lang_attr ;
        bool m_has_val_attr ;
        string m_val_attr ;

    }

    class CT_Description : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Description& default_instance() const;
        bool has_lang_attr() const;
        void set_lang_attr(const string& _lang_attr );
        const string& lang_attr() const;
        bool has_val_attr() const;
        void set_val_attr(const string& _val_attr );
        const string& val_attr() const;

    private:
        static CT_Description* default_instance_ ;
        bool m_has_lang_attr ;
        string m_lang_attr ;
        bool m_has_val_attr ;
        string m_val_attr ;

    }

    class CT_DiagramDefinition : public XSD::ComplexType{
    public:
        bool has_title() const;
        CT_Name* mutable_title();
        const CT_Name& title() const;
        bool has_desc() const;
        CT_Description* mutable_desc();
        const CT_Description& desc() const;
        bool has_catLst() const;
        CT_Categories* mutable_catLst();
        const CT_Categories& catLst() const;
        bool has_sampData() const;
        CT_SampleData* mutable_sampData();
        const CT_SampleData& sampData() const;
        bool has_styleData() const;
        CT_SampleData* mutable_styleData();
        const CT_SampleData& styleData() const;
        bool has_clrData() const;
        CT_SampleData* mutable_clrData();
        const CT_SampleData& clrData() const;
        bool has_layoutNode() const;
        CT_LayoutNode* mutable_layoutNode();
        const CT_LayoutNode& layoutNode() const;
        bool has_extLst() const;
        ns_a::CT_OfficeArtExtensionList* mutable_extLst();
        const ns_a::CT_OfficeArtExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_DiagramDefinition& default_instance() const;
        bool has_uniqueId_attr() const;
        void set_uniqueId_attr(const string& _uniqueId_attr );
        const string& uniqueId_attr() const;
        bool has_minVer_attr() const;
        void set_minVer_attr(const string& _minVer_attr );
        const string& minVer_attr() const;
        bool has_defStyle_attr() const;
        void set_defStyle_attr(const string& _defStyle_attr );
        const string& defStyle_attr() const;

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
        bool has_title() const;
        CT_Name* mutable_title();
        const CT_Name& title() const;
        bool has_desc() const;
        CT_Description* mutable_desc();
        const CT_Description& desc() const;
        bool has_catLst() const;
        CT_Categories* mutable_catLst();
        const CT_Categories& catLst() const;
        bool has_extLst() const;
        ns_a::CT_OfficeArtExtensionList* mutable_extLst();
        const ns_a::CT_OfficeArtExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_DiagramDefinitionHeader& default_instance() const;
        bool has_uniqueId_attr() const;
        void set_uniqueId_attr(const string& _uniqueId_attr );
        const string& uniqueId_attr() const;
        bool has_minVer_attr() const;
        void set_minVer_attr(const string& _minVer_attr );
        const string& minVer_attr() const;
        bool has_defStyle_attr() const;
        void set_defStyle_attr(const string& _defStyle_attr );
        const string& defStyle_attr() const;
        bool has_resId_attr() const;
        void set_resId_attr(const int& _resId_attr );
        const int& resId_attr() const;

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
        bool has_layoutDefHdr() const;
        CT_DiagramDefinitionHeader* mutable_layoutDefHdr();
        const CT_DiagramDefinitionHeader& layoutDefHdr() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_DiagramDefinitionHeaderLst& default_instance() const;

    private:
        bool m_has_layoutDefHdr ;
        CT_DiagramDefinitionHeader* m_layoutDefHdr ;
        static CT_DiagramDefinitionHeaderLst* default_instance_ ;

    }

    class CT_RelIds : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_RelIds& default_instance() const;
        bool has_dm_attr() const;
        void set_dm_attr(const ST_RelationshipId& _dm_attr );
        const ST_RelationshipId& dm_attr() const;
        bool has_lo_attr() const;
        void set_lo_attr(const ST_RelationshipId& _lo_attr );
        const ST_RelationshipId& lo_attr() const;
        bool has_qs_attr() const;
        void set_qs_attr(const ST_RelationshipId& _qs_attr );
        const ST_RelationshipId& qs_attr() const;
        bool has_cs_attr() const;
        void set_cs_attr(const ST_RelationshipId& _cs_attr );
        const ST_RelationshipId& cs_attr() const;

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
        bool has_presLayoutVars() const;
        CT_LayoutVariablePropertySet* mutable_presLayoutVars();
        const CT_LayoutVariablePropertySet& presLayoutVars() const;
        bool has_style() const;
        ns_a::CT_ShapeStyle* mutable_style();
        const ns_a::CT_ShapeStyle& style() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_ElemPropSet& default_instance() const;
        bool has_presAssocID_attr() const;
        void set_presAssocID_attr(const ST_ModelId& _presAssocID_attr );
        const ST_ModelId& presAssocID_attr() const;
        bool has_presName_attr() const;
        void set_presName_attr(const string& _presName_attr );
        const string& presName_attr() const;
        bool has_presStyleLbl_attr() const;
        void set_presStyleLbl_attr(const string& _presStyleLbl_attr );
        const string& presStyleLbl_attr() const;
        bool has_presStyleIdx_attr() const;
        void set_presStyleIdx_attr(const int& _presStyleIdx_attr );
        const int& presStyleIdx_attr() const;
        bool has_presStyleCnt_attr() const;
        void set_presStyleCnt_attr(const int& _presStyleCnt_attr );
        const int& presStyleCnt_attr() const;
        bool has_loTypeId_attr() const;
        void set_loTypeId_attr(const string& _loTypeId_attr );
        const string& loTypeId_attr() const;
        bool has_loCatId_attr() const;
        void set_loCatId_attr(const string& _loCatId_attr );
        const string& loCatId_attr() const;
        bool has_qsTypeId_attr() const;
        void set_qsTypeId_attr(const string& _qsTypeId_attr );
        const string& qsTypeId_attr() const;
        bool has_qsCatId_attr() const;
        void set_qsCatId_attr(const string& _qsCatId_attr );
        const string& qsCatId_attr() const;
        bool has_csTypeId_attr() const;
        void set_csTypeId_attr(const string& _csTypeId_attr );
        const string& csTypeId_attr() const;
        bool has_csCatId_attr() const;
        void set_csCatId_attr(const string& _csCatId_attr );
        const string& csCatId_attr() const;
        bool has_coherent3DOff_attr() const;
        void set_coherent3DOff_attr(const boolean& _coherent3DOff_attr );
        const boolean& coherent3DOff_attr() const;
        bool has_phldrT_attr() const;
        void set_phldrT_attr(const string& _phldrT_attr );
        const string& phldrT_attr() const;
        bool has_phldr_attr() const;
        void set_phldr_attr(const boolean& _phldr_attr );
        const boolean& phldr_attr() const;
        bool has_custAng_attr() const;
        void set_custAng_attr(const int& _custAng_attr );
        const int& custAng_attr() const;
        bool has_custFlipVert_attr() const;
        void set_custFlipVert_attr(const boolean& _custFlipVert_attr );
        const boolean& custFlipVert_attr() const;
        bool has_custFlipHor_attr() const;
        void set_custFlipHor_attr(const boolean& _custFlipHor_attr );
        const boolean& custFlipHor_attr() const;
        bool has_custSzX_attr() const;
        void set_custSzX_attr(const int& _custSzX_attr );
        const int& custSzX_attr() const;
        bool has_custSzY_attr() const;
        void set_custSzY_attr(const int& _custSzY_attr );
        const int& custSzY_attr() const;
        bool has_custScaleX_attr() const;
        void set_custScaleX_attr(const ST_PrSetCustVal& _custScaleX_attr );
        const ST_PrSetCustVal& custScaleX_attr() const;
        bool has_custScaleY_attr() const;
        void set_custScaleY_attr(const ST_PrSetCustVal& _custScaleY_attr );
        const ST_PrSetCustVal& custScaleY_attr() const;
        bool has_custT_attr() const;
        void set_custT_attr(const boolean& _custT_attr );
        const boolean& custT_attr() const;
        bool has_custLinFactX_attr() const;
        void set_custLinFactX_attr(const ST_PrSetCustVal& _custLinFactX_attr );
        const ST_PrSetCustVal& custLinFactX_attr() const;
        bool has_custLinFactY_attr() const;
        void set_custLinFactY_attr(const ST_PrSetCustVal& _custLinFactY_attr );
        const ST_PrSetCustVal& custLinFactY_attr() const;
        bool has_custLinFactNeighborX_attr() const;
        void set_custLinFactNeighborX_attr(const ST_PrSetCustVal& _custLinFactNeighborX_attr );
        const ST_PrSetCustVal& custLinFactNeighborX_attr() const;
        bool has_custLinFactNeighborY_attr() const;
        void set_custLinFactNeighborY_attr(const ST_PrSetCustVal& _custLinFactNeighborY_attr );
        const ST_PrSetCustVal& custLinFactNeighborY_attr() const;
        bool has_custRadScaleRad_attr() const;
        void set_custRadScaleRad_attr(const ST_PrSetCustVal& _custRadScaleRad_attr );
        const ST_PrSetCustVal& custRadScaleRad_attr() const;
        bool has_custRadScaleInc_attr() const;
        void set_custRadScaleInc_attr(const ST_PrSetCustVal& _custRadScaleInc_attr );
        const ST_PrSetCustVal& custRadScaleInc_attr() const;

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
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_OrgChart& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const boolean& _val_attr );
        const boolean& val_attr() const;

    private:
        static CT_OrgChart* default_instance_ ;
        bool m_has_val_attr ;
        boolean m_val_attr ;

    }

    class CT_ChildMax : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_ChildMax& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_NodeCount& _val_attr );
        const ST_NodeCount& val_attr() const;

    private:
        static CT_ChildMax* default_instance_ ;
        bool m_has_val_attr ;
        ST_NodeCount* m_val_attr ;

    }

    class CT_ChildPref : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_ChildPref& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_NodeCount& _val_attr );
        const ST_NodeCount& val_attr() const;

    private:
        static CT_ChildPref* default_instance_ ;
        bool m_has_val_attr ;
        ST_NodeCount* m_val_attr ;

    }

    class CT_BulletEnabled : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_BulletEnabled& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const boolean& _val_attr );
        const boolean& val_attr() const;

    private:
        static CT_BulletEnabled* default_instance_ ;
        bool m_has_val_attr ;
        boolean m_val_attr ;

    }

    class CT_Direction : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Direction& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_Direction& _val_attr );
        const ST_Direction& val_attr() const;

    private:
        static CT_Direction* default_instance_ ;
        bool m_has_val_attr ;
        ST_Direction* m_val_attr ;

    }

    class CT_HierBranchStyle : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_HierBranchStyle& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_HierBranchStyle& _val_attr );
        const ST_HierBranchStyle& val_attr() const;

    private:
        static CT_HierBranchStyle* default_instance_ ;
        bool m_has_val_attr ;
        ST_HierBranchStyle* m_val_attr ;

    }

    class CT_AnimOne : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_AnimOne& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_AnimOneStr& _val_attr );
        const ST_AnimOneStr& val_attr() const;

    private:
        static CT_AnimOne* default_instance_ ;
        bool m_has_val_attr ;
        ST_AnimOneStr* m_val_attr ;

    }

    class CT_AnimLvl : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_AnimLvl& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_AnimLvlStr& _val_attr );
        const ST_AnimLvlStr& val_attr() const;

    private:
        static CT_AnimLvl* default_instance_ ;
        bool m_has_val_attr ;
        ST_AnimLvlStr* m_val_attr ;

    }

    class CT_ResizeHandles : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_ResizeHandles& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_ResizeHandlesStr& _val_attr );
        const ST_ResizeHandlesStr& val_attr() const;

    private:
        static CT_ResizeHandles* default_instance_ ;
        bool m_has_val_attr ;
        ST_ResizeHandlesStr* m_val_attr ;

    }

    class CT_LayoutVariablePropertySet : public XSD::ComplexType{
    public:
        bool has_orgChart() const;
        CT_OrgChart* mutable_orgChart();
        const CT_OrgChart& orgChart() const;
        bool has_chMax() const;
        CT_ChildMax* mutable_chMax();
        const CT_ChildMax& chMax() const;
        bool has_chPref() const;
        CT_ChildPref* mutable_chPref();
        const CT_ChildPref& chPref() const;
        bool has_bulletEnabled() const;
        CT_BulletEnabled* mutable_bulletEnabled();
        const CT_BulletEnabled& bulletEnabled() const;
        bool has_dir() const;
        CT_Direction* mutable_dir();
        const CT_Direction& dir() const;
        bool has_hierBranch() const;
        CT_HierBranchStyle* mutable_hierBranch();
        const CT_HierBranchStyle& hierBranch() const;
        bool has_animOne() const;
        CT_AnimOne* mutable_animOne();
        const CT_AnimOne& animOne() const;
        bool has_animLvl() const;
        CT_AnimLvl* mutable_animLvl();
        const CT_AnimLvl& animLvl() const;
        bool has_resizeHandles() const;
        CT_ResizeHandles* mutable_resizeHandles();
        const CT_ResizeHandles& resizeHandles() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_LayoutVariablePropertySet& default_instance() const;

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
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_SDName& default_instance() const;
        bool has_lang_attr() const;
        void set_lang_attr(const string& _lang_attr );
        const string& lang_attr() const;
        bool has_val_attr() const;
        void set_val_attr(const string& _val_attr );
        const string& val_attr() const;

    private:
        static CT_SDName* default_instance_ ;
        bool m_has_lang_attr ;
        string m_lang_attr ;
        bool m_has_val_attr ;
        string m_val_attr ;

    }

    class CT_SDDescription : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_SDDescription& default_instance() const;
        bool has_lang_attr() const;
        void set_lang_attr(const string& _lang_attr );
        const string& lang_attr() const;
        bool has_val_attr() const;
        void set_val_attr(const string& _val_attr );
        const string& val_attr() const;

    private:
        static CT_SDDescription* default_instance_ ;
        bool m_has_lang_attr ;
        string m_lang_attr ;
        bool m_has_val_attr ;
        string m_val_attr ;

    }

    class CT_SDCategory : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_SDCategory& default_instance() const;
        bool has_type_attr() const;
        void set_type_attr(const anyURI& _type_attr );
        const anyURI& type_attr() const;
        bool has_pri_attr() const;
        void set_pri_attr(const unsignedInt& _pri_attr );
        const unsignedInt& pri_attr() const;

    private:
        static CT_SDCategory* default_instance_ ;
        bool m_has_type_attr ;
        anyURI m_type_attr ;
        bool m_has_pri_attr ;
        unsignedInt m_pri_attr ;

    }

    class CT_SDCategories : public XSD::ComplexType{
    public:
        CT_SDCategory* add_cat();
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_SDCategories& default_instance() const;

    private:
        vector<ChildGroup_1*> m_childGroupList_1 ;
        static CT_SDCategories* default_instance_ ;
        class ChildGroup_1{
        public:
            bool has_cat() const;
            CT_SDCategory* mutable_cat();
            const CT_SDCategory& cat() const;

        private:
            bool m_has_cat ;
            CT_SDCategory* m_cat ;

        }


    }

    class CT_TextProps : public XSD::ComplexType{
    public:
        bool has_sp3d() const;
        CT_Shape3D* mutable_sp3d();
        const CT_Shape3D& sp3d() const;
        bool has_flatTx() const;
        CT_FlatText* mutable_flatTx();
        const CT_FlatText& flatTx() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TextProps& default_instance() const;

    private:
        bool m_has_sp3d ;
        CT_Shape3D* m_sp3d ;
        bool m_has_flatTx ;
        CT_FlatText* m_flatTx ;
        static CT_TextProps* default_instance_ ;

    }

    class CT_StyleLabel : public XSD::ComplexType{
    public:
        bool has_scene3d() const;
        ns_a::CT_Scene3D* mutable_scene3d();
        const ns_a::CT_Scene3D& scene3d() const;
        bool has_sp3d() const;
        ns_a::CT_Shape3D* mutable_sp3d();
        const ns_a::CT_Shape3D& sp3d() const;
        bool has_txPr() const;
        CT_TextProps* mutable_txPr();
        const CT_TextProps& txPr() const;
        bool has_style() const;
        ns_a::CT_ShapeStyle* mutable_style();
        const ns_a::CT_ShapeStyle& style() const;
        bool has_extLst() const;
        ns_a::CT_OfficeArtExtensionList* mutable_extLst();
        const ns_a::CT_OfficeArtExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_StyleLabel& default_instance() const;
        bool has_name_attr() const;
        void set_name_attr(const string& _name_attr );
        const string& name_attr() const;

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
        bool has_title() const;
        CT_SDName* mutable_title();
        const CT_SDName& title() const;
        bool has_desc() const;
        CT_SDDescription* mutable_desc();
        const CT_SDDescription& desc() const;
        bool has_catLst() const;
        CT_SDCategories* mutable_catLst();
        const CT_SDCategories& catLst() const;
        bool has_scene3d() const;
        ns_a::CT_Scene3D* mutable_scene3d();
        const ns_a::CT_Scene3D& scene3d() const;
        bool has_styleLbl() const;
        CT_StyleLabel* mutable_styleLbl();
        const CT_StyleLabel& styleLbl() const;
        bool has_extLst() const;
        ns_a::CT_OfficeArtExtensionList* mutable_extLst();
        const ns_a::CT_OfficeArtExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_StyleDefinition& default_instance() const;
        bool has_uniqueId_attr() const;
        void set_uniqueId_attr(const string& _uniqueId_attr );
        const string& uniqueId_attr() const;
        bool has_minVer_attr() const;
        void set_minVer_attr(const string& _minVer_attr );
        const string& minVer_attr() const;

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
        bool has_title() const;
        CT_SDName* mutable_title();
        const CT_SDName& title() const;
        bool has_desc() const;
        CT_SDDescription* mutable_desc();
        const CT_SDDescription& desc() const;
        bool has_catLst() const;
        CT_SDCategories* mutable_catLst();
        const CT_SDCategories& catLst() const;
        bool has_extLst() const;
        ns_a::CT_OfficeArtExtensionList* mutable_extLst();
        const ns_a::CT_OfficeArtExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_StyleDefinitionHeader& default_instance() const;
        bool has_uniqueId_attr() const;
        void set_uniqueId_attr(const string& _uniqueId_attr );
        const string& uniqueId_attr() const;
        bool has_minVer_attr() const;
        void set_minVer_attr(const string& _minVer_attr );
        const string& minVer_attr() const;
        bool has_resId_attr() const;
        void set_resId_attr(const int& _resId_attr );
        const int& resId_attr() const;

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
        bool has_styleDefHdr() const;
        CT_StyleDefinitionHeader* mutable_styleDefHdr();
        const CT_StyleDefinitionHeader& styleDefHdr() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_StyleDefinitionHeaderLst& default_instance() const;

    private:
        bool m_has_styleDefHdr ;
        CT_StyleDefinitionHeader* m_styleDefHdr ;
        static CT_StyleDefinitionHeaderLst* default_instance_ ;

    }

    class colorsDef : public CT_ColorTransform : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class colorsDefHdr : public CT_ColorTransformHeader : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class colorsDefHdrLst : public CT_ColorTransformHeaderLst : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class dataModel : public CT_DataModel : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class layoutDef : public CT_DiagramDefinition : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class layoutDefHdr : public CT_DiagramDefinitionHeader : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class layoutDefHdrLst : public CT_DiagramDefinitionHeaderLst : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class relIds : public CT_RelIds : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class styleDef : public CT_StyleDefinition : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class styleDefHdr : public CT_StyleDefinitionHeader : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class styleDefHdrLst : public CT_StyleDefinitionHeaderLst : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

}