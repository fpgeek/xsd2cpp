#ifndef dml-spreadsheetDrawing_xsd 
#define dml-spreadsheetDrawing_xsd 0 

#include "xsddata.h"
#include <vector>
#include <string>
#include <iostream>
#include "dml-main_xsd.h"
#include "shared-relationshipReference_xsd.h"
namespace ns_xdr{
    class Element : public XSD::Element{
    public:

    private:

    }

    class Attribute : public XSD::Attribute{
    public:

    private:

    }

    class ST_ColID : public XSD::SimpleType{
    public:
        ST_ColID();
        ST_ColID(const XSD::int& _int );
        bool has_int() const;
        void set_int(const int& _int );
        const int& int() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_ColID& default_instance() const;

    private:
        static ST_ColID* default_instance_ ;
        bool m_has_int ;
        int m_int ;

    }

    class ST_RowID : public XSD::SimpleType{
    public:
        ST_RowID();
        ST_RowID(const XSD::int& _int );
        bool has_int() const;
        void set_int(const int& _int );
        const int& int() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_RowID& default_instance() const;

    private:
        static ST_RowID* default_instance_ ;
        bool m_has_int ;
        int m_int ;

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
            _twoCell_ = 1,
            _oneCell_,
            _absolute_
        }

    private:
        static const string TypeStrList [];
        static ST_EditAs* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class CT_AnchorClientData : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_AnchorClientData& default_instance() const;
        bool has_fLocksWithSheet_attr() const;
        void set_fLocksWithSheet_attr(const boolean& _fLocksWithSheet_attr );
        const boolean& fLocksWithSheet_attr() const;
        bool has_fPrintsWithSheet_attr() const;
        void set_fPrintsWithSheet_attr(const boolean& _fPrintsWithSheet_attr );
        const boolean& fPrintsWithSheet_attr() const;

