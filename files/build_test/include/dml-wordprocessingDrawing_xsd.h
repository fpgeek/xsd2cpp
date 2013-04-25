namespace ns_wp {
    class Element;
    class Attribute;
    class ST_WrapDistance;
    class ST_WrapText;
    class ST_PositionOffset;
    class ST_AlignH;
    class ST_RelFromH;
    class ST_AlignV;
    class ST_RelFromV;
    class CT_EffectExtent;
    class CT_Inline;
    class CT_WrapPath;
    class CT_WrapNone;
    class CT_WrapSquare;
    class CT_WrapTight;
    class CT_WrapThrough;
    class CT_WrapTopBottom;
    class CT_PosH;
    class CT_PosV;
    class CT_Anchor;
    class CT_TxbxContent;
    class CT_TextboxInfo;
    class CT_LinkedTextboxInformation;
    class CT_WordprocessingShape;
    class CT_GraphicFrame;
    class CT_WordprocessingContentPartNonVisual;
    class CT_WordprocessingContentPart;
    class CT_WordprocessingGroup;
    class CT_WordprocessingCanvas;
    class wpc_element;
    class wgp_element;
    class wsp_element;
    class inline_element;
    class anchor_element;
}
#ifndef __dml_wordprocessingDrawing_xsd_
#define __dml_wordprocessingDrawing_xsd_ 0

#include "xsdtype.h"
#include <vector>
#include <string>
#include <iostream>
#include "dml-main_xsd.h"
#include "wml_xsd.h"
#include "dml-picture_xsd.h"
#include "shared-relationshipReference_xsd.h"
namespace ns_wp {
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

    class ST_WrapDistance: public XSD::SimpleType
    {
    public:
        ST_WrapDistance();
        ST_WrapDistance(const XSD::unsignedInt_& _unsignedInt);
        bool has_unsignedInt() const;
        void set_unsignedInt(const XSD::unsignedInt_& _unsignedInt);
        const XSD::unsignedInt_& get_unsignedInt() const;
        void clear();
        void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_WrapDistance& default_instance();
        std::string toString() const;
    protected:
    private:
        static ST_WrapDistance* default_instance_;
        bool m_has_unsignedInt;
        XSD::unsignedInt_ m_unsignedInt;
    };

    class ST_WrapText: public XSD::SimpleType
    {
    public:
        enum  Type 
        {
            _bothSides_ = 0,
            _left_,
            _right_,
            _largest_
        };
        ST_WrapText();
        ST_WrapText(const ST_WrapText::Type& _type);
        bool has_type() const;
        void set_type(const ST_WrapText::Type& _type);
        const ST_WrapText::Type& get_type() const;
        std::string toString() const;
        void clear();
        void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_WrapText& default_instance();
    protected:
    private:
        static const std::string TypeStrList[];
        static ST_WrapText* default_instance_;
        bool m_has_type;
        ST_WrapText::Type m_type;
    };

    class ST_PositionOffset: public XSD::SimpleType
    {
    public:
        ST_PositionOffset();
        ST_PositionOffset(const XSD::int_& _int);
        bool has_int() const;
        void set_int(const XSD::int_& _int);
        const XSD::int_& get_int() const;
        void clear();
        void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_PositionOffset& default_instance();
        std::string toString() const;
    protected:
    private:
        static ST_PositionOffset* default_instance_;
        bool m_has_int;
        XSD::int_ m_int;
    };

    class ST_AlignH: public XSD::SimpleType
    {
    public:
        enum  Type 
        {
            _left_ = 0,
            _right_,
            _center_,
            _inside_,
            _outside_
        };
        ST_AlignH();
        ST_AlignH(const ST_AlignH::Type& _type);
        bool has_type() const;
        void set_type(const ST_AlignH::Type& _type);
        const ST_AlignH::Type& get_type() const;
        std::string toString() const;
        void clear();
        void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_AlignH& default_instance();
    protected:
    private:
        static const std::string TypeStrList[];
        static ST_AlignH* default_instance_;
        bool m_has_type;
        ST_AlignH::Type m_type;
    };

    class ST_RelFromH: public XSD::SimpleType
    {
    public:
        enum  Type 
        {
            _margin_ = 0,
            _page_,
            _column_,
            _character_,
            _leftMargin_,
            _rightMargin_,
            _insideMargin_,
            _outsideMargin_
        };
        ST_RelFromH();
        ST_RelFromH(const ST_RelFromH::Type& _type);
        bool has_type() const;
        void set_type(const ST_RelFromH::Type& _type);
        const ST_RelFromH::Type& get_type() const;
        std::string toString() const;
        void clear();
        void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_RelFromH& default_instance();
    protected:
    private:
        static const std::string TypeStrList[];
        static ST_RelFromH* default_instance_;
        bool m_has_type;
        ST_RelFromH::Type m_type;
    };

    class ST_AlignV: public XSD::SimpleType
    {
    public:
        enum  Type 
        {
            _top_ = 0,
            _bottom_,
            _center_,
            _inside_,
            _outside_
        };
        ST_AlignV();
        ST_AlignV(const ST_AlignV::Type& _type);
        bool has_type() const;
        void set_type(const ST_AlignV::Type& _type);
        const ST_AlignV::Type& get_type() const;
        std::string toString() const;
        void clear();
        void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_AlignV& default_instance();
    protected:
    private:
        static const std::string TypeStrList[];
        static ST_AlignV* default_instance_;
        bool m_has_type;
        ST_AlignV::Type m_type;
    };

    class ST_RelFromV: public XSD::SimpleType
    {
    public:
        enum  Type 
        {
            _margin_ = 0,
            _page_,
            _paragraph_,
            _line_,
            _topMargin_,
            _bottomMargin_,
            _insideMargin_,
            _outsideMargin_
        };
        ST_RelFromV();
        ST_RelFromV(const ST_RelFromV::Type& _type);
        bool has_type() const;
        void set_type(const ST_RelFromV::Type& _type);
        const ST_RelFromV::Type& get_type() const;
        std::string toString() const;
        void clear();
        void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_RelFromV& default_instance();
    protected:
    private:
        static const std::string TypeStrList[];
        static ST_RelFromV* default_instance_;
        bool m_has_type;
        ST_RelFromV::Type m_type;
    };

    class CT_EffectExtent: public XSD::ComplexType
    {
    public:
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_EffectExtent& default_instance();
        bool has_a_l_attr() const;
        void set_a_l_attr(const ns_a::ST_Coordinate& _a_l_attr);
        const ns_a::ST_Coordinate& get_a_l_attr() const;
        bool has_a_t_attr() const;
        void set_a_t_attr(const ns_a::ST_Coordinate& _a_t_attr);
        const ns_a::ST_Coordinate& get_a_t_attr() const;
        bool has_a_r_attr() const;
        void set_a_r_attr(const ns_a::ST_Coordinate& _a_r_attr);
        const ns_a::ST_Coordinate& get_a_r_attr() const;
        bool has_a_b_attr() const;
        void set_a_b_attr(const ns_a::ST_Coordinate& _a_b_attr);
        const ns_a::ST_Coordinate& get_a_b_attr() const;
    protected:
    private:
        static CT_EffectExtent* default_instance_;
        bool m_has_a_l_attr;
        ns_a::ST_Coordinate* m_a_l_attr;
        bool m_has_a_t_attr;
        ns_a::ST_Coordinate* m_a_t_attr;
        bool m_has_a_r_attr;
        ns_a::ST_Coordinate* m_a_r_attr;
        bool m_has_a_b_attr;
        ns_a::ST_Coordinate* m_a_b_attr;
    };

