namespace ns_o {
    class Element;
    class Attribute;
    class ST_AlternateMathContentType;
    class ST_RType;
    class ST_How;
    class ST_BWMode;
    class ST_ScreenSize;
    class ST_InsetMode;
    class ST_ColorMode;
    class ST_ContentType;
    class ST_DiagramLayout;
    class ST_ExtrusionType;
    class ST_ExtrusionRender;
    class ST_ExtrusionPlane;
    class ST_Angle;
    class ST_CalloutDrop;
    class ST_CalloutPlacement;
    class ST_ConnectorType;
    class ST_HrAlign;
    class ST_ConnectType;
    class ST_OLELinkType;
    class ST_OLEType;
    class ST_OLEDrawAspect;
    class ST_OLEUpdateMode;
    class ST_FillType;
    class CT_ShapeDefaults;
    class CT_Ink;
    class CT_SignatureLine;
    class CT_ShapeLayout;
    class CT_IdMap;
    class CT_RegroupTable;
    class CT_Entry;
    class CT_Rules;
    class CT_R;
    class CT_Proxy;
    class CT_Diagram;
    class CT_EquationXml;
    class CT_RelationTable;
    class CT_Relation;
    class CT_ColorMru;
    class CT_ColorMenu;
    class CT_Skew;
    class CT_Extrusion;
    class CT_Callout;
    class CT_Lock;
    class CT_OLEObject;
    class CT_Complex;
    class CT_StrokeChild;
    class CT_ClipPath;
    class CT_Fill;
    class shapedefaults_element;
    class shapelayout_element;
    class signatureline_element;
    class ink_element;
    class diagram_element;
    class equationxml_element;
    class skew_element;
    class extrusion_element;
    class callout_element;
    class lock_element;
    class OLEObject_element;
    class complex_element;
    class left_element;
    class top_element;
    class right_element;
    class bottom_element;
    class column_element;
    class clippath_element;
    class fill_element;
    class bwmode_attr;
    class bwpure_attr;
    class bwnormal_attr;
    class targetscreensize_attr;
    class insetmode_attr;
    class spt_attr;
    class wrapcoords_attr;
    class oned_attr;
    class regroupid_attr;
    class doubleclicknotify_attr;
    class connectortype_attr;
    class button_attr;
    class userhidden_attr;
    class forcedash_attr;
    class oleicon_attr;
    class ole_attr;
    class preferrelative_attr;
    class cliptowrap_attr;
    class clip_attr;
    class bullet_attr;
    class hr_attr;
    class hrstd_attr;
    class hrnoshade_attr;
    class hrpct_attr;
    class hralign_attr;
    class allowincell_attr;
    class allowoverlap_attr;
    class userdrawn_attr;
    class bordertopcolor_attr;
    class borderleftcolor_attr;
    class borderbottomcolor_attr;
    class borderrightcolor_attr;
    class connecttype_attr;
    class connectlocs_attr;
    class connectangles_attr;
    class master_attr;
    class extrusionok_attr;
    class href_attr;
    class althref_attr;
    class title_attr;
    class singleclick_attr;
    class oleid_attr;
    class detectmouseclick_attr;
    class movie_attr;
    class spid_attr;
    class opacity2_attr;
    class relid_attr;
    class dgmlayout_attr;
    class dgmnodekind_attr;
    class dgmlayoutmru_attr;
    class gfxdata_attr;
    class tableproperties_attr;
    class tablelimits_attr;
}
#ifndef __vml_officeDrawing_xsd_
#define __vml_officeDrawing_xsd_ 0

#include "xsdtype.h"
#include <vector>
#include <string>
#include <iostream>
#include "vml-main_xsd.h"
#include "shared-relationshipReference_xsd.h"
#include "shared-commonSimpleTypes_xsd.h"
namespace ns_o {
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

    class ST_AlternateMathContentType: public XSD::SimpleType
    {
    public:
        ST_AlternateMathContentType();
        ST_AlternateMathContentType(const XSD::string_& _string);
        bool has_string() const;
        void set_string(const XSD::string_& _string);
        const XSD::string_& get_string() const;
        void clear();
        void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_AlternateMathContentType& default_instance();
        std::string toString() const;
    protected:
    private:
        static ST_AlternateMathContentType* default_instance_;
        bool m_has_string;
        XSD::string_ m_string;
    };

    class ST_RType: public XSD::SimpleType
    {
    public:
        enum  Type 
        {
            _arc_ = 0,
            _callout_,
            _connector_,
            _align_
        };
        ST_RType();
        ST_RType(const ST_RType::Type& _type);
        bool has_type() const;
        void set_type(const ST_RType::Type& _type);
        const ST_RType::Type& get_type() const;
        std::string toString() const;
        void clear();
        void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_RType& default_instance();
    protected:
    private:
        static const std::string TypeStrList[];
        static ST_RType* default_instance_;
        bool m_has_type;
        ST_RType::Type m_type;
    };

    class ST_How: public XSD::SimpleType
    {
    public:
        enum  Type 
        {
            _top_ = 0,
            _middle_,
            _bottom_,
            _left_,
            _center_,
            _right_
        };
        ST_How();
        ST_How(const ST_How::Type& _type);
        bool has_type() const;
        void set_type(const ST_How::Type& _type);
        const ST_How::Type& get_type() const;
        std::string toString() const;
        void clear();
        void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_How& default_instance();
    protected:
    private:
        static const std::string TypeStrList[];
        static ST_How* default_instance_;
        bool m_has_type;
        ST_How::Type m_type;
    };

    class ST_BWMode: public XSD::SimpleType
    {
    public:
        enum  Type 
        {
            _color_ = 0,
            _auto_,
            _grayScale_,
            _lightGrayscale_,
            _inverseGray_,
            _grayOutline_,
            _highContrast_,
            _black_,
            _white_,
            _hide_,
            _undrawn_,
            _blackTextAndLines_
        };
        ST_BWMode();
        ST_BWMode(const ST_BWMode::Type& _type);
        bool has_type() const;
        void set_type(const ST_BWMode::Type& _type);
        const ST_BWMode::Type& get_type() const;
        std::string toString() const;
        void clear();
        void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_BWMode& default_instance();
    protected:
    private:
        static const std::string TypeStrList[];
        static ST_BWMode* default_instance_;
        bool m_has_type;
        ST_BWMode::Type m_type;
    };

    class ST_ScreenSize: public XSD::SimpleType
    {
    public:
        enum  Type 
        {
            _544_376_ = 0,
            _640_480_,
            _720_512_,
            _800_600_,
            _1024_768_,
            _1152_862_
        };
        ST_ScreenSize();
        ST_ScreenSize(const ST_ScreenSize::Type& _type);
        bool has_type() const;
        void set_type(const ST_ScreenSize::Type& _type);
        const ST_ScreenSize::Type& get_type() const;
        std::string toString() const;
        void clear();
        void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_ScreenSize& default_instance();
    protected:
    private:
        static const std::string TypeStrList[];
        static ST_ScreenSize* default_instance_;
        bool m_has_type;
        ST_ScreenSize::Type m_type;
    };

    class ST_InsetMode: public XSD::SimpleType
    {
    public:
        enum  Type 
        {
            _auto_ = 0,
            _custom_
        };
        ST_InsetMode();
        ST_InsetMode(const ST_InsetMode::Type& _type);
        bool has_type() const;
        void set_type(const ST_InsetMode::Type& _type);
        const ST_InsetMode::Type& get_type() const;
        std::string toString() const;
        void clear();
        void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_InsetMode& default_instance();
    protected:
    private:
        static const std::string TypeStrList[];
        static ST_InsetMode* default_instance_;
        bool m_has_type;
        ST_InsetMode::Type m_type;
    };

    class ST_ColorMode: public XSD::SimpleType
    {
    public:
        enum  Type 
        {
            _auto_ = 0,
            _custom_
        };
        ST_ColorMode();
        ST_ColorMode(const ST_ColorMode::Type& _type);
        bool has_type() const;
        void set_type(const ST_ColorMode::Type& _type);
        const ST_ColorMode::Type& get_type() const;
        std::string toString() const;
        void clear();
        void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_ColorMode& default_instance();
    protected:
    private:
        static const std::string TypeStrList[];
        static ST_ColorMode* default_instance_;
        bool m_has_type;
        ST_ColorMode::Type m_type;
    };

    class ST_ContentType: public XSD::SimpleType
    {
    public:
        ST_ContentType();
        ST_ContentType(const XSD::string_& _string);
        bool has_string() const;
        void set_string(const XSD::string_& _string);
        const XSD::string_& get_string() const;
        void clear();
        void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_ContentType& default_instance();
        std::string toString() const;
    protected:
    private:
        static ST_ContentType* default_instance_;
        bool m_has_string;
        XSD::string_ m_string;
    };

    class ST_DiagramLayout: public XSD::SimpleType
    {
    public:
        enum  Type 
        {
            _0_ = 0,
            _1_,
            _2_,
            _3_
        };
        ST_DiagramLayout();
        ST_DiagramLayout(const ST_DiagramLayout::Type& _type);
        bool has_type() const;
        void set_type(const ST_DiagramLayout::Type& _type);
        const ST_DiagramLayout::Type& get_type() const;
        std::string toString() const;
        void clear();
        void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_DiagramLayout& default_instance();
    protected:
    private:
        static const std::string TypeStrList[];
        static ST_DiagramLayout* default_instance_;
        bool m_has_type;
        ST_DiagramLayout::Type m_type;
    };

    class ST_ExtrusionType: public XSD::SimpleType
    {
    public:
        enum  Type 
        {
            _perspective_ = 0,
            _parallel_
        };
        ST_ExtrusionType();
        ST_ExtrusionType(const ST_ExtrusionType::Type& _type);
        bool has_type() const;
        void set_type(const ST_ExtrusionType::Type& _type);
        const ST_ExtrusionType::Type& get_type() const;
        std::string toString() const;
        void clear();
        void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_ExtrusionType& default_instance();
    protected:
    private:
        static const std::string TypeStrList[];
        static ST_ExtrusionType* default_instance_;
        bool m_has_type;
        ST_ExtrusionType::Type m_type;
    };

    class ST_ExtrusionRender: public XSD::SimpleType
    {
    public:
        enum  Type 
        {
            _solid_ = 0,
            _wireFrame_,
            _boundingCube_
        };
        ST_ExtrusionRender();
        ST_ExtrusionRender(const ST_ExtrusionRender::Type& _type);
        bool has_type() const;
        void set_type(const ST_ExtrusionRender::Type& _type);
        const ST_ExtrusionRender::Type& get_type() const;
        std::string toString() const;
        void clear();
        void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_ExtrusionRender& default_instance();
    protected:
    private:
        static const std::string TypeStrList[];
        static ST_ExtrusionRender* default_instance_;
        bool m_has_type;
        ST_ExtrusionRender::Type m_type;
    };

    class ST_ExtrusionPlane: public XSD::SimpleType
    {
    public:
        enum  Type 
        {
            _XY_ = 0,
            _ZX_,
            _YZ_
        };
        ST_ExtrusionPlane();
        ST_ExtrusionPlane(const ST_ExtrusionPlane::Type& _type);
        bool has_type() const;
        void set_type(const ST_ExtrusionPlane::Type& _type);
        const ST_ExtrusionPlane::Type& get_type() const;
        std::string toString() const;
        void clear();
        void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_ExtrusionPlane& default_instance();
    protected:
    private:
        static const std::string TypeStrList[];
        static ST_ExtrusionPlane* default_instance_;
        bool m_has_type;
        ST_ExtrusionPlane::Type m_type;
    };

    class ST_Angle: public XSD::SimpleType
    {
    public:
        enum  Type 
        {
            _any_ = 0,
            _30_,
            _45_,
            _60_,
            _90_,
            _auto_
        };
        ST_Angle();
        ST_Angle(const ST_Angle::Type& _type);
        bool has_type() const;
        void set_type(const ST_Angle::Type& _type);
        const ST_Angle::Type& get_type() const;
        std::string toString() const;
        void clear();
        void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_Angle& default_instance();
    protected:
    private:
        static const std::string TypeStrList[];
        static ST_Angle* default_instance_;
        bool m_has_type;
        ST_Angle::Type m_type;
    };

    class ST_CalloutDrop: public XSD::SimpleType
    {
    public:
        ST_CalloutDrop();
        ST_CalloutDrop(const XSD::string_& _string);
        bool has_string() const;
        void set_string(const XSD::string_& _string);
        const XSD::string_& get_string() const;
        void clear();
        void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_CalloutDrop& default_instance();
        std::string toString() const;
    protected:
    private:
        static ST_CalloutDrop* default_instance_;
        bool m_has_string;
        XSD::string_ m_string;
    };

    class ST_CalloutPlacement: public XSD::SimpleType
    {
    public:
        enum  Type 
        {
            _top_ = 0,
            _center_,
            _bottom_,
            _user_
        };
        ST_CalloutPlacement();
        ST_CalloutPlacement(const ST_CalloutPlacement::Type& _type);
        bool has_type() const;
        void set_type(const ST_CalloutPlacement::Type& _type);
        const ST_CalloutPlacement::Type& get_type() const;
        std::string toString() const;
        void clear();
        void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_CalloutPlacement& default_instance();
    protected:
    private:
        static const std::string TypeStrList[];
        static ST_CalloutPlacement* default_instance_;
        bool m_has_type;
        ST_CalloutPlacement::Type m_type;
    };

    class ST_ConnectorType: public XSD::SimpleType
    {
    public:
        enum  Type 
        {
            _none_ = 0,
            _straight_,
            _elbow_,
            _curved_
        };
        ST_ConnectorType();
        ST_ConnectorType(const ST_ConnectorType::Type& _type);
        bool has_type() const;
        void set_type(const ST_ConnectorType::Type& _type);
        const ST_ConnectorType::Type& get_type() const;
        std::string toString() const;
        void clear();
        void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_ConnectorType& default_instance();
    protected:
    private:
        static const std::string TypeStrList[];
        static ST_ConnectorType* default_instance_;
        bool m_has_type;
        ST_ConnectorType::Type m_type;
    };

    class ST_HrAlign: public XSD::SimpleType
    {
    public:
        enum  Type 
        {
            _left_ = 0,
            _right_,
            _center_
        };
        ST_HrAlign();
        ST_HrAlign(const ST_HrAlign::Type& _type);
        bool has_type() const;
        void set_type(const ST_HrAlign::Type& _type);
        const ST_HrAlign::Type& get_type() const;
        std::string toString() const;
        void clear();
        void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_HrAlign& default_instance();
    protected:
    private:
        static const std::string TypeStrList[];
        static ST_HrAlign* default_instance_;
        bool m_has_type;
        ST_HrAlign::Type m_type;
    };

    class ST_ConnectType: public XSD::SimpleType
    {
    public:
        enum  Type 
        {
            _none_ = 0,
            _rect_,
            _segments_,
            _custom_
        };
        ST_ConnectType();
        ST_ConnectType(const ST_ConnectType::Type& _type);
        bool has_type() const;
        void set_type(const ST_ConnectType::Type& _type);
        const ST_ConnectType::Type& get_type() const;
        std::string toString() const;
        void clear();
        void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_ConnectType& default_instance();
    protected:
    private:
        static const std::string TypeStrList[];
        static ST_ConnectType* default_instance_;
        bool m_has_type;
        ST_ConnectType::Type m_type;
    };

    class ST_OLELinkType: public XSD::SimpleType
    {
    public:
        ST_OLELinkType();
        ST_OLELinkType(const XSD::string_& _string);
        bool has_string() const;
        void set_string(const XSD::string_& _string);
        const XSD::string_& get_string() const;
        void clear();
        void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_OLELinkType& default_instance();
        std::string toString() const;
    protected:
    private:
        static ST_OLELinkType* default_instance_;
        bool m_has_string;
        XSD::string_ m_string;
    };

    class ST_OLEType: public XSD::SimpleType
    {
    public:
        enum  Type 
        {
            _Embed_ = 0,
            _Link_
        };
        ST_OLEType();
        ST_OLEType(const ST_OLEType::Type& _type);
        bool has_type() const;
        void set_type(const ST_OLEType::Type& _type);
        const ST_OLEType::Type& get_type() const;
        std::string toString() const;
        void clear();
        void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_OLEType& default_instance();
    protected:
    private:
        static const std::string TypeStrList[];
        static ST_OLEType* default_instance_;
        bool m_has_type;
        ST_OLEType::Type m_type;
    };

    class ST_OLEDrawAspect: public XSD::SimpleType
    {
    public:
        enum  Type 
        {
            _Content_ = 0,
            _Icon_
        };
        ST_OLEDrawAspect();
        ST_OLEDrawAspect(const ST_OLEDrawAspect::Type& _type);
        bool has_type() const;
        void set_type(const ST_OLEDrawAspect::Type& _type);
        const ST_OLEDrawAspect::Type& get_type() const;
        std::string toString() const;
        void clear();
        void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_OLEDrawAspect& default_instance();
    protected:
    private:
        static const std::string TypeStrList[];
        static ST_OLEDrawAspect* default_instance_;
        bool m_has_type;
        ST_OLEDrawAspect::Type m_type;
    };

    class ST_OLEUpdateMode: public XSD::SimpleType
    {
    public:
        enum  Type 
        {
            _Always_ = 0,
            _OnCall_
        };
        ST_OLEUpdateMode();
        ST_OLEUpdateMode(const ST_OLEUpdateMode::Type& _type);
        bool has_type() const;
        void set_type(const ST_OLEUpdateMode::Type& _type);
        const ST_OLEUpdateMode::Type& get_type() const;
        std::string toString() const;
        void clear();
        void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_OLEUpdateMode& default_instance();
    protected:
    private:
        static const std::string TypeStrList[];
        static ST_OLEUpdateMode* default_instance_;
        bool m_has_type;
        ST_OLEUpdateMode::Type m_type;
    };

    class ST_FillType: public XSD::SimpleType
    {
    public:
        enum  Type 
        {
            _gradientCenter_ = 0,
            _solid_,
            _pattern_,
            _tile_,
            _frame_,
            _gradientUnscaled_,
            _gradientRadial_,
            _gradient_,
            _background_
        };
        ST_FillType();
        ST_FillType(const ST_FillType::Type& _type);
        bool has_type() const;
        void set_type(const ST_FillType::Type& _type);
        const ST_FillType::Type& get_type() const;
        std::string toString() const;
        void clear();
        void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_FillType& default_instance();
    protected:
    private:
        static const std::string TypeStrList[];
        static ST_FillType* default_instance_;
        bool m_has_type;
        ST_FillType::Type m_type;
    };

