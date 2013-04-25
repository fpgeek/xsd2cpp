#include "vml-wordprocessingDrawing_xsd.h"
#include <stdlib.h>
#include <sstream>
#include <sstream>
#include <assert.h>
namespace ns_w10 {
 using namespace std;

    // Element

    // Attribute

    // ST_BorderType
    ST_BorderType::ST_BorderType()
    :m_has_type(false)
    {
    }
    ST_BorderType::ST_BorderType(const ST_BorderType::Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
    }
    bool ST_BorderType::has_type() const
    {    
    return m_has_type;
    }

    void ST_BorderType::set_type(const ST_BorderType::Type& _type)
    {    
    m_has_type = true;
    m_type = _type;
    }

    const ST_BorderType::Type& ST_BorderType::get_type() const
    {    
                return m_type;
                }

    std::string ST_BorderType::toString() const
    {    
    return ST_BorderType::TypeStrList[m_type];
    }

    void ST_BorderType::clear()
    {    
    m_has_type = false;
    }

    void ST_BorderType::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_type)
    {
    _outStream << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_BorderType& ST_BorderType::default_instance()
    {    
    if (!ST_BorderType::default_instance_)
    {
        ST_BorderType::default_instance_ = new ST_BorderType();
    }
    return *ST_BorderType::default_instance_;
    }

    const std::string ST_BorderType::TypeStrList[] =
    {
        "none",
        "single",
        "thick",
        "double",
        "hairline",
        "dot",
        "dash",
        "dotDash",
        "dashDotDot",
        "triple",
        "thinThickSmall",
        "thickThinSmall",
        "thickBetweenThinSmall",
        "thinThick",
        "thickThin",
        "thickBetweenThin",
        "thinThickLarge",
        "thickThinLarge",
        "thickBetweenThinLarge",
        "wave",
        "doubleWave",
        "dashedSmall",
        "dashDotStroked",
        "threeDEmboss",
        "threeDEngrave",
        "HTMLOutset",
        "HTMLInset"
    };
ST_BorderType* ST_BorderType::default_instance_ = NULL;

    // ST_BorderShadow
    ST_BorderShadow::ST_BorderShadow()
    :m_has_type(false)
    {
    }
    ST_BorderShadow::ST_BorderShadow(const ST_BorderShadow::Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
    }
    bool ST_BorderShadow::has_type() const
    {    
    return m_has_type;
    }

    void ST_BorderShadow::set_type(const ST_BorderShadow::Type& _type)
    {    
    m_has_type = true;
    m_type = _type;
    }

    const ST_BorderShadow::Type& ST_BorderShadow::get_type() const
    {    
                return m_type;
                }

    std::string ST_BorderShadow::toString() const
    {    
    return ST_BorderShadow::TypeStrList[m_type];
    }

    void ST_BorderShadow::clear()
    {    
    m_has_type = false;
    }

    void ST_BorderShadow::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_type)
    {
    _outStream << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_BorderShadow& ST_BorderShadow::default_instance()
    {    
    if (!ST_BorderShadow::default_instance_)
    {
        ST_BorderShadow::default_instance_ = new ST_BorderShadow();
    }
    return *ST_BorderShadow::default_instance_;
    }

    const std::string ST_BorderShadow::TypeStrList[] =
    {
        "t",
        "true",
        "f",
        "false"
    };
ST_BorderShadow* ST_BorderShadow::default_instance_ = NULL;

    // ST_WrapType
    ST_WrapType::ST_WrapType()
    :m_has_type(false)
    {
    }
    ST_WrapType::ST_WrapType(const ST_WrapType::Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
    }
    bool ST_WrapType::has_type() const
    {    
    return m_has_type;
    }

    void ST_WrapType::set_type(const ST_WrapType::Type& _type)
    {    
    m_has_type = true;
    m_type = _type;
    }

    const ST_WrapType::Type& ST_WrapType::get_type() const
    {    
                return m_type;
                }

    std::string ST_WrapType::toString() const
    {    
    return ST_WrapType::TypeStrList[m_type];
    }

    void ST_WrapType::clear()
    {    
    m_has_type = false;
    }

    void ST_WrapType::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_type)
    {
    _outStream << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_WrapType& ST_WrapType::default_instance()
    {    
    if (!ST_WrapType::default_instance_)
    {
        ST_WrapType::default_instance_ = new ST_WrapType();
    }
    return *ST_WrapType::default_instance_;
    }

    const std::string ST_WrapType::TypeStrList[] =
    {
        "topAndBottom",
        "square",
        "none",
        "tight",
        "through"
    };
ST_WrapType* ST_WrapType::default_instance_ = NULL;

    // ST_WrapSide
    ST_WrapSide::ST_WrapSide()
    :m_has_type(false)
    {
    }
    ST_WrapSide::ST_WrapSide(const ST_WrapSide::Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
    }
    bool ST_WrapSide::has_type() const
    {    
    return m_has_type;
    }

    void ST_WrapSide::set_type(const ST_WrapSide::Type& _type)
    {    
    m_has_type = true;
    m_type = _type;
    }

    const ST_WrapSide::Type& ST_WrapSide::get_type() const
    {    
                return m_type;
                }

    std::string ST_WrapSide::toString() const
    {    
    return ST_WrapSide::TypeStrList[m_type];
    }

    void ST_WrapSide::clear()
    {    
    m_has_type = false;
    }

    void ST_WrapSide::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_type)
    {
    _outStream << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_WrapSide& ST_WrapSide::default_instance()
    {    
    if (!ST_WrapSide::default_instance_)
    {
        ST_WrapSide::default_instance_ = new ST_WrapSide();
    }
    return *ST_WrapSide::default_instance_;
    }

    const std::string ST_WrapSide::TypeStrList[] =
    {
        "both",
        "left",
        "right",
        "largest"
    };
ST_WrapSide* ST_WrapSide::default_instance_ = NULL;

    // ST_HorizontalAnchor
    ST_HorizontalAnchor::ST_HorizontalAnchor()
    :m_has_type(false)
    {
    }
    ST_HorizontalAnchor::ST_HorizontalAnchor(const ST_HorizontalAnchor::Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
    }
    bool ST_HorizontalAnchor::has_type() const
    {    
    return m_has_type;
    }

    void ST_HorizontalAnchor::set_type(const ST_HorizontalAnchor::Type& _type)
    {    
    m_has_type = true;
    m_type = _type;
    }

    const ST_HorizontalAnchor::Type& ST_HorizontalAnchor::get_type() const
    {    
                return m_type;
                }

    std::string ST_HorizontalAnchor::toString() const
    {    
    return ST_HorizontalAnchor::TypeStrList[m_type];
    }

    void ST_HorizontalAnchor::clear()
    {    
    m_has_type = false;
    }

    void ST_HorizontalAnchor::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_type)
    {
    _outStream << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_HorizontalAnchor& ST_HorizontalAnchor::default_instance()
    {    
    if (!ST_HorizontalAnchor::default_instance_)
    {
        ST_HorizontalAnchor::default_instance_ = new ST_HorizontalAnchor();
    }
    return *ST_HorizontalAnchor::default_instance_;
    }

    const std::string ST_HorizontalAnchor::TypeStrList[] =
    {
        "margin",
        "page",
        "text",
        "char"
    };
ST_HorizontalAnchor* ST_HorizontalAnchor::default_instance_ = NULL;

    // ST_VerticalAnchor
    ST_VerticalAnchor::ST_VerticalAnchor()
    :m_has_type(false)
    {
    }
    ST_VerticalAnchor::ST_VerticalAnchor(const ST_VerticalAnchor::Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
    }
    bool ST_VerticalAnchor::has_type() const
    {    
    return m_has_type;
    }

    void ST_VerticalAnchor::set_type(const ST_VerticalAnchor::Type& _type)
    {    
    m_has_type = true;
    m_type = _type;
    }

    const ST_VerticalAnchor::Type& ST_VerticalAnchor::get_type() const
    {    
                return m_type;
                }

    std::string ST_VerticalAnchor::toString() const
    {    
    return ST_VerticalAnchor::TypeStrList[m_type];
    }

    void ST_VerticalAnchor::clear()
    {    
    m_has_type = false;
    }

    void ST_VerticalAnchor::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_type)
    {
    _outStream << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_VerticalAnchor& ST_VerticalAnchor::default_instance()
    {    
    if (!ST_VerticalAnchor::default_instance_)
    {
        ST_VerticalAnchor::default_instance_ = new ST_VerticalAnchor();
    }
    return *ST_VerticalAnchor::default_instance_;
    }

    const std::string ST_VerticalAnchor::TypeStrList[] =
    {
        "margin",
        "page",
        "text",
        "line"
    };
ST_VerticalAnchor* ST_VerticalAnchor::default_instance_ = NULL;

    // CT_Border
    void CT_Border::clear()
    {    
    m_has_type_attr = false;
    
    if (m_type_attr)
    {
        delete m_type_attr;
        m_type_attr = NULL;
    }
    
    
    m_has_width_attr = false;
    m_width_attr = 0;
    
    m_has_shadow_attr = false;
    
    if (m_shadow_attr)
    {
        delete m_shadow_attr;
        m_shadow_attr = NULL;
    }
    
    }

    void CT_Border::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
    if (m_has_type_attr)
    {
        m_type_attr->toXmlAttr("type", _outStream);
    }
    
    
    if (m_has_width_attr)
    {
        _outStream << " " << "width" << "=\"" << m_width_attr << "\"";
    }
    
    
    if (m_has_shadow_attr)
    {
        m_shadow_attr->toXmlAttr("shadow", _outStream);
    }
    
            _outStream << ">";
            
            _outStream << "</" << _elemName << ">";
                }

    const CT_Border& CT_Border::default_instance()
    {    
    if (!CT_Border::default_instance_)
    {
        CT_Border::default_instance_ = new CT_Border();
    }
    return *CT_Border::default_instance_;
    }

    bool CT_Border::has_type_attr() const
    {    
    return m_has_type_attr;
    }

    void CT_Border::set_type_attr(const ST_BorderType& _type_attr)
    {    
    m_has_type_attr = true;
    m_type_attr = new ST_BorderType(_type_attr);
    }

    const ST_BorderType& CT_Border::get_type_attr() const
    {    
    if (m_type_attr)
    {
        return *m_type_attr;
    }
    return ST_BorderType::default_instance();
    }

    bool CT_Border::has_width_attr() const
    {    
    return m_has_width_attr;
    }

    void CT_Border::set_width_attr(const XSD::positiveInteger_& _width_attr)
    {    
    m_has_width_attr = true;
    m_width_attr = _width_attr;
    }

    const XSD::positiveInteger_& CT_Border::get_width_attr() const
    {    
    return m_width_attr;
    }

    bool CT_Border::has_shadow_attr() const
    {    
    return m_has_shadow_attr;
    }

    void CT_Border::set_shadow_attr(const ST_BorderShadow& _shadow_attr)
    {    
    m_has_shadow_attr = true;
    m_shadow_attr = new ST_BorderShadow(_shadow_attr);
    }

    const ST_BorderShadow& CT_Border::get_shadow_attr() const
    {    
    if (m_shadow_attr)
    {
        return *m_shadow_attr;
    }
    return ST_BorderShadow::default_instance();
    }