    class CT_Inline: public XSD::ComplexType
    {
    public:
        bool has_a_extent() const;
        ns_a::CT_PositiveSize2D* mutable_a_extent();
        const ns_a::CT_PositiveSize2D& get_a_extent() const;
        bool has_effectExtent() const;
        CT_EffectExtent* mutable_effectExtent();
        const CT_EffectExtent& get_effectExtent() const;
        bool has_a_docPr() const;
        ns_a::CT_NonVisualDrawingProps* mutable_a_docPr();
        const ns_a::CT_NonVisualDrawingProps& get_a_docPr() const;
        bool has_a_cNvGraphicFramePr() const;
        ns_a::CT_NonVisualGraphicFrameProperties* mutable_a_cNvGraphicFramePr();
        const ns_a::CT_NonVisualGraphicFrameProperties& get_a_cNvGraphicFramePr() const;
        bool has_a_graphic() const;
        ns_a::CT_GraphicalObject* mutable_a_graphic();
        const ns_a::CT_GraphicalObject& get_a_graphic() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_Inline& default_instance();
        bool has_distT_attr() const;
        void set_distT_attr(const ST_WrapDistance& _distT_attr);
        const ST_WrapDistance& get_distT_attr() const;
        bool has_distB_attr() const;
        void set_distB_attr(const ST_WrapDistance& _distB_attr);
        const ST_WrapDistance& get_distB_attr() const;
        bool has_distL_attr() const;
        void set_distL_attr(const ST_WrapDistance& _distL_attr);
        const ST_WrapDistance& get_distL_attr() const;
        bool has_distR_attr() const;
        void set_distR_attr(const ST_WrapDistance& _distR_attr);
        const ST_WrapDistance& get_distR_attr() const;
    protected:
    private:
        bool m_has_a_extent;
        ns_a::CT_PositiveSize2D* m_a_extent;
        bool m_has_effectExtent;
        CT_EffectExtent* m_effectExtent;
        bool m_has_a_docPr;
        ns_a::CT_NonVisualDrawingProps* m_a_docPr;
        bool m_has_a_cNvGraphicFramePr;
        ns_a::CT_NonVisualGraphicFrameProperties* m_a_cNvGraphicFramePr;
        bool m_has_a_graphic;
        ns_a::CT_GraphicalObject* m_a_graphic;
        static CT_Inline* default_instance_;
        bool m_has_distT_attr;
        ST_WrapDistance* m_distT_attr;
        bool m_has_distB_attr;
        ST_WrapDistance* m_distB_attr;
        bool m_has_distL_attr;
        ST_WrapDistance* m_distL_attr;
        bool m_has_distR_attr;
        ST_WrapDistance* m_distR_attr;
    };

    class CT_WrapPath: public XSD::ComplexType
    {
    public:
        bool has_a_start() const;
        ns_a::CT_Point2D* mutable_a_start();
        const ns_a::CT_Point2D& get_a_start() const;
        ns_a::CT_Point2D* add_a_lineTo();
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_WrapPath& default_instance();
        bool has_edited_attr() const;
        void set_edited_attr(const XSD::boolean_& _edited_attr);
        const XSD::boolean_& get_edited_attr() const;
    protected:
    private:
        class ChildGroup_1
        {
        public:
            bool has_a_lineTo() const;
            ns_a::CT_Point2D* mutable_a_lineTo();
            const ns_a::CT_Point2D& get_a_lineTo() const;
        protected:
        private:
            bool m_has_a_lineTo;
            ns_a::CT_Point2D* m_a_lineTo;
        };
        bool m_has_a_start;
        ns_a::CT_Point2D* m_a_start;
        vector<ChildGroup_1*> m_childGroupList_1;
        static CT_WrapPath* default_instance_;
        bool m_has_edited_attr;
        XSD::boolean_ m_edited_attr;
    };

    class CT_WrapNone: public XSD::ComplexType
    {
    public:
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_WrapNone& default_instance();
    protected:
    private:
        static CT_WrapNone* default_instance_;
    };

    class CT_WrapSquare: public XSD::ComplexType
    {
    public:
        bool has_effectExtent() const;
        CT_EffectExtent* mutable_effectExtent();
        const CT_EffectExtent& get_effectExtent() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_WrapSquare& default_instance();
        bool has_wrapText_attr() const;
        void set_wrapText_attr(const ST_WrapText& _wrapText_attr);
        const ST_WrapText& get_wrapText_attr() const;
        bool has_distT_attr() const;
        void set_distT_attr(const ST_WrapDistance& _distT_attr);
        const ST_WrapDistance& get_distT_attr() const;
        bool has_distB_attr() const;
        void set_distB_attr(const ST_WrapDistance& _distB_attr);
        const ST_WrapDistance& get_distB_attr() const;
        bool has_distL_attr() const;
        void set_distL_attr(const ST_WrapDistance& _distL_attr);
        const ST_WrapDistance& get_distL_attr() const;
        bool has_distR_attr() const;
        void set_distR_attr(const ST_WrapDistance& _distR_attr);
        const ST_WrapDistance& get_distR_attr() const;
    protected:
    private:
        bool m_has_effectExtent;
        CT_EffectExtent* m_effectExtent;
        static CT_WrapSquare* default_instance_;
        bool m_has_wrapText_attr;
        ST_WrapText* m_wrapText_attr;
        bool m_has_distT_attr;
        ST_WrapDistance* m_distT_attr;
        bool m_has_distB_attr;
        ST_WrapDistance* m_distB_attr;
        bool m_has_distL_attr;
        ST_WrapDistance* m_distL_attr;
        bool m_has_distR_attr;
        ST_WrapDistance* m_distR_attr;
    };

    class CT_WrapTight: public XSD::ComplexType
    {
    public:
        bool has_wrapPolygon() const;
        CT_WrapPath* mutable_wrapPolygon();
        const CT_WrapPath& get_wrapPolygon() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_WrapTight& default_instance();
        bool has_wrapText_attr() const;
        void set_wrapText_attr(const ST_WrapText& _wrapText_attr);
        const ST_WrapText& get_wrapText_attr() const;
        bool has_distL_attr() const;
        void set_distL_attr(const ST_WrapDistance& _distL_attr);
        const ST_WrapDistance& get_distL_attr() const;
        bool has_distR_attr() const;
        void set_distR_attr(const ST_WrapDistance& _distR_attr);
        const ST_WrapDistance& get_distR_attr() const;
    protected:
    private:
        bool m_has_wrapPolygon;
        CT_WrapPath* m_wrapPolygon;
        static CT_WrapTight* default_instance_;
        bool m_has_wrapText_attr;
        ST_WrapText* m_wrapText_attr;
        bool m_has_distL_attr;
        ST_WrapDistance* m_distL_attr;
        bool m_has_distR_attr;
        ST_WrapDistance* m_distR_attr;
    };