    class CT_ShapeDefaults: public XSD::ComplexType
    {
    public:
        CT_ShapeDefaults();
        bool has_v_fill() const;
        ns_v::CT_Fill* mutable_v_fill();
        const ns_v::CT_Fill& get_v_fill() const;
        bool has_v_stroke() const;
        ns_v::CT_Stroke* mutable_v_stroke();
        const ns_v::CT_Stroke& get_v_stroke() const;
        bool has_v_textbox() const;
        ns_v::CT_Textbox* mutable_v_textbox();
        const ns_v::CT_Textbox& get_v_textbox() const;
        bool has_v_shadow() const;
        ns_v::CT_Shadow* mutable_v_shadow();
        const ns_v::CT_Shadow& get_v_shadow() const;
        bool has_skew() const;
        CT_Skew* mutable_skew();
        const CT_Skew& get_skew() const;
        bool has_extrusion() const;
        CT_Extrusion* mutable_extrusion();
        const CT_Extrusion& get_extrusion() const;
        bool has_callout() const;
        CT_Callout* mutable_callout();
        const CT_Callout& get_callout() const;
        bool has_lock() const;
        CT_Lock* mutable_lock();
        const CT_Lock& get_lock() const;
        bool has_colormru() const;
        CT_ColorMru* mutable_colormru();
        const CT_ColorMru& get_colormru() const;
        bool has_colormenu() const;
        CT_ColorMenu* mutable_colormenu();
        const CT_ColorMenu& get_colormenu() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_ShapeDefaults& default_instance();
        bool has_v_ext_attr() const;
        void set_v_ext_attr(const ns_v::ST_Ext& _v_ext_attr);
        const ns_v::ST_Ext& get_v_ext_attr() const;
        bool has_spidmax_attr() const;
        void set_spidmax_attr(const XSD::integer_& _spidmax_attr);
        const XSD::integer_& get_spidmax_attr() const;
        bool has_style_attr() const;
        void set_style_attr(const XSD::string_& _style_attr);
        const XSD::string_& get_style_attr() const;
        bool has_fill_attr() const;
        void set_fill_attr(const ns_s::ST_TrueFalse& _fill_attr);
        const ns_s::ST_TrueFalse& get_fill_attr() const;
        bool has_fillcolor_attr() const;
        void set_fillcolor_attr(const ns_s::ST_ColorType& _fillcolor_attr);
        const ns_s::ST_ColorType& get_fillcolor_attr() const;
        bool has_stroke_attr() const;
        void set_stroke_attr(const ns_s::ST_TrueFalse& _stroke_attr);
        const ns_s::ST_TrueFalse& get_stroke_attr() const;
        bool has_strokecolor_attr() const;
        void set_strokecolor_attr(const ns_s::ST_ColorType& _strokecolor_attr);
        const ns_s::ST_ColorType& get_strokecolor_attr() const;
        bool has_allowincell_attr() const;
        void set_allowincell_attr(const ns_s::ST_TrueFalse& _allowincell_attr);
        const ns_s::ST_TrueFalse& get_allowincell_attr() const;
    protected:
    private:
        bool m_has_v_fill;
        ns_v::CT_Fill* m_v_fill;
        bool m_has_v_stroke;
        ns_v::CT_Stroke* m_v_stroke;
        bool m_has_v_textbox;
        ns_v::CT_Textbox* m_v_textbox;
        bool m_has_v_shadow;
        ns_v::CT_Shadow* m_v_shadow;
        bool m_has_skew;
        CT_Skew* m_skew;
        bool m_has_extrusion;
        CT_Extrusion* m_extrusion;
        bool m_has_callout;
        CT_Callout* m_callout;
        bool m_has_lock;
        CT_Lock* m_lock;
        bool m_has_colormru;
        CT_ColorMru* m_colormru;
        bool m_has_colormenu;
        CT_ColorMenu* m_colormenu;
        static CT_ShapeDefaults* default_instance_;
        bool m_has_v_ext_attr;
        ns_v::ST_Ext* m_v_ext_attr;
        bool m_has_spidmax_attr;
        XSD::integer_ m_spidmax_attr;
        bool m_has_style_attr;
        XSD::string_ m_style_attr;
        bool m_has_fill_attr;
        ns_s::ST_TrueFalse* m_fill_attr;
        bool m_has_fillcolor_attr;
        ns_s::ST_ColorType* m_fillcolor_attr;
        bool m_has_stroke_attr;
        ns_s::ST_TrueFalse* m_stroke_attr;
        bool m_has_strokecolor_attr;
        ns_s::ST_ColorType* m_strokecolor_attr;
        bool m_has_allowincell_attr;
        ns_s::ST_TrueFalse* m_allowincell_attr;
    };

    class CT_Ink: public XSD::ComplexType
    {
    public:
        CT_Ink();
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_Ink& default_instance();
        bool has_i_attr() const;
        void set_i_attr(const XSD::string_& _i_attr);
        const XSD::string_& get_i_attr() const;
        bool has_annotation_attr() const;
        void set_annotation_attr(const ns_s::ST_TrueFalse& _annotation_attr);
        const ns_s::ST_TrueFalse& get_annotation_attr() const;
        bool has_contentType_attr() const;
        void set_contentType_attr(const ST_ContentType& _contentType_attr);
        const ST_ContentType& get_contentType_attr() const;
    protected:
    private:
        static CT_Ink* default_instance_;
        bool m_has_i_attr;
        XSD::string_ m_i_attr;
        bool m_has_annotation_attr;
        ns_s::ST_TrueFalse* m_annotation_attr;
        bool m_has_contentType_attr;
        ST_ContentType* m_contentType_attr;
    };

    class CT_SignatureLine: public XSD::ComplexType
    {
    public:
        CT_SignatureLine();
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_SignatureLine& default_instance();
        bool has_v_ext_attr() const;
        void set_v_ext_attr(const ns_v::ST_Ext& _v_ext_attr);
        const ns_v::ST_Ext& get_v_ext_attr() const;
        bool has_issignatureline_attr() const;
        void set_issignatureline_attr(const ns_s::ST_TrueFalse& _issignatureline_attr);
        const ns_s::ST_TrueFalse& get_issignatureline_attr() const;
        bool has_id_attr() const;
        void set_id_attr(const ns_s::ST_Guid& _id_attr);
        const ns_s::ST_Guid& get_id_attr() const;
        bool has_provid_attr() const;
        void set_provid_attr(const ns_s::ST_Guid& _provid_attr);
        const ns_s::ST_Guid& get_provid_attr() const;
        bool has_signinginstructionsset_attr() const;
        void set_signinginstructionsset_attr(const ns_s::ST_TrueFalse& _signinginstructionsset_attr);
        const ns_s::ST_TrueFalse& get_signinginstructionsset_attr() const;
        bool has_allowcomments_attr() const;
        void set_allowcomments_attr(const ns_s::ST_TrueFalse& _allowcomments_attr);
        const ns_s::ST_TrueFalse& get_allowcomments_attr() const;
        bool has_showsigndate_attr() const;
        void set_showsigndate_attr(const ns_s::ST_TrueFalse& _showsigndate_attr);
        const ns_s::ST_TrueFalse& get_showsigndate_attr() const;
        bool has_suggestedsigner_attr() const;
        void set_suggestedsigner_attr(const XSD::string_& _suggestedsigner_attr);
        const XSD::string_& get_suggestedsigner_attr() const;
        bool has_suggestedsigner2_attr() const;
        void set_suggestedsigner2_attr(const XSD::string_& _suggestedsigner2_attr);
        const XSD::string_& get_suggestedsigner2_attr() const;
        bool has_suggestedsigneremail_attr() const;
        void set_suggestedsigneremail_attr(const XSD::string_& _suggestedsigneremail_attr);
        const XSD::string_& get_suggestedsigneremail_attr() const;
        bool has_signinginstructions_attr() const;
        void set_signinginstructions_attr(const XSD::string_& _signinginstructions_attr);
        const XSD::string_& get_signinginstructions_attr() const;
        bool has_addlxml_attr() const;
        void set_addlxml_attr(const XSD::string_& _addlxml_attr);
        const XSD::string_& get_addlxml_attr() const;
        bool has_sigprovurl_attr() const;
        void set_sigprovurl_attr(const XSD::string_& _sigprovurl_attr);
        const XSD::string_& get_sigprovurl_attr() const;
    protected:
    private:
        static CT_SignatureLine* default_instance_;
        bool m_has_v_ext_attr;
        ns_v::ST_Ext* m_v_ext_attr;
        bool m_has_issignatureline_attr;
        ns_s::ST_TrueFalse* m_issignatureline_attr;
        bool m_has_id_attr;
        ns_s::ST_Guid* m_id_attr;
        bool m_has_provid_attr;
        ns_s::ST_Guid* m_provid_attr;
        bool m_has_signinginstructionsset_attr;
        ns_s::ST_TrueFalse* m_signinginstructionsset_attr;
        bool m_has_allowcomments_attr;
        ns_s::ST_TrueFalse* m_allowcomments_attr;
        bool m_has_showsigndate_attr;
        ns_s::ST_TrueFalse* m_showsigndate_attr;
        bool m_has_suggestedsigner_attr;
        XSD::string_ m_suggestedsigner_attr;
        bool m_has_suggestedsigner2_attr;
        XSD::string_ m_suggestedsigner2_attr;
        bool m_has_suggestedsigneremail_attr;
        XSD::string_ m_suggestedsigneremail_attr;
        bool m_has_signinginstructions_attr;
        XSD::string_ m_signinginstructions_attr;
        bool m_has_addlxml_attr;
        XSD::string_ m_addlxml_attr;
        bool m_has_sigprovurl_attr;
        XSD::string_ m_sigprovurl_attr;
    };

    class CT_ShapeLayout: public XSD::ComplexType
    {
    public:
        CT_ShapeLayout();
        bool has_idmap() const;
        CT_IdMap* mutable_idmap();
        const CT_IdMap& get_idmap() const;
        bool has_regrouptable() const;
        CT_RegroupTable* mutable_regrouptable();
        const CT_RegroupTable& get_regrouptable() const;
        bool has_rules() const;
        CT_Rules* mutable_rules();
        const CT_Rules& get_rules() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_ShapeLayout& default_instance();
        bool has_v_ext_attr() const;
        void set_v_ext_attr(const ns_v::ST_Ext& _v_ext_attr);
        const ns_v::ST_Ext& get_v_ext_attr() const;
    protected:
    private:
        bool m_has_idmap;
        CT_IdMap* m_idmap;
        bool m_has_regrouptable;
        CT_RegroupTable* m_regrouptable;
        bool m_has_rules;
        CT_Rules* m_rules;
        static CT_ShapeLayout* default_instance_;
        bool m_has_v_ext_attr;
        ns_v::ST_Ext* m_v_ext_attr;
    };

    class CT_IdMap: public XSD::ComplexType
    {
    public:
        CT_IdMap();
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_IdMap& default_instance();
        bool has_v_ext_attr() const;
        void set_v_ext_attr(const ns_v::ST_Ext& _v_ext_attr);
        const ns_v::ST_Ext& get_v_ext_attr() const;
        bool has_data_attr() const;
        void set_data_attr(const XSD::string_& _data_attr);
        const XSD::string_& get_data_attr() const;
    protected:
    private:
        static CT_IdMap* default_instance_;
        bool m_has_v_ext_attr;
        ns_v::ST_Ext* m_v_ext_attr;
        bool m_has_data_attr;
        XSD::string_ m_data_attr;
    };

    class CT_RegroupTable: public XSD::ComplexType
    {
    public:
        CT_RegroupTable();
        CT_Entry* add_entry();
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_RegroupTable& default_instance();
        bool has_v_ext_attr() const;
        void set_v_ext_attr(const ns_v::ST_Ext& _v_ext_attr);
        const ns_v::ST_Ext& get_v_ext_attr() const;
    protected:
    private:
        class ChildGroup_1
        {
        public:
            ChildGroup_1();
            bool has_entry() const;
            CT_Entry* mutable_entry();
            const CT_Entry& get_entry() const;
        protected:
        private:
            bool m_has_entry;
            CT_Entry* m_entry;
        };
        vector<ChildGroup_1*> m_childGroupList_1;
        static CT_RegroupTable* default_instance_;
        bool m_has_v_ext_attr;
        ns_v::ST_Ext* m_v_ext_attr;
    };

    class CT_Entry: public XSD::ComplexType
    {
    public:
        CT_Entry();
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_Entry& default_instance();
        bool has_new_attr() const;
        void set_new_attr(const XSD::int_& _new_attr);
        const XSD::int_& get_new_attr() const;
        bool has_old_attr() const;
        void set_old_attr(const XSD::int_& _old_attr);
        const XSD::int_& get_old_attr() const;
    protected:
    private:
        static CT_Entry* default_instance_;
        bool m_has_new_attr;
        XSD::int_ m_new_attr;
        bool m_has_old_attr;
        XSD::int_ m_old_attr;
    };

    class CT_Rules: public XSD::ComplexType
    {
    public:
        CT_Rules();
        CT_R* add_r();
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_Rules& default_instance();
        bool has_v_ext_attr() const;
        void set_v_ext_attr(const ns_v::ST_Ext& _v_ext_attr);
        const ns_v::ST_Ext& get_v_ext_attr() const;
    protected:
    private:
        class ChildGroup_1
        {
        public:
            ChildGroup_1();
            bool has_r() const;
            CT_R* mutable_r();
            const CT_R& get_r() const;
        protected:
        private:
            bool m_has_r;
            CT_R* m_r;
        };
        vector<ChildGroup_1*> m_childGroupList_1;
        static CT_Rules* default_instance_;
        bool m_has_v_ext_attr;
        ns_v::ST_Ext* m_v_ext_attr;
    };

    class CT_R: public XSD::ComplexType
    {
    public:
        CT_R();
        CT_Proxy* add_proxy();
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_R& default_instance();
        bool has_id_attr() const;
        void set_id_attr(const XSD::string_& _id_attr);
        const XSD::string_& get_id_attr() const;
        bool has_type_attr() const;
        void set_type_attr(const ST_RType& _type_attr);
        const ST_RType& get_type_attr() const;
        bool has_how_attr() const;
        void set_how_attr(const ST_How& _how_attr);
        const ST_How& get_how_attr() const;
        bool has_idref_attr() const;
        void set_idref_attr(const XSD::string_& _idref_attr);
        const XSD::string_& get_idref_attr() const;
    protected:
    private:
        class ChildGroup_1
        {
        public:
            ChildGroup_1();
            bool has_proxy() const;
            CT_Proxy* mutable_proxy();
            const CT_Proxy& get_proxy() const;
        protected:
        private:
            bool m_has_proxy;
            CT_Proxy* m_proxy;
        };
        vector<ChildGroup_1*> m_childGroupList_1;
        static CT_R* default_instance_;
        bool m_has_id_attr;
        XSD::string_ m_id_attr;
        bool m_has_type_attr;
        ST_RType* m_type_attr;
        bool m_has_how_attr;
        ST_How* m_how_attr;
        bool m_has_idref_attr;
        XSD::string_ m_idref_attr;
    };

    class CT_Proxy: public XSD::ComplexType
    {
    public:
        CT_Proxy();
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_Proxy& default_instance();
        bool has_start_attr() const;
        void set_start_attr(const ns_s::ST_TrueFalseBlank& _start_attr);
        const ns_s::ST_TrueFalseBlank& get_start_attr() const;
        bool has_end_attr() const;
        void set_end_attr(const ns_s::ST_TrueFalseBlank& _end_attr);
        const ns_s::ST_TrueFalseBlank& get_end_attr() const;
        bool has_idref_attr() const;
        void set_idref_attr(const XSD::string_& _idref_attr);
        const XSD::string_& get_idref_attr() const;
        bool has_connectloc_attr() const;
        void set_connectloc_attr(const XSD::int_& _connectloc_attr);
        const XSD::int_& get_connectloc_attr() const;
    protected:
    private:
        static CT_Proxy* default_instance_;
        bool m_has_start_attr;
        ns_s::ST_TrueFalseBlank* m_start_attr;
        bool m_has_end_attr;
        ns_s::ST_TrueFalseBlank* m_end_attr;
        bool m_has_idref_attr;
        XSD::string_ m_idref_attr;
        bool m_has_connectloc_attr;
        XSD::int_ m_connectloc_attr;
    };

    class CT_Diagram: public XSD::ComplexType
    {
    public:
        CT_Diagram();
        bool has_relationtable() const;
        CT_RelationTable* mutable_relationtable();
        const CT_RelationTable& get_relationtable() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_Diagram& default_instance();
        bool has_v_ext_attr() const;
        void set_v_ext_attr(const ns_v::ST_Ext& _v_ext_attr);
        const ns_v::ST_Ext& get_v_ext_attr() const;
        bool has_dgmstyle_attr() const;
        void set_dgmstyle_attr(const XSD::integer_& _dgmstyle_attr);
        const XSD::integer_& get_dgmstyle_attr() const;
        bool has_autoformat_attr() const;
        void set_autoformat_attr(const ns_s::ST_TrueFalse& _autoformat_attr);
        const ns_s::ST_TrueFalse& get_autoformat_attr() const;
        bool has_reverse_attr() const;
        void set_reverse_attr(const ns_s::ST_TrueFalse& _reverse_attr);
        const ns_s::ST_TrueFalse& get_reverse_attr() const;
        bool has_autolayout_attr() const;
        void set_autolayout_attr(const ns_s::ST_TrueFalse& _autolayout_attr);
        const ns_s::ST_TrueFalse& get_autolayout_attr() const;
        bool has_dgmscalex_attr() const;
        void set_dgmscalex_attr(const XSD::integer_& _dgmscalex_attr);
        const XSD::integer_& get_dgmscalex_attr() const;
        bool has_dgmscaley_attr() const;
        void set_dgmscaley_attr(const XSD::integer_& _dgmscaley_attr);
        const XSD::integer_& get_dgmscaley_attr() const;
        bool has_dgmfontsize_attr() const;
        void set_dgmfontsize_attr(const XSD::integer_& _dgmfontsize_attr);
        const XSD::integer_& get_dgmfontsize_attr() const;
        bool has_constrainbounds_attr() const;
        void set_constrainbounds_attr(const XSD::string_& _constrainbounds_attr);
        const XSD::string_& get_constrainbounds_attr() const;
        bool has_dgmbasetextscale_attr() const;
        void set_dgmbasetextscale_attr(const XSD::integer_& _dgmbasetextscale_attr);
        const XSD::integer_& get_dgmbasetextscale_attr() const;
    protected:
    private:
        bool m_has_relationtable;
        CT_RelationTable* m_relationtable;
        static CT_Diagram* default_instance_;
        bool m_has_v_ext_attr;
        ns_v::ST_Ext* m_v_ext_attr;
        bool m_has_dgmstyle_attr;
        XSD::integer_ m_dgmstyle_attr;
        bool m_has_autoformat_attr;
        ns_s::ST_TrueFalse* m_autoformat_attr;
        bool m_has_reverse_attr;
        ns_s::ST_TrueFalse* m_reverse_attr;
        bool m_has_autolayout_attr;
        ns_s::ST_TrueFalse* m_autolayout_attr;
        bool m_has_dgmscalex_attr;
        XSD::integer_ m_dgmscalex_attr;
        bool m_has_dgmscaley_attr;
        XSD::integer_ m_dgmscaley_attr;
        bool m_has_dgmfontsize_attr;
        XSD::integer_ m_dgmfontsize_attr;
        bool m_has_constrainbounds_attr;
        XSD::string_ m_constrainbounds_attr;
        bool m_has_dgmbasetextscale_attr;
        XSD::integer_ m_dgmbasetextscale_attr;
    };

    class CT_EquationXml: public XSD::ComplexType
    {
    public:
        CT_EquationXml();
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_EquationXml& default_instance();
        bool has_contentType_attr() const;
        void set_contentType_attr(const ST_AlternateMathContentType& _contentType_attr);
        const ST_AlternateMathContentType& get_contentType_attr() const;
    protected:
    private:
        bool m_has__any;
        XSD::Element* m__any;
        static CT_EquationXml* default_instance_;
        bool m_has_contentType_attr;
        ST_AlternateMathContentType* m_contentType_attr;
    };

    class CT_RelationTable: public XSD::ComplexType
    {
    public:
        CT_RelationTable();
        CT_Relation* add_rel();
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_RelationTable& default_instance();
        bool has_v_ext_attr() const;
        void set_v_ext_attr(const ns_v::ST_Ext& _v_ext_attr);
        const ns_v::ST_Ext& get_v_ext_attr() const;
    protected:
    private:
        class ChildGroup_1
        {
        public:
            ChildGroup_1();
            bool has_rel() const;
            CT_Relation* mutable_rel();
            const CT_Relation& get_rel() const;
        protected:
        private:
            bool m_has_rel;
            CT_Relation* m_rel;
        };
        vector<ChildGroup_1*> m_childGroupList_1;
        static CT_RelationTable* default_instance_;
        bool m_has_v_ext_attr;
        ns_v::ST_Ext* m_v_ext_attr;
    };

