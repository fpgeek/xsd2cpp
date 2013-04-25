#include "dml-picture_xsd.h"
#include <stdlib.h>
#include <sstream>
#include <sstream>
#include <assert.h>
#include "dml-main_xsd.h"
namespace ns_dpct {
 using namespace std;

    // Element

    // Attribute

    // CT_PictureNonVisual
    bool CT_PictureNonVisual::has_a_cNvPr() const
    {    
    return m_has_a_cNvPr;
    }

    ns_a::CT_NonVisualDrawingProps* CT_PictureNonVisual::mutable_a_cNvPr()
    {    
    m_has_a_cNvPr = true;
    if (!m_a_cNvPr)
    {
        m_a_cNvPr = new ns_a::CT_NonVisualDrawingProps();
    }
    return m_a_cNvPr;
    }

    const ns_a::CT_NonVisualDrawingProps& CT_PictureNonVisual::get_a_cNvPr() const
    {    
    if (m_a_cNvPr)
    {
        return *m_a_cNvPr;
    }
    return ns_a::CT_NonVisualDrawingProps::default_instance();
    }

    bool CT_PictureNonVisual::has_a_cNvPicPr() const
    {    
    return m_has_a_cNvPicPr;
    }

    ns_a::CT_NonVisualPictureProperties* CT_PictureNonVisual::mutable_a_cNvPicPr()
    {    
    m_has_a_cNvPicPr = true;
    if (!m_a_cNvPicPr)
    {
        m_a_cNvPicPr = new ns_a::CT_NonVisualPictureProperties();
    }
    return m_a_cNvPicPr;
    }

    const ns_a::CT_NonVisualPictureProperties& CT_PictureNonVisual::get_a_cNvPicPr() const
    {    
    if (m_a_cNvPicPr)
    {
        return *m_a_cNvPicPr;
    }
    return ns_a::CT_NonVisualPictureProperties::default_instance();
    }

    void CT_PictureNonVisual::clear()
    {    }

    void CT_PictureNonVisual::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
            _outStream << ">";
            
    if (m_has_a_cNvPr)
    {
        m_a_cNvPr->toXmlElem("a:cNvPr", "", _outStream);;
    }
    
