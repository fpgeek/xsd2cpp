#include "dml-chartDrawing_xsd.h"
#include <stdlib.h>
#include <sstream>
#include <algorithm>
#include <functional>
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
    
    set_double(_double);
    }
    ST_MarkerCoordinate::~ST_MarkerCoordinate()
{
    clear();    }
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
    CT_ShapeNonVisual::CT_ShapeNonVisual()
    :m_has_cNvPr(false),
    m_cNvPr(NULL),
    m_has_cNvSpPr(false),
    m_cNvSpPr(NULL)
    {
    }
    CT_ShapeNonVisual::~CT_ShapeNonVisual()
{
    clear();    }
    bool CT_ShapeNonVisual::has_cNvPr() const
    {    
    return m_has_cNvPr;
    }

    ns_a::CT_NonVisualDrawingProps* CT_ShapeNonVisual::mutable_cNvPr()
    {    
    m_has_cNvPr = true;
    if (!m_cNvPr)
    {
        m_cNvPr = new ns_a::CT_NonVisualDrawingProps();
    }
    return m_cNvPr;
    }

    const ns_a::CT_NonVisualDrawingProps& CT_ShapeNonVisual::get_cNvPr() const
    {    
    if (m_cNvPr)
    {
        return *m_cNvPr;
    }
    return ns_a::CT_NonVisualDrawingProps::default_instance();
    }

    bool CT_ShapeNonVisual::has_cNvSpPr() const
    {    
    return m_has_cNvSpPr;
    }

    ns_a::CT_NonVisualDrawingShapeProps* CT_ShapeNonVisual::mutable_cNvSpPr()
    {    
    m_has_cNvSpPr = true;
    if (!m_cNvSpPr)
    {
        m_cNvSpPr = new ns_a::CT_NonVisualDrawingShapeProps();
    }
    return m_cNvSpPr;
    }

    const ns_a::CT_NonVisualDrawingShapeProps& CT_ShapeNonVisual::get_cNvSpPr() const
    {    
    if (m_cNvSpPr)
    {
        return *m_cNvSpPr;
    }
    return ns_a::CT_NonVisualDrawingShapeProps::default_instance();
    }

    void CT_ShapeNonVisual::clear()
    {    
    m_has_cNvPr = false;
    
    if (m_cNvPr)
    {
        delete m_cNvPr;
        m_cNvPr = NULL;
    }
    
    
    m_has_cNvSpPr = false;
    
    if (m_cNvSpPr)
    {
        delete m_cNvSpPr;
        m_cNvSpPr = NULL;
    }
    
    }

    void CT_ShapeNonVisual::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
            _outStream << ">";
            
        assert(m_has_cNvPr);
        
    
        assert(m_has_cNvSpPr);
        
    
    if (m_has_cNvPr)
    {
        m_cNvPr->toXmlElem("cdr:cNvPr", "", _outStream);
    }
    
    
    if (m_has_cNvSpPr)
    {
        m_cNvSpPr->toXmlElem("cdr:cNvSpPr", "", _outStream);
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
    CT_Shape::CT_Shape()
    :m_has_nvSpPr(false),
    m_nvSpPr(NULL),
    m_has_spPr(false),
    m_spPr(NULL),
    m_has_style(false),
    m_style(NULL),
    m_has_txBody(false),
    m_txBody(NULL),
    m_has_macro_attr(false),
    m_macro_attr(""),
    m_has_textlink_attr(false),
    m_textlink_attr(""),
    m_has_fLocksText_attr(false),
    m_fLocksText_attr(false),
    m_has_fPublished_attr(false),
    m_fPublished_attr(false)
    {
    }
    CT_Shape::~CT_Shape()
{
    clear();    }
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

    bool CT_Shape::has_spPr() const
    {    
    return m_has_spPr;
    }

    ns_a::CT_ShapeProperties* CT_Shape::mutable_spPr()
    {    
    m_has_spPr = true;
    if (!m_spPr)
    {
        m_spPr = new ns_a::CT_ShapeProperties();
    }
    return m_spPr;
    }

    const ns_a::CT_ShapeProperties& CT_Shape::get_spPr() const
    {    
    if (m_spPr)
    {
        return *m_spPr;
    }
    return ns_a::CT_ShapeProperties::default_instance();
    }

    bool CT_Shape::has_style() const
    {    
    return m_has_style;
    }

    ns_a::CT_ShapeStyle* CT_Shape::mutable_style()
    {    
    m_has_style = true;
    if (!m_style)
    {
        m_style = new ns_a::CT_ShapeStyle();
    }
    return m_style;
    }

    const ns_a::CT_ShapeStyle& CT_Shape::get_style() const
    {    
    if (m_style)
    {
        return *m_style;
    }
    return ns_a::CT_ShapeStyle::default_instance();
    }

    bool CT_Shape::has_txBody() const
    {    
    return m_has_txBody;
    }

    ns_a::CT_TextBody* CT_Shape::mutable_txBody()
    {    
    m_has_txBody = true;
    if (!m_txBody)
    {
        m_txBody = new ns_a::CT_TextBody();
    }
    return m_txBody;
    }

    const ns_a::CT_TextBody& CT_Shape::get_txBody() const
    {    
    if (m_txBody)
    {
        return *m_txBody;
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
    
    m_has_nvSpPr = false;
    
    if (m_nvSpPr)
    {
        delete m_nvSpPr;
        m_nvSpPr = NULL;
    }
    
    
    m_has_spPr = false;
    
    if (m_spPr)
    {
        delete m_spPr;
        m_spPr = NULL;
    }
    
    
    m_has_style = false;
    
    if (m_style)
    {
        delete m_style;
        m_style = NULL;
    }
    
    
    m_has_txBody = false;
    
    if (m_txBody)
    {
        delete m_txBody;
        m_txBody = NULL;
    }
    
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
            
        assert(m_has_nvSpPr);
        
    
        assert(m_has_spPr);
        
    
    if (m_has_nvSpPr)
    {
        m_nvSpPr->toXmlElem("cdr:nvSpPr", "", _outStream);
    }
    
    
    if (m_has_spPr)
    {
        m_spPr->toXmlElem("cdr:spPr", "", _outStream);
    }
    
    
    if (m_has_style)
    {
        m_style->toXmlElem("cdr:style", "", _outStream);
    }
    
    
    if (m_has_txBody)
    {
        m_txBody->toXmlElem("cdr:txBody", "", _outStream);
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
    CT_ConnectorNonVisual::CT_ConnectorNonVisual()
    :m_has_cNvPr(false),
    m_cNvPr(NULL),
    m_has_cNvCxnSpPr(false),
    m_cNvCxnSpPr(NULL)
    {
    }
    CT_ConnectorNonVisual::~CT_ConnectorNonVisual()
{
    clear();    }
    bool CT_ConnectorNonVisual::has_cNvPr() const
    {    
    return m_has_cNvPr;
    }

    ns_a::CT_NonVisualDrawingProps* CT_ConnectorNonVisual::mutable_cNvPr()
    {    
    m_has_cNvPr = true;
    if (!m_cNvPr)
    {
        m_cNvPr = new ns_a::CT_NonVisualDrawingProps();
    }
    return m_cNvPr;
    }

    const ns_a::CT_NonVisualDrawingProps& CT_ConnectorNonVisual::get_cNvPr() const
    {    
    if (m_cNvPr)
    {
        return *m_cNvPr;
    }
    return ns_a::CT_NonVisualDrawingProps::default_instance();
    }

    bool CT_ConnectorNonVisual::has_cNvCxnSpPr() const
    {    
    return m_has_cNvCxnSpPr;
    }

    ns_a::CT_NonVisualConnectorProperties* CT_ConnectorNonVisual::mutable_cNvCxnSpPr()
    {    
    m_has_cNvCxnSpPr = true;
    if (!m_cNvCxnSpPr)
    {
        m_cNvCxnSpPr = new ns_a::CT_NonVisualConnectorProperties();
    }
    return m_cNvCxnSpPr;
    }

    const ns_a::CT_NonVisualConnectorProperties& CT_ConnectorNonVisual::get_cNvCxnSpPr() const
    {    
    if (m_cNvCxnSpPr)
    {
        return *m_cNvCxnSpPr;
    }
    return ns_a::CT_NonVisualConnectorProperties::default_instance();
    }

    void CT_ConnectorNonVisual::clear()
    {    
    m_has_cNvPr = false;
    
    if (m_cNvPr)
    {
        delete m_cNvPr;
        m_cNvPr = NULL;
    }
    
    
    m_has_cNvCxnSpPr = false;
    
    if (m_cNvCxnSpPr)
    {
        delete m_cNvCxnSpPr;
        m_cNvCxnSpPr = NULL;
    }
    
    }

    void CT_ConnectorNonVisual::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
            _outStream << ">";
            
        assert(m_has_cNvPr);
        
    
        assert(m_has_cNvCxnSpPr);
        
    
    if (m_has_cNvPr)
    {
        m_cNvPr->toXmlElem("cdr:cNvPr", "", _outStream);
    }
    
    
    if (m_has_cNvCxnSpPr)
    {
        m_cNvCxnSpPr->toXmlElem("cdr:cNvCxnSpPr", "", _outStream);
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
    CT_Connector::CT_Connector()
    :m_has_nvCxnSpPr(false),
    m_nvCxnSpPr(NULL),
    m_has_spPr(false),
    m_spPr(NULL),
    m_has_style(false),
    m_style(NULL),
    m_has_macro_attr(false),
    m_macro_attr(""),
    m_has_fPublished_attr(false),
    m_fPublished_attr(false)
    {
    }
    CT_Connector::~CT_Connector()
{
    clear();    }
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

    bool CT_Connector::has_spPr() const
    {    
    return m_has_spPr;
    }

    ns_a::CT_ShapeProperties* CT_Connector::mutable_spPr()
    {    
    m_has_spPr = true;
    if (!m_spPr)
    {
        m_spPr = new ns_a::CT_ShapeProperties();
    }
    return m_spPr;
    }

    const ns_a::CT_ShapeProperties& CT_Connector::get_spPr() const
    {    
    if (m_spPr)
    {
        return *m_spPr;
    }
    return ns_a::CT_ShapeProperties::default_instance();
    }

    bool CT_Connector::has_style() const
    {    
    return m_has_style;
    }

    ns_a::CT_ShapeStyle* CT_Connector::mutable_style()
    {    
    m_has_style = true;
    if (!m_style)
    {
        m_style = new ns_a::CT_ShapeStyle();
    }
    return m_style;
    }

    const ns_a::CT_ShapeStyle& CT_Connector::get_style() const
    {    
    if (m_style)
    {
        return *m_style;
    }
    return ns_a::CT_ShapeStyle::default_instance();
    }

    void CT_Connector::clear()
    {    
    m_has_macro_attr = false;
    m_macro_attr.clear();
    
    m_has_fPublished_attr = false;
    m_fPublished_attr = false;
    
    m_has_nvCxnSpPr = false;
    
    if (m_nvCxnSpPr)
    {
        delete m_nvCxnSpPr;
        m_nvCxnSpPr = NULL;
    }
    
    
    m_has_spPr = false;
    
    if (m_spPr)
    {
        delete m_spPr;
        m_spPr = NULL;
    }
    
    
    m_has_style = false;
    
    if (m_style)
    {
        delete m_style;
        m_style = NULL;
    }
    
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
            
        assert(m_has_nvCxnSpPr);
        
    
        assert(m_has_spPr);
        
    
    if (m_has_nvCxnSpPr)
    {
        m_nvCxnSpPr->toXmlElem("cdr:nvCxnSpPr", "", _outStream);
    }
    
    
    if (m_has_spPr)
    {
        m_spPr->toXmlElem("cdr:spPr", "", _outStream);
    }
    
    
    if (m_has_style)
    {
        m_style->toXmlElem("cdr:style", "", _outStream);
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
    CT_PictureNonVisual::CT_PictureNonVisual()
    :m_has_cNvPr(false),
    m_cNvPr(NULL),
    m_has_cNvPicPr(false),
    m_cNvPicPr(NULL)
    {
    }
    CT_PictureNonVisual::~CT_PictureNonVisual()
{
    clear();    }
    bool CT_PictureNonVisual::has_cNvPr() const
    {    
    return m_has_cNvPr;
    }

    ns_a::CT_NonVisualDrawingProps* CT_PictureNonVisual::mutable_cNvPr()
    {    
    m_has_cNvPr = true;
    if (!m_cNvPr)
    {
        m_cNvPr = new ns_a::CT_NonVisualDrawingProps();
    }
    return m_cNvPr;
    }

    const ns_a::CT_NonVisualDrawingProps& CT_PictureNonVisual::get_cNvPr() const
    {    
    if (m_cNvPr)
    {
        return *m_cNvPr;
    }
    return ns_a::CT_NonVisualDrawingProps::default_instance();
    }

    bool CT_PictureNonVisual::has_cNvPicPr() const
    {    
    return m_has_cNvPicPr;
    }

    ns_a::CT_NonVisualPictureProperties* CT_PictureNonVisual::mutable_cNvPicPr()
    {    
    m_has_cNvPicPr = true;
    if (!m_cNvPicPr)
    {
        m_cNvPicPr = new ns_a::CT_NonVisualPictureProperties();
    }
    return m_cNvPicPr;
    }

    const ns_a::CT_NonVisualPictureProperties& CT_PictureNonVisual::get_cNvPicPr() const
    {    
    if (m_cNvPicPr)
    {
        return *m_cNvPicPr;
    }
    return ns_a::CT_NonVisualPictureProperties::default_instance();
    }

    void CT_PictureNonVisual::clear()
    {    
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

    void CT_PictureNonVisual::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
            _outStream << ">";
            
        assert(m_has_cNvPr);
        
    
        assert(m_has_cNvPicPr);
        
    
    if (m_has_cNvPr)
    {
        m_cNvPr->toXmlElem("cdr:cNvPr", "", _outStream);
    }
    
    
    if (m_has_cNvPicPr)
    {
        m_cNvPicPr->toXmlElem("cdr:cNvPicPr", "", _outStream);
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
    CT_Picture::CT_Picture()
    :m_has_nvPicPr(false),
    m_nvPicPr(NULL),
    m_has_blipFill(false),
    m_blipFill(NULL),
    m_has_spPr(false),
    m_spPr(NULL),
    m_has_style(false),
    m_style(NULL),
    m_has_macro_attr(false),
    m_macro_attr(""),
    m_has_fPublished_attr(false),
    m_fPublished_attr(false)
    {
    }
    CT_Picture::~CT_Picture()
{
    clear();    }
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

    bool CT_Picture::has_blipFill() const
    {    
    return m_has_blipFill;
    }

    ns_a::CT_BlipFillProperties* CT_Picture::mutable_blipFill()
    {    
    m_has_blipFill = true;
    if (!m_blipFill)
    {
        m_blipFill = new ns_a::CT_BlipFillProperties();
    }
    return m_blipFill;
    }

    const ns_a::CT_BlipFillProperties& CT_Picture::get_blipFill() const
    {    
    if (m_blipFill)
    {
        return *m_blipFill;
    }
    return ns_a::CT_BlipFillProperties::default_instance();
    }

    bool CT_Picture::has_spPr() const
    {    
    return m_has_spPr;
    }

    ns_a::CT_ShapeProperties* CT_Picture::mutable_spPr()
    {    
    m_has_spPr = true;
    if (!m_spPr)
    {
        m_spPr = new ns_a::CT_ShapeProperties();
    }
    return m_spPr;
    }

    const ns_a::CT_ShapeProperties& CT_Picture::get_spPr() const
    {    
    if (m_spPr)
    {
        return *m_spPr;
    }
    return ns_a::CT_ShapeProperties::default_instance();
    }

    bool CT_Picture::has_style() const
    {    
    return m_has_style;
    }

    ns_a::CT_ShapeStyle* CT_Picture::mutable_style()
    {    
    m_has_style = true;
    if (!m_style)
    {
        m_style = new ns_a::CT_ShapeStyle();
    }
    return m_style;
    }

    const ns_a::CT_ShapeStyle& CT_Picture::get_style() const
    {    
    if (m_style)
    {
        return *m_style;
    }
    return ns_a::CT_ShapeStyle::default_instance();
    }

    void CT_Picture::clear()
    {    
    m_has_macro_attr = false;
    m_macro_attr.clear();
    
    m_has_fPublished_attr = false;
    m_fPublished_attr = false;
    
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
    
    
    m_has_style = false;
    
    if (m_style)
    {
        delete m_style;
        m_style = NULL;
    }
    
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
            
        assert(m_has_nvPicPr);
        
    
        assert(m_has_blipFill);
        
    
        assert(m_has_spPr);
        
    
    if (m_has_nvPicPr)
    {
        m_nvPicPr->toXmlElem("cdr:nvPicPr", "", _outStream);
    }
    
    
    if (m_has_blipFill)
    {
        m_blipFill->toXmlElem("cdr:blipFill", "", _outStream);
    }
    
    
    if (m_has_spPr)
    {
        m_spPr->toXmlElem("cdr:spPr", "", _outStream);
    }
    
    
    if (m_has_style)
    {
        m_style->toXmlElem("cdr:style", "", _outStream);
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
    CT_GraphicFrameNonVisual::CT_GraphicFrameNonVisual()
    :m_has_cNvPr(false),
    m_cNvPr(NULL),
    m_has_cNvGraphicFramePr(false),
    m_cNvGraphicFramePr(NULL)
    {
    }
    CT_GraphicFrameNonVisual::~CT_GraphicFrameNonVisual()
{
    clear();    }
    bool CT_GraphicFrameNonVisual::has_cNvPr() const
    {    
    return m_has_cNvPr;
    }

    ns_a::CT_NonVisualDrawingProps* CT_GraphicFrameNonVisual::mutable_cNvPr()
    {    
    m_has_cNvPr = true;
    if (!m_cNvPr)
    {
        m_cNvPr = new ns_a::CT_NonVisualDrawingProps();
    }
    return m_cNvPr;
    }

    const ns_a::CT_NonVisualDrawingProps& CT_GraphicFrameNonVisual::get_cNvPr() const
    {    
    if (m_cNvPr)
    {
        return *m_cNvPr;
    }
    return ns_a::CT_NonVisualDrawingProps::default_instance();
    }

    bool CT_GraphicFrameNonVisual::has_cNvGraphicFramePr() const
    {    
    return m_has_cNvGraphicFramePr;
    }

    ns_a::CT_NonVisualGraphicFrameProperties* CT_GraphicFrameNonVisual::mutable_cNvGraphicFramePr()
    {    
    m_has_cNvGraphicFramePr = true;
    if (!m_cNvGraphicFramePr)
    {
        m_cNvGraphicFramePr = new ns_a::CT_NonVisualGraphicFrameProperties();
    }
    return m_cNvGraphicFramePr;
    }

    const ns_a::CT_NonVisualGraphicFrameProperties& CT_GraphicFrameNonVisual::get_cNvGraphicFramePr() const
    {    
    if (m_cNvGraphicFramePr)
    {
        return *m_cNvGraphicFramePr;
    }
    return ns_a::CT_NonVisualGraphicFrameProperties::default_instance();
    }

    void CT_GraphicFrameNonVisual::clear()
    {    
    m_has_cNvPr = false;
    
    if (m_cNvPr)
    {
        delete m_cNvPr;
        m_cNvPr = NULL;
    }
    
    
    m_has_cNvGraphicFramePr = false;
    
    if (m_cNvGraphicFramePr)
    {
        delete m_cNvGraphicFramePr;
        m_cNvGraphicFramePr = NULL;
    }
    
    }

    void CT_GraphicFrameNonVisual::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
            _outStream << ">";
            
        assert(m_has_cNvPr);
        
    
        assert(m_has_cNvGraphicFramePr);
        
    
    if (m_has_cNvPr)
    {
        m_cNvPr->toXmlElem("cdr:cNvPr", "", _outStream);
    }
    
    
    if (m_has_cNvGraphicFramePr)
    {
        m_cNvGraphicFramePr->toXmlElem("cdr:cNvGraphicFramePr", "", _outStream);
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
    CT_GraphicFrame::CT_GraphicFrame()
    :m_has_nvGraphicFramePr(false),
    m_nvGraphicFramePr(NULL),
    m_has_xfrm(false),
    m_xfrm(NULL),
    m_has_a_graphic(false),
    m_a_graphic(NULL),
    m_has_macro_attr(false),
    m_macro_attr(""),
    m_has_fPublished_attr(false),
    m_fPublished_attr(false)
    {
    }
    CT_GraphicFrame::~CT_GraphicFrame()
{
    clear();    }
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

    bool CT_GraphicFrame::has_xfrm() const
    {    
    return m_has_xfrm;
    }

    ns_a::CT_Transform2D* CT_GraphicFrame::mutable_xfrm()
    {    
    m_has_xfrm = true;
    if (!m_xfrm)
    {
        m_xfrm = new ns_a::CT_Transform2D();
    }
    return m_xfrm;
    }

    const ns_a::CT_Transform2D& CT_GraphicFrame::get_xfrm() const
    {    
    if (m_xfrm)
    {
        return *m_xfrm;
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
    
    m_has_nvGraphicFramePr = false;
    
    if (m_nvGraphicFramePr)
    {
        delete m_nvGraphicFramePr;
        m_nvGraphicFramePr = NULL;
    }
    
    
    m_has_xfrm = false;
    
    if (m_xfrm)
    {
        delete m_xfrm;
        m_xfrm = NULL;
    }
    
    
    m_has_a_graphic = false;
    
    if (m_a_graphic)
    {
        delete m_a_graphic;
        m_a_graphic = NULL;
    }
    
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
            
        assert(m_has_nvGraphicFramePr);
        
    
        assert(m_has_xfrm);
        
    
        assert(m_has_a_graphic);
        
    
    if (m_has_nvGraphicFramePr)
    {
        m_nvGraphicFramePr->toXmlElem("cdr:nvGraphicFramePr", "", _outStream);
    }
    
    
    if (m_has_xfrm)
    {
        m_xfrm->toXmlElem("cdr:xfrm", "", _outStream);
    }
    
    
    if (m_has_a_graphic)
    {
        m_a_graphic->toXmlElem("a:graphic", "", _outStream);
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
    CT_GroupShapeNonVisual::CT_GroupShapeNonVisual()
    :m_has_cNvPr(false),
    m_cNvPr(NULL),
    m_has_cNvGrpSpPr(false),
    m_cNvGrpSpPr(NULL)
    {
    }
    CT_GroupShapeNonVisual::~CT_GroupShapeNonVisual()
{
    clear();    }
    bool CT_GroupShapeNonVisual::has_cNvPr() const
    {    
    return m_has_cNvPr;
    }

    ns_a::CT_NonVisualDrawingProps* CT_GroupShapeNonVisual::mutable_cNvPr()
    {    
    m_has_cNvPr = true;
    if (!m_cNvPr)
    {
        m_cNvPr = new ns_a::CT_NonVisualDrawingProps();
    }
    return m_cNvPr;
    }

    const ns_a::CT_NonVisualDrawingProps& CT_GroupShapeNonVisual::get_cNvPr() const
    {    
    if (m_cNvPr)
    {
        return *m_cNvPr;
    }
    return ns_a::CT_NonVisualDrawingProps::default_instance();
    }

    bool CT_GroupShapeNonVisual::has_cNvGrpSpPr() const
    {    
    return m_has_cNvGrpSpPr;
    }

    ns_a::CT_NonVisualGroupDrawingShapeProps* CT_GroupShapeNonVisual::mutable_cNvGrpSpPr()
    {    
    m_has_cNvGrpSpPr = true;
    if (!m_cNvGrpSpPr)
    {
        m_cNvGrpSpPr = new ns_a::CT_NonVisualGroupDrawingShapeProps();
    }
    return m_cNvGrpSpPr;
    }

    const ns_a::CT_NonVisualGroupDrawingShapeProps& CT_GroupShapeNonVisual::get_cNvGrpSpPr() const
    {    
    if (m_cNvGrpSpPr)
    {
        return *m_cNvGrpSpPr;
    }
    return ns_a::CT_NonVisualGroupDrawingShapeProps::default_instance();
    }

    void CT_GroupShapeNonVisual::clear()
    {    
    m_has_cNvPr = false;
    
    if (m_cNvPr)
    {
        delete m_cNvPr;
        m_cNvPr = NULL;
    }
    
    
    m_has_cNvGrpSpPr = false;
    
    if (m_cNvGrpSpPr)
    {
        delete m_cNvGrpSpPr;
        m_cNvGrpSpPr = NULL;
    }
    
    }

    void CT_GroupShapeNonVisual::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
            _outStream << ">";
            
        assert(m_has_cNvPr);
        
    
        assert(m_has_cNvGrpSpPr);
        
    
    if (m_has_cNvPr)
    {
        m_cNvPr->toXmlElem("cdr:cNvPr", "", _outStream);
    }
    
    
    if (m_has_cNvGrpSpPr)
    {
        m_cNvGrpSpPr->toXmlElem("cdr:cNvGrpSpPr", "", _outStream);
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
    CT_GroupShape::CT_GroupShape()
    :m_has_nvGrpSpPr(false),
    m_nvGrpSpPr(NULL),
    m_has_grpSpPr(false),
    m_grpSpPr(NULL)
    {
    }
    CT_GroupShape::~CT_GroupShape()
{
    clear();    }
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

    bool CT_GroupShape::has_grpSpPr() const
    {    
    return m_has_grpSpPr;
    }

    ns_a::CT_GroupShapeProperties* CT_GroupShape::mutable_grpSpPr()
    {    
    m_has_grpSpPr = true;
    if (!m_grpSpPr)
    {
        m_grpSpPr = new ns_a::CT_GroupShapeProperties();
    }
    return m_grpSpPr;
    }

    const ns_a::CT_GroupShapeProperties& CT_GroupShape::get_grpSpPr() const
    {    
    if (m_grpSpPr)
    {
        return *m_grpSpPr;
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
    
    
    m_has_grpSpPr = false;
    
    if (m_grpSpPr)
    {
        delete m_grpSpPr;
        m_grpSpPr = NULL;
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
            
        assert(m_has_nvGrpSpPr);
        
    
        assert(m_has_grpSpPr);
        
    
    if (m_has_nvGrpSpPr)
    {
        m_nvGrpSpPr->toXmlElem("cdr:nvGrpSpPr", "", _outStream);
    }
    
    
    if (m_has_grpSpPr)
    {
        m_grpSpPr->toXmlElem("cdr:grpSpPr", "", _outStream);
    }
     
    {
        int elemCnt = count_if(m_childGroupList_1.begin(), m_childGroupList_1.end(), mem_fun(&ChildGroup_1::has_sp));
        assert(1 <= elemCnt && elemCnt <= 1);
    }
    
    
    {
        int elemCnt = count_if(m_childGroupList_1.begin(), m_childGroupList_1.end(), mem_fun(&ChildGroup_1::has_grpSp));
        assert(1 <= elemCnt && elemCnt <= 1);
    }
    
    
    {
        int elemCnt = count_if(m_childGroupList_1.begin(), m_childGroupList_1.end(), mem_fun(&ChildGroup_1::has_graphicFrame));
        assert(1 <= elemCnt && elemCnt <= 1);
    }
    
    
    {
        int elemCnt = count_if(m_childGroupList_1.begin(), m_childGroupList_1.end(), mem_fun(&ChildGroup_1::has_cxnSp));
        assert(1 <= elemCnt && elemCnt <= 1);
    }
    
    
    {
        int elemCnt = count_if(m_childGroupList_1.begin(), m_childGroupList_1.end(), mem_fun(&ChildGroup_1::has_pic));
        assert(1 <= elemCnt && elemCnt <= 1);
    }
    
    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
    if ((*iter)->has_sp())
    {
        (*iter)->get_sp().toXmlElem("cdr:sp", "", _outStream);
    }
    
    
    else if ((*iter)->has_grpSp())
    {
        (*iter)->get_grpSp().toXmlElem("cdr:grpSp", "", _outStream);
    }
    
    
    else if ((*iter)->has_graphicFrame())
    {
        (*iter)->get_graphicFrame().toXmlElem("cdr:graphicFrame", "", _outStream);
    }
    
    
    else if ((*iter)->has_cxnSp())
    {
        (*iter)->get_cxnSp().toXmlElem("cdr:cxnSp", "", _outStream);
    }
    
    
    else if ((*iter)->has_pic())
    {
        (*iter)->get_pic().toXmlElem("cdr:pic", "", _outStream);
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
    CT_GroupShape::ChildGroup_1::ChildGroup_1()
    :m_has_sp(false),
    m_sp(NULL),
    m_has_grpSp(false),
    m_grpSp(NULL),
    m_has_graphicFrame(false),
    m_graphicFrame(NULL),
    m_has_cxnSp(false),
    m_cxnSp(NULL),
    m_has_pic(false),
    m_pic(NULL)
    {
    }
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
    CT_Marker::CT_Marker()
    :m_has_x(false),
    m_x(NULL),
    m_has_y(false),
    m_y(NULL)
    {
    }
    CT_Marker::~CT_Marker()
{
    clear();    }
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
    {    
    m_has_x = false;
    
    if (m_x)
    {
        delete m_x;
        m_x = NULL;
    }
    
    
    m_has_y = false;
    
    if (m_y)
    {
        delete m_y;
        m_y = NULL;
    }
    
    }

    void CT_Marker::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
            _outStream << ">";
            
        assert(m_has_x);
        
    
        assert(m_has_y);
        
    
    if (m_has_x)
    {
        _outStream << "<cdr:x>" << m_x->toString() << "</cdr:x>";
    }
    
    
    if (m_has_y)
    {
        _outStream << "<cdr:y>" << m_y->toString() << "</cdr:y>";
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
    CT_RelSizeAnchor::CT_RelSizeAnchor()
    :m_has_from(false),
    m_from(NULL),
    m_has_to(false),
    m_to(NULL),
    m_has_sp(false),
    m_sp(NULL),
    m_has_grpSp(false),
    m_grpSp(NULL),
    m_has_graphicFrame(false),
    m_graphicFrame(NULL),
    m_has_cxnSp(false),
    m_cxnSp(NULL),
    m_has_pic(false),
    m_pic(NULL)
    {
    }
    CT_RelSizeAnchor::~CT_RelSizeAnchor()
{
    clear();    }
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
    {    
    m_has_from = false;
    
    if (m_from)
    {
        delete m_from;
        m_from = NULL;
    }
    
    
    m_has_to = false;
    
    if (m_to)
    {
        delete m_to;
        m_to = NULL;
    }
    
     
    m_has_sp = false;
    
    if (m_sp)
    {
        delete m_sp;
        m_sp = NULL;
    }
    
    
    m_has_grpSp = false;
    
    if (m_grpSp)
    {
        delete m_grpSp;
        m_grpSp = NULL;
    }
    
    
    m_has_graphicFrame = false;
    
    if (m_graphicFrame)
    {
        delete m_graphicFrame;
        m_graphicFrame = NULL;
    }
    
    
    m_has_cxnSp = false;
    
    if (m_cxnSp)
    {
        delete m_cxnSp;
        m_cxnSp = NULL;
    }
    
    
    m_has_pic = false;
    
    if (m_pic)
    {
        delete m_pic;
        m_pic = NULL;
    }
    
    }

    void CT_RelSizeAnchor::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
            _outStream << ">";
            
        assert(m_has_from);
        
    
        assert(m_has_to);
        
    
    if (m_has_from)
    {
        m_from->toXmlElem("cdr:from", "", _outStream);
    }
    
    
    if (m_has_to)
    {
        m_to->toXmlElem("cdr:to", "", _outStream);
    }
     
    {
        bool elemHasValueList[5] = {m_has_sp, m_has_grpSp, m_has_graphicFrame, m_has_cxnSp, m_has_pic};
        int cnt = count(elemHasValueList, elemHasValueList + 5, true);
        assert(cnt == 1);
    }
    
    
    if (m_has_sp)
    {
        m_sp->toXmlElem("cdr:sp", "", _outStream);
    }
    
    
    if (m_has_grpSp)
    {
        m_grpSp->toXmlElem("cdr:grpSp", "", _outStream);
    }
    
    
    if (m_has_graphicFrame)
    {
        m_graphicFrame->toXmlElem("cdr:graphicFrame", "", _outStream);
    }
    
    
    if (m_has_cxnSp)
    {
        m_cxnSp->toXmlElem("cdr:cxnSp", "", _outStream);
    }
    
    
    if (m_has_pic)
    {
        m_pic->toXmlElem("cdr:pic", "", _outStream);
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
    CT_AbsSizeAnchor::CT_AbsSizeAnchor()
    :m_has_from(false),
    m_from(NULL),
    m_has_ext(false),
    m_ext(NULL),
    m_has_sp(false),
    m_sp(NULL),
    m_has_grpSp(false),
    m_grpSp(NULL),
    m_has_graphicFrame(false),
    m_graphicFrame(NULL),
    m_has_cxnSp(false),
    m_cxnSp(NULL),
    m_has_pic(false),
    m_pic(NULL)
    {
    }
    CT_AbsSizeAnchor::~CT_AbsSizeAnchor()
{
    clear();    }
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

    bool CT_AbsSizeAnchor::has_ext() const
    {    
    return m_has_ext;
    }

    ns_a::CT_PositiveSize2D* CT_AbsSizeAnchor::mutable_ext()
    {    
    m_has_ext = true;
    if (!m_ext)
    {
        m_ext = new ns_a::CT_PositiveSize2D();
    }
    return m_ext;
    }

    const ns_a::CT_PositiveSize2D& CT_AbsSizeAnchor::get_ext() const
    {    
    if (m_ext)
    {
        return *m_ext;
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
    {    
    m_has_from = false;
    
    if (m_from)
    {
        delete m_from;
        m_from = NULL;
    }
    
    
    m_has_ext = false;
    
    if (m_ext)
    {
        delete m_ext;
        m_ext = NULL;
    }
    
     
    m_has_sp = false;
    
    if (m_sp)
    {
        delete m_sp;
        m_sp = NULL;
    }
    
    
    m_has_grpSp = false;
    
    if (m_grpSp)
    {
        delete m_grpSp;
        m_grpSp = NULL;
    }
    
    
    m_has_graphicFrame = false;
    
    if (m_graphicFrame)
    {
        delete m_graphicFrame;
        m_graphicFrame = NULL;
    }
    
    
    m_has_cxnSp = false;
    
    if (m_cxnSp)
    {
        delete m_cxnSp;
        m_cxnSp = NULL;
    }
    
    
    m_has_pic = false;
    
    if (m_pic)
    {
        delete m_pic;
        m_pic = NULL;
    }
    
    }

    void CT_AbsSizeAnchor::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
            _outStream << ">";
            
        assert(m_has_from);
        
    
        assert(m_has_ext);
        
    
    if (m_has_from)
    {
        m_from->toXmlElem("cdr:from", "", _outStream);
    }
    
    
    if (m_has_ext)
    {
        m_ext->toXmlElem("cdr:ext", "", _outStream);
    }
     
    {
        bool elemHasValueList[5] = {m_has_sp, m_has_grpSp, m_has_graphicFrame, m_has_cxnSp, m_has_pic};
        int cnt = count(elemHasValueList, elemHasValueList + 5, true);
        assert(cnt == 1);
    }
    
    
    if (m_has_sp)
    {
        m_sp->toXmlElem("cdr:sp", "", _outStream);
    }
    
    
    if (m_has_grpSp)
    {
        m_grpSp->toXmlElem("cdr:grpSp", "", _outStream);
    }
    
    
    if (m_has_graphicFrame)
    {
        m_graphicFrame->toXmlElem("cdr:graphicFrame", "", _outStream);
    }
    
    
    if (m_has_cxnSp)
    {
        m_cxnSp->toXmlElem("cdr:cxnSp", "", _outStream);
    }
    
    
    if (m_has_pic)
    {
        m_pic->toXmlElem("cdr:pic", "", _outStream);
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
    CT_Drawing::CT_Drawing()

    {
    }
    CT_Drawing::~CT_Drawing()
{
    clear();    }
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
        int elemCnt = count_if(m_childGroupList_1.begin(), m_childGroupList_1.end(), mem_fun(&ChildGroup_1::has_relSizeAnchor));
        assert(1 <= elemCnt && elemCnt <= 1);
    }
    
    
    {
        int elemCnt = count_if(m_childGroupList_1.begin(), m_childGroupList_1.end(), mem_fun(&ChildGroup_1::has_absSizeAnchor));
        assert(1 <= elemCnt && elemCnt <= 1);
    }
    
    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
    if ((*iter)->has_relSizeAnchor())
    {
        (*iter)->get_relSizeAnchor().toXmlElem("cdr:relSizeAnchor", "", _outStream);
    }
    
    
    else if ((*iter)->has_absSizeAnchor())
    {
        (*iter)->get_absSizeAnchor().toXmlElem("cdr:absSizeAnchor", "", _outStream);
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
    CT_Drawing::ChildGroup_1::ChildGroup_1()
    :m_has_relSizeAnchor(false),
    m_relSizeAnchor(NULL),
    m_has_absSizeAnchor(false),
    m_absSizeAnchor(NULL)
    {
    }
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