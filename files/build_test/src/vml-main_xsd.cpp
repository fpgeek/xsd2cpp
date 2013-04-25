#include "vml-main_xsd.h"
#include <stdlib.h>
#include <sstream>
#include <sstream>
#include <assert.h>
#include "vml-officeDrawing_xsd.h"
#include "wml_xsd.h"
#include "vml-wordprocessingDrawing_xsd.h"
#include "shared-relationshipReference_xsd.h"
#include "vml-spreadsheetDrawing_xsd.h"
#include "vml-presentationDrawing_xsd.h"
#include "shared-commonSimpleTypes_xsd.h"
namespace ns_v {
 using namespace std;

    // Element

    // Attribute

    // ST_Ext
    ST_Ext::ST_Ext()
    :m_has_type(false)
    {
    }
    ST_Ext::ST_Ext(const ST_Ext::Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
    }
    bool ST_Ext::has_type() const
    {    
    return m_has_type;
    }

    void ST_Ext::set_type(const ST_Ext::Type& _type)
    {    
    m_has_type = true;
    m_type = _type;
    }

    const ST_Ext::Type& ST_Ext::get_type() const
    {    
                return m_type;
                }

    std::string ST_Ext::toString() const
    {    
    return ST_Ext::TypeStrList[m_type];
    }

    void ST_Ext::clear()
    {    
    m_has_type = false;
    }

    void ST_Ext::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_type)
    {
    _outStream << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_Ext& ST_Ext::default_instance()
    {    
    if (!ST_Ext::default_instance_)
    {
        ST_Ext::default_instance_ = new ST_Ext();
    }
    return *ST_Ext::default_instance_;
    }

    const std::string ST_Ext::TypeStrList[] =
    {
        "view",
        "edit",
        "backwardCompatible"
    };

    // ST_FillType
    ST_FillType::ST_FillType()
    :m_has_type(false)
    {
    }
    ST_FillType::ST_FillType(const ST_FillType::Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
    }
    bool ST_FillType::has_type() const
    {    
    return m_has_type;
    }

    void ST_FillType::set_type(const ST_FillType::Type& _type)
    {    
    m_has_type = true;
    m_type = _type;
    }

    const ST_FillType::Type& ST_FillType::get_type() const
    {    
                return m_type;
                }

    std::string ST_FillType::toString() const
    {    
    return ST_FillType::TypeStrList[m_type];
    }

    void ST_FillType::clear()
    {    
    m_has_type = false;
    }

    void ST_FillType::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_type)
    {
    _outStream << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_FillType& ST_FillType::default_instance()
    {    
    if (!ST_FillType::default_instance_)
    {
        ST_FillType::default_instance_ = new ST_FillType();
    }
    return *ST_FillType::default_instance_;
    }

    const std::string ST_FillType::TypeStrList[] =
    {
        "solid",
        "gradient",
        "gradientRadial",
        "tile",
        "pattern",
        "frame"
    };

    // ST_FillMethod
    ST_FillMethod::ST_FillMethod()
    :m_has_type(false)
    {
    }
    ST_FillMethod::ST_FillMethod(const ST_FillMethod::Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
    }
    bool ST_FillMethod::has_type() const
    {    
    return m_has_type;
    }

    void ST_FillMethod::set_type(const ST_FillMethod::Type& _type)
    {    
    m_has_type = true;
    m_type = _type;
    }

    const ST_FillMethod::Type& ST_FillMethod::get_type() const
    {    
                return m_type;
                }

    std::string ST_FillMethod::toString() const
    {    
    return ST_FillMethod::TypeStrList[m_type];
    }

    void ST_FillMethod::clear()
    {    
    m_has_type = false;
    }

    void ST_FillMethod::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_type)
    {
    _outStream << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_FillMethod& ST_FillMethod::default_instance()
    {    
    if (!ST_FillMethod::default_instance_)
    {
        ST_FillMethod::default_instance_ = new ST_FillMethod();
    }
    return *ST_FillMethod::default_instance_;
    }

    const std::string ST_FillMethod::TypeStrList[] =
    {
        "none",
        "linear",
        "sigma",
        "any",
        "linear sigma"
    };

    // ST_ShadowType
    ST_ShadowType::ST_ShadowType()
    :m_has_type(false)
    {
    }
    ST_ShadowType::ST_ShadowType(const ST_ShadowType::Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
    }
    bool ST_ShadowType::has_type() const
    {    
    return m_has_type;
    }

    void ST_ShadowType::set_type(const ST_ShadowType::Type& _type)
    {    
    m_has_type = true;
    m_type = _type;
    }

    const ST_ShadowType::Type& ST_ShadowType::get_type() const
    {    
                return m_type;
                }

    std::string ST_ShadowType::toString() const
    {    
    return ST_ShadowType::TypeStrList[m_type];
    }

    void ST_ShadowType::clear()
    {    
    m_has_type = false;
    }

    void ST_ShadowType::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_type)
    {
    _outStream << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_ShadowType& ST_ShadowType::default_instance()
    {    
    if (!ST_ShadowType::default_instance_)
    {
        ST_ShadowType::default_instance_ = new ST_ShadowType();
    }
    return *ST_ShadowType::default_instance_;
    }

    const std::string ST_ShadowType::TypeStrList[] =
    {
        "single",
        "double",
        "emboss",
        "perspective"
    };

    // ST_StrokeLineStyle
    ST_StrokeLineStyle::ST_StrokeLineStyle()
    :m_has_type(false)
    {
    }
    ST_StrokeLineStyle::ST_StrokeLineStyle(const ST_StrokeLineStyle::Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
    }
    bool ST_StrokeLineStyle::has_type() const
    {    
    return m_has_type;
    }

    void ST_StrokeLineStyle::set_type(const ST_StrokeLineStyle::Type& _type)
    {    
    m_has_type = true;
    m_type = _type;
    }

    const ST_StrokeLineStyle::Type& ST_StrokeLineStyle::get_type() const
    {    
                return m_type;
                }

    std::string ST_StrokeLineStyle::toString() const
    {    
    return ST_StrokeLineStyle::TypeStrList[m_type];
    }

    void ST_StrokeLineStyle::clear()
    {    
    m_has_type = false;
    }

    void ST_StrokeLineStyle::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_type)
    {
    _outStream << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_StrokeLineStyle& ST_StrokeLineStyle::default_instance()
    {    
    if (!ST_StrokeLineStyle::default_instance_)
    {
        ST_StrokeLineStyle::default_instance_ = new ST_StrokeLineStyle();
    }
    return *ST_StrokeLineStyle::default_instance_;
    }

    const std::string ST_StrokeLineStyle::TypeStrList[] =
    {
        "single",
        "thinThin",
        "thinThick",
        "thickThin",
        "thickBetweenThin"
    };

    // ST_StrokeJoinStyle
    ST_StrokeJoinStyle::ST_StrokeJoinStyle()
    :m_has_type(false)
    {
    }
    ST_StrokeJoinStyle::ST_StrokeJoinStyle(const ST_StrokeJoinStyle::Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
    }
    bool ST_StrokeJoinStyle::has_type() const
    {    
    return m_has_type;
    }

    void ST_StrokeJoinStyle::set_type(const ST_StrokeJoinStyle::Type& _type)
    {    
    m_has_type = true;
    m_type = _type;
    }

    const ST_StrokeJoinStyle::Type& ST_StrokeJoinStyle::get_type() const
    {    
                return m_type;
                }

    std::string ST_StrokeJoinStyle::toString() const
    {    
    return ST_StrokeJoinStyle::TypeStrList[m_type];
    }

    void ST_StrokeJoinStyle::clear()
    {    
    m_has_type = false;
    }

    void ST_StrokeJoinStyle::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_type)
    {
    _outStream << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_StrokeJoinStyle& ST_StrokeJoinStyle::default_instance()
    {    
    if (!ST_StrokeJoinStyle::default_instance_)
    {
        ST_StrokeJoinStyle::default_instance_ = new ST_StrokeJoinStyle();
    }
    return *ST_StrokeJoinStyle::default_instance_;
    }

    const std::string ST_StrokeJoinStyle::TypeStrList[] =
    {
        "round",
        "bevel",
        "miter"
    };

    // ST_StrokeEndCap
    ST_StrokeEndCap::ST_StrokeEndCap()
    :m_has_type(false)
    {
    }
    ST_StrokeEndCap::ST_StrokeEndCap(const ST_StrokeEndCap::Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
    }
    bool ST_StrokeEndCap::has_type() const
    {    
    return m_has_type;
    }

    void ST_StrokeEndCap::set_type(const ST_StrokeEndCap::Type& _type)
    {    
    m_has_type = true;
    m_type = _type;
    }

    const ST_StrokeEndCap::Type& ST_StrokeEndCap::get_type() const
    {    
                return m_type;
                }

    std::string ST_StrokeEndCap::toString() const
    {    
    return ST_StrokeEndCap::TypeStrList[m_type];
    }

    void ST_StrokeEndCap::clear()
    {    
    m_has_type = false;
    }

    void ST_StrokeEndCap::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_type)
    {
    _outStream << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_StrokeEndCap& ST_StrokeEndCap::default_instance()
    {    
    if (!ST_StrokeEndCap::default_instance_)
    {
        ST_StrokeEndCap::default_instance_ = new ST_StrokeEndCap();
    }
    return *ST_StrokeEndCap::default_instance_;
    }

    const std::string ST_StrokeEndCap::TypeStrList[] =
    {
        "flat",
        "square",
        "round"
    };

    // ST_StrokeArrowLength
    ST_StrokeArrowLength::ST_StrokeArrowLength()
    :m_has_type(false)
    {
    }
    ST_StrokeArrowLength::ST_StrokeArrowLength(const ST_StrokeArrowLength::Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
    }
    bool ST_StrokeArrowLength::has_type() const
    {    
    return m_has_type;
    }

    void ST_StrokeArrowLength::set_type(const ST_StrokeArrowLength::Type& _type)
    {    
    m_has_type = true;
    m_type = _type;
    }

    const ST_StrokeArrowLength::Type& ST_StrokeArrowLength::get_type() const
    {    
                return m_type;
                }

    std::string ST_StrokeArrowLength::toString() const
    {    
    return ST_StrokeArrowLength::TypeStrList[m_type];
    }

    void ST_StrokeArrowLength::clear()
    {    
    m_has_type = false;
    }

    void ST_StrokeArrowLength::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_type)
    {
    _outStream << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_StrokeArrowLength& ST_StrokeArrowLength::default_instance()
    {    
    if (!ST_StrokeArrowLength::default_instance_)
    {
        ST_StrokeArrowLength::default_instance_ = new ST_StrokeArrowLength();
    }
    return *ST_StrokeArrowLength::default_instance_;
    }

    const std::string ST_StrokeArrowLength::TypeStrList[] =
    {
        "short",
        "medium",
        "long"
    };

    // ST_StrokeArrowWidth
    ST_StrokeArrowWidth::ST_StrokeArrowWidth()
    :m_has_type(false)
    {
    }
    ST_StrokeArrowWidth::ST_StrokeArrowWidth(const ST_StrokeArrowWidth::Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
    }
    bool ST_StrokeArrowWidth::has_type() const
    {    
    return m_has_type;
    }

    void ST_StrokeArrowWidth::set_type(const ST_StrokeArrowWidth::Type& _type)
    {    
    m_has_type = true;
    m_type = _type;
    }

    const ST_StrokeArrowWidth::Type& ST_StrokeArrowWidth::get_type() const
    {    
                return m_type;
                }

    std::string ST_StrokeArrowWidth::toString() const
    {    
    return ST_StrokeArrowWidth::TypeStrList[m_type];
    }

    void ST_StrokeArrowWidth::clear()
    {    
    m_has_type = false;
    }

    void ST_StrokeArrowWidth::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_type)
    {
    _outStream << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_StrokeArrowWidth& ST_StrokeArrowWidth::default_instance()
    {    
    if (!ST_StrokeArrowWidth::default_instance_)
    {
        ST_StrokeArrowWidth::default_instance_ = new ST_StrokeArrowWidth();
    }
    return *ST_StrokeArrowWidth::default_instance_;
    }

    const std::string ST_StrokeArrowWidth::TypeStrList[] =
    {
        "narrow",
        "medium",
        "wide"
    };

    // ST_StrokeArrowType
    ST_StrokeArrowType::ST_StrokeArrowType()
    :m_has_type(false)
    {
    }
    ST_StrokeArrowType::ST_StrokeArrowType(const ST_StrokeArrowType::Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
    }
    bool ST_StrokeArrowType::has_type() const
    {    
    return m_has_type;
    }

    void ST_StrokeArrowType::set_type(const ST_StrokeArrowType::Type& _type)
    {    
    m_has_type = true;
    m_type = _type;
    }

    const ST_StrokeArrowType::Type& ST_StrokeArrowType::get_type() const
    {    
                return m_type;
                }

    std::string ST_StrokeArrowType::toString() const
    {    
    return ST_StrokeArrowType::TypeStrList[m_type];
    }

    void ST_StrokeArrowType::clear()
    {    
    m_has_type = false;
    }

    void ST_StrokeArrowType::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_type)
    {
    _outStream << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_StrokeArrowType& ST_StrokeArrowType::default_instance()
    {    
    if (!ST_StrokeArrowType::default_instance_)
    {
        ST_StrokeArrowType::default_instance_ = new ST_StrokeArrowType();
    }
    return *ST_StrokeArrowType::default_instance_;
    }

    const std::string ST_StrokeArrowType::TypeStrList[] =
    {
        "none",
        "block",
        "classic",
        "oval",
        "diamond",
        "open"
    };

    // ST_ImageAspect
    ST_ImageAspect::ST_ImageAspect()
    :m_has_type(false)
    {
    }
    ST_ImageAspect::ST_ImageAspect(const ST_ImageAspect::Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
    }
    bool ST_ImageAspect::has_type() const
    {    
    return m_has_type;
    }

    void ST_ImageAspect::set_type(const ST_ImageAspect::Type& _type)
    {    
    m_has_type = true;
    m_type = _type;
    }

    const ST_ImageAspect::Type& ST_ImageAspect::get_type() const
    {    
                return m_type;
                }

    std::string ST_ImageAspect::toString() const
    {    
    return ST_ImageAspect::TypeStrList[m_type];
    }

    void ST_ImageAspect::clear()
    {    
    m_has_type = false;
    }

    void ST_ImageAspect::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_type)
    {
    _outStream << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_ImageAspect& ST_ImageAspect::default_instance()
    {    
    if (!ST_ImageAspect::default_instance_)
    {
        ST_ImageAspect::default_instance_ = new ST_ImageAspect();
    }
    return *ST_ImageAspect::default_instance_;
    }

    const std::string ST_ImageAspect::TypeStrList[] =
    {
        "ignore",
        "atMost",
        "atLeast"
    };

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
        "canvas",
        "orgchart",
        "radial",
        "cycle",
        "stacked",
        "venn",
        "bullseye"
    };

    // CT_Shape
    CT_Path* CT_Shape::add_path()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Path* pNewChild = pChildGroup->mutable_path();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Formulas* CT_Shape::add_formulas()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Formulas* pNewChild = pChildGroup->mutable_formulas();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Handles* CT_Shape::add_handles()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Handles* pNewChild = pChildGroup->mutable_handles();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Fill* CT_Shape::add_fill()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Fill* pNewChild = pChildGroup->mutable_fill();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Stroke* CT_Shape::add_stroke()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Stroke* pNewChild = pChildGroup->mutable_stroke();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Shadow* CT_Shape::add_shadow()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Shadow* pNewChild = pChildGroup->mutable_shadow();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Textbox* CT_Shape::add_textbox()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Textbox* pNewChild = pChildGroup->mutable_textbox();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_TextPath* CT_Shape::add_textpath()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_TextPath* pNewChild = pChildGroup->mutable_textpath();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_ImageData* CT_Shape::add_imagedata()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_ImageData* pNewChild = pChildGroup->mutable_imagedata();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_Skew* CT_Shape::add_o_skew()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_Skew* pNewChild = pChildGroup->mutable_o_skew();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_Extrusion* CT_Shape::add_o_extrusion()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_Extrusion* pNewChild = pChildGroup->mutable_o_extrusion();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_Callout* CT_Shape::add_o_callout()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_Callout* pNewChild = pChildGroup->mutable_o_callout();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_Lock* CT_Shape::add_o_lock()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_Lock* pNewChild = pChildGroup->mutable_o_lock();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_ClipPath* CT_Shape::add_o_clippath()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_ClipPath* pNewChild = pChildGroup->mutable_o_clippath();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_SignatureLine* CT_Shape::add_o_signatureline()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_SignatureLine* pNewChild = pChildGroup->mutable_o_signatureline();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w10::CT_Wrap* CT_Shape::add_w10_wrap()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w10::CT_Wrap* pNewChild = pChildGroup->mutable_w10_wrap();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w10::CT_AnchorLock* CT_Shape::add_w10_anchorlock()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w10::CT_AnchorLock* pNewChild = pChildGroup->mutable_w10_anchorlock();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w10::CT_Border* CT_Shape::add_w10_bordertop()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w10::CT_Border* pNewChild = pChildGroup->mutable_w10_bordertop();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w10::CT_Border* CT_Shape::add_w10_borderbottom()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w10::CT_Border* pNewChild = pChildGroup->mutable_w10_borderbottom();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w10::CT_Border* CT_Shape::add_w10_borderleft()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w10::CT_Border* pNewChild = pChildGroup->mutable_w10_borderleft();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w10::CT_Border* CT_Shape::add_w10_borderright()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w10::CT_Border* pNewChild = pChildGroup->mutable_w10_borderright();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_x::CT_ClientData* CT_Shape::add_x_ClientData()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_x::CT_ClientData* pNewChild = pChildGroup->mutable_x_ClientData();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_pvml::CT_Rel* CT_Shape::add_pvml_textdata()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_pvml::CT_Rel* pNewChild = pChildGroup->mutable_pvml_textdata();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_Ink* CT_Shape::add_o_ink()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_Ink* pNewChild = pChildGroup->mutable_o_ink();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_pvml::CT_Empty* CT_Shape::add_pvml_iscomment()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_pvml::CT_Empty* pNewChild = pChildGroup->mutable_pvml_iscomment();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_EquationXml* CT_Shape::add_o_equationxml()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_EquationXml* pNewChild = pChildGroup->mutable_o_equationxml();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    void CT_Shape::clear()
    {    
    m_has_type_attr = false;
    m_type_attr.clear();
    
    m_has_adj_attr = false;
    m_adj_attr.clear();
    
    m_has_path_attr = false;
    m_path_attr.clear();
    
    m_has_gfxdata_attr = false;
    m_gfxdata_attr.clear();
    
    m_has_equationxml_attr = false;
    m_equationxml_attr.clear();
    
    {
        vector<ChildGroup_1*>::iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_1.clear();
    }
    }

    void CT_Shape::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
    if (m_has_type_attr)
    {
        _outStream << " " << "type" << "=\"" << m_type_attr << "\"";
    }
    
    
    if (m_has_adj_attr)
    {
        _outStream << " " << "adj" << "=\"" << m_adj_attr << "\"";
    }
    
    
    if (m_has_path_attr)
    {
        _outStream << " " << "path" << "=\"" << m_path_attr << "\"";
    }
    
    
    if (m_has_gfxdata_attr)
    {
        _outStream << " " << "gfxdata" << "=\"" << m_gfxdata_attr << "\"";
    }
    
    
    if (m_has_equationxml_attr)
    {
        _outStream << " " << "equationxml" << "=\"" << m_equationxml_attr << "\"";
    }
    
            _outStream << ">";
            
    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_path())
            {
                (*iter)->get_path().toXmlElem("v:path", "", _outStream);
            }
            else if ((*iter)->has_formulas())
            {
                (*iter)->get_formulas().toXmlElem("v:formulas", "", _outStream);
            }
            else if ((*iter)->has_handles())
            {
                (*iter)->get_handles().toXmlElem("v:handles", "", _outStream);
            }
            else if ((*iter)->has_fill())
            {
                (*iter)->get_fill().toXmlElem("v:fill", "", _outStream);
            }
            else if ((*iter)->has_stroke())
            {
                (*iter)->get_stroke().toXmlElem("v:stroke", "", _outStream);
            }
            else if ((*iter)->has_shadow())
            {
                (*iter)->get_shadow().toXmlElem("v:shadow", "", _outStream);
            }
            else if ((*iter)->has_textbox())
            {
                (*iter)->get_textbox().toXmlElem("v:textbox", "", _outStream);
            }
            else if ((*iter)->has_textpath())
            {
                (*iter)->get_textpath().toXmlElem("v:textpath", "", _outStream);
            }
            else if ((*iter)->has_imagedata())
            {
                (*iter)->get_imagedata().toXmlElem("v:imagedata", "", _outStream);
            }
            else if ((*iter)->has_o_skew())
            {
                (*iter)->get_o_skew().toXmlElem("v:skew", "", _outStream);
            }
            else if ((*iter)->has_o_extrusion())
            {
                (*iter)->get_o_extrusion().toXmlElem("v:extrusion", "", _outStream);
            }
            else if ((*iter)->has_o_callout())
            {
                (*iter)->get_o_callout().toXmlElem("v:callout", "", _outStream);
            }
            else if ((*iter)->has_o_lock())
            {
                (*iter)->get_o_lock().toXmlElem("v:lock", "", _outStream);
            }
            else if ((*iter)->has_o_clippath())
            {
                (*iter)->get_o_clippath().toXmlElem("v:clippath", "", _outStream);
            }
            else if ((*iter)->has_o_signatureline())
            {
                (*iter)->get_o_signatureline().toXmlElem("v:signatureline", "", _outStream);
            }
            else if ((*iter)->has_w10_wrap())
            {
                (*iter)->get_w10_wrap().toXmlElem("v:wrap", "", _outStream);
            }
            else if ((*iter)->has_w10_anchorlock())
            {
                (*iter)->get_w10_anchorlock().toXmlElem("v:anchorlock", "", _outStream);
            }
            else if ((*iter)->has_w10_bordertop())
            {
                (*iter)->get_w10_bordertop().toXmlElem("v:bordertop", "", _outStream);
            }
            else if ((*iter)->has_w10_borderbottom())
            {
                (*iter)->get_w10_borderbottom().toXmlElem("v:borderbottom", "", _outStream);
            }
            else if ((*iter)->has_w10_borderleft())
            {
                (*iter)->get_w10_borderleft().toXmlElem("v:borderleft", "", _outStream);
            }
            else if ((*iter)->has_w10_borderright())
            {
                (*iter)->get_w10_borderright().toXmlElem("v:borderright", "", _outStream);
            }
            else if ((*iter)->has_x_ClientData())
            {
                (*iter)->get_x_ClientData().toXmlElem("v:ClientData", "", _outStream);
            }
            else if ((*iter)->has_pvml_textdata())
            {
                (*iter)->get_pvml_textdata().toXmlElem("v:textdata", "", _outStream);
            }
            else if ((*iter)->has_o_ink())
            {
                (*iter)->get_o_ink().toXmlElem("v:ink", "", _outStream);
            }
            else if ((*iter)->has_pvml_iscomment())
            {
                (*iter)->get_pvml_iscomment().toXmlElem("v:iscomment", "", _outStream);
            }
            else if ((*iter)->has_o_equationxml())
            {
                (*iter)->get_o_equationxml().toXmlElem("v:equationxml", "", _outStream);
            }
        }
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

    bool CT_Shape::has_type_attr() const
    {    
    return m_has_type_attr;
    }

    void CT_Shape::set_type_attr(const XSD::string_& _type_attr)
    {    
    m_has_type_attr = true;
    m_type_attr = _type_attr;
    }

    const XSD::string_& CT_Shape::get_type_attr() const
    {    
    return m_type_attr;
    }

    bool CT_Shape::has_adj_attr() const
    {    
    return m_has_adj_attr;
    }

    void CT_Shape::set_adj_attr(const XSD::string_& _adj_attr)
    {    
    m_has_adj_attr = true;
    m_adj_attr = _adj_attr;
    }

    const XSD::string_& CT_Shape::get_adj_attr() const
    {    
    return m_adj_attr;
    }

    bool CT_Shape::has_path_attr() const
    {    
    return m_has_path_attr;
    }

    void CT_Shape::set_path_attr(const XSD::string_& _path_attr)
    {    
    m_has_path_attr = true;
    m_path_attr = _path_attr;
    }

    const XSD::string_& CT_Shape::get_path_attr() const
    {    
    return m_path_attr;
    }

    bool CT_Shape::has_gfxdata_attr() const
    {    
    return m_has_gfxdata_attr;
    }

    void CT_Shape::set_gfxdata_attr(const XSD::base64Binary_& _gfxdata_attr)
    {    
    m_has_gfxdata_attr = true;
    m_gfxdata_attr = _gfxdata_attr;
    }

    const XSD::base64Binary_& CT_Shape::get_gfxdata_attr() const
    {    
    return m_gfxdata_attr;
    }

    bool CT_Shape::has_equationxml_attr() const
    {    
    return m_has_equationxml_attr;
    }

    void CT_Shape::set_equationxml_attr(const XSD::string_& _equationxml_attr)
    {    
    m_has_equationxml_attr = true;
    m_equationxml_attr = _equationxml_attr;
    }

    const XSD::string_& CT_Shape::get_equationxml_attr() const
    {    
    return m_equationxml_attr;
    }


    // CT_Shapetype
    CT_Path* CT_Shapetype::add_path()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Path* pNewChild = pChildGroup->mutable_path();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Formulas* CT_Shapetype::add_formulas()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Formulas* pNewChild = pChildGroup->mutable_formulas();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Handles* CT_Shapetype::add_handles()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Handles* pNewChild = pChildGroup->mutable_handles();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Fill* CT_Shapetype::add_fill()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Fill* pNewChild = pChildGroup->mutable_fill();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Stroke* CT_Shapetype::add_stroke()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Stroke* pNewChild = pChildGroup->mutable_stroke();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Shadow* CT_Shapetype::add_shadow()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Shadow* pNewChild = pChildGroup->mutable_shadow();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Textbox* CT_Shapetype::add_textbox()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Textbox* pNewChild = pChildGroup->mutable_textbox();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_TextPath* CT_Shapetype::add_textpath()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_TextPath* pNewChild = pChildGroup->mutable_textpath();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_ImageData* CT_Shapetype::add_imagedata()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_ImageData* pNewChild = pChildGroup->mutable_imagedata();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_Skew* CT_Shapetype::add_o_skew()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_Skew* pNewChild = pChildGroup->mutable_o_skew();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_Extrusion* CT_Shapetype::add_o_extrusion()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_Extrusion* pNewChild = pChildGroup->mutable_o_extrusion();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_Callout* CT_Shapetype::add_o_callout()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_Callout* pNewChild = pChildGroup->mutable_o_callout();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_Lock* CT_Shapetype::add_o_lock()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_Lock* pNewChild = pChildGroup->mutable_o_lock();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_ClipPath* CT_Shapetype::add_o_clippath()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_ClipPath* pNewChild = pChildGroup->mutable_o_clippath();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_SignatureLine* CT_Shapetype::add_o_signatureline()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_SignatureLine* pNewChild = pChildGroup->mutable_o_signatureline();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w10::CT_Wrap* CT_Shapetype::add_w10_wrap()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w10::CT_Wrap* pNewChild = pChildGroup->mutable_w10_wrap();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w10::CT_AnchorLock* CT_Shapetype::add_w10_anchorlock()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w10::CT_AnchorLock* pNewChild = pChildGroup->mutable_w10_anchorlock();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w10::CT_Border* CT_Shapetype::add_w10_bordertop()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w10::CT_Border* pNewChild = pChildGroup->mutable_w10_bordertop();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w10::CT_Border* CT_Shapetype::add_w10_borderbottom()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w10::CT_Border* pNewChild = pChildGroup->mutable_w10_borderbottom();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w10::CT_Border* CT_Shapetype::add_w10_borderleft()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w10::CT_Border* pNewChild = pChildGroup->mutable_w10_borderleft();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w10::CT_Border* CT_Shapetype::add_w10_borderright()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w10::CT_Border* pNewChild = pChildGroup->mutable_w10_borderright();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_x::CT_ClientData* CT_Shapetype::add_x_ClientData()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_x::CT_ClientData* pNewChild = pChildGroup->mutable_x_ClientData();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_pvml::CT_Rel* CT_Shapetype::add_pvml_textdata()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_pvml::CT_Rel* pNewChild = pChildGroup->mutable_pvml_textdata();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    bool CT_Shapetype::has_o_complex() const
    {    
    return m_has_o_complex;
    }

    ns_o::CT_Complex* CT_Shapetype::mutable_o_complex()
    {    
    m_has_o_complex = true;
    if (!m_o_complex)
    {
        m_o_complex = new ns_o::CT_Complex();
    }
    return m_o_complex;
    }

    const ns_o::CT_Complex& CT_Shapetype::get_o_complex() const
    {    
    if (m_o_complex)
    {
        return *m_o_complex;
    }
    return ns_o::CT_Complex::default_instance();
    }

    void CT_Shapetype::clear()
    {    
    m_has_adj_attr = false;
    m_adj_attr.clear();
    
    m_has_path_attr = false;
    m_path_attr.clear();
    
    m_has_master_attr = false;
    m_master_attr.clear();
    
    {
        vector<ChildGroup_1*>::iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_1.clear();
    }
     
    m_has_o_complex = false;
    
    if (m_o_complex)
    {
        delete m_o_complex;
        m_o_complex = NULL;
    }
    
    }

    void CT_Shapetype::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
    if (m_has_adj_attr)
    {
        _outStream << " " << "adj" << "=\"" << m_adj_attr << "\"";
    }
    
    
    if (m_has_path_attr)
    {
        _outStream << " " << "path" << "=\"" << m_path_attr << "\"";
    }
    
    
    if (m_has_master_attr)
    {
        _outStream << " " << "master" << "=\"" << m_master_attr << "\"";
    }
    
            _outStream << ">";
            
    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_path())
            {
                (*iter)->get_path().toXmlElem("v:path", "", _outStream);
            }
            else if ((*iter)->has_formulas())
            {
                (*iter)->get_formulas().toXmlElem("v:formulas", "", _outStream);
            }
            else if ((*iter)->has_handles())
            {
                (*iter)->get_handles().toXmlElem("v:handles", "", _outStream);
            }
            else if ((*iter)->has_fill())
            {
                (*iter)->get_fill().toXmlElem("v:fill", "", _outStream);
            }
            else if ((*iter)->has_stroke())
            {
                (*iter)->get_stroke().toXmlElem("v:stroke", "", _outStream);
            }
            else if ((*iter)->has_shadow())
            {
                (*iter)->get_shadow().toXmlElem("v:shadow", "", _outStream);
            }
            else if ((*iter)->has_textbox())
            {
                (*iter)->get_textbox().toXmlElem("v:textbox", "", _outStream);
            }
            else if ((*iter)->has_textpath())
            {
                (*iter)->get_textpath().toXmlElem("v:textpath", "", _outStream);
            }
            else if ((*iter)->has_imagedata())
            {
                (*iter)->get_imagedata().toXmlElem("v:imagedata", "", _outStream);
            }
            else if ((*iter)->has_o_skew())
            {
                (*iter)->get_o_skew().toXmlElem("v:skew", "", _outStream);
            }
            else if ((*iter)->has_o_extrusion())
            {
                (*iter)->get_o_extrusion().toXmlElem("v:extrusion", "", _outStream);
            }
            else if ((*iter)->has_o_callout())
            {
                (*iter)->get_o_callout().toXmlElem("v:callout", "", _outStream);
            }
            else if ((*iter)->has_o_lock())
            {
                (*iter)->get_o_lock().toXmlElem("v:lock", "", _outStream);
            }
            else if ((*iter)->has_o_clippath())
            {
                (*iter)->get_o_clippath().toXmlElem("v:clippath", "", _outStream);
            }
            else if ((*iter)->has_o_signatureline())
            {
                (*iter)->get_o_signatureline().toXmlElem("v:signatureline", "", _outStream);
            }
            else if ((*iter)->has_w10_wrap())
            {
                (*iter)->get_w10_wrap().toXmlElem("v:wrap", "", _outStream);
            }
            else if ((*iter)->has_w10_anchorlock())
            {
                (*iter)->get_w10_anchorlock().toXmlElem("v:anchorlock", "", _outStream);
            }
            else if ((*iter)->has_w10_bordertop())
            {
                (*iter)->get_w10_bordertop().toXmlElem("v:bordertop", "", _outStream);
            }
            else if ((*iter)->has_w10_borderbottom())
            {
                (*iter)->get_w10_borderbottom().toXmlElem("v:borderbottom", "", _outStream);
            }
            else if ((*iter)->has_w10_borderleft())
            {
                (*iter)->get_w10_borderleft().toXmlElem("v:borderleft", "", _outStream);
            }
            else if ((*iter)->has_w10_borderright())
            {
                (*iter)->get_w10_borderright().toXmlElem("v:borderright", "", _outStream);
            }
            else if ((*iter)->has_x_ClientData())
            {
                (*iter)->get_x_ClientData().toXmlElem("v:ClientData", "", _outStream);
            }
            else if ((*iter)->has_pvml_textdata())
            {
                (*iter)->get_pvml_textdata().toXmlElem("v:textdata", "", _outStream);
            }
        }
    }
     
    if (m_has_o_complex)
    {
        m_o_complex->toXmlElem("v:complex", "", _outStream);;
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_Shapetype& CT_Shapetype::default_instance()
    {    
    if (!CT_Shapetype::default_instance_)
    {
        CT_Shapetype::default_instance_ = new CT_Shapetype();
    }
    return *CT_Shapetype::default_instance_;
    }

    bool CT_Shapetype::has_adj_attr() const
    {    
    return m_has_adj_attr;
    }

    void CT_Shapetype::set_adj_attr(const XSD::string_& _adj_attr)
    {    
    m_has_adj_attr = true;
    m_adj_attr = _adj_attr;
    }

    const XSD::string_& CT_Shapetype::get_adj_attr() const
    {    
    return m_adj_attr;
    }

    bool CT_Shapetype::has_path_attr() const
    {    
    return m_has_path_attr;
    }

    void CT_Shapetype::set_path_attr(const XSD::string_& _path_attr)
    {    
    m_has_path_attr = true;
    m_path_attr = _path_attr;
    }

    const XSD::string_& CT_Shapetype::get_path_attr() const
    {    
    return m_path_attr;
    }

    bool CT_Shapetype::has_master_attr() const
    {    
    return m_has_master_attr;
    }

    void CT_Shapetype::set_master_attr(const XSD::string_& _master_attr)
    {    
    m_has_master_attr = true;
    m_master_attr = _master_attr;
    }

    const XSD::string_& CT_Shapetype::get_master_attr() const
    {    
    return m_master_attr;
    }


    // CT_Group
    CT_Path* CT_Group::add_path()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Path* pNewChild = pChildGroup->mutable_path();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Formulas* CT_Group::add_formulas()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Formulas* pNewChild = pChildGroup->mutable_formulas();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Handles* CT_Group::add_handles()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Handles* pNewChild = pChildGroup->mutable_handles();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Fill* CT_Group::add_fill()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Fill* pNewChild = pChildGroup->mutable_fill();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Stroke* CT_Group::add_stroke()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Stroke* pNewChild = pChildGroup->mutable_stroke();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Shadow* CT_Group::add_shadow()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Shadow* pNewChild = pChildGroup->mutable_shadow();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Textbox* CT_Group::add_textbox()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Textbox* pNewChild = pChildGroup->mutable_textbox();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_TextPath* CT_Group::add_textpath()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_TextPath* pNewChild = pChildGroup->mutable_textpath();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_ImageData* CT_Group::add_imagedata()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_ImageData* pNewChild = pChildGroup->mutable_imagedata();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_Skew* CT_Group::add_o_skew()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_Skew* pNewChild = pChildGroup->mutable_o_skew();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_Extrusion* CT_Group::add_o_extrusion()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_Extrusion* pNewChild = pChildGroup->mutable_o_extrusion();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_Callout* CT_Group::add_o_callout()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_Callout* pNewChild = pChildGroup->mutable_o_callout();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_Lock* CT_Group::add_o_lock()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_Lock* pNewChild = pChildGroup->mutable_o_lock();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_ClipPath* CT_Group::add_o_clippath()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_ClipPath* pNewChild = pChildGroup->mutable_o_clippath();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_SignatureLine* CT_Group::add_o_signatureline()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_SignatureLine* pNewChild = pChildGroup->mutable_o_signatureline();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w10::CT_Wrap* CT_Group::add_w10_wrap()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w10::CT_Wrap* pNewChild = pChildGroup->mutable_w10_wrap();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w10::CT_AnchorLock* CT_Group::add_w10_anchorlock()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w10::CT_AnchorLock* pNewChild = pChildGroup->mutable_w10_anchorlock();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w10::CT_Border* CT_Group::add_w10_bordertop()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w10::CT_Border* pNewChild = pChildGroup->mutable_w10_bordertop();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w10::CT_Border* CT_Group::add_w10_borderbottom()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w10::CT_Border* pNewChild = pChildGroup->mutable_w10_borderbottom();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w10::CT_Border* CT_Group::add_w10_borderleft()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w10::CT_Border* pNewChild = pChildGroup->mutable_w10_borderleft();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w10::CT_Border* CT_Group::add_w10_borderright()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w10::CT_Border* pNewChild = pChildGroup->mutable_w10_borderright();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_x::CT_ClientData* CT_Group::add_x_ClientData()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_x::CT_ClientData* pNewChild = pChildGroup->mutable_x_ClientData();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_pvml::CT_Rel* CT_Group::add_pvml_textdata()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_pvml::CT_Rel* pNewChild = pChildGroup->mutable_pvml_textdata();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Group* CT_Group::add_group()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Group* pNewChild = pChildGroup->mutable_group();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Shape* CT_Group::add_shape()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Shape* pNewChild = pChildGroup->mutable_shape();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Shapetype* CT_Group::add_shapetype()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Shapetype* pNewChild = pChildGroup->mutable_shapetype();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Arc* CT_Group::add_arc()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Arc* pNewChild = pChildGroup->mutable_arc();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Curve* CT_Group::add_curve()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Curve* pNewChild = pChildGroup->mutable_curve();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Image* CT_Group::add_image()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Image* pNewChild = pChildGroup->mutable_image();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Line* CT_Group::add_line()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Line* pNewChild = pChildGroup->mutable_line();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Oval* CT_Group::add_oval()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Oval* pNewChild = pChildGroup->mutable_oval();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_PolyLine* CT_Group::add_polyline()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_PolyLine* pNewChild = pChildGroup->mutable_polyline();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Rect* CT_Group::add_rect()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Rect* pNewChild = pChildGroup->mutable_rect();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_RoundRect* CT_Group::add_roundrect()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_RoundRect* pNewChild = pChildGroup->mutable_roundrect();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_Diagram* CT_Group::add_o_diagram()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_Diagram* pNewChild = pChildGroup->mutable_o_diagram();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    void CT_Group::clear()
    {    
    m_has_s_filled_attr = false;
    
    if (m_s_filled_attr)
    {
        delete m_s_filled_attr;
        m_s_filled_attr = NULL;
    }
    
    
    m_has_s_fillcolor_attr = false;
    
    if (m_s_fillcolor_attr)
    {
        delete m_s_fillcolor_attr;
        m_s_fillcolor_attr = NULL;
    }
    
    
    m_has_editas_attr = false;
    
    if (m_editas_attr)
    {
        delete m_editas_attr;
        m_editas_attr = NULL;
    }
    
    
    m_has_tableproperties_attr = false;
    m_tableproperties_attr.clear();
    
    m_has_tablelimits_attr = false;
    m_tablelimits_attr.clear();
    
    {
        vector<ChildGroup_1*>::iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_1.clear();
    }
    }

    void CT_Group::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
    if (m_has_s_filled_attr)
    {
        m_s_filled_attr->toXmlAttr("filled", _outStream);
    }
    
    
    if (m_has_s_fillcolor_attr)
    {
        m_s_fillcolor_attr->toXmlAttr("fillcolor", _outStream);
    }
    
    
    if (m_has_editas_attr)
    {
        m_editas_attr->toXmlAttr("editas", _outStream);
    }
    
    
    if (m_has_tableproperties_attr)
    {
        _outStream << " " << "tableproperties" << "=\"" << m_tableproperties_attr << "\"";
    }
    
    
    if (m_has_tablelimits_attr)
    {
        _outStream << " " << "tablelimits" << "=\"" << m_tablelimits_attr << "\"";
    }
    
            _outStream << ">";
            
    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_path())
            {
                (*iter)->get_path().toXmlElem("v:path", "", _outStream);
            }
            else if ((*iter)->has_formulas())
            {
                (*iter)->get_formulas().toXmlElem("v:formulas", "", _outStream);
            }
            else if ((*iter)->has_handles())
            {
                (*iter)->get_handles().toXmlElem("v:handles", "", _outStream);
            }
            else if ((*iter)->has_fill())
            {
                (*iter)->get_fill().toXmlElem("v:fill", "", _outStream);
            }
            else if ((*iter)->has_stroke())
            {
                (*iter)->get_stroke().toXmlElem("v:stroke", "", _outStream);
            }
            else if ((*iter)->has_shadow())
            {
                (*iter)->get_shadow().toXmlElem("v:shadow", "", _outStream);
            }
            else if ((*iter)->has_textbox())
            {
                (*iter)->get_textbox().toXmlElem("v:textbox", "", _outStream);
            }
            else if ((*iter)->has_textpath())
            {
                (*iter)->get_textpath().toXmlElem("v:textpath", "", _outStream);
            }
            else if ((*iter)->has_imagedata())
            {
                (*iter)->get_imagedata().toXmlElem("v:imagedata", "", _outStream);
            }
            else if ((*iter)->has_o_skew())
            {
                (*iter)->get_o_skew().toXmlElem("v:skew", "", _outStream);
            }
            else if ((*iter)->has_o_extrusion())
            {
                (*iter)->get_o_extrusion().toXmlElem("v:extrusion", "", _outStream);
            }
            else if ((*iter)->has_o_callout())
            {
                (*iter)->get_o_callout().toXmlElem("v:callout", "", _outStream);
            }
            else if ((*iter)->has_o_lock())
            {
                (*iter)->get_o_lock().toXmlElem("v:lock", "", _outStream);
            }
            else if ((*iter)->has_o_clippath())
            {
                (*iter)->get_o_clippath().toXmlElem("v:clippath", "", _outStream);
            }
            else if ((*iter)->has_o_signatureline())
            {
                (*iter)->get_o_signatureline().toXmlElem("v:signatureline", "", _outStream);
            }
            else if ((*iter)->has_w10_wrap())
            {
                (*iter)->get_w10_wrap().toXmlElem("v:wrap", "", _outStream);
            }
            else if ((*iter)->has_w10_anchorlock())
            {
                (*iter)->get_w10_anchorlock().toXmlElem("v:anchorlock", "", _outStream);
            }
            else if ((*iter)->has_w10_bordertop())
            {
                (*iter)->get_w10_bordertop().toXmlElem("v:bordertop", "", _outStream);
            }
            else if ((*iter)->has_w10_borderbottom())
            {
                (*iter)->get_w10_borderbottom().toXmlElem("v:borderbottom", "", _outStream);
            }
            else if ((*iter)->has_w10_borderleft())
            {
                (*iter)->get_w10_borderleft().toXmlElem("v:borderleft", "", _outStream);
            }
            else if ((*iter)->has_w10_borderright())
            {
                (*iter)->get_w10_borderright().toXmlElem("v:borderright", "", _outStream);
            }
            else if ((*iter)->has_x_ClientData())
            {
                (*iter)->get_x_ClientData().toXmlElem("v:ClientData", "", _outStream);
            }
            else if ((*iter)->has_pvml_textdata())
            {
                (*iter)->get_pvml_textdata().toXmlElem("v:textdata", "", _outStream);
            }
            else if ((*iter)->has_group())
            {
                (*iter)->get_group().toXmlElem("v:group", "", _outStream);
            }
            else if ((*iter)->has_shape())
            {
                (*iter)->get_shape().toXmlElem("v:shape", "", _outStream);
            }
            else if ((*iter)->has_shapetype())
            {
                (*iter)->get_shapetype().toXmlElem("v:shapetype", "", _outStream);
            }
            else if ((*iter)->has_arc())
            {
                (*iter)->get_arc().toXmlElem("v:arc", "", _outStream);
            }
            else if ((*iter)->has_curve())
            {
                (*iter)->get_curve().toXmlElem("v:curve", "", _outStream);
            }
            else if ((*iter)->has_image())
            {
                (*iter)->get_image().toXmlElem("v:image", "", _outStream);
            }
            else if ((*iter)->has_line())
            {
                (*iter)->get_line().toXmlElem("v:line", "", _outStream);
            }
            else if ((*iter)->has_oval())
            {
                (*iter)->get_oval().toXmlElem("v:oval", "", _outStream);
            }
            else if ((*iter)->has_polyline())
            {
                (*iter)->get_polyline().toXmlElem("v:polyline", "", _outStream);
            }
            else if ((*iter)->has_rect())
            {
                (*iter)->get_rect().toXmlElem("v:rect", "", _outStream);
            }
            else if ((*iter)->has_roundrect())
            {
                (*iter)->get_roundrect().toXmlElem("v:roundrect", "", _outStream);
            }
            else if ((*iter)->has_o_diagram())
            {
                (*iter)->get_o_diagram().toXmlElem("v:diagram", "", _outStream);
            }
        }
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_Group& CT_Group::default_instance()
    {    
    if (!CT_Group::default_instance_)
    {
        CT_Group::default_instance_ = new CT_Group();
    }
    return *CT_Group::default_instance_;
    }

    bool CT_Group::has_s_filled_attr() const
    {    
    return m_has_s_filled_attr;
    }

    void CT_Group::set_s_filled_attr(const ns_s::ST_TrueFalse& _s_filled_attr)
    {    
    m_has_s_filled_attr = true;
    m_s_filled_attr = new ns_s::ST_TrueFalse(_s_filled_attr);
    }

    const ns_s::ST_TrueFalse& CT_Group::get_s_filled_attr() const
    {    
    if (m_s_filled_attr)
    {
        return *m_s_filled_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
    }

    bool CT_Group::has_s_fillcolor_attr() const
    {    
    return m_has_s_fillcolor_attr;
    }

    void CT_Group::set_s_fillcolor_attr(const ns_s::ST_ColorType& _s_fillcolor_attr)
    {    
    m_has_s_fillcolor_attr = true;
    m_s_fillcolor_attr = new ns_s::ST_ColorType(_s_fillcolor_attr);
    }

    const ns_s::ST_ColorType& CT_Group::get_s_fillcolor_attr() const
    {    
    if (m_s_fillcolor_attr)
    {
        return *m_s_fillcolor_attr;
    }
    return ns_s::ST_ColorType::default_instance();
    }

    bool CT_Group::has_editas_attr() const
    {    
    return m_has_editas_attr;
    }

    void CT_Group::set_editas_attr(const ST_EditAs& _editas_attr)
    {    
    m_has_editas_attr = true;
    m_editas_attr = new ST_EditAs(_editas_attr);
    }

    const ST_EditAs& CT_Group::get_editas_attr() const
    {    
    if (m_editas_attr)
    {
        return *m_editas_attr;
    }
    return ST_EditAs::default_instance();
    }

    bool CT_Group::has_tableproperties_attr() const
    {    
    return m_has_tableproperties_attr;
    }

    void CT_Group::set_tableproperties_attr(const XSD::string_& _tableproperties_attr)
    {    
    m_has_tableproperties_attr = true;
    m_tableproperties_attr = _tableproperties_attr;
    }

    const XSD::string_& CT_Group::get_tableproperties_attr() const
    {    
    return m_tableproperties_attr;
    }

    bool CT_Group::has_tablelimits_attr() const
    {    
    return m_has_tablelimits_attr;
    }

    void CT_Group::set_tablelimits_attr(const XSD::string_& _tablelimits_attr)
    {    
    m_has_tablelimits_attr = true;
    m_tablelimits_attr = _tablelimits_attr;
    }

    const XSD::string_& CT_Group::get_tablelimits_attr() const
    {    
    return m_tablelimits_attr;
    }


    // CT_Background
    bool CT_Background::has_fill() const
    {    
    return m_has_fill;
    }

    CT_Fill* CT_Background::mutable_fill()
    {    
    m_has_fill = true;
    if (!m_fill)
    {
        m_fill = new CT_Fill();
    }
    return m_fill;
    }

    const CT_Fill& CT_Background::get_fill() const
    {    
    if (m_fill)
    {
        return *m_fill;
    }
    return CT_Fill::default_instance();
    }

    void CT_Background::clear()
    {    
    m_has_id_attr = false;
    m_id_attr.clear();
    
    m_has_s_filled_attr = false;
    
    if (m_s_filled_attr)
    {
        delete m_s_filled_attr;
        m_s_filled_attr = NULL;
    }
    
    
    m_has_s_fillcolor_attr = false;
    
    if (m_s_fillcolor_attr)
    {
        delete m_s_fillcolor_attr;
        m_s_fillcolor_attr = NULL;
    }
    
    
    m_has_o_bwmode_attr = false;
    
    if (m_o_bwmode_attr)
    {
        delete m_o_bwmode_attr;
        m_o_bwmode_attr = NULL;
    }
    
    
    m_has_o_bwpure_attr = false;
    
    if (m_o_bwpure_attr)
    {
        delete m_o_bwpure_attr;
        m_o_bwpure_attr = NULL;
    }
    
    
    m_has_o_bwnormal_attr = false;
    
    if (m_o_bwnormal_attr)
    {
        delete m_o_bwnormal_attr;
        m_o_bwnormal_attr = NULL;
    }
    
    
    m_has_o_targetscreensize_attr = false;
    
    if (m_o_targetscreensize_attr)
    {
        delete m_o_targetscreensize_attr;
        m_o_targetscreensize_attr = NULL;
    }
    
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    
    }

    void CT_Background::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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
    
    
    if (m_has_s_filled_attr)
    {
        m_s_filled_attr->toXmlAttr("filled", _outStream);
    }
    
    
    if (m_has_s_fillcolor_attr)
    {
        m_s_fillcolor_attr->toXmlAttr("fillcolor", _outStream);
    }
    
    
    if (m_has_o_bwmode_attr)
    {
        m_o_bwmode_attr->toXmlAttr("bwmode", _outStream);
    }
    
    
    if (m_has_o_bwpure_attr)
    {
        m_o_bwpure_attr->toXmlAttr("bwpure", _outStream);
    }
    
    
    if (m_has_o_bwnormal_attr)
    {
        m_o_bwnormal_attr->toXmlAttr("bwnormal", _outStream);
    }
    
    
    if (m_has_o_targetscreensize_attr)
    {
        m_o_targetscreensize_attr->toXmlAttr("targetscreensize", _outStream);
    }
    
            _outStream << ">";
            
    if (m_has_fill)
    {
        m_fill->toXmlElem("v:fill", "", _outStream);;
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_Background& CT_Background::default_instance()
    {    
    if (!CT_Background::default_instance_)
    {
        CT_Background::default_instance_ = new CT_Background();
    }
    return *CT_Background::default_instance_;
    }

    bool CT_Background::has_id_attr() const
    {    
    return m_has_id_attr;
    }

    void CT_Background::set_id_attr(const XSD::string_& _id_attr)
    {    
    m_has_id_attr = true;
    m_id_attr = _id_attr;
    }

    const XSD::string_& CT_Background::get_id_attr() const
    {    
    return m_id_attr;
    }

    bool CT_Background::has_s_filled_attr() const
    {    
    return m_has_s_filled_attr;
    }

    void CT_Background::set_s_filled_attr(const ns_s::ST_TrueFalse& _s_filled_attr)
    {    
    m_has_s_filled_attr = true;
    m_s_filled_attr = new ns_s::ST_TrueFalse(_s_filled_attr);
    }

    const ns_s::ST_TrueFalse& CT_Background::get_s_filled_attr() const
    {    
    if (m_s_filled_attr)
    {
        return *m_s_filled_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
    }

    bool CT_Background::has_s_fillcolor_attr() const
    {    
    return m_has_s_fillcolor_attr;
    }

    void CT_Background::set_s_fillcolor_attr(const ns_s::ST_ColorType& _s_fillcolor_attr)
    {    
    m_has_s_fillcolor_attr = true;
    m_s_fillcolor_attr = new ns_s::ST_ColorType(_s_fillcolor_attr);
    }

    const ns_s::ST_ColorType& CT_Background::get_s_fillcolor_attr() const
    {    
    if (m_s_fillcolor_attr)
    {
        return *m_s_fillcolor_attr;
    }
    return ns_s::ST_ColorType::default_instance();
    }

    bool CT_Background::has_o_bwmode_attr() const
    {    
    return m_has_o_bwmode_attr;
    }

    void CT_Background::set_o_bwmode_attr(const ns_o::ST_BWMode& _o_bwmode_attr)
    {    
    m_has_o_bwmode_attr = true;
    m_o_bwmode_attr = new ns_o::ST_BWMode(_o_bwmode_attr);
    }

    const ns_o::ST_BWMode& CT_Background::get_o_bwmode_attr() const
    {    
    if (m_o_bwmode_attr)
    {
        return *m_o_bwmode_attr;
    }
    return ns_o::ST_BWMode::default_instance();
    }

    bool CT_Background::has_o_bwpure_attr() const
    {    
    return m_has_o_bwpure_attr;
    }

    void CT_Background::set_o_bwpure_attr(const ns_o::ST_BWMode& _o_bwpure_attr)
    {    
    m_has_o_bwpure_attr = true;
    m_o_bwpure_attr = new ns_o::ST_BWMode(_o_bwpure_attr);
    }

    const ns_o::ST_BWMode& CT_Background::get_o_bwpure_attr() const
    {    
    if (m_o_bwpure_attr)
    {
        return *m_o_bwpure_attr;
    }
    return ns_o::ST_BWMode::default_instance();
    }

    bool CT_Background::has_o_bwnormal_attr() const
    {    
    return m_has_o_bwnormal_attr;
    }

    void CT_Background::set_o_bwnormal_attr(const ns_o::ST_BWMode& _o_bwnormal_attr)
    {    
    m_has_o_bwnormal_attr = true;
    m_o_bwnormal_attr = new ns_o::ST_BWMode(_o_bwnormal_attr);
    }

    const ns_o::ST_BWMode& CT_Background::get_o_bwnormal_attr() const
    {    
    if (m_o_bwnormal_attr)
    {
        return *m_o_bwnormal_attr;
    }
    return ns_o::ST_BWMode::default_instance();
    }

    bool CT_Background::has_o_targetscreensize_attr() const
    {    
    return m_has_o_targetscreensize_attr;
    }

    void CT_Background::set_o_targetscreensize_attr(const ns_o::ST_ScreenSize& _o_targetscreensize_attr)
    {    
    m_has_o_targetscreensize_attr = true;
    m_o_targetscreensize_attr = new ns_o::ST_ScreenSize(_o_targetscreensize_attr);
    }

    const ns_o::ST_ScreenSize& CT_Background::get_o_targetscreensize_attr() const
    {    
    if (m_o_targetscreensize_attr)
    {
        return *m_o_targetscreensize_attr;
    }
    return ns_o::ST_ScreenSize::default_instance();
    }


    // CT_Fill
    bool CT_Fill::has_o_fill() const
    {    
    return m_has_o_fill;
    }

    ns_o::CT_Fill* CT_Fill::mutable_o_fill()
    {    
    m_has_o_fill = true;
    if (!m_o_fill)
    {
        m_o_fill = new ns_o::CT_Fill();
    }
    return m_o_fill;
    }

    const ns_o::CT_Fill& CT_Fill::get_o_fill() const
    {    
    if (m_o_fill)
    {
        return *m_o_fill;
    }
    return ns_o::CT_Fill::default_instance();
    }

    void CT_Fill::clear()
    {    
    m_has_id_attr = false;
    m_id_attr.clear();
    
    m_has_type_attr = false;
    
    if (m_type_attr)
    {
        delete m_type_attr;
        m_type_attr = NULL;
    }
    
    
    m_has_s_on_attr = false;
    
    if (m_s_on_attr)
    {
        delete m_s_on_attr;
        m_s_on_attr = NULL;
    }
    
    
    m_has_s_color_attr = false;
    
    if (m_s_color_attr)
    {
        delete m_s_color_attr;
        m_s_color_attr = NULL;
    }
    
    
    m_has_opacity_attr = false;
    m_opacity_attr.clear();
    
    m_has_s_color2_attr = false;
    
    if (m_s_color2_attr)
    {
        delete m_s_color2_attr;
        m_s_color2_attr = NULL;
    }
    
    
    m_has_src_attr = false;
    m_src_attr.clear();
    
    m_has_href_attr = false;
    m_href_attr.clear();
    
    m_has_althref_attr = false;
    m_althref_attr.clear();
    
    m_has_size_attr = false;
    m_size_attr.clear();
    
    m_has_origin_attr = false;
    m_origin_attr.clear();
    
    m_has_position_attr = false;
    m_position_attr.clear();
    
    m_has_aspect_attr = false;
    
    if (m_aspect_attr)
    {
        delete m_aspect_attr;
        m_aspect_attr = NULL;
    }
    
    
    m_has_colors_attr = false;
    m_colors_attr.clear();
    
    m_has_angle_attr = false;
    m_angle_attr = 0;
    
    m_has_s_alignshape_attr = false;
    
    if (m_s_alignshape_attr)
    {
        delete m_s_alignshape_attr;
        m_s_alignshape_attr = NULL;
    }
    
    
    m_has_focus_attr = false;
    m_focus_attr.clear();
    
    m_has_focussize_attr = false;
    m_focussize_attr.clear();
    
    m_has_focusposition_attr = false;
    m_focusposition_attr.clear();
    
    m_has_method_attr = false;
    
    if (m_method_attr)
    {
        delete m_method_attr;
        m_method_attr = NULL;
    }
    
    
    m_has_s_detectmouseclick_attr = false;
    
    if (m_s_detectmouseclick_attr)
    {
        delete m_s_detectmouseclick_attr;
        m_s_detectmouseclick_attr = NULL;
    }
    
    
    m_has_title_attr = false;
    m_title_attr.clear();
    
    m_has_opacity2_attr = false;
    m_opacity2_attr.clear();
    
    m_has_s_recolor_attr = false;
    
    if (m_s_recolor_attr)
    {
        delete m_s_recolor_attr;
        m_s_recolor_attr = NULL;
    }
    
    
    m_has_s_rotate_attr = false;
    
    if (m_s_rotate_attr)
    {
        delete m_s_rotate_attr;
        m_s_rotate_attr = NULL;
    }
    
    
    m_has_r_id_attr = false;
    
    if (m_r_id_attr)
    {
        delete m_r_id_attr;
        m_r_id_attr = NULL;
    }
    
    
    m_has_r_relid_attr = false;
    
    if (m_r_relid_attr)
    {
        delete m_r_relid_attr;
        m_r_relid_attr = NULL;
    }
    
    
    m_has_o_fill = false;
    
    if (m_o_fill)
    {
        delete m_o_fill;
        m_o_fill = NULL;
    }
    
    }

    void CT_Fill::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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
    
    
    if (m_has_type_attr)
    {
        m_type_attr->toXmlAttr("type", _outStream);
    }
    
    
    if (m_has_s_on_attr)
    {
        m_s_on_attr->toXmlAttr("on", _outStream);
    }
    
    
    if (m_has_s_color_attr)
    {
        m_s_color_attr->toXmlAttr("color", _outStream);
    }
    
    
    if (m_has_opacity_attr)
    {
        _outStream << " " << "opacity" << "=\"" << m_opacity_attr << "\"";
    }
    
    
    if (m_has_s_color2_attr)
    {
        m_s_color2_attr->toXmlAttr("color2", _outStream);
    }
    
    
    if (m_has_src_attr)
    {
        _outStream << " " << "src" << "=\"" << m_src_attr << "\"";
    }
    
    
    if (m_has_href_attr)
    {
        _outStream << " " << "href" << "=\"" << m_href_attr << "\"";
    }
    
    
    if (m_has_althref_attr)
    {
        _outStream << " " << "althref" << "=\"" << m_althref_attr << "\"";
    }
    
    
    if (m_has_size_attr)
    {
        _outStream << " " << "size" << "=\"" << m_size_attr << "\"";
    }
    
    
    if (m_has_origin_attr)
    {
        _outStream << " " << "origin" << "=\"" << m_origin_attr << "\"";
    }
    
    
    if (m_has_position_attr)
    {
        _outStream << " " << "position" << "=\"" << m_position_attr << "\"";
    }
    
    
    if (m_has_aspect_attr)
    {
        m_aspect_attr->toXmlAttr("aspect", _outStream);
    }
    
    
    if (m_has_colors_attr)
    {
        _outStream << " " << "colors" << "=\"" << m_colors_attr << "\"";
    }
    
    
    if (m_has_angle_attr)
    {
        _outStream << " " << "angle" << "=\"" << m_angle_attr << "\"";
    }
    
    
    if (m_has_s_alignshape_attr)
    {
        m_s_alignshape_attr->toXmlAttr("alignshape", _outStream);
    }
    
    
    if (m_has_focus_attr)
    {
        _outStream << " " << "focus" << "=\"" << m_focus_attr << "\"";
    }
    
    
    if (m_has_focussize_attr)
    {
        _outStream << " " << "focussize" << "=\"" << m_focussize_attr << "\"";
    }
    
    
    if (m_has_focusposition_attr)
    {
        _outStream << " " << "focusposition" << "=\"" << m_focusposition_attr << "\"";
    }
    
    
    if (m_has_method_attr)
    {
        m_method_attr->toXmlAttr("method", _outStream);
    }
    
    
    if (m_has_s_detectmouseclick_attr)
    {
        m_s_detectmouseclick_attr->toXmlAttr("detectmouseclick", _outStream);
    }
    
    
    if (m_has_title_attr)
    {
        _outStream << " " << "title" << "=\"" << m_title_attr << "\"";
    }
    
    
    if (m_has_opacity2_attr)
    {
        _outStream << " " << "opacity2" << "=\"" << m_opacity2_attr << "\"";
    }
    
    
    if (m_has_s_recolor_attr)
    {
        m_s_recolor_attr->toXmlAttr("recolor", _outStream);
    }
    
    
    if (m_has_s_rotate_attr)
    {
        m_s_rotate_attr->toXmlAttr("rotate", _outStream);
    }
    
    
    if (m_has_r_id_attr)
    {
        m_r_id_attr->toXmlAttr("id", _outStream);
    }
    
    
    if (m_has_r_relid_attr)
    {
        m_r_relid_attr->toXmlAttr("relid", _outStream);
    }
    
            _outStream << ">";
            
    if (m_has_o_fill)
    {
        m_o_fill->toXmlElem("v:fill", "", _outStream);;
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_Fill& CT_Fill::default_instance()
    {    
    if (!CT_Fill::default_instance_)
    {
        CT_Fill::default_instance_ = new CT_Fill();
    }
    return *CT_Fill::default_instance_;
    }

    bool CT_Fill::has_id_attr() const
    {    
    return m_has_id_attr;
    }

    void CT_Fill::set_id_attr(const XSD::string_& _id_attr)
    {    
    m_has_id_attr = true;
    m_id_attr = _id_attr;
    }

    const XSD::string_& CT_Fill::get_id_attr() const
    {    
    return m_id_attr;
    }

    bool CT_Fill::has_type_attr() const
    {    
    return m_has_type_attr;
    }

    void CT_Fill::set_type_attr(const ST_FillType& _type_attr)
    {    
    m_has_type_attr = true;
    m_type_attr = new ST_FillType(_type_attr);
    }

    const ST_FillType& CT_Fill::get_type_attr() const
    {    
    if (m_type_attr)
    {
        return *m_type_attr;
    }
    return ST_FillType::default_instance();
    }

    bool CT_Fill::has_s_on_attr() const
    {    
    return m_has_s_on_attr;
    }

    void CT_Fill::set_s_on_attr(const ns_s::ST_TrueFalse& _s_on_attr)
    {    
    m_has_s_on_attr = true;
    m_s_on_attr = new ns_s::ST_TrueFalse(_s_on_attr);
    }

    const ns_s::ST_TrueFalse& CT_Fill::get_s_on_attr() const
    {    
    if (m_s_on_attr)
    {
        return *m_s_on_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
    }

    bool CT_Fill::has_s_color_attr() const
    {    
    return m_has_s_color_attr;
    }

    void CT_Fill::set_s_color_attr(const ns_s::ST_ColorType& _s_color_attr)
    {    
    m_has_s_color_attr = true;
    m_s_color_attr = new ns_s::ST_ColorType(_s_color_attr);
    }

    const ns_s::ST_ColorType& CT_Fill::get_s_color_attr() const
    {    
    if (m_s_color_attr)
    {
        return *m_s_color_attr;
    }
    return ns_s::ST_ColorType::default_instance();
    }

    bool CT_Fill::has_opacity_attr() const
    {    
    return m_has_opacity_attr;
    }

    void CT_Fill::set_opacity_attr(const XSD::string_& _opacity_attr)
    {    
    m_has_opacity_attr = true;
    m_opacity_attr = _opacity_attr;
    }

    const XSD::string_& CT_Fill::get_opacity_attr() const
    {    
    return m_opacity_attr;
    }

    bool CT_Fill::has_s_color2_attr() const
    {    
    return m_has_s_color2_attr;
    }

    void CT_Fill::set_s_color2_attr(const ns_s::ST_ColorType& _s_color2_attr)
    {    
    m_has_s_color2_attr = true;
    m_s_color2_attr = new ns_s::ST_ColorType(_s_color2_attr);
    }

    const ns_s::ST_ColorType& CT_Fill::get_s_color2_attr() const
    {    
    if (m_s_color2_attr)
    {
        return *m_s_color2_attr;
    }
    return ns_s::ST_ColorType::default_instance();
    }

    bool CT_Fill::has_src_attr() const
    {    
    return m_has_src_attr;
    }

    void CT_Fill::set_src_attr(const XSD::string_& _src_attr)
    {    
    m_has_src_attr = true;
    m_src_attr = _src_attr;
    }

    const XSD::string_& CT_Fill::get_src_attr() const
    {    
    return m_src_attr;
    }

    bool CT_Fill::has_href_attr() const
    {    
    return m_has_href_attr;
    }

    void CT_Fill::set_href_attr(const XSD::string_& _href_attr)
    {    
    m_has_href_attr = true;
    m_href_attr = _href_attr;
    }

    const XSD::string_& CT_Fill::get_href_attr() const
    {    
    return m_href_attr;
    }

    bool CT_Fill::has_althref_attr() const
    {    
    return m_has_althref_attr;
    }

    void CT_Fill::set_althref_attr(const XSD::string_& _althref_attr)
    {    
    m_has_althref_attr = true;
    m_althref_attr = _althref_attr;
    }

    const XSD::string_& CT_Fill::get_althref_attr() const
    {    
    return m_althref_attr;
    }

    bool CT_Fill::has_size_attr() const
    {    
    return m_has_size_attr;
    }

    void CT_Fill::set_size_attr(const XSD::string_& _size_attr)
    {    
    m_has_size_attr = true;
    m_size_attr = _size_attr;
    }

    const XSD::string_& CT_Fill::get_size_attr() const
    {    
    return m_size_attr;
    }

    bool CT_Fill::has_origin_attr() const
    {    
    return m_has_origin_attr;
    }

    void CT_Fill::set_origin_attr(const XSD::string_& _origin_attr)
    {    
    m_has_origin_attr = true;
    m_origin_attr = _origin_attr;
    }

    const XSD::string_& CT_Fill::get_origin_attr() const
    {    
    return m_origin_attr;
    }

    bool CT_Fill::has_position_attr() const
    {    
    return m_has_position_attr;
    }

    void CT_Fill::set_position_attr(const XSD::string_& _position_attr)
    {    
    m_has_position_attr = true;
    m_position_attr = _position_attr;
    }

    const XSD::string_& CT_Fill::get_position_attr() const
    {    
    return m_position_attr;
    }

    bool CT_Fill::has_aspect_attr() const
    {    
    return m_has_aspect_attr;
    }

    void CT_Fill::set_aspect_attr(const ST_ImageAspect& _aspect_attr)
    {    
    m_has_aspect_attr = true;
    m_aspect_attr = new ST_ImageAspect(_aspect_attr);
    }

    const ST_ImageAspect& CT_Fill::get_aspect_attr() const
    {    
    if (m_aspect_attr)
    {
        return *m_aspect_attr;
    }
    return ST_ImageAspect::default_instance();
    }

    bool CT_Fill::has_colors_attr() const
    {    
    return m_has_colors_attr;
    }

    void CT_Fill::set_colors_attr(const XSD::string_& _colors_attr)
    {    
    m_has_colors_attr = true;
    m_colors_attr = _colors_attr;
    }

    const XSD::string_& CT_Fill::get_colors_attr() const
    {    
    return m_colors_attr;
    }

    bool CT_Fill::has_angle_attr() const
    {    
    return m_has_angle_attr;
    }

    void CT_Fill::set_angle_attr(const XSD::decimal_& _angle_attr)
    {    
    m_has_angle_attr = true;
    m_angle_attr = _angle_attr;
    }

    const XSD::decimal_& CT_Fill::get_angle_attr() const
    {    
    return m_angle_attr;
    }

    bool CT_Fill::has_s_alignshape_attr() const
    {    
    return m_has_s_alignshape_attr;
    }

    void CT_Fill::set_s_alignshape_attr(const ns_s::ST_TrueFalse& _s_alignshape_attr)
    {    
    m_has_s_alignshape_attr = true;
    m_s_alignshape_attr = new ns_s::ST_TrueFalse(_s_alignshape_attr);
    }

    const ns_s::ST_TrueFalse& CT_Fill::get_s_alignshape_attr() const
    {    
    if (m_s_alignshape_attr)
    {
        return *m_s_alignshape_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
    }

    bool CT_Fill::has_focus_attr() const
    {    
    return m_has_focus_attr;
    }

    void CT_Fill::set_focus_attr(const XSD::string_& _focus_attr)
    {    
    m_has_focus_attr = true;
    m_focus_attr = _focus_attr;
    }

    const XSD::string_& CT_Fill::get_focus_attr() const
    {    
    return m_focus_attr;
    }

    bool CT_Fill::has_focussize_attr() const
    {    
    return m_has_focussize_attr;
    }

    void CT_Fill::set_focussize_attr(const XSD::string_& _focussize_attr)
    {    
    m_has_focussize_attr = true;
    m_focussize_attr = _focussize_attr;
    }

    const XSD::string_& CT_Fill::get_focussize_attr() const
    {    
    return m_focussize_attr;
    }

    bool CT_Fill::has_focusposition_attr() const
    {    
    return m_has_focusposition_attr;
    }

    void CT_Fill::set_focusposition_attr(const XSD::string_& _focusposition_attr)
    {    
    m_has_focusposition_attr = true;
    m_focusposition_attr = _focusposition_attr;
    }

    const XSD::string_& CT_Fill::get_focusposition_attr() const
    {    
    return m_focusposition_attr;
    }

    bool CT_Fill::has_method_attr() const
    {    
    return m_has_method_attr;
    }

    void CT_Fill::set_method_attr(const ST_FillMethod& _method_attr)
    {    
    m_has_method_attr = true;
    m_method_attr = new ST_FillMethod(_method_attr);
    }

    const ST_FillMethod& CT_Fill::get_method_attr() const
    {    
    if (m_method_attr)
    {
        return *m_method_attr;
    }
    return ST_FillMethod::default_instance();
    }

    bool CT_Fill::has_s_detectmouseclick_attr() const
    {    
    return m_has_s_detectmouseclick_attr;
    }

    void CT_Fill::set_s_detectmouseclick_attr(const ns_s::ST_TrueFalse& _s_detectmouseclick_attr)
    {    
    m_has_s_detectmouseclick_attr = true;
    m_s_detectmouseclick_attr = new ns_s::ST_TrueFalse(_s_detectmouseclick_attr);
    }

    const ns_s::ST_TrueFalse& CT_Fill::get_s_detectmouseclick_attr() const
    {    
    if (m_s_detectmouseclick_attr)
    {
        return *m_s_detectmouseclick_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
    }

    bool CT_Fill::has_title_attr() const
    {    
    return m_has_title_attr;
    }

    void CT_Fill::set_title_attr(const XSD::string_& _title_attr)
    {    
    m_has_title_attr = true;
    m_title_attr = _title_attr;
    }

    const XSD::string_& CT_Fill::get_title_attr() const
    {    
    return m_title_attr;
    }

    bool CT_Fill::has_opacity2_attr() const
    {    
    return m_has_opacity2_attr;
    }

    void CT_Fill::set_opacity2_attr(const XSD::string_& _opacity2_attr)
    {    
    m_has_opacity2_attr = true;
    m_opacity2_attr = _opacity2_attr;
    }

    const XSD::string_& CT_Fill::get_opacity2_attr() const
    {    
    return m_opacity2_attr;
    }

    bool CT_Fill::has_s_recolor_attr() const
    {    
    return m_has_s_recolor_attr;
    }

    void CT_Fill::set_s_recolor_attr(const ns_s::ST_TrueFalse& _s_recolor_attr)
    {    
    m_has_s_recolor_attr = true;
    m_s_recolor_attr = new ns_s::ST_TrueFalse(_s_recolor_attr);
    }

    const ns_s::ST_TrueFalse& CT_Fill::get_s_recolor_attr() const
    {    
    if (m_s_recolor_attr)
    {
        return *m_s_recolor_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
    }

    bool CT_Fill::has_s_rotate_attr() const
    {    
    return m_has_s_rotate_attr;
    }

    void CT_Fill::set_s_rotate_attr(const ns_s::ST_TrueFalse& _s_rotate_attr)
    {    
    m_has_s_rotate_attr = true;
    m_s_rotate_attr = new ns_s::ST_TrueFalse(_s_rotate_attr);
    }

    const ns_s::ST_TrueFalse& CT_Fill::get_s_rotate_attr() const
    {    
    if (m_s_rotate_attr)
    {
        return *m_s_rotate_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
    }

    bool CT_Fill::has_r_id_attr() const
    {    
    return m_has_r_id_attr;
    }

    void CT_Fill::set_r_id_attr(const ns_r::ST_RelationshipId& _r_id_attr)
    {    
    m_has_r_id_attr = true;
    m_r_id_attr = new ns_r::ST_RelationshipId(_r_id_attr);
    }

    const ns_r::ST_RelationshipId& CT_Fill::get_r_id_attr() const
    {    
    if (m_r_id_attr)
    {
        return *m_r_id_attr;
    }
    return ns_r::ST_RelationshipId::default_instance();
    }

    bool CT_Fill::has_r_relid_attr() const
    {    
    return m_has_r_relid_attr;
    }

    void CT_Fill::set_r_relid_attr(const ns_r::ST_RelationshipId& _r_relid_attr)
    {    
    m_has_r_relid_attr = true;
    m_r_relid_attr = new ns_r::ST_RelationshipId(_r_relid_attr);
    }

    const ns_r::ST_RelationshipId& CT_Fill::get_r_relid_attr() const
    {    
    if (m_r_relid_attr)
    {
        return *m_r_relid_attr;
    }
    return ns_r::ST_RelationshipId::default_instance();
    }


    // CT_Formulas
    CT_F* CT_Formulas::add_f()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_F* pNewChild = pChildGroup->mutable_f();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    void CT_Formulas::clear()
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

    void CT_Formulas::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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
            if ((*iter)->has_f())
            {
                (*iter)->get_f().toXmlElem("v:f", "", _outStream);
            }
        }
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_Formulas& CT_Formulas::default_instance()
    {    
    if (!CT_Formulas::default_instance_)
    {
        CT_Formulas::default_instance_ = new CT_Formulas();
    }
    return *CT_Formulas::default_instance_;
    }


    // CT_F
    void CT_F::clear()
    {    
    m_has_eqn_attr = false;
    m_eqn_attr.clear();
    }

    void CT_F::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
    if (m_has_eqn_attr)
    {
        _outStream << " " << "eqn" << "=\"" << m_eqn_attr << "\"";
    }
    
            _outStream << ">";
            
            _outStream << "</" << _elemName << ">";
                }

    const CT_F& CT_F::default_instance()
    {    
    if (!CT_F::default_instance_)
    {
        CT_F::default_instance_ = new CT_F();
    }
    return *CT_F::default_instance_;
    }

    bool CT_F::has_eqn_attr() const
    {    
    return m_has_eqn_attr;
    }

    void CT_F::set_eqn_attr(const XSD::string_& _eqn_attr)
    {    
    m_has_eqn_attr = true;
    m_eqn_attr = _eqn_attr;
    }

    const XSD::string_& CT_F::get_eqn_attr() const
    {    
    return m_eqn_attr;
    }


    // CT_Handles
    CT_H* CT_Handles::add_h()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_H* pNewChild = pChildGroup->mutable_h();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    void CT_Handles::clear()
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

    void CT_Handles::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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
            if ((*iter)->has_h())
            {
                (*iter)->get_h().toXmlElem("v:h", "", _outStream);
            }
        }
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_Handles& CT_Handles::default_instance()
    {    
    if (!CT_Handles::default_instance_)
    {
        CT_Handles::default_instance_ = new CT_Handles();
    }
    return *CT_Handles::default_instance_;
    }


    // CT_H
    void CT_H::clear()
    {    
    m_has_position_attr = false;
    m_position_attr.clear();
    
    m_has_polar_attr = false;
    m_polar_attr.clear();
    
    m_has_map_attr = false;
    m_map_attr.clear();
    
    m_has_s_invx_attr = false;
    
    if (m_s_invx_attr)
    {
        delete m_s_invx_attr;
        m_s_invx_attr = NULL;
    }
    
    
    m_has_s_invy_attr = false;
    
    if (m_s_invy_attr)
    {
        delete m_s_invy_attr;
        m_s_invy_attr = NULL;
    }
    
    
    m_has_s_switch_attr = false;
    
    if (m_s_switch_attr)
    {
        delete m_s_switch_attr;
        m_s_switch_attr = NULL;
    }
    
    
    m_has_xrange_attr = false;
    m_xrange_attr.clear();
    
    m_has_yrange_attr = false;
    m_yrange_attr.clear();
    
    m_has_radiusrange_attr = false;
    m_radiusrange_attr.clear();
    }

    void CT_H::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
    if (m_has_position_attr)
    {
        _outStream << " " << "position" << "=\"" << m_position_attr << "\"";
    }
    
    
    if (m_has_polar_attr)
    {
        _outStream << " " << "polar" << "=\"" << m_polar_attr << "\"";
    }
    
    
    if (m_has_map_attr)
    {
        _outStream << " " << "map" << "=\"" << m_map_attr << "\"";
    }
    
    
    if (m_has_s_invx_attr)
    {
        m_s_invx_attr->toXmlAttr("invx", _outStream);
    }
    
    
    if (m_has_s_invy_attr)
    {
        m_s_invy_attr->toXmlAttr("invy", _outStream);
    }
    
    
    if (m_has_s_switch_attr)
    {
        m_s_switch_attr->toXmlAttr("switch", _outStream);
    }
    
    
    if (m_has_xrange_attr)
    {
        _outStream << " " << "xrange" << "=\"" << m_xrange_attr << "\"";
    }
    
    
    if (m_has_yrange_attr)
    {
        _outStream << " " << "yrange" << "=\"" << m_yrange_attr << "\"";
    }
    
    
    if (m_has_radiusrange_attr)
    {
        _outStream << " " << "radiusrange" << "=\"" << m_radiusrange_attr << "\"";
    }
    
            _outStream << ">";
            
            _outStream << "</" << _elemName << ">";
                }

    const CT_H& CT_H::default_instance()
    {    
    if (!CT_H::default_instance_)
    {
        CT_H::default_instance_ = new CT_H();
    }
    return *CT_H::default_instance_;
    }

    bool CT_H::has_position_attr() const
    {    
    return m_has_position_attr;
    }

    void CT_H::set_position_attr(const XSD::string_& _position_attr)
    {    
    m_has_position_attr = true;
    m_position_attr = _position_attr;
    }

    const XSD::string_& CT_H::get_position_attr() const
    {    
    return m_position_attr;
    }

    bool CT_H::has_polar_attr() const
    {    
    return m_has_polar_attr;
    }

    void CT_H::set_polar_attr(const XSD::string_& _polar_attr)
    {    
    m_has_polar_attr = true;
    m_polar_attr = _polar_attr;
    }

    const XSD::string_& CT_H::get_polar_attr() const
    {    
    return m_polar_attr;
    }

    bool CT_H::has_map_attr() const
    {    
    return m_has_map_attr;
    }

    void CT_H::set_map_attr(const XSD::string_& _map_attr)
    {    
    m_has_map_attr = true;
    m_map_attr = _map_attr;
    }

    const XSD::string_& CT_H::get_map_attr() const
    {    
    return m_map_attr;
    }

    bool CT_H::has_s_invx_attr() const
    {    
    return m_has_s_invx_attr;
    }

    void CT_H::set_s_invx_attr(const ns_s::ST_TrueFalse& _s_invx_attr)
    {    
    m_has_s_invx_attr = true;
    m_s_invx_attr = new ns_s::ST_TrueFalse(_s_invx_attr);
    }

    const ns_s::ST_TrueFalse& CT_H::get_s_invx_attr() const
    {    
    if (m_s_invx_attr)
    {
        return *m_s_invx_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
    }

    bool CT_H::has_s_invy_attr() const
    {    
    return m_has_s_invy_attr;
    }

    void CT_H::set_s_invy_attr(const ns_s::ST_TrueFalse& _s_invy_attr)
    {    
    m_has_s_invy_attr = true;
    m_s_invy_attr = new ns_s::ST_TrueFalse(_s_invy_attr);
    }

    const ns_s::ST_TrueFalse& CT_H::get_s_invy_attr() const
    {    
    if (m_s_invy_attr)
    {
        return *m_s_invy_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
    }

    bool CT_H::has_s_switch_attr() const
    {    
    return m_has_s_switch_attr;
    }

    void CT_H::set_s_switch_attr(const ns_s::ST_TrueFalseBlank& _s_switch_attr)
    {    
    m_has_s_switch_attr = true;
    m_s_switch_attr = new ns_s::ST_TrueFalseBlank(_s_switch_attr);
    }

    const ns_s::ST_TrueFalseBlank& CT_H::get_s_switch_attr() const
    {    
    if (m_s_switch_attr)
    {
        return *m_s_switch_attr;
    }
    return ns_s::ST_TrueFalseBlank::default_instance();
    }

    bool CT_H::has_xrange_attr() const
    {    
    return m_has_xrange_attr;
    }

    void CT_H::set_xrange_attr(const XSD::string_& _xrange_attr)
    {    
    m_has_xrange_attr = true;
    m_xrange_attr = _xrange_attr;
    }

    const XSD::string_& CT_H::get_xrange_attr() const
    {    
    return m_xrange_attr;
    }

    bool CT_H::has_yrange_attr() const
    {    
    return m_has_yrange_attr;
    }

    void CT_H::set_yrange_attr(const XSD::string_& _yrange_attr)
    {    
    m_has_yrange_attr = true;
    m_yrange_attr = _yrange_attr;
    }

    const XSD::string_& CT_H::get_yrange_attr() const
    {    
    return m_yrange_attr;
    }

    bool CT_H::has_radiusrange_attr() const
    {    
    return m_has_radiusrange_attr;
    }

    void CT_H::set_radiusrange_attr(const XSD::string_& _radiusrange_attr)
    {    
    m_has_radiusrange_attr = true;
    m_radiusrange_attr = _radiusrange_attr;
    }

    const XSD::string_& CT_H::get_radiusrange_attr() const
    {    
    return m_radiusrange_attr;
    }


    // CT_ImageData
    void CT_ImageData::clear()
    {    
    m_has_id_attr = false;
    m_id_attr.clear();
    
    m_has_src_attr = false;
    m_src_attr.clear();
    
    m_has_cropleft_attr = false;
    m_cropleft_attr.clear();
    
    m_has_croptop_attr = false;
    m_croptop_attr.clear();
    
    m_has_cropright_attr = false;
    m_cropright_attr.clear();
    
    m_has_cropbottom_attr = false;
    m_cropbottom_attr.clear();
    
    m_has_gain_attr = false;
    m_gain_attr.clear();
    
    m_has_blacklevel_attr = false;
    m_blacklevel_attr.clear();
    
    m_has_gamma_attr = false;
    m_gamma_attr.clear();
    
    m_has_s_grayscale_attr = false;
    
    if (m_s_grayscale_attr)
    {
        delete m_s_grayscale_attr;
        m_s_grayscale_attr = NULL;
    }
    
    
    m_has_s_bilevel_attr = false;
    
    if (m_s_bilevel_attr)
    {
        delete m_s_bilevel_attr;
        m_s_bilevel_attr = NULL;
    }
    
    
    m_has_s_chromakey_attr = false;
    
    if (m_s_chromakey_attr)
    {
        delete m_s_chromakey_attr;
        m_s_chromakey_attr = NULL;
    }
    
    
    m_has_s_embosscolor_attr = false;
    
    if (m_s_embosscolor_attr)
    {
        delete m_s_embosscolor_attr;
        m_s_embosscolor_attr = NULL;
    }
    
    
    m_has_s_recolortarget_attr = false;
    
    if (m_s_recolortarget_attr)
    {
        delete m_s_recolortarget_attr;
        m_s_recolortarget_attr = NULL;
    }
    
    
    m_has_href_attr = false;
    m_href_attr.clear();
    
    m_has_althref_attr = false;
    m_althref_attr.clear();
    
    m_has_title_attr = false;
    m_title_attr.clear();
    
    m_has_oleid_attr = false;
    m_oleid_attr = 0;
    
    m_has_s_detectmouseclick_attr = false;
    
    if (m_s_detectmouseclick_attr)
    {
        delete m_s_detectmouseclick_attr;
        m_s_detectmouseclick_attr = NULL;
    }
    
    
    m_has_movie_attr = false;
    m_movie_attr = 0;
    
    m_has_r_relid_attr = false;
    
    if (m_r_relid_attr)
    {
        delete m_r_relid_attr;
        m_r_relid_attr = NULL;
    }
    
    
    m_has_r_id_attr = false;
    
    if (m_r_id_attr)
    {
        delete m_r_id_attr;
        m_r_id_attr = NULL;
    }
    
    
    m_has_r_pict_attr = false;
    
    if (m_r_pict_attr)
    {
        delete m_r_pict_attr;
        m_r_pict_attr = NULL;
    }
    
    
    m_has_r_href_attr = false;
    
    if (m_r_href_attr)
    {
        delete m_r_href_attr;
        m_r_href_attr = NULL;
    }
    
    }

    void CT_ImageData::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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
    
    
    if (m_has_src_attr)
    {
        _outStream << " " << "src" << "=\"" << m_src_attr << "\"";
    }
    
    
    if (m_has_cropleft_attr)
    {
        _outStream << " " << "cropleft" << "=\"" << m_cropleft_attr << "\"";
    }
    
    
    if (m_has_croptop_attr)
    {
        _outStream << " " << "croptop" << "=\"" << m_croptop_attr << "\"";
    }
    
    
    if (m_has_cropright_attr)
    {
        _outStream << " " << "cropright" << "=\"" << m_cropright_attr << "\"";
    }
    
    
    if (m_has_cropbottom_attr)
    {
        _outStream << " " << "cropbottom" << "=\"" << m_cropbottom_attr << "\"";
    }
    
    
    if (m_has_gain_attr)
    {
        _outStream << " " << "gain" << "=\"" << m_gain_attr << "\"";
    }
    
    
    if (m_has_blacklevel_attr)
    {
        _outStream << " " << "blacklevel" << "=\"" << m_blacklevel_attr << "\"";
    }
    
    
    if (m_has_gamma_attr)
    {
        _outStream << " " << "gamma" << "=\"" << m_gamma_attr << "\"";
    }
    
    
    if (m_has_s_grayscale_attr)
    {
        m_s_grayscale_attr->toXmlAttr("grayscale", _outStream);
    }
    
    
    if (m_has_s_bilevel_attr)
    {
        m_s_bilevel_attr->toXmlAttr("bilevel", _outStream);
    }
    
    
    if (m_has_s_chromakey_attr)
    {
        m_s_chromakey_attr->toXmlAttr("chromakey", _outStream);
    }
    
    
    if (m_has_s_embosscolor_attr)
    {
        m_s_embosscolor_attr->toXmlAttr("embosscolor", _outStream);
    }
    
    
    if (m_has_s_recolortarget_attr)
    {
        m_s_recolortarget_attr->toXmlAttr("recolortarget", _outStream);
    }
    
    
    if (m_has_href_attr)
    {
        _outStream << " " << "href" << "=\"" << m_href_attr << "\"";
    }
    
    
    if (m_has_althref_attr)
    {
        _outStream << " " << "althref" << "=\"" << m_althref_attr << "\"";
    }
    
    
    if (m_has_title_attr)
    {
        _outStream << " " << "title" << "=\"" << m_title_attr << "\"";
    }
    
    
    if (m_has_oleid_attr)
    {
        _outStream << " " << "oleid" << "=\"" << m_oleid_attr << "\"";
    }
    
    
    if (m_has_s_detectmouseclick_attr)
    {
        m_s_detectmouseclick_attr->toXmlAttr("detectmouseclick", _outStream);
    }
    
    
    if (m_has_movie_attr)
    {
        _outStream << " " << "movie" << "=\"" << m_movie_attr << "\"";
    }
    
    
    if (m_has_r_relid_attr)
    {
        m_r_relid_attr->toXmlAttr("relid", _outStream);
    }
    
    
    if (m_has_r_id_attr)
    {
        m_r_id_attr->toXmlAttr("id", _outStream);
    }
    
    
    if (m_has_r_pict_attr)
    {
        m_r_pict_attr->toXmlAttr("pict", _outStream);
    }
    
    
    if (m_has_r_href_attr)
    {
        m_r_href_attr->toXmlAttr("href", _outStream);
    }
    
            _outStream << ">";
            
            _outStream << "</" << _elemName << ">";
                }

    const CT_ImageData& CT_ImageData::default_instance()
    {    
    if (!CT_ImageData::default_instance_)
    {
        CT_ImageData::default_instance_ = new CT_ImageData();
    }
    return *CT_ImageData::default_instance_;
    }

    bool CT_ImageData::has_id_attr() const
    {    
    return m_has_id_attr;
    }

    void CT_ImageData::set_id_attr(const XSD::string_& _id_attr)
    {    
    m_has_id_attr = true;
    m_id_attr = _id_attr;
    }

    const XSD::string_& CT_ImageData::get_id_attr() const
    {    
    return m_id_attr;
    }

    bool CT_ImageData::has_src_attr() const
    {    
    return m_has_src_attr;
    }

    void CT_ImageData::set_src_attr(const XSD::string_& _src_attr)
    {    
    m_has_src_attr = true;
    m_src_attr = _src_attr;
    }

    const XSD::string_& CT_ImageData::get_src_attr() const
    {    
    return m_src_attr;
    }

    bool CT_ImageData::has_cropleft_attr() const
    {    
    return m_has_cropleft_attr;
    }

    void CT_ImageData::set_cropleft_attr(const XSD::string_& _cropleft_attr)
    {    
    m_has_cropleft_attr = true;
    m_cropleft_attr = _cropleft_attr;
    }

    const XSD::string_& CT_ImageData::get_cropleft_attr() const
    {    
    return m_cropleft_attr;
    }

    bool CT_ImageData::has_croptop_attr() const
    {    
    return m_has_croptop_attr;
    }

    void CT_ImageData::set_croptop_attr(const XSD::string_& _croptop_attr)
    {    
    m_has_croptop_attr = true;
    m_croptop_attr = _croptop_attr;
    }

    const XSD::string_& CT_ImageData::get_croptop_attr() const
    {    
    return m_croptop_attr;
    }

    bool CT_ImageData::has_cropright_attr() const
    {    
    return m_has_cropright_attr;
    }

    void CT_ImageData::set_cropright_attr(const XSD::string_& _cropright_attr)
    {    
    m_has_cropright_attr = true;
    m_cropright_attr = _cropright_attr;
    }

    const XSD::string_& CT_ImageData::get_cropright_attr() const
    {    
    return m_cropright_attr;
    }

    bool CT_ImageData::has_cropbottom_attr() const
    {    
    return m_has_cropbottom_attr;
    }

    void CT_ImageData::set_cropbottom_attr(const XSD::string_& _cropbottom_attr)
    {    
    m_has_cropbottom_attr = true;
    m_cropbottom_attr = _cropbottom_attr;
    }

    const XSD::string_& CT_ImageData::get_cropbottom_attr() const
    {    
    return m_cropbottom_attr;
    }

    bool CT_ImageData::has_gain_attr() const
    {    
    return m_has_gain_attr;
    }

    void CT_ImageData::set_gain_attr(const XSD::string_& _gain_attr)
    {    
    m_has_gain_attr = true;
    m_gain_attr = _gain_attr;
    }

    const XSD::string_& CT_ImageData::get_gain_attr() const
    {    
    return m_gain_attr;
    }

    bool CT_ImageData::has_blacklevel_attr() const
    {    
    return m_has_blacklevel_attr;
    }

    void CT_ImageData::set_blacklevel_attr(const XSD::string_& _blacklevel_attr)
    {    
    m_has_blacklevel_attr = true;
    m_blacklevel_attr = _blacklevel_attr;
    }

    const XSD::string_& CT_ImageData::get_blacklevel_attr() const
    {    
    return m_blacklevel_attr;
    }

    bool CT_ImageData::has_gamma_attr() const
    {    
    return m_has_gamma_attr;
    }

    void CT_ImageData::set_gamma_attr(const XSD::string_& _gamma_attr)
    {    
    m_has_gamma_attr = true;
    m_gamma_attr = _gamma_attr;
    }

    const XSD::string_& CT_ImageData::get_gamma_attr() const
    {    
    return m_gamma_attr;
    }

    bool CT_ImageData::has_s_grayscale_attr() const
    {    
    return m_has_s_grayscale_attr;
    }

    void CT_ImageData::set_s_grayscale_attr(const ns_s::ST_TrueFalse& _s_grayscale_attr)
    {    
    m_has_s_grayscale_attr = true;
    m_s_grayscale_attr = new ns_s::ST_TrueFalse(_s_grayscale_attr);
    }

    const ns_s::ST_TrueFalse& CT_ImageData::get_s_grayscale_attr() const
    {    
    if (m_s_grayscale_attr)
    {
        return *m_s_grayscale_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
    }

    bool CT_ImageData::has_s_bilevel_attr() const
    {    
    return m_has_s_bilevel_attr;
    }

    void CT_ImageData::set_s_bilevel_attr(const ns_s::ST_TrueFalse& _s_bilevel_attr)
    {    
    m_has_s_bilevel_attr = true;
    m_s_bilevel_attr = new ns_s::ST_TrueFalse(_s_bilevel_attr);
    }

    const ns_s::ST_TrueFalse& CT_ImageData::get_s_bilevel_attr() const
    {    
    if (m_s_bilevel_attr)
    {
        return *m_s_bilevel_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
    }

    bool CT_ImageData::has_s_chromakey_attr() const
    {    
    return m_has_s_chromakey_attr;
    }

    void CT_ImageData::set_s_chromakey_attr(const ns_s::ST_ColorType& _s_chromakey_attr)
    {    
    m_has_s_chromakey_attr = true;
    m_s_chromakey_attr = new ns_s::ST_ColorType(_s_chromakey_attr);
    }

    const ns_s::ST_ColorType& CT_ImageData::get_s_chromakey_attr() const
    {    
    if (m_s_chromakey_attr)
    {
        return *m_s_chromakey_attr;
    }
    return ns_s::ST_ColorType::default_instance();
    }

    bool CT_ImageData::has_s_embosscolor_attr() const
    {    
    return m_has_s_embosscolor_attr;
    }

    void CT_ImageData::set_s_embosscolor_attr(const ns_s::ST_ColorType& _s_embosscolor_attr)
    {    
    m_has_s_embosscolor_attr = true;
    m_s_embosscolor_attr = new ns_s::ST_ColorType(_s_embosscolor_attr);
    }

    const ns_s::ST_ColorType& CT_ImageData::get_s_embosscolor_attr() const
    {    
    if (m_s_embosscolor_attr)
    {
        return *m_s_embosscolor_attr;
    }
    return ns_s::ST_ColorType::default_instance();
    }

    bool CT_ImageData::has_s_recolortarget_attr() const
    {    
    return m_has_s_recolortarget_attr;
    }

    void CT_ImageData::set_s_recolortarget_attr(const ns_s::ST_ColorType& _s_recolortarget_attr)
    {    
    m_has_s_recolortarget_attr = true;
    m_s_recolortarget_attr = new ns_s::ST_ColorType(_s_recolortarget_attr);
    }

    const ns_s::ST_ColorType& CT_ImageData::get_s_recolortarget_attr() const
    {    
    if (m_s_recolortarget_attr)
    {
        return *m_s_recolortarget_attr;
    }
    return ns_s::ST_ColorType::default_instance();
    }

    bool CT_ImageData::has_href_attr() const
    {    
    return m_has_href_attr;
    }

    void CT_ImageData::set_href_attr(const XSD::string_& _href_attr)
    {    
    m_has_href_attr = true;
    m_href_attr = _href_attr;
    }

    const XSD::string_& CT_ImageData::get_href_attr() const
    {    
    return m_href_attr;
    }

    bool CT_ImageData::has_althref_attr() const
    {    
    return m_has_althref_attr;
    }

    void CT_ImageData::set_althref_attr(const XSD::string_& _althref_attr)
    {    
    m_has_althref_attr = true;
    m_althref_attr = _althref_attr;
    }

    const XSD::string_& CT_ImageData::get_althref_attr() const
    {    
    return m_althref_attr;
    }

    bool CT_ImageData::has_title_attr() const
    {    
    return m_has_title_attr;
    }

    void CT_ImageData::set_title_attr(const XSD::string_& _title_attr)
    {    
    m_has_title_attr = true;
    m_title_attr = _title_attr;
    }

    const XSD::string_& CT_ImageData::get_title_attr() const
    {    
    return m_title_attr;
    }

    bool CT_ImageData::has_oleid_attr() const
    {    
    return m_has_oleid_attr;
    }

    void CT_ImageData::set_oleid_attr(const XSD::float_& _oleid_attr)
    {    
    m_has_oleid_attr = true;
    m_oleid_attr = _oleid_attr;
    }

    const XSD::float_& CT_ImageData::get_oleid_attr() const
    {    
    return m_oleid_attr;
    }

    bool CT_ImageData::has_s_detectmouseclick_attr() const
    {    
    return m_has_s_detectmouseclick_attr;
    }

    void CT_ImageData::set_s_detectmouseclick_attr(const ns_s::ST_TrueFalse& _s_detectmouseclick_attr)
    {    
    m_has_s_detectmouseclick_attr = true;
    m_s_detectmouseclick_attr = new ns_s::ST_TrueFalse(_s_detectmouseclick_attr);
    }

    const ns_s::ST_TrueFalse& CT_ImageData::get_s_detectmouseclick_attr() const
    {    
    if (m_s_detectmouseclick_attr)
    {
        return *m_s_detectmouseclick_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
    }

    bool CT_ImageData::has_movie_attr() const
    {    
    return m_has_movie_attr;
    }

    void CT_ImageData::set_movie_attr(const XSD::float_& _movie_attr)
    {    
    m_has_movie_attr = true;
    m_movie_attr = _movie_attr;
    }

    const XSD::float_& CT_ImageData::get_movie_attr() const
    {    
    return m_movie_attr;
    }

    bool CT_ImageData::has_r_relid_attr() const
    {    
    return m_has_r_relid_attr;
    }

    void CT_ImageData::set_r_relid_attr(const ns_r::ST_RelationshipId& _r_relid_attr)
    {    
    m_has_r_relid_attr = true;
    m_r_relid_attr = new ns_r::ST_RelationshipId(_r_relid_attr);
    }

    const ns_r::ST_RelationshipId& CT_ImageData::get_r_relid_attr() const
    {    
    if (m_r_relid_attr)
    {
        return *m_r_relid_attr;
    }
    return ns_r::ST_RelationshipId::default_instance();
    }

    bool CT_ImageData::has_r_id_attr() const
    {    
    return m_has_r_id_attr;
    }

    void CT_ImageData::set_r_id_attr(const ns_r::ST_RelationshipId& _r_id_attr)
    {    
    m_has_r_id_attr = true;
    m_r_id_attr = new ns_r::ST_RelationshipId(_r_id_attr);
    }

    const ns_r::ST_RelationshipId& CT_ImageData::get_r_id_attr() const
    {    
    if (m_r_id_attr)
    {
        return *m_r_id_attr;
    }
    return ns_r::ST_RelationshipId::default_instance();
    }

    bool CT_ImageData::has_r_pict_attr() const
    {    
    return m_has_r_pict_attr;
    }

    void CT_ImageData::set_r_pict_attr(const ns_r::ST_RelationshipId& _r_pict_attr)
    {    
    m_has_r_pict_attr = true;
    m_r_pict_attr = new ns_r::ST_RelationshipId(_r_pict_attr);
    }

    const ns_r::ST_RelationshipId& CT_ImageData::get_r_pict_attr() const
    {    
    if (m_r_pict_attr)
    {
        return *m_r_pict_attr;
    }
    return ns_r::ST_RelationshipId::default_instance();
    }

    bool CT_ImageData::has_r_href_attr() const
    {    
    return m_has_r_href_attr;
    }

    void CT_ImageData::set_r_href_attr(const ns_r::ST_RelationshipId& _r_href_attr)
    {    
    m_has_r_href_attr = true;
    m_r_href_attr = new ns_r::ST_RelationshipId(_r_href_attr);
    }

    const ns_r::ST_RelationshipId& CT_ImageData::get_r_href_attr() const
    {    
    if (m_r_href_attr)
    {
        return *m_r_href_attr;
    }
    return ns_r::ST_RelationshipId::default_instance();
    }


    // CT_Path
    void CT_Path::clear()
    {    
    m_has_id_attr = false;
    m_id_attr.clear();
    
    m_has_v_attr = false;
    m_v_attr.clear();
    
    m_has_limo_attr = false;
    m_limo_attr.clear();
    
    m_has_textboxrect_attr = false;
    m_textboxrect_attr.clear();
    
    m_has_s_fillok_attr = false;
    
    if (m_s_fillok_attr)
    {
        delete m_s_fillok_attr;
        m_s_fillok_attr = NULL;
    }
    
    
    m_has_s_strokeok_attr = false;
    
    if (m_s_strokeok_attr)
    {
        delete m_s_strokeok_attr;
        m_s_strokeok_attr = NULL;
    }
    
    
    m_has_s_shadowok_attr = false;
    
    if (m_s_shadowok_attr)
    {
        delete m_s_shadowok_attr;
        m_s_shadowok_attr = NULL;
    }
    
    
    m_has_s_arrowok_attr = false;
    
    if (m_s_arrowok_attr)
    {
        delete m_s_arrowok_attr;
        m_s_arrowok_attr = NULL;
    }
    
    
    m_has_s_gradientshapeok_attr = false;
    
    if (m_s_gradientshapeok_attr)
    {
        delete m_s_gradientshapeok_attr;
        m_s_gradientshapeok_attr = NULL;
    }
    
    
    m_has_s_textpathok_attr = false;
    
    if (m_s_textpathok_attr)
    {
        delete m_s_textpathok_attr;
        m_s_textpathok_attr = NULL;
    }
    
    
    m_has_s_insetpenok_attr = false;
    
    if (m_s_insetpenok_attr)
    {
        delete m_s_insetpenok_attr;
        m_s_insetpenok_attr = NULL;
    }
    
    
    m_has_o_connecttype_attr = false;
    
    if (m_o_connecttype_attr)
    {
        delete m_o_connecttype_attr;
        m_o_connecttype_attr = NULL;
    }
    
    
    m_has_connectlocs_attr = false;
    m_connectlocs_attr.clear();
    
    m_has_connectangles_attr = false;
    m_connectangles_attr.clear();
    
    m_has_s_extrusionok_attr = false;
    
    if (m_s_extrusionok_attr)
    {
        delete m_s_extrusionok_attr;
        m_s_extrusionok_attr = NULL;
    }
    
    }

    void CT_Path::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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
    
    
    if (m_has_v_attr)
    {
        _outStream << " " << "v" << "=\"" << m_v_attr << "\"";
    }
    
    
    if (m_has_limo_attr)
    {
        _outStream << " " << "limo" << "=\"" << m_limo_attr << "\"";
    }
    
    
    if (m_has_textboxrect_attr)
    {
        _outStream << " " << "textboxrect" << "=\"" << m_textboxrect_attr << "\"";
    }
    
    
    if (m_has_s_fillok_attr)
    {
        m_s_fillok_attr->toXmlAttr("fillok", _outStream);
    }
    
    
    if (m_has_s_strokeok_attr)
    {
        m_s_strokeok_attr->toXmlAttr("strokeok", _outStream);
    }
    
    
    if (m_has_s_shadowok_attr)
    {
        m_s_shadowok_attr->toXmlAttr("shadowok", _outStream);
    }
    
    
    if (m_has_s_arrowok_attr)
    {
        m_s_arrowok_attr->toXmlAttr("arrowok", _outStream);
    }
    
    
    if (m_has_s_gradientshapeok_attr)
    {
        m_s_gradientshapeok_attr->toXmlAttr("gradientshapeok", _outStream);
    }
    
    
    if (m_has_s_textpathok_attr)
    {
        m_s_textpathok_attr->toXmlAttr("textpathok", _outStream);
    }
    
    
    if (m_has_s_insetpenok_attr)
    {
        m_s_insetpenok_attr->toXmlAttr("insetpenok", _outStream);
    }
    
    
    if (m_has_o_connecttype_attr)
    {
        m_o_connecttype_attr->toXmlAttr("connecttype", _outStream);
    }
    
    
    if (m_has_connectlocs_attr)
    {
        _outStream << " " << "connectlocs" << "=\"" << m_connectlocs_attr << "\"";
    }
    
    
    if (m_has_connectangles_attr)
    {
        _outStream << " " << "connectangles" << "=\"" << m_connectangles_attr << "\"";
    }
    
    
    if (m_has_s_extrusionok_attr)
    {
        m_s_extrusionok_attr->toXmlAttr("extrusionok", _outStream);
    }
    
            _outStream << ">";
            
            _outStream << "</" << _elemName << ">";
                }

    const CT_Path& CT_Path::default_instance()
    {    
    if (!CT_Path::default_instance_)
    {
        CT_Path::default_instance_ = new CT_Path();
    }
    return *CT_Path::default_instance_;
    }

    bool CT_Path::has_id_attr() const
    {    
    return m_has_id_attr;
    }

    void CT_Path::set_id_attr(const XSD::string_& _id_attr)
    {    
    m_has_id_attr = true;
    m_id_attr = _id_attr;
    }

    const XSD::string_& CT_Path::get_id_attr() const
    {    
    return m_id_attr;
    }

    bool CT_Path::has_v_attr() const
    {    
    return m_has_v_attr;
    }

    void CT_Path::set_v_attr(const XSD::string_& _v_attr)
    {    
    m_has_v_attr = true;
    m_v_attr = _v_attr;
    }

    const XSD::string_& CT_Path::get_v_attr() const
    {    
    return m_v_attr;
    }

    bool CT_Path::has_limo_attr() const
    {    
    return m_has_limo_attr;
    }

    void CT_Path::set_limo_attr(const XSD::string_& _limo_attr)
    {    
    m_has_limo_attr = true;
    m_limo_attr = _limo_attr;
    }

    const XSD::string_& CT_Path::get_limo_attr() const
    {    
    return m_limo_attr;
    }

    bool CT_Path::has_textboxrect_attr() const
    {    
    return m_has_textboxrect_attr;
    }

    void CT_Path::set_textboxrect_attr(const XSD::string_& _textboxrect_attr)
    {    
    m_has_textboxrect_attr = true;
    m_textboxrect_attr = _textboxrect_attr;
    }

    const XSD::string_& CT_Path::get_textboxrect_attr() const
    {    
    return m_textboxrect_attr;
    }

    bool CT_Path::has_s_fillok_attr() const
    {    
    return m_has_s_fillok_attr;
    }

    void CT_Path::set_s_fillok_attr(const ns_s::ST_TrueFalse& _s_fillok_attr)
    {    
    m_has_s_fillok_attr = true;
    m_s_fillok_attr = new ns_s::ST_TrueFalse(_s_fillok_attr);
    }

    const ns_s::ST_TrueFalse& CT_Path::get_s_fillok_attr() const
    {    
    if (m_s_fillok_attr)
    {
        return *m_s_fillok_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
    }

    bool CT_Path::has_s_strokeok_attr() const
    {    
    return m_has_s_strokeok_attr;
    }

    void CT_Path::set_s_strokeok_attr(const ns_s::ST_TrueFalse& _s_strokeok_attr)
    {    
    m_has_s_strokeok_attr = true;
    m_s_strokeok_attr = new ns_s::ST_TrueFalse(_s_strokeok_attr);
    }

    const ns_s::ST_TrueFalse& CT_Path::get_s_strokeok_attr() const
    {    
    if (m_s_strokeok_attr)
    {
        return *m_s_strokeok_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
    }

    bool CT_Path::has_s_shadowok_attr() const
    {    
    return m_has_s_shadowok_attr;
    }

    void CT_Path::set_s_shadowok_attr(const ns_s::ST_TrueFalse& _s_shadowok_attr)
    {    
    m_has_s_shadowok_attr = true;
    m_s_shadowok_attr = new ns_s::ST_TrueFalse(_s_shadowok_attr);
    }

    const ns_s::ST_TrueFalse& CT_Path::get_s_shadowok_attr() const
    {    
    if (m_s_shadowok_attr)
    {
        return *m_s_shadowok_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
    }

    bool CT_Path::has_s_arrowok_attr() const
    {    
    return m_has_s_arrowok_attr;
    }

    void CT_Path::set_s_arrowok_attr(const ns_s::ST_TrueFalse& _s_arrowok_attr)
    {    
    m_has_s_arrowok_attr = true;
    m_s_arrowok_attr = new ns_s::ST_TrueFalse(_s_arrowok_attr);
    }

    const ns_s::ST_TrueFalse& CT_Path::get_s_arrowok_attr() const
    {    
    if (m_s_arrowok_attr)
    {
        return *m_s_arrowok_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
    }

    bool CT_Path::has_s_gradientshapeok_attr() const
    {    
    return m_has_s_gradientshapeok_attr;
    }

    void CT_Path::set_s_gradientshapeok_attr(const ns_s::ST_TrueFalse& _s_gradientshapeok_attr)
    {    
    m_has_s_gradientshapeok_attr = true;
    m_s_gradientshapeok_attr = new ns_s::ST_TrueFalse(_s_gradientshapeok_attr);
    }

    const ns_s::ST_TrueFalse& CT_Path::get_s_gradientshapeok_attr() const
    {    
    if (m_s_gradientshapeok_attr)
    {
        return *m_s_gradientshapeok_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
    }

    bool CT_Path::has_s_textpathok_attr() const
    {    
    return m_has_s_textpathok_attr;
    }

    void CT_Path::set_s_textpathok_attr(const ns_s::ST_TrueFalse& _s_textpathok_attr)
    {    
    m_has_s_textpathok_attr = true;
    m_s_textpathok_attr = new ns_s::ST_TrueFalse(_s_textpathok_attr);
    }

    const ns_s::ST_TrueFalse& CT_Path::get_s_textpathok_attr() const
    {    
    if (m_s_textpathok_attr)
    {
        return *m_s_textpathok_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
    }

    bool CT_Path::has_s_insetpenok_attr() const
    {    
    return m_has_s_insetpenok_attr;
    }

    void CT_Path::set_s_insetpenok_attr(const ns_s::ST_TrueFalse& _s_insetpenok_attr)
    {    
    m_has_s_insetpenok_attr = true;
    m_s_insetpenok_attr = new ns_s::ST_TrueFalse(_s_insetpenok_attr);
    }

    const ns_s::ST_TrueFalse& CT_Path::get_s_insetpenok_attr() const
    {    
    if (m_s_insetpenok_attr)
    {
        return *m_s_insetpenok_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
    }

    bool CT_Path::has_o_connecttype_attr() const
    {    
    return m_has_o_connecttype_attr;
    }

    void CT_Path::set_o_connecttype_attr(const ns_o::ST_ConnectType& _o_connecttype_attr)
    {    
    m_has_o_connecttype_attr = true;
    m_o_connecttype_attr = new ns_o::ST_ConnectType(_o_connecttype_attr);
    }

    const ns_o::ST_ConnectType& CT_Path::get_o_connecttype_attr() const
    {    
    if (m_o_connecttype_attr)
    {
        return *m_o_connecttype_attr;
    }
    return ns_o::ST_ConnectType::default_instance();
    }

    bool CT_Path::has_connectlocs_attr() const
    {    
    return m_has_connectlocs_attr;
    }

    void CT_Path::set_connectlocs_attr(const XSD::string_& _connectlocs_attr)
    {    
    m_has_connectlocs_attr = true;
    m_connectlocs_attr = _connectlocs_attr;
    }

    const XSD::string_& CT_Path::get_connectlocs_attr() const
    {    
    return m_connectlocs_attr;
    }

    bool CT_Path::has_connectangles_attr() const
    {    
    return m_has_connectangles_attr;
    }

    void CT_Path::set_connectangles_attr(const XSD::string_& _connectangles_attr)
    {    
    m_has_connectangles_attr = true;
    m_connectangles_attr = _connectangles_attr;
    }

    const XSD::string_& CT_Path::get_connectangles_attr() const
    {    
    return m_connectangles_attr;
    }

    bool CT_Path::has_s_extrusionok_attr() const
    {    
    return m_has_s_extrusionok_attr;
    }

    void CT_Path::set_s_extrusionok_attr(const ns_s::ST_TrueFalse& _s_extrusionok_attr)
    {    
    m_has_s_extrusionok_attr = true;
    m_s_extrusionok_attr = new ns_s::ST_TrueFalse(_s_extrusionok_attr);
    }

    const ns_s::ST_TrueFalse& CT_Path::get_s_extrusionok_attr() const
    {    
    if (m_s_extrusionok_attr)
    {
        return *m_s_extrusionok_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
    }


    // CT_Shadow
    void CT_Shadow::clear()
    {    
    m_has_id_attr = false;
    m_id_attr.clear();
    
    m_has_s_on_attr = false;
    
    if (m_s_on_attr)
    {
        delete m_s_on_attr;
        m_s_on_attr = NULL;
    }
    
    
    m_has_type_attr = false;
    
    if (m_type_attr)
    {
        delete m_type_attr;
        m_type_attr = NULL;
    }
    
    
    m_has_s_obscured_attr = false;
    
    if (m_s_obscured_attr)
    {
        delete m_s_obscured_attr;
        m_s_obscured_attr = NULL;
    }
    
    
    m_has_s_color_attr = false;
    
    if (m_s_color_attr)
    {
        delete m_s_color_attr;
        m_s_color_attr = NULL;
    }
    
    
    m_has_opacity_attr = false;
    m_opacity_attr.clear();
    
    m_has_offset_attr = false;
    m_offset_attr.clear();
    
    m_has_s_color2_attr = false;
    
    if (m_s_color2_attr)
    {
        delete m_s_color2_attr;
        m_s_color2_attr = NULL;
    }
    
    
    m_has_offset2_attr = false;
    m_offset2_attr.clear();
    
    m_has_origin_attr = false;
    m_origin_attr.clear();
    
    m_has_matrix_attr = false;
    m_matrix_attr.clear();
    }

    void CT_Shadow::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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
    
    
    if (m_has_s_on_attr)
    {
        m_s_on_attr->toXmlAttr("on", _outStream);
    }
    
    
    if (m_has_type_attr)
    {
        m_type_attr->toXmlAttr("type", _outStream);
    }
    
    
    if (m_has_s_obscured_attr)
    {
        m_s_obscured_attr->toXmlAttr("obscured", _outStream);
    }
    
    
    if (m_has_s_color_attr)
    {
        m_s_color_attr->toXmlAttr("color", _outStream);
    }
    
    
    if (m_has_opacity_attr)
    {
        _outStream << " " << "opacity" << "=\"" << m_opacity_attr << "\"";
    }
    
    
    if (m_has_offset_attr)
    {
        _outStream << " " << "offset" << "=\"" << m_offset_attr << "\"";
    }
    
    
    if (m_has_s_color2_attr)
    {
        m_s_color2_attr->toXmlAttr("color2", _outStream);
    }
    
    
    if (m_has_offset2_attr)
    {
        _outStream << " " << "offset2" << "=\"" << m_offset2_attr << "\"";
    }
    
    
    if (m_has_origin_attr)
    {
        _outStream << " " << "origin" << "=\"" << m_origin_attr << "\"";
    }
    
    
    if (m_has_matrix_attr)
    {
        _outStream << " " << "matrix" << "=\"" << m_matrix_attr << "\"";
    }
    
            _outStream << ">";
            
            _outStream << "</" << _elemName << ">";
                }

    const CT_Shadow& CT_Shadow::default_instance()
    {    
    if (!CT_Shadow::default_instance_)
    {
        CT_Shadow::default_instance_ = new CT_Shadow();
    }
    return *CT_Shadow::default_instance_;
    }

    bool CT_Shadow::has_id_attr() const
    {    
    return m_has_id_attr;
    }

    void CT_Shadow::set_id_attr(const XSD::string_& _id_attr)
    {    
    m_has_id_attr = true;
    m_id_attr = _id_attr;
    }

    const XSD::string_& CT_Shadow::get_id_attr() const
    {    
    return m_id_attr;
    }

    bool CT_Shadow::has_s_on_attr() const
    {    
    return m_has_s_on_attr;
    }

    void CT_Shadow::set_s_on_attr(const ns_s::ST_TrueFalse& _s_on_attr)
    {    
    m_has_s_on_attr = true;
    m_s_on_attr = new ns_s::ST_TrueFalse(_s_on_attr);
    }

    const ns_s::ST_TrueFalse& CT_Shadow::get_s_on_attr() const
    {    
    if (m_s_on_attr)
    {
        return *m_s_on_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
    }

    bool CT_Shadow::has_type_attr() const
    {    
    return m_has_type_attr;
    }

    void CT_Shadow::set_type_attr(const ST_ShadowType& _type_attr)
    {    
    m_has_type_attr = true;
    m_type_attr = new ST_ShadowType(_type_attr);
    }

    const ST_ShadowType& CT_Shadow::get_type_attr() const
    {    
    if (m_type_attr)
    {
        return *m_type_attr;
    }
    return ST_ShadowType::default_instance();
    }

    bool CT_Shadow::has_s_obscured_attr() const
    {    
    return m_has_s_obscured_attr;
    }

    void CT_Shadow::set_s_obscured_attr(const ns_s::ST_TrueFalse& _s_obscured_attr)
    {    
    m_has_s_obscured_attr = true;
    m_s_obscured_attr = new ns_s::ST_TrueFalse(_s_obscured_attr);
    }

    const ns_s::ST_TrueFalse& CT_Shadow::get_s_obscured_attr() const
    {    
    if (m_s_obscured_attr)
    {
        return *m_s_obscured_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
    }

    bool CT_Shadow::has_s_color_attr() const
    {    
    return m_has_s_color_attr;
    }

    void CT_Shadow::set_s_color_attr(const ns_s::ST_ColorType& _s_color_attr)
    {    
    m_has_s_color_attr = true;
    m_s_color_attr = new ns_s::ST_ColorType(_s_color_attr);
    }

    const ns_s::ST_ColorType& CT_Shadow::get_s_color_attr() const
    {    
    if (m_s_color_attr)
    {
        return *m_s_color_attr;
    }
    return ns_s::ST_ColorType::default_instance();
    }

    bool CT_Shadow::has_opacity_attr() const
    {    
    return m_has_opacity_attr;
    }

    void CT_Shadow::set_opacity_attr(const XSD::string_& _opacity_attr)
    {    
    m_has_opacity_attr = true;
    m_opacity_attr = _opacity_attr;
    }

    const XSD::string_& CT_Shadow::get_opacity_attr() const
    {    
    return m_opacity_attr;
    }

    bool CT_Shadow::has_offset_attr() const
    {    
    return m_has_offset_attr;
    }

    void CT_Shadow::set_offset_attr(const XSD::string_& _offset_attr)
    {    
    m_has_offset_attr = true;
    m_offset_attr = _offset_attr;
    }

    const XSD::string_& CT_Shadow::get_offset_attr() const
    {    
    return m_offset_attr;
    }

    bool CT_Shadow::has_s_color2_attr() const
    {    
    return m_has_s_color2_attr;
    }

    void CT_Shadow::set_s_color2_attr(const ns_s::ST_ColorType& _s_color2_attr)
    {    
    m_has_s_color2_attr = true;
    m_s_color2_attr = new ns_s::ST_ColorType(_s_color2_attr);
    }

    const ns_s::ST_ColorType& CT_Shadow::get_s_color2_attr() const
    {    
    if (m_s_color2_attr)
    {
        return *m_s_color2_attr;
    }
    return ns_s::ST_ColorType::default_instance();
    }

    bool CT_Shadow::has_offset2_attr() const
    {    
    return m_has_offset2_attr;
    }

    void CT_Shadow::set_offset2_attr(const XSD::string_& _offset2_attr)
    {    
    m_has_offset2_attr = true;
    m_offset2_attr = _offset2_attr;
    }

    const XSD::string_& CT_Shadow::get_offset2_attr() const
    {    
    return m_offset2_attr;
    }

    bool CT_Shadow::has_origin_attr() const
    {    
    return m_has_origin_attr;
    }

    void CT_Shadow::set_origin_attr(const XSD::string_& _origin_attr)
    {    
    m_has_origin_attr = true;
    m_origin_attr = _origin_attr;
    }

    const XSD::string_& CT_Shadow::get_origin_attr() const
    {    
    return m_origin_attr;
    }

    bool CT_Shadow::has_matrix_attr() const
    {    
    return m_has_matrix_attr;
    }

    void CT_Shadow::set_matrix_attr(const XSD::string_& _matrix_attr)
    {    
    m_has_matrix_attr = true;
    m_matrix_attr = _matrix_attr;
    }

    const XSD::string_& CT_Shadow::get_matrix_attr() const
    {    
    return m_matrix_attr;
    }


    // CT_Stroke
    bool CT_Stroke::has_o_left() const
    {    
    return m_has_o_left;
    }

    ns_o::CT_StrokeChild* CT_Stroke::mutable_o_left()
    {    
    m_has_o_left = true;
    if (!m_o_left)
    {
        m_o_left = new ns_o::CT_StrokeChild();
    }
    return m_o_left;
    }

    const ns_o::CT_StrokeChild& CT_Stroke::get_o_left() const
    {    
    if (m_o_left)
    {
        return *m_o_left;
    }
    return ns_o::CT_StrokeChild::default_instance();
    }

    bool CT_Stroke::has_o_top() const
    {    
    return m_has_o_top;
    }

    ns_o::CT_StrokeChild* CT_Stroke::mutable_o_top()
    {    
    m_has_o_top = true;
    if (!m_o_top)
    {
        m_o_top = new ns_o::CT_StrokeChild();
    }
    return m_o_top;
    }

    const ns_o::CT_StrokeChild& CT_Stroke::get_o_top() const
    {    
    if (m_o_top)
    {
        return *m_o_top;
    }
    return ns_o::CT_StrokeChild::default_instance();
    }

    bool CT_Stroke::has_o_right() const
    {    
    return m_has_o_right;
    }

    ns_o::CT_StrokeChild* CT_Stroke::mutable_o_right()
    {    
    m_has_o_right = true;
    if (!m_o_right)
    {
        m_o_right = new ns_o::CT_StrokeChild();
    }
    return m_o_right;
    }

    const ns_o::CT_StrokeChild& CT_Stroke::get_o_right() const
    {    
    if (m_o_right)
    {
        return *m_o_right;
    }
    return ns_o::CT_StrokeChild::default_instance();
    }

    bool CT_Stroke::has_o_bottom() const
    {    
    return m_has_o_bottom;
    }

    ns_o::CT_StrokeChild* CT_Stroke::mutable_o_bottom()
    {    
    m_has_o_bottom = true;
    if (!m_o_bottom)
    {
        m_o_bottom = new ns_o::CT_StrokeChild();
    }
    return m_o_bottom;
    }

    const ns_o::CT_StrokeChild& CT_Stroke::get_o_bottom() const
    {    
    if (m_o_bottom)
    {
        return *m_o_bottom;
    }
    return ns_o::CT_StrokeChild::default_instance();
    }

    bool CT_Stroke::has_o_column() const
    {    
    return m_has_o_column;
    }

    ns_o::CT_StrokeChild* CT_Stroke::mutable_o_column()
    {    
    m_has_o_column = true;
    if (!m_o_column)
    {
        m_o_column = new ns_o::CT_StrokeChild();
    }
    return m_o_column;
    }

    const ns_o::CT_StrokeChild& CT_Stroke::get_o_column() const
    {    
    if (m_o_column)
    {
        return *m_o_column;
    }
    return ns_o::CT_StrokeChild::default_instance();
    }

    void CT_Stroke::clear()
    {    
    m_has_id_attr = false;
    m_id_attr.clear();
    
    m_has_s_on_attr = false;
    
    if (m_s_on_attr)
    {
        delete m_s_on_attr;
        m_s_on_attr = NULL;
    }
    
    
    m_has_weight_attr = false;
    m_weight_attr.clear();
    
    m_has_s_color_attr = false;
    
    if (m_s_color_attr)
    {
        delete m_s_color_attr;
        m_s_color_attr = NULL;
    }
    
    
    m_has_opacity_attr = false;
    m_opacity_attr.clear();
    
    m_has_linestyle_attr = false;
    
    if (m_linestyle_attr)
    {
        delete m_linestyle_attr;
        m_linestyle_attr = NULL;
    }
    
    
    m_has_miterlimit_attr = false;
    m_miterlimit_attr = 0;
    
    m_has_joinstyle_attr = false;
    
    if (m_joinstyle_attr)
    {
        delete m_joinstyle_attr;
        m_joinstyle_attr = NULL;
    }
    
    
    m_has_endcap_attr = false;
    
    if (m_endcap_attr)
    {
        delete m_endcap_attr;
        m_endcap_attr = NULL;
    }
    
    
    m_has_dashstyle_attr = false;
    m_dashstyle_attr.clear();
    
    m_has_filltype_attr = false;
    
    if (m_filltype_attr)
    {
        delete m_filltype_attr;
        m_filltype_attr = NULL;
    }
    
    
    m_has_src_attr = false;
    m_src_attr.clear();
    
    m_has_imageaspect_attr = false;
    
    if (m_imageaspect_attr)
    {
        delete m_imageaspect_attr;
        m_imageaspect_attr = NULL;
    }
    
    
    m_has_imagesize_attr = false;
    m_imagesize_attr.clear();
    
    m_has_s_imagealignshape_attr = false;
    
    if (m_s_imagealignshape_attr)
    {
        delete m_s_imagealignshape_attr;
        m_s_imagealignshape_attr = NULL;
    }
    
    
    m_has_s_color2_attr = false;
    
    if (m_s_color2_attr)
    {
        delete m_s_color2_attr;
        m_s_color2_attr = NULL;
    }
    
    
    m_has_startarrow_attr = false;
    
    if (m_startarrow_attr)
    {
        delete m_startarrow_attr;
        m_startarrow_attr = NULL;
    }
    
    
    m_has_startarrowwidth_attr = false;
    
    if (m_startarrowwidth_attr)
    {
        delete m_startarrowwidth_attr;
        m_startarrowwidth_attr = NULL;
    }
    
    
    m_has_startarrowlength_attr = false;
    
    if (m_startarrowlength_attr)
    {
        delete m_startarrowlength_attr;
        m_startarrowlength_attr = NULL;
    }
    
    
    m_has_endarrow_attr = false;
    
    if (m_endarrow_attr)
    {
        delete m_endarrow_attr;
        m_endarrow_attr = NULL;
    }
    
    
    m_has_endarrowwidth_attr = false;
    
    if (m_endarrowwidth_attr)
    {
        delete m_endarrowwidth_attr;
        m_endarrowwidth_attr = NULL;
    }
    
    
    m_has_endarrowlength_attr = false;
    
    if (m_endarrowlength_attr)
    {
        delete m_endarrowlength_attr;
        m_endarrowlength_attr = NULL;
    }
    
    
    m_has_href_attr = false;
    m_href_attr.clear();
    
    m_has_althref_attr = false;
    m_althref_attr.clear();
    
    m_has_title_attr = false;
    m_title_attr.clear();
    
    m_has_s_forcedash_attr = false;
    
    if (m_s_forcedash_attr)
    {
        delete m_s_forcedash_attr;
        m_s_forcedash_attr = NULL;
    }
    
    
    m_has_r_id_attr = false;
    
    if (m_r_id_attr)
    {
        delete m_r_id_attr;
        m_r_id_attr = NULL;
    }
    
    
    m_has_s_insetpen_attr = false;
    
    if (m_s_insetpen_attr)
    {
        delete m_s_insetpen_attr;
        m_s_insetpen_attr = NULL;
    }
    
    
    m_has_r_relid_attr = false;
    
    if (m_r_relid_attr)
    {
        delete m_r_relid_attr;
        m_r_relid_attr = NULL;
    }
    
    
    m_has_o_left = false;
    
    if (m_o_left)
    {
        delete m_o_left;
        m_o_left = NULL;
    }
    
    
    m_has_o_top = false;
    
    if (m_o_top)
    {
        delete m_o_top;
        m_o_top = NULL;
    }
    
    
    m_has_o_right = false;
    
    if (m_o_right)
    {
        delete m_o_right;
        m_o_right = NULL;
    }
    
    
    m_has_o_bottom = false;
    
    if (m_o_bottom)
    {
        delete m_o_bottom;
        m_o_bottom = NULL;
    }
    
    
    m_has_o_column = false;
    
    if (m_o_column)
    {
        delete m_o_column;
        m_o_column = NULL;
    }
    
    }

    void CT_Stroke::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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
    
    
    if (m_has_s_on_attr)
    {
        m_s_on_attr->toXmlAttr("on", _outStream);
    }
    
    
    if (m_has_weight_attr)
    {
        _outStream << " " << "weight" << "=\"" << m_weight_attr << "\"";
    }
    
    
    if (m_has_s_color_attr)
    {
        m_s_color_attr->toXmlAttr("color", _outStream);
    }
    
    
    if (m_has_opacity_attr)
    {
        _outStream << " " << "opacity" << "=\"" << m_opacity_attr << "\"";
    }
    
    
    if (m_has_linestyle_attr)
    {
        m_linestyle_attr->toXmlAttr("linestyle", _outStream);
    }
    
    
    if (m_has_miterlimit_attr)
    {
        _outStream << " " << "miterlimit" << "=\"" << m_miterlimit_attr << "\"";
    }
    
    
    if (m_has_joinstyle_attr)
    {
        m_joinstyle_attr->toXmlAttr("joinstyle", _outStream);
    }
    
    
    if (m_has_endcap_attr)
    {
        m_endcap_attr->toXmlAttr("endcap", _outStream);
    }
    
    
    if (m_has_dashstyle_attr)
    {
        _outStream << " " << "dashstyle" << "=\"" << m_dashstyle_attr << "\"";
    }
    
    
    if (m_has_filltype_attr)
    {
        m_filltype_attr->toXmlAttr("filltype", _outStream);
    }
    
    
    if (m_has_src_attr)
    {
        _outStream << " " << "src" << "=\"" << m_src_attr << "\"";
    }
    
    
    if (m_has_imageaspect_attr)
    {
        m_imageaspect_attr->toXmlAttr("imageaspect", _outStream);
    }
    
    
    if (m_has_imagesize_attr)
    {
        _outStream << " " << "imagesize" << "=\"" << m_imagesize_attr << "\"";
    }
    
    
    if (m_has_s_imagealignshape_attr)
    {
        m_s_imagealignshape_attr->toXmlAttr("imagealignshape", _outStream);
    }
    
    
    if (m_has_s_color2_attr)
    {
        m_s_color2_attr->toXmlAttr("color2", _outStream);
    }
    
    
    if (m_has_startarrow_attr)
    {
        m_startarrow_attr->toXmlAttr("startarrow", _outStream);
    }
    
    
    if (m_has_startarrowwidth_attr)
    {
        m_startarrowwidth_attr->toXmlAttr("startarrowwidth", _outStream);
    }
    
    
    if (m_has_startarrowlength_attr)
    {
        m_startarrowlength_attr->toXmlAttr("startarrowlength", _outStream);
    }
    
    
    if (m_has_endarrow_attr)
    {
        m_endarrow_attr->toXmlAttr("endarrow", _outStream);
    }
    
    
    if (m_has_endarrowwidth_attr)
    {
        m_endarrowwidth_attr->toXmlAttr("endarrowwidth", _outStream);
    }
    
    
    if (m_has_endarrowlength_attr)
    {
        m_endarrowlength_attr->toXmlAttr("endarrowlength", _outStream);
    }
    
    
    if (m_has_href_attr)
    {
        _outStream << " " << "href" << "=\"" << m_href_attr << "\"";
    }
    
    
    if (m_has_althref_attr)
    {
        _outStream << " " << "althref" << "=\"" << m_althref_attr << "\"";
    }
    
    
    if (m_has_title_attr)
    {
        _outStream << " " << "title" << "=\"" << m_title_attr << "\"";
    }
    
    
    if (m_has_s_forcedash_attr)
    {
        m_s_forcedash_attr->toXmlAttr("forcedash", _outStream);
    }
    
    
    if (m_has_r_id_attr)
    {
        m_r_id_attr->toXmlAttr("id", _outStream);
    }
    
    
    if (m_has_s_insetpen_attr)
    {
        m_s_insetpen_attr->toXmlAttr("insetpen", _outStream);
    }
    
    
    if (m_has_r_relid_attr)
    {
        m_r_relid_attr->toXmlAttr("relid", _outStream);
    }
    
            _outStream << ">";
            
    if (m_has_o_left)
    {
        m_o_left->toXmlElem("v:left", "", _outStream);;
    }
    
    if (m_has_o_top)
    {
        m_o_top->toXmlElem("v:top", "", _outStream);;
    }
    
    if (m_has_o_right)
    {
        m_o_right->toXmlElem("v:right", "", _outStream);;
    }
    
    if (m_has_o_bottom)
    {
        m_o_bottom->toXmlElem("v:bottom", "", _outStream);;
    }
    
    if (m_has_o_column)
    {
        m_o_column->toXmlElem("v:column", "", _outStream);;
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_Stroke& CT_Stroke::default_instance()
    {    
    if (!CT_Stroke::default_instance_)
    {
        CT_Stroke::default_instance_ = new CT_Stroke();
    }
    return *CT_Stroke::default_instance_;
    }

    bool CT_Stroke::has_id_attr() const
    {    
    return m_has_id_attr;
    }

    void CT_Stroke::set_id_attr(const XSD::string_& _id_attr)
    {    
    m_has_id_attr = true;
    m_id_attr = _id_attr;
    }

    const XSD::string_& CT_Stroke::get_id_attr() const
    {    
    return m_id_attr;
    }

    bool CT_Stroke::has_s_on_attr() const
    {    
    return m_has_s_on_attr;
    }

    void CT_Stroke::set_s_on_attr(const ns_s::ST_TrueFalse& _s_on_attr)
    {    
    m_has_s_on_attr = true;
    m_s_on_attr = new ns_s::ST_TrueFalse(_s_on_attr);
    }

    const ns_s::ST_TrueFalse& CT_Stroke::get_s_on_attr() const
    {    
    if (m_s_on_attr)
    {
        return *m_s_on_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
    }

    bool CT_Stroke::has_weight_attr() const
    {    
    return m_has_weight_attr;
    }

    void CT_Stroke::set_weight_attr(const XSD::string_& _weight_attr)
    {    
    m_has_weight_attr = true;
    m_weight_attr = _weight_attr;
    }

    const XSD::string_& CT_Stroke::get_weight_attr() const
    {    
    return m_weight_attr;
    }

    bool CT_Stroke::has_s_color_attr() const
    {    
    return m_has_s_color_attr;
    }

    void CT_Stroke::set_s_color_attr(const ns_s::ST_ColorType& _s_color_attr)
    {    
    m_has_s_color_attr = true;
    m_s_color_attr = new ns_s::ST_ColorType(_s_color_attr);
    }

    const ns_s::ST_ColorType& CT_Stroke::get_s_color_attr() const
    {    
    if (m_s_color_attr)
    {
        return *m_s_color_attr;
    }
    return ns_s::ST_ColorType::default_instance();
    }

    bool CT_Stroke::has_opacity_attr() const
    {    
    return m_has_opacity_attr;
    }

    void CT_Stroke::set_opacity_attr(const XSD::string_& _opacity_attr)
    {    
    m_has_opacity_attr = true;
    m_opacity_attr = _opacity_attr;
    }

    const XSD::string_& CT_Stroke::get_opacity_attr() const
    {    
    return m_opacity_attr;
    }

    bool CT_Stroke::has_linestyle_attr() const
    {    
    return m_has_linestyle_attr;
    }

    void CT_Stroke::set_linestyle_attr(const ST_StrokeLineStyle& _linestyle_attr)
    {    
    m_has_linestyle_attr = true;
    m_linestyle_attr = new ST_StrokeLineStyle(_linestyle_attr);
    }

    const ST_StrokeLineStyle& CT_Stroke::get_linestyle_attr() const
    {    
    if (m_linestyle_attr)
    {
        return *m_linestyle_attr;
    }
    return ST_StrokeLineStyle::default_instance();
    }

    bool CT_Stroke::has_miterlimit_attr() const
    {    
    return m_has_miterlimit_attr;
    }

    void CT_Stroke::set_miterlimit_attr(const XSD::decimal_& _miterlimit_attr)
    {    
    m_has_miterlimit_attr = true;
    m_miterlimit_attr = _miterlimit_attr;
    }

    const XSD::decimal_& CT_Stroke::get_miterlimit_attr() const
    {    
    return m_miterlimit_attr;
    }

    bool CT_Stroke::has_joinstyle_attr() const
    {    
    return m_has_joinstyle_attr;
    }

    void CT_Stroke::set_joinstyle_attr(const ST_StrokeJoinStyle& _joinstyle_attr)
    {    
    m_has_joinstyle_attr = true;
    m_joinstyle_attr = new ST_StrokeJoinStyle(_joinstyle_attr);
    }

    const ST_StrokeJoinStyle& CT_Stroke::get_joinstyle_attr() const
    {    
    if (m_joinstyle_attr)
    {
        return *m_joinstyle_attr;
    }
    return ST_StrokeJoinStyle::default_instance();
    }

    bool CT_Stroke::has_endcap_attr() const
    {    
    return m_has_endcap_attr;
    }

    void CT_Stroke::set_endcap_attr(const ST_StrokeEndCap& _endcap_attr)
    {    
    m_has_endcap_attr = true;
    m_endcap_attr = new ST_StrokeEndCap(_endcap_attr);
    }

    const ST_StrokeEndCap& CT_Stroke::get_endcap_attr() const
    {    
    if (m_endcap_attr)
    {
        return *m_endcap_attr;
    }
    return ST_StrokeEndCap::default_instance();
    }

    bool CT_Stroke::has_dashstyle_attr() const
    {    
    return m_has_dashstyle_attr;
    }

    void CT_Stroke::set_dashstyle_attr(const XSD::string_& _dashstyle_attr)
    {    
    m_has_dashstyle_attr = true;
    m_dashstyle_attr = _dashstyle_attr;
    }

    const XSD::string_& CT_Stroke::get_dashstyle_attr() const
    {    
    return m_dashstyle_attr;
    }

    bool CT_Stroke::has_filltype_attr() const
    {    
    return m_has_filltype_attr;
    }

    void CT_Stroke::set_filltype_attr(const ST_FillType& _filltype_attr)
    {    
    m_has_filltype_attr = true;
    m_filltype_attr = new ST_FillType(_filltype_attr);
    }

    const ST_FillType& CT_Stroke::get_filltype_attr() const
    {    
    if (m_filltype_attr)
    {
        return *m_filltype_attr;
    }
    return ST_FillType::default_instance();
    }

    bool CT_Stroke::has_src_attr() const
    {    
    return m_has_src_attr;
    }

    void CT_Stroke::set_src_attr(const XSD::string_& _src_attr)
    {    
    m_has_src_attr = true;
    m_src_attr = _src_attr;
    }

    const XSD::string_& CT_Stroke::get_src_attr() const
    {    
    return m_src_attr;
    }

    bool CT_Stroke::has_imageaspect_attr() const
    {    
    return m_has_imageaspect_attr;
    }

    void CT_Stroke::set_imageaspect_attr(const ST_ImageAspect& _imageaspect_attr)
    {    
    m_has_imageaspect_attr = true;
    m_imageaspect_attr = new ST_ImageAspect(_imageaspect_attr);
    }

    const ST_ImageAspect& CT_Stroke::get_imageaspect_attr() const
    {    
    if (m_imageaspect_attr)
    {
        return *m_imageaspect_attr;
    }
    return ST_ImageAspect::default_instance();
    }

    bool CT_Stroke::has_imagesize_attr() const
    {    
    return m_has_imagesize_attr;
    }

    void CT_Stroke::set_imagesize_attr(const XSD::string_& _imagesize_attr)
    {    
    m_has_imagesize_attr = true;
    m_imagesize_attr = _imagesize_attr;
    }

    const XSD::string_& CT_Stroke::get_imagesize_attr() const
    {    
    return m_imagesize_attr;
    }

    bool CT_Stroke::has_s_imagealignshape_attr() const
    {    
    return m_has_s_imagealignshape_attr;
    }

    void CT_Stroke::set_s_imagealignshape_attr(const ns_s::ST_TrueFalse& _s_imagealignshape_attr)
    {    
    m_has_s_imagealignshape_attr = true;
    m_s_imagealignshape_attr = new ns_s::ST_TrueFalse(_s_imagealignshape_attr);
    }

    const ns_s::ST_TrueFalse& CT_Stroke::get_s_imagealignshape_attr() const
    {    
    if (m_s_imagealignshape_attr)
    {
        return *m_s_imagealignshape_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
    }

    bool CT_Stroke::has_s_color2_attr() const
    {    
    return m_has_s_color2_attr;
    }

    void CT_Stroke::set_s_color2_attr(const ns_s::ST_ColorType& _s_color2_attr)
    {    
    m_has_s_color2_attr = true;
    m_s_color2_attr = new ns_s::ST_ColorType(_s_color2_attr);
    }

    const ns_s::ST_ColorType& CT_Stroke::get_s_color2_attr() const
    {    
    if (m_s_color2_attr)
    {
        return *m_s_color2_attr;
    }
    return ns_s::ST_ColorType::default_instance();
    }

    bool CT_Stroke::has_startarrow_attr() const
    {    
    return m_has_startarrow_attr;
    }

    void CT_Stroke::set_startarrow_attr(const ST_StrokeArrowType& _startarrow_attr)
    {    
    m_has_startarrow_attr = true;
    m_startarrow_attr = new ST_StrokeArrowType(_startarrow_attr);
    }

    const ST_StrokeArrowType& CT_Stroke::get_startarrow_attr() const
    {    
    if (m_startarrow_attr)
    {
        return *m_startarrow_attr;
    }
    return ST_StrokeArrowType::default_instance();
    }

    bool CT_Stroke::has_startarrowwidth_attr() const
    {    
    return m_has_startarrowwidth_attr;
    }

    void CT_Stroke::set_startarrowwidth_attr(const ST_StrokeArrowWidth& _startarrowwidth_attr)
    {    
    m_has_startarrowwidth_attr = true;
    m_startarrowwidth_attr = new ST_StrokeArrowWidth(_startarrowwidth_attr);
    }

    const ST_StrokeArrowWidth& CT_Stroke::get_startarrowwidth_attr() const
    {    
    if (m_startarrowwidth_attr)
    {
        return *m_startarrowwidth_attr;
    }
    return ST_StrokeArrowWidth::default_instance();
    }

    bool CT_Stroke::has_startarrowlength_attr() const
    {    
    return m_has_startarrowlength_attr;
    }

    void CT_Stroke::set_startarrowlength_attr(const ST_StrokeArrowLength& _startarrowlength_attr)
    {    
    m_has_startarrowlength_attr = true;
    m_startarrowlength_attr = new ST_StrokeArrowLength(_startarrowlength_attr);
    }

    const ST_StrokeArrowLength& CT_Stroke::get_startarrowlength_attr() const
    {    
    if (m_startarrowlength_attr)
    {
        return *m_startarrowlength_attr;
    }
    return ST_StrokeArrowLength::default_instance();
    }

    bool CT_Stroke::has_endarrow_attr() const
    {    
    return m_has_endarrow_attr;
    }

    void CT_Stroke::set_endarrow_attr(const ST_StrokeArrowType& _endarrow_attr)
    {    
    m_has_endarrow_attr = true;
    m_endarrow_attr = new ST_StrokeArrowType(_endarrow_attr);
    }

    const ST_StrokeArrowType& CT_Stroke::get_endarrow_attr() const
    {    
    if (m_endarrow_attr)
    {
        return *m_endarrow_attr;
    }
    return ST_StrokeArrowType::default_instance();
    }

    bool CT_Stroke::has_endarrowwidth_attr() const
    {    
    return m_has_endarrowwidth_attr;
    }

    void CT_Stroke::set_endarrowwidth_attr(const ST_StrokeArrowWidth& _endarrowwidth_attr)
    {    
    m_has_endarrowwidth_attr = true;
    m_endarrowwidth_attr = new ST_StrokeArrowWidth(_endarrowwidth_attr);
    }

    const ST_StrokeArrowWidth& CT_Stroke::get_endarrowwidth_attr() const
    {    
    if (m_endarrowwidth_attr)
    {
        return *m_endarrowwidth_attr;
    }
    return ST_StrokeArrowWidth::default_instance();
    }

    bool CT_Stroke::has_endarrowlength_attr() const
    {    
    return m_has_endarrowlength_attr;
    }

    void CT_Stroke::set_endarrowlength_attr(const ST_StrokeArrowLength& _endarrowlength_attr)
    {    
    m_has_endarrowlength_attr = true;
    m_endarrowlength_attr = new ST_StrokeArrowLength(_endarrowlength_attr);
    }

    const ST_StrokeArrowLength& CT_Stroke::get_endarrowlength_attr() const
    {    
    if (m_endarrowlength_attr)
    {
        return *m_endarrowlength_attr;
    }
    return ST_StrokeArrowLength::default_instance();
    }

    bool CT_Stroke::has_href_attr() const
    {    
    return m_has_href_attr;
    }

    void CT_Stroke::set_href_attr(const XSD::string_& _href_attr)
    {    
    m_has_href_attr = true;
    m_href_attr = _href_attr;
    }

    const XSD::string_& CT_Stroke::get_href_attr() const
    {    
    return m_href_attr;
    }

    bool CT_Stroke::has_althref_attr() const
    {    
    return m_has_althref_attr;
    }

    void CT_Stroke::set_althref_attr(const XSD::string_& _althref_attr)
    {    
    m_has_althref_attr = true;
    m_althref_attr = _althref_attr;
    }

    const XSD::string_& CT_Stroke::get_althref_attr() const
    {    
    return m_althref_attr;
    }

    bool CT_Stroke::has_title_attr() const
    {    
    return m_has_title_attr;
    }

    void CT_Stroke::set_title_attr(const XSD::string_& _title_attr)
    {    
    m_has_title_attr = true;
    m_title_attr = _title_attr;
    }

    const XSD::string_& CT_Stroke::get_title_attr() const
    {    
    return m_title_attr;
    }

    bool CT_Stroke::has_s_forcedash_attr() const
    {    
    return m_has_s_forcedash_attr;
    }

    void CT_Stroke::set_s_forcedash_attr(const ns_s::ST_TrueFalse& _s_forcedash_attr)
    {    
    m_has_s_forcedash_attr = true;
    m_s_forcedash_attr = new ns_s::ST_TrueFalse(_s_forcedash_attr);
    }

    const ns_s::ST_TrueFalse& CT_Stroke::get_s_forcedash_attr() const
    {    
    if (m_s_forcedash_attr)
    {
        return *m_s_forcedash_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
    }

    bool CT_Stroke::has_r_id_attr() const
    {    
    return m_has_r_id_attr;
    }

    void CT_Stroke::set_r_id_attr(const ns_r::ST_RelationshipId& _r_id_attr)
    {    
    m_has_r_id_attr = true;
    m_r_id_attr = new ns_r::ST_RelationshipId(_r_id_attr);
    }

    const ns_r::ST_RelationshipId& CT_Stroke::get_r_id_attr() const
    {    
    if (m_r_id_attr)
    {
        return *m_r_id_attr;
    }
    return ns_r::ST_RelationshipId::default_instance();
    }

    bool CT_Stroke::has_s_insetpen_attr() const
    {    
    return m_has_s_insetpen_attr;
    }

    void CT_Stroke::set_s_insetpen_attr(const ns_s::ST_TrueFalse& _s_insetpen_attr)
    {    
    m_has_s_insetpen_attr = true;
    m_s_insetpen_attr = new ns_s::ST_TrueFalse(_s_insetpen_attr);
    }

    const ns_s::ST_TrueFalse& CT_Stroke::get_s_insetpen_attr() const
    {    
    if (m_s_insetpen_attr)
    {
        return *m_s_insetpen_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
    }

    bool CT_Stroke::has_r_relid_attr() const
    {    
    return m_has_r_relid_attr;
    }

    void CT_Stroke::set_r_relid_attr(const ns_r::ST_RelationshipId& _r_relid_attr)
    {    
    m_has_r_relid_attr = true;
    m_r_relid_attr = new ns_r::ST_RelationshipId(_r_relid_attr);
    }

    const ns_r::ST_RelationshipId& CT_Stroke::get_r_relid_attr() const
    {    
    if (m_r_relid_attr)
    {
        return *m_r_relid_attr;
    }
    return ns_r::ST_RelationshipId::default_instance();
    }


    // CT_Textbox
    bool CT_Textbox::has_w_txbxContent() const
    {    
    return m_has_w_txbxContent;
    }

    ns_w::CT_TxbxContent* CT_Textbox::mutable_w_txbxContent()
    {    
    
    m_has_w_txbxContent = true;
    if (!m_w_txbxContent)
    {
        m_w_txbxContent = new ns_w::CT_TxbxContent();
    }
    return m_w_txbxContent;
    }

    const ns_w::CT_TxbxContent& CT_Textbox::get_w_txbxContent() const
    {    
    if (m_w_txbxContent)
    {
        return *m_w_txbxContent;
    }
    return ns_w::CT_TxbxContent::default_instance();
    }

    void CT_Textbox::clear()
    {    
    m_has_id_attr = false;
    m_id_attr.clear();
    
    m_has_style_attr = false;
    m_style_attr.clear();
    
    m_has_inset_attr = false;
    m_inset_attr.clear();
    
    m_has_s_singleclick_attr = false;
    
    if (m_s_singleclick_attr)
    {
        delete m_s_singleclick_attr;
        m_s_singleclick_attr = NULL;
    }
    
    
    m_has_o_insetmode_attr = false;
    
    if (m_o_insetmode_attr)
    {
        delete m_o_insetmode_attr;
        m_o_insetmode_attr = NULL;
    }
    
    
    m_has_w_txbxContent = false;
    
    if (m_w_txbxContent)
    {
        delete m_w_txbxContent;
        m_w_txbxContent = NULL;
    }
    
    }

    void CT_Textbox::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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
    
    
    if (m_has_style_attr)
    {
        _outStream << " " << "style" << "=\"" << m_style_attr << "\"";
    }
    
    
    if (m_has_inset_attr)
    {
        _outStream << " " << "inset" << "=\"" << m_inset_attr << "\"";
    }
    
    
    if (m_has_s_singleclick_attr)
    {
        m_s_singleclick_attr->toXmlAttr("singleclick", _outStream);
    }
    
    
    if (m_has_o_insetmode_attr)
    {
        m_o_insetmode_attr->toXmlAttr("insetmode", _outStream);
    }
    
            _outStream << ">";
            
    if (m_has_w_txbxContent)
    {
        m_w_txbxContent->toXmlElem("v:txbxContent", "", _outStream);;
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_Textbox& CT_Textbox::default_instance()
    {    
    if (!CT_Textbox::default_instance_)
    {
        CT_Textbox::default_instance_ = new CT_Textbox();
    }
    return *CT_Textbox::default_instance_;
    }

    bool CT_Textbox::has_id_attr() const
    {    
    return m_has_id_attr;
    }

    void CT_Textbox::set_id_attr(const XSD::string_& _id_attr)
    {    
    m_has_id_attr = true;
    m_id_attr = _id_attr;
    }

    const XSD::string_& CT_Textbox::get_id_attr() const
    {    
    return m_id_attr;
    }

    bool CT_Textbox::has_style_attr() const
    {    
    return m_has_style_attr;
    }

    void CT_Textbox::set_style_attr(const XSD::string_& _style_attr)
    {    
    m_has_style_attr = true;
    m_style_attr = _style_attr;
    }

    const XSD::string_& CT_Textbox::get_style_attr() const
    {    
    return m_style_attr;
    }

    bool CT_Textbox::has_inset_attr() const
    {    
    return m_has_inset_attr;
    }

    void CT_Textbox::set_inset_attr(const XSD::string_& _inset_attr)
    {    
    m_has_inset_attr = true;
    m_inset_attr = _inset_attr;
    }

    const XSD::string_& CT_Textbox::get_inset_attr() const
    {    
    return m_inset_attr;
    }

    bool CT_Textbox::has_s_singleclick_attr() const
    {    
    return m_has_s_singleclick_attr;
    }

    void CT_Textbox::set_s_singleclick_attr(const ns_s::ST_TrueFalse& _s_singleclick_attr)
    {    
    m_has_s_singleclick_attr = true;
    m_s_singleclick_attr = new ns_s::ST_TrueFalse(_s_singleclick_attr);
    }

    const ns_s::ST_TrueFalse& CT_Textbox::get_s_singleclick_attr() const
    {    
    if (m_s_singleclick_attr)
    {
        return *m_s_singleclick_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
    }

    bool CT_Textbox::has_o_insetmode_attr() const
    {    
    return m_has_o_insetmode_attr;
    }

    void CT_Textbox::set_o_insetmode_attr(const ns_o::ST_InsetMode& _o_insetmode_attr)
    {    
    m_has_o_insetmode_attr = true;
    m_o_insetmode_attr = new ns_o::ST_InsetMode(_o_insetmode_attr);
    }

    const ns_o::ST_InsetMode& CT_Textbox::get_o_insetmode_attr() const
    {    
    if (m_o_insetmode_attr)
    {
        return *m_o_insetmode_attr;
    }
    return ns_o::ST_InsetMode::default_instance();
    }


    // CT_TextPath
    void CT_TextPath::clear()
    {    
    m_has_id_attr = false;
    m_id_attr.clear();
    
    m_has_style_attr = false;
    m_style_attr.clear();
    
    m_has_s_on_attr = false;
    
    if (m_s_on_attr)
    {
        delete m_s_on_attr;
        m_s_on_attr = NULL;
    }
    
    
    m_has_s_fitshape_attr = false;
    
    if (m_s_fitshape_attr)
    {
        delete m_s_fitshape_attr;
        m_s_fitshape_attr = NULL;
    }
    
    
    m_has_s_fitpath_attr = false;
    
    if (m_s_fitpath_attr)
    {
        delete m_s_fitpath_attr;
        m_s_fitpath_attr = NULL;
    }
    
    
    m_has_s_trim_attr = false;
    
    if (m_s_trim_attr)
    {
        delete m_s_trim_attr;
        m_s_trim_attr = NULL;
    }
    
    
    m_has_s_xscale_attr = false;
    
    if (m_s_xscale_attr)
    {
        delete m_s_xscale_attr;
        m_s_xscale_attr = NULL;
    }
    
    
    m_has_string_attr = false;
    m_string_attr.clear();
    }

    void CT_TextPath::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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
    
    
    if (m_has_style_attr)
    {
        _outStream << " " << "style" << "=\"" << m_style_attr << "\"";
    }
    
    
    if (m_has_s_on_attr)
    {
        m_s_on_attr->toXmlAttr("on", _outStream);
    }
    
    
    if (m_has_s_fitshape_attr)
    {
        m_s_fitshape_attr->toXmlAttr("fitshape", _outStream);
    }
    
    
    if (m_has_s_fitpath_attr)
    {
        m_s_fitpath_attr->toXmlAttr("fitpath", _outStream);
    }
    
    
    if (m_has_s_trim_attr)
    {
        m_s_trim_attr->toXmlAttr("trim", _outStream);
    }
    
    
    if (m_has_s_xscale_attr)
    {
        m_s_xscale_attr->toXmlAttr("xscale", _outStream);
    }
    
    
    if (m_has_string_attr)
    {
        _outStream << " " << "string" << "=\"" << m_string_attr << "\"";
    }
    
            _outStream << ">";
            
            _outStream << "</" << _elemName << ">";
                }

    const CT_TextPath& CT_TextPath::default_instance()
    {    
    if (!CT_TextPath::default_instance_)
    {
        CT_TextPath::default_instance_ = new CT_TextPath();
    }
    return *CT_TextPath::default_instance_;
    }

    bool CT_TextPath::has_id_attr() const
    {    
    return m_has_id_attr;
    }

    void CT_TextPath::set_id_attr(const XSD::string_& _id_attr)
    {    
    m_has_id_attr = true;
    m_id_attr = _id_attr;
    }

    const XSD::string_& CT_TextPath::get_id_attr() const
    {    
    return m_id_attr;
    }

    bool CT_TextPath::has_style_attr() const
    {    
    return m_has_style_attr;
    }

    void CT_TextPath::set_style_attr(const XSD::string_& _style_attr)
    {    
    m_has_style_attr = true;
    m_style_attr = _style_attr;
    }

    const XSD::string_& CT_TextPath::get_style_attr() const
    {    
    return m_style_attr;
    }

    bool CT_TextPath::has_s_on_attr() const
    {    
    return m_has_s_on_attr;
    }

    void CT_TextPath::set_s_on_attr(const ns_s::ST_TrueFalse& _s_on_attr)
    {    
    m_has_s_on_attr = true;
    m_s_on_attr = new ns_s::ST_TrueFalse(_s_on_attr);
    }

    const ns_s::ST_TrueFalse& CT_TextPath::get_s_on_attr() const
    {    
    if (m_s_on_attr)
    {
        return *m_s_on_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
    }

    bool CT_TextPath::has_s_fitshape_attr() const
    {    
    return m_has_s_fitshape_attr;
    }

    void CT_TextPath::set_s_fitshape_attr(const ns_s::ST_TrueFalse& _s_fitshape_attr)
    {    
    m_has_s_fitshape_attr = true;
    m_s_fitshape_attr = new ns_s::ST_TrueFalse(_s_fitshape_attr);
    }

    const ns_s::ST_TrueFalse& CT_TextPath::get_s_fitshape_attr() const
    {    
    if (m_s_fitshape_attr)
    {
        return *m_s_fitshape_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
    }

    bool CT_TextPath::has_s_fitpath_attr() const
    {    
    return m_has_s_fitpath_attr;
    }

    void CT_TextPath::set_s_fitpath_attr(const ns_s::ST_TrueFalse& _s_fitpath_attr)
    {    
    m_has_s_fitpath_attr = true;
    m_s_fitpath_attr = new ns_s::ST_TrueFalse(_s_fitpath_attr);
    }

    const ns_s::ST_TrueFalse& CT_TextPath::get_s_fitpath_attr() const
    {    
    if (m_s_fitpath_attr)
    {
        return *m_s_fitpath_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
    }

    bool CT_TextPath::has_s_trim_attr() const
    {    
    return m_has_s_trim_attr;
    }

    void CT_TextPath::set_s_trim_attr(const ns_s::ST_TrueFalse& _s_trim_attr)
    {    
    m_has_s_trim_attr = true;
    m_s_trim_attr = new ns_s::ST_TrueFalse(_s_trim_attr);
    }

    const ns_s::ST_TrueFalse& CT_TextPath::get_s_trim_attr() const
    {    
    if (m_s_trim_attr)
    {
        return *m_s_trim_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
    }

    bool CT_TextPath::has_s_xscale_attr() const
    {    
    return m_has_s_xscale_attr;
    }

    void CT_TextPath::set_s_xscale_attr(const ns_s::ST_TrueFalse& _s_xscale_attr)
    {    
    m_has_s_xscale_attr = true;
    m_s_xscale_attr = new ns_s::ST_TrueFalse(_s_xscale_attr);
    }

    const ns_s::ST_TrueFalse& CT_TextPath::get_s_xscale_attr() const
    {    
    if (m_s_xscale_attr)
    {
        return *m_s_xscale_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
    }

    bool CT_TextPath::has_string_attr() const
    {    
    return m_has_string_attr;
    }

    void CT_TextPath::set_string_attr(const XSD::string_& _string_attr)
    {    
    m_has_string_attr = true;
    m_string_attr = _string_attr;
    }

    const XSD::string_& CT_TextPath::get_string_attr() const
    {    
    return m_string_attr;
    }


    // CT_Arc
    CT_Path* CT_Arc::add_path()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Path* pNewChild = pChildGroup->mutable_path();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Formulas* CT_Arc::add_formulas()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Formulas* pNewChild = pChildGroup->mutable_formulas();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Handles* CT_Arc::add_handles()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Handles* pNewChild = pChildGroup->mutable_handles();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Fill* CT_Arc::add_fill()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Fill* pNewChild = pChildGroup->mutable_fill();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Stroke* CT_Arc::add_stroke()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Stroke* pNewChild = pChildGroup->mutable_stroke();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Shadow* CT_Arc::add_shadow()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Shadow* pNewChild = pChildGroup->mutable_shadow();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Textbox* CT_Arc::add_textbox()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Textbox* pNewChild = pChildGroup->mutable_textbox();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_TextPath* CT_Arc::add_textpath()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_TextPath* pNewChild = pChildGroup->mutable_textpath();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_ImageData* CT_Arc::add_imagedata()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_ImageData* pNewChild = pChildGroup->mutable_imagedata();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_Skew* CT_Arc::add_o_skew()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_Skew* pNewChild = pChildGroup->mutable_o_skew();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_Extrusion* CT_Arc::add_o_extrusion()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_Extrusion* pNewChild = pChildGroup->mutable_o_extrusion();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_Callout* CT_Arc::add_o_callout()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_Callout* pNewChild = pChildGroup->mutable_o_callout();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_Lock* CT_Arc::add_o_lock()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_Lock* pNewChild = pChildGroup->mutable_o_lock();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_ClipPath* CT_Arc::add_o_clippath()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_ClipPath* pNewChild = pChildGroup->mutable_o_clippath();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_SignatureLine* CT_Arc::add_o_signatureline()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_SignatureLine* pNewChild = pChildGroup->mutable_o_signatureline();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w10::CT_Wrap* CT_Arc::add_w10_wrap()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w10::CT_Wrap* pNewChild = pChildGroup->mutable_w10_wrap();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w10::CT_AnchorLock* CT_Arc::add_w10_anchorlock()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w10::CT_AnchorLock* pNewChild = pChildGroup->mutable_w10_anchorlock();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w10::CT_Border* CT_Arc::add_w10_bordertop()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w10::CT_Border* pNewChild = pChildGroup->mutable_w10_bordertop();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w10::CT_Border* CT_Arc::add_w10_borderbottom()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w10::CT_Border* pNewChild = pChildGroup->mutable_w10_borderbottom();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w10::CT_Border* CT_Arc::add_w10_borderleft()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w10::CT_Border* pNewChild = pChildGroup->mutable_w10_borderleft();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w10::CT_Border* CT_Arc::add_w10_borderright()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w10::CT_Border* pNewChild = pChildGroup->mutable_w10_borderright();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_x::CT_ClientData* CT_Arc::add_x_ClientData()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_x::CT_ClientData* pNewChild = pChildGroup->mutable_x_ClientData();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_pvml::CT_Rel* CT_Arc::add_pvml_textdata()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_pvml::CT_Rel* pNewChild = pChildGroup->mutable_pvml_textdata();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    void CT_Arc::clear()
    {    
    m_has_startAngle_attr = false;
    m_startAngle_attr = 0;
    
    m_has_endAngle_attr = false;
    m_endAngle_attr = 0;
    
    {
        vector<ChildGroup_1*>::iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_1.clear();
    }
    }

    void CT_Arc::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
    if (m_has_startAngle_attr)
    {
        _outStream << " " << "startAngle" << "=\"" << m_startAngle_attr << "\"";
    }
    
    
    if (m_has_endAngle_attr)
    {
        _outStream << " " << "endAngle" << "=\"" << m_endAngle_attr << "\"";
    }
    
            _outStream << ">";
            
    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_path())
            {
                (*iter)->get_path().toXmlElem("v:path", "", _outStream);
            }
            else if ((*iter)->has_formulas())
            {
                (*iter)->get_formulas().toXmlElem("v:formulas", "", _outStream);
            }
            else if ((*iter)->has_handles())
            {
                (*iter)->get_handles().toXmlElem("v:handles", "", _outStream);
            }
            else if ((*iter)->has_fill())
            {
                (*iter)->get_fill().toXmlElem("v:fill", "", _outStream);
            }
            else if ((*iter)->has_stroke())
            {
                (*iter)->get_stroke().toXmlElem("v:stroke", "", _outStream);
            }
            else if ((*iter)->has_shadow())
            {
                (*iter)->get_shadow().toXmlElem("v:shadow", "", _outStream);
            }
            else if ((*iter)->has_textbox())
            {
                (*iter)->get_textbox().toXmlElem("v:textbox", "", _outStream);
            }
            else if ((*iter)->has_textpath())
            {
                (*iter)->get_textpath().toXmlElem("v:textpath", "", _outStream);
            }
            else if ((*iter)->has_imagedata())
            {
                (*iter)->get_imagedata().toXmlElem("v:imagedata", "", _outStream);
            }
            else if ((*iter)->has_o_skew())
            {
                (*iter)->get_o_skew().toXmlElem("v:skew", "", _outStream);
            }
            else if ((*iter)->has_o_extrusion())
            {
                (*iter)->get_o_extrusion().toXmlElem("v:extrusion", "", _outStream);
            }
            else if ((*iter)->has_o_callout())
            {
                (*iter)->get_o_callout().toXmlElem("v:callout", "", _outStream);
            }
            else if ((*iter)->has_o_lock())
            {
                (*iter)->get_o_lock().toXmlElem("v:lock", "", _outStream);
            }
            else if ((*iter)->has_o_clippath())
            {
                (*iter)->get_o_clippath().toXmlElem("v:clippath", "", _outStream);
            }
            else if ((*iter)->has_o_signatureline())
            {
                (*iter)->get_o_signatureline().toXmlElem("v:signatureline", "", _outStream);
            }
            else if ((*iter)->has_w10_wrap())
            {
                (*iter)->get_w10_wrap().toXmlElem("v:wrap", "", _outStream);
            }
            else if ((*iter)->has_w10_anchorlock())
            {
                (*iter)->get_w10_anchorlock().toXmlElem("v:anchorlock", "", _outStream);
            }
            else if ((*iter)->has_w10_bordertop())
            {
                (*iter)->get_w10_bordertop().toXmlElem("v:bordertop", "", _outStream);
            }
            else if ((*iter)->has_w10_borderbottom())
            {
                (*iter)->get_w10_borderbottom().toXmlElem("v:borderbottom", "", _outStream);
            }
            else if ((*iter)->has_w10_borderleft())
            {
                (*iter)->get_w10_borderleft().toXmlElem("v:borderleft", "", _outStream);
            }
            else if ((*iter)->has_w10_borderright())
            {
                (*iter)->get_w10_borderright().toXmlElem("v:borderright", "", _outStream);
            }
            else if ((*iter)->has_x_ClientData())
            {
                (*iter)->get_x_ClientData().toXmlElem("v:ClientData", "", _outStream);
            }
            else if ((*iter)->has_pvml_textdata())
            {
                (*iter)->get_pvml_textdata().toXmlElem("v:textdata", "", _outStream);
            }
        }
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_Arc& CT_Arc::default_instance()
    {    
    if (!CT_Arc::default_instance_)
    {
        CT_Arc::default_instance_ = new CT_Arc();
    }
    return *CT_Arc::default_instance_;
    }

    bool CT_Arc::has_startAngle_attr() const
    {    
    return m_has_startAngle_attr;
    }

    void CT_Arc::set_startAngle_attr(const XSD::decimal_& _startAngle_attr)
    {    
    m_has_startAngle_attr = true;
    m_startAngle_attr = _startAngle_attr;
    }

    const XSD::decimal_& CT_Arc::get_startAngle_attr() const
    {    
    return m_startAngle_attr;
    }

    bool CT_Arc::has_endAngle_attr() const
    {    
    return m_has_endAngle_attr;
    }

    void CT_Arc::set_endAngle_attr(const XSD::decimal_& _endAngle_attr)
    {    
    m_has_endAngle_attr = true;
    m_endAngle_attr = _endAngle_attr;
    }

    const XSD::decimal_& CT_Arc::get_endAngle_attr() const
    {    
    return m_endAngle_attr;
    }


    // CT_Curve
    CT_Path* CT_Curve::add_path()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Path* pNewChild = pChildGroup->mutable_path();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Formulas* CT_Curve::add_formulas()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Formulas* pNewChild = pChildGroup->mutable_formulas();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Handles* CT_Curve::add_handles()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Handles* pNewChild = pChildGroup->mutable_handles();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Fill* CT_Curve::add_fill()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Fill* pNewChild = pChildGroup->mutable_fill();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Stroke* CT_Curve::add_stroke()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Stroke* pNewChild = pChildGroup->mutable_stroke();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Shadow* CT_Curve::add_shadow()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Shadow* pNewChild = pChildGroup->mutable_shadow();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Textbox* CT_Curve::add_textbox()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Textbox* pNewChild = pChildGroup->mutable_textbox();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_TextPath* CT_Curve::add_textpath()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_TextPath* pNewChild = pChildGroup->mutable_textpath();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_ImageData* CT_Curve::add_imagedata()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_ImageData* pNewChild = pChildGroup->mutable_imagedata();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_Skew* CT_Curve::add_o_skew()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_Skew* pNewChild = pChildGroup->mutable_o_skew();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_Extrusion* CT_Curve::add_o_extrusion()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_Extrusion* pNewChild = pChildGroup->mutable_o_extrusion();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_Callout* CT_Curve::add_o_callout()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_Callout* pNewChild = pChildGroup->mutable_o_callout();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_Lock* CT_Curve::add_o_lock()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_Lock* pNewChild = pChildGroup->mutable_o_lock();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_ClipPath* CT_Curve::add_o_clippath()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_ClipPath* pNewChild = pChildGroup->mutable_o_clippath();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_SignatureLine* CT_Curve::add_o_signatureline()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_SignatureLine* pNewChild = pChildGroup->mutable_o_signatureline();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w10::CT_Wrap* CT_Curve::add_w10_wrap()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w10::CT_Wrap* pNewChild = pChildGroup->mutable_w10_wrap();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w10::CT_AnchorLock* CT_Curve::add_w10_anchorlock()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w10::CT_AnchorLock* pNewChild = pChildGroup->mutable_w10_anchorlock();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w10::CT_Border* CT_Curve::add_w10_bordertop()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w10::CT_Border* pNewChild = pChildGroup->mutable_w10_bordertop();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w10::CT_Border* CT_Curve::add_w10_borderbottom()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w10::CT_Border* pNewChild = pChildGroup->mutable_w10_borderbottom();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w10::CT_Border* CT_Curve::add_w10_borderleft()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w10::CT_Border* pNewChild = pChildGroup->mutable_w10_borderleft();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w10::CT_Border* CT_Curve::add_w10_borderright()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w10::CT_Border* pNewChild = pChildGroup->mutable_w10_borderright();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_x::CT_ClientData* CT_Curve::add_x_ClientData()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_x::CT_ClientData* pNewChild = pChildGroup->mutable_x_ClientData();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_pvml::CT_Rel* CT_Curve::add_pvml_textdata()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_pvml::CT_Rel* pNewChild = pChildGroup->mutable_pvml_textdata();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    void CT_Curve::clear()
    {    
    m_has_from_attr = false;
    m_from_attr.clear();
    
    m_has_control1_attr = false;
    m_control1_attr.clear();
    
    m_has_control2_attr = false;
    m_control2_attr.clear();
    
    m_has_to_attr = false;
    m_to_attr.clear();
    
    {
        vector<ChildGroup_1*>::iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_1.clear();
    }
    }

    void CT_Curve::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
    if (m_has_from_attr)
    {
        _outStream << " " << "from" << "=\"" << m_from_attr << "\"";
    }
    
    
    if (m_has_control1_attr)
    {
        _outStream << " " << "control1" << "=\"" << m_control1_attr << "\"";
    }
    
    
    if (m_has_control2_attr)
    {
        _outStream << " " << "control2" << "=\"" << m_control2_attr << "\"";
    }
    
    
    if (m_has_to_attr)
    {
        _outStream << " " << "to" << "=\"" << m_to_attr << "\"";
    }
    
            _outStream << ">";
            
    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_path())
            {
                (*iter)->get_path().toXmlElem("v:path", "", _outStream);
            }
            else if ((*iter)->has_formulas())
            {
                (*iter)->get_formulas().toXmlElem("v:formulas", "", _outStream);
            }
            else if ((*iter)->has_handles())
            {
                (*iter)->get_handles().toXmlElem("v:handles", "", _outStream);
            }
            else if ((*iter)->has_fill())
            {
                (*iter)->get_fill().toXmlElem("v:fill", "", _outStream);
            }
            else if ((*iter)->has_stroke())
            {
                (*iter)->get_stroke().toXmlElem("v:stroke", "", _outStream);
            }
            else if ((*iter)->has_shadow())
            {
                (*iter)->get_shadow().toXmlElem("v:shadow", "", _outStream);
            }
            else if ((*iter)->has_textbox())
            {
                (*iter)->get_textbox().toXmlElem("v:textbox", "", _outStream);
            }
            else if ((*iter)->has_textpath())
            {
                (*iter)->get_textpath().toXmlElem("v:textpath", "", _outStream);
            }
            else if ((*iter)->has_imagedata())
            {
                (*iter)->get_imagedata().toXmlElem("v:imagedata", "", _outStream);
            }
            else if ((*iter)->has_o_skew())
            {
                (*iter)->get_o_skew().toXmlElem("v:skew", "", _outStream);
            }
            else if ((*iter)->has_o_extrusion())
            {
                (*iter)->get_o_extrusion().toXmlElem("v:extrusion", "", _outStream);
            }
            else if ((*iter)->has_o_callout())
            {
                (*iter)->get_o_callout().toXmlElem("v:callout", "", _outStream);
            }
            else if ((*iter)->has_o_lock())
            {
                (*iter)->get_o_lock().toXmlElem("v:lock", "", _outStream);
            }
            else if ((*iter)->has_o_clippath())
            {
                (*iter)->get_o_clippath().toXmlElem("v:clippath", "", _outStream);
            }
            else if ((*iter)->has_o_signatureline())
            {
                (*iter)->get_o_signatureline().toXmlElem("v:signatureline", "", _outStream);
            }
            else if ((*iter)->has_w10_wrap())
            {
                (*iter)->get_w10_wrap().toXmlElem("v:wrap", "", _outStream);
            }
            else if ((*iter)->has_w10_anchorlock())
            {
                (*iter)->get_w10_anchorlock().toXmlElem("v:anchorlock", "", _outStream);
            }
            else if ((*iter)->has_w10_bordertop())
            {
                (*iter)->get_w10_bordertop().toXmlElem("v:bordertop", "", _outStream);
            }
            else if ((*iter)->has_w10_borderbottom())
            {
                (*iter)->get_w10_borderbottom().toXmlElem("v:borderbottom", "", _outStream);
            }
            else if ((*iter)->has_w10_borderleft())
            {
                (*iter)->get_w10_borderleft().toXmlElem("v:borderleft", "", _outStream);
            }
            else if ((*iter)->has_w10_borderright())
            {
                (*iter)->get_w10_borderright().toXmlElem("v:borderright", "", _outStream);
            }
            else if ((*iter)->has_x_ClientData())
            {
                (*iter)->get_x_ClientData().toXmlElem("v:ClientData", "", _outStream);
            }
            else if ((*iter)->has_pvml_textdata())
            {
                (*iter)->get_pvml_textdata().toXmlElem("v:textdata", "", _outStream);
            }
        }
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_Curve& CT_Curve::default_instance()
    {    
    if (!CT_Curve::default_instance_)
    {
        CT_Curve::default_instance_ = new CT_Curve();
    }
    return *CT_Curve::default_instance_;
    }

    bool CT_Curve::has_from_attr() const
    {    
    return m_has_from_attr;
    }

    void CT_Curve::set_from_attr(const XSD::string_& _from_attr)
    {    
    m_has_from_attr = true;
    m_from_attr = _from_attr;
    }

    const XSD::string_& CT_Curve::get_from_attr() const
    {    
    return m_from_attr;
    }

    bool CT_Curve::has_control1_attr() const
    {    
    return m_has_control1_attr;
    }

    void CT_Curve::set_control1_attr(const XSD::string_& _control1_attr)
    {    
    m_has_control1_attr = true;
    m_control1_attr = _control1_attr;
    }

    const XSD::string_& CT_Curve::get_control1_attr() const
    {    
    return m_control1_attr;
    }

    bool CT_Curve::has_control2_attr() const
    {    
    return m_has_control2_attr;
    }

    void CT_Curve::set_control2_attr(const XSD::string_& _control2_attr)
    {    
    m_has_control2_attr = true;
    m_control2_attr = _control2_attr;
    }

    const XSD::string_& CT_Curve::get_control2_attr() const
    {    
    return m_control2_attr;
    }

    bool CT_Curve::has_to_attr() const
    {    
    return m_has_to_attr;
    }

    void CT_Curve::set_to_attr(const XSD::string_& _to_attr)
    {    
    m_has_to_attr = true;
    m_to_attr = _to_attr;
    }

    const XSD::string_& CT_Curve::get_to_attr() const
    {    
    return m_to_attr;
    }


    // CT_Image
    CT_Path* CT_Image::add_path()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Path* pNewChild = pChildGroup->mutable_path();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Formulas* CT_Image::add_formulas()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Formulas* pNewChild = pChildGroup->mutable_formulas();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Handles* CT_Image::add_handles()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Handles* pNewChild = pChildGroup->mutable_handles();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Fill* CT_Image::add_fill()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Fill* pNewChild = pChildGroup->mutable_fill();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Stroke* CT_Image::add_stroke()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Stroke* pNewChild = pChildGroup->mutable_stroke();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Shadow* CT_Image::add_shadow()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Shadow* pNewChild = pChildGroup->mutable_shadow();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Textbox* CT_Image::add_textbox()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Textbox* pNewChild = pChildGroup->mutable_textbox();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_TextPath* CT_Image::add_textpath()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_TextPath* pNewChild = pChildGroup->mutable_textpath();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_ImageData* CT_Image::add_imagedata()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_ImageData* pNewChild = pChildGroup->mutable_imagedata();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_Skew* CT_Image::add_o_skew()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_Skew* pNewChild = pChildGroup->mutable_o_skew();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_Extrusion* CT_Image::add_o_extrusion()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_Extrusion* pNewChild = pChildGroup->mutable_o_extrusion();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_Callout* CT_Image::add_o_callout()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_Callout* pNewChild = pChildGroup->mutable_o_callout();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_Lock* CT_Image::add_o_lock()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_Lock* pNewChild = pChildGroup->mutable_o_lock();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_ClipPath* CT_Image::add_o_clippath()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_ClipPath* pNewChild = pChildGroup->mutable_o_clippath();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_SignatureLine* CT_Image::add_o_signatureline()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_SignatureLine* pNewChild = pChildGroup->mutable_o_signatureline();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w10::CT_Wrap* CT_Image::add_w10_wrap()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w10::CT_Wrap* pNewChild = pChildGroup->mutable_w10_wrap();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w10::CT_AnchorLock* CT_Image::add_w10_anchorlock()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w10::CT_AnchorLock* pNewChild = pChildGroup->mutable_w10_anchorlock();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w10::CT_Border* CT_Image::add_w10_bordertop()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w10::CT_Border* pNewChild = pChildGroup->mutable_w10_bordertop();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w10::CT_Border* CT_Image::add_w10_borderbottom()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w10::CT_Border* pNewChild = pChildGroup->mutable_w10_borderbottom();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w10::CT_Border* CT_Image::add_w10_borderleft()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w10::CT_Border* pNewChild = pChildGroup->mutable_w10_borderleft();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w10::CT_Border* CT_Image::add_w10_borderright()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w10::CT_Border* pNewChild = pChildGroup->mutable_w10_borderright();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_x::CT_ClientData* CT_Image::add_x_ClientData()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_x::CT_ClientData* pNewChild = pChildGroup->mutable_x_ClientData();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_pvml::CT_Rel* CT_Image::add_pvml_textdata()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_pvml::CT_Rel* pNewChild = pChildGroup->mutable_pvml_textdata();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    void CT_Image::clear()
    {    
    m_has_src_attr = false;
    m_src_attr.clear();
    
    m_has_cropleft_attr = false;
    m_cropleft_attr.clear();
    
    m_has_croptop_attr = false;
    m_croptop_attr.clear();
    
    m_has_cropright_attr = false;
    m_cropright_attr.clear();
    
    m_has_cropbottom_attr = false;
    m_cropbottom_attr.clear();
    
    m_has_gain_attr = false;
    m_gain_attr.clear();
    
    m_has_blacklevel_attr = false;
    m_blacklevel_attr.clear();
    
    m_has_gamma_attr = false;
    m_gamma_attr.clear();
    
    m_has_s_grayscale_attr = false;
    
    if (m_s_grayscale_attr)
    {
        delete m_s_grayscale_attr;
        m_s_grayscale_attr = NULL;
    }
    
    
    m_has_s_bilevel_attr = false;
    
    if (m_s_bilevel_attr)
    {
        delete m_s_bilevel_attr;
        m_s_bilevel_attr = NULL;
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

    void CT_Image::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
    if (m_has_src_attr)
    {
        _outStream << " " << "src" << "=\"" << m_src_attr << "\"";
    }
    
    
    if (m_has_cropleft_attr)
    {
        _outStream << " " << "cropleft" << "=\"" << m_cropleft_attr << "\"";
    }
    
    
    if (m_has_croptop_attr)
    {
        _outStream << " " << "croptop" << "=\"" << m_croptop_attr << "\"";
    }
    
    
    if (m_has_cropright_attr)
    {
        _outStream << " " << "cropright" << "=\"" << m_cropright_attr << "\"";
    }
    
    
    if (m_has_cropbottom_attr)
    {
        _outStream << " " << "cropbottom" << "=\"" << m_cropbottom_attr << "\"";
    }
    
    
    if (m_has_gain_attr)
    {
        _outStream << " " << "gain" << "=\"" << m_gain_attr << "\"";
    }
    
    
    if (m_has_blacklevel_attr)
    {
        _outStream << " " << "blacklevel" << "=\"" << m_blacklevel_attr << "\"";
    }
    
    
    if (m_has_gamma_attr)
    {
        _outStream << " " << "gamma" << "=\"" << m_gamma_attr << "\"";
    }
    
    
    if (m_has_s_grayscale_attr)
    {
        m_s_grayscale_attr->toXmlAttr("grayscale", _outStream);
    }
    
    
    if (m_has_s_bilevel_attr)
    {
        m_s_bilevel_attr->toXmlAttr("bilevel", _outStream);
    }
    
            _outStream << ">";
            
    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_path())
            {
                (*iter)->get_path().toXmlElem("v:path", "", _outStream);
            }
            else if ((*iter)->has_formulas())
            {
                (*iter)->get_formulas().toXmlElem("v:formulas", "", _outStream);
            }
            else if ((*iter)->has_handles())
            {
                (*iter)->get_handles().toXmlElem("v:handles", "", _outStream);
            }
            else if ((*iter)->has_fill())
            {
                (*iter)->get_fill().toXmlElem("v:fill", "", _outStream);
            }
            else if ((*iter)->has_stroke())
            {
                (*iter)->get_stroke().toXmlElem("v:stroke", "", _outStream);
            }
            else if ((*iter)->has_shadow())
            {
                (*iter)->get_shadow().toXmlElem("v:shadow", "", _outStream);
            }
            else if ((*iter)->has_textbox())
            {
                (*iter)->get_textbox().toXmlElem("v:textbox", "", _outStream);
            }
            else if ((*iter)->has_textpath())
            {
                (*iter)->get_textpath().toXmlElem("v:textpath", "", _outStream);
            }
            else if ((*iter)->has_imagedata())
            {
                (*iter)->get_imagedata().toXmlElem("v:imagedata", "", _outStream);
            }
            else if ((*iter)->has_o_skew())
            {
                (*iter)->get_o_skew().toXmlElem("v:skew", "", _outStream);
            }
            else if ((*iter)->has_o_extrusion())
            {
                (*iter)->get_o_extrusion().toXmlElem("v:extrusion", "", _outStream);
            }
            else if ((*iter)->has_o_callout())
            {
                (*iter)->get_o_callout().toXmlElem("v:callout", "", _outStream);
            }
            else if ((*iter)->has_o_lock())
            {
                (*iter)->get_o_lock().toXmlElem("v:lock", "", _outStream);
            }
            else if ((*iter)->has_o_clippath())
            {
                (*iter)->get_o_clippath().toXmlElem("v:clippath", "", _outStream);
            }
            else if ((*iter)->has_o_signatureline())
            {
                (*iter)->get_o_signatureline().toXmlElem("v:signatureline", "", _outStream);
            }
            else if ((*iter)->has_w10_wrap())
            {
                (*iter)->get_w10_wrap().toXmlElem("v:wrap", "", _outStream);
            }
            else if ((*iter)->has_w10_anchorlock())
            {
                (*iter)->get_w10_anchorlock().toXmlElem("v:anchorlock", "", _outStream);
            }
            else if ((*iter)->has_w10_bordertop())
            {
                (*iter)->get_w10_bordertop().toXmlElem("v:bordertop", "", _outStream);
            }
            else if ((*iter)->has_w10_borderbottom())
            {
                (*iter)->get_w10_borderbottom().toXmlElem("v:borderbottom", "", _outStream);
            }
            else if ((*iter)->has_w10_borderleft())
            {
                (*iter)->get_w10_borderleft().toXmlElem("v:borderleft", "", _outStream);
            }
            else if ((*iter)->has_w10_borderright())
            {
                (*iter)->get_w10_borderright().toXmlElem("v:borderright", "", _outStream);
            }
            else if ((*iter)->has_x_ClientData())
            {
                (*iter)->get_x_ClientData().toXmlElem("v:ClientData", "", _outStream);
            }
            else if ((*iter)->has_pvml_textdata())
            {
                (*iter)->get_pvml_textdata().toXmlElem("v:textdata", "", _outStream);
            }
        }
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_Image& CT_Image::default_instance()
    {    
    if (!CT_Image::default_instance_)
    {
        CT_Image::default_instance_ = new CT_Image();
    }
    return *CT_Image::default_instance_;
    }

    bool CT_Image::has_src_attr() const
    {    
    return m_has_src_attr;
    }

    void CT_Image::set_src_attr(const XSD::string_& _src_attr)
    {    
    m_has_src_attr = true;
    m_src_attr = _src_attr;
    }

    const XSD::string_& CT_Image::get_src_attr() const
    {    
    return m_src_attr;
    }

    bool CT_Image::has_cropleft_attr() const
    {    
    return m_has_cropleft_attr;
    }

    void CT_Image::set_cropleft_attr(const XSD::string_& _cropleft_attr)
    {    
    m_has_cropleft_attr = true;
    m_cropleft_attr = _cropleft_attr;
    }

    const XSD::string_& CT_Image::get_cropleft_attr() const
    {    
    return m_cropleft_attr;
    }

    bool CT_Image::has_croptop_attr() const
    {    
    return m_has_croptop_attr;
    }

    void CT_Image::set_croptop_attr(const XSD::string_& _croptop_attr)
    {    
    m_has_croptop_attr = true;
    m_croptop_attr = _croptop_attr;
    }

    const XSD::string_& CT_Image::get_croptop_attr() const
    {    
    return m_croptop_attr;
    }

    bool CT_Image::has_cropright_attr() const
    {    
    return m_has_cropright_attr;
    }

    void CT_Image::set_cropright_attr(const XSD::string_& _cropright_attr)
    {    
    m_has_cropright_attr = true;
    m_cropright_attr = _cropright_attr;
    }

    const XSD::string_& CT_Image::get_cropright_attr() const
    {    
    return m_cropright_attr;
    }

    bool CT_Image::has_cropbottom_attr() const
    {    
    return m_has_cropbottom_attr;
    }

    void CT_Image::set_cropbottom_attr(const XSD::string_& _cropbottom_attr)
    {    
    m_has_cropbottom_attr = true;
    m_cropbottom_attr = _cropbottom_attr;
    }

    const XSD::string_& CT_Image::get_cropbottom_attr() const
    {    
    return m_cropbottom_attr;
    }

    bool CT_Image::has_gain_attr() const
    {    
    return m_has_gain_attr;
    }

    void CT_Image::set_gain_attr(const XSD::string_& _gain_attr)
    {    
    m_has_gain_attr = true;
    m_gain_attr = _gain_attr;
    }

    const XSD::string_& CT_Image::get_gain_attr() const
    {    
    return m_gain_attr;
    }

    bool CT_Image::has_blacklevel_attr() const
    {    
    return m_has_blacklevel_attr;
    }

    void CT_Image::set_blacklevel_attr(const XSD::string_& _blacklevel_attr)
    {    
    m_has_blacklevel_attr = true;
    m_blacklevel_attr = _blacklevel_attr;
    }

    const XSD::string_& CT_Image::get_blacklevel_attr() const
    {    
    return m_blacklevel_attr;
    }

    bool CT_Image::has_gamma_attr() const
    {    
    return m_has_gamma_attr;
    }

    void CT_Image::set_gamma_attr(const XSD::string_& _gamma_attr)
    {    
    m_has_gamma_attr = true;
    m_gamma_attr = _gamma_attr;
    }

    const XSD::string_& CT_Image::get_gamma_attr() const
    {    
    return m_gamma_attr;
    }

    bool CT_Image::has_s_grayscale_attr() const
    {    
    return m_has_s_grayscale_attr;
    }

    void CT_Image::set_s_grayscale_attr(const ns_s::ST_TrueFalse& _s_grayscale_attr)
    {    
    m_has_s_grayscale_attr = true;
    m_s_grayscale_attr = new ns_s::ST_TrueFalse(_s_grayscale_attr);
    }

    const ns_s::ST_TrueFalse& CT_Image::get_s_grayscale_attr() const
    {    
    if (m_s_grayscale_attr)
    {
        return *m_s_grayscale_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
    }

    bool CT_Image::has_s_bilevel_attr() const
    {    
    return m_has_s_bilevel_attr;
    }

    void CT_Image::set_s_bilevel_attr(const ns_s::ST_TrueFalse& _s_bilevel_attr)
    {    
    m_has_s_bilevel_attr = true;
    m_s_bilevel_attr = new ns_s::ST_TrueFalse(_s_bilevel_attr);
    }

    const ns_s::ST_TrueFalse& CT_Image::get_s_bilevel_attr() const
    {    
    if (m_s_bilevel_attr)
    {
        return *m_s_bilevel_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
    }


    // CT_Line
    CT_Path* CT_Line::add_path()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Path* pNewChild = pChildGroup->mutable_path();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Formulas* CT_Line::add_formulas()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Formulas* pNewChild = pChildGroup->mutable_formulas();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Handles* CT_Line::add_handles()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Handles* pNewChild = pChildGroup->mutable_handles();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Fill* CT_Line::add_fill()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Fill* pNewChild = pChildGroup->mutable_fill();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Stroke* CT_Line::add_stroke()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Stroke* pNewChild = pChildGroup->mutable_stroke();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Shadow* CT_Line::add_shadow()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Shadow* pNewChild = pChildGroup->mutable_shadow();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Textbox* CT_Line::add_textbox()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Textbox* pNewChild = pChildGroup->mutable_textbox();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_TextPath* CT_Line::add_textpath()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_TextPath* pNewChild = pChildGroup->mutable_textpath();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_ImageData* CT_Line::add_imagedata()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_ImageData* pNewChild = pChildGroup->mutable_imagedata();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_Skew* CT_Line::add_o_skew()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_Skew* pNewChild = pChildGroup->mutable_o_skew();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_Extrusion* CT_Line::add_o_extrusion()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_Extrusion* pNewChild = pChildGroup->mutable_o_extrusion();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_Callout* CT_Line::add_o_callout()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_Callout* pNewChild = pChildGroup->mutable_o_callout();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_Lock* CT_Line::add_o_lock()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_Lock* pNewChild = pChildGroup->mutable_o_lock();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_ClipPath* CT_Line::add_o_clippath()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_ClipPath* pNewChild = pChildGroup->mutable_o_clippath();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_SignatureLine* CT_Line::add_o_signatureline()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_SignatureLine* pNewChild = pChildGroup->mutable_o_signatureline();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w10::CT_Wrap* CT_Line::add_w10_wrap()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w10::CT_Wrap* pNewChild = pChildGroup->mutable_w10_wrap();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w10::CT_AnchorLock* CT_Line::add_w10_anchorlock()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w10::CT_AnchorLock* pNewChild = pChildGroup->mutable_w10_anchorlock();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w10::CT_Border* CT_Line::add_w10_bordertop()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w10::CT_Border* pNewChild = pChildGroup->mutable_w10_bordertop();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w10::CT_Border* CT_Line::add_w10_borderbottom()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w10::CT_Border* pNewChild = pChildGroup->mutable_w10_borderbottom();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w10::CT_Border* CT_Line::add_w10_borderleft()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w10::CT_Border* pNewChild = pChildGroup->mutable_w10_borderleft();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w10::CT_Border* CT_Line::add_w10_borderright()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w10::CT_Border* pNewChild = pChildGroup->mutable_w10_borderright();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_x::CT_ClientData* CT_Line::add_x_ClientData()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_x::CT_ClientData* pNewChild = pChildGroup->mutable_x_ClientData();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_pvml::CT_Rel* CT_Line::add_pvml_textdata()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_pvml::CT_Rel* pNewChild = pChildGroup->mutable_pvml_textdata();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    void CT_Line::clear()
    {    
    m_has_from_attr = false;
    m_from_attr.clear();
    
    m_has_to_attr = false;
    m_to_attr.clear();
    
    {
        vector<ChildGroup_1*>::iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_1.clear();
    }
    }

    void CT_Line::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
    if (m_has_from_attr)
    {
        _outStream << " " << "from" << "=\"" << m_from_attr << "\"";
    }
    
    
    if (m_has_to_attr)
    {
        _outStream << " " << "to" << "=\"" << m_to_attr << "\"";
    }
    
            _outStream << ">";
            
    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_path())
            {
                (*iter)->get_path().toXmlElem("v:path", "", _outStream);
            }
            else if ((*iter)->has_formulas())
            {
                (*iter)->get_formulas().toXmlElem("v:formulas", "", _outStream);
            }
            else if ((*iter)->has_handles())
            {
                (*iter)->get_handles().toXmlElem("v:handles", "", _outStream);
            }
            else if ((*iter)->has_fill())
            {
                (*iter)->get_fill().toXmlElem("v:fill", "", _outStream);
            }
            else if ((*iter)->has_stroke())
            {
                (*iter)->get_stroke().toXmlElem("v:stroke", "", _outStream);
            }
            else if ((*iter)->has_shadow())
            {
                (*iter)->get_shadow().toXmlElem("v:shadow", "", _outStream);
            }
            else if ((*iter)->has_textbox())
            {
                (*iter)->get_textbox().toXmlElem("v:textbox", "", _outStream);
            }
            else if ((*iter)->has_textpath())
            {
                (*iter)->get_textpath().toXmlElem("v:textpath", "", _outStream);
            }
            else if ((*iter)->has_imagedata())
            {
                (*iter)->get_imagedata().toXmlElem("v:imagedata", "", _outStream);
            }
            else if ((*iter)->has_o_skew())
            {
                (*iter)->get_o_skew().toXmlElem("v:skew", "", _outStream);
            }
            else if ((*iter)->has_o_extrusion())
            {
                (*iter)->get_o_extrusion().toXmlElem("v:extrusion", "", _outStream);
            }
            else if ((*iter)->has_o_callout())
            {
                (*iter)->get_o_callout().toXmlElem("v:callout", "", _outStream);
            }
            else if ((*iter)->has_o_lock())
            {
                (*iter)->get_o_lock().toXmlElem("v:lock", "", _outStream);
            }
            else if ((*iter)->has_o_clippath())
            {
                (*iter)->get_o_clippath().toXmlElem("v:clippath", "", _outStream);
            }
            else if ((*iter)->has_o_signatureline())
            {
                (*iter)->get_o_signatureline().toXmlElem("v:signatureline", "", _outStream);
            }
            else if ((*iter)->has_w10_wrap())
            {
                (*iter)->get_w10_wrap().toXmlElem("v:wrap", "", _outStream);
            }
            else if ((*iter)->has_w10_anchorlock())
            {
                (*iter)->get_w10_anchorlock().toXmlElem("v:anchorlock", "", _outStream);
            }
            else if ((*iter)->has_w10_bordertop())
            {
                (*iter)->get_w10_bordertop().toXmlElem("v:bordertop", "", _outStream);
            }
            else if ((*iter)->has_w10_borderbottom())
            {
                (*iter)->get_w10_borderbottom().toXmlElem("v:borderbottom", "", _outStream);
            }
            else if ((*iter)->has_w10_borderleft())
            {
                (*iter)->get_w10_borderleft().toXmlElem("v:borderleft", "", _outStream);
            }
            else if ((*iter)->has_w10_borderright())
            {
                (*iter)->get_w10_borderright().toXmlElem("v:borderright", "", _outStream);
            }
            else if ((*iter)->has_x_ClientData())
            {
                (*iter)->get_x_ClientData().toXmlElem("v:ClientData", "", _outStream);
            }
            else if ((*iter)->has_pvml_textdata())
            {
                (*iter)->get_pvml_textdata().toXmlElem("v:textdata", "", _outStream);
            }
        }
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_Line& CT_Line::default_instance()
    {    
    if (!CT_Line::default_instance_)
    {
        CT_Line::default_instance_ = new CT_Line();
    }
    return *CT_Line::default_instance_;
    }

    bool CT_Line::has_from_attr() const
    {    
    return m_has_from_attr;
    }

    void CT_Line::set_from_attr(const XSD::string_& _from_attr)
    {    
    m_has_from_attr = true;
    m_from_attr = _from_attr;
    }

    const XSD::string_& CT_Line::get_from_attr() const
    {    
    return m_from_attr;
    }

    bool CT_Line::has_to_attr() const
    {    
    return m_has_to_attr;
    }

    void CT_Line::set_to_attr(const XSD::string_& _to_attr)
    {    
    m_has_to_attr = true;
    m_to_attr = _to_attr;
    }

    const XSD::string_& CT_Line::get_to_attr() const
    {    
    return m_to_attr;
    }


    // CT_Oval
    CT_Path* CT_Oval::add_path()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Path* pNewChild = pChildGroup->mutable_path();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Formulas* CT_Oval::add_formulas()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Formulas* pNewChild = pChildGroup->mutable_formulas();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Handles* CT_Oval::add_handles()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Handles* pNewChild = pChildGroup->mutable_handles();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Fill* CT_Oval::add_fill()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Fill* pNewChild = pChildGroup->mutable_fill();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Stroke* CT_Oval::add_stroke()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Stroke* pNewChild = pChildGroup->mutable_stroke();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Shadow* CT_Oval::add_shadow()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Shadow* pNewChild = pChildGroup->mutable_shadow();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Textbox* CT_Oval::add_textbox()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Textbox* pNewChild = pChildGroup->mutable_textbox();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_TextPath* CT_Oval::add_textpath()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_TextPath* pNewChild = pChildGroup->mutable_textpath();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_ImageData* CT_Oval::add_imagedata()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_ImageData* pNewChild = pChildGroup->mutable_imagedata();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_Skew* CT_Oval::add_o_skew()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_Skew* pNewChild = pChildGroup->mutable_o_skew();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_Extrusion* CT_Oval::add_o_extrusion()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_Extrusion* pNewChild = pChildGroup->mutable_o_extrusion();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_Callout* CT_Oval::add_o_callout()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_Callout* pNewChild = pChildGroup->mutable_o_callout();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_Lock* CT_Oval::add_o_lock()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_Lock* pNewChild = pChildGroup->mutable_o_lock();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_ClipPath* CT_Oval::add_o_clippath()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_ClipPath* pNewChild = pChildGroup->mutable_o_clippath();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_SignatureLine* CT_Oval::add_o_signatureline()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_SignatureLine* pNewChild = pChildGroup->mutable_o_signatureline();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w10::CT_Wrap* CT_Oval::add_w10_wrap()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w10::CT_Wrap* pNewChild = pChildGroup->mutable_w10_wrap();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w10::CT_AnchorLock* CT_Oval::add_w10_anchorlock()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w10::CT_AnchorLock* pNewChild = pChildGroup->mutable_w10_anchorlock();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w10::CT_Border* CT_Oval::add_w10_bordertop()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w10::CT_Border* pNewChild = pChildGroup->mutable_w10_bordertop();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w10::CT_Border* CT_Oval::add_w10_borderbottom()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w10::CT_Border* pNewChild = pChildGroup->mutable_w10_borderbottom();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w10::CT_Border* CT_Oval::add_w10_borderleft()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w10::CT_Border* pNewChild = pChildGroup->mutable_w10_borderleft();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w10::CT_Border* CT_Oval::add_w10_borderright()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w10::CT_Border* pNewChild = pChildGroup->mutable_w10_borderright();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_x::CT_ClientData* CT_Oval::add_x_ClientData()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_x::CT_ClientData* pNewChild = pChildGroup->mutable_x_ClientData();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_pvml::CT_Rel* CT_Oval::add_pvml_textdata()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_pvml::CT_Rel* pNewChild = pChildGroup->mutable_pvml_textdata();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    void CT_Oval::clear()
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

    void CT_Oval::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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
            if ((*iter)->has_path())
            {
                (*iter)->get_path().toXmlElem("v:path", "", _outStream);
            }
            else if ((*iter)->has_formulas())
            {
                (*iter)->get_formulas().toXmlElem("v:formulas", "", _outStream);
            }
            else if ((*iter)->has_handles())
            {
                (*iter)->get_handles().toXmlElem("v:handles", "", _outStream);
            }
            else if ((*iter)->has_fill())
            {
                (*iter)->get_fill().toXmlElem("v:fill", "", _outStream);
            }
            else if ((*iter)->has_stroke())
            {
                (*iter)->get_stroke().toXmlElem("v:stroke", "", _outStream);
            }
            else if ((*iter)->has_shadow())
            {
                (*iter)->get_shadow().toXmlElem("v:shadow", "", _outStream);
            }
            else if ((*iter)->has_textbox())
            {
                (*iter)->get_textbox().toXmlElem("v:textbox", "", _outStream);
            }
            else if ((*iter)->has_textpath())
            {
                (*iter)->get_textpath().toXmlElem("v:textpath", "", _outStream);
            }
            else if ((*iter)->has_imagedata())
            {
                (*iter)->get_imagedata().toXmlElem("v:imagedata", "", _outStream);
            }
            else if ((*iter)->has_o_skew())
            {
                (*iter)->get_o_skew().toXmlElem("v:skew", "", _outStream);
            }
            else if ((*iter)->has_o_extrusion())
            {
                (*iter)->get_o_extrusion().toXmlElem("v:extrusion", "", _outStream);
            }
            else if ((*iter)->has_o_callout())
            {
                (*iter)->get_o_callout().toXmlElem("v:callout", "", _outStream);
            }
            else if ((*iter)->has_o_lock())
            {
                (*iter)->get_o_lock().toXmlElem("v:lock", "", _outStream);
            }
            else if ((*iter)->has_o_clippath())
            {
                (*iter)->get_o_clippath().toXmlElem("v:clippath", "", _outStream);
            }
            else if ((*iter)->has_o_signatureline())
            {
                (*iter)->get_o_signatureline().toXmlElem("v:signatureline", "", _outStream);
            }
            else if ((*iter)->has_w10_wrap())
            {
                (*iter)->get_w10_wrap().toXmlElem("v:wrap", "", _outStream);
            }
            else if ((*iter)->has_w10_anchorlock())
            {
                (*iter)->get_w10_anchorlock().toXmlElem("v:anchorlock", "", _outStream);
            }
            else if ((*iter)->has_w10_bordertop())
            {
                (*iter)->get_w10_bordertop().toXmlElem("v:bordertop", "", _outStream);
            }
            else if ((*iter)->has_w10_borderbottom())
            {
                (*iter)->get_w10_borderbottom().toXmlElem("v:borderbottom", "", _outStream);
            }
            else if ((*iter)->has_w10_borderleft())
            {
                (*iter)->get_w10_borderleft().toXmlElem("v:borderleft", "", _outStream);
            }
            else if ((*iter)->has_w10_borderright())
            {
                (*iter)->get_w10_borderright().toXmlElem("v:borderright", "", _outStream);
            }
            else if ((*iter)->has_x_ClientData())
            {
                (*iter)->get_x_ClientData().toXmlElem("v:ClientData", "", _outStream);
            }
            else if ((*iter)->has_pvml_textdata())
            {
                (*iter)->get_pvml_textdata().toXmlElem("v:textdata", "", _outStream);
            }
        }
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_Oval& CT_Oval::default_instance()
    {    
    if (!CT_Oval::default_instance_)
    {
        CT_Oval::default_instance_ = new CT_Oval();
    }
    return *CT_Oval::default_instance_;
    }


    // CT_PolyLine
    CT_Path* CT_PolyLine::add_path()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Path* pNewChild = pChildGroup->mutable_path();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Formulas* CT_PolyLine::add_formulas()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Formulas* pNewChild = pChildGroup->mutable_formulas();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Handles* CT_PolyLine::add_handles()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Handles* pNewChild = pChildGroup->mutable_handles();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Fill* CT_PolyLine::add_fill()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Fill* pNewChild = pChildGroup->mutable_fill();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Stroke* CT_PolyLine::add_stroke()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Stroke* pNewChild = pChildGroup->mutable_stroke();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Shadow* CT_PolyLine::add_shadow()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Shadow* pNewChild = pChildGroup->mutable_shadow();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Textbox* CT_PolyLine::add_textbox()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Textbox* pNewChild = pChildGroup->mutable_textbox();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_TextPath* CT_PolyLine::add_textpath()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_TextPath* pNewChild = pChildGroup->mutable_textpath();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_ImageData* CT_PolyLine::add_imagedata()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_ImageData* pNewChild = pChildGroup->mutable_imagedata();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_Skew* CT_PolyLine::add_o_skew()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_Skew* pNewChild = pChildGroup->mutable_o_skew();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_Extrusion* CT_PolyLine::add_o_extrusion()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_Extrusion* pNewChild = pChildGroup->mutable_o_extrusion();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_Callout* CT_PolyLine::add_o_callout()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_Callout* pNewChild = pChildGroup->mutable_o_callout();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_Lock* CT_PolyLine::add_o_lock()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_Lock* pNewChild = pChildGroup->mutable_o_lock();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_ClipPath* CT_PolyLine::add_o_clippath()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_ClipPath* pNewChild = pChildGroup->mutable_o_clippath();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_SignatureLine* CT_PolyLine::add_o_signatureline()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_SignatureLine* pNewChild = pChildGroup->mutable_o_signatureline();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w10::CT_Wrap* CT_PolyLine::add_w10_wrap()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w10::CT_Wrap* pNewChild = pChildGroup->mutable_w10_wrap();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w10::CT_AnchorLock* CT_PolyLine::add_w10_anchorlock()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w10::CT_AnchorLock* pNewChild = pChildGroup->mutable_w10_anchorlock();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w10::CT_Border* CT_PolyLine::add_w10_bordertop()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w10::CT_Border* pNewChild = pChildGroup->mutable_w10_bordertop();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w10::CT_Border* CT_PolyLine::add_w10_borderbottom()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w10::CT_Border* pNewChild = pChildGroup->mutable_w10_borderbottom();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w10::CT_Border* CT_PolyLine::add_w10_borderleft()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w10::CT_Border* pNewChild = pChildGroup->mutable_w10_borderleft();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w10::CT_Border* CT_PolyLine::add_w10_borderright()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w10::CT_Border* pNewChild = pChildGroup->mutable_w10_borderright();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_x::CT_ClientData* CT_PolyLine::add_x_ClientData()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_x::CT_ClientData* pNewChild = pChildGroup->mutable_x_ClientData();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_pvml::CT_Rel* CT_PolyLine::add_pvml_textdata()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_pvml::CT_Rel* pNewChild = pChildGroup->mutable_pvml_textdata();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_Ink* CT_PolyLine::add_o_ink()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_Ink* pNewChild = pChildGroup->mutable_o_ink();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    void CT_PolyLine::clear()
    {    
    m_has_points_attr = false;
    m_points_attr.clear();
    
    {
        vector<ChildGroup_1*>::iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_1.clear();
    }
    }

    void CT_PolyLine::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
    if (m_has_points_attr)
    {
        _outStream << " " << "points" << "=\"" << m_points_attr << "\"";
    }
    
            _outStream << ">";
            
    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_path())
            {
                (*iter)->get_path().toXmlElem("v:path", "", _outStream);
            }
            else if ((*iter)->has_formulas())
            {
                (*iter)->get_formulas().toXmlElem("v:formulas", "", _outStream);
            }
            else if ((*iter)->has_handles())
            {
                (*iter)->get_handles().toXmlElem("v:handles", "", _outStream);
            }
            else if ((*iter)->has_fill())
            {
                (*iter)->get_fill().toXmlElem("v:fill", "", _outStream);
            }
            else if ((*iter)->has_stroke())
            {
                (*iter)->get_stroke().toXmlElem("v:stroke", "", _outStream);
            }
            else if ((*iter)->has_shadow())
            {
                (*iter)->get_shadow().toXmlElem("v:shadow", "", _outStream);
            }
            else if ((*iter)->has_textbox())
            {
                (*iter)->get_textbox().toXmlElem("v:textbox", "", _outStream);
            }
            else if ((*iter)->has_textpath())
            {
                (*iter)->get_textpath().toXmlElem("v:textpath", "", _outStream);
            }
            else if ((*iter)->has_imagedata())
            {
                (*iter)->get_imagedata().toXmlElem("v:imagedata", "", _outStream);
            }
            else if ((*iter)->has_o_skew())
            {
                (*iter)->get_o_skew().toXmlElem("v:skew", "", _outStream);
            }
            else if ((*iter)->has_o_extrusion())
            {
                (*iter)->get_o_extrusion().toXmlElem("v:extrusion", "", _outStream);
            }
            else if ((*iter)->has_o_callout())
            {
                (*iter)->get_o_callout().toXmlElem("v:callout", "", _outStream);
            }
            else if ((*iter)->has_o_lock())
            {
                (*iter)->get_o_lock().toXmlElem("v:lock", "", _outStream);
            }
            else if ((*iter)->has_o_clippath())
            {
                (*iter)->get_o_clippath().toXmlElem("v:clippath", "", _outStream);
            }
            else if ((*iter)->has_o_signatureline())
            {
                (*iter)->get_o_signatureline().toXmlElem("v:signatureline", "", _outStream);
            }
            else if ((*iter)->has_w10_wrap())
            {
                (*iter)->get_w10_wrap().toXmlElem("v:wrap", "", _outStream);
            }
            else if ((*iter)->has_w10_anchorlock())
            {
                (*iter)->get_w10_anchorlock().toXmlElem("v:anchorlock", "", _outStream);
            }
            else if ((*iter)->has_w10_bordertop())
            {
                (*iter)->get_w10_bordertop().toXmlElem("v:bordertop", "", _outStream);
            }
            else if ((*iter)->has_w10_borderbottom())
            {
                (*iter)->get_w10_borderbottom().toXmlElem("v:borderbottom", "", _outStream);
            }
            else if ((*iter)->has_w10_borderleft())
            {
                (*iter)->get_w10_borderleft().toXmlElem("v:borderleft", "", _outStream);
            }
            else if ((*iter)->has_w10_borderright())
            {
                (*iter)->get_w10_borderright().toXmlElem("v:borderright", "", _outStream);
            }
            else if ((*iter)->has_x_ClientData())
            {
                (*iter)->get_x_ClientData().toXmlElem("v:ClientData", "", _outStream);
            }
            else if ((*iter)->has_pvml_textdata())
            {
                (*iter)->get_pvml_textdata().toXmlElem("v:textdata", "", _outStream);
            }
            else if ((*iter)->has_o_ink())
            {
                (*iter)->get_o_ink().toXmlElem("v:ink", "", _outStream);
            }
        }
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_PolyLine& CT_PolyLine::default_instance()
    {    
    if (!CT_PolyLine::default_instance_)
    {
        CT_PolyLine::default_instance_ = new CT_PolyLine();
    }
    return *CT_PolyLine::default_instance_;
    }

    bool CT_PolyLine::has_points_attr() const
    {    
    return m_has_points_attr;
    }

    void CT_PolyLine::set_points_attr(const XSD::string_& _points_attr)
    {    
    m_has_points_attr = true;
    m_points_attr = _points_attr;
    }

    const XSD::string_& CT_PolyLine::get_points_attr() const
    {    
    return m_points_attr;
    }


    // CT_Rect
    CT_Path* CT_Rect::add_path()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Path* pNewChild = pChildGroup->mutable_path();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Formulas* CT_Rect::add_formulas()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Formulas* pNewChild = pChildGroup->mutable_formulas();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Handles* CT_Rect::add_handles()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Handles* pNewChild = pChildGroup->mutable_handles();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Fill* CT_Rect::add_fill()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Fill* pNewChild = pChildGroup->mutable_fill();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Stroke* CT_Rect::add_stroke()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Stroke* pNewChild = pChildGroup->mutable_stroke();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Shadow* CT_Rect::add_shadow()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Shadow* pNewChild = pChildGroup->mutable_shadow();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Textbox* CT_Rect::add_textbox()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Textbox* pNewChild = pChildGroup->mutable_textbox();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_TextPath* CT_Rect::add_textpath()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_TextPath* pNewChild = pChildGroup->mutable_textpath();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_ImageData* CT_Rect::add_imagedata()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_ImageData* pNewChild = pChildGroup->mutable_imagedata();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_Skew* CT_Rect::add_o_skew()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_Skew* pNewChild = pChildGroup->mutable_o_skew();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_Extrusion* CT_Rect::add_o_extrusion()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_Extrusion* pNewChild = pChildGroup->mutable_o_extrusion();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_Callout* CT_Rect::add_o_callout()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_Callout* pNewChild = pChildGroup->mutable_o_callout();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_Lock* CT_Rect::add_o_lock()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_Lock* pNewChild = pChildGroup->mutable_o_lock();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_ClipPath* CT_Rect::add_o_clippath()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_ClipPath* pNewChild = pChildGroup->mutable_o_clippath();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_SignatureLine* CT_Rect::add_o_signatureline()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_SignatureLine* pNewChild = pChildGroup->mutable_o_signatureline();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w10::CT_Wrap* CT_Rect::add_w10_wrap()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w10::CT_Wrap* pNewChild = pChildGroup->mutable_w10_wrap();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w10::CT_AnchorLock* CT_Rect::add_w10_anchorlock()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w10::CT_AnchorLock* pNewChild = pChildGroup->mutable_w10_anchorlock();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w10::CT_Border* CT_Rect::add_w10_bordertop()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w10::CT_Border* pNewChild = pChildGroup->mutable_w10_bordertop();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w10::CT_Border* CT_Rect::add_w10_borderbottom()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w10::CT_Border* pNewChild = pChildGroup->mutable_w10_borderbottom();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w10::CT_Border* CT_Rect::add_w10_borderleft()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w10::CT_Border* pNewChild = pChildGroup->mutable_w10_borderleft();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w10::CT_Border* CT_Rect::add_w10_borderright()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w10::CT_Border* pNewChild = pChildGroup->mutable_w10_borderright();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_x::CT_ClientData* CT_Rect::add_x_ClientData()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_x::CT_ClientData* pNewChild = pChildGroup->mutable_x_ClientData();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_pvml::CT_Rel* CT_Rect::add_pvml_textdata()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_pvml::CT_Rel* pNewChild = pChildGroup->mutable_pvml_textdata();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    void CT_Rect::clear()
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

    void CT_Rect::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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
            if ((*iter)->has_path())
            {
                (*iter)->get_path().toXmlElem("v:path", "", _outStream);
            }
            else if ((*iter)->has_formulas())
            {
                (*iter)->get_formulas().toXmlElem("v:formulas", "", _outStream);
            }
            else if ((*iter)->has_handles())
            {
                (*iter)->get_handles().toXmlElem("v:handles", "", _outStream);
            }
            else if ((*iter)->has_fill())
            {
                (*iter)->get_fill().toXmlElem("v:fill", "", _outStream);
            }
            else if ((*iter)->has_stroke())
            {
                (*iter)->get_stroke().toXmlElem("v:stroke", "", _outStream);
            }
            else if ((*iter)->has_shadow())
            {
                (*iter)->get_shadow().toXmlElem("v:shadow", "", _outStream);
            }
            else if ((*iter)->has_textbox())
            {
                (*iter)->get_textbox().toXmlElem("v:textbox", "", _outStream);
            }
            else if ((*iter)->has_textpath())
            {
                (*iter)->get_textpath().toXmlElem("v:textpath", "", _outStream);
            }
            else if ((*iter)->has_imagedata())
            {
                (*iter)->get_imagedata().toXmlElem("v:imagedata", "", _outStream);
            }
            else if ((*iter)->has_o_skew())
            {
                (*iter)->get_o_skew().toXmlElem("v:skew", "", _outStream);
            }
            else if ((*iter)->has_o_extrusion())
            {
                (*iter)->get_o_extrusion().toXmlElem("v:extrusion", "", _outStream);
            }
            else if ((*iter)->has_o_callout())
            {
                (*iter)->get_o_callout().toXmlElem("v:callout", "", _outStream);
            }
            else if ((*iter)->has_o_lock())
            {
                (*iter)->get_o_lock().toXmlElem("v:lock", "", _outStream);
            }
            else if ((*iter)->has_o_clippath())
            {
                (*iter)->get_o_clippath().toXmlElem("v:clippath", "", _outStream);
            }
            else if ((*iter)->has_o_signatureline())
            {
                (*iter)->get_o_signatureline().toXmlElem("v:signatureline", "", _outStream);
            }
            else if ((*iter)->has_w10_wrap())
            {
                (*iter)->get_w10_wrap().toXmlElem("v:wrap", "", _outStream);
            }
            else if ((*iter)->has_w10_anchorlock())
            {
                (*iter)->get_w10_anchorlock().toXmlElem("v:anchorlock", "", _outStream);
            }
            else if ((*iter)->has_w10_bordertop())
            {
                (*iter)->get_w10_bordertop().toXmlElem("v:bordertop", "", _outStream);
            }
            else if ((*iter)->has_w10_borderbottom())
            {
                (*iter)->get_w10_borderbottom().toXmlElem("v:borderbottom", "", _outStream);
            }
            else if ((*iter)->has_w10_borderleft())
            {
                (*iter)->get_w10_borderleft().toXmlElem("v:borderleft", "", _outStream);
            }
            else if ((*iter)->has_w10_borderright())
            {
                (*iter)->get_w10_borderright().toXmlElem("v:borderright", "", _outStream);
            }
            else if ((*iter)->has_x_ClientData())
            {
                (*iter)->get_x_ClientData().toXmlElem("v:ClientData", "", _outStream);
            }
            else if ((*iter)->has_pvml_textdata())
            {
                (*iter)->get_pvml_textdata().toXmlElem("v:textdata", "", _outStream);
            }
        }
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_Rect& CT_Rect::default_instance()
    {    
    if (!CT_Rect::default_instance_)
    {
        CT_Rect::default_instance_ = new CT_Rect();
    }
    return *CT_Rect::default_instance_;
    }


    // CT_RoundRect
    CT_Path* CT_RoundRect::add_path()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Path* pNewChild = pChildGroup->mutable_path();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Formulas* CT_RoundRect::add_formulas()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Formulas* pNewChild = pChildGroup->mutable_formulas();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Handles* CT_RoundRect::add_handles()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Handles* pNewChild = pChildGroup->mutable_handles();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Fill* CT_RoundRect::add_fill()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Fill* pNewChild = pChildGroup->mutable_fill();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Stroke* CT_RoundRect::add_stroke()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Stroke* pNewChild = pChildGroup->mutable_stroke();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Shadow* CT_RoundRect::add_shadow()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Shadow* pNewChild = pChildGroup->mutable_shadow();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Textbox* CT_RoundRect::add_textbox()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Textbox* pNewChild = pChildGroup->mutable_textbox();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_TextPath* CT_RoundRect::add_textpath()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_TextPath* pNewChild = pChildGroup->mutable_textpath();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_ImageData* CT_RoundRect::add_imagedata()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_ImageData* pNewChild = pChildGroup->mutable_imagedata();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_Skew* CT_RoundRect::add_o_skew()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_Skew* pNewChild = pChildGroup->mutable_o_skew();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_Extrusion* CT_RoundRect::add_o_extrusion()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_Extrusion* pNewChild = pChildGroup->mutable_o_extrusion();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_Callout* CT_RoundRect::add_o_callout()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_Callout* pNewChild = pChildGroup->mutable_o_callout();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_Lock* CT_RoundRect::add_o_lock()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_Lock* pNewChild = pChildGroup->mutable_o_lock();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_ClipPath* CT_RoundRect::add_o_clippath()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_ClipPath* pNewChild = pChildGroup->mutable_o_clippath();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_SignatureLine* CT_RoundRect::add_o_signatureline()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_SignatureLine* pNewChild = pChildGroup->mutable_o_signatureline();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w10::CT_Wrap* CT_RoundRect::add_w10_wrap()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w10::CT_Wrap* pNewChild = pChildGroup->mutable_w10_wrap();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w10::CT_AnchorLock* CT_RoundRect::add_w10_anchorlock()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w10::CT_AnchorLock* pNewChild = pChildGroup->mutable_w10_anchorlock();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w10::CT_Border* CT_RoundRect::add_w10_bordertop()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w10::CT_Border* pNewChild = pChildGroup->mutable_w10_bordertop();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w10::CT_Border* CT_RoundRect::add_w10_borderbottom()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w10::CT_Border* pNewChild = pChildGroup->mutable_w10_borderbottom();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w10::CT_Border* CT_RoundRect::add_w10_borderleft()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w10::CT_Border* pNewChild = pChildGroup->mutable_w10_borderleft();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w10::CT_Border* CT_RoundRect::add_w10_borderright()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w10::CT_Border* pNewChild = pChildGroup->mutable_w10_borderright();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_x::CT_ClientData* CT_RoundRect::add_x_ClientData()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_x::CT_ClientData* pNewChild = pChildGroup->mutable_x_ClientData();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_pvml::CT_Rel* CT_RoundRect::add_pvml_textdata()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_pvml::CT_Rel* pNewChild = pChildGroup->mutable_pvml_textdata();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    void CT_RoundRect::clear()
    {    
    m_has_arcsize_attr = false;
    m_arcsize_attr.clear();
    
    {
        vector<ChildGroup_1*>::iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_1.clear();
    }
    }

    void CT_RoundRect::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
    if (m_has_arcsize_attr)
    {
        _outStream << " " << "arcsize" << "=\"" << m_arcsize_attr << "\"";
    }
    
            _outStream << ">";
            
    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_path())
            {
                (*iter)->get_path().toXmlElem("v:path", "", _outStream);
            }
            else if ((*iter)->has_formulas())
            {
                (*iter)->get_formulas().toXmlElem("v:formulas", "", _outStream);
            }
            else if ((*iter)->has_handles())
            {
                (*iter)->get_handles().toXmlElem("v:handles", "", _outStream);
            }
            else if ((*iter)->has_fill())
            {
                (*iter)->get_fill().toXmlElem("v:fill", "", _outStream);
            }
            else if ((*iter)->has_stroke())
            {
                (*iter)->get_stroke().toXmlElem("v:stroke", "", _outStream);
            }
            else if ((*iter)->has_shadow())
            {
                (*iter)->get_shadow().toXmlElem("v:shadow", "", _outStream);
            }
            else if ((*iter)->has_textbox())
            {
                (*iter)->get_textbox().toXmlElem("v:textbox", "", _outStream);
            }
            else if ((*iter)->has_textpath())
            {
                (*iter)->get_textpath().toXmlElem("v:textpath", "", _outStream);
            }
            else if ((*iter)->has_imagedata())
            {
                (*iter)->get_imagedata().toXmlElem("v:imagedata", "", _outStream);
            }
            else if ((*iter)->has_o_skew())
            {
                (*iter)->get_o_skew().toXmlElem("v:skew", "", _outStream);
            }
            else if ((*iter)->has_o_extrusion())
            {
                (*iter)->get_o_extrusion().toXmlElem("v:extrusion", "", _outStream);
            }
            else if ((*iter)->has_o_callout())
            {
                (*iter)->get_o_callout().toXmlElem("v:callout", "", _outStream);
            }
            else if ((*iter)->has_o_lock())
            {
                (*iter)->get_o_lock().toXmlElem("v:lock", "", _outStream);
            }
            else if ((*iter)->has_o_clippath())
            {
                (*iter)->get_o_clippath().toXmlElem("v:clippath", "", _outStream);
            }
            else if ((*iter)->has_o_signatureline())
            {
                (*iter)->get_o_signatureline().toXmlElem("v:signatureline", "", _outStream);
            }
            else if ((*iter)->has_w10_wrap())
            {
                (*iter)->get_w10_wrap().toXmlElem("v:wrap", "", _outStream);
            }
            else if ((*iter)->has_w10_anchorlock())
            {
                (*iter)->get_w10_anchorlock().toXmlElem("v:anchorlock", "", _outStream);
            }
            else if ((*iter)->has_w10_bordertop())
            {
                (*iter)->get_w10_bordertop().toXmlElem("v:bordertop", "", _outStream);
            }
            else if ((*iter)->has_w10_borderbottom())
            {
                (*iter)->get_w10_borderbottom().toXmlElem("v:borderbottom", "", _outStream);
            }
            else if ((*iter)->has_w10_borderleft())
            {
                (*iter)->get_w10_borderleft().toXmlElem("v:borderleft", "", _outStream);
            }
            else if ((*iter)->has_w10_borderright())
            {
                (*iter)->get_w10_borderright().toXmlElem("v:borderright", "", _outStream);
            }
            else if ((*iter)->has_x_ClientData())
            {
                (*iter)->get_x_ClientData().toXmlElem("v:ClientData", "", _outStream);
            }
            else if ((*iter)->has_pvml_textdata())
            {
                (*iter)->get_pvml_textdata().toXmlElem("v:textdata", "", _outStream);
            }
        }
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_RoundRect& CT_RoundRect::default_instance()
    {    
    if (!CT_RoundRect::default_instance_)
    {
        CT_RoundRect::default_instance_ = new CT_RoundRect();
    }
    return *CT_RoundRect::default_instance_;
    }

    bool CT_RoundRect::has_arcsize_attr() const
    {    
    return m_has_arcsize_attr;
    }

    void CT_RoundRect::set_arcsize_attr(const XSD::string_& _arcsize_attr)
    {    
    m_has_arcsize_attr = true;
    m_arcsize_attr = _arcsize_attr;
    }

    const XSD::string_& CT_RoundRect::get_arcsize_attr() const
    {    
    return m_arcsize_attr;
    }


    // shape_element
    CT_Path* shape_element::add_path()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Path* pNewChild = pChildGroup->mutable_path();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Formulas* shape_element::add_formulas()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Formulas* pNewChild = pChildGroup->mutable_formulas();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Handles* shape_element::add_handles()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Handles* pNewChild = pChildGroup->mutable_handles();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Fill* shape_element::add_fill()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Fill* pNewChild = pChildGroup->mutable_fill();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Stroke* shape_element::add_stroke()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Stroke* pNewChild = pChildGroup->mutable_stroke();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Shadow* shape_element::add_shadow()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Shadow* pNewChild = pChildGroup->mutable_shadow();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Textbox* shape_element::add_textbox()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Textbox* pNewChild = pChildGroup->mutable_textbox();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_TextPath* shape_element::add_textpath()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_TextPath* pNewChild = pChildGroup->mutable_textpath();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_ImageData* shape_element::add_imagedata()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_ImageData* pNewChild = pChildGroup->mutable_imagedata();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_Skew* shape_element::add_o_skew()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_Skew* pNewChild = pChildGroup->mutable_o_skew();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_Extrusion* shape_element::add_o_extrusion()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_Extrusion* pNewChild = pChildGroup->mutable_o_extrusion();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_Callout* shape_element::add_o_callout()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_Callout* pNewChild = pChildGroup->mutable_o_callout();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_Lock* shape_element::add_o_lock()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_Lock* pNewChild = pChildGroup->mutable_o_lock();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_ClipPath* shape_element::add_o_clippath()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_ClipPath* pNewChild = pChildGroup->mutable_o_clippath();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_SignatureLine* shape_element::add_o_signatureline()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_SignatureLine* pNewChild = pChildGroup->mutable_o_signatureline();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w10::CT_Wrap* shape_element::add_w10_wrap()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w10::CT_Wrap* pNewChild = pChildGroup->mutable_w10_wrap();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w10::CT_AnchorLock* shape_element::add_w10_anchorlock()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w10::CT_AnchorLock* pNewChild = pChildGroup->mutable_w10_anchorlock();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w10::CT_Border* shape_element::add_w10_bordertop()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w10::CT_Border* pNewChild = pChildGroup->mutable_w10_bordertop();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w10::CT_Border* shape_element::add_w10_borderbottom()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w10::CT_Border* pNewChild = pChildGroup->mutable_w10_borderbottom();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w10::CT_Border* shape_element::add_w10_borderleft()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w10::CT_Border* pNewChild = pChildGroup->mutable_w10_borderleft();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w10::CT_Border* shape_element::add_w10_borderright()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w10::CT_Border* pNewChild = pChildGroup->mutable_w10_borderright();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_x::CT_ClientData* shape_element::add_x_ClientData()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_x::CT_ClientData* pNewChild = pChildGroup->mutable_x_ClientData();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_pvml::CT_Rel* shape_element::add_pvml_textdata()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_pvml::CT_Rel* pNewChild = pChildGroup->mutable_pvml_textdata();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_Ink* shape_element::add_o_ink()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_Ink* pNewChild = pChildGroup->mutable_o_ink();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_pvml::CT_Empty* shape_element::add_pvml_iscomment()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_pvml::CT_Empty* pNewChild = pChildGroup->mutable_pvml_iscomment();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_EquationXml* shape_element::add_o_equationxml()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_EquationXml* pNewChild = pChildGroup->mutable_o_equationxml();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    void shape_element::clear()
    {    
    m_has_type_attr = false;
    m_type_attr.clear();
    
    m_has_adj_attr = false;
    m_adj_attr.clear();
    
    m_has_path_attr = false;
    m_path_attr.clear();
    
    m_has_gfxdata_attr = false;
    m_gfxdata_attr.clear();
    
    m_has_equationxml_attr = false;
    m_equationxml_attr.clear();
    
    {
        vector<ChildGroup_1*>::iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_1.clear();
    }
    }

    void shape_element::toXml(std::ostream& _outStream) const
    {    
    _outStream << "<v:shape";
    
    _outStream << " " << "xmlns:v=\"urn:schemas-microsoft-com:vml\"";
    _outStream << " " << "xmlns:x=\"urn:schemas-microsoft-com:office:excel\"";
    _outStream << " " << "xmlns:w=\"http://schemas.openxmlformats.org/wordprocessingml/2006/main\"";
    _outStream << " " << "xmlns:s=\"http://schemas.openxmlformats.org/officeDocument/2006/sharedTypes\"";
    _outStream << " " << "xmlns:w10=\"urn:schemas-microsoft-com:office:word\"";
    _outStream << " " << "xmlns:r=\"http://schemas.openxmlformats.org/officeDocument/2006/relationships\"";
    _outStream << " " << "xmlns:o=\"urn:schemas-microsoft-com:office:office\"";
    _outStream << " " << "xmlns:pvml=\"urn:schemas-microsoft-com:office:powerpoint\"";
    
    if (m_has_type_attr)
    {
        _outStream << " " << "type" << "=\"" << m_type_attr << "\"";
    }
    
    
    if (m_has_adj_attr)
    {
        _outStream << " " << "adj" << "=\"" << m_adj_attr << "\"";
    }
    
    
    if (m_has_path_attr)
    {
        _outStream << " " << "path" << "=\"" << m_path_attr << "\"";
    }
    
    
    if (m_has_gfxdata_attr)
    {
        _outStream << " " << "gfxdata" << "=\"" << m_gfxdata_attr << "\"";
    }
    
    
    if (m_has_equationxml_attr)
    {
        _outStream << " " << "equationxml" << "=\"" << m_equationxml_attr << "\"";
    }
    
    _outStream << ">";
    
    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_path())
            {
                (*iter)->get_path().toXmlElem("v:path", "", _outStream);
            }
            else if ((*iter)->has_formulas())
            {
                (*iter)->get_formulas().toXmlElem("v:formulas", "", _outStream);
            }
            else if ((*iter)->has_handles())
            {
                (*iter)->get_handles().toXmlElem("v:handles", "", _outStream);
            }
            else if ((*iter)->has_fill())
            {
                (*iter)->get_fill().toXmlElem("v:fill", "", _outStream);
            }
            else if ((*iter)->has_stroke())
            {
                (*iter)->get_stroke().toXmlElem("v:stroke", "", _outStream);
            }
            else if ((*iter)->has_shadow())
            {
                (*iter)->get_shadow().toXmlElem("v:shadow", "", _outStream);
            }
            else if ((*iter)->has_textbox())
            {
                (*iter)->get_textbox().toXmlElem("v:textbox", "", _outStream);
            }
            else if ((*iter)->has_textpath())
            {
                (*iter)->get_textpath().toXmlElem("v:textpath", "", _outStream);
            }
            else if ((*iter)->has_imagedata())
            {
                (*iter)->get_imagedata().toXmlElem("v:imagedata", "", _outStream);
            }
            else if ((*iter)->has_o_skew())
            {
                (*iter)->get_o_skew().toXmlElem("v:skew", "", _outStream);
            }
            else if ((*iter)->has_o_extrusion())
            {
                (*iter)->get_o_extrusion().toXmlElem("v:extrusion", "", _outStream);
            }
            else if ((*iter)->has_o_callout())
            {
                (*iter)->get_o_callout().toXmlElem("v:callout", "", _outStream);
            }
            else if ((*iter)->has_o_lock())
            {
                (*iter)->get_o_lock().toXmlElem("v:lock", "", _outStream);
            }
            else if ((*iter)->has_o_clippath())
            {
                (*iter)->get_o_clippath().toXmlElem("v:clippath", "", _outStream);
            }
            else if ((*iter)->has_o_signatureline())
            {
                (*iter)->get_o_signatureline().toXmlElem("v:signatureline", "", _outStream);
            }
            else if ((*iter)->has_w10_wrap())
            {
                (*iter)->get_w10_wrap().toXmlElem("v:wrap", "", _outStream);
            }
            else if ((*iter)->has_w10_anchorlock())
            {
                (*iter)->get_w10_anchorlock().toXmlElem("v:anchorlock", "", _outStream);
            }
            else if ((*iter)->has_w10_bordertop())
            {
                (*iter)->get_w10_bordertop().toXmlElem("v:bordertop", "", _outStream);
            }
            else if ((*iter)->has_w10_borderbottom())
            {
                (*iter)->get_w10_borderbottom().toXmlElem("v:borderbottom", "", _outStream);
            }
            else if ((*iter)->has_w10_borderleft())
            {
                (*iter)->get_w10_borderleft().toXmlElem("v:borderleft", "", _outStream);
            }
            else if ((*iter)->has_w10_borderright())
            {
                (*iter)->get_w10_borderright().toXmlElem("v:borderright", "", _outStream);
            }
            else if ((*iter)->has_x_ClientData())
            {
                (*iter)->get_x_ClientData().toXmlElem("v:ClientData", "", _outStream);
            }
            else if ((*iter)->has_pvml_textdata())
            {
                (*iter)->get_pvml_textdata().toXmlElem("v:textdata", "", _outStream);
            }
            else if ((*iter)->has_o_ink())
            {
                (*iter)->get_o_ink().toXmlElem("v:ink", "", _outStream);
            }
            else if ((*iter)->has_pvml_iscomment())
            {
                (*iter)->get_pvml_iscomment().toXmlElem("v:iscomment", "", _outStream);
            }
            else if ((*iter)->has_o_equationxml())
            {
                (*iter)->get_o_equationxml().toXmlElem("v:equationxml", "", _outStream);
            }
        }
    }
    
    _outStream << "</v:shape>";
    }

    const shape_element& shape_element::default_instance()
    {    
    if (!shape_element::default_instance_)
    {
        shape_element::default_instance_ = new shape_element();
    }
    return *shape_element::default_instance_;
    }

    bool shape_element::has_type_attr() const
    {    
    return m_has_type_attr;
    }

    void shape_element::set_type_attr(const XSD::string_& _type_attr)
    {    
    m_has_type_attr = true;
    m_type_attr = _type_attr;
    }

    const XSD::string_& shape_element::get_type_attr() const
    {    
    return m_type_attr;
    }

    bool shape_element::has_adj_attr() const
    {    
    return m_has_adj_attr;
    }

    void shape_element::set_adj_attr(const XSD::string_& _adj_attr)
    {    
    m_has_adj_attr = true;
    m_adj_attr = _adj_attr;
    }

    const XSD::string_& shape_element::get_adj_attr() const
    {    
    return m_adj_attr;
    }

    bool shape_element::has_path_attr() const
    {    
    return m_has_path_attr;
    }

    void shape_element::set_path_attr(const XSD::string_& _path_attr)
    {    
    m_has_path_attr = true;
    m_path_attr = _path_attr;
    }

    const XSD::string_& shape_element::get_path_attr() const
    {    
    return m_path_attr;
    }

    bool shape_element::has_gfxdata_attr() const
    {    
    return m_has_gfxdata_attr;
    }

    void shape_element::set_gfxdata_attr(const XSD::base64Binary_& _gfxdata_attr)
    {    
    m_has_gfxdata_attr = true;
    m_gfxdata_attr = _gfxdata_attr;
    }

    const XSD::base64Binary_& shape_element::get_gfxdata_attr() const
    {    
    return m_gfxdata_attr;
    }

    bool shape_element::has_equationxml_attr() const
    {    
    return m_has_equationxml_attr;
    }

    void shape_element::set_equationxml_attr(const XSD::string_& _equationxml_attr)
    {    
    m_has_equationxml_attr = true;
    m_equationxml_attr = _equationxml_attr;
    }

    const XSD::string_& shape_element::get_equationxml_attr() const
    {    
    return m_equationxml_attr;
    }


    // shapetype_element
    CT_Path* shapetype_element::add_path()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Path* pNewChild = pChildGroup->mutable_path();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Formulas* shapetype_element::add_formulas()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Formulas* pNewChild = pChildGroup->mutable_formulas();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Handles* shapetype_element::add_handles()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Handles* pNewChild = pChildGroup->mutable_handles();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Fill* shapetype_element::add_fill()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Fill* pNewChild = pChildGroup->mutable_fill();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Stroke* shapetype_element::add_stroke()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Stroke* pNewChild = pChildGroup->mutable_stroke();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Shadow* shapetype_element::add_shadow()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Shadow* pNewChild = pChildGroup->mutable_shadow();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Textbox* shapetype_element::add_textbox()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Textbox* pNewChild = pChildGroup->mutable_textbox();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_TextPath* shapetype_element::add_textpath()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_TextPath* pNewChild = pChildGroup->mutable_textpath();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_ImageData* shapetype_element::add_imagedata()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_ImageData* pNewChild = pChildGroup->mutable_imagedata();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_Skew* shapetype_element::add_o_skew()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_Skew* pNewChild = pChildGroup->mutable_o_skew();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_Extrusion* shapetype_element::add_o_extrusion()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_Extrusion* pNewChild = pChildGroup->mutable_o_extrusion();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_Callout* shapetype_element::add_o_callout()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_Callout* pNewChild = pChildGroup->mutable_o_callout();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_Lock* shapetype_element::add_o_lock()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_Lock* pNewChild = pChildGroup->mutable_o_lock();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_ClipPath* shapetype_element::add_o_clippath()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_ClipPath* pNewChild = pChildGroup->mutable_o_clippath();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_SignatureLine* shapetype_element::add_o_signatureline()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_SignatureLine* pNewChild = pChildGroup->mutable_o_signatureline();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w10::CT_Wrap* shapetype_element::add_w10_wrap()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w10::CT_Wrap* pNewChild = pChildGroup->mutable_w10_wrap();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w10::CT_AnchorLock* shapetype_element::add_w10_anchorlock()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w10::CT_AnchorLock* pNewChild = pChildGroup->mutable_w10_anchorlock();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w10::CT_Border* shapetype_element::add_w10_bordertop()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w10::CT_Border* pNewChild = pChildGroup->mutable_w10_bordertop();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w10::CT_Border* shapetype_element::add_w10_borderbottom()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w10::CT_Border* pNewChild = pChildGroup->mutable_w10_borderbottom();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w10::CT_Border* shapetype_element::add_w10_borderleft()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w10::CT_Border* pNewChild = pChildGroup->mutable_w10_borderleft();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w10::CT_Border* shapetype_element::add_w10_borderright()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w10::CT_Border* pNewChild = pChildGroup->mutable_w10_borderright();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_x::CT_ClientData* shapetype_element::add_x_ClientData()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_x::CT_ClientData* pNewChild = pChildGroup->mutable_x_ClientData();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_pvml::CT_Rel* shapetype_element::add_pvml_textdata()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_pvml::CT_Rel* pNewChild = pChildGroup->mutable_pvml_textdata();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    bool shapetype_element::has_o_complex() const
    {    
    return m_has_o_complex;
    }

    ns_o::CT_Complex* shapetype_element::mutable_o_complex()
    {    
    m_has_o_complex = true;
    if (!m_o_complex)
    {
        m_o_complex = new ns_o::CT_Complex();
    }
    return m_o_complex;
    }

    const ns_o::CT_Complex& shapetype_element::get_o_complex() const
    {    
    if (m_o_complex)
    {
        return *m_o_complex;
    }
    return ns_o::CT_Complex::default_instance();
    }

    void shapetype_element::clear()
    {    
    m_has_adj_attr = false;
    m_adj_attr.clear();
    
    m_has_path_attr = false;
    m_path_attr.clear();
    
    m_has_master_attr = false;
    m_master_attr.clear();
    
    {
        vector<ChildGroup_1*>::iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_1.clear();
    }
     
    m_has_o_complex = false;
    
    if (m_o_complex)
    {
        delete m_o_complex;
        m_o_complex = NULL;
    }
    
    }

    void shapetype_element::toXml(std::ostream& _outStream) const
    {    
    _outStream << "<v:shapetype";
    
    _outStream << " " << "xmlns:v=\"urn:schemas-microsoft-com:vml\"";
    _outStream << " " << "xmlns:x=\"urn:schemas-microsoft-com:office:excel\"";
    _outStream << " " << "xmlns:w=\"http://schemas.openxmlformats.org/wordprocessingml/2006/main\"";
    _outStream << " " << "xmlns:s=\"http://schemas.openxmlformats.org/officeDocument/2006/sharedTypes\"";
    _outStream << " " << "xmlns:w10=\"urn:schemas-microsoft-com:office:word\"";
    _outStream << " " << "xmlns:r=\"http://schemas.openxmlformats.org/officeDocument/2006/relationships\"";
    _outStream << " " << "xmlns:o=\"urn:schemas-microsoft-com:office:office\"";
    _outStream << " " << "xmlns:pvml=\"urn:schemas-microsoft-com:office:powerpoint\"";
    
    if (m_has_adj_attr)
    {
        _outStream << " " << "adj" << "=\"" << m_adj_attr << "\"";
    }
    
    
    if (m_has_path_attr)
    {
        _outStream << " " << "path" << "=\"" << m_path_attr << "\"";
    }
    
    
    if (m_has_master_attr)
    {
        _outStream << " " << "master" << "=\"" << m_master_attr << "\"";
    }
    
    _outStream << ">";
    
    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_path())
            {
                (*iter)->get_path().toXmlElem("v:path", "", _outStream);
            }
            else if ((*iter)->has_formulas())
            {
                (*iter)->get_formulas().toXmlElem("v:formulas", "", _outStream);
            }
            else if ((*iter)->has_handles())
            {
                (*iter)->get_handles().toXmlElem("v:handles", "", _outStream);
            }
            else if ((*iter)->has_fill())
            {
                (*iter)->get_fill().toXmlElem("v:fill", "", _outStream);
            }
            else if ((*iter)->has_stroke())
            {
                (*iter)->get_stroke().toXmlElem("v:stroke", "", _outStream);
            }
            else if ((*iter)->has_shadow())
            {
                (*iter)->get_shadow().toXmlElem("v:shadow", "", _outStream);
            }
            else if ((*iter)->has_textbox())
            {
                (*iter)->get_textbox().toXmlElem("v:textbox", "", _outStream);
            }
            else if ((*iter)->has_textpath())
            {
                (*iter)->get_textpath().toXmlElem("v:textpath", "", _outStream);
            }
            else if ((*iter)->has_imagedata())
            {
                (*iter)->get_imagedata().toXmlElem("v:imagedata", "", _outStream);
            }
            else if ((*iter)->has_o_skew())
            {
                (*iter)->get_o_skew().toXmlElem("v:skew", "", _outStream);
            }
            else if ((*iter)->has_o_extrusion())
            {
                (*iter)->get_o_extrusion().toXmlElem("v:extrusion", "", _outStream);
            }
            else if ((*iter)->has_o_callout())
            {
                (*iter)->get_o_callout().toXmlElem("v:callout", "", _outStream);
            }
            else if ((*iter)->has_o_lock())
            {
                (*iter)->get_o_lock().toXmlElem("v:lock", "", _outStream);
            }
            else if ((*iter)->has_o_clippath())
            {
                (*iter)->get_o_clippath().toXmlElem("v:clippath", "", _outStream);
            }
            else if ((*iter)->has_o_signatureline())
            {
                (*iter)->get_o_signatureline().toXmlElem("v:signatureline", "", _outStream);
            }
            else if ((*iter)->has_w10_wrap())
            {
                (*iter)->get_w10_wrap().toXmlElem("v:wrap", "", _outStream);
            }
            else if ((*iter)->has_w10_anchorlock())
            {
                (*iter)->get_w10_anchorlock().toXmlElem("v:anchorlock", "", _outStream);
            }
            else if ((*iter)->has_w10_bordertop())
            {
                (*iter)->get_w10_bordertop().toXmlElem("v:bordertop", "", _outStream);
            }
            else if ((*iter)->has_w10_borderbottom())
            {
                (*iter)->get_w10_borderbottom().toXmlElem("v:borderbottom", "", _outStream);
            }
            else if ((*iter)->has_w10_borderleft())
            {
                (*iter)->get_w10_borderleft().toXmlElem("v:borderleft", "", _outStream);
            }
            else if ((*iter)->has_w10_borderright())
            {
                (*iter)->get_w10_borderright().toXmlElem("v:borderright", "", _outStream);
            }
            else if ((*iter)->has_x_ClientData())
            {
                (*iter)->get_x_ClientData().toXmlElem("v:ClientData", "", _outStream);
            }
            else if ((*iter)->has_pvml_textdata())
            {
                (*iter)->get_pvml_textdata().toXmlElem("v:textdata", "", _outStream);
            }
        }
    }
     
    if (m_has_o_complex)
    {
        m_o_complex->toXmlElem("v:complex", "", _outStream);;
    }
    
    _outStream << "</v:shapetype>";
    }

    const shapetype_element& shapetype_element::default_instance()
    {    
    if (!shapetype_element::default_instance_)
    {
        shapetype_element::default_instance_ = new shapetype_element();
    }
    return *shapetype_element::default_instance_;
    }

    bool shapetype_element::has_adj_attr() const
    {    
    return m_has_adj_attr;
    }

    void shapetype_element::set_adj_attr(const XSD::string_& _adj_attr)
    {    
    m_has_adj_attr = true;
    m_adj_attr = _adj_attr;
    }

    const XSD::string_& shapetype_element::get_adj_attr() const
    {    
    return m_adj_attr;
    }

    bool shapetype_element::has_path_attr() const
    {    
    return m_has_path_attr;
    }

    void shapetype_element::set_path_attr(const XSD::string_& _path_attr)
    {    
    m_has_path_attr = true;
    m_path_attr = _path_attr;
    }

    const XSD::string_& shapetype_element::get_path_attr() const
    {    
    return m_path_attr;
    }

    bool shapetype_element::has_master_attr() const
    {    
    return m_has_master_attr;
    }

    void shapetype_element::set_master_attr(const XSD::string_& _master_attr)
    {    
    m_has_master_attr = true;
    m_master_attr = _master_attr;
    }

    const XSD::string_& shapetype_element::get_master_attr() const
    {    
    return m_master_attr;
    }


    // group_element
    CT_Path* group_element::add_path()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Path* pNewChild = pChildGroup->mutable_path();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Formulas* group_element::add_formulas()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Formulas* pNewChild = pChildGroup->mutable_formulas();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Handles* group_element::add_handles()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Handles* pNewChild = pChildGroup->mutable_handles();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Fill* group_element::add_fill()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Fill* pNewChild = pChildGroup->mutable_fill();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Stroke* group_element::add_stroke()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Stroke* pNewChild = pChildGroup->mutable_stroke();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Shadow* group_element::add_shadow()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Shadow* pNewChild = pChildGroup->mutable_shadow();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Textbox* group_element::add_textbox()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Textbox* pNewChild = pChildGroup->mutable_textbox();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_TextPath* group_element::add_textpath()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_TextPath* pNewChild = pChildGroup->mutable_textpath();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_ImageData* group_element::add_imagedata()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_ImageData* pNewChild = pChildGroup->mutable_imagedata();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_Skew* group_element::add_o_skew()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_Skew* pNewChild = pChildGroup->mutable_o_skew();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_Extrusion* group_element::add_o_extrusion()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_Extrusion* pNewChild = pChildGroup->mutable_o_extrusion();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_Callout* group_element::add_o_callout()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_Callout* pNewChild = pChildGroup->mutable_o_callout();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_Lock* group_element::add_o_lock()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_Lock* pNewChild = pChildGroup->mutable_o_lock();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_ClipPath* group_element::add_o_clippath()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_ClipPath* pNewChild = pChildGroup->mutable_o_clippath();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_SignatureLine* group_element::add_o_signatureline()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_SignatureLine* pNewChild = pChildGroup->mutable_o_signatureline();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w10::CT_Wrap* group_element::add_w10_wrap()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w10::CT_Wrap* pNewChild = pChildGroup->mutable_w10_wrap();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w10::CT_AnchorLock* group_element::add_w10_anchorlock()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w10::CT_AnchorLock* pNewChild = pChildGroup->mutable_w10_anchorlock();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w10::CT_Border* group_element::add_w10_bordertop()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w10::CT_Border* pNewChild = pChildGroup->mutable_w10_bordertop();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w10::CT_Border* group_element::add_w10_borderbottom()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w10::CT_Border* pNewChild = pChildGroup->mutable_w10_borderbottom();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w10::CT_Border* group_element::add_w10_borderleft()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w10::CT_Border* pNewChild = pChildGroup->mutable_w10_borderleft();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w10::CT_Border* group_element::add_w10_borderright()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w10::CT_Border* pNewChild = pChildGroup->mutable_w10_borderright();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_x::CT_ClientData* group_element::add_x_ClientData()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_x::CT_ClientData* pNewChild = pChildGroup->mutable_x_ClientData();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_pvml::CT_Rel* group_element::add_pvml_textdata()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_pvml::CT_Rel* pNewChild = pChildGroup->mutable_pvml_textdata();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Group* group_element::add_group()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Group* pNewChild = pChildGroup->mutable_group();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Shape* group_element::add_shape()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Shape* pNewChild = pChildGroup->mutable_shape();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Shapetype* group_element::add_shapetype()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Shapetype* pNewChild = pChildGroup->mutable_shapetype();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Arc* group_element::add_arc()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Arc* pNewChild = pChildGroup->mutable_arc();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Curve* group_element::add_curve()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Curve* pNewChild = pChildGroup->mutable_curve();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Image* group_element::add_image()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Image* pNewChild = pChildGroup->mutable_image();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Line* group_element::add_line()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Line* pNewChild = pChildGroup->mutable_line();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Oval* group_element::add_oval()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Oval* pNewChild = pChildGroup->mutable_oval();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_PolyLine* group_element::add_polyline()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_PolyLine* pNewChild = pChildGroup->mutable_polyline();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Rect* group_element::add_rect()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Rect* pNewChild = pChildGroup->mutable_rect();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_RoundRect* group_element::add_roundrect()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_RoundRect* pNewChild = pChildGroup->mutable_roundrect();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_Diagram* group_element::add_o_diagram()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_Diagram* pNewChild = pChildGroup->mutable_o_diagram();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    void group_element::clear()
    {    
    m_has_s_filled_attr = false;
    
    if (m_s_filled_attr)
    {
        delete m_s_filled_attr;
        m_s_filled_attr = NULL;
    }
    
    
    m_has_s_fillcolor_attr = false;
    
    if (m_s_fillcolor_attr)
    {
        delete m_s_fillcolor_attr;
        m_s_fillcolor_attr = NULL;
    }
    
    
    m_has_editas_attr = false;
    
    if (m_editas_attr)
    {
        delete m_editas_attr;
        m_editas_attr = NULL;
    }
    
    
    m_has_tableproperties_attr = false;
    m_tableproperties_attr.clear();
    
    m_has_tablelimits_attr = false;
    m_tablelimits_attr.clear();
    
    {
        vector<ChildGroup_1*>::iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_1.clear();
    }
    }

    void group_element::toXml(std::ostream& _outStream) const
    {    
    _outStream << "<v:group";
    
    _outStream << " " << "xmlns:v=\"urn:schemas-microsoft-com:vml\"";
    _outStream << " " << "xmlns:x=\"urn:schemas-microsoft-com:office:excel\"";
    _outStream << " " << "xmlns:w=\"http://schemas.openxmlformats.org/wordprocessingml/2006/main\"";
    _outStream << " " << "xmlns:s=\"http://schemas.openxmlformats.org/officeDocument/2006/sharedTypes\"";
    _outStream << " " << "xmlns:w10=\"urn:schemas-microsoft-com:office:word\"";
    _outStream << " " << "xmlns:r=\"http://schemas.openxmlformats.org/officeDocument/2006/relationships\"";
    _outStream << " " << "xmlns:o=\"urn:schemas-microsoft-com:office:office\"";
    _outStream << " " << "xmlns:pvml=\"urn:schemas-microsoft-com:office:powerpoint\"";
    
    if (m_has_s_filled_attr)
    {
        m_s_filled_attr->toXmlAttr("filled", _outStream);
    }
    
    
    if (m_has_s_fillcolor_attr)
    {
        m_s_fillcolor_attr->toXmlAttr("fillcolor", _outStream);
    }
    
    
    if (m_has_editas_attr)
    {
        m_editas_attr->toXmlAttr("editas", _outStream);
    }
    
    
    if (m_has_tableproperties_attr)
    {
        _outStream << " " << "tableproperties" << "=\"" << m_tableproperties_attr << "\"";
    }
    
    
    if (m_has_tablelimits_attr)
    {
        _outStream << " " << "tablelimits" << "=\"" << m_tablelimits_attr << "\"";
    }
    
    _outStream << ">";
    
    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_path())
            {
                (*iter)->get_path().toXmlElem("v:path", "", _outStream);
            }
            else if ((*iter)->has_formulas())
            {
                (*iter)->get_formulas().toXmlElem("v:formulas", "", _outStream);
            }
            else if ((*iter)->has_handles())
            {
                (*iter)->get_handles().toXmlElem("v:handles", "", _outStream);
            }
            else if ((*iter)->has_fill())
            {
                (*iter)->get_fill().toXmlElem("v:fill", "", _outStream);
            }
            else if ((*iter)->has_stroke())
            {
                (*iter)->get_stroke().toXmlElem("v:stroke", "", _outStream);
            }
            else if ((*iter)->has_shadow())
            {
                (*iter)->get_shadow().toXmlElem("v:shadow", "", _outStream);
            }
            else if ((*iter)->has_textbox())
            {
                (*iter)->get_textbox().toXmlElem("v:textbox", "", _outStream);
            }
            else if ((*iter)->has_textpath())
            {
                (*iter)->get_textpath().toXmlElem("v:textpath", "", _outStream);
            }
            else if ((*iter)->has_imagedata())
            {
                (*iter)->get_imagedata().toXmlElem("v:imagedata", "", _outStream);
            }
            else if ((*iter)->has_o_skew())
            {
                (*iter)->get_o_skew().toXmlElem("v:skew", "", _outStream);
            }
            else if ((*iter)->has_o_extrusion())
            {
                (*iter)->get_o_extrusion().toXmlElem("v:extrusion", "", _outStream);
            }
            else if ((*iter)->has_o_callout())
            {
                (*iter)->get_o_callout().toXmlElem("v:callout", "", _outStream);
            }
            else if ((*iter)->has_o_lock())
            {
                (*iter)->get_o_lock().toXmlElem("v:lock", "", _outStream);
            }
            else if ((*iter)->has_o_clippath())
            {
                (*iter)->get_o_clippath().toXmlElem("v:clippath", "", _outStream);
            }
            else if ((*iter)->has_o_signatureline())
            {
                (*iter)->get_o_signatureline().toXmlElem("v:signatureline", "", _outStream);
            }
            else if ((*iter)->has_w10_wrap())
            {
                (*iter)->get_w10_wrap().toXmlElem("v:wrap", "", _outStream);
            }
            else if ((*iter)->has_w10_anchorlock())
            {
                (*iter)->get_w10_anchorlock().toXmlElem("v:anchorlock", "", _outStream);
            }
            else if ((*iter)->has_w10_bordertop())
            {
                (*iter)->get_w10_bordertop().toXmlElem("v:bordertop", "", _outStream);
            }
            else if ((*iter)->has_w10_borderbottom())
            {
                (*iter)->get_w10_borderbottom().toXmlElem("v:borderbottom", "", _outStream);
            }
            else if ((*iter)->has_w10_borderleft())
            {
                (*iter)->get_w10_borderleft().toXmlElem("v:borderleft", "", _outStream);
            }
            else if ((*iter)->has_w10_borderright())
            {
                (*iter)->get_w10_borderright().toXmlElem("v:borderright", "", _outStream);
            }
            else if ((*iter)->has_x_ClientData())
            {
                (*iter)->get_x_ClientData().toXmlElem("v:ClientData", "", _outStream);
            }
            else if ((*iter)->has_pvml_textdata())
            {
                (*iter)->get_pvml_textdata().toXmlElem("v:textdata", "", _outStream);
            }
            else if ((*iter)->has_group())
            {
                (*iter)->get_group().toXmlElem("v:group", "", _outStream);
            }
            else if ((*iter)->has_shape())
            {
                (*iter)->get_shape().toXmlElem("v:shape", "", _outStream);
            }
            else if ((*iter)->has_shapetype())
            {
                (*iter)->get_shapetype().toXmlElem("v:shapetype", "", _outStream);
            }
            else if ((*iter)->has_arc())
            {
                (*iter)->get_arc().toXmlElem("v:arc", "", _outStream);
            }
            else if ((*iter)->has_curve())
            {
                (*iter)->get_curve().toXmlElem("v:curve", "", _outStream);
            }
            else if ((*iter)->has_image())
            {
                (*iter)->get_image().toXmlElem("v:image", "", _outStream);
            }
            else if ((*iter)->has_line())
            {
                (*iter)->get_line().toXmlElem("v:line", "", _outStream);
            }
            else if ((*iter)->has_oval())
            {
                (*iter)->get_oval().toXmlElem("v:oval", "", _outStream);
            }
            else if ((*iter)->has_polyline())
            {
                (*iter)->get_polyline().toXmlElem("v:polyline", "", _outStream);
            }
            else if ((*iter)->has_rect())
            {
                (*iter)->get_rect().toXmlElem("v:rect", "", _outStream);
            }
            else if ((*iter)->has_roundrect())
            {
                (*iter)->get_roundrect().toXmlElem("v:roundrect", "", _outStream);
            }
            else if ((*iter)->has_o_diagram())
            {
                (*iter)->get_o_diagram().toXmlElem("v:diagram", "", _outStream);
            }
        }
    }
    
    _outStream << "</v:group>";
    }

    const group_element& group_element::default_instance()
    {    
    if (!group_element::default_instance_)
    {
        group_element::default_instance_ = new group_element();
    }
    return *group_element::default_instance_;
    }

    bool group_element::has_s_filled_attr() const
    {    
    return m_has_s_filled_attr;
    }

    void group_element::set_s_filled_attr(const ns_s::ST_TrueFalse& _s_filled_attr)
    {    
    m_has_s_filled_attr = true;
    m_s_filled_attr = new ns_s::ST_TrueFalse(_s_filled_attr);
    }

    const ns_s::ST_TrueFalse& group_element::get_s_filled_attr() const
    {    
    if (m_s_filled_attr)
    {
        return *m_s_filled_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
    }

    bool group_element::has_s_fillcolor_attr() const
    {    
    return m_has_s_fillcolor_attr;
    }

    void group_element::set_s_fillcolor_attr(const ns_s::ST_ColorType& _s_fillcolor_attr)
    {    
    m_has_s_fillcolor_attr = true;
    m_s_fillcolor_attr = new ns_s::ST_ColorType(_s_fillcolor_attr);
    }

    const ns_s::ST_ColorType& group_element::get_s_fillcolor_attr() const
    {    
    if (m_s_fillcolor_attr)
    {
        return *m_s_fillcolor_attr;
    }
    return ns_s::ST_ColorType::default_instance();
    }

    bool group_element::has_editas_attr() const
    {    
    return m_has_editas_attr;
    }

    void group_element::set_editas_attr(const ST_EditAs& _editas_attr)
    {    
    m_has_editas_attr = true;
    m_editas_attr = new ST_EditAs(_editas_attr);
    }

    const ST_EditAs& group_element::get_editas_attr() const
    {    
    if (m_editas_attr)
    {
        return *m_editas_attr;
    }
    return ST_EditAs::default_instance();
    }

    bool group_element::has_tableproperties_attr() const
    {    
    return m_has_tableproperties_attr;
    }

    void group_element::set_tableproperties_attr(const XSD::string_& _tableproperties_attr)
    {    
    m_has_tableproperties_attr = true;
    m_tableproperties_attr = _tableproperties_attr;
    }

    const XSD::string_& group_element::get_tableproperties_attr() const
    {    
    return m_tableproperties_attr;
    }

    bool group_element::has_tablelimits_attr() const
    {    
    return m_has_tablelimits_attr;
    }

    void group_element::set_tablelimits_attr(const XSD::string_& _tablelimits_attr)
    {    
    m_has_tablelimits_attr = true;
    m_tablelimits_attr = _tablelimits_attr;
    }

    const XSD::string_& group_element::get_tablelimits_attr() const
    {    
    return m_tablelimits_attr;
    }


    // background_element
    bool background_element::has_fill() const
    {    
    return m_has_fill;
    }

    CT_Fill* background_element::mutable_fill()
    {    
    m_has_fill = true;
    if (!m_fill)
    {
        m_fill = new CT_Fill();
    }
    return m_fill;
    }

    const CT_Fill& background_element::get_fill() const
    {    
    if (m_fill)
    {
        return *m_fill;
    }
    return CT_Fill::default_instance();
    }

    void background_element::clear()
    {    
    m_has_id_attr = false;
    m_id_attr.clear();
    
    m_has_s_filled_attr = false;
    
    if (m_s_filled_attr)
    {
        delete m_s_filled_attr;
        m_s_filled_attr = NULL;
    }
    
    
    m_has_s_fillcolor_attr = false;
    
    if (m_s_fillcolor_attr)
    {
        delete m_s_fillcolor_attr;
        m_s_fillcolor_attr = NULL;
    }
    
    
    m_has_o_bwmode_attr = false;
    
    if (m_o_bwmode_attr)
    {
        delete m_o_bwmode_attr;
        m_o_bwmode_attr = NULL;
    }
    
    
    m_has_o_bwpure_attr = false;
    
    if (m_o_bwpure_attr)
    {
        delete m_o_bwpure_attr;
        m_o_bwpure_attr = NULL;
    }
    
    
    m_has_o_bwnormal_attr = false;
    
    if (m_o_bwnormal_attr)
    {
        delete m_o_bwnormal_attr;
        m_o_bwnormal_attr = NULL;
    }
    
    
    m_has_o_targetscreensize_attr = false;
    
    if (m_o_targetscreensize_attr)
    {
        delete m_o_targetscreensize_attr;
        m_o_targetscreensize_attr = NULL;
    }
    
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    
    }

    void background_element::toXml(std::ostream& _outStream) const
    {    
    _outStream << "<v:background";
    
    _outStream << " " << "xmlns:v=\"urn:schemas-microsoft-com:vml\"";
    _outStream << " " << "xmlns:x=\"urn:schemas-microsoft-com:office:excel\"";
    _outStream << " " << "xmlns:w=\"http://schemas.openxmlformats.org/wordprocessingml/2006/main\"";
    _outStream << " " << "xmlns:s=\"http://schemas.openxmlformats.org/officeDocument/2006/sharedTypes\"";
    _outStream << " " << "xmlns:w10=\"urn:schemas-microsoft-com:office:word\"";
    _outStream << " " << "xmlns:r=\"http://schemas.openxmlformats.org/officeDocument/2006/relationships\"";
    _outStream << " " << "xmlns:o=\"urn:schemas-microsoft-com:office:office\"";
    _outStream << " " << "xmlns:pvml=\"urn:schemas-microsoft-com:office:powerpoint\"";
    
    if (m_has_id_attr)
    {
        _outStream << " " << "id" << "=\"" << m_id_attr << "\"";
    }
    
    
    if (m_has_s_filled_attr)
    {
        m_s_filled_attr->toXmlAttr("filled", _outStream);
    }
    
    
    if (m_has_s_fillcolor_attr)
    {
        m_s_fillcolor_attr->toXmlAttr("fillcolor", _outStream);
    }
    
    
    if (m_has_o_bwmode_attr)
    {
        m_o_bwmode_attr->toXmlAttr("bwmode", _outStream);
    }
    
    
    if (m_has_o_bwpure_attr)
    {
        m_o_bwpure_attr->toXmlAttr("bwpure", _outStream);
    }
    
    
    if (m_has_o_bwnormal_attr)
    {
        m_o_bwnormal_attr->toXmlAttr("bwnormal", _outStream);
    }
    
    
    if (m_has_o_targetscreensize_attr)
    {
        m_o_targetscreensize_attr->toXmlAttr("targetscreensize", _outStream);
    }
    
    _outStream << ">";
    
    if (m_has_fill)
    {
        m_fill->toXmlElem("v:fill", "", _outStream);;
    }
    
    _outStream << "</v:background>";
    }

    const background_element& background_element::default_instance()
    {    
    if (!background_element::default_instance_)
    {
        background_element::default_instance_ = new background_element();
    }
    return *background_element::default_instance_;
    }

    bool background_element::has_id_attr() const
    {    
    return m_has_id_attr;
    }

    void background_element::set_id_attr(const XSD::string_& _id_attr)
    {    
    m_has_id_attr = true;
    m_id_attr = _id_attr;
    }

    const XSD::string_& background_element::get_id_attr() const
    {    
    return m_id_attr;
    }

    bool background_element::has_s_filled_attr() const
    {    
    return m_has_s_filled_attr;
    }

    void background_element::set_s_filled_attr(const ns_s::ST_TrueFalse& _s_filled_attr)
    {    
    m_has_s_filled_attr = true;
    m_s_filled_attr = new ns_s::ST_TrueFalse(_s_filled_attr);
    }

    const ns_s::ST_TrueFalse& background_element::get_s_filled_attr() const
    {    
    if (m_s_filled_attr)
    {
        return *m_s_filled_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
    }

    bool background_element::has_s_fillcolor_attr() const
    {    
    return m_has_s_fillcolor_attr;
    }

    void background_element::set_s_fillcolor_attr(const ns_s::ST_ColorType& _s_fillcolor_attr)
    {    
    m_has_s_fillcolor_attr = true;
    m_s_fillcolor_attr = new ns_s::ST_ColorType(_s_fillcolor_attr);
    }

    const ns_s::ST_ColorType& background_element::get_s_fillcolor_attr() const
    {    
    if (m_s_fillcolor_attr)
    {
        return *m_s_fillcolor_attr;
    }
    return ns_s::ST_ColorType::default_instance();
    }

    bool background_element::has_o_bwmode_attr() const
    {    
    return m_has_o_bwmode_attr;
    }

    void background_element::set_o_bwmode_attr(const ns_o::ST_BWMode& _o_bwmode_attr)
    {    
    m_has_o_bwmode_attr = true;
    m_o_bwmode_attr = new ns_o::ST_BWMode(_o_bwmode_attr);
    }

    const ns_o::ST_BWMode& background_element::get_o_bwmode_attr() const
    {    
    if (m_o_bwmode_attr)
    {
        return *m_o_bwmode_attr;
    }
    return ns_o::ST_BWMode::default_instance();
    }

    bool background_element::has_o_bwpure_attr() const
    {    
    return m_has_o_bwpure_attr;
    }

    void background_element::set_o_bwpure_attr(const ns_o::ST_BWMode& _o_bwpure_attr)
    {    
    m_has_o_bwpure_attr = true;
    m_o_bwpure_attr = new ns_o::ST_BWMode(_o_bwpure_attr);
    }

    const ns_o::ST_BWMode& background_element::get_o_bwpure_attr() const
    {    
    if (m_o_bwpure_attr)
    {
        return *m_o_bwpure_attr;
    }
    return ns_o::ST_BWMode::default_instance();
    }

    bool background_element::has_o_bwnormal_attr() const
    {    
    return m_has_o_bwnormal_attr;
    }

    void background_element::set_o_bwnormal_attr(const ns_o::ST_BWMode& _o_bwnormal_attr)
    {    
    m_has_o_bwnormal_attr = true;
    m_o_bwnormal_attr = new ns_o::ST_BWMode(_o_bwnormal_attr);
    }

    const ns_o::ST_BWMode& background_element::get_o_bwnormal_attr() const
    {    
    if (m_o_bwnormal_attr)
    {
        return *m_o_bwnormal_attr;
    }
    return ns_o::ST_BWMode::default_instance();
    }

    bool background_element::has_o_targetscreensize_attr() const
    {    
    return m_has_o_targetscreensize_attr;
    }

    void background_element::set_o_targetscreensize_attr(const ns_o::ST_ScreenSize& _o_targetscreensize_attr)
    {    
    m_has_o_targetscreensize_attr = true;
    m_o_targetscreensize_attr = new ns_o::ST_ScreenSize(_o_targetscreensize_attr);
    }

    const ns_o::ST_ScreenSize& background_element::get_o_targetscreensize_attr() const
    {    
    if (m_o_targetscreensize_attr)
    {
        return *m_o_targetscreensize_attr;
    }
    return ns_o::ST_ScreenSize::default_instance();
    }


    // fill_element
    bool fill_element::has_o_fill() const
    {    
    return m_has_o_fill;
    }

    ns_o::CT_Fill* fill_element::mutable_o_fill()
    {    
    m_has_o_fill = true;
    if (!m_o_fill)
    {
        m_o_fill = new ns_o::CT_Fill();
    }
    return m_o_fill;
    }

    const ns_o::CT_Fill& fill_element::get_o_fill() const
    {    
    if (m_o_fill)
    {
        return *m_o_fill;
    }
    return ns_o::CT_Fill::default_instance();
    }

    void fill_element::clear()
    {    
    m_has_id_attr = false;
    m_id_attr.clear();
    
    m_has_type_attr = false;
    
    if (m_type_attr)
    {
        delete m_type_attr;
        m_type_attr = NULL;
    }
    
    
    m_has_s_on_attr = false;
    
    if (m_s_on_attr)
    {
        delete m_s_on_attr;
        m_s_on_attr = NULL;
    }
    
    
    m_has_s_color_attr = false;
    
    if (m_s_color_attr)
    {
        delete m_s_color_attr;
        m_s_color_attr = NULL;
    }
    
    
    m_has_opacity_attr = false;
    m_opacity_attr.clear();
    
    m_has_s_color2_attr = false;
    
    if (m_s_color2_attr)
    {
        delete m_s_color2_attr;
        m_s_color2_attr = NULL;
    }
    
    
    m_has_src_attr = false;
    m_src_attr.clear();
    
    m_has_href_attr = false;
    m_href_attr.clear();
    
    m_has_althref_attr = false;
    m_althref_attr.clear();
    
    m_has_size_attr = false;
    m_size_attr.clear();
    
    m_has_origin_attr = false;
    m_origin_attr.clear();
    
    m_has_position_attr = false;
    m_position_attr.clear();
    
    m_has_aspect_attr = false;
    
    if (m_aspect_attr)
    {
        delete m_aspect_attr;
        m_aspect_attr = NULL;
    }
    
    
    m_has_colors_attr = false;
    m_colors_attr.clear();
    
    m_has_angle_attr = false;
    m_angle_attr = 0;
    
    m_has_s_alignshape_attr = false;
    
    if (m_s_alignshape_attr)
    {
        delete m_s_alignshape_attr;
        m_s_alignshape_attr = NULL;
    }
    
    
    m_has_focus_attr = false;
    m_focus_attr.clear();
    
    m_has_focussize_attr = false;
    m_focussize_attr.clear();
    
    m_has_focusposition_attr = false;
    m_focusposition_attr.clear();
    
    m_has_method_attr = false;
    
    if (m_method_attr)
    {
        delete m_method_attr;
        m_method_attr = NULL;
    }
    
    
    m_has_s_detectmouseclick_attr = false;
    
    if (m_s_detectmouseclick_attr)
    {
        delete m_s_detectmouseclick_attr;
        m_s_detectmouseclick_attr = NULL;
    }
    
    
    m_has_title_attr = false;
    m_title_attr.clear();
    
    m_has_opacity2_attr = false;
    m_opacity2_attr.clear();
    
    m_has_s_recolor_attr = false;
    
    if (m_s_recolor_attr)
    {
        delete m_s_recolor_attr;
        m_s_recolor_attr = NULL;
    }
    
    
    m_has_s_rotate_attr = false;
    
    if (m_s_rotate_attr)
    {
        delete m_s_rotate_attr;
        m_s_rotate_attr = NULL;
    }
    
    
    m_has_r_id_attr = false;
    
    if (m_r_id_attr)
    {
        delete m_r_id_attr;
        m_r_id_attr = NULL;
    }
    
    
    m_has_r_relid_attr = false;
    
    if (m_r_relid_attr)
    {
        delete m_r_relid_attr;
        m_r_relid_attr = NULL;
    }
    
    
    m_has_o_fill = false;
    
    if (m_o_fill)
    {
        delete m_o_fill;
        m_o_fill = NULL;
    }
    
    }

    void fill_element::toXml(std::ostream& _outStream) const
    {    
    _outStream << "<v:fill";
    
    _outStream << " " << "xmlns:v=\"urn:schemas-microsoft-com:vml\"";
    _outStream << " " << "xmlns:x=\"urn:schemas-microsoft-com:office:excel\"";
    _outStream << " " << "xmlns:w=\"http://schemas.openxmlformats.org/wordprocessingml/2006/main\"";
    _outStream << " " << "xmlns:s=\"http://schemas.openxmlformats.org/officeDocument/2006/sharedTypes\"";
    _outStream << " " << "xmlns:w10=\"urn:schemas-microsoft-com:office:word\"";
    _outStream << " " << "xmlns:r=\"http://schemas.openxmlformats.org/officeDocument/2006/relationships\"";
    _outStream << " " << "xmlns:o=\"urn:schemas-microsoft-com:office:office\"";
    _outStream << " " << "xmlns:pvml=\"urn:schemas-microsoft-com:office:powerpoint\"";
    
    if (m_has_id_attr)
    {
        _outStream << " " << "id" << "=\"" << m_id_attr << "\"";
    }
    
    
    if (m_has_type_attr)
    {
        m_type_attr->toXmlAttr("type", _outStream);
    }
    
    
    if (m_has_s_on_attr)
    {
        m_s_on_attr->toXmlAttr("on", _outStream);
    }
    
    
    if (m_has_s_color_attr)
    {
        m_s_color_attr->toXmlAttr("color", _outStream);
    }
    
    
    if (m_has_opacity_attr)
    {
        _outStream << " " << "opacity" << "=\"" << m_opacity_attr << "\"";
    }
    
    
    if (m_has_s_color2_attr)
    {
        m_s_color2_attr->toXmlAttr("color2", _outStream);
    }
    
    
    if (m_has_src_attr)
    {
        _outStream << " " << "src" << "=\"" << m_src_attr << "\"";
    }
    
    
    if (m_has_href_attr)
    {
        _outStream << " " << "href" << "=\"" << m_href_attr << "\"";
    }
    
    
    if (m_has_althref_attr)
    {
        _outStream << " " << "althref" << "=\"" << m_althref_attr << "\"";
    }
    
    
    if (m_has_size_attr)
    {
        _outStream << " " << "size" << "=\"" << m_size_attr << "\"";
    }
    
    
    if (m_has_origin_attr)
    {
        _outStream << " " << "origin" << "=\"" << m_origin_attr << "\"";
    }
    
    
    if (m_has_position_attr)
    {
        _outStream << " " << "position" << "=\"" << m_position_attr << "\"";
    }
    
    
    if (m_has_aspect_attr)
    {
        m_aspect_attr->toXmlAttr("aspect", _outStream);
    }
    
    
    if (m_has_colors_attr)
    {
        _outStream << " " << "colors" << "=\"" << m_colors_attr << "\"";
    }
    
    
    if (m_has_angle_attr)
    {
        _outStream << " " << "angle" << "=\"" << m_angle_attr << "\"";
    }
    
    
    if (m_has_s_alignshape_attr)
    {
        m_s_alignshape_attr->toXmlAttr("alignshape", _outStream);
    }
    
    
    if (m_has_focus_attr)
    {
        _outStream << " " << "focus" << "=\"" << m_focus_attr << "\"";
    }
    
    
    if (m_has_focussize_attr)
    {
        _outStream << " " << "focussize" << "=\"" << m_focussize_attr << "\"";
    }
    
    
    if (m_has_focusposition_attr)
    {
        _outStream << " " << "focusposition" << "=\"" << m_focusposition_attr << "\"";
    }
    
    
    if (m_has_method_attr)
    {
        m_method_attr->toXmlAttr("method", _outStream);
    }
    
    
    if (m_has_s_detectmouseclick_attr)
    {
        m_s_detectmouseclick_attr->toXmlAttr("detectmouseclick", _outStream);
    }
    
    
    if (m_has_title_attr)
    {
        _outStream << " " << "title" << "=\"" << m_title_attr << "\"";
    }
    
    
    if (m_has_opacity2_attr)
    {
        _outStream << " " << "opacity2" << "=\"" << m_opacity2_attr << "\"";
    }
    
    
    if (m_has_s_recolor_attr)
    {
        m_s_recolor_attr->toXmlAttr("recolor", _outStream);
    }
    
    
    if (m_has_s_rotate_attr)
    {
        m_s_rotate_attr->toXmlAttr("rotate", _outStream);
    }
    
    
    if (m_has_r_id_attr)
    {
        m_r_id_attr->toXmlAttr("id", _outStream);
    }
    
    
    if (m_has_r_relid_attr)
    {
        m_r_relid_attr->toXmlAttr("relid", _outStream);
    }
    
    _outStream << ">";
    
    if (m_has_o_fill)
    {
        m_o_fill->toXmlElem("v:fill", "", _outStream);;
    }
    
    _outStream << "</v:fill>";
    }

    const fill_element& fill_element::default_instance()
    {    
    if (!fill_element::default_instance_)
    {
        fill_element::default_instance_ = new fill_element();
    }
    return *fill_element::default_instance_;
    }

    bool fill_element::has_id_attr() const
    {    
    return m_has_id_attr;
    }

    void fill_element::set_id_attr(const XSD::string_& _id_attr)
    {    
    m_has_id_attr = true;
    m_id_attr = _id_attr;
    }

    const XSD::string_& fill_element::get_id_attr() const
    {    
    return m_id_attr;
    }

    bool fill_element::has_type_attr() const
    {    
    return m_has_type_attr;
    }

    void fill_element::set_type_attr(const ST_FillType& _type_attr)
    {    
    m_has_type_attr = true;
    m_type_attr = new ST_FillType(_type_attr);
    }

    const ST_FillType& fill_element::get_type_attr() const
    {    
    if (m_type_attr)
    {
        return *m_type_attr;
    }
    return ST_FillType::default_instance();
    }

    bool fill_element::has_s_on_attr() const
    {    
    return m_has_s_on_attr;
    }

    void fill_element::set_s_on_attr(const ns_s::ST_TrueFalse& _s_on_attr)
    {    
    m_has_s_on_attr = true;
    m_s_on_attr = new ns_s::ST_TrueFalse(_s_on_attr);
    }

    const ns_s::ST_TrueFalse& fill_element::get_s_on_attr() const
    {    
    if (m_s_on_attr)
    {
        return *m_s_on_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
    }

    bool fill_element::has_s_color_attr() const
    {    
    return m_has_s_color_attr;
    }

    void fill_element::set_s_color_attr(const ns_s::ST_ColorType& _s_color_attr)
    {    
    m_has_s_color_attr = true;
    m_s_color_attr = new ns_s::ST_ColorType(_s_color_attr);
    }

    const ns_s::ST_ColorType& fill_element::get_s_color_attr() const
    {    
    if (m_s_color_attr)
    {
        return *m_s_color_attr;
    }
    return ns_s::ST_ColorType::default_instance();
    }

    bool fill_element::has_opacity_attr() const
    {    
    return m_has_opacity_attr;
    }

    void fill_element::set_opacity_attr(const XSD::string_& _opacity_attr)
    {    
    m_has_opacity_attr = true;
    m_opacity_attr = _opacity_attr;
    }

    const XSD::string_& fill_element::get_opacity_attr() const
    {    
    return m_opacity_attr;
    }

    bool fill_element::has_s_color2_attr() const
    {    
    return m_has_s_color2_attr;
    }

    void fill_element::set_s_color2_attr(const ns_s::ST_ColorType& _s_color2_attr)
    {    
    m_has_s_color2_attr = true;
    m_s_color2_attr = new ns_s::ST_ColorType(_s_color2_attr);
    }

    const ns_s::ST_ColorType& fill_element::get_s_color2_attr() const
    {    
    if (m_s_color2_attr)
    {
        return *m_s_color2_attr;
    }
    return ns_s::ST_ColorType::default_instance();
    }

    bool fill_element::has_src_attr() const
    {    
    return m_has_src_attr;
    }

    void fill_element::set_src_attr(const XSD::string_& _src_attr)
    {    
    m_has_src_attr = true;
    m_src_attr = _src_attr;
    }

    const XSD::string_& fill_element::get_src_attr() const
    {    
    return m_src_attr;
    }

    bool fill_element::has_href_attr() const
    {    
    return m_has_href_attr;
    }

    void fill_element::set_href_attr(const XSD::string_& _href_attr)
    {    
    m_has_href_attr = true;
    m_href_attr = _href_attr;
    }

    const XSD::string_& fill_element::get_href_attr() const
    {    
    return m_href_attr;
    }

    bool fill_element::has_althref_attr() const
    {    
    return m_has_althref_attr;
    }

    void fill_element::set_althref_attr(const XSD::string_& _althref_attr)
    {    
    m_has_althref_attr = true;
    m_althref_attr = _althref_attr;
    }

    const XSD::string_& fill_element::get_althref_attr() const
    {    
    return m_althref_attr;
    }

    bool fill_element::has_size_attr() const
    {    
    return m_has_size_attr;
    }

    void fill_element::set_size_attr(const XSD::string_& _size_attr)
    {    
    m_has_size_attr = true;
    m_size_attr = _size_attr;
    }

    const XSD::string_& fill_element::get_size_attr() const
    {    
    return m_size_attr;
    }

    bool fill_element::has_origin_attr() const
    {    
    return m_has_origin_attr;
    }

    void fill_element::set_origin_attr(const XSD::string_& _origin_attr)
    {    
    m_has_origin_attr = true;
    m_origin_attr = _origin_attr;
    }

    const XSD::string_& fill_element::get_origin_attr() const
    {    
    return m_origin_attr;
    }

    bool fill_element::has_position_attr() const
    {    
    return m_has_position_attr;
    }

    void fill_element::set_position_attr(const XSD::string_& _position_attr)
    {    
    m_has_position_attr = true;
    m_position_attr = _position_attr;
    }

    const XSD::string_& fill_element::get_position_attr() const
    {    
    return m_position_attr;
    }

    bool fill_element::has_aspect_attr() const
    {    
    return m_has_aspect_attr;
    }

    void fill_element::set_aspect_attr(const ST_ImageAspect& _aspect_attr)
    {    
    m_has_aspect_attr = true;
    m_aspect_attr = new ST_ImageAspect(_aspect_attr);
    }

    const ST_ImageAspect& fill_element::get_aspect_attr() const
    {    
    if (m_aspect_attr)
    {
        return *m_aspect_attr;
    }
    return ST_ImageAspect::default_instance();
    }

    bool fill_element::has_colors_attr() const
    {    
    return m_has_colors_attr;
    }

    void fill_element::set_colors_attr(const XSD::string_& _colors_attr)
    {    
    m_has_colors_attr = true;
    m_colors_attr = _colors_attr;
    }

    const XSD::string_& fill_element::get_colors_attr() const
    {    
    return m_colors_attr;
    }

    bool fill_element::has_angle_attr() const
    {    
    return m_has_angle_attr;
    }

    void fill_element::set_angle_attr(const XSD::decimal_& _angle_attr)
    {    
    m_has_angle_attr = true;
    m_angle_attr = _angle_attr;
    }

    const XSD::decimal_& fill_element::get_angle_attr() const
    {    
    return m_angle_attr;
    }

    bool fill_element::has_s_alignshape_attr() const
    {    
    return m_has_s_alignshape_attr;
    }

    void fill_element::set_s_alignshape_attr(const ns_s::ST_TrueFalse& _s_alignshape_attr)
    {    
    m_has_s_alignshape_attr = true;
    m_s_alignshape_attr = new ns_s::ST_TrueFalse(_s_alignshape_attr);
    }

    const ns_s::ST_TrueFalse& fill_element::get_s_alignshape_attr() const
    {    
    if (m_s_alignshape_attr)
    {
        return *m_s_alignshape_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
    }

    bool fill_element::has_focus_attr() const
    {    
    return m_has_focus_attr;
    }

    void fill_element::set_focus_attr(const XSD::string_& _focus_attr)
    {    
    m_has_focus_attr = true;
    m_focus_attr = _focus_attr;
    }

    const XSD::string_& fill_element::get_focus_attr() const
    {    
    return m_focus_attr;
    }

    bool fill_element::has_focussize_attr() const
    {    
    return m_has_focussize_attr;
    }

    void fill_element::set_focussize_attr(const XSD::string_& _focussize_attr)
    {    
    m_has_focussize_attr = true;
    m_focussize_attr = _focussize_attr;
    }

    const XSD::string_& fill_element::get_focussize_attr() const
    {    
    return m_focussize_attr;
    }

    bool fill_element::has_focusposition_attr() const
    {    
    return m_has_focusposition_attr;
    }

    void fill_element::set_focusposition_attr(const XSD::string_& _focusposition_attr)
    {    
    m_has_focusposition_attr = true;
    m_focusposition_attr = _focusposition_attr;
    }

    const XSD::string_& fill_element::get_focusposition_attr() const
    {    
    return m_focusposition_attr;
    }

    bool fill_element::has_method_attr() const
    {    
    return m_has_method_attr;
    }

    void fill_element::set_method_attr(const ST_FillMethod& _method_attr)
    {    
    m_has_method_attr = true;
    m_method_attr = new ST_FillMethod(_method_attr);
    }

    const ST_FillMethod& fill_element::get_method_attr() const
    {    
    if (m_method_attr)
    {
        return *m_method_attr;
    }
    return ST_FillMethod::default_instance();
    }

    bool fill_element::has_s_detectmouseclick_attr() const
    {    
    return m_has_s_detectmouseclick_attr;
    }

    void fill_element::set_s_detectmouseclick_attr(const ns_s::ST_TrueFalse& _s_detectmouseclick_attr)
    {    
    m_has_s_detectmouseclick_attr = true;
    m_s_detectmouseclick_attr = new ns_s::ST_TrueFalse(_s_detectmouseclick_attr);
    }

    const ns_s::ST_TrueFalse& fill_element::get_s_detectmouseclick_attr() const
    {    
    if (m_s_detectmouseclick_attr)
    {
        return *m_s_detectmouseclick_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
    }

    bool fill_element::has_title_attr() const
    {    
    return m_has_title_attr;
    }

    void fill_element::set_title_attr(const XSD::string_& _title_attr)
    {    
    m_has_title_attr = true;
    m_title_attr = _title_attr;
    }

    const XSD::string_& fill_element::get_title_attr() const
    {    
    return m_title_attr;
    }

    bool fill_element::has_opacity2_attr() const
    {    
    return m_has_opacity2_attr;
    }

    void fill_element::set_opacity2_attr(const XSD::string_& _opacity2_attr)
    {    
    m_has_opacity2_attr = true;
    m_opacity2_attr = _opacity2_attr;
    }

    const XSD::string_& fill_element::get_opacity2_attr() const
    {    
    return m_opacity2_attr;
    }

    bool fill_element::has_s_recolor_attr() const
    {    
    return m_has_s_recolor_attr;
    }

    void fill_element::set_s_recolor_attr(const ns_s::ST_TrueFalse& _s_recolor_attr)
    {    
    m_has_s_recolor_attr = true;
    m_s_recolor_attr = new ns_s::ST_TrueFalse(_s_recolor_attr);
    }

    const ns_s::ST_TrueFalse& fill_element::get_s_recolor_attr() const
    {    
    if (m_s_recolor_attr)
    {
        return *m_s_recolor_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
    }

    bool fill_element::has_s_rotate_attr() const
    {    
    return m_has_s_rotate_attr;
    }

    void fill_element::set_s_rotate_attr(const ns_s::ST_TrueFalse& _s_rotate_attr)
    {    
    m_has_s_rotate_attr = true;
    m_s_rotate_attr = new ns_s::ST_TrueFalse(_s_rotate_attr);
    }

    const ns_s::ST_TrueFalse& fill_element::get_s_rotate_attr() const
    {    
    if (m_s_rotate_attr)
    {
        return *m_s_rotate_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
    }

    bool fill_element::has_r_id_attr() const
    {    
    return m_has_r_id_attr;
    }

    void fill_element::set_r_id_attr(const ns_r::ST_RelationshipId& _r_id_attr)
    {    
    m_has_r_id_attr = true;
    m_r_id_attr = new ns_r::ST_RelationshipId(_r_id_attr);
    }

    const ns_r::ST_RelationshipId& fill_element::get_r_id_attr() const
    {    
    if (m_r_id_attr)
    {
        return *m_r_id_attr;
    }
    return ns_r::ST_RelationshipId::default_instance();
    }

    bool fill_element::has_r_relid_attr() const
    {    
    return m_has_r_relid_attr;
    }

    void fill_element::set_r_relid_attr(const ns_r::ST_RelationshipId& _r_relid_attr)
    {    
    m_has_r_relid_attr = true;
    m_r_relid_attr = new ns_r::ST_RelationshipId(_r_relid_attr);
    }

    const ns_r::ST_RelationshipId& fill_element::get_r_relid_attr() const
    {    
    if (m_r_relid_attr)
    {
        return *m_r_relid_attr;
    }
    return ns_r::ST_RelationshipId::default_instance();
    }


    // formulas_element
    CT_F* formulas_element::add_f()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_F* pNewChild = pChildGroup->mutable_f();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    void formulas_element::clear()
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

    void formulas_element::toXml(std::ostream& _outStream) const
    {    
    _outStream << "<v:formulas";
    
    _outStream << " " << "xmlns:v=\"urn:schemas-microsoft-com:vml\"";
    _outStream << " " << "xmlns:x=\"urn:schemas-microsoft-com:office:excel\"";
    _outStream << " " << "xmlns:w=\"http://schemas.openxmlformats.org/wordprocessingml/2006/main\"";
    _outStream << " " << "xmlns:s=\"http://schemas.openxmlformats.org/officeDocument/2006/sharedTypes\"";
    _outStream << " " << "xmlns:w10=\"urn:schemas-microsoft-com:office:word\"";
    _outStream << " " << "xmlns:r=\"http://schemas.openxmlformats.org/officeDocument/2006/relationships\"";
    _outStream << " " << "xmlns:o=\"urn:schemas-microsoft-com:office:office\"";
    _outStream << " " << "xmlns:pvml=\"urn:schemas-microsoft-com:office:powerpoint\"";
    
    _outStream << ">";
    
    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_f())
            {
                (*iter)->get_f().toXmlElem("v:f", "", _outStream);
            }
        }
    }
    
    _outStream << "</v:formulas>";
    }

    const formulas_element& formulas_element::default_instance()
    {    
    if (!formulas_element::default_instance_)
    {
        formulas_element::default_instance_ = new formulas_element();
    }
    return *formulas_element::default_instance_;
    }


    // handles_element
    CT_H* handles_element::add_h()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_H* pNewChild = pChildGroup->mutable_h();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    void handles_element::clear()
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

    void handles_element::toXml(std::ostream& _outStream) const
    {    
    _outStream << "<v:handles";
    
    _outStream << " " << "xmlns:v=\"urn:schemas-microsoft-com:vml\"";
    _outStream << " " << "xmlns:x=\"urn:schemas-microsoft-com:office:excel\"";
    _outStream << " " << "xmlns:w=\"http://schemas.openxmlformats.org/wordprocessingml/2006/main\"";
    _outStream << " " << "xmlns:s=\"http://schemas.openxmlformats.org/officeDocument/2006/sharedTypes\"";
    _outStream << " " << "xmlns:w10=\"urn:schemas-microsoft-com:office:word\"";
    _outStream << " " << "xmlns:r=\"http://schemas.openxmlformats.org/officeDocument/2006/relationships\"";
    _outStream << " " << "xmlns:o=\"urn:schemas-microsoft-com:office:office\"";
    _outStream << " " << "xmlns:pvml=\"urn:schemas-microsoft-com:office:powerpoint\"";
    
    _outStream << ">";
    
    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_h())
            {
                (*iter)->get_h().toXmlElem("v:h", "", _outStream);
            }
        }
    }
    
    _outStream << "</v:handles>";
    }

    const handles_element& handles_element::default_instance()
    {    
    if (!handles_element::default_instance_)
    {
        handles_element::default_instance_ = new handles_element();
    }
    return *handles_element::default_instance_;
    }


    // imagedata_element
    void imagedata_element::clear()
    {    
    m_has_id_attr = false;
    m_id_attr.clear();
    
    m_has_src_attr = false;
    m_src_attr.clear();
    
    m_has_cropleft_attr = false;
    m_cropleft_attr.clear();
    
    m_has_croptop_attr = false;
    m_croptop_attr.clear();
    
    m_has_cropright_attr = false;
    m_cropright_attr.clear();
    
    m_has_cropbottom_attr = false;
    m_cropbottom_attr.clear();
    
    m_has_gain_attr = false;
    m_gain_attr.clear();
    
    m_has_blacklevel_attr = false;
    m_blacklevel_attr.clear();
    
    m_has_gamma_attr = false;
    m_gamma_attr.clear();
    
    m_has_s_grayscale_attr = false;
    
    if (m_s_grayscale_attr)
    {
        delete m_s_grayscale_attr;
        m_s_grayscale_attr = NULL;
    }
    
    
    m_has_s_bilevel_attr = false;
    
    if (m_s_bilevel_attr)
    {
        delete m_s_bilevel_attr;
        m_s_bilevel_attr = NULL;
    }
    
    
    m_has_s_chromakey_attr = false;
    
    if (m_s_chromakey_attr)
    {
        delete m_s_chromakey_attr;
        m_s_chromakey_attr = NULL;
    }
    
    
    m_has_s_embosscolor_attr = false;
    
    if (m_s_embosscolor_attr)
    {
        delete m_s_embosscolor_attr;
        m_s_embosscolor_attr = NULL;
    }
    
    
    m_has_s_recolortarget_attr = false;
    
    if (m_s_recolortarget_attr)
    {
        delete m_s_recolortarget_attr;
        m_s_recolortarget_attr = NULL;
    }
    
    
    m_has_href_attr = false;
    m_href_attr.clear();
    
    m_has_althref_attr = false;
    m_althref_attr.clear();
    
    m_has_title_attr = false;
    m_title_attr.clear();
    
    m_has_oleid_attr = false;
    m_oleid_attr = 0;
    
    m_has_s_detectmouseclick_attr = false;
    
    if (m_s_detectmouseclick_attr)
    {
        delete m_s_detectmouseclick_attr;
        m_s_detectmouseclick_attr = NULL;
    }
    
    
    m_has_movie_attr = false;
    m_movie_attr = 0;
    
    m_has_r_relid_attr = false;
    
    if (m_r_relid_attr)
    {
        delete m_r_relid_attr;
        m_r_relid_attr = NULL;
    }
    
    
    m_has_r_id_attr = false;
    
    if (m_r_id_attr)
    {
        delete m_r_id_attr;
        m_r_id_attr = NULL;
    }
    
    
    m_has_r_pict_attr = false;
    
    if (m_r_pict_attr)
    {
        delete m_r_pict_attr;
        m_r_pict_attr = NULL;
    }
    
    
    m_has_r_href_attr = false;
    
    if (m_r_href_attr)
    {
        delete m_r_href_attr;
        m_r_href_attr = NULL;
    }
    
    }

    void imagedata_element::toXml(std::ostream& _outStream) const
    {    
    _outStream << "<v:imagedata";
    
    _outStream << " " << "xmlns:v=\"urn:schemas-microsoft-com:vml\"";
    _outStream << " " << "xmlns:x=\"urn:schemas-microsoft-com:office:excel\"";
    _outStream << " " << "xmlns:w=\"http://schemas.openxmlformats.org/wordprocessingml/2006/main\"";
    _outStream << " " << "xmlns:s=\"http://schemas.openxmlformats.org/officeDocument/2006/sharedTypes\"";
    _outStream << " " << "xmlns:w10=\"urn:schemas-microsoft-com:office:word\"";
    _outStream << " " << "xmlns:r=\"http://schemas.openxmlformats.org/officeDocument/2006/relationships\"";
    _outStream << " " << "xmlns:o=\"urn:schemas-microsoft-com:office:office\"";
    _outStream << " " << "xmlns:pvml=\"urn:schemas-microsoft-com:office:powerpoint\"";
    
    if (m_has_id_attr)
    {
        _outStream << " " << "id" << "=\"" << m_id_attr << "\"";
    }
    
    
    if (m_has_src_attr)
    {
        _outStream << " " << "src" << "=\"" << m_src_attr << "\"";
    }
    
    
    if (m_has_cropleft_attr)
    {
        _outStream << " " << "cropleft" << "=\"" << m_cropleft_attr << "\"";
    }
    
    
    if (m_has_croptop_attr)
    {
        _outStream << " " << "croptop" << "=\"" << m_croptop_attr << "\"";
    }
    
    
    if (m_has_cropright_attr)
    {
        _outStream << " " << "cropright" << "=\"" << m_cropright_attr << "\"";
    }
    
    
    if (m_has_cropbottom_attr)
    {
        _outStream << " " << "cropbottom" << "=\"" << m_cropbottom_attr << "\"";
    }
    
    
    if (m_has_gain_attr)
    {
        _outStream << " " << "gain" << "=\"" << m_gain_attr << "\"";
    }
    
    
    if (m_has_blacklevel_attr)
    {
        _outStream << " " << "blacklevel" << "=\"" << m_blacklevel_attr << "\"";
    }
    
    
    if (m_has_gamma_attr)
    {
        _outStream << " " << "gamma" << "=\"" << m_gamma_attr << "\"";
    }
    
    
    if (m_has_s_grayscale_attr)
    {
        m_s_grayscale_attr->toXmlAttr("grayscale", _outStream);
    }
    
    
    if (m_has_s_bilevel_attr)
    {
        m_s_bilevel_attr->toXmlAttr("bilevel", _outStream);
    }
    
    
    if (m_has_s_chromakey_attr)
    {
        m_s_chromakey_attr->toXmlAttr("chromakey", _outStream);
    }
    
    
    if (m_has_s_embosscolor_attr)
    {
        m_s_embosscolor_attr->toXmlAttr("embosscolor", _outStream);
    }
    
    
    if (m_has_s_recolortarget_attr)
    {
        m_s_recolortarget_attr->toXmlAttr("recolortarget", _outStream);
    }
    
    
    if (m_has_href_attr)
    {
        _outStream << " " << "href" << "=\"" << m_href_attr << "\"";
    }
    
    
    if (m_has_althref_attr)
    {
        _outStream << " " << "althref" << "=\"" << m_althref_attr << "\"";
    }
    
    
    if (m_has_title_attr)
    {
        _outStream << " " << "title" << "=\"" << m_title_attr << "\"";
    }
    
    
    if (m_has_oleid_attr)
    {
        _outStream << " " << "oleid" << "=\"" << m_oleid_attr << "\"";
    }
    
    
    if (m_has_s_detectmouseclick_attr)
    {
        m_s_detectmouseclick_attr->toXmlAttr("detectmouseclick", _outStream);
    }
    
    
    if (m_has_movie_attr)
    {
        _outStream << " " << "movie" << "=\"" << m_movie_attr << "\"";
    }
    
    
    if (m_has_r_relid_attr)
    {
        m_r_relid_attr->toXmlAttr("relid", _outStream);
    }
    
    
    if (m_has_r_id_attr)
    {
        m_r_id_attr->toXmlAttr("id", _outStream);
    }
    
    
    if (m_has_r_pict_attr)
    {
        m_r_pict_attr->toXmlAttr("pict", _outStream);
    }
    
    
    if (m_has_r_href_attr)
    {
        m_r_href_attr->toXmlAttr("href", _outStream);
    }
    
    _outStream << ">";
    
    _outStream << "</v:imagedata>";
    }

    const imagedata_element& imagedata_element::default_instance()
    {    
    if (!imagedata_element::default_instance_)
    {
        imagedata_element::default_instance_ = new imagedata_element();
    }
    return *imagedata_element::default_instance_;
    }

    bool imagedata_element::has_id_attr() const
    {    
    return m_has_id_attr;
    }

    void imagedata_element::set_id_attr(const XSD::string_& _id_attr)
    {    
    m_has_id_attr = true;
    m_id_attr = _id_attr;
    }

    const XSD::string_& imagedata_element::get_id_attr() const
    {    
    return m_id_attr;
    }

    bool imagedata_element::has_src_attr() const
    {    
    return m_has_src_attr;
    }

    void imagedata_element::set_src_attr(const XSD::string_& _src_attr)
    {    
    m_has_src_attr = true;
    m_src_attr = _src_attr;
    }

    const XSD::string_& imagedata_element::get_src_attr() const
    {    
    return m_src_attr;
    }

    bool imagedata_element::has_cropleft_attr() const
    {    
    return m_has_cropleft_attr;
    }

    void imagedata_element::set_cropleft_attr(const XSD::string_& _cropleft_attr)
    {    
    m_has_cropleft_attr = true;
    m_cropleft_attr = _cropleft_attr;
    }

    const XSD::string_& imagedata_element::get_cropleft_attr() const
    {    
    return m_cropleft_attr;
    }

    bool imagedata_element::has_croptop_attr() const
    {    
    return m_has_croptop_attr;
    }

    void imagedata_element::set_croptop_attr(const XSD::string_& _croptop_attr)
    {    
    m_has_croptop_attr = true;
    m_croptop_attr = _croptop_attr;
    }

    const XSD::string_& imagedata_element::get_croptop_attr() const
    {    
    return m_croptop_attr;
    }

    bool imagedata_element::has_cropright_attr() const
    {    
    return m_has_cropright_attr;
    }

    void imagedata_element::set_cropright_attr(const XSD::string_& _cropright_attr)
    {    
    m_has_cropright_attr = true;
    m_cropright_attr = _cropright_attr;
    }

    const XSD::string_& imagedata_element::get_cropright_attr() const
    {    
    return m_cropright_attr;
    }

    bool imagedata_element::has_cropbottom_attr() const
    {    
    return m_has_cropbottom_attr;
    }

    void imagedata_element::set_cropbottom_attr(const XSD::string_& _cropbottom_attr)
    {    
    m_has_cropbottom_attr = true;
    m_cropbottom_attr = _cropbottom_attr;
    }

    const XSD::string_& imagedata_element::get_cropbottom_attr() const
    {    
    return m_cropbottom_attr;
    }

    bool imagedata_element::has_gain_attr() const
    {    
    return m_has_gain_attr;
    }

    void imagedata_element::set_gain_attr(const XSD::string_& _gain_attr)
    {    
    m_has_gain_attr = true;
    m_gain_attr = _gain_attr;
    }

    const XSD::string_& imagedata_element::get_gain_attr() const
    {    
    return m_gain_attr;
    }

    bool imagedata_element::has_blacklevel_attr() const
    {    
    return m_has_blacklevel_attr;
    }

    void imagedata_element::set_blacklevel_attr(const XSD::string_& _blacklevel_attr)
    {    
    m_has_blacklevel_attr = true;
    m_blacklevel_attr = _blacklevel_attr;
    }

    const XSD::string_& imagedata_element::get_blacklevel_attr() const
    {    
    return m_blacklevel_attr;
    }

    bool imagedata_element::has_gamma_attr() const
    {    
    return m_has_gamma_attr;
    }

    void imagedata_element::set_gamma_attr(const XSD::string_& _gamma_attr)
    {    
    m_has_gamma_attr = true;
    m_gamma_attr = _gamma_attr;
    }

    const XSD::string_& imagedata_element::get_gamma_attr() const
    {    
    return m_gamma_attr;
    }

    bool imagedata_element::has_s_grayscale_attr() const
    {    
    return m_has_s_grayscale_attr;
    }

    void imagedata_element::set_s_grayscale_attr(const ns_s::ST_TrueFalse& _s_grayscale_attr)
    {    
    m_has_s_grayscale_attr = true;
    m_s_grayscale_attr = new ns_s::ST_TrueFalse(_s_grayscale_attr);
    }

    const ns_s::ST_TrueFalse& imagedata_element::get_s_grayscale_attr() const
    {    
    if (m_s_grayscale_attr)
    {
        return *m_s_grayscale_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
    }

    bool imagedata_element::has_s_bilevel_attr() const
    {    
    return m_has_s_bilevel_attr;
    }

    void imagedata_element::set_s_bilevel_attr(const ns_s::ST_TrueFalse& _s_bilevel_attr)
    {    
    m_has_s_bilevel_attr = true;
    m_s_bilevel_attr = new ns_s::ST_TrueFalse(_s_bilevel_attr);
    }

    const ns_s::ST_TrueFalse& imagedata_element::get_s_bilevel_attr() const
    {    
    if (m_s_bilevel_attr)
    {
        return *m_s_bilevel_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
    }

    bool imagedata_element::has_s_chromakey_attr() const
    {    
    return m_has_s_chromakey_attr;
    }

    void imagedata_element::set_s_chromakey_attr(const ns_s::ST_ColorType& _s_chromakey_attr)
    {    
    m_has_s_chromakey_attr = true;
    m_s_chromakey_attr = new ns_s::ST_ColorType(_s_chromakey_attr);
    }

    const ns_s::ST_ColorType& imagedata_element::get_s_chromakey_attr() const
    {    
    if (m_s_chromakey_attr)
    {
        return *m_s_chromakey_attr;
    }
    return ns_s::ST_ColorType::default_instance();
    }

    bool imagedata_element::has_s_embosscolor_attr() const
    {    
    return m_has_s_embosscolor_attr;
    }

    void imagedata_element::set_s_embosscolor_attr(const ns_s::ST_ColorType& _s_embosscolor_attr)
    {    
    m_has_s_embosscolor_attr = true;
    m_s_embosscolor_attr = new ns_s::ST_ColorType(_s_embosscolor_attr);
    }

    const ns_s::ST_ColorType& imagedata_element::get_s_embosscolor_attr() const
    {    
    if (m_s_embosscolor_attr)
    {
        return *m_s_embosscolor_attr;
    }
    return ns_s::ST_ColorType::default_instance();
    }

    bool imagedata_element::has_s_recolortarget_attr() const
    {    
    return m_has_s_recolortarget_attr;
    }

    void imagedata_element::set_s_recolortarget_attr(const ns_s::ST_ColorType& _s_recolortarget_attr)
    {    
    m_has_s_recolortarget_attr = true;
    m_s_recolortarget_attr = new ns_s::ST_ColorType(_s_recolortarget_attr);
    }

    const ns_s::ST_ColorType& imagedata_element::get_s_recolortarget_attr() const
    {    
    if (m_s_recolortarget_attr)
    {
        return *m_s_recolortarget_attr;
    }
    return ns_s::ST_ColorType::default_instance();
    }

    bool imagedata_element::has_href_attr() const
    {    
    return m_has_href_attr;
    }

    void imagedata_element::set_href_attr(const XSD::string_& _href_attr)
    {    
    m_has_href_attr = true;
    m_href_attr = _href_attr;
    }

    const XSD::string_& imagedata_element::get_href_attr() const
    {    
    return m_href_attr;
    }

    bool imagedata_element::has_althref_attr() const
    {    
    return m_has_althref_attr;
    }

    void imagedata_element::set_althref_attr(const XSD::string_& _althref_attr)
    {    
    m_has_althref_attr = true;
    m_althref_attr = _althref_attr;
    }

    const XSD::string_& imagedata_element::get_althref_attr() const
    {    
    return m_althref_attr;
    }

    bool imagedata_element::has_title_attr() const
    {    
    return m_has_title_attr;
    }

    void imagedata_element::set_title_attr(const XSD::string_& _title_attr)
    {    
    m_has_title_attr = true;
    m_title_attr = _title_attr;
    }

    const XSD::string_& imagedata_element::get_title_attr() const
    {    
    return m_title_attr;
    }

    bool imagedata_element::has_oleid_attr() const
    {    
    return m_has_oleid_attr;
    }

    void imagedata_element::set_oleid_attr(const XSD::float_& _oleid_attr)
    {    
    m_has_oleid_attr = true;
    m_oleid_attr = _oleid_attr;
    }

    const XSD::float_& imagedata_element::get_oleid_attr() const
    {    
    return m_oleid_attr;
    }

    bool imagedata_element::has_s_detectmouseclick_attr() const
    {    
    return m_has_s_detectmouseclick_attr;
    }

    void imagedata_element::set_s_detectmouseclick_attr(const ns_s::ST_TrueFalse& _s_detectmouseclick_attr)
    {    
    m_has_s_detectmouseclick_attr = true;
    m_s_detectmouseclick_attr = new ns_s::ST_TrueFalse(_s_detectmouseclick_attr);
    }

    const ns_s::ST_TrueFalse& imagedata_element::get_s_detectmouseclick_attr() const
    {    
    if (m_s_detectmouseclick_attr)
    {
        return *m_s_detectmouseclick_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
    }

    bool imagedata_element::has_movie_attr() const
    {    
    return m_has_movie_attr;
    }

    void imagedata_element::set_movie_attr(const XSD::float_& _movie_attr)
    {    
    m_has_movie_attr = true;
    m_movie_attr = _movie_attr;
    }

    const XSD::float_& imagedata_element::get_movie_attr() const
    {    
    return m_movie_attr;
    }

    bool imagedata_element::has_r_relid_attr() const
    {    
    return m_has_r_relid_attr;
    }

    void imagedata_element::set_r_relid_attr(const ns_r::ST_RelationshipId& _r_relid_attr)
    {    
    m_has_r_relid_attr = true;
    m_r_relid_attr = new ns_r::ST_RelationshipId(_r_relid_attr);
    }

    const ns_r::ST_RelationshipId& imagedata_element::get_r_relid_attr() const
    {    
    if (m_r_relid_attr)
    {
        return *m_r_relid_attr;
    }
    return ns_r::ST_RelationshipId::default_instance();
    }

    bool imagedata_element::has_r_id_attr() const
    {    
    return m_has_r_id_attr;
    }

    void imagedata_element::set_r_id_attr(const ns_r::ST_RelationshipId& _r_id_attr)
    {    
    m_has_r_id_attr = true;
    m_r_id_attr = new ns_r::ST_RelationshipId(_r_id_attr);
    }

    const ns_r::ST_RelationshipId& imagedata_element::get_r_id_attr() const
    {    
    if (m_r_id_attr)
    {
        return *m_r_id_attr;
    }
    return ns_r::ST_RelationshipId::default_instance();
    }

    bool imagedata_element::has_r_pict_attr() const
    {    
    return m_has_r_pict_attr;
    }

    void imagedata_element::set_r_pict_attr(const ns_r::ST_RelationshipId& _r_pict_attr)
    {    
    m_has_r_pict_attr = true;
    m_r_pict_attr = new ns_r::ST_RelationshipId(_r_pict_attr);
    }

    const ns_r::ST_RelationshipId& imagedata_element::get_r_pict_attr() const
    {    
    if (m_r_pict_attr)
    {
        return *m_r_pict_attr;
    }
    return ns_r::ST_RelationshipId::default_instance();
    }

    bool imagedata_element::has_r_href_attr() const
    {    
    return m_has_r_href_attr;
    }

    void imagedata_element::set_r_href_attr(const ns_r::ST_RelationshipId& _r_href_attr)
    {    
    m_has_r_href_attr = true;
    m_r_href_attr = new ns_r::ST_RelationshipId(_r_href_attr);
    }

    const ns_r::ST_RelationshipId& imagedata_element::get_r_href_attr() const
    {    
    if (m_r_href_attr)
    {
        return *m_r_href_attr;
    }
    return ns_r::ST_RelationshipId::default_instance();
    }


    // path_element
    void path_element::clear()
    {    
    m_has_id_attr = false;
    m_id_attr.clear();
    
    m_has_v_attr = false;
    m_v_attr.clear();
    
    m_has_limo_attr = false;
    m_limo_attr.clear();
    
    m_has_textboxrect_attr = false;
    m_textboxrect_attr.clear();
    
    m_has_s_fillok_attr = false;
    
    if (m_s_fillok_attr)
    {
        delete m_s_fillok_attr;
        m_s_fillok_attr = NULL;
    }
    
    
    m_has_s_strokeok_attr = false;
    
    if (m_s_strokeok_attr)
    {
        delete m_s_strokeok_attr;
        m_s_strokeok_attr = NULL;
    }
    
    
    m_has_s_shadowok_attr = false;
    
    if (m_s_shadowok_attr)
    {
        delete m_s_shadowok_attr;
        m_s_shadowok_attr = NULL;
    }
    
    
    m_has_s_arrowok_attr = false;
    
    if (m_s_arrowok_attr)
    {
        delete m_s_arrowok_attr;
        m_s_arrowok_attr = NULL;
    }
    
    
    m_has_s_gradientshapeok_attr = false;
    
    if (m_s_gradientshapeok_attr)
    {
        delete m_s_gradientshapeok_attr;
        m_s_gradientshapeok_attr = NULL;
    }
    
    
    m_has_s_textpathok_attr = false;
    
    if (m_s_textpathok_attr)
    {
        delete m_s_textpathok_attr;
        m_s_textpathok_attr = NULL;
    }
    
    
    m_has_s_insetpenok_attr = false;
    
    if (m_s_insetpenok_attr)
    {
        delete m_s_insetpenok_attr;
        m_s_insetpenok_attr = NULL;
    }
    
    
    m_has_o_connecttype_attr = false;
    
    if (m_o_connecttype_attr)
    {
        delete m_o_connecttype_attr;
        m_o_connecttype_attr = NULL;
    }
    
    
    m_has_connectlocs_attr = false;
    m_connectlocs_attr.clear();
    
    m_has_connectangles_attr = false;
    m_connectangles_attr.clear();
    
    m_has_s_extrusionok_attr = false;
    
    if (m_s_extrusionok_attr)
    {
        delete m_s_extrusionok_attr;
        m_s_extrusionok_attr = NULL;
    }
    
    }

    void path_element::toXml(std::ostream& _outStream) const
    {    
    _outStream << "<v:path";
    
    _outStream << " " << "xmlns:v=\"urn:schemas-microsoft-com:vml\"";
    _outStream << " " << "xmlns:x=\"urn:schemas-microsoft-com:office:excel\"";
    _outStream << " " << "xmlns:w=\"http://schemas.openxmlformats.org/wordprocessingml/2006/main\"";
    _outStream << " " << "xmlns:s=\"http://schemas.openxmlformats.org/officeDocument/2006/sharedTypes\"";
    _outStream << " " << "xmlns:w10=\"urn:schemas-microsoft-com:office:word\"";
    _outStream << " " << "xmlns:r=\"http://schemas.openxmlformats.org/officeDocument/2006/relationships\"";
    _outStream << " " << "xmlns:o=\"urn:schemas-microsoft-com:office:office\"";
    _outStream << " " << "xmlns:pvml=\"urn:schemas-microsoft-com:office:powerpoint\"";
    
    if (m_has_id_attr)
    {
        _outStream << " " << "id" << "=\"" << m_id_attr << "\"";
    }
    
    
    if (m_has_v_attr)
    {
        _outStream << " " << "v" << "=\"" << m_v_attr << "\"";
    }
    
    
    if (m_has_limo_attr)
    {
        _outStream << " " << "limo" << "=\"" << m_limo_attr << "\"";
    }
    
    
    if (m_has_textboxrect_attr)
    {
        _outStream << " " << "textboxrect" << "=\"" << m_textboxrect_attr << "\"";
    }
    
    
    if (m_has_s_fillok_attr)
    {
        m_s_fillok_attr->toXmlAttr("fillok", _outStream);
    }
    
    
    if (m_has_s_strokeok_attr)
    {
        m_s_strokeok_attr->toXmlAttr("strokeok", _outStream);
    }
    
    
    if (m_has_s_shadowok_attr)
    {
        m_s_shadowok_attr->toXmlAttr("shadowok", _outStream);
    }
    
    
    if (m_has_s_arrowok_attr)
    {
        m_s_arrowok_attr->toXmlAttr("arrowok", _outStream);
    }
    
    
    if (m_has_s_gradientshapeok_attr)
    {
        m_s_gradientshapeok_attr->toXmlAttr("gradientshapeok", _outStream);
    }
    
    
    if (m_has_s_textpathok_attr)
    {
        m_s_textpathok_attr->toXmlAttr("textpathok", _outStream);
    }
    
    
    if (m_has_s_insetpenok_attr)
    {
        m_s_insetpenok_attr->toXmlAttr("insetpenok", _outStream);
    }
    
    
    if (m_has_o_connecttype_attr)
    {
        m_o_connecttype_attr->toXmlAttr("connecttype", _outStream);
    }
    
    
    if (m_has_connectlocs_attr)
    {
        _outStream << " " << "connectlocs" << "=\"" << m_connectlocs_attr << "\"";
    }
    
    
    if (m_has_connectangles_attr)
    {
        _outStream << " " << "connectangles" << "=\"" << m_connectangles_attr << "\"";
    }
    
    
    if (m_has_s_extrusionok_attr)
    {
        m_s_extrusionok_attr->toXmlAttr("extrusionok", _outStream);
    }
    
    _outStream << ">";
    
    _outStream << "</v:path>";
    }

    const path_element& path_element::default_instance()
    {    
    if (!path_element::default_instance_)
    {
        path_element::default_instance_ = new path_element();
    }
    return *path_element::default_instance_;
    }

    bool path_element::has_id_attr() const
    {    
    return m_has_id_attr;
    }

    void path_element::set_id_attr(const XSD::string_& _id_attr)
    {    
    m_has_id_attr = true;
    m_id_attr = _id_attr;
    }

    const XSD::string_& path_element::get_id_attr() const
    {    
    return m_id_attr;
    }

    bool path_element::has_v_attr() const
    {    
    return m_has_v_attr;
    }

    void path_element::set_v_attr(const XSD::string_& _v_attr)
    {    
    m_has_v_attr = true;
    m_v_attr = _v_attr;
    }

    const XSD::string_& path_element::get_v_attr() const
    {    
    return m_v_attr;
    }

    bool path_element::has_limo_attr() const
    {    
    return m_has_limo_attr;
    }

    void path_element::set_limo_attr(const XSD::string_& _limo_attr)
    {    
    m_has_limo_attr = true;
    m_limo_attr = _limo_attr;
    }

    const XSD::string_& path_element::get_limo_attr() const
    {    
    return m_limo_attr;
    }

    bool path_element::has_textboxrect_attr() const
    {    
    return m_has_textboxrect_attr;
    }

    void path_element::set_textboxrect_attr(const XSD::string_& _textboxrect_attr)
    {    
    m_has_textboxrect_attr = true;
    m_textboxrect_attr = _textboxrect_attr;
    }

    const XSD::string_& path_element::get_textboxrect_attr() const
    {    
    return m_textboxrect_attr;
    }

    bool path_element::has_s_fillok_attr() const
    {    
    return m_has_s_fillok_attr;
    }

    void path_element::set_s_fillok_attr(const ns_s::ST_TrueFalse& _s_fillok_attr)
    {    
    m_has_s_fillok_attr = true;
    m_s_fillok_attr = new ns_s::ST_TrueFalse(_s_fillok_attr);
    }

    const ns_s::ST_TrueFalse& path_element::get_s_fillok_attr() const
    {    
    if (m_s_fillok_attr)
    {
        return *m_s_fillok_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
    }

    bool path_element::has_s_strokeok_attr() const
    {    
    return m_has_s_strokeok_attr;
    }

    void path_element::set_s_strokeok_attr(const ns_s::ST_TrueFalse& _s_strokeok_attr)
    {    
    m_has_s_strokeok_attr = true;
    m_s_strokeok_attr = new ns_s::ST_TrueFalse(_s_strokeok_attr);
    }

    const ns_s::ST_TrueFalse& path_element::get_s_strokeok_attr() const
    {    
    if (m_s_strokeok_attr)
    {
        return *m_s_strokeok_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
    }

    bool path_element::has_s_shadowok_attr() const
    {    
    return m_has_s_shadowok_attr;
    }

    void path_element::set_s_shadowok_attr(const ns_s::ST_TrueFalse& _s_shadowok_attr)
    {    
    m_has_s_shadowok_attr = true;
    m_s_shadowok_attr = new ns_s::ST_TrueFalse(_s_shadowok_attr);
    }

    const ns_s::ST_TrueFalse& path_element::get_s_shadowok_attr() const
    {    
    if (m_s_shadowok_attr)
    {
        return *m_s_shadowok_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
    }

    bool path_element::has_s_arrowok_attr() const
    {    
    return m_has_s_arrowok_attr;
    }

    void path_element::set_s_arrowok_attr(const ns_s::ST_TrueFalse& _s_arrowok_attr)
    {    
    m_has_s_arrowok_attr = true;
    m_s_arrowok_attr = new ns_s::ST_TrueFalse(_s_arrowok_attr);
    }

    const ns_s::ST_TrueFalse& path_element::get_s_arrowok_attr() const
    {    
    if (m_s_arrowok_attr)
    {
        return *m_s_arrowok_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
    }

    bool path_element::has_s_gradientshapeok_attr() const
    {    
    return m_has_s_gradientshapeok_attr;
    }

    void path_element::set_s_gradientshapeok_attr(const ns_s::ST_TrueFalse& _s_gradientshapeok_attr)
    {    
    m_has_s_gradientshapeok_attr = true;
    m_s_gradientshapeok_attr = new ns_s::ST_TrueFalse(_s_gradientshapeok_attr);
    }

    const ns_s::ST_TrueFalse& path_element::get_s_gradientshapeok_attr() const
    {    
    if (m_s_gradientshapeok_attr)
    {
        return *m_s_gradientshapeok_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
    }

    bool path_element::has_s_textpathok_attr() const
    {    
    return m_has_s_textpathok_attr;
    }

    void path_element::set_s_textpathok_attr(const ns_s::ST_TrueFalse& _s_textpathok_attr)
    {    
    m_has_s_textpathok_attr = true;
    m_s_textpathok_attr = new ns_s::ST_TrueFalse(_s_textpathok_attr);
    }

    const ns_s::ST_TrueFalse& path_element::get_s_textpathok_attr() const
    {    
    if (m_s_textpathok_attr)
    {
        return *m_s_textpathok_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
    }

    bool path_element::has_s_insetpenok_attr() const
    {    
    return m_has_s_insetpenok_attr;
    }

    void path_element::set_s_insetpenok_attr(const ns_s::ST_TrueFalse& _s_insetpenok_attr)
    {    
    m_has_s_insetpenok_attr = true;
    m_s_insetpenok_attr = new ns_s::ST_TrueFalse(_s_insetpenok_attr);
    }

    const ns_s::ST_TrueFalse& path_element::get_s_insetpenok_attr() const
    {    
    if (m_s_insetpenok_attr)
    {
        return *m_s_insetpenok_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
    }

    bool path_element::has_o_connecttype_attr() const
    {    
    return m_has_o_connecttype_attr;
    }

    void path_element::set_o_connecttype_attr(const ns_o::ST_ConnectType& _o_connecttype_attr)
    {    
    m_has_o_connecttype_attr = true;
    m_o_connecttype_attr = new ns_o::ST_ConnectType(_o_connecttype_attr);
    }

    const ns_o::ST_ConnectType& path_element::get_o_connecttype_attr() const
    {    
    if (m_o_connecttype_attr)
    {
        return *m_o_connecttype_attr;
    }
    return ns_o::ST_ConnectType::default_instance();
    }

    bool path_element::has_connectlocs_attr() const
    {    
    return m_has_connectlocs_attr;
    }

    void path_element::set_connectlocs_attr(const XSD::string_& _connectlocs_attr)
    {    
    m_has_connectlocs_attr = true;
    m_connectlocs_attr = _connectlocs_attr;
    }

    const XSD::string_& path_element::get_connectlocs_attr() const
    {    
    return m_connectlocs_attr;
    }

    bool path_element::has_connectangles_attr() const
    {    
    return m_has_connectangles_attr;
    }

    void path_element::set_connectangles_attr(const XSD::string_& _connectangles_attr)
    {    
    m_has_connectangles_attr = true;
    m_connectangles_attr = _connectangles_attr;
    }

    const XSD::string_& path_element::get_connectangles_attr() const
    {    
    return m_connectangles_attr;
    }

    bool path_element::has_s_extrusionok_attr() const
    {    
    return m_has_s_extrusionok_attr;
    }

    void path_element::set_s_extrusionok_attr(const ns_s::ST_TrueFalse& _s_extrusionok_attr)
    {    
    m_has_s_extrusionok_attr = true;
    m_s_extrusionok_attr = new ns_s::ST_TrueFalse(_s_extrusionok_attr);
    }

    const ns_s::ST_TrueFalse& path_element::get_s_extrusionok_attr() const
    {    
    if (m_s_extrusionok_attr)
    {
        return *m_s_extrusionok_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
    }


    // textbox_element
    bool textbox_element::has_w_txbxContent() const
    {    
    return m_has_w_txbxContent;
    }

    ns_w::CT_TxbxContent* textbox_element::mutable_w_txbxContent()
    {    
    
    m_has_w_txbxContent = true;
    if (!m_w_txbxContent)
    {
        m_w_txbxContent = new ns_w::CT_TxbxContent();
    }
    return m_w_txbxContent;
    }

    const ns_w::CT_TxbxContent& textbox_element::get_w_txbxContent() const
    {    
    if (m_w_txbxContent)
    {
        return *m_w_txbxContent;
    }
    return ns_w::CT_TxbxContent::default_instance();
    }

    void textbox_element::clear()
    {    
    m_has_id_attr = false;
    m_id_attr.clear();
    
    m_has_style_attr = false;
    m_style_attr.clear();
    
    m_has_inset_attr = false;
    m_inset_attr.clear();
    
    m_has_s_singleclick_attr = false;
    
    if (m_s_singleclick_attr)
    {
        delete m_s_singleclick_attr;
        m_s_singleclick_attr = NULL;
    }
    
    
    m_has_o_insetmode_attr = false;
    
    if (m_o_insetmode_attr)
    {
        delete m_o_insetmode_attr;
        m_o_insetmode_attr = NULL;
    }
    
    
    m_has_w_txbxContent = false;
    
    if (m_w_txbxContent)
    {
        delete m_w_txbxContent;
        m_w_txbxContent = NULL;
    }
    
    }

    void textbox_element::toXml(std::ostream& _outStream) const
    {    
    _outStream << "<v:textbox";
    
    _outStream << " " << "xmlns:v=\"urn:schemas-microsoft-com:vml\"";
    _outStream << " " << "xmlns:x=\"urn:schemas-microsoft-com:office:excel\"";
    _outStream << " " << "xmlns:w=\"http://schemas.openxmlformats.org/wordprocessingml/2006/main\"";
    _outStream << " " << "xmlns:s=\"http://schemas.openxmlformats.org/officeDocument/2006/sharedTypes\"";
    _outStream << " " << "xmlns:w10=\"urn:schemas-microsoft-com:office:word\"";
    _outStream << " " << "xmlns:r=\"http://schemas.openxmlformats.org/officeDocument/2006/relationships\"";
    _outStream << " " << "xmlns:o=\"urn:schemas-microsoft-com:office:office\"";
    _outStream << " " << "xmlns:pvml=\"urn:schemas-microsoft-com:office:powerpoint\"";
    
    if (m_has_id_attr)
    {
        _outStream << " " << "id" << "=\"" << m_id_attr << "\"";
    }
    
    
    if (m_has_style_attr)
    {
        _outStream << " " << "style" << "=\"" << m_style_attr << "\"";
    }
    
    
    if (m_has_inset_attr)
    {
        _outStream << " " << "inset" << "=\"" << m_inset_attr << "\"";
    }
    
    
    if (m_has_s_singleclick_attr)
    {
        m_s_singleclick_attr->toXmlAttr("singleclick", _outStream);
    }
    
    
    if (m_has_o_insetmode_attr)
    {
        m_o_insetmode_attr->toXmlAttr("insetmode", _outStream);
    }
    
    _outStream << ">";
    
    if (m_has_w_txbxContent)
    {
        m_w_txbxContent->toXmlElem("v:txbxContent", "", _outStream);;
    }
    
    _outStream << "</v:textbox>";
    }

    const textbox_element& textbox_element::default_instance()
    {    
    if (!textbox_element::default_instance_)
    {
        textbox_element::default_instance_ = new textbox_element();
    }
    return *textbox_element::default_instance_;
    }

    bool textbox_element::has_id_attr() const
    {    
    return m_has_id_attr;
    }

    void textbox_element::set_id_attr(const XSD::string_& _id_attr)
    {    
    m_has_id_attr = true;
    m_id_attr = _id_attr;
    }

    const XSD::string_& textbox_element::get_id_attr() const
    {    
    return m_id_attr;
    }

    bool textbox_element::has_style_attr() const
    {    
    return m_has_style_attr;
    }

    void textbox_element::set_style_attr(const XSD::string_& _style_attr)
    {    
    m_has_style_attr = true;
    m_style_attr = _style_attr;
    }

    const XSD::string_& textbox_element::get_style_attr() const
    {    
    return m_style_attr;
    }

    bool textbox_element::has_inset_attr() const
    {    
    return m_has_inset_attr;
    }

    void textbox_element::set_inset_attr(const XSD::string_& _inset_attr)
    {    
    m_has_inset_attr = true;
    m_inset_attr = _inset_attr;
    }

    const XSD::string_& textbox_element::get_inset_attr() const
    {    
    return m_inset_attr;
    }

    bool textbox_element::has_s_singleclick_attr() const
    {    
    return m_has_s_singleclick_attr;
    }

    void textbox_element::set_s_singleclick_attr(const ns_s::ST_TrueFalse& _s_singleclick_attr)
    {    
    m_has_s_singleclick_attr = true;
    m_s_singleclick_attr = new ns_s::ST_TrueFalse(_s_singleclick_attr);
    }

    const ns_s::ST_TrueFalse& textbox_element::get_s_singleclick_attr() const
    {    
    if (m_s_singleclick_attr)
    {
        return *m_s_singleclick_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
    }

    bool textbox_element::has_o_insetmode_attr() const
    {    
    return m_has_o_insetmode_attr;
    }

    void textbox_element::set_o_insetmode_attr(const ns_o::ST_InsetMode& _o_insetmode_attr)
    {    
    m_has_o_insetmode_attr = true;
    m_o_insetmode_attr = new ns_o::ST_InsetMode(_o_insetmode_attr);
    }

    const ns_o::ST_InsetMode& textbox_element::get_o_insetmode_attr() const
    {    
    if (m_o_insetmode_attr)
    {
        return *m_o_insetmode_attr;
    }
    return ns_o::ST_InsetMode::default_instance();
    }


    // shadow_element
    void shadow_element::clear()
    {    
    m_has_id_attr = false;
    m_id_attr.clear();
    
    m_has_s_on_attr = false;
    
    if (m_s_on_attr)
    {
        delete m_s_on_attr;
        m_s_on_attr = NULL;
    }
    
    
    m_has_type_attr = false;
    
    if (m_type_attr)
    {
        delete m_type_attr;
        m_type_attr = NULL;
    }
    
    
    m_has_s_obscured_attr = false;
    
    if (m_s_obscured_attr)
    {
        delete m_s_obscured_attr;
        m_s_obscured_attr = NULL;
    }
    
    
    m_has_s_color_attr = false;
    
    if (m_s_color_attr)
    {
        delete m_s_color_attr;
        m_s_color_attr = NULL;
    }
    
    
    m_has_opacity_attr = false;
    m_opacity_attr.clear();
    
    m_has_offset_attr = false;
    m_offset_attr.clear();
    
    m_has_s_color2_attr = false;
    
    if (m_s_color2_attr)
    {
        delete m_s_color2_attr;
        m_s_color2_attr = NULL;
    }
    
    
    m_has_offset2_attr = false;
    m_offset2_attr.clear();
    
    m_has_origin_attr = false;
    m_origin_attr.clear();
    
    m_has_matrix_attr = false;
    m_matrix_attr.clear();
    }

    void shadow_element::toXml(std::ostream& _outStream) const
    {    
    _outStream << "<v:shadow";
    
    _outStream << " " << "xmlns:v=\"urn:schemas-microsoft-com:vml\"";
    _outStream << " " << "xmlns:x=\"urn:schemas-microsoft-com:office:excel\"";
    _outStream << " " << "xmlns:w=\"http://schemas.openxmlformats.org/wordprocessingml/2006/main\"";
    _outStream << " " << "xmlns:s=\"http://schemas.openxmlformats.org/officeDocument/2006/sharedTypes\"";
    _outStream << " " << "xmlns:w10=\"urn:schemas-microsoft-com:office:word\"";
    _outStream << " " << "xmlns:r=\"http://schemas.openxmlformats.org/officeDocument/2006/relationships\"";
    _outStream << " " << "xmlns:o=\"urn:schemas-microsoft-com:office:office\"";
    _outStream << " " << "xmlns:pvml=\"urn:schemas-microsoft-com:office:powerpoint\"";
    
    if (m_has_id_attr)
    {
        _outStream << " " << "id" << "=\"" << m_id_attr << "\"";
    }
    
    
    if (m_has_s_on_attr)
    {
        m_s_on_attr->toXmlAttr("on", _outStream);
    }
    
    
    if (m_has_type_attr)
    {
        m_type_attr->toXmlAttr("type", _outStream);
    }
    
    
    if (m_has_s_obscured_attr)
    {
        m_s_obscured_attr->toXmlAttr("obscured", _outStream);
    }
    
    
    if (m_has_s_color_attr)
    {
        m_s_color_attr->toXmlAttr("color", _outStream);
    }
    
    
    if (m_has_opacity_attr)
    {
        _outStream << " " << "opacity" << "=\"" << m_opacity_attr << "\"";
    }
    
    
    if (m_has_offset_attr)
    {
        _outStream << " " << "offset" << "=\"" << m_offset_attr << "\"";
    }
    
    
    if (m_has_s_color2_attr)
    {
        m_s_color2_attr->toXmlAttr("color2", _outStream);
    }
    
    
    if (m_has_offset2_attr)
    {
        _outStream << " " << "offset2" << "=\"" << m_offset2_attr << "\"";
    }
    
    
    if (m_has_origin_attr)
    {
        _outStream << " " << "origin" << "=\"" << m_origin_attr << "\"";
    }
    
    
    if (m_has_matrix_attr)
    {
        _outStream << " " << "matrix" << "=\"" << m_matrix_attr << "\"";
    }
    
    _outStream << ">";
    
    _outStream << "</v:shadow>";
    }

    const shadow_element& shadow_element::default_instance()
    {    
    if (!shadow_element::default_instance_)
    {
        shadow_element::default_instance_ = new shadow_element();
    }
    return *shadow_element::default_instance_;
    }

    bool shadow_element::has_id_attr() const
    {    
    return m_has_id_attr;
    }

    void shadow_element::set_id_attr(const XSD::string_& _id_attr)
    {    
    m_has_id_attr = true;
    m_id_attr = _id_attr;
    }

    const XSD::string_& shadow_element::get_id_attr() const
    {    
    return m_id_attr;
    }

    bool shadow_element::has_s_on_attr() const
    {    
    return m_has_s_on_attr;
    }

    void shadow_element::set_s_on_attr(const ns_s::ST_TrueFalse& _s_on_attr)
    {    
    m_has_s_on_attr = true;
    m_s_on_attr = new ns_s::ST_TrueFalse(_s_on_attr);
    }

    const ns_s::ST_TrueFalse& shadow_element::get_s_on_attr() const
    {    
    if (m_s_on_attr)
    {
        return *m_s_on_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
    }

    bool shadow_element::has_type_attr() const
    {    
    return m_has_type_attr;
    }

    void shadow_element::set_type_attr(const ST_ShadowType& _type_attr)
    {    
    m_has_type_attr = true;
    m_type_attr = new ST_ShadowType(_type_attr);
    }

    const ST_ShadowType& shadow_element::get_type_attr() const
    {    
    if (m_type_attr)
    {
        return *m_type_attr;
    }
    return ST_ShadowType::default_instance();
    }

    bool shadow_element::has_s_obscured_attr() const
    {    
    return m_has_s_obscured_attr;
    }

    void shadow_element::set_s_obscured_attr(const ns_s::ST_TrueFalse& _s_obscured_attr)
    {    
    m_has_s_obscured_attr = true;
    m_s_obscured_attr = new ns_s::ST_TrueFalse(_s_obscured_attr);
    }

    const ns_s::ST_TrueFalse& shadow_element::get_s_obscured_attr() const
    {    
    if (m_s_obscured_attr)
    {
        return *m_s_obscured_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
    }

    bool shadow_element::has_s_color_attr() const
    {    
    return m_has_s_color_attr;
    }

    void shadow_element::set_s_color_attr(const ns_s::ST_ColorType& _s_color_attr)
    {    
    m_has_s_color_attr = true;
    m_s_color_attr = new ns_s::ST_ColorType(_s_color_attr);
    }

    const ns_s::ST_ColorType& shadow_element::get_s_color_attr() const
    {    
    if (m_s_color_attr)
    {
        return *m_s_color_attr;
    }
    return ns_s::ST_ColorType::default_instance();
    }

    bool shadow_element::has_opacity_attr() const
    {    
    return m_has_opacity_attr;
    }

    void shadow_element::set_opacity_attr(const XSD::string_& _opacity_attr)
    {    
    m_has_opacity_attr = true;
    m_opacity_attr = _opacity_attr;
    }

    const XSD::string_& shadow_element::get_opacity_attr() const
    {    
    return m_opacity_attr;
    }

    bool shadow_element::has_offset_attr() const
    {    
    return m_has_offset_attr;
    }

    void shadow_element::set_offset_attr(const XSD::string_& _offset_attr)
    {    
    m_has_offset_attr = true;
    m_offset_attr = _offset_attr;
    }

    const XSD::string_& shadow_element::get_offset_attr() const
    {    
    return m_offset_attr;
    }

    bool shadow_element::has_s_color2_attr() const
    {    
    return m_has_s_color2_attr;
    }

    void shadow_element::set_s_color2_attr(const ns_s::ST_ColorType& _s_color2_attr)
    {    
    m_has_s_color2_attr = true;
    m_s_color2_attr = new ns_s::ST_ColorType(_s_color2_attr);
    }

    const ns_s::ST_ColorType& shadow_element::get_s_color2_attr() const
    {    
    if (m_s_color2_attr)
    {
        return *m_s_color2_attr;
    }
    return ns_s::ST_ColorType::default_instance();
    }

    bool shadow_element::has_offset2_attr() const
    {    
    return m_has_offset2_attr;
    }

    void shadow_element::set_offset2_attr(const XSD::string_& _offset2_attr)
    {    
    m_has_offset2_attr = true;
    m_offset2_attr = _offset2_attr;
    }

    const XSD::string_& shadow_element::get_offset2_attr() const
    {    
    return m_offset2_attr;
    }

    bool shadow_element::has_origin_attr() const
    {    
    return m_has_origin_attr;
    }

    void shadow_element::set_origin_attr(const XSD::string_& _origin_attr)
    {    
    m_has_origin_attr = true;
    m_origin_attr = _origin_attr;
    }

    const XSD::string_& shadow_element::get_origin_attr() const
    {    
    return m_origin_attr;
    }

    bool shadow_element::has_matrix_attr() const
    {    
    return m_has_matrix_attr;
    }

    void shadow_element::set_matrix_attr(const XSD::string_& _matrix_attr)
    {    
    m_has_matrix_attr = true;
    m_matrix_attr = _matrix_attr;
    }

    const XSD::string_& shadow_element::get_matrix_attr() const
    {    
    return m_matrix_attr;
    }


    // stroke_element
    bool stroke_element::has_o_left() const
    {    
    return m_has_o_left;
    }

    ns_o::CT_StrokeChild* stroke_element::mutable_o_left()
    {    
    m_has_o_left = true;
    if (!m_o_left)
    {
        m_o_left = new ns_o::CT_StrokeChild();
    }
    return m_o_left;
    }

    const ns_o::CT_StrokeChild& stroke_element::get_o_left() const
    {    
    if (m_o_left)
    {
        return *m_o_left;
    }
    return ns_o::CT_StrokeChild::default_instance();
    }

    bool stroke_element::has_o_top() const
    {    
    return m_has_o_top;
    }

    ns_o::CT_StrokeChild* stroke_element::mutable_o_top()
    {    
    m_has_o_top = true;
    if (!m_o_top)
    {
        m_o_top = new ns_o::CT_StrokeChild();
    }
    return m_o_top;
    }

    const ns_o::CT_StrokeChild& stroke_element::get_o_top() const
    {    
    if (m_o_top)
    {
        return *m_o_top;
    }
    return ns_o::CT_StrokeChild::default_instance();
    }

    bool stroke_element::has_o_right() const
    {    
    return m_has_o_right;
    }

    ns_o::CT_StrokeChild* stroke_element::mutable_o_right()
    {    
    m_has_o_right = true;
    if (!m_o_right)
    {
        m_o_right = new ns_o::CT_StrokeChild();
    }
    return m_o_right;
    }

    const ns_o::CT_StrokeChild& stroke_element::get_o_right() const
    {    
    if (m_o_right)
    {
        return *m_o_right;
    }
    return ns_o::CT_StrokeChild::default_instance();
    }

    bool stroke_element::has_o_bottom() const
    {    
    return m_has_o_bottom;
    }

    ns_o::CT_StrokeChild* stroke_element::mutable_o_bottom()
    {    
    m_has_o_bottom = true;
    if (!m_o_bottom)
    {
        m_o_bottom = new ns_o::CT_StrokeChild();
    }
    return m_o_bottom;
    }

    const ns_o::CT_StrokeChild& stroke_element::get_o_bottom() const
    {    
    if (m_o_bottom)
    {
        return *m_o_bottom;
    }
    return ns_o::CT_StrokeChild::default_instance();
    }

    bool stroke_element::has_o_column() const
    {    
    return m_has_o_column;
    }

    ns_o::CT_StrokeChild* stroke_element::mutable_o_column()
    {    
    m_has_o_column = true;
    if (!m_o_column)
    {
        m_o_column = new ns_o::CT_StrokeChild();
    }
    return m_o_column;
    }

    const ns_o::CT_StrokeChild& stroke_element::get_o_column() const
    {    
    if (m_o_column)
    {
        return *m_o_column;
    }
    return ns_o::CT_StrokeChild::default_instance();
    }

    void stroke_element::clear()
    {    
    m_has_id_attr = false;
    m_id_attr.clear();
    
    m_has_s_on_attr = false;
    
    if (m_s_on_attr)
    {
        delete m_s_on_attr;
        m_s_on_attr = NULL;
    }
    
    
    m_has_weight_attr = false;
    m_weight_attr.clear();
    
    m_has_s_color_attr = false;
    
    if (m_s_color_attr)
    {
        delete m_s_color_attr;
        m_s_color_attr = NULL;
    }
    
    
    m_has_opacity_attr = false;
    m_opacity_attr.clear();
    
    m_has_linestyle_attr = false;
    
    if (m_linestyle_attr)
    {
        delete m_linestyle_attr;
        m_linestyle_attr = NULL;
    }
    
    
    m_has_miterlimit_attr = false;
    m_miterlimit_attr = 0;
    
    m_has_joinstyle_attr = false;
    
    if (m_joinstyle_attr)
    {
        delete m_joinstyle_attr;
        m_joinstyle_attr = NULL;
    }
    
    
    m_has_endcap_attr = false;
    
    if (m_endcap_attr)
    {
        delete m_endcap_attr;
        m_endcap_attr = NULL;
    }
    
    
    m_has_dashstyle_attr = false;
    m_dashstyle_attr.clear();
    
    m_has_filltype_attr = false;
    
    if (m_filltype_attr)
    {
        delete m_filltype_attr;
        m_filltype_attr = NULL;
    }
    
    
    m_has_src_attr = false;
    m_src_attr.clear();
    
    m_has_imageaspect_attr = false;
    
    if (m_imageaspect_attr)
    {
        delete m_imageaspect_attr;
        m_imageaspect_attr = NULL;
    }
    
    
    m_has_imagesize_attr = false;
    m_imagesize_attr.clear();
    
    m_has_s_imagealignshape_attr = false;
    
    if (m_s_imagealignshape_attr)
    {
        delete m_s_imagealignshape_attr;
        m_s_imagealignshape_attr = NULL;
    }
    
    
    m_has_s_color2_attr = false;
    
    if (m_s_color2_attr)
    {
        delete m_s_color2_attr;
        m_s_color2_attr = NULL;
    }
    
    
    m_has_startarrow_attr = false;
    
    if (m_startarrow_attr)
    {
        delete m_startarrow_attr;
        m_startarrow_attr = NULL;
    }
    
    
    m_has_startarrowwidth_attr = false;
    
    if (m_startarrowwidth_attr)
    {
        delete m_startarrowwidth_attr;
        m_startarrowwidth_attr = NULL;
    }
    
    
    m_has_startarrowlength_attr = false;
    
    if (m_startarrowlength_attr)
    {
        delete m_startarrowlength_attr;
        m_startarrowlength_attr = NULL;
    }
    
    
    m_has_endarrow_attr = false;
    
    if (m_endarrow_attr)
    {
        delete m_endarrow_attr;
        m_endarrow_attr = NULL;
    }
    
    
    m_has_endarrowwidth_attr = false;
    
    if (m_endarrowwidth_attr)
    {
        delete m_endarrowwidth_attr;
        m_endarrowwidth_attr = NULL;
    }
    
    
    m_has_endarrowlength_attr = false;
    
    if (m_endarrowlength_attr)
    {
        delete m_endarrowlength_attr;
        m_endarrowlength_attr = NULL;
    }
    
    
    m_has_href_attr = false;
    m_href_attr.clear();
    
    m_has_althref_attr = false;
    m_althref_attr.clear();
    
    m_has_title_attr = false;
    m_title_attr.clear();
    
    m_has_s_forcedash_attr = false;
    
    if (m_s_forcedash_attr)
    {
        delete m_s_forcedash_attr;
        m_s_forcedash_attr = NULL;
    }
    
    
    m_has_r_id_attr = false;
    
    if (m_r_id_attr)
    {
        delete m_r_id_attr;
        m_r_id_attr = NULL;
    }
    
    
    m_has_s_insetpen_attr = false;
    
    if (m_s_insetpen_attr)
    {
        delete m_s_insetpen_attr;
        m_s_insetpen_attr = NULL;
    }
    
    
    m_has_r_relid_attr = false;
    
    if (m_r_relid_attr)
    {
        delete m_r_relid_attr;
        m_r_relid_attr = NULL;
    }
    
    
    m_has_o_left = false;
    
    if (m_o_left)
    {
        delete m_o_left;
        m_o_left = NULL;
    }
    
    
    m_has_o_top = false;
    
    if (m_o_top)
    {
        delete m_o_top;
        m_o_top = NULL;
    }
    
    
    m_has_o_right = false;
    
    if (m_o_right)
    {
        delete m_o_right;
        m_o_right = NULL;
    }
    
    
    m_has_o_bottom = false;
    
    if (m_o_bottom)
    {
        delete m_o_bottom;
        m_o_bottom = NULL;
    }
    
    
    m_has_o_column = false;
    
    if (m_o_column)
    {
        delete m_o_column;
        m_o_column = NULL;
    }
    
    }

    void stroke_element::toXml(std::ostream& _outStream) const
    {    
    _outStream << "<v:stroke";
    
    _outStream << " " << "xmlns:v=\"urn:schemas-microsoft-com:vml\"";
    _outStream << " " << "xmlns:x=\"urn:schemas-microsoft-com:office:excel\"";
    _outStream << " " << "xmlns:w=\"http://schemas.openxmlformats.org/wordprocessingml/2006/main\"";
    _outStream << " " << "xmlns:s=\"http://schemas.openxmlformats.org/officeDocument/2006/sharedTypes\"";
    _outStream << " " << "xmlns:w10=\"urn:schemas-microsoft-com:office:word\"";
    _outStream << " " << "xmlns:r=\"http://schemas.openxmlformats.org/officeDocument/2006/relationships\"";
    _outStream << " " << "xmlns:o=\"urn:schemas-microsoft-com:office:office\"";
    _outStream << " " << "xmlns:pvml=\"urn:schemas-microsoft-com:office:powerpoint\"";
    
    if (m_has_id_attr)
    {
        _outStream << " " << "id" << "=\"" << m_id_attr << "\"";
    }
    
    
    if (m_has_s_on_attr)
    {
        m_s_on_attr->toXmlAttr("on", _outStream);
    }
    
    
    if (m_has_weight_attr)
    {
        _outStream << " " << "weight" << "=\"" << m_weight_attr << "\"";
    }
    
    
    if (m_has_s_color_attr)
    {
        m_s_color_attr->toXmlAttr("color", _outStream);
    }
    
    
    if (m_has_opacity_attr)
    {
        _outStream << " " << "opacity" << "=\"" << m_opacity_attr << "\"";
    }
    
    
    if (m_has_linestyle_attr)
    {
        m_linestyle_attr->toXmlAttr("linestyle", _outStream);
    }
    
    
    if (m_has_miterlimit_attr)
    {
        _outStream << " " << "miterlimit" << "=\"" << m_miterlimit_attr << "\"";
    }
    
    
    if (m_has_joinstyle_attr)
    {
        m_joinstyle_attr->toXmlAttr("joinstyle", _outStream);
    }
    
    
    if (m_has_endcap_attr)
    {
        m_endcap_attr->toXmlAttr("endcap", _outStream);
    }
    
    
    if (m_has_dashstyle_attr)
    {
        _outStream << " " << "dashstyle" << "=\"" << m_dashstyle_attr << "\"";
    }
    
    
    if (m_has_filltype_attr)
    {
        m_filltype_attr->toXmlAttr("filltype", _outStream);
    }
    
    
    if (m_has_src_attr)
    {
        _outStream << " " << "src" << "=\"" << m_src_attr << "\"";
    }
    
    
    if (m_has_imageaspect_attr)
    {
        m_imageaspect_attr->toXmlAttr("imageaspect", _outStream);
    }
    
    
    if (m_has_imagesize_attr)
    {
        _outStream << " " << "imagesize" << "=\"" << m_imagesize_attr << "\"";
    }
    
    
    if (m_has_s_imagealignshape_attr)
    {
        m_s_imagealignshape_attr->toXmlAttr("imagealignshape", _outStream);
    }
    
    
    if (m_has_s_color2_attr)
    {
        m_s_color2_attr->toXmlAttr("color2", _outStream);
    }
    
    
    if (m_has_startarrow_attr)
    {
        m_startarrow_attr->toXmlAttr("startarrow", _outStream);
    }
    
    
    if (m_has_startarrowwidth_attr)
    {
        m_startarrowwidth_attr->toXmlAttr("startarrowwidth", _outStream);
    }
    
    
    if (m_has_startarrowlength_attr)
    {
        m_startarrowlength_attr->toXmlAttr("startarrowlength", _outStream);
    }
    
    
    if (m_has_endarrow_attr)
    {
        m_endarrow_attr->toXmlAttr("endarrow", _outStream);
    }
    
    
    if (m_has_endarrowwidth_attr)
    {
        m_endarrowwidth_attr->toXmlAttr("endarrowwidth", _outStream);
    }
    
    
    if (m_has_endarrowlength_attr)
    {
        m_endarrowlength_attr->toXmlAttr("endarrowlength", _outStream);
    }
    
    
    if (m_has_href_attr)
    {
        _outStream << " " << "href" << "=\"" << m_href_attr << "\"";
    }
    
    
    if (m_has_althref_attr)
    {
        _outStream << " " << "althref" << "=\"" << m_althref_attr << "\"";
    }
    
    
    if (m_has_title_attr)
    {
        _outStream << " " << "title" << "=\"" << m_title_attr << "\"";
    }
    
    
    if (m_has_s_forcedash_attr)
    {
        m_s_forcedash_attr->toXmlAttr("forcedash", _outStream);
    }
    
    
    if (m_has_r_id_attr)
    {
        m_r_id_attr->toXmlAttr("id", _outStream);
    }
    
    
    if (m_has_s_insetpen_attr)
    {
        m_s_insetpen_attr->toXmlAttr("insetpen", _outStream);
    }
    
    
    if (m_has_r_relid_attr)
    {
        m_r_relid_attr->toXmlAttr("relid", _outStream);
    }
    
    _outStream << ">";
    
    if (m_has_o_left)
    {
        m_o_left->toXmlElem("v:left", "", _outStream);;
    }
    
    if (m_has_o_top)
    {
        m_o_top->toXmlElem("v:top", "", _outStream);;
    }
    
    if (m_has_o_right)
    {
        m_o_right->toXmlElem("v:right", "", _outStream);;
    }
    
    if (m_has_o_bottom)
    {
        m_o_bottom->toXmlElem("v:bottom", "", _outStream);;
    }
    
    if (m_has_o_column)
    {
        m_o_column->toXmlElem("v:column", "", _outStream);;
    }
    
    _outStream << "</v:stroke>";
    }

    const stroke_element& stroke_element::default_instance()
    {    
    if (!stroke_element::default_instance_)
    {
        stroke_element::default_instance_ = new stroke_element();
    }
    return *stroke_element::default_instance_;
    }

    bool stroke_element::has_id_attr() const
    {    
    return m_has_id_attr;
    }

    void stroke_element::set_id_attr(const XSD::string_& _id_attr)
    {    
    m_has_id_attr = true;
    m_id_attr = _id_attr;
    }

    const XSD::string_& stroke_element::get_id_attr() const
    {    
    return m_id_attr;
    }

    bool stroke_element::has_s_on_attr() const
    {    
    return m_has_s_on_attr;
    }

    void stroke_element::set_s_on_attr(const ns_s::ST_TrueFalse& _s_on_attr)
    {    
    m_has_s_on_attr = true;
    m_s_on_attr = new ns_s::ST_TrueFalse(_s_on_attr);
    }

    const ns_s::ST_TrueFalse& stroke_element::get_s_on_attr() const
    {    
    if (m_s_on_attr)
    {
        return *m_s_on_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
    }

    bool stroke_element::has_weight_attr() const
    {    
    return m_has_weight_attr;
    }

    void stroke_element::set_weight_attr(const XSD::string_& _weight_attr)
    {    
    m_has_weight_attr = true;
    m_weight_attr = _weight_attr;
    }

    const XSD::string_& stroke_element::get_weight_attr() const
    {    
    return m_weight_attr;
    }

    bool stroke_element::has_s_color_attr() const
    {    
    return m_has_s_color_attr;
    }

    void stroke_element::set_s_color_attr(const ns_s::ST_ColorType& _s_color_attr)
    {    
    m_has_s_color_attr = true;
    m_s_color_attr = new ns_s::ST_ColorType(_s_color_attr);
    }

    const ns_s::ST_ColorType& stroke_element::get_s_color_attr() const
    {    
    if (m_s_color_attr)
    {
        return *m_s_color_attr;
    }
    return ns_s::ST_ColorType::default_instance();
    }

    bool stroke_element::has_opacity_attr() const
    {    
    return m_has_opacity_attr;
    }

    void stroke_element::set_opacity_attr(const XSD::string_& _opacity_attr)
    {    
    m_has_opacity_attr = true;
    m_opacity_attr = _opacity_attr;
    }

    const XSD::string_& stroke_element::get_opacity_attr() const
    {    
    return m_opacity_attr;
    }

    bool stroke_element::has_linestyle_attr() const
    {    
    return m_has_linestyle_attr;
    }

    void stroke_element::set_linestyle_attr(const ST_StrokeLineStyle& _linestyle_attr)
    {    
    m_has_linestyle_attr = true;
    m_linestyle_attr = new ST_StrokeLineStyle(_linestyle_attr);
    }

    const ST_StrokeLineStyle& stroke_element::get_linestyle_attr() const
    {    
    if (m_linestyle_attr)
    {
        return *m_linestyle_attr;
    }
    return ST_StrokeLineStyle::default_instance();
    }

    bool stroke_element::has_miterlimit_attr() const
    {    
    return m_has_miterlimit_attr;
    }

    void stroke_element::set_miterlimit_attr(const XSD::decimal_& _miterlimit_attr)
    {    
    m_has_miterlimit_attr = true;
    m_miterlimit_attr = _miterlimit_attr;
    }

    const XSD::decimal_& stroke_element::get_miterlimit_attr() const
    {    
    return m_miterlimit_attr;
    }

    bool stroke_element::has_joinstyle_attr() const
    {    
    return m_has_joinstyle_attr;
    }

    void stroke_element::set_joinstyle_attr(const ST_StrokeJoinStyle& _joinstyle_attr)
    {    
    m_has_joinstyle_attr = true;
    m_joinstyle_attr = new ST_StrokeJoinStyle(_joinstyle_attr);
    }

    const ST_StrokeJoinStyle& stroke_element::get_joinstyle_attr() const
    {    
    if (m_joinstyle_attr)
    {
        return *m_joinstyle_attr;
    }
    return ST_StrokeJoinStyle::default_instance();
    }

    bool stroke_element::has_endcap_attr() const
    {    
    return m_has_endcap_attr;
    }

    void stroke_element::set_endcap_attr(const ST_StrokeEndCap& _endcap_attr)
    {    
    m_has_endcap_attr = true;
    m_endcap_attr = new ST_StrokeEndCap(_endcap_attr);
    }

    const ST_StrokeEndCap& stroke_element::get_endcap_attr() const
    {    
    if (m_endcap_attr)
    {
        return *m_endcap_attr;
    }
    return ST_StrokeEndCap::default_instance();
    }

    bool stroke_element::has_dashstyle_attr() const
    {    
    return m_has_dashstyle_attr;
    }

    void stroke_element::set_dashstyle_attr(const XSD::string_& _dashstyle_attr)
    {    
    m_has_dashstyle_attr = true;
    m_dashstyle_attr = _dashstyle_attr;
    }

    const XSD::string_& stroke_element::get_dashstyle_attr() const
    {    
    return m_dashstyle_attr;
    }

    bool stroke_element::has_filltype_attr() const
    {    
    return m_has_filltype_attr;
    }

    void stroke_element::set_filltype_attr(const ST_FillType& _filltype_attr)
    {    
    m_has_filltype_attr = true;
    m_filltype_attr = new ST_FillType(_filltype_attr);
    }

    const ST_FillType& stroke_element::get_filltype_attr() const
    {    
    if (m_filltype_attr)
    {
        return *m_filltype_attr;
    }
    return ST_FillType::default_instance();
    }

    bool stroke_element::has_src_attr() const
    {    
    return m_has_src_attr;
    }

    void stroke_element::set_src_attr(const XSD::string_& _src_attr)
    {    
    m_has_src_attr = true;
    m_src_attr = _src_attr;
    }

    const XSD::string_& stroke_element::get_src_attr() const
    {    
    return m_src_attr;
    }

    bool stroke_element::has_imageaspect_attr() const
    {    
    return m_has_imageaspect_attr;
    }

    void stroke_element::set_imageaspect_attr(const ST_ImageAspect& _imageaspect_attr)
    {    
    m_has_imageaspect_attr = true;
    m_imageaspect_attr = new ST_ImageAspect(_imageaspect_attr);
    }

    const ST_ImageAspect& stroke_element::get_imageaspect_attr() const
    {    
    if (m_imageaspect_attr)
    {
        return *m_imageaspect_attr;
    }
    return ST_ImageAspect::default_instance();
    }

    bool stroke_element::has_imagesize_attr() const
    {    
    return m_has_imagesize_attr;
    }

    void stroke_element::set_imagesize_attr(const XSD::string_& _imagesize_attr)
    {    
    m_has_imagesize_attr = true;
    m_imagesize_attr = _imagesize_attr;
    }

    const XSD::string_& stroke_element::get_imagesize_attr() const
    {    
    return m_imagesize_attr;
    }

    bool stroke_element::has_s_imagealignshape_attr() const
    {    
    return m_has_s_imagealignshape_attr;
    }

    void stroke_element::set_s_imagealignshape_attr(const ns_s::ST_TrueFalse& _s_imagealignshape_attr)
    {    
    m_has_s_imagealignshape_attr = true;
    m_s_imagealignshape_attr = new ns_s::ST_TrueFalse(_s_imagealignshape_attr);
    }

    const ns_s::ST_TrueFalse& stroke_element::get_s_imagealignshape_attr() const
    {    
    if (m_s_imagealignshape_attr)
    {
        return *m_s_imagealignshape_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
    }

    bool stroke_element::has_s_color2_attr() const
    {    
    return m_has_s_color2_attr;
    }

    void stroke_element::set_s_color2_attr(const ns_s::ST_ColorType& _s_color2_attr)
    {    
    m_has_s_color2_attr = true;
    m_s_color2_attr = new ns_s::ST_ColorType(_s_color2_attr);
    }

    const ns_s::ST_ColorType& stroke_element::get_s_color2_attr() const
    {    
    if (m_s_color2_attr)
    {
        return *m_s_color2_attr;
    }
    return ns_s::ST_ColorType::default_instance();
    }

    bool stroke_element::has_startarrow_attr() const
    {    
    return m_has_startarrow_attr;
    }

    void stroke_element::set_startarrow_attr(const ST_StrokeArrowType& _startarrow_attr)
    {    
    m_has_startarrow_attr = true;
    m_startarrow_attr = new ST_StrokeArrowType(_startarrow_attr);
    }

    const ST_StrokeArrowType& stroke_element::get_startarrow_attr() const
    {    
    if (m_startarrow_attr)
    {
        return *m_startarrow_attr;
    }
    return ST_StrokeArrowType::default_instance();
    }

    bool stroke_element::has_startarrowwidth_attr() const
    {    
    return m_has_startarrowwidth_attr;
    }

    void stroke_element::set_startarrowwidth_attr(const ST_StrokeArrowWidth& _startarrowwidth_attr)
    {    
    m_has_startarrowwidth_attr = true;
    m_startarrowwidth_attr = new ST_StrokeArrowWidth(_startarrowwidth_attr);
    }

    const ST_StrokeArrowWidth& stroke_element::get_startarrowwidth_attr() const
    {    
    if (m_startarrowwidth_attr)
    {
        return *m_startarrowwidth_attr;
    }
    return ST_StrokeArrowWidth::default_instance();
    }

    bool stroke_element::has_startarrowlength_attr() const
    {    
    return m_has_startarrowlength_attr;
    }

    void stroke_element::set_startarrowlength_attr(const ST_StrokeArrowLength& _startarrowlength_attr)
    {    
    m_has_startarrowlength_attr = true;
    m_startarrowlength_attr = new ST_StrokeArrowLength(_startarrowlength_attr);
    }

    const ST_StrokeArrowLength& stroke_element::get_startarrowlength_attr() const
    {    
    if (m_startarrowlength_attr)
    {
        return *m_startarrowlength_attr;
    }
    return ST_StrokeArrowLength::default_instance();
    }

    bool stroke_element::has_endarrow_attr() const
    {    
    return m_has_endarrow_attr;
    }

    void stroke_element::set_endarrow_attr(const ST_StrokeArrowType& _endarrow_attr)
    {    
    m_has_endarrow_attr = true;
    m_endarrow_attr = new ST_StrokeArrowType(_endarrow_attr);
    }

    const ST_StrokeArrowType& stroke_element::get_endarrow_attr() const
    {    
    if (m_endarrow_attr)
    {
        return *m_endarrow_attr;
    }
    return ST_StrokeArrowType::default_instance();
    }

    bool stroke_element::has_endarrowwidth_attr() const
    {    
    return m_has_endarrowwidth_attr;
    }

    void stroke_element::set_endarrowwidth_attr(const ST_StrokeArrowWidth& _endarrowwidth_attr)
    {    
    m_has_endarrowwidth_attr = true;
    m_endarrowwidth_attr = new ST_StrokeArrowWidth(_endarrowwidth_attr);
    }

    const ST_StrokeArrowWidth& stroke_element::get_endarrowwidth_attr() const
    {    
    if (m_endarrowwidth_attr)
    {
        return *m_endarrowwidth_attr;
    }
    return ST_StrokeArrowWidth::default_instance();
    }

    bool stroke_element::has_endarrowlength_attr() const
    {    
    return m_has_endarrowlength_attr;
    }

    void stroke_element::set_endarrowlength_attr(const ST_StrokeArrowLength& _endarrowlength_attr)
    {    
    m_has_endarrowlength_attr = true;
    m_endarrowlength_attr = new ST_StrokeArrowLength(_endarrowlength_attr);
    }

    const ST_StrokeArrowLength& stroke_element::get_endarrowlength_attr() const
    {    
    if (m_endarrowlength_attr)
    {
        return *m_endarrowlength_attr;
    }
    return ST_StrokeArrowLength::default_instance();
    }

    bool stroke_element::has_href_attr() const
    {    
    return m_has_href_attr;
    }

    void stroke_element::set_href_attr(const XSD::string_& _href_attr)
    {    
    m_has_href_attr = true;
    m_href_attr = _href_attr;
    }

    const XSD::string_& stroke_element::get_href_attr() const
    {    
    return m_href_attr;
    }

    bool stroke_element::has_althref_attr() const
    {    
    return m_has_althref_attr;
    }

    void stroke_element::set_althref_attr(const XSD::string_& _althref_attr)
    {    
    m_has_althref_attr = true;
    m_althref_attr = _althref_attr;
    }

    const XSD::string_& stroke_element::get_althref_attr() const
    {    
    return m_althref_attr;
    }

    bool stroke_element::has_title_attr() const
    {    
    return m_has_title_attr;
    }

    void stroke_element::set_title_attr(const XSD::string_& _title_attr)
    {    
    m_has_title_attr = true;
    m_title_attr = _title_attr;
    }

    const XSD::string_& stroke_element::get_title_attr() const
    {    
    return m_title_attr;
    }

    bool stroke_element::has_s_forcedash_attr() const
    {    
    return m_has_s_forcedash_attr;
    }

    void stroke_element::set_s_forcedash_attr(const ns_s::ST_TrueFalse& _s_forcedash_attr)
    {    
    m_has_s_forcedash_attr = true;
    m_s_forcedash_attr = new ns_s::ST_TrueFalse(_s_forcedash_attr);
    }

    const ns_s::ST_TrueFalse& stroke_element::get_s_forcedash_attr() const
    {    
    if (m_s_forcedash_attr)
    {
        return *m_s_forcedash_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
    }

    bool stroke_element::has_r_id_attr() const
    {    
    return m_has_r_id_attr;
    }

    void stroke_element::set_r_id_attr(const ns_r::ST_RelationshipId& _r_id_attr)
    {    
    m_has_r_id_attr = true;
    m_r_id_attr = new ns_r::ST_RelationshipId(_r_id_attr);
    }

    const ns_r::ST_RelationshipId& stroke_element::get_r_id_attr() const
    {    
    if (m_r_id_attr)
    {
        return *m_r_id_attr;
    }
    return ns_r::ST_RelationshipId::default_instance();
    }

    bool stroke_element::has_s_insetpen_attr() const
    {    
    return m_has_s_insetpen_attr;
    }

    void stroke_element::set_s_insetpen_attr(const ns_s::ST_TrueFalse& _s_insetpen_attr)
    {    
    m_has_s_insetpen_attr = true;
    m_s_insetpen_attr = new ns_s::ST_TrueFalse(_s_insetpen_attr);
    }

    const ns_s::ST_TrueFalse& stroke_element::get_s_insetpen_attr() const
    {    
    if (m_s_insetpen_attr)
    {
        return *m_s_insetpen_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
    }

    bool stroke_element::has_r_relid_attr() const
    {    
    return m_has_r_relid_attr;
    }

    void stroke_element::set_r_relid_attr(const ns_r::ST_RelationshipId& _r_relid_attr)
    {    
    m_has_r_relid_attr = true;
    m_r_relid_attr = new ns_r::ST_RelationshipId(_r_relid_attr);
    }

    const ns_r::ST_RelationshipId& stroke_element::get_r_relid_attr() const
    {    
    if (m_r_relid_attr)
    {
        return *m_r_relid_attr;
    }
    return ns_r::ST_RelationshipId::default_instance();
    }


    // textpath_element
    void textpath_element::clear()
    {    
    m_has_id_attr = false;
    m_id_attr.clear();
    
    m_has_style_attr = false;
    m_style_attr.clear();
    
    m_has_s_on_attr = false;
    
    if (m_s_on_attr)
    {
        delete m_s_on_attr;
        m_s_on_attr = NULL;
    }
    
    
    m_has_s_fitshape_attr = false;
    
    if (m_s_fitshape_attr)
    {
        delete m_s_fitshape_attr;
        m_s_fitshape_attr = NULL;
    }
    
    
    m_has_s_fitpath_attr = false;
    
    if (m_s_fitpath_attr)
    {
        delete m_s_fitpath_attr;
        m_s_fitpath_attr = NULL;
    }
    
    
    m_has_s_trim_attr = false;
    
    if (m_s_trim_attr)
    {
        delete m_s_trim_attr;
        m_s_trim_attr = NULL;
    }
    
    
    m_has_s_xscale_attr = false;
    
    if (m_s_xscale_attr)
    {
        delete m_s_xscale_attr;
        m_s_xscale_attr = NULL;
    }
    
    
    m_has_string_attr = false;
    m_string_attr.clear();
    }

    void textpath_element::toXml(std::ostream& _outStream) const
    {    
    _outStream << "<v:textpath";
    
    _outStream << " " << "xmlns:v=\"urn:schemas-microsoft-com:vml\"";
    _outStream << " " << "xmlns:x=\"urn:schemas-microsoft-com:office:excel\"";
    _outStream << " " << "xmlns:w=\"http://schemas.openxmlformats.org/wordprocessingml/2006/main\"";
    _outStream << " " << "xmlns:s=\"http://schemas.openxmlformats.org/officeDocument/2006/sharedTypes\"";
    _outStream << " " << "xmlns:w10=\"urn:schemas-microsoft-com:office:word\"";
    _outStream << " " << "xmlns:r=\"http://schemas.openxmlformats.org/officeDocument/2006/relationships\"";
    _outStream << " " << "xmlns:o=\"urn:schemas-microsoft-com:office:office\"";
    _outStream << " " << "xmlns:pvml=\"urn:schemas-microsoft-com:office:powerpoint\"";
    
    if (m_has_id_attr)
    {
        _outStream << " " << "id" << "=\"" << m_id_attr << "\"";
    }
    
    
    if (m_has_style_attr)
    {
        _outStream << " " << "style" << "=\"" << m_style_attr << "\"";
    }
    
    
    if (m_has_s_on_attr)
    {
        m_s_on_attr->toXmlAttr("on", _outStream);
    }
    
    
    if (m_has_s_fitshape_attr)
    {
        m_s_fitshape_attr->toXmlAttr("fitshape", _outStream);
    }
    
    
    if (m_has_s_fitpath_attr)
    {
        m_s_fitpath_attr->toXmlAttr("fitpath", _outStream);
    }
    
    
    if (m_has_s_trim_attr)
    {
        m_s_trim_attr->toXmlAttr("trim", _outStream);
    }
    
    
    if (m_has_s_xscale_attr)
    {
        m_s_xscale_attr->toXmlAttr("xscale", _outStream);
    }
    
    
    if (m_has_string_attr)
    {
        _outStream << " " << "string" << "=\"" << m_string_attr << "\"";
    }
    
    _outStream << ">";
    
    _outStream << "</v:textpath>";
    }

    const textpath_element& textpath_element::default_instance()
    {    
    if (!textpath_element::default_instance_)
    {
        textpath_element::default_instance_ = new textpath_element();
    }
    return *textpath_element::default_instance_;
    }

    bool textpath_element::has_id_attr() const
    {    
    return m_has_id_attr;
    }

    void textpath_element::set_id_attr(const XSD::string_& _id_attr)
    {    
    m_has_id_attr = true;
    m_id_attr = _id_attr;
    }

    const XSD::string_& textpath_element::get_id_attr() const
    {    
    return m_id_attr;
    }

    bool textpath_element::has_style_attr() const
    {    
    return m_has_style_attr;
    }

    void textpath_element::set_style_attr(const XSD::string_& _style_attr)
    {    
    m_has_style_attr = true;
    m_style_attr = _style_attr;
    }

    const XSD::string_& textpath_element::get_style_attr() const
    {    
    return m_style_attr;
    }

    bool textpath_element::has_s_on_attr() const
    {    
    return m_has_s_on_attr;
    }

    void textpath_element::set_s_on_attr(const ns_s::ST_TrueFalse& _s_on_attr)
    {    
    m_has_s_on_attr = true;
    m_s_on_attr = new ns_s::ST_TrueFalse(_s_on_attr);
    }

    const ns_s::ST_TrueFalse& textpath_element::get_s_on_attr() const
    {    
    if (m_s_on_attr)
    {
        return *m_s_on_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
    }

    bool textpath_element::has_s_fitshape_attr() const
    {    
    return m_has_s_fitshape_attr;
    }

    void textpath_element::set_s_fitshape_attr(const ns_s::ST_TrueFalse& _s_fitshape_attr)
    {    
    m_has_s_fitshape_attr = true;
    m_s_fitshape_attr = new ns_s::ST_TrueFalse(_s_fitshape_attr);
    }

    const ns_s::ST_TrueFalse& textpath_element::get_s_fitshape_attr() const
    {    
    if (m_s_fitshape_attr)
    {
        return *m_s_fitshape_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
    }

    bool textpath_element::has_s_fitpath_attr() const
    {    
    return m_has_s_fitpath_attr;
    }

    void textpath_element::set_s_fitpath_attr(const ns_s::ST_TrueFalse& _s_fitpath_attr)
    {    
    m_has_s_fitpath_attr = true;
    m_s_fitpath_attr = new ns_s::ST_TrueFalse(_s_fitpath_attr);
    }

    const ns_s::ST_TrueFalse& textpath_element::get_s_fitpath_attr() const
    {    
    if (m_s_fitpath_attr)
    {
        return *m_s_fitpath_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
    }

    bool textpath_element::has_s_trim_attr() const
    {    
    return m_has_s_trim_attr;
    }

    void textpath_element::set_s_trim_attr(const ns_s::ST_TrueFalse& _s_trim_attr)
    {    
    m_has_s_trim_attr = true;
    m_s_trim_attr = new ns_s::ST_TrueFalse(_s_trim_attr);
    }

    const ns_s::ST_TrueFalse& textpath_element::get_s_trim_attr() const
    {    
    if (m_s_trim_attr)
    {
        return *m_s_trim_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
    }

    bool textpath_element::has_s_xscale_attr() const
    {    
    return m_has_s_xscale_attr;
    }

    void textpath_element::set_s_xscale_attr(const ns_s::ST_TrueFalse& _s_xscale_attr)
    {    
    m_has_s_xscale_attr = true;
    m_s_xscale_attr = new ns_s::ST_TrueFalse(_s_xscale_attr);
    }

    const ns_s::ST_TrueFalse& textpath_element::get_s_xscale_attr() const
    {    
    if (m_s_xscale_attr)
    {
        return *m_s_xscale_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
    }

    bool textpath_element::has_string_attr() const
    {    
    return m_has_string_attr;
    }

    void textpath_element::set_string_attr(const XSD::string_& _string_attr)
    {    
    m_has_string_attr = true;
    m_string_attr = _string_attr;
    }

    const XSD::string_& textpath_element::get_string_attr() const
    {    
    return m_string_attr;
    }


    // arc_element
    CT_Path* arc_element::add_path()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Path* pNewChild = pChildGroup->mutable_path();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Formulas* arc_element::add_formulas()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Formulas* pNewChild = pChildGroup->mutable_formulas();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Handles* arc_element::add_handles()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Handles* pNewChild = pChildGroup->mutable_handles();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Fill* arc_element::add_fill()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Fill* pNewChild = pChildGroup->mutable_fill();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Stroke* arc_element::add_stroke()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Stroke* pNewChild = pChildGroup->mutable_stroke();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Shadow* arc_element::add_shadow()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Shadow* pNewChild = pChildGroup->mutable_shadow();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Textbox* arc_element::add_textbox()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Textbox* pNewChild = pChildGroup->mutable_textbox();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_TextPath* arc_element::add_textpath()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_TextPath* pNewChild = pChildGroup->mutable_textpath();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_ImageData* arc_element::add_imagedata()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_ImageData* pNewChild = pChildGroup->mutable_imagedata();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_Skew* arc_element::add_o_skew()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_Skew* pNewChild = pChildGroup->mutable_o_skew();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_Extrusion* arc_element::add_o_extrusion()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_Extrusion* pNewChild = pChildGroup->mutable_o_extrusion();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_Callout* arc_element::add_o_callout()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_Callout* pNewChild = pChildGroup->mutable_o_callout();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_Lock* arc_element::add_o_lock()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_Lock* pNewChild = pChildGroup->mutable_o_lock();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_ClipPath* arc_element::add_o_clippath()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_ClipPath* pNewChild = pChildGroup->mutable_o_clippath();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_SignatureLine* arc_element::add_o_signatureline()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_SignatureLine* pNewChild = pChildGroup->mutable_o_signatureline();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w10::CT_Wrap* arc_element::add_w10_wrap()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w10::CT_Wrap* pNewChild = pChildGroup->mutable_w10_wrap();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w10::CT_AnchorLock* arc_element::add_w10_anchorlock()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w10::CT_AnchorLock* pNewChild = pChildGroup->mutable_w10_anchorlock();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w10::CT_Border* arc_element::add_w10_bordertop()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w10::CT_Border* pNewChild = pChildGroup->mutable_w10_bordertop();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w10::CT_Border* arc_element::add_w10_borderbottom()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w10::CT_Border* pNewChild = pChildGroup->mutable_w10_borderbottom();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w10::CT_Border* arc_element::add_w10_borderleft()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w10::CT_Border* pNewChild = pChildGroup->mutable_w10_borderleft();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w10::CT_Border* arc_element::add_w10_borderright()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w10::CT_Border* pNewChild = pChildGroup->mutable_w10_borderright();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_x::CT_ClientData* arc_element::add_x_ClientData()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_x::CT_ClientData* pNewChild = pChildGroup->mutable_x_ClientData();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_pvml::CT_Rel* arc_element::add_pvml_textdata()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_pvml::CT_Rel* pNewChild = pChildGroup->mutable_pvml_textdata();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    void arc_element::clear()
    {    
    m_has_startAngle_attr = false;
    m_startAngle_attr = 0;
    
    m_has_endAngle_attr = false;
    m_endAngle_attr = 0;
    
    {
        vector<ChildGroup_1*>::iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_1.clear();
    }
    }

    void arc_element::toXml(std::ostream& _outStream) const
    {    
    _outStream << "<v:arc";
    
    _outStream << " " << "xmlns:v=\"urn:schemas-microsoft-com:vml\"";
    _outStream << " " << "xmlns:x=\"urn:schemas-microsoft-com:office:excel\"";
    _outStream << " " << "xmlns:w=\"http://schemas.openxmlformats.org/wordprocessingml/2006/main\"";
    _outStream << " " << "xmlns:s=\"http://schemas.openxmlformats.org/officeDocument/2006/sharedTypes\"";
    _outStream << " " << "xmlns:w10=\"urn:schemas-microsoft-com:office:word\"";
    _outStream << " " << "xmlns:r=\"http://schemas.openxmlformats.org/officeDocument/2006/relationships\"";
    _outStream << " " << "xmlns:o=\"urn:schemas-microsoft-com:office:office\"";
    _outStream << " " << "xmlns:pvml=\"urn:schemas-microsoft-com:office:powerpoint\"";
    
    if (m_has_startAngle_attr)
    {
        _outStream << " " << "startAngle" << "=\"" << m_startAngle_attr << "\"";
    }
    
    
    if (m_has_endAngle_attr)
    {
        _outStream << " " << "endAngle" << "=\"" << m_endAngle_attr << "\"";
    }
    
    _outStream << ">";
    
    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_path())
            {
                (*iter)->get_path().toXmlElem("v:path", "", _outStream);
            }
            else if ((*iter)->has_formulas())
            {
                (*iter)->get_formulas().toXmlElem("v:formulas", "", _outStream);
            }
            else if ((*iter)->has_handles())
            {
                (*iter)->get_handles().toXmlElem("v:handles", "", _outStream);
            }
            else if ((*iter)->has_fill())
            {
                (*iter)->get_fill().toXmlElem("v:fill", "", _outStream);
            }
            else if ((*iter)->has_stroke())
            {
                (*iter)->get_stroke().toXmlElem("v:stroke", "", _outStream);
            }
            else if ((*iter)->has_shadow())
            {
                (*iter)->get_shadow().toXmlElem("v:shadow", "", _outStream);
            }
            else if ((*iter)->has_textbox())
            {
                (*iter)->get_textbox().toXmlElem("v:textbox", "", _outStream);
            }
            else if ((*iter)->has_textpath())
            {
                (*iter)->get_textpath().toXmlElem("v:textpath", "", _outStream);
            }
            else if ((*iter)->has_imagedata())
            {
                (*iter)->get_imagedata().toXmlElem("v:imagedata", "", _outStream);
            }
            else if ((*iter)->has_o_skew())
            {
                (*iter)->get_o_skew().toXmlElem("v:skew", "", _outStream);
            }
            else if ((*iter)->has_o_extrusion())
            {
                (*iter)->get_o_extrusion().toXmlElem("v:extrusion", "", _outStream);
            }
            else if ((*iter)->has_o_callout())
            {
                (*iter)->get_o_callout().toXmlElem("v:callout", "", _outStream);
            }
            else if ((*iter)->has_o_lock())
            {
                (*iter)->get_o_lock().toXmlElem("v:lock", "", _outStream);
            }
            else if ((*iter)->has_o_clippath())
            {
                (*iter)->get_o_clippath().toXmlElem("v:clippath", "", _outStream);
            }
            else if ((*iter)->has_o_signatureline())
            {
                (*iter)->get_o_signatureline().toXmlElem("v:signatureline", "", _outStream);
            }
            else if ((*iter)->has_w10_wrap())
            {
                (*iter)->get_w10_wrap().toXmlElem("v:wrap", "", _outStream);
            }
            else if ((*iter)->has_w10_anchorlock())
            {
                (*iter)->get_w10_anchorlock().toXmlElem("v:anchorlock", "", _outStream);
            }
            else if ((*iter)->has_w10_bordertop())
            {
                (*iter)->get_w10_bordertop().toXmlElem("v:bordertop", "", _outStream);
            }
            else if ((*iter)->has_w10_borderbottom())
            {
                (*iter)->get_w10_borderbottom().toXmlElem("v:borderbottom", "", _outStream);
            }
            else if ((*iter)->has_w10_borderleft())
            {
                (*iter)->get_w10_borderleft().toXmlElem("v:borderleft", "", _outStream);
            }
            else if ((*iter)->has_w10_borderright())
            {
                (*iter)->get_w10_borderright().toXmlElem("v:borderright", "", _outStream);
            }
            else if ((*iter)->has_x_ClientData())
            {
                (*iter)->get_x_ClientData().toXmlElem("v:ClientData", "", _outStream);
            }
            else if ((*iter)->has_pvml_textdata())
            {
                (*iter)->get_pvml_textdata().toXmlElem("v:textdata", "", _outStream);
            }
        }
    }
    
    _outStream << "</v:arc>";
    }

    const arc_element& arc_element::default_instance()
    {    
    if (!arc_element::default_instance_)
    {
        arc_element::default_instance_ = new arc_element();
    }
    return *arc_element::default_instance_;
    }

    bool arc_element::has_startAngle_attr() const
    {    
    return m_has_startAngle_attr;
    }

    void arc_element::set_startAngle_attr(const XSD::decimal_& _startAngle_attr)
    {    
    m_has_startAngle_attr = true;
    m_startAngle_attr = _startAngle_attr;
    }

    const XSD::decimal_& arc_element::get_startAngle_attr() const
    {    
    return m_startAngle_attr;
    }

    bool arc_element::has_endAngle_attr() const
    {    
    return m_has_endAngle_attr;
    }

    void arc_element::set_endAngle_attr(const XSD::decimal_& _endAngle_attr)
    {    
    m_has_endAngle_attr = true;
    m_endAngle_attr = _endAngle_attr;
    }

    const XSD::decimal_& arc_element::get_endAngle_attr() const
    {    
    return m_endAngle_attr;
    }


    // curve_element
    CT_Path* curve_element::add_path()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Path* pNewChild = pChildGroup->mutable_path();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Formulas* curve_element::add_formulas()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Formulas* pNewChild = pChildGroup->mutable_formulas();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Handles* curve_element::add_handles()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Handles* pNewChild = pChildGroup->mutable_handles();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Fill* curve_element::add_fill()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Fill* pNewChild = pChildGroup->mutable_fill();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Stroke* curve_element::add_stroke()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Stroke* pNewChild = pChildGroup->mutable_stroke();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Shadow* curve_element::add_shadow()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Shadow* pNewChild = pChildGroup->mutable_shadow();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Textbox* curve_element::add_textbox()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Textbox* pNewChild = pChildGroup->mutable_textbox();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_TextPath* curve_element::add_textpath()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_TextPath* pNewChild = pChildGroup->mutable_textpath();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_ImageData* curve_element::add_imagedata()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_ImageData* pNewChild = pChildGroup->mutable_imagedata();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_Skew* curve_element::add_o_skew()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_Skew* pNewChild = pChildGroup->mutable_o_skew();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_Extrusion* curve_element::add_o_extrusion()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_Extrusion* pNewChild = pChildGroup->mutable_o_extrusion();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_Callout* curve_element::add_o_callout()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_Callout* pNewChild = pChildGroup->mutable_o_callout();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_Lock* curve_element::add_o_lock()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_Lock* pNewChild = pChildGroup->mutable_o_lock();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_ClipPath* curve_element::add_o_clippath()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_ClipPath* pNewChild = pChildGroup->mutable_o_clippath();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_SignatureLine* curve_element::add_o_signatureline()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_SignatureLine* pNewChild = pChildGroup->mutable_o_signatureline();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w10::CT_Wrap* curve_element::add_w10_wrap()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w10::CT_Wrap* pNewChild = pChildGroup->mutable_w10_wrap();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w10::CT_AnchorLock* curve_element::add_w10_anchorlock()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w10::CT_AnchorLock* pNewChild = pChildGroup->mutable_w10_anchorlock();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w10::CT_Border* curve_element::add_w10_bordertop()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w10::CT_Border* pNewChild = pChildGroup->mutable_w10_bordertop();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w10::CT_Border* curve_element::add_w10_borderbottom()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w10::CT_Border* pNewChild = pChildGroup->mutable_w10_borderbottom();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w10::CT_Border* curve_element::add_w10_borderleft()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w10::CT_Border* pNewChild = pChildGroup->mutable_w10_borderleft();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w10::CT_Border* curve_element::add_w10_borderright()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w10::CT_Border* pNewChild = pChildGroup->mutable_w10_borderright();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_x::CT_ClientData* curve_element::add_x_ClientData()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_x::CT_ClientData* pNewChild = pChildGroup->mutable_x_ClientData();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_pvml::CT_Rel* curve_element::add_pvml_textdata()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_pvml::CT_Rel* pNewChild = pChildGroup->mutable_pvml_textdata();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    void curve_element::clear()
    {    
    m_has_from_attr = false;
    m_from_attr.clear();
    
    m_has_control1_attr = false;
    m_control1_attr.clear();
    
    m_has_control2_attr = false;
    m_control2_attr.clear();
    
    m_has_to_attr = false;
    m_to_attr.clear();
    
    {
        vector<ChildGroup_1*>::iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_1.clear();
    }
    }

    void curve_element::toXml(std::ostream& _outStream) const
    {    
    _outStream << "<v:curve";
    
    _outStream << " " << "xmlns:v=\"urn:schemas-microsoft-com:vml\"";
    _outStream << " " << "xmlns:x=\"urn:schemas-microsoft-com:office:excel\"";
    _outStream << " " << "xmlns:w=\"http://schemas.openxmlformats.org/wordprocessingml/2006/main\"";
    _outStream << " " << "xmlns:s=\"http://schemas.openxmlformats.org/officeDocument/2006/sharedTypes\"";
    _outStream << " " << "xmlns:w10=\"urn:schemas-microsoft-com:office:word\"";
    _outStream << " " << "xmlns:r=\"http://schemas.openxmlformats.org/officeDocument/2006/relationships\"";
    _outStream << " " << "xmlns:o=\"urn:schemas-microsoft-com:office:office\"";
    _outStream << " " << "xmlns:pvml=\"urn:schemas-microsoft-com:office:powerpoint\"";
    
    if (m_has_from_attr)
    {
        _outStream << " " << "from" << "=\"" << m_from_attr << "\"";
    }
    
    
    if (m_has_control1_attr)
    {
        _outStream << " " << "control1" << "=\"" << m_control1_attr << "\"";
    }
    
    
    if (m_has_control2_attr)
    {
        _outStream << " " << "control2" << "=\"" << m_control2_attr << "\"";
    }
    
    
    if (m_has_to_attr)
    {
        _outStream << " " << "to" << "=\"" << m_to_attr << "\"";
    }
    
    _outStream << ">";
    
    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_path())
            {
                (*iter)->get_path().toXmlElem("v:path", "", _outStream);
            }
            else if ((*iter)->has_formulas())
            {
                (*iter)->get_formulas().toXmlElem("v:formulas", "", _outStream);
            }
            else if ((*iter)->has_handles())
            {
                (*iter)->get_handles().toXmlElem("v:handles", "", _outStream);
            }
            else if ((*iter)->has_fill())
            {
                (*iter)->get_fill().toXmlElem("v:fill", "", _outStream);
            }
            else if ((*iter)->has_stroke())
            {
                (*iter)->get_stroke().toXmlElem("v:stroke", "", _outStream);
            }
            else if ((*iter)->has_shadow())
            {
                (*iter)->get_shadow().toXmlElem("v:shadow", "", _outStream);
            }
            else if ((*iter)->has_textbox())
            {
                (*iter)->get_textbox().toXmlElem("v:textbox", "", _outStream);
            }
            else if ((*iter)->has_textpath())
            {
                (*iter)->get_textpath().toXmlElem("v:textpath", "", _outStream);
            }
            else if ((*iter)->has_imagedata())
            {
                (*iter)->get_imagedata().toXmlElem("v:imagedata", "", _outStream);
            }
            else if ((*iter)->has_o_skew())
            {
                (*iter)->get_o_skew().toXmlElem("v:skew", "", _outStream);
            }
            else if ((*iter)->has_o_extrusion())
            {
                (*iter)->get_o_extrusion().toXmlElem("v:extrusion", "", _outStream);
            }
            else if ((*iter)->has_o_callout())
            {
                (*iter)->get_o_callout().toXmlElem("v:callout", "", _outStream);
            }
            else if ((*iter)->has_o_lock())
            {
                (*iter)->get_o_lock().toXmlElem("v:lock", "", _outStream);
            }
            else if ((*iter)->has_o_clippath())
            {
                (*iter)->get_o_clippath().toXmlElem("v:clippath", "", _outStream);
            }
            else if ((*iter)->has_o_signatureline())
            {
                (*iter)->get_o_signatureline().toXmlElem("v:signatureline", "", _outStream);
            }
            else if ((*iter)->has_w10_wrap())
            {
                (*iter)->get_w10_wrap().toXmlElem("v:wrap", "", _outStream);
            }
            else if ((*iter)->has_w10_anchorlock())
            {
                (*iter)->get_w10_anchorlock().toXmlElem("v:anchorlock", "", _outStream);
            }
            else if ((*iter)->has_w10_bordertop())
            {
                (*iter)->get_w10_bordertop().toXmlElem("v:bordertop", "", _outStream);
            }
            else if ((*iter)->has_w10_borderbottom())
            {
                (*iter)->get_w10_borderbottom().toXmlElem("v:borderbottom", "", _outStream);
            }
            else if ((*iter)->has_w10_borderleft())
            {
                (*iter)->get_w10_borderleft().toXmlElem("v:borderleft", "", _outStream);
            }
            else if ((*iter)->has_w10_borderright())
            {
                (*iter)->get_w10_borderright().toXmlElem("v:borderright", "", _outStream);
            }
            else if ((*iter)->has_x_ClientData())
            {
                (*iter)->get_x_ClientData().toXmlElem("v:ClientData", "", _outStream);
            }
            else if ((*iter)->has_pvml_textdata())
            {
                (*iter)->get_pvml_textdata().toXmlElem("v:textdata", "", _outStream);
            }
        }
    }
    
    _outStream << "</v:curve>";
    }

    const curve_element& curve_element::default_instance()
    {    
    if (!curve_element::default_instance_)
    {
        curve_element::default_instance_ = new curve_element();
    }
    return *curve_element::default_instance_;
    }

    bool curve_element::has_from_attr() const
    {    
    return m_has_from_attr;
    }

    void curve_element::set_from_attr(const XSD::string_& _from_attr)
    {    
    m_has_from_attr = true;
    m_from_attr = _from_attr;
    }

    const XSD::string_& curve_element::get_from_attr() const
    {    
    return m_from_attr;
    }

    bool curve_element::has_control1_attr() const
    {    
    return m_has_control1_attr;
    }

    void curve_element::set_control1_attr(const XSD::string_& _control1_attr)
    {    
    m_has_control1_attr = true;
    m_control1_attr = _control1_attr;
    }

    const XSD::string_& curve_element::get_control1_attr() const
    {    
    return m_control1_attr;
    }

    bool curve_element::has_control2_attr() const
    {    
    return m_has_control2_attr;
    }

    void curve_element::set_control2_attr(const XSD::string_& _control2_attr)
    {    
    m_has_control2_attr = true;
    m_control2_attr = _control2_attr;
    }

    const XSD::string_& curve_element::get_control2_attr() const
    {    
    return m_control2_attr;
    }

    bool curve_element::has_to_attr() const
    {    
    return m_has_to_attr;
    }

    void curve_element::set_to_attr(const XSD::string_& _to_attr)
    {    
    m_has_to_attr = true;
    m_to_attr = _to_attr;
    }

    const XSD::string_& curve_element::get_to_attr() const
    {    
    return m_to_attr;
    }


    // image_element
    CT_Path* image_element::add_path()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Path* pNewChild = pChildGroup->mutable_path();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Formulas* image_element::add_formulas()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Formulas* pNewChild = pChildGroup->mutable_formulas();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Handles* image_element::add_handles()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Handles* pNewChild = pChildGroup->mutable_handles();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Fill* image_element::add_fill()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Fill* pNewChild = pChildGroup->mutable_fill();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Stroke* image_element::add_stroke()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Stroke* pNewChild = pChildGroup->mutable_stroke();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Shadow* image_element::add_shadow()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Shadow* pNewChild = pChildGroup->mutable_shadow();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Textbox* image_element::add_textbox()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Textbox* pNewChild = pChildGroup->mutable_textbox();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_TextPath* image_element::add_textpath()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_TextPath* pNewChild = pChildGroup->mutable_textpath();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_ImageData* image_element::add_imagedata()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_ImageData* pNewChild = pChildGroup->mutable_imagedata();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_Skew* image_element::add_o_skew()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_Skew* pNewChild = pChildGroup->mutable_o_skew();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_Extrusion* image_element::add_o_extrusion()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_Extrusion* pNewChild = pChildGroup->mutable_o_extrusion();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_Callout* image_element::add_o_callout()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_Callout* pNewChild = pChildGroup->mutable_o_callout();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_Lock* image_element::add_o_lock()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_Lock* pNewChild = pChildGroup->mutable_o_lock();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_ClipPath* image_element::add_o_clippath()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_ClipPath* pNewChild = pChildGroup->mutable_o_clippath();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_SignatureLine* image_element::add_o_signatureline()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_SignatureLine* pNewChild = pChildGroup->mutable_o_signatureline();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w10::CT_Wrap* image_element::add_w10_wrap()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w10::CT_Wrap* pNewChild = pChildGroup->mutable_w10_wrap();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w10::CT_AnchorLock* image_element::add_w10_anchorlock()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w10::CT_AnchorLock* pNewChild = pChildGroup->mutable_w10_anchorlock();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w10::CT_Border* image_element::add_w10_bordertop()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w10::CT_Border* pNewChild = pChildGroup->mutable_w10_bordertop();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w10::CT_Border* image_element::add_w10_borderbottom()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w10::CT_Border* pNewChild = pChildGroup->mutable_w10_borderbottom();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w10::CT_Border* image_element::add_w10_borderleft()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w10::CT_Border* pNewChild = pChildGroup->mutable_w10_borderleft();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w10::CT_Border* image_element::add_w10_borderright()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w10::CT_Border* pNewChild = pChildGroup->mutable_w10_borderright();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_x::CT_ClientData* image_element::add_x_ClientData()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_x::CT_ClientData* pNewChild = pChildGroup->mutable_x_ClientData();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_pvml::CT_Rel* image_element::add_pvml_textdata()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_pvml::CT_Rel* pNewChild = pChildGroup->mutable_pvml_textdata();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    void image_element::clear()
    {    
    m_has_src_attr = false;
    m_src_attr.clear();
    
    m_has_cropleft_attr = false;
    m_cropleft_attr.clear();
    
    m_has_croptop_attr = false;
    m_croptop_attr.clear();
    
    m_has_cropright_attr = false;
    m_cropright_attr.clear();
    
    m_has_cropbottom_attr = false;
    m_cropbottom_attr.clear();
    
    m_has_gain_attr = false;
    m_gain_attr.clear();
    
    m_has_blacklevel_attr = false;
    m_blacklevel_attr.clear();
    
    m_has_gamma_attr = false;
    m_gamma_attr.clear();
    
    m_has_s_grayscale_attr = false;
    
    if (m_s_grayscale_attr)
    {
        delete m_s_grayscale_attr;
        m_s_grayscale_attr = NULL;
    }
    
    
    m_has_s_bilevel_attr = false;
    
    if (m_s_bilevel_attr)
    {
        delete m_s_bilevel_attr;
        m_s_bilevel_attr = NULL;
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

    void image_element::toXml(std::ostream& _outStream) const
    {    
    _outStream << "<v:image";
    
    _outStream << " " << "xmlns:v=\"urn:schemas-microsoft-com:vml\"";
    _outStream << " " << "xmlns:x=\"urn:schemas-microsoft-com:office:excel\"";
    _outStream << " " << "xmlns:w=\"http://schemas.openxmlformats.org/wordprocessingml/2006/main\"";
    _outStream << " " << "xmlns:s=\"http://schemas.openxmlformats.org/officeDocument/2006/sharedTypes\"";
    _outStream << " " << "xmlns:w10=\"urn:schemas-microsoft-com:office:word\"";
    _outStream << " " << "xmlns:r=\"http://schemas.openxmlformats.org/officeDocument/2006/relationships\"";
    _outStream << " " << "xmlns:o=\"urn:schemas-microsoft-com:office:office\"";
    _outStream << " " << "xmlns:pvml=\"urn:schemas-microsoft-com:office:powerpoint\"";
    
    if (m_has_src_attr)
    {
        _outStream << " " << "src" << "=\"" << m_src_attr << "\"";
    }
    
    
    if (m_has_cropleft_attr)
    {
        _outStream << " " << "cropleft" << "=\"" << m_cropleft_attr << "\"";
    }
    
    
    if (m_has_croptop_attr)
    {
        _outStream << " " << "croptop" << "=\"" << m_croptop_attr << "\"";
    }
    
    
    if (m_has_cropright_attr)
    {
        _outStream << " " << "cropright" << "=\"" << m_cropright_attr << "\"";
    }
    
    
    if (m_has_cropbottom_attr)
    {
        _outStream << " " << "cropbottom" << "=\"" << m_cropbottom_attr << "\"";
    }
    
    
    if (m_has_gain_attr)
    {
        _outStream << " " << "gain" << "=\"" << m_gain_attr << "\"";
    }
    
    
    if (m_has_blacklevel_attr)
    {
        _outStream << " " << "blacklevel" << "=\"" << m_blacklevel_attr << "\"";
    }
    
    
    if (m_has_gamma_attr)
    {
        _outStream << " " << "gamma" << "=\"" << m_gamma_attr << "\"";
    }
    
    
    if (m_has_s_grayscale_attr)
    {
        m_s_grayscale_attr->toXmlAttr("grayscale", _outStream);
    }
    
    
    if (m_has_s_bilevel_attr)
    {
        m_s_bilevel_attr->toXmlAttr("bilevel", _outStream);
    }
    
    _outStream << ">";
    
    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_path())
            {
                (*iter)->get_path().toXmlElem("v:path", "", _outStream);
            }
            else if ((*iter)->has_formulas())
            {
                (*iter)->get_formulas().toXmlElem("v:formulas", "", _outStream);
            }
            else if ((*iter)->has_handles())
            {
                (*iter)->get_handles().toXmlElem("v:handles", "", _outStream);
            }
            else if ((*iter)->has_fill())
            {
                (*iter)->get_fill().toXmlElem("v:fill", "", _outStream);
            }
            else if ((*iter)->has_stroke())
            {
                (*iter)->get_stroke().toXmlElem("v:stroke", "", _outStream);
            }
            else if ((*iter)->has_shadow())
            {
                (*iter)->get_shadow().toXmlElem("v:shadow", "", _outStream);
            }
            else if ((*iter)->has_textbox())
            {
                (*iter)->get_textbox().toXmlElem("v:textbox", "", _outStream);
            }
            else if ((*iter)->has_textpath())
            {
                (*iter)->get_textpath().toXmlElem("v:textpath", "", _outStream);
            }
            else if ((*iter)->has_imagedata())
            {
                (*iter)->get_imagedata().toXmlElem("v:imagedata", "", _outStream);
            }
            else if ((*iter)->has_o_skew())
            {
                (*iter)->get_o_skew().toXmlElem("v:skew", "", _outStream);
            }
            else if ((*iter)->has_o_extrusion())
            {
                (*iter)->get_o_extrusion().toXmlElem("v:extrusion", "", _outStream);
            }
            else if ((*iter)->has_o_callout())
            {
                (*iter)->get_o_callout().toXmlElem("v:callout", "", _outStream);
            }
            else if ((*iter)->has_o_lock())
            {
                (*iter)->get_o_lock().toXmlElem("v:lock", "", _outStream);
            }
            else if ((*iter)->has_o_clippath())
            {
                (*iter)->get_o_clippath().toXmlElem("v:clippath", "", _outStream);
            }
            else if ((*iter)->has_o_signatureline())
            {
                (*iter)->get_o_signatureline().toXmlElem("v:signatureline", "", _outStream);
            }
            else if ((*iter)->has_w10_wrap())
            {
                (*iter)->get_w10_wrap().toXmlElem("v:wrap", "", _outStream);
            }
            else if ((*iter)->has_w10_anchorlock())
            {
                (*iter)->get_w10_anchorlock().toXmlElem("v:anchorlock", "", _outStream);
            }
            else if ((*iter)->has_w10_bordertop())
            {
                (*iter)->get_w10_bordertop().toXmlElem("v:bordertop", "", _outStream);
            }
            else if ((*iter)->has_w10_borderbottom())
            {
                (*iter)->get_w10_borderbottom().toXmlElem("v:borderbottom", "", _outStream);
            }
            else if ((*iter)->has_w10_borderleft())
            {
                (*iter)->get_w10_borderleft().toXmlElem("v:borderleft", "", _outStream);
            }
            else if ((*iter)->has_w10_borderright())
            {
                (*iter)->get_w10_borderright().toXmlElem("v:borderright", "", _outStream);
            }
            else if ((*iter)->has_x_ClientData())
            {
                (*iter)->get_x_ClientData().toXmlElem("v:ClientData", "", _outStream);
            }
            else if ((*iter)->has_pvml_textdata())
            {
                (*iter)->get_pvml_textdata().toXmlElem("v:textdata", "", _outStream);
            }
        }
    }
    
    _outStream << "</v:image>";
    }

    const image_element& image_element::default_instance()
    {    
    if (!image_element::default_instance_)
    {
        image_element::default_instance_ = new image_element();
    }
    return *image_element::default_instance_;
    }

    bool image_element::has_src_attr() const
    {    
    return m_has_src_attr;
    }

    void image_element::set_src_attr(const XSD::string_& _src_attr)
    {    
    m_has_src_attr = true;
    m_src_attr = _src_attr;
    }

    const XSD::string_& image_element::get_src_attr() const
    {    
    return m_src_attr;
    }

    bool image_element::has_cropleft_attr() const
    {    
    return m_has_cropleft_attr;
    }

    void image_element::set_cropleft_attr(const XSD::string_& _cropleft_attr)
    {    
    m_has_cropleft_attr = true;
    m_cropleft_attr = _cropleft_attr;
    }

    const XSD::string_& image_element::get_cropleft_attr() const
    {    
    return m_cropleft_attr;
    }

    bool image_element::has_croptop_attr() const
    {    
    return m_has_croptop_attr;
    }

    void image_element::set_croptop_attr(const XSD::string_& _croptop_attr)
    {    
    m_has_croptop_attr = true;
    m_croptop_attr = _croptop_attr;
    }

    const XSD::string_& image_element::get_croptop_attr() const
    {    
    return m_croptop_attr;
    }

    bool image_element::has_cropright_attr() const
    {    
    return m_has_cropright_attr;
    }

    void image_element::set_cropright_attr(const XSD::string_& _cropright_attr)
    {    
    m_has_cropright_attr = true;
    m_cropright_attr = _cropright_attr;
    }

    const XSD::string_& image_element::get_cropright_attr() const
    {    
    return m_cropright_attr;
    }

    bool image_element::has_cropbottom_attr() const
    {    
    return m_has_cropbottom_attr;
    }

    void image_element::set_cropbottom_attr(const XSD::string_& _cropbottom_attr)
    {    
    m_has_cropbottom_attr = true;
    m_cropbottom_attr = _cropbottom_attr;
    }

    const XSD::string_& image_element::get_cropbottom_attr() const
    {    
    return m_cropbottom_attr;
    }

    bool image_element::has_gain_attr() const
    {    
    return m_has_gain_attr;
    }

    void image_element::set_gain_attr(const XSD::string_& _gain_attr)
    {    
    m_has_gain_attr = true;
    m_gain_attr = _gain_attr;
    }

    const XSD::string_& image_element::get_gain_attr() const
    {    
    return m_gain_attr;
    }

    bool image_element::has_blacklevel_attr() const
    {    
    return m_has_blacklevel_attr;
    }

    void image_element::set_blacklevel_attr(const XSD::string_& _blacklevel_attr)
    {    
    m_has_blacklevel_attr = true;
    m_blacklevel_attr = _blacklevel_attr;
    }

    const XSD::string_& image_element::get_blacklevel_attr() const
    {    
    return m_blacklevel_attr;
    }

    bool image_element::has_gamma_attr() const
    {    
    return m_has_gamma_attr;
    }

    void image_element::set_gamma_attr(const XSD::string_& _gamma_attr)
    {    
    m_has_gamma_attr = true;
    m_gamma_attr = _gamma_attr;
    }

    const XSD::string_& image_element::get_gamma_attr() const
    {    
    return m_gamma_attr;
    }

    bool image_element::has_s_grayscale_attr() const
    {    
    return m_has_s_grayscale_attr;
    }

    void image_element::set_s_grayscale_attr(const ns_s::ST_TrueFalse& _s_grayscale_attr)
    {    
    m_has_s_grayscale_attr = true;
    m_s_grayscale_attr = new ns_s::ST_TrueFalse(_s_grayscale_attr);
    }

    const ns_s::ST_TrueFalse& image_element::get_s_grayscale_attr() const
    {    
    if (m_s_grayscale_attr)
    {
        return *m_s_grayscale_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
    }

    bool image_element::has_s_bilevel_attr() const
    {    
    return m_has_s_bilevel_attr;
    }

    void image_element::set_s_bilevel_attr(const ns_s::ST_TrueFalse& _s_bilevel_attr)
    {    
    m_has_s_bilevel_attr = true;
    m_s_bilevel_attr = new ns_s::ST_TrueFalse(_s_bilevel_attr);
    }

    const ns_s::ST_TrueFalse& image_element::get_s_bilevel_attr() const
    {    
    if (m_s_bilevel_attr)
    {
        return *m_s_bilevel_attr;
    }
    return ns_s::ST_TrueFalse::default_instance();
    }


    // line_element
    CT_Path* line_element::add_path()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Path* pNewChild = pChildGroup->mutable_path();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Formulas* line_element::add_formulas()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Formulas* pNewChild = pChildGroup->mutable_formulas();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Handles* line_element::add_handles()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Handles* pNewChild = pChildGroup->mutable_handles();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Fill* line_element::add_fill()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Fill* pNewChild = pChildGroup->mutable_fill();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Stroke* line_element::add_stroke()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Stroke* pNewChild = pChildGroup->mutable_stroke();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Shadow* line_element::add_shadow()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Shadow* pNewChild = pChildGroup->mutable_shadow();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Textbox* line_element::add_textbox()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Textbox* pNewChild = pChildGroup->mutable_textbox();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_TextPath* line_element::add_textpath()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_TextPath* pNewChild = pChildGroup->mutable_textpath();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_ImageData* line_element::add_imagedata()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_ImageData* pNewChild = pChildGroup->mutable_imagedata();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_Skew* line_element::add_o_skew()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_Skew* pNewChild = pChildGroup->mutable_o_skew();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_Extrusion* line_element::add_o_extrusion()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_Extrusion* pNewChild = pChildGroup->mutable_o_extrusion();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_Callout* line_element::add_o_callout()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_Callout* pNewChild = pChildGroup->mutable_o_callout();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_Lock* line_element::add_o_lock()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_Lock* pNewChild = pChildGroup->mutable_o_lock();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_ClipPath* line_element::add_o_clippath()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_ClipPath* pNewChild = pChildGroup->mutable_o_clippath();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_SignatureLine* line_element::add_o_signatureline()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_SignatureLine* pNewChild = pChildGroup->mutable_o_signatureline();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w10::CT_Wrap* line_element::add_w10_wrap()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w10::CT_Wrap* pNewChild = pChildGroup->mutable_w10_wrap();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w10::CT_AnchorLock* line_element::add_w10_anchorlock()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w10::CT_AnchorLock* pNewChild = pChildGroup->mutable_w10_anchorlock();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w10::CT_Border* line_element::add_w10_bordertop()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w10::CT_Border* pNewChild = pChildGroup->mutable_w10_bordertop();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w10::CT_Border* line_element::add_w10_borderbottom()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w10::CT_Border* pNewChild = pChildGroup->mutable_w10_borderbottom();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w10::CT_Border* line_element::add_w10_borderleft()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w10::CT_Border* pNewChild = pChildGroup->mutable_w10_borderleft();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w10::CT_Border* line_element::add_w10_borderright()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w10::CT_Border* pNewChild = pChildGroup->mutable_w10_borderright();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_x::CT_ClientData* line_element::add_x_ClientData()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_x::CT_ClientData* pNewChild = pChildGroup->mutable_x_ClientData();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_pvml::CT_Rel* line_element::add_pvml_textdata()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_pvml::CT_Rel* pNewChild = pChildGroup->mutable_pvml_textdata();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    void line_element::clear()
    {    
    m_has_from_attr = false;
    m_from_attr.clear();
    
    m_has_to_attr = false;
    m_to_attr.clear();
    
    {
        vector<ChildGroup_1*>::iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_1.clear();
    }
    }

    void line_element::toXml(std::ostream& _outStream) const
    {    
    _outStream << "<v:line";
    
    _outStream << " " << "xmlns:v=\"urn:schemas-microsoft-com:vml\"";
    _outStream << " " << "xmlns:x=\"urn:schemas-microsoft-com:office:excel\"";
    _outStream << " " << "xmlns:w=\"http://schemas.openxmlformats.org/wordprocessingml/2006/main\"";
    _outStream << " " << "xmlns:s=\"http://schemas.openxmlformats.org/officeDocument/2006/sharedTypes\"";
    _outStream << " " << "xmlns:w10=\"urn:schemas-microsoft-com:office:word\"";
    _outStream << " " << "xmlns:r=\"http://schemas.openxmlformats.org/officeDocument/2006/relationships\"";
    _outStream << " " << "xmlns:o=\"urn:schemas-microsoft-com:office:office\"";
    _outStream << " " << "xmlns:pvml=\"urn:schemas-microsoft-com:office:powerpoint\"";
    
    if (m_has_from_attr)
    {
        _outStream << " " << "from" << "=\"" << m_from_attr << "\"";
    }
    
    
    if (m_has_to_attr)
    {
        _outStream << " " << "to" << "=\"" << m_to_attr << "\"";
    }
    
    _outStream << ">";
    
    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_path())
            {
                (*iter)->get_path().toXmlElem("v:path", "", _outStream);
            }
            else if ((*iter)->has_formulas())
            {
                (*iter)->get_formulas().toXmlElem("v:formulas", "", _outStream);
            }
            else if ((*iter)->has_handles())
            {
                (*iter)->get_handles().toXmlElem("v:handles", "", _outStream);
            }
            else if ((*iter)->has_fill())
            {
                (*iter)->get_fill().toXmlElem("v:fill", "", _outStream);
            }
            else if ((*iter)->has_stroke())
            {
                (*iter)->get_stroke().toXmlElem("v:stroke", "", _outStream);
            }
            else if ((*iter)->has_shadow())
            {
                (*iter)->get_shadow().toXmlElem("v:shadow", "", _outStream);
            }
            else if ((*iter)->has_textbox())
            {
                (*iter)->get_textbox().toXmlElem("v:textbox", "", _outStream);
            }
            else if ((*iter)->has_textpath())
            {
                (*iter)->get_textpath().toXmlElem("v:textpath", "", _outStream);
            }
            else if ((*iter)->has_imagedata())
            {
                (*iter)->get_imagedata().toXmlElem("v:imagedata", "", _outStream);
            }
            else if ((*iter)->has_o_skew())
            {
                (*iter)->get_o_skew().toXmlElem("v:skew", "", _outStream);
            }
            else if ((*iter)->has_o_extrusion())
            {
                (*iter)->get_o_extrusion().toXmlElem("v:extrusion", "", _outStream);
            }
            else if ((*iter)->has_o_callout())
            {
                (*iter)->get_o_callout().toXmlElem("v:callout", "", _outStream);
            }
            else if ((*iter)->has_o_lock())
            {
                (*iter)->get_o_lock().toXmlElem("v:lock", "", _outStream);
            }
            else if ((*iter)->has_o_clippath())
            {
                (*iter)->get_o_clippath().toXmlElem("v:clippath", "", _outStream);
            }
            else if ((*iter)->has_o_signatureline())
            {
                (*iter)->get_o_signatureline().toXmlElem("v:signatureline", "", _outStream);
            }
            else if ((*iter)->has_w10_wrap())
            {
                (*iter)->get_w10_wrap().toXmlElem("v:wrap", "", _outStream);
            }
            else if ((*iter)->has_w10_anchorlock())
            {
                (*iter)->get_w10_anchorlock().toXmlElem("v:anchorlock", "", _outStream);
            }
            else if ((*iter)->has_w10_bordertop())
            {
                (*iter)->get_w10_bordertop().toXmlElem("v:bordertop", "", _outStream);
            }
            else if ((*iter)->has_w10_borderbottom())
            {
                (*iter)->get_w10_borderbottom().toXmlElem("v:borderbottom", "", _outStream);
            }
            else if ((*iter)->has_w10_borderleft())
            {
                (*iter)->get_w10_borderleft().toXmlElem("v:borderleft", "", _outStream);
            }
            else if ((*iter)->has_w10_borderright())
            {
                (*iter)->get_w10_borderright().toXmlElem("v:borderright", "", _outStream);
            }
            else if ((*iter)->has_x_ClientData())
            {
                (*iter)->get_x_ClientData().toXmlElem("v:ClientData", "", _outStream);
            }
            else if ((*iter)->has_pvml_textdata())
            {
                (*iter)->get_pvml_textdata().toXmlElem("v:textdata", "", _outStream);
            }
        }
    }
    
    _outStream << "</v:line>";
    }

    const line_element& line_element::default_instance()
    {    
    if (!line_element::default_instance_)
    {
        line_element::default_instance_ = new line_element();
    }
    return *line_element::default_instance_;
    }

    bool line_element::has_from_attr() const
    {    
    return m_has_from_attr;
    }

    void line_element::set_from_attr(const XSD::string_& _from_attr)
    {    
    m_has_from_attr = true;
    m_from_attr = _from_attr;
    }

    const XSD::string_& line_element::get_from_attr() const
    {    
    return m_from_attr;
    }

    bool line_element::has_to_attr() const
    {    
    return m_has_to_attr;
    }

    void line_element::set_to_attr(const XSD::string_& _to_attr)
    {    
    m_has_to_attr = true;
    m_to_attr = _to_attr;
    }

    const XSD::string_& line_element::get_to_attr() const
    {    
    return m_to_attr;
    }


    // oval_element
    CT_Path* oval_element::add_path()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Path* pNewChild = pChildGroup->mutable_path();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Formulas* oval_element::add_formulas()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Formulas* pNewChild = pChildGroup->mutable_formulas();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Handles* oval_element::add_handles()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Handles* pNewChild = pChildGroup->mutable_handles();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Fill* oval_element::add_fill()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Fill* pNewChild = pChildGroup->mutable_fill();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Stroke* oval_element::add_stroke()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Stroke* pNewChild = pChildGroup->mutable_stroke();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Shadow* oval_element::add_shadow()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Shadow* pNewChild = pChildGroup->mutable_shadow();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Textbox* oval_element::add_textbox()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Textbox* pNewChild = pChildGroup->mutable_textbox();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_TextPath* oval_element::add_textpath()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_TextPath* pNewChild = pChildGroup->mutable_textpath();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_ImageData* oval_element::add_imagedata()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_ImageData* pNewChild = pChildGroup->mutable_imagedata();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_Skew* oval_element::add_o_skew()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_Skew* pNewChild = pChildGroup->mutable_o_skew();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_Extrusion* oval_element::add_o_extrusion()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_Extrusion* pNewChild = pChildGroup->mutable_o_extrusion();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_Callout* oval_element::add_o_callout()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_Callout* pNewChild = pChildGroup->mutable_o_callout();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_Lock* oval_element::add_o_lock()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_Lock* pNewChild = pChildGroup->mutable_o_lock();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_ClipPath* oval_element::add_o_clippath()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_ClipPath* pNewChild = pChildGroup->mutable_o_clippath();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_SignatureLine* oval_element::add_o_signatureline()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_SignatureLine* pNewChild = pChildGroup->mutable_o_signatureline();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w10::CT_Wrap* oval_element::add_w10_wrap()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w10::CT_Wrap* pNewChild = pChildGroup->mutable_w10_wrap();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w10::CT_AnchorLock* oval_element::add_w10_anchorlock()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w10::CT_AnchorLock* pNewChild = pChildGroup->mutable_w10_anchorlock();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w10::CT_Border* oval_element::add_w10_bordertop()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w10::CT_Border* pNewChild = pChildGroup->mutable_w10_bordertop();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w10::CT_Border* oval_element::add_w10_borderbottom()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w10::CT_Border* pNewChild = pChildGroup->mutable_w10_borderbottom();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w10::CT_Border* oval_element::add_w10_borderleft()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w10::CT_Border* pNewChild = pChildGroup->mutable_w10_borderleft();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w10::CT_Border* oval_element::add_w10_borderright()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w10::CT_Border* pNewChild = pChildGroup->mutable_w10_borderright();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_x::CT_ClientData* oval_element::add_x_ClientData()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_x::CT_ClientData* pNewChild = pChildGroup->mutable_x_ClientData();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_pvml::CT_Rel* oval_element::add_pvml_textdata()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_pvml::CT_Rel* pNewChild = pChildGroup->mutable_pvml_textdata();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    void oval_element::clear()
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

    void oval_element::toXml(std::ostream& _outStream) const
    {    
    _outStream << "<v:oval";
    
    _outStream << " " << "xmlns:v=\"urn:schemas-microsoft-com:vml\"";
    _outStream << " " << "xmlns:x=\"urn:schemas-microsoft-com:office:excel\"";
    _outStream << " " << "xmlns:w=\"http://schemas.openxmlformats.org/wordprocessingml/2006/main\"";
    _outStream << " " << "xmlns:s=\"http://schemas.openxmlformats.org/officeDocument/2006/sharedTypes\"";
    _outStream << " " << "xmlns:w10=\"urn:schemas-microsoft-com:office:word\"";
    _outStream << " " << "xmlns:r=\"http://schemas.openxmlformats.org/officeDocument/2006/relationships\"";
    _outStream << " " << "xmlns:o=\"urn:schemas-microsoft-com:office:office\"";
    _outStream << " " << "xmlns:pvml=\"urn:schemas-microsoft-com:office:powerpoint\"";
    
    _outStream << ">";
    
    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_path())
            {
                (*iter)->get_path().toXmlElem("v:path", "", _outStream);
            }
            else if ((*iter)->has_formulas())
            {
                (*iter)->get_formulas().toXmlElem("v:formulas", "", _outStream);
            }
            else if ((*iter)->has_handles())
            {
                (*iter)->get_handles().toXmlElem("v:handles", "", _outStream);
            }
            else if ((*iter)->has_fill())
            {
                (*iter)->get_fill().toXmlElem("v:fill", "", _outStream);
            }
            else if ((*iter)->has_stroke())
            {
                (*iter)->get_stroke().toXmlElem("v:stroke", "", _outStream);
            }
            else if ((*iter)->has_shadow())
            {
                (*iter)->get_shadow().toXmlElem("v:shadow", "", _outStream);
            }
            else if ((*iter)->has_textbox())
            {
                (*iter)->get_textbox().toXmlElem("v:textbox", "", _outStream);
            }
            else if ((*iter)->has_textpath())
            {
                (*iter)->get_textpath().toXmlElem("v:textpath", "", _outStream);
            }
            else if ((*iter)->has_imagedata())
            {
                (*iter)->get_imagedata().toXmlElem("v:imagedata", "", _outStream);
            }
            else if ((*iter)->has_o_skew())
            {
                (*iter)->get_o_skew().toXmlElem("v:skew", "", _outStream);
            }
            else if ((*iter)->has_o_extrusion())
            {
                (*iter)->get_o_extrusion().toXmlElem("v:extrusion", "", _outStream);
            }
            else if ((*iter)->has_o_callout())
            {
                (*iter)->get_o_callout().toXmlElem("v:callout", "", _outStream);
            }
            else if ((*iter)->has_o_lock())
            {
                (*iter)->get_o_lock().toXmlElem("v:lock", "", _outStream);
            }
            else if ((*iter)->has_o_clippath())
            {
                (*iter)->get_o_clippath().toXmlElem("v:clippath", "", _outStream);
            }
            else if ((*iter)->has_o_signatureline())
            {
                (*iter)->get_o_signatureline().toXmlElem("v:signatureline", "", _outStream);
            }
            else if ((*iter)->has_w10_wrap())
            {
                (*iter)->get_w10_wrap().toXmlElem("v:wrap", "", _outStream);
            }
            else if ((*iter)->has_w10_anchorlock())
            {
                (*iter)->get_w10_anchorlock().toXmlElem("v:anchorlock", "", _outStream);
            }
            else if ((*iter)->has_w10_bordertop())
            {
                (*iter)->get_w10_bordertop().toXmlElem("v:bordertop", "", _outStream);
            }
            else if ((*iter)->has_w10_borderbottom())
            {
                (*iter)->get_w10_borderbottom().toXmlElem("v:borderbottom", "", _outStream);
            }
            else if ((*iter)->has_w10_borderleft())
            {
                (*iter)->get_w10_borderleft().toXmlElem("v:borderleft", "", _outStream);
            }
            else if ((*iter)->has_w10_borderright())
            {
                (*iter)->get_w10_borderright().toXmlElem("v:borderright", "", _outStream);
            }
            else if ((*iter)->has_x_ClientData())
            {
                (*iter)->get_x_ClientData().toXmlElem("v:ClientData", "", _outStream);
            }
            else if ((*iter)->has_pvml_textdata())
            {
                (*iter)->get_pvml_textdata().toXmlElem("v:textdata", "", _outStream);
            }
        }
    }
    
    _outStream << "</v:oval>";
    }

    const oval_element& oval_element::default_instance()
    {    
    if (!oval_element::default_instance_)
    {
        oval_element::default_instance_ = new oval_element();
    }
    return *oval_element::default_instance_;
    }


    // polyline_element
    CT_Path* polyline_element::add_path()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Path* pNewChild = pChildGroup->mutable_path();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Formulas* polyline_element::add_formulas()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Formulas* pNewChild = pChildGroup->mutable_formulas();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Handles* polyline_element::add_handles()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Handles* pNewChild = pChildGroup->mutable_handles();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Fill* polyline_element::add_fill()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Fill* pNewChild = pChildGroup->mutable_fill();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Stroke* polyline_element::add_stroke()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Stroke* pNewChild = pChildGroup->mutable_stroke();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Shadow* polyline_element::add_shadow()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Shadow* pNewChild = pChildGroup->mutable_shadow();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Textbox* polyline_element::add_textbox()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Textbox* pNewChild = pChildGroup->mutable_textbox();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_TextPath* polyline_element::add_textpath()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_TextPath* pNewChild = pChildGroup->mutable_textpath();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_ImageData* polyline_element::add_imagedata()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_ImageData* pNewChild = pChildGroup->mutable_imagedata();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_Skew* polyline_element::add_o_skew()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_Skew* pNewChild = pChildGroup->mutable_o_skew();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_Extrusion* polyline_element::add_o_extrusion()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_Extrusion* pNewChild = pChildGroup->mutable_o_extrusion();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_Callout* polyline_element::add_o_callout()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_Callout* pNewChild = pChildGroup->mutable_o_callout();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_Lock* polyline_element::add_o_lock()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_Lock* pNewChild = pChildGroup->mutable_o_lock();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_ClipPath* polyline_element::add_o_clippath()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_ClipPath* pNewChild = pChildGroup->mutable_o_clippath();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_SignatureLine* polyline_element::add_o_signatureline()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_SignatureLine* pNewChild = pChildGroup->mutable_o_signatureline();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w10::CT_Wrap* polyline_element::add_w10_wrap()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w10::CT_Wrap* pNewChild = pChildGroup->mutable_w10_wrap();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w10::CT_AnchorLock* polyline_element::add_w10_anchorlock()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w10::CT_AnchorLock* pNewChild = pChildGroup->mutable_w10_anchorlock();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w10::CT_Border* polyline_element::add_w10_bordertop()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w10::CT_Border* pNewChild = pChildGroup->mutable_w10_bordertop();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w10::CT_Border* polyline_element::add_w10_borderbottom()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w10::CT_Border* pNewChild = pChildGroup->mutable_w10_borderbottom();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w10::CT_Border* polyline_element::add_w10_borderleft()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w10::CT_Border* pNewChild = pChildGroup->mutable_w10_borderleft();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w10::CT_Border* polyline_element::add_w10_borderright()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w10::CT_Border* pNewChild = pChildGroup->mutable_w10_borderright();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_x::CT_ClientData* polyline_element::add_x_ClientData()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_x::CT_ClientData* pNewChild = pChildGroup->mutable_x_ClientData();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_pvml::CT_Rel* polyline_element::add_pvml_textdata()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_pvml::CT_Rel* pNewChild = pChildGroup->mutable_pvml_textdata();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_Ink* polyline_element::add_o_ink()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_Ink* pNewChild = pChildGroup->mutable_o_ink();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    void polyline_element::clear()
    {    
    m_has_points_attr = false;
    m_points_attr.clear();
    
    {
        vector<ChildGroup_1*>::iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_1.clear();
    }
    }

    void polyline_element::toXml(std::ostream& _outStream) const
    {    
    _outStream << "<v:polyline";
    
    _outStream << " " << "xmlns:v=\"urn:schemas-microsoft-com:vml\"";
    _outStream << " " << "xmlns:x=\"urn:schemas-microsoft-com:office:excel\"";
    _outStream << " " << "xmlns:w=\"http://schemas.openxmlformats.org/wordprocessingml/2006/main\"";
    _outStream << " " << "xmlns:s=\"http://schemas.openxmlformats.org/officeDocument/2006/sharedTypes\"";
    _outStream << " " << "xmlns:w10=\"urn:schemas-microsoft-com:office:word\"";
    _outStream << " " << "xmlns:r=\"http://schemas.openxmlformats.org/officeDocument/2006/relationships\"";
    _outStream << " " << "xmlns:o=\"urn:schemas-microsoft-com:office:office\"";
    _outStream << " " << "xmlns:pvml=\"urn:schemas-microsoft-com:office:powerpoint\"";
    
    if (m_has_points_attr)
    {
        _outStream << " " << "points" << "=\"" << m_points_attr << "\"";
    }
    
    _outStream << ">";
    
    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_path())
            {
                (*iter)->get_path().toXmlElem("v:path", "", _outStream);
            }
            else if ((*iter)->has_formulas())
            {
                (*iter)->get_formulas().toXmlElem("v:formulas", "", _outStream);
            }
            else if ((*iter)->has_handles())
            {
                (*iter)->get_handles().toXmlElem("v:handles", "", _outStream);
            }
            else if ((*iter)->has_fill())
            {
                (*iter)->get_fill().toXmlElem("v:fill", "", _outStream);
            }
            else if ((*iter)->has_stroke())
            {
                (*iter)->get_stroke().toXmlElem("v:stroke", "", _outStream);
            }
            else if ((*iter)->has_shadow())
            {
                (*iter)->get_shadow().toXmlElem("v:shadow", "", _outStream);
            }
            else if ((*iter)->has_textbox())
            {
                (*iter)->get_textbox().toXmlElem("v:textbox", "", _outStream);
            }
            else if ((*iter)->has_textpath())
            {
                (*iter)->get_textpath().toXmlElem("v:textpath", "", _outStream);
            }
            else if ((*iter)->has_imagedata())
            {
                (*iter)->get_imagedata().toXmlElem("v:imagedata", "", _outStream);
            }
            else if ((*iter)->has_o_skew())
            {
                (*iter)->get_o_skew().toXmlElem("v:skew", "", _outStream);
            }
            else if ((*iter)->has_o_extrusion())
            {
                (*iter)->get_o_extrusion().toXmlElem("v:extrusion", "", _outStream);
            }
            else if ((*iter)->has_o_callout())
            {
                (*iter)->get_o_callout().toXmlElem("v:callout", "", _outStream);
            }
            else if ((*iter)->has_o_lock())
            {
                (*iter)->get_o_lock().toXmlElem("v:lock", "", _outStream);
            }
            else if ((*iter)->has_o_clippath())
            {
                (*iter)->get_o_clippath().toXmlElem("v:clippath", "", _outStream);
            }
            else if ((*iter)->has_o_signatureline())
            {
                (*iter)->get_o_signatureline().toXmlElem("v:signatureline", "", _outStream);
            }
            else if ((*iter)->has_w10_wrap())
            {
                (*iter)->get_w10_wrap().toXmlElem("v:wrap", "", _outStream);
            }
            else if ((*iter)->has_w10_anchorlock())
            {
                (*iter)->get_w10_anchorlock().toXmlElem("v:anchorlock", "", _outStream);
            }
            else if ((*iter)->has_w10_bordertop())
            {
                (*iter)->get_w10_bordertop().toXmlElem("v:bordertop", "", _outStream);
            }
            else if ((*iter)->has_w10_borderbottom())
            {
                (*iter)->get_w10_borderbottom().toXmlElem("v:borderbottom", "", _outStream);
            }
            else if ((*iter)->has_w10_borderleft())
            {
                (*iter)->get_w10_borderleft().toXmlElem("v:borderleft", "", _outStream);
            }
            else if ((*iter)->has_w10_borderright())
            {
                (*iter)->get_w10_borderright().toXmlElem("v:borderright", "", _outStream);
            }
            else if ((*iter)->has_x_ClientData())
            {
                (*iter)->get_x_ClientData().toXmlElem("v:ClientData", "", _outStream);
            }
            else if ((*iter)->has_pvml_textdata())
            {
                (*iter)->get_pvml_textdata().toXmlElem("v:textdata", "", _outStream);
            }
            else if ((*iter)->has_o_ink())
            {
                (*iter)->get_o_ink().toXmlElem("v:ink", "", _outStream);
            }
        }
    }
    
    _outStream << "</v:polyline>";
    }

    const polyline_element& polyline_element::default_instance()
    {    
    if (!polyline_element::default_instance_)
    {
        polyline_element::default_instance_ = new polyline_element();
    }
    return *polyline_element::default_instance_;
    }

    bool polyline_element::has_points_attr() const
    {    
    return m_has_points_attr;
    }

    void polyline_element::set_points_attr(const XSD::string_& _points_attr)
    {    
    m_has_points_attr = true;
    m_points_attr = _points_attr;
    }

    const XSD::string_& polyline_element::get_points_attr() const
    {    
    return m_points_attr;
    }


    // rect_element
    CT_Path* rect_element::add_path()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Path* pNewChild = pChildGroup->mutable_path();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Formulas* rect_element::add_formulas()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Formulas* pNewChild = pChildGroup->mutable_formulas();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Handles* rect_element::add_handles()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Handles* pNewChild = pChildGroup->mutable_handles();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Fill* rect_element::add_fill()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Fill* pNewChild = pChildGroup->mutable_fill();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Stroke* rect_element::add_stroke()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Stroke* pNewChild = pChildGroup->mutable_stroke();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Shadow* rect_element::add_shadow()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Shadow* pNewChild = pChildGroup->mutable_shadow();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Textbox* rect_element::add_textbox()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Textbox* pNewChild = pChildGroup->mutable_textbox();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_TextPath* rect_element::add_textpath()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_TextPath* pNewChild = pChildGroup->mutable_textpath();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_ImageData* rect_element::add_imagedata()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_ImageData* pNewChild = pChildGroup->mutable_imagedata();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_Skew* rect_element::add_o_skew()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_Skew* pNewChild = pChildGroup->mutable_o_skew();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_Extrusion* rect_element::add_o_extrusion()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_Extrusion* pNewChild = pChildGroup->mutable_o_extrusion();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_Callout* rect_element::add_o_callout()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_Callout* pNewChild = pChildGroup->mutable_o_callout();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_Lock* rect_element::add_o_lock()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_Lock* pNewChild = pChildGroup->mutable_o_lock();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_ClipPath* rect_element::add_o_clippath()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_ClipPath* pNewChild = pChildGroup->mutable_o_clippath();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_SignatureLine* rect_element::add_o_signatureline()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_SignatureLine* pNewChild = pChildGroup->mutable_o_signatureline();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w10::CT_Wrap* rect_element::add_w10_wrap()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w10::CT_Wrap* pNewChild = pChildGroup->mutable_w10_wrap();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w10::CT_AnchorLock* rect_element::add_w10_anchorlock()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w10::CT_AnchorLock* pNewChild = pChildGroup->mutable_w10_anchorlock();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w10::CT_Border* rect_element::add_w10_bordertop()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w10::CT_Border* pNewChild = pChildGroup->mutable_w10_bordertop();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w10::CT_Border* rect_element::add_w10_borderbottom()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w10::CT_Border* pNewChild = pChildGroup->mutable_w10_borderbottom();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w10::CT_Border* rect_element::add_w10_borderleft()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w10::CT_Border* pNewChild = pChildGroup->mutable_w10_borderleft();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w10::CT_Border* rect_element::add_w10_borderright()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w10::CT_Border* pNewChild = pChildGroup->mutable_w10_borderright();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_x::CT_ClientData* rect_element::add_x_ClientData()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_x::CT_ClientData* pNewChild = pChildGroup->mutable_x_ClientData();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_pvml::CT_Rel* rect_element::add_pvml_textdata()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_pvml::CT_Rel* pNewChild = pChildGroup->mutable_pvml_textdata();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    void rect_element::clear()
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

    void rect_element::toXml(std::ostream& _outStream) const
    {    
    _outStream << "<v:rect";
    
    _outStream << " " << "xmlns:v=\"urn:schemas-microsoft-com:vml\"";
    _outStream << " " << "xmlns:x=\"urn:schemas-microsoft-com:office:excel\"";
    _outStream << " " << "xmlns:w=\"http://schemas.openxmlformats.org/wordprocessingml/2006/main\"";
    _outStream << " " << "xmlns:s=\"http://schemas.openxmlformats.org/officeDocument/2006/sharedTypes\"";
    _outStream << " " << "xmlns:w10=\"urn:schemas-microsoft-com:office:word\"";
    _outStream << " " << "xmlns:r=\"http://schemas.openxmlformats.org/officeDocument/2006/relationships\"";
    _outStream << " " << "xmlns:o=\"urn:schemas-microsoft-com:office:office\"";
    _outStream << " " << "xmlns:pvml=\"urn:schemas-microsoft-com:office:powerpoint\"";
    
    _outStream << ">";
    
    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_path())
            {
                (*iter)->get_path().toXmlElem("v:path", "", _outStream);
            }
            else if ((*iter)->has_formulas())
            {
                (*iter)->get_formulas().toXmlElem("v:formulas", "", _outStream);
            }
            else if ((*iter)->has_handles())
            {
                (*iter)->get_handles().toXmlElem("v:handles", "", _outStream);
            }
            else if ((*iter)->has_fill())
            {
                (*iter)->get_fill().toXmlElem("v:fill", "", _outStream);
            }
            else if ((*iter)->has_stroke())
            {
                (*iter)->get_stroke().toXmlElem("v:stroke", "", _outStream);
            }
            else if ((*iter)->has_shadow())
            {
                (*iter)->get_shadow().toXmlElem("v:shadow", "", _outStream);
            }
            else if ((*iter)->has_textbox())
            {
                (*iter)->get_textbox().toXmlElem("v:textbox", "", _outStream);
            }
            else if ((*iter)->has_textpath())
            {
                (*iter)->get_textpath().toXmlElem("v:textpath", "", _outStream);
            }
            else if ((*iter)->has_imagedata())
            {
                (*iter)->get_imagedata().toXmlElem("v:imagedata", "", _outStream);
            }
            else if ((*iter)->has_o_skew())
            {
                (*iter)->get_o_skew().toXmlElem("v:skew", "", _outStream);
            }
            else if ((*iter)->has_o_extrusion())
            {
                (*iter)->get_o_extrusion().toXmlElem("v:extrusion", "", _outStream);
            }
            else if ((*iter)->has_o_callout())
            {
                (*iter)->get_o_callout().toXmlElem("v:callout", "", _outStream);
            }
            else if ((*iter)->has_o_lock())
            {
                (*iter)->get_o_lock().toXmlElem("v:lock", "", _outStream);
            }
            else if ((*iter)->has_o_clippath())
            {
                (*iter)->get_o_clippath().toXmlElem("v:clippath", "", _outStream);
            }
            else if ((*iter)->has_o_signatureline())
            {
                (*iter)->get_o_signatureline().toXmlElem("v:signatureline", "", _outStream);
            }
            else if ((*iter)->has_w10_wrap())
            {
                (*iter)->get_w10_wrap().toXmlElem("v:wrap", "", _outStream);
            }
            else if ((*iter)->has_w10_anchorlock())
            {
                (*iter)->get_w10_anchorlock().toXmlElem("v:anchorlock", "", _outStream);
            }
            else if ((*iter)->has_w10_bordertop())
            {
                (*iter)->get_w10_bordertop().toXmlElem("v:bordertop", "", _outStream);
            }
            else if ((*iter)->has_w10_borderbottom())
            {
                (*iter)->get_w10_borderbottom().toXmlElem("v:borderbottom", "", _outStream);
            }
            else if ((*iter)->has_w10_borderleft())
            {
                (*iter)->get_w10_borderleft().toXmlElem("v:borderleft", "", _outStream);
            }
            else if ((*iter)->has_w10_borderright())
            {
                (*iter)->get_w10_borderright().toXmlElem("v:borderright", "", _outStream);
            }
            else if ((*iter)->has_x_ClientData())
            {
                (*iter)->get_x_ClientData().toXmlElem("v:ClientData", "", _outStream);
            }
            else if ((*iter)->has_pvml_textdata())
            {
                (*iter)->get_pvml_textdata().toXmlElem("v:textdata", "", _outStream);
            }
        }
    }
    
    _outStream << "</v:rect>";
    }

    const rect_element& rect_element::default_instance()
    {    
    if (!rect_element::default_instance_)
    {
        rect_element::default_instance_ = new rect_element();
    }
    return *rect_element::default_instance_;
    }


    // roundrect_element
    CT_Path* roundrect_element::add_path()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Path* pNewChild = pChildGroup->mutable_path();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Formulas* roundrect_element::add_formulas()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Formulas* pNewChild = pChildGroup->mutable_formulas();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Handles* roundrect_element::add_handles()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Handles* pNewChild = pChildGroup->mutable_handles();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Fill* roundrect_element::add_fill()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Fill* pNewChild = pChildGroup->mutable_fill();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Stroke* roundrect_element::add_stroke()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Stroke* pNewChild = pChildGroup->mutable_stroke();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Shadow* roundrect_element::add_shadow()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Shadow* pNewChild = pChildGroup->mutable_shadow();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Textbox* roundrect_element::add_textbox()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Textbox* pNewChild = pChildGroup->mutable_textbox();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_TextPath* roundrect_element::add_textpath()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_TextPath* pNewChild = pChildGroup->mutable_textpath();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_ImageData* roundrect_element::add_imagedata()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_ImageData* pNewChild = pChildGroup->mutable_imagedata();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_Skew* roundrect_element::add_o_skew()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_Skew* pNewChild = pChildGroup->mutable_o_skew();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_Extrusion* roundrect_element::add_o_extrusion()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_Extrusion* pNewChild = pChildGroup->mutable_o_extrusion();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_Callout* roundrect_element::add_o_callout()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_Callout* pNewChild = pChildGroup->mutable_o_callout();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_Lock* roundrect_element::add_o_lock()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_Lock* pNewChild = pChildGroup->mutable_o_lock();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_ClipPath* roundrect_element::add_o_clippath()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_ClipPath* pNewChild = pChildGroup->mutable_o_clippath();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_o::CT_SignatureLine* roundrect_element::add_o_signatureline()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_o::CT_SignatureLine* pNewChild = pChildGroup->mutable_o_signatureline();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w10::CT_Wrap* roundrect_element::add_w10_wrap()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w10::CT_Wrap* pNewChild = pChildGroup->mutable_w10_wrap();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w10::CT_AnchorLock* roundrect_element::add_w10_anchorlock()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w10::CT_AnchorLock* pNewChild = pChildGroup->mutable_w10_anchorlock();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w10::CT_Border* roundrect_element::add_w10_bordertop()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w10::CT_Border* pNewChild = pChildGroup->mutable_w10_bordertop();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w10::CT_Border* roundrect_element::add_w10_borderbottom()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w10::CT_Border* pNewChild = pChildGroup->mutable_w10_borderbottom();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w10::CT_Border* roundrect_element::add_w10_borderleft()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w10::CT_Border* pNewChild = pChildGroup->mutable_w10_borderleft();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w10::CT_Border* roundrect_element::add_w10_borderright()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w10::CT_Border* pNewChild = pChildGroup->mutable_w10_borderright();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_x::CT_ClientData* roundrect_element::add_x_ClientData()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_x::CT_ClientData* pNewChild = pChildGroup->mutable_x_ClientData();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_pvml::CT_Rel* roundrect_element::add_pvml_textdata()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_pvml::CT_Rel* pNewChild = pChildGroup->mutable_pvml_textdata();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    void roundrect_element::clear()
    {    
    m_has_arcsize_attr = false;
    m_arcsize_attr.clear();
    
    {
        vector<ChildGroup_1*>::iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_1.clear();
    }
    }

    void roundrect_element::toXml(std::ostream& _outStream) const
    {    
    _outStream << "<v:roundrect";
    
    _outStream << " " << "xmlns:v=\"urn:schemas-microsoft-com:vml\"";
    _outStream << " " << "xmlns:x=\"urn:schemas-microsoft-com:office:excel\"";
    _outStream << " " << "xmlns:w=\"http://schemas.openxmlformats.org/wordprocessingml/2006/main\"";
    _outStream << " " << "xmlns:s=\"http://schemas.openxmlformats.org/officeDocument/2006/sharedTypes\"";
    _outStream << " " << "xmlns:w10=\"urn:schemas-microsoft-com:office:word\"";
    _outStream << " " << "xmlns:r=\"http://schemas.openxmlformats.org/officeDocument/2006/relationships\"";
    _outStream << " " << "xmlns:o=\"urn:schemas-microsoft-com:office:office\"";
    _outStream << " " << "xmlns:pvml=\"urn:schemas-microsoft-com:office:powerpoint\"";
    
    if (m_has_arcsize_attr)
    {
        _outStream << " " << "arcsize" << "=\"" << m_arcsize_attr << "\"";
    }
    
    _outStream << ">";
    
    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_path())
            {
                (*iter)->get_path().toXmlElem("v:path", "", _outStream);
            }
            else if ((*iter)->has_formulas())
            {
                (*iter)->get_formulas().toXmlElem("v:formulas", "", _outStream);
            }
            else if ((*iter)->has_handles())
            {
                (*iter)->get_handles().toXmlElem("v:handles", "", _outStream);
            }
            else if ((*iter)->has_fill())
            {
                (*iter)->get_fill().toXmlElem("v:fill", "", _outStream);
            }
            else if ((*iter)->has_stroke())
            {
                (*iter)->get_stroke().toXmlElem("v:stroke", "", _outStream);
            }
            else if ((*iter)->has_shadow())
            {
                (*iter)->get_shadow().toXmlElem("v:shadow", "", _outStream);
            }
            else if ((*iter)->has_textbox())
            {
                (*iter)->get_textbox().toXmlElem("v:textbox", "", _outStream);
            }
            else if ((*iter)->has_textpath())
            {
                (*iter)->get_textpath().toXmlElem("v:textpath", "", _outStream);
            }
            else if ((*iter)->has_imagedata())
            {
                (*iter)->get_imagedata().toXmlElem("v:imagedata", "", _outStream);
            }
            else if ((*iter)->has_o_skew())
            {
                (*iter)->get_o_skew().toXmlElem("v:skew", "", _outStream);
            }
            else if ((*iter)->has_o_extrusion())
            {
                (*iter)->get_o_extrusion().toXmlElem("v:extrusion", "", _outStream);
            }
            else if ((*iter)->has_o_callout())
            {
                (*iter)->get_o_callout().toXmlElem("v:callout", "", _outStream);
            }
            else if ((*iter)->has_o_lock())
            {
                (*iter)->get_o_lock().toXmlElem("v:lock", "", _outStream);
            }
            else if ((*iter)->has_o_clippath())
            {
                (*iter)->get_o_clippath().toXmlElem("v:clippath", "", _outStream);
            }
            else if ((*iter)->has_o_signatureline())
            {
                (*iter)->get_o_signatureline().toXmlElem("v:signatureline", "", _outStream);
            }
            else if ((*iter)->has_w10_wrap())
            {
                (*iter)->get_w10_wrap().toXmlElem("v:wrap", "", _outStream);
            }
            else if ((*iter)->has_w10_anchorlock())
            {
                (*iter)->get_w10_anchorlock().toXmlElem("v:anchorlock", "", _outStream);
            }
            else if ((*iter)->has_w10_bordertop())
            {
                (*iter)->get_w10_bordertop().toXmlElem("v:bordertop", "", _outStream);
            }
            else if ((*iter)->has_w10_borderbottom())
            {
                (*iter)->get_w10_borderbottom().toXmlElem("v:borderbottom", "", _outStream);
            }
            else if ((*iter)->has_w10_borderleft())
            {
                (*iter)->get_w10_borderleft().toXmlElem("v:borderleft", "", _outStream);
            }
            else if ((*iter)->has_w10_borderright())
            {
                (*iter)->get_w10_borderright().toXmlElem("v:borderright", "", _outStream);
            }
            else if ((*iter)->has_x_ClientData())
            {
                (*iter)->get_x_ClientData().toXmlElem("v:ClientData", "", _outStream);
            }
            else if ((*iter)->has_pvml_textdata())
            {
                (*iter)->get_pvml_textdata().toXmlElem("v:textdata", "", _outStream);
            }
        }
    }
    
    _outStream << "</v:roundrect>";
    }

    const roundrect_element& roundrect_element::default_instance()
    {    
    if (!roundrect_element::default_instance_)
    {
        roundrect_element::default_instance_ = new roundrect_element();
    }
    return *roundrect_element::default_instance_;
    }

    bool roundrect_element::has_arcsize_attr() const
    {    
    return m_has_arcsize_attr;
    }

    void roundrect_element::set_arcsize_attr(const XSD::string_& _arcsize_attr)
    {    
    m_has_arcsize_attr = true;
    m_arcsize_attr = _arcsize_attr;
    }

    const XSD::string_& roundrect_element::get_arcsize_attr() const
    {    
    return m_arcsize_attr;
    }

}