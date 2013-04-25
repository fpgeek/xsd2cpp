#include "dml-spreadsheetDrawing_xsd.h"
#include <stdlib.h>
#include <sstream>
#include <sstream>
#include <assert.h>
#include "dml-main_xsd.h"
#include "shared-relationshipReference_xsd.h"
namespace ns_xdr {
 using namespace std;

    // Element

    // Attribute

    // ST_ColID
    ST_ColID::ST_ColID()
    :m_has_int(false),
    m_int(0)
    {
    }
    ST_ColID::ST_ColID(const XSD::int_& _int)
    :m_has_int(true)
    {
    
    set_int(m_int);
    }
    bool ST_ColID::has_int() const
    {    
    return m_has_int;
    }

    void ST_ColID::set_int(const XSD::int_& _int)
    {    assert(0 <= _int);
    
    m_has_int = true;
    m_int = _int;
    }

    const XSD::int_& ST_ColID::get_int() const
    {    
    return m_int;
    }

    void ST_ColID::clear()
    {    
    m_has_int = false;
    m_int = 0;;
    }

    void ST_ColID::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_int)
    {
        _outStream << " " << _attrName << "=\"" << m_int << "\"";;
    }
    }

    const ST_ColID& ST_ColID::default_instance()
    {    
    if (!ST_ColID::default_instance_)
    {
        ST_ColID::default_instance_ = new ST_ColID();
    }
    return *ST_ColID::default_instance_;
    }

    std::string ST_ColID::toString() const
    {    
    std::stringstream strStream;
    strStream << get_int();
    return strStream.str();
    }

ST_ColID* ST_ColID::default_instance_ = NULL;

    // ST_RowID
    ST_RowID::ST_RowID()
    :m_has_int(false),
    m_int(0)
    {
    }
    ST_RowID::ST_RowID(const XSD::int_& _int)
    :m_has_int(true)
    {
    
    set_int(m_int);
    }
    bool ST_RowID::has_int() const
    {    
    return m_has_int;
    }

    void ST_RowID::set_int(const XSD::int_& _int)
    {    assert(0 <= _int);
    
    m_has_int = true;
    m_int = _int;
    }

    const XSD::int_& ST_RowID::get_int() const
    {    
    return m_int;
    }

    void ST_RowID::clear()
    {    
    m_has_int = false;
    m_int = 0;;
    }

    void ST_RowID::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_int)
    {
        _outStream << " " << _attrName << "=\"" << m_int << "\"";;
    }
    }

    const ST_RowID& ST_RowID::default_instance()
    {    
    if (!ST_RowID::default_instance_)
    {
        ST_RowID::default_instance_ = new ST_RowID();
    }
    return *ST_RowID::default_instance_;
    }

    std::string ST_RowID::toString() const
    {    
    std::stringstream strStream;
    strStream << get_int();
    return strStream.str();
    }

ST_RowID* ST_RowID::default_instance_ = NULL;

    // ST_EditAs
    ST_EditAs::ST_EditAs()
    :m_has_type(false)
    {
    }
    ST_EditAs::ST_EditAs(const ST_EditAs::Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
    }
    bool ST_EditAs::has_type() const
    {    
    return m_has_type;
    }

    void ST_EditAs::set_type(const ST_EditAs::Type& _type)
    {    
    m_has_type = true;
    m_type = _type;
    }

    const ST_EditAs::Type& ST_EditAs::get_type() const
    {    
                return m_type;
                }

    std::string ST_EditAs::toString() const
    {    
    return ST_EditAs::TypeStrList[m_type];
    }

    void ST_EditAs::clear()
    {    
    m_has_type = false;
    }

    void ST_EditAs::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_type)
    {
    _outStream << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_EditAs& ST_EditAs::default_instance()
    {    
    if (!ST_EditAs::default_instance_)
    {
        ST_EditAs::default_instance_ = new ST_EditAs();
    }
    return *ST_EditAs::default_instance_;
    }

    const std::string ST_EditAs::TypeStrList[] =
    {
        "twoCell",
        "oneCell",
        "absolute"
    };
ST_EditAs* ST_EditAs::default_instance_ = NULL;

    // CT_AnchorClientData
    void CT_AnchorClientData::clear()
    {    
    m_has_fLocksWithSheet_attr = false;
    m_fLocksWithSheet_attr = false;
    
    m_has_fPrintsWithSheet_attr = false;
    m_fPrintsWithSheet_attr = false;
    }

    void CT_AnchorClientData::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
    if (m_has_fLocksWithSheet_attr)
    {
        _outStream << " " << "fLocksWithSheet" << "=\"" << XSD::XMLBooleanStr(m_fLocksWithSheet_attr) << "\"";
    }
    
    
    if (m_has_fPrintsWithSheet_attr)
    {
        _outStream << " " << "fPrintsWithSheet" << "=\"" << XSD::XMLBooleanStr(m_fPrintsWithSheet_attr) << "\"";
    }
    
            _outStream << ">";
            
            _outStream << "</" << _elemName << ">";
                }

    const CT_AnchorClientData& CT_AnchorClientData::default_instance()
    {    
    if (!CT_AnchorClientData::default_instance_)
    {
        CT_AnchorClientData::default_instance_ = new CT_AnchorClientData();
    }
    return *CT_AnchorClientData::default_instance_;
    }

    bool CT_AnchorClientData::has_fLocksWithSheet_attr() const
    {    
    return m_has_fLocksWithSheet_attr;
    }

    void CT_AnchorClientData::set_fLocksWithSheet_attr(const XSD::boolean_& _fLocksWithSheet_attr)
    {    
    m_has_fLocksWithSheet_attr = true;
    m_fLocksWithSheet_attr = _fLocksWithSheet_attr;
    }

    const XSD::boolean_& CT_AnchorClientData::get_fLocksWithSheet_attr() const
    {    
    return m_fLocksWithSheet_attr;
    }

    bool CT_AnchorClientData::has_fPrintsWithSheet_attr() const
    {    
    return m_has_fPrintsWithSheet_attr;
    }

    void CT_AnchorClientData::set_fPrintsWithSheet_attr(const XSD::boolean_& _fPrintsWithSheet_attr)
    {    
    m_has_fPrintsWithSheet_attr = true;
    m_fPrintsWithSheet_attr = _fPrintsWithSheet_attr;
    }

    const XSD::boolean_& CT_AnchorClientData::get_fPrintsWithSheet_attr() const
    {    
    return m_fPrintsWithSheet_attr;
    }