    class CT_Relation: public XSD::ComplexType
    {
    public:
        CT_Relation();
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_Relation& default_instance();
        bool has_v_ext_attr() const;
        void set_v_ext_attr(const ns_v::ST_Ext& _v_ext_attr);
        const ns_v::ST_Ext& get_v_ext_attr() const;
        bool has_idsrc_attr() const;
        void set_idsrc_attr(const XSD::string_& _idsrc_attr);
        const XSD::string_& get_idsrc_attr() const;
        bool has_iddest_attr() const;
        void set_iddest_attr(const XSD::string_& _iddest_attr);
        const XSD::string_& get_iddest_attr() const;
        bool has_idcntr_attr() const;
        void set_idcntr_attr(const XSD::string_& _idcntr_attr);
        const XSD::string_& get_idcntr_attr() const;
    protected:
    private:
        static CT_Relation* default_instance_;
        bool m_has_v_ext_attr;
        ns_v::ST_Ext* m_v_ext_attr;
        bool m_has_idsrc_attr;
        XSD::string_ m_idsrc_attr;
        bool m_has_iddest_attr;
        XSD::string_ m_iddest_attr;
        bool m_has_idcntr_attr;
        XSD::string_ m_idcntr_attr;
    };

    class CT_ColorMru: public XSD::ComplexType
    {
    public:
        CT_ColorMru();
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_ColorMru& default_instance();
        bool has_v_ext_attr() const;
        void set_v_ext_attr(const ns_v::ST_Ext& _v_ext_attr);
        const ns_v::ST_Ext& get_v_ext_attr() const;
        bool has_colors_attr() const;
        void set_colors_attr(const XSD::string_& _colors_attr);
        const XSD::string_& get_colors_attr() const;
    protected:
    private:
        static CT_ColorMru* default_instance_;
        bool m_has_v_ext_attr;
        ns_v::ST_Ext* m_v_ext_attr;
        bool m_has_colors_attr;
        XSD::string_ m_colors_attr;
    };

    class CT_ColorMenu: public XSD::ComplexType
    {
    public:
        CT_ColorMenu();
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_ColorMenu& default_instance();
        bool has_v_ext_attr() const;
        void set_v_ext_attr(const ns_v::ST_Ext& _v_ext_attr);
        const ns_v::ST_Ext& get_v_ext_attr() const;
        bool has_strokecolor_attr() const;
        void set_strokecolor_attr(const ns_s::ST_ColorType& _strokecolor_attr);
        const ns_s::ST_ColorType& get_strokecolor_attr() const;
        bool has_fillcolor_attr() const;
        void set_fillcolor_attr(const ns_s::ST_ColorType& _fillcolor_attr);
        const ns_s::ST_ColorType& get_fillcolor_attr() const;
        bool has_shadowcolor_attr() const;
        void set_shadowcolor_attr(const ns_s::ST_ColorType& _shadowcolor_attr);
        const ns_s::ST_ColorType& get_shadowcolor_attr() const;
        bool has_extrusioncolor_attr() const;
        void set_extrusioncolor_attr(const ns_s::ST_ColorType& _extrusioncolor_attr);
        const ns_s::ST_ColorType& get_extrusioncolor_attr() const;
    protected:
    private:
        static CT_ColorMenu* default_instance_;
        bool m_has_v_ext_attr;
        ns_v::ST_Ext* m_v_ext_attr;
        bool m_has_strokecolor_attr;
        ns_s::ST_ColorType* m_strokecolor_attr;
        bool m_has_fillcolor_attr;
        ns_s::ST_ColorType* m_fillcolor_attr;
        bool m_has_shadowcolor_attr;
        ns_s::ST_ColorType* m_shadowcolor_attr;
        bool m_has_extrusioncolor_attr;
        ns_s::ST_ColorType* m_extrusioncolor_attr;
    };

    class CT_Skew: public XSD::ComplexType
    {
    public:
        CT_Skew();
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_Skew& default_instance();
        bool has_v_ext_attr() const;
        void set_v_ext_attr(const ns_v::ST_Ext& _v_ext_attr);
        const ns_v::ST_Ext& get_v_ext_attr() const;
        bool has_id_attr() const;
        void set_id_attr(const XSD::string_& _id_attr);
        const XSD::string_& get_id_attr() const;
        bool has_on_attr() const;
        void set_on_attr(const ns_s::ST_TrueFalse& _on_attr);
        const ns_s::ST_TrueFalse& get_on_attr() const;
        bool has_offset_attr() const;
        void set_offset_attr(const XSD::string_& _offset_attr);
        const XSD::string_& get_offset_attr() const;
        bool has_origin_attr() const;
        void set_origin_attr(const XSD::string_& _origin_attr);
        const XSD::string_& get_origin_attr() const;
        bool has_matrix_attr() const;
        void set_matrix_attr(const XSD::string_& _matrix_attr);
        const XSD::string_& get_matrix_attr() const;
    protected:
    private:
        static CT_Skew* default_instance_;
        bool m_has_v_ext_attr;
        ns_v::ST_Ext* m_v_ext_attr;
        bool m_has_id_attr;
        XSD::string_ m_id_attr;
        bool m_has_on_attr;
        ns_s::ST_TrueFalse* m_on_attr;
        bool m_has_offset_attr;
        XSD::string_ m_offset_attr;
        bool m_has_origin_attr;
        XSD::string_ m_origin_attr;
        bool m_has_matrix_attr;
        XSD::string_ m_matrix_attr;
    };

    class CT_Extrusion: public XSD::ComplexType
    {
    public:
        CT_Extrusion();
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_Extrusion& default_instance();
        bool has_v_ext_attr() const;
        void set_v_ext_attr(const ns_v::ST_Ext& _v_ext_attr);
        const ns_v::ST_Ext& get_v_ext_attr() const;
        bool has_on_attr() const;
        void set_on_attr(const ns_s::ST_TrueFalse& _on_attr);
        const ns_s::ST_TrueFalse& get_on_attr() const;
        bool has_type_attr() const;
        void set_type_attr(const ST_ExtrusionType& _type_attr);
        const ST_ExtrusionType& get_type_attr() const;
        bool has_render_attr() const;
        void set_render_attr(const ST_ExtrusionRender& _render_attr);
        const ST_ExtrusionRender& get_render_attr() const;
        bool has_viewpointorigin_attr() const;
        void set_viewpointorigin_attr(const XSD::string_& _viewpointorigin_attr);
        const XSD::string_& get_viewpointorigin_attr() const;
        bool has_viewpoint_attr() const;
        void set_viewpoint_attr(const XSD::string_& _viewpoint_attr);
        const XSD::string_& get_viewpoint_attr() const;
        bool has_plane_attr() const;
        void set_plane_attr(const ST_ExtrusionPlane& _plane_attr);
        const ST_ExtrusionPlane& get_plane_attr() const;
        bool has_skewangle_attr() const;
        void set_skewangle_attr(const XSD::float_& _skewangle_attr);
        const XSD::float_& get_skewangle_attr() const;
        bool has_skewamt_attr() const;
        void set_skewamt_attr(const XSD::string_& _skewamt_attr);
        const XSD::string_& get_skewamt_attr() const;
        bool has_foredepth_attr() const;
        void set_foredepth_attr(const XSD::string_& _foredepth_attr);
        const XSD::string_& get_foredepth_attr() const;
        bool has_backdepth_attr() const;
        void set_backdepth_attr(const XSD::string_& _backdepth_attr);
        const XSD::string_& get_backdepth_attr() const;
        bool has_orientation_attr() const;
        void set_orientation_attr(const XSD::string_& _orientation_attr);
        const XSD::string_& get_orientation_attr() const;
        bool has_orientationangle_attr() const;
        void set_orientationangle_attr(const XSD::float_& _orientationangle_attr);
        const XSD::float_& get_orientationangle_attr() const;
        bool has_lockrotationcenter_attr() const;
        void set_lockrotationcenter_attr(const ns_s::ST_TrueFalse& _lockrotationcenter_attr);
        const ns_s::ST_TrueFalse& get_lockrotationcenter_attr() const;
        bool has_autorotationcenter_attr() const;
        void set_autorotationcenter_attr(const ns_s::ST_TrueFalse& _autorotationcenter_attr);
        const ns_s::ST_TrueFalse& get_autorotationcenter_attr() const;
        bool has_rotationcenter_attr() const;
        void set_rotationcenter_attr(const XSD::string_& _rotationcenter_attr);
        const XSD::string_& get_rotationcenter_attr() const;
        bool has_rotationangle_attr() const;
        void set_rotationangle_attr(const XSD::string_& _rotationangle_attr);
        const XSD::string_& get_rotationangle_attr() const;
        bool has_colormode_attr() const;
        void set_colormode_attr(const ST_ColorMode& _colormode_attr);
        const ST_ColorMode& get_colormode_attr() const;
        bool has_color_attr() const;
        void set_color_attr(const ns_s::ST_ColorType& _color_attr);
        const ns_s::ST_ColorType& get_color_attr() const;
        bool has_shininess_attr() const;
        void set_shininess_attr(const XSD::float_& _shininess_attr);
        const XSD::float_& get_shininess_attr() const;
        bool has_specularity_attr() const;
        void set_specularity_attr(const XSD::string_& _specularity_attr);
        const XSD::string_& get_specularity_attr() const;
        bool has_diffusity_attr() const;
        void set_diffusity_attr(const XSD::string_& _diffusity_attr);
        const XSD::string_& get_diffusity_attr() const;
        bool has_metal_attr() const;
        void set_metal_attr(const ns_s::ST_TrueFalse& _metal_attr);
        const ns_s::ST_TrueFalse& get_metal_attr() const;
        bool has_edge_attr() const;
        void set_edge_attr(const XSD::string_& _edge_attr);
        const XSD::string_& get_edge_attr() const;
        bool has_facet_attr() const;
        void set_facet_attr(const XSD::string_& _facet_attr);
        const XSD::string_& get_facet_attr() const;
        bool has_lightface_attr() const;
        void set_lightface_attr(const ns_s::ST_TrueFalse& _lightface_attr);
        const ns_s::ST_TrueFalse& get_lightface_attr() const;
        bool has_brightness_attr() const;
        void set_brightness_attr(const XSD::string_& _brightness_attr);
        const XSD::string_& get_brightness_attr() const;
        bool has_lightposition_attr() const;
        void set_lightposition_attr(const XSD::string_& _lightposition_attr);
        const XSD::string_& get_lightposition_attr() const;
        bool has_lightlevel_attr() const;
        void set_lightlevel_attr(const XSD::string_& _lightlevel_attr);
        const XSD::string_& get_lightlevel_attr() const;
        bool has_lightharsh_attr() const;
        void set_lightharsh_attr(const ns_s::ST_TrueFalse& _lightharsh_attr);
        const ns_s::ST_TrueFalse& get_lightharsh_attr() const;
        bool has_lightposition2_attr() const;
        void set_lightposition2_attr(const XSD::string_& _lightposition2_attr);
        const XSD::string_& get_lightposition2_attr() const;
        bool has_lightlevel2_attr() const;
        void set_lightlevel2_attr(const XSD::string_& _lightlevel2_attr);
        const XSD::string_& get_lightlevel2_attr() const;
        bool has_lightharsh2_attr() const;
        void set_lightharsh2_attr(const ns_s::ST_TrueFalse& _lightharsh2_attr);
        const ns_s::ST_TrueFalse& get_lightharsh2_attr() const;
    protected:
    private:
        static CT_Extrusion* default_instance_;
        bool m_has_v_ext_attr;
        ns_v::ST_Ext* m_v_ext_attr;
        bool m_has_on_attr;
        ns_s::ST_TrueFalse* m_on_attr;
        bool m_has_type_attr;
        ST_ExtrusionType* m_type_attr;
        bool m_has_render_attr;
        ST_ExtrusionRender* m_render_attr;
        bool m_has_viewpointorigin_attr;
        XSD::string_ m_viewpointorigin_attr;
        bool m_has_viewpoint_attr;
        XSD::string_ m_viewpoint_attr;
        bool m_has_plane_attr;
        ST_ExtrusionPlane* m_plane_attr;
        bool m_has_skewangle_attr;
        XSD::float_ m_skewangle_attr;
        bool m_has_skewamt_attr;
        XSD::string_ m_skewamt_attr;
        bool m_has_foredepth_attr;
        XSD::string_ m_foredepth_attr;
        bool m_has_backdepth_attr;
        XSD::string_ m_backdepth_attr;
        bool m_has_orientation_attr;
        XSD::string_ m_orientation_attr;
        bool m_has_orientationangle_attr;
        XSD::float_ m_orientationangle_attr;
        bool m_has_lockrotationcenter_attr;
        ns_s::ST_TrueFalse* m_lockrotationcenter_attr;
        bool m_has_autorotationcenter_attr;
        ns_s::ST_TrueFalse* m_autorotationcenter_attr;
        bool m_has_rotationcenter_attr;
        XSD::string_ m_rotationcenter_attr;
        bool m_has_rotationangle_attr;
        XSD::string_ m_rotationangle_attr;
        bool m_has_colormode_attr;
        ST_ColorMode* m_colormode_attr;
        bool m_has_color_attr;
        ns_s::ST_ColorType* m_color_attr;
        bool m_has_shininess_attr;
        XSD::float_ m_shininess_attr;
        bool m_has_specularity_attr;
        XSD::string_ m_specularity_attr;
        bool m_has_diffusity_attr;
        XSD::string_ m_diffusity_attr;
        bool m_has_metal_attr;
        ns_s::ST_TrueFalse* m_metal_attr;
        bool m_has_edge_attr;
        XSD::string_ m_edge_attr;
        bool m_has_facet_attr;
        XSD::string_ m_facet_attr;
        bool m_has_lightface_attr;
        ns_s::ST_TrueFalse* m_lightface_attr;
        bool m_has_brightness_attr;
        XSD::string_ m_brightness_attr;
        bool m_has_lightposition_attr;
        XSD::string_ m_lightposition_attr;
        bool m_has_lightlevel_attr;
        XSD::string_ m_lightlevel_attr;
        bool m_has_lightharsh_attr;
        ns_s::ST_TrueFalse* m_lightharsh_attr;
        bool m_has_lightposition2_attr;
        XSD::string_ m_lightposition2_attr;
        bool m_has_lightlevel2_attr;
        XSD::string_ m_lightlevel2_attr;
        bool m_has_lightharsh2_attr;
        ns_s::ST_TrueFalse* m_lightharsh2_attr;
    };

    class CT_Callout: public XSD::ComplexType
    {
    public:
        CT_Callout();
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_Callout& default_instance();
        bool has_v_ext_attr() const;
        void set_v_ext_attr(const ns_v::ST_Ext& _v_ext_attr);
        const ns_v::ST_Ext& get_v_ext_attr() const;
        bool has_on_attr() const;
        void set_on_attr(const ns_s::ST_TrueFalse& _on_attr);
        const ns_s::ST_TrueFalse& get_on_attr() const;
        bool has_type_attr() const;
        void set_type_attr(const XSD::string_& _type_attr);
        const XSD::string_& get_type_attr() const;
        bool has_gap_attr() const;
        void set_gap_attr(const XSD::string_& _gap_attr);
        const XSD::string_& get_gap_attr() const;
        bool has_angle_attr() const;
        void set_angle_attr(const ST_Angle& _angle_attr);
        const ST_Angle& get_angle_attr() const;
        bool has_dropauto_attr() const;
        void set_dropauto_attr(const ns_s::ST_TrueFalse& _dropauto_attr);
        const ns_s::ST_TrueFalse& get_dropauto_attr() const;
        bool has_drop_attr() const;
        void set_drop_attr(const ST_CalloutDrop& _drop_attr);
        const ST_CalloutDrop& get_drop_attr() const;
        bool has_distance_attr() const;
        void set_distance_attr(const XSD::string_& _distance_attr);
        const XSD::string_& get_distance_attr() const;
        bool has_lengthspecified_attr() const;
        void set_lengthspecified_attr(const ns_s::ST_TrueFalse& _lengthspecified_attr);
        const ns_s::ST_TrueFalse& get_lengthspecified_attr() const;
        bool has_length_attr() const;
        void set_length_attr(const XSD::string_& _length_attr);
        const XSD::string_& get_length_attr() const;
        bool has_accentbar_attr() const;
        void set_accentbar_attr(const ns_s::ST_TrueFalse& _accentbar_attr);
        const ns_s::ST_TrueFalse& get_accentbar_attr() const;
        bool has_textborder_attr() const;
        void set_textborder_attr(const ns_s::ST_TrueFalse& _textborder_attr);
        const ns_s::ST_TrueFalse& get_textborder_attr() const;
        bool has_minusx_attr() const;
        void set_minusx_attr(const ns_s::ST_TrueFalse& _minusx_attr);
        const ns_s::ST_TrueFalse& get_minusx_attr() const;
        bool has_minusy_attr() const;
        void set_minusy_attr(const ns_s::ST_TrueFalse& _minusy_attr);
        const ns_s::ST_TrueFalse& get_minusy_attr() const;
    protected:
    private:
        static CT_Callout* default_instance_;
        bool m_has_v_ext_attr;
        ns_v::ST_Ext* m_v_ext_attr;
        bool m_has_on_attr;
        ns_s::ST_TrueFalse* m_on_attr;
        bool m_has_type_attr;
        XSD::string_ m_type_attr;
        bool m_has_gap_attr;
        XSD::string_ m_gap_attr;
        bool m_has_angle_attr;
        ST_Angle* m_angle_attr;
        bool m_has_dropauto_attr;
        ns_s::ST_TrueFalse* m_dropauto_attr;
        bool m_has_drop_attr;
        ST_CalloutDrop* m_drop_attr;
        bool m_has_distance_attr;
        XSD::string_ m_distance_attr;
        bool m_has_lengthspecified_attr;
        ns_s::ST_TrueFalse* m_lengthspecified_attr;
        bool m_has_length_attr;
        XSD::string_ m_length_attr;
        bool m_has_accentbar_attr;
        ns_s::ST_TrueFalse* m_accentbar_attr;
        bool m_has_textborder_attr;
        ns_s::ST_TrueFalse* m_textborder_attr;
        bool m_has_minusx_attr;
        ns_s::ST_TrueFalse* m_minusx_attr;
        bool m_has_minusy_attr;
        ns_s::ST_TrueFalse* m_minusy_attr;
    };

    class CT_Lock: public XSD::ComplexType
    {
    public:
        CT_Lock();
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_Lock& default_instance();
        bool has_v_ext_attr() const;
        void set_v_ext_attr(const ns_v::ST_Ext& _v_ext_attr);
        const ns_v::ST_Ext& get_v_ext_attr() const;
        bool has_position_attr() const;
        void set_position_attr(const ns_s::ST_TrueFalse& _position_attr);
        const ns_s::ST_TrueFalse& get_position_attr() const;
        bool has_selection_attr() const;
        void set_selection_attr(const ns_s::ST_TrueFalse& _selection_attr);
        const ns_s::ST_TrueFalse& get_selection_attr() const;
        bool has_grouping_attr() const;
        void set_grouping_attr(const ns_s::ST_TrueFalse& _grouping_attr);
        const ns_s::ST_TrueFalse& get_grouping_attr() const;
        bool has_ungrouping_attr() const;
        void set_ungrouping_attr(const ns_s::ST_TrueFalse& _ungrouping_attr);
        const ns_s::ST_TrueFalse& get_ungrouping_attr() const;
        bool has_rotation_attr() const;
        void set_rotation_attr(const ns_s::ST_TrueFalse& _rotation_attr);
        const ns_s::ST_TrueFalse& get_rotation_attr() const;
        bool has_cropping_attr() const;
        void set_cropping_attr(const ns_s::ST_TrueFalse& _cropping_attr);
        const ns_s::ST_TrueFalse& get_cropping_attr() const;
        bool has_verticies_attr() const;
        void set_verticies_attr(const ns_s::ST_TrueFalse& _verticies_attr);
        const ns_s::ST_TrueFalse& get_verticies_attr() const;
        bool has_adjusthandles_attr() const;
        void set_adjusthandles_attr(const ns_s::ST_TrueFalse& _adjusthandles_attr);
        const ns_s::ST_TrueFalse& get_adjusthandles_attr() const;
        bool has_text_attr() const;
        void set_text_attr(const ns_s::ST_TrueFalse& _text_attr);
        const ns_s::ST_TrueFalse& get_text_attr() const;
        bool has_aspectratio_attr() const;
        void set_aspectratio_attr(const ns_s::ST_TrueFalse& _aspectratio_attr);
        const ns_s::ST_TrueFalse& get_aspectratio_attr() const;
        bool has_shapetype_attr() const;
        void set_shapetype_attr(const ns_s::ST_TrueFalse& _shapetype_attr);
        const ns_s::ST_TrueFalse& get_shapetype_attr() const;
    protected:
    private:
        static CT_Lock* default_instance_;
        bool m_has_v_ext_attr;
        ns_v::ST_Ext* m_v_ext_attr;
        bool m_has_position_attr;
        ns_s::ST_TrueFalse* m_position_attr;
        bool m_has_selection_attr;
        ns_s::ST_TrueFalse* m_selection_attr;
        bool m_has_grouping_attr;
        ns_s::ST_TrueFalse* m_grouping_attr;
        bool m_has_ungrouping_attr;
        ns_s::ST_TrueFalse* m_ungrouping_attr;
        bool m_has_rotation_attr;
        ns_s::ST_TrueFalse* m_rotation_attr;
        bool m_has_cropping_attr;
        ns_s::ST_TrueFalse* m_cropping_attr;
        bool m_has_verticies_attr;
        ns_s::ST_TrueFalse* m_verticies_attr;
        bool m_has_adjusthandles_attr;
        ns_s::ST_TrueFalse* m_adjusthandles_attr;
        bool m_has_text_attr;
        ns_s::ST_TrueFalse* m_text_attr;
        bool m_has_aspectratio_attr;
        ns_s::ST_TrueFalse* m_aspectratio_attr;
        bool m_has_shapetype_attr;
        ns_s::ST_TrueFalse* m_shapetype_attr;
    };

