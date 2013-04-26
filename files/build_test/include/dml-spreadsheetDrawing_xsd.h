namespace ns_xdr {
    class Element;
    class Attribute;
    class ST_ColID;
    class ST_RowID;
    class ST_EditAs;
    class CT_AnchorClientData;
    class CT_ShapeNonVisual;
    class CT_Shape;
    class CT_ConnectorNonVisual;
    class CT_Connector;
    class CT_PictureNonVisual;
    class CT_Picture;
    class CT_GraphicalObjectFrameNonVisual;
    class CT_GraphicalObjectFrame;
    class CT_GroupShapeNonVisual;
    class CT_GroupShape;
    class CT_Rel;
    class CT_Marker;
    class CT_TwoCellAnchor;
    class CT_OneCellAnchor;
    class CT_AbsoluteAnchor;
    class CT_Drawing;
    class from_element;
    class to_element;
    class wsDr_element;
}
#ifndef __dml_spreadsheetDrawing_xsd_
#define __dml_spreadsheetDrawing_xsd_ 0

#include "xsdtype.h"
#include <vector>
#include <string>
#include <iostream>
#include "dml-main_xsd.h"
#include "shared-relationshipReference_xsd.h"
namespace ns_xdr {
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

    class ST_ColID: public XSD::SimpleType
    {
    public:
        ST_ColID();
        ST_ColID(const XSD::int_& _int);
        bool has_int() const;
        void set_int(const XSD::int_& _int);
        const XSD::int_& get_int() const;
        void clear();
        void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_ColID& default_instance();
        std::string toString() const;
    protected:
    private:
        static ST_ColID* default_instance_;
        bool m_has_int;
        XSD::int_ m_int;
    };

    class ST_RowID: public XSD::SimpleType
    {
    public:
        ST_RowID();
        ST_RowID(const XSD::int_& _int);
        bool has_int() const;
        void set_int(const XSD::int_& _int);
        const XSD::int_& get_int() const;
        void clear();
        void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_RowID& default_instance();
        std::string toString() const;
    protected:
    private:
        static ST_RowID* default_instance_;
        bool m_has_int;
        XSD::int_ m_int;
    };

    class ST_EditAs: public XSD::SimpleType
    {
    public:
        enum  Type 
        {
            _twoCell_ = 0,
            _oneCell_,
            _absolute_
        };
        ST_EditAs();
        ST_EditAs(const ST_EditAs::Type& _type);
        bool has_type() const;
        void set_type(const ST_EditAs::Type& _type);
        const ST_EditAs::Type& get_type() const;
        std::string toString() const;
        void clear();
        void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_EditAs& default_instance();
    protected:
    private:
        static const std::string TypeStrList[];
        static ST_EditAs* default_instance_;
        bool m_has_type;
        ST_EditAs::Type m_type;
    };

    class CT_AnchorClientData: public XSD::ComplexType
    {
    public:
        CT_AnchorClientData();
        ~CT_AnchorClientData();
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_AnchorClientData& default_instance();
        bool has_fLocksWithSheet_attr() const;
        void set_fLocksWithSheet_attr(const XSD::boolean_& _fLocksWithSheet_attr);
        const XSD::boolean_& get_fLocksWithSheet_attr() const;
        bool has_fPrintsWithSheet_attr() const;
        void set_fPrintsWithSheet_attr(const XSD::boolean_& _fPrintsWithSheet_attr);
        const XSD::boolean_& get_fPrintsWithSheet_attr() const;
    protected:
    private:
        static CT_AnchorClientData* default_instance_;
        bool m_has_fLocksWithSheet_attr;
        XSD::boolean_ m_fLocksWithSheet_attr;
        bool m_has_fPrintsWithSheet_attr;
        XSD::boolean_ m_fPrintsWithSheet_attr;
    };