    private:
        static CT_AnchorClientData* default_instance_ ;
        bool m_has_fLocksWithSheet_attr ;
        boolean m_fLocksWithSheet_attr ;
        bool m_has_fPrintsWithSheet_attr ;
        boolean m_fPrintsWithSheet_attr ;

    }

    class CT_ShapeNonVisual : public XSD::ComplexType{
    public:
        bool has_cNvPr() const;
        ns_a::CT_NonVisualDrawingProps* mutable_cNvPr();
        const ns_a::CT_NonVisualDrawingProps& cNvPr() const;
        bool has_cNvSpPr() const;
        ns_a::CT_NonVisualDrawingShapeProps* mutable_cNvSpPr();
        const ns_a::CT_NonVisualDrawingShapeProps& cNvSpPr() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_ShapeNonVisual& default_instance() const;

    private:
        bool m_has_cNvPr ;
        ns_a::CT_NonVisualDrawingProps* m_cNvPr ;
        bool m_has_cNvSpPr ;
        ns_a::CT_NonVisualDrawingShapeProps* m_cNvSpPr ;
        static CT_ShapeNonVisual* default_instance_ ;

    }

    class CT_Shape : public XSD::ComplexType{
    public:
        bool has_nvSpPr() const;
        CT_ShapeNonVisual* mutable_nvSpPr();
        const CT_ShapeNonVisual& nvSpPr() const;
        bool has_spPr() const;
        ns_a::CT_ShapeProperties* mutable_spPr();
        const ns_a::CT_ShapeProperties& spPr() const;
        bool has_style() const;
        ns_a::CT_ShapeStyle* mutable_style();
        const ns_a::CT_ShapeStyle& style() const;
        bool has_txBody() const;
        ns_a::CT_TextBody* mutable_txBody();
        const ns_a::CT_TextBody& txBody() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Shape& default_instance() const;
        bool has_macro_attr() const;
        void set_macro_attr(const string& _macro_attr );
        const string& macro_attr() const;
        bool has_textlink_attr() const;
        void set_textlink_attr(const string& _textlink_attr );
        const string& textlink_attr() const;
        bool has_fLocksText_attr() const;
        void set_fLocksText_attr(const boolean& _fLocksText_attr );
        const boolean& fLocksText_attr() const;
        bool has_fPublished_attr() const;
        void set_fPublished_attr(const boolean& _fPublished_attr );
        const boolean& fPublished_attr() const;

    private:
        bool m_has_nvSpPr ;
        CT_ShapeNonVisual* m_nvSpPr ;
        bool m_has_spPr ;
        ns_a::CT_ShapeProperties* m_spPr ;
        bool m_has_style ;
        ns_a::CT_ShapeStyle* m_style ;
        bool m_has_txBody ;
        ns_a::CT_TextBody* m_txBody ;
        static CT_Shape* default_instance_ ;
        bool m_has_macro_attr ;
        string m_macro_attr ;
        bool m_has_textlink_attr ;
        string m_textlink_attr ;
        bool m_has_fLocksText_attr ;
        boolean m_fLocksText_attr ;
        bool m_has_fPublished_attr ;
        boolean m_fPublished_attr ;

    }

    class CT_ConnectorNonVisual : public XSD::ComplexType{
    public:
        bool has_cNvPr() const;
        ns_a::CT_NonVisualDrawingProps* mutable_cNvPr();
        const ns_a::CT_NonVisualDrawingProps& cNvPr() const;
        bool has_cNvCxnSpPr() const;
        ns_a::CT_NonVisualConnectorProperties* mutable_cNvCxnSpPr();
        const ns_a::CT_NonVisualConnectorProperties& cNvCxnSpPr() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_ConnectorNonVisual& default_instance() const;

    private:
        bool m_has_cNvPr ;
        ns_a::CT_NonVisualDrawingProps* m_cNvPr ;
        bool m_has_cNvCxnSpPr ;
        ns_a::CT_NonVisualConnectorProperties* m_cNvCxnSpPr ;
        static CT_ConnectorNonVisual* default_instance_ ;

    }

    class CT_Connector : public XSD::ComplexType{
    public:
        bool has_nvCxnSpPr() const;
        CT_ConnectorNonVisual* mutable_nvCxnSpPr();
        const CT_ConnectorNonVisual& nvCxnSpPr() const;
        bool has_spPr() const;
        ns_a::CT_ShapeProperties* mutable_spPr();
        const ns_a::CT_ShapeProperties& spPr() const;
        bool has_style() const;
        ns_a::CT_ShapeStyle* mutable_style();
        const ns_a::CT_ShapeStyle& style() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Connector& default_instance() const;
        bool has_macro_attr() const;
        void set_macro_attr(const string& _macro_attr );
        const string& macro_attr() const;
        bool has_fPublished_attr() const;
        void set_fPublished_attr(const boolean& _fPublished_attr );
        const boolean& fPublished_attr() const;

    private:
        bool m_has_nvCxnSpPr ;
        CT_ConnectorNonVisual* m_nvCxnSpPr ;
        bool m_has_spPr ;
        ns_a::CT_ShapeProperties* m_spPr ;
        bool m_has_style ;
        ns_a::CT_ShapeStyle* m_style ;
        static CT_Connector* default_instance_ ;
        bool m_has_macro_attr ;
        string m_macro_attr ;
        bool m_has_fPublished_attr ;
        boolean m_fPublished_attr ;

    }

    class CT_PictureNonVisual : public XSD::ComplexType{
    public:
        bool has_cNvPr() const;
        ns_a::CT_NonVisualDrawingProps* mutable_cNvPr();
        const ns_a::CT_NonVisualDrawingProps& cNvPr() const;
        bool has_cNvPicPr() const;
        ns_a::CT_NonVisualPictureProperties* mutable_cNvPicPr();
        const ns_a::CT_NonVisualPictureProperties& cNvPicPr() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_PictureNonVisual& default_instance() const;

    private:
        bool m_has_cNvPr ;
        ns_a::CT_NonVisualDrawingProps* m_cNvPr ;
        bool m_has_cNvPicPr ;
        ns_a::CT_NonVisualPictureProperties* m_cNvPicPr ;
        static CT_PictureNonVisual* default_instance_ ;

    }

    class CT_Picture : public XSD::ComplexType{
    public:
        bool has_nvPicPr() const;
        CT_PictureNonVisual* mutable_nvPicPr();
        const CT_PictureNonVisual& nvPicPr() const;
        bool has_blipFill() const;
        ns_a::CT_BlipFillProperties* mutable_blipFill();
        const ns_a::CT_BlipFillProperties& blipFill() const;
        bool has_spPr() const;
        ns_a::CT_ShapeProperties* mutable_spPr();
        const ns_a::CT_ShapeProperties& spPr() const;
        bool has_style() const;
        ns_a::CT_ShapeStyle* mutable_style();
        const ns_a::CT_ShapeStyle& style() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Picture& default_instance() const;
        bool has_macro_attr() const;
        void set_macro_attr(const string& _macro_attr );
        const string& macro_attr() const;
        bool has_fPublished_attr() const;
        void set_fPublished_attr(const boolean& _fPublished_attr );
        const boolean& fPublished_attr() const;

    private:
        bool m_has_nvPicPr ;
        CT_PictureNonVisual* m_nvPicPr ;
        bool m_has_blipFill ;
        ns_a::CT_BlipFillProperties* m_blipFill ;
        bool m_has_spPr ;
        ns_a::CT_ShapeProperties* m_spPr ;
        bool m_has_style ;
        ns_a::CT_ShapeStyle* m_style ;
        static CT_Picture* default_instance_ ;
        bool m_has_macro_attr ;
        string m_macro_attr ;
        bool m_has_fPublished_attr ;
        boolean m_fPublished_attr ;

    }

    class CT_GraphicalObjectFrameNonVisual : public XSD::ComplexType{
    public:
        bool has_cNvPr() const;
        ns_a::CT_NonVisualDrawingProps* mutable_cNvPr();
        const ns_a::CT_NonVisualDrawingProps& cNvPr() const;
        bool has_cNvGraphicFramePr() const;
        ns_a::CT_NonVisualGraphicFrameProperties* mutable_cNvGraphicFramePr();
        const ns_a::CT_NonVisualGraphicFrameProperties& cNvGraphicFramePr() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_GraphicalObjectFrameNonVisual& default_instance() const;

    private:
        bool m_has_cNvPr ;
        ns_a::CT_NonVisualDrawingProps* m_cNvPr ;
        bool m_has_cNvGraphicFramePr ;
        ns_a::CT_NonVisualGraphicFrameProperties* m_cNvGraphicFramePr ;
        static CT_GraphicalObjectFrameNonVisual* default_instance_ ;

    }

    class CT_GraphicalObjectFrame : public XSD::ComplexType{
    public:
        bool has_nvGraphicFramePr() const;
        CT_GraphicalObjectFrameNonVisual* mutable_nvGraphicFramePr();
        const CT_GraphicalObjectFrameNonVisual& nvGraphicFramePr() const;
        bool has_xfrm() const;
        ns_a::CT_Transform2D* mutable_xfrm();
        const ns_a::CT_Transform2D& xfrm() const;
        bool has_graphic() const;
        CT_GraphicalObject* mutable_graphic();
        const CT_GraphicalObject& graphic() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_GraphicalObjectFrame& default_instance() const;
        bool has_macro_attr() const;
        void set_macro_attr(const string& _macro_attr );
        const string& macro_attr() const;
        bool has_fPublished_attr() const;
        void set_fPublished_attr(const boolean& _fPublished_attr );
        const boolean& fPublished_attr() const;

    private:
        bool m_has_nvGraphicFramePr ;
        CT_GraphicalObjectFrameNonVisual* m_nvGraphicFramePr ;
        bool m_has_xfrm ;
        ns_a::CT_Transform2D* m_xfrm ;
        bool m_has_graphic ;
        CT_GraphicalObject* m_graphic ;
        static CT_GraphicalObjectFrame* default_instance_ ;
        bool m_has_macro_attr ;
        string m_macro_attr ;
        bool m_has_fPublished_attr ;
        boolean m_fPublished_attr ;

    }

    class CT_GroupShapeNonVisual : public XSD::ComplexType{
    public:
        bool has_cNvPr() const;
        ns_a::CT_NonVisualDrawingProps* mutable_cNvPr();
        const ns_a::CT_NonVisualDrawingProps& cNvPr() const;
        bool has_cNvGrpSpPr() const;
        ns_a::CT_NonVisualGroupDrawingShapeProps* mutable_cNvGrpSpPr();
        const ns_a::CT_NonVisualGroupDrawingShapeProps& cNvGrpSpPr() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_GroupShapeNonVisual& default_instance() const;

    private:
        bool m_has_cNvPr ;
        ns_a::CT_NonVisualDrawingProps* m_cNvPr ;
        bool m_has_cNvGrpSpPr ;
        ns_a::CT_NonVisualGroupDrawingShapeProps* m_cNvGrpSpPr ;
        static CT_GroupShapeNonVisual* default_instance_ ;

    }

    class CT_GroupShape : public XSD::ComplexType{
    public:
        bool has_nvGrpSpPr() const;
        CT_GroupShapeNonVisual* mutable_nvGrpSpPr();
        const CT_GroupShapeNonVisual& nvGrpSpPr() const;
        bool has_grpSpPr() const;
        ns_a::CT_GroupShapeProperties* mutable_grpSpPr();
        const ns_a::CT_GroupShapeProperties& grpSpPr() const;
        CT_Shape* add_sp();
        CT_GroupShape* add_grpSp();
        CT_GraphicalObjectFrame* add_graphicFrame();
        CT_Connector* add_cxnSp();
        CT_Picture* add_pic();
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_GroupShape& default_instance() const;

    private:
        bool m_has_nvGrpSpPr ;
        CT_GroupShapeNonVisual* m_nvGrpSpPr ;
        bool m_has_grpSpPr ;
        ns_a::CT_GroupShapeProperties* m_grpSpPr ;
        vector<ChildGroup_1*> m_childGroupList_1 ;
        static CT_GroupShape* default_instance_ ;
        class ChildGroup_1{
        public:
            bool has_sp() const;
            CT_Shape* mutable_sp();
            const CT_Shape& sp() const;
            bool has_grpSp() const;
            CT_GroupShape* mutable_grpSp();
            const CT_GroupShape& grpSp() const;
            bool has_graphicFrame() const;
            CT_GraphicalObjectFrame* mutable_graphicFrame();
            const CT_GraphicalObjectFrame& graphicFrame() const;
            bool has_cxnSp() const;
            CT_Connector* mutable_cxnSp();
            const CT_Connector& cxnSp() const;
            bool has_pic() const;
            CT_Picture* mutable_pic();
            const CT_Picture& pic() const;

        private:
            bool m_has_sp ;
            CT_Shape* m_sp ;
            bool m_has_grpSp ;
            CT_GroupShape* m_grpSp ;
            bool m_has_graphicFrame ;
            CT_GraphicalObjectFrame* m_graphicFrame ;
            bool m_has_cxnSp ;
            CT_Connector* m_cxnSp ;
            bool m_has_pic ;
            CT_Picture* m_pic ;

        }


    }

    class CT_Rel : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Rel& default_instance() const;
        bool has_id_attr() const;
        void set_id_attr(const ST_RelationshipId& _id_attr );
        const ST_RelationshipId& id_attr() const;

    private:
        static CT_Rel* default_instance_ ;
        bool m_has_id_attr ;
        ST_RelationshipId* m_id_attr ;

    }

    class CT_Marker : public XSD::ComplexType{
    public:
        bool has_col() const;
        ST_ColID* mutable_col();
        const ST_ColID& col() const;
        bool has_colOff() const;
        ns_a::ST_Coordinate* mutable_colOff();
        const ns_a::ST_Coordinate& colOff() const;
        bool has_row() const;
        ST_RowID* mutable_row();
        const ST_RowID& row() const;
        bool has_rowOff() const;
        ns_a::ST_Coordinate* mutable_rowOff();
        const ns_a::ST_Coordinate& rowOff() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Marker& default_instance() const;

    private:
        bool m_has_col ;
        ST_ColID* m_col ;
        bool m_has_colOff ;
        ns_a::ST_Coordinate* m_colOff ;
        bool m_has_row ;
        ST_RowID* m_row ;
        bool m_has_rowOff ;
        ns_a::ST_Coordinate* m_rowOff ;
        static CT_Marker* default_instance_ ;

    }

    class CT_TwoCellAnchor : public XSD::ComplexType{
    public:
        bool has_from() const;
        CT_Marker* mutable_from();
        const CT_Marker& from() const;
        bool has_to() const;
        CT_Marker* mutable_to();
        const CT_Marker& to() const;
        bool has_sp() const;
        CT_Shape* mutable_sp();
        const CT_Shape& sp() const;
        bool has_grpSp() const;
        CT_GroupShape* mutable_grpSp();
        const CT_GroupShape& grpSp() const;
        bool has_graphicFrame() const;
        CT_GraphicalObjectFrame* mutable_graphicFrame();
        const CT_GraphicalObjectFrame& graphicFrame() const;
        bool has_cxnSp() const;
        CT_Connector* mutable_cxnSp();
        const CT_Connector& cxnSp() const;
        bool has_pic() const;
        CT_Picture* mutable_pic();
        const CT_Picture& pic() const;
        bool has_contentPart() const;
        CT_Rel* mutable_contentPart();
        const CT_Rel& contentPart() const;
        bool has_clientData() const;
        CT_AnchorClientData* mutable_clientData();
        const CT_AnchorClientData& clientData() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TwoCellAnchor& default_instance() const;
        bool has_editAs_attr() const;
        void set_editAs_attr(const ST_EditAs& _editAs_attr );
        const ST_EditAs& editAs_attr() const;

    private:
        bool m_has_from ;
        CT_Marker* m_from ;
        bool m_has_to ;
        CT_Marker* m_to ;
        bool m_has_sp ;
        CT_Shape* m_sp ;
        bool m_has_grpSp ;
        CT_GroupShape* m_grpSp ;
        bool m_has_graphicFrame ;
        CT_GraphicalObjectFrame* m_graphicFrame ;
        bool m_has_cxnSp ;
        CT_Connector* m_cxnSp ;
        bool m_has_pic ;
        CT_Picture* m_pic ;
        bool m_has_contentPart ;
        CT_Rel* m_contentPart ;
        bool m_has_clientData ;
        CT_AnchorClientData* m_clientData ;
        static CT_TwoCellAnchor* default_instance_ ;
        bool m_has_editAs_attr ;
        ST_EditAs* m_editAs_attr ;

    }

    class CT_OneCellAnchor : public XSD::ComplexType{
    public:
        bool has_from() const;
        CT_Marker* mutable_from();
        const CT_Marker& from() const;
        bool has_ext() const;
        ns_a::CT_PositiveSize2D* mutable_ext();
        const ns_a::CT_PositiveSize2D& ext() const;
        bool has_sp() const;
        CT_Shape* mutable_sp();
        const CT_Shape& sp() const;
        bool has_grpSp() const;
        CT_GroupShape* mutable_grpSp();
        const CT_GroupShape& grpSp() const;
        bool has_graphicFrame() const;
        CT_GraphicalObjectFrame* mutable_graphicFrame();
        const CT_GraphicalObjectFrame& graphicFrame() const;
        bool has_cxnSp() const;
        CT_Connector* mutable_cxnSp();
        const CT_Connector& cxnSp() const;
        bool has_pic() const;
        CT_Picture* mutable_pic();
        const CT_Picture& pic() const;
        bool has_contentPart() const;
        CT_Rel* mutable_contentPart();
        const CT_Rel& contentPart() const;
        bool has_clientData() const;
        CT_AnchorClientData* mutable_clientData();
        const CT_AnchorClientData& clientData() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_OneCellAnchor& default_instance() const;

    private:
        bool m_has_from ;
        CT_Marker* m_from ;
        bool m_has_ext ;
        ns_a::CT_PositiveSize2D* m_ext ;
        bool m_has_sp ;
        CT_Shape* m_sp ;
        bool m_has_grpSp ;
        CT_GroupShape* m_grpSp ;
        bool m_has_graphicFrame ;
        CT_GraphicalObjectFrame* m_graphicFrame ;
        bool m_has_cxnSp ;
        CT_Connector* m_cxnSp ;
        bool m_has_pic ;
        CT_Picture* m_pic ;
        bool m_has_contentPart ;
        CT_Rel* m_contentPart ;
        bool m_has_clientData ;
        CT_AnchorClientData* m_clientData ;
        static CT_OneCellAnchor* default_instance_ ;

    }

    class CT_AbsoluteAnchor : public XSD::ComplexType{
    public:
        bool has_pos() const;
        ns_a::CT_Point2D* mutable_pos();
        const ns_a::CT_Point2D& pos() const;
        bool has_ext() const;
        ns_a::CT_PositiveSize2D* mutable_ext();
        const ns_a::CT_PositiveSize2D& ext() const;
        bool has_sp() const;
        CT_Shape* mutable_sp();
        const CT_Shape& sp() const;
        bool has_grpSp() const;
        CT_GroupShape* mutable_grpSp();
        const CT_GroupShape& grpSp() const;
        bool has_graphicFrame() const;
        CT_GraphicalObjectFrame* mutable_graphicFrame();
        const CT_GraphicalObjectFrame& graphicFrame() const;
        bool has_cxnSp() const;
        CT_Connector* mutable_cxnSp();
        const CT_Connector& cxnSp() const;
        bool has_pic() const;
        CT_Picture* mutable_pic();
        const CT_Picture& pic() const;
        bool has_contentPart() const;
        CT_Rel* mutable_contentPart();
        const CT_Rel& contentPart() const;
        bool has_clientData() const;
        CT_AnchorClientData* mutable_clientData();
        const CT_AnchorClientData& clientData() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_AbsoluteAnchor& default_instance() const;

    private:
        bool m_has_pos ;
        ns_a::CT_Point2D* m_pos ;
        bool m_has_ext ;
        ns_a::CT_PositiveSize2D* m_ext ;
        bool m_has_sp ;
        CT_Shape* m_sp ;
        bool m_has_grpSp ;
        CT_GroupShape* m_grpSp ;
        bool m_has_graphicFrame ;
        CT_GraphicalObjectFrame* m_graphicFrame ;
        bool m_has_cxnSp ;
        CT_Connector* m_cxnSp ;
        bool m_has_pic ;
        CT_Picture* m_pic ;
        bool m_has_contentPart ;
        CT_Rel* m_contentPart ;
        bool m_has_clientData ;
        CT_AnchorClientData* m_clientData ;
        static CT_AbsoluteAnchor* default_instance_ ;

    }

    class CT_Drawing : public XSD::ComplexType{
    public:
        CT_TwoCellAnchor* add_twoCellAnchor();
        CT_OneCellAnchor* add_oneCellAnchor();
        CT_AbsoluteAnchor* add_absoluteAnchor();
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Drawing& default_instance() const;

    private:
        vector<ChildGroup_1*> m_childGroupList_1 ;
        static CT_Drawing* default_instance_ ;
        class ChildGroup_1{
        public:
            bool has_twoCellAnchor() const;
            CT_TwoCellAnchor* mutable_twoCellAnchor();
            const CT_TwoCellAnchor& twoCellAnchor() const;
            bool has_oneCellAnchor() const;
            CT_OneCellAnchor* mutable_oneCellAnchor();
            const CT_OneCellAnchor& oneCellAnchor() const;
            bool has_absoluteAnchor() const;
            CT_AbsoluteAnchor* mutable_absoluteAnchor();
            const CT_AbsoluteAnchor& absoluteAnchor() const;

        private:
            bool m_has_twoCellAnchor ;
            CT_TwoCellAnchor* m_twoCellAnchor ;
            bool m_has_oneCellAnchor ;
            CT_OneCellAnchor* m_oneCellAnchor ;
            bool m_has_absoluteAnchor ;
            CT_AbsoluteAnchor* m_absoluteAnchor ;

        }


    }

    class from : public CT_Marker : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class to : public CT_Marker : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class wsDr : public CT_Drawing : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

}