    class CT_WrapThrough: public XSD::ComplexType
    {
    public:
        bool has_wrapPolygon() const;
        CT_WrapPath* mutable_wrapPolygon();
        const CT_WrapPath& get_wrapPolygon() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_WrapThrough& default_instance();
        bool has_wrapText_attr() const;
        void set_wrapText_attr(const ST_WrapText& _wrapText_attr);
        const ST_WrapText& get_wrapText_attr() const;
        bool has_distL_attr() const;
        void set_distL_attr(const ST_WrapDistance& _distL_attr);
        const ST_WrapDistance& get_distL_attr() const;
        bool has_distR_attr() const;
        void set_distR_attr(const ST_WrapDistance& _distR_attr);
        const ST_WrapDistance& get_distR_attr() const;
    protected:
    private:
        bool m_has_wrapPolygon;
        CT_WrapPath* m_wrapPolygon;
        static CT_WrapThrough* default_instance_;
        bool m_has_wrapText_attr;
        ST_WrapText* m_wrapText_attr;
        bool m_has_distL_attr;
        ST_WrapDistance* m_distL_attr;
        bool m_has_distR_attr;
        ST_WrapDistance* m_distR_attr;
    };

    class CT_WrapTopBottom: public XSD::ComplexType
    {
    public:
        bool has_effectExtent() const;
        CT_EffectExtent* mutable_effectExtent();
        const CT_EffectExtent& get_effectExtent() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_WrapTopBottom& default_instance();
        bool has_distT_attr() const;
        void set_distT_attr(const ST_WrapDistance& _distT_attr);
        const ST_WrapDistance& get_distT_attr() const;
        bool has_distB_attr() const;
        void set_distB_attr(const ST_WrapDistance& _distB_attr);
        const ST_WrapDistance& get_distB_attr() const;
    protected:
    private:
        bool m_has_effectExtent;
        CT_EffectExtent* m_effectExtent;
        static CT_WrapTopBottom* default_instance_;
        bool m_has_distT_attr;
        ST_WrapDistance* m_distT_attr;
        bool m_has_distB_attr;
        ST_WrapDistance* m_distB_attr;
    };

    class CT_PosH: public XSD::ComplexType
    {
    public:
        bool has_align() const;
        ST_AlignH* mutable_align();
        const ST_AlignH& get_align() const;
        bool has_posOffset() const;
        ST_PositionOffset* mutable_posOffset();
        const ST_PositionOffset& get_posOffset() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_PosH& default_instance();
        bool has_relativeFrom_attr() const;
        void set_relativeFrom_attr(const ST_RelFromH& _relativeFrom_attr);
        const ST_RelFromH& get_relativeFrom_attr() const;
    protected:
    private:
        bool m_has_align;
        ST_AlignH* m_align;
        bool m_has_posOffset;
        ST_PositionOffset* m_posOffset;
        static CT_PosH* default_instance_;
        bool m_has_relativeFrom_attr;
        ST_RelFromH* m_relativeFrom_attr;
    };

    class CT_PosV: public XSD::ComplexType
    {
    public:
        bool has_align() const;
        ST_AlignV* mutable_align();
        const ST_AlignV& get_align() const;
        bool has_posOffset() const;
        ST_PositionOffset* mutable_posOffset();
        const ST_PositionOffset& get_posOffset() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_PosV& default_instance();
        bool has_relativeFrom_attr() const;
        void set_relativeFrom_attr(const ST_RelFromV& _relativeFrom_attr);
        const ST_RelFromV& get_relativeFrom_attr() const;
    protected:
    private:
        bool m_has_align;
        ST_AlignV* m_align;
        bool m_has_posOffset;
        ST_PositionOffset* m_posOffset;
        static CT_PosV* default_instance_;
        bool m_has_relativeFrom_attr;
        ST_RelFromV* m_relativeFrom_attr;
    };

    class CT_Anchor: public XSD::ComplexType
    {
    public:
        bool has_a_simplePos() const;
        ns_a::CT_Point2D* mutable_a_simplePos();
        const ns_a::CT_Point2D& get_a_simplePos() const;
        bool has_positionH() const;
        CT_PosH* mutable_positionH();
        const CT_PosH& get_positionH() const;
        bool has_positionV() const;
        CT_PosV* mutable_positionV();
        const CT_PosV& get_positionV() const;
        bool has_a_extent() const;
        ns_a::CT_PositiveSize2D* mutable_a_extent();
        const ns_a::CT_PositiveSize2D& get_a_extent() const;
        bool has_effectExtent() const;
        CT_EffectExtent* mutable_effectExtent();
        const CT_EffectExtent& get_effectExtent() const;
        bool has_wrapNone() const;
        CT_WrapNone* mutable_wrapNone();
        const CT_WrapNone& get_wrapNone() const;
        bool has_wrapSquare() const;
        CT_WrapSquare* mutable_wrapSquare();
        const CT_WrapSquare& get_wrapSquare() const;
        bool has_wrapTight() const;
        CT_WrapTight* mutable_wrapTight();
        const CT_WrapTight& get_wrapTight() const;
        bool has_wrapThrough() const;
        CT_WrapThrough* mutable_wrapThrough();
        const CT_WrapThrough& get_wrapThrough() const;
        bool has_wrapTopAndBottom() const;
        CT_WrapTopBottom* mutable_wrapTopAndBottom();
        const CT_WrapTopBottom& get_wrapTopAndBottom() const;
        bool has_a_docPr() const;
        ns_a::CT_NonVisualDrawingProps* mutable_a_docPr();
        const ns_a::CT_NonVisualDrawingProps& get_a_docPr() const;
        bool has_a_cNvGraphicFramePr() const;
        ns_a::CT_NonVisualGraphicFrameProperties* mutable_a_cNvGraphicFramePr();
        const ns_a::CT_NonVisualGraphicFrameProperties& get_a_cNvGraphicFramePr() const;
        bool has_a_graphic() const;
        ns_a::CT_GraphicalObject* mutable_a_graphic();
        const ns_a::CT_GraphicalObject& get_a_graphic() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_Anchor& default_instance();
        bool has_distT_attr() const;
        void set_distT_attr(const ST_WrapDistance& _distT_attr);
        const ST_WrapDistance& get_distT_attr() const;
        bool has_distB_attr() const;
        void set_distB_attr(const ST_WrapDistance& _distB_attr);
        const ST_WrapDistance& get_distB_attr() const;
        bool has_distL_attr() const;
        void set_distL_attr(const ST_WrapDistance& _distL_attr);
        const ST_WrapDistance& get_distL_attr() const;
        bool has_distR_attr() const;
        void set_distR_attr(const ST_WrapDistance& _distR_attr);
        const ST_WrapDistance& get_distR_attr() const;
        bool has_simplePos_attr() const;
        void set_simplePos_attr(const XSD::boolean_& _simplePos_attr);
        const XSD::boolean_& get_simplePos_attr() const;
        bool has_relativeHeight_attr() const;
        void set_relativeHeight_attr(const XSD::unsignedInt_& _relativeHeight_attr);
        const XSD::unsignedInt_& get_relativeHeight_attr() const;
        bool has_behindDoc_attr() const;
        void set_behindDoc_attr(const XSD::boolean_& _behindDoc_attr);
        const XSD::boolean_& get_behindDoc_attr() const;
        bool has_locked_attr() const;
        void set_locked_attr(const XSD::boolean_& _locked_attr);
        const XSD::boolean_& get_locked_attr() const;
        bool has_layoutInCell_attr() const;
        void set_layoutInCell_attr(const XSD::boolean_& _layoutInCell_attr);
        const XSD::boolean_& get_layoutInCell_attr() const;
        bool has_hidden_attr() const;
        void set_hidden_attr(const XSD::boolean_& _hidden_attr);
        const XSD::boolean_& get_hidden_attr() const;
        bool has_allowOverlap_attr() const;
        void set_allowOverlap_attr(const XSD::boolean_& _allowOverlap_attr);
        const XSD::boolean_& get_allowOverlap_attr() const;
    protected:
    private:
        bool m_has_a_simplePos;
        ns_a::CT_Point2D* m_a_simplePos;
        bool m_has_positionH;
        CT_PosH* m_positionH;
        bool m_has_positionV;
        CT_PosV* m_positionV;
        bool m_has_a_extent;
        ns_a::CT_PositiveSize2D* m_a_extent;
        bool m_has_effectExtent;
        CT_EffectExtent* m_effectExtent;
        bool m_has_wrapNone;
        CT_WrapNone* m_wrapNone;
        bool m_has_wrapSquare;
        CT_WrapSquare* m_wrapSquare;
        bool m_has_wrapTight;
        CT_WrapTight* m_wrapTight;
        bool m_has_wrapThrough;
        CT_WrapThrough* m_wrapThrough;
        bool m_has_wrapTopAndBottom;
        CT_WrapTopBottom* m_wrapTopAndBottom;
        bool m_has_a_docPr;
        ns_a::CT_NonVisualDrawingProps* m_a_docPr;
        bool m_has_a_cNvGraphicFramePr;
        ns_a::CT_NonVisualGraphicFrameProperties* m_a_cNvGraphicFramePr;
        bool m_has_a_graphic;
        ns_a::CT_GraphicalObject* m_a_graphic;
        static CT_Anchor* default_instance_;
        bool m_has_distT_attr;
        ST_WrapDistance* m_distT_attr;
        bool m_has_distB_attr;
        ST_WrapDistance* m_distB_attr;
        bool m_has_distL_attr;
        ST_WrapDistance* m_distL_attr;
        bool m_has_distR_attr;
        ST_WrapDistance* m_distR_attr;
        bool m_has_simplePos_attr;
        XSD::boolean_ m_simplePos_attr;
        bool m_has_relativeHeight_attr;
        XSD::unsignedInt_ m_relativeHeight_attr;
        bool m_has_behindDoc_attr;
        XSD::boolean_ m_behindDoc_attr;
        bool m_has_locked_attr;
        XSD::boolean_ m_locked_attr;
        bool m_has_layoutInCell_attr;
        XSD::boolean_ m_layoutInCell_attr;
        bool m_has_hidden_attr;
        XSD::boolean_ m_hidden_attr;
        bool m_has_allowOverlap_attr;
        XSD::boolean_ m_allowOverlap_attr;
    };