    class CT_OLEObject: public XSD::ComplexType
    {
    public:
        CT_OLEObject();
        bool has_LinkType() const;
        ST_OLELinkType* mutable_LinkType();
        const ST_OLELinkType& get_LinkType() const;
        bool has_LockedField() const;
        ns_s::ST_TrueFalseBlank* mutable_LockedField();
        const ns_s::ST_TrueFalseBlank& get_LockedField() const;
        bool has_FieldCodes() const;
        void set_FieldCodes(const XSD::string_& _FieldCodes);
        const XSD::string_& get_FieldCodes() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_OLEObject& default_instance();
        bool has_Type_attr() const;
        void set_Type_attr(const ST_OLEType& _Type_attr);
        const ST_OLEType& get_Type_attr() const;
        bool has_ProgID_attr() const;
        void set_ProgID_attr(const XSD::string_& _ProgID_attr);
        const XSD::string_& get_ProgID_attr() const;
        bool has_ShapeID_attr() const;
        void set_ShapeID_attr(const XSD::string_& _ShapeID_attr);
        const XSD::string_& get_ShapeID_attr() const;
        bool has_DrawAspect_attr() const;
        void set_DrawAspect_attr(const ST_OLEDrawAspect& _DrawAspect_attr);
        const ST_OLEDrawAspect& get_DrawAspect_attr() const;
        bool has_ObjectID_attr() const;
        void set_ObjectID_attr(const XSD::string_& _ObjectID_attr);
        const XSD::string_& get_ObjectID_attr() const;
        bool has_r_id_attr() const;
        void set_r_id_attr(const ns_r::ST_RelationshipId& _r_id_attr);
        const ns_r::ST_RelationshipId& get_r_id_attr() const;
        bool has_UpdateMode_attr() const;
        void set_UpdateMode_attr(const ST_OLEUpdateMode& _UpdateMode_attr);
        const ST_OLEUpdateMode& get_UpdateMode_attr() const;
    protected:
    private:
        bool m_has_LinkType;
        ST_OLELinkType* m_LinkType;
        bool m_has_LockedField;
        ns_s::ST_TrueFalseBlank* m_LockedField;
        bool m_has_FieldCodes;
        XSD::string_ m_FieldCodes;
        static CT_OLEObject* default_instance_;
        bool m_has_Type_attr;
        ST_OLEType* m_Type_attr;
        bool m_has_ProgID_attr;
        XSD::string_ m_ProgID_attr;
        bool m_has_ShapeID_attr;
        XSD::string_ m_ShapeID_attr;
        bool m_has_DrawAspect_attr;
        ST_OLEDrawAspect* m_DrawAspect_attr;
        bool m_has_ObjectID_attr;
        XSD::string_ m_ObjectID_attr;
        bool m_has_r_id_attr;
        ns_r::ST_RelationshipId* m_r_id_attr;
        bool m_has_UpdateMode_attr;
        ST_OLEUpdateMode* m_UpdateMode_attr;
    };

    class CT_Complex: public XSD::ComplexType
    {
    public:
        CT_Complex();
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_Complex& default_instance();
        bool has_v_ext_attr() const;
        void set_v_ext_attr(const ns_v::ST_Ext& _v_ext_attr);
        const ns_v::ST_Ext& get_v_ext_attr() const;
    protected:
    private:
        static CT_Complex* default_instance_;
        bool m_has_v_ext_attr;
        ns_v::ST_Ext* m_v_ext_attr;
    };

    class CT_StrokeChild: public XSD::ComplexType
    {
    public:
        CT_StrokeChild();
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_StrokeChild& default_instance();
        bool has_v_ext_attr() const;
        void set_v_ext_attr(const ns_v::ST_Ext& _v_ext_attr);
        const ns_v::ST_Ext& get_v_ext_attr() const;
        bool has_on_attr() const;
        void set_on_attr(const ns_s::ST_TrueFalse& _on_attr);
        const ns_s::ST_TrueFalse& get_on_attr() const;
        bool has_weight_attr() const;
        void set_weight_attr(const XSD::string_& _weight_attr);
        const XSD::string_& get_weight_attr() const;
        bool has_color_attr() const;
        void set_color_attr(const ns_s::ST_ColorType& _color_attr);
        const ns_s::ST_ColorType& get_color_attr() const;
        bool has_color2_attr() const;
        void set_color2_attr(const ns_s::ST_ColorType& _color2_attr);
        const ns_s::ST_ColorType& get_color2_attr() const;
        bool has_opacity_attr() const;
        void set_opacity_attr(const XSD::string_& _opacity_attr);
        const XSD::string_& get_opacity_attr() const;
        bool has_linestyle_attr() const;
        void set_linestyle_attr(const ns_v::ST_StrokeLineStyle& _linestyle_attr);
        const ns_v::ST_StrokeLineStyle& get_linestyle_attr() const;
        bool has_miterlimit_attr() const;
        void set_miterlimit_attr(const XSD::decimal_& _miterlimit_attr);
        const XSD::decimal_& get_miterlimit_attr() const;
        bool has_joinstyle_attr() const;
        void set_joinstyle_attr(const ns_v::ST_StrokeJoinStyle& _joinstyle_attr);
        const ns_v::ST_StrokeJoinStyle& get_joinstyle_attr() const;
        bool has_endcap_attr() const;
        void set_endcap_attr(const ns_v::ST_StrokeEndCap& _endcap_attr);
        const ns_v::ST_StrokeEndCap& get_endcap_attr() const;
        bool has_dashstyle_attr() const;
        void set_dashstyle_attr(const XSD::string_& _dashstyle_attr);
        const XSD::string_& get_dashstyle_attr() const;
        bool has_insetpen_attr() const;
        void set_insetpen_attr(const ns_s::ST_TrueFalse& _insetpen_attr);
        const ns_s::ST_TrueFalse& get_insetpen_attr() const;
        bool has_filltype_attr() const;
        void set_filltype_attr(const ns_v::ST_FillType& _filltype_attr);
        const ns_v::ST_FillType& get_filltype_attr() const;
        bool has_src_attr() const;
        void set_src_attr(const XSD::string_& _src_attr);
        const XSD::string_& get_src_attr() const;
        bool has_imageaspect_attr() const;
        void set_imageaspect_attr(const ns_v::ST_ImageAspect& _imageaspect_attr);
        const ns_v::ST_ImageAspect& get_imageaspect_attr() const;
        bool has_imagesize_attr() const;
        void set_imagesize_attr(const XSD::string_& _imagesize_attr);
        const XSD::string_& get_imagesize_attr() const;
        bool has_imagealignshape_attr() const;
        void set_imagealignshape_attr(const ns_s::ST_TrueFalse& _imagealignshape_attr);
        const ns_s::ST_TrueFalse& get_imagealignshape_attr() const;
        bool has_startarrow_attr() const;
        void set_startarrow_attr(const ns_v::ST_StrokeArrowType& _startarrow_attr);
        const ns_v::ST_StrokeArrowType& get_startarrow_attr() const;
        bool has_startarrowwidth_attr() const;
        void set_startarrowwidth_attr(const ns_v::ST_StrokeArrowWidth& _startarrowwidth_attr);
        const ns_v::ST_StrokeArrowWidth& get_startarrowwidth_attr() const;
        bool has_startarrowlength_attr() const;
        void set_startarrowlength_attr(const ns_v::ST_StrokeArrowLength& _startarrowlength_attr);
        const ns_v::ST_StrokeArrowLength& get_startarrowlength_attr() const;
        bool has_endarrow_attr() const;
        void set_endarrow_attr(const ns_v::ST_StrokeArrowType& _endarrow_attr);
        const ns_v::ST_StrokeArrowType& get_endarrow_attr() const;
        bool has_endarrowwidth_attr() const;
        void set_endarrowwidth_attr(const ns_v::ST_StrokeArrowWidth& _endarrowwidth_attr);
        const ns_v::ST_StrokeArrowWidth& get_endarrowwidth_attr() const;
        bool has_endarrowlength_attr() const;
        void set_endarrowlength_attr(const ns_v::ST_StrokeArrowLength& _endarrowlength_attr);
        const ns_v::ST_StrokeArrowLength& get_endarrowlength_attr() const;
        bool has_href_attr() const;
        void set_href_attr(const XSD::string_& _href_attr);
        const XSD::string_& get_href_attr() const;
        bool has_althref_attr() const;
        void set_althref_attr(const XSD::string_& _althref_attr);
        const XSD::string_& get_althref_attr() const;
        bool has_title_attr() const;
        void set_title_attr(const XSD::string_& _title_attr);
        const XSD::string_& get_title_attr() const;
        bool has_forcedash_attr() const;
        void set_forcedash_attr(const ns_s::ST_TrueFalse& _forcedash_attr);
        const ns_s::ST_TrueFalse& get_forcedash_attr() const;
    protected:
    private:
        static CT_StrokeChild* default_instance_;
        bool m_has_v_ext_attr;
        ns_v::ST_Ext* m_v_ext_attr;
        bool m_has_on_attr;
        ns_s::ST_TrueFalse* m_on_attr;
        bool m_has_weight_attr;
        XSD::string_ m_weight_attr;
        bool m_has_color_attr;
        ns_s::ST_ColorType* m_color_attr;
        bool m_has_color2_attr;
        ns_s::ST_ColorType* m_color2_attr;
        bool m_has_opacity_attr;
        XSD::string_ m_opacity_attr;
        bool m_has_linestyle_attr;
        ns_v::ST_StrokeLineStyle* m_linestyle_attr;
        bool m_has_miterlimit_attr;
        XSD::decimal_ m_miterlimit_attr;
        bool m_has_joinstyle_attr;
        ns_v::ST_StrokeJoinStyle* m_joinstyle_attr;
        bool m_has_endcap_attr;
        ns_v::ST_StrokeEndCap* m_endcap_attr;
        bool m_has_dashstyle_attr;
        XSD::string_ m_dashstyle_attr;
        bool m_has_insetpen_attr;
        ns_s::ST_TrueFalse* m_insetpen_attr;
        bool m_has_filltype_attr;
        ns_v::ST_FillType* m_filltype_attr;
        bool m_has_src_attr;
        XSD::string_ m_src_attr;
        bool m_has_imageaspect_attr;
        ns_v::ST_ImageAspect* m_imageaspect_attr;
        bool m_has_imagesize_attr;
        XSD::string_ m_imagesize_attr;
        bool m_has_imagealignshape_attr;
        ns_s::ST_TrueFalse* m_imagealignshape_attr;
        bool m_has_startarrow_attr;
        ns_v::ST_StrokeArrowType* m_startarrow_attr;
        bool m_has_startarrowwidth_attr;
        ns_v::ST_StrokeArrowWidth* m_startarrowwidth_attr;
        bool m_has_startarrowlength_attr;
        ns_v::ST_StrokeArrowLength* m_startarrowlength_attr;
        bool m_has_endarrow_attr;
        ns_v::ST_StrokeArrowType* m_endarrow_attr;
        bool m_has_endarrowwidth_attr;
        ns_v::ST_StrokeArrowWidth* m_endarrowwidth_attr;
        bool m_has_endarrowlength_attr;
        ns_v::ST_StrokeArrowLength* m_endarrowlength_attr;
        bool m_has_href_attr;
        XSD::string_ m_href_attr;
        bool m_has_althref_attr;
        XSD::string_ m_althref_attr;
        bool m_has_title_attr;
        XSD::string_ m_title_attr;
        bool m_has_forcedash_attr;
        ns_s::ST_TrueFalse* m_forcedash_attr;
    };

    class CT_ClipPath: public XSD::ComplexType
    {
    public:
        CT_ClipPath();
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_ClipPath& default_instance();
        bool has_v_attr() const;
        void set_v_attr(const XSD::string_& _v_attr);
        const XSD::string_& get_v_attr() const;
    protected:
    private:
        static CT_ClipPath* default_instance_;
        bool m_has_v_attr;
        XSD::string_ m_v_attr;
    };

    class CT_Fill: public XSD::ComplexType
    {
    public:
        CT_Fill();
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_Fill& default_instance();
        bool has_v_ext_attr() const;
        void set_v_ext_attr(const ns_v::ST_Ext& _v_ext_attr);
        const ns_v::ST_Ext& get_v_ext_attr() const;
        bool has_type_attr() const;
        void set_type_attr(const ST_FillType& _type_attr);
        const ST_FillType& get_type_attr() const;
    protected:
    private:
        static CT_Fill* default_instance_;
        bool m_has_v_ext_attr;
        ns_v::ST_Ext* m_v_ext_attr;
        bool m_has_type_attr;
        ST_FillType* m_type_attr;
    };

    class shapedefaults_element: public Element
    {
    public:
        shapedefaults_element();
        bool has_v_fill() const;
        ns_v::CT_Fill* mutable_v_fill();
        const ns_v::CT_Fill& get_v_fill() const;
        bool has_v_stroke() const;
        ns_v::CT_Stroke* mutable_v_stroke();
        const ns_v::CT_Stroke& get_v_stroke() const;
        bool has_v_textbox() const;
        ns_v::CT_Textbox* mutable_v_textbox();
        const ns_v::CT_Textbox& get_v_textbox() const;
        bool has_v_shadow() const;
        ns_v::CT_Shadow* mutable_v_shadow();
        const ns_v::CT_Shadow& get_v_shadow() const;
        bool has_skew() const;
        CT_Skew* mutable_skew();
        const CT_Skew& get_skew() const;
        bool has_extrusion() const;
        CT_Extrusion* mutable_extrusion();
        const CT_Extrusion& get_extrusion() const;
        bool has_callout() const;
        CT_Callout* mutable_callout();
        const CT_Callout& get_callout() const;
        bool has_lock() const;
        CT_Lock* mutable_lock();
        const CT_Lock& get_lock() const;
        bool has_colormru() const;
        CT_ColorMru* mutable_colormru();
        const CT_ColorMru& get_colormru() const;
        bool has_colormenu() const;
        CT_ColorMenu* mutable_colormenu();
        const CT_ColorMenu& get_colormenu() const;
        void clear();
        void toXml(std::ostream& _outStream) const;
        static const shapedefaults_element& default_instance();
        bool has_v_ext_attr() const;
        void set_v_ext_attr(const ns_v::ST_Ext& _v_ext_attr);
        const ns_v::ST_Ext& get_v_ext_attr() const;
        bool has_spidmax_attr() const;
        void set_spidmax_attr(const XSD::integer_& _spidmax_attr);
        const XSD::integer_& get_spidmax_attr() const;
        bool has_style_attr() const;
        void set_style_attr(const XSD::string_& _style_attr);
        const XSD::string_& get_style_attr() const;
        bool has_fill_attr() const;
        void set_fill_attr(const ns_s::ST_TrueFalse& _fill_attr);
        const ns_s::ST_TrueFalse& get_fill_attr() const;
        bool has_fillcolor_attr() const;
        void set_fillcolor_attr(const ns_s::ST_ColorType& _fillcolor_attr);
        const ns_s::ST_ColorType& get_fillcolor_attr() const;
        bool has_stroke_attr() const;
        void set_stroke_attr(const ns_s::ST_TrueFalse& _stroke_attr);
        const ns_s::ST_TrueFalse& get_stroke_attr() const;
        bool has_strokecolor_attr() const;
        void set_strokecolor_attr(const ns_s::ST_ColorType& _strokecolor_attr);
        const ns_s::ST_ColorType& get_strokecolor_attr() const;
        bool has_allowincell_attr() const;
        void set_allowincell_attr(const ns_s::ST_TrueFalse& _allowincell_attr);
        const ns_s::ST_TrueFalse& get_allowincell_attr() const;
    protected:
    private:
        bool m_has_v_fill;
        ns_v::CT_Fill* m_v_fill;
        bool m_has_v_stroke;
        ns_v::CT_Stroke* m_v_stroke;
        bool m_has_v_textbox;
        ns_v::CT_Textbox* m_v_textbox;
        bool m_has_v_shadow;
        ns_v::CT_Shadow* m_v_shadow;
        bool m_has_skew;
        CT_Skew* m_skew;
        bool m_has_extrusion;
        CT_Extrusion* m_extrusion;
        bool m_has_callout;
        CT_Callout* m_callout;
        bool m_has_lock;
        CT_Lock* m_lock;
        bool m_has_colormru;
        CT_ColorMru* m_colormru;
        bool m_has_colormenu;
        CT_ColorMenu* m_colormenu;
        static shapedefaults_element* default_instance_;
        bool m_has_v_ext_attr;
        ns_v::ST_Ext* m_v_ext_attr;
        bool m_has_spidmax_attr;
        XSD::integer_ m_spidmax_attr;
        bool m_has_style_attr;
        XSD::string_ m_style_attr;
        bool m_has_fill_attr;
        ns_s::ST_TrueFalse* m_fill_attr;
        bool m_has_fillcolor_attr;
        ns_s::ST_ColorType* m_fillcolor_attr;
        bool m_has_stroke_attr;
        ns_s::ST_TrueFalse* m_stroke_attr;
        bool m_has_strokecolor_attr;
        ns_s::ST_ColorType* m_strokecolor_attr;
        bool m_has_allowincell_attr;
        ns_s::ST_TrueFalse* m_allowincell_attr;
    };

    class shapelayout_element: public Element
    {
    public:
        shapelayout_element();
        bool has_idmap() const;
        CT_IdMap* mutable_idmap();
        const CT_IdMap& get_idmap() const;
        bool has_regrouptable() const;
        CT_RegroupTable* mutable_regrouptable();
        const CT_RegroupTable& get_regrouptable() const;
        bool has_rules() const;
        CT_Rules* mutable_rules();
        const CT_Rules& get_rules() const;
        void clear();
        void toXml(std::ostream& _outStream) const;
        static const shapelayout_element& default_instance();
        bool has_v_ext_attr() const;
        void set_v_ext_attr(const ns_v::ST_Ext& _v_ext_attr);
        const ns_v::ST_Ext& get_v_ext_attr() const;
    protected:
    private:
        bool m_has_idmap;
        CT_IdMap* m_idmap;
        bool m_has_regrouptable;
        CT_RegroupTable* m_regrouptable;
        bool m_has_rules;
        CT_Rules* m_rules;
        static shapelayout_element* default_instance_;
        bool m_has_v_ext_attr;
        ns_v::ST_Ext* m_v_ext_attr;
    };