    if (m_has_a_cNvPicPr)
    {
        m_a_cNvPicPr->toXmlElem("a:cNvPicPr", "", _outStream);;
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_PictureNonVisual& CT_PictureNonVisual::default_instance()
    {    
    if (!CT_PictureNonVisual::default_instance_)
    {
        CT_PictureNonVisual::default_instance_ = new CT_PictureNonVisual();
    }
    return *CT_PictureNonVisual::default_instance_;
    }

CT_PictureNonVisual* CT_PictureNonVisual::default_instance_ = NULL;

    // CT_Picture
    bool CT_Picture::has_nvPicPr() const
    {    
    return m_has_nvPicPr;
    }

    CT_PictureNonVisual* CT_Picture::mutable_nvPicPr()
    {    
    m_has_nvPicPr = true;
    if (!m_nvPicPr)
    {
        m_nvPicPr = new CT_PictureNonVisual();
    }
    return m_nvPicPr;
    }

    const CT_PictureNonVisual& CT_Picture::get_nvPicPr() const
    {    
    if (m_nvPicPr)
    {
        return *m_nvPicPr;
    }
    return CT_PictureNonVisual::default_instance();
    }

    bool CT_Picture::has_a_blipFill() const
    {    
    return m_has_a_blipFill;
    }

    ns_a::CT_BlipFillProperties* CT_Picture::mutable_a_blipFill()
    {    
    m_has_a_blipFill = true;
    if (!m_a_blipFill)
    {
        m_a_blipFill = new ns_a::CT_BlipFillProperties();
    }
    return m_a_blipFill;
    }

    const ns_a::CT_BlipFillProperties& CT_Picture::get_a_blipFill() const
    {    
    if (m_a_blipFill)
    {
        return *m_a_blipFill;
    }
    return ns_a::CT_BlipFillProperties::default_instance();
    }

    bool CT_Picture::has_a_spPr() const
    {    
    return m_has_a_spPr;
    }

    ns_a::CT_ShapeProperties* CT_Picture::mutable_a_spPr()
    {    
    m_has_a_spPr = true;
    if (!m_a_spPr)
    {
        m_a_spPr = new ns_a::CT_ShapeProperties();
    }
    return m_a_spPr;
    }

    const ns_a::CT_ShapeProperties& CT_Picture::get_a_spPr() const
    {    
    if (m_a_spPr)
    {
        return *m_a_spPr;
    }
    return ns_a::CT_ShapeProperties::default_instance();
    }

    void CT_Picture::clear()
    {    }

    void CT_Picture::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
            _outStream << ">";
            
    if (m_has_nvPicPr)
    {
        m_nvPicPr->toXmlElem("nvPicPr", "", _outStream);;
    }
    
    if (m_has_a_blipFill)
    {
        m_a_blipFill->toXmlElem("a:blipFill", "", _outStream);;
    }
    
    if (m_has_a_spPr)
    {
        m_a_spPr->toXmlElem("a:spPr", "", _outStream);;
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_Picture& CT_Picture::default_instance()
    {    
    if (!CT_Picture::default_instance_)
    {
        CT_Picture::default_instance_ = new CT_Picture();
    }
    return *CT_Picture::default_instance_;
    }

CT_Picture* CT_Picture::default_instance_ = NULL;

    // pic_element
    bool pic_element::has_nvPicPr() const
    {    
    return m_has_nvPicPr;
    }

    CT_PictureNonVisual* pic_element::mutable_nvPicPr()
    {    
    m_has_nvPicPr = true;
    if (!m_nvPicPr)
    {
        m_nvPicPr = new CT_PictureNonVisual();
    }
    return m_nvPicPr;
    }

    const CT_PictureNonVisual& pic_element::get_nvPicPr() const
    {    
    if (m_nvPicPr)
    {
        return *m_nvPicPr;
    }
    return CT_PictureNonVisual::default_instance();
    }

    bool pic_element::has_a_blipFill() const
    {    
    return m_has_a_blipFill;
    }

    ns_a::CT_BlipFillProperties* pic_element::mutable_a_blipFill()
    {    
    m_has_a_blipFill = true;
    if (!m_a_blipFill)
    {
        m_a_blipFill = new ns_a::CT_BlipFillProperties();
    }
    return m_a_blipFill;
    }

    const ns_a::CT_BlipFillProperties& pic_element::get_a_blipFill() const
    {    
    if (m_a_blipFill)
    {
        return *m_a_blipFill;
    }
    return ns_a::CT_BlipFillProperties::default_instance();
    }

    bool pic_element::has_a_spPr() const
    {    
    return m_has_a_spPr;
    }

    ns_a::CT_ShapeProperties* pic_element::mutable_a_spPr()
    {    
    m_has_a_spPr = true;
    if (!m_a_spPr)
    {
        m_a_spPr = new ns_a::CT_ShapeProperties();
    }
    return m_a_spPr;
    }

    const ns_a::CT_ShapeProperties& pic_element::get_a_spPr() const
    {    
    if (m_a_spPr)
    {
        return *m_a_spPr;
    }
    return ns_a::CT_ShapeProperties::default_instance();
    }

    void pic_element::clear()
    {    }

    void pic_element::toXml(std::ostream& _outStream) const
    {    
    _outStream << "<pic";
    
    _outStream << " " << "xmlns:a=\"http://schemas.openxmlformats.org/drawingml/2006/main\"";
    _outStream << " " << "xmlns:dpct=\"http://schemas.openxmlformats.org/drawingml/2006/picture\"";
    
    _outStream << ">";
    
    if (m_has_nvPicPr)
    {
        m_nvPicPr->toXmlElem("nvPicPr", "", _outStream);;
    }
    
    if (m_has_a_blipFill)
    {
        m_a_blipFill->toXmlElem("a:blipFill", "", _outStream);;
    }
    
    if (m_has_a_spPr)
    {
        m_a_spPr->toXmlElem("a:spPr", "", _outStream);;
    }
    
    _outStream << "</pic>";
    }

    const pic_element& pic_element::default_instance()
    {    
    if (!pic_element::default_instance_)
    {
        pic_element::default_instance_ = new pic_element();
    }
    return *pic_element::default_instance_;
    }

pic_element* pic_element::default_instance_ = NULL;
}