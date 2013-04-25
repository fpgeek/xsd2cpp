#include "dml-chartDrawing_xsd.h"
#include <stdlib.h>
#include <sstream>
#include <sstream>
#include <assert.h>
#include "dml-main_xsd.h"
namespace ns_cdr {
 using namespace std;

    // Element

    // Attribute

    // ST_MarkerCoordinate
    ST_MarkerCoordinate::ST_MarkerCoordinate()
    :m_has_double(false),
    m_double(0)
    {
    }
    ST_MarkerCoordinate::ST_MarkerCoordinate(const XSD::double_& _double)
    :m_has_double(true)
    {
    
    set_double(m_double);
    }
    bool ST_MarkerCoordinate::has_double() const
    {    
    return m_has_double;
    }

    void ST_MarkerCoordinate::set_double(const XSD::double_& _double)
    {    assert(0.0 <= _double);
    assert(_double <= 1.0);
    
    m_has_double = true;
    m_double = _double;
    }

    const XSD::double_& ST_MarkerCoordinate::get_double() const
    {    
    return m_double;
    }

    void ST_MarkerCoordinate::clear()
    {    
    m_has_double = false;
    m_double = 0;;
    }

    void ST_MarkerCoordinate::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_double)
    {
        _outStream << " " << _attrName << "=\"" << m_double << "\"";;
    }
    }

    const ST_MarkerCoordinate& ST_MarkerCoordinate::default_instance()
    {    
    if (!ST_MarkerCoordinate::default_instance_)
    {
        ST_MarkerCoordinate::default_instance_ = new ST_MarkerCoordinate();
    }
    return *ST_MarkerCoordinate::default_instance_;
    }

    std::string ST_MarkerCoordinate::toString() const
    {    
    std::stringstream strStream;
    strStream << get_double();
    return strStream.str();
    }