    class signatureline_element: public Element
    {
    public:
        signatureline_element();
        void clear();
        void toXml(std::ostream& _outStream) const;
        static const signatureline_element& default_instance();
        bool has_v_ext_attr() const;
        void set_v_ext_attr(const ns_v::ST_Ext& _v_ext_attr);
        const ns_v::ST_Ext& get_v_ext_attr() const;
        bool has_issignatureline_attr() const;
        void set_issignatureline_attr(const ns_s::ST_TrueFalse& _issignatureline_attr);
        const ns_s::ST_TrueFalse& get_issignatureline_attr() const;
        bool has_id_attr() const;
        void set_id_attr(const ns_s::ST_Guid& _id_attr);
        const ns_s::ST_Guid& get_id_attr() const;
        bool has_provid_attr() const;
        void set_provid_attr(const ns_s::ST_Guid& _provid_attr);
        const ns_s::ST_Guid& get_provid_attr() const;
        bool has_signinginstructionsset_attr() const;
        void set_signinginstructionsset_attr(const ns_s::ST_TrueFalse& _signinginstructionsset_attr);
        const ns_s::ST_TrueFalse& get_signinginstructionsset_attr() const;
        bool has_allowcomments_attr() const;
        void set_allowcomments_attr(const ns_s::ST_TrueFalse& _allowcomments_attr);
        const ns_s::ST_TrueFalse& get_allowcomments_attr() const;
        bool has_showsigndate_attr() const;
        void set_showsigndate_attr(const ns_s::ST_TrueFalse& _showsigndate_attr);
        const ns_s::ST_TrueFalse& get_showsigndate_attr() const;
        bool has_suggestedsigner_attr() const;
        void set_suggestedsigner_attr(const XSD::string_& _suggestedsigner_attr);
        const XSD::string_& get_suggestedsigner_attr() const;
        bool has_suggestedsigner2_attr() const;
        void set_suggestedsigner2_attr(const XSD::string_& _suggestedsigner2_attr);
        const XSD::string_& get_suggestedsigner2_attr() const;
        bool has_suggestedsigneremail_attr() const;
        void set_suggestedsigneremail_attr(const XSD::string_& _suggestedsigneremail_attr);
        const XSD::string_& get_suggestedsigneremail_attr() const;
        bool has_signinginstructions_attr() const;
        void set_signinginstructions_attr(const XSD::string_& _signinginstructions_attr);
        const XSD::string_& get_signinginstructions_attr() const;
        bool has_addlxml_attr() const;
        void set_addlxml_attr(const XSD::string_& _addlxml_attr);
        const XSD::string_& get_addlxml_attr() const;
        bool has_sigprovurl_attr() const;
        void set_sigprovurl_attr(const XSD::string_& _sigprovurl_attr);
        const XSD::string_& get_sigprovurl_attr() const;
    protected:
    private:
        static signatureline_element* default_instance_;
        bool m_has_v_ext_attr;
        ns_v::ST_Ext* m_v_ext_attr;
        bool m_has_issignatureline_attr;
        ns_s::ST_TrueFalse* m_issignatureline_attr;
        bool m_has_id_attr;
        ns_s::ST_Guid* m_id_attr;
        bool m_has_provid_attr;
        ns_s::ST_Guid* m_provid_attr;
        bool m_has_signinginstructionsset_attr;
        ns_s::ST_TrueFalse* m_signinginstructionsset_attr;
        bool m_has_allowcomments_attr;
        ns_s::ST_TrueFalse* m_allowcomments_attr;
        bool m_has_showsigndate_attr;
        ns_s::ST_TrueFalse* m_showsigndate_attr;
        bool m_has_suggestedsigner_attr;
        XSD::string_ m_suggestedsigner_attr;
        bool m_has_suggestedsigner2_attr;
        XSD::string_ m_suggestedsigner2_attr;
        bool m_has_suggestedsigneremail_attr;
        XSD::string_ m_suggestedsigneremail_attr;
        bool m_has_signinginstructions_attr;
        XSD::string_ m_signinginstructions_attr;
        bool m_has_addlxml_attr;
        XSD::string_ m_addlxml_attr;
        bool m_has_sigprovurl_attr;
        XSD::string_ m_sigprovurl_attr;
    };

    class ink_element: public Element
    {
    public:
        ink_element();
        void clear();
        void toXml(std::ostream& _outStream) const;
        static const ink_element& default_instance();
        bool has_i_attr() const;
        void set_i_attr(const XSD::string_& _i_attr);
        const XSD::string_& get_i_attr() const;
        bool has_annotation_attr() const;
        void set_annotation_attr(const ns_s::ST_TrueFalse& _annotation_attr);
        const ns_s::ST_TrueFalse& get_annotation_attr() const;
        bool has_contentType_attr() const;
        void set_contentType_attr(const ST_ContentType& _contentType_attr);
        const ST_ContentType& get_contentType_attr() const;
    protected:
    private:
        static ink_element* default_instance_;
        bool m_has_i_attr;
        XSD::string_ m_i_attr;
        bool m_has_annotation_attr;
        ns_s::ST_TrueFalse* m_annotation_attr;
        bool m_has_contentType_attr;
        ST_ContentType* m_contentType_attr;
    };

    class diagram_element: public Element
    {
    public:
        diagram_element();
        bool has_relationtable() const;
        CT_RelationTable* mutable_relationtable();
        const CT_RelationTable& get_relationtable() const;
        void clear();
        void toXml(std::ostream& _outStream) const;
        static const diagram_element& default_instance();
        bool has_v_ext_attr() const;
        void set_v_ext_attr(const ns_v::ST_Ext& _v_ext_attr);
        const ns_v::ST_Ext& get_v_ext_attr() const;
        bool has_dgmstyle_attr() const;
        void set_dgmstyle_attr(const XSD::integer_& _dgmstyle_attr);
        const XSD::integer_& get_dgmstyle_attr() const;
        bool has_autoformat_attr() const;
        void set_autoformat_attr(const ns_s::ST_TrueFalse& _autoformat_attr);
        const ns_s::ST_TrueFalse& get_autoformat_attr() const;
        bool has_reverse_attr() const;
        void set_reverse_attr(const ns_s::ST_TrueFalse& _reverse_attr);
        const ns_s::ST_TrueFalse& get_reverse_attr() const;
        bool has_autolayout_attr() const;
        void set_autolayout_attr(const ns_s::ST_TrueFalse& _autolayout_attr);
        const ns_s::ST_TrueFalse& get_autolayout_attr() const;
        bool has_dgmscalex_attr() const;
        void set_dgmscalex_attr(const XSD::integer_& _dgmscalex_attr);
        const XSD::integer_& get_dgmscalex_attr() const;
        bool has_dgmscaley_attr() const;
        void set_dgmscaley_attr(const XSD::integer_& _dgmscaley_attr);
        const XSD::integer_& get_dgmscaley_attr() const;
        bool has_dgmfontsize_attr() const;
        void set_dgmfontsize_attr(const XSD::integer_& _dgmfontsize_attr);
        const XSD::integer_& get_dgmfontsize_attr() const;
        bool has_constrainbounds_attr() const;
        void set_constrainbounds_attr(const XSD::string_& _constrainbounds_attr);
        const XSD::string_& get_constrainbounds_attr() const;
        bool has_dgmbasetextscale_attr() const;
        void set_dgmbasetextscale_attr(const XSD::integer_& _dgmbasetextscale_attr);
        const XSD::integer_& get_dgmbasetextscale_attr() const;
    protected:
    private:
        bool m_has_relationtable;
        CT_RelationTable* m_relationtable;
        static diagram_element* default_instance_;
        bool m_has_v_ext_attr;
        ns_v::ST_Ext* m_v_ext_attr;
        bool m_has_dgmstyle_attr;
        XSD::integer_ m_dgmstyle_attr;
        bool m_has_autoformat_attr;
        ns_s::ST_TrueFalse* m_autoformat_attr;
        bool m_has_reverse_attr;
        ns_s::ST_TrueFalse* m_reverse_attr;
        bool m_has_autolayout_attr;
        ns_s::ST_TrueFalse* m_autolayout_attr;
        bool m_has_dgmscalex_attr;
        XSD::integer_ m_dgmscalex_attr;
        bool m_has_dgmscaley_attr;
        XSD::integer_ m_dgmscaley_attr;
        bool m_has_dgmfontsize_attr;
        XSD::integer_ m_dgmfontsize_attr;
        bool m_has_constrainbounds_attr;
        XSD::string_ m_constrainbounds_attr;
        bool m_has_dgmbasetextscale_attr;
        XSD::integer_ m_dgmbasetextscale_attr;
    };

    class equationxml_element: public Element
    {
    public:
        equationxml_element();
        void clear();
        void toXml(std::ostream& _outStream) const;
        static const equationxml_element& default_instance();
        bool has_contentType_attr() const;
        void set_contentType_attr(const ST_AlternateMathContentType& _contentType_attr);
        const ST_AlternateMathContentType& get_contentType_attr() const;
    protected:
    private:
        bool m_has__any;
        XSD::Element* m__any;
        static equationxml_element* default_instance_;
        bool m_has_contentType_attr;
        ST_AlternateMathContentType* m_contentType_attr;
    };

    class skew_element: public Element
    {
    public:
        skew_element();
        void clear();
        void toXml(std::ostream& _outStream) const;
        static const skew_element& default_instance();
        bool has_v_ext_attr() const;
        void set_v_ext_attr(const ns_v::ST_Ext& _v_ext_attr);
        const ns_v::ST_Ext& get_v_ext_attr() const;
        bool has_id_attr() const;
        void set_id_attr(const XSD::string_& _id_attr);
        const XSD::string_& get_id_attr() const;
        bool has_on_attr() const;
        void set_on_attr(const ns_s::ST_TrueFalse& _on_attr);
        const ns_s::ST_TrueFalse& get_on_attr() const;
        bool has_offset_attr() const;
        void set_offset_attr(const XSD::string_& _offset_attr);
        const XSD::string_& get_offset_attr() const;
        bool has_origin_attr() const;
        void set_origin_attr(const XSD::string_& _origin_attr);
        const XSD::string_& get_origin_attr() const;
        bool has_matrix_attr() const;
        void set_matrix_attr(const XSD::string_& _matrix_attr);
        const XSD::string_& get_matrix_attr() const;
    protected:
    private:
        static skew_element* default_instance_;
        bool m_has_v_ext_attr;
        ns_v::ST_Ext* m_v_ext_attr;
        bool m_has_id_attr;
        XSD::string_ m_id_attr;
        bool m_has_on_attr;
        ns_s::ST_TrueFalse* m_on_attr;
        bool m_has_offset_attr;
        XSD::string_ m_offset_attr;
        bool m_has_origin_attr;
        XSD::string_ m_origin_attr;
        bool m_has_matrix_attr;
        XSD::string_ m_matrix_attr;
    };

    class extrusion_element: public Element
    {
    public:
        extrusion_element();
        void clear();
        void toXml(std::ostream& _outStream) const;
        static const extrusion_element& default_instance();
        bool has_v_ext_attr() const;
        void set_v_ext_attr(const ns_v::ST_Ext& _v_ext_attr);
        const ns_v::ST_Ext& get_v_ext_attr() const;
        bool has_on_attr() const;
        void set_on_attr(const ns_s::ST_TrueFalse& _on_attr);
        const ns_s::ST_TrueFalse& get_on_attr() const;
        bool has_type_attr() const;
        void set_type_attr(const ST_ExtrusionType& _type_attr);
        const ST_ExtrusionType& get_type_attr() const;
        bool has_render_attr() const;
        void set_render_attr(const ST_ExtrusionRender& _render_attr);
        const ST_ExtrusionRender& get_render_attr() const;
        bool has_viewpointorigin_attr() const;
        void set_viewpointorigin_attr(const XSD::string_& _viewpointorigin_attr);
        const XSD::string_& get_viewpointorigin_attr() const;
        bool has_viewpoint_attr() const;
        void set_viewpoint_attr(const XSD::string_& _viewpoint_attr);
        const XSD::string_& get_viewpoint_attr() const;
        bool has_plane_attr() const;
        void set_plane_attr(const ST_ExtrusionPlane& _plane_attr);
        const ST_ExtrusionPlane& get_plane_attr() const;
        bool has_skewangle_attr() const;
        void set_skewangle_attr(const XSD::float_& _skewangle_attr);
        const XSD::float_& get_skewangle_attr() const;
        bool has_skewamt_attr() const;
        void set_skewamt_attr(const XSD::string_& _skewamt_attr);
        const XSD::string_& get_skewamt_attr() const;
        bool has_foredepth_attr() const;
        void set_foredepth_attr(const XSD::string_& _foredepth_attr);
        const XSD::string_& get_foredepth_attr() const;
        bool has_backdepth_attr() const;
        void set_backdepth_attr(const XSD::string_& _backdepth_attr);
        const XSD::string_& get_backdepth_attr() const;
        bool has_orientation_attr() const;
        void set_orientation_attr(const XSD::string_& _orientation_attr);
        const XSD::string_& get_orientation_attr() const;
        bool has_orientationangle_attr() const;
        void set_orientationangle_attr(const XSD::float_& _orientationangle_attr);
        const XSD::float_& get_orientationangle_attr() const;
        bool has_lockrotationcenter_attr() const;
        void set_lockrotationcenter_attr(const ns_s::ST_TrueFalse& _lockrotationcenter_attr);
        const ns_s::ST_TrueFalse& get_lockrotationcenter_attr() const;
        bool has_autorotationcenter_attr() const;
        void set_autorotationcenter_attr(const ns_s::ST_TrueFalse& _autorotationcenter_attr);
        const ns_s::ST_TrueFalse& get_autorotationcenter_attr() const;
        bool has_rotationcenter_attr() const;
        void set_rotationcenter_attr(const XSD::string_& _rotationcenter_attr);
        const XSD::string_& get_rotationcenter_attr() const;
        bool has_rotationangle_attr() const;
        void set_rotationangle_attr(const XSD::string_& _rotationangle_attr);
        const XSD::string_& get_rotationangle_attr() const;
        bool has_colormode_attr() const;
        void set_colormode_attr(const ST_ColorMode& _colormode_attr);
        const ST_ColorMode& get_colormode_attr() const;
        bool has_color_attr() const;
        void set_color_attr(const ns_s::ST_ColorType& _color_attr);
        const ns_s::ST_ColorType& get_color_attr() const;
        bool has_shininess_attr() const;
        void set_shininess_attr(const XSD::float_& _shininess_attr);
        const XSD::float_& get_shininess_attr() const;
        bool has_specularity_attr() const;
        void set_specularity_attr(const XSD::string_& _specularity_attr);
        const XSD::string_& get_specularity_attr() const;
        bool has_diffusity_attr() const;
        void set_diffusity_attr(const XSD::string_& _diffusity_attr);
        const XSD::string_& get_diffusity_attr() const;
        bool has_metal_attr() const;
        void set_metal_attr(const ns_s::ST_TrueFalse& _metal_attr);
        const ns_s::ST_TrueFalse& get_metal_attr() const;
        bool has_edge_attr() const;
        void set_edge_attr(const XSD::string_& _edge_attr);
        const XSD::string_& get_edge_attr() const;
        bool has_facet_attr() const;
        void set_facet_attr(const XSD::string_& _facet_attr);
        const XSD::string_& get_facet_attr() const;
        bool has_lightface_attr() const;
        void set_lightface_attr(const ns_s::ST_TrueFalse& _lightface_attr);
        const ns_s::ST_TrueFalse& get_lightface_attr() const;
        bool has_brightness_attr() const;
        void set_brightness_attr(const XSD::string_& _brightness_attr);
        const XSD::string_& get_brightness_attr() const;
        bool has_lightposition_attr() const;
        void set_lightposition_attr(const XSD::string_& _lightposition_attr);
        const XSD::string_& get_lightposition_attr() const;
        bool has_lightlevel_attr() const;
        void set_lightlevel_attr(const XSD::string_& _lightlevel_attr);
        const XSD::string_& get_lightlevel_attr() const;
        bool has_lightharsh_attr() const;
        void set_lightharsh_attr(const ns_s::ST_TrueFalse& _lightharsh_attr);
        const ns_s::ST_TrueFalse& get_lightharsh_attr() const;
        bool has_lightposition2_attr() const;
        void set_lightposition2_attr(const XSD::string_& _lightposition2_attr);
        const XSD::string_& get_lightposition2_attr() const;
        bool has_lightlevel2_attr() const;
        void set_lightlevel2_attr(const XSD::string_& _lightlevel2_attr);
        const XSD::string_& get_lightlevel2_attr() const;
        bool has_lightharsh2_attr() const;
        void set_lightharsh2_attr(const ns_s::ST_TrueFalse& _lightharsh2_attr);
        const ns_s::ST_TrueFalse& get_lightharsh2_attr() const;
    protected:
    private:
        static extrusion_element* default_instance_;
        bool m_has_v_ext_attr;
        ns_v::ST_Ext* m_v_ext_attr;
        bool m_has_on_attr;
        ns_s::ST_TrueFalse* m_on_attr;
        bool m_has_type_attr;
        ST_ExtrusionType* m_type_attr;
        bool m_has_render_attr;
        ST_ExtrusionRender* m_render_attr;
        bool m_has_viewpointorigin_attr;
        XSD::string_ m_viewpointorigin_attr;
        bool m_has_viewpoint_attr;
        XSD::string_ m_viewpoint_attr;
        bool m_has_plane_attr;
        ST_ExtrusionPlane* m_plane_attr;
        bool m_has_skewangle_attr;
        XSD::float_ m_skewangle_attr;
        bool m_has_skewamt_attr;
        XSD::string_ m_skewamt_attr;
        bool m_has_foredepth_attr;
        XSD::string_ m_foredepth_attr;
        bool m_has_backdepth_attr;
        XSD::string_ m_backdepth_attr;
        bool m_has_orientation_attr;
        XSD::string_ m_orientation_attr;
        bool m_has_orientationangle_attr;
        XSD::float_ m_orientationangle_attr;
        bool m_has_lockrotationcenter_attr;
        ns_s::ST_TrueFalse* m_lockrotationcenter_attr;
        bool m_has_autorotationcenter_attr;
        ns_s::ST_TrueFalse* m_autorotationcenter_attr;
        bool m_has_rotationcenter_attr;
        XSD::string_ m_rotationcenter_attr;
        bool m_has_rotationangle_attr;
        XSD::string_ m_rotationangle_attr;
        bool m_has_colormode_attr;
        ST_ColorMode* m_colormode_attr;
        bool m_has_color_attr;
        ns_s::ST_ColorType* m_color_attr;
        bool m_has_shininess_attr;
        XSD::float_ m_shininess_attr;
        bool m_has_specularity_attr;
        XSD::string_ m_specularity_attr;
        bool m_has_diffusity_attr;
        XSD::string_ m_diffusity_attr;
        bool m_has_metal_attr;
        ns_s::ST_TrueFalse* m_metal_attr;
        bool m_has_edge_attr;
        XSD::string_ m_edge_attr;
        bool m_has_facet_attr;
        XSD::string_ m_facet_attr;
        bool m_has_lightface_attr;
        ns_s::ST_TrueFalse* m_lightface_attr;
        bool m_has_brightness_attr;
        XSD::string_ m_brightness_attr;
        bool m_has_lightposition_attr;
        XSD::string_ m_lightposition_attr;
        bool m_has_lightlevel_attr;
        XSD::string_ m_lightlevel_attr;
        bool m_has_lightharsh_attr;
        ns_s::ST_TrueFalse* m_lightharsh_attr;
        bool m_has_lightposition2_attr;
        XSD::string_ m_lightposition2_attr;
        bool m_has_lightlevel2_attr;
        XSD::string_ m_lightlevel2_attr;
        bool m_has_lightharsh2_attr;
        ns_s::ST_TrueFalse* m_lightharsh2_attr;
    };