    class CT_ShapeNonVisual: public XSD::ComplexType
    {
    public:
        CT_ShapeNonVisual();
        ~CT_ShapeNonVisual();
        bool has_cNvPr() const;
        ns_a::CT_NonVisualDrawingProps* mutable_cNvPr();
        const ns_a::CT_NonVisualDrawingProps& get_cNvPr() const;
        bool has_cNvSpPr() const;
        ns_a::CT_NonVisualDrawingShapeProps* mutable_cNvSpPr();
        const ns_a::CT_NonVisualDrawingShapeProps& get_cNvSpPr() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_ShapeNonVisual& default_instance();
    protected:
    private:
        bool m_has_cNvPr;
        ns_a::CT_NonVisualDrawingProps* m_cNvPr;
        bool m_has_cNvSpPr;
        ns_a::CT_NonVisualDrawingShapeProps* m_cNvSpPr;
        static CT_ShapeNonVisual* default_instance_;
    };

    class CT_Shape: public XSD::ComplexType
    {
    public:
        CT_Shape();
        ~CT_Shape();
        bool has_nvSpPr() const;
        CT_ShapeNonVisual* mutable_nvSpPr();
        const CT_ShapeNonVisual& get_nvSpPr() const;
        bool has_spPr() const;
        ns_a::CT_ShapeProperties* mutable_spPr();
        const ns_a::CT_ShapeProperties& get_spPr() const;
        bool has_style() const;
        ns_a::CT_ShapeStyle* mutable_style();
        const ns_a::CT_ShapeStyle& get_style() const;
        bool has_txBody() const;
        ns_a::CT_TextBody* mutable_txBody();
        const ns_a::CT_TextBody& get_txBody() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_Shape& default_instance();
        bool has_macro_attr() const;
        void set_macro_attr(const XSD::string_& _macro_attr);
        const XSD::string_& get_macro_attr() const;
        bool has_textlink_attr() const;
        void set_textlink_attr(const XSD::string_& _textlink_attr);
        const XSD::string_& get_textlink_attr() const;
        bool has_fLocksText_attr() const;
        void set_fLocksText_attr(const XSD::boolean_& _fLocksText_attr);
        const XSD::boolean_& get_fLocksText_attr() const;
        bool has_fPublished_attr() const;
        void set_fPublished_attr(const XSD::boolean_& _fPublished_attr);
        const XSD::boolean_& get_fPublished_attr() const;
    protected:
    private:
        bool m_has_nvSpPr;
        CT_ShapeNonVisual* m_nvSpPr;
        bool m_has_spPr;
        ns_a::CT_ShapeProperties* m_spPr;
        bool m_has_style;
        ns_a::CT_ShapeStyle* m_style;
        bool m_has_txBody;
        ns_a::CT_TextBody* m_txBody;
        static CT_Shape* default_instance_;
        bool m_has_macro_attr;
        XSD::string_ m_macro_attr;
        bool m_has_textlink_attr;
        XSD::string_ m_textlink_attr;
        bool m_has_fLocksText_attr;
        XSD::boolean_ m_fLocksText_attr;
        bool m_has_fPublished_attr;
        XSD::boolean_ m_fPublished_attr;
    };

    class CT_ConnectorNonVisual: public XSD::ComplexType
    {
    public:
        CT_ConnectorNonVisual();
        ~CT_ConnectorNonVisual();
        bool has_cNvPr() const;
        ns_a::CT_NonVisualDrawingProps* mutable_cNvPr();
        const ns_a::CT_NonVisualDrawingProps& get_cNvPr() const;
        bool has_cNvCxnSpPr() const;
        ns_a::CT_NonVisualConnectorProperties* mutable_cNvCxnSpPr();
        const ns_a::CT_NonVisualConnectorProperties& get_cNvCxnSpPr() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_ConnectorNonVisual& default_instance();
    protected:
    private:
        bool m_has_cNvPr;
        ns_a::CT_NonVisualDrawingProps* m_cNvPr;
        bool m_has_cNvCxnSpPr;
        ns_a::CT_NonVisualConnectorProperties* m_cNvCxnSpPr;
        static CT_ConnectorNonVisual* default_instance_;
    };

