#include "dml-picture_xsd.h"
#include <stdlib.h>
#include <sstream>
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
        bool has_cNvPr(){

            return m_has_cNvPr;
        
        }
        ns_a::CT_NonVisualDrawingProps* mutable_cNvPr(){

                m_has_cNvPr = true;
                if (!m_cNvPr)
                {
                    m_cNvPr = new ns_a::CT_NonVisualDrawingProps();
                }
                return m_cNvPr;
            
        }
        const ns_a::CT_NonVisualDrawingProps& cNvPr(){

            if (m_cNvPr)
            {
                return *m_cNvPr;
            }
            return ns_a::CT_NonVisualDrawingProps::default_instance();
        
        }
        bool has_cNvPicPr(){

            return m_has_cNvPicPr;
        
        }
        ns_a::CT_NonVisualPictureProperties* mutable_cNvPicPr(){

                m_has_cNvPicPr = true;
                if (!m_cNvPicPr)
                {
                    m_cNvPicPr = new ns_a::CT_NonVisualPictureProperties();
                }
                return m_cNvPicPr;
            
        }
        const ns_a::CT_NonVisualPictureProperties& cNvPicPr(){

            if (m_cNvPicPr)
            {
                return *m_cNvPicPr;
            }
            return ns_a::CT_NonVisualPictureProperties::default_instance();
        
        }
        void clear(){

                m_has_cNvPr = false;
                
        if (m_cNvPr)
        {
            delete m_cNvPr;
            m_cNvPr = NULL;
        }
    
            
                m_has_cNvPicPr = false;
                
        if (m_cNvPicPr)
        {
            delete m_cNvPicPr;
            m_cNvPicPr = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_cNvPr)
                {
                    m_cNvPr->toXml(\dpct:cNvPr\, _outStream);;
                }
            
                if (m_has_cNvPicPr)
                {
                    m_cNvPr->toXml(\dpct:cNvPicPr\, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_PictureNonVisual& default_instance(){

    if (!CT_PictureNonVisual::default_instance_)
    {
        CT_PictureNonVisual::default_instance_ = new CT_PictureNonVisual();
    }
    return *CT_PictureNonVisual::default_instance_;

        }

    private:
        bool m_has_cNvPr ;
        ns_a::CT_NonVisualDrawingProps* m_cNvPr ;
        bool m_has_cNvPicPr ;
        ns_a::CT_NonVisualPictureProperties* m_cNvPicPr ;
        static CT_PictureNonVisual* default_instance_ ;

    }

    class CT_Picture : public XSD::ComplexType{
    public:
        bool has_nvPicPr(){

            return m_has_nvPicPr;
        
        }
        CT_PictureNonVisual* mutable_nvPicPr(){

                m_has_nvPicPr = true;
                if (!m_nvPicPr)
                {
                    m_nvPicPr = new CT_PictureNonVisual();
                }
                return m_nvPicPr;
            
        }
        const CT_PictureNonVisual& nvPicPr(){

            if (m_nvPicPr)
            {
                return *m_nvPicPr;
            }
            return CT_PictureNonVisual::default_instance();
        
        }
        bool has_blipFill(){

            return m_has_blipFill;
        
        }
        ns_a::CT_BlipFillProperties* mutable_blipFill(){

                m_has_blipFill = true;
                if (!m_blipFill)
                {
                    m_blipFill = new ns_a::CT_BlipFillProperties();
                }
                return m_blipFill;
            
        }
        const ns_a::CT_BlipFillProperties& blipFill(){

            if (m_blipFill)
            {
                return *m_blipFill;
            }
            return ns_a::CT_BlipFillProperties::default_instance();
        
        }
        bool has_spPr(){

            return m_has_spPr;
        
        }
        ns_a::CT_ShapeProperties* mutable_spPr(){

                m_has_spPr = true;
                if (!m_spPr)
                {
                    m_spPr = new ns_a::CT_ShapeProperties();
                }
                return m_spPr;
            
        }
        const ns_a::CT_ShapeProperties& spPr(){

            if (m_spPr)
            {
                return *m_spPr;
            }
            return ns_a::CT_ShapeProperties::default_instance();
        
        }
        void clear(){

                m_has_nvPicPr = false;
                
        if (m_nvPicPr)
        {
            delete m_nvPicPr;
            m_nvPicPr = NULL;
        }
    
            
                m_has_blipFill = false;
                
        if (m_blipFill)
        {
            delete m_blipFill;
            m_blipFill = NULL;
        }
    
            
                m_has_spPr = false;
                
        if (m_spPr)
        {
            delete m_spPr;
            m_spPr = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_nvPicPr)
                {
                    m_nvPicPr->toXml(\dpct:nvPicPr\, _outStream);;
                }
            
                if (m_has_blipFill)
                {
                    m_nvPicPr->toXml(\dpct:blipFill\, _outStream);;
                }
            
                if (m_has_spPr)
                {
                    m_nvPicPr->toXml(\dpct:spPr\, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_Picture& default_instance(){

    if (!CT_Picture::default_instance_)
    {
        CT_Picture::default_instance_ = new CT_Picture();
    }
    return *CT_Picture::default_instance_;

        }

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
        void toXml(ostream& _outStream ){

        CT_Picture::toXml(\pic\, _outStream);
    
        }

    private:

    }

}