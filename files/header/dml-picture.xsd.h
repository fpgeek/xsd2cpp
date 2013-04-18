#ifndef dml-picture_xsd 
#define dml-picture_xsd 0 

#include "xsddata.h"
#include <vector>
#include <string>
#include <iostream>
#include "dml-main_xsd.h"
namespace ns_dpct{
    class Element : public XSD::Element{
    public:

    private:

    }

    class Attribute : public XSD::Attribute{
    public:

    private:

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
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Picture& default_instance() const;

    private:
        bool m_has_nvPicPr ;
        CT_PictureNonVisual* m_nvPicPr ;
        bool m_has_blipFill ;
        ns_a::CT_BlipFillProperties* m_blipFill ;
        bool m_has_spPr ;
        ns_a::CT_ShapeProperties* m_spPr ;
        static CT_Picture* default_instance_ ;

    }

    class pic : public CT_Picture : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

}