    class CT_TxbxContent: public XSD::ComplexType
    {
    public:
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_TxbxContent& default_instance();
    protected:
    private:
        static CT_TxbxContent* default_instance_;
    };

    class CT_TextboxInfo: public XSD::ComplexType
    {
    public:
        bool has_txbxContent() const;
        CT_TxbxContent* mutable_txbxContent();
        const CT_TxbxContent& get_txbxContent() const;
        bool has_a_extLst() const;
        ns_a::CT_OfficeArtExtensionList* mutable_a_extLst();
        const ns_a::CT_OfficeArtExtensionList& get_a_extLst() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_TextboxInfo& default_instance();
        bool has_id_attr() const;
        void set_id_attr(const XSD::unsignedShort_& _id_attr);
        const XSD::unsignedShort_& get_id_attr() const;
    protected:
    private:
        bool m_has_txbxContent;
        CT_TxbxContent* m_txbxContent;
        bool m_has_a_extLst;
        ns_a::CT_OfficeArtExtensionList* m_a_extLst;
        static CT_TextboxInfo* default_instance_;
        bool m_has_id_attr;
        XSD::unsignedShort_ m_id_attr;
    };

    class CT_LinkedTextboxInformation: public XSD::ComplexType
    {
    public:
        bool has_a_extLst() const;
        ns_a::CT_OfficeArtExtensionList* mutable_a_extLst();
        const ns_a::CT_OfficeArtExtensionList& get_a_extLst() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_LinkedTextboxInformation& default_instance();
        bool has_id_attr() const;
        void set_id_attr(const XSD::unsignedShort_& _id_attr);
        const XSD::unsignedShort_& get_id_attr() const;
        bool has_seq_attr() const;
        void set_seq_attr(const XSD::unsignedShort_& _seq_attr);
        const XSD::unsignedShort_& get_seq_attr() const;
    protected:
    private:
        bool m_has_a_extLst;
        ns_a::CT_OfficeArtExtensionList* m_a_extLst;
        static CT_LinkedTextboxInformation* default_instance_;
        bool m_has_id_attr;
        XSD::unsignedShort_ m_id_attr;
        bool m_has_seq_attr;
        XSD::unsignedShort_ m_seq_attr;
    };

    class CT_WordprocessingShape: public XSD::ComplexType
    {
    public:
        bool has_a_cNvPr() const;
        ns_a::CT_NonVisualDrawingProps* mutable_a_cNvPr();
        const ns_a::CT_NonVisualDrawingProps& get_a_cNvPr() const;
        bool has_a_cNvSpPr() const;
        ns_a::CT_NonVisualDrawingShapeProps* mutable_a_cNvSpPr();
        const ns_a::CT_NonVisualDrawingShapeProps& get_a_cNvSpPr() const;
        bool has_a_cNvCnPr() const;
        ns_a::CT_NonVisualConnectorProperties* mutable_a_cNvCnPr();
        const ns_a::CT_NonVisualConnectorProperties& get_a_cNvCnPr() const;
        bool has_a_spPr() const;
        ns_a::CT_ShapeProperties* mutable_a_spPr();
        const ns_a::CT_ShapeProperties& get_a_spPr() const;
        bool has_a_style() const;
        ns_a::CT_ShapeStyle* mutable_a_style();
        const ns_a::CT_ShapeStyle& get_a_style() const;
        bool has_a_extLst() const;
        ns_a::CT_OfficeArtExtensionList* mutable_a_extLst();
        const ns_a::CT_OfficeArtExtensionList& get_a_extLst() const;
        bool has_txbx() const;
        CT_TextboxInfo* mutable_txbx();
        const CT_TextboxInfo& get_txbx() const;
        bool has_linkedTxbx() const;
        CT_LinkedTextboxInformation* mutable_linkedTxbx();
        const CT_LinkedTextboxInformation& get_linkedTxbx() const;
        bool has_a_bodyPr() const;
        ns_a::CT_TextBodyProperties* mutable_a_bodyPr();
        const ns_a::CT_TextBodyProperties& get_a_bodyPr() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_WordprocessingShape& default_instance();
        bool has_normalEastAsianFlow_attr() const;
        void set_normalEastAsianFlow_attr(const XSD::boolean_& _normalEastAsianFlow_attr);
        const XSD::boolean_& get_normalEastAsianFlow_attr() const;
    protected:
    private:
        bool m_has_a_cNvPr;
        ns_a::CT_NonVisualDrawingProps* m_a_cNvPr;
        bool m_has_a_cNvSpPr;
        ns_a::CT_NonVisualDrawingShapeProps* m_a_cNvSpPr;
        bool m_has_a_cNvCnPr;
        ns_a::CT_NonVisualConnectorProperties* m_a_cNvCnPr;
        bool m_has_a_spPr;
        ns_a::CT_ShapeProperties* m_a_spPr;
        bool m_has_a_style;
        ns_a::CT_ShapeStyle* m_a_style;
        bool m_has_a_extLst;
        ns_a::CT_OfficeArtExtensionList* m_a_extLst;
        bool m_has_txbx;
        CT_TextboxInfo* m_txbx;
        bool m_has_linkedTxbx;
        CT_LinkedTextboxInformation* m_linkedTxbx;
        bool m_has_a_bodyPr;
        ns_a::CT_TextBodyProperties* m_a_bodyPr;
        static CT_WordprocessingShape* default_instance_;
        bool m_has_normalEastAsianFlow_attr;
        XSD::boolean_ m_normalEastAsianFlow_attr;
    };