CT_Border* CT_Border::default_instance_ = NULL;

    // CT_Wrap
    void CT_Wrap::clear()
    {    
    m_has_type_attr = false;
    
    if (m_type_attr)
    {
        delete m_type_attr;
        m_type_attr = NULL;
    }
    
    
    m_has_side_attr = false;
    
    if (m_side_attr)
    {
        delete m_side_attr;
        m_side_attr = NULL;
    }
    
    
    m_has_anchorx_attr = false;
    
    if (m_anchorx_attr)
    {
        delete m_anchorx_attr;
        m_anchorx_attr = NULL;
    }
    
    
    m_has_anchory_attr = false;
    
    if (m_anchory_attr)
    {
        delete m_anchory_attr;
        m_anchory_attr = NULL;
    }
    
    }

    void CT_Wrap::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
    if (m_has_type_attr)
    {
        m_type_attr->toXmlAttr("type", _outStream);
    }
    
    
    if (m_has_side_attr)
    {
        m_side_attr->toXmlAttr("side", _outStream);
    }
    
    
    if (m_has_anchorx_attr)
    {
        m_anchorx_attr->toXmlAttr("anchorx", _outStream);
    }
    
    
    if (m_has_anchory_attr)
    {
        m_anchory_attr->toXmlAttr("anchory", _outStream);
    }
    
            _outStream << ">";
            
            _outStream << "</" << _elemName << ">";
                }

    const CT_Wrap& CT_Wrap::default_instance()
    {    
    if (!CT_Wrap::default_instance_)
    {
        CT_Wrap::default_instance_ = new CT_Wrap();
    }
    return *CT_Wrap::default_instance_;
    }

    bool CT_Wrap::has_type_attr() const
    {    
    return m_has_type_attr;
    }

    void CT_Wrap::set_type_attr(const ST_WrapType& _type_attr)
    {    
    m_has_type_attr = true;
    m_type_attr = new ST_WrapType(_type_attr);
    }

    const ST_WrapType& CT_Wrap::get_type_attr() const
    {    
    if (m_type_attr)
    {
        return *m_type_attr;
    }
    return ST_WrapType::default_instance();
    }

    bool CT_Wrap::has_side_attr() const
    {    
    return m_has_side_attr;
    }

    void CT_Wrap::set_side_attr(const ST_WrapSide& _side_attr)
    {    
    m_has_side_attr = true;
    m_side_attr = new ST_WrapSide(_side_attr);
    }

    const ST_WrapSide& CT_Wrap::get_side_attr() const
    {    
    if (m_side_attr)
    {
        return *m_side_attr;
    }
    return ST_WrapSide::default_instance();
    }

    bool CT_Wrap::has_anchorx_attr() const
    {    
    return m_has_anchorx_attr;
    }

    void CT_Wrap::set_anchorx_attr(const ST_HorizontalAnchor& _anchorx_attr)
    {    
    m_has_anchorx_attr = true;
    m_anchorx_attr = new ST_HorizontalAnchor(_anchorx_attr);
    }

    const ST_HorizontalAnchor& CT_Wrap::get_anchorx_attr() const
    {    
    if (m_anchorx_attr)
    {
        return *m_anchorx_attr;
    }
    return ST_HorizontalAnchor::default_instance();
    }

    bool CT_Wrap::has_anchory_attr() const
    {    
    return m_has_anchory_attr;
    }

    void CT_Wrap::set_anchory_attr(const ST_VerticalAnchor& _anchory_attr)
    {    
    m_has_anchory_attr = true;
    m_anchory_attr = new ST_VerticalAnchor(_anchory_attr);
    }

    const ST_VerticalAnchor& CT_Wrap::get_anchory_attr() const
    {    
    if (m_anchory_attr)
    {
        return *m_anchory_attr;
    }
    return ST_VerticalAnchor::default_instance();
    }

