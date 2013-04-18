#ifndef vml-officeDrawing_xsd 
#define vml-officeDrawing_xsd 0 

#include "xsddata.h"
#include <vector>
#include <string>
#include <iostream>
#include "vml-main_xsd.h"
#include "shared-relationshipReference_xsd.h"
#include "shared-commonSimpleTypes_xsd.h"
namespace ns_o{
    class Element : public XSD::Element{
    public:

    private:

    }

    class Attribute : public XSD::Attribute{
    public:

    private:

    }

    class ST_AlternateMathContentType : public XSD::SimpleType{
    public:
        ST_AlternateMathContentType();
        ST_AlternateMathContentType(const XSD::string& _string );
        bool has_string() const;
        void set_string(const string& _string );
        const string& string() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_AlternateMathContentType& default_instance() const;

    private:
        static ST_AlternateMathContentType* default_instance_ ;
        bool m_has_string ;
        string m_string ;

    }

    class ST_RType : public XSD::SimpleType{
    public:
        ST_RType();
        ST_RType(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_RType& default_instance() const;
        enum Type{
            _arc_ = 1,
            _callout_,
            _connector_,
            _align_
        }

    private:
        static const string TypeStrList [];
        static ST_RType* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_How : public XSD::SimpleType{
    public:
        ST_How();
        ST_How(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_How& default_instance() const;
        enum Type{
            _top_ = 1,
            _middle_,
            _bottom_,
            _left_,
            _center_,
            _right_
        }

    private:
        static const string TypeStrList [];
        static ST_How* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_BWMode : public XSD::SimpleType{
    public:
        ST_BWMode();
        ST_BWMode(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_BWMode& default_instance() const;
        enum Type{
            _color_ = 1,
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
        }

    private:
        static const string TypeStrList [];
        static ST_BWMode* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_ScreenSize : public XSD::SimpleType{
    public:
        ST_ScreenSize();
        ST_ScreenSize(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_ScreenSize& default_instance() const;
        enum Type{
            _544,376_ = 1,
            _640,480_,
            _720,512_,
            _800,600_,
            _1024,768_,
            _1152,862_
        }

    private:
        static const string TypeStrList [];
        static ST_ScreenSize* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_InsetMode : public XSD::SimpleType{
    public:
        ST_InsetMode();
        ST_InsetMode(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_InsetMode& default_instance() const;
        enum Type{
            _auto_ = 1,
            _custom_
        }

    private:
        static const string TypeStrList [];
        static ST_InsetMode* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_ColorMode : public XSD::SimpleType{
    public:
        ST_ColorMode();
        ST_ColorMode(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_ColorMode& default_instance() const;
        enum Type{
            _auto_ = 1,
            _custom_
        }

    private:
        static const string TypeStrList [];
        static ST_ColorMode* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_ContentType : public XSD::SimpleType{
    public:
        ST_ContentType();
        ST_ContentType(const XSD::string& _string );
        bool has_string() const;
        void set_string(const string& _string );
        const string& string() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_ContentType& default_instance() const;

    private:
        static ST_ContentType* default_instance_ ;
        bool m_has_string ;
        string m_string ;

    }

    class ST_DiagramLayout : public XSD::SimpleType{
    public:
        ST_DiagramLayout();
        ST_DiagramLayout(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_DiagramLayout& default_instance() const;
        enum Type{
            _0_ = 1,
            _1_,
            _2_,
            _3_
        }

    private:
        static const string TypeStrList [];
        static ST_DiagramLayout* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_ExtrusionType : public XSD::SimpleType{
    public:
        ST_ExtrusionType();
        ST_ExtrusionType(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_ExtrusionType& default_instance() const;
        enum Type{
            _perspective_ = 1,
            _parallel_
        }

    private:
        static const string TypeStrList [];
        static ST_ExtrusionType* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_ExtrusionRender : public XSD::SimpleType{
    public:
        ST_ExtrusionRender();
        ST_ExtrusionRender(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_ExtrusionRender& default_instance() const;
        enum Type{
            _solid_ = 1,
            _wireFrame_,
            _boundingCube_
        }

    private:
        static const string TypeStrList [];
        static ST_ExtrusionRender* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_ExtrusionPlane : public XSD::SimpleType{
    public:
        ST_ExtrusionPlane();
        ST_ExtrusionPlane(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_ExtrusionPlane& default_instance() const;
        enum Type{
            _XY_ = 1,
            _ZX_,
            _YZ_
        }

    private:
        static const string TypeStrList [];
        static ST_ExtrusionPlane* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_Angle : public XSD::SimpleType{
    public:
        ST_Angle();
        ST_Angle(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_Angle& default_instance() const;
        enum Type{
            _any_ = 1,
            _30_,
            _45_,
            _60_,
            _90_,
            _auto_
        }

    private:
        static const string TypeStrList [];
        static ST_Angle* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_CalloutDrop : public XSD::SimpleType{
    public:
        ST_CalloutDrop();
        ST_CalloutDrop(const XSD::string& _string );
        bool has_string() const;
        void set_string(const string& _string );
        const string& string() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_CalloutDrop& default_instance() const;

    private:
        static ST_CalloutDrop* default_instance_ ;
        bool m_has_string ;
        string m_string ;

    }

    class ST_CalloutPlacement : public XSD::SimpleType{
    public:
        ST_CalloutPlacement();
        ST_CalloutPlacement(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_CalloutPlacement& default_instance() const;
        enum Type{
            _top_ = 1,
            _center_,
            _bottom_,
            _user_
        }

    private:
        static const string TypeStrList [];
        static ST_CalloutPlacement* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_ConnectorType : public XSD::SimpleType{
    public:
        ST_ConnectorType();
        ST_ConnectorType(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_ConnectorType& default_instance() const;
        enum Type{
            _none_ = 1,
            _straight_,
            _elbow_,
            _curved_
        }

    private:
        static const string TypeStrList [];
        static ST_ConnectorType* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_HrAlign : public XSD::SimpleType{
    public:
        ST_HrAlign();
        ST_HrAlign(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_HrAlign& default_instance() const;
        enum Type{
            _left_ = 1,
            _right_,
            _center_
        }

    private:
        static const string TypeStrList [];
        static ST_HrAlign* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_ConnectType : public XSD::SimpleType{
    public:
        ST_ConnectType();
        ST_ConnectType(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_ConnectType& default_instance() const;
        enum Type{
            _none_ = 1,
            _rect_,
            _segments_,
            _custom_
        }

    private:
        static const string TypeStrList [];
        static ST_ConnectType* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_OLELinkType : public XSD::SimpleType{
    public:
        ST_OLELinkType();
        ST_OLELinkType(const XSD::string& _string );
        bool has_string() const;
        void set_string(const string& _string );
        const string& string() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_OLELinkType& default_instance() const;

    private:
        static ST_OLELinkType* default_instance_ ;
        bool m_has_string ;
        string m_string ;

    }

    class ST_OLEType : public XSD::SimpleType{
    public:
        ST_OLEType();
        ST_OLEType(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_OLEType& default_instance() const;
        enum Type{
            _Embed_ = 1,
            _Link_
        }

    private:
        static const string TypeStrList [];
        static ST_OLEType* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_OLEDrawAspect : public XSD::SimpleType{
    public:
        ST_OLEDrawAspect();
        ST_OLEDrawAspect(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_OLEDrawAspect& default_instance() const;
        enum Type{
            _Content_ = 1,
            _Icon_
        }

    private:
        static const string TypeStrList [];
        static ST_OLEDrawAspect* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_OLEUpdateMode : public XSD::SimpleType{
    public:
        ST_OLEUpdateMode();
        ST_OLEUpdateMode(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_OLEUpdateMode& default_instance() const;
        enum Type{
            _Always_ = 1,
            _OnCall_
        }

    private:
        static const string TypeStrList [];
        static ST_OLEUpdateMode* default_instance_ ;
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
            _gradientCenter_ = 1,
            _solid_,
            _pattern_,
            _tile_,
            _frame_,
            _gradientUnscaled_,
            _gradientRadial_,
            _gradient_,
            _background_
        }

    private:
        static const string TypeStrList [];
        static ST_FillType* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class CT_ShapeDefaults : public XSD::ComplexType{
    public:
        bool has_fill() const;
        CT_Fill* mutable_fill();
        const CT_Fill& fill() const;
        bool has_stroke() const;
        CT_Stroke* mutable_stroke();
        const CT_Stroke& stroke() const;
        bool has_textbox() const;
        CT_Textbox* mutable_textbox();
        const CT_Textbox& textbox() const;
        bool has_shadow() const;
        CT_Shadow* mutable_shadow();
        const CT_Shadow& shadow() const;
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
        bool has_colormru() const;
        CT_ColorMru* mutable_colormru();
        const CT_ColorMru& colormru() const;
        bool has_colormenu() const;
        CT_ColorMenu* mutable_colormenu();
        const CT_ColorMenu& colormenu() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_ShapeDefaults& default_instance() const;
        bool has_ext_attr() const;
        void set_ext_attr(const ST_Ext& _ext_attr );
        const ST_Ext& ext_attr() const;
        bool has_spidmax_attr() const;
        void set_spidmax_attr(const integer& _spidmax_attr );
        const integer& spidmax_attr() const;
        bool has_style_attr() const;
        void set_style_attr(const string& _style_attr );
        const string& style_attr() const;
        bool has_fill_attr() const;
        void set_fill_attr(const ns_s::ST_TrueFalse& _fill_attr );
        const ns_s::ST_TrueFalse& fill_attr() const;
        bool has_fillcolor_attr() const;
        void set_fillcolor_attr(const ns_s::ST_ColorType& _fillcolor_attr );
        const ns_s::ST_ColorType& fillcolor_attr() const;
        bool has_stroke_attr() const;
        void set_stroke_attr(const ns_s::ST_TrueFalse& _stroke_attr );
        const ns_s::ST_TrueFalse& stroke_attr() const;
        bool has_strokecolor_attr() const;
        void set_strokecolor_attr(const ns_s::ST_ColorType& _strokecolor_attr );
        const ns_s::ST_ColorType& strokecolor_attr() const;
        bool has_allowincell_attr() const;
        void set_allowincell_attr(const ns_s::ST_TrueFalse& _allowincell_attr );
        const ns_s::ST_TrueFalse& allowincell_attr() const;

    private:
        bool m_has_fill ;
        CT_Fill* m_fill ;
        bool m_has_stroke ;
        CT_Stroke* m_stroke ;
        bool m_has_textbox ;
        CT_Textbox* m_textbox ;
        bool m_has_shadow ;
        CT_Shadow* m_shadow ;
        bool m_has_skew ;
        CT_Skew* m_skew ;
        bool m_has_extrusion ;
        CT_Extrusion* m_extrusion ;
        bool m_has_callout ;
        CT_Callout* m_callout ;
        bool m_has_lock ;
        CT_Lock* m_lock ;
        bool m_has_colormru ;
        CT_ColorMru* m_colormru ;
        bool m_has_colormenu ;
        CT_ColorMenu* m_colormenu ;
        static CT_ShapeDefaults* default_instance_ ;
        bool m_has_ext_attr ;
        ST_Ext* m_ext_attr ;
        bool m_has_spidmax_attr ;
        integer m_spidmax_attr ;
        bool m_has_style_attr ;
        string m_style_attr ;
        bool m_has_fill_attr ;
        ns_s::ST_TrueFalse* m_fill_attr ;
        bool m_has_fillcolor_attr ;
        ns_s::ST_ColorType* m_fillcolor_attr ;
        bool m_has_stroke_attr ;
        ns_s::ST_TrueFalse* m_stroke_attr ;
        bool m_has_strokecolor_attr ;
        ns_s::ST_ColorType* m_strokecolor_attr ;
        bool m_has_allowincell_attr ;
        ns_s::ST_TrueFalse* m_allowincell_attr ;

    }

    class CT_Ink : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Ink& default_instance() const;
        bool has_i_attr() const;
        void set_i_attr(const string& _i_attr );
        const string& i_attr() const;
        bool has_annotation_attr() const;
        void set_annotation_attr(const ns_s::ST_TrueFalse& _annotation_attr );
        const ns_s::ST_TrueFalse& annotation_attr() const;
        bool has_contentType_attr() const;
        void set_contentType_attr(const ST_ContentType& _contentType_attr );
        const ST_ContentType& contentType_attr() const;

    private:
        static CT_Ink* default_instance_ ;
        bool m_has_i_attr ;
        string m_i_attr ;
        bool m_has_annotation_attr ;
        ns_s::ST_TrueFalse* m_annotation_attr ;
        bool m_has_contentType_attr ;
        ST_ContentType* m_contentType_attr ;

    }

    class CT_SignatureLine : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_SignatureLine& default_instance() const;
        bool has_ext_attr() const;
        void set_ext_attr(const ST_Ext& _ext_attr );
        const ST_Ext& ext_attr() const;
        bool has_issignatureline_attr() const;
        void set_issignatureline_attr(const ns_s::ST_TrueFalse& _issignatureline_attr );
        const ns_s::ST_TrueFalse& issignatureline_attr() const;
        bool has_id_attr() const;
        void set_id_attr(const ns_s::ST_Guid& _id_attr );
        const ns_s::ST_Guid& id_attr() const;
        bool has_provid_attr() const;
        void set_provid_attr(const ns_s::ST_Guid& _provid_attr );
        const ns_s::ST_Guid& provid_attr() const;
        bool has_signinginstructionsset_attr() const;
        void set_signinginstructionsset_attr(const ns_s::ST_TrueFalse& _signinginstructionsset_attr );
        const ns_s::ST_TrueFalse& signinginstructionsset_attr() const;
        bool has_allowcomments_attr() const;
        void set_allowcomments_attr(const ns_s::ST_TrueFalse& _allowcomments_attr );
        const ns_s::ST_TrueFalse& allowcomments_attr() const;
        bool has_showsigndate_attr() const;
        void set_showsigndate_attr(const ns_s::ST_TrueFalse& _showsigndate_attr );
        const ns_s::ST_TrueFalse& showsigndate_attr() const;
        bool has_suggestedsigner_attr() const;
        void set_suggestedsigner_attr(const string& _suggestedsigner_attr );
        const string& suggestedsigner_attr() const;
        bool has_suggestedsigner2_attr() const;
        void set_suggestedsigner2_attr(const string& _suggestedsigner2_attr );
        const string& suggestedsigner2_attr() const;
        bool has_suggestedsigneremail_attr() const;
        void set_suggestedsigneremail_attr(const string& _suggestedsigneremail_attr );
        const string& suggestedsigneremail_attr() const;
        bool has_signinginstructions_attr() const;
        void set_signinginstructions_attr(const string& _signinginstructions_attr );
        const string& signinginstructions_attr() const;
        bool has_addlxml_attr() const;
        void set_addlxml_attr(const string& _addlxml_attr );
        const string& addlxml_attr() const;
        bool has_sigprovurl_attr() const;
        void set_sigprovurl_attr(const string& _sigprovurl_attr );
        const string& sigprovurl_attr() const;

    private:
        static CT_SignatureLine* default_instance_ ;
        bool m_has_ext_attr ;
        ST_Ext* m_ext_attr ;
        bool m_has_issignatureline_attr ;
        ns_s::ST_TrueFalse* m_issignatureline_attr ;
        bool m_has_id_attr ;
        ns_s::ST_Guid* m_id_attr ;
        bool m_has_provid_attr ;
        ns_s::ST_Guid* m_provid_attr ;
        bool m_has_signinginstructionsset_attr ;
        ns_s::ST_TrueFalse* m_signinginstructionsset_attr ;
        bool m_has_allowcomments_attr ;
        ns_s::ST_TrueFalse* m_allowcomments_attr ;
        bool m_has_showsigndate_attr ;
        ns_s::ST_TrueFalse* m_showsigndate_attr ;
        bool m_has_suggestedsigner_attr ;
        string m_suggestedsigner_attr ;
        bool m_has_suggestedsigner2_attr ;
        string m_suggestedsigner2_attr ;
        bool m_has_suggestedsigneremail_attr ;
        string m_suggestedsigneremail_attr ;
        bool m_has_signinginstructions_attr ;
        string m_signinginstructions_attr ;
        bool m_has_addlxml_attr ;
        string m_addlxml_attr ;
        bool m_has_sigprovurl_attr ;
        string m_sigprovurl_attr ;

    }

    class CT_ShapeLayout : public XSD::ComplexType{
    public:
        bool has_idmap() const;
        CT_IdMap* mutable_idmap();
        const CT_IdMap& idmap() const;
        bool has_regrouptable() const;
        CT_RegroupTable* mutable_regrouptable();
        const CT_RegroupTable& regrouptable() const;
        bool has_rules() const;
        CT_Rules* mutable_rules();
        const CT_Rules& rules() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_ShapeLayout& default_instance() const;
        bool has_ext_attr() const;
        void set_ext_attr(const ST_Ext& _ext_attr );
        const ST_Ext& ext_attr() const;

    private:
        bool m_has_idmap ;
        CT_IdMap* m_idmap ;
        bool m_has_regrouptable ;
        CT_RegroupTable* m_regrouptable ;
        bool m_has_rules ;
        CT_Rules* m_rules ;
        static CT_ShapeLayout* default_instance_ ;
        bool m_has_ext_attr ;
        ST_Ext* m_ext_attr ;

    }

    class CT_IdMap : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_IdMap& default_instance() const;
        bool has_ext_attr() const;
        void set_ext_attr(const ST_Ext& _ext_attr );
        const ST_Ext& ext_attr() const;
        bool has_data_attr() const;
        void set_data_attr(const string& _data_attr );
        const string& data_attr() const;

    private:
        static CT_IdMap* default_instance_ ;
        bool m_has_ext_attr ;
        ST_Ext* m_ext_attr ;
        bool m_has_data_attr ;
        string m_data_attr ;

    }

    class CT_RegroupTable : public XSD::ComplexType{
    public:
        bool has_entry() const;
        CT_Entry* mutable_entry();
        const CT_Entry& entry() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_RegroupTable& default_instance() const;
        bool has_ext_attr() const;
        void set_ext_attr(const ST_Ext& _ext_attr );
        const ST_Ext& ext_attr() const;

    private:
        bool m_has_entry ;
        CT_Entry* m_entry ;
        static CT_RegroupTable* default_instance_ ;
        bool m_has_ext_attr ;
        ST_Ext* m_ext_attr ;

    }

    class CT_Entry : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Entry& default_instance() const;
        bool has_new_attr() const;
        void set_new_attr(const int& _new_attr );
        const int& new_attr() const;
        bool has_old_attr() const;
        void set_old_attr(const int& _old_attr );
        const int& old_attr() const;

    private:
        static CT_Entry* default_instance_ ;
        bool m_has_new_attr ;
        int m_new_attr ;
        bool m_has_old_attr ;
        int m_old_attr ;

    }

    class CT_Rules : public XSD::ComplexType{
    public:
        bool has_r() const;
        CT_R* mutable_r();
        const CT_R& r() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Rules& default_instance() const;
        bool has_ext_attr() const;
        void set_ext_attr(const ST_Ext& _ext_attr );
        const ST_Ext& ext_attr() const;

    private:
        bool m_has_r ;
        CT_R* m_r ;
        static CT_Rules* default_instance_ ;
        bool m_has_ext_attr ;
        ST_Ext* m_ext_attr ;

    }

    class CT_R : public XSD::ComplexType{
    public:
        bool has_proxy() const;
        CT_Proxy* mutable_proxy();
        const CT_Proxy& proxy() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_R& default_instance() const;
        bool has_id_attr() const;
        void set_id_attr(const string& _id_attr );
        const string& id_attr() const;
        bool has_type_attr() const;
        void set_type_attr(const ST_RType& _type_attr );
        const ST_RType& type_attr() const;
        bool has_how_attr() const;
        void set_how_attr(const ST_How& _how_attr );
        const ST_How& how_attr() const;
        bool has_idref_attr() const;
        void set_idref_attr(const string& _idref_attr );
        const string& idref_attr() const;

    private:
        bool m_has_proxy ;
        CT_Proxy* m_proxy ;
        static CT_R* default_instance_ ;
        bool m_has_id_attr ;
        string m_id_attr ;
        bool m_has_type_attr ;
        ST_RType* m_type_attr ;
        bool m_has_how_attr ;
        ST_How* m_how_attr ;
        bool m_has_idref_attr ;
        string m_idref_attr ;

    }

    class CT_Proxy : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Proxy& default_instance() const;
        bool has_start_attr() const;
        void set_start_attr(const ns_s::ST_TrueFalseBlank& _start_attr );
        const ns_s::ST_TrueFalseBlank& start_attr() const;
        bool has_end_attr() const;
        void set_end_attr(const ns_s::ST_TrueFalseBlank& _end_attr );
        const ns_s::ST_TrueFalseBlank& end_attr() const;
        bool has_idref_attr() const;
        void set_idref_attr(const string& _idref_attr );
        const string& idref_attr() const;
        bool has_connectloc_attr() const;
        void set_connectloc_attr(const int& _connectloc_attr );
        const int& connectloc_attr() const;

    private:
        static CT_Proxy* default_instance_ ;
        bool m_has_start_attr ;
        ns_s::ST_TrueFalseBlank* m_start_attr ;
        bool m_has_end_attr ;
        ns_s::ST_TrueFalseBlank* m_end_attr ;
        bool m_has_idref_attr ;
        string m_idref_attr ;
        bool m_has_connectloc_attr ;
        int m_connectloc_attr ;

    }

    class CT_Diagram : public XSD::ComplexType{
    public:
        bool has_relationtable() const;
        CT_RelationTable* mutable_relationtable();
        const CT_RelationTable& relationtable() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Diagram& default_instance() const;
        bool has_ext_attr() const;
        void set_ext_attr(const ST_Ext& _ext_attr );
        const ST_Ext& ext_attr() const;
        bool has_dgmstyle_attr() const;
        void set_dgmstyle_attr(const integer& _dgmstyle_attr );
        const integer& dgmstyle_attr() const;
        bool has_autoformat_attr() const;
        void set_autoformat_attr(const ns_s::ST_TrueFalse& _autoformat_attr );
        const ns_s::ST_TrueFalse& autoformat_attr() const;
        bool has_reverse_attr() const;
        void set_reverse_attr(const ns_s::ST_TrueFalse& _reverse_attr );
        const ns_s::ST_TrueFalse& reverse_attr() const;
        bool has_autolayout_attr() const;
        void set_autolayout_attr(const ns_s::ST_TrueFalse& _autolayout_attr );
        const ns_s::ST_TrueFalse& autolayout_attr() const;
        bool has_dgmscalex_attr() const;
        void set_dgmscalex_attr(const integer& _dgmscalex_attr );
        const integer& dgmscalex_attr() const;
        bool has_dgmscaley_attr() const;
        void set_dgmscaley_attr(const integer& _dgmscaley_attr );
        const integer& dgmscaley_attr() const;
        bool has_dgmfontsize_attr() const;
        void set_dgmfontsize_attr(const integer& _dgmfontsize_attr );
        const integer& dgmfontsize_attr() const;
        bool has_constrainbounds_attr() const;
        void set_constrainbounds_attr(const string& _constrainbounds_attr );
        const string& constrainbounds_attr() const;
        bool has_dgmbasetextscale_attr() const;
        void set_dgmbasetextscale_attr(const integer& _dgmbasetextscale_attr );
        const integer& dgmbasetextscale_attr() const;

    private:
        bool m_has_relationtable ;
        CT_RelationTable* m_relationtable ;
        static CT_Diagram* default_instance_ ;
        bool m_has_ext_attr ;
        ST_Ext* m_ext_attr ;
        bool m_has_dgmstyle_attr ;
        integer m_dgmstyle_attr ;
        bool m_has_autoformat_attr ;
        ns_s::ST_TrueFalse* m_autoformat_attr ;
        bool m_has_reverse_attr ;
        ns_s::ST_TrueFalse* m_reverse_attr ;
        bool m_has_autolayout_attr ;
        ns_s::ST_TrueFalse* m_autolayout_attr ;
        bool m_has_dgmscalex_attr ;
        integer m_dgmscalex_attr ;
        bool m_has_dgmscaley_attr ;
        integer m_dgmscaley_attr ;
        bool m_has_dgmfontsize_attr ;
        integer m_dgmfontsize_attr ;
        bool m_has_constrainbounds_attr ;
        string m_constrainbounds_attr ;
        bool m_has_dgmbasetextscale_attr ;
        integer m_dgmbasetextscale_attr ;

    }

    class CT_EquationXml : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_EquationXml& default_instance() const;
        bool has_contentType_attr() const;
        void set_contentType_attr(const ST_AlternateMathContentType& _contentType_attr );
        const ST_AlternateMathContentType& contentType_attr() const;

    private:
        static CT_EquationXml* default_instance_ ;
        bool m_has_contentType_attr ;
        ST_AlternateMathContentType* m_contentType_attr ;

    }

    class CT_RelationTable : public XSD::ComplexType{
    public:
        bool has_rel() const;
        CT_Relation* mutable_rel();
        const CT_Relation& rel() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_RelationTable& default_instance() const;
        bool has_ext_attr() const;
        void set_ext_attr(const ST_Ext& _ext_attr );
        const ST_Ext& ext_attr() const;

    private:
        bool m_has_rel ;
        CT_Relation* m_rel ;
        static CT_RelationTable* default_instance_ ;
        bool m_has_ext_attr ;
        ST_Ext* m_ext_attr ;

    }

    class CT_Relation : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Relation& default_instance() const;
        bool has_ext_attr() const;
        void set_ext_attr(const ST_Ext& _ext_attr );
        const ST_Ext& ext_attr() const;
        bool has_idsrc_attr() const;
        void set_idsrc_attr(const string& _idsrc_attr );
        const string& idsrc_attr() const;
        bool has_iddest_attr() const;
        void set_iddest_attr(const string& _iddest_attr );
        const string& iddest_attr() const;
        bool has_idcntr_attr() const;
        void set_idcntr_attr(const string& _idcntr_attr );
        const string& idcntr_attr() const;

    private:
        static CT_Relation* default_instance_ ;
        bool m_has_ext_attr ;
        ST_Ext* m_ext_attr ;
        bool m_has_idsrc_attr ;
        string m_idsrc_attr ;
        bool m_has_iddest_attr ;
        string m_iddest_attr ;
        bool m_has_idcntr_attr ;
        string m_idcntr_attr ;

    }

    class CT_ColorMru : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_ColorMru& default_instance() const;
        bool has_ext_attr() const;
        void set_ext_attr(const ST_Ext& _ext_attr );
        const ST_Ext& ext_attr() const;
        bool has_colors_attr() const;
        void set_colors_attr(const string& _colors_attr );
        const string& colors_attr() const;

    private:
        static CT_ColorMru* default_instance_ ;
        bool m_has_ext_attr ;
        ST_Ext* m_ext_attr ;
        bool m_has_colors_attr ;
        string m_colors_attr ;

    }

    class CT_ColorMenu : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_ColorMenu& default_instance() const;
        bool has_ext_attr() const;
        void set_ext_attr(const ST_Ext& _ext_attr );
        const ST_Ext& ext_attr() const;
        bool has_strokecolor_attr() const;
        void set_strokecolor_attr(const ns_s::ST_ColorType& _strokecolor_attr );
        const ns_s::ST_ColorType& strokecolor_attr() const;
        bool has_fillcolor_attr() const;
        void set_fillcolor_attr(const ns_s::ST_ColorType& _fillcolor_attr );
        const ns_s::ST_ColorType& fillcolor_attr() const;
        bool has_shadowcolor_attr() const;
        void set_shadowcolor_attr(const ns_s::ST_ColorType& _shadowcolor_attr );
        const ns_s::ST_ColorType& shadowcolor_attr() const;
        bool has_extrusioncolor_attr() const;
        void set_extrusioncolor_attr(const ns_s::ST_ColorType& _extrusioncolor_attr );
        const ns_s::ST_ColorType& extrusioncolor_attr() const;

    private:
        static CT_ColorMenu* default_instance_ ;
        bool m_has_ext_attr ;
        ST_Ext* m_ext_attr ;
        bool m_has_strokecolor_attr ;
        ns_s::ST_ColorType* m_strokecolor_attr ;
        bool m_has_fillcolor_attr ;
        ns_s::ST_ColorType* m_fillcolor_attr ;
        bool m_has_shadowcolor_attr ;
        ns_s::ST_ColorType* m_shadowcolor_attr ;
        bool m_has_extrusioncolor_attr ;
        ns_s::ST_ColorType* m_extrusioncolor_attr ;

    }

    class CT_Skew : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Skew& default_instance() const;
        bool has_ext_attr() const;
        void set_ext_attr(const ST_Ext& _ext_attr );
        const ST_Ext& ext_attr() const;
        bool has_id_attr() const;
        void set_id_attr(const string& _id_attr );
        const string& id_attr() const;
        bool has_on_attr() const;
        void set_on_attr(const ns_s::ST_TrueFalse& _on_attr );
        const ns_s::ST_TrueFalse& on_attr() const;
        bool has_offset_attr() const;
        void set_offset_attr(const string& _offset_attr );
        const string& offset_attr() const;
        bool has_origin_attr() const;
        void set_origin_attr(const string& _origin_attr );
        const string& origin_attr() const;
        bool has_matrix_attr() const;
        void set_matrix_attr(const string& _matrix_attr );
        const string& matrix_attr() const;

    private:
        static CT_Skew* default_instance_ ;
        bool m_has_ext_attr ;
        ST_Ext* m_ext_attr ;
        bool m_has_id_attr ;
        string m_id_attr ;
        bool m_has_on_attr ;
        ns_s::ST_TrueFalse* m_on_attr ;
        bool m_has_offset_attr ;
        string m_offset_attr ;
        bool m_has_origin_attr ;
        string m_origin_attr ;
        bool m_has_matrix_attr ;
        string m_matrix_attr ;

    }

    class CT_Extrusion : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Extrusion& default_instance() const;
        bool has_ext_attr() const;
        void set_ext_attr(const ST_Ext& _ext_attr );
        const ST_Ext& ext_attr() const;
        bool has_on_attr() const;
        void set_on_attr(const ns_s::ST_TrueFalse& _on_attr );
        const ns_s::ST_TrueFalse& on_attr() const;
        bool has_type_attr() const;
        void set_type_attr(const ST_ExtrusionType& _type_attr );
        const ST_ExtrusionType& type_attr() const;
        bool has_render_attr() const;
        void set_render_attr(const ST_ExtrusionRender& _render_attr );
        const ST_ExtrusionRender& render_attr() const;
        bool has_viewpointorigin_attr() const;
        void set_viewpointorigin_attr(const string& _viewpointorigin_attr );
        const string& viewpointorigin_attr() const;
        bool has_viewpoint_attr() const;
        void set_viewpoint_attr(const string& _viewpoint_attr );
        const string& viewpoint_attr() const;
        bool has_plane_attr() const;
        void set_plane_attr(const ST_ExtrusionPlane& _plane_attr );
        const ST_ExtrusionPlane& plane_attr() const;
        bool has_skewangle_attr() const;
        void set_skewangle_attr(const float& _skewangle_attr );
        const float& skewangle_attr() const;
        bool has_skewamt_attr() const;
        void set_skewamt_attr(const string& _skewamt_attr );
        const string& skewamt_attr() const;
        bool has_foredepth_attr() const;
        void set_foredepth_attr(const string& _foredepth_attr );
        const string& foredepth_attr() const;
        bool has_backdepth_attr() const;
        void set_backdepth_attr(const string& _backdepth_attr );
        const string& backdepth_attr() const;
        bool has_orientation_attr() const;
        void set_orientation_attr(const string& _orientation_attr );
        const string& orientation_attr() const;
        bool has_orientationangle_attr() const;
        void set_orientationangle_attr(const float& _orientationangle_attr );
        const float& orientationangle_attr() const;
        bool has_lockrotationcenter_attr() const;
        void set_lockrotationcenter_attr(const ns_s::ST_TrueFalse& _lockrotationcenter_attr );
        const ns_s::ST_TrueFalse& lockrotationcenter_attr() const;
        bool has_autorotationcenter_attr() const;
        void set_autorotationcenter_attr(const ns_s::ST_TrueFalse& _autorotationcenter_attr );
        const ns_s::ST_TrueFalse& autorotationcenter_attr() const;
        bool has_rotationcenter_attr() const;
        void set_rotationcenter_attr(const string& _rotationcenter_attr );
        const string& rotationcenter_attr() const;
        bool has_rotationangle_attr() const;
        void set_rotationangle_attr(const string& _rotationangle_attr );
        const string& rotationangle_attr() const;
        bool has_colormode_attr() const;
        void set_colormode_attr(const ST_ColorMode& _colormode_attr );
        const ST_ColorMode& colormode_attr() const;
        bool has_color_attr() const;
        void set_color_attr(const ns_s::ST_ColorType& _color_attr );
        const ns_s::ST_ColorType& color_attr() const;
        bool has_shininess_attr() const;
        void set_shininess_attr(const float& _shininess_attr );
        const float& shininess_attr() const;
        bool has_specularity_attr() const;
        void set_specularity_attr(const string& _specularity_attr );
        const string& specularity_attr() const;
        bool has_diffusity_attr() const;
        void set_diffusity_attr(const string& _diffusity_attr );
        const string& diffusity_attr() const;
        bool has_metal_attr() const;
        void set_metal_attr(const ns_s::ST_TrueFalse& _metal_attr );
        const ns_s::ST_TrueFalse& metal_attr() const;
        bool has_edge_attr() const;
        void set_edge_attr(const string& _edge_attr );
        const string& edge_attr() const;
        bool has_facet_attr() const;
        void set_facet_attr(const string& _facet_attr );
        const string& facet_attr() const;
        bool has_lightface_attr() const;
        void set_lightface_attr(const ns_s::ST_TrueFalse& _lightface_attr );
        const ns_s::ST_TrueFalse& lightface_attr() const;
        bool has_brightness_attr() const;
        void set_brightness_attr(const string& _brightness_attr );
        const string& brightness_attr() const;
        bool has_lightposition_attr() const;
        void set_lightposition_attr(const string& _lightposition_attr );
        const string& lightposition_attr() const;
        bool has_lightlevel_attr() const;
        void set_lightlevel_attr(const string& _lightlevel_attr );
        const string& lightlevel_attr() const;
        bool has_lightharsh_attr() const;
        void set_lightharsh_attr(const ns_s::ST_TrueFalse& _lightharsh_attr );
        const ns_s::ST_TrueFalse& lightharsh_attr() const;
        bool has_lightposition2_attr() const;
        void set_lightposition2_attr(const string& _lightposition2_attr );
        const string& lightposition2_attr() const;
        bool has_lightlevel2_attr() const;
        void set_lightlevel2_attr(const string& _lightlevel2_attr );
        const string& lightlevel2_attr() const;
        bool has_lightharsh2_attr() const;
        void set_lightharsh2_attr(const ns_s::ST_TrueFalse& _lightharsh2_attr );
        const ns_s::ST_TrueFalse& lightharsh2_attr() const;

    private:
        static CT_Extrusion* default_instance_ ;
        bool m_has_ext_attr ;
        ST_Ext* m_ext_attr ;
        bool m_has_on_attr ;
        ns_s::ST_TrueFalse* m_on_attr ;
        bool m_has_type_attr ;
        ST_ExtrusionType* m_type_attr ;
        bool m_has_render_attr ;
        ST_ExtrusionRender* m_render_attr ;
        bool m_has_viewpointorigin_attr ;
        string m_viewpointorigin_attr ;
        bool m_has_viewpoint_attr ;
        string m_viewpoint_attr ;
        bool m_has_plane_attr ;
        ST_ExtrusionPlane* m_plane_attr ;
        bool m_has_skewangle_attr ;
        float m_skewangle_attr ;
        bool m_has_skewamt_attr ;
        string m_skewamt_attr ;
        bool m_has_foredepth_attr ;
        string m_foredepth_attr ;
        bool m_has_backdepth_attr ;
        string m_backdepth_attr ;
        bool m_has_orientation_attr ;
        string m_orientation_attr ;
        bool m_has_orientationangle_attr ;
        float m_orientationangle_attr ;
        bool m_has_lockrotationcenter_attr ;
        ns_s::ST_TrueFalse* m_lockrotationcenter_attr ;
        bool m_has_autorotationcenter_attr ;
        ns_s::ST_TrueFalse* m_autorotationcenter_attr ;
        bool m_has_rotationcenter_attr ;
        string m_rotationcenter_attr ;
        bool m_has_rotationangle_attr ;
        string m_rotationangle_attr ;
        bool m_has_colormode_attr ;
        ST_ColorMode* m_colormode_attr ;
        bool m_has_color_attr ;
        ns_s::ST_ColorType* m_color_attr ;
        bool m_has_shininess_attr ;
        float m_shininess_attr ;
        bool m_has_specularity_attr ;
        string m_specularity_attr ;
        bool m_has_diffusity_attr ;
        string m_diffusity_attr ;
        bool m_has_metal_attr ;
        ns_s::ST_TrueFalse* m_metal_attr ;
        bool m_has_edge_attr ;
        string m_edge_attr ;
        bool m_has_facet_attr ;
        string m_facet_attr ;
        bool m_has_lightface_attr ;
        ns_s::ST_TrueFalse* m_lightface_attr ;
        bool m_has_brightness_attr ;
        string m_brightness_attr ;
        bool m_has_lightposition_attr ;
        string m_lightposition_attr ;
        bool m_has_lightlevel_attr ;
        string m_lightlevel_attr ;
        bool m_has_lightharsh_attr ;
        ns_s::ST_TrueFalse* m_lightharsh_attr ;
        bool m_has_lightposition2_attr ;
        string m_lightposition2_attr ;
        bool m_has_lightlevel2_attr ;
        string m_lightlevel2_attr ;
        bool m_has_lightharsh2_attr ;
        ns_s::ST_TrueFalse* m_lightharsh2_attr ;

    }

    class CT_Callout : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Callout& default_instance() const;
        bool has_ext_attr() const;
        void set_ext_attr(const ST_Ext& _ext_attr );
        const ST_Ext& ext_attr() const;
        bool has_on_attr() const;
        void set_on_attr(const ns_s::ST_TrueFalse& _on_attr );
        const ns_s::ST_TrueFalse& on_attr() const;
        bool has_type_attr() const;
        void set_type_attr(const string& _type_attr );
        const string& type_attr() const;
        bool has_gap_attr() const;
        void set_gap_attr(const string& _gap_attr );
        const string& gap_attr() const;
        bool has_angle_attr() const;
        void set_angle_attr(const ST_Angle& _angle_attr );
        const ST_Angle& angle_attr() const;
        bool has_dropauto_attr() const;
        void set_dropauto_attr(const ns_s::ST_TrueFalse& _dropauto_attr );
        const ns_s::ST_TrueFalse& dropauto_attr() const;
        bool has_drop_attr() const;
        void set_drop_attr(const ST_CalloutDrop& _drop_attr );
        const ST_CalloutDrop& drop_attr() const;
        bool has_distance_attr() const;
        void set_distance_attr(const string& _distance_attr );
        const string& distance_attr() const;
        bool has_lengthspecified_attr() const;
        void set_lengthspecified_attr(const ns_s::ST_TrueFalse& _lengthspecified_attr );
        const ns_s::ST_TrueFalse& lengthspecified_attr() const;
        bool has_length_attr() const;
        void set_length_attr(const string& _length_attr );
        const string& length_attr() const;
        bool has_accentbar_attr() const;
        void set_accentbar_attr(const ns_s::ST_TrueFalse& _accentbar_attr );
        const ns_s::ST_TrueFalse& accentbar_attr() const;
        bool has_textborder_attr() const;
        void set_textborder_attr(const ns_s::ST_TrueFalse& _textborder_attr );
        const ns_s::ST_TrueFalse& textborder_attr() const;
        bool has_minusx_attr() const;
        void set_minusx_attr(const ns_s::ST_TrueFalse& _minusx_attr );
        const ns_s::ST_TrueFalse& minusx_attr() const;
        bool has_minusy_attr() const;
        void set_minusy_attr(const ns_s::ST_TrueFalse& _minusy_attr );
        const ns_s::ST_TrueFalse& minusy_attr() const;

    private:
        static CT_Callout* default_instance_ ;
        bool m_has_ext_attr ;
        ST_Ext* m_ext_attr ;
        bool m_has_on_attr ;
        ns_s::ST_TrueFalse* m_on_attr ;
        bool m_has_type_attr ;
        string m_type_attr ;
        bool m_has_gap_attr ;
        string m_gap_attr ;
        bool m_has_angle_attr ;
        ST_Angle* m_angle_attr ;
        bool m_has_dropauto_attr ;
        ns_s::ST_TrueFalse* m_dropauto_attr ;
        bool m_has_drop_attr ;
        ST_CalloutDrop* m_drop_attr ;
        bool m_has_distance_attr ;
        string m_distance_attr ;
        bool m_has_lengthspecified_attr ;
        ns_s::ST_TrueFalse* m_lengthspecified_attr ;
        bool m_has_length_attr ;
        string m_length_attr ;
        bool m_has_accentbar_attr ;
        ns_s::ST_TrueFalse* m_accentbar_attr ;
        bool m_has_textborder_attr ;
        ns_s::ST_TrueFalse* m_textborder_attr ;
        bool m_has_minusx_attr ;
        ns_s::ST_TrueFalse* m_minusx_attr ;
        bool m_has_minusy_attr ;
        ns_s::ST_TrueFalse* m_minusy_attr ;

    }

    class CT_Lock : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Lock& default_instance() const;
        bool has_ext_attr() const;
        void set_ext_attr(const ST_Ext& _ext_attr );
        const ST_Ext& ext_attr() const;
        bool has_position_attr() const;
        void set_position_attr(const ns_s::ST_TrueFalse& _position_attr );
        const ns_s::ST_TrueFalse& position_attr() const;
        bool has_selection_attr() const;
        void set_selection_attr(const ns_s::ST_TrueFalse& _selection_attr );
        const ns_s::ST_TrueFalse& selection_attr() const;
        bool has_grouping_attr() const;
        void set_grouping_attr(const ns_s::ST_TrueFalse& _grouping_attr );
        const ns_s::ST_TrueFalse& grouping_attr() const;
        bool has_ungrouping_attr() const;
        void set_ungrouping_attr(const ns_s::ST_TrueFalse& _ungrouping_attr );
        const ns_s::ST_TrueFalse& ungrouping_attr() const;
        bool has_rotation_attr() const;
        void set_rotation_attr(const ns_s::ST_TrueFalse& _rotation_attr );
        const ns_s::ST_TrueFalse& rotation_attr() const;
        bool has_cropping_attr() const;
        void set_cropping_attr(const ns_s::ST_TrueFalse& _cropping_attr );
        const ns_s::ST_TrueFalse& cropping_attr() const;
        bool has_verticies_attr() const;
        void set_verticies_attr(const ns_s::ST_TrueFalse& _verticies_attr );
        const ns_s::ST_TrueFalse& verticies_attr() const;
        bool has_adjusthandles_attr() const;
        void set_adjusthandles_attr(const ns_s::ST_TrueFalse& _adjusthandles_attr );
        const ns_s::ST_TrueFalse& adjusthandles_attr() const;
        bool has_text_attr() const;
        void set_text_attr(const ns_s::ST_TrueFalse& _text_attr );
        const ns_s::ST_TrueFalse& text_attr() const;
        bool has_aspectratio_attr() const;
        void set_aspectratio_attr(const ns_s::ST_TrueFalse& _aspectratio_attr );
        const ns_s::ST_TrueFalse& aspectratio_attr() const;
        bool has_shapetype_attr() const;
        void set_shapetype_attr(const ns_s::ST_TrueFalse& _shapetype_attr );
        const ns_s::ST_TrueFalse& shapetype_attr() const;

    private:
        static CT_Lock* default_instance_ ;
        bool m_has_ext_attr ;
        ST_Ext* m_ext_attr ;
        bool m_has_position_attr ;
        ns_s::ST_TrueFalse* m_position_attr ;
        bool m_has_selection_attr ;
        ns_s::ST_TrueFalse* m_selection_attr ;
        bool m_has_grouping_attr ;
        ns_s::ST_TrueFalse* m_grouping_attr ;
        bool m_has_ungrouping_attr ;
        ns_s::ST_TrueFalse* m_ungrouping_attr ;
        bool m_has_rotation_attr ;
        ns_s::ST_TrueFalse* m_rotation_attr ;
        bool m_has_cropping_attr ;
        ns_s::ST_TrueFalse* m_cropping_attr ;
        bool m_has_verticies_attr ;
        ns_s::ST_TrueFalse* m_verticies_attr ;
        bool m_has_adjusthandles_attr ;
        ns_s::ST_TrueFalse* m_adjusthandles_attr ;
        bool m_has_text_attr ;
        ns_s::ST_TrueFalse* m_text_attr ;
        bool m_has_aspectratio_attr ;
        ns_s::ST_TrueFalse* m_aspectratio_attr ;
        bool m_has_shapetype_attr ;
        ns_s::ST_TrueFalse* m_shapetype_attr ;

    }

    class CT_OLEObject : public XSD::ComplexType{
    public:
        bool has_LinkType() const;
        ST_OLELinkType* mutable_LinkType();
        const ST_OLELinkType& LinkType() const;
        bool has_LockedField() const;
        ns_s::ST_TrueFalseBlank* mutable_LockedField();
        const ns_s::ST_TrueFalseBlank& LockedField() const;
        bool has_FieldCodes() const;
        void set_FieldCodes(const string& _FieldCodes );
        const string& FieldCodes() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_OLEObject& default_instance() const;
        bool has_Type_attr() const;
        void set_Type_attr(const ST_OLEType& _Type_attr );
        const ST_OLEType& Type_attr() const;
        bool has_ProgID_attr() const;
        void set_ProgID_attr(const string& _ProgID_attr );
        const string& ProgID_attr() const;
        bool has_ShapeID_attr() const;
        void set_ShapeID_attr(const string& _ShapeID_attr );
        const string& ShapeID_attr() const;
        bool has_DrawAspect_attr() const;
        void set_DrawAspect_attr(const ST_OLEDrawAspect& _DrawAspect_attr );
        const ST_OLEDrawAspect& DrawAspect_attr() const;
        bool has_ObjectID_attr() const;
        void set_ObjectID_attr(const string& _ObjectID_attr );
        const string& ObjectID_attr() const;
        bool has_id_attr() const;
        void set_id_attr(const ST_RelationshipId& _id_attr );
        const ST_RelationshipId& id_attr() const;
        bool has_UpdateMode_attr() const;
        void set_UpdateMode_attr(const ST_OLEUpdateMode& _UpdateMode_attr );
        const ST_OLEUpdateMode& UpdateMode_attr() const;

    private:
        bool m_has_LinkType ;
        ST_OLELinkType* m_LinkType ;
        bool m_has_LockedField ;
        ns_s::ST_TrueFalseBlank* m_LockedField ;
        bool m_has_FieldCodes ;
        string m_FieldCodes ;
        static CT_OLEObject* default_instance_ ;
        bool m_has_Type_attr ;
        ST_OLEType* m_Type_attr ;
        bool m_has_ProgID_attr ;
        string m_ProgID_attr ;
        bool m_has_ShapeID_attr ;
        string m_ShapeID_attr ;
        bool m_has_DrawAspect_attr ;
        ST_OLEDrawAspect* m_DrawAspect_attr ;
        bool m_has_ObjectID_attr ;
        string m_ObjectID_attr ;
        bool m_has_id_attr ;
        ST_RelationshipId* m_id_attr ;
        bool m_has_UpdateMode_attr ;
        ST_OLEUpdateMode* m_UpdateMode_attr ;

    }

    class CT_Complex : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Complex& default_instance() const;
        bool has_ext_attr() const;
        void set_ext_attr(const ST_Ext& _ext_attr );
        const ST_Ext& ext_attr() const;

    private:
        static CT_Complex* default_instance_ ;
        bool m_has_ext_attr ;
        ST_Ext* m_ext_attr ;

    }

    class CT_StrokeChild : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_StrokeChild& default_instance() const;
        bool has_ext_attr() const;
        void set_ext_attr(const ST_Ext& _ext_attr );
        const ST_Ext& ext_attr() const;
        bool has_on_attr() const;
        void set_on_attr(const ns_s::ST_TrueFalse& _on_attr );
        const ns_s::ST_TrueFalse& on_attr() const;
        bool has_weight_attr() const;
        void set_weight_attr(const string& _weight_attr );
        const string& weight_attr() const;
        bool has_color_attr() const;
        void set_color_attr(const ns_s::ST_ColorType& _color_attr );
        const ns_s::ST_ColorType& color_attr() const;
        bool has_color2_attr() const;
        void set_color2_attr(const ns_s::ST_ColorType& _color2_attr );
        const ns_s::ST_ColorType& color2_attr() const;
        bool has_opacity_attr() const;
        void set_opacity_attr(const string& _opacity_attr );
        const string& opacity_attr() const;
        bool has_linestyle_attr() const;
        void set_linestyle_attr(const ns_v::ST_StrokeLineStyle& _linestyle_attr );
        const ns_v::ST_StrokeLineStyle& linestyle_attr() const;
        bool has_miterlimit_attr() const;
        void set_miterlimit_attr(const decimal& _miterlimit_attr );
        const decimal& miterlimit_attr() const;
        bool has_joinstyle_attr() const;
        void set_joinstyle_attr(const ns_v::ST_StrokeJoinStyle& _joinstyle_attr );
        const ns_v::ST_StrokeJoinStyle& joinstyle_attr() const;
        bool has_endcap_attr() const;
        void set_endcap_attr(const ns_v::ST_StrokeEndCap& _endcap_attr );
        const ns_v::ST_StrokeEndCap& endcap_attr() const;
        bool has_dashstyle_attr() const;
        void set_dashstyle_attr(const string& _dashstyle_attr );
        const string& dashstyle_attr() const;
        bool has_insetpen_attr() const;
        void set_insetpen_attr(const ns_s::ST_TrueFalse& _insetpen_attr );
        const ns_s::ST_TrueFalse& insetpen_attr() const;
        bool has_filltype_attr() const;
        void set_filltype_attr(const ns_v::ST_FillType& _filltype_attr );
        const ns_v::ST_FillType& filltype_attr() const;
        bool has_src_attr() const;
        void set_src_attr(const string& _src_attr );
        const string& src_attr() const;
        bool has_imageaspect_attr() const;
        void set_imageaspect_attr(const ns_v::ST_ImageAspect& _imageaspect_attr );
        const ns_v::ST_ImageAspect& imageaspect_attr() const;
        bool has_imagesize_attr() const;
        void set_imagesize_attr(const string& _imagesize_attr );
        const string& imagesize_attr() const;
        bool has_imagealignshape_attr() const;
        void set_imagealignshape_attr(const ns_s::ST_TrueFalse& _imagealignshape_attr );
        const ns_s::ST_TrueFalse& imagealignshape_attr() const;
        bool has_startarrow_attr() const;
        void set_startarrow_attr(const ns_v::ST_StrokeArrowType& _startarrow_attr );
        const ns_v::ST_StrokeArrowType& startarrow_attr() const;
        bool has_startarrowwidth_attr() const;
        void set_startarrowwidth_attr(const ns_v::ST_StrokeArrowWidth& _startarrowwidth_attr );
        const ns_v::ST_StrokeArrowWidth& startarrowwidth_attr() const;
        bool has_startarrowlength_attr() const;
        void set_startarrowlength_attr(const ns_v::ST_StrokeArrowLength& _startarrowlength_attr );
        const ns_v::ST_StrokeArrowLength& startarrowlength_attr() const;
        bool has_endarrow_attr() const;
        void set_endarrow_attr(const ns_v::ST_StrokeArrowType& _endarrow_attr );
        const ns_v::ST_StrokeArrowType& endarrow_attr() const;
        bool has_endarrowwidth_attr() const;
        void set_endarrowwidth_attr(const ns_v::ST_StrokeArrowWidth& _endarrowwidth_attr );
        const ns_v::ST_StrokeArrowWidth& endarrowwidth_attr() const;
        bool has_endarrowlength_attr() const;
        void set_endarrowlength_attr(const ns_v::ST_StrokeArrowLength& _endarrowlength_attr );
        const ns_v::ST_StrokeArrowLength& endarrowlength_attr() const;
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

    private:
        static CT_StrokeChild* default_instance_ ;
        bool m_has_ext_attr ;
        ST_Ext* m_ext_attr ;
        bool m_has_on_attr ;
        ns_s::ST_TrueFalse* m_on_attr ;
        bool m_has_weight_attr ;
        string m_weight_attr ;
        bool m_has_color_attr ;
        ns_s::ST_ColorType* m_color_attr ;
        bool m_has_color2_attr ;
        ns_s::ST_ColorType* m_color2_attr ;
        bool m_has_opacity_attr ;
        string m_opacity_attr ;
        bool m_has_linestyle_attr ;
        ns_v::ST_StrokeLineStyle* m_linestyle_attr ;
        bool m_has_miterlimit_attr ;
        decimal m_miterlimit_attr ;
        bool m_has_joinstyle_attr ;
        ns_v::ST_StrokeJoinStyle* m_joinstyle_attr ;
        bool m_has_endcap_attr ;
        ns_v::ST_StrokeEndCap* m_endcap_attr ;
        bool m_has_dashstyle_attr ;
        string m_dashstyle_attr ;
        bool m_has_insetpen_attr ;
        ns_s::ST_TrueFalse* m_insetpen_attr ;
        bool m_has_filltype_attr ;
        ns_v::ST_FillType* m_filltype_attr ;
        bool m_has_src_attr ;
        string m_src_attr ;
        bool m_has_imageaspect_attr ;
        ns_v::ST_ImageAspect* m_imageaspect_attr ;
        bool m_has_imagesize_attr ;
        string m_imagesize_attr ;
        bool m_has_imagealignshape_attr ;
        ns_s::ST_TrueFalse* m_imagealignshape_attr ;
        bool m_has_startarrow_attr ;
        ns_v::ST_StrokeArrowType* m_startarrow_attr ;
        bool m_has_startarrowwidth_attr ;
        ns_v::ST_StrokeArrowWidth* m_startarrowwidth_attr ;
        bool m_has_startarrowlength_attr ;
        ns_v::ST_StrokeArrowLength* m_startarrowlength_attr ;
        bool m_has_endarrow_attr ;
        ns_v::ST_StrokeArrowType* m_endarrow_attr ;
        bool m_has_endarrowwidth_attr ;
        ns_v::ST_StrokeArrowWidth* m_endarrowwidth_attr ;
        bool m_has_endarrowlength_attr ;
        ns_v::ST_StrokeArrowLength* m_endarrowlength_attr ;
        bool m_has_href_attr ;
        string m_href_attr ;
        bool m_has_althref_attr ;
        string m_althref_attr ;
        bool m_has_title_attr ;
        string m_title_attr ;
        bool m_has_forcedash_attr ;
        ns_s::ST_TrueFalse* m_forcedash_attr ;

    }

    class CT_ClipPath : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_ClipPath& default_instance() const;
        bool has_v_attr() const;
        void set_v_attr(const string& _v_attr );
        const string& v_attr() const;

    private:
        static CT_ClipPath* default_instance_ ;
        bool m_has_v_attr ;
        string m_v_attr ;

    }

    class CT_Fill : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Fill& default_instance() const;
        bool has_ext_attr() const;
        void set_ext_attr(const ST_Ext& _ext_attr );
        const ST_Ext& ext_attr() const;
        bool has_type_attr() const;
        void set_type_attr(const ST_FillType& _type_attr );
        const ST_FillType& type_attr() const;

    private:
        static CT_Fill* default_instance_ ;
        bool m_has_ext_attr ;
        ST_Ext* m_ext_attr ;
        bool m_has_type_attr ;
        ST_FillType* m_type_attr ;

    }

    class shapedefaults : public CT_ShapeDefaults : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class shapelayout : public CT_ShapeLayout : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class signatureline : public CT_SignatureLine : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class ink : public CT_Ink : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class diagram : public CT_Diagram : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class equationxml : public CT_EquationXml : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class skew : public CT_Skew : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class extrusion : public CT_Extrusion : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class callout : public CT_Callout : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class lock : public CT_Lock : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class OLEObject : public CT_OLEObject : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class complex : public CT_Complex : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class left : public CT_StrokeChild : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class top : public CT_StrokeChild : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class right : public CT_StrokeChild : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class bottom : public CT_StrokeChild : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class column : public CT_StrokeChild : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class clippath : public CT_ClipPath : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class fill : public CT_Fill : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class bwmode_attr : public ST_BWMode : public Attribute{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class bwpure_attr : public ST_BWMode : public Attribute{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class bwnormal_attr : public ST_BWMode : public Attribute{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class targetscreensize_attr : public ST_ScreenSize : public Attribute{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class insetmode_attr : public ST_InsetMode : public Attribute{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class spt_attr : public float : public Attribute{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class wrapcoords_attr : public string : public Attribute{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class oned_attr : public ns_s::ST_TrueFalse : public Attribute{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class regroupid_attr : public integer : public Attribute{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class doubleclicknotify_attr : public ns_s::ST_TrueFalse : public Attribute{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class connectortype_attr : public ST_ConnectorType : public Attribute{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class button_attr : public ns_s::ST_TrueFalse : public Attribute{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class userhidden_attr : public ns_s::ST_TrueFalse : public Attribute{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class forcedash_attr : public ns_s::ST_TrueFalse : public Attribute{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class oleicon_attr : public ns_s::ST_TrueFalse : public Attribute{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class ole_attr : public ns_s::ST_TrueFalseBlank : public Attribute{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class preferrelative_attr : public ns_s::ST_TrueFalse : public Attribute{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class cliptowrap_attr : public ns_s::ST_TrueFalse : public Attribute{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class clip_attr : public ns_s::ST_TrueFalse : public Attribute{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class bullet_attr : public ns_s::ST_TrueFalse : public Attribute{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class hr_attr : public ns_s::ST_TrueFalse : public Attribute{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class hrstd_attr : public ns_s::ST_TrueFalse : public Attribute{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class hrnoshade_attr : public ns_s::ST_TrueFalse : public Attribute{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class hrpct_attr : public float : public Attribute{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class hralign_attr : public ST_HrAlign : public Attribute{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class allowincell_attr : public ns_s::ST_TrueFalse : public Attribute{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class allowoverlap_attr : public ns_s::ST_TrueFalse : public Attribute{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class userdrawn_attr : public ns_s::ST_TrueFalse : public Attribute{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class bordertopcolor_attr : public string : public Attribute{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class borderleftcolor_attr : public string : public Attribute{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class borderbottomcolor_attr : public string : public Attribute{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class borderrightcolor_attr : public string : public Attribute{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class connecttype_attr : public ST_ConnectType : public Attribute{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class connectlocs_attr : public string : public Attribute{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class connectangles_attr : public string : public Attribute{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class master_attr : public string : public Attribute{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class extrusionok_attr : public ns_s::ST_TrueFalse : public Attribute{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class href_attr : public string : public Attribute{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class althref_attr : public string : public Attribute{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class title_attr : public string : public Attribute{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class singleclick_attr : public ns_s::ST_TrueFalse : public Attribute{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class oleid_attr : public float : public Attribute{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class detectmouseclick_attr : public ns_s::ST_TrueFalse : public Attribute{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class movie_attr : public float : public Attribute{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class spid_attr : public string : public Attribute{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class opacity2_attr : public string : public Attribute{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class relid_attr : public ns_r::ST_RelationshipId : public Attribute{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class dgmlayout_attr : public ST_DiagramLayout : public Attribute{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class dgmnodekind_attr : public integer : public Attribute{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class dgmlayoutmru_attr : public ST_DiagramLayout : public Attribute{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class gfxdata_attr : public base64Binary : public Attribute{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class tableproperties_attr : public string : public Attribute{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class tablelimits_attr : public string : public Attribute{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

}