    class CT_GraphicFrame: public XSD::ComplexType
    {
    public:
        bool has_a_cNvPr() const;
        ns_a::CT_NonVisualDrawingProps* mutable_a_cNvPr();
        const ns_a::CT_NonVisualDrawingProps& get_a_cNvPr() const;
        bool has_a_cNvFrPr() const;
        ns_a::CT_NonVisualGraphicFrameProperties* mutable_a_cNvFrPr();
        const ns_a::CT_NonVisualGraphicFrameProperties& get_a_cNvFrPr() const;
        bool has_a_xfrm() const;
        ns_a::CT_Transform2D* mutable_a_xfrm();
        const ns_a::CT_Transform2D& get_a_xfrm() const;
        bool has_a_graphic() const;
        ns_a::CT_GraphicalObject* mutable_a_graphic();
        const ns_a::CT_GraphicalObject& get_a_graphic() const;
        bool has_a_extLst() const;
        ns_a::CT_OfficeArtExtensionList* mutable_a_extLst();
        const ns_a::CT_OfficeArtExtensionList& get_a_extLst() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_GraphicFrame& default_instance();
    protected:
    private:
        bool m_has_a_cNvPr;
        ns_a::CT_NonVisualDrawingProps* m_a_cNvPr;
        bool m_has_a_cNvFrPr;
        ns_a::CT_NonVisualGraphicFrameProperties* m_a_cNvFrPr;
        bool m_has_a_xfrm;
        ns_a::CT_Transform2D* m_a_xfrm;
        bool m_has_a_graphic;
        ns_a::CT_GraphicalObject* m_a_graphic;
        bool m_has_a_extLst;
        ns_a::CT_OfficeArtExtensionList* m_a_extLst;
        static CT_GraphicFrame* default_instance_;
    };

    class CT_WordprocessingContentPartNonVisual: public XSD::ComplexType
    {
    public:
        bool has_a_cNvPr() const;
        ns_a::CT_NonVisualDrawingProps* mutable_a_cNvPr();
        const ns_a::CT_NonVisualDrawingProps& get_a_cNvPr() const;
        bool has_a_cNvContentPartPr() const;
        ns_a::CT_NonVisualContentPartProperties* mutable_a_cNvContentPartPr();
        const ns_a::CT_NonVisualContentPartProperties& get_a_cNvContentPartPr() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_WordprocessingContentPartNonVisual& default_instance();
    protected:
    private:
        bool m_has_a_cNvPr;
        ns_a::CT_NonVisualDrawingProps* m_a_cNvPr;
        bool m_has_a_cNvContentPartPr;
        ns_a::CT_NonVisualContentPartProperties* m_a_cNvContentPartPr;
        static CT_WordprocessingContentPartNonVisual* default_instance_;
    };

    class CT_WordprocessingContentPart: public XSD::ComplexType
    {
    public:
        bool has_nvContentPartPr() const;
        CT_WordprocessingContentPartNonVisual* mutable_nvContentPartPr();
        const CT_WordprocessingContentPartNonVisual& get_nvContentPartPr() const;
        bool has_a_xfrm() const;
        ns_a::CT_Transform2D* mutable_a_xfrm();
        const ns_a::CT_Transform2D& get_a_xfrm() const;
        bool has_a_extLst() const;
        ns_a::CT_OfficeArtExtensionList* mutable_a_extLst();
        const ns_a::CT_OfficeArtExtensionList& get_a_extLst() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_WordprocessingContentPart& default_instance();
        bool has_a_bwMode_attr() const;
        void set_a_bwMode_attr(const ns_a::ST_BlackWhiteMode& _a_bwMode_attr);
        const ns_a::ST_BlackWhiteMode& get_a_bwMode_attr() const;
        bool has_r_id_attr() const;
        void set_r_id_attr(const ns_r::ST_RelationshipId& _r_id_attr);
        const ns_r::ST_RelationshipId& get_r_id_attr() const;
    protected:
    private:
        bool m_has_nvContentPartPr;
        CT_WordprocessingContentPartNonVisual* m_nvContentPartPr;
        bool m_has_a_xfrm;
        ns_a::CT_Transform2D* m_a_xfrm;
        bool m_has_a_extLst;
        ns_a::CT_OfficeArtExtensionList* m_a_extLst;
        static CT_WordprocessingContentPart* default_instance_;
        bool m_has_a_bwMode_attr;
        ns_a::ST_BlackWhiteMode* m_a_bwMode_attr;
        bool m_has_r_id_attr;
        ns_r::ST_RelationshipId* m_r_id_attr;
    };

    class CT_WordprocessingGroup: public XSD::ComplexType
    {
    public:
        bool has_a_cNvPr() const;
        ns_a::CT_NonVisualDrawingProps* mutable_a_cNvPr();
        const ns_a::CT_NonVisualDrawingProps& get_a_cNvPr() const;
        bool has_a_cNvGrpSpPr() const;
        ns_a::CT_NonVisualGroupDrawingShapeProps* mutable_a_cNvGrpSpPr();
        const ns_a::CT_NonVisualGroupDrawingShapeProps& get_a_cNvGrpSpPr() const;
        bool has_a_grpSpPr() const;
        ns_a::CT_GroupShapeProperties* mutable_a_grpSpPr();
        const ns_a::CT_GroupShapeProperties& get_a_grpSpPr() const;
        CT_WordprocessingShape* add_wsp();
        CT_WordprocessingGroup* add_grpSp();
        CT_GraphicFrame* add_graphicFrame();
        ns_dpct::CT_Picture* add_dpct_pic();
        CT_WordprocessingContentPart* add_contentPart();
        bool has_a_extLst() const;
        ns_a::CT_OfficeArtExtensionList* mutable_a_extLst();
        const ns_a::CT_OfficeArtExtensionList& get_a_extLst() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_WordprocessingGroup& default_instance();
    protected:
    private:
        class ChildGroup_1
        {
        public:
            bool has_wsp() const;
            CT_WordprocessingShape* mutable_wsp();
            const CT_WordprocessingShape& get_wsp() const;
            bool has_grpSp() const;
            CT_WordprocessingGroup* mutable_grpSp();
            const CT_WordprocessingGroup& get_grpSp() const;
            bool has_graphicFrame() const;
            CT_GraphicFrame* mutable_graphicFrame();
            const CT_GraphicFrame& get_graphicFrame() const;
            bool has_dpct_pic() const;
            ns_dpct::CT_Picture* mutable_dpct_pic();
            const ns_dpct::CT_Picture& get_dpct_pic() const;
            bool has_contentPart() const;
            CT_WordprocessingContentPart* mutable_contentPart();
            const CT_WordprocessingContentPart& get_contentPart() const;
        protected:
        private:
            bool m_has_wsp;
            CT_WordprocessingShape* m_wsp;
            bool m_has_grpSp;
            CT_WordprocessingGroup* m_grpSp;
            bool m_has_graphicFrame;
            CT_GraphicFrame* m_graphicFrame;
            bool m_has_dpct_pic;
            ns_dpct::CT_Picture* m_dpct_pic;
            bool m_has_contentPart;
            CT_WordprocessingContentPart* m_contentPart;
        };
        bool m_has_a_cNvPr;
        ns_a::CT_NonVisualDrawingProps* m_a_cNvPr;
        bool m_has_a_cNvGrpSpPr;
        ns_a::CT_NonVisualGroupDrawingShapeProps* m_a_cNvGrpSpPr;
        bool m_has_a_grpSpPr;
        ns_a::CT_GroupShapeProperties* m_a_grpSpPr;
        vector<ChildGroup_1*> m_childGroupList_1;
        bool m_has_a_extLst;
        ns_a::CT_OfficeArtExtensionList* m_a_extLst;
        static CT_WordprocessingGroup* default_instance_;
    };