CT_Wrap* CT_Wrap::default_instance_ = NULL;

    // CT_AnchorLock
    void CT_AnchorLock::clear()
    {    }

    void CT_AnchorLock::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
            _outStream << ">";
            
            _outStream << "</" << _elemName << ">";
                }

    const CT_AnchorLock& CT_AnchorLock::default_instance()
    {    
    if (!CT_AnchorLock::default_instance_)
    {
        CT_AnchorLock::default_instance_ = new CT_AnchorLock();
    }
    return *CT_AnchorLock::default_instance_;
    }

CT_AnchorLock* CT_AnchorLock::default_instance_ = NULL;

    // bordertop_element
    void bordertop_element::clear()
    {    
    m_has_type_attr = false;
    
    if (m_type_attr)
    {
        delete m_type_attr;
        m_type_attr = NULL;
    }
    
    
    m_has_width_attr = false;
    m_width_attr = 0;
    
    m_has_shadow_attr = false;
    
    if (m_shadow_attr)
    {
        delete m_shadow_attr;
        m_shadow_attr = NULL;
    }
    
    }

    void bordertop_element::toXml(std::ostream& _outStream) const
    {    
    _outStream << "<bordertop";
    
    _outStream << " " << "xmlns:w10=\"urn:schemas-microsoft-com:office:word\"";
    
    if (m_has_type_attr)
    {
        m_type_attr->toXmlAttr("type", _outStream);
    }
    
    
    if (m_has_width_attr)
    {
        _outStream << " " << "width" << "=\"" << m_width_attr << "\"";
    }
    
    
    if (m_has_shadow_attr)
    {
        m_shadow_attr->toXmlAttr("shadow", _outStream);
    }
    
    _outStream << ">";
    
    _outStream << "</bordertop>";
    }

    const bordertop_element& bordertop_element::default_instance()
    {    
    if (!bordertop_element::default_instance_)
    {
        bordertop_element::default_instance_ = new bordertop_element();
    }
    return *bordertop_element::default_instance_;
    }

    bool bordertop_element::has_type_attr() const
    {    
    return m_has_type_attr;
    }

    void bordertop_element::set_type_attr(const ST_BorderType& _type_attr)
    {    
    m_has_type_attr = true;
    m_type_attr = new ST_BorderType(_type_attr);
    }

    const ST_BorderType& bordertop_element::get_type_attr() const
    {    
    if (m_type_attr)
    {
        return *m_type_attr;
    }
    return ST_BorderType::default_instance();
    }

    bool bordertop_element::has_width_attr() const
    {    
    return m_has_width_attr;
    }

    void bordertop_element::set_width_attr(const XSD::positiveInteger_& _width_attr)
    {    
    m_has_width_attr = true;
    m_width_attr = _width_attr;
    }

    const XSD::positiveInteger_& bordertop_element::get_width_attr() const
    {    
    return m_width_attr;
    }

    bool bordertop_element::has_shadow_attr() const
    {    
    return m_has_shadow_attr;
    }

    void bordertop_element::set_shadow_attr(const ST_BorderShadow& _shadow_attr)
    {    
    m_has_shadow_attr = true;
    m_shadow_attr = new ST_BorderShadow(_shadow_attr);
    }

    const ST_BorderShadow& bordertop_element::get_shadow_attr() const
    {    
    if (m_shadow_attr)
    {
        return *m_shadow_attr;
    }
    return ST_BorderShadow::default_instance();
    }

