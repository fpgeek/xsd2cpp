#ifndef dml-chartDrawing_xsd 
#define dml-chartDrawing_xsd 0 

#include "xsddata.h"
#include <vector>
#include <string>
#include <iostream>
#include "dml-main_xsd.h"
namespace ns_cdr{
    class Element : public XSD::Element{
    public:

    private:

    }

    class Attribute : public XSD::Attribute{
    public:

    private:

    }

    class ST_MarkerCoordinate : public XSD::SimpleType{
    public:
        ST_MarkerCoordinate();
        ST_MarkerCoordinate(const XSD::double& _double );
        bool has_double() const;
        void set_double(const double& _double );
        const double& double() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_MarkerCoordinate& default_instance() const;

    private:
        static ST_MarkerCoordinate* default_instance_ ;
        bool m_has_double ;
        double m_double ;

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

    class CT_GraphicFrameNonVisual : public XSD::ComplexType{
    public:
        bool has_cNvPr() const;
        ns_a::CT_NonVisualDrawingProps* mutable_cNvPr();
        const ns_a::CT_NonVisualDrawingProps& cNvPr() const;
        bool has_cNvGraphicFramePr() const;
        ns_a::CT_NonVisualGraphicFrameProperties* mutable_cNvGraphicFramePr();
        const ns_a::CT_NonVisualGraphicFrameProperties& cNvGraphicFramePr() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_GraphicFrameNonVisual& default_instance() const;

    private:
        bool m_has_cNvPr ;
        ns_a::CT_NonVisualDrawingProps* m_cNvPr ;
        bool m_has_cNvGraphicFramePr ;
        ns_a::CT_NonVisualGraphicFrameProperties* m_cNvGraphicFramePr ;
        static CT_GraphicFrameNonVisual* default_instance_ ;

    }

    class CT_GraphicFrame : public XSD::ComplexType{
    public:
        bool has_nvGraphicFramePr() const;
        CT_GraphicFrameNonVisual* mutable_nvGraphicFramePr();
        const CT_GraphicFrameNonVisual& nvGraphicFramePr() const;
        bool has_xfrm() const;
        ns_a::CT_Transform2D* mutable_xfrm();
        const ns_a::CT_Transform2D& xfrm() const;
        bool has_graphic() const;
        CT_GraphicalObject* mutable_graphic();
        const CT_GraphicalObject& graphic() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_GraphicFrame& default_instance() const;
        bool has_macro_attr() const;
        void set_macro_attr(const string& _macro_attr );
        const string& macro_attr() const;
        bool has_fPublished_attr() const;
        void set_fPublished_attr(const boolean& _fPublished_attr );
        const boolean& fPublished_attr() const;

    private:
        bool m_has_nvGraphicFramePr ;
        CT_GraphicFrameNonVisual* m_nvGraphicFramePr ;
        bool m_has_xfrm ;
        ns_a::CT_Transform2D* m_xfrm ;
        bool m_has_graphic ;
        CT_GraphicalObject* m_graphic ;
        static CT_GraphicFrame* default_instance_ ;
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
        CT_GraphicFrame* add_graphicFrame();
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
            CT_GraphicFrame* mutable_graphicFrame();
            const CT_GraphicFrame& graphicFrame() const;
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
            CT_GraphicFrame* m_graphicFrame ;
            bool m_has_cxnSp ;
            CT_Connector* m_cxnSp ;
            bool m_has_pic ;
            CT_Picture* m_pic ;

        }


    }

    class CT_Marker : public XSD::ComplexType{
    public:
        bool has_x() const;
        ST_MarkerCoordinate* mutable_x();
        const ST_MarkerCoordinate& x() const;
        bool has_y() const;
        ST_MarkerCoordinate* mutable_y();
        const ST_MarkerCoordinate& y() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Marker& default_instance() const;

    private:
        bool m_has_x ;
        ST_MarkerCoordinate* m_x ;
        bool m_has_y ;
        ST_MarkerCoordinate* m_y ;
        static CT_Marker* default_instance_ ;

    }

    class CT_RelSizeAnchor : public XSD::ComplexType{
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
        CT_GraphicFrame* mutable_graphicFrame();
        const CT_GraphicFrame& graphicFrame() const;
        bool has_cxnSp() const;
        CT_Connector* mutable_cxnSp();
        const CT_Connector& cxnSp() const;
        bool has_pic() const;
        CT_Picture* mutable_pic();
        const CT_Picture& pic() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_RelSizeAnchor& default_instance() const;

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
        CT_GraphicFrame* m_graphicFrame ;
        bool m_has_cxnSp ;
        CT_Connector* m_cxnSp ;
        bool m_has_pic ;
        CT_Picture* m_pic ;
        static CT_RelSizeAnchor* default_instance_ ;

    }

    class CT_AbsSizeAnchor : public XSD::ComplexType{
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
        CT_GraphicFrame* mutable_graphicFrame();
        const CT_GraphicFrame& graphicFrame() const;
        bool has_cxnSp() const;
        CT_Connector* mutable_cxnSp();
        const CT_Connector& cxnSp() const;
        bool has_pic() const;
        CT_Picture* mutable_pic();
        const CT_Picture& pic() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_AbsSizeAnchor& default_instance() const;

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
        CT_GraphicFrame* m_graphicFrame ;
        bool m_has_cxnSp ;
        CT_Connector* m_cxnSp ;
        bool m_has_pic ;
        CT_Picture* m_pic ;
        static CT_AbsSizeAnchor* default_instance_ ;

    }

    class CT_Drawing : public XSD::ComplexType{
    public:
        CT_RelSizeAnchor* add_relSizeAnchor();
        CT_AbsSizeAnchor* add_absSizeAnchor();
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Drawing& default_instance() const;

    private:
        vector<ChildGroup_1*> m_childGroupList_1 ;
        static CT_Drawing* default_instance_ ;
        class ChildGroup_1{
        public:
            bool has_relSizeAnchor() const;
            CT_RelSizeAnchor* mutable_relSizeAnchor();
            const CT_RelSizeAnchor& relSizeAnchor() const;
            bool has_absSizeAnchor() const;
            CT_AbsSizeAnchor* mutable_absSizeAnchor();
            const CT_AbsSizeAnchor& absSizeAnchor() const;

        private:
            bool m_has_relSizeAnchor ;
            CT_RelSizeAnchor* m_relSizeAnchor ;
            bool m_has_absSizeAnchor ;
            CT_AbsSizeAnchor* m_absSizeAnchor ;

        }


    }

}