    class CT_WordprocessingCanvas: public XSD::ComplexType
    {
    public:
        bool has_a_bg() const;
        ns_a::CT_BackgroundFormatting* mutable_a_bg();
        const ns_a::CT_BackgroundFormatting& get_a_bg() const;
        bool has_a_whole() const;
        ns_a::CT_WholeE2oFormatting* mutable_a_whole();
        const ns_a::CT_WholeE2oFormatting& get_a_whole() const;
        CT_WordprocessingShape* add_wsp();
        ns_dpct::CT_Picture* add_dpct_pic();
        CT_WordprocessingContentPart* add_contentPart();
        CT_WordprocessingGroup* add_wgp();
        CT_GraphicFrame* add_graphicFrame();
        bool has_a_extLst() const;
        ns_a::CT_OfficeArtExtensionList* mutable_a_extLst();
        const ns_a::CT_OfficeArtExtensionList& get_a_extLst() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_WordprocessingCanvas& default_instance();
    protected:
    private:
        class ChildGroup_1
        {
        public:
            bool has_wsp() const;
            CT_WordprocessingShape* mutable_wsp();
            const CT_WordprocessingShape& get_wsp() const;
            bool has_dpct_pic() const;
            ns_dpct::CT_Picture* mutable_dpct_pic();
            const ns_dpct::CT_Picture& get_dpct_pic() const;
            bool has_contentPart() const;
            CT_WordprocessingContentPart* mutable_contentPart();
            const CT_WordprocessingContentPart& get_contentPart() const;
            bool has_wgp() const;
            CT_WordprocessingGroup* mutable_wgp();
            const CT_WordprocessingGroup& get_wgp() const;
            bool has_graphicFrame() const;
            CT_GraphicFrame* mutable_graphicFrame();
            const CT_GraphicFrame& get_graphicFrame() const;
        protected:
        private:
            bool m_has_wsp;
            CT_WordprocessingShape* m_wsp;
            bool m_has_dpct_pic;
            ns_dpct::CT_Picture* m_dpct_pic;
            bool m_has_contentPart;
            CT_WordprocessingContentPart* m_contentPart;
            bool m_has_wgp;
            CT_WordprocessingGroup* m_wgp;
            bool m_has_graphicFrame;
            CT_GraphicFrame* m_graphicFrame;
        };
        bool m_has_a_bg;
        ns_a::CT_BackgroundFormatting* m_a_bg;
        bool m_has_a_whole;
        ns_a::CT_WholeE2oFormatting* m_a_whole;
        vector<ChildGroup_1*> m_childGroupList_1;
        bool m_has_a_extLst;
        ns_a::CT_OfficeArtExtensionList* m_a_extLst;
        static CT_WordprocessingCanvas* default_instance_;
    };

    class wpc_element: public Element
    {
    public:
        bool has_a_bg() const;
        ns_a::CT_BackgroundFormatting* mutable_a_bg();
        const ns_a::CT_BackgroundFormatting& get_a_bg() const;
        bool has_a_whole() const;
        ns_a::CT_WholeE2oFormatting* mutable_a_whole();
        const ns_a::CT_WholeE2oFormatting& get_a_whole() const;
        CT_WordprocessingShape* add_wsp();
        ns_dpct::CT_Picture* add_dpct_pic();
        CT_WordprocessingContentPart* add_contentPart();
        CT_WordprocessingGroup* add_wgp();
        CT_GraphicFrame* add_graphicFrame();
        bool has_a_extLst() const;
        ns_a::CT_OfficeArtExtensionList* mutable_a_extLst();
        const ns_a::CT_OfficeArtExtensionList& get_a_extLst() const;
        void clear();
        void toXml(std::ostream& _outStream) const;
        static const wpc_element& default_instance();
    protected:
    private:
        class ChildGroup_1
        {
        public:
            bool has_wsp() const;
            CT_WordprocessingShape* mutable_wsp();
            const CT_WordprocessingShape& get_wsp() const;
            bool has_dpct_pic() const;
            ns_dpct::CT_Picture* mutable_dpct_pic();
            const ns_dpct::CT_Picture& get_dpct_pic() const;
            bool has_contentPart() const;
            CT_WordprocessingContentPart* mutable_contentPart();
            const CT_WordprocessingContentPart& get_contentPart() const;
            bool has_wgp() const;
            CT_WordprocessingGroup* mutable_wgp();
            const CT_WordprocessingGroup& get_wgp() const;
            bool has_graphicFrame() const;
            CT_GraphicFrame* mutable_graphicFrame();
            const CT_GraphicFrame& get_graphicFrame() const;
        protected:
        private:
            bool m_has_wsp;
            CT_WordprocessingShape* m_wsp;
            bool m_has_dpct_pic;
            ns_dpct::CT_Picture* m_dpct_pic;
            bool m_has_contentPart;
            CT_WordprocessingContentPart* m_contentPart;
            bool m_has_wgp;
            CT_WordprocessingGroup* m_wgp;
            bool m_has_graphicFrame;
            CT_GraphicFrame* m_graphicFrame;
        };
        bool m_has_a_bg;
        ns_a::CT_BackgroundFormatting* m_a_bg;
        bool m_has_a_whole;
        ns_a::CT_WholeE2oFormatting* m_a_whole;
        vector<ChildGroup_1*> m_childGroupList_1;
        bool m_has_a_extLst;
        ns_a::CT_OfficeArtExtensionList* m_a_extLst;
        static wpc_element* default_instance_;
    };