    class CT_Connector: public XSD::ComplexType
    {
    public:
        CT_Connector();
        ~CT_Connector();
        bool has_nvCxnSpPr() const;
        CT_ConnectorNonVisual* mutable_nvCxnSpPr();
        const CT_ConnectorNonVisual& get_nvCxnSpPr() const;
        bool has_spPr() const;
        ns_a::CT_ShapeProperties* mutable_spPr();
        const ns_a::CT_ShapeProperties& get_spPr() const;
        bool has_style() const;
        ns_a::CT_ShapeStyle* mutable_style();
        const ns_a::CT_ShapeStyle& get_style() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_Connector& default_instance();
        bool has_macro_attr() const;
        void set_macro_attr(const XSD::string_& _macro_attr);
        const XSD::string_& get_macro_attr() const;
        bool has_fPublished_attr() const;
        void set_fPublished_attr(const XSD::boolean_& _fPublished_attr);
        const XSD::boolean_& get_fPublished_attr() const;
    protected:
    private:
        bool m_has_nvCxnSpPr;
        CT_ConnectorNonVisual* m_nvCxnSpPr;
        bool m_has_spPr;
        ns_a::CT_ShapeProperties* m_spPr;
        bool m_has_style;
        ns_a::CT_ShapeStyle* m_style;
        static CT_Connector* default_instance_;
        bool m_has_macro_attr;
        XSD::string_ m_macro_attr;
        bool m_has_fPublished_attr;
        XSD::boolean_ m_fPublished_attr;
    };

    class CT_PictureNonVisual: public XSD::ComplexType
    {
    public:
        CT_PictureNonVisual();
        ~CT_PictureNonVisual();
        bool has_cNvPr() const;
        ns_a::CT_NonVisualDrawingProps* mutable_cNvPr();
        const ns_a::CT_NonVisualDrawingProps& get_cNvPr() const;
        bool has_cNvPicPr() const;
        ns_a::CT_NonVisualPictureProperties* mutable_cNvPicPr();
        const ns_a::CT_NonVisualPictureProperties& get_cNvPicPr() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_PictureNonVisual& default_instance();
    protected:
    private:
        bool m_has_cNvPr;
        ns_a::CT_NonVisualDrawingProps* m_cNvPr;
        bool m_has_cNvPicPr;
        ns_a::CT_NonVisualPictureProperties* m_cNvPicPr;
        static CT_PictureNonVisual* default_instance_;
    };

    class CT_Picture: public XSD::ComplexType
    {
    public:
        CT_Picture();
        ~CT_Picture();
        bool has_nvPicPr() const;
        CT_PictureNonVisual* mutable_nvPicPr();
        const CT_PictureNonVisual& get_nvPicPr() const;
        bool has_blipFill() const;
        ns_a::CT_BlipFillProperties* mutable_blipFill();
        const ns_a::CT_BlipFillProperties& get_blipFill() const;
        bool has_spPr() const;
        ns_a::CT_ShapeProperties* mutable_spPr();
        const ns_a::CT_ShapeProperties& get_spPr() const;
        bool has_style() const;
        ns_a::CT_ShapeStyle* mutable_style();
        const ns_a::CT_ShapeStyle& get_style() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_Picture& default_instance();
        bool has_macro_attr() const;
        void set_macro_attr(const XSD::string_& _macro_attr);
        const XSD::string_& get_macro_attr() const;
        bool has_fPublished_attr() const;
        void set_fPublished_attr(const XSD::boolean_& _fPublished_attr);
        const XSD::boolean_& get_fPublished_attr() const;
    protected:
    private:
        bool m_has_nvPicPr;
        CT_PictureNonVisual* m_nvPicPr;
        bool m_has_blipFill;
        ns_a::CT_BlipFillProperties* m_blipFill;
        bool m_has_spPr;
        ns_a::CT_ShapeProperties* m_spPr;
        bool m_has_style;
        ns_a::CT_ShapeStyle* m_style;
        static CT_Picture* default_instance_;
        bool m_has_macro_attr;
        XSD::string_ m_macro_attr;
        bool m_has_fPublished_attr;
        XSD::boolean_ m_fPublished_attr;
    };

