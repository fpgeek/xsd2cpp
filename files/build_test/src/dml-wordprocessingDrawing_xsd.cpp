#include "dml-wordprocessingDrawing_xsd.h"
#include <stdlib.h>
#include <sstream>
#include <sstream>
#include <assert.h>
#include "dml-main_xsd.h"
#include "wml_xsd.h"
#include "dml-picture_xsd.h"
#include "shared-relationshipReference_xsd.h"
namespace ns_wp {
 using namespace std;

    // Element

    // Attribute

    // ST_WrapDistance
    ST_WrapDistance::ST_WrapDistance()
    :m_has_unsignedInt(false),
    m_unsignedInt(0)
    {
    }
    ST_WrapDistance::ST_WrapDistance(const XSD::unsignedInt_& _unsignedInt)
    :m_has_unsignedInt(true)
    {
    
    set_unsignedInt(m_unsignedInt);
    }
    bool ST_WrapDistance::has_unsignedInt() const
    {    
    return m_has_unsignedInt;
    }

    void ST_WrapDistance::set_unsignedInt(const XSD::unsignedInt_& _unsignedInt)
    {    
    m_has_unsignedInt = true;
    m_unsignedInt = _unsignedInt;
    }

    const XSD::unsignedInt_& ST_WrapDistance::get_unsignedInt() const
    {    
    return m_unsignedInt;
    }

    void ST_WrapDistance::clear()
    {    
    m_has_unsignedInt = false;
    m_unsignedInt = 0;;
    }

    void ST_WrapDistance::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_unsignedInt)
    {
        _outStream << " " << _attrName << "=\"" << m_unsignedInt << "\"";;
    }
    }

    const ST_WrapDistance& ST_WrapDistance::default_instance()
    {    
    if (!ST_WrapDistance::default_instance_)
    {
        ST_WrapDistance::default_instance_ = new ST_WrapDistance();
    }
    return *ST_WrapDistance::default_instance_;
    }

    std::string ST_WrapDistance::toString() const
    {    
    std::stringstream strStream;
    strStream << get_unsignedInt();
    return strStream.str();
    }

ST_WrapDistance* ST_WrapDistance::default_instance_ = NULL;

    // ST_WrapText
    ST_WrapText::ST_WrapText()
    :m_has_type(false)
    {
    }
    ST_WrapText::ST_WrapText(const ST_WrapText::Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
    }
    bool ST_WrapText::has_type() const
    {    
    return m_has_type;
    }

    void ST_WrapText::set_type(const ST_WrapText::Type& _type)
    {    
    m_has_type = true;
    m_type = _type;
    }

    const ST_WrapText::Type& ST_WrapText::get_type() const
    {    
                return m_type;
                }

    std::string ST_WrapText::toString() const
    {    
    return ST_WrapText::TypeStrList[m_type];
    }

    void ST_WrapText::clear()
    {    
    m_has_type = false;
    }

    void ST_WrapText::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_type)
    {
    _outStream << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_WrapText& ST_WrapText::default_instance()
    {    
    if (!ST_WrapText::default_instance_)
    {
        ST_WrapText::default_instance_ = new ST_WrapText();
    }
    return *ST_WrapText::default_instance_;
    }

    const std::string ST_WrapText::TypeStrList[] =
    {
        "bothSides",
        "left",
        "right",
        "largest"
    };
ST_WrapText* ST_WrapText::default_instance_ = NULL;

    // ST_PositionOffset
    ST_PositionOffset::ST_PositionOffset()
    :m_has_int(false),
    m_int(0)
    {
    }
    ST_PositionOffset::ST_PositionOffset(const XSD::int_& _int)
    :m_has_int(true)
    {
    
    set_int(m_int);
    }
    bool ST_PositionOffset::has_int() const
    {    
    return m_has_int;
    }

    void ST_PositionOffset::set_int(const XSD::int_& _int)
    {    
    m_has_int = true;
    m_int = _int;
    }

    const XSD::int_& ST_PositionOffset::get_int() const
    {    
    return m_int;
    }

    void ST_PositionOffset::clear()
    {    
    m_has_int = false;
    m_int = 0;;
    }

    void ST_PositionOffset::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_int)
    {
        _outStream << " " << _attrName << "=\"" << m_int << "\"";;
    }
    }

    const ST_PositionOffset& ST_PositionOffset::default_instance()
    {    
    if (!ST_PositionOffset::default_instance_)
    {
        ST_PositionOffset::default_instance_ = new ST_PositionOffset();
    }
    return *ST_PositionOffset::default_instance_;
    }

    std::string ST_PositionOffset::toString() const
    {    
    std::stringstream strStream;
    strStream << get_int();
    return strStream.str();
    }

ST_PositionOffset* ST_PositionOffset::default_instance_ = NULL;

    // ST_AlignH
    ST_AlignH::ST_AlignH()
    :m_has_type(false)
    {
    }
    ST_AlignH::ST_AlignH(const ST_AlignH::Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
    }
    bool ST_AlignH::has_type() const
    {    
    return m_has_type;
    }

    void ST_AlignH::set_type(const ST_AlignH::Type& _type)
    {    
    m_has_type = true;
    m_type = _type;
    }

    const ST_AlignH::Type& ST_AlignH::get_type() const
    {    
                return m_type;
                }

    std::string ST_AlignH::toString() const
    {    
    return ST_AlignH::TypeStrList[m_type];
    }

    void ST_AlignH::clear()
    {    
    m_has_type = false;
    }

    void ST_AlignH::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_type)
    {
    _outStream << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_AlignH& ST_AlignH::default_instance()
    {    
    if (!ST_AlignH::default_instance_)
    {
        ST_AlignH::default_instance_ = new ST_AlignH();
    }
    return *ST_AlignH::default_instance_;
    }

    const std::string ST_AlignH::TypeStrList[] =
    {
        "left",
        "right",
        "center",
        "inside",
        "outside"
    };
ST_AlignH* ST_AlignH::default_instance_ = NULL;

    // ST_RelFromH
    ST_RelFromH::ST_RelFromH()
    :m_has_type(false)
    {
    }
    ST_RelFromH::ST_RelFromH(const ST_RelFromH::Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
    }
    bool ST_RelFromH::has_type() const
    {    
    return m_has_type;
    }

    void ST_RelFromH::set_type(const ST_RelFromH::Type& _type)
    {    
    m_has_type = true;
    m_type = _type;
    }

    const ST_RelFromH::Type& ST_RelFromH::get_type() const
    {    
                return m_type;
                }

    std::string ST_RelFromH::toString() const
    {    
    return ST_RelFromH::TypeStrList[m_type];
    }

    void ST_RelFromH::clear()
    {    
    m_has_type = false;
    }

    void ST_RelFromH::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_type)
    {
    _outStream << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_RelFromH& ST_RelFromH::default_instance()
    {    
    if (!ST_RelFromH::default_instance_)
    {
        ST_RelFromH::default_instance_ = new ST_RelFromH();
    }
    return *ST_RelFromH::default_instance_;
    }

    const std::string ST_RelFromH::TypeStrList[] =
    {
        "margin",
        "page",
        "column",
        "character",
        "leftMargin",
        "rightMargin",
        "insideMargin",
        "outsideMargin"
    };
ST_RelFromH* ST_RelFromH::default_instance_ = NULL;

    // ST_AlignV
    ST_AlignV::ST_AlignV()
    :m_has_type(false)
    {
    }
    ST_AlignV::ST_AlignV(const ST_AlignV::Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
    }
    bool ST_AlignV::has_type() const
    {    
    return m_has_type;
    }

    void ST_AlignV::set_type(const ST_AlignV::Type& _type)
    {    
    m_has_type = true;
    m_type = _type;
    }

    const ST_AlignV::Type& ST_AlignV::get_type() const
    {    
                return m_type;
                }

    std::string ST_AlignV::toString() const
    {    
    return ST_AlignV::TypeStrList[m_type];
    }

    void ST_AlignV::clear()
    {    
    m_has_type = false;
    }

    void ST_AlignV::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_type)
    {
    _outStream << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_AlignV& ST_AlignV::default_instance()
    {    
    if (!ST_AlignV::default_instance_)
    {
        ST_AlignV::default_instance_ = new ST_AlignV();
    }
    return *ST_AlignV::default_instance_;
    }

    const std::string ST_AlignV::TypeStrList[] =
    {
        "top",
        "bottom",
        "center",
        "inside",
        "outside"
    };
ST_AlignV* ST_AlignV::default_instance_ = NULL;

    // ST_RelFromV
    ST_RelFromV::ST_RelFromV()
    :m_has_type(false)
    {
    }
    ST_RelFromV::ST_RelFromV(const ST_RelFromV::Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
    }
    bool ST_RelFromV::has_type() const
    {    
    return m_has_type;
    }

    void ST_RelFromV::set_type(const ST_RelFromV::Type& _type)
    {    
    m_has_type = true;
    m_type = _type;
    }

    const ST_RelFromV::Type& ST_RelFromV::get_type() const
    {    
                return m_type;
                }

    std::string ST_RelFromV::toString() const
    {    
    return ST_RelFromV::TypeStrList[m_type];
    }

    void ST_RelFromV::clear()
    {    
    m_has_type = false;
    }

    void ST_RelFromV::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_type)
    {
    _outStream << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_RelFromV& ST_RelFromV::default_instance()
    {    
    if (!ST_RelFromV::default_instance_)
    {
        ST_RelFromV::default_instance_ = new ST_RelFromV();
    }
    return *ST_RelFromV::default_instance_;
    }

    const std::string ST_RelFromV::TypeStrList[] =
    {
        "margin",
        "page",
        "paragraph",
        "line",
        "topMargin",
        "bottomMargin",
        "insideMargin",
        "outsideMargin"
    };
ST_RelFromV* ST_RelFromV::default_instance_ = NULL;

    // CT_EffectExtent
    void CT_EffectExtent::clear()
    {    
    m_has_a_l_attr = false;
    
    if (m_a_l_attr)
    {
        delete m_a_l_attr;
        m_a_l_attr = NULL;
    }
    
    
    m_has_a_t_attr = false;
    
    if (m_a_t_attr)
    {
        delete m_a_t_attr;
        m_a_t_attr = NULL;
    }
    
    
    m_has_a_r_attr = false;
    
    if (m_a_r_attr)
    {
        delete m_a_r_attr;
        m_a_r_attr = NULL;
    }
    
    
    m_has_a_b_attr = false;
    
    if (m_a_b_attr)
    {
        delete m_a_b_attr;
        m_a_b_attr = NULL;
    }
    
    }

    void CT_EffectExtent::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
    if (m_has_a_l_attr)
    {
        m_a_l_attr->toXmlAttr("l", _outStream);
    }
    
    
    if (m_has_a_t_attr)
    {
        m_a_t_attr->toXmlAttr("t", _outStream);
    }
    
    
    if (m_has_a_r_attr)
    {
        m_a_r_attr->toXmlAttr("r", _outStream);
    }
    
    
    if (m_has_a_b_attr)
    {
        m_a_b_attr->toXmlAttr("b", _outStream);
    }
    
            _outStream << ">";
            
            _outStream << "</" << _elemName << ">";
                }

    const CT_EffectExtent& CT_EffectExtent::default_instance()
    {    
    if (!CT_EffectExtent::default_instance_)
    {
        CT_EffectExtent::default_instance_ = new CT_EffectExtent();
    }
    return *CT_EffectExtent::default_instance_;
    }

    bool CT_EffectExtent::has_a_l_attr() const
    {    
    return m_has_a_l_attr;
    }

    void CT_EffectExtent::set_a_l_attr(const ns_a::ST_Coordinate& _a_l_attr)
    {    
    m_has_a_l_attr = true;
    m_a_l_attr = new ns_a::ST_Coordinate(_a_l_attr);
    }

    const ns_a::ST_Coordinate& CT_EffectExtent::get_a_l_attr() const
    {    
    if (m_a_l_attr)
    {
        return *m_a_l_attr;
    }
    return ns_a::ST_Coordinate::default_instance();
    }

    bool CT_EffectExtent::has_a_t_attr() const
    {    
    return m_has_a_t_attr;
    }

    void CT_EffectExtent::set_a_t_attr(const ns_a::ST_Coordinate& _a_t_attr)
    {    
    m_has_a_t_attr = true;
    m_a_t_attr = new ns_a::ST_Coordinate(_a_t_attr);
    }

    const ns_a::ST_Coordinate& CT_EffectExtent::get_a_t_attr() const
    {    
    if (m_a_t_attr)
    {
        return *m_a_t_attr;
    }
    return ns_a::ST_Coordinate::default_instance();
    }

    bool CT_EffectExtent::has_a_r_attr() const
    {    
    return m_has_a_r_attr;
    }

    void CT_EffectExtent::set_a_r_attr(const ns_a::ST_Coordinate& _a_r_attr)
    {    
    m_has_a_r_attr = true;
    m_a_r_attr = new ns_a::ST_Coordinate(_a_r_attr);
    }

    const ns_a::ST_Coordinate& CT_EffectExtent::get_a_r_attr() const
    {    
    if (m_a_r_attr)
    {
        return *m_a_r_attr;
    }
    return ns_a::ST_Coordinate::default_instance();
    }

    bool CT_EffectExtent::has_a_b_attr() const
    {    
    return m_has_a_b_attr;
    }

    void CT_EffectExtent::set_a_b_attr(const ns_a::ST_Coordinate& _a_b_attr)
    {    
    m_has_a_b_attr = true;
    m_a_b_attr = new ns_a::ST_Coordinate(_a_b_attr);
    }

    const ns_a::ST_Coordinate& CT_EffectExtent::get_a_b_attr() const
    {    
    if (m_a_b_attr)
    {
        return *m_a_b_attr;
    }
    return ns_a::ST_Coordinate::default_instance();
    }

CT_EffectExtent* CT_EffectExtent::default_instance_ = NULL;

    // CT_Inline
    bool CT_Inline::has_a_extent() const
    {    
    return m_has_a_extent;
    }

    ns_a::CT_PositiveSize2D* CT_Inline::mutable_a_extent()
    {    
    m_has_a_extent = true;
    if (!m_a_extent)
    {
        m_a_extent = new ns_a::CT_PositiveSize2D();
    }
    return m_a_extent;
    }

    const ns_a::CT_PositiveSize2D& CT_Inline::get_a_extent() const
    {    
    if (m_a_extent)
    {
        return *m_a_extent;
    }
    return ns_a::CT_PositiveSize2D::default_instance();
    }

    bool CT_Inline::has_effectExtent() const
    {    
    return m_has_effectExtent;
    }

    CT_EffectExtent* CT_Inline::mutable_effectExtent()
    {    
    m_has_effectExtent = true;
    if (!m_effectExtent)
    {
        m_effectExtent = new CT_EffectExtent();
    }
    return m_effectExtent;
    }

    const CT_EffectExtent& CT_Inline::get_effectExtent() const
    {    
    if (m_effectExtent)
    {
        return *m_effectExtent;
    }
    return CT_EffectExtent::default_instance();
    }

    bool CT_Inline::has_a_docPr() const
    {    
    return m_has_a_docPr;
    }

    ns_a::CT_NonVisualDrawingProps* CT_Inline::mutable_a_docPr()
    {    
    m_has_a_docPr = true;
    if (!m_a_docPr)
    {
        m_a_docPr = new ns_a::CT_NonVisualDrawingProps();
    }
    return m_a_docPr;
    }

    const ns_a::CT_NonVisualDrawingProps& CT_Inline::get_a_docPr() const
    {    
    if (m_a_docPr)
    {
        return *m_a_docPr;
    }
    return ns_a::CT_NonVisualDrawingProps::default_instance();
    }

    bool CT_Inline::has_a_cNvGraphicFramePr() const
    {    
    return m_has_a_cNvGraphicFramePr;
    }

    ns_a::CT_NonVisualGraphicFrameProperties* CT_Inline::mutable_a_cNvGraphicFramePr()
    {    
    m_has_a_cNvGraphicFramePr = true;
    if (!m_a_cNvGraphicFramePr)
    {
        m_a_cNvGraphicFramePr = new ns_a::CT_NonVisualGraphicFrameProperties();
    }
    return m_a_cNvGraphicFramePr;
    }

    const ns_a::CT_NonVisualGraphicFrameProperties& CT_Inline::get_a_cNvGraphicFramePr() const
    {    
    if (m_a_cNvGraphicFramePr)
    {
        return *m_a_cNvGraphicFramePr;
    }
    return ns_a::CT_NonVisualGraphicFrameProperties::default_instance();
    }

    bool CT_Inline::has_a_graphic() const
    {    
    return m_has_a_graphic;
    }

    ns_a::CT_GraphicalObject* CT_Inline::mutable_a_graphic()
    {    
    m_has_a_graphic = true;
    if (!m_a_graphic)
    {
        m_a_graphic = new ns_a::CT_GraphicalObject();
    }
    return m_a_graphic;
    }

    const ns_a::CT_GraphicalObject& CT_Inline::get_a_graphic() const
    {    
    if (m_a_graphic)
    {
        return *m_a_graphic;
    }
    return ns_a::CT_GraphicalObject::default_instance();
    }

    void CT_Inline::clear()
    {    
    m_has_distT_attr = false;
    
    if (m_distT_attr)
    {
        delete m_distT_attr;
        m_distT_attr = NULL;
    }
    
    
    m_has_distB_attr = false;
    
    if (m_distB_attr)
    {
        delete m_distB_attr;
        m_distB_attr = NULL;
    }
    
    
    m_has_distL_attr = false;
    
    if (m_distL_attr)
    {
        delete m_distL_attr;
        m_distL_attr = NULL;
    }
    
    
    m_has_distR_attr = false;
    
    if (m_distR_attr)
    {
        delete m_distR_attr;
        m_distR_attr = NULL;
    }
    
    }

    void CT_Inline::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
    if (m_has_distT_attr)
    {
        m_distT_attr->toXmlAttr("distT", _outStream);
    }
    
    
    if (m_has_distB_attr)
    {
        m_distB_attr->toXmlAttr("distB", _outStream);
    }
    
    
    if (m_has_distL_attr)
    {
        m_distL_attr->toXmlAttr("distL", _outStream);
    }
    
    
    if (m_has_distR_attr)
    {
        m_distR_attr->toXmlAttr("distR", _outStream);
    }
    
            _outStream << ">";
            
    if (m_has_a_extent)
    {
        m_a_extent->toXmlElem("a:extent", "", _outStream);;
    }
    
    if (m_has_effectExtent)
    {
        m_effectExtent->toXmlElem("effectExtent", "", _outStream);;
    }
    
    if (m_has_a_docPr)
    {
        m_a_docPr->toXmlElem("a:docPr", "", _outStream);;
    }
    
    if (m_has_a_cNvGraphicFramePr)
    {
        m_a_cNvGraphicFramePr->toXmlElem("a:cNvGraphicFramePr", "", _outStream);;
    }
    
    if (m_has_a_graphic)
    {
        m_a_graphic->toXmlElem("a:graphic", "", _outStream);;
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_Inline& CT_Inline::default_instance()
    {    
    if (!CT_Inline::default_instance_)
    {
        CT_Inline::default_instance_ = new CT_Inline();
    }
    return *CT_Inline::default_instance_;
    }

    bool CT_Inline::has_distT_attr() const
    {    
    return m_has_distT_attr;
    }

    void CT_Inline::set_distT_attr(const ST_WrapDistance& _distT_attr)
    {    
    m_has_distT_attr = true;
    m_distT_attr = new ST_WrapDistance(_distT_attr);
    }

    const ST_WrapDistance& CT_Inline::get_distT_attr() const
    {    
    if (m_distT_attr)
    {
        return *m_distT_attr;
    }
    return ST_WrapDistance::default_instance();
    }

    bool CT_Inline::has_distB_attr() const
    {    
    return m_has_distB_attr;
    }

    void CT_Inline::set_distB_attr(const ST_WrapDistance& _distB_attr)
    {    
    m_has_distB_attr = true;
    m_distB_attr = new ST_WrapDistance(_distB_attr);
    }

    const ST_WrapDistance& CT_Inline::get_distB_attr() const
    {    
    if (m_distB_attr)
    {
        return *m_distB_attr;
    }
    return ST_WrapDistance::default_instance();
    }

    bool CT_Inline::has_distL_attr() const
    {    
    return m_has_distL_attr;
    }

    void CT_Inline::set_distL_attr(const ST_WrapDistance& _distL_attr)
    {    
    m_has_distL_attr = true;
    m_distL_attr = new ST_WrapDistance(_distL_attr);
    }

    const ST_WrapDistance& CT_Inline::get_distL_attr() const
    {    
    if (m_distL_attr)
    {
        return *m_distL_attr;
    }
    return ST_WrapDistance::default_instance();
    }

    bool CT_Inline::has_distR_attr() const
    {    
    return m_has_distR_attr;
    }

    void CT_Inline::set_distR_attr(const ST_WrapDistance& _distR_attr)
    {    
    m_has_distR_attr = true;
    m_distR_attr = new ST_WrapDistance(_distR_attr);
    }

    const ST_WrapDistance& CT_Inline::get_distR_attr() const
    {    
    if (m_distR_attr)
    {
        return *m_distR_attr;
    }
    return ST_WrapDistance::default_instance();
    }

CT_Inline* CT_Inline::default_instance_ = NULL;

    // CT_WrapPath
    bool CT_WrapPath::has_a_start() const
    {    
    return m_has_a_start;
    }

    ns_a::CT_Point2D* CT_WrapPath::mutable_a_start()
    {    
    m_has_a_start = true;
    if (!m_a_start)
    {
        m_a_start = new ns_a::CT_Point2D();
    }
    return m_a_start;
    }

    const ns_a::CT_Point2D& CT_WrapPath::get_a_start() const
    {    
    if (m_a_start)
    {
        return *m_a_start;
    }
    return ns_a::CT_Point2D::default_instance();
    }

    ns_a::CT_Point2D* CT_WrapPath::add_a_lineTo()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_a::CT_Point2D* pNewChild = pChildGroup->mutable_a_lineTo();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    void CT_WrapPath::clear()
    {    
    m_has_edited_attr = false;
    m_edited_attr = false;
    
    m_has_a_start = false;
    
    if (m_a_start)
    {
        delete m_a_start;
        m_a_start = NULL;
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

    void CT_WrapPath::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
    if (m_has_edited_attr)
    {
        _outStream << " " << "edited" << "=\"" << XSD::XMLBooleanStr(m_edited_attr) << "\"";
    }
    
            _outStream << ">";
            
    if (m_has_a_start)
    {
        m_a_start->toXmlElem("a:start", "", _outStream);;
    }
     
    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_a_lineTo())
            {
                (*iter)->get_a_lineTo().toXmlElem("a:lineTo", "", _outStream);
            }
        }
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_WrapPath& CT_WrapPath::default_instance()
    {    
    if (!CT_WrapPath::default_instance_)
    {
        CT_WrapPath::default_instance_ = new CT_WrapPath();
    }
    return *CT_WrapPath::default_instance_;
    }

    bool CT_WrapPath::has_edited_attr() const
    {    
    return m_has_edited_attr;
    }

    void CT_WrapPath::set_edited_attr(const XSD::boolean_& _edited_attr)
    {    
    m_has_edited_attr = true;
    m_edited_attr = _edited_attr;
    }

    const XSD::boolean_& CT_WrapPath::get_edited_attr() const
    {    
    return m_edited_attr;
    }


    // CT_WrapPath::ChildGroup_1
    bool CT_WrapPath::ChildGroup_1::has_a_lineTo() const
    {    
    return m_has_a_lineTo;
    }

    ns_a::CT_Point2D* CT_WrapPath::ChildGroup_1::mutable_a_lineTo()
    {    
    
    m_has_a_lineTo = true;
    if (!m_a_lineTo)
    {
        m_a_lineTo = new ns_a::CT_Point2D();
    }
    return m_a_lineTo;
    }

    const ns_a::CT_Point2D& CT_WrapPath::ChildGroup_1::get_a_lineTo() const
    {    
    if (m_a_lineTo)
    {
        return *m_a_lineTo;
    }
    return ns_a::CT_Point2D::default_instance();
    }

CT_WrapPath* CT_WrapPath::default_instance_ = NULL;

    // CT_WrapNone
    void CT_WrapNone::clear()
    {    }

    void CT_WrapNone::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
            _outStream << ">";
            
            _outStream << "</" << _elemName << ">";
                }

    const CT_WrapNone& CT_WrapNone::default_instance()
    {    
    if (!CT_WrapNone::default_instance_)
    {
        CT_WrapNone::default_instance_ = new CT_WrapNone();
    }
    return *CT_WrapNone::default_instance_;
    }