bordertop_element* bordertop_element::default_instance_ = NULL;

    // borderleft_element
    void borderleft_element::clear()
    {    
    m_has_type_attr = false;
    
    if (m_type_attr)
    {
        delete m_type_attr;
        m_type_attr = NULL;
    }
    
    
    m_has_width_attr = false;
    m_width_attr = 0;
    
    m_has_shadow_attr = false;
    
    if (m_shadow_attr)
    {
        delete m_shadow_attr;
        m_shadow_attr = NULL;
    }
    
    }

    void borderleft_element::toXml(std::ostream& _outStream) const
    {    
    _outStream << "<borderleft";
    
    _outStream << " " << "xmlns:w10=\"urn:schemas-microsoft-com:office:word\"";
    
    if (m_has_type_attr)
    {
        m_type_attr->toXmlAttr("type", _outStream);
    }
    
    
    if (m_has_width_attr)
    {
        _outStream << " " << "width" << "=\"" << m_width_attr << "\"";
    }
    
    
    if (m_has_shadow_attr)
    {
        m_shadow_attr->toXmlAttr("shadow", _outStream);
    }
    
    _outStream << ">";
    
    _outStream << "</borderleft>";
    }

    const borderleft_element& borderleft_element::default_instance()
    {    
    if (!borderleft_element::default_instance_)
    {
        borderleft_element::default_instance_ = new borderleft_element();
    }
    return *borderleft_element::default_instance_;
    }

    bool borderleft_element::has_type_attr() const
    {    
    return m_has_type_attr;
    }

    void borderleft_element::set_type_attr(const ST_BorderType& _type_attr)
    {    
    m_has_type_attr = true;
    m_type_attr = new ST_BorderType(_type_attr);
    }

    const ST_BorderType& borderleft_element::get_type_attr() const
    {    
    if (m_type_attr)
    {
        return *m_type_attr;
    }
    return ST_BorderType::default_instance();
    }

    bool borderleft_element::has_width_attr() const
    {    
    return m_has_width_attr;
    }

    void borderleft_element::set_width_attr(const XSD::positiveInteger_& _width_attr)
    {    
    m_has_width_attr = true;
    m_width_attr = _width_attr;
    }

    const XSD::positiveInteger_& borderleft_element::get_width_attr() const
    {    
    return m_width_attr;
    }

    bool borderleft_element::has_shadow_attr() const
    {    
    return m_has_shadow_attr;
    }

    void borderleft_element::set_shadow_attr(const ST_BorderShadow& _shadow_attr)
    {    
    m_has_shadow_attr = true;
    m_shadow_attr = new ST_BorderShadow(_shadow_attr);
    }

    const ST_BorderShadow& borderleft_element::get_shadow_attr() const
    {    
    if (m_shadow_attr)
    {
        return *m_shadow_attr;
    }
    return ST_BorderShadow::default_instance();
    }