    class wgp_element: public Element
    {
    public:
        bool has_a_cNvPr() const;
        ns_a::CT_NonVisualDrawingProps* mutable_a_cNvPr();
        const ns_a::CT_NonVisualDrawingProps& get_a_cNvPr() const;
        bool has_a_cNvGrpSpPr() const;
        ns_a::CT_NonVisualGroupDrawingShapeProps* mutable_a_cNvGrpSpPr();
        const ns_a::CT_NonVisualGroupDrawingShapeProps& get_a_cNvGrpSpPr() const;
        bool has_a_grpSpPr() const;
        ns_a::CT_GroupShapeProperties* mutable_a_grpSpPr();
        const ns_a::CT_GroupShapeProperties& get_a_grpSpPr() const;
        CT_WordprocessingShape* add_wsp();
        CT_WordprocessingGroup* add_grpSp();
        CT_GraphicFrame* add_graphicFrame();
        ns_dpct::CT_Picture* add_dpct_pic();
        CT_WordprocessingContentPart* add_contentPart();
        bool has_a_extLst() const;
        ns_a::CT_OfficeArtExtensionList* mutable_a_extLst();
        const ns_a::CT_OfficeArtExtensionList& get_a_extLst() const;
        void clear();
        void toXml(std::ostream& _outStream) const;
        static const wgp_element& default_instance();
    protected:
    private:
        class ChildGroup_1
        {
        public:
            bool has_wsp() const;
            CT_WordprocessingShape* mutable_wsp();
            const CT_WordprocessingShape& get_wsp() const;
            bool has_grpSp() const;
            CT_WordprocessingGroup* mutable_grpSp();
            const CT_WordprocessingGroup& get_grpSp() const;
            bool has_graphicFrame() const;
            CT_GraphicFrame* mutable_graphicFrame();
            const CT_GraphicFrame& get_graphicFrame() const;
            bool has_dpct_pic() const;
            ns_dpct::CT_Picture* mutable_dpct_pic();
            const ns_dpct::CT_Picture& get_dpct_pic() const;
            bool has_contentPart() const;
            CT_WordprocessingContentPart* mutable_contentPart();
            const CT_WordprocessingContentPart& get_contentPart() const;
        protected:
        private:
            bool m_has_wsp;
            CT_WordprocessingShape* m_wsp;
            bool m_has_grpSp;
            CT_WordprocessingGroup* m_grpSp;
            bool m_has_graphicFrame;
            CT_GraphicFrame* m_graphicFrame;
            bool m_has_dpct_pic;
            ns_dpct::CT_Picture* m_dpct_pic;
            bool m_has_contentPart;
            CT_WordprocessingContentPart* m_contentPart;
        };
        bool m_has_a_cNvPr;
        ns_a::CT_NonVisualDrawingProps* m_a_cNvPr;
        bool m_has_a_cNvGrpSpPr;
        ns_a::CT_NonVisualGroupDrawingShapeProps* m_a_cNvGrpSpPr;
        bool m_has_a_grpSpPr;
        ns_a::CT_GroupShapeProperties* m_a_grpSpPr;
        vector<ChildGroup_1*> m_childGroupList_1;
        bool m_has_a_extLst;
        ns_a::CT_OfficeArtExtensionList* m_a_extLst;
        static wgp_element* default_instance_;
    };

    class wsp_element: public Element
    {
    public:
        bool has_a_cNvPr() const;
        ns_a::CT_NonVisualDrawingProps* mutable_a_cNvPr();
        const ns_a::CT_NonVisualDrawingProps& get_a_cNvPr() const;
        bool has_a_cNvSpPr() const;
        ns_a::CT_NonVisualDrawingShapeProps* mutable_a_cNvSpPr();
        const ns_a::CT_NonVisualDrawingShapeProps& get_a_cNvSpPr() const;
        bool has_a_cNvCnPr() const;
        ns_a::CT_NonVisualConnectorProperties* mutable_a_cNvCnPr();
        const ns_a::CT_NonVisualConnectorProperties& get_a_cNvCnPr() const;
        bool has_a_spPr() const;
        ns_a::CT_ShapeProperties* mutable_a_spPr();
        const ns_a::CT_ShapeProperties& get_a_spPr() const;
        bool has_a_style() const;
        ns_a::CT_ShapeStyle* mutable_a_style();
        const ns_a::CT_ShapeStyle& get_a_style() const;
        bool has_a_extLst() const;
        ns_a::CT_OfficeArtExtensionList* mutable_a_extLst();
        const ns_a::CT_OfficeArtExtensionList& get_a_extLst() const;
        bool has_txbx() const;
        CT_TextboxInfo* mutable_txbx();
        const CT_TextboxInfo& get_txbx() const;
        bool has_linkedTxbx() const;
        CT_LinkedTextboxInformation* mutable_linkedTxbx();
        const CT_LinkedTextboxInformation& get_linkedTxbx() const;
        bool has_a_bodyPr() const;
        ns_a::CT_TextBodyProperties* mutable_a_bodyPr();
        const ns_a::CT_TextBodyProperties& get_a_bodyPr() const;
        void clear();
        void toXml(std::ostream& _outStream) const;
        static const wsp_element& default_instance();
        bool has_normalEastAsianFlow_attr() const;
        void set_normalEastAsianFlow_attr(const XSD::boolean_& _normalEastAsianFlow_attr);
        const XSD::boolean_& get_normalEastAsianFlow_attr() const;
    protected:
    private:
        bool m_has_a_cNvPr;
        ns_a::CT_NonVisualDrawingProps* m_a_cNvPr;
        bool m_has_a_cNvSpPr;
        ns_a::CT_NonVisualDrawingShapeProps* m_a_cNvSpPr;
        bool m_has_a_cNvCnPr;
        ns_a::CT_NonVisualConnectorProperties* m_a_cNvCnPr;
        bool m_has_a_spPr;
        ns_a::CT_ShapeProperties* m_a_spPr;
        bool m_has_a_style;
        ns_a::CT_ShapeStyle* m_a_style;
        bool m_has_a_extLst;
        ns_a::CT_OfficeArtExtensionList* m_a_extLst;
        bool m_has_txbx;
        CT_TextboxInfo* m_txbx;
        bool m_has_linkedTxbx;
        CT_LinkedTextboxInformation* m_linkedTxbx;
        bool m_has_a_bodyPr;
        ns_a::CT_TextBodyProperties* m_a_bodyPr;
        static wsp_element* default_instance_;
        bool m_has_normalEastAsianFlow_attr;
        XSD::boolean_ m_normalEastAsianFlow_attr;
    };

    class inline_element: public Element
    {
    public:
        bool has_a_extent() const;
        ns_a::CT_PositiveSize2D* mutable_a_extent();
        const ns_a::CT_PositiveSize2D& get_a_extent() const;
        bool has_effectExtent() const;
        CT_EffectExtent* mutable_effectExtent();
        const CT_EffectExtent& get_effectExtent() const;
        bool has_a_docPr() const;
        ns_a::CT_NonVisualDrawingProps* mutable_a_docPr();
        const ns_a::CT_NonVisualDrawingProps& get_a_docPr() const;
        bool has_a_cNvGraphicFramePr() const;
        ns_a::CT_NonVisualGraphicFrameProperties* mutable_a_cNvGraphicFramePr();
        const ns_a::CT_NonVisualGraphicFrameProperties& get_a_cNvGraphicFramePr() const;
        bool has_a_graphic() const;
        ns_a::CT_GraphicalObject* mutable_a_graphic();
        const ns_a::CT_GraphicalObject& get_a_graphic() const;
        void clear();
        void toXml(std::ostream& _outStream) const;
        static const inline_element& default_instance();
        bool has_distT_attr() const;
        void set_distT_attr(const ST_WrapDistance& _distT_attr);
        const ST_WrapDistance& get_distT_attr() const;
        bool has_distB_attr() const;
        void set_distB_attr(const ST_WrapDistance& _distB_attr);
        const ST_WrapDistance& get_distB_attr() const;
        bool has_distL_attr() const;
        void set_distL_attr(const ST_WrapDistance& _distL_attr);
        const ST_WrapDistance& get_distL_attr() const;
        bool has_distR_attr() const;
        void set_distR_attr(const ST_WrapDistance& _distR_attr);
        const ST_WrapDistance& get_distR_attr() const;
    protected:
    private:
        bool m_has_a_extent;
        ns_a::CT_PositiveSize2D* m_a_extent;
        bool m_has_effectExtent;
        CT_EffectExtent* m_effectExtent;
        bool m_has_a_docPr;
        ns_a::CT_NonVisualDrawingProps* m_a_docPr;
        bool m_has_a_cNvGraphicFramePr;
        ns_a::CT_NonVisualGraphicFrameProperties* m_a_cNvGraphicFramePr;
        bool m_has_a_graphic;
        ns_a::CT_GraphicalObject* m_a_graphic;
        static inline_element* default_instance_;
        bool m_has_distT_attr;
        ST_WrapDistance* m_distT_attr;
        bool m_has_distB_attr;
        ST_WrapDistance* m_distB_attr;
        bool m_has_distL_attr;
        ST_WrapDistance* m_distL_attr;
        bool m_has_distR_attr;
        ST_WrapDistance* m_distR_attr;
    };

