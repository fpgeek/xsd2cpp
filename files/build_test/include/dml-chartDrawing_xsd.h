namespace ns_cdr {
    class Element;
    class Attribute;
    class ST_MarkerCoordinate;
    class CT_ShapeNonVisual;
    class CT_Shape;
    class CT_ConnectorNonVisual;
    class CT_Connector;
    class CT_PictureNonVisual;
    class CT_Picture;
    class CT_GraphicFrameNonVisual;
    class CT_GraphicFrame;
    class CT_GroupShapeNonVisual;
    class CT_GroupShape;
    class CT_Marker;
    class CT_RelSizeAnchor;
    class CT_AbsSizeAnchor;
    class CT_Drawing;
}
#ifndef __dml_chartDrawing_xsd_
#define __dml_chartDrawing_xsd_ 0

#include "xsdtype.h"
#include <vector>
#include <string>
#include <iostream>
#include "dml-main_xsd.h"
namespace ns_cdr {
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

    class ST_MarkerCoordinate: public XSD::SimpleType
    {
    public:
        ST_MarkerCoordinate();
        ST_MarkerCoordinate(const XSD::double_& _double);
        bool has_double() const;
        void set_double(const XSD::double_& _double);
        const XSD::double_& get_double() const;
        void clear();
        void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_MarkerCoordinate& default_instance();
        std::string toString() const;
    protected:
    private:
        static ST_MarkerCoordinate* default_instance_;
        bool m_has_double;
        XSD::double_ m_double;
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

    class CT_GraphicFrameNonVisual: public XSD::ComplexType
    {
    public:
        CT_GraphicFrameNonVisual();
        ~CT_GraphicFrameNonVisual();
        bool has_cNvPr() const;
        ns_a::CT_NonVisualDrawingProps* mutable_cNvPr();
        const ns_a::CT_NonVisualDrawingProps& get_cNvPr() const;
        bool has_cNvGraphicFramePr() const;
        ns_a::CT_NonVisualGraphicFrameProperties* mutable_cNvGraphicFramePr();
        const ns_a::CT_NonVisualGraphicFrameProperties& get_cNvGraphicFramePr() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_GraphicFrameNonVisual& default_instance();
    protected:
    private:
        bool m_has_cNvPr;
        ns_a::CT_NonVisualDrawingProps* m_cNvPr;
        bool m_has_cNvGraphicFramePr;
        ns_a::CT_NonVisualGraphicFrameProperties* m_cNvGraphicFramePr;
        static CT_GraphicFrameNonVisual* default_instance_;
    };

    class CT_GraphicFrame: public XSD::ComplexType
    {
    public:
        CT_GraphicFrame();
        ~CT_GraphicFrame();
        bool has_nvGraphicFramePr() const;
        CT_GraphicFrameNonVisual* mutable_nvGraphicFramePr();
        const CT_GraphicFrameNonVisual& get_nvGraphicFramePr() const;
        bool has_xfrm() const;
        ns_a::CT_Transform2D* mutable_xfrm();
        const ns_a::CT_Transform2D& get_xfrm() const;
        bool has_a_graphic() const;
        ns_a::CT_GraphicalObject* mutable_a_graphic();
        const ns_a::CT_GraphicalObject& get_a_graphic() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_GraphicFrame& default_instance();
        bool has_macro_attr() const;
        void set_macro_attr(const XSD::string_& _macro_attr);
        const XSD::string_& get_macro_attr() const;
        bool has_fPublished_attr() const;
        void set_fPublished_attr(const XSD::boolean_& _fPublished_attr);
        const XSD::boolean_& get_fPublished_attr() const;
    protected:
    private:
        bool m_has_nvGraphicFramePr;
        CT_GraphicFrameNonVisual* m_nvGraphicFramePr;
        bool m_has_xfrm;
        ns_a::CT_Transform2D* m_xfrm;
        bool m_has_a_graphic;
        ns_a::CT_GraphicalObject* m_a_graphic;
        static CT_GraphicFrame* default_instance_;
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
        CT_GraphicFrame* add_graphicFrame();
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
            CT_GraphicFrame* mutable_graphicFrame();
            const CT_GraphicFrame& get_graphicFrame() const;
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
            CT_GraphicFrame* m_graphicFrame;
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

    class CT_Marker: public XSD::ComplexType
    {
    public:
        CT_Marker();
        ~CT_Marker();
        bool has_x() const;
        ST_MarkerCoordinate* mutable_x();
        const ST_MarkerCoordinate& get_x() const;
        bool has_y() const;
        ST_MarkerCoordinate* mutable_y();
        const ST_MarkerCoordinate& get_y() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_Marker& default_instance();
    protected:
    private:
        bool m_has_x;
        ST_MarkerCoordinate* m_x;
        bool m_has_y;
        ST_MarkerCoordinate* m_y;
        static CT_Marker* default_instance_;
    };

    class CT_RelSizeAnchor: public XSD::ComplexType
    {
    public:
        CT_RelSizeAnchor();
        ~CT_RelSizeAnchor();
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
        CT_GraphicFrame* mutable_graphicFrame();
        const CT_GraphicFrame& get_graphicFrame() const;
        bool has_cxnSp() const;
        CT_Connector* mutable_cxnSp();
        const CT_Connector& get_cxnSp() const;
        bool has_pic() const;
        CT_Picture* mutable_pic();
        const CT_Picture& get_pic() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_RelSizeAnchor& default_instance();
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
        CT_GraphicFrame* m_graphicFrame;
        bool m_has_cxnSp;
        CT_Connector* m_cxnSp;
        bool m_has_pic;
        CT_Picture* m_pic;
        static CT_RelSizeAnchor* default_instance_;
    };

    class CT_AbsSizeAnchor: public XSD::ComplexType
    {
    public:
        CT_AbsSizeAnchor();
        ~CT_AbsSizeAnchor();
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
        CT_GraphicFrame* mutable_graphicFrame();
        const CT_GraphicFrame& get_graphicFrame() const;
        bool has_cxnSp() const;
        CT_Connector* mutable_cxnSp();
        const CT_Connector& get_cxnSp() const;
        bool has_pic() const;
        CT_Picture* mutable_pic();
        const CT_Picture& get_pic() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_AbsSizeAnchor& default_instance();
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
        CT_GraphicFrame* m_graphicFrame;
        bool m_has_cxnSp;
        CT_Connector* m_cxnSp;
        bool m_has_pic;
        CT_Picture* m_pic;
        static CT_AbsSizeAnchor* default_instance_;
    };

    class CT_Drawing: public XSD::ComplexType
    {
    public:
        CT_Drawing();
        ~CT_Drawing();
        CT_RelSizeAnchor* add_relSizeAnchor();
        CT_AbsSizeAnchor* add_absSizeAnchor();
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_Drawing& default_instance();
    protected:
    private:
        class ChildGroup_1
        {
        public:
            ChildGroup_1();
            bool has_relSizeAnchor() const;
            CT_RelSizeAnchor* mutable_relSizeAnchor();
            const CT_RelSizeAnchor& get_relSizeAnchor() const;
            bool has_absSizeAnchor() const;
            CT_AbsSizeAnchor* mutable_absSizeAnchor();
            const CT_AbsSizeAnchor& get_absSizeAnchor() const;
        protected:
        private:
            bool m_has_relSizeAnchor;
            CT_RelSizeAnchor* m_relSizeAnchor;
            bool m_has_absSizeAnchor;
            CT_AbsSizeAnchor* m_absSizeAnchor;
        };
        vector<ChildGroup_1*> m_childGroupList_1;
        static CT_Drawing* default_instance_;
    };

}
#endif