borderleft_element* borderleft_element::default_instance_ = NULL;

    // borderright_element
    void borderright_element::clear()
    {    
    m_has_type_attr = false;
    
    if (m_type_attr)
    {
        delete m_type_attr;
        m_type_attr = NULL;
    }
    
    
    m_has_width_attr = false;
    m_width_attr = 0;
    
    m_has_shadow_attr = false;
    
    if (m_shadow_attr)
    {
        delete m_shadow_attr;
        m_shadow_attr = NULL;
    }
    
    }

    void borderright_element::toXml(std::ostream& _outStream) const
    {    
    _outStream << "<borderright";
    
    _outStream << " " << "xmlns:w10=\"urn:schemas-microsoft-com:office:word\"";
    
    if (m_has_type_attr)
    {
        m_type_attr->toXmlAttr("type", _outStream);
    }
    
    
    if (m_has_width_attr)
    {
        _outStream << " " << "width" << "=\"" << m_width_attr << "\"";
    }
    
    
    if (m_has_shadow_attr)
    {
        m_shadow_attr->toXmlAttr("shadow", _outStream);
    }
    
    _outStream << ">";
    
    _outStream << "</borderright>";
    }

    const borderright_element& borderright_element::default_instance()
    {    
    if (!borderright_element::default_instance_)
    {
        borderright_element::default_instance_ = new borderright_element();
    }
    return *borderright_element::default_instance_;
    }

    bool borderright_element::has_type_attr() const
    {    
    return m_has_type_attr;
    }

    void borderright_element::set_type_attr(const ST_BorderType& _type_attr)
    {    
    m_has_type_attr = true;
    m_type_attr = new ST_BorderType(_type_attr);
    }

    const ST_BorderType& borderright_element::get_type_attr() const
    {    
    if (m_type_attr)
    {
        return *m_type_attr;
    }
    return ST_BorderType::default_instance();
    }

    bool borderright_element::has_width_attr() const
    {    
    return m_has_width_attr;
    }

    void borderright_element::set_width_attr(const XSD::positiveInteger_& _width_attr)
    {    
    m_has_width_attr = true;
    m_width_attr = _width_attr;
    }

    const XSD::positiveInteger_& borderright_element::get_width_attr() const
    {    
    return m_width_attr;
    }

    bool borderright_element::has_shadow_attr() const
    {    
    return m_has_shadow_attr;
    }

    void borderright_element::set_shadow_attr(const ST_BorderShadow& _shadow_attr)
    {    
    m_has_shadow_attr = true;
    m_shadow_attr = new ST_BorderShadow(_shadow_attr);
    }

    const ST_BorderShadow& borderright_element::get_shadow_attr() const
    {    
    if (m_shadow_attr)
    {
        return *m_shadow_attr;
    }
    return ST_BorderShadow::default_instance();
    }