    class callout_element: public Element
    {
    public:
        callout_element();
        void clear();
        void toXml(std::ostream& _outStream) const;
        static const callout_element& default_instance();
        bool has_v_ext_attr() const;
        void set_v_ext_attr(const ns_v::ST_Ext& _v_ext_attr);
        const ns_v::ST_Ext& get_v_ext_attr() const;
        bool has_on_attr() const;
        void set_on_attr(const ns_s::ST_TrueFalse& _on_attr);
        const ns_s::ST_TrueFalse& get_on_attr() const;
        bool has_type_attr() const;
        void set_type_attr(const XSD::string_& _type_attr);
        const XSD::string_& get_type_attr() const;
        bool has_gap_attr() const;
        void set_gap_attr(const XSD::string_& _gap_attr);
        const XSD::string_& get_gap_attr() const;
        bool has_angle_attr() const;
        void set_angle_attr(const ST_Angle& _angle_attr);
        const ST_Angle& get_angle_attr() const;
        bool has_dropauto_attr() const;
        void set_dropauto_attr(const ns_s::ST_TrueFalse& _dropauto_attr);
        const ns_s::ST_TrueFalse& get_dropauto_attr() const;
        bool has_drop_attr() const;
        void set_drop_attr(const ST_CalloutDrop& _drop_attr);
        const ST_CalloutDrop& get_drop_attr() const;
        bool has_distance_attr() const;
        void set_distance_attr(const XSD::string_& _distance_attr);
        const XSD::string_& get_distance_attr() const;
        bool has_lengthspecified_attr() const;
        void set_lengthspecified_attr(const ns_s::ST_TrueFalse& _lengthspecified_attr);
        const ns_s::ST_TrueFalse& get_lengthspecified_attr() const;
        bool has_length_attr() const;
        void set_length_attr(const XSD::string_& _length_attr);
        const XSD::string_& get_length_attr() const;
        bool has_accentbar_attr() const;
        void set_accentbar_attr(const ns_s::ST_TrueFalse& _accentbar_attr);
        const ns_s::ST_TrueFalse& get_accentbar_attr() const;
        bool has_textborder_attr() const;
        void set_textborder_attr(const ns_s::ST_TrueFalse& _textborder_attr);
        const ns_s::ST_TrueFalse& get_textborder_attr() const;
        bool has_minusx_attr() const;
        void set_minusx_attr(const ns_s::ST_TrueFalse& _minusx_attr);
        const ns_s::ST_TrueFalse& get_minusx_attr() const;
        bool has_minusy_attr() const;
        void set_minusy_attr(const ns_s::ST_TrueFalse& _minusy_attr);
        const ns_s::ST_TrueFalse& get_minusy_attr() const;
    protected:
    private:
        static callout_element* default_instance_;
        bool m_has_v_ext_attr;
        ns_v::ST_Ext* m_v_ext_attr;
        bool m_has_on_attr;
        ns_s::ST_TrueFalse* m_on_attr;
        bool m_has_type_attr;
        XSD::string_ m_type_attr;
        bool m_has_gap_attr;
        XSD::string_ m_gap_attr;
        bool m_has_angle_attr;
        ST_Angle* m_angle_attr;
        bool m_has_dropauto_attr;
        ns_s::ST_TrueFalse* m_dropauto_attr;
        bool m_has_drop_attr;
        ST_CalloutDrop* m_drop_attr;
        bool m_has_distance_attr;
        XSD::string_ m_distance_attr;
        bool m_has_lengthspecified_attr;
        ns_s::ST_TrueFalse* m_lengthspecified_attr;
        bool m_has_length_attr;
        XSD::string_ m_length_attr;
        bool m_has_accentbar_attr;
        ns_s::ST_TrueFalse* m_accentbar_attr;
        bool m_has_textborder_attr;
        ns_s::ST_TrueFalse* m_textborder_attr;
        bool m_has_minusx_attr;
        ns_s::ST_TrueFalse* m_minusx_attr;
        bool m_has_minusy_attr;
        ns_s::ST_TrueFalse* m_minusy_attr;
    };

    class lock_element: public Element
    {
    public:
        lock_element();
        void clear();
        void toXml(std::ostream& _outStream) const;
        static const lock_element& default_instance();
        bool has_v_ext_attr() const;
        void set_v_ext_attr(const ns_v::ST_Ext& _v_ext_attr);
        const ns_v::ST_Ext& get_v_ext_attr() const;
        bool has_position_attr() const;
        void set_position_attr(const ns_s::ST_TrueFalse& _position_attr);
        const ns_s::ST_TrueFalse& get_position_attr() const;
        bool has_selection_attr() const;
        void set_selection_attr(const ns_s::ST_TrueFalse& _selection_attr);
        const ns_s::ST_TrueFalse& get_selection_attr() const;
        bool has_grouping_attr() const;
        void set_grouping_attr(const ns_s::ST_TrueFalse& _grouping_attr);
        const ns_s::ST_TrueFalse& get_grouping_attr() const;
        bool has_ungrouping_attr() const;
        void set_ungrouping_attr(const ns_s::ST_TrueFalse& _ungrouping_attr);
        const ns_s::ST_TrueFalse& get_ungrouping_attr() const;
        bool has_rotation_attr() const;
        void set_rotation_attr(const ns_s::ST_TrueFalse& _rotation_attr);
        const ns_s::ST_TrueFalse& get_rotation_attr() const;
        bool has_cropping_attr() const;
        void set_cropping_attr(const ns_s::ST_TrueFalse& _cropping_attr);
        const ns_s::ST_TrueFalse& get_cropping_attr() const;
        bool has_verticies_attr() const;
        void set_verticies_attr(const ns_s::ST_TrueFalse& _verticies_attr);
        const ns_s::ST_TrueFalse& get_verticies_attr() const;
        bool has_adjusthandles_attr() const;
        void set_adjusthandles_attr(const ns_s::ST_TrueFalse& _adjusthandles_attr);
        const ns_s::ST_TrueFalse& get_adjusthandles_attr() const;
        bool has_text_attr() const;
        void set_text_attr(const ns_s::ST_TrueFalse& _text_attr);
        const ns_s::ST_TrueFalse& get_text_attr() const;
        bool has_aspectratio_attr() const;
        void set_aspectratio_attr(const ns_s::ST_TrueFalse& _aspectratio_attr);
        const ns_s::ST_TrueFalse& get_aspectratio_attr() const;
        bool has_shapetype_attr() const;
        void set_shapetype_attr(const ns_s::ST_TrueFalse& _shapetype_attr);
        const ns_s::ST_TrueFalse& get_shapetype_attr() const;
    protected:
    private:
        static lock_element* default_instance_;
        bool m_has_v_ext_attr;
        ns_v::ST_Ext* m_v_ext_attr;
        bool m_has_position_attr;
        ns_s::ST_TrueFalse* m_position_attr;
        bool m_has_selection_attr;
        ns_s::ST_TrueFalse* m_selection_attr;
        bool m_has_grouping_attr;
        ns_s::ST_TrueFalse* m_grouping_attr;
        bool m_has_ungrouping_attr;
        ns_s::ST_TrueFalse* m_ungrouping_attr;
        bool m_has_rotation_attr;
        ns_s::ST_TrueFalse* m_rotation_attr;
        bool m_has_cropping_attr;
        ns_s::ST_TrueFalse* m_cropping_attr;
        bool m_has_verticies_attr;
        ns_s::ST_TrueFalse* m_verticies_attr;
        bool m_has_adjusthandles_attr;
        ns_s::ST_TrueFalse* m_adjusthandles_attr;
        bool m_has_text_attr;
        ns_s::ST_TrueFalse* m_text_attr;
        bool m_has_aspectratio_attr;
        ns_s::ST_TrueFalse* m_aspectratio_attr;
        bool m_has_shapetype_attr;
        ns_s::ST_TrueFalse* m_shapetype_attr;
    };

    class OLEObject_element: public Element
    {
    public:
        OLEObject_element();
        bool has_LinkType() const;
        ST_OLELinkType* mutable_LinkType();
        const ST_OLELinkType& get_LinkType() const;
        bool has_LockedField() const;
        ns_s::ST_TrueFalseBlank* mutable_LockedField();
        const ns_s::ST_TrueFalseBlank& get_LockedField() const;
        bool has_FieldCodes() const;
        void set_FieldCodes(const XSD::string_& _FieldCodes);
        const XSD::string_& get_FieldCodes() const;
        void clear();
        void toXml(std::ostream& _outStream) const;
        static const OLEObject_element& default_instance();
        bool has_Type_attr() const;
        void set_Type_attr(const ST_OLEType& _Type_attr);
        const ST_OLEType& get_Type_attr() const;
        bool has_ProgID_attr() const;
        void set_ProgID_attr(const XSD::string_& _ProgID_attr);
        const XSD::string_& get_ProgID_attr() const;
        bool has_ShapeID_attr() const;
        void set_ShapeID_attr(const XSD::string_& _ShapeID_attr);
        const XSD::string_& get_ShapeID_attr() const;
        bool has_DrawAspect_attr() const;
        void set_DrawAspect_attr(const ST_OLEDrawAspect& _DrawAspect_attr);
        const ST_OLEDrawAspect& get_DrawAspect_attr() const;
        bool has_ObjectID_attr() const;
        void set_ObjectID_attr(const XSD::string_& _ObjectID_attr);
        const XSD::string_& get_ObjectID_attr() const;
        bool has_r_id_attr() const;
        void set_r_id_attr(const ns_r::ST_RelationshipId& _r_id_attr);
        const ns_r::ST_RelationshipId& get_r_id_attr() const;
        bool has_UpdateMode_attr() const;
        void set_UpdateMode_attr(const ST_OLEUpdateMode& _UpdateMode_attr);
        const ST_OLEUpdateMode& get_UpdateMode_attr() const;
    protected:
    private:
        bool m_has_LinkType;
        ST_OLELinkType* m_LinkType;
        bool m_has_LockedField;
        ns_s::ST_TrueFalseBlank* m_LockedField;
        bool m_has_FieldCodes;
        XSD::string_ m_FieldCodes;
        static OLEObject_element* default_instance_;
        bool m_has_Type_attr;
        ST_OLEType* m_Type_attr;
        bool m_has_ProgID_attr;
        XSD::string_ m_ProgID_attr;
        bool m_has_ShapeID_attr;
        XSD::string_ m_ShapeID_attr;
        bool m_has_DrawAspect_attr;
        ST_OLEDrawAspect* m_DrawAspect_attr;
        bool m_has_ObjectID_attr;
        XSD::string_ m_ObjectID_attr;
        bool m_has_r_id_attr;
        ns_r::ST_RelationshipId* m_r_id_attr;
        bool m_has_UpdateMode_attr;
        ST_OLEUpdateMode* m_UpdateMode_attr;
    };

    class complex_element: public Element
    {
    public:
        complex_element();
        void clear();
        void toXml(std::ostream& _outStream) const;
        static const complex_element& default_instance();
        bool has_v_ext_attr() const;
        void set_v_ext_attr(const ns_v::ST_Ext& _v_ext_attr);
        const ns_v::ST_Ext& get_v_ext_attr() const;
    protected:
    private:
        static complex_element* default_instance_;
        bool m_has_v_ext_attr;
        ns_v::ST_Ext* m_v_ext_attr;
    };

    class left_element: public Element
    {
    public:
        left_element();
        void clear();
        void toXml(std::ostream& _outStream) const;
        static const left_element& default_instance();
        bool has_v_ext_attr() const;
        void set_v_ext_attr(const ns_v::ST_Ext& _v_ext_attr);
        const ns_v::ST_Ext& get_v_ext_attr() const;
        bool has_on_attr() const;
        void set_on_attr(const ns_s::ST_TrueFalse& _on_attr);
        const ns_s::ST_TrueFalse& get_on_attr() const;
        bool has_weight_attr() const;
        void set_weight_attr(const XSD::string_& _weight_attr);
        const XSD::string_& get_weight_attr() const;
        bool has_color_attr() const;
        void set_color_attr(const ns_s::ST_ColorType& _color_attr);
        const ns_s::ST_ColorType& get_color_attr() const;
        bool has_color2_attr() const;
        void set_color2_attr(const ns_s::ST_ColorType& _color2_attr);
        const ns_s::ST_ColorType& get_color2_attr() const;
        bool has_opacity_attr() const;
        void set_opacity_attr(const XSD::string_& _opacity_attr);
        const XSD::string_& get_opacity_attr() const;
        bool has_linestyle_attr() const;
        void set_linestyle_attr(const ns_v::ST_StrokeLineStyle& _linestyle_attr);
        const ns_v::ST_StrokeLineStyle& get_linestyle_attr() const;
        bool has_miterlimit_attr() const;
        void set_miterlimit_attr(const XSD::decimal_& _miterlimit_attr);
        const XSD::decimal_& get_miterlimit_attr() const;
        bool has_joinstyle_attr() const;
        void set_joinstyle_attr(const ns_v::ST_StrokeJoinStyle& _joinstyle_attr);
        const ns_v::ST_StrokeJoinStyle& get_joinstyle_attr() const;
        bool has_endcap_attr() const;
        void set_endcap_attr(const ns_v::ST_StrokeEndCap& _endcap_attr);
        const ns_v::ST_StrokeEndCap& get_endcap_attr() const;
        bool has_dashstyle_attr() const;
        void set_dashstyle_attr(const XSD::string_& _dashstyle_attr);
        const XSD::string_& get_dashstyle_attr() const;
        bool has_insetpen_attr() const;
        void set_insetpen_attr(const ns_s::ST_TrueFalse& _insetpen_attr);
        const ns_s::ST_TrueFalse& get_insetpen_attr() const;
        bool has_filltype_attr() const;
        void set_filltype_attr(const ns_v::ST_FillType& _filltype_attr);
        const ns_v::ST_FillType& get_filltype_attr() const;
        bool has_src_attr() const;
        void set_src_attr(const XSD::string_& _src_attr);
        const XSD::string_& get_src_attr() const;
        bool has_imageaspect_attr() const;
        void set_imageaspect_attr(const ns_v::ST_ImageAspect& _imageaspect_attr);
        const ns_v::ST_ImageAspect& get_imageaspect_attr() const;
        bool has_imagesize_attr() const;
        void set_imagesize_attr(const XSD::string_& _imagesize_attr);
        const XSD::string_& get_imagesize_attr() const;
        bool has_imagealignshape_attr() const;
        void set_imagealignshape_attr(const ns_s::ST_TrueFalse& _imagealignshape_attr);
        const ns_s::ST_TrueFalse& get_imagealignshape_attr() const;
        bool has_startarrow_attr() const;
        void set_startarrow_attr(const ns_v::ST_StrokeArrowType& _startarrow_attr);
        const ns_v::ST_StrokeArrowType& get_startarrow_attr() const;
        bool has_startarrowwidth_attr() const;
        void set_startarrowwidth_attr(const ns_v::ST_StrokeArrowWidth& _startarrowwidth_attr);
        const ns_v::ST_StrokeArrowWidth& get_startarrowwidth_attr() const;
        bool has_startarrowlength_attr() const;
        void set_startarrowlength_attr(const ns_v::ST_StrokeArrowLength& _startarrowlength_attr);
        const ns_v::ST_StrokeArrowLength& get_startarrowlength_attr() const;
        bool has_endarrow_attr() const;
        void set_endarrow_attr(const ns_v::ST_StrokeArrowType& _endarrow_attr);
        const ns_v::ST_StrokeArrowType& get_endarrow_attr() const;
        bool has_endarrowwidth_attr() const;
        void set_endarrowwidth_attr(const ns_v::ST_StrokeArrowWidth& _endarrowwidth_attr);
        const ns_v::ST_StrokeArrowWidth& get_endarrowwidth_attr() const;
        bool has_endarrowlength_attr() const;
        void set_endarrowlength_attr(const ns_v::ST_StrokeArrowLength& _endarrowlength_attr);
        const ns_v::ST_StrokeArrowLength& get_endarrowlength_attr() const;
        bool has_href_attr() const;
        void set_href_attr(const XSD::string_& _href_attr);
        const XSD::string_& get_href_attr() const;
        bool has_althref_attr() const;
        void set_althref_attr(const XSD::string_& _althref_attr);
        const XSD::string_& get_althref_attr() const;
        bool has_title_attr() const;
        void set_title_attr(const XSD::string_& _title_attr);
        const XSD::string_& get_title_attr() const;
        bool has_forcedash_attr() const;
        void set_forcedash_attr(const ns_s::ST_TrueFalse& _forcedash_attr);
        const ns_s::ST_TrueFalse& get_forcedash_attr() const;
    protected:
    private:
        static left_element* default_instance_;
        bool m_has_v_ext_attr;
        ns_v::ST_Ext* m_v_ext_attr;
        bool m_has_on_attr;
        ns_s::ST_TrueFalse* m_on_attr;
        bool m_has_weight_attr;
        XSD::string_ m_weight_attr;
        bool m_has_color_attr;
        ns_s::ST_ColorType* m_color_attr;
        bool m_has_color2_attr;
        ns_s::ST_ColorType* m_color2_attr;
        bool m_has_opacity_attr;
        XSD::string_ m_opacity_attr;
        bool m_has_linestyle_attr;
        ns_v::ST_StrokeLineStyle* m_linestyle_attr;
        bool m_has_miterlimit_attr;
        XSD::decimal_ m_miterlimit_attr;
        bool m_has_joinstyle_attr;
        ns_v::ST_StrokeJoinStyle* m_joinstyle_attr;
        bool m_has_endcap_attr;
        ns_v::ST_StrokeEndCap* m_endcap_attr;
        bool m_has_dashstyle_attr;
        XSD::string_ m_dashstyle_attr;
        bool m_has_insetpen_attr;
        ns_s::ST_TrueFalse* m_insetpen_attr;
        bool m_has_filltype_attr;
        ns_v::ST_FillType* m_filltype_attr;
        bool m_has_src_attr;
        XSD::string_ m_src_attr;
        bool m_has_imageaspect_attr;
        ns_v::ST_ImageAspect* m_imageaspect_attr;
        bool m_has_imagesize_attr;
        XSD::string_ m_imagesize_attr;
        bool m_has_imagealignshape_attr;
        ns_s::ST_TrueFalse* m_imagealignshape_attr;
        bool m_has_startarrow_attr;
        ns_v::ST_StrokeArrowType* m_startarrow_attr;
        bool m_has_startarrowwidth_attr;
        ns_v::ST_StrokeArrowWidth* m_startarrowwidth_attr;
        bool m_has_startarrowlength_attr;
        ns_v::ST_StrokeArrowLength* m_startarrowlength_attr;
        bool m_has_endarrow_attr;
        ns_v::ST_StrokeArrowType* m_endarrow_attr;
        bool m_has_endarrowwidth_attr;
        ns_v::ST_StrokeArrowWidth* m_endarrowwidth_attr;
        bool m_has_endarrowlength_attr;
        ns_v::ST_StrokeArrowLength* m_endarrowlength_attr;
        bool m_has_href_attr;
        XSD::string_ m_href_attr;
        bool m_has_althref_attr;
        XSD::string_ m_althref_attr;
        bool m_has_title_attr;
        XSD::string_ m_title_attr;
        bool m_has_forcedash_attr;
        ns_s::ST_TrueFalse* m_forcedash_attr;
    };