CT_AnchorClientData* CT_AnchorClientData::default_instance_ = NULL;

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

    // CT_GraphicalObjectFrameNonVisual
    bool CT_GraphicalObjectFrameNonVisual::has_a_cNvPr() const
    {    
    return m_has_a_cNvPr;
    }

    ns_a::CT_NonVisualDrawingProps* CT_GraphicalObjectFrameNonVisual::mutable_a_cNvPr()
    {    
    m_has_a_cNvPr = true;
    if (!m_a_cNvPr)
    {
        m_a_cNvPr = new ns_a::CT_NonVisualDrawingProps();
    }
    return m_a_cNvPr;
    }

    const ns_a::CT_NonVisualDrawingProps& CT_GraphicalObjectFrameNonVisual::get_a_cNvPr() const
    {    
    if (m_a_cNvPr)
    {
        return *m_a_cNvPr;
    }
    return ns_a::CT_NonVisualDrawingProps::default_instance();
    }

    bool CT_GraphicalObjectFrameNonVisual::has_a_cNvGraphicFramePr() const
    {    
    return m_has_a_cNvGraphicFramePr;
    }

    ns_a::CT_NonVisualGraphicFrameProperties* CT_GraphicalObjectFrameNonVisual::mutable_a_cNvGraphicFramePr()
    {    
    m_has_a_cNvGraphicFramePr = true;
    if (!m_a_cNvGraphicFramePr)
    {
        m_a_cNvGraphicFramePr = new ns_a::CT_NonVisualGraphicFrameProperties();
    }
    return m_a_cNvGraphicFramePr;
    }

    const ns_a::CT_NonVisualGraphicFrameProperties& CT_GraphicalObjectFrameNonVisual::get_a_cNvGraphicFramePr() const
    {    
    if (m_a_cNvGraphicFramePr)
    {
        return *m_a_cNvGraphicFramePr;
    }
    return ns_a::CT_NonVisualGraphicFrameProperties::default_instance();
    }

    void CT_GraphicalObjectFrameNonVisual::clear()
    {    }

    void CT_GraphicalObjectFrameNonVisual::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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

    const CT_GraphicalObjectFrameNonVisual& CT_GraphicalObjectFrameNonVisual::default_instance()
    {    
    if (!CT_GraphicalObjectFrameNonVisual::default_instance_)
    {
        CT_GraphicalObjectFrameNonVisual::default_instance_ = new CT_GraphicalObjectFrameNonVisual();
    }
    return *CT_GraphicalObjectFrameNonVisual::default_instance_;
    }

CT_GraphicalObjectFrameNonVisual* CT_GraphicalObjectFrameNonVisual::default_instance_ = NULL;

    // CT_GraphicalObjectFrame
    bool CT_GraphicalObjectFrame::has_nvGraphicFramePr() const
    {    
    return m_has_nvGraphicFramePr;
    }

    CT_GraphicalObjectFrameNonVisual* CT_GraphicalObjectFrame::mutable_nvGraphicFramePr()
    {    
    m_has_nvGraphicFramePr = true;
    if (!m_nvGraphicFramePr)
    {
        m_nvGraphicFramePr = new CT_GraphicalObjectFrameNonVisual();
    }
    return m_nvGraphicFramePr;
    }

    const CT_GraphicalObjectFrameNonVisual& CT_GraphicalObjectFrame::get_nvGraphicFramePr() const
    {    
    if (m_nvGraphicFramePr)
    {
        return *m_nvGraphicFramePr;
    }
    return CT_GraphicalObjectFrameNonVisual::default_instance();
    }

    bool CT_GraphicalObjectFrame::has_a_xfrm() const
    {    
    return m_has_a_xfrm;
    }

    ns_a::CT_Transform2D* CT_GraphicalObjectFrame::mutable_a_xfrm()
    {    
    m_has_a_xfrm = true;
    if (!m_a_xfrm)
    {
        m_a_xfrm = new ns_a::CT_Transform2D();
    }
    return m_a_xfrm;
    }

    const ns_a::CT_Transform2D& CT_GraphicalObjectFrame::get_a_xfrm() const
    {    
    if (m_a_xfrm)
    {
        return *m_a_xfrm;
    }
    return ns_a::CT_Transform2D::default_instance();
    }

    bool CT_GraphicalObjectFrame::has_a_graphic() const
    {    
    return m_has_a_graphic;
    }

    ns_a::CT_GraphicalObject* CT_GraphicalObjectFrame::mutable_a_graphic()
    {    
    m_has_a_graphic = true;
    if (!m_a_graphic)
    {
        m_a_graphic = new ns_a::CT_GraphicalObject();
    }
    return m_a_graphic;
    }

    const ns_a::CT_GraphicalObject& CT_GraphicalObjectFrame::get_a_graphic() const
    {    
    if (m_a_graphic)
    {
        return *m_a_graphic;
    }
    return ns_a::CT_GraphicalObject::default_instance();
    }

    void CT_GraphicalObjectFrame::clear()
    {    
    m_has_macro_attr = false;
    m_macro_attr.clear();
    
    m_has_fPublished_attr = false;
    m_fPublished_attr = false;
    }

    void CT_GraphicalObjectFrame::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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

    const CT_GraphicalObjectFrame& CT_GraphicalObjectFrame::default_instance()
    {    
    if (!CT_GraphicalObjectFrame::default_instance_)
    {
        CT_GraphicalObjectFrame::default_instance_ = new CT_GraphicalObjectFrame();
    }
    return *CT_GraphicalObjectFrame::default_instance_;
    }

    bool CT_GraphicalObjectFrame::has_macro_attr() const
    {    
    return m_has_macro_attr;
    }

    void CT_GraphicalObjectFrame::set_macro_attr(const XSD::string_& _macro_attr)
    {    
    m_has_macro_attr = true;
    m_macro_attr = _macro_attr;
    }

    const XSD::string_& CT_GraphicalObjectFrame::get_macro_attr() const
    {    
    return m_macro_attr;
    }

    bool CT_GraphicalObjectFrame::has_fPublished_attr() const
    {    
    return m_has_fPublished_attr;
    }

    void CT_GraphicalObjectFrame::set_fPublished_attr(const XSD::boolean_& _fPublished_attr)
    {    
    m_has_fPublished_attr = true;
    m_fPublished_attr = _fPublished_attr;
    }

    const XSD::boolean_& CT_GraphicalObjectFrame::get_fPublished_attr() const
    {    
    return m_fPublished_attr;
    }