borderright_element* borderright_element::default_instance_ = NULL;

    // borderbottom_element
    void borderbottom_element::clear()
    {    
    m_has_type_attr = false;
    
    if (m_type_attr)
    {
        delete m_type_attr;
        m_type_attr = NULL;
    }
    
    
    m_has_width_attr = false;
    m_width_attr = 0;
    
    m_has_shadow_attr = false;
    
    if (m_shadow_attr)
    {
        delete m_shadow_attr;
        m_shadow_attr = NULL;
    }
    
    }

    void borderbottom_element::toXml(std::ostream& _outStream) const
    {    
    _outStream << "<borderbottom";
    
    _outStream << " " << "xmlns:w10=\"urn:schemas-microsoft-com:office:word\"";
    
    if (m_has_type_attr)
    {
        m_type_attr->toXmlAttr("type", _outStream);
    }
    
    
    if (m_has_width_attr)
    {
        _outStream << " " << "width" << "=\"" << m_width_attr << "\"";
    }
    
    
    if (m_has_shadow_attr)
    {
        m_shadow_attr->toXmlAttr("shadow", _outStream);
    }
    
    _outStream << ">";
    
    _outStream << "</borderbottom>";
    }

    const borderbottom_element& borderbottom_element::default_instance()
    {    
    if (!borderbottom_element::default_instance_)
    {
        borderbottom_element::default_instance_ = new borderbottom_element();
    }
    return *borderbottom_element::default_instance_;
    }

    bool borderbottom_element::has_type_attr() const
    {    
    return m_has_type_attr;
    }

    void borderbottom_element::set_type_attr(const ST_BorderType& _type_attr)
    {    
    m_has_type_attr = true;
    m_type_attr = new ST_BorderType(_type_attr);
    }

    const ST_BorderType& borderbottom_element::get_type_attr() const
    {    
    if (m_type_attr)
    {
        return *m_type_attr;
    }
    return ST_BorderType::default_instance();
    }

    bool borderbottom_element::has_width_attr() const
    {    
    return m_has_width_attr;
    }

    void borderbottom_element::set_width_attr(const XSD::positiveInteger_& _width_attr)
    {    
    m_has_width_attr = true;
    m_width_attr = _width_attr;
    }

    const XSD::positiveInteger_& borderbottom_element::get_width_attr() const
    {    
    return m_width_attr;
    }

    bool borderbottom_element::has_shadow_attr() const
    {    
    return m_has_shadow_attr;
    }

    void borderbottom_element::set_shadow_attr(const ST_BorderShadow& _shadow_attr)
    {    
    m_has_shadow_attr = true;
    m_shadow_attr = new ST_BorderShadow(_shadow_attr);
    }

    const ST_BorderShadow& borderbottom_element::get_shadow_attr() const
    {    
    if (m_shadow_attr)
    {
        return *m_shadow_attr;
    }
    return ST_BorderShadow::default_instance();
    }