ST_MarkerCoordinate* ST_MarkerCoordinate::default_instance_ = NULL;

    // CT_ShapeNonVisual
    bool CT_ShapeNonVisual::has_a_cNvPr() const
    {    
    return m_has_a_cNvPr;
    }

    ns_a::CT_NonVisualDrawingProps* CT_ShapeNonVisual::mutable_a_cNvPr()
    {    
    m_has_a_cNvPr = true;
    if (!m_a_cNvPr)
    {
        m_a_cNvPr = new ns_a::CT_NonVisualDrawingProps();
    }
    return m_a_cNvPr;
    }

    const ns_a::CT_NonVisualDrawingProps& CT_ShapeNonVisual::get_a_cNvPr() const
    {    
    if (m_a_cNvPr)
    {
        return *m_a_cNvPr;
    }
    return ns_a::CT_NonVisualDrawingProps::default_instance();
    }

    bool CT_ShapeNonVisual::has_a_cNvSpPr() const
    {    
    return m_has_a_cNvSpPr;
    }

    ns_a::CT_NonVisualDrawingShapeProps* CT_ShapeNonVisual::mutable_a_cNvSpPr()
    {    
    m_has_a_cNvSpPr = true;
    if (!m_a_cNvSpPr)
    {
        m_a_cNvSpPr = new ns_a::CT_NonVisualDrawingShapeProps();
    }
    return m_a_cNvSpPr;
    }

    const ns_a::CT_NonVisualDrawingShapeProps& CT_ShapeNonVisual::get_a_cNvSpPr() const
    {    
    if (m_a_cNvSpPr)
    {
        return *m_a_cNvSpPr;
    }
    return ns_a::CT_NonVisualDrawingShapeProps::default_instance();
    }

    void CT_ShapeNonVisual::clear()
    {    }

    void CT_ShapeNonVisual::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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
    
    if (m_has_a_cNvSpPr)
    {
        m_a_cNvSpPr->toXmlElem("a:cNvSpPr", "", _outStream);;
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_ShapeNonVisual& CT_ShapeNonVisual::default_instance()
    {    
    if (!CT_ShapeNonVisual::default_instance_)
    {
        CT_ShapeNonVisual::default_instance_ = new CT_ShapeNonVisual();
    }
    return *CT_ShapeNonVisual::default_instance_;
    }

CT_ShapeNonVisual* CT_ShapeNonVisual::default_instance_ = NULL;

    // CT_Shape
    bool CT_Shape::has_nvSpPr() const
    {    
    return m_has_nvSpPr;
    }

    CT_ShapeNonVisual* CT_Shape::mutable_nvSpPr()
    {    
    m_has_nvSpPr = true;
    if (!m_nvSpPr)
    {
        m_nvSpPr = new CT_ShapeNonVisual();
    }
    return m_nvSpPr;
    }

    const CT_ShapeNonVisual& CT_Shape::get_nvSpPr() const
    {    
    if (m_nvSpPr)
    {
        return *m_nvSpPr;
    }
    return CT_ShapeNonVisual::default_instance();
    }

    bool CT_Shape::has_a_spPr() const
    {    
    return m_has_a_spPr;
    }

    ns_a::CT_ShapeProperties* CT_Shape::mutable_a_spPr()
    {    
    m_has_a_spPr = true;
    if (!m_a_spPr)
    {
        m_a_spPr = new ns_a::CT_ShapeProperties();
    }
    return m_a_spPr;
    }

    const ns_a::CT_ShapeProperties& CT_Shape::get_a_spPr() const
    {    
    if (m_a_spPr)
    {
        return *m_a_spPr;
    }
    return ns_a::CT_ShapeProperties::default_instance();
    }

    bool CT_Shape::has_a_style() const
    {    
    return m_has_a_style;
    }

    ns_a::CT_ShapeStyle* CT_Shape::mutable_a_style()
    {    
    m_has_a_style = true;
    if (!m_a_style)
    {
        m_a_style = new ns_a::CT_ShapeStyle();
    }
    return m_a_style;
    }

    const ns_a::CT_ShapeStyle& CT_Shape::get_a_style() const
    {    
    if (m_a_style)
    {
        return *m_a_style;
    }
    return ns_a::CT_ShapeStyle::default_instance();
    }

    bool CT_Shape::has_a_txBody() const
    {    
    return m_has_a_txBody;
    }

    ns_a::CT_TextBody* CT_Shape::mutable_a_txBody()
    {    
    m_has_a_txBody = true;
    if (!m_a_txBody)
    {
        m_a_txBody = new ns_a::CT_TextBody();
    }
    return m_a_txBody;
    }

    const ns_a::CT_TextBody& CT_Shape::get_a_txBody() const
    {    
    if (m_a_txBody)
    {
        return *m_a_txBody;
    }
    return ns_a::CT_TextBody::default_instance();
    }

    void CT_Shape::clear()
    {    
    m_has_macro_attr = false;
    m_macro_attr.clear();
    
    m_has_textlink_attr = false;
    m_textlink_attr.clear();
    
    m_has_fLocksText_attr = false;
    m_fLocksText_attr = false;
    
    m_has_fPublished_attr = false;
    m_fPublished_attr = false;
    }

    void CT_Shape::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
    if (m_has_macro_attr)
    {
        _outStream << " " << "macro" << "=\"" << m_macro_attr << "\"";
    }
    
    
    if (m_has_textlink_attr)
    {
        _outStream << " " << "textlink" << "=\"" << m_textlink_attr << "\"";
    }
    
    
    if (m_has_fLocksText_attr)
    {
        _outStream << " " << "fLocksText" << "=\"" << XSD::XMLBooleanStr(m_fLocksText_attr) << "\"";
    }
    
    
    if (m_has_fPublished_attr)
    {
        _outStream << " " << "fPublished" << "=\"" << XSD::XMLBooleanStr(m_fPublished_attr) << "\"";
    }
    
            _outStream << ">";
            
    if (m_has_nvSpPr)
    {
        m_nvSpPr->toXmlElem("nvSpPr", "", _outStream);;
    }
    
    if (m_has_a_spPr)
    {
        m_a_spPr->toXmlElem("a:spPr", "", _outStream);;
    }
    
    if (m_has_a_style)
    {
        m_a_style->toXmlElem("a:style", "", _outStream);;
    }
    
    if (m_has_a_txBody)
    {
        m_a_txBody->toXmlElem("a:txBody", "", _outStream);;
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_Shape& CT_Shape::default_instance()
    {    
    if (!CT_Shape::default_instance_)
    {
        CT_Shape::default_instance_ = new CT_Shape();
    }
    return *CT_Shape::default_instance_;
    }

    bool CT_Shape::has_macro_attr() const
    {    
    return m_has_macro_attr;
    }

    void CT_Shape::set_macro_attr(const XSD::string_& _macro_attr)
    {    
    m_has_macro_attr = true;
    m_macro_attr = _macro_attr;
    }

    const XSD::string_& CT_Shape::get_macro_attr() const
    {    
    return m_macro_attr;
    }

    bool CT_Shape::has_textlink_attr() const
    {    
    return m_has_textlink_attr;
    }

    void CT_Shape::set_textlink_attr(const XSD::string_& _textlink_attr)
    {    
    m_has_textlink_attr = true;
    m_textlink_attr = _textlink_attr;
    }

    const XSD::string_& CT_Shape::get_textlink_attr() const
    {    
    return m_textlink_attr;
    }

    bool CT_Shape::has_fLocksText_attr() const
    {    
    return m_has_fLocksText_attr;
    }

    void CT_Shape::set_fLocksText_attr(const XSD::boolean_& _fLocksText_attr)
    {    
    m_has_fLocksText_attr = true;
    m_fLocksText_attr = _fLocksText_attr;
    }

    const XSD::boolean_& CT_Shape::get_fLocksText_attr() const
    {    
    return m_fLocksText_attr;
    }

    bool CT_Shape::has_fPublished_attr() const
    {    
    return m_has_fPublished_attr;
    }

    void CT_Shape::set_fPublished_attr(const XSD::boolean_& _fPublished_attr)
    {    
    m_has_fPublished_attr = true;
    m_fPublished_attr = _fPublished_attr;
    }

    const XSD::boolean_& CT_Shape::get_fPublished_attr() const
    {    
    return m_fPublished_attr;
    }

CT_Shape* CT_Shape::default_instance_ = NULL;

    // CT_ConnectorNonVisual
    bool CT_ConnectorNonVisual::has_a_cNvPr() const
    {    
    return m_has_a_cNvPr;
    }

    ns_a::CT_NonVisualDrawingProps* CT_ConnectorNonVisual::mutable_a_cNvPr()
    {    
    m_has_a_cNvPr = true;
    if (!m_a_cNvPr)
    {
        m_a_cNvPr = new ns_a::CT_NonVisualDrawingProps();
    }
    return m_a_cNvPr;
    }

    const ns_a::CT_NonVisualDrawingProps& CT_ConnectorNonVisual::get_a_cNvPr() const
    {    
    if (m_a_cNvPr)
    {
        return *m_a_cNvPr;
    }
    return ns_a::CT_NonVisualDrawingProps::default_instance();
    }

    bool CT_ConnectorNonVisual::has_a_cNvCxnSpPr() const
    {    
    return m_has_a_cNvCxnSpPr;
    }

    ns_a::CT_NonVisualConnectorProperties* CT_ConnectorNonVisual::mutable_a_cNvCxnSpPr()
    {    
    m_has_a_cNvCxnSpPr = true;
    if (!m_a_cNvCxnSpPr)
    {
        m_a_cNvCxnSpPr = new ns_a::CT_NonVisualConnectorProperties();
    }
    return m_a_cNvCxnSpPr;
    }

    const ns_a::CT_NonVisualConnectorProperties& CT_ConnectorNonVisual::get_a_cNvCxnSpPr() const
    {    
    if (m_a_cNvCxnSpPr)
    {
        return *m_a_cNvCxnSpPr;
    }
    return ns_a::CT_NonVisualConnectorProperties::default_instance();
    }

    void CT_ConnectorNonVisual::clear()
    {    }

    void CT_ConnectorNonVisual::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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
    
    if (m_has_a_cNvCxnSpPr)
    {
        m_a_cNvCxnSpPr->toXmlElem("a:cNvCxnSpPr", "", _outStream);;
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_ConnectorNonVisual& CT_ConnectorNonVisual::default_instance()
    {    
    if (!CT_ConnectorNonVisual::default_instance_)
    {
        CT_ConnectorNonVisual::default_instance_ = new CT_ConnectorNonVisual();
    }
    return *CT_ConnectorNonVisual::default_instance_;
    }

CT_ConnectorNonVisual* CT_ConnectorNonVisual::default_instance_ = NULL;

    // CT_Connector
    bool CT_Connector::has_nvCxnSpPr() const
    {    
    return m_has_nvCxnSpPr;
    }

    CT_ConnectorNonVisual* CT_Connector::mutable_nvCxnSpPr()
    {    
    m_has_nvCxnSpPr = true;
    if (!m_nvCxnSpPr)
    {
        m_nvCxnSpPr = new CT_ConnectorNonVisual();
    }
    return m_nvCxnSpPr;
    }

    const CT_ConnectorNonVisual& CT_Connector::get_nvCxnSpPr() const
    {    
    if (m_nvCxnSpPr)
    {
        return *m_nvCxnSpPr;
    }
    return CT_ConnectorNonVisual::default_instance();
    }

    bool CT_Connector::has_a_spPr() const
    {    
    return m_has_a_spPr;
    }

    ns_a::CT_ShapeProperties* CT_Connector::mutable_a_spPr()
    {    
    m_has_a_spPr = true;
    if (!m_a_spPr)
    {
        m_a_spPr = new ns_a::CT_ShapeProperties();
    }
    return m_a_spPr;
    }

    const ns_a::CT_ShapeProperties& CT_Connector::get_a_spPr() const
    {    
    if (m_a_spPr)
    {
        return *m_a_spPr;
    }
    return ns_a::CT_ShapeProperties::default_instance();
    }

    bool CT_Connector::has_a_style() const
    {    
    return m_has_a_style;
    }

    ns_a::CT_ShapeStyle* CT_Connector::mutable_a_style()
    {    
    m_has_a_style = true;
    if (!m_a_style)
    {
        m_a_style = new ns_a::CT_ShapeStyle();
    }
    return m_a_style;
    }

    const ns_a::CT_ShapeStyle& CT_Connector::get_a_style() const
    {    
    if (m_a_style)
    {
        return *m_a_style;
    }
    return ns_a::CT_ShapeStyle::default_instance();
    }

    void CT_Connector::clear()
    {    
    m_has_macro_attr = false;
    m_macro_attr.clear();
    
    m_has_fPublished_attr = false;
    m_fPublished_attr = false;
    }

    void CT_Connector::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
    if (m_has_macro_attr)
    {
        _outStream << " " << "macro" << "=\"" << m_macro_attr << "\"";
    }
    
    
    if (m_has_fPublished_attr)
    {
        _outStream << " " << "fPublished" << "=\"" << XSD::XMLBooleanStr(m_fPublished_attr) << "\"";
    }
    
            _outStream << ">";
            
    if (m_has_nvCxnSpPr)
    {
        m_nvCxnSpPr->toXmlElem("nvCxnSpPr", "", _outStream);;
    }
    
    if (m_has_a_spPr)
    {
        m_a_spPr->toXmlElem("a:spPr", "", _outStream);;
    }
    
    if (m_has_a_style)
    {
        m_a_style->toXmlElem("a:style", "", _outStream);;
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_Connector& CT_Connector::default_instance()
    {    
    if (!CT_Connector::default_instance_)
    {
        CT_Connector::default_instance_ = new CT_Connector();
    }
    return *CT_Connector::default_instance_;
    }

    bool CT_Connector::has_macro_attr() const
    {    
    return m_has_macro_attr;
    }

    void CT_Connector::set_macro_attr(const XSD::string_& _macro_attr)
    {    
    m_has_macro_attr = true;
    m_macro_attr = _macro_attr;
    }

    const XSD::string_& CT_Connector::get_macro_attr() const
    {    
    return m_macro_attr;
    }

    bool CT_Connector::has_fPublished_attr() const
    {    
    return m_has_fPublished_attr;
    }

    void CT_Connector::set_fPublished_attr(const XSD::boolean_& _fPublished_attr)
    {    
    m_has_fPublished_attr = true;
    m_fPublished_attr = _fPublished_attr;
    }

    const XSD::boolean_& CT_Connector::get_fPublished_attr() const
    {    
    return m_fPublished_attr;
    }

CT_Connector* CT_Connector::default_instance_ = NULL;

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

    bool CT_Picture::has_a_style() const
    {    
    return m_has_a_style;
    }

    ns_a::CT_ShapeStyle* CT_Picture::mutable_a_style()
    {    
    m_has_a_style = true;
    if (!m_a_style)
    {
        m_a_style = new ns_a::CT_ShapeStyle();
    }
    return m_a_style;
    }

    const ns_a::CT_ShapeStyle& CT_Picture::get_a_style() const
    {    
    if (m_a_style)
    {
        return *m_a_style;
    }
    return ns_a::CT_ShapeStyle::default_instance();
    }

    void CT_Picture::clear()
    {    
    m_has_macro_attr = false;
    m_macro_attr.clear();
    
    m_has_fPublished_attr = false;
    m_fPublished_attr = false;
    }

    void CT_Picture::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
    if (m_has_macro_attr)
    {
        _outStream << " " << "macro" << "=\"" << m_macro_attr << "\"";
    }
    
    
    if (m_has_fPublished_attr)
    {
        _outStream << " " << "fPublished" << "=\"" << XSD::XMLBooleanStr(m_fPublished_attr) << "\"";
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
    
    if (m_has_a_style)
    {
        m_a_style->toXmlElem("a:style", "", _outStream);;
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

    bool CT_Picture::has_macro_attr() const
    {    
    return m_has_macro_attr;
    }

    void CT_Picture::set_macro_attr(const XSD::string_& _macro_attr)
    {    
    m_has_macro_attr = true;
    m_macro_attr = _macro_attr;
    }

    const XSD::string_& CT_Picture::get_macro_attr() const
    {    
    return m_macro_attr;
    }

    bool CT_Picture::has_fPublished_attr() const
    {    
    return m_has_fPublished_attr;
    }

    void CT_Picture::set_fPublished_attr(const XSD::boolean_& _fPublished_attr)
    {    
    m_has_fPublished_attr = true;
    m_fPublished_attr = _fPublished_attr;
    }

    const XSD::boolean_& CT_Picture::get_fPublished_attr() const
    {    
    return m_fPublished_attr;
    }

CT_Picture* CT_Picture::default_instance_ = NULL;

    // CT_GraphicFrameNonVisual
    bool CT_GraphicFrameNonVisual::has_a_cNvPr() const
    {    
    return m_has_a_cNvPr;
    }

    ns_a::CT_NonVisualDrawingProps* CT_GraphicFrameNonVisual::mutable_a_cNvPr()
    {    
    m_has_a_cNvPr = true;
    if (!m_a_cNvPr)
    {
        m_a_cNvPr = new ns_a::CT_NonVisualDrawingProps();
    }
    return m_a_cNvPr;
    }

    const ns_a::CT_NonVisualDrawingProps& CT_GraphicFrameNonVisual::get_a_cNvPr() const
    {    
    if (m_a_cNvPr)
    {
        return *m_a_cNvPr;
    }
    return ns_a::CT_NonVisualDrawingProps::default_instance();
    }

    bool CT_GraphicFrameNonVisual::has_a_cNvGraphicFramePr() const
    {    
    return m_has_a_cNvGraphicFramePr;
    }

    ns_a::CT_NonVisualGraphicFrameProperties* CT_GraphicFrameNonVisual::mutable_a_cNvGraphicFramePr()
    {    
    m_has_a_cNvGraphicFramePr = true;
    if (!m_a_cNvGraphicFramePr)
    {
        m_a_cNvGraphicFramePr = new ns_a::CT_NonVisualGraphicFrameProperties();
    }
    return m_a_cNvGraphicFramePr;
    }

    const ns_a::CT_NonVisualGraphicFrameProperties& CT_GraphicFrameNonVisual::get_a_cNvGraphicFramePr() const
    {    
    if (m_a_cNvGraphicFramePr)
    {
        return *m_a_cNvGraphicFramePr;
    }
    return ns_a::CT_NonVisualGraphicFrameProperties::default_instance();
    }

    void CT_GraphicFrameNonVisual::clear()
    {    }

    void CT_GraphicFrameNonVisual::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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
    
    if (m_has_a_cNvGraphicFramePr)
    {
        m_a_cNvGraphicFramePr->toXmlElem("a:cNvGraphicFramePr", "", _outStream);;
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_GraphicFrameNonVisual& CT_GraphicFrameNonVisual::default_instance()
    {    
    if (!CT_GraphicFrameNonVisual::default_instance_)
    {
        CT_GraphicFrameNonVisual::default_instance_ = new CT_GraphicFrameNonVisual();
    }
    return *CT_GraphicFrameNonVisual::default_instance_;
    }

CT_GraphicFrameNonVisual* CT_GraphicFrameNonVisual::default_instance_ = NULL;

    // CT_GraphicFrame
    bool CT_GraphicFrame::has_nvGraphicFramePr() const
    {    
    return m_has_nvGraphicFramePr;
    }

    CT_GraphicFrameNonVisual* CT_GraphicFrame::mutable_nvGraphicFramePr()
    {    
    m_has_nvGraphicFramePr = true;
    if (!m_nvGraphicFramePr)
    {
        m_nvGraphicFramePr = new CT_GraphicFrameNonVisual();
    }
    return m_nvGraphicFramePr;
    }

    const CT_GraphicFrameNonVisual& CT_GraphicFrame::get_nvGraphicFramePr() const
    {    
    if (m_nvGraphicFramePr)
    {
        return *m_nvGraphicFramePr;
    }
    return CT_GraphicFrameNonVisual::default_instance();
    }

    bool CT_GraphicFrame::has_a_xfrm() const
    {    
    return m_has_a_xfrm;
    }

    ns_a::CT_Transform2D* CT_GraphicFrame::mutable_a_xfrm()
    {    
    m_has_a_xfrm = true;
    if (!m_a_xfrm)
    {
        m_a_xfrm = new ns_a::CT_Transform2D();
    }
    return m_a_xfrm;
    }

    const ns_a::CT_Transform2D& CT_GraphicFrame::get_a_xfrm() const
    {    
    if (m_a_xfrm)
    {
        return *m_a_xfrm;
    }
    return ns_a::CT_Transform2D::default_instance();
    }

    bool CT_GraphicFrame::has_a_graphic() const
    {    
    return m_has_a_graphic;
    }

    ns_a::CT_GraphicalObject* CT_GraphicFrame::mutable_a_graphic()
    {    
    m_has_a_graphic = true;
    if (!m_a_graphic)
    {
        m_a_graphic = new ns_a::CT_GraphicalObject();
    }
    return m_a_graphic;
    }

    const ns_a::CT_GraphicalObject& CT_GraphicFrame::get_a_graphic() const
    {    
    if (m_a_graphic)
    {
        return *m_a_graphic;
    }
    return ns_a::CT_GraphicalObject::default_instance();
    }

    void CT_GraphicFrame::clear()
    {    
    m_has_macro_attr = false;
    m_macro_attr.clear();
    
    m_has_fPublished_attr = false;
    m_fPublished_attr = false;
    }

    void CT_GraphicFrame::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
    if (m_has_macro_attr)
    {
        _outStream << " " << "macro" << "=\"" << m_macro_attr << "\"";
    }
    
    
    if (m_has_fPublished_attr)
    {
        _outStream << " " << "fPublished" << "=\"" << XSD::XMLBooleanStr(m_fPublished_attr) << "\"";
    }
    
            _outStream << ">";
            
    if (m_has_nvGraphicFramePr)
    {
        m_nvGraphicFramePr->toXmlElem("nvGraphicFramePr", "", _outStream);;
    }
    
    if (m_has_a_xfrm)
    {
        m_a_xfrm->toXmlElem("a:xfrm", "", _outStream);;
    }
    
    if (m_has_a_graphic)
    {
        m_a_graphic->toXmlElem("a:graphic", "", _outStream);;
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_GraphicFrame& CT_GraphicFrame::default_instance()
    {    
    if (!CT_GraphicFrame::default_instance_)
    {
        CT_GraphicFrame::default_instance_ = new CT_GraphicFrame();
    }
    return *CT_GraphicFrame::default_instance_;
    }

    bool CT_GraphicFrame::has_macro_attr() const
    {    
    return m_has_macro_attr;
    }

    void CT_GraphicFrame::set_macro_attr(const XSD::string_& _macro_attr)
    {    
    m_has_macro_attr = true;
    m_macro_attr = _macro_attr;
    }

    const XSD::string_& CT_GraphicFrame::get_macro_attr() const
    {    
    return m_macro_attr;
    }

    bool CT_GraphicFrame::has_fPublished_attr() const
    {    
    return m_has_fPublished_attr;
    }

    void CT_GraphicFrame::set_fPublished_attr(const XSD::boolean_& _fPublished_attr)
    {    
    m_has_fPublished_attr = true;
    m_fPublished_attr = _fPublished_attr;
    }

    const XSD::boolean_& CT_GraphicFrame::get_fPublished_attr() const
    {    
    return m_fPublished_attr;
    }

CT_GraphicFrame* CT_GraphicFrame::default_instance_ = NULL;

    // CT_GroupShapeNonVisual
    bool CT_GroupShapeNonVisual::has_a_cNvPr() const
    {    
    return m_has_a_cNvPr;
    }

    ns_a::CT_NonVisualDrawingProps* CT_GroupShapeNonVisual::mutable_a_cNvPr()
    {    
    m_has_a_cNvPr = true;
    if (!m_a_cNvPr)
    {
        m_a_cNvPr = new ns_a::CT_NonVisualDrawingProps();
    }
    return m_a_cNvPr;
    }

    const ns_a::CT_NonVisualDrawingProps& CT_GroupShapeNonVisual::get_a_cNvPr() const
    {    
    if (m_a_cNvPr)
    {
        return *m_a_cNvPr;
    }
    return ns_a::CT_NonVisualDrawingProps::default_instance();
    }

    bool CT_GroupShapeNonVisual::has_a_cNvGrpSpPr() const
    {    
    return m_has_a_cNvGrpSpPr;
    }

    ns_a::CT_NonVisualGroupDrawingShapeProps* CT_GroupShapeNonVisual::mutable_a_cNvGrpSpPr()
    {    
    m_has_a_cNvGrpSpPr = true;
    if (!m_a_cNvGrpSpPr)
    {
        m_a_cNvGrpSpPr = new ns_a::CT_NonVisualGroupDrawingShapeProps();
    }
    return m_a_cNvGrpSpPr;
    }

    const ns_a::CT_NonVisualGroupDrawingShapeProps& CT_GroupShapeNonVisual::get_a_cNvGrpSpPr() const
    {    
    if (m_a_cNvGrpSpPr)
    {
        return *m_a_cNvGrpSpPr;
    }
    return ns_a::CT_NonVisualGroupDrawingShapeProps::default_instance();
    }

    void CT_GroupShapeNonVisual::clear()
    {    }

    void CT_GroupShapeNonVisual::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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
    
    if (m_has_a_cNvGrpSpPr)
    {
        m_a_cNvGrpSpPr->toXmlElem("a:cNvGrpSpPr", "", _outStream);;
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_GroupShapeNonVisual& CT_GroupShapeNonVisual::default_instance()
    {    
    if (!CT_GroupShapeNonVisual::default_instance_)
    {
        CT_GroupShapeNonVisual::default_instance_ = new CT_GroupShapeNonVisual();
    }
    return *CT_GroupShapeNonVisual::default_instance_;
    }

CT_GroupShapeNonVisual* CT_GroupShapeNonVisual::default_instance_ = NULL;

    // CT_GroupShape
    bool CT_GroupShape::has_nvGrpSpPr() const
    {    
    return m_has_nvGrpSpPr;
    }

    CT_GroupShapeNonVisual* CT_GroupShape::mutable_nvGrpSpPr()
    {    
    m_has_nvGrpSpPr = true;
    if (!m_nvGrpSpPr)
    {
        m_nvGrpSpPr = new CT_GroupShapeNonVisual();
    }
    return m_nvGrpSpPr;
    }

    const CT_GroupShapeNonVisual& CT_GroupShape::get_nvGrpSpPr() const
    {    
    if (m_nvGrpSpPr)
    {
        return *m_nvGrpSpPr;
    }
    return CT_GroupShapeNonVisual::default_instance();
    }

    bool CT_GroupShape::has_a_grpSpPr() const
    {    
    return m_has_a_grpSpPr;
    }

    ns_a::CT_GroupShapeProperties* CT_GroupShape::mutable_a_grpSpPr()
    {    
    m_has_a_grpSpPr = true;
    if (!m_a_grpSpPr)
    {
        m_a_grpSpPr = new ns_a::CT_GroupShapeProperties();
    }
    return m_a_grpSpPr;
    }

    const ns_a::CT_GroupShapeProperties& CT_GroupShape::get_a_grpSpPr() const
    {    
    if (m_a_grpSpPr)
    {
        return *m_a_grpSpPr;
    }
    return ns_a::CT_GroupShapeProperties::default_instance();
    }

    CT_Shape* CT_GroupShape::add_sp()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Shape* pNewChild = pChildGroup->mutable_sp();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_GroupShape* CT_GroupShape::add_grpSp()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_GroupShape* pNewChild = pChildGroup->mutable_grpSp();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_GraphicFrame* CT_GroupShape::add_graphicFrame()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_GraphicFrame* pNewChild = pChildGroup->mutable_graphicFrame();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Connector* CT_GroupShape::add_cxnSp()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Connector* pNewChild = pChildGroup->mutable_cxnSp();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Picture* CT_GroupShape::add_pic()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Picture* pNewChild = pChildGroup->mutable_pic();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    void CT_GroupShape::clear()
    {    
    m_has_nvGrpSpPr = false;
    
    if (m_nvGrpSpPr)
    {
        delete m_nvGrpSpPr;
        m_nvGrpSpPr = NULL;
    }
    
    
    m_has_a_grpSpPr = false;
    
    if (m_a_grpSpPr)
    {
        delete m_a_grpSpPr;
        m_a_grpSpPr = NULL;
    }
    
     
    {
        vector<ChildGroup_1*>::iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_1.clear();
    }
    }

    void CT_GroupShape::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
            _outStream << ">";
            
    if (m_has_nvGrpSpPr)
    {
        m_nvGrpSpPr->toXmlElem("nvGrpSpPr", "", _outStream);;
    }
    
    if (m_has_a_grpSpPr)
    {
        m_a_grpSpPr->toXmlElem("a:grpSpPr", "", _outStream);;
    }
     
    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_sp())
            {
                (*iter)->get_sp().toXmlElem("sp", "", _outStream);
            }
            else if ((*iter)->has_grpSp())
            {
                (*iter)->get_grpSp().toXmlElem("grpSp", "", _outStream);
            }
            else if ((*iter)->has_graphicFrame())
            {
                (*iter)->get_graphicFrame().toXmlElem("graphicFrame", "", _outStream);
            }
            else if ((*iter)->has_cxnSp())
            {
                (*iter)->get_cxnSp().toXmlElem("cxnSp", "", _outStream);
            }
            else if ((*iter)->has_pic())
            {
                (*iter)->get_pic().toXmlElem("pic", "", _outStream);
            }
        }
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_GroupShape& CT_GroupShape::default_instance()
    {    
    if (!CT_GroupShape::default_instance_)
    {
        CT_GroupShape::default_instance_ = new CT_GroupShape();
    }
    return *CT_GroupShape::default_instance_;
    }


    // CT_GroupShape::ChildGroup_1
    bool CT_GroupShape::ChildGroup_1::has_sp() const
    {    
    return m_has_sp;
    }

    CT_Shape* CT_GroupShape::ChildGroup_1::mutable_sp()
    {    
    
    m_has_grpSp = false;
    
    if (m_grpSp)
    {
        delete m_grpSp;
        m_grpSp = NULL;
    }
    ;
    
    m_has_graphicFrame = false;
    
    if (m_graphicFrame)
    {
        delete m_graphicFrame;
        m_graphicFrame = NULL;
    }
    ;
    
    m_has_cxnSp = false;
    
    if (m_cxnSp)
    {
        delete m_cxnSp;
        m_cxnSp = NULL;
    }
    ;
    
    m_has_pic = false;
    
    if (m_pic)
    {
        delete m_pic;
        m_pic = NULL;
    }
    ;
    
    m_has_sp = true;
    if (!m_sp)
    {
        m_sp = new CT_Shape();
    }
    return m_sp;
    }

    const CT_Shape& CT_GroupShape::ChildGroup_1::get_sp() const
    {    
    if (m_sp)
    {
        return *m_sp;
    }
    return CT_Shape::default_instance();
    }

    bool CT_GroupShape::ChildGroup_1::has_grpSp() const
    {    
    return m_has_grpSp;
    }

    CT_GroupShape* CT_GroupShape::ChildGroup_1::mutable_grpSp()
    {    
    
    m_has_sp = false;
    
    if (m_sp)
    {
        delete m_sp;
        m_sp = NULL;
    }
    ;
    
    m_has_graphicFrame = false;
    
    if (m_graphicFrame)
    {
        delete m_graphicFrame;
        m_graphicFrame = NULL;
    }
    ;
    
    m_has_cxnSp = false;
    
    if (m_cxnSp)
    {
        delete m_cxnSp;
        m_cxnSp = NULL;
    }
    ;
    
    m_has_pic = false;
    
    if (m_pic)
    {
        delete m_pic;
        m_pic = NULL;
    }
    ;
    
    m_has_grpSp = true;
    if (!m_grpSp)
    {
        m_grpSp = new CT_GroupShape();
    }
    return m_grpSp;
    }

    const CT_GroupShape& CT_GroupShape::ChildGroup_1::get_grpSp() const
    {    
    if (m_grpSp)
    {
        return *m_grpSp;
    }
    return CT_GroupShape::default_instance();
    }

    bool CT_GroupShape::ChildGroup_1::has_graphicFrame() const
    {    
    return m_has_graphicFrame;
    }

    CT_GraphicFrame* CT_GroupShape::ChildGroup_1::mutable_graphicFrame()
    {    
    
    m_has_sp = false;
    
    if (m_sp)
    {
        delete m_sp;
        m_sp = NULL;
    }
    ;
    
    m_has_grpSp = false;
    
    if (m_grpSp)
    {
        delete m_grpSp;
        m_grpSp = NULL;
    }
    ;
    
    m_has_cxnSp = false;
    
    if (m_cxnSp)
    {
        delete m_cxnSp;
        m_cxnSp = NULL;
    }
    ;
    
    m_has_pic = false;
    
    if (m_pic)
    {
        delete m_pic;
        m_pic = NULL;
    }
    ;
    
    m_has_graphicFrame = true;
    if (!m_graphicFrame)
    {
        m_graphicFrame = new CT_GraphicFrame();
    }
    return m_graphicFrame;
    }

    const CT_GraphicFrame& CT_GroupShape::ChildGroup_1::get_graphicFrame() const
    {    
    if (m_graphicFrame)
    {
        return *m_graphicFrame;
    }
    return CT_GraphicFrame::default_instance();
    }

    bool CT_GroupShape::ChildGroup_1::has_cxnSp() const
    {    
    return m_has_cxnSp;
    }

    CT_Connector* CT_GroupShape::ChildGroup_1::mutable_cxnSp()
    {    
    
    m_has_sp = false;
    
    if (m_sp)
    {
        delete m_sp;
        m_sp = NULL;
    }
    ;
    
    m_has_grpSp = false;
    
    if (m_grpSp)
    {
        delete m_grpSp;
        m_grpSp = NULL;
    }
    ;
    
    m_has_graphicFrame = false;
    
    if (m_graphicFrame)
    {
        delete m_graphicFrame;
        m_graphicFrame = NULL;
    }
    ;
    
    m_has_pic = false;
    
    if (m_pic)
    {
        delete m_pic;
        m_pic = NULL;
    }
    ;
    
    m_has_cxnSp = true;
    if (!m_cxnSp)
    {
        m_cxnSp = new CT_Connector();
    }
    return m_cxnSp;
    }

    const CT_Connector& CT_GroupShape::ChildGroup_1::get_cxnSp() const
    {    
    if (m_cxnSp)
    {
        return *m_cxnSp;
    }
    return CT_Connector::default_instance();
    }

    bool CT_GroupShape::ChildGroup_1::has_pic() const
    {    
    return m_has_pic;
    }

    CT_Picture* CT_GroupShape::ChildGroup_1::mutable_pic()
    {    
    
    m_has_sp = false;
    
    if (m_sp)
    {
        delete m_sp;
        m_sp = NULL;
    }
    ;
    
    m_has_grpSp = false;
    
    if (m_grpSp)
    {
        delete m_grpSp;
        m_grpSp = NULL;
    }
    ;
    
    m_has_graphicFrame = false;
    
    if (m_graphicFrame)
    {
        delete m_graphicFrame;
        m_graphicFrame = NULL;
    }
    ;
    
    m_has_cxnSp = false;
    
    if (m_cxnSp)
    {
        delete m_cxnSp;
        m_cxnSp = NULL;
    }
    ;
    
    m_has_pic = true;
    if (!m_pic)
    {
        m_pic = new CT_Picture();
    }
    return m_pic;
    }

    const CT_Picture& CT_GroupShape::ChildGroup_1::get_pic() const
    {    
    if (m_pic)
    {
        return *m_pic;
    }
    return CT_Picture::default_instance();
    }

CT_GroupShape* CT_GroupShape::default_instance_ = NULL;

    // CT_Marker
    bool CT_Marker::has_x() const
    {    
    return m_has_x;
    }

    ST_MarkerCoordinate* CT_Marker::mutable_x()
    {    
    m_has_x = true;
    if (!m_x)
    {
        m_x = new ST_MarkerCoordinate();
    }
    return m_x;
    }

    const ST_MarkerCoordinate& CT_Marker::get_x() const
    {    
    if (m_x)
    {
        return *m_x;
    }
    return ST_MarkerCoordinate::default_instance();
    }

    bool CT_Marker::has_y() const
    {    
    return m_has_y;
    }

    ST_MarkerCoordinate* CT_Marker::mutable_y()
    {    
    m_has_y = true;
    if (!m_y)
    {
        m_y = new ST_MarkerCoordinate();
    }
    return m_y;
    }

    const ST_MarkerCoordinate& CT_Marker::get_y() const
    {    
    if (m_y)
    {
        return *m_y;
    }
    return ST_MarkerCoordinate::default_instance();
    }

    void CT_Marker::clear()
    {    }

    void CT_Marker::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
            _outStream << ">";
            
    if (m_has_x)
    {
        _outStream << "<x>" << m_x->toString() << "</x>";;
    }
    
    if (m_has_y)
    {
        _outStream << "<y>" << m_y->toString() << "</y>";;
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_Marker& CT_Marker::default_instance()
    {    
    if (!CT_Marker::default_instance_)
    {
        CT_Marker::default_instance_ = new CT_Marker();
    }
    return *CT_Marker::default_instance_;
    }

CT_Marker* CT_Marker::default_instance_ = NULL;

    // CT_RelSizeAnchor
    bool CT_RelSizeAnchor::has_from() const
    {    
    return m_has_from;
    }

    CT_Marker* CT_RelSizeAnchor::mutable_from()
    {    
    m_has_from = true;
    if (!m_from)
    {
        m_from = new CT_Marker();
    }
    return m_from;
    }

    const CT_Marker& CT_RelSizeAnchor::get_from() const
    {    
    if (m_from)
    {
        return *m_from;
    }
    return CT_Marker::default_instance();
    }

    bool CT_RelSizeAnchor::has_to() const
    {    
    return m_has_to;
    }

    CT_Marker* CT_RelSizeAnchor::mutable_to()
    {    
    m_has_to = true;
    if (!m_to)
    {
        m_to = new CT_Marker();
    }
    return m_to;
    }

    const CT_Marker& CT_RelSizeAnchor::get_to() const
    {    
    if (m_to)
    {
        return *m_to;
    }
    return CT_Marker::default_instance();
    }

    bool CT_RelSizeAnchor::has_sp() const
    {    
    return m_has_sp;
    }

    CT_Shape* CT_RelSizeAnchor::mutable_sp()
    {    
    
    m_has_grpSp = false;
    
    if (m_grpSp)
    {
        delete m_grpSp;
        m_grpSp = NULL;
    }
    ;
    
    m_has_graphicFrame = false;
    
    if (m_graphicFrame)
    {
        delete m_graphicFrame;
        m_graphicFrame = NULL;
    }
    ;
    
    m_has_cxnSp = false;
    
    if (m_cxnSp)
    {
        delete m_cxnSp;
        m_cxnSp = NULL;
    }
    ;
    
    m_has_pic = false;
    
    if (m_pic)
    {
        delete m_pic;
        m_pic = NULL;
    }
    ;
    
    m_has_sp = true;
    if (!m_sp)
    {
        m_sp = new CT_Shape();
    }
    return m_sp;
    }

    const CT_Shape& CT_RelSizeAnchor::get_sp() const
    {    
    if (m_sp)
    {
        return *m_sp;
    }
    return CT_Shape::default_instance();
    }

    bool CT_RelSizeAnchor::has_grpSp() const
    {    
    return m_has_grpSp;
    }

    CT_GroupShape* CT_RelSizeAnchor::mutable_grpSp()
    {    
    
    m_has_sp = false;
    
    if (m_sp)
    {
        delete m_sp;
        m_sp = NULL;
    }
    ;
    
    m_has_graphicFrame = false;
    
    if (m_graphicFrame)
    {
        delete m_graphicFrame;
        m_graphicFrame = NULL;
    }
    ;
    
    m_has_cxnSp = false;
    
    if (m_cxnSp)
    {
        delete m_cxnSp;
        m_cxnSp = NULL;
    }
    ;
    
    m_has_pic = false;
    
    if (m_pic)
    {
        delete m_pic;
        m_pic = NULL;
    }
    ;
    
    m_has_grpSp = true;
    if (!m_grpSp)
    {
        m_grpSp = new CT_GroupShape();
    }
    return m_grpSp;
    }

    const CT_GroupShape& CT_RelSizeAnchor::get_grpSp() const
    {    
    if (m_grpSp)
    {
        return *m_grpSp;
    }
    return CT_GroupShape::default_instance();
    }

    bool CT_RelSizeAnchor::has_graphicFrame() const
    {    
    return m_has_graphicFrame;
    }

    CT_GraphicFrame* CT_RelSizeAnchor::mutable_graphicFrame()
    {    
    
    m_has_sp = false;
    
    if (m_sp)
    {
        delete m_sp;
        m_sp = NULL;
    }
    ;
    
    m_has_grpSp = false;
    
    if (m_grpSp)
    {
        delete m_grpSp;
        m_grpSp = NULL;
    }
    ;
    
    m_has_cxnSp = false;
    
    if (m_cxnSp)
    {
        delete m_cxnSp;
        m_cxnSp = NULL;
    }
    ;
    
    m_has_pic = false;
    
    if (m_pic)
    {
        delete m_pic;
        m_pic = NULL;
    }
    ;
    
    m_has_graphicFrame = true;
    if (!m_graphicFrame)
    {
        m_graphicFrame = new CT_GraphicFrame();
    }
    return m_graphicFrame;
    }

    const CT_GraphicFrame& CT_RelSizeAnchor::get_graphicFrame() const
    {    
    if (m_graphicFrame)
    {
        return *m_graphicFrame;
    }
    return CT_GraphicFrame::default_instance();
    }

    bool CT_RelSizeAnchor::has_cxnSp() const
    {    
    return m_has_cxnSp;
    }

    CT_Connector* CT_RelSizeAnchor::mutable_cxnSp()
    {    
    
    m_has_sp = false;
    
    if (m_sp)
    {
        delete m_sp;
        m_sp = NULL;
    }
    ;
    
    m_has_grpSp = false;
    
    if (m_grpSp)
    {
        delete m_grpSp;
        m_grpSp = NULL;
    }
    ;
    
    m_has_graphicFrame = false;
    
    if (m_graphicFrame)
    {
        delete m_graphicFrame;
        m_graphicFrame = NULL;
    }
    ;
    
    m_has_pic = false;
    
    if (m_pic)
    {
        delete m_pic;
        m_pic = NULL;
    }
    ;
    
    m_has_cxnSp = true;
    if (!m_cxnSp)
    {
        m_cxnSp = new CT_Connector();
    }
    return m_cxnSp;
    }

    const CT_Connector& CT_RelSizeAnchor::get_cxnSp() const
    {    
    if (m_cxnSp)
    {
        return *m_cxnSp;
    }
    return CT_Connector::default_instance();
    }

    bool CT_RelSizeAnchor::has_pic() const
    {    
    return m_has_pic;
    }

    CT_Picture* CT_RelSizeAnchor::mutable_pic()
    {    
    
    m_has_sp = false;
    
    if (m_sp)
    {
        delete m_sp;
        m_sp = NULL;
    }
    ;
    
    m_has_grpSp = false;
    
    if (m_grpSp)
    {
        delete m_grpSp;
        m_grpSp = NULL;
    }
    ;
    
    m_has_graphicFrame = false;
    
    if (m_graphicFrame)
    {
        delete m_graphicFrame;
        m_graphicFrame = NULL;
    }
    ;
    
    m_has_cxnSp = false;
    
    if (m_cxnSp)
    {
        delete m_cxnSp;
        m_cxnSp = NULL;
    }
    ;
    
    m_has_pic = true;
    if (!m_pic)
    {
        m_pic = new CT_Picture();
    }
    return m_pic;
    }

    const CT_Picture& CT_RelSizeAnchor::get_pic() const
    {    
    if (m_pic)
    {
        return *m_pic;
    }
    return CT_Picture::default_instance();
    }

    void CT_RelSizeAnchor::clear()
    {    }

    void CT_RelSizeAnchor::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
            _outStream << ">";
            
    if (m_has_from)
    {
        m_from->toXmlElem("from", "", _outStream);;
    }
    
    if (m_has_to)
    {
        m_to->toXmlElem("to", "", _outStream);;
    }
     
    if (m_has_sp)
    {
        m_sp->toXmlElem("sp", "", _outStream);;
    }
    
    if (m_has_grpSp)
    {
        m_grpSp->toXmlElem("grpSp", "", _outStream);;
    }
    
    if (m_has_graphicFrame)
    {
        m_graphicFrame->toXmlElem("graphicFrame", "", _outStream);;
    }
    
    if (m_has_cxnSp)
    {
        m_cxnSp->toXmlElem("cxnSp", "", _outStream);;
    }
    
    if (m_has_pic)
    {
        m_pic->toXmlElem("pic", "", _outStream);;
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_RelSizeAnchor& CT_RelSizeAnchor::default_instance()
    {    
    if (!CT_RelSizeAnchor::default_instance_)
    {
        CT_RelSizeAnchor::default_instance_ = new CT_RelSizeAnchor();
    }
    return *CT_RelSizeAnchor::default_instance_;
    }

CT_RelSizeAnchor* CT_RelSizeAnchor::default_instance_ = NULL;

    // CT_AbsSizeAnchor
    bool CT_AbsSizeAnchor::has_from() const
    {    
    return m_has_from;
    }

    CT_Marker* CT_AbsSizeAnchor::mutable_from()
    {    
    m_has_from = true;
    if (!m_from)
    {
        m_from = new CT_Marker();
    }
    return m_from;
    }

    const CT_Marker& CT_AbsSizeAnchor::get_from() const
    {    
    if (m_from)
    {
        return *m_from;
    }
    return CT_Marker::default_instance();
    }

    bool CT_AbsSizeAnchor::has_a_ext() const
    {    
    return m_has_a_ext;
    }

    ns_a::CT_PositiveSize2D* CT_AbsSizeAnchor::mutable_a_ext()
    {    
    m_has_a_ext = true;
    if (!m_a_ext)
    {
        m_a_ext = new ns_a::CT_PositiveSize2D();
    }
    return m_a_ext;
    }

    const ns_a::CT_PositiveSize2D& CT_AbsSizeAnchor::get_a_ext() const
    {    
    if (m_a_ext)
    {
        return *m_a_ext;
    }
    return ns_a::CT_PositiveSize2D::default_instance();
    }

    bool CT_AbsSizeAnchor::has_sp() const
    {    
    return m_has_sp;
    }

    CT_Shape* CT_AbsSizeAnchor::mutable_sp()
    {    
    
    m_has_grpSp = false;
    
    if (m_grpSp)
    {
        delete m_grpSp;
        m_grpSp = NULL;
    }
    ;
    
    m_has_graphicFrame = false;
    
    if (m_graphicFrame)
    {
        delete m_graphicFrame;
        m_graphicFrame = NULL;
    }
    ;
    
    m_has_cxnSp = false;
    
    if (m_cxnSp)
    {
        delete m_cxnSp;
        m_cxnSp = NULL;
    }
    ;
    
    m_has_pic = false;
    
    if (m_pic)
    {
        delete m_pic;
        m_pic = NULL;
    }
    ;
    
    m_has_sp = true;
    if (!m_sp)
    {
        m_sp = new CT_Shape();
    }
    return m_sp;
    }

    const CT_Shape& CT_AbsSizeAnchor::get_sp() const
    {    
    if (m_sp)
    {
        return *m_sp;
    }
    return CT_Shape::default_instance();
    }

    bool CT_AbsSizeAnchor::has_grpSp() const
    {    
    return m_has_grpSp;
    }

    CT_GroupShape* CT_AbsSizeAnchor::mutable_grpSp()
    {    
    
    m_has_sp = false;
    
    if (m_sp)
    {
        delete m_sp;
        m_sp = NULL;
    }
    ;
    
    m_has_graphicFrame = false;
    
    if (m_graphicFrame)
    {
        delete m_graphicFrame;
        m_graphicFrame = NULL;
    }
    ;
    
    m_has_cxnSp = false;
    
    if (m_cxnSp)
    {
        delete m_cxnSp;
        m_cxnSp = NULL;
    }
    ;
    
    m_has_pic = false;
    
    if (m_pic)
    {
        delete m_pic;
        m_pic = NULL;
    }
    ;
    
    m_has_grpSp = true;
    if (!m_grpSp)
    {
        m_grpSp = new CT_GroupShape();
    }
    return m_grpSp;
    }

    const CT_GroupShape& CT_AbsSizeAnchor::get_grpSp() const
    {    
    if (m_grpSp)
    {
        return *m_grpSp;
    }
    return CT_GroupShape::default_instance();
    }

    bool CT_AbsSizeAnchor::has_graphicFrame() const
    {    
    return m_has_graphicFrame;
    }

    CT_GraphicFrame* CT_AbsSizeAnchor::mutable_graphicFrame()
    {    
    
    m_has_sp = false;
    
    if (m_sp)
    {
        delete m_sp;
        m_sp = NULL;
    }
    ;
    
    m_has_grpSp = false;
    
    if (m_grpSp)
    {
        delete m_grpSp;
        m_grpSp = NULL;
    }
    ;
    
    m_has_cxnSp = false;
    
    if (m_cxnSp)
    {
        delete m_cxnSp;
        m_cxnSp = NULL;
    }
    ;
    
    m_has_pic = false;
    
    if (m_pic)
    {
        delete m_pic;
        m_pic = NULL;
    }
    ;
    
    m_has_graphicFrame = true;
    if (!m_graphicFrame)
    {
        m_graphicFrame = new CT_GraphicFrame();
    }
    return m_graphicFrame;
    }

    const CT_GraphicFrame& CT_AbsSizeAnchor::get_graphicFrame() const
    {    
    if (m_graphicFrame)
    {
        return *m_graphicFrame;
    }
    return CT_GraphicFrame::default_instance();
    }

    bool CT_AbsSizeAnchor::has_cxnSp() const
    {    
    return m_has_cxnSp;
    }

    CT_Connector* CT_AbsSizeAnchor::mutable_cxnSp()
    {    
    
    m_has_sp = false;
    
    if (m_sp)
    {
        delete m_sp;
        m_sp = NULL;
    }
    ;
    
    m_has_grpSp = false;
    
    if (m_grpSp)
    {
        delete m_grpSp;
        m_grpSp = NULL;
    }
    ;
    
    m_has_graphicFrame = false;
    
    if (m_graphicFrame)
    {
        delete m_graphicFrame;
        m_graphicFrame = NULL;
    }
    ;
    
    m_has_pic = false;
    
    if (m_pic)
    {
        delete m_pic;
        m_pic = NULL;
    }
    ;
    
    m_has_cxnSp = true;
    if (!m_cxnSp)
    {
        m_cxnSp = new CT_Connector();
    }
    return m_cxnSp;
    }

    const CT_Connector& CT_AbsSizeAnchor::get_cxnSp() const
    {    
    if (m_cxnSp)
    {
        return *m_cxnSp;
    }
    return CT_Connector::default_instance();
    }

    bool CT_AbsSizeAnchor::has_pic() const
    {    
    return m_has_pic;
    }

    CT_Picture* CT_AbsSizeAnchor::mutable_pic()
    {    
    
    m_has_sp = false;
    
    if (m_sp)
    {
        delete m_sp;
        m_sp = NULL;
    }
    ;
    
    m_has_grpSp = false;
    
    if (m_grpSp)
    {
        delete m_grpSp;
        m_grpSp = NULL;
    }
    ;
    
    m_has_graphicFrame = false;
    
    if (m_graphicFrame)
    {
        delete m_graphicFrame;
        m_graphicFrame = NULL;
    }
    ;
    
    m_has_cxnSp = false;
    
    if (m_cxnSp)
    {
        delete m_cxnSp;
        m_cxnSp = NULL;
    }
    ;
    
    m_has_pic = true;
    if (!m_pic)
    {
        m_pic = new CT_Picture();
    }
    return m_pic;
    }

    const CT_Picture& CT_AbsSizeAnchor::get_pic() const
    {    
    if (m_pic)
    {
        return *m_pic;
    }
    return CT_Picture::default_instance();
    }

    void CT_AbsSizeAnchor::clear()
    {    }

    void CT_AbsSizeAnchor::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
            _outStream << ">";
            
    if (m_has_from)
    {
        m_from->toXmlElem("from", "", _outStream);;
    }
    
    if (m_has_a_ext)
    {
        m_a_ext->toXmlElem("a:ext", "", _outStream);;
    }
     
    if (m_has_sp)
    {
        m_sp->toXmlElem("sp", "", _outStream);;
    }
    
    if (m_has_grpSp)
    {
        m_grpSp->toXmlElem("grpSp", "", _outStream);;
    }
    
    if (m_has_graphicFrame)
    {
        m_graphicFrame->toXmlElem("graphicFrame", "", _outStream);;
    }
    
    if (m_has_cxnSp)
    {
        m_cxnSp->toXmlElem("cxnSp", "", _outStream);;
    }
    
    if (m_has_pic)
    {
        m_pic->toXmlElem("pic", "", _outStream);;
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_AbsSizeAnchor& CT_AbsSizeAnchor::default_instance()
    {    
    if (!CT_AbsSizeAnchor::default_instance_)
    {
        CT_AbsSizeAnchor::default_instance_ = new CT_AbsSizeAnchor();
    }
    return *CT_AbsSizeAnchor::default_instance_;
    }

CT_AbsSizeAnchor* CT_AbsSizeAnchor::default_instance_ = NULL;

    // CT_Drawing
    CT_RelSizeAnchor* CT_Drawing::add_relSizeAnchor()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_RelSizeAnchor* pNewChild = pChildGroup->mutable_relSizeAnchor();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_AbsSizeAnchor* CT_Drawing::add_absSizeAnchor()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_AbsSizeAnchor* pNewChild = pChildGroup->mutable_absSizeAnchor();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    void CT_Drawing::clear()
    {    
    {
        vector<ChildGroup_1*>::iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_1.clear();
    }
    }

    void CT_Drawing::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
            _outStream << ">";
            
    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_relSizeAnchor())
            {
                (*iter)->get_relSizeAnchor().toXmlElem("relSizeAnchor", "", _outStream);
            }
            else if ((*iter)->has_absSizeAnchor())
            {
                (*iter)->get_absSizeAnchor().toXmlElem("absSizeAnchor", "", _outStream);
            }
        }
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_Drawing& CT_Drawing::default_instance()
    {    
    if (!CT_Drawing::default_instance_)
    {
        CT_Drawing::default_instance_ = new CT_Drawing();
    }
    return *CT_Drawing::default_instance_;
    }


    // CT_Drawing::ChildGroup_1
    bool CT_Drawing::ChildGroup_1::has_relSizeAnchor() const
    {    
    return m_has_relSizeAnchor;
    }

    CT_RelSizeAnchor* CT_Drawing::ChildGroup_1::mutable_relSizeAnchor()
    {    
    
    m_has_absSizeAnchor = false;
    
    if (m_absSizeAnchor)
    {
        delete m_absSizeAnchor;
        m_absSizeAnchor = NULL;
    }
    ;
    
    m_has_relSizeAnchor = true;
    if (!m_relSizeAnchor)
    {
        m_relSizeAnchor = new CT_RelSizeAnchor();
    }
    return m_relSizeAnchor;
    }

    const CT_RelSizeAnchor& CT_Drawing::ChildGroup_1::get_relSizeAnchor() const
    {    
    if (m_relSizeAnchor)
    {
        return *m_relSizeAnchor;
    }
    return CT_RelSizeAnchor::default_instance();
    }

    bool CT_Drawing::ChildGroup_1::has_absSizeAnchor() const
    {    
    return m_has_absSizeAnchor;
    }

    CT_AbsSizeAnchor* CT_Drawing::ChildGroup_1::mutable_absSizeAnchor()
    {    
    
    m_has_relSizeAnchor = false;
    
    if (m_relSizeAnchor)
    {
        delete m_relSizeAnchor;
        m_relSizeAnchor = NULL;
    }
    ;
    
    m_has_absSizeAnchor = true;
    if (!m_absSizeAnchor)
    {
        m_absSizeAnchor = new CT_AbsSizeAnchor();
    }
    return m_absSizeAnchor;
    }

    const CT_AbsSizeAnchor& CT_Drawing::ChildGroup_1::get_absSizeAnchor() const
    {    
    if (m_absSizeAnchor)
    {
        return *m_absSizeAnchor;
    }
    return CT_AbsSizeAnchor::default_instance();
    }

CT_Drawing* CT_Drawing::default_instance_ = NULL;
}