CT_GraphicalObjectFrame* CT_GraphicalObjectFrame::default_instance_ = NULL;

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

    CT_GraphicalObjectFrame* CT_GroupShape::add_graphicFrame()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_GraphicalObjectFrame* pNewChild = pChildGroup->mutable_graphicFrame();
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

    CT_GraphicalObjectFrame* CT_GroupShape::ChildGroup_1::mutable_graphicFrame()
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
        m_graphicFrame = new CT_GraphicalObjectFrame();
    }
    return m_graphicFrame;
    }

    const CT_GraphicalObjectFrame& CT_GroupShape::ChildGroup_1::get_graphicFrame() const
    {    
    if (m_graphicFrame)
    {
        return *m_graphicFrame;
    }
    return CT_GraphicalObjectFrame::default_instance();
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

    // CT_Rel
    void CT_Rel::clear()
    {    
    m_has_r_id_attr = false;
    
    if (m_r_id_attr)
    {
        delete m_r_id_attr;
        m_r_id_attr = NULL;
    }
    
    }

    void CT_Rel::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
    if (m_has_r_id_attr)
    {
        m_r_id_attr->toXmlAttr("id", _outStream);
    }
    
            _outStream << ">";
            
            _outStream << "</" << _elemName << ">";
                }

    const CT_Rel& CT_Rel::default_instance()
    {    
    if (!CT_Rel::default_instance_)
    {
        CT_Rel::default_instance_ = new CT_Rel();
    }
    return *CT_Rel::default_instance_;
    }

    bool CT_Rel::has_r_id_attr() const
    {    
    return m_has_r_id_attr;
    }

    void CT_Rel::set_r_id_attr(const ns_r::ST_RelationshipId& _r_id_attr)
    {    
    m_has_r_id_attr = true;
    m_r_id_attr = new ns_r::ST_RelationshipId(_r_id_attr);
    }

    const ns_r::ST_RelationshipId& CT_Rel::get_r_id_attr() const
    {    
    if (m_r_id_attr)
    {
        return *m_r_id_attr;
    }
    return ns_r::ST_RelationshipId::default_instance();
    }