borderbottom_element* borderbottom_element::default_instance_ = NULL;

    // wrap_element
    void wrap_element::clear()
    {    
    m_has_type_attr = false;
    
    if (m_type_attr)
    {
        delete m_type_attr;
        m_type_attr = NULL;
    }
    
    
    m_has_side_attr = false;
    
    if (m_side_attr)
    {
        delete m_side_attr;
        m_side_attr = NULL;
    }
    
    
    m_has_anchorx_attr = false;
    
    if (m_anchorx_attr)
    {
        delete m_anchorx_attr;
        m_anchorx_attr = NULL;
    }
    
    
    m_has_anchory_attr = false;
    
    if (m_anchory_attr)
    {
        delete m_anchory_attr;
        m_anchory_attr = NULL;
    }
    
    }

    void wrap_element::toXml(std::ostream& _outStream) const
    {    
    _outStream << "<wrap";
    
    _outStream << " " << "xmlns:w10=\"urn:schemas-microsoft-com:office:word\"";
    
    if (m_has_type_attr)
    {
        m_type_attr->toXmlAttr("type", _outStream);
    }
    
    
    if (m_has_side_attr)
    {
        m_side_attr->toXmlAttr("side", _outStream);
    }
    
    
    if (m_has_anchorx_attr)
    {
        m_anchorx_attr->toXmlAttr("anchorx", _outStream);
    }
    
    
    if (m_has_anchory_attr)
    {
        m_anchory_attr->toXmlAttr("anchory", _outStream);
    }
    
    _outStream << ">";
    
    _outStream << "</wrap>";
    }

    const wrap_element& wrap_element::default_instance()
    {    
    if (!wrap_element::default_instance_)
    {
        wrap_element::default_instance_ = new wrap_element();
    }
    return *wrap_element::default_instance_;
    }

    bool wrap_element::has_type_attr() const
    {    
    return m_has_type_attr;
    }

    void wrap_element::set_type_attr(const ST_WrapType& _type_attr)
    {    
    m_has_type_attr = true;
    m_type_attr = new ST_WrapType(_type_attr);
    }

    const ST_WrapType& wrap_element::get_type_attr() const
    {    
    if (m_type_attr)
    {
        return *m_type_attr;
    }
    return ST_WrapType::default_instance();
    }

    bool wrap_element::has_side_attr() const
    {    
    return m_has_side_attr;
    }

    void wrap_element::set_side_attr(const ST_WrapSide& _side_attr)
    {    
    m_has_side_attr = true;
    m_side_attr = new ST_WrapSide(_side_attr);
    }

    const ST_WrapSide& wrap_element::get_side_attr() const
    {    
    if (m_side_attr)
    {
        return *m_side_attr;
    }
    return ST_WrapSide::default_instance();
    }

    bool wrap_element::has_anchorx_attr() const
    {    
    return m_has_anchorx_attr;
    }

    void wrap_element::set_anchorx_attr(const ST_HorizontalAnchor& _anchorx_attr)
    {    
    m_has_anchorx_attr = true;
    m_anchorx_attr = new ST_HorizontalAnchor(_anchorx_attr);
    }

    const ST_HorizontalAnchor& wrap_element::get_anchorx_attr() const
    {    
    if (m_anchorx_attr)
    {
        return *m_anchorx_attr;
    }
    return ST_HorizontalAnchor::default_instance();
    }

    bool wrap_element::has_anchory_attr() const
    {    
    return m_has_anchory_attr;
    }

    void wrap_element::set_anchory_attr(const ST_VerticalAnchor& _anchory_attr)
    {    
    m_has_anchory_attr = true;
    m_anchory_attr = new ST_VerticalAnchor(_anchory_attr);
    }

    const ST_VerticalAnchor& wrap_element::get_anchory_attr() const
    {    
    if (m_anchory_attr)
    {
        return *m_anchory_attr;
    }
    return ST_VerticalAnchor::default_instance();
    }

wrap_element* wrap_element::default_instance_ = NULL;

    // anchorlock_element
    void anchorlock_element::clear()
    {    }

    void anchorlock_element::toXml(std::ostream& _outStream) const
    {    
    _outStream << "<anchorlock";
    
    _outStream << " " << "xmlns:w10=\"urn:schemas-microsoft-com:office:word\"";
    
    _outStream << ">";
    
    _outStream << "</anchorlock>";
    }

    const anchorlock_element& anchorlock_element::default_instance()
    {    
    if (!anchorlock_element::default_instance_)
    {
        anchorlock_element::default_instance_ = new anchorlock_element();
    }
    return *anchorlock_element::default_instance_;
    }

anchorlock_element* anchorlock_element::default_instance_ = NULL;
}