    class anchor_element: public Element
    {
    public:
        bool has_a_simplePos() const;
        ns_a::CT_Point2D* mutable_a_simplePos();
        const ns_a::CT_Point2D& get_a_simplePos() const;
        bool has_positionH() const;
        CT_PosH* mutable_positionH();
        const CT_PosH& get_positionH() const;
        bool has_positionV() const;
        CT_PosV* mutable_positionV();
        const CT_PosV& get_positionV() const;
        bool has_a_extent() const;
        ns_a::CT_PositiveSize2D* mutable_a_extent();
        const ns_a::CT_PositiveSize2D& get_a_extent() const;
        bool has_effectExtent() const;
        CT_EffectExtent* mutable_effectExtent();
        const CT_EffectExtent& get_effectExtent() const;
        bool has_wrapNone() const;
        CT_WrapNone* mutable_wrapNone();
        const CT_WrapNone& get_wrapNone() const;
        bool has_wrapSquare() const;
        CT_WrapSquare* mutable_wrapSquare();
        const CT_WrapSquare& get_wrapSquare() const;
        bool has_wrapTight() const;
        CT_WrapTight* mutable_wrapTight();
        const CT_WrapTight& get_wrapTight() const;
        bool has_wrapThrough() const;
        CT_WrapThrough* mutable_wrapThrough();
        const CT_WrapThrough& get_wrapThrough() const;
        bool has_wrapTopAndBottom() const;
        CT_WrapTopBottom* mutable_wrapTopAndBottom();
        const CT_WrapTopBottom& get_wrapTopAndBottom() const;
        bool has_a_docPr() const;
        ns_a::CT_NonVisualDrawingProps* mutable_a_docPr();
        const ns_a::CT_NonVisualDrawingProps& get_a_docPr() const;
        bool has_a_cNvGraphicFramePr() const;
        ns_a::CT_NonVisualGraphicFrameProperties* mutable_a_cNvGraphicFramePr();
        const ns_a::CT_NonVisualGraphicFrameProperties& get_a_cNvGraphicFramePr() const;
        bool has_a_graphic() const;
        ns_a::CT_GraphicalObject* mutable_a_graphic();
        const ns_a::CT_GraphicalObject& get_a_graphic() const;
        void clear();
        void toXml(std::ostream& _outStream) const;
        static const anchor_element& default_instance();
        bool has_distT_attr() const;
        void set_distT_attr(const ST_WrapDistance& _distT_attr);
        const ST_WrapDistance& get_distT_attr() const;
        bool has_distB_attr() const;
        void set_distB_attr(const ST_WrapDistance& _distB_attr);
        const ST_WrapDistance& get_distB_attr() const;
        bool has_distL_attr() const;
        void set_distL_attr(const ST_WrapDistance& _distL_attr);
        const ST_WrapDistance& get_distL_attr() const;
        bool has_distR_attr() const;
        void set_distR_attr(const ST_WrapDistance& _distR_attr);
        const ST_WrapDistance& get_distR_attr() const;
        bool has_simplePos_attr() const;
        void set_simplePos_attr(const XSD::boolean_& _simplePos_attr);
        const XSD::boolean_& get_simplePos_attr() const;
        bool has_relativeHeight_attr() const;
        void set_relativeHeight_attr(const XSD::unsignedInt_& _relativeHeight_attr);
        const XSD::unsignedInt_& get_relativeHeight_attr() const;
        bool has_behindDoc_attr() const;
        void set_behindDoc_attr(const XSD::boolean_& _behindDoc_attr);
        const XSD::boolean_& get_behindDoc_attr() const;
        bool has_locked_attr() const;
        void set_locked_attr(const XSD::boolean_& _locked_attr);
        const XSD::boolean_& get_locked_attr() const;
        bool has_layoutInCell_attr() const;
        void set_layoutInCell_attr(const XSD::boolean_& _layoutInCell_attr);
        const XSD::boolean_& get_layoutInCell_attr() const;
        bool has_hidden_attr() const;
        void set_hidden_attr(const XSD::boolean_& _hidden_attr);
        const XSD::boolean_& get_hidden_attr() const;
        bool has_allowOverlap_attr() const;
        void set_allowOverlap_attr(const XSD::boolean_& _allowOverlap_attr);
        const XSD::boolean_& get_allowOverlap_attr() const;
    protected:
    private:
        bool m_has_a_simplePos;
        ns_a::CT_Point2D* m_a_simplePos;
        bool m_has_positionH;
        CT_PosH* m_positionH;
        bool m_has_positionV;
        CT_PosV* m_positionV;
        bool m_has_a_extent;
        ns_a::CT_PositiveSize2D* m_a_extent;
        bool m_has_effectExtent;
        CT_EffectExtent* m_effectExtent;
        bool m_has_wrapNone;
        CT_WrapNone* m_wrapNone;
        bool m_has_wrapSquare;
        CT_WrapSquare* m_wrapSquare;
        bool m_has_wrapTight;
        CT_WrapTight* m_wrapTight;
        bool m_has_wrapThrough;
        CT_WrapThrough* m_wrapThrough;
        bool m_has_wrapTopAndBottom;
        CT_WrapTopBottom* m_wrapTopAndBottom;
        bool m_has_a_docPr;
        ns_a::CT_NonVisualDrawingProps* m_a_docPr;
        bool m_has_a_cNvGraphicFramePr;
        ns_a::CT_NonVisualGraphicFrameProperties* m_a_cNvGraphicFramePr;
        bool m_has_a_graphic;
        ns_a::CT_GraphicalObject* m_a_graphic;
        static anchor_element* default_instance_;
        bool m_has_distT_attr;
        ST_WrapDistance* m_distT_attr;
        bool m_has_distB_attr;
        ST_WrapDistance* m_distB_attr;
        bool m_has_distL_attr;
        ST_WrapDistance* m_distL_attr;
        bool m_has_distR_attr;
        ST_WrapDistance* m_distR_attr;
        bool m_has_simplePos_attr;
        XSD::boolean_ m_simplePos_attr;
        bool m_has_relativeHeight_attr;
        XSD::unsignedInt_ m_relativeHeight_attr;
        bool m_has_behindDoc_attr;
        XSD::boolean_ m_behindDoc_attr;
        bool m_has_locked_attr;
        XSD::boolean_ m_locked_attr;
        bool m_has_layoutInCell_attr;
        XSD::boolean_ m_layoutInCell_attr;
        bool m_has_hidden_attr;
        XSD::boolean_ m_hidden_attr;
        bool m_has_allowOverlap_attr;
        XSD::boolean_ m_allowOverlap_attr;
    };

}
#endif