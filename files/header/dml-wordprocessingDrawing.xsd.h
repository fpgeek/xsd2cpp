#ifndef dml-wordprocessingDrawing_xsd 
#define dml-wordprocessingDrawing_xsd 0 

#include "xsddata.h"
#include <vector>
#include <string>
#include <iostream>
#include "dml-main_xsd.h"
#include "wml_xsd.h"
#include "dml-picture_xsd.h"
#include "shared-relationshipReference_xsd.h"
namespace ns_wp{
    class Element : public XSD::Element{
    public:

    private:

    }

    class Attribute : public XSD::Attribute{
    public:

    private:

    }

    class ST_WrapDistance : public XSD::SimpleType{
    public:
        ST_WrapDistance();
        ST_WrapDistance(const XSD::unsignedInt& _unsignedInt );
        bool has_unsignedInt() const;
        void set_unsignedInt(const unsignedInt& _unsignedInt );
        const unsignedInt& unsignedInt() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_WrapDistance& default_instance() const;

    private:
        static ST_WrapDistance* default_instance_ ;
        bool m_has_unsignedInt ;
        unsignedInt m_unsignedInt ;

    }

    class ST_WrapText : public XSD::SimpleType{
    public:
        ST_WrapText();
        ST_WrapText(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_WrapText& default_instance() const;
        enum Type{
            _bothSides_ = 1,
            _left_,
            _right_,
            _largest_
        }

    private:
        static const string TypeStrList [];
        static ST_WrapText* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_PositionOffset : public XSD::SimpleType{
    public:
        ST_PositionOffset();
        ST_PositionOffset(const XSD::int& _int );
        bool has_int() const;
        void set_int(const int& _int );
        const int& int() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_PositionOffset& default_instance() const;

    private:
        static ST_PositionOffset* default_instance_ ;
        bool m_has_int ;
        int m_int ;

    }

    class ST_AlignH : public XSD::SimpleType{
    public:
        ST_AlignH();
        ST_AlignH(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_AlignH& default_instance() const;
        enum Type{
            _left_ = 1,
            _right_,
            _center_,
            _inside_,
            _outside_
        }

    private:
        static const string TypeStrList [];
        static ST_AlignH* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_RelFromH : public XSD::SimpleType{
    public:
        ST_RelFromH();
        ST_RelFromH(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_RelFromH& default_instance() const;
        enum Type{
            _margin_ = 1,
            _page_,
            _column_,
            _character_,
            _leftMargin_,
            _rightMargin_,
            _insideMargin_,
            _outsideMargin_
        }

    private:
        static const string TypeStrList [];
        static ST_RelFromH* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_AlignV : public XSD::SimpleType{
    public:
        ST_AlignV();
        ST_AlignV(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_AlignV& default_instance() const;
        enum Type{
            _top_ = 1,
            _bottom_,
            _center_,
            _inside_,
            _outside_
        }

    private:
        static const string TypeStrList [];
        static ST_AlignV* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_RelFromV : public XSD::SimpleType{
    public:
        ST_RelFromV();
        ST_RelFromV(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_RelFromV& default_instance() const;
        enum Type{
            _margin_ = 1,
            _page_,
            _paragraph_,
            _line_,
            _topMargin_,
            _bottomMargin_,
            _insideMargin_,
            _outsideMargin_
        }

    private:
        static const string TypeStrList [];
        static ST_RelFromV* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class CT_EffectExtent : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_EffectExtent& default_instance() const;
        bool has_l_attr() const;
        void set_l_attr(const ns_a::ST_Coordinate& _l_attr );
        const ns_a::ST_Coordinate& l_attr() const;
        bool has_t_attr() const;
        void set_t_attr(const ns_a::ST_Coordinate& _t_attr );
        const ns_a::ST_Coordinate& t_attr() const;
        bool has_r_attr() const;
        void set_r_attr(const ns_a::ST_Coordinate& _r_attr );
        const ns_a::ST_Coordinate& r_attr() const;
        bool has_b_attr() const;
        void set_b_attr(const ns_a::ST_Coordinate& _b_attr );
        const ns_a::ST_Coordinate& b_attr() const;

    private:
        static CT_EffectExtent* default_instance_ ;
        bool m_has_l_attr ;
        ns_a::ST_Coordinate* m_l_attr ;
        bool m_has_t_attr ;
        ns_a::ST_Coordinate* m_t_attr ;
        bool m_has_r_attr ;
        ns_a::ST_Coordinate* m_r_attr ;
        bool m_has_b_attr ;
        ns_a::ST_Coordinate* m_b_attr ;

    }

    class CT_Inline : public XSD::ComplexType{
    public:
        bool has_extent() const;
        ns_a::CT_PositiveSize2D* mutable_extent();
        const ns_a::CT_PositiveSize2D& extent() const;
        bool has_effectExtent() const;
        CT_EffectExtent* mutable_effectExtent();
        const CT_EffectExtent& effectExtent() const;
        bool has_docPr() const;
        ns_a::CT_NonVisualDrawingProps* mutable_docPr();
        const ns_a::CT_NonVisualDrawingProps& docPr() const;
        bool has_cNvGraphicFramePr() const;
        ns_a::CT_NonVisualGraphicFrameProperties* mutable_cNvGraphicFramePr();
        const ns_a::CT_NonVisualGraphicFrameProperties& cNvGraphicFramePr() const;
        bool has_graphic() const;
        CT_GraphicalObject* mutable_graphic();
        const CT_GraphicalObject& graphic() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Inline& default_instance() const;
        bool has_distT_attr() const;
        void set_distT_attr(const ST_WrapDistance& _distT_attr );
        const ST_WrapDistance& distT_attr() const;
        bool has_distB_attr() const;
        void set_distB_attr(const ST_WrapDistance& _distB_attr );
        const ST_WrapDistance& distB_attr() const;
        bool has_distL_attr() const;
        void set_distL_attr(const ST_WrapDistance& _distL_attr );
        const ST_WrapDistance& distL_attr() const;
        bool has_distR_attr() const;
        void set_distR_attr(const ST_WrapDistance& _distR_attr );
        const ST_WrapDistance& distR_attr() const;

    private:
        bool m_has_extent ;
        ns_a::CT_PositiveSize2D* m_extent ;
        bool m_has_effectExtent ;
        CT_EffectExtent* m_effectExtent ;
        bool m_has_docPr ;
        ns_a::CT_NonVisualDrawingProps* m_docPr ;
        bool m_has_cNvGraphicFramePr ;
        ns_a::CT_NonVisualGraphicFrameProperties* m_cNvGraphicFramePr ;
        bool m_has_graphic ;
        CT_GraphicalObject* m_graphic ;
        static CT_Inline* default_instance_ ;
        bool m_has_distT_attr ;
        ST_WrapDistance* m_distT_attr ;
        bool m_has_distB_attr ;
        ST_WrapDistance* m_distB_attr ;
        bool m_has_distL_attr ;
        ST_WrapDistance* m_distL_attr ;
        bool m_has_distR_attr ;
        ST_WrapDistance* m_distR_attr ;

    }

    class CT_WrapPath : public XSD::ComplexType{
    public:
        bool has_start() const;
        ns_a::CT_Point2D* mutable_start();
        const ns_a::CT_Point2D& start() const;
        bool has_lineTo() const;
        ns_a::CT_Point2D* mutable_lineTo();
        const ns_a::CT_Point2D& lineTo() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_WrapPath& default_instance() const;
        bool has_edited_attr() const;
        void set_edited_attr(const boolean& _edited_attr );
        const boolean& edited_attr() const;

    private:
        bool m_has_start ;
        ns_a::CT_Point2D* m_start ;
        bool m_has_lineTo ;
        ns_a::CT_Point2D* m_lineTo ;
        static CT_WrapPath* default_instance_ ;
        bool m_has_edited_attr ;
        boolean m_edited_attr ;

    }

    class CT_WrapNone : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_WrapNone& default_instance() const;

    private:
        static CT_WrapNone* default_instance_ ;

    }

    class CT_WrapSquare : public XSD::ComplexType{
    public:
        bool has_effectExtent() const;
        CT_EffectExtent* mutable_effectExtent();
        const CT_EffectExtent& effectExtent() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_WrapSquare& default_instance() const;
        bool has_wrapText_attr() const;
        void set_wrapText_attr(const ST_WrapText& _wrapText_attr );
        const ST_WrapText& wrapText_attr() const;
        bool has_distT_attr() const;
        void set_distT_attr(const ST_WrapDistance& _distT_attr );
        const ST_WrapDistance& distT_attr() const;
        bool has_distB_attr() const;
        void set_distB_attr(const ST_WrapDistance& _distB_attr );
        const ST_WrapDistance& distB_attr() const;
        bool has_distL_attr() const;
        void set_distL_attr(const ST_WrapDistance& _distL_attr );
        const ST_WrapDistance& distL_attr() const;
        bool has_distR_attr() const;
        void set_distR_attr(const ST_WrapDistance& _distR_attr );
        const ST_WrapDistance& distR_attr() const;

    private:
        bool m_has_effectExtent ;
        CT_EffectExtent* m_effectExtent ;
        static CT_WrapSquare* default_instance_ ;
        bool m_has_wrapText_attr ;
        ST_WrapText* m_wrapText_attr ;
        bool m_has_distT_attr ;
        ST_WrapDistance* m_distT_attr ;
        bool m_has_distB_attr ;
        ST_WrapDistance* m_distB_attr ;
        bool m_has_distL_attr ;
        ST_WrapDistance* m_distL_attr ;
        bool m_has_distR_attr ;
        ST_WrapDistance* m_distR_attr ;

    }

    class CT_WrapTight : public XSD::ComplexType{
    public:
        bool has_wrapPolygon() const;
        CT_WrapPath* mutable_wrapPolygon();
        const CT_WrapPath& wrapPolygon() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_WrapTight& default_instance() const;
        bool has_wrapText_attr() const;
        void set_wrapText_attr(const ST_WrapText& _wrapText_attr );
        const ST_WrapText& wrapText_attr() const;
        bool has_distL_attr() const;
        void set_distL_attr(const ST_WrapDistance& _distL_attr );
        const ST_WrapDistance& distL_attr() const;
        bool has_distR_attr() const;
        void set_distR_attr(const ST_WrapDistance& _distR_attr );
        const ST_WrapDistance& distR_attr() const;

    private:
        bool m_has_wrapPolygon ;
        CT_WrapPath* m_wrapPolygon ;
        static CT_WrapTight* default_instance_ ;
        bool m_has_wrapText_attr ;
        ST_WrapText* m_wrapText_attr ;
        bool m_has_distL_attr ;
        ST_WrapDistance* m_distL_attr ;
        bool m_has_distR_attr ;
        ST_WrapDistance* m_distR_attr ;

    }

    class CT_WrapThrough : public XSD::ComplexType{
    public:
        bool has_wrapPolygon() const;
        CT_WrapPath* mutable_wrapPolygon();
        const CT_WrapPath& wrapPolygon() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_WrapThrough& default_instance() const;
        bool has_wrapText_attr() const;
        void set_wrapText_attr(const ST_WrapText& _wrapText_attr );
        const ST_WrapText& wrapText_attr() const;
        bool has_distL_attr() const;
        void set_distL_attr(const ST_WrapDistance& _distL_attr );
        const ST_WrapDistance& distL_attr() const;
        bool has_distR_attr() const;
        void set_distR_attr(const ST_WrapDistance& _distR_attr );
        const ST_WrapDistance& distR_attr() const;

    private:
        bool m_has_wrapPolygon ;
        CT_WrapPath* m_wrapPolygon ;
        static CT_WrapThrough* default_instance_ ;
        bool m_has_wrapText_attr ;
        ST_WrapText* m_wrapText_attr ;
        bool m_has_distL_attr ;
        ST_WrapDistance* m_distL_attr ;
        bool m_has_distR_attr ;
        ST_WrapDistance* m_distR_attr ;

    }

    class CT_WrapTopBottom : public XSD::ComplexType{
    public:
        bool has_effectExtent() const;
        CT_EffectExtent* mutable_effectExtent();
        const CT_EffectExtent& effectExtent() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_WrapTopBottom& default_instance() const;
        bool has_distT_attr() const;
        void set_distT_attr(const ST_WrapDistance& _distT_attr );
        const ST_WrapDistance& distT_attr() const;
        bool has_distB_attr() const;
        void set_distB_attr(const ST_WrapDistance& _distB_attr );
        const ST_WrapDistance& distB_attr() const;

    private:
        bool m_has_effectExtent ;
        CT_EffectExtent* m_effectExtent ;
        static CT_WrapTopBottom* default_instance_ ;
        bool m_has_distT_attr ;
        ST_WrapDistance* m_distT_attr ;
        bool m_has_distB_attr ;
        ST_WrapDistance* m_distB_attr ;

    }

    class CT_PosH : public XSD::ComplexType{
    public:
        bool has_align() const;
        ST_AlignH* mutable_align();
        const ST_AlignH& align() const;
        bool has_posOffset() const;
        ST_PositionOffset* mutable_posOffset();
        const ST_PositionOffset& posOffset() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_PosH& default_instance() const;
        bool has_relativeFrom_attr() const;
        void set_relativeFrom_attr(const ST_RelFromH& _relativeFrom_attr );
        const ST_RelFromH& relativeFrom_attr() const;

    private:
        bool m_has_align ;
        ST_AlignH* m_align ;
        bool m_has_posOffset ;
        ST_PositionOffset* m_posOffset ;
        static CT_PosH* default_instance_ ;
        bool m_has_relativeFrom_attr ;
        ST_RelFromH* m_relativeFrom_attr ;

    }

    class CT_PosV : public XSD::ComplexType{
    public:
        bool has_align() const;
        ST_AlignV* mutable_align();
        const ST_AlignV& align() const;
        bool has_posOffset() const;
        ST_PositionOffset* mutable_posOffset();
        const ST_PositionOffset& posOffset() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_PosV& default_instance() const;
        bool has_relativeFrom_attr() const;
        void set_relativeFrom_attr(const ST_RelFromV& _relativeFrom_attr );
        const ST_RelFromV& relativeFrom_attr() const;

    private:
        bool m_has_align ;
        ST_AlignV* m_align ;
        bool m_has_posOffset ;
        ST_PositionOffset* m_posOffset ;
        static CT_PosV* default_instance_ ;
        bool m_has_relativeFrom_attr ;
        ST_RelFromV* m_relativeFrom_attr ;

    }

    class CT_Anchor : public XSD::ComplexType{
    public:
        bool has_simplePos() const;
        ns_a::CT_Point2D* mutable_simplePos();
        const ns_a::CT_Point2D& simplePos() const;
        bool has_positionH() const;
        CT_PosH* mutable_positionH();
        const CT_PosH& positionH() const;
        bool has_positionV() const;
        CT_PosV* mutable_positionV();
        const CT_PosV& positionV() const;
        bool has_extent() const;
        ns_a::CT_PositiveSize2D* mutable_extent();
        const ns_a::CT_PositiveSize2D& extent() const;
        bool has_effectExtent() const;
        CT_EffectExtent* mutable_effectExtent();
        const CT_EffectExtent& effectExtent() const;
        bool has_wrapNone() const;
        CT_WrapNone* mutable_wrapNone();
        const CT_WrapNone& wrapNone() const;
        bool has_wrapSquare() const;
        CT_WrapSquare* mutable_wrapSquare();
        const CT_WrapSquare& wrapSquare() const;
        bool has_wrapTight() const;
        CT_WrapTight* mutable_wrapTight();
        const CT_WrapTight& wrapTight() const;
        bool has_wrapThrough() const;
        CT_WrapThrough* mutable_wrapThrough();
        const CT_WrapThrough& wrapThrough() const;
        bool has_wrapTopAndBottom() const;
        CT_WrapTopBottom* mutable_wrapTopAndBottom();
        const CT_WrapTopBottom& wrapTopAndBottom() const;
        bool has_docPr() const;
        ns_a::CT_NonVisualDrawingProps* mutable_docPr();
        const ns_a::CT_NonVisualDrawingProps& docPr() const;
        bool has_cNvGraphicFramePr() const;
        ns_a::CT_NonVisualGraphicFrameProperties* mutable_cNvGraphicFramePr();
        const ns_a::CT_NonVisualGraphicFrameProperties& cNvGraphicFramePr() const;
        bool has_graphic() const;
        CT_GraphicalObject* mutable_graphic();
        const CT_GraphicalObject& graphic() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Anchor& default_instance() const;
        bool has_distT_attr() const;
        void set_distT_attr(const ST_WrapDistance& _distT_attr );
        const ST_WrapDistance& distT_attr() const;
        bool has_distB_attr() const;
        void set_distB_attr(const ST_WrapDistance& _distB_attr );
        const ST_WrapDistance& distB_attr() const;
        bool has_distL_attr() const;
        void set_distL_attr(const ST_WrapDistance& _distL_attr );
        const ST_WrapDistance& distL_attr() const;
        bool has_distR_attr() const;
        void set_distR_attr(const ST_WrapDistance& _distR_attr );
        const ST_WrapDistance& distR_attr() const;
        bool has_simplePos_attr() const;
        void set_simplePos_attr(const boolean& _simplePos_attr );
        const boolean& simplePos_attr() const;
        bool has_relativeHeight_attr() const;
        void set_relativeHeight_attr(const unsignedInt& _relativeHeight_attr );
        const unsignedInt& relativeHeight_attr() const;
        bool has_behindDoc_attr() const;
        void set_behindDoc_attr(const boolean& _behindDoc_attr );
        const boolean& behindDoc_attr() const;
        bool has_locked_attr() const;
        void set_locked_attr(const boolean& _locked_attr );
        const boolean& locked_attr() const;
        bool has_layoutInCell_attr() const;
        void set_layoutInCell_attr(const boolean& _layoutInCell_attr );
        const boolean& layoutInCell_attr() const;
        bool has_hidden_attr() const;
        void set_hidden_attr(const boolean& _hidden_attr );
        const boolean& hidden_attr() const;
        bool has_allowOverlap_attr() const;
        void set_allowOverlap_attr(const boolean& _allowOverlap_attr );
        const boolean& allowOverlap_attr() const;

    private:
        bool m_has_simplePos ;
        ns_a::CT_Point2D* m_simplePos ;
        bool m_has_positionH ;
        CT_PosH* m_positionH ;
        bool m_has_positionV ;
        CT_PosV* m_positionV ;
        bool m_has_extent ;
        ns_a::CT_PositiveSize2D* m_extent ;
        bool m_has_effectExtent ;
        CT_EffectExtent* m_effectExtent ;
        bool m_has_wrapNone ;
        CT_WrapNone* m_wrapNone ;
        bool m_has_wrapSquare ;
        CT_WrapSquare* m_wrapSquare ;
        bool m_has_wrapTight ;
        CT_WrapTight* m_wrapTight ;
        bool m_has_wrapThrough ;
        CT_WrapThrough* m_wrapThrough ;
        bool m_has_wrapTopAndBottom ;
        CT_WrapTopBottom* m_wrapTopAndBottom ;
        bool m_has_docPr ;
        ns_a::CT_NonVisualDrawingProps* m_docPr ;
        bool m_has_cNvGraphicFramePr ;
        ns_a::CT_NonVisualGraphicFrameProperties* m_cNvGraphicFramePr ;
        bool m_has_graphic ;
        CT_GraphicalObject* m_graphic ;
        static CT_Anchor* default_instance_ ;
        bool m_has_distT_attr ;
        ST_WrapDistance* m_distT_attr ;
        bool m_has_distB_attr ;
        ST_WrapDistance* m_distB_attr ;
        bool m_has_distL_attr ;
        ST_WrapDistance* m_distL_attr ;
        bool m_has_distR_attr ;
        ST_WrapDistance* m_distR_attr ;
        bool m_has_simplePos_attr ;
        boolean m_simplePos_attr ;
        bool m_has_relativeHeight_attr ;
        unsignedInt m_relativeHeight_attr ;
        bool m_has_behindDoc_attr ;
        boolean m_behindDoc_attr ;
        bool m_has_locked_attr ;
        boolean m_locked_attr ;
        bool m_has_layoutInCell_attr ;
        boolean m_layoutInCell_attr ;
        bool m_has_hidden_attr ;
        boolean m_hidden_attr ;
        bool m_has_allowOverlap_attr ;
        boolean m_allowOverlap_attr ;

    }

    class CT_TxbxContent : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TxbxContent& default_instance() const;

    private:
        static CT_TxbxContent* default_instance_ ;

    }

    class CT_TextboxInfo : public XSD::ComplexType{
    public:
        bool has_txbxContent() const;
        CT_TxbxContent* mutable_txbxContent();
        const CT_TxbxContent& txbxContent() const;
        bool has_extLst() const;
        ns_a::CT_OfficeArtExtensionList* mutable_extLst();
        const ns_a::CT_OfficeArtExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TextboxInfo& default_instance() const;
        bool has_id_attr() const;
        void set_id_attr(const unsignedShort& _id_attr );
        const unsignedShort& id_attr() const;

    private:
        bool m_has_txbxContent ;
        CT_TxbxContent* m_txbxContent ;
        bool m_has_extLst ;
        ns_a::CT_OfficeArtExtensionList* m_extLst ;
        static CT_TextboxInfo* default_instance_ ;
        bool m_has_id_attr ;
        unsignedShort m_id_attr ;

    }

    class CT_LinkedTextboxInformation : public XSD::ComplexType{
    public:
        bool has_extLst() const;
        ns_a::CT_OfficeArtExtensionList* mutable_extLst();
        const ns_a::CT_OfficeArtExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_LinkedTextboxInformation& default_instance() const;
        bool has_id_attr() const;
        void set_id_attr(const unsignedShort& _id_attr );
        const unsignedShort& id_attr() const;
        bool has_seq_attr() const;
        void set_seq_attr(const unsignedShort& _seq_attr );
        const unsignedShort& seq_attr() const;

    private:
        bool m_has_extLst ;
        ns_a::CT_OfficeArtExtensionList* m_extLst ;
        static CT_LinkedTextboxInformation* default_instance_ ;
        bool m_has_id_attr ;
        unsignedShort m_id_attr ;
        bool m_has_seq_attr ;
        unsignedShort m_seq_attr ;

    }

    class CT_WordprocessingShape : public XSD::ComplexType{
    public:
        bool has_cNvPr() const;
        ns_a::CT_NonVisualDrawingProps* mutable_cNvPr();
        const ns_a::CT_NonVisualDrawingProps& cNvPr() const;
        bool has_cNvSpPr() const;
        ns_a::CT_NonVisualDrawingShapeProps* mutable_cNvSpPr();
        const ns_a::CT_NonVisualDrawingShapeProps& cNvSpPr() const;
        bool has_cNvCnPr() const;
        ns_a::CT_NonVisualConnectorProperties* mutable_cNvCnPr();
        const ns_a::CT_NonVisualConnectorProperties& cNvCnPr() const;
        bool has_spPr() const;
        ns_a::CT_ShapeProperties* mutable_spPr();
        const ns_a::CT_ShapeProperties& spPr() const;
        bool has_style() const;
        ns_a::CT_ShapeStyle* mutable_style();
        const ns_a::CT_ShapeStyle& style() const;
        bool has_extLst() const;
        ns_a::CT_OfficeArtExtensionList* mutable_extLst();
        const ns_a::CT_OfficeArtExtensionList& extLst() const;
        bool has_txbx() const;
        CT_TextboxInfo* mutable_txbx();
        const CT_TextboxInfo& txbx() const;
        bool has_linkedTxbx() const;
        CT_LinkedTextboxInformation* mutable_linkedTxbx();
        const CT_LinkedTextboxInformation& linkedTxbx() const;
        bool has_bodyPr() const;
        ns_a::CT_TextBodyProperties* mutable_bodyPr();
        const ns_a::CT_TextBodyProperties& bodyPr() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_WordprocessingShape& default_instance() const;
        bool has_normalEastAsianFlow_attr() const;
        void set_normalEastAsianFlow_attr(const boolean& _normalEastAsianFlow_attr );
        const boolean& normalEastAsianFlow_attr() const;

    private:
        bool m_has_cNvPr ;
        ns_a::CT_NonVisualDrawingProps* m_cNvPr ;
        bool m_has_cNvSpPr ;
        ns_a::CT_NonVisualDrawingShapeProps* m_cNvSpPr ;
        bool m_has_cNvCnPr ;
        ns_a::CT_NonVisualConnectorProperties* m_cNvCnPr ;
        bool m_has_spPr ;
        ns_a::CT_ShapeProperties* m_spPr ;
        bool m_has_style ;
        ns_a::CT_ShapeStyle* m_style ;
        bool m_has_extLst ;
        ns_a::CT_OfficeArtExtensionList* m_extLst ;
        bool m_has_txbx ;
        CT_TextboxInfo* m_txbx ;
        bool m_has_linkedTxbx ;
        CT_LinkedTextboxInformation* m_linkedTxbx ;
        bool m_has_bodyPr ;
        ns_a::CT_TextBodyProperties* m_bodyPr ;
        static CT_WordprocessingShape* default_instance_ ;
        bool m_has_normalEastAsianFlow_attr ;
        boolean m_normalEastAsianFlow_attr ;

    }

    class CT_GraphicFrame : public XSD::ComplexType{
    public:
        bool has_cNvPr() const;
        ns_a::CT_NonVisualDrawingProps* mutable_cNvPr();
        const ns_a::CT_NonVisualDrawingProps& cNvPr() const;
        bool has_cNvFrPr() const;
        ns_a::CT_NonVisualGraphicFrameProperties* mutable_cNvFrPr();
        const ns_a::CT_NonVisualGraphicFrameProperties& cNvFrPr() const;
        bool has_xfrm() const;
        ns_a::CT_Transform2D* mutable_xfrm();
        const ns_a::CT_Transform2D& xfrm() const;
        bool has_graphic() const;
        CT_GraphicalObject* mutable_graphic();
        const CT_GraphicalObject& graphic() const;
        bool has_extLst() const;
        ns_a::CT_OfficeArtExtensionList* mutable_extLst();
        const ns_a::CT_OfficeArtExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_GraphicFrame& default_instance() const;

    private:
        bool m_has_cNvPr ;
        ns_a::CT_NonVisualDrawingProps* m_cNvPr ;
        bool m_has_cNvFrPr ;
        ns_a::CT_NonVisualGraphicFrameProperties* m_cNvFrPr ;
        bool m_has_xfrm ;
        ns_a::CT_Transform2D* m_xfrm ;
        bool m_has_graphic ;
        CT_GraphicalObject* m_graphic ;
        bool m_has_extLst ;
        ns_a::CT_OfficeArtExtensionList* m_extLst ;
        static CT_GraphicFrame* default_instance_ ;

    }

    class CT_WordprocessingContentPartNonVisual : public XSD::ComplexType{
    public:
        bool has_cNvPr() const;
        ns_a::CT_NonVisualDrawingProps* mutable_cNvPr();
        const ns_a::CT_NonVisualDrawingProps& cNvPr() const;
        bool has_cNvContentPartPr() const;
        ns_a::CT_NonVisualContentPartProperties* mutable_cNvContentPartPr();
        const ns_a::CT_NonVisualContentPartProperties& cNvContentPartPr() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_WordprocessingContentPartNonVisual& default_instance() const;

    private:
        bool m_has_cNvPr ;
        ns_a::CT_NonVisualDrawingProps* m_cNvPr ;
        bool m_has_cNvContentPartPr ;
        ns_a::CT_NonVisualContentPartProperties* m_cNvContentPartPr ;
        static CT_WordprocessingContentPartNonVisual* default_instance_ ;

    }

    class CT_WordprocessingContentPart : public XSD::ComplexType{
    public:
        bool has_nvContentPartPr() const;
        CT_WordprocessingContentPartNonVisual* mutable_nvContentPartPr();
        const CT_WordprocessingContentPartNonVisual& nvContentPartPr() const;
        bool has_xfrm() const;
        ns_a::CT_Transform2D* mutable_xfrm();
        const ns_a::CT_Transform2D& xfrm() const;
        bool has_extLst() const;
        ns_a::CT_OfficeArtExtensionList* mutable_extLst();
        const ns_a::CT_OfficeArtExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_WordprocessingContentPart& default_instance() const;
        bool has_bwMode_attr() const;
        void set_bwMode_attr(const ns_a::ST_BlackWhiteMode& _bwMode_attr );
        const ns_a::ST_BlackWhiteMode& bwMode_attr() const;
        bool has_id_attr() const;
        void set_id_attr(const ST_RelationshipId& _id_attr );
        const ST_RelationshipId& id_attr() const;

    private:
        bool m_has_nvContentPartPr ;
        CT_WordprocessingContentPartNonVisual* m_nvContentPartPr ;
        bool m_has_xfrm ;
        ns_a::CT_Transform2D* m_xfrm ;
        bool m_has_extLst ;
        ns_a::CT_OfficeArtExtensionList* m_extLst ;
        static CT_WordprocessingContentPart* default_instance_ ;
        bool m_has_bwMode_attr ;
        ns_a::ST_BlackWhiteMode* m_bwMode_attr ;
        bool m_has_id_attr ;
        ST_RelationshipId* m_id_attr ;

    }

    class CT_WordprocessingGroup : public XSD::ComplexType{
    public:
        bool has_cNvPr() const;
        ns_a::CT_NonVisualDrawingProps* mutable_cNvPr();
        const ns_a::CT_NonVisualDrawingProps& cNvPr() const;
        bool has_cNvGrpSpPr() const;
        ns_a::CT_NonVisualGroupDrawingShapeProps* mutable_cNvGrpSpPr();
        const ns_a::CT_NonVisualGroupDrawingShapeProps& cNvGrpSpPr() const;
        bool has_grpSpPr() const;
        ns_a::CT_GroupShapeProperties* mutable_grpSpPr();
        const ns_a::CT_GroupShapeProperties& grpSpPr() const;
        CT_WordprocessingShape* add_wsp();
        CT_WordprocessingGroup* add_grpSp();
        CT_GraphicFrame* add_graphicFrame();
        CT_Picture* add_pic();
        CT_WordprocessingContentPart* add_contentPart();
        bool has_extLst() const;
        ns_a::CT_OfficeArtExtensionList* mutable_extLst();
        const ns_a::CT_OfficeArtExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_WordprocessingGroup& default_instance() const;

    private:
        bool m_has_cNvPr ;
        ns_a::CT_NonVisualDrawingProps* m_cNvPr ;
        bool m_has_cNvGrpSpPr ;
        ns_a::CT_NonVisualGroupDrawingShapeProps* m_cNvGrpSpPr ;
        bool m_has_grpSpPr ;
        ns_a::CT_GroupShapeProperties* m_grpSpPr ;
        vector<ChildGroup_1*> m_childGroupList_1 ;
        bool m_has_extLst ;
        ns_a::CT_OfficeArtExtensionList* m_extLst ;
        static CT_WordprocessingGroup* default_instance_ ;
        class ChildGroup_1{
        public:
            bool has_wsp() const;
            CT_WordprocessingShape* mutable_wsp();
            const CT_WordprocessingShape& wsp() const;
            bool has_grpSp() const;
            CT_WordprocessingGroup* mutable_grpSp();
            const CT_WordprocessingGroup& grpSp() const;
            bool has_graphicFrame() const;
            CT_GraphicFrame* mutable_graphicFrame();
            const CT_GraphicFrame& graphicFrame() const;
            bool has_pic() const;
            CT_Picture* mutable_pic();
            const CT_Picture& pic() const;
            bool has_contentPart() const;
            CT_WordprocessingContentPart* mutable_contentPart();
            const CT_WordprocessingContentPart& contentPart() const;

        private:
            bool m_has_wsp ;
            CT_WordprocessingShape* m_wsp ;
            bool m_has_grpSp ;
            CT_WordprocessingGroup* m_grpSp ;
            bool m_has_graphicFrame ;
            CT_GraphicFrame* m_graphicFrame ;
            bool m_has_pic ;
            CT_Picture* m_pic ;
            bool m_has_contentPart ;
            CT_WordprocessingContentPart* m_contentPart ;

        }


    }

    class CT_WordprocessingCanvas : public XSD::ComplexType{
    public:
        bool has_bg() const;
        ns_a::CT_BackgroundFormatting* mutable_bg();
        const ns_a::CT_BackgroundFormatting& bg() const;
        bool has_whole() const;
        ns_a::CT_WholeE2oFormatting* mutable_whole();
        const ns_a::CT_WholeE2oFormatting& whole() const;
        CT_WordprocessingShape* add_wsp();
        CT_Picture* add_pic();
        CT_WordprocessingContentPart* add_contentPart();
        CT_WordprocessingGroup* add_wgp();
        CT_GraphicFrame* add_graphicFrame();
        bool has_extLst() const;
        ns_a::CT_OfficeArtExtensionList* mutable_extLst();
        const ns_a::CT_OfficeArtExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_WordprocessingCanvas& default_instance() const;

    private:
        bool m_has_bg ;
        ns_a::CT_BackgroundFormatting* m_bg ;
        bool m_has_whole ;
        ns_a::CT_WholeE2oFormatting* m_whole ;
        vector<ChildGroup_1*> m_childGroupList_1 ;
        bool m_has_extLst ;
        ns_a::CT_OfficeArtExtensionList* m_extLst ;
        static CT_WordprocessingCanvas* default_instance_ ;
        class ChildGroup_1{
        public:
            bool has_wsp() const;
            CT_WordprocessingShape* mutable_wsp();
            const CT_WordprocessingShape& wsp() const;
            bool has_pic() const;
            CT_Picture* mutable_pic();
            const CT_Picture& pic() const;
            bool has_contentPart() const;
            CT_WordprocessingContentPart* mutable_contentPart();
            const CT_WordprocessingContentPart& contentPart() const;
            bool has_wgp() const;
            CT_WordprocessingGroup* mutable_wgp();
            const CT_WordprocessingGroup& wgp() const;
            bool has_graphicFrame() const;
            CT_GraphicFrame* mutable_graphicFrame();
            const CT_GraphicFrame& graphicFrame() const;

        private:
            bool m_has_wsp ;
            CT_WordprocessingShape* m_wsp ;
            bool m_has_pic ;
            CT_Picture* m_pic ;
            bool m_has_contentPart ;
            CT_WordprocessingContentPart* m_contentPart ;
            bool m_has_wgp ;
            CT_WordprocessingGroup* m_wgp ;
            bool m_has_graphicFrame ;
            CT_GraphicFrame* m_graphicFrame ;

        }


    }

    class wpc : public CT_WordprocessingCanvas : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class wgp : public CT_WordprocessingGroup : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class wsp : public CT_WordprocessingShape : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class inline : public CT_Inline : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class anchor : public CT_Anchor : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

}