    class top_element: public Element
    {
    public:
        top_element();
        void clear();
        void toXml(std::ostream& _outStream) const;
        static const top_element& default_instance();
        bool has_v_ext_attr() const;
        void set_v_ext_attr(const ns_v::ST_Ext& _v_ext_attr);
        const ns_v::ST_Ext& get_v_ext_attr() const;
        bool has_on_attr() const;
        void set_on_attr(const ns_s::ST_TrueFalse& _on_attr);
        const ns_s::ST_TrueFalse& get_on_attr() const;
        bool has_weight_attr() const;
        void set_weight_attr(const XSD::string_& _weight_attr);
        const XSD::string_& get_weight_attr() const;
        bool has_color_attr() const;
        void set_color_attr(const ns_s::ST_ColorType& _color_attr);
        const ns_s::ST_ColorType& get_color_attr() const;
        bool has_color2_attr() const;
        void set_color2_attr(const ns_s::ST_ColorType& _color2_attr);
        const ns_s::ST_ColorType& get_color2_attr() const;
        bool has_opacity_attr() const;
        void set_opacity_attr(const XSD::string_& _opacity_attr);
        const XSD::string_& get_opacity_attr() const;
        bool has_linestyle_attr() const;
        void set_linestyle_attr(const ns_v::ST_StrokeLineStyle& _linestyle_attr);
        const ns_v::ST_StrokeLineStyle& get_linestyle_attr() const;
        bool has_miterlimit_attr() const;
        void set_miterlimit_attr(const XSD::decimal_& _miterlimit_attr);
        const XSD::decimal_& get_miterlimit_attr() const;
        bool has_joinstyle_attr() const;
        void set_joinstyle_attr(const ns_v::ST_StrokeJoinStyle& _joinstyle_attr);
        const ns_v::ST_StrokeJoinStyle& get_joinstyle_attr() const;
        bool has_endcap_attr() const;
        void set_endcap_attr(const ns_v::ST_StrokeEndCap& _endcap_attr);
        const ns_v::ST_StrokeEndCap& get_endcap_attr() const;
        bool has_dashstyle_attr() const;
        void set_dashstyle_attr(const XSD::string_& _dashstyle_attr);
        const XSD::string_& get_dashstyle_attr() const;
        bool has_insetpen_attr() const;
        void set_insetpen_attr(const ns_s::ST_TrueFalse& _insetpen_attr);
        const ns_s::ST_TrueFalse& get_insetpen_attr() const;
        bool has_filltype_attr() const;
        void set_filltype_attr(const ns_v::ST_FillType& _filltype_attr);
        const ns_v::ST_FillType& get_filltype_attr() const;
        bool has_src_attr() const;
        void set_src_attr(const XSD::string_& _src_attr);
        const XSD::string_& get_src_attr() const;
        bool has_imageaspect_attr() const;
        void set_imageaspect_attr(const ns_v::ST_ImageAspect& _imageaspect_attr);
        const ns_v::ST_ImageAspect& get_imageaspect_attr() const;
        bool has_imagesize_attr() const;
        void set_imagesize_attr(const XSD::string_& _imagesize_attr);
        const XSD::string_& get_imagesize_attr() const;
        bool has_imagealignshape_attr() const;
        void set_imagealignshape_attr(const ns_s::ST_TrueFalse& _imagealignshape_attr);
        const ns_s::ST_TrueFalse& get_imagealignshape_attr() const;
        bool has_startarrow_attr() const;
        void set_startarrow_attr(const ns_v::ST_StrokeArrowType& _startarrow_attr);
        const ns_v::ST_StrokeArrowType& get_startarrow_attr() const;
        bool has_startarrowwidth_attr() const;
        void set_startarrowwidth_attr(const ns_v::ST_StrokeArrowWidth& _startarrowwidth_attr);
        const ns_v::ST_StrokeArrowWidth& get_startarrowwidth_attr() const;
        bool has_startarrowlength_attr() const;
        void set_startarrowlength_attr(const ns_v::ST_StrokeArrowLength& _startarrowlength_attr);
        const ns_v::ST_StrokeArrowLength& get_startarrowlength_attr() const;
        bool has_endarrow_attr() const;
        void set_endarrow_attr(const ns_v::ST_StrokeArrowType& _endarrow_attr);
        const ns_v::ST_StrokeArrowType& get_endarrow_attr() const;
        bool has_endarrowwidth_attr() const;
        void set_endarrowwidth_attr(const ns_v::ST_StrokeArrowWidth& _endarrowwidth_attr);
        const ns_v::ST_StrokeArrowWidth& get_endarrowwidth_attr() const;
        bool has_endarrowlength_attr() const;
        void set_endarrowlength_attr(const ns_v::ST_StrokeArrowLength& _endarrowlength_attr);
        const ns_v::ST_StrokeArrowLength& get_endarrowlength_attr() const;
        bool has_href_attr() const;
        void set_href_attr(const XSD::string_& _href_attr);
        const XSD::string_& get_href_attr() const;
        bool has_althref_attr() const;
        void set_althref_attr(const XSD::string_& _althref_attr);
        const XSD::string_& get_althref_attr() const;
        bool has_title_attr() const;
        void set_title_attr(const XSD::string_& _title_attr);
        const XSD::string_& get_title_attr() const;
        bool has_forcedash_attr() const;
        void set_forcedash_attr(const ns_s::ST_TrueFalse& _forcedash_attr);
        const ns_s::ST_TrueFalse& get_forcedash_attr() const;
    protected:
    private:
        static top_element* default_instance_;
        bool m_has_v_ext_attr;
        ns_v::ST_Ext* m_v_ext_attr;
        bool m_has_on_attr;
        ns_s::ST_TrueFalse* m_on_attr;
        bool m_has_weight_attr;
        XSD::string_ m_weight_attr;
        bool m_has_color_attr;
        ns_s::ST_ColorType* m_color_attr;
        bool m_has_color2_attr;
        ns_s::ST_ColorType* m_color2_attr;
        bool m_has_opacity_attr;
        XSD::string_ m_opacity_attr;
        bool m_has_linestyle_attr;
        ns_v::ST_StrokeLineStyle* m_linestyle_attr;
        bool m_has_miterlimit_attr;
        XSD::decimal_ m_miterlimit_attr;
        bool m_has_joinstyle_attr;
        ns_v::ST_StrokeJoinStyle* m_joinstyle_attr;
        bool m_has_endcap_attr;
        ns_v::ST_StrokeEndCap* m_endcap_attr;
        bool m_has_dashstyle_attr;
        XSD::string_ m_dashstyle_attr;
        bool m_has_insetpen_attr;
        ns_s::ST_TrueFalse* m_insetpen_attr;
        bool m_has_filltype_attr;
        ns_v::ST_FillType* m_filltype_attr;
        bool m_has_src_attr;
        XSD::string_ m_src_attr;
        bool m_has_imageaspect_attr;
        ns_v::ST_ImageAspect* m_imageaspect_attr;
        bool m_has_imagesize_attr;
        XSD::string_ m_imagesize_attr;
        bool m_has_imagealignshape_attr;
        ns_s::ST_TrueFalse* m_imagealignshape_attr;
        bool m_has_startarrow_attr;
        ns_v::ST_StrokeArrowType* m_startarrow_attr;
        bool m_has_startarrowwidth_attr;
        ns_v::ST_StrokeArrowWidth* m_startarrowwidth_attr;
        bool m_has_startarrowlength_attr;
        ns_v::ST_StrokeArrowLength* m_startarrowlength_attr;
        bool m_has_endarrow_attr;
        ns_v::ST_StrokeArrowType* m_endarrow_attr;
        bool m_has_endarrowwidth_attr;
        ns_v::ST_StrokeArrowWidth* m_endarrowwidth_attr;
        bool m_has_endarrowlength_attr;
        ns_v::ST_StrokeArrowLength* m_endarrowlength_attr;
        bool m_has_href_attr;
        XSD::string_ m_href_attr;
        bool m_has_althref_attr;
        XSD::string_ m_althref_attr;
        bool m_has_title_attr;
        XSD::string_ m_title_attr;
        bool m_has_forcedash_attr;
        ns_s::ST_TrueFalse* m_forcedash_attr;
    };

    class right_element: public Element
    {
    public:
        right_element();
        void clear();
        void toXml(std::ostream& _outStream) const;
        static const right_element& default_instance();
        bool has_v_ext_attr() const;
        void set_v_ext_attr(const ns_v::ST_Ext& _v_ext_attr);
        const ns_v::ST_Ext& get_v_ext_attr() const;
        bool has_on_attr() const;
        void set_on_attr(const ns_s::ST_TrueFalse& _on_attr);
        const ns_s::ST_TrueFalse& get_on_attr() const;
        bool has_weight_attr() const;
        void set_weight_attr(const XSD::string_& _weight_attr);
        const XSD::string_& get_weight_attr() const;
        bool has_color_attr() const;
        void set_color_attr(const ns_s::ST_ColorType& _color_attr);
        const ns_s::ST_ColorType& get_color_attr() const;
        bool has_color2_attr() const;
        void set_color2_attr(const ns_s::ST_ColorType& _color2_attr);
        const ns_s::ST_ColorType& get_color2_attr() const;
        bool has_opacity_attr() const;
        void set_opacity_attr(const XSD::string_& _opacity_attr);
        const XSD::string_& get_opacity_attr() const;
        bool has_linestyle_attr() const;
        void set_linestyle_attr(const ns_v::ST_StrokeLineStyle& _linestyle_attr);
        const ns_v::ST_StrokeLineStyle& get_linestyle_attr() const;
        bool has_miterlimit_attr() const;
        void set_miterlimit_attr(const XSD::decimal_& _miterlimit_attr);
        const XSD::decimal_& get_miterlimit_attr() const;
        bool has_joinstyle_attr() const;
        void set_joinstyle_attr(const ns_v::ST_StrokeJoinStyle& _joinstyle_attr);
        const ns_v::ST_StrokeJoinStyle& get_joinstyle_attr() const;
        bool has_endcap_attr() const;
        void set_endcap_attr(const ns_v::ST_StrokeEndCap& _endcap_attr);
        const ns_v::ST_StrokeEndCap& get_endcap_attr() const;
        bool has_dashstyle_attr() const;
        void set_dashstyle_attr(const XSD::string_& _dashstyle_attr);
        const XSD::string_& get_dashstyle_attr() const;
        bool has_insetpen_attr() const;
        void set_insetpen_attr(const ns_s::ST_TrueFalse& _insetpen_attr);
        const ns_s::ST_TrueFalse& get_insetpen_attr() const;
        bool has_filltype_attr() const;
        void set_filltype_attr(const ns_v::ST_FillType& _filltype_attr);
        const ns_v::ST_FillType& get_filltype_attr() const;
        bool has_src_attr() const;
        void set_src_attr(const XSD::string_& _src_attr);
        const XSD::string_& get_src_attr() const;
        bool has_imageaspect_attr() const;
        void set_imageaspect_attr(const ns_v::ST_ImageAspect& _imageaspect_attr);
        const ns_v::ST_ImageAspect& get_imageaspect_attr() const;
        bool has_imagesize_attr() const;
        void set_imagesize_attr(const XSD::string_& _imagesize_attr);
        const XSD::string_& get_imagesize_attr() const;
        bool has_imagealignshape_attr() const;
        void set_imagealignshape_attr(const ns_s::ST_TrueFalse& _imagealignshape_attr);
        const ns_s::ST_TrueFalse& get_imagealignshape_attr() const;
        bool has_startarrow_attr() const;
        void set_startarrow_attr(const ns_v::ST_StrokeArrowType& _startarrow_attr);
        const ns_v::ST_StrokeArrowType& get_startarrow_attr() const;
        bool has_startarrowwidth_attr() const;
        void set_startarrowwidth_attr(const ns_v::ST_StrokeArrowWidth& _startarrowwidth_attr);
        const ns_v::ST_StrokeArrowWidth& get_startarrowwidth_attr() const;
        bool has_startarrowlength_attr() const;
        void set_startarrowlength_attr(const ns_v::ST_StrokeArrowLength& _startarrowlength_attr);
        const ns_v::ST_StrokeArrowLength& get_startarrowlength_attr() const;
        bool has_endarrow_attr() const;
        void set_endarrow_attr(const ns_v::ST_StrokeArrowType& _endarrow_attr);
        const ns_v::ST_StrokeArrowType& get_endarrow_attr() const;
        bool has_endarrowwidth_attr() const;
        void set_endarrowwidth_attr(const ns_v::ST_StrokeArrowWidth& _endarrowwidth_attr);
        const ns_v::ST_StrokeArrowWidth& get_endarrowwidth_attr() const;
        bool has_endarrowlength_attr() const;
        void set_endarrowlength_attr(const ns_v::ST_StrokeArrowLength& _endarrowlength_attr);
        const ns_v::ST_StrokeArrowLength& get_endarrowlength_attr() const;
        bool has_href_attr() const;
        void set_href_attr(const XSD::string_& _href_attr);
        const XSD::string_& get_href_attr() const;
        bool has_althref_attr() const;
        void set_althref_attr(const XSD::string_& _althref_attr);
        const XSD::string_& get_althref_attr() const;
        bool has_title_attr() const;
        void set_title_attr(const XSD::string_& _title_attr);
        const XSD::string_& get_title_attr() const;
        bool has_forcedash_attr() const;
        void set_forcedash_attr(const ns_s::ST_TrueFalse& _forcedash_attr);
        const ns_s::ST_TrueFalse& get_forcedash_attr() const;
    protected:
    private:
        static right_element* default_instance_;
        bool m_has_v_ext_attr;
        ns_v::ST_Ext* m_v_ext_attr;
        bool m_has_on_attr;
        ns_s::ST_TrueFalse* m_on_attr;
        bool m_has_weight_attr;
        XSD::string_ m_weight_attr;
        bool m_has_color_attr;
        ns_s::ST_ColorType* m_color_attr;
        bool m_has_color2_attr;
        ns_s::ST_ColorType* m_color2_attr;
        bool m_has_opacity_attr;
        XSD::string_ m_opacity_attr;
        bool m_has_linestyle_attr;
        ns_v::ST_StrokeLineStyle* m_linestyle_attr;
        bool m_has_miterlimit_attr;
        XSD::decimal_ m_miterlimit_attr;
        bool m_has_joinstyle_attr;
        ns_v::ST_StrokeJoinStyle* m_joinstyle_attr;
        bool m_has_endcap_attr;
        ns_v::ST_StrokeEndCap* m_endcap_attr;
        bool m_has_dashstyle_attr;
        XSD::string_ m_dashstyle_attr;
        bool m_has_insetpen_attr;
        ns_s::ST_TrueFalse* m_insetpen_attr;
        bool m_has_filltype_attr;
        ns_v::ST_FillType* m_filltype_attr;
        bool m_has_src_attr;
        XSD::string_ m_src_attr;
        bool m_has_imageaspect_attr;
        ns_v::ST_ImageAspect* m_imageaspect_attr;
        bool m_has_imagesize_attr;
        XSD::string_ m_imagesize_attr;
        bool m_has_imagealignshape_attr;
        ns_s::ST_TrueFalse* m_imagealignshape_attr;
        bool m_has_startarrow_attr;
        ns_v::ST_StrokeArrowType* m_startarrow_attr;
        bool m_has_startarrowwidth_attr;
        ns_v::ST_StrokeArrowWidth* m_startarrowwidth_attr;
        bool m_has_startarrowlength_attr;
        ns_v::ST_StrokeArrowLength* m_startarrowlength_attr;
        bool m_has_endarrow_attr;
        ns_v::ST_StrokeArrowType* m_endarrow_attr;
        bool m_has_endarrowwidth_attr;
        ns_v::ST_StrokeArrowWidth* m_endarrowwidth_attr;
        bool m_has_endarrowlength_attr;
        ns_v::ST_StrokeArrowLength* m_endarrowlength_attr;
        bool m_has_href_attr;
        XSD::string_ m_href_attr;
        bool m_has_althref_attr;
        XSD::string_ m_althref_attr;
        bool m_has_title_attr;
        XSD::string_ m_title_attr;
        bool m_has_forcedash_attr;
        ns_s::ST_TrueFalse* m_forcedash_attr;
    };

    class bottom_element: public Element
    {
    public:
        bottom_element();
        void clear();
        void toXml(std::ostream& _outStream) const;
        static const bottom_element& default_instance();
        bool has_v_ext_attr() const;
        void set_v_ext_attr(const ns_v::ST_Ext& _v_ext_attr);
        const ns_v::ST_Ext& get_v_ext_attr() const;
        bool has_on_attr() const;
        void set_on_attr(const ns_s::ST_TrueFalse& _on_attr);
        const ns_s::ST_TrueFalse& get_on_attr() const;
        bool has_weight_attr() const;
        void set_weight_attr(const XSD::string_& _weight_attr);
        const XSD::string_& get_weight_attr() const;
        bool has_color_attr() const;
        void set_color_attr(const ns_s::ST_ColorType& _color_attr);
        const ns_s::ST_ColorType& get_color_attr() const;
        bool has_color2_attr() const;
        void set_color2_attr(const ns_s::ST_ColorType& _color2_attr);
        const ns_s::ST_ColorType& get_color2_attr() const;
        bool has_opacity_attr() const;
        void set_opacity_attr(const XSD::string_& _opacity_attr);
        const XSD::string_& get_opacity_attr() const;
        bool has_linestyle_attr() const;
        void set_linestyle_attr(const ns_v::ST_StrokeLineStyle& _linestyle_attr);
        const ns_v::ST_StrokeLineStyle& get_linestyle_attr() const;
        bool has_miterlimit_attr() const;
        void set_miterlimit_attr(const XSD::decimal_& _miterlimit_attr);
        const XSD::decimal_& get_miterlimit_attr() const;
        bool has_joinstyle_attr() const;
        void set_joinstyle_attr(const ns_v::ST_StrokeJoinStyle& _joinstyle_attr);
        const ns_v::ST_StrokeJoinStyle& get_joinstyle_attr() const;
        bool has_endcap_attr() const;
        void set_endcap_attr(const ns_v::ST_StrokeEndCap& _endcap_attr);
        const ns_v::ST_StrokeEndCap& get_endcap_attr() const;
        bool has_dashstyle_attr() const;
        void set_dashstyle_attr(const XSD::string_& _dashstyle_attr);
        const XSD::string_& get_dashstyle_attr() const;
        bool has_insetpen_attr() const;
        void set_insetpen_attr(const ns_s::ST_TrueFalse& _insetpen_attr);
        const ns_s::ST_TrueFalse& get_insetpen_attr() const;
        bool has_filltype_attr() const;
        void set_filltype_attr(const ns_v::ST_FillType& _filltype_attr);
        const ns_v::ST_FillType& get_filltype_attr() const;
        bool has_src_attr() const;
        void set_src_attr(const XSD::string_& _src_attr);
        const XSD::string_& get_src_attr() const;
        bool has_imageaspect_attr() const;
        void set_imageaspect_attr(const ns_v::ST_ImageAspect& _imageaspect_attr);
        const ns_v::ST_ImageAspect& get_imageaspect_attr() const;
        bool has_imagesize_attr() const;
        void set_imagesize_attr(const XSD::string_& _imagesize_attr);
        const XSD::string_& get_imagesize_attr() const;
        bool has_imagealignshape_attr() const;
        void set_imagealignshape_attr(const ns_s::ST_TrueFalse& _imagealignshape_attr);
        const ns_s::ST_TrueFalse& get_imagealignshape_attr() const;
        bool has_startarrow_attr() const;
        void set_startarrow_attr(const ns_v::ST_StrokeArrowType& _startarrow_attr);
        const ns_v::ST_StrokeArrowType& get_startarrow_attr() const;
        bool has_startarrowwidth_attr() const;
        void set_startarrowwidth_attr(const ns_v::ST_StrokeArrowWidth& _startarrowwidth_attr);
        const ns_v::ST_StrokeArrowWidth& get_startarrowwidth_attr() const;
        bool has_startarrowlength_attr() const;
        void set_startarrowlength_attr(const ns_v::ST_StrokeArrowLength& _startarrowlength_attr);
        const ns_v::ST_StrokeArrowLength& get_startarrowlength_attr() const;
        bool has_endarrow_attr() const;
        void set_endarrow_attr(const ns_v::ST_StrokeArrowType& _endarrow_attr);
        const ns_v::ST_StrokeArrowType& get_endarrow_attr() const;
        bool has_endarrowwidth_attr() const;
        void set_endarrowwidth_attr(const ns_v::ST_StrokeArrowWidth& _endarrowwidth_attr);
        const ns_v::ST_StrokeArrowWidth& get_endarrowwidth_attr() const;
        bool has_endarrowlength_attr() const;
        void set_endarrowlength_attr(const ns_v::ST_StrokeArrowLength& _endarrowlength_attr);
        const ns_v::ST_StrokeArrowLength& get_endarrowlength_attr() const;
        bool has_href_attr() const;
        void set_href_attr(const XSD::string_& _href_attr);
        const XSD::string_& get_href_attr() const;
        bool has_althref_attr() const;
        void set_althref_attr(const XSD::string_& _althref_attr);
        const XSD::string_& get_althref_attr() const;
        bool has_title_attr() const;
        void set_title_attr(const XSD::string_& _title_attr);
        const XSD::string_& get_title_attr() const;
        bool has_forcedash_attr() const;
        void set_forcedash_attr(const ns_s::ST_TrueFalse& _forcedash_attr);
        const ns_s::ST_TrueFalse& get_forcedash_attr() const;
    protected:
    private:
        static bottom_element* default_instance_;
        bool m_has_v_ext_attr;
        ns_v::ST_Ext* m_v_ext_attr;
        bool m_has_on_attr;
        ns_s::ST_TrueFalse* m_on_attr;
        bool m_has_weight_attr;
        XSD::string_ m_weight_attr;
        bool m_has_color_attr;
        ns_s::ST_ColorType* m_color_attr;
        bool m_has_color2_attr;
        ns_s::ST_ColorType* m_color2_attr;
        bool m_has_opacity_attr;
        XSD::string_ m_opacity_attr;
        bool m_has_linestyle_attr;
        ns_v::ST_StrokeLineStyle* m_linestyle_attr;
        bool m_has_miterlimit_attr;
        XSD::decimal_ m_miterlimit_attr;
        bool m_has_joinstyle_attr;
        ns_v::ST_StrokeJoinStyle* m_joinstyle_attr;
        bool m_has_endcap_attr;
        ns_v::ST_StrokeEndCap* m_endcap_attr;
        bool m_has_dashstyle_attr;
        XSD::string_ m_dashstyle_attr;
        bool m_has_insetpen_attr;
        ns_s::ST_TrueFalse* m_insetpen_attr;
        bool m_has_filltype_attr;
        ns_v::ST_FillType* m_filltype_attr;
        bool m_has_src_attr;
        XSD::string_ m_src_attr;
        bool m_has_imageaspect_attr;
        ns_v::ST_ImageAspect* m_imageaspect_attr;
        bool m_has_imagesize_attr;
        XSD::string_ m_imagesize_attr;
        bool m_has_imagealignshape_attr;
        ns_s::ST_TrueFalse* m_imagealignshape_attr;
        bool m_has_startarrow_attr;
        ns_v::ST_StrokeArrowType* m_startarrow_attr;
        bool m_has_startarrowwidth_attr;
        ns_v::ST_StrokeArrowWidth* m_startarrowwidth_attr;
        bool m_has_startarrowlength_attr;
        ns_v::ST_StrokeArrowLength* m_startarrowlength_attr;
        bool m_has_endarrow_attr;
        ns_v::ST_StrokeArrowType* m_endarrow_attr;
        bool m_has_endarrowwidth_attr;
        ns_v::ST_StrokeArrowWidth* m_endarrowwidth_attr;
        bool m_has_endarrowlength_attr;
        ns_v::ST_StrokeArrowLength* m_endarrowlength_attr;
        bool m_has_href_attr;
        XSD::string_ m_href_attr;
        bool m_has_althref_attr;
        XSD::string_ m_althref_attr;
        bool m_has_title_attr;
        XSD::string_ m_title_attr;
        bool m_has_forcedash_attr;
        ns_s::ST_TrueFalse* m_forcedash_attr;
    };