CT_Rel* CT_Rel::default_instance_ = NULL;

    // CT_Marker
    bool CT_Marker::has_col() const
    {    
    return m_has_col;
    }

    ST_ColID* CT_Marker::mutable_col()
    {    
    m_has_col = true;
    if (!m_col)
    {
        m_col = new ST_ColID();
    }
    return m_col;
    }

    const ST_ColID& CT_Marker::get_col() const
    {    
    if (m_col)
    {
        return *m_col;
    }
    return ST_ColID::default_instance();
    }

    bool CT_Marker::has_a_colOff() const
    {    
    return m_has_a_colOff;
    }

    ns_a::ST_Coordinate* CT_Marker::mutable_a_colOff()
    {    
    m_has_a_colOff = true;
    if (!m_a_colOff)
    {
        m_a_colOff = new ns_a::ST_Coordinate();
    }
    return m_a_colOff;
    }

    const ns_a::ST_Coordinate& CT_Marker::get_a_colOff() const
    {    
    if (m_a_colOff)
    {
        return *m_a_colOff;
    }
    return ns_a::ST_Coordinate::default_instance();
    }

    bool CT_Marker::has_row() const
    {    
    return m_has_row;
    }

    ST_RowID* CT_Marker::mutable_row()
    {    
    m_has_row = true;
    if (!m_row)
    {
        m_row = new ST_RowID();
    }
    return m_row;
    }

    const ST_RowID& CT_Marker::get_row() const
    {    
    if (m_row)
    {
        return *m_row;
    }
    return ST_RowID::default_instance();
    }

    bool CT_Marker::has_a_rowOff() const
    {    
    return m_has_a_rowOff;
    }

    ns_a::ST_Coordinate* CT_Marker::mutable_a_rowOff()
    {    
    m_has_a_rowOff = true;
    if (!m_a_rowOff)
    {
        m_a_rowOff = new ns_a::ST_Coordinate();
    }
    return m_a_rowOff;
    }

    const ns_a::ST_Coordinate& CT_Marker::get_a_rowOff() const
    {    
    if (m_a_rowOff)
    {
        return *m_a_rowOff;
    }
    return ns_a::ST_Coordinate::default_instance();
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
            
    if (m_has_col)
    {
        _outStream << "<col>" << m_col->toString() << "</col>";;
    }
    
    if (m_has_a_colOff)
    {
        _outStream << "<a:colOff>" << m_a_colOff->toString() << "</a:colOff>";;
    }
    
    if (m_has_row)
    {
        _outStream << "<row>" << m_row->toString() << "</row>";;
    }
    
    if (m_has_a_rowOff)
    {
        _outStream << "<a:rowOff>" << m_a_rowOff->toString() << "</a:rowOff>";;
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

    // CT_TwoCellAnchor
    bool CT_TwoCellAnchor::has_from() const
    {    
    return m_has_from;
    }

    CT_Marker* CT_TwoCellAnchor::mutable_from()
    {    
    m_has_from = true;
    if (!m_from)
    {
        m_from = new CT_Marker();
    }
    return m_from;
    }

    const CT_Marker& CT_TwoCellAnchor::get_from() const
    {    
    if (m_from)
    {
        return *m_from;
    }
    return CT_Marker::default_instance();
    }

    bool CT_TwoCellAnchor::has_to() const
    {    
    return m_has_to;
    }

    CT_Marker* CT_TwoCellAnchor::mutable_to()
    {    
    m_has_to = true;
    if (!m_to)
    {
        m_to = new CT_Marker();
    }
    return m_to;
    }

    const CT_Marker& CT_TwoCellAnchor::get_to() const
    {    
    if (m_to)
    {
        return *m_to;
    }
    return CT_Marker::default_instance();
    }

    bool CT_TwoCellAnchor::has_sp() const
    {    
    return m_has_sp;
    }

    CT_Shape* CT_TwoCellAnchor::mutable_sp()
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
    
    m_has_contentPart = false;
    
    if (m_contentPart)
    {
        delete m_contentPart;
        m_contentPart = NULL;
    }
    ;
    
    m_has_sp = true;
    if (!m_sp)
    {
        m_sp = new CT_Shape();
    }
    return m_sp;
    }

    const CT_Shape& CT_TwoCellAnchor::get_sp() const
    {    
    if (m_sp)
    {
        return *m_sp;
    }
    return CT_Shape::default_instance();
    }

    bool CT_TwoCellAnchor::has_grpSp() const
    {    
    return m_has_grpSp;
    }

    CT_GroupShape* CT_TwoCellAnchor::mutable_grpSp()
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
    
    m_has_contentPart = false;
    
    if (m_contentPart)
    {
        delete m_contentPart;
        m_contentPart = NULL;
    }
    ;
    
    m_has_grpSp = true;
    if (!m_grpSp)
    {
        m_grpSp = new CT_GroupShape();
    }
    return m_grpSp;
    }

    const CT_GroupShape& CT_TwoCellAnchor::get_grpSp() const
    {    
    if (m_grpSp)
    {
        return *m_grpSp;
    }
    return CT_GroupShape::default_instance();
    }

    bool CT_TwoCellAnchor::has_graphicFrame() const
    {    
    return m_has_graphicFrame;
    }

    CT_GraphicalObjectFrame* CT_TwoCellAnchor::mutable_graphicFrame()
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
    
    m_has_contentPart = false;
    
    if (m_contentPart)
    {
        delete m_contentPart;
        m_contentPart = NULL;
    }
    ;
    
    m_has_graphicFrame = true;
    if (!m_graphicFrame)
    {
        m_graphicFrame = new CT_GraphicalObjectFrame();
    }
    return m_graphicFrame;
    }

    const CT_GraphicalObjectFrame& CT_TwoCellAnchor::get_graphicFrame() const
    {    
    if (m_graphicFrame)
    {
        return *m_graphicFrame;
    }
    return CT_GraphicalObjectFrame::default_instance();
    }

    bool CT_TwoCellAnchor::has_cxnSp() const
    {    
    return m_has_cxnSp;
    }

    CT_Connector* CT_TwoCellAnchor::mutable_cxnSp()
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
    
    m_has_contentPart = false;
    
    if (m_contentPart)
    {
        delete m_contentPart;
        m_contentPart = NULL;
    }
    ;
    
    m_has_cxnSp = true;
    if (!m_cxnSp)
    {
        m_cxnSp = new CT_Connector();
    }
    return m_cxnSp;
    }

    const CT_Connector& CT_TwoCellAnchor::get_cxnSp() const
    {    
    if (m_cxnSp)
    {
        return *m_cxnSp;
    }
    return CT_Connector::default_instance();
    }

    bool CT_TwoCellAnchor::has_pic() const
    {    
    return m_has_pic;
    }

    CT_Picture* CT_TwoCellAnchor::mutable_pic()
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
    
    m_has_contentPart = false;
    
    if (m_contentPart)
    {
        delete m_contentPart;
        m_contentPart = NULL;
    }
    ;
    
    m_has_pic = true;
    if (!m_pic)
    {
        m_pic = new CT_Picture();
    }
    return m_pic;
    }

    const CT_Picture& CT_TwoCellAnchor::get_pic() const
    {    
    if (m_pic)
    {
        return *m_pic;
    }
    return CT_Picture::default_instance();
    }

    bool CT_TwoCellAnchor::has_contentPart() const
    {    
    return m_has_contentPart;
    }

    CT_Rel* CT_TwoCellAnchor::mutable_contentPart()
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
    
    m_has_pic = false;
    
    if (m_pic)
    {
        delete m_pic;
        m_pic = NULL;
    }
    ;
    
    m_has_contentPart = true;
    if (!m_contentPart)
    {
        m_contentPart = new CT_Rel();
    }
    return m_contentPart;
    }

    const CT_Rel& CT_TwoCellAnchor::get_contentPart() const
    {    
    if (m_contentPart)
    {
        return *m_contentPart;
    }
    return CT_Rel::default_instance();
    }

    bool CT_TwoCellAnchor::has_clientData() const
    {    
    return m_has_clientData;
    }

    CT_AnchorClientData* CT_TwoCellAnchor::mutable_clientData()
    {    
    m_has_clientData = true;
    if (!m_clientData)
    {
        m_clientData = new CT_AnchorClientData();
    }
    return m_clientData;
    }

    const CT_AnchorClientData& CT_TwoCellAnchor::get_clientData() const
    {    
    if (m_clientData)
    {
        return *m_clientData;
    }
    return CT_AnchorClientData::default_instance();
    }

    void CT_TwoCellAnchor::clear()
    {    
    m_has_editAs_attr = false;
    
    if (m_editAs_attr)
    {
        delete m_editAs_attr;
        m_editAs_attr = NULL;
    }
    
    }

    void CT_TwoCellAnchor::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
    if (m_has_editAs_attr)
    {
        m_editAs_attr->toXmlAttr("editAs", _outStream);
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
    
    if (m_has_contentPart)
    {
        m_contentPart->toXmlElem("contentPart", "", _outStream);;
    }
     
    if (m_has_clientData)
    {
        m_clientData->toXmlElem("clientData", "", _outStream);;
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_TwoCellAnchor& CT_TwoCellAnchor::default_instance()
    {    
    if (!CT_TwoCellAnchor::default_instance_)
    {
        CT_TwoCellAnchor::default_instance_ = new CT_TwoCellAnchor();
    }
    return *CT_TwoCellAnchor::default_instance_;
    }

    bool CT_TwoCellAnchor::has_editAs_attr() const
    {    
    return m_has_editAs_attr;
    }

    void CT_TwoCellAnchor::set_editAs_attr(const ST_EditAs& _editAs_attr)
    {    
    m_has_editAs_attr = true;
    m_editAs_attr = new ST_EditAs(_editAs_attr);
    }

    const ST_EditAs& CT_TwoCellAnchor::get_editAs_attr() const
    {    
    if (m_editAs_attr)
    {
        return *m_editAs_attr;
    }
    return ST_EditAs::default_instance();
    }

CT_TwoCellAnchor* CT_TwoCellAnchor::default_instance_ = NULL;

    // CT_OneCellAnchor
    bool CT_OneCellAnchor::has_from() const
    {    
    return m_has_from;
    }

    CT_Marker* CT_OneCellAnchor::mutable_from()
    {    
    m_has_from = true;
    if (!m_from)
    {
        m_from = new CT_Marker();
    }
    return m_from;
    }

    const CT_Marker& CT_OneCellAnchor::get_from() const
    {    
    if (m_from)
    {
        return *m_from;
    }
    return CT_Marker::default_instance();
    }

    bool CT_OneCellAnchor::has_a_ext() const
    {    
    return m_has_a_ext;
    }

    ns_a::CT_PositiveSize2D* CT_OneCellAnchor::mutable_a_ext()
    {    
    m_has_a_ext = true;
    if (!m_a_ext)
    {
        m_a_ext = new ns_a::CT_PositiveSize2D();
    }
    return m_a_ext;
    }

    const ns_a::CT_PositiveSize2D& CT_OneCellAnchor::get_a_ext() const
    {    
    if (m_a_ext)
    {
        return *m_a_ext;
    }
    return ns_a::CT_PositiveSize2D::default_instance();
    }

    bool CT_OneCellAnchor::has_sp() const
    {    
    return m_has_sp;
    }

    CT_Shape* CT_OneCellAnchor::mutable_sp()
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
    
    m_has_contentPart = false;
    
    if (m_contentPart)
    {
        delete m_contentPart;
        m_contentPart = NULL;
    }
    ;
    
    m_has_sp = true;
    if (!m_sp)
    {
        m_sp = new CT_Shape();
    }
    return m_sp;
    }

    const CT_Shape& CT_OneCellAnchor::get_sp() const
    {    
    if (m_sp)
    {
        return *m_sp;
    }
    return CT_Shape::default_instance();
    }

    bool CT_OneCellAnchor::has_grpSp() const
    {    
    return m_has_grpSp;
    }

    CT_GroupShape* CT_OneCellAnchor::mutable_grpSp()
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
    
    m_has_contentPart = false;
    
    if (m_contentPart)
    {
        delete m_contentPart;
        m_contentPart = NULL;
    }
    ;
    
    m_has_grpSp = true;
    if (!m_grpSp)
    {
        m_grpSp = new CT_GroupShape();
    }
    return m_grpSp;
    }

    const CT_GroupShape& CT_OneCellAnchor::get_grpSp() const
    {    
    if (m_grpSp)
    {
        return *m_grpSp;
    }
    return CT_GroupShape::default_instance();
    }

    bool CT_OneCellAnchor::has_graphicFrame() const
    {    
    return m_has_graphicFrame;
    }

    CT_GraphicalObjectFrame* CT_OneCellAnchor::mutable_graphicFrame()
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
    
    m_has_contentPart = false;
    
    if (m_contentPart)
    {
        delete m_contentPart;
        m_contentPart = NULL;
    }
    ;
    
    m_has_graphicFrame = true;
    if (!m_graphicFrame)
    {
        m_graphicFrame = new CT_GraphicalObjectFrame();
    }
    return m_graphicFrame;
    }

    const CT_GraphicalObjectFrame& CT_OneCellAnchor::get_graphicFrame() const
    {    
    if (m_graphicFrame)
    {
        return *m_graphicFrame;
    }
    return CT_GraphicalObjectFrame::default_instance();
    }

    bool CT_OneCellAnchor::has_cxnSp() const
    {    
    return m_has_cxnSp;
    }

    CT_Connector* CT_OneCellAnchor::mutable_cxnSp()
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
    
    m_has_contentPart = false;
    
    if (m_contentPart)
    {
        delete m_contentPart;
        m_contentPart = NULL;
    }
    ;
    
    m_has_cxnSp = true;
    if (!m_cxnSp)
    {
        m_cxnSp = new CT_Connector();
    }
    return m_cxnSp;
    }

    const CT_Connector& CT_OneCellAnchor::get_cxnSp() const
    {    
    if (m_cxnSp)
    {
        return *m_cxnSp;
    }
    return CT_Connector::default_instance();
    }

    bool CT_OneCellAnchor::has_pic() const
    {    
    return m_has_pic;
    }

    CT_Picture* CT_OneCellAnchor::mutable_pic()
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
    
    m_has_contentPart = false;
    
    if (m_contentPart)
    {
        delete m_contentPart;
        m_contentPart = NULL;
    }
    ;
    
    m_has_pic = true;
    if (!m_pic)
    {
        m_pic = new CT_Picture();
    }
    return m_pic;
    }

    const CT_Picture& CT_OneCellAnchor::get_pic() const
    {    
    if (m_pic)
    {
        return *m_pic;
    }
    return CT_Picture::default_instance();
    }

    bool CT_OneCellAnchor::has_contentPart() const
    {    
    return m_has_contentPart;
    }

    CT_Rel* CT_OneCellAnchor::mutable_contentPart()
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
    
    m_has_pic = false;
    
    if (m_pic)
    {
        delete m_pic;
        m_pic = NULL;
    }
    ;
    
    m_has_contentPart = true;
    if (!m_contentPart)
    {
        m_contentPart = new CT_Rel();
    }
    return m_contentPart;
    }

    const CT_Rel& CT_OneCellAnchor::get_contentPart() const
    {    
    if (m_contentPart)
    {
        return *m_contentPart;
    }
    return CT_Rel::default_instance();
    }

    bool CT_OneCellAnchor::has_clientData() const
    {    
    return m_has_clientData;
    }

    CT_AnchorClientData* CT_OneCellAnchor::mutable_clientData()
    {    
    m_has_clientData = true;
    if (!m_clientData)
    {
        m_clientData = new CT_AnchorClientData();
    }
    return m_clientData;
    }

    const CT_AnchorClientData& CT_OneCellAnchor::get_clientData() const
    {    
    if (m_clientData)
    {
        return *m_clientData;
    }
    return CT_AnchorClientData::default_instance();
    }

    void CT_OneCellAnchor::clear()
    {    }

    void CT_OneCellAnchor::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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
    
    if (m_has_contentPart)
    {
        m_contentPart->toXmlElem("contentPart", "", _outStream);;
    }
     
    if (m_has_clientData)
    {
        m_clientData->toXmlElem("clientData", "", _outStream);;
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_OneCellAnchor& CT_OneCellAnchor::default_instance()
    {    
    if (!CT_OneCellAnchor::default_instance_)
    {
        CT_OneCellAnchor::default_instance_ = new CT_OneCellAnchor();
    }
    return *CT_OneCellAnchor::default_instance_;
    }

CT_OneCellAnchor* CT_OneCellAnchor::default_instance_ = NULL;

    // CT_AbsoluteAnchor
    bool CT_AbsoluteAnchor::has_a_pos() const
    {    
    return m_has_a_pos;
    }

    ns_a::CT_Point2D* CT_AbsoluteAnchor::mutable_a_pos()
    {    
    m_has_a_pos = true;
    if (!m_a_pos)
    {
        m_a_pos = new ns_a::CT_Point2D();
    }
    return m_a_pos;
    }

    const ns_a::CT_Point2D& CT_AbsoluteAnchor::get_a_pos() const
    {    
    if (m_a_pos)
    {
        return *m_a_pos;
    }
    return ns_a::CT_Point2D::default_instance();
    }

    bool CT_AbsoluteAnchor::has_a_ext() const
    {    
    return m_has_a_ext;
    }

    ns_a::CT_PositiveSize2D* CT_AbsoluteAnchor::mutable_a_ext()
    {    
    m_has_a_ext = true;
    if (!m_a_ext)
    {
        m_a_ext = new ns_a::CT_PositiveSize2D();
    }
    return m_a_ext;
    }

    const ns_a::CT_PositiveSize2D& CT_AbsoluteAnchor::get_a_ext() const
    {    
    if (m_a_ext)
    {
        return *m_a_ext;
    }
    return ns_a::CT_PositiveSize2D::default_instance();
    }

    bool CT_AbsoluteAnchor::has_sp() const
    {    
    return m_has_sp;
    }

    CT_Shape* CT_AbsoluteAnchor::mutable_sp()
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
    
    m_has_contentPart = false;
    
    if (m_contentPart)
    {
        delete m_contentPart;
        m_contentPart = NULL;
    }
    ;
    
    m_has_sp = true;
    if (!m_sp)
    {
        m_sp = new CT_Shape();
    }
    return m_sp;
    }

    const CT_Shape& CT_AbsoluteAnchor::get_sp() const
    {    
    if (m_sp)
    {
        return *m_sp;
    }
    return CT_Shape::default_instance();
    }

    bool CT_AbsoluteAnchor::has_grpSp() const
    {    
    return m_has_grpSp;
    }

    CT_GroupShape* CT_AbsoluteAnchor::mutable_grpSp()
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
    
    m_has_contentPart = false;
    
    if (m_contentPart)
    {
        delete m_contentPart;
        m_contentPart = NULL;
    }
    ;
    
    m_has_grpSp = true;
    if (!m_grpSp)
    {
        m_grpSp = new CT_GroupShape();
    }
    return m_grpSp;
    }

    const CT_GroupShape& CT_AbsoluteAnchor::get_grpSp() const
    {    
    if (m_grpSp)
    {
        return *m_grpSp;
    }
    return CT_GroupShape::default_instance();
    }

    bool CT_AbsoluteAnchor::has_graphicFrame() const
    {    
    return m_has_graphicFrame;
    }

    CT_GraphicalObjectFrame* CT_AbsoluteAnchor::mutable_graphicFrame()
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
    
    m_has_contentPart = false;
    
    if (m_contentPart)
    {
        delete m_contentPart;
        m_contentPart = NULL;
    }
    ;
    
    m_has_graphicFrame = true;
    if (!m_graphicFrame)
    {
        m_graphicFrame = new CT_GraphicalObjectFrame();
    }
    return m_graphicFrame;
    }

    const CT_GraphicalObjectFrame& CT_AbsoluteAnchor::get_graphicFrame() const
    {    
    if (m_graphicFrame)
    {
        return *m_graphicFrame;
    }
    return CT_GraphicalObjectFrame::default_instance();
    }

    bool CT_AbsoluteAnchor::has_cxnSp() const
    {    
    return m_has_cxnSp;
    }

    CT_Connector* CT_AbsoluteAnchor::mutable_cxnSp()
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
    
    m_has_contentPart = false;
    
    if (m_contentPart)
    {
        delete m_contentPart;
        m_contentPart = NULL;
    }
    ;
    
    m_has_cxnSp = true;
    if (!m_cxnSp)
    {
        m_cxnSp = new CT_Connector();
    }
    return m_cxnSp;
    }

    const CT_Connector& CT_AbsoluteAnchor::get_cxnSp() const
    {    
    if (m_cxnSp)
    {
        return *m_cxnSp;
    }
    return CT_Connector::default_instance();
    }

    bool CT_AbsoluteAnchor::has_pic() const
    {    
    return m_has_pic;
    }

    CT_Picture* CT_AbsoluteAnchor::mutable_pic()
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
    
    m_has_contentPart = false;
    
    if (m_contentPart)
    {
        delete m_contentPart;
        m_contentPart = NULL;
    }
    ;
    
    m_has_pic = true;
    if (!m_pic)
    {
        m_pic = new CT_Picture();
    }
    return m_pic;
    }

    const CT_Picture& CT_AbsoluteAnchor::get_pic() const
    {    
    if (m_pic)
    {
        return *m_pic;
    }
    return CT_Picture::default_instance();
    }

    bool CT_AbsoluteAnchor::has_contentPart() const
    {    
    return m_has_contentPart;
    }

    CT_Rel* CT_AbsoluteAnchor::mutable_contentPart()
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
    
    m_has_pic = false;
    
    if (m_pic)
    {
        delete m_pic;
        m_pic = NULL;
    }
    ;
    
    m_has_contentPart = true;
    if (!m_contentPart)
    {
        m_contentPart = new CT_Rel();
    }
    return m_contentPart;
    }

    const CT_Rel& CT_AbsoluteAnchor::get_contentPart() const
    {    
    if (m_contentPart)
    {
        return *m_contentPart;
    }
    return CT_Rel::default_instance();
    }

    bool CT_AbsoluteAnchor::has_clientData() const
    {    
    return m_has_clientData;
    }

    CT_AnchorClientData* CT_AbsoluteAnchor::mutable_clientData()
    {    
    m_has_clientData = true;
    if (!m_clientData)
    {
        m_clientData = new CT_AnchorClientData();
    }
    return m_clientData;
    }

    const CT_AnchorClientData& CT_AbsoluteAnchor::get_clientData() const
    {    
    if (m_clientData)
    {
        return *m_clientData;
    }
    return CT_AnchorClientData::default_instance();
    }

    void CT_AbsoluteAnchor::clear()
    {    }

    void CT_AbsoluteAnchor::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
            _outStream << ">";
            
    if (m_has_a_pos)
    {
        m_a_pos->toXmlElem("a:pos", "", _outStream);;
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
    
    if (m_has_contentPart)
    {
        m_contentPart->toXmlElem("contentPart", "", _outStream);;
    }
     
    if (m_has_clientData)
    {
        m_clientData->toXmlElem("clientData", "", _outStream);;
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_AbsoluteAnchor& CT_AbsoluteAnchor::default_instance()
    {    
    if (!CT_AbsoluteAnchor::default_instance_)
    {
        CT_AbsoluteAnchor::default_instance_ = new CT_AbsoluteAnchor();
    }
    return *CT_AbsoluteAnchor::default_instance_;
    }

CT_AbsoluteAnchor* CT_AbsoluteAnchor::default_instance_ = NULL;

    // CT_Drawing
    CT_TwoCellAnchor* CT_Drawing::add_twoCellAnchor()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_TwoCellAnchor* pNewChild = pChildGroup->mutable_twoCellAnchor();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_OneCellAnchor* CT_Drawing::add_oneCellAnchor()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_OneCellAnchor* pNewChild = pChildGroup->mutable_oneCellAnchor();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_AbsoluteAnchor* CT_Drawing::add_absoluteAnchor()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_AbsoluteAnchor* pNewChild = pChildGroup->mutable_absoluteAnchor();
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
            if ((*iter)->has_twoCellAnchor())
            {
                (*iter)->get_twoCellAnchor().toXmlElem("twoCellAnchor", "", _outStream);
            }
            else if ((*iter)->has_oneCellAnchor())
            {
                (*iter)->get_oneCellAnchor().toXmlElem("oneCellAnchor", "", _outStream);
            }
            else if ((*iter)->has_absoluteAnchor())
            {
                (*iter)->get_absoluteAnchor().toXmlElem("absoluteAnchor", "", _outStream);
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
    bool CT_Drawing::ChildGroup_1::has_twoCellAnchor() const
    {    
    return m_has_twoCellAnchor;
    }

    CT_TwoCellAnchor* CT_Drawing::ChildGroup_1::mutable_twoCellAnchor()
    {    
    
    m_has_oneCellAnchor = false;
    
    if (m_oneCellAnchor)
    {
        delete m_oneCellAnchor;
        m_oneCellAnchor = NULL;
    }
    ;
    
    m_has_absoluteAnchor = false;
    
    if (m_absoluteAnchor)
    {
        delete m_absoluteAnchor;
        m_absoluteAnchor = NULL;
    }
    ;
    
    m_has_twoCellAnchor = true;
    if (!m_twoCellAnchor)
    {
        m_twoCellAnchor = new CT_TwoCellAnchor();
    }
    return m_twoCellAnchor;
    }

    const CT_TwoCellAnchor& CT_Drawing::ChildGroup_1::get_twoCellAnchor() const
    {    
    if (m_twoCellAnchor)
    {
        return *m_twoCellAnchor;
    }
    return CT_TwoCellAnchor::default_instance();
    }

    bool CT_Drawing::ChildGroup_1::has_oneCellAnchor() const
    {    
    return m_has_oneCellAnchor;
    }

    CT_OneCellAnchor* CT_Drawing::ChildGroup_1::mutable_oneCellAnchor()
    {    
    
    m_has_twoCellAnchor = false;
    
    if (m_twoCellAnchor)
    {
        delete m_twoCellAnchor;
        m_twoCellAnchor = NULL;
    }
    ;
    
    m_has_absoluteAnchor = false;
    
    if (m_absoluteAnchor)
    {
        delete m_absoluteAnchor;
        m_absoluteAnchor = NULL;
    }
    ;
    
    m_has_oneCellAnchor = true;
    if (!m_oneCellAnchor)
    {
        m_oneCellAnchor = new CT_OneCellAnchor();
    }
    return m_oneCellAnchor;
    }

    const CT_OneCellAnchor& CT_Drawing::ChildGroup_1::get_oneCellAnchor() const
    {    
    if (m_oneCellAnchor)
    {
        return *m_oneCellAnchor;
    }
    return CT_OneCellAnchor::default_instance();
    }

    bool CT_Drawing::ChildGroup_1::has_absoluteAnchor() const
    {    
    return m_has_absoluteAnchor;
    }

    CT_AbsoluteAnchor* CT_Drawing::ChildGroup_1::mutable_absoluteAnchor()
    {    
    
    m_has_twoCellAnchor = false;
    
    if (m_twoCellAnchor)
    {
        delete m_twoCellAnchor;
        m_twoCellAnchor = NULL;
    }
    ;
    
    m_has_oneCellAnchor = false;
    
    if (m_oneCellAnchor)
    {
        delete m_oneCellAnchor;
        m_oneCellAnchor = NULL;
    }
    ;
    
    m_has_absoluteAnchor = true;
    if (!m_absoluteAnchor)
    {
        m_absoluteAnchor = new CT_AbsoluteAnchor();
    }
    return m_absoluteAnchor;
    }

    const CT_AbsoluteAnchor& CT_Drawing::ChildGroup_1::get_absoluteAnchor() const
    {    
    if (m_absoluteAnchor)
    {
        return *m_absoluteAnchor;
    }
    return CT_AbsoluteAnchor::default_instance();
    }

CT_Drawing* CT_Drawing::default_instance_ = NULL;

    // from_element
    bool from_element::has_col() const
    {    
    return m_has_col;
    }

    ST_ColID* from_element::mutable_col()
    {    
    m_has_col = true;
    if (!m_col)
    {
        m_col = new ST_ColID();
    }
    return m_col;
    }

    const ST_ColID& from_element::get_col() const
    {    
    if (m_col)
    {
        return *m_col;
    }
    return ST_ColID::default_instance();
    }

    bool from_element::has_a_colOff() const
    {    
    return m_has_a_colOff;
    }

    ns_a::ST_Coordinate* from_element::mutable_a_colOff()
    {    
    m_has_a_colOff = true;
    if (!m_a_colOff)
    {
        m_a_colOff = new ns_a::ST_Coordinate();
    }
    return m_a_colOff;
    }

    const ns_a::ST_Coordinate& from_element::get_a_colOff() const
    {    
    if (m_a_colOff)
    {
        return *m_a_colOff;
    }
    return ns_a::ST_Coordinate::default_instance();
    }

    bool from_element::has_row() const
    {    
    return m_has_row;
    }

    ST_RowID* from_element::mutable_row()
    {    
    m_has_row = true;
    if (!m_row)
    {
        m_row = new ST_RowID();
    }
    return m_row;
    }

    const ST_RowID& from_element::get_row() const
    {    
    if (m_row)
    {
        return *m_row;
    }
    return ST_RowID::default_instance();
    }

    bool from_element::has_a_rowOff() const
    {    
    return m_has_a_rowOff;
    }

    ns_a::ST_Coordinate* from_element::mutable_a_rowOff()
    {    
    m_has_a_rowOff = true;
    if (!m_a_rowOff)
    {
        m_a_rowOff = new ns_a::ST_Coordinate();
    }
    return m_a_rowOff;
    }

    const ns_a::ST_Coordinate& from_element::get_a_rowOff() const
    {    
    if (m_a_rowOff)
    {
        return *m_a_rowOff;
    }
    return ns_a::ST_Coordinate::default_instance();
    }

    void from_element::clear()
    {    }

    void from_element::toXml(std::ostream& _outStream) const
    {    
    _outStream << "<from";
    
    _outStream << " " << "xmlns:xdr=\"http://schemas.openxmlformats.org/drawingml/2006/spreadsheetDrawing\"";
    _outStream << " " << "xmlns:r=\"http://schemas.openxmlformats.org/officeDocument/2006/relationships\"";
    _outStream << " " << "xmlns:a=\"http://schemas.openxmlformats.org/drawingml/2006/main\"";
    
    _outStream << ">";
    
    if (m_has_col)
    {
        _outStream << "<col>" << m_col->toString() << "</col>";;
    }
    
    if (m_has_a_colOff)
    {
        _outStream << "<a:colOff>" << m_a_colOff->toString() << "</a:colOff>";;
    }
    
    if (m_has_row)
    {
        _outStream << "<row>" << m_row->toString() << "</row>";;
    }
    
    if (m_has_a_rowOff)
    {
        _outStream << "<a:rowOff>" << m_a_rowOff->toString() << "</a:rowOff>";;
    }
    
    _outStream << "</from>";
    }

    const from_element& from_element::default_instance()
    {    
    if (!from_element::default_instance_)
    {
        from_element::default_instance_ = new from_element();
    }
    return *from_element::default_instance_;
    }

from_element* from_element::default_instance_ = NULL;

    // to_element
    bool to_element::has_col() const
    {    
    return m_has_col;
    }

    ST_ColID* to_element::mutable_col()
    {    
    m_has_col = true;
    if (!m_col)
    {
        m_col = new ST_ColID();
    }
    return m_col;
    }

    const ST_ColID& to_element::get_col() const
    {    
    if (m_col)
    {
        return *m_col;
    }
    return ST_ColID::default_instance();
    }

    bool to_element::has_a_colOff() const
    {    
    return m_has_a_colOff;
    }

    ns_a::ST_Coordinate* to_element::mutable_a_colOff()
    {    
    m_has_a_colOff = true;
    if (!m_a_colOff)
    {
        m_a_colOff = new ns_a::ST_Coordinate();
    }
    return m_a_colOff;
    }

    const ns_a::ST_Coordinate& to_element::get_a_colOff() const
    {    
    if (m_a_colOff)
    {
        return *m_a_colOff;
    }
    return ns_a::ST_Coordinate::default_instance();
    }

    bool to_element::has_row() const
    {    
    return m_has_row;
    }

    ST_RowID* to_element::mutable_row()
    {    
    m_has_row = true;
    if (!m_row)
    {
        m_row = new ST_RowID();
    }
    return m_row;
    }

    const ST_RowID& to_element::get_row() const
    {    
    if (m_row)
    {
        return *m_row;
    }
    return ST_RowID::default_instance();
    }

    bool to_element::has_a_rowOff() const
    {    
    return m_has_a_rowOff;
    }

    ns_a::ST_Coordinate* to_element::mutable_a_rowOff()
    {    
    m_has_a_rowOff = true;
    if (!m_a_rowOff)
    {
        m_a_rowOff = new ns_a::ST_Coordinate();
    }
    return m_a_rowOff;
    }

    const ns_a::ST_Coordinate& to_element::get_a_rowOff() const
    {    
    if (m_a_rowOff)
    {
        return *m_a_rowOff;
    }
    return ns_a::ST_Coordinate::default_instance();
    }

    void to_element::clear()
    {    }

    void to_element::toXml(std::ostream& _outStream) const
    {    
    _outStream << "<to";
    
    _outStream << " " << "xmlns:xdr=\"http://schemas.openxmlformats.org/drawingml/2006/spreadsheetDrawing\"";
    _outStream << " " << "xmlns:r=\"http://schemas.openxmlformats.org/officeDocument/2006/relationships\"";
    _outStream << " " << "xmlns:a=\"http://schemas.openxmlformats.org/drawingml/2006/main\"";
    
    _outStream << ">";
    
    if (m_has_col)
    {
        _outStream << "<col>" << m_col->toString() << "</col>";;
    }
    
    if (m_has_a_colOff)
    {
        _outStream << "<a:colOff>" << m_a_colOff->toString() << "</a:colOff>";;
    }
    
    if (m_has_row)
    {
        _outStream << "<row>" << m_row->toString() << "</row>";;
    }
    
    if (m_has_a_rowOff)
    {
        _outStream << "<a:rowOff>" << m_a_rowOff->toString() << "</a:rowOff>";;
    }
    
    _outStream << "</to>";
    }

    const to_element& to_element::default_instance()
    {    
    if (!to_element::default_instance_)
    {
        to_element::default_instance_ = new to_element();
    }
    return *to_element::default_instance_;
    }

to_element* to_element::default_instance_ = NULL;

    // wsDr_element
    CT_TwoCellAnchor* wsDr_element::add_twoCellAnchor()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_TwoCellAnchor* pNewChild = pChildGroup->mutable_twoCellAnchor();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_OneCellAnchor* wsDr_element::add_oneCellAnchor()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_OneCellAnchor* pNewChild = pChildGroup->mutable_oneCellAnchor();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_AbsoluteAnchor* wsDr_element::add_absoluteAnchor()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_AbsoluteAnchor* pNewChild = pChildGroup->mutable_absoluteAnchor();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    void wsDr_element::clear()
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

    void wsDr_element::toXml(std::ostream& _outStream) const
    {    
    _outStream << "<wsDr";
    
    _outStream << " " << "xmlns:xdr=\"http://schemas.openxmlformats.org/drawingml/2006/spreadsheetDrawing\"";
    _outStream << " " << "xmlns:r=\"http://schemas.openxmlformats.org/officeDocument/2006/relationships\"";
    _outStream << " " << "xmlns:a=\"http://schemas.openxmlformats.org/drawingml/2006/main\"";
    
    _outStream << ">";
    
    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_twoCellAnchor())
            {
                (*iter)->get_twoCellAnchor().toXmlElem("twoCellAnchor", "", _outStream);
            }
            else if ((*iter)->has_oneCellAnchor())
            {
                (*iter)->get_oneCellAnchor().toXmlElem("oneCellAnchor", "", _outStream);
            }
            else if ((*iter)->has_absoluteAnchor())
            {
                (*iter)->get_absoluteAnchor().toXmlElem("absoluteAnchor", "", _outStream);
            }
        }
    }
    
    _outStream << "</wsDr>";
    }

    const wsDr_element& wsDr_element::default_instance()
    {    
    if (!wsDr_element::default_instance_)
    {
        wsDr_element::default_instance_ = new wsDr_element();
    }
    return *wsDr_element::default_instance_;
    }


    // wsDr_element::ChildGroup_1
    bool wsDr_element::ChildGroup_1::has_twoCellAnchor() const
    {    
    return m_has_twoCellAnchor;
    }

    CT_TwoCellAnchor* wsDr_element::ChildGroup_1::mutable_twoCellAnchor()
    {    
    
    m_has_oneCellAnchor = false;
    
    if (m_oneCellAnchor)
    {
        delete m_oneCellAnchor;
        m_oneCellAnchor = NULL;
    }
    ;
    
    m_has_absoluteAnchor = false;
    
    if (m_absoluteAnchor)
    {
        delete m_absoluteAnchor;
        m_absoluteAnchor = NULL;
    }
    ;
    
    m_has_twoCellAnchor = true;
    if (!m_twoCellAnchor)
    {
        m_twoCellAnchor = new CT_TwoCellAnchor();
    }
    return m_twoCellAnchor;
    }

    const CT_TwoCellAnchor& wsDr_element::ChildGroup_1::get_twoCellAnchor() const
    {    
    if (m_twoCellAnchor)
    {
        return *m_twoCellAnchor;
    }
    return CT_TwoCellAnchor::default_instance();
    }

    bool wsDr_element::ChildGroup_1::has_oneCellAnchor() const
    {    
    return m_has_oneCellAnchor;
    }

    CT_OneCellAnchor* wsDr_element::ChildGroup_1::mutable_oneCellAnchor()
    {    
    
    m_has_twoCellAnchor = false;
    
    if (m_twoCellAnchor)
    {
        delete m_twoCellAnchor;
        m_twoCellAnchor = NULL;
    }
    ;
    
    m_has_absoluteAnchor = false;
    
    if (m_absoluteAnchor)
    {
        delete m_absoluteAnchor;
        m_absoluteAnchor = NULL;
    }
    ;
    
    m_has_oneCellAnchor = true;
    if (!m_oneCellAnchor)
    {
        m_oneCellAnchor = new CT_OneCellAnchor();
    }
    return m_oneCellAnchor;
    }

    const CT_OneCellAnchor& wsDr_element::ChildGroup_1::get_oneCellAnchor() const
    {    
    if (m_oneCellAnchor)
    {
        return *m_oneCellAnchor;
    }
    return CT_OneCellAnchor::default_instance();
    }

    bool wsDr_element::ChildGroup_1::has_absoluteAnchor() const
    {    
    return m_has_absoluteAnchor;
    }

    CT_AbsoluteAnchor* wsDr_element::ChildGroup_1::mutable_absoluteAnchor()
    {    
    
    m_has_twoCellAnchor = false;
    
    if (m_twoCellAnchor)
    {
        delete m_twoCellAnchor;
        m_twoCellAnchor = NULL;
    }
    ;
    
    m_has_oneCellAnchor = false;
    
    if (m_oneCellAnchor)
    {
        delete m_oneCellAnchor;
        m_oneCellAnchor = NULL;
    }
    ;
    
    m_has_absoluteAnchor = true;
    if (!m_absoluteAnchor)
    {
        m_absoluteAnchor = new CT_AbsoluteAnchor();
    }
    return m_absoluteAnchor;
    }

    const CT_AbsoluteAnchor& wsDr_element::ChildGroup_1::get_absoluteAnchor() const
    {    
    if (m_absoluteAnchor)
    {
        return *m_absoluteAnchor;
    }
    return CT_AbsoluteAnchor::default_instance();
    }

wsDr_element* wsDr_element::default_instance_ = NULL;
}