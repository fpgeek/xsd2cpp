#ifndef vml-main_xsd 
#define vml-main_xsd 0 

#include "xsddata.h"
#include <vector>
#include <string>
#include <iostream>
#include "vml-officeDrawing_xsd.h"
#include "wml_xsd.h"
#include "vml-wordprocessingDrawing_xsd.h"
#include "shared-relationshipReference_xsd.h"
#include "vml-spreadsheetDrawing_xsd.h"
#include "vml-presentationDrawing_xsd.h"
#include "shared-commonSimpleTypes_xsd.h"
namespace ns_v{
    class Element : public XSD::Element{
    public:

    private:

    }

    class Attribute : public XSD::Attribute{
    public:

    private:

    }

    class ST_Ext : public XSD::SimpleType{
    public:
        ST_Ext();
        ST_Ext(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_Ext& default_instance() const;
        enum Type{
            _view_ = 1,
            _edit_,
            _backwardCompatible_
        }

    private:
        static const string TypeStrList [];
        static ST_Ext* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_FillType : public XSD::SimpleType{
    public:
        ST_FillType();
        ST_FillType(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_FillType& default_instance() const;
        enum Type{
            _solid_ = 1,
            _gradient_,
            _gradientRadial_,
            _tile_,
            _pattern_,
            _frame_
        }

    private:
        static const string TypeStrList [];
        static ST_FillType* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_FillMethod : public XSD::SimpleType{
    public:
        ST_FillMethod();
        ST_FillMethod(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_FillMethod& default_instance() const;
        enum Type{
            _none_ = 1,
            _linear_,
            _sigma_,
            _any_,
            _linear sigma_
        }

    private:
        static const string TypeStrList [];
        static ST_FillMethod* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_ShadowType : public XSD::SimpleType{
    public:
        ST_ShadowType();
        ST_ShadowType(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_ShadowType& default_instance() const;
        enum Type{
            _single_ = 1,
            _double_,
            _emboss_,
            _perspective_
        }

    private:
        static const string TypeStrList [];
        static ST_ShadowType* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_StrokeLineStyle : public XSD::SimpleType{
    public:
        ST_StrokeLineStyle();
        ST_StrokeLineStyle(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_StrokeLineStyle& default_instance() const;
        enum Type{
            _single_ = 1,
            _thinThin_,
            _thinThick_,
            _thickThin_,
            _thickBetweenThin_
        }

    private:
        static const string TypeStrList [];
        static ST_StrokeLineStyle* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_StrokeJoinStyle : public XSD::SimpleType{
    public:
        ST_StrokeJoinStyle();
        ST_StrokeJoinStyle(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_StrokeJoinStyle& default_instance() const;
        enum Type{
            _round_ = 1,
            _bevel_,
            _miter_
        }

    private:
        static const string TypeStrList [];
        static ST_StrokeJoinStyle* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_StrokeEndCap : public XSD::SimpleType{
    public:
        ST_StrokeEndCap();
        ST_StrokeEndCap(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_StrokeEndCap& default_instance() const;
        enum Type{
            _flat_ = 1,
            _square_,
            _round_
        }

    private:
        static const string TypeStrList [];
        static ST_StrokeEndCap* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_StrokeArrowLength : public XSD::SimpleType{
    public:
        ST_StrokeArrowLength();
        ST_StrokeArrowLength(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_StrokeArrowLength& default_instance() const;
        enum Type{
            _short_ = 1,
            _medium_,
            _long_
        }

    private:
        static const string TypeStrList [];
        static ST_StrokeArrowLength* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_StrokeArrowWidth : public XSD::SimpleType{
    public:
        ST_StrokeArrowWidth();
        ST_StrokeArrowWidth(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_StrokeArrowWidth& default_instance() const;
        enum Type{
            _narrow_ = 1,
            _medium_,
            _wide_
        }

    private:
        static const string TypeStrList [];
        static ST_StrokeArrowWidth* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_StrokeArrowType : public XSD::SimpleType{
    public:
        ST_StrokeArrowType();
        ST_StrokeArrowType(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_StrokeArrowType& default_instance() const;
        enum Type{
            _none_ = 1,
            _block_,
            _classic_,
            _oval_,
            _diamond_,
            _open_
        }

    private:
        static const string TypeStrList [];
        static ST_StrokeArrowType* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_ImageAspect : public XSD::SimpleType{
    public:
        ST_ImageAspect();
        ST_ImageAspect(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_ImageAspect& default_instance() const;
        enum Type{
            _ignore_ = 1,
            _atMost_,
            _atLeast_
        }

    private:
        static const string TypeStrList [];
        static ST_ImageAspect* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_EditAs : public XSD::SimpleType{
    public:
        ST_EditAs();
        ST_EditAs(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_EditAs& default_instance() const;
        enum Type{
            _canvas_ = 1,
            _orgchart_,
            _radial_,
            _cycle_,
            _stacked_,
            _venn_,
            _bullseye_
        }

    private:
        static const string TypeStrList [];
        static ST_EditAs* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class CT_Shape : public XSD::ComplexType{
    public:
        CT_Path* add_path();
        CT_Formulas* add_formulas();
        CT_Handles* add_handles();
        CT_Fill* add_fill();
        CT_Stroke* add_stroke();
        CT_Shadow* add_shadow();
        CT_Textbox* add_textbox();
        CT_TextPath* add_textpath();
        CT_ImageData* add_imagedata();
        CT_Skew* add_skew();
        CT_Extrusion* add_extrusion();
        CT_Callout* add_callout();
        CT_Lock* add_lock();
        CT_ClipPath* add_clippath();
        CT_SignatureLine* add_signatureline();
        CT_Wrap* add_wrap();
        CT_AnchorLock* add_anchorlock();
        CT_Border* add_bordertop();
        CT_Border* add_borderbottom();
        CT_Border* add_borderleft();
        CT_Border* add_borderright();
        CT_ClientData* add_ClientData();
        CT_Rel* add_textdata();
        CT_Ink* add_ink();
        CT_Empty* add_iscomment();
        CT_EquationXml* add_equationxml();
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Shape& default_instance() const;
        bool has_type_attr() const;
        void set_type_attr(const string& _type_attr );
        const string& type_attr() const;
        bool has_adj_attr() const;
        void set_adj_attr(const string& _adj_attr );
        const string& adj_attr() const;
        bool has_path_attr() const;
        void set_path_attr(const string& _path_attr );
        const string& path_attr() const;
        bool has_gfxdata_attr() const;
        void set_gfxdata_attr(const base64Binary& _gfxdata_attr );
        const base64Binary& gfxdata_attr() const;
        bool has_equationxml_attr() const;
        void set_equationxml_attr(const string& _equationxml_attr );
        const string& equationxml_attr() const;

    private:
        vector<ChildGroup_1*> m_childGroupList_1 ;
        static CT_Shape* default_instance_ ;
        bool m_has_type_attr ;
        string m_type_attr ;
        bool m_has_adj_attr ;
        string m_adj_attr ;
        bool m_has_path_attr ;
        string m_path_attr ;
        bool m_has_gfxdata_attr ;
        base64Binary m_gfxdata_attr ;
        bool m_has_equationxml_attr ;
        string m_equationxml_attr ;
        class ChildGroup_1{
        public:
            bool has_path() const;
            CT_Path* mutable_path();
            const CT_Path& path() const;
            bool has_formulas() const;
            CT_Formulas* mutable_formulas();
            const CT_Formulas& formulas() const;
            bool has_handles() const;
            CT_Handles* mutable_handles();
            const CT_Handles& handles() const;
            bool has_fill() const;
            CT_Fill* mutable_fill();
            const CT_Fill& fill() const;
            bool has_stroke() const;
            CT_Stroke* mutable_stroke();
            const CT_Stroke& stroke() const;
            bool has_shadow() const;
            CT_Shadow* mutable_shadow();
            const CT_Shadow& shadow() const;
            bool has_textbox() const;
            CT_Textbox* mutable_textbox();
            const CT_Textbox& textbox() const;
            bool has_textpath() const;
            CT_TextPath* mutable_textpath();
            const CT_TextPath& textpath() const;
            bool has_imagedata() const;
            CT_ImageData* mutable_imagedata();
            const CT_ImageData& imagedata() const;
            bool has_skew() const;
            CT_Skew* mutable_skew();
            const CT_Skew& skew() const;
            bool has_extrusion() const;
            CT_Extrusion* mutable_extrusion();
            const CT_Extrusion& extrusion() const;
            bool has_callout() const;
            CT_Callout* mutable_callout();
            const CT_Callout& callout() const;
            bool has_lock() const;
            CT_Lock* mutable_lock();
            const CT_Lock& lock() const;
            bool has_clippath() const;
            CT_ClipPath* mutable_clippath();
            const CT_ClipPath& clippath() const;
            bool has_signatureline() const;
            CT_SignatureLine* mutable_signatureline();
            const CT_SignatureLine& signatureline() const;
            bool has_wrap() const;
            CT_Wrap* mutable_wrap();
            const CT_Wrap& wrap() const;
            bool has_anchorlock() const;
            CT_AnchorLock* mutable_anchorlock();
            const CT_AnchorLock& anchorlock() const;
            bool has_bordertop() const;
            CT_Border* mutable_bordertop();
            const CT_Border& bordertop() const;
            bool has_borderbottom() const;
            CT_Border* mutable_borderbottom();
            const CT_Border& borderbottom() const;
            bool has_borderleft() const;
            CT_Border* mutable_borderleft();
            const CT_Border& borderleft() const;
            bool has_borderright() const;
            CT_Border* mutable_borderright();
            const CT_Border& borderright() const;
            bool has_ClientData() const;
            CT_ClientData* mutable_ClientData();
            const CT_ClientData& ClientData() const;
            bool has_textdata() const;
            CT_Rel* mutable_textdata();
            const CT_Rel& textdata() const;
            bool has_ink() const;
            CT_Ink* mutable_ink();
            const CT_Ink& ink() const;
            bool has_iscomment() const;
            CT_Empty* mutable_iscomment();
            const CT_Empty& iscomment() const;
            bool has_equationxml() const;
            CT_EquationXml* mutable_equationxml();
            const CT_EquationXml& equationxml() const;

        private:
            bool m_has_path ;
            CT_Path* m_path ;
            bool m_has_formulas ;
            CT_Formulas* m_formulas ;
            bool m_has_handles ;
            CT_Handles* m_handles ;
            bool m_has_fill ;
            CT_Fill* m_fill ;
            bool m_has_stroke ;
            CT_Stroke* m_stroke ;
            bool m_has_shadow ;
            CT_Shadow* m_shadow ;
            bool m_has_textbox ;
            CT_Textbox* m_textbox ;
            bool m_has_textpath ;
            CT_TextPath* m_textpath ;
            bool m_has_imagedata ;
            CT_ImageData* m_imagedata ;
            bool m_has_skew ;
            CT_Skew* m_skew ;
            bool m_has_extrusion ;
            CT_Extrusion* m_extrusion ;
            bool m_has_callout ;
            CT_Callout* m_callout ;
            bool m_has_lock ;
            CT_Lock* m_lock ;
            bool m_has_clippath ;
            CT_ClipPath* m_clippath ;
            bool m_has_signatureline ;
            CT_SignatureLine* m_signatureline ;
            bool m_has_wrap ;
            CT_Wrap* m_wrap ;
            bool m_has_anchorlock ;
            CT_AnchorLock* m_anchorlock ;
            bool m_has_bordertop ;
            CT_Border* m_bordertop ;
            bool m_has_borderbottom ;
            CT_Border* m_borderbottom ;
            bool m_has_borderleft ;
            CT_Border* m_borderleft ;
            bool m_has_borderright ;
            CT_Border* m_borderright ;
            bool m_has_ClientData ;
            CT_ClientData* m_ClientData ;
            bool m_has_textdata ;
            CT_Rel* m_textdata ;
            bool m_has_ink ;
            CT_Ink* m_ink ;
            bool m_has_iscomment ;
            CT_Empty* m_iscomment ;
            bool m_has_equationxml ;
            CT_EquationXml* m_equationxml ;

        }


    }

    class CT_Shapetype : public XSD::ComplexType{
    public:
        CT_Path* add_path();
        CT_Formulas* add_formulas();
        CT_Handles* add_handles();
        CT_Fill* add_fill();
        CT_Stroke* add_stroke();
        CT_Shadow* add_shadow();
        CT_Textbox* add_textbox();
        CT_TextPath* add_textpath();
        CT_ImageData* add_imagedata();
        CT_Skew* add_skew();
        CT_Extrusion* add_extrusion();
        CT_Callout* add_callout();
        CT_Lock* add_lock();
        CT_ClipPath* add_clippath();
        CT_SignatureLine* add_signatureline();
        CT_Wrap* add_wrap();
        CT_AnchorLock* add_anchorlock();
        CT_Border* add_bordertop();
        CT_Border* add_borderbottom();
        CT_Border* add_borderleft();
        CT_Border* add_borderright();
        CT_ClientData* add_ClientData();
        CT_Rel* add_textdata();
        bool has_complex() const;
        CT_Complex* mutable_complex();
        const CT_Complex& complex() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Shapetype& default_instance() const;
        bool has_adj_attr() const;
        void set_adj_attr(const string& _adj_attr );
        const string& adj_attr() const;
        bool has_path_attr() const;
        void set_path_attr(const string& _path_attr );
        const string& path_attr() const;
        bool has_master_attr() const;
        void set_master_attr(const string& _master_attr );
        const string& master_attr() const;

    private:
        vector<ChildGroup_1*> m_childGroupList_1 ;
        bool m_has_complex ;
        CT_Complex* m_complex ;
        static CT_Shapetype* default_instance_ ;
        bool m_has_adj_attr ;
        string m_adj_attr ;
        bool m_has_path_attr ;
        string m_path_attr ;
        bool m_has_master_attr ;
        string m_master_attr ;
        class ChildGroup_1{
        public:
            bool has_path() const;
            CT_Path* mutable_path();
            const CT_Path& path() const;
            bool has_formulas() const;
            CT_Formulas* mutable_formulas();
            const CT_Formulas& formulas() const;
            bool has_handles() const;
            CT_Handles* mutable_handles();
            const CT_Handles& handles() const;
            bool has_fill() const;
            CT_Fill* mutable_fill();
            const CT_Fill& fill() const;
            bool has_stroke() const;
            CT_Stroke* mutable_stroke();
            const CT_Stroke& stroke() const;
            bool has_shadow() const;
            CT_Shadow* mutable_shadow();
            const CT_Shadow& shadow() const;
            bool has_textbox() const;
            CT_Textbox* mutable_textbox();
            const CT_Textbox& textbox() const;
            bool has_textpath() const;
            CT_TextPath* mutable_textpath();
            const CT_TextPath& textpath() const;
            bool has_imagedata() const;
            CT_ImageData* mutable_imagedata();
            const CT_ImageData& imagedata() const;
            bool has_skew() const;
            CT_Skew* mutable_skew();
            const CT_Skew& skew() const;
            bool has_extrusion() const;
            CT_Extrusion* mutable_extrusion();
            const CT_Extrusion& extrusion() const;
            bool has_callout() const;
            CT_Callout* mutable_callout();
            const CT_Callout& callout() const;
            bool has_lock() const;
            CT_Lock* mutable_lock();
            const CT_Lock& lock() const;
            bool has_clippath() const;
            CT_ClipPath* mutable_clippath();
            const CT_ClipPath& clippath() const;
            bool has_signatureline() const;
            CT_SignatureLine* mutable_signatureline();
            const CT_SignatureLine& signatureline() const;
            bool has_wrap() const;
            CT_Wrap* mutable_wrap();
            const CT_Wrap& wrap() const;
            bool has_anchorlock() const;
            CT_AnchorLock* mutable_anchorlock();
            const CT_AnchorLock& anchorlock() const;
            bool has_bordertop() const;
            CT_Border* mutable_bordertop();
            const CT_Border& bordertop() const;
            bool has_borderbottom() const;
            CT_Border* mutable_borderbottom();
            const CT_Border& borderbottom() const;
            bool has_borderleft() const;
            CT_Border* mutable_borderleft();
            const CT_Border& borderleft() const;
            bool has_borderright() const;
            CT_Border* mutable_borderright();
            const CT_Border& borderright() const;
            bool has_ClientData() const;
            CT_ClientData* mutable_ClientData();
            const CT_ClientData& ClientData() const;
            bool has_textdata() const;
            CT_Rel* mutable_textdata();
            const CT_Rel& textdata() const;

        private:
            bool m_has_path ;
            CT_Path* m_path ;
            bool m_has_formulas ;
            CT_Formulas* m_formulas ;
            bool m_has_handles ;
            CT_Handles* m_handles ;
            bool m_has_fill ;
            CT_Fill* m_fill ;
            bool m_has_stroke ;
            CT_Stroke* m_stroke ;
            bool m_has_shadow ;
            CT_Shadow* m_shadow ;
            bool m_has_textbox ;
            CT_Textbox* m_textbox ;
            bool m_has_textpath ;
            CT_TextPath* m_textpath ;
            bool m_has_imagedata ;
            CT_ImageData* m_imagedata ;
            bool m_has_skew ;
            CT_Skew* m_skew ;
            bool m_has_extrusion ;
            CT_Extrusion* m_extrusion ;
            bool m_has_callout ;
            CT_Callout* m_callout ;
            bool m_has_lock ;
            CT_Lock* m_lock ;
            bool m_has_clippath ;
            CT_ClipPath* m_clippath ;
            bool m_has_signatureline ;
            CT_SignatureLine* m_signatureline ;
            bool m_has_wrap ;
            CT_Wrap* m_wrap ;
            bool m_has_anchorlock ;
            CT_AnchorLock* m_anchorlock ;
            bool m_has_bordertop ;
            CT_Border* m_bordertop ;
            bool m_has_borderbottom ;
            CT_Border* m_borderbottom ;
            bool m_has_borderleft ;
            CT_Border* m_borderleft ;
            bool m_has_borderright ;
            CT_Border* m_borderright ;
            bool m_has_ClientData ;
            CT_ClientData* m_ClientData ;
            bool m_has_textdata ;
            CT_Rel* m_textdata ;

        }


    }

    class CT_Group : public XSD::ComplexType{
    public:
        CT_Path* add_path();
        CT_Formulas* add_formulas();
        CT_Handles* add_handles();
        CT_Fill* add_fill();
        CT_Stroke* add_stroke();
        CT_Shadow* add_shadow();
        CT_Textbox* add_textbox();
        CT_TextPath* add_textpath();
        CT_ImageData* add_imagedata();
        CT_Skew* add_skew();
        CT_Extrusion* add_extrusion();
        CT_Callout* add_callout();
        CT_Lock* add_lock();
        CT_ClipPath* add_clippath();
        CT_SignatureLine* add_signatureline();
        CT_Wrap* add_wrap();
        CT_AnchorLock* add_anchorlock();
        CT_Border* add_bordertop();
        CT_Border* add_borderbottom();
        CT_Border* add_borderleft();
        CT_Border* add_borderright();
        CT_ClientData* add_ClientData();
        CT_Rel* add_textdata();
        CT_Group* add_group();
        CT_Shape* add_shape();
        CT_Shapetype* add_shapetype();
        CT_Arc* add_arc();
        CT_Curve* add_curve();
        CT_Image* add_image();
        CT_Line* add_line();
        CT_Oval* add_oval();
        CT_PolyLine* add_polyline();
        CT_Rect* add_rect();
        CT_RoundRect* add_roundrect();
        CT_Diagram* add_diagram();
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Group& default_instance() const;
        bool has_filled_attr() const;
        void set_filled_attr(const ns_s::ST_TrueFalse& _filled_attr );
        const ns_s::ST_TrueFalse& filled_attr() const;
        bool has_fillcolor_attr() const;
        void set_fillcolor_attr(const ns_s::ST_ColorType& _fillcolor_attr );
        const ns_s::ST_ColorType& fillcolor_attr() const;
        bool has_editas_attr() const;
        void set_editas_attr(const ST_EditAs& _editas_attr );
        const ST_EditAs& editas_attr() const;
        bool has_tableproperties_attr() const;
        void set_tableproperties_attr(const string& _tableproperties_attr );
        const string& tableproperties_attr() const;
        bool has_tablelimits_attr() const;
        void set_tablelimits_attr(const string& _tablelimits_attr );
        const string& tablelimits_attr() const;

    private:
        vector<ChildGroup_1*> m_childGroupList_1 ;
        static CT_Group* default_instance_ ;
        bool m_has_filled_attr ;
        ns_s::ST_TrueFalse* m_filled_attr ;
        bool m_has_fillcolor_attr ;
        ns_s::ST_ColorType* m_fillcolor_attr ;
        bool m_has_editas_attr ;
        ST_EditAs* m_editas_attr ;
        bool m_has_tableproperties_attr ;
        string m_tableproperties_attr ;
        bool m_has_tablelimits_attr ;
        string m_tablelimits_attr ;
        class ChildGroup_1{
        public:
            bool has_path() const;
            CT_Path* mutable_path();
            const CT_Path& path() const;
            bool has_formulas() const;
            CT_Formulas* mutable_formulas();
            const CT_Formulas& formulas() const;
            bool has_handles() const;
            CT_Handles* mutable_handles();
            const CT_Handles& handles() const;
            bool has_fill() const;
            CT_Fill* mutable_fill();
            const CT_Fill& fill() const;
            bool has_stroke() const;
            CT_Stroke* mutable_stroke();
            const CT_Stroke& stroke() const;
            bool has_shadow() const;
            CT_Shadow* mutable_shadow();
            const CT_Shadow& shadow() const;
            bool has_textbox() const;
            CT_Textbox* mutable_textbox();
            const CT_Textbox& textbox() const;
            bool has_textpath() const;
            CT_TextPath* mutable_textpath();
            const CT_TextPath& textpath() const;
            bool has_imagedata() const;
            CT_ImageData* mutable_imagedata();
            const CT_ImageData& imagedata() const;
            bool has_skew() const;
            CT_Skew* mutable_skew();
            const CT_Skew& skew() const;
            bool has_extrusion() const;
            CT_Extrusion* mutable_extrusion();
            const CT_Extrusion& extrusion() const;
            bool has_callout() const;
            CT_Callout* mutable_callout();
            const CT_Callout& callout() const;
            bool has_lock() const;
            CT_Lock* mutable_lock();
            const CT_Lock& lock() const;
            bool has_clippath() const;
            CT_ClipPath* mutable_clippath();
            const CT_ClipPath& clippath() const;
            bool has_signatureline() const;
            CT_SignatureLine* mutable_signatureline();
            const CT_SignatureLine& signatureline() const;
            bool has_wrap() const;
            CT_Wrap* mutable_wrap();
            const CT_Wrap& wrap() const;
            bool has_anchorlock() const;
            CT_AnchorLock* mutable_anchorlock();
            const CT_AnchorLock& anchorlock() const;
            bool has_bordertop() const;
            CT_Border* mutable_bordertop();
            const CT_Border& bordertop() const;
            bool has_borderbottom() const;
            CT_Border* mutable_borderbottom();
            const CT_Border& borderbottom() const;
            bool has_borderleft() const;
            CT_Border* mutable_borderleft();
            const CT_Border& borderleft() const;
            bool has_borderright() const;
            CT_Border* mutable_borderright();
            const CT_Border& borderright() const;
            bool has_ClientData() const;
            CT_ClientData* mutable_ClientData();
            const CT_ClientData& ClientData() const;
            bool has_textdata() const;
            CT_Rel* mutable_textdata();
            const CT_Rel& textdata() const;
            bool has_group() const;
            CT_Group* mutable_group();
            const CT_Group& group() const;
            bool has_shape() const;
            CT_Shape* mutable_shape();
            const CT_Shape& shape() const;
            bool has_shapetype() const;
            CT_Shapetype* mutable_shapetype();
            const CT_Shapetype& shapetype() const;
            bool has_arc() const;
            CT_Arc* mutable_arc();
            const CT_Arc& arc() const;
            bool has_curve() const;
            CT_Curve* mutable_curve();
            const CT_Curve& curve() const;
            bool has_image() const;
            CT_Image* mutable_image();
            const CT_Image& image() const;
            bool has_line() const;
            CT_Line* mutable_line();
            const CT_Line& line() const;
            bool has_oval() const;
            CT_Oval* mutable_oval();
            const CT_Oval& oval() const;
            bool has_polyline() const;
            CT_PolyLine* mutable_polyline();
            const CT_PolyLine& polyline() const;
            bool has_rect() const;
            CT_Rect* mutable_rect();
            const CT_Rect& rect() const;
            bool has_roundrect() const;
            CT_RoundRect* mutable_roundrect();
            const CT_RoundRect& roundrect() const;
            bool has_diagram() const;
            CT_Diagram* mutable_diagram();
            const CT_Diagram& diagram() const;

        private:
            bool m_has_path ;
            CT_Path* m_path ;
            bool m_has_formulas ;
            CT_Formulas* m_formulas ;
            bool m_has_handles ;
            CT_Handles* m_handles ;
            bool m_has_fill ;
            CT_Fill* m_fill ;
            bool m_has_stroke ;
            CT_Stroke* m_stroke ;
            bool m_has_shadow ;
            CT_Shadow* m_shadow ;
            bool m_has_textbox ;
            CT_Textbox* m_textbox ;
            bool m_has_textpath ;
            CT_TextPath* m_textpath ;
            bool m_has_imagedata ;
            CT_ImageData* m_imagedata ;
            bool m_has_skew ;
            CT_Skew* m_skew ;
            bool m_has_extrusion ;
            CT_Extrusion* m_extrusion ;
            bool m_has_callout ;
            CT_Callout* m_callout ;
            bool m_has_lock ;
            CT_Lock* m_lock ;
            bool m_has_clippath ;
            CT_ClipPath* m_clippath ;
            bool m_has_signatureline ;
            CT_SignatureLine* m_signatureline ;
            bool m_has_wrap ;
            CT_Wrap* m_wrap ;
            bool m_has_anchorlock ;
            CT_AnchorLock* m_anchorlock ;
            bool m_has_bordertop ;
            CT_Border* m_bordertop ;
            bool m_has_borderbottom ;
            CT_Border* m_borderbottom ;
            bool m_has_borderleft ;
            CT_Border* m_borderleft ;
            bool m_has_borderright ;
            CT_Border* m_borderright ;
            bool m_has_ClientData ;
            CT_ClientData* m_ClientData ;
            bool m_has_textdata ;
            CT_Rel* m_textdata ;
            bool m_has_group ;
            CT_Group* m_group ;
            bool m_has_shape ;
            CT_Shape* m_shape ;
            bool m_has_shapetype ;
            CT_Shapetype* m_shapetype ;
            bool m_has_arc ;
            CT_Arc* m_arc ;
            bool m_has_curve ;
            CT_Curve* m_curve ;
            bool m_has_image ;
            CT_Image* m_image ;
            bool m_has_line ;
            CT_Line* m_line ;
            bool m_has_oval ;
            CT_Oval* m_oval ;
            bool m_has_polyline ;
            CT_PolyLine* m_polyline ;
            bool m_has_rect ;
            CT_Rect* m_rect ;
            bool m_has_roundrect ;
            CT_RoundRect* m_roundrect ;
            bool m_has_diagram ;
            CT_Diagram* m_diagram ;

        }


    }

    class CT_Background : public XSD::ComplexType{
    public:
        bool has_fill() const;
        CT_Fill* mutable_fill();
        const CT_Fill& fill() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Background& default_instance() const;
        bool has_id_attr() const;
        void set_id_attr(const string& _id_attr );
        const string& id_attr() const;
        bool has_filled_attr() const;
        void set_filled_attr(const ns_s::ST_TrueFalse& _filled_attr );
        const ns_s::ST_TrueFalse& filled_attr() const;
        bool has_fillcolor_attr() const;
        void set_fillcolor_attr(const ns_s::ST_ColorType& _fillcolor_attr );
        const ns_s::ST_ColorType& fillcolor_attr() const;
        bool has_bwmode_attr() const;
        void set_bwmode_attr(const ST_BWMode& _bwmode_attr );
        const ST_BWMode& bwmode_attr() const;
        bool has_bwpure_attr() const;
        void set_bwpure_attr(const ST_BWMode& _bwpure_attr );
        const ST_BWMode& bwpure_attr() const;
        bool has_bwnormal_attr() const;
        void set_bwnormal_attr(const ST_BWMode& _bwnormal_attr );
        const ST_BWMode& bwnormal_attr() const;
        bool has_targetscreensize_attr() const;
        void set_targetscreensize_attr(const ST_ScreenSize& _targetscreensize_attr );
        const ST_ScreenSize& targetscreensize_attr() const;

    private:
        bool m_has_fill ;
        CT_Fill* m_fill ;
        static CT_Background* default_instance_ ;
        bool m_has_id_attr ;
        string m_id_attr ;
        bool m_has_filled_attr ;
        ns_s::ST_TrueFalse* m_filled_attr ;
        bool m_has_fillcolor_attr ;
        ns_s::ST_ColorType* m_fillcolor_attr ;
        bool m_has_bwmode_attr ;
        ST_BWMode* m_bwmode_attr ;
        bool m_has_bwpure_attr ;
        ST_BWMode* m_bwpure_attr ;
        bool m_has_bwnormal_attr ;
        ST_BWMode* m_bwnormal_attr ;
        bool m_has_targetscreensize_attr ;
        ST_ScreenSize* m_targetscreensize_attr ;

    }

    class CT_Fill : public XSD::ComplexType{
    public:
        bool has_fill() const;
        CT_Fill* mutable_fill();
        const CT_Fill& fill() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Fill& default_instance() const;
        bool has_id_attr() const;
        void set_id_attr(const string& _id_attr );
        const string& id_attr() const;
        bool has_type_attr() const;
        void set_type_attr(const ST_FillType& _type_attr );
        const ST_FillType& type_attr() const;
        bool has_on_attr() const;
        void set_on_attr(const ns_s::ST_TrueFalse& _on_attr );
        const ns_s::ST_TrueFalse& on_attr() const;
        bool has_color_attr() const;
        void set_color_attr(const ns_s::ST_ColorType& _color_attr );
        const ns_s::ST_ColorType& color_attr() const;
        bool has_opacity_attr() const;
        void set_opacity_attr(const string& _opacity_attr );
        const string& opacity_attr() const;
        bool has_color2_attr() const;
        void set_color2_attr(const ns_s::ST_ColorType& _color2_attr );
        const ns_s::ST_ColorType& color2_attr() const;
        bool has_src_attr() const;
        void set_src_attr(const string& _src_attr );
        const string& src_attr() const;
        bool has_href_attr() const;
        void set_href_attr(const string& _href_attr );
        const string& href_attr() const;
        bool has_althref_attr() const;
        void set_althref_attr(const string& _althref_attr );
        const string& althref_attr() const;
        bool has_size_attr() const;
        void set_size_attr(const string& _size_attr );
        const string& size_attr() const;
        bool has_origin_attr() const;
        void set_origin_attr(const string& _origin_attr );
        const string& origin_attr() const;
        bool has_position_attr() const;
        void set_position_attr(const string& _position_attr );
        const string& position_attr() const;
        bool has_aspect_attr() const;
        void set_aspect_attr(const ST_ImageAspect& _aspect_attr );
        const ST_ImageAspect& aspect_attr() const;
        bool has_colors_attr() const;
        void set_colors_attr(const string& _colors_attr );
        const string& colors_attr() const;
        bool has_angle_attr() const;
        void set_angle_attr(const decimal& _angle_attr );
        const decimal& angle_attr() const;
        bool has_alignshape_attr() const;
        void set_alignshape_attr(const ns_s::ST_TrueFalse& _alignshape_attr );
        const ns_s::ST_TrueFalse& alignshape_attr() const;
        bool has_focus_attr() const;
        void set_focus_attr(const string& _focus_attr );
        const string& focus_attr() const;
        bool has_focussize_attr() const;
        void set_focussize_attr(const string& _focussize_attr );
        const string& focussize_attr() const;
        bool has_focusposition_attr() const;
        void set_focusposition_attr(const string& _focusposition_attr );
        const string& focusposition_attr() const;
        bool has_method_attr() const;
        void set_method_attr(const ST_FillMethod& _method_attr );
        const ST_FillMethod& method_attr() const;
        bool has_detectmouseclick_attr() const;
        void set_detectmouseclick_attr(const ns_s::ST_TrueFalse& _detectmouseclick_attr );
        const ns_s::ST_TrueFalse& detectmouseclick_attr() const;
        bool has_title_attr() const;
        void set_title_attr(const string& _title_attr );
        const string& title_attr() const;
        bool has_opacity2_attr() const;
        void set_opacity2_attr(const string& _opacity2_attr );
        const string& opacity2_attr() const;
        bool has_recolor_attr() const;
        void set_recolor_attr(const ns_s::ST_TrueFalse& _recolor_attr );
        const ns_s::ST_TrueFalse& recolor_attr() const;
        bool has_rotate_attr() const;
        void set_rotate_attr(const ns_s::ST_TrueFalse& _rotate_attr );
        const ns_s::ST_TrueFalse& rotate_attr() const;
        bool has_id_attr() const;
        void set_id_attr(const ST_RelationshipId& _id_attr );
        const ST_RelationshipId& id_attr() const;
        bool has_relid_attr() const;
        void set_relid_attr(const ns_r::ST_RelationshipId& _relid_attr );
        const ns_r::ST_RelationshipId& relid_attr() const;

    private:
        bool m_has_fill ;
        CT_Fill* m_fill ;
        static CT_Fill* default_instance_ ;
        bool m_has_id_attr ;
        string m_id_attr ;
        bool m_has_type_attr ;
        ST_FillType* m_type_attr ;
        bool m_has_on_attr ;
        ns_s::ST_TrueFalse* m_on_attr ;
        bool m_has_color_attr ;
        ns_s::ST_ColorType* m_color_attr ;
        bool m_has_opacity_attr ;
        string m_opacity_attr ;
        bool m_has_color2_attr ;
        ns_s::ST_ColorType* m_color2_attr ;
        bool m_has_src_attr ;
        string m_src_attr ;
        bool m_has_href_attr ;
        string m_href_attr ;
        bool m_has_althref_attr ;
        string m_althref_attr ;
        bool m_has_size_attr ;
        string m_size_attr ;
        bool m_has_origin_attr ;
        string m_origin_attr ;
        bool m_has_position_attr ;
        string m_position_attr ;
        bool m_has_aspect_attr ;
        ST_ImageAspect* m_aspect_attr ;
        bool m_has_colors_attr ;
        string m_colors_attr ;
        bool m_has_angle_attr ;
        decimal m_angle_attr ;
        bool m_has_alignshape_attr ;
        ns_s::ST_TrueFalse* m_alignshape_attr ;
        bool m_has_focus_attr ;
        string m_focus_attr ;
        bool m_has_focussize_attr ;
        string m_focussize_attr ;
        bool m_has_focusposition_attr ;
        string m_focusposition_attr ;
        bool m_has_method_attr ;
        ST_FillMethod* m_method_attr ;
        bool m_has_detectmouseclick_attr ;
        ns_s::ST_TrueFalse* m_detectmouseclick_attr ;
        bool m_has_title_attr ;
        string m_title_attr ;
        bool m_has_opacity2_attr ;
        string m_opacity2_attr ;
        bool m_has_recolor_attr ;
        ns_s::ST_TrueFalse* m_recolor_attr ;
        bool m_has_rotate_attr ;
        ns_s::ST_TrueFalse* m_rotate_attr ;
        bool m_has_id_attr ;
        ST_RelationshipId* m_id_attr ;
        bool m_has_relid_attr ;
        ns_r::ST_RelationshipId* m_relid_attr ;

    }

    class CT_Formulas : public XSD::ComplexType{
    public:
        bool has_f() const;
        CT_F* mutable_f();
        const CT_F& f() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Formulas& default_instance() const;

    private:
        bool m_has_f ;
        CT_F* m_f ;
        static CT_Formulas* default_instance_ ;

    }

    class CT_F : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_F& default_instance() const;
        bool has_eqn_attr() const;
        void set_eqn_attr(const string& _eqn_attr );
        const string& eqn_attr() const;

    private:
        static CT_F* default_instance_ ;
        bool m_has_eqn_attr ;
        string m_eqn_attr ;

    }

    class CT_Handles : public XSD::ComplexType{
    public:
        bool has_h() const;
        CT_H* mutable_h();
        const CT_H& h() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Handles& default_instance() const;

    private:
        bool m_has_h ;
        CT_H* m_h ;
        static CT_Handles* default_instance_ ;

    }

    class CT_H : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_H& default_instance() const;
        bool has_position_attr() const;
        void set_position_attr(const string& _position_attr );
        const string& position_attr() const;
        bool has_polar_attr() const;
        void set_polar_attr(const string& _polar_attr );
        const string& polar_attr() const;
        bool has_map_attr() const;
        void set_map_attr(const string& _map_attr );
        const string& map_attr() const;
        bool has_invx_attr() const;
        void set_invx_attr(const ns_s::ST_TrueFalse& _invx_attr );
        const ns_s::ST_TrueFalse& invx_attr() const;
        bool has_invy_attr() const;
        void set_invy_attr(const ns_s::ST_TrueFalse& _invy_attr );
        const ns_s::ST_TrueFalse& invy_attr() const;
        bool has_switch_attr() const;
        void set_switch_attr(const ns_s::ST_TrueFalseBlank& _switch_attr );
        const ns_s::ST_TrueFalseBlank& switch_attr() const;
        bool has_xrange_attr() const;
        void set_xrange_attr(const string& _xrange_attr );
        const string& xrange_attr() const;
        bool has_yrange_attr() const;
        void set_yrange_attr(const string& _yrange_attr );
        const string& yrange_attr() const;
        bool has_radiusrange_attr() const;
        void set_radiusrange_attr(const string& _radiusrange_attr );
        const string& radiusrange_attr() const;

    private:
        static CT_H* default_instance_ ;
        bool m_has_position_attr ;
        string m_position_attr ;
        bool m_has_polar_attr ;
        string m_polar_attr ;
        bool m_has_map_attr ;
        string m_map_attr ;
        bool m_has_invx_attr ;
        ns_s::ST_TrueFalse* m_invx_attr ;
        bool m_has_invy_attr ;
        ns_s::ST_TrueFalse* m_invy_attr ;
        bool m_has_switch_attr ;
        ns_s::ST_TrueFalseBlank* m_switch_attr ;
        bool m_has_xrange_attr ;
        string m_xrange_attr ;
        bool m_has_yrange_attr ;
        string m_yrange_attr ;
        bool m_has_radiusrange_attr ;
        string m_radiusrange_attr ;

    }

    class CT_ImageData : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_ImageData& default_instance() const;
        bool has_id_attr() const;
        void set_id_attr(const string& _id_attr );
        const string& id_attr() const;
        bool has_src_attr() const;
        void set_src_attr(const string& _src_attr );
        const string& src_attr() const;
        bool has_cropleft_attr() const;
        void set_cropleft_attr(const string& _cropleft_attr );
        const string& cropleft_attr() const;
        bool has_croptop_attr() const;
        void set_croptop_attr(const string& _croptop_attr );
        const string& croptop_attr() const;
        bool has_cropright_attr() const;
        void set_cropright_attr(const string& _cropright_attr );
        const string& cropright_attr() const;
        bool has_cropbottom_attr() const;
        void set_cropbottom_attr(const string& _cropbottom_attr );
        const string& cropbottom_attr() const;
        bool has_gain_attr() const;
        void set_gain_attr(const string& _gain_attr );
        const string& gain_attr() const;
        bool has_blacklevel_attr() const;
        void set_blacklevel_attr(const string& _blacklevel_attr );
        const string& blacklevel_attr() const;
        bool has_gamma_attr() const;
        void set_gamma_attr(const string& _gamma_attr );
        const string& gamma_attr() const;
        bool has_grayscale_attr() const;
        void set_grayscale_attr(const ns_s::ST_TrueFalse& _grayscale_attr );
        const ns_s::ST_TrueFalse& grayscale_attr() const;
        bool has_bilevel_attr() const;
        void set_bilevel_attr(const ns_s::ST_TrueFalse& _bilevel_attr );
        const ns_s::ST_TrueFalse& bilevel_attr() const;
        bool has_chromakey_attr() const;
        void set_chromakey_attr(const ns_s::ST_ColorType& _chromakey_attr );
        const ns_s::ST_ColorType& chromakey_attr() const;
        bool has_embosscolor_attr() const;
        void set_embosscolor_attr(const ns_s::ST_ColorType& _embosscolor_attr );
        const ns_s::ST_ColorType& embosscolor_attr() const;
        bool has_recolortarget_attr() const;
        void set_recolortarget_attr(const ns_s::ST_ColorType& _recolortarget_attr );
        const ns_s::ST_ColorType& recolortarget_attr() const;
        bool has_href_attr() const;
        void set_href_attr(const string& _href_attr );
        const string& href_attr() const;
        bool has_althref_attr() const;
        void set_althref_attr(const string& _althref_attr );
        const string& althref_attr() const;
        bool has_title_attr() const;
        void set_title_attr(const string& _title_attr );
        const string& title_attr() const;
        bool has_oleid_attr() const;
        void set_oleid_attr(const float& _oleid_attr );
        const float& oleid_attr() const;
        bool has_detectmouseclick_attr() const;
        void set_detectmouseclick_attr(const ns_s::ST_TrueFalse& _detectmouseclick_attr );
        const ns_s::ST_TrueFalse& detectmouseclick_attr() const;
        bool has_movie_attr() const;
        void set_movie_attr(const float& _movie_attr );
        const float& movie_attr() const;
        bool has_relid_attr() const;
        void set_relid_attr(const ns_r::ST_RelationshipId& _relid_attr );
        const ns_r::ST_RelationshipId& relid_attr() const;
        bool has_id_attr() const;
        void set_id_attr(const ST_RelationshipId& _id_attr );
        const ST_RelationshipId& id_attr() const;
        bool has_pict_attr() const;
        void set_pict_attr(const ST_RelationshipId& _pict_attr );
        const ST_RelationshipId& pict_attr() const;
        bool has_href_attr() const;
        void set_href_attr(const ST_RelationshipId& _href_attr );
        const ST_RelationshipId& href_attr() const;

    private:
        static CT_ImageData* default_instance_ ;
        bool m_has_id_attr ;
        string m_id_attr ;
        bool m_has_src_attr ;
        string m_src_attr ;
        bool m_has_cropleft_attr ;
        string m_cropleft_attr ;
        bool m_has_croptop_attr ;
        string m_croptop_attr ;
        bool m_has_cropright_attr ;
        string m_cropright_attr ;
        bool m_has_cropbottom_attr ;
        string m_cropbottom_attr ;
        bool m_has_gain_attr ;
        string m_gain_attr ;
        bool m_has_blacklevel_attr ;
        string m_blacklevel_attr ;
        bool m_has_gamma_attr ;
        string m_gamma_attr ;
        bool m_has_grayscale_attr ;
        ns_s::ST_TrueFalse* m_grayscale_attr ;
        bool m_has_bilevel_attr ;
        ns_s::ST_TrueFalse* m_bilevel_attr ;
        bool m_has_chromakey_attr ;
        ns_s::ST_ColorType* m_chromakey_attr ;
        bool m_has_embosscolor_attr ;
        ns_s::ST_ColorType* m_embosscolor_attr ;
        bool m_has_recolortarget_attr ;
        ns_s::ST_ColorType* m_recolortarget_attr ;
        bool m_has_href_attr ;
        string m_href_attr ;
        bool m_has_althref_attr ;
        string m_althref_attr ;
        bool m_has_title_attr ;
        string m_title_attr ;
        bool m_has_oleid_attr ;
        float m_oleid_attr ;
        bool m_has_detectmouseclick_attr ;
        ns_s::ST_TrueFalse* m_detectmouseclick_attr ;
        bool m_has_movie_attr ;
        float m_movie_attr ;
        bool m_has_relid_attr ;
        ns_r::ST_RelationshipId* m_relid_attr ;
        bool m_has_id_attr ;
        ST_RelationshipId* m_id_attr ;
        bool m_has_pict_attr ;
        ST_RelationshipId* m_pict_attr ;
        bool m_has_href_attr ;
        ST_RelationshipId* m_href_attr ;

    }

    class CT_Path : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Path& default_instance() const;
        bool has_id_attr() const;
        void set_id_attr(const string& _id_attr );
        const string& id_attr() const;
        bool has_v_attr() const;
        void set_v_attr(const string& _v_attr );
        const string& v_attr() const;
        bool has_limo_attr() const;
        void set_limo_attr(const string& _limo_attr );
        const string& limo_attr() const;
        bool has_textboxrect_attr() const;
        void set_textboxrect_attr(const string& _textboxrect_attr );
        const string& textboxrect_attr() const;
        bool has_fillok_attr() const;
        void set_fillok_attr(const ns_s::ST_TrueFalse& _fillok_attr );
        const ns_s::ST_TrueFalse& fillok_attr() const;
        bool has_strokeok_attr() const;
        void set_strokeok_attr(const ns_s::ST_TrueFalse& _strokeok_attr );
        const ns_s::ST_TrueFalse& strokeok_attr() const;
        bool has_shadowok_attr() const;
        void set_shadowok_attr(const ns_s::ST_TrueFalse& _shadowok_attr );
        const ns_s::ST_TrueFalse& shadowok_attr() const;
        bool has_arrowok_attr() const;
        void set_arrowok_attr(const ns_s::ST_TrueFalse& _arrowok_attr );
        const ns_s::ST_TrueFalse& arrowok_attr() const;
        bool has_gradientshapeok_attr() const;
        void set_gradientshapeok_attr(const ns_s::ST_TrueFalse& _gradientshapeok_attr );
        const ns_s::ST_TrueFalse& gradientshapeok_attr() const;
        bool has_textpathok_attr() const;
        void set_textpathok_attr(const ns_s::ST_TrueFalse& _textpathok_attr );
        const ns_s::ST_TrueFalse& textpathok_attr() const;
        bool has_insetpenok_attr() const;
        void set_insetpenok_attr(const ns_s::ST_TrueFalse& _insetpenok_attr );
        const ns_s::ST_TrueFalse& insetpenok_attr() const;
        bool has_connecttype_attr() const;
        void set_connecttype_attr(const ST_ConnectType& _connecttype_attr );
        const ST_ConnectType& connecttype_attr() const;
        bool has_connectlocs_attr() const;
        void set_connectlocs_attr(const string& _connectlocs_attr );
        const string& connectlocs_attr() const;
        bool has_connectangles_attr() const;
        void set_connectangles_attr(const string& _connectangles_attr );
        const string& connectangles_attr() const;
        bool has_extrusionok_attr() const;
        void set_extrusionok_attr(const ns_s::ST_TrueFalse& _extrusionok_attr );
        const ns_s::ST_TrueFalse& extrusionok_attr() const;

    private:
        static CT_Path* default_instance_ ;
        bool m_has_id_attr ;
        string m_id_attr ;
        bool m_has_v_attr ;
        string m_v_attr ;
        bool m_has_limo_attr ;
        string m_limo_attr ;
        bool m_has_textboxrect_attr ;
        string m_textboxrect_attr ;
        bool m_has_fillok_attr ;
        ns_s::ST_TrueFalse* m_fillok_attr ;
        bool m_has_strokeok_attr ;
        ns_s::ST_TrueFalse* m_strokeok_attr ;
        bool m_has_shadowok_attr ;
        ns_s::ST_TrueFalse* m_shadowok_attr ;
        bool m_has_arrowok_attr ;
        ns_s::ST_TrueFalse* m_arrowok_attr ;
        bool m_has_gradientshapeok_attr ;
        ns_s::ST_TrueFalse* m_gradientshapeok_attr ;
        bool m_has_textpathok_attr ;
        ns_s::ST_TrueFalse* m_textpathok_attr ;
        bool m_has_insetpenok_attr ;
        ns_s::ST_TrueFalse* m_insetpenok_attr ;
        bool m_has_connecttype_attr ;
        ST_ConnectType* m_connecttype_attr ;
        bool m_has_connectlocs_attr ;
        string m_connectlocs_attr ;
        bool m_has_connectangles_attr ;
        string m_connectangles_attr ;
        bool m_has_extrusionok_attr ;
        ns_s::ST_TrueFalse* m_extrusionok_attr ;

    }

    class CT_Shadow : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Shadow& default_instance() const;
        bool has_id_attr() const;
        void set_id_attr(const string& _id_attr );
        const string& id_attr() const;
        bool has_on_attr() const;
        void set_on_attr(const ns_s::ST_TrueFalse& _on_attr );
        const ns_s::ST_TrueFalse& on_attr() const;
        bool has_type_attr() const;
        void set_type_attr(const ST_ShadowType& _type_attr );
        const ST_ShadowType& type_attr() const;
        bool has_obscured_attr() const;
        void set_obscured_attr(const ns_s::ST_TrueFalse& _obscured_attr );
        const ns_s::ST_TrueFalse& obscured_attr() const;
        bool has_color_attr() const;
        void set_color_attr(const ns_s::ST_ColorType& _color_attr );
        const ns_s::ST_ColorType& color_attr() const;
        bool has_opacity_attr() const;
        void set_opacity_attr(const string& _opacity_attr );
        const string& opacity_attr() const;
        bool has_offset_attr() const;
        void set_offset_attr(const string& _offset_attr );
        const string& offset_attr() const;
        bool has_color2_attr() const;
        void set_color2_attr(const ns_s::ST_ColorType& _color2_attr );
        const ns_s::ST_ColorType& color2_attr() const;
        bool has_offset2_attr() const;
        void set_offset2_attr(const string& _offset2_attr );
        const string& offset2_attr() const;
        bool has_origin_attr() const;
        void set_origin_attr(const string& _origin_attr );
        const string& origin_attr() const;
        bool has_matrix_attr() const;
        void set_matrix_attr(const string& _matrix_attr );
        const string& matrix_attr() const;

    private:
        static CT_Shadow* default_instance_ ;
        bool m_has_id_attr ;
        string m_id_attr ;
        bool m_has_on_attr ;
        ns_s::ST_TrueFalse* m_on_attr ;
        bool m_has_type_attr ;
        ST_ShadowType* m_type_attr ;
        bool m_has_obscured_attr ;
        ns_s::ST_TrueFalse* m_obscured_attr ;
        bool m_has_color_attr ;
        ns_s::ST_ColorType* m_color_attr ;
        bool m_has_opacity_attr ;
        string m_opacity_attr ;
        bool m_has_offset_attr ;
        string m_offset_attr ;
        bool m_has_color2_attr ;
        ns_s::ST_ColorType* m_color2_attr ;
        bool m_has_offset2_attr ;
        string m_offset2_attr ;
        bool m_has_origin_attr ;
        string m_origin_attr ;
        bool m_has_matrix_attr ;
        string m_matrix_attr ;

    }

    class CT_Stroke : public XSD::ComplexType{
    public:
        bool has_left() const;
        CT_StrokeChild* mutable_left();
        const CT_StrokeChild& left() const;
        bool has_top() const;
        CT_StrokeChild* mutable_top();
        const CT_StrokeChild& top() const;
        bool has_right() const;
        CT_StrokeChild* mutable_right();
        const CT_StrokeChild& right() const;
        bool has_bottom() const;
        CT_StrokeChild* mutable_bottom();
        const CT_StrokeChild& bottom() const;
        bool has_column() const;
        CT_StrokeChild* mutable_column();
        const CT_StrokeChild& column() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Stroke& default_instance() const;
        bool has_id_attr() const;
        void set_id_attr(const string& _id_attr );
        const string& id_attr() const;
        bool has_on_attr() const;
        void set_on_attr(const ns_s::ST_TrueFalse& _on_attr );
        const ns_s::ST_TrueFalse& on_attr() const;
        bool has_weight_attr() const;
        void set_weight_attr(const string& _weight_attr );
        const string& weight_attr() const;
        bool has_color_attr() const;
        void set_color_attr(const ns_s::ST_ColorType& _color_attr );
        const ns_s::ST_ColorType& color_attr() const;
        bool has_opacity_attr() const;
        void set_opacity_attr(const string& _opacity_attr );
        const string& opacity_attr() const;
        bool has_linestyle_attr() const;
        void set_linestyle_attr(const ST_StrokeLineStyle& _linestyle_attr );
        const ST_StrokeLineStyle& linestyle_attr() const;
        bool has_miterlimit_attr() const;
        void set_miterlimit_attr(const decimal& _miterlimit_attr );
        const decimal& miterlimit_attr() const;
        bool has_joinstyle_attr() const;
        void set_joinstyle_attr(const ST_StrokeJoinStyle& _joinstyle_attr );
        const ST_StrokeJoinStyle& joinstyle_attr() const;
        bool has_endcap_attr() const;
        void set_endcap_attr(const ST_StrokeEndCap& _endcap_attr );
        const ST_StrokeEndCap& endcap_attr() const;
        bool has_dashstyle_attr() const;
        void set_dashstyle_attr(const string& _dashstyle_attr );
        const string& dashstyle_attr() const;
        bool has_filltype_attr() const;
        void set_filltype_attr(const ST_FillType& _filltype_attr );
        const ST_FillType& filltype_attr() const;
        bool has_src_attr() const;
        void set_src_attr(const string& _src_attr );
        const string& src_attr() const;
        bool has_imageaspect_attr() const;
        void set_imageaspect_attr(const ST_ImageAspect& _imageaspect_attr );
        const ST_ImageAspect& imageaspect_attr() const;
        bool has_imagesize_attr() const;
        void set_imagesize_attr(const string& _imagesize_attr );
        const string& imagesize_attr() const;
        bool has_imagealignshape_attr() const;
        void set_imagealignshape_attr(const ns_s::ST_TrueFalse& _imagealignshape_attr );
        const ns_s::ST_TrueFalse& imagealignshape_attr() const;
        bool has_color2_attr() const;
        void set_color2_attr(const ns_s::ST_ColorType& _color2_attr );
        const ns_s::ST_ColorType& color2_attr() const;
        bool has_startarrow_attr() const;
        void set_startarrow_attr(const ST_StrokeArrowType& _startarrow_attr );
        const ST_StrokeArrowType& startarrow_attr() const;
        bool has_startarrowwidth_attr() const;
        void set_startarrowwidth_attr(const ST_StrokeArrowWidth& _startarrowwidth_attr );
        const ST_StrokeArrowWidth& startarrowwidth_attr() const;
        bool has_startarrowlength_attr() const;
        void set_startarrowlength_attr(const ST_StrokeArrowLength& _startarrowlength_attr );
        const ST_StrokeArrowLength& startarrowlength_attr() const;
        bool has_endarrow_attr() const;
        void set_endarrow_attr(const ST_StrokeArrowType& _endarrow_attr );
        const ST_StrokeArrowType& endarrow_attr() const;
        bool has_endarrowwidth_attr() const;
        void set_endarrowwidth_attr(const ST_StrokeArrowWidth& _endarrowwidth_attr );
        const ST_StrokeArrowWidth& endarrowwidth_attr() const;
        bool has_endarrowlength_attr() const;
        void set_endarrowlength_attr(const ST_StrokeArrowLength& _endarrowlength_attr );
        const ST_StrokeArrowLength& endarrowlength_attr() const;
        bool has_href_attr() const;
        void set_href_attr(const string& _href_attr );
        const string& href_attr() const;
        bool has_althref_attr() const;
        void set_althref_attr(const string& _althref_attr );
        const string& althref_attr() const;
        bool has_title_attr() const;
        void set_title_attr(const string& _title_attr );
        const string& title_attr() const;
        bool has_forcedash_attr() const;
        void set_forcedash_attr(const ns_s::ST_TrueFalse& _forcedash_attr );
        const ns_s::ST_TrueFalse& forcedash_attr() const;
        bool has_id_attr() const;
        void set_id_attr(const ST_RelationshipId& _id_attr );
        const ST_RelationshipId& id_attr() const;
        bool has_insetpen_attr() const;
        void set_insetpen_attr(const ns_s::ST_TrueFalse& _insetpen_attr );
        const ns_s::ST_TrueFalse& insetpen_attr() const;
        bool has_relid_attr() const;
        void set_relid_attr(const ns_r::ST_RelationshipId& _relid_attr );
        const ns_r::ST_RelationshipId& relid_attr() const;

    private:
        bool m_has_left ;
        CT_StrokeChild* m_left ;
        bool m_has_top ;
        CT_StrokeChild* m_top ;
        bool m_has_right ;
        CT_StrokeChild* m_right ;
        bool m_has_bottom ;
        CT_StrokeChild* m_bottom ;
        bool m_has_column ;
        CT_StrokeChild* m_column ;
        static CT_Stroke* default_instance_ ;
        bool m_has_id_attr ;
        string m_id_attr ;
        bool m_has_on_attr ;
        ns_s::ST_TrueFalse* m_on_attr ;
        bool m_has_weight_attr ;
        string m_weight_attr ;
        bool m_has_color_attr ;
        ns_s::ST_ColorType* m_color_attr ;
        bool m_has_opacity_attr ;
        string m_opacity_attr ;
        bool m_has_linestyle_attr ;
        ST_StrokeLineStyle* m_linestyle_attr ;
        bool m_has_miterlimit_attr ;
        decimal m_miterlimit_attr ;
        bool m_has_joinstyle_attr ;
        ST_StrokeJoinStyle* m_joinstyle_attr ;
        bool m_has_endcap_attr ;
        ST_StrokeEndCap* m_endcap_attr ;
        bool m_has_dashstyle_attr ;
        string m_dashstyle_attr ;
        bool m_has_filltype_attr ;
        ST_FillType* m_filltype_attr ;
        bool m_has_src_attr ;
        string m_src_attr ;
        bool m_has_imageaspect_attr ;
        ST_ImageAspect* m_imageaspect_attr ;
        bool m_has_imagesize_attr ;
        string m_imagesize_attr ;
        bool m_has_imagealignshape_attr ;
        ns_s::ST_TrueFalse* m_imagealignshape_attr ;
        bool m_has_color2_attr ;
        ns_s::ST_ColorType* m_color2_attr ;
        bool m_has_startarrow_attr ;
        ST_StrokeArrowType* m_startarrow_attr ;
        bool m_has_startarrowwidth_attr ;
        ST_StrokeArrowWidth* m_startarrowwidth_attr ;
        bool m_has_startarrowlength_attr ;
        ST_StrokeArrowLength* m_startarrowlength_attr ;
        bool m_has_endarrow_attr ;
        ST_StrokeArrowType* m_endarrow_attr ;
        bool m_has_endarrowwidth_attr ;
        ST_StrokeArrowWidth* m_endarrowwidth_attr ;
        bool m_has_endarrowlength_attr ;
        ST_StrokeArrowLength* m_endarrowlength_attr ;
        bool m_has_href_attr ;
        string m_href_attr ;
        bool m_has_althref_attr ;
        string m_althref_attr ;
        bool m_has_title_attr ;
        string m_title_attr ;
        bool m_has_forcedash_attr ;
        ns_s::ST_TrueFalse* m_forcedash_attr ;
        bool m_has_id_attr ;
        ST_RelationshipId* m_id_attr ;
        bool m_has_insetpen_attr ;
        ns_s::ST_TrueFalse* m_insetpen_attr ;
        bool m_has_relid_attr ;
        ns_r::ST_RelationshipId* m_relid_attr ;

    }

    class CT_Textbox : public XSD::ComplexType{
    public:
        bool has_txbxContent() const;
        CT_TxbxContent* mutable_txbxContent();
        const CT_TxbxContent& txbxContent() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Textbox& default_instance() const;
        bool has_id_attr() const;
        void set_id_attr(const string& _id_attr );
        const string& id_attr() const;
        bool has_style_attr() const;
        void set_style_attr(const string& _style_attr );
        const string& style_attr() const;
        bool has_inset_attr() const;
        void set_inset_attr(const string& _inset_attr );
        const string& inset_attr() const;
        bool has_singleclick_attr() const;
        void set_singleclick_attr(const ns_s::ST_TrueFalse& _singleclick_attr );
        const ns_s::ST_TrueFalse& singleclick_attr() const;
        bool has_insetmode_attr() const;
        void set_insetmode_attr(const ST_InsetMode& _insetmode_attr );
        const ST_InsetMode& insetmode_attr() const;

    private:
        bool m_has_txbxContent ;
        CT_TxbxContent* m_txbxContent ;
        static CT_Textbox* default_instance_ ;
        bool m_has_id_attr ;
        string m_id_attr ;
        bool m_has_style_attr ;
        string m_style_attr ;
        bool m_has_inset_attr ;
        string m_inset_attr ;
        bool m_has_singleclick_attr ;
        ns_s::ST_TrueFalse* m_singleclick_attr ;
        bool m_has_insetmode_attr ;
        ST_InsetMode* m_insetmode_attr ;

    }

    class CT_TextPath : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TextPath& default_instance() const;
        bool has_id_attr() const;
        void set_id_attr(const string& _id_attr );
        const string& id_attr() const;
        bool has_style_attr() const;
        void set_style_attr(const string& _style_attr );
        const string& style_attr() const;
        bool has_on_attr() const;
        void set_on_attr(const ns_s::ST_TrueFalse& _on_attr );
        const ns_s::ST_TrueFalse& on_attr() const;
        bool has_fitshape_attr() const;
        void set_fitshape_attr(const ns_s::ST_TrueFalse& _fitshape_attr );
        const ns_s::ST_TrueFalse& fitshape_attr() const;
        bool has_fitpath_attr() const;
        void set_fitpath_attr(const ns_s::ST_TrueFalse& _fitpath_attr );
        const ns_s::ST_TrueFalse& fitpath_attr() const;
        bool has_trim_attr() const;
        void set_trim_attr(const ns_s::ST_TrueFalse& _trim_attr );
        const ns_s::ST_TrueFalse& trim_attr() const;
        bool has_xscale_attr() const;
        void set_xscale_attr(const ns_s::ST_TrueFalse& _xscale_attr );
        const ns_s::ST_TrueFalse& xscale_attr() const;
        bool has_string_attr() const;
        void set_string_attr(const string& _string_attr );
        const string& string_attr() const;

    private:
        static CT_TextPath* default_instance_ ;
        bool m_has_id_attr ;
        string m_id_attr ;
        bool m_has_style_attr ;
        string m_style_attr ;
        bool m_has_on_attr ;
        ns_s::ST_TrueFalse* m_on_attr ;
        bool m_has_fitshape_attr ;
        ns_s::ST_TrueFalse* m_fitshape_attr ;
        bool m_has_fitpath_attr ;
        ns_s::ST_TrueFalse* m_fitpath_attr ;
        bool m_has_trim_attr ;
        ns_s::ST_TrueFalse* m_trim_attr ;
        bool m_has_xscale_attr ;
        ns_s::ST_TrueFalse* m_xscale_attr ;
        bool m_has_string_attr ;
        string m_string_attr ;

    }

    class CT_Arc : public XSD::ComplexType{
    public:
        CT_Path* add_path();
        CT_Formulas* add_formulas();
        CT_Handles* add_handles();
        CT_Fill* add_fill();
        CT_Stroke* add_stroke();
        CT_Shadow* add_shadow();
        CT_Textbox* add_textbox();
        CT_TextPath* add_textpath();
        CT_ImageData* add_imagedata();
        CT_Skew* add_skew();
        CT_Extrusion* add_extrusion();
        CT_Callout* add_callout();
        CT_Lock* add_lock();
        CT_ClipPath* add_clippath();
        CT_SignatureLine* add_signatureline();
        CT_Wrap* add_wrap();
        CT_AnchorLock* add_anchorlock();
        CT_Border* add_bordertop();
        CT_Border* add_borderbottom();
        CT_Border* add_borderleft();
        CT_Border* add_borderright();
        CT_ClientData* add_ClientData();
        CT_Rel* add_textdata();
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Arc& default_instance() const;
        bool has_startAngle_attr() const;
        void set_startAngle_attr(const decimal& _startAngle_attr );
        const decimal& startAngle_attr() const;
        bool has_endAngle_attr() const;
        void set_endAngle_attr(const decimal& _endAngle_attr );
        const decimal& endAngle_attr() const;

    private:
        vector<ChildGroup_1*> m_childGroupList_1 ;
        static CT_Arc* default_instance_ ;
        bool m_has_startAngle_attr ;
        decimal m_startAngle_attr ;
        bool m_has_endAngle_attr ;
        decimal m_endAngle_attr ;
        class ChildGroup_1{
        public:
            bool has_path() const;
            CT_Path* mutable_path();
            const CT_Path& path() const;
            bool has_formulas() const;
            CT_Formulas* mutable_formulas();
            const CT_Formulas& formulas() const;
            bool has_handles() const;
            CT_Handles* mutable_handles();
            const CT_Handles& handles() const;
            bool has_fill() const;
            CT_Fill* mutable_fill();
            const CT_Fill& fill() const;
            bool has_stroke() const;
            CT_Stroke* mutable_stroke();
            const CT_Stroke& stroke() const;
            bool has_shadow() const;
            CT_Shadow* mutable_shadow();
            const CT_Shadow& shadow() const;
            bool has_textbox() const;
            CT_Textbox* mutable_textbox();
            const CT_Textbox& textbox() const;
            bool has_textpath() const;
            CT_TextPath* mutable_textpath();
            const CT_TextPath& textpath() const;
            bool has_imagedata() const;
            CT_ImageData* mutable_imagedata();
            const CT_ImageData& imagedata() const;
            bool has_skew() const;
            CT_Skew* mutable_skew();
            const CT_Skew& skew() const;
            bool has_extrusion() const;
            CT_Extrusion* mutable_extrusion();
            const CT_Extrusion& extrusion() const;
            bool has_callout() const;
            CT_Callout* mutable_callout();
            const CT_Callout& callout() const;
            bool has_lock() const;
            CT_Lock* mutable_lock();
            const CT_Lock& lock() const;
            bool has_clippath() const;
            CT_ClipPath* mutable_clippath();
            const CT_ClipPath& clippath() const;
            bool has_signatureline() const;
            CT_SignatureLine* mutable_signatureline();
            const CT_SignatureLine& signatureline() const;
            bool has_wrap() const;
            CT_Wrap* mutable_wrap();
            const CT_Wrap& wrap() const;
            bool has_anchorlock() const;
            CT_AnchorLock* mutable_anchorlock();
            const CT_AnchorLock& anchorlock() const;
            bool has_bordertop() const;
            CT_Border* mutable_bordertop();
            const CT_Border& bordertop() const;
            bool has_borderbottom() const;
            CT_Border* mutable_borderbottom();
            const CT_Border& borderbottom() const;
            bool has_borderleft() const;
            CT_Border* mutable_borderleft();
            const CT_Border& borderleft() const;
            bool has_borderright() const;
            CT_Border* mutable_borderright();
            const CT_Border& borderright() const;
            bool has_ClientData() const;
            CT_ClientData* mutable_ClientData();
            const CT_ClientData& ClientData() const;
            bool has_textdata() const;
            CT_Rel* mutable_textdata();
            const CT_Rel& textdata() const;

        private:
            bool m_has_path ;
            CT_Path* m_path ;
            bool m_has_formulas ;
            CT_Formulas* m_formulas ;
            bool m_has_handles ;
            CT_Handles* m_handles ;
            bool m_has_fill ;
            CT_Fill* m_fill ;
            bool m_has_stroke ;
            CT_Stroke* m_stroke ;
            bool m_has_shadow ;
            CT_Shadow* m_shadow ;
            bool m_has_textbox ;
            CT_Textbox* m_textbox ;
            bool m_has_textpath ;
            CT_TextPath* m_textpath ;
            bool m_has_imagedata ;
            CT_ImageData* m_imagedata ;
            bool m_has_skew ;
            CT_Skew* m_skew ;
            bool m_has_extrusion ;
            CT_Extrusion* m_extrusion ;
            bool m_has_callout ;
            CT_Callout* m_callout ;
            bool m_has_lock ;
            CT_Lock* m_lock ;
            bool m_has_clippath ;
            CT_ClipPath* m_clippath ;
            bool m_has_signatureline ;
            CT_SignatureLine* m_signatureline ;
            bool m_has_wrap ;
            CT_Wrap* m_wrap ;
            bool m_has_anchorlock ;
            CT_AnchorLock* m_anchorlock ;
            bool m_has_bordertop ;
            CT_Border* m_bordertop ;
            bool m_has_borderbottom ;
            CT_Border* m_borderbottom ;
            bool m_has_borderleft ;
            CT_Border* m_borderleft ;
            bool m_has_borderright ;
            CT_Border* m_borderright ;
            bool m_has_ClientData ;
            CT_ClientData* m_ClientData ;
            bool m_has_textdata ;
            CT_Rel* m_textdata ;

        }


    }

    class CT_Curve : public XSD::ComplexType{
    public:
        CT_Path* add_path();
        CT_Formulas* add_formulas();
        CT_Handles* add_handles();
        CT_Fill* add_fill();
        CT_Stroke* add_stroke();
        CT_Shadow* add_shadow();
        CT_Textbox* add_textbox();
        CT_TextPath* add_textpath();
        CT_ImageData* add_imagedata();
        CT_Skew* add_skew();
        CT_Extrusion* add_extrusion();
        CT_Callout* add_callout();
        CT_Lock* add_lock();
        CT_ClipPath* add_clippath();
        CT_SignatureLine* add_signatureline();
        CT_Wrap* add_wrap();
        CT_AnchorLock* add_anchorlock();
        CT_Border* add_bordertop();
        CT_Border* add_borderbottom();
        CT_Border* add_borderleft();
        CT_Border* add_borderright();
        CT_ClientData* add_ClientData();
        CT_Rel* add_textdata();
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Curve& default_instance() const;
        bool has_from_attr() const;
        void set_from_attr(const string& _from_attr );
        const string& from_attr() const;
        bool has_control1_attr() const;
        void set_control1_attr(const string& _control1_attr );
        const string& control1_attr() const;
        bool has_control2_attr() const;
        void set_control2_attr(const string& _control2_attr );
        const string& control2_attr() const;
        bool has_to_attr() const;
        void set_to_attr(const string& _to_attr );
        const string& to_attr() const;

    private:
        vector<ChildGroup_1*> m_childGroupList_1 ;
        static CT_Curve* default_instance_ ;
        bool m_has_from_attr ;
        string m_from_attr ;
        bool m_has_control1_attr ;
        string m_control1_attr ;
        bool m_has_control2_attr ;
        string m_control2_attr ;
        bool m_has_to_attr ;
        string m_to_attr ;
        class ChildGroup_1{
        public:
            bool has_path() const;
            CT_Path* mutable_path();
            const CT_Path& path() const;
            bool has_formulas() const;
            CT_Formulas* mutable_formulas();
            const CT_Formulas& formulas() const;
            bool has_handles() const;
            CT_Handles* mutable_handles();
            const CT_Handles& handles() const;
            bool has_fill() const;
            CT_Fill* mutable_fill();
            const CT_Fill& fill() const;
            bool has_stroke() const;
            CT_Stroke* mutable_stroke();
            const CT_Stroke& stroke() const;
            bool has_shadow() const;
            CT_Shadow* mutable_shadow();
            const CT_Shadow& shadow() const;
            bool has_textbox() const;
            CT_Textbox* mutable_textbox();
            const CT_Textbox& textbox() const;
            bool has_textpath() const;
            CT_TextPath* mutable_textpath();
            const CT_TextPath& textpath() const;
            bool has_imagedata() const;
            CT_ImageData* mutable_imagedata();
            const CT_ImageData& imagedata() const;
            bool has_skew() const;
            CT_Skew* mutable_skew();
            const CT_Skew& skew() const;
            bool has_extrusion() const;
            CT_Extrusion* mutable_extrusion();
            const CT_Extrusion& extrusion() const;
            bool has_callout() const;
            CT_Callout* mutable_callout();
            const CT_Callout& callout() const;
            bool has_lock() const;
            CT_Lock* mutable_lock();
            const CT_Lock& lock() const;
            bool has_clippath() const;
            CT_ClipPath* mutable_clippath();
            const CT_ClipPath& clippath() const;
            bool has_signatureline() const;
            CT_SignatureLine* mutable_signatureline();
            const CT_SignatureLine& signatureline() const;
            bool has_wrap() const;
            CT_Wrap* mutable_wrap();
            const CT_Wrap& wrap() const;
            bool has_anchorlock() const;
            CT_AnchorLock* mutable_anchorlock();
            const CT_AnchorLock& anchorlock() const;
            bool has_bordertop() const;
            CT_Border* mutable_bordertop();
            const CT_Border& bordertop() const;
            bool has_borderbottom() const;
            CT_Border* mutable_borderbottom();
            const CT_Border& borderbottom() const;
            bool has_borderleft() const;
            CT_Border* mutable_borderleft();
            const CT_Border& borderleft() const;
            bool has_borderright() const;
            CT_Border* mutable_borderright();
            const CT_Border& borderright() const;
            bool has_ClientData() const;
            CT_ClientData* mutable_ClientData();
            const CT_ClientData& ClientData() const;
            bool has_textdata() const;
            CT_Rel* mutable_textdata();
            const CT_Rel& textdata() const;

        private:
            bool m_has_path ;
            CT_Path* m_path ;
            bool m_has_formulas ;
            CT_Formulas* m_formulas ;
            bool m_has_handles ;
            CT_Handles* m_handles ;
            bool m_has_fill ;
            CT_Fill* m_fill ;
            bool m_has_stroke ;
            CT_Stroke* m_stroke ;
            bool m_has_shadow ;
            CT_Shadow* m_shadow ;
            bool m_has_textbox ;
            CT_Textbox* m_textbox ;
            bool m_has_textpath ;
            CT_TextPath* m_textpath ;
            bool m_has_imagedata ;
            CT_ImageData* m_imagedata ;
            bool m_has_skew ;
            CT_Skew* m_skew ;
            bool m_has_extrusion ;
            CT_Extrusion* m_extrusion ;
            bool m_has_callout ;
            CT_Callout* m_callout ;
            bool m_has_lock ;
            CT_Lock* m_lock ;
            bool m_has_clippath ;
            CT_ClipPath* m_clippath ;
            bool m_has_signatureline ;
            CT_SignatureLine* m_signatureline ;
            bool m_has_wrap ;
            CT_Wrap* m_wrap ;
            bool m_has_anchorlock ;
            CT_AnchorLock* m_anchorlock ;
            bool m_has_bordertop ;
            CT_Border* m_bordertop ;
            bool m_has_borderbottom ;
            CT_Border* m_borderbottom ;
            bool m_has_borderleft ;
            CT_Border* m_borderleft ;
            bool m_has_borderright ;
            CT_Border* m_borderright ;
            bool m_has_ClientData ;
            CT_ClientData* m_ClientData ;
            bool m_has_textdata ;
            CT_Rel* m_textdata ;

        }


    }

    class CT_Image : public XSD::ComplexType{
    public:
        CT_Path* add_path();
        CT_Formulas* add_formulas();
        CT_Handles* add_handles();
        CT_Fill* add_fill();
        CT_Stroke* add_stroke();
        CT_Shadow* add_shadow();
        CT_Textbox* add_textbox();
        CT_TextPath* add_textpath();
        CT_ImageData* add_imagedata();
        CT_Skew* add_skew();
        CT_Extrusion* add_extrusion();
        CT_Callout* add_callout();
        CT_Lock* add_lock();
        CT_ClipPath* add_clippath();
        CT_SignatureLine* add_signatureline();
        CT_Wrap* add_wrap();
        CT_AnchorLock* add_anchorlock();
        CT_Border* add_bordertop();
        CT_Border* add_borderbottom();
        CT_Border* add_borderleft();
        CT_Border* add_borderright();
        CT_ClientData* add_ClientData();
        CT_Rel* add_textdata();
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Image& default_instance() const;
        bool has_src_attr() const;
        void set_src_attr(const string& _src_attr );
        const string& src_attr() const;
        bool has_cropleft_attr() const;
        void set_cropleft_attr(const string& _cropleft_attr );
        const string& cropleft_attr() const;
        bool has_croptop_attr() const;
        void set_croptop_attr(const string& _croptop_attr );
        const string& croptop_attr() const;
        bool has_cropright_attr() const;
        void set_cropright_attr(const string& _cropright_attr );
        const string& cropright_attr() const;
        bool has_cropbottom_attr() const;
        void set_cropbottom_attr(const string& _cropbottom_attr );
        const string& cropbottom_attr() const;
        bool has_gain_attr() const;
        void set_gain_attr(const string& _gain_attr );
        const string& gain_attr() const;
        bool has_blacklevel_attr() const;
        void set_blacklevel_attr(const string& _blacklevel_attr );
        const string& blacklevel_attr() const;
        bool has_gamma_attr() const;
        void set_gamma_attr(const string& _gamma_attr );
        const string& gamma_attr() const;
        bool has_grayscale_attr() const;
        void set_grayscale_attr(const ns_s::ST_TrueFalse& _grayscale_attr );
        const ns_s::ST_TrueFalse& grayscale_attr() const;
        bool has_bilevel_attr() const;
        void set_bilevel_attr(const ns_s::ST_TrueFalse& _bilevel_attr );
        const ns_s::ST_TrueFalse& bilevel_attr() const;

    private:
        vector<ChildGroup_1*> m_childGroupList_1 ;
        static CT_Image* default_instance_ ;
        bool m_has_src_attr ;
        string m_src_attr ;
        bool m_has_cropleft_attr ;
        string m_cropleft_attr ;
        bool m_has_croptop_attr ;
        string m_croptop_attr ;
        bool m_has_cropright_attr ;
        string m_cropright_attr ;
        bool m_has_cropbottom_attr ;
        string m_cropbottom_attr ;
        bool m_has_gain_attr ;
        string m_gain_attr ;
        bool m_has_blacklevel_attr ;
        string m_blacklevel_attr ;
        bool m_has_gamma_attr ;
        string m_gamma_attr ;
        bool m_has_grayscale_attr ;
        ns_s::ST_TrueFalse* m_grayscale_attr ;
        bool m_has_bilevel_attr ;
        ns_s::ST_TrueFalse* m_bilevel_attr ;
        class ChildGroup_1{
        public:
            bool has_path() const;
            CT_Path* mutable_path();
            const CT_Path& path() const;
            bool has_formulas() const;
            CT_Formulas* mutable_formulas();
            const CT_Formulas& formulas() const;
            bool has_handles() const;
            CT_Handles* mutable_handles();
            const CT_Handles& handles() const;
            bool has_fill() const;
            CT_Fill* mutable_fill();
            const CT_Fill& fill() const;
            bool has_stroke() const;
            CT_Stroke* mutable_stroke();
            const CT_Stroke& stroke() const;
            bool has_shadow() const;
            CT_Shadow* mutable_shadow();
            const CT_Shadow& shadow() const;
            bool has_textbox() const;
            CT_Textbox* mutable_textbox();
            const CT_Textbox& textbox() const;
            bool has_textpath() const;
            CT_TextPath* mutable_textpath();
            const CT_TextPath& textpath() const;
            bool has_imagedata() const;
            CT_ImageData* mutable_imagedata();
            const CT_ImageData& imagedata() const;
            bool has_skew() const;
            CT_Skew* mutable_skew();
            const CT_Skew& skew() const;
            bool has_extrusion() const;
            CT_Extrusion* mutable_extrusion();
            const CT_Extrusion& extrusion() const;
            bool has_callout() const;
            CT_Callout* mutable_callout();
            const CT_Callout& callout() const;
            bool has_lock() const;
            CT_Lock* mutable_lock();
            const CT_Lock& lock() const;
            bool has_clippath() const;
            CT_ClipPath* mutable_clippath();
            const CT_ClipPath& clippath() const;
            bool has_signatureline() const;
            CT_SignatureLine* mutable_signatureline();
            const CT_SignatureLine& signatureline() const;
            bool has_wrap() const;
            CT_Wrap* mutable_wrap();
            const CT_Wrap& wrap() const;
            bool has_anchorlock() const;
            CT_AnchorLock* mutable_anchorlock();
            const CT_AnchorLock& anchorlock() const;
            bool has_bordertop() const;
            CT_Border* mutable_bordertop();
            const CT_Border& bordertop() const;
            bool has_borderbottom() const;
            CT_Border* mutable_borderbottom();
            const CT_Border& borderbottom() const;
            bool has_borderleft() const;
            CT_Border* mutable_borderleft();
            const CT_Border& borderleft() const;
            bool has_borderright() const;
            CT_Border* mutable_borderright();
            const CT_Border& borderright() const;
            bool has_ClientData() const;
            CT_ClientData* mutable_ClientData();
            const CT_ClientData& ClientData() const;
            bool has_textdata() const;
            CT_Rel* mutable_textdata();
            const CT_Rel& textdata() const;

        private:
            bool m_has_path ;
            CT_Path* m_path ;
            bool m_has_formulas ;
            CT_Formulas* m_formulas ;
            bool m_has_handles ;
            CT_Handles* m_handles ;
            bool m_has_fill ;
            CT_Fill* m_fill ;
            bool m_has_stroke ;
            CT_Stroke* m_stroke ;
            bool m_has_shadow ;
            CT_Shadow* m_shadow ;
            bool m_has_textbox ;
            CT_Textbox* m_textbox ;
            bool m_has_textpath ;
            CT_TextPath* m_textpath ;
            bool m_has_imagedata ;
            CT_ImageData* m_imagedata ;
            bool m_has_skew ;
            CT_Skew* m_skew ;
            bool m_has_extrusion ;
            CT_Extrusion* m_extrusion ;
            bool m_has_callout ;
            CT_Callout* m_callout ;
            bool m_has_lock ;
            CT_Lock* m_lock ;
            bool m_has_clippath ;
            CT_ClipPath* m_clippath ;
            bool m_has_signatureline ;
            CT_SignatureLine* m_signatureline ;
            bool m_has_wrap ;
            CT_Wrap* m_wrap ;
            bool m_has_anchorlock ;
            CT_AnchorLock* m_anchorlock ;
            bool m_has_bordertop ;
            CT_Border* m_bordertop ;
            bool m_has_borderbottom ;
            CT_Border* m_borderbottom ;
            bool m_has_borderleft ;
            CT_Border* m_borderleft ;
            bool m_has_borderright ;
            CT_Border* m_borderright ;
            bool m_has_ClientData ;
            CT_ClientData* m_ClientData ;
            bool m_has_textdata ;
            CT_Rel* m_textdata ;

        }


    }

    class CT_Line : public XSD::ComplexType{
    public:
        CT_Path* add_path();
        CT_Formulas* add_formulas();
        CT_Handles* add_handles();
        CT_Fill* add_fill();
        CT_Stroke* add_stroke();
        CT_Shadow* add_shadow();
        CT_Textbox* add_textbox();
        CT_TextPath* add_textpath();
        CT_ImageData* add_imagedata();
        CT_Skew* add_skew();
        CT_Extrusion* add_extrusion();
        CT_Callout* add_callout();
        CT_Lock* add_lock();
        CT_ClipPath* add_clippath();
        CT_SignatureLine* add_signatureline();
        CT_Wrap* add_wrap();
        CT_AnchorLock* add_anchorlock();
        CT_Border* add_bordertop();
        CT_Border* add_borderbottom();
        CT_Border* add_borderleft();
        CT_Border* add_borderright();
        CT_ClientData* add_ClientData();
        CT_Rel* add_textdata();
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Line& default_instance() const;
        bool has_from_attr() const;
        void set_from_attr(const string& _from_attr );
        const string& from_attr() const;
        bool has_to_attr() const;
        void set_to_attr(const string& _to_attr );
        const string& to_attr() const;

    private:
        vector<ChildGroup_1*> m_childGroupList_1 ;
        static CT_Line* default_instance_ ;
        bool m_has_from_attr ;
        string m_from_attr ;
        bool m_has_to_attr ;
        string m_to_attr ;
        class ChildGroup_1{
        public:
            bool has_path() const;
            CT_Path* mutable_path();
            const CT_Path& path() const;
            bool has_formulas() const;
            CT_Formulas* mutable_formulas();
            const CT_Formulas& formulas() const;
            bool has_handles() const;
            CT_Handles* mutable_handles();
            const CT_Handles& handles() const;
            bool has_fill() const;
            CT_Fill* mutable_fill();
            const CT_Fill& fill() const;
            bool has_stroke() const;
            CT_Stroke* mutable_stroke();
            const CT_Stroke& stroke() const;
            bool has_shadow() const;
            CT_Shadow* mutable_shadow();
            const CT_Shadow& shadow() const;
            bool has_textbox() const;
            CT_Textbox* mutable_textbox();
            const CT_Textbox& textbox() const;
            bool has_textpath() const;
            CT_TextPath* mutable_textpath();
            const CT_TextPath& textpath() const;
            bool has_imagedata() const;
            CT_ImageData* mutable_imagedata();
            const CT_ImageData& imagedata() const;
            bool has_skew() const;
            CT_Skew* mutable_skew();
            const CT_Skew& skew() const;
            bool has_extrusion() const;
            CT_Extrusion* mutable_extrusion();
            const CT_Extrusion& extrusion() const;
            bool has_callout() const;
            CT_Callout* mutable_callout();
            const CT_Callout& callout() const;
            bool has_lock() const;
            CT_Lock* mutable_lock();
            const CT_Lock& lock() const;
            bool has_clippath() const;
            CT_ClipPath* mutable_clippath();
            const CT_ClipPath& clippath() const;
            bool has_signatureline() const;
            CT_SignatureLine* mutable_signatureline();
            const CT_SignatureLine& signatureline() const;
            bool has_wrap() const;
            CT_Wrap* mutable_wrap();
            const CT_Wrap& wrap() const;
            bool has_anchorlock() const;
            CT_AnchorLock* mutable_anchorlock();
            const CT_AnchorLock& anchorlock() const;
            bool has_bordertop() const;
            CT_Border* mutable_bordertop();
            const CT_Border& bordertop() const;
            bool has_borderbottom() const;
            CT_Border* mutable_borderbottom();
            const CT_Border& borderbottom() const;
            bool has_borderleft() const;
            CT_Border* mutable_borderleft();
            const CT_Border& borderleft() const;
            bool has_borderright() const;
            CT_Border* mutable_borderright();
            const CT_Border& borderright() const;
            bool has_ClientData() const;
            CT_ClientData* mutable_ClientData();
            const CT_ClientData& ClientData() const;
            bool has_textdata() const;
            CT_Rel* mutable_textdata();
            const CT_Rel& textdata() const;

        private:
            bool m_has_path ;
            CT_Path* m_path ;
            bool m_has_formulas ;
            CT_Formulas* m_formulas ;
            bool m_has_handles ;
            CT_Handles* m_handles ;
            bool m_has_fill ;
            CT_Fill* m_fill ;
            bool m_has_stroke ;
            CT_Stroke* m_stroke ;
            bool m_has_shadow ;
            CT_Shadow* m_shadow ;
            bool m_has_textbox ;
            CT_Textbox* m_textbox ;
            bool m_has_textpath ;
            CT_TextPath* m_textpath ;
            bool m_has_imagedata ;
            CT_ImageData* m_imagedata ;
            bool m_has_skew ;
            CT_Skew* m_skew ;
            bool m_has_extrusion ;
            CT_Extrusion* m_extrusion ;
            bool m_has_callout ;
            CT_Callout* m_callout ;
            bool m_has_lock ;
            CT_Lock* m_lock ;
            bool m_has_clippath ;
            CT_ClipPath* m_clippath ;
            bool m_has_signatureline ;
            CT_SignatureLine* m_signatureline ;
            bool m_has_wrap ;
            CT_Wrap* m_wrap ;
            bool m_has_anchorlock ;
            CT_AnchorLock* m_anchorlock ;
            bool m_has_bordertop ;
            CT_Border* m_bordertop ;
            bool m_has_borderbottom ;
            CT_Border* m_borderbottom ;
            bool m_has_borderleft ;
            CT_Border* m_borderleft ;
            bool m_has_borderright ;
            CT_Border* m_borderright ;
            bool m_has_ClientData ;
            CT_ClientData* m_ClientData ;
            bool m_has_textdata ;
            CT_Rel* m_textdata ;

        }


    }

    class CT_Oval : public XSD::ComplexType{
    public:
        CT_Path* add_path();
        CT_Formulas* add_formulas();
        CT_Handles* add_handles();
        CT_Fill* add_fill();
        CT_Stroke* add_stroke();
        CT_Shadow* add_shadow();
        CT_Textbox* add_textbox();
        CT_TextPath* add_textpath();
        CT_ImageData* add_imagedata();
        CT_Skew* add_skew();
        CT_Extrusion* add_extrusion();
        CT_Callout* add_callout();
        CT_Lock* add_lock();
        CT_ClipPath* add_clippath();
        CT_SignatureLine* add_signatureline();
        CT_Wrap* add_wrap();
        CT_AnchorLock* add_anchorlock();
        CT_Border* add_bordertop();
        CT_Border* add_borderbottom();
        CT_Border* add_borderleft();
        CT_Border* add_borderright();
        CT_ClientData* add_ClientData();
        CT_Rel* add_textdata();
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Oval& default_instance() const;

    private:
        vector<ChildGroup_1*> m_childGroupList_1 ;
        static CT_Oval* default_instance_ ;
        class ChildGroup_1{
        public:
            bool has_path() const;
            CT_Path* mutable_path();
            const CT_Path& path() const;
            bool has_formulas() const;
            CT_Formulas* mutable_formulas();
            const CT_Formulas& formulas() const;
            bool has_handles() const;
            CT_Handles* mutable_handles();
            const CT_Handles& handles() const;
            bool has_fill() const;
            CT_Fill* mutable_fill();
            const CT_Fill& fill() const;
            bool has_stroke() const;
            CT_Stroke* mutable_stroke();
            const CT_Stroke& stroke() const;
            bool has_shadow() const;
            CT_Shadow* mutable_shadow();
            const CT_Shadow& shadow() const;
            bool has_textbox() const;
            CT_Textbox* mutable_textbox();
            const CT_Textbox& textbox() const;
            bool has_textpath() const;
            CT_TextPath* mutable_textpath();
            const CT_TextPath& textpath() const;
            bool has_imagedata() const;
            CT_ImageData* mutable_imagedata();
            const CT_ImageData& imagedata() const;
            bool has_skew() const;
            CT_Skew* mutable_skew();
            const CT_Skew& skew() const;
            bool has_extrusion() const;
            CT_Extrusion* mutable_extrusion();
            const CT_Extrusion& extrusion() const;
            bool has_callout() const;
            CT_Callout* mutable_callout();
            const CT_Callout& callout() const;
            bool has_lock() const;
            CT_Lock* mutable_lock();
            const CT_Lock& lock() const;
            bool has_clippath() const;
            CT_ClipPath* mutable_clippath();
            const CT_ClipPath& clippath() const;
            bool has_signatureline() const;
            CT_SignatureLine* mutable_signatureline();
            const CT_SignatureLine& signatureline() const;
            bool has_wrap() const;
            CT_Wrap* mutable_wrap();
            const CT_Wrap& wrap() const;
            bool has_anchorlock() const;
            CT_AnchorLock* mutable_anchorlock();
            const CT_AnchorLock& anchorlock() const;
            bool has_bordertop() const;
            CT_Border* mutable_bordertop();
            const CT_Border& bordertop() const;
            bool has_borderbottom() const;
            CT_Border* mutable_borderbottom();
            const CT_Border& borderbottom() const;
            bool has_borderleft() const;
            CT_Border* mutable_borderleft();
            const CT_Border& borderleft() const;
            bool has_borderright() const;
            CT_Border* mutable_borderright();
            const CT_Border& borderright() const;
            bool has_ClientData() const;
            CT_ClientData* mutable_ClientData();
            const CT_ClientData& ClientData() const;
            bool has_textdata() const;
            CT_Rel* mutable_textdata();
            const CT_Rel& textdata() const;

        private:
            bool m_has_path ;
            CT_Path* m_path ;
            bool m_has_formulas ;
            CT_Formulas* m_formulas ;
            bool m_has_handles ;
            CT_Handles* m_handles ;
            bool m_has_fill ;
            CT_Fill* m_fill ;
            bool m_has_stroke ;
            CT_Stroke* m_stroke ;
            bool m_has_shadow ;
            CT_Shadow* m_shadow ;
            bool m_has_textbox ;
            CT_Textbox* m_textbox ;
            bool m_has_textpath ;
            CT_TextPath* m_textpath ;
            bool m_has_imagedata ;
            CT_ImageData* m_imagedata ;
            bool m_has_skew ;
            CT_Skew* m_skew ;
            bool m_has_extrusion ;
            CT_Extrusion* m_extrusion ;
            bool m_has_callout ;
            CT_Callout* m_callout ;
            bool m_has_lock ;
            CT_Lock* m_lock ;
            bool m_has_clippath ;
            CT_ClipPath* m_clippath ;
            bool m_has_signatureline ;
            CT_SignatureLine* m_signatureline ;
            bool m_has_wrap ;
            CT_Wrap* m_wrap ;
            bool m_has_anchorlock ;
            CT_AnchorLock* m_anchorlock ;
            bool m_has_bordertop ;
            CT_Border* m_bordertop ;
            bool m_has_borderbottom ;
            CT_Border* m_borderbottom ;
            bool m_has_borderleft ;
            CT_Border* m_borderleft ;
            bool m_has_borderright ;
            CT_Border* m_borderright ;
            bool m_has_ClientData ;
            CT_ClientData* m_ClientData ;
            bool m_has_textdata ;
            CT_Rel* m_textdata ;

        }


    }

    class CT_PolyLine : public XSD::ComplexType{
    public:
        CT_Path* add_path();
        CT_Formulas* add_formulas();
        CT_Handles* add_handles();
        CT_Fill* add_fill();
        CT_Stroke* add_stroke();
        CT_Shadow* add_shadow();
        CT_Textbox* add_textbox();
        CT_TextPath* add_textpath();
        CT_ImageData* add_imagedata();
        CT_Skew* add_skew();
        CT_Extrusion* add_extrusion();
        CT_Callout* add_callout();
        CT_Lock* add_lock();
        CT_ClipPath* add_clippath();
        CT_SignatureLine* add_signatureline();
        CT_Wrap* add_wrap();
        CT_AnchorLock* add_anchorlock();
        CT_Border* add_bordertop();
        CT_Border* add_borderbottom();
        CT_Border* add_borderleft();
        CT_Border* add_borderright();
        CT_ClientData* add_ClientData();
        CT_Rel* add_textdata();
        CT_Ink* add_ink();
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_PolyLine& default_instance() const;
        bool has_points_attr() const;
        void set_points_attr(const string& _points_attr );
        const string& points_attr() const;

    private:
        vector<ChildGroup_1*> m_childGroupList_1 ;
        static CT_PolyLine* default_instance_ ;
        bool m_has_points_attr ;
        string m_points_attr ;
        class ChildGroup_1{
        public:
            bool has_path() const;
            CT_Path* mutable_path();
            const CT_Path& path() const;
            bool has_formulas() const;
            CT_Formulas* mutable_formulas();
            const CT_Formulas& formulas() const;
            bool has_handles() const;
            CT_Handles* mutable_handles();
            const CT_Handles& handles() const;
            bool has_fill() const;
            CT_Fill* mutable_fill();
            const CT_Fill& fill() const;
            bool has_stroke() const;
            CT_Stroke* mutable_stroke();
            const CT_Stroke& stroke() const;
            bool has_shadow() const;
            CT_Shadow* mutable_shadow();
            const CT_Shadow& shadow() const;
            bool has_textbox() const;
            CT_Textbox* mutable_textbox();
            const CT_Textbox& textbox() const;
            bool has_textpath() const;
            CT_TextPath* mutable_textpath();
            const CT_TextPath& textpath() const;
            bool has_imagedata() const;
            CT_ImageData* mutable_imagedata();
            const CT_ImageData& imagedata() const;
            bool has_skew() const;
            CT_Skew* mutable_skew();
            const CT_Skew& skew() const;
            bool has_extrusion() const;
            CT_Extrusion* mutable_extrusion();
            const CT_Extrusion& extrusion() const;
            bool has_callout() const;
            CT_Callout* mutable_callout();
            const CT_Callout& callout() const;
            bool has_lock() const;
            CT_Lock* mutable_lock();
            const CT_Lock& lock() const;
            bool has_clippath() const;
            CT_ClipPath* mutable_clippath();
            const CT_ClipPath& clippath() const;
            bool has_signatureline() const;
            CT_SignatureLine* mutable_signatureline();
            const CT_SignatureLine& signatureline() const;
            bool has_wrap() const;
            CT_Wrap* mutable_wrap();
            const CT_Wrap& wrap() const;
            bool has_anchorlock() const;
            CT_AnchorLock* mutable_anchorlock();
            const CT_AnchorLock& anchorlock() const;
            bool has_bordertop() const;
            CT_Border* mutable_bordertop();
            const CT_Border& bordertop() const;
            bool has_borderbottom() const;
            CT_Border* mutable_borderbottom();
            const CT_Border& borderbottom() const;
            bool has_borderleft() const;
            CT_Border* mutable_borderleft();
            const CT_Border& borderleft() const;
            bool has_borderright() const;
            CT_Border* mutable_borderright();
            const CT_Border& borderright() const;
            bool has_ClientData() const;
            CT_ClientData* mutable_ClientData();
            const CT_ClientData& ClientData() const;
            bool has_textdata() const;
            CT_Rel* mutable_textdata();
            const CT_Rel& textdata() const;
            bool has_ink() const;
            CT_Ink* mutable_ink();
            const CT_Ink& ink() const;

        private:
            bool m_has_path ;
            CT_Path* m_path ;
            bool m_has_formulas ;
            CT_Formulas* m_formulas ;
            bool m_has_handles ;
            CT_Handles* m_handles ;
            bool m_has_fill ;
            CT_Fill* m_fill ;
            bool m_has_stroke ;
            CT_Stroke* m_stroke ;
            bool m_has_shadow ;
            CT_Shadow* m_shadow ;
            bool m_has_textbox ;
            CT_Textbox* m_textbox ;
            bool m_has_textpath ;
            CT_TextPath* m_textpath ;
            bool m_has_imagedata ;
            CT_ImageData* m_imagedata ;
            bool m_has_skew ;
            CT_Skew* m_skew ;
            bool m_has_extrusion ;
            CT_Extrusion* m_extrusion ;
            bool m_has_callout ;
            CT_Callout* m_callout ;
            bool m_has_lock ;
            CT_Lock* m_lock ;
            bool m_has_clippath ;
            CT_ClipPath* m_clippath ;
            bool m_has_signatureline ;
            CT_SignatureLine* m_signatureline ;
            bool m_has_wrap ;
            CT_Wrap* m_wrap ;
            bool m_has_anchorlock ;
            CT_AnchorLock* m_anchorlock ;
            bool m_has_bordertop ;
            CT_Border* m_bordertop ;
            bool m_has_borderbottom ;
            CT_Border* m_borderbottom ;
            bool m_has_borderleft ;
            CT_Border* m_borderleft ;
            bool m_has_borderright ;
            CT_Border* m_borderright ;
            bool m_has_ClientData ;
            CT_ClientData* m_ClientData ;
            bool m_has_textdata ;
            CT_Rel* m_textdata ;
            bool m_has_ink ;
            CT_Ink* m_ink ;

        }


    }

    class CT_Rect : public XSD::ComplexType{
    public:
        CT_Path* add_path();
        CT_Formulas* add_formulas();
        CT_Handles* add_handles();
        CT_Fill* add_fill();
        CT_Stroke* add_stroke();
        CT_Shadow* add_shadow();
        CT_Textbox* add_textbox();
        CT_TextPath* add_textpath();
        CT_ImageData* add_imagedata();
        CT_Skew* add_skew();
        CT_Extrusion* add_extrusion();
        CT_Callout* add_callout();
        CT_Lock* add_lock();
        CT_ClipPath* add_clippath();
        CT_SignatureLine* add_signatureline();
        CT_Wrap* add_wrap();
        CT_AnchorLock* add_anchorlock();
        CT_Border* add_bordertop();
        CT_Border* add_borderbottom();
        CT_Border* add_borderleft();
        CT_Border* add_borderright();
        CT_ClientData* add_ClientData();
        CT_Rel* add_textdata();
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Rect& default_instance() const;

    private:
        vector<ChildGroup_1*> m_childGroupList_1 ;
        static CT_Rect* default_instance_ ;
        class ChildGroup_1{
        public:
            bool has_path() const;
            CT_Path* mutable_path();
            const CT_Path& path() const;
            bool has_formulas() const;
            CT_Formulas* mutable_formulas();
            const CT_Formulas& formulas() const;
            bool has_handles() const;
            CT_Handles* mutable_handles();
            const CT_Handles& handles() const;
            bool has_fill() const;
            CT_Fill* mutable_fill();
            const CT_Fill& fill() const;
            bool has_stroke() const;
            CT_Stroke* mutable_stroke();
            const CT_Stroke& stroke() const;
            bool has_shadow() const;
            CT_Shadow* mutable_shadow();
            const CT_Shadow& shadow() const;
            bool has_textbox() const;
            CT_Textbox* mutable_textbox();
            const CT_Textbox& textbox() const;
            bool has_textpath() const;
            CT_TextPath* mutable_textpath();
            const CT_TextPath& textpath() const;
            bool has_imagedata() const;
            CT_ImageData* mutable_imagedata();
            const CT_ImageData& imagedata() const;
            bool has_skew() const;
            CT_Skew* mutable_skew();
            const CT_Skew& skew() const;
            bool has_extrusion() const;
            CT_Extrusion* mutable_extrusion();
            const CT_Extrusion& extrusion() const;
            bool has_callout() const;
            CT_Callout* mutable_callout();
            const CT_Callout& callout() const;
            bool has_lock() const;
            CT_Lock* mutable_lock();
            const CT_Lock& lock() const;
            bool has_clippath() const;
            CT_ClipPath* mutable_clippath();
            const CT_ClipPath& clippath() const;
            bool has_signatureline() const;
            CT_SignatureLine* mutable_signatureline();
            const CT_SignatureLine& signatureline() const;
            bool has_wrap() const;
            CT_Wrap* mutable_wrap();
            const CT_Wrap& wrap() const;
            bool has_anchorlock() const;
            CT_AnchorLock* mutable_anchorlock();
            const CT_AnchorLock& anchorlock() const;
            bool has_bordertop() const;
            CT_Border* mutable_bordertop();
            const CT_Border& bordertop() const;
            bool has_borderbottom() const;
            CT_Border* mutable_borderbottom();
            const CT_Border& borderbottom() const;
            bool has_borderleft() const;
            CT_Border* mutable_borderleft();
            const CT_Border& borderleft() const;
            bool has_borderright() const;
            CT_Border* mutable_borderright();
            const CT_Border& borderright() const;
            bool has_ClientData() const;
            CT_ClientData* mutable_ClientData();
            const CT_ClientData& ClientData() const;
            bool has_textdata() const;
            CT_Rel* mutable_textdata();
            const CT_Rel& textdata() const;

        private:
            bool m_has_path ;
            CT_Path* m_path ;
            bool m_has_formulas ;
            CT_Formulas* m_formulas ;
            bool m_has_handles ;
            CT_Handles* m_handles ;
            bool m_has_fill ;
            CT_Fill* m_fill ;
            bool m_has_stroke ;
            CT_Stroke* m_stroke ;
            bool m_has_shadow ;
            CT_Shadow* m_shadow ;
            bool m_has_textbox ;
            CT_Textbox* m_textbox ;
            bool m_has_textpath ;
            CT_TextPath* m_textpath ;
            bool m_has_imagedata ;
            CT_ImageData* m_imagedata ;
            bool m_has_skew ;
            CT_Skew* m_skew ;
            bool m_has_extrusion ;
            CT_Extrusion* m_extrusion ;
            bool m_has_callout ;
            CT_Callout* m_callout ;
            bool m_has_lock ;
            CT_Lock* m_lock ;
            bool m_has_clippath ;
            CT_ClipPath* m_clippath ;
            bool m_has_signatureline ;
            CT_SignatureLine* m_signatureline ;
            bool m_has_wrap ;
            CT_Wrap* m_wrap ;
            bool m_has_anchorlock ;
            CT_AnchorLock* m_anchorlock ;
            bool m_has_bordertop ;
            CT_Border* m_bordertop ;
            bool m_has_borderbottom ;
            CT_Border* m_borderbottom ;
            bool m_has_borderleft ;
            CT_Border* m_borderleft ;
            bool m_has_borderright ;
            CT_Border* m_borderright ;
            bool m_has_ClientData ;
            CT_ClientData* m_ClientData ;
            bool m_has_textdata ;
            CT_Rel* m_textdata ;

        }


    }

    class CT_RoundRect : public XSD::ComplexType{
    public:
        CT_Path* add_path();
        CT_Formulas* add_formulas();
        CT_Handles* add_handles();
        CT_Fill* add_fill();
        CT_Stroke* add_stroke();
        CT_Shadow* add_shadow();
        CT_Textbox* add_textbox();
        CT_TextPath* add_textpath();
        CT_ImageData* add_imagedata();
        CT_Skew* add_skew();
        CT_Extrusion* add_extrusion();
        CT_Callout* add_callout();
        CT_Lock* add_lock();
        CT_ClipPath* add_clippath();
        CT_SignatureLine* add_signatureline();
        CT_Wrap* add_wrap();
        CT_AnchorLock* add_anchorlock();
        CT_Border* add_bordertop();
        CT_Border* add_borderbottom();
        CT_Border* add_borderleft();
        CT_Border* add_borderright();
        CT_ClientData* add_ClientData();
        CT_Rel* add_textdata();
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_RoundRect& default_instance() const;
        bool has_arcsize_attr() const;
        void set_arcsize_attr(const string& _arcsize_attr );
        const string& arcsize_attr() const;

    private:
        vector<ChildGroup_1*> m_childGroupList_1 ;
        static CT_RoundRect* default_instance_ ;
        bool m_has_arcsize_attr ;
        string m_arcsize_attr ;
        class ChildGroup_1{
        public:
            bool has_path() const;
            CT_Path* mutable_path();
            const CT_Path& path() const;
            bool has_formulas() const;
            CT_Formulas* mutable_formulas();
            const CT_Formulas& formulas() const;
            bool has_handles() const;
            CT_Handles* mutable_handles();
            const CT_Handles& handles() const;
            bool has_fill() const;
            CT_Fill* mutable_fill();
            const CT_Fill& fill() const;
            bool has_stroke() const;
            CT_Stroke* mutable_stroke();
            const CT_Stroke& stroke() const;
            bool has_shadow() const;
            CT_Shadow* mutable_shadow();
            const CT_Shadow& shadow() const;
            bool has_textbox() const;
            CT_Textbox* mutable_textbox();
            const CT_Textbox& textbox() const;
            bool has_textpath() const;
            CT_TextPath* mutable_textpath();
            const CT_TextPath& textpath() const;
            bool has_imagedata() const;
            CT_ImageData* mutable_imagedata();
            const CT_ImageData& imagedata() const;
            bool has_skew() const;
            CT_Skew* mutable_skew();
            const CT_Skew& skew() const;
            bool has_extrusion() const;
            CT_Extrusion* mutable_extrusion();
            const CT_Extrusion& extrusion() const;
            bool has_callout() const;
            CT_Callout* mutable_callout();
            const CT_Callout& callout() const;
            bool has_lock() const;
            CT_Lock* mutable_lock();
            const CT_Lock& lock() const;
            bool has_clippath() const;
            CT_ClipPath* mutable_clippath();
            const CT_ClipPath& clippath() const;
            bool has_signatureline() const;
            CT_SignatureLine* mutable_signatureline();
            const CT_SignatureLine& signatureline() const;
            bool has_wrap() const;
            CT_Wrap* mutable_wrap();
            const CT_Wrap& wrap() const;
            bool has_anchorlock() const;
            CT_AnchorLock* mutable_anchorlock();
            const CT_AnchorLock& anchorlock() const;
            bool has_bordertop() const;
            CT_Border* mutable_bordertop();
            const CT_Border& bordertop() const;
            bool has_borderbottom() const;
            CT_Border* mutable_borderbottom();
            const CT_Border& borderbottom() const;
            bool has_borderleft() const;
            CT_Border* mutable_borderleft();
            const CT_Border& borderleft() const;
            bool has_borderright() const;
            CT_Border* mutable_borderright();
            const CT_Border& borderright() const;
            bool has_ClientData() const;
            CT_ClientData* mutable_ClientData();
            const CT_ClientData& ClientData() const;
            bool has_textdata() const;
            CT_Rel* mutable_textdata();
            const CT_Rel& textdata() const;

        private:
            bool m_has_path ;
            CT_Path* m_path ;
            bool m_has_formulas ;
            CT_Formulas* m_formulas ;
            bool m_has_handles ;
            CT_Handles* m_handles ;
            bool m_has_fill ;
            CT_Fill* m_fill ;
            bool m_has_stroke ;
            CT_Stroke* m_stroke ;
            bool m_has_shadow ;
            CT_Shadow* m_shadow ;
            bool m_has_textbox ;
            CT_Textbox* m_textbox ;
            bool m_has_textpath ;
            CT_TextPath* m_textpath ;
            bool m_has_imagedata ;
            CT_ImageData* m_imagedata ;
            bool m_has_skew ;
            CT_Skew* m_skew ;
            bool m_has_extrusion ;
            CT_Extrusion* m_extrusion ;
            bool m_has_callout ;
            CT_Callout* m_callout ;
            bool m_has_lock ;
            CT_Lock* m_lock ;
            bool m_has_clippath ;
            CT_ClipPath* m_clippath ;
            bool m_has_signatureline ;
            CT_SignatureLine* m_signatureline ;
            bool m_has_wrap ;
            CT_Wrap* m_wrap ;
            bool m_has_anchorlock ;
            CT_AnchorLock* m_anchorlock ;
            bool m_has_bordertop ;
            CT_Border* m_bordertop ;
            bool m_has_borderbottom ;
            CT_Border* m_borderbottom ;
            bool m_has_borderleft ;
            CT_Border* m_borderleft ;
            bool m_has_borderright ;
            CT_Border* m_borderright ;
            bool m_has_ClientData ;
            CT_ClientData* m_ClientData ;
            bool m_has_textdata ;
            CT_Rel* m_textdata ;

        }


    }

    class shape : public CT_Shape : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class shapetype : public CT_Shapetype : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class group : public CT_Group : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class background : public CT_Background : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class fill : public CT_Fill : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class formulas : public CT_Formulas : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class handles : public CT_Handles : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class imagedata : public CT_ImageData : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class path : public CT_Path : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class textbox : public CT_Textbox : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class shadow : public CT_Shadow : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class stroke : public CT_Stroke : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class textpath : public CT_TextPath : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class arc : public CT_Arc : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class curve : public CT_Curve : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class image : public CT_Image : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class line : public CT_Line : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class oval : public CT_Oval : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class polyline : public CT_PolyLine : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class rect : public CT_Rect : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class roundrect : public CT_RoundRect : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

}