    class column_element: public Element
    {
    public:
        column_element();
        void clear();
        void toXml(std::ostream& _outStream) const;
        static const column_element& default_instance();
        bool has_v_ext_attr() const;
        void set_v_ext_attr(const ns_v::ST_Ext& _v_ext_attr);
        const ns_v::ST_Ext& get_v_ext_attr() const;
        bool has_on_attr() const;
        void set_on_attr(const ns_s::ST_TrueFalse& _on_attr);
        const ns_s::ST_TrueFalse& get_on_attr() const;
        bool has_weight_attr() const;
        void set_weight_attr(const XSD::string_& _weight_attr);
        const XSD::string_& get_weight_attr() const;
        bool has_color_attr() const;
        void set_color_attr(const ns_s::ST_ColorType& _color_attr);
        const ns_s::ST_ColorType& get_color_attr() const;
        bool has_color2_attr() const;
        void set_color2_attr(const ns_s::ST_ColorType& _color2_attr);
        const ns_s::ST_ColorType& get_color2_attr() const;
        bool has_opacity_attr() const;
        void set_opacity_attr(const XSD::string_& _opacity_attr);
        const XSD::string_& get_opacity_attr() const;
        bool has_linestyle_attr() const;
        void set_linestyle_attr(const ns_v::ST_StrokeLineStyle& _linestyle_attr);
        const ns_v::ST_StrokeLineStyle& get_linestyle_attr() const;
        bool has_miterlimit_attr() const;
        void set_miterlimit_attr(const XSD::decimal_& _miterlimit_attr);
        const XSD::decimal_& get_miterlimit_attr() const;
        bool has_joinstyle_attr() const;
        void set_joinstyle_attr(const ns_v::ST_StrokeJoinStyle& _joinstyle_attr);
        const ns_v::ST_StrokeJoinStyle& get_joinstyle_attr() const;
        bool has_endcap_attr() const;
        void set_endcap_attr(const ns_v::ST_StrokeEndCap& _endcap_attr);
        const ns_v::ST_StrokeEndCap& get_endcap_attr() const;
        bool has_dashstyle_attr() const;
        void set_dashstyle_attr(const XSD::string_& _dashstyle_attr);
        const XSD::string_& get_dashstyle_attr() const;
        bool has_insetpen_attr() const;
        void set_insetpen_attr(const ns_s::ST_TrueFalse& _insetpen_attr);
        const ns_s::ST_TrueFalse& get_insetpen_attr() const;
        bool has_filltype_attr() const;
        void set_filltype_attr(const ns_v::ST_FillType& _filltype_attr);
        const ns_v::ST_FillType& get_filltype_attr() const;
        bool has_src_attr() const;
        void set_src_attr(const XSD::string_& _src_attr);
        const XSD::string_& get_src_attr() const;
        bool has_imageaspect_attr() const;
        void set_imageaspect_attr(const ns_v::ST_ImageAspect& _imageaspect_attr);
        const ns_v::ST_ImageAspect& get_imageaspect_attr() const;
        bool has_imagesize_attr() const;
        void set_imagesize_attr(const XSD::string_& _imagesize_attr);
        const XSD::string_& get_imagesize_attr() const;
        bool has_imagealignshape_attr() const;
        void set_imagealignshape_attr(const ns_s::ST_TrueFalse& _imagealignshape_attr);
        const ns_s::ST_TrueFalse& get_imagealignshape_attr() const;
        bool has_startarrow_attr() const;
        void set_startarrow_attr(const ns_v::ST_StrokeArrowType& _startarrow_attr);
        const ns_v::ST_StrokeArrowType& get_startarrow_attr() const;
        bool has_startarrowwidth_attr() const;
        void set_startarrowwidth_attr(const ns_v::ST_StrokeArrowWidth& _startarrowwidth_attr);
        const ns_v::ST_StrokeArrowWidth& get_startarrowwidth_attr() const;
        bool has_startarrowlength_attr() const;
        void set_startarrowlength_attr(const ns_v::ST_StrokeArrowLength& _startarrowlength_attr);
        const ns_v::ST_StrokeArrowLength& get_startarrowlength_attr() const;
        bool has_endarrow_attr() const;
        void set_endarrow_attr(const ns_v::ST_StrokeArrowType& _endarrow_attr);
        const ns_v::ST_StrokeArrowType& get_endarrow_attr() const;
        bool has_endarrowwidth_attr() const;
        void set_endarrowwidth_attr(const ns_v::ST_StrokeArrowWidth& _endarrowwidth_attr);
        const ns_v::ST_StrokeArrowWidth& get_endarrowwidth_attr() const;
        bool has_endarrowlength_attr() const;
        void set_endarrowlength_attr(const ns_v::ST_StrokeArrowLength& _endarrowlength_attr);
        const ns_v::ST_StrokeArrowLength& get_endarrowlength_attr() const;
        bool has_href_attr() const;
        void set_href_attr(const XSD::string_& _href_attr);
        const XSD::string_& get_href_attr() const;
        bool has_althref_attr() const;
        void set_althref_attr(const XSD::string_& _althref_attr);
        const XSD::string_& get_althref_attr() const;
        bool has_title_attr() const;
        void set_title_attr(const XSD::string_& _title_attr);
        const XSD::string_& get_title_attr() const;
        bool has_forcedash_attr() const;
        void set_forcedash_attr(const ns_s::ST_TrueFalse& _forcedash_attr);
        const ns_s::ST_TrueFalse& get_forcedash_attr() const;
    protected:
    private:
        static column_element* default_instance_;
        bool m_has_v_ext_attr;
        ns_v::ST_Ext* m_v_ext_attr;
        bool m_has_on_attr;
        ns_s::ST_TrueFalse* m_on_attr;
        bool m_has_weight_attr;
        XSD::string_ m_weight_attr;
        bool m_has_color_attr;
        ns_s::ST_ColorType* m_color_attr;
        bool m_has_color2_attr;
        ns_s::ST_ColorType* m_color2_attr;
        bool m_has_opacity_attr;
        XSD::string_ m_opacity_attr;
        bool m_has_linestyle_attr;
        ns_v::ST_StrokeLineStyle* m_linestyle_attr;
        bool m_has_miterlimit_attr;
        XSD::decimal_ m_miterlimit_attr;
        bool m_has_joinstyle_attr;
        ns_v::ST_StrokeJoinStyle* m_joinstyle_attr;
        bool m_has_endcap_attr;
        ns_v::ST_StrokeEndCap* m_endcap_attr;
        bool m_has_dashstyle_attr;
        XSD::string_ m_dashstyle_attr;
        bool m_has_insetpen_attr;
        ns_s::ST_TrueFalse* m_insetpen_attr;
        bool m_has_filltype_attr;
        ns_v::ST_FillType* m_filltype_attr;
        bool m_has_src_attr;
        XSD::string_ m_src_attr;
        bool m_has_imageaspect_attr;
        ns_v::ST_ImageAspect* m_imageaspect_attr;
        bool m_has_imagesize_attr;
        XSD::string_ m_imagesize_attr;
        bool m_has_imagealignshape_attr;
        ns_s::ST_TrueFalse* m_imagealignshape_attr;
        bool m_has_startarrow_attr;
        ns_v::ST_StrokeArrowType* m_startarrow_attr;
        bool m_has_startarrowwidth_attr;
        ns_v::ST_StrokeArrowWidth* m_startarrowwidth_attr;
        bool m_has_startarrowlength_attr;
        ns_v::ST_StrokeArrowLength* m_startarrowlength_attr;
        bool m_has_endarrow_attr;
        ns_v::ST_StrokeArrowType* m_endarrow_attr;
        bool m_has_endarrowwidth_attr;
        ns_v::ST_StrokeArrowWidth* m_endarrowwidth_attr;
        bool m_has_endarrowlength_attr;
        ns_v::ST_StrokeArrowLength* m_endarrowlength_attr;
        bool m_has_href_attr;
        XSD::string_ m_href_attr;
        bool m_has_althref_attr;
        XSD::string_ m_althref_attr;
        bool m_has_title_attr;
        XSD::string_ m_title_attr;
        bool m_has_forcedash_attr;
        ns_s::ST_TrueFalse* m_forcedash_attr;
    };

    class clippath_element: public Element
    {
    public:
        clippath_element();
        void clear();
        void toXml(std::ostream& _outStream) const;
        static const clippath_element& default_instance();
        bool has_v_attr() const;
        void set_v_attr(const XSD::string_& _v_attr);
        const XSD::string_& get_v_attr() const;
    protected:
    private:
        static clippath_element* default_instance_;
        bool m_has_v_attr;
        XSD::string_ m_v_attr;
    };

    class fill_element: public Element
    {
    public:
        fill_element();
        void clear();
        void toXml(std::ostream& _outStream) const;
        static const fill_element& default_instance();
        bool has_v_ext_attr() const;
        void set_v_ext_attr(const ns_v::ST_Ext& _v_ext_attr);
        const ns_v::ST_Ext& get_v_ext_attr() const;
        bool has_type_attr() const;
        void set_type_attr(const ST_FillType& _type_attr);
        const ST_FillType& get_type_attr() const;
    protected:
    private:
        static fill_element* default_instance_;
        bool m_has_v_ext_attr;
        ns_v::ST_Ext* m_v_ext_attr;
        bool m_has_type_attr;
        ST_FillType* m_type_attr;
    };

    class bwmode_attr: public Attribute
    {
    public:
        void toXml(std::ostream& _outStream) const;
    protected:
    private:
    };

    class bwpure_attr: public Attribute
    {
    public:
        void toXml(std::ostream& _outStream) const;
    protected:
    private:
    };

    class bwnormal_attr: public Attribute
    {
    public:
        void toXml(std::ostream& _outStream) const;
    protected:
    private:
    };

    class targetscreensize_attr: public Attribute
    {
    public:
        void toXml(std::ostream& _outStream) const;
    protected:
    private:
    };

    class insetmode_attr: public Attribute
    {
    public:
        void toXml(std::ostream& _outStream) const;
    protected:
    private:
    };

    class spt_attr: public Attribute
    {
    public:
        void toXml(std::ostream& _outStream) const;
    protected:
    private:
    };

    class wrapcoords_attr: public Attribute
    {
    public:
        void toXml(std::ostream& _outStream) const;
    protected:
    private:
    };

    class oned_attr: public Attribute
    {
    public:
        void toXml(std::ostream& _outStream) const;
    protected:
    private:
    };

    class regroupid_attr: public Attribute
    {
    public:
        void toXml(std::ostream& _outStream) const;
    protected:
    private:
    };

    class doubleclicknotify_attr: public Attribute
    {
    public:
        void toXml(std::ostream& _outStream) const;
    protected:
    private:
    };

    class connectortype_attr: public Attribute
    {
    public:
        void toXml(std::ostream& _outStream) const;
    protected:
    private:
    };

    class button_attr: public Attribute
    {
    public:
        void toXml(std::ostream& _outStream) const;
    protected:
    private:
    };

    class userhidden_attr: public Attribute
    {
    public:
        void toXml(std::ostream& _outStream) const;
    protected:
    private:
    };

    class forcedash_attr: public Attribute
    {
    public:
        void toXml(std::ostream& _outStream) const;
    protected:
    private:
    };

    class oleicon_attr: public Attribute
    {
    public:
        void toXml(std::ostream& _outStream) const;
    protected:
    private:
    };

    class ole_attr: public Attribute
    {
    public:
        void toXml(std::ostream& _outStream) const;
    protected:
    private:
    };

    class preferrelative_attr: public Attribute
    {
    public:
        void toXml(std::ostream& _outStream) const;
    protected:
    private:
    };

    class cliptowrap_attr: public Attribute
    {
    public:
        void toXml(std::ostream& _outStream) const;
    protected:
    private:
    };

    class clip_attr: public Attribute
    {
    public:
        void toXml(std::ostream& _outStream) const;
    protected:
    private:
    };

    class bullet_attr: public Attribute
    {
    public:
        void toXml(std::ostream& _outStream) const;
    protected:
    private:
    };

    class hr_attr: public Attribute
    {
    public:
        void toXml(std::ostream& _outStream) const;
    protected:
    private:
    };

    class hrstd_attr: public Attribute
    {
    public:
        void toXml(std::ostream& _outStream) const;
    protected:
    private:
    };

    class hrnoshade_attr: public Attribute
    {
    public:
        void toXml(std::ostream& _outStream) const;
    protected:
    private:
    };

    class hrpct_attr: public Attribute
    {
    public:
        void toXml(std::ostream& _outStream) const;
    protected:
    private:
    };

    class hralign_attr: public Attribute
    {
    public:
        void toXml(std::ostream& _outStream) const;
    protected:
    private:
    };

    class allowincell_attr: public Attribute
    {
    public:
        void toXml(std::ostream& _outStream) const;
    protected:
    private:
    };

    class allowoverlap_attr: public Attribute
    {
    public:
        void toXml(std::ostream& _outStream) const;
    protected:
    private:
    };

    class userdrawn_attr: public Attribute
    {
    public:
        void toXml(std::ostream& _outStream) const;
    protected:
    private:
    };

    class bordertopcolor_attr: public Attribute
    {
    public:
        void toXml(std::ostream& _outStream) const;
    protected:
    private:
    };

    class borderleftcolor_attr: public Attribute
    {
    public:
        void toXml(std::ostream& _outStream) const;
    protected:
    private:
    };

    class borderbottomcolor_attr: public Attribute
    {
    public:
        void toXml(std::ostream& _outStream) const;
    protected:
    private:
    };

    class borderrightcolor_attr: public Attribute
    {
    public:
        void toXml(std::ostream& _outStream) const;
    protected:
    private:
    };

    class connecttype_attr: public Attribute
    {
    public:
        void toXml(std::ostream& _outStream) const;
    protected:
    private:
    };

    class connectlocs_attr: public Attribute
    {
    public:
        void toXml(std::ostream& _outStream) const;
    protected:
    private:
    };

    class connectangles_attr: public Attribute
    {
    public:
        void toXml(std::ostream& _outStream) const;
    protected:
    private:
    };

    class master_attr: public Attribute
    {
    public:
        void toXml(std::ostream& _outStream) const;
    protected:
    private:
    };

    class extrusionok_attr: public Attribute
    {
    public:
        void toXml(std::ostream& _outStream) const;
    protected:
    private:
    };

    class href_attr: public Attribute
    {
    public:
        void toXml(std::ostream& _outStream) const;
    protected:
    private:
    };

    class althref_attr: public Attribute
    {
    public:
        void toXml(std::ostream& _outStream) const;
    protected:
    private:
    };

    class title_attr: public Attribute
    {
    public:
        void toXml(std::ostream& _outStream) const;
    protected:
    private:
    };

    class singleclick_attr: public Attribute
    {
    public:
        void toXml(std::ostream& _outStream) const;
    protected:
    private:
    };

    class oleid_attr: public Attribute
    {
    public:
        void toXml(std::ostream& _outStream) const;
    protected:
    private:
    };

    class detectmouseclick_attr: public Attribute
    {
    public:
        void toXml(std::ostream& _outStream) const;
    protected:
    private:
    };

    class movie_attr: public Attribute
    {
    public:
        void toXml(std::ostream& _outStream) const;
    protected:
    private:
    };

    class spid_attr: public Attribute
    {
    public:
        void toXml(std::ostream& _outStream) const;
    protected:
    private:
    };

    class opacity2_attr: public Attribute
    {
    public:
        void toXml(std::ostream& _outStream) const;
    protected:
    private:
    };

    class relid_attr: public Attribute
    {
    public:
        void toXml(std::ostream& _outStream) const;
    protected:
    private:
    };

    class dgmlayout_attr: public Attribute
    {
    public:
        void toXml(std::ostream& _outStream) const;
    protected:
    private:
    };

    class dgmnodekind_attr: public Attribute
    {
    public:
        void toXml(std::ostream& _outStream) const;
    protected:
    private:
    };

    class dgmlayoutmru_attr: public Attribute
    {
    public:
        void toXml(std::ostream& _outStream) const;
    protected:
    private:
    };

    class gfxdata_attr: public Attribute
    {
    public:
        void toXml(std::ostream& _outStream) const;
    protected:
    private:
    };

    class tableproperties_attr: public Attribute
    {
    public:
        void toXml(std::ostream& _outStream) const;
    protected:
    private:
    };

    class tablelimits_attr: public Attribute
    {
    public:
        void toXml(std::ostream& _outStream) const;
    protected:
    private:
    };

}
#endif