CT_WrapNone* CT_WrapNone::default_instance_ = NULL;

    // CT_WrapSquare
    bool CT_WrapSquare::has_effectExtent() const
    {    
    return m_has_effectExtent;
    }

    CT_EffectExtent* CT_WrapSquare::mutable_effectExtent()
    {    
    m_has_effectExtent = true;
    if (!m_effectExtent)
    {
        m_effectExtent = new CT_EffectExtent();
    }
    return m_effectExtent;
    }

    const CT_EffectExtent& CT_WrapSquare::get_effectExtent() const
    {    
    if (m_effectExtent)
    {
        return *m_effectExtent;
    }
    return CT_EffectExtent::default_instance();
    }

    void CT_WrapSquare::clear()
    {    
    m_has_wrapText_attr = false;
    
    if (m_wrapText_attr)
    {
        delete m_wrapText_attr;
        m_wrapText_attr = NULL;
    }
    
    
    m_has_distT_attr = false;
    
    if (m_distT_attr)
    {
        delete m_distT_attr;
        m_distT_attr = NULL;
    }
    
    
    m_has_distB_attr = false;
    
    if (m_distB_attr)
    {
        delete m_distB_attr;
        m_distB_attr = NULL;
    }
    
    
    m_has_distL_attr = false;
    
    if (m_distL_attr)
    {
        delete m_distL_attr;
        m_distL_attr = NULL;
    }
    
    
    m_has_distR_attr = false;
    
    if (m_distR_attr)
    {
        delete m_distR_attr;
        m_distR_attr = NULL;
    }
    
    }

    void CT_WrapSquare::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
    if (m_has_wrapText_attr)
    {
        m_wrapText_attr->toXmlAttr("wrapText", _outStream);
    }
    
    
    if (m_has_distT_attr)
    {
        m_distT_attr->toXmlAttr("distT", _outStream);
    }
    
    
    if (m_has_distB_attr)
    {
        m_distB_attr->toXmlAttr("distB", _outStream);
    }
    
    
    if (m_has_distL_attr)
    {
        m_distL_attr->toXmlAttr("distL", _outStream);
    }
    
    
    if (m_has_distR_attr)
    {
        m_distR_attr->toXmlAttr("distR", _outStream);
    }
    
            _outStream << ">";
            
    if (m_has_effectExtent)
    {
        m_effectExtent->toXmlElem("effectExtent", "", _outStream);;
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_WrapSquare& CT_WrapSquare::default_instance()
    {    
    if (!CT_WrapSquare::default_instance_)
    {
        CT_WrapSquare::default_instance_ = new CT_WrapSquare();
    }
    return *CT_WrapSquare::default_instance_;
    }

    bool CT_WrapSquare::has_wrapText_attr() const
    {    
    return m_has_wrapText_attr;
    }

    void CT_WrapSquare::set_wrapText_attr(const ST_WrapText& _wrapText_attr)
    {    
    m_has_wrapText_attr = true;
    m_wrapText_attr = new ST_WrapText(_wrapText_attr);
    }

    const ST_WrapText& CT_WrapSquare::get_wrapText_attr() const
    {    
    if (m_wrapText_attr)
    {
        return *m_wrapText_attr;
    }
    return ST_WrapText::default_instance();
    }

    bool CT_WrapSquare::has_distT_attr() const
    {    
    return m_has_distT_attr;
    }

    void CT_WrapSquare::set_distT_attr(const ST_WrapDistance& _distT_attr)
    {    
    m_has_distT_attr = true;
    m_distT_attr = new ST_WrapDistance(_distT_attr);
    }

    const ST_WrapDistance& CT_WrapSquare::get_distT_attr() const
    {    
    if (m_distT_attr)
    {
        return *m_distT_attr;
    }
    return ST_WrapDistance::default_instance();
    }

    bool CT_WrapSquare::has_distB_attr() const
    {    
    return m_has_distB_attr;
    }

    void CT_WrapSquare::set_distB_attr(const ST_WrapDistance& _distB_attr)
    {    
    m_has_distB_attr = true;
    m_distB_attr = new ST_WrapDistance(_distB_attr);
    }

    const ST_WrapDistance& CT_WrapSquare::get_distB_attr() const
    {    
    if (m_distB_attr)
    {
        return *m_distB_attr;
    }
    return ST_WrapDistance::default_instance();
    }

    bool CT_WrapSquare::has_distL_attr() const
    {    
    return m_has_distL_attr;
    }

    void CT_WrapSquare::set_distL_attr(const ST_WrapDistance& _distL_attr)
    {    
    m_has_distL_attr = true;
    m_distL_attr = new ST_WrapDistance(_distL_attr);
    }

    const ST_WrapDistance& CT_WrapSquare::get_distL_attr() const
    {    
    if (m_distL_attr)
    {
        return *m_distL_attr;
    }
    return ST_WrapDistance::default_instance();
    }

    bool CT_WrapSquare::has_distR_attr() const
    {    
    return m_has_distR_attr;
    }

    void CT_WrapSquare::set_distR_attr(const ST_WrapDistance& _distR_attr)
    {    
    m_has_distR_attr = true;
    m_distR_attr = new ST_WrapDistance(_distR_attr);
    }

    const ST_WrapDistance& CT_WrapSquare::get_distR_attr() const
    {    
    if (m_distR_attr)
    {
        return *m_distR_attr;
    }
    return ST_WrapDistance::default_instance();
    }

CT_WrapSquare* CT_WrapSquare::default_instance_ = NULL;

    // CT_WrapTight
    bool CT_WrapTight::has_wrapPolygon() const
    {    
    return m_has_wrapPolygon;
    }

    CT_WrapPath* CT_WrapTight::mutable_wrapPolygon()
    {    
    m_has_wrapPolygon = true;
    if (!m_wrapPolygon)
    {
        m_wrapPolygon = new CT_WrapPath();
    }
    return m_wrapPolygon;
    }

    const CT_WrapPath& CT_WrapTight::get_wrapPolygon() const
    {    
    if (m_wrapPolygon)
    {
        return *m_wrapPolygon;
    }
    return CT_WrapPath::default_instance();
    }

    void CT_WrapTight::clear()
    {    
    m_has_wrapText_attr = false;
    
    if (m_wrapText_attr)
    {
        delete m_wrapText_attr;
        m_wrapText_attr = NULL;
    }
    
    
    m_has_distL_attr = false;
    
    if (m_distL_attr)
    {
        delete m_distL_attr;
        m_distL_attr = NULL;
    }
    
    
    m_has_distR_attr = false;
    
    if (m_distR_attr)
    {
        delete m_distR_attr;
        m_distR_attr = NULL;
    }
    
    }

    void CT_WrapTight::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
    if (m_has_wrapText_attr)
    {
        m_wrapText_attr->toXmlAttr("wrapText", _outStream);
    }
    
    
    if (m_has_distL_attr)
    {
        m_distL_attr->toXmlAttr("distL", _outStream);
    }
    
    
    if (m_has_distR_attr)
    {
        m_distR_attr->toXmlAttr("distR", _outStream);
    }
    
            _outStream << ">";
            
    if (m_has_wrapPolygon)
    {
        m_wrapPolygon->toXmlElem("wrapPolygon", "", _outStream);;
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_WrapTight& CT_WrapTight::default_instance()
    {    
    if (!CT_WrapTight::default_instance_)
    {
        CT_WrapTight::default_instance_ = new CT_WrapTight();
    }
    return *CT_WrapTight::default_instance_;
    }

    bool CT_WrapTight::has_wrapText_attr() const
    {    
    return m_has_wrapText_attr;
    }

    void CT_WrapTight::set_wrapText_attr(const ST_WrapText& _wrapText_attr)
    {    
    m_has_wrapText_attr = true;
    m_wrapText_attr = new ST_WrapText(_wrapText_attr);
    }

    const ST_WrapText& CT_WrapTight::get_wrapText_attr() const
    {    
    if (m_wrapText_attr)
    {
        return *m_wrapText_attr;
    }
    return ST_WrapText::default_instance();
    }

    bool CT_WrapTight::has_distL_attr() const
    {    
    return m_has_distL_attr;
    }

    void CT_WrapTight::set_distL_attr(const ST_WrapDistance& _distL_attr)
    {    
    m_has_distL_attr = true;
    m_distL_attr = new ST_WrapDistance(_distL_attr);
    }

    const ST_WrapDistance& CT_WrapTight::get_distL_attr() const
    {    
    if (m_distL_attr)
    {
        return *m_distL_attr;
    }
    return ST_WrapDistance::default_instance();
    }

    bool CT_WrapTight::has_distR_attr() const
    {    
    return m_has_distR_attr;
    }

    void CT_WrapTight::set_distR_attr(const ST_WrapDistance& _distR_attr)
    {    
    m_has_distR_attr = true;
    m_distR_attr = new ST_WrapDistance(_distR_attr);
    }

    const ST_WrapDistance& CT_WrapTight::get_distR_attr() const
    {    
    if (m_distR_attr)
    {
        return *m_distR_attr;
    }
    return ST_WrapDistance::default_instance();
    }

CT_WrapTight* CT_WrapTight::default_instance_ = NULL;

    // CT_WrapThrough
    bool CT_WrapThrough::has_wrapPolygon() const
    {    
    return m_has_wrapPolygon;
    }

    CT_WrapPath* CT_WrapThrough::mutable_wrapPolygon()
    {    
    m_has_wrapPolygon = true;
    if (!m_wrapPolygon)
    {
        m_wrapPolygon = new CT_WrapPath();
    }
    return m_wrapPolygon;
    }

    const CT_WrapPath& CT_WrapThrough::get_wrapPolygon() const
    {    
    if (m_wrapPolygon)
    {
        return *m_wrapPolygon;
    }
    return CT_WrapPath::default_instance();
    }

    void CT_WrapThrough::clear()
    {    
    m_has_wrapText_attr = false;
    
    if (m_wrapText_attr)
    {
        delete m_wrapText_attr;
        m_wrapText_attr = NULL;
    }
    
    
    m_has_distL_attr = false;
    
    if (m_distL_attr)
    {
        delete m_distL_attr;
        m_distL_attr = NULL;
    }
    
    
    m_has_distR_attr = false;
    
    if (m_distR_attr)
    {
        delete m_distR_attr;
        m_distR_attr = NULL;
    }
    
    }

    void CT_WrapThrough::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
    if (m_has_wrapText_attr)
    {
        m_wrapText_attr->toXmlAttr("wrapText", _outStream);
    }
    
    
    if (m_has_distL_attr)
    {
        m_distL_attr->toXmlAttr("distL", _outStream);
    }
    
    
    if (m_has_distR_attr)
    {
        m_distR_attr->toXmlAttr("distR", _outStream);
    }
    
            _outStream << ">";
            
    if (m_has_wrapPolygon)
    {
        m_wrapPolygon->toXmlElem("wrapPolygon", "", _outStream);;
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_WrapThrough& CT_WrapThrough::default_instance()
    {    
    if (!CT_WrapThrough::default_instance_)
    {
        CT_WrapThrough::default_instance_ = new CT_WrapThrough();
    }
    return *CT_WrapThrough::default_instance_;
    }

    bool CT_WrapThrough::has_wrapText_attr() const
    {    
    return m_has_wrapText_attr;
    }

    void CT_WrapThrough::set_wrapText_attr(const ST_WrapText& _wrapText_attr)
    {    
    m_has_wrapText_attr = true;
    m_wrapText_attr = new ST_WrapText(_wrapText_attr);
    }

    const ST_WrapText& CT_WrapThrough::get_wrapText_attr() const
    {    
    if (m_wrapText_attr)
    {
        return *m_wrapText_attr;
    }
    return ST_WrapText::default_instance();
    }

    bool CT_WrapThrough::has_distL_attr() const
    {    
    return m_has_distL_attr;
    }

    void CT_WrapThrough::set_distL_attr(const ST_WrapDistance& _distL_attr)
    {    
    m_has_distL_attr = true;
    m_distL_attr = new ST_WrapDistance(_distL_attr);
    }

    const ST_WrapDistance& CT_WrapThrough::get_distL_attr() const
    {    
    if (m_distL_attr)
    {
        return *m_distL_attr;
    }
    return ST_WrapDistance::default_instance();
    }

    bool CT_WrapThrough::has_distR_attr() const
    {    
    return m_has_distR_attr;
    }

    void CT_WrapThrough::set_distR_attr(const ST_WrapDistance& _distR_attr)
    {    
    m_has_distR_attr = true;
    m_distR_attr = new ST_WrapDistance(_distR_attr);
    }

    const ST_WrapDistance& CT_WrapThrough::get_distR_attr() const
    {    
    if (m_distR_attr)
    {
        return *m_distR_attr;
    }
    return ST_WrapDistance::default_instance();
    }

CT_WrapThrough* CT_WrapThrough::default_instance_ = NULL;

    // CT_WrapTopBottom
    bool CT_WrapTopBottom::has_effectExtent() const
    {    
    return m_has_effectExtent;
    }

    CT_EffectExtent* CT_WrapTopBottom::mutable_effectExtent()
    {    
    m_has_effectExtent = true;
    if (!m_effectExtent)
    {
        m_effectExtent = new CT_EffectExtent();
    }
    return m_effectExtent;
    }

    const CT_EffectExtent& CT_WrapTopBottom::get_effectExtent() const
    {    
    if (m_effectExtent)
    {
        return *m_effectExtent;
    }
    return CT_EffectExtent::default_instance();
    }

    void CT_WrapTopBottom::clear()
    {    
    m_has_distT_attr = false;
    
    if (m_distT_attr)
    {
        delete m_distT_attr;
        m_distT_attr = NULL;
    }
    
    
    m_has_distB_attr = false;
    
    if (m_distB_attr)
    {
        delete m_distB_attr;
        m_distB_attr = NULL;
    }
    
    }

    void CT_WrapTopBottom::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
    if (m_has_distT_attr)
    {
        m_distT_attr->toXmlAttr("distT", _outStream);
    }
    
    
    if (m_has_distB_attr)
    {
        m_distB_attr->toXmlAttr("distB", _outStream);
    }
    
            _outStream << ">";
            
    if (m_has_effectExtent)
    {
        m_effectExtent->toXmlElem("effectExtent", "", _outStream);;
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_WrapTopBottom& CT_WrapTopBottom::default_instance()
    {    
    if (!CT_WrapTopBottom::default_instance_)
    {
        CT_WrapTopBottom::default_instance_ = new CT_WrapTopBottom();
    }
    return *CT_WrapTopBottom::default_instance_;
    }

    bool CT_WrapTopBottom::has_distT_attr() const
    {    
    return m_has_distT_attr;
    }

    void CT_WrapTopBottom::set_distT_attr(const ST_WrapDistance& _distT_attr)
    {    
    m_has_distT_attr = true;
    m_distT_attr = new ST_WrapDistance(_distT_attr);
    }

    const ST_WrapDistance& CT_WrapTopBottom::get_distT_attr() const
    {    
    if (m_distT_attr)
    {
        return *m_distT_attr;
    }
    return ST_WrapDistance::default_instance();
    }

    bool CT_WrapTopBottom::has_distB_attr() const
    {    
    return m_has_distB_attr;
    }

    void CT_WrapTopBottom::set_distB_attr(const ST_WrapDistance& _distB_attr)
    {    
    m_has_distB_attr = true;
    m_distB_attr = new ST_WrapDistance(_distB_attr);
    }

    const ST_WrapDistance& CT_WrapTopBottom::get_distB_attr() const
    {    
    if (m_distB_attr)
    {
        return *m_distB_attr;
    }
    return ST_WrapDistance::default_instance();
    }

CT_WrapTopBottom* CT_WrapTopBottom::default_instance_ = NULL;

    // CT_PosH
    bool CT_PosH::has_align() const
    {    
    return m_has_align;
    }

    ST_AlignH* CT_PosH::mutable_align()
    {    
    
    m_has_posOffset = false;
    
    if (m_posOffset)
    {
        delete m_posOffset;
        m_posOffset = NULL;
    }
    ;
    
    m_has_align = true;
    if (!m_align)
    {
        m_align = new ST_AlignH();
    }
    return m_align;
    }

    const ST_AlignH& CT_PosH::get_align() const
    {    
    if (m_align)
    {
        return *m_align;
    }
    return ST_AlignH::default_instance();
    }

    bool CT_PosH::has_posOffset() const
    {    
    return m_has_posOffset;
    }

    ST_PositionOffset* CT_PosH::mutable_posOffset()
    {    
    
    m_has_align = false;
    
    if (m_align)
    {
        delete m_align;
        m_align = NULL;
    }
    ;
    
    m_has_posOffset = true;
    if (!m_posOffset)
    {
        m_posOffset = new ST_PositionOffset();
    }
    return m_posOffset;
    }

    const ST_PositionOffset& CT_PosH::get_posOffset() const
    {    
    if (m_posOffset)
    {
        return *m_posOffset;
    }
    return ST_PositionOffset::default_instance();
    }

    void CT_PosH::clear()
    {    
    m_has_relativeFrom_attr = false;
    
    if (m_relativeFrom_attr)
    {
        delete m_relativeFrom_attr;
        m_relativeFrom_attr = NULL;
    }
    
    }

    void CT_PosH::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
    if (m_has_relativeFrom_attr)
    {
        m_relativeFrom_attr->toXmlAttr("relativeFrom", _outStream);
    }
    
            _outStream << ">";
            
    if (m_has_align)
    {
        _outStream << "<align>" << m_align->toString() << "</align>";;
    }
    
    if (m_has_posOffset)
    {
        _outStream << "<posOffset>" << m_posOffset->toString() << "</posOffset>";;
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_PosH& CT_PosH::default_instance()
    {    
    if (!CT_PosH::default_instance_)
    {
        CT_PosH::default_instance_ = new CT_PosH();
    }
    return *CT_PosH::default_instance_;
    }

    bool CT_PosH::has_relativeFrom_attr() const
    {    
    return m_has_relativeFrom_attr;
    }

    void CT_PosH::set_relativeFrom_attr(const ST_RelFromH& _relativeFrom_attr)
    {    
    m_has_relativeFrom_attr = true;
    m_relativeFrom_attr = new ST_RelFromH(_relativeFrom_attr);
    }

    const ST_RelFromH& CT_PosH::get_relativeFrom_attr() const
    {    
    if (m_relativeFrom_attr)
    {
        return *m_relativeFrom_attr;
    }
    return ST_RelFromH::default_instance();
    }

CT_PosH* CT_PosH::default_instance_ = NULL;

    // CT_PosV
    bool CT_PosV::has_align() const
    {    
    return m_has_align;
    }

    ST_AlignV* CT_PosV::mutable_align()
    {    
    
    m_has_posOffset = false;
    
    if (m_posOffset)
    {
        delete m_posOffset;
        m_posOffset = NULL;
    }
    ;
    
    m_has_align = true;
    if (!m_align)
    {
        m_align = new ST_AlignV();
    }
    return m_align;
    }

    const ST_AlignV& CT_PosV::get_align() const
    {    
    if (m_align)
    {
        return *m_align;
    }
    return ST_AlignV::default_instance();
    }

    bool CT_PosV::has_posOffset() const
    {    
    return m_has_posOffset;
    }

    ST_PositionOffset* CT_PosV::mutable_posOffset()
    {    
    
    m_has_align = false;
    
    if (m_align)
    {
        delete m_align;
        m_align = NULL;
    }
    ;
    
    m_has_posOffset = true;
    if (!m_posOffset)
    {
        m_posOffset = new ST_PositionOffset();
    }
    return m_posOffset;
    }

    const ST_PositionOffset& CT_PosV::get_posOffset() const
    {    
    if (m_posOffset)
    {
        return *m_posOffset;
    }
    return ST_PositionOffset::default_instance();
    }

    void CT_PosV::clear()
    {    
    m_has_relativeFrom_attr = false;
    
    if (m_relativeFrom_attr)
    {
        delete m_relativeFrom_attr;
        m_relativeFrom_attr = NULL;
    }
    
    }

    void CT_PosV::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
    if (m_has_relativeFrom_attr)
    {
        m_relativeFrom_attr->toXmlAttr("relativeFrom", _outStream);
    }
    
            _outStream << ">";
            
    if (m_has_align)
    {
        _outStream << "<align>" << m_align->toString() << "</align>";;
    }
    
    if (m_has_posOffset)
    {
        _outStream << "<posOffset>" << m_posOffset->toString() << "</posOffset>";;
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_PosV& CT_PosV::default_instance()
    {    
    if (!CT_PosV::default_instance_)
    {
        CT_PosV::default_instance_ = new CT_PosV();
    }
    return *CT_PosV::default_instance_;
    }

    bool CT_PosV::has_relativeFrom_attr() const
    {    
    return m_has_relativeFrom_attr;
    }

    void CT_PosV::set_relativeFrom_attr(const ST_RelFromV& _relativeFrom_attr)
    {    
    m_has_relativeFrom_attr = true;
    m_relativeFrom_attr = new ST_RelFromV(_relativeFrom_attr);
    }

    const ST_RelFromV& CT_PosV::get_relativeFrom_attr() const
    {    
    if (m_relativeFrom_attr)
    {
        return *m_relativeFrom_attr;
    }
    return ST_RelFromV::default_instance();
    }

CT_PosV* CT_PosV::default_instance_ = NULL;

    // CT_Anchor
    bool CT_Anchor::has_a_simplePos() const
    {    
    return m_has_a_simplePos;
    }

    ns_a::CT_Point2D* CT_Anchor::mutable_a_simplePos()
    {    
    m_has_a_simplePos = true;
    if (!m_a_simplePos)
    {
        m_a_simplePos = new ns_a::CT_Point2D();
    }
    return m_a_simplePos;
    }

    const ns_a::CT_Point2D& CT_Anchor::get_a_simplePos() const
    {    
    if (m_a_simplePos)
    {
        return *m_a_simplePos;
    }
    return ns_a::CT_Point2D::default_instance();
    }

    bool CT_Anchor::has_positionH() const
    {    
    return m_has_positionH;
    }

    CT_PosH* CT_Anchor::mutable_positionH()
    {    
    m_has_positionH = true;
    if (!m_positionH)
    {
        m_positionH = new CT_PosH();
    }
    return m_positionH;
    }

    const CT_PosH& CT_Anchor::get_positionH() const
    {    
    if (m_positionH)
    {
        return *m_positionH;
    }
    return CT_PosH::default_instance();
    }

    bool CT_Anchor::has_positionV() const
    {    
    return m_has_positionV;
    }

    CT_PosV* CT_Anchor::mutable_positionV()
    {    
    m_has_positionV = true;
    if (!m_positionV)
    {
        m_positionV = new CT_PosV();
    }
    return m_positionV;
    }

    const CT_PosV& CT_Anchor::get_positionV() const
    {    
    if (m_positionV)
    {
        return *m_positionV;
    }
    return CT_PosV::default_instance();
    }

    bool CT_Anchor::has_a_extent() const
    {    
    return m_has_a_extent;
    }

    ns_a::CT_PositiveSize2D* CT_Anchor::mutable_a_extent()
    {    
    m_has_a_extent = true;
    if (!m_a_extent)
    {
        m_a_extent = new ns_a::CT_PositiveSize2D();
    }
    return m_a_extent;
    }

    const ns_a::CT_PositiveSize2D& CT_Anchor::get_a_extent() const
    {    
    if (m_a_extent)
    {
        return *m_a_extent;
    }
    return ns_a::CT_PositiveSize2D::default_instance();
    }

    bool CT_Anchor::has_effectExtent() const
    {    
    return m_has_effectExtent;
    }

    CT_EffectExtent* CT_Anchor::mutable_effectExtent()
    {    
    m_has_effectExtent = true;
    if (!m_effectExtent)
    {
        m_effectExtent = new CT_EffectExtent();
    }
    return m_effectExtent;
    }

    const CT_EffectExtent& CT_Anchor::get_effectExtent() const
    {    
    if (m_effectExtent)
    {
        return *m_effectExtent;
    }
    return CT_EffectExtent::default_instance();
    }

    bool CT_Anchor::has_wrapNone() const
    {    
    return m_has_wrapNone;
    }

    CT_WrapNone* CT_Anchor::mutable_wrapNone()
    {    
    
    m_has_wrapSquare = false;
    
    if (m_wrapSquare)
    {
        delete m_wrapSquare;
        m_wrapSquare = NULL;
    }
    ;
    
    m_has_wrapTight = false;
    
    if (m_wrapTight)
    {
        delete m_wrapTight;
        m_wrapTight = NULL;
    }
    ;
    
    m_has_wrapThrough = false;
    
    if (m_wrapThrough)
    {
        delete m_wrapThrough;
        m_wrapThrough = NULL;
    }
    ;
    
    m_has_wrapTopAndBottom = false;
    
    if (m_wrapTopAndBottom)
    {
        delete m_wrapTopAndBottom;
        m_wrapTopAndBottom = NULL;
    }
    ;
    
    m_has_wrapNone = true;
    if (!m_wrapNone)
    {
        m_wrapNone = new CT_WrapNone();
    }
    return m_wrapNone;
    }

    const CT_WrapNone& CT_Anchor::get_wrapNone() const
    {    
    if (m_wrapNone)
    {
        return *m_wrapNone;
    }
    return CT_WrapNone::default_instance();
    }

    bool CT_Anchor::has_wrapSquare() const
    {    
    return m_has_wrapSquare;
    }

    CT_WrapSquare* CT_Anchor::mutable_wrapSquare()
    {    
    
    m_has_wrapNone = false;
    
    if (m_wrapNone)
    {
        delete m_wrapNone;
        m_wrapNone = NULL;
    }
    ;
    
    m_has_wrapTight = false;
    
    if (m_wrapTight)
    {
        delete m_wrapTight;
        m_wrapTight = NULL;
    }
    ;
    
    m_has_wrapThrough = false;
    
    if (m_wrapThrough)
    {
        delete m_wrapThrough;
        m_wrapThrough = NULL;
    }
    ;
    
    m_has_wrapTopAndBottom = false;
    
    if (m_wrapTopAndBottom)
    {
        delete m_wrapTopAndBottom;
        m_wrapTopAndBottom = NULL;
    }
    ;
    
    m_has_wrapSquare = true;
    if (!m_wrapSquare)
    {
        m_wrapSquare = new CT_WrapSquare();
    }
    return m_wrapSquare;
    }

    const CT_WrapSquare& CT_Anchor::get_wrapSquare() const
    {    
    if (m_wrapSquare)
    {
        return *m_wrapSquare;
    }
    return CT_WrapSquare::default_instance();
    }

    bool CT_Anchor::has_wrapTight() const
    {    
    return m_has_wrapTight;
    }

    CT_WrapTight* CT_Anchor::mutable_wrapTight()
    {    
    
    m_has_wrapNone = false;
    
    if (m_wrapNone)
    {
        delete m_wrapNone;
        m_wrapNone = NULL;
    }
    ;
    
    m_has_wrapSquare = false;
    
    if (m_wrapSquare)
    {
        delete m_wrapSquare;
        m_wrapSquare = NULL;
    }
    ;
    
    m_has_wrapThrough = false;
    
    if (m_wrapThrough)
    {
        delete m_wrapThrough;
        m_wrapThrough = NULL;
    }
    ;
    
    m_has_wrapTopAndBottom = false;
    
    if (m_wrapTopAndBottom)
    {
        delete m_wrapTopAndBottom;
        m_wrapTopAndBottom = NULL;
    }
    ;
    
    m_has_wrapTight = true;
    if (!m_wrapTight)
    {
        m_wrapTight = new CT_WrapTight();
    }
    return m_wrapTight;
    }

    const CT_WrapTight& CT_Anchor::get_wrapTight() const
    {    
    if (m_wrapTight)
    {
        return *m_wrapTight;
    }
    return CT_WrapTight::default_instance();
    }

    bool CT_Anchor::has_wrapThrough() const
    {    
    return m_has_wrapThrough;
    }

    CT_WrapThrough* CT_Anchor::mutable_wrapThrough()
    {    
    
    m_has_wrapNone = false;
    
    if (m_wrapNone)
    {
        delete m_wrapNone;
        m_wrapNone = NULL;
    }
    ;
    
    m_has_wrapSquare = false;
    
    if (m_wrapSquare)
    {
        delete m_wrapSquare;
        m_wrapSquare = NULL;
    }
    ;
    
    m_has_wrapTight = false;
    
    if (m_wrapTight)
    {
        delete m_wrapTight;
        m_wrapTight = NULL;
    }
    ;
    
    m_has_wrapTopAndBottom = false;
    
    if (m_wrapTopAndBottom)
    {
        delete m_wrapTopAndBottom;
        m_wrapTopAndBottom = NULL;
    }
    ;
    
    m_has_wrapThrough = true;
    if (!m_wrapThrough)
    {
        m_wrapThrough = new CT_WrapThrough();
    }
    return m_wrapThrough;
    }

    const CT_WrapThrough& CT_Anchor::get_wrapThrough() const
    {    
    if (m_wrapThrough)
    {
        return *m_wrapThrough;
    }
    return CT_WrapThrough::default_instance();
    }

    bool CT_Anchor::has_wrapTopAndBottom() const
    {    
    return m_has_wrapTopAndBottom;
    }

    CT_WrapTopBottom* CT_Anchor::mutable_wrapTopAndBottom()
    {    
    
    m_has_wrapNone = false;
    
    if (m_wrapNone)
    {
        delete m_wrapNone;
        m_wrapNone = NULL;
    }
    ;
    
    m_has_wrapSquare = false;
    
    if (m_wrapSquare)
    {
        delete m_wrapSquare;
        m_wrapSquare = NULL;
    }
    ;
    
    m_has_wrapTight = false;
    
    if (m_wrapTight)
    {
        delete m_wrapTight;
        m_wrapTight = NULL;
    }
    ;
    
    m_has_wrapThrough = false;
    
    if (m_wrapThrough)
    {
        delete m_wrapThrough;
        m_wrapThrough = NULL;
    }
    ;
    
    m_has_wrapTopAndBottom = true;
    if (!m_wrapTopAndBottom)
    {
        m_wrapTopAndBottom = new CT_WrapTopBottom();
    }
    return m_wrapTopAndBottom;
    }

    const CT_WrapTopBottom& CT_Anchor::get_wrapTopAndBottom() const
    {    
    if (m_wrapTopAndBottom)
    {
        return *m_wrapTopAndBottom;
    }
    return CT_WrapTopBottom::default_instance();
    }

    bool CT_Anchor::has_a_docPr() const
    {    
    return m_has_a_docPr;
    }

    ns_a::CT_NonVisualDrawingProps* CT_Anchor::mutable_a_docPr()
    {    
    m_has_a_docPr = true;
    if (!m_a_docPr)
    {
        m_a_docPr = new ns_a::CT_NonVisualDrawingProps();
    }
    return m_a_docPr;
    }

    const ns_a::CT_NonVisualDrawingProps& CT_Anchor::get_a_docPr() const
    {    
    if (m_a_docPr)
    {
        return *m_a_docPr;
    }
    return ns_a::CT_NonVisualDrawingProps::default_instance();
    }

    bool CT_Anchor::has_a_cNvGraphicFramePr() const
    {    
    return m_has_a_cNvGraphicFramePr;
    }

    ns_a::CT_NonVisualGraphicFrameProperties* CT_Anchor::mutable_a_cNvGraphicFramePr()
    {    
    m_has_a_cNvGraphicFramePr = true;
    if (!m_a_cNvGraphicFramePr)
    {
        m_a_cNvGraphicFramePr = new ns_a::CT_NonVisualGraphicFrameProperties();
    }
    return m_a_cNvGraphicFramePr;
    }

    const ns_a::CT_NonVisualGraphicFrameProperties& CT_Anchor::get_a_cNvGraphicFramePr() const
    {    
    if (m_a_cNvGraphicFramePr)
    {
        return *m_a_cNvGraphicFramePr;
    }
    return ns_a::CT_NonVisualGraphicFrameProperties::default_instance();
    }

    bool CT_Anchor::has_a_graphic() const
    {    
    return m_has_a_graphic;
    }

    ns_a::CT_GraphicalObject* CT_Anchor::mutable_a_graphic()
    {    
    m_has_a_graphic = true;
    if (!m_a_graphic)
    {
        m_a_graphic = new ns_a::CT_GraphicalObject();
    }
    return m_a_graphic;
    }

    const ns_a::CT_GraphicalObject& CT_Anchor::get_a_graphic() const
    {    
    if (m_a_graphic)
    {
        return *m_a_graphic;
    }
    return ns_a::CT_GraphicalObject::default_instance();
    }

    void CT_Anchor::clear()
    {    
    m_has_distT_attr = false;
    
    if (m_distT_attr)
    {
        delete m_distT_attr;
        m_distT_attr = NULL;
    }
    
    
    m_has_distB_attr = false;
    
    if (m_distB_attr)
    {
        delete m_distB_attr;
        m_distB_attr = NULL;
    }
    
    
    m_has_distL_attr = false;
    
    if (m_distL_attr)
    {
        delete m_distL_attr;
        m_distL_attr = NULL;
    }
    
    
    m_has_distR_attr = false;
    
    if (m_distR_attr)
    {
        delete m_distR_attr;
        m_distR_attr = NULL;
    }
    
    
    m_has_simplePos_attr = false;
    m_simplePos_attr = false;
    
    m_has_relativeHeight_attr = false;
    m_relativeHeight_attr = 0;
    
    m_has_behindDoc_attr = false;
    m_behindDoc_attr = false;
    
    m_has_locked_attr = false;
    m_locked_attr = false;
    
    m_has_layoutInCell_attr = false;
    m_layoutInCell_attr = false;
    
    m_has_hidden_attr = false;
    m_hidden_attr = false;
    
    m_has_allowOverlap_attr = false;
    m_allowOverlap_attr = false;
    }

    void CT_Anchor::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
    if (m_has_distT_attr)
    {
        m_distT_attr->toXmlAttr("distT", _outStream);
    }
    
    
    if (m_has_distB_attr)
    {
        m_distB_attr->toXmlAttr("distB", _outStream);
    }
    
    
    if (m_has_distL_attr)
    {
        m_distL_attr->toXmlAttr("distL", _outStream);
    }
    
    
    if (m_has_distR_attr)
    {
        m_distR_attr->toXmlAttr("distR", _outStream);
    }
    
    
    if (m_has_simplePos_attr)
    {
        _outStream << " " << "simplePos" << "=\"" << XSD::XMLBooleanStr(m_simplePos_attr) << "\"";
    }
    
    
    if (m_has_relativeHeight_attr)
    {
        _outStream << " " << "relativeHeight" << "=\"" << m_relativeHeight_attr << "\"";
    }
    
    
    if (m_has_behindDoc_attr)
    {
        _outStream << " " << "behindDoc" << "=\"" << XSD::XMLBooleanStr(m_behindDoc_attr) << "\"";
    }
    
    
    if (m_has_locked_attr)
    {
        _outStream << " " << "locked" << "=\"" << XSD::XMLBooleanStr(m_locked_attr) << "\"";
    }
    
    
    if (m_has_layoutInCell_attr)
    {
        _outStream << " " << "layoutInCell" << "=\"" << XSD::XMLBooleanStr(m_layoutInCell_attr) << "\"";
    }
    
    
    if (m_has_hidden_attr)
    {
        _outStream << " " << "hidden" << "=\"" << XSD::XMLBooleanStr(m_hidden_attr) << "\"";
    }
    
    
    if (m_has_allowOverlap_attr)
    {
        _outStream << " " << "allowOverlap" << "=\"" << XSD::XMLBooleanStr(m_allowOverlap_attr) << "\"";
    }
    
            _outStream << ">";
            
    if (m_has_a_simplePos)
    {
        m_a_simplePos->toXmlElem("a:simplePos", "", _outStream);;
    }
    
    if (m_has_positionH)
    {
        m_positionH->toXmlElem("positionH", "", _outStream);;
    }
    
    if (m_has_positionV)
    {
        m_positionV->toXmlElem("positionV", "", _outStream);;
    }
    
    if (m_has_a_extent)
    {
        m_a_extent->toXmlElem("a:extent", "", _outStream);;
    }
    
    if (m_has_effectExtent)
    {
        m_effectExtent->toXmlElem("effectExtent", "", _outStream);;
    }
     
    if (m_has_wrapNone)
    {
        m_wrapNone->toXmlElem("wrapNone", "", _outStream);;
    }
    
    if (m_has_wrapSquare)
    {
        m_wrapSquare->toXmlElem("wrapSquare", "", _outStream);;
    }
    
    if (m_has_wrapTight)
    {
        m_wrapTight->toXmlElem("wrapTight", "", _outStream);;
    }
    
    if (m_has_wrapThrough)
    {
        m_wrapThrough->toXmlElem("wrapThrough", "", _outStream);;
    }
    
    if (m_has_wrapTopAndBottom)
    {
        m_wrapTopAndBottom->toXmlElem("wrapTopAndBottom", "", _outStream);;
    }
     
    if (m_has_a_docPr)
    {
        m_a_docPr->toXmlElem("a:docPr", "", _outStream);;
    }
    
    if (m_has_a_cNvGraphicFramePr)
    {
        m_a_cNvGraphicFramePr->toXmlElem("a:cNvGraphicFramePr", "", _outStream);;
    }
    
    if (m_has_a_graphic)
    {
        m_a_graphic->toXmlElem("a:graphic", "", _outStream);;
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_Anchor& CT_Anchor::default_instance()
    {    
    if (!CT_Anchor::default_instance_)
    {
        CT_Anchor::default_instance_ = new CT_Anchor();
    }
    return *CT_Anchor::default_instance_;
    }

    bool CT_Anchor::has_distT_attr() const
    {    
    return m_has_distT_attr;
    }

    void CT_Anchor::set_distT_attr(const ST_WrapDistance& _distT_attr)
    {    
    m_has_distT_attr = true;
    m_distT_attr = new ST_WrapDistance(_distT_attr);
    }

    const ST_WrapDistance& CT_Anchor::get_distT_attr() const
    {    
    if (m_distT_attr)
    {
        return *m_distT_attr;
    }
    return ST_WrapDistance::default_instance();
    }

    bool CT_Anchor::has_distB_attr() const
    {    
    return m_has_distB_attr;
    }

    void CT_Anchor::set_distB_attr(const ST_WrapDistance& _distB_attr)
    {    
    m_has_distB_attr = true;
    m_distB_attr = new ST_WrapDistance(_distB_attr);
    }

    const ST_WrapDistance& CT_Anchor::get_distB_attr() const
    {    
    if (m_distB_attr)
    {
        return *m_distB_attr;
    }
    return ST_WrapDistance::default_instance();
    }

    bool CT_Anchor::has_distL_attr() const
    {    
    return m_has_distL_attr;
    }

    void CT_Anchor::set_distL_attr(const ST_WrapDistance& _distL_attr)
    {    
    m_has_distL_attr = true;
    m_distL_attr = new ST_WrapDistance(_distL_attr);
    }

    const ST_WrapDistance& CT_Anchor::get_distL_attr() const
    {    
    if (m_distL_attr)
    {
        return *m_distL_attr;
    }
    return ST_WrapDistance::default_instance();
    }

    bool CT_Anchor::has_distR_attr() const
    {    
    return m_has_distR_attr;
    }

    void CT_Anchor::set_distR_attr(const ST_WrapDistance& _distR_attr)
    {    
    m_has_distR_attr = true;
    m_distR_attr = new ST_WrapDistance(_distR_attr);
    }

    const ST_WrapDistance& CT_Anchor::get_distR_attr() const
    {    
    if (m_distR_attr)
    {
        return *m_distR_attr;
    }
    return ST_WrapDistance::default_instance();
    }

    bool CT_Anchor::has_simplePos_attr() const
    {    
    return m_has_simplePos_attr;
    }

    void CT_Anchor::set_simplePos_attr(const XSD::boolean_& _simplePos_attr)
    {    
    m_has_simplePos_attr = true;
    m_simplePos_attr = _simplePos_attr;
    }

    const XSD::boolean_& CT_Anchor::get_simplePos_attr() const
    {    
    return m_simplePos_attr;
    }

    bool CT_Anchor::has_relativeHeight_attr() const
    {    
    return m_has_relativeHeight_attr;
    }

    void CT_Anchor::set_relativeHeight_attr(const XSD::unsignedInt_& _relativeHeight_attr)
    {    
    m_has_relativeHeight_attr = true;
    m_relativeHeight_attr = _relativeHeight_attr;
    }

    const XSD::unsignedInt_& CT_Anchor::get_relativeHeight_attr() const
    {    
    return m_relativeHeight_attr;
    }

    bool CT_Anchor::has_behindDoc_attr() const
    {    
    return m_has_behindDoc_attr;
    }

    void CT_Anchor::set_behindDoc_attr(const XSD::boolean_& _behindDoc_attr)
    {    
    m_has_behindDoc_attr = true;
    m_behindDoc_attr = _behindDoc_attr;
    }

    const XSD::boolean_& CT_Anchor::get_behindDoc_attr() const
    {    
    return m_behindDoc_attr;
    }

    bool CT_Anchor::has_locked_attr() const
    {    
    return m_has_locked_attr;
    }

    void CT_Anchor::set_locked_attr(const XSD::boolean_& _locked_attr)
    {    
    m_has_locked_attr = true;
    m_locked_attr = _locked_attr;
    }

    const XSD::boolean_& CT_Anchor::get_locked_attr() const
    {    
    return m_locked_attr;
    }

    bool CT_Anchor::has_layoutInCell_attr() const
    {    
    return m_has_layoutInCell_attr;
    }

    void CT_Anchor::set_layoutInCell_attr(const XSD::boolean_& _layoutInCell_attr)
    {    
    m_has_layoutInCell_attr = true;
    m_layoutInCell_attr = _layoutInCell_attr;
    }

    const XSD::boolean_& CT_Anchor::get_layoutInCell_attr() const
    {    
    return m_layoutInCell_attr;
    }

    bool CT_Anchor::has_hidden_attr() const
    {    
    return m_has_hidden_attr;
    }

    void CT_Anchor::set_hidden_attr(const XSD::boolean_& _hidden_attr)
    {    
    m_has_hidden_attr = true;
    m_hidden_attr = _hidden_attr;
    }

    const XSD::boolean_& CT_Anchor::get_hidden_attr() const
    {    
    return m_hidden_attr;
    }

    bool CT_Anchor::has_allowOverlap_attr() const
    {    
    return m_has_allowOverlap_attr;
    }

    void CT_Anchor::set_allowOverlap_attr(const XSD::boolean_& _allowOverlap_attr)
    {    
    m_has_allowOverlap_attr = true;
    m_allowOverlap_attr = _allowOverlap_attr;
    }

    const XSD::boolean_& CT_Anchor::get_allowOverlap_attr() const
    {    
    return m_allowOverlap_attr;
    }

CT_Anchor* CT_Anchor::default_instance_ = NULL;

    // CT_TxbxContent
    void CT_TxbxContent::clear()
    {    }

    void CT_TxbxContent::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
            _outStream << ">";
            
            _outStream << "</" << _elemName << ">";
                }

    const CT_TxbxContent& CT_TxbxContent::default_instance()
    {    
    if (!CT_TxbxContent::default_instance_)
    {
        CT_TxbxContent::default_instance_ = new CT_TxbxContent();
    }
    return *CT_TxbxContent::default_instance_;
    }

CT_TxbxContent* CT_TxbxContent::default_instance_ = NULL;

    // CT_TextboxInfo
    bool CT_TextboxInfo::has_txbxContent() const
    {    
    return m_has_txbxContent;
    }

    CT_TxbxContent* CT_TextboxInfo::mutable_txbxContent()
    {    
    m_has_txbxContent = true;
    if (!m_txbxContent)
    {
        m_txbxContent = new CT_TxbxContent();
    }
    return m_txbxContent;
    }

    const CT_TxbxContent& CT_TextboxInfo::get_txbxContent() const
    {    
    if (m_txbxContent)
    {
        return *m_txbxContent;
    }
    return CT_TxbxContent::default_instance();
    }

    bool CT_TextboxInfo::has_a_extLst() const
    {    
    return m_has_a_extLst;
    }

    ns_a::CT_OfficeArtExtensionList* CT_TextboxInfo::mutable_a_extLst()
    {    
    m_has_a_extLst = true;
    if (!m_a_extLst)
    {
        m_a_extLst = new ns_a::CT_OfficeArtExtensionList();
    }
    return m_a_extLst;
    }

    const ns_a::CT_OfficeArtExtensionList& CT_TextboxInfo::get_a_extLst() const
    {    
    if (m_a_extLst)
    {
        return *m_a_extLst;
    }
    return ns_a::CT_OfficeArtExtensionList::default_instance();
    }

    void CT_TextboxInfo::clear()
    {    
    m_has_id_attr = false;
    m_id_attr = 0;
    }

    void CT_TextboxInfo::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
    if (m_has_id_attr)
    {
        _outStream << " " << "id" << "=\"" << m_id_attr << "\"";
    }
    
            _outStream << ">";
            
    if (m_has_txbxContent)
    {
        m_txbxContent->toXmlElem("txbxContent", "", _outStream);;
    }
    
    if (m_has_a_extLst)
    {
        m_a_extLst->toXmlElem("a:extLst", "", _outStream);;
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_TextboxInfo& CT_TextboxInfo::default_instance()
    {    
    if (!CT_TextboxInfo::default_instance_)
    {
        CT_TextboxInfo::default_instance_ = new CT_TextboxInfo();
    }
    return *CT_TextboxInfo::default_instance_;
    }

    bool CT_TextboxInfo::has_id_attr() const
    {    
    return m_has_id_attr;
    }

    void CT_TextboxInfo::set_id_attr(const XSD::unsignedShort_& _id_attr)
    {    
    m_has_id_attr = true;
    m_id_attr = _id_attr;
    }

    const XSD::unsignedShort_& CT_TextboxInfo::get_id_attr() const
    {    
    return m_id_attr;
    }

CT_TextboxInfo* CT_TextboxInfo::default_instance_ = NULL;

    // CT_LinkedTextboxInformation
    bool CT_LinkedTextboxInformation::has_a_extLst() const
    {    
    return m_has_a_extLst;
    }

    ns_a::CT_OfficeArtExtensionList* CT_LinkedTextboxInformation::mutable_a_extLst()
    {    
    m_has_a_extLst = true;
    if (!m_a_extLst)
    {
        m_a_extLst = new ns_a::CT_OfficeArtExtensionList();
    }
    return m_a_extLst;
    }

    const ns_a::CT_OfficeArtExtensionList& CT_LinkedTextboxInformation::get_a_extLst() const
    {    
    if (m_a_extLst)
    {
        return *m_a_extLst;
    }
    return ns_a::CT_OfficeArtExtensionList::default_instance();
    }

    void CT_LinkedTextboxInformation::clear()
    {    
    m_has_id_attr = false;
    m_id_attr = 0;
    
    m_has_seq_attr = false;
    m_seq_attr = 0;
    }

    void CT_LinkedTextboxInformation::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
    if (m_has_id_attr)
    {
        _outStream << " " << "id" << "=\"" << m_id_attr << "\"";
    }
    
    
    if (m_has_seq_attr)
    {
        _outStream << " " << "seq" << "=\"" << m_seq_attr << "\"";
    }
    
            _outStream << ">";
            
    if (m_has_a_extLst)
    {
        m_a_extLst->toXmlElem("a:extLst", "", _outStream);;
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_LinkedTextboxInformation& CT_LinkedTextboxInformation::default_instance()
    {    
    if (!CT_LinkedTextboxInformation::default_instance_)
    {
        CT_LinkedTextboxInformation::default_instance_ = new CT_LinkedTextboxInformation();
    }
    return *CT_LinkedTextboxInformation::default_instance_;
    }

    bool CT_LinkedTextboxInformation::has_id_attr() const
    {    
    return m_has_id_attr;
    }

    void CT_LinkedTextboxInformation::set_id_attr(const XSD::unsignedShort_& _id_attr)
    {    
    m_has_id_attr = true;
    m_id_attr = _id_attr;
    }

    const XSD::unsignedShort_& CT_LinkedTextboxInformation::get_id_attr() const
    {    
    return m_id_attr;
    }

    bool CT_LinkedTextboxInformation::has_seq_attr() const
    {    
    return m_has_seq_attr;
    }

    void CT_LinkedTextboxInformation::set_seq_attr(const XSD::unsignedShort_& _seq_attr)
    {    
    m_has_seq_attr = true;
    m_seq_attr = _seq_attr;
    }

    const XSD::unsignedShort_& CT_LinkedTextboxInformation::get_seq_attr() const
    {    
    return m_seq_attr;
    }

CT_LinkedTextboxInformation* CT_LinkedTextboxInformation::default_instance_ = NULL;

    // CT_WordprocessingShape
    bool CT_WordprocessingShape::has_a_cNvPr() const
    {    
    return m_has_a_cNvPr;
    }

    ns_a::CT_NonVisualDrawingProps* CT_WordprocessingShape::mutable_a_cNvPr()
    {    
    m_has_a_cNvPr = true;
    if (!m_a_cNvPr)
    {
        m_a_cNvPr = new ns_a::CT_NonVisualDrawingProps();
    }
    return m_a_cNvPr;
    }

    const ns_a::CT_NonVisualDrawingProps& CT_WordprocessingShape::get_a_cNvPr() const
    {    
    if (m_a_cNvPr)
    {
        return *m_a_cNvPr;
    }
    return ns_a::CT_NonVisualDrawingProps::default_instance();
    }

    bool CT_WordprocessingShape::has_a_cNvSpPr() const
    {    
    return m_has_a_cNvSpPr;
    }

    ns_a::CT_NonVisualDrawingShapeProps* CT_WordprocessingShape::mutable_a_cNvSpPr()
    {    
    
    m_has_a_cNvCnPr = false;
    
    if (m_a_cNvCnPr)
    {
        delete m_a_cNvCnPr;
        m_a_cNvCnPr = NULL;
    }
    ;
    
    m_has_a_cNvSpPr = true;
    if (!m_a_cNvSpPr)
    {
        m_a_cNvSpPr = new ns_a::CT_NonVisualDrawingShapeProps();
    }
    return m_a_cNvSpPr;
    }

    const ns_a::CT_NonVisualDrawingShapeProps& CT_WordprocessingShape::get_a_cNvSpPr() const
    {    
    if (m_a_cNvSpPr)
    {
        return *m_a_cNvSpPr;
    }
    return ns_a::CT_NonVisualDrawingShapeProps::default_instance();
    }

    bool CT_WordprocessingShape::has_a_cNvCnPr() const
    {    
    return m_has_a_cNvCnPr;
    }

    ns_a::CT_NonVisualConnectorProperties* CT_WordprocessingShape::mutable_a_cNvCnPr()
    {    
    
    m_has_a_cNvSpPr = false;
    
    if (m_a_cNvSpPr)
    {
        delete m_a_cNvSpPr;
        m_a_cNvSpPr = NULL;
    }
    ;
    
    m_has_a_cNvCnPr = true;
    if (!m_a_cNvCnPr)
    {
        m_a_cNvCnPr = new ns_a::CT_NonVisualConnectorProperties();
    }
    return m_a_cNvCnPr;
    }

    const ns_a::CT_NonVisualConnectorProperties& CT_WordprocessingShape::get_a_cNvCnPr() const
    {    
    if (m_a_cNvCnPr)
    {
        return *m_a_cNvCnPr;
    }
    return ns_a::CT_NonVisualConnectorProperties::default_instance();
    }

    bool CT_WordprocessingShape::has_a_spPr() const
    {    
    return m_has_a_spPr;
    }

    ns_a::CT_ShapeProperties* CT_WordprocessingShape::mutable_a_spPr()
    {    
    m_has_a_spPr = true;
    if (!m_a_spPr)
    {
        m_a_spPr = new ns_a::CT_ShapeProperties();
    }
    return m_a_spPr;
    }

    const ns_a::CT_ShapeProperties& CT_WordprocessingShape::get_a_spPr() const
    {    
    if (m_a_spPr)
    {
        return *m_a_spPr;
    }
    return ns_a::CT_ShapeProperties::default_instance();
    }

    bool CT_WordprocessingShape::has_a_style() const
    {    
    return m_has_a_style;
    }

    ns_a::CT_ShapeStyle* CT_WordprocessingShape::mutable_a_style()
    {    
    m_has_a_style = true;
    if (!m_a_style)
    {
        m_a_style = new ns_a::CT_ShapeStyle();
    }
    return m_a_style;
    }

    const ns_a::CT_ShapeStyle& CT_WordprocessingShape::get_a_style() const
    {    
    if (m_a_style)
    {
        return *m_a_style;
    }
    return ns_a::CT_ShapeStyle::default_instance();
    }

    bool CT_WordprocessingShape::has_a_extLst() const
    {    
    return m_has_a_extLst;
    }

    ns_a::CT_OfficeArtExtensionList* CT_WordprocessingShape::mutable_a_extLst()
    {    
    m_has_a_extLst = true;
    if (!m_a_extLst)
    {
        m_a_extLst = new ns_a::CT_OfficeArtExtensionList();
    }
    return m_a_extLst;
    }

    const ns_a::CT_OfficeArtExtensionList& CT_WordprocessingShape::get_a_extLst() const
    {    
    if (m_a_extLst)
    {
        return *m_a_extLst;
    }
    return ns_a::CT_OfficeArtExtensionList::default_instance();
    }

    bool CT_WordprocessingShape::has_txbx() const
    {    
    return m_has_txbx;
    }

    CT_TextboxInfo* CT_WordprocessingShape::mutable_txbx()
    {    
    
    m_has_linkedTxbx = false;
    
    if (m_linkedTxbx)
    {
        delete m_linkedTxbx;
        m_linkedTxbx = NULL;
    }
    ;
    
    m_has_txbx = true;
    if (!m_txbx)
    {
        m_txbx = new CT_TextboxInfo();
    }
    return m_txbx;
    }

    const CT_TextboxInfo& CT_WordprocessingShape::get_txbx() const
    {    
    if (m_txbx)
    {
        return *m_txbx;
    }
    return CT_TextboxInfo::default_instance();
    }

    bool CT_WordprocessingShape::has_linkedTxbx() const
    {    
    return m_has_linkedTxbx;
    }

    CT_LinkedTextboxInformation* CT_WordprocessingShape::mutable_linkedTxbx()
    {    
    
    m_has_txbx = false;
    
    if (m_txbx)
    {
        delete m_txbx;
        m_txbx = NULL;
    }
    ;
    
    m_has_linkedTxbx = true;
    if (!m_linkedTxbx)
    {
        m_linkedTxbx = new CT_LinkedTextboxInformation();
    }
    return m_linkedTxbx;
    }

    const CT_LinkedTextboxInformation& CT_WordprocessingShape::get_linkedTxbx() const
    {    
    if (m_linkedTxbx)
    {
        return *m_linkedTxbx;
    }
    return CT_LinkedTextboxInformation::default_instance();
    }

    bool CT_WordprocessingShape::has_a_bodyPr() const
    {    
    return m_has_a_bodyPr;
    }

    ns_a::CT_TextBodyProperties* CT_WordprocessingShape::mutable_a_bodyPr()
    {    
    m_has_a_bodyPr = true;
    if (!m_a_bodyPr)
    {
        m_a_bodyPr = new ns_a::CT_TextBodyProperties();
    }
    return m_a_bodyPr;
    }

    const ns_a::CT_TextBodyProperties& CT_WordprocessingShape::get_a_bodyPr() const
    {    
    if (m_a_bodyPr)
    {
        return *m_a_bodyPr;
    }
    return ns_a::CT_TextBodyProperties::default_instance();
    }

    void CT_WordprocessingShape::clear()
    {    
    m_has_normalEastAsianFlow_attr = false;
    m_normalEastAsianFlow_attr = false;
    }

    void CT_WordprocessingShape::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
    if (m_has_normalEastAsianFlow_attr)
    {
        _outStream << " " << "normalEastAsianFlow" << "=\"" << XSD::XMLBooleanStr(m_normalEastAsianFlow_attr) << "\"";
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
    
    if (m_has_a_cNvCnPr)
    {
        m_a_cNvCnPr->toXmlElem("a:cNvCnPr", "", _outStream);;
    }
     
    if (m_has_a_spPr)
    {
        m_a_spPr->toXmlElem("a:spPr", "", _outStream);;
    }
    
    if (m_has_a_style)
    {
        m_a_style->toXmlElem("a:style", "", _outStream);;
    }
    
    if (m_has_a_extLst)
    {
        m_a_extLst->toXmlElem("a:extLst", "", _outStream);;
    }
     
    if (m_has_txbx)
    {
        m_txbx->toXmlElem("txbx", "", _outStream);;
    }
    
    if (m_has_linkedTxbx)
    {
        m_linkedTxbx->toXmlElem("linkedTxbx", "", _outStream);;
    }
     
    if (m_has_a_bodyPr)
    {
        m_a_bodyPr->toXmlElem("a:bodyPr", "", _outStream);;
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_WordprocessingShape& CT_WordprocessingShape::default_instance()
    {    
    if (!CT_WordprocessingShape::default_instance_)
    {
        CT_WordprocessingShape::default_instance_ = new CT_WordprocessingShape();
    }
    return *CT_WordprocessingShape::default_instance_;
    }

    bool CT_WordprocessingShape::has_normalEastAsianFlow_attr() const
    {    
    return m_has_normalEastAsianFlow_attr;
    }

    void CT_WordprocessingShape::set_normalEastAsianFlow_attr(const XSD::boolean_& _normalEastAsianFlow_attr)
    {    
    m_has_normalEastAsianFlow_attr = true;
    m_normalEastAsianFlow_attr = _normalEastAsianFlow_attr;
    }

    const XSD::boolean_& CT_WordprocessingShape::get_normalEastAsianFlow_attr() const
    {    
    return m_normalEastAsianFlow_attr;
    }

CT_WordprocessingShape* CT_WordprocessingShape::default_instance_ = NULL;

    // CT_GraphicFrame
    bool CT_GraphicFrame::has_a_cNvPr() const
    {    
    return m_has_a_cNvPr;
    }

    ns_a::CT_NonVisualDrawingProps* CT_GraphicFrame::mutable_a_cNvPr()
    {    
    m_has_a_cNvPr = true;
    if (!m_a_cNvPr)
    {
        m_a_cNvPr = new ns_a::CT_NonVisualDrawingProps();
    }
    return m_a_cNvPr;
    }

    const ns_a::CT_NonVisualDrawingProps& CT_GraphicFrame::get_a_cNvPr() const
    {    
    if (m_a_cNvPr)
    {
        return *m_a_cNvPr;
    }
    return ns_a::CT_NonVisualDrawingProps::default_instance();
    }

    bool CT_GraphicFrame::has_a_cNvFrPr() const
    {    
    return m_has_a_cNvFrPr;
    }

    ns_a::CT_NonVisualGraphicFrameProperties* CT_GraphicFrame::mutable_a_cNvFrPr()
    {    
    m_has_a_cNvFrPr = true;
    if (!m_a_cNvFrPr)
    {
        m_a_cNvFrPr = new ns_a::CT_NonVisualGraphicFrameProperties();
    }
    return m_a_cNvFrPr;
    }

    const ns_a::CT_NonVisualGraphicFrameProperties& CT_GraphicFrame::get_a_cNvFrPr() const
    {    
    if (m_a_cNvFrPr)
    {
        return *m_a_cNvFrPr;
    }
    return ns_a::CT_NonVisualGraphicFrameProperties::default_instance();
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

    bool CT_GraphicFrame::has_a_extLst() const
    {    
    return m_has_a_extLst;
    }

    ns_a::CT_OfficeArtExtensionList* CT_GraphicFrame::mutable_a_extLst()
    {    
    m_has_a_extLst = true;
    if (!m_a_extLst)
    {
        m_a_extLst = new ns_a::CT_OfficeArtExtensionList();
    }
    return m_a_extLst;
    }

    const ns_a::CT_OfficeArtExtensionList& CT_GraphicFrame::get_a_extLst() const
    {    
    if (m_a_extLst)
    {
        return *m_a_extLst;
    }
    return ns_a::CT_OfficeArtExtensionList::default_instance();
    }

    void CT_GraphicFrame::clear()
    {    }

    void CT_GraphicFrame::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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
    
    if (m_has_a_cNvFrPr)
    {
        m_a_cNvFrPr->toXmlElem("a:cNvFrPr", "", _outStream);;
    }
    
    if (m_has_a_xfrm)
    {
        m_a_xfrm->toXmlElem("a:xfrm", "", _outStream);;
    }
    
    if (m_has_a_graphic)
    {
        m_a_graphic->toXmlElem("a:graphic", "", _outStream);;
    }
    
    if (m_has_a_extLst)
    {
        m_a_extLst->toXmlElem("a:extLst", "", _outStream);;
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

CT_GraphicFrame* CT_GraphicFrame::default_instance_ = NULL;

    // CT_WordprocessingContentPartNonVisual
    bool CT_WordprocessingContentPartNonVisual::has_a_cNvPr() const
    {    
    return m_has_a_cNvPr;
    }

    ns_a::CT_NonVisualDrawingProps* CT_WordprocessingContentPartNonVisual::mutable_a_cNvPr()
    {    
    m_has_a_cNvPr = true;
    if (!m_a_cNvPr)
    {
        m_a_cNvPr = new ns_a::CT_NonVisualDrawingProps();
    }
    return m_a_cNvPr;
    }

    const ns_a::CT_NonVisualDrawingProps& CT_WordprocessingContentPartNonVisual::get_a_cNvPr() const
    {    
    if (m_a_cNvPr)
    {
        return *m_a_cNvPr;
    }
    return ns_a::CT_NonVisualDrawingProps::default_instance();
    }

    bool CT_WordprocessingContentPartNonVisual::has_a_cNvContentPartPr() const
    {    
    return m_has_a_cNvContentPartPr;
    }

    ns_a::CT_NonVisualContentPartProperties* CT_WordprocessingContentPartNonVisual::mutable_a_cNvContentPartPr()
    {    
    m_has_a_cNvContentPartPr = true;
    if (!m_a_cNvContentPartPr)
    {
        m_a_cNvContentPartPr = new ns_a::CT_NonVisualContentPartProperties();
    }
    return m_a_cNvContentPartPr;
    }

    const ns_a::CT_NonVisualContentPartProperties& CT_WordprocessingContentPartNonVisual::get_a_cNvContentPartPr() const
    {    
    if (m_a_cNvContentPartPr)
    {
        return *m_a_cNvContentPartPr;
    }
    return ns_a::CT_NonVisualContentPartProperties::default_instance();
    }

    void CT_WordprocessingContentPartNonVisual::clear()
    {    }

    void CT_WordprocessingContentPartNonVisual::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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
    
    if (m_has_a_cNvContentPartPr)
    {
        m_a_cNvContentPartPr->toXmlElem("a:cNvContentPartPr", "", _outStream);;
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_WordprocessingContentPartNonVisual& CT_WordprocessingContentPartNonVisual::default_instance()
    {    
    if (!CT_WordprocessingContentPartNonVisual::default_instance_)
    {
        CT_WordprocessingContentPartNonVisual::default_instance_ = new CT_WordprocessingContentPartNonVisual();
    }
    return *CT_WordprocessingContentPartNonVisual::default_instance_;
    }

CT_WordprocessingContentPartNonVisual* CT_WordprocessingContentPartNonVisual::default_instance_ = NULL;

    // CT_WordprocessingContentPart
    bool CT_WordprocessingContentPart::has_nvContentPartPr() const
    {    
    return m_has_nvContentPartPr;
    }

    CT_WordprocessingContentPartNonVisual* CT_WordprocessingContentPart::mutable_nvContentPartPr()
    {    
    m_has_nvContentPartPr = true;
    if (!m_nvContentPartPr)
    {
        m_nvContentPartPr = new CT_WordprocessingContentPartNonVisual();
    }
    return m_nvContentPartPr;
    }

    const CT_WordprocessingContentPartNonVisual& CT_WordprocessingContentPart::get_nvContentPartPr() const
    {    
    if (m_nvContentPartPr)
    {
        return *m_nvContentPartPr;
    }
    return CT_WordprocessingContentPartNonVisual::default_instance();
    }

    bool CT_WordprocessingContentPart::has_a_xfrm() const
    {    
    return m_has_a_xfrm;
    }

    ns_a::CT_Transform2D* CT_WordprocessingContentPart::mutable_a_xfrm()
    {    
    m_has_a_xfrm = true;
    if (!m_a_xfrm)
    {
        m_a_xfrm = new ns_a::CT_Transform2D();
    }
    return m_a_xfrm;
    }

    const ns_a::CT_Transform2D& CT_WordprocessingContentPart::get_a_xfrm() const
    {    
    if (m_a_xfrm)
    {
        return *m_a_xfrm;
    }
    return ns_a::CT_Transform2D::default_instance();
    }

    bool CT_WordprocessingContentPart::has_a_extLst() const
    {    
    return m_has_a_extLst;
    }

    ns_a::CT_OfficeArtExtensionList* CT_WordprocessingContentPart::mutable_a_extLst()
    {    
    m_has_a_extLst = true;
    if (!m_a_extLst)
    {
        m_a_extLst = new ns_a::CT_OfficeArtExtensionList();
    }
    return m_a_extLst;
    }

    const ns_a::CT_OfficeArtExtensionList& CT_WordprocessingContentPart::get_a_extLst() const
    {    
    if (m_a_extLst)
    {
        return *m_a_extLst;
    }
    return ns_a::CT_OfficeArtExtensionList::default_instance();
    }

    void CT_WordprocessingContentPart::clear()
    {    
    m_has_a_bwMode_attr = false;
    
    if (m_a_bwMode_attr)
    {
        delete m_a_bwMode_attr;
        m_a_bwMode_attr = NULL;
    }
    
    
    m_has_r_id_attr = false;
    
    if (m_r_id_attr)
    {
        delete m_r_id_attr;
        m_r_id_attr = NULL;
    }
    
    }

    void CT_WordprocessingContentPart::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
    if (m_has_a_bwMode_attr)
    {
        m_a_bwMode_attr->toXmlAttr("bwMode", _outStream);
    }
    
    
    if (m_has_r_id_attr)
    {
        m_r_id_attr->toXmlAttr("id", _outStream);
    }
    
            _outStream << ">";
            
    if (m_has_nvContentPartPr)
    {
        m_nvContentPartPr->toXmlElem("nvContentPartPr", "", _outStream);;
    }
    
    if (m_has_a_xfrm)
    {
        m_a_xfrm->toXmlElem("a:xfrm", "", _outStream);;
    }
    
    if (m_has_a_extLst)
    {
        m_a_extLst->toXmlElem("a:extLst", "", _outStream);;
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_WordprocessingContentPart& CT_WordprocessingContentPart::default_instance()
    {    
    if (!CT_WordprocessingContentPart::default_instance_)
    {
        CT_WordprocessingContentPart::default_instance_ = new CT_WordprocessingContentPart();
    }
    return *CT_WordprocessingContentPart::default_instance_;
    }

    bool CT_WordprocessingContentPart::has_a_bwMode_attr() const
    {    
    return m_has_a_bwMode_attr;
    }

    void CT_WordprocessingContentPart::set_a_bwMode_attr(const ns_a::ST_BlackWhiteMode& _a_bwMode_attr)
    {    
    m_has_a_bwMode_attr = true;
    m_a_bwMode_attr = new ns_a::ST_BlackWhiteMode(_a_bwMode_attr);
    }

    const ns_a::ST_BlackWhiteMode& CT_WordprocessingContentPart::get_a_bwMode_attr() const
    {    
    if (m_a_bwMode_attr)
    {
        return *m_a_bwMode_attr;
    }
    return ns_a::ST_BlackWhiteMode::default_instance();
    }

    bool CT_WordprocessingContentPart::has_r_id_attr() const
    {    
    return m_has_r_id_attr;
    }

    void CT_WordprocessingContentPart::set_r_id_attr(const ns_r::ST_RelationshipId& _r_id_attr)
    {    
    m_has_r_id_attr = true;
    m_r_id_attr = new ns_r::ST_RelationshipId(_r_id_attr);
    }

    const ns_r::ST_RelationshipId& CT_WordprocessingContentPart::get_r_id_attr() const
    {    
    if (m_r_id_attr)
    {
        return *m_r_id_attr;
    }
    return ns_r::ST_RelationshipId::default_instance();
    }

CT_WordprocessingContentPart* CT_WordprocessingContentPart::default_instance_ = NULL;

    // CT_WordprocessingGroup
    bool CT_WordprocessingGroup::has_a_cNvPr() const
    {    
    return m_has_a_cNvPr;
    }

    ns_a::CT_NonVisualDrawingProps* CT_WordprocessingGroup::mutable_a_cNvPr()
    {    
    m_has_a_cNvPr = true;
    if (!m_a_cNvPr)
    {
        m_a_cNvPr = new ns_a::CT_NonVisualDrawingProps();
    }
    return m_a_cNvPr;
    }

    const ns_a::CT_NonVisualDrawingProps& CT_WordprocessingGroup::get_a_cNvPr() const
    {    
    if (m_a_cNvPr)
    {
        return *m_a_cNvPr;
    }
    return ns_a::CT_NonVisualDrawingProps::default_instance();
    }

    bool CT_WordprocessingGroup::has_a_cNvGrpSpPr() const
    {    
    return m_has_a_cNvGrpSpPr;
    }

    ns_a::CT_NonVisualGroupDrawingShapeProps* CT_WordprocessingGroup::mutable_a_cNvGrpSpPr()
    {    
    m_has_a_cNvGrpSpPr = true;
    if (!m_a_cNvGrpSpPr)
    {
        m_a_cNvGrpSpPr = new ns_a::CT_NonVisualGroupDrawingShapeProps();
    }
    return m_a_cNvGrpSpPr;
    }

    const ns_a::CT_NonVisualGroupDrawingShapeProps& CT_WordprocessingGroup::get_a_cNvGrpSpPr() const
    {    
    if (m_a_cNvGrpSpPr)
    {
        return *m_a_cNvGrpSpPr;
    }
    return ns_a::CT_NonVisualGroupDrawingShapeProps::default_instance();
    }

    bool CT_WordprocessingGroup::has_a_grpSpPr() const
    {    
    return m_has_a_grpSpPr;
    }

    ns_a::CT_GroupShapeProperties* CT_WordprocessingGroup::mutable_a_grpSpPr()
    {    
    m_has_a_grpSpPr = true;
    if (!m_a_grpSpPr)
    {
        m_a_grpSpPr = new ns_a::CT_GroupShapeProperties();
    }
    return m_a_grpSpPr;
    }

    const ns_a::CT_GroupShapeProperties& CT_WordprocessingGroup::get_a_grpSpPr() const
    {    
    if (m_a_grpSpPr)
    {
        return *m_a_grpSpPr;
    }
    return ns_a::CT_GroupShapeProperties::default_instance();
    }

    CT_WordprocessingShape* CT_WordprocessingGroup::add_wsp()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_WordprocessingShape* pNewChild = pChildGroup->mutable_wsp();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_WordprocessingGroup* CT_WordprocessingGroup::add_grpSp()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_WordprocessingGroup* pNewChild = pChildGroup->mutable_grpSp();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_GraphicFrame* CT_WordprocessingGroup::add_graphicFrame()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_GraphicFrame* pNewChild = pChildGroup->mutable_graphicFrame();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_dpct::CT_Picture* CT_WordprocessingGroup::add_dpct_pic()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_dpct::CT_Picture* pNewChild = pChildGroup->mutable_dpct_pic();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_WordprocessingContentPart* CT_WordprocessingGroup::add_contentPart()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_WordprocessingContentPart* pNewChild = pChildGroup->mutable_contentPart();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    bool CT_WordprocessingGroup::has_a_extLst() const
    {    
    return m_has_a_extLst;
    }

    ns_a::CT_OfficeArtExtensionList* CT_WordprocessingGroup::mutable_a_extLst()
    {    
    m_has_a_extLst = true;
    if (!m_a_extLst)
    {
        m_a_extLst = new ns_a::CT_OfficeArtExtensionList();
    }
    return m_a_extLst;
    }

    const ns_a::CT_OfficeArtExtensionList& CT_WordprocessingGroup::get_a_extLst() const
    {    
    if (m_a_extLst)
    {
        return *m_a_extLst;
    }
    return ns_a::CT_OfficeArtExtensionList::default_instance();
    }

    void CT_WordprocessingGroup::clear()
    {    
    m_has_a_cNvPr = false;
    
    if (m_a_cNvPr)
    {
        delete m_a_cNvPr;
        m_a_cNvPr = NULL;
    }
    
    
    m_has_a_cNvGrpSpPr = false;
    
    if (m_a_cNvGrpSpPr)
    {
        delete m_a_cNvGrpSpPr;
        m_a_cNvGrpSpPr = NULL;
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
     
    m_has_a_extLst = false;
    
    if (m_a_extLst)
    {
        delete m_a_extLst;
        m_a_extLst = NULL;
    }
    
    }

    void CT_WordprocessingGroup::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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
    
    if (m_has_a_grpSpPr)
    {
        m_a_grpSpPr->toXmlElem("a:grpSpPr", "", _outStream);;
    }
     
    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_wsp())
            {
                (*iter)->get_wsp().toXmlElem("wsp", "", _outStream);
            }
            else if ((*iter)->has_grpSp())
            {
                (*iter)->get_grpSp().toXmlElem("grpSp", "", _outStream);
            }
            else if ((*iter)->has_graphicFrame())
            {
                (*iter)->get_graphicFrame().toXmlElem("graphicFrame", "", _outStream);
            }
            else if ((*iter)->has_dpct_pic())
            {
                (*iter)->get_dpct_pic().toXmlElem("dpct:pic", "", _outStream);
            }
            else if ((*iter)->has_contentPart())
            {
                (*iter)->get_contentPart().toXmlElem("contentPart", "", _outStream);
            }
        }
    }
     
    if (m_has_a_extLst)
    {
        m_a_extLst->toXmlElem("a:extLst", "", _outStream);;
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_WordprocessingGroup& CT_WordprocessingGroup::default_instance()
    {    
    if (!CT_WordprocessingGroup::default_instance_)
    {
        CT_WordprocessingGroup::default_instance_ = new CT_WordprocessingGroup();
    }
    return *CT_WordprocessingGroup::default_instance_;
    }


    // CT_WordprocessingGroup::ChildGroup_1
    bool CT_WordprocessingGroup::ChildGroup_1::has_wsp() const
    {    
    return m_has_wsp;
    }

    CT_WordprocessingShape* CT_WordprocessingGroup::ChildGroup_1::mutable_wsp()
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
    
    m_has_dpct_pic = false;
    
    if (m_dpct_pic)
    {
        delete m_dpct_pic;
        m_dpct_pic = NULL;
    }
    ;
    
    m_has_contentPart = false;
    
    if (m_contentPart)
    {
        delete m_contentPart;
        m_contentPart = NULL;
    }
    ;
    
    m_has_wsp = true;
    if (!m_wsp)
    {
        m_wsp = new CT_WordprocessingShape();
    }
    return m_wsp;
    }

    const CT_WordprocessingShape& CT_WordprocessingGroup::ChildGroup_1::get_wsp() const
    {    
    if (m_wsp)
    {
        return *m_wsp;
    }
    return CT_WordprocessingShape::default_instance();
    }

    bool CT_WordprocessingGroup::ChildGroup_1::has_grpSp() const
    {    
    return m_has_grpSp;
    }

    CT_WordprocessingGroup* CT_WordprocessingGroup::ChildGroup_1::mutable_grpSp()
    {    
    
    m_has_wsp = false;
    
    if (m_wsp)
    {
        delete m_wsp;
        m_wsp = NULL;
    }
    ;
    
    m_has_graphicFrame = false;
    
    if (m_graphicFrame)
    {
        delete m_graphicFrame;
        m_graphicFrame = NULL;
    }
    ;
    
    m_has_dpct_pic = false;
    
    if (m_dpct_pic)
    {
        delete m_dpct_pic;
        m_dpct_pic = NULL;
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
        m_grpSp = new CT_WordprocessingGroup();
    }
    return m_grpSp;
    }

    const CT_WordprocessingGroup& CT_WordprocessingGroup::ChildGroup_1::get_grpSp() const
    {    
    if (m_grpSp)
    {
        return *m_grpSp;
    }
    return CT_WordprocessingGroup::default_instance();
    }

    bool CT_WordprocessingGroup::ChildGroup_1::has_graphicFrame() const
    {    
    return m_has_graphicFrame;
    }

    CT_GraphicFrame* CT_WordprocessingGroup::ChildGroup_1::mutable_graphicFrame()
    {    
    
    m_has_wsp = false;
    
    if (m_wsp)
    {
        delete m_wsp;
        m_wsp = NULL;
    }
    ;
    
    m_has_grpSp = false;
    
    if (m_grpSp)
    {
        delete m_grpSp;
        m_grpSp = NULL;
    }
    ;
    
    m_has_dpct_pic = false;
    
    if (m_dpct_pic)
    {
        delete m_dpct_pic;
        m_dpct_pic = NULL;
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
        m_graphicFrame = new CT_GraphicFrame();
    }
    return m_graphicFrame;
    }

    const CT_GraphicFrame& CT_WordprocessingGroup::ChildGroup_1::get_graphicFrame() const
    {    
    if (m_graphicFrame)
    {
        return *m_graphicFrame;
    }
    return CT_GraphicFrame::default_instance();
    }

    bool CT_WordprocessingGroup::ChildGroup_1::has_dpct_pic() const
    {    
    return m_has_dpct_pic;
    }

    ns_dpct::CT_Picture* CT_WordprocessingGroup::ChildGroup_1::mutable_dpct_pic()
    {    
    
    m_has_wsp = false;
    
    if (m_wsp)
    {
        delete m_wsp;
        m_wsp = NULL;
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
    
    m_has_contentPart = false;
    
    if (m_contentPart)
    {
        delete m_contentPart;
        m_contentPart = NULL;
    }
    ;
    
    m_has_dpct_pic = true;
    if (!m_dpct_pic)
    {
        m_dpct_pic = new ns_dpct::CT_Picture();
    }
    return m_dpct_pic;
    }

    const ns_dpct::CT_Picture& CT_WordprocessingGroup::ChildGroup_1::get_dpct_pic() const
    {    
    if (m_dpct_pic)
    {
        return *m_dpct_pic;
    }
    return ns_dpct::CT_Picture::default_instance();
    }

    bool CT_WordprocessingGroup::ChildGroup_1::has_contentPart() const
    {    
    return m_has_contentPart;
    }

    CT_WordprocessingContentPart* CT_WordprocessingGroup::ChildGroup_1::mutable_contentPart()
    {    
    
    m_has_wsp = false;
    
    if (m_wsp)
    {
        delete m_wsp;
        m_wsp = NULL;
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
    
    m_has_dpct_pic = false;
    
    if (m_dpct_pic)
    {
        delete m_dpct_pic;
        m_dpct_pic = NULL;
    }
    ;
    
    m_has_contentPart = true;
    if (!m_contentPart)
    {
        m_contentPart = new CT_WordprocessingContentPart();
    }
    return m_contentPart;
    }

    const CT_WordprocessingContentPart& CT_WordprocessingGroup::ChildGroup_1::get_contentPart() const
    {    
    if (m_contentPart)
    {
        return *m_contentPart;
    }
    return CT_WordprocessingContentPart::default_instance();
    }

CT_WordprocessingGroup* CT_WordprocessingGroup::default_instance_ = NULL;

    // CT_WordprocessingCanvas
    bool CT_WordprocessingCanvas::has_a_bg() const
    {    
    return m_has_a_bg;
    }

    ns_a::CT_BackgroundFormatting* CT_WordprocessingCanvas::mutable_a_bg()
    {    
    m_has_a_bg = true;
    if (!m_a_bg)
    {
        m_a_bg = new ns_a::CT_BackgroundFormatting();
    }
    return m_a_bg;
    }

    const ns_a::CT_BackgroundFormatting& CT_WordprocessingCanvas::get_a_bg() const
    {    
    if (m_a_bg)
    {
        return *m_a_bg;
    }
    return ns_a::CT_BackgroundFormatting::default_instance();
    }

    bool CT_WordprocessingCanvas::has_a_whole() const
    {    
    return m_has_a_whole;
    }

    ns_a::CT_WholeE2oFormatting* CT_WordprocessingCanvas::mutable_a_whole()
    {    
    m_has_a_whole = true;
    if (!m_a_whole)
    {
        m_a_whole = new ns_a::CT_WholeE2oFormatting();
    }
    return m_a_whole;
    }

    const ns_a::CT_WholeE2oFormatting& CT_WordprocessingCanvas::get_a_whole() const
    {    
    if (m_a_whole)
    {
        return *m_a_whole;
    }
    return ns_a::CT_WholeE2oFormatting::default_instance();
    }

    CT_WordprocessingShape* CT_WordprocessingCanvas::add_wsp()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_WordprocessingShape* pNewChild = pChildGroup->mutable_wsp();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_dpct::CT_Picture* CT_WordprocessingCanvas::add_dpct_pic()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_dpct::CT_Picture* pNewChild = pChildGroup->mutable_dpct_pic();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_WordprocessingContentPart* CT_WordprocessingCanvas::add_contentPart()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_WordprocessingContentPart* pNewChild = pChildGroup->mutable_contentPart();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_WordprocessingGroup* CT_WordprocessingCanvas::add_wgp()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_WordprocessingGroup* pNewChild = pChildGroup->mutable_wgp();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_GraphicFrame* CT_WordprocessingCanvas::add_graphicFrame()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_GraphicFrame* pNewChild = pChildGroup->mutable_graphicFrame();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    bool CT_WordprocessingCanvas::has_a_extLst() const
    {    
    return m_has_a_extLst;
    }

    ns_a::CT_OfficeArtExtensionList* CT_WordprocessingCanvas::mutable_a_extLst()
    {    
    m_has_a_extLst = true;
    if (!m_a_extLst)
    {
        m_a_extLst = new ns_a::CT_OfficeArtExtensionList();
    }
    return m_a_extLst;
    }

    const ns_a::CT_OfficeArtExtensionList& CT_WordprocessingCanvas::get_a_extLst() const
    {    
    if (m_a_extLst)
    {
        return *m_a_extLst;
    }
    return ns_a::CT_OfficeArtExtensionList::default_instance();
    }

    void CT_WordprocessingCanvas::clear()
    {    
    m_has_a_bg = false;
    
    if (m_a_bg)
    {
        delete m_a_bg;
        m_a_bg = NULL;
    }
    
    
    m_has_a_whole = false;
    
    if (m_a_whole)
    {
        delete m_a_whole;
        m_a_whole = NULL;
    }
    
     
    {
        vector<ChildGroup_1*>::iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_1.clear();
    }
     
    m_has_a_extLst = false;
    
    if (m_a_extLst)
    {
        delete m_a_extLst;
        m_a_extLst = NULL;
    }
    
    }

    void CT_WordprocessingCanvas::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
            _outStream << ">";
            
    if (m_has_a_bg)
    {
        m_a_bg->toXmlElem("a:bg", "", _outStream);;
    }
    
    if (m_has_a_whole)
    {
        m_a_whole->toXmlElem("a:whole", "", _outStream);;
    }
     
    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_wsp())
            {
                (*iter)->get_wsp().toXmlElem("wsp", "", _outStream);
            }
            else if ((*iter)->has_dpct_pic())
            {
                (*iter)->get_dpct_pic().toXmlElem("dpct:pic", "", _outStream);
            }
            else if ((*iter)->has_contentPart())
            {
                (*iter)->get_contentPart().toXmlElem("contentPart", "", _outStream);
            }
            else if ((*iter)->has_wgp())
            {
                (*iter)->get_wgp().toXmlElem("wgp", "", _outStream);
            }
            else if ((*iter)->has_graphicFrame())
            {
                (*iter)->get_graphicFrame().toXmlElem("graphicFrame", "", _outStream);
            }
        }
    }
     
    if (m_has_a_extLst)
    {
        m_a_extLst->toXmlElem("a:extLst", "", _outStream);;
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_WordprocessingCanvas& CT_WordprocessingCanvas::default_instance()
    {    
    if (!CT_WordprocessingCanvas::default_instance_)
    {
        CT_WordprocessingCanvas::default_instance_ = new CT_WordprocessingCanvas();
    }
    return *CT_WordprocessingCanvas::default_instance_;
    }


    // CT_WordprocessingCanvas::ChildGroup_1
    bool CT_WordprocessingCanvas::ChildGroup_1::has_wsp() const
    {    
    return m_has_wsp;
    }

    CT_WordprocessingShape* CT_WordprocessingCanvas::ChildGroup_1::mutable_wsp()
    {    
    
    m_has_dpct_pic = false;
    
    if (m_dpct_pic)
    {
        delete m_dpct_pic;
        m_dpct_pic = NULL;
    }
    ;
    
    m_has_contentPart = false;
    
    if (m_contentPart)
    {
        delete m_contentPart;
        m_contentPart = NULL;
    }
    ;
    
    m_has_wgp = false;
    
    if (m_wgp)
    {
        delete m_wgp;
        m_wgp = NULL;
    }
    ;
    
    m_has_graphicFrame = false;
    
    if (m_graphicFrame)
    {
        delete m_graphicFrame;
        m_graphicFrame = NULL;
    }
    ;
    
    m_has_wsp = true;
    if (!m_wsp)
    {
        m_wsp = new CT_WordprocessingShape();
    }
    return m_wsp;
    }

    const CT_WordprocessingShape& CT_WordprocessingCanvas::ChildGroup_1::get_wsp() const
    {    
    if (m_wsp)
    {
        return *m_wsp;
    }
    return CT_WordprocessingShape::default_instance();
    }

    bool CT_WordprocessingCanvas::ChildGroup_1::has_dpct_pic() const
    {    
    return m_has_dpct_pic;
    }

    ns_dpct::CT_Picture* CT_WordprocessingCanvas::ChildGroup_1::mutable_dpct_pic()
    {    
    
    m_has_wsp = false;
    
    if (m_wsp)
    {
        delete m_wsp;
        m_wsp = NULL;
    }
    ;
    
    m_has_contentPart = false;
    
    if (m_contentPart)
    {
        delete m_contentPart;
        m_contentPart = NULL;
    }
    ;
    
    m_has_wgp = false;
    
    if (m_wgp)
    {
        delete m_wgp;
        m_wgp = NULL;
    }
    ;
    
    m_has_graphicFrame = false;
    
    if (m_graphicFrame)
    {
        delete m_graphicFrame;
        m_graphicFrame = NULL;
    }
    ;
    
    m_has_dpct_pic = true;
    if (!m_dpct_pic)
    {
        m_dpct_pic = new ns_dpct::CT_Picture();
    }
    return m_dpct_pic;
    }

    const ns_dpct::CT_Picture& CT_WordprocessingCanvas::ChildGroup_1::get_dpct_pic() const
    {    
    if (m_dpct_pic)
    {
        return *m_dpct_pic;
    }
    return ns_dpct::CT_Picture::default_instance();
    }

    bool CT_WordprocessingCanvas::ChildGroup_1::has_contentPart() const
    {    
    return m_has_contentPart;
    }

    CT_WordprocessingContentPart* CT_WordprocessingCanvas::ChildGroup_1::mutable_contentPart()
    {    
    
    m_has_wsp = false;
    
    if (m_wsp)
    {
        delete m_wsp;
        m_wsp = NULL;
    }
    ;
    
    m_has_dpct_pic = false;
    
    if (m_dpct_pic)
    {
        delete m_dpct_pic;
        m_dpct_pic = NULL;
    }
    ;
    
    m_has_wgp = false;
    
    if (m_wgp)
    {
        delete m_wgp;
        m_wgp = NULL;
    }
    ;
    
    m_has_graphicFrame = false;
    
    if (m_graphicFrame)
    {
        delete m_graphicFrame;
        m_graphicFrame = NULL;
    }
    ;
    
    m_has_contentPart = true;
    if (!m_contentPart)
    {
        m_contentPart = new CT_WordprocessingContentPart();
    }
    return m_contentPart;
    }

    const CT_WordprocessingContentPart& CT_WordprocessingCanvas::ChildGroup_1::get_contentPart() const
    {    
    if (m_contentPart)
    {
        return *m_contentPart;
    }
    return CT_WordprocessingContentPart::default_instance();
    }

    bool CT_WordprocessingCanvas::ChildGroup_1::has_wgp() const
    {    
    return m_has_wgp;
    }

    CT_WordprocessingGroup* CT_WordprocessingCanvas::ChildGroup_1::mutable_wgp()
    {    
    
    m_has_wsp = false;
    
    if (m_wsp)
    {
        delete m_wsp;
        m_wsp = NULL;
    }
    ;
    
    m_has_dpct_pic = false;
    
    if (m_dpct_pic)
    {
        delete m_dpct_pic;
        m_dpct_pic = NULL;
    }
    ;
    
    m_has_contentPart = false;
    
    if (m_contentPart)
    {
        delete m_contentPart;
        m_contentPart = NULL;
    }
    ;
    
    m_has_graphicFrame = false;
    
    if (m_graphicFrame)
    {
        delete m_graphicFrame;
        m_graphicFrame = NULL;
    }
    ;
    
    m_has_wgp = true;
    if (!m_wgp)
    {
        m_wgp = new CT_WordprocessingGroup();
    }
    return m_wgp;
    }

    const CT_WordprocessingGroup& CT_WordprocessingCanvas::ChildGroup_1::get_wgp() const
    {    
    if (m_wgp)
    {
        return *m_wgp;
    }
    return CT_WordprocessingGroup::default_instance();
    }

    bool CT_WordprocessingCanvas::ChildGroup_1::has_graphicFrame() const
    {    
    return m_has_graphicFrame;
    }

    CT_GraphicFrame* CT_WordprocessingCanvas::ChildGroup_1::mutable_graphicFrame()
    {    
    
    m_has_wsp = false;
    
    if (m_wsp)
    {
        delete m_wsp;
        m_wsp = NULL;
    }
    ;
    
    m_has_dpct_pic = false;
    
    if (m_dpct_pic)
    {
        delete m_dpct_pic;
        m_dpct_pic = NULL;
    }
    ;
    
    m_has_contentPart = false;
    
    if (m_contentPart)
    {
        delete m_contentPart;
        m_contentPart = NULL;
    }
    ;
    
    m_has_wgp = false;
    
    if (m_wgp)
    {
        delete m_wgp;
        m_wgp = NULL;
    }
    ;
    
    m_has_graphicFrame = true;
    if (!m_graphicFrame)
    {
        m_graphicFrame = new CT_GraphicFrame();
    }
    return m_graphicFrame;
    }

    const CT_GraphicFrame& CT_WordprocessingCanvas::ChildGroup_1::get_graphicFrame() const
    {    
    if (m_graphicFrame)
    {
        return *m_graphicFrame;
    }
    return CT_GraphicFrame::default_instance();
    }

CT_WordprocessingCanvas* CT_WordprocessingCanvas::default_instance_ = NULL;

    // wpc_element
    bool wpc_element::has_a_bg() const
    {    
    return m_has_a_bg;
    }

    ns_a::CT_BackgroundFormatting* wpc_element::mutable_a_bg()
    {    
    m_has_a_bg = true;
    if (!m_a_bg)
    {
        m_a_bg = new ns_a::CT_BackgroundFormatting();
    }
    return m_a_bg;
    }

    const ns_a::CT_BackgroundFormatting& wpc_element::get_a_bg() const
    {    
    if (m_a_bg)
    {
        return *m_a_bg;
    }
    return ns_a::CT_BackgroundFormatting::default_instance();
    }

    bool wpc_element::has_a_whole() const
    {    
    return m_has_a_whole;
    }

    ns_a::CT_WholeE2oFormatting* wpc_element::mutable_a_whole()
    {    
    m_has_a_whole = true;
    if (!m_a_whole)
    {
        m_a_whole = new ns_a::CT_WholeE2oFormatting();
    }
    return m_a_whole;
    }

    const ns_a::CT_WholeE2oFormatting& wpc_element::get_a_whole() const
    {    
    if (m_a_whole)
    {
        return *m_a_whole;
    }
    return ns_a::CT_WholeE2oFormatting::default_instance();
    }

    CT_WordprocessingShape* wpc_element::add_wsp()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_WordprocessingShape* pNewChild = pChildGroup->mutable_wsp();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_dpct::CT_Picture* wpc_element::add_dpct_pic()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_dpct::CT_Picture* pNewChild = pChildGroup->mutable_dpct_pic();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_WordprocessingContentPart* wpc_element::add_contentPart()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_WordprocessingContentPart* pNewChild = pChildGroup->mutable_contentPart();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_WordprocessingGroup* wpc_element::add_wgp()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_WordprocessingGroup* pNewChild = pChildGroup->mutable_wgp();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_GraphicFrame* wpc_element::add_graphicFrame()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_GraphicFrame* pNewChild = pChildGroup->mutable_graphicFrame();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    bool wpc_element::has_a_extLst() const
    {    
    return m_has_a_extLst;
    }

    ns_a::CT_OfficeArtExtensionList* wpc_element::mutable_a_extLst()
    {    
    m_has_a_extLst = true;
    if (!m_a_extLst)
    {
        m_a_extLst = new ns_a::CT_OfficeArtExtensionList();
    }
    return m_a_extLst;
    }

    const ns_a::CT_OfficeArtExtensionList& wpc_element::get_a_extLst() const
    {    
    if (m_a_extLst)
    {
        return *m_a_extLst;
    }
    return ns_a::CT_OfficeArtExtensionList::default_instance();
    }

    void wpc_element::clear()
    {    
    m_has_a_bg = false;
    
    if (m_a_bg)
    {
        delete m_a_bg;
        m_a_bg = NULL;
    }
    
    
    m_has_a_whole = false;
    
    if (m_a_whole)
    {
        delete m_a_whole;
        m_a_whole = NULL;
    }
    
     
    {
        vector<ChildGroup_1*>::iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_1.clear();
    }
     
    m_has_a_extLst = false;
    
    if (m_a_extLst)
    {
        delete m_a_extLst;
        m_a_extLst = NULL;
    }
    
    }

    void wpc_element::toXml(std::ostream& _outStream) const
    {    
    _outStream << "<wpc";
    
    _outStream << " " << "xmlns:wp=\"http://schemas.openxmlformats.org/drawingml/2006/wordprocessingDrawing\"";
    _outStream << " " << "xmlns:w=\"http://schemas.openxmlformats.org/wordprocessingml/2006/main\"";
    _outStream << " " << "xmlns:r=\"http://schemas.openxmlformats.org/officeDocument/2006/relationships\"";
    _outStream << " " << "xmlns:dpct=\"http://schemas.openxmlformats.org/drawingml/2006/picture\"";
    _outStream << " " << "xmlns:a=\"http://schemas.openxmlformats.org/drawingml/2006/main\"";
    
    _outStream << ">";
    
    if (m_has_a_bg)
    {
        m_a_bg->toXmlElem("a:bg", "", _outStream);;
    }
    
    if (m_has_a_whole)
    {
        m_a_whole->toXmlElem("a:whole", "", _outStream);;
    }
     
    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_wsp())
            {
                (*iter)->get_wsp().toXmlElem("wsp", "", _outStream);
            }
            else if ((*iter)->has_dpct_pic())
            {
                (*iter)->get_dpct_pic().toXmlElem("dpct:pic", "", _outStream);
            }
            else if ((*iter)->has_contentPart())
            {
                (*iter)->get_contentPart().toXmlElem("contentPart", "", _outStream);
            }
            else if ((*iter)->has_wgp())
            {
                (*iter)->get_wgp().toXmlElem("wgp", "", _outStream);
            }
            else if ((*iter)->has_graphicFrame())
            {
                (*iter)->get_graphicFrame().toXmlElem("graphicFrame", "", _outStream);
            }
        }
    }
     
    if (m_has_a_extLst)
    {
        m_a_extLst->toXmlElem("a:extLst", "", _outStream);;
    }
    
    _outStream << "</wpc>";
    }

    const wpc_element& wpc_element::default_instance()
    {    
    if (!wpc_element::default_instance_)
    {
        wpc_element::default_instance_ = new wpc_element();
    }
    return *wpc_element::default_instance_;
    }


    // wpc_element::ChildGroup_1
    bool wpc_element::ChildGroup_1::has_wsp() const
    {    
    return m_has_wsp;
    }

    CT_WordprocessingShape* wpc_element::ChildGroup_1::mutable_wsp()
    {    
    
    m_has_dpct_pic = false;
    
    if (m_dpct_pic)
    {
        delete m_dpct_pic;
        m_dpct_pic = NULL;
    }
    ;
    
    m_has_contentPart = false;
    
    if (m_contentPart)
    {
        delete m_contentPart;
        m_contentPart = NULL;
    }
    ;
    
    m_has_wgp = false;
    
    if (m_wgp)
    {
        delete m_wgp;
        m_wgp = NULL;
    }
    ;
    
    m_has_graphicFrame = false;
    
    if (m_graphicFrame)
    {
        delete m_graphicFrame;
        m_graphicFrame = NULL;
    }
    ;
    
    m_has_wsp = true;
    if (!m_wsp)
    {
        m_wsp = new CT_WordprocessingShape();
    }
    return m_wsp;
    }

    const CT_WordprocessingShape& wpc_element::ChildGroup_1::get_wsp() const
    {    
    if (m_wsp)
    {
        return *m_wsp;
    }
    return CT_WordprocessingShape::default_instance();
    }

    bool wpc_element::ChildGroup_1::has_dpct_pic() const
    {    
    return m_has_dpct_pic;
    }

    ns_dpct::CT_Picture* wpc_element::ChildGroup_1::mutable_dpct_pic()
    {    
    
    m_has_wsp = false;
    
    if (m_wsp)
    {
        delete m_wsp;
        m_wsp = NULL;
    }
    ;
    
    m_has_contentPart = false;
    
    if (m_contentPart)
    {
        delete m_contentPart;
        m_contentPart = NULL;
    }
    ;
    
    m_has_wgp = false;
    
    if (m_wgp)
    {
        delete m_wgp;
        m_wgp = NULL;
    }
    ;
    
    m_has_graphicFrame = false;
    
    if (m_graphicFrame)
    {
        delete m_graphicFrame;
        m_graphicFrame = NULL;
    }
    ;
    
    m_has_dpct_pic = true;
    if (!m_dpct_pic)
    {
        m_dpct_pic = new ns_dpct::CT_Picture();
    }
    return m_dpct_pic;
    }

    const ns_dpct::CT_Picture& wpc_element::ChildGroup_1::get_dpct_pic() const
    {    
    if (m_dpct_pic)
    {
        return *m_dpct_pic;
    }
    return ns_dpct::CT_Picture::default_instance();
    }

    bool wpc_element::ChildGroup_1::has_contentPart() const
    {    
    return m_has_contentPart;
    }

    CT_WordprocessingContentPart* wpc_element::ChildGroup_1::mutable_contentPart()
    {    
    
    m_has_wsp = false;
    
    if (m_wsp)
    {
        delete m_wsp;
        m_wsp = NULL;
    }
    ;
    
    m_has_dpct_pic = false;
    
    if (m_dpct_pic)
    {
        delete m_dpct_pic;
        m_dpct_pic = NULL;
    }
    ;
    
    m_has_wgp = false;
    
    if (m_wgp)
    {
        delete m_wgp;
        m_wgp = NULL;
    }
    ;
    
    m_has_graphicFrame = false;
    
    if (m_graphicFrame)
    {
        delete m_graphicFrame;
        m_graphicFrame = NULL;
    }
    ;
    
    m_has_contentPart = true;
    if (!m_contentPart)
    {
        m_contentPart = new CT_WordprocessingContentPart();
    }
    return m_contentPart;
    }

    const CT_WordprocessingContentPart& wpc_element::ChildGroup_1::get_contentPart() const
    {    
    if (m_contentPart)
    {
        return *m_contentPart;
    }
    return CT_WordprocessingContentPart::default_instance();
    }

    bool wpc_element::ChildGroup_1::has_wgp() const
    {    
    return m_has_wgp;
    }

    CT_WordprocessingGroup* wpc_element::ChildGroup_1::mutable_wgp()
    {    
    
    m_has_wsp = false;
    
    if (m_wsp)
    {
        delete m_wsp;
        m_wsp = NULL;
    }
    ;
    
    m_has_dpct_pic = false;
    
    if (m_dpct_pic)
    {
        delete m_dpct_pic;
        m_dpct_pic = NULL;
    }
    ;
    
    m_has_contentPart = false;
    
    if (m_contentPart)
    {
        delete m_contentPart;
        m_contentPart = NULL;
    }
    ;
    
    m_has_graphicFrame = false;
    
    if (m_graphicFrame)
    {
        delete m_graphicFrame;
        m_graphicFrame = NULL;
    }
    ;
    
    m_has_wgp = true;
    if (!m_wgp)
    {
        m_wgp = new CT_WordprocessingGroup();
    }
    return m_wgp;
    }

    const CT_WordprocessingGroup& wpc_element::ChildGroup_1::get_wgp() const
    {    
    if (m_wgp)
    {
        return *m_wgp;
    }
    return CT_WordprocessingGroup::default_instance();
    }

    bool wpc_element::ChildGroup_1::has_graphicFrame() const
    {    
    return m_has_graphicFrame;
    }

    CT_GraphicFrame* wpc_element::ChildGroup_1::mutable_graphicFrame()
    {    
    
    m_has_wsp = false;
    
    if (m_wsp)
    {
        delete m_wsp;
        m_wsp = NULL;
    }
    ;
    
    m_has_dpct_pic = false;
    
    if (m_dpct_pic)
    {
        delete m_dpct_pic;
        m_dpct_pic = NULL;
    }
    ;
    
    m_has_contentPart = false;
    
    if (m_contentPart)
    {
        delete m_contentPart;
        m_contentPart = NULL;
    }
    ;
    
    m_has_wgp = false;
    
    if (m_wgp)
    {
        delete m_wgp;
        m_wgp = NULL;
    }
    ;
    
    m_has_graphicFrame = true;
    if (!m_graphicFrame)
    {
        m_graphicFrame = new CT_GraphicFrame();
    }
    return m_graphicFrame;
    }

    const CT_GraphicFrame& wpc_element::ChildGroup_1::get_graphicFrame() const
    {    
    if (m_graphicFrame)
    {
        return *m_graphicFrame;
    }
    return CT_GraphicFrame::default_instance();
    }

wpc_element* wpc_element::default_instance_ = NULL;

    // wgp_element
    bool wgp_element::has_a_cNvPr() const
    {    
    return m_has_a_cNvPr;
    }

    ns_a::CT_NonVisualDrawingProps* wgp_element::mutable_a_cNvPr()
    {    
    m_has_a_cNvPr = true;
    if (!m_a_cNvPr)
    {
        m_a_cNvPr = new ns_a::CT_NonVisualDrawingProps();
    }
    return m_a_cNvPr;
    }

    const ns_a::CT_NonVisualDrawingProps& wgp_element::get_a_cNvPr() const
    {    
    if (m_a_cNvPr)
    {
        return *m_a_cNvPr;
    }
    return ns_a::CT_NonVisualDrawingProps::default_instance();
    }

    bool wgp_element::has_a_cNvGrpSpPr() const
    {    
    return m_has_a_cNvGrpSpPr;
    }

    ns_a::CT_NonVisualGroupDrawingShapeProps* wgp_element::mutable_a_cNvGrpSpPr()
    {    
    m_has_a_cNvGrpSpPr = true;
    if (!m_a_cNvGrpSpPr)
    {
        m_a_cNvGrpSpPr = new ns_a::CT_NonVisualGroupDrawingShapeProps();
    }
    return m_a_cNvGrpSpPr;
    }

    const ns_a::CT_NonVisualGroupDrawingShapeProps& wgp_element::get_a_cNvGrpSpPr() const
    {    
    if (m_a_cNvGrpSpPr)
    {
        return *m_a_cNvGrpSpPr;
    }
    return ns_a::CT_NonVisualGroupDrawingShapeProps::default_instance();
    }

    bool wgp_element::has_a_grpSpPr() const
    {    
    return m_has_a_grpSpPr;
    }

    ns_a::CT_GroupShapeProperties* wgp_element::mutable_a_grpSpPr()
    {    
    m_has_a_grpSpPr = true;
    if (!m_a_grpSpPr)
    {
        m_a_grpSpPr = new ns_a::CT_GroupShapeProperties();
    }
    return m_a_grpSpPr;
    }

    const ns_a::CT_GroupShapeProperties& wgp_element::get_a_grpSpPr() const
    {    
    if (m_a_grpSpPr)
    {
        return *m_a_grpSpPr;
    }
    return ns_a::CT_GroupShapeProperties::default_instance();
    }

    CT_WordprocessingShape* wgp_element::add_wsp()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_WordprocessingShape* pNewChild = pChildGroup->mutable_wsp();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_WordprocessingGroup* wgp_element::add_grpSp()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_WordprocessingGroup* pNewChild = pChildGroup->mutable_grpSp();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_GraphicFrame* wgp_element::add_graphicFrame()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_GraphicFrame* pNewChild = pChildGroup->mutable_graphicFrame();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_dpct::CT_Picture* wgp_element::add_dpct_pic()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_dpct::CT_Picture* pNewChild = pChildGroup->mutable_dpct_pic();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_WordprocessingContentPart* wgp_element::add_contentPart()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_WordprocessingContentPart* pNewChild = pChildGroup->mutable_contentPart();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    bool wgp_element::has_a_extLst() const
    {    
    return m_has_a_extLst;
    }

    ns_a::CT_OfficeArtExtensionList* wgp_element::mutable_a_extLst()
    {    
    m_has_a_extLst = true;
    if (!m_a_extLst)
    {
        m_a_extLst = new ns_a::CT_OfficeArtExtensionList();
    }
    return m_a_extLst;
    }

    const ns_a::CT_OfficeArtExtensionList& wgp_element::get_a_extLst() const
    {    
    if (m_a_extLst)
    {
        return *m_a_extLst;
    }
    return ns_a::CT_OfficeArtExtensionList::default_instance();
    }

    void wgp_element::clear()
    {    
    m_has_a_cNvPr = false;
    
    if (m_a_cNvPr)
    {
        delete m_a_cNvPr;
        m_a_cNvPr = NULL;
    }
    
    
    m_has_a_cNvGrpSpPr = false;
    
    if (m_a_cNvGrpSpPr)
    {
        delete m_a_cNvGrpSpPr;
        m_a_cNvGrpSpPr = NULL;
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
     
    m_has_a_extLst = false;
    
    if (m_a_extLst)
    {
        delete m_a_extLst;
        m_a_extLst = NULL;
    }
    
    }

    void wgp_element::toXml(std::ostream& _outStream) const
    {    
    _outStream << "<wgp";
    
    _outStream << " " << "xmlns:wp=\"http://schemas.openxmlformats.org/drawingml/2006/wordprocessingDrawing\"";
    _outStream << " " << "xmlns:w=\"http://schemas.openxmlformats.org/wordprocessingml/2006/main\"";
    _outStream << " " << "xmlns:r=\"http://schemas.openxmlformats.org/officeDocument/2006/relationships\"";
    _outStream << " " << "xmlns:dpct=\"http://schemas.openxmlformats.org/drawingml/2006/picture\"";
    _outStream << " " << "xmlns:a=\"http://schemas.openxmlformats.org/drawingml/2006/main\"";
    
    _outStream << ">";
    
    if (m_has_a_cNvPr)
    {
        m_a_cNvPr->toXmlElem("a:cNvPr", "", _outStream);;
    }
    
    if (m_has_a_cNvGrpSpPr)
    {
        m_a_cNvGrpSpPr->toXmlElem("a:cNvGrpSpPr", "", _outStream);;
    }
    
    if (m_has_a_grpSpPr)
    {
        m_a_grpSpPr->toXmlElem("a:grpSpPr", "", _outStream);;
    }
     
    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_wsp())
            {
                (*iter)->get_wsp().toXmlElem("wsp", "", _outStream);
            }
            else if ((*iter)->has_grpSp())
            {
                (*iter)->get_grpSp().toXmlElem("grpSp", "", _outStream);
            }
            else if ((*iter)->has_graphicFrame())
            {
                (*iter)->get_graphicFrame().toXmlElem("graphicFrame", "", _outStream);
            }
            else if ((*iter)->has_dpct_pic())
            {
                (*iter)->get_dpct_pic().toXmlElem("dpct:pic", "", _outStream);
            }
            else if ((*iter)->has_contentPart())
            {
                (*iter)->get_contentPart().toXmlElem("contentPart", "", _outStream);
            }
        }
    }
     
    if (m_has_a_extLst)
    {
        m_a_extLst->toXmlElem("a:extLst", "", _outStream);;
    }
    
    _outStream << "</wgp>";
    }

    const wgp_element& wgp_element::default_instance()
    {    
    if (!wgp_element::default_instance_)
    {
        wgp_element::default_instance_ = new wgp_element();
    }
    return *wgp_element::default_instance_;
    }


    // wgp_element::ChildGroup_1
    bool wgp_element::ChildGroup_1::has_wsp() const
    {    
    return m_has_wsp;
    }

    CT_WordprocessingShape* wgp_element::ChildGroup_1::mutable_wsp()
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
    
    m_has_dpct_pic = false;
    
    if (m_dpct_pic)
    {
        delete m_dpct_pic;
        m_dpct_pic = NULL;
    }
    ;
    
    m_has_contentPart = false;
    
    if (m_contentPart)
    {
        delete m_contentPart;
        m_contentPart = NULL;
    }
    ;
    
    m_has_wsp = true;
    if (!m_wsp)
    {
        m_wsp = new CT_WordprocessingShape();
    }
    return m_wsp;
    }

    const CT_WordprocessingShape& wgp_element::ChildGroup_1::get_wsp() const
    {    
    if (m_wsp)
    {
        return *m_wsp;
    }
    return CT_WordprocessingShape::default_instance();
    }

    bool wgp_element::ChildGroup_1::has_grpSp() const
    {    
    return m_has_grpSp;
    }

    CT_WordprocessingGroup* wgp_element::ChildGroup_1::mutable_grpSp()
    {    
    
    m_has_wsp = false;
    
    if (m_wsp)
    {
        delete m_wsp;
        m_wsp = NULL;
    }
    ;
    
    m_has_graphicFrame = false;
    
    if (m_graphicFrame)
    {
        delete m_graphicFrame;
        m_graphicFrame = NULL;
    }
    ;
    
    m_has_dpct_pic = false;
    
    if (m_dpct_pic)
    {
        delete m_dpct_pic;
        m_dpct_pic = NULL;
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
        m_grpSp = new CT_WordprocessingGroup();
    }
    return m_grpSp;
    }

    const CT_WordprocessingGroup& wgp_element::ChildGroup_1::get_grpSp() const
    {    
    if (m_grpSp)
    {
        return *m_grpSp;
    }
    return CT_WordprocessingGroup::default_instance();
    }

    bool wgp_element::ChildGroup_1::has_graphicFrame() const
    {    
    return m_has_graphicFrame;
    }

    CT_GraphicFrame* wgp_element::ChildGroup_1::mutable_graphicFrame()
    {    
    
    m_has_wsp = false;
    
    if (m_wsp)
    {
        delete m_wsp;
        m_wsp = NULL;
    }
    ;
    
    m_has_grpSp = false;
    
    if (m_grpSp)
    {
        delete m_grpSp;
        m_grpSp = NULL;
    }
    ;
    
    m_has_dpct_pic = false;
    
    if (m_dpct_pic)
    {
        delete m_dpct_pic;
        m_dpct_pic = NULL;
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
        m_graphicFrame = new CT_GraphicFrame();
    }
    return m_graphicFrame;
    }

    const CT_GraphicFrame& wgp_element::ChildGroup_1::get_graphicFrame() const
    {    
    if (m_graphicFrame)
    {
        return *m_graphicFrame;
    }
    return CT_GraphicFrame::default_instance();
    }

    bool wgp_element::ChildGroup_1::has_dpct_pic() const
    {    
    return m_has_dpct_pic;
    }

    ns_dpct::CT_Picture* wgp_element::ChildGroup_1::mutable_dpct_pic()
    {    
    
    m_has_wsp = false;
    
    if (m_wsp)
    {
        delete m_wsp;
        m_wsp = NULL;
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
    
    m_has_contentPart = false;
    
    if (m_contentPart)
    {
        delete m_contentPart;
        m_contentPart = NULL;
    }
    ;
    
    m_has_dpct_pic = true;
    if (!m_dpct_pic)
    {
        m_dpct_pic = new ns_dpct::CT_Picture();
    }
    return m_dpct_pic;
    }

    const ns_dpct::CT_Picture& wgp_element::ChildGroup_1::get_dpct_pic() const
    {    
    if (m_dpct_pic)
    {
        return *m_dpct_pic;
    }
    return ns_dpct::CT_Picture::default_instance();
    }

    bool wgp_element::ChildGroup_1::has_contentPart() const
    {    
    return m_has_contentPart;
    }

    CT_WordprocessingContentPart* wgp_element::ChildGroup_1::mutable_contentPart()
    {    
    
    m_has_wsp = false;
    
    if (m_wsp)
    {
        delete m_wsp;
        m_wsp = NULL;
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
    
    m_has_dpct_pic = false;
    
    if (m_dpct_pic)
    {
        delete m_dpct_pic;
        m_dpct_pic = NULL;
    }
    ;
    
    m_has_contentPart = true;
    if (!m_contentPart)
    {
        m_contentPart = new CT_WordprocessingContentPart();
    }
    return m_contentPart;
    }

    const CT_WordprocessingContentPart& wgp_element::ChildGroup_1::get_contentPart() const
    {    
    if (m_contentPart)
    {
        return *m_contentPart;
    }
    return CT_WordprocessingContentPart::default_instance();
    }

wgp_element* wgp_element::default_instance_ = NULL;

    // wsp_element
    bool wsp_element::has_a_cNvPr() const
    {    
    return m_has_a_cNvPr;
    }

    ns_a::CT_NonVisualDrawingProps* wsp_element::mutable_a_cNvPr()
    {    
    m_has_a_cNvPr = true;
    if (!m_a_cNvPr)
    {
        m_a_cNvPr = new ns_a::CT_NonVisualDrawingProps();
    }
    return m_a_cNvPr;
    }

    const ns_a::CT_NonVisualDrawingProps& wsp_element::get_a_cNvPr() const
    {    
    if (m_a_cNvPr)
    {
        return *m_a_cNvPr;
    }
    return ns_a::CT_NonVisualDrawingProps::default_instance();
    }

    bool wsp_element::has_a_cNvSpPr() const
    {    
    return m_has_a_cNvSpPr;
    }

    ns_a::CT_NonVisualDrawingShapeProps* wsp_element::mutable_a_cNvSpPr()
    {    
    
    m_has_a_cNvCnPr = false;
    
    if (m_a_cNvCnPr)
    {
        delete m_a_cNvCnPr;
        m_a_cNvCnPr = NULL;
    }
    ;
    
    m_has_a_cNvSpPr = true;
    if (!m_a_cNvSpPr)
    {
        m_a_cNvSpPr = new ns_a::CT_NonVisualDrawingShapeProps();
    }
    return m_a_cNvSpPr;
    }

    const ns_a::CT_NonVisualDrawingShapeProps& wsp_element::get_a_cNvSpPr() const
    {    
    if (m_a_cNvSpPr)
    {
        return *m_a_cNvSpPr;
    }
    return ns_a::CT_NonVisualDrawingShapeProps::default_instance();
    }

    bool wsp_element::has_a_cNvCnPr() const
    {    
    return m_has_a_cNvCnPr;
    }

    ns_a::CT_NonVisualConnectorProperties* wsp_element::mutable_a_cNvCnPr()
    {    
    
    m_has_a_cNvSpPr = false;
    
    if (m_a_cNvSpPr)
    {
        delete m_a_cNvSpPr;
        m_a_cNvSpPr = NULL;
    }
    ;
    
    m_has_a_cNvCnPr = true;
    if (!m_a_cNvCnPr)
    {
        m_a_cNvCnPr = new ns_a::CT_NonVisualConnectorProperties();
    }
    return m_a_cNvCnPr;
    }

    const ns_a::CT_NonVisualConnectorProperties& wsp_element::get_a_cNvCnPr() const
    {    
    if (m_a_cNvCnPr)
    {
        return *m_a_cNvCnPr;
    }
    return ns_a::CT_NonVisualConnectorProperties::default_instance();
    }

    bool wsp_element::has_a_spPr() const
    {    
    return m_has_a_spPr;
    }

    ns_a::CT_ShapeProperties* wsp_element::mutable_a_spPr()
    {    
    m_has_a_spPr = true;
    if (!m_a_spPr)
    {
        m_a_spPr = new ns_a::CT_ShapeProperties();
    }
    return m_a_spPr;
    }

    const ns_a::CT_ShapeProperties& wsp_element::get_a_spPr() const
    {    
    if (m_a_spPr)
    {
        return *m_a_spPr;
    }
    return ns_a::CT_ShapeProperties::default_instance();
    }

    bool wsp_element::has_a_style() const
    {    
    return m_has_a_style;
    }

    ns_a::CT_ShapeStyle* wsp_element::mutable_a_style()
    {    
    m_has_a_style = true;
    if (!m_a_style)
    {
        m_a_style = new ns_a::CT_ShapeStyle();
    }
    return m_a_style;
    }

    const ns_a::CT_ShapeStyle& wsp_element::get_a_style() const
    {    
    if (m_a_style)
    {
        return *m_a_style;
    }
    return ns_a::CT_ShapeStyle::default_instance();
    }

    bool wsp_element::has_a_extLst() const
    {    
    return m_has_a_extLst;
    }

    ns_a::CT_OfficeArtExtensionList* wsp_element::mutable_a_extLst()
    {    
    m_has_a_extLst = true;
    if (!m_a_extLst)
    {
        m_a_extLst = new ns_a::CT_OfficeArtExtensionList();
    }
    return m_a_extLst;
    }

    const ns_a::CT_OfficeArtExtensionList& wsp_element::get_a_extLst() const
    {    
    if (m_a_extLst)
    {
        return *m_a_extLst;
    }
    return ns_a::CT_OfficeArtExtensionList::default_instance();
    }

    bool wsp_element::has_txbx() const
    {    
    return m_has_txbx;
    }

    CT_TextboxInfo* wsp_element::mutable_txbx()
    {    
    
    m_has_linkedTxbx = false;
    
    if (m_linkedTxbx)
    {
        delete m_linkedTxbx;
        m_linkedTxbx = NULL;
    }
    ;
    
    m_has_txbx = true;
    if (!m_txbx)
    {
        m_txbx = new CT_TextboxInfo();
    }
    return m_txbx;
    }

    const CT_TextboxInfo& wsp_element::get_txbx() const
    {    
    if (m_txbx)
    {
        return *m_txbx;
    }
    return CT_TextboxInfo::default_instance();
    }

    bool wsp_element::has_linkedTxbx() const
    {    
    return m_has_linkedTxbx;
    }

    CT_LinkedTextboxInformation* wsp_element::mutable_linkedTxbx()
    {    
    
    m_has_txbx = false;
    
    if (m_txbx)
    {
        delete m_txbx;
        m_txbx = NULL;
    }
    ;
    
    m_has_linkedTxbx = true;
    if (!m_linkedTxbx)
    {
        m_linkedTxbx = new CT_LinkedTextboxInformation();
    }
    return m_linkedTxbx;
    }

    const CT_LinkedTextboxInformation& wsp_element::get_linkedTxbx() const
    {    
    if (m_linkedTxbx)
    {
        return *m_linkedTxbx;
    }
    return CT_LinkedTextboxInformation::default_instance();
    }

    bool wsp_element::has_a_bodyPr() const
    {    
    return m_has_a_bodyPr;
    }

    ns_a::CT_TextBodyProperties* wsp_element::mutable_a_bodyPr()
    {    
    m_has_a_bodyPr = true;
    if (!m_a_bodyPr)
    {
        m_a_bodyPr = new ns_a::CT_TextBodyProperties();
    }
    return m_a_bodyPr;
    }

    const ns_a::CT_TextBodyProperties& wsp_element::get_a_bodyPr() const
    {    
    if (m_a_bodyPr)
    {
        return *m_a_bodyPr;
    }
    return ns_a::CT_TextBodyProperties::default_instance();
    }

    void wsp_element::clear()
    {    
    m_has_normalEastAsianFlow_attr = false;
    m_normalEastAsianFlow_attr = false;
    }

    void wsp_element::toXml(std::ostream& _outStream) const
    {    
    _outStream << "<wsp";
    
    _outStream << " " << "xmlns:wp=\"http://schemas.openxmlformats.org/drawingml/2006/wordprocessingDrawing\"";
    _outStream << " " << "xmlns:w=\"http://schemas.openxmlformats.org/wordprocessingml/2006/main\"";
    _outStream << " " << "xmlns:r=\"http://schemas.openxmlformats.org/officeDocument/2006/relationships\"";
    _outStream << " " << "xmlns:dpct=\"http://schemas.openxmlformats.org/drawingml/2006/picture\"";
    _outStream << " " << "xmlns:a=\"http://schemas.openxmlformats.org/drawingml/2006/main\"";
    
    if (m_has_normalEastAsianFlow_attr)
    {
        _outStream << " " << "normalEastAsianFlow" << "=\"" << XSD::XMLBooleanStr(m_normalEastAsianFlow_attr) << "\"";
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
    
    if (m_has_a_cNvCnPr)
    {
        m_a_cNvCnPr->toXmlElem("a:cNvCnPr", "", _outStream);;
    }
     
    if (m_has_a_spPr)
    {
        m_a_spPr->toXmlElem("a:spPr", "", _outStream);;
    }
    
    if (m_has_a_style)
    {
        m_a_style->toXmlElem("a:style", "", _outStream);;
    }
    
    if (m_has_a_extLst)
    {
        m_a_extLst->toXmlElem("a:extLst", "", _outStream);;
    }
     
    if (m_has_txbx)
    {
        m_txbx->toXmlElem("txbx", "", _outStream);;
    }
    
    if (m_has_linkedTxbx)
    {
        m_linkedTxbx->toXmlElem("linkedTxbx", "", _outStream);;
    }
     
    if (m_has_a_bodyPr)
    {
        m_a_bodyPr->toXmlElem("a:bodyPr", "", _outStream);;
    }
    
    _outStream << "</wsp>";
    }

    const wsp_element& wsp_element::default_instance()
    {    
    if (!wsp_element::default_instance_)
    {
        wsp_element::default_instance_ = new wsp_element();
    }
    return *wsp_element::default_instance_;
    }

    bool wsp_element::has_normalEastAsianFlow_attr() const
    {    
    return m_has_normalEastAsianFlow_attr;
    }

    void wsp_element::set_normalEastAsianFlow_attr(const XSD::boolean_& _normalEastAsianFlow_attr)
    {    
    m_has_normalEastAsianFlow_attr = true;
    m_normalEastAsianFlow_attr = _normalEastAsianFlow_attr;
    }

    const XSD::boolean_& wsp_element::get_normalEastAsianFlow_attr() const
    {    
    return m_normalEastAsianFlow_attr;
    }

wsp_element* wsp_element::default_instance_ = NULL;

    // inline_element
    bool inline_element::has_a_extent() const
    {    
    return m_has_a_extent;
    }

    ns_a::CT_PositiveSize2D* inline_element::mutable_a_extent()
    {    
    m_has_a_extent = true;
    if (!m_a_extent)
    {
        m_a_extent = new ns_a::CT_PositiveSize2D();
    }
    return m_a_extent;
    }

    const ns_a::CT_PositiveSize2D& inline_element::get_a_extent() const
    {    
    if (m_a_extent)
    {
        return *m_a_extent;
    }
    return ns_a::CT_PositiveSize2D::default_instance();
    }

    bool inline_element::has_effectExtent() const
    {    
    return m_has_effectExtent;
    }

    CT_EffectExtent* inline_element::mutable_effectExtent()
    {    
    m_has_effectExtent = true;
    if (!m_effectExtent)
    {
        m_effectExtent = new CT_EffectExtent();
    }
    return m_effectExtent;
    }

    const CT_EffectExtent& inline_element::get_effectExtent() const
    {    
    if (m_effectExtent)
    {
        return *m_effectExtent;
    }
    return CT_EffectExtent::default_instance();
    }

    bool inline_element::has_a_docPr() const
    {    
    return m_has_a_docPr;
    }

    ns_a::CT_NonVisualDrawingProps* inline_element::mutable_a_docPr()
    {    
    m_has_a_docPr = true;
    if (!m_a_docPr)
    {
        m_a_docPr = new ns_a::CT_NonVisualDrawingProps();
    }
    return m_a_docPr;
    }

    const ns_a::CT_NonVisualDrawingProps& inline_element::get_a_docPr() const
    {    
    if (m_a_docPr)
    {
        return *m_a_docPr;
    }
    return ns_a::CT_NonVisualDrawingProps::default_instance();
    }

    bool inline_element::has_a_cNvGraphicFramePr() const
    {    
    return m_has_a_cNvGraphicFramePr;
    }

    ns_a::CT_NonVisualGraphicFrameProperties* inline_element::mutable_a_cNvGraphicFramePr()
    {    
    m_has_a_cNvGraphicFramePr = true;
    if (!m_a_cNvGraphicFramePr)
    {
        m_a_cNvGraphicFramePr = new ns_a::CT_NonVisualGraphicFrameProperties();
    }
    return m_a_cNvGraphicFramePr;
    }

    const ns_a::CT_NonVisualGraphicFrameProperties& inline_element::get_a_cNvGraphicFramePr() const
    {    
    if (m_a_cNvGraphicFramePr)
    {
        return *m_a_cNvGraphicFramePr;
    }
    return ns_a::CT_NonVisualGraphicFrameProperties::default_instance();
    }

    bool inline_element::has_a_graphic() const
    {    
    return m_has_a_graphic;
    }

    ns_a::CT_GraphicalObject* inline_element::mutable_a_graphic()
    {    
    m_has_a_graphic = true;
    if (!m_a_graphic)
    {
        m_a_graphic = new ns_a::CT_GraphicalObject();
    }
    return m_a_graphic;
    }

    const ns_a::CT_GraphicalObject& inline_element::get_a_graphic() const
    {    
    if (m_a_graphic)
    {
        return *m_a_graphic;
    }
    return ns_a::CT_GraphicalObject::default_instance();
    }

    void inline_element::clear()
    {    
    m_has_distT_attr = false;
    
    if (m_distT_attr)
    {
        delete m_distT_attr;
        m_distT_attr = NULL;
    }
    
    
    m_has_distB_attr = false;
    
    if (m_distB_attr)
    {
        delete m_distB_attr;
        m_distB_attr = NULL;
    }
    
    
    m_has_distL_attr = false;
    
    if (m_distL_attr)
    {
        delete m_distL_attr;
        m_distL_attr = NULL;
    }
    
    
    m_has_distR_attr = false;
    
    if (m_distR_attr)
    {
        delete m_distR_attr;
        m_distR_attr = NULL;
    }
    
    }

    void inline_element::toXml(std::ostream& _outStream) const
    {    
    _outStream << "<inline";
    
    _outStream << " " << "xmlns:wp=\"http://schemas.openxmlformats.org/drawingml/2006/wordprocessingDrawing\"";
    _outStream << " " << "xmlns:w=\"http://schemas.openxmlformats.org/wordprocessingml/2006/main\"";
    _outStream << " " << "xmlns:r=\"http://schemas.openxmlformats.org/officeDocument/2006/relationships\"";
    _outStream << " " << "xmlns:dpct=\"http://schemas.openxmlformats.org/drawingml/2006/picture\"";
    _outStream << " " << "xmlns:a=\"http://schemas.openxmlformats.org/drawingml/2006/main\"";
    
    if (m_has_distT_attr)
    {
        m_distT_attr->toXmlAttr("distT", _outStream);
    }
    
    
    if (m_has_distB_attr)
    {
        m_distB_attr->toXmlAttr("distB", _outStream);
    }
    
    
    if (m_has_distL_attr)
    {
        m_distL_attr->toXmlAttr("distL", _outStream);
    }
    
    
    if (m_has_distR_attr)
    {
        m_distR_attr->toXmlAttr("distR", _outStream);
    }
    
    _outStream << ">";
    
    if (m_has_a_extent)
    {
        m_a_extent->toXmlElem("a:extent", "", _outStream);;
    }
    
    if (m_has_effectExtent)
    {
        m_effectExtent->toXmlElem("effectExtent", "", _outStream);;
    }
    
    if (m_has_a_docPr)
    {
        m_a_docPr->toXmlElem("a:docPr", "", _outStream);;
    }
    
    if (m_has_a_cNvGraphicFramePr)
    {
        m_a_cNvGraphicFramePr->toXmlElem("a:cNvGraphicFramePr", "", _outStream);;
    }
    
    if (m_has_a_graphic)
    {
        m_a_graphic->toXmlElem("a:graphic", "", _outStream);;
    }
    
    _outStream << "</inline>";
    }

    const inline_element& inline_element::default_instance()
    {    
    if (!inline_element::default_instance_)
    {
        inline_element::default_instance_ = new inline_element();
    }
    return *inline_element::default_instance_;
    }

    bool inline_element::has_distT_attr() const
    {    
    return m_has_distT_attr;
    }

    void inline_element::set_distT_attr(const ST_WrapDistance& _distT_attr)
    {    
    m_has_distT_attr = true;
    m_distT_attr = new ST_WrapDistance(_distT_attr);
    }

    const ST_WrapDistance& inline_element::get_distT_attr() const
    {    
    if (m_distT_attr)
    {
        return *m_distT_attr;
    }
    return ST_WrapDistance::default_instance();
    }

    bool inline_element::has_distB_attr() const
    {    
    return m_has_distB_attr;
    }

    void inline_element::set_distB_attr(const ST_WrapDistance& _distB_attr)
    {    
    m_has_distB_attr = true;
    m_distB_attr = new ST_WrapDistance(_distB_attr);
    }

    const ST_WrapDistance& inline_element::get_distB_attr() const
    {    
    if (m_distB_attr)
    {
        return *m_distB_attr;
    }
    return ST_WrapDistance::default_instance();
    }

    bool inline_element::has_distL_attr() const
    {    
    return m_has_distL_attr;
    }

    void inline_element::set_distL_attr(const ST_WrapDistance& _distL_attr)
    {    
    m_has_distL_attr = true;
    m_distL_attr = new ST_WrapDistance(_distL_attr);
    }

    const ST_WrapDistance& inline_element::get_distL_attr() const
    {    
    if (m_distL_attr)
    {
        return *m_distL_attr;
    }
    return ST_WrapDistance::default_instance();
    }

    bool inline_element::has_distR_attr() const
    {    
    return m_has_distR_attr;
    }

    void inline_element::set_distR_attr(const ST_WrapDistance& _distR_attr)
    {    
    m_has_distR_attr = true;
    m_distR_attr = new ST_WrapDistance(_distR_attr);
    }

    const ST_WrapDistance& inline_element::get_distR_attr() const
    {    
    if (m_distR_attr)
    {
        return *m_distR_attr;
    }
    return ST_WrapDistance::default_instance();
    }

inline_element* inline_element::default_instance_ = NULL;

    // anchor_element
    bool anchor_element::has_a_simplePos() const
    {    
    return m_has_a_simplePos;
    }

    ns_a::CT_Point2D* anchor_element::mutable_a_simplePos()
    {    
    m_has_a_simplePos = true;
    if (!m_a_simplePos)
    {
        m_a_simplePos = new ns_a::CT_Point2D();
    }
    return m_a_simplePos;
    }

    const ns_a::CT_Point2D& anchor_element::get_a_simplePos() const
    {    
    if (m_a_simplePos)
    {
        return *m_a_simplePos;
    }
    return ns_a::CT_Point2D::default_instance();
    }

    bool anchor_element::has_positionH() const
    {    
    return m_has_positionH;
    }

    CT_PosH* anchor_element::mutable_positionH()
    {    
    m_has_positionH = true;
    if (!m_positionH)
    {
        m_positionH = new CT_PosH();
    }
    return m_positionH;
    }

    const CT_PosH& anchor_element::get_positionH() const
    {    
    if (m_positionH)
    {
        return *m_positionH;
    }
    return CT_PosH::default_instance();
    }

    bool anchor_element::has_positionV() const
    {    
    return m_has_positionV;
    }

    CT_PosV* anchor_element::mutable_positionV()
    {    
    m_has_positionV = true;
    if (!m_positionV)
    {
        m_positionV = new CT_PosV();
    }
    return m_positionV;
    }

    const CT_PosV& anchor_element::get_positionV() const
    {    
    if (m_positionV)
    {
        return *m_positionV;
    }
    return CT_PosV::default_instance();
    }

    bool anchor_element::has_a_extent() const
    {    
    return m_has_a_extent;
    }

    ns_a::CT_PositiveSize2D* anchor_element::mutable_a_extent()
    {    
    m_has_a_extent = true;
    if (!m_a_extent)
    {
        m_a_extent = new ns_a::CT_PositiveSize2D();
    }
    return m_a_extent;
    }

    const ns_a::CT_PositiveSize2D& anchor_element::get_a_extent() const
    {    
    if (m_a_extent)
    {
        return *m_a_extent;
    }
    return ns_a::CT_PositiveSize2D::default_instance();
    }

    bool anchor_element::has_effectExtent() const
    {    
    return m_has_effectExtent;
    }

    CT_EffectExtent* anchor_element::mutable_effectExtent()
    {    
    m_has_effectExtent = true;
    if (!m_effectExtent)
    {
        m_effectExtent = new CT_EffectExtent();
    }
    return m_effectExtent;
    }

    const CT_EffectExtent& anchor_element::get_effectExtent() const
    {    
    if (m_effectExtent)
    {
        return *m_effectExtent;
    }
    return CT_EffectExtent::default_instance();
    }

    bool anchor_element::has_wrapNone() const
    {    
    return m_has_wrapNone;
    }

    CT_WrapNone* anchor_element::mutable_wrapNone()
    {    
    
    m_has_wrapSquare = false;
    
    if (m_wrapSquare)
    {
        delete m_wrapSquare;
        m_wrapSquare = NULL;
    }
    ;
    
    m_has_wrapTight = false;
    
    if (m_wrapTight)
    {
        delete m_wrapTight;
        m_wrapTight = NULL;
    }
    ;
    
    m_has_wrapThrough = false;
    
    if (m_wrapThrough)
    {
        delete m_wrapThrough;
        m_wrapThrough = NULL;
    }
    ;
    
    m_has_wrapTopAndBottom = false;
    
    if (m_wrapTopAndBottom)
    {
        delete m_wrapTopAndBottom;
        m_wrapTopAndBottom = NULL;
    }
    ;
    
    m_has_wrapNone = true;
    if (!m_wrapNone)
    {
        m_wrapNone = new CT_WrapNone();
    }
    return m_wrapNone;
    }

    const CT_WrapNone& anchor_element::get_wrapNone() const
    {    
    if (m_wrapNone)
    {
        return *m_wrapNone;
    }
    return CT_WrapNone::default_instance();
    }

    bool anchor_element::has_wrapSquare() const
    {    
    return m_has_wrapSquare;
    }

    CT_WrapSquare* anchor_element::mutable_wrapSquare()
    {    
    
    m_has_wrapNone = false;
    
    if (m_wrapNone)
    {
        delete m_wrapNone;
        m_wrapNone = NULL;
    }
    ;
    
    m_has_wrapTight = false;
    
    if (m_wrapTight)
    {
        delete m_wrapTight;
        m_wrapTight = NULL;
    }
    ;
    
    m_has_wrapThrough = false;
    
    if (m_wrapThrough)
    {
        delete m_wrapThrough;
        m_wrapThrough = NULL;
    }
    ;
    
    m_has_wrapTopAndBottom = false;
    
    if (m_wrapTopAndBottom)
    {
        delete m_wrapTopAndBottom;
        m_wrapTopAndBottom = NULL;
    }
    ;
    
    m_has_wrapSquare = true;
    if (!m_wrapSquare)
    {
        m_wrapSquare = new CT_WrapSquare();
    }
    return m_wrapSquare;
    }

    const CT_WrapSquare& anchor_element::get_wrapSquare() const
    {    
    if (m_wrapSquare)
    {
        return *m_wrapSquare;
    }
    return CT_WrapSquare::default_instance();
    }

    bool anchor_element::has_wrapTight() const
    {    
    return m_has_wrapTight;
    }

    CT_WrapTight* anchor_element::mutable_wrapTight()
    {    
    
    m_has_wrapNone = false;
    
    if (m_wrapNone)
    {
        delete m_wrapNone;
        m_wrapNone = NULL;
    }
    ;
    
    m_has_wrapSquare = false;
    
    if (m_wrapSquare)
    {
        delete m_wrapSquare;
        m_wrapSquare = NULL;
    }
    ;
    
    m_has_wrapThrough = false;
    
    if (m_wrapThrough)
    {
        delete m_wrapThrough;
        m_wrapThrough = NULL;
    }
    ;
    
    m_has_wrapTopAndBottom = false;
    
    if (m_wrapTopAndBottom)
    {
        delete m_wrapTopAndBottom;
        m_wrapTopAndBottom = NULL;
    }
    ;
    
    m_has_wrapTight = true;
    if (!m_wrapTight)
    {
        m_wrapTight = new CT_WrapTight();
    }
    return m_wrapTight;
    }

    const CT_WrapTight& anchor_element::get_wrapTight() const
    {    
    if (m_wrapTight)
    {
        return *m_wrapTight;
    }
    return CT_WrapTight::default_instance();
    }

    bool anchor_element::has_wrapThrough() const
    {    
    return m_has_wrapThrough;
    }

    CT_WrapThrough* anchor_element::mutable_wrapThrough()
    {    
    
    m_has_wrapNone = false;
    
    if (m_wrapNone)
    {
        delete m_wrapNone;
        m_wrapNone = NULL;
    }
    ;
    
    m_has_wrapSquare = false;
    
    if (m_wrapSquare)
    {
        delete m_wrapSquare;
        m_wrapSquare = NULL;
    }
    ;
    
    m_has_wrapTight = false;
    
    if (m_wrapTight)
    {
        delete m_wrapTight;
        m_wrapTight = NULL;
    }
    ;
    
    m_has_wrapTopAndBottom = false;
    
    if (m_wrapTopAndBottom)
    {
        delete m_wrapTopAndBottom;
        m_wrapTopAndBottom = NULL;
    }
    ;
    
    m_has_wrapThrough = true;
    if (!m_wrapThrough)
    {
        m_wrapThrough = new CT_WrapThrough();
    }
    return m_wrapThrough;
    }

    const CT_WrapThrough& anchor_element::get_wrapThrough() const
    {    
    if (m_wrapThrough)
    {
        return *m_wrapThrough;
    }
    return CT_WrapThrough::default_instance();
    }

    bool anchor_element::has_wrapTopAndBottom() const
    {    
    return m_has_wrapTopAndBottom;
    }

    CT_WrapTopBottom* anchor_element::mutable_wrapTopAndBottom()
    {    
    
    m_has_wrapNone = false;
    
    if (m_wrapNone)
    {
        delete m_wrapNone;
        m_wrapNone = NULL;
    }
    ;
    
    m_has_wrapSquare = false;
    
    if (m_wrapSquare)
    {
        delete m_wrapSquare;
        m_wrapSquare = NULL;
    }
    ;
    
    m_has_wrapTight = false;
    
    if (m_wrapTight)
    {
        delete m_wrapTight;
        m_wrapTight = NULL;
    }
    ;
    
    m_has_wrapThrough = false;
    
    if (m_wrapThrough)
    {
        delete m_wrapThrough;
        m_wrapThrough = NULL;
    }
    ;
    
    m_has_wrapTopAndBottom = true;
    if (!m_wrapTopAndBottom)
    {
        m_wrapTopAndBottom = new CT_WrapTopBottom();
    }
    return m_wrapTopAndBottom;
    }

    const CT_WrapTopBottom& anchor_element::get_wrapTopAndBottom() const
    {    
    if (m_wrapTopAndBottom)
    {
        return *m_wrapTopAndBottom;
    }
    return CT_WrapTopBottom::default_instance();
    }

    bool anchor_element::has_a_docPr() const
    {    
    return m_has_a_docPr;
    }

    ns_a::CT_NonVisualDrawingProps* anchor_element::mutable_a_docPr()
    {    
    m_has_a_docPr = true;
    if (!m_a_docPr)
    {
        m_a_docPr = new ns_a::CT_NonVisualDrawingProps();
    }
    return m_a_docPr;
    }

    const ns_a::CT_NonVisualDrawingProps& anchor_element::get_a_docPr() const
    {    
    if (m_a_docPr)
    {
        return *m_a_docPr;
    }
    return ns_a::CT_NonVisualDrawingProps::default_instance();
    }

    bool anchor_element::has_a_cNvGraphicFramePr() const
    {    
    return m_has_a_cNvGraphicFramePr;
    }

    ns_a::CT_NonVisualGraphicFrameProperties* anchor_element::mutable_a_cNvGraphicFramePr()
    {    
    m_has_a_cNvGraphicFramePr = true;
    if (!m_a_cNvGraphicFramePr)
    {
        m_a_cNvGraphicFramePr = new ns_a::CT_NonVisualGraphicFrameProperties();
    }
    return m_a_cNvGraphicFramePr;
    }

    const ns_a::CT_NonVisualGraphicFrameProperties& anchor_element::get_a_cNvGraphicFramePr() const
    {    
    if (m_a_cNvGraphicFramePr)
    {
        return *m_a_cNvGraphicFramePr;
    }
    return ns_a::CT_NonVisualGraphicFrameProperties::default_instance();
    }

    bool anchor_element::has_a_graphic() const
    {    
    return m_has_a_graphic;
    }

    ns_a::CT_GraphicalObject* anchor_element::mutable_a_graphic()
    {    
    m_has_a_graphic = true;
    if (!m_a_graphic)
    {
        m_a_graphic = new ns_a::CT_GraphicalObject();
    }
    return m_a_graphic;
    }

    const ns_a::CT_GraphicalObject& anchor_element::get_a_graphic() const
    {    
    if (m_a_graphic)
    {
        return *m_a_graphic;
    }
    return ns_a::CT_GraphicalObject::default_instance();
    }

    void anchor_element::clear()
    {    
    m_has_distT_attr = false;
    
    if (m_distT_attr)
    {
        delete m_distT_attr;
        m_distT_attr = NULL;
    }
    
    
    m_has_distB_attr = false;
    
    if (m_distB_attr)
    {
        delete m_distB_attr;
        m_distB_attr = NULL;
    }
    
    
    m_has_distL_attr = false;
    
    if (m_distL_attr)
    {
        delete m_distL_attr;
        m_distL_attr = NULL;
    }
    
    
    m_has_distR_attr = false;
    
    if (m_distR_attr)
    {
        delete m_distR_attr;
        m_distR_attr = NULL;
    }
    
    
    m_has_simplePos_attr = false;
    m_simplePos_attr = false;
    
    m_has_relativeHeight_attr = false;
    m_relativeHeight_attr = 0;
    
    m_has_behindDoc_attr = false;
    m_behindDoc_attr = false;
    
    m_has_locked_attr = false;
    m_locked_attr = false;
    
    m_has_layoutInCell_attr = false;
    m_layoutInCell_attr = false;
    
    m_has_hidden_attr = false;
    m_hidden_attr = false;
    
    m_has_allowOverlap_attr = false;
    m_allowOverlap_attr = false;
    }

    void anchor_element::toXml(std::ostream& _outStream) const
    {    
    _outStream << "<anchor";
    
    _outStream << " " << "xmlns:wp=\"http://schemas.openxmlformats.org/drawingml/2006/wordprocessingDrawing\"";
    _outStream << " " << "xmlns:w=\"http://schemas.openxmlformats.org/wordprocessingml/2006/main\"";
    _outStream << " " << "xmlns:r=\"http://schemas.openxmlformats.org/officeDocument/2006/relationships\"";
    _outStream << " " << "xmlns:dpct=\"http://schemas.openxmlformats.org/drawingml/2006/picture\"";
    _outStream << " " << "xmlns:a=\"http://schemas.openxmlformats.org/drawingml/2006/main\"";
    
    if (m_has_distT_attr)
    {
        m_distT_attr->toXmlAttr("distT", _outStream);
    }
    
    
    if (m_has_distB_attr)
    {
        m_distB_attr->toXmlAttr("distB", _outStream);
    }
    
    
    if (m_has_distL_attr)
    {
        m_distL_attr->toXmlAttr("distL", _outStream);
    }
    
    
    if (m_has_distR_attr)
    {
        m_distR_attr->toXmlAttr("distR", _outStream);
    }
    
    
    if (m_has_simplePos_attr)
    {
        _outStream << " " << "simplePos" << "=\"" << XSD::XMLBooleanStr(m_simplePos_attr) << "\"";
    }
    
    
    if (m_has_relativeHeight_attr)
    {
        _outStream << " " << "relativeHeight" << "=\"" << m_relativeHeight_attr << "\"";
    }
    
    
    if (m_has_behindDoc_attr)
    {
        _outStream << " " << "behindDoc" << "=\"" << XSD::XMLBooleanStr(m_behindDoc_attr) << "\"";
    }
    
    
    if (m_has_locked_attr)
    {
        _outStream << " " << "locked" << "=\"" << XSD::XMLBooleanStr(m_locked_attr) << "\"";
    }
    
    
    if (m_has_layoutInCell_attr)
    {
        _outStream << " " << "layoutInCell" << "=\"" << XSD::XMLBooleanStr(m_layoutInCell_attr) << "\"";
    }
    
    
    if (m_has_hidden_attr)
    {
        _outStream << " " << "hidden" << "=\"" << XSD::XMLBooleanStr(m_hidden_attr) << "\"";
    }
    
    
    if (m_has_allowOverlap_attr)
    {
        _outStream << " " << "allowOverlap" << "=\"" << XSD::XMLBooleanStr(m_allowOverlap_attr) << "\"";
    }
    
    _outStream << ">";
    
    if (m_has_a_simplePos)
    {
        m_a_simplePos->toXmlElem("a:simplePos", "", _outStream);;
    }
    
    if (m_has_positionH)
    {
        m_positionH->toXmlElem("positionH", "", _outStream);;
    }
    
    if (m_has_positionV)
    {
        m_positionV->toXmlElem("positionV", "", _outStream);;
    }
    
    if (m_has_a_extent)
    {
        m_a_extent->toXmlElem("a:extent", "", _outStream);;
    }
    
    if (m_has_effectExtent)
    {
        m_effectExtent->toXmlElem("effectExtent", "", _outStream);;
    }
     
    if (m_has_wrapNone)
    {
        m_wrapNone->toXmlElem("wrapNone", "", _outStream);;
    }
    
    if (m_has_wrapSquare)
    {
        m_wrapSquare->toXmlElem("wrapSquare", "", _outStream);;
    }
    
    if (m_has_wrapTight)
    {
        m_wrapTight->toXmlElem("wrapTight", "", _outStream);;
    }
    
    if (m_has_wrapThrough)
    {
        m_wrapThrough->toXmlElem("wrapThrough", "", _outStream);;
    }
    
    if (m_has_wrapTopAndBottom)
    {
        m_wrapTopAndBottom->toXmlElem("wrapTopAndBottom", "", _outStream);;
    }
     
    if (m_has_a_docPr)
    {
        m_a_docPr->toXmlElem("a:docPr", "", _outStream);;
    }
    
    if (m_has_a_cNvGraphicFramePr)
    {
        m_a_cNvGraphicFramePr->toXmlElem("a:cNvGraphicFramePr", "", _outStream);;
    }
    
    if (m_has_a_graphic)
    {
        m_a_graphic->toXmlElem("a:graphic", "", _outStream);;
    }
    
    _outStream << "</anchor>";
    }

    const anchor_element& anchor_element::default_instance()
    {    
    if (!anchor_element::default_instance_)
    {
        anchor_element::default_instance_ = new anchor_element();
    }
    return *anchor_element::default_instance_;
    }

    bool anchor_element::has_distT_attr() const
    {    
    return m_has_distT_attr;
    }

    void anchor_element::set_distT_attr(const ST_WrapDistance& _distT_attr)
    {    
    m_has_distT_attr = true;
    m_distT_attr = new ST_WrapDistance(_distT_attr);
    }

    const ST_WrapDistance& anchor_element::get_distT_attr() const
    {    
    if (m_distT_attr)
    {
        return *m_distT_attr;
    }
    return ST_WrapDistance::default_instance();
    }

    bool anchor_element::has_distB_attr() const
    {    
    return m_has_distB_attr;
    }

    void anchor_element::set_distB_attr(const ST_WrapDistance& _distB_attr)
    {    
    m_has_distB_attr = true;
    m_distB_attr = new ST_WrapDistance(_distB_attr);
    }

    const ST_WrapDistance& anchor_element::get_distB_attr() const
    {    
    if (m_distB_attr)
    {
        return *m_distB_attr;
    }
    return ST_WrapDistance::default_instance();
    }

    bool anchor_element::has_distL_attr() const
    {    
    return m_has_distL_attr;
    }

    void anchor_element::set_distL_attr(const ST_WrapDistance& _distL_attr)
    {    
    m_has_distL_attr = true;
    m_distL_attr = new ST_WrapDistance(_distL_attr);
    }

    const ST_WrapDistance& anchor_element::get_distL_attr() const
    {    
    if (m_distL_attr)
    {
        return *m_distL_attr;
    }
    return ST_WrapDistance::default_instance();
    }

    bool anchor_element::has_distR_attr() const
    {    
    return m_has_distR_attr;
    }

    void anchor_element::set_distR_attr(const ST_WrapDistance& _distR_attr)
    {    
    m_has_distR_attr = true;
    m_distR_attr = new ST_WrapDistance(_distR_attr);
    }

    const ST_WrapDistance& anchor_element::get_distR_attr() const
    {    
    if (m_distR_attr)
    {
        return *m_distR_attr;
    }
    return ST_WrapDistance::default_instance();
    }

    bool anchor_element::has_simplePos_attr() const
    {    
    return m_has_simplePos_attr;
    }

    void anchor_element::set_simplePos_attr(const XSD::boolean_& _simplePos_attr)
    {    
    m_has_simplePos_attr = true;
    m_simplePos_attr = _simplePos_attr;
    }

    const XSD::boolean_& anchor_element::get_simplePos_attr() const
    {    
    return m_simplePos_attr;
    }

    bool anchor_element::has_relativeHeight_attr() const
    {    
    return m_has_relativeHeight_attr;
    }

    void anchor_element::set_relativeHeight_attr(const XSD::unsignedInt_& _relativeHeight_attr)
    {    
    m_has_relativeHeight_attr = true;
    m_relativeHeight_attr = _relativeHeight_attr;
    }

    const XSD::unsignedInt_& anchor_element::get_relativeHeight_attr() const
    {    
    return m_relativeHeight_attr;
    }

    bool anchor_element::has_behindDoc_attr() const
    {    
    return m_has_behindDoc_attr;
    }

    void anchor_element::set_behindDoc_attr(const XSD::boolean_& _behindDoc_attr)
    {    
    m_has_behindDoc_attr = true;
    m_behindDoc_attr = _behindDoc_attr;
    }

    const XSD::boolean_& anchor_element::get_behindDoc_attr() const
    {    
    return m_behindDoc_attr;
    }

    bool anchor_element::has_locked_attr() const
    {    
    return m_has_locked_attr;
    }

    void anchor_element::set_locked_attr(const XSD::boolean_& _locked_attr)
    {    
    m_has_locked_attr = true;
    m_locked_attr = _locked_attr;
    }

    const XSD::boolean_& anchor_element::get_locked_attr() const
    {    
    return m_locked_attr;
    }

    bool anchor_element::has_layoutInCell_attr() const
    {    
    return m_has_layoutInCell_attr;
    }

    void anchor_element::set_layoutInCell_attr(const XSD::boolean_& _layoutInCell_attr)
    {    
    m_has_layoutInCell_attr = true;
    m_layoutInCell_attr = _layoutInCell_attr;
    }

    const XSD::boolean_& anchor_element::get_layoutInCell_attr() const
    {    
    return m_layoutInCell_attr;
    }

    bool anchor_element::has_hidden_attr() const
    {    
    return m_has_hidden_attr;
    }

    void anchor_element::set_hidden_attr(const XSD::boolean_& _hidden_attr)
    {    
    m_has_hidden_attr = true;
    m_hidden_attr = _hidden_attr;
    }

    const XSD::boolean_& anchor_element::get_hidden_attr() const
    {    
    return m_hidden_attr;
    }

    bool anchor_element::has_allowOverlap_attr() const
    {    
    return m_has_allowOverlap_attr;
    }

    void anchor_element::set_allowOverlap_attr(const XSD::boolean_& _allowOverlap_attr)
    {    
    m_has_allowOverlap_attr = true;
    m_allowOverlap_attr = _allowOverlap_attr;
    }

    const XSD::boolean_& anchor_element::get_allowOverlap_attr() const
    {    
    return m_allowOverlap_attr;
    }

anchor_element* anchor_element::default_instance_ = NULL;
}