    class CT_GraphicalObjectFrameNonVisual: public XSD::ComplexType
    {
    public:
        CT_GraphicalObjectFrameNonVisual();
        ~CT_GraphicalObjectFrameNonVisual();
        bool has_cNvPr() const;
        ns_a::CT_NonVisualDrawingProps* mutable_cNvPr();
        const ns_a::CT_NonVisualDrawingProps& get_cNvPr() const;
        bool has_cNvGraphicFramePr() const;
        ns_a::CT_NonVisualGraphicFrameProperties* mutable_cNvGraphicFramePr();
        const ns_a::CT_NonVisualGraphicFrameProperties& get_cNvGraphicFramePr() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_GraphicalObjectFrameNonVisual& default_instance();
    protected:
    private:
        bool m_has_cNvPr;
        ns_a::CT_NonVisualDrawingProps* m_cNvPr;
        bool m_has_cNvGraphicFramePr;
        ns_a::CT_NonVisualGraphicFrameProperties* m_cNvGraphicFramePr;
        static CT_GraphicalObjectFrameNonVisual* default_instance_;
    };

    class CT_GraphicalObjectFrame: public XSD::ComplexType
    {
    public:
        CT_GraphicalObjectFrame();
        ~CT_GraphicalObjectFrame();
        bool has_nvGraphicFramePr() const;
        CT_GraphicalObjectFrameNonVisual* mutable_nvGraphicFramePr();
        const CT_GraphicalObjectFrameNonVisual& get_nvGraphicFramePr() const;
        bool has_xfrm() const;
        ns_a::CT_Transform2D* mutable_xfrm();
        const ns_a::CT_Transform2D& get_xfrm() const;
        bool has_a_graphic() const;
        ns_a::CT_GraphicalObject* mutable_a_graphic();
        const ns_a::CT_GraphicalObject& get_a_graphic() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_GraphicalObjectFrame& default_instance();
        bool has_macro_attr() const;
        void set_macro_attr(const XSD::string_& _macro_attr);
        const XSD::string_& get_macro_attr() const;
        bool has_fPublished_attr() const;
        void set_fPublished_attr(const XSD::boolean_& _fPublished_attr);
        const XSD::boolean_& get_fPublished_attr() const;
    protected:
    private:
        bool m_has_nvGraphicFramePr;
        CT_GraphicalObjectFrameNonVisual* m_nvGraphicFramePr;
        bool m_has_xfrm;
        ns_a::CT_Transform2D* m_xfrm;
        bool m_has_a_graphic;
        ns_a::CT_GraphicalObject* m_a_graphic;
        static CT_GraphicalObjectFrame* default_instance_;
        bool m_has_macro_attr;
        XSD::string_ m_macro_attr;
        bool m_has_fPublished_attr;
        XSD::boolean_ m_fPublished_attr;
    };

    class CT_GroupShapeNonVisual: public XSD::ComplexType
    {
    public:
        CT_GroupShapeNonVisual();
        ~CT_GroupShapeNonVisual();
        bool has_cNvPr() const;
        ns_a::CT_NonVisualDrawingProps* mutable_cNvPr();
        const ns_a::CT_NonVisualDrawingProps& get_cNvPr() const;
        bool has_cNvGrpSpPr() const;
        ns_a::CT_NonVisualGroupDrawingShapeProps* mutable_cNvGrpSpPr();
        const ns_a::CT_NonVisualGroupDrawingShapeProps& get_cNvGrpSpPr() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_GroupShapeNonVisual& default_instance();
    protected:
    private:
        bool m_has_cNvPr;
        ns_a::CT_NonVisualDrawingProps* m_cNvPr;
        bool m_has_cNvGrpSpPr;
        ns_a::CT_NonVisualGroupDrawingShapeProps* m_cNvGrpSpPr;
        static CT_GroupShapeNonVisual* default_instance_;
    };

    class CT_GroupShape: public XSD::ComplexType
    {
    public:
        CT_GroupShape();
        ~CT_GroupShape();
        bool has_nvGrpSpPr() const;
        CT_GroupShapeNonVisual* mutable_nvGrpSpPr();
        const CT_GroupShapeNonVisual& get_nvGrpSpPr() const;
        bool has_grpSpPr() const;
        ns_a::CT_GroupShapeProperties* mutable_grpSpPr();
        const ns_a::CT_GroupShapeProperties& get_grpSpPr() const;
        CT_Shape* add_sp();
        CT_GroupShape* add_grpSp();
        CT_GraphicalObjectFrame* add_graphicFrame();
        CT_Connector* add_cxnSp();
        CT_Picture* add_pic();
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_GroupShape& default_instance();
    protected:
    private:
        class ChildGroup_1
        {
        public:
            ChildGroup_1();
            bool has_sp() const;
            CT_Shape* mutable_sp();
            const CT_Shape& get_sp() const;
            bool has_grpSp() const;
            CT_GroupShape* mutable_grpSp();
            const CT_GroupShape& get_grpSp() const;
            bool has_graphicFrame() const;
            CT_GraphicalObjectFrame* mutable_graphicFrame();
            const CT_GraphicalObjectFrame& get_graphicFrame() const;
            bool has_cxnSp() const;
            CT_Connector* mutable_cxnSp();
            const CT_Connector& get_cxnSp() const;
            bool has_pic() const;
            CT_Picture* mutable_pic();
            const CT_Picture& get_pic() const;
        protected:
        private:
            bool m_has_sp;
            CT_Shape* m_sp;
            bool m_has_grpSp;
            CT_GroupShape* m_grpSp;
            bool m_has_graphicFrame;
            CT_GraphicalObjectFrame* m_graphicFrame;
            bool m_has_cxnSp;
            CT_Connector* m_cxnSp;
            bool m_has_pic;
            CT_Picture* m_pic;
        };
        bool m_has_nvGrpSpPr;
        CT_GroupShapeNonVisual* m_nvGrpSpPr;
        bool m_has_grpSpPr;
        ns_a::CT_GroupShapeProperties* m_grpSpPr;
        vector<ChildGroup_1*> m_childGroupList_1;
        static CT_GroupShape* default_instance_;
    };

    class CT_Rel: public XSD::ComplexType
    {
    public:
        CT_Rel();
        ~CT_Rel();
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_Rel& default_instance();
        bool has_r_id_attr() const;
        void set_r_id_attr(const ns_r::ST_RelationshipId& _r_id_attr);
        const ns_r::ST_RelationshipId& get_r_id_attr() const;
    protected:
    private:
        static CT_Rel* default_instance_;
        bool m_has_r_id_attr;
        ns_r::ST_RelationshipId* m_r_id_attr;
    };

    class CT_Marker: public XSD::ComplexType
    {
    public:
        CT_Marker();
        ~CT_Marker();
        bool has_col() const;
        ST_ColID* mutable_col();
        const ST_ColID& get_col() const;
        bool has_colOff() const;
        ns_a::ST_Coordinate* mutable_colOff();
        const ns_a::ST_Coordinate& get_colOff() const;
        bool has_row() const;
        ST_RowID* mutable_row();
        const ST_RowID& get_row() const;
        bool has_rowOff() const;
        ns_a::ST_Coordinate* mutable_rowOff();
        const ns_a::ST_Coordinate& get_rowOff() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_Marker& default_instance();
    protected:
    private:
        bool m_has_col;
        ST_ColID* m_col;
        bool m_has_colOff;
        ns_a::ST_Coordinate* m_colOff;
        bool m_has_row;
        ST_RowID* m_row;
        bool m_has_rowOff;
        ns_a::ST_Coordinate* m_rowOff;
        static CT_Marker* default_instance_;
    };

    class CT_TwoCellAnchor: public XSD::ComplexType
    {
    public:
        CT_TwoCellAnchor();
        ~CT_TwoCellAnchor();
        bool has_from() const;
        CT_Marker* mutable_from();
        const CT_Marker& get_from() const;
        bool has_to() const;
        CT_Marker* mutable_to();
        const CT_Marker& get_to() const;
        bool has_sp() const;
        CT_Shape* mutable_sp();
        const CT_Shape& get_sp() const;
        bool has_grpSp() const;
        CT_GroupShape* mutable_grpSp();
        const CT_GroupShape& get_grpSp() const;
        bool has_graphicFrame() const;
        CT_GraphicalObjectFrame* mutable_graphicFrame();
        const CT_GraphicalObjectFrame& get_graphicFrame() const;
        bool has_cxnSp() const;
        CT_Connector* mutable_cxnSp();
        const CT_Connector& get_cxnSp() const;
        bool has_pic() const;
        CT_Picture* mutable_pic();
        const CT_Picture& get_pic() const;
        bool has_contentPart() const;
        CT_Rel* mutable_contentPart();
        const CT_Rel& get_contentPart() const;
        bool has_clientData() const;
        CT_AnchorClientData* mutable_clientData();
        const CT_AnchorClientData& get_clientData() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_TwoCellAnchor& default_instance();
        bool has_editAs_attr() const;
        void set_editAs_attr(const ST_EditAs& _editAs_attr);
        const ST_EditAs& get_editAs_attr() const;
    protected:
    private:
        bool m_has_from;
        CT_Marker* m_from;
        bool m_has_to;
        CT_Marker* m_to;
        bool m_has_sp;
        CT_Shape* m_sp;
        bool m_has_grpSp;
        CT_GroupShape* m_grpSp;
        bool m_has_graphicFrame;
        CT_GraphicalObjectFrame* m_graphicFrame;
        bool m_has_cxnSp;
        CT_Connector* m_cxnSp;
        bool m_has_pic;
        CT_Picture* m_pic;
        bool m_has_contentPart;
        CT_Rel* m_contentPart;
        bool m_has_clientData;
        CT_AnchorClientData* m_clientData;
        static CT_TwoCellAnchor* default_instance_;
        bool m_has_editAs_attr;
        ST_EditAs* m_editAs_attr;
    };

    class CT_OneCellAnchor: public XSD::ComplexType
    {
    public:
        CT_OneCellAnchor();
        ~CT_OneCellAnchor();
        bool has_from() const;
        CT_Marker* mutable_from();
        const CT_Marker& get_from() const;
        bool has_ext() const;
        ns_a::CT_PositiveSize2D* mutable_ext();
        const ns_a::CT_PositiveSize2D& get_ext() const;
        bool has_sp() const;
        CT_Shape* mutable_sp();
        const CT_Shape& get_sp() const;
        bool has_grpSp() const;
        CT_GroupShape* mutable_grpSp();
        const CT_GroupShape& get_grpSp() const;
        bool has_graphicFrame() const;
        CT_GraphicalObjectFrame* mutable_graphicFrame();
        const CT_GraphicalObjectFrame& get_graphicFrame() const;
        bool has_cxnSp() const;
        CT_Connector* mutable_cxnSp();
        const CT_Connector& get_cxnSp() const;
        bool has_pic() const;
        CT_Picture* mutable_pic();
        const CT_Picture& get_pic() const;
        bool has_contentPart() const;
        CT_Rel* mutable_contentPart();
        const CT_Rel& get_contentPart() const;
        bool has_clientData() const;
        CT_AnchorClientData* mutable_clientData();
        const CT_AnchorClientData& get_clientData() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_OneCellAnchor& default_instance();
    protected:
    private:
        bool m_has_from;
        CT_Marker* m_from;
        bool m_has_ext;
        ns_a::CT_PositiveSize2D* m_ext;
        bool m_has_sp;
        CT_Shape* m_sp;
        bool m_has_grpSp;
        CT_GroupShape* m_grpSp;
        bool m_has_graphicFrame;
        CT_GraphicalObjectFrame* m_graphicFrame;
        bool m_has_cxnSp;
        CT_Connector* m_cxnSp;
        bool m_has_pic;
        CT_Picture* m_pic;
        bool m_has_contentPart;
        CT_Rel* m_contentPart;
        bool m_has_clientData;
        CT_AnchorClientData* m_clientData;
        static CT_OneCellAnchor* default_instance_;
    };

    class CT_AbsoluteAnchor: public XSD::ComplexType
    {
    public:
        CT_AbsoluteAnchor();
        ~CT_AbsoluteAnchor();
        bool has_pos() const;
        ns_a::CT_Point2D* mutable_pos();
        const ns_a::CT_Point2D& get_pos() const;
        bool has_ext() const;
        ns_a::CT_PositiveSize2D* mutable_ext();
        const ns_a::CT_PositiveSize2D& get_ext() const;
        bool has_sp() const;
        CT_Shape* mutable_sp();
        const CT_Shape& get_sp() const;
        bool has_grpSp() const;
        CT_GroupShape* mutable_grpSp();
        const CT_GroupShape& get_grpSp() const;
        bool has_graphicFrame() const;
        CT_GraphicalObjectFrame* mutable_graphicFrame();
        const CT_GraphicalObjectFrame& get_graphicFrame() const;
        bool has_cxnSp() const;
        CT_Connector* mutable_cxnSp();
        const CT_Connector& get_cxnSp() const;
        bool has_pic() const;
        CT_Picture* mutable_pic();
        const CT_Picture& get_pic() const;
        bool has_contentPart() const;
        CT_Rel* mutable_contentPart();
        const CT_Rel& get_contentPart() const;
        bool has_clientData() const;
        CT_AnchorClientData* mutable_clientData();
        const CT_AnchorClientData& get_clientData() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_AbsoluteAnchor& default_instance();
    protected:
    private:
        bool m_has_pos;
        ns_a::CT_Point2D* m_pos;
        bool m_has_ext;
        ns_a::CT_PositiveSize2D* m_ext;
        bool m_has_sp;
        CT_Shape* m_sp;
        bool m_has_grpSp;
        CT_GroupShape* m_grpSp;
        bool m_has_graphicFrame;
        CT_GraphicalObjectFrame* m_graphicFrame;
        bool m_has_cxnSp;
        CT_Connector* m_cxnSp;
        bool m_has_pic;
        CT_Picture* m_pic;
        bool m_has_contentPart;
        CT_Rel* m_contentPart;
        bool m_has_clientData;
        CT_AnchorClientData* m_clientData;
        static CT_AbsoluteAnchor* default_instance_;
    };

    class CT_Drawing: public XSD::ComplexType
    {
    public:
        CT_Drawing();
        ~CT_Drawing();
        CT_TwoCellAnchor* add_twoCellAnchor();
        CT_OneCellAnchor* add_oneCellAnchor();
        CT_AbsoluteAnchor* add_absoluteAnchor();
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_Drawing& default_instance();
    protected:
    private:
        class ChildGroup_1
        {
        public:
            ChildGroup_1();
            bool has_twoCellAnchor() const;
            CT_TwoCellAnchor* mutable_twoCellAnchor();
            const CT_TwoCellAnchor& get_twoCellAnchor() const;
            bool has_oneCellAnchor() const;
            CT_OneCellAnchor* mutable_oneCellAnchor();
            const CT_OneCellAnchor& get_oneCellAnchor() const;
            bool has_absoluteAnchor() const;
            CT_AbsoluteAnchor* mutable_absoluteAnchor();
            const CT_AbsoluteAnchor& get_absoluteAnchor() const;
        protected:
        private:
            bool m_has_twoCellAnchor;
            CT_TwoCellAnchor* m_twoCellAnchor;
            bool m_has_oneCellAnchor;
            CT_OneCellAnchor* m_oneCellAnchor;
            bool m_has_absoluteAnchor;
            CT_AbsoluteAnchor* m_absoluteAnchor;
        };
        vector<ChildGroup_1*> m_childGroupList_1;
        static CT_Drawing* default_instance_;
    };

    class from_element: public Element
    {
    public:
        from_element();
        ~from_element();
        bool has_col() const;
        ST_ColID* mutable_col();
        const ST_ColID& get_col() const;
        bool has_colOff() const;
        ns_a::ST_Coordinate* mutable_colOff();
        const ns_a::ST_Coordinate& get_colOff() const;
        bool has_row() const;
        ST_RowID* mutable_row();
        const ST_RowID& get_row() const;
        bool has_rowOff() const;
        ns_a::ST_Coordinate* mutable_rowOff();
        const ns_a::ST_Coordinate& get_rowOff() const;
        void clear();
        void toXml(std::ostream& _outStream) const;
        static const from_element& default_instance();
    protected:
    private:
        bool m_has_col;
        ST_ColID* m_col;
        bool m_has_colOff;
        ns_a::ST_Coordinate* m_colOff;
        bool m_has_row;
        ST_RowID* m_row;
        bool m_has_rowOff;
        ns_a::ST_Coordinate* m_rowOff;
        static from_element* default_instance_;
    };

    class to_element: public Element
    {
    public:
        to_element();
        ~to_element();
        bool has_col() const;
        ST_ColID* mutable_col();
        const ST_ColID& get_col() const;
        bool has_colOff() const;
        ns_a::ST_Coordinate* mutable_colOff();
        const ns_a::ST_Coordinate& get_colOff() const;
        bool has_row() const;
        ST_RowID* mutable_row();
        const ST_RowID& get_row() const;
        bool has_rowOff() const;
        ns_a::ST_Coordinate* mutable_rowOff();
        const ns_a::ST_Coordinate& get_rowOff() const;
        void clear();
        void toXml(std::ostream& _outStream) const;
        static const to_element& default_instance();
    protected:
    private:
        bool m_has_col;
        ST_ColID* m_col;
        bool m_has_colOff;
        ns_a::ST_Coordinate* m_colOff;
        bool m_has_row;
        ST_RowID* m_row;
        bool m_has_rowOff;
        ns_a::ST_Coordinate* m_rowOff;
        static to_element* default_instance_;
    };

    class wsDr_element: public Element
    {
    public:
        wsDr_element();
        ~wsDr_element();
        CT_TwoCellAnchor* add_twoCellAnchor();
        CT_OneCellAnchor* add_oneCellAnchor();
        CT_AbsoluteAnchor* add_absoluteAnchor();
        void clear();
        void toXml(std::ostream& _outStream) const;
        static const wsDr_element& default_instance();
    protected:
    private:
        class ChildGroup_1
        {
        public:
            ChildGroup_1();
            bool has_twoCellAnchor() const;
            CT_TwoCellAnchor* mutable_twoCellAnchor();
            const CT_TwoCellAnchor& get_twoCellAnchor() const;
            bool has_oneCellAnchor() const;
            CT_OneCellAnchor* mutable_oneCellAnchor();
            const CT_OneCellAnchor& get_oneCellAnchor() const;
            bool has_absoluteAnchor() const;
            CT_AbsoluteAnchor* mutable_absoluteAnchor();
            const CT_AbsoluteAnchor& get_absoluteAnchor() const;
        protected:
        private:
            bool m_has_twoCellAnchor;
            CT_TwoCellAnchor* m_twoCellAnchor;
            bool m_has_oneCellAnchor;
            CT_OneCellAnchor* m_oneCellAnchor;
            bool m_has_absoluteAnchor;
            CT_AbsoluteAnchor* m_absoluteAnchor;
        };
        vector<ChildGroup_1*> m_childGroupList_1;
        static wsDr_element* default_instance